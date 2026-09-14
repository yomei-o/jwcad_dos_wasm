/* 21f2:23a2 */

void __cdecl16far FUN_21f2_23a2(uint param_1)

{
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if ((param_1 != 0) || (*(char *)0x1d4a != '\0')) {
    if (*(char *)0x1d4a == '\0') {
      if (param_1 != 0) {
        FUN_32b2_6d14();
        FUN_32b2_6e63(0x32b2);
        FUN_32b2_6d14();
        FUN_32b2_6e63(0x32b2);
        FUN_32b2_6d14();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        *(undefined1 *)0x1d4a = (undefined1)param_1;
        FUN_21f2_211a(param_1 & 0xff);
      }
    }
    else {
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_21f2_211a(*(undefined1 *)0x1d4a);
      *(undefined1 *)0x1d4a = 0;
    }
  }
  return;
}


