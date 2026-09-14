/* 2bb4:5ed9 */

/* WARNING: Removing unreachable block (ram,0x00031c65) */

undefined2 __cdecl16far FUN_2bb4_5ed9(int param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 in_DX;
  undefined1 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 unaff_SS;
  undefined1 uVar9;
  undefined1 uVar10;
  int local_4c;
  undefined1 local_4a [16];
  uint local_3a;
  int local_38;
  undefined1 local_36 [8];
  uint local_2e;
  undefined1 *local_2c;
  undefined2 local_2a;
  int local_28;
  undefined2 local_26 [6];
  uint local_1a;
  uint local_18;
  int local_16;
  uint local_14;
  int local_12;
  uint local_10;
  undefined1 *local_e;
  undefined1 *puStack_c;
  
  FUN_32b2_02bc();
  puStack_c = (undefined1 *)0x32b2;
  uVar8 = 0x1000;
  local_e = (undefined1 *)0x1a31;
  puVar3 = (undefined2 *)FUN_1000_0271();
  puVar7 = local_26;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  if (10000 < local_1a) {
    FUN_32b2_7285();
    FUN_32b2_704d();
    FUN_32b2_7258();
    FUN_32b2_710c();
    uVar8 = 0x32b2;
    FUN_32b2_6e63();
  }
  if ((local_18 == local_14) && (local_16 == local_12)) {
    FUN_32b2_6cc6();
    FUN_32b2_701d();
    FUN_32b2_6e63();
    FUN_32b2_6cc6();
    FUN_32b2_701d();
    FUN_32b2_6e63();
    FUN_32b2_6cc6();
    FUN_32b2_7095();
    FUN_32b2_6e63();
    FUN_32b2_6cc6();
    FUN_32b2_7095();
    FUN_32b2_6e63();
    uVar4 = 0;
  }
  else {
    puStack_c = local_4a;
    local_e = local_36;
    local_10 = param_2;
    local_12 = param_1;
    local_16 = 0x1b1e;
    local_14 = uVar8;
    FUN_2bb4_5bf3();
    uVar9 = (undefined1 *)0xfff3 < &local_12;
    uVar10 = &stack0x0000 == (undefined1 *)0x6;
    FUN_32b2_6d14();
    FUN_32b2_6d14();
    FUN_32b2_7191();
    if ((bool)uVar9 || (bool)uVar10) {
      FUN_32b2_6d14();
      FUN_32b2_6e63();
    }
    else {
      FUN_32b2_6d14();
      FUN_32b2_6e63();
    }
    FUN_32b2_6d14();
    FUN_32b2_6e63();
    FUN_32b2_6d14();
    FUN_32b2_6d14();
    FUN_32b2_7191();
    if ((bool)uVar9 || (bool)uVar10) {
      FUN_32b2_6d14();
      FUN_32b2_6e63();
    }
    else {
      FUN_32b2_6d14();
      FUN_32b2_6e63();
    }
    FUN_32b2_6d14();
    FUN_32b2_6e63();
    puVar6 = local_e + (uint)CARRY2(local_10,local_18) + local_16;
    puStack_c = (undefined1 *)0x32b2;
    local_e = (undefined1 *)0x1bcb;
    local_2e = FUN_2bb4_63ae();
    iVar5 = (int)local_e + local_12 + (uint)CARRY2(local_10,local_14);
    puStack_c = (undefined1 *)0x32b2;
    local_e = (undefined1 *)0x1be5;
    local_2c = puVar6;
    local_3a = FUN_2bb4_63ae();
    local_38 = iVar5;
    for (local_4c = 0; local_4c < 0x10f; local_4c = local_4c + 0x5a) {
      local_2a = 0;
      local_28 = local_4c;
      if ((((local_38 < (int)local_2c) || ((local_38 <= (int)local_2c && (local_3a <= local_2e))))
          || (((int)local_2c <= local_4c &&
              ((((int)local_2c < local_4c || (local_2e == 0)) &&
               ((local_4c < local_38 || (local_4c <= local_38)))))))) &&
         (((int)local_2c < local_38 ||
          ((((((int)local_2c <= local_38 && (local_2e <= local_3a)) || ((int)local_2c < local_4c))
            || (((int)local_2c <= local_4c && (local_2e == 0)))) ||
           ((local_4c < local_38 || (local_4c <= local_38)))))))) {
        if (local_4c == 0) {
          FUN_32b2_6cc6();
          FUN_32b2_7095();
          FUN_32b2_6e63();
        }
        if (local_4c == 0x5a) {
          FUN_32b2_6cc6();
          FUN_32b2_7095();
          FUN_32b2_6e63();
        }
        if (local_4c == 0xb4) {
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6e63();
        }
        if (local_4c == 0x10e) {
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6e63();
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


