/* 1def:0228 */

undefined2 __cdecl16far
FUN_1def_0228(int param_1,int param_2,uint param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,
             undefined2 param_10,undefined2 param_11,undefined2 param_12,uint param_13,uint param_14
             ,uint param_15,uint param_16,int param_17,uint param_18,uint param_19,int param_20)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined2 extraout_DX;
  undefined2 uVar11;
  undefined2 extraout_DX_00;
  undefined2 uVar12;
  undefined2 unaff_DS;
  undefined1 uVar13;
  bool bVar14;
  undefined1 uVar15;
  uint local_ca;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  uint local_b2;
  uint local_b0;
  uint local_ae;
  uint local_ac;
  undefined2 local_a2;
  uint local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  uint local_92;
  uint local_90;
  uint local_8e;
  uint local_8c;
  undefined2 local_8a;
  uint local_88;
  undefined2 local_86;
  undefined2 local_84;
  int local_50;
  int local_4e;
  uint local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  uint local_3c;
  int local_3a;
  undefined2 local_38;
  undefined2 local_36;
  uint local_34;
  uint local_32;
  int local_30;
  uint local_2e;
  uint local_2c;
  uint local_2a;
  uint local_28;
  uint local_26;
  uint local_24;
  uint local_22;
  uint local_20;
  uint local_1e;
  undefined2 *local_1c;
  undefined2 *local_1a;
  undefined2 *local_18;
  undefined2 *local_16;
  undefined2 *local_14;
  uint uStack_12;
  uint local_10;
  
  FUN_32b2_02bc();
  FUN_32b2_6d14();
  FUN_32b2_70dc();
  FUN_32b2_6e63();
  FUN_32b2_6d14();
  FUN_32b2_7154();
  FUN_32b2_6e63();
  FUN_32b2_6d14();
  FUN_32b2_70dc();
  FUN_32b2_6e63();
  FUN_32b2_6d14();
  FUN_32b2_7154();
  FUN_32b2_6e63();
  local_16 = (undefined2 *)local_26;
  local_14 = (undefined2 *)local_24;
  if ((int)local_24 < 0) {
    local_16 = (undefined2 *)-local_26;
    local_14 = (undefined2 *)-((local_24 & 0x7fff) + (uint)(local_26 != 0));
  }
  local_1c = (undefined2 *)local_28;
  if ((int)local_28 < 0) {
    bVar14 = local_2a != 0;
    local_2a = -local_2a;
    local_1c = (undefined2 *)-((local_28 & 0x7fff) + (uint)bVar14);
  }
  local_1a = (undefined2 *)local_2e;
  if ((int)local_2c < 0) {
    local_2c = -((local_2c & 0x7fff) + (uint)(local_2e != 0));
    local_1a = (undefined2 *)-local_2e;
  }
  if ((int)local_32 < 0) {
    bVar14 = local_34 != 0;
    local_34 = -local_34;
    local_32 = -((local_32 & 0x7fff) + (uint)bVar14);
  }
  iVar4 = *(int *)0xb610;
  if ((iVar4 <= (int)local_14) &&
     (((iVar4 < (int)local_14 || (*(uint *)0xb60e < local_16)) && (iVar4 <= (int)local_1c)))) {
    if (iVar4 < (int)local_1c) {
      return 0;
    }
    if (*(uint *)0xb60e < local_2a) {
      return 0;
    }
  }
  iVar4 = *(int *)0xb5ac;
  if ((((int)local_14 <= iVar4) && (((int)local_14 < iVar4 || (local_16 < *(uint *)0xb5aa)))) &&
     ((int)local_1c <= iVar4)) {
    if ((int)local_1c < iVar4) {
      return 0;
    }
    if (local_2a < *(uint *)0xb5aa) {
      return 0;
    }
  }
  iVar4 = *(int *)0xb614;
  if (((iVar4 <= (int)local_2c) && ((iVar4 < (int)local_2c || (*(uint *)0xb612 < local_1a)))) &&
     (iVar4 <= (int)local_32)) {
    if (iVar4 < (int)local_32) {
      return 0;
    }
    if (*(uint *)0xb612 < local_34) {
      return 0;
    }
  }
  iVar4 = *(int *)0xb5b4;
  if (((int)local_2c <= iVar4) &&
     ((((int)local_2c < iVar4 || (local_1a < *(uint *)0xb5b2)) && ((int)local_32 <= iVar4)))) {
    if ((int)local_32 < iVar4) {
      return 0;
    }
    if (local_34 < *(uint *)0xb5b2) {
      return 0;
    }
  }
  local_22 = local_34;
  local_20 = local_32;
  local_1e = local_2a;
  local_18 = (undefined2 *)local_2c;
  FUN_32b2_6d14();
  iVar4 = FUN_32b2_6f61();
  if (iVar4 == 0) {
    FUN_32b2_6d14();
    FUN_32b2_6f61();
    FUN_32b2_6d14();
    FUN_32b2_6f61();
    local_10 = 0xe2ca;
    FUN_1def_1423();
    return 1;
  }
  uVar8 = *(uint *)0xb5ac;
  uVar13 = local_14 < uVar8;
  if (((int)uVar8 <= (int)local_14) &&
     (((int)uVar8 < (int)local_14 || (uVar13 = local_16 < *(uint *)0xb5aa, !(bool)uVar13)))) {
    uVar8 = *(uint *)0xb610;
    uVar13 = local_1c < uVar8;
    if (((int)local_1c <= (int)uVar8) &&
       (((int)local_1c < (int)uVar8 ||
        (uVar13 = local_1e < *(uint *)0xb60e, local_1e <= *(uint *)0xb60e)))) {
      uVar8 = *(uint *)0xb5b4;
      uVar13 = local_18 < uVar8;
      if (((int)uVar8 <= (int)local_18) &&
         (((int)uVar8 < (int)local_18 || (uVar13 = local_1a < *(uint *)0xb5b2, !(bool)uVar13)))) {
        uVar8 = *(uint *)0xb614;
        uVar13 = uVar8 < local_20;
        if (((int)local_20 <= (int)uVar8) &&
           ((((int)local_20 < (int)uVar8 || (uVar13 = true, local_22 <= *(uint *)0xb612)) &&
            (uVar13 = param_19 < 10000, param_19 == 10000)))) {
          FUN_32b2_6d14();
          local_4c = FUN_32b2_6f61();
          if (param_17 < 9) {
            local_4e = param_17;
            local_4a = 0;
          }
          else {
            local_4e = 1 << ((char)param_17 - 8U & 0x1f);
            local_4a = 0x18;
          }
          uVar13 = local_4c < 10;
          if ((int)local_4c < 10) {
            local_10 = param_13 + param_20;
            uStack_12 = param_18;
            local_14 = (undefined2 *)local_4e;
            local_18 = (undefined2 *)0x32b2;
            local_1a = (undefined2 *)0xe3a2;
            local_16 = (undefined2 *)local_4c;
            FUN_32b2_6d14();
            local_18 = (undefined2 *)0x32b2;
            local_1a = (undefined2 *)0xe3a7;
            local_18 = (undefined2 *)FUN_32b2_6f61();
            local_1a = (undefined2 *)0x32b2;
            local_1c = (undefined2 *)0xe3b0;
            FUN_32b2_6d14();
            local_1a = (undefined2 *)0x32b2;
            local_1c = (undefined2 *)0xe3b5;
            local_1a = (undefined2 *)FUN_32b2_6f61();
            local_1c = (undefined2 *)0x32b2;
            local_1e = 0xe3bb;
            FUN_20a9_0e18();
            return 1;
          }
        }
      }
    }
  }
  FUN_32b2_6d14();
  FUN_32b2_6d14();
  FUN_32b2_7191();
  if ((bool)uVar13) {
    FUN_32b2_6d14();
    local_30 = FUN_32b2_6f61();
    FUN_32b2_7285();
    FUN_32b2_710c();
    FUN_32b2_710c();
    FUN_32b2_6f61();
    if (local_30 < 0x14) {
      local_3a = 0x14;
    }
    else if (local_30 < 0x50) {
      local_3a = 10;
    }
    else if (local_30 < 0xa0) {
      local_3a = 8;
    }
    else if (local_30 < 0x140) {
      local_3a = 5;
    }
    else if (local_30 < 0x280) {
      local_3a = 2;
    }
    else {
      local_3a = 1;
    }
    local_3c = 0;
    local_10 = 0xe49e;
    iVar4 = FUN_1000_0965();
    local_50 = iVar4 >> 0xf;
    local_10 = 0xe4b5;
    iVar5 = thunk_FUN_12c1_072e();
    iVar5 = -iVar5;
    FUN_32b2_6d94();
    FUN_32b2_710c();
    FUN_32b2_6e99();
    uStack_12 = 0x32b2;
    local_14 = (undefined2 *)0xe4e3;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    local_14 = (undefined2 *)0xe4e8;
    FUN_32b2_75ec();
    uVar11 = extraout_DX;
    FUN_32b2_6d14();
    FUN_32b2_710c();
    uVar6 = FUN_32b2_6f61();
    local_14 = (undefined2 *)0x32b2;
    local_16 = (undefined2 *)0xe513;
    uStack_12 = iVar5;
    local_10 = iVar5 >> 0xf;
    FUN_32b2_4e12();
    iVar9 = local_50;
    local_10 = 0x32b2;
    uStack_12 = 0xe528;
    FUN_32b2_6d14();
    local_18 = (undefined2 *)0x32b2;
    local_1a = (undefined2 *)0xe532;
    FUN_32b2_6eb1();
    local_18 = (undefined2 *)0x32b2;
    local_1a = (undefined2 *)0xe537;
    FUN_32b2_75fe();
    uStack_12 = 0x32b2;
    local_14 = (undefined2 *)0xe541;
    uVar12 = extraout_DX_00;
    FUN_32b2_6d14();
    uStack_12 = 0x32b2;
    local_14 = (undefined2 *)0xe54a;
    FUN_32b2_710c();
    uStack_12 = 0x32b2;
    local_14 = (undefined2 *)0xe54f;
    uVar7 = FUN_32b2_6f61();
    local_16 = (undefined2 *)0x32b2;
    local_18 = (undefined2 *)0xe55c;
    local_14 = (undefined2 *)uVar7;
    uStack_12 = uVar12;
    FUN_32b2_4e12();
    local_10 = 0xe571;
    FUN_32b2_6d94();
    local_10 = 0xe579;
    FUN_32b2_7154();
    local_10 = 0xe581;
    FUN_32b2_6e63();
    uStack_12 = local_50;
    local_16 = (undefined2 *)0x32b2;
    local_18 = (undefined2 *)0xe592;
    local_14 = (undefined2 *)iVar4;
    local_10 = uVar6;
    FUN_32b2_4e12();
    local_16 = (undefined2 *)0x32b2;
    local_18 = (undefined2 *)0xe5aa;
    local_14 = (undefined2 *)uVar7;
    uStack_12 = uVar12;
    local_10 = iVar5;
    FUN_32b2_4e12();
    local_10 = 0xe5bf;
    FUN_32b2_6d94();
    local_10 = 0xe5c7;
    FUN_32b2_7154();
    local_10 = 0xe5cf;
    FUN_32b2_6e63();
    iVar4 = param_14 + local_3a + (uint)CARRY2(param_13,local_3c);
    local_10 = 0;
    while( true ) {
      uVar8 = param_16;
      if (((int)param_16 <= (int)param_14) &&
         (((int)param_16 < (int)param_14 || (param_15 <= param_13)))) {
        uVar8 = param_16 + 0x168;
      }
      if (((int)uVar8 < iVar4) || (((int)uVar8 <= iVar4 && (param_15 <= local_10)))) break;
      uStack_12 = local_30;
      local_14 = (undefined2 *)0x32b2;
      local_16 = (undefined2 *)0xe60b;
      iVar4 = FUN_1000_0965();
      local_50 = iVar4 >> 0xf;
      local_16 = (undefined2 *)0x32b2;
      local_18 = (undefined2 *)0xe622;
      local_14 = (undefined2 *)iVar4;
      uStack_12 = local_50;
      local_10 = uVar7;
      FUN_32b2_4e12();
      local_16 = (undefined2 *)iVar9;
      local_18 = (undefined2 *)0x32b2;
      local_1a = (undefined2 *)0xe63c;
      local_14 = (undefined2 *)uVar6;
      uStack_12 = uVar11;
      local_10 = uVar6;
      iVar5 = thunk_FUN_12c1_072e();
      iVar5 = -iVar5;
      local_18 = (undefined2 *)0x32b2;
      local_1a = (undefined2 *)0xe64f;
      local_16 = (undefined2 *)iVar5;
      local_14 = (undefined2 *)(iVar5 >> 0xf);
      FUN_32b2_4e12();
      local_10 = 0x32b2;
      uStack_12 = 0xe664;
      FUN_32b2_6d94();
      local_10 = 0x32b2;
      uStack_12 = 0xe66c;
      FUN_32b2_7154();
      local_10 = 0x32b2;
      uStack_12 = 0xe674;
      FUN_32b2_6e63();
      local_14 = (undefined2 *)local_50;
      local_18 = (undefined2 *)0x32b2;
      local_1a = (undefined2 *)0xe685;
      local_16 = (undefined2 *)iVar4;
      uStack_12 = uVar6;
      local_10 = uVar11;
      FUN_32b2_4e12();
      local_18 = (undefined2 *)0x32b2;
      local_1a = (undefined2 *)0xe69d;
      local_16 = (undefined2 *)iVar5;
      local_14 = (undefined2 *)(iVar5 >> 0xf);
      uStack_12 = uVar7;
      local_10 = uVar12;
      FUN_32b2_4e12();
      local_10 = 0x32b2;
      uStack_12 = 0xe6b2;
      FUN_32b2_6d94();
      local_10 = 0x32b2;
      uStack_12 = 0xe6ba;
      FUN_32b2_7154();
      local_10 = 0x32b2;
      uStack_12 = 0xe6c2;
      uVar8 = FUN_32b2_6e63();
      local_10 = param_18;
      uStack_12 = param_17;
      local_14 = &local_48;
      local_16 = &local_44;
      local_18 = &local_40;
      local_1a = &local_38;
      local_1c = (undefined2 *)0x32b2;
      local_1e = 0xe6df;
      FUN_1def_17bb();
      local_38 = local_44;
      local_36 = local_42;
      local_40 = local_48;
      local_3e = local_46;
      bVar14 = CARRY2(local_10,local_3c);
      local_10 = local_10 + local_3c;
      iVar4 = (uVar8 & 0xff00) + local_3a + (uint)bVar14;
    }
    local_10 = param_15;
    uStack_12 = local_30;
    local_14 = (undefined2 *)0x32b2;
    local_16 = (undefined2 *)0xe73b;
    iVar4 = FUN_1000_0965();
    local_50 = iVar4 >> 0xf;
    local_16 = (undefined2 *)0x32b2;
    local_18 = (undefined2 *)0xe752;
    local_14 = (undefined2 *)iVar4;
    uStack_12 = local_50;
    local_10 = uVar7;
    FUN_32b2_4e12();
    uStack_12 = param_16;
    local_14 = (undefined2 *)param_15;
    local_16 = (undefined2 *)iVar9;
    local_18 = (undefined2 *)0x32b2;
    local_1a = (undefined2 *)0xe76c;
    local_10 = uVar6;
    iVar9 = thunk_FUN_12c1_072e();
    iVar9 = -iVar9;
    local_18 = (undefined2 *)0x32b2;
    local_1a = (undefined2 *)0xe77f;
    local_16 = (undefined2 *)iVar9;
    local_14 = (undefined2 *)(iVar9 >> 0xf);
    FUN_32b2_4e12();
    local_10 = 0x32b2;
    uStack_12 = 0xe794;
    FUN_32b2_6d94();
    local_10 = 0x32b2;
    uStack_12 = 0xe79c;
    FUN_32b2_7154();
    local_10 = 0x32b2;
    uStack_12 = 0xe7a4;
    FUN_32b2_6e63();
    local_14 = (undefined2 *)local_50;
    local_18 = (undefined2 *)0x32b2;
    local_1a = (undefined2 *)0xe7b5;
    local_16 = (undefined2 *)iVar4;
    uStack_12 = uVar6;
    local_10 = uVar11;
    FUN_32b2_4e12();
    local_18 = (undefined2 *)0x32b2;
    local_1a = (undefined2 *)0xe7cd;
    local_16 = (undefined2 *)iVar9;
    local_14 = (undefined2 *)(iVar9 >> 0xf);
    uStack_12 = uVar7;
    local_10 = uVar12;
    FUN_32b2_4e12();
    local_10 = 0x32b2;
    uStack_12 = 0xe7e2;
    FUN_32b2_6d94();
    local_10 = 0x32b2;
    uStack_12 = 0xe7ea;
    FUN_32b2_7154();
    local_10 = 0x32b2;
    uStack_12 = 0xe7f2;
    local_10 = FUN_32b2_6e63();
    local_10 = local_10 & 0xff00;
    uStack_12 = param_18;
    local_14 = (undefined2 *)param_17;
    local_16 = &local_48;
    local_18 = &local_44;
    local_1a = &local_40;
    local_1c = &local_38;
    local_1e = 0x32b2;
    local_20 = 0xe80f;
    FUN_1def_17bb();
    return 1;
  }
  FUN_32b2_7285();
  FUN_32b2_710c();
  FUN_32b2_6e99();
  FUN_32b2_6ef9();
  FUN_32b2_6d14();
  FUN_32b2_710c();
  FUN_32b2_6e99();
  FUN_32b2_6ef9();
  FUN_32b2_6d9b();
  FUN_32b2_70dc();
  FUN_32b2_6e4b();
  FUN_32b2_6ef9();
  uVar13 = (*(int *)0x1b40 - (*(int *)0x1b40 >> 0xf) & 1U) != 0;
  FUN_32b2_6d9b();
  FUN_32b2_70f4();
  FUN_32b2_6e4b();
  FUN_32b2_6ef9();
  FUN_32b2_6d14();
  FUN_32b2_6cc6();
  FUN_32b2_6fc7();
  FUN_32b2_6cc6();
  FUN_32b2_6fc7();
  FUN_32b2_718c();
  FUN_32b2_6d9b();
  FUN_32b2_718c();
  FUN_32b2_7258();
  FUN_32b2_7191();
  if ((bool)uVar13) {
    return 0;
  }
  FUN_32b2_6cc6();
  FUN_32b2_6cc6();
  FUN_32b2_6fc7();
  FUN_32b2_6cc6();
  FUN_32b2_6fc7();
  FUN_32b2_718c();
  FUN_32b2_7191();
  if ((bool)uVar13) {
    return 0;
  }
  FUN_32b2_6d94();
  FUN_32b2_710c();
  FUN_32b2_6e99();
  local_10 = 0x32b2;
  uStack_12 = 0xe978;
  FUN_32b2_6eb1();
  local_10 = 0x32b2;
  uStack_12 = 0xe97d;
  puVar10 = (uint *)FUN_32b2_75fe();
  uVar8 = *puVar10;
  uVar1 = puVar10[1];
  uVar2 = puVar10[2];
  uVar3 = puVar10[3];
  FUN_32b2_6d14();
  uStack_12 = 0x32b2;
  local_14 = (undefined2 *)0xe99e;
  FUN_32b2_6eb1();
  uStack_12 = 0x32b2;
  local_14 = (undefined2 *)0xe9a3;
  FUN_32b2_75ec();
  FUN_32b2_6d14();
  FUN_32b2_6e99();
  FUN_32b2_704d();
  FUN_32b2_6cc6();
  FUN_32b2_710c();
  FUN_32b2_718c();
  FUN_32b2_6e4b();
  FUN_32b2_6e63();
  FUN_32b2_6cc6();
  FUN_32b2_710c();
  FUN_32b2_6d14();
  FUN_32b2_704d();
  FUN_32b2_7173();
  FUN_32b2_6e4b();
  FUN_32b2_6e63();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  local_14 = (undefined2 *)0x32b2;
  local_16 = (undefined2 *)0xea32;
  FUN_32b2_6eb1();
  local_14 = (undefined2 *)0x32b2;
  local_16 = (undefined2 *)0xea3a;
  FUN_32b2_6cc6();
  local_14 = (undefined2 *)0x32b2;
  local_16 = (undefined2 *)0xea3f;
  FUN_32b2_7258();
  local_14 = (undefined2 *)0x32b2;
  local_16 = (undefined2 *)0xea47;
  FUN_32b2_7124();
  local_1c = (undefined2 *)0x32b2;
  local_1e = 0xea51;
  FUN_32b2_6eb1();
  local_1c = (undefined2 *)0x32b2;
  local_1e = 0xea56;
  FUN_32b2_7658();
  local_10 = 0xea6d;
  FUN_32b2_6d9b();
  local_10 = 0xea75;
  FUN_32b2_7124();
  local_10 = 0xea7e;
  FUN_32b2_6e99();
  local_10 = 0xea86;
  FUN_32b2_6ef9();
  local_10 = 0xea8e;
  FUN_32b2_6d14();
  local_10 = 0xea97;
  FUN_32b2_70dc();
  local_10 = 0xeaa0;
  FUN_32b2_6e99();
  local_10 = 0xeaa8;
  FUN_32b2_6ef9();
  local_10 = 0xeab1;
  FUN_32b2_6d14();
  local_10 = 0xeab9;
  FUN_32b2_7154();
  local_10 = 0xeac2;
  FUN_32b2_6e99();
  local_10 = 0xeaca;
  FUN_32b2_6ef9();
  uVar15 = param_15 < param_13;
  uVar13 = 0;
  if (param_15 == param_13) {
    uVar15 = param_16 < param_14;
    uVar13 = 0;
    if (param_16 == param_14) {
      local_10 = param_17;
      uStack_12 = 0x32b2;
      local_14 = (undefined2 *)0xeae9;
      FUN_32b2_6d14();
      local_1a = (undefined2 *)0x32b2;
      local_1c = (undefined2 *)0xeaf3;
      FUN_32b2_6eb1();
      local_22 = 0x32b2;
      local_24 = 0xeb08;
      local_20 = uVar8;
      local_1e = uVar1;
      local_1c = (undefined2 *)uVar2;
      local_1a = (undefined2 *)uVar3;
      FUN_32b2_6d14();
      local_2a = 0x32b2;
      local_2c = 0xeb12;
      FUN_32b2_6eb1();
      local_2a = 0x32b2;
      local_2c = 0xeb1b;
      FUN_32b2_6d14();
      local_32 = 0x32b2;
      local_34 = 0xeb25;
      FUN_32b2_6eb1();
      goto LAB_1def_0e56;
    }
  }
  while( true ) {
    local_10 = 0xeb4a;
    FUN_32b2_6d14();
    local_10 = 0xeb53;
    FUN_32b2_6d14();
    local_10 = 0xeb58;
    FUN_32b2_7191();
    if (!(bool)uVar15) break;
    local_10 = 0xeb31;
    FUN_32b2_6d14();
    local_10 = 0x32b2;
    uStack_12 = 0xeb3b;
    FUN_32b2_7154();
    local_10 = 0xeb41;
    FUN_32b2_6eb1();
  }
  while( true ) {
    local_10 = 0xeb7e;
    FUN_32b2_6d14();
    local_10 = 0xeb87;
    FUN_32b2_6d14();
    local_10 = 0xeb8c;
    FUN_32b2_7191();
    if ((bool)uVar15 || (bool)uVar13) break;
    local_10 = 0xeb65;
    FUN_32b2_6d14();
    local_10 = 0x32b2;
    uStack_12 = 0xeb6f;
    FUN_32b2_7154();
    local_10 = 0xeb75;
    FUN_32b2_6eb1();
  }
  local_10 = 0xeb96;
  FUN_32b2_6d94();
  local_10 = 0xeb9f;
  FUN_32b2_710c();
  local_10 = 0xeba8;
  FUN_32b2_6e99();
  local_10 = 0xebb0;
  FUN_32b2_6ef9();
  local_10 = 0xebb8;
  FUN_32b2_6d94();
  local_10 = 0xebc1;
  FUN_32b2_710c();
  local_10 = 0xebca;
  FUN_32b2_6eb1();
  local_10 = 0xebd3;
  FUN_32b2_6d14();
  local_10 = 0xebdc;
  FUN_32b2_6d14();
  local_10 = 0xebe1;
  FUN_32b2_7191();
  if (!(bool)uVar15 && !(bool)uVar13) {
    local_10 = 0xebec;
    FUN_32b2_6d14();
    local_10 = 0xebf5;
    FUN_32b2_6d14();
    local_10 = 0xebfa;
    FUN_32b2_7191();
    if ((bool)uVar15 || (bool)uVar13) {
      local_10 = 0xec05;
      FUN_32b2_6d14();
      local_10 = 0xec0e;
      FUN_32b2_7154();
      local_10 = 0xec17;
      FUN_32b2_6eb1();
    }
    local_10 = 0xec20;
    FUN_32b2_6d14();
    local_10 = 0xec29;
    FUN_32b2_6d14();
    local_10 = 0xec2e;
    FUN_32b2_7191();
    if ((bool)uVar15 || (bool)uVar13) {
      local_10 = 0xec39;
      FUN_32b2_6d14();
      local_10 = 0x32b2;
      uStack_12 = 0xec43;
      FUN_32b2_7154();
      local_10 = 0xec49;
      FUN_32b2_6eb1();
    }
    local_10 = 0xec52;
    FUN_32b2_6d14();
    local_10 = 0x32b2;
    uStack_12 = 0xec5c;
    FUN_32b2_7154();
    local_10 = 0xec62;
    FUN_32b2_6eb1();
  }
  local_10 = 0xec6b;
  FUN_32b2_6d14();
  local_10 = 0xec74;
  FUN_32b2_6d14();
  local_10 = 0xec79;
  FUN_32b2_7191();
  if ((bool)uVar15 || (bool)uVar13) {
    local_10 = 0xed89;
    FUN_32b2_6d14();
    local_10 = 0xed92;
    FUN_32b2_6d14();
    local_10 = 0xed97;
    FUN_32b2_7191();
    if ((bool)uVar15) {
      local_10 = 0xeda5;
      FUN_32b2_6d14();
      local_10 = 0xedae;
      FUN_32b2_6d14();
      local_10 = 0xedb3;
      FUN_32b2_7191();
      if (!(bool)uVar15 && !(bool)uVar13) {
        local_b2 = local_92;
        local_b0 = local_90;
        local_ae = local_8e;
        local_ac = local_8c;
      }
      local_10 = param_17;
      uStack_12 = local_c4;
      local_14 = (undefined2 *)local_c6;
      local_16 = (undefined2 *)local_c8;
      local_18 = (undefined2 *)local_ca;
      local_22 = local_ac;
      local_24 = local_ae;
      local_26 = local_b0;
      local_28 = local_b2;
      local_3a = param_12;
      local_3c = param_11;
      local_3e = param_10;
      local_40 = param_9;
      local_42 = param_8;
      local_44 = param_7;
      local_46 = param_6;
      local_48 = param_5;
      local_4a = param_4;
      local_4c = param_3;
      local_4e = param_2;
      local_50 = param_1;
      local_20 = uVar8;
      local_1e = uVar1;
      local_1c = (undefined2 *)uVar2;
      local_1a = (undefined2 *)uVar3;
      FUN_1def_0fca();
      uVar15 = (undefined1 *)0xffbb < &local_50;
      uVar13 = &stack0x0000 == (undefined1 *)0xc;
    }
    else {
      uVar15 = false;
    }
    local_10 = 0xee45;
    FUN_32b2_6d14();
    local_10 = 0xee4e;
    FUN_32b2_6d14();
    local_10 = 0xee53;
    FUN_32b2_7191();
    if (!(bool)uVar15) {
      return 1;
    }
    local_10 = 0xee61;
    FUN_32b2_6d14();
    local_10 = 0xee6a;
    FUN_32b2_6d14();
    local_10 = 0xee6f;
    FUN_32b2_7191();
    if (!(bool)uVar15 && !(bool)uVar13) {
      local_a2 = local_8a;
      local_a0 = local_88;
      local_9e = local_86;
      local_9c = local_84;
    }
    local_22 = local_8c;
    local_24 = local_8e;
    local_26 = local_90;
    local_28 = local_92;
  }
  else {
    local_10 = 0xec87;
    FUN_32b2_6d14();
    local_10 = 0xec90;
    FUN_32b2_6d14();
    local_10 = 0xec95;
    FUN_32b2_7191();
    if (!(bool)uVar15 && !(bool)uVar13) {
      return 0;
    }
    local_10 = 0xeca3;
    FUN_32b2_6d14();
    local_10 = 0xecac;
    FUN_32b2_6d14();
    local_10 = 0xecb1;
    FUN_32b2_7191();
    if (!(bool)uVar15 && !(bool)uVar13) {
      return 0;
    }
    local_10 = 0xecbf;
    FUN_32b2_6d14();
    local_10 = 0xecc8;
    FUN_32b2_6d14();
    local_10 = 0xeccd;
    FUN_32b2_7191();
    if (!(bool)uVar15 && !(bool)uVar13) {
      local_a2 = local_8a;
      local_a0 = local_88;
      local_9e = local_86;
      local_9c = local_84;
    }
    local_10 = 0xece6;
    FUN_32b2_6d14();
    local_10 = 0xecef;
    FUN_32b2_6d14();
    local_10 = 0xecf4;
    FUN_32b2_7191();
    if (!(bool)uVar15 && !(bool)uVar13) {
      local_b2 = local_92;
      local_b0 = local_90;
      local_ae = local_8e;
      local_ac = local_8c;
    }
    local_22 = local_ac;
    local_24 = local_ae;
    local_26 = local_b0;
    local_28 = local_b2;
  }
  local_10 = param_17;
  uStack_12 = local_c4;
  local_14 = (undefined2 *)local_c6;
  local_16 = (undefined2 *)local_c8;
  local_18 = (undefined2 *)local_ca;
  local_2a = local_9c;
  local_2c = local_9e;
  local_2e = local_a0;
  local_30 = local_a2;
  local_20 = uVar8;
  local_1e = uVar1;
  local_1c = (undefined2 *)uVar2;
  local_1a = (undefined2 *)uVar3;
LAB_1def_0e56:
  local_3a = param_12;
  local_3c = param_11;
  local_3e = param_10;
  local_40 = param_9;
  local_42 = param_8;
  local_44 = param_7;
  local_46 = param_6;
  local_48 = param_5;
  local_4a = param_4;
  local_4c = param_3;
  local_4e = param_2;
  local_50 = param_1;
  FUN_1def_0fca();
  return 1;
}


