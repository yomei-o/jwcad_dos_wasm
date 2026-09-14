/* 2bb4:3645 */

undefined2 __cdecl16far FUN_2bb4_3645(uint param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 in_DX;
  undefined2 extraout_DX;
  undefined2 uVar5;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  undefined2 extraout_DX_04;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined1 uVar9;
  uint local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  uint local_3a;
  int local_38;
  int local_36;
  byte local_34;
  int local_32;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  int local_28;
  uint local_26;
  int local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  uint local_c;
  
  FUN_32b2_02bc();
  local_40 = 7;
  local_32 = 1;
  local_26 = 1;
  if (param_1 == 0xffff) {
    local_40 = 2;
    local_32 = 0;
    if (*(char *)0x121 != '\0') {
      local_c = 0xf1bf;
      puVar3 = (undefined2 *)FUN_1000_03ef();
      puVar6 = &local_16;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar3;
        puVar3 = puVar3 + 1;
        *puVar2 = *puVar1;
      }
      if ((local_c & 8) != 0) {
        local_40 = 8;
      }
    }
  }
  if (param_1 == 0) {
    local_40 = 0;
    local_32 = 0;
    local_26 = 2;
  }
  if (param_1 == 1) {
    local_26 = 2;
  }
  if (*(int *)0xbc0 != 0) {
    local_26 = 1;
  }
  if (*(int *)0x11c != 0) {
    local_26 = 1;
  }
  uVar7 = 0x1885;
  local_c = 0xf219;
  FUN_1885_5256();
  local_3a = 1;
  do {
    uVar8 = local_26 < local_3a;
    if ((int)local_26 < (int)local_3a) {
      if (local_26 != 1) {
        local_c = 0;
        local_e = 3;
        local_12 = 0xf61a;
        local_10 = uVar7;
        FUN_1def_13db();
        FUN_1885_1f49();
      }
      return 0;
    }
    if (local_3a == 1) {
      local_3e = *(undefined2 *)0xc30;
      local_3c = *(undefined2 *)0xc32;
      local_1a = *(undefined2 *)0xc4c;
      local_18 = *(undefined2 *)0xc4e;
      uVar9 = 1;
    }
    else {
      local_3e = *(undefined2 *)0xca6;
      local_3c = *(undefined2 *)0xca8;
      local_1a = *(undefined2 *)0xcae;
      local_18 = *(undefined2 *)0xcb0;
      local_c = 0;
      local_e = 3;
      local_12 = 0xf261;
      local_10 = uVar7;
      FUN_1def_13db();
      uVar8 = (undefined1 *)0xfff7 < &local_e;
      uVar9 = &stack0x0000 == (undefined1 *)0x6;
      FUN_1885_1f49();
    }
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_7065();
    FUN_32b2_710c();
    FUN_32b2_6e4b();
    uVar7 = 0x32b2;
    FUN_32b2_7191();
    uVar5 = extraout_DX;
    if (!(bool)uVar8 && !(bool)uVar9) {
      local_22 = *(undefined2 *)0x93dc;
      uVar5 = *(undefined2 *)0x93de;
      local_20 = uVar5;
    }
    if (param_1 == 2) {
      local_36 = 1;
      local_24 = *(int *)0x152;
    }
    else {
      local_36 = param_2;
      local_24 = param_2;
    }
    for (local_38 = local_36; local_38 <= local_24; local_38 = local_38 + 1) {
      if ((local_34 & 7) == 0) {
        uVar7 = 0x1885;
        local_28 = FUN_1885_532a();
        if ((local_28 != 0) && (local_26 == 1)) {
          if (local_28 != 1) {
            return 0x20;
          }
          break;
        }
      }
      uVar7 = 0x1000;
      local_c = 0xf2dc;
      puVar3 = (undefined2 *)FUN_1000_03ef();
      puVar6 = &local_16;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar3;
        puVar3 = puVar3 + 1;
        *puVar2 = *puVar1;
      }
      if (local_e._1_1_ < 0x5a) {
        if ((local_32 != 0) &&
           (local_40 = *(uint *)((uint)local_e._1_1_ * 2 + 0xa70), local_e._1_1_ == 7)) {
          local_40 = *(uint *)0xa80;
        }
        if ((*(char *)0xb9e == '\0') || ((uint)local_e._1_1_ == *(uint *)0xa6a)) {
          local_1e = local_12;
          local_1c = local_10;
          uVar8 = param_1 < 2;
          if (param_1 == 2) {
            uVar7 = 0x21f2;
            local_c = 0xf3b5;
            uVar5 = local_10;
            iVar4 = FUN_21f2_0680();
            if (iVar4 != 0) {
              uVar8 = false;
              if (*(char *)0x136 == '\0') goto LAB_2bb4_38af;
              uVar7 = 0x21f2;
              local_c = 0xf3cf;
              iVar4 = FUN_21f2_06d1();
              if (iVar4 == 0) {
                uVar8 = false;
                if (*(char *)0xc10 != '\0') {
                  local_40 = 8;
                  goto LAB_2bb4_38af;
                }
              }
              else {
                uVar8 = false;
                if (*(char *)0xc10 == '\0') goto LAB_2bb4_38af;
              }
            }
          }
          else {
LAB_2bb4_38af:
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_704d();
            FUN_32b2_6d9b();
            FUN_32b2_7178();
            FUN_32b2_6e4b();
            FUN_32b2_6ef9();
            uVar9 = *(int *)0xa5c == 2;
            FUN_32b2_6d9b();
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_704d();
            FUN_32b2_6d9b();
            FUN_32b2_718c();
            FUN_32b2_6e4b();
            uVar7 = 0x32b2;
            FUN_32b2_7191();
            uVar5 = extraout_DX_00;
            if (!(bool)uVar8 && !(bool)uVar9) {
              FUN_32b2_6d9b();
              FUN_32b2_6cc6();
              uVar7 = 0x32b2;
              FUN_32b2_7191();
              uVar5 = extraout_DX_01;
              if ((bool)uVar8) {
                uVar9 = *(int *)0xa5e == 2;
                FUN_32b2_6d9b();
                FUN_32b2_6cc6();
                uVar7 = 0x32b2;
                FUN_32b2_7191();
                uVar5 = extraout_DX_02;
                if (!(bool)uVar8 && !(bool)uVar9) {
                  FUN_32b2_6d9b();
                  FUN_32b2_6cc6();
                  uVar7 = 0x32b2;
                  FUN_32b2_7191();
                  uVar5 = extraout_DX_03;
                  if ((bool)uVar8) {
                    local_c = *(undefined2 *)0x93c6;
                    local_e = *(undefined2 *)0x93c4;
                    local_10 = *(undefined2 *)0x93c2;
                    local_12 = *(undefined2 *)0x93c0;
                    local_14 = *(undefined2 *)0x93c6;
                    local_16 = *(undefined2 *)0x93c4;
                    local_18 = *(undefined2 *)0x93c2;
                    local_1a = *(undefined2 *)0x93c0;
                    local_1c = *(undefined2 *)0x93ce;
                    local_1e = *(undefined2 *)0x93cc;
                    local_20 = *(undefined2 *)0x93ca;
                    local_22 = *(undefined2 *)0x93c8;
                    local_24 = 3;
                    local_26 = local_40;
                    local_28 = 0x32b2;
                    uStack_2a = 0xf518;
                    FUN_32b2_6cc6();
                    local_28 = 0x32b2;
                    uStack_2a = 0xf51d;
                    FUN_32b2_7258();
                    local_30 = 0x32b2;
                    local_32 = 0xf527;
                    FUN_32b2_6eb1();
                    local_30 = 0x32b2;
                    local_32 = 0xf52f;
                    FUN_32b2_6cc6();
                    local_30 = 0x32b2;
                    local_32 = -0xacc;
                    FUN_32b2_7258();
                    local_38 = 0x32b2;
                    local_3a = 0xf53e;
                    FUN_32b2_6eb1();
                    local_38 = 0x32b2;
                    local_3a = 0xf546;
                    FUN_32b2_6cc6();
                    local_38 = 0x32b2;
                    local_3a = 0xf54b;
                    FUN_32b2_7258();
                    FUN_32b2_6eb1();
                    local_40 = 0x32b2;
                    FUN_1def_1eaf();
                    uVar8 = (undefined1 *)0xffc7 < &local_3e;
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar7 = 0x32b2;
                    FUN_32b2_7191();
                    uVar5 = extraout_DX_04;
                    if ((!(bool)uVar8) && (local_e._1_1_ == '\a')) {
                      local_c = *(undefined2 *)0x93c6;
                      local_e = *(undefined2 *)0x93c4;
                      local_10 = *(undefined2 *)0x93c2;
                      local_12 = *(undefined2 *)0x93c0;
                      local_14 = *(undefined2 *)0x93c6;
                      local_16 = *(undefined2 *)0x93c4;
                      local_18 = *(undefined2 *)0x93c2;
                      local_1a = *(undefined2 *)0x93c0;
                      local_1c = *(undefined2 *)0x93ce;
                      local_1e = *(undefined2 *)0x93cc;
                      local_20 = *(undefined2 *)0x93ca;
                      local_22 = *(undefined2 *)0x93c8;
                      local_24 = 3;
                      local_26 = 0;
                      local_28 = *(int *)0x93e6;
                      uStack_2a = *(undefined2 *)0x93e4;
                      local_2c = *(undefined2 *)0x93e2;
                      uStack_2e = *(undefined2 *)0x93e0;
                      local_30 = 0x32b2;
                      local_32 = 0xf5cf;
                      FUN_32b2_6cc6();
                      local_30 = 0x32b2;
                      local_32 = -0xa2c;
                      FUN_32b2_7258();
                      local_38 = 0x32b2;
                      local_3a = 0xf5de;
                      FUN_32b2_6eb1();
                      local_38 = 0x32b2;
                      local_3a = 0xf5e6;
                      FUN_32b2_6cc6();
                      local_38 = 0x32b2;
                      local_3a = 0xf5eb;
                      FUN_32b2_7258();
                      FUN_32b2_6eb1();
                      local_40 = 0x32b2;
                      uVar7 = 0x1def;
                      FUN_1def_1eaf();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_3a = local_3a + 1;
  } while( true );
}


