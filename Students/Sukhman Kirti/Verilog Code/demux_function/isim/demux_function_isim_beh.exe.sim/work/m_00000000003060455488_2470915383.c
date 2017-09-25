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
static const char *ng0 = "C:/.Xilinx/demux_function/demux_function.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static int sp_demux(char *t1, char *t2)
{
    char t6[8];
    char t27[8];
    char t59[8];
    char t80[8];
    char t113[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    int t120;

LAB0:    t0 = 1;
    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t3 = (t1 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t1 + 2680);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB6;

LAB4:    if (*((unsigned int *)t10) == 0)
        goto LAB3;

LAB5:    t16 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t16) = 1;

LAB6:    t17 = (t6 + 4);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t6) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB8;

LAB7:    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t6);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t5 + 4);
    t32 = (t6 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB9;

LAB10:
LAB11:    t60 = (t1 + 2840);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t59, 0, 8);
    t63 = (t62 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t62);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t63) == 0)
        goto LAB12;

LAB14:    t69 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t69) = 1;

LAB15:    t70 = (t59 + 4);
    t71 = (t62 + 4);
    t72 = *((unsigned int *)t62);
    t73 = (~(t72));
    *((unsigned int *)t59) = t73;
    *((unsigned int *)t70) = 0;
    if (*((unsigned int *)t71) != 0)
        goto LAB17;

LAB16:    t78 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t78 & 1U);
    t79 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t79 & 1U);
    t81 = *((unsigned int *)t27);
    t82 = *((unsigned int *)t59);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t27 + 4);
    t85 = (t59 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB18;

LAB19:
LAB20:    t112 = (t1 + 2200);
    t114 = (t1 + 2200);
    t115 = (t114 + 72U);
    t116 = *((char **)t115);
    t117 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t113, t116, 2, t117, 32, 1);
    t118 = (t113 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (!(t119));
    if (t120 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(38, ng0);
    t3 = (t1 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t1 + 2680);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t10) == 0)
        goto LAB23;

LAB25:    t16 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t16) = 1;

LAB26:    t17 = (t6 + 4);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t6) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB28;

LAB27:    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t6);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t5 + 4);
    t32 = (t6 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB29;

LAB30:
LAB31:    t60 = (t1 + 2840);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t64 = *((unsigned int *)t27);
    t65 = *((unsigned int *)t62);
    t66 = (t64 & t65);
    *((unsigned int *)t59) = t66;
    t63 = (t27 + 4);
    t69 = (t62 + 4);
    t70 = (t59 + 4);
    t67 = *((unsigned int *)t63);
    t68 = *((unsigned int *)t69);
    t72 = (t67 | t68);
    *((unsigned int *)t70) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB32;

LAB33:
LAB34:    t85 = (t1 + 2200);
    t86 = (t1 + 2200);
    t94 = (t86 + 72U);
    t95 = *((char **)t94);
    t112 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t80, t95, 2, t112, 32, 1);
    t114 = (t80 + 4);
    t97 = *((unsigned int *)t114);
    t120 = (!(t97));
    if (t120 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(39, ng0);
    t3 = (t1 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t1 + 2680);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t6) = t13;
    t10 = (t5 + 4);
    t16 = (t9 + 4);
    t17 = (t6 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t16);
    t19 = (t14 | t15);
    *((unsigned int *)t17) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB37;

LAB38:
LAB39:    t32 = (t1 + 2840);
    t33 = (t32 + 56U);
    t41 = *((char **)t33);
    memset(t27, 0, 8);
    t42 = (t41 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t41);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB43;

LAB41:    if (*((unsigned int *)t42) == 0)
        goto LAB40;

LAB42:    t60 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t60) = 1;

LAB43:    t61 = (t27 + 4);
    t62 = (t41 + 4);
    t49 = *((unsigned int *)t41);
    t50 = (~(t49));
    *((unsigned int *)t27) = t50;
    *((unsigned int *)t61) = 0;
    if (*((unsigned int *)t62) != 0)
        goto LAB45;

