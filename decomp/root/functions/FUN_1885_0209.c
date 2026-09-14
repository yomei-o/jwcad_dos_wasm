/* 1885:0209 */

void __cdecl16far FUN_1885_0209(uint param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  
  FUN_32b2_02bc();
  FUN_32b2_6cc6();
  uVar2 = (param_1 & 0x3fff) == 0;
  FUN_32b2_6cc6();
  FUN_32b2_7191(0x32b2);
  if (!(bool)uVar2) {
    FUN_21f2_0356(0x1dc);
    if (*(int *)0xc22 == 0) {
      *(undefined2 *)0xc22 = 1;
    }
    uVar1 = *(undefined2 *)(param_1 * 4 + 0xb2c);
    *(undefined2 *)0xb26 = *(undefined2 *)(param_1 * 4 + 0xb2a);
    *(undefined2 *)0xb28 = uVar1;
    FUN_1def_23c5(0x17de,0x12,2,7,0xffff);
  }
  return;
}


