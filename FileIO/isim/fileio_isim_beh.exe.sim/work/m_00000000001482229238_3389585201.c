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
static const char *ng0 = "C:/Users/Kirti/Documents/verilog/FileIO/fileio.v";
static int ng1[] = {0, 0};
static const char *ng2 = "input.txt";
static const char *ng3 = "r";
static const char *ng4 = "output.txt";
static const char *ng5 = "monitor.txt";
static const char *ng6 = "w";
static int ng7[] = {10, 0};
static int ng8[] = {1, 0};
static const char *ng9 = "%h %h\n";
static int ng10[] = {31, 0};
static int ng11[] = {16, 0};
static int ng12[] = {15, 0};
static const char *ng13 = "%0dns Error : input and output does not match";
static const char *ng14 = "       Got  %h";
static const char *ng15 = "       Exp  %h";
static const char *ng16 = "%0dns Match : input and output match";



static void Initial_35_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng2, ng3);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng4, ng3);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng5, ng6);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB1:    return;
}

static void Always_45_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3864);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_48_2(char *t0)
{
    char t12[8];
    char t13[8];
    char t24[8];
    char t25[8];
    char t32[8];
    char t35[8];
    char t36[8];
    char t37[8];
    char t60[8];
    char t61[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    int t47;
    int t48;
    char *t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    char *t59;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    int t70;
    char *t71;
    unsigned int t72;
    int t73;
    int t74;
    char *t75;
    unsigned int t76;
    int t77;
    int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    int t84;
    char *t85;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);

LAB4:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6644);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 6644);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);

LAB9:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    *((int *)t13) = xsi_vlogfile_feof(*((unsigned int *)t8));
    t9 = (t13 + 4);
    *((int *)t9) = 0;
    memset(t12, 0, 8);
    t10 = (t13 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t13);
    t14 = (t6 & t5);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t10) == 0)
        goto LAB10;

LAB12:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;

LAB13:    t16 = (t12 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6648);
    *((int *)t8) = t7;

LAB23:    t9 = (t0 + 6648);
    if (*((int *)t9) > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4112);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB27;

LAB1:    return;
LAB6:    xsi_set_current_line(49, ng0);
    t10 = (t0 + 4872);
    *((int *)t10) = 1;
    t11 = (t0 + 4336);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 6644);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB10:    *((unsigned int *)t12) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(50, ng0);

