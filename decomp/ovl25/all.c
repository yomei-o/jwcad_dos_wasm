/* Ghidra decompilation of jw25.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  127 bytes, 5 callers */

undefined2 __cdecl16far FUN_3ab8_0000(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  func_0x00012276(0x22b2,0x1dc);
  *(undefined2 *)0xc22 = 1;
  uVar1 = 0xdef;
  FUN_1000_0599(0x11f2,0x12,2);
  if (param_1 == 1) {
    uVar1 = 0x11f2;
    func_0x00012276(0xdef,0x2be);
  }
  uVar2 = uVar1;
  if (param_1 == 2) {
    uVar2 = 0x11f2;
    func_0x00012276(uVar1,0x2ce);
  }
  uVar1 = uVar2;
  if (param_1 == 3) {
    uVar1 = 0x11f2;
    func_0x00012276(uVar2,0x396);
  }
  uVar2 = uVar1;
  if (param_1 == 4) {
    uVar2 = 0x11f2;
    func_0x00012276(uVar1,0x396);
  }
  if (param_1 == 5) {
    func_0x00012276(uVar2,0x25c);
  }
  return 0;
}



/* 3ab8:007f  FUN_3ab8_007f  164 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_007f(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined2 local_22 [6];
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  
  FUN_21f2_0ebc();
  local_8 = 0;
  local_a = 0x22b2;
  local_c = 0xac14;
  func_0x0000daa6();
  local_24 = 0;
  local_8 = 0x885;
  local_a = 0xac22;
  func_0x00029834();
  local_8 = 0x22b2;
  local_a = 0xac2a;
  func_0x00029983();
  local_8 = 0x22b2;
  local_a = 0xac32;
  func_0x00029834();
  local_8 = 0x22b2;
  local_a = 0xac3a;
  func_0x00029983();
  local_8 = 0x22b2;
  local_a = 0xac42;
  func_0x00029834();
  local_8 = 0x22b2;
  local_a = 0xac4a;
  func_0x00029983();
  local_12 = 0;
  local_14 = 0;
  local_e = 0;
  local_10 = 0;
  local_16 = 10000;
  local_a = 0;
  local_c = 0;
  local_8 = CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
  puVar5 = &uStack_26;
  puVar4 = local_22;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iVar3 = FUN_13bf_01c1();
  if (0 < iVar3) {
    local_24 = 1;
  }
  local_8 = 0x11f2;
  local_a = 0xac9a;
  func_0x0000abfa();
  return local_24;
}



/* 3ab8:0123  FUN_3ab8_0123  277 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0123(void)

{
  undefined2 unaff_DS;
  undefined1 uVar1;
  undefined1 local_66 [4];
  undefined1 local_62 [4];
  undefined1 local_5e [74];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 *puStack_10;
  undefined1 **local_e;
  undefined1 *local_c;
  undefined1 *puStack_a;
  undefined2 local_8;
  undefined1 *local_6;
  int local_4;
  
  local_4 = 0x3ab8;
  local_6 = (undefined1 *)0xacae;
  FUN_21f2_0ebc();
  do {
    while( true ) {
      local_4 = 0x22b2;
      local_6 = (undefined1 *)0xacb7;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = (undefined1 *)0xacbf;
      func_0x0002996b();
      local_4 = 0x22b2;
      local_6 = (undefined1 *)0xacc7;
      func_0x00029983();
      local_4 = 0x22b2;
      local_6 = (undefined1 *)0xaccc;
      func_0x0001bb4e();
      local_4 = 0x5980;
      local_6 = (undefined1 *)0x1bb4;
      local_8 = 0xacd5;
      func_0x00012276();
      local_4 = *(undefined2 *)0xa362;
      local_6 = (undefined1 *)*(undefined2 *)0xa360;
      local_8 = *(undefined2 *)0x5998;
      puStack_a = (undefined1 *)*(undefined2 *)0x5996;
      local_c = (undefined1 *)0x598a;
      local_e = (undefined1 **)local_5e;
      puStack_10 = (undefined2 *)0x11f2;
      uStack_12 = 0xacf3;
      FUN_10ad_1928();
      local_6 = (undefined1 *)0x1;
      local_8 = 0x32;
      puStack_a = (undefined1 *)0x11f2;
      local_c = (undefined1 *)0xad03;
      FUN_1000_0599();
      local_6 = local_5e;
      local_8 = 0xdef;
      puStack_a = (undefined1 *)0xad0e;
      func_0x00012276();
      local_6 = (undefined1 *)0x1;
      local_8 = 0x11;
      puStack_a = local_66;
      local_c = local_62;
      local_e = &local_c;
      puStack_10 = &local_8;
      uStack_12 = 0x11f2;
      uStack_14 = 0xad2c;
      local_4 = func_0x000021a4();
      if (local_4 == -1) {
        return 0xffff;
      }
      uVar1 = 0;
      if (*(int *)0x158 != 0) {
        return 1;
      }
      local_6 = (undefined1 *)0xad;
      local_8 = 0xad4f;
      func_0x00029834();
      local_6 = (undefined1 *)0x22b2;
      local_8 = 0xad57;
      func_0x000297e6();
      local_6 = (undefined1 *)0x22b2;
      local_8 = 0xad5c;
      func_0x00029d78();
      local_6 = (undefined1 *)0x22b2;
      local_8 = 0xad61;
      FUN_28b3_1181();
      if (!(bool)uVar1) break;
LAB_3ab8_01fb:
      local_4 = 4;
      local_6 = (undefined1 *)0x22b2;
      local_8 = 0xad83;
      FUN_3ab8_0000();
    }
    local_4 = 0x22b2;
    local_6 = (undefined1 *)0xad6b;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = (undefined1 *)0xad74;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = (undefined1 *)0xad79;
    FUN_28b3_1181();
    if ((bool)uVar1) goto LAB_3ab8_01fb;
    if (local_4 == 0) {
      *(undefined2 *)0x5996 = local_8;
      *(undefined2 *)0x5998 = local_6;
      return 0;
    }
    if (local_4 == 0x65) {
      return 0;
    }
    if (local_4 == 0x66) {
      return 0;
    }
  } while( true );
}



/* 3ab8:0238  FUN_3ab8_0238  784 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_0238(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 in_ZF;
  int *in_stack_00000014;
  int in_stack_00000016;
  int in_stack_00000018;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  FUN_21f2_0ebc();
  func_0x00029834(0x22b2);
  func_0x00029ae7(0x22b2);
  func_0x000299b9(0x22b2);
  FUN_28b3_0ee9(0x22b2);
  func_0x00029834(0x22b2);
  func_0x00029834(0x22b2);
  func_0x00029ae7(0x22b2);
  func_0x000299b9(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)in_CF) {
    func_0x00029834(0x22b2);
    func_0x00029834(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)in_CF) {
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299b9(0x22b2);
      FUN_28b3_0ee9(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029c2c(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029c2c(0x22b2);
      func_0x000299b9(0x22b2);
      FUN_28b3_117c(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029c2c(0x22b2);
      FUN_28b3_1163(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029c2c(0x22b2);
      FUN_28b3_1172(0x22b2);
      func_0x000299b9(0x22b2);
      FUN_28b3_0ee9(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029c2c(0x22b2);
      FUN_28b3_10e4(0x22b2);
      func_0x000299b9(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)in_CF && !(bool)in_ZF) {
        func_0x00029834(0x22b2);
        func_0x00029834(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)in_CF) {
          puVar4 = (undefined2 *)FUN_28b3_1582(0x22b2,local_22,local_20,local_1e,local_1c);
          uVar5 = *puVar4;
          uVar6 = puVar4[1];
          uVar1 = puVar4[2];
          uVar2 = puVar4[3];
          *in_stack_00000014 = *in_stack_00000014 + 1;
          uVar7 = unaff_SI;
          uVar8 = unaff_DI;
          puVar4 = (undefined2 *)FUN_1def_05d1(0x22b2,0,uVar1,uVar2,unaff_SI,unaff_DI,uVar5,uVar6);
          uVar1 = puVar4[1];
          iVar3 = *in_stack_00000014;
          *(undefined2 *)(iVar3 * 4 + in_stack_00000016) = *puVar4;
          *(undefined2 *)(iVar3 * 4 + in_stack_00000016 + 2) = uVar1;
          puVar4 = (undefined2 *)func_0x0001e558(0x1bb4,0,uVar5,uVar6,uVar7,uVar8,unaff_SI,unaff_DI)
          ;
          uVar5 = puVar4[1];
          iVar3 = *in_stack_00000014;
          *(undefined2 *)(iVar3 * 4 + in_stack_00000018) = *puVar4;
          *(undefined2 *)(iVar3 * 4 + in_stack_00000018 + 2) = uVar5;
          *in_stack_00000014 = *in_stack_00000014 + 1;
          func_0x00029834(0x1bb4);
          func_0x00029af6(0x22b2);
          uVar6 = 0x22b2;
          uVar5 = 0xb04b;
          func_0x000299b9(0x22b2);
          func_0x000299d1(0x22b2);
          puVar4 = (undefined2 *)FUN_1def_05d1(0x22b2,0,uVar5,uVar6,uVar7,uVar8);
          uVar5 = puVar4[1];
          iVar3 = *in_stack_00000014;
          *(undefined2 *)(iVar3 * 4 + in_stack_00000016) = *puVar4;
          *(undefined2 *)(iVar3 * 4 + in_stack_00000016 + 2) = uVar5;
          uVar6 = 0x1bb4;
          uVar5 = 0xb089;
          func_0x00029834(0x1bb4);
          func_0x000299d1(0x22b2);
          puVar4 = (undefined2 *)func_0x0001e558(0x22b2,0,uVar5,uVar6,uVar7,uVar8);
          uVar5 = puVar4[1];
          iVar3 = *in_stack_00000014;
          *(undefined2 *)(iVar3 * 4 + in_stack_00000018) = *puVar4;
          *(undefined2 *)(iVar3 * 4 + in_stack_00000018 + 2) = uVar5;
          return 2;
        }
        *in_stack_00000014 = *in_stack_00000014 + 1;
        puVar4 = (undefined2 *)
                 FUN_1def_05d1(0x22b2,0,local_32,local_30,local_2e,local_2c,*(undefined2 *)0xa388,
                               *(undefined2 *)0xa38a,*(undefined2 *)0xa38c,*(undefined2 *)0xa38e,
                               local_2e,local_2c);
        uVar5 = puVar4[1];
        iVar3 = *in_stack_00000014;
        *(undefined2 *)(iVar3 * 4 + in_stack_00000016) = *puVar4;
        *(undefined2 *)(iVar3 * 4 + in_stack_00000016 + 2) = uVar5;
        puVar4 = (undefined2 *)
                 func_0x0001e558(0x1bb4,0,local_32,local_30,local_2e,local_2c,*(undefined2 *)0xa388,
                                 *(undefined2 *)0xa38a,*(undefined2 *)0xa38c,*(undefined2 *)0xa38e);
        uVar5 = puVar4[1];
        iVar3 = *in_stack_00000014;
        *(undefined2 *)(iVar3 * 4 + in_stack_00000018) = *puVar4;
        *(undefined2 *)(iVar3 * 4 + in_stack_00000018 + 2) = uVar5;
        return 1;
      }
    }
  }
  return 0;
}



/* 3ab8:0548  FUN_3ab8_0548  779 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_0548(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  int *in_stack_00000024;
  int in_stack_00000026;
  int in_stack_00000028;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 local_a;
  
  FUN_21f2_0ebc();
  local_a = 0xb0de;
  func_0x00029834();
  local_a = 0xb0e6;
  func_0x00029834();
  local_a = 0xb0eb;
  func_0x00029ae7();
  local_a = 0xb0f3;
  func_0x000299b9();
  local_a = 0xb0f8;
  FUN_28b3_1181();
  if (!(bool)in_CF) {
    local_a = param_7;
    uStack_c = param_6;
    uStack_e = param_5;
    uStack_10 = param_4;
    uStack_12 = param_3;
    uStack_14 = param_2;
    uStack_16 = param_1;
    uStack_18 = 1;
    FUN_1def_05d1(0x22b2);
    local_a = 0xb12a;
    func_0x000297e6();
    local_a = 0xb12f;
    func_0x00029d78();
    local_a = 0xb137;
    func_0x000299d1();
    local_a = param_7;
    uStack_c = param_6;
    uStack_e = param_5;
    uStack_10 = param_4;
    uStack_12 = param_3;
    uStack_14 = param_2;
    uStack_16 = param_1;
    uStack_18 = 1;
    func_0x0001e558(0x22b2);
    uVar4 = (undefined1 *)0xffed < &uStack_18;
    uVar5 = &stack0x0000 == (undefined1 *)0x6;
    local_a = 0xb162;
    func_0x000297e6();
    local_a = 0xb167;
    func_0x00029d78();
    local_a = 0xb16f;
    func_0x000299b9();
    local_a = 0xb177;
    func_0x00029bfc();
    local_a = 0xb17f;
    func_0x000299b9();
    local_a = 0xb187;
    func_0x000299d1();
    local_a = 0xb18f;
    func_0x00029834();
    local_a = 0xb197;
    func_0x00029c2c();
    local_a = 0xb19f;
    func_0x00029834();
    local_a = 0xb1a7;
    func_0x00029c2c();
    local_a = 0xb1ac;
    FUN_28b3_1163();
    local_a = 0xb1b4;
    func_0x000299b9();
    local_a = 0xb1bc;
    func_0x000299d1();
    local_a = 0xb1c5;
    func_0x00029834();
    local_a = 0xb1cd;
    func_0x00029834();
    local_a = 0xb1d2;
    FUN_28b3_1181();
    if (!(bool)uVar4 && !(bool)uVar5) {
      local_a = 0xb1e0;
      func_0x00029834();
      local_a = 0xb1e8;
      func_0x00029834();
      local_a = 0xb1ed;
      FUN_28b3_1181();
      if (!(bool)uVar4) {
        uStack_10 = 0x22b2;
        uStack_12 = 0xb284;
        iVar2 = FUN_28b3_1582();
        uStack_18 = *(undefined2 *)(iVar2 + 2);
        uStack_16 = *(undefined2 *)(iVar2 + 4);
        uStack_14 = *(undefined2 *)(iVar2 + 6);
        *in_stack_00000024 = *in_stack_00000024 + 1;
        local_a = in_stack_00000020;
        uStack_c = in_stack_0000001e;
        uStack_e = in_stack_0000001c;
        uStack_10 = 0x22b2;
        uStack_12 = 0xb2ab;
        func_0x00029834();
        uStack_10 = 0x22b2;
        uStack_12 = 0xb2b3;
        func_0x00029c74();
        uStack_10 = 0x22b2;
        uStack_12 = 0xb2bb;
        func_0x000299b9();
        uStack_18 = 0x22b2;
        func_0x000299d1();
        uStack_18 = 0;
        puVar3 = (undefined2 *)FUN_1def_05d1(0x22b2);
        uVar1 = puVar3[1];
        iVar2 = *in_stack_00000024;
        *(undefined2 *)(iVar2 * 4 + in_stack_00000026) = *puVar3;
        *(undefined2 *)(iVar2 * 4 + in_stack_00000026 + 2) = uVar1;
        local_a = in_stack_00000020;
        uStack_c = in_stack_0000001e;
        uStack_e = in_stack_0000001c;
        uStack_10 = 0x1bb4;
        uStack_12 = 0xb2fc;
        func_0x00029834();
        uStack_18 = 0x22b2;
        func_0x000299d1();
        uStack_18 = 0;
        puVar3 = (undefined2 *)func_0x0001e558(0x22b2);
        uVar1 = puVar3[1];
        iVar2 = *in_stack_00000024;
        *(undefined2 *)(iVar2 * 4 + in_stack_00000028) = *puVar3;
        *(undefined2 *)(iVar2 * 4 + in_stack_00000028 + 2) = uVar1;
        local_a = 0xb331;
        func_0x00029834();
        local_a = 0xb339;
        func_0x00029bfc();
        local_a = 0xb341;
        func_0x000299b9();
        local_a = 0xb349;
        func_0x000299d1();
        *in_stack_00000024 = *in_stack_00000024 + 1;
        local_a = in_stack_00000020;
        uStack_c = in_stack_0000001e;
        uStack_e = in_stack_0000001c;
        uStack_10 = 0x22b2;
        uStack_12 = 0xb362;
        func_0x00029834();
        uStack_18 = 0x22b2;
        func_0x000299d1();
        uStack_18 = 0;
        puVar3 = (undefined2 *)FUN_1def_05d1(0x22b2);
        uVar1 = puVar3[1];
        iVar2 = *in_stack_00000024;
        *(undefined2 *)(iVar2 * 4 + in_stack_00000026) = *puVar3;
        *(undefined2 *)(iVar2 * 4 + in_stack_00000026 + 2) = uVar1;
        local_a = in_stack_00000020;
        uStack_c = in_stack_0000001e;
        uStack_e = in_stack_0000001c;
        uStack_10 = 0x1bb4;
        uStack_12 = 0xb3a0;
        func_0x00029834();
        uStack_18 = 0x22b2;
        func_0x000299d1();
        uStack_18 = 0;
        puVar3 = (undefined2 *)func_0x0001e558(0x22b2);
        uVar1 = puVar3[1];
        iVar2 = *in_stack_00000024;
        *(undefined2 *)(iVar2 * 4 + in_stack_00000028) = *puVar3;
        *(undefined2 *)(iVar2 * 4 + in_stack_00000028 + 2) = uVar1;
        return 2;
      }
      *in_stack_00000024 = *in_stack_00000024 + 1;
      local_a = in_stack_00000020;
      uStack_c = in_stack_0000001e;
      uStack_e = in_stack_0000001c;
      uStack_10 = 0xb158;
      uStack_18 = 0;
      puVar3 = (undefined2 *)FUN_1def_05d1(0x22b2);
      uVar1 = puVar3[1];
      iVar2 = *in_stack_00000024;
      *(undefined2 *)(iVar2 * 4 + in_stack_00000026) = *puVar3;
      *(undefined2 *)(iVar2 * 4 + in_stack_00000026 + 2) = uVar1;
      local_a = in_stack_00000020;
      uStack_c = in_stack_0000001e;
      uStack_e = in_stack_0000001c;
      uStack_10 = 0xb217;
      uStack_18 = 0;
      puVar3 = (undefined2 *)func_0x0001e558(0x1bb4);
      uVar1 = puVar3[1];
      iVar2 = *in_stack_00000024;
      *(undefined2 *)(iVar2 * 4 + in_stack_00000028) = *puVar3;
      *(undefined2 *)(iVar2 * 4 + in_stack_00000028 + 2) = uVar1;
      return 1;
    }
  }
  return 0;
}



/* 3ab8:0853  FUN_3ab8_0853  649 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_0853(int param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  int local_44;
  undefined1 local_36 [4];
  undefined1 local_32 [4];
  int local_2e;
  int local_2c;
  int local_2a;
  int in_stack_0000ffd8;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined1 *local_10;
  undefined1 *local_e;
  undefined2 local_c;
  undefined1 *local_a;
  undefined1 *puStack_8;
  
  uVar6 = 0x22b2;
  FUN_21f2_0ebc();
  if (param_1 == 0) {
    puStack_8 = (undefined1 *)0x3;
    local_a = (undefined1 *)0x22b2;
    local_c = (undefined1 *)0xb3ee;
    FUN_3ab8_0000();
    return 0;
  }
  do {
    local_2e = 0;
    local_a = (undefined1 *)0xb41b;
    puStack_8 = (undefined1 *)uVar6;
    func_0x0001bb4e();
    puStack_8 = (undefined1 *)param_1;
    local_a = (undefined1 *)0x9ba;
    local_c = (undefined1 *)0x599a;
    local_e = (undefined1 *)0x1bb4;
    local_10 = (undefined1 *)0xb42b;
    func_0x00012276();
    puStack_8 = (undefined1 *)0x11f2;
    local_a = (undefined1 *)0xb436;
    func_0x00029834();
    puStack_8 = (undefined1 *)0x22b2;
    local_a = (undefined1 *)0xb43e;
    func_0x00029983();
    local_1a = 10000;
    local_16 = 0;
    local_18 = 0;
    uVar6 = 0x22b2;
    while( true ) {
      puStack_8 = &stack0xffd8;
      local_a = local_36;
      local_c = local_32;
      local_e = &stack0xfffa;
      local_10 = &stack0xfffc;
      uVar7 = 0x3bf;
      local_14 = 0xb48f;
      local_12 = uVar6;
      local_2c = func_0x00006608();
      if (*(int *)0x158 != 0) {
        puStack_8 = (undefined1 *)0x3bf;
        local_a = (undefined1 *)0xb4a4;
        func_0x00013e19();
        return 0xfba9;
      }
      if (local_2c == -1) {
        puStack_8 = (undefined1 *)0x3bf;
        local_a = (undefined1 *)0xb3fe;
        func_0x00013e19();
        return 0xffff;
      }
      if (local_2c == 99) break;
      for (local_2a = 1; puStack_8 = (undefined1 *)uVar7, local_2a <= param_1;
          local_2a = local_2a + 1) {
        local_a = (undefined1 *)0xb4c6;
        func_0x000297e6();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb4ce;
        FUN_28b3_100d();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb4d6;
        func_0x0002996b();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb4de;
        func_0x00029983();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb4e8;
        func_0x000297e6();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb4f0;
        FUN_28b3_100d();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb4f8;
        func_0x0002996b();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb500;
        func_0x00029983();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb508;
        func_0x000297e6();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb510;
        func_0x000297e6();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb518;
        func_0x00029b6d();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb520;
        func_0x000297e6();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb528;
        func_0x00029b6d();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb52d;
        FUN_28b3_117c();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb532;
        func_0x00029d78();
        local_10 = (undefined1 *)0x22b2;
        local_12 = 0xb53c;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = 0xb541;
        FUN_28b3_1582();
        uVar8 = (undefined1 *)0xfff7 < &local_e;
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb54b;
        func_0x00029834();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb553;
        func_0x00029bfc();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb55b;
        func_0x0002996b();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb560;
        func_0x00029ae7();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb568;
        func_0x0002996b();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb56d;
        FUN_28b3_1181();
        if ((bool)uVar8) {
          puStack_8 = (undefined1 *)0x22b2;
          local_a = (undefined1 *)0xb577;
          func_0x000297e6();
          puStack_8 = (undefined1 *)0x22b2;
          local_a = (undefined1 *)0xb57f;
          func_0x00029983();
          local_44 = local_2a;
        }
        uVar7 = 0x22b2;
      }
      if (local_2e != local_44) {
        local_a = (undefined1 *)0xb5a0;
        func_0x00013e19();
        local_c = (undefined1 *)CONCAT11(local_c._1_1_,*(undefined1 *)0xa6c);
        uVar8 = local_44 << 1 < 0;
        iVar3 = local_44 * 4;
        local_26 = *(undefined2 *)(iVar3 + param_2);
        local_24 = *(undefined2 *)(iVar3 + param_2 + 2);
        local_22 = *(undefined2 *)(iVar3 + param_3);
        local_20 = *(undefined2 *)(iVar3 + param_3 + 2);
        puStack_8 = (undefined1 *)0x11f2;
        local_a = (undefined1 *)0xb5d2;
        func_0x00029834();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb5da;
        func_0x000297e6();
        puStack_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xb5df;
        func_0x00029d78();
        puStack_8 = (undefined1 *)0x22b2;
        uVar7 = 0x22b2;
        local_a = (undefined1 *)0xb5e4;
        FUN_28b3_1181();
        if (!(bool)uVar8) {
          local_c = (undefined1 *)CONCAT11(9,(undefined1)local_c);
          puVar5 = &local_26;
          puVar4 = &local_26;
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar5;
            puVar5 = puVar5 + 1;
            puVar1 = puVar4;
            puVar4 = puVar4 + 1;
            *puVar2 = *puVar1;
          }
          in_stack_0000ffd8 = 0x22b2;
          uVar7 = 0x11f2;
          local_2a = -0x4a02;
          func_0x00013e46();
        }
        local_2e = local_44;
      }
      uVar6 = uVar7;
      if (in_stack_0000ffd8 != 0) {
        local_a = (undefined1 *)0xb615;
        puStack_8 = (undefined1 *)uVar7;
        func_0x00013e19();
        puStack_8 = (undefined1 *)0x0;
        local_a = (undefined1 *)0x11f2;
        local_c = (undefined1 *)0xb61d;
        func_0x0000daa6();
        local_c = (undefined1 *)CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
        local_a = (undefined1 *)CONCAT11(local_a._1_1_,*(undefined1 *)0xb310);
        puVar5 = &local_26;
        puVar4 = &local_26;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
        local_2a = 0xb644;
        iVar3 = FUN_13bf_01c1();
        if (iVar3 < 1) {
          return 0;
        }
        puStack_8 = (undefined1 *)0x11f2;
        local_a = (undefined1 *)0xb653;
        func_0x0000abfa();
        return 1;
      }
    }
    puStack_8 = (undefined1 *)0x3bf;
    uVar6 = 0x11f2;
    local_a = (undefined1 *)0xb411;
    func_0x00013e19();
  } while( true );
}



/* 3ab8:0adc  FUN_3ab8_0adc  470 bytes, 2 callers */

/* WARNING: Removing unreachable block (ram,0x0003b7bd) */
/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far
FUN_3ab8_0adc(int param_1,undefined2 ******param_2,int param_3,int *param_4,undefined2 ******param_5
             ,undefined2 param_6)

{
  int iVar1;
  int iVar2;
  undefined2 ******ppppppuVar3;
  undefined2 ******ppppppuVar4;
  undefined2 unaff_DS;
  long lVar5;
  undefined4 uVar6;
  undefined1 local_92 [100];
  undefined2 *****local_2e [12];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 ******ppppppuStack_10;
  undefined2 *****pppppuStack_e;
  undefined2 ******ppppppuStack_c;
  undefined2 ******ppppppuStack_a;
  undefined2 ******ppppppuStack_8;
  undefined2 *******local_6;
  int local_4;
  
  local_4 = 0x3ab8;
  ppppppuVar3 = (undefined2 ******)0x22b2;
  local_6 = (undefined2 *******)0xb667;
  FUN_21f2_0ebc();
  param_4[1] = 0;
  *param_4 = 0;
  do {
    do {
      while( true ) {
        if ((param_1 == 1) || (ppppppuVar4 = ppppppuVar3, param_1 == 2)) {
          local_4 = 0x302;
          local_6 = (undefined2 *******)param_2;
          ppppppuStack_8 = (undefined2 ******)0x59a1;
          ppppppuStack_a = (undefined2 ******)local_92;
          ppppppuVar4 = (undefined2 ******)0x22b2;
          pppppuStack_e = (undefined2 *****)0xb692;
          ppppppuStack_c = ppppppuVar3;
          FUN_21f2_3454();
        }
        ppppppuVar3 = ppppppuVar4;
        if (param_1 == 3) {
          local_4 = 0x2f0;
          local_6 = (undefined2 *******)param_2;
          ppppppuStack_8 = (undefined2 ******)0x59a8;
          ppppppuStack_a = (undefined2 ******)local_92;
          ppppppuVar3 = (undefined2 ******)0x22b2;
          pppppuStack_e = (undefined2 *****)0xb6b0;
          ppppppuStack_c = ppppppuVar4;
          FUN_21f2_3454();
        }
        local_4 = *(undefined2 *)0xa362;
        local_6 = (undefined2 *******)*(undefined2 *)0xa360;
        ppppppuStack_8 = (undefined2 ******)*(undefined2 *)0x5998;
        ppppppuStack_a = (undefined2 ******)*(undefined2 *)0x5996;
        ppppppuStack_c = (undefined2 ******)0x59b3;
        pppppuStack_e = local_2e;
        uStack_12 = 0xb6d0;
        ppppppuStack_10 = ppppppuVar3;
        FUN_10ad_1928();
        local_6 = (undefined2 *******)local_2e;
        ppppppuStack_8 = (undefined2 ******)local_92;
        ppppppuStack_a = (undefined2 ******)0x11f2;
        ppppppuStack_c = (undefined2 ******)0xb6e1;
        FUN_21f2_2d26();
        local_6 = &local_6;
        ppppppuStack_8 = (undefined2 ******)param_6;
        ppppppuStack_a = param_5;
        ppppppuStack_c = (undefined2 ******)local_92;
        pppppuStack_e = (undefined2 *****)param_3;
        ppppppuStack_10 = (undefined2 ******)0x22b2;
        ppppppuVar3 = (undefined2 ******)0x1bb4;
        uStack_12 = 0xb6fa;
        iVar1 = FUN_1def_0904();
        if (*(int *)0x158 != 0) {
          return 1;
        }
        if ((iVar1 == -1) && (param_3 != 0)) {
          return 0xffff;
        }
        if ((iVar1 == 0x14) && (*(int *)0xc2c != 0)) {
          return 0x14;
        }
        if (iVar1 == 1) {
          local_4 = 0x1bb4;
          local_6 = (undefined2 *******)0xb738;
          FUN_3ab8_0123();
        }
        if ((local_6 != (undefined2 *******)0x0) && ((param_1 == 1 || (param_1 == 2)))) break;
        if ((local_6 != (undefined2 *******)0x0) && (param_1 == 3)) {
          local_4 = param_6;
          local_6 = (undefined2 *******)param_5;
          ppppppuStack_8 = param_5;
          ppppppuStack_a = (undefined2 ******)0x1bb4;
          ppppppuVar3 = (undefined2 ******)0x11f2;
          ppppppuStack_c = (undefined2 ******)0xb821;
          iVar1 = func_0x00015409();
          if (iVar1 != 0) {
            return 10;
          }
        }
      }
      local_4 = 0x1bb4;
      local_6 = (undefined2 *******)0xb758;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = (undefined2 *******)0xb75d;
      func_0x00029d78();
      ppppppuStack_c = (undefined2 ******)0x22b2;
      pppppuStack_e = (undefined2 *****)0xb767;
      func_0x000299d1();
      ppppppuStack_c = (undefined2 ******)0x22b2;
      pppppuStack_e = (undefined2 *****)0xb76f;
      func_0x000297e6();
      ppppppuStack_c = (undefined2 ******)0x22b2;
      pppppuStack_e = (undefined2 *****)0xb774;
      func_0x00029d78();
      uStack_14 = 0x22b2;
      uStack_16 = 0xb77e;
      func_0x000299d1();
      uStack_14 = 0x22b2;
      ppppppuVar3 = (undefined2 ******)0x11f2;
      uStack_16 = 0xb783;
      lVar5 = FUN_13bf_39a0();
      iVar2 = (int)((ulong)lVar5 >> 0x10);
      iVar1 = (int)lVar5;
    } while (lVar5 == 0);
    if ((param_1 == 1) && (lVar5 < 0)) {
      local_4 = 1;
    }
    else if ((param_1 == 2) && (0 < lVar5)) {
      local_4 = 2;
    }
    else {
      if (-1 < lVar5) {
LAB_3ab8_0c72:
        *param_4 = iVar1;
        param_4[1] = iVar2;
        return 10;
      }
      local_6 = (undefined2 *******)-iVar1;
      local_4 = -(iVar2 + (uint)(iVar1 != 0));
      ppppppuStack_8 = (undefined2 ******)0x11f2;
      ppppppuVar3 = (undefined2 ******)0x0;
      ppppppuStack_a = (undefined2 ******)0xb7df;
      uVar6 = func_0x00000271();
      if (*(int *)((int)uVar6 + 0xc) == 10000) goto LAB_3ab8_0c72;
      local_4 = 5;
    }
    ppppppuStack_8 = (undefined2 ******)0xb7aa;
    local_6 = (undefined2 *******)ppppppuVar3;
    FUN_3ab8_0000();
  } while( true );
}



/* 3ab8:0cb2  FUN_3ab8_0cb2  4572 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003c75e) */

int __cdecl16far FUN_3ab8_0cb2(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 *local_284;
  int local_282;
  undefined2 local_280;
  undefined2 local_27e;
  undefined2 local_27c;
  undefined2 local_27a;
  undefined2 local_276;
  undefined2 local_274;
  undefined2 local_272;
  undefined2 local_270;
  undefined2 local_264;
  undefined2 local_262;
  undefined1 local_25c [80];
  undefined2 local_20c;
  undefined2 uStack_20a;
  undefined2 uStack_208;
  undefined2 uStack_206;
  undefined2 local_200;
  undefined2 local_1fe;
  undefined1 local_1f4 [80];
  int local_1a4;
  undefined2 local_108;
  undefined2 local_106;
  undefined2 local_f8;
  undefined2 local_f6;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined4 local_de;
  undefined2 local_da;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined2 uStack_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  int local_ca;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_8a [3];
  undefined2 local_84;
  undefined1 *local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_62;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 auStack_36 [3];
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2a;
  int local_28;
  undefined2 uStack_26;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined1 *puStack_1a;
  undefined2 uStack_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined1 *local_12;
  undefined1 *local_10;
  int local_e;
  undefined1 **local_c;
  
  iVar8 = FUN_21f2_0ebc();
  local_da = *(undefined2 *)0xa394;
  uStack_d8 = *(undefined2 *)0xa396;
  uStack_d6 = *(undefined2 *)0xa398;
  uStack_d4 = *(undefined2 *)0xa39a;
  local_ca = 0;
  iVar7 = local_ca;
LAB_3ab8_0cd2:
  local_ca = iVar7;
  uVar11 = 0x22b2;
  if (param_1 == 1) {
    while( true ) {
      local_c = &local_284;
      local_e = local_ca;
      local_10 = (undefined1 *)0x59c8;
      *(undefined2 *)0xc2c = 1;
      local_12 = (undefined1 *)0x1;
      local_16 = 0xb87d;
      local_14 = uVar11;
      local_28 = FUN_3ab8_0adc();
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) break;
      if ((local_28 == -1) && (0 < local_ca)) {
        local_c = (undefined1 **)0xb8aa;
        func_0x0000daa6();
        local_276 = *(undefined2 *)0x14c;
        local_274 = *(undefined2 *)0x14e;
        local_c = (undefined1 **)0x885;
        local_e = 0xb8c1;
        FUN_13bf_0327();
        local_ca = 0;
        uVar11 = 0x885;
        func_0x0000abfa();
      }
      if (local_28 == 0x14) {
        return 0;
      }
      if (local_28 == 10) {
        local_e = 0xb8ef;
        local_c = (undefined1 **)uVar11;
        puVar15 = (undefined2 *)func_0x0000013f();
        puVar10 = (undefined2 *)puVar15;
        puVar9 = &local_7c;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar1 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar2 = *puVar1;
        }
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xb918;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xb920;
        func_0x000297e6();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xb925;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xb92f;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xb937;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xb93c;
        func_0x00029d78();
        local_20 = 0x22b2;
        local_22 = 0xb946;
        func_0x000299d1();
        local_20 = 0x22b2;
        local_22 = 0xb94e;
        func_0x000297e6();
        local_20 = 0x22b2;
        local_22 = 0xb953;
        func_0x00029d78();
        local_28 = 0x22b2;
        uStack_2a = 0xb95d;
        func_0x000299d1();
        local_28 = 0x22b2;
        uVar11 = 0x1bb4;
        uStack_2a = 0xb962;
        iVar8 = FUN_1def_043a();
        if (iVar8 != 0) {
          while( true ) {
            local_c = &local_12;
            local_e = 1;
            local_10 = (undefined1 *)0x59cd;
            local_12 = (undefined1 *)0x2;
            local_16 = 0xb98a;
            local_14 = uVar11;
            local_28 = FUN_3ab8_0adc();
            if (*(int *)0x158 != 0) goto LAB_3ab8_0d10;
            if (local_28 == -1) break;
            if (local_28 == 10) {
              local_e = 0xb9bb;
              local_c = (undefined1 **)uVar11;
              puVar15 = (undefined2 *)func_0x00000271();
              puVar10 = (undefined2 *)puVar15;
              puVar9 = &local_48;
              for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar2 = puVar9;
                puVar9 = puVar9 + 1;
                puVar1 = puVar10;
                puVar10 = puVar10 + 1;
                *puVar2 = *puVar1;
              }
              func_0x000297e6();
              func_0x0002996b();
              FUN_28b3_0ee9();
              func_0x000297e6();
              func_0x0002996b();
              FUN_28b3_0ee9();
              local_8a[0] = 0;
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b9d();
              func_0x00029d78();
              func_0x000299b9();
              func_0x000299d1();
              local_c = (undefined1 **)local_8a;
              local_e = 0x22b2;
              local_10 = (undefined1 *)0xba4e;
              func_0x00029834();
              local_16 = 0x22b2;
              uStack_18 = 0xba58;
              func_0x000299d1();
              local_16 = 0x22b2;
              uStack_18 = 0xba61;
              func_0x00029834();
              local_16 = 0x22b2;
              uStack_18 = 0xba69;
              func_0x000297e6();
              local_16 = 0x22b2;
              uStack_18 = 0xba6e;
              func_0x00029d78();
              local_16 = 0x22b2;
              uStack_18 = 0xba73;
              FUN_28b3_117c();
              local_1e = 0x22b2;
              local_20 = 0xba7d;
              func_0x000299d1();
              local_1e = 0x22b2;
              local_20 = 0xba86;
              func_0x000297e6();
              local_1e = 0x22b2;
              local_20 = 0xba8b;
              func_0x00029d78();
              uStack_26 = 0x22b2;
              local_28 = 0xba95;
              func_0x000299d1();
              uStack_26 = 0x22b2;
              local_28 = 0xba9d;
              func_0x000297e6();
              uStack_26 = 0x22b2;
              local_28 = 0xbaa6;
              func_0x0002996b();
              uStack_26 = 0x22b2;
              local_28 = 0xbaab;
              func_0x00029d78();
              uStack_2e = 0x22b2;
              uStack_30 = 0xbab5;
              func_0x000299d1();
              uStack_2e = 0x22b2;
              uStack_30 = 0xbab9;
              FUN_3ab8_0548();
              local_c = (undefined1 **)local_8a;
              local_e = local_7e;
              local_10 = (undefined1 *)local_80;
              local_12 = local_82;
              local_14 = local_84;
              local_16 = 0x22b2;
              uStack_18 = 0xbae1;
              func_0x00029834();
              local_16 = 0x22b2;
              uStack_18 = 0xbae9;
              func_0x000297e6();
              local_16 = 0x22b2;
              uStack_18 = 0xbaee;
              func_0x00029d78();
              local_16 = 0x22b2;
              uStack_18 = 0xbaf3;
              FUN_28b3_1163();
              local_16 = 0x22b2;
              uStack_18 = 0xbafc;
              func_0x000299b9();
              local_1e = 0x22b2;
              local_20 = 0xbb06;
              func_0x000299d1();
              local_1e = 0x22b2;
              local_20 = 0xbb0f;
              func_0x000297e6();
              local_1e = 0x22b2;
              local_20 = 0xbb14;
              func_0x00029d78();
              uStack_26 = 0x22b2;
              local_28 = 0xbb1e;
              func_0x000299d1();
              uStack_26 = 0x22b2;
              local_28 = 0xbb27;
              func_0x000297e6();
              uStack_2e = 0x22b2;
              uStack_30 = 0xbb31;
              func_0x000299d1();
              uStack_2e = 0x22b2;
              uStack_30 = 0xbb35;
              FUN_3ab8_0548();
              local_c = (undefined1 **)local_8a;
              local_e = 0x22b2;
              local_10 = (undefined1 *)0xbb50;
              func_0x00029834();
              local_e = 0x22b2;
              local_10 = (undefined1 *)0xbb55;
              func_0x00029af6();
              local_e = 0x22b2;
              local_10 = (undefined1 *)0xbb5e;
              func_0x000299b9();
              local_16 = 0x22b2;
              uStack_18 = 0xbb68;
              func_0x000299d1();
              local_16 = 0x22b2;
              uStack_18 = 0xbb70;
              func_0x000297e6();
              local_16 = 0x22b2;
              uStack_18 = 0xbb75;
              func_0x00029d78();
              local_16 = 0x22b2;
              uStack_18 = 0xbb7e;
              func_0x00029c74();
              local_1e = 0x22b2;
              local_20 = 0xbb88;
              func_0x000299d1();
              local_1e = 0x22b2;
              local_20 = 0xbb91;
              func_0x000297e6();
              local_1e = 0x22b2;
              local_20 = 0xbb96;
              func_0x00029d78();
              uStack_26 = 0x22b2;
              local_28 = 0xbba0;
              func_0x000299d1();
              uStack_26 = 0x22b2;
              local_28 = 0xbba9;
              func_0x000297e6();
              uStack_2e = 0x22b2;
              uStack_30 = 0xbbb3;
              func_0x000299d1();
              uStack_2e = 0x22b2;
              uStack_30 = 0xbbb7;
              FUN_3ab8_0548();
              local_c = (undefined1 **)local_8a;
              local_e = 0x22b2;
              local_10 = (undefined1 *)0xbbd2;
              func_0x00029834();
              local_16 = 0x22b2;
              uStack_18 = 0xbbdc;
              func_0x000299d1();
              local_16 = 0x22b2;
              uStack_18 = 0xbbe5;
              func_0x00029834();
              local_1e = 0x22b2;
              local_20 = 0xbbef;
              func_0x000299d1();
              local_1e = 0x22b2;
              local_20 = 0xbbf8;
              func_0x000297e6();
              local_1e = 0x22b2;
              local_20 = 0xbbfd;
              func_0x00029d78();
              uStack_26 = 0x22b2;
              local_28 = 0xbc07;
              func_0x000299d1();
              uStack_26 = 0x22b2;
              local_28 = -0x43f0;
              func_0x000297e6();
              uStack_2e = 0x22b2;
              uVar11 = 0x22b2;
              uStack_30 = 0xbc1a;
              func_0x000299d1();
              uStack_2e = 0x22b2;
              uStack_30 = 0xbc1e;
              FUN_3ab8_0548();
              local_ca = 0;
              local_c = (undefined1 **)local_82;
              local_e = local_84;
              local_10 = local_25c;
              local_12 = local_1f4;
              local_14 = local_8a[0];
              local_16 = 0x22b2;
              uStack_18 = 0xbc46;
              iVar8 = FUN_3ab8_0853();
              if (*(int *)0x158 != 0) {
                return -0x457;
              }
              local_1a4 = iVar8;
              iVar7 = iVar8;
              if (iVar8 != -1) goto LAB_3ab8_0cd2;
            }
          }
          local_28 = -1;
        }
      }
    }
    goto LAB_3ab8_0d10;
  }
  local_ca = 0;
  iVar7 = local_ca;
LAB_3ab8_10ec:
  local_ca = iVar7;
  uVar11 = 0x22b2;
  if (param_1 == 2) {
    while( true ) {
      *(undefined2 *)0xc2c = 1;
      *(undefined2 *)0xc20 = 1;
      local_c = &local_284;
      local_e = local_ca;
      local_10 = (undefined1 *)0x59d2;
      local_12 = (undefined1 *)0x3;
      local_16 = 0xbc9d;
      local_14 = uVar11;
      local_28 = FUN_3ab8_0adc();
      *(undefined2 *)0xc2c = 0;
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) break;
      if ((local_28 == -1) && (0 < local_ca)) {
        local_c = (undefined1 **)0xbcc6;
        func_0x0000daa6();
        local_276 = *(undefined2 *)0x14c;
        local_274 = *(undefined2 *)0x14e;
        local_c = (undefined1 **)0x885;
        local_e = 0xbcdd;
        FUN_13bf_0327();
        local_ca = 0;
        uVar11 = 0x885;
        func_0x0000abfa();
      }
      if (local_28 == 0x14) {
        return 0;
      }
      if (local_28 == 10) {
        local_27c = local_272;
        local_27a = local_270;
        while( true ) {
          local_c = &local_284;
          local_e = 1;
          local_10 = (undefined1 *)0x59d7;
          local_12 = (undefined1 *)0x1;
          local_16 = 0xbd36;
          local_14 = uVar11;
          local_28 = FUN_3ab8_0adc();
          if (*(int *)0x158 != 0) goto LAB_3ab8_0d10;
          if (local_28 == -1) break;
          if (local_28 == 10) {
            local_e = 0xbd60;
            local_c = (undefined1 **)uVar11;
            puVar15 = (undefined2 *)func_0x0000013f();
            puVar10 = (undefined2 *)puVar15;
            puVar9 = &local_7c;
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              puVar1 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar2 = *puVar1;
            }
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xbd89;
            func_0x000299d1();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xbd91;
            func_0x000297e6();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xbd96;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xbda0;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xbda8;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xbdad;
            func_0x00029d78();
            local_20 = 0x22b2;
            local_22 = 0xbdb7;
            func_0x000299d1();
            local_20 = 0x22b2;
            local_22 = 0xbdbf;
            func_0x000297e6();
            local_20 = 0x22b2;
            local_22 = 0xbdc4;
            func_0x00029d78();
            local_28 = 0x22b2;
            uStack_2a = 0xbdce;
            func_0x000299d1();
            local_28 = 0x22b2;
            uVar11 = 0x1bb4;
            uStack_2a = 0xbdd3;
            iVar8 = FUN_1def_043a();
            if (iVar8 != 0) {
              local_8a[0] = 0;
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b9d();
              func_0x00029d78();
              func_0x000299b9();
              func_0x000299d1();
              local_c = (undefined1 **)local_8a;
              local_e = 0x22b2;
              local_10 = (undefined1 *)0xbe2d;
              func_0x00029834();
              local_16 = 0x22b2;
              uStack_18 = 0xbe37;
              func_0x000299d1();
              local_16 = 0x22b2;
              uStack_18 = 0xbe40;
              func_0x00029834();
              local_1e = 0x22b2;
              local_20 = 0xbe4a;
              func_0x000299d1();
              local_1e = 0x22b2;
              local_20 = 0xbe52;
              func_0x000297e6();
              uStack_26 = 0x22b2;
              local_28 = 0xbe5c;
              func_0x000299d1();
              uStack_26 = 0x22b2;
              local_28 = 0xbe65;
              func_0x000297e6();
              uStack_2e = 0x22b2;
              uStack_30 = 0xbe6f;
              func_0x000299d1();
              uStack_2e = 0x22b2;
              uStack_30 = 0xbe73;
              FUN_3ab8_0548();
              local_c = (undefined1 **)local_8a;
              local_e = 0x22b2;
              local_10 = (undefined1 *)0xbe8e;
              func_0x00029834();
              local_e = 0x22b2;
              local_10 = (undefined1 *)0xbe93;
              func_0x00029af6();
              local_16 = 0x22b2;
              uStack_18 = 0xbe9d;
              func_0x000299d1();
              local_16 = local_7e;
              uStack_18 = local_80;
              puStack_1a = local_82;
              uStack_1c = local_84;
              local_1e = 0x22b2;
              local_20 = 0xbeb2;
              func_0x000297e6();
              uStack_26 = 0x22b2;
              local_28 = 0xbebc;
              func_0x000299d1();
              uStack_26 = 0x22b2;
              local_28 = -0x413b;
              func_0x000297e6();
              uStack_2e = 0x22b2;
              uVar11 = 0x22b2;
              uStack_30 = 0xbecf;
              func_0x000299d1();
              uStack_2e = 0x22b2;
              uStack_30 = 0xbed3;
              FUN_3ab8_0548();
              local_ca = 0;
              local_c = (undefined1 **)local_82;
              local_e = local_84;
              local_10 = local_25c;
              local_12 = local_1f4;
              local_14 = local_8a[0];
              local_16 = 0x22b2;
              uStack_18 = 0xbefb;
              iVar8 = FUN_3ab8_0853();
              if (*(int *)0x158 != 0) {
                return -0x457;
              }
              local_1a4 = iVar8;
              iVar7 = iVar8;
              if (iVar8 != -1) goto LAB_3ab8_10ec;
            }
          }
        }
        local_28 = -1;
      }
    }
LAB_3ab8_0d10:
    iVar8 = 1;
  }
  else {
    local_ca = 0;
    iVar7 = local_ca;
LAB_3ab8_161c:
    local_ca = iVar7;
    uVar11 = 0x22b2;
    if (param_1 == 3) {
LAB_3ab8_13a7:
      do {
        *(undefined2 *)0xc2c = 1;
        local_c = &local_284;
        local_e = local_ca;
        local_10 = (undefined1 *)0x59dc;
        local_12 = (undefined1 *)0x2;
        local_16 = 0xbf4c;
        local_14 = uVar11;
        local_28 = FUN_3ab8_0adc();
        *(undefined2 *)0xc2c = 0;
        if (*(int *)0x158 != 0) goto LAB_3ab8_0d10;
        if ((local_28 == -1) && (0 < local_ca)) {
          local_c = (undefined1 **)0xbf76;
          func_0x0000daa6();
          local_276 = *(undefined2 *)0x14c;
          local_274 = *(undefined2 *)0x14e;
          local_c = (undefined1 **)0x885;
          local_e = 0xbf8d;
          FUN_13bf_0327();
          local_ca = 0;
          uVar11 = 0x885;
          func_0x0000abfa();
        }
        if (local_28 == 0x14) {
          return 0;
        }
        if (local_28 == 10) {
          uVar12 = 0;
          local_e = 0xbfc2;
          local_c = (undefined1 **)uVar11;
          puVar15 = (undefined2 *)func_0x00000271();
          puVar10 = (undefined2 *)puVar15;
          puVar9 = &local_48;
          for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar2 = *puVar1;
          }
          local_200 = local_48;
          local_1fe = local_46;
          local_264 = local_44;
          local_262 = local_42;
          local_22 = local_40;
          local_20 = local_3e;
          while( true ) {
            local_c = &local_12;
            local_e = 1;
            local_10 = (undefined1 *)0x59e1;
            local_12 = (undefined1 *)0x3;
            local_16 = 0xc01a;
            local_14 = uVar12;
            local_28 = FUN_3ab8_0adc();
            if (*(int *)0x158 != 0) goto LAB_3ab8_0d10;
            if (local_28 == -1) break;
            if (local_28 == 10) {
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b9d();
              func_0x00029d78();
              func_0x000299d1();
              func_0x000297e6();
              func_0x00029d78();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xc078;
              func_0x000299d1();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xc081;
              func_0x000297e6();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xc086;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              puStack_1a = (undefined1 *)0xc090;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              puStack_1a = (undefined1 *)0xc099;
              func_0x000297e6();
              uStack_18 = 0x22b2;
              puStack_1a = (undefined1 *)0xc09e;
              func_0x00029d78();
              local_20 = 0x22b2;
              local_22 = 0xc0a8;
              func_0x000299d1();
              local_20 = 0x22b2;
              local_22 = 0xc0b1;
              func_0x000297e6();
              local_20 = 0x22b2;
              local_22 = 0xc0b6;
              func_0x00029d78();
              local_28 = 0x22b2;
              uStack_2a = 0xc0c0;
              func_0x000299d1();
              local_28 = 0x22b2;
              uVar11 = 0x1bb4;
              uStack_2a = 0xc0c5;
              iVar8 = FUN_1def_043a();
              if (iVar8 == 0) {
                local_c = (undefined1 **)0xc0d4;
                FUN_3ab8_0000();
                goto LAB_3ab8_13a7;
              }
              local_8a[0] = 0;
              local_c = (undefined1 **)local_8a;
              local_e = local_7e;
              local_10 = (undefined1 *)local_80;
              local_12 = local_82;
              local_14 = local_84;
              local_16 = 0x1bb4;
              uStack_18 = 0xc102;
              func_0x000297e6();
              local_16 = 0x22b2;
              uStack_18 = 0xc10b;
              func_0x00029c74();
              local_1e = 0x22b2;
              local_20 = 0xc115;
              func_0x000299d1();
              local_1e = 0x22b2;
              local_20 = 0xc119;
              FUN_3ab8_0238();
              local_c = (undefined1 **)local_8a;
              local_e = local_7e;
              local_10 = (undefined1 *)local_80;
              local_12 = local_82;
              local_14 = local_84;
              local_16 = 0x22b2;
              uStack_18 = 0xc141;
              func_0x00029834();
              local_16 = 0x22b2;
              uStack_18 = 0xc149;
              FUN_28b3_100d();
              local_1e = 0x22b2;
              uVar12 = 0x22b2;
              local_20 = 0xc153;
              func_0x000299d1();
              local_1e = 0x22b2;
              local_20 = 0xc157;
              FUN_3ab8_0238();
              local_ca = 0;
              local_c = (undefined1 **)local_82;
              local_e = local_84;
              local_10 = local_25c;
              local_12 = local_1f4;
              local_14 = local_8a[0];
              local_16 = 0x22b2;
              uStack_18 = 0xc17f;
              iVar8 = FUN_3ab8_0853();
              if (*(int *)0x158 != 0) {
                return -0x457;
              }
              local_1a4 = iVar8;
              iVar7 = iVar8;
              if (iVar8 != -1) goto LAB_3ab8_161c;
            }
          }
          local_28 = -1;
          uVar11 = uVar12;
        }
      } while( true );
    }
    local_ca = 0;
    while (param_1 == 4) {
LAB_3ab8_1634:
      do {
        local_c = &local_284;
        local_e = local_ca;
        local_10 = (undefined1 *)0x59e6;
        *(undefined2 *)0xc2c = 1;
        local_12 = (undefined1 *)0x1;
        local_16 = 0xc1d6;
        local_14 = uVar11;
        local_28 = FUN_3ab8_0adc();
        *(undefined2 *)0xc2c = 0;
        if (*(int *)0x158 != 0) goto LAB_3ab8_0d10;
        if ((local_28 == -1) && (0 < local_ca)) {
          local_c = (undefined1 **)0xc200;
          func_0x0000daa6();
          local_276 = *(undefined2 *)0x14c;
          local_274 = *(undefined2 *)0x14e;
          local_c = (undefined1 **)0x885;
          local_e = 0xc217;
          FUN_13bf_0327();
          local_ca = 0;
          uVar11 = 0x885;
          func_0x0000abfa();
        }
        if (local_28 == 0x14) {
          return 0;
        }
      } while (local_28 != 10);
      local_27c = local_272;
      local_27a = local_270;
LAB_3ab8_16d1:
      do {
        local_c = &local_12;
        local_e = 1;
        local_10 = (undefined1 *)0x59f1;
        local_12 = (undefined1 *)0x1;
        local_16 = 0xc26c;
        local_14 = uVar11;
        local_28 = FUN_3ab8_0adc();
        if (*(int *)0x158 != 0) goto LAB_3ab8_0d10;
        if (local_28 == -1) goto LAB_3ab8_1634;
      } while (local_28 != 10);
      if ((local_12 == local_284) && (local_10 == (undefined1 *)local_282)) {
        *(undefined2 *)0xc22 = 1;
        local_e = 0xc2ae;
        local_c = (undefined1 **)uVar11;
        FUN_1000_0599();
        uVar11 = 0x11f2;
        local_c = (undefined1 **)0xc2b9;
        func_0x00012276();
        goto LAB_3ab8_16d1;
      }
      local_16 = local_280;
      local_14 = local_27e;
      local_ca = 0;
      local_c = (undefined1 **)0xc2e4;
      func_0x0000daa6();
      func_0x0000c3ca();
      local_c = (undefined1 **)0x885;
      local_e = 0xc2f7;
      puVar15 = (undefined2 *)func_0x0000013f();
      puVar10 = (undefined2 *)puVar15;
      puVar9 = &local_7c;
      for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar2 = *puVar1;
      }
      local_c = (undefined1 **)0x0;
      local_e = 0xc314;
      puVar15 = (undefined2 *)func_0x0000013f();
      puVar10 = (undefined2 *)puVar15;
      puVar9 = &local_c0;
      for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar2 = *puVar1;
      }
      puVar10 = &local_20;
      puVar9 = &local_c0;
      for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        puVar15 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar1 = *puVar15;
      }
      puVar10 = auStack_36;
      puVar9 = &local_7c;
      for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        puVar15 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar1 = *puVar15;
      }
      uStack_38 = 0;
      uVar11 = 0x1bb4;
      uStack_3a = 0xc351;
      iVar8 = FUN_1def_1921();
      if (iVar8 == 0) {
        *(undefined2 *)0xc22 = 1;
        iVar8 = 0;
      }
      else {
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc3cc;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc3d4;
        func_0x000297e6();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc3d9;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc3e3;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc3eb;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc3f0;
        func_0x00029d78();
        local_20 = 0x22b2;
        local_22 = 0xc3fa;
        func_0x000299d1();
        local_20 = 0x22b2;
        local_22 = 0xc402;
        func_0x000297e6();
        local_20 = 0x22b2;
        local_22 = 0xc407;
        func_0x00029d78();
        local_28 = 0x22b2;
        uStack_2a = 0xc411;
        func_0x000299d1();
        local_28 = 0x22b2;
        uStack_2a = 0xc416;
        FUN_1def_043a();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc430;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc439;
        func_0x000297e6();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc43e;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc448;
        func_0x000299d1();
        uStack_18 = 1;
        puStack_1a = (undefined1 *)0x22b2;
        uStack_1c = 0xc451;
        puVar9 = (undefined2 *)FUN_1def_05d1();
        local_108 = *puVar9;
        local_106 = puVar9[1];
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc484;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc48d;
        func_0x000297e6();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc492;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc49c;
        func_0x000299d1();
        uStack_18 = 1;
        puStack_1a = (undefined1 *)0x22b2;
        uStack_1c = 0xc4a5;
        FUN_1def_05d1();
        uVar13 = (undefined1 *)0xffed < &uStack_18;
        uVar14 = &stack0x0000 == (undefined1 *)0x6;
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_1181();
        uVar6 = local_76;
        uVar5 = local_78;
        uVar12 = local_7a;
        uVar11 = local_7c;
        if (!(bool)uVar13 && !(bool)uVar14) {
          local_7c = local_74;
          local_7a = local_72;
          local_74 = uVar11;
          local_72 = uVar12;
          local_f0 = local_78;
          local_ee = local_76;
          local_78 = local_70;
          local_76 = local_6e;
          local_70 = uVar5;
          local_6e = uVar6;
        }
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc526;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc52f;
        func_0x000297e6();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc534;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc53e;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc547;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc54c;
        func_0x00029d78();
        local_20 = 0x22b2;
        local_22 = 0xc556;
        func_0x000299d1();
        local_20 = 0x22b2;
        local_22 = 0xc55f;
        func_0x000297e6();
        local_20 = 0x22b2;
        local_22 = 0xc564;
        func_0x00029d78();
        local_28 = 0x22b2;
        uStack_2a = 0xc56e;
        func_0x000299d1();
        local_28 = 0x22b2;
        uStack_2a = 0xc573;
        FUN_1def_043a();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc58d;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc595;
        func_0x000297e6();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc59a;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc5a4;
        func_0x000299d1();
        uStack_18 = 1;
        puStack_1a = (undefined1 *)0x22b2;
        uStack_1c = 0xc5ad;
        puVar9 = (undefined2 *)FUN_1def_05d1();
        local_108 = *puVar9;
        local_106 = puVar9[1];
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc5e0;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc5e9;
        func_0x000297e6();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc5ee;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc5f8;
        func_0x000299d1();
        uStack_18 = 1;
        puStack_1a = (undefined1 *)0x22b2;
        uStack_1c = 0xc601;
        FUN_1def_05d1();
        uVar13 = (undefined1 *)0xffed < &uStack_18;
        uVar14 = &stack0x0000 == (undefined1 *)0x6;
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_1181();
        uVar6 = local_ba;
        uVar5 = local_bc;
        uVar12 = local_be;
        uVar11 = local_c0;
        if (!(bool)uVar13 && !(bool)uVar14) {
          local_c0 = local_b8;
          local_be = local_b6;
          local_b8 = uVar11;
          local_b6 = uVar12;
          local_f0 = local_bc;
          local_ee = local_ba;
          local_bc = local_b4;
          local_ba = local_b2;
          local_b4 = uVar5;
          local_b2 = uVar6;
        }
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc691;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc699;
        func_0x000297e6();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc69e;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc6a8;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc6b0;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc6b5;
        func_0x00029d78();
        local_20 = 0x22b2;
        local_22 = 0xc6bf;
        func_0x000299d1();
        local_20 = 0x22b2;
        local_22 = 0xc6c7;
        func_0x000297e6();
        local_20 = 0x22b2;
        local_22 = 0xc6cc;
        func_0x00029d78();
        local_28 = 0x22b2;
        uStack_2a = 0xc6d6;
        func_0x000299d1();
        local_28 = 0x22b2;
        uStack_2a = 0xc6db;
        lVar16 = FUN_1000_0718();
        local_c4 = lVar16;
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc6fe;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc707;
        func_0x000297e6();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc70c;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc716;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc71f;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc724;
        func_0x00029d78();
        local_20 = 0x22b2;
        local_22 = 0xc72e;
        func_0x000299d1();
        local_20 = 0x22b2;
        local_22 = 50999;
        func_0x000297e6();
        local_20 = 0x22b2;
        local_22 = 0xc73c;
        func_0x00029d78();
        local_28 = 0x22b2;
        uStack_2a = 0xc746;
        func_0x000299d1();
        local_28 = 0x22b2;
        uStack_2a = 0xc74b;
        lVar17 = FUN_1000_0718();
        lVar16 = local_c4;
        if (lVar17 < local_c4) {
          lVar16 = lVar17;
          lVar17 = local_c4;
          local_62 = local_c4;
        }
        local_de._2_2_ = (int)((ulong)lVar17 >> 0x10);
        local_de._0_2_ = (uint)lVar17;
        uVar3 = (uint)local_de;
        local_c4._2_2_ = (int)((ulong)lVar16 >> 0x10);
        local_c4._0_2_ = (uint)lVar16;
        uVar4 = (uint)local_c4;
        iVar8 = (local_de._2_2_ - local_c4._2_2_) - (uint)((uint)local_de < (uint)local_c4);
        local_de = lVar17;
        local_c4 = lVar16;
        func_0x000298b4();
        func_0x00029c2c();
        func_0x00029c2c();
        func_0x000299b9();
        FUN_28b3_0ee9();
        func_0x000298b4();
        func_0x00029c2c();
        func_0x00029c2c();
        func_0x000299d1();
        if ((0xb3 < iVar8) && ((0xb4 < iVar8 || (uVar3 != uVar4)))) {
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bfc();
          func_0x000299d1();
          func_0x000298b4();
          func_0x00029c2c();
          func_0x00029c2c();
          func_0x000299d1();
        }
        local_c = (undefined1 **)local_f6;
        local_e = local_f8;
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc88a;
        puVar9 = (undefined2 *)func_0x0002a11e();
        local_1e = *puVar9;
        uStack_1c = puVar9[1];
        puStack_1a = (undefined1 *)puVar9[2];
        uStack_18 = puVar9[3];
        local_c = (undefined1 **)local_f6;
        local_e = local_f8;
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc8ad;
        puVar9 = (undefined2 *)func_0x0002a10c();
        local_20c = *puVar9;
        uStack_20a = puVar9[1];
        uStack_208 = puVar9[2];
        uStack_206 = puVar9[3];
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b9d();
        func_0x00029d78();
        func_0x00029c44();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029983();
        local_c = (undefined1 **)local_d0;
        local_e = local_d2;
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc926;
        func_0x0002a11e();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029bb5();
        func_0x00029983();
        local_c = (undefined1 **)local_d0;
        local_e = local_d2;
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc960;
        func_0x0002a10c();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b9d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc9ca;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc9d3;
        func_0x000297e6();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xc9d8;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc9e2;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc9eb;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xc9f0;
        func_0x00029d78();
        local_20 = 0x22b2;
        uVar11 = 0x22b2;
        local_22 = 0xc9fa;
        func_0x000299d1();
        local_20 = 0x22b2;
        local_22 = 0xc9fe;
        iVar8 = FUN_3ab8_007f();
        local_ca = iVar8;
      }
      if (*(int *)0xc22 != 0) {
        local_c = (undefined1 **)0xc371;
        func_0x00012276();
        local_c = (undefined1 **)0x11f2;
        uVar11 = 0xdef;
        local_e = 0xc37f;
        iVar8 = FUN_1000_0599();
        if (*(int *)0xc22 == 1) {
          local_c = (undefined1 **)0xc390;
          iVar8 = FUN_3ab8_0000();
        }
        if (*(int *)0xc22 == 3) {
          local_c = (undefined1 **)0xc3a1;
          func_0x00012276();
          uVar11 = 0x11f2;
          local_c = (undefined1 **)0xc3ab;
          iVar8 = func_0x00012276();
        }
        *(undefined2 *)0xc22 = 1;
      }
    }
  }
  return iVar8;
}



/* 3ab8:1e8e  FUN_3ab8_1e8e  1628 bytes, 0 callers */

int __cdecl16far FUN_3ab8_1e8e(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar8;
  undefined1 *local_24e;
  int local_24c;
  undefined2 local_24a;
  undefined2 local_248;
  undefined2 local_246;
  undefined2 local_244;
  undefined2 local_240;
  undefined2 local_23e;
  undefined2 local_23c;
  undefined2 local_23a;
  undefined1 local_222 [56];
  undefined2 local_1ea;
  undefined2 local_1e8;
  undefined1 local_1da [48];
  int local_1aa;
  undefined2 local_1a8;
  undefined2 local_1a6;
  undefined2 local_122;
  undefined2 local_120;
  undefined2 local_de;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined2 uStack_d8;
  int local_ce;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined1 *local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  int local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined1 *puStack_1a;
  undefined2 uStack_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined1 *local_12;
  undefined1 *local_10;
  int local_e;
  undefined1 **local_c;
  
  iVar3 = FUN_21f2_0ebc();
  local_de = *(undefined2 *)0xa394;
  uStack_dc = *(undefined2 *)0xa396;
  uStack_da = *(undefined2 *)0xa398;
  uStack_d8 = *(undefined2 *)0xa39a;
  local_ce = 0;
  iVar4 = local_ce;
LAB_3ab8_1eae:
  local_ce = iVar4;
  uVar7 = 0x22b2;
  if (param_1 != 5) {
    local_ce = 0;
    iVar4 = local_ce;
LAB_3ab8_24db:
    local_ce = iVar4;
    if (param_1 != 6) {
      return iVar3;
    }
LAB_3ab8_22b7:
    do {
      do {
        *(undefined2 *)0xc2c = 1;
        *(undefined2 *)0xc20 = 1;
        local_c = &local_24e;
        local_e = local_ce;
        local_10 = (undefined1 *)0x5a11;
        local_12 = (undefined1 *)0x3;
        local_16 = 0xce5f;
        local_14 = uVar7;
        local_2c = FUN_3ab8_0adc();
        *(undefined2 *)0xc2c = 0;
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) {
          return 1;
        }
        if ((local_2c == -1) && (0 < local_ce)) {
          local_c = (undefined1 **)0xce88;
          func_0x0000daa6();
          local_240 = *(undefined2 *)0x14c;
          local_23e = *(undefined2 *)0x14e;
          local_c = (undefined1 **)0x885;
          local_e = 0xce9f;
          FUN_13bf_0327();
          local_ce = 0;
          uVar7 = 0x885;
          func_0x0000abfa();
        }
        if (local_2c == 0x14) {
          return 0;
        }
      } while (local_2c != 10);
      local_122 = local_23c;
      local_120 = local_23a;
      local_1a8 = local_24a;
      local_1a6 = local_248;
      while( true ) {
        do {
          local_c = &local_24e;
          *(undefined2 *)0xc20 = 1;
          local_e = 1;
          local_10 = (undefined1 *)0x5a18;
          local_12 = (undefined1 *)0x3;
          local_16 = 0xcf00;
          local_14 = uVar7;
          local_2c = FUN_3ab8_0adc();
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 != 0) {
            return 1;
          }
          if (local_2c == -1) goto LAB_3ab8_22b7;
        } while (local_2c != 10);
        local_1ea = local_24a;
        local_1e8 = local_248;
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b9d();
        func_0x00029d78();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xcf74;
        func_0x000299d1();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xcf7d;
        func_0x000297e6();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xcf86;
        func_0x0002996b();
        local_10 = (undefined1 *)0x22b2;
        local_12 = (undefined1 *)0xcf8b;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xcf95;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xcf9e;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        puStack_1a = (undefined1 *)0xcfa3;
        func_0x00029d78();
        uStack_20 = 0x22b2;
        uStack_22 = 0xcfad;
        func_0x000299d1();
        uStack_20 = 0x22b2;
        uStack_22 = 0xcfb6;
        func_0x000297e6();
        uStack_20 = 0x22b2;
        uStack_22 = 0xcfbb;
        func_0x00029d78();
        uStack_28 = 0x22b2;
        uStack_2a = 0xcfc5;
        func_0x000299d1();
        uStack_28 = 0x22b2;
        uVar7 = 0x1bb4;
        uStack_2a = 0xcfca;
        iVar4 = FUN_1def_043a();
        if (iVar4 == 0) break;
        local_8e = 0;
        local_c = (undefined1 **)&local_8e;
        local_e = local_82;
        local_10 = (undefined1 *)local_84;
        local_12 = local_86;
        local_14 = local_88;
        local_16 = local_82;
        uStack_18 = local_84;
        puStack_1a = local_86;
        uStack_1c = local_88;
        uStack_1e = 0x1bb4;
        uStack_20 = 0xd014;
        FUN_3ab8_0238();
        local_ce = 0;
        local_c = (undefined1 **)local_86;
        local_e = local_88;
        local_10 = local_222;
        local_12 = local_1da;
        local_14 = local_8e;
        local_16 = 0x1bb4;
        uStack_18 = 0xd03e;
        iVar3 = FUN_3ab8_0853();
        if (*(int *)0x158 != 0) {
          return -0x457;
        }
        local_1aa = iVar3;
        iVar4 = iVar3;
        if (iVar3 != -1) goto LAB_3ab8_24db;
      }
      local_c = (undefined1 **)0xcfd9;
      FUN_3ab8_0000();
    } while( true );
  }
LAB_3ab8_1eb7:
  do {
    do {
      *(undefined2 *)0xc2c = 1;
      local_c = &local_24e;
      local_e = local_ce;
      local_10 = (undefined1 *)0x59ff;
      local_12 = (undefined1 *)0x2;
      local_16 = 0xca5c;
      local_14 = uVar7;
      local_2c = FUN_3ab8_0adc();
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) {
        return 1;
      }
      if ((local_2c == -1) && (0 < local_ce)) {
        local_c = (undefined1 **)0xca89;
        func_0x0000daa6();
        local_240 = *(undefined2 *)0x14c;
        local_23e = *(undefined2 *)0x14e;
        local_c = (undefined1 **)0x885;
        local_e = 0xcaa0;
        FUN_13bf_0327();
        local_ce = 0;
        uVar7 = 0x885;
        func_0x0000abfa();
      }
      if (local_2c == 0x14) {
        return 0;
      }
    } while (local_2c != 10);
    local_246 = local_23c;
    local_244 = local_23a;
    while( true ) {
      while( true ) {
        do {
          local_c = &local_12;
          local_e = 1;
          local_10 = (undefined1 *)0x5a08;
          local_12 = (undefined1 *)0x2;
          local_16 = 0xcafd;
          local_14 = uVar7;
          local_2c = FUN_3ab8_0adc();
          if (*(int *)0x158 != 0) {
            return 1;
          }
          if (local_2c == -1) goto LAB_3ab8_1eb7;
        } while (local_2c != 10);
        local_16 = local_24a;
        local_14 = local_248;
        local_c = (undefined1 **)uVar7;
        if ((local_12 != local_24e) || (local_10 != (undefined1 *)local_24c)) break;
        *(undefined2 *)0xc22 = 1;
        local_e = 0xcb5b;
        FUN_1000_0599();
        uVar7 = 0x11f2;
        local_c = (undefined1 **)0xcb66;
        func_0x00012276();
      }
      local_e = 0xcb78;
      puVar8 = (undefined2 *)func_0x00000271();
      puVar5 = (undefined2 *)puVar8;
      puVar6 = &local_4c;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      local_122 = local_4c;
      local_120 = local_4a;
      local_1a8 = local_48;
      local_1a6 = local_46;
      local_6a = local_44;
      local_68 = local_42;
      local_c = (undefined1 **)0x0;
      local_e = 0xcbc6;
      puVar8 = (undefined2 *)func_0x00000271();
      puVar5 = (undefined2 *)puVar8;
      puVar6 = &local_4c;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      func_0x000297e6();
      func_0x0002996b();
      FUN_28b3_0ee9();
      local_8c = local_44;
      local_8a = local_42;
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b9d();
      func_0x00029d78();
      func_0x000299d1();
      func_0x000297e6();
      func_0x00029d78();
      local_10 = (undefined1 *)0x22b2;
      local_12 = (undefined1 *)0xcc40;
      func_0x000299d1();
      local_10 = (undefined1 *)0x22b2;
      local_12 = (undefined1 *)0xcc48;
      func_0x000297e6();
      local_10 = (undefined1 *)0x22b2;
      local_12 = (undefined1 *)0xcc51;
      func_0x0002996b();
      local_10 = (undefined1 *)0x22b2;
      local_12 = (undefined1 *)0xcc56;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      puStack_1a = (undefined1 *)0xcc60;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      puStack_1a = (undefined1 *)0xcc69;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      puStack_1a = (undefined1 *)0xcc6e;
      func_0x00029d78();
      uStack_20 = 0x22b2;
      uStack_22 = 0xcc78;
      func_0x000299d1();
      uStack_20 = 0x22b2;
      uStack_22 = 0xcc81;
      func_0x000297e6();
      uStack_20 = 0x22b2;
      uStack_22 = 0xcc86;
      func_0x00029d78();
      uStack_28 = 0x22b2;
      uStack_2a = 0xcc90;
      func_0x000299d1();
      uStack_28 = 0x22b2;
      uVar7 = 0x1bb4;
      uStack_2a = 0xcc95;
      iVar4 = FUN_1def_043a();
      if (iVar4 == 0) break;
      local_8e = 0;
      local_c = (undefined1 **)&local_8e;
      local_e = 0x1bb4;
      local_10 = (undefined1 *)0xccc6;
      func_0x000297e6();
      local_e = 0x22b2;
      local_10 = (undefined1 *)0xcccf;
      func_0x00029c74();
      local_e = 0x22b2;
      local_10 = (undefined1 *)0xccd8;
      func_0x000299b9();
      local_16 = 0x22b2;
      uStack_18 = 0xcce2;
      func_0x000299d1();
      local_16 = 0x22b2;
      uStack_18 = 0xccea;
      func_0x000297e6();
      local_16 = 0x22b2;
      uStack_18 = 0xccf3;
      func_0x00029c74();
      local_16 = 0x22b2;
      uStack_18 = 0xccfc;
      func_0x000299b9();
      uStack_1e = 0x22b2;
      uStack_20 = 0xcd06;
      func_0x000299d1();
      uStack_1e = 0x22b2;
      uStack_20 = 0xcd0a;
      FUN_3ab8_0238();
      local_c = (undefined1 **)&local_8e;
      local_e = 0x22b2;
      local_10 = (undefined1 *)0xcd25;
      func_0x00029834();
      local_16 = 0x22b2;
      uStack_18 = 0xcd2f;
      func_0x000299d1();
      local_16 = 0x22b2;
      uStack_18 = 0xcd38;
      func_0x00029834();
      local_16 = 0x22b2;
      uStack_18 = 0xcd40;
      FUN_28b3_100d();
      local_16 = 0x22b2;
      uStack_18 = 0xcd49;
      func_0x000299b9();
      uStack_1e = 0x22b2;
      uStack_20 = 0xcd53;
      func_0x000299d1();
      uStack_1e = 0x22b2;
      uStack_20 = 0xcd57;
      FUN_3ab8_0238();
      local_c = (undefined1 **)&local_8e;
      local_e = 0x22b2;
      local_10 = (undefined1 *)0xcd72;
      func_0x00029834();
      local_e = 0x22b2;
      local_10 = (undefined1 *)0xcd7b;
      FUN_28b3_100d();
      local_e = 0x22b2;
      local_10 = (undefined1 *)0xcd84;
      func_0x000299b9();
      local_16 = 0x22b2;
      uStack_18 = 0xcd8e;
      func_0x000299d1();
      local_16 = 0x22b2;
      uStack_18 = 0xcd97;
      func_0x00029834();
      uStack_1e = 0x22b2;
      uStack_20 = 0xcda1;
      func_0x000299d1();
      uStack_1e = 0x22b2;
      uStack_20 = 0xcda5;
      FUN_3ab8_0238();
      local_c = (undefined1 **)&local_8e;
      local_e = 0x22b2;
      local_10 = (undefined1 *)0xcdc0;
      func_0x00029834();
      local_16 = 0x22b2;
      uStack_18 = 0xcdca;
      func_0x000299d1();
      local_16 = 0x22b2;
      uStack_18 = 0xcdd3;
      func_0x00029834();
      uStack_1e = 0x22b2;
      uVar7 = 0x22b2;
      uStack_20 = 0xcddd;
      func_0x000299d1();
      uStack_1e = 0x22b2;
      uStack_20 = 0xcde1;
      FUN_3ab8_0238();
      local_ce = 0;
      local_c = (undefined1 **)local_86;
      local_e = local_88;
      local_10 = local_222;
      local_12 = local_1da;
      local_14 = local_8e;
      local_16 = 0x22b2;
      uStack_18 = 0xce0b;
      iVar3 = FUN_3ab8_0853();
      if (*(int *)0x158 != 0) {
        return -0x457;
      }
      local_1aa = iVar3;
      iVar4 = iVar3;
      if (iVar3 != -1) goto LAB_3ab8_1eae;
    }
    local_c = (undefined1 **)0xcca4;
    FUN_3ab8_0000();
  } while( true );
}



/* 3ab8:24ea  FUN_3ab8_24ea  147 bytes, 1 callers */

int __cdecl16far FUN_3ab8_24ea(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  uint local_4;
  
  local_4 = 0x3ab8;
  FUN_21f2_0ebc();
  local_4 = 0x22b2;
  func_0x0000c340();
  local_4 = 0x640;
  func_0x00012276(0x885,0x5a1f);
  local_4 = 0x11f2;
  func_0x00010526();
  local_4 = 1;
  iVar2 = FUN_12c1_03d3(0xdef,&local_4,0x16,1);
  local_4 = 0x11f2;
  func_0x00002cc6();
  if (3 < *(byte *)0xb782) {
    local_4 = 1;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
  }
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else if (((byte)local_4 < 0x41) || (0x5a < (byte)local_4)) {
    if (((byte)local_4 < 0x61) || (0x7a < (byte)local_4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = (local_4 & 0xff) - 0x60;
    }
  }
  else {
    iVar2 = (local_4 & 0xff) - 0x40;
  }
  return iVar2;
}



/* 3ab8:2581  FUN_3ab8_2581  643 bytes, 0 callers */

void __cdecl16far FUN_3ab8_2581(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  uint local_78;
  undefined1 local_76 [4];
  int local_72;
  undefined1 local_70 [4];
  uint local_6c;
  undefined1 local_6a [2];
  uint local_68;
  undefined1 local_66 [86];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  byte *pbStack_6;
  uint *puStack_4;
  
  puStack_4 = (uint *)0x3ab8;
  pbStack_6 = (byte *)0xd10c;
  FUN_21f2_0ebc();
  local_72 = 7;
  puStack_4 = (uint *)0x22b2;
  uVar2 = 0x885;
  pbStack_6 = (byte *)0xd116;
  func_0x0000c3ca();
  local_68 = *param_1 - 0x40;
  if (((int)local_68 < 1) || (0x1a < (int)local_68)) {
    local_68 = 0;
  }
  if ((*(char *)0xd15 != '\0') && (0 < (int)local_68)) {
    puStack_4 = (uint *)param_1;
    pbStack_6 = (byte *)(local_68 + 0x28);
    puStack_8 = (undefined1 *)0x885;
    uVar2 = 0x11f2;
    puStack_a = (undefined1 *)0xd14c;
    func_0x000120ec();
  }
  puStack_4 = (uint *)0x640;
  pbStack_6 = local_66;
  puStack_a = (undefined1 *)0xd15b;
  puStack_8 = (undefined1 *)uVar2;
  FUN_21f2_3454();
  puStack_4 = (uint *)0x652;
  pbStack_6 = local_66;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xd16a;
  FUN_21f2_2d26();
  puStack_4 = (uint *)0x5a38;
  pbStack_6 = local_66;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xd179;
  FUN_21f2_2d26();
  puStack_4 = (uint *)0x5a3a;
  pbStack_6 = local_66;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xd188;
  FUN_21f2_2d26();
  for (local_6c = 1; (int)local_6c <= local_72; local_6c = local_6c + 1) {
    if (local_68 == local_6c) {
      puStack_4 = (uint *)0x5a3c;
    }
    else {
      puStack_4 = (uint *)0x5a38;
    }
    pbStack_6 = local_66;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd19e;
    FUN_21f2_2d26();
    *(char *)0x5a35 = (char)local_6c + '_';
    puStack_4 = (uint *)0x5a34;
    pbStack_6 = local_66;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd1b5;
    FUN_21f2_2d26();
    if (local_68 == local_6c) {
      puStack_4 = (uint *)0x5a40;
      pbStack_6 = local_66;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xd1cc;
      FUN_21f2_2d26();
    }
    puStack_4 = (uint *)0x5a3a;
    pbStack_6 = local_66;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd1db;
    FUN_21f2_2d26();
  }
  puStack_4 = (uint *)0x5a2f;
  pbStack_6 = local_66;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xd1ff;
  FUN_21f2_2d26();
  puStack_4 = (uint *)0x5a3a;
  pbStack_6 = local_66;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xd20e;
  FUN_21f2_2d26();
  if (*(char *)0xd16 != '\0') {
    if ((*(byte *)0xd16 == local_68) && (7 < *(byte *)0xd16)) {
      puStack_4 = (uint *)0x5a3c;
    }
    else {
      puStack_4 = (uint *)0x5a38;
    }
    pbStack_6 = local_66;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd238;
    FUN_21f2_2d26();
    *(char *)0x5a35 = *(char *)0xd16 + '_';
    puStack_4 = (uint *)0x5a34;
    pbStack_6 = local_66;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd24f;
    FUN_21f2_2d26();
    if ((*(byte *)0xd16 == local_68) && (7 < *(byte *)0xd16)) {
      puStack_4 = (uint *)0x5a40;
      pbStack_6 = local_66;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xd26d;
      FUN_21f2_2d26();
    }
    puStack_4 = (uint *)0x5a3a;
    pbStack_6 = local_66;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd27c;
    FUN_21f2_2d26();
  }
  puStack_4 = (uint *)local_66;
  pbStack_6 = (byte *)0x9;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xd28b;
  FUN_1def_07a4();
LAB_3ab8_270d:
  do {
    puStack_4 = (uint *)local_6a;
    pbStack_6 = local_76;
    puStack_8 = local_70;
    puStack_a = local_66;
    *(undefined2 *)0xc26 = 1;
    uStack_c = 1;
    uStack_e = 0x1bb4;
    uStack_10 = 0xd2a9;
    local_78 = FUN_1def_0904();
    *(undefined2 *)0xc26 = 0;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_78 == 0xffff) {
      return;
    }
  } while ((10 < (int)local_78) || ((int)local_78 < 1));
  if (local_72 - local_78 == -1) {
    puStack_4 = (uint *)0x1bb4;
    pbStack_6 = (byte *)0xd2de;
    local_78 = FUN_3ab8_24ea();
    if (((int)local_78 < 1) || (0x1a < (int)local_78)) goto LAB_3ab8_270d;
    *(undefined1 *)0xd16 = (undefined1)local_78;
  }
  if (local_72 - local_78 == -2) {
    bVar1 = *(byte *)0xd16;
    local_78 = (uint)bVar1;
    if ((bVar1 == 0) || (0x1a < bVar1)) goto LAB_3ab8_270d;
  }
  if (0 < (int)local_78) {
    puStack_4 = (uint *)0x1bb4;
    pbStack_6 = (byte *)0xd31c;
    func_0x0000c3ca();
    puStack_4 = &local_6c;
    pbStack_6 = (byte *)local_78;
    puStack_8 = (undefined1 *)0x885;
    puStack_a = (undefined1 *)0xd328;
    func_0x00027882();
    puStack_4 = (uint *)0x29;
    pbStack_6 = param_1;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd336;
    func_0x0002701e();
    puStack_4 = &local_6c;
    pbStack_6 = (byte *)(*param_2 - 0x40);
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd34c;
    func_0x00027882();
    if ((((local_68 != local_78) && (*(char *)0xd15 != '\0')) && (0x40 < *param_1)) &&
       (*param_1 < 0x5b)) {
      puStack_4 = (uint *)param_1;
      local_68 = *param_1 - 0x40;
      pbStack_6 = (byte *)(*param_1 - 0x18);
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xd37e;
      func_0x00012038();
    }
    return;
  }
  goto LAB_3ab8_270d;
}



/* 3ab8:2804  FUN_3ab8_2804  1445 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2804(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  int local_7e;
  undefined2 local_7c;
  undefined2 local_7a [48];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 *local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 *local_e;
  undefined2 *local_c;
  undefined2 *puStack_a;
  undefined2 *local_8;
  undefined2 *local_6;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x3ab8;
  local_6 = (undefined2 *)0xd38f;
  FUN_21f2_0ebc();
  local_8 = (undefined2 *)*(int *)0xa3ac;
  uVar3 = 0x22b2;
LAB_3ab8_281c:
  do {
    local_6 = (undefined2 *)0xd3a5;
    local_4 = (undefined2 **)uVar3;
    func_0x000297e6();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xd3ad;
    func_0x0002996b();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xd3b5;
    FUN_28b3_0ee9();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xd3be;
    func_0x000297e6();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xd3c6;
    func_0x0002996b();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xd3ce;
    FUN_28b3_0ee9();
    if (*(char *)0x116a != '\0') {
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd3dd;
      func_0x000297e6();
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd3e6;
      func_0x00029b6d();
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd3ee;
      func_0x00029983();
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd3f6;
      func_0x000297e6();
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd3ff;
      func_0x00029b6d();
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd407;
      func_0x00029983();
    }
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xd40f;
    func_0x000297e6();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xd414;
    func_0x00029d78();
    local_c = (undefined2 *)0x22b2;
    local_e = (undefined2 *)0xd41e;
    func_0x000299d1();
    local_c = (undefined2 *)0x22b2;
    local_e = (undefined2 *)0xd426;
    func_0x000297e6();
    local_c = (undefined2 *)0x22b2;
    local_e = (undefined2 *)0xd42b;
    func_0x00029d78();
    local_14 = 0x22b2;
    local_16 = (undefined2 *)0xd435;
    func_0x000299d1();
    local_14 = 0x5a43;
    local_16 = local_7a;
    uStack_18 = 0x22b2;
    uStack_1a = 0xd442;
    FUN_21f2_3454();
    *(undefined2 *)0xc22 = 1;
    local_4 = (undefined2 **)0xffff;
    local_6 = (undefined2 *)0x7;
    local_8 = (undefined2 *)0x2;
    puStack_a = (undefined2 *)0x11;
    local_c = local_7a;
    local_e = (undefined2 *)0x22b2;
    local_10 = 0xd464;
    FUN_1000_02b5();
    local_4 = (undefined2 **)0x5a52;
    local_6 = local_7a;
    local_8 = (undefined2 *)0xdef;
    puStack_a = (undefined2 *)0xd474;
    FUN_21f2_3454();
    local_4 = (undefined2 **)0x7e0;
    local_6 = local_7a;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0xd483;
    FUN_21f2_2d26();
    local_4 = (undefined2 **)0x5a55;
    local_6 = local_7a;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0xd492;
    FUN_21f2_2d26();
    local_4 = (undefined2 **)0x8de;
    local_6 = local_7a;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0xd4a1;
    FUN_21f2_2d26();
    local_4 = (undefined2 **)0x5a6b;
    local_6 = local_7a;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0xd4b0;
    FUN_21f2_2d26();
    if (*(char *)0x116a == '\0') {
      local_4 = (undefined2 **)0x7f8;
    }
    else {
      local_4 = (undefined2 **)0x5a70;
    }
    local_6 = local_7a;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0xd4cb;
    FUN_21f2_2d26();
    local_4 = (undefined2 **)0x5a75;
    local_6 = local_7a;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0xd4da;
    FUN_21f2_2d26();
    if (*(int *)0x116c < 0) {
      local_4 = (undefined2 **)0x5a7d;
      local_6 = local_7a;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd4f0;
      FUN_21f2_2d26();
    }
    local_4 = (undefined2 **)0x5a84;
    local_6 = local_7a;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0xd4ff;
    FUN_21f2_2d26();
    local_4 = (undefined2 **)local_7a;
    local_6 = (undefined2 *)0x5;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0xd50e;
    FUN_1def_07a4();
    *(undefined2 *)0xc2c = 0;
    local_4 = &local_16;
    local_6 = &local_86;
    local_8 = &local_82;
    puStack_a = local_7a;
    local_c = (undefined2 *)0x1;
    local_e = (undefined2 *)0x1bb4;
    uVar3 = 0x1bb4;
    local_10 = 0xd536;
    local_7e = FUN_1def_0904();
    *(int *)0xc2c = (int)local_c;
    if (((*(int *)0x158 != 0) || (local_7e == -1)) || (local_7e == 1)) {
      return;
    }
    if (local_7e == 4) {
      if (*(char *)0x116a == '\0') {
        *(undefined1 *)0x116a = 1;
      }
      else {
        *(undefined1 *)0x116a = 0;
      }
    }
    if (local_7e == 5) {
      *(int *)0x116c = -1 - *(int *)0x116c;
    }
    do {
      while( true ) {
        if (local_7e != 2) goto LAB_3ab8_2c03;
        local_10 = *(undefined2 *)0x115a;
        local_e = (undefined2 *)*(undefined2 *)0x115c;
        local_14 = *(undefined2 *)0x115e;
        local_12 = *(undefined2 *)0x1160;
        uVar4 = 0x885;
        local_6 = (undefined2 *)0xd5ac;
        local_4 = (undefined2 **)uVar3;
        func_0x0000c340();
        if (*(char *)0x116a != '\0') {
          local_4 = (undefined2 **)0x885;
          local_6 = (undefined2 *)0xd5bc;
          func_0x000297e6();
          local_4 = (undefined2 **)&local_10;
          local_6 = (undefined2 *)0x22b2;
          local_8 = (undefined2 *)0xd5c5;
          func_0x00029b6d();
          local_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 *)0xd5cb;
          func_0x00029983();
          local_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 *)0xd5d4;
          func_0x000297e6();
          local_4 = (undefined2 **)&local_14;
          local_6 = (undefined2 *)0x22b2;
          local_8 = (undefined2 *)0xd5dd;
          func_0x00029b6d();
          local_4 = (undefined2 **)0x22b2;
          uVar4 = 0x22b2;
          local_6 = (undefined2 *)0xd5e3;
          func_0x00029983();
        }
        local_6 = (undefined2 *)0xd5e8;
        local_4 = (undefined2 **)uVar4;
        func_0x0001bb4e();
        local_4 = (undefined2 **)0x1bb4;
        local_6 = (undefined2 *)0xd5f0;
        func_0x000297e6();
        local_4 = (undefined2 **)0x22b2;
        local_6 = (undefined2 *)0xd5f5;
        func_0x00029d78();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xd5ff;
        func_0x000299d1();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xd607;
        func_0x000297e6();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xd60c;
        func_0x00029d78();
        local_14 = 0x22b2;
        local_16 = (undefined2 *)0xd616;
        func_0x000299d1();
        local_14 = 0x5a86;
        local_16 = (undefined2 *)0x22b2;
        uStack_18 = 0xd61f;
        func_0x00012276();
        if (*(char *)0x116a != '\0') {
          *(undefined1 *)0x116a = 2;
        }
        local_4 = (undefined2 **)0x2711;
        local_6 = (undefined2 *)0x32;
        local_8 = &local_86;
        puStack_a = &local_82;
        local_c = &local_14;
        local_e = &local_10;
        local_10 = 0x11f2;
        uVar3 = 0xad;
        local_12 = 0xd64c;
        iVar1 = func_0x000021a4();
        if (*(char *)0x116a != '\0') {
          *(undefined1 *)0x116a = 1;
        }
        if (iVar1 == -1) goto LAB_3ab8_281c;
        uVar5 = 0;
        if (*(int *)0x158 != 0) {
          return;
        }
        local_4 = (undefined2 **)0xad;
        local_6 = (undefined2 *)0xd679;
        func_0x00029834();
        local_4 = (undefined2 **)0x22b2;
        local_6 = (undefined2 *)0xd681;
        func_0x000297e6();
        local_4 = (undefined2 **)0x22b2;
        local_6 = (undefined2 *)0xd686;
        func_0x00029d78();
        local_4 = (undefined2 **)0x22b2;
        local_6 = (undefined2 *)0xd68b;
        FUN_28b3_1181();
        if (!(bool)uVar5) break;
LAB_3ab8_2b5a:
        local_4 = (undefined2 **)0x1dc;
        local_6 = (undefined2 *)0x22b2;
        local_8 = (undefined2 *)0xd6e3;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        local_4 = (undefined2 **)0x2;
        local_6 = (undefined2 *)0x12;
        local_8 = (undefined2 *)0x11f2;
        puStack_a = (undefined2 *)0xd6f7;
        FUN_1000_0599();
        local_4 = (undefined2 **)0x396;
        local_6 = (undefined2 *)0x1de;
        local_8 = (undefined2 *)0xdef;
        uVar3 = 0x11f2;
        puStack_a = (undefined2 *)0xd706;
        func_0x00012276();
      }
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd695;
      func_0x000297e6();
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd69e;
      func_0x000297e6();
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd6a3;
      FUN_28b3_1181();
      if ((bool)uVar5) goto LAB_3ab8_2b5a;
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd6ae;
      func_0x00029834();
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd6b6;
      func_0x000297e6();
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd6bb;
      func_0x00029d78();
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd6c0;
      FUN_28b3_1181();
      if ((bool)uVar5) goto LAB_3ab8_2b5a;
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd6ca;
      func_0x000297e6();
      local_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0xd6d3;
      func_0x000297e6();
      local_4 = (undefined2 **)0x22b2;
      uVar3 = 0x22b2;
      local_6 = (undefined2 *)0xd6d8;
      FUN_28b3_1181();
      if ((bool)uVar5) goto LAB_3ab8_2b5a;
      if (local_4 == (undefined2 **)0x0) {
        if (*(char *)0x116a != '\0') {
          local_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 *)0xd724;
          func_0x000297e6();
          local_4 = (undefined2 **)&local_10;
          local_6 = (undefined2 *)0x22b2;
          local_8 = (undefined2 *)0xd72d;
          func_0x00029b9d();
          local_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 *)0xd733;
          func_0x00029983();
          local_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 *)0xd73c;
          func_0x000297e6();
          local_4 = (undefined2 **)&local_14;
          local_6 = (undefined2 *)0x22b2;
          local_8 = (undefined2 *)0xd745;
          func_0x00029b9d();
          local_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 *)0xd74b;
          func_0x00029983();
        }
        *(undefined2 *)0x115a = local_10;
        *(int *)0x115c = (int)local_e;
        *(undefined2 *)0x115e = local_14;
        *(undefined2 *)0x1160 = local_12;
        local_16 = (undefined2 *)0x0;
        local_4 = (undefined2 **)0x1;
        local_6 = (undefined2 *)0x22b2;
        local_8 = (undefined2 *)0xd773;
        func_0x00004f6e();
        local_4 = (undefined2 **)0x0;
        local_6 = (undefined2 *)0x3bf;
        uVar3 = 0x11f2;
        local_8 = (undefined2 *)0xd77c;
        func_0x0001470b();
        *(undefined2 *)0xbc0 = 1;
        goto LAB_3ab8_2c03;
      }
    } while ((local_4 != (undefined2 **)0x65) && (local_4 != (undefined2 **)0x66));
    local_16 = (undefined2 *)0x0;
LAB_3ab8_2c03:
    do {
      if (local_7e != 3) goto LAB_3ab8_281c;
      local_4 = (undefined2 **)0x5aa8;
      local_6 = local_7a;
      puStack_a = (undefined2 *)0xd799;
      local_8 = (undefined2 *)uVar3;
      FUN_21f2_3454();
      local_4 = (undefined2 **)0x652;
      local_6 = local_7a;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd7a8;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x5aac;
      local_6 = local_7a;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd7b7;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x6da;
      local_6 = local_7a;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd7c6;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x302;
      local_6 = local_7a;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd7d5;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x2f0;
      local_6 = local_7a;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd7e4;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x5aae;
      local_6 = local_7a;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd7f3;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x6da;
      local_6 = local_7a;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd802;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x5ab0;
      local_6 = local_7a;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd811;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x8d4;
      local_6 = local_7a;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd820;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x5ab2;
      local_6 = local_7a;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd82f;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)local_7a;
      local_6 = (undefined2 *)0x1;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xd83e;
      FUN_1def_07a4();
      *(undefined2 *)0xc2c = 0;
      local_4 = &local_16;
      local_6 = &local_86;
      local_8 = &local_82;
      puStack_a = local_7a;
      *(undefined2 *)0xc20 = 1;
      local_c = (undefined2 *)0x1;
      local_e = (undefined2 *)0x1bb4;
      uVar3 = 0x1bb4;
      local_10 = 0xd869;
      iVar1 = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      *(int *)0xc2c = (int)local_c;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (iVar1 == 1) {
        uVar4 = *(undefined2 *)0xa360;
        uVar2 = *(undefined2 *)0xa362;
        *(undefined2 *)0x1162 = uVar4;
        *(undefined2 *)0x1164 = uVar2;
        goto LAB_3ab8_2d30;
      }
      if (iVar1 == -1) goto LAB_3ab8_281c;
      local_7c = *(undefined2 *)0x116c;
      *(undefined2 *)0x116c = 0;
      if (local_16 != (undefined2 *)0x0) {
        local_4 = (undefined2 **)&local_86;
        local_6 = &local_82;
        local_8 = local_16;
        puStack_a = (undefined2 *)0x1bb4;
        uVar3 = 0x11f2;
        local_c = (undefined2 *)0xd8f5;
        iVar1 = func_0x00015409();
        if (iVar1 == 0) {
          local_16 = (undefined2 *)0x0;
        }
      }
      *(undefined2 *)0x116c = local_7c;
    } while (local_16 == (undefined2 *)0x0);
    *(undefined2 *)0x1162 = local_82;
    *(undefined2 *)0x1164 = local_80;
    uVar4 = local_86;
    uVar2 = local_84;
LAB_3ab8_2d30:
    *(undefined2 *)0x1166 = uVar4;
    *(undefined2 *)0x1168 = uVar2;
    local_4 = (undefined2 **)0x0;
    local_8 = (undefined2 *)0xd8bf;
    local_6 = (undefined2 *)uVar3;
    func_0x0001470b();
    *(undefined2 *)0xbc0 = 1;
    uVar3 = 0x11f2;
  } while( true );
}



/* 3ab8:2da9  FUN_3ab8_2da9  26 bytes, 0 callers */

void FUN_3ab8_2da9(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 auStack_74 [48];
  undefined1 auStack_44 [4];
  int iStack_40;
  undefined1 local_3e [50];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uVar3 = 0x22b2;
  puStack_6 = (undefined1 *)0xd934;
  FUN_21f2_0ebc();
  while( true ) {
    *(undefined1 *)0xd04 = 0;
    puStack_4 = (undefined1 *)0x5ab4;
    puStack_6 = local_3e;
    pcVar1 = (code *)swi(0x3f);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      func_0x0000ac64();
      return;
    }
    if (*(int *)0x158 != 0) {
      return;
    }
    puStack_6 = (undefined1 *)0xd96b;
    puStack_4 = (undefined1 *)uVar3;
    FUN_1000_0599();
    func_0x00010526();
    puStack_4 = (undefined1 *)0xdef;
    puStack_6 = (undefined1 *)0xd97f;
    FUN_1000_0599();
    func_0x00010526();
    puStack_4 = (undefined1 *)0x5ab9;
    puStack_6 = (undefined1 *)0xbf48;
    uStack_8 = 0xdef;
    uStack_a = 0xd99b;
    FUN_21f2_3454();
    *(undefined2 *)0xc22 = 1;
    puStack_4 = (undefined1 *)0x3;
    puStack_6 = (undefined1 *)0x14;
    uStack_8 = 0xbf48;
    uStack_a = 0x22b2;
    uStack_c = 0xd9bd;
    FUN_1000_02b5();
    puStack_4 = auStack_44;
    puStack_6 = (undefined1 *)0x482;
    *(undefined2 *)0xc2c = 1;
    *(undefined2 *)0xc26 = 1;
    uStack_8 = 1;
    uStack_a = 0xdef;
    uStack_c = 0xd9dc;
    iStack_40 = FUN_1def_0904();
    *(undefined2 *)0xc2c = 0;
    *(undefined2 *)0xc26 = 0;
    uVar3 = 0x11f2;
    FUN_10ad_18a4();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (iStack_40 == 0x14) break;
    if (iStack_40 == 1) {
      puStack_4 = (undefined1 *)0x11f2;
      puStack_6 = (undefined1 *)0xda0a;
      func_0x0000c3ca();
      puStack_4 = (undefined1 *)0x5abf;
      puStack_6 = (undefined1 *)0xd18;
      uStack_8 = 0xbf48;
      uStack_a = 0x885;
      uStack_c = 0xda1b;
      func_0x0001263c();
      puStack_4 = auStack_74;
      puStack_6 = (undefined1 *)0x0;
      uStack_8 = 0xbf48;
      uStack_a = 0x11f2;
      uVar4 = 0x22b2;
      uStack_c = 0xda2e;
      iVar2 = func_0x000276d7();
      if (iVar2 == 0) {
        puStack_4 = (undefined1 *)0xbf48;
        puStack_6 = (undefined1 *)0x22b2;
        uVar4 = 0x22b2;
        uStack_8 = 0xda3e;
        iVar2 = func_0x00027698();
        if (iVar2 != 0) {
          puStack_4 = (undefined1 *)0x830;
          puStack_6 = (undefined1 *)0x22b2;
          uVar4 = 0x11f2;
          uStack_8 = 0xda4c;
          FUN_13bf_0a03();
        }
      }
      puStack_4 = (undefined1 *)0xbf48;
      puStack_6 = local_3e;
      uVar3 = 0x22b2;
      uStack_a = 0xda5a;
      uStack_8 = uVar4;
      iVar2 = func_0x000270f0();
      if (iVar2 != 0) {
        puStack_4 = (undefined1 *)0x5acb;
        puStack_6 = (undefined1 *)0x22b2;
        uVar3 = 0x11f2;
        uStack_8 = 0xda6c;
        FUN_13bf_0a03();
      }
    }
  }
  return;
}



/* 3ab8:2ef4  FUN_3ab8_2ef4  4761 bytes, 0 callers */

/* WARNING: Instruction at (ram,0x0003e58f) overlaps instruction at (ram,0x0003e58b)
    */
/* WARNING: Type propagation algorithm not settling */

undefined2 ** __cdecl16far
FUN_3ab8_2ef4(undefined2 **param_1,undefined2 param_2,undefined2 **param_3,undefined2 *param_4)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined2 **ppuVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined2 **ppuVar7;
  char cVar8;
  code *pcVar9;
  byte bVar10;
  undefined2 **ppuVar11;
  uint uVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined2 extraout_DX;
  undefined2 *puVar15;
  undefined2 **unaff_SI;
  undefined4 *puVar16;
  int *piVar17;
  undefined2 unaff_ES;
  undefined2 uVar18;
  undefined2 **ppuVar19;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar20;
  undefined1 uVar21;
  bool bVar22;
  undefined1 uVar23;
  undefined2 *puVar24;
  undefined4 uVar25;
  undefined2 **ppuVar26;
  int *piVar27;
  undefined2 *in_stack_0000003a;
  int *in_stack_0000003c;
  undefined2 *in_stack_0000003e;
  int *in_stack_00000040;
  int local_76e;
  undefined4 local_76a;
  char local_766;
  char local_765;
  uint local_762;
  undefined2 *local_744;
  undefined2 **local_740;
  undefined2 **local_73e;
  undefined2 **local_738;
  undefined2 **local_736;
  uint local_72c;
  undefined1 local_72a [500];
  char local_536 [500];
  uint local_342;
  uint local_340;
  undefined2 **local_33e;
  undefined2 **local_33c;
  int local_33a;
  undefined4 local_338;
  undefined4 local_330;
  byte bStack_31a;
  int local_318;
  undefined2 **local_316;
  undefined2 **local_314;
  char local_312;
  char local_311;
  int local_308;
  int local_306;
  undefined2 *local_300;
  undefined2 local_2fe;
  undefined2 **local_2fc;
  int local_2fa;
  undefined2 *local_2f8 [42];
  undefined4 uStack_24e;
  undefined2 **ppuStack_24a;
  undefined2 uStack_248;
  undefined2 uStack_246;
  undefined2 uStack_244;
  undefined2 uStack_240;
  undefined2 uStack_23e;
  undefined2 uStack_23c;
  undefined2 uStack_23a;
  undefined2 *apuStack_222 [14];
  undefined2 **ppuStack_1ea;
  undefined2 uStack_1e8;
  undefined1 auStack_1da [14];
  char local_1cc [34];
  undefined2 **ppuStack_1aa;
  undefined2 **ppuStack_1a8;
  undefined2 uStack_1a6;
  undefined2 uStack_122;
  undefined2 uStack_120;
  undefined2 **ppuStack_ce;
  undefined2 **ppuStack_be;
  undefined2 **ppuStack_bc;
  undefined2 **ppuStack_ba;
  undefined2 uStack_b8;
  int local_90;
  undefined1 local_8e [4];
  undefined4 local_8a;
  undefined2 **local_86;
  undefined2 **local_84;
  undefined2 *local_82;
  uint local_7e;
  uint local_7a;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 **local_6c;
  undefined2 **ppuStack_6a;
  undefined2 *puStack_68;
  undefined4 uStack_64;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 *local_56;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 **ppuStack_48;
  undefined2 uStack_46;
  undefined2 **ppuStack_44;
  undefined2 *puStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 **ppuStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 local_2e;
  int iStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_22;
  undefined2 **ppuStack_1e;
  int in_stack_0000ffe4;
  int local_18;
  undefined2 **local_16;
  undefined1 local_14 [4];
  undefined2 **ppuStack_10;
  undefined2 **ppuStack_e;
  undefined2 **ppuStack_c;
  undefined2 **local_a;
  undefined2 **local_8;
  
  uVar18 = 0x22b2;
  FUN_21f2_0ebc();
LAB_3ab8_2f03:
  do {
    while( true ) {
      local_8 = (undefined2 **)local_14;
      ppuStack_c = (undefined2 **)0xda96;
      local_a = (undefined2 **)uVar18;
      FUN_21f2_3454();
      if (*(char *)0xd18 != *(char *)0xd44) {
        local_8 = (undefined2 **)0xbf48;
        local_a = (undefined2 **)0x22b2;
        ppuStack_c = (undefined2 **)0xdab2;
        FUN_21f2_3454();
        local_8 = (undefined2 **)0x22b2;
        local_a = (undefined2 **)0xdac2;
        FUN_21f2_2d26();
      }
      local_8 = (undefined2 **)0x22b2;
      local_a = (undefined2 **)0xdad1;
      FUN_21f2_2d26();
      local_8 = (undefined2 **)0x22b2;
      local_a = (undefined2 **)0xdadf;
      func_0x00024c86();
      local_8 = (undefined2 **)0x22b2;
      local_a = (undefined2 **)0xdaf9;
      FUN_21f2_2d26();
      local_8 = (undefined2 **)0x22b2;
      local_a = (undefined2 **)0xdb07;
      FUN_21f2_2d26();
      if (*(int *)0x11f0 < 10) {
        local_8 = (undefined2 **)0x22b2;
        local_a = (undefined2 **)0xdb1c;
        FUN_21f2_2d26();
      }
      local_8 = (undefined2 **)0x22b2;
      local_a = (undefined2 **)0xdb2a;
      FUN_21f2_2d26();
      local_8 = (undefined2 **)0x22b2;
      ppuVar19 = (undefined2 **)0x22b2;
      local_a = (undefined2 **)0xdb38;
      FUN_21f2_2d26();
      if (9 < *(int *)0x11f0) {
        local_8 = (undefined2 **)0x22b2;
        local_a = (undefined2 **)0xdb4d;
        FUN_21f2_2d26();
        *(undefined2 *)0xc22 = 1;
        local_8 = (undefined2 **)0x2;
        local_a = (undefined2 **)0x2e;
        ppuStack_c = (undefined2 **)local_14;
        ppuStack_e = (undefined2 **)0x22b2;
        ppuVar19 = (undefined2 **)0xdef;
        ppuStack_10 = (undefined2 **)0xdb6e;
        FUN_1000_02b5();
      }
      local_a = (undefined2 **)0xdb7d;
      local_8 = ppuVar19;
      FUN_1def_07a4();
      *(undefined2 *)0xc2c = 1;
      if (1 < *(byte *)0x136) {
        *(undefined2 *)0xc1a = 1;
      }
      local_8 = (undefined2 **)&local_22;
      local_a = param_1;
      ppuStack_c = (undefined2 **)0x270f;
      ppuStack_e = (undefined2 **)0x1bb4;
      ppuStack_10 = (undefined2 **)0xdbaa;
      ppuVar19 = param_1;
      local_18 = FUN_1def_0904();
      *(undefined2 *)0xc1a = 1;
      *(undefined2 *)0xc2c = 0;
      ppuVar11 = (undefined2 **)func_0x0000c3ca();
      if (*(int *)0x158 != 0) goto LAB_3ab8_3048;
      if (-1 < local_18) break;
      if (*(int *)0xd76 == 0) goto LAB_3ab8_3048;
      local_18 = 2;
      *(undefined1 *)0xd14 = 0;
LAB_3ab8_31a2:
      *(undefined1 *)0xd15 = 1;
      uVar18 = 0x885;
      func_0x0000c3ca();
      ppuVar11 = (undefined2 **)(local_18 - 1);
      if (ppuVar11 < (undefined2 **)0x6) {
        puVar13 = (undefined2 *)((int)ppuVar11 * 2);
        switch(ppuVar11) {
        case (undefined2 **)0x0:
          puVar15 = (undefined2 *)*(undefined2 *)0x8ac6;
          *(int *)0x8ac6 = *(int *)0x8ac6 + 0xc;
          cVar8 = *(char *)(puVar15 + -1);
          ppuVar19 = (undefined2 **)CONCAT11((char)((uint)ppuVar19 >> 8),cVar8);
          *(int *)0x8ac6 = *(int *)0x8ac6 + -0xc;
          *puVar13 = ppuVar19;
          puVar13[1] = *puVar15;
          puVar13[2] = puVar15[1];
          if (cVar8 != '\x03') {
            puVar13[3] = puVar15[2];
            puVar13[4] = puVar15[3];
          }
          return ppuVar19;
        case (undefined2 **)0x1:
          if ((int)ppuVar11 < 0 == (int)puVar13 < 0) {
            uVar20 = 0;
            uVar23 = (char)puVar13 == (&stack0x6fc5)[(int)unaff_SI];
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar20 || (bool)uVar23) {
              ppuStack_be = (undefined2 **)*(undefined2 *)0x93c0;
              ppuStack_bc = (undefined2 **)*(undefined2 *)0x93c2;
              ppuStack_ba = (undefined2 **)*(undefined2 *)0x93c4;
              uStack_b8 = *(undefined2 *)0x93c6;
            }
            FUN_32b2_6d14();
            FUN_32b2_6d14();
            FUN_32b2_710c();
            FUN_32b2_710c();
            FUN_32b2_7154();
            FUN_32b2_7191();
            if (!(bool)uVar20) {
              FUN_32b2_6d14();
              FUN_32b2_6fc7();
              FUN_32b2_6d14();
              FUN_32b2_710c();
              FUN_32b2_710c();
              FUN_32b2_7191();
              if (!(bool)uVar20) {
                ppuStack_be = (undefined2 **)*(undefined2 *)0x93c0;
                ppuStack_bc = (undefined2 **)*(undefined2 *)0x93c2;
                ppuStack_ba = (undefined2 **)*(undefined2 *)0x93c4;
                uStack_b8 = *(undefined2 *)0x93c6;
              }
              local_8 = ppuStack_bc;
              local_a = ppuStack_be;
              ppuStack_c = (undefined2 **)0x32b2;
              ppuStack_e = (undefined2 **)0x774;
              FUN_32b2_7592();
              local_8 = (undefined2 **)0x77e;
              FUN_32b2_6d14();
              local_8 = (undefined2 **)0x786;
              FUN_32b2_70dc();
              local_8 = (undefined2 **)0x78e;
              FUN_32b2_6d14();
              local_8 = (undefined2 **)0x797;
              FUN_32b2_710c();
              local_8 = (undefined2 **)0x79c;
              FUN_32b2_7182();
              local_8 = (undefined2 **)0x7a5;
              FUN_32b2_6e99();
              local_8 = (undefined2 **)0x7ad;
              FUN_32b2_710c();
              local_8 = (undefined2 **)0x7b5;
              FUN_32b2_7154();
              local_8 = (undefined2 **)0x7be;
              FUN_32b2_6e99();
              local_8 = (undefined2 **)0x7c7;
              FUN_32b2_6eb1();
              local_8 = (undefined2 **)&uStack_64;
              local_a = (undefined2 **)0x32b2;
              ppuStack_c = (undefined2 **)0x7d9;
              FUN_32b2_6cc6();
              local_a = (undefined2 **)0x32b2;
              ppuStack_c = (undefined2 **)0x7de;
              FUN_32b2_7258();
              local_14._2_2_ = 0x32b2;
              local_14._0_2_ = 0x7e8;
              FUN_32b2_6eb1();
              local_14._2_2_ = 0x32b2;
              local_14._0_2_ = 0x7f0;
              FUN_32b2_6cc6();
              local_14._2_2_ = 0x32b2;
              local_14._0_2_ = 0x7f5;
              FUN_32b2_7258();
              FUN_32b2_6eb1();
              ppuStack_1e = ppuStack_6a;
              local_22._2_2_ = local_6c;
              local_22._0_2_ = (undefined2 **)uStack_4a;
              local_24 = uStack_4c;
              local_26 = uStack_4e;
              uStack_28 = uStack_50;
              uStack_2a = 0x32b2;
              iStack_2c = 0x820;
              FUN_32b2_6d14();
              uStack_32 = 0x32b2;
              uStack_34 = 0x82a;
              FUN_32b2_6eb1();
              uStack_32 = 0x32b2;
              uStack_34 = 0x833;
              FUN_32b2_6d14();
              uStack_3a = 0x32b2;
              uStack_3c = 0x83d;
              FUN_32b2_6eb1();
              uStack_3a = 0;
              uStack_3c = 0x32b2;
              uStack_3e = 0x844;
              func_0x0003fc09();
              uVar20 = (undefined1 *)0xffc9 < &uStack_3a;
              uVar23 = &stack0x0000 == (undefined1 *)0x4;
              local_8 = (undefined2 **)0x84f;
              FUN_32b2_6cc6();
              local_8 = (undefined2 **)0x857;
              FUN_32b2_6cc6();
              local_8 = (undefined2 **)0x85c;
              FUN_32b2_7191();
              if ((bool)uVar23) {
                uStack_64._0_2_ = param_1;
                uStack_64._2_2_ = param_2;
              }
              local_8 = (undefined2 **)0x872;
              FUN_32b2_6cc6();
              local_8 = (undefined2 **)0x87a;
              FUN_32b2_6cc6();
              local_8 = (undefined2 **)0x87f;
              FUN_32b2_7191();
              if ((bool)uVar23) {
                local_8e._2_2_ = param_3;
                local_8a._0_2_ = param_4;
              }
              *in_stack_0000003a = (undefined2 **)uStack_64;
              in_stack_0000003a[1] = uStack_64._2_2_;
              *in_stack_0000003c = local_8e._2_2_;
              in_stack_0000003c[1] = (int)(undefined2 *)local_8a;
              *in_stack_0000003e = (undefined2 **)uStack_64;
              in_stack_0000003e[1] = uStack_64._2_2_;
              *in_stack_00000040 = local_8e._2_2_;
              in_stack_00000040[1] = (int)(undefined2 *)local_8a;
              ppuStack_38 = (undefined2 **)((int)ppuStack_38 + 1);
              uVar23 = ppuStack_38 == (undefined2 **)0x0;
              local_8 = (undefined2 **)0x8d7;
              FUN_32b2_6d14();
              local_8 = (undefined2 **)0x8e0;
              FUN_32b2_6d14();
              local_8 = (undefined2 **)0x8e5;
              FUN_32b2_7191();
              if (!(bool)uVar20 && !(bool)uVar23) {
                local_8 = ppuStack_ba;
                local_a = ppuStack_bc;
                ppuStack_c = ppuStack_be;
                ppuStack_e = (undefined2 **)0x32b2;
                ppuStack_10 = (undefined2 **)0x8ff;
                FUN_32b2_7592();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x909;
                FUN_32b2_6d14();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x911;
                FUN_32b2_7154();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x916;
                FUN_32b2_6fd6();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x91e;
                FUN_32b2_6d14();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x927;
                FUN_32b2_710c();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x92c;
                FUN_32b2_7182();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x935;
                FUN_32b2_6e99();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x93d;
                FUN_32b2_710c();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x945;
                FUN_32b2_7154();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x94e;
                FUN_32b2_6e99();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x957;
                FUN_32b2_6eb1();
                local_8 = (undefined2 **)((int)local_8e + 2);
                local_a = (undefined2 **)&uStack_64;
                ppuStack_c = (undefined2 **)0x32b2;
                ppuStack_e = (undefined2 **)0x969;
                FUN_32b2_6cc6();
                ppuStack_c = (undefined2 **)0x32b2;
                ppuStack_e = (undefined2 **)0x96e;
                FUN_32b2_7258();
                local_14._0_2_ = 0x32b2;
                local_16 = (undefined2 **)0x978;
                FUN_32b2_6eb1();
                local_14._0_2_ = 0x32b2;
                local_16 = (undefined2 **)0x980;
                FUN_32b2_6cc6();
                local_14._0_2_ = 0x32b2;
                local_16 = (undefined2 **)0x985;
                FUN_32b2_7258();
                ppuStack_1e = (undefined2 **)0x98f;
                FUN_32b2_6eb1();
                ppuStack_1e = (undefined2 **)puStack_68;
                local_22._2_2_ = ppuStack_6a;
                local_22._0_2_ = local_6c;
                local_24 = uStack_4a;
                local_26 = uStack_4c;
                uStack_28 = uStack_4e;
                uStack_2a = uStack_50;
                iStack_2c = 0x32b2;
                local_2e = 0x9b0;
                FUN_32b2_6d14();
                uStack_34 = 0x32b2;
                uStack_36 = 0x9ba;
                FUN_32b2_6eb1();
                uStack_34 = 0x32b2;
                uStack_36 = 0x9c3;
                FUN_32b2_6d14();
                uStack_3c = 0x32b2;
                uStack_3e = 0x9cd;
                FUN_32b2_6eb1();
                uStack_3c = 0;
                uStack_3e = 0x32b2;
                uStack_40 = 0x9d4;
                func_0x0003fc09();
                uVar20 = &stack0x0000 == (undefined1 *)0x6;
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x9df;
                FUN_32b2_6cc6();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x9e7;
                FUN_32b2_6cc6();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0x9ec;
                FUN_32b2_7191();
                if ((bool)uVar20) {
                  uStack_64._0_2_ = param_1;
                  uStack_64._2_2_ = param_2;
                }
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0xa02;
                FUN_32b2_6cc6();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0xa0a;
                FUN_32b2_6cc6();
                local_8 = (undefined2 **)0x32b2;
                local_a = (undefined2 **)0xa0f;
                FUN_32b2_7191();
                if ((bool)uVar20) {
                  local_8e._2_2_ = param_3;
                  local_8a._0_2_ = param_4;
                }
                *in_stack_0000003e = (undefined2 **)uStack_64;
                in_stack_0000003e[1] = uStack_64._2_2_;
                *in_stack_00000040 = local_8e._2_2_;
                in_stack_00000040[1] = (int)(undefined2 *)local_8a;
                return (undefined2 **)((int)ppuStack_38 + 1);
              }
              return ppuStack_38;
            }
          }
          return (undefined2 **)0x0;
        case (undefined2 **)0x2:
          return ppuVar19;
        case (undefined2 **)0x3:
          goto switchD_3000_ddee_caseD_3;
        case (undefined2 **)0x5:
          bVar10 = in(extraout_DX);
          return (undefined2 **)(uint)bVar10;
        }
        goto switchD_3000_ddee_caseD_4;
      }
      *(undefined1 *)0xd15 = 0;
      if (*(int *)0x158 != 0) {
LAB_3ab8_3048:
        *(undefined2 *)0xd76 = 0;
        return ppuVar11;
      }
    }
    if (local_18 == 0x14) {
      *(undefined2 *)0xd76 = 0;
      goto LAB_3ab8_3048;
    }
    local_8 = (undefined2 **)&stack0xffe6;
    local_a = (undefined2 **)&stack0xfffc;
    ppuStack_c = (undefined2 **)0x885;
    ppuStack_e = (undefined2 **)0xdc12;
    func_0x0000dcbd();
    if (((((local_18 == 2) && (in_stack_0000ffe4 == 0)) && (*(char *)0x15a == '\0')) &&
        ((0x30 < (int)local_16 && (9 < *(int *)0x11f0)))) ||
       ((local_18 == 7 && (9 < *(int *)0x11f0)))) {
      *(undefined2 *)0xd76 = 0;
      pcVar9 = (code *)swi(0x3f);
      ppuVar19 = (undefined2 **)(*pcVar9)();
    }
    else {
      if ((*(int *)0xc18 != 500) &&
         ((in_stack_0000ffe4 == 0 ||
          ((((int)local_a < 9 || (0x10 < (int)local_16)) &&
           ((uVar12 = func_0x0000db57(), (uVar12 & 4) == 0 &&
            (uVar12 = func_0x0000db57(), (uVar12 & 2) == 0)))))))) {
        if (*(int *)0xc18 == 0) {
          if (in_stack_0000ffe4 == 1) {
            local_18 = 1;
          }
          if (in_stack_0000ffe4 == 2) {
            local_18 = 2;
          }
          if ((local_18 == 1) || (local_18 == 2)) {
            *(undefined2 *)0xd76 = 0;
          }
          goto LAB_3ab8_31a2;
        }
        func_0x000297e6();
        func_0x00029d78();
        ppuStack_c = (undefined2 **)0x22b2;
        ppuStack_e = (undefined2 **)0xdcd8;
        func_0x000299d1();
        ppuStack_c = (undefined2 **)0x22b2;
        ppuStack_e = (undefined2 **)0xdce0;
        func_0x000297e6();
        ppuStack_c = (undefined2 **)0x22b2;
        ppuStack_e = (undefined2 **)0xdce5;
        func_0x00029d78();
        local_14._0_2_ = 0x22b2;
        local_16 = (undefined2 **)0xdcef;
        func_0x000299d1();
        local_14._0_2_ = 0x22b2;
        uVar18 = 0x3bf;
        local_16 = (undefined2 **)0xdcf4;
        func_0x0000507a();
        goto LAB_3ab8_2f03;
      }
      uVar18 = 0x885;
      *(undefined2 *)0xc18 = 0;
      if ((*(int *)0x11f0 < 0x15) && (*(byte *)0x136 < 2)) goto LAB_3ab8_2f03;
      local_8 = local_22._2_2_;
      local_a = (undefined2 **)local_22;
      ppuStack_c = param_1;
      pcVar9 = (code *)swi(0x3f);
      ppuVar19 = (undefined2 **)(*pcVar9)();
    }
    uVar18 = 0x885;
    if (*(int *)0x158 != 0) {
      return ppuVar19;
    }
  } while( true );
switchD_3000_ddee_caseD_4:
  ppuVar19 = (undefined2 **)0x11f2;
  local_8 = (undefined2 **)0xcb66;
  func_0x00012276();
LAB_3ab8_1f5f:
  local_8 = (undefined2 **)((int)local_14 + 2);
  local_a = (undefined2 **)0x1;
  ppuStack_c = (undefined2 **)0x5a08;
  ppuStack_e = (undefined2 **)0x2;
  local_14._2_2_ = -0x3503;
  ppuStack_10 = ppuVar19;
  iStack_2c = FUN_3ab8_0adc();
  if (*(int *)0x158 != 0) {
    return (undefined2 **)0x1;
  }
  if (iStack_2c != -1) goto LAB_3ab8_1f95;
  goto LAB_3ab8_1eb7;
LAB_3ab8_1f95:
  if (iStack_2c != 10) goto LAB_3ab8_1f5f;
  local_16 = ppuStack_24a;
  local_14._0_2_ = uStack_248;
  local_8 = ppuVar19;
  if ((local_14._2_2_ != (int)uStack_24e) || (ppuStack_10 != uStack_24e._2_2_)) {
    local_a = (undefined2 **)0xcb78;
    puVar24 = (undefined2 *)func_0x00000271();
    puVar15 = (undefined2 *)puVar24;
    puVar13 = &uStack_4c;
    for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
      puVar5 = puVar13;
      puVar13 = puVar13 + 1;
      puVar3 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar5 = *puVar3;
    }
    uStack_122 = uStack_4c;
    uStack_120 = uStack_4a;
    ppuStack_1a8 = ppuStack_48;
    uStack_1a6 = uStack_46;
    ppuStack_6a = ppuStack_44;
    puStack_68 = puStack_42;
    local_8 = (undefined2 **)0x0;
    local_a = (undefined2 **)0xcbc6;
    puVar24 = (undefined2 *)func_0x00000271();
    puVar15 = (undefined2 *)puVar24;
    puVar13 = &uStack_4c;
    for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
      puVar5 = puVar13;
      puVar13 = puVar13 + 1;
      puVar3 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar5 = *puVar3;
    }
    func_0x000297e6();
    func_0x0002996b();
    FUN_28b3_0ee9();
    local_8e._2_2_ = ppuStack_44;
    local_8a._0_2_ = puStack_42;
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029b9d();
    func_0x00029d78();
    func_0x000299d1();
    func_0x000297e6();
    func_0x00029d78();
    ppuStack_c = (undefined2 **)0x22b2;
    ppuStack_e = (undefined2 **)0xcc40;
    func_0x000299d1();
    ppuStack_c = (undefined2 **)0x22b2;
    ppuStack_e = (undefined2 **)0xcc48;
    func_0x000297e6();
    ppuStack_c = (undefined2 **)0x22b2;
    ppuStack_e = (undefined2 **)0xcc51;
    func_0x0002996b();
    ppuStack_c = (undefined2 **)0x22b2;
    ppuStack_e = (undefined2 **)0xcc56;
    func_0x00029d78();
    local_14._0_2_ = 0x22b2;
    local_16 = (undefined2 **)0xcc60;
    func_0x000299d1();
    local_14._0_2_ = 0x22b2;
    local_16 = (undefined2 **)0xcc69;
    func_0x000297e6();
    local_14._0_2_ = 0x22b2;
    local_16 = (undefined2 **)0xcc6e;
    func_0x00029d78();
    ppuStack_1e = (undefined2 **)0xcc78;
    func_0x000299d1();
    ppuStack_1e = (undefined2 **)0xcc81;
    func_0x000297e6();
    ppuStack_1e = (undefined2 **)0xcc86;
    func_0x00029d78();
    local_24 = 0x22b2;
    local_26 = 0xcc90;
    func_0x000299d1();
    local_24 = 0x22b2;
    ppuVar19 = (undefined2 **)0x1bb4;
    local_26 = 0xcc95;
    iVar14 = FUN_1def_043a();
    if (iVar14 == 0) {
      local_8 = (undefined2 **)0xcca4;
      FUN_3ab8_0000();
    }
    else {
      local_8e._0_2_ = (undefined2 **)0x0;
      local_8 = (undefined2 **)local_8e;
      local_a = (undefined2 **)0x1bb4;
      ppuStack_c = (undefined2 **)0xccc6;
      func_0x000297e6();
      local_a = (undefined2 **)0x22b2;
      ppuStack_c = (undefined2 **)0xcccf;
      func_0x00029c74();
      local_a = (undefined2 **)0x22b2;
      ppuStack_c = (undefined2 **)0xccd8;
      func_0x000299b9();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xcce2;
      func_0x000299d1();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xccea;
      func_0x000297e6();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xccf3;
      func_0x00029c74();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xccfc;
      func_0x000299b9();
      func_0x000299d1();
      FUN_3ab8_0238();
      local_8 = (undefined2 **)local_8e;
      local_a = (undefined2 **)0x22b2;
      ppuStack_c = (undefined2 **)0xcd25;
      func_0x00029834();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xcd2f;
      func_0x000299d1();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xcd38;
      func_0x00029834();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xcd40;
      FUN_28b3_100d();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xcd49;
      func_0x000299b9();
      func_0x000299d1();
      FUN_3ab8_0238();
      local_8 = (undefined2 **)local_8e;
      local_a = (undefined2 **)0x22b2;
      ppuStack_c = (undefined2 **)0xcd72;
      func_0x00029834();
      local_a = (undefined2 **)0x22b2;
      ppuStack_c = (undefined2 **)0xcd7b;
      FUN_28b3_100d();
      local_a = (undefined2 **)0x22b2;
      ppuStack_c = (undefined2 **)0xcd84;
      func_0x000299b9();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xcd8e;
      func_0x000299d1();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xcd97;
      func_0x00029834();
      func_0x000299d1();
      FUN_3ab8_0238();
      local_8 = (undefined2 **)local_8e;
      local_a = (undefined2 **)0x22b2;
      ppuStack_c = (undefined2 **)0xcdc0;
      func_0x00029834();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xcdca;
      func_0x000299d1();
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xcdd3;
      func_0x00029834();
      ppuVar19 = (undefined2 **)0x22b2;
      func_0x000299d1();
      FUN_3ab8_0238();
      ppuStack_ce = (undefined2 **)0x0;
      local_8 = local_86;
      local_a = (undefined2 **)local_8a._2_2_;
      ppuStack_c = apuStack_222;
      ppuStack_e = (undefined2 **)auStack_1da;
      ppuStack_10 = (undefined2 **)local_8e._0_2_;
      local_14._2_2_ = 0x22b2;
      local_14._0_2_ = 0xce0b;
      ppuStack_1aa = (undefined2 **)FUN_3ab8_0853();
      if (*(int *)0x158 != 0) {
        return (undefined2 **)0xfba9;
      }
      if (ppuStack_1aa == (undefined2 **)0xffff) goto LAB_3ab8_1f5f;
      ppuStack_ce = ppuStack_1aa;
      if (param_1 != (undefined2 **)0x5) {
        ppuStack_ce = (undefined2 **)0x0;
        ppuVar11 = ppuStack_ce;
LAB_3ab8_24db:
        ppuStack_ce = ppuVar11;
        if (param_1 != (undefined2 **)0x6) {
          return ppuStack_1aa;
        }
LAB_3ab8_22b7:
        do {
          do {
            *(undefined2 *)0xc2c = 1;
            *(undefined2 *)0xc20 = 1;
            local_8 = (undefined2 **)&uStack_24e;
            local_a = ppuStack_ce;
            ppuStack_c = (undefined2 **)0x5a11;
            ppuStack_e = (undefined2 **)0x3;
            local_14._2_2_ = 0xce5f;
            ppuStack_10 = ppuVar19;
            iStack_2c = FUN_3ab8_0adc();
            *(undefined2 *)0xc2c = 0;
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) {
              return (undefined2 **)0x1;
            }
            if ((iStack_2c == -1) && (0 < (int)ppuStack_ce)) {
              local_8 = (undefined2 **)0xce88;
              func_0x0000daa6();
              uStack_240 = *(undefined2 *)0x14c;
              uStack_23e = *(undefined2 *)0x14e;
              local_8 = (undefined2 **)0x885;
              local_a = (undefined2 **)0xce9f;
              FUN_13bf_0327();
              ppuStack_ce = (undefined2 **)0x0;
              ppuVar19 = (undefined2 **)0x885;
              func_0x0000abfa();
            }
            if (iStack_2c == 0x14) {
              return (undefined2 **)0x0;
            }
          } while (iStack_2c != 10);
          uStack_122 = uStack_23c;
          uStack_120 = uStack_23a;
          ppuStack_1a8 = ppuStack_24a;
          uStack_1a6 = uStack_248;
          while( true ) {
            do {
              local_8 = (undefined2 **)&uStack_24e;
              *(undefined2 *)0xc20 = 1;
              local_a = (undefined2 **)0x1;
              ppuStack_c = (undefined2 **)0x5a18;
              ppuStack_e = (undefined2 **)0x3;
              local_14._2_2_ = 0xcf00;
              ppuStack_10 = ppuVar19;
              iStack_2c = FUN_3ab8_0adc();
              *(undefined2 *)0xc20 = 0;
              if (*(int *)0x158 != 0) {
                return (undefined2 **)0x1;
              }
              if (iStack_2c == -1) goto LAB_3ab8_22b7;
            } while (iStack_2c != 10);
            ppuStack_1ea = ppuStack_24a;
            uStack_1e8 = uStack_248;
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b9d();
            func_0x00029d78();
            func_0x000299d1();
            func_0x000297e6();
            func_0x00029d78();
            ppuStack_c = (undefined2 **)0x22b2;
            ppuStack_e = (undefined2 **)0xcf74;
            func_0x000299d1();
            ppuStack_c = (undefined2 **)0x22b2;
            ppuStack_e = (undefined2 **)0xcf7d;
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0x22b2;
            ppuStack_e = (undefined2 **)0xcf86;
            func_0x0002996b();
            ppuStack_c = (undefined2 **)0x22b2;
            ppuStack_e = (undefined2 **)0xcf8b;
            func_0x00029d78();
            local_14._0_2_ = 0x22b2;
            local_16 = (undefined2 **)0xcf95;
            func_0x000299d1();
            local_14._0_2_ = 0x22b2;
            local_16 = (undefined2 **)0xcf9e;
            func_0x000297e6();
            local_14._0_2_ = 0x22b2;
            local_16 = (undefined2 **)0xcfa3;
            func_0x00029d78();
            ppuStack_1e = (undefined2 **)0xcfad;
            func_0x000299d1();
            ppuStack_1e = (undefined2 **)0xcfb6;
            func_0x000297e6();
            ppuStack_1e = (undefined2 **)0xcfbb;
            func_0x00029d78();
            local_24 = 0x22b2;
            local_26 = 0xcfc5;
            func_0x000299d1();
            local_24 = 0x22b2;
            ppuVar19 = (undefined2 **)0x1bb4;
            local_26 = 0xcfca;
            iVar14 = FUN_1def_043a();
            if (iVar14 == 0) break;
            local_8e._0_2_ = (undefined2 **)0x0;
            local_8 = (undefined2 **)local_8e;
            local_a = (undefined2 **)(undefined2 *)local_82;
            ppuStack_c = local_84;
            ppuStack_e = local_86;
            ppuStack_10 = (undefined2 **)local_8a._2_2_;
            local_14._2_2_ = (undefined2 *)local_82;
            local_14._0_2_ = local_84;
            local_16 = local_86;
            local_18 = local_8a._2_2_;
            FUN_3ab8_0238();
            ppuStack_ce = (undefined2 **)0x0;
            local_8 = local_86;
            local_a = (undefined2 **)local_8a._2_2_;
            ppuStack_c = apuStack_222;
            ppuStack_e = (undefined2 **)auStack_1da;
            ppuStack_10 = (undefined2 **)local_8e._0_2_;
            local_14._2_2_ = 0x1bb4;
            local_14._0_2_ = 0xd03e;
            ppuStack_1aa = (undefined2 **)FUN_3ab8_0853();
            if (*(int *)0x158 != 0) {
              return (undefined2 **)0xfba9;
            }
            ppuVar11 = ppuStack_1aa;
            if (ppuStack_1aa != (undefined2 **)0xffff) goto LAB_3ab8_24db;
          }
          local_8 = (undefined2 **)0xcfd9;
          FUN_3ab8_0000();
        } while( true );
      }
    }
LAB_3ab8_1eb7:
    do {
      *(undefined2 *)0xc2c = 1;
      local_8 = (undefined2 **)&uStack_24e;
      local_a = ppuStack_ce;
      ppuStack_c = (undefined2 **)0x59ff;
      ppuStack_e = (undefined2 **)0x2;
      local_14._2_2_ = 0xca5c;
      ppuStack_10 = ppuVar19;
      iStack_2c = FUN_3ab8_0adc();
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) {
        return (undefined2 **)0x1;
      }
      if ((iStack_2c == -1) && (0 < (int)ppuStack_ce)) {
        local_8 = (undefined2 **)0xca89;
        func_0x0000daa6();
        uStack_240 = *(undefined2 *)0x14c;
        uStack_23e = *(undefined2 *)0x14e;
        local_8 = (undefined2 **)0x885;
        local_a = (undefined2 **)0xcaa0;
        FUN_13bf_0327();
        ppuStack_ce = (undefined2 **)0x0;
        ppuVar19 = (undefined2 **)0x885;
        func_0x0000abfa();
      }
      if (iStack_2c == 0x14) {
        return (undefined2 **)0x0;
      }
    } while (iStack_2c != 10);
    uStack_246 = uStack_23c;
    uStack_244 = uStack_23a;
    goto LAB_3ab8_1f5f;
  }
  *(undefined2 *)0xc22 = 1;
  local_a = (undefined2 **)0xcb5b;
  FUN_1000_0599();
  goto switchD_3000_ddee_caseD_4;
switchD_3000_ddee_caseD_3:
  uVar20 = 0;
  *(uint *)(&stack0x5b20 + (int)unaff_SI) = *(uint *)(&stack0x5b20 + (int)unaff_SI) & (uint)unaff_SI
  ;
  local_8 = (undefined2 **)0xe59f;
  FUN_21f2_2d26();
  local_8 = (undefined2 **)0xe5af;
  FUN_21f2_2d26();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  FUN_28b3_1181();
  if ((bool)uVar20) {
    uVar20 = 0;
    local_8 = (undefined2 **)0xe5e8;
    FUN_21f2_3454();
  }
  else {
    func_0x000297e6();
    func_0x00029d78();
    local_a = (undefined2 **)0x22b2;
    ppuStack_c = (undefined2 **)0xe604;
    func_0x000299d1();
    local_a = (undefined2 **)0x5b37;
    ppuStack_c = &local_56;
    ppuStack_e = (undefined2 **)0x22b2;
    ppuStack_10 = (undefined2 **)0xe611;
    FUN_21f2_3454();
    uVar20 = (undefined1 *)0xfff3 < &ppuStack_c;
  }
  local_8 = (undefined2 **)0xe622;
  FUN_21f2_2d26();
  local_8 = (undefined2 **)0xe632;
  FUN_21f2_2d26();
  local_8 = (undefined2 **)0xe642;
  FUN_21f2_2d26();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  FUN_28b3_1181();
  if (!(bool)uVar20) {
    if (*(int *)0x1092 % 1000 < 1) {
      *(undefined2 *)0x1092 = 0;
    }
    local_7e = *(int *)0x1092 / 1000;
    if (0 < (int)local_7e) {
      *(undefined2 *)0xc22 = 1;
      local_8 = (undefined2 **)0x22b2;
      local_a = (undefined2 **)0xe699;
      FUN_21f2_3454();
      local_8 = (undefined2 **)0x41;
      local_a = &local_56;
      ppuStack_c = (undefined2 **)0x22b2;
      ppuStack_e = (undefined2 **)0xe6b5;
      FUN_1000_02b5();
    }
    local_8 = (undefined2 **)0xe6c7;
    FUN_21f2_2d26();
    if (*(int *)0x1092 < 1) {
      local_8 = (undefined2 **)0xe6dd;
      FUN_21f2_3454();
    }
    else {
      local_8 = (undefined2 **)0x22b2;
      local_a = (undefined2 **)0xe6f8;
      FUN_21f2_3454();
    }
    local_8 = (undefined2 **)0xe709;
    FUN_21f2_2d26();
    local_8 = (undefined2 **)0xe719;
    FUN_21f2_2d26();
  }
  local_8 = (undefined2 **)0xe729;
  FUN_1def_07a4();
  *(undefined2 *)0xc20 = 1;
  local_8 = local_2f8;
  local_a = (undefined2 **)0x270f;
  ppuStack_c = (undefined2 **)0x1bb4;
  ppuVar19 = (undefined2 **)0x1bb4;
  ppuStack_e = (undefined2 **)0xe74e;
  local_33a = FUN_1def_0904();
  *(undefined2 *)0xc20 = 0;
  if (*(int *)0x158 != 0) {
    ppuVar19 = (undefined2 **)FUN_3ab8_4d6f();
    return ppuVar19;
  }
  if (local_33a == -1) {
    local_90 = 0;
    ppuVar19 = (undefined2 **)0x885;
    func_0x0000c3ca();
    local_8 = (undefined2 **)*(int *)0xa388;
    local_a = (undefined2 **)*(int *)0xa38e;
    ppuStack_c = (undefined2 **)*(int *)0xa38c;
    ppuStack_e = (undefined2 **)*(undefined2 *)0xa38a;
    ppuStack_10 = (undefined2 **)*(int *)0xa388;
    local_14._2_2_ = 0;
    local_14._0_2_ = 0x7aa;
    local_16 = (undefined2 **)0xfffe;
    local_18 = -9999;
    pcVar9 = (code *)swi(0x3f);
    iVar14 = (*pcVar9)();
    if (iVar14 != -1) {
      if (*(int *)0x158 != 0) {
        ppuVar19 = (undefined2 **)FUN_3ab8_4d6f();
        return ppuVar19;
      }
      goto LAB_3ab8_3c3d;
    }
LAB_3ab8_397d:
    uStack_6e = *(undefined2 *)0x150;
    func_0x0000c3ca();
    local_8 = (undefined2 **)*(undefined2 *)0xa388;
    local_a = (undefined2 **)*(int *)0xa38e;
    ppuStack_c = (undefined2 **)*(int *)0xa38c;
    ppuStack_e = (undefined2 **)*(undefined2 *)0xa38a;
    ppuStack_10 = (undefined2 **)*(int *)0xa388;
    local_14._2_2_ = 0;
    local_14._0_2_ = 0x7aa;
    local_16 = (undefined2 **)0xfffe;
    local_18 = 0;
    pcVar9 = (code *)swi(0x3f);
    (*pcVar9)();
    if (*(int *)0x158 != 0) {
      ppuVar19 = (undefined2 **)FUN_3ab8_4d6f();
      return ppuVar19;
    }
  }
  else {
LAB_3ab8_3c3d:
    if (local_33a == 1) {
      local_90 = 0;
      pcVar9 = (code *)swi(0x3f);
      (*pcVar9)();
    }
    if (local_33a == 2) {
      local_90 = 0;
      pcVar9 = (code *)swi(0x3f);
      local_6c = (undefined2 **)(*pcVar9)();
    }
    if (*(int *)0x158 != 0) {
      ppuVar19 = (undefined2 **)FUN_3ab8_4d6f();
      return ppuVar19;
    }
    do {
      if (local_33a != 3) goto LAB_3ab8_3d17;
      local_90 = 0;
      local_342 = *(int *)0x1092 % 1000;
      FUN_28b3_0d8b();
      func_0x00029983();
      local_342 = *(int *)0x1092 / 1000;
      local_7e = local_342;
      FUN_28b3_0d8b();
      func_0x00029983();
      func_0x0001bb4e();
      func_0x00012276();
      func_0x00012276();
      local_8 = (undefined2 **)&local_338;
      local_a = (undefined2 **)&local_8a;
      ppuStack_c = &local_82;
      ppuStack_e = (undefined2 **)0x11f2;
      ppuVar19 = (undefined2 **)0xad;
      ppuStack_10 = (undefined2 **)0xe87f;
      local_6c = (undefined2 **)func_0x000021a4();
      if (*(int *)0x158 != 0) {
        ppuVar19 = (undefined2 **)FUN_3ab8_4d6f();
        return ppuVar19;
      }
      if (local_6c == (undefined2 **)0xffff) goto LAB_3ab8_3d17;
      uVar20 = local_6c < (undefined2 **)0x63;
      uVar23 = local_6c == (undefined2 **)0x63;
    } while ((bool)uVar23);
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_100d();
    FUN_28b3_1181();
    if ((bool)uVar20) {
      local_8a._0_2_ = (undefined2 *)*(int *)0xa360;
      local_8a._2_2_ = *(int *)0xa362;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar20 || (bool)uVar23) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar20) goto LAB_3ab8_3e6c;
      func_0x000297e6();
      func_0x00029d78();
      uVar18 = FUN_28b3_0f51();
      *(undefined2 *)0x1092 = uVar18;
    }
    else {
LAB_3ab8_3e6c:
      *(undefined2 *)0x1092 = 0;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    uVar21 = uVar20;
    if ((bool)uVar20 || (bool)uVar23) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      uVar21 = 0;
      if ((bool)uVar20) {
        func_0x000297e6();
        func_0x00029d78();
        iVar14 = FUN_28b3_0f51();
        local_7e = iVar14 * 1000;
        puVar1 = (uint *)0x1092;
        uVar21 = CARRY2(*puVar1,local_7e);
        *puVar1 = *puVar1 + local_7e;
        uVar23 = *puVar1 == 0;
      }
    }
    local_2fa = 0;
    func_0x000297e6();
    func_0x000297e6();
    ppuVar19 = (undefined2 **)0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar21 && !(bool)uVar23) {
      local_2fa = 1;
    }
LAB_3ab8_3d17:
    if (local_90 != 0) {
      local_a = (undefined2 **)0xe8b4;
      local_8 = ppuVar19;
      iVar14 = func_0x00015409();
      if (iVar14 != 0) {
        if (((*(char *)0x7e != '\0') && (*(char *)0xd14 != '\x04')) && (1 < *(byte *)0x84)) {
          func_0x0000c3ca();
          local_8 = (undefined2 **)0x885;
          local_a = (undefined2 **)0xe8ea;
          func_0x0001263c();
          local_8 = (undefined2 **)0x1;
          pcVar9 = (code *)swi(0x3f);
          (*pcVar9)();
          *(undefined1 *)0xd14 = 2;
        }
        func_0x0000c3ca();
        *(undefined2 *)0xbc0 = 1;
        func_0x0000daa6();
        local_300 = (undefined2 *)local_338;
        local_2fe = local_338._2_2_;
        local_316 = local_33e;
        local_314 = local_33c;
        *(undefined2 *)0xbc2 = 0;
        local_308 = 0;
        local_8e._0_2_ = *(int *)0xa360;
        local_8e._2_2_ = *(int *)0xa362;
        local_86 = (undefined2 **)local_8e._0_2_;
        local_84 = (undefined2 **)local_8e._2_2_;
        for (local_2fc = (undefined2 **)0x1; (int)local_2fc <= *(int *)0x150;
            local_2fc = (undefined2 **)((int)local_2fc + 1)) {
          uVar25 = func_0x00000398();
          unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
          if (*(byte *)((int)uVar25 + 0x14) < 0x5a) {
            uVar25 = func_0x00000398();
            unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
            if ((*(byte *)((int)uVar25 + 0x16) & 2) != 0) {
              ppuVar26 = (undefined2 **)func_0x00000398();
              unaff_SI = (undefined2 **)ppuVar26;
              puVar16 = &local_330;
              for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                puVar6 = puVar16;
                puVar16 = (undefined4 *)((int)puVar16 + 2);
                ppuVar4 = unaff_SI;
                unaff_SI = (undefined2 **)((int)unaff_SI + 2);
                *(undefined2 *)puVar6 = *(undefined2 *)ppuVar4;
              }
              local_308 = local_308 + 1;
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029bb5();
              func_0x00029983();
              unaff_ES = unaff_SS;
            }
          }
        }
        if (local_308 != 0) {
          func_0x00029834();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_117c();
          func_0x00029d78();
          local_a = (undefined2 **)0x22b2;
          ppuStack_c = (undefined2 **)0xeb58;
          func_0x000299d1();
          local_a = (undefined2 **)0x22b2;
          ppuStack_c = (undefined2 **)0xeb5d;
          FUN_28b3_1582();
          uVar20 = (undefined1 *)0xfff7 < &local_8;
          func_0x00029834();
          func_0x0002996b();
          func_0x00029d78();
          FUN_28b3_1181();
          if (!(bool)uVar20) {
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029983();
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar20) {
              local_6c = (undefined2 **)0x0;
              local_5a = *(undefined2 *)0xa3dc;
              local_58 = *(undefined2 *)0xa3de;
              for (local_2fc = (undefined2 **)0x1; (int)local_2fc <= *(int *)0x150;
                  local_2fc = (undefined2 **)((int)local_2fc + 1)) {
                uVar25 = func_0x00000398();
                if (*(byte *)((int)uVar25 + 0x14) < 0x5a) {
                  uVar25 = func_0x00000398();
                  uVar20 = 0;
                  uVar23 = (*(byte *)((int)uVar25 + 0x16) & 2) == 0;
                  if (!(bool)uVar23) {
                    ppuVar26 = (undefined2 **)func_0x00000398();
                    unaff_SI = (undefined2 **)ppuVar26;
                    puVar16 = &local_330;
                    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                      puVar6 = puVar16;
                      puVar16 = (undefined4 *)((int)puVar16 + 2);
                      ppuVar4 = unaff_SI;
                      unaff_SI = (undefined2 **)((int)unaff_SI + 2);
                      *(undefined2 *)puVar6 = *(undefined2 *)ppuVar4;
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x000297e6();
                    func_0x00029b6d();
                    FUN_28b3_1163();
                    func_0x0002996b();
                    FUN_28b3_1181();
                    if (!(bool)uVar20 && !(bool)uVar23) {
                      func_0x000297e6();
                      func_0x00029983();
                      local_6c = local_2fc;
                    }
                  }
                }
              }
              piVar27 = (int *)func_0x00000398();
              local_86 = (undefined2 **)*piVar27;
              local_84 = (undefined2 **)((int *)piVar27)[1];
              uVar25 = func_0x00000398();
              unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
              local_8e._0_2_ = *(int *)((int)uVar25 + 4);
              local_8e._2_2_ = *(int *)((int)uVar25 + 6);
              if (*(int *)0xcb6 == 0) {
                local_316 = (undefined2 **)local_8e._0_2_;
                local_314 = (undefined2 **)local_8e._2_2_;
              }
              for (local_2fc = (undefined2 **)0x1; (int)local_2fc <= *(int *)0x150;
                  local_2fc = (undefined2 **)((int)local_2fc + 1)) {
                uVar25 = func_0x00000398();
                unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
                if (*(byte *)((int)uVar25 + 0x14) < 0x5a) {
                  uVar25 = func_0x00000398();
                  unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
                  if ((*(byte *)((int)uVar25 + 0x16) & 2) != 0) {
                    puVar24 = (undefined2 *)func_0x00000398();
                    puVar13 = (undefined2 *)puVar24;
                    puVar16 = &local_330;
                    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                      puVar6 = puVar16;
                      puVar16 = (undefined4 *)((int)puVar16 + 2);
                      puVar3 = puVar13;
                      puVar13 = puVar13 + 1;
                      *(undefined2 *)puVar6 = *puVar3;
                    }
                    piVar17 = &local_18;
                    unaff_SI = (undefined2 **)&local_330;
                    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                      puVar24 = piVar17;
                      piVar17 = piVar17 + 1;
                      ppuVar26 = unaff_SI;
                      unaff_SI = (undefined2 **)((int)unaff_SI + 2);
                      *puVar24 = *(undefined2 *)ppuVar26;
                    }
                    ppuStack_1e = (undefined2 **)0xf414;
                    func_0x00019593();
                    func_0x000297e6();
                    func_0x00029d78();
                    local_a = (undefined2 **)0x22b2;
                    ppuStack_c = (undefined2 **)0xf42f;
                    func_0x000299d1();
                    local_a = (undefined2 **)0x22b2;
                    ppuStack_c = (undefined2 **)0xf438;
                    func_0x000297e6();
                    local_a = (undefined2 **)0x22b2;
                    ppuStack_c = (undefined2 **)0xf43d;
                    func_0x00029d78();
                    local_14._2_2_ = 0x22b2;
                    local_14._0_2_ = 0xf447;
                    func_0x000299d1();
                    local_14._2_2_ = 0x22b2;
                    local_14._0_2_ = 0xf450;
                    func_0x000297e6();
                    local_14._2_2_ = 0x22b2;
                    local_14._0_2_ = 0xf455;
                    func_0x00029d78();
                    func_0x000299d1();
                    func_0x000297e6();
                    func_0x00029d78();
                    local_22._0_2_ = (undefined2 **)0x22b2;
                    local_24 = 0xf477;
                    func_0x000299d1();
                    local_22._0_2_ = (undefined2 **)0x22b2;
                    local_24 = 0xf47c;
                    iVar14 = FUN_1def_043a();
                    unaff_ES = unaff_SS;
                    if (iVar14 != 0) {
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029b6d();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029b6d();
                      FUN_28b3_1163();
                      func_0x00029983();
                      local_330._0_2_ = local_300;
                      local_330._2_2_ = local_2fe;
                      func_0x000297e6();
                      func_0x00029bb5();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029bb5();
                      func_0x0002996b();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029983();
                      local_76a = (undefined2 *)func_0x00000398();
                      unaff_ES = (undefined2)((ulong)local_76a >> 0x10);
                      puVar13 = (undefined2 *)local_76a;
                      unaff_SI = (undefined2 **)&local_330;
                      for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                        puVar24 = puVar13;
                        puVar13 = puVar13 + 1;
                        ppuVar26 = unaff_SI;
                        unaff_SI = (undefined2 **)((int)unaff_SI + 2);
                        *puVar24 = *(undefined2 *)ppuVar26;
                      }
                    }
                  }
                }
              }
            }
            else {
              local_72c = *(int *)0x1092 % 1000 << 1;
              local_7e = *(int *)0x1092 / 1000;
              local_536[0] = '\0';
              local_72a[0] = 0;
              local_7a = 1;
              FUN_10ad_1871();
LAB_3ab8_4080:
              local_6c = (undefined2 **)0x0;
              local_5a = *(undefined2 *)0xa3dc;
              local_58 = *(undefined2 *)0xa3de;
              for (local_2fc = (undefined2 **)0x1; (int)local_2fc <= *(int *)0x150;
                  local_2fc = (undefined2 **)((int)local_2fc + 1)) {
                uVar25 = func_0x00000398();
                unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
                if (*(byte *)((int)uVar25 + 0x14) < 0x5a) {
                  uVar25 = func_0x00000398();
                  unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
                  if ((*(byte *)((int)uVar25 + 0x16) & 2) != 0) {
                    uVar25 = func_0x00000398();
                    unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
                    uVar20 = 0;
                    uVar23 = (*(byte *)((int)uVar25 + 0x16) & 1) == 0;
                    if ((bool)uVar23) {
                      ppuVar26 = (undefined2 **)func_0x00000398();
                      unaff_SI = (undefined2 **)ppuVar26;
                      puVar16 = &local_330;
                      for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                        puVar6 = puVar16;
                        puVar16 = (undefined4 *)((int)puVar16 + 2);
                        ppuVar4 = unaff_SI;
                        unaff_SI = (undefined2 **)((int)unaff_SI + 2);
                        *(undefined2 *)puVar6 = *(undefined2 *)ppuVar4;
                      }
                      func_0x000297e6();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x000297e6();
                      func_0x00029b6d();
                      FUN_28b3_1163();
                      func_0x0002996b();
                      FUN_28b3_1181();
                      unaff_ES = unaff_SS;
                      if (!(bool)uVar20 && !(bool)uVar23) {
                        func_0x000297e6();
                        func_0x00029983();
                        local_6c = local_2fc;
                      }
                    }
                  }
                }
              }
              if (0 < (int)local_6c) {
                ppuVar26 = (undefined2 **)func_0x00000398();
                unaff_SI = (undefined2 **)ppuVar26;
                ppuVar19 = &local_744;
                for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                  ppuVar7 = ppuVar19;
                  ppuVar19 = (undefined2 **)((int)ppuVar19 + 2);
                  ppuVar4 = unaff_SI;
                  unaff_SI = (undefined2 **)((int)unaff_SI + 2);
                  *(undefined2 *)ppuVar7 = *(undefined2 *)ppuVar4;
                }
                local_8 = (undefined2 **)0x0;
                local_a = (undefined2 **)0xed17;
                FUN_1885_0344();
                if ((((local_7a == 0) && ((0 < (int)local_7e || (local_2fa != 0)))) &&
                    (0 < (int)local_72c)) && (uVar12 = func_0x00024ce4(), 1 < uVar12)) {
                  for (local_2fc = (undefined2 **)0x0;
                      (local_1cc[(int)local_2fc] == local_312 &&
                      ((local_1cc + 1)[(int)local_2fc] == local_311));
                      local_2fc = (undefined2 **)((int)local_2fc + 2)) {
                  }
                  unaff_SI = local_2fc;
                  if ((local_1cc[(int)local_2fc] == '^') && ((local_1cc + 1)[(int)local_2fc] == 'm')
                     ) {
                    local_2fc = (undefined2 **)0x0;
                    unaff_SI = local_2fc;
                  }
                }
                local_8 = (undefined2 **)0xed96;
                FUN_21f2_2d26();
                local_7a = 0;
                local_340 = func_0x00024ce4();
                func_0x000190c7();
                unaff_ES = unaff_SS;
                if (local_72c == 0) {
                  func_0x000297e6();
                  func_0x00029bb5();
                  func_0x00029983();
                  local_740 = local_316;
                  local_73e = local_314;
                  local_738 = local_316;
                  local_736 = local_314;
                  puVar13 = (undefined2 *)&stack0xffe6;
                  unaff_SI = &local_744;
                  for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                    puVar24 = puVar13;
                    puVar13 = puVar13 + 1;
                    ppuVar26 = unaff_SI;
                    unaff_SI = (undefined2 **)((int)unaff_SI + 2);
                    *puVar24 = *(undefined2 *)ppuVar26;
                  }
                  ppuStack_1e = (undefined2 **)0xee0b;
                  FUN_3ab8_3743();
                  local_536[0] = '\0';
                  uVar25 = func_0x00000398();
                  pbVar2 = (byte *)((int)uVar25 + 0x16);
                  *pbVar2 = *pbVar2 | 1;
                  uVar25 = func_0x00000398();
                  unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
                  pbVar2 = (byte *)((int)uVar25 + 0x16);
                  *pbVar2 = *pbVar2 | 2;
                  func_0x000297e6();
                  func_0x00029b85();
                  func_0x00029b55();
                  func_0x00029983();
                }
                else {
                  while( true ) {
                    local_340 = func_0x00024ce4();
                    local_8 = (undefined2 **)0x22b2;
                    local_a = (undefined2 **)0xf192;
                    iVar14 = FUN_1885_0406();
                    bVar22 = iVar14 == -1;
                    if ((!bVar22) && ((int)local_340 <= (int)local_72c)) break;
                    local_8 = (undefined2 **)0xf1c0;
                    FUN_21f2_3454();
                    local_8 = (undefined2 **)0xf1d0;
                    FUN_21f2_3454();
                    local_8 = (undefined2 **)0xf1e1;
                    FUN_21f2_3454();
                    local_342 = local_72c;
                    if ((int)local_340 < (int)local_72c) {
                      local_342 = local_340;
                    }
                    for (local_762 = 0; (int)local_762 < (int)local_342; local_762 = local_762 + 1)
                    {
                      local_8 = (undefined2 **)0xee76;
                      iVar14 = FUN_3ab8_38d9();
                      if (iVar14 != 0) {
                        local_7a = 1;
                        local_342 = local_762;
                        break;
                      }
                    }
                    local_8 = (undefined2 **)0x22b2;
                    for (local_762 = 0; (int)local_762 < (int)local_342; local_762 = local_762 + 1)
                    {
                      local_a = (undefined2 **)0xee9e;
                      iVar14 = FUN_1885_0406();
                      if (0 < iVar14) {
                        local_342 = local_342 + 2;
                      }
                      local_8 = (undefined2 **)0x18b3;
                    }
                    local_8 = (undefined2 **)0xeec6;
                    iVar14 = func_0x0002aa38();
                    if (iVar14 == 2) {
                      local_342 = local_342 - 1;
                    }
                    local_318 = 0;
                    if (((int)local_72c < 0x9f) &&
                       (((local_536[local_342] == local_766 &&
                         (local_536[local_342 + 1] == local_765)) ||
                        (((char)local_76a == local_536[local_342] &&
                         (local_76a._1_1_ == local_536[local_342 + 1])))))) {
                      local_342 = local_342 + 2;
                      local_318 = 1;
                    }
                    local_8 = (undefined2 **)0xef39;
                    iVar14 = FUN_3ab8_38d9();
                    if (iVar14 != 0) {
                      local_342 = local_342 + 2;
                    }
                    local_8 = (undefined2 **)0xef53;
                    iVar14 = FUN_3ab8_38d9();
                    if (iVar14 != 0) {
                      local_342 = local_342 + 1;
                    }
                    local_76e = 0;
                    for (local_762 = local_342; (int)local_762 <= (int)local_340;
                        local_762 = local_762 + 1) {
                      local_536[local_76e] = local_536[local_762];
                      local_76e = local_76e + 1;
                    }
                    local_536[local_76e] = '\0';
                    local_72a[local_342] = 0;
                    func_0x000297e6();
                    func_0x00029bb5();
                    func_0x00029983();
                    local_740 = local_316;
                    local_73e = local_314;
                    local_738 = local_316;
                    local_736 = local_314;
                    puVar13 = (undefined2 *)&stack0xffe6;
                    unaff_SI = &local_744;
                    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                      puVar24 = puVar13;
                      puVar13 = puVar13 + 1;
                      ppuVar26 = unaff_SI;
                      unaff_SI = (undefined2 **)((int)unaff_SI + 2);
                      *puVar24 = *(undefined2 *)ppuVar26;
                    }
                    ppuStack_1e = (undefined2 **)0xefed;
                    FUN_3ab8_3743();
                    uVar25 = func_0x00000398();
                    pbVar2 = (byte *)((int)uVar25 + 0x16);
                    *pbVar2 = *pbVar2 | 1;
                    uVar25 = func_0x00000398();
                    unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
                    pbVar2 = (byte *)((int)uVar25 + 0x16);
                    *pbVar2 = *pbVar2 | 2;
                    func_0x000297e6();
                    func_0x00029b85();
                    func_0x00029b55();
                    func_0x00029983();
                    local_342 = local_72c;
                    local_340 = func_0x00024ce4();
                    if ((((0 < (int)local_7e) && (0 < (int)local_342)) && (0 < (int)local_340)) &&
                       (local_7a == 0)) {
                      local_72a[0] = 0;
                      for (local_306 = 1; local_306 <= (int)local_7e; local_306 = local_306 + 1) {
                        local_8 = (undefined2 **)0xf085;
                        FUN_21f2_2d26();
                      }
                      local_8 = (undefined2 **)0xf0a3;
                      FUN_21f2_2d26();
                      local_8 = (undefined2 **)0xf0b4;
                      func_0x00024c86();
                      local_8 = (undefined2 **)0x22b2;
                      local_a = (undefined2 **)0xf0c7;
                      iVar14 = FUN_1885_0406();
                      if (iVar14 == -1) {
                        local_342 = local_342 + 2;
                      }
                      local_8 = (undefined2 **)0x18b3;
                      local_a = (undefined2 **)0xf0e4;
                      iVar14 = FUN_1885_0406();
                      if (iVar14 == -1) {
                        local_342 = local_342 + 1;
                      }
                    }
                    if ((((int)local_340 < 1) && (local_318 != 0)) && (!bVar22)) {
                      local_536[0] = '\0';
                      for (local_306 = 1; local_306 <= (int)local_7e; local_306 = local_306 + 1) {
                        local_8 = (undefined2 **)0xf11f;
                        FUN_21f2_2d26();
                      }
                    }
                    local_340 = func_0x00024ce4();
                    local_318 = 0;
                    local_7a = (uint)bVar22;
                    if (((int)local_340 < 1) || (((int)local_340 < (int)local_342 && (!bVar22))))
                    break;
                  }
                }
                goto LAB_3ab8_4080;
              }
              if ((0 < (int)local_72c) && (iVar14 = func_0x00024ce4(), iVar14 != 0)) {
                func_0x000297e6();
                func_0x00029bb5();
                func_0x00029983();
                local_740 = local_316;
                local_73e = local_314;
                local_738 = local_316;
                local_736 = local_314;
                puVar13 = (undefined2 *)&stack0xffe6;
                unaff_SI = &local_744;
                for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                  puVar24 = puVar13;
                  puVar13 = puVar13 + 1;
                  ppuVar26 = unaff_SI;
                  unaff_SI = (undefined2 **)((int)unaff_SI + 2);
                  *puVar24 = *(undefined2 *)ppuVar26;
                }
                ppuStack_1e = (undefined2 **)0xf267;
                FUN_3ab8_3743();
                uVar25 = func_0x00000398();
                pbVar2 = (byte *)((int)uVar25 + 0x16);
                *pbVar2 = *pbVar2 | 1;
                uVar25 = func_0x00000398();
                unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
                pbVar2 = (byte *)((int)uVar25 + 0x16);
                *pbVar2 = *pbVar2 | 2;
              }
              FUN_10ad_1871();
            }
            for (local_2fc = (undefined2 **)0x1; (int)local_2fc <= *(int *)0x150;
                local_2fc = (undefined2 **)((int)local_2fc + 1)) {
              uVar25 = func_0x00000398();
              unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
              if (*(byte *)((int)uVar25 + 0x14) < 0x5a) {
                uVar25 = func_0x00000398();
                unaff_ES = (undefined2)((ulong)uVar25 >> 0x10);
                if ((*(byte *)((int)uVar25 + 0x16) & 2) != 0) {
                  puVar24 = (undefined2 *)func_0x00000398();
                  puVar13 = (undefined2 *)puVar24;
                  puVar16 = &local_330;
                  for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                    puVar6 = puVar16;
                    puVar16 = (undefined4 *)((int)puVar16 + 2);
                    puVar3 = puVar13;
                    puVar13 = puVar13 + 1;
                    *(undefined2 *)puVar6 = *puVar3;
                  }
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  func_0x000297e6();
                  func_0x00029b85();
                  func_0x00029bb5();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  if (*(int *)0x1096 == 1) {
                    func_0x000297e6();
                    func_0x00029d78();
                    func_0x00029c2c();
                    func_0x000297e6();
                    func_0x00029d78();
                    FUN_28b3_117c();
                    func_0x00029983();
                  }
                  uVar20 = *(uint *)0x1096 < 2;
                  if (*(uint *)0x1096 == 2) {
                    func_0x000297e6();
                    func_0x00029b55();
                    func_0x00029983();
                  }
                  func_0x000297e6();
                  func_0x0002996b();
                  func_0x00029bb5();
                  func_0x00029983();
                  func_0x00029834();
                  func_0x000297e6();
                  func_0x00029d78();
                  FUN_28b3_1181();
                  if (!(bool)uVar20) {
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b85();
                    func_0x00029bb5();
                    func_0x00029983();
                    if ((bStack_31a & 0x20) == 0) {
                      ppuVar19 = (undefined2 **)FUN_3ab8_49e1();
                      return ppuVar19;
                    }
                    FUN_28b3_0d8b();
                    func_0x00029983();
                    if (*(int *)0x1098 == 1) {
                      func_0x000297e6();
                      func_0x00029d78();
                      func_0x00029b85();
                      func_0x00029c2c();
                      func_0x00029bb5();
                      func_0x00029983();
                    }
                    if (*(int *)0x1098 == 2) {
                      func_0x000297e6();
                      func_0x00029d78();
                      func_0x00029b85();
                      func_0x00029c2c();
                      func_0x00029bb5();
                      func_0x00029983();
                    }
                    func_0x000297e6();
                    func_0x0002996b();
                    func_0x00029bb5();
                    func_0x00029983();
                  }
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029983();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029983();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029983();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029983();
                  local_8 = (undefined2 **)0x22b2;
                  local_a = (undefined2 **)0xf686;
                  FUN_1def_0338();
                  local_8 = (undefined2 **)0x1bb4;
                  local_a = (undefined2 **)0xf69b;
                  FUN_1def_0338();
                  func_0x000297e6();
                  func_0x00029bb5();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029bb5();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029bb5();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029bb5();
                  func_0x00029983();
                  piVar17 = &local_18;
                  puVar16 = &local_330;
                  for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                    puVar24 = piVar17;
                    piVar17 = piVar17 + 1;
                    puVar6 = puVar16;
                    puVar16 = (undefined4 *)((int)puVar16 + 2);
                    *puVar24 = *(undefined2 *)puVar6;
                  }
                  ppuStack_1e = (undefined2 **)0xf723;
                  func_0x00019593();
                  local_744 = (undefined2 *)func_0x00000398();
                  unaff_ES = (undefined2)((ulong)local_744 >> 0x10);
                  puVar13 = (undefined2 *)local_744;
                  unaff_SI = (undefined2 **)&local_330;
                  for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                    puVar24 = puVar13;
                    puVar13 = puVar13 + 1;
                    ppuVar26 = unaff_SI;
                    unaff_SI = (undefined2 **)((int)unaff_SI + 2);
                    *puVar24 = *(undefined2 *)ppuVar26;
                  }
                  uStack_70 = 1;
                  *(undefined1 *)0xd14 = 2;
                }
              }
            }
          }
        }
        goto LAB_3ab8_397d;
      }
    }
  }
  local_8 = (undefined2 **)0xe555;
  func_0x00024c86();
  local_8 = (undefined2 **)0xe565;
  FUN_21f2_2d26();
  pcVar9 = (code *)swi(0x3f);
  (*pcVar9)();
  FUN_21f2_2d26();
  local_8 = (undefined2 **)0xe58f;
  FUN_21f2_2d26();
  goto switchD_3000_ddee_caseD_3;
}



/* 3ab8:3295  FUN_3ab8_3295  492 bytes, 1 callers */

void __cdecl16far FUN_3ab8_3295(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 in_ZF;
  undefined2 local_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 local_a;
  
  FUN_21f2_0ebc();
  local_a = 0xde2a;
  func_0x000297e6();
  local_a = 0xde32;
  FUN_28b3_100d();
  local_a = 0xde37;
  func_0x00029d78();
  local_a = 0xde3f;
  func_0x000299b9();
  local_a = 0xde47;
  FUN_28b3_0ee9();
  local_a = 0xde4f;
  func_0x00029834();
  local_a = 0xde57;
  func_0x00029c2c();
  local_a = 0xde5f;
  func_0x000297e6();
  local_a = 0xde67;
  FUN_28b3_100d();
  local_a = 0xde6c;
  func_0x00029d78();
  local_a = 0xde74;
  func_0x000299b9();
  local_a = 0xde7c;
  func_0x00029c2c();
  local_a = 0xde81;
  FUN_28b3_117c();
  local_a = 0xde89;
  func_0x000299b9();
  local_a = 0xde91;
  FUN_28b3_0ee9();
  local_a = 0xde9a;
  func_0x00029834();
  local_a = 0xdea2;
  func_0x00029834();
  local_a = 56999;
  FUN_28b3_1181();
  if ((bool)in_CF || (bool)in_ZF) {
    puVar1 = (undefined2 *)0xa388;
  }
  else {
    local_a = local_36;
    uStack_c = local_38;
    uStack_e = local_3a;
    uStack_10 = 0x22b2;
    local_12 = 0xdecb;
    FUN_28b3_1582();
    local_a = 0xded5;
    func_0x00029834();
    local_a = 0xdedd;
    func_0x000299b9();
    local_a = 0xdee5;
    FUN_28b3_112c();
    local_a = 0xdeed;
    func_0x000299d1();
    local_a = 0xdef5;
    func_0x00029834();
    local_a = 0xdefd;
    func_0x00029c44();
    local_a = 0xdf05;
    func_0x000299d1();
    local_a = 0xdf0d;
    func_0x000297e6();
    local_a = 0xdf15;
    FUN_28b3_100d();
    local_a = 0xdf1a;
    func_0x00029d78();
    local_a = 0xdf22;
    func_0x000299b9();
    local_a = 0xdf2a;
    func_0x000299d1();
    local_a = 0xdf32;
    func_0x000297e6();
    local_a = 0xdf3a;
    FUN_28b3_100d();
    local_a = 0xdf3f;
    func_0x00029d78();
    local_a = 0xdf47;
    func_0x000299b9();
    local_a = 0xdf4f;
    func_0x000299d1();
    local_a = 0xdf57;
    func_0x00029834();
    local_a = 0xdf5f;
    func_0x00029c2c();
    local_a = 0xdf67;
    func_0x00029834();
    local_a = 0xdf6f;
    func_0x00029c2c();
    local_a = 0xdf74;
    FUN_28b3_117c();
    local_a = 0xdf7c;
    func_0x000299b9();
    local_a = 0xdf84;
    func_0x000299d1();
    local_a = 0xdf8c;
    func_0x00029834();
    local_a = 0xdf94;
    func_0x00029c2c();
    local_a = 0xdf9c;
    func_0x00029834();
    local_a = 0xdfa4;
    func_0x00029c2c();
    local_a = 0xdfa9;
    FUN_28b3_1163();
    local_a = 0xdfb1;
    func_0x000299b9();
    local_a = 0xdfb9;
    func_0x000299d1();
    local_a = 0xdfc1;
    func_0x00029834();
    uStack_10 = 0x22b2;
    local_12 = 0xdfcb;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xdfd3;
    func_0x00029834();
    uStack_18 = 0x22b2;
    local_1a = 0xdfdd;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    local_1a = 0xdfe2;
    puVar1 = (undefined2 *)func_0x0002a178();
    local_42 = *puVar1;
    uStack_40 = puVar1[1];
    uStack_3e = puVar1[2];
    uStack_3c = puVar1[3];
    puVar1 = &local_42;
  }
  *(undefined2 *)0x7a2a = *puVar1;
  *(undefined2 *)0x7a2c = puVar1[1];
  *(undefined2 *)0x7a2e = puVar1[2];
  *(undefined2 *)0x7a30 = puVar1[3];
  return;
}



/* 3ab8:3481  FUN_3ab8_3481  706 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_3481(uint param_1,int param_2,int param_3)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint unaff_DI;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint local_82;
  int local_80;
  uint local_7e;
  int local_7c;
  uint local_7a;
  int local_78;
  uint local_76;
  undefined2 local_72 [11];
  undefined2 local_5c [12];
  undefined2 local_44 [7];
  undefined2 uStack_36;
  int iStack_34;
  undefined2 auStack_32 [9];
  undefined2 auStack_1c [2];
  undefined2 local_18 [7];
  
  FUN_21f2_0ebc();
  local_80 = 0;
  local_82 = 0;
  local_76 = 0;
  local_78 = 0;
  for (local_7a = 1; (local_78 <= param_2 && ((local_78 < param_2 || (local_7a <= param_1))));
      local_7a = local_7a + 1) {
    pbVar1 = (byte *)(param_3 + local_7a * 0x16 + 0x15);
    *pbVar1 = *pbVar1 & 0xfd;
    local_78 = local_78 + (uint)(0xfffe < local_7a);
  }
  local_7a = 1;
  local_78 = 0;
  do {
    if ((param_2 < local_78) || ((param_2 <= local_78 && (param_1 < local_7a)))) {
      return 1;
    }
    puVar4 = (undefined2 *)(local_7a * 0x16 + param_3);
    puVar9 = local_18;
    puVar8 = puVar4;
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar2;
    }
    if ((((unaff_DI & 2) == 0) || (param_2 < local_78)) ||
       ((param_2 <= local_78 && (param_1 <= local_7a)))) {
      if (local_80 != 0 || local_82 != 0) {
        uVar10 = false;
        uVar13 = false;
        if ((unaff_DI & 0x100) == 0) {
          uVar10 = local_76 < 2;
          uVar13 = local_76 == 2;
          if ((int)local_76 < 2) goto LAB_3ab8_3558;
        }
        func_0x00029834();
        func_0x000297e6();
        func_0x00029ae7();
        func_0x00029d78();
        FUN_28b3_1181();
        if (!(bool)uVar10) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          local_7c = local_80;
          for (local_7e = local_82;
              (local_7c <= local_78 && ((local_7c < local_78 || (local_7e <= local_7a))));
              local_7e = local_7e + 1) {
            puVar9 = local_5c;
            puVar4 = (undefined2 *)(local_7e * 0x16 + param_3);
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = *puVar2;
            }
            if ((local_7c < local_78) || ((local_7c <= local_78 && (local_7e < local_7a)))) {
              uVar5 = local_7e + 1;
            }
            else {
              uVar5 = local_82;
              if ((unaff_DI & 0x100) == 0) break;
            }
            puVar9 = local_72;
            puVar4 = (undefined2 *)(uVar5 * 0x16 + param_3);
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = *puVar2;
            }
            func_0x000297e6();
            puVar9 = auStack_1c;
            puVar4 = local_72;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = *puVar2;
            }
            puVar9 = auStack_32;
            iStack_34 = param_3;
            puVar4 = local_5c;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = *puVar2;
            }
            iStack_34 = 0x22b2;
            uStack_36 = 0xe208;
            FUN_3ab8_3295();
            uVar12 = (undefined1 *)0xffd3 < auStack_32;
            func_0x00029834();
            func_0x0002996b();
            FUN_28b3_1181();
            if ((bool)uVar12) {
              if (!(bool)uVar10 && !(bool)uVar13) {
                iVar7 = local_7e * 0x16;
                iVar6 = param_3;
                goto LAB_3ab8_36d4;
              }
LAB_3ab8_36b8:
              pbVar1 = (byte *)(param_3 + local_7e * 0x16 + 0x15);
              *pbVar1 = *pbVar1 & 0xfd;
            }
            else {
              if (!(bool)uVar10 && !(bool)uVar13) goto LAB_3ab8_36b8;
              iVar6 = local_7e * 0x16;
              iVar7 = param_3;
LAB_3ab8_36d4:
              pbVar1 = (byte *)(iVar7 + iVar6 + 0x15);
              *pbVar1 = *pbVar1 | 2;
            }
            local_7c = local_7c + (uint)(0xfffe < local_7e);
          }
        }
      }
LAB_3ab8_3558:
      local_80 = 0;
      local_82 = 0;
      local_76 = 0;
    }
    else {
      local_76 = local_76 + 1;
      puVar9 = local_44;
      puVar4 = puVar4 + 0xb;
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = *puVar2;
      }
      puVar9 = auStack_1c;
      puVar4 = local_44;
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = *puVar2;
      }
      puVar9 = auStack_32;
      puVar4 = local_18;
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = *puVar2;
      }
      iStack_34 = 0x22b2;
      uStack_36 = 0xe17b;
      FUN_3ab8_3295();
      func_0x00029834();
      func_0x00029bb5();
      func_0x00029983();
      if (local_80 == 0 && local_82 == 0) {
        local_82 = local_7a;
        local_80 = local_78;
      }
    }
    bVar11 = 0xfffe < local_7a;
    local_7a = local_7a + 1;
    local_78 = local_78 + (uint)bVar11;
  } while( true );
}



/* 3ab8:3743  FUN_3ab8_3743  406 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_3743(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_0000001c;
  uint local_24;
  undefined2 local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  uint local_c;
  uint uStack_a;
  
  FUN_21f2_0ebc();
  uStack_a = 0x22b2;
  local_c = 0xe2d8;
  iVar3 = func_0x00024ce4();
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    puVar4 = &local_22;
    puVar5 = (undefined2 *)&stack0x0004;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    local_24 = (uint)((local_c & 0x20) != 0);
    uStack_a = local_24;
    local_c = in_stack_0000001c;
    local_e = 0x22b2;
    local_10 = 0xe313;
    func_0x00018eff();
    uStack_a = 0xe32b;
    func_0x000297e6();
    uStack_a = 0xe330;
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xe33a;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xe342;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xe347;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0xe351;
    func_0x000299d1();
    local_18 = 0x22b2;
    local_1a = 0xe359;
    func_0x000297e6();
    local_18 = 0x22b2;
    local_1a = 0xe35e;
    func_0x00029d78();
    local_22 = 0xe368;
    func_0x000299d1();
    local_22 = 0xe370;
    func_0x000297e6();
    local_22 = 0xe375;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    iVar3 = FUN_1def_043a(0x22b2);
    if (iVar3 == 0) {
      uStack_a = 0xe403;
      func_0x000297e6();
      uStack_a = 0xe40b;
      func_0x00029bb5();
      uVar6 = 0x22b2;
      uStack_a = 0xe413;
      func_0x00029983();
      local_14 = local_1c;
    }
    else {
      uStack_a = *(undefined2 *)0xa38c;
      local_c = *(undefined2 *)0xa38a;
      local_e = *(undefined2 *)0xa388;
      local_10 = 0x1bb4;
      local_12 = 0xe3a3;
      func_0x000297e6();
      local_18 = 0x22b2;
      local_1a = 0xe3ad;
      func_0x000299d1();
      local_18 = 0;
      local_1a = 0x22b2;
      local_1c = 0xe3b5;
      puVar4 = (undefined2 *)FUN_1def_05d1();
      local_1a = *puVar4;
      local_18 = puVar4[1];
      uStack_a = *(undefined2 *)0xa38c;
      local_c = *(undefined2 *)0xa38a;
      local_e = *(undefined2 *)0xa388;
      local_10 = 0x1bb4;
      local_12 = 0xe3dd;
      func_0x000297e6();
      local_18 = 0x22b2;
      local_1a = 0xe3e7;
      func_0x000299d1();
      local_18 = 0;
      local_1a = 0x22b2;
      uVar6 = 0x1bb4;
      local_1c = 0xe3ef;
      puVar4 = (undefined2 *)func_0x0001e558();
      local_1e = *puVar4;
      local_14 = puVar4[1];
    }
    local_10 = *(undefined2 *)0xbc78;
    local_12 = in_stack_0000001c;
    local_c = 0xe433;
    local_16 = local_1e;
    uStack_a = uVar6;
    func_0x0000daa6();
    puVar5 = &local_1e;
    puVar4 = &local_22;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    local_22 = 0xe448;
    func_0x0001b0b0();
    uStack_a = 0xe450;
    func_0x0000abfa();
    uVar6 = 1;
  }
  return uVar6;
}



/* 3ab8:38d9  FUN_3ab8_38d9  98 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_38d9(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if ((((*(char *)(param_2 + param_1) == '^') &&
       (iVar1 = func_0x0002aa38(0x22b2,param_1,param_2), iVar1 != 1)) &&
      (iVar1 = func_0x0002aa38(0x2a75,param_1,param_2), iVar1 != 2)) &&
     ((*(char *)(param_1 + param_2 + 1) != '\0' && (*(char *)(param_2 + param_1 + 1) == 'm')))) {
    if (*(char *)(param_2 + param_1 + 2) == '\0') {
      return 0xffff;
    }
    return 0xfffe;
  }
  return 0;
}



/* 3ab8:393b  FUN_3ab8_393b  124 bytes, 0 callers */

void FUN_3ab8_393b(void)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined2 **ppuVar4;
  undefined2 *puVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined2 **ppuVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  bool bVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined2 *puVar18;
  int iStack_76e;
  undefined4 uStack_76a;
  char cStack_766;
  char cStack_765;
  uint uStack_762;
  undefined2 *puStack_744;
  undefined2 uStack_740;
  undefined2 uStack_73e;
  undefined2 uStack_738;
  undefined2 uStack_736;
  uint uStack_72c;
  undefined1 auStack_72a [500];
  char acStack_536 [500];
  uint uStack_342;
  uint uStack_340;
  undefined2 uStack_33e;
  undefined2 uStack_33c;
  int iStack_33a;
  undefined2 uStack_338;
  undefined2 uStack_336;
  undefined2 uStack_330;
  undefined2 uStack_32e;
  byte bStack_31a;
  int iStack_318;
  undefined2 uStack_316;
  undefined2 uStack_314;
  char local_312;
  char cStack_311;
  int iStack_308;
  int iStack_306;
  undefined2 uStack_300;
  undefined2 uStack_2fe;
  uint uStack_2fc;
  int local_2fa;
  undefined1 auStack_2f8 [300];
  char acStack_1cc [316];
  undefined1 *puStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined1 auStack_82 [4];
  uint uStack_7e;
  uint uStack_7a;
  undefined2 uStack_70;
  undefined2 local_6e;
  uint uStack_6c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 auStack_56 [22];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined1 *puStack_12;
  undefined2 *puStack_10;
  undefined2 *puStack_e;
  char *pcStack_c;
  
  FUN_21f2_0ebc();
  local_2fa = 0;
  pcStack_c = (char *)0x22b2;
  puStack_e = (undefined2 *)0xe4dc;
  func_0x00024c86();
  pcStack_c = (char *)0x22b2;
  puStack_e = (undefined2 *)0xe4eb;
  func_0x00024c86();
  pcStack_c = (char *)0x22b2;
  puStack_e = (undefined2 *)0xe4fb;
  func_0x00024c86();
LAB_3ab8_397d:
  do {
    do {
      do {
        local_6e = *(undefined2 *)0x150;
        func_0x0000c3ca();
        pcStack_c = (char *)*(undefined2 *)0xa38a;
        puStack_e = (undefined2 *)*(undefined2 *)0xa388;
        puStack_10 = (undefined2 *)*(int *)0xa38e;
        puStack_12 = (undefined1 *)*(int *)0xa38c;
        uStack_14 = *(undefined2 *)0xa38a;
        uStack_16 = *(undefined2 *)0xa388;
        uStack_18 = 0;
        uStack_1a = 0x7aa;
        uStack_1c = 0xfffe;
        uStack_1e = 0;
        pcVar6 = (code *)swi(0x3f);
        (*pcVar6)();
        puVar11 = (undefined2 *)0x885;
        if (*(int *)0x158 != 0) {
          FUN_3ab8_4d6f();
          return;
        }
        do {
          do {
            uVar13 = 0;
            puStack_e = (undefined2 *)0xe555;
            pcStack_c = (char *)puVar11;
            func_0x00024c86();
            pcStack_c = (char *)0x22b2;
            puStack_e = (undefined2 *)0xe565;
            FUN_21f2_2d26();
            pcVar6 = (code *)swi(0x3f);
            (*pcVar6)();
            FUN_21f2_2d26();
            FUN_21f2_2d26();
            FUN_21f2_2d26();
            FUN_21f2_2d26();
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar13) {
              uVar13 = 0;
              FUN_21f2_3454();
            }
            else {
              func_0x000297e6();
              func_0x00029d78();
              pcStack_c = (char *)0x22b2;
              puStack_e = (undefined2 *)0xe604;
              func_0x000299d1();
              pcStack_c = (char *)0x5b37;
              puStack_e = auStack_56;
              puStack_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined1 *)0xe611;
              FUN_21f2_3454();
              uVar13 = (undefined1 *)0xfff3 < &puStack_e;
            }
            FUN_21f2_2d26();
            FUN_21f2_2d26();
            FUN_21f2_2d26();
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if (!(bool)uVar13) {
              if (*(int *)0x1092 % 1000 < 1) {
                *(undefined2 *)0x1092 = 0;
              }
              uStack_7e = *(int *)0x1092 / 1000;
              if (0 < (int)uStack_7e) {
                *(undefined2 *)0xc22 = 1;
                pcStack_c = (char *)0xe699;
                FUN_21f2_3454();
                pcStack_c = (char *)auStack_56;
                puStack_e = (undefined2 *)0x22b2;
                puStack_10 = (undefined2 *)0xe6b5;
                FUN_1000_02b5();
              }
              FUN_21f2_2d26();
              if (*(int *)0x1092 < 1) {
                FUN_21f2_3454();
              }
              else {
                pcStack_c = (char *)0xe6f8;
                FUN_21f2_3454();
              }
              FUN_21f2_2d26();
              FUN_21f2_2d26();
            }
            FUN_1def_07a4();
            *(undefined2 *)0xc20 = 1;
            pcStack_c = (char *)0x270f;
            puStack_e = (undefined2 *)0x1bb4;
            puVar10 = (undefined2 *)0x1bb4;
            puStack_10 = (undefined2 *)0xe74e;
            iStack_33a = FUN_1def_0904();
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) {
              FUN_3ab8_4d6f();
              return;
            }
            if (iStack_33a == -1) {
              puStack_90 = (undefined1 *)0x0;
              puVar10 = (undefined2 *)0x885;
              func_0x0000c3ca();
              pcStack_c = (char *)*(int *)0xa38a;
              puStack_e = (undefined2 *)*(int *)0xa388;
              puStack_10 = (undefined2 *)*(int *)0xa38e;
              puStack_12 = (undefined1 *)*(int *)0xa38c;
              uStack_14 = *(undefined2 *)0xa38a;
              uStack_16 = *(undefined2 *)0xa388;
              uStack_18 = 0;
              uStack_1a = 0x7aa;
              uStack_1c = 0xfffe;
              uStack_1e = 0xd8f1;
              pcVar6 = (code *)swi(0x3f);
              iVar7 = (*pcVar6)();
              if (iVar7 == -1) goto LAB_3ab8_397d;
              if (*(int *)0x158 != 0) {
                FUN_3ab8_4d6f();
                return;
              }
            }
            if (iStack_33a == 1) {
              puStack_90 = (undefined1 *)0x0;
              pcVar6 = (code *)swi(0x3f);
              (*pcVar6)();
            }
            if (iStack_33a == 2) {
              puStack_90 = (undefined1 *)0x0;
              pcVar6 = (code *)swi(0x3f);
              uStack_6c = (*pcVar6)();
            }
            if (*(int *)0x158 != 0) {
              FUN_3ab8_4d6f();
              return;
            }
            do {
              if (iStack_33a != 3) goto LAB_3ab8_3d17;
              puStack_90 = (undefined1 *)0x0;
              uStack_342 = *(int *)0x1092 % 1000;
              FUN_28b3_0d8b();
              func_0x00029983();
              uStack_342 = *(int *)0x1092 / 1000;
              uStack_7e = uStack_342;
              FUN_28b3_0d8b();
              func_0x00029983();
              func_0x0001bb4e();
              pcStack_c = (char *)0xe854;
              func_0x00012276();
              pcStack_c = (char *)0xe85e;
              func_0x00012276();
              pcStack_c = (char *)&uStack_33e;
              puStack_e = &uStack_338;
              puStack_10 = &uStack_8a;
              puStack_12 = auStack_82;
              uStack_14 = 0x11f2;
              puVar10 = (undefined2 *)0xad;
              uStack_16 = 0xe87f;
              uStack_6c = func_0x000021a4();
              if (*(int *)0x158 != 0) {
                FUN_3ab8_4d6f();
                return;
              }
              if (uStack_6c == 0xffff) goto LAB_3ab8_3d17;
              uVar13 = uStack_6c < 99;
              uVar16 = uStack_6c == 99;
            } while ((bool)uVar16);
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_100d();
            FUN_28b3_1181();
            if ((bool)uVar13) {
              uStack_8a = *(undefined2 *)0xa360;
              uStack_88 = *(undefined2 *)0xa362;
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar13 || (bool)uVar16) {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if (!(bool)uVar13) goto LAB_3ab8_3e6c;
              func_0x000297e6();
              func_0x00029d78();
              uVar12 = FUN_28b3_0f51();
              *(undefined2 *)0x1092 = uVar12;
            }
            else {
LAB_3ab8_3e6c:
              *(undefined2 *)0x1092 = 0;
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            uVar14 = uVar13;
            if ((bool)uVar13 || (bool)uVar16) {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              uVar14 = 0;
              if ((bool)uVar13) {
                func_0x000297e6();
                func_0x00029d78();
                iVar7 = FUN_28b3_0f51();
                uStack_7e = iVar7 * 1000;
                puVar1 = (uint *)0x1092;
                uVar14 = CARRY2(*puVar1,uStack_7e);
                *puVar1 = *puVar1 + uStack_7e;
                uVar16 = *puVar1 == 0;
              }
            }
            local_2fa = 0;
            func_0x000297e6();
            func_0x000297e6();
            puVar10 = (undefined2 *)0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar14 && !(bool)uVar16) {
              local_2fa = 1;
            }
LAB_3ab8_3d17:
            puVar11 = puVar10;
          } while (puStack_90 == (undefined1 *)0x0);
          pcStack_c = puStack_90;
          puVar11 = (undefined2 *)0x11f2;
          puStack_10 = (undefined2 *)0xe8b4;
          puStack_e = puVar10;
          iVar7 = func_0x00015409();
        } while (iVar7 == 0);
        if (((*(char *)0x7e != '\0') && (*(char *)0xd14 != '\x04')) && (1 < *(byte *)0x84)) {
          func_0x0000c3ca();
          pcStack_c = auStack_2f8;
          puStack_e = (undefined2 *)0x885;
          puStack_10 = (undefined2 *)0xe8ea;
          func_0x0001263c();
          pcStack_c = auStack_2f8;
          puStack_e = (undefined2 *)0x1;
          pcVar6 = (code *)swi(0x3f);
          (*pcVar6)();
          *(undefined1 *)0xd14 = 2;
        }
        func_0x0000c3ca();
        *(undefined2 *)0xbc0 = 1;
        pcStack_c = (char *)0xe91e;
        func_0x0000daa6();
        uStack_300 = uStack_338;
        uStack_2fe = uStack_336;
        uStack_316 = uStack_33e;
        uStack_314 = uStack_33c;
        *(undefined2 *)0xbc2 = 0;
        iStack_308 = 0;
        uStack_8e = *(undefined2 *)0xa360;
        uStack_8c = *(undefined2 *)0xa362;
        uStack_86 = uStack_8e;
        uStack_84 = uStack_8c;
        for (uStack_2fc = 1; (int)uStack_2fc <= *(int *)0x150; uStack_2fc = uStack_2fc + 1) {
          pcStack_c = (char *)0xea7c;
          uVar17 = func_0x00000398();
          if (*(byte *)((int)uVar17 + 0x14) < 0x5a) {
            pcStack_c = (char *)0xea91;
            uVar17 = func_0x00000398();
            if ((*(byte *)((int)uVar17 + 0x16) & 2) != 0) {
              pcStack_c = (char *)0xeaa6;
              puVar18 = (undefined2 *)func_0x00000398();
              puVar10 = (undefined2 *)puVar18;
              puVar11 = &uStack_330;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                puVar5 = puVar11;
                puVar11 = puVar11 + 1;
                puVar3 = puVar10;
                puVar10 = puVar10 + 1;
                *puVar5 = *puVar3;
              }
              iStack_308 = iStack_308 + 1;
              func_0x000297e6();
              FUN_28b3_100d();
              pcStack_c = (char *)0xead8;
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
              FUN_28b3_100d();
              pcStack_c = (char *)0xeafa;
              func_0x00029bb5();
              func_0x00029983();
            }
          }
        }
      } while (iStack_308 == 0);
      func_0x00029834();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      func_0x00029b6d();
      FUN_28b3_117c();
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined1 *)0xeb58;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined1 *)0xeb5d;
      FUN_28b3_1582();
      uVar13 = (undefined1 *)0xfff7 < &puStack_e;
      func_0x00029834();
      func_0x0002996b();
      func_0x00029d78();
      FUN_28b3_1181();
    } while ((bool)uVar13);
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029983();
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar13) {
      uStack_6c = 0;
      uStack_5a = *(undefined2 *)0xa3dc;
      uStack_58 = *(undefined2 *)0xa3de;
      for (uStack_2fc = 1; (int)uStack_2fc <= *(int *)0x150; uStack_2fc = uStack_2fc + 1) {
        pcStack_c = (char *)0xf2bc;
        uVar17 = func_0x00000398();
        if (*(byte *)((int)uVar17 + 0x14) < 0x5a) {
          pcStack_c = (char *)0xf2d4;
          uVar17 = func_0x00000398();
          uVar13 = 0;
          uVar16 = (*(byte *)((int)uVar17 + 0x16) & 2) == 0;
          if (!(bool)uVar16) {
            pcStack_c = (char *)0xf2e9;
            puVar18 = (undefined2 *)func_0x00000398();
            puVar10 = (undefined2 *)puVar18;
            puVar11 = &uStack_330;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar5 = puVar11;
              puVar11 = puVar11 + 1;
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar5 = *puVar3;
            }
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_1163();
            func_0x0002996b();
            FUN_28b3_1181();
            if (!(bool)uVar13 && !(bool)uVar16) {
              func_0x000297e6();
              func_0x00029983();
              uStack_6c = uStack_2fc;
            }
          }
        }
      }
      pcStack_c = (char *)0xf36a;
      puVar18 = (undefined2 *)func_0x00000398();
      uStack_86 = *puVar18;
      uStack_84 = ((undefined2 *)puVar18)[1];
      pcStack_c = (char *)0xf386;
      uVar17 = func_0x00000398();
      uVar12 = (undefined2)((ulong)uVar17 >> 0x10);
      uStack_8e = *(undefined2 *)((int)uVar17 + 4);
      uStack_8c = *(undefined2 *)((int)uVar17 + 6);
      if (*(int *)0xcb6 == 0) {
        uStack_316 = uStack_8e;
        uStack_314 = uStack_8c;
      }
      for (uStack_2fc = 1; (int)uStack_2fc <= *(int *)0x150; uStack_2fc = uStack_2fc + 1) {
        pcStack_c = (char *)0xf3bc;
        uVar17 = func_0x00000398();
        if (*(byte *)((int)uVar17 + 0x14) < 0x5a) {
          pcStack_c = (char *)0xf3d4;
          uVar17 = func_0x00000398();
          if ((*(byte *)((int)uVar17 + 0x16) & 2) != 0) {
            pcStack_c = (char *)0xf3ec;
            puVar18 = (undefined2 *)func_0x00000398();
            puVar10 = (undefined2 *)puVar18;
            puVar11 = &uStack_330;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar5 = puVar11;
              puVar11 = puVar11 + 1;
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar5 = *puVar3;
            }
            puVar10 = &uStack_1e;
            puVar11 = &uStack_330;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              puVar18 = puVar11;
              puVar11 = puVar11 + 1;
              *puVar3 = *puVar18;
            }
            uStack_24 = 0xf414;
            func_0x00019593();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined1 *)0xf42f;
            func_0x000299d1();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined1 *)0xf438;
            func_0x000297e6();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined1 *)0xf43d;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xf447;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1a = 0xf450;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            uStack_1a = 0xf455;
            func_0x00029d78();
            func_0x000299d1();
            func_0x000297e6();
            func_0x00029d78();
            uStack_28 = 0x22b2;
            uStack_2a = 0xf477;
            func_0x000299d1();
            uStack_28 = 0x22b2;
            uStack_2a = 0xf47c;
            iVar7 = FUN_1def_043a();
            if (iVar7 != 0) {
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029b6d();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029b6d();
              FUN_28b3_1163();
              func_0x00029983();
              uStack_330 = uStack_300;
              uStack_32e = uStack_2fe;
              func_0x000297e6();
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029bb5();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029983();
              pcStack_c = (char *)0xf532;
              uStack_76a = (undefined2 *)func_0x00000398();
              puVar10 = (undefined2 *)uStack_76a;
              puVar11 = &uStack_330;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                puVar3 = puVar10;
                puVar10 = puVar10 + 1;
                puVar18 = puVar11;
                puVar11 = puVar11 + 1;
                *puVar3 = *puVar18;
              }
            }
          }
        }
      }
    }
    else {
      uStack_72c = *(int *)0x1092 % 1000 << 1;
      uStack_7e = *(int *)0x1092 / 1000;
      acStack_536[0] = '\0';
      auStack_72a[0] = 0;
      uStack_7a = 1;
      FUN_10ad_1871();
LAB_3ab8_4080:
      uStack_6c = 0;
      uStack_5a = *(undefined2 *)0xa3dc;
      uStack_58 = *(undefined2 *)0xa3de;
      for (uStack_2fc = 1; (int)uStack_2fc <= *(int *)0x150; uStack_2fc = uStack_2fc + 1) {
        pcStack_c = (char *)0xec24;
        uVar17 = func_0x00000398();
        if (*(byte *)((int)uVar17 + 0x14) < 0x5a) {
          pcStack_c = (char *)0xec3c;
          uVar17 = func_0x00000398();
          if ((*(byte *)((int)uVar17 + 0x16) & 2) != 0) {
            pcStack_c = (char *)0xec54;
            uVar17 = func_0x00000398();
            uVar13 = 0;
            uVar16 = (*(byte *)((int)uVar17 + 0x16) & 1) == 0;
            if ((bool)uVar16) {
              pcStack_c = (char *)0xec69;
              puVar18 = (undefined2 *)func_0x00000398();
              puVar10 = (undefined2 *)puVar18;
              puVar11 = &uStack_330;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                puVar5 = puVar11;
                puVar11 = puVar11 + 1;
                puVar3 = puVar10;
                puVar10 = puVar10 + 1;
                *puVar5 = *puVar3;
              }
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x000297e6();
              func_0x00029b6d();
              FUN_28b3_1163();
              func_0x0002996b();
              FUN_28b3_1181();
              if (!(bool)uVar13 && !(bool)uVar16) {
                func_0x000297e6();
                func_0x00029983();
                uStack_6c = uStack_2fc;
              }
            }
          }
        }
      }
      if (0 < (int)uStack_6c) {
        pcStack_c = (char *)0xecf3;
        puVar18 = (undefined2 *)func_0x00000398();
        puVar11 = (undefined2 *)puVar18;
        ppuVar9 = &puStack_744;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          ppuVar4 = ppuVar9;
          ppuVar9 = (undefined2 **)((int)ppuVar9 + 2);
          puVar3 = puVar11;
          puVar11 = puVar11 + 1;
          *(undefined2 *)ppuVar4 = *puVar3;
        }
        pcStack_c = acStack_1cc;
        puStack_e = (undefined2 *)0x0;
        uVar12 = 0x18b3;
        puStack_10 = (undefined2 *)0xed17;
        FUN_1885_0344();
        if (((uStack_7a == 0) && ((0 < (int)uStack_7e || (local_2fa != 0)))) &&
           (0 < (int)uStack_72c)) {
          uVar12 = 0x22b2;
          pcStack_c = (char *)0xed3e;
          uVar8 = func_0x00024ce4();
          if (1 < uVar8) {
            uStack_2fc = 0;
            while ((acStack_1cc[uStack_2fc] == local_312 &&
                   (acStack_1cc[uStack_2fc + 1] == cStack_311))) {
              uStack_2fc = uStack_2fc + 2;
            }
            if ((acStack_1cc[uStack_2fc] == '^') && (acStack_1cc[uStack_2fc + 1] == 'm')) {
              uStack_2fc = 0;
            }
          }
        }
        puStack_e = (undefined2 *)0xed96;
        pcStack_c = (char *)uVar12;
        FUN_21f2_2d26();
        uStack_7a = 0;
        pcStack_c = (char *)0xeda7;
        uStack_340 = func_0x00024ce4();
        pcStack_c = (char *)0xedb4;
        func_0x000190c7();
        if (uStack_72c == 0) {
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          uStack_740 = uStack_316;
          uStack_73e = uStack_314;
          uStack_738 = uStack_316;
          uStack_736 = uStack_314;
          puVar11 = (undefined2 *)&stack0xffe0;
          ppuVar9 = &puStack_744;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar18 = puVar11;
            puVar11 = puVar11 + 1;
            ppuVar4 = ppuVar9;
            ppuVar9 = (undefined2 **)((int)ppuVar9 + 2);
            *puVar18 = *(undefined2 *)ppuVar4;
          }
          uStack_24 = 0xee0b;
          FUN_3ab8_3743();
          acStack_536[0] = '\0';
          pcStack_c = (char *)0xee1c;
          uVar17 = func_0x00000398();
          pbVar2 = (byte *)((int)uVar17 + 0x16);
          *pbVar2 = *pbVar2 | 1;
          pcStack_c = (char *)0xee2f;
          uVar17 = func_0x00000398();
          pbVar2 = (byte *)((int)uVar17 + 0x16);
          *pbVar2 = *pbVar2 | 2;
          func_0x000297e6();
          func_0x00029b85();
          pcStack_c = (char *)0xee55;
          func_0x00029b55();
          func_0x00029983();
        }
        else {
          while( true ) {
            pcStack_c = (char *)0xf17e;
            uStack_340 = func_0x00024ce4();
            pcStack_c = acStack_536;
            puStack_e = (undefined2 *)0x22b2;
            puStack_10 = (undefined2 *)0xf192;
            iVar7 = FUN_1885_0406();
            bVar15 = iVar7 == -1;
            if ((!bVar15) && ((int)uStack_340 <= (int)uStack_72c)) break;
            pcStack_c = (char *)0x18b3;
            puStack_e = (undefined2 *)0xf1c0;
            FUN_21f2_3454();
            pcStack_c = (char *)0x22b2;
            puStack_e = (undefined2 *)0xf1d0;
            FUN_21f2_3454();
            pcStack_c = (char *)0x22b2;
            puStack_e = (undefined2 *)0xf1e1;
            FUN_21f2_3454();
            uStack_342 = uStack_72c;
            if ((int)uStack_340 < (int)uStack_72c) {
              uStack_342 = uStack_340;
            }
            for (uStack_762 = 0; (int)uStack_762 < (int)uStack_342; uStack_762 = uStack_762 + 1) {
              pcStack_c = (char *)0x22b2;
              puStack_e = (undefined2 *)0xee76;
              iVar7 = FUN_3ab8_38d9();
              if (iVar7 != 0) {
                uStack_7a = 1;
                uStack_342 = uStack_762;
                break;
              }
            }
            puVar11 = (undefined2 *)0x22b2;
            for (uStack_762 = 0; (int)uStack_762 < (int)uStack_342; uStack_762 = uStack_762 + 1) {
              pcStack_c = acStack_536;
              puStack_10 = (undefined2 *)0xee9e;
              puStack_e = puVar11;
              iVar7 = FUN_1885_0406();
              if (0 < iVar7) {
                uStack_342 = uStack_342 + 2;
              }
              puVar11 = (undefined2 *)0x18b3;
            }
            puStack_e = (undefined2 *)0xeec6;
            pcStack_c = (char *)puVar11;
            iVar7 = func_0x0002aa38();
            if (iVar7 == 2) {
              uStack_342 = uStack_342 - 1;
            }
            iStack_318 = 0;
            if (((int)uStack_72c < 0x9f) &&
               (((acStack_536[uStack_342] == cStack_766 &&
                 (acStack_536[uStack_342 + 1] == cStack_765)) ||
                (((char)uStack_76a == acStack_536[uStack_342] &&
                 (uStack_76a._1_1_ == acStack_536[uStack_342 + 1])))))) {
              uStack_342 = uStack_342 + 2;
              iStack_318 = 1;
            }
            pcStack_c = (char *)0x2a75;
            puStack_e = (undefined2 *)0xef39;
            iVar7 = FUN_3ab8_38d9();
            if (iVar7 != 0) {
              uStack_342 = uStack_342 + 2;
            }
            pcStack_c = (char *)0x2a75;
            puStack_e = (undefined2 *)0xef53;
            iVar7 = FUN_3ab8_38d9();
            if (iVar7 != 0) {
              uStack_342 = uStack_342 + 1;
            }
            iStack_76e = 0;
            for (uStack_762 = uStack_342; (int)uStack_762 <= (int)uStack_340;
                uStack_762 = uStack_762 + 1) {
              acStack_536[iStack_76e] = acStack_536[uStack_762];
              iStack_76e = iStack_76e + 1;
            }
            acStack_536[iStack_76e] = '\0';
            auStack_72a[uStack_342] = 0;
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            uStack_740 = uStack_316;
            uStack_73e = uStack_314;
            uStack_738 = uStack_316;
            uStack_736 = uStack_314;
            puVar11 = (undefined2 *)&stack0xffe0;
            ppuVar9 = &puStack_744;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar18 = puVar11;
              puVar11 = puVar11 + 1;
              ppuVar4 = ppuVar9;
              ppuVar9 = (undefined2 **)((int)ppuVar9 + 2);
              *puVar18 = *(undefined2 *)ppuVar4;
            }
            uStack_24 = 0xefed;
            FUN_3ab8_3743();
            pcStack_c = (char *)0xeff9;
            uVar17 = func_0x00000398();
            pbVar2 = (byte *)((int)uVar17 + 0x16);
            *pbVar2 = *pbVar2 | 1;
            pcStack_c = (char *)0xf00c;
            uVar17 = func_0x00000398();
            pbVar2 = (byte *)((int)uVar17 + 0x16);
            *pbVar2 = *pbVar2 | 2;
            func_0x000297e6();
            func_0x00029b85();
            pcStack_c = (char *)0xf032;
            func_0x00029b55();
            func_0x00029983();
            uStack_342 = uStack_72c;
            uVar12 = 0x22b2;
            pcStack_c = (char *)0xf04a;
            uStack_340 = func_0x00024ce4();
            if ((((0 < (int)uStack_7e) && (0 < (int)uStack_342)) && (0 < (int)uStack_340)) &&
               (uStack_7a == 0)) {
              auStack_72a[0] = 0;
              for (iStack_306 = 1; iStack_306 <= (int)uStack_7e; iStack_306 = iStack_306 + 1) {
                pcStack_c = (char *)0x22b2;
                puStack_e = (undefined2 *)0xf085;
                FUN_21f2_2d26();
              }
              pcStack_c = (char *)0x22b2;
              puStack_e = (undefined2 *)0xf0a3;
              FUN_21f2_2d26();
              pcStack_c = (char *)0x22b2;
              puStack_e = (undefined2 *)0xf0b4;
              func_0x00024c86();
              pcStack_c = acStack_536;
              puStack_e = (undefined2 *)0x22b2;
              puStack_10 = (undefined2 *)0xf0c7;
              iVar7 = FUN_1885_0406();
              if (iVar7 == -1) {
                uStack_342 = uStack_342 + 2;
              }
              pcStack_c = acStack_536;
              puStack_e = (undefined2 *)0x18b3;
              uVar12 = 0x18b3;
              puStack_10 = (undefined2 *)0xf0e4;
              iVar7 = FUN_1885_0406();
              if (iVar7 == -1) {
                uStack_342 = uStack_342 + 1;
              }
            }
            if ((((int)uStack_340 < 1) && (iStack_318 != 0)) && (!bVar15)) {
              acStack_536[0] = '\0';
              pcStack_c = (char *)uVar12;
              for (iStack_306 = 1; iStack_306 <= (int)uStack_7e; iStack_306 = iStack_306 + 1) {
                puStack_e = (undefined2 *)0xf11f;
                FUN_21f2_2d26();
                pcStack_c = (char *)0x22b2;
              }
            }
            pcStack_c = (char *)0xf138;
            uStack_340 = func_0x00024ce4();
            iStack_318 = 0;
            uStack_7a = (uint)bVar15;
            if (((int)uStack_340 < 1) || (((int)uStack_340 < (int)uStack_342 && (!bVar15)))) break;
          }
        }
        goto LAB_3ab8_4080;
      }
      if (0 < (int)uStack_72c) {
        pcStack_c = (char *)0xf216;
        iVar7 = func_0x00024ce4();
        if (iVar7 != 0) {
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          uStack_740 = uStack_316;
          uStack_73e = uStack_314;
          uStack_738 = uStack_316;
          uStack_736 = uStack_314;
          puVar11 = (undefined2 *)&stack0xffe0;
          ppuVar9 = &puStack_744;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar18 = puVar11;
            puVar11 = puVar11 + 1;
            ppuVar4 = ppuVar9;
            ppuVar9 = (undefined2 **)((int)ppuVar9 + 2);
            *puVar18 = *(undefined2 *)ppuVar4;
          }
          uStack_24 = 0xf267;
          FUN_3ab8_3743();
          pcStack_c = (char *)0xf273;
          uVar17 = func_0x00000398();
          pbVar2 = (byte *)((int)uVar17 + 0x16);
          *pbVar2 = *pbVar2 | 1;
          pcStack_c = (char *)0xf286;
          uVar17 = func_0x00000398();
          pbVar2 = (byte *)((int)uVar17 + 0x16);
          *pbVar2 = *pbVar2 | 2;
        }
      }
      FUN_10ad_1871();
    }
    for (uStack_2fc = 1; (int)uStack_2fc <= *(int *)0x150; uStack_2fc = uStack_2fc + 1) {
      pcStack_c = (char *)0xf768;
      uVar17 = func_0x00000398();
      if (*(byte *)((int)uVar17 + 0x14) < 0x5a) {
        pcStack_c = (char *)0xf77d;
        uVar17 = func_0x00000398();
        if ((*(byte *)((int)uVar17 + 0x16) & 2) != 0) {
          pcStack_c = (char *)0xf792;
          puVar18 = (undefined2 *)func_0x00000398();
          puVar10 = (undefined2 *)puVar18;
          puVar11 = &uStack_330;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar5 = puVar11;
            puVar11 = puVar11 + 1;
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar5 = *puVar3;
          }
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029bb5();
          func_0x0002996b();
          FUN_28b3_0ee9();
          if (*(int *)0x1096 == 1) {
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_117c();
            func_0x00029983();
          }
          uVar13 = *(uint *)0x1096 < 2;
          if (*(uint *)0x1096 == 2) {
            func_0x000297e6();
            pcStack_c = (char *)0xf848;
            func_0x00029b55();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029bb5();
          func_0x00029983();
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if (!(bool)uVar13) {
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029bb5();
            func_0x00029983();
            if ((bStack_31a & 0x20) == 0) {
              FUN_3ab8_49e1();
              return;
            }
            FUN_28b3_0d8b();
            func_0x00029983();
            if (*(int *)0x1098 == 1) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029b85();
              func_0x00029c2c();
              func_0x00029bb5();
              func_0x00029983();
            }
            if (*(int *)0x1098 == 2) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029b85();
              func_0x00029c2c();
              func_0x00029bb5();
              func_0x00029983();
            }
            func_0x000297e6();
            func_0x0002996b();
            func_0x00029bb5();
            func_0x00029983();
          }
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029983();
          pcStack_c = (char *)0x0;
          puStack_e = (undefined2 *)0x22b2;
          puStack_10 = (undefined2 *)0xf686;
          FUN_1def_0338();
          pcStack_c = (char *)0x0;
          puStack_e = (undefined2 *)0x1bb4;
          puStack_10 = (undefined2 *)0xf69b;
          FUN_1def_0338();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          puVar10 = &uStack_1e;
          puVar11 = &uStack_330;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            puVar18 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar3 = *puVar18;
          }
          uStack_24 = 0xf723;
          func_0x00019593();
          pcStack_c = (char *)0xf72f;
          puStack_744 = (undefined2 *)func_0x00000398();
          puVar10 = (undefined2 *)puStack_744;
          puVar11 = &uStack_330;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            puVar18 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar3 = *puVar18;
          }
          uStack_70 = 1;
          *(undefined1 *)0xd14 = 2;
        }
      }
    }
  } while( true );
}



/* 3ab8:49e1  FUN_3ab8_49e1  688 bytes, 1 callers */

void FUN_3ab8_49e1(void)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined2 uVar10;
  int unaff_BP;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 *puVar17;
  undefined4 uVar18;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  do {
    FUN_28b3_0d8b();
    func_0x00029983();
    if (*(int *)0x1098 == 1) {
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029b85();
      func_0x00029c2c();
      func_0x00029bb5();
      func_0x00029983();
    }
    if (*(int *)0x1098 == 2) {
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029b85();
      func_0x00029c2c();
      func_0x00029bb5();
      func_0x00029983();
    }
    func_0x000297e6();
    func_0x0002996b();
    func_0x00029bb5();
    func_0x00029983();
    do {
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      iStack_6 = 0;
      iStack_8 = 0x22b2;
      iStack_a = 0xf686;
      FUN_1def_0338();
      iStack_6 = 0;
      iStack_8 = 0x1bb4;
      iStack_a = -0x965;
      FUN_1def_0338();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      puVar12 = &uStack_18;
      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar3 = puVar12;
        puVar12 = puVar12 + 1;
        puVar17 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar3 = *puVar17;
      }
      func_0x00019593(0x22b2);
      iStack_6 = -0x8d1;
      uVar18 = func_0x00000398();
      *(undefined2 *)(unaff_BP + -0x742) = (int)uVar18;
      *(undefined2 *)(unaff_BP + -0x740) = (int)((ulong)uVar18 >> 0x10);
      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
      puVar17 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x742);
      puVar12 = (undefined2 *)puVar17;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar4 = puVar12;
        puVar12 = puVar12 + 1;
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar4 = *puVar3;
      }
      *(undefined2 *)(unaff_BP + -0x6e) = 1;
      *(undefined1 *)0xd14 = 2;
      do {
        do {
          *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 1;
          while (*(int *)0x150 < *(int *)(unaff_BP + -0x2fa)) {
LAB_3ab8_397d:
            do {
              do {
                *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0x150;
                func_0x0000c3ca();
                iStack_6 = *(undefined2 *)0xa38a;
                iStack_8 = *(int *)0xa388;
                iStack_a = *(int *)0xa38e;
                iStack_c = *(int *)0xa38c;
                uStack_e = *(undefined2 *)0xa38a;
                uStack_10 = *(undefined2 *)0xa388;
                uStack_12 = 0;
                uStack_14 = 0x7aa;
                uStack_16 = 0xfffe;
                uStack_18 = 0;
                pcVar5 = (code *)swi(0x3f);
                (*pcVar5)();
                iVar9 = 0x885;
                if (*(int *)0x158 != 0) {
                  FUN_3ab8_4d6f();
                  return;
                }
                do {
                  do {
                    uVar14 = 0;
                    iStack_8 = -0x1aab;
                    iStack_6 = iVar9;
                    func_0x00024c86();
                    iStack_6 = 0x22b2;
                    iStack_8 = -0x1a9b;
                    FUN_21f2_2d26();
                    pcVar5 = (code *)swi(0x3f);
                    (*pcVar5)();
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                    func_0x00029834();
                    func_0x000297e6();
                    func_0x00029d78();
                    FUN_28b3_1181();
                    if ((bool)uVar14) {
                      uVar14 = 0;
                      FUN_21f2_3454();
                    }
                    else {
                      func_0x000297e6();
                      func_0x00029d78();
                      iStack_6 = 0x22b2;
                      iStack_8 = -0x19fc;
                      func_0x000299d1();
                      iStack_6 = 0x5b37;
                      iStack_8 = unaff_BP + -0x54;
                      iStack_a = 0x22b2;
                      iStack_c = -0x19ef;
                      FUN_21f2_3454();
                      uVar14 = (undefined1 *)0xfff3 < &iStack_8;
                    }
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                    func_0x00029834();
                    func_0x000297e6();
                    func_0x00029d78();
                    FUN_28b3_1181();
                    if (!(bool)uVar14) {
                      if (*(int *)0x1092 % 1000 < 1) {
                        *(undefined2 *)0x1092 = 0;
                      }
                      iVar9 = *(int *)0x1092;
                      *(int *)(unaff_BP + -0x7c) = iVar9 / 1000;
                      if (0 < iVar9 / 1000) {
                        *(undefined2 *)0xc22 = 1;
                        iStack_6 = 0xe699;
                        FUN_21f2_3454();
                        iStack_6 = unaff_BP + -0x54;
                        iStack_8 = 0x22b2;
                        iStack_a = -0x194b;
                        FUN_1000_02b5();
                      }
                      FUN_21f2_2d26();
                      if (*(int *)0x1092 < 1) {
                        FUN_21f2_3454();
                      }
                      else {
                        iStack_6 = -0x1908;
                        FUN_21f2_3454();
                      }
                      FUN_21f2_2d26();
                      FUN_21f2_2d26();
                    }
                    FUN_1def_07a4();
                    *(undefined2 *)0xc20 = 1;
                    iStack_6 = 9999;
                    iStack_8 = 0x1bb4;
                    iVar13 = 0x1bb4;
                    iStack_a = -0x18b2;
                    iVar9 = FUN_1def_0904();
                    *(int *)(unaff_BP + -0x338) = iVar9;
                    *(undefined2 *)0xc20 = 0;
                    if (*(int *)0x158 != 0) {
                      FUN_3ab8_4d6f();
                      return;
                    }
                    if (iVar9 == -1) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 0;
                      iVar13 = 0x885;
                      func_0x0000c3ca();
                      iStack_6 = *(int *)0xa38a;
                      iStack_8 = *(int *)0xa388;
                      iStack_a = *(int *)0xa38e;
                      iStack_c = *(int *)0xa38c;
                      uStack_e = *(undefined2 *)0xa38a;
                      uStack_10 = *(undefined2 *)0xa388;
                      uStack_12 = 0;
                      uStack_14 = 0x7aa;
                      uStack_16 = 0xfffe;
                      uStack_18 = 0xd8f1;
                      pcVar5 = (code *)swi(0x3f);
                      iVar9 = (*pcVar5)();
                      if (iVar9 == -1) goto LAB_3ab8_397d;
                      if (*(int *)0x158 != 0) {
                        FUN_3ab8_4d6f();
                        return;
                      }
                    }
                    if (*(int *)(unaff_BP + -0x338) == 1) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 0;
                      pcVar5 = (code *)swi(0x3f);
                      (*pcVar5)();
                    }
                    if (*(int *)(unaff_BP + -0x338) == 2) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 0;
                      pcVar5 = (code *)swi(0x3f);
                      uVar6 = (*pcVar5)();
                      *(undefined2 *)(unaff_BP + -0x6a) = uVar6;
                    }
                    if (*(int *)0x158 != 0) {
                      FUN_3ab8_4d6f();
                      return;
                    }
                    do {
                      if (*(int *)(unaff_BP + -0x338) != 3) goto LAB_3ab8_3d17;
                      *(undefined2 *)(unaff_BP + -0x8e) = 0;
                      *(int *)(unaff_BP + -0x340) = *(int *)0x1092 % 1000;
                      FUN_28b3_0d8b();
                      func_0x00029983();
                      iVar9 = *(int *)0x1092;
                      *(int *)(unaff_BP + -0x7c) = iVar9 / 1000;
                      *(int *)(unaff_BP + -0x340) = iVar9 / 1000;
                      FUN_28b3_0d8b();
                      func_0x00029983();
                      func_0x0001bb4e();
                      iStack_6 = 0xe854;
                      func_0x00012276();
                      iStack_6 = 0xe85e;
                      func_0x00012276();
                      iStack_6 = unaff_BP + -0x33c;
                      iStack_8 = unaff_BP + -0x336;
                      iStack_a = unaff_BP + -0x88;
                      iStack_c = unaff_BP + -0x80;
                      uStack_e = 0x11f2;
                      iVar13 = 0xad;
                      uStack_10 = 0xe87f;
                      uVar7 = func_0x000021a4();
                      *(uint *)(unaff_BP + -0x6a) = uVar7;
                      if (*(int *)0x158 != 0) {
                        FUN_3ab8_4d6f();
                        return;
                      }
                      if (uVar7 == 0xffff) goto LAB_3ab8_3d17;
                      uVar14 = uVar7 < 99;
                      uVar16 = uVar7 == 99;
                    } while ((bool)uVar16);
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    FUN_28b3_1181();
                    if ((bool)uVar14) {
                      uVar6 = *(undefined2 *)0xa362;
                      *(undefined2 *)(unaff_BP + -0x88) = *(undefined2 *)0xa360;
                      *(undefined2 *)(unaff_BP + -0x86) = uVar6;
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar14 || (bool)uVar16) {
                      func_0x00029834();
                      func_0x000297e6();
                      func_0x00029d78();
                      FUN_28b3_1181();
                      if (!(bool)uVar14) goto LAB_3ab8_3e6c;
                      func_0x000297e6();
                      func_0x00029d78();
                      uVar6 = FUN_28b3_0f51();
                      *(undefined2 *)0x1092 = uVar6;
                    }
                    else {
LAB_3ab8_3e6c:
                      *(undefined2 *)0x1092 = 0;
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    uVar15 = uVar14;
                    if ((bool)uVar14 || (bool)uVar16) {
                      func_0x00029834();
                      func_0x000297e6();
                      func_0x00029d78();
                      FUN_28b3_1181();
                      uVar15 = 0;
                      if ((bool)uVar14) {
                        func_0x000297e6();
                        func_0x00029d78();
                        iVar9 = FUN_28b3_0f51();
                        uVar7 = iVar9 * 1000;
                        *(uint *)(unaff_BP + -0x7c) = uVar7;
                        puVar1 = (uint *)0x1092;
                        uVar15 = CARRY2(*puVar1,uVar7);
                        *puVar1 = *puVar1 + uVar7;
                        uVar16 = *puVar1 == 0;
                      }
                    }
                    *(undefined2 *)(unaff_BP + -0x2f8) = 0;
                    func_0x000297e6();
                    func_0x000297e6();
                    iVar13 = 0x22b2;
                    FUN_28b3_1181();
                    if (!(bool)uVar15 && !(bool)uVar16) {
                      *(undefined2 *)(unaff_BP + -0x2f8) = 1;
                    }
LAB_3ab8_3d17:
                    iVar9 = iVar13;
                  } while (*(int *)(unaff_BP + -0x8e) == 0);
                  iStack_6 = *(int *)(unaff_BP + -0x8e);
                  iVar9 = 0x11f2;
                  iStack_a = -0x174c;
                  iStack_8 = iVar13;
                  iVar13 = func_0x00015409();
                } while (iVar13 == 0);
                if (((*(char *)0x7e != '\0') && (*(char *)0xd14 != '\x04')) && (1 < *(byte *)0x84))
                {
                  func_0x0000c3ca();
                  iStack_6 = unaff_BP + -0x2f6;
                  iStack_8 = 0x885;
                  iStack_a = -0x1716;
                  func_0x0001263c();
                  iStack_6 = unaff_BP + -0x2f6;
                  iStack_8 = 1;
                  pcVar5 = (code *)swi(0x3f);
                  (*pcVar5)();
                  *(undefined1 *)0xd14 = 2;
                }
                func_0x0000c3ca();
                *(undefined2 *)0xbc0 = 1;
                iStack_6 = -0x16e2;
                func_0x0000daa6();
                uVar6 = *(undefined2 *)(unaff_BP + -0x334);
                *(undefined2 *)(unaff_BP + -0x2fe) = *(undefined2 *)(unaff_BP + -0x336);
                *(undefined2 *)(unaff_BP + -0x2fc) = uVar6;
                uVar6 = *(undefined2 *)(unaff_BP + -0x33a);
                *(undefined2 *)(unaff_BP + -0x314) = *(undefined2 *)(unaff_BP + -0x33c);
                *(undefined2 *)(unaff_BP + -0x312) = uVar6;
                *(undefined2 *)0xbc2 = 0;
                *(undefined2 *)(unaff_BP + -0x306) = 0;
                uVar6 = *(undefined2 *)0xa360;
                uVar10 = *(undefined2 *)0xa362;
                *(undefined2 *)(unaff_BP + -0x84) = uVar6;
                *(undefined2 *)(unaff_BP + -0x82) = uVar10;
                *(undefined2 *)(unaff_BP + -0x8c) = uVar6;
                *(undefined2 *)(unaff_BP + -0x8a) = uVar10;
                *(undefined2 *)(unaff_BP + -0x2fa) = 1;
                while (*(int *)(unaff_BP + -0x2fa) <= *(int *)0x150) {
                  iStack_6 = -0x1584;
                  uVar18 = func_0x00000398();
                  if (*(byte *)((int)uVar18 + 0x14) < 0x5a) {
                    iStack_6 = -0x156f;
                    uVar18 = func_0x00000398();
                    if ((*(byte *)((int)uVar18 + 0x16) & 2) != 0) {
                      iStack_6 = 0xeaa6;
                      puVar17 = (undefined2 *)func_0x00000398();
                      puVar12 = (undefined2 *)puVar17;
                      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                        puVar4 = puVar11;
                        puVar11 = puVar11 + 1;
                        puVar3 = puVar12;
                        puVar12 = puVar12 + 1;
                        *puVar4 = *puVar3;
                      }
                      *(int *)(unaff_BP + -0x306) = *(int *)(unaff_BP + -0x306) + 1;
                      func_0x000297e6();
                      FUN_28b3_100d();
                      iStack_6 = 0xead8;
                      func_0x00029bb5();
                      func_0x00029983();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      iStack_6 = -0x1506;
                      func_0x00029bb5();
                      func_0x00029983();
                    }
                  }
                  *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 1;
                }
              } while (*(int *)(unaff_BP + -0x306) == 0);
              func_0x00029834();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x000297e6();
              func_0x00029b6d();
              FUN_28b3_117c();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xeb58;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = -0x14a3;
              FUN_28b3_1582();
              uVar14 = (undefined1 *)0xfff7 < &iStack_8;
              func_0x00029834();
              func_0x0002996b();
              func_0x00029d78();
              FUN_28b3_1181();
            } while ((bool)uVar14);
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029983();
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar14) {
              *(undefined2 *)(unaff_BP + -0x6a) = 0;
              uVar6 = *(undefined2 *)0xa3de;
              *(undefined2 *)(unaff_BP + -0x58) = *(undefined2 *)0xa3dc;
              *(undefined2 *)(unaff_BP + -0x56) = uVar6;
              *(undefined2 *)(unaff_BP + -0x2fa) = 1;
              while (*(int *)(unaff_BP + -0x2fa) <= *(int *)0x150) {
                iStack_6 = 0xf2bc;
                uVar18 = func_0x00000398();
                if (*(byte *)((int)uVar18 + 0x14) < 0x5a) {
                  iStack_6 = 0xf2d4;
                  uVar18 = func_0x00000398();
                  uVar14 = 0;
                  uVar16 = (*(byte *)((int)uVar18 + 0x16) & 2) == 0;
                  if (!(bool)uVar16) {
                    iStack_6 = 0xf2e9;
                    puVar17 = (undefined2 *)func_0x00000398();
                    puVar12 = (undefined2 *)puVar17;
                    puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                      puVar4 = puVar11;
                      puVar11 = puVar11 + 1;
                      puVar3 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar4 = *puVar3;
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x000297e6();
                    func_0x00029b6d();
                    FUN_28b3_1163();
                    func_0x0002996b();
                    FUN_28b3_1181();
                    if (!(bool)uVar14 && !(bool)uVar16) {
                      func_0x000297e6();
                      func_0x00029983();
                      *(undefined2 *)(unaff_BP + -0x6a) = *(undefined2 *)(unaff_BP + -0x2fa);
                    }
                  }
                }
                *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 1;
              }
              iStack_6 = 0xf36a;
              puVar17 = (undefined2 *)func_0x00000398();
              uVar6 = ((undefined2 *)puVar17)[1];
              *(undefined2 *)(unaff_BP + -0x84) = *puVar17;
              *(undefined2 *)(unaff_BP + -0x82) = uVar6;
              iStack_6 = -0xc7a;
              uVar18 = func_0x00000398();
              uVar10 = (undefined2)((ulong)uVar18 >> 0x10);
              uVar6 = *(undefined2 *)((int)uVar18 + 4);
              uVar10 = *(undefined2 *)((int)uVar18 + 6);
              *(undefined2 *)(unaff_BP + -0x8c) = uVar6;
              *(undefined2 *)(unaff_BP + -0x8a) = uVar10;
              if (*(int *)0xcb6 == 0) {
                *(undefined2 *)(unaff_BP + -0x314) = uVar6;
                *(undefined2 *)(unaff_BP + -0x312) = uVar10;
              }
              *(undefined2 *)(unaff_BP + -0x2fa) = 1;
              while (*(int *)(unaff_BP + -0x2fa) <= *(int *)0x150) {
                iStack_6 = -0xc44;
                uVar18 = func_0x00000398();
                if (*(byte *)((int)uVar18 + 0x14) < 0x5a) {
                  iStack_6 = -0xc2c;
                  uVar18 = func_0x00000398();
                  if ((*(byte *)((int)uVar18 + 0x16) & 2) != 0) {
                    iStack_6 = -0xc14;
                    puVar17 = (undefined2 *)func_0x00000398();
                    puVar12 = (undefined2 *)puVar17;
                    puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                      puVar4 = puVar11;
                      puVar11 = puVar11 + 1;
                      puVar3 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar4 = *puVar3;
                    }
                    puVar12 = &uStack_18;
                    puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                      puVar3 = puVar12;
                      puVar12 = puVar12 + 1;
                      puVar17 = puVar11;
                      puVar11 = puVar11 + 1;
                      *puVar3 = *puVar17;
                    }
                    func_0x00019593(0);
                    func_0x000297e6();
                    func_0x00029d78();
                    iStack_a = 0x22b2;
                    iStack_c = 0xf42f;
                    func_0x000299d1();
                    iStack_a = 0x22b2;
                    iStack_c = 0xf438;
                    func_0x000297e6();
                    iStack_a = 0x22b2;
                    iStack_c = -0xbc3;
                    func_0x00029d78();
                    uStack_12 = 0x22b2;
                    uStack_14 = 0xf447;
                    func_0x000299d1();
                    uStack_12 = 0x22b2;
                    uStack_14 = 0xf450;
                    func_0x000297e6();
                    uStack_12 = 0x22b2;
                    uStack_14 = 0xf455;
                    func_0x00029d78();
                    func_0x000299d1();
                    func_0x000297e6();
                    func_0x00029d78();
                    func_0x000299d1(0x22b2);
                    iVar9 = FUN_1def_043a(0x22b2);
                    if (iVar9 != 0) {
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029b6d();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029b6d();
                      FUN_28b3_1163();
                      func_0x00029983();
                      uVar6 = *(undefined2 *)(unaff_BP + -0x2fc);
                      *(undefined2 *)(unaff_BP + -0x32e) = *(undefined2 *)(unaff_BP + -0x2fe);
                      *(undefined2 *)(unaff_BP + -0x32c) = uVar6;
                      func_0x000297e6();
                      func_0x00029bb5();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029bb5();
                      func_0x0002996b();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029983();
                      iStack_6 = -0xace;
                      uVar18 = func_0x00000398();
                      *(undefined2 *)(unaff_BP + -0x768) = (int)uVar18;
                      *(undefined2 *)(unaff_BP + -0x766) = (int)((ulong)uVar18 >> 0x10);
                      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                      puVar17 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x768);
                      puVar12 = (undefined2 *)puVar17;
                      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                        puVar4 = puVar12;
                        puVar12 = puVar12 + 1;
                        puVar3 = puVar11;
                        puVar11 = puVar11 + 1;
                        *puVar4 = *puVar3;
                      }
                    }
                  }
                }
                *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 1;
              }
            }
            else {
              *(int *)(unaff_BP + -0x72a) = *(int *)0x1092 % 1000 << 1;
              *(int *)(unaff_BP + -0x7c) = *(int *)0x1092 / 1000;
              *(undefined1 *)(unaff_BP + -0x534) = 0;
              *(undefined1 *)(unaff_BP + -0x728) = 0;
              *(undefined2 *)(unaff_BP + -0x78) = 1;
              FUN_10ad_1871();
LAB_3ab8_4080:
              *(undefined2 *)(unaff_BP + -0x6a) = 0;
              uVar6 = *(undefined2 *)0xa3de;
              *(undefined2 *)(unaff_BP + -0x58) = *(undefined2 *)0xa3dc;
              *(undefined2 *)(unaff_BP + -0x56) = uVar6;
              *(undefined2 *)(unaff_BP + -0x2fa) = 1;
              while (*(int *)(unaff_BP + -0x2fa) <= *(int *)0x150) {
                iStack_6 = -0x13dc;
                uVar18 = func_0x00000398();
                if (*(byte *)((int)uVar18 + 0x14) < 0x5a) {
                  iStack_6 = -0x13c4;
                  uVar18 = func_0x00000398();
                  if ((*(byte *)((int)uVar18 + 0x16) & 2) != 0) {
                    iStack_6 = -0x13ac;
                    uVar18 = func_0x00000398();
                    uVar14 = 0;
                    uVar16 = (*(byte *)((int)uVar18 + 0x16) & 1) == 0;
                    if ((bool)uVar16) {
                      iStack_6 = -0x1397;
                      puVar17 = (undefined2 *)func_0x00000398();
                      puVar12 = (undefined2 *)puVar17;
                      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                        puVar4 = puVar11;
                        puVar11 = puVar11 + 1;
                        puVar3 = puVar12;
                        puVar12 = puVar12 + 1;
                        *puVar4 = *puVar3;
                      }
                      func_0x000297e6();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x000297e6();
                      func_0x00029b6d();
                      FUN_28b3_1163();
                      func_0x0002996b();
                      FUN_28b3_1181();
                      if (!(bool)uVar14 && !(bool)uVar16) {
                        func_0x000297e6();
                        func_0x00029983();
                        *(undefined2 *)(unaff_BP + -0x6a) = *(undefined2 *)(unaff_BP + -0x2fa);
                      }
                    }
                  }
                }
                *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 1;
              }
              if (0 < *(int *)(unaff_BP + -0x6a)) {
                iStack_6 = 0xecf3;
                puVar17 = (undefined2 *)func_0x00000398();
                puVar12 = (undefined2 *)puVar17;
                puVar11 = (undefined2 *)(unaff_BP + -0x742);
                for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                  puVar4 = puVar11;
                  puVar11 = puVar11 + 1;
                  puVar3 = puVar12;
                  puVar12 = puVar12 + 1;
                  *puVar4 = *puVar3;
                }
                iStack_6 = unaff_BP + -0x1ca;
                iStack_8 = 0;
                uVar6 = 0x18b3;
                iStack_a = -0x12e9;
                FUN_1885_0344();
                if (((*(int *)(unaff_BP + -0x78) == 0) &&
                    ((0 < *(int *)(unaff_BP + -0x7c) || (*(int *)(unaff_BP + -0x2f8) != 0)))) &&
                   (0 < *(int *)(unaff_BP + -0x72a))) {
                  uVar6 = 0x22b2;
                  iStack_6 = 0xed3e;
                  uVar7 = func_0x00024ce4();
                  if (1 < uVar7) {
                    *(undefined2 *)(unaff_BP + -0x2fa) = 0;
                    while ((iVar9 = *(int *)(unaff_BP + -0x2fa),
                           *(char *)(unaff_BP + iVar9 + -0x1ca) == *(char *)(unaff_BP + -0x310) &&
                           (*(char *)(unaff_BP + iVar9 + -0x1c9) == *(char *)(unaff_BP + -0x30f))))
                    {
                      *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 2;
                    }
                    if ((*(char *)(unaff_BP + iVar9 + -0x1ca) == '^') &&
                       (*(char *)(unaff_BP + iVar9 + -0x1c9) == 'm')) {
                      *(undefined2 *)(unaff_BP + -0x2fa) = 0;
                    }
                  }
                }
                iStack_8 = -0x126a;
                iStack_6 = uVar6;
                FUN_21f2_2d26();
                *(undefined2 *)(unaff_BP + -0x78) = 0;
                iStack_6 = 0xeda7;
                uVar6 = func_0x00024ce4();
                *(undefined2 *)(unaff_BP + -0x33e) = uVar6;
                iStack_6 = 0xedb4;
                func_0x000190c7();
                if (*(int *)(unaff_BP + -0x72a) == 0) {
                  func_0x000297e6();
                  func_0x00029bb5();
                  func_0x00029983();
                  uVar6 = *(undefined2 *)(unaff_BP + -0x314);
                  uVar10 = *(undefined2 *)(unaff_BP + -0x312);
                  *(undefined2 *)(unaff_BP + -0x73e) = uVar6;
                  *(undefined2 *)(unaff_BP + -0x73c) = uVar10;
                  *(undefined2 *)(unaff_BP + -0x736) = uVar6;
                  *(undefined2 *)(unaff_BP + -0x734) = uVar10;
                  puVar12 = (undefined2 *)&stack0xffe6;
                  puVar11 = (undefined2 *)(unaff_BP + -0x742);
                  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                    puVar3 = puVar12;
                    puVar12 = puVar12 + 1;
                    puVar17 = puVar11;
                    puVar11 = puVar11 + 1;
                    *puVar3 = *puVar17;
                  }
                  FUN_3ab8_3743();
                  *(undefined1 *)(unaff_BP + -0x534) = 0;
                  iStack_6 = 0xee1c;
                  uVar18 = func_0x00000398();
                  pbVar2 = (byte *)((int)uVar18 + 0x16);
                  *pbVar2 = *pbVar2 | 1;
                  iStack_6 = 0xee2f;
                  uVar18 = func_0x00000398();
                  pbVar2 = (byte *)((int)uVar18 + 0x16);
                  *pbVar2 = *pbVar2 | 2;
                  func_0x000297e6();
                  func_0x00029b85();
                  iStack_6 = -0x11ab;
                  func_0x00029b55();
                  func_0x00029983();
                }
                else {
                  while( true ) {
                    *(undefined2 *)(unaff_BP + -0x75c) = 0;
                    iStack_6 = 0xf17e;
                    uVar6 = func_0x00024ce4();
                    *(undefined2 *)(unaff_BP + -0x33e) = uVar6;
                    iStack_6 = unaff_BP + -0x534;
                    iStack_8 = 0x22b2;
                    iStack_a = -0xe6e;
                    iVar9 = FUN_1885_0406();
                    if (iVar9 == -1) {
                      *(undefined2 *)(unaff_BP + -0x75c) = 1;
                    }
                    if ((*(int *)(unaff_BP + -0x75c) == 0) &&
                       (*(int *)(unaff_BP + -0x33e) <= *(int *)(unaff_BP + -0x72a))) break;
                    iStack_6 = 0x18b3;
                    iStack_8 = -0xe40;
                    FUN_21f2_3454();
                    iStack_6 = 0x22b2;
                    iStack_8 = -0xe30;
                    FUN_21f2_3454();
                    iStack_6 = 0x22b2;
                    iStack_8 = -0xe1f;
                    FUN_21f2_3454();
                    iVar9 = *(int *)(unaff_BP + -0x72a);
                    *(int *)(unaff_BP + -0x340) = iVar9;
                    if (*(int *)(unaff_BP + -0x33e) < iVar9) {
                      *(undefined2 *)(unaff_BP + -0x340) = *(undefined2 *)(unaff_BP + -0x33e);
                    }
                    *(undefined2 *)(unaff_BP + -0x760) = 0;
                    while (*(int *)(unaff_BP + -0x760) < *(int *)(unaff_BP + -0x340)) {
                      iStack_6 = 0x22b2;
                      iStack_8 = -0x118a;
                      iVar9 = FUN_3ab8_38d9();
                      if (iVar9 != 0) {
                        *(undefined2 *)(unaff_BP + -0x78) = 1;
                        *(undefined2 *)(unaff_BP + -0x340) = *(undefined2 *)(unaff_BP + -0x760);
                        break;
                      }
                      *(int *)(unaff_BP + -0x760) = *(int *)(unaff_BP + -0x760) + 1;
                    }
                    *(undefined2 *)(unaff_BP + -0x760) = 0;
                    iVar9 = 0x22b2;
                    while (*(int *)(unaff_BP + -0x760) < *(int *)(unaff_BP + -0x340)) {
                      iStack_6 = unaff_BP + -0x534;
                      iStack_a = -0x1162;
                      iStack_8 = iVar9;
                      iVar9 = FUN_1885_0406();
                      if (0 < iVar9) {
                        *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 2;
                      }
                      *(int *)(unaff_BP + -0x760) = *(int *)(unaff_BP + -0x760) + 1;
                      iVar9 = 0x18b3;
                    }
                    iStack_8 = -0x113a;
                    iStack_6 = iVar9;
                    iVar9 = func_0x0002aa38();
                    *(int *)(unaff_BP + -0x76a) = iVar9;
                    if (iVar9 == 2) {
                      *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + -1;
                    }
                    iVar9 = *(int *)(unaff_BP + -0x340);
                    uVar7 = (uint)*(byte *)(unaff_BP + iVar9 + -0x534);
                    *(uint *)(unaff_BP + -0x76a) = uVar7;
                    uVar8 = (uint)*(byte *)(unaff_BP + iVar9 + -0x533);
                    *(uint *)(unaff_BP + -0x76c) = uVar8;
                    *(undefined2 *)(unaff_BP + -0x316) = 0;
                    if ((*(int *)(unaff_BP + -0x72a) < 0x9f) &&
                       (((uVar7 == *(byte *)(unaff_BP + -0x764) &&
                         (uVar8 == *(byte *)(unaff_BP + -0x763))) ||
                        (((uint)*(byte *)(unaff_BP + -0x768) == *(uint *)(unaff_BP + -0x76a) &&
                         (*(byte *)(unaff_BP + -0x767) == uVar8)))))) {
                      *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 2;
                      *(undefined2 *)(unaff_BP + -0x316) = 1;
                    }
                    iStack_6 = 0x2a75;
                    iStack_8 = -0x10c7;
                    iVar9 = FUN_3ab8_38d9();
                    if (iVar9 != 0) {
                      *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 2;
                    }
                    iStack_6 = 0x2a75;
                    iStack_8 = -0x10ad;
                    iVar9 = FUN_3ab8_38d9();
                    if (iVar9 != 0) {
                      *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 1;
                    }
                    *(undefined2 *)(unaff_BP + -0x760) = *(undefined2 *)(unaff_BP + -0x340);
                    *(undefined2 *)(unaff_BP + -0x76c) = 0;
                    while (*(int *)(unaff_BP + -0x760) <= *(int *)(unaff_BP + -0x33e)) {
                      *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x76c) + -0x534) =
                           *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x760) + -0x534);
                      *(int *)(unaff_BP + -0x760) = *(int *)(unaff_BP + -0x760) + 1;
                      *(int *)(unaff_BP + -0x76c) = *(int *)(unaff_BP + -0x76c) + 1;
                    }
                    *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x76c) + -0x534) = 0;
                    *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x340) + -0x728) = 0;
                    func_0x000297e6();
                    func_0x00029bb5();
                    func_0x00029983();
                    uVar6 = *(undefined2 *)(unaff_BP + -0x314);
                    uVar10 = *(undefined2 *)(unaff_BP + -0x312);
                    *(undefined2 *)(unaff_BP + -0x73e) = uVar6;
                    *(undefined2 *)(unaff_BP + -0x73c) = uVar10;
                    *(undefined2 *)(unaff_BP + -0x736) = uVar6;
                    *(undefined2 *)(unaff_BP + -0x734) = uVar10;
                    puVar12 = (undefined2 *)&stack0xffe6;
                    puVar11 = (undefined2 *)(unaff_BP + -0x742);
                    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                      puVar3 = puVar12;
                      puVar12 = puVar12 + 1;
                      puVar17 = puVar11;
                      puVar11 = puVar11 + 1;
                      *puVar3 = *puVar17;
                    }
                    FUN_3ab8_3743();
                    iStack_6 = 0xeff9;
                    uVar18 = func_0x00000398();
                    pbVar2 = (byte *)((int)uVar18 + 0x16);
                    *pbVar2 = *pbVar2 | 1;
                    iStack_6 = 0xf00c;
                    uVar18 = func_0x00000398();
                    pbVar2 = (byte *)((int)uVar18 + 0x16);
                    *pbVar2 = *pbVar2 | 2;
                    func_0x000297e6();
                    func_0x00029b85();
                    iStack_6 = 0xf032;
                    func_0x00029b55();
                    func_0x00029983();
                    *(undefined2 *)(unaff_BP + -0x340) = *(undefined2 *)(unaff_BP + -0x72a);
                    uVar6 = 0x22b2;
                    iStack_6 = 0xf04a;
                    iVar9 = func_0x00024ce4();
                    *(int *)(unaff_BP + -0x33e) = iVar9;
                    if ((((0 < *(int *)(unaff_BP + -0x7c)) && (0 < *(int *)(unaff_BP + -0x340))) &&
                        (0 < iVar9)) && (*(int *)(unaff_BP + -0x78) == 0)) {
                      *(undefined1 *)(unaff_BP + -0x728) = 0;
                      *(undefined2 *)(unaff_BP + -0x304) = 1;
                      while (*(int *)(unaff_BP + -0x304) <= *(int *)(unaff_BP + -0x7c)) {
                        iStack_6 = 0x22b2;
                        iStack_8 = -0xf7b;
                        FUN_21f2_2d26();
                        *(int *)(unaff_BP + -0x304) = *(int *)(unaff_BP + -0x304) + 1;
                      }
                      iStack_6 = 0x22b2;
                      iStack_8 = -0xf5d;
                      FUN_21f2_2d26();
                      iStack_6 = 0x22b2;
                      iStack_8 = -0xf4c;
                      func_0x00024c86();
                      iStack_6 = unaff_BP + -0x534;
                      iStack_8 = 0x22b2;
                      iStack_a = 0xf0c7;
                      iVar9 = FUN_1885_0406();
                      if (iVar9 == -1) {
                        *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 2;
                      }
                      iStack_6 = unaff_BP + -0x534;
                      iStack_8 = 0x18b3;
                      uVar6 = 0x18b3;
                      iStack_a = -0xf1c;
                      iVar9 = FUN_1885_0406();
                      if (iVar9 == -1) {
                        *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 1;
                      }
                    }
                    if (((*(int *)(unaff_BP + -0x33e) < 1) && (*(int *)(unaff_BP + -0x316) != 0)) &&
                       (*(int *)(unaff_BP + -0x75c) == 0)) {
                      *(undefined1 *)(unaff_BP + -0x534) = 0;
                      *(undefined2 *)(unaff_BP + -0x304) = 1;
                      iStack_6 = uVar6;
                      while (*(int *)(unaff_BP + -0x304) <= *(int *)(unaff_BP + -0x7c)) {
                        iStack_8 = -0xee1;
                        FUN_21f2_2d26();
                        *(int *)(unaff_BP + -0x304) = *(int *)(unaff_BP + -0x304) + 1;
                        iStack_6 = 0x22b2;
                      }
                    }
                    iStack_6 = -0xec8;
                    uVar6 = func_0x00024ce4();
                    *(undefined2 *)(unaff_BP + -0x33e) = uVar6;
                    *(undefined2 *)(unaff_BP + -0x316) = 0;
                    *(undefined2 *)(unaff_BP + -0x78) = 0;
                    if (*(int *)(unaff_BP + -0x75c) != 0) {
                      *(undefined2 *)(unaff_BP + -0x78) = 1;
                    }
                    if ((*(int *)(unaff_BP + -0x33e) < 1) ||
                       ((*(int *)(unaff_BP + -0x33e) < *(int *)(unaff_BP + -0x340) &&
                        (*(int *)(unaff_BP + -0x75c) == 0)))) break;
                  }
                }
                goto LAB_3ab8_4080;
              }
              if (0 < *(int *)(unaff_BP + -0x72a)) {
                iStack_6 = -0xdea;
                iVar9 = func_0x00024ce4();
                if (iVar9 != 0) {
                  func_0x000297e6();
                  func_0x00029bb5();
                  func_0x00029983();
                  uVar6 = *(undefined2 *)(unaff_BP + -0x314);
                  uVar10 = *(undefined2 *)(unaff_BP + -0x312);
                  *(undefined2 *)(unaff_BP + -0x73e) = uVar6;
                  *(undefined2 *)(unaff_BP + -0x73c) = uVar10;
                  *(undefined2 *)(unaff_BP + -0x736) = uVar6;
                  *(undefined2 *)(unaff_BP + -0x734) = uVar10;
                  puVar12 = (undefined2 *)&stack0xffe6;
                  puVar11 = (undefined2 *)(unaff_BP + -0x742);
                  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                    puVar3 = puVar12;
                    puVar12 = puVar12 + 1;
                    puVar17 = puVar11;
                    puVar11 = puVar11 + 1;
                    *puVar3 = *puVar17;
                  }
                  FUN_3ab8_3743();
                  iStack_6 = 0xf273;
                  uVar18 = func_0x00000398();
                  pbVar2 = (byte *)((int)uVar18 + 0x16);
                  *pbVar2 = *pbVar2 | 1;
                  iStack_6 = -0xd7a;
                  uVar18 = func_0x00000398();
                  pbVar2 = (byte *)((int)uVar18 + 0x16);
                  *pbVar2 = *pbVar2 | 2;
                }
              }
              FUN_10ad_1871();
            }
            *(undefined2 *)(unaff_BP + -0x2fa) = 1;
          }
          iStack_6 = -0x898;
          uVar18 = func_0x00000398();
        } while (0x59 < *(byte *)((int)uVar18 + 0x14));
        iStack_6 = -0x883;
        uVar18 = func_0x00000398();
      } while ((*(byte *)((int)uVar18 + 0x16) & 2) == 0);
      iStack_6 = 0xf792;
      puVar17 = (undefined2 *)func_0x00000398();
      puVar12 = (undefined2 *)puVar17;
      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar4 = puVar11;
        puVar11 = puVar11 + 1;
        puVar3 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar4 = *puVar3;
      }
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      func_0x00029b85();
      func_0x00029bb5();
      func_0x0002996b();
      FUN_28b3_0ee9();
      if (*(int *)0x1096 == 1) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_117c();
        func_0x00029983();
      }
      uVar14 = *(uint *)0x1096 < 2;
      if (*(uint *)0x1096 == 2) {
        func_0x000297e6();
        iStack_6 = 0xf848;
        func_0x00029b55();
        func_0x00029983();
      }
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029bb5();
      func_0x00029983();
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
    } while ((bool)uVar14);
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029bb5();
    func_0x00029983();
    if ((*(byte *)(unaff_BP + -0x318) & 0x20) == 0) {
      FUN_3ab8_49e1();
      return;
    }
  } while( true );
}



/* 3ab8:4c91  FUN_3ab8_4c91  222 bytes, 1 callers */

void FUN_3ab8_4c91(void)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined2 uVar10;
  int unaff_BP;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 *puVar17;
  undefined4 uVar18;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  do {
    func_0x00029c2c();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_117c();
    func_0x00029983();
    do {
      uVar15 = *(uint *)0x1096 < 2;
      if (*(uint *)0x1096 == 2) {
        func_0x000297e6();
        iStack_6 = 0xf848;
        func_0x00029b55();
        func_0x00029983();
      }
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029bb5();
      func_0x00029983();
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar15) {
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b85();
        func_0x00029bb5();
        func_0x00029983();
        if ((*(byte *)(unaff_BP + -0x318) & 0x20) == 0) {
          FUN_3ab8_49e1();
          return;
        }
        FUN_28b3_0d8b();
        func_0x00029983();
        if (*(int *)0x1098 == 1) {
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029b85();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
        }
        if (*(int *)0x1098 == 2) {
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029b85();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029bb5();
        func_0x00029983();
      }
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      iStack_6 = 0;
      iStack_8 = 0x22b2;
      iStack_a = 0xf686;
      FUN_1def_0338();
      iStack_6 = 0;
      iStack_8 = 0x1bb4;
      iStack_a = -0x965;
      FUN_1def_0338();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      puVar12 = &uStack_18;
      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar3 = puVar12;
        puVar12 = puVar12 + 1;
        puVar17 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar3 = *puVar17;
      }
      func_0x00019593(0x22b2);
      iStack_6 = -0x8d1;
      uVar18 = func_0x00000398();
      *(undefined2 *)(unaff_BP + -0x742) = (int)uVar18;
      *(undefined2 *)(unaff_BP + -0x740) = (int)((ulong)uVar18 >> 0x10);
      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
      puVar17 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x742);
      puVar12 = (undefined2 *)puVar17;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar4 = puVar12;
        puVar12 = puVar12 + 1;
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar4 = *puVar3;
      }
      *(undefined2 *)(unaff_BP + -0x6e) = 1;
      *(undefined1 *)0xd14 = 2;
      do {
        do {
          *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 1;
          while (*(int *)0x150 < *(int *)(unaff_BP + -0x2fa)) {
LAB_3ab8_397d:
            do {
              do {
                *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0x150;
                func_0x0000c3ca();
                iStack_6 = *(undefined2 *)0xa38a;
                iStack_8 = *(int *)0xa388;
                iStack_a = *(int *)0xa38e;
                iStack_c = *(int *)0xa38c;
                uStack_e = *(undefined2 *)0xa38a;
                uStack_10 = *(undefined2 *)0xa388;
                uStack_12 = 0;
                uStack_14 = 0x7aa;
                uStack_16 = 0xfffe;
                uStack_18 = 0;
                pcVar5 = (code *)swi(0x3f);
                (*pcVar5)();
                iVar9 = 0x885;
                if (*(int *)0x158 != 0) {
                  FUN_3ab8_4d6f();
                  return;
                }
                do {
                  do {
                    uVar15 = 0;
                    iStack_8 = -0x1aab;
                    iStack_6 = iVar9;
                    func_0x00024c86();
                    iStack_6 = 0x22b2;
                    iStack_8 = -0x1a9b;
                    FUN_21f2_2d26();
                    pcVar5 = (code *)swi(0x3f);
                    (*pcVar5)();
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                    func_0x00029834();
                    func_0x000297e6();
                    func_0x00029d78();
                    FUN_28b3_1181();
                    if ((bool)uVar15) {
                      uVar15 = 0;
                      FUN_21f2_3454();
                    }
                    else {
                      func_0x000297e6();
                      func_0x00029d78();
                      iStack_6 = 0x22b2;
                      iStack_8 = -0x19fc;
                      func_0x000299d1();
                      iStack_6 = 0x5b37;
                      iStack_8 = unaff_BP + -0x54;
                      iStack_a = 0x22b2;
                      iStack_c = -0x19ef;
                      FUN_21f2_3454();
                      uVar15 = (undefined1 *)0xfff3 < &iStack_8;
                    }
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                    func_0x00029834();
                    func_0x000297e6();
                    func_0x00029d78();
                    FUN_28b3_1181();
                    if (!(bool)uVar15) {
                      if (*(int *)0x1092 % 1000 < 1) {
                        *(undefined2 *)0x1092 = 0;
                      }
                      iVar9 = *(int *)0x1092;
                      *(int *)(unaff_BP + -0x7c) = iVar9 / 1000;
                      if (0 < iVar9 / 1000) {
                        *(undefined2 *)0xc22 = 1;
                        iStack_6 = 0xe699;
                        FUN_21f2_3454();
                        iStack_6 = unaff_BP + -0x54;
                        iStack_8 = 0x22b2;
                        iStack_a = -0x194b;
                        FUN_1000_02b5();
                      }
                      FUN_21f2_2d26();
                      if (*(int *)0x1092 < 1) {
                        FUN_21f2_3454();
                      }
                      else {
                        iStack_6 = -0x1908;
                        FUN_21f2_3454();
                      }
                      FUN_21f2_2d26();
                      FUN_21f2_2d26();
                    }
                    FUN_1def_07a4();
                    *(undefined2 *)0xc20 = 1;
                    iStack_6 = 9999;
                    iStack_8 = 0x1bb4;
                    iVar13 = 0x1bb4;
                    iStack_a = -0x18b2;
                    iVar9 = FUN_1def_0904();
                    *(int *)(unaff_BP + -0x338) = iVar9;
                    *(undefined2 *)0xc20 = 0;
                    if (*(int *)0x158 != 0) {
                      FUN_3ab8_4d6f();
                      return;
                    }
                    if (iVar9 == -1) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 0;
                      iVar13 = 0x885;
                      func_0x0000c3ca();
                      iStack_6 = *(int *)0xa38a;
                      iStack_8 = *(int *)0xa388;
                      iStack_a = *(int *)0xa38e;
                      iStack_c = *(int *)0xa38c;
                      uStack_e = *(undefined2 *)0xa38a;
                      uStack_10 = *(undefined2 *)0xa388;
                      uStack_12 = 0;
                      uStack_14 = 0x7aa;
                      uStack_16 = 0xfffe;
                      uStack_18 = 0xd8f1;
                      pcVar5 = (code *)swi(0x3f);
                      iVar9 = (*pcVar5)();
                      if (iVar9 == -1) goto LAB_3ab8_397d;
                      if (*(int *)0x158 != 0) {
                        FUN_3ab8_4d6f();
                        return;
                      }
                    }
                    if (*(int *)(unaff_BP + -0x338) == 1) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 0;
                      pcVar5 = (code *)swi(0x3f);
                      (*pcVar5)();
                    }
                    if (*(int *)(unaff_BP + -0x338) == 2) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 0;
                      pcVar5 = (code *)swi(0x3f);
                      uVar6 = (*pcVar5)();
                      *(undefined2 *)(unaff_BP + -0x6a) = uVar6;
                    }
                    if (*(int *)0x158 != 0) {
                      FUN_3ab8_4d6f();
                      return;
                    }
                    do {
                      if (*(int *)(unaff_BP + -0x338) != 3) goto LAB_3ab8_3d17;
                      *(undefined2 *)(unaff_BP + -0x8e) = 0;
                      *(int *)(unaff_BP + -0x340) = *(int *)0x1092 % 1000;
                      FUN_28b3_0d8b();
                      func_0x00029983();
                      iVar9 = *(int *)0x1092;
                      *(int *)(unaff_BP + -0x7c) = iVar9 / 1000;
                      *(int *)(unaff_BP + -0x340) = iVar9 / 1000;
                      FUN_28b3_0d8b();
                      func_0x00029983();
                      func_0x0001bb4e();
                      iStack_6 = 0xe854;
                      func_0x00012276();
                      iStack_6 = 0xe85e;
                      func_0x00012276();
                      iStack_6 = unaff_BP + -0x33c;
                      iStack_8 = unaff_BP + -0x336;
                      iStack_a = unaff_BP + -0x88;
                      iStack_c = unaff_BP + -0x80;
                      uStack_e = 0x11f2;
                      iVar13 = 0xad;
                      uStack_10 = 0xe87f;
                      uVar7 = func_0x000021a4();
                      *(uint *)(unaff_BP + -0x6a) = uVar7;
                      if (*(int *)0x158 != 0) {
                        FUN_3ab8_4d6f();
                        return;
                      }
                      if (uVar7 == 0xffff) goto LAB_3ab8_3d17;
                      uVar15 = uVar7 < 99;
                      uVar16 = uVar7 == 99;
                    } while ((bool)uVar16);
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    FUN_28b3_1181();
                    if ((bool)uVar15) {
                      uVar6 = *(undefined2 *)0xa362;
                      *(undefined2 *)(unaff_BP + -0x88) = *(undefined2 *)0xa360;
                      *(undefined2 *)(unaff_BP + -0x86) = uVar6;
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar15 || (bool)uVar16) {
                      func_0x00029834();
                      func_0x000297e6();
                      func_0x00029d78();
                      FUN_28b3_1181();
                      if (!(bool)uVar15) goto LAB_3ab8_3e6c;
                      func_0x000297e6();
                      func_0x00029d78();
                      uVar6 = FUN_28b3_0f51();
                      *(undefined2 *)0x1092 = uVar6;
                    }
                    else {
LAB_3ab8_3e6c:
                      *(undefined2 *)0x1092 = 0;
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    uVar14 = uVar15;
                    if ((bool)uVar15 || (bool)uVar16) {
                      func_0x00029834();
                      func_0x000297e6();
                      func_0x00029d78();
                      FUN_28b3_1181();
                      uVar14 = 0;
                      if ((bool)uVar15) {
                        func_0x000297e6();
                        func_0x00029d78();
                        iVar9 = FUN_28b3_0f51();
                        uVar7 = iVar9 * 1000;
                        *(uint *)(unaff_BP + -0x7c) = uVar7;
                        puVar1 = (uint *)0x1092;
                        uVar14 = CARRY2(*puVar1,uVar7);
                        *puVar1 = *puVar1 + uVar7;
                        uVar16 = *puVar1 == 0;
                      }
                    }
                    *(undefined2 *)(unaff_BP + -0x2f8) = 0;
                    func_0x000297e6();
                    func_0x000297e6();
                    iVar13 = 0x22b2;
                    FUN_28b3_1181();
                    if (!(bool)uVar14 && !(bool)uVar16) {
                      *(undefined2 *)(unaff_BP + -0x2f8) = 1;
                    }
LAB_3ab8_3d17:
                    iVar9 = iVar13;
                  } while (*(int *)(unaff_BP + -0x8e) == 0);
                  iStack_6 = *(int *)(unaff_BP + -0x8e);
                  iVar9 = 0x11f2;
                  iStack_a = -0x174c;
                  iStack_8 = iVar13;
                  iVar13 = func_0x00015409();
                } while (iVar13 == 0);
                if (((*(char *)0x7e != '\0') && (*(char *)0xd14 != '\x04')) && (1 < *(byte *)0x84))
                {
                  func_0x0000c3ca();
                  iStack_6 = unaff_BP + -0x2f6;
                  iStack_8 = 0x885;
                  iStack_a = -0x1716;
                  func_0x0001263c();
                  iStack_6 = unaff_BP + -0x2f6;
                  iStack_8 = 1;
                  pcVar5 = (code *)swi(0x3f);
                  (*pcVar5)();
                  *(undefined1 *)0xd14 = 2;
                }
                func_0x0000c3ca();
                *(undefined2 *)0xbc0 = 1;
                iStack_6 = -0x16e2;
                func_0x0000daa6();
                uVar6 = *(undefined2 *)(unaff_BP + -0x334);
                *(undefined2 *)(unaff_BP + -0x2fe) = *(undefined2 *)(unaff_BP + -0x336);
                *(undefined2 *)(unaff_BP + -0x2fc) = uVar6;
                uVar6 = *(undefined2 *)(unaff_BP + -0x33a);
                *(undefined2 *)(unaff_BP + -0x314) = *(undefined2 *)(unaff_BP + -0x33c);
                *(undefined2 *)(unaff_BP + -0x312) = uVar6;
                *(undefined2 *)0xbc2 = 0;
                *(undefined2 *)(unaff_BP + -0x306) = 0;
                uVar6 = *(undefined2 *)0xa360;
                uVar10 = *(undefined2 *)0xa362;
                *(undefined2 *)(unaff_BP + -0x84) = uVar6;
                *(undefined2 *)(unaff_BP + -0x82) = uVar10;
                *(undefined2 *)(unaff_BP + -0x8c) = uVar6;
                *(undefined2 *)(unaff_BP + -0x8a) = uVar10;
                *(undefined2 *)(unaff_BP + -0x2fa) = 1;
                while (*(int *)(unaff_BP + -0x2fa) <= *(int *)0x150) {
                  iStack_6 = -0x1584;
                  uVar18 = func_0x00000398();
                  if (*(byte *)((int)uVar18 + 0x14) < 0x5a) {
                    iStack_6 = -0x156f;
                    uVar18 = func_0x00000398();
                    if ((*(byte *)((int)uVar18 + 0x16) & 2) != 0) {
                      iStack_6 = 0xeaa6;
                      puVar17 = (undefined2 *)func_0x00000398();
                      puVar12 = (undefined2 *)puVar17;
                      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                        puVar4 = puVar11;
                        puVar11 = puVar11 + 1;
                        puVar3 = puVar12;
                        puVar12 = puVar12 + 1;
                        *puVar4 = *puVar3;
                      }
                      *(int *)(unaff_BP + -0x306) = *(int *)(unaff_BP + -0x306) + 1;
                      func_0x000297e6();
                      FUN_28b3_100d();
                      iStack_6 = 0xead8;
                      func_0x00029bb5();
                      func_0x00029983();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      iStack_6 = -0x1506;
                      func_0x00029bb5();
                      func_0x00029983();
                    }
                  }
                  *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 1;
                }
              } while (*(int *)(unaff_BP + -0x306) == 0);
              func_0x00029834();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x000297e6();
              func_0x00029b6d();
              FUN_28b3_117c();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xeb58;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = -0x14a3;
              FUN_28b3_1582();
              uVar15 = (undefined1 *)0xfff7 < &iStack_8;
              func_0x00029834();
              func_0x0002996b();
              func_0x00029d78();
              FUN_28b3_1181();
            } while ((bool)uVar15);
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029983();
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar15) {
              *(undefined2 *)(unaff_BP + -0x6a) = 0;
              uVar6 = *(undefined2 *)0xa3de;
              *(undefined2 *)(unaff_BP + -0x58) = *(undefined2 *)0xa3dc;
              *(undefined2 *)(unaff_BP + -0x56) = uVar6;
              *(undefined2 *)(unaff_BP + -0x2fa) = 1;
              while (*(int *)(unaff_BP + -0x2fa) <= *(int *)0x150) {
                iStack_6 = 0xf2bc;
                uVar18 = func_0x00000398();
                if (*(byte *)((int)uVar18 + 0x14) < 0x5a) {
                  iStack_6 = 0xf2d4;
                  uVar18 = func_0x00000398();
                  uVar15 = 0;
                  uVar16 = (*(byte *)((int)uVar18 + 0x16) & 2) == 0;
                  if (!(bool)uVar16) {
                    iStack_6 = 0xf2e9;
                    puVar17 = (undefined2 *)func_0x00000398();
                    puVar12 = (undefined2 *)puVar17;
                    puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                      puVar4 = puVar11;
                      puVar11 = puVar11 + 1;
                      puVar3 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar4 = *puVar3;
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x000297e6();
                    func_0x00029b6d();
                    FUN_28b3_1163();
                    func_0x0002996b();
                    FUN_28b3_1181();
                    if (!(bool)uVar15 && !(bool)uVar16) {
                      func_0x000297e6();
                      func_0x00029983();
                      *(undefined2 *)(unaff_BP + -0x6a) = *(undefined2 *)(unaff_BP + -0x2fa);
                    }
                  }
                }
                *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 1;
              }
              iStack_6 = 0xf36a;
              puVar17 = (undefined2 *)func_0x00000398();
              uVar6 = ((undefined2 *)puVar17)[1];
              *(undefined2 *)(unaff_BP + -0x84) = *puVar17;
              *(undefined2 *)(unaff_BP + -0x82) = uVar6;
              iStack_6 = -0xc7a;
              uVar18 = func_0x00000398();
              uVar10 = (undefined2)((ulong)uVar18 >> 0x10);
              uVar6 = *(undefined2 *)((int)uVar18 + 4);
              uVar10 = *(undefined2 *)((int)uVar18 + 6);
              *(undefined2 *)(unaff_BP + -0x8c) = uVar6;
              *(undefined2 *)(unaff_BP + -0x8a) = uVar10;
              if (*(int *)0xcb6 == 0) {
                *(undefined2 *)(unaff_BP + -0x314) = uVar6;
                *(undefined2 *)(unaff_BP + -0x312) = uVar10;
              }
              *(undefined2 *)(unaff_BP + -0x2fa) = 1;
              while (*(int *)(unaff_BP + -0x2fa) <= *(int *)0x150) {
                iStack_6 = -0xc44;
                uVar18 = func_0x00000398();
                if (*(byte *)((int)uVar18 + 0x14) < 0x5a) {
                  iStack_6 = -0xc2c;
                  uVar18 = func_0x00000398();
                  if ((*(byte *)((int)uVar18 + 0x16) & 2) != 0) {
                    iStack_6 = -0xc14;
                    puVar17 = (undefined2 *)func_0x00000398();
                    puVar12 = (undefined2 *)puVar17;
                    puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                      puVar4 = puVar11;
                      puVar11 = puVar11 + 1;
                      puVar3 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar4 = *puVar3;
                    }
                    puVar12 = &uStack_18;
                    puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                      puVar3 = puVar12;
                      puVar12 = puVar12 + 1;
                      puVar17 = puVar11;
                      puVar11 = puVar11 + 1;
                      *puVar3 = *puVar17;
                    }
                    func_0x00019593(0);
                    func_0x000297e6();
                    func_0x00029d78();
                    iStack_a = 0x22b2;
                    iStack_c = 0xf42f;
                    func_0x000299d1();
                    iStack_a = 0x22b2;
                    iStack_c = 0xf438;
                    func_0x000297e6();
                    iStack_a = 0x22b2;
                    iStack_c = -0xbc3;
                    func_0x00029d78();
                    uStack_12 = 0x22b2;
                    uStack_14 = 0xf447;
                    func_0x000299d1();
                    uStack_12 = 0x22b2;
                    uStack_14 = 0xf450;
                    func_0x000297e6();
                    uStack_12 = 0x22b2;
                    uStack_14 = 0xf455;
                    func_0x00029d78();
                    func_0x000299d1();
                    func_0x000297e6();
                    func_0x00029d78();
                    func_0x000299d1(0x22b2);
                    iVar9 = FUN_1def_043a(0x22b2);
                    if (iVar9 != 0) {
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029b6d();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029b6d();
                      FUN_28b3_1163();
                      func_0x00029983();
                      uVar6 = *(undefined2 *)(unaff_BP + -0x2fc);
                      *(undefined2 *)(unaff_BP + -0x32e) = *(undefined2 *)(unaff_BP + -0x2fe);
                      *(undefined2 *)(unaff_BP + -0x32c) = uVar6;
                      func_0x000297e6();
                      func_0x00029bb5();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029bb5();
                      func_0x0002996b();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029983();
                      iStack_6 = -0xace;
                      uVar18 = func_0x00000398();
                      *(undefined2 *)(unaff_BP + -0x768) = (int)uVar18;
                      *(undefined2 *)(unaff_BP + -0x766) = (int)((ulong)uVar18 >> 0x10);
                      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                      puVar17 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x768);
                      puVar12 = (undefined2 *)puVar17;
                      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                        puVar4 = puVar12;
                        puVar12 = puVar12 + 1;
                        puVar3 = puVar11;
                        puVar11 = puVar11 + 1;
                        *puVar4 = *puVar3;
                      }
                    }
                  }
                }
                *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 1;
              }
            }
            else {
              *(int *)(unaff_BP + -0x72a) = *(int *)0x1092 % 1000 << 1;
              *(int *)(unaff_BP + -0x7c) = *(int *)0x1092 / 1000;
              *(undefined1 *)(unaff_BP + -0x534) = 0;
              *(undefined1 *)(unaff_BP + -0x728) = 0;
              *(undefined2 *)(unaff_BP + -0x78) = 1;
              FUN_10ad_1871();
LAB_3ab8_4080:
              *(undefined2 *)(unaff_BP + -0x6a) = 0;
              uVar6 = *(undefined2 *)0xa3de;
              *(undefined2 *)(unaff_BP + -0x58) = *(undefined2 *)0xa3dc;
              *(undefined2 *)(unaff_BP + -0x56) = uVar6;
              *(undefined2 *)(unaff_BP + -0x2fa) = 1;
              while (*(int *)(unaff_BP + -0x2fa) <= *(int *)0x150) {
                iStack_6 = -0x13dc;
                uVar18 = func_0x00000398();
                if (*(byte *)((int)uVar18 + 0x14) < 0x5a) {
                  iStack_6 = -0x13c4;
                  uVar18 = func_0x00000398();
                  if ((*(byte *)((int)uVar18 + 0x16) & 2) != 0) {
                    iStack_6 = -0x13ac;
                    uVar18 = func_0x00000398();
                    uVar15 = 0;
                    uVar16 = (*(byte *)((int)uVar18 + 0x16) & 1) == 0;
                    if ((bool)uVar16) {
                      iStack_6 = -0x1397;
                      puVar17 = (undefined2 *)func_0x00000398();
                      puVar12 = (undefined2 *)puVar17;
                      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
                      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                        puVar4 = puVar11;
                        puVar11 = puVar11 + 1;
                        puVar3 = puVar12;
                        puVar12 = puVar12 + 1;
                        *puVar4 = *puVar3;
                      }
                      func_0x000297e6();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x000297e6();
                      func_0x00029b6d();
                      FUN_28b3_1163();
                      func_0x0002996b();
                      FUN_28b3_1181();
                      if (!(bool)uVar15 && !(bool)uVar16) {
                        func_0x000297e6();
                        func_0x00029983();
                        *(undefined2 *)(unaff_BP + -0x6a) = *(undefined2 *)(unaff_BP + -0x2fa);
                      }
                    }
                  }
                }
                *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 1;
              }
              if (0 < *(int *)(unaff_BP + -0x6a)) {
                iStack_6 = 0xecf3;
                puVar17 = (undefined2 *)func_0x00000398();
                puVar12 = (undefined2 *)puVar17;
                puVar11 = (undefined2 *)(unaff_BP + -0x742);
                for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                  puVar4 = puVar11;
                  puVar11 = puVar11 + 1;
                  puVar3 = puVar12;
                  puVar12 = puVar12 + 1;
                  *puVar4 = *puVar3;
                }
                iStack_6 = unaff_BP + -0x1ca;
                iStack_8 = 0;
                uVar6 = 0x18b3;
                iStack_a = -0x12e9;
                FUN_1885_0344();
                if (((*(int *)(unaff_BP + -0x78) == 0) &&
                    ((0 < *(int *)(unaff_BP + -0x7c) || (*(int *)(unaff_BP + -0x2f8) != 0)))) &&
                   (0 < *(int *)(unaff_BP + -0x72a))) {
                  uVar6 = 0x22b2;
                  iStack_6 = 0xed3e;
                  uVar7 = func_0x00024ce4();
                  if (1 < uVar7) {
                    *(undefined2 *)(unaff_BP + -0x2fa) = 0;
                    while ((iVar9 = *(int *)(unaff_BP + -0x2fa),
                           *(char *)(unaff_BP + iVar9 + -0x1ca) == *(char *)(unaff_BP + -0x310) &&
                           (*(char *)(unaff_BP + iVar9 + -0x1c9) == *(char *)(unaff_BP + -0x30f))))
                    {
                      *(int *)(unaff_BP + -0x2fa) = *(int *)(unaff_BP + -0x2fa) + 2;
                    }
                    if ((*(char *)(unaff_BP + iVar9 + -0x1ca) == '^') &&
                       (*(char *)(unaff_BP + iVar9 + -0x1c9) == 'm')) {
                      *(undefined2 *)(unaff_BP + -0x2fa) = 0;
                    }
                  }
                }
                iStack_8 = -0x126a;
                iStack_6 = uVar6;
                FUN_21f2_2d26();
                *(undefined2 *)(unaff_BP + -0x78) = 0;
                iStack_6 = 0xeda7;
                uVar6 = func_0x00024ce4();
                *(undefined2 *)(unaff_BP + -0x33e) = uVar6;
                iStack_6 = 0xedb4;
                func_0x000190c7();
                if (*(int *)(unaff_BP + -0x72a) == 0) {
                  func_0x000297e6();
                  func_0x00029bb5();
                  func_0x00029983();
                  uVar6 = *(undefined2 *)(unaff_BP + -0x314);
                  uVar10 = *(undefined2 *)(unaff_BP + -0x312);
                  *(undefined2 *)(unaff_BP + -0x73e) = uVar6;
                  *(undefined2 *)(unaff_BP + -0x73c) = uVar10;
                  *(undefined2 *)(unaff_BP + -0x736) = uVar6;
                  *(undefined2 *)(unaff_BP + -0x734) = uVar10;
                  puVar12 = (undefined2 *)&stack0xffe6;
                  puVar11 = (undefined2 *)(unaff_BP + -0x742);
                  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                    puVar3 = puVar12;
                    puVar12 = puVar12 + 1;
                    puVar17 = puVar11;
                    puVar11 = puVar11 + 1;
                    *puVar3 = *puVar17;
                  }
                  FUN_3ab8_3743();
                  *(undefined1 *)(unaff_BP + -0x534) = 0;
                  iStack_6 = 0xee1c;
                  uVar18 = func_0x00000398();
                  pbVar2 = (byte *)((int)uVar18 + 0x16);
                  *pbVar2 = *pbVar2 | 1;
                  iStack_6 = 0xee2f;
                  uVar18 = func_0x00000398();
                  pbVar2 = (byte *)((int)uVar18 + 0x16);
                  *pbVar2 = *pbVar2 | 2;
                  func_0x000297e6();
                  func_0x00029b85();
                  iStack_6 = -0x11ab;
                  func_0x00029b55();
                  func_0x00029983();
                }
                else {
                  while( true ) {
                    *(undefined2 *)(unaff_BP + -0x75c) = 0;
                    iStack_6 = 0xf17e;
                    uVar6 = func_0x00024ce4();
                    *(undefined2 *)(unaff_BP + -0x33e) = uVar6;
                    iStack_6 = unaff_BP + -0x534;
                    iStack_8 = 0x22b2;
                    iStack_a = -0xe6e;
                    iVar9 = FUN_1885_0406();
                    if (iVar9 == -1) {
                      *(undefined2 *)(unaff_BP + -0x75c) = 1;
                    }
                    if ((*(int *)(unaff_BP + -0x75c) == 0) &&
                       (*(int *)(unaff_BP + -0x33e) <= *(int *)(unaff_BP + -0x72a))) break;
                    iStack_6 = 0x18b3;
                    iStack_8 = -0xe40;
                    FUN_21f2_3454();
                    iStack_6 = 0x22b2;
                    iStack_8 = -0xe30;
                    FUN_21f2_3454();
                    iStack_6 = 0x22b2;
                    iStack_8 = -0xe1f;
                    FUN_21f2_3454();
                    iVar9 = *(int *)(unaff_BP + -0x72a);
                    *(int *)(unaff_BP + -0x340) = iVar9;
                    if (*(int *)(unaff_BP + -0x33e) < iVar9) {
                      *(undefined2 *)(unaff_BP + -0x340) = *(undefined2 *)(unaff_BP + -0x33e);
                    }
                    *(undefined2 *)(unaff_BP + -0x760) = 0;
                    while (*(int *)(unaff_BP + -0x760) < *(int *)(unaff_BP + -0x340)) {
                      iStack_6 = 0x22b2;
                      iStack_8 = -0x118a;
                      iVar9 = FUN_3ab8_38d9();
                      if (iVar9 != 0) {
                        *(undefined2 *)(unaff_BP + -0x78) = 1;
                        *(undefined2 *)(unaff_BP + -0x340) = *(undefined2 *)(unaff_BP + -0x760);
                        break;
                      }
                      *(int *)(unaff_BP + -0x760) = *(int *)(unaff_BP + -0x760) + 1;
                    }
                    *(undefined2 *)(unaff_BP + -0x760) = 0;
                    iVar9 = 0x22b2;
                    while (*(int *)(unaff_BP + -0x760) < *(int *)(unaff_BP + -0x340)) {
                      iStack_6 = unaff_BP + -0x534;
                      iStack_a = -0x1162;
                      iStack_8 = iVar9;
                      iVar9 = FUN_1885_0406();
                      if (0 < iVar9) {
                        *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 2;
                      }
                      *(int *)(unaff_BP + -0x760) = *(int *)(unaff_BP + -0x760) + 1;
                      iVar9 = 0x18b3;
                    }
                    iStack_8 = -0x113a;
                    iStack_6 = iVar9;
                    iVar9 = func_0x0002aa38();
                    *(int *)(unaff_BP + -0x76a) = iVar9;
                    if (iVar9 == 2) {
                      *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + -1;
                    }
                    iVar9 = *(int *)(unaff_BP + -0x340);
                    uVar7 = (uint)*(byte *)(unaff_BP + iVar9 + -0x534);
                    *(uint *)(unaff_BP + -0x76a) = uVar7;
                    uVar8 = (uint)*(byte *)(unaff_BP + iVar9 + -0x533);
                    *(uint *)(unaff_BP + -0x76c) = uVar8;
                    *(undefined2 *)(unaff_BP + -0x316) = 0;
                    if ((*(int *)(unaff_BP + -0x72a) < 0x9f) &&
                       (((uVar7 == *(byte *)(unaff_BP + -0x764) &&
                         (uVar8 == *(byte *)(unaff_BP + -0x763))) ||
                        (((uint)*(byte *)(unaff_BP + -0x768) == *(uint *)(unaff_BP + -0x76a) &&
                         (*(byte *)(unaff_BP + -0x767) == uVar8)))))) {
                      *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 2;
                      *(undefined2 *)(unaff_BP + -0x316) = 1;
                    }
                    iStack_6 = 0x2a75;
                    iStack_8 = -0x10c7;
                    iVar9 = FUN_3ab8_38d9();
                    if (iVar9 != 0) {
                      *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 2;
                    }
                    iStack_6 = 0x2a75;
                    iStack_8 = -0x10ad;
                    iVar9 = FUN_3ab8_38d9();
                    if (iVar9 != 0) {
                      *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 1;
                    }
                    *(undefined2 *)(unaff_BP + -0x760) = *(undefined2 *)(unaff_BP + -0x340);
                    *(undefined2 *)(unaff_BP + -0x76c) = 0;
                    while (*(int *)(unaff_BP + -0x760) <= *(int *)(unaff_BP + -0x33e)) {
                      *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x76c) + -0x534) =
                           *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x760) + -0x534);
                      *(int *)(unaff_BP + -0x760) = *(int *)(unaff_BP + -0x760) + 1;
                      *(int *)(unaff_BP + -0x76c) = *(int *)(unaff_BP + -0x76c) + 1;
                    }
                    *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x76c) + -0x534) = 0;
                    *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x340) + -0x728) = 0;
                    func_0x000297e6();
                    func_0x00029bb5();
                    func_0x00029983();
                    uVar6 = *(undefined2 *)(unaff_BP + -0x314);
                    uVar10 = *(undefined2 *)(unaff_BP + -0x312);
                    *(undefined2 *)(unaff_BP + -0x73e) = uVar6;
                    *(undefined2 *)(unaff_BP + -0x73c) = uVar10;
                    *(undefined2 *)(unaff_BP + -0x736) = uVar6;
                    *(undefined2 *)(unaff_BP + -0x734) = uVar10;
                    puVar12 = (undefined2 *)&stack0xffe6;
                    puVar11 = (undefined2 *)(unaff_BP + -0x742);
                    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                      puVar3 = puVar12;
                      puVar12 = puVar12 + 1;
                      puVar17 = puVar11;
                      puVar11 = puVar11 + 1;
                      *puVar3 = *puVar17;
                    }
                    FUN_3ab8_3743();
                    iStack_6 = 0xeff9;
                    uVar18 = func_0x00000398();
                    pbVar2 = (byte *)((int)uVar18 + 0x16);
                    *pbVar2 = *pbVar2 | 1;
                    iStack_6 = 0xf00c;
                    uVar18 = func_0x00000398();
                    pbVar2 = (byte *)((int)uVar18 + 0x16);
                    *pbVar2 = *pbVar2 | 2;
                    func_0x000297e6();
                    func_0x00029b85();
                    iStack_6 = 0xf032;
                    func_0x00029b55();
                    func_0x00029983();
                    *(undefined2 *)(unaff_BP + -0x340) = *(undefined2 *)(unaff_BP + -0x72a);
                    uVar6 = 0x22b2;
                    iStack_6 = 0xf04a;
                    iVar9 = func_0x00024ce4();
                    *(int *)(unaff_BP + -0x33e) = iVar9;
                    if ((((0 < *(int *)(unaff_BP + -0x7c)) && (0 < *(int *)(unaff_BP + -0x340))) &&
                        (0 < iVar9)) && (*(int *)(unaff_BP + -0x78) == 0)) {
                      *(undefined1 *)(unaff_BP + -0x728) = 0;
                      *(undefined2 *)(unaff_BP + -0x304) = 1;
                      while (*(int *)(unaff_BP + -0x304) <= *(int *)(unaff_BP + -0x7c)) {
                        iStack_6 = 0x22b2;
                        iStack_8 = -0xf7b;
                        FUN_21f2_2d26();
                        *(int *)(unaff_BP + -0x304) = *(int *)(unaff_BP + -0x304) + 1;
                      }
                      iStack_6 = 0x22b2;
                      iStack_8 = -0xf5d;
                      FUN_21f2_2d26();
                      iStack_6 = 0x22b2;
                      iStack_8 = -0xf4c;
                      func_0x00024c86();
                      iStack_6 = unaff_BP + -0x534;
                      iStack_8 = 0x22b2;
                      iStack_a = 0xf0c7;
                      iVar9 = FUN_1885_0406();
                      if (iVar9 == -1) {
                        *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 2;
                      }
                      iStack_6 = unaff_BP + -0x534;
                      iStack_8 = 0x18b3;
                      uVar6 = 0x18b3;
                      iStack_a = -0xf1c;
                      iVar9 = FUN_1885_0406();
                      if (iVar9 == -1) {
                        *(int *)(unaff_BP + -0x340) = *(int *)(unaff_BP + -0x340) + 1;
                      }
                    }
                    if (((*(int *)(unaff_BP + -0x33e) < 1) && (*(int *)(unaff_BP + -0x316) != 0)) &&
                       (*(int *)(unaff_BP + -0x75c) == 0)) {
                      *(undefined1 *)(unaff_BP + -0x534) = 0;
                      *(undefined2 *)(unaff_BP + -0x304) = 1;
                      iStack_6 = uVar6;
                      while (*(int *)(unaff_BP + -0x304) <= *(int *)(unaff_BP + -0x7c)) {
                        iStack_8 = -0xee1;
                        FUN_21f2_2d26();
                        *(int *)(unaff_BP + -0x304) = *(int *)(unaff_BP + -0x304) + 1;
                        iStack_6 = 0x22b2;
                      }
                    }
                    iStack_6 = -0xec8;
                    uVar6 = func_0x00024ce4();
                    *(undefined2 *)(unaff_BP + -0x33e) = uVar6;
                    *(undefined2 *)(unaff_BP + -0x316) = 0;
                    *(undefined2 *)(unaff_BP + -0x78) = 0;
                    if (*(int *)(unaff_BP + -0x75c) != 0) {
                      *(undefined2 *)(unaff_BP + -0x78) = 1;
                    }
                    if ((*(int *)(unaff_BP + -0x33e) < 1) ||
                       ((*(int *)(unaff_BP + -0x33e) < *(int *)(unaff_BP + -0x340) &&
                        (*(int *)(unaff_BP + -0x75c) == 0)))) break;
                  }
                }
                goto LAB_3ab8_4080;
              }
              if (0 < *(int *)(unaff_BP + -0x72a)) {
                iStack_6 = -0xdea;
                iVar9 = func_0x00024ce4();
                if (iVar9 != 0) {
                  func_0x000297e6();
                  func_0x00029bb5();
                  func_0x00029983();
                  uVar6 = *(undefined2 *)(unaff_BP + -0x314);
                  uVar10 = *(undefined2 *)(unaff_BP + -0x312);
                  *(undefined2 *)(unaff_BP + -0x73e) = uVar6;
                  *(undefined2 *)(unaff_BP + -0x73c) = uVar10;
                  *(undefined2 *)(unaff_BP + -0x736) = uVar6;
                  *(undefined2 *)(unaff_BP + -0x734) = uVar10;
                  puVar12 = (undefined2 *)&stack0xffe6;
                  puVar11 = (undefined2 *)(unaff_BP + -0x742);
                  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                    puVar3 = puVar12;
                    puVar12 = puVar12 + 1;
                    puVar17 = puVar11;
                    puVar11 = puVar11 + 1;
                    *puVar3 = *puVar17;
                  }
                  FUN_3ab8_3743();
                  iStack_6 = 0xf273;
                  uVar18 = func_0x00000398();
                  pbVar2 = (byte *)((int)uVar18 + 0x16);
                  *pbVar2 = *pbVar2 | 1;
                  iStack_6 = -0xd7a;
                  uVar18 = func_0x00000398();
                  pbVar2 = (byte *)((int)uVar18 + 0x16);
                  *pbVar2 = *pbVar2 | 2;
                }
              }
              FUN_10ad_1871();
            }
            *(undefined2 *)(unaff_BP + -0x2fa) = 1;
          }
          iStack_6 = -0x898;
          uVar18 = func_0x00000398();
        } while (0x59 < *(byte *)((int)uVar18 + 0x14));
        iStack_6 = -0x883;
        uVar18 = func_0x00000398();
      } while ((*(byte *)((int)uVar18 + 0x16) & 2) == 0);
      iStack_6 = 0xf792;
      puVar17 = (undefined2 *)func_0x00000398();
      puVar12 = (undefined2 *)puVar17;
      puVar11 = (undefined2 *)(unaff_BP + -0x32e);
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar4 = puVar11;
        puVar11 = puVar11 + 1;
        puVar3 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar4 = *puVar3;
      }
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      func_0x00029b85();
      func_0x00029bb5();
      func_0x0002996b();
      FUN_28b3_0ee9();
    } while (*(int *)0x1096 != 1);
    func_0x000297e6();
    func_0x00029d78();
  } while( true );
}



/* 3ab8:4d6f  FUN_3ab8_4d6f  6 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4d6f(void)

{
  return;
}



/* 3ab8:4d75  FUN_3ab8_4d75  128 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4d75(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_54;
  undefined1 local_52 [72];
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xf900;
  FUN_21f2_0ebc();
  *(undefined1 *)0xbf50 = 0;
  local_54 = 0;
  uStack_8 = 0x22b2;
  do {
    uVar2 = uStack_8;
    if (7 < local_54) {
LAB_3ab8_4db6:
      puStack_4 = (undefined1 *)param_1;
      puStack_6 = local_52;
      uStack_a = 0xf942;
      uStack_8 = uVar2;
      func_0x00024c86();
      puStack_4 = (undefined1 *)0xbf48;
      puStack_6 = local_52;
      uStack_8 = 0x22b2;
      uStack_a = 0xf951;
      FUN_21f2_2d26();
      puStack_4 = local_52;
      puStack_6 = (undefined1 *)0xbf48;
      uStack_8 = 0x22b2;
      uStack_a = 0xf960;
      func_0x00024c86();
      puStack_4 = (undefined1 *)0x5b71;
      puStack_6 = (undefined1 *)0xbf48;
      uStack_8 = 0x22b2;
      uStack_a = 0xf96f;
      FUN_21f2_2d26();
      return;
    }
    puStack_4 = (undefined1 *)local_54;
    puStack_6 = (undefined1 *)0xbf48;
    uVar2 = 0x2a75;
    uStack_a = 0xf921;
    iVar1 = func_0x0002aa38();
    if ((iVar1 == 0) && (*(char *)(local_54 + -0x40b8) == '.')) {
      *(undefined1 *)(local_54 + -0x40b8) = 0;
      goto LAB_3ab8_4db6;
    }
    local_54 = local_54 + 1;
    uStack_8 = uVar2;
  } while( true );
}



/* 3ab8:4df5  FUN_3ab8_4df5  349 bytes, 0 callers */

bool __cdecl16far FUN_3ab8_4df5(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined1 local_e6 [80];
  undefined1 local_96 [30];
  undefined1 local_78 [14];
  int local_6a;
  undefined1 local_68 [80];
  int local_18;
  undefined1 local_16 [7];
  undefined1 local_f;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xf980;
  FUN_21f2_0ebc();
  local_6a = 0;
  puStack_4 = (undefined1 *)0xd8;
  puStack_6 = local_16;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xf992;
  FUN_21f2_3454();
  local_f = 0x54;
  puStack_4 = (undefined1 *)0xd18;
  puStack_6 = local_e6;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xf9a6;
  func_0x00024c86();
  puStack_4 = local_e6;
  puStack_6 = (undefined1 *)0x22b2;
  puStack_8 = (undefined1 *)0xf9b2;
  iVar1 = func_0x00024ce4();
  if (iVar1 != 3) {
    puStack_4 = (undefined1 *)0x5b73;
    puStack_6 = local_e6;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xf9c6;
    FUN_21f2_2d26();
  }
  puStack_4 = local_e6;
  puStack_6 = local_68;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xf9d6;
  func_0x00024c86();
  puStack_4 = (undefined1 *)0x5b75;
  puStack_6 = local_68;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xf9e5;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)*(undefined2 *)0xd72;
  puStack_6 = local_68;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xf9f4;
  FUN_21f2_2d26();
  local_18 = 0;
  puStack_4 = (undefined1 *)0x258;
  puStack_6 = local_16;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xfa08;
  iVar1 = FUN_21f2_1348();
  if (iVar1 != 0) {
    puStack_4 = local_96;
    puStack_6 = (undefined1 *)0x0;
    puStack_8 = local_68;
    uStack_a = 0x22b2;
    uStack_c = 0xfa23;
    iVar2 = func_0x000276d7();
    if (iVar2 == 0) {
      puStack_4 = local_78;
      puStack_6 = (undefined1 *)0xbf48;
      puStack_8 = (undefined1 *)0x22b2;
      uStack_a = 0xfa56;
      func_0x00024c86();
      puStack_4 = local_e6;
      puStack_6 = (undefined1 *)0x22b2;
      puStack_8 = (undefined1 *)0xfa61;
      FUN_3ab8_4d75();
      puStack_6 = (undefined1 *)0xbf48;
      puStack_8 = (undefined1 *)0x22b2;
      uStack_a = 0xfa6f;
      puStack_4 = (undefined1 *)iVar1;
      iVar2 = FUN_21f2_31f0();
      if (iVar2 == 0) {
        local_18 = 1;
        do {
          puStack_4 = local_96;
          puStack_6 = (undefined1 *)0x22b2;
          puStack_8 = (undefined1 *)0xfa84;
          iVar2 = func_0x000276cc();
          if (iVar2 != 0) break;
          puStack_4 = local_78;
          puStack_6 = (undefined1 *)0xbf48;
          puStack_8 = (undefined1 *)0x22b2;
          uStack_a = 0xfa9d;
          func_0x00024c86();
          puStack_4 = local_e6;
          puStack_6 = (undefined1 *)0x22b2;
          puStack_8 = (undefined1 *)0xfaa8;
          FUN_3ab8_4d75();
          puStack_6 = (undefined1 *)0xbf48;
          puStack_8 = (undefined1 *)0x22b2;
          uStack_a = 0xfab6;
          puStack_4 = (undefined1 *)iVar1;
          iVar2 = FUN_21f2_31f0();
          if (iVar2 != 0) goto LAB_3ab8_4eaa;
          local_18 = local_18 + 1;
        } while (local_18 < *(int *)0x11f0);
        local_6a = 0;
        goto LAB_3ab8_4eaf;
      }
    }
LAB_3ab8_4eaa:
    local_6a = 1;
  }
LAB_3ab8_4eaf:
  puStack_4 = (undefined1 *)0x22b2;
  puStack_6 = (undefined1 *)0xfa34;
  func_0x0002504e();
  return local_6a == 0;
}



/* 3ab8:4f52  FUN_3ab8_4f52  108 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003fc5f) */
/* WARNING: Removing unreachable block (ram,0x0003fc32) */
/* WARNING: Removing unreachable block (ram,0x0003fc46) */
/* WARNING: Removing unreachable block (ram,0x0003fc48) */
/* WARNING: Removing unreachable block (ram,0x0003fc4e) */

undefined2 __cdecl16far
FUN_3ab8_4f52(uint param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 unaff_DS;
  undefined1 uVar1;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [2];
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 **local_e;
  undefined2 *local_c;
  undefined1 *local_a;
  undefined1 *local_8;
  
  FUN_21f2_0ebc();
  while( true ) {
    local_c = (undefined2 *)*param_3;
    local_a = (undefined1 *)param_3[1];
    local_10 = *param_4;
    local_e = (undefined2 **)param_4[1];
    func_0x0001bb4e();
    local_8 = (undefined1 *)0xfb07;
    func_0x00012276();
    if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 3)))) {
      local_8 = (undefined1 *)0xfb24;
      func_0x00012276();
      local_8 = (undefined1 *)0xfb35;
      func_0x00012276();
    }
    local_8 = (undefined1 *)0xfb4b;
    func_0x00012276();
    *(undefined2 *)0xc08 = 1;
    local_8 = auStack_18;
    local_a = auStack_14;
    local_c = &local_10;
    local_e = &local_c;
    local_10 = 0x11f2;
    uStack_12 = 0xfb74;
    func_0x000021a4();
    *(undefined2 *)0xc08 = 0x2711;
    local_8 = (undefined1 *)0xad;
    local_a = (undefined1 *)0xfb8d;
    FUN_1000_0599();
    func_0x00010526();
    if (*(int *)0x158 != 0) break;
    uVar1 = 1;
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar1) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar1) {
        func_0x00029834();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1181();
        if (!(bool)uVar1) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
        }
      }
    }
  }
  return 0xff91;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  293 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_4fbd(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar4;
  
  uVar3 = 0x3ab8;
code_r0x0003fb3d:
  *(undefined2 *)(unaff_BP + -6) = 0x12;
  do {
    func_0x00012276(uVar3,0x5b8d);
    *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)0xc08;
    *(undefined2 *)0xc08 = 1;
    uVar3 = func_0x000021a4(0x11f2,unaff_BP + -10,unaff_BP + -0xe,unaff_BP + -0x12,unaff_BP + -0x16,
                            *(undefined2 *)(unaff_BP + -6),0x2711);
    *(undefined2 *)(unaff_BP + -4) = uVar3;
    *(undefined2 *)0xc08 = *(undefined2 *)(unaff_BP + -2);
    FUN_1000_0599(0xad,0x11,2);
    func_0x00010526(0xdef);
    if (*(int *)0x158 != 0) {
      return 0xff91;
    }
    if ((*(int *)(unaff_BP + -4) == 99) ||
       (uVar4 = *(int *)(unaff_BP + -4) != -1, *(int *)(unaff_BP + -4) == -1)) {
LAB_3ab8_50dc:
      return *(undefined2 *)(unaff_BP + -4);
    }
    func_0x00029834(0xdef);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar4) {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar4) {
        func_0x00029834(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar4) {
          func_0x000297e6(0x22b2);
          func_0x000297e6(0x22b2);
          FUN_28b3_1181(0x22b2);
          if ((!(bool)uVar4) &&
             ((*(int *)(unaff_BP + -4) == 0x66 || (*(int *)(unaff_BP + -4) == 0)))) {
            uVar3 = *(undefined2 *)(unaff_BP + -8);
            puVar1 = (undefined2 *)*(undefined2 *)(unaff_BP + 10);
            *puVar1 = *(undefined2 *)(unaff_BP + -10);
            puVar1[1] = uVar3;
            if ((*(int *)(unaff_BP + 8) < 1) &&
               ((*(int *)(unaff_BP + 8) < 0 || (*(uint *)(unaff_BP + 6) < 3)))) {
              uVar3 = *(undefined2 *)(unaff_BP + -0xc);
              puVar1 = (undefined2 *)*(undefined2 *)(unaff_BP + 0xc);
              *puVar1 = *(undefined2 *)(unaff_BP + -0xe);
              puVar1[1] = uVar3;
            }
            goto LAB_3ab8_50dc;
          }
        }
      }
    }
    uVar3 = ((undefined2 *)*(int *)(unaff_BP + 10))[1];
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)*(int *)(unaff_BP + 10);
    *(undefined2 *)(unaff_BP + -8) = uVar3;
    uVar3 = ((undefined2 *)*(int *)(unaff_BP + 0xc))[1];
    *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)*(int *)(unaff_BP + 0xc);
    *(undefined2 *)(unaff_BP + -0xc) = uVar3;
    func_0x0001bb4e(0x22b2);
    uVar3 = 0x11f2;
    func_0x00012276(0x1bb4,0x5b78);
    if ((0 < *(int *)(unaff_BP + 8)) ||
       ((-1 < *(int *)(unaff_BP + 8) && (2 < *(uint *)(unaff_BP + 6))))) goto code_r0x0003fb3d;
    *(undefined2 *)(unaff_BP + -6) = 0x1b;
    func_0x00012276(0x11f2,0x5b7f);
    if (*(int *)0x11ea == 0) {
      uVar2 = 0x5b8a;
    }
    else {
      uVar2 = 0x5b87;
    }
    uVar3 = 0x11f2;
    func_0x00012276(0x11f2,uVar2);
  } while( true );
}



/* 3ab8:50e3  FUN_3ab8_50e3  155 bytes, 0 callers */

void FUN_3ab8_50e3(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iStack_102;
  undefined2 **appuStack_100 [2];
  int iStack_fc;
  int iStack_fa;
  undefined1 auStack_f8 [4];
  undefined2 **appuStack_f4 [11];
  undefined2 **appuStack_de [11];
  undefined2 **appuStack_c8 [11];
  undefined2 **appuStack_b2 [11];
  undefined2 **appuStack_9c [50];
  int iStack_38;
  int aiStack_36 [5];
  undefined2 **appuStack_2c [5];
  undefined2 **appuStack_22 [4];
  undefined2 uStack_1a;
  undefined2 **ppuStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined2 **ppuStack_e;
  undefined1 *puStack_c;
  undefined2 ****ppppuStack_a;
  undefined2 ****ppppuStack_8;
  
  FUN_21f2_0ebc();
  ppppuStack_8 = (undefined2 ****)0x0;
  ppppuStack_a = (undefined2 ****)0x22b2;
  puStack_c = (undefined1 *)0xfc78;
  func_0x0000daa6();
  ppppuStack_8 = (undefined2 ****)0x885;
  ppppuStack_a = (undefined2 ****)0xfc7e;
  func_0x0000c3ca();
  ppppuStack_8 = (undefined2 ****)0x885;
  ppppuStack_a = (undefined2 ****)0xfc83;
  func_0x0001bb8f();
  ppppuStack_8 = (undefined2 ****)0x1bb4;
  ppppuStack_a = (undefined2 ****)0xfc88;
  func_0x0001bba4();
  ppppuStack_8 = (undefined2 ****)0x129;
  ppppuStack_a = (undefined2 ****)0x222;
  puStack_c = (undefined1 *)0x26;
  ppuStack_e = (undefined2 **)0xf3;
  iStack_10 = 0x1bb4;
  uStack_12 = 0xfc9d;
  func_0x0000a76b();
  ppppuStack_8 = (undefined2 ****)*(undefined2 *)0x1b40;
  ppppuStack_a = (undefined2 ****)*(undefined2 *)0x1b3e;
  puStack_c = (undefined1 *)(*(int *)0xa60 + 1);
  ppuStack_e = (undefined2 **)0x0;
  iStack_10 = 0x885;
  uStack_12 = 0xfcb5;
  func_0x0000a76b();
  ppppuStack_8 = (undefined2 ****)0x885;
  ppppuStack_a = (undefined2 ****)0xfcbd;
  func_0x0000a799();
  ppppuStack_8 = (undefined2 ****)0x885;
  ppppuStack_a = (undefined2 ****)0xfcc2;
  func_0x0000c354();
  ppppuStack_8 = (undefined2 ****)0x0;
  ppppuStack_a = (undefined2 ****)0x0;
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xc08 = 1;
  *(undefined2 *)0xc28 = 1;
  puStack_c = (undefined1 *)0x1;
  ppuStack_e = (undefined2 **)0x7;
  iStack_10 = 199;
  uStack_12 = 0x220;
  iStack_14 = 0x28;
  uStack_16 = 0xf5;
  ppuStack_18 = (undefined2 **)0x885;
  uStack_1a = 0xfcf1;
  func_0x0000f350();
  ppppuStack_8 = (undefined2 ****)0x0;
  ppppuStack_a = (undefined2 ****)0x0;
  puStack_c = (undefined1 *)0x1;
  ppuStack_e = (undefined2 **)0x7;
  iStack_10 = 200;
  uStack_12 = 0x221;
  iStack_14 = 0x27;
  uStack_16 = 0xf4;
  ppuStack_18 = (undefined2 **)0xdef;
  uStack_1a = 0xfd17;
  func_0x0000f350();
  ppppuStack_8 = (undefined2 ****)0x0;
  ppppuStack_a = (undefined2 ****)0x0;
  puStack_c = (undefined1 *)0x1;
  ppuStack_e = (undefined2 **)0x7;
  iStack_10 = 200;
  uStack_12 = 0x158;
  iStack_14 = 0x48;
  uStack_16 = 0xf4;
  ppuStack_18 = (undefined2 **)0xdef;
  uStack_1a = 0xfd35;
  func_0x0000f350();
  iStack_38 = 0;
  do {
    ppppuStack_8 = (undefined2 ****)0x0;
    ppppuStack_a = (undefined2 ****)0x0;
    puStack_c = (undefined1 *)0x0;
    ppuStack_e = (undefined2 **)0x7;
    iStack_14 = iStack_38 * 0x20 + 0x48;
    uStack_12 = 0x220;
    uStack_16 = 0xf5;
    ppuStack_18 = (undefined2 **)0xdef;
    uStack_1a = 0xfd5f;
    iStack_10 = iStack_14;
    func_0x0000f350();
    iStack_38 = iStack_38 + 1;
  } while (iStack_38 < 4);
  ppppuStack_8 = (undefined2 ****)0x0;
  ppppuStack_a = (undefined2 ****)0x0;
  puStack_c = (undefined1 *)0x1;
  ppuStack_e = (undefined2 **)0x7;
  iStack_10 = 0x127;
  uStack_12 = 0x220;
  iStack_14 = 0xe8;
  uStack_16 = 0xf5;
  ppuStack_18 = (undefined2 **)0xdef;
  uStack_1a = 0xfd8e;
  func_0x0000f350();
  ppppuStack_8 = (undefined2 ****)0x0;
  ppppuStack_a = (undefined2 ****)0x0;
  puStack_c = (undefined1 *)0x1;
  ppuStack_e = (undefined2 **)0x7;
  iStack_10 = 0x128;
  uStack_12 = 0x221;
  iStack_14 = 0xe7;
  uStack_16 = 0xf4;
  ppuStack_18 = (undefined2 **)0xdef;
  uStack_1a = 0xfdb4;
  func_0x0000f350();
  ppppuStack_8 = (undefined2 ****)0x0;
  ppppuStack_a = (undefined2 ****)0x0;
  puStack_c = (undefined1 *)0x1;
  ppuStack_e = (undefined2 **)0x7;
  iStack_10 = 0x128;
  uStack_12 = 0x158;
  iStack_14 = 0x108;
  uStack_16 = 0xf4;
  ppuStack_18 = (undefined2 **)0xdef;
  uStack_1a = 0xfdd7;
  func_0x0000f350();
  ppppuStack_8 = (undefined2 ****)0x0;
  ppppuStack_a = (undefined2 ****)0x0;
  puStack_c = (undefined1 *)0x1;
  ppuStack_e = (undefined2 **)0x7;
  iStack_10 = 0x128;
  uStack_12 = 0x220;
  iStack_14 = 0x108;
  uStack_16 = 0xf4;
  ppuStack_18 = (undefined2 **)0xdef;
  uStack_1a = 0xfdf5;
  func_0x0000f350();
  ppppuStack_8 = (undefined2 ****)0x5b91;
  ppppuStack_a = (undefined2 ****)appuStack_22;
  puStack_c = (undefined1 *)0xdef;
  ppuStack_e = (undefined2 **)0xfe05;
  func_0x00024c86();
  ppppuStack_8 = (undefined2 ****)appuStack_22;
  ppppuStack_a = (undefined2 ****)appuStack_2c;
  puStack_c = (undefined1 *)0x22b2;
  ppuStack_e = (undefined2 **)0xfe14;
  func_0x00024c86();
  ppppuStack_8 = (undefined2 ****)0x5b97;
  ppppuStack_a = (undefined2 ****)appuStack_2c;
  puStack_c = (undefined1 *)0x22b2;
  ppuStack_e = (undefined2 **)0xfe23;
  FUN_21f2_2d26();
  ppppuStack_8 = (undefined2 ****)0x5b9a;
  ppppuStack_a = (undefined2 ****)appuStack_b2;
  puStack_c = (undefined1 *)0x22b2;
  ppuStack_e = (undefined2 **)0xfe33;
  func_0x00024c86();
  ppppuStack_8 = (undefined2 ****)0x5ba5;
  ppppuStack_a = (undefined2 ****)appuStack_c8;
  puStack_c = (undefined1 *)0x22b2;
  ppuStack_e = (undefined2 **)0xfe43;
  func_0x00024c86();
  ppppuStack_8 = (undefined2 ****)appuStack_2c;
  ppppuStack_a = (undefined2 ****)appuStack_c8;
  puStack_c = (undefined1 *)0x22b2;
  ppuStack_e = (undefined2 **)0xfe53;
  FUN_21f2_2d26();
  ppppuStack_8 = (undefined2 ****)0x5bac;
  ppppuStack_a = (undefined2 ****)appuStack_de;
  puStack_c = (undefined1 *)0x22b2;
  ppuStack_e = (undefined2 **)0xfe63;
  func_0x00024c86();
  ppppuStack_8 = (undefined2 ****)appuStack_22;
  ppppuStack_a = (undefined2 ****)appuStack_de;
  puStack_c = (undefined1 *)0x22b2;
  ppuStack_e = (undefined2 **)0xfe73;
  FUN_21f2_2d26();
  ppppuStack_8 = (undefined2 ****)0x5bb3;
  ppppuStack_a = (undefined2 ****)appuStack_f4;
  puStack_c = (undefined1 *)0x22b2;
  ppuStack_e = (undefined2 **)0xfe83;
  func_0x00024c86();
  ppppuStack_8 = (undefined2 ****)0x5bba;
  ppppuStack_a = (undefined2 ****)&ppuStack_18;
  puStack_c = (undefined1 *)0x22b2;
  ppuStack_e = (undefined2 **)0xfe92;
  func_0x00024c86();
  ppppuStack_8 = (undefined2 ****)0x5bbd;
  ppppuStack_a = &ppppuStack_a;
  puStack_c = (undefined1 *)0x22b2;
  ppuStack_e = (undefined2 **)0xfea1;
  func_0x00024c86();
  ppppuStack_8 = (undefined2 ****)0x4;
  ppppuStack_a = (undefined2 ****)0x20;
  puStack_c = (undefined1 *)0x22b2;
  ppuStack_e = (undefined2 **)0xfeb0;
  FUN_1000_0599();
  ppppuStack_8 = (undefined2 ****)0x5bc0;
  ppppuStack_a = (undefined2 ****)0xdef;
  puStack_c = (undefined1 *)0xfebb;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_b2;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xfec6;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x6;
  ppppuStack_a = (undefined2 ****)0x20;
  puStack_c = (undefined1 *)0x11f2;
  ppuStack_e = (undefined2 **)0xfed4;
  FUN_1000_0599();
  ppppuStack_8 = (undefined2 ****)&ppuStack_18;
  ppppuStack_a = (undefined2 ****)0xdef;
  puStack_c = (undefined1 *)0xfedf;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_c8;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xfeea;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)&ppuStack_18;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xfef4;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_de;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xfeff;
  func_0x00012276();
  ppppuStack_8 = &ppppuStack_a;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xff09;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_f4;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xff14;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x8;
  ppppuStack_a = (undefined2 ****)0x20;
  puStack_c = (undefined1 *)0x11f2;
  ppuStack_e = (undefined2 **)0xff22;
  FUN_1000_0599();
  ppppuStack_8 = &ppppuStack_a;
  ppppuStack_a = (undefined2 ****)0xdef;
  puStack_c = (undefined1 *)0xff2d;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_c8;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xff38;
  func_0x00012276();
  ppppuStack_8 = &ppppuStack_a;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xff42;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_de;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xff4d;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x5bc3;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xff57;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_f4;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xff62;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0xa;
  ppppuStack_a = (undefined2 ****)0x20;
  puStack_c = (undefined1 *)0x11f2;
  ppuStack_e = (undefined2 **)0xff70;
  FUN_1000_0599();
  ppppuStack_8 = (undefined2 ****)0x60a;
  ppppuStack_a = (undefined2 ****)0xdef;
  puStack_c = (undefined1 *)0xff7b;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x5bc6;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xff85;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_2c;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xff8f;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x5bc9;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xff99;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_22;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xffa3;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x5bd2;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xffad;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0xc;
  ppppuStack_a = (undefined2 ****)0x20;
  puStack_c = (undefined1 *)0x11f2;
  ppuStack_e = (undefined2 **)0xffbb;
  FUN_1000_0599();
  ppppuStack_8 = (undefined2 ****)0x5bdb;
  ppppuStack_a = (undefined2 ****)0xdef;
  puStack_c = (undefined1 *)0xffc6;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_2c;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xffd0;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x5be4;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xffda;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_22;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xffe4;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x5bed;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0xffee;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x10;
  ppppuStack_a = (undefined2 ****)0x20;
  puStack_c = (undefined1 *)0x11f2;
  ppuStack_e = (undefined2 **)0xfffc;
  FUN_1000_0599();
  ppppuStack_8 = (undefined2 ****)0x5bf6;
  ppppuStack_a = (undefined2 ****)0xdef;
  puStack_c = (undefined1 *)0x7;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_b2;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0x12;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x12;
  ppppuStack_a = (undefined2 ****)0x20;
  puStack_c = (undefined1 *)0x11f2;
  ppuStack_e = (undefined2 **)0x20;
  FUN_1000_0599();
  ppppuStack_8 = (undefined2 ****)0x5bf9;
  ppppuStack_a = (undefined2 ****)0xdef;
  puStack_c = (undefined1 *)0x2b;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_22;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0x35;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x5c04;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0x3f;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)appuStack_22;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0x49;
  func_0x00012276();
  ppppuStack_8 = (undefined2 ****)0x5c0d;
  ppppuStack_a = (undefined2 ****)0x11f2;
  uVar3 = 0x11f2;
  puStack_c = (undefined1 *)0x53;
  func_0x00012276();
  do {
    for (iStack_102 = 0; iStack_102 < 7; iStack_102 = iStack_102 + 1) {
      if (*(int *)(iStack_102 * 2 + 0x5c28) != 0) {
        uStack_12 = uVar3;
        if ((*(uint *)(iStack_102 * 2 + 0x5c28) & (uint)*(byte *)0xce0) == 0) {
          ppppuStack_8 = (undefined2 ****)0x0;
          ppppuStack_a = (undefined2 ****)0x7;
          iVar1 = (iStack_102 + 3) * 2;
          ppuStack_e = (undefined2 **)0x2d;
          iStack_10 = 0x5c1c;
          iStack_14 = 0x7c;
          puStack_c = (undefined1 *)iVar1;
          FUN_1000_02b5();
          iStack_10 = 0x5c1f;
          puStack_c = (undefined1 *)iVar1;
        }
        else {
          ppppuStack_8 = (undefined2 ****)0x0;
          ppppuStack_a = (undefined2 ****)0x7;
          iVar1 = (iStack_102 + 3) * 2;
          ppuStack_e = (undefined2 **)0x2d;
          iStack_10 = 0x5c16;
          iStack_14 = 0xdd;
          puStack_c = (undefined1 *)iVar1;
          FUN_1000_02b5();
          iStack_10 = 0x5c19;
          puStack_c = (undefined1 *)iVar1;
        }
        ppppuStack_8 = (undefined2 ****)0x0;
        ppppuStack_a = (undefined2 ****)0x7;
        ppuStack_e = (undefined2 **)0x3a;
        uStack_12 = 0xdef;
        uVar3 = 0xdef;
        iStack_14 = 0x94;
        FUN_1000_02b5();
      }
    }
    do {
      do {
        ppppuStack_8 = (undefined2 ****)0x652;
        ppppuStack_a = (undefined2 ****)appuStack_9c;
        ppuStack_e = (undefined2 **)0x17e;
        puStack_c = (undefined1 *)uVar3;
        FUN_21f2_3454();
        ppppuStack_8 = (undefined2 ****)0x5c22;
        ppppuStack_a = (undefined2 ****)appuStack_9c;
        puStack_c = (undefined1 *)0x22b2;
        ppuStack_e = (undefined2 **)0x18e;
        FUN_21f2_2d26();
        ppppuStack_8 = (undefined2 ****)0x302;
        ppppuStack_a = (undefined2 ****)appuStack_9c;
        puStack_c = (undefined1 *)0x22b2;
        ppuStack_e = (undefined2 **)0x19e;
        FUN_21f2_2d26();
        ppppuStack_8 = (undefined2 ****)0x98a;
        ppppuStack_a = (undefined2 ****)appuStack_9c;
        puStack_c = (undefined1 *)0x22b2;
        ppuStack_e = (undefined2 **)0x1ae;
        FUN_21f2_2d26();
        ppppuStack_8 = (undefined2 ****)0x652;
        ppppuStack_a = (undefined2 ****)appuStack_9c;
        puStack_c = (undefined1 *)0x22b2;
        ppuStack_e = (undefined2 **)0x1be;
        FUN_21f2_2d26();
        ppppuStack_8 = (undefined2 ****)0x928;
        ppppuStack_a = (undefined2 ****)appuStack_9c;
        puStack_c = (undefined1 *)0x22b2;
        ppuStack_e = (undefined2 **)0x1ce;
        FUN_21f2_2d26();
        ppppuStack_8 = (undefined2 ****)0x98a;
        ppppuStack_a = (undefined2 ****)appuStack_9c;
        puStack_c = (undefined1 *)0x22b2;
        ppuStack_e = (undefined2 **)0x1de;
        FUN_21f2_2d26();
        ppppuStack_8 = (undefined2 ****)appuStack_9c;
        ppppuStack_a = (undefined2 ****)0x1;
        puStack_c = (undefined1 *)0x22b2;
        ppuStack_e = (undefined2 **)0x1ee;
        FUN_1def_07a4();
        ppppuStack_8 = (undefined2 ****)aiStack_36;
        ppppuStack_a = (undefined2 ****)appuStack_100;
        puStack_c = auStack_f8;
        ppuStack_e = appuStack_9c;
        iStack_10 = 9999;
        uStack_12 = 0x1bb4;
        uVar3 = 0x1bb4;
        iStack_14 = 0x20c;
        iStack_fa = FUN_1def_0904();
        if (((*(int *)0x158 != 0) || (iStack_fa == 1)) || (iStack_fa == -1)) goto LAB_3ab8_5729;
        iStack_fc = 0;
        if ((iStack_fa == 99) || (iStack_fa == 0x3f00)) goto LAB_3ab8_56ba;
      } while (aiStack_36[0] == 0);
      ppppuStack_8 = (undefined2 ****)0x1bb4;
      ppppuStack_a = (undefined2 ****)0x100;
      func_0x000297e6();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x109;
      FUN_28b3_100d();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x112;
      func_0x00029b6d();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x11b;
      FUN_28b3_0d8b();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x120;
      FUN_28b3_1168();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x125;
      func_0x00029d78();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x12a;
      ppuStack_e = (undefined2 **)FUN_28b3_0f51();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x136;
      func_0x000297e6();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x13f;
      FUN_28b3_100d();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x148;
      func_0x00029b6d();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x151;
      FUN_28b3_0d8b();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x156;
      FUN_28b3_117c();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      ppppuStack_a = (undefined2 ****)0x15b;
      func_0x00029d78();
      ppppuStack_8 = (undefined2 ****)0x22b2;
      uVar3 = 0x22b2;
      ppppuStack_a = (undefined2 ****)0x160;
      puStack_c = (undefined1 *)FUN_28b3_0f51();
    } while ((((int)puStack_c < 0xf4) || (0x221 < (int)puStack_c)) ||
            (((int)ppuStack_e < 0x48 || (0x169 < (int)ppuStack_e))));
    uVar2 = (int)(ppuStack_e + -0x24) >> 0xf;
    iStack_fc = (((int)(((uint)(ppuStack_e + -0x24) ^ uVar2) - uVar2) >> 5 ^ uVar2) - uVar2) + 1;
LAB_3ab8_56ba:
    if (iStack_fc == 1) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 1;
    }
    else if (iStack_fc == 2) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 8;
    }
    else if (iStack_fc == 3) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 4;
    }
    else if (iStack_fc == 4) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 2;
    }
    else if (iStack_fc == 7) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 0x10;
    }
  } while (*(int *)0x158 == 0);
LAB_3ab8_5729:
  ppppuStack_a = (undefined2 ****)0x2ae;
  ppppuStack_8 = (undefined2 ****)uVar3;
  FUN_10ad_18a4();
  ppppuStack_8 = (undefined2 ****)0x0;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined1 *)0x2b6;
  func_0x0001470b();
  *(undefined2 *)0xc28 = 0;
  return;
}



/* 3ab8:517f  FUN_3ab8_517f  176 bytes, 2 callers */

void FUN_3ab8_517f(void)

{
  char *pcVar1;
  undefined2 *puVar2;
  char cVar3;
  uint in_AX;
  int iVar4;
  int iVar5;
  char in_DL;
  uint uVar6;
  undefined2 *unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_100;
  int iStack_fa;
  int local_36;
  int iStack_34;
  
  pcVar1 = (char *)((int)unaff_BP + unaff_DI + -0x42);
  *pcVar1 = *pcVar1 + in_DL;
  cVar3 = '\x1e';
  puVar2 = (undefined2 *)register0x00000010;
  do {
    unaff_BP = unaff_BP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_BP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  *(uint *)(&stack0x0000 + unaff_SI) = *(uint *)(&stack0x0000 + unaff_SI) & in_AX;
  func_0x0000f350();
  func_0x0000f350();
  local_36 = 0;
  do {
    func_0x0000f350();
    local_36 = local_36 + 1;
  } while (local_36 < 4);
  func_0x0000f350();
  func_0x0000f350();
  func_0x0000f350();
  func_0x0000f350();
  func_0x00024c86();
  func_0x00024c86();
  FUN_21f2_2d26();
  func_0x00024c86();
  func_0x00024c86();
  FUN_21f2_2d26();
  func_0x00024c86();
  FUN_21f2_2d26();
  func_0x00024c86();
  func_0x00024c86();
  func_0x00024c86();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  do {
    for (iStack_100 = 0; iStack_100 < 7; iStack_100 = iStack_100 + 1) {
      if (*(int *)(iStack_100 * 2 + 0x5c28) != 0) {
        if ((*(uint *)(iStack_100 * 2 + 0x5c28) & (uint)*(byte *)0xce0) == 0) {
          FUN_1000_02b5();
        }
        else {
          FUN_1000_02b5();
        }
        FUN_1000_02b5();
      }
    }
    do {
      do {
        FUN_21f2_3454();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_1def_07a4();
        iVar5 = FUN_1def_0904();
        if (((*(int *)0x158 != 0) || (iVar5 == 1)) || (iVar5 == -1)) goto LAB_3ab8_5729;
        iStack_fa = 0;
        if ((iVar5 == 99) || (iVar5 == 0x3f00)) goto LAB_3ab8_56ba;
      } while (iStack_34 == 0);
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029b6d();
      FUN_28b3_0d8b();
      FUN_28b3_1168();
      func_0x00029d78();
      iVar5 = FUN_28b3_0f51();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029b6d();
      FUN_28b3_0d8b();
      FUN_28b3_117c();
      func_0x00029d78();
      iVar4 = FUN_28b3_0f51();
    } while (((iVar4 < 0xf4) || (0x221 < iVar4)) || ((iVar5 < 0x48 || (0x169 < iVar5))));
    uVar6 = (int)(iVar5 - 0x48U) >> 0xf;
    iStack_fa = (((int)((iVar5 - 0x48U ^ uVar6) - uVar6) >> 5 ^ uVar6) - uVar6) + 1;
LAB_3ab8_56ba:
    if (iStack_fa == 1) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 1;
    }
    else if (iStack_fa == 2) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 8;
    }
    else if (iStack_fa == 3) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 4;
    }
    else if (iStack_fa == 4) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 2;
    }
    else if (iStack_fa == 7) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 0x10;
    }
  } while (*(int *)0x158 == 0);
LAB_3ab8_5729:
  FUN_10ad_18a4();
  func_0x0001470b();
  *(undefined2 *)0xc28 = 0;
  return;
}



/* 3ab8:522f  FUN_3ab8_522f  1300 bytes, 2 callers */

void __cdecl16far FUN_3ab8_522f(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  func_0x0000f350(0x3ab8);
  func_0x0000f350(0xdef);
  func_0x0000f350(0xdef);
  func_0x00024c86();
  func_0x00024c86();
  FUN_21f2_2d26();
  func_0x00024c86();
  func_0x00024c86();
  FUN_21f2_2d26();
  func_0x00024c86();
  FUN_21f2_2d26();
  func_0x00024c86();
  func_0x00024c86();
  func_0x00024c86();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  do {
    *(undefined2 *)(unaff_BP + -0x100) = 0;
    while (*(int *)(unaff_BP + -0x100) < 7) {
      iVar2 = *(int *)(unaff_BP + -0x100) * 2;
      if (*(int *)(iVar2 + 0x5c28) != 0) {
        if ((*(uint *)(iVar2 + 0x5c28) & (uint)*(byte *)0xce0) == 0) {
          FUN_1000_02b5();
        }
        else {
          FUN_1000_02b5();
        }
        FUN_1000_02b5();
      }
      *(int *)(unaff_BP + -0x100) = *(int *)(unaff_BP + -0x100) + 1;
    }
    do {
      do {
        FUN_21f2_3454();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_1def_07a4();
        iVar2 = FUN_1def_0904();
        *(int *)(unaff_BP + -0xf8) = iVar2;
        if (((*(int *)0x158 != 0) || (iVar2 == 1)) || (iVar2 == -1)) goto LAB_3ab8_5729;
        *(undefined2 *)(unaff_BP + -0xfa) = 0;
        if ((iVar2 == 99) || (iVar2 == 0x3f00)) goto LAB_3ab8_56ba;
      } while (*(int *)(unaff_BP + -0x34) == 0);
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029b6d();
      FUN_28b3_0d8b();
      FUN_28b3_1168();
      func_0x00029d78();
      uVar1 = FUN_28b3_0f51();
      *(undefined2 *)(unaff_BP + -0xc) = uVar1;
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029b6d();
      FUN_28b3_0d8b();
      FUN_28b3_117c();
      func_0x00029d78();
      iVar2 = FUN_28b3_0f51();
      *(int *)(unaff_BP + -10) = iVar2;
    } while (((iVar2 < 0xf4) || (0x221 < iVar2)) ||
            ((*(int *)(unaff_BP + -0xc) < 0x48 || (0x169 < *(int *)(unaff_BP + -0xc)))));
    uVar3 = *(int *)(unaff_BP + -0xc) - 0x48;
    uVar4 = (int)uVar3 >> 0xf;
    *(int *)(unaff_BP + -0xfa) = (((int)((uVar3 ^ uVar4) - uVar4) >> 5 ^ uVar4) - uVar4) + 1;
LAB_3ab8_56ba:
    iVar2 = *(int *)(unaff_BP + -0xfa);
    if (iVar2 == 1) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 1;
    }
    else if (iVar2 == 2) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 8;
    }
    else if (iVar2 == 3) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 4;
    }
    else if (iVar2 == 4) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 2;
    }
    else if (iVar2 == 7) {
      *(byte *)0xce0 = *(byte *)0xce0 ^ 0x10;
    }
  } while (*(int *)0x158 == 0);
LAB_3ab8_5729:
  FUN_10ad_18a4();
  func_0x0001470b();
  *(undefined2 *)0xc28 = 0;
  return;
}



/* 4000:02c3  FUN_4000_02c3  762 bytes, 0 callers */

undefined2 __cdecl16far FUN_4000_02c3(void)

{
  byte *pbVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 local_126 [100];
  undefined1 local_c2 [60];
  uint local_86;
  int local_84;
  int local_82;
  undefined1 local_80 [2];
  undefined1 local_7e [6];
  undefined1 local_78 [4];
  int local_74 [2];
  uint uStack_70;
  uint uStack_6e;
  uint uStack_6c;
  undefined1 local_6a [2];
  uint local_68;
  int local_66 [43];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int *piStack_a;
  int *piStack_8;
  int *piStack_6;
  int *piStack_4;
  
  piStack_4 = (int *)0x3ab8;
  uVar6 = 0x22b2;
  piStack_6 = (int *)0x2ce;
  FUN_21f2_0ebc();
  *(undefined1 *)0xed8 = 0;
  *(undefined1 *)0xc3e2 = 0;
LAB_3ab8_5756:
  do {
    do {
      do {
        while( true ) {
          do {
            piStack_4 = (int *)0x5c36;
            piStack_6 = local_66;
            piStack_a = (int *)0x2e3;
            piStack_8 = (int *)uVar6;
            FUN_21f2_3454();
            piStack_4 = (int *)0x7e6;
            piStack_6 = local_66;
            piStack_8 = (int *)0x22b2;
            piStack_a = (int *)0x2f2;
            FUN_21f2_2d26();
            piStack_4 = (int *)0x5c39;
            piStack_6 = local_66;
            piStack_8 = (int *)0x22b2;
            piStack_a = (int *)0x301;
            FUN_21f2_2d26();
            piStack_4 = local_66;
            piStack_6 = (int *)0x3;
            piStack_8 = (int *)0x22b2;
            piStack_a = (int *)0x310;
            FUN_1def_07a4();
            piStack_4 = (int *)local_6a;
            piStack_6 = (int *)local_78;
            piStack_8 = local_74;
            piStack_a = local_66;
            *(undefined2 *)0xc2c = 1;
            uStack_c = 1;
            uStack_e = 0x1bb4;
            uVar6 = 0x1bb4;
            uStack_10 = 0x32e;
            local_68 = FUN_1def_0904();
            *(undefined2 *)0xc2c = 0;
            if (*(int *)0x158 != 0) {
              return 0;
            }
            if (local_68 == 0xffff) {
              if (*(int *)0xd76 == 0) {
                return 0xffff;
              }
              local_68 = 2;
              *(undefined1 *)0xd14 = 0;
            }
            else {
              *(undefined2 *)0xd76 = 0;
            }
            if (local_68 == 0x14) {
              return 0xffff;
            }
            if (local_68 < 0x15) {
              cVar3 = (char)local_68;
              if (cVar3 == '\x01') {
                piStack_4 = (int *)0x0;
                pcVar2 = (code *)swi(0x3f);
                (*pcVar2)();
              }
              else if (cVar3 == '\x02') {
                *(undefined1 *)0xd74 = 1;
                piStack_4 = (int *)0x0;
                pcVar2 = (code *)swi(0x3f);
                (*pcVar2)();
                *(undefined1 *)0xd74 = 0;
                *(undefined1 *)0xd14 = 0;
              }
              else if (cVar3 == '\x03') {
                piStack_4 = (int *)0x1bb4;
                piStack_6 = (int *)0x386;
                FUN_4375_c513();
              }
            }
            *(undefined1 *)0xed8 = 0;
          } while (local_68 != 0xd);
          local_82 = 0;
          local_84 = 0;
          local_86 = 0;
          while (((local_82 == 0 && (local_84 == 0)) && (local_86 == 0))) {
            piStack_6 = (int *)0x3ba;
            piStack_4 = (int *)uVar6;
            local_86 = FUN_12c1_009c();
            local_86 = local_86 & 0xff;
            piStack_4 = (int *)local_80;
            piStack_6 = (int *)local_7e;
            piStack_8 = &local_84;
            piStack_a = &local_82;
            uStack_c = 0x11f2;
            uVar6 = 0x885;
            uStack_e = 0x3d6;
            func_0x0000dcbd();
          }
          if (local_86 != 0x33) break;
          local_82 = 0;
          local_84 = 0;
          local_86 = 0;
          while (((local_82 == 0 && (local_84 == 0)) && (local_86 == 0))) {
            piStack_6 = (int *)0x427;
            piStack_4 = (int *)uVar6;
            local_86 = FUN_12c1_009c();
            local_86 = local_86 & 0xff;
            piStack_4 = (int *)local_80;
            piStack_6 = (int *)local_7e;
            piStack_8 = &local_84;
            piStack_a = &local_82;
            uStack_c = 0x11f2;
            uVar6 = 0x885;
            uStack_e = 0x443;
            func_0x0000dcbd();
          }
          if ((local_86 == 100) || (local_86 == 0x44)) {
            piStack_4 = (int *)0x3;
            pcVar2 = (code *)swi(0x3f);
            (*pcVar2)();
            return 0;
          }
        }
      } while ((local_86 != 100) && (local_86 != 0x44));
      local_82 = 0;
      local_84 = 0;
      local_86 = 0;
      while (((local_82 == 0 && (local_84 == 0)) && (local_86 == 0))) {
        piStack_6 = (int *)0x49d;
        piStack_4 = (int *)uVar6;
        local_86 = FUN_12c1_009c();
        local_86 = local_86 & 0xff;
        piStack_4 = (int *)local_80;
        piStack_6 = (int *)local_7e;
        piStack_8 = &local_84;
        piStack_a = &local_82;
        uStack_c = 0x11f2;
        uVar6 = 0x885;
        uStack_e = 0x4b9;
        func_0x0000dcbd();
      }
    } while (local_86 != 0x32);
    local_82 = 0;
    local_84 = 0;
    local_86 = 0;
    while (((local_82 == 0 && (local_84 == 0)) && (local_86 == 0))) {
      piStack_6 = (int *)0x4ee;
      piStack_4 = (int *)uVar6;
      local_86 = FUN_12c1_009c();
      local_86 = local_86 & 0xff;
      piStack_4 = (int *)local_80;
      piStack_6 = (int *)local_7e;
      piStack_8 = &local_84;
      piStack_a = &local_82;
      uStack_c = 0x11f2;
      uVar6 = 0x885;
      uStack_e = 0x50a;
      func_0x0000dcbd();
    }
  } while ((local_86 != 0x6b) && (local_86 != 0x4b));
  piStack_4 = (int *)0xeae;
  piStack_6 = (int *)0xe82;
  piStack_8 = (int *)local_c2;
  uStack_c = 0x536;
  piStack_a = (int *)uVar6;
  func_0x0001263c();
  piStack_4 = (int *)local_c2;
  piStack_6 = (int *)0xd44;
  piStack_8 = (int *)0x5c46;
  piStack_a = (int *)local_126;
  uStack_c = 0x11f2;
  uStack_e = 0x550;
  FUN_21f2_3454();
  piStack_4 = (int *)local_6a;
  piStack_6 = (int *)local_78;
  piStack_8 = local_74;
  piStack_a = (int *)local_126;
  uStack_c = 0;
  uStack_e = 0x22b2;
  uStack_10 = 0x56c;
  FUN_1def_0904();
  *(undefined1 *)0xed8 = 1;
  piStack_4 = (int *)0xd44;
  piStack_6 = (int *)0x1bb4;
  piStack_8 = (int *)0x57d;
  uVar4 = func_0x00024ce4();
  if (uVar4 < 4) {
    piStack_4 = (int *)0x5c5b;
  }
  else {
    piStack_4 = (int *)0x5c59;
  }
  piStack_6 = (int *)0xd44;
  piStack_8 = (int *)0x5c5c;
  piStack_a = (int *)local_126;
  uStack_c = 0x22b2;
  uStack_e = 0x59e;
  FUN_21f2_3454();
  piStack_4 = (int *)0xc3c4;
  piStack_6 = (int *)0x0;
  piStack_8 = (int *)local_126;
  piStack_a = (int *)0x22b2;
  uVar7 = 0x22b2;
  uStack_c = 0x5b2;
  iVar5 = func_0x000276d7();
  if (iVar5 == 0) goto LAB_3ab8_5a43;
  piStack_4 = (int *)0x5c66;
  do {
    piStack_6 = (int *)0x22b2;
    uVar7 = 0x11f2;
    piStack_8 = (int *)0x5c2;
    FUN_13bf_0a03();
LAB_3ab8_5a43:
    do {
      uVar6 = 0x11f2;
      piStack_6 = (int *)0x5c8;
      piStack_4 = (int *)uVar7;
      cVar3 = FUN_12c1_009c();
      if (cVar3 == '\x1b') goto LAB_3ab8_5756;
      piStack_4 = (int *)0x0;
      pcVar2 = (code *)swi(0x3f);
      (*pcVar2)();
      FUN_28b3_0d8b();
      func_0x00029b85();
      func_0x00029bb5();
      func_0x00029983();
      FUN_28b3_0d8b();
      func_0x00029b85();
      func_0x00029bb5();
      uVar6 = 0x22b2;
      func_0x00029983();
      uStack_6e = 1;
      uStack_6c = 0;
      while( true ) {
        uVar4 = *(uint *)0x14a;
        uVar9 = uVar4 < uStack_6c;
        if (((int)uVar4 < (int)uStack_6c) ||
           (((int)uVar4 <= (int)uStack_6c && (uVar9 = false, *(uint *)0x148 < uStack_6e)))) break;
        piStack_6 = (int *)0x661;
        piStack_4 = (int *)uVar6;
        func_0x0000013f();
        piStack_4 = (int *)0x0;
        piStack_6 = (int *)0x681;
        func_0x0000013f();
        piStack_4 = (int *)0x0;
        piStack_6 = (int *)0x6a2;
        func_0x0000013f();
        piStack_4 = (int *)0x0;
        piStack_6 = (int *)0x6c3;
        func_0x0000013f();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar9) {
LAB_3ab8_5bbd:
          uVar9 = 1;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar9) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar9) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar9) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (!(bool)uVar9) goto LAB_3ab8_5c24;
              }
            }
          }
          uVar6 = 0x22b2;
        }
        else {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar9) goto LAB_3ab8_5bbd;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar9) goto LAB_3ab8_5bbd;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar9) goto LAB_3ab8_5bbd;
LAB_3ab8_5c24:
          piStack_4 = (int *)0x22b2;
          uVar6 = 0;
          piStack_6 = (int *)0x7af;
          uVar10 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar10 + 0x14);
          *pbVar1 = *pbVar1 | 2;
        }
        bVar8 = 0xfffe < uStack_6e;
        uStack_6e = uStack_6e + 1;
        uStack_6c = uStack_6c + bVar8;
      }
      uStack_6c = 0;
      for (uStack_6e = 1;
          ((int)uStack_6c <= *(int *)0x14e &&
          (((int)uStack_6c < *(int *)0x14e || (uStack_6e <= *(uint *)0x14c))));
          uStack_6e = uStack_6e + 1) {
        piStack_6 = (int *)0x7ec;
        piStack_4 = (int *)uVar6;
        uVar10 = func_0x00000271();
        pbVar1 = (byte *)((int)uVar10 + 0x1e);
        *pbVar1 = *pbVar1 | 2;
        uStack_6c = uStack_6c + (0xfffe < uStack_6e);
        uVar6 = 0;
      }
      for (uStack_70 = 1; (int)uStack_70 <= *(int *)0x152; uStack_70 = uStack_70 + 1) {
        piStack_4 = (int *)0x808;
        uVar10 = func_0x000003ef();
        pbVar1 = (byte *)((int)uVar10 + 10);
        *pbVar1 = *pbVar1 | 2;
      }
      for (uStack_70 = 1; uVar9 = uStack_70 < *(uint *)0x150, (int)uStack_70 <= (int)*(uint *)0x150;
          uStack_70 = uStack_70 + 1) {
        piStack_4 = (int *)0x82d;
        func_0x00000398();
        piStack_4 = (int *)0x849;
        func_0x00000398();
        piStack_4 = (int *)0x866;
        func_0x00000398();
        piStack_4 = (int *)0x883;
        func_0x00000398();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar9) {
LAB_3ab8_5d7c:
          uVar9 = 1;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar9) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar9) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar9) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (!(bool)uVar9) goto LAB_3ab8_5de0;
              }
            }
          }
        }
        else {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar9) goto LAB_3ab8_5d7c;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar9) goto LAB_3ab8_5d7c;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar9) goto LAB_3ab8_5d7c;
LAB_3ab8_5de0:
          piStack_4 = (int *)0x968;
          uVar10 = func_0x00000398();
          pbVar1 = (byte *)((int)uVar10 + 0x16);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      pcVar2 = (code *)swi(0x3f);
      (*pcVar2)();
      uVar7 = 0x22b2;
      iVar5 = func_0x000276cc();
    } while (iVar5 == 0);
    piStack_4 = (int *)0x5c6a;
  } while( true );
}


