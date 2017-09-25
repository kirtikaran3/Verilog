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
static const char *ng0 = "C:/Users/kirti/Documents/verilog/FunMux/mux.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static int sp_mux(char *t1, char *t2)
{
    char t13[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t5 = (t1 + 2360);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);

LAB6:    t8 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 2, t8, 2);
    if (t9 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 2, t4, 2);
    if (t9 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 2, t4, 2);
    if (t9 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 2, t4, 2);
    if (t9 == 1)
        goto LAB13;

LAB14:
LAB15:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(42, ng0);
    t10 = (t1 + 2200);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t1 + 2520);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 1);
    goto LAB15;

LAB9:    xsi_set_current_line(43, ng0);
    t5 = (t1 + 2200);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memset(t13, 0, 8);
    t10 = (t13 + 4);
    t11 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t10) = t21;
    t12 = (t1 + 2520);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 1);
    goto LAB15;

LAB11:    xsi_set_current_line(44, ng0);
    t5 = (t1 + 2200);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memset(t13, 0, 8);
    t10 = (t13 + 4);
    t11 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 2);
    t21 = (t20 & 1);
    *((unsigned int *)t10) = t21;
    t12 = (t1 + 2520);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 1);
    goto LAB15;

LAB13:    xsi_set_current_line(45, ng0);
    t5 = (t1 + 2200);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memset(t13, 0, 8);
    t10 = (t13 + 4);
    t11 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 3);
    t21 = (t20 & 1);
    *((unsigned int *)t10) = t21;
    t12 = (t1 + 2520);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 1);
    goto LAB15;

}

static void Always_28_0(char *t0)
{
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
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 3440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3760);
    *((int *)t2) = 1;
    t3 = (t0 + 3472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t0 + 1640U);
    t6 = *((char **)t4);
    t4 = (t0 + 3248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t4, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2200);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 4);
    t10 = (t0 + 2360);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 2);

LAB7:    t11 = (t0 + 3344);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB9:    if (t19 != 0)
        goto LAB10;

LAB5:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB6:    t20 = (t0 + 3344);
    t21 = *((char **)t20);
    t20 = (t0 + 2520);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 2040);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    t25 = (t0 + 848);
    t26 = (t0 + 3248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t25, t21, t0, t26, t27);
    goto LAB2;

LAB8:;
LAB10:    t11 = (t0 + 3440U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

}


extern void work_m_00000000003781375936_3238356324_init()
{
	static char *pe[] = {(void *)Always_28_0};
	static char *se[] = {(void *)sp_mux};
	xsi_register_didat("work_m_00000000003781375936_3238356324", "isim/MUX4X1_Using_TASK_isim_beh.exe.sim/work/m_00000000003781375936_3238356324.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
