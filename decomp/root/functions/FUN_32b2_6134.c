/* 32b2:6134 */

void __cdecl16near FUN_32b2_6134(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int *unaff_SI;
  int *unaff_DI;
  int iVar12;
  undefined2 unaff_DS;
  bool bVar13;
  
  iVar7 = *unaff_SI;
  uVar6 = unaff_SI[1];
  uVar10 = unaff_SI[2];
  if (((unaff_SI[3] != 0 || uVar10 != 0) || uVar6 != 0) || iVar7 != 0) {
    uVar4 = unaff_SI[4] + 0x3fe;
    if ((int)uVar4 < 0) {
      *(byte *)0x8b1e = *(byte *)0x8b1e | 1;
    }
    else {
      uVar5 = uVar4 >> 1;
      uVar4 = (uint)(CONCAT12((uVar4 & 1) != 0,unaff_SI[3] << 1) >> 1);
      bVar9 = 5;
      do {
        bVar8 = bVar9;
        bVar13 = iVar7 < 0;
        iVar7 = iVar7 << 1;
        uVar3 = (ulong)CONCAT12(bVar13,uVar6) << 1;
        uVar2 = uVar3 | bVar13;
        uVar6 = (uint)uVar2;
        bVar13 = (uVar3 & 0x10000) != 0;
        uVar3 = (ulong)CONCAT12(bVar13,uVar10) << 1;
        uVar10 = (uint)uVar3 | (uint)bVar13;
        bVar13 = (uVar3 & 0x10000) != 0;
        uVar3 = (ulong)CONCAT12(bVar13,uVar4) << 1;
        uVar4 = (uint)uVar3 | (uint)bVar13;
        uVar5 = uVar5 << 1 | (uint)((uVar3 & 0x10000) != 0);
        bVar9 = bVar8 - 1;
      } while (bVar9 != 0);
      uVar1 = (uint)(0x8000 < CONCAT11((char)((uint)iVar7 >> 8),(byte)iVar7 | bVar8 & (byte)uVar2));
      iVar7 = uVar6 + uVar1;
      uVar6 = (uint)CARRY2(uVar6,uVar1);
      iVar11 = uVar10 + uVar6;
      uVar6 = (uint)CARRY2(uVar10,uVar6);
      iVar12 = uVar4 + uVar6;
      uVar5 = uVar5 + CARRY2(uVar4,uVar6);
      if ((uVar5 & 0xfff0) != 0) goto LAB_32b2_6199;
    }
  }
  uVar5 = 0;
  iVar7 = 0;
  iVar11 = 0;
  iVar12 = 0;
LAB_32b2_6199:
  *unaff_DI = iVar7;
  unaff_DI[1] = iVar11;
  unaff_DI[2] = iVar12;
  unaff_DI[3] = uVar5;
  return;
}


