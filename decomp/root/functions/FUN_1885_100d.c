/* 1885:100d */

void __cdecl16far FUN_1885_100d(undefined2 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (*(int *)0xa68 < 0xf) {
    if (*(int *)0xa68 == 0xe) {
      uVar1 = 0x18d4;
    }
    else if (*(int *)0xa68 == 0xd) {
      uVar1 = 0x18d8;
    }
    else {
      if (*(int *)0xa68 != 0xc) {
        if (*(int *)0xa68 < 8) {
          iVar2 = *(int *)0xa68;
          uVar1 = 0x18e6;
        }
        else {
          iVar2 = *(int *)0xa68 + -6;
          uVar1 = 0x18e0;
        }
        FUN_32b2_2854(param_1,uVar1,iVar2);
        return;
      }
      uVar1 = 0x18dc;
    }
  }
  else {
    uVar1 = 0x18d0;
  }
  FUN_32b2_2854(param_1,uVar1);
  return;
}


