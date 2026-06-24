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
static const char *ng0 = "/home/ise/D_DRIVE/UART/rtl/SIPO.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2047U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};



static void Always_35_0(char *t0)
{
    char t4[8];
    char t32[8];
    char t35[8];
    char t44[8];
    char t50[8];
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
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;

LAB0:    t1 = (t0 + 4024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4344);
    *((int *)t2) = 1;
    t3 = (t0 + 4056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
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

LAB13:    xsi_set_current_line(42, ng0);

LAB16:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB17:    t6 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t31 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng6)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t31 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(139, ng0);

LAB94:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

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

LAB12:    xsi_set_current_line(38, ng0);

LAB15:    xsi_set_current_line(39, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 2, 0LL);
    goto LAB14;

LAB18:    xsi_set_current_line(46, ng0);

LAB29:    xsi_set_current_line(47, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 11, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t2) == 0)
        goto LAB30;

LAB32:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;

LAB33:    t12 = (t4 + 4);
    t13 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB35;

LAB34:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    t14 = (t4 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(59, ng0);

LAB40:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB38:    goto LAB28;

LAB20:    xsi_set_current_line(68, ng0);

LAB41:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 2952);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    memset(t32, 0, 8);
    t13 = (t32 + 4);
    t14 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 0);
    *((unsigned int *)t32) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 0);
    *((unsigned int *)t13) = t10;
    t11 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t11 & 7U);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 7U);
    memset(t4, 0, 8);
    t23 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t23);
    t18 = (t16 | t17);
    if (t18 != 7U)
        goto LAB43;

LAB42:    if (*((unsigned int *)t23) == 0)
        goto LAB44;

LAB45:    t29 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t29) = 1;

LAB43:    t30 = (t4 + 4);
    t19 = *((unsigned int *)t30);
    t20 = (~(t19));
    t21 = *((unsigned int *)t4);
    t22 = (t21 & t20);
    t24 = (t22 != 0);
    if (t24 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(79, ng0);

LAB52:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 4, t6, 4, t12, 4);
    t13 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB48:    goto LAB28;

LAB22:    xsi_set_current_line(88, ng0);

LAB53:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 2792);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t4 + 4);
    t14 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 1);
    t15 = (t11 & 1);
    *((unsigned int *)t13) = t15;
    memset(t32, 0, 8);
    t23 = (t4 + 4);
    t16 = *((unsigned int *)t23);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t23) != 0)
        goto LAB56;

LAB57:    t30 = (t32 + 4);
    t21 = *((unsigned int *)t32);
    t22 = *((unsigned int *)t30);
    t24 = (t21 || t22);
    if (t24 > 0)
        goto LAB58;

LAB59:    memcpy(t50, t32, 8);

LAB60:    t81 = (t50 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t50);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(99, ng0);

LAB72:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t32, 0, 8);
    t12 = (t32 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t32) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t11 & 15U);
    t15 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t15 & 15U);
    memset(t4, 0, 8);
    t14 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    if (t18 != 15U)
        goto LAB74;

LAB73:    if (*((unsigned int *)t14) == 0)
        goto LAB75;

LAB76:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;

LAB74:    t29 = (t4 + 4);
    t19 = *((unsigned int *)t29);
    t20 = (~(t19));
    t21 = *((unsigned int *)t4);
    t22 = (t21 & t20);
    t24 = (t22 != 0);
    if (t24 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(110, ng0);

LAB83:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 4, t6, 4, t12, 4);
    t13 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB79:
LAB70:    goto LAB28;

LAB24:    xsi_set_current_line(119, ng0);

LAB84:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 2952);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    memset(t32, 0, 8);
    t13 = (t32 + 4);
    t14 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 0);
    *((unsigned int *)t32) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 0);
    *((unsigned int *)t13) = t10;
    t11 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t11 & 15U);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 15U);
    memset(t4, 0, 8);
    t23 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t23);
    t18 = (t16 | t17);
    if (t18 != 15U)
        goto LAB86;

LAB85:    if (*((unsigned int *)t23) == 0)
        goto LAB87;

LAB88:    t29 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t29) = 1;

LAB86:    t30 = (t4 + 4);
    t19 = *((unsigned int *)t30);
    t20 = (~(t19));
    t21 = *((unsigned int *)t4);
    t22 = (t21 & t20);
    t24 = (t22 != 0);
    if (t24 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(131, ng0);

LAB93:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 4, t6, 4, t12, 4);
    t13 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB91:    goto LAB28;

