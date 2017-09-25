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
static const char *ng0 = "C:/.Xilinx/USART/USART.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {7, 0};
static int ng4[] = {6, 0};
static int ng5[] = {5, 0};
static int ng6[] = {4, 0};
static int ng7[] = {3, 0};
static int ng8[] = {2, 0};



static void Always_34_0(char *t0)
{
    char t6[8];
    char t30[8];
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
    char *t31;
    int t32;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(41, ng0);

LAB14:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:
LAB17:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);

LAB13:    xsi_set_current_line(38, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(43, ng0);

LAB18:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB17;

LAB19:    xsi_set_current_line(46, ng0);

LAB22:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t21);
    t18 = (t17 >> 7);
    t19 = (t18 & 1);
    *((unsigned int *)t8) = t19;
    t22 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 6);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 6);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t30, t28, 2, t29, 32, 1);
    t31 = (t30 + 4);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 5);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 5);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t30, t28, 2, t29, 32, 1);
    t31 = (t30 + 4);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 4);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t30, t28, 2, t29, 32, 1);
    t31 = (t30 + 4);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t30, t28, 2, t29, 32, 1);
    t31 = (t30 + 4);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t30, t28, 2, t29, 32, 1);
    t31 = (t30 + 4);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t30, t28, 2, t29, 32, 1);
    t31 = (t30 + 4);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t30, t28, 2, t29, 32, 1);
    t31 = (t30 + 4);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB35;

LAB36:    goto LAB21;

LAB23:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB24;

LAB25:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB26;

LAB27:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB28;

LAB29:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB30;

LAB31:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB32;

LAB33:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB34;

LAB35:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB36;

}


extern void work_m_00000000000918386387_3257000113_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_00000000000918386387_3257000113", "isim/USART_TX_isim_beh.exe.sim/work/m_00000000000918386387_3257000113.didat");
	xsi_register_executes(pe);
}
