/* 32b2:58aa */

void __cdecl16near FUN_32b2_58aa(void)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint in_DX;
  byte bVar10;
  uint uVar9;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  byte *unaff_SI;
  byte *pbVar14;
  uint uVar15;
  byte *unaff_DI;
  uint uVar16;
  uint uVar17;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar18;
  
  bVar11 = (byte)(((uint)((int)(*(uint *)(unaff_DI + 6) ^ 0x8000) < 0) << 8 | in_DX >> 8) >> 1);
  bVar8 = (byte)(((uint)((int)*(uint *)(unaff_SI + 6) < 0) << 8 | in_DX & 0xff) >> 1);
  uVar6 = *(uint *)(unaff_SI + 6) & 0x7ff0;
  uVar4 = uVar6 * 2;
  bVar10 = bVar11;
  if (uVar6 == 0) {
LAB_32b2_58b3:
    puVar2 = (undefined2 *)*(undefined2 *)0x8ac6;
    *puVar2 = *(undefined2 *)unaff_DI;
    puVar2[1] = *(undefined2 *)(unaff_DI + 2);
    puVar2[2] = *(undefined2 *)(unaff_DI + 4);
    puVar2[3] = CONCAT11((byte)((*(uint *)(unaff_DI + 6) & 0x7fff) >> 8) | bVar10 & 0x80,
                         (char)(*(uint *)(unaff_DI + 6) & 0x7fff));
    return;
  }
  uVar17 = *(uint *)(unaff_DI + 6) & 0x7ff0;
  uVar12 = uVar17 * 2;
  uVar9 = uVar4;
  pbVar14 = unaff_SI;
  if ((uVar12 < uVar4 || uVar12 + uVar6 * -2 == 0) &&
     (uVar9 = uVar12, uVar12 = uVar4, pbVar14 = unaff_DI, unaff_DI = unaff_SI, bVar10 = bVar8,
     bVar8 = bVar11, uVar17 == 0)) goto LAB_32b2_58b3;
  iVar5 = uVar9 - uVar12;
  if (0x69f < (uint)-iVar5 && iVar5 != -0x6a0) goto LAB_32b2_58b3;
  uVar17 = (uint)(((ulong)((char)bVar8 < '\0') << 0x10 |
                  (ulong)(CONCAT12((char)bVar10 < '\0',uVar12) >> 1)) >> 1);
  uVar6 = iVar5 * -2 | (uint)(-iVar5 < 0);
  uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  iVar5 = uVar6 << 1;
  uVar16 = CONCAT11((byte)iVar5 | (int)uVar6 < 0,(char)((uint)iVar5 >> 8));
  uVar9 = (uint)*pbVar14 << 8;
  uVar6 = *(uint *)(pbVar14 + 1);
  uVar4 = *(uint *)(pbVar14 + 3);
  uVar12 = *(uint *)(pbVar14 + 5) & 0xfff | 0x1000;
  uVar7 = uVar6;
  if (uVar16 == 0) goto LAB_32b2_5985;
  do {
    uVar6 = uVar4;
    uVar4 = uVar12;
    uVar12 = uVar4;
    uVar13 = uVar6;
    if ((int)uVar16 < 0xe) goto LAB_32b2_593f;
    bVar18 = uVar9 != 0;
    uVar9 = uVar7;
    if (bVar18) {
      uVar9 = uVar7 | 1;
    }
    uVar12 = 0;
    bVar18 = uVar16 < 0x10;
    uVar16 = uVar16 - 0x10;
    uVar7 = uVar6;
  } while (!bVar18 && uVar16 != 0);
  if (uVar16 == 0) goto LAB_32b2_5985;
  uVar13 = uVar4;
  if (bVar18) {
LAB_32b2_5962:
    do {
      bVar18 = (int)uVar9 < 0;
      uVar9 = uVar9 << 1;
      uVar3 = (ulong)CONCAT12(bVar18,uVar6) << 1;
      uVar6 = (uint)uVar3 | (uint)bVar18;
      bVar18 = (uVar3 & 0x10000) != 0;
      uVar3 = (ulong)CONCAT12(bVar18,uVar4) << 1;
      uVar4 = (uint)uVar3 | (uint)bVar18;
      uVar12 = uVar12 << 1 | (uint)((uVar3 & 0x10000) != 0);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0);
  }
  else {
LAB_32b2_593f:
    uVar4 = uVar13;
    uVar6 = uVar7;
    if (5 < (int)uVar16) {
      if ((char)uVar9 != '\0') {
        uVar9 = (uint)(byte)((byte)(uVar9 >> 8) | 1) << 8;
      }
      uVar9 = CONCAT11((char)uVar6,(char)(uVar9 >> 8));
      uVar6 = CONCAT11((char)uVar4,(char)(uVar6 >> 8));
      uVar4 = CONCAT11((char)uVar12,(char)(uVar4 >> 8));
      uVar12 = uVar12 >> 8;
      bVar18 = uVar16 < 8;
      uVar16 = uVar16 - 8;
      if (bVar18 || uVar16 == 0) {
        if (uVar16 == 0) goto LAB_32b2_5985;
        goto LAB_32b2_5962;
      }
    }
    uVar7 = uVar4;
    uVar13 = uVar6;
    if ((uVar9 & 0x3f) != 0) {
      uVar9 = uVar9 | 0x20;
    }
    do {
      uVar6 = uVar12 & 1;
      uVar12 = uVar12 >> 1;
      uVar4 = (uint)(CONCAT12(uVar6 != 0,uVar7) >> 1);
      uVar6 = (uint)(CONCAT12((uVar7 & 1) != 0,uVar13) >> 1);
      uVar9 = (uint)(CONCAT12((uVar13 & 1) != 0,uVar9) >> 1);
      uVar16 = uVar16 - 1;
      uVar7 = uVar4;
      uVar13 = uVar6;
    } while (uVar16 != 0);
  }
