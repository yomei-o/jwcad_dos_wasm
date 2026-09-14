/* 3ab8:2ad5 */

void __cdecl16far
FUN_3ab8_2ad5(int param_1,int *param_2,int *param_3,undefined2 *param_4,undefined2 *param_5,
             undefined2 param_6,int *param_7,int *param_8,uint *param_9,uint *param_10,int *param_11
             ,undefined2 param_12,undefined2 param_13,undefined2 param_14,undefined2 param_15,
             undefined2 param_16,undefined2 param_17,undefined2 param_18,undefined2 param_19,
             undefined2 param_20,undefined2 param_21,undefined2 param_22,undefined2 param_23,
             undefined2 param_24,undefined2 param_25,undefined2 param_26,undefined2 param_27,
             undefined2 param_28,undefined2 param_29,undefined2 param_30,undefined2 param_31,
             undefined2 param_32,undefined2 param_33,undefined2 param_34,undefined2 param_35)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 **ppuVar4;
  undefined2 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 **ppuVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar13;
  int local_f4;
  undefined2 local_f0 [10];
  byte local_dc;
  byte local_da;
  int local_ba;
  uint local_b8;
  int local_b6;
  undefined2 local_88;
  undefined2 local_86;
  int local_74;
  int local_72;
  int local_70;
  int local_6e;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 *local_3e;
  undefined2 uStack_3c;
  undefined2 local_3a;
  undefined2 uStack_38;
  undefined2 local_36;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined1 *puStack_14;
  undefined2 local_12;
  int *local_10;
  undefined2 *local_e;
  undefined2 *local_c;
  
  uVar12 = 0x22b2;
  FUN_21f2_0ebc();
  bVar6 = false;
  if (((param_1 == 0) && (*param_2 == 0)) && (*param_7 == 0)) {
    bVar6 = true;
  }
  if (param_1 < 1) {
    if (*param_11 == 0) {
      FUN_3ab8_31a8();
      return;
    }
    if (((int)param_10[1] <= *(int *)0x13e) &&
       (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
      local_b8 = *param_9;
      local_b6 = param_9[1] + (uint)(0xfffe < local_b8);
      while( true ) {
        local_b8 = local_b8 + 1;
        if (((int)param_10[1] < local_b6) ||
           (((int)param_10[1] <= local_b6 && (*param_10 < local_b8)))) break;
        local_e = (undefined2 *)0xd71d;
        local_c = (undefined2 *)uVar12;
        puVar13 = (undefined2 *)func_0x0000013f();
        puVar10 = (undefined2 *)puVar13;
        ppuVar11 = &local_3e;
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          ppuVar4 = ppuVar11;
          ppuVar11 = ppuVar11 + 1;
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *ppuVar4 = (undefined2 *)*puVar3;
        }
        local_c = (undefined2 *)0x0;
        local_e = (undefined2 *)0xd73e;
        func_0x000297e6();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xd743;
        func_0x00029d78();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xd748;
        local_c = (undefined2 *)FUN_28b3_0f51();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd751;
        func_0x000297e6();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd756;
        func_0x00029d78();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd75b;
        local_e = (undefined2 *)FUN_28b3_0f51();
        local_10 = (int *)0x22b2;
        local_12 = 0xd764;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = 0xd769;
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = 0xd76e;
        local_10 = (int *)FUN_28b3_0f51();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xd777;
        func_0x000297e6();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xd77c;
        func_0x00029d78();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xd781;
        local_12 = FUN_28b3_0f51();
        puStack_14 = (undefined1 *)0x22b2;
        uVar12 = 0xdef;
        uStack_16 = 0xd787;
        func_0x0000f19e();
        if (bVar6) {
          if (((byte)local_b8 & 0xf) == 0xf) {
            local_c = param_5;
            local_e = param_4;
            local_10 = param_3;
            local_12 = 0xdef;
            uVar12 = 0x3bf;
            puStack_14 = (undefined1 *)0xd7b4;
            iVar7 = func_0x00006608();
            *param_2 = iVar7;
            if (*(char *)0xc0e != '\0') {
              FUN_3ab8_31a8();
              return;
            }
            if ((*param_2 != 0) || (*param_7 != 0)) {
              local_c = (undefined2 *)0xd7e1;
              func_0x0000daa6();
              bVar6 = false;
              uVar12 = 0x885;
              func_0x0000c3ca();
            }
          }
          else if ((*(byte *)0xc3be & 1) == 0) {
            uVar12 = 0x885;
            local_c = (undefined2 *)0xd6ef;
            func_0x0000daa6();
          }
          else {
            uVar12 = 0x885;
            func_0x0000dc89();
          }
        }
        local_b6 = local_b6 + (uint)(0xfffe < local_b8);
      }
      *param_11 = 0;
      uVar2 = *(uint *)0x14a;
      *param_9 = *(uint *)0x148;
      param_9[1] = uVar2;
      FUN_3ab8_31a8();
      return;
    }
    local_f4 = 1;
    if (*param_8 != 0) {
      local_f4 = *param_8;
    }
    iVar7 = *param_11;
    *param_11 = 0;
    uVar2 = *(uint *)0x14a;
    *param_9 = *(uint *)0x148;
    param_9[1] = uVar2;
  }
  else {
    local_f4 = param_1;
    *param_11 = param_1;
    iVar7 = param_1;
  }
  local_ba = local_f4;
  do {
    if (iVar7 < local_ba) {
      FUN_3ab8_31a8();
      return;
    }
    uVar12 = 0;
    local_c = (undefined2 *)0xd86f;
    puVar13 = (undefined2 *)func_0x00000398();
    puVar9 = (undefined2 *)puVar13;
    puVar10 = local_f0;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar5 = *puVar3;
    }
    if (((local_da & 2) != 0) && (local_dc < 0x5a)) {
      local_c = &local_68;
      local_e = (undefined2 *)param_35;
      local_10 = (int *)param_34;
      local_12 = param_33;
      puStack_14 = (undefined1 *)param_32;
      uStack_16 = param_31;
      uStack_18 = param_30;
      uStack_1a = param_29;
      uStack_1c = param_28;
      local_1e = param_27;
      local_20 = param_26;
      local_22 = param_25;
      local_24 = param_24;
      uStack_26 = param_23;
      uStack_28 = param_22;
      uStack_2a = param_21;
      uStack_2c = param_20;
      uStack_2e = param_19;
      uStack_30 = param_18;
      local_36 = param_15;
      uStack_38 = param_14;
      local_3a = param_13;
      uStack_3c = param_12;
      local_3e = local_f0;
      uStack_40 = 0;
      uStack_42 = 0xd8ec;
      FUN_3ab8_21e1();
      local_c = &local_24;
      local_e = &local_12;
      local_10 = &local_74;
      local_12 = local_86;
      puStack_14 = (undefined1 *)local_88;
      uStack_16 = local_66;
      uStack_18 = local_68;
      puVar9 = &uStack_30;
      puVar10 = local_f0;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar13 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar3 = *puVar13;
      }
      FUN_3ab8_2766();
      if (local_74 != 0) {
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        uVar12 = 0x22b2;
        func_0x00029983();
        if (param_1 != 0) {
          puVar1 = param_10;
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          param_10[1] = param_10[1] + (uint)(0xfffe < uVar2);
          if (((int)param_10[1] <= *(int *)0x13e) &&
             (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
            local_c = (undefined2 *)0x22b2;
            uVar12 = 0;
            local_e = (undefined2 *)0xd9a1;
            puVar13 = (undefined2 *)func_0x0000013f();
            puVar10 = (undefined2 *)puVar13;
            ppuVar11 = &local_3e;
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              ppuVar4 = ppuVar11;
              ppuVar11 = ppuVar11 + 1;
              *puVar3 = *ppuVar4;
            }
          }
        }
        local_e = (undefined2 *)0xd9c8;
        local_c = (undefined2 *)uVar12;
        func_0x000297e6();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xd9cd;
        func_0x00029d78();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xd9d2;
        local_c = (undefined2 *)FUN_28b3_0f51();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd9db;
        func_0x000297e6();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd9e0;
        func_0x00029d78();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd9e5;
        local_e = (undefined2 *)FUN_28b3_0f51();
        local_10 = (int *)0x22b2;
        local_12 = 0xd9ee;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = 0xd9f3;
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = 0xd9f8;
        local_10 = (int *)FUN_28b3_0f51();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xda01;
        func_0x000297e6();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xda06;
        func_0x00029d78();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xda0b;
        local_12 = FUN_28b3_0f51();
        puStack_14 = (undefined1 *)0x22b2;
        uVar12 = 0xdef;
        uStack_16 = 0xda11;
        func_0x0000f19e();
      }
      if (local_72 != 0) {
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        uVar12 = 0x22b2;
        func_0x00029983();
        if (param_1 != 0) {
          puVar1 = param_10;
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          param_10[1] = param_10[1] + (uint)(0xfffe < uVar2);
          if (((int)param_10[1] <= *(int *)0x13e) &&
             (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
            local_c = (undefined2 *)0x22b2;
            uVar12 = 0;
            local_e = (undefined2 *)0xda89;
            puVar13 = (undefined2 *)func_0x0000013f();
            puVar10 = (undefined2 *)puVar13;
            ppuVar11 = &local_3e;
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              ppuVar4 = ppuVar11;
              ppuVar11 = ppuVar11 + 1;
              *puVar3 = *ppuVar4;
            }
          }
        }
        local_e = (undefined2 *)0xdaae;
        local_c = (undefined2 *)uVar12;
        func_0x000297e6();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdab3;
        func_0x00029d78();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdab8;
        local_c = (undefined2 *)FUN_28b3_0f51();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdac1;
        func_0x000297e6();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdac6;
        func_0x00029d78();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdacb;
        local_e = (undefined2 *)FUN_28b3_0f51();
        local_10 = (int *)0x22b2;
        local_12 = 0xdad4;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = 0xdad9;
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = 0xdade;
        local_10 = (int *)FUN_28b3_0f51();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdae7;
        func_0x000297e6();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdaec;
        func_0x00029d78();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdaf1;
        local_12 = FUN_28b3_0f51();
        puStack_14 = (undefined1 *)0x22b2;
        uVar12 = 0xdef;
        uStack_16 = 0xdaf7;
        func_0x0000f19e();
      }
      if (local_70 != 0) {
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        uVar12 = 0x22b2;
        func_0x00029983();
        if (param_1 != 0) {
          puVar1 = param_10;
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          param_10[1] = param_10[1] + (uint)(0xfffe < uVar2);
          if (((int)param_10[1] <= *(int *)0x13e) &&
             (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
            local_c = (undefined2 *)0x22b2;
            uVar12 = 0;
            local_e = (undefined2 *)0xdb6f;
            puVar13 = (undefined2 *)func_0x0000013f();
            puVar10 = (undefined2 *)puVar13;
            ppuVar11 = &local_3e;
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              ppuVar4 = ppuVar11;
              ppuVar11 = ppuVar11 + 1;
              *puVar3 = *ppuVar4;
            }
          }
        }
        local_e = (undefined2 *)0xdb94;
        local_c = (undefined2 *)uVar12;
        func_0x000297e6();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdb99;
        func_0x00029d78();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdb9e;
        local_c = (undefined2 *)FUN_28b3_0f51();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdba7;
        func_0x000297e6();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdbac;
        func_0x00029d78();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdbb1;
        local_e = (undefined2 *)FUN_28b3_0f51();
        local_10 = (int *)0x22b2;
        local_12 = 0xdbba;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = 0xdbbf;
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = 0xdbc4;
        local_10 = (int *)FUN_28b3_0f51();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdbcd;
        func_0x000297e6();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdbd2;
        func_0x00029d78();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdbd7;
        local_12 = FUN_28b3_0f51();
        puStack_14 = (undefined1 *)0x22b2;
        uVar12 = 0xdef;
        uStack_16 = 0xdbdd;
        func_0x0000f19e();
      }
      if (local_6e != 0) {
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        uVar12 = 0x22b2;
        func_0x00029983();
        if (param_1 != 0) {
          puVar1 = param_10;
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          param_10[1] = param_10[1] + (uint)(0xfffe < uVar2);
          if (((int)param_10[1] <= *(int *)0x13e) &&
             (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
            local_c = (undefined2 *)0x22b2;
            uVar12 = 0;
            local_e = (undefined2 *)0xdc55;
            puVar13 = (undefined2 *)func_0x0000013f();
            puVar10 = (undefined2 *)puVar13;
            ppuVar11 = &local_3e;
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              ppuVar4 = ppuVar11;
              ppuVar11 = ppuVar11 + 1;
              *puVar3 = *ppuVar4;
            }
          }
        }
        local_e = (undefined2 *)0xdc7a;
        local_c = (undefined2 *)uVar12;
        func_0x000297e6();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdc7f;
        func_0x00029d78();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdc84;
        local_c = (undefined2 *)FUN_28b3_0f51();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdc8d;
        func_0x000297e6();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdc92;
        func_0x00029d78();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdc97;
        local_e = (undefined2 *)FUN_28b3_0f51();
        local_10 = (int *)0x22b2;
        local_12 = 0xdca0;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = 0xdca5;
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = 0xdcaa;
        local_10 = (int *)FUN_28b3_0f51();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdcb3;
        func_0x000297e6();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdcb8;
        func_0x00029d78();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)&SUB_0000_dcbd;
        local_12 = FUN_28b3_0f51();
        puStack_14 = (undefined1 *)0x22b2;
        uVar12 = 0xdef;
        uStack_16 = 0xdcc3;
        func_0x0000f19e();
      }
      if (bVar6) {
        if (((byte)local_ba & 0x7f) == 0x7f) {
          local_c = param_5;
          local_e = param_4;
          local_10 = param_3;
          puStack_14 = (undefined1 *)0xdcf0;
          local_12 = uVar12;
          iVar8 = func_0x00006608();
          *param_2 = iVar8;
          if (*(char *)0xc0e != '\0') {
            return;
          }
          if ((*param_2 != 0) || (*param_7 != 0)) {
            local_c = (undefined2 *)0xdd1a;
            func_0x0000daa6();
            bVar6 = false;
            func_0x0000c3ca();
          }
        }
        else if ((*(byte *)0xc3be & 1) == 0) {
          local_c = (undefined2 *)0xd858;
          func_0x0000daa6();
        }
        else {
          func_0x0000dc89();
        }
      }
    }
    local_ba = local_ba + 1;
  } while( true );
}


