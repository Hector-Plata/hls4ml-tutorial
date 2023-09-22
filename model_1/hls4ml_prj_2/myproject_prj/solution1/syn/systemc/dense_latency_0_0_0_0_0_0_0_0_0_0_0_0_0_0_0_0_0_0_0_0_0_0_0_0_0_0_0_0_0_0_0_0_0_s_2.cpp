#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        acc_10_V_reg_1012455 = acc_10_V_fu_1006383_p2.read();
        acc_11_V_reg_1012460 = acc_11_V_fu_1006503_p2.read();
        acc_12_V_reg_1012465 = acc_12_V_fu_1006631_p2.read();
        acc_13_V_reg_1012470 = acc_13_V_fu_1006737_p2.read();
        acc_14_V_reg_1012475 = acc_14_V_fu_1006873_p2.read();
        acc_18_V_reg_1012525 = acc_18_V_fu_1007283_p2.read();
        acc_19_V_reg_1012530 = acc_19_V_fu_1007359_p2.read();
        acc_1_V_reg_1012390 = acc_1_V_fu_1005457_p2.read();
        acc_20_V_reg_1012535 = acc_20_V_fu_1007471_p2.read();
        acc_21_V_reg_1012540 = acc_21_V_fu_1007575_p2.read();
        acc_22_V_reg_1012545 = acc_22_V_fu_1007687_p2.read();
        acc_24_V_reg_1012565 = acc_24_V_fu_1007883_p2.read();
        acc_25_V_reg_1012570 = acc_25_V_fu_1007975_p2.read();
        acc_27_V_reg_1012590 = acc_27_V_fu_1008173_p2.read();
        acc_28_V_reg_1012595 = acc_28_V_fu_1008275_p2.read();
        acc_29_V_reg_1012600 = acc_29_V_fu_1008347_p2.read();
        acc_2_V_reg_1012395 = acc_2_V_fu_1005563_p2.read();
        acc_30_V_reg_1012605 = acc_30_V_fu_1008475_p2.read();
        acc_34_V_reg_1012655 = acc_34_V_fu_1008851_p2.read();
        acc_35_V_reg_1012660 = acc_35_V_fu_1008959_p2.read();
        acc_36_V_reg_1012665 = acc_36_V_fu_1009071_p2.read();
        acc_37_V_reg_1012670 = acc_37_V_fu_1009171_p2.read();
        acc_3_V_reg_1012400 = acc_3_V_fu_1005675_p2.read();
        acc_40_V_reg_1012705 = acc_40_V_fu_1009447_p2.read();
        acc_42_V_reg_1012725 = acc_42_V_fu_1009651_p2.read();
        acc_43_V_reg_1012730 = acc_43_V_fu_1009761_p2.read();
        acc_44_V_reg_1012735 = acc_44_V_fu_1009863_p2.read();
        acc_45_V_reg_1012740 = acc_45_V_fu_1009969_p2.read();
        acc_48_V_reg_1012785 = acc_48_V_fu_1010257_p2.read();
        acc_49_V_reg_1012790 = acc_49_V_fu_1010349_p2.read();
        acc_4_V_reg_1012405 = acc_4_V_fu_1005791_p2.read();
        acc_51_V_reg_1012810 = acc_51_V_fu_1010549_p2.read();
        acc_52_V_reg_1012815 = acc_52_V_fu_1010663_p2.read();
        acc_53_V_reg_1012820 = acc_53_V_fu_1010781_p2.read();
        acc_55_V_reg_1012840 = acc_55_V_fu_1010983_p2.read();
        acc_56_V_reg_1012845 = acc_56_V_fu_1011091_p2.read();
        acc_57_V_reg_1012850 = acc_57_V_fu_1011197_p2.read();
        acc_5_V_reg_1012410 = acc_5_V_fu_1005889_p2.read();
        acc_60_V_reg_1012885 = acc_60_V_fu_1011497_p2.read();
        acc_62_V_reg_1012905 = acc_62_V_fu_1011703_p2.read();
        acc_6_V_reg_1012415 = acc_6_V_fu_1005997_p2.read();
        acc_9_V_reg_1012450 = acc_9_V_fu_1006297_p2.read();
        add_ln703_1823_reg_1012385 = add_ln703_1823_fu_1005347_p2.read();
        add_ln703_1919_reg_1012420 = add_ln703_1919_fu_1006015_p2.read();
        add_ln703_1922_reg_1012425 = add_ln703_1922_fu_1006037_p2.read();
        add_ln703_1931_reg_1012430 = add_ln703_1931_fu_1006089_p2.read();
        add_ln703_1935_reg_1012435 = add_ln703_1935_fu_1006107_p2.read();
        add_ln703_1938_reg_1012440 = add_ln703_1938_fu_1006129_p2.read();
        add_ln703_1947_reg_1012445 = add_ln703_1947_fu_1006189_p2.read();
        add_ln703_2043_reg_1012480 = add_ln703_2043_fu_1006891_p2.read();
        add_ln703_2046_reg_1012485 = add_ln703_2046_fu_1006913_p2.read();
        add_ln703_2055_reg_1012490 = add_ln703_2055_fu_1006973_p2.read();
        add_ln703_2059_reg_1012495 = add_ln703_2059_fu_1006991_p2.read();
        add_ln703_2062_reg_1012500 = add_ln703_2062_fu_1007013_p2.read();
        add_ln703_2070_reg_1012505 = add_ln703_2070_fu_1007067_p2.read();
        add_ln703_2073_reg_1012510 = add_ln703_2073_fu_1007079_p2.read();
        add_ln703_2076_reg_1012515 = add_ln703_2076_fu_1007101_p2.read();
        add_ln703_2084_reg_1012520 = add_ln703_2084_fu_1007151_p2.read();
        add_ln703_2155_reg_1012550 = add_ln703_2155_fu_1007703_p2.read();
        add_ln703_2158_reg_1012555 = add_ln703_2158_fu_1007721_p2.read();
        add_ln703_2166_reg_1012560 = add_ln703_2166_fu_1007767_p2.read();
        add_ln703_2198_reg_1012575 = add_ln703_2198_fu_1007993_p2.read();
        add_ln703_2201_reg_1012580 = add_ln703_2201_fu_1008011_p2.read();
        add_ln703_2210_reg_1012585 = add_ln703_2210_fu_1008071_p2.read();
        add_ln703_2270_reg_1012610 = add_ln703_2270_fu_1008497_p2.read();
        add_ln703_2273_reg_1012615 = add_ln703_2273_fu_1008519_p2.read();
        add_ln703_2281_reg_1012620 = add_ln703_2281_fu_1008565_p2.read();
        add_ln703_2285_reg_1012625 = add_ln703_2285_fu_1008583_p2.read();
        add_ln703_2288_reg_1012630 = add_ln703_2288_fu_1008605_p2.read();
        add_ln703_2297_reg_1012635 = add_ln703_2297_fu_1008673_p2.read();
        add_ln703_2300_reg_1012640 = add_ln703_2300_fu_1008685_p2.read();
        add_ln703_2303_reg_1012645 = add_ln703_2303_fu_1008703_p2.read();
        add_ln703_2311_reg_1012650 = add_ln703_2311_fu_1008749_p2.read();
        add_ln703_2376_reg_1012675 = add_ln703_2376_fu_1009193_p2.read();
        add_ln703_2379_reg_1012680 = add_ln703_2379_fu_1009211_p2.read();
        add_ln703_2388_reg_1012685 = add_ln703_2388_fu_1009263_p2.read();
        add_ln703_2391_reg_1012690 = add_ln703_2391_fu_1009275_p2.read();
        add_ln703_2394_reg_1012695 = add_ln703_2394_fu_1009297_p2.read();
        add_ln703_2401_reg_1012700 = add_ln703_2401_fu_1009337_p2.read();
        add_ln703_2420_reg_1012710 = add_ln703_2420_fu_1009469_p2.read();
        add_ln703_2423_reg_1012715 = add_ln703_2423_fu_1009495_p2.read();
        add_ln703_2432_reg_1012720 = add_ln703_2432_fu_1009555_p2.read();
        add_ln703_2493_reg_1012745 = add_ln703_2493_fu_1009987_p2.read();
        add_ln703_2496_reg_1012750 = add_ln703_2496_fu_1010009_p2.read();
        add_ln703_2505_reg_1012755 = add_ln703_2505_fu_1010069_p2.read();
        add_ln703_2509_reg_1012760 = add_ln703_2509_fu_1010087_p2.read();
        add_ln703_2512_reg_1012765 = add_ln703_2512_fu_1010109_p2.read();
        add_ln703_2514_reg_1012770 = add_ln703_2514_fu_1010115_p2.read();
        add_ln703_2515_reg_1012775 = add_ln703_2515_fu_1010121_p2.read();
        add_ln703_2520_reg_1012780 = add_ln703_2520_fu_1010149_p2.read();
        add_ln703_2553_reg_1012795 = add_ln703_2553_fu_1010367_p2.read();
        add_ln703_2556_reg_1012800 = add_ln703_2556_fu_1010393_p2.read();
        add_ln703_2564_reg_1012805 = add_ln703_2564_fu_1010439_p2.read();
        add_ln703_2613_reg_1012825 = add_ln703_2613_fu_1010803_p2.read();
        add_ln703_2616_reg_1012830 = add_ln703_2616_fu_1010825_p2.read();
        add_ln703_2624_reg_1012835 = add_ln703_2624_fu_1010875_p2.read();
        add_ln703_2673_reg_1012855 = add_ln703_2673_fu_1011219_p2.read();
        add_ln703_2676_reg_1012860 = add_ln703_2676_fu_1011241_p2.read();
        add_ln703_2685_reg_1012865 = add_ln703_2685_fu_1011297_p2.read();
        add_ln703_2689_reg_1012870 = add_ln703_2689_fu_1011319_p2.read();
        add_ln703_2692_reg_1012875 = add_ln703_2692_fu_1011345_p2.read();
        add_ln703_2700_reg_1012880 = add_ln703_2700_fu_1011391_p2.read();
        add_ln703_2717_reg_1012890 = add_ln703_2717_fu_1011519_p2.read();
        add_ln703_2720_reg_1012895 = add_ln703_2720_fu_1011537_p2.read();
        add_ln703_2729_reg_1012900 = add_ln703_2729_fu_1011589_p2.read();
        add_ln703_2748_reg_1012910 = add_ln703_2748_fu_1011725_p2.read();
        add_ln703_2751_reg_1012915 = add_ln703_2751_fu_1011747_p2.read();
        add_ln703_2760_reg_1012920 = add_ln703_2760_fu_1011807_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_NS_fsm() {
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

