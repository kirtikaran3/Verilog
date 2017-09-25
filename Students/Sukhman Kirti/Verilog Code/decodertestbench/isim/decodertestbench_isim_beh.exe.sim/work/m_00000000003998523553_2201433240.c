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
static const char *ng1 = "y0=%b,y1=%b,y2=%b,y3=%b,a=%b,b=%b";
static const char *ng2 = "C:/.Xilinx/decodertestbench/decodertestbench.v";
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};

void Monitor_39_1(char *);
void Monitor_39_1(char *);


static void Monitor_39_1_Func(char *t0)
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
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1368U);
    t6 = *((char **)t3);
    t3 = (t0 + 1528U);
    t7 = *((char **)t3);
    t3 = (t0 + 1928);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 2088);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 3, ng1, 7, t0, (char)118, t4, 1, (char)118, t5, 1, (char)118, t6, 1, (char)118, t7, 1, (char)118, t9, 1, (char)118, t12, 1);

LAB1:    return;
}

static void Initial_37_0(char *t0)
{

LAB0:    xsi_set_current_line(38, ng2);

LAB2:    xsi_set_current_line(39, ng2);
    Monitor_39_1(t0);

LAB1:    return;
}

static void Initial_41_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(42, ng2);

LAB2:    xsi_set_current_line(43, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(43, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(44, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(44, ng2);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(45, ng2);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(45, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(46, ng2);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(46, ng2);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

void Monitor_39_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3312);
    t2 = (t0 + 3824);
    xsi_vlogfile_monitor((void *)Monitor_39_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003998523553_2201433240_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Initial_41_2,(void *)Monitor_39_1};
	xsi_register_didat("work_m_00000000003998523553_2201433240", "isim/decodertestbench_isim_beh.exe.sim/work/m_00000000003998523553_2201433240.didat");
	xsi_register_executes(pe);
}
