/* 32b2:50e4 */

void __cdecl16near FUN_32b2_50e4(void)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_DS;
  
  uVar1 = *unaff_SI;
  uVar2 = unaff_SI[1];
  if ((uVar2 & 0x7f80) != 0) {
    *unaff_DI = 0;
    unaff_DI[1] = (int)(((ulong)((uVar1 & 4) != 0) << 0x10 |
                        ((ulong)((uVar1 & 2) != 0) << 0x10 | (ulong)((uVar1 & 1) != 0) << 0xf) >> 1)
                       >> 1);
    unaff_DI[2] = (int)(((ulong)(((int)uVar2 >> 2 & 1U) != 0) << 0x10 |
                        ((ulong)(((int)uVar2 >> 1 & 1U) != 0) << 0x10 |
                        (ulong)(CONCAT12((uVar2 & 1) != 0,uVar1) >> 1)) >> 1) >> 1);
    unaff_DI[3] = (CONCAT11((char)((int)uVar2 >> 0xb),(char)((int)uVar2 >> 3)) & 0x8fff) + 0x3800;
    return;
  }
  *unaff_DI = 0;
  unaff_DI[1] = 0;
  unaff_DI[2] = 0;
  unaff_DI[3] = 0;
  return;
}


