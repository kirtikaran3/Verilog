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
static const char *ng0 = "C:/Users/Kirti/Documents/verilog/delayExample/delayEx.v";



static void Always_30_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 4716);
    memset(t4, 0, 8);
    t6 = 15U;
    t7 = t6;
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t6 = (t6 & t9);
    t10 = *((unsigned int *)t8);
    t7 = (t7 & t10);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 | t6);
    t13 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t13 | t7);
    t14 = (t0 + 2496);
    xsi_process_wait(t14, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    t15 = (t0 + 4716);
    t16 = (t0 + 1608);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 4);
    goto LAB2;

}

static void Always_37_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3272);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2744);
    xsi_process_wait(t4, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(41, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    goto LAB2;

}


extern void work_m_00000000000774928814_3050296106_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Always_37_1};
	xsi_register_didat("work_m_00000000000774928814_3050296106", "isim/delayEx_isim_beh.exe.sim/work/m_00000000000774928814_3050296106.didat");
	xsi_register_executes(pe);
}
