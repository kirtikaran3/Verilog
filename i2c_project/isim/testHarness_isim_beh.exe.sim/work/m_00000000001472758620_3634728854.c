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
static const char *ng0 = "E:/i2c_project_net/i2c_project/i2c_master_byte_ctrl.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {16U, 0U};



static void Cont_101_0(char *t0)
{
    char t5[8];
    char t34[8];
    char t61[8];
    char t82[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
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
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;

LAB0:    t1 = (t0 + 8144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2984U);
    t3 = *((char **)t2);
    t2 = (t0 + 3144U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 2824U);
    t33 = *((char **)t32);
    t35 = *((unsigned int *)t5);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t32 = (t5 + 4);
    t38 = (t33 + 4);
    t39 = (t34 + 4);
    t40 = *((unsigned int *)t32);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB7;

LAB8:
LAB9:    t62 = (t0 + 5944);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t61, 0, 8);
    t65 = (t64 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t65) == 0)
        goto LAB10;

LAB12:    t71 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t71) = 1;

LAB13:    t72 = (t61 + 4);
    t73 = (t64 + 4);
    t74 = *((unsigned int *)t64);
    t75 = (~(t74));
    *((unsigned int *)t61) = t75;
    *((unsigned int *)t72) = 0;
    if (*((unsigned int *)t73) != 0)
        goto LAB15;

LAB14:    t80 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t80 & 1U);
    t81 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t81 & 1U);
    t83 = *((unsigned int *)t34);
    t84 = *((unsigned int *)t61);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t34 + 4);
    t87 = (t61 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB16;

LAB17:
LAB18:    t114 = (t0 + 9864);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    memset(t118, 0, 8);
    t119 = 1U;
    t120 = t119;
    t121 = (t82 + 4);
    t122 = *((unsigned int *)t82);
    t119 = (t119 & t122);
    t123 = *((unsigned int *)t121);
    t120 = (t120 & t123);
    t124 = (t118 + 4);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t125 | t119);
    t126 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t126 | t120);
    xsi_driver_vfirst_trans(t114, 0, 0);
    t127 = (t0 + 9704);
    *((int *)t127) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

LAB7:    t45 = *((unsigned int *)t34);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t34) = (t45 | t46);
    t47 = (t5 + 4);
    t48 = (t33 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t5);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t33);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB9;

LAB10:    *((unsigned int *)t61) = 1;
    goto LAB13;

LAB15:    t76 = *((unsigned int *)t61);
    t77 = *((unsigned int *)t73);
    *((unsigned int *)t61) = (t76 | t77);
    t78 = *((unsigned int *)t72);
    t79 = *((unsigned int *)t73);
    *((unsigned int *)t72) = (t78 | t79);
    goto LAB14;

LAB16:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t34 + 4);
    t97 = (t61 + 4);
    t98 = *((unsigned int *)t34);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t61);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB18;

}

static void Cont_104_1(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 8392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 6584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 9720);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_107_2(char *t0)
{
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 8640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 9736);
    *((int *)t2) = 1;
    t3 = (t0 + 8672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);
    t5 = (t0 + 2184U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 6904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 6744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB17:
LAB14:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(109, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 6584);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 1000LL);
    goto LAB11;

LAB12:    xsi_set_current_line(111, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 6584);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 1000LL);
    goto LAB14;

LAB15:    xsi_set_current_line(113, ng0);
    t12 = (t0 + 3464U);
    t13 = *((char **)t12);
    t12 = (t0 + 6584);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 8, 1000LL);
    goto LAB17;

LAB18:    xsi_set_current_line(115, ng0);
    t12 = (t0 + 5224U);
    t13 = *((char **)t12);
    t12 = (t0 + 6584);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t22 = (t21 + 4);
    t23 = (t20 + 4);
    t14 = *((unsigned int *)t20);
    t15 = (t14 >> 0);
    *((unsigned int *)t21) = t15;
    t16 = *((unsigned int *)t23);
    t17 = (t16 >> 0);
    *((unsigned int *)t22) = t17;
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t18 & 127U);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 & 127U);
    xsi_vlogtype_concat(t4, 8, 8, 2U, t21, 7, t13, 1);
    t25 = (t0 + 6584);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 8, 1000LL);
    goto LAB20;

}

