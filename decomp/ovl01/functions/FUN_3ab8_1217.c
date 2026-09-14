/* 3ab8:1217 */

void FUN_3ab8_1217(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  int unaff_BP;
  int iVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar9;
  undefined1 in_ZF;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 auStack_8 [4];
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_2 = 0x3ab8;
  uStack_4 = 0xbda0;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbda8;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbdb0;
  func_0x00029b6d();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbdb9;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbdc2;
  func_0x00029b6d();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbdc7;
  FUN_28b3_1163();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbdd0;
  func_0x0002996b();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbdd5;
  FUN_28b3_1181();
  if ((bool)in_CF || (bool)in_ZF) {
    FUN_3ab8_1185();
    return;
  }
  uStack_2 = 0x22b2;
  uStack_4 = 0xbde3;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbde8;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  FUN_28b3_1582(0x22b2);
  uVar9 = (undefined1 *)0xfff7 < auStack_8;
  uVar10 = &stack0x0000 == (undefined1 *)0x0;
  uStack_2 = 0x22b2;
  uStack_4 = 0xbe01;
  func_0x00029834();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbe0a;
  func_0x00029983();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbe13;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbe1b;
  func_0x0002996b();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbe24;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbe2d;
  FUN_28b3_100d();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbe36;
  func_0x0002996b();
  uStack_2 = 0x22b2;
  uVar8 = 0x22b2;
  uStack_4 = 0xbe3b;
  FUN_28b3_1181();
  if (!(bool)uVar9 && !(bool)uVar10) {
    uStack_2 = 0x22b2;
    uStack_4 = 0xbe48;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xbe51;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uVar8 = 0x22b2;
    uStack_4 = 0xbe56;
    FUN_28b3_1181();
    if ((bool)uVar9) {
      uStack_2 = 0x22b2;
      uStack_4 = 0xbe6b;
      func_0x000297e6();
      uStack_2 = 0x22b2;
      uStack_4 = 0xbe74;
      func_0x000297e6();
      uStack_2 = 0x22b2;
      uStack_4 = 0xbe7d;
      func_0x00029b6d();
      uStack_2 = 0x22b2;
      uStack_4 = 0xbe82;
      FUN_28b3_117c();
      uStack_2 = 0x22b2;
      uStack_4 = 0xbe8b;
      func_0x0002996b();
      uStack_2 = 0x22b2;
      uStack_4 = 0xbe93;
      FUN_28b3_0ee9();
      uStack_2 = 0x22b2;
      uStack_4 = 0xbe9c;
      func_0x000297e6();
      uStack_2 = 0x22b2;
      uStack_4 = 0xbea1;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      FUN_28b3_117c(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      uVar8 = 0xdef;
      uVar11 = FUN_1000_0718(0x22b2,*(undefined2 *)0x9454,*(undefined2 *)0x9456,
                             *(undefined2 *)0x9458,*(undefined2 *)0x945a,*(undefined2 *)0x9454,
                             *(undefined2 *)0x9456,*(undefined2 *)0x9458,*(undefined2 *)0x945a);
      *(undefined2 *)(unaff_BP + -0x76) = (int)uVar11;
      *(undefined2 *)(unaff_BP + -0x74) = (int)((ulong)uVar11 >> 0x10);
      if (*(int *)(unaff_BP + -0x94) == 0) {
        uVar4 = *(uint *)(unaff_BP + -0x34);
        uVar5 = *(uint *)(unaff_BP + -0x32);
        if ((uVar5 < *(uint *)(unaff_BP + -0x36)) ||
           ((uVar5 <= *(uint *)(unaff_BP + -0x36) && (uVar4 <= *(uint *)(unaff_BP + -0x38))))) {
          uVar4 = *(uint *)(unaff_BP + -0x76);
          uVar5 = *(uint *)(unaff_BP + -0x74);
          if ((uVar5 <= *(uint *)(unaff_BP + -0x36)) &&
             ((*(uint *)(unaff_BP + -0x36) != uVar5 || (uVar4 <= *(uint *)(unaff_BP + -0x38))))) {
            uVar1 = *(uint *)(unaff_BP + -0x32);
            uVar10 = uVar1 == uVar5;
            if (uVar1 <= uVar5) {
              uVar9 = 1;
              if (uVar1 < uVar5) goto LAB_3ab8_13fe;
              uVar5 = *(uint *)(unaff_BP + -0x34);
              uVar9 = uVar5 < uVar4;
              uVar10 = uVar5 == uVar4;
              if (uVar5 <= uVar4) goto LAB_3ab8_13fe;
            }
          }
        }
        else {
          uVar1 = *(uint *)(unaff_BP + -0x76);
          uVar2 = *(uint *)(unaff_BP + -0x74);
          uVar9 = *(uint *)(unaff_BP + -0x36) < uVar2;
          uVar10 = *(uint *)(unaff_BP + -0x36) == uVar2;
          if (!(bool)uVar9 && !(bool)uVar10) goto LAB_3ab8_13fe;
          if (!(bool)uVar9) {
            uVar9 = *(uint *)(unaff_BP + -0x38) < uVar1;
            uVar10 = *(uint *)(unaff_BP + -0x38) == uVar1;
            if (!(bool)uVar9) goto LAB_3ab8_13fe;
          }
          uVar10 = uVar5 == uVar2;
          if (uVar5 <= uVar2) {
            uVar9 = 1;
            if (uVar5 < uVar2) goto LAB_3ab8_13fe;
            uVar9 = uVar4 < uVar1;
            uVar10 = uVar4 == uVar1;
            if (uVar4 <= uVar1) goto LAB_3ab8_13fe;
          }
        }
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x76);
      uVar3 = *(undefined2 *)(unaff_BP + -0x74);
      *(int *)(unaff_BP + -0x8c) = *(int *)(unaff_BP + -0x8c) + 1;
      uVar9 = *(int *)(unaff_BP + -0x8c) << 1 < 0;
      iVar7 = *(int *)(unaff_BP + -0x8c) * 4;
      uVar10 = iVar7 == 0;
      *(undefined2 *)(unaff_BP + iVar7 + -0xd2) = uVar6;
      *(undefined2 *)(unaff_BP + iVar7 + -0xd0) = uVar3;
    }
    else {
      uVar9 = 0;
    }
  }
LAB_3ab8_13fe:
  uStack_4 = 0xbf87;
  uStack_2 = uVar8;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbf90;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbf99;
  func_0x00029bb5();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbfa2;
  func_0x0002996b();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbfa7;
  FUN_28b3_1181();
  if ((bool)uVar9 || (bool)uVar10) {
    FUN_3ab8_1185();
    return;
  }
  uStack_2 = 0x22b2;
  uStack_4 = 0xbfb4;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbfbd;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbfc2;
  FUN_28b3_1181();
  if (!(bool)uVar9) {
    FUN_3ab8_1185();
    return;
  }
  uStack_2 = 0x22b2;
  uStack_4 = 0xbfd7;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbfe0;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbfe9;
  func_0x00029b6d();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbfee;
  FUN_28b3_117c();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbff7;
  func_0x0002996b();
  uStack_2 = 0x22b2;
  uStack_4 = 0xbfff;
  FUN_28b3_0ee9();
  uStack_2 = 0x22b2;
  uStack_4 = 0xc008;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xc00d;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x0002996b(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  uVar11 = FUN_1000_0718(0x22b2,*(undefined2 *)0x9454,*(undefined2 *)0x9456,*(undefined2 *)0x9458,
                         *(undefined2 *)0x945a,*(undefined2 *)0x9454,*(undefined2 *)0x9456,
                         *(undefined2 *)0x9458,*(undefined2 *)0x945a);
  *(undefined2 *)(unaff_BP + -0x76) = (int)uVar11;
  *(undefined2 *)(unaff_BP + -0x74) = (int)((ulong)uVar11 >> 0x10);
  if (*(int *)(unaff_BP + -0x94) == 0) {
    uVar4 = *(uint *)(unaff_BP + -0x32);
    if ((uVar4 < *(uint *)(unaff_BP + -0x36)) ||
       ((uVar4 <= *(uint *)(unaff_BP + -0x36) &&
        (*(uint *)(unaff_BP + -0x34) <= *(uint *)(unaff_BP + -0x38))))) {
      uVar4 = *(uint *)(unaff_BP + -0x74);
      if ((uVar4 <= *(uint *)(unaff_BP + -0x36)) &&
         (((*(uint *)(unaff_BP + -0x36) != uVar4 ||
           (*(uint *)(unaff_BP + -0x76) <= *(uint *)(unaff_BP + -0x38))) &&
          (*(uint *)(unaff_BP + -0x32) <= uVar4)))) {
        if (*(uint *)(unaff_BP + -0x32) < uVar4) {
          FUN_3ab8_1185();
          return;
        }
        if (*(uint *)(unaff_BP + -0x34) <= *(uint *)(unaff_BP + -0x76)) {
          FUN_3ab8_1185();
          return;
        }
      }
    }
    else {
      uVar5 = *(uint *)(unaff_BP + -0x74);
      if (uVar5 < *(uint *)(unaff_BP + -0x36)) {
        FUN_3ab8_1185();
        return;
      }
      if ((uVar5 <= *(uint *)(unaff_BP + -0x36)) &&
         (*(uint *)(unaff_BP + -0x76) <= *(uint *)(unaff_BP + -0x38))) {
        FUN_3ab8_1185();
        return;
      }
      if (uVar4 <= uVar5) {
        if (uVar4 < uVar5) {
          FUN_3ab8_1185();
          return;
        }
        if (*(uint *)(unaff_BP + -0x34) <= *(uint *)(unaff_BP + -0x76)) {
          FUN_3ab8_1185();
          return;
        }
      }
    }
  }
  uVar8 = *(undefined2 *)(unaff_BP + -0x76);
  uVar6 = *(undefined2 *)(unaff_BP + -0x74);
  *(int *)(unaff_BP + -0x8c) = *(int *)(unaff_BP + -0x8c) + 1;
  iVar7 = *(int *)(unaff_BP + -0x8c) * 4;
  *(undefined2 *)(unaff_BP + iVar7 + -0xd2) = uVar8;
  *(undefined2 *)(unaff_BP + iVar7 + -0xd0) = uVar6;
  FUN_3ab8_1185();
  return;
}


