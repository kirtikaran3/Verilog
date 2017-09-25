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
static const char *ng0 = "C:/Users/kirti/Documents/verilog/function/parity.v";



static int sp_pb(char *t1, char *t2)
{
    char t3[8];
    int t0;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;

LAB0:    t0 = 1;
    xsi_set_current_line(41, ng0);
    t4 = (t1 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t6);
    t9 = (t9 & 1);
    if (*((unsigned int *)t7) != 0)
        goto LAB2;

LAB3:    t11 = 1;

LAB5:    t12 = (t11 <= 7);
    if (t12 == 1)
        goto LAB6;

LAB7:    *((unsigned int *)t3) = t9;

LAB4:    t14 = (t1 + 2200);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    t0 = 0;

LAB1:    return t0;
LAB2:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB4;

LAB6:    t8 = (t8 >> 1);
    t13 = (t8 & 1);
    t9 = (t9 ^ t13);

LAB8:    t11 = (t11 + 1);
    goto LAB5;

}

static void Always_29_0(char *t0)
{
    char t21[8];
    char *t1;
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
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 3280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3600);
    *((int *)t2) = 1;
    t3 = (t0 + 3312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t0 + 3088);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t6, 0, 0);
    t8 = (t0 + 2360);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 8);

LAB6:    t9 = (t0 + 3184);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB8;

LAB7:    t10 = (t0 + 3184);
    t18 = *((char **)t10);
    t10 = (t0 + 2200);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 848);
    t23 = (t0 + 3088);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 2040);
    xsi_vlogvar_assign_value(t25, t21, 0, 0, 1);
    goto LAB2;

LAB8:    t9 = (t0 + 3280U);
    *((char **)t9) = &&LAB6;
    goto LAB1;

}


extern void work_m_00000000000818579762_2643680755_init()
{
	static char *pe[] = {(void *)Always_29_0};
	static char *se[] = {(void *)sp_pb};
	xsi_register_didat("work_m_00000000000818579762_2643680755", "isim/parity_test_isim_beh.exe.sim/work/m_00000000000818579762_2643680755.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
