/* 2bb4:5913 */

void FUN_2bb4_5913(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_BP;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 auStack_30 [2];
  undefined2 uStack_2c;
  undefined2 auStack_28 [6];
  undefined2 auStack_1a [9];
  int iStack_8;
  int iStack_6;
  int iStack_4;
  int iStack_2;
  
  uVar3 = *(undefined2 *)(unaff_BP + -0x76);
  *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + -0x78);
  *(undefined2 *)(unaff_BP + -0x88) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x7e);
  *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)(unaff_BP + -0x80);
  *(undefined2 *)(unaff_BP + -0x8c) = uVar3;
  iStack_2 = unaff_BP + -0x96;
  iStack_4 = unaff_BP + -0x92;
  iStack_6 = unaff_BP + -0x8e;
  iStack_8 = unaff_BP + -0x8a;
  puVar5 = auStack_28;
  puVar6 = (undefined2 *)(unaff_BP + -0x54);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  uStack_2c = 0x1496;
  puVar6 = auStack_28;
  iVar4 = FUN_2bb4_55b8();
  if (iVar4 != 0) {
    uVar3 = *(undefined2 *)(unaff_BP + -0x88);
    *(undefined2 *)(unaff_BP + -0x1e) = *(undefined2 *)(unaff_BP + -0x8a);
    *(undefined2 *)(unaff_BP + -0x1c) = uVar3;
    uVar3 = *(undefined2 *)(unaff_BP + -0x8c);
    *(undefined2 *)(unaff_BP + -0x1a) = *(undefined2 *)(unaff_BP + -0x8e);
    *(undefined2 *)(unaff_BP + -0x18) = uVar3;
    uVar3 = *(undefined2 *)(unaff_BP + -0x90);
    *(undefined2 *)(unaff_BP + -0x16) = *(undefined2 *)(unaff_BP + -0x92);
    *(undefined2 *)(unaff_BP + -0x14) = uVar3;
    uVar3 = *(undefined2 *)(unaff_BP + -0x94);
    *(undefined2 *)(unaff_BP + -0x12) = *(undefined2 *)(unaff_BP + -0x96);
    *(undefined2 *)(unaff_BP + -0x10) = uVar3;
    uVar3 = *(undefined2 *)(unaff_BP + -0x76);
    *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + -0x78);
    *(undefined2 *)(unaff_BP + -0x88) = uVar3;
    uVar3 = *(undefined2 *)(unaff_BP + -0x7e);
    *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)(unaff_BP + -0x80);
    *(undefined2 *)(unaff_BP + -0x8c) = uVar3;
    iStack_2 = unaff_BP + -0x96;
    iStack_4 = unaff_BP + -0x92;
    iStack_6 = unaff_BP + -0x8e;
    iStack_8 = unaff_BP + -0x8a;
    puVar5 = (undefined2 *)(unaff_BP + -0x74);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    uStack_2c = 0x151b;
    iVar4 = FUN_2bb4_55b8();
    uVar7 = 0;
    uVar8 = iVar4 == 0;
    if (!(bool)uVar8) {
      iStack_2 = 0x2bb4;
      iStack_4 = 0x152e;
      FUN_32b2_6cc6();
      iStack_2 = 0x32b2;
      iStack_4 = 0x1536;
      FUN_32b2_6e4b();
      iStack_2 = 0x32b2;
      iStack_4 = 0x153e;
      FUN_32b2_6ef9();
      uVar3 = *(undefined2 *)(unaff_BP + -0x90);
      *(undefined2 *)(unaff_BP + -0x2c) = *(undefined2 *)(unaff_BP + -0x92);
      *(undefined2 *)(unaff_BP + -0x2a) = uVar3;
      uVar3 = *(undefined2 *)(unaff_BP + -0x94);
      *(undefined2 *)(unaff_BP + -0x28) = *(undefined2 *)(unaff_BP + -0x96);
      *(undefined2 *)(unaff_BP + -0x26) = uVar3;
      iStack_2 = 0x32b2;
      iStack_4 = 0x1563;
      FUN_32b2_6cc6();
      iStack_2 = 0x32b2;
      iStack_4 = 0x156b;
      FUN_32b2_6e4b();
      iStack_2 = 0x32b2;
      iStack_4 = 0x1573;
      FUN_32b2_7035();
      iStack_2 = 0x32b2;
      iStack_4 = 0x1578;
      FUN_32b2_6fc7();
      iStack_2 = 0x32b2;
      iStack_4 = 0x1580;
      FUN_32b2_6e4b();
      iStack_2 = 0x32b2;
      iStack_4 = 0x1588;
      FUN_32b2_6ef9();
      iStack_2 = 0x32b2;
      iStack_4 = 0x1590;
      FUN_32b2_6cc6();
      iStack_2 = 0x32b2;
      iStack_4 = 0x1598;
      FUN_32b2_701d();
      iStack_2 = 0x32b2;
      iStack_4 = 0x159d;
      FUN_32b2_6fc7();
      iStack_2 = 0x32b2;
      iStack_4 = 0x15a5;
      FUN_32b2_6e4b();
      iStack_2 = 0x32b2;
      iStack_4 = 0x15ad;
      FUN_32b2_6ef9();
      iStack_2 = 0x32b2;
      iStack_4 = 0x15b6;
      FUN_32b2_6d14();
      iStack_2 = 0x32b2;
      iStack_4 = 0x15be;
      FUN_32b2_6cc6();
      iStack_2 = 0x32b2;
      iStack_4 = 0x15c3;
      FUN_32b2_7258();
      iStack_2 = 0x32b2;
      iStack_4 = 0x15c8;
      FUN_32b2_7191();
      if ((bool)uVar7 || (bool)uVar8) {
        iStack_2 = 0x32b2;
        iStack_4 = 0x15d3;
        FUN_32b2_6d14();
        iStack_2 = 0x32b2;
        iStack_4 = 0x15db;
        FUN_32b2_6cc6();
        iStack_2 = 0x32b2;
        iStack_4 = 0x15e0;
        FUN_32b2_7258();
        iStack_2 = 0x32b2;
        iStack_4 = 0x15e5;
        FUN_32b2_7191();
        if ((bool)uVar7 || (bool)uVar8) {
          iStack_2 = 0x32b2;
          iStack_4 = 0x15ef;
          FUN_32b2_6cc6();
          iStack_2 = 0x32b2;
          iStack_4 = 0x15f7;
          FUN_32b2_701d();
          iStack_2 = 0x32b2;
          iStack_4 = 0x1600;
          FUN_32b2_704d();
          iStack_2 = 0x32b2;
          iStack_4 = 0x1608;
          FUN_32b2_7095();
                    /* WARNING: Subroutine does not return */
          iStack_2 = 0x32b2;
          iStack_4 = 0x1610;
          FUN_32b2_6e63();
        }
      }
      iStack_2 = unaff_BP + -0x84;
      iStack_4 = unaff_BP + -0x7c;
      puVar5 = auStack_1a;
      puVar6 = (undefined2 *)(unaff_BP + -0x34);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      puVar5 = auStack_30;
      puVar6 = (undefined2 *)(unaff_BP + -0x1e);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      iVar4 = FUN_3ab8_4c91();
      uVar7 = 0;
      uVar8 = iVar4 == 0;
      if ((bool)uVar8) {
        iStack_2 = 0x32b2;
        iStack_4 = 0x167b;
        FUN_32b2_6d14();
        iStack_2 = 0x32b2;
        iStack_4 = 0x1683;
        FUN_32b2_6cc6();
        iStack_2 = 0x32b2;
        iStack_4 = 0x1688;
        FUN_32b2_7258();
        iStack_2 = 0x32b2;
        iStack_4 = 0x168d;
        FUN_32b2_7191();
        if ((bool)uVar7 || (bool)uVar8) {
          iStack_2 = 0x32b2;
          iStack_4 = 0x1698;
          FUN_32b2_6d14();
          iStack_2 = 0x32b2;
          iStack_4 = 0x16a0;
          FUN_32b2_6cc6();
          iStack_2 = 0x32b2;
          iStack_4 = 0x16a5;
          FUN_32b2_7258();
          iStack_2 = 0x32b2;
          iStack_4 = 0x16aa;
          FUN_32b2_7191();
          if ((bool)uVar7 || (bool)uVar8) {
            iStack_2 = 0x32b2;
            iStack_4 = 0x16b7;
            FUN_32b2_6cc6();
            iStack_2 = 0x32b2;
            iStack_4 = 0x16bf;
            FUN_32b2_701d();
            iStack_2 = 0x32b2;
            iStack_4 = 0x16c8;
            FUN_32b2_704d();
            iStack_2 = 0x32b2;
            iStack_4 = 0x16d0;
            FUN_32b2_7095();
                    /* WARNING: Subroutine does not return */
            iStack_2 = 0x32b2;
            iStack_4 = 0x16d8;
            FUN_32b2_6e63();
          }
        }
        FUN_2bb4_589c();
        return;
      }
      FUN_2bb4_5bc2();
      return;
    }
  }
  FUN_2bb4_589c();
  return;
}


