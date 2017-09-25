/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Kirti Karan/Documents/verilog/mux_wtb/mux_tb.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {15U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static const char *ng5 = "The values are: in= %b";
static const char *ng6 = "The values are: out= %b";
static const char *ng7 = "The values are: select= %b";
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};



static void Initial_41_0(char *t0)
{
    char t5[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    int t21;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);

LAB4:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB7;

LAB8:    t13 = (t0 + 1608);
    t15 = (t0 + 1608);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t14, t17, 2, t18, 32, 1);
    t19 = (t14 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    if (t21 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 4);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t4, 2);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB7:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB8;

LAB9:    xsi_vlogvar_assign_value(t13, t3, 1, *((unsigned int *)t14), 1);
    goto LAB10;

LAB11:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB12;

LAB13:    t13 = (t0 + 1608);
    t15 = (t0 + 1608);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t14, t17, 2, t18, 32, 1);
    t19 = (t14 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    if (t21 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 4);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t4, 2);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB12:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB13;

LAB14:    xsi_vlogvar_assign_value(t13, t3, 1, *((unsigned int *)t14), 1);
    goto LAB15;

LAB16:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB17;

LAB18:    t13 = (t0 + 1608);
    t15 = (t0 + 1608);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t14, t17, 2, t18, 32, 1);
    t19 = (t14 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    if (t21 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t4, 2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB17:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB18;

LAB19:    xsi_vlogvar_assign_value(t13, t3, 1, *((unsigned int *)t14), 1);
    goto LAB20;

LAB21:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB22;

LAB23:    t13 = (t0 + 1608);
    t15 = (t0 + 1608);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t14, t17, 2, t18, 32, 1);
    t19 = (t14 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    if (t21 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 4);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t4, 2);
    goto LAB1;

LAB22:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB23;

LAB24:    xsi_vlogvar_assign_value(t13, t3, 1, *((unsigned int *)t14), 1);
    goto LAB25;

}


extern void work_m_00000000002608022514_1921371486_init()
{
	static char *pe[] = {(void *)Initial_41_0};
	xsi_register_didat("work_m_00000000002608022514_1921371486", "isim/mux_tb_isim_beh.exe.sim/work/m_00000000002608022514_1921371486.didat");
	xsi_register_executes(pe);
}
