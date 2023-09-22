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
        acc_16_V_reg_2438039 = acc_16_V_fu_2431151_p2.read();
        acc_28_V_reg_2438329 = acc_28_V_fu_2435647_p2.read();
        acc_29_V_reg_2438334 = acc_29_V_fu_2435893_p2.read();
        acc_8_V_reg_2437799 = acc_8_V_fu_2428157_p2.read();
        add_ln703_1000_reg_2438029 = add_ln703_1000_fu_2430731_p2.read();
        add_ln703_1017_reg_2438034 = add_ln703_1017_fu_2430865_p2.read();
        add_ln703_1073_reg_2438044 = add_ln703_1073_fu_2431349_p2.read();
        add_ln703_1085_reg_2438049 = add_ln703_1085_fu_2431433_p2.read();
        add_ln703_1097_reg_2438054 = add_ln703_1097_fu_2431545_p2.read();
        add_ln703_1113_reg_2438059 = add_ln703_1113_fu_2431649_p2.read();
        add_ln703_1119_reg_2438064 = add_ln703_1119_fu_2431693_p2.read();
        add_ln703_1125_reg_2438069 = add_ln703_1125_fu_2431729_p2.read();
        add_ln703_1141_reg_2438074 = add_ln703_1141_fu_2431841_p2.read();
        add_ln703_1155_reg_2438079 = add_ln703_1155_fu_2431973_p2.read();
        add_ln703_1169_reg_2438084 = add_ln703_1169_fu_2432073_p2.read();
        add_ln703_1175_reg_2438089 = add_ln703_1175_fu_2432117_p2.read();
        add_ln703_1181_reg_2438094 = add_ln703_1181_fu_2432165_p2.read();
        add_ln703_1196_reg_2438099 = add_ln703_1196_fu_2432251_p2.read();
        add_ln703_1209_reg_2438104 = add_ln703_1209_fu_2432361_p2.read();
        add_ln703_1221_reg_2438109 = add_ln703_1221_fu_2432441_p2.read();
        add_ln703_1226_reg_2438114 = add_ln703_1226_fu_2432479_p2.read();
        add_ln703_1231_reg_2438119 = add_ln703_1231_fu_2432509_p2.read();
        add_ln703_1244_reg_2438124 = add_ln703_1244_fu_2432591_p2.read();
        add_ln703_1256_reg_2438129 = add_ln703_1256_fu_2432695_p2.read();
        add_ln703_1270_reg_2438134 = add_ln703_1270_fu_2432775_p2.read();
        add_ln703_1276_reg_2438139 = add_ln703_1276_fu_2432823_p2.read();
        add_ln703_1282_reg_2438144 = add_ln703_1282_fu_2432867_p2.read();
        add_ln703_1296_reg_2438149 = add_ln703_1296_fu_2432955_p2.read();
        add_ln703_1309_reg_2438154 = add_ln703_1309_fu_2433057_p2.read();
        add_ln703_1324_reg_2438159 = add_ln703_1324_fu_2433159_p2.read();
        add_ln703_1330_reg_2438164 = add_ln703_1330_fu_2433199_p2.read();
        add_ln703_1336_reg_2438169 = add_ln703_1336_fu_2433247_p2.read();
        add_ln703_1344_reg_2438174 = add_ln703_1344_fu_2433299_p2.read();
        add_ln703_1346_reg_2438179 = add_ln703_1346_fu_2433311_p2.read();
        add_ln703_1349_reg_2438184 = add_ln703_1349_fu_2433329_p2.read();
        add_ln703_1364_reg_2438189 = add_ln703_1364_fu_2433443_p2.read();
        add_ln703_1379_reg_2438194 = add_ln703_1379_fu_2433533_p2.read();
        add_ln703_1385_reg_2438199 = add_ln703_1385_fu_2433573_p2.read();
        add_ln703_1391_reg_2438204 = add_ln703_1391_fu_2433617_p2.read();
        add_ln703_1407_reg_2438209 = add_ln703_1407_fu_2433717_p2.read();
        add_ln703_1420_reg_2438214 = add_ln703_1420_fu_2433819_p2.read();
        add_ln703_1435_reg_2438219 = add_ln703_1435_fu_2433901_p2.read();
        add_ln703_1441_reg_2438224 = add_ln703_1441_fu_2433949_p2.read();
        add_ln703_1448_reg_2438229 = add_ln703_1448_fu_2433999_p2.read();
        add_ln703_1463_reg_2438234 = add_ln703_1463_fu_2434109_p2.read();
        add_ln703_1475_reg_2438239 = add_ln703_1475_fu_2434225_p2.read();
        add_ln703_1490_reg_2438244 = add_ln703_1490_fu_2434311_p2.read();
        add_ln703_1496_reg_2438249 = add_ln703_1496_fu_2434355_p2.read();
        add_ln703_1503_reg_2438254 = add_ln703_1503_fu_2434409_p2.read();
        add_ln703_1518_reg_2438259 = add_ln703_1518_fu_2434511_p2.read();
        add_ln703_1532_reg_2438264 = add_ln703_1532_fu_2434627_p2.read();
        add_ln703_1547_reg_2438269 = add_ln703_1547_fu_2434721_p2.read();
        add_ln703_1553_reg_2438274 = add_ln703_1553_fu_2434761_p2.read();
        add_ln703_1559_reg_2438279 = add_ln703_1559_fu_2434805_p2.read();
        add_ln703_1574_reg_2438284 = add_ln703_1574_fu_2434895_p2.read();
        add_ln703_1587_reg_2438289 = add_ln703_1587_fu_2435001_p2.read();
        add_ln703_1603_reg_2438294 = add_ln703_1603_fu_2435101_p2.read();
        add_ln703_1610_reg_2438299 = add_ln703_1610_fu_2435151_p2.read();
        add_ln703_1617_reg_2438304 = add_ln703_1617_fu_2435201_p2.read();
        add_ln703_1625_reg_2438309 = add_ln703_1625_fu_2435241_p2.read();
        add_ln703_1628_reg_2438314 = add_ln703_1628_fu_2435263_p2.read();
        add_ln703_1631_reg_2438319 = add_ln703_1631_fu_2435285_p2.read();
        add_ln703_1648_reg_2438324 = add_ln703_1648_fu_2435407_p2.read();
        add_ln703_1713_reg_2438339 = add_ln703_1713_fu_2435985_p2.read();
        add_ln703_1720_reg_2438344 = add_ln703_1720_fu_2436035_p2.read();
        add_ln703_1727_reg_2438349 = add_ln703_1727_fu_2436085_p2.read();
        add_ln703_1742_reg_2438354 = add_ln703_1742_fu_2436171_p2.read();
        add_ln703_1757_reg_2438359 = add_ln703_1757_fu_2436285_p2.read();
        add_ln703_1772_reg_2438364 = add_ln703_1772_fu_2436387_p2.read();
        add_ln703_1778_reg_2438369 = add_ln703_1778_fu_2436431_p2.read();
        add_ln703_1785_reg_2438374 = add_ln703_1785_fu_2436481_p2.read();
        add_ln703_1801_reg_2438379 = add_ln703_1801_fu_2436585_p2.read();
        add_ln703_1814_reg_2438384 = add_ln703_1814_fu_2436699_p2.read();
        add_ln703_189_reg_2437599 = add_ln703_189_fu_2425113_p2.read();
        add_ln703_201_reg_2437604 = add_ln703_201_fu_2425209_p2.read();
        add_ln703_207_reg_2437609 = add_ln703_207_fu_2425261_p2.read();
        add_ln703_213_reg_2437614 = add_ln703_213_fu_2425301_p2.read();
        add_ln703_227_reg_2437619 = add_ln703_227_fu_2425377_p2.read();
        add_ln703_240_reg_2437624 = add_ln703_240_fu_2425495_p2.read();
        add_ln703_256_reg_2437629 = add_ln703_256_fu_2425595_p2.read();
        add_ln703_263_reg_2437634 = add_ln703_263_fu_2425641_p2.read();
        add_ln703_270_reg_2437639 = add_ln703_270_fu_2425699_p2.read();
        add_ln703_286_reg_2437644 = add_ln703_286_fu_2425791_p2.read();
        add_ln703_293_reg_2437649 = add_ln703_293_fu_2425833_p2.read();
        add_ln703_296_reg_2437654 = add_ln703_296_fu_2425855_p2.read();
        add_ln703_299_reg_2437659 = add_ln703_299_fu_2425881_p2.read();
        add_ln703_315_reg_2437664 = add_ln703_315_fu_2425969_p2.read();
        add_ln703_321_reg_2437669 = add_ln703_321_fu_2426017_p2.read();
        add_ln703_327_reg_2437674 = add_ln703_327_fu_2426069_p2.read();
        add_ln703_342_reg_2437679 = add_ln703_342_fu_2426171_p2.read();
        add_ln703_355_reg_2437684 = add_ln703_355_fu_2426285_p2.read();
        add_ln703_370_reg_2437689 = add_ln703_370_fu_2426371_p2.read();
        add_ln703_376_reg_2437694 = add_ln703_376_fu_2426419_p2.read();
        add_ln703_383_reg_2437699 = add_ln703_383_fu_2426465_p2.read();
        add_ln703_399_reg_2437704 = add_ln703_399_fu_2426573_p2.read();
        add_ln703_413_reg_2437709 = add_ln703_413_fu_2426705_p2.read();
        add_ln703_429_reg_2437714 = add_ln703_429_fu_2426809_p2.read();
        add_ln703_436_reg_2437719 = add_ln703_436_fu_2426855_p2.read();
        add_ln703_443_reg_2437724 = add_ln703_443_fu_2426905_p2.read();
        add_ln703_459_reg_2437729 = add_ln703_459_fu_2427013_p2.read();
        add_ln703_474_reg_2437734 = add_ln703_474_fu_2427135_p2.read();
        add_ln703_489_reg_2437739 = add_ln703_489_fu_2427241_p2.read();
        add_ln703_495_reg_2437744 = add_ln703_495_fu_2427289_p2.read();
        add_ln703_502_reg_2437749 = add_ln703_502_fu_2427339_p2.read();
        add_ln703_510_reg_2437754 = add_ln703_510_fu_2427383_p2.read();
        add_ln703_512_reg_2437759 = add_ln703_512_fu_2427399_p2.read();
        add_ln703_515_reg_2437764 = add_ln703_515_fu_2427417_p2.read();
        add_ln703_531_reg_2437769 = add_ln703_531_fu_2427553_p2.read();
        add_ln703_546_reg_2437774 = add_ln703_546_fu_2427651_p2.read();
        add_ln703_552_reg_2437779 = add_ln703_552_fu_2427691_p2.read();
        add_ln703_559_reg_2437784 = add_ln703_559_fu_2427745_p2.read();
        add_ln703_575_reg_2437789 = add_ln703_575_fu_2427841_p2.read();
        add_ln703_589_reg_2437794 = add_ln703_589_fu_2427953_p2.read();
        add_ln703_624_reg_2437804 = add_ln703_624_fu_2428263_p2.read();
        add_ln703_630_reg_2437809 = add_ln703_630_fu_2428311_p2.read();
        add_ln703_636_reg_2437814 = add_ln703_636_fu_2428351_p2.read();
        add_ln703_651_reg_2437819 = add_ln703_651_fu_2428433_p2.read();
        add_ln703_664_reg_2437824 = add_ln703_664_fu_2428555_p2.read();
        add_ln703_680_reg_2437829 = add_ln703_680_fu_2428647_p2.read();
        add_ln703_687_reg_2437834 = add_ln703_687_fu_2428701_p2.read();
        add_ln703_694_reg_2437839 = add_ln703_694_fu_2428751_p2.read();
        add_ln703_703_reg_2437844 = add_ln703_703_fu_2428801_p2.read();
        add_ln703_706_reg_2437849 = add_ln703_706_fu_2428823_p2.read();
        add_ln703_709_reg_2437854 = add_ln703_709_fu_2428841_p2.read();
        add_ln703_718_reg_2437859 = add_ln703_718_fu_2428887_p2.read();
        add_ln703_721_reg_2437864 = add_ln703_721_fu_2428905_p2.read();
        add_ln703_724_reg_2437869 = add_ln703_724_fu_2428931_p2.read();
        add_ln703_740_reg_2437874 = add_ln703_740_fu_2429027_p2.read();
        add_ln703_746_reg_2437879 = add_ln703_746_fu_2429071_p2.read();
        add_ln703_752_reg_2437884 = add_ln703_752_fu_2429115_p2.read();
        add_ln703_767_reg_2437889 = add_ln703_767_fu_2429205_p2.read();
        add_ln703_781_reg_2437894 = add_ln703_781_fu_2429329_p2.read();
        add_ln703_797_reg_2437899 = add_ln703_797_fu_2429421_p2.read();
        add_ln703_804_reg_2437904 = add_ln703_804_fu_2429471_p2.read();
        add_ln703_811_reg_2437909 = add_ln703_811_fu_2429517_p2.read();
        add_ln703_819_reg_2437914 = add_ln703_819_fu_2429565_p2.read();
        add_ln703_822_reg_2437919 = add_ln703_822_fu_2429587_p2.read();
        add_ln703_825_reg_2437924 = add_ln703_825_fu_2429605_p2.read();
        add_ln703_834_reg_2437929 = add_ln703_834_fu_2429647_p2.read();
        add_ln703_837_reg_2437934 = add_ln703_837_fu_2429665_p2.read();
        add_ln703_840_reg_2437939 = add_ln703_840_fu_2429687_p2.read();
        add_ln703_857_reg_2437944 = add_ln703_857_fu_2429769_p2.read();
        add_ln703_863_reg_2437949 = add_ln703_863_fu_2429817_p2.read();
        add_ln703_869_reg_2437954 = add_ln703_869_fu_2429861_p2.read();
        add_ln703_884_reg_2437959 = add_ln703_884_fu_2429951_p2.read();
        add_ln703_897_reg_2437964 = add_ln703_897_fu_2430061_p2.read();
        add_ln703_912_reg_2437969 = add_ln703_912_fu_2430151_p2.read();
        add_ln703_918_reg_2437974 = add_ln703_918_fu_2430195_p2.read();
        add_ln703_925_reg_2437979 = add_ln703_925_fu_2430241_p2.read();
        add_ln703_933_reg_2437984 = add_ln703_933_fu_2430285_p2.read();
        add_ln703_936_reg_2437989 = add_ln703_936_fu_2430303_p2.read();
        add_ln703_939_reg_2437994 = add_ln703_939_fu_2430321_p2.read();
        add_ln703_955_reg_2437999 = add_ln703_955_fu_2430445_p2.read();
        add_ln703_971_reg_2438004 = add_ln703_971_fu_2430545_p2.read();
        add_ln703_978_reg_2438009 = add_ln703_978_fu_2430595_p2.read();
        add_ln703_985_reg_2438014 = add_ln703_985_fu_2430645_p2.read();
        add_ln703_994_reg_2438019 = add_ln703_994_fu_2430691_p2.read();
        add_ln703_997_reg_2438024 = add_ln703_997_fu_2430709_p2.read();
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

