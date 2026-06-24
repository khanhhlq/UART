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
static const char *ng0 = "";
static const char *ng1 = "   The Outputs:  Data Out = %h  Error Flag = %b  Tx Active Flag = %b  Tx Done Flag = %b  Rx Active Flag = %b  Rx Done Flag = %b  The Inputs:   Reset = %b  Send = %b  Data In = %h  Parity Type = %b  Baud Rate = %b ";
static const char *ng2 = "/home/ise/D_DRIVE/UART/tb/DuplexTest.v";
static const char *ng3 = "DuplexTest.vcd";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {170U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {92U, 0U};
static unsigned int ng9[] = {3U, 0U};

void Monitor_56_2(char *);
void Monitor_56_2(char *);


static void Monitor_56_2_Func(char *t0)
{
    char t1[16];
    char t3[8];
    char t13[8];
    char t33[8];
    char t45[8];
    char t57[8];
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t4 = (t3 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 255U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t14 = (t0 + 1688U);
    t15 = *((char **)t14);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (t17 >> 0);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t14) = t20;
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 7U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = (t0 + 1048U);
    t24 = *((char **)t23);
    t23 = (t0 + 1208U);
    t25 = *((char **)t23);
    t23 = (t0 + 1368U);
    t26 = *((char **)t23);
    t23 = (t0 + 1528U);
    t27 = *((char **)t23);
    t23 = (t0 + 2248);
    t28 = (t23 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 2408);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t34 = (t0 + 3048);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t33, 0, 8);
    t37 = (t33 + 4);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 0);
    *((unsigned int *)t33) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t43 & 255U);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 & 255U);
    t46 = (t0 + 2728);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t45, 0, 8);
    t49 = (t45 + 4);
    t50 = (t48 + 4);
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 0);
    *((unsigned int *)t45) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 0);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t55 & 3U);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 3U);
    t58 = (t0 + 2888);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t57, 0, 8);
    t61 = (t57 + 4);
    t62 = (t60 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 0);
    *((unsigned int *)t57) = t64;
    t65 = *((unsigned int *)t62);
    t66 = (t65 >> 0);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t67 & 3U);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 & 3U);
    xsi_vlogfile_write(1, 0, 3, ng1, 12, t0, (char)118, t3, 8, (char)118, t13, 3, (char)118, t24, 1, (char)118, t25, 1, (char)118, t26, 1, (char)118, t27, 1, (char)118, t29, 1, (char)118, t32, 1, (char)118, t33, 8, (char)118, t45, 2, (char)118, t57, 2);

LAB1:    return;
}

static void Initial_48_0(char *t0)
{

LAB0:    xsi_set_current_line(49, ng2);

LAB2:    xsi_set_current_line(50, ng2);
    xsi_vcd_dumpfile(ng3);
    xsi_set_current_line(51, ng2);
    xsi_vcd_dumpvars(t0);

LAB1:    return;
}

static void Initial_55_1(char *t0)
{

LAB0:    xsi_set_current_line(55, ng2);

LAB2:    xsi_set_current_line(56, ng2);
    Monitor_56_2(t0);

LAB1:    return;
}

static void Initial_62_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng2);

LAB4:    xsi_set_current_line(64, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng2);

LAB5:    xsi_set_current_line(66, ng2);

LAB6:    xsi_set_current_line(67, ng2);
    t2 = (t0 + 4264);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(67, ng2);
    t3 = (t0 + 2568);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t7) == 0)
        goto LAB8;

LAB10:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB11:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB12:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2568);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB13:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB12;

LAB14:    goto LAB1;

}

static void Initial_72_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 4704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng2);

LAB4:    xsi_set_current_line(74, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng2);
    t2 = (t0 + 4512);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(75, ng2);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Initial_78_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 4952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng2);

LAB4:    xsi_set_current_line(80, ng2);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(84, ng2);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(85, ng2);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(86, ng2);
    t2 = (t0 + 4760);
    xsi_process_wait(t2, 1354166671LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void Initial_90_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 5200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng2);

LAB4:    xsi_set_current_line(93, ng2);
    t2 = (t0 + 5008);
    xsi_process_wait(t2, 1300000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(94, ng2);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(95, ng2);
    t2 = (t0 + 5008);
    xsi_process_wait(t2, 90000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(97, ng2);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(98, ng2);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(99, ng2);
    t2 = (t0 + 5008);
    xsi_process_wait(t2, 677083329LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    goto LAB1;

}

static void Initial_103_7(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 5448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng2);

LAB4:    xsi_set_current_line(104, ng2);
    t2 = (t0 + 5256);
    xsi_process_wait(t2, 2450000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(104, ng2);
    xsi_vlog_stop(1);
    goto LAB1;

}

void Monitor_56_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 5504);
    t2 = (t0 + 6016);
    xsi_vlogfile_monitor((void *)Monitor_56_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_02154116172808621210_0311639361_init()
{
	static char *pe[] = {(void *)Initial_48_0,(void *)Initial_55_1,(void *)Initial_62_3,(void *)Initial_72_4,(void *)Initial_78_5,(void *)Initial_90_6,(void *)Initial_103_7,(void *)Monitor_56_2};
	xsi_register_didat("work_m_02154116172808621210_0311639361", "isim/DuplexTest_isim_beh.exe.sim/work/m_02154116172808621210_0311639361.didat");
	xsi_register_executes(pe);
}
