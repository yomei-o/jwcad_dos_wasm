/* 32b2:53ed */

void __cdecl16near FUN_32b2_53ed(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 *unaff_SI;
  byte *pbVar4;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)*(undefined2 *)0x8ac6;
  *puVar1 = *unaff_SI;
  puVar1[1] = unaff_SI[1];
  puVar1[2] = unaff_SI[2];
  puVar1[3] = unaff_SI[3];
  pbVar4 = (byte *)*(undefined2 *)0x8ac6;
  uVar2 = *(uint *)(pbVar4 + 6);
  *(uint *)(pbVar4 + 6) = (uint)((byte)uVar2 & 0xf | 0x10);
  uVar2 = (uVar2 & 0x7ff0) >> 4;
  iVar3 = uVar2 - 0x433;
  if (0x432 < uVar2) {
    return;
  }
  uVar2 = -iVar3;
  if ((0x34 < (int)uVar2) && (iVar3 != -0x35)) {
    uVar2 = 0x35;
  }
  for (; '\a' < (char)uVar2; uVar2 = CONCAT11((char)(uVar2 >> 8),(char)uVar2 + -8)) {
    *pbVar4 = 0;
    pbVar4 = pbVar4 + 1;
  }
  if (uVar2 != 0) {
    *pbVar4 = *pbVar4 & *(byte *)(ulong)((uVar2 & 0xff) + 0x8ac8);
  }
  return;
}


