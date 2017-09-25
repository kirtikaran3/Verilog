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
static const char *ng0 = "in";
static const char *ng1 = "sqn";
static const char *ng2 = "C:/Users/kirti/Documents/verilog/nsqrsum/sq_sum.v";
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};



static void sqn_varinit(char *t0)
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

LAB0:    t1 = (t0 + 96U);
    t2 = *((char **)t1);
    t3 = (t2 + 160U);
    t4 = (t0 + 80U);
    t5 = *((char **)t4);
    xsi_vlogvar_initialize(t3, ng0, 2, 7, 0, 0, t5, 0, 1, 0);
    t6 = (t0 + 96U);
    t7 = *((char **)t6);
    t8 = (t7 + 0U);
    t9 = (t0 + 80U);
    t10 = *((char **)t9);
    xsi_vlogvar_initialize(t8, ng1, 0, 31, 0, 0, t10, 0, 1, 0);

LAB1:    return;
}

static int sp_sqn(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t0 = 1;
    xsi_set_current_line(51, ng2);

LAB2:    xsi_set_current_line(53, ng2);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 160U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB6;

LAB3:    if (t21 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t9) = 1;

LAB6:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(63, ng2);

LAB11:    xsi_set_current_line(65, ng2);
    t3 = (t2 + 96U);
    t4 = *((char **)t3);
    t5 = (t4 + 160U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t7);
    t13 = (t13 & 1);
    if (*((unsigned int *)t8) != 0)
        goto LAB12;

LAB13:    t14 = 1;

LAB15:    t15 = (t14 <= 7);
    if (t15 == 1)
        goto LAB16;

LAB17:    *((unsigned int *)t9) = t13;

LAB14:    t11 = (t2 + 96U);
    t24 = *((char **)t11);
    t25 = (t24 + 0U);
    xsi_vlogvar_assign_value(t25, t9, 0, 0, 32);

LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(55, ng2);

LAB10:    xsi_set_current_line(57, ng2);
    t31 = ((char*)((ng4)));
    t32 = (t2 + 96U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    xsi_vlogvar_assign_value(t34, t31, 0, 0, 32);
    goto LAB9;

LAB12:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB14;

LAB16:    t12 = (t12 >> 1);
    t16 = (t12 & 1);
    t13 = (t13 ^ t16);

LAB18:    t14 = (t14 + 1);
    goto LAB15;

}

static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(31, ng2);

LAB2:    xsi_set_current_line(33, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2040);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t25[8];
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng2);
    t2 = (t0 + 3528);
    *((int *)t2) = 1;
    t3 = (t0 + 3240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng2);

LAB5:    xsi_set_current_line(42, ng2);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t0 + 3016);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t6, 0, 0);
    t8 = (t7 + 96U);
    t9 = *((char **)t8);
    t10 = (t9 + 160U);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 8);

LAB6:    t11 = (t0 + 3112);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);
    if (t19 != 0)
        goto LAB8;

LAB7:    t12 = (t0 + 3112);
    t20 = *((char **)t12);
    t12 = (t20 + 96U);
    t21 = *((char **)t12);
    t22 = (t21 + 0U);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 848);
    t27 = (t0 + 3016);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t20, t0, t27, t28);
    t29 = (t0 + 2040);
    xsi_vlogvar_assign_value(t29, t25, 0, 0, 1);
    goto LAB2;

LAB8:    t11 = (t0 + 3208U);
    *((char **)t11) = &&LAB6;
    goto LAB1;

}


extern void work_m_00000000002442842877_1003424934_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_38_1};
	static char *se[] = {(void *)sp_sqn};
	xsi_register_didat("work_m_00000000002442842877_1003424934", "isim/tb_sq_isim_beh.exe.sim/work/m_00000000002442842877_1003424934.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
	xsi_register_subprogram_init(1, (void *)sqn_varinit);
}
