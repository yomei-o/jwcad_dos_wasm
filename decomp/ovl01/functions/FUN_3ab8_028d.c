/* 3ab8:028d */

undefined2 __cdecl16far FUN_3ab8_028d(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int unaff_BP;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined4 uVar8;
  
  *(undefined2 *)(unaff_BP + -0x14) = 0;
  func_0x0000c3ca(0x3ab8);
  *(undefined2 *)(unaff_BP + -0xc) = 1;
  *(undefined2 *)(unaff_BP + -10) = 0;
  uVar6 = 0x885;
  while( true ) {
    iVar4 = *(int *)(unaff_BP + -10);
    if ((*(int *)0x14a < iVar4) ||
       ((*(int *)0x14a <= iVar4 && (*(uint *)0x148 < *(uint *)(unaff_BP + -0xc))))) break;
    uVar5 = 0;
    uVar8 = func_0x0000013f(uVar6,*(uint *)(unaff_BP + -0xc),iVar4);
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar4 = (int)uVar8;
    *(int *)(unaff_BP + -4) = iVar4;
    *(undefined2 *)(unaff_BP + -2) = uVar6;
    if ((*(byte *)(iVar4 + 0x14) & 2) != 0) {
      bVar3 = *(byte *)(iVar4 + 0x12) >> 4;
      *(uint *)(unaff_BP + -0x16) = (uint)bVar3;
      func_0x000297e6(0);
      uVar7 = bVar3 == 0;
      func_0x000297e6(0x22b2);
      uVar5 = 0x22b2;
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar7) {
        *(undefined2 *)(unaff_BP + -0x14) = 1;
      }
    }
    puVar1 = (uint *)(unaff_BP + -0xc);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + (uint)(0xfffe < uVar2);
    uVar6 = uVar5;
  }
  *(undefined2 *)(unaff_BP + -0xc) = 1;
  *(undefined2 *)(unaff_BP + -10) = 0;
  while( true ) {
    iVar4 = *(int *)(unaff_BP + -10);
    if ((*(int *)0x14e < iVar4) ||
       ((*(int *)0x14e <= iVar4 && (*(uint *)0x14c < *(uint *)(unaff_BP + -0xc))))) break;
    uVar5 = 0;
    uVar8 = func_0x00000271(uVar6,*(uint *)(unaff_BP + -0xc),iVar4);
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar4 = (int)uVar8;
    *(int *)(unaff_BP + -0x12) = iVar4;
    *(undefined2 *)(unaff_BP + -0x10) = uVar6;
    if ((*(byte *)(iVar4 + 0x1e) & 2) != 0) {
      bVar3 = *(byte *)(iVar4 + 0x1c) >> 4;
      *(uint *)(unaff_BP + -0x16) = (uint)bVar3;
      func_0x000297e6(0);
      uVar7 = bVar3 == 0;
      func_0x000297e6(0x22b2);
      uVar5 = 0x22b2;
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar7) {
        *(undefined2 *)(unaff_BP + -0x14) = 1;
      }
    }
    puVar1 = (uint *)(unaff_BP + -0xc);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + (uint)(0xfffe < uVar2);
    uVar6 = uVar5;
  }
  *(undefined2 *)(unaff_BP + -0xe) = 1;
  while (*(int *)(unaff_BP + -0xe) <= *(int *)0x150) {
    uVar5 = 0;
    uVar8 = func_0x00000398(uVar6,*(undefined2 *)(unaff_BP + -0xe));
    if ((*(byte *)((int)uVar8 + 0x16) & 2) != 0) {
      uVar8 = func_0x00000398(0,*(undefined2 *)(unaff_BP + -0xe));
      *(uint *)(unaff_BP + -0x16) = (uint)(*(byte *)((int)uVar8 + 0x15) >> 4);
      func_0x000297e6(0);
      uVar7 = (*(uint *)(unaff_BP + -0x16) & 0x3fff) == 0;
      func_0x000297e6(0x22b2);
      uVar5 = 0x22b2;
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar7) {
        *(undefined2 *)(unaff_BP + -0x14) = 1;
      }
    }
    *(int *)(unaff_BP + -0xe) = *(int *)(unaff_BP + -0xe) + 1;
    uVar6 = uVar5;
  }
  *(undefined2 *)(unaff_BP + -0xe) = 1;
  while (*(int *)(unaff_BP + -0xe) <= *(int *)0x152) {
    uVar5 = 0;
    uVar8 = func_0x000003ef(uVar6,*(undefined2 *)(unaff_BP + -0xe));
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar4 = (int)uVar8;
    *(int *)(unaff_BP + -8) = iVar4;
    *(undefined2 *)(unaff_BP + -6) = uVar6;
    if ((*(byte *)(iVar4 + 10) & 2) != 0) {
      bVar3 = *(byte *)(iVar4 + 8) >> 4;
      *(uint *)(unaff_BP + -0x16) = (uint)bVar3;
      func_0x000297e6(0);
      uVar7 = bVar3 == 0;
      func_0x000297e6(0x22b2);
      uVar5 = 0x22b2;
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar7) {
        *(undefined2 *)(unaff_BP + -0x14) = 1;
      }
    }
    *(int *)(unaff_BP + -0xe) = *(int *)(unaff_BP + -0xe) + 1;
    uVar6 = uVar5;
  }
  if (*(int *)(unaff_BP + -0x14) != 0) {
    func_0x00012276(uVar6,0x1dc);
    FUN_21f2_3454(unaff_BP + -0x7c,0x214b,0x676,0x522);
    iVar4 = FUN_1def_0904(0x22b2,1,unaff_BP + -0x7c,unaff_BP + -0x82,unaff_BP + -0x86,
                          unaff_BP + -0x18);
    *(int *)(unaff_BP + -0x7e) = iVar4;
    if ((*(int *)0x158 == 0) &&
       (((iVar4 == -1 || (iVar4 == 2)) || (*(int *)(unaff_BP + -0x18) == 2)))) {
      return 0xffff;
    }
  }
  return 0;
}


