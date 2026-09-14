/* 3ab8:330f */

int ** __cdecl16far
FUN_3ab8_330f(int param_1,int ****param_2,int ****param_3,int ****param_4,int ****param_5,
             int ****param_6,int ****param_7,int ****param_8,int ****param_9,int ****param_10,
             int ***param_11,int ****param_12,int ***param_13,int ****param_14,int ****param_15,
             int ***param_16,int ***param_17,undefined2 *param_18,undefined2 *param_19,int *param_20
             ,uint param_21,int ****param_22,int ****param_23,int ****param_24,int ****param_25,
             int ****param_26,int ****param_27,int ****param_28,int ****param_29,int ***param_30,
             int ****param_31,undefined2 param_32,undefined2 param_33,int param_34,
             undefined2 param_35)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int ****ppppiVar5;
  int ***pppiVar6;
  int ****ppppiVar7;
  undefined2 unaff_DS;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int ***local_62;
  int **local_60;
  int ***local_5e;
  int *local_5c;
  undefined1 local_5a [4];
  int **local_56;
  undefined2 local_54;
  undefined2 uStack_52;
  int **local_50;
  int ***local_4e;
  int **local_4c;
  int ***local_4a;
  int **local_48;
  int ***local_46;
  int **local_44;
  int ***local_42;
  int **local_40;
  int ***local_3e;
  int **ppiStack_3c;
  int ***pppiStack_3a;
  int ***pppiStack_38;
  int ***pppiStack_36;
  int ***pppiStack_34;
  int ***pppiStack_32;
  int ***pppiStack_30;
  int ***pppiStack_2e;
  int ***local_2c;
  int ***local_2a;
  int ***pppiStack_28;
  int ***pppiStack_26;
  int ***local_24;
  undefined2 local_22;
  int local_20;
  int **local_1e;
  int ***local_1c;
  int *local_1a;
  undefined2 local_18;
  int *local_16;
  int local_14;
  int *local_12;
  undefined2 local_10;
  int ***local_e;
  int ***local_c;
  int **local_a;
  int ***local_8;
  int ***local_6;
  int ***local_4;
  
  local_4 = (int ***)0x3ab8;
  uVar3 = 0x22b2;
  local_6 = (int ***)0xde9a;
  FUN_21f2_0ebc();
  local_56 = (int **)0xd8f1;
  local_3e = (int ***)0x0;
  local_40 = (int **)0x0;
  local_14 = 0;
  local_16 = (int *)0x0;
  local_1c = (int ***)0x0;
  local_1e = (int **)0x0;
  local_24 = (int ***)*(int *)0x948c;
  local_22 = *(undefined2 *)0x948e;
  local_20 = *(undefined2 *)0xc22;
  local_5c = (int *)0x0;
  local_48 = (int **)0x0;
  *(undefined2 *)0xc22 = 0;
  if ((param_15[1] == (int ***)0x0 && *param_15 == (int ***)0x0) && (*(char *)0x138 != '\0')) {
    uVar1 = *(uint *)0x148;
    iVar2 = *(int *)0x14a;
    *param_15 = (int ***)(uVar1 + 1);
    param_15[1] = (int ***)(iVar2 + (uint)(0xfffe < uVar1));
    local_44 = (int **)0x1;
    local_42 = (int ***)0x0;
    uVar4 = uVar3;
    while( true ) {
      uVar3 = uVar4;
      if ((*(int *)0x14a < (int)local_42) ||
         ((*(int *)0x14a <= (int)local_42 && ((int ***)*(undefined2 *)0x148 < local_44))))
      goto LAB_3ab8_33c4;
      local_4 = local_42;
      local_6 = (int ***)local_44;
      uVar3 = 0;
      local_a = (int **)0xdf29;
      local_8 = (int ***)uVar4;
      uVar10 = func_0x0000013f();
      if ((*(byte *)((int)uVar10 + 0x14) & 2) != 0) break;
      bVar8 = (int ***)0xfffe < local_44;
      local_44 = (int **)((int)local_44 + 1);
      local_42 = (int ***)((int)local_42 + (uint)bVar8);
      uVar4 = uVar3;
    }
    *param_15 = (int ***)local_44;
    param_15[1] = local_42;
  }
LAB_3ab8_33c4:
  local_18._0_1_ = 0;
  if (((0 < (int)param_15[1]) ||
      ((((-1 < (int)param_15[1] && (*param_15 != (int ***)0x0)) || (0 < (int)param_16[1])) ||
       ((-1 < (int)param_16[1] && (*param_16 != (int **)0x0)))))) || (0 < (int)*param_17)) {
    local_18._0_1_ = 1;
  }
  local_6 = (int ***)0xdf7c;
  local_4 = (int ***)uVar3;
  func_0x00029834();
  local_4 = (int ***)0x22b2;
  local_6 = (int ***)0xdf84;
  func_0x00029983();
  local_4 = (int ***)0x22b2;
  local_6 = (int ***)0xdf8c;
  func_0x00029834();
  local_4 = (int ***)0x22b2;
  ppppiVar5 = (int ****)0x22b2;
  local_6 = (int ***)0xdf94;
  func_0x00029983();
  local_12 = (int *)*param_13;
  local_60 = (int **)*(undefined2 *)0x148;
  local_5e = (int ***)*(int *)0x14a;
  local_2c = (int ***)*(int *)0x14c;
  local_2a = (int ***)*(int *)0x14e;
  local_50 = local_60;
  local_4e = local_5e;
  local_4c = local_60;
  local_4a = local_5e;
