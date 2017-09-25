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
static const char *ng0 = "in0";
static const char *ng1 = "in1";
static const char *ng2 = "s";
static const char *ng3 = "mux";
static const char *ng4 = "C:/.Xilinx/mux_function/mux_function.v";
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};
static int ng7[] = {2, 0};
static int ng8[] = {3, 0};
static int ng9[] = {4, 0};
static int ng10[] = {5, 0};
static int ng11[] = {6, 0};



static void mux_varinit(char *t0)
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
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 96U);
    t2 = *((char **)t1);
    t3 = (t2 + 160U);
    t4 = (t0 + 80U);
    t5 = *((char **)t4);
    xsi_vlogvar_initialize(t3, ng0, 2, 0, 0, 0, t5, 0, 1, 0);
    t6 = (t0 + 96U);
    t7 = *((char **)t6);
    t8 = (t7 + 320U);
    t9 = (t0 + 80U);
    t10 = *((char **)t9);
    xsi_vlogvar_initialize(t8, ng1, 2, 0, 0, 0, t10, 0, 1, 0);
    t11 = (t0 + 96U);
    t12 = *((char **)t11);
    t13 = (t12 + 480U);
    t14 = (t0 + 80U);
    t15 = *((char **)t14);
    xsi_vlogvar_initialize(t13, ng2, 2, 0, 0, 0, t15, 0, 1, 0);
    t16 = (t0 + 96U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = (t0 + 80U);
    t20 = *((char **)t19);
    xsi_vlogvar_initialize(t18, ng3, 2, 0, 0, 0, t20, 0, 1, 0);

LAB1:    return;
}

static int sp_mux(char *t1, char *t2)
{
    char t3[8];
    char t31[8];
    char t73[8];
    char t105[8];
    int t0;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t135;

LAB0:    t0 = 1;
    xsi_set_current_line(40, ng4);
    t4 = (t2 + 96U);
    t5 = *((char **)t4);
    t6 = (t5 + 480U);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB5;

LAB3:    if (*((unsigned int *)t9) == 0)
        goto LAB2;

LAB4:    t15 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t15) = 1;

LAB5:    t16 = (t3 + 4);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    *((unsigned int *)t3) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB7;

LAB6:    t24 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t26 = (t2 + 96U);
    t27 = *((char **)t26);
    t28 = (t27 + 160U);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t32 = *((unsigned int *)t3);
    t33 = *((unsigned int *)t30);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t35 = (t3 + 4);
    t36 = (t30 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB8;

LAB9:
LAB10:    t63 = (t2 + 96U);
    t64 = *((char **)t63);
    t65 = (t64 + 480U);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t2 + 96U);
    t69 = *((char **)t68);
    t70 = (t69 + 320U);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t74 = *((unsigned int *)t67);
    t75 = *((unsigned int *)t72);
    t76 = (t74 & t75);
    *((unsigned int *)t73) = t76;
    t77 = (t67 + 4);
    t78 = (t72 + 4);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t77);
    t81 = *((unsigned int *)t78);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = *((unsigned int *)t79);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB11;

LAB12:
LAB13:    t106 = *((unsigned int *)t31);
    t107 = *((unsigned int *)t73);
    t108 = (t106 | t107);
    *((unsigned int *)t105) = t108;
    t109 = (t31 + 4);
    t110 = (t73 + 4);
    t111 = (t105 + 4);
    t112 = *((unsigned int *)t109);
    t113 = *((unsigned int *)t110);
    t114 = (t112 | t113);
    *((unsigned int *)t111) = t114;
    t115 = *((unsigned int *)t111);
    t116 = (t115 != 0);
    if (t116 == 1)
        goto LAB14;

LAB15:
LAB16:    t133 = (t2 + 96U);
    t134 = *((char **)t133);
    t135 = (t134 + 0U);
    xsi_vlogvar_assign_value(t135, t105, 0, 0, 1);
    t0 = 0;

LAB1:    return t0;
LAB2:    *((unsigned int *)t3) = 1;
    goto LAB5;

LAB7:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t3) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB6;

