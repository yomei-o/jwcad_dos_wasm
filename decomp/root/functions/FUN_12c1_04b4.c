/* 12c1:04b4 */

bool __cdecl16near FUN_12c1_04b4(void)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  
  FUN_32b2_24fa();
  iVar2 = FUN_12c1_0412();
  if (iVar2 < 0) {
    bVar3 = false;
  }
  else {
    *(undefined2 *)0xad12 = 0x4400;
    *(int *)0xad14 = iVar2;
    FUN_32b2_29ac(0xad12,0xad12);
    uVar1 = *(uint *)0xad18;
    FUN_12c1_0485();
    bVar3 = (uVar1 & 0x80) != 0;
  }
  return bVar3;
}


