/* 32b2:632f */

void __cdecl16near FUN_32b2_632f(void)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int in_BX;
  uint *puVar17;
  uint *puVar18;
  int *unaff_SI;
  uint *puVar19;
  undefined2 *puVar20;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  puVar20 = (undefined2 *)0x8b3e;
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar3 = puVar20;
    puVar20 = puVar20 + 1;
    *puVar3 = 0;
  }
  unaff_SI[4] = unaff_SI[4] + *(int *)(in_BX + 8);
  iVar13 = 7;
  puVar17 = (uint *)0x8b3e;
  do {
    puVar18 = puVar17;
    bVar9 = (byte)(4 - iVar13);
    iVar10 = (int)(char)('\x04' - (bVar9 + ((byte)((uint)(4 - iVar13) >> 8) & bVar9) * -2));
    puVar17 = (uint *)(((in_BX - iVar10) - iVar13) + 8);
    puVar19 = (uint *)((int)unaff_SI + (iVar10 - iVar13) + 6);
    do {
      uVar15 = (uint)((ulong)*puVar19 * (ulong)*puVar17 >> 0x10);
      uVar11 = (uint)((ulong)*puVar19 * (ulong)*puVar17);
      puVar1 = puVar18;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar11;
      puVar1 = puVar18 + 1;
      uVar11 = (uint)CARRY2(uVar2,uVar11);
      uVar2 = *puVar1;
      uVar14 = *puVar1 + uVar15;
      *puVar1 = uVar14 + uVar11;
      puVar18[2] = puVar18[2] + (uint)(CARRY2(uVar2,uVar15) || CARRY2(uVar14,uVar11));
      puVar19 = puVar19 + -1;
      puVar17 = puVar17 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar13 = iVar13 + -1;
    puVar17 = puVar18 + 1;
  } while (iVar13 != 0);
  uVar11 = puVar18[-6] | puVar18[-5] | puVar18[-4];
  uVar2 = puVar18[-3];
  uVar16 = CONCAT11((char)(uVar2 >> 8),(byte)uVar2 | (byte)uVar11 | (byte)(uVar11 >> 8));
  uVar11 = puVar18[-2];
  uVar14 = puVar18[-1];
  uVar15 = *puVar18;
  uVar12 = puVar18[1];
  if (-1 < (int)uVar12) {
    unaff_SI[4] = unaff_SI[4] + -1;
    uVar16 = uVar16 << 1;
    uVar7 = (ulong)CONCAT12((int)uVar2 < 0,uVar11) << 1;
    uVar11 = (uint)uVar7 | (uint)((int)uVar2 < 0);
    bVar8 = (uVar7 & 0x10000) != 0;
    uVar7 = (ulong)CONCAT12(bVar8,uVar14) << 1;
    uVar14 = (uint)uVar7 | (uint)bVar8;
    bVar8 = (uVar7 & 0x10000) != 0;
    uVar7 = (ulong)CONCAT12(bVar8,uVar15) << 1;
    uVar15 = (uint)uVar7 | (uint)bVar8;
    uVar12 = uVar12 << 1 | (uint)((uVar7 & 0x10000) != 0);
  }
  uVar2 = (uint)(0x8000 < (uVar16 | uVar11 & 1));
  uVar16 = (uint)CARRY2(uVar11,uVar2);
  uVar4 = (uint)CARRY2(uVar14,uVar16);
  uVar5 = (uint)CARRY2(uVar15,uVar4);
  uVar6 = (uint)CARRY2(uVar12,uVar5);
  unaff_SI[4] = unaff_SI[4] + uVar6;
  *unaff_SI = uVar11 + uVar2;
  unaff_SI[1] = uVar14 + uVar16;
  unaff_SI[2] = uVar15 + uVar4;
  unaff_SI[3] = uVar12 + uVar5 | (uint)(uVar6 != 0) << 0xf;
  return;
}


