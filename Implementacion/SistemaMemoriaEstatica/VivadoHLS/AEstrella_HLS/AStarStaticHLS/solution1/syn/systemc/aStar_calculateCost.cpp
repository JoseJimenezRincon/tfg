// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "aStar_calculateCost.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic aStar_calculateCost::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic aStar_calculateCost::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> aStar_calculateCost::ap_ST_st1_fsm_0 = "1";
const sc_lv<5> aStar_calculateCost::ap_ST_st2_fsm_1 = "10";
const sc_lv<5> aStar_calculateCost::ap_ST_st3_fsm_2 = "100";
const sc_lv<5> aStar_calculateCost::ap_ST_st4_fsm_3 = "1000";
const sc_lv<5> aStar_calculateCost::ap_ST_st5_fsm_4 = "10000";
const sc_lv<32> aStar_calculateCost::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> aStar_calculateCost::ap_const_lv1_1 = "1";
const sc_lv<32> aStar_calculateCost::ap_const_lv32_1 = "1";
const sc_lv<32> aStar_calculateCost::ap_const_lv32_2 = "10";
const sc_lv<1> aStar_calculateCost::ap_const_lv1_0 = "0";
const sc_lv<32> aStar_calculateCost::ap_const_lv32_3 = "11";
const sc_lv<32> aStar_calculateCost::ap_const_lv32_4 = "100";
const sc_lv<2> aStar_calculateCost::ap_const_lv2_1 = "1";
const sc_lv<32> aStar_calculateCost::ap_const_lv32_A = "1010";
const sc_lv<32> aStar_calculateCost::ap_const_lv32_E = "1110";

