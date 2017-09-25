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
static const char *ng0 = "C:/Users/kirti/Documents/verilog/testfadder/fulladder.v";
static int ng1[] = {0, 0};



static int sp_fa(char *t1, char *t2)
{
    char t27[8];
    char t38[8];
    char t47[8];
    int t0;
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;
    char *t49;

LAB0:    t0 = 1;
    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t3 = (t1 + 2952);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 3112);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 1280);
    t12 = xsi_create_subprogram_invocation(t10, 0, t1, t11, 0, t2);
    t13 = (t1 + 4072);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t1 + 4232);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 1);

LAB3:    t15 = (t2 + 64U);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t1, t16);
    if (t23 != 0)
        goto LAB5;

LAB4:    t16 = (t2 + 64U);
    t24 = *((char **)t16);
    t16 = (t1 + 3912);
    t25 = (t16 + 56U);
    t26 = *((char **)t25);
    memcpy(t27, t26, 8);
    t28 = (t1 + 1280);
    t29 = (t2 + 56U);
    t30 = *((char **)t29);
    xsi_delete_subprogram_invocation(t28, t24, t1, t30, t2);
    t31 = (t1 + 3432);
    xsi_vlogvar_assign_value(t31, t27, 0, 0, 2);
    xsi_set_current_line(43, ng0);
    t3 = (t1 + 3432);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t27, 0, 8);
    t6 = (t27 + 4);
    t7 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = (t32 >> 0);
    t34 = (t33 & 1);
    *((unsigned int *)t27) = t34;
    t35 = *((unsigned int *)t7);
    t36 = (t35 >> 0);
    t37 = (t36 & 1);
    *((unsigned int *)t6) = t37;
    t8 = (t1 + 3272);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t1 + 1280);
    t14 = xsi_create_subprogram_invocation(t12, 0, t1, t13, 0, t2);
    t15 = (t1 + 4072);
    xsi_vlogvar_assign_value(t15, t27, 0, 0, 1);
    t16 = (t1 + 4232);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 1);

LAB6:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t24 = (t22 + 0U);
    t25 = *((char **)t24);
    t23 = ((int  (*)(char *, char *))t25)(t1, t18);
    if (t23 != 0)
        goto LAB8;

LAB7:    t18 = (t2 + 64U);
    t26 = *((char **)t18);
    t18 = (t1 + 3912);
    t28 = (t18 + 56U);
    t29 = *((char **)t28);
    memcpy(t38, t29, 8);
    t30 = (t1 + 1280);
    t31 = (t2 + 56U);
    t39 = *((char **)t31);
    xsi_delete_subprogram_invocation(t30, t26, t1, t39, t2);
    t40 = (t1 + 3592);
    xsi_vlogvar_assign_value(t40, t38, 0, 0, 2);
    xsi_set_current_line(44, ng0);
    t3 = (t1 + 3592);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t27, 0, 8);
    t6 = (t27 + 4);
    t7 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = (t32 >> 1);
    t34 = (t33 & 1);
    *((unsigned int *)t27) = t34;
    t35 = *((unsigned int *)t7);
    t36 = (t35 >> 1);
    t37 = (t36 & 1);
    *((unsigned int *)t6) = t37;
    t8 = (t1 + 3432);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t38, 0, 8);
    t11 = (t38 + 4);
    t12 = (t10 + 4);
    t41 = *((unsigned int *)t10);
    t42 = (t41 >> 1);
    t43 = (t42 & 1);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t12);
    t45 = (t44 >> 1);
    t46 = (t45 & 1);
    *((unsigned int *)t11) = t46;
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 1280);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    t17 = (t1 + 4072);
    xsi_vlogvar_assign_value(t17, t27, 0, 0, 1);
    t18 = (t1 + 4232);
    xsi_vlogvar_assign_value(t18, t38, 0, 0, 1);

