/* 21f2:000c */

undefined2 __cdecl16far FUN_21f2_000c(int param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (param_1 == 0) {
    if ((*(int *)0x1cc4 == 0x12) && ((*(int *)0x1d02 == 0x6a || (*(int *)0x1d02 == 0x102)))) {
      *(undefined2 *)0x1cc4 = *(undefined2 *)0x1d02;
      *(undefined1 *)0x74 = *(undefined1 *)0xad8a;
      FUN_20a9_05d3();
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
      FUN_1885_1f75();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_710c();
      FUN_32b2_6e63();
      return 1;
    }
  }
  else if (((*(int *)0x1cc4 == 0x6a) || (*(int *)0x1cc4 == 0x102)) && (*(byte *)0x129 / 10 < 0xf)) {
    *(undefined2 *)0x1d02 = *(undefined2 *)0x1cc4;
    *(undefined2 *)0x1cc4 = 0x12;
    *(uint *)0xad8a = (uint)*(byte *)0x74;
    *(undefined1 *)0x74 = 100;
    FUN_20a9_05d3();
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_710c();
    FUN_32b2_6e63();
    FUN_1885_1f75();
    return 1;
  }
  return 0;
}