LAB8:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t3 + 4);
    t46 = (t30 + 4);
    t47 = *((unsigned int *)t3);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t30);
    t52 = (~(t51));
    t53 = *((unsigned int *)t46);
    t54 = (~(t53));
    t55 = (t48 & t50);
    t56 = (t52 & t54);
    t57 = (~(t55));
    t58 = (~(t56));
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t59 & t57);
    t60 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t60 & t58);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t62 & t58);
    goto LAB10;

LAB11:    t85 = *((unsigned int *)t73);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t73) = (t85 | t86);
    t87 = (t67 + 4);
    t88 = (t72 + 4);
    t89 = *((unsigned int *)t67);
    t90 = (~(t89));
    t91 = *((unsigned int *)t87);
    t92 = (~(t91));
    t93 = *((unsigned int *)t72);
    t94 = (~(t93));
    t95 = *((unsigned int *)t88);
    t96 = (~(t95));
    t97 = (t90 & t92);
    t98 = (t94 & t96);
    t99 = (~(t97));
    t100 = (~(t98));
    t101 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t101 & t99);
    t102 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t102 & t100);
    t103 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t103 & t99);
    t104 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t104 & t100);
    goto LAB13;

LAB14:    t117 = *((unsigned int *)t105);
    t118 = *((unsigned int *)t111);
    *((unsigned int *)t105) = (t117 | t118);
    t119 = (t31 + 4);
    t120 = (t73 + 4);
    t121 = *((unsigned int *)t119);
    t122 = (~(t121));
    t123 = *((unsigned int *)t31);
    t124 = (t123 & t122);
    t125 = *((unsigned int *)t120);
    t126 = (~(t125));
    t127 = *((unsigned int *)t73);
    t128 = (t127 & t126);
    t129 = (~(t124));
    t130 = (~(t128));
    t131 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t131 & t129);
    t132 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t132 & t130);
    goto LAB16;

}

static void Always_27_0(char *t0)
{
    char t6[8];
    char t16[8];
    char t26[8];
    char t60[8];
    char t65[8];
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
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    int t72;
    char *t73;
    char *t74;

LAB0:    t1 = (t0 + 3120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng4);
    t2 = (t0 + 3440);
    *((int *)t2) = 1;
    t3 = (t0 + 3152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng4);

LAB5:    xsi_set_current_line(29, ng4);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 1480U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t14) = t23;
    t24 = (t0 + 1640U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t24 = (t26 + 4);
    t27 = (t25 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    t30 = (t29 & 1);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 0);
    t33 = (t32 & 1);
    *((unsigned int *)t24) = t33;
    t34 = (t0 + 2928);
    t35 = (t0 + 848);
    t36 = xsi_create_subprogram_invocation(t34, 0, t0, t35, 0, 0);
    t37 = (t36 + 96U);
    t38 = *((char **)t37);
    t39 = (t38 + 160U);
    xsi_vlogvar_assign_value(t39, t6, 0, 0, 1);
    t40 = (t36 + 96U);
    t41 = *((char **)t40);
    t42 = (t41 + 320U);
    xsi_vlogvar_assign_value(t42, t16, 0, 0, 1);
    t43 = (t36 + 96U);
    t44 = *((char **)t43);
    t45 = (t44 + 480U);
    xsi_vlogvar_assign_value(t45, t26, 0, 0, 1);

LAB6:    t46 = (t0 + 3024);
    t47 = *((char **)t46);
    t48 = (t47 + 80U);
    t49 = *((char **)t48);
    t50 = (t49 + 272U);
    t51 = *((char **)t50);
    t52 = (t51 + 0U);
    t53 = *((char **)t52);
    t54 = ((int  (*)(char *, char *))t53)(t0, t47);
    if (t54 != 0)
        goto LAB8;

LAB7:    t47 = (t0 + 3024);
    t55 = *((char **)t47);
    t47 = (t55 + 96U);
    t56 = *((char **)t47);
    t57 = (t56 + 0U);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memcpy(t60, t59, 8);
    t61 = (t0 + 848);
    t62 = (t0 + 2928);
    t63 = 0;
    xsi_delete_subprogram_invocation(t61, t55, t0, t62, t63);
    t64 = (t0 + 2200);
    t66 = (t0 + 2200);
    t67 = (t66 + 72U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t65, t68, 2, t69, 32, 1);
    t70 = (t65 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (!(t71));
    if (t72 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(30, ng4);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1480U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 3);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 3);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    t15 = (t0 + 1640U);
    t17 = *((char **)t15);
    memset(t26, 0, 8);
    t15 = (t26 + 4);
    t24 = (t17 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (t28 >> 0);
    t30 = (t29 & 1);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t24);
    t32 = (t31 >> 0);
    t33 = (t32 & 1);
    *((unsigned int *)t15) = t33;
    t25 = (t0 + 2928);
    t27 = (t0 + 848);
    t34 = xsi_create_subprogram_invocation(t25, 0, t0, t27, 0, 0);
    t35 = (t34 + 96U);
    t36 = *((char **)t35);
    t37 = (t36 + 160U);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 1);
    t38 = (t34 + 96U);
    t39 = *((char **)t38);
    t40 = (t39 + 320U);
    xsi_vlogvar_assign_value(t40, t16, 0, 0, 1);
    t41 = (t34 + 96U);
    t42 = *((char **)t41);
    t43 = (t42 + 480U);
    xsi_vlogvar_assign_value(t43, t26, 0, 0, 1);

