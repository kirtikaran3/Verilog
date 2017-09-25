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
static const char *ng0 = "E:/final_i2c/dual_master_1/i2c_arb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "reset";
static const char *ng4 = "arb_idle";
static const char *ng5 = "start";
static int ng6[] = {6, 0};
static const char *ng7 = "add match";
static int ng8[] = {7, 0};
static const char *ng9 = "else if master1";
static const char *ng10 = "else if master2";
static const char *ng11 = "waps idle";



static void Cont_71_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t37[8];
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
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 7568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 6488);
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

LAB13:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t35, 8);

LAB20:    t42 = (t0 + 8232);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 1U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans(t42, 0, 0);
    t55 = (t0 + 8136);
    *((int *)t55) = 1;

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

LAB12:    t35 = (t0 + 4008U);
    t36 = *((char **)t35);
    memcpy(t37, t36, 8);
    goto LAB13;

LAB14:    t35 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t37, 32, t35, 32);
    goto LAB20;

LAB18:    memcpy(t3, t37, 8);
    goto LAB20;

}

static void Always_75_1(char *t0)
{
    char t6[8];
    char t31[8];
    char t37[8];
    char t53[8];
    char t61[8];
    char t93[8];
    char t107[8];
    char t123[8];
    char t131[8];
    char t163[8];
    char t177[8];
    char t193[8];
    char t201[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
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
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    unsigned int t110;
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
    char *t122;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    int t155;
    int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    char *t206;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    char *t215;
    char *t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    int t225;
    int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    char *t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;

LAB0:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 8152);
    *((int *)t2) = 1;
    t3 = (t0 + 7848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);
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
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(86, ng0);

LAB13:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 6328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB14:    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t7, 32);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t30 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);

LAB37:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(77, ng0);

LAB12:    xsi_set_current_line(78, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 5688);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 3);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(83, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    goto LAB11;

LAB15:    xsi_set_current_line(89, ng0);

LAB38:    xsi_set_current_line(90, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB37;

LAB17:    xsi_set_current_line(95, ng0);

LAB39:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4008U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t6) = 1;

LAB43:    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t22) != 0)
        goto LAB46;

LAB47:    t29 = (t31 + 4);
    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB48;

LAB49:    memcpy(t61, t31, 8);

LAB50:    memset(t93, 0, 8);
    t94 = (t61 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t61);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t94) != 0)
        goto LAB64;

LAB65:    t101 = (t93 + 4);
    t102 = *((unsigned int *)t93);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB66;

LAB67:    memcpy(t131, t93, 8);

LAB68:    memset(t163, 0, 8);
    t164 = (t131 + 4);
    t165 = *((unsigned int *)t164);
    t166 = (~(t165));
    t167 = *((unsigned int *)t131);
    t168 = (t167 & t166);
    t169 = (t168 & 1U);
    if (t169 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t164) != 0)
        goto LAB82;

LAB83:    t171 = (t163 + 4);
    t172 = *((unsigned int *)t163);
    t173 = *((unsigned int *)t171);
    t174 = (t172 || t173);
    if (t174 > 0)
        goto LAB84;

LAB85:    memcpy(t201, t163, 8);

LAB86:    t233 = (t201 + 4);
    t234 = *((unsigned int *)t233);
    t235 = (~(t234));
    t236 = *((unsigned int *)t201);
    t237 = (t236 & t235);
    t238 = (t237 != 0);
    if (t238 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);

LAB100:    goto LAB37;

LAB19:    xsi_set_current_line(109, ng0);

LAB102:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3848U);
    t5 = *((char **)t2);
    t2 = (t0 + 4888);
    t7 = (t0 + 4888);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 5688);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_bit_index(t6, t21, 2, t29, 3, 2);
    t35 = (t6 + 4);
    t9 = *((unsigned int *)t35);
    t85 = (!(t9));
    if (t85 == 1)
        goto LAB103;

LAB104:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4168U);
    t3 = *((char **)t2);
    t2 = (t0 + 5048);
    t5 = (t0 + 5048);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 5848);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t28, 3, 2);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t30 = (!(t9));
    if (t30 == 1)
        goto LAB105;

