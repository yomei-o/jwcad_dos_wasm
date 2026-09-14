/* 1def:26a9 */

void __cdecl16far FUN_1def_26a9(int param_1,int param_2)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  uVar1 = (int)*(uint *)0x1b3e >> 0xf;
  if ((((0 < param_1) &&
       (param_1 <= (int)((((int)((*(uint *)0x1b3e ^ uVar1) - uVar1) >> 3 ^ uVar1) - uVar1) + 1))) &&
      (0 < param_2)) && (param_2 <= *(int *)0x1b42)) {
    *(int *)0x46 = param_1;
    *(int *)0x48 = param_2;
    *(undefined1 *)0xc09f = 2;
    *(undefined1 *)0xc0a1 = 0;
    *(char *)0xc0a5 = (char)param_2 + -1;
    *(char *)0xc0a4 = (char)param_1 + -1;
    FUN_32b2_247a(0x10,0xc09e,0xb2f0);
  }
  return;
}


