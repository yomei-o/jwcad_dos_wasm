/* 21f2:66b3 */

undefined2 __cdecl16far FUN_21f2_66b3(int param_1,undefined2 *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  code *pcVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char cVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined2 local_18 [2];
  int local_14;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  byte bVar16;
  
  FUN_32b2_02bc();
  puVar9 = local_18;
  puVar8 = param_2;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar6 = puVar9;
    puVar9 = puVar9 + 1;
    puVar5 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar6 = *puVar5;
  }
  bVar16 = (byte)((uint)unaff_SS >> 8);
  uVar14 = bVar16 == 0x5a;
  if (bVar16 < 0x5a) {
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7191();
    if ((bool)uVar14) {
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191();
      if ((bool)uVar14) {
        return 0;
      }
    }
  }
  uVar12 = 0x32b2;
  uVar4 = *(uint *)0x148;
  iVar10 = *(int *)0x14a;
  puVar1 = (uint *)0x148;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(int *)0x14a = *(int *)0x14a + (uint)(0xfffe < uVar3);
  if ((*(int *)0x13e <= iVar10) && ((*(int *)0x13e < iVar10 || (*(uint *)0x13c <= uVar4)))) {
    *(undefined1 *)0x11d7 = 1;
    local_c = *(undefined2 *)0x14e;
    uStack_e = *(undefined2 *)0x14c;
    local_10 = *(undefined2 *)0x14a;
    uStack_12 = *(undefined2 *)0x148;
    cVar13 = *(uint *)0xc0ac < *(uint *)0xbefa;
    local_14 = *(uint *)0xc0ac - *(uint *)0xbefa;
    pcVar7 = (code *)swi(0x3f);
    uVar15 = (*pcVar7)();
    iVar10 = (int)((ulong)uVar15 >> 0x10);
    if (CONCAT11((char)((ulong)uVar15 >> 8),((char)uVar15 + 'O') - cVar13) != 0) {
      if (param_1 != 0) {
        local_c = 2;
        uStack_e = 0x12;
        local_10 = 0x62c;
        uStack_12 = 0x32b2;
        local_14 = 0x8694;
        FUN_1def_23c5();
        *(undefined2 *)0xc22 = 2;
        return 0xffff;
      }
      piVar2 = (int *)0x148;
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      *(int *)0x14a = *(int *)0x14a - (uint)(iVar11 == 0);
      uVar12 = 0x1885;
      FUN_1885_23aa();
      local_c = 0x86b9;
      FUN_21f2_26d3();
    }
  }
  *(undefined1 *)0xd14 = 2;
  uStack_e = 0x86d1;
  local_c = uVar12;
  puVar8 = (undefined2 *)FUN_1000_013f();
  puVar9 = local_18;
  for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar6 = puVar8;
    puVar8 = puVar8 + 1;
    puVar5 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar6 = *puVar5;
  }
  local_c = 0x1000;
  uStack_e = 0x86f0;
  FUN_21f2_2750();
  local_c = 0x1000;
  uStack_e = 0x86ff;
  puVar9 = (undefined2 *)FUN_1000_013f();
  for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar6 = param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar6 = *puVar5;
  }
  return 1;
}