LAB11:    t44 = (t0 + 3024);
    t45 = *((char **)t44);
    t46 = (t45 + 80U);
    t47 = *((char **)t46);
    t48 = (t47 + 272U);
    t49 = *((char **)t48);
    t50 = (t49 + 0U);
    t51 = *((char **)t50);
    t54 = ((int  (*)(char *, char *))t51)(t0, t45);
    if (t54 != 0)
        goto LAB13;

LAB12:    t45 = (t0 + 3024);
    t52 = *((char **)t45);
    t45 = (t52 + 96U);
    t53 = *((char **)t45);
    t55 = (t53 + 0U);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memcpy(t60, t57, 8);
    t58 = (t0 + 848);
    t59 = (t0 + 2928);
    t61 = 0;
    xsi_delete_subprogram_invocation(t58, t52, t0, t59, t61);
    t62 = (t0 + 2200);
    t63 = (t0 + 2200);
    t64 = (t63 + 72U);
    t66 = *((char **)t64);
    t67 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t65, t66, 2, t67, 32, 1);
    t68 = (t65 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (!(t71));
    if (t72 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(31, ng4);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1480U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 5);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 5);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    t15 = (t0 + 1640U);
    t17 = *((char **)t15);
    memset(t26, 0, 8);
    t15 = (t26 + 4);
    t24 = (t17 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (t28 >> 0);
    t30 = (t29 & 1);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t24);
    t32 = (t31 >> 0);
    t33 = (t32 & 1);
    *((unsigned int *)t15) = t33;
    t25 = (t0 + 2928);
    t27 = (t0 + 848);
    t34 = xsi_create_subprogram_invocation(t25, 0, t0, t27, 0, 0);
    t35 = (t34 + 96U);
    t36 = *((char **)t35);
    t37 = (t36 + 160U);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 1);
    t38 = (t34 + 96U);
    t39 = *((char **)t38);
    t40 = (t39 + 320U);
    xsi_vlogvar_assign_value(t40, t16, 0, 0, 1);
    t41 = (t34 + 96U);
    t42 = *((char **)t41);
    t43 = (t42 + 480U);
    xsi_vlogvar_assign_value(t43, t26, 0, 0, 1);

LAB16:    t44 = (t0 + 3024);
    t45 = *((char **)t44);
    t46 = (t45 + 80U);
    t47 = *((char **)t46);
    t48 = (t47 + 272U);
    t49 = *((char **)t48);
    t50 = (t49 + 0U);
    t51 = *((char **)t50);
    t54 = ((int  (*)(char *, char *))t51)(t0, t45);
    if (t54 != 0)
        goto LAB18;

