/* 1885:5307 */

uint __cdecl16far FUN_1885_5307(void)

{
  uint uVar1;
  
  FUN_32b2_02bc();
  uVar1 = FUN_1885_52de();
  if ((uVar1 & 1) != 0) {
    uVar1 = uVar1 ^ 1 | 2;
  }
  return uVar1;
}


