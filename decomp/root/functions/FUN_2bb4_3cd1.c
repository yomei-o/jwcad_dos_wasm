/* 2bb4:3cd1 */

undefined2 __cdecl16far
FUN_2bb4_3cd1(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar3;
  undefined1 in_ZF;
  undefined1 uVar4;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined2 *in_stack_00000030;
  undefined2 *in_stack_00000032;
  
  FUN_32b2_02bc();
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_6e4b();
  FUN_32b2_6ef9();
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_6e63(0x32b2);
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_6e63(0x32b2);
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_6e4b();
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_717d(0x32b2);
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_704d();
  FUN_32b2_7173(0x32b2);
  FUN_32b2_6e4b();
  FUN_32b2_6ef9();
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_704d();
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_704d();
  FUN_32b2_7173(0x32b2);
  FUN_32b2_6e4b();
  FUN_32b2_6ef9();
  FUN_32b2_6cc6();
  FUN_32b2_6cc6();
  FUN_32b2_7191(0x32b2);
  if ((bool)in_ZF) {
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7191(0x32b2);
    if ((bool)in_ZF) {
      uVar1 = *(undefined2 *)0x9380;
      uVar2 = *(undefined2 *)0x9382;
      goto LAB_2bb4_3e02;
    }
  }
  uVar4 = 0;
  FUN_32b2_6cc6();
  FUN_32b2_6cc6();
  FUN_32b2_7191(0x32b2);
  if (!(bool)uVar4) {
    FUN_32b2_6d14();
    FUN_32b2_6cc6();
    FUN_32b2_701d();
    FUN_32b2_6fc7();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_7191(0x32b2);
    if (!(bool)in_CF) {
LAB_2bb4_3e9b:
      uVar3 = 0;
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_707d();
      FUN_32b2_6e4b();
      FUN_32b2_704d();
      FUN_32b2_7095();
      FUN_32b2_6e63(0x32b2);
      FUN_32b2_6cc6();
      FUN_32b2_704d();
      FUN_32b2_7095();
      FUN_32b2_6e63(0x32b2);
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191(0x32b2);
      if ((bool)uVar4) {
        *in_stack_00000030 = param_1;
        in_stack_00000030[1] = param_2;
      }
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191(0x32b2);
      if ((bool)uVar4) {
        *in_stack_00000032 = param_3;
        in_stack_00000032[1] = param_4;
      }
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191(0x32b2);
      if ((bool)uVar4) {
        *in_stack_00000030 = in_stack_0000001a;
        in_stack_00000030[1] = in_stack_0000001c;
      }
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191(0x32b2);
      if ((bool)uVar4) {
        *in_stack_00000032 = in_stack_0000001e;
        in_stack_00000032[1] = in_stack_00000020;
      }
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191(0x32b2);
      if ((bool)uVar3 || (bool)uVar4) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_7191(0x32b2);
        if ((bool)uVar3 || (bool)uVar4) {
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191(0x32b2);
          if (!(bool)uVar3) {
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_7191(0x32b2);
            if ((bool)uVar3 || (bool)uVar4) {
              return 0xfffe;
            }
          }
          return 1;
        }
      }
      return 0xffff;
    }
    FUN_32b2_6cc6();
    FUN_32b2_6fc7();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_7191(0x32b2);
    if (!(bool)in_CF) goto LAB_2bb4_3e9b;
  }
  uVar1 = *(undefined2 *)0x93e8;
  uVar2 = *(undefined2 *)0x93ea;
LAB_2bb4_3e02:
  *in_stack_00000030 = uVar1;
  in_stack_00000030[1] = uVar2;
  *in_stack_00000032 = uVar1;
  in_stack_00000032[1] = uVar2;
  return 0;
}


