#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        acc_10_V_reg_2418582 = acc_10_V_fu_2409269_p2.read();
        acc_15_V_reg_2418672 = acc_15_V_fu_2411163_p2.read();
        acc_24_V_reg_2418927 = acc_24_V_fu_2414725_p2.read();
        acc_28_V_reg_2419007 = acc_28_V_fu_2416233_p2.read();
        add_ln703_1004_reg_2418677 = add_ln703_1004_fu_2411263_p2.read();
        add_ln703_1011_reg_2418682 = add_ln703_1011_fu_2411321_p2.read();
        add_ln703_1018_reg_2418687 = add_ln703_1018_fu_2411379_p2.read();
        add_ln703_1027_reg_2418692 = add_ln703_1027_fu_2411433_p2.read();
        add_ln703_1030_reg_2418697 = add_ln703_1030_fu_2411455_p2.read();
        add_ln703_1033_reg_2418702 = add_ln703_1033_fu_2411477_p2.read();
        add_ln703_1050_reg_2418707 = add_ln703_1050_fu_2411595_p2.read();
        add_ln703_1066_reg_2418712 = add_ln703_1066_fu_2411703_p2.read();
        add_ln703_1072_reg_2418717 = add_ln703_1072_fu_2411747_p2.read();
        add_ln703_1079_reg_2418722 = add_ln703_1079_fu_2411789_p2.read();
        add_ln703_1095_reg_2418727 = add_ln703_1095_fu_2411881_p2.read();
        add_ln703_1110_reg_2418732 = add_ln703_1110_fu_2412011_p2.read();
        add_ln703_1126_reg_2418737 = add_ln703_1126_fu_2412107_p2.read();
        add_ln703_1132_reg_2418742 = add_ln703_1132_fu_2412143_p2.read();
        add_ln703_1139_reg_2418747 = add_ln703_1139_fu_2412193_p2.read();
        add_ln703_1155_reg_2418752 = add_ln703_1155_fu_2412297_p2.read();
        add_ln703_1162_reg_2418757 = add_ln703_1162_fu_2412343_p2.read();
        add_ln703_1165_reg_2418762 = add_ln703_1165_fu_2412365_p2.read();
        add_ln703_1168_reg_2418767 = add_ln703_1168_fu_2412387_p2.read();
        add_ln703_1185_reg_2418772 = add_ln703_1185_fu_2412489_p2.read();
        add_ln703_1191_reg_2418777 = add_ln703_1191_fu_2412537_p2.read();
        add_ln703_1198_reg_2418782 = add_ln703_1198_fu_2412579_p2.read();
        add_ln703_1213_reg_2418787 = add_ln703_1213_fu_2412669_p2.read();
        add_ln703_1227_reg_2418792 = add_ln703_1227_fu_2412793_p2.read();
        add_ln703_1240_reg_2418797 = add_ln703_1240_fu_2412871_p2.read();
        add_ln703_1245_reg_2418802 = add_ln703_1245_fu_2412905_p2.read();
        add_ln703_1251_reg_2418807 = add_ln703_1251_fu_2412953_p2.read();
        add_ln703_1264_reg_2418812 = add_ln703_1264_fu_2413027_p2.read();
        add_ln703_1276_reg_2418817 = add_ln703_1276_fu_2413127_p2.read();
        add_ln703_1292_reg_2418822 = add_ln703_1292_fu_2413215_p2.read();
        add_ln703_1298_reg_2418827 = add_ln703_1298_fu_2413259_p2.read();
        add_ln703_1305_reg_2418832 = add_ln703_1305_fu_2413301_p2.read();
        add_ln703_1313_reg_2418837 = add_ln703_1313_fu_2413349_p2.read();
        add_ln703_1315_reg_2418842 = add_ln703_1315_fu_2413361_p2.read();
        add_ln703_1318_reg_2418847 = add_ln703_1318_fu_2413387_p2.read();
        add_ln703_1327_reg_2418852 = add_ln703_1327_fu_2413433_p2.read();
        add_ln703_1330_reg_2418857 = add_ln703_1330_fu_2413455_p2.read();
        add_ln703_1333_reg_2418862 = add_ln703_1333_fu_2413481_p2.read();
        add_ln703_1350_reg_2418867 = add_ln703_1350_fu_2413583_p2.read();
        add_ln703_1356_reg_2418872 = add_ln703_1356_fu_2413631_p2.read();
        add_ln703_1362_reg_2418877 = add_ln703_1362_fu_2413675_p2.read();
        add_ln703_1377_reg_2418882 = add_ln703_1377_fu_2413761_p2.read();
        add_ln703_1390_reg_2418887 = add_ln703_1390_fu_2413875_p2.read();
        add_ln703_1398_reg_2418892 = add_ln703_1398_fu_2413915_p2.read();
        add_ln703_1401_reg_2418897 = add_ln703_1401_fu_2413933_p2.read();
        add_ln703_1404_reg_2418902 = add_ln703_1404_fu_2413955_p2.read();
        add_ln703_1412_reg_2418907 = add_ln703_1412_fu_2413995_p2.read();
        add_ln703_1419_reg_2418912 = add_ln703_1419_fu_2414037_p2.read();
        add_ln703_1435_reg_2418917 = add_ln703_1435_fu_2414129_p2.read();
        add_ln703_1450_reg_2418922 = add_ln703_1450_fu_2414263_p2.read();
        add_ln703_1516_reg_2418932 = add_ln703_1516_fu_2414823_p2.read();
        add_ln703_1522_reg_2418937 = add_ln703_1522_fu_2414863_p2.read();
        add_ln703_1529_reg_2418942 = add_ln703_1529_fu_2414909_p2.read();
        add_ln703_1545_reg_2418947 = add_ln703_1545_fu_2415017_p2.read();
        add_ln703_1560_reg_2418952 = add_ln703_1560_fu_2415127_p2.read();
        add_ln703_1575_reg_2418957 = add_ln703_1575_fu_2415217_p2.read();
        add_ln703_1581_reg_2418962 = add_ln703_1581_fu_2415257_p2.read();
        add_ln703_1587_reg_2418967 = add_ln703_1587_fu_2415305_p2.read();
        add_ln703_1602_reg_2418972 = add_ln703_1602_fu_2415411_p2.read();
        add_ln703_160_reg_2418312 = add_ln703_160_fu_2405057_p2.read();
        add_ln703_1616_reg_2418977 = add_ln703_1616_fu_2415523_p2.read();
        add_ln703_1632_reg_2418982 = add_ln703_1632_fu_2415627_p2.read();
        add_ln703_1638_reg_2418987 = add_ln703_1638_fu_2415675_p2.read();
        add_ln703_1645_reg_2418992 = add_ln703_1645_fu_2415725_p2.read();
        add_ln703_1661_reg_2418997 = add_ln703_1661_fu_2415825_p2.read();
        add_ln703_166_reg_2418317 = add_ln703_166_fu_2405101_p2.read();
        add_ln703_1675_reg_2419002 = add_ln703_1675_fu_2415953_p2.read();
        add_ln703_1718_reg_2419012 = add_ln703_1718_fu_2416327_p2.read();
        add_ln703_1724_reg_2419017 = add_ln703_1724_fu_2416375_p2.read();
        add_ln703_1726_reg_2419022 = add_ln703_1726_fu_2416391_p2.read();
        add_ln703_1729_reg_2419027 = add_ln703_1729_fu_2416413_p2.read();
        add_ln703_172_reg_2418322 = add_ln703_172_fu_2405149_p2.read();
        add_ln703_1760_reg_2419032 = add_ln703_1760_fu_2416669_p2.read();
        add_ln703_1773_reg_2419037 = add_ln703_1773_fu_2416749_p2.read();
        add_ln703_1779_reg_2419042 = add_ln703_1779_fu_2416789_p2.read();
        add_ln703_1785_reg_2419047 = add_ln703_1785_fu_2416833_p2.read();
        add_ln703_1799_reg_2419052 = add_ln703_1799_fu_2416917_p2.read();
        add_ln703_1812_reg_2419057 = add_ln703_1812_fu_2417027_p2.read();
        add_ln703_1828_reg_2419062 = add_ln703_1828_fu_2417139_p2.read();
        add_ln703_1835_reg_2419067 = add_ln703_1835_fu_2417185_p2.read();
        add_ln703_1842_reg_2419072 = add_ln703_1842_fu_2417235_p2.read();
        add_ln703_1856_reg_2419077 = add_ln703_1856_fu_2417323_p2.read();
        add_ln703_1863_reg_2419082 = add_ln703_1863_fu_2417373_p2.read();
        add_ln703_1866_reg_2419087 = add_ln703_1866_fu_2417395_p2.read();
        add_ln703_1869_reg_2419092 = add_ln703_1869_fu_2417421_p2.read();
        add_ln703_187_reg_2418327 = add_ln703_187_fu_2405243_p2.read();
        add_ln703_200_reg_2418332 = add_ln703_200_fu_2405349_p2.read();
        add_ln703_215_reg_2418337 = add_ln703_215_fu_2405451_p2.read();
        add_ln703_221_reg_2418342 = add_ln703_221_fu_2405491_p2.read();
        add_ln703_228_reg_2418347 = add_ln703_228_fu_2405541_p2.read();
        add_ln703_244_reg_2418352 = add_ln703_244_fu_2405641_p2.read();
        add_ln703_258_reg_2418357 = add_ln703_258_fu_2405757_p2.read();
        add_ln703_273_reg_2418362 = add_ln703_273_fu_2405835_p2.read();
        add_ln703_279_reg_2418367 = add_ln703_279_fu_2405879_p2.read();
        add_ln703_285_reg_2418372 = add_ln703_285_fu_2405927_p2.read();
        add_ln703_300_reg_2418377 = add_ln703_300_fu_2406025_p2.read();
        add_ln703_314_reg_2418382 = add_ln703_314_fu_2406133_p2.read();
        add_ln703_330_reg_2418387 = add_ln703_330_fu_2406261_p2.read();
        add_ln703_336_reg_2418392 = add_ln703_336_fu_2406309_p2.read();
        add_ln703_343_reg_2418397 = add_ln703_343_fu_2406363_p2.read();
        add_ln703_359_reg_2418402 = add_ln703_359_fu_2406475_p2.read();
        add_ln703_374_reg_2418407 = add_ln703_374_fu_2406605_p2.read();
        add_ln703_389_reg_2418412 = add_ln703_389_fu_2406691_p2.read();
        add_ln703_395_reg_2418417 = add_ln703_395_fu_2406731_p2.read();
        add_ln703_402_reg_2418422 = add_ln703_402_fu_2406777_p2.read();
        add_ln703_418_reg_2418427 = add_ln703_418_fu_2406877_p2.read();
        add_ln703_432_reg_2418432 = add_ln703_432_fu_2406989_p2.read();
        add_ln703_458_reg_2418437 = add_ln703_458_fu_2407165_p2.read();
        add_ln703_470_reg_2418442 = add_ln703_470_fu_2407265_p2.read();
        add_ln703_482_reg_2418447 = add_ln703_482_fu_2407381_p2.read();
        add_ln703_509_reg_2418452 = add_ln703_509_fu_2407579_p2.read();
        add_ln703_521_reg_2418457 = add_ln703_521_fu_2407683_p2.read();
        add_ln703_533_reg_2418462 = add_ln703_533_fu_2407799_p2.read();
        add_ln703_549_reg_2418467 = add_ln703_549_fu_2407895_p2.read();
        add_ln703_555_reg_2418472 = add_ln703_555_fu_2407935_p2.read();
        add_ln703_562_reg_2418477 = add_ln703_562_fu_2407985_p2.read();
        add_ln703_570_reg_2418482 = add_ln703_570_fu_2408029_p2.read();
        add_ln703_573_reg_2418487 = add_ln703_573_fu_2408047_p2.read();
        add_ln703_576_reg_2418492 = add_ln703_576_fu_2408069_p2.read();
        add_ln703_593_reg_2418497 = add_ln703_593_fu_2408179_p2.read();
        add_ln703_609_reg_2418502 = add_ln703_609_fu_2408283_p2.read();
        add_ln703_616_reg_2418507 = add_ln703_616_fu_2408329_p2.read();
        add_ln703_623_reg_2418512 = add_ln703_623_fu_2408379_p2.read();
        add_ln703_632_reg_2418517 = add_ln703_632_fu_2408425_p2.read();
        add_ln703_635_reg_2418522 = add_ln703_635_fu_2408443_p2.read();
        add_ln703_638_reg_2418527 = add_ln703_638_fu_2408465_p2.read();
        add_ln703_655_reg_2418532 = add_ln703_655_fu_2408591_p2.read();
        add_ln703_671_reg_2418537 = add_ln703_671_fu_2408683_p2.read();
        add_ln703_677_reg_2418542 = add_ln703_677_fu_2408727_p2.read();
        add_ln703_684_reg_2418547 = add_ln703_684_fu_2408773_p2.read();
        add_ln703_692_reg_2418552 = add_ln703_692_fu_2408821_p2.read();
        add_ln703_695_reg_2418557 = add_ln703_695_fu_2408847_p2.read();
        add_ln703_698_reg_2418562 = add_ln703_698_fu_2408869_p2.read();
        add_ln703_707_reg_2418567 = add_ln703_707_fu_2408915_p2.read();
        add_ln703_710_reg_2418572 = add_ln703_710_fu_2408933_p2.read();
        add_ln703_713_reg_2418577 = add_ln703_713_fu_2408959_p2.read();
        add_ln703_759_reg_2418587 = add_ln703_759_fu_2409347_p2.read();
        add_ln703_765_reg_2418592 = add_ln703_765_fu_2409395_p2.read();
        add_ln703_771_reg_2418597 = add_ln703_771_fu_2409447_p2.read();
        add_ln703_786_reg_2418602 = add_ln703_786_fu_2409553_p2.read();
        add_ln703_799_reg_2418607 = add_ln703_799_fu_2409671_p2.read();
        add_ln703_826_reg_2418612 = add_ln703_826_fu_2409869_p2.read();
        add_ln703_849_reg_2418617 = add_ln703_849_fu_2410079_p2.read();
        add_ln703_863_reg_2418622 = add_ln703_863_fu_2410185_p2.read();
        add_ln703_869_reg_2418627 = add_ln703_869_fu_2410225_p2.read();
        add_ln703_875_reg_2418632 = add_ln703_875_fu_2410277_p2.read();
        add_ln703_890_reg_2418637 = add_ln703_890_fu_2410383_p2.read();
        add_ln703_904_reg_2418642 = add_ln703_904_fu_2410499_p2.read();
        add_ln703_918_reg_2418647 = add_ln703_918_fu_2410591_p2.read();
        add_ln703_924_reg_2418652 = add_ln703_924_fu_2410631_p2.read();
        add_ln703_931_reg_2418657 = add_ln703_931_fu_2410685_p2.read();
        add_ln703_947_reg_2418662 = add_ln703_947_fu_2410789_p2.read();
        add_ln703_961_reg_2418667 = add_ln703_961_fu_2410897_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        default : 
            ap_NS_fsm = "XX";
            break;
    }
}

}

