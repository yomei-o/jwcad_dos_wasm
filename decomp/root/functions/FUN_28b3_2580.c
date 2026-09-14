/* 28b3:2580 */

undefined2 __cdecl16far FUN_28b3_2580(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_DS;
  char cVar10;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000016;
  uint in_stack_0000001a;
  
  FUN_32b2_02bc();
  in_stack_0000001a =
       in_stack_0000001a ^
       ((byte)((byte)(((uint)(*(char *)0xb49c != '\0') << 0xb) >> 8) ^ in_stack_0000001a._1_1_) & 8)
       << 8;
  *(undefined1 *)0xb49c = 0;
  iVar5 = FUN_28b3_00fe(in_stack_00000014,in_stack_00000016);
  uVar6 = (*(int *)0xc0ac - *(int *)0xbefa) + iVar5 + 1;
  uVar3 = *(uint *)0x150;
  cVar10 = *(uint *)0x144 < uVar3;
  if (((int)*(uint *)0x144 <= (int)uVar3) ||
     (cVar10 = uVar6 < *(uint *)0x166, *(uint *)0x166 < uVar6)) {
    *(undefined1 *)0x11d7 = 1;
    pcVar4 = (code *)swi(0x3f);
    uVar7 = (*pcVar4)(*(undefined2 *)0x148,*(undefined2 *)0x14a,*(undefined2 *)0x14c,
                      *(undefined2 *)0x14e,*(undefined2 *)0x152,uVar3 + 1);
    if (CONCAT11((char)((uint)uVar7 >> 8),((char)uVar7 + 'O') - cVar10) == -1) {
      FUN_1885_23aa();
      FUN_21f2_26d3(0x62c);
    }
  }
  *(undefined1 *)0xd14 = 2;
  *(int *)0x150 = *(int *)0x150 + 1;
  iVar5 = *(int *)0xc0ac;
  FUN_28b3_00cf(iVar5,*(undefined2 *)0xc0ae,in_stack_00000014,in_stack_00000016);
  in_stack_00000014 = *(undefined2 *)0xc0ac;
  uVar7 = *(undefined2 *)0xc0ae;
  *(int *)0xc0ac = *(int *)0xc0ac + iVar5;
  in_stack_0000001a = in_stack_0000001a & 0x20;
  in_stack_00000016 = uVar7;
  puVar8 = (undefined2 *)FUN_1000_0398(*(undefined2 *)0x150);
  puVar9 = (undefined2 *)&stack0x0004;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    puVar1 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar2 = *puVar1;
  }
  return 1;
}


