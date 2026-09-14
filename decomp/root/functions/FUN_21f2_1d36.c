/* 21f2:1d36 */

undefined2 __cdecl16far FUN_21f2_1d36(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  code *pcVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  undefined2 unaff_DS;
  undefined1 uVar13;
  char cVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  byte bStack001e;
  byte bStack001f;
  undefined1 uStack0021;
  undefined1 in_stack_00000022;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  FUN_32b2_02bc();
  if (bStack001f < 0x5a) {
    uStack_8 = 0x32b2;
    uStack_a = 0x3c75;
    FUN_32b2_6d14();
    uStack_8 = 0x32b2;
    uStack_a = 0x3c7d;
    FUN_32b2_6cc6();
    uStack_8 = 0x32b2;
    uStack_a = 0x3c82;
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_7410();
    uVar13 = (undefined1 *)0xfff7 < &uStack_e;
    uVar15 = &stack0x0000 == (undefined1 *)0x6;
    uStack_8 = 0x32b2;
    uStack_a = 0x3c9b;
    FUN_32b2_6d14();
    uStack_8 = 0x32b2;
    uStack_a = 0x3ca0;
    FUN_32b2_7191();
    if ((bool)uVar13 || (bool)uVar15) {
      uStack_8 = 0x32b2;
      uStack_a = 0x3cab;
      FUN_32b2_6d14();
      uStack_8 = 0x32b2;
      uStack_a = 0x3cb3;
      FUN_32b2_6cc6();
      uStack_8 = 0x32b2;
      uStack_a = 0x3cb8;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_7410();
      uVar13 = (undefined1 *)0xfff7 < &uStack_e;
      uVar15 = &stack0x0000 == (undefined1 *)0x6;
      uStack_8 = 0x32b2;
      uStack_a = 0x3cd1;
      FUN_32b2_6d14();
      uStack_8 = 0x32b2;
      uStack_a = 0x3cd6;
      FUN_32b2_7191();
      if ((bool)uVar13 || (bool)uVar15) {
        uStack_8 = 0x32b2;
        uStack_a = 0x3ce1;
        FUN_32b2_6d14();
        uStack_8 = 0x32b2;
        uStack_a = 0x3ce9;
        FUN_32b2_6cc6();
        uStack_8 = 0x32b2;
        uStack_a = 0x3cee;
        FUN_32b2_7191();
        if ((bool)uVar13 || (bool)uVar15) {
          uStack_8 = 0x32b2;
          uStack_a = 0x3cf9;
          FUN_32b2_6d14();
          uStack_8 = 0x32b2;
          uStack_a = 0x3d01;
          FUN_32b2_6cc6();
          uStack_8 = 0x32b2;
          uStack_a = 0x3d06;
          FUN_32b2_7191();
          if (((!(bool)uVar13 && !(bool)uVar15) && (bStack001f < 9)) && (bStack001e < 0x13))
          goto LAB_21f2_1df9;
        }
      }
    }
    uVar12 = 0;
  }
  else {
LAB_21f2_1df9:
    uVar12 = 0x32b2;
    uVar4 = *(uint *)0x14c;
    iVar10 = *(int *)0x14e;
    puVar1 = (uint *)0x14c;
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)0x14e = *(int *)0x14e + (uint)(0xfffe < uVar3);
    if ((*(int *)0x142 <= iVar10) && ((*(int *)0x142 < iVar10 || (*(uint *)0x140 <= uVar4)))) {
      uStack_8 = *(undefined2 *)0x150;
      uStack_a = *(undefined2 *)0x152;
      uStack_c = *(undefined2 *)0x14e;
      uStack_e = *(undefined2 *)0x14c;
      cVar14 = *(uint *)0xc0ac < *(uint *)0xbefa;
      pcVar7 = (code *)swi(0x3f);
      uVar16 = (*pcVar7)(*(undefined2 *)0x148,*(undefined2 *)0x14a);
      iVar10 = (int)((ulong)uVar16 >> 0x10);
      if (CONCAT11((char)((ulong)uVar16 >> 8),((char)uVar16 + 'O') - cVar14) == -1) {
        piVar2 = (int *)0x14c;
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        *(int *)0x14e = *(int *)0x14e - (uint)(iVar9 == 0);
        uStack_8 = 0x32b2;
        uVar12 = 0x1885;
        uStack_a = 0x3d72;
        FUN_1885_23aa();
        uStack_8 = 0x62c;
        uStack_a = 0x1885;
        uStack_c = 0x3d7a;
        FUN_21f2_26d3();
      }
    }
    *(undefined1 *)0xd14 = 2;
    uStack0021 = 0;
    in_stack_00000022 = 0;
    uStack_8 = *(undefined2 *)0x14e;
    uStack_a = *(undefined2 *)0x14c;
    uStack_e = 0x3d95;
    uStack_c = uVar12;
    puVar8 = (undefined2 *)FUN_1000_0271();
    puVar11 = (undefined2 *)&stack0x0004;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar6 = puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar6 = *puVar5;
    }
    uVar12 = 1;
  }
  return uVar12;
}


