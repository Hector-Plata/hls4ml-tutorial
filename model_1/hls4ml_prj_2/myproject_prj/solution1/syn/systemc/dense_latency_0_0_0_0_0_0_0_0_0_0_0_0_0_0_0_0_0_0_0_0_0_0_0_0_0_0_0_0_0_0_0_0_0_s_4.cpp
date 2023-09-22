#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_2827_fu_997745_p2() {
    add_ln703_2827_fu_997745_p2 = (!ap_const_lv8_C8.is_01() || !sext_ln203_194_fu_989974_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(sext_ln203_194_fu_989974_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_2828_fu_997755_p2() {
    add_ln703_2828_fu_997755_p2 = (!zext_ln703_18_fu_997751_p1.read().is_01() || !mult_1023_V_fu_991095_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_18_fu_997751_p1.read()) + sc_bigint<16>(mult_1023_V_fu_991095_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_2829_fu_997761_p2() {
    add_ln703_2829_fu_997761_p2 = (!add_ln703_2828_fu_997755_p2.read().is_01() || !add_ln703_2826_fu_997739_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2828_fu_997755_p2.read()) + sc_biguint<16>(add_ln703_2826_fu_997739_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_2830_fu_997767_p2() {
    add_ln703_2830_fu_997767_p2 = (!add_ln703_2829_fu_997761_p2.read().is_01() || !add_ln703_2825_fu_997733_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2829_fu_997761_p2.read()) + sc_biguint<16>(add_ln703_2825_fu_997733_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_add_ln703_fu_991099_p2() {
    add_ln703_fu_991099_p2 = (!sext_ln203_1017_fu_977831_p1.read().is_01() || !sext_ln203_1032_fu_978613_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1017_fu_977831_p1.read()) + sc_bigint<15>(sext_ln203_1032_fu_978613_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_0() {
    ap_return_0 = add_ln703_1887_reg_998333.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_1() {
    ap_return_1 = acc_1_V_reg_998338.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_10() {
    ap_return_10 = acc_10_V_reg_998403.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_11() {
    ap_return_11 = acc_11_V_fu_997795_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_12() {
    ap_return_12 = acc_12_V_fu_997804_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_13() {
    ap_return_13 = acc_13_V_fu_997813_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_14() {
    ap_return_14 = acc_14_V_reg_998453.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_15() {
    ap_return_15 = acc_15_V_reg_998458.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_16() {
    ap_return_16 = acc_16_V_reg_998463.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_17() {
    ap_return_17 = acc_17_V_reg_998468.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_18() {
    ap_return_18 = acc_18_V_reg_998473.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_19() {
    ap_return_19 = acc_19_V_fu_997822_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_2() {
    ap_return_2 = acc_2_V_reg_998343.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_20() {
    ap_return_20 = acc_20_V_reg_998493.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_21() {
    ap_return_21 = acc_21_V_reg_998498.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_22() {
    ap_return_22 = acc_22_V_reg_998503.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_23() {
    ap_return_23 = acc_23_V_fu_997831_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_24() {
    ap_return_24 = acc_24_V_reg_998523.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_25() {
    ap_return_25 = acc_25_V_reg_998528.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_26() {
    ap_return_26 = acc_26_V_reg_998533.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_27() {
    ap_return_27 = acc_27_V_reg_998538.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_28() {
    ap_return_28 = acc_28_V_reg_998543.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_29() {
    ap_return_29 = acc_29_V_reg_998548.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_3() {
    ap_return_3 = acc_3_V_reg_998348.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_30() {
    ap_return_30 = acc_30_V_reg_998553.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_31() {
    ap_return_31 = acc_31_V_reg_998558.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_32() {
    ap_return_32 = acc_32_V_fu_997840_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_33() {
    ap_return_33 = acc_33_V_fu_997849_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_34() {
    ap_return_34 = acc_34_V_fu_997858_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_35() {
    ap_return_35 = sext_ln703_869_fu_997863_p1.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_36() {
    ap_return_36 = acc_36_V_reg_998613.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_37() {
    ap_return_37 = acc_37_V_reg_998618.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_38() {
    ap_return_38 = acc_38_V_fu_997874_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_39() {
    ap_return_39 = acc_39_V_reg_998638.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_4() {
    ap_return_4 = acc_4_V_fu_997777_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_40() {
    ap_return_40 = acc_40_V_reg_998643.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_41() {
    ap_return_41 = acc_41_V_fu_997887_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_42() {
    ap_return_42 = acc_42_V_reg_998663.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_43() {
    ap_return_43 = acc_43_V_fu_997896_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_44() {
    ap_return_44 = acc_44_V_reg_998683.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_45() {
    ap_return_45 = acc_45_V_fu_997905_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_46() {
    ap_return_46 = acc_46_V_reg_998703.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_47() {
    ap_return_47 = acc_47_V_fu_997914_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_48() {
    ap_return_48 = acc_48_V_reg_998723.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_49() {
    ap_return_49 = acc_49_V_reg_998728.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_5() {
    ap_return_5 = acc_5_V_reg_998368.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_50() {
    ap_return_50 = acc_50_V_fu_997927_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_51() {
    ap_return_51 = acc_51_V_reg_998748.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_52() {
    ap_return_52 = acc_52_V_fu_997936_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_53() {
    ap_return_53 = acc_53_V_reg_998768.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_54() {
    ap_return_54 = acc_54_V_fu_997945_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_55() {
    ap_return_55 = acc_55_V_reg_998788.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_56() {
    ap_return_56 = acc_56_V_fu_997954_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_57() {
    ap_return_57 = acc_57_V_fu_997963_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_58() {
    ap_return_58 = acc_58_V_reg_998823.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_59() {
    ap_return_59 = acc_59_V_reg_998828.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_6() {
    ap_return_6 = acc_6_V_fu_997786_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_60() {
    ap_return_60 = acc_60_V_reg_998833.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_61() {
    ap_return_61 = acc_61_V_fu_997972_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_62() {
    ap_return_62 = acc_62_V_reg_998853.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_63() {
    ap_return_63 = acc_63_V_fu_997985_p2.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_7() {
    ap_return_7 = acc_7_V_reg_998388.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_8() {
    ap_return_8 = acc_8_V_reg_998393.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_ap_return_9() {
    ap_return_9 = acc_9_V_reg_998398.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1000_fu_1159_p1() {
    mul_ln1118_1000_fu_1159_p1 =  (sc_lv<16>) (sext_ln1118_1094_fu_985317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1000_fu_1159_p2() {
    mul_ln1118_1000_fu_1159_p2 = (!ap_const_lv24_5D.is_01() || !mul_ln1118_1000_fu_1159_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5D) * sc_bigint<16>(mul_ln1118_1000_fu_1159_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1001_fu_1492_p1() {
    mul_ln1118_1001_fu_1492_p1 =  (sc_lv<16>) (sext_ln1118_1093_fu_985308_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1001_fu_1492_p2() {
    mul_ln1118_1001_fu_1492_p2 = (!ap_const_lv26_145.is_01() || !mul_ln1118_1001_fu_1492_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_145) * sc_bigint<16>(mul_ln1118_1001_fu_1492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1002_fu_1327_p1() {
    mul_ln1118_1002_fu_1327_p1 =  (sc_lv<16>) (sext_ln1118_1099_fu_985350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1002_fu_1327_p2() {
    mul_ln1118_1002_fu_1327_p2 = (!ap_const_lv25_1FFFF27.is_01() || !mul_ln1118_1002_fu_1327_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF27) * sc_bigint<16>(mul_ln1118_1002_fu_1327_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1003_fu_1494_p1() {
    mul_ln1118_1003_fu_1494_p1 =  (sc_lv<16>) (sext_ln1118_1094_fu_985317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1003_fu_1494_p2() {
    mul_ln1118_1003_fu_1494_p2 = (!ap_const_lv24_FFFF8F.is_01() || !mul_ln1118_1003_fu_1494_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF8F) * sc_bigint<16>(mul_ln1118_1003_fu_1494_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1004_fu_1163_p1() {
    mul_ln1118_1004_fu_1163_p1 = tmp_4_fu_985298_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1004_fu_1163_p2() {
    mul_ln1118_1004_fu_1163_p2 = (!ap_const_lv22_3FFFEB.is_01() || !mul_ln1118_1004_fu_1163_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFEB) * sc_bigint<16>(mul_ln1118_1004_fu_1163_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1005_fu_1330_p1() {
    mul_ln1118_1005_fu_1330_p1 = tmp_4_fu_985298_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1005_fu_1330_p2() {
    mul_ln1118_1005_fu_1330_p2 = (!ap_const_lv23_7FFFD7.is_01() || !mul_ln1118_1005_fu_1330_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD7) * sc_bigint<16>(mul_ln1118_1005_fu_1330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1006_fu_1464_p1() {
    mul_ln1118_1006_fu_1464_p1 =  (sc_lv<16>) (sext_ln1118_1094_fu_985317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1006_fu_1464_p2() {
    mul_ln1118_1006_fu_1464_p2 = (!ap_const_lv24_FFFFA1.is_01() || !mul_ln1118_1006_fu_1464_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA1) * sc_bigint<16>(mul_ln1118_1006_fu_1464_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1007_fu_1399_p1() {
    mul_ln1118_1007_fu_1399_p1 =  (sc_lv<16>) (sext_ln1118_1099_fu_985350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1007_fu_1399_p2() {
    mul_ln1118_1007_fu_1399_p2 = (!ap_const_lv25_AC.is_01() || !mul_ln1118_1007_fu_1399_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_AC) * sc_bigint<16>(mul_ln1118_1007_fu_1399_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1008_fu_1432_p1() {
    mul_ln1118_1008_fu_1432_p1 =  (sc_lv<16>) (sext_ln1118_1094_fu_985317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1008_fu_1432_p2() {
    mul_ln1118_1008_fu_1432_p2 = (!ap_const_lv24_63.is_01() || !mul_ln1118_1008_fu_1432_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_63) * sc_bigint<16>(mul_ln1118_1008_fu_1432_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1009_fu_1353_p1() {
    mul_ln1118_1009_fu_1353_p1 =  (sc_lv<16>) (sext_ln1118_1093_fu_985308_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1009_fu_1353_p2() {
    mul_ln1118_1009_fu_1353_p2 = (!ap_const_lv26_3FFFE89.is_01() || !mul_ln1118_1009_fu_1353_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE89) * sc_bigint<16>(mul_ln1118_1009_fu_1353_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1010_fu_1302_p1() {
    mul_ln1118_1010_fu_1302_p1 =  (sc_lv<16>) (sext_ln1118_1094_fu_985317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1010_fu_1302_p2() {
    mul_ln1118_1010_fu_1302_p2 = (!ap_const_lv24_43.is_01() || !mul_ln1118_1010_fu_1302_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_43) * sc_bigint<16>(mul_ln1118_1010_fu_1302_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1011_fu_1265_p1() {
    mul_ln1118_1011_fu_1265_p1 =  (sc_lv<16>) (sext_ln1118_1099_fu_985350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1011_fu_1265_p2() {
    mul_ln1118_1011_fu_1265_p2 = (!ap_const_lv25_1FFFF3A.is_01() || !mul_ln1118_1011_fu_1265_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF3A) * sc_bigint<16>(mul_ln1118_1011_fu_1265_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1012_fu_1214_p1() {
    mul_ln1118_1012_fu_1214_p1 =  (sc_lv<16>) (sext_ln1118_1118_fu_986312_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1012_fu_1214_p2() {
    mul_ln1118_1012_fu_1214_p2 = (!ap_const_lv26_166.is_01() || !mul_ln1118_1012_fu_1214_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_166) * sc_bigint<16>(mul_ln1118_1012_fu_1214_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1013_fu_1261_p1() {
    mul_ln1118_1013_fu_1261_p1 =  (sc_lv<16>) (sext_ln1118_1117_fu_986298_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1013_fu_1261_p2() {
    mul_ln1118_1013_fu_1261_p2 = (!ap_const_lv25_CE.is_01() || !mul_ln1118_1013_fu_1261_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_CE) * sc_bigint<16>(mul_ln1118_1013_fu_1261_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1014_fu_1615_p1() {
    mul_ln1118_1014_fu_1615_p1 =  (sc_lv<16>) (sext_ln1118_1117_fu_986298_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1014_fu_1615_p2() {
    mul_ln1118_1014_fu_1615_p2 = (!ap_const_lv25_1FFFF23.is_01() || !mul_ln1118_1014_fu_1615_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF23) * sc_bigint<16>(mul_ln1118_1014_fu_1615_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1015_fu_1592_p1() {
    mul_ln1118_1015_fu_1592_p1 =  (sc_lv<16>) (sext_ln1118_1118_fu_986312_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1015_fu_1592_p2() {
    mul_ln1118_1015_fu_1592_p2 = (!ap_const_lv26_3FFFED1.is_01() || !mul_ln1118_1015_fu_1592_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFED1) * sc_bigint<16>(mul_ln1118_1015_fu_1592_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1016_fu_1262_p1() {
    mul_ln1118_1016_fu_1262_p1 =  (sc_lv<16>) (sext_ln1118_1116_fu_986291_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1016_fu_1262_p2() {
    mul_ln1118_1016_fu_1262_p2 = (!ap_const_lv22_13.is_01() || !mul_ln1118_1016_fu_1262_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_13) * sc_bigint<16>(mul_ln1118_1016_fu_1262_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1017_fu_1532_p1() {
    mul_ln1118_1017_fu_1532_p1 =  (sc_lv<16>) (sext_ln1118_1117_fu_986298_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1017_fu_1532_p2() {
    mul_ln1118_1017_fu_1532_p2 = (!ap_const_lv25_C2.is_01() || !mul_ln1118_1017_fu_1532_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_C2) * sc_bigint<16>(mul_ln1118_1017_fu_1532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1018_fu_1495_p1() {
    mul_ln1118_1018_fu_1495_p1 =  (sc_lv<16>) (sext_ln1118_1117_fu_986298_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1018_fu_1495_p2() {
    mul_ln1118_1018_fu_1495_p2 = (!ap_const_lv25_9C.is_01() || !mul_ln1118_1018_fu_1495_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_9C) * sc_bigint<16>(mul_ln1118_1018_fu_1495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1019_fu_1458_p1() {
    mul_ln1118_1019_fu_1458_p1 =  (sc_lv<16>) (sext_ln1118_1117_fu_986298_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1019_fu_1458_p2() {
    mul_ln1118_1019_fu_1458_p2 = (!ap_const_lv25_1FFFF3E.is_01() || !mul_ln1118_1019_fu_1458_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF3E) * sc_bigint<16>(mul_ln1118_1019_fu_1458_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1020_fu_1595_p1() {
    mul_ln1118_1020_fu_1595_p1 =  (sc_lv<16>) (sext_ln1118_1117_fu_986298_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1020_fu_1595_p2() {
    mul_ln1118_1020_fu_1595_p2 = (!ap_const_lv25_D5.is_01() || !mul_ln1118_1020_fu_1595_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_D5) * sc_bigint<16>(mul_ln1118_1020_fu_1595_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1021_fu_1311_p1() {
    mul_ln1118_1021_fu_1311_p1 =  (sc_lv<16>) (sext_ln1118_1118_fu_986312_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1021_fu_1311_p2() {
    mul_ln1118_1021_fu_1311_p2 = (!ap_const_lv26_141.is_01() || !mul_ln1118_1021_fu_1311_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_141) * sc_bigint<16>(mul_ln1118_1021_fu_1311_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1022_fu_1141_p1() {
    mul_ln1118_1022_fu_1141_p1 =  (sc_lv<16>) (sext_ln1118_1122_fu_986340_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1022_fu_1141_p2() {
    mul_ln1118_1022_fu_1141_p2 = (!ap_const_lv24_58.is_01() || !mul_ln1118_1022_fu_1141_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_58) * sc_bigint<16>(mul_ln1118_1022_fu_1141_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1023_fu_1199_p1() {
    mul_ln1118_1023_fu_1199_p1 =  (sc_lv<16>) (sext_ln1118_1122_fu_986340_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1023_fu_1199_p2() {
    mul_ln1118_1023_fu_1199_p2 = (!ap_const_lv24_4A.is_01() || !mul_ln1118_1023_fu_1199_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4A) * sc_bigint<16>(mul_ln1118_1023_fu_1199_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1024_fu_1200_p1() {
    mul_ln1118_1024_fu_1200_p1 =  (sc_lv<16>) (sext_ln1118_1120_fu_986327_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1024_fu_1200_p2() {
    mul_ln1118_1024_fu_1200_p2 = (!ap_const_lv23_3B.is_01() || !mul_ln1118_1024_fu_1200_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_3B) * sc_bigint<16>(mul_ln1118_1024_fu_1200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1025_fu_1503_p1() {
    mul_ln1118_1025_fu_1503_p1 =  (sc_lv<16>) (sext_ln1118_1120_fu_986327_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1025_fu_1503_p2() {
    mul_ln1118_1025_fu_1503_p2 = (!ap_const_lv23_7FFFDD.is_01() || !mul_ln1118_1025_fu_1503_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFDD) * sc_bigint<16>(mul_ln1118_1025_fu_1503_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1026_fu_1172_p1() {
    mul_ln1118_1026_fu_1172_p1 =  (sc_lv<16>) (sext_ln1118_1120_fu_986327_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1026_fu_1172_p2() {
    mul_ln1118_1026_fu_1172_p2 = (!ap_const_lv23_7FFFD3.is_01() || !mul_ln1118_1026_fu_1172_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD3) * sc_bigint<16>(mul_ln1118_1026_fu_1172_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1027_fu_1339_p1() {
    mul_ln1118_1027_fu_1339_p1 =  (sc_lv<16>) (sext_ln1118_1122_fu_986340_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1027_fu_1339_p2() {
    mul_ln1118_1027_fu_1339_p2 = (!ap_const_lv24_4B.is_01() || !mul_ln1118_1027_fu_1339_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4B) * sc_bigint<16>(mul_ln1118_1027_fu_1339_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1028_fu_1174_p1() {
    mul_ln1118_1028_fu_1174_p1 =  (sc_lv<16>) (sext_ln1118_1122_fu_986340_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1028_fu_1174_p2() {
    mul_ln1118_1028_fu_1174_p2 = (!ap_const_lv24_65.is_01() || !mul_ln1118_1028_fu_1174_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_65) * sc_bigint<16>(mul_ln1118_1028_fu_1174_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1029_fu_1175_p1() {
    mul_ln1118_1029_fu_1175_p1 =  (sc_lv<16>) (sext_ln1118_1122_fu_986340_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1029_fu_1175_p2() {
    mul_ln1118_1029_fu_1175_p2 = (!ap_const_lv24_66.is_01() || !mul_ln1118_1029_fu_1175_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_66) * sc_bigint<16>(mul_ln1118_1029_fu_1175_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1030_fu_1176_p1() {
    mul_ln1118_1030_fu_1176_p1 =  (sc_lv<16>) (sext_ln1118_1116_fu_986291_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1030_fu_1176_p2() {
    mul_ln1118_1030_fu_1176_p2 = (!ap_const_lv22_16.is_01() || !mul_ln1118_1030_fu_1176_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_16) * sc_bigint<16>(mul_ln1118_1030_fu_1176_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1031_fu_1574_p1() {
    mul_ln1118_1031_fu_1574_p1 =  (sc_lv<16>) (sext_ln1118_1117_fu_986298_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1031_fu_1574_p2() {
    mul_ln1118_1031_fu_1574_p2 = (!ap_const_lv25_1FFFF56.is_01() || !mul_ln1118_1031_fu_1574_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF56) * sc_bigint<16>(mul_ln1118_1031_fu_1574_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1032_fu_1178_p1() {
    mul_ln1118_1032_fu_1178_p1 =  (sc_lv<16>) (sext_ln1118_1122_fu_986340_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1032_fu_1178_p2() {
    mul_ln1118_1032_fu_1178_p2 = (!ap_const_lv24_FFFF8B.is_01() || !mul_ln1118_1032_fu_1178_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF8B) * sc_bigint<16>(mul_ln1118_1032_fu_1178_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1033_fu_1526_p1() {
    mul_ln1118_1033_fu_1526_p1 =  (sc_lv<16>) (sext_ln1118_1116_fu_986291_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1033_fu_1526_p2() {
    mul_ln1118_1033_fu_1526_p2 = (!ap_const_lv22_17.is_01() || !mul_ln1118_1033_fu_1526_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_17) * sc_bigint<16>(mul_ln1118_1033_fu_1526_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1034_fu_1270_p1() {
    mul_ln1118_1034_fu_1270_p1 =  (sc_lv<16>) (sext_ln1118_1118_fu_986312_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1034_fu_1270_p2() {
    mul_ln1118_1034_fu_1270_p2 = (!ap_const_lv26_3FFFE33.is_01() || !mul_ln1118_1034_fu_1270_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE33) * sc_bigint<16>(mul_ln1118_1034_fu_1270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1035_fu_1219_p1() {
    mul_ln1118_1035_fu_1219_p1 =  (sc_lv<16>) (sext_ln1118_1122_fu_986340_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1035_fu_1219_p2() {
    mul_ln1118_1035_fu_1219_p2 = (!ap_const_lv24_FFFFB1.is_01() || !mul_ln1118_1035_fu_1219_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB1) * sc_bigint<16>(mul_ln1118_1035_fu_1219_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1036_fu_1168_p1() {
    mul_ln1118_1036_fu_1168_p1 =  (sc_lv<16>) (sext_ln1118_1117_fu_986298_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1036_fu_1168_p2() {
    mul_ln1118_1036_fu_1168_p2 = (!ap_const_lv25_1FFFF64.is_01() || !mul_ln1118_1036_fu_1168_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF64) * sc_bigint<16>(mul_ln1118_1036_fu_1168_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1037_fu_1634_p1() {
    mul_ln1118_1037_fu_1634_p1 =  (sc_lv<16>) (sext_ln1118_1122_fu_986340_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1037_fu_1634_p2() {
    mul_ln1118_1037_fu_1634_p2 = (!ap_const_lv24_FFFFA5.is_01() || !mul_ln1118_1037_fu_1634_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA5) * sc_bigint<16>(mul_ln1118_1037_fu_1634_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1038_fu_1597_p1() {
    mul_ln1118_1038_fu_1597_p1 =  (sc_lv<16>) (sext_ln1118_1120_fu_986327_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1038_fu_1597_p2() {
    mul_ln1118_1038_fu_1597_p2 = (!ap_const_lv23_7FFFD2.is_01() || !mul_ln1118_1038_fu_1597_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD2) * sc_bigint<16>(mul_ln1118_1038_fu_1597_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1039_fu_1560_p1() {
    mul_ln1118_1039_fu_1560_p1 =  (sc_lv<16>) (sext_ln1118_1120_fu_986327_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1039_fu_1560_p2() {
    mul_ln1118_1039_fu_1560_p2 = (!ap_const_lv23_7FFFD6.is_01() || !mul_ln1118_1039_fu_1560_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD6) * sc_bigint<16>(mul_ln1118_1039_fu_1560_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1040_fu_1565_p1() {
    mul_ln1118_1040_fu_1565_p1 =  (sc_lv<16>) (sext_ln1118_1117_fu_986298_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1040_fu_1565_p2() {
    mul_ln1118_1040_fu_1565_p2 = (!ap_const_lv25_1FFFF22.is_01() || !mul_ln1118_1040_fu_1565_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF22) * sc_bigint<16>(mul_ln1118_1040_fu_1565_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1041_fu_1472_p1() {
    mul_ln1118_1041_fu_1472_p1 =  (sc_lv<16>) (sext_ln1118_1122_fu_986340_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1041_fu_1472_p2() {
    mul_ln1118_1041_fu_1472_p2 = (!ap_const_lv24_FFFFAB.is_01() || !mul_ln1118_1041_fu_1472_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFAB) * sc_bigint<16>(mul_ln1118_1041_fu_1472_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1042_fu_1435_p1() {
    mul_ln1118_1042_fu_1435_p1 =  (sc_lv<16>) (sext_ln1118_1118_fu_986312_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1042_fu_1435_p2() {
    mul_ln1118_1042_fu_1435_p2 = (!ap_const_lv26_13E.is_01() || !mul_ln1118_1042_fu_1435_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_13E) * sc_bigint<16>(mul_ln1118_1042_fu_1435_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1043_fu_1398_p1() {
    mul_ln1118_1043_fu_1398_p1 =  (sc_lv<16>) (sext_ln1118_1118_fu_986312_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1043_fu_1398_p2() {
    mul_ln1118_1043_fu_1398_p2 = (!ap_const_lv26_3FFFD95.is_01() || !mul_ln1118_1043_fu_1398_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFD95) * sc_bigint<16>(mul_ln1118_1043_fu_1398_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1044_fu_1347_p1() {
    mul_ln1118_1044_fu_1347_p1 =  (sc_lv<16>) (sext_ln1118_1122_fu_986340_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1044_fu_1347_p2() {
    mul_ln1118_1044_fu_1347_p2 = (!ap_const_lv24_FFFF8D.is_01() || !mul_ln1118_1044_fu_1347_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF8D) * sc_bigint<16>(mul_ln1118_1044_fu_1347_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1045_fu_1310_p1() {
    mul_ln1118_1045_fu_1310_p1 =  (sc_lv<16>) (sext_ln1118_1117_fu_986298_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1045_fu_1310_p2() {
    mul_ln1118_1045_fu_1310_p2 = (!ap_const_lv25_1FFFF35.is_01() || !mul_ln1118_1045_fu_1310_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF35) * sc_bigint<16>(mul_ln1118_1045_fu_1310_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1046_fu_1287_p1() {
    mul_ln1118_1046_fu_1287_p1 =  (sc_lv<16>) (sext_ln1118_1118_fu_986312_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1046_fu_1287_p2() {
    mul_ln1118_1046_fu_1287_p2 = (!ap_const_lv26_12F.is_01() || !mul_ln1118_1046_fu_1287_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_12F) * sc_bigint<16>(mul_ln1118_1046_fu_1287_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1047_fu_1292_p1() {
    mul_ln1118_1047_fu_1292_p1 = tmp_11_fu_987322_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1047_fu_1292_p2() {
    mul_ln1118_1047_fu_1292_p2 = (!ap_const_lv22_3FFFE3.is_01() || !mul_ln1118_1047_fu_1292_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFE3) * sc_bigint<16>(mul_ln1118_1047_fu_1292_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1048_fu_1486_p1() {
    mul_ln1118_1048_fu_1486_p1 =  (sc_lv<16>) (sext_ln1118_1140_fu_987346_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1048_fu_1486_p2() {
    mul_ln1118_1048_fu_1486_p2 = (!ap_const_lv25_D3.is_01() || !mul_ln1118_1048_fu_1486_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_D3) * sc_bigint<16>(mul_ln1118_1048_fu_1486_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1049_fu_1544_p1() {
    mul_ln1118_1049_fu_1544_p1 =  (sc_lv<16>) (sext_ln1118_1144_fu_987374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1049_fu_1544_p2() {
    mul_ln1118_1049_fu_1544_p2 = (!ap_const_lv24_57.is_01() || !mul_ln1118_1049_fu_1544_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_57) * sc_bigint<16>(mul_ln1118_1049_fu_1544_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1050_fu_1488_p1() {
    mul_ln1118_1050_fu_1488_p1 =  (sc_lv<16>) (sext_ln1118_1144_fu_987374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1050_fu_1488_p2() {
    mul_ln1118_1050_fu_1488_p2 = (!ap_const_lv24_FFFFA4.is_01() || !mul_ln1118_1050_fu_1488_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA4) * sc_bigint<16>(mul_ln1118_1050_fu_1488_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1051_fu_1546_p1() {
    mul_ln1118_1051_fu_1546_p1 =  (sc_lv<16>) (sext_ln1118_1140_fu_987346_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1051_fu_1546_p2() {
    mul_ln1118_1051_fu_1546_p2 = (!ap_const_lv25_1FFFF7A.is_01() || !mul_ln1118_1051_fu_1546_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF7A) * sc_bigint<16>(mul_ln1118_1051_fu_1546_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1052_fu_1376_p1() {
    mul_ln1118_1052_fu_1376_p1 =  (sc_lv<16>) (sext_ln1118_1140_fu_987346_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1052_fu_1376_p2() {
    mul_ln1118_1052_fu_1376_p2 = (!ap_const_lv25_1FFFF36.is_01() || !mul_ln1118_1052_fu_1376_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF36) * sc_bigint<16>(mul_ln1118_1052_fu_1376_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1053_fu_1352_p1() {
    mul_ln1118_1053_fu_1352_p1 =  (sc_lv<16>) (sext_ln1118_1140_fu_987346_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1053_fu_1352_p2() {
    mul_ln1118_1053_fu_1352_p2 = (!ap_const_lv25_1FFFF19.is_01() || !mul_ln1118_1053_fu_1352_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF19) * sc_bigint<16>(mul_ln1118_1053_fu_1352_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1054_fu_1338_p1() {
    mul_ln1118_1054_fu_1338_p1 = tmp_11_fu_987322_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1054_fu_1338_p2() {
    mul_ln1118_1054_fu_1338_p2 = (!ap_const_lv21_1FFFF3.is_01() || !mul_ln1118_1054_fu_1338_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(mul_ln1118_1054_fu_1338_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1055_fu_1490_p1() {
    mul_ln1118_1055_fu_1490_p1 =  (sc_lv<16>) (sext_ln1118_1140_fu_987346_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1055_fu_1490_p2() {
    mul_ln1118_1055_fu_1490_p2 = (!ap_const_lv25_1FFFF6B.is_01() || !mul_ln1118_1055_fu_1490_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF6B) * sc_bigint<16>(mul_ln1118_1055_fu_1490_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1056_fu_1144_p1() {
    mul_ln1118_1056_fu_1144_p1 =  (sc_lv<16>) (sext_ln1118_1140_fu_987346_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1056_fu_1144_p2() {
    mul_ln1118_1056_fu_1144_p2 = (!ap_const_lv25_1FFFF2E.is_01() || !mul_ln1118_1056_fu_1144_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF2E) * sc_bigint<16>(mul_ln1118_1056_fu_1144_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1057_fu_1522_p1() {
    mul_ln1118_1057_fu_1522_p1 =  (sc_lv<16>) (sext_ln1118_1139_fu_987338_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1057_fu_1522_p2() {
    mul_ln1118_1057_fu_1522_p2 = (!ap_const_lv23_7FFFD3.is_01() || !mul_ln1118_1057_fu_1522_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD3) * sc_bigint<16>(mul_ln1118_1057_fu_1522_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1058_fu_1191_p1() {
    mul_ln1118_1058_fu_1191_p1 =  (sc_lv<16>) (sext_ln1118_1138_fu_987332_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1058_fu_1191_p2() {
    mul_ln1118_1058_fu_1191_p2 = (!ap_const_lv26_3FFFE78.is_01() || !mul_ln1118_1058_fu_1191_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE78) * sc_bigint<16>(mul_ln1118_1058_fu_1191_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1059_fu_1509_p1() {
    mul_ln1118_1059_fu_1509_p1 =  (sc_lv<16>) (sext_ln1118_1144_fu_987374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1059_fu_1509_p2() {
    mul_ln1118_1059_fu_1509_p2 = (!ap_const_lv24_7A.is_01() || !mul_ln1118_1059_fu_1509_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7A) * sc_bigint<16>(mul_ln1118_1059_fu_1509_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1060_fu_1193_p1() {
    mul_ln1118_1060_fu_1193_p1 =  (sc_lv<16>) (sext_ln1118_1139_fu_987338_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1060_fu_1193_p2() {
    mul_ln1118_1060_fu_1193_p2 = (!ap_const_lv23_7FFFCB.is_01() || !mul_ln1118_1060_fu_1193_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCB) * sc_bigint<16>(mul_ln1118_1060_fu_1193_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1061_fu_1588_p1() {
    mul_ln1118_1061_fu_1588_p1 =  (sc_lv<16>) (sext_ln1118_1144_fu_987374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1061_fu_1588_p2() {
    mul_ln1118_1061_fu_1588_p2 = (!ap_const_lv24_65.is_01() || !mul_ln1118_1061_fu_1588_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_65) * sc_bigint<16>(mul_ln1118_1061_fu_1588_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1062_fu_1593_p1() {
    mul_ln1118_1062_fu_1593_p1 =  (sc_lv<16>) (sext_ln1118_1140_fu_987346_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1062_fu_1593_p2() {
    mul_ln1118_1062_fu_1593_p2 = (!ap_const_lv25_BA.is_01() || !mul_ln1118_1062_fu_1593_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_BA) * sc_bigint<16>(mul_ln1118_1062_fu_1593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1063_fu_1500_p1() {
    mul_ln1118_1063_fu_1500_p1 =  (sc_lv<16>) (sext_ln1118_1140_fu_987346_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1063_fu_1500_p2() {
    mul_ln1118_1063_fu_1500_p2 = (!ap_const_lv25_97.is_01() || !mul_ln1118_1063_fu_1500_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_97) * sc_bigint<16>(mul_ln1118_1063_fu_1500_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1064_fu_1463_p1() {
    mul_ln1118_1064_fu_1463_p1 =  (sc_lv<16>) (sext_ln1118_1139_fu_987338_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1064_fu_1463_p2() {
    mul_ln1118_1064_fu_1463_p2 = (!ap_const_lv23_36.is_01() || !mul_ln1118_1064_fu_1463_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_36) * sc_bigint<16>(mul_ln1118_1064_fu_1463_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1065_fu_1426_p1() {
    mul_ln1118_1065_fu_1426_p1 =  (sc_lv<16>) (sext_ln1118_1139_fu_987338_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1065_fu_1426_p2() {
    mul_ln1118_1065_fu_1426_p2 = (!ap_const_lv23_35.is_01() || !mul_ln1118_1065_fu_1426_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_35) * sc_bigint<16>(mul_ln1118_1065_fu_1426_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1066_fu_1389_p1() {
    mul_ln1118_1066_fu_1389_p1 =  (sc_lv<16>) (sext_ln1118_1144_fu_987374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1066_fu_1389_p2() {
    mul_ln1118_1066_fu_1389_p2 = (!ap_const_lv24_6D.is_01() || !mul_ln1118_1066_fu_1389_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_6D) * sc_bigint<16>(mul_ln1118_1066_fu_1389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1067_fu_1366_p1() {
    mul_ln1118_1067_fu_1366_p1 =  (sc_lv<16>) (sext_ln1118_1140_fu_987346_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1067_fu_1366_p2() {
    mul_ln1118_1067_fu_1366_p2 = (!ap_const_lv25_1FFFF30.is_01() || !mul_ln1118_1067_fu_1366_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF30) * sc_bigint<16>(mul_ln1118_1067_fu_1366_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1068_fu_1315_p1() {
    mul_ln1118_1068_fu_1315_p1 =  (sc_lv<16>) (sext_ln1118_1140_fu_987346_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1068_fu_1315_p2() {
    mul_ln1118_1068_fu_1315_p2 = (!ap_const_lv25_1FFFF62.is_01() || !mul_ln1118_1068_fu_1315_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF62) * sc_bigint<16>(mul_ln1118_1068_fu_1315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1069_fu_1264_p1() {
    mul_ln1118_1069_fu_1264_p1 =  (sc_lv<16>) (sext_ln1118_1138_fu_987332_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1069_fu_1264_p2() {
    mul_ln1118_1069_fu_1264_p2 = (!ap_const_lv26_162.is_01() || !mul_ln1118_1069_fu_1264_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_162) * sc_bigint<16>(mul_ln1118_1069_fu_1264_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1070_fu_1241_p1() {
    mul_ln1118_1070_fu_1241_p1 =  (sc_lv<16>) (sext_ln1118_1167_fu_988348_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1070_fu_1241_p2() {
    mul_ln1118_1070_fu_1241_p2 = (!ap_const_lv22_1D.is_01() || !mul_ln1118_1070_fu_1241_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_1D) * sc_bigint<16>(mul_ln1118_1070_fu_1241_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1071_fu_1204_p1() {
    mul_ln1118_1071_fu_1204_p1 =  (sc_lv<16>) (sext_ln1118_1165_fu_988330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1071_fu_1204_p2() {
    mul_ln1118_1071_fu_1204_p2 = (!ap_const_lv24_65.is_01() || !mul_ln1118_1071_fu_1204_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_65) * sc_bigint<16>(mul_ln1118_1071_fu_1204_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1072_fu_1642_p1() {
    mul_ln1118_1072_fu_1642_p1 =  (sc_lv<16>) (sext_ln1118_1165_fu_988330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1072_fu_1642_p2() {
    mul_ln1118_1072_fu_1642_p2 = (!ap_const_lv24_FFFF91.is_01() || !mul_ln1118_1072_fu_1642_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF91) * sc_bigint<16>(mul_ln1118_1072_fu_1642_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1073_fu_1619_p1() {
    mul_ln1118_1073_fu_1619_p1 =  (sc_lv<16>) (sext_ln1118_1164_fu_988319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1073_fu_1619_p2() {
    mul_ln1118_1073_fu_1619_p2 = (!ap_const_lv25_1FFFF35.is_01() || !mul_ln1118_1073_fu_1619_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF35) * sc_bigint<16>(mul_ln1118_1073_fu_1619_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1074_fu_1568_p1() {
    mul_ln1118_1074_fu_1568_p1 =  (sc_lv<16>) (sext_ln1118_1164_fu_988319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1074_fu_1568_p2() {
    mul_ln1118_1074_fu_1568_p2 = (!ap_const_lv25_B7.is_01() || !mul_ln1118_1074_fu_1568_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_B7) * sc_bigint<16>(mul_ln1118_1074_fu_1568_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1075_fu_1561_p1() {
    mul_ln1118_1075_fu_1561_p1 =  (sc_lv<16>) (sext_ln1118_1166_fu_988342_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1075_fu_1561_p2() {
    mul_ln1118_1075_fu_1561_p2 = (!ap_const_lv23_7FFFDA.is_01() || !mul_ln1118_1075_fu_1561_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFDA) * sc_bigint<16>(mul_ln1118_1075_fu_1561_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1076_fu_1505_p1() {
    mul_ln1118_1076_fu_1505_p1 =  (sc_lv<16>) (sext_ln1118_1165_fu_988330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1076_fu_1505_p2() {
    mul_ln1118_1076_fu_1505_p2 = (!ap_const_lv24_FFFFAF.is_01() || !mul_ln1118_1076_fu_1505_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFAF) * sc_bigint<16>(mul_ln1118_1076_fu_1505_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1077_fu_1449_p1() {
    mul_ln1118_1077_fu_1449_p1 =  (sc_lv<16>) (sext_ln1118_1164_fu_988319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1077_fu_1449_p2() {
    mul_ln1118_1077_fu_1449_p2 = (!ap_const_lv25_1FFFF4B.is_01() || !mul_ln1118_1077_fu_1449_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF4B) * sc_bigint<16>(mul_ln1118_1077_fu_1449_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1078_fu_1336_p1() {
    mul_ln1118_1078_fu_1336_p1 =  (sc_lv<16>) (sext_ln1118_1164_fu_988319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1078_fu_1336_p2() {
    mul_ln1118_1078_fu_1336_p2 = (!ap_const_lv25_94.is_01() || !mul_ln1118_1078_fu_1336_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_94) * sc_bigint<16>(mul_ln1118_1078_fu_1336_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1079_fu_1622_p1() {
    mul_ln1118_1079_fu_1622_p1 =  (sc_lv<16>) (sext_ln1118_1165_fu_988330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1079_fu_1622_p2() {
    mul_ln1118_1079_fu_1622_p2 = (!ap_const_lv24_FFFFAC.is_01() || !mul_ln1118_1079_fu_1622_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFAC) * sc_bigint<16>(mul_ln1118_1079_fu_1622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1080_fu_1384_p1() {
    mul_ln1118_1080_fu_1384_p1 =  (sc_lv<16>) (sext_ln1118_1165_fu_988330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1080_fu_1384_p2() {
    mul_ln1118_1080_fu_1384_p2 = (!ap_const_lv24_FFFF93.is_01() || !mul_ln1118_1080_fu_1384_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF93) * sc_bigint<16>(mul_ln1118_1080_fu_1384_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1081_fu_1367_p1() {
    mul_ln1118_1081_fu_1367_p1 =  (sc_lv<16>) (sext_ln1118_1164_fu_988319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1081_fu_1367_p2() {
    mul_ln1118_1081_fu_1367_p2 = (!ap_const_lv25_1FFFF54.is_01() || !mul_ln1118_1081_fu_1367_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF54) * sc_bigint<16>(mul_ln1118_1081_fu_1367_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1082_fu_1368_p1() {
    mul_ln1118_1082_fu_1368_p1 =  (sc_lv<16>) (sext_ln1118_1166_fu_988342_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1082_fu_1368_p2() {
    mul_ln1118_1082_fu_1368_p2 = (!ap_const_lv23_36.is_01() || !mul_ln1118_1082_fu_1368_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_36) * sc_bigint<16>(mul_ln1118_1082_fu_1368_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1083_fu_1535_p1() {
    mul_ln1118_1083_fu_1535_p1 = tmp_12_fu_988299_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1083_fu_1535_p2() {
    mul_ln1118_1083_fu_1535_p2 = (!ap_const_lv21_1FFFF3.is_01() || !mul_ln1118_1083_fu_1535_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(mul_ln1118_1083_fu_1535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1084_fu_1272_p1() {
    mul_ln1118_1084_fu_1272_p1 =  (sc_lv<16>) (sext_ln1118_1167_fu_988348_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1084_fu_1272_p2() {
    mul_ln1118_1084_fu_1272_p2 = (!ap_const_lv22_15.is_01() || !mul_ln1118_1084_fu_1272_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_15) * sc_bigint<16>(mul_ln1118_1084_fu_1272_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1085_fu_1288_p1() {
    mul_ln1118_1085_fu_1288_p1 =  (sc_lv<16>) (sext_ln1118_1165_fu_988330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1085_fu_1288_p2() {
    mul_ln1118_1085_fu_1288_p2 = (!ap_const_lv24_FFFFA8.is_01() || !mul_ln1118_1085_fu_1288_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA8) * sc_bigint<16>(mul_ln1118_1085_fu_1288_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1086_fu_1493_p1() {
    mul_ln1118_1086_fu_1493_p1 =  (sc_lv<16>) (sext_ln1118_1164_fu_988319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1086_fu_1493_p2() {
    mul_ln1118_1086_fu_1493_p2 = (!ap_const_lv25_AC.is_01() || !mul_ln1118_1086_fu_1493_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_AC) * sc_bigint<16>(mul_ln1118_1086_fu_1493_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1087_fu_1539_p1() {
    mul_ln1118_1087_fu_1539_p1 =  (sc_lv<16>) (sext_ln1118_1165_fu_988330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1087_fu_1539_p2() {
    mul_ln1118_1087_fu_1539_p2 = (!ap_const_lv24_49.is_01() || !mul_ln1118_1087_fu_1539_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_49) * sc_bigint<16>(mul_ln1118_1087_fu_1539_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1088_fu_1510_p1() {
    mul_ln1118_1088_fu_1510_p1 =  (sc_lv<16>) (sext_ln1118_1164_fu_988319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1088_fu_1510_p2() {
    mul_ln1118_1088_fu_1510_p2 = (!ap_const_lv25_1FFFF32.is_01() || !mul_ln1118_1088_fu_1510_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF32) * sc_bigint<16>(mul_ln1118_1088_fu_1510_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1089_fu_1408_p1() {
    mul_ln1118_1089_fu_1408_p1 =  (sc_lv<16>) (sext_ln1118_1165_fu_988330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1089_fu_1408_p2() {
    mul_ln1118_1089_fu_1408_p2 = (!ap_const_lv24_FFFFB4.is_01() || !mul_ln1118_1089_fu_1408_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB4) * sc_bigint<16>(mul_ln1118_1089_fu_1408_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1090_fu_1357_p1() {
    mul_ln1118_1090_fu_1357_p1 = tmp_12_fu_988299_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1090_fu_1357_p2() {
    mul_ln1118_1090_fu_1357_p2 = (!ap_const_lv26_3FFFEFD.is_01() || !mul_ln1118_1090_fu_1357_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEFD) * sc_bigint<16>(mul_ln1118_1090_fu_1357_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1091_fu_1306_p1() {
    mul_ln1118_1091_fu_1306_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1091_fu_1306_p2() {
    mul_ln1118_1091_fu_1306_p2 = (!ap_const_lv26_109.is_01() || !mul_ln1118_1091_fu_1306_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_109) * sc_bigint<16>(mul_ln1118_1091_fu_1306_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1092_fu_1269_p1() {
    mul_ln1118_1092_fu_1269_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1092_fu_1269_p2() {
    mul_ln1118_1092_fu_1269_p2 = (!ap_const_lv26_3F5.is_01() || !mul_ln1118_1092_fu_1269_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_3F5) * sc_bigint<16>(mul_ln1118_1092_fu_1269_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1093_fu_1246_p1() {
    mul_ln1118_1093_fu_1246_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1093_fu_1246_p2() {
    mul_ln1118_1093_fu_1246_p2 = (!ap_const_lv26_229.is_01() || !mul_ln1118_1093_fu_1246_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_229) * sc_bigint<16>(mul_ln1118_1093_fu_1246_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1094_fu_1195_p1() {
    mul_ln1118_1094_fu_1195_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1094_fu_1195_p2() {
    mul_ln1118_1094_fu_1195_p2 = (!ap_const_lv26_3FFFE93.is_01() || !mul_ln1118_1094_fu_1195_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE93) * sc_bigint<16>(mul_ln1118_1094_fu_1195_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1095_fu_1158_p1() {
    mul_ln1118_1095_fu_1158_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1095_fu_1158_p2() {
    mul_ln1118_1095_fu_1158_p2 = (!ap_const_lv26_325.is_01() || !mul_ln1118_1095_fu_1158_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_325) * sc_bigint<16>(mul_ln1118_1095_fu_1158_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1096_fu_1596_p1() {
    mul_ln1118_1096_fu_1596_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1096_fu_1596_p2() {
    mul_ln1118_1096_fu_1596_p2 = (!ap_const_lv26_218.is_01() || !mul_ln1118_1096_fu_1596_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_218) * sc_bigint<16>(mul_ln1118_1096_fu_1596_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1097_fu_1559_p1() {
    mul_ln1118_1097_fu_1559_p1 =  (sc_lv<16>) (sext_ln1118_1184_fu_989200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1097_fu_1559_p2() {
    mul_ln1118_1097_fu_1559_p2 = (!ap_const_lv25_1FFFF14.is_01() || !mul_ln1118_1097_fu_1559_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF14) * sc_bigint<16>(mul_ln1118_1097_fu_1559_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1098_fu_1508_p1() {
    mul_ln1118_1098_fu_1508_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1098_fu_1508_p2() {
    mul_ln1118_1098_fu_1508_p2 = (!ap_const_lv26_40A.is_01() || !mul_ln1118_1098_fu_1508_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_40A) * sc_bigint<16>(mul_ln1118_1098_fu_1508_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1099_fu_1499_p1() {
    mul_ln1118_1099_fu_1499_p1 =  (sc_lv<16>) (sext_ln1118_1184_fu_989200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1099_fu_1499_p2() {
    mul_ln1118_1099_fu_1499_p2 = (!ap_const_lv25_1FFFF76.is_01() || !mul_ln1118_1099_fu_1499_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF76) * sc_bigint<16>(mul_ln1118_1099_fu_1499_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1100_fu_1504_p1() {
    mul_ln1118_1100_fu_1504_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1100_fu_1504_p2() {
    mul_ln1118_1100_fu_1504_p2 = (!ap_const_lv26_119.is_01() || !mul_ln1118_1100_fu_1504_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_119) * sc_bigint<16>(mul_ln1118_1100_fu_1504_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1101_fu_1481_p1() {
    mul_ln1118_1101_fu_1481_p1 =  (sc_lv<16>) (sext_ln1118_1183_fu_989193_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1101_fu_1481_p2() {
    mul_ln1118_1101_fu_1481_p2 = (!ap_const_lv23_3D.is_01() || !mul_ln1118_1101_fu_1481_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_3D) * sc_bigint<16>(mul_ln1118_1101_fu_1481_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1102_fu_1374_p1() {
    mul_ln1118_1102_fu_1374_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1102_fu_1374_p2() {
    mul_ln1118_1102_fu_1374_p2 = (!ap_const_lv26_1B4.is_01() || !mul_ln1118_1102_fu_1374_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_1B4) * sc_bigint<16>(mul_ln1118_1102_fu_1374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1103_fu_1452_p1() {
    mul_ln1118_1103_fu_1452_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1103_fu_1452_p2() {
    mul_ln1118_1103_fu_1452_p2 = (!ap_const_lv26_3FFFE64.is_01() || !mul_ln1118_1103_fu_1452_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE64) * sc_bigint<16>(mul_ln1118_1103_fu_1452_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1104_fu_1396_p1() {
    mul_ln1118_1104_fu_1396_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1104_fu_1396_p2() {
    mul_ln1118_1104_fu_1396_p2 = (!ap_const_lv26_3FFFB15.is_01() || !mul_ln1118_1104_fu_1396_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFB15) * sc_bigint<16>(mul_ln1118_1104_fu_1396_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1105_fu_1340_p1() {
    mul_ln1118_1105_fu_1340_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1105_fu_1340_p2() {
    mul_ln1118_1105_fu_1340_p2 = (!ap_const_lv26_6A9.is_01() || !mul_ln1118_1105_fu_1340_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_6A9) * sc_bigint<16>(mul_ln1118_1105_fu_1340_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1106_fu_1170_p1() {
    mul_ln1118_1106_fu_1170_p1 =  (sc_lv<16>) (sext_ln1118_1183_fu_989193_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1106_fu_1170_p2() {
    mul_ln1118_1106_fu_1170_p2 = (!ap_const_lv23_35.is_01() || !mul_ln1118_1106_fu_1170_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_35) * sc_bigint<16>(mul_ln1118_1106_fu_1170_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1107_fu_1171_p1() {
    mul_ln1118_1107_fu_1171_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1107_fu_1171_p2() {
    mul_ln1118_1107_fu_1171_p2 = (!ap_const_lv26_3FFFA48.is_01() || !mul_ln1118_1107_fu_1171_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFA48) * sc_bigint<16>(mul_ln1118_1107_fu_1171_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1108_fu_1400_p1() {
    mul_ln1118_1108_fu_1400_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1108_fu_1400_p2() {
    mul_ln1118_1108_fu_1400_p2 = (!ap_const_lv26_3FFFB49.is_01() || !mul_ln1118_1108_fu_1400_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFB49) * sc_bigint<16>(mul_ln1118_1108_fu_1400_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1109_fu_1533_p1() {
    mul_ln1118_1109_fu_1533_p1 =  (sc_lv<16>) (sext_ln1118_1184_fu_989200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1109_fu_1533_p2() {
    mul_ln1118_1109_fu_1533_p2 = (!ap_const_lv25_1FFFF0C.is_01() || !mul_ln1118_1109_fu_1533_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF0C) * sc_bigint<16>(mul_ln1118_1109_fu_1533_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1110_fu_1217_p1() {
    mul_ln1118_1110_fu_1217_p1 =  (sc_lv<16>) (sext_ln1118_1184_fu_989200_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1110_fu_1217_p2() {
    mul_ln1118_1110_fu_1217_p2 = (!ap_const_lv25_D4.is_01() || !mul_ln1118_1110_fu_1217_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_D4) * sc_bigint<16>(mul_ln1118_1110_fu_1217_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1111_fu_1550_p1() {
    mul_ln1118_1111_fu_1550_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1111_fu_1550_p2() {
    mul_ln1118_1111_fu_1550_p2 = (!ap_const_lv26_3FFF979.is_01() || !mul_ln1118_1111_fu_1550_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFF979) * sc_bigint<16>(mul_ln1118_1111_fu_1550_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1112_fu_1370_p1() {
    mul_ln1118_1112_fu_1370_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1112_fu_1370_p2() {
    mul_ln1118_1112_fu_1370_p2 = (!ap_const_lv26_3FFFEBA.is_01() || !mul_ln1118_1112_fu_1370_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEBA) * sc_bigint<16>(mul_ln1118_1112_fu_1370_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1113_fu_1220_p1() {
    mul_ln1118_1113_fu_1220_p1 =  (sc_lv<16>) (sext_ln1118_1181_fu_989154_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1113_fu_1220_p2() {
    mul_ln1118_1113_fu_1220_p2 = (!ap_const_lv24_5E.is_01() || !mul_ln1118_1113_fu_1220_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5E) * sc_bigint<16>(mul_ln1118_1113_fu_1220_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1114_fu_1206_p1() {
    mul_ln1118_1114_fu_1206_p1 =  (sc_lv<16>) (sext_ln1118_1181_fu_989154_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1114_fu_1206_p2() {
    mul_ln1118_1114_fu_1206_p2 = (!ap_const_lv24_4E.is_01() || !mul_ln1118_1114_fu_1206_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4E) * sc_bigint<16>(mul_ln1118_1114_fu_1206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1115_fu_1222_p1() {
    mul_ln1118_1115_fu_1222_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1115_fu_1222_p2() {
    mul_ln1118_1115_fu_1222_p2 = (!ap_const_lv26_3FFFA84.is_01() || !mul_ln1118_1115_fu_1222_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFA84) * sc_bigint<16>(mul_ln1118_1115_fu_1222_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1116_fu_1540_p1() {
    mul_ln1118_1116_fu_1540_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1116_fu_1540_p2() {
    mul_ln1118_1116_fu_1540_p2 = (!ap_const_lv26_3FFFD70.is_01() || !mul_ln1118_1116_fu_1540_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFD70) * sc_bigint<16>(mul_ln1118_1116_fu_1540_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1117_fu_1228_p1() {
    mul_ln1118_1117_fu_1228_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1117_fu_1228_p2() {
    mul_ln1118_1117_fu_1228_p2 = (!ap_const_lv26_3FFFB5A.is_01() || !mul_ln1118_1117_fu_1228_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFB5A) * sc_bigint<16>(mul_ln1118_1117_fu_1228_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1118_fu_1135_p1() {
    mul_ln1118_1118_fu_1135_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1118_fu_1135_p2() {
    mul_ln1118_1118_fu_1135_p2 = (!ap_const_lv26_2F6.is_01() || !mul_ln1118_1118_fu_1135_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_2F6) * sc_bigint<16>(mul_ln1118_1118_fu_1135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1119_fu_1154_p1() {
    mul_ln1118_1119_fu_1154_p1 =  (sc_lv<16>) (sext_ln1118_1183_fu_989193_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1119_fu_1154_p2() {
    mul_ln1118_1119_fu_1154_p2 = (!ap_const_lv23_2C.is_01() || !mul_ln1118_1119_fu_1154_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_2C) * sc_bigint<16>(mul_ln1118_1119_fu_1154_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1120_fu_1578_p1() {
    mul_ln1118_1120_fu_1578_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1120_fu_1578_p2() {
    mul_ln1118_1120_fu_1578_p2 = (!ap_const_lv26_179.is_01() || !mul_ln1118_1120_fu_1578_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_179) * sc_bigint<16>(mul_ln1118_1120_fu_1578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1121_fu_1136_p1() {
    mul_ln1118_1121_fu_1136_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1121_fu_1136_p2() {
    mul_ln1118_1121_fu_1136_p2 = (!ap_const_lv26_26B.is_01() || !mul_ln1118_1121_fu_1136_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_26B) * sc_bigint<16>(mul_ln1118_1121_fu_1136_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1122_fu_1497_p1() {
    mul_ln1118_1122_fu_1497_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1122_fu_1497_p2() {
    mul_ln1118_1122_fu_1497_p2 = (!ap_const_lv26_3FFFDFA.is_01() || !mul_ln1118_1122_fu_1497_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFDFA) * sc_bigint<16>(mul_ln1118_1122_fu_1497_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1123_fu_1453_p1() {
    mul_ln1118_1123_fu_1453_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1123_fu_1453_p2() {
    mul_ln1118_1123_fu_1453_p2 = (!ap_const_lv26_252.is_01() || !mul_ln1118_1123_fu_1453_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_252) * sc_bigint<16>(mul_ln1118_1123_fu_1453_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1124_fu_1416_p1() {
    mul_ln1118_1124_fu_1416_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1124_fu_1416_p2() {
    mul_ln1118_1124_fu_1416_p2 = (!ap_const_lv26_3FFFEF1.is_01() || !mul_ln1118_1124_fu_1416_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEF1) * sc_bigint<16>(mul_ln1118_1124_fu_1416_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1125_fu_1365_p1() {
    mul_ln1118_1125_fu_1365_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1125_fu_1365_p2() {
    mul_ln1118_1125_fu_1365_p2 = (!ap_const_lv26_3FFFED4.is_01() || !mul_ln1118_1125_fu_1365_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFED4) * sc_bigint<16>(mul_ln1118_1125_fu_1365_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1126_fu_1314_p1() {
    mul_ln1118_1126_fu_1314_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1126_fu_1314_p2() {
    mul_ln1118_1126_fu_1314_p2 = (!ap_const_lv26_3FFFE70.is_01() || !mul_ln1118_1126_fu_1314_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE70) * sc_bigint<16>(mul_ln1118_1126_fu_1314_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1127_fu_1291_p1() {
    mul_ln1118_1127_fu_1291_p1 =  (sc_lv<16>) (sext_ln1118_1181_fu_989154_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1127_fu_1291_p2() {
    mul_ln1118_1127_fu_1291_p2 = (!ap_const_lv24_FFFF92.is_01() || !mul_ln1118_1127_fu_1291_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF92) * sc_bigint<16>(mul_ln1118_1127_fu_1291_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1128_fu_1324_p1() {
    mul_ln1118_1128_fu_1324_p1 =  (sc_lv<16>) (sext_ln1118_1182_fu_989161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1128_fu_1324_p2() {
    mul_ln1118_1128_fu_1324_p2 = (!ap_const_lv26_2F8.is_01() || !mul_ln1118_1128_fu_1324_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_2F8) * sc_bigint<16>(mul_ln1118_1128_fu_1324_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1129_fu_1259_p1() {
    mul_ln1118_1129_fu_1259_p1 =  (sc_lv<16>) (sext_ln1118_1201_fu_990132_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1129_fu_1259_p2() {
    mul_ln1118_1129_fu_1259_p2 = (!ap_const_lv23_7FFFC5.is_01() || !mul_ln1118_1129_fu_1259_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFC5) * sc_bigint<16>(mul_ln1118_1129_fu_1259_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1130_fu_1320_p1() {
    mul_ln1118_1130_fu_1320_p1 =  (sc_lv<16>) (sext_ln1118_1203_fu_990145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1130_fu_1320_p2() {
    mul_ln1118_1130_fu_1320_p2 = (!ap_const_lv24_FFFF9E.is_01() || !mul_ln1118_1130_fu_1320_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF9E) * sc_bigint<16>(mul_ln1118_1130_fu_1320_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1131_fu_1343_p1() {
    mul_ln1118_1131_fu_1343_p1 =  (sc_lv<16>) (sext_ln1118_1204_fu_990155_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1131_fu_1343_p2() {
    mul_ln1118_1131_fu_1343_p2 = (!ap_const_lv25_99.is_01() || !mul_ln1118_1131_fu_1343_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_99) * sc_bigint<16>(mul_ln1118_1131_fu_1343_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1132_fu_1173_p1() {
    mul_ln1118_1132_fu_1173_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1132_fu_1173_p2() {
    mul_ln1118_1132_fu_1173_p2 = (!ap_const_lv26_3FFFEA8.is_01() || !mul_ln1118_1132_fu_1173_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEA8) * sc_bigint<16>(mul_ln1118_1132_fu_1173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1133_fu_1516_p1() {
    mul_ln1118_1133_fu_1516_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1133_fu_1516_p2() {
    mul_ln1118_1133_fu_1516_p2 = (!ap_const_lv26_3FFFEE7.is_01() || !mul_ln1118_1133_fu_1516_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEE7) * sc_bigint<16>(mul_ln1118_1133_fu_1516_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1134_fu_1517_p1() {
    mul_ln1118_1134_fu_1517_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1134_fu_1517_p2() {
    mul_ln1118_1134_fu_1517_p2 = (!ap_const_lv26_10C.is_01() || !mul_ln1118_1134_fu_1517_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_10C) * sc_bigint<16>(mul_ln1118_1134_fu_1517_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1135_fu_1461_p1() {
    mul_ln1118_1135_fu_1461_p1 =  (sc_lv<16>) (sext_ln1118_1204_fu_990155_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1135_fu_1461_p2() {
    mul_ln1118_1135_fu_1461_p2 = (!ap_const_lv25_DD.is_01() || !mul_ln1118_1135_fu_1461_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_DD) * sc_bigint<16>(mul_ln1118_1135_fu_1461_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1136_fu_1177_p1() {
    mul_ln1118_1136_fu_1177_p1 =  (sc_lv<16>) (sext_ln1118_1203_fu_990145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1136_fu_1177_p2() {
    mul_ln1118_1136_fu_1177_p2 = (!ap_const_lv24_4E.is_01() || !mul_ln1118_1136_fu_1177_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4E) * sc_bigint<16>(mul_ln1118_1136_fu_1177_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1137_fu_1397_p1() {
    mul_ln1118_1137_fu_1397_p1 =  (sc_lv<16>) (sext_ln1118_1204_fu_990155_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1137_fu_1397_p2() {
    mul_ln1118_1137_fu_1397_p2 = (!ap_const_lv25_1FFFF1A.is_01() || !mul_ln1118_1137_fu_1397_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF1A) * sc_bigint<16>(mul_ln1118_1137_fu_1397_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1138_fu_1564_p1() {
    mul_ln1118_1138_fu_1564_p1 =  (sc_lv<16>) (sext_ln1118_1203_fu_990145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1138_fu_1564_p2() {
    mul_ln1118_1138_fu_1564_p2 = (!ap_const_lv24_47.is_01() || !mul_ln1118_1138_fu_1564_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_47) * sc_bigint<16>(mul_ln1118_1138_fu_1564_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1139_fu_1233_p1() {
    mul_ln1118_1139_fu_1233_p1 =  (sc_lv<16>) (sext_ln1118_1204_fu_990155_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1139_fu_1233_p2() {
    mul_ln1118_1139_fu_1233_p2 = (!ap_const_lv25_C2.is_01() || !mul_ln1118_1139_fu_1233_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_C2) * sc_bigint<16>(mul_ln1118_1139_fu_1233_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1140_fu_1341_p1() {
    mul_ln1118_1140_fu_1341_p1 =  (sc_lv<16>) (sext_ln1118_1206_fu_990172_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1140_fu_1341_p2() {
    mul_ln1118_1140_fu_1341_p2 = (!ap_const_lv22_3FFFE5.is_01() || !mul_ln1118_1140_fu_1341_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFE5) * sc_bigint<16>(mul_ln1118_1140_fu_1341_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1141_fu_1386_p1() {
    mul_ln1118_1141_fu_1386_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1141_fu_1386_p2() {
    mul_ln1118_1141_fu_1386_p2 = (!ap_const_lv26_3FFFE27.is_01() || !mul_ln1118_1141_fu_1386_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE27) * sc_bigint<16>(mul_ln1118_1141_fu_1386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1142_fu_1402_p1() {
    mul_ln1118_1142_fu_1402_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1142_fu_1402_p2() {
    mul_ln1118_1142_fu_1402_p2 = (!ap_const_lv26_3FFFED5.is_01() || !mul_ln1118_1142_fu_1402_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFED5) * sc_bigint<16>(mul_ln1118_1142_fu_1402_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1143_fu_1569_p1() {
    mul_ln1118_1143_fu_1569_p1 =  (sc_lv<16>) (sext_ln1118_1204_fu_990155_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1143_fu_1569_p2() {
    mul_ln1118_1143_fu_1569_p2 = (!ap_const_lv25_1FFFF25.is_01() || !mul_ln1118_1143_fu_1569_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF25) * sc_bigint<16>(mul_ln1118_1143_fu_1569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1144_fu_1238_p1() {
    mul_ln1118_1144_fu_1238_p1 =  (sc_lv<16>) (sext_ln1118_1203_fu_990145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1144_fu_1238_p2() {
    mul_ln1118_1144_fu_1238_p2 = (!ap_const_lv24_4B.is_01() || !mul_ln1118_1144_fu_1238_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4B) * sc_bigint<16>(mul_ln1118_1144_fu_1238_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1145_fu_1467_p1() {
    mul_ln1118_1145_fu_1467_p1 =  (sc_lv<16>) (sext_ln1118_1201_fu_990132_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1145_fu_1467_p2() {
    mul_ln1118_1145_fu_1467_p2 = (!ap_const_lv23_7FFFCD.is_01() || !mul_ln1118_1145_fu_1467_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCD) * sc_bigint<16>(mul_ln1118_1145_fu_1467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1146_fu_1430_p1() {
    mul_ln1118_1146_fu_1430_p1 =  (sc_lv<16>) (sext_ln1118_1201_fu_990132_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1146_fu_1430_p2() {
    mul_ln1118_1146_fu_1430_p2 = (!ap_const_lv23_7FFFD4.is_01() || !mul_ln1118_1146_fu_1430_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD4) * sc_bigint<16>(mul_ln1118_1146_fu_1430_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1147_fu_1407_p1() {
    mul_ln1118_1147_fu_1407_p1 =  (sc_lv<16>) (sext_ln1118_1204_fu_990155_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1147_fu_1407_p2() {
    mul_ln1118_1147_fu_1407_p2 = (!ap_const_lv25_1FFFF30.is_01() || !mul_ln1118_1147_fu_1407_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF30) * sc_bigint<16>(mul_ln1118_1147_fu_1407_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1148_fu_1356_p1() {
    mul_ln1118_1148_fu_1356_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1148_fu_1356_p2() {
    mul_ln1118_1148_fu_1356_p2 = (!ap_const_lv26_3FFFC60.is_01() || !mul_ln1118_1148_fu_1356_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFC60) * sc_bigint<16>(mul_ln1118_1148_fu_1356_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1149_fu_1319_p1() {
    mul_ln1118_1149_fu_1319_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1149_fu_1319_p2() {
    mul_ln1118_1149_fu_1319_p2 = (!ap_const_lv26_114.is_01() || !mul_ln1118_1149_fu_1319_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_114) * sc_bigint<16>(mul_ln1118_1149_fu_1319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1150_fu_1440_p1() {
    mul_ln1118_1150_fu_1440_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1150_fu_1440_p2() {
    mul_ln1118_1150_fu_1440_p2 = (!ap_const_lv26_3FFFED6.is_01() || !mul_ln1118_1150_fu_1440_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFED6) * sc_bigint<16>(mul_ln1118_1150_fu_1440_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1151_fu_1441_p1() {
    mul_ln1118_1151_fu_1441_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1151_fu_1441_p2() {
    mul_ln1118_1151_fu_1441_p2 = (!ap_const_lv26_130.is_01() || !mul_ln1118_1151_fu_1441_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_130) * sc_bigint<16>(mul_ln1118_1151_fu_1441_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1152_fu_1250_p1() {
    mul_ln1118_1152_fu_1250_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1152_fu_1250_p2() {
    mul_ln1118_1152_fu_1250_p2 = (!ap_const_lv26_3FFFE2F.is_01() || !mul_ln1118_1152_fu_1250_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE2F) * sc_bigint<16>(mul_ln1118_1152_fu_1250_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1153_fu_1297_p1() {
    mul_ln1118_1153_fu_1297_p1 =  (sc_lv<16>) (sext_ln1118_1204_fu_990155_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1153_fu_1297_p2() {
    mul_ln1118_1153_fu_1297_p2 = (!ap_const_lv25_1FFFF22.is_01() || !mul_ln1118_1153_fu_1297_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF22) * sc_bigint<16>(mul_ln1118_1153_fu_1297_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1154_fu_1623_p1() {
    mul_ln1118_1154_fu_1623_p1 =  (sc_lv<16>) (sext_ln1118_1201_fu_990132_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1154_fu_1623_p2() {
    mul_ln1118_1154_fu_1623_p2 = (!ap_const_lv23_37.is_01() || !mul_ln1118_1154_fu_1623_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_37) * sc_bigint<16>(mul_ln1118_1154_fu_1623_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1155_fu_1572_p1() {
    mul_ln1118_1155_fu_1572_p1 =  (sc_lv<16>) (sext_ln1118_1203_fu_990145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1155_fu_1572_p2() {
    mul_ln1118_1155_fu_1572_p2 = (!ap_const_lv24_FFFF85.is_01() || !mul_ln1118_1155_fu_1572_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF85) * sc_bigint<16>(mul_ln1118_1155_fu_1572_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1156_fu_1549_p1() {
    mul_ln1118_1156_fu_1549_p1 =  (sc_lv<16>) (sext_ln1118_1206_fu_990172_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1156_fu_1549_p2() {
    mul_ln1118_1156_fu_1549_p2 = (!ap_const_lv22_13.is_01() || !mul_ln1118_1156_fu_1549_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_13) * sc_bigint<16>(mul_ln1118_1156_fu_1549_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1157_fu_1512_p1() {
    mul_ln1118_1157_fu_1512_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1157_fu_1512_p2() {
    mul_ln1118_1157_fu_1512_p2 = (!ap_const_lv26_137.is_01() || !mul_ln1118_1157_fu_1512_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_137) * sc_bigint<16>(mul_ln1118_1157_fu_1512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1158_fu_1632_p1() {
    mul_ln1118_1158_fu_1632_p1 =  (sc_lv<16>) (sext_ln1118_1203_fu_990145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1158_fu_1632_p2() {
    mul_ln1118_1158_fu_1632_p2 = (!ap_const_lv24_6A.is_01() || !mul_ln1118_1158_fu_1632_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_6A) * sc_bigint<16>(mul_ln1118_1158_fu_1632_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1159_fu_1576_p1() {
    mul_ln1118_1159_fu_1576_p1 = tmp_14_fu_990106_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1159_fu_1576_p2() {
    mul_ln1118_1159_fu_1576_p2 = (!ap_const_lv21_B.is_01() || !mul_ln1118_1159_fu_1576_p1.read().is_01())? sc_lv<21>(): sc_biguint<21>(ap_const_lv21_B) * sc_bigint<16>(mul_ln1118_1159_fu_1576_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1160_fu_1577_p1() {
    mul_ln1118_1160_fu_1577_p1 =  (sc_lv<16>) (sext_ln1118_1206_fu_990172_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1160_fu_1577_p2() {
    mul_ln1118_1160_fu_1577_p2 = (!ap_const_lv22_3FFFEA.is_01() || !mul_ln1118_1160_fu_1577_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFEA) * sc_bigint<16>(mul_ln1118_1160_fu_1577_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1161_fu_1350_p1() {
    mul_ln1118_1161_fu_1350_p1 =  (sc_lv<16>) (sext_ln1118_1200_fu_990116_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1161_fu_1350_p2() {
    mul_ln1118_1161_fu_1350_p2 = (!ap_const_lv26_3FFFDF9.is_01() || !mul_ln1118_1161_fu_1350_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFDF9) * sc_bigint<16>(mul_ln1118_1161_fu_1350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1162_fu_1180_p1() {
    mul_ln1118_1162_fu_1180_p1 =  (sc_lv<16>) (sext_ln1118_1204_fu_990155_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1162_fu_1180_p2() {
    mul_ln1118_1162_fu_1180_p2 = (!ap_const_lv25_98.is_01() || !mul_ln1118_1162_fu_1180_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_98) * sc_bigint<16>(mul_ln1118_1162_fu_1180_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1163_fu_1295_p1() {
    mul_ln1118_1163_fu_1295_p1 =  (sc_lv<16>) (sext_ln1118_1204_fu_990155_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_1163_fu_1295_p2() {
    mul_ln1118_1163_fu_1295_p2 = (!ap_const_lv25_1FFFF3A.is_01() || !mul_ln1118_1163_fu_1295_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF3A) * sc_bigint<16>(mul_ln1118_1163_fu_1295_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_691_fu_1457_p1() {
    mul_ln1118_691_fu_1457_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_975751_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_691_fu_1457_p2() {
    mul_ln1118_691_fu_1457_p2 = (!ap_const_lv25_E2.is_01() || !mul_ln1118_691_fu_1457_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_E2) * sc_bigint<16>(mul_ln1118_691_fu_1457_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_692_fu_1487_p1() {
    mul_ln1118_692_fu_1487_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_975751_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_692_fu_1487_p2() {
    mul_ln1118_692_fu_1487_p2 = (!ap_const_lv25_1FFFF54.is_01() || !mul_ln1118_692_fu_1487_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF54) * sc_bigint<16>(mul_ln1118_692_fu_1487_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_693_fu_1345_p1() {
    mul_ln1118_693_fu_1345_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_975765_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_693_fu_1345_p2() {
    mul_ln1118_693_fu_1345_p2 = (!ap_const_lv24_FFFFA6.is_01() || !mul_ln1118_693_fu_1345_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA6) * sc_bigint<16>(mul_ln1118_693_fu_1345_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_694_fu_1313_p1() {
    mul_ln1118_694_fu_1313_p1 =  (sc_lv<16>) (sext_ln1118_897_fu_975777_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_694_fu_1313_p2() {
    mul_ln1118_694_fu_1313_p2 = (!ap_const_lv23_2A.is_01() || !mul_ln1118_694_fu_1313_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_2A) * sc_bigint<16>(mul_ln1118_694_fu_1313_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_695_fu_1329_p1() {
    mul_ln1118_695_fu_1329_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_975751_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_695_fu_1329_p2() {
    mul_ln1118_695_fu_1329_p2 = (!ap_const_lv25_1FFFF2C.is_01() || !mul_ln1118_695_fu_1329_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF2C) * sc_bigint<16>(mul_ln1118_695_fu_1329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_696_fu_1164_p1() {
    mul_ln1118_696_fu_1164_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_975751_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_696_fu_1164_p2() {
    mul_ln1118_696_fu_1164_p2 = (!ap_const_lv25_CE.is_01() || !mul_ln1118_696_fu_1164_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_CE) * sc_bigint<16>(mul_ln1118_696_fu_1164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_697_fu_1346_p1() {
    mul_ln1118_697_fu_1346_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_975765_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_697_fu_1346_p2() {
    mul_ln1118_697_fu_1346_p2 = (!ap_const_lv24_FFFFA7.is_01() || !mul_ln1118_697_fu_1346_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA7) * sc_bigint<16>(mul_ln1118_697_fu_1346_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_698_fu_1166_p1() {
    mul_ln1118_698_fu_1166_p1 =  (sc_lv<16>) (sext_ln1118_894_fu_975745_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_698_fu_1166_p2() {
    mul_ln1118_698_fu_1166_p2 = (!ap_const_lv22_16.is_01() || !mul_ln1118_698_fu_1166_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_16) * sc_bigint<16>(mul_ln1118_698_fu_1166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_699_fu_1514_p1() {
    mul_ln1118_699_fu_1514_p1 =  (sc_lv<16>) (sext_ln1118_fu_975721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_699_fu_1514_p2() {
    mul_ln1118_699_fu_1514_p2 = (!ap_const_lv26_241.is_01() || !mul_ln1118_699_fu_1514_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_241) * sc_bigint<16>(mul_ln1118_699_fu_1514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_700_fu_1515_p1() {
    mul_ln1118_700_fu_1515_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_975751_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_700_fu_1515_p2() {
    mul_ln1118_700_fu_1515_p2 = (!ap_const_lv25_1FFFF3D.is_01() || !mul_ln1118_700_fu_1515_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF3D) * sc_bigint<16>(mul_ln1118_700_fu_1515_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_701_fu_1483_p1() {
    mul_ln1118_701_fu_1483_p1 =  (sc_lv<16>) (sext_ln1118_897_fu_975777_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_701_fu_1483_p2() {
    mul_ln1118_701_fu_1483_p2 = (!ap_const_lv23_23.is_01() || !mul_ln1118_701_fu_1483_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_23) * sc_bigint<16>(mul_ln1118_701_fu_1483_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_702_fu_1536_p1() {
    mul_ln1118_702_fu_1536_p1 =  (sc_lv<16>) (sext_ln1118_fu_975721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_702_fu_1536_p2() {
    mul_ln1118_702_fu_1536_p2 = (!ap_const_lv26_3FFFDE4.is_01() || !mul_ln1118_702_fu_1536_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFDE4) * sc_bigint<16>(mul_ln1118_702_fu_1536_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_703_fu_1485_p1() {
    mul_ln1118_703_fu_1485_p1 =  (sc_lv<16>) (sext_ln1118_897_fu_975777_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_703_fu_1485_p2() {
    mul_ln1118_703_fu_1485_p2 = (!ap_const_lv23_26.is_01() || !mul_ln1118_703_fu_1485_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_26) * sc_bigint<16>(mul_ln1118_703_fu_1485_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_704_fu_1462_p1() {
    mul_ln1118_704_fu_1462_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_975765_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_704_fu_1462_p2() {
    mul_ln1118_704_fu_1462_p2 = (!ap_const_lv24_52.is_01() || !mul_ln1118_704_fu_1462_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_52) * sc_bigint<16>(mul_ln1118_704_fu_1462_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_705_fu_1425_p1() {
    mul_ln1118_705_fu_1425_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_975765_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_705_fu_1425_p2() {
    mul_ln1118_705_fu_1425_p2 = (!ap_const_lv24_56.is_01() || !mul_ln1118_705_fu_1425_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_56) * sc_bigint<16>(mul_ln1118_705_fu_1425_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_706_fu_1444_p1() {
    mul_ln1118_706_fu_1444_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_975765_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_706_fu_1444_p2() {
    mul_ln1118_706_fu_1444_p2 = (!ap_const_lv24_64.is_01() || !mul_ln1118_706_fu_1444_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_64) * sc_bigint<16>(mul_ln1118_706_fu_1444_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_707_fu_1337_p1() {
    mul_ln1118_707_fu_1337_p1 =  (sc_lv<16>) (sext_ln1118_fu_975721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_707_fu_1337_p2() {
    mul_ln1118_707_fu_1337_p2 = (!ap_const_lv26_1D0.is_01() || !mul_ln1118_707_fu_1337_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_1D0) * sc_bigint<16>(mul_ln1118_707_fu_1337_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_708_fu_1412_p1() {
    mul_ln1118_708_fu_1412_p1 =  (sc_lv<16>) (sext_ln1118_891_fu_975732_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_708_fu_1412_p2() {
    mul_ln1118_708_fu_1412_p2 = (!ap_const_lv21_D.is_01() || !mul_ln1118_708_fu_1412_p1.read().is_01())? sc_lv<21>(): sc_biguint<21>(ap_const_lv21_D) * sc_bigint<16>(mul_ln1118_708_fu_1412_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_709_fu_1305_p1() {
    mul_ln1118_709_fu_1305_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_975751_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_709_fu_1305_p2() {
    mul_ln1118_709_fu_1305_p2 = (!ap_const_lv25_D0.is_01() || !mul_ln1118_709_fu_1305_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_D0) * sc_bigint<16>(mul_ln1118_709_fu_1305_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_710_fu_1254_p1() {
    mul_ln1118_710_fu_1254_p1 =  (sc_lv<16>) (sext_ln1118_fu_975721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_710_fu_1254_p2() {
    mul_ln1118_710_fu_1254_p2 = (!ap_const_lv26_3FFFEE3.is_01() || !mul_ln1118_710_fu_1254_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEE3) * sc_bigint<16>(mul_ln1118_710_fu_1254_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_711_fu_1203_p1() {
    mul_ln1118_711_fu_1203_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_975765_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_711_fu_1203_p2() {
    mul_ln1118_711_fu_1203_p2 = (!ap_const_lv24_4F.is_01() || !mul_ln1118_711_fu_1203_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4F) * sc_bigint<16>(mul_ln1118_711_fu_1203_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_712_fu_1152_p1() {
    mul_ln1118_712_fu_1152_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_975751_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_712_fu_1152_p2() {
    mul_ln1118_712_fu_1152_p2 = (!ap_const_lv25_AE.is_01() || !mul_ln1118_712_fu_1152_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_AE) * sc_bigint<16>(mul_ln1118_712_fu_1152_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_713_fu_1618_p1() {
    mul_ln1118_713_fu_1618_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_975765_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_713_fu_1618_p2() {
    mul_ln1118_713_fu_1618_p2 = (!ap_const_lv24_FFFFB2.is_01() || !mul_ln1118_713_fu_1618_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB2) * sc_bigint<16>(mul_ln1118_713_fu_1618_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_714_fu_1637_p1() {
    mul_ln1118_714_fu_1637_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_975765_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_714_fu_1637_p2() {
    mul_ln1118_714_fu_1637_p2 = (!ap_const_lv24_FFFF9F.is_01() || !mul_ln1118_714_fu_1637_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF9F) * sc_bigint<16>(mul_ln1118_714_fu_1637_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_715_fu_1629_p1() {
    mul_ln1118_715_fu_1629_p1 =  (sc_lv<16>) (sext_ln1118_fu_975721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_715_fu_1629_p2() {
    mul_ln1118_715_fu_1629_p2 = (!ap_const_lv26_3FFFEFD.is_01() || !mul_ln1118_715_fu_1629_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEFD) * sc_bigint<16>(mul_ln1118_715_fu_1629_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_716_fu_1445_p1() {
    mul_ln1118_716_fu_1445_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_975751_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_716_fu_1445_p2() {
    mul_ln1118_716_fu_1445_p2 = (!ap_const_lv25_1FFFF79.is_01() || !mul_ln1118_716_fu_1445_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF79) * sc_bigint<16>(mul_ln1118_716_fu_1445_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_717_fu_1460_p1() {
    mul_ln1118_717_fu_1460_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_975751_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_717_fu_1460_p2() {
    mul_ln1118_717_fu_1460_p2 = (!ap_const_lv25_1FFFF6F.is_01() || !mul_ln1118_717_fu_1460_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF6F) * sc_bigint<16>(mul_ln1118_717_fu_1460_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_718_fu_1290_p1() {
    mul_ln1118_718_fu_1290_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_975751_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_718_fu_1290_p2() {
    mul_ln1118_718_fu_1290_p2 = (!ap_const_lv25_1FFFF66.is_01() || !mul_ln1118_718_fu_1290_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF66) * sc_bigint<16>(mul_ln1118_718_fu_1290_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_719_fu_1277_p1() {
    mul_ln1118_719_fu_1277_p1 =  (sc_lv<16>) (sext_ln1118_fu_975721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_719_fu_1277_p2() {
    mul_ln1118_719_fu_1277_p2 = (!ap_const_lv26_198.is_01() || !mul_ln1118_719_fu_1277_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_198) * sc_bigint<16>(mul_ln1118_719_fu_1277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_720_fu_1349_p1() {
    mul_ln1118_720_fu_1349_p1 =  (sc_lv<16>) (sext_ln1118_fu_975721_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_720_fu_1349_p2() {
    mul_ln1118_720_fu_1349_p2 = (!ap_const_lv26_3FFFD7E.is_01() || !mul_ln1118_720_fu_1349_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFD7E) * sc_bigint<16>(mul_ln1118_720_fu_1349_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_721_fu_1142_p1() {
    mul_ln1118_721_fu_1142_p1 =  (sc_lv<16>) (sext_ln708_499_fu_976752_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_721_fu_1142_p2() {
    mul_ln1118_721_fu_1142_p2 = (!ap_const_lv26_3B9.is_01() || !mul_ln1118_721_fu_1142_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_3B9) * sc_bigint<16>(mul_ln1118_721_fu_1142_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_722_fu_1328_p1() {
    mul_ln1118_722_fu_1328_p1 =  (sc_lv<16>) (sext_ln708_505_fu_976790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_722_fu_1328_p2() {
    mul_ln1118_722_fu_1328_p2 = (!ap_const_lv24_76.is_01() || !mul_ln1118_722_fu_1328_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_76) * sc_bigint<16>(mul_ln1118_722_fu_1328_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_723_fu_1344_p1() {
    mul_ln1118_723_fu_1344_p1 =  (sc_lv<16>) (sext_ln708_fu_976742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_723_fu_1344_p2() {
    mul_ln1118_723_fu_1344_p2 = (!ap_const_lv25_1FFFF42.is_01() || !mul_ln1118_723_fu_1344_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF42) * sc_bigint<16>(mul_ln1118_723_fu_1344_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_724_fu_1179_p1() {
    mul_ln1118_724_fu_1179_p1 =  (sc_lv<16>) (sext_ln708_fu_976742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_724_fu_1179_p2() {
    mul_ln1118_724_fu_1179_p2 = (!ap_const_lv25_97.is_01() || !mul_ln1118_724_fu_1179_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_97) * sc_bigint<16>(mul_ln1118_724_fu_1179_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_725_fu_1527_p1() {
    mul_ln1118_725_fu_1527_p1 =  (sc_lv<16>) (sext_ln708_fu_976742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_725_fu_1527_p2() {
    mul_ln1118_725_fu_1527_p2 = (!ap_const_lv25_CD.is_01() || !mul_ln1118_725_fu_1527_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_CD) * sc_bigint<16>(mul_ln1118_725_fu_1527_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_726_fu_1513_p1() {
    mul_ln1118_726_fu_1513_p1 =  (sc_lv<16>) (sext_ln708_fu_976742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_726_fu_1513_p2() {
    mul_ln1118_726_fu_1513_p2 = (!ap_const_lv25_9B.is_01() || !mul_ln1118_726_fu_1513_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_9B) * sc_bigint<16>(mul_ln1118_726_fu_1513_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_727_fu_1182_p1() {
    mul_ln1118_727_fu_1182_p1 =  (sc_lv<16>) (sext_ln708_499_fu_976752_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_727_fu_1182_p2() {
    mul_ln1118_727_fu_1182_p2 = (!ap_const_lv26_3FFFE3B.is_01() || !mul_ln1118_727_fu_1182_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE3B) * sc_bigint<16>(mul_ln1118_727_fu_1182_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_728_fu_1183_p1() {
    mul_ln1118_728_fu_1183_p1 =  (sc_lv<16>) (sext_ln708_500_fu_976764_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_728_fu_1183_p2() {
    mul_ln1118_728_fu_1183_p2 = (!ap_const_lv23_33.is_01() || !mul_ln1118_728_fu_1183_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_33) * sc_bigint<16>(mul_ln1118_728_fu_1183_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_729_fu_1184_p1() {
    mul_ln1118_729_fu_1184_p1 =  (sc_lv<16>) (sext_ln708_503_fu_976781_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_729_fu_1184_p2() {
    mul_ln1118_729_fu_1184_p2 = (!ap_const_lv21_D.is_01() || !mul_ln1118_729_fu_1184_p1.read().is_01())? sc_lv<21>(): sc_biguint<21>(ap_const_lv21_D) * sc_bigint<16>(mul_ln1118_729_fu_1184_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_730_fu_1342_p1() {
    mul_ln1118_730_fu_1342_p1 =  (sc_lv<16>) (sext_ln708_505_fu_976790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_730_fu_1342_p2() {
    mul_ln1118_730_fu_1342_p2 = (!ap_const_lv24_4D.is_01() || !mul_ln1118_730_fu_1342_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4D) * sc_bigint<16>(mul_ln1118_730_fu_1342_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_731_fu_1333_p1() {
    mul_ln1118_731_fu_1333_p1 =  (sc_lv<16>) (sext_ln708_499_fu_976752_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_731_fu_1333_p2() {
    mul_ln1118_731_fu_1333_p2 = (!ap_const_lv26_3FFFE69.is_01() || !mul_ln1118_731_fu_1333_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE69) * sc_bigint<16>(mul_ln1118_731_fu_1333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_732_fu_1296_p1() {
    mul_ln1118_732_fu_1296_p1 =  (sc_lv<16>) (sext_ln708_fu_976742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_732_fu_1296_p2() {
    mul_ln1118_732_fu_1296_p2 = (!ap_const_lv25_1FFFF7A.is_01() || !mul_ln1118_732_fu_1296_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF7A) * sc_bigint<16>(mul_ln1118_732_fu_1296_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_733_fu_1231_p1() {
    mul_ln1118_733_fu_1231_p1 = tmp_5_fu_976732_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_733_fu_1231_p2() {
    mul_ln1118_733_fu_1231_p2 = (!ap_const_lv22_16.is_01() || !mul_ln1118_733_fu_1231_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_16) * sc_bigint<16>(mul_ln1118_733_fu_1231_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_734_fu_1194_p1() {
    mul_ln1118_734_fu_1194_p1 =  (sc_lv<16>) (sext_ln708_500_fu_976764_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_734_fu_1194_p2() {
    mul_ln1118_734_fu_1194_p2 = (!ap_const_lv23_36.is_01() || !mul_ln1118_734_fu_1194_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_36) * sc_bigint<16>(mul_ln1118_734_fu_1194_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_735_fu_1283_p1() {
    mul_ln1118_735_fu_1283_p1 =  (sc_lv<16>) (sext_ln708_505_fu_976790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_735_fu_1283_p2() {
    mul_ln1118_735_fu_1283_p2 = (!ap_const_lv24_72.is_01() || !mul_ln1118_735_fu_1283_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_72) * sc_bigint<16>(mul_ln1118_735_fu_1283_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_736_fu_1134_p1() {
    mul_ln1118_736_fu_1134_p1 =  (sc_lv<16>) (sext_ln708_499_fu_976752_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_736_fu_1134_p2() {
    mul_ln1118_736_fu_1134_p2 = (!ap_const_lv26_1C9.is_01() || !mul_ln1118_736_fu_1134_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_1C9) * sc_bigint<16>(mul_ln1118_736_fu_1134_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_737_fu_1558_p1() {
    mul_ln1118_737_fu_1558_p1 =  (sc_lv<16>) (sext_ln708_499_fu_976752_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_737_fu_1558_p2() {
    mul_ln1118_737_fu_1558_p2 = (!ap_const_lv26_1AA.is_01() || !mul_ln1118_737_fu_1558_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_1AA) * sc_bigint<16>(mul_ln1118_737_fu_1558_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_738_fu_1521_p1() {
    mul_ln1118_738_fu_1521_p1 =  (sc_lv<16>) (sext_ln708_499_fu_976752_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_738_fu_1521_p2() {
    mul_ln1118_738_fu_1521_p2 = (!ap_const_lv26_155.is_01() || !mul_ln1118_738_fu_1521_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_155) * sc_bigint<16>(mul_ln1118_738_fu_1521_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_739_fu_1470_p1() {
    mul_ln1118_739_fu_1470_p1 =  (sc_lv<16>) (sext_ln708_500_fu_976764_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_739_fu_1470_p2() {
    mul_ln1118_739_fu_1470_p2 = (!ap_const_lv23_7FFFDA.is_01() || !mul_ln1118_739_fu_1470_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFDA) * sc_bigint<16>(mul_ln1118_739_fu_1470_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_740_fu_1447_p1() {
    mul_ln1118_740_fu_1447_p1 =  (sc_lv<16>) (sext_ln708_499_fu_976752_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_740_fu_1447_p2() {
    mul_ln1118_740_fu_1447_p2 = (!ap_const_lv26_2A5.is_01() || !mul_ln1118_740_fu_1447_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_2A5) * sc_bigint<16>(mul_ln1118_740_fu_1447_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_741_fu_1466_p1() {
    mul_ln1118_741_fu_1466_p1 =  (sc_lv<16>) (sext_ln708_500_fu_976764_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_741_fu_1466_p2() {
    mul_ln1118_741_fu_1466_p2 = (!ap_const_lv23_2B.is_01() || !mul_ln1118_741_fu_1466_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_2B) * sc_bigint<16>(mul_ln1118_741_fu_1466_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_742_fu_1387_p1() {
    mul_ln1118_742_fu_1387_p1 =  (sc_lv<16>) (sext_ln708_499_fu_976752_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_742_fu_1387_p2() {
    mul_ln1118_742_fu_1387_p2 = (!ap_const_lv26_154.is_01() || !mul_ln1118_742_fu_1387_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_154) * sc_bigint<16>(mul_ln1118_742_fu_1387_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_743_fu_1406_p1() {
    mul_ln1118_743_fu_1406_p1 =  (sc_lv<16>) (sext_ln708_fu_976742_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_743_fu_1406_p2() {
    mul_ln1118_743_fu_1406_p2 = (!ap_const_lv25_1FFFF4B.is_01() || !mul_ln1118_743_fu_1406_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF4B) * sc_bigint<16>(mul_ln1118_743_fu_1406_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_744_fu_1236_p1() {
    mul_ln1118_744_fu_1236_p1 =  (sc_lv<16>) (sext_ln708_505_fu_976790_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_744_fu_1236_p2() {
    mul_ln1118_744_fu_1236_p2 = (!ap_const_lv24_FFFFAF.is_01() || !mul_ln1118_744_fu_1236_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFAF) * sc_bigint<16>(mul_ln1118_744_fu_1236_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_745_fu_1351_p1() {
    mul_ln1118_745_fu_1351_p1 =  (sc_lv<16>) (sext_ln1118_931_fu_977789_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_745_fu_1351_p2() {
    mul_ln1118_745_fu_1351_p2 = (!ap_const_lv24_4F.is_01() || !mul_ln1118_745_fu_1351_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4F) * sc_bigint<16>(mul_ln1118_745_fu_1351_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_746_fu_1523_p1() {
    mul_ln1118_746_fu_1523_p1 =  (sc_lv<16>) (sext_ln1118_929_fu_977773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_746_fu_1523_p2() {
    mul_ln1118_746_fu_1523_p2 = (!ap_const_lv25_1FFFF1D.is_01() || !mul_ln1118_746_fu_1523_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF1D) * sc_bigint<16>(mul_ln1118_746_fu_1523_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_747_fu_1638_p1() {
    mul_ln1118_747_fu_1638_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_747_fu_1638_p2() {
    mul_ln1118_747_fu_1638_p2 = (!ap_const_lv26_3FFFE4C.is_01() || !mul_ln1118_747_fu_1638_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE4C) * sc_bigint<16>(mul_ln1118_747_fu_1638_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_748_fu_1354_p1() {
    mul_ln1118_748_fu_1354_p1 =  (sc_lv<16>) (sext_ln1118_931_fu_977789_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_748_fu_1354_p2() {
    mul_ln1118_748_fu_1354_p2 = (!ap_const_lv24_43.is_01() || !mul_ln1118_748_fu_1354_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_43) * sc_bigint<16>(mul_ln1118_748_fu_1354_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_749_fu_1538_p1() {
    mul_ln1118_749_fu_1538_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_749_fu_1538_p2() {
    mul_ln1118_749_fu_1538_p2 = (!ap_const_lv26_3FFFDAA.is_01() || !mul_ln1118_749_fu_1538_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFDAA) * sc_bigint<16>(mul_ln1118_749_fu_1538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_750_fu_1358_p1() {
    mul_ln1118_750_fu_1358_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_750_fu_1358_p2() {
    mul_ln1118_750_fu_1358_p2 = (!ap_const_lv26_3FFFE0C.is_01() || !mul_ln1118_750_fu_1358_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE0C) * sc_bigint<16>(mul_ln1118_750_fu_1358_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_751_fu_1605_p1() {
    mul_ln1118_751_fu_1605_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_751_fu_1605_p2() {
    mul_ln1118_751_fu_1605_p2 = (!ap_const_lv26_2A0.is_01() || !mul_ln1118_751_fu_1605_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_2A0) * sc_bigint<16>(mul_ln1118_751_fu_1605_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_752_fu_1541_p1() {
    mul_ln1118_752_fu_1541_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_752_fu_1541_p2() {
    mul_ln1118_752_fu_1541_p2 = (!ap_const_lv26_3FFFDE7.is_01() || !mul_ln1118_752_fu_1541_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFDE7) * sc_bigint<16>(mul_ln1118_752_fu_1541_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_753_fu_1165_p1() {
    mul_ln1118_753_fu_1165_p1 =  (sc_lv<16>) (sext_ln1118_929_fu_977773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_753_fu_1165_p2() {
    mul_ln1118_753_fu_1165_p2 = (!ap_const_lv25_1FFFF16.is_01() || !mul_ln1118_753_fu_1165_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF16) * sc_bigint<16>(mul_ln1118_753_fu_1165_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_754_fu_1377_p1() {
    mul_ln1118_754_fu_1377_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_754_fu_1377_p2() {
    mul_ln1118_754_fu_1377_p2 = (!ap_const_lv26_3FFFD7A.is_01() || !mul_ln1118_754_fu_1377_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFD7A) * sc_bigint<16>(mul_ln1118_754_fu_1377_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_755_fu_1484_p1() {
    mul_ln1118_755_fu_1484_p1 =  (sc_lv<16>) (sext_ln1118_929_fu_977773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_755_fu_1484_p2() {
    mul_ln1118_755_fu_1484_p2 = (!ap_const_lv25_AD.is_01() || !mul_ln1118_755_fu_1484_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_AD) * sc_bigint<16>(mul_ln1118_755_fu_1484_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_756_fu_1530_p1() {
    mul_ln1118_756_fu_1530_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_756_fu_1530_p2() {
    mul_ln1118_756_fu_1530_p2 = (!ap_const_lv26_3FFFED1.is_01() || !mul_ln1118_756_fu_1530_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFED1) * sc_bigint<16>(mul_ln1118_756_fu_1530_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_757_fu_1169_p1() {
    mul_ln1118_757_fu_1169_p1 =  (sc_lv<16>) (sext_ln1118_931_fu_977789_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_757_fu_1169_p2() {
    mul_ln1118_757_fu_1169_p2 = (!ap_const_lv24_FFFF86.is_01() || !mul_ln1118_757_fu_1169_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF86) * sc_bigint<16>(mul_ln1118_757_fu_1169_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_758_fu_1609_p1() {
    mul_ln1118_758_fu_1609_p1 =  (sc_lv<16>) (sext_ln1118_929_fu_977773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_758_fu_1609_p2() {
    mul_ln1118_758_fu_1609_p2 = (!ap_const_lv25_8D.is_01() || !mul_ln1118_758_fu_1609_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_8D) * sc_bigint<16>(mul_ln1118_758_fu_1609_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_759_fu_1600_p1() {
    mul_ln1118_759_fu_1600_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_759_fu_1600_p2() {
    mul_ln1118_759_fu_1600_p2 = (!ap_const_lv26_3FFFE95.is_01() || !mul_ln1118_759_fu_1600_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE95) * sc_bigint<16>(mul_ln1118_759_fu_1600_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_760_fu_1563_p1() {
    mul_ln1118_760_fu_1563_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_760_fu_1563_p2() {
    mul_ln1118_760_fu_1563_p2 = (!ap_const_lv26_158.is_01() || !mul_ln1118_760_fu_1563_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_158) * sc_bigint<16>(mul_ln1118_760_fu_1563_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_761_fu_1498_p1() {
    mul_ln1118_761_fu_1498_p1 = tmp_6_fu_977728_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_761_fu_1498_p2() {
    mul_ln1118_761_fu_1498_p2 = (!ap_const_lv23_35.is_01() || !mul_ln1118_761_fu_1498_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_35) * sc_bigint<16>(mul_ln1118_761_fu_1498_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_762_fu_1545_p1() {
    mul_ln1118_762_fu_1545_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_762_fu_1545_p2() {
    mul_ln1118_762_fu_1545_p2 = (!ap_const_lv26_3FFFE8B.is_01() || !mul_ln1118_762_fu_1545_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE8B) * sc_bigint<16>(mul_ln1118_762_fu_1545_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_763_fu_1438_p1() {
    mul_ln1118_763_fu_1438_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_763_fu_1438_p2() {
    mul_ln1118_763_fu_1438_p2 = (!ap_const_lv26_262.is_01() || !mul_ln1118_763_fu_1438_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_262) * sc_bigint<16>(mul_ln1118_763_fu_1438_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_764_fu_1401_p1() {
    mul_ln1118_764_fu_1401_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_764_fu_1401_p2() {
    mul_ln1118_764_fu_1401_p2 = (!ap_const_lv26_3FFFE31.is_01() || !mul_ln1118_764_fu_1401_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE31) * sc_bigint<16>(mul_ln1118_764_fu_1401_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_765_fu_1364_p1() {
    mul_ln1118_765_fu_1364_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_765_fu_1364_p2() {
    mul_ln1118_765_fu_1364_p2 = (!ap_const_lv26_14A.is_01() || !mul_ln1118_765_fu_1364_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_14A) * sc_bigint<16>(mul_ln1118_765_fu_1364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_766_fu_1369_p1() {
    mul_ln1118_766_fu_1369_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_766_fu_1369_p2() {
    mul_ln1118_766_fu_1369_p2 = (!ap_const_lv26_266.is_01() || !mul_ln1118_766_fu_1369_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_266) * sc_bigint<16>(mul_ln1118_766_fu_1369_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_767_fu_1318_p1() {
    mul_ln1118_767_fu_1318_p1 =  (sc_lv<16>) (sext_ln1118_931_fu_977789_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_767_fu_1318_p2() {
    mul_ln1118_767_fu_1318_p2 = (!ap_const_lv24_7A.is_01() || !mul_ln1118_767_fu_1318_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7A) * sc_bigint<16>(mul_ln1118_767_fu_1318_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_768_fu_1253_p1() {
    mul_ln1118_768_fu_1253_p1 =  (sc_lv<16>) (sext_ln1118_929_fu_977773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_768_fu_1253_p2() {
    mul_ln1118_768_fu_1253_p2 = (!ap_const_lv25_1FFFF0F.is_01() || !mul_ln1118_768_fu_1253_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF0F) * sc_bigint<16>(mul_ln1118_768_fu_1253_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_769_fu_1230_p1() {
    mul_ln1118_769_fu_1230_p1 = tmp_6_fu_977728_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_769_fu_1230_p2() {
    mul_ln1118_769_fu_1230_p2 = (!ap_const_lv22_17.is_01() || !mul_ln1118_769_fu_1230_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_17) * sc_bigint<16>(mul_ln1118_769_fu_1230_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_770_fu_1640_p1() {
    mul_ln1118_770_fu_1640_p1 =  (sc_lv<16>) (sext_ln1118_929_fu_977773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_770_fu_1640_p2() {
    mul_ln1118_770_fu_1640_p2 = (!ap_const_lv25_1FFFF3E.is_01() || !mul_ln1118_770_fu_1640_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF3E) * sc_bigint<16>(mul_ln1118_770_fu_1640_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_771_fu_1240_p1() {
    mul_ln1118_771_fu_1240_p1 =  (sc_lv<16>) (sext_ln1118_929_fu_977773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_771_fu_1240_p2() {
    mul_ln1118_771_fu_1240_p2 = (!ap_const_lv25_1FFFF73.is_01() || !mul_ln1118_771_fu_1240_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF73) * sc_bigint<16>(mul_ln1118_771_fu_1240_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_772_fu_1355_p1() {
    mul_ln1118_772_fu_1355_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_772_fu_1355_p2() {
    mul_ln1118_772_fu_1355_p2 = (!ap_const_lv26_3FFFEE3.is_01() || !mul_ln1118_772_fu_1355_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEE3) * sc_bigint<16>(mul_ln1118_772_fu_1355_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_773_fu_1185_p1() {
    mul_ln1118_773_fu_1185_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_773_fu_1185_p2() {
    mul_ln1118_773_fu_1185_p2 = (!ap_const_lv26_1AB.is_01() || !mul_ln1118_773_fu_1185_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_1AB) * sc_bigint<16>(mul_ln1118_773_fu_1185_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_774_fu_1471_p1() {
    mul_ln1118_774_fu_1471_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_774_fu_1471_p2() {
    mul_ln1118_774_fu_1471_p2 = (!ap_const_lv26_3FFFEB3.is_01() || !mul_ln1118_774_fu_1471_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEB3) * sc_bigint<16>(mul_ln1118_774_fu_1471_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_775_fu_1529_p1() {
    mul_ln1118_775_fu_1529_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_775_fu_1529_p2() {
    mul_ln1118_775_fu_1529_p2 = (!ap_const_lv26_2B8.is_01() || !mul_ln1118_775_fu_1529_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_2B8) * sc_bigint<16>(mul_ln1118_775_fu_1529_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_776_fu_1537_p1() {
    mul_ln1118_776_fu_1537_p1 =  (sc_lv<16>) (sext_ln1118_931_fu_977789_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_776_fu_1537_p2() {
    mul_ln1118_776_fu_1537_p2 = (!ap_const_lv24_5D.is_01() || !mul_ln1118_776_fu_1537_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5D) * sc_bigint<16>(mul_ln1118_776_fu_1537_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_777_fu_1553_p1() {
    mul_ln1118_777_fu_1553_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_777_fu_1553_p2() {
    mul_ln1118_777_fu_1553_p2 = (!ap_const_lv26_197.is_01() || !mul_ln1118_777_fu_1553_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_197) * sc_bigint<16>(mul_ln1118_777_fu_1553_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_778_fu_1388_p1() {
    mul_ln1118_778_fu_1388_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_778_fu_1388_p2() {
    mul_ln1118_778_fu_1388_p2 = (!ap_const_lv26_1A8.is_01() || !mul_ln1118_778_fu_1388_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_1A8) * sc_bigint<16>(mul_ln1118_778_fu_1388_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_779_fu_1208_p1() {
    mul_ln1118_779_fu_1208_p1 =  (sc_lv<16>) (sext_ln1118_929_fu_977773_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_779_fu_1208_p2() {
    mul_ln1118_779_fu_1208_p2 = (!ap_const_lv25_1FFFF0D.is_01() || !mul_ln1118_779_fu_1208_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF0D) * sc_bigint<16>(mul_ln1118_779_fu_1208_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_780_fu_1209_p1() {
    mul_ln1118_780_fu_1209_p1 =  (sc_lv<16>) (sext_ln1118_931_fu_977789_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_780_fu_1209_p2() {
    mul_ln1118_780_fu_1209_p2 = (!ap_const_lv24_FFFFBB.is_01() || !mul_ln1118_780_fu_1209_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFBB) * sc_bigint<16>(mul_ln1118_780_fu_1209_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_781_fu_1557_p1() {
    mul_ln1118_781_fu_1557_p1 =  (sc_lv<16>) (sext_ln1118_928_fu_977748_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_781_fu_1557_p2() {
    mul_ln1118_781_fu_1557_p2 = (!ap_const_lv26_3FFFEF9.is_01() || !mul_ln1118_781_fu_1557_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEF9) * sc_bigint<16>(mul_ln1118_781_fu_1557_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_782_fu_1196_p1() {
    mul_ln1118_782_fu_1196_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_782_fu_1196_p2() {
    mul_ln1118_782_fu_1196_p2 = (!ap_const_lv26_3FFFBE5.is_01() || !mul_ln1118_782_fu_1196_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFBE5) * sc_bigint<16>(mul_ln1118_782_fu_1196_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_783_fu_1212_p1() {
    mul_ln1118_783_fu_1212_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_783_fu_1212_p2() {
    mul_ln1118_783_fu_1212_p2 = (!ap_const_lv26_3FFFDDA.is_01() || !mul_ln1118_783_fu_1212_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFDDA) * sc_bigint<16>(mul_ln1118_783_fu_1212_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_784_fu_1379_p1() {
    mul_ln1118_784_fu_1379_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_784_fu_1379_p2() {
    mul_ln1118_784_fu_1379_p2 = (!ap_const_lv26_3FFFCB4.is_01() || !mul_ln1118_784_fu_1379_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFCB4) * sc_bigint<16>(mul_ln1118_784_fu_1379_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_785_fu_1480_p1() {
    mul_ln1118_785_fu_1480_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_785_fu_1480_p2() {
    mul_ln1118_785_fu_1480_p2 = (!ap_const_lv26_4EF.is_01() || !mul_ln1118_785_fu_1480_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_4EF) * sc_bigint<16>(mul_ln1118_785_fu_1480_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_786_fu_1443_p1() {
    mul_ln1118_786_fu_1443_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_786_fu_1443_p2() {
    mul_ln1118_786_fu_1443_p2 = (!ap_const_lv26_3FFFDFD.is_01() || !mul_ln1118_786_fu_1443_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFDFD) * sc_bigint<16>(mul_ln1118_786_fu_1443_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_787_fu_1378_p1() {
    mul_ln1118_787_fu_1378_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_787_fu_1378_p2() {
    mul_ln1118_787_fu_1378_p2 = (!ap_const_lv26_19C.is_01() || !mul_ln1118_787_fu_1378_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_19C) * sc_bigint<16>(mul_ln1118_787_fu_1378_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_788_fu_1383_p1() {
    mul_ln1118_788_fu_1383_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_788_fu_1383_p2() {
    mul_ln1118_788_fu_1383_p2 = (!ap_const_lv26_3FFFE42.is_01() || !mul_ln1118_788_fu_1383_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE42) * sc_bigint<16>(mul_ln1118_788_fu_1383_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_789_fu_1304_p1() {
    mul_ln1118_789_fu_1304_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_789_fu_1304_p2() {
    mul_ln1118_789_fu_1304_p2 = (!ap_const_lv26_198.is_01() || !mul_ln1118_789_fu_1304_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_198) * sc_bigint<16>(mul_ln1118_789_fu_1304_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_790_fu_1281_p1() {
    mul_ln1118_790_fu_1281_p1 =  (sc_lv<16>) (sext_ln1118_937_fu_978501_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_790_fu_1281_p2() {
    mul_ln1118_790_fu_1281_p2 = (!ap_const_lv25_1FFFF2A.is_01() || !mul_ln1118_790_fu_1281_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF2A) * sc_bigint<16>(mul_ln1118_790_fu_1281_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_791_fu_1244_p1() {
    mul_ln1118_791_fu_1244_p1 =  (sc_lv<16>) (sext_ln1118_937_fu_978501_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_791_fu_1244_p2() {
    mul_ln1118_791_fu_1244_p2 = (!ap_const_lv25_1FFFF6E.is_01() || !mul_ln1118_791_fu_1244_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF6E) * sc_bigint<16>(mul_ln1118_791_fu_1244_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_792_fu_1207_p1() {
    mul_ln1118_792_fu_1207_p1 =  (sc_lv<16>) (sext_ln1118_937_fu_978501_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_792_fu_1207_p2() {
    mul_ln1118_792_fu_1207_p2 = (!ap_const_lv25_E9.is_01() || !mul_ln1118_792_fu_1207_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_E9) * sc_bigint<16>(mul_ln1118_792_fu_1207_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_793_fu_1156_p1() {
    mul_ln1118_793_fu_1156_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_793_fu_1156_p2() {
    mul_ln1118_793_fu_1156_p2 = (!ap_const_lv26_236.is_01() || !mul_ln1118_793_fu_1156_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_236) * sc_bigint<16>(mul_ln1118_793_fu_1156_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_794_fu_1594_p1() {
    mul_ln1118_794_fu_1594_p1 =  (sc_lv<16>) (sext_ln1118_937_fu_978501_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_794_fu_1594_p2() {
    mul_ln1118_794_fu_1594_p2 = (!ap_const_lv25_1FFFF0F.is_01() || !mul_ln1118_794_fu_1594_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF0F) * sc_bigint<16>(mul_ln1118_794_fu_1594_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_795_fu_1138_p1() {
    mul_ln1118_795_fu_1138_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_795_fu_1138_p2() {
    mul_ln1118_795_fu_1138_p2 = (!ap_const_lv26_3FFFC81.is_01() || !mul_ln1118_795_fu_1138_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFC81) * sc_bigint<16>(mul_ln1118_795_fu_1138_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_796_fu_1548_p1() {
    mul_ln1118_796_fu_1548_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_796_fu_1548_p2() {
    mul_ln1118_796_fu_1548_p2 = (!ap_const_lv26_4CB.is_01() || !mul_ln1118_796_fu_1548_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_4CB) * sc_bigint<16>(mul_ln1118_796_fu_1548_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_797_fu_1511_p1() {
    mul_ln1118_797_fu_1511_p1 =  (sc_lv<16>) (sext_ln1118_939_fu_978536_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_797_fu_1511_p2() {
    mul_ln1118_797_fu_1511_p2 = (!ap_const_lv23_7FFFCF.is_01() || !mul_ln1118_797_fu_1511_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCF) * sc_bigint<16>(mul_ln1118_797_fu_1511_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_798_fu_1474_p1() {
    mul_ln1118_798_fu_1474_p1 =  (sc_lv<16>) (sext_ln1118_939_fu_978536_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_798_fu_1474_p2() {
    mul_ln1118_798_fu_1474_p2 = (!ap_const_lv23_33.is_01() || !mul_ln1118_798_fu_1474_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_33) * sc_bigint<16>(mul_ln1118_798_fu_1474_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_799_fu_1473_p1() {
    mul_ln1118_799_fu_1473_p1 =  (sc_lv<16>) (sext_ln1118_941_fu_978546_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_799_fu_1473_p2() {
    mul_ln1118_799_fu_1473_p2 = (!ap_const_lv21_D.is_01() || !mul_ln1118_799_fu_1473_p1.read().is_01())? sc_lv<21>(): sc_biguint<21>(ap_const_lv21_D) * sc_bigint<16>(mul_ln1118_799_fu_1473_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_800_fu_1189_p1() {
    mul_ln1118_800_fu_1189_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_800_fu_1189_p2() {
    mul_ln1118_800_fu_1189_p2 = (!ap_const_lv26_112.is_01() || !mul_ln1118_800_fu_1189_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_112) * sc_bigint<16>(mul_ln1118_800_fu_1189_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_801_fu_1190_p1() {
    mul_ln1118_801_fu_1190_p1 =  (sc_lv<16>) (sext_ln1118_937_fu_978501_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_801_fu_1190_p2() {
    mul_ln1118_801_fu_1190_p2 = (!ap_const_lv25_1FFFF62.is_01() || !mul_ln1118_801_fu_1190_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF62) * sc_bigint<16>(mul_ln1118_801_fu_1190_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_802_fu_1476_p1() {
    mul_ln1118_802_fu_1476_p1 =  (sc_lv<16>) (sext_ln1118_937_fu_978501_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_802_fu_1476_p2() {
    mul_ln1118_802_fu_1476_p2 = (!ap_const_lv25_1FFFF16.is_01() || !mul_ln1118_802_fu_1476_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF16) * sc_bigint<16>(mul_ln1118_802_fu_1476_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_803_fu_1363_p1() {
    mul_ln1118_803_fu_1363_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_803_fu_1363_p2() {
    mul_ln1118_803_fu_1363_p2 = (!ap_const_lv26_3FFFDEB.is_01() || !mul_ln1118_803_fu_1363_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFDEB) * sc_bigint<16>(mul_ln1118_803_fu_1363_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_804_fu_1371_p1() {
    mul_ln1118_804_fu_1371_p1 =  (sc_lv<16>) (sext_ln1118_937_fu_978501_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_804_fu_1371_p2() {
    mul_ln1118_804_fu_1371_p2 = (!ap_const_lv25_1FFFF5C.is_01() || !mul_ln1118_804_fu_1371_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF5C) * sc_bigint<16>(mul_ln1118_804_fu_1371_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_805_fu_1478_p1() {
    mul_ln1118_805_fu_1478_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_805_fu_1478_p2() {
    mul_ln1118_805_fu_1478_p2 = (!ap_const_lv26_3FFFDB0.is_01() || !mul_ln1118_805_fu_1478_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFDB0) * sc_bigint<16>(mul_ln1118_805_fu_1478_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_806_fu_1554_p1() {
    mul_ln1118_806_fu_1554_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_806_fu_1554_p2() {
    mul_ln1118_806_fu_1554_p2 = (!ap_const_lv26_3FFFEA0.is_01() || !mul_ln1118_806_fu_1554_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEA0) * sc_bigint<16>(mul_ln1118_806_fu_1554_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_807_fu_1223_p1() {
    mul_ln1118_807_fu_1223_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_807_fu_1223_p2() {
    mul_ln1118_807_fu_1223_p2 = (!ap_const_lv26_3FFFEAA.is_01() || !mul_ln1118_807_fu_1223_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEAA) * sc_bigint<16>(mul_ln1118_807_fu_1223_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_808_fu_1571_p1() {
    mul_ln1118_808_fu_1571_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_808_fu_1571_p2() {
    mul_ln1118_808_fu_1571_p2 = (!ap_const_lv26_3FFFDD3.is_01() || !mul_ln1118_808_fu_1571_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFDD3) * sc_bigint<16>(mul_ln1118_808_fu_1571_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_809_fu_1361_p1() {
    mul_ln1118_809_fu_1361_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_809_fu_1361_p2() {
    mul_ln1118_809_fu_1361_p2 = (!ap_const_lv26_3FFFD9F.is_01() || !mul_ln1118_809_fu_1361_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFD9F) * sc_bigint<16>(mul_ln1118_809_fu_1361_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_810_fu_1573_p1() {
    mul_ln1118_810_fu_1573_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_810_fu_1573_p2() {
    mul_ln1118_810_fu_1573_p2 = (!ap_const_lv26_3FFFE63.is_01() || !mul_ln1118_810_fu_1573_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE63) * sc_bigint<16>(mul_ln1118_810_fu_1573_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_811_fu_1227_p1() {
    mul_ln1118_811_fu_1227_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_978512_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_811_fu_1227_p2() {
    mul_ln1118_811_fu_1227_p2 = (!ap_const_lv26_3FFFD7E.is_01() || !mul_ln1118_811_fu_1227_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFD7E) * sc_bigint<16>(mul_ln1118_811_fu_1227_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_812_fu_1213_p1() {
    mul_ln1118_812_fu_1213_p1 =  (sc_lv<16>) (sext_ln1118_961_fu_979374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_812_fu_1213_p2() {
    mul_ln1118_812_fu_1213_p2 = (!ap_const_lv24_65.is_01() || !mul_ln1118_812_fu_1213_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_65) * sc_bigint<16>(mul_ln1118_812_fu_1213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_813_fu_1258_p1() {
    mul_ln1118_813_fu_1258_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_813_fu_1258_p2() {
    mul_ln1118_813_fu_1258_p2 = (!ap_const_lv26_1CF.is_01() || !mul_ln1118_813_fu_1258_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_1CF) * sc_bigint<16>(mul_ln1118_813_fu_1258_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_814_fu_1235_p1() {
    mul_ln1118_814_fu_1235_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_814_fu_1235_p2() {
    mul_ln1118_814_fu_1235_p2 = (!ap_const_lv26_3FFFEC2.is_01() || !mul_ln1118_814_fu_1235_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEC2) * sc_bigint<16>(mul_ln1118_814_fu_1235_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_815_fu_1198_p1() {
    mul_ln1118_815_fu_1198_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_815_fu_1198_p2() {
    mul_ln1118_815_fu_1198_p2 = (!ap_const_lv26_3FFFEDF.is_01() || !mul_ln1118_815_fu_1198_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEDF) * sc_bigint<16>(mul_ln1118_815_fu_1198_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_816_fu_1161_p1() {
    mul_ln1118_816_fu_1161_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_816_fu_1161_p2() {
    mul_ln1118_816_fu_1161_p2 = (!ap_const_lv26_3FFFE3F.is_01() || !mul_ln1118_816_fu_1161_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE3F) * sc_bigint<16>(mul_ln1118_816_fu_1161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_817_fu_1278_p1() {
    mul_ln1118_817_fu_1278_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_979386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_817_fu_1278_p2() {
    mul_ln1118_817_fu_1278_p2 = (!ap_const_lv25_1FFFF69.is_01() || !mul_ln1118_817_fu_1278_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF69) * sc_bigint<16>(mul_ln1118_817_fu_1278_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_818_fu_1562_p1() {
    mul_ln1118_818_fu_1562_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_818_fu_1562_p2() {
    mul_ln1118_818_fu_1562_p2 = (!ap_const_lv26_3FFFEE5.is_01() || !mul_ln1118_818_fu_1562_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEE5) * sc_bigint<16>(mul_ln1118_818_fu_1562_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_819_fu_1525_p1() {
    mul_ln1118_819_fu_1525_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_819_fu_1525_p2() {
    mul_ln1118_819_fu_1525_p2 = (!ap_const_lv26_238.is_01() || !mul_ln1118_819_fu_1525_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_238) * sc_bigint<16>(mul_ln1118_819_fu_1525_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_820_fu_1502_p1() {
    mul_ln1118_820_fu_1502_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_979386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_820_fu_1502_p2() {
    mul_ln1118_820_fu_1502_p2 = (!ap_const_lv25_1FFFF63.is_01() || !mul_ln1118_820_fu_1502_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF63) * sc_bigint<16>(mul_ln1118_820_fu_1502_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_821_fu_1451_p1() {
    mul_ln1118_821_fu_1451_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_821_fu_1451_p2() {
    mul_ln1118_821_fu_1451_p2 = (!ap_const_lv26_3FFFD90.is_01() || !mul_ln1118_821_fu_1451_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFD90) * sc_bigint<16>(mul_ln1118_821_fu_1451_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_822_fu_1428_p1() {
    mul_ln1118_822_fu_1428_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_979386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_822_fu_1428_p2() {
    mul_ln1118_822_fu_1428_p2 = (!ap_const_lv25_1FFFF0B.is_01() || !mul_ln1118_822_fu_1428_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF0B) * sc_bigint<16>(mul_ln1118_822_fu_1428_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_823_fu_1419_p1() {
    mul_ln1118_823_fu_1419_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_823_fu_1419_p2() {
    mul_ln1118_823_fu_1419_p2 = (!ap_const_lv26_3FFFE28.is_01() || !mul_ln1118_823_fu_1419_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE28) * sc_bigint<16>(mul_ln1118_823_fu_1419_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_824_fu_1424_p1() {
    mul_ln1118_824_fu_1424_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_979386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_824_fu_1424_p2() {
    mul_ln1118_824_fu_1424_p2 = (!ap_const_lv25_D4.is_01() || !mul_ln1118_824_fu_1424_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_D4) * sc_bigint<16>(mul_ln1118_824_fu_1424_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_825_fu_1317_p1() {
    mul_ln1118_825_fu_1317_p1 = tmp_8_fu_979335_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_825_fu_1317_p2() {
    mul_ln1118_825_fu_1317_p2 = (!ap_const_lv22_3FFFE3.is_01() || !mul_ln1118_825_fu_1317_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFE3) * sc_bigint<16>(mul_ln1118_825_fu_1317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_826_fu_1252_p1() {
    mul_ln1118_826_fu_1252_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_826_fu_1252_p2() {
    mul_ln1118_826_fu_1252_p2 = (!ap_const_lv26_169.is_01() || !mul_ln1118_826_fu_1252_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_169) * sc_bigint<16>(mul_ln1118_826_fu_1252_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_827_fu_1606_p1() {
    mul_ln1118_827_fu_1606_p1 =  (sc_lv<16>) (sext_ln1118_961_fu_979374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_827_fu_1606_p2() {
    mul_ln1118_827_fu_1606_p2 = (!ap_const_lv24_64.is_01() || !mul_ln1118_827_fu_1606_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_64) * sc_bigint<16>(mul_ln1118_827_fu_1606_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_828_fu_1636_p1() {
    mul_ln1118_828_fu_1636_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_979386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_828_fu_1636_p2() {
    mul_ln1118_828_fu_1636_p2 = (!ap_const_lv25_1FFFF45.is_01() || !mul_ln1118_828_fu_1636_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF45) * sc_bigint<16>(mul_ln1118_828_fu_1636_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_829_fu_1608_p1() {
    mul_ln1118_829_fu_1608_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_829_fu_1608_p2() {
    mul_ln1118_829_fu_1608_p2 = (!ap_const_lv26_12F.is_01() || !mul_ln1118_829_fu_1608_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_12F) * sc_bigint<16>(mul_ln1118_829_fu_1608_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_830_fu_1552_p1() {
    mul_ln1118_830_fu_1552_p1 =  (sc_lv<16>) (sext_ln1118_964_fu_979398_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_830_fu_1552_p2() {
    mul_ln1118_830_fu_1552_p2 = (!ap_const_lv23_7FFFCA.is_01() || !mul_ln1118_830_fu_1552_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCA) * sc_bigint<16>(mul_ln1118_830_fu_1552_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_831_fu_1439_p1() {
    mul_ln1118_831_fu_1439_p1 =  (sc_lv<16>) (sext_ln1118_961_fu_979374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_831_fu_1439_p2() {
    mul_ln1118_831_fu_1439_p2 = (!ap_const_lv24_66.is_01() || !mul_ln1118_831_fu_1439_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_66) * sc_bigint<16>(mul_ln1118_831_fu_1439_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_832_fu_1582_p1() {
    mul_ln1118_832_fu_1582_p1 =  (sc_lv<16>) (sext_ln1118_964_fu_979398_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_832_fu_1582_p2() {
    mul_ln1118_832_fu_1582_p2 = (!ap_const_lv23_33.is_01() || !mul_ln1118_832_fu_1582_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_33) * sc_bigint<16>(mul_ln1118_832_fu_1582_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_833_fu_1583_p1() {
    mul_ln1118_833_fu_1583_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_979386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_833_fu_1583_p2() {
    mul_ln1118_833_fu_1583_p2 = (!ap_const_lv25_8F.is_01() || !mul_ln1118_833_fu_1583_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_8F) * sc_bigint<16>(mul_ln1118_833_fu_1583_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_834_fu_1584_p1() {
    mul_ln1118_834_fu_1584_p1 =  (sc_lv<16>) (sext_ln1118_961_fu_979374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_834_fu_1584_p2() {
    mul_ln1118_834_fu_1584_p2 = (!ap_const_lv24_6B.is_01() || !mul_ln1118_834_fu_1584_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_6B) * sc_bigint<16>(mul_ln1118_834_fu_1584_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_835_fu_1585_p1() {
    mul_ln1118_835_fu_1585_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_835_fu_1585_p2() {
    mul_ln1118_835_fu_1585_p2 = (!ap_const_lv26_18A.is_01() || !mul_ln1118_835_fu_1585_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_18A) * sc_bigint<16>(mul_ln1118_835_fu_1585_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_836_fu_1586_p1() {
    mul_ln1118_836_fu_1586_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_979386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_836_fu_1586_p2() {
    mul_ln1118_836_fu_1586_p2 = (!ap_const_lv25_1FFFF68.is_01() || !mul_ln1118_836_fu_1586_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF68) * sc_bigint<16>(mul_ln1118_836_fu_1586_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_837_fu_1587_p1() {
    mul_ln1118_837_fu_1587_p1 =  (sc_lv<16>) (sext_ln1118_964_fu_979398_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_837_fu_1587_p2() {
    mul_ln1118_837_fu_1587_p2 = (!ap_const_lv23_2A.is_01() || !mul_ln1118_837_fu_1587_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_2A) * sc_bigint<16>(mul_ln1118_837_fu_1587_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_838_fu_1226_p1() {
    mul_ln1118_838_fu_1226_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_838_fu_1226_p2() {
    mul_ln1118_838_fu_1226_p2 = (!ap_const_lv26_269.is_01() || !mul_ln1118_838_fu_1226_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_269) * sc_bigint<16>(mul_ln1118_838_fu_1226_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_839_fu_1589_p1() {
    mul_ln1118_839_fu_1589_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_839_fu_1589_p2() {
    mul_ln1118_839_fu_1589_p2 = (!ap_const_lv26_107.is_01() || !mul_ln1118_839_fu_1589_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_107) * sc_bigint<16>(mul_ln1118_839_fu_1589_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_840_fu_1604_p1() {
    mul_ln1118_840_fu_1604_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_979386_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_840_fu_1604_p2() {
    mul_ln1118_840_fu_1604_p2 = (!ap_const_lv25_B2.is_01() || !mul_ln1118_840_fu_1604_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_B2) * sc_bigint<16>(mul_ln1118_840_fu_1604_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_841_fu_1567_p1() {
    mul_ln1118_841_fu_1567_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_841_fu_1567_p2() {
    mul_ln1118_841_fu_1567_p2 = (!ap_const_lv26_206.is_01() || !mul_ln1118_841_fu_1567_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_206) * sc_bigint<16>(mul_ln1118_841_fu_1567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_842_fu_1153_p1() {
    mul_ln1118_842_fu_1153_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_842_fu_1153_p2() {
    mul_ln1118_842_fu_1153_p2 = (!ap_const_lv26_3FFFD8B.is_01() || !mul_ln1118_842_fu_1153_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFD8B) * sc_bigint<16>(mul_ln1118_842_fu_1153_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_843_fu_1479_p1() {
    mul_ln1118_843_fu_1479_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_979350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_843_fu_1479_p2() {
    mul_ln1118_843_fu_1479_p2 = (!ap_const_lv26_3FFFE99.is_01() || !mul_ln1118_843_fu_1479_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE99) * sc_bigint<16>(mul_ln1118_843_fu_1479_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_844_fu_1442_p1() {
    mul_ln1118_844_fu_1442_p1 =  (sc_lv<16>) (sext_ln1118_984_fu_980315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_844_fu_1442_p2() {
    mul_ln1118_844_fu_1442_p2 = (!ap_const_lv25_A8.is_01() || !mul_ln1118_844_fu_1442_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_A8) * sc_bigint<16>(mul_ln1118_844_fu_1442_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_845_fu_1405_p1() {
    mul_ln1118_845_fu_1405_p1 = tmp_9_fu_980283_p4.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_845_fu_1405_p2() {
    mul_ln1118_845_fu_1405_p2 = (!ap_const_lv26_3FFFE93.is_01() || !mul_ln1118_845_fu_1405_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE93) * sc_bigint<16>(mul_ln1118_845_fu_1405_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_846_fu_1580_p1() {
    mul_ln1118_846_fu_1580_p1 =  (sc_lv<16>) (sext_ln1118_982_fu_980300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_846_fu_1580_p2() {
    mul_ln1118_846_fu_1580_p2 = (!ap_const_lv24_FFFFB2.is_01() || !mul_ln1118_846_fu_1580_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB2) * sc_bigint<16>(mul_ln1118_846_fu_1580_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_847_fu_1373_p1() {
    mul_ln1118_847_fu_1373_p1 =  (sc_lv<16>) (sext_ln1118_984_fu_980315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_847_fu_1373_p2() {
    mul_ln1118_847_fu_1373_p2 = (!ap_const_lv25_1FFFF3E.is_01() || !mul_ln1118_847_fu_1373_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF3E) * sc_bigint<16>(mul_ln1118_847_fu_1373_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_848_fu_1294_p1() {
    mul_ln1118_848_fu_1294_p1 =  (sc_lv<16>) (sext_ln1118_984_fu_980315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_848_fu_1294_p2() {
    mul_ln1118_848_fu_1294_p2 = (!ap_const_lv25_83.is_01() || !mul_ln1118_848_fu_1294_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_83) * sc_bigint<16>(mul_ln1118_848_fu_1294_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_849_fu_1232_p1() {
    mul_ln1118_849_fu_1232_p1 =  (sc_lv<16>) (sext_ln1118_984_fu_980315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_849_fu_1232_p2() {
    mul_ln1118_849_fu_1232_p2 = (!ap_const_lv25_1FFFF3F.is_01() || !mul_ln1118_849_fu_1232_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF3F) * sc_bigint<16>(mul_ln1118_849_fu_1232_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_850_fu_1234_p1() {
    mul_ln1118_850_fu_1234_p1 =  (sc_lv<16>) (sext_ln1118_984_fu_980315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_850_fu_1234_p2() {
    mul_ln1118_850_fu_1234_p2 = (!ap_const_lv25_1FFFF49.is_01() || !mul_ln1118_850_fu_1234_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF49) * sc_bigint<16>(mul_ln1118_850_fu_1234_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_851_fu_1197_p1() {
    mul_ln1118_851_fu_1197_p1 =  (sc_lv<16>) (sext_ln1118_984_fu_980315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_851_fu_1197_p2() {
    mul_ln1118_851_fu_1197_p2 = (!ap_const_lv25_1FFFF1D.is_01() || !mul_ln1118_851_fu_1197_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF1D) * sc_bigint<16>(mul_ln1118_851_fu_1197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_852_fu_1160_p1() {
    mul_ln1118_852_fu_1160_p1 =  (sc_lv<16>) (sext_ln1118_981_fu_980293_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_852_fu_1160_p2() {
    mul_ln1118_852_fu_1160_p2 = (!ap_const_lv23_2D.is_01() || !mul_ln1118_852_fu_1160_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_2D) * sc_bigint<16>(mul_ln1118_852_fu_1160_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_853_fu_1598_p1() {
    mul_ln1118_853_fu_1598_p1 =  (sc_lv<16>) (sext_ln1118_982_fu_980300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_853_fu_1598_p2() {
    mul_ln1118_853_fu_1598_p2 = (!ap_const_lv24_FFFFB7.is_01() || !mul_ln1118_853_fu_1598_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB7) * sc_bigint<16>(mul_ln1118_853_fu_1598_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_854_fu_1211_p1() {
    mul_ln1118_854_fu_1211_p1 =  (sc_lv<16>) (sext_ln1118_982_fu_980300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_854_fu_1211_p2() {
    mul_ln1118_854_fu_1211_p2 = (!ap_const_lv24_FFFFB3.is_01() || !mul_ln1118_854_fu_1211_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB3) * sc_bigint<16>(mul_ln1118_854_fu_1211_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_855_fu_1611_p1() {
    mul_ln1118_855_fu_1611_p1 =  (sc_lv<16>) (sext_ln1118_982_fu_980300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_855_fu_1611_p2() {
    mul_ln1118_855_fu_1611_p2 = (!ap_const_lv24_5D.is_01() || !mul_ln1118_855_fu_1611_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5D) * sc_bigint<16>(mul_ln1118_855_fu_1611_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_856_fu_1555_p1() {
    mul_ln1118_856_fu_1555_p1 =  (sc_lv<16>) (sext_ln1118_981_fu_980293_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_856_fu_1555_p2() {
    mul_ln1118_856_fu_1555_p2 = (!ap_const_lv23_7FFFD3.is_01() || !mul_ln1118_856_fu_1555_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD3) * sc_bigint<16>(mul_ln1118_856_fu_1555_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_857_fu_1157_p1() {
    mul_ln1118_857_fu_1157_p1 =  (sc_lv<16>) (sext_ln1118_984_fu_980315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_857_fu_1157_p2() {
    mul_ln1118_857_fu_1157_p2 = (!ap_const_lv25_B5.is_01() || !mul_ln1118_857_fu_1157_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_B5) * sc_bigint<16>(mul_ln1118_857_fu_1157_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_858_fu_1614_p1() {
    mul_ln1118_858_fu_1614_p1 =  (sc_lv<16>) (sext_ln1118_984_fu_980315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_858_fu_1614_p2() {
    mul_ln1118_858_fu_1614_p2 = (!ap_const_lv25_8B.is_01() || !mul_ln1118_858_fu_1614_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_8B) * sc_bigint<16>(mul_ln1118_858_fu_1614_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_859_fu_1273_p1() {
    mul_ln1118_859_fu_1273_p1 =  (sc_lv<16>) (sext_ln1118_985_fu_980330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_859_fu_1273_p2() {
    mul_ln1118_859_fu_1273_p2 = (!ap_const_lv21_1FFFF3.is_01() || !mul_ln1118_859_fu_1273_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(mul_ln1118_859_fu_1273_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_860_fu_1181_p1() {
    mul_ln1118_860_fu_1181_p1 =  (sc_lv<16>) (sext_ln1118_984_fu_980315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_860_fu_1181_p2() {
    mul_ln1118_860_fu_1181_p2 = (!ap_const_lv25_1FFFF21.is_01() || !mul_ln1118_860_fu_1181_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF21) * sc_bigint<16>(mul_ln1118_860_fu_1181_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_861_fu_1251_p1() {
    mul_ln1118_861_fu_1251_p1 =  (sc_lv<16>) (sext_ln1118_982_fu_980300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_861_fu_1251_p2() {
    mul_ln1118_861_fu_1251_p2 = (!ap_const_lv24_FFFF9E.is_01() || !mul_ln1118_861_fu_1251_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF9E) * sc_bigint<16>(mul_ln1118_861_fu_1251_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_862_fu_1599_p1() {
    mul_ln1118_862_fu_1599_p1 =  (sc_lv<16>) (sext_ln1118_984_fu_980315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_862_fu_1599_p2() {
    mul_ln1118_862_fu_1599_p2 = (!ap_const_lv25_1FFFF09.is_01() || !mul_ln1118_862_fu_1599_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF09) * sc_bigint<16>(mul_ln1118_862_fu_1599_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_863_fu_1434_p1() {
    mul_ln1118_863_fu_1434_p1 =  (sc_lv<16>) (sext_ln1118_985_fu_980330_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_863_fu_1434_p2() {
    mul_ln1118_863_fu_1434_p2 = (!ap_const_lv21_B.is_01() || !mul_ln1118_863_fu_1434_p1.read().is_01())? sc_lv<21>(): sc_biguint<21>(ap_const_lv21_B) * sc_bigint<16>(mul_ln1118_863_fu_1434_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_864_fu_1601_p1() {
    mul_ln1118_864_fu_1601_p1 =  (sc_lv<16>) (sext_ln1118_981_fu_980293_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_864_fu_1601_p2() {
    mul_ln1118_864_fu_1601_p2 = (!ap_const_lv23_7FFFC7.is_01() || !mul_ln1118_864_fu_1601_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFC7) * sc_bigint<16>(mul_ln1118_864_fu_1601_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_865_fu_1255_p1() {
    mul_ln1118_865_fu_1255_p1 =  (sc_lv<16>) (sext_ln1118_984_fu_980315_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_865_fu_1255_p2() {
    mul_ln1118_865_fu_1255_p2 = (!ap_const_lv25_1FFFF46.is_01() || !mul_ln1118_865_fu_1255_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF46) * sc_bigint<16>(mul_ln1118_865_fu_1255_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_866_fu_1256_p1() {
    mul_ln1118_866_fu_1256_p1 =  (sc_lv<16>) (sext_ln1118_982_fu_980300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_866_fu_1256_p2() {
    mul_ln1118_866_fu_1256_p2 = (!ap_const_lv24_4E.is_01() || !mul_ln1118_866_fu_1256_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4E) * sc_bigint<16>(mul_ln1118_866_fu_1256_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_867_fu_1393_p1() {
    mul_ln1118_867_fu_1393_p1 =  (sc_lv<16>) (sext_ln1118_1007_fu_981231_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_867_fu_1393_p2() {
    mul_ln1118_867_fu_1393_p2 = (!ap_const_lv21_1FFFF5.is_01() || !mul_ln1118_867_fu_1393_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF5) * sc_bigint<16>(mul_ln1118_867_fu_1393_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_868_fu_1410_p1() {
    mul_ln1118_868_fu_1410_p1 =  (sc_lv<16>) (sext_ln1118_1003_fu_981205_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_868_fu_1410_p2() {
    mul_ln1118_868_fu_1410_p2 = (!ap_const_lv25_1FFFF42.is_01() || !mul_ln1118_868_fu_1410_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF42) * sc_bigint<16>(mul_ln1118_868_fu_1410_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_869_fu_1359_p1() {
    mul_ln1118_869_fu_1359_p1 =  (sc_lv<16>) (sext_ln1118_1008_fu_981236_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_869_fu_1359_p2() {
    mul_ln1118_869_fu_1359_p2 = (!ap_const_lv23_7FFFCF.is_01() || !mul_ln1118_869_fu_1359_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCF) * sc_bigint<16>(mul_ln1118_869_fu_1359_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_870_fu_1322_p1() {
    mul_ln1118_870_fu_1322_p1 =  (sc_lv<16>) (sext_ln1118_1003_fu_981205_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_870_fu_1322_p2() {
    mul_ln1118_870_fu_1322_p2 = (!ap_const_lv25_C2.is_01() || !mul_ln1118_870_fu_1322_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_C2) * sc_bigint<16>(mul_ln1118_870_fu_1322_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_871_fu_1285_p1() {
    mul_ln1118_871_fu_1285_p1 =  (sc_lv<16>) (sext_ln1118_1003_fu_981205_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_871_fu_1285_p2() {
    mul_ln1118_871_fu_1285_p2 = (!ap_const_lv25_1FFFF63.is_01() || !mul_ln1118_871_fu_1285_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF63) * sc_bigint<16>(mul_ln1118_871_fu_1285_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_872_fu_1248_p1() {
    mul_ln1118_872_fu_1248_p1 =  (sc_lv<16>) (sext_ln1118_1002_fu_981195_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_872_fu_1248_p2() {
    mul_ln1118_872_fu_1248_p2 = (!ap_const_lv24_FFFF9E.is_01() || !mul_ln1118_872_fu_1248_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF9E) * sc_bigint<16>(mul_ln1118_872_fu_1248_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_873_fu_1239_p1() {
    mul_ln1118_873_fu_1239_p1 =  (sc_lv<16>) (sext_ln1118_1008_fu_981236_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_873_fu_1239_p2() {
    mul_ln1118_873_fu_1239_p2 = (!ap_const_lv23_7FFFDB.is_01() || !mul_ln1118_873_fu_1239_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFDB) * sc_bigint<16>(mul_ln1118_873_fu_1239_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_874_fu_1635_p1() {
    mul_ln1118_874_fu_1635_p1 =  (sc_lv<16>) (sext_ln1118_1003_fu_981205_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_874_fu_1635_p2() {
    mul_ln1118_874_fu_1635_p2 = (!ap_const_lv25_D1.is_01() || !mul_ln1118_874_fu_1635_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_D1) * sc_bigint<16>(mul_ln1118_874_fu_1635_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_875_fu_1612_p1() {
    mul_ln1118_875_fu_1612_p1 =  (sc_lv<16>) (sext_ln1118_1001_fu_981186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_875_fu_1612_p2() {
    mul_ln1118_875_fu_1612_p2 = (!ap_const_lv26_3FFFEBD.is_01() || !mul_ln1118_875_fu_1612_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEBD) * sc_bigint<16>(mul_ln1118_875_fu_1612_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_876_fu_1575_p1() {
    mul_ln1118_876_fu_1575_p1 =  (sc_lv<16>) (sext_ln1118_1002_fu_981195_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_876_fu_1575_p2() {
    mul_ln1118_876_fu_1575_p2 = (!ap_const_lv24_FFFFA7.is_01() || !mul_ln1118_876_fu_1575_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA7) * sc_bigint<16>(mul_ln1118_876_fu_1575_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_877_fu_1524_p1() {
    mul_ln1118_877_fu_1524_p1 =  (sc_lv<16>) (sext_ln1118_1003_fu_981205_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_877_fu_1524_p2() {
    mul_ln1118_877_fu_1524_p2 = (!ap_const_lv25_CA.is_01() || !mul_ln1118_877_fu_1524_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_CA) * sc_bigint<16>(mul_ln1118_877_fu_1524_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_878_fu_1501_p1() {
    mul_ln1118_878_fu_1501_p1 =  (sc_lv<16>) (sext_ln1118_1002_fu_981195_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_878_fu_1501_p2() {
    mul_ln1118_878_fu_1501_p2 = (!ap_const_lv24_5C.is_01() || !mul_ln1118_878_fu_1501_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5C) * sc_bigint<16>(mul_ln1118_878_fu_1501_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_879_fu_1450_p1() {
    mul_ln1118_879_fu_1450_p1 =  (sc_lv<16>) (sext_ln1118_1008_fu_981236_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_879_fu_1450_p2() {
    mul_ln1118_879_fu_1450_p2 = (!ap_const_lv23_2E.is_01() || !mul_ln1118_879_fu_1450_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_2E) * sc_bigint<16>(mul_ln1118_879_fu_1450_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_880_fu_1427_p1() {
    mul_ln1118_880_fu_1427_p1 =  (sc_lv<16>) (sext_ln1118_1008_fu_981236_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_880_fu_1427_p2() {
    mul_ln1118_880_fu_1427_p2 = (!ap_const_lv23_27.is_01() || !mul_ln1118_880_fu_1427_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_27) * sc_bigint<16>(mul_ln1118_880_fu_1427_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_881_fu_1390_p1() {
    mul_ln1118_881_fu_1390_p1 =  (sc_lv<16>) (sext_ln1118_1001_fu_981186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_881_fu_1390_p2() {
    mul_ln1118_881_fu_1390_p2 = (!ap_const_lv26_3FFFEF2.is_01() || !mul_ln1118_881_fu_1390_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEF2) * sc_bigint<16>(mul_ln1118_881_fu_1390_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_882_fu_1216_p1() {
    mul_ln1118_882_fu_1216_p1 =  (sc_lv<16>) (sext_ln1118_1002_fu_981195_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_882_fu_1216_p2() {
    mul_ln1118_882_fu_1216_p2 = (!ap_const_lv24_57.is_01() || !mul_ln1118_882_fu_1216_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_57) * sc_bigint<16>(mul_ln1118_882_fu_1216_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_883_fu_1331_p1() {
    mul_ln1118_883_fu_1331_p1 =  (sc_lv<16>) (sext_ln1118_1003_fu_981205_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_883_fu_1331_p2() {
    mul_ln1118_883_fu_1331_p2 = (!ap_const_lv25_98.is_01() || !mul_ln1118_883_fu_1331_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_98) * sc_bigint<16>(mul_ln1118_883_fu_1331_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_884_fu_1332_p1() {
    mul_ln1118_884_fu_1332_p1 =  (sc_lv<16>) (sext_ln1118_1006_fu_981225_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_884_fu_1332_p2() {
    mul_ln1118_884_fu_1332_p2 = (!ap_const_lv22_1D.is_01() || !mul_ln1118_884_fu_1332_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_1D) * sc_bigint<16>(mul_ln1118_884_fu_1332_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_885_fu_1162_p1() {
    mul_ln1118_885_fu_1162_p1 =  (sc_lv<16>) (sext_ln1118_1001_fu_981186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_885_fu_1162_p2() {
    mul_ln1118_885_fu_1162_p2 = (!ap_const_lv26_138.is_01() || !mul_ln1118_885_fu_1162_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_138) * sc_bigint<16>(mul_ln1118_885_fu_1162_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_886_fu_1448_p1() {
    mul_ln1118_886_fu_1448_p1 =  (sc_lv<16>) (sext_ln1118_1001_fu_981186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_886_fu_1448_p2() {
    mul_ln1118_886_fu_1448_p2 = (!ap_const_lv26_132.is_01() || !mul_ln1118_886_fu_1448_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_132) * sc_bigint<16>(mul_ln1118_886_fu_1448_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_887_fu_1415_p1() {
    mul_ln1118_887_fu_1415_p1 =  (sc_lv<16>) (sext_ln1118_1001_fu_981186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_887_fu_1415_p2() {
    mul_ln1118_887_fu_1415_p2 = (!ap_const_lv26_3FFFEE2.is_01() || !mul_ln1118_887_fu_1415_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEE2) * sc_bigint<16>(mul_ln1118_887_fu_1415_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_888_fu_1620_p1() {
    mul_ln1118_888_fu_1620_p1 =  (sc_lv<16>) (sext_ln1118_1002_fu_981195_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_888_fu_1620_p2() {
    mul_ln1118_888_fu_1620_p2 = (!ap_const_lv24_62.is_01() || !mul_ln1118_888_fu_1620_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_62) * sc_bigint<16>(mul_ln1118_888_fu_1620_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_889_fu_1613_p1() {
    mul_ln1118_889_fu_1613_p1 =  (sc_lv<16>) (sext_ln1118_1008_fu_981236_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_889_fu_1613_p2() {
    mul_ln1118_889_fu_1613_p2 = (!ap_const_lv23_7FFFCA.is_01() || !mul_ln1118_889_fu_1613_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCA) * sc_bigint<16>(mul_ln1118_889_fu_1613_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_890_fu_1433_p1() {
    mul_ln1118_890_fu_1433_p1 =  (sc_lv<16>) (sext_ln1118_1003_fu_981205_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_890_fu_1433_p2() {
    mul_ln1118_890_fu_1433_p2 = (!ap_const_lv25_1FFFF65.is_01() || !mul_ln1118_890_fu_1433_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF65) * sc_bigint<16>(mul_ln1118_890_fu_1433_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_891_fu_1268_p1() {
    mul_ln1118_891_fu_1268_p1 =  (sc_lv<16>) (sext_ln1118_1003_fu_981205_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_891_fu_1268_p2() {
    mul_ln1118_891_fu_1268_p2 = (!ap_const_lv25_1FFFF3E.is_01() || !mul_ln1118_891_fu_1268_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF3E) * sc_bigint<16>(mul_ln1118_891_fu_1268_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_892_fu_1420_p1() {
    mul_ln1118_892_fu_1420_p1 =  (sc_lv<16>) (sext_ln1118_1002_fu_981195_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_892_fu_1420_p2() {
    mul_ln1118_892_fu_1420_p2 = (!ap_const_lv24_FFFF8D.is_01() || !mul_ln1118_892_fu_1420_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF8D) * sc_bigint<16>(mul_ln1118_892_fu_1420_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_893_fu_1617_p1() {
    mul_ln1118_893_fu_1617_p1 =  (sc_lv<16>) (sext_ln1118_1008_fu_981236_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_893_fu_1617_p2() {
    mul_ln1118_893_fu_1617_p2 = (!ap_const_lv23_36.is_01() || !mul_ln1118_893_fu_1617_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_36) * sc_bigint<16>(mul_ln1118_893_fu_1617_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_894_fu_1271_p1() {
    mul_ln1118_894_fu_1271_p1 =  (sc_lv<16>) (sext_ln1118_1006_fu_981225_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_894_fu_1271_p2() {
    mul_ln1118_894_fu_1271_p2 = (!ap_const_lv22_3FFFE3.is_01() || !mul_ln1118_894_fu_1271_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFE3) * sc_bigint<16>(mul_ln1118_894_fu_1271_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_895_fu_1257_p1() {
    mul_ln1118_895_fu_1257_p1 =  (sc_lv<16>) (sext_ln1118_1024_fu_982173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_895_fu_1257_p2() {
    mul_ln1118_895_fu_1257_p2 = (!ap_const_lv25_1FFFF46.is_01() || !mul_ln1118_895_fu_1257_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF46) * sc_bigint<16>(mul_ln1118_895_fu_1257_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_896_fu_1188_p1() {
    mul_ln1118_896_fu_1188_p1 =  (sc_lv<16>) (sext_ln1118_1023_fu_982164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_896_fu_1188_p2() {
    mul_ln1118_896_fu_1188_p2 = (!ap_const_lv24_FFFFA1.is_01() || !mul_ln1118_896_fu_1188_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA1) * sc_bigint<16>(mul_ln1118_896_fu_1188_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_897_fu_1151_p1() {
    mul_ln1118_897_fu_1151_p1 =  (sc_lv<16>) (sext_ln1118_1023_fu_982164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_897_fu_1151_p2() {
    mul_ln1118_897_fu_1151_p2 = (!ap_const_lv24_FFFF91.is_01() || !mul_ln1118_897_fu_1151_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF91) * sc_bigint<16>(mul_ln1118_897_fu_1151_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_898_fu_1603_p1() {
    mul_ln1118_898_fu_1603_p1 =  (sc_lv<16>) (sext_ln1118_1024_fu_982173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_898_fu_1603_p2() {
    mul_ln1118_898_fu_1603_p2 = (!ap_const_lv25_1FFFF07.is_01() || !mul_ln1118_898_fu_1603_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF07) * sc_bigint<16>(mul_ln1118_898_fu_1603_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_899_fu_1566_p1() {
    mul_ln1118_899_fu_1566_p1 =  (sc_lv<16>) (sext_ln1118_1022_fu_982150_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_899_fu_1566_p2() {
    mul_ln1118_899_fu_1566_p2 = (!ap_const_lv23_23.is_01() || !mul_ln1118_899_fu_1566_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_23) * sc_bigint<16>(mul_ln1118_899_fu_1566_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_900_fu_1543_p1() {
    mul_ln1118_900_fu_1543_p1 =  (sc_lv<16>) (sext_ln1118_1022_fu_982150_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_900_fu_1543_p2() {
    mul_ln1118_900_fu_1543_p2 = (!ap_const_lv23_7FFFDA.is_01() || !mul_ln1118_900_fu_1543_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFDA) * sc_bigint<16>(mul_ln1118_900_fu_1543_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_901_fu_1506_p1() {
    mul_ln1118_901_fu_1506_p1 =  (sc_lv<16>) (sext_ln1118_1024_fu_982173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_901_fu_1506_p2() {
    mul_ln1118_901_fu_1506_p2 = (!ap_const_lv25_89.is_01() || !mul_ln1118_901_fu_1506_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_89) * sc_bigint<16>(mul_ln1118_901_fu_1506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_902_fu_1455_p1() {
    mul_ln1118_902_fu_1455_p1 =  (sc_lv<16>) (sext_ln1118_1023_fu_982164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_902_fu_1455_p2() {
    mul_ln1118_902_fu_1455_p2 = (!ap_const_lv24_FFFFA8.is_01() || !mul_ln1118_902_fu_1455_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA8) * sc_bigint<16>(mul_ln1118_902_fu_1455_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_903_fu_1404_p1() {
    mul_ln1118_903_fu_1404_p1 =  (sc_lv<16>) (sext_ln1118_1021_fu_982142_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_903_fu_1404_p2() {
    mul_ln1118_903_fu_1404_p2 = (!ap_const_lv26_3FFFE18.is_01() || !mul_ln1118_903_fu_1404_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE18) * sc_bigint<16>(mul_ln1118_903_fu_1404_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_904_fu_1395_p1() {
    mul_ln1118_904_fu_1395_p1 =  (sc_lv<16>) (sext_ln1118_1024_fu_982173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_904_fu_1395_p2() {
    mul_ln1118_904_fu_1395_p2 = (!ap_const_lv25_BF.is_01() || !mul_ln1118_904_fu_1395_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_BF) * sc_bigint<16>(mul_ln1118_904_fu_1395_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_905_fu_1372_p1() {
    mul_ln1118_905_fu_1372_p1 =  (sc_lv<16>) (sext_ln1118_1022_fu_982150_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_905_fu_1372_p2() {
    mul_ln1118_905_fu_1372_p2 = (!ap_const_lv23_3B.is_01() || !mul_ln1118_905_fu_1372_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_3B) * sc_bigint<16>(mul_ln1118_905_fu_1372_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_906_fu_1321_p1() {
    mul_ln1118_906_fu_1321_p1 =  (sc_lv<16>) (sext_ln1118_1022_fu_982150_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_906_fu_1321_p2() {
    mul_ln1118_906_fu_1321_p2 = (!ap_const_lv23_2F.is_01() || !mul_ln1118_906_fu_1321_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_2F) * sc_bigint<16>(mul_ln1118_906_fu_1321_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_907_fu_1382_p1() {
    mul_ln1118_907_fu_1382_p1 =  (sc_lv<16>) (sext_ln1118_1021_fu_982142_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_907_fu_1382_p2() {
    mul_ln1118_907_fu_1382_p2 = (!ap_const_lv26_3FFFD5C.is_01() || !mul_ln1118_907_fu_1382_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFD5C) * sc_bigint<16>(mul_ln1118_907_fu_1382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_908_fu_1247_p1() {
    mul_ln1118_908_fu_1247_p1 =  (sc_lv<16>) (sext_ln1118_1024_fu_982173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_908_fu_1247_p2() {
    mul_ln1118_908_fu_1247_p2 = (!ap_const_lv25_CB.is_01() || !mul_ln1118_908_fu_1247_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_CB) * sc_bigint<16>(mul_ln1118_908_fu_1247_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_909_fu_1391_p1() {
    mul_ln1118_909_fu_1391_p1 =  (sc_lv<16>) (sext_ln1118_1022_fu_982150_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_909_fu_1391_p2() {
    mul_ln1118_909_fu_1391_p2 = (!ap_const_lv23_7FFFD5.is_01() || !mul_ln1118_909_fu_1391_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD5) * sc_bigint<16>(mul_ln1118_909_fu_1391_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_910_fu_1221_p1() {
    mul_ln1118_910_fu_1221_p1 =  (sc_lv<16>) (sext_ln1118_1024_fu_982173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_910_fu_1221_p2() {
    mul_ln1118_910_fu_1221_p2 = (!ap_const_lv25_8F.is_01() || !mul_ln1118_910_fu_1221_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_8F) * sc_bigint<16>(mul_ln1118_910_fu_1221_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_911_fu_1507_p1() {
    mul_ln1118_911_fu_1507_p1 =  (sc_lv<16>) (sext_ln1118_1022_fu_982150_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_911_fu_1507_p2() {
    mul_ln1118_911_fu_1507_p2 = (!ap_const_lv23_7FFFC5.is_01() || !mul_ln1118_911_fu_1507_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFC5) * sc_bigint<16>(mul_ln1118_911_fu_1507_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_912_fu_1394_p1() {
    mul_ln1118_912_fu_1394_p1 =  (sc_lv<16>) (sext_ln1118_1021_fu_982142_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_912_fu_1394_p2() {
    mul_ln1118_912_fu_1394_p2 = (!ap_const_lv26_3FFFEE9.is_01() || !mul_ln1118_912_fu_1394_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEE9) * sc_bigint<16>(mul_ln1118_912_fu_1394_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_913_fu_1167_p1() {
    mul_ln1118_913_fu_1167_p1 =  (sc_lv<16>) (sext_ln1118_1024_fu_982173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_913_fu_1167_p2() {
    mul_ln1118_913_fu_1167_p2 = (!ap_const_lv25_1FFFF1C.is_01() || !mul_ln1118_913_fu_1167_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF1C) * sc_bigint<16>(mul_ln1118_913_fu_1167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_914_fu_1225_p1() {
    mul_ln1118_914_fu_1225_p1 =  (sc_lv<16>) (sext_ln1118_1024_fu_982173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_914_fu_1225_p2() {
    mul_ln1118_914_fu_1225_p2 = (!ap_const_lv25_96.is_01() || !mul_ln1118_914_fu_1225_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_96) * sc_bigint<16>(mul_ln1118_914_fu_1225_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_915_fu_1626_p1() {
    mul_ln1118_915_fu_1626_p1 =  (sc_lv<16>) (sext_ln1118_1024_fu_982173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_915_fu_1626_p2() {
    mul_ln1118_915_fu_1626_p2 = (!ap_const_lv25_85.is_01() || !mul_ln1118_915_fu_1626_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_85) * sc_bigint<16>(mul_ln1118_915_fu_1626_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_916_fu_1454_p1() {
    mul_ln1118_916_fu_1454_p1 =  (sc_lv<16>) (sext_ln1118_1023_fu_982164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_916_fu_1454_p2() {
    mul_ln1118_916_fu_1454_p2 = (!ap_const_lv24_4C.is_01() || !mul_ln1118_916_fu_1454_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4C) * sc_bigint<16>(mul_ln1118_916_fu_1454_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_917_fu_1628_p1() {
    mul_ln1118_917_fu_1628_p1 =  (sc_lv<16>) (sext_ln1118_1022_fu_982150_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_917_fu_1628_p2() {
    mul_ln1118_917_fu_1628_p2 = (!ap_const_lv23_7FFFC3.is_01() || !mul_ln1118_917_fu_1628_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFC3) * sc_bigint<16>(mul_ln1118_917_fu_1628_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_918_fu_1282_p1() {
    mul_ln1118_918_fu_1282_p1 =  (sc_lv<16>) (sext_ln1118_1022_fu_982150_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_918_fu_1282_p2() {
    mul_ln1118_918_fu_1282_p2 = (!ap_const_lv23_7FFFC7.is_01() || !mul_ln1118_918_fu_1282_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFC7) * sc_bigint<16>(mul_ln1118_918_fu_1282_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_919_fu_1630_p1() {
    mul_ln1118_919_fu_1630_p1 =  (sc_lv<16>) (sext_ln1118_1023_fu_982164_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_919_fu_1630_p2() {
    mul_ln1118_919_fu_1630_p2 = (!ap_const_lv24_FFFF86.is_01() || !mul_ln1118_919_fu_1630_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF86) * sc_bigint<16>(mul_ln1118_919_fu_1630_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_920_fu_1465_p1() {
    mul_ln1118_920_fu_1465_p1 =  (sc_lv<16>) (sext_ln1118_1022_fu_982150_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_920_fu_1465_p2() {
    mul_ln1118_920_fu_1465_p2 = (!ap_const_lv23_2D.is_01() || !mul_ln1118_920_fu_1465_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_2D) * sc_bigint<16>(mul_ln1118_920_fu_1465_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_921_fu_1436_p1() {
    mul_ln1118_921_fu_1436_p1 =  (sc_lv<16>) (sext_ln1118_1021_fu_982142_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_921_fu_1436_p2() {
    mul_ln1118_921_fu_1436_p2 = (!ap_const_lv26_10C.is_01() || !mul_ln1118_921_fu_1436_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_10C) * sc_bigint<16>(mul_ln1118_921_fu_1436_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_922_fu_1633_p1() {
    mul_ln1118_922_fu_1633_p1 =  (sc_lv<16>) (sext_ln1118_1024_fu_982173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_922_fu_1633_p2() {
    mul_ln1118_922_fu_1633_p2 = (!ap_const_lv25_A5.is_01() || !mul_ln1118_922_fu_1633_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_A5) * sc_bigint<16>(mul_ln1118_922_fu_1633_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_923_fu_1520_p1() {
    mul_ln1118_923_fu_1520_p1 =  (sc_lv<16>) (sext_ln1118_1022_fu_982150_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_923_fu_1520_p2() {
    mul_ln1118_923_fu_1520_p2 = (!ap_const_lv23_7FFFD3.is_01() || !mul_ln1118_923_fu_1520_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD3) * sc_bigint<16>(mul_ln1118_923_fu_1520_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_924_fu_1469_p1() {
    mul_ln1118_924_fu_1469_p1 =  (sc_lv<16>) (sext_ln1118_1049_fu_983219_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_924_fu_1469_p2() {
    mul_ln1118_924_fu_1469_p2 = (!ap_const_lv21_1FFFF5.is_01() || !mul_ln1118_924_fu_1469_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF5) * sc_bigint<16>(mul_ln1118_924_fu_1469_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_925_fu_1446_p1() {
    mul_ln1118_925_fu_1446_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_925_fu_1446_p2() {
    mul_ln1118_925_fu_1446_p2 = (!ap_const_lv24_FFFFBB.is_01() || !mul_ln1118_925_fu_1446_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFBB) * sc_bigint<16>(mul_ln1118_925_fu_1446_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_926_fu_1409_p1() {
    mul_ln1118_926_fu_1409_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_926_fu_1409_p2() {
    mul_ln1118_926_fu_1409_p2 = (!ap_const_lv24_68.is_01() || !mul_ln1118_926_fu_1409_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_68) * sc_bigint<16>(mul_ln1118_926_fu_1409_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_927_fu_1414_p1() {
    mul_ln1118_927_fu_1414_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_927_fu_1414_p2() {
    mul_ln1118_927_fu_1414_p2 = (!ap_const_lv24_FFFFB6.is_01() || !mul_ln1118_927_fu_1414_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB6) * sc_bigint<16>(mul_ln1118_927_fu_1414_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_928_fu_1335_p1() {
    mul_ln1118_928_fu_1335_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_928_fu_1335_p2() {
    mul_ln1118_928_fu_1335_p2 = (!ap_const_lv24_4C.is_01() || !mul_ln1118_928_fu_1335_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4C) * sc_bigint<16>(mul_ln1118_928_fu_1335_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_929_fu_1312_p1() {
    mul_ln1118_929_fu_1312_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_929_fu_1312_p2() {
    mul_ln1118_929_fu_1312_p2 = (!ap_const_lv24_49.is_01() || !mul_ln1118_929_fu_1312_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_49) * sc_bigint<16>(mul_ln1118_929_fu_1312_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_930_fu_1275_p1() {
    mul_ln1118_930_fu_1275_p1 =  (sc_lv<16>) (sext_ln1118_1049_fu_983219_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_930_fu_1275_p2() {
    mul_ln1118_930_fu_1275_p2 = (!ap_const_lv21_1FFFF3.is_01() || !mul_ln1118_930_fu_1275_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(mul_ln1118_930_fu_1275_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_931_fu_1210_p1() {
    mul_ln1118_931_fu_1210_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_931_fu_1210_p2() {
    mul_ln1118_931_fu_1210_p2 = (!ap_const_lv24_FFFFB9.is_01() || !mul_ln1118_931_fu_1210_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB9) * sc_bigint<16>(mul_ln1118_931_fu_1210_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_932_fu_1201_p1() {
    mul_ln1118_932_fu_1201_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_932_fu_1201_p2() {
    mul_ln1118_932_fu_1201_p2 = (!ap_const_lv24_FFFFB1.is_01() || !mul_ln1118_932_fu_1201_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB1) * sc_bigint<16>(mul_ln1118_932_fu_1201_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_933_fu_1625_p1() {
    mul_ln1118_933_fu_1625_p1 =  (sc_lv<16>) (sext_ln1118_1044_fu_983180_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_933_fu_1625_p2() {
    mul_ln1118_933_fu_1625_p2 = (!ap_const_lv26_3FFFE8B.is_01() || !mul_ln1118_933_fu_1625_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE8B) * sc_bigint<16>(mul_ln1118_933_fu_1625_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_934_fu_1602_p1() {
    mul_ln1118_934_fu_1602_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_934_fu_1602_p2() {
    mul_ln1118_934_fu_1602_p2 = (!ap_const_lv24_FFFF9C.is_01() || !mul_ln1118_934_fu_1602_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF9C) * sc_bigint<16>(mul_ln1118_934_fu_1602_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_935_fu_1551_p1() {
    mul_ln1118_935_fu_1551_p1 =  (sc_lv<16>) (sext_ln1118_1043_fu_983169_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_935_fu_1551_p2() {
    mul_ln1118_935_fu_1551_p2 = (!ap_const_lv25_1FFFF6C.is_01() || !mul_ln1118_935_fu_1551_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF6C) * sc_bigint<16>(mul_ln1118_935_fu_1551_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_936_fu_1528_p1() {
    mul_ln1118_936_fu_1528_p1 =  (sc_lv<16>) (sext_ln1118_1044_fu_983180_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_936_fu_1528_p2() {
    mul_ln1118_936_fu_1528_p2 = (!ap_const_lv26_3FFFEF7.is_01() || !mul_ln1118_936_fu_1528_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEF7) * sc_bigint<16>(mul_ln1118_936_fu_1528_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_937_fu_1581_p1() {
    mul_ln1118_937_fu_1581_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_937_fu_1581_p2() {
    mul_ln1118_937_fu_1581_p2 = (!ap_const_lv24_67.is_01() || !mul_ln1118_937_fu_1581_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_67) * sc_bigint<16>(mul_ln1118_937_fu_1581_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_938_fu_1411_p1() {
    mul_ln1118_938_fu_1411_p1 =  (sc_lv<16>) (sext_ln1118_1049_fu_983219_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_938_fu_1411_p2() {
    mul_ln1118_938_fu_1411_p2 = (!ap_const_lv21_D.is_01() || !mul_ln1118_938_fu_1411_p1.read().is_01())? sc_lv<21>(): sc_biguint<21>(ap_const_lv21_D) * sc_bigint<16>(mul_ln1118_938_fu_1411_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_939_fu_1298_p1() {
    mul_ln1118_939_fu_1298_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_939_fu_1298_p2() {
    mul_ln1118_939_fu_1298_p2 = (!ap_const_lv24_FFFF9B.is_01() || !mul_ln1118_939_fu_1298_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF9B) * sc_bigint<16>(mul_ln1118_939_fu_1298_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_940_fu_1242_p1() {
    mul_ln1118_940_fu_1242_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_940_fu_1242_p2() {
    mul_ln1118_940_fu_1242_p2 = (!ap_const_lv24_FFFFB7.is_01() || !mul_ln1118_940_fu_1242_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB7) * sc_bigint<16>(mul_ln1118_940_fu_1242_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_941_fu_1286_p1() {
    mul_ln1118_941_fu_1286_p1 =  (sc_lv<16>) (sext_ln1118_1043_fu_983169_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_941_fu_1286_p2() {
    mul_ln1118_941_fu_1286_p2 = (!ap_const_lv25_86.is_01() || !mul_ln1118_941_fu_1286_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_86) * sc_bigint<16>(mul_ln1118_941_fu_1286_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_942_fu_1301_p1() {
    mul_ln1118_942_fu_1301_p1 =  (sc_lv<16>) (sext_ln1118_1043_fu_983169_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_942_fu_1301_p2() {
    mul_ln1118_942_fu_1301_p2 = (!ap_const_lv25_1FFFF7B.is_01() || !mul_ln1118_942_fu_1301_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF7B) * sc_bigint<16>(mul_ln1118_942_fu_1301_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_943_fu_1641_p1() {
    mul_ln1118_943_fu_1641_p1 =  (sc_lv<16>) (sext_ln1118_1049_fu_983219_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_943_fu_1641_p2() {
    mul_ln1118_943_fu_1641_p2 = (!ap_const_lv21_B.is_01() || !mul_ln1118_943_fu_1641_p1.read().is_01())? sc_lv<21>(): sc_biguint<21>(ap_const_lv21_B) * sc_bigint<16>(mul_ln1118_943_fu_1641_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_944_fu_1431_p1() {
    mul_ln1118_944_fu_1431_p1 =  (sc_lv<16>) (sext_ln1118_1043_fu_983169_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_944_fu_1431_p2() {
    mul_ln1118_944_fu_1431_p2 = (!ap_const_lv25_AC.is_01() || !mul_ln1118_944_fu_1431_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_AC) * sc_bigint<16>(mul_ln1118_944_fu_1431_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_945_fu_1643_p1() {
    mul_ln1118_945_fu_1643_p1 =  (sc_lv<16>) (sext_ln1118_1046_fu_983202_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_945_fu_1643_p2() {
    mul_ln1118_945_fu_1643_p2 = (!ap_const_lv23_2A.is_01() || !mul_ln1118_945_fu_1643_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_2A) * sc_bigint<16>(mul_ln1118_945_fu_1643_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_946_fu_1644_p1() {
    mul_ln1118_946_fu_1644_p1 =  (sc_lv<16>) (sext_ln1118_1043_fu_983169_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_946_fu_1644_p2() {
    mul_ln1118_946_fu_1644_p2 = (!ap_const_lv25_1FFFF1B.is_01() || !mul_ln1118_946_fu_1644_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF1B) * sc_bigint<16>(mul_ln1118_946_fu_1644_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_947_fu_1645_p1() {
    mul_ln1118_947_fu_1645_p1 =  (sc_lv<16>) (sext_ln1118_1046_fu_983202_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_947_fu_1645_p2() {
    mul_ln1118_947_fu_1645_p2 = (!ap_const_lv23_35.is_01() || !mul_ln1118_947_fu_1645_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_35) * sc_bigint<16>(mul_ln1118_947_fu_1645_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_948_fu_1284_p1() {
    mul_ln1118_948_fu_1284_p1 =  (sc_lv<16>) (sext_ln1118_1043_fu_983169_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_948_fu_1284_p2() {
    mul_ln1118_948_fu_1284_p2 = (!ap_const_lv25_B0.is_01() || !mul_ln1118_948_fu_1284_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_B0) * sc_bigint<16>(mul_ln1118_948_fu_1284_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_949_fu_1300_p1() {
    mul_ln1118_949_fu_1300_p1 =  (sc_lv<16>) (sext_ln1118_1048_fu_983213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_949_fu_1300_p2() {
    mul_ln1118_949_fu_1300_p2 = (!ap_const_lv22_19.is_01() || !mul_ln1118_949_fu_1300_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_19) * sc_bigint<16>(mul_ln1118_949_fu_1300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_950_fu_1482_p1() {
    mul_ln1118_950_fu_1482_p1 =  (sc_lv<16>) (sext_ln1118_1048_fu_983213_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_950_fu_1482_p2() {
    mul_ln1118_950_fu_1482_p2 = (!ap_const_lv22_3FFFED.is_01() || !mul_ln1118_950_fu_1482_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFED) * sc_bigint<16>(mul_ln1118_950_fu_1482_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_951_fu_1326_p1() {
    mul_ln1118_951_fu_1326_p1 =  (sc_lv<16>) (sext_ln1118_1046_fu_983202_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_951_fu_1326_p2() {
    mul_ln1118_951_fu_1326_p2 = (!ap_const_lv23_7FFFD1.is_01() || !mul_ln1118_951_fu_1326_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD1) * sc_bigint<16>(mul_ln1118_951_fu_1326_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_952_fu_1303_p1() {
    mul_ln1118_952_fu_1303_p1 =  (sc_lv<16>) (sext_ln1118_1043_fu_983169_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_952_fu_1303_p2() {
    mul_ln1118_952_fu_1303_p2 = (!ap_const_lv25_1FFFF42.is_01() || !mul_ln1118_952_fu_1303_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF42) * sc_bigint<16>(mul_ln1118_952_fu_1303_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_953_fu_1280_p1() {
    mul_ln1118_953_fu_1280_p1 =  (sc_lv<16>) (sext_ln1118_1045_fu_983186_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_953_fu_1280_p2() {
    mul_ln1118_953_fu_1280_p2 = (!ap_const_lv24_FFFFB2.is_01() || !mul_ln1118_953_fu_1280_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB2) * sc_bigint<16>(mul_ln1118_953_fu_1280_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_954_fu_1215_p1() {
    mul_ln1118_954_fu_1215_p1 =  (sc_lv<16>) (sext_ln1118_1066_fu_984255_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_954_fu_1215_p2() {
    mul_ln1118_954_fu_1215_p2 = (!ap_const_lv26_3FFFED2.is_01() || !mul_ln1118_954_fu_1215_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFED2) * sc_bigint<16>(mul_ln1118_954_fu_1215_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_955_fu_1639_p1() {
    mul_ln1118_955_fu_1639_p1 =  (sc_lv<16>) (sext_ln1118_1066_fu_984255_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_955_fu_1639_p2() {
    mul_ln1118_955_fu_1639_p2 = (!ap_const_lv26_13C.is_01() || !mul_ln1118_955_fu_1639_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_13C) * sc_bigint<16>(mul_ln1118_955_fu_1639_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_956_fu_1616_p1() {
    mul_ln1118_956_fu_1616_p1 =  (sc_lv<16>) (sext_ln1118_1071_fu_984287_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_956_fu_1616_p2() {
    mul_ln1118_956_fu_1616_p2 = (!ap_const_lv25_1FFFF33.is_01() || !mul_ln1118_956_fu_1616_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF33) * sc_bigint<16>(mul_ln1118_956_fu_1616_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_957_fu_1579_p1() {
    mul_ln1118_957_fu_1579_p1 =  (sc_lv<16>) (sext_ln1118_1072_fu_984300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_957_fu_1579_p2() {
    mul_ln1118_957_fu_1579_p2 = (!ap_const_lv23_2E.is_01() || !mul_ln1118_957_fu_1579_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_2E) * sc_bigint<16>(mul_ln1118_957_fu_1579_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_958_fu_1542_p1() {
    mul_ln1118_958_fu_1542_p1 =  (sc_lv<16>) (sext_ln1118_1073_fu_984310_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_958_fu_1542_p2() {
    mul_ln1118_958_fu_1542_p2 = (!ap_const_lv22_19.is_01() || !mul_ln1118_958_fu_1542_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_19) * sc_bigint<16>(mul_ln1118_958_fu_1542_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_959_fu_1519_p1() {
    mul_ln1118_959_fu_1519_p1 =  (sc_lv<16>) (sext_ln1118_1071_fu_984287_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_959_fu_1519_p2() {
    mul_ln1118_959_fu_1519_p2 = (!ap_const_lv25_E5.is_01() || !mul_ln1118_959_fu_1519_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_E5) * sc_bigint<16>(mul_ln1118_959_fu_1519_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_960_fu_1468_p1() {
    mul_ln1118_960_fu_1468_p1 =  (sc_lv<16>) (sext_ln1118_1068_fu_984270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_960_fu_1468_p2() {
    mul_ln1118_960_fu_1468_p2 = (!ap_const_lv24_6F.is_01() || !mul_ln1118_960_fu_1468_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_6F) * sc_bigint<16>(mul_ln1118_960_fu_1468_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_961_fu_1417_p1() {
    mul_ln1118_961_fu_1417_p1 =  (sc_lv<16>) (sext_ln1118_1066_fu_984255_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_961_fu_1417_p2() {
    mul_ln1118_961_fu_1417_p2 = (!ap_const_lv26_111.is_01() || !mul_ln1118_961_fu_1417_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_111) * sc_bigint<16>(mul_ln1118_961_fu_1417_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_962_fu_1218_p1() {
    mul_ln1118_962_fu_1218_p1 =  (sc_lv<16>) (sext_ln1118_1071_fu_984287_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_962_fu_1218_p2() {
    mul_ln1118_962_fu_1218_p2 = (!ap_const_lv25_1FFFF3B.is_01() || !mul_ln1118_962_fu_1218_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF3B) * sc_bigint<16>(mul_ln1118_962_fu_1218_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_963_fu_1413_p1() {
    mul_ln1118_963_fu_1413_p1 =  (sc_lv<16>) (sext_ln1118_1072_fu_984300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_963_fu_1413_p2() {
    mul_ln1118_963_fu_1413_p2 = (!ap_const_lv23_7FFFCB.is_01() || !mul_ln1118_963_fu_1413_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCB) * sc_bigint<16>(mul_ln1118_963_fu_1413_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_964_fu_1334_p1() {
    mul_ln1118_964_fu_1334_p1 =  (sc_lv<16>) (sext_ln1118_1066_fu_984255_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_964_fu_1334_p2() {
    mul_ln1118_964_fu_1334_p2 = (!ap_const_lv26_3FFFE73.is_01() || !mul_ln1118_964_fu_1334_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE73) * sc_bigint<16>(mul_ln1118_964_fu_1334_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_965_fu_1187_p1() {
    mul_ln1118_965_fu_1187_p1 =  (sc_lv<16>) (sext_ln1118_1066_fu_984255_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_965_fu_1187_p2() {
    mul_ln1118_965_fu_1187_p2 = (!ap_const_lv26_119.is_01() || !mul_ln1118_965_fu_1187_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_119) * sc_bigint<16>(mul_ln1118_965_fu_1187_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_966_fu_1245_p1() {
    mul_ln1118_966_fu_1245_p1 =  (sc_lv<16>) (sext_ln1118_1068_fu_984270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_966_fu_1245_p2() {
    mul_ln1118_966_fu_1245_p2 = (!ap_const_lv24_FFFF9E.is_01() || !mul_ln1118_966_fu_1245_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF9E) * sc_bigint<16>(mul_ln1118_966_fu_1245_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_967_fu_1531_p1() {
    mul_ln1118_967_fu_1531_p1 =  (sc_lv<16>) (sext_ln1118_1072_fu_984300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_967_fu_1531_p2() {
    mul_ln1118_967_fu_1531_p2 = (!ap_const_lv23_7FFFC7.is_01() || !mul_ln1118_967_fu_1531_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFC7) * sc_bigint<16>(mul_ln1118_967_fu_1531_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_968_fu_1475_p1() {
    mul_ln1118_968_fu_1475_p1 =  (sc_lv<16>) (sext_ln1118_1066_fu_984255_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_968_fu_1475_p2() {
    mul_ln1118_968_fu_1475_p2 = (!ap_const_lv26_3FFFE83.is_01() || !mul_ln1118_968_fu_1475_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFE83) * sc_bigint<16>(mul_ln1118_968_fu_1475_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_969_fu_1590_p1() {
    mul_ln1118_969_fu_1590_p1 =  (sc_lv<16>) (sext_ln1118_1071_fu_984287_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_969_fu_1590_p2() {
    mul_ln1118_969_fu_1590_p2 = (!ap_const_lv25_C9.is_01() || !mul_ln1118_969_fu_1590_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_C9) * sc_bigint<16>(mul_ln1118_969_fu_1590_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_970_fu_1489_p1() {
    mul_ln1118_970_fu_1489_p1 =  (sc_lv<16>) (sext_ln1118_1068_fu_984270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_970_fu_1489_p2() {
    mul_ln1118_970_fu_1489_p2 = (!ap_const_lv24_FFFFBD.is_01() || !mul_ln1118_970_fu_1489_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFBD) * sc_bigint<16>(mul_ln1118_970_fu_1489_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_971_fu_1309_p1() {
    mul_ln1118_971_fu_1309_p1 =  (sc_lv<16>) (sext_ln1118_1072_fu_984300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_971_fu_1309_p2() {
    mul_ln1118_971_fu_1309_p2 = (!ap_const_lv23_7FFFD2.is_01() || !mul_ln1118_971_fu_1309_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD2) * sc_bigint<16>(mul_ln1118_971_fu_1309_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_972_fu_1491_p1() {
    mul_ln1118_972_fu_1491_p1 =  (sc_lv<16>) (sext_ln1118_1071_fu_984287_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_972_fu_1491_p2() {
    mul_ln1118_972_fu_1491_p2 = (!ap_const_lv25_A5.is_01() || !mul_ln1118_972_fu_1491_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_A5) * sc_bigint<16>(mul_ln1118_972_fu_1491_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_973_fu_1145_p1() {
    mul_ln1118_973_fu_1145_p1 =  (sc_lv<16>) (sext_ln1118_1071_fu_984287_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_973_fu_1145_p2() {
    mul_ln1118_973_fu_1145_p2 = (!ap_const_lv25_CB.is_01() || !mul_ln1118_973_fu_1145_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_CB) * sc_bigint<16>(mul_ln1118_973_fu_1145_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_974_fu_1146_p1() {
    mul_ln1118_974_fu_1146_p1 =  (sc_lv<16>) (sext_ln1118_1072_fu_984300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_974_fu_1146_p2() {
    mul_ln1118_974_fu_1146_p2 = (!ap_const_lv23_7FFFDB.is_01() || !mul_ln1118_974_fu_1146_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFDB) * sc_bigint<16>(mul_ln1118_974_fu_1146_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_975_fu_1147_p1() {
    mul_ln1118_975_fu_1147_p1 =  (sc_lv<16>) (sext_ln1118_1068_fu_984270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_975_fu_1147_p2() {
    mul_ln1118_975_fu_1147_p2 = (!ap_const_lv24_56.is_01() || !mul_ln1118_975_fu_1147_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_56) * sc_bigint<16>(mul_ln1118_975_fu_1147_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_976_fu_1148_p1() {
    mul_ln1118_976_fu_1148_p1 =  (sc_lv<16>) (sext_ln1118_1071_fu_984287_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_976_fu_1148_p2() {
    mul_ln1118_976_fu_1148_p2 = (!ap_const_lv25_1FFFF38.is_01() || !mul_ln1118_976_fu_1148_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF38) * sc_bigint<16>(mul_ln1118_976_fu_1148_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_977_fu_1149_p1() {
    mul_ln1118_977_fu_1149_p1 =  (sc_lv<16>) (sext_ln1118_1072_fu_984300_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_977_fu_1149_p2() {
    mul_ln1118_977_fu_1149_p2 = (!ap_const_lv23_25.is_01() || !mul_ln1118_977_fu_1149_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_25) * sc_bigint<16>(mul_ln1118_977_fu_1149_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_978_fu_1150_p1() {
    mul_ln1118_978_fu_1150_p1 =  (sc_lv<16>) (sext_ln1118_1066_fu_984255_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_978_fu_1150_p2() {
    mul_ln1118_978_fu_1150_p2 = (!ap_const_lv26_12D.is_01() || !mul_ln1118_978_fu_1150_p1.read().is_01())? sc_lv<26>(): sc_biguint<26>(ap_const_lv26_12D) * sc_bigint<16>(mul_ln1118_978_fu_1150_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_979_fu_1607_p1() {
    mul_ln1118_979_fu_1607_p1 =  (sc_lv<16>) (sext_ln1118_1071_fu_984287_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_979_fu_1607_p2() {
    mul_ln1118_979_fu_1607_p2 = (!ap_const_lv25_1FFFF57.is_01() || !mul_ln1118_979_fu_1607_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF57) * sc_bigint<16>(mul_ln1118_979_fu_1607_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_980_fu_1570_p1() {
    mul_ln1118_980_fu_1570_p1 =  (sc_lv<16>) (sext_ln1118_1073_fu_984310_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_980_fu_1570_p2() {
    mul_ln1118_980_fu_1570_p2 = (!ap_const_lv22_3FFFED.is_01() || !mul_ln1118_980_fu_1570_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFED) * sc_bigint<16>(mul_ln1118_980_fu_1570_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_981_fu_1547_p1() {
    mul_ln1118_981_fu_1547_p1 =  (sc_lv<16>) (sext_ln1118_1068_fu_984270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_981_fu_1547_p2() {
    mul_ln1118_981_fu_1547_p2 = (!ap_const_lv24_64.is_01() || !mul_ln1118_981_fu_1547_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_64) * sc_bigint<16>(mul_ln1118_981_fu_1547_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_982_fu_1496_p1() {
    mul_ln1118_982_fu_1496_p1 =  (sc_lv<16>) (sext_ln1118_1071_fu_984287_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_982_fu_1496_p2() {
    mul_ln1118_982_fu_1496_p2 = (!ap_const_lv25_1FFFF4F.is_01() || !mul_ln1118_982_fu_1496_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF4F) * sc_bigint<16>(mul_ln1118_982_fu_1496_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_983_fu_1459_p1() {
    mul_ln1118_983_fu_1459_p1 =  (sc_lv<16>) (sext_ln1118_1100_fu_985364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_983_fu_1459_p2() {
    mul_ln1118_983_fu_1459_p2 = (!ap_const_lv21_D.is_01() || !mul_ln1118_983_fu_1459_p1.read().is_01())? sc_lv<21>(): sc_biguint<21>(ap_const_lv21_D) * sc_bigint<16>(mul_ln1118_983_fu_1459_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_984_fu_1422_p1() {
    mul_ln1118_984_fu_1422_p1 =  (sc_lv<16>) (sext_ln1118_1094_fu_985317_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_984_fu_1422_p2() {
    mul_ln1118_984_fu_1422_p2 = (!ap_const_lv24_FFFF98.is_01() || !mul_ln1118_984_fu_1422_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF98) * sc_bigint<16>(mul_ln1118_984_fu_1422_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_985_fu_1385_p1() {
    mul_ln1118_985_fu_1385_p1 =  (sc_lv<16>) (sext_ln1118_1099_fu_985350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_985_fu_1385_p2() {
    mul_ln1118_985_fu_1385_p2 = (!ap_const_lv25_A3.is_01() || !mul_ln1118_985_fu_1385_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_A3) * sc_bigint<16>(mul_ln1118_985_fu_1385_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_986_fu_1348_p1() {
    mul_ln1118_986_fu_1348_p1 =  (sc_lv<16>) (sext_ln1118_1099_fu_985350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_986_fu_1348_p2() {
    mul_ln1118_986_fu_1348_p2 = (!ap_const_lv25_DB.is_01() || !mul_ln1118_986_fu_1348_p1.read().is_01())? sc_lv<25>(): sc_biguint<25>(ap_const_lv25_DB) * sc_bigint<16>(mul_ln1118_986_fu_1348_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_987_fu_1325_p1() {
    mul_ln1118_987_fu_1325_p1 =  (sc_lv<16>) (sext_ln1118_1099_fu_985350_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_987_fu_1325_p2() {
    mul_ln1118_987_fu_1325_p2 = (!ap_const_lv25_1FFFF55.is_01() || !mul_ln1118_987_fu_1325_p1.read().is_01())? sc_lv<25>(): sc_bigint<25>(ap_const_lv25_1FFFF55) * sc_bigint<16>(mul_ln1118_987_fu_1325_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_988_fu_1274_p1() {
    mul_ln1118_988_fu_1274_p1 =  (sc_lv<16>) (sext_ln1118_1093_fu_985308_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_988_fu_1274_p2() {
    mul_ln1118_988_fu_1274_p2 = (!ap_const_lv26_3FFFEE7.is_01() || !mul_ln1118_988_fu_1274_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFEE7) * sc_bigint<16>(mul_ln1118_988_fu_1274_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_989_fu_1237_p1() {
    mul_ln1118_989_fu_1237_p1 =  (sc_lv<16>) (sext_ln1118_1093_fu_985308_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s::thread_mul_ln1118_989_fu_1237_p2() {
    mul_ln1118_989_fu_1237_p2 = (!ap_const_lv26_3FFFED6.is_01() || !mul_ln1118_989_fu_1237_p1.read().is_01())? sc_lv<26>(): sc_bigint<26>(ap_const_lv26_3FFFED6) * sc_bigint<16>(mul_ln1118_989_fu_1237_p1.read());
}

}

