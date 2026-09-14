/* 32b2:7410 */

undefined2 __cdecl16far
FUN_32b2_7410(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x7a2a = param_1;
  *(undefined2 *)0x7a2c = param_2;
  *(undefined2 *)0x7a2e = param_3;
  *(undefined2 *)0x7a30 = param_4;
  *(byte *)0x7a31 = *(byte *)0x7a31 & 0x7f;
  return 0x7a2a;
}


