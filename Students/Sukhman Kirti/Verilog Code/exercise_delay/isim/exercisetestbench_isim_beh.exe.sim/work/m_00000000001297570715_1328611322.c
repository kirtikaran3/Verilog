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
static const char *ng1 = "a=%i";
static const char *ng2 = "C:/.Xilinx/exercise_delay/exercise_delay.v";

void Monitor_38_1(char *);
void Monitor_38_1(char *);


static void Monitor_38_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 3, ng1, 2, t0, (char)118, t4, 1);

LAB1:    return;
}

static void Initial_36_0(char *t0)
{

LAB0:    xsi_set_current_line(38, ng2);
    Monitor_38_1(t0);

LAB1:    return;
}

void Monitor_38_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2264);
    t2 = (t0 + 2776);
    xsi_vlogfile_monitor((void *)Monitor_38_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001297570715_1328611322_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Monitor_38_1};
	xsi_register_didat("work_m_00000000001297570715_1328611322", "isim/exercisetestbench_isim_beh.exe.sim/work/m_00000000001297570715_1328611322.didat");
	xsi_register_executes(pe);
}
