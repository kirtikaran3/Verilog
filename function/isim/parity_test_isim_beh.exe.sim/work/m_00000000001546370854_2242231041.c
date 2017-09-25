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
static const char *ng0 = "";
static const char *ng1 = "in=%b,out=%b,en=%b";
static const char *ng2 = "C:/Users/kirti/Documents/verilog/function/parity.v";
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {8, 0};
static unsigned int ng6[] = {6U, 0U};
static int ng7[] = {1, 0};

void Monitor_74_3(char *);
void Monitor_74_3(char *);


static void Monitor_74_3_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1608);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 3, ng1, 4, t0, (char)118, t5, 8, (char)118, t7, 1, (char)118, t9, 1);

LAB1:    return;
}

static void Initial_58_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(60, ng2);

LAB2:    xsi_set_current_line(61, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(62, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_64_1(char *t0)
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

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng2);

LAB4:    xsi_set_current_line(66, ng2);
    t2 = (t0 + 2744);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(66, ng2);
    t4 = (t0 + 1608);
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
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

}

static void Initial_70_2(char *t0)
{

LAB0:    xsi_set_current_line(72, ng2);

LAB2:    xsi_set_current_line(74, ng2);
    Monitor_74_3(t0);

LAB1:    return;
}

static void Initial_78_4(char *t0)
{
    char t5[8];
    char t12[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;

LAB0:    xsi_set_current_line(80, ng2);

LAB2:    xsi_set_current_line(84, ng2);
    xsi_set_current_line(84, ng2);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(85, ng2);

LAB6:    xsi_set_current_line(87, ng2);
    t13 = (t0 + 1448);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng6)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 8, t15, 8, t16, 8);
    xsi_vlogtype_concat(t12, 8, 8, 1U, t17, 8);
    t18 = (t0 + 1448);
    xsi_vlogvar_assign_value(t18, t12, 0, 0, 8);
    xsi_set_current_line(84, ng2);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng7)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

}

static void Initial_93_5(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng2);

LAB4:    xsi_set_current_line(97, ng2);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(97, ng2);
    xsi_vlog_stop(1);
    goto LAB1;

}

void Monitor_74_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3736);
    t2 = (t0 + 4248);
    xsi_vlogfile_monitor((void *)Monitor_74_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001546370854_2242231041_init()
{
	static char *pe[] = {(void *)Initial_58_0,(void *)Always_64_1,(void *)Initial_70_2,(void *)Initial_78_4,(void *)Initial_93_5,(void *)Monitor_74_3};
	xsi_register_didat("work_m_00000000001546370854_2242231041", "isim/parity_test_isim_beh.exe.sim/work/m_00000000001546370854_2242231041.didat");
	xsi_register_executes(pe);
}
