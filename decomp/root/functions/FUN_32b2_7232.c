/* 32b2:7232 */

void __cdecl16far FUN_32b2_7232(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  puVar4 = (undefined2 *)(*(int *)0x8ac6 + -0xe);
  iVar2 = 5;
  puVar3 = (undefined2 *)(*(int *)0x8ac6 + -2);
  do {
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar3;
    UNLOCK();
    *puVar3 = uVar1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0);
  return;
}