LAB106:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5688);
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
        goto LAB110;

LAB107:    if (t18 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t6) = 1;

LAB110:    memset(t31, 0, 8);
    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t28) != 0)
        goto LAB113;

LAB114:    t35 = (t31 + 4);
    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t35);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB115;

LAB116:    memcpy(t61, t31, 8);

LAB117:    t105 = (t61 + 4);
    t95 = *((unsigned int *)t105);
    t96 = (~(t95));
    t97 = *((unsigned int *)t61);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(146, ng0);

LAB165:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 3, t7, 32);
    t8 = (t0 + 5688);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 3);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 3, t7, 32);
    t8 = (t0 + 5848);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 3);

LAB131:    goto LAB37;

LAB21:    xsi_set_current_line(151, ng0);

LAB166:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3848U);
    t5 = *((char **)t2);
    t2 = (t0 + 4728);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3848U);
    t3 = *((char **)t2);
    t2 = (t0 + 5528);
    t5 = (t0 + 5528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 6008);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t6, t8, 2, t28, 3, 2);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t30 = (!(t9));
    if (t30 == 1)
        goto LAB167;

LAB168:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 6008);
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
        goto LAB172;

LAB169:    if (t18 != 0)
        goto LAB171;

LAB170:    *((unsigned int *)t6) = 1;

LAB172:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB173;

LAB174:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 6008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 3, t7, 32);
    t8 = (t0 + 6008);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 3);

LAB175:    goto LAB37;

LAB23:    xsi_set_current_line(161, ng0);

LAB176:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4168U);
    t5 = *((char **)t2);
    t2 = (t0 + 4728);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 4728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 5368);
    t8 = (t0 + 5368);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 6168);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    xsi_vlog_generic_convert_bit_index(t6, t22, 2, t35, 3, 2);
    t36 = (t6 + 4);
    t9 = *((unsigned int *)t36);
    t30 = (!(t9));
    if (t30 == 1)
        goto LAB177;

LAB178:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 6168);
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
        goto LAB182;

LAB179:    if (t18 != 0)
        goto LAB181;

LAB180:    *((unsigned int *)t6) = 1;

LAB182:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB183;

LAB184:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 6168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 3, t7, 32);
    t8 = (t0 + 6168);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 3);

LAB185:    goto LAB37;

LAB25:    xsi_set_current_line(170, ng0);

LAB186:    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 6488);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB27:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 1424);
    t5 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 4);
    goto LAB37;

LAB29:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 4);
    goto LAB37;

LAB31:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 1696);
    t5 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 4);
    goto LAB37;

LAB33:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 1016);
    t5 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 4);
    goto LAB37;

LAB42:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t31) = 1;
    goto LAB47;

LAB46:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB47;

LAB48:    t35 = (t0 + 3848U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng1)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB54;

LAB51:    if (t49 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t37) = 1;

LAB54:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t54) != 0)
        goto LAB57;

LAB58:    t62 = *((unsigned int *)t31);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t31 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB53:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t53) = 1;
    goto LAB58;

LAB57:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB58;

LAB59:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t31 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t31);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB61;

LAB62:    *((unsigned int *)t93) = 1;
    goto LAB65;

LAB64:    t100 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB65;

LAB66:    t105 = (t0 + 4328U);
    t106 = *((char **)t105);
    t105 = ((char*)((ng2)));
    memset(t107, 0, 8);
    t108 = (t106 + 4);
    t109 = (t105 + 4);
    t110 = *((unsigned int *)t106);
    t111 = *((unsigned int *)t105);
    t112 = (t110 ^ t111);
    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t109);
    t115 = (t113 ^ t114);
    t116 = (t112 | t115);
    t117 = *((unsigned int *)t108);
    t118 = *((unsigned int *)t109);
    t119 = (t117 | t118);
    t120 = (~(t119));
    t121 = (t116 & t120);
    if (t121 != 0)
        goto LAB72;

LAB69:    if (t119 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t107) = 1;