LAB17:    t45 = (t0 + 3024);
    t52 = *((char **)t45);
    t45 = (t52 + 96U);
    t53 = *((char **)t45);
    t55 = (t53 + 0U);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memcpy(t60, t57, 8);
    t58 = (t0 + 848);
    t59 = (t0 + 2928);
    t61 = 0;
    xsi_delete_subprogram_invocation(t58, t52, t0, t59, t61);
    t62 = (t0 + 2200);
    t63 = (t0 + 2200);
    t64 = (t63 + 72U);
    t66 = *((char **)t64);
    t67 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t65, t66, 2, t67, 32, 1);
    t68 = (t65 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (!(t71));
    if (t72 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(32, ng4);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1480U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 7);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 7);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    t15 = (t0 + 1640U);
    t17 = *((char **)t15);
    memset(t26, 0, 8);
    t15 = (t26 + 4);
    t24 = (t17 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (t28 >> 0);
    t30 = (t29 & 1);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t24);
    t32 = (t31 >> 0);
    t33 = (t32 & 1);
    *((unsigned int *)t15) = t33;
    t25 = (t0 + 2928);
    t27 = (t0 + 848);
    t34 = xsi_create_subprogram_invocation(t25, 0, t0, t27, 0, 0);
    t35 = (t34 + 96U);
    t36 = *((char **)t35);
    t37 = (t36 + 160U);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 1);
    t38 = (t34 + 96U);
    t39 = *((char **)t38);
    t40 = (t39 + 320U);
    xsi_vlogvar_assign_value(t40, t16, 0, 0, 1);
    t41 = (t34 + 96U);
    t42 = *((char **)t41);
    t43 = (t42 + 480U);
    xsi_vlogvar_assign_value(t43, t26, 0, 0, 1);

LAB21:    t44 = (t0 + 3024);
    t45 = *((char **)t44);
    t46 = (t45 + 80U);
    t47 = *((char **)t46);
    t48 = (t47 + 272U);
    t49 = *((char **)t48);
    t50 = (t49 + 0U);
    t51 = *((char **)t50);
    t54 = ((int  (*)(char *, char *))t51)(t0, t45);
    if (t54 != 0)
        goto LAB23;

LAB22:    t45 = (t0 + 3024);
    t52 = *((char **)t45);
    t45 = (t52 + 96U);
    t53 = *((char **)t45);
    t55 = (t53 + 0U);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memcpy(t60, t57, 8);
    t58 = (t0 + 848);
    t59 = (t0 + 2928);
    t61 = 0;
    xsi_delete_subprogram_invocation(t58, t52, t0, t59, t61);
    t62 = (t0 + 2200);
    t63 = (t0 + 2200);
    t64 = (t63 + 72U);
    t66 = *((char **)t64);
    t67 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t65, t66, 2, t67, 32, 1);
    t68 = (t65 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (!(t71));
    if (t72 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(33, ng4);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t14 = (t0 + 2200);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memset(t16, 0, 8);
    t24 = (t16 + 4);
    t25 = (t17 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t25);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t24) = t23;
    t27 = (t0 + 1640U);
    t34 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t35 = (t34 + 4);
    t28 = *((unsigned int *)t34);
    t29 = (t28 >> 1);
    t30 = (t29 & 1);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t35);
    t32 = (t31 >> 1);
    t33 = (t32 & 1);
    *((unsigned int *)t27) = t33;
    t36 = (t0 + 2928);
    t37 = (t0 + 848);
    t38 = xsi_create_subprogram_invocation(t36, 0, t0, t37, 0, 0);
    t39 = (t38 + 96U);
    t40 = *((char **)t39);
    t41 = (t40 + 160U);
    xsi_vlogvar_assign_value(t41, t6, 0, 0, 1);
    t42 = (t38 + 96U);
    t43 = *((char **)t42);
    t44 = (t43 + 320U);
    xsi_vlogvar_assign_value(t44, t16, 0, 0, 1);
    t45 = (t38 + 96U);
    t46 = *((char **)t45);
    t47 = (t46 + 480U);
    xsi_vlogvar_assign_value(t47, t26, 0, 0, 1);

LAB26:    t48 = (t0 + 3024);
    t49 = *((char **)t48);
    t50 = (t49 + 80U);
    t51 = *((char **)t50);
    t52 = (t51 + 272U);
    t53 = *((char **)t52);
    t55 = (t53 + 0U);
    t56 = *((char **)t55);
    t54 = ((int  (*)(char *, char *))t56)(t0, t49);
    if (t54 != 0)
        goto LAB28;

