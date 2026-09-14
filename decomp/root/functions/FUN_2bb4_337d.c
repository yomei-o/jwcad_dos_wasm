/* 2bb4:337d */

int __cdecl16far FUN_2bb4_337d(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined2 local_18;
  int iVar3;
  
  FUN_32b2_02bc();
  iVar3 = 0;
  FUN_32b2_6cc6();
  FUN_32b2_7065();
  FUN_32b2_6e63(0x32b2);
  FUN_32b2_6d14();
  FUN_32b2_6e63(0x32b2);
  FUN_32b2_6d14();
  FUN_32b2_6e63(0x32b2);
  for (local_18 = 1; local_18 <= *(int *)0x154; local_18 = local_18 + 1) {
    iVar1 = FUN_21f2_06d1(*(undefined1 *)(local_18 + -0x3f4c));
    if (iVar1 != 0) {
      FUN_32b2_6cc6();
      uVar2 = 0x3a7b < (uint)(local_18 << 2);
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_6cc6();
      FUN_32b2_6e4b();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_718c(0x32b2);
      FUN_32b2_6e4b();
      FUN_32b2_7191(0x32b2);
      if ((bool)uVar2) {
        FUN_32b2_6cc6();
        FUN_32b2_6e63(0x32b2);
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        iVar3 = local_18;
      }
    }
  }
  return iVar3;
}


