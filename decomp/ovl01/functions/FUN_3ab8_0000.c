/* 3ab8:0000 */

undefined2 __cdecl16far FUN_3ab8_0000(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined2 *puVar13;
  undefined2 in_stack_00000014;
  byte in_stack_00000016;
  byte in_stack_00000018;
  undefined2 auStack_1e [5];
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  uVar12 = in_stack_00000014._1_1_ == 0x5a;
  if (in_stack_00000014._1_1_ < 0x5a) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar12) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12) {
        return 0;
      }
    }
  }
  uVar11 = 0x22b2;
  uVar3 = *(uint *)0x148;
  iVar7 = *(int *)0x14a;
  puVar1 = (uint *)0x148;
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(int *)0x14a = *(int *)0x14a + (uint)(0xfffe < uVar8);
  if ((*(int *)0x13e <= iVar7) && ((*(int *)0x13e < iVar7 || (*(uint *)0x13c <= uVar3)))) {
    uStack_c = *(undefined2 *)0x14e;
    uStack_e = *(undefined2 *)0x14c;
    uStack_10 = *(undefined2 *)0x14a;
    uStack_12 = *(undefined2 *)0x148;
    iStack_14 = *(int *)0xc0ac - *(int *)0xbefa;
    pcVar6 = (code *)swi(0x3f);
    iVar7 = (*pcVar6)();
    if (iVar7 != 0) {
      piVar2 = (int *)0x148;
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      *(int *)0x14a = *(int *)0x14a - (uint)(iVar7 == 0);
      func_0x0000abfa();
      uVar11 = 0x11f2;
      uStack_c = 0xac29;
      FUN_13bf_0a03();
    }
  }
  *(undefined1 *)0xd14 = 2;
  in_stack_00000018 = in_stack_00000018 & 0xe0;
  uStack_e = 0xac40;
  uStack_c = uVar11;
  puVar13 = (undefined2 *)func_0x0000013f();
  puVar9 = (undefined2 *)puVar13;
  puVar10 = (undefined2 *)&stack0x0004;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar5 = puVar9;
    puVar9 = puVar9 + 1;
    puVar4 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar5 = *puVar4;
  }
  uVar8 = (uint)in_stack_00000016;
  uStack_c = 0;
  uStack_e = 0xac68;
  FUN_13bf_0a80();
  uStack_c = 0x11f2;
  uStack_e = 0xac77;
  puVar13 = (undefined2 *)func_0x0000013f();
  puVar9 = (undefined2 *)puVar13;
  puVar10 = (undefined2 *)&stack0x0004;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar5 = puVar10;
    puVar10 = puVar10 + 1;
    puVar4 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar5 = *puVar4;
  }
  puVar9 = auStack_1e;
  puVar10 = (undefined2 *)&stack0x0004;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar4 = puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar4 = *puVar13;
  }
  func_0x00018396(0);
  if (*(char *)(uVar8 + 0xb4a6) == '\0') {
    *(undefined1 *)(uVar8 + 0xb4a6) = 1;
    uStack_c = 0xacb9;
    func_0x0000b1d8();
    uStack_c = 0xacc2;
    func_0x0000daa6();
  }
  return 1;
}


