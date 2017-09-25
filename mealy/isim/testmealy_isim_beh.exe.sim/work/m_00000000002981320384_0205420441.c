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
static const char *ng0 = "C:/Users/kirti/Documents/verilog/mealy/mealy.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Always_32_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t30[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3712);
    *((int *)t2) = 1;
    t3 = (t0 + 3424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 2472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(67, ng0);

LAB126:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2152);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    memcpy(t9, t2, 8);
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 4);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);

LAB18:    xsi_set_current_line(41, ng0);
    t11 = (t0 + 1592U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t11) != 0)
        goto LAB21;

LAB22:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB23;

LAB24:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t19) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t10) > 0)
        goto LAB29;

LAB30:    memcpy(t9, t28, 8);

LAB31:    t29 = (t0 + 2152);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1592U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t2) != 0)
        goto LAB34;

LAB35:    t5 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB36;

LAB37:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t5) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t10) > 0)
        goto LAB42;

LAB43:    memcpy(t9, t31, 8);

LAB44:    t12 = (t0 + 2312);
    xsi_vlogvar_assign_value(t12, t9, 0, 0, 4);
    goto LAB17;

LAB9:    xsi_set_current_line(47, ng0);

LAB45:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t3) != 0)
        goto LAB48;

LAB49:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB50;

LAB51:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t7) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t10) > 0)
        goto LAB56;

LAB57:    memcpy(t9, t12, 8);

LAB58:    t18 = (t0 + 2152);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1592U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t2) != 0)
        goto LAB61;

LAB62:    t5 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB63;

LAB64:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t5) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t10) > 0)
        goto LAB69;

LAB70:    memcpy(t9, t31, 8);

LAB71:    t12 = (t0 + 2312);
    xsi_vlogvar_assign_value(t12, t9, 0, 0, 4);
    goto LAB17;

LAB11:    xsi_set_current_line(54, ng0);

LAB72:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t3) != 0)
        goto LAB75;

LAB76:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB77;

LAB78:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t7) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t10) > 0)
        goto LAB83;

LAB84:    memcpy(t9, t12, 8);

LAB85:    t18 = (t0 + 2152);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1592U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t2) != 0)
        goto LAB88;

LAB89:    t5 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB90;

LAB91:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t5) > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t10) > 0)
        goto LAB96;

LAB97:    memcpy(t9, t31, 8);

LAB98:    t12 = (t0 + 2312);
    xsi_vlogvar_assign_value(t12, t9, 0, 0, 4);
    goto LAB17;

LAB13:    xsi_set_current_line(61, ng0);

LAB99:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t3) != 0)
        goto LAB102;

LAB103:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB104;

LAB105:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t7) > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t10) > 0)
        goto LAB110;

LAB111:    memcpy(t9, t12, 8);

LAB112:    t18 = (t0 + 2152);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1592U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t2) != 0)
        goto LAB115;

LAB116:    t5 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB117;

LAB118:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t5) > 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t10) > 0)
        goto LAB123;

LAB124:    memcpy(t9, t31, 8);

LAB125:    t12 = (t0 + 2312);
    xsi_vlogvar_assign_value(t12, t9, 0, 0, 4);
    goto LAB17;

LAB19:    *((unsigned int *)t10) = 1;
    goto LAB22;

LAB21:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB22;

LAB23:    t23 = ((char*)((ng1)));
    goto LAB24;

LAB25:    t28 = ((char*)((ng1)));
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t9, 1, t23, 1, t28, 1);
    goto LAB31;

LAB29:    memcpy(t9, t23, 8);
    goto LAB31;

LAB32:    *((unsigned int *)t10) = 1;
    goto LAB35;

LAB34:    t4 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB36:    t7 = ((char*)((ng2)));
    memcpy(t30, t7, 8);
    goto LAB37;

LAB38:    t11 = ((char*)((ng1)));
    memcpy(t31, t11, 8);
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t9, 4, t30, 4, t31, 4);
    goto LAB44;

LAB42:    memcpy(t9, t30, 8);
    goto LAB44;

LAB46:    *((unsigned int *)t10) = 1;
    goto LAB49;

LAB48:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB49;

LAB50:    t11 = ((char*)((ng1)));
    goto LAB51;

LAB52:    t12 = ((char*)((ng1)));
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t9, 1, t11, 1, t12, 1);
    goto LAB58;

LAB56:    memcpy(t9, t11, 8);
    goto LAB58;

LAB59:    *((unsigned int *)t10) = 1;
    goto LAB62;

LAB61:    t4 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB62;

LAB63:    t7 = ((char*)((ng2)));
    memcpy(t30, t7, 8);
    goto LAB64;

LAB65:    t11 = ((char*)((ng3)));
    memcpy(t31, t11, 8);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t9, 4, t30, 4, t31, 4);
    goto LAB71;

LAB69:    memcpy(t9, t30, 8);
    goto LAB71;

LAB73:    *((unsigned int *)t10) = 1;
    goto LAB76;

LAB75:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB76;

LAB77:    t11 = ((char*)((ng1)));
    goto LAB78;

LAB79:    t12 = ((char*)((ng1)));
    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t9, 1, t11, 1, t12, 1);
    goto LAB85;

LAB83:    memcpy(t9, t11, 8);
    goto LAB85;

LAB86:    *((unsigned int *)t10) = 1;
    goto LAB89;

LAB88:    t4 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB89;

LAB90:    t7 = ((char*)((ng4)));
    memcpy(t30, t7, 8);
    goto LAB91;

LAB92:    t11 = ((char*)((ng1)));
    memcpy(t31, t11, 8);
    goto LAB93;

LAB94:    xsi_vlog_unsigned_bit_combine(t9, 4, t30, 4, t31, 4);
    goto LAB98;

LAB96:    memcpy(t9, t30, 8);
    goto LAB98;

LAB100:    *((unsigned int *)t10) = 1;
    goto LAB103;

LAB102:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB103;

LAB104:    t11 = ((char*)((ng1)));
    goto LAB105;

LAB106:    t12 = ((char*)((ng2)));
    goto LAB107;

LAB108:    xsi_vlog_unsigned_bit_combine(t9, 1, t11, 1, t12, 1);
    goto LAB112;

LAB110:    memcpy(t9, t11, 8);
    goto LAB112;

LAB113:    *((unsigned int *)t10) = 1;
    goto LAB116;

LAB115:    t4 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB116;

LAB117:    t7 = ((char*)((ng1)));
    memcpy(t30, t7, 8);
    goto LAB118;

LAB119:    t11 = ((char*)((ng2)));
    memcpy(t31, t11, 8);
    goto LAB120;

LAB121:    xsi_vlog_unsigned_bit_combine(t9, 4, t30, 4, t31, 4);
    goto LAB125;

LAB123:    memcpy(t9, t30, 8);
    goto LAB125;

}


extern void work_m_00000000002981320384_0205420441_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000002981320384_0205420441", "isim/testmealy_isim_beh.exe.sim/work/m_00000000002981320384_0205420441.didat");
	xsi_register_executes(pe);
}