LAB72:    memset(t123, 0, 8);
    t124 = (t107 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t107);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t124) != 0)
        goto LAB75;

LAB76:    t132 = *((unsigned int *)t93);
    t133 = *((unsigned int *)t123);
    t134 = (t132 & t133);
    *((unsigned int *)t131) = t134;
    t135 = (t93 + 4);
    t136 = (t123 + 4);
    t137 = (t131 + 4);
    t138 = *((unsigned int *)t135);
    t139 = *((unsigned int *)t136);
    t140 = (t138 | t139);
    *((unsigned int *)t137) = t140;
    t141 = *((unsigned int *)t137);
    t142 = (t141 != 0);
    if (t142 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB68;

LAB71:    t122 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t123) = 1;
    goto LAB76;

LAB75:    t130 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB76;

LAB77:    t143 = *((unsigned int *)t131);
    t144 = *((unsigned int *)t137);
    *((unsigned int *)t131) = (t143 | t144);
    t145 = (t93 + 4);
    t146 = (t123 + 4);
    t147 = *((unsigned int *)t93);
    t148 = (~(t147));
    t149 = *((unsigned int *)t145);
    t150 = (~(t149));
    t151 = *((unsigned int *)t123);
    t152 = (~(t151));
    t153 = *((unsigned int *)t146);
    t154 = (~(t153));
    t155 = (t148 & t150);
    t156 = (t152 & t154);
    t157 = (~(t155));
    t158 = (~(t156));
    t159 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t159 & t157);
    t160 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t160 & t158);
    t161 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t161 & t157);
    t162 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t162 & t158);
    goto LAB79;

LAB80:    *((unsigned int *)t163) = 1;
    goto LAB83;

LAB82:    t170 = (t163 + 4);
    *((unsigned int *)t163) = 1;
    *((unsigned int *)t170) = 1;
    goto LAB83;

LAB84:    t175 = (t0 + 4168U);
    t176 = *((char **)t175);
    t175 = ((char*)((ng1)));
    memset(t177, 0, 8);
    t178 = (t176 + 4);
    t179 = (t175 + 4);
    t180 = *((unsigned int *)t176);
    t181 = *((unsigned int *)t175);
    t182 = (t180 ^ t181);
    t183 = *((unsigned int *)t178);
    t184 = *((unsigned int *)t179);
    t185 = (t183 ^ t184);
    t186 = (t182 | t185);
    t187 = *((unsigned int *)t178);
    t188 = *((unsigned int *)t179);
    t189 = (t187 | t188);
    t190 = (~(t189));
    t191 = (t186 & t190);
    if (t191 != 0)
        goto LAB90;

LAB87:    if (t189 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t177) = 1;

LAB90:    memset(t193, 0, 8);
    t194 = (t177 + 4);
    t195 = *((unsigned int *)t194);
    t196 = (~(t195));
    t197 = *((unsigned int *)t177);
    t198 = (t197 & t196);
    t199 = (t198 & 1U);
    if (t199 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t194) != 0)
        goto LAB93;

LAB94:    t202 = *((unsigned int *)t163);
    t203 = *((unsigned int *)t193);
    t204 = (t202 & t203);
    *((unsigned int *)t201) = t204;
    t205 = (t163 + 4);
    t206 = (t193 + 4);
    t207 = (t201 + 4);
    t208 = *((unsigned int *)t205);
    t209 = *((unsigned int *)t206);
    t210 = (t208 | t209);
    *((unsigned int *)t207) = t210;
    t211 = *((unsigned int *)t207);
    t212 = (t211 != 0);
    if (t212 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB86;

LAB89:    t192 = (t177 + 4);
    *((unsigned int *)t177) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t193) = 1;
    goto LAB94;

LAB93:    t200 = (t193 + 4);
    *((unsigned int *)t193) = 1;
    *((unsigned int *)t200) = 1;
    goto LAB94;

