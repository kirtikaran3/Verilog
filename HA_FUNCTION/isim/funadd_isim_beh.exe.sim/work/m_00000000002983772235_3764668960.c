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
static const char *ng0 = "C:/Users/kirti/Documents/verilog/HA_FUNCTION/funadd.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};



static int sp_ha(char *t1, char *t2)
{
    char t6[8];
    char t13[8];
    char t33[8];
    int t0;
    char *t3;
    char *t4;
    int t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;

LAB0:    t0 = 1;
    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t3 = (t1 + 1800U);
    t4 = *((char **)t3);

LAB3:    t3 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 1, t3, 1);
    if (t5 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng2)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 1, t3, 1);
    if (t5 == 1)
        goto LAB6;

LAB7:
LAB8:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(44, ng0);
    t7 = (t1 + 2520);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 2680);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t12);
    t16 = (t14 ^ t15);
    *((unsigned int *)t13) = t16;
    t17 = (t9 + 4);
    t18 = (t12 + 4);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t17);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB9;

LAB10:
LAB11:    t27 = (t1 + 2520);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t1 + 2680);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t32);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t29 + 4);
    t38 = (t32 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB12;

LAB13:
LAB14:    xsi_vlogtype_concat(t6, 2, 2, 2U, t33, 1, t13, 1);
    t65 = (t1 + 2360);
    xsi_vlogvar_assign_value(t65, t6, 0, 0, 2);
    goto LAB8;

LAB6:    xsi_set_current_line(46, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 2360);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 2);
    goto LAB8;

LAB9:    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t25 | t26);
    goto LAB11;

LAB12:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t29 + 4);
    t48 = (t32 + 4);
    t49 = *((unsigned int *)t29);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t32);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB14;

}

static void Always_28_0(char *t0)
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

LAB0:    t1 = (t0 + 3600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3920);
    *((int *)t2) = 1;
    t3 = (t0 + 3632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t0 + 1640U);
    t6 = *((char **)t4);
    t4 = (t0 + 3408);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t4, 0, t0, t7, 0, 0);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 1);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 1);

LAB6:    t11 = (t0 + 3504);
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

LAB7:    t12 = (t0 + 3504);
    t20 = *((char **)t12);
    t12 = (t0 + 2360);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 848);
    t25 = (t0 + 3408);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 2200);
    xsi_vlogvar_assign_value(t27, t23, 0, 0, 2);
    goto LAB2;

LAB8:    t11 = (t0 + 3600U);
    *((char **)t11) = &&LAB6;
    goto LAB1;

}


extern void work_m_00000000002983772235_3764668960_init()
{
	static char *pe[] = {(void *)Always_28_0};
	static char *se[] = {(void *)sp_ha};
	xsi_register_didat("work_m_00000000002983772235_3764668960", "isim/funadd_isim_beh.exe.sim/work/m_00000000002983772235_3764668960.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
