/* 1885:20db */

void __cdecl16far FUN_1885_20db(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  int iVar3;
  
  FUN_32b2_02bc();
  FUN_32b2_2854(param_1,0x1994);
  if (*(byte *)0x4a < 10) {
    uVar1 = 0x1996;
  }
  else {
    uVar1 = 0x199b;
  }
  FUN_32b2_2126(param_1,uVar1);
  iVar3 = param_1;
  FUN_32b2_2126(param_1,0x19a0);
  iVar2 = param_1;
  if (iVar3 == 1) {
    uVar1 = 0x19a6;
  }
  else {
    if (iVar3 != 5) {
      FUN_32b2_2126(param_1,0x19af);
      for (iVar3 = 2; iVar3 < iVar2; iVar3 = iVar3 + 1) {
        iVar3 = 0x19b1;
        iVar2 = param_1;
        FUN_32b2_2126();
      }
      goto LAB_1885_2177;
    }
    uVar1 = 0x19aa;
  }
  FUN_32b2_2126(param_1,uVar1);
LAB_1885_2177:
  if (iVar2 != 5) {
    FUN_32b2_2126(param_1,0x19b3);
  }
  return;
}


