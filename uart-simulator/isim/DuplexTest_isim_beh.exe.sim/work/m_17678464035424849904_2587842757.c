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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/D_DRIVE/UART/rtl/Parity.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};



static void Always_26_0(char *t0)
{
    char t4[8];
    char t33[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 3224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3544);
    *((int *)t2) = 1;
    t3 = (t0 + 3256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t5 = (t0 + 1592U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(33, ng0);

LAB16:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);

LAB17:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t31 == 1)
        goto LAB20;

LAB21:    t5 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 2, t5, 2);
    if (t32 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t31 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(51, ng0);

LAB72:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);

LAB28:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(28, ng0);

LAB15:    xsi_set_current_line(30, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    goto LAB14;

LAB18:    xsi_set_current_line(36, ng0);

LAB29:    xsi_set_current_line(38, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB28;

LAB20:    goto LAB18;

LAB22:    xsi_set_current_line(41, ng0);

LAB30:    xsi_set_current_line(43, ng0);
    t6 = (t0 + 1752U);
    t12 = *((char **)t6);
    memset(t34, 0, 8);
    t6 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t12);
    t8 = (t8 & 1);
    if (*((unsigned int *)t6) != 0)
        goto LAB31;

LAB32:    t9 = 1;

LAB34:    t10 = (t9 <= 7);
    if (t10 == 1)
        goto LAB35;

LAB36:    *((unsigned int *)t34) = t8;

LAB33:    memset(t33, 0, 8);
    t14 = (t34 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t34);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t14) != 0)
        goto LAB40;

LAB41:    t29 = (t33 + 4);
    t20 = *((unsigned int *)t33);
    t21 = *((unsigned int *)t29);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB42;

LAB43:    t24 = *((unsigned int *)t33);
    t25 = (~(t24));
    t26 = *((unsigned int *)t29);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t29) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t33) > 0)
        goto LAB48;

LAB49:    memcpy(t4, t35, 8);

LAB50:    t36 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t36, t4, 0, 0, 1, 0LL);
    goto LAB28;

LAB24:    xsi_set_current_line(46, ng0);

LAB51:    xsi_set_current_line(48, ng0);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    memset(t34, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t6);
    t8 = (t8 & 1);
    if (*((unsigned int *)t5) != 0)
        goto LAB52;

LAB53:    t9 = 1;

LAB55:    t10 = (t9 <= 7);
    if (t10 == 1)
        goto LAB56;

LAB57:    *((unsigned int *)t34) = t8;

LAB54:    memset(t33, 0, 8);
    t13 = (t34 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t34);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t13) != 0)
        goto LAB61;

LAB62:    t23 = (t33 + 4);
    t20 = *((unsigned int *)t33);
    t21 = *((unsigned int *)t23);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB63;

LAB64:    t24 = *((unsigned int *)t33);
    t25 = (~(t24));
    t26 = *((unsigned int *)t23);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t23) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t33) > 0)
        goto LAB69;

LAB70:    memcpy(t4, t30, 8);

LAB71:    t35 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t35, t4, 0, 0, 1, 0LL);
    goto LAB28;

LAB31:    t13 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB33;

LAB35:    t7 = (t7 >> 1);
    t11 = (t7 & 1);
    t8 = (t8 ^ t11);

LAB37:    t9 = (t9 + 1);
    goto LAB34;

LAB38:    *((unsigned int *)t33) = 1;
    goto LAB41;

LAB40:    t23 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB41;

LAB42:    t30 = ((char*)((ng2)));
    goto LAB43;

LAB44:    t35 = ((char*)((ng1)));
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t4, 1, t30, 1, t35, 1);
    goto LAB50;

LAB48:    memcpy(t4, t30, 8);
    goto LAB50;

LAB52:    t12 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB54;

LAB56:    t7 = (t7 >> 1);
    t11 = (t7 & 1);
    t8 = (t8 ^ t11);

LAB58:    t9 = (t9 + 1);
    goto LAB55;

LAB59:    *((unsigned int *)t33) = 1;
    goto LAB62;

LAB61:    t14 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB62;

LAB63:    t29 = ((char*)((ng1)));
    goto LAB64;

LAB65:    t30 = ((char*)((ng2)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t4, 1, t29, 1, t30, 1);
    goto LAB71;

LAB69:    memcpy(t4, t29, 8);
    goto LAB71;

}


extern void work_m_17678464035424849904_2587842757_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_17678464035424849904_2587842757", "isim/DuplexTest_isim_beh.exe.sim/work/m_17678464035424849904_2587842757.didat");
	xsi_register_executes(pe);
}