LAB30:    *((unsigned int *)t4) = 1;
    goto LAB33;

LAB35:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB34;

LAB36:    xsi_set_current_line(54, ng0);

LAB39:    xsi_set_current_line(55, ng0);
    t23 = ((char*)((ng3)));
    t29 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t29, t23, 0, 0, 2, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB38;

LAB44:    *((unsigned int *)t4) = 1;
    goto LAB43;

LAB46:    xsi_set_current_line(72, ng0);

LAB49:    xsi_set_current_line(74, ng0);
    t33 = (t0 + 1752U);
    t34 = *((char **)t33);
    t33 = (t0 + 2632);
    t36 = (t0 + 2632);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t35, t38, 2, t39, 32, 1);
    t40 = (t35 + 4);
    t25 = *((unsigned int *)t40);
    t41 = (!(t25));
    if (t41 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB48;

LAB50:    xsi_vlogvar_wait_assign_value(t33, t34, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB51;

LAB54:    *((unsigned int *)t32) = 1;
    goto LAB57;

LAB56:    t29 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB57;

LAB58:    t33 = (t0 + 2792);
    t34 = (t33 + 56U);
    t36 = *((char **)t34);
    memset(t35, 0, 8);
    t37 = (t35 + 4);
    t38 = (t36 + 4);
    t25 = *((unsigned int *)t36);
    t26 = (t25 >> 3);
    t27 = (t26 & 1);
    *((unsigned int *)t35) = t27;
    t28 = *((unsigned int *)t38);
    t42 = (t28 >> 3);
    t43 = (t42 & 1);
    *((unsigned int *)t37) = t43;
    memset(t44, 0, 8);
    t39 = (t35 + 4);
    t45 = *((unsigned int *)t39);
    t46 = (~(t45));
    t47 = *((unsigned int *)t35);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t39) != 0)
        goto LAB63;

LAB64:    t51 = *((unsigned int *)t32);
    t52 = *((unsigned int *)t44);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t32 + 4);
    t55 = (t44 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB60;

LAB61:    *((unsigned int *)t44) = 1;
    goto LAB64;

LAB63:    t40 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB64;

LAB65:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t32 + 4);
    t65 = (t44 + 4);
    t66 = *((unsigned int *)t32);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t44);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t41 = (t67 & t69);
    t74 = (t71 & t73);
    t75 = (~(t41));
    t76 = (~(t74));
    t77 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t77 & t75);
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t79 & t75);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    goto LAB67;

LAB68:    xsi_set_current_line(92, ng0);

LAB71:    xsi_set_current_line(93, ng0);
    t87 = ((char*)((ng1)));
    t88 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t88, t87, 0, 0, 4, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB70;

LAB75:    *((unsigned int *)t4) = 1;
    goto LAB74;

LAB77:    xsi_set_current_line(103, ng0);

LAB80:    xsi_set_current_line(104, ng0);
    t30 = (t0 + 1752U);
    t33 = *((char **)t30);
    t30 = (t0 + 2632);
    t34 = (t0 + 2632);
    t36 = (t34 + 72U);
    t37 = *((char **)t36);
    t38 = (t0 + 2792);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t54 = ((char*)((ng3)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 4, t40, 4, t54, 4);
    xsi_vlog_generic_convert_bit_index(t35, t37, 2, t44, 4, 2);
    t55 = (t35 + 4);
    t25 = *((unsigned int *)t55);
    t31 = (!(t25));
    if (t31 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 4, t6, 4, t12, 4);
    t13 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB79;

LAB81:    xsi_vlogvar_wait_assign_value(t30, t33, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB82;

LAB87:    *((unsigned int *)t4) = 1;
    goto LAB86;

LAB89:    xsi_set_current_line(123, ng0);

LAB92:    xsi_set_current_line(124, ng0);
    t33 = (t0 + 2632);
    t34 = (t33 + 56U);
    t36 = *((char **)t34);
    t37 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 11, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB91;

}


extern void work_m_06589798601979954028_1967751169_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_06589798601979954028_1967751169", "isim/DuplexTest_isim_beh.exe.sim/work/m_06589798601979954028_1967751169.didat");
	xsi_register_executes(pe);
}
