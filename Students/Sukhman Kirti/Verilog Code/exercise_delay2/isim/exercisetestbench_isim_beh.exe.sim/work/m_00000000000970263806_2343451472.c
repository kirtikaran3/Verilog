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
static const char *ng1 = "i=$d";
static const char *ng2 = "o=%d";
static const char *ng3 = "C:/.Xilinx/exercise_delay2/exercise_delay2.v";

void Monitor_28_1(char *);
void Monitor_28_1(char *);


static void Monitor_28_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(0, 0, 3, ng1, 2, t0, (char)118, t4, 5);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 3, ng2, 2, t0, (char)118, t6, 5);

LAB1:    return;
}

static void Always_25_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng3);
    t2 = (t0 + 2936);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng3);

LAB5:    xsi_set_current_line(27, ng3);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 5);
    xsi_set_current_line(28, ng3);
    Monitor_28_1(t0);
    goto LAB2;

}

void Monitor_28_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2424);
    t2 = (t0 + 2952);
    xsi_vlogfile_monitor((void *)Monitor_28_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000000970263806_2343451472_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)Monitor_28_1};
	xsi_register_didat("work_m_00000000000970263806_2343451472", "isim/exercisetestbench_isim_beh.exe.sim/work/m_00000000000970263806_2343451472.didat");
	xsi_register_executes(pe);
}
