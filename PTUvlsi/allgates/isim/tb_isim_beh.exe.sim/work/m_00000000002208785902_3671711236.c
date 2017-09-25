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
static const char *ng1 = "  : inputs are %b";
static const char *ng2 = "  :outputs are %b";
static const char *ng3 = "C:/Users/Kirti/Documents/verilog/PTUvlsi/allgates/tb.v";
static int ng4[] = {0, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {15U, 0U};

void Monitor_47_1(char *);
void Monitor_47_1(char *);


static void Monitor_47_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(0, 0, 3, ng1, 2, t0, (char)118, t5, 4);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 3, ng2, 2, t0, (char)118, t7, 2);

LAB1:    return;
}

static void Initial_39_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng3);

LAB4:    xsi_set_current_line(41, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(44, ng3);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(47, ng3);
    Monitor_47_1(t0);
    xsi_set_current_line(48, ng3);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(48, ng3);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(49, ng3);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(49, ng3);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(50, ng3);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(50, ng3);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(51, ng3);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(51, ng3);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB1;

}

void Monitor_47_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2424);
    t2 = (t0 + 2936);
    xsi_vlogfile_monitor((void *)Monitor_47_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000002208785902_3671711236_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Monitor_47_1};
	xsi_register_didat("work_m_00000000002208785902_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000002208785902_3671711236.didat");
	xsi_register_executes(pe);
}
