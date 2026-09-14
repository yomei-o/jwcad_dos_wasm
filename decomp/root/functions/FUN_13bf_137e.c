/* 13bf:137e */

void __cdecl16far FUN_13bf_137e(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined1 uVar3;
  
  FUN_32b2_02bc();
  if (param_1 < 0) {
    param_1 = -1 - param_1;
  }
  if (param_1 == 0) {
    if (*(int *)0x116c < 0) {
      *(undefined2 *)0x116c = 0xffff;
    }
    else {
      *(undefined2 *)0x116c = 0;
    }
  }
  else {
    iVar1 = *(int *)0x116c;
    if (iVar1 < 0) {
      param_1 = -1 - param_1;
      iVar1 = param_1;
    }
    uVar2 = 0;
    uVar3 = iVar1 == 0;
    *(int *)0x116c = param_1;
    FUN_32b2_6d9b();
    FUN_32b2_6e4b();
    FUN_32b2_704d();
    FUN_32b2_6e4b();
    FUN_32b2_707d();
    FUN_32b2_6e4b();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_7065();
    FUN_32b2_6e4b();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7191(0x32b2);
    if (!(bool)uVar2 && !(bool)uVar3) {
      FUN_32b2_6cc6();
      FUN_32b2_6e63(0x32b2);
    }
    FUN_32b2_6d14();
    FUN_32b2_7065();
    iVar1 = FUN_32b2_6f61();
    *(int *)0x116e = iVar1;
    if (iVar1 < 1) {
      *(undefined2 *)0x116e = 1;
    }
  }
  return;
}