LAB95:    t213 = *((unsigned int *)t201);
    t214 = *((unsigned int *)t207);
    *((unsigned int *)t201) = (t213 | t214);
    t215 = (t163 + 4);
    t216 = (t193 + 4);
    t217 = *((unsigned int *)t163);
    t218 = (~(t217));
    t219 = *((unsigned int *)t215);
    t220 = (~(t219));
    t221 = *((unsigned int *)t193);
    t222 = (~(t221));
    t223 = *((unsigned int *)t216);
    t224 = (~(t223));
    t225 = (t218 & t220);
    t226 = (t222 & t224);
    t227 = (~(t225));
    t228 = (~(t226));
    t229 = *((unsigned int *)t207);
    *((unsigned int *)t207) = (t229 & t227);
    t230 = *((unsigned int *)t207);
    *((unsigned int *)t207) = (t230 & t228);
    t231 = *((unsigned int *)t201);
    *((unsigned int *)t201) = (t231 & t227);
    t232 = *((unsigned int *)t201);
    *((unsigned int *)t201) = (t232 & t228);
    goto LAB97;

LAB98:    xsi_set_current_line(97, ng0);

LAB101:    xsi_set_current_line(98, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB100;

LAB103:    xsi_vlogvar_assign_value(t2, t5, 0, *((unsigned int *)t6), 1);
    goto LAB104;

LAB105:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB106;

LAB109:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB110;

LAB111:    *((unsigned int *)t31) = 1;
    goto LAB114;

LAB113:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB114;

LAB115:    t36 = (t0 + 5848);
    t38 = (t36 + 56U);
    t39 = *((char **)t38);
    t52 = ((char*)((ng1)));
    memset(t37, 0, 8);
    t54 = (t39 + 4);
    t60 = (t52 + 4);
    t40 = *((unsigned int *)t39);
    t41 = *((unsigned int *)t52);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t54);
    t44 = *((unsigned int *)t60);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t54);
    t48 = *((unsigned int *)t60);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB121;

LAB118:    if (t49 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t37) = 1;

LAB121:    memset(t53, 0, 8);
    t66 = (t37 + 4);
    t55 = *((unsigned int *)t66);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t66) != 0)
        goto LAB124;

LAB125:    t62 = *((unsigned int *)t31);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t75 = (t31 + 4);
    t76 = (t53 + 4);
    t94 = (t61 + 4);
    t68 = *((unsigned int *)t75);
    t69 = *((unsigned int *)t76);
    t70 = (t68 | t69);
    *((unsigned int *)t94) = t70;
    t71 = *((unsigned int *)t94);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB117;

LAB120:    t65 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB121;

LAB122:    *((unsigned int *)t53) = 1;
    goto LAB125;

LAB124:    t67 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB125;

LAB126:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t94);
    *((unsigned int *)t61) = (t73 | t74);
    t100 = (t31 + 4);
    t101 = (t53 + 4);
    t77 = *((unsigned int *)t31);
    t78 = (~(t77));
    t79 = *((unsigned int *)t100);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t101);
    t84 = (~(t83));
    t30 = (t78 & t80);
    t85 = (t82 & t84);
    t87 = (~(t30));
    t88 = (~(t85));
    t89 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t89 & t87);
    t90 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB128;

LAB129:    xsi_set_current_line(114, ng0);
    t106 = (t0 + 4888);
    t108 = (t106 + 56U);
    t109 = *((char **)t108);
    t122 = (t0 + 5048);
    t124 = (t122 + 56U);
    t130 = *((char **)t124);
    memset(t93, 0, 8);
    t135 = (t109 + 4);
    t136 = (t130 + 4);
    t102 = *((unsigned int *)t109);
    t103 = *((unsigned int *)t130);
    t104 = (t102 ^ t103);
    t110 = *((unsigned int *)t135);
    t111 = *((unsigned int *)t136);
    t112 = (t110 ^ t111);
    t113 = (t104 | t112);
    t114 = *((unsigned int *)t135);
    t115 = *((unsigned int *)t136);
    t116 = (t114 | t115);
    t117 = (~(t116));
    t118 = (t113 & t117);
    if (t118 != 0)
        goto LAB135;