LAB27:    t49 = (t0 + 3024);
    t57 = *((char **)t49);
    t49 = (t57 + 96U);
    t58 = *((char **)t49);
    t59 = (t58 + 0U);
    t61 = (t59 + 56U);
    t62 = *((char **)t61);
    memcpy(t60, t62, 8);
    t63 = (t0 + 848);
    t64 = (t0 + 2928);
    t66 = 0;
    xsi_delete_subprogram_invocation(t63, t57, t0, t64, t66);
    t67 = (t0 + 2200);
    t68 = (t0 + 2200);
    t69 = (t68 + 72U);
    t70 = *((char **)t69);
    t73 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t65, t70, 2, t73, 32, 1);
    t74 = (t65 + 4);
    t71 = *((unsigned int *)t74);
    t72 = (!(t71));
    if (t72 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(34, ng4);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t14 = (t0 + 2200);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memset(t16, 0, 8);
    t24 = (t16 + 4);
    t25 = (t17 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (t18 >> 3);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t25);
    t22 = (t21 >> 3);
    t23 = (t22 & 1);
    *((unsigned int *)t24) = t23;
    t27 = (t0 + 1640U);
    t34 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t35 = (t34 + 4);
    t28 = *((unsigned int *)t34);
    t29 = (t28 >> 1);
    t30 = (t29 & 1);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t35);
    t32 = (t31 >> 1);
    t33 = (t32 & 1);
    *((unsigned int *)t27) = t33;
    t36 = (t0 + 2928);
    t37 = (t0 + 848);
    t38 = xsi_create_subprogram_invocation(t36, 0, t0, t37, 0, 0);
    t39 = (t38 + 96U);
    t40 = *((char **)t39);
    t41 = (t40 + 160U);
    xsi_vlogvar_assign_value(t41, t6, 0, 0, 1);
    t42 = (t38 + 96U);
    t43 = *((char **)t42);
    t44 = (t43 + 320U);
    xsi_vlogvar_assign_value(t44, t16, 0, 0, 1);
    t45 = (t38 + 96U);
    t46 = *((char **)t45);
    t47 = (t46 + 480U);
    xsi_vlogvar_assign_value(t47, t26, 0, 0, 1);

LAB31:    t48 = (t0 + 3024);
    t49 = *((char **)t48);
    t50 = (t49 + 80U);
    t51 = *((char **)t50);
    t52 = (t51 + 272U);
    t53 = *((char **)t52);
    t55 = (t53 + 0U);
    t56 = *((char **)t55);
    t54 = ((int  (*)(char *, char *))t56)(t0, t49);
    if (t54 != 0)
        goto LAB33;

LAB32:    t49 = (t0 + 3024);
    t57 = *((char **)t49);
    t49 = (t57 + 96U);
    t58 = *((char **)t49);
    t59 = (t58 + 0U);
    t61 = (t59 + 56U);
    t62 = *((char **)t61);
    memcpy(t60, t62, 8);
    t63 = (t0 + 848);
    t64 = (t0 + 2928);
    t66 = 0;
    xsi_delete_subprogram_invocation(t63, t57, t0, t64, t66);
    t67 = (t0 + 2200);
    t68 = (t0 + 2200);
    t69 = (t68 + 72U);
    t70 = *((char **)t69);
    t73 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t65, t70, 2, t73, 32, 1);
    t74 = (t65 + 4);
    t71 = *((unsigned int *)t74);
    t72 = (!(t71));
    if (t72 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(35, ng4);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t14 = (t0 + 2200);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memset(t16, 0, 8);
    t24 = (t16 + 4);
    t25 = (t17 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (t18 >> 5);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t25);
    t22 = (t21 >> 5);
    t23 = (t22 & 1);
    *((unsigned int *)t24) = t23;
    t27 = (t0 + 1640U);
    t34 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t35 = (t34 + 4);
    t28 = *((unsigned int *)t34);
    t29 = (t28 >> 2);
    t30 = (t29 & 1);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t35);
    t32 = (t31 >> 2);
    t33 = (t32 & 1);
    *((unsigned int *)t27) = t33;
    t36 = (t0 + 2928);
    t37 = (t0 + 848);
    t38 = xsi_create_subprogram_invocation(t36, 0, t0, t37, 0, 0);
    t39 = (t38 + 96U);
    t40 = *((char **)t39);
    t41 = (t40 + 160U);
    xsi_vlogvar_assign_value(t41, t6, 0, 0, 1);
    t42 = (t38 + 96U);
    t43 = *((char **)t42);
    t44 = (t43 + 320U);
    xsi_vlogvar_assign_value(t44, t16, 0, 0, 1);
    t45 = (t38 + 96U);
    t46 = *((char **)t45);
    t47 = (t46 + 480U);
    xsi_vlogvar_assign_value(t47, t26, 0, 0, 1);

