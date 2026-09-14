/* 2bb4:34a0 */

undefined2 __cdecl16far FUN_2bb4_34a0(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 in_DX;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  char in_stack_0000000c;
  byte bStack000e;
  int local_14;
  undefined2 local_e;
  undefined2 uStack_c;
  byte bVar10;
  
  FUN_32b2_02bc();
  _bStack000e = _bStack000e ^ (byte)((*(char *)0xb49c != '\0') << 4 ^ bStack000e) & 0x10;
  *(undefined1 *)0xb49c = 0;
  if (*(int *)0x146 <= *(int *)0x152) {
    uStack_c = *(undefined2 *)0x14e;
    local_e = *(undefined2 *)0x14c;
    cVar7 = *(uint *)0xc0ac < *(uint *)0xbefa;
    pcVar3 = (code *)swi(0x3f);
    uVar9 = (*pcVar3)(*(undefined2 *)0x148,*(undefined2 *)0x14a);
    in_DX = (undefined2)((ulong)uVar9 >> 0x10);
    if (CONCAT11((char)((ulong)uVar9 >> 8),((char)uVar9 + 'O') - cVar7) == -1) {
      FUN_1885_23aa();
      uStack_c = 0xf047;
      FUN_21f2_26d3();
    }
  }
  if (*(int *)0xa62 == 0xe) {
    for (local_14 = 1; local_14 <= *(int *)0x152; local_14 = local_14 + 1) {
      uStack_c = 0xf069;
      puVar4 = (undefined2 *)FUN_1000_03ef();
      puVar6 = &local_e;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      bVar10 = (byte)((uint)unaff_SI >> 8);
      uVar8 = bVar10 == 6;
      if (bVar10 < 7) {
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        in_DX = extraout_DX;
        if ((bool)uVar8) {
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          in_DX = extraout_DX_00;
          if (((bool)uVar8) && ((char)unaff_SI == in_stack_0000000c)) {
            return 0;
          }
        }
      }
    }
  }
  puVar6 = &local_e;
  puVar4 = (undefined2 *)&stack0x0004;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(int *)0x152 = *(int *)0x152 + 1;
  uStack_c = 0xf0d8;
  puVar4 = (undefined2 *)FUN_1000_03ef();
  puVar6 = &local_e;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)0xd14 = 2;
  return *(undefined2 *)0x152;
}