static void Always_118_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 8888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 9752);
    *((int *)t2) = 1;
    t3 = (t0 + 8920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(119, ng0);
    t5 = (t0 + 2184U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 6904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 6744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB17:
LAB14:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(120, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 7064);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 1000LL);
    goto LAB11;

LAB12:    xsi_set_current_line(122, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 7064);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 1000LL);
    goto LAB14;

LAB15:    xsi_set_current_line(124, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 7064);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 3, 1000LL);
    goto LAB17;

LAB18:    xsi_set_current_line(126, ng0);
    t12 = (t0 + 7064);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 3, t19, 3, t20, 3);
    t21 = (t0 + 7064);
    xsi_vlogvar_wait_assign_value(t21, t4, 0, 0, 3, 1000LL);
    goto LAB20;

}

static void Cont_128_4(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 9136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 7064);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 7U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    memset(t3, 0, 8);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t14) == 0)
        goto LAB8;

LAB10:    t20 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t20) = 1;

LAB11:    t21 = (t3 + 4);
    t22 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    *((unsigned int *)t3) = t24;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB13;

LAB12:    t29 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t29 & 1U);
    t30 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t30 & 1U);
    t31 = (t0 + 9992);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 9768);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t3) = 1;
    goto LAB11;

LAB13:    t25 = *((unsigned int *)t3);
    t26 = *((unsigned int *)t22);
    *((unsigned int *)t3) = (t25 | t26);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t22);
    *((unsigned int *)t21) = (t27 | t28);
    goto LAB12;

}

static void Always_135_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 9384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 9784);
    *((int *)t2) = 1;
    t3 = (t0 + 9416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(136, ng0);
    t5 = (t0 + 2184U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t0 + 3784U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB13;

LAB14:
LAB15:    t20 = (t4 + 4);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t4);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(157, ng0);

LAB20:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 6584);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 7);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 6424);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 1000LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 7224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB21:    t6 = ((char*)((ng1)));
    t24 = xsi_vlog_unsigned_case_compare(t5, 5, t6, 5);
    if (t24 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng3)));
    t24 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t24 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng6)));
    t24 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t24 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng4)));
    t24 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t24 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng5)));
    t24 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t24 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng7)));
    t24 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t24 == 1)
        goto LAB32;

LAB33:
LAB34:
LAB18:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(137, ng0);

LAB12:    xsi_set_current_line(138, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 1000LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 1000LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    goto LAB11;

LAB13:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t24 = (t23 & t22);
    t25 = *((unsigned int *)t19);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t24));
    t30 = (~(t28));
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & t29);
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    goto LAB15;

LAB16:    xsi_set_current_line(147, ng0);

LAB19:    xsi_set_current_line(148, ng0);
    t38 = ((char*)((ng1)));
    t39 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t39, t38, 0, 0, 4, 1000LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 1000LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    goto LAB18;

LAB22:    xsi_set_current_line(166, ng0);
    t12 = (t0 + 5384U);
    t13 = *((char **)t12);
    t12 = (t13 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t13);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB34;

LAB24:    xsi_set_current_line(193, ng0);
    t3 = (t0 + 5064U);
    t6 = *((char **)t3);
    t3 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB52;

LAB53:
LAB54:    goto LAB34;

LAB26:    xsi_set_current_line(210, ng0);
    t3 = (t0 + 5064U);
    t6 = *((char **)t3);
    t3 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB61;

LAB62:
LAB63:    goto LAB34;

LAB28:    xsi_set_current_line(224, ng0);
    t3 = (t0 + 5064U);
    t6 = *((char **)t3);
    t3 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB69;

LAB70:
LAB71:    goto LAB34;

LAB30:    xsi_set_current_line(242, ng0);
    t3 = (t0 + 5064U);
    t6 = *((char **)t3);
    t3 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 6424);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 1000LL);

LAB80:    goto LAB34;

