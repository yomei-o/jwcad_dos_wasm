/* 32b2:5a55 */

void __cdecl16near FUN_32b2_5a55(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  uint uVar3;
  bool bVar4;
  byte in_AL;
  uint in_CX;
  byte in_DL;
  byte in_DH;
  uint in_BX;
  uint unaff_BP;
  uint unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar5;
  
  if (*(char *)0x8ae8 != '\0') {
    FUN_32b2_5de5();
    return;
  }
  if ((0x80 < in_DL) || ((0x7f < in_DL && ((in_DH & 1) != 0)))) {
    bVar5 = 0xfe < in_DH;
    in_DH = in_DH + 1;
    bVar4 = CARRY2(in_CX,(uint)bVar5);
    in_CX = in_CX + bVar5;
    uVar3 = (uint)bVar4;
    bVar4 = CARRY2(in_BX,uVar3);
    in_BX = in_BX + uVar3;
    unaff_DI = unaff_DI + bVar4;
    if (((unaff_DI & 0x2000) != 0) && (unaff_BP = unaff_BP + 0x20, unaff_BP == 0xffe0)) {
      FUN_32b2_72f4();
      return;
    }
  }
  pbVar1 = (byte *)*(int *)0x8ac6;
  if (unaff_BP >> 1 != 0) {
    *(uint *)(pbVar1 + 6) =
         CONCAT11(in_AL & 0x80 | (byte)(unaff_BP >> 9),
                  (byte)(unaff_BP >> 1) | (byte)((unaff_DI & 0xfff) >> 8));
    pbVar1[5] = (byte)(unaff_DI & 0xfff);
    *pbVar1 = in_DH;
    *(uint *)(pbVar1 + 1) = in_CX;
    *(uint *)(pbVar1 + 3) = in_BX;
    return;
  }
  if (*(char *)0x8ae8 != '\0') {
    FUN_32b2_5e3b();
    return;
  }
  puVar2 = (undefined2 *)*(undefined2 *)0x8ac6;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return;
}


