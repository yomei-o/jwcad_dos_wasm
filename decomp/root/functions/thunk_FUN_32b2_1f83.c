/* 32b2:1f56 */

undefined2 __cdecl16far thunk_FUN_32b2_1f83(uint param_1)

{
  undefined2 uVar1;
  bool bVar2;
  
  bVar2 = param_1 < 0xffe8;
  if (param_1 < 0xffe9) {
    uVar1 = FUN_32b2_1fac();
    if (!bVar2) {
      return uVar1;
    }
    FUN_32b2_2028();
    if ((!bVar2) && (uVar1 = FUN_32b2_1fac(), !bVar2)) {
      return uVar1;
    }
  }
  return 0;
}


