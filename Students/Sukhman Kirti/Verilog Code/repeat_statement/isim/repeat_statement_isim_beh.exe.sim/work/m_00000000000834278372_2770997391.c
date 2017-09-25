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
static const char *ng0 = "C:/.Xilinx/repeat_statement/repeat_statement.v";
static int ng1[] = {1, 0};
static int ng2[] = {8, 0};
static const char *ng3 = "";
static const char *ng4 = "i=%b";



static void Initial_25_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(26, ng0);

LAB2:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_29_1(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 2616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2936);
    *((int *)t2) = 1;
    t3 = (t0 + 2648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t0 + 4352);
    *((int *)t10) = t9;

LAB6:    t11 = (t0 + 4352);
    if (*((int *)t11) > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t13 = xsi_vlog_time(t12, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng3, 2, t0, (char)118, t12, 64);
    t14 = (t0 + 1448);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)119, t16, 32);
    t2 = (t0 + 4352);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB6;

}


extern void work_m_00000000000834278372_2770997391_init()
{
	static char *pe[] = {(void *)Initial_25_0,(void *)Always_29_1};
	xsi_register_didat("work_m_00000000000834278372_2770997391", "isim/repeat_statement_isim_beh.exe.sim/work/m_00000000000834278372_2770997391.didat");
	xsi_register_executes(pe);
}
