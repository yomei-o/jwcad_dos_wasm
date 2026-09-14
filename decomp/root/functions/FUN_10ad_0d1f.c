/* 10ad:0d1f */

void __cdecl16far FUN_10ad_0d1f(undefined2 param_1,undefined2 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 extraout_DX;
  undefined2 uVar4;
  undefined2 unaff_SI;
  undefined2 *puVar5;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined1 uVar7;
  uint *in_stack_00000012;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000016;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  int *in_stack_0000001c;
  undefined2 local_a;
  
  FUN_32b2_02bc();
  while( true ) {
    local_a = in_stack_0000001a;
    uVar1 = FUN_10ad_0773(param_1,param_2,&local_a,in_stack_00000014,in_stack_00000016,
                          in_stack_00000018);
    *in_stack_00000012 = uVar1;
    if (100 < *in_stack_0000001c) break;
    if (*in_stack_00000012 == 0x5e) {
      local_a = in_stack_0000001a;
      iVar2 = FUN_10ad_0a7a(param_1,param_2,in_stack_0000001a,in_stack_0000001c,unaff_SI,unaff_DI,
                            in_stack_00000012,in_stack_00000014,in_stack_00000016,in_stack_00000018)
      ;
      unaff_SI = *(undefined2 *)(iVar2 + 4);
      unaff_DI = *(undefined2 *)(iVar2 + 6);
    }
    if (100 < *in_stack_0000001c) break;
    if ((((*in_stack_00000012 == 0x61) || (*in_stack_00000012 == 0x69)) ||
        (*in_stack_00000012 == 99)) || (*in_stack_00000012 == 0x73)) {
      local_a = in_stack_0000001a;
      iVar2 = FUN_10ad_0ba3(0x32b2,param_1,param_2,in_stack_0000001a,in_stack_0000001c,unaff_SI,
                            unaff_DI,in_stack_00000012,in_stack_00000014,in_stack_00000016,
                            in_stack_00000018);
      unaff_SI = *(undefined2 *)(iVar2 + 4);
      unaff_DI = *(undefined2 *)(iVar2 + 6);
    }
    if (100 < *in_stack_0000001c) break;
    if (param_3 == 0x2a) {
      local_a = 0x18e2;
      FUN_32b2_6d14();
      local_a = 0x32b2;
      FUN_32b2_710c();
      local_a = 0x18f1;
      FUN_32b2_6eb1();
    }
    uVar6 = param_3 == 0x2f;
    if ((bool)uVar6) {
      local_a = 0x18ff;
      FUN_32b2_6d14();
      local_a = 0x1908;
      FUN_32b2_6d14();
      local_a = 0x190d;
      FUN_32b2_7191();
      if ((bool)uVar6) {
        *in_stack_0000001c = 0x66;
      }
      else {
        local_a = 0x1917;
        FUN_32b2_6d14();
        local_a = 0x32b2;
        FUN_32b2_713c();
        local_a = 0x1926;
        FUN_32b2_6eb1();
      }
    }
    uVar6 = param_3 < 0x25;
    uVar7 = param_3 == 0x25;
    if ((bool)uVar7) {
      local_a = 0x1941;
      FUN_32b2_6d14();
      local_a = 0x1949;
      FUN_32b2_6d14();
      local_a = 0x194e;
      FUN_32b2_6fc7();
      local_a = 0x1953;
      FUN_32b2_7191();
      if ((bool)uVar6 || (bool)uVar7) {
        local_a = 0x195e;
        FUN_32b2_6d14();
        local_a = 0x1966;
        FUN_32b2_6d14();
        local_a = 0x196b;
        FUN_32b2_6fc7();
        local_a = 0x1970;
        FUN_32b2_7191();
        if ((bool)uVar6 || (bool)uVar7) {
          local_a = 0x1983;
          uVar4 = extraout_DX;
          FUN_32b2_6d14();
          local_a = 0x1988;
          local_a = FUN_32b2_6f61();
          FUN_32b2_6d14();
          uVar3 = FUN_32b2_6f61();
          FUN_32b2_4e44(uVar3,uVar4);
          local_a = 0x19b8;
          FUN_32b2_6d94();
          local_a = 0x19c0;
          FUN_32b2_6eb1();
          goto LAB_10ad_0ef0;
        }
      }
      *in_stack_0000001c = 0x65;
    }
LAB_10ad_0ef0:
    local_a = 0x19c9;
    FUN_32b2_6d14();
    local_a = 0x19d1;
    FUN_32b2_6d14();
    local_a = 0x19d6;
    FUN_32b2_7191();
    if (!(bool)uVar6 && !(bool)uVar7) {
      *in_stack_0000001c = 0x65;
    }
    if (100 < *in_stack_0000001c) break;
    if (((*in_stack_00000012 != 0x2a) && (*in_stack_00000012 != 0x2f)) &&
       (*in_stack_00000012 != 0x25)) {
      puVar5 = (undefined2 *)&stack0x000a;
      goto LAB_10ad_0d61;
    }
    param_3 = *in_stack_00000012;
  }
  puVar5 = (undefined2 *)0x9000;
LAB_10ad_0d61:
  *(undefined2 *)0x7a2a = *puVar5;
  *(undefined2 *)0x7a2c = puVar5[1];
  *(undefined2 *)0x7a2e = puVar5[2];
  *(undefined2 *)0x7a30 = puVar5[3];
  return;
}


