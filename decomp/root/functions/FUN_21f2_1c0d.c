/* 21f2:1c0d */

void __cdecl16far FUN_21f2_1c0d(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000016;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  uint in_stack_0000001e;
  byte in_stack_00000022;
  
  uVar1 = in_stack_0000001e;
  FUN_32b2_02bc();
  if ((*(char *)0x121 != '\0') && ((in_stack_00000022 & 8) != 0)) {
    in_stack_0000001e._1_1_ = 8;
  }
  if (in_stack_0000001e._1_1_ < 8) {
    uVar2 = *(uint *)((uint)in_stack_0000001e._1_1_ * 2 + 0xa70);
  }
  else {
    uVar2 = (uint)in_stack_0000001e._1_1_;
  }
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_704d();
  FUN_32b2_6d9b();
  FUN_32b2_7178(0x32b2);
  FUN_32b2_6e4b();
  FUN_32b2_6e63(0x32b2);
  FUN_32b2_6cc6();
  FUN_32b2_704d();
  FUN_32b2_6e4b();
  FUN_32b2_6e63(0x32b2);
  FUN_32b2_6cc6(in_stack_00000012,in_stack_00000014,in_stack_00000016,in_stack_00000018,uVar2,
                *(undefined2 *)((uVar1 & 0xff) * 2 + 0xa88),in_stack_00000010,in_stack_0000001a,
                in_stack_0000001c);
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_704d();
  FUN_32b2_6d9b();
  FUN_32b2_718c(0x32b2);
  FUN_32b2_6e4b();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  FUN_1def_0228();
  return;
}


