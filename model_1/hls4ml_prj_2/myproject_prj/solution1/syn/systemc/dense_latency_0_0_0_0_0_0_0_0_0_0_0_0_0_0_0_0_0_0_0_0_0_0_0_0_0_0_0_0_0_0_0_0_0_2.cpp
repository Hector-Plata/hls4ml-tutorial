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
        acc_12_V_reg_688825 = acc_12_V_fu_684817_p2.read();
        acc_1_V_reg_688660 = acc_1_V_fu_682885_p2.read();
        acc_25_V_reg_689040 = acc_25_V_fu_687135_p2.read();
        acc_29_V_reg_689090 = acc_29_V_fu_687849_p2.read();
        acc_31_V_reg_689110 = acc_31_V_fu_688141_p2.read();
        add_ln703_113_reg_688695 = add_ln703_113_fu_683337_p2.read();
        add_ln703_119_reg_688700 = add_ln703_119_fu_683373_p2.read();
        add_ln703_126_reg_688705 = add_ln703_126_fu_683427_p2.read();
        add_ln703_12_reg_688645 = add_ln703_12_fu_682643_p2.read();
        add_ln703_140_reg_688710 = add_ln703_140_fu_683515_p2.read();
        add_ln703_146_reg_688715 = add_ln703_146_fu_683567_p2.read();
        add_ln703_152_reg_688720 = add_ln703_152_fu_683615_p2.read();
        add_ln703_167_reg_688725 = add_ln703_167_fu_683705_p2.read();
        add_ln703_173_reg_688730 = add_ln703_173_fu_683753_p2.read();
        add_ln703_180_reg_688735 = add_ln703_180_fu_683807_p2.read();
        add_ln703_18_reg_688650 = add_ln703_18_fu_682683_p2.read();
        add_ln703_194_reg_688740 = add_ln703_194_fu_683887_p2.read();
        add_ln703_199_reg_688745 = add_ln703_199_fu_683921_p2.read();
        add_ln703_205_reg_688750 = add_ln703_205_fu_683969_p2.read();
        add_ln703_214_reg_688755 = add_ln703_214_fu_684015_p2.read();
        add_ln703_217_reg_688760 = add_ln703_217_fu_684037_p2.read();
        add_ln703_220_reg_688765 = add_ln703_220_fu_684055_p2.read();
        add_ln703_229_reg_688770 = add_ln703_229_fu_684109_p2.read();
        add_ln703_236_reg_688775 = add_ln703_236_fu_684163_p2.read();
        add_ln703_252_reg_688780 = add_ln703_252_fu_684263_p2.read();
        add_ln703_258_reg_688785 = add_ln703_258_fu_684301_p2.read();
        add_ln703_25_reg_688655 = add_ln703_25_fu_682733_p2.read();
        add_ln703_265_reg_688790 = add_ln703_265_fu_684359_p2.read();
        add_ln703_280_reg_688795 = add_ln703_280_fu_684445_p2.read();
        add_ln703_286_reg_688800 = add_ln703_286_fu_684485_p2.read();
        add_ln703_292_reg_688805 = add_ln703_292_fu_684529_p2.read();
        add_ln703_307_reg_688810 = add_ln703_307_fu_684607_p2.read();
        add_ln703_313_reg_688815 = add_ln703_313_fu_684643_p2.read();
        add_ln703_320_reg_688820 = add_ln703_320_fu_684701_p2.read();
        add_ln703_346_reg_688830 = add_ln703_346_fu_684913_p2.read();
        add_ln703_352_reg_688835 = add_ln703_352_fu_684953_p2.read();
        add_ln703_358_reg_688840 = add_ln703_358_fu_684993_p2.read();
        add_ln703_374_reg_688845 = add_ln703_374_fu_685085_p2.read();
        add_ln703_380_reg_688850 = add_ln703_380_fu_685125_p2.read();
        add_ln703_387_reg_688855 = add_ln703_387_fu_685171_p2.read();
        add_ln703_402_reg_688860 = add_ln703_402_fu_685269_p2.read();
        add_ln703_408_reg_688865 = add_ln703_408_fu_685317_p2.read();
        add_ln703_415_reg_688870 = add_ln703_415_fu_685367_p2.read();
        add_ln703_430_reg_688875 = add_ln703_430_fu_685451_p2.read();
        add_ln703_436_reg_688880 = add_ln703_436_fu_685491_p2.read();
        add_ln703_443_reg_688885 = add_ln703_443_fu_685537_p2.read();
        add_ln703_456_reg_688890 = add_ln703_456_fu_685619_p2.read();
        add_ln703_461_reg_688895 = add_ln703_461_fu_685649_p2.read();
        add_ln703_467_reg_688900 = add_ln703_467_fu_685697_p2.read();
        add_ln703_475_reg_688905 = add_ln703_475_fu_685731_p2.read();
        add_ln703_477_reg_688910 = add_ln703_477_fu_685743_p2.read();
        add_ln703_480_reg_688915 = add_ln703_480_fu_685761_p2.read();
        add_ln703_488_reg_688920 = add_ln703_488_fu_685801_p2.read();
        add_ln703_495_reg_688925 = add_ln703_495_fu_685855_p2.read();
        add_ln703_503_reg_688930 = add_ln703_503_fu_685899_p2.read();
        add_ln703_506_reg_688935 = add_ln703_506_fu_685921_p2.read();
        add_ln703_509_reg_688940 = add_ln703_509_fu_685939_p2.read();
        add_ln703_517_reg_688945 = add_ln703_517_fu_685979_p2.read();
        add_ln703_524_reg_688950 = add_ln703_524_fu_686033_p2.read();
        add_ln703_539_reg_688955 = add_ln703_539_fu_686127_p2.read();
        add_ln703_545_reg_688960 = add_ln703_545_fu_686163_p2.read();
        add_ln703_552_reg_688965 = add_ln703_552_fu_686221_p2.read();
        add_ln703_567_reg_688970 = add_ln703_567_fu_686319_p2.read();
        add_ln703_573_reg_688975 = add_ln703_573_fu_686359_p2.read();
        add_ln703_580_reg_688980 = add_ln703_580_fu_686413_p2.read();
        add_ln703_589_reg_688985 = add_ln703_589_fu_686455_p2.read();
        add_ln703_592_reg_688990 = add_ln703_592_fu_686477_p2.read();
        add_ln703_595_reg_688995 = add_ln703_595_fu_686499_p2.read();
        add_ln703_59_reg_688665 = add_ln703_59_fu_682981_p2.read();
        add_ln703_604_reg_689000 = add_ln703_604_fu_686545_p2.read();
        add_ln703_611_reg_689005 = add_ln703_611_fu_686603_p2.read();
        add_ln703_627_reg_689010 = add_ln703_627_fu_686699_p2.read();
        add_ln703_633_reg_689015 = add_ln703_633_fu_686743_p2.read();
        add_ln703_640_reg_689020 = add_ln703_640_fu_686797_p2.read();
        add_ln703_655_reg_689025 = add_ln703_655_fu_686879_p2.read();
        add_ln703_661_reg_689030 = add_ln703_661_fu_686919_p2.read();
        add_ln703_667_reg_689035 = add_ln703_667_fu_686963_p2.read();
        add_ln703_66_reg_688670 = add_ln703_66_fu_683023_p2.read();
        add_ln703_704_reg_689045 = add_ln703_704_fu_687229_p2.read();
        add_ln703_710_reg_689050 = add_ln703_710_fu_687269_p2.read();
        add_ln703_717_reg_689055 = add_ln703_717_fu_687315_p2.read();
        add_ln703_733_reg_689060 = add_ln703_733_fu_687403_p2.read();
        add_ln703_739_reg_689065 = add_ln703_739_fu_687443_p2.read();
        add_ln703_73_reg_688675 = add_ln703_73_fu_683069_p2.read();
        add_ln703_746_reg_689070 = add_ln703_746_fu_687501_p2.read();
        add_ln703_762_reg_689075 = add_ln703_762_fu_687605_p2.read();
        add_ln703_768_reg_689080 = add_ln703_768_fu_687649_p2.read();
        add_ln703_775_reg_689085 = add_ln703_775_fu_687703_p2.read();
        add_ln703_808_reg_689095 = add_ln703_808_fu_687927_p2.read();
        add_ln703_814_reg_689100 = add_ln703_814_fu_687967_p2.read();
        add_ln703_820_reg_689105 = add_ln703_820_fu_688019_p2.read();
        add_ln703_86_reg_688680 = add_ln703_86_fu_683147_p2.read();
        add_ln703_91_reg_688685 = add_ln703_91_fu_683181_p2.read();
        add_ln703_97_reg_688690 = add_ln703_97_fu_683233_p2.read();
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