LAB44:    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & 1U);
    t58 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t58 & 1U);
    t64 = *((unsigned int *)t6);
    t65 = *((unsigned int *)t27);
    t66 = (t64 & t65);
    *((unsigned int *)t59) = t66;
    t63 = (t6 + 4);
    t69 = (t27 + 4);
    t70 = (t59 + 4);
    t67 = *((unsigned int *)t63);
    t68 = *((unsigned int *)t69);
    t72 = (t67 | t68);
    *((unsigned int *)t70) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB46;

LAB47:
LAB48:    t85 = (t1 + 2200);
    t86 = (t1 + 2200);
    t94 = (t86 + 72U);
    t95 = *((char **)t94);
    t112 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t80, t95, 2, t112, 32, 1);
    t114 = (t80 + 4);
    t97 = *((unsigned int *)t114);
    t120 = (!(t97));
    if (t120 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(40, ng0);
    t3 = (t1 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t1 + 2680);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t6) = t13;
    t10 = (t5 + 4);
    t16 = (t9 + 4);
    t17 = (t6 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t16);
    t19 = (t14 | t15);
    *((unsigned int *)t17) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB51;

LAB52:
LAB53:    t32 = (t1 + 2840);
    t33 = (t32 + 56U);
    t41 = *((char **)t33);
    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t41);
    t46 = (t44 & t45);
    *((unsigned int *)t27) = t46;
    t42 = (t6 + 4);
    t60 = (t41 + 4);
    t61 = (t27 + 4);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t60);
    t49 = (t47 | t48);
    *((unsigned int *)t61) = t49;
    t50 = *((unsigned int *)t61);
    t53 = (t50 != 0);
    if (t53 == 1)
        goto LAB54;

LAB55:
LAB56:    t69 = (t1 + 2200);
    t70 = (t1 + 2200);
    t71 = (t70 + 72U);
    t84 = *((char **)t71);
    t85 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t59, t84, 2, t85, 32, 1);
    t86 = (t59 + 4);
    t78 = *((unsigned int *)t86);
    t120 = (!(t78));
    if (t120 == 1)
        goto LAB57;

LAB58:    t0 = 0;

LAB1:    return t0;
LAB3:    *((unsigned int *)t6) = 1;
    goto LAB6;

LAB8:    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t6) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB7;

LAB9:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t5 + 4);
    t42 = (t6 + 4);
    t43 = *((unsigned int *)t5);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t6);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB11;

LAB12:    *((unsigned int *)t59) = 1;
    goto LAB15;

LAB17:    t74 = *((unsigned int *)t59);
    t75 = *((unsigned int *)t71);
    *((unsigned int *)t59) = (t74 | t75);
    t76 = *((unsigned int *)t70);
    t77 = *((unsigned int *)t71);
    *((unsigned int *)t70) = (t76 | t77);
    goto LAB16;

LAB18:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t27 + 4);
    t95 = (t59 + 4);
    t96 = *((unsigned int *)t27);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t59);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t104 = (t97 & t99);
    t105 = (t101 & t103);
    t106 = (~(t104));
    t107 = (~(t105));
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t109 & t107);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    t111 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t111 & t107);
    goto LAB20;

LAB21:    xsi_vlogvar_assign_value(t112, t80, 0, *((unsigned int *)t113), 1);
    goto LAB22;

LAB23:    *((unsigned int *)t6) = 1;
    goto LAB26;

LAB28:    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t6) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB27;

LAB29:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t5 + 4);
    t42 = (t6 + 4);
    t43 = *((unsigned int *)t5);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t6);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB31;

LAB32:    t75 = *((unsigned int *)t59);
    t76 = *((unsigned int *)t70);
    *((unsigned int *)t59) = (t75 | t76);
    t71 = (t27 + 4);
    t84 = (t62 + 4);
    t77 = *((unsigned int *)t27);
    t78 = (~(t77));
    t79 = *((unsigned int *)t71);
    t81 = (~(t79));
    t82 = *((unsigned int *)t62);
    t83 = (~(t82));
    t87 = *((unsigned int *)t84);
    t88 = (~(t87));
    t104 = (t78 & t81);
    t105 = (t83 & t88);
    t89 = (~(t104));
    t90 = (~(t105));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t93 & t89);
    t96 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t96 & t90);
    goto LAB34;