LAB16:    xsi_set_current_line(51, ng0);
    t22 = (t0 + 4888);
    *((int *)t22) = 1;
    t23 = (t0 + 4336);
    *((char **)t23) = t22;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 2408);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t13, 0, 8);
    t16 = (t13 + 4);
    t22 = (t11 + 4);
    t4 = *((unsigned int *)t11);
    t5 = (t4 >> 16);
    *((unsigned int *)t13) = t5;
    t6 = *((unsigned int *)t22);
    t14 = (t6 >> 16);
    *((unsigned int *)t16) = t14;
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 65535U);
    t17 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t17 & 65535U);
    xsi_vlog_bit_copy(t12, 0, t13, 0, 16);
    t23 = (t0 + 2408);
    t26 = (t23 + 56U);
    t27 = *((char **)t26);
    memset(t25, 0, 8);
    t28 = (t25 + 4);
    t29 = (t27 + 4);
    t18 = *((unsigned int *)t27);
    t19 = (t18 >> 0);
    *((unsigned int *)t25) = t19;
    t20 = *((unsigned int *)t29);
    t21 = (t20 >> 0);
    *((unsigned int *)t28) = t21;
    t30 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t30 & 65535U);
    t31 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t31 & 65535U);
    xsi_vlog_bit_copy(t24, 0, t25, 0, 16);
    *((int *)t32) = xsi_vlogfile_fscanf(*((unsigned int *)t8), ng9, 3, t0, (char)118, t12, 16, (char)118, t24, 16);
    t33 = (t32 + 4);
    *((int *)t33) = 0;
    t34 = (t0 + 2408);
    t38 = (t0 + 2408);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng10)));
    t42 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t35, t36, t37, ((int*)(t40)), 2, t41, 32, 1, t42, 32, 1);
    t43 = (t35 + 4);
    t44 = *((unsigned int *)t43);
    t7 = (!(t44));
    t45 = (t36 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t7 && t47);
    t49 = (t37 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB18;

LAB19:    t59 = (t0 + 2408);
    t63 = (t0 + 2408);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng12)));
    t67 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t60, t61, t62, ((int*)(t65)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t60 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (!(t69));
    t71 = (t61 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (!(t72));
    t74 = (t70 && t73);
    t75 = (t62 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (!(t76));
    t78 = (t74 && t77);
    if (t78 == 1)
        goto LAB20;

LAB21:    t85 = (t0 + 2728);
    xsi_vlogvar_assign_value(t85, t32, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4904);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB18:    t53 = *((unsigned int *)t37);
    t54 = (t53 + 0);
    t55 = *((unsigned int *)t35);
    t56 = *((unsigned int *)t36);
    t57 = (t55 - t56);
    t58 = (t57 + 1);
    xsi_vlogvar_assign_value(t34, t12, t54, *((unsigned int *)t36), t58);
    goto LAB19;

LAB20:    t79 = *((unsigned int *)t62);
    t80 = (t79 + 0);
    t81 = *((unsigned int *)t60);
    t82 = *((unsigned int *)t61);
    t83 = (t81 - t82);
    t84 = (t83 + 1);
    xsi_vlogvar_assign_value(t59, t24, t80, *((unsigned int *)t61), t84);
    goto LAB21;

LAB22:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB9;

LAB24:    xsi_set_current_line(57, ng0);
    t10 = (t0 + 4920);
    *((int *)t10) = 1;
    t11 = (t0 + 4336);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    t2 = (t0 + 6648);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB23;

LAB27:    xsi_set_current_line(61, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_65_3(char *t0)
{
    char t14[8];
    char t24[8];
    char t34[8];
    char t35[8];
    char t36[8];
    char t39[8];
    char t40[8];
    char t41[8];
    char t60[8];
    char t61[8];
    char t62[8];
    char t86[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t37;
    char *t38;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int t48;
    char *t49;
    int t50;
    int t51;
    char *t52;
    int t53;
    int t54;
    int t55;
    unsigned int t56;
    int t57;
    int t58;
    char *t59;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    int t70;
    char *t71;
    unsigned int t72;
    int t73;
    int t74;
    char *t75;
    unsigned int t76;
    int t77;
    int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    int t84;
    char *t85;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4936);
    *((int *)t2) = 1;
    t3 = (t0 + 4584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(66, ng0);

LAB8:    xsi_set_current_line(67, ng0);
    t11 = (t0 + 1928);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 16);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 16);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 65535U);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    memset(t24, 0, 8);
    t25 = (t24 + 4);
    t27 = (t26 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (t28 >> 0);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    *((unsigned int *)t25) = t31;
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 65535U);
    t33 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t33 & 65535U);
    xsi_vlogfile_fwrite(*((unsigned int *)t13), 0, 0, 1, ng9, 3, t0, (char)118, t14, 16, (char)118, t24, 16);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t24, 0, 8);
    t13 = (t24 + 4);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 16);
    *((unsigned int *)t24) = t7;
    t8 = *((unsigned int *)t15);
    t9 = (t8 >> 16);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t10 & 65535U);
    t18 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t18 & 65535U);
    xsi_vlog_bit_copy(t14, 0, t24, 0, 16);
    t16 = (t0 + 2568);
    t17 = (t16 + 56U);
    t25 = *((char **)t17);
    memset(t35, 0, 8);
    t26 = (t35 + 4);
    t27 = (t25 + 4);
    t19 = *((unsigned int *)t25);
    t20 = (t19 >> 0);
    *((unsigned int *)t35) = t20;
    t21 = *((unsigned int *)t27);
    t22 = (t21 >> 0);
    *((unsigned int *)t26) = t22;
    t23 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t23 & 65535U);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 & 65535U);
    xsi_vlog_bit_copy(t34, 0, t35, 0, 16);
    *((int *)t36) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng9, 3, t0, (char)118, t14, 16, (char)118, t34, 16);
    t37 = (t36 + 4);
    *((int *)t37) = 0;
    t38 = (t0 + 2568);
    t42 = (t0 + 2568);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng10)));
    t46 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t39, t40, t41, ((int*)(t44)), 2, t45, 32, 1, t46, 32, 1);
    t47 = (t39 + 4);
    t29 = *((unsigned int *)t47);
    t48 = (!(t29));
    t49 = (t40 + 4);
    t30 = *((unsigned int *)t49);
    t50 = (!(t30));
    t51 = (t48 && t50);
    t52 = (t41 + 4);
    t31 = *((unsigned int *)t52);
    t53 = (!(t31));
    t54 = (t51 && t53);
    if (t54 == 1)
        goto LAB9;

LAB10:    t59 = (t0 + 2568);
    t63 = (t0 + 2568);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng12)));
    t67 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t60, t61, t62, ((int*)(t65)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t60 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (!(t69));
    t71 = (t61 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (!(t72));
    t74 = (t70 && t73);
    t75 = (t62 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (!(t76));
    t78 = (t74 && t77);
    if (t78 == 1)
        goto LAB11;

LAB12:    t85 = (t0 + 2888);
    xsi_vlogvar_assign_value(t85, t36, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t5))
        goto LAB14;

LAB13:    t11 = (t3 + 4);
    t12 = (t5 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t12))
        goto LAB14;

LAB15:    t13 = (t14 + 4);
    t6 = *((unsigned int *)t13);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(73, ng0);

LAB20:    xsi_set_current_line(74, ng0);
    t2 = xsi_vlog_time(t86, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng16, 2, t0, (char)118, t86, 64);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)118, t4, 32);

LAB18:    goto LAB7;

LAB9:    t32 = *((unsigned int *)t41);
    t55 = (t32 + 0);
    t33 = *((unsigned int *)t39);
    t56 = *((unsigned int *)t40);
    t57 = (t33 - t56);
    t58 = (t57 + 1);
    xsi_vlogvar_assign_value(t38, t14, t55, *((unsigned int *)t40), t58);
    goto LAB10;

LAB11:    t79 = *((unsigned int *)t62);
    t80 = (t79 + 0);
    t81 = *((unsigned int *)t60);
    t82 = *((unsigned int *)t61);
    t83 = (t81 - t82);
    t84 = (t83 + 1);
    xsi_vlogvar_assign_value(t59, t34, t80, *((unsigned int *)t61), t84);
    goto LAB12;

LAB14:    *((unsigned int *)t14) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(69, ng0);

LAB19:    xsi_set_current_line(70, ng0);
    t15 = xsi_vlog_time(t86, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t86, 64);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)118, t4, 32);
    goto LAB18;

}


extern void work_m_00000000001482229238_3389585201_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_45_1,(void *)Initial_48_2,(void *)Always_65_3};
	xsi_register_didat("work_m_00000000001482229238_3389585201", "isim/fileio_isim_beh.exe.sim/work/m_00000000001482229238_3389585201.didat");
	xsi_register_executes(pe);
}
