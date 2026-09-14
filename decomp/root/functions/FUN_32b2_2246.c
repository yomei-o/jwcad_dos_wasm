/* 32b2:2246 */

void __cdecl16far FUN_32b2_2246(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  while ((*(byte *)(*param_1 + 0x7c67) & 8) != 0) {
    param_1 = param_1 + 1;
  }
  uVar1 = FUN_32b2_21c4(param_1,0,0);
  iVar2 = FUN_32b2_7387(param_1,uVar1);
  *(undefined2 *)0xb2ca = *(undefined2 *)(iVar2 + 8);
  *(undefined2 *)0xb2cc = *(undefined2 *)(iVar2 + 10);
  *(undefined2 *)0xb2ce = *(undefined2 *)(iVar2 + 0xc);
  *(undefined2 *)0xb2d0 = *(undefined2 *)(iVar2 + 0xe);
  return;
}


