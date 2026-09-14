/* 17a6:000a */

undefined2 __cdecl16far FUN_17a6_000a(void)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 **local_a;
  undefined2 **local_8;
  undefined2 **local_6;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x17a6;
  local_6 = (undefined2 **)0x7a75;
  FUN_32b2_02bc();
  local_4 = &local_8;
  local_6 = &local_6;
  local_8 = &local_a;
  local_a = &local_4;
  FUN_1885_546d();
  local_4 = (undefined2 **)0x0;
  local_6 = (undefined2 **)0x1885;
  local_8 = (undefined2 **)0x7a95;
  FUN_1885_5256();
  local_4 = (undefined2 **)0x1885;
  local_6 = (undefined2 **)0x7a9b;
  bVar1 = FUN_1885_5307();
  if (((bVar1 & 0xe) == 4) ||
     ((((10 < *(byte *)0x123 && (*(char *)0x15b != '\0')) && ((int)local_6 < 0xf)) &&
      ((int)local_8 < 0xf)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