LAB9:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t24 = (t22 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t28 = *((char **)t26);
    t23 = ((int  (*)(char *, char *))t28)(t1, t20);
    if (t23 != 0)
        goto LAB11;

LAB10:    t20 = (t2 + 64U);
    t29 = *((char **)t20);
    t20 = (t1 + 3912);
    t30 = (t20 + 56U);
    t31 = *((char **)t30);
    memcpy(t47, t31, 8);
    t39 = (t1 + 1280);
    t40 = (t2 + 56U);
    t48 = *((char **)t40);
    xsi_delete_subprogram_invocation(t39, t29, t1, t48, t2);
    t49 = (t1 + 3752);
    xsi_vlogvar_assign_value(t49, t47, 0, 0, 2);
    xsi_set_current_line(45, ng0);
    t3 = (t1 + 3592);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t27, 0, 8);
    t6 = (t27 + 4);
    t7 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = (t32 >> 0);
    t34 = (t33 & 1);
    *((unsigned int *)t27) = t34;
    t35 = *((unsigned int *)t7);
    t36 = (t35 >> 0);
    t37 = (t36 & 1);
    *((unsigned int *)t6) = t37;
    t8 = (t1 + 3752);
    t9 = (t1 + 3752);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t38, t11, 2, t12, 32, 1);
    t13 = (t38 + 4);
    t41 = *((unsigned int *)t13);
    t23 = (!(t41));
    if (t23 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(46, ng0);
    t3 = (t1 + 3752);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 2792);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 2);
    t0 = 0;

LAB1:    return t0;
LAB5:    t15 = (t2 + 48U);
    *((char **)t15) = &&LAB3;
    goto LAB1;

LAB8:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB6;
    goto LAB1;

LAB11:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB9;
    goto LAB1;

LAB12:    xsi_vlogvar_assign_value(t8, t27, 0, *((unsigned int *)t38), 1);
    goto LAB13;

}

static int sp_ha(char *t1, char *t2)
{
    char t3[8];
    char t10[8];
    char t44[8];
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;

LAB0:    t0 = 1;
    xsi_set_current_line(57, ng0);
    t4 = (t1 + 4072);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4232);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
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
LAB4:    t38 = (t1 + 4072);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t1 + 4232);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t43);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t40 + 4);
    t49 = (t43 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB5;

LAB6:
LAB7:    xsi_vlogtype_concat(t3, 2, 2, 2U, t44, 1, t10, 1);
    t76 = (t1 + 3912);
    xsi_vlogvar_assign_value(t76, t3, 0, 0, 2);
    t0 = 0;

LAB1:    return t0;
LAB2:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t10) = (t22 | t23);
    t24 = (t6 + 4);
    t25 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = *((unsigned int *)t25);
    t31 = (~(t30));
    t32 = *((unsigned int *)t9);
    t33 = (t32 & t31);
    t34 = (~(t29));
    t35 = (~(t33));
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t36 & t34);
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & t35);
    goto LAB4;

LAB5:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t40 + 4);
    t59 = (t43 + 4);
    t60 = *((unsigned int *)t40);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t43);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB7;

}

static void Always_27_0(char *t0)
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
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 5152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 5472);
    *((int *)t2) = 1;
    t3 = (t0 + 5184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1912U);
    t5 = *((char **)t4);
    t4 = (t0 + 2072U);
    t6 = *((char **)t4);
    t4 = (t0 + 2232U);
    t7 = *((char **)t4);
    t4 = (t0 + 4960);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t4, 0, t0, t8, 0, 0);
    t10 = (t0 + 2952);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 1);
    t11 = (t0 + 3112);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 1);
    t12 = (t0 + 3272);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 1);

LAB6:    t13 = (t0 + 5056);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB8;

LAB7:    t14 = (t0 + 5056);
    t22 = *((char **)t14);
    t14 = (t0 + 2792);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 848);
    t27 = (t0 + 4960);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t22, t0, t27, t28);
    t29 = (t0 + 2632);
    xsi_vlogvar_assign_value(t29, t25, 0, 0, 2);
    goto LAB2;

LAB8:    t13 = (t0 + 5152U);
    *((char **)t13) = &&LAB6;
    goto LAB1;

}


extern void work_m_00000000001762731084_2902715030_init()
{
	static char *pe[] = {(void *)Always_27_0};
	static char *se[] = {(void *)sp_fa,(void *)sp_ha};
	xsi_register_didat("work_m_00000000001762731084_2902715030", "isim/fulladder_isim_beh.exe.sim/work/m_00000000001762731084_2902715030.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
