#include "performance.h"
#include "SDLMath.h"

#include "sdl_types.h"

#define PTCUT 0.9
#define ETACUT 4.5
// #define PTCUT 1.5
// #define ETACUT 2.4

//__________________________________________________________________________________________________________________________________________________________________________
int main(int argc, char** argv)
{
    // Parse arguments
    parseArguments(argc, argv);

    // Initialize input and output root files
    initializeInputsAndOutputs();

    // creating a set of efficiency plots
    std::vector<SimTrackSetDefinition> list_effSetDef;
    list_effSetDef.push_back(
            SimTrackSetDefinition(/* name  */ "TC",
                                  /* pdgid */ 0,
                                  /* pass  */ [&](unsigned int isim) {return sdl.sim_TC_matched().at(isim) > 0;}
                                  )
        );
    bookEfficiencySets(list_effSetDef);

    // creating a set of fake rate plots
    std::vector<RecoTrackSetDefinition> list_FRSetDef;
    list_FRSetDef.push_back(
            RecoTrackSetDefinition(/* name  */ "TC",
                                   /* pdgid */ 0,
                                   /* pass  */ [&](unsigned int itc) {return sdl.tc_isFake().at(itc) > 0;},
                                   /* pt    */ tas::tc_pt,
                                   /* eta   */ tas::tc_eta,
                                   /* phi   */ tas::tc_phi,
                                   /* type  */ tas::tc_type
                                   )
        );
    bookFakeRateSets(list_FRSetDef);

    // creating a set of duplicate rate plots
    std::vector<RecoTrackSetDefinition> list_DRSetDef;
    list_DRSetDef.push_back(
            RecoTrackSetDefinition(/* name  */ "TC",
                                   /* pdgid */ 0,
                                   /* pass  */ [&](unsigned int itc) {return sdl.tc_isDuplicate().at(itc) > 0;},
                                   /* pt    */ tas::tc_pt,
                                   /* eta   */ tas::tc_eta,
                                   /* phi   */ tas::tc_phi,
                                   /* type  */ tas::tc_type
                                   )
        );
    bookDuplicateRateSets(list_DRSetDef);

    // Book Histograms
    ana.cutflow.bookHistograms(ana.histograms); // if just want to book everywhere

    // Looping input file
    while (ana.looper.nextEvent())
    {

        // If splitting jobs are requested then determine whether to process the event or not based on remainder
        if (ana.job_index != -1 and ana.nsplit_jobs != -1)
        {
            if (ana.looper.getNEventsProcessed() % ana.nsplit_jobs != (unsigned int) ana.job_index)
                continue;
        }

        // Reset all temporary variables necessary for histogramming
        ana.tx.clear();

        // Compute all temporary variables and pack the vector quantities that will get filled to the histograms
        fillEfficiencySets(list_effSetDef);
        fillFakeRateSets(list_FRSetDef);
        fillDuplicateRateSets(list_DRSetDef);

        // Reset all temporary variables necessary for histogramming
        ana.cutflow.fill();
    }

    // Writing output file
    ana.cutflow.saveOutput();

    // The below can be sometimes crucial
    delete ana.output_tfile;

    // Done
    return 0;

}










// ---------------------------------------------------------=============================================-------------------------------------------------------------------
// ---------------------------------------------------------=============================================-------------------------------------------------------------------
// ---------------------------------------------------------=============================================-------------------------------------------------------------------
// ---------------------------------------------------------=============================================-------------------------------------------------------------------
// ---------------------------------------------------------=============================================-------------------------------------------------------------------











//__________________________________________________________________________________________________________________________________________________________________________
void bookEfficiencySets(std::vector<SimTrackSetDefinition>& effsets)
{
    for (auto& effset : effsets)
        bookEfficiencySet(effset);
}

