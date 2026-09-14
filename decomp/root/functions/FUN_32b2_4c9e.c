/* 32b2:4c9e */

undefined2 __cdecl16far FUN_32b2_4c9e(undefined4 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x8938 = (int)((ulong)param_1 >> 0x10);
  *(undefined2 *)0x8936 = (int)param_1;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return 0;
}


