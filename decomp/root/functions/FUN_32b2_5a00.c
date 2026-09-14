/* 32b2:5a00 */

void FUN_32b2_5a00(void)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  ulong uVar4;
  byte in_AL;
  uint in_CX;
  uint in_DX;
  byte bVar5;
  uint in_BX;
  uint uVar6;
  uint unaff_BP;
  int iVar7;
  uint unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar8;
  
  iVar7 = 4;
  while ((uVar6 = in_BX, in_BX = in_CX, unaff_DI == 0 && ((uVar6 & 0xe000) == 0))) {
    bVar8 = unaff_BP < 0x200;
    unaff_BP = unaff_BP - 0x200;
    if ((bVar8 || unaff_BP == 0) || (iVar7 = iVar7 + -1, iVar7 == 0)) goto LAB_32b2_5a53;
    in_CX = in_DX;
    in_DX = 0;
    unaff_DI = uVar6;
  }
  if ((unaff_DI & 0x1fe0) == 0) {
    bVar8 = unaff_BP < 0x100;
    unaff_BP = unaff_BP - 0x100;
    if (bVar8 || unaff_BP == 0) {
LAB_32b2_5a53:
      FUN_32b2_5ab9();
      return;
    }
    unaff_DI = CONCAT11((char)unaff_DI,(char)(uVar6 >> 8));
    uVar6 = CONCAT11((char)uVar6,(char)(in_BX >> 8));
    in_BX = CONCAT11((char)in_BX,(char)(in_DX >> 8));
    in_DX = in_DX << 8;
  }
  for (; (unaff_DI & 0x1000) == 0; unaff_DI = unaff_DI << 1 | (uint)((uVar4 & 0x10000) != 0)) {
    unaff_BP = unaff_BP - 0x20;
    if (unaff_BP == 0) goto code_r0x000385d9;
    bVar8 = (int)in_DX < 0;
    in_DX = in_DX << 1;
    uVar4 = (ulong)CONCAT12(bVar8,in_BX) << 1;
    in_BX = (uint)uVar4 | (uint)bVar8;
    bVar8 = (uVar4 & 0x10000) != 0;
    uVar4 = (ulong)CONCAT12(bVar8,uVar6) << 1;
    uVar6 = (uint)uVar4 | (uint)bVar8;
  }
  if (*(char *)0x8ae8 != '\0') {
    FUN_32b2_5de5();
    return;
  }
  bVar5 = (byte)(in_DX >> 8);
  if ((0x80 < (byte)in_DX) || ((0x7f < (byte)in_DX && ((in_DX & 0x100) != 0)))) {
    in_DX = (uint)(byte)(bVar5 + 1) << 8;
    uVar3 = (uint)(0xfe < bVar5);
    bVar8 = CARRY2(in_BX,uVar3);
    in_BX = in_BX + uVar3;
    uVar3 = (uint)bVar8;
    bVar8 = CARRY2(uVar6,uVar3);
    uVar6 = uVar6 + uVar3;
    unaff_DI = unaff_DI + bVar8;
    if (((unaff_DI & 0x2000) != 0) && (unaff_BP = unaff_BP + 0x20, unaff_BP == 0xffe0)) {
      FUN_32b2_72f4();
      return;
    }
  }
  puVar1 = (undefined1 *)*(int *)0x8ac6;
  if (unaff_BP >> 1 != 0) {
    *(uint *)(puVar1 + 6) =
         CONCAT11(in_AL & 0x80 | (byte)(unaff_BP >> 9),
                  (byte)(unaff_BP >> 1) | (byte)((unaff_DI & 0xfff) >> 8));
    puVar1[5] = (char)(unaff_DI & 0xfff);
    *puVar1 = (char)(in_DX >> 8);
    *(uint *)(puVar1 + 1) = in_BX;
    *(uint *)(puVar1 + 3) = uVar6;
    return;
  }
code_r0x000385d9:
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


