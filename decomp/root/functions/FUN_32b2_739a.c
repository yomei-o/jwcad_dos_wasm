/* 32b2:739a */

undefined2 __cdecl16near FUN_32b2_739a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 in_BX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar5 = *(int *)(unaff_BP + 8);
  iVar1 = *(int *)(unaff_BP + 6);
  *(int *)(unaff_BP + 6) = *(int *)(unaff_BP + 6) + iVar5;
  uVar4 = FUN_32b2_5eb4();
  iVar2 = *(int *)(unaff_BP + 6);
  iVar3 = *(int *)(unaff_BP + 8);
  *(int *)0x8dde = iVar5;
  *(int *)0x8de0 = (iVar1 - iVar2) + iVar3;
  *(undefined2 *)0x8de2 = uVar4;
  *(undefined2 *)0x8de4 = in_BX;
  return 0x8dde;
}


