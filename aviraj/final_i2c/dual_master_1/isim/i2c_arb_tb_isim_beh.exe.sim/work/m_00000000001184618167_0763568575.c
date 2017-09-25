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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/final_i2c/dual_master_1/master2.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {6, 0};
static int ng5[] = {7, 0};



static void Cont_56_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
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
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;

LAB0:    t1 = (t0 + 6288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4568);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t59 = (t0 + 7216);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memset(t63, 0, 8);
    t64 = 1U;
    t65 = t64;
    t66 = (t3 + 4);
    t67 = *((unsigned int *)t3);
    t64 = (t64 & t67);
    t68 = *((unsigned int *)t66);
    t65 = (t65 & t68);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t70 | t64);
    t71 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t71 | t65);
    xsi_driver_vfirst_trans(t59, 0, 0);
    t72 = (t0 + 7104);
    *((int *)t72) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t41 = (t0 + 2408U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t41 = (t42 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t42);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t41) == 0)
        goto LAB21;

LAB23:    t48 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t48) = 1;

LAB24:    t49 = (t40 + 4);
    t50 = (t42 + 4);
    t51 = *((unsigned int *)t42);
    t52 = (~(t51));
    *((unsigned int *)t40) = t52;
    *((unsigned int *)t49) = 0;
    if (*((unsigned int *)t50) != 0)
        goto LAB26;

LAB25:    t57 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t57 & 4294967295U);
    t58 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t58 & 4294967295U);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB21:    *((unsigned int *)t40) = 1;
    goto LAB24;

LAB26:    t53 = *((unsigned int *)t40);
    t54 = *((unsigned int *)t50);
    *((unsigned int *)t40) = (t53 | t54);
    t55 = *((unsigned int *)t49);
    t56 = *((unsigned int *)t50);
    *((unsigned int *)t49) = (t55 | t56);
    goto LAB25;

}

static void Always_58_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t40[8];
    char t55[8];
    char t63[8];
    char t91[8];
    char t109[8];
    char t124[8];
    char t132[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;

LAB0:    t1 = (t0 + 6536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 7120);
    *((int *)t2) = 1;
    t3 = (t0 + 6568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(62, ng0);

LAB13:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    memset(t30, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t22) != 0)
        goto LAB20;

LAB21:    t29 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB22;

LAB23:    memcpy(t63, t30, 8);

LAB24:    memset(t91, 0, 8);
    t92 = (t63 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t63);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t92) != 0)
        goto LAB38;

LAB39:    t99 = (t91 + 4);
    t100 = *((unsigned int *)t91);
    t101 = (!(t100));
    t102 = *((unsigned int *)t99);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB40;

LAB41:    memcpy(t132, t91, 8);

LAB42:    t160 = (t132 + 4);
    t161 = *((unsigned int *)t160);
    t162 = (~(t161));
    t163 = *((unsigned int *)t132);
    t164 = (t163 & t162);
    t165 = (t164 != 0);
    if (t165 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB56:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(60, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 4568);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB20:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB21;

LAB22:    t35 = (t0 + 3768);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 608);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    t38 = (t37 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t39);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t38);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB28;

LAB25:    if (t51 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t40) = 1;

LAB28:    memset(t55, 0, 8);
    t56 = (t40 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t56) != 0)
        goto LAB31;

LAB32:    t64 = *((unsigned int *)t30);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t30 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB27:    t54 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t55) = 1;
    goto LAB32;

LAB31:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB32;

LAB33:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t30 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t30);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t55);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB35;

LAB36:    *((unsigned int *)t91) = 1;
    goto LAB39;

LAB38:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB39;

LAB40:    t104 = (t0 + 3768);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = (t0 + 1288);
    t108 = *((char **)t107);
    memset(t109, 0, 8);
    t107 = (t106 + 4);
    t110 = (t108 + 4);
    t111 = *((unsigned int *)t106);
    t112 = *((unsigned int *)t108);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t107);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t107);
    t119 = *((unsigned int *)t110);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB46;

LAB43:    if (t120 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t109) = 1;

LAB46:    memset(t124, 0, 8);
    t125 = (t109 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t109);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t125) != 0)
        goto LAB49;

