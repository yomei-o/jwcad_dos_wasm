/* 32b2:701d */

void __cdecl16far FUN_32b2_701d(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = 8;
  iVar2 = *(int *)0x8ac6;
  if (*(char *)(iVar2 + -2) == '\a') {
    iVar1 = 10;
    FUN_32b2_50e4();
    iVar2 = *(int *)0x8ac6;
  }
  LOCK();
  *(int *)(iVar2 + -4) = iVar2;
  UNLOCK();
  *(undefined1 **)0x8ddc = &stack0xfffa;
  (*(code *)*(undefined2 *)(iVar1 + -0x724a))();
  return;
}


