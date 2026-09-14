/* 3ab8:157d */

undefined2 FUN_3ab8_157d(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int unaff_BP;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  
  uVar5 = 0x3ab8;
  if (*(int *)(unaff_BP + -0x8c) < 1) {
    uVar5 = FUN_3ab8_1212();
    return uVar5;
  }
  *(undefined2 *)(unaff_BP + -0xf4) = 1;
  if (*(int *)(unaff_BP + -0x94) == 0) {
    *(undefined2 *)(unaff_BP + -0xf4) = 0;
    uVar6 = *(uint *)(unaff_BP + -0x38);
    uVar8 = *(uint *)(unaff_BP + -0x36);
    *(uint *)(unaff_BP + -0xd2) = uVar6;
    *(uint *)(unaff_BP + -0xd0) = uVar8;
    uVar4 = *(uint *)(unaff_BP + -0x34);
    uVar9 = *(uint *)(unaff_BP + -0x32);
    *(int *)(unaff_BP + -0x8c) = *(int *)(unaff_BP + -0x8c) + 1;
    iVar11 = *(int *)(unaff_BP + -0x8c) * 4;
    *(uint *)(unaff_BP + iVar11 + -0xd2) = uVar4;
    *(uint *)(unaff_BP + iVar11 + -0xd0) = uVar9;
    if ((uVar9 <= uVar8) && ((uVar8 != uVar9 || (uVar4 < uVar6)))) {
      *(uint *)(unaff_BP + iVar11 + -0xd2) = uVar4;
      *(int *)(unaff_BP + iVar11 + -0xd0) = uVar9 + 0x168;
      *(undefined2 *)(unaff_BP + -0x8e) = 1;
      while (*(int *)(unaff_BP + -0x8e) < *(int *)(unaff_BP + -0x8c)) {
        iVar11 = *(int *)(unaff_BP + -0x8e) * 4;
        uVar6 = *(uint *)(unaff_BP + iVar11 + -0xd0);
        if ((uVar6 <= *(uint *)(unaff_BP + -0x32)) &&
           ((uVar6 < *(uint *)(unaff_BP + -0x32) ||
            (*(uint *)(unaff_BP + iVar11 + -0xd2) < *(uint *)(unaff_BP + -0x34))))) {
          puVar2 = (undefined2 *)(unaff_BP + iVar11 + -0xd2);
          *puVar2 = *puVar2;
          piVar1 = (int *)(unaff_BP + iVar11 + -0xd0);
          *piVar1 = *piVar1 + 0x168;
        }
        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
      }
    }
  }
  *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)(unaff_BP + -0xf4);
  while (*(int *)(unaff_BP + -0x8e) < *(int *)(unaff_BP + -0x8c)) {
    *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x8e) + 1;
    while (*(int *)(unaff_BP + -0x96) <= *(int *)(unaff_BP + -0x8c)) {
      iVar10 = *(int *)(unaff_BP + -0x8e) * 4;
      uVar6 = *(uint *)(unaff_BP + iVar10 + -0xd2);
      iVar11 = *(int *)(unaff_BP + iVar10 + -0xd0);
      iVar13 = *(int *)(unaff_BP + -0x96) * 4;
      iVar7 = *(int *)(unaff_BP + iVar13 + -0xd0);
      if ((iVar7 <= iVar11) && ((iVar7 < iVar11 || (*(uint *)(unaff_BP + iVar13 + -0xd2) < uVar6))))
      {
        *(uint *)(unaff_BP + -0x76) = uVar6;
        *(int *)(unaff_BP + -0x74) = iVar11;
        uVar18 = *(undefined2 *)(unaff_BP + iVar13 + -0xd0);
        *(undefined2 *)(unaff_BP + iVar10 + -0xd2) = *(undefined2 *)(unaff_BP + iVar13 + -0xd2);
        *(undefined2 *)(unaff_BP + iVar10 + -0xd0) = uVar18;
        uVar18 = *(undefined2 *)(unaff_BP + -0x74);
        *(undefined2 *)(unaff_BP + iVar13 + -0xd2) = *(undefined2 *)(unaff_BP + -0x76);
        *(undefined2 *)(unaff_BP + iVar13 + -0xd0) = uVar18;
      }
      *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + 1;
    }
    *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
  }
  if (*(int *)(unaff_BP + -0x94) != 0) {
    uVar18 = *(undefined2 *)(unaff_BP + -0xce);
    uVar19 = *(undefined2 *)(unaff_BP + -0xcc);
    *(int *)(unaff_BP + -0x8c) = *(int *)(unaff_BP + -0x8c) + 1;
    iVar11 = *(int *)(unaff_BP + -0x8c) * 4;
    *(undefined2 *)(unaff_BP + iVar11 + -0xd2) = uVar18;
    *(undefined2 *)(unaff_BP + iVar11 + -0xd0) = uVar19;
  }
  *(undefined2 *)(unaff_BP + -0x72) = 0;
  *(undefined2 *)(unaff_BP + -0x96) = *(undefined2 *)(unaff_BP + -0xf4);
  do {
    iVar11 = *(int *)(unaff_BP + -0x96);
    if (*(int *)(unaff_BP + -0x8c) <= iVar11) {
      return *(undefined2 *)(unaff_BP + -0x72);
    }
    puVar14 = (undefined2 *)(unaff_BP + -0x70);
    puVar12 = (undefined2 *)(unaff_BP + -0x46);
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = puVar14;
      puVar14 = puVar14 + 1;
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar3 = *puVar2;
    }
    iVar11 = iVar11 * 4;
    uVar17 = func_0x00021eee(uVar5,*(undefined2 *)(unaff_BP + iVar11 + -0xd2),
                             *(undefined2 *)(unaff_BP + iVar11 + -0xd0));
    *(undefined2 *)(unaff_BP + -0x62) = (int)uVar17;
    *(undefined2 *)(unaff_BP + -0x60) = (int)((ulong)uVar17 >> 0x10);
    uVar19 = 0x1bb4;
    uVar5 = 0x1bb4;
    uVar18 = 0xc4ff;
    uVar17 = func_0x00021eee(0x1bb4,*(undefined2 *)(unaff_BP + iVar11 + -0xce),
                             *(undefined2 *)(unaff_BP + iVar11 + -0xcc));
    uVar8 = (uint)((ulong)uVar17 >> 0x10);
    uVar6 = (uint)uVar17;
    *(uint *)(unaff_BP + -0x5e) = uVar6;
    *(uint *)(unaff_BP + -0x5c) = uVar8;
    if ((uVar6 != *(uint *)(unaff_BP + -0x62)) || (uVar8 != *(uint *)(unaff_BP + -0x60))) {
      if (uVar8 < *(uint *)(unaff_BP + -0x60)) {
        uVar5 = FUN_3ab8_16c3();
        return uVar5;
      }
      if ((uVar8 <= *(uint *)(unaff_BP + -0x60)) && (uVar6 <= *(uint *)(unaff_BP + -0x62))) {
        uVar5 = FUN_3ab8_16c3();
        return uVar5;
      }
      *(uint *)(unaff_BP + -0x76) = uVar6;
      *(uint *)(unaff_BP + -0x74) = uVar8;
      uVar8 = (uVar8 - *(int *)(unaff_BP + -0x60)) - (uint)(uVar6 < *(uint *)(unaff_BP + -0x62));
      uVar9 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT12((uVar8 & 1) != 0,uVar6 - *(uint *)(unaff_BP + -0x62)) >> 1);
      uVar6 = (uint)CARRY2(uVar4,*(uint *)(unaff_BP + -0x62));
      uVar8 = uVar9 + *(uint *)(unaff_BP + -0x60);
      uVar15 = CARRY2(uVar9,*(uint *)(unaff_BP + -0x60)) || CARRY2(uVar8,uVar6);
      iVar11 = uVar8 + uVar6;
      uVar16 = iVar11 == 0;
      *(int *)(unaff_BP + -0x76) = uVar4 + *(uint *)(unaff_BP + -0x62);
      *(int *)(unaff_BP + -0x74) = iVar11;
      func_0x000298b4(0x1bb4);
      func_0x00029b6d(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029983(0x22b2);
      func_0x00029834(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar15 && !(bool)uVar16) {
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x00029bfc(0x22b2);
        func_0x00029983(0x22b2);
      }
      uVar5 = 0xc2cf;
      func_0x000297e6(0x22b2);
      func_0x000299d1(0x22b2,uVar18,uVar19,uVar5);
      func_0x0002a11e(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029983(0x22b2);
      uVar5 = 0xc301;
      func_0x000297e6(0x22b2);
      func_0x000299d1(0x22b2,uVar18,uVar19,uVar5);
      func_0x0002a10c(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029983(0x22b2);
      *(undefined2 *)(unaff_BP + -0x1e) = 1;
      *(undefined2 *)(unaff_BP + -0x8e) = 0;
      while (*(int *)(unaff_BP + -0x8e) < 4) {
        uVar15 = *(int *)(unaff_BP + -0x8e) << 1 < 0;
        func_0x000297e6(0x22b2);
        FUN_28b3_100d(0x22b2);
        func_0x0002996b(0x22b2);
        FUN_28b3_0ee9(0x22b2);
        func_0x00029834(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_100d(0x22b2);
        func_0x0002996b(0x22b2);
        func_0x00029b6d(0x22b2);
        FUN_28b3_117c(0x22b2);
        func_0x0002996b(0x22b2);
        func_0x00029d78(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar15) {
          func_0x000297e6(0x22b2);
          uVar5 = 0xc3d2;
          func_0x00029d78(0x22b2);
          func_0x000299d1(0x22b2,uVar18,uVar19,uVar5);
          FUN_28b3_1582(0x22b2);
          func_0x00029834(0x22b2);
          func_0x0002996b(0x22b2);
          func_0x00029b9d(0x22b2);
          func_0x0002996b(0x22b2);
          func_0x00029983(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029b85(0x22b2);
          func_0x0002996b(0x22b2);
          func_0x00029983(0x22b2);
          func_0x000297e6(0x22b2);
          uVar15 = *(int *)(unaff_BP + -0x8e) << 1 < 0;
          func_0x000297e6(0x22b2);
          func_0x00029b55(0x22b2);
          func_0x00029b6d(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029b55(0x22b2);
          func_0x00029b6d(0x22b2);
          FUN_28b3_1163(0x22b2);
          func_0x0002996b(0x22b2);
          FUN_28b3_1181(0x22b2);
          if ((bool)uVar15) {
            *(undefined2 *)(unaff_BP + -0x1e) = 0;
            break;
          }
        }
        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
      }
      uVar5 = 0x22b2;
      if (*(int *)(unaff_BP + 6) == 0) {
        if (*(int *)(unaff_BP + -0x1e) != 0) {
LAB_3ab8_1923:
          *(int *)(unaff_BP + -0x72) = *(int *)(unaff_BP + -0x72) + 1;
          puVar14 = (undefined2 *)(*(int *)(unaff_BP + -0x72) * 0x20 + *(int *)(unaff_BP + 8));
          puVar12 = (undefined2 *)(unaff_BP + -0x70);
          for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
            puVar3 = puVar14;
            puVar14 = puVar14 + 1;
            puVar2 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar2;
          }
        }
      }
      else if (*(int *)(unaff_BP + -0x1e) == 0) goto LAB_3ab8_1923;
    }
    *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + 1;
  } while( true );
}