LAB50:    t133 = *((unsigned int *)t91);
    t134 = *((unsigned int *)t124);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = (t91 + 4);
    t137 = (t124 + 4);
    t138 = (t132 + 4);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB45:    t123 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t124) = 1;
    goto LAB50;

LAB49:    t131 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB50;

LAB51:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t91 + 4);
    t147 = (t124 + 4);
    t148 = *((unsigned int *)t146);
    t149 = (~(t148));
    t150 = *((unsigned int *)t91);
    t151 = (t150 & t149);
    t152 = *((unsigned int *)t147);
    t153 = (~(t152));
    t154 = *((unsigned int *)t124);
    t155 = (t154 & t153);
    t156 = (~(t151));
    t157 = (~(t155));
    t158 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t158 & t156);
    t159 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t159 & t157);
    goto LAB53;

LAB54:    xsi_set_current_line(64, ng0);
    t166 = ((char*)((ng1)));
    t167 = (t0 + 4568);
    xsi_vlogvar_wait_assign_value(t167, t166, 0, 0, 1, 0LL);
    goto LAB56;

}

static void Always_72_2(char *t0)
{
    char t6[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    int t57;

LAB0:    t1 = (t0 + 6784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 7136);
    *((int *)t2) = 1;
    t3 = (t0 + 6816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(82, ng0);

LAB14:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t7, 32);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 3768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB36:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(73, ng0);

LAB13:    xsi_set_current_line(75, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t0 + 4088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 7);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t0 + 4408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 3768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB12;

LAB16:    xsi_set_current_line(85, ng0);

LAB37:    xsi_set_current_line(86, ng0);
    t5 = ((char*)((ng2)));
    t8 = (t0 + 3608);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 3768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB36;

LAB18:    xsi_set_current_line(90, ng0);

LAB38:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3608);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 3768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB36;

LAB20:    xsi_set_current_line(95, ng0);

LAB39:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4088);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4088);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 4248);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    xsi_vlog_generic_get_index_select_value(t6, 1, t7, t22, 2, t31, 8, 2);
    t32 = (t0 + 3608);
    xsi_vlogvar_assign_value(t32, t6, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4728);
    t8 = (t0 + 4728);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 4248);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    xsi_vlog_generic_convert_bit_index(t6, t22, 2, t31, 8, 2);
    t32 = (t6 + 4);
    t9 = *((unsigned int *)t32);
    t30 = (!(t9));
    if (t30 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 5208);
    t8 = (t0 + 5208);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 4248);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    xsi_vlog_generic_convert_bit_index(t6, t22, 2, t31, 8, 2);
    t32 = (t6 + 4);
    t9 = *((unsigned int *)t32);
    t30 = (!(t9));
    if (t30 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t6) = 1;

LAB47:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 8, t7, 32);
    t8 = (t0 + 4248);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);

LAB50:    goto LAB36;

LAB22:    xsi_set_current_line(107, ng0);

LAB51:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2728U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB55;

LAB52:    if (t18 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;

LAB55:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB63;

LAB60:    if (t18 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t6) = 1;

LAB63:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB64;

LAB65:
LAB66:
LAB58:    goto LAB36;

LAB24:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4248);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB71;

LAB68:    if (t18 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t6) = 1;

LAB71:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB72;

LAB73:
LAB74:    goto LAB36;

LAB26:    xsi_set_current_line(135, ng0);

LAB91:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4408);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4408);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 4248);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    xsi_vlog_generic_get_index_select_value(t6, 1, t7, t22, 2, t31, 8, 2);
    t32 = (t0 + 3608);
    xsi_vlogvar_assign_value(t32, t6, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4888);
    t8 = (t0 + 4888);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 4248);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    xsi_vlog_generic_convert_bit_index(t6, t22, 2, t31, 8, 2);
    t32 = (t6 + 4);
    t9 = *((unsigned int *)t32);
    t30 = (!(t9));
    if (t30 == 1)
        goto LAB92;

LAB93:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 5368);
    t8 = (t0 + 5368);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 4248);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    xsi_vlog_generic_convert_bit_index(t6, t22, 2, t31, 8, 2);
    t32 = (t6 + 4);
    t9 = *((unsigned int *)t32);
    t30 = (!(t9));
    if (t30 == 1)
        goto LAB94;

