/* 1885:1079 */

void __cdecl16far FUN_1885_1079(undefined2 param_1)

{
  undefined2 uVar1;
  undefined1 in_CF;
  undefined1 in_ZF;
  
  FUN_32b2_02bc();
  FUN_32b2_6d14();
  FUN_32b2_6cc6();
  FUN_32b2_7191(0x32b2);
  if ((bool)in_CF || (bool)in_ZF) {
    FUN_32b2_6d14();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_7c18();
    FUN_32b2_7187(0x32b2);
    FUN_32b2_6e4b();
    FUN_32b2_7258();
    FUN_32b2_7191(0x32b2);
    if ((bool)in_CF) {
      FUN_32b2_6cc6();
      FUN_32b2_6eb1();
      uVar1 = 0x18fd;
    }
    else {
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      uVar1 = 0x1907;
    }
    FUN_32b2_2854(param_1,uVar1);
  }
  else {
    FUN_32b2_6cc6();
    FUN_32b2_7154();
    uVar1 = FUN_32b2_6f61();
    FUN_32b2_6d14();
    FUN_32b2_6cc6();
    FUN_32b2_7191(0x32b2);
    if ((bool)in_CF) {
      FUN_32b2_6cc6();
      FUN_32b2_6eb1();
      FUN_32b2_2854(param_1,0x18ec);
    }
    else {
      FUN_32b2_2854(param_1,0x18f6,uVar1);
    }
  }
  return;
}


