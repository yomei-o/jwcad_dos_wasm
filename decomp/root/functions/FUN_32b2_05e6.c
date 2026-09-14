/* 32b2:05e6 */

void __cdecl16near FUN_32b2_05e6(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  LOCK();
  uVar1 = *(undefined2 *)0x7c46;
  *(undefined2 *)0x7c46 = 0x400;
  UNLOCK();
  iVar2 = thunk_FUN_32b2_1f83();
  *(undefined2 *)0x7c46 = uVar1;
  if (iVar2 != 0) {
    return;
  }
  FUN_32b2_00e7();
  return;
}