aStar_calculateCost::aStar_calculateCost(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_ap_sig_bdd_23);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_58);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_67);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_83);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_97);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_bdd_23 );

    SC_METHOD(thread_ap_sig_cseq_ST_st2_fsm_1);
    sensitive << ( ap_sig_bdd_58 );

    SC_METHOD(thread_ap_sig_cseq_ST_st3_fsm_2);
    sensitive << ( ap_sig_bdd_67 );

    SC_METHOD(thread_ap_sig_cseq_ST_st4_fsm_3);
    sensitive << ( ap_sig_bdd_83 );

    SC_METHOD(thread_ap_sig_cseq_ST_st5_fsm_4);
    sensitive << ( ap_sig_bdd_97 );

    SC_METHOD(thread_icmp_fu_98_p2);
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );
    sensitive << ( tmp_fu_88_p4 );

    SC_METHOD(thread_node_cost_addr_1_gep_fu_62_p3);
    sensitive << ( tmp_s_reg_122 );
    sensitive << ( icmp_fu_98_p2 );
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );

    SC_METHOD(thread_node_cost_address0);
    sensitive << ( tmp_s_reg_122 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( icmp_fu_98_p2 );
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );
    sensitive << ( node_cost_addr_2_reg_147 );
    sensitive << ( tmp_2_fu_83_p1 );
    sensitive << ( node_cost_addr_1_gep_fu_62_p3 );
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_node_cost_ce0);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( icmp_fu_98_p2 );
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_node_cost_d0);
    sensitive << ( icmp_fu_98_p2 );
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );
    sensitive << ( tmp_7_reg_152 );
    sensitive << ( tmp_3_fu_104_p2 );
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_node_cost_we0);
    sensitive << ( icmp_fu_98_p2 );
    sensitive << ( icmp_reg_138 );
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_node_father_address0);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( tmp_s_fu_78_p1 );

    SC_METHOD(thread_node_father_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_tmp1_fu_111_p2);
    sensitive << ( node_cost_q0 );

    SC_METHOD(thread_tmp_2_fu_83_p1);
    sensitive << ( node_father_q0 );

    SC_METHOD(thread_tmp_3_fu_104_p2);
    sensitive << ( node_cost_q0 );

    SC_METHOD(thread_tmp_7_fu_117_p2);
    sensitive << ( node_cost_load_reg_142 );
    sensitive << ( tmp1_fu_111_p2 );

    SC_METHOD(thread_tmp_fu_88_p4);
    sensitive << ( i );

    SC_METHOD(thread_tmp_s_fu_78_p1);
    sensitive << ( position );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( icmp_fu_98_p2 );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "aStar_calculateCost_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, i, "(port)i");
    sc_trace(mVcdFile, position, "(port)position");
    sc_trace(mVcdFile, node_father_address0, "(port)node_father_address0");
    sc_trace(mVcdFile, node_father_ce0, "(port)node_father_ce0");
    sc_trace(mVcdFile, node_father_q0, "(port)node_father_q0");
    sc_trace(mVcdFile, node_cost_address0, "(port)node_cost_address0");
    sc_trace(mVcdFile, node_cost_ce0, "(port)node_cost_ce0");
    sc_trace(mVcdFile, node_cost_we0, "(port)node_cost_we0");
    sc_trace(mVcdFile, node_cost_d0, "(port)node_cost_d0");
    sc_trace(mVcdFile, node_cost_q0, "(port)node_cost_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_bdd_23, "ap_sig_bdd_23");
    sc_trace(mVcdFile, tmp_s_fu_78_p1, "tmp_s_fu_78_p1");
    sc_trace(mVcdFile, tmp_s_reg_122, "tmp_s_reg_122");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st2_fsm_1, "ap_sig_cseq_ST_st2_fsm_1");
    sc_trace(mVcdFile, ap_sig_bdd_58, "ap_sig_bdd_58");
    sc_trace(mVcdFile, icmp_fu_98_p2, "icmp_fu_98_p2");
    sc_trace(mVcdFile, icmp_reg_138, "icmp_reg_138");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st3_fsm_2, "ap_sig_cseq_ST_st3_fsm_2");
    sc_trace(mVcdFile, ap_sig_bdd_67, "ap_sig_bdd_67");
    sc_trace(mVcdFile, node_cost_load_reg_142, "node_cost_load_reg_142");
    sc_trace(mVcdFile, node_cost_addr_2_reg_147, "node_cost_addr_2_reg_147");
    sc_trace(mVcdFile, tmp_7_fu_117_p2, "tmp_7_fu_117_p2");
    sc_trace(mVcdFile, tmp_7_reg_152, "tmp_7_reg_152");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st4_fsm_3, "ap_sig_cseq_ST_st4_fsm_3");
    sc_trace(mVcdFile, ap_sig_bdd_83, "ap_sig_bdd_83");
    sc_trace(mVcdFile, tmp_2_fu_83_p1, "tmp_2_fu_83_p1");
    sc_trace(mVcdFile, node_cost_addr_1_gep_fu_62_p3, "node_cost_addr_1_gep_fu_62_p3");
    sc_trace(mVcdFile, tmp_3_fu_104_p2, "tmp_3_fu_104_p2");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st5_fsm_4, "ap_sig_cseq_ST_st5_fsm_4");
    sc_trace(mVcdFile, ap_sig_bdd_97, "ap_sig_bdd_97");
    sc_trace(mVcdFile, tmp_fu_88_p4, "tmp_fu_88_p4");
    sc_trace(mVcdFile, tmp1_fu_111_p2, "tmp1_fu_111_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

aStar_calculateCost::~aStar_calculateCost() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void aStar_calculateCost::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        icmp_reg_138 = icmp_fu_98_p2.read();
        node_cost_load_reg_142 = node_cost_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && !esl_seteq<1,1,1>(icmp_fu_98_p2.read(), ap_const_lv1_0))) {
        node_cost_addr_2_reg_147 =  (sc_lv<12>) (tmp_s_reg_122.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        tmp_7_reg_152 = tmp_7_fu_117_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        tmp_s_reg_122 = tmp_s_fu_78_p1.read();
    }
}

