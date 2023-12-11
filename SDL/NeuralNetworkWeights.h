#ifndef NeuralNetworkWeights_cuh
#define NeuralNetworkWeights_cuh

namespace T5DNN {
  ALPAKA_STATIC_ACC_MEM_GLOBAL const float bias_0[32] = {
      -4.5069356f, -5.8842053f, 1.0793180f,  -0.1540973f, -0.4705772f, 6.4027028f,  -0.6620818f, -7.0734525f,
      0.6211641f,  4.9630723f,  3.4310920f,  -0.8856288f, 4.5843782f,  -6.0180559f, 0.0126438f,  -1.5725276f,
      -0.8549317f, -6.8545237f, -1.2129461f, 3.0617838f,  -0.3911322f, 0.0799793f,  -2.5398655f, -0.5780622f,
      2.8533990f,  -0.1777968f, -2.6457164f, -0.7976936f, 4.5644889f,  -2.1747942f, 3.4286616f,  -10.1073380f};
  ALPAKA_STATIC_ACC_MEM_GLOBAL const float wgtT_0[38][32] = {
      {6.1269712f,  -10.6625051f, 17.4907818f,  -0.0019928f, -3.4468415f,  1.6674044f,   -7.8957767f, 2.2077549f,
       9.5517254f,  -5.1345053f,  -30.1643391f, 4.0148559f,  -19.8330841f, -18.3806915f, 0.1334764f,  1.6213616f,
       -4.1423774f, -15.3062429f, -1.0209556f,  1.5580219f,  0.7426265f,   0.0033929f,   1.3924170f,  0.9196110f,
       -0.8995734f, 1.0594707f,   39.4390869f,  8.7642002f,  28.4583893f,  -5.9235659f,  3.7221889f,  14.4167147f},
      {1.7863803f,  -0.6068707f, 0.3166098f,  -0.0608759f, 0.5939785f, 0.4870262f,  -3.1375074f, -17.7147388f,
       -0.7231818f, -9.3808413f, 2.2070611f,  15.7461920f, 0.9355862f, 2.3942475f,  -0.0671409f, 3.5954301f,
       -3.0463996f, -2.0748904f, -0.5450584f, -4.4800100f, 0.6074556f, -0.0161482f, 3.0624702f,  -4.5688419f,
       2.9881518f,  -0.3714012f, -0.0387531f, -0.7699140f, 4.4028845f, 5.0333014f,  -4.7350726f, -8.6568584f},
      {5.6548429f,  -0.0207700f, 0.1785973f, 0.0881671f,  0.2530097f,   -0.1893259f, -0.1105739f, -0.5183877f,
       1.0728362f,  0.1833011f,  1.7765219f, 0.3127359f,  0.0455277f,   -0.1442616f, -0.1048361f, -0.1235604f,
       -0.1217661f, -0.5487315f, 0.7575656f, -0.1177454f, -17.0993137f, 0.1628031f,  0.2789381f,  0.5304270f,
       0.0837841f,  -3.1120780f, 0.0074821f, -0.1648044f, -0.3395336f,  0.3958135f,  0.8718957f,  -1.1980486f},
      {0.2401041f,  -0.0585765f, -0.0144584f, 0.0411095f,  0.0752229f, 0.0292672f,  -0.2437613f, -1.4396472f,
       -0.0971315f, -1.7181139f, 0.2417643f,  2.2030578f,  0.0566049f, 0.1081589f,  -0.1060181f, 0.3473758f,
       -0.7095683f, -0.0345675f, 0.2794849f,  -1.1702278f, 0.2622930f, -0.0072611f, 0.5026371f,  -1.2882922f,
       -0.4712771f, 0.0597130f,  -0.0039970f, -0.6050836f, 0.1554724f, 1.0991164f,  -0.4975886f, 0.2597970f},
      {0.0766028f,  0.0218421f,  -0.1739017f, -0.0076569f, 0.0384461f,  -0.1841756f, 0.9677940f,  -3.1114254f,
       2.3830564f,  2.0706992f,  -0.9643140f, 0.7361387f,  -0.0060253f, -0.1554846f, -0.0831100f, 2.8754771f,
       -1.4403527f, -0.5281797f, 0.5157787f,  4.2405987f,  0.4807618f,  0.0217647f,  -1.2626950f, 0.9145837f,
       -0.3931780f, 0.3426280f,  -0.0065206f, -0.7510439f, -0.4555758f, 2.7724340f,  -1.2173026f, 0.1039017f},
      {0.5685715f,  0.3927337f,  0.4942532f,  -0.0671033f, -0.2808350f, -0.0336000f, -1.3983957f, 0.9876546f,
       -2.3840380f, 0.7315395f,  -2.2009561f, -1.4631602f, -0.4672308f, -0.4994236f, 0.1169335f,  -1.1894208f,
       -1.2692982f, 0.3303853f,  -2.0147655f, -0.9912014f, 1.0042895f,  0.1121151f,  -1.0789106f, -2.2821584f,
       -6.6459913f, -0.0959398f, -0.0068429f, -2.8177626f, 0.3213172f,  -2.6832986f, -4.7613306f, -0.9985733f},
      {1.4419515f,  -0.3864825f, -0.6756768f, -0.1273375f, 0.4321181f, 0.3354745f,  -0.8236564f, -2.8190827f,
       0.7090831f,  1.9072700f,  -3.1834064f, -2.6938572f, 0.5051147f, 1.4382831f,  0.1241910f,  -0.7352629f,
       0.7703634f,  -1.7556250f, -2.1104112f, 3.0603442f,  1.9873468f, -0.0358815f, -1.0087154f, 3.8253262f,
       -0.5466214f, 0.0875162f,  0.2691758f,  0.7121435f,  1.9314718f, -0.1580560f, 3.6484149f,  -5.3173709f},
      {6.9104381f,  -0.0033664f, -1.4405546f, -0.1768288f, 0.2028089f,  -0.1012344f, -4.4735684f, 0.6354278f,
       4.3039737f,  0.2056303f,  1.8338999f,  -1.1351355f, 0.1015760f,  -0.0733253f, -0.0561627f, 2.5292397f,
       1.6314448f,  -0.9333628f, -0.7773662f, 0.8313186f,  -0.7829623f, 0.1265118f,  0.5922315f,  -0.3463379f,
       -1.3269740f, -3.3302619f, -0.0061799f, 2.3374722f,  0.0880938f,  0.7470241f,  -0.4205743f, -4.7557602f},
      {0.0380794f,  0.0947470f,  0.0419397f,  0.0582226f,  -0.0603404f, 0.0234028f,  -0.2575402f, 0.4125248f,
       0.3035339f,  0.2663808f,  -0.6092452f, -1.4727812f, 0.0247187f,  -0.0539688f, -0.0150413f, 0.2094955f,
       0.5379737f,  -0.3255228f, -0.5639279f, 0.0786276f,  0.6703192f,  0.1557026f,  -0.2753083f, 1.1463971f,
       -0.9372965f, 0.5657740f,  0.0041413f,  0.0870248f,  0.0101520f,  -0.8214461f, 0.1212932f,  1.5648646f},
      {-0.0969819f, 0.0137566f,  1.3515147f,  -0.0155047f, -0.1416170f, -0.1636726f, 0.5184190f,  0.4732984f,
       0.6815788f,  -1.0522166f, -0.4486531f, -0.0516016f, 0.0201894f,  -0.0849667f, -0.0861271f, -1.2027841f,
       1.2458711f,  -0.7061657f, 1.0381308f,  -0.3450044f, -0.1300479f, -0.0828402f, 0.6859242f,  -1.0575374f,
       0.6947553f,  -0.0922188f, 0.0199132f,  0.8038982f,  -0.1734094f, -0.1057449f, 1.6305015f,  -0.0688597f},
      {-1.8151448f, 0.1024327f,  1.7063105f,  0.1130912f,  -0.1081472f, -0.2904744f, -1.3465070f, -1.0455177f,
       -0.4581082f, -3.2220871f, 0.5221398f,  -5.1637673f, 0.0811146f,  -0.1326323f, -0.0379338f, -3.0439703f,
       -2.4246936f, -0.3670847f, -3.1256330f, -1.6595014f, -3.4715190f, -0.1526113f, -1.0420206f, 0.9536474f,
       -3.2932863f, 1.6048199f,  0.0025162f,  -3.6049840f, 0.0604250f,  -2.2404826f, 1.8406851f,  -3.1381185f},
      {1.2985691f, -1.1044264f, 0.9062797f,  -0.0788333f, 0.2694912f,  0.0032800f,  -0.0574267f, 0.9734111f,
       1.1532565f, 2.6786125f,  -3.8574269f, -2.2871449f, -0.1261243f, 1.0545347f,  -0.1454154f, -0.5609738f,
       1.8385800f, -0.8035598f, -1.7668265f, 5.1665063f,  0.7966110f,  0.0940206f,  -2.3943975f, 2.3344002f,
       1.0342182f, 0.4806454f,  -0.3880928f, 0.6998246f,  1.4011886f,  -1.7313483f, 4.9702630f,  -6.0058608f},
      {1.0300356f,  0.0616315f,  -0.1113776f, -0.1694220f, 0.7159944f,  0.0626456f,  2.0994680f,  0.3452290f,
       -3.0487001f, 0.0654031f,  -1.1510723f, 0.5370992f,  -0.0290704f, -0.0300795f, 0.0751569f,  -0.2345951f,
       -0.3472281f, 0.4424143f,  1.2444530f,  -0.2114656f, 0.7865694f,  -0.0709381f, -0.1839961f, -0.0529834f,
       0.5867608f,  -3.8793530f, -0.0814745f, -0.6368676f, 0.0361213f,  -0.5549288f, 0.5661780f,  1.8374584f},
      {0.3345098f,  0.0068199f,  -0.4205509f, -0.1088801f, -0.1043202f, -0.0040804f, 0.3400922f,  0.2673528f,
       -0.6050695f, 0.4443954f,  -0.4319905f, -0.6044132f, -0.0260679f, 0.0137036f,  0.0765494f,  -0.0095099f,
       0.5880439f,  -0.0083854f, -0.2407522f, 0.1942379f,  0.6554548f,  -0.1322891f, -0.8298992f, 0.7909554f,
       1.0528831f,  0.1970959f,  0.0754069f,  -0.0947960f, -0.0279494f, -0.5888316f, 0.8919419f,  0.4828835f},
      {0.3995822f,  -0.2139665f, 0.3982936f,  -0.1285759f, -0.3445527f, -0.1167238f, -0.1263519f, 0.8393803f,
       -0.7758383f, 0.0719291f,  -0.0134762f, 0.1715237f,  0.0796666f,  0.1023507f,  -0.1172728f, -1.2364722f,
       1.2592632f,  -0.3168479f, 0.7487004f,  -1.5170647f, -0.2235429f, -0.1620898f, 1.4064828f,  -1.0821995f,
       0.0740103f,  -1.0412805f, -0.0621277f, 0.2439800f,  0.2684972f,  -1.1661061f, 0.7859434f,  -0.6170313f},
      {2.1615884f,  0.1431713f,  0.0642652f,  -0.0522325f, -0.2658786f, -0.0245810f, -1.6857448f, -0.6685011f,
       -0.6978170f, -0.8716729f, 0.3129902f,  -2.5870812f, -0.2855283f, -0.3205920f, -0.0084069f, 1.3182145f,
       -0.6923816f, -0.3730274f, -2.3638811f, -1.1128502f, -2.4709859f, 0.1349022f,  -0.3574466f, -0.6597407f,
       -4.1122031f, 0.2240651f,  0.1806145f,  -1.6836300f, -0.0766231f, -3.2611966f, 0.0091456f,  -0.0997367f},
      {5.2476101f,  -0.1966512f, 4.8935304f,   -0.1551689f, 1.6919724f,   -0.8324367f, 14.3318472f, -0.3503132f,
       10.3614969f, -9.1522884f, -0.2543063f,  -1.8476851f, 16.7961140f,  9.9541416f,  -0.0434563f, -9.6973553f,
       -5.0469398f, 6.1688442f,  7.6429725f,   -7.3149266f, 1.2345183f,   0.1412155f,  0.7114770f,  -1.6378664f,
       5.1548996f,  0.3686100f,  -45.3027611f, 3.0492647f,  -37.3445892f, 2.7421410f,  -2.7958770f, -25.2034016f},
      {1.4597454f, -1.0561740f, 0.9751291f,  0.0446527f,  0.3691662f,  0.1006782f,  0.1418435f,  0.8871480f,
       1.1603093f, 2.8034730f,  -4.0856910f, -1.9786842f, -0.2206208f, 0.9539357f,  0.0868183f,  -0.6811873f,
       1.9642411f, -0.8065316f, -2.0244894f, 5.2936082f,  0.6120632f,  -0.1194160f, -2.3925939f, 2.5555069f,
       1.0149733f, 0.4607603f,  -0.2197217f, 0.5703423f,  1.4049014f,  -1.5900208f, 5.1645074f,  -6.0569463f},
      {0.9000676f,  -0.0028781f, -0.1967366f, 0.1039593f,  0.7993248f,  0.0655172f,  2.2296758f,  0.4391927f,
       -3.0292840f, 0.0334536f,  -1.1728534f, 0.3479103f,  -0.1190938f, 0.0410203f,  0.1146637f,  -0.2958017f,
       -0.3240463f, 0.4361866f,  1.0564958f,  -0.1989332f, 0.5194008f,  -0.0628912f, -0.1733121f, -0.1255383f,
       0.5990249f,  -3.7692382f, 0.0995128f,  -0.7101220f, -0.0785123f, -0.3514554f, 0.6662078f,  2.0991604f},
      {0.1781942f,  -0.1873588f, -0.4653996f, -0.0153059f, -0.1399561f, -0.0498718f, 0.4552556f,  0.2300792f,
       -0.7682312f, 0.4342302f,  -0.3787803f, -0.6089386f, -0.1049337f, 0.0395331f,  0.0220332f,  0.0114750f,
       0.4672548f,  0.1284784f,  -0.2472819f, 0.2892784f,  0.4788667f,  0.0472555f,  -0.6593549f, 0.6508777f,
       0.9286987f,  0.3043948f,  -0.0635985f, 0.0814399f,  -0.1168853f, -0.6688027f, 0.8876534f,  0.4865684f},
      {0.4024099f,  0.0480259f,  0.4588822f,  -0.1793082f, -0.2151573f, -0.1871128f, -0.1502780f, 1.1011307f,
       -0.9467706f, 0.2632496f,  -0.1257263f, -0.0241331f, 0.2280627f,  0.0878608f,  -0.1334262f, -1.1642927f,
       1.0943586f,  -0.4799654f, 0.5981907f,  -1.5051398f, -0.4235946f, 0.0012827f,  1.2342577f,  -0.8281875f,
       0.2776567f,  -1.0362227f, 0.0408372f,  0.1540821f,  0.1777556f,  -1.2684357f, 0.8836584f,  -0.4001710f},
      {2.1558056f,  0.2082023f,  0.0863442f,  0.0364868f,  -0.3985825f, 0.0307202f,  -1.8889453f, -0.5614714f,
       -0.7311882f, -0.8075573f, 0.4895108f,  -2.7770483f, -0.3121874f, -0.1671291f, -0.1281284f, 1.3212786f,
       -0.5310181f, -0.1974759f, -2.6240873f, -0.8320529f, -2.3875966f, -0.0286360f, -0.6263188f, -0.6553424f,
       -4.1658955f, -0.0601300f, 0.0946256f,  -1.6795633f, -0.1251303f, -3.0974686f, 0.2412274f,  -0.0687501f},
      {2.0523887f,  -0.6387668f, 2.0633900f,  -0.0550964f, 0.5181718f,  -0.4202190f, 1.8569367f, 0.8295385f,
       0.8555872f,  2.4727983f,  -0.2072828f, -1.9006120f, 0.5379534f,  0.4463673f,  0.1468820f, 0.4918649f,
       -3.4016700f, 0.2884440f,  -1.9418719f, 4.5157170f,  -0.5160927f, -0.0199372f, 3.1353824f, -0.9863126f,
       -1.5135859f, 0.7576568f,  0.6715558f,  2.7409093f,  0.9291748f,  -0.3247162f, 1.8204515f, -8.9181070f},
      {-0.1428107f, -0.0829889f, 0.4213613f,  0.0225415f,  1.2238166f, 0.0477106f,  0.3031853f,  -0.7466553f,
       2.0663500f,  0.7588379f,  0.3689216f,  -0.2003786f, 0.1242338f, 0.1693589f,  -0.0351716f, -0.0186597f,
       -0.0189417f, 0.5468715f,  -0.2862698f, -0.1311738f, 3.0747476f, -0.0310747f, 0.0943165f,  0.3139819f,
       0.6274695f,  -1.8314874f, 0.0147495f,  0.3554756f,  0.3829916f, 0.4891713f,  0.1328600f,  1.0535098f},
      {0.0534900f,  0.1787969f,  -0.0571320f, -0.0685673f, 0.1968977f,  0.0374476f,  0.7876674f,  0.0828491f,
       0.6444036f,  -0.2203166f, -0.2383427f, 0.5397566f,  0.0106769f,  -0.1230072f, -0.0135021f, -0.5691944f,
       -1.5040319f, 0.0406933f,  -0.0025478f, 0.9251419f,  -1.7180276f, -0.1112956f, 1.4840862f,  0.0407115f,
       -0.0100329f, 0.0583593f,  -0.0110524f, 0.7431355f,  -0.0971857f, -0.5501527f, -0.6371027f, -0.1935233f},
      {-0.6455778f, 0.2317368f,  0.9285696f,  -0.1415854f, 0.0822560f,  0.2488030f,  -2.6992166f, 0.0884904f,
       0.6735302f,  -0.1467820f, 0.5641044f,  0.6436581f,  0.0818401f,  -0.0336634f, -0.0729000f, -0.1206900f,
       -2.5739892f, 0.5776953f,  0.9531668f,  -1.2362405f, -0.0615577f, -0.0143544f, -2.7525210f, 1.3738545f,
       0.2751348f,  -1.7463943f, -0.0020144f, 2.4814103f,  0.1716725f,  -0.7055540f, -0.3474010f, 0.4482578f},
      {-0.2526205f, -0.7463821f, -3.6076138f, -0.1511098f, 0.1216256f, 0.0888247f,  -1.0190924f, -1.3260181f,
       -0.0443211f, -4.8911066f, -3.4385188f, -6.0057454f, 0.3340450f, 0.2997236f,  -0.0907855f, 0.7500492f,
       -0.4007562f, 1.9382039f,  0.5687234f,  2.6511824f,  4.7703862f, 0.0006749f,  -0.0201394f, -3.5885489f,
       -4.1518898f, 0.0807014f,  -0.0584071f, -0.8100027f, 0.7697087f, -0.8038046f, -1.2945876f, -4.0110312f},
      {0.4337017f,  -1.1532011f, 2.0740633f, 0.0271806f,  0.6654227f,  0.1012998f, -4.0791736f, 1.2631345f,
       1.9511020f,  2.3272331f,  1.2707534f, 1.6306664f,  0.4936035f,  0.8285242f, 0.0807625f,  3.8652387f,
       0.0281145f,  1.6877037f,  1.2557380f, -0.3036775f, 0.5604967f,  0.1551418f, -0.9599600f, -6.3067718f,
       -0.6352320f, 0.8058553f,  0.3657880f, -2.0491202f, -0.3926269f, 2.5650854f, 1.3697821f,  -8.3070078f},
      {5.1334143f,  -0.0351738f, -0.4774780f, -0.0679726f, 1.4569254f,  0.0580191f,  -0.3649136f, -0.2298838f,
       -3.3826666f, -0.7392708f, -0.6036060f, -0.2612940f, -0.1877640f, -0.1145124f, -0.0042578f, -0.0311193f,
       -0.0320479f, 0.5270581f,  -0.4324475f, 0.2681437f,  4.7813129f,  -0.0222701f, -0.0525629f, -0.2861001f,
       -0.1251072f, 3.9112861f,  0.0045046f,  -0.0426071f, -0.3299106f, -0.0686970f, -0.1602017f, -0.0070103f},
      {-0.6633690f, 0.0103367f, 0.5998458f,  0.1256577f,  -0.0359184f, -0.0176820f, -0.6458368f, -0.0370536f,
       0.3542259f,  0.1394724f, 0.8255956f,  0.2501569f,  0.0320156f,  -0.0256806f, 0.0277949f,  0.0036392f,
       0.2825173f,  0.1400358f, 1.0011463f,  -0.6792242f, 0.0672508f,  0.0728705f,  -0.1089695f, -1.0414587f,
       -0.4135485f, 0.4293025f, -0.0041241f, -0.9564193f, 0.0314900f,  0.8658463f,  -0.7734696f, -0.7610567f},
      {-0.0200122f, -0.0749178f, -1.5026549f, -0.0387432f, -0.0713735f, 0.1214790f, 1.8730290f,  -0.0552839f,
       -1.6867150f, 0.2282097f,  0.7161849f,  -0.1018546f, -0.1092003f, 0.0365504f, -0.1326883f, 1.2310545f,
       0.1800210f,  0.7024739f,  -2.9606545f, 1.2275347f,  -0.2050014f, 0.0940569f, 0.4761694f,  0.8812068f,
       -0.0083424f, -1.5406264f, 0.0061815f,  -2.7606382f, 0.0248556f,  1.1086880f, -1.3608936f, 1.0795454f},
      {0.9734020f, 0.3905411f,  -3.7008634f, 0.0013557f,  0.1649124f,  0.9935362f,  1.3489184f,  0.9505764f,
       0.7966231f, -0.1627246f, -2.5754328f, 1.4892205f,  0.8586300f,  0.6974363f,  0.1320204f,  -0.7840260f,
       0.3121157f, 0.0966901f,  2.7447381f,  1.8256680f,  0.7229405f,  -0.1723188f, 0.9145948f,  -2.1376033f,
       0.5259342f, 0.0731194f,  -0.2908303f, -0.2603913f, -0.2326528f, 3.6684167f,  -0.2883157f, -2.8546307f},
      {-4.8917460f, 6.7944999f,  -0.2255474f, 0.1051999f,  3.9000113f,  2.0624907f,  5.3019547f,  10.0209141f,
       1.1268179f,  2.2669628f,  -6.5002980f, 1.8408583f,  5.3039579f,  2.2055962f,  0.1055369f,  1.7230233f,
       6.9605255f,  7.7025104f,  2.9880707f,  -0.9274251f, -0.2287160f, -0.0206735f, 0.6885675f,  2.8179996f,
       -7.1129837f, -1.3772345f, 3.8655453f,  -5.9388318f, -0.0469947f, 7.2763596f,  -6.3536129f, -17.0069847f},
      {1.8787041f, -0.9953383f, -1.4839923f, 0.1308209f, 0.3657510f, 0.3106483f, -1.4158971f, -6.7449651f,
       0.6553892f, -4.5046172f, -3.5489719f, 3.5363002f, 0.5454772f, 2.3521471f, 0.1612140f,  -0.9744226f,
       0.6546553f, -2.7179255f, -1.7758157f, 0.3089439f, 1.7462813f, 0.1654593f, -0.2440207f, 3.9501827f,
       1.3750844f, 0.0596805f,  -0.1977254f, 0.0264880f, 2.6396444f, 1.0816911f, 3.6413448f,  -6.0299959f},
      {-4.1295738f, 0.1044480f,  0.2131937f,  0.0420826f,  0.5292229f,  0.0090477f,  -0.0973486f, 0.9596778f,
       2.9579651f,  -0.6364226f, -1.7556342f, 0.1539868f,  -0.1273174f, -0.1348504f, 0.1257833f,  -1.4168571f,
       -1.0960362f, 0.0482449f,  -1.4395387f, -0.2524115f, -2.9162085f, -0.0451428f, -0.4021681f, -0.5756381f,
       0.0515293f,  -3.1996479f, -0.0007676f, -1.3878343f, -0.2864279f, -0.9579773f, -1.0999249f, 1.6500067f},
      {-2.4806111f, -6.8115449f, 3.2805641f,  0.1187415f,  -0.9950783f, 6.2553434f,  -1.6450261f, -6.1463733f,
       2.7507148f,  4.2995782f,  0.0461297f,  -0.5417359f, 2.4306326f,  -7.3530145f, 0.0698273f,  -0.9394333f,
       -1.3595498f, -7.5141478f, -1.4911395f, 3.2300410f,  0.1203540f,  0.0314884f,  -2.0116949f, -0.8167119f,
       2.4133310f,  0.1920709f,  1.0619365f,  0.2459123f,  6.9166069f,  -2.6384118f, 3.6829739f,  -7.2385545f},
      {0.9408096f,  14.9067144f, 1.7709646f,   0.1105646f,  -0.5600107f,  -15.3188124f, -12.3718462f, -1.8893757f,
       13.6364670f, -5.7327847f, -14.1805468f, 1.0581509f,  -14.2186184f, 14.8948650f,  0.0190344f,   5.4395180f,
       6.7243400f,  9.8468456f,  4.5144215f,   -1.4551491f, 1.1032411f,   -0.0317988f,  2.3398454f,   -3.1671596f,
       -7.7541409f, 1.1255593f,  6.7340465f,   -4.4448423f, -9.1472626f,  -3.1959128f,  4.4181323f,   -2.7904994f},
      {-2.1621978f, -4.7202382f, 1.7378219f,  0.1417439f,  -0.5000908f, 5.4468708f,  1.4260571f,  -6.6136570f,
       1.5713804f,  3.4479704f,  2.7354901f,  -0.7388076f, 5.4666147f,  -3.8697338f, -0.1368596f, -2.7903373f,
       -1.2043713f, -4.9554005f, 0.3324645f,  1.6767365f,  0.1156244f,  -0.0326964f, -2.0945346f, -0.4590589f,
       3.0942657f,  0.0015020f,  -6.2626700f, -0.3969755f, 0.7717427f,  -1.9667094f, 2.9664171f,  -11.9477053f},
  };
  ALPAKA_STATIC_ACC_MEM_GLOBAL const float bias_2[32] = {
      9.8383608f,  3.6922295f,  3.5774977f,  -4.4619012f, 6.5087032f,  -0.9540017f, -0.5059246f, 0.0706402f,
      14.3396597f, -0.2771132f, -4.8409863f, -8.3581600f, -3.5078344f, 4.3287506f,  -5.7808843f, 3.9264839f,
      -2.1697845f, -0.0040514f, -0.2095029f, -6.8678174f, 1.7911285f,  -0.4510343f, 1.2410443f,  -4.5678806f,
      -0.5693849f, 2.3320096f,  4.4606552f,  -6.3771009f, -4.3149071f, -0.1905672f, -3.5726390f, -1.0744030f};
  ALPAKA_STATIC_ACC_MEM_GLOBAL const float wgtT_2[32][32] = {
      {-0.0155548f, 0.0243339f,  0.0037967f,  -0.2771824f, 0.0111955f,  -0.0115980f, 0.0079653f,  -2.9803498f,
       -0.0061037f, -0.0956634f, 0.0332446f,  0.0179244f,  -0.0080377f, -9.0180779f, 0.1720033f,  0.0350694f,
       -0.0146588f, -0.2135506f, -0.3158041f, 1.3697664f,  0.0119146f,  0.0119120f,  -0.0986927f, 0.0297492f,
       0.0355827f,  -0.1196868f, -0.0745119f, 0.0281862f,  -0.0422190f, -0.3069138f, -0.0477367f, -0.0550450f},
      {-1.7374619f, 1.4822800f,  -2.1885235f, 1.8354234f,  -0.5380136f, 1.6621803f,  0.6251035f,  0.1008954f,
       -0.8387129f, -0.2063313f, 1.0661691f,  -0.9799694f, -5.1710258f, -3.2260630f, -1.5073707f, -1.0792168f,
       1.8569958f,  -0.2289213f, 0.0563821f,  -1.6398847f, -4.1649504f, -2.7527378f, -0.0134577f, 3.0424533f,
       0.0364320f,  0.6762254f,  -3.1551330f, 2.4888904f,  1.4757305f,  -0.3141717f, -2.0126467f, -0.1675602f},
      {-0.9571826f, 0.0914152f,  0.0404339f,  0.2927902f,  0.2933607f,  0.0619171f,  0.0772318f,  -1.3796169f,
       -0.8194544f, -0.2179988f, -1.1241078f, -0.1443964f, 0.0559355f,  -1.2914546f, -0.3445117f, 0.2031156f,
       0.0273864f,  -0.0193422f, -0.2136522f, 0.0429592f,  0.0212854f,  0.0414394f,  -1.1734651f, 0.0582848f,
       0.0136039f,  -0.1892604f, 0.0764908f,  -0.0130132f, -0.1272559f, -0.0818855f, -0.0408583f, -0.1563294f},
      {-0.0213695f, 0.0596942f,  -0.0641309f, -0.0146449f, 0.0416586f,  -0.0378931f, 0.1234860f,  0.1622967f,
       0.0794091f,  -0.0639933f, -0.1030663f, 0.0579078f,  0.1050275f,  -0.0136866f, 0.0149978f,  0.0876813f,
       0.0693554f,  0.1612417f,  -0.0595916f, -0.1008234f, -0.0579058f, 0.0915138f,  0.1321436f,  -0.1484535f,
       -0.0920316f, -0.0024532f, -0.1045300f, 0.0924260f,  0.0277524f,  -0.0287276f, -0.1271127f, 0.1164243f},
      {0.0713067f,  0.0198056f,  -0.3023696f, -0.0025908f, -0.0085885f, -1.1157553f, 0.0236462f, -0.0704844f,
       -0.0189257f, -0.0997382f, 0.3379845f,  -0.1229390f, -0.0616165f, -0.8968034f, 0.0401445f, -0.1144476f,
       -0.0532077f, 0.0604580f,  0.0609454f,  -0.1613472f, 0.0103525f,  -0.1653874f, 0.0205189f, 0.0758978f,
       -0.1514593f, 0.0151441f,  0.2043469f,  0.0349607f,  -0.1361278f, -0.1255922f, 0.0631648f, 0.3570991f},
      {0.3371337f,  -3.7541580f, 2.2215877f,  -0.3390516f, 0.1912718f,  -4.1861577f, -1.2264019f, 2.8179801f,
       0.0667294f,  -0.0093539f, 2.3029909f,  3.1814916f,  3.9780347f,  0.2310601f,  0.3986159f,  -0.8544636f,
       0.4139664f,  -0.1876569f, -0.2448732f, -2.8053334f, 4.0488625f,  2.1094146f,  -6.7310257f, -4.9950023f,
       -0.8315823f, 0.0555959f,  2.4573720f,  -3.7234364f, -4.2910552f, -0.2995245f, -3.2605181f, 2.3620574f},
      {-1.5522735f,  -0.1866350f, -0.0067679f, 0.3196557f,  1.4052233f,  2.8143549f,  -0.9992948f, -0.5309914f,
       -25.8852596f, -0.1218249f, 0.6625420f,  0.3007106f,  -0.2767264f, -0.1847300f, -0.5313534f, -0.0383462f,
       -0.1987552f,  0.0581405f,  -0.3376078f, 1.2621028f,  0.0818709f,  -0.1401216f, -0.4550788f, -0.1592657f,
       0.0597123f,   0.1344101f,  -0.1005317f, -0.1538406f, 2.9142656f,  -0.0806051f, -0.4267367f, -31.9512234f},
      {0.6859627f,  0.1212986f,  0.1291616f,  0.0459838f,  -0.0899920f, 0.0287645f,  0.1987007f,  -2.7079368f,
       -0.2628384f, -0.1402464f, -0.6302179f, -0.2923960f, -0.1106663f, 0.8256195f,  -2.8054097f, -0.0296494f,
       -0.5632019f, -0.1335654f, -0.1558440f, -6.8611612f, 0.0203786f,  0.0046566f,  -0.4401442f, -0.0471430f,
       0.4535986f,  -0.8657981f, 0.0684740f,  0.0518814f,  -0.0123748f, -0.2270164f, 0.0922878f,  -0.3863277f},
      {0.0127175f,   2.3346109f,  -0.4390767f, -0.4657893f, 0.1659466f,  -0.1132782f, -0.4928388f, 0.7652873f,
       1.1510741f,   -0.0879600f, 0.2721785f,  -0.1878961f, -0.3477249f, -0.8473209f, -0.8931856f, -0.4328294f,
       -11.9181929f, -0.0282545f, -0.0217915f, 1.6676594f,  -0.2122232f, -0.6190930f, 1.9053432f,  -0.7592348f,
       -1.0739189f,  -0.7170524f, 0.3864411f,  -0.8849231f, 0.1393488f,  0.0738489f,  0.4460345f,  1.9020857f},
      {0.4453296f,  -0.0767821f, 0.1638939f, 1.6997167f,  -0.1098599f, -0.0551604f, 0.0040561f,  -13.5290670f,
       -0.1285677f, -0.0590394f, 0.6499141f, -0.7617344f, 0.0453151f,  0.3104213f,  -1.0711143f, 0.1361838f,
       -0.4365610f, -0.1300649f, 0.2013344f, -0.5308123f, 0.1451896f,  0.1030715f,  -0.6487910f, -0.3136590f,
       -0.0280079f, 0.5394178f,  0.1318262f, -0.0159292f, 0.0636870f,  -0.3224248f, -0.1868187f, -0.2468304f},
      {-0.0333494f, -0.0834255f, -0.1221875f, 0.6861304f,  0.0521738f,  -0.0416543f, -0.4437352f, -19.3246250f,
       -0.1520821f, 0.0528602f,  -0.6375434f, -0.5803806f, -0.0958465f, -2.0058544f, -0.8282642f, 0.0259000f,
       0.4846996f,  0.1211179f,  0.0356884f,  1.0009497f,  0.0635682f,  -0.0314105f, -0.0011147f, 0.0131714f,
       -0.3410152f, 0.2798154f,  0.0961889f,  0.1266228f,  -0.0934717f, -0.0904307f, 0.1355542f,  0.5722573f},
      {0.2146454f, 0.2143834f,  0.1290650f,  -0.9063646f, 0.2100945f,  0.1331054f,  -0.2620614f, -0.1264993f,
       0.1313979f, 0.0455465f,  -0.8395286f, -0.4967833f, -0.0538581f, 0.9155380f,  0.6627046f,  0.1691243f,
       0.9887002f, -0.1597013f, -0.1236713f, -1.9041336f, 0.0427585f,  0.0849747f,  -5.2559652f, -0.3133100f,
       0.0141170f, -0.1635530f, 0.4938746f,  0.0162943f,  0.2107756f,  -0.3413893f, -0.0657575f, 1.0542560f},
      {-2.8868380f, -2.0837426f, -1.0611480f, -0.6143807f, -0.6398501f, -2.8018746f, 0.5166737f,  -1.0814301f,
       -1.9272422f, -0.1017482f, -0.4651161f, -1.4021232f, 1.8854499f,  0.1815407f,  0.5965426f,  -2.3344259f,
       -0.0690846f, -0.1678239f, -0.4219488f, 0.6215640f,  1.0270095f,  -0.3473049f, -0.3926674f, -0.7942593f,
       1.1305071f,  -1.4621233f, -0.8051161f, -0.7698632f, -2.6038630f, -0.3090037f, -1.6365144f, -1.0179478f},
      {0.0046026f,  1.1319581f,  -2.6405678f, -2.0353596f, -2.1687336f, 0.3364883f,  2.1122196f,  0.2584647f,
       -2.4344857f, -0.0378498f, 0.6158544f,  -0.6060749f, -4.9598379f, 0.1570698f,  2.2436838f,  -2.6198347f,
       -2.0935996f, -0.1845744f, -0.0716080f, -1.9338604f, -4.1995640f, -3.6706774f, -1.6762524f, 3.9646862f,
       -0.9677961f, 1.8319578f,  -3.1916575f, 3.7312632f,  0.0820446f,  -0.0497568f, -0.0898171f, -0.2499462f},
      {-0.0780375f, -0.0286571f, 0.1007227f,  0.0012229f,  -0.0531285f, 0.0840718f,  0.1013894f,  0.1312424f,
       -0.0673772f, 0.1603183f,  0.0074385f,  -0.0718321f, -0.1549873f, 0.1616689f,  0.0405887f,  -0.1558588f,
       0.0740745f,  0.1696893f,  -0.0064026f, -0.1656420f, -0.1186674f, -0.1262667f, -0.0784757f, -0.1280154f,
       0.0909976f,  0.0853046f,  -0.1075811f, 0.1310615f,  0.0610194f,  0.0647223f,  0.1360559f,  0.0440074f},
      {-0.2106480f, 0.0087131f,  0.1119385f,  -1.0611318f, 0.5250220f,  0.0525479f,  -0.2733742f, -1.0799565f,
       -0.5601607f, -0.0651806f, -1.9793440f, -0.3373334f, -0.1550518f, 0.8932216f,  0.7264332f,  -0.0450735f,
       1.2373760f,  -0.1236272f, 0.0680048f,  -3.0446634f, -0.1533586f, -0.0127355f, -0.3326311f, -0.0225603f,
       -0.2265739f, -2.3752897f, -0.3771705f, -0.0728938f, 0.1741305f,  0.1111639f,  0.4131119f,  0.2239323f},
      {-2.5691276f, -1.4011253f, -2.0640867f, -3.7236946f, 1.5542637f,  -0.9456654f, -1.7575809f, 3.6794879f,
       -0.4439790f, -0.1009826f, 3.6702275f,  -0.1935008f, -0.4423219f, -0.3825364f, -0.4784791f, 0.5927492f,
       -2.3482494f, 0.0801714f,  -0.1567418f, -1.7934613f, -0.1706410f, -0.6326947f, 0.6260155f,  0.3631033f,
       -0.9325932f, 1.9647995f,  -1.3409088f, 1.3501998f,  0.0367797f,  -0.1744210f, 1.8690013f,  -1.0737898f},
      {-0.5934777f, 0.6232591f,  -0.3391055f, 0.2640936f, -0.2824444f, 0.4815128f,  0.6625078f,  -0.1103976f,
       0.9555223f,  -0.0624896f, -0.6778919f, 0.1181502f, -0.5425385f, 0.7297349f,  -1.7261271f, -0.2917557f,
       1.1873137f,  -0.2725933f, 0.0975242f,  1.7756181f, -0.5735835f, -0.4453230f, 0.9800369f,  0.9344145f,
       -1.8692539f, 0.0120440f,  -0.7315661f, 0.6250805f, 0.3839143f,  -0.0376306f, 0.3816243f,  0.6059195f},
      {0.5522162f,   -1.8043815f, -10.9379101f, 0.5719097f,  -0.2246755f, -1.4856353f,  0.4877502f,  0.7163438f,
       -11.8135147f, -0.0180790f, -0.9928634f,  0.1107815f,  -0.0005064f, -0.3824990f,  -0.7453306f, -1.9909632f,
       -7.4362645f,  -0.0245507f, -0.1815712f,  -3.5507584f, -0.0075889f, -11.0296011f, -1.1292133f, -0.0710276f,
       0.5675677f,   0.2017778f,  -0.0684891f,  -0.0367653f, -1.6674192f, 0.0281711f,   -0.8356591f, -0.0447807f},
      {0.2537312f,  -3.0178010f, -0.3493635f, 1.8573236f,  0.4017631f,  0.9912633f,  -0.8625028f, -0.7783228f,
       -1.7815375f, -0.1204695f, 1.8551122f,  0.3344182f,  -0.2828701f, -1.3226960f, -1.4470471f, 0.2895959f,
       0.6780876f,  -0.2010069f, 0.0425280f,  -2.1786852f, -0.1274053f, -0.2549899f, -0.2233993f, -0.1561645f,
       -0.4640818f, 0.6375850f,  0.7733670f,  -0.2388286f, 1.0447853f,  -0.1503223f, 0.3823584f,  -13.8176088f},
      {0.2575197f,  -2.2127593f, -0.0389457f, -0.0215759f, 0.1659477f,  -0.0097748f, -0.1935415f, -0.9091369f,
       -0.1453371f, 0.0442428f,  -0.1206519f, 0.1435609f,  -0.0186047f, -5.0154042f, 0.0538177f,  0.0403250f,
       0.0240955f,  0.0331080f,  0.0517951f,  0.7422639f,  0.0069818f,  0.0248351f,  -0.2205741f, -0.0082387f,
       0.2043269f,  0.0459435f,  0.0876343f,  0.0140607f,  0.1056308f,  0.0062555f,  0.0184278f,  -0.5539715f},
      {-0.0398742f, 0.1075264f,  0.1725024f,  -0.0755192f, -0.0360048f, 0.1325573f,  0.0903103f,  -0.0882263f,
       0.1207692f,  0.0032722f,  0.0048489f,  -0.1257241f, 0.1450990f,  -0.0713558f, 0.1116815f,  0.1107689f,
       -0.1447252f, 0.1581838f,  -0.0160124f, -0.0425587f, 0.1411217f,  0.0865060f,  -0.0643460f, -0.0431262f,
       -0.1452804f, -0.0195101f, 0.1234572f,  0.0520887f,  0.1117576f,  -0.0751791f, 0.1511539f,  0.1224861f},
      {0.7728126f,  2.3075340f,  -0.0385258f, -3.1270287f, 0.9414487f,  3.5251477f,  -0.8043440f, 0.7212446f,
       -7.6850162f, -0.1609414f, -3.7687578f, -1.0751100f, -0.2052089f, 5.0728245f,  2.2835267f,  0.5930225f,
       0.1303335f,  -0.1428799f, -0.3715075f, 0.5136011f,  -0.4755619f, -0.2192461f, -3.8696294f, -0.0062392f,
       -1.3774812f, -0.0034140f, -1.5944362f, 0.9773729f,  3.2859125f,  -0.1616932f, -1.2785367f, -13.5732412f},
      {0.5535743f,  0.1461481f,  -0.2218016f, -0.2971808f, -0.2169309f, 0.1564545f,  -0.0390397f, 1.1558976f,
       -0.0119933f, -0.0774637f, 1.1907971f,  -0.5127968f, -0.0066028f, -1.6794037f, -0.3650940f, 0.2555613f,
       -0.9488379f, 0.0449603f,  -0.1620417f, 0.1583214f,  0.0000908f,  0.0152763f,  -1.0660053f, -0.0139402f,
       -1.7440189f, 0.2515209f,  0.3333162f,  0.1904725f,  0.1116094f,  -0.2287960f, -0.0007165f, -1.7047704f},
      {-5.9897852f,  -0.1316296f, -0.0218074f, -0.4602887f, 0.3288545f,  -0.0882939f, -0.5929499f, 0.4294790f,
       -0.0383545f,  0.0556869f,  0.1975944f,  0.1341491f,  0.0629570f,  -2.2742157f, 0.0175826f,  -0.1439869f,
       -24.8701649f, -0.1582915f, -0.2460304f, -3.9643264f, 0.0863483f,  0.0180861f,  -0.2210452f, -0.0868723f,
       -0.4175525f,  -0.8231756f, 0.0247534f,  -0.1473545f, -0.0021330f, -0.0410253f, -1.1944869f, -1.1523768f},
      {0.1031547f,  -3.3402514f, -4.3636522f, -0.1534714f, -0.0622189f, 0.0374694f,  -0.0870097f, -4.1865788f,
       -0.0555377f, 0.0252329f,  0.1339467f,  0.0461691f,  -0.0503090f, 0.0289890f,  -0.0095674f, -0.3289992f,
       -0.0279080f, 0.0274977f,  -0.0903500f, 0.5610157f,  -0.0478177f, 0.4346960f,  0.4822784f,  -0.1058945f,
       -0.2026870f, -0.0560638f, 0.0910069f,  -0.0818529f, 0.0819198f,  -0.0292193f, 0.3040628f,  -0.1275230f},
      {-5.8789845f, -17.1114635f, -4.6755161f, 0.1016624f,  -0.8685016f, -0.3898779f, -2.3363957f, 0.1413794f,
       -2.4254086f, -0.2171030f,  -0.0901150f, 0.7058705f,  0.4166250f,  -0.0231085f, -0.1789686f, -9.4244318f,
       -0.6418229f, -0.0857969f,  0.1683681f,  -0.0310597f, -0.0247807f, -5.3748040f, -7.4730940f, 0.1019564f,
       -1.2126822f, -0.3726285f,  -1.0287101f, 0.1803891f,  -0.2227769f, -0.0791530f, -0.0159770f, -1.4883354f},
      {-17.9394970f, -0.5228514f, -11.3547935f, -0.0672671f, -2.0371394f, -0.9076943f, 2.4331825f,  -6.9409127f,
       0.8286008f,   0.0208618f,  -0.8009814f,  1.2268484f,  0.1943726f,  -1.7297083f, -0.7668949f, -6.5505466f,
       -0.6495168f,  -0.0404727f, -0.1260914f,  -3.5029383f, -0.0852898f, -2.9679556f, 1.6404767f,  -0.0251449f,
       1.1460075f,   -0.7877688f, -0.0586593f,  -0.4741839f, -1.7420560f, 0.0295600f,  -2.3574052f, 0.0974777f},
      {0.4443443f,  0.6384261f,  1.3317494f,  -1.0085982f, 0.9508762f, 1.3168396f,  -0.1862490f, -0.1801148f,
       1.1106120f,  -0.0654911f, 0.1186706f,  -0.7198273f, 0.5449172f, -0.5886080f, 0.7504217f,  1.8046317f,
       -0.1294390f, -0.1939137f, -0.2383934f, 0.4131435f,  0.6910310f, 1.2821866f,  -0.1088722f, -0.5660405f,
       -0.1188610f, 0.0364403f,  0.3597929f,  -0.6409024f, 1.2114668f, -0.0212278f, 0.8423592f,  0.4848156f},
      {-0.8772649f, -13.5265112f, -4.5540547f,  -0.2856667f, 0.7604876f,  -0.6829260f, -0.8320626f, 0.6541347f,
       0.4020181f,  0.0009324f,   -10.9660740f, -0.3540186f, -0.2316812f, 0.3576394f,  0.0998953f,  -1.5738430f,
       1.2089975f,  0.0706465f,   -0.2538019f,  0.7016497f,  -0.0282650f, -3.1291001f, -0.4375663f, -0.3979468f,
       -0.1588882f, 0.3978875f,   0.2038192f,   -0.4281644f, -0.5787544f, -0.0922198f, 0.9595569f,  0.0212818f},
      {0.3392667f,  0.1170919f,  -0.0705636f, -0.1025443f, -0.1192213f, -0.0495686f, 0.0284667f,  -0.1226804f,
       0.0050191f,  -0.0516545f, -1.0892097f, 0.0033689f,  0.0471462f,  1.4266804f,  0.0288870f,  -0.0110408f,
       -1.1283765f, -0.1299917f, -0.4318301f, -0.9854419f, -0.0190479f, -0.0269406f, 0.3697925f,  -0.0757695f,
       -0.3632923f, -0.1714077f, 0.0669245f,  0.0557428f,  -0.1713906f, -0.4307863f, -0.1749060f, -2.1246362f},
      {0.8383662f, -3.8122442f, 0.1568939f,  -2.2105119f, -0.7086993f, -0.4664145f, -0.3578597f, 0.5554636f,
       0.6965880f, -0.1506968f, 0.2646832f,  0.2874083f,  0.1901203f,  -2.4997077f, -0.3519035f, -0.0518054f,
       1.0862818f, -0.2502540f, -0.3133347f, -0.7411230f, 0.1268138f,  0.1069811f,  -0.8109779f, 0.0264679f,
       0.1604289f, -0.7534032f, -0.1419461f, 0.0688303f,  -0.1570919f, -0.3055144f, -0.7415189f, 2.5547018f},
  };
  ALPAKA_STATIC_ACC_MEM_GLOBAL const float bias_4[1] = {1.4616280f};
  ALPAKA_STATIC_ACC_MEM_GLOBAL const float wgtT_4[32][1] = {
      {0.0609813f},  {0.0685224f}, {0.1655236f},  {-0.0599842f}, {0.0669006f},  {-0.1817371f}, {-0.0539167f},
      {-0.0737955f}, {0.0654664f}, {0.0302955f},  {-0.0586768f}, {0.0717433f},  {0.1472274f},  {-0.0610073f},
      {-0.0601061f}, {0.2086218f}, {-0.0545418f}, {-0.0388369f}, {-0.0613536f}, {-0.1141072f}, {-0.2289097f},
      {-0.3354485f}, {0.0831025f}, {0.1333673f},  {0.0490410f},  {0.0484894f},  {0.0436755f},  {-0.1479877f},
      {0.1540713f},  {0.0021261f}, {-0.0845848f}, {-0.0564973f},
  };
}  // namespace T5DNN

#endif