/* 2bb4:2c00 */

void __cdecl16far FUN_2bb4_2c00(int param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  FUN_1def_26a9(1,1);
  if ((param_1 != 0) && (param_1 != 10000)) {
    FUN_21f2_0356(0x20ee);
  }
  FUN_1def_2636();
  if ((*(int *)0xc1a != 0) && (*(int *)0xc1a < 10)) {
    FUN_1def_26a9(6,1);
    FUN_21f2_0356(0x20f4);
  }
  FUN_1def_26a9(8,1);
  FUN_21f2_0356(0x1de,param_2);
  if (*(int *)0xc2c != 0) {
    FUN_1def_26a9(0x49,1);
    if (*(char *)0xefb == '|') {
      FUN_21f2_0356(0x20f7);
    }
    else {
      FUN_21f2_0356(0x2100,*(undefined1 *)0xefb);
    }
  }
  return;
}


