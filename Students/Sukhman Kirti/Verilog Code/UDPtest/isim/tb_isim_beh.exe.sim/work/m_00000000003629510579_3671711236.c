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
static int ng1[] = {1629501984, 0};
static int ng2[] = {1646279200, 0};
static int ng3[] = {1864383008, 0};
static const char *ng4 = " ";
static const char *ng5 = "C:/Users/Kirti/Documents/verilog/Students/Sukhman Kirti/Verilog Code/UDPtest/tb.v";
static int ng6[] = {0, 0};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};

void Monitor_50_1(char *);
void Monitor_50_1(char *);


static void Monitor_50_1_Func(char *t0)
{
    char t5[8];
    char t10[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = ((char*)((ng1)));
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_mod(t5, 32, t1, 32, t4, 1);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_mod(t10, 32, t6, 32, t9, 1);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 1608);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_mod(t15, 32, t11, 32, t14, 1);
    xsi_vlogfile_write(0, 0, 3, ng0, 4, t0, (char)118, t5, 32, (char)118, t10, 32, (char)118, t15, 32);
    xsi_vlogfile_write(1, 0, 3, ng4, 1, t0);

LAB1:    return;
}

static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng5);

LAB4:    xsi_set_current_line(43, ng5);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng5);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng5);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(50, ng5);
    Monitor_50_1(t0);
    xsi_set_current_line(52, ng5);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(52, ng5);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    xsi_set_current_line(53, ng5);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(53, ng5);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    xsi_set_current_line(54, ng5);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(54, ng5);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    xsi_set_current_line(55, ng5);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(55, ng5);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    goto LAB1;

}

void Monitor_50_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3064);
    t2 = (t0 + 4320);
    xsi_vlogfile_monitor((void *)Monitor_50_1_Func, t1, t2);

LAB1:    return;
}

static void impl1_execute(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4336);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 1768);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_mod(t8, 32, t4, 32, t7, 1);
    xsi_vlogimplicitvar_assign_value(t3, t8, 32);
    goto LAB2;

}

static void impl2_execute(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4352);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 1928);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_mod(t8, 32, t4, 32, t7, 1);
    xsi_vlogimplicitvar_assign_value(t3, t8, 32);
    goto LAB2;

}

static void impl3_execute(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4368);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 2088);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_mod(t8, 32, t4, 32, t7, 1);
    xsi_vlogimplicitvar_assign_value(t3, t8, 32);
    goto LAB2;

}


extern void work_m_00000000003629510579_3671711236_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Monitor_50_1,(void *)impl1_execute,(void *)impl2_execute,(void *)impl3_execute};
	xsi_register_didat("work_m_00000000003629510579_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000003629510579_3671711236.didat");
	xsi_register_executes(pe);
}
