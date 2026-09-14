/* 1885:0093 */

void __cdecl16far FUN_1885_0093(undefined2 *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 in_ZF;
  undefined2 uVar2;
  
  FUN_32b2_02bc();
  FUN_32b2_6cc6();
  FUN_32b2_6cc6();
  FUN_32b2_6e4b();
  FUN_32b2_7191(0x32b2);
  FUN_32b2_6d14();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_7191(0x32b2);
  FUN_32b2_6d14();
  FUN_32b2_6cc6();
  FUN_32b2_7191(0x32b2);
  if ((bool)in_CF || (bool)in_ZF) {
    FUN_32b2_6d14();
    FUN_32b2_7065();
    FUN_32b2_7154();
    iVar1 = FUN_32b2_6f61();
    if (iVar1 < 0xb) {
      FUN_32b2_6d14();
      FUN_32b2_6d9b();
      FUN_32b2_7258();
      FUN_32b2_7182(0x32b2);
    }
    else {
      FUN_32b2_6d9b();
      FUN_32b2_7258();
      FUN_32b2_7c18();
      FUN_32b2_7187(0x32b2);
    }
  }
  else {
    FUN_32b2_6d14();
    FUN_32b2_6cc6();
    FUN_32b2_7191(0x32b2);
    if ((bool)in_CF) {
      FUN_32b2_6cc6();
      FUN_32b2_710c();
      FUN_32b2_7154();
      FUN_32b2_6f61();
      FUN_32b2_6d9b();
      FUN_32b2_7258();
      FUN_32b2_710c();
    }
    else {
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_7154();
      FUN_32b2_6f61();
      FUN_32b2_6d9b();
    }
  }
  uVar2 = 0x32b2;
  FUN_32b2_6e63();
  *param_1 = 0x8a47;
  param_1[1] = uVar2;
  return;
}