LAB36:    t48 = (t0 + 3024);
    t49 = *((char **)t48);
    t50 = (t49 + 80U);
    t51 = *((char **)t50);
    t52 = (t51 + 272U);
    t53 = *((char **)t52);
    t55 = (t53 + 0U);
    t56 = *((char **)t55);
    t54 = ((int  (*)(char *, char *))t56)(t0, t49);
    if (t54 != 0)
        goto LAB38;

LAB37:    t49 = (t0 + 3024);
    t57 = *((char **)t49);
    t49 = (t57 + 96U);
    t58 = *((char **)t49);
    t59 = (t58 + 0U);
    t61 = (t59 + 56U);
    t62 = *((char **)t61);
    memcpy(t60, t62, 8);
    t63 = (t0 + 848);
    t64 = (t0 + 2928);
    t66 = 0;
    xsi_delete_subprogram_invocation(t63, t57, t0, t64, t66);
    t67 = (t0 + 2200);
    t68 = (t0 + 2200);
    t69 = (t68 + 72U);
    t70 = *((char **)t69);
    t73 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t65, t70, 2, t73, 32, 1);
    t74 = (t65 + 4);
    t71 = *((unsigned int *)t74);
    t72 = (!(t71));
    if (t72 == 1)
        goto LAB39;

LAB40:    goto LAB2;

LAB8:    t46 = (t0 + 3120U);
    *((char **)t46) = &&LAB6;
    goto LAB1;

LAB9:    xsi_vlogvar_assign_value(t64, t60, 0, *((unsigned int *)t65), 1);
    goto LAB10;

LAB13:    t44 = (t0 + 3120U);
    *((char **)t44) = &&LAB11;
    goto LAB1;

LAB14:    xsi_vlogvar_assign_value(t62, t60, 0, *((unsigned int *)t65), 1);
    goto LAB15;

LAB18:    t44 = (t0 + 3120U);
    *((char **)t44) = &&LAB16;
    goto LAB1;

LAB19:    xsi_vlogvar_assign_value(t62, t60, 0, *((unsigned int *)t65), 1);
    goto LAB20;

LAB23:    t44 = (t0 + 3120U);
    *((char **)t44) = &&LAB21;
    goto LAB1;

LAB24:    xsi_vlogvar_assign_value(t62, t60, 0, *((unsigned int *)t65), 1);
    goto LAB25;

LAB28:    t48 = (t0 + 3120U);
    *((char **)t48) = &&LAB26;
    goto LAB1;

LAB29:    xsi_vlogvar_assign_value(t67, t60, 0, *((unsigned int *)t65), 1);
    goto LAB30;

LAB33:    t48 = (t0 + 3120U);
    *((char **)t48) = &&LAB31;
    goto LAB1;

LAB34:    xsi_vlogvar_assign_value(t67, t60, 0, *((unsigned int *)t65), 1);
    goto LAB35;

LAB38:    t48 = (t0 + 3120U);
    *((char **)t48) = &&LAB36;
    goto LAB1;

LAB39:    xsi_vlogvar_assign_value(t67, t60, 0, *((unsigned int *)t65), 1);
    goto LAB40;

}


extern void work_m_00000000002882400572_3682294857_init()
{
	static char *pe[] = {(void *)Always_27_0};
	static char *se[] = {(void *)sp_mux};
	xsi_register_didat("work_m_00000000002882400572_3682294857", "isim/mux_function_isim_beh.exe.sim/work/m_00000000002882400572_3682294857.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
	xsi_register_subprogram_init(1, (void *)mux_varinit);
}
