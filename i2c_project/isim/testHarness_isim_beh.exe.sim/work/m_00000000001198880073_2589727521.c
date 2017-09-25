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
static const char *ng0 = "E:/i2c_project_net/i2c_project/wb_master_model.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 1U};
static unsigned int ng4[] = {7U, 7U};
static unsigned int ng5[] = {255U, 255U};
static const char *ng6 = "Data compare error. Received %h, expected %h at time %t";



static int sp_wb_write(char *t1, char *t2)
{
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1120);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t5 = (t1 + 4936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t1 + 9432);
    *((int *)t13) = t12;

LAB6:    t14 = (t1 + 9432);
    if (*((int *)t14) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(54, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(51, ng0);
    t15 = (t2 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    t4 = (t1 + 9432);
    t12 = *((int *)t4);
    *((int *)t4) = (t12 - 1);
    goto LAB6;

LAB10:    xsi_set_current_line(55, ng0);
    t4 = (t1 + 5096);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3816);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(56, ng0);
    t4 = (t1 + 5256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3976);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4616);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(64, ng0);

LAB12:    t4 = (t1 + 3096U);
    t5 = *((char **)t4);
    memset(t18, 0, 8);
    t4 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t19 = (t11 & t10);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t4) == 0)
        goto LAB13;

LAB15:    t6 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t6) = 1;

LAB16:    t7 = (t18 + 4);
    t8 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    *((unsigned int *)t18) = t22;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB18;

LAB17:    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 1U);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t28 & 1U);
    t13 = (t18 + 4);
    t29 = *((unsigned int *)t13);
    t30 = (~(t29));
    t31 = *((unsigned int *)t18);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(67, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB22;
    t0 = 1;
    goto LAB1;

LAB13:    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB18:    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t18) = (t23 | t24);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t25 | t26);
    goto LAB17;

LAB19:    xsi_set_current_line(64, ng0);
    t14 = (t2 + 88U);
    t15 = *((char **)t14);
    t16 = (t15 + 32U);
    xsi_wp_set_status(t16, 1);
    *((char **)t3) = &&LAB21;
    goto LAB1;

LAB21:    goto LAB12;

LAB22:    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 4296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 3816);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 3976);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 4456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 4616);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB4;

}

static int sp_wb_read(char *t1, char *t2)
{
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1552);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t5 = (t1 + 5416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t1 + 9436);
    *((int *)t13) = t12;

LAB6:    t14 = (t1 + 9436);
    if (*((int *)t14) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(92, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(89, ng0);
    t15 = (t2 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    t4 = (t1 + 9436);
    t12 = *((int *)t4);
    *((int *)t4) = (t12 - 1);
    goto LAB6;

LAB10:    xsi_set_current_line(93, ng0);
    t4 = (t1 + 5576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3816);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(94, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 3976);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(95, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4616);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(102, ng0);

LAB12:    t4 = (t1 + 3096U);
    t5 = *((char **)t4);
    memset(t18, 0, 8);
    t4 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t19 = (t11 & t10);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t4) == 0)
        goto LAB13;

LAB15:    t6 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t6) = 1;

LAB16:    t7 = (t18 + 4);
    t8 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    *((unsigned int *)t18) = t22;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB18;

LAB17:    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 1U);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t28 & 1U);
    t13 = (t18 + 4);
    t29 = *((unsigned int *)t13);
    t30 = (~(t29));
    t31 = *((unsigned int *)t18);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(105, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB22;
    t0 = 1;
    goto LAB1;

LAB13:    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB18:    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t18) = (t23 | t24);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t25 | t26);
    goto LAB17;

LAB19:    xsi_set_current_line(102, ng0);
    t14 = (t2 + 88U);
    t15 = *((char **)t14);
    t16 = (t15 + 32U);
    xsi_wp_set_status(t16, 1);
    *((char **)t3) = &&LAB21;
    goto LAB1;

LAB21:    goto LAB12;

LAB22:    xsi_set_current_line(106, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 4296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 3816);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 3976);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 4456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 4616);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t4 = (t1 + 2936U);
    t5 = *((char **)t4);
    t4 = (t1 + 5736);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB4;

}

static int sp_wb_cmp(char *t1, char *t2)
{
    char t38[8];
    char t44[16];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1984);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(125, ng0);

LAB5:    xsi_set_current_line(126, ng0);
    t5 = (t1 + 5896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 6056);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB6);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 1552);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 5416);
    xsi_vlogvar_assign_value(t19, t7, 0, 0, 32);
    t20 = (t1 + 5576);
    xsi_vlogvar_assign_value(t20, t10, 0, 0, 3);

LAB8:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t29 = ((int  (*)(char *, char *))t28)(t1, t22);
    if (t29 == -1)
        goto LAB9;

LAB10:    if (t29 != 0)
        goto LAB11;

LAB6:    t22 = (t1 + 1552);
    xsi_vlog_subprogram_popinvocation(t22);

LAB7:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t30 = (t1 + 5736);
    t32 = (t30 + 56U);
    t33 = *((char **)t32);
    t34 = (t1 + 4776);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 8);
    t35 = (t1 + 1552);
    t36 = (t2 + 56U);
    t37 = *((char **)t36);
    xsi_delete_subprogram_invocation(t35, t31, t1, t37, t2);
    xsi_set_current_line(128, ng0);
    t4 = (t1 + 6216);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4776);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t38, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB13;

LAB12:    t10 = (t6 + 4);
    t11 = (t9 + 4);
    if (*((unsigned int *)t10) != *((unsigned int *)t11))
        goto LAB13;

LAB14:    t12 = (t38 + 4);
    t39 = *((unsigned int *)t12);
    t40 = (~(t39));
    t41 = *((unsigned int *)t38);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB15;

LAB16:
LAB17:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB8;
    goto LAB1;

LAB13:    *((unsigned int *)t38) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(129, ng0);
    t13 = (t1 + 4776);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 6216);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = xsi_vlog_time(t44, 1000.0000000000000, 1000.0000000000000);
    t20 = (t1 + 1984);
    xsi_vlogfile_write(1, 0, 0, ng6, 4, t20, (char)118, t15, 8, (char)118, t18, 8, (char)118, t44, 64);
    goto LAB17;

}

static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 7136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);

LAB4:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6944);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}


extern void work_m_00000000001198880073_2589727521_init()
{
	static char *pe[] = {(void *)Initial_29_0};
	static char *se[] = {(void *)sp_wb_write,(void *)sp_wb_read,(void *)sp_wb_cmp};
	xsi_register_didat("work_m_00000000001198880073_2589727521", "isim/testHarness_isim_beh.exe.sim/work/m_00000000001198880073_2589727521.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
