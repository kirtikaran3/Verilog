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
static const char *ng1 = " i = %b ";
static const char *ng2 = "C:/.Xilinx/display_minitor/display_monitor.v";
static int ng3[] = {0, 0};
static int ng4[] = {255, 0};
static int ng5[] = {1, 0};

void Monitor_29_1(char *);
void Monitor_29_1(char *);


static void Monitor_29_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 3, ng1, 2, t0, (char)119, t5, 32);

LAB1:    return;
}

static void Always_25_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng2);
    t2 = (t0 + 2936);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng2);

LAB5:    xsi_set_current_line(27, ng2);
    xsi_set_current_line(27, ng2);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(28, ng2);

LAB9:    xsi_set_current_line(29, ng2);
    Monitor_29_1(t0);
    xsi_set_current_line(27, ng2);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1448);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

}

void Monitor_29_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2424);
    t2 = (t0 + 2952);
    xsi_vlogfile_monitor((void *)Monitor_29_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000000834278372_1436662628_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)Monitor_29_1};
	xsi_register_didat("work_m_00000000000834278372_1436662628", "isim/display_monitor_isim_beh.exe.sim/work/m_00000000000834278372_1436662628.didat");
	xsi_register_executes(pe);
}
