/* 2bb4:3aea */

int __cdecl16far FUN_2bb4_3aea(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 extraout_DX;
  undefined2 uVar5;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  int local_24;
  int local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  
  FUN_32b2_02bc();
  local_10 = 0;
  FUN_32b2_6cc6();
  FUN_32b2_7065();
  FUN_32b2_6e63();
  FUN_32b2_6d14();
  FUN_32b2_6e63();
  FUN_32b2_6d14();
  FUN_32b2_6e63();
  uVar5 = extraout_DX;
  for (local_24 = 1; local_24 <= *(int *)0x152; local_24 = local_24 + 1) {
    uStack_c = 0xf69e;
    puVar3 = (undefined2 *)FUN_1000_03ef();
    puVar6 = &local_e;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    if (*(char *)0xb8c == '\0') {
      uStack_c = 0xf683;
      iVar4 = FUN_21f2_06d1();
    }
    else {
      uStack_c = 0xf6c3;
      iVar4 = FUN_21f2_0680();
    }
    if (iVar4 != 0) {
      uVar7 = 0;
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_718c();
      FUN_32b2_6e4b();
      FUN_32b2_7191();
      uVar5 = extraout_DX_00;
      if ((bool)uVar7) {
        FUN_32b2_6cc6();
        FUN_32b2_6e63();
        uVar5 = extraout_DX_01;
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        local_10 = local_24;
      }
    }
  }
  return local_10;
}


