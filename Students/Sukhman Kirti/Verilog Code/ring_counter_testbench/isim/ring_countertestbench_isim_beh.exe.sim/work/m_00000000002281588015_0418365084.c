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
static const char *ng1 = "q=%b,clk=%b,clr=%b";
static const char *ng2 = "C:/.Xilinx/ring_counter_testbench/ring_counter_testbench.v";
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};

void Monitor_43_1(char *);
void Monitor_43_1(char *);


static void Monitor_43_1_Func(char *t0)
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

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 3, ng1, 4, t0, (char)118, t4, 4, (char)118, t6, 1, (char)118, t9, 1);

LAB1:    return;
}

static void Initial_41_0(char *t0)
{

LAB0:    xsi_set_current_line(42, ng2);

LAB2:    xsi_set_current_line(43, ng2);
    Monitor_43_1(t0);

LAB1:    return;
}

static void Initial_45_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng2);

LAB4:    xsi_set_current_line(47, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng2);
    t2 = (t0 + 2584);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng2);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Always_50_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng2);

LAB4:    xsi_set_current_line(52, ng2);

LAB5:    xsi_set_current_line(53, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng2);
    t2 = (t0 + 2832);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(54, ng2);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB4;

LAB7:    goto LAB2;

}

void Monitor_43_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3080);
    t2 = (t0 + 3592);
    xsi_vlogfile_monitor((void *)Monitor_43_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000002281588015_0418365084_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Initial_45_2,(void *)Always_50_3,(void *)Monitor_43_1};
	xsi_register_didat("work_m_00000000002281588015_0418365084", "isim/ring_countertestbench_isim_beh.exe.sim/work/m_00000000002281588015_0418365084.didat");
	xsi_register_executes(pe);
}
