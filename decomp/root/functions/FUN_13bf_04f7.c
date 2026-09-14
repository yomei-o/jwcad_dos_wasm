/* 13bf:04f7 */

undefined2 __cdecl16far FUN_13bf_04f7(int *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 local_20;
  uint local_1e;
  int local_1c;
  int local_1a;
  uint local_18;
  int local_16;
  uint local_14;
  uint local_12;
  int local_10;
  undefined2 local_e;
  uint *local_c;
  uint *local_a;
  int *local_8;
  int *local_6;
  
  local_6 = (int *)0x40f2;
  FUN_32b2_02bc();
  local_1c = 9999;
  local_1e = 0xffff;
  local_e = 0x32b2;
  do {
    local_6 = &local_1a;
    local_8 = &local_16;
    local_a = &local_18;
    local_c = &local_12;
    local_10 = 0x4112;
    FUN_1885_546d();
    if ((local_12 == 0) && (local_18 == 0)) {
      local_6 = (int *)0x1885;
      local_8 = (int *)0x4137;
      FUN_2b6e_0033();
      local_6 = (int *)0x2b6e;
      uVar4 = 0x21f2;
      local_8 = (int *)0x413c;
      FUN_21f2_1ef9();
      uVar1 = *(undefined2 *)0xc30;
      local_20 = *(undefined2 *)0xc32;
      local_a = (uint *)*(int *)0xc48;
      local_e = *(undefined2 *)0xc4c;
      local_c = (uint *)*(int *)0xc4e;
      local_6 = (int *)0x21f2;
      local_8 = (int *)0x4167;
      FUN_13bf_000c();
      for (local_14 = 0; local_6 = (int *)uVar4, (int)local_14 < 5; local_14 = local_14 + 1) {
        local_8 = (int *)0x41a0;
        FUN_32b2_6d14();
        uVar5 = (int)(local_14 << 1) < 0;
        uVar6 = (local_14 & 0x3fff) == 0;
        local_6 = (int *)0x32b2;
        local_8 = (int *)0x41b0;
        FUN_32b2_6cc6();
        local_6 = (int *)0x32b2;
        local_8 = (int *)0x41b5;
        FUN_32b2_7258();
        local_6 = (int *)0x32b2;
        local_8 = (int *)0x41ba;
        FUN_32b2_7191();
        if (!(bool)uVar5 && !(bool)uVar6) {
          local_6 = &local_1a;
          local_8 = &local_16;
          local_a = &local_18;
          local_c = &local_12;
          local_e = 0x32b2;
          local_10 = 0x41d7;
          FUN_32b2_6cc6();
          local_e = 0x32b2;
          local_10 = 0x41dc;
          FUN_32b2_7258();
          local_16 = 0x32b2;
          local_18 = 0x41e6;
          FUN_32b2_6eb1();
          local_16 = 0x32b2;
          local_18 = 0x41fa;
          FUN_32b2_6cc6();
          local_16 = 0x32b2;
          local_18 = 0x41ff;
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          local_1e = 0x32b2;
          local_20 = 0x4217;
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_13bf_03fb();
          if (((((int)local_12 <= param_2) && (param_2 <= local_16)) && (param_3 <= (int)local_18))
             && (local_1a <= param_3)) {
            local_12 = local_12 + ((int)(local_16 - local_12) / 2 - param_2);
            local_18 = local_18 + ((int)(local_1a - local_18) / 2 - param_3);
            local_10 = ((local_12 ^ (int)local_12 >> 0xf) - ((int)local_12 >> 0xf)) +
                       ((local_18 ^ (int)local_18 >> 0xf) - ((int)local_18 >> 0xf));
            if (local_10 < local_1c) {
              local_1e = local_14;
              local_1c = local_10;
            }
          }
        }
        uVar4 = 0x32b2;
      }
      *(undefined2 *)0xc30 = uVar1;
      *(undefined2 *)0xc32 = local_20;
      *(int *)0xc48 = (int)local_a;
      *(int *)0xc4a = (int)local_8;
      *(undefined2 *)0xc4c = local_e;
      *(int *)0xc4e = (int)local_c;
      if (*param_1 == 2) {
        if ((int)local_1e < 0) {
          local_14 = 4;
          do {
            iVar3 = local_14 * 4;
            uVar4 = *(undefined2 *)(iVar3 + 0xc62);
            *(undefined2 *)(iVar3 + 0xc64) = *(undefined2 *)(iVar3 + 0xc60);
            *(undefined2 *)(iVar3 + 0xc66) = uVar4;
            uVar4 = *(undefined2 *)(iVar3 + 0xc76);
            *(undefined2 *)(iVar3 + 0xc78) = *(undefined2 *)(iVar3 + 0xc74);
            *(undefined2 *)(iVar3 + 0xc7a) = uVar4;
            uVar4 = *(undefined2 *)(iVar3 + 0xc8a);
            *(undefined2 *)(iVar3 + 0xc8c) = *(undefined2 *)(iVar3 + 0xc88);
            *(undefined2 *)(iVar3 + 0xc8e) = uVar4;
            local_14 = local_14 - 1;
          } while (0 < (int)local_14);
          local_1e = 0;
        }
        iVar3 = local_1e * 4;
        *(undefined2 *)(iVar3 + 0xc64) = uVar1;
        *(undefined2 *)(iVar3 + 0xc66) = local_20;
        *(int *)(iVar3 + 0xc78) = (int)local_a;
        *(int *)(iVar3 + 0xc7a) = (int)local_8;
        *(undefined2 *)(iVar3 + 0xc8c) = local_e;
        *(int *)(iVar3 + 0xc8e) = (int)local_c;
        local_8 = (int *)0x435d;
        FUN_13bf_0a34();
        *(undefined2 *)0xc30 = uVar1;
        *(undefined2 *)0xc32 = local_20;
        *(int *)0xc48 = (int)local_a;
        *(undefined2 *)0xc4a = local_8;
        *(undefined2 *)0xc4c = local_e;
        *(int *)0xc4e = (int)local_c;
      }
      else {
        uVar1 = *(undefined2 *)0xc32;
        *(undefined2 *)0xca6 = *(undefined2 *)0xc30;
        *(undefined2 *)0xca8 = uVar1;
        uVar1 = *(undefined2 *)0xc4a;
        *(undefined2 *)0xcaa = *(undefined2 *)0xc48;
        *(undefined2 *)0xcac = uVar1;
        uVar1 = *(undefined2 *)0xc4e;
        *(undefined2 *)0xcae = *(undefined2 *)0xc4c;
        *(undefined2 *)0xcb0 = uVar1;
        if ((int)local_1e < 0) {
          uVar1 = *(undefined2 *)0x90b6;
          *(undefined2 *)0xc30 = *(undefined2 *)0x90b4;
          *(undefined2 *)0xc32 = uVar1;
          uVar1 = *(undefined2 *)0x9084;
          uVar2 = *(undefined2 *)0x9086;
          *(undefined2 *)0xc48 = uVar1;
          *(undefined2 *)0xc4a = uVar2;
          *(undefined2 *)0xc4c = uVar1;
          *(undefined2 *)0xc4e = uVar2;
          if (*(char *)0x130 != '\0') {
            local_8 = (int *)0x43fc;
            FUN_32b2_6d9b();
            local_6 = (int *)0x32b2;
            local_8 = (int *)0x440e;
            FUN_32b2_6d9b();
            local_6 = (int *)0x32b2;
            local_8 = (int *)0x4413;
            FUN_32b2_7182();
            local_6 = (int *)0x32b2;
            local_8 = (int *)0x441c;
            FUN_32b2_704d();
            local_6 = (int *)0x32b2;
            local_8 = (int *)0x4433;
            FUN_32b2_6d9b();
            local_6 = (int *)0x32b2;
            local_8 = (int *)0x4438;
            FUN_32b2_7173();
            local_6 = (int *)0x32b2;
            uVar4 = 0x32b2;
            local_8 = (int *)0x4441;
            FUN_32b2_6e63();
          }
        }
        else {
          iVar3 = local_1e * 4;
          uVar1 = *(undefined2 *)(iVar3 + 0xc66);
          *(undefined2 *)0xc30 = *(undefined2 *)(iVar3 + 0xc64);
          *(undefined2 *)0xc32 = uVar1;
          uVar1 = *(undefined2 *)(iVar3 + 0xc7a);
          *(undefined2 *)0xc48 = *(undefined2 *)(iVar3 + 0xc78);
          *(undefined2 *)0xc4a = uVar1;
          uVar1 = *(undefined2 *)(iVar3 + 0xc8e);
          *(undefined2 *)0xc4c = *(undefined2 *)(iVar3 + 0xc8c);
          *(undefined2 *)0xc4e = uVar1;
        }
        local_6 = (int *)0x0;
        local_a = (uint *)0x447f;
        local_8 = (int *)uVar4;
        FUN_21f2_27eb();
      }
      return 1;
    }
    local_e = 0x1885;
  } while ((local_12 == 0) || (local_18 == 0));
  return 0;
}


