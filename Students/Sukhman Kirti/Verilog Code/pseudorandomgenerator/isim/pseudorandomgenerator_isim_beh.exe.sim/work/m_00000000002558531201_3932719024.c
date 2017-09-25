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
static const char *ng0 = "C:/.Xilinx/pseudorandomgenerator/pseudorandomgenerator.v";
static int ng1[] = {1000, 0};
static int ng2[] = {3, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};



static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t7[8];
    char t17[8];
    char t30[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;

LAB0:    t1 = (t0 + 2616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2936);
    *((int *)t2) = 1;
    t3 = (t0 + 2648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 2);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    t16 = (t0 + 1448);
    t18 = (t0 + 1448);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t17, t20, 2, t21, 32, 1);
    t22 = (t17 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    if (t24 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t8 = (t0 + 1448);
    t9 = (t0 + 1448);
    t16 = (t9 + 72U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t17, t18, 2, t19, 32, 1);
    t20 = (t17 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (!(t23));
    if (t24 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t8 = (t0 + 1448);
    t9 = (t0 + 1448);
    t16 = (t9 + 72U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t17, t18, 2, t19, 32, 1);
    t20 = (t17 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (!(t23));
    if (t24 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 3);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t8 = (t0 + 1448);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t19 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    t25 = (t23 >> 2);
    t26 = (t25 & 1);
    *((unsigned int *)t17) = t26;
    t27 = *((unsigned int *)t19);
    t28 = (t27 >> 2);
    t29 = (t28 & 1);
    *((unsigned int *)t18) = t29;
    t31 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t17);
    t33 = (t31 ^ t32);
    *((unsigned int *)t30) = t33;
    t20 = (t7 + 4);
    t21 = (t17 + 4);
    t22 = (t30 + 4);
    t34 = *((unsigned int *)t20);
    t35 = *((unsigned int *)t21);
    t36 = (t34 | t35);
    *((unsigned int *)t22) = t36;
    t37 = *((unsigned int *)t22);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB12;

LAB13:
LAB14:    t41 = (t0 + 1448);
    t43 = (t0 + 1448);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t42, t45, 2, t46, 32, 1);
    t47 = (t42 + 4);
    t48 = *((unsigned int *)t47);
    t24 = (!(t48));
    if (t24 == 1)
        goto LAB15;

LAB16:    goto LAB2;

LAB6:    xsi_vlogvar_wait_assign_value(t16, t7, 0, *((unsigned int *)t17), 1, 0LL);
    goto LAB7;

LAB8:    xsi_vlogvar_wait_assign_value(t8, t7, 0, *((unsigned int *)t17), 1, 0LL);
    goto LAB9;

LAB10:    xsi_vlogvar_wait_assign_value(t8, t7, 0, *((unsigned int *)t17), 1, 0LL);
    goto LAB11;

LAB12:    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t22);
    *((unsigned int *)t30) = (t39 | t40);
    goto LAB14;

LAB15:    xsi_vlogvar_wait_assign_value(t41, t30, 0, *((unsigned int *)t42), 1, 0LL);
    goto LAB16;

}


extern void work_m_00000000002558531201_3932719024_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_32_1};
	xsi_register_didat("work_m_00000000002558531201_3932719024", "isim/pseudorandomgenerator_isim_beh.exe.sim/work/m_00000000002558531201_3932719024.didat");
	xsi_register_executes(pe);
}
