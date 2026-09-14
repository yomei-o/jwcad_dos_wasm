/* 2bb4:5883 */

undefined2 __cdecl16far FUN_2bb4_5883(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  int local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76 [16];
  undefined2 local_56 [14];
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 local_36 [2];
  undefined2 local_32;
  undefined2 local_2e [6];
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *puStack_e;
  undefined2 *puStack_c;
  
  FUN_32b2_02bc();
  if ((param_2 < 0) && (param_4 < 0)) {
    local_88 = 0;
    FUN_32b2_6d14();
    FUN_32b2_6e63();
    FUN_32b2_6d14();
    FUN_32b2_6e63();
    iVar5 = -(param_2 + (uint)(param_1 != 0));
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x141b;
    puVar3 = (undefined2 *)FUN_1000_0271();
    puVar6 = local_56;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    iVar5 = -(param_4 + (uint)(param_3 != 0));
    puStack_c = (undefined2 *)0x1000;
    puStack_e = (undefined2 *)0x1441;
    puVar3 = (undefined2 *)FUN_1000_0271();
    puVar6 = local_76;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    do {
      local_8c = local_7a;
      local_8a = local_78;
      local_90 = local_82;
      local_8e = local_80;
      puStack_c = &local_90;
      puStack_e = &local_8c;
      puVar3 = local_2e;
      puVar7 = local_2e;
      puVar6 = local_56;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      local_32 = 0x1496;
      iVar4 = FUN_2bb4_55b8();
      if (iVar4 == 0) {
        return 0;
      }
      local_20 = local_8c;
      local_1e = local_8a;
      local_1c = local_90;
      local_1a = local_8e;
      local_8c = local_7a;
      local_8a = local_78;
      local_90 = local_82;
      local_8e = local_80;
      puStack_c = &local_90;
      puStack_e = &local_8c;
      puVar6 = local_76;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      local_32 = 0x151b;
      iVar4 = FUN_2bb4_55b8();
      uVar8 = 0;
      uVar9 = iVar4 == 0;
      if ((bool)uVar9) {
        return 0;
      }
      FUN_32b2_6cc6();
      FUN_32b2_6e4b();
      FUN_32b2_6ef9();
      FUN_32b2_6cc6();
      FUN_32b2_6e4b();
      FUN_32b2_7035();
      FUN_32b2_6fc7();
      FUN_32b2_6e4b();
      FUN_32b2_6ef9();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_6e4b();
      FUN_32b2_6ef9();
      FUN_32b2_6d14();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_7191();
      if ((bool)uVar8 || (bool)uVar9) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if ((bool)uVar8 || (bool)uVar9) {
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_704d();
          FUN_32b2_7095();
          FUN_32b2_6e63();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_704d();
          FUN_32b2_7095();
          FUN_32b2_6e63();
          return 1;
        }
      }
      puVar3 = &local_20;
      puVar6 = local_36;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      puVar3 = local_36;
      puVar6 = &local_20;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      uStack_38 = 0x32b2;
      uStack_3a = 0x1668;
      iVar4 = FUN_3ab8_4c91();
      uVar8 = 0;
      uVar9 = iVar4 == 0;
      if ((bool)uVar9) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if (!(bool)uVar8 && !(bool)uVar9) {
          return 0;
        }
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if (!(bool)uVar8 && !(bool)uVar9) {
          return 0;
        }
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6e63();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6e63();
      }
      local_7a = local_7e;
      local_78 = local_7c;
      local_82 = local_86;
      local_80 = local_84;
      local_88 = local_88 + 1;
    } while (local_88 < 0x19);
  }
  return 0;
}


