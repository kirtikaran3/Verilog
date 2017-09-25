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
static const char *ng1 = "y=%b,a=%b,b=%b,s=%b";
static const char *ng2 = "C:/.Xilinx/alutestbench/alutestbench.v";
static unsigned int ng3[] = {13U, 0U};
static unsigned int ng4[] = {9U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {7U, 0U};

void Monitor_47_1(char *);
void Monitor_47_1(char *);


static void Monitor_47_1_Func(char *t0)
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
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 3, ng1, 5, t0, (char)118, t4, 8, (char)118, t6, 4, (char)118, t9, 4, (char)118, t12, 3);

LAB1:    return;
}

static void Initial_46_0(char *t0)
{

LAB0:    xsi_set_current_line(47, ng2);
    Monitor_47_1(t0);

LAB1:    return;
}

static void Initial_48_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(49, ng2);

LAB2:    xsi_set_current_line(50, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(51, ng2);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(52, ng2);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(53, ng2);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(54, ng2);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(55, ng2);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(56, ng2);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(57, ng2);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(58, ng2);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(59, ng2);
    t1 = ((char*)((ng12)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

void Monitor_47_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2992);
    t2 = (t0 + 3504);
    xsi_vlogfile_monitor((void *)Monitor_47_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000000967045881_0618564250_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Initial_48_2,(void *)Monitor_47_1};
	xsi_register_didat("work_m_00000000000967045881_0618564250", "isim/alutestbench_isim_beh.exe.sim/work/m_00000000000967045881_0618564250.didat");
	xsi_register_executes(pe);
}
