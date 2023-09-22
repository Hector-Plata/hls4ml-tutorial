#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        acc_13_V_reg_746456 = acc_13_V_fu_742629_p2.read();
        acc_15_V_reg_746476 = acc_15_V_fu_743011_p2.read();
        acc_8_V_reg_746391 = acc_8_V_fu_741729_p2.read();
        acc_9_V_reg_746396 = acc_9_V_fu_741851_p2.read();
        add_ln703_104_reg_746321 = add_ln703_104_fu_740787_p2.read();
        add_ln703_110_reg_746326 = add_ln703_110_fu_740827_p2.read();
        add_ln703_124_reg_746331 = add_ln703_124_fu_740903_p2.read();
        add_ln703_129_reg_746336 = add_ln703_129_fu_740937_p2.read();
        add_ln703_135_reg_746341 = add_ln703_135_fu_740977_p2.read();
        add_ln703_14_reg_746271 = add_ln703_14_fu_740171_p2.read();
        add_ln703_151_reg_746346 = add_ln703_151_fu_741069_p2.read();
        add_ln703_158_reg_746351 = add_ln703_158_fu_741119_p2.read();
        add_ln703_165_reg_746356 = add_ln703_165_fu_741181_p2.read();
        add_ln703_180_reg_746361 = add_ln703_180_fu_741287_p2.read();
        add_ln703_186_reg_746366 = add_ln703_186_fu_741331_p2.read();
        add_ln703_193_reg_746371 = add_ln703_193_fu_741389_p2.read();
        add_ln703_209_reg_746376 = add_ln703_209_fu_741485_p2.read();
        add_ln703_216_reg_746381 = add_ln703_216_fu_741527_p2.read();
        add_ln703_21_reg_746276 = add_ln703_21_fu_740229_p2.read();
        add_ln703_223_reg_746386 = add_ln703_223_fu_741593_p2.read();
        add_ln703_260_reg_746401 = add_ln703_260_fu_741897_p2.read();
        add_ln703_263_reg_746406 = add_ln703_263_fu_741919_p2.read();
        add_ln703_266_reg_746411 = add_ln703_266_fu_741945_p2.read();
        add_ln703_275_reg_746416 = add_ln703_275_fu_741995_p2.read();
        add_ln703_282_reg_746421 = add_ln703_282_fu_742053_p2.read();
        add_ln703_28_reg_746281 = add_ln703_28_fu_740283_p2.read();
        add_ln703_298_reg_746426 = add_ln703_298_fu_742145_p2.read();
        add_ln703_305_reg_746431 = add_ln703_305_fu_742195_p2.read();
        add_ln703_312_reg_746436 = add_ln703_312_fu_742247_p2.read();
        add_ln703_326_reg_746441 = add_ln703_326_fu_742327_p2.read();
        add_ln703_331_reg_746446 = add_ln703_331_fu_742365_p2.read();
        add_ln703_337_reg_746451 = add_ln703_337_fu_742413_p2.read();
        add_ln703_376_reg_746461 = add_ln703_376_fu_742719_p2.read();
        add_ln703_382_reg_746466 = add_ln703_382_fu_742749_p2.read();
        add_ln703_388_reg_746471 = add_ln703_388_fu_742801_p2.read();
        add_ln703_430_reg_746481 = add_ln703_430_fu_743095_p2.read();
        add_ln703_435_reg_746486 = add_ln703_435_fu_743125_p2.read();
        add_ln703_43_reg_746286 = add_ln703_43_fu_740381_p2.read();
        add_ln703_441_reg_746491 = add_ln703_441_fu_743177_p2.read();
        add_ln703_456_reg_746496 = add_ln703_456_fu_743255_p2.read();
        add_ln703_462_reg_746501 = add_ln703_462_fu_743291_p2.read();
        add_ln703_469_reg_746506 = add_ln703_469_fu_743345_p2.read();
        add_ln703_484_reg_746511 = add_ln703_484_fu_743423_p2.read();
        add_ln703_490_reg_746516 = add_ln703_490_fu_743467_p2.read();
        add_ln703_496_reg_746521 = add_ln703_496_fu_743511_p2.read();
        add_ln703_49_reg_746291 = add_ln703_49_fu_740421_p2.read();
        add_ln703_510_reg_746526 = add_ln703_510_fu_743591_p2.read();
        add_ln703_515_reg_746531 = add_ln703_515_fu_743629_p2.read();
        add_ln703_521_reg_746536 = add_ln703_521_fu_743673_p2.read();
        add_ln703_535_reg_746541 = add_ln703_535_fu_743745_p2.read();
        add_ln703_541_reg_746546 = add_ln703_541_fu_743785_p2.read();
        add_ln703_547_reg_746551 = add_ln703_547_fu_743837_p2.read();
        add_ln703_55_reg_746296 = add_ln703_55_fu_740461_p2.read();
        add_ln703_563_reg_746556 = add_ln703_563_fu_743921_p2.read();
        add_ln703_569_reg_746561 = add_ln703_569_fu_743961_p2.read();
        add_ln703_576_reg_746566 = add_ln703_576_fu_744011_p2.read();
        add_ln703_584_reg_746571 = add_ln703_584_fu_744055_p2.read();
        add_ln703_586_reg_746576 = add_ln703_586_fu_744067_p2.read();
        add_ln703_589_reg_746581 = add_ln703_589_fu_744085_p2.read();
        add_ln703_597_reg_746586 = add_ln703_597_fu_744121_p2.read();
        add_ln703_604_reg_746591 = add_ln703_604_fu_744175_p2.read();
        add_ln703_620_reg_746596 = add_ln703_620_fu_744279_p2.read();
        add_ln703_626_reg_746601 = add_ln703_626_fu_744319_p2.read();
        add_ln703_633_reg_746606 = add_ln703_633_fu_744373_p2.read();
        add_ln703_648_reg_746611 = add_ln703_648_fu_744467_p2.read();
        add_ln703_654_reg_746616 = add_ln703_654_fu_744515_p2.read();
        add_ln703_660_reg_746621 = add_ln703_660_fu_744563_p2.read();
        add_ln703_675_reg_746626 = add_ln703_675_fu_744649_p2.read();
        add_ln703_681_reg_746631 = add_ln703_681_fu_744685_p2.read();
        add_ln703_688_reg_746636 = add_ln703_688_fu_744739_p2.read();
        add_ln703_703_reg_746641 = add_ln703_703_fu_744821_p2.read();
        add_ln703_709_reg_746646 = add_ln703_709_fu_744861_p2.read();
        add_ln703_70_reg_746301 = add_ln703_70_fu_740551_p2.read();
        add_ln703_716_reg_746651 = add_ln703_716_fu_744907_p2.read();
        add_ln703_728_reg_746656 = add_ln703_728_fu_744975_p2.read();
        add_ln703_732_reg_746661 = add_ln703_732_fu_745003_p2.read();
        add_ln703_737_reg_746666 = add_ln703_737_fu_745045_p2.read();
        add_ln703_745_reg_746671 = add_ln703_745_fu_745089_p2.read();
        add_ln703_747_reg_746676 = add_ln703_747_fu_745105_p2.read();
        add_ln703_750_reg_746681 = add_ln703_750_fu_745127_p2.read();
        add_ln703_758_reg_746686 = add_ln703_758_fu_745171_p2.read();
        add_ln703_764_reg_746691 = add_ln703_764_fu_745217_p2.read();
        add_ln703_76_reg_746306 = add_ln703_76_fu_740599_p2.read();
        add_ln703_779_reg_746696 = add_ln703_779_fu_745311_p2.read();
        add_ln703_785_reg_746701 = add_ln703_785_fu_745347_p2.read();
        add_ln703_792_reg_746706 = add_ln703_792_fu_745393_p2.read();
        add_ln703_807_reg_746711 = add_ln703_807_fu_745483_p2.read();
        add_ln703_813_reg_746716 = add_ln703_813_fu_745513_p2.read();
        add_ln703_819_reg_746721 = add_ln703_819_fu_745565_p2.read();
        add_ln703_833_reg_746726 = add_ln703_833_fu_745653_p2.read();
        add_ln703_839_reg_746731 = add_ln703_839_fu_745701_p2.read();
        add_ln703_83_reg_746311 = add_ln703_83_fu_740653_p2.read();
        add_ln703_845_reg_746736 = add_ln703_845_fu_745735_p2.read();
        add_ln703_98_reg_746316 = add_ln703_98_fu_740743_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_NS_fsm() {
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

