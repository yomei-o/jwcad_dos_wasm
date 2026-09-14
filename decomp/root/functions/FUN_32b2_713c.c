/* 32b2:713c */

void __cdecl16far FUN_32b2_713c(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = 0x12;
  iVar1 = *(int *)0x8ac6;
  if (*(char *)(iVar1 + -2) != '\a') {
    FUN_32b2_50d5();
  }
  LOCK();
  *(int *)(iVar1 + -4) = iVar1;
  UNLOCK();
  *(undefined1 **)0x8ddc = &stack0xfffa;
  (*(code *)*(undefined2 *)(iVar2 + -0x724a))();
  return;
}


