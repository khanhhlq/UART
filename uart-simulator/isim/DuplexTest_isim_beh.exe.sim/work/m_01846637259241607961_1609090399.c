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
static const char *ng0 = "/home/ise/D_DRIVE/UART/rtl/ErrorCheck.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};



static void Always_41_0(char *t0)
{
    char t10[8];
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5320);
    *((int *)t2) = 1;
    t3 = (t0 + 4536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 2392U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(60, ng0);

LAB61:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);

LAB18:    xsi_set_current_line(46, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    goto LAB17;

LAB9:    goto LAB7;

LAB11:    xsi_set_current_line(50, ng0);

LAB19:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2552U);
    t7 = *((char **)t4);
    memset(t12, 0, 8);
    t4 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t7);
    t14 = (t14 & 1);
    if (*((unsigned int *)t4) != 0)
        goto LAB20;

LAB21:    t15 = 1;

LAB23:    t16 = (t15 <= 7);
    if (t16 == 1)
        goto LAB24;

LAB25:    *((unsigned int *)t12) = t14;

LAB22:    memset(t11, 0, 8);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t18) != 0)
        goto LAB29;

LAB30:    t25 = (t11 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t25);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB31;

LAB32:    t30 = *((unsigned int *)t11);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t25) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t11) > 0)
        goto LAB37;

LAB38:    memcpy(t10, t34, 8);

LAB39:    t35 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t35, t10, 0, 0, 1, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(55, ng0);

LAB40:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2552U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t4);
    t14 = (t14 & 1);
    if (*((unsigned int *)t3) != 0)
        goto LAB41;

LAB42:    t15 = 1;

LAB44:    t16 = (t15 <= 7);
    if (t16 == 1)
        goto LAB45;

LAB46:    *((unsigned int *)t12) = t14;

LAB43:    memset(t11, 0, 8);
    t8 = (t12 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t8) != 0)
        goto LAB50;

LAB51:    t24 = (t11 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t24);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB52;

LAB53:    t30 = *((unsigned int *)t11);
    t31 = (~(t30));
    t32 = *((unsigned int *)t24);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t24) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t11) > 0)
        goto LAB58;

LAB59:    memcpy(t10, t29, 8);

LAB60:    t34 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t34, t10, 0, 0, 1, 0LL);
    goto LAB17;

LAB20:    t8 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB22;

LAB24:    t13 = (t13 >> 1);
    t17 = (t13 & 1);
    t14 = (t14 ^ t17);

LAB26:    t15 = (t15 + 1);
    goto LAB23;

LAB27:    *((unsigned int *)t11) = 1;
    goto LAB30;

LAB29:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB30;

LAB31:    t29 = ((char*)((ng1)));
    goto LAB32;

LAB33:    t34 = ((char*)((ng2)));
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t10, 1, t29, 1, t34, 1);
    goto LAB39;

LAB37:    memcpy(t10, t29, 8);
    goto LAB39;

LAB41:    t7 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB43;

LAB45:    t13 = (t13 >> 1);
    t17 = (t13 & 1);
    t14 = (t14 ^ t17);

LAB47:    t15 = (t15 + 1);
    goto LAB44;

LAB48:    *((unsigned int *)t11) = 1;
    goto LAB51;

LAB50:    t18 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB51;

LAB52:    t25 = ((char*)((ng2)));
    goto LAB53;

LAB54:    t29 = ((char*)((ng1)));
    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t10, 1, t25, 1, t29, 1);
    goto LAB60;

LAB58:    memcpy(t10, t25, 8);
    goto LAB60;

}

static void Always_67_1(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
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
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;

LAB0:    t1 = (t0 + 4752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5336);
    *((int *)t2) = 1;
    t3 = (t0 + 4784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
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

LAB13:    xsi_set_current_line(75, ng0);

LAB16:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(90, ng0);

LAB75:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB19:
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

LAB12:    xsi_set_current_line(69, ng0);

LAB15:    xsi_set_current_line(70, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(78, ng0);

LAB20:    xsi_set_current_line(79, ng0);
    t5 = (t0 + 3112);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memset(t31, 0, 8);
    t13 = (t12 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t12);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t13) != 0)
        goto LAB23;

LAB24:    t23 = (t31 + 4);
    t20 = *((unsigned int *)t31);
    t21 = *((unsigned int *)t23);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB25;

LAB26:    memcpy(t34, t31, 8);

LAB27:    memset(t4, 0, 8);
    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t66) == 0)
        goto LAB35;

LAB37:    t72 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t72) = 1;

LAB38:    t73 = (t4 + 4);
    t74 = (t34 + 4);
    t75 = *((unsigned int *)t34);
    t76 = (~(t75));
    *((unsigned int *)t4) = t76;
    *((unsigned int *)t73) = 0;
    if (*((unsigned int *)t74) != 0)
        goto LAB40;

LAB39:    t81 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t81 & 1U);
    t82 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t82 & 1U);
    t83 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t83, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t2) != 0)
        goto LAB43;

LAB44:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (!(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB45;

LAB46:    memcpy(t32, t4, 8);

LAB47:    t39 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t39, t32, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t2) != 0)
        goto LAB57;

LAB58:    t6 = (t31 + 4);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB59;

LAB60:    memcpy(t34, t31, 8);

LAB61:    memset(t4, 0, 8);
    t39 = (t34 + 4);
    t61 = *((unsigned int *)t39);
    t62 = (~(t61));
    t63 = *((unsigned int *)t34);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB72;

LAB70:    if (*((unsigned int *)t39) == 0)
        goto LAB69;

