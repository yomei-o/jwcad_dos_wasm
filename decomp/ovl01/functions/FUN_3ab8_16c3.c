/* 3ab8:16c3 */

undefined2 __cdecl16far FUN_3ab8_16c3(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint in_AX;
  int iVar5;
  int in_DX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int unaff_BP;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  
  uVar11 = 0x3ab8;
  uVar6 = in_DX + 0x168;
  do {
    *(uint *)(unaff_BP + -0x76) = in_AX;
    *(uint *)(unaff_BP + -0x74) = uVar6;
    uVar6 = (uVar6 - *(int *)(unaff_BP + -0x60)) - (uint)(in_AX < *(uint *)(unaff_BP + -0x62));
    uVar7 = uVar6 >> 1;
    uVar4 = (uint)(CONCAT12((uVar6 & 1) != 0,in_AX - *(uint *)(unaff_BP + -0x62)) >> 1);
    uVar6 = (uint)CARRY2(uVar4,*(uint *)(unaff_BP + -0x62));
    uVar3 = uVar7 + *(uint *)(unaff_BP + -0x60);
    uVar12 = CARRY2(uVar7,*(uint *)(unaff_BP + -0x60)) || CARRY2(uVar3,uVar6);
    iVar8 = uVar3 + uVar6;
    uVar13 = iVar8 == 0;
    *(int *)(unaff_BP + -0x76) = uVar4 + *(uint *)(unaff_BP + -0x62);
    *(int *)(unaff_BP + -0x74) = iVar8;
    func_0x000298b4(uVar11);
    func_0x00029b6d(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029983(0x22b2);
    func_0x00029834(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar12 && !(bool)uVar13) {
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x00029bfc(0x22b2);
      func_0x00029983(0x22b2);
    }
    func_0x000297e6(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x0002a11e(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x0002a10c(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029983(0x22b2);
    *(undefined2 *)(unaff_BP + -0x1e) = 1;
    *(undefined2 *)(unaff_BP + -0x8e) = 0;
    while (*(int *)(unaff_BP + -0x8e) < 4) {
      uVar12 = *(int *)(unaff_BP + -0x8e) << 1 < 0;
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
      if (!(bool)uVar12) {
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
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
        uVar12 = *(int *)(unaff_BP + -0x8e) << 1 < 0;
        func_0x000297e6(0x22b2);
        func_0x00029b55(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029b55(0x22b2);
        func_0x00029b6d(0x22b2);
        FUN_28b3_1163(0x22b2);
        func_0x0002996b(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar12) {
          *(undefined2 *)(unaff_BP + -0x1e) = 0;
          break;
        }
      }
      *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
    }
    uVar11 = 0x22b2;
    if (*(int *)(unaff_BP + 6) == 0) {
      if (*(int *)(unaff_BP + -0x1e) != 0) {
LAB_3ab8_1923:
        *(int *)(unaff_BP + -0x72) = *(int *)(unaff_BP + -0x72) + 1;
        puVar10 = (undefined2 *)(*(int *)(unaff_BP + -0x72) * 0x20 + *(int *)(unaff_BP + 8));
        puVar9 = (undefined2 *)(unaff_BP + -0x70);
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
      }
    }
    else if (*(int *)(unaff_BP + -0x1e) == 0) goto LAB_3ab8_1923;
    do {
      *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + 1;
      iVar8 = *(int *)(unaff_BP + -0x96);
      if (*(int *)(unaff_BP + -0x8c) <= iVar8) {
        return *(undefined2 *)(unaff_BP + -0x72);
      }
      puVar10 = (undefined2 *)(unaff_BP + -0x70);
      puVar9 = (undefined2 *)(unaff_BP + -0x46);
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar10;
        puVar10 = puVar10 + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar1;
      }
      iVar8 = iVar8 * 4;
      uVar14 = func_0x00021eee(uVar11,*(undefined2 *)(unaff_BP + iVar8 + -0xd2),
                               *(undefined2 *)(unaff_BP + iVar8 + -0xd0));
      *(undefined2 *)(unaff_BP + -0x62) = (int)uVar14;
      *(undefined2 *)(unaff_BP + -0x60) = (int)((ulong)uVar14 >> 0x10);
      uVar11 = 0x1bb4;
      uVar14 = func_0x00021eee(0x1bb4,*(undefined2 *)(unaff_BP + iVar8 + -0xce),
                               *(undefined2 *)(unaff_BP + iVar8 + -0xcc));
      uVar6 = (uint)((ulong)uVar14 >> 0x10);
      in_AX = (uint)uVar14;
      *(uint *)(unaff_BP + -0x5e) = in_AX;
      *(uint *)(unaff_BP + -0x5c) = uVar6;
    } while ((in_AX == *(uint *)(unaff_BP + -0x62)) && (uVar6 == *(uint *)(unaff_BP + -0x60)));
    if (uVar6 < *(uint *)(unaff_BP + -0x60)) {
      uVar11 = FUN_3ab8_16c3();
      return uVar11;
    }
    if ((uVar6 <= *(uint *)(unaff_BP + -0x60)) && (in_AX <= *(uint *)(unaff_BP + -0x62))) {
      uVar11 = FUN_3ab8_16c3();
      return uVar11;
    }
  } while( true );
}