//__________________________________________________________________________________________________________________________________________________________________________
void bookEfficiencySet(SimTrackSetDefinition& effset)
{

    std::vector<float> pt_boundaries = getPtBounds();

    TString category_name = effset.set_name;

    // Denominator tracks' quantities
    ana.tx.createBranch<vector<float>>(category_name + "_ef_denom_pt");
    ana.tx.createBranch<vector<float>>(category_name + "_ef_denom_eta");
    ana.tx.createBranch<vector<float>>(category_name + "_ef_denom_dxy");
    ana.tx.createBranch<vector<float>>(category_name + "_ef_denom_dz");
    ana.tx.createBranch<vector<float>>(category_name + "_ef_denom_phi");

    // Numerator tracks' quantities
    ana.tx.createBranch<vector<float>>(category_name + "_ef_numer_pt");
    ana.tx.createBranch<vector<float>>(category_name + "_ef_numer_eta");
    ana.tx.createBranch<vector<float>>(category_name + "_ef_numer_dxy");
    ana.tx.createBranch<vector<float>>(category_name + "_ef_numer_dz");
    ana.tx.createBranch<vector<float>>(category_name + "_ef_numer_phi");

    // Inefficiencies
    ana.tx.createBranch<vector<float>>(category_name + "_ie_numer_pt");
    ana.tx.createBranch<vector<float>>(category_name + "_ie_numer_eta");
    ana.tx.createBranch<vector<float>>(category_name + "_ie_numer_dxy");
    ana.tx.createBranch<vector<float>>(category_name + "_ie_numer_dz");
    ana.tx.createBranch<vector<float>>(category_name + "_ie_numer_phi");

    ana.histograms.addVecHistogram(category_name + "_ef_denom_pt"          , pt_boundaries      , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_denom_pt");        } );
    ana.histograms.addVecHistogram(category_name + "_ef_denom_ptflatbin"   , 180 , 0.    , 100  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_denom_pt");        } );
    ana.histograms.addVecHistogram(category_name + "_ef_denom_eta"         , 180 , -4.5  , 4.5  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_denom_eta");       } );
    ana.histograms.addVecHistogram(category_name + "_ef_denom_dxy"         , 180 , -30.  , 30.  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_denom_dxy");       } );
    ana.histograms.addVecHistogram(category_name + "_ef_denom_dz"          , 180 , -30.  , 30.  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_denom_dz");        } );
    ana.histograms.addVecHistogram(category_name + "_ef_denom_phi"         , 180 , -M_PI , M_PI , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_denom_phi");       } );

    ana.histograms.addVecHistogram(category_name + "_ef_numer_pt"          , pt_boundaries      , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_numer_pt");        } );
    ana.histograms.addVecHistogram(category_name + "_ef_numer_ptflatbin"   , 180 , 0.    , 100  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_numer_pt");        } );
    ana.histograms.addVecHistogram(category_name + "_ef_numer_eta"         , 180 , -4.5  , 4.5  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_numer_eta");       } );
    ana.histograms.addVecHistogram(category_name + "_ef_numer_dxy"         , 180 , -30.  , 30.  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_numer_dxy");       } );
    ana.histograms.addVecHistogram(category_name + "_ef_numer_dz"          , 180 , -30.  , 30.  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_numer_dz");        } );
    ana.histograms.addVecHistogram(category_name + "_ef_numer_phi"         , 180 , -M_PI , M_PI , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ef_numer_phi");       } );

    ana.histograms.addVecHistogram(category_name + "_ie_numer_pt"          , pt_boundaries      , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ie_numer_pt");        } );
    ana.histograms.addVecHistogram(category_name + "_ie_numer_ptflatbin"   , 180 , 0.    , 100  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ie_numer_pt");        } );
    ana.histograms.addVecHistogram(category_name + "_ie_numer_eta"         , 180 , -4.5  , 4.5  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ie_numer_eta");       } );
    ana.histograms.addVecHistogram(category_name + "_ie_numer_dxy"         , 180 , -30.  , 30.  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ie_numer_dxy");       } );
    ana.histograms.addVecHistogram(category_name + "_ie_numer_dz"          , 180 , -30.  , 30.  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ie_numer_dz");        } );
    ana.histograms.addVecHistogram(category_name + "_ie_numer_phi"         , 180 , -M_PI , M_PI , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_ie_numer_phi");       } );

}

//__________________________________________________________________________________________________________________________________________________________________________
void bookDuplicateRateSets(std::vector<RecoTrackSetDefinition>& DRsets)
{
    for (auto& DRset : DRsets)
    {
        bookDuplicateRateSet(DRset);
    }
}

//__________________________________________________________________________________________________________________________________________________________________________
void bookDuplicateRateSet(RecoTrackSetDefinition& DRset)
{

    std::vector<float> pt_boundaries = getPtBounds();

    TString category_name = DRset.set_name;

    // Denominator tracks' quantities
    ana.tx.createBranch<vector<float>>(category_name + "_dr_denom_pt");
    ana.tx.createBranch<vector<float>>(category_name + "_dr_denom_eta");
    ana.tx.createBranch<vector<float>>(category_name + "_dr_denom_phi");

    // Numerator tracks' quantities
    ana.tx.createBranch<vector<float>>(category_name + "_dr_numer_pt");
    ana.tx.createBranch<vector<float>>(category_name + "_dr_numer_eta");
    ana.tx.createBranch<vector<float>>(category_name + "_dr_numer_phi");

    // Histogram utility object that is used to define the histograms
    ana.histograms.addVecHistogram(category_name + "_dr_denom_pt"  , pt_boundaries     , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_dr_denom_pt"); } );
    ana.histograms.addVecHistogram(category_name + "_dr_denom_eta" , 180 , -4.5  , 4.5  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_dr_denom_eta"); } );
    ana.histograms.addVecHistogram(category_name + "_dr_numer_phi" , 180 , -M_PI , M_PI , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_dr_numer_phi"); } );
    ana.histograms.addVecHistogram(category_name + "_dr_numer_pt"  , pt_boundaries     , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_dr_numer_pt"); } );
    ana.histograms.addVecHistogram(category_name + "_dr_numer_eta" , 180 , -4.5  , 4.5  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_dr_numer_eta"); } );
    ana.histograms.addVecHistogram(category_name + "_dr_denom_phi" , 180 , -M_PI , M_PI , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_dr_denom_phi"); } );

}

//__________________________________________________________________________________________________________________________________________________________________________
void bookFakeRateSets(std::vector<RecoTrackSetDefinition>& FRsets)
{
    for (auto& FRset : FRsets)
    {
        bookFakeRateSet(FRset);
    }
}

//__________________________________________________________________________________________________________________________________________________________________________
void bookFakeRateSet(RecoTrackSetDefinition& FRset)
{

    std::vector<float> pt_boundaries = getPtBounds();

    TString category_name = FRset.set_name;

    // Denominator tracks' quantities
    ana.tx.createBranch<vector<float>>(category_name + "_fr_denom_pt");
    ana.tx.createBranch<vector<float>>(category_name + "_fr_denom_eta");
    ana.tx.createBranch<vector<float>>(category_name + "_fr_denom_phi");

    // Numerator tracks' quantities
    ana.tx.createBranch<vector<float>>(category_name + "_fr_numer_pt");
    ana.tx.createBranch<vector<float>>(category_name + "_fr_numer_eta");
    ana.tx.createBranch<vector<float>>(category_name + "_fr_numer_phi");

    // Histogram utility object that is used to define the histograms
    ana.histograms.addVecHistogram(category_name + "_fr_denom_pt"  , pt_boundaries      , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_fr_denom_pt");  } );
    ana.histograms.addVecHistogram(category_name + "_fr_numer_pt"  , pt_boundaries      , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_fr_numer_pt");  } );
    ana.histograms.addVecHistogram(category_name + "_fr_denom_eta" , 180 , -4.5  , 4.5  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_fr_denom_eta"); } );
    ana.histograms.addVecHistogram(category_name + "_fr_numer_eta" , 180 , -4.5  , 4.5  , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_fr_numer_eta"); } );
    ana.histograms.addVecHistogram(category_name + "_fr_denom_phi" , 180 , -M_PI , M_PI , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_fr_denom_phi"); } );
    ana.histograms.addVecHistogram(category_name + "_fr_numer_phi" , 180 , -M_PI , M_PI , [&, category_name]() { return ana.tx.getBranchLazy<vector<float>>(category_name + "_fr_numer_phi"); } );

}













// ---------------------------------------------------------=============================================-------------------------------------------------------------------
// ---------------------------------------------------------=============================================-------------------------------------------------------------------
// ---------------------------------------------------------=============================================-------------------------------------------------------------------
// ---------------------------------------------------------=============================================-------------------------------------------------------------------
// ---------------------------------------------------------=============================================-------------------------------------------------------------------
















//__________________________________________________________________________________________________________________________________________________________________________
void fillEfficiencySets(std::vector<SimTrackSetDefinition>& effsets)
{
    for (auto& effset : effsets)
    {
        for (unsigned int isimtrk = 0; isimtrk < sdl.sim_pt().size(); ++isimtrk)
        {
            fillEfficiencySet(isimtrk, effset);
        }
    }
}

//__________________________________________________________________________________________________________________________________________________________________________
void fillEfficiencySet(int isimtrk, SimTrackSetDefinition& effset)
{
    //=========================================================
    // NOTE: The following is not applied as the LSTNtuple no longer writes this.
    // const int &bunch = sdl.sim_bunchCrossing()[isimtrk];
    // const int &event = sdl.sim_event()[isimtrk];
    // if (bunch != 0)
    //     return;
    // if (event != 0)
    //     return;
    //=========================================================

    const float &pt = sdl.sim_pt()[isimtrk];
    const float &eta = sdl.sim_eta()[isimtrk];
    const float &dz = sdl.sim_pca_dz()[isimtrk];
    const float &dxy = sdl.sim_pca_dxy()[isimtrk];
    const float &phi = sdl.sim_phi()[isimtrk];
    const int &pdgidtrk = sdl.sim_pdgId()[isimtrk];
    const int &q = sdl.sim_q()[isimtrk];
    const float &vtx_x = sdl.sim_vx()[isimtrk];
    const float &vtx_y = sdl.sim_vy()[isimtrk];
    const float &vtx_z = sdl.sim_vz()[isimtrk];
    const float &vtx_perp = sqrt(vtx_x * vtx_x + vtx_y * vtx_y);


    if (ana.pdgid != 0 and abs(pdgidtrk) != abs(ana.pdgid))
        return;

    if (ana.pdgid == 0 and q == 0)
        return;

    TString category_name = effset.set_name;

    // https://github.com/cms-sw/cmssw/blob/7cbdb18ec6d11d5fd17ca66c1153f0f4e869b6b0/SimTracker/Common/python/trackingParticleSelector_cfi.py
    // https://github.com/cms-sw/cmssw/blob/7cbdb18ec6d11d5fd17ca66c1153f0f4e869b6b0/SimTracker/Common/interface/TrackingParticleSelector.h#L122-L124
    const float vtx_z_thresh = 30;
    const float vtx_perp_thresh = 2.5;

    bool pass = effset.pass(isimtrk);

    // N minus eta cut
    if (pt > PTCUT and abs(vtx_z) < vtx_z_thresh and abs(vtx_perp) < vtx_perp_thresh)
    {
        // vs. eta plot
        ana.tx.pushbackToBranch<float>(category_name + "_ef_denom_eta", eta);
        if (pass)
            ana.tx.pushbackToBranch<float>(category_name + "_ef_numer_eta", eta);
        else
            ana.tx.pushbackToBranch<float>(category_name + "_ie_numer_eta", eta);
    }

    // N minus pt cut
    if (abs(eta) < ETACUT and abs(vtx_z) < vtx_z_thresh and abs(vtx_perp) < vtx_perp_thresh)
    {
        // vs. pt plot
        ana.tx.pushbackToBranch<float>(category_name + "_ef_denom_pt", pt);
        if (pass)
            ana.tx.pushbackToBranch<float>(category_name + "_ef_numer_pt", pt);
        else
            ana.tx.pushbackToBranch<float>(category_name + "_ie_numer_pt", pt);
    }

    // N minus dxy cut
    if (abs(eta) < ETACUT and pt > PTCUT and abs(vtx_z) < vtx_z_thresh)
    {
        // vs. dxy plot
        ana.tx.pushbackToBranch<float>(category_name + "_ef_denom_dxy", dxy);
        if (pass)
            ana.tx.pushbackToBranch<float>(category_name + "_ef_numer_dxy", dxy);
        else
            ana.tx.pushbackToBranch<float>(category_name + "_ie_numer_dxy", dxy);
    }

    // N minus dz cut
    if (abs(eta) < ETACUT and pt > PTCUT and abs(vtx_perp) < vtx_perp_thresh)
    {
        // vs. dz plot
        ana.tx.pushbackToBranch<float>(category_name + "_ef_denom_dz", dz);
        if (pass)
            ana.tx.pushbackToBranch<float>(category_name + "_ef_numer_dz", dz);
        else
            ana.tx.pushbackToBranch<float>(category_name + "_ie_numer_dz", dz);
    }

    // All phase-space cuts
    if (abs(eta) < ETACUT and pt > PTCUT and abs(vtx_z) < vtx_z_thresh and abs(vtx_perp) < vtx_perp_thresh)
    {
        // vs. Phi plot
        ana.tx.pushbackToBranch<float>(category_name + "_ef_denom_phi", phi);
        if (pass)
            ana.tx.pushbackToBranch<float>(category_name + "_ef_numer_phi", phi);
        else
            ana.tx.pushbackToBranch<float>(category_name + "_ie_numer_phi", phi);
    }

}

//__________________________________________________________________________________________________________________________________________________________________________
void fillFakeRateSets(std::vector<RecoTrackSetDefinition>& FRsets)
{
    for (auto& FRset : FRsets)
    {
        for (unsigned int itc = 0; itc < FRset.pt().size(); ++itc)
        {
            fillFakeRateSet(itc, FRset);
        }
    }
}

//__________________________________________________________________________________________________________________________________________________________________________
void fillFakeRateSet(int itc, RecoTrackSetDefinition& FRset)
{
    float pt = 0;
    float eta = 0;
    float phi = 0;
    int type = 0;
    bool pT5Found = false;
    bool pT3Found = false;
    bool T5Found = false;
    bool pLSFound = false;
    if (FRset.set_name.Contains("TC_"))
    {
        pt = FRset.pt().at(itc);
        eta = FRset.eta().at(itc);
        phi = FRset.phi().at(itc);
        type = FRset.type().at(itc);
        if (type == 7) pT5Found = true;
        if (type == 5) pT3Found = true;
        if (type == 4) T5Found = true;
        if (type == 8) pLSFound = true;
    }

    TString category_name = FRset.set_name;
    bool pass = FRset.pass(itc);

    if (pt > PTCUT)
    {
        ana.tx.pushbackToBranch<float>(category_name + "_fr_denom_eta", eta);
        if (pass)
            ana.tx.pushbackToBranch<float>(category_name + "_fr_numer_eta", eta);
    }
    if (abs(eta) < ETACUT)
    {
        ana.tx.pushbackToBranch<float>(category_name + "_fr_denom_pt", pt);
        if (pass)
            ana.tx.pushbackToBranch<float>(category_name + "_fr_numer_pt", pt);
    }
    if (abs(eta) < ETACUT and pt > PTCUT)
    {
        ana.tx.pushbackToBranch<float>(category_name + "_fr_denom_phi", phi);
        if (pass)
            ana.tx.pushbackToBranch<float>(category_name + "_fr_numer_phi", phi);
    }

}


//__________________________________________________________________________________________________________________________________________________________________________
void fillDuplicateRateSets(std::vector<RecoTrackSetDefinition>& DRsets)
{
    for (auto& DRset : DRsets)
    {
        for (unsigned int itc = 0; itc < DRset.pt().size(); ++itc)
        {
            fillDuplicateRateSet(itc, DRset);
        }
    }
}

//__________________________________________________________________________________________________________________________________________________________________________
void fillDuplicateRateSet(int itc, RecoTrackSetDefinition& DRset)
{
    float pt = 0;
    float eta = 0;
    float phi = 0;
    int type = 0;
    bool pT5Found = false;
    bool pT3Found = false;
    bool T5Found = false;
    bool pLSFound = false;
    if (DRset.set_name.Contains("TC_"))
    {
        pt = DRset.pt().at(itc);
        eta = DRset.eta().at(itc);
        phi = DRset.phi().at(itc);
        type = DRset.type().at(itc);
        if (type == 7) pT5Found = true;
        if (type == 5) pT3Found = true;
        if (type == 4) T5Found = true;
        if (type == 8) pLSFound = true;
    }

    TString category_name = DRset.set_name;
    bool pass = DRset.pass(itc);

    if (pt > PTCUT)
    {
        ana.tx.pushbackToBranch<float>(category_name + "_dr_denom_eta", eta);
        if (pass)
            ana.tx.pushbackToBranch<float>(category_name + "_dr_numer_eta", eta);
    }
    if (abs(eta) < ETACUT)
    {
        ana.tx.pushbackToBranch<float>(category_name + "_dr_denom_pt", pt);
        if (pass)
            ana.tx.pushbackToBranch<float>(category_name + "_dr_numer_pt", pt);
    }
    if (abs(eta) < ETACUT and pt > PTCUT)
    {
        ana.tx.pushbackToBranch<float>(category_name + "_dr_denom_phi", phi);
        if (pass)
            ana.tx.pushbackToBranch<float>(category_name + "_dr_numer_phi", phi);
    }
}

