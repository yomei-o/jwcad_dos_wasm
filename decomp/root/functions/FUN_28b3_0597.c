/* 28b3:0597 */

undefined2 * __cdecl16far FUN_28b3_0597(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 in_DX;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  int unaff_DS;
  undefined2 local_1e [7];
  uint local_10;
  undefined2 local_e;
  int local_c;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  
  FUN_32b2_02bc();
  if (((*(int *)0x150 < param_1) || (param_1 < 1)) || (*(int *)0x150 < 1)) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    *(undefined1 *)0xd14 = 2;
    local_c = 0x90f9;
    puVar4 = (undefined2 *)FUN_1000_0398();
    puVar5 = (undefined2 *)&stack0xffe0;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    local_c = 0xbf48;
    local_e = 0x1000;
    local_10 = -0x6ee8;
    FUN_28b3_0064();
    local_c = 0x9124;
    iVar7 = FUN_32b2_21c4();
    iVar7 = iVar7 + 1;
    puVar12 = (undefined1 *)CONCAT22(local_e,(undefined1 *)(iVar7 + local_10));
    while (puVar11 = (undefined1 *)puVar12, puVar11 < (undefined1 *)*(uint *)0xc0ac) {
      uVar9 = (undefined2)((ulong)puVar12 >> 0x10);
      puVar11[-iVar7] = *puVar12;
      puVar12 = (undefined1 *)CONCAT22(uVar9,puVar11 + 1);
    }
    uVar9 = *(undefined2 *)0xc0ae;
    local_c = *(int *)0xc0ac - iVar7;
    local_e = 0x32b2;
    local_10 = 0x9162;
    FUN_28b3_0037();
    while (param_1 < *(int *)0x150) {
      local_c = 0x9175;
      puVar4 = (undefined2 *)FUN_1000_0398();
      local_c = 0x9186;
      uVar8 = uVar9;
      puVar5 = (undefined2 *)FUN_1000_0398();
      for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      uVar9 = uVar8;
      param_1 = unaff_DS + 1;
    }
    for (iVar10 = 1; iVar10 < *(int *)0x150; iVar10 = iVar10 + 1) {
      local_c = 0x91af;
      iVar6 = FUN_1000_0398();
      if (local_10 < *(uint *)(iVar6 + 0x10)) {
        local_c = 0x91c5;
        iVar6 = FUN_1000_0398();
        *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) - iVar7;
      }
    }
    *(int *)0xc0ac = *(int *)0xc0ac - iVar7;
    local_10 = *(undefined2 *)0xc0ac;
    uVar9 = *(undefined2 *)0xc0ae;
    local_c = 0x91f9;
    local_e = uVar9;
    puVar3 = (undefined2 *)FUN_1000_0398();
    puVar5 = (undefined2 *)&stack0xffe0;
    puVar4 = puVar3;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    if ((byte)local_c < 0x5a) {
      puVar4 = local_1e;
      puVar5 = (undefined2 *)&stack0xffe0;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      puVar3 = (undefined2 *)FUN_28b3_0a63(0x1000);
    }
    *(int *)0x150 = *(int *)0x150 + -1;
  }
  return puVar3;
}


