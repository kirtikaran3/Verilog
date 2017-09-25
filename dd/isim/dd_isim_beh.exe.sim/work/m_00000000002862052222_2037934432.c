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
static const char *ng1 = "c=%d,a=%d,b=%d";
static const char *ng2 = "C:/Users/Kirti Karan/Documents/verilog/dd/dd.v";
static int ng3[] = {5, 0};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static int ng6[] = {2, 0};

void Monitor_37_3(char *);
void Monitor_37_3(char *);


static void Monitor_37_3_Func(char *t0)
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
    char *t10;
    char *t11;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1288);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1448);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1608);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlogfile_write(1, 0, 3, ng1, 4, t0, (char)119, t5, 32, (char)119, t8, 32, (char)119, t11, 32);

LAB1:    return;
}

static void Always_8_0(char *t0)
{
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng2);
    t2 = (t0 + 4992);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng2);

LAB5:    xsi_set_current_line(11, ng2);

LAB6:    t4 = ((char*)((ng3)));
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB7:    t11 = (t0 + 5008);
    *((int *)t11) = 1;
    t12 = (t0 + 2688U);
    *((char **)t12) = &&LAB6;
    goto LAB1;

LAB8:    t13 = (t0 + 5008);
    *((int *)t13) = 0;
    xsi_set_current_line(11, ng2);
    t14 = (t0 + 1288);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 1608);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 32);
    xsi_set_current_line(12, ng2);
    t2 = (t0 + 1288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB2;

}

static void Initial_16_1(char *t0)
{
    char t13[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng2);

LAB4:    xsi_set_current_line(20, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(21, ng2);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(22, ng2);
    t2 = (t0 + 3240);
    t3 = (t0 + 2744);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 3488);
    t5 = (t0 + 2744);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 3736);
    t7 = (t0 + 2744);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 3984);
    t9 = (t0 + 2744);
    xsi_add_process_toexecute(0, t8, t9);
    t10 = (t0 + 4232);
    t11 = (t0 + 2744);
    xsi_add_process_toexecute(0, t10, t11);
    t12 = (t0 + 1768);
    memset(t13, 0, 8);
    *((unsigned int *)t13) = 5;
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 32);
    t14 = (t0 + 5024);
    *((int *)t14) = 1;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    t15 = (t0 + 1768);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    if (*((int *)t17) > 0)
        goto LAB6;

LAB7:    t19 = (t0 + 2744);
    xsi_clean_active_fork_process_list(t19);
    xsi_set_current_line(30, ng2);
    t2 = (t0 + 2744);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB6:    t18 = (t0 + 5024);
    *((int *)t18) = 1;
    goto LAB1;

LAB8:    xsi_set_current_line(30, ng2);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(31, ng2);
    t2 = (t0 + 2744);
    xsi_process_wait(t2, 6000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(31, ng2);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB1;

}

static void Initial_33_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng2);

LAB4:    xsi_set_current_line(37, ng2);
    Monitor_37_3(t0);
    xsi_set_current_line(38, ng2);
    t2 = (t0 + 2992);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(38, ng2);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Forked_23_4(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    double t8;
    double t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3240);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(23, ng2);
    t3 = (t0 + 1448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = xsi_vlog_convert_to_real(t7, 32, 1);
    t8 = (t8 * 1000.0000000000000);
    t9 = (t8 < 0.00000000000000000);
    if (t9 == 1)
        goto LAB6;

LAB7:    t8 = (t8 + 0.50000000000000000);
    t8 = ((int64)(t8));

LAB8:    t8 = (t8 * 1.0000000000000000);
    t10 = (t0 + 3240);
    xsi_process_wait(t10, t8);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t7, t4, 8);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 - 1);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 32);
    goto LAB2;

LAB6:    t8 = 0.00000000000000000;
    goto LAB8;

LAB9:    xsi_set_current_line(23, ng2);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 1288);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB5;

}

static void Forked_24_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3488);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(24, ng2);
    t3 = (t0 + 3488);
    xsi_process_wait(t3, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(24, ng2);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 1288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB5;

}

static void Forked_25_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3736);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(25, ng2);
    t3 = (t0 + 3736);
    xsi_process_wait(t3, 2000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(25, ng2);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 1288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB5;

}

static void Forked_27_7(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3984);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng2);
    t3 = (t0 + 3984);
    xsi_process_wait(t3, 4000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(27, ng2);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 1288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB5;

}

static void Forked_28_8(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4232);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(28, ng2);
    t3 = (t0 + 4232);
    xsi_process_wait(t3, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(28, ng2);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 1288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB5;

}

void Monitor_37_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4480);
    t2 = (t0 + 5040);
    xsi_vlogfile_monitor((void *)Monitor_37_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000002862052222_2037934432_init()
{
	static char *pe[] = {(void *)Always_8_0,(void *)Initial_16_1,(void *)Initial_33_2,(void *)Forked_23_4,(void *)Forked_24_5,(void *)Forked_25_6,(void *)Forked_27_7,(void *)Forked_28_8,(void *)Monitor_37_3};
	xsi_register_didat("work_m_00000000002862052222_2037934432", "isim/dd_isim_beh.exe.sim/work/m_00000000002862052222_2037934432.didat");
	xsi_register_executes(pe);
}