LAB35:    xsi_vlogvar_assign_value(t85, t59, 0, *((unsigned int *)t80), 1);
    goto LAB36;

LAB37:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t6) = (t22 | t23);
    t18 = (t5 + 4);
    t31 = (t9 + 4);
    t24 = *((unsigned int *)t5);
    t25 = (~(t24));
    t26 = *((unsigned int *)t18);
    t28 = (~(t26));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t34 = *((unsigned int *)t31);
    t35 = (~(t34));
    t51 = (t25 & t28);
    t52 = (t30 & t35);
    t36 = (~(t51));
    t37 = (~(t52));
    t38 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t38 & t36);
    t39 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t39 & t37);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t36);
    t43 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t43 & t37);
    goto LAB39;

LAB40:    *((unsigned int *)t27) = 1;
    goto LAB43;

LAB45:    t53 = *((unsigned int *)t27);
    t54 = *((unsigned int *)t62);
    *((unsigned int *)t27) = (t53 | t54);
    t55 = *((unsigned int *)t61);
    t56 = *((unsigned int *)t62);
    *((unsigned int *)t61) = (t55 | t56);
    goto LAB44;

LAB46:    t75 = *((unsigned int *)t59);
    t76 = *((unsigned int *)t70);
    *((unsigned int *)t59) = (t75 | t76);
    t71 = (t6 + 4);
    t84 = (t27 + 4);
    t77 = *((unsigned int *)t6);
    t78 = (~(t77));
    t79 = *((unsigned int *)t71);
    t81 = (~(t79));
    t82 = *((unsigned int *)t27);
    t83 = (~(t82));
    t87 = *((unsigned int *)t84);
    t88 = (~(t87));
    t104 = (t78 & t81);
    t105 = (t83 & t88);
    t89 = (~(t104));
    t90 = (~(t105));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t93 & t89);
    t96 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t96 & t90);
    goto LAB48;

LAB49:    xsi_vlogvar_assign_value(t85, t59, 0, *((unsigned int *)t80), 1);
    goto LAB50;

LAB51:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t6) = (t22 | t23);
    t18 = (t5 + 4);
    t31 = (t9 + 4);
    t24 = *((unsigned int *)t5);
    t25 = (~(t24));
    t26 = *((unsigned int *)t18);
    t28 = (~(t26));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t34 = *((unsigned int *)t31);
    t35 = (~(t34));
    t51 = (t25 & t28);
    t52 = (t30 & t35);
    t36 = (~(t51));
    t37 = (~(t52));
    t38 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t38 & t36);
    t39 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t39 & t37);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t36);
    t43 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t43 & t37);
    goto LAB53;

LAB54:    t54 = *((unsigned int *)t27);
    t55 = *((unsigned int *)t61);
    *((unsigned int *)t27) = (t54 | t55);
    t62 = (t6 + 4);
    t63 = (t41 + 4);
    t56 = *((unsigned int *)t6);
    t57 = (~(t56));
    t58 = *((unsigned int *)t62);
    t64 = (~(t58));
    t65 = *((unsigned int *)t41);
    t66 = (~(t65));
    t67 = *((unsigned int *)t63);
    t68 = (~(t67));
    t104 = (t57 & t64);
    t105 = (t66 & t68);
    t72 = (~(t104));
    t73 = (~(t105));
    t74 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t74 & t72);
    t75 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t75 & t73);
    t76 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t76 & t72);
    t77 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t77 & t73);
    goto LAB56;

LAB57:    xsi_vlogvar_assign_value(t69, t27, 0, *((unsigned int *)t59), 1);
    goto LAB58;

}