void aStar_calculateCost::thread_ap_done() {
    if (((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void aStar_calculateCost::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void aStar_calculateCost::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void aStar_calculateCost::thread_ap_sig_bdd_23() {
    ap_sig_bdd_23 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void aStar_calculateCost::thread_ap_sig_bdd_58() {
    ap_sig_bdd_58 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void aStar_calculateCost::thread_ap_sig_bdd_67() {
    ap_sig_bdd_67 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void aStar_calculateCost::thread_ap_sig_bdd_83() {
    ap_sig_bdd_83 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void aStar_calculateCost::thread_ap_sig_bdd_97() {
    ap_sig_bdd_97 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(4, 4));
}

void aStar_calculateCost::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_23.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void aStar_calculateCost::thread_ap_sig_cseq_ST_st2_fsm_1() {
    if (ap_sig_bdd_58.read()) {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    }
}

void aStar_calculateCost::thread_ap_sig_cseq_ST_st3_fsm_2() {
    if (ap_sig_bdd_67.read()) {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_0;
    }
}

void aStar_calculateCost::thread_ap_sig_cseq_ST_st4_fsm_3() {
    if (ap_sig_bdd_83.read()) {
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_0;
    }
}

void aStar_calculateCost::thread_ap_sig_cseq_ST_st5_fsm_4() {
    if (ap_sig_bdd_97.read()) {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_0;
    }
}

void aStar_calculateCost::thread_icmp_fu_98_p2() {
    icmp_fu_98_p2 = (!tmp_fu_88_p4.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_fu_88_p4.read() == ap_const_lv2_1);
}

void aStar_calculateCost::thread_node_cost_addr_1_gep_fu_62_p3() {
    node_cost_addr_1_gep_fu_62_p3 =  (sc_lv<12>) (tmp_s_reg_122.read());
}

void aStar_calculateCost::thread_node_cost_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read())) {
        node_cost_address0 = node_cost_addr_2_reg_147.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && 
                esl_seteq<1,1,1>(icmp_fu_98_p2.read(), ap_const_lv1_0))) {
        node_cost_address0 = node_cost_addr_1_gep_fu_62_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && 
                !esl_seteq<1,1,1>(icmp_fu_98_p2.read(), ap_const_lv1_0))) {
        node_cost_address0 =  (sc_lv<12>) (tmp_s_reg_122.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        node_cost_address0 =  (sc_lv<12>) (tmp_2_fu_83_p1.read());
    } else {
        node_cost_address0 = "XXXXXXXXXXXX";
    }
}

void aStar_calculateCost::thread_node_cost_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && 
          !esl_seteq<1,1,1>(icmp_fu_98_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && 
          esl_seteq<1,1,1>(icmp_fu_98_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read()))) {
        node_cost_ce0 = ap_const_logic_1;
    } else {
        node_cost_ce0 = ap_const_logic_0;
    }
}

void aStar_calculateCost::thread_node_cost_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read())) {
        node_cost_d0 = tmp_7_reg_152.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && 
                esl_seteq<1,1,1>(icmp_fu_98_p2.read(), ap_const_lv1_0))) {
        node_cost_d0 = tmp_3_fu_104_p2.read();
    } else {
        node_cost_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void aStar_calculateCost::thread_node_cost_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && 
          esl_seteq<1,1,1>(icmp_fu_98_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read()) && 
          !esl_seteq<1,1,1>(icmp_reg_138.read(), ap_const_lv1_0)))) {
        node_cost_we0 = ap_const_logic_1;
    } else {
        node_cost_we0 = ap_const_logic_0;
    }
}

void aStar_calculateCost::thread_node_father_address0() {
    node_father_address0 =  (sc_lv<12>) (tmp_s_fu_78_p1.read());
}

void aStar_calculateCost::thread_node_father_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        node_father_ce0 = ap_const_logic_1;
    } else {
        node_father_ce0 = ap_const_logic_0;
    }
}

void aStar_calculateCost::thread_tmp1_fu_111_p2() {
    tmp1_fu_111_p2 = (!node_cost_q0.read().is_01() || !ap_const_lv32_E.is_01())? sc_lv<32>(): (sc_biguint<32>(node_cost_q0.read()) + sc_biguint<32>(ap_const_lv32_E));
}

void aStar_calculateCost::thread_tmp_2_fu_83_p1() {
    tmp_2_fu_83_p1 = esl_sext<64,32>(node_father_q0.read());
}

void aStar_calculateCost::thread_tmp_3_fu_104_p2() {
    tmp_3_fu_104_p2 = (!node_cost_q0.read().is_01() || !ap_const_lv32_A.is_01())? sc_lv<32>(): (sc_biguint<32>(node_cost_q0.read()) + sc_biguint<32>(ap_const_lv32_A));
}

void aStar_calculateCost::thread_tmp_7_fu_117_p2() {
    tmp_7_fu_117_p2 = (!tmp1_fu_111_p2.read().is_01() || !node_cost_load_reg_142.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp1_fu_111_p2.read()) + sc_biguint<32>(node_cost_load_reg_142.read()));
}

void aStar_calculateCost::thread_tmp_fu_88_p4() {
    tmp_fu_88_p4 = i.read().range(3, 2);
}

void aStar_calculateCost::thread_tmp_s_fu_78_p1() {
    tmp_s_fu_78_p1 = esl_sext<64,32>(position.read());
}

void aStar_calculateCost::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_st3_fsm_2;
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(icmp_fu_98_p2.read(), ap_const_lv1_0)) {
                ap_NS_fsm = ap_ST_st5_fsm_4;
            } else {
                ap_NS_fsm = ap_ST_st4_fsm_3;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_st5_fsm_4;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_st1_fsm_0;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}

