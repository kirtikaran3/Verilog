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
static const char *ng0 = "C:/.Xilinx/fa_function/fa_function.v";



static int sp_ha(char *t1, char *t2)
{
    char t3[8];
    char t10[8];
    char t30[8];
    int t0;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t0 = 1;
    xsi_set_current_line(32, ng0);
    t4 = (t1 + 2680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2840);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t14 = (t6 + 4);
    t15 = (t9 + 4);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB2;

LAB3:
LAB4:    t24 = (t1 + 2680);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 2840);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t29);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t26 + 4);
    t35 = (t29 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB5;

LAB6:
LAB7:    xsi_vlogtype_concat(t3, 2, 2, 2U, t30, 1, t10, 1);
    t62 = (t1 + 2520);
    xsi_vlogvar_assign_value(t62, t3, 0, 0, 2);
    t0 = 0;

LAB1:    return t0;
LAB2:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t10) = (t22 | t23);
    goto LAB4;

LAB5:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t26 + 4);
    t45 = (t29 + 4);
    t46 = *((unsigned int *)t26);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t29);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB7;

}

static void Always_25_0(char *t0)
{
    char t23[8];
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
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 3760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4080);
    *((int *)t2) = 1;
    t3 = (t0 + 3792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);
    t4 = (t0 + 1800U);
    t6 = *((char **)t4);
    t4 = (t0 + 3568);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t4, 0, t0, t7, 0, 0);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 1);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 1);

LAB6:    t11 = (t0 + 3664);
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

LAB7:    t12 = (t0 + 3664);
    t20 = *((char **)t12);
    t12 = (t0 + 2520);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 848);
    t25 = (t0 + 3568);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 2360);
    xsi_vlogvar_assign_value(t27, t23, 0, 0, 2);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 2360);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 3568);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 1);

LAB9:    t11 = (t0 + 3664);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);
    if (t19 != 0)
        goto LAB11;

LAB10:    t12 = (t0 + 3664);
    t20 = *((char **)t12);
    t12 = (t0 + 2520);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 848);
    t25 = (t0 + 3568);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 2360);
    xsi_vlogvar_assign_value(t27, t23, 0, 0, 2);
    goto LAB2;

LAB8:    t11 = (t0 + 3760U);
    *((char **)t11) = &&LAB6;
    goto LAB1;

LAB11:    t11 = (t0 + 3760U);
    *((char **)t11) = &&LAB9;
    goto LAB1;

}


extern void work_m_00000000002354812372_2801988482_init()
{
	static char *pe[] = {(void *)Always_25_0};
	static char *se[] = {(void *)sp_ha};
	xsi_register_didat("work_m_00000000002354812372_2801988482", "isim/fa_function_isim_beh.exe.sim/work/m_00000000002354812372_2801988482.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