static void Always_26_0(char *t0)
{
    char t7[8];
    char t17[8];
    char t43[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    int t55;

LAB0:    t1 = (t0 + 3760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 4080);
    *((int *)t2) = 1;
    t3 = (t0 + 3792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t0 + 1800U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t15 = (t0 + 1800U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 1);
    t24 = (t23 & 1);
    *((unsigned int *)t15) = t24;
    t25 = (t0 + 3568);
    t26 = (t0 + 848);
    t27 = xsi_create_subprogram_invocation(t25, 0, t0, t26, 0, 0);
    t28 = (t0 + 2520);
    xsi_vlogvar_assign_value(t28, t5, 0, 0, 1);
    t29 = (t0 + 2680);
    xsi_vlogvar_assign_value(t29, t7, 0, 0, 1);
    t30 = (t0 + 2840);
    xsi_vlogvar_assign_value(t30, t17, 0, 0, 1);

LAB6:    t31 = (t0 + 3664);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = ((int  (*)(char *, char *))t38)(t0, t32);
    if (t39 != 0)
        goto LAB8;

LAB7:    t32 = (t0 + 3664);
    t40 = *((char **)t32);
    t32 = (t0 + 2360);
    t41 = (t32 + 56U);
    t42 = *((char **)t41);
    memcpy(t43, t42, 8);
    t44 = (t0 + 848);
    t45 = (t0 + 3568);
    t46 = 0;
    xsi_delete_subprogram_invocation(t44, t40, t0, t45, t46);
    t47 = (t0 + 2200);
    t49 = (t0 + 2200);
    t50 = (t49 + 72U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t48, t51, 2, t52, 32, 1);
    t53 = (t48 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (!(t54));
    if (t55 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1800U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 1800U);
    t8 = *((char **)t6);
    memset(t17, 0, 8);
    t6 = (t17 + 4);
    t15 = (t8 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 >> 1);
    t24 = (t23 & 1);
    *((unsigned int *)t6) = t24;
    t16 = (t0 + 3568);
    t18 = (t0 + 848);
    t25 = xsi_create_subprogram_invocation(t16, 0, t0, t18, 0, 0);
    t26 = (t0 + 2520);
    xsi_vlogvar_assign_value(t26, t3, 0, 0, 1);
    t27 = (t0 + 2680);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 1);
    t28 = (t0 + 2840);
    xsi_vlogvar_assign_value(t28, t17, 0, 0, 1);

LAB11:    t29 = (t0 + 3664);
    t30 = *((char **)t29);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t33 = (t32 + 272U);
    t34 = *((char **)t33);
    t35 = (t34 + 0U);
    t36 = *((char **)t35);
    t39 = ((int  (*)(char *, char *))t36)(t0, t30);
    if (t39 != 0)
        goto LAB13;

LAB12:    t30 = (t0 + 3664);
    t37 = *((char **)t30);
    t30 = (t0 + 2360);
    t38 = (t30 + 56U);
    t40 = *((char **)t38);
    memcpy(t43, t40, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 3568);
    t44 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t44);
    t45 = (t0 + 2200);
    t46 = (t0 + 2200);
    t47 = (t46 + 72U);
    t49 = *((char **)t47);
    t50 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t48, t49, 2, t50, 32, 1);
    t51 = (t48 + 4);
    t54 = *((unsigned int *)t51);
    t55 = (!(t54));
    if (t55 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1800U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 1800U);
    t8 = *((char **)t6);
    memset(t17, 0, 8);
    t6 = (t17 + 4);
    t15 = (t8 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 >> 1);
    t24 = (t23 & 1);
    *((unsigned int *)t6) = t24;
    t16 = (t0 + 3568);
    t18 = (t0 + 848);
    t25 = xsi_create_subprogram_invocation(t16, 0, t0, t18, 0, 0);
    t26 = (t0 + 2520);
    xsi_vlogvar_assign_value(t26, t3, 0, 0, 1);
    t27 = (t0 + 2680);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 1);
    t28 = (t0 + 2840);
    xsi_vlogvar_assign_value(t28, t17, 0, 0, 1);

