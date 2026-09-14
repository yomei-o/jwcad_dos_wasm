/* 32b2:252e */

int __cdecl16far FUN_32b2_252e(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0;
  for (uVar2 = 0x7aba; uVar2 <= *(uint *)0x7bd2; uVar2 = uVar2 + 8) {
    iVar1 = FUN_32b2_0662(uVar2);
    if (iVar1 != -1) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}


