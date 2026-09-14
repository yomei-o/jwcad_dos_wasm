/* 2bb4:644e */

void FUN_2bb4_644e(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int unaff_BP;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  puVar5 = (undefined2 *)0xb1ca;
  puVar4 = (undefined2 *)(unaff_BP + -0x20);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  FUN_2bb4_6b39();
  return;
}


