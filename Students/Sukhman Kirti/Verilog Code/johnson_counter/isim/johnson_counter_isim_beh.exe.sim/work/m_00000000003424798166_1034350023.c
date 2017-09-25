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
static const char *ng0 = "C:/.Xilinx/johnson_counter/johnson_counter.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {0, 0};



static void Always_25_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t35[8];
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
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
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

LAB11:    xsi_set_current_line(30, ng0);

LAB13:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1608);
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
    t8 = (t0 + 1608);
    t21 = (t0 + 1608);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t30, t28, 2, t29, 32, 1);
    t31 = (t30 + 4);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1608);
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
    t8 = (t0 + 1608);
    t21 = (t0 + 1608);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t30, t28, 2, t29, 32, 1);
    t31 = (t30 + 4);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1608);
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
    t8 = (t0 + 1608);
    t21 = (t0 + 1608);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t30, t28, 2, t29, 32, 1);
    t31 = (t30 + 4);
    t15 = *((unsigned int *)t31);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    memset(t6, 0, 8);
    t8 = (t30 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t30);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t8) == 0)
        goto LAB20;

LAB22:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;

LAB23:    t22 = (t6 + 4);
    t28 = (t30 + 4);
    t20 = *((unsigned int *)t30);
    t23 = (~(t20));
    *((unsigned int *)t6) = t23;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB25;

LAB24:    t33 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t33 & 1U);
    t34 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t34 & 1U);
    t29 = (t0 + 1608);
    t31 = (t0 + 1608);
    t36 = (t31 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t35, t37, 2, t38, 32, 1);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t39);
    t32 = (!(t40));
    if (t32 == 1)
        goto LAB26;

LAB27:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(28, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    goto LAB12;

LAB14:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB17;

LAB18:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB19;

LAB20:    *((unsigned int *)t6) = 1;
    goto LAB23;

LAB25:    t24 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t28);
    *((unsigned int *)t6) = (t24 | t25);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t26 | t27);
    goto LAB24;

LAB26:    xsi_vlogvar_wait_assign_value(t29, t6, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB27;

}


extern void work_m_00000000003424798166_1034350023_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000003424798166_1034350023", "isim/johnson_counter_isim_beh.exe.sim/work/m_00000000003424798166_1034350023.didat");
	xsi_register_executes(pe);
}
