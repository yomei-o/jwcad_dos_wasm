/* 13bf:03fb */

void __cdecl16far FUN_13bf_03fb(void)

{
  int iVar1;
  undefined2 unaff_DS;
  int *in_stack_00000024;
  int *in_stack_00000026;
  int *in_stack_00000028;
  int *in_stack_0000002a;
  
  FUN_32b2_02bc();
  FUN_32b2_6d14();
  FUN_32b2_701d();
  FUN_32b2_710c();
  FUN_32b2_7154();
  iVar1 = FUN_32b2_6f61();
  *in_stack_00000024 = iVar1;
  FUN_32b2_6d9b();
  FUN_32b2_7124();
  FUN_32b2_710c();
  FUN_32b2_6d9b();
  FUN_32b2_718c(0x32b2);
  iVar1 = FUN_32b2_6f61();
  *in_stack_00000028 = iVar1;
  FUN_32b2_6d14();
  FUN_32b2_701d();
  FUN_32b2_710c();
  FUN_32b2_6d9b();
  FUN_32b2_7178(0x32b2);
  iVar1 = FUN_32b2_6f61();
  *in_stack_00000026 = iVar1;
  FUN_32b2_6d9b();
  FUN_32b2_7124();
  FUN_32b2_710c();
  FUN_32b2_6d9b();
  FUN_32b2_7178(0x32b2);
  iVar1 = FUN_32b2_6f61();
  *in_stack_0000002a = iVar1;
  if (*in_stack_00000028 == *in_stack_00000024) {
    *in_stack_00000028 = *in_stack_00000024 + 1;
  }
  if (*in_stack_0000002a == *in_stack_00000026) {
    *in_stack_0000002a = *in_stack_00000026 + -1;
  }
  return;
}


