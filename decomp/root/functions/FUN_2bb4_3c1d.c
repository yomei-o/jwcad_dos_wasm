/* 2bb4:3c1d */

void __cdecl16far FUN_2bb4_3c1d(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 in_DX;
  undefined2 uVar6;
  undefined2 unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  
  FUN_32b2_02bc();
  if ((0 < param_1) && (param_1 <= *(int *)0x152)) {
    uStack_c = 0xf783;
    FUN_1885_5256();
    uStack_c = 0xf78c;
    puVar3 = (undefined2 *)FUN_1000_03ef();
    puVar4 = &local_e;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    if ((byte)((uint)unaff_SI >> 8) < 0x5a) {
      uStack_c = 0x1000;
      local_e = 0xf7ad;
      FUN_2bb4_3645();
    }
    for (local_10 = param_1; local_10 < *(int *)0x152; local_10 = local_10 + 1) {
      uStack_c = 0xf7bf;
      puVar3 = (undefined2 *)FUN_1000_03ef();
      uStack_c = 0xf7d0;
      uVar6 = in_DX;
      puVar4 = (undefined2 *)FUN_1000_03ef();
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      in_DX = uVar6;
    }
    uStack_c = 0xf7f0;
    puVar3 = (undefined2 *)FUN_1000_03ef();
    puVar4 = &local_e;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined1 *)0xd14 = 2;
    *(int *)0x152 = *(int *)0x152 + -1;
  }
  return;
}


