/* 32b2:622f */

undefined4 __cdecl16near FUN_32b2_622f(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  char *pcVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined2 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined2 *unaff_SI;
  uint uVar27;
  uint uVar28;
  undefined2 *puVar29;
  char *pcVar30;
  undefined2 unaff_DS;
  undefined1 uVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  
  puVar29 = (undefined2 *)0x8b20;
  for (iVar17 = 4; iVar17 != 0; iVar17 = iVar17 + -1) {
    puVar3 = puVar29;
    puVar29 = puVar29 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar3 = *puVar1;
  }
  uVar14 = *(uint *)0x8b26;
  *(byte *)0x8b27 = *(byte *)0x8b27 & 0x7f;
  uVar23 = 0x20;
  if (((uVar14 & 0x7ff0) != 0) && ((int)uVar14 < 0)) {
    uVar23 = 0x2d;
  }
  FUN_32b2_61d3(uVar23);
  if ((*(byte *)0x8b27 & 0x80) == 0) {
    *(undefined1 *)0x8b2c = 1;
    *(undefined1 *)0x8b2d = 0x30;
    return 1;
  }
  lVar11 = (ulong)(*(int *)0x8b28 + 0x3ffeU) * 0x4d10 +
           (ulong)((*(int *)0x8b28 + 0x3ffeU >> 8) * 0x4d);
  uVar18 = (uint)lVar11;
  uVar14 = (uint)*(byte *)0x8b27 * 0x9a;
  iVar17 = ((int)((ulong)lVar11 >> 0x10) + (uint)CARRY2(uVar18,uVar14) + -0x1343) -
           (uint)(uVar18 + uVar14 < 0x12f4);
  uVar31 = iVar17 != 0;
  FUN_32b2_6495();
  FUN_32b2_61aa();
  if (!(bool)uVar31) {
    iVar17 = iVar17 + 1;
    FUN_32b2_632f();
  }
  uVar14 = *(uint *)0x8b26;
  bVar15 = 0;
  uVar18 = *(uint *)0x8b20;
  uVar21 = *(uint *)0x8b22;
  uVar28 = *(uint *)0x8b24;
  for (iVar19 = -*(int *)0x8b28; iVar19 != 0; iVar19 = iVar19 + -1) {
    uVar25 = uVar14 & 1;
    uVar14 = uVar14 >> 1;
    bVar15 = (byte)(CONCAT11((uVar18 & 1) != 0,bVar15) >> 1);
    uVar18 = (uint)(CONCAT12((uVar21 & 1) != 0,uVar18) >> 1);
    uVar21 = (uint)(CONCAT12((uVar28 & 1) != 0,uVar21) >> 1);
    uVar28 = (uint)(CONCAT12(uVar25 != 0,uVar28) >> 1);
  }
  bVar16 = bVar15 + 0x56;
  uVar27 = uVar18 + 0x39a + (uint)(0xa9 < bVar15);
  uVar18 = (uint)(0xfc65 < uVar18 || CARRY2(uVar18 + 0x39a,(uint)(0xa9 < bVar15)));
  uVar25 = uVar21 + uVar18;
  uVar18 = (uint)CARRY2(uVar21,uVar18);
  uVar21 = uVar28 + uVar18;
  uVar14 = uVar14 + CARRY2(uVar28,uVar18);
  iVar19 = 0x10;
  pcVar13 = (char *)0x8b2d;
  do {
    pcVar30 = pcVar13;
    iVar20 = iVar19;
    bVar32 = (int)((uint)bVar16 << 8) < 0;
    uVar7 = (ulong)CONCAT12(bVar32,uVar27) << 1;
    bVar34 = (uVar7 & 0x10000) != 0;
    uVar8 = (ulong)CONCAT12(bVar34,uVar25) << 1;
    bVar33 = (uVar8 & 0x10000) != 0;
    uVar9 = (ulong)CONCAT12(bVar33,uVar21) << 1;
    bVar12 = (uVar9 & 0x10000) != 0;
    uVar10 = (ulong)CONCAT12(bVar12,uVar14) << 1;
    uVar28 = (uint)((uVar7 & 0xffff | (ulong)bVar32) << 1) | (uint)((char)(bVar16 * '\x02') < '\0');
    uVar26 = (uint)((uVar8 & 0xffff | (ulong)bVar34) << 1) | (uint)((uVar7 & 0x8000) != 0);
    uVar22 = (uint)((uVar9 & 0xffff | (ulong)bVar33) << 1) | (uint)((uVar8 & 0x8000) != 0);
    uVar24 = (uint)((uVar10 & 0xffff | (ulong)bVar12) << 1) | (uint)((uVar9 & 0x8000) != 0);
    uVar18 = (uint)CARRY1(bVar16 * '\x04',bVar16);
    uVar4 = uVar28 + uVar27;
    uVar28 = (uint)(CARRY2(uVar28,uVar27) || CARRY2(uVar4,uVar18));
    uVar5 = uVar26 + uVar25;
    uVar26 = (uint)(CARRY2(uVar26,uVar25) || CARRY2(uVar5,uVar28));
    uVar6 = uVar22 + uVar21;
    uVar22 = (uint)(CARRY2(uVar22,uVar21) || CARRY2(uVar6,uVar26));
    bVar33 = CARRY2(uVar24,uVar14);
    uVar24 = uVar24 + uVar14;
    bVar34 = (char)(bVar16 * '\x05') < '\0';
    bVar16 = bVar16 * '\n';
    uVar7 = (ulong)CONCAT12(bVar34,uVar4 + uVar18) << 1;
    uVar27 = (uint)uVar7 | (uint)bVar34;
    bVar34 = (uVar7 & 0x10000) != 0;
    uVar7 = (ulong)CONCAT12(bVar34,uVar5 + uVar28) << 1;
    uVar25 = (uint)uVar7 | (uint)bVar34;
    bVar34 = (uVar7 & 0x10000) != 0;
    uVar7 = (ulong)CONCAT12(bVar34,uVar6 + uVar26) << 1;
    uVar21 = (uint)uVar7 | (uint)bVar34;
    bVar34 = (uVar7 & 0x10000) != 0;
    uVar7 = (ulong)CONCAT12(bVar34,uVar24 + uVar22) << 1;
    uVar14 = (uint)uVar7 | (uint)bVar34;
    *pcVar30 = (((((uVar10 & 0x10000) != 0) << 1 | (uVar10 & 0x8000) != 0) +
                (bVar33 || CARRY2(uVar24,uVar22))) * '\x02' | (uVar7 & 0x10000) != 0) + 0x30;
    iVar19 = iVar20 + -1;
    pcVar13 = pcVar30 + 1;
  } while (iVar19 != 0);
  iVar20 = iVar20 + -2;
  do {
    if (iVar20 == 0) break;
    iVar20 = iVar20 + -1;
    pcVar2 = pcVar30;
    pcVar30 = pcVar30 + -1;
  } while (*pcVar2 == '0');
  *(char *)0x8b2c = (char)iVar20 + '\x12';
  return CONCAT22(iVar17,1);
}


