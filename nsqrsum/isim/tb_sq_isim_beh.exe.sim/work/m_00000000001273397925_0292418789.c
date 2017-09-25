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
static const char *ng0 = "C:/Users/kirti/Documents/verilog/nsqrsum/sq_sum.v";
static int ng1[] = {1, 0};



static void Initial_86_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);

LAB4:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(90, ng0);
    *((int *)t4) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t3 = (t4 + 4);
    *((int *)t3) = 0;
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB5;

LAB7:    goto LAB1;

}


extern void work_m_00000000001273397925_0292418789_init()
{
	static char *pe[] = {(void *)Initial_86_0};
	xsi_register_didat("work_m_00000000001273397925_0292418789", "isim/tb_sq_isim_beh.exe.sim/work/m_00000000001273397925_0292418789.didat");
	xsi_register_executes(pe);
}
