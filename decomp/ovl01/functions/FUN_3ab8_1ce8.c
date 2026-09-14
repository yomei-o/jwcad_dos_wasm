/* 3ab8:1ce8 */

void __cdecl16far
FUN_3ab8_1ce8(uint param_1,uint param_2,int *param_3,uint param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,int *param_8,uint *param_9,uint *param_10,
             uint *param_11,undefined2 param_12,undefined2 param_13,undefined2 param_14,
             undefined2 param_15,undefined2 param_16,undefined2 param_17,undefined2 param_18,
             undefined2 param_19,undefined2 param_20,undefined2 param_21,undefined2 param_22,
             undefined2 param_23,undefined2 param_24,undefined2 param_25,undefined2 param_26,
             undefined2 param_27,undefined2 param_28,undefined2 param_29,undefined2 param_30,
             undefined2 param_31,undefined2 param_32,undefined2 param_33,undefined2 param_34,
             uint param_35,undefined2 param_36,undefined2 param_37)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  int unaff_DS;
  bool bVar9;
  undefined2 *puVar10;
  uint local_13c;
  uint local_13a;
  uint local_136;
  uint local_134;
  undefined2 local_128 [6];
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_116;
  undefined2 local_114;
  int local_110;
  byte local_10e;
  byte local_10d;
  undefined2 local_108 [13];
  byte local_ed;
  byte local_ea;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 *puStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  uint uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int local_8;
  uint uVar11;
  uint uVar12;
  
  uVar7 = 0x22b2;
  FUN_21f2_0ebc();
  if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1 == 0)))) {
    if (param_11[1] == 0 && *param_11 == 0) {
      FUN_3ab8_21db();
      return;
    }
    if (((int)param_10[1] <= *(int *)0x142) &&
       (((int)param_10[1] < *(int *)0x142 || (*param_10 < *(uint *)0x140)))) {
      local_136 = *(uint *)0x14c;
      local_134 = *(int *)0x14e + (uint)(0xfffe < local_136);
      while( true ) {
        local_136 = local_136 + 1;
        if (((int)param_10[1] < (int)local_134) ||
           (((int)param_10[1] <= (int)local_134 && (*param_10 < local_136)))) break;
        uStack_e = 0xc947;
        uStack_c = uVar7;
        puVar10 = (undefined2 *)func_0x00000271();
        puVar5 = (undefined2 *)puVar10;
        puVar6 = local_128;
        for (iVar4 = 0x10; iVar3 = local_110, iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar2 = *puVar1;
        }
        uStack_c = local_11c;
        uStack_e = *(undefined2 *)((uint)local_10e * 2 + 0xa88);
        uStack_10 = (uint)local_10d;
        uStack_12 = local_114;
        uStack_14 = local_116;
        uStack_16 = local_118;
        uStack_18 = local_11a;
        uStack_1a = 0;
        uStack_1c = 0xc992;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        uStack_1c = 0xc997;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xc9a1;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0xc9aa;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0xc9af;
        func_0x00029d78();
        uStack_2a = 0x22b2;
        uStack_2c = 0xc9b9;
        func_0x000299d1();
        uStack_2a = 0x22b2;
        uStack_2c = 0xc9c2;
        func_0x000297e6();
        uStack_2a = 0x22b2;
        uStack_2c = 0xc9c7;
        func_0x00029d78();
        uStack_32 = 0x22b2;
        uStack_34 = 0xc9d1;
        func_0x000299d1();
        uStack_32 = 0x22b2;
        uVar7 = 0xdef;
        uStack_34 = 0xc9d6;
        func_0x0000e118();
        if (iVar3 != 0) {
          if (((byte)local_136 & 0xf) == 0xf) {
            uStack_c = param_6;
            uStack_e = param_5;
            uStack_10 = param_4;
            uStack_12 = 0xdef;
            uVar7 = 0x3bf;
            uStack_14 = 0xca03;
            iVar4 = func_0x00006608();
            *param_3 = iVar4;
            if (*(char *)0xc0e != '\0') {
              FUN_3ab8_21db();
              return;
            }
            if ((*param_3 != 0) || (*param_8 != 0)) {
              uStack_c = 0xca30;
              func_0x0000daa6();
              uVar7 = 0x885;
              func_0x0000c3ca();
            }
          }
          else if ((*(byte *)0xc3be & 1) == 0) {
            uVar7 = 0x885;
            uStack_c = 0xc919;
            func_0x0000daa6();
          }
          else {
            uVar7 = 0x885;
            func_0x0000dc89();
          }
        }
        local_134 = local_134 + (0xfffe < local_136);
      }
      param_11[1] = 0;
      *param_11 = 0;
      uVar11 = *(uint *)0x14e;
      *param_10 = *(uint *)0x14c;
      param_10[1] = uVar11;
      FUN_3ab8_21db();
      return;
    }
    local_13c = 1;
    local_13a = 0;
    if (param_9[1] != 0 || *param_9 != 0) {
      local_13c = *param_9;
      local_13a = param_9[1];
    }
    uVar11 = *param_11;
    uVar12 = param_11[1];
    param_11[1] = 0;
    *param_11 = 0;
    param_1 = *(uint *)0x14c;
    param_2 = *(uint *)0x14e;
    param_11 = param_10;
  }
  else {
    local_13c = param_1;
    local_13a = param_2;
    uVar11 = param_1;
    uVar12 = param_2;
  }
  *param_11 = param_1;
  param_11[1] = param_2;
  local_136 = local_13c;
  local_134 = local_13a;
  while( true ) {
    if ((int)uVar12 < (int)local_134) {
      FUN_3ab8_21db();
      return;
    }
    if (((int)uVar12 <= (int)local_134) && (uVar11 < local_136)) break;
    uVar8 = 0;
    uStack_e = 0xcca4;
    uStack_c = uVar7;
    puVar10 = (undefined2 *)func_0x00000271();
    puVar5 = (undefined2 *)puVar10;
    puVar6 = local_108;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    local_8 = unaff_DS;
    if (((local_ea & 2) != 0) && (local_ed < 0x5a)) {
      uStack_c = param_37;
      uStack_e = param_36;
      uStack_10 = param_35;
      uStack_12 = param_34;
      uStack_14 = param_33;
      uStack_16 = param_32;
      uStack_18 = param_31;
      uStack_1a = param_30;
      uStack_1c = param_29;
      uStack_1e = param_28;
      uStack_20 = param_27;
      uStack_22 = param_26;
      uStack_24 = param_25;
      uStack_26 = param_24;
      uStack_28 = param_23;
      uStack_2a = param_22;
      uStack_2c = param_21;
      uStack_2e = param_20;
      uStack_30 = param_19;
      uStack_32 = param_18;
      uStack_34 = param_17;
      uStack_36 = param_16;
      uStack_38 = param_15;
      uStack_3a = param_14;
      uStack_3c = param_13;
      uStack_3e = param_12;
      puStack_40 = local_108;
      uStack_42 = 0;
      uStack_44 = 0xcd28;
      iVar4 = FUN_3ab8_19b2();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029d78();
      local_8 = 0x22b2;
      uVar8 = 0x22b2;
      iVar3 = FUN_28b3_0f51();
      if ((iVar3 != 0) && (0 < iVar4)) {
        FUN_3ab8_1f34();
        return;
      }
    }
    uVar7 = uVar8;
    if (local_8 != 0) {
      if (((byte)local_136 & 0x7f) == 0x7f) {
        uStack_c = param_6;
        uStack_e = param_5;
        uStack_10 = param_4;
        uVar7 = 0x3bf;
        uStack_14 = 0xcc2a;
        uStack_12 = uVar8;
        iVar4 = func_0x00006608();
        *param_3 = iVar4;
        if (*(char *)0xc0e != '\0') {
          FUN_3ab8_21db();
          return;
        }
        if ((*param_3 != 0) || (*param_8 != 0)) {
          uStack_c = 0xcc54;
          func_0x0000daa6();
          uVar7 = 0x885;
          func_0x0000c3ca();
        }
      }
      else if ((*(byte *)0xc3be & 1) == 0) {
        uVar7 = 0x885;
        uStack_c = 0xcc78;
        func_0x0000daa6();
      }
      else {
        uVar7 = 0x885;
        func_0x0000dc89();
      }
    }
    bVar9 = 0xfffe < local_136;
    local_136 = local_136 + 1;
    local_134 = local_134 + bVar9;
  }
  FUN_3ab8_21db();
  return;
}


