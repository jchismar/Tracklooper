#ifndef ModuleConnectionMap_h
#define ModuleConnectionMap_h

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>

#ifdef LST_IS_CMSSW_PACKAGE
#include "RecoTracker/LSTCore/interface/alpaka/Constants.h"
#else
#include "Constants.h"
#endif

namespace SDL {
  class ModuleConnectionMap {
  private:
    std::map<unsigned int, std::vector<unsigned int>> moduleConnections_;

  public:
    ModuleConnectionMap();
    ModuleConnectionMap(std::string filename);
    ~ModuleConnectionMap();

    void load(std::string);
    void add(std::string);
    void print();

    const std::vector<unsigned int>& getConnectedModuleDetIds(unsigned int detid) const;
    int size() const;
  };

  using MapPLStoLayer = std::array<std::array<ModuleConnectionMap, 4>, 3>;
}  // namespace SDL

#endif
