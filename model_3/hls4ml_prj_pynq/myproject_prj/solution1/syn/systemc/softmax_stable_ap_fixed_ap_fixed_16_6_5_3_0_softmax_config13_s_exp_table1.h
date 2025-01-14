// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_H__
#define __softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 18;
  static const unsigned AddressRange = 1024;
  static const unsigned AddressWidth = 10;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in <sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in <sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in <sc_lv<AddressWidth> > address4;
sc_core::sc_in <sc_logic> ce4;
sc_core::sc_out <sc_lv<DataWidth> > q4;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_ram) {
        ram[0] = "0b000000010000000000";
        ram[1] = "0b000000010001000010";
        ram[2] = "0b000000010010001000";
        ram[3] = "0b000000010011010011";
        ram[4] = "0b000000010100100010";
        ram[5] = "0b000000010101110111";
        ram[6] = "0b000000010111010001";
        ram[7] = "0b000000011000110010";
        ram[8] = "0b000000011010011000";
        ram[9] = "0b000000011100000101";
        ram[10] = "0b000000011101111001";
        ram[11] = "0b000000011111110100";
        ram[12] = "0b000000100001110111";
        ram[13] = "0b000000100100000011";
        ram[14] = "0b000000100110011000";
        ram[15] = "0b000000101000110110";
        ram[16] = "0b000000101011011111";
        ram[17] = "0b000000101110010011";
        ram[18] = "0b000000110001010010";
        ram[19] = "0b000000110100011101";
        ram[20] = "0b000000110111110110";
        ram[21] = "0b000000111011011100";
        ram[22] = "0b000000111111010001";
        ram[23] = "0b000001000011010111";
        ram[24] = "0b000001000111101101";
        ram[25] = "0b000001001100010101";
        ram[26] = "0b000001010001010000";
        ram[27] = "0b000001010110011111";
        ram[28] = "0b000001011100000100";
        ram[29] = "0b000001100010000000";
        ram[30] = "0b000001101000010101";
        ram[31] = "0b000001101111000011";
        ram[32] = "0b000001110110001110";
        ram[33] = "0b000001111101110110";
        ram[34] = "0b000010000101111101";
        ram[35] = "0b000010001110100110";
        ram[36] = "0b000010010111110011";
        ram[37] = "0b000010100001100110";
        ram[38] = "0b000010101100000001";
        ram[39] = "0b000010110111000111";
        ram[40] = "0b000011000010111010";
        ram[41] = "0b000011001111011111";
        ram[42] = "0b000011011100110111";
        ram[43] = "0b000011101011000111";
        ram[44] = "0b000011111010010010";
        ram[45] = "0b000100001010011011";
        ram[46] = "0b000100011011100110";
        ram[47] = "0b000100101101111001";
        ram[48] = "0b000101000001010111";
        ram[49] = "0b000101010110000110";
        ram[50] = "0b000101101100001010";
        ram[51] = "0b000110000011101001";
        ram[52] = "0b000110011100101001";
        ram[53] = "0b000110110111010000";
        ram[54] = "0b000111010011100101";
        ram[55] = "0b000111110001101111";
        ram[56] = "0b001000010001110110";
        ram[57] = "0b001000110100000001";
        ram[58] = "0b001001011000011001";
        ram[59] = "0b001001111111000111";
        ram[60] = "0b001010101000010101";
        ram[61] = "0b001011010100001101";
        ram[62] = "0b001100000010111011";
        ram[63] = "0b001100110100101001";
        ram[64] = "0b001101101001100100";
        ram[65] = "0b001110100001111010";
        ram[66] = "0b001111011101111000";
        ram[67] = "0b010000011101101110";
        ram[68] = "0b010001100001101011";
        ram[69] = "0b010010101010000001";
        ram[70] = "0b010011110111000010";
        ram[71] = "0b010101001001000000";
        ram[72] = "0b010110100000010001";
        ram[73] = "0b010111111101001010";
        ram[74] = "0b011001100000000010";
        ram[75] = "0b011011001001010011";
        ram[76] = "0b011100111001010110";
        ram[77] = "0b011110110000100111";
        ram[78] = "0b100000101111100101";
        ram[79] = "0b100010110110101111";
        ram[80] = "0b100101000110100111";
        ram[81] = "0b100111011111110000";
        ram[82] = "0b101010000010110010";
        ram[83] = "0b101100110000010100";
        ram[84] = "0b101111101001000011";
        ram[85] = "0b110010101101101101";
        ram[86] = "0b110101111111000010";
        ram[87] = "0b111001011101110111";
        ram[88] = "0b111101001011000100";
        ram[89] = "0b000001000111100100";
        ram[90] = "0b000101010100010110";
        ram[91] = "0b001001110010011110";
        ram[92] = "0b001110100011000011";
        ram[93] = "0b010011100111010001";
        ram[94] = "0b011001000000011001";
        ram[95] = "0b011110101111110001";
        ram[96] = "0b100100110110110111";
        ram[97] = "0b101011010111001010";
        ram[98] = "0b110010010010010100";
        ram[99] = "0b111001101010000011";
        ram[100] = "0b000001100000001101";
        ram[101] = "0b001001110110101111";
        ram[102] = "0b010010101111110001";
        ram[103] = "0b011100001101011110";
        ram[104] = "0b100110010010010001";
        ram[105] = "0b110001000000101000";
        ram[106] = "0b111100011011010001";
        ram[107] = "0b001000100101000001";
        ram[108] = "0b010101100000111100";
        ram[109] = "0b100011010010010000";
        ram[110] = "0b110001111100011010";
        ram[111] = "0b000001100011000100";
        ram[112] = "0b010010001010001000";
        ram[113] = "0b100011110101110000";
        ram[114] = "0b110110101010010111";
        ram[115] = "0b001010101100101011";
        ram[116] = "0b100000000001101011";
        ram[117] = "0b110110101110101101";
        ram[118] = "0b001110111001011110";
        ram[119] = "0b101000100111111110";
        ram[120] = "0b000100000000101011";
        ram[121] = "0b100001001010011010";
        ram[122] = "0b000000001100011111";
        ram[123] = "0b100001001110101001";
        ram[124] = "0b000100011001001010";
        ram[125] = "0b101001110100110100";
        ram[126] = "0b010001101010111110";
        ram[127] = "0b111100000101100111";
        ram[128] = "0b101001001111010101";
        ram[129] = "0b011001010011011010";
        ram[130] = "0b001100011101111000";
        ram[131] = "0b000010111011100011";
        ram[132] = "0b111100111010000000";
        ram[133] = "0b111010100111110010";
        ram[134] = "0b111100010100010010";
        ram[135] = "0b000010001111111110";
        ram[136] = "0b001100101100010011";
        ram[137] = "0b011011111011111010";
        ram[138] = "0b110000010010100110";
        ram[139] = "0b001010000101011111";
        ram[140] = "0b101001101011000000";
        ram[141] = "0b001111011011000101";
        ram[142] = "0b111011101111001001";
        ram[143] = "0b101111000010010010";
        ram[144] = "0b101001110001010110";
        ram[145] = "0b101100011011000000";
        ram[146] = "0b110111011111111101";
        ram[147] = "0b001011100010111101";
        ram[148] = "0b101001001001000011";
        ram[149] = "0b010000111001101001";
        ram[150] = "0b000011011110101100";
        ram[151] = "0b000001100100110101";
        ram[152] = "0b001011111011101000";
        ram[153] = "0b100011010101101100";
        ram[154] = "0b001000101000110111";
        ram[155] = "0b111100101110100000";
        ram[156] = "0b000000100011101010";
        ram[157] = "0b010101001001010100";
        ram[158] = "0b111011100100100110";
        ram[159] = "0b110100111111001100";
        ram[160] = "0b000010100111011100";
        ram[161] = "0b100101110000110100";
        ram[162] = "0b011111110100000110";
        ram[163] = "0b110010001111110110";
        ram[164] = "0b011110101000101010";
        ram[165] = "0b100110101001110000";
        ram[166] = "0b001100000101000110";
        ram[167] = "0b010000110100001000";
        ram[168] = "0b110110111000000100";
        ram[169] = "0b000000011010011100";
        ram[170] = "0b101111101101101100";
        ram[171] = "0b000111001101110000";
        ram[172] = "0b001001100000011100";
        ram[173] = "0b111001010110100000";
        ram[174] = "0b011001101011111100";
        ram[175] = "0b101101101000110100";
        ram[176] = "0b111000100010010000";
        ram[177] = "0b111101111011000100";
        ram[178] = "0b000001100100101000";
        ram[179] = "0b000111100000000000";
        ram[180] = "0b010011111110110000";
        ram[181] = "0b101011100100000000";
        ram[182] = "0b010011000101110000";
        ram[183] = "0b001111101110001000";
        ram[184] = "0b100110111100011000";
        ram[185] = "0b011110100110010000";
        ram[186] = "0b111100111010000000";
        ram[187] = "0b001000011111001000";
        ram[188] = "0b001000011001000000";
        ram[189] = "0b000100000111100000";
        ram[190] = "0b000011101001100000";
        ram[191] = "0b001111011111110000";
        ram[192] = "0b110000101100110000";
        ram[193] = "0b110000111001010000";
        ram[194] = "0b011010010101100000";
        ram[195] = "0b110111111100000000";
        ram[196] = "0b010101010100100000";
        ram[197] = "0b111110110110110000";
        ram[198] = "0b000001101101010000";
        ram[199] = "0b101011111000110000";
        ram[200] = "0b001100010100100000";
        ram[201] = "0b110010111001000000";
        ram[202] = "0b110000011111100000";
        ram[203] = "0b010111001001000000";
        ram[204] = "0b111001111110100000";
        ram[205] = "0b101101011001100000";
        ram[206] = "0b000111000111000000";
        ram[207] = "0b011110001110100000";
        ram[208] = "0b001011010110100000";
        ram[209] = "0b101000101001100000";
        ram[210] = "0b010010000001000000";
        ram[211] = "0b100101000111000000";
        ram[212] = "0b000001100001000000";
        ram[213] = "0b001000110111000000";
        ram[214] = "0b011110111011000000";
        ram[215] = "0b101001110100000000";
        ram[216] = "0b010010000110000000";
        ram[217] = "0b000010111011000000";
        ram[218] = "0b101010010000000000";
        ram[219] = "0b111001000001000000";
        ram[220] = "0b100011010011000000";
        ram[221] = "0b100000100000000000";
        ram[222] = "0b101011101000000000";
        ram[223] = "0b000011100010000000";
        ram[224] = "0b101011000100000000";
        ram[225] = "0b101001011010000000";
        ram[226] = "0b001010010010000000";
        ram[227] = "0b011110011010000000";
        ram[228] = "0b111011101000000000";
        ram[229] = "0b111101010010000000";
        ram[230] = "0b000100101110000000";
        ram[231] = "0b111001100000000000";
        ram[232] = "0b001001110100000000";
        ram[233] = "0b101011000100000000";
        ram[234] = "0b011010001000000000";
        ram[235] = "0b011100000100000000";
        ram[236] = "0b111110010100000000";
        ram[237] = "0b010111101000000000";
        ram[238] = "0b001000011100000000";
        ram[239] = "0b111011011000000000";
        ram[240] = "0b100110010100000000";
        ram[241] = "0b001010110000000000";
        ram[242] = "0b110110100000000000";
        ram[243] = "0b000100111100000000";
        ram[244] = "0b011111011000000000";
        ram[245] = "0b111110010000000000";
        ram[246] = "0b101010000000000000";
        ram[247] = "0b111100010000000000";
        ram[248] = "0b100000101000000000";
        ram[249] = "0b010110000000000000";
        ram[250] = "0b110000001000000000";
        ram[251] = "0b011000011000000000";
        ram[252] = "0b001111100000000000";
        ram[253] = "0b101111001000000000";
        ram[254] = "0b101011010000000000";
        ram[255] = "0b010100001000000000";
        ram[256] = "0b010111110000000000";
        ram[257] = "0b000011110000000000";
        ram[258] = "0b001000100000000000";
        ram[259] = "0b111001110000000000";
        ram[260] = "0b010010000000000000";
        ram[261] = "0b110100010000000000";
        ram[262] = "0b101111110000000000";
        ram[263] = "0b000001010000000000";
        ram[264] = "0b010111110000000000";
        ram[265] = "0b010110100000000000";
        ram[266] = "0b011000000000000000";
        ram[267] = "0b110011000000000000";
        ram[268] = "0b111110000000000000";
        ram[269] = "0b010010000000000000";
        ram[270] = "0b001111100000000000";
        ram[271] = "0b100101100000000000";
        ram[272] = "0b010010000000000000";
        ram[273] = "0b101011100000000000";
        ram[274] = "0b100011000000000000";
        ram[275] = "0b001100100000000000";
        ram[276] = "0b100101100000000000";
        ram[277] = "0b011000100000000000";
        ram[278] = "0b001000000000000000";
        ram[279] = "0b010101000000000000";
        ram[280] = "0b100100000000000000";
        ram[281] = "0b101100000000000000";
        ram[282] = "0b111000000000000000";
        ram[283] = "0b111001000000000000";
        ram[284] = "0b001001000000000000";
        ram[285] = "0b111011000000000000";
        ram[286] = "0b100100000000000000";
        ram[287] = "0b101010000000000000";
        ram[288] = "0b010000000000000000";
        ram[289] = "0b000100000000000000";
        ram[290] = "0b110000000000000000";
        ram[291] = "0b000100000000000000";
        ram[292] = "0b010100000000000000";
        ram[293] = "0b011010000000000000";
        ram[294] = "0b011000000000000000";
        ram[295] = "0b100110000000000000";
        ram[296] = "0b000010000000000000";
        ram[297] = "0b111000000000000000";
        ram[298] = "0b101010000000000000";
        ram[299] = "0b110110000000000000";
        ram[300] = "0b001100000000000000";
        ram[301] = "0b001100000000000000";
        ram[302] = "0b110000000000000000";
        ram[303] = "0b100000000000000000";
        ram[304] = "0b100000000000000000";
        ram[305] = "0b110100000000000000";
        ram[306] = "0b001000000000000000";
        ram[307] = "0b100000000000000000";
        ram[308] = "0b000000000000000000";
        ram[309] = "0b101000000000000000";
        ram[310] = "0b111000000000000000";
        ram[311] = "0b000000000000000000";
        ram[312] = "0b101000000000000000";
        ram[313] = "0b000000000000000000";
        ram[314] = "0b100000000000000000";
        ram[315] = "0b110000000000000000";
        ram[316] = "0b000000000000000000";
        ram[317] = "0b100000000000000000";
        ram[318] = "0b011000000000000000";
        ram[319] = "0b101000000000000000";
        ram[320] = "0b100000000000000000";
        ram[321] = "0b111000000000000000";
        ram[322] = "0b010000000000000000";
        ram[323] = "0b010000000000000000";
        ram[324] = "0b110000000000000000";
        ram[325] = "0b010000000000000000";
        ram[326] = "0b100000000000000000";
        ram[327] = "0b110000000000000000";
        ram[328] = "0b000000000000000000";
        ram[329] = "0b100000000000000000";
        ram[330] = "0b000000000000000000";
        ram[331] = "0b100000000000000000";
        ram[332] = "0b110000000000000000";
        ram[333] = "0b100000000000000000";
        ram[334] = "0b000000000000000000";
        ram[335] = "0b000000000000000000";
        ram[336] = "0b000000000000000000";
        ram[337] = "0b000000000000000000";
        ram[338] = "0b100000000000000000";
        ram[339] = "0b100000000000000000";
        ram[340] = "0b000000000000000000";
        ram[341] = "0b000000000000000000";
        ram[342] = "0b100000000000000000";
        ram[343] = "0b100000000000000000";
        for (unsigned i = 344; i < 914 ; i = i + 1) {
            ram[i] = "0b000000000000000000";
        }
        for (unsigned i = 914; i < 925 ; i = i + 1) {
            ram[i] = "0b000000000000000001";
        }
        for (unsigned i = 925; i < 931 ; i = i + 1) {
            ram[i] = "0b000000000000000010";
        }
        for (unsigned i = 931; i < 936 ; i = i + 1) {
            ram[i] = "0b000000000000000011";
        }
        ram[936] = "0b000000000000000100";
        ram[937] = "0b000000000000000100";
        ram[938] = "0b000000000000000100";
        ram[939] = "0b000000000000000101";
        ram[940] = "0b000000000000000101";
        ram[941] = "0b000000000000000101";
        ram[942] = "0b000000000000000110";
        ram[943] = "0b000000000000000110";
        ram[944] = "0b000000000000000110";
        ram[945] = "0b000000000000000111";
        ram[946] = "0b000000000000000111";
        ram[947] = "0b000000000000001000";
        ram[948] = "0b000000000000001000";
        ram[949] = "0b000000000000001001";
        ram[950] = "0b000000000000001010";
        ram[951] = "0b000000000000001010";
        ram[952] = "0b000000000000001011";
        ram[953] = "0b000000000000001100";
        ram[954] = "0b000000000000001100";
        ram[955] = "0b000000000000001101";
        ram[956] = "0b000000000000001110";
        ram[957] = "0b000000000000001111";
        ram[958] = "0b000000000000010000";
        ram[959] = "0b000000000000010001";
        ram[960] = "0b000000000000010010";
        ram[961] = "0b000000000000010011";
        ram[962] = "0b000000000000010101";
        ram[963] = "0b000000000000010110";
        ram[964] = "0b000000000000011000";
        ram[965] = "0b000000000000011001";
        ram[966] = "0b000000000000011011";
        ram[967] = "0b000000000000011101";
        ram[968] = "0b000000000000011110";
        ram[969] = "0b000000000000100000";
        ram[970] = "0b000000000000100011";
        ram[971] = "0b000000000000100101";
        ram[972] = "0b000000000000100111";
        ram[973] = "0b000000000000101010";
        ram[974] = "0b000000000000101100";
        ram[975] = "0b000000000000101111";
        ram[976] = "0b000000000000110010";
        ram[977] = "0b000000000000110110";
        ram[978] = "0b000000000000111001";
        ram[979] = "0b000000000000111101";
        ram[980] = "0b000000000001000001";
        ram[981] = "0b000000000001000101";
        ram[982] = "0b000000000001001010";
        ram[983] = "0b000000000001001110";
        ram[984] = "0b000000000001010100";
        ram[985] = "0b000000000001011001";
        ram[986] = "0b000000000001011111";
        ram[987] = "0b000000000001100101";
        ram[988] = "0b000000000001101011";
        ram[989] = "0b000000000001110010";
        ram[990] = "0b000000000001111010";
        ram[991] = "0b000000000010000010";
        ram[992] = "0b000000000010001010";
        ram[993] = "0b000000000010010011";
        ram[994] = "0b000000000010011101";
        ram[995] = "0b000000000010100111";
        ram[996] = "0b000000000010110001";
        ram[997] = "0b000000000010111101";
        ram[998] = "0b000000000011001001";
        ram[999] = "0b000000000011010110";
        ram[1000] = "0b000000000011100100";
        ram[1001] = "0b000000000011110011";
        ram[1002] = "0b000000000100000010";
        ram[1003] = "0b000000000100010011";
        ram[1004] = "0b000000000100100101";
        ram[1005] = "0b000000000100111000";
        ram[1006] = "0b000000000101001100";
        ram[1007] = "0b000000000101100001";
        ram[1008] = "0b000000000101111000";
        ram[1009] = "0b000000000110010001";
        ram[1010] = "0b000000000110101010";
        ram[1011] = "0b000000000111000110";
        ram[1012] = "0b000000000111100011";
        ram[1013] = "0b000000001000000010";
        ram[1014] = "0b000000001000100100";
        ram[1015] = "0b000000001001000111";
        ram[1016] = "0b000000001001101101";
        ram[1017] = "0b000000001010010101";
        ram[1018] = "0b000000001010111111";
        ram[1019] = "0b000000001011101101";
        ram[1020] = "0b000000001100011101";
        ram[1021] = "0b000000001101010000";
        ram[1022] = "0b000000001110000111";
        ram[1023] = "0b000000001111000001";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
  sensitive<<clk.pos();


SC_METHOD(prc_write_2);
  sensitive<<clk.pos();


SC_METHOD(prc_write_3);
  sensitive<<clk.pos();


SC_METHOD(prc_write_4);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


void prc_write_1()
{
    if (ce1.read() == sc_dt::Log_1) 
    {
            if(address1.read().is_01() && address1.read().to_uint()<AddressRange)
              q1 = ram[address1.read().to_uint()];
            else
              q1 = sc_lv<DataWidth>();
    }
}


void prc_write_2()
{
    if (ce2.read() == sc_dt::Log_1) 
    {
            if(address2.read().is_01() && address2.read().to_uint()<AddressRange)
              q2 = ram[address2.read().to_uint()];
            else
              q2 = sc_lv<DataWidth>();
    }
}


void prc_write_3()
{
    if (ce3.read() == sc_dt::Log_1) 
    {
            if(address3.read().is_01() && address3.read().to_uint()<AddressRange)
              q3 = ram[address3.read().to_uint()];
            else
              q3 = sc_lv<DataWidth>();
    }
}


void prc_write_4()
{
    if (ce4.read() == sc_dt::Log_1) 
    {
            if(address4.read().is_01() && address4.read().to_uint()<AddressRange)
              q4 = ram[address4.read().to_uint()];
            else
              q4 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1) {


static const unsigned DataWidth = 18;
static const unsigned AddressRange = 1024;
static const unsigned AddressWidth = 10;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in<sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in<sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in <sc_lv<AddressWidth> > address4;
sc_core::sc_in<sc_logic> ce4;
sc_core::sc_out <sc_lv<DataWidth> > q4;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_ram* meminst;


SC_CTOR(softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1) {
meminst = new softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_ram("softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->address2(address2);
meminst->ce2(ce2);
meminst->q2(q2);

meminst->address3(address3);
meminst->ce3(ce3);
meminst->q3(q3);

meminst->address4(address4);
meminst->ce4(ce4);
meminst->q4(q4);

meminst->reset(reset);
meminst->clk(clk);
}
~softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config13_s_exp_table1() {
    delete meminst;
}


};//endmodule
#endif
