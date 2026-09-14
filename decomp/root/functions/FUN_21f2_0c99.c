/* 21f2:0c99 */

void __cdecl16far FUN_21f2_0c99(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_32b2_02bc();
  iVar2 = 0;
  uVar1 = *(undefined2 *)0xb492;
  do {
    *(undefined1 *)(param_2 * 8 + *(int *)0xb490 + iVar2) = *(undefined1 *)(iVar2 + param_1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return;
}