LAB32:    xsi_set_current_line(267, ng0);
    t3 = (t0 + 5064U);
    t6 = *((char **)t3);
    t3 = (t6 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB87;

LAB88:
LAB89:    goto LAB34;

LAB35:    xsi_set_current_line(167, ng0);

LAB38:    xsi_set_current_line(168, ng0);
    t19 = (t0 + 2664U);
    t20 = *((char **)t19);
    t19 = (t20 + 4);
    t14 = *((unsigned int *)t19);
    t15 = (~(t14));
    t16 = *((unsigned int *)t20);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 2984U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(184, ng0);

LAB51:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 1000LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);

LAB49:
LAB45:
LAB41:    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    goto LAB37;

LAB39:    xsi_set_current_line(169, ng0);

LAB42:    xsi_set_current_line(170, ng0);
    t38 = ((char*)((ng3)));
    t39 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t39, t38, 0, 0, 5, 1000LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);
    goto LAB41;

LAB43:    xsi_set_current_line(174, ng0);

LAB46:    xsi_set_current_line(175, ng0);
    t6 = ((char*)((ng4)));
    t12 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 5, 1000LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);
    goto LAB45;

LAB47:    xsi_set_current_line(179, ng0);

LAB50:    xsi_set_current_line(180, ng0);
    t6 = ((char*)((ng6)));
    t12 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 5, 1000LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);
    goto LAB49;

LAB52:    xsi_set_current_line(194, ng0);

LAB55:    xsi_set_current_line(195, ng0);
    t12 = (t0 + 2984U);
    t13 = *((char **)t12);
    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(201, ng0);

LAB60:    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 1000LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);

LAB58:    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    goto LAB54;

LAB56:    xsi_set_current_line(196, ng0);

LAB59:    xsi_set_current_line(197, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 1000LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);
    goto LAB58;

LAB61:    xsi_set_current_line(211, ng0);
    t12 = (t0 + 5544U);
    t13 = *((char **)t12);
    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(217, ng0);

LAB68:    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 1000LL);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);

LAB66:    goto LAB63;

LAB64:    xsi_set_current_line(212, ng0);

LAB67:    xsi_set_current_line(213, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 1000LL);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);
    goto LAB66;

LAB69:    xsi_set_current_line(225, ng0);

LAB72:    xsi_set_current_line(226, ng0);
    t12 = (t0 + 5544U);
    t13 = *((char **)t12);
    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(232, ng0);

LAB77:    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 1000LL);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);

LAB75:    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 6424);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 1000LL);
    goto LAB71;

LAB73:    xsi_set_current_line(227, ng0);

LAB76:    xsi_set_current_line(228, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 1000LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);
    goto LAB75;

LAB78:    xsi_set_current_line(243, ng0);

LAB81:    xsi_set_current_line(244, ng0);
    t12 = (t0 + 2824U);
    t13 = *((char **)t12);
    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(250, ng0);

LAB86:    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 1000LL);
    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);
    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);

LAB84:    xsi_set_current_line(259, ng0);
    t2 = (t0 + 5224U);
    t3 = *((char **)t2);
    t2 = (t0 + 6104);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 1000LL);
    xsi_set_current_line(261, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    goto LAB80;

LAB82:    xsi_set_current_line(245, ng0);

LAB85:    xsi_set_current_line(246, ng0);
    t19 = ((char*)((ng7)));
    t20 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 1000LL);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);
    goto LAB84;

LAB87:    xsi_set_current_line(268, ng0);

LAB90:    xsi_set_current_line(269, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 7224);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 1000LL);
    xsi_set_current_line(270, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 1000LL);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    goto LAB89;

}


extern void work_m_00000000001472758620_3634728854_init()
{
	static char *pe[] = {(void *)Cont_101_0,(void *)Cont_104_1,(void *)Always_107_2,(void *)Always_118_3,(void *)Cont_128_4,(void *)Always_135_5};
	xsi_register_didat("work_m_00000000001472758620_3634728854", "isim/testHarness_isim_beh.exe.sim/work/m_00000000001472758620_3634728854.didat");
	xsi_register_executes(pe);
}
