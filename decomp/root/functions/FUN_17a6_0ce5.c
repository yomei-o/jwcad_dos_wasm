/* 17a6:0ce5 */

undefined2 __cdecl16far FUN_17a6_0ce5(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint local_c;
  
  FUN_32b2_02bc();
  local_c = 0;
  while( true ) {
    if (3 < (int)local_c) {
      return 1;
    }
    FUN_32b2_6d14();
    FUN_32b2_6cc6();
    uVar1 = (int)(local_c << 1) < 0;
    uVar2 = (local_c & 0x3fff) == 0;
    FUN_32b2_6cc6();
    FUN_32b2_6e4b();
    FUN_32b2_7173(0x32b2);
    FUN_32b2_7258();
    FUN_32b2_6cc6();
    FUN_32b2_6e4b();
    FUN_32b2_7258();
    FUN_32b2_70f4();
    FUN_32b2_717d(0x32b2);
    FUN_32b2_6cc6();
    FUN_32b2_701d();
    FUN_32b2_7258();
    FUN_32b2_6d14();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_7173(0x32b2);
    FUN_32b2_717d(0x32b2);
    FUN_32b2_7173(0x32b2);
    FUN_32b2_6e99();
    FUN_32b2_7191(0x32b2);
    if ((bool)uVar2) break;
    FUN_32b2_6d14();
    FUN_32b2_6d14();
    FUN_32b2_7191(0x32b2);
    if (!(bool)uVar1 && !(bool)uVar2) {
      return 0xffff;
    }
    local_c = local_c + 1;
  }
  return 0;
}


