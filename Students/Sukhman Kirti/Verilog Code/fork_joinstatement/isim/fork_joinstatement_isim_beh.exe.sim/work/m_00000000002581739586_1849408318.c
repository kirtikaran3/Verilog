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
static const char *ng0 = "C:/.Xilinx/fork_joinstatement/fork_joinstatement.v";
static int ng1[] = {1, 0};
static int ng2[] = {2, 0};
static int ng3[] = {3, 0};



static void Initial_24_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2744);
    t3 = (t0 + 2496);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 2992);
    t5 = (t0 + 2496);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 3240);
    t7 = (t0 + 2496);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 1768);
    memset(t9, 0, 8);
    *((unsigned int *)t9) = 3;
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    t10 = (t0 + 3752);
    *((int *)t10) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t11 = (t0 + 1768);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    if (*((int *)t13) > 0)
        goto LAB5;

LAB6:    t15 = (t0 + 2496);
    xsi_clean_active_fork_process_list(t15);
    goto LAB1;

LAB5:    t14 = (t0 + 3752);
    *((int *)t14) = 1;
    goto LAB1;

}

static void Forked_26_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 2744);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(26, ng0);
    t3 = (t0 + 2744);
    xsi_process_wait(t3, 3000LL);
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

LAB6:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_27_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 3184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 2992);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 2992);
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

LAB6:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}

static void Forked_28_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3240);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(28, ng0);
    t3 = (t0 + 3240);
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

LAB6:    xsi_set_current_line(28, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB5;

}


extern void work_m_00000000002581739586_1849408318_init()
{
	static char *pe[] = {(void *)Initial_24_0,(void *)Forked_26_1,(void *)Forked_27_2,(void *)Forked_28_3};
	xsi_register_didat("work_m_00000000002581739586_1849408318", "isim/fork_joinstatement_isim_beh.exe.sim/work/m_00000000002581739586_1849408318.didat");
	xsi_register_executes(pe);
}
