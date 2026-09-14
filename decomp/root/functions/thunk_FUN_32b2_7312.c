/* 32b2:6d40 */

void __cdecl16near thunk_FUN_32b2_7312(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x8dd8 = 0x3031;
  bVar1 = 0x8a;
  if (*(int *)0x8946 != 0) {
    bVar1 = (*(code *)*(undefined2 *)0x8944)(0x32b2);
  }
  if (bVar1 == 0x8c) {
    *(undefined2 *)0x8dd8 = 0x3231;
  }
  *(uint *)0x8dda = (uint)bVar1;
  FUN_32b2_0294();
  FUN_32b2_3534();
  FUN_32b2_05af(0xfd);
  FUN_32b2_05af(*(int *)0x8dda + -0x1c);
  FUN_32b2_01d1(0x32b2,*(undefined2 *)0x8dda);
  return;
}