LAB_32b2_5985:
  if ((uVar9 & 0x3f) != 0) {
    uVar9 = uVar9 | 0x20;
  }
  bVar11 = (byte)(uVar9 >> 8);
  if ((int)uVar17 < 0 == (int)(uVar17 << 1) < 0) {
    if (((uVar12 + (*(uint *)(unaff_DI + 5) & 0xfff | 0x1000) +
          (uint)(CARRY2(uVar4,*(uint *)(unaff_DI + 3)) ||
                CARRY2(uVar4 + *(uint *)(unaff_DI + 3),
                       (uint)(CARRY2(uVar6,*(uint *)(unaff_DI + 1)) ||
                             CARRY2(uVar6 + *(uint *)(unaff_DI + 1),(uint)CARRY1(bVar11,*unaff_DI)))
                      )) & 0x2000) != 0) && ((uVar17 & 0x3fff) == 0x3ff0)) {
      FUN_32b2_72f4();
      return;
    }
    FUN_32b2_5a55();
    return;
  }
  uVar13 = uVar17 << 2;
  bVar8 = ((int)(uVar17 << 1) < 0) << 7;
  uVar16 = CONCAT11(bVar11 - *unaff_DI,(char)uVar9);
  uVar17 = (uint)(bVar11 < *unaff_DI);
  uVar9 = uVar6 - *(uint *)(unaff_DI + 1);
  uVar7 = uVar9 - uVar17;
  uVar6 = (uint)(uVar6 < *(uint *)(unaff_DI + 1) || uVar9 < uVar17);
  uVar17 = uVar4 - *(uint *)(unaff_DI + 3);
  uVar9 = uVar17 - uVar6;
  uVar15 = *(uint *)(unaff_DI + 5) & 0xfff | 0x1000;
  uVar6 = (uint)(uVar4 < *(uint *)(unaff_DI + 3) || uVar17 < uVar6);
  uVar4 = uVar12 - uVar15;
  uVar17 = uVar4 - uVar6;
  bVar11 = ~bVar8;
  if (uVar12 < uVar15 || uVar4 < uVar6) {
    uVar4 = ~uVar9;
    uVar6 = ~uVar7;
    bVar18 = uVar16 == 0;
    uVar16 = -uVar16;
    uVar7 = uVar6 + bVar18;
    uVar6 = (uint)CARRY2(uVar6,(uint)bVar18);
    uVar9 = uVar4 + uVar6;
    uVar17 = ~uVar17 + (uint)CARRY2(uVar4,uVar6);
    bVar11 = bVar8;
  }
  iVar5 = 4;
  while ((uVar6 = uVar9, uVar9 = uVar7, uVar17 == 0 && ((uVar6 & 0xe000) == 0))) {
    bVar18 = uVar13 < 0x200;
    uVar13 = uVar13 - 0x200;
    if ((bVar18 || uVar13 == 0) || (iVar5 = iVar5 + -1, iVar5 == 0)) goto LAB_32b2_5a53;
    uVar7 = uVar16;
    uVar16 = 0;
    uVar17 = uVar6;
  }
  if ((uVar17 & 0x1fe0) == 0) {
    bVar18 = uVar13 < 0x100;
    uVar13 = uVar13 - 0x100;
    if (bVar18 || uVar13 == 0) {
LAB_32b2_5a53:
      FUN_32b2_5ab9();
      return;
    }
    uVar17 = CONCAT11((char)uVar17,(char)(uVar6 >> 8));
    uVar6 = CONCAT11((char)uVar6,(char)(uVar9 >> 8));
    uVar9 = CONCAT11((char)uVar9,(char)(uVar16 >> 8));
    uVar16 = uVar16 << 8;
  }
  for (; (uVar17 & 0x1000) == 0; uVar17 = uVar17 << 1 | (uint)((uVar3 & 0x10000) != 0)) {
    uVar13 = uVar13 - 0x20;
    if (uVar13 == 0) goto code_r0x000385d9;
    bVar18 = (int)uVar16 < 0;
    uVar16 = uVar16 << 1;
    uVar3 = (ulong)CONCAT12(bVar18,uVar9) << 1;
    uVar9 = (uint)uVar3 | (uint)bVar18;
    bVar18 = (uVar3 & 0x10000) != 0;
    uVar3 = (ulong)CONCAT12(bVar18,uVar6) << 1;
    uVar6 = (uint)uVar3 | (uint)bVar18;
  }
  if (*(char *)0x8ae8 != '\0') {
    FUN_32b2_5de5();
    return;
  }
  bVar8 = (byte)(uVar16 >> 8);
  if ((0x80 < (byte)uVar16) || ((0x7f < (byte)uVar16 && ((uVar16 & 0x100) != 0)))) {
    uVar16 = (uint)(byte)(bVar8 + 1) << 8;
    uVar4 = (uint)(0xfe < bVar8);
    bVar18 = CARRY2(uVar9,uVar4);
    uVar9 = uVar9 + uVar4;
    uVar4 = (uint)bVar18;
    bVar18 = CARRY2(uVar6,uVar4);
    uVar6 = uVar6 + uVar4;
    uVar17 = uVar17 + bVar18;
    if (((uVar17 & 0x2000) != 0) && (uVar13 = uVar13 + 0x20, uVar13 == 0xffe0)) {
      FUN_32b2_72f4();
      return;
    }
  }
  puVar1 = (undefined1 *)*(int *)0x8ac6;
  if (uVar13 >> 1 != 0) {
    *(uint *)(puVar1 + 6) =
         CONCAT11(bVar11 & 0x80 | (byte)(uVar13 >> 9),
                  (byte)(uVar13 >> 1) | (byte)((uVar17 & 0xfff) >> 8));
    puVar1[5] = (char)(uVar17 & 0xfff);
    *puVar1 = (char)(uVar16 >> 8);
    *(uint *)(puVar1 + 1) = uVar9;
    *(uint *)(puVar1 + 3) = uVar6;
    return;
  }
code_r0x000385d9:
  if (*(char *)0x8ae8 == '\0') {
    puVar2 = (undefined2 *)*(undefined2 *)0x8ac6;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    return;
  }
  FUN_32b2_5e3b();
  return;
}


