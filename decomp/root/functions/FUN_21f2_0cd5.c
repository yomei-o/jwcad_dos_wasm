/* 21f2:0cd5 */

void __cdecl16far FUN_21f2_0cd5(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_32b2_02bc();
  iVar2 = 0;
  uVar1 = *(undefined2 *)0xc286;
  do {
    *(undefined1 *)(param_1 + iVar2) = *(undefined1 *)(param_2 * 0x10 + *(int *)0xc284 + iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}


