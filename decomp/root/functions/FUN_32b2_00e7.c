/* 32b2:00e7 */

/* WARNING: Instruction at (ram,0x00032c6e) overlaps instruction at (ram,0x00032c6d)
    */

void __cdecl16far FUN_32b2_00e7(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined2 in_AX;
  int iVar6;
  uint extraout_DX;
  int in_BX;
  int iVar7;
  int unaff_SI;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_ES;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar11;
  undefined1 uVar12;
  
  uVar10 = 0x32b2;
  FUN_32b2_0294();
  FUN_32b2_05af(in_AX);
  uVar12 = *(int *)0x8eaa == -0x292a;
  if ((bool)uVar12) {
    uVar10 = 0x3000;
    (*(code *)*(undefined2 *)0x8eae)();
  }
  (*(code *)*(undefined2 *)0x79fc)(uVar10,0xff);
  if ((bool)uVar12) {
    pcVar1 = (char *)(in_BX + unaff_SI + 0x3500);
    *pcVar1 = *pcVar1 + (char)((uint)in_BX >> 8);
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    *(int *)0x7a26 = in_BX;
    *(undefined2 *)0x7a28 = unaff_ES;
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    if (*(int *)0x8ebc == 0) goto LAB_32b2_0159;
    bVar11 = false;
    (*(code *)*(undefined2 *)0x8eba)();
    if (bVar11) {
      FUN_32b2_02b6();
      return;
    }
    unaff_DS = (undefined2)((ulong)*(undefined4 *)0x8ec2 >> 0x10);
  }
  (*(code *)*(undefined2 *)0x8eba)(0x3000);
LAB_32b2_0159:
  iVar7 = *(int *)0x2c;
  if (iVar7 != 0) {
    pbVar9 = (byte *)0x0;
    do {
      if (*pbVar9 == 0) break;
      iVar6 = 0xd;
      pbVar8 = (byte *)0x7a18;
      bVar11 = false;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar4 = pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar2 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar11 = *pbVar2 == *pbVar4;
      } while (bVar11);
      if (bVar11) {
        pbVar8 = (byte *)0x7a43;
        goto LAB_32b2_018e;
      }
      iVar6 = 0x7fff;
      bVar11 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar2 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar11 = *pbVar2 == 0;
      } while (!bVar11);
    } while (bVar11);
  }
LAB_32b2_01a2:
  iVar7 = 4;
  do {
    bVar11 = false;
    *(byte *)(iVar7 + 0x7a43) = *(byte *)(iVar7 + 0x7a43) & 0xbf;
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    if ((!bVar11) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar7 + 0x7a43) = *(byte *)(iVar7 + 0x7a43) | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  FUN_32b2_0281();
  FUN_32b2_0281();
  return;
LAB_32b2_018e:
  pbVar2 = pbVar9;
  pbVar3 = pbVar9 + 1;
  if (*pbVar2 < 0x41) goto LAB_32b2_01a2;
  pbVar9 = pbVar9 + 2;
  if (*pbVar3 < 0x41) goto LAB_32b2_01a2;
  pbVar4 = pbVar8;
  pbVar8 = pbVar8 + 1;
  *pbVar4 = *pbVar3 + 0xbf | (*pbVar2 + 0xbf) * '\x10';
  goto LAB_32b2_018e;
}


