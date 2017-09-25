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
static const char *ng0 = "C:/Users/Kirti/Documents/verilog/thapar/and/testand.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {8U, 0U};
static const char *ng3 = "";
static const char *ng4 = " input signal 1:  %b ";
static const char *ng5 = "in sig 2: %b";
static const char *ng6 = "in sig 3 %b";
static const char *ng7 = "in sig 4 %b";
static const char *ng8 = "out  %b";
static unsigned int ng9[] = {3U, 0U};



static void Initial_45_0(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 1448);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = xsi_vlog_time(t8, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng3, 2, t0, (char)118, t8, 64);
    t3 = (t0 + 1448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(0, 0, 0, ng4, 2, t0, (char)118, t5, 1);
    t6 = (t0 + 1608);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    xsi_vlogfile_write(0, 0, 0, ng5, 2, t0, (char)118, t9, 1);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(0, 0, 0, ng6, 2, t0, (char)118, t12, 1);
    t13 = (t0 + 1928);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(0, 0, 0, ng7, 2, t0, (char)118, t15, 1);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)118, t17, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 1448);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = xsi_vlog_time(t8, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng3, 2, t0, (char)118, t8, 64);
    t3 = (t0 + 1448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(0, 0, 0, ng4, 2, t0, (char)118, t5, 1);
    t6 = (t0 + 1608);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    xsi_vlogfile_write(0, 0, 0, ng5, 2, t0, (char)118, t9, 1);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(0, 0, 0, ng6, 2, t0, (char)118, t12, 1);
    t13 = (t0 + 1928);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(0, 0, 0, ng7, 2, t0, (char)118, t15, 1);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)118, t17, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 115000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(64, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000001314769543_0656587764_init()
{
	static char *pe[] = {(void *)Initial_45_0};
	xsi_register_didat("work_m_00000000001314769543_0656587764", "isim/testand_isim_beh.exe.sim/work/m_00000000001314769543_0656587764.didat");
	xsi_register_executes(pe);
}
