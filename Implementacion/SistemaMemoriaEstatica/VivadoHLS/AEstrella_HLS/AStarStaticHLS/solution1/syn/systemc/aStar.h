// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _aStar_HH_
#define _aStar_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "aStar_adjacentNodes.h"
#include "aStar_calculateCost.h"
#include "aStar_openNodes.h"
#include "aStar_node_coordinates_0.h"
#include "aStar_node_coordinates_1.h"
#include "aStar_node_heuristic.h"
#include "aStar_adjacentPosition_2.h"

namespace ap_rtl {

struct aStar : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > xStart;
    sc_in< sc_lv<32> > yStart;
    sc_in< sc_lv<32> > xFinish;
    sc_in< sc_lv<32> > yFinish;
    sc_out< sc_lv<12> > map_r_address0;
    sc_out< sc_logic > map_r_ce0;
    sc_out< sc_logic > map_r_we0;
    sc_out< sc_lv<32> > map_r_d0;
    sc_in< sc_lv<32> > map_r_q0;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    aStar(sc_module_name name);
    SC_HAS_PROCESS(aStar);

    ~aStar();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    aStar_openNodes* openNodes_U;
    aStar_node_coordinates_0* node_coordinates_0_U;
    aStar_node_coordinates_1* node_coordinates_1_U;
    aStar_openNodes* node_visited_U;
    aStar_node_coordinates_1* node_father_U;
    aStar_node_coordinates_1* node_cost_U;
    aStar_node_heuristic* node_heuristic_U;
    aStar_node_coordinates_1* node_costPlusHeuristic_U;
    aStar_adjacentPosition_2* adjacentPosition_2_U;
    aStar_adjacentPosition_2* adjacentPosition_0_U;
    aStar_adjacentPosition_2* adjacentPosition_1_U;
    aStar_adjacentNodes* grp_aStar_adjacentNodes_fu_684;
    aStar_calculateCost* grp_aStar_calculateCost_fu_696;
    sc_signal< sc_lv<32> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_48;
    sc_signal< sc_lv<12> > openNodes_address0;
    sc_signal< sc_logic > openNodes_ce0;
    sc_signal< sc_logic > openNodes_we0;
    sc_signal< sc_lv<1> > openNodes_d0;
    sc_signal< sc_lv<1> > openNodes_q0;
    sc_signal< sc_lv<12> > node_coordinates_0_address0;
    sc_signal< sc_logic > node_coordinates_0_ce0;
    sc_signal< sc_logic > node_coordinates_0_we0;
    sc_signal< sc_lv<6> > node_coordinates_0_d0;
    sc_signal< sc_lv<6> > node_coordinates_0_q0;
    sc_signal< sc_lv<12> > node_coordinates_1_address0;
    sc_signal< sc_logic > node_coordinates_1_ce0;
    sc_signal< sc_logic > node_coordinates_1_we0;
    sc_signal< sc_lv<32> > node_coordinates_1_d0;
    sc_signal< sc_lv<32> > node_coordinates_1_q0;
    sc_signal< sc_lv<12> > node_visited_address0;
    sc_signal< sc_logic > node_visited_ce0;
    sc_signal< sc_logic > node_visited_we0;
    sc_signal< sc_lv<1> > node_visited_d0;
    sc_signal< sc_lv<1> > node_visited_q0;
    sc_signal< sc_lv<12> > node_father_address0;
    sc_signal< sc_logic > node_father_ce0;
    sc_signal< sc_logic > node_father_we0;
    sc_signal< sc_lv<32> > node_father_d0;
    sc_signal< sc_lv<32> > node_father_q0;
    sc_signal< sc_lv<12> > node_cost_address0;
    sc_signal< sc_logic > node_cost_ce0;
    sc_signal< sc_logic > node_cost_we0;
    sc_signal< sc_lv<32> > node_cost_d0;
    sc_signal< sc_lv<32> > node_cost_q0;
    sc_signal< sc_lv<12> > node_heuristic_address0;
    sc_signal< sc_logic > node_heuristic_ce0;
    sc_signal< sc_logic > node_heuristic_we0;
    sc_signal< sc_lv<32> > node_heuristic_d0;
    sc_signal< sc_lv<12> > node_costPlusHeuristic_address0;
    sc_signal< sc_logic > node_costPlusHeuristic_ce0;
    sc_signal< sc_logic > node_costPlusHeuristic_we0;
    sc_signal< sc_lv<32> > node_costPlusHeuristic_d0;
    sc_signal< sc_lv<32> > node_costPlusHeuristic_q0;
    sc_signal< sc_lv<3> > adjacentPosition_2_address0;
    sc_signal< sc_logic > adjacentPosition_2_ce0;
    sc_signal< sc_logic > adjacentPosition_2_we0;
    sc_signal< sc_lv<32> > adjacentPosition_2_d0;
    sc_signal< sc_lv<32> > adjacentPosition_2_q0;
    sc_signal< sc_lv<3> > adjacentPosition_2_address1;
    sc_signal< sc_logic > adjacentPosition_2_ce1;
    sc_signal< sc_logic > adjacentPosition_2_we1;
    sc_signal< sc_lv<32> > adjacentPosition_2_d1;
    sc_signal< sc_lv<3> > adjacentPosition_0_address0;
    sc_signal< sc_logic > adjacentPosition_0_ce0;
    sc_signal< sc_logic > adjacentPosition_0_we0;
    sc_signal< sc_lv<32> > adjacentPosition_0_d0;
    sc_signal< sc_lv<32> > adjacentPosition_0_q0;
    sc_signal< sc_lv<3> > adjacentPosition_0_address1;
    sc_signal< sc_logic > adjacentPosition_0_ce1;
    sc_signal< sc_logic > adjacentPosition_0_we1;
    sc_signal< sc_lv<32> > adjacentPosition_0_d1;
    sc_signal< sc_lv<3> > adjacentPosition_1_address0;
    sc_signal< sc_logic > adjacentPosition_1_ce0;
    sc_signal< sc_logic > adjacentPosition_1_we0;
    sc_signal< sc_lv<32> > adjacentPosition_1_d0;
    sc_signal< sc_lv<32> > adjacentPosition_1_q0;
    sc_signal< sc_lv<3> > adjacentPosition_1_address1;
    sc_signal< sc_logic > adjacentPosition_1_ce1;
    sc_signal< sc_logic > adjacentPosition_1_we1;
    sc_signal< sc_lv<32> > adjacentPosition_1_d1;
    sc_signal< sc_lv<32> > reg_718;
    sc_signal< sc_logic > ap_sig_cseq_ST_st7_fsm_6;
    sc_signal< bool > ap_sig_bdd_189;
    sc_signal< sc_logic > ap_sig_cseq_ST_st20_fsm_19;
    sc_signal< bool > ap_sig_bdd_196;
    sc_signal< sc_lv<32> > grp_fu_708_p2;
    sc_signal< sc_lv<32> > reg_723;
    sc_signal< sc_logic > ap_sig_cseq_ST_st9_fsm_8;
    sc_signal< bool > ap_sig_bdd_206;
    sc_signal< sc_logic > ap_sig_cseq_ST_st22_fsm_21;
    sc_signal< bool > ap_sig_bdd_213;
    sc_signal< sc_lv<32> > grp_fu_713_p2;
    sc_signal< sc_lv<32> > reg_727;
    sc_signal< sc_lv<6> > x_fu_783_p1;
    sc_signal< sc_lv<6> > x_reg_1304;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_236;
    sc_signal< sc_lv<12> > i_1_fu_793_p2;
    sc_signal< sc_lv<12> > i_1_reg_1314;
    sc_signal< sc_lv<1> > or_cond_i_fu_811_p2;
    sc_signal< sc_lv<1> > or_cond_i_reg_1319;
    sc_signal< sc_lv<1> > exitcond_i_fu_787_p2;
    sc_signal< sc_lv<32> > position_5_fu_822_p2;
    sc_signal< sc_lv<32> > position_5_reg_1324;
    sc_signal< sc_lv<32> > y_1_fu_833_p3;
    sc_signal< sc_lv<32> > y_1_reg_1330;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_bdd_257;
    sc_signal< sc_lv<4> > i_2_fu_916_p2;
    sc_signal< sc_lv<4> > i_2_reg_1347;
    sc_signal< sc_logic > ap_sig_cseq_ST_st6_fsm_5;
    sc_signal< bool > ap_sig_bdd_268;
    sc_signal< sc_lv<64> > tmp_17_fu_922_p1;
    sc_signal< sc_lv<64> > tmp_17_reg_1352;
    sc_signal< sc_lv<1> > exitcond1_fu_910_p2;
    sc_signal< sc_lv<64> > tmp_18_fu_927_p1;
    sc_signal< sc_lv<64> > tmp_18_reg_1363;
    sc_signal< sc_lv<1> > grp_fu_737_p2;
    sc_signal< sc_lv<1> > or_cond_reg_1377;
    sc_signal< sc_logic > ap_sig_cseq_ST_st8_fsm_7;
    sc_signal< bool > ap_sig_bdd_288;
    sc_signal< sc_lv<32> > tmp_i1_fu_932_p2;
    sc_signal< sc_lv<32> > tmp_i1_reg_1391;
    sc_signal< sc_logic > ap_sig_cseq_ST_st10_fsm_9;
    sc_signal< bool > ap_sig_bdd_303;
    sc_signal< sc_logic > grp_aStar_calculateCost_fu_696_ap_done;
    sc_signal< sc_logic > ap_sig_cseq_ST_st11_fsm_10;
    sc_signal< bool > ap_sig_bdd_316;
    sc_signal< sc_lv<32> > positionBestOption_i_cast_fu_961_p1;
    sc_signal< sc_lv<32> > positionBestOption_i_cast_reg_1403;
    sc_signal< sc_logic > ap_sig_cseq_ST_st13_fsm_12;
    sc_signal< bool > ap_sig_bdd_325;
    sc_signal< sc_lv<12> > i_4_fu_971_p2;
    sc_signal< sc_lv<12> > i_4_reg_1411;
    sc_signal< sc_lv<1> > exitcond_i1_fu_965_p2;
    sc_signal< sc_lv<32> > finalPosition_fu_994_p2;
    sc_signal< sc_lv<32> > finalPosition_reg_1426;
    sc_signal< sc_lv<32> > positionBestOption_2_i_fu_1020_p3;
    sc_signal< sc_logic > ap_sig_cseq_ST_st14_fsm_13;
    sc_signal< bool > ap_sig_bdd_347;
    sc_signal< sc_lv<32> > bestOption_2_i_fu_1028_p3;
    sc_signal< sc_lv<12> > node_coordinates_0_addr_1_reg_1442;
    sc_signal< sc_logic > ap_sig_cseq_ST_st15_fsm_14;
    sc_signal< bool > ap_sig_bdd_358;
    sc_signal< sc_lv<12> > node_coordinates_1_addr_reg_1447;
    sc_signal< sc_lv<6> > node_coordinates_0_load_reg_1452;
    sc_signal< sc_logic > ap_sig_cseq_ST_st16_fsm_15;
    sc_signal< bool > ap_sig_bdd_368;
    sc_signal< sc_lv<32> > node_coordinates_1_load_reg_1457;
    sc_signal< sc_lv<32> > extLd_fu_1042_p1;
    sc_signal< sc_lv<32> > extLd_reg_1462;
    sc_signal< sc_logic > ap_sig_cseq_ST_st17_fsm_16;
    sc_signal< bool > ap_sig_bdd_378;
    sc_signal< sc_lv<4> > i_3_fu_1052_p2;
    sc_signal< sc_lv<4> > i_3_reg_1470;
    sc_signal< sc_logic > ap_sig_cseq_ST_st19_fsm_18;
    sc_signal< bool > ap_sig_bdd_387;
    sc_signal< sc_lv<64> > tmp_21_fu_1058_p1;
    sc_signal< sc_lv<64> > tmp_21_reg_1475;
    sc_signal< sc_lv<1> > exitcond_fu_1046_p2;
    sc_signal< sc_lv<64> > tmp_23_fu_1063_p1;
    sc_signal< sc_lv<64> > tmp_23_reg_1486;
    sc_signal< sc_lv<1> > or_cond1_reg_1500;
    sc_signal< sc_logic > ap_sig_cseq_ST_st21_fsm_20;
    sc_signal< bool > ap_sig_bdd_406;
    sc_signal< sc_lv<32> > tmp_i5_fu_1081_p2;
    sc_signal< sc_lv<32> > tmp_i5_reg_1514;
    sc_signal< sc_logic > ap_sig_cseq_ST_st23_fsm_22;
    sc_signal< bool > ap_sig_bdd_420;
    sc_signal< sc_logic > ap_sig_cseq_ST_st25_fsm_24;
    sc_signal< bool > ap_sig_bdd_429;
    sc_signal< sc_lv<32> > positionBestOption_i11_cast_fu_1110_p1;
    sc_signal< sc_lv<32> > positionBestOption_i11_cast_reg_1526;
    sc_signal< sc_logic > ap_sig_cseq_ST_st27_fsm_26;
    sc_signal< bool > ap_sig_bdd_438;
    sc_signal< sc_lv<12> > i_5_fu_1120_p2;
    sc_signal< sc_lv<12> > i_5_reg_1534;
    sc_signal< sc_lv<1> > exitcond_i2_fu_1114_p2;
    sc_signal< sc_lv<32> > positionBestOption_2_i1_fu_1164_p3;
    sc_signal< sc_logic > ap_sig_cseq_ST_st28_fsm_27;
    sc_signal< bool > ap_sig_bdd_456;
    sc_signal< sc_lv<32> > bestOption_2_i1_fu_1172_p3;
    sc_signal< sc_lv<64> > tmp_25_fu_1180_p1;
    sc_signal< sc_lv<64> > tmp_25_reg_1562;
    sc_signal< sc_logic > ap_sig_cseq_ST_st29_fsm_28;
    sc_signal< bool > ap_sig_bdd_467;
    sc_signal< sc_lv<32> > position_reg_1573;
    sc_signal< sc_logic > ap_sig_cseq_ST_st30_fsm_29;
    sc_signal< bool > ap_sig_bdd_477;
    sc_signal< sc_lv<1> > tmp_26_fu_1185_p2;
    sc_signal< sc_lv<13> > tmp_33_fu_1267_p2;
    sc_signal< sc_lv<13> > tmp_33_reg_1591;
    sc_signal< sc_logic > ap_sig_cseq_ST_st31_fsm_30;
    sc_signal< bool > ap_sig_bdd_493;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_ap_start;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_ap_done;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_ap_idle;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_ap_ready;
    sc_signal< sc_lv<32> > grp_aStar_adjacentNodes_fu_684_x;
    sc_signal< sc_lv<32> > grp_aStar_adjacentNodes_fu_684_y;
    sc_signal< sc_lv<3> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_2_address0;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_2_ce0;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_2_we0;
    sc_signal< sc_lv<32> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_2_d0;
    sc_signal< sc_lv<3> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_2_address1;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_2_ce1;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_2_we1;
    sc_signal< sc_lv<32> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_2_d1;
    sc_signal< sc_lv<3> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_0_address0;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_0_ce0;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_0_we0;
    sc_signal< sc_lv<32> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_0_d0;
    sc_signal< sc_lv<3> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_0_address1;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_0_ce1;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_0_we1;
    sc_signal< sc_lv<32> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_0_d1;
    sc_signal< sc_lv<3> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_1_address0;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_1_ce0;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_1_we0;
    sc_signal< sc_lv<32> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_1_d0;
    sc_signal< sc_lv<3> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_1_address1;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_1_ce1;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_adjacentPosition_1_we1;
    sc_signal< sc_lv<32> > grp_aStar_adjacentNodes_fu_684_adjacentPosition_1_d1;
    sc_signal< sc_logic > grp_aStar_calculateCost_fu_696_ap_start;
    sc_signal< sc_logic > grp_aStar_calculateCost_fu_696_ap_idle;
    sc_signal< sc_logic > grp_aStar_calculateCost_fu_696_ap_ready;
    sc_signal< sc_lv<4> > grp_aStar_calculateCost_fu_696_i;
    sc_signal< sc_lv<32> > grp_aStar_calculateCost_fu_696_position;
    sc_signal< sc_lv<12> > grp_aStar_calculateCost_fu_696_node_father_address0;
    sc_signal< sc_logic > grp_aStar_calculateCost_fu_696_node_father_ce0;
    sc_signal< sc_lv<32> > grp_aStar_calculateCost_fu_696_node_father_q0;
    sc_signal< sc_lv<12> > grp_aStar_calculateCost_fu_696_node_cost_address0;
    sc_signal< sc_logic > grp_aStar_calculateCost_fu_696_node_cost_ce0;
    sc_signal< sc_logic > grp_aStar_calculateCost_fu_696_node_cost_we0;
    sc_signal< sc_lv<32> > grp_aStar_calculateCost_fu_696_node_cost_d0;
    sc_signal< sc_lv<32> > grp_aStar_calculateCost_fu_696_node_cost_q0;
    sc_signal< sc_lv<32> > y_i_reg_546;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_bdd_549;
    sc_signal< sc_lv<12> > i_i_reg_558;
    sc_signal< sc_lv<4> > i_reg_570;
    sc_signal< sc_logic > ap_sig_cseq_ST_st5_fsm_4;
    sc_signal< bool > ap_sig_bdd_562;
    sc_signal< sc_logic > ap_sig_cseq_ST_st12_fsm_11;
    sc_signal< bool > ap_sig_bdd_572;
    sc_signal< sc_lv<12> > positionBestOption_reg_582;
    sc_signal< sc_lv<32> > position_3_reg_593;
    sc_signal< sc_lv<32> > bestOption_i_reg_605;
    sc_signal< sc_lv<32> > position3_reg_617;
    sc_signal< sc_lv<1> > tmp_22_fu_1138_p2;
    sc_signal< sc_lv<4> > i1_reg_627;
    sc_signal< sc_logic > ap_sig_cseq_ST_st18_fsm_17;
    sc_signal< bool > ap_sig_bdd_598;
    sc_signal< sc_logic > ap_sig_cseq_ST_st26_fsm_25;
    sc_signal< bool > ap_sig_bdd_606;
    sc_signal< sc_lv<12> > positionBestOption_1_reg_639;
    sc_signal< sc_lv<32> > position_4_reg_650;
    sc_signal< sc_lv<32> > bestOption_i1_reg_663;
    sc_signal< sc_lv<32> > position_1_reg_675;
    sc_signal< sc_logic > ap_sig_cseq_ST_st32_fsm_31;
    sc_signal< bool > ap_sig_bdd_622;
    sc_signal< sc_logic > grp_aStar_adjacentNodes_fu_684_ap_start_ap_start_reg;
    sc_signal< sc_logic > grp_aStar_calculateCost_fu_696_ap_start_ap_start_reg;
    sc_signal< sc_logic > ap_sig_cseq_ST_st24_fsm_23;
    sc_signal< bool > ap_sig_bdd_639;
    sc_signal< sc_lv<64> > tmp_35_cast_fu_882_p1;
    sc_signal< sc_lv<64> > tmp_2_i_fu_887_p1;
    sc_signal< sc_lv<1> > tmp_9_i_fu_896_p2;
    sc_signal< sc_lv<12> > node_visited_addr_1_gep_fu_198_p3;
    sc_signal< sc_lv<64> > tmp_s_fu_902_p1;
    sc_signal< sc_lv<64> > tmp_i7_fu_977_p1;
    sc_signal< sc_lv<64> > tmp_i_fu_983_p1;
    sc_signal< sc_lv<64> > tmp_20_fu_1036_p1;
    sc_signal< sc_lv<64> > tmp_i8_fu_1126_p1;
    sc_signal< sc_lv<64> > tmp_i3_fu_1132_p1;
    sc_signal< sc_lv<64> > tmp_45_cast_fu_1228_p1;
    sc_signal< sc_lv<64> > tmp_49_cast_fu_1273_p1;
    sc_signal< sc_lv<32> > positionFather_1_fu_1072_p3;
    sc_signal< sc_lv<32> > tmp_1_i_fu_954_p2;
    sc_signal< sc_lv<32> > tmp_1_i1_fu_1103_p2;
    sc_signal< sc_lv<1> > grp_fu_731_p2;
    sc_signal< sc_lv<1> > grp_fu_749_p2;
    sc_signal< sc_lv<32> > grp_fu_743_p2;
    sc_signal< sc_lv<1> > grp_fu_769_p2;
    sc_signal< sc_lv<32> > grp_fu_763_p2;
    sc_signal< sc_lv<1> > tmp_4_i_fu_799_p2;
    sc_signal< sc_lv<1> > tmp_5_i_fu_805_p2;
    sc_signal< sc_lv<32> > tmp_1_fu_817_p2;
    sc_signal< sc_lv<32> > y_fu_827_p2;
    sc_signal< sc_lv<11> > tmp_16_fu_844_p3;
    sc_signal< sc_lv<8> > tmp_27_fu_855_p3;
    sc_signal< sc_lv<12> > p_shl_cast_fu_851_p1;
    sc_signal< sc_lv<12> > p_shl1_cast_fu_862_p1;
    sc_signal< sc_lv<12> > tmp_28_fu_866_p2;
    sc_signal< sc_lv<13> > tmp_fu_840_p1;
    sc_signal< sc_lv<13> > tmp_34_cast_fu_872_p1;
    sc_signal< sc_lv<13> > tmp_29_fu_876_p2;
    sc_signal< sc_lv<32> > grp_fu_775_p3;
    sc_signal< sc_lv<32> > grp_fu_755_p3;
    sc_signal< sc_lv<32> > tmp_3_fu_938_p2;
    sc_signal< sc_lv<32> > tmp_4_fu_943_p2;
    sc_signal< sc_lv<32> > tmp1_fu_948_p2;
    sc_signal< sc_lv<32> > tmp_2_fu_989_p2;
    sc_signal< sc_lv<1> > tmp_8_i9_fu_999_p2;
    sc_signal< sc_lv<32> > positionBestOption_positionBes_fu_1005_p3;
    sc_signal< sc_lv<32> > bestOption_1_bestOption_i_fu_1012_p3;
    sc_signal< sc_lv<26> > tmp_5_fu_1068_p1;
    sc_signal< sc_lv<32> > tmp_7_fu_1092_p2;
    sc_signal< sc_lv<32> > tmp_6_fu_1087_p2;
    sc_signal< sc_lv<32> > tmp2_fu_1097_p2;
    sc_signal< sc_lv<1> > tmp_8_i1_fu_1143_p2;
    sc_signal< sc_lv<32> > positionBestOption_positionBes_1_fu_1149_p3;
    sc_signal< sc_lv<32> > bestOption_1_bestOption_i1_fu_1156_p3;
    sc_signal< sc_lv<8> > tmp_9_fu_1194_p1;
    sc_signal< sc_lv<11> > tmp_10_fu_1205_p1;
    sc_signal< sc_lv<13> > p_shl4_cast_fu_1197_p3;
    sc_signal< sc_lv<13> > p_shl5_cast_fu_1208_p3;
    sc_signal< sc_lv<13> > tmp_8_fu_1191_p1;
    sc_signal< sc_lv<13> > tmp_30_fu_1216_p2;
    sc_signal< sc_lv<13> > tmp_31_fu_1222_p2;
    sc_signal< sc_lv<11> > tmp_12_fu_1237_p3;
    sc_signal< sc_lv<8> > tmp_13_fu_1249_p3;
    sc_signal< sc_lv<13> > p_shl3_cast_fu_1257_p1;
    sc_signal< sc_lv<13> > p_shl2_cast_fu_1245_p1;
    sc_signal< sc_lv<13> > tmp_32_fu_1261_p2;
    sc_signal< sc_lv<13> > tmp_11_fu_1233_p1;
    sc_signal< sc_lv<32> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<32> ap_ST_st1_fsm_0;
    static const sc_lv<32> ap_ST_st2_fsm_1;
    static const sc_lv<32> ap_ST_st3_fsm_2;
    static const sc_lv<32> ap_ST_st4_fsm_3;
    static const sc_lv<32> ap_ST_st5_fsm_4;
    static const sc_lv<32> ap_ST_st6_fsm_5;
    static const sc_lv<32> ap_ST_st7_fsm_6;
    static const sc_lv<32> ap_ST_st8_fsm_7;
    static const sc_lv<32> ap_ST_st9_fsm_8;
    static const sc_lv<32> ap_ST_st10_fsm_9;
    static const sc_lv<32> ap_ST_st11_fsm_10;
    static const sc_lv<32> ap_ST_st12_fsm_11;
    static const sc_lv<32> ap_ST_st13_fsm_12;
    static const sc_lv<32> ap_ST_st14_fsm_13;
    static const sc_lv<32> ap_ST_st15_fsm_14;
    static const sc_lv<32> ap_ST_st16_fsm_15;
    static const sc_lv<32> ap_ST_st17_fsm_16;
    static const sc_lv<32> ap_ST_st18_fsm_17;
    static const sc_lv<32> ap_ST_st19_fsm_18;
    static const sc_lv<32> ap_ST_st20_fsm_19;
    static const sc_lv<32> ap_ST_st21_fsm_20;
    static const sc_lv<32> ap_ST_st22_fsm_21;
    static const sc_lv<32> ap_ST_st23_fsm_22;
    static const sc_lv<32> ap_ST_st24_fsm_23;
    static const sc_lv<32> ap_ST_st25_fsm_24;
    static const sc_lv<32> ap_ST_st26_fsm_25;
    static const sc_lv<32> ap_ST_st27_fsm_26;
    static const sc_lv<32> ap_ST_st28_fsm_27;
    static const sc_lv<32> ap_ST_st29_fsm_28;
    static const sc_lv<32> ap_ST_st30_fsm_29;
    static const sc_lv<32> ap_ST_st31_fsm_30;
    static const sc_lv<32> ap_ST_st32_fsm_31;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_7FFFFFFF;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<12> ap_const_lv12_900;
    static const sc_lv<12> ap_const_lv12_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_adjacentPosition_0_address0();
    void thread_adjacentPosition_0_address1();
    void thread_adjacentPosition_0_ce0();
    void thread_adjacentPosition_0_ce1();
    void thread_adjacentPosition_0_d0();
    void thread_adjacentPosition_0_d1();
    void thread_adjacentPosition_0_we0();
    void thread_adjacentPosition_0_we1();
    void thread_adjacentPosition_1_address0();
    void thread_adjacentPosition_1_address1();
    void thread_adjacentPosition_1_ce0();
    void thread_adjacentPosition_1_ce1();
    void thread_adjacentPosition_1_d0();
    void thread_adjacentPosition_1_d1();
    void thread_adjacentPosition_1_we0();
    void thread_adjacentPosition_1_we1();
    void thread_adjacentPosition_2_address0();
    void thread_adjacentPosition_2_address1();
    void thread_adjacentPosition_2_ce0();
    void thread_adjacentPosition_2_ce1();
    void thread_adjacentPosition_2_d0();
    void thread_adjacentPosition_2_d1();
    void thread_adjacentPosition_2_we0();
    void thread_adjacentPosition_2_we1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_ap_sig_bdd_189();
    void thread_ap_sig_bdd_196();
    void thread_ap_sig_bdd_206();
    void thread_ap_sig_bdd_213();
    void thread_ap_sig_bdd_236();
    void thread_ap_sig_bdd_257();
    void thread_ap_sig_bdd_268();
    void thread_ap_sig_bdd_288();
    void thread_ap_sig_bdd_303();
    void thread_ap_sig_bdd_316();
    void thread_ap_sig_bdd_325();
    void thread_ap_sig_bdd_347();
    void thread_ap_sig_bdd_358();
    void thread_ap_sig_bdd_368();
    void thread_ap_sig_bdd_378();
    void thread_ap_sig_bdd_387();
    void thread_ap_sig_bdd_406();
    void thread_ap_sig_bdd_420();
    void thread_ap_sig_bdd_429();
    void thread_ap_sig_bdd_438();
    void thread_ap_sig_bdd_456();
    void thread_ap_sig_bdd_467();
    void thread_ap_sig_bdd_477();
    void thread_ap_sig_bdd_48();
    void thread_ap_sig_bdd_493();
    void thread_ap_sig_bdd_549();
    void thread_ap_sig_bdd_562();
    void thread_ap_sig_bdd_572();
    void thread_ap_sig_bdd_598();
    void thread_ap_sig_bdd_606();
    void thread_ap_sig_bdd_622();
    void thread_ap_sig_bdd_639();
    void thread_ap_sig_cseq_ST_st10_fsm_9();
    void thread_ap_sig_cseq_ST_st11_fsm_10();
    void thread_ap_sig_cseq_ST_st12_fsm_11();
    void thread_ap_sig_cseq_ST_st13_fsm_12();
    void thread_ap_sig_cseq_ST_st14_fsm_13();
    void thread_ap_sig_cseq_ST_st15_fsm_14();
    void thread_ap_sig_cseq_ST_st16_fsm_15();
    void thread_ap_sig_cseq_ST_st17_fsm_16();
    void thread_ap_sig_cseq_ST_st18_fsm_17();
    void thread_ap_sig_cseq_ST_st19_fsm_18();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st20_fsm_19();
    void thread_ap_sig_cseq_ST_st21_fsm_20();
    void thread_ap_sig_cseq_ST_st22_fsm_21();
    void thread_ap_sig_cseq_ST_st23_fsm_22();
    void thread_ap_sig_cseq_ST_st24_fsm_23();
    void thread_ap_sig_cseq_ST_st25_fsm_24();
    void thread_ap_sig_cseq_ST_st26_fsm_25();
    void thread_ap_sig_cseq_ST_st27_fsm_26();
    void thread_ap_sig_cseq_ST_st28_fsm_27();
    void thread_ap_sig_cseq_ST_st29_fsm_28();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st30_fsm_29();
    void thread_ap_sig_cseq_ST_st31_fsm_30();
    void thread_ap_sig_cseq_ST_st32_fsm_31();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st5_fsm_4();
    void thread_ap_sig_cseq_ST_st6_fsm_5();
    void thread_ap_sig_cseq_ST_st7_fsm_6();
    void thread_ap_sig_cseq_ST_st8_fsm_7();
    void thread_ap_sig_cseq_ST_st9_fsm_8();
    void thread_bestOption_1_bestOption_i1_fu_1156_p3();
    void thread_bestOption_1_bestOption_i_fu_1012_p3();
    void thread_bestOption_2_i1_fu_1172_p3();
    void thread_bestOption_2_i_fu_1028_p3();
    void thread_exitcond1_fu_910_p2();
    void thread_exitcond_fu_1046_p2();
    void thread_exitcond_i1_fu_965_p2();
    void thread_exitcond_i2_fu_1114_p2();
    void thread_exitcond_i_fu_787_p2();
    void thread_extLd_fu_1042_p1();
    void thread_finalPosition_fu_994_p2();
    void thread_grp_aStar_adjacentNodes_fu_684_ap_start();
    void thread_grp_aStar_adjacentNodes_fu_684_x();
    void thread_grp_aStar_adjacentNodes_fu_684_y();
    void thread_grp_aStar_calculateCost_fu_696_ap_start();
    void thread_grp_aStar_calculateCost_fu_696_i();
    void thread_grp_aStar_calculateCost_fu_696_node_cost_q0();
    void thread_grp_aStar_calculateCost_fu_696_node_father_q0();
    void thread_grp_aStar_calculateCost_fu_696_position();
    void thread_grp_fu_708_p2();
    void thread_grp_fu_713_p2();
    void thread_grp_fu_731_p2();
    void thread_grp_fu_737_p2();
    void thread_grp_fu_743_p2();
    void thread_grp_fu_749_p2();
    void thread_grp_fu_755_p3();
    void thread_grp_fu_763_p2();
    void thread_grp_fu_769_p2();
    void thread_grp_fu_775_p3();
    void thread_i_1_fu_793_p2();
    void thread_i_2_fu_916_p2();
    void thread_i_3_fu_1052_p2();
    void thread_i_4_fu_971_p2();
    void thread_i_5_fu_1120_p2();
    void thread_map_r_address0();
    void thread_map_r_ce0();
    void thread_map_r_d0();
    void thread_map_r_we0();
    void thread_node_coordinates_0_address0();
    void thread_node_coordinates_0_ce0();
    void thread_node_coordinates_0_d0();
    void thread_node_coordinates_0_we0();
    void thread_node_coordinates_1_address0();
    void thread_node_coordinates_1_ce0();
    void thread_node_coordinates_1_d0();
    void thread_node_coordinates_1_we0();
    void thread_node_costPlusHeuristic_address0();
    void thread_node_costPlusHeuristic_ce0();
    void thread_node_costPlusHeuristic_d0();
    void thread_node_costPlusHeuristic_we0();
    void thread_node_cost_address0();
    void thread_node_cost_ce0();
    void thread_node_cost_d0();
    void thread_node_cost_we0();
    void thread_node_father_address0();
    void thread_node_father_ce0();
    void thread_node_father_d0();
    void thread_node_father_we0();
    void thread_node_heuristic_address0();
    void thread_node_heuristic_ce0();
    void thread_node_heuristic_d0();
    void thread_node_heuristic_we0();
    void thread_node_visited_addr_1_gep_fu_198_p3();
    void thread_node_visited_address0();
    void thread_node_visited_ce0();
    void thread_node_visited_d0();
    void thread_node_visited_we0();
    void thread_openNodes_address0();
    void thread_openNodes_ce0();
    void thread_openNodes_d0();
    void thread_openNodes_we0();
    void thread_or_cond_i_fu_811_p2();
    void thread_p_shl1_cast_fu_862_p1();
    void thread_p_shl2_cast_fu_1245_p1();
    void thread_p_shl3_cast_fu_1257_p1();
    void thread_p_shl4_cast_fu_1197_p3();
    void thread_p_shl5_cast_fu_1208_p3();
    void thread_p_shl_cast_fu_851_p1();
    void thread_positionBestOption_2_i1_fu_1164_p3();
    void thread_positionBestOption_2_i_fu_1020_p3();
    void thread_positionBestOption_i11_cast_fu_1110_p1();
    void thread_positionBestOption_i_cast_fu_961_p1();
    void thread_positionBestOption_positionBes_1_fu_1149_p3();
    void thread_positionBestOption_positionBes_fu_1005_p3();
    void thread_positionFather_1_fu_1072_p3();
    void thread_position_5_fu_822_p2();
    void thread_tmp1_fu_948_p2();
    void thread_tmp2_fu_1097_p2();
    void thread_tmp_10_fu_1205_p1();
    void thread_tmp_11_fu_1233_p1();
    void thread_tmp_12_fu_1237_p3();
    void thread_tmp_13_fu_1249_p3();
    void thread_tmp_16_fu_844_p3();
    void thread_tmp_17_fu_922_p1();
    void thread_tmp_18_fu_927_p1();
    void thread_tmp_1_fu_817_p2();
    void thread_tmp_1_i1_fu_1103_p2();
    void thread_tmp_1_i_fu_954_p2();
    void thread_tmp_20_fu_1036_p1();
    void thread_tmp_21_fu_1058_p1();
    void thread_tmp_22_fu_1138_p2();
    void thread_tmp_23_fu_1063_p1();
    void thread_tmp_25_fu_1180_p1();
    void thread_tmp_26_fu_1185_p2();
    void thread_tmp_27_fu_855_p3();
    void thread_tmp_28_fu_866_p2();
    void thread_tmp_29_fu_876_p2();
    void thread_tmp_2_fu_989_p2();
    void thread_tmp_2_i_fu_887_p1();
    void thread_tmp_30_fu_1216_p2();
    void thread_tmp_31_fu_1222_p2();
    void thread_tmp_32_fu_1261_p2();
    void thread_tmp_33_fu_1267_p2();
    void thread_tmp_34_cast_fu_872_p1();
    void thread_tmp_35_cast_fu_882_p1();
    void thread_tmp_3_fu_938_p2();
    void thread_tmp_45_cast_fu_1228_p1();
    void thread_tmp_49_cast_fu_1273_p1();
    void thread_tmp_4_fu_943_p2();
    void thread_tmp_4_i_fu_799_p2();
    void thread_tmp_5_fu_1068_p1();
    void thread_tmp_5_i_fu_805_p2();
    void thread_tmp_6_fu_1087_p2();
    void thread_tmp_7_fu_1092_p2();
    void thread_tmp_8_fu_1191_p1();
    void thread_tmp_8_i1_fu_1143_p2();
    void thread_tmp_8_i9_fu_999_p2();
    void thread_tmp_9_fu_1194_p1();
    void thread_tmp_9_i_fu_896_p2();
    void thread_tmp_fu_840_p1();
    void thread_tmp_i1_fu_932_p2();
    void thread_tmp_i3_fu_1132_p1();
    void thread_tmp_i5_fu_1081_p2();
    void thread_tmp_i7_fu_977_p1();
    void thread_tmp_i8_fu_1126_p1();
    void thread_tmp_i_fu_983_p1();
    void thread_tmp_s_fu_902_p1();
    void thread_x_fu_783_p1();
    void thread_y_1_fu_833_p3();
    void thread_y_fu_827_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
