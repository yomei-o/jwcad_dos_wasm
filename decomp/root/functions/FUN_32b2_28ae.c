/* 32b2:28ae */

void __cdecl16far FUN_32b2_28ae(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)0xb2e0 = 0x49;
  *(undefined2 *)0xb2de = param_1;
  *(undefined2 *)0xb2da = param_1;
  uVar1 = FUN_32b2_21c4(param_1);
  *(undefined2 *)0xb2dc = uVar1;
  FUN_32b2_0d40(0xb2da,param_2,&stack0x0008);
  return;
}