LAB16:    t29 = (t0 + 3664);
    t30 = *((char **)t29);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t33 = (t32 + 272U);
    t34 = *((char **)t33);
    t35 = (t34 + 0U);
    t36 = *((char **)t35);
    t39 = ((int  (*)(char *, char *))t36)(t0, t30);
    if (t39 != 0)
        goto LAB18;

LAB17:    t30 = (t0 + 3664);
    t37 = *((char **)t30);
    t30 = (t0 + 2360);
    t38 = (t30 + 56U);
    t40 = *((char **)t38);
    memcpy(t43, t40, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 3568);
    t44 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t44);
    t45 = (t0 + 2200);
    t46 = (t0 + 2200);
    t47 = (t46 + 72U);
    t49 = *((char **)t47);
    t50 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t48, t49, 2, t50, 32, 1);
    t51 = (t48 + 4);
    t54 = *((unsigned int *)t51);
    t55 = (!(t54));
    if (t55 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1800U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 1800U);
    t8 = *((char **)t6);
    memset(t17, 0, 8);
    t6 = (t17 + 4);
    t15 = (t8 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 >> 1);
    t24 = (t23 & 1);
    *((unsigned int *)t6) = t24;
    t16 = (t0 + 3568);
    t18 = (t0 + 848);
    t25 = xsi_create_subprogram_invocation(t16, 0, t0, t18, 0, 0);
    t26 = (t0 + 2520);
    xsi_vlogvar_assign_value(t26, t3, 0, 0, 1);
    t27 = (t0 + 2680);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 1);
    t28 = (t0 + 2840);
    xsi_vlogvar_assign_value(t28, t17, 0, 0, 1);

LAB21:    t29 = (t0 + 3664);
    t30 = *((char **)t29);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t33 = (t32 + 272U);
    t34 = *((char **)t33);
    t35 = (t34 + 0U);
    t36 = *((char **)t35);
    t39 = ((int  (*)(char *, char *))t36)(t0, t30);
    if (t39 != 0)
        goto LAB23;

LAB22:    t30 = (t0 + 3664);
    t37 = *((char **)t30);
    t30 = (t0 + 2360);
    t38 = (t30 + 56U);
    t40 = *((char **)t38);
    memcpy(t43, t40, 8);
    t41 = (t0 + 848);
    t42 = (t0 + 3568);
    t44 = 0;
    xsi_delete_subprogram_invocation(t41, t37, t0, t42, t44);
    t45 = (t0 + 2200);
    t46 = (t0 + 2200);
    t47 = (t46 + 72U);
    t49 = *((char **)t47);
    t50 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t48, t49, 2, t50, 32, 1);
    t51 = (t48 + 4);
    t54 = *((unsigned int *)t51);
    t55 = (!(t54));
    if (t55 == 1)
        goto LAB24;

LAB25:    goto LAB2;

LAB8:    t31 = (t0 + 3760U);
    *((char **)t31) = &&LAB6;
    goto LAB1;

LAB9:    xsi_vlogvar_assign_value(t47, t43, 0, *((unsigned int *)t48), 1);
    goto LAB10;

LAB13:    t29 = (t0 + 3760U);
    *((char **)t29) = &&LAB11;
    goto LAB1;

LAB14:    xsi_vlogvar_assign_value(t45, t43, 0, *((unsigned int *)t48), 1);
    goto LAB15;

LAB18:    t29 = (t0 + 3760U);
    *((char **)t29) = &&LAB16;
    goto LAB1;

LAB19:    xsi_vlogvar_assign_value(t45, t43, 0, *((unsigned int *)t48), 1);
    goto LAB20;

LAB23:    t29 = (t0 + 3760U);
    *((char **)t29) = &&LAB21;
    goto LAB1;

LAB24:    xsi_vlogvar_assign_value(t45, t43, 0, *((unsigned int *)t48), 1);
    goto LAB25;

}


extern void work_m_00000000003060455488_2470915383_init()
{
	static char *pe[] = {(void *)Always_26_0};
	static char *se[] = {(void *)sp_demux};
	xsi_register_didat("work_m_00000000003060455488_2470915383", "isim/demux_function_isim_beh.exe.sim/work/m_00000000003060455488_2470915383.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
