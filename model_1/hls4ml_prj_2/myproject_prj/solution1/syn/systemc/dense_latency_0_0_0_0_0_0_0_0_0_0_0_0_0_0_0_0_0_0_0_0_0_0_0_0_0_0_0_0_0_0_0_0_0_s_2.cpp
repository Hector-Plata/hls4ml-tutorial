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
        acc_10_V_reg_998403 = acc_10_V_fu_992315_p2.read();
        acc_14_V_reg_998453 = acc_14_V_fu_992735_p2.read();
        acc_15_V_reg_998458 = acc_15_V_fu_992837_p2.read();
        acc_16_V_reg_998463 = acc_16_V_fu_992961_p2.read();
        acc_17_V_reg_998468 = acc_17_V_fu_993057_p2.read();
        acc_18_V_reg_998473 = acc_18_V_fu_993171_p2.read();
        acc_1_V_reg_998338 = acc_1_V_fu_991321_p2.read();
        acc_20_V_reg_998493 = acc_20_V_fu_993371_p2.read();
        acc_21_V_reg_998498 = acc_21_V_fu_993477_p2.read();
        acc_22_V_reg_998503 = acc_22_V_fu_993579_p2.read();
        acc_24_V_reg_998523 = acc_24_V_fu_993781_p2.read();
        acc_25_V_reg_998528 = acc_25_V_fu_993885_p2.read();
        acc_26_V_reg_998533 = acc_26_V_fu_993995_p2.read();
        acc_27_V_reg_998538 = acc_27_V_fu_994101_p2.read();
        acc_28_V_reg_998543 = acc_28_V_fu_994181_p2.read();
        acc_29_V_reg_998548 = acc_29_V_fu_994283_p2.read();
        acc_2_V_reg_998343 = acc_2_V_fu_991449_p2.read();
        acc_30_V_reg_998553 = acc_30_V_fu_994407_p2.read();
        acc_31_V_reg_998558 = acc_31_V_fu_994527_p2.read();
        acc_35_V_reg_998608 = acc_35_V_fu_994875_p2.read();
        acc_36_V_reg_998613 = acc_36_V_fu_994963_p2.read();
        acc_37_V_reg_998618 = acc_37_V_fu_995063_p2.read();
        acc_39_V_reg_998638 = acc_39_V_fu_995259_p2.read();
        acc_3_V_reg_998348 = acc_3_V_fu_991551_p2.read();
        acc_40_V_reg_998643 = acc_40_V_fu_995365_p2.read();
        acc_42_V_reg_998663 = acc_42_V_fu_995573_p2.read();
        acc_44_V_reg_998683 = acc_44_V_fu_995779_p2.read();
        acc_46_V_reg_998703 = acc_46_V_fu_995995_p2.read();
        acc_48_V_reg_998723 = acc_48_V_fu_996219_p2.read();
        acc_49_V_reg_998728 = acc_49_V_fu_996335_p2.read();
        acc_51_V_reg_998748 = acc_51_V_fu_996537_p2.read();
        acc_53_V_reg_998768 = acc_53_V_fu_996725_p2.read();
        acc_55_V_reg_998788 = acc_55_V_fu_996949_p2.read();
        acc_58_V_reg_998823 = acc_58_V_fu_997257_p2.read();
        acc_59_V_reg_998828 = acc_59_V_fu_997371_p2.read();
        acc_5_V_reg_998368 = acc_5_V_fu_991771_p2.read();
        acc_60_V_reg_998833 = acc_60_V_fu_997471_p2.read();
        acc_62_V_reg_998853 = acc_62_V_fu_997671_p2.read();
        acc_7_V_reg_998388 = acc_7_V_fu_991951_p2.read();
        acc_8_V_reg_998393 = acc_8_V_fu_992083_p2.read();
        acc_9_V_reg_998398 = acc_9_V_fu_992207_p2.read();
        add_ln703_1887_reg_998333 = add_ln703_1887_fu_991199_p2.read();
        add_ln703_1936_reg_998353 = add_ln703_1936_fu_991569_p2.read();
        add_ln703_1939_reg_998358 = add_ln703_1939_fu_991587_p2.read();
        add_ln703_1948_reg_998363 = add_ln703_1948_fu_991643_p2.read();
        add_ln703_1968_reg_998373 = add_ln703_1968_fu_991797_p2.read();
        add_ln703_1971_reg_998378 = add_ln703_1971_fu_991819_p2.read();
        add_ln703_1980_reg_998383 = add_ln703_1980_fu_991871_p2.read();
        add_ln703_2044_reg_998408 = add_ln703_2044_fu_992337_p2.read();
        add_ln703_2047_reg_998413 = add_ln703_2047_fu_992359_p2.read();
        add_ln703_2056_reg_998418 = add_ln703_2056_fu_992419_p2.read();
        add_ln703_2060_reg_998423 = add_ln703_2060_fu_992437_p2.read();
        add_ln703_2063_reg_998428 = add_ln703_2063_fu_992455_p2.read();
        add_ln703_2072_reg_998433 = add_ln703_2072_fu_992515_p2.read();
        add_ln703_2076_reg_998438 = add_ln703_2076_fu_992537_p2.read();
        add_ln703_2079_reg_998443 = add_ln703_2079_fu_992559_p2.read();
        add_ln703_2088_reg_998448 = add_ln703_2088_fu_992619_p2.read();
        add_ln703_2168_reg_998478 = add_ln703_2168_fu_993193_p2.read();
        add_ln703_2171_reg_998483 = add_ln703_2171_fu_993215_p2.read();
        add_ln703_2180_reg_998488 = add_ln703_2180_fu_993267_p2.read();
        add_ln703_2230_reg_998508 = add_ln703_2230_fu_993601_p2.read();
        add_ln703_2233_reg_998513 = add_ln703_2233_fu_993619_p2.read();
        add_ln703_2242_reg_998518 = add_ln703_2242_fu_993675_p2.read();
        add_ln703_2362_reg_998563 = add_ln703_2362_fu_994549_p2.read();
        add_ln703_2365_reg_998568 = add_ln703_2365_fu_994567_p2.read();
        add_ln703_2374_reg_998573 = add_ln703_2374_fu_994619_p2.read();
        add_ln703_2378_reg_998578 = add_ln703_2378_fu_994645_p2.read();
        add_ln703_2381_reg_998583 = add_ln703_2381_fu_994667_p2.read();
        add_ln703_2389_reg_998588 = add_ln703_2389_fu_994717_p2.read();
        add_ln703_2393_reg_998593 = add_ln703_2393_fu_994739_p2.read();
        add_ln703_2396_reg_998598 = add_ln703_2396_fu_994761_p2.read();
        add_ln703_2404_reg_998603 = add_ln703_2404_fu_994819_p2.read();
        add_ln703_2441_reg_998623 = add_ln703_2441_fu_995075_p2.read();
        add_ln703_2444_reg_998628 = add_ln703_2444_fu_995097_p2.read();
        add_ln703_2452_reg_998633 = add_ln703_2452_fu_995147_p2.read();
        add_ln703_2484_reg_998648 = add_ln703_2484_fu_995377_p2.read();
        add_ln703_2487_reg_998653 = add_ln703_2487_fu_995399_p2.read();
        add_ln703_2495_reg_998658 = add_ln703_2495_fu_995453_p2.read();
        add_ln703_2515_reg_998668 = add_ln703_2515_fu_995591_p2.read();
        add_ln703_2518_reg_998673 = add_ln703_2518_fu_995609_p2.read();
        add_ln703_2527_reg_998678 = add_ln703_2527_fu_995665_p2.read();
        add_ln703_2544_reg_998688 = add_ln703_2544_fu_995801_p2.read();
        add_ln703_2547_reg_998693 = add_ln703_2547_fu_995823_p2.read();
        add_ln703_2556_reg_998698 = add_ln703_2556_fu_995883_p2.read();
        add_ln703_2576_reg_998708 = add_ln703_2576_fu_996013_p2.read();
        add_ln703_2579_reg_998713 = add_ln703_2579_fu_996031_p2.read();
        add_ln703_2588_reg_998718 = add_ln703_2588_fu_996091_p2.read();
        add_ln703_2622_reg_998733 = add_ln703_2622_fu_996357_p2.read();
        add_ln703_2625_reg_998738 = add_ln703_2625_fu_996383_p2.read();
        add_ln703_2634_reg_998743 = add_ln703_2634_fu_996443_p2.read();
        add_ln703_2651_reg_998753 = add_ln703_2651_fu_996555_p2.read();
        add_ln703_2654_reg_998758 = add_ln703_2654_fu_996577_p2.read();
        add_ln703_2662_reg_998763 = add_ln703_2662_fu_996631_p2.read();
        add_ln703_2679_reg_998773 = add_ln703_2679_fu_996747_p2.read();
        add_ln703_2682_reg_998778 = add_ln703_2682_fu_996769_p2.read();
        add_ln703_2691_reg_998783 = add_ln703_2691_fu_996825_p2.read();
        add_ln703_2711_reg_998793 = add_ln703_2711_fu_996971_p2.read();
        add_ln703_2714_reg_998798 = add_ln703_2714_fu_996993_p2.read();
        add_ln703_2723_reg_998803 = add_ln703_2723_fu_997053_p2.read();
        add_ln703_2727_reg_998808 = add_ln703_2727_fu_997071_p2.read();
        add_ln703_2730_reg_998813 = add_ln703_2730_fu_997093_p2.read();
        add_ln703_2739_reg_998818 = add_ln703_2739_fu_997149_p2.read();
        add_ln703_2788_reg_998838 = add_ln703_2788_fu_997489_p2.read();
        add_ln703_2791_reg_998843 = add_ln703_2791_fu_997511_p2.read();
        add_ln703_2800_reg_998848 = add_ln703_2800_fu_997567_p2.read();
        add_ln703_2818_reg_998858 = add_ln703_2818_fu_997693_p2.read();
        add_ln703_2821_reg_998863 = add_ln703_2821_fu_997715_p2.read();
        add_ln703_2830_reg_998868 = add_ln703_2830_fu_997767_p2.read();
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

