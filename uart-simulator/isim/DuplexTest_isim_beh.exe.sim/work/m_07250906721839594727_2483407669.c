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
static const char *ng0 = "/home/ise/D_DRIVE/UART/rtl/BaudGenR.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {651U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {326U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {163U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {81U, 0U};



static void Always_30_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4112);
    *((int *)t2) = 1;
    t3 = (t0 + 3576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1912U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2472);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 10);
    goto LAB17;

LAB9:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2472);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 10);
    goto LAB17;

LAB11:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2472);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 10);
    goto LAB17;

LAB13:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2472);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 10);
    goto LAB17;

}

static void Always_44_1(char *t0)
{
    char t4[8];
    char t31[8];
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
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 3792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
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

LAB13:    xsi_set_current_line(52, ng0);

LAB16:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2472);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t14 = (t5 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t14);
    t11 = *((unsigned int *)t23);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t23);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB20;

LAB17:    if (t19 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t4) = 1;

LAB20:    t30 = (t4 + 4);
    t22 = *((unsigned int *)t30);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(61, ng0);

LAB31:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 10, t5, 10, t6, 10);
    t12 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB23:
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

LAB12:    xsi_set_current_line(47, ng0);

LAB15:    xsi_set_current_line(48, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 10, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

LAB19:    t29 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(56, ng0);

LAB24:    xsi_set_current_line(57, ng0);
    t32 = (t0 + 2312);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t31, 0, 8);
    t35 = (t34 + 4);
    t28 = *((unsigned int *)t35);
    t36 = (~(t28));
    t37 = *((unsigned int *)t34);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t35) == 0)
        goto LAB25;

LAB27:    t40 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t40) = 1;

LAB28:    t41 = (t31 + 4);
    t42 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = (~(t43));
    *((unsigned int *)t31) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB30;

LAB29:    t49 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t49 & 1U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & 1U);
    t51 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t51, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    goto LAB23;

LAB25:    *((unsigned int *)t31) = 1;
    goto LAB28;

LAB30:    t45 = *((unsigned int *)t31);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t31) = (t45 | t46);
    t47 = *((unsigned int *)t41);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t47 | t48);
    goto LAB29;

}


extern void work_m_07250906721839594727_2483407669_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Always_44_1};
	xsi_register_didat("work_m_07250906721839594727_2483407669", "isim/DuplexTest_isim_beh.exe.sim/work/m_07250906721839594727_2483407669.didat");
	xsi_register_executes(pe);
}