LAB95:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB99;

LAB96:    if (t18 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t6) = 1;

LAB99:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 8, t7, 32);
    t8 = (t0 + 4248);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);

LAB102:    goto LAB36;

LAB28:    xsi_set_current_line(144, ng0);

LAB103:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3608);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 5048);
    t21 = (t0 + 5048);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = (t0 + 4248);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_convert_bit_index(t6, t28, 2, t32, 8, 2);
    t34 = (t6 + 4);
    t9 = *((unsigned int *)t34);
    t57 = (!(t9));
    if (t57 == 1)
        goto LAB104;

LAB105:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB109;

LAB106:    if (t18 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t6) = 1;

LAB109:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 8, t7, 32);
    t8 = (t0 + 4248);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);

LAB112:    goto LAB36;

LAB30:    xsi_set_current_line(151, ng0);

LAB113:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3608);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 3768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB36;

LAB32:    xsi_set_current_line(155, ng0);

LAB114:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3608);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB36;

LAB40:    xsi_vlogvar_assign_value(t7, t5, 0, *((unsigned int *)t6), 1);
    goto LAB41;

LAB42:    xsi_vlogvar_assign_value(t7, t5, 0, *((unsigned int *)t6), 1);
    goto LAB43;

LAB46:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(100, ng0);
    t29 = (t0 + 880);
    t31 = *((char **)t29);
    t29 = (t0 + 3768);
    xsi_vlogvar_assign_value(t29, t31, 0, 0, 8);
    goto LAB50;

LAB54:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(109, ng0);

LAB59:    xsi_set_current_line(110, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3608);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 3768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB58;

LAB62:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(114, ng0);

LAB67:    xsi_set_current_line(115, ng0);
    t22 = ((char*)((ng2)));
    t28 = (t0 + 3608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 3768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB66;

LAB70:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(121, ng0);
    t31 = (t0 + 2728U);
    t32 = *((char **)t31);
    t31 = ((char*)((ng1)));
    memset(t33, 0, 8);
    t34 = (t32 + 4);
    t35 = (t31 + 4);
    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t31);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB78;

LAB75:    if (t45 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t33) = 1;

LAB78:    t49 = (t33 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t33);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB86;

LAB83:    if (t18 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t6) = 1;

LAB86:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 3768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB89:
LAB81:    goto LAB74;

LAB77:    t48 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(122, ng0);

LAB82:    xsi_set_current_line(123, ng0);
    t55 = ((char*)((ng1)));
    t56 = (t0 + 3608);
    xsi_vlogvar_assign_value(t56, t55, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 3768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB81;

LAB85:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(127, ng0);

LAB90:    xsi_set_current_line(128, ng0);
    t22 = ((char*)((ng1)));
    t28 = (t0 + 3608);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 3768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB89;

LAB92:    xsi_vlogvar_assign_value(t7, t5, 0, *((unsigned int *)t6), 1);
    goto LAB93;

LAB94:    xsi_vlogvar_assign_value(t7, t5, 0, *((unsigned int *)t6), 1);
    goto LAB95;

LAB98:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB99;

LAB100:    xsi_set_current_line(140, ng0);
    t29 = (t0 + 1424);
    t31 = *((char **)t29);
    t29 = (t0 + 3768);
    xsi_vlogvar_assign_value(t29, t31, 0, 0, 8);
    goto LAB102;

LAB104:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t6), 1);
    goto LAB105;

LAB108:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB109;

LAB110:    xsi_set_current_line(147, ng0);
    t29 = (t0 + 1424);
    t31 = *((char **)t29);
    t29 = (t0 + 3768);
    xsi_vlogvar_assign_value(t29, t31, 0, 0, 8);
    goto LAB112;

}


extern void work_m_00000000001184618167_0763568575_init()
{
	static char *pe[] = {(void *)Cont_56_0,(void *)Always_58_1,(void *)Always_72_2};
	xsi_register_didat("work_m_00000000001184618167_0763568575", "isim/i2c_arb_tb_isim_beh.exe.sim/work/m_00000000001184618167_0763568575.didat");
	xsi_register_executes(pe);
}