LAB132:    if (t116 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t93) = 1;

LAB135:    t145 = (t93 + 4);
    t119 = *((unsigned int *)t145);
    t120 = (~(t119));
    t121 = *((unsigned int *)t93);
    t125 = (t121 & t120);
    t126 = (t125 != 0);
    if (t126 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 5208);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t22 = (t5 + 4);
    t28 = (t21 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t21);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t28);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t28);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB151;

LAB148:    if (t18 != 0)
        goto LAB150;

LAB149:    *((unsigned int *)t6) = 1;

LAB151:    t35 = (t6 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB152;

LAB153:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 5208);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t22 = (t5 + 4);
    t28 = (t21 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t21);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t28);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t28);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB159;

LAB156:    if (t18 != 0)
        goto LAB158;

LAB157:    *((unsigned int *)t6) = 1;

LAB159:    t35 = (t6 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB160;

LAB161:    xsi_set_current_line(141, ng0);

LAB164:    xsi_set_current_line(142, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);

LAB162:
LAB154:
LAB138:    goto LAB131;

LAB134:    t137 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB135;

LAB136:    xsi_set_current_line(115, ng0);
    t146 = (t0 + 2888U);
    t164 = *((char **)t146);
    t146 = ((char*)((ng1)));
    memset(t107, 0, 8);
    t170 = (t164 + 4);
    t171 = (t146 + 4);
    t127 = *((unsigned int *)t164);
    t128 = *((unsigned int *)t146);
    t129 = (t127 ^ t128);
    t132 = *((unsigned int *)t170);
    t133 = *((unsigned int *)t171);
    t134 = (t132 ^ t133);
    t138 = (t129 | t134);
    t139 = *((unsigned int *)t170);
    t140 = *((unsigned int *)t171);
    t141 = (t139 | t140);
    t142 = (~(t141));
    t143 = (t138 & t142);
    if (t143 != 0)
        goto LAB142;

LAB139:    if (t141 != 0)
        goto LAB141;

LAB140:    *((unsigned int *)t107) = 1;

LAB142:    t176 = (t107 + 4);
    t144 = *((unsigned int *)t176);
    t147 = (~(t144));
    t148 = *((unsigned int *)t107);
    t149 = (t148 & t147);
    t150 = (t149 != 0);
    if (t150 > 0)
        goto LAB143;

LAB144:    xsi_set_current_line(123, ng0);

LAB147:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);

LAB145:    goto LAB138;

LAB141:    t175 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t175) = 1;
    goto LAB142;

LAB143:    xsi_set_current_line(116, ng0);

LAB146:    xsi_set_current_line(117, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB145;

LAB150:    t29 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB151;

LAB152:    xsi_set_current_line(129, ng0);

LAB155:    xsi_set_current_line(130, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB154;

LAB158:    t29 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB159;

LAB160:    xsi_set_current_line(136, ng0);

LAB163:    xsi_set_current_line(137, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 6328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB162;

LAB167:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB168;

LAB171:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB172;

LAB173:    xsi_set_current_line(157, ng0);
    t29 = (t0 + 1152);
    t35 = *((char **)t29);
    t29 = (t0 + 6328);
    xsi_vlogvar_assign_value(t29, t35, 0, 0, 4);
    goto LAB175;

LAB177:    xsi_vlogvar_assign_value(t7, t5, 0, *((unsigned int *)t6), 1);
    goto LAB178;

LAB181:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB182;

LAB183:    xsi_set_current_line(166, ng0);
    t29 = (t0 + 1152);
    t35 = *((char **)t29);
    t29 = (t0 + 6328);
    xsi_vlogvar_assign_value(t29, t35, 0, 0, 4);
    goto LAB185;

}


extern void work_m_00000000004099092030_0677853536_init()
{
	static char *pe[] = {(void *)Cont_71_0,(void *)Always_75_1};
	xsi_register_didat("work_m_00000000004099092030_0677853536", "isim/i2c_arb_tb_isim_beh.exe.sim/work/m_00000000004099092030_0677853536.didat");
	xsi_register_executes(pe);
}
