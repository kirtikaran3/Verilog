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
static const char *ng0 = "";
static const char *ng1 = "y=%b,s=%b,in0=%b,in1=%b,in2=%b,in3=%b";
static const char *ng2 = "C:/.Xilinx/muxtestbench/muxtestbench.v";
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};

void Monitor_53_1(char *);
void Monitor_53_1(char *);


static void Monitor_53_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1768);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1928);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 2088);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 1448);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlogfile_write(1, 0, 3, ng1, 7, t0, (char)118, t4, 1, (char)118, t6, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t15, 1, (char)118, t18, 2);

LAB1:    return;
}

static void Initial_51_0(char *t0)
{

LAB0:    xsi_set_current_line(52, ng2);

LAB2:    xsi_set_current_line(53, ng2);
    Monitor_53_1(t0);

LAB1:    return;
}

static void Initial_55_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(56, ng2);

LAB2:    xsi_set_current_line(57, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(57, ng2);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(57, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(58, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(58, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(59, ng2);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(59, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(60, ng2);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(60, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

void Monitor_53_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3472);
    t2 = (t0 + 3984);
    xsi_vlogfile_monitor((void *)Monitor_53_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001619351140_0026326757_init()
{
	static char *pe[] = {(void *)Initial_51_0,(void *)Initial_55_2,(void *)Monitor_53_1};
	xsi_register_didat("work_m_00000000001619351140_0026326757", "isim/muxtestbench_isim_beh.exe.sim/work/m_00000000001619351140_0026326757.didat");
	xsi_register_executes(pe);
}