LAB71:    t40 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t40) = 1;

LAB72:    t48 = (t4 + 4);
    t49 = (t34 + 4);
    t67 = *((unsigned int *)t34);
    t68 = (~(t67));
    *((unsigned int *)t4) = t68;
    *((unsigned int *)t48) = 0;
    if (*((unsigned int *)t49) != 0)
        goto LAB74;

LAB73:    t76 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t76 & 1U);
    t77 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t77 & 1U);
    t66 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t66, t4, 0, 0, 1, 0LL);
    goto LAB19;

LAB21:    *((unsigned int *)t31) = 1;
    goto LAB24;

LAB23:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB25:    t29 = (t0 + 1912U);
    t30 = *((char **)t29);
    memset(t32, 0, 8);
    t29 = (t30 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t30);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t29) != 0)
        goto LAB30;

LAB31:    t35 = *((unsigned int *)t31);
    t36 = *((unsigned int *)t32);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t31 + 4);
    t39 = (t32 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB27;

LAB28:    *((unsigned int *)t32) = 1;
    goto LAB31;

LAB30:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB31;

LAB32:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t31 + 4);
    t49 = (t32 + 4);
    t50 = *((unsigned int *)t31);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t32);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB34;

LAB35:    *((unsigned int *)t4) = 1;
    goto LAB38;

LAB40:    t77 = *((unsigned int *)t4);
    t78 = *((unsigned int *)t74);
    *((unsigned int *)t4) = (t77 | t78);
    t79 = *((unsigned int *)t73);
    t80 = *((unsigned int *)t74);
    *((unsigned int *)t73) = (t79 | t80);
    goto LAB39;

LAB41:    *((unsigned int *)t4) = 1;
    goto LAB44;

LAB43:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB44;

LAB45:    t12 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t13 = (t12 + 4);
    t19 = *((unsigned int *)t13);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t21 & t20);
    t24 = (t22 & 1U);
    if (t24 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t13) != 0)
        goto LAB50;

LAB51:    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t31);
    t27 = (t25 | t26);
    *((unsigned int *)t32) = t27;
    t23 = (t4 + 4);
    t29 = (t31 + 4);
    t30 = (t32 + 4);
    t28 = *((unsigned int *)t23);
    t35 = *((unsigned int *)t29);
    t36 = (t28 | t35);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t30);
    t41 = (t37 != 0);
    if (t41 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB47;

LAB48:    *((unsigned int *)t31) = 1;
    goto LAB51;

LAB50:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB51;

LAB52:    t42 = *((unsigned int *)t32);
    t43 = *((unsigned int *)t30);
    *((unsigned int *)t32) = (t42 | t43);
    t33 = (t4 + 4);
    t38 = (t31 + 4);
    t44 = *((unsigned int *)t33);
    t45 = (~(t44));
    t46 = *((unsigned int *)t4);
    t58 = (t46 & t45);
    t47 = *((unsigned int *)t38);
    t50 = (~(t47));
    t51 = *((unsigned int *)t31);
    t59 = (t51 & t50);
    t52 = (~(t58));
    t53 = (~(t59));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    goto LAB54;

LAB55:    *((unsigned int *)t31) = 1;
    goto LAB58;

LAB57:    t5 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB58;

LAB59:    t12 = ((char*)((ng2)));
    memset(t32, 0, 8);
    t13 = (t12 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t13) != 0)
        goto LAB64;

LAB65:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t32);
    t26 = (t24 & t25);
    *((unsigned int *)t34) = t26;
    t23 = (t31 + 4);
    t29 = (t32 + 4);
    t30 = (t34 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t29);
    t35 = (t27 | t28);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB61;

LAB62:    *((unsigned int *)t32) = 1;
    goto LAB65;

LAB64:    t14 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB65;

LAB66:    t41 = *((unsigned int *)t34);
    t42 = *((unsigned int *)t30);
    *((unsigned int *)t34) = (t41 | t42);
    t33 = (t31 + 4);
    t38 = (t32 + 4);
    t43 = *((unsigned int *)t31);
    t44 = (~(t43));
    t45 = *((unsigned int *)t33);
    t46 = (~(t45));
    t47 = *((unsigned int *)t32);
    t50 = (~(t47));
    t51 = *((unsigned int *)t38);
    t52 = (~(t51));
    t58 = (t44 & t46);
    t59 = (t50 & t52);
    t53 = (~(t58));
    t54 = (~(t59));
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t53);
    t60 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t60 & t54);
    goto LAB68;

LAB69:    *((unsigned int *)t4) = 1;
    goto LAB72;

LAB74:    t69 = *((unsigned int *)t4);
    t70 = *((unsigned int *)t49);
    *((unsigned int *)t4) = (t69 | t70);
    t71 = *((unsigned int *)t48);
    t75 = *((unsigned int *)t49);
    *((unsigned int *)t48) = (t71 | t75);
    goto LAB73;

}

static void Always_99_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 5000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    t3 = (t0 + 5032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);

LAB5:    xsi_set_current_line(101, ng0);
    t5 = (t0 + 3272);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 3432);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 3592);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlogtype_concat(t4, 3, 3, 3U, t13, 1, t10, 1, t7, 1);
    t14 = (t0 + 2952);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 3);
    goto LAB2;

}


extern void work_m_01846637259241607961_1609090399_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_67_1,(void *)Always_99_2};
	xsi_register_didat("work_m_01846637259241607961_1609090399", "isim/DuplexTest_isim_beh.exe.sim/work/m_01846637259241607961_1609090399.didat");
	xsi_register_executes(pe);
}