LAB_3ab8_3457:
  *(undefined2 *)0xc18 = 0;
  *(undefined1 *)0xc0e = 0;
  *(undefined2 *)0xc20 = 1;
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xa4a = 1;
  if (param_1 == 0) {
    *(undefined2 *)0xa48 = 2;
  }
  local_4 = (int ***)param_14;
  local_6 = param_13;
  local_8 = (int ***)param_12;
  local_a = (int **)param_11;
  local_c = (int ***)param_10;
  local_10 = 0xe00e;
  local_e = (int ***)ppppiVar5;
  local_1a = (int *)func_0x00006608();
  ppppiVar5 = (int ****)0x3bf;
LAB_3ab8_3494:
  do {
    do {
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(char *)0xc0e != '\0') {
        local_3e = (int ***)0x0;
        local_40 = (int **)0x0;
        local_14 = 0;
        local_16 = (int *)0x0;
        local_48 = (int **)0x0;
        local_20 = 0;
        local_60 = (int **)*(undefined2 *)0x148;
        local_5e = (int ***)*(int *)0x14a;
        local_2c = (int ***)*(int *)0x14c;
        local_2a = (int ***)*(int *)0x14e;
        local_50 = local_60;
        local_4e = local_5e;
        local_4c = local_60;
        local_4a = local_5e;
      }
      *(undefined2 *)0xbc0 = 1;
      *(undefined1 *)0xc0e = 0;
      if (((*(int *)0x158 != 0) || ((int **)local_1a != (int **)0x0)) || (*param_14 != (int ***)0x0)
         ) {
        local_4 = (int ***)0x0;
        local_8 = (int ***)0xe087;
        local_6 = (int ***)ppppiVar5;
        func_0x0000daa6();
        local_4 = (int ***)0x885;
        local_6 = (int ***)0xe08d;
        func_0x0000c3ca();
        *(undefined2 *)0xc20 = 0;
        local_4 = (int ***)0x885;
        local_6 = (int ***)0xe09b;
        func_0x000297e6();
        local_4 = (int ***)0x22b2;
        local_6 = (int ***)0xe0a0;
        func_0x00029d78();
        local_c = (int ***)0x22b2;
        local_e = (int ***)0xe0aa;
        func_0x000299d1();
        local_c = (int ***)0x22b2;
        local_e = (int ***)0xe0b2;
        func_0x000297e6();
        local_c = (int ***)0x22b2;
        local_e = (int ***)0xe0b7;
        func_0x00029d78();
        local_14 = 0x22b2;
        local_16 = (int *)0xe0c1;
        func_0x000299d1();
        local_14 = 0x22b2;
        local_16 = (int *)0xe0c9;
        func_0x000297e6();
        local_14 = 0x22b2;
        local_16 = (int *)0xe0ce;
        func_0x00029d78();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe0d8;
        func_0x000299d1();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe0e0;
        func_0x000297e6();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe0e5;
        func_0x00029d78();
        local_24 = (int ***)0x22b2;
        pppiStack_26 = (int ***)0xe0ef;
        func_0x000299d1();
        local_24 = (int ***)param_9;
        pppiStack_26 = (int ***)param_8;
        pppiStack_28 = (int ***)param_7;
        local_2a = (int ***)param_6;
        local_2c = (int ***)param_5;
        pppiStack_2e = (int ***)param_4;
        pppiStack_30 = (int ***)param_3;
        pppiStack_32 = (int ***)param_2;
        pppiStack_34 = &local_40;
        pppiStack_36 = &local_60;
        pppiStack_38 = (int ***)param_15;
        pppiStack_3a = (int ***)param_14;
        ppiStack_3c = (int **)param_13;
        local_3e = (int ***)param_12;
        local_40 = (int **)param_11;
        local_42 = (int ***)param_10;
        local_44 = &local_1a;
        local_46 = (int ***)0xffff;
        local_48 = (int **)0xffff;
        local_4a = (int ***)0x22b2;
        local_4c = (int **)0xe130;
        FUN_3ab8_096d();
        local_4 = (int ***)param_33;
        local_6 = (int ***)param_32;
        local_8 = (int ***)param_31;
        local_a = (int **)param_30;
        local_c = (int ***)0x22b2;
        local_e = (int ***)0xe147;
        func_0x000297e6();
        local_c = (int ***)0x22b2;
        local_e = (int ***)0xe14c;
        func_0x00029d78();
        local_14 = 0x22b2;
        local_16 = (int *)0xe156;
        func_0x000299d1();
        local_14 = 0x22b2;
        local_16 = (int *)0xe15e;
        func_0x000297e6();
        local_14 = 0x22b2;
        local_16 = (int *)0xe163;
        func_0x00029d78();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe16d;
        func_0x000299d1();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe175;
        func_0x000297e6();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe17a;
        func_0x00029d78();
        local_24 = (int ***)0x22b2;
        pppiStack_26 = (int ***)0xe184;
        func_0x000299d1();
        local_24 = (int ***)0x22b2;
        pppiStack_26 = (int ***)0xe18c;
        func_0x000297e6();
        local_24 = (int ***)0x22b2;
        pppiStack_26 = (int ***)0xe191;
        func_0x00029d78();
        local_2c = (int ***)0x22b2;
        pppiStack_2e = (int ***)0xe19b;
        func_0x000299d1();
        local_2c = (int ***)param_9;
        pppiStack_2e = (int ***)param_8;
        pppiStack_30 = (int ***)param_7;
        pppiStack_32 = (int ***)param_6;
        pppiStack_34 = (int ***)param_5;
        pppiStack_36 = (int ***)param_4;
        pppiStack_38 = (int ***)param_3;
        pppiStack_3a = (int ***)param_2;
        ppiStack_3c = &local_16;
        local_3e = (int ***)&local_2c;
        local_40 = (int **)param_16;
        local_42 = (int ***)param_14;
        local_44 = (int **)param_13;
        local_46 = (int ***)param_12;
        local_48 = (int **)param_11;
        local_4a = (int ***)param_10;
        local_4c = &local_1a;
        local_4e = (int ***)0xffff;
        local_50 = (int **)0xffff;
        uStack_52 = 0x22b2;
        local_54 = 0xe1dc;
        FUN_3ab8_1ce8();
        local_4 = (int ***)param_35;
        local_6 = (int ***)0x22b2;
        local_8 = (int ***)0xe1ea;
        func_0x000297e6();
        local_6 = (int ***)0x22b2;
        local_8 = (int ***)0xe1ef;
        func_0x00029d78();
        local_e = (int ***)0x22b2;
        local_10 = 0xe1f9;
        func_0x000299d1();
        local_e = (int ***)0x22b2;
        local_10 = 0xe201;
        func_0x000297e6();
        local_e = (int ***)0x22b2;
        local_10 = 0xe206;
        func_0x00029d78();
        local_16 = (int *)0x22b2;
        local_18 = 0xe210;
        func_0x000299d1();
        local_16 = (int *)0x22b2;
        local_18 = 0xe218;
        func_0x000297e6();
        local_16 = (int *)0x22b2;
        local_18 = 0xe21d;
        func_0x00029d78();
        local_1e = (int **)0x22b2;
        local_20 = 0xe227;
        func_0x000299d1();
        local_1e = (int **)0x22b2;
        local_20 = 0xe22f;
        func_0x000297e6();
        local_1e = (int **)0x22b2;
        local_20 = -0x1dcc;
        func_0x00029d78();
        pppiStack_26 = (int ***)0x22b2;
        pppiStack_28 = (int ***)0xe23e;
        func_0x000299d1();
        pppiStack_26 = (int ***)param_9;
        pppiStack_28 = (int ***)param_8;
        local_2a = (int ***)param_7;
        local_2c = (int ***)param_6;
        pppiStack_2e = (int ***)param_5;
        pppiStack_30 = (int ***)param_4;
        pppiStack_32 = (int ***)param_3;
        pppiStack_34 = (int ***)param_2;
        pppiStack_36 = &local_48;
        pppiStack_38 = &local_4c;
        pppiStack_3a = &local_50;
        ppiStack_3c = (int **)param_17;
        local_3e = (int ***)param_14;
        local_40 = (int **)param_13;
        local_42 = (int ***)param_12;
        local_44 = (int **)param_11;
        local_46 = (int ***)param_10;
        local_48 = &local_1a;
        local_4a = (int ***)0xffff;
        local_4c = (int **)0x22b2;
        local_4e = (int ***)0xe280;
        FUN_3ab8_2ad5();
        if (local_20 != 0) {
          local_4 = (int ***)0x2;
          local_6 = (int ***)0x11;
          local_8 = (int ***)0x22b2;
          local_a = (int **)0xe296;
          FUN_1000_0599();
          local_4 = (int ***)0xdef;
          local_6 = (int ***)0xe29d;
          func_0x00010526();
        }
        if (*(int *)0x158 != 0) {
          local_1a = (int *)0xfba9;
        }
        return (int **)local_1a;
      }
      if ((param_34 == 0) || ((*param_10 == (int ***)local_56 && (*param_11 == (int **)local_5c))))
      goto LAB_3ab8_3457;
      local_6 = (int ***)0xe2d8;
      local_4 = (int ***)ppppiVar5;
      func_0x000297e6();
      local_4 = (int ***)0x22b2;
      local_6 = (int ***)0xe2dd;
      func_0x00029d78();
      local_c = (int ***)0x22b2;
      local_e = (int ***)0xe2e7;
      func_0x000299d1();
      local_c = (int ***)0x22b2;
      local_e = (int ***)0xe2ef;
      func_0x000297e6();
      local_c = (int ***)0x22b2;
      local_e = (int ***)0xe2f4;
      func_0x00029d78();
      local_14 = 0x22b2;
      local_16 = (int *)0xe2fe;
      func_0x000299d1();
      local_14 = 0x22b2;
      local_16 = (int *)0xe306;
      func_0x000297e6();
      local_14 = 0x22b2;
      local_16 = (int *)0xe30b;
      func_0x00029d78();
      local_1c = (int ***)0x22b2;
      local_1e = (int **)0xe315;
      func_0x000299d1();
      local_1c = (int ***)0x22b2;
      local_1e = (int **)0xe31d;
      func_0x000297e6();
      local_1c = (int ***)0x22b2;
      local_1e = (int **)0xe322;
      func_0x00029d78();
      local_24 = (int ***)0x22b2;
      ppppiVar5 = (int ****)0x22b2;
      pppiStack_26 = (int ***)0xe32c;
      func_0x000299d1();
      local_24 = (int ***)param_9;
      pppiStack_26 = (int ***)param_8;
      pppiStack_28 = (int ***)param_7;
      local_2a = (int ***)param_6;
      local_2c = (int ***)param_5;
      pppiStack_2e = (int ***)param_4;
      pppiStack_30 = (int ***)param_3;
      pppiStack_32 = (int ***)param_2;
      pppiStack_34 = &local_40;
      pppiStack_36 = &local_60;
      pppiStack_38 = (int ***)param_15;
      pppiStack_3a = (int ***)param_14;
      ppiStack_3c = (int **)param_13;
      local_3e = (int ***)param_12;
      local_40 = (int **)param_11;
      local_42 = (int ***)param_10;
      local_44 = &local_1a;
      local_46 = (int ***)0x0;
      local_48 = (int **)0x0;
      local_4a = (int ***)0x22b2;
      local_4c = (int **)0xe36a;
      FUN_3ab8_096d();
    } while (*(char *)0xc0e != '\0');
    local_4 = (int ***)param_33;
    local_6 = (int ***)param_32;
    local_8 = (int ***)param_31;
    local_a = (int **)param_30;
    local_c = (int ***)0x22b2;
    local_e = (int ***)0xe38b;
    func_0x000297e6();
    local_c = (int ***)0x22b2;
    local_e = (int ***)0xe390;
    func_0x00029d78();
    local_14 = 0x22b2;
    local_16 = (int *)0xe39a;
    func_0x000299d1();
    local_14 = 0x22b2;
    local_16 = (int *)0xe3a2;
    func_0x000297e6();
    local_14 = 0x22b2;
    local_16 = (int *)0xe3a7;
    func_0x00029d78();
    local_1c = (int ***)0x22b2;
    local_1e = (int **)0xe3b1;
    func_0x000299d1();
    local_1c = (int ***)0x22b2;
    local_1e = (int **)0xe3b9;
    func_0x000297e6();
    local_1c = (int ***)0x22b2;
    local_1e = (int **)0xe3be;
    func_0x00029d78();
    local_24 = (int ***)0x22b2;
    pppiStack_26 = (int ***)0xe3c8;
    func_0x000299d1();
    local_24 = (int ***)0x22b2;
    pppiStack_26 = (int ***)0xe3d0;
    func_0x000297e6();
    local_24 = (int ***)0x22b2;
    pppiStack_26 = (int ***)0xe3d5;
    func_0x00029d78();
    local_2c = (int ***)0x22b2;
    pppiStack_2e = (int ***)0xe3df;
    func_0x000299d1();
    local_2c = (int ***)param_9;
    pppiStack_2e = (int ***)param_8;
    pppiStack_30 = (int ***)param_7;
    pppiStack_32 = (int ***)param_6;
    pppiStack_34 = (int ***)param_5;
    pppiStack_36 = (int ***)param_4;
    pppiStack_38 = (int ***)param_3;
    pppiStack_3a = (int ***)param_2;
    ppiStack_3c = &local_16;
    local_3e = (int ***)&local_2c;
    local_40 = (int **)param_16;
    local_42 = (int ***)param_14;
    local_44 = (int **)param_13;
    local_46 = (int ***)param_12;
    local_48 = (int **)param_11;
    local_4a = (int ***)param_10;
    local_4c = &local_1a;
    local_4e = (int ***)0x0;
    local_50 = (int **)0x0;
    uStack_52 = 0x22b2;
    local_54 = 0xe41d;
    FUN_3ab8_1ce8();
    if (*(char *)0xc0e == '\0') {
      local_4 = (int ***)param_35;
      local_6 = (int ***)0x22b2;
      local_8 = (int ***)0xe435;
      func_0x000297e6();
      local_6 = (int ***)0x22b2;
      local_8 = (int ***)0xe43a;
      func_0x00029d78();
      local_e = (int ***)0x22b2;
      local_10 = 0xe444;
      func_0x000299d1();
      local_e = (int ***)0x22b2;
      local_10 = 0xe44c;
      func_0x000297e6();
      local_e = (int ***)0x22b2;
      local_10 = 0xe451;
      func_0x00029d78();
      local_16 = (int *)0x22b2;
      local_18 = 0xe45b;
      func_0x000299d1();
      local_16 = (int *)0x22b2;
      local_18 = 0xe463;
      func_0x000297e6();
      local_16 = (int *)0x22b2;
      local_18 = 0xe468;
      func_0x00029d78();
      local_1e = (int **)0x22b2;
      local_20 = 0xe472;
      func_0x000299d1();
      local_1e = (int **)0x22b2;
      local_20 = 0xe47a;
      func_0x000297e6();
      local_1e = (int **)0x22b2;
      local_20 = 0xe47f;
      func_0x00029d78();
      pppiStack_26 = (int ***)0x22b2;
      ppppiVar5 = (int ****)0x22b2;
      pppiStack_28 = (int ***)0xe489;
      func_0x000299d1();
      pppiStack_26 = (int ***)param_9;
      pppiStack_28 = (int ***)param_8;
      local_2a = (int ***)param_7;
      local_2c = (int ***)param_6;
      pppiStack_2e = (int ***)param_5;
      pppiStack_30 = (int ***)param_4;
      pppiStack_32 = (int ***)param_3;
      pppiStack_34 = (int ***)param_2;
      pppiStack_36 = &local_48;
      pppiStack_38 = &local_4c;
      pppiStack_3a = &local_50;
      ppiStack_3c = (int **)param_17;
      local_3e = (int ***)param_14;
      local_40 = (int **)param_13;
      local_42 = (int ***)param_12;
      local_44 = (int **)param_11;
      local_46 = (int ***)param_10;
      local_48 = &local_1a;
      local_4a = (int ***)0x0;
      local_4c = (int **)0x22b2;
      local_4e = (int ***)0xe4ca;
      FUN_3ab8_2ad5();
      if (((*(char *)0xc0e == '\0') && ((int **)local_1a == (int **)0x0)) &&
         (*param_14 == (int ***)0x0)) {
        if ((int)*param_11 <= *(int *)0xa5e) goto LAB_3ab8_3457;
        local_56 = (int **)*param_10;
        local_5c = (int *)*param_11;
        if (param_1 == 0) {
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe510;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe515;
          func_0x00029d78();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe51d;
          func_0x00029bfc();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe525;
          func_0x00029983();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe52d;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe532;
          func_0x00029d78();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe53a;
          func_0x00029bfc();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe542;
          func_0x00029983();
          if (param_21 == 0) goto LAB_3ab8_39c8;
          local_4 = (int ***)&local_e;
          local_6 = &local_a;
          local_8 = (int ***)0x1;
          local_a = (int **)0x22b2;
          pppiVar6 = (int ***)0x1bb4;
          local_c = (int ***)0xe55c;
          FUN_1def_0338();
          if (param_21 == 1) {
            local_e = (int ***)*(int *)0x943c;
            local_c = (int ***)*(undefined2 *)0x943e;
          }
          if (param_21 == 2) {
            local_a = (int **)*(undefined2 *)0x943c;
            local_8 = (int ***)*(undefined2 *)0x943e;
          }
          uVar9 = param_21 < 3;
          if (param_21 == 3) {
            local_4 = (int ***)0x1bb4;
            local_6 = (int ***)0xe593;
            func_0x000297e6();
            local_4 = (int ***)0x22b2;
            local_6 = (int ***)0xe598;
            func_0x00029ae7();
            local_4 = (int ***)0x22b2;
            local_6 = (int ***)0xe5a0;
            func_0x000297e6();
            local_4 = (int ***)0x22b2;
            local_6 = (int ***)0xe5a5;
            func_0x00029ae7();
            local_4 = (int ***)0x22b2;
            pppiVar6 = (int ***)0x22b2;
            local_6 = (int ***)0xe5aa;
            FUN_28b3_1181();
            if ((bool)uVar9) {
              local_e = (int ***)*(int *)0x943c;
            }
          }
          local_4 = (int ***)&local_e;
          local_6 = &local_a;
          local_8 = (int ***)0x0;
          ppppiVar7 = (int ****)0x1bb4;
          local_c = (int ***)0xe5d8;
          local_a = (int **)pppiVar6;
          FUN_1def_0338();
        }
        else {
LAB_3ab8_39c8:
          ppppiVar7 = (int ****)0x22b2;
        }
        if (param_1 == 2) {
          local_6 = (int ***)0xe5ec;
          local_4 = (int ***)ppppiVar7;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe5f4;
          func_0x00029bfc();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe5fc;
          func_0x00029983();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe604;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe60c;
          func_0x00029bfc();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe614;
          func_0x00029983();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe61c;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe624;
          func_0x00029983();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe62c;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe634;
          func_0x00029983();
          local_4 = (int ***)local_5a;
          local_6 = (int ***)&local_54;
          local_8 = (int ***)0x22b2;
          local_a = (int **)0xe644;
          func_0x000297e6();
          local_8 = (int ***)0x22b2;
          local_a = (int **)0xe649;
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = (int *)0xe653;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = (int *)0xe65b;
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = (int *)0xe660;
          func_0x00029d78();
          local_18 = 0x22b2;
          local_1a = (int *)0xe66a;
          func_0x000299d1();
          local_18 = 0x22b2;
          local_1a = (int *)0xe672;
          func_0x000297e6();
          local_20 = 0x22b2;
          local_22 = 0xe67c;
          func_0x000299d1();
          local_20 = 0x22b2;
          local_22 = 0xe684;
          func_0x000297e6();
          pppiStack_28 = (int ***)0x22b2;
          ppppiVar7 = (int ****)0x22b2;
          local_2a = (int ***)0xe68e;
          func_0x000299d1();
          pppiStack_28 = (int ***)param_29;
          local_2a = (int ***)param_28;
          local_2c = (int ***)param_27;
          pppiStack_2e = (int ***)param_26;
          pppiStack_30 = (int ***)param_25;
          pppiStack_32 = (int ***)param_24;
          pppiStack_34 = (int ***)param_23;
          pppiStack_36 = (int ***)param_22;
          pppiStack_38 = (int ***)0x22b2;
          pppiStack_3a = (int ***)0xe6aa;
          FUN_3ab8_31ae();
        }
        *(undefined2 *)0xa4a = 1;
        if (param_1 == 0) {
          *(undefined2 *)0xa48 = 2;
        }
        local_4 = (int ***)param_14;
        local_6 = param_13;
        local_8 = (int ***)param_12;
        local_a = (int **)param_11;
        local_c = (int ***)param_10;
        ppppiVar5 = (int ****)0x3bf;
        local_10 = 0xe6d3;
        local_e = (int ***)ppppiVar7;
        local_1a = (int *)func_0x00006608();
        local_3e = (int ***)0x0;
        local_40 = (int **)0x0;
        local_60 = (int **)*(undefined2 *)0x148;
        local_5e = (int ***)*(int *)0x14a;
        local_1e = (int **)0x1;
        local_1c = (int ***)0x0;
        if (param_15[1] != (int ***)0x0 || *param_15 != (int ***)0x0) {
          local_1e = (int **)*param_15;
          local_1c = param_15[1];
        }
        local_42 = local_1c;
        for (local_44 = local_1e;
            ((int)local_42 <= (int)param_18[1] &&
            (((int)local_42 < (int)param_18[1] || (local_44 <= (int ***)*param_18))));
            local_44 = (int **)((int)local_44 + 1)) {
          if ((((int **)local_1a != (int **)0x0) || (*param_14 != (int ***)0x0)) ||
             (((*param_10 != (int ***)local_56 || (*param_11 != (int **)local_5c)) &&
              ((char)local_18 != '\0')))) goto LAB_3ab8_3494;
          local_4 = local_42;
          local_6 = (int ***)local_44;
          ppppiVar7 = (int ****)0x0;
          local_a = (int **)0xe743;
          local_8 = (int ***)ppppiVar5;
          uVar10 = func_0x0000013f();
          if ((*(byte *)((int)uVar10 + 0x14) & 2) == 0) {
            ppppiVar5 = ppppiVar7;
            if (((byte)local_44 & 0x7f) == 0x7f) goto LAB_3ab8_3bd9;
          }
          else {
            if (param_15[1] == (int ***)0x0 && *param_15 == (int ***)0x0) {
              *param_15 = (int ***)local_44;
              param_15[1] = local_42;
              if ((char)local_18 == '\0') goto LAB_3ab8_3c47;
            }
            local_4 = (int ***)0x0;
            local_6 = (int ***)0xe7db;
            func_0x000297e6();
            local_4 = (int ***)0x22b2;
            local_6 = (int ***)0xe7e0;
            func_0x00029d78();
            local_c = (int ***)0x22b2;
            local_e = (int ***)0xe7ea;
            func_0x000299d1();
            local_c = (int ***)0x22b2;
            local_e = (int ***)0xe7f2;
            func_0x000297e6();
            local_c = (int ***)0x22b2;
            local_e = (int ***)0xe7f7;
            func_0x00029d78();
            local_14 = 0x22b2;
            local_16 = (int *)0xe801;
            func_0x000299d1();
            local_14 = 0x22b2;
            local_16 = (int *)0xe809;
            func_0x000297e6();
            local_14 = 0x22b2;
            local_16 = (int *)0xe80e;
            func_0x00029d78();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe818;
            func_0x000299d1();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe820;
            func_0x000297e6();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe825;
            func_0x00029d78();
            local_24 = (int ***)0x22b2;
            ppppiVar7 = (int ****)0x22b2;
            pppiStack_26 = (int ***)0xe82f;
            func_0x000299d1();
            local_24 = (int ***)param_9;
            pppiStack_26 = (int ***)param_8;
            pppiStack_28 = (int ***)param_7;
            local_2a = (int ***)param_6;
            local_2c = (int ***)param_5;
            pppiStack_2e = (int ***)param_4;
            pppiStack_30 = (int ***)param_3;
            pppiStack_32 = (int ***)param_2;
            pppiStack_34 = &local_40;
            pppiStack_36 = &local_60;
            pppiStack_38 = (int ***)param_15;
            pppiStack_3a = (int ***)param_14;
            ppiStack_3c = (int **)param_13;
            local_3e = (int ***)param_12;
            local_40 = (int **)param_11;
            local_42 = (int ***)param_10;
            local_48 = &local_1a;
            local_46 = (int ***)param_10;
            local_4a = (int ***)0x22b2;
            local_4c = (int **)0xe86f;
            local_44 = local_48;
            FUN_3ab8_096d();
LAB_3ab8_3bd9:
            local_4 = (int ***)param_14;
            local_6 = param_13;
            local_8 = (int ***)param_12;
            local_a = (int **)param_11;
            local_c = (int ***)param_10;
            ppppiVar5 = (int ****)0x3bf;
            local_10 = 0xe76d;
            local_e = (int ***)ppppiVar7;
            local_1a = (int *)func_0x00006608();
          }
          local_42 = (int ***)((int)local_42 + (uint)((int ***)0xfffe < local_44));
        }
        *param_18 = local_40;
        param_18[1] = local_3e;
        local_14 = 0;
        local_16 = (int *)0x0;
        local_2c = (int ***)*(int *)0x14c;
        local_2a = (int ***)*(int *)0x14e;
        local_1e = (int **)0x1;
        local_1c = (int ***)0x0;
        if (param_16[1] != (int **)0x0 || *param_16 != (int **)0x0) {
          local_1e = *param_16;
          local_1c = (int ***)param_16[1];
        }
        local_42 = local_1c;
        for (local_44 = local_1e;
            ((int)local_42 <= (int)param_19[1] &&
            (((int)local_42 < (int)param_19[1] || (local_44 <= (int ***)*param_19))));
            local_44 = (int **)((int)local_44 + 1)) {
          if ((((int **)local_1a != (int **)0x0) || (*param_14 != (int ***)0x0)) ||
             (((*param_10 != (int ***)local_56 || (*param_11 != (int **)local_5c)) &&
              ((char)local_18 != '\0')))) goto LAB_3ab8_3494;
          local_4 = local_42;
          local_6 = (int ***)local_44;
          ppppiVar7 = (int ****)0x0;
          local_a = (int **)0xe8ea;
          local_8 = (int ***)ppppiVar5;
          uVar10 = func_0x00000271();
          if ((*(byte *)((int)uVar10 + 0x1e) & 2) == 0) {
            ppppiVar5 = ppppiVar7;
            if (((byte)local_44 & 0x7f) == 0x7f) goto LAB_3ab8_3d80;
          }
          else {
            if (param_16[1] == (int **)0x0 && *param_16 == (int **)0x0) {
              *param_16 = local_44;
              param_16[1] = (int **)local_42;
              if ((char)local_18 == '\0') goto LAB_3ab8_3c47;
            }
            local_4 = (int ***)param_33;
            local_6 = (int ***)param_32;
            local_8 = (int ***)param_31;
            local_a = (int **)param_30;
            local_c = (int ***)0x0;
            local_e = (int ***)0xe985;
            func_0x000297e6();
            local_c = (int ***)0x22b2;
            local_e = (int ***)0xe98a;
            func_0x00029d78();
            local_14 = 0x22b2;
            local_16 = (int *)0xe994;
            func_0x000299d1();
            local_14 = 0x22b2;
            local_16 = (int *)0xe99c;
            func_0x000297e6();
            local_14 = 0x22b2;
            local_16 = (int *)0xe9a1;
            func_0x00029d78();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe9ab;
            func_0x000299d1();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe9b3;
            func_0x000297e6();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe9b8;
            func_0x00029d78();
            local_24 = (int ***)0x22b2;
            pppiStack_26 = (int ***)0xe9c2;
            func_0x000299d1();
            local_24 = (int ***)0x22b2;
            pppiStack_26 = (int ***)0xe9ca;
            func_0x000297e6();
            local_24 = (int ***)0x22b2;
            pppiStack_26 = (int ***)0xe9cf;
            func_0x00029d78();
            local_2c = (int ***)0x22b2;
            ppppiVar7 = (int ****)0x22b2;
            pppiStack_2e = (int ***)0xe9d9;
            func_0x000299d1();
            local_2c = (int ***)param_9;
            pppiStack_2e = (int ***)param_8;
            pppiStack_30 = (int ***)param_7;
            pppiStack_32 = (int ***)param_6;
            pppiStack_34 = (int ***)param_5;
            pppiStack_36 = (int ***)param_4;
            pppiStack_38 = (int ***)param_3;
            pppiStack_3a = (int ***)param_2;
            ppiStack_3c = &local_16;
            local_3e = (int ***)&local_2c;
            local_40 = (int **)param_16;
            local_42 = (int ***)param_14;
            local_44 = (int **)param_13;
            local_46 = (int ***)param_12;
            local_48 = (int **)param_11;
            local_4a = (int ***)param_10;
            local_4c = &local_1a;
            local_4e = (int ***)param_14;
            local_50 = (int **)param_13;
            uStack_52 = 0x22b2;
            local_54 = 0xea19;
            FUN_3ab8_1ce8();
LAB_3ab8_3d80:
            local_4 = (int ***)param_14;
            local_6 = param_13;
            local_8 = (int ***)param_12;
            local_a = (int **)param_11;
            local_c = (int ***)param_10;
            ppppiVar5 = (int ****)0x3bf;
            local_10 = 0xe914;
            local_e = (int ***)ppppiVar7;
            local_1a = (int *)func_0x00006608();
          }
          local_42 = (int ***)((int)local_42 + (uint)((int ***)0xfffe < local_44));
        }
        *param_19 = local_16;
        param_19[1] = local_14;
        local_48 = (int **)0x0;
        local_4c = local_60;
        local_4a = local_5e;
        local_50 = local_60;
        local_4e = local_5e;
        local_62 = (int ***)0x1;
        if (*param_17 != (int **)0x0) {
          local_62 = (int ***)*param_17;
        }
        local_46 = local_62;
        while( true ) {
          if (*param_20 < (int)local_46) {
            *param_20 = (int)local_48;
            goto LAB_3ab8_3457;
          }
          if ((((int **)local_1a != (int **)0x0) || (*param_14 != (int ***)0x0)) ||
             (((*param_10 != (int ***)local_56 || (*param_11 != (int **)local_5c)) &&
              ((char)local_18 != '\0')))) break;
          local_4 = local_46;
          ppppiVar7 = (int ****)0x0;
          local_8 = (int ***)0xea80;
          local_6 = (int ***)ppppiVar5;
          uVar10 = func_0x00000398();
          if ((*(byte *)((int)uVar10 + 0x16) & 2) == 0) {
            ppppiVar5 = ppppiVar7;
            if (((byte)local_46 & 0x7f) == 0x7f) goto LAB_3ab8_3f15;
          }
          else {
            if (*param_17 == (int **)0x0) {
              *param_17 = (int **)local_46;
              if ((char)local_18 == '\0') goto LAB_3ab8_3c47;
            }
            local_4 = (int ***)param_35;
            local_6 = (int ***)0x0;
            local_8 = (int ***)0xeaf4;
            func_0x000297e6();
            local_6 = (int ***)0x22b2;
            local_8 = (int ***)0xeaf9;
            func_0x00029d78();
            local_e = (int ***)0x22b2;
            local_10 = 0xeb03;
            func_0x000299d1();
            local_e = (int ***)0x22b2;
            local_10 = 0xeb0b;
            func_0x000297e6();
            local_e = (int ***)0x22b2;
            local_10 = 0xeb10;
            func_0x00029d78();
            local_16 = (int *)0x22b2;
            local_18 = 0xeb1a;
            func_0x000299d1();
            local_16 = (int *)0x22b2;
            local_18 = 0xeb22;
            func_0x000297e6();
            local_16 = (int *)0x22b2;
            local_18 = 0xeb27;
            func_0x00029d78();
            local_1e = (int **)0x22b2;
            local_20 = 0xeb31;
            func_0x000299d1();
            local_1e = (int **)0x22b2;
            local_20 = 0xeb39;
            func_0x000297e6();
            local_1e = (int **)0x22b2;
            local_20 = 0xeb3e;
            func_0x00029d78();
            pppiStack_26 = (int ***)0x22b2;
            ppppiVar7 = (int ****)0x22b2;
            pppiStack_28 = (int ***)0xeb48;
            func_0x000299d1();
            pppiStack_26 = (int ***)param_9;
            pppiStack_28 = (int ***)param_8;
            local_2a = (int ***)param_7;
            local_2c = (int ***)param_6;
            pppiStack_2e = (int ***)param_5;
            pppiStack_30 = (int ***)param_4;
            pppiStack_32 = (int ***)param_3;
            pppiStack_34 = (int ***)param_2;
            pppiStack_36 = &local_48;
            pppiStack_38 = &local_4c;
            pppiStack_3a = &local_50;
            ppiStack_3c = (int **)param_17;
            local_3e = (int ***)param_14;
            local_40 = (int **)param_13;
            local_42 = (int ***)param_12;
            local_44 = (int **)param_11;
            local_46 = (int ***)param_10;
            local_48 = &local_1a;
            local_4a = (int ***)param_10;
            local_4c = (int **)0x22b2;
            local_4e = (int ***)0xeb89;
            FUN_3ab8_2ad5();
LAB_3ab8_3f15:
            local_4 = (int ***)param_14;
            local_6 = param_13;
            local_8 = (int ***)param_12;
            local_a = (int **)param_11;
            local_c = (int ***)param_10;
            ppppiVar5 = (int ****)0x3bf;
            local_10 = 0xeaa9;
            local_e = (int ***)ppppiVar7;
            local_1a = (int *)func_0x00006608();
          }
          local_46 = (int ***)((int)local_46 + 1);
        }
        goto LAB_3ab8_3494;
      }
    }
    ppppiVar5 = (int ****)0x22b2;
  } while( true );
LAB_3ab8_3c47:
  ppppiVar5 = (int ****)0x0;
  local_18 = CONCAT11(local_18._1_1_,1);
  local_56 = (int **)0xd8f1;
  goto LAB_3ab8_3494;
}


