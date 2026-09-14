/* Ghidra decompilation of jw23.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  399 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_0000(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 local_46 [4];
  undefined1 local_42 [4];
  int local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34 [17];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 *puStack_e;
  undefined2 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined2 *puStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  puStack_6 = (undefined2 *)0xab8b;
  FUN_21f2_0ebc();
  while( true ) {
    do {
      do {
        uStack_4 = 0x22b2;
        puStack_6 = (undefined2 *)0xab90;
        func_0x0000c340();
        local_38 = *param_2;
        local_36 = param_2[1];
        local_3c = *param_3;
        local_3a = param_3[1];
        uStack_4 = 0x885;
        puStack_6 = (undefined2 *)0xabb1;
        func_0x0001bb4e();
        uStack_4 = 0x5480;
        puStack_6 = (undefined2 *)0x1bb4;
        puStack_8 = (undefined1 *)0xabba;
        func_0x00012276();
        uStack_4 = 1;
        puStack_6 = (undefined2 *)0x26;
        puStack_8 = (undefined1 *)0x11f2;
        puStack_a = (undefined1 *)0xabc8;
        FUN_1000_0599();
        uStack_4 = 0x31e;
        puStack_6 = (undefined2 *)0x5488;
        puStack_8 = (undefined1 *)0xdef;
        puStack_a = (undefined1 *)0xabd7;
        func_0x00012276();
        uStack_4 = 0x11f2;
        uVar1 = 0xdef;
        puStack_6 = (undefined2 *)0xabde;
        func_0x00010526();
        if (param_1 == 1) {
          uStack_4 = *(undefined2 *)0xa15a;
          puStack_6 = (undefined2 *)*(undefined2 *)0xa158;
          puStack_8 = (undefined1 *)local_36;
          puStack_a = (undefined1 *)local_38;
          puStack_c = (undefined2 *)0x549b;
          puStack_e = local_34;
          uStack_10 = 0xdef;
          uVar1 = 0x11f2;
          uStack_12 = 0xabff;
          FUN_10ad_1928();
        }
        uVar2 = uVar1;
        if (param_1 == 2) {
          uStack_4 = local_3a;
          puStack_6 = (undefined2 *)local_3c;
          puStack_8 = (undefined1 *)local_36;
          puStack_a = (undefined1 *)local_38;
          puStack_c = (undefined2 *)0x54a3;
          puStack_e = local_34;
          uVar2 = 0x11f2;
          uStack_12 = 0xac21;
          uStack_10 = uVar1;
          FUN_10ad_1928();
        }
        uStack_4 = 0x54b2;
        puStack_6 = local_34;
        puStack_a = (undefined1 *)0xac31;
        puStack_8 = (undefined1 *)uVar2;
        FUN_21f2_2d26();
        uStack_4 = 0xffff;
        puStack_6 = (undefined2 *)0x7;
        puStack_8 = (undefined1 *)0x2;
        puStack_a = (undefined1 *)0x36;
        puStack_c = local_34;
        puStack_e = (undefined2 *)0x22b2;
        uStack_10 = 0xac4c;
        FUN_1000_02b5();
        uStack_4 = 1;
        puStack_6 = (undefined2 *)0xf;
        puStack_8 = local_46;
        puStack_a = local_42;
        puStack_c = &local_3c;
        puStack_e = &local_38;
        uStack_10 = 0xdef;
        uStack_12 = 0xac6c;
        local_3e = func_0x000021a4();
        uStack_4 = 2;
        puStack_6 = (undefined2 *)0x11;
        puStack_8 = (undefined1 *)0xad;
        puStack_a = (undefined1 *)0xac7f;
        FUN_1000_0599();
        uStack_4 = 0xdef;
        puStack_6 = (undefined2 *)0xac86;
        func_0x00010526();
        uVar3 = 0;
        uVar4 = *(int *)0x158 == 0;
        if (!(bool)uVar4) {
          return 0;
        }
        uStack_4 = 0xdef;
        puStack_6 = (undefined2 *)0xac99;
        func_0x000297e6();
        uStack_4 = 0x22b2;
        puStack_6 = (undefined2 *)0xaca2;
        func_0x000297e6();
        uStack_4 = 0x22b2;
        puStack_6 = (undefined2 *)0xaca7;
        FUN_28b3_1181();
      } while (!(bool)uVar3);
      uStack_4 = 0x22b2;
      puStack_6 = (undefined2 *)0xacb5;
      func_0x00029834();
      uStack_4 = 0x22b2;
      puStack_6 = (undefined2 *)0xacbd;
      func_0x000297e6();
      uStack_4 = 0x22b2;
      puStack_6 = (undefined2 *)0xacc2;
      func_0x00029d78();
      uStack_4 = 0x22b2;
      puStack_6 = (undefined2 *)0xacc7;
      FUN_28b3_1181();
    } while (!(bool)uVar3 && !(bool)uVar4);
    if (local_3e == -1) {
      return 0xffff;
    }
    if (local_3e == 0x65) break;
    if ((local_3e == 0x66) || (local_3e == 0)) {
      *param_2 = local_38;
      param_2[1] = local_36;
      *param_3 = local_3c;
      param_3[1] = local_3a;
      return 1;
    }
  }
  return 0;
}



/* 3ab8:018f  FUN_3ab8_018f  474 bytes, 2 callers */

/* WARNING: Removing unreachable block (ram,0x0003ae12) */

undefined2 __cdecl16far FUN_3ab8_018f(int param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  long lVar7;
  undefined2 *puVar8;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined1 local_80 [86];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 local_1c;
  int local_1a;
  undefined2 local_18 [2];
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined1 *puStack_e;
  undefined1 *local_c;
  
  uVar6 = 0x22b2;
  FUN_21f2_0ebc();
  lVar7 = CONCAT22(local_84._2_2_,(undefined2)local_84);
  while( true ) {
    puStack_e = (undefined1 *)0xad29;
    local_c = (undefined1 *)uVar6;
    local_84 = lVar7;
    FUN_21f2_3454();
    local_c = (undefined1 *)0x22b2;
    puStack_e = (undefined1 *)0xad38;
    FUN_21f2_2d26();
    if (param_1 != 0) {
      local_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xad4d;
      FUN_21f2_2d26();
    }
    local_c = (undefined1 *)0x22b2;
    puStack_e = (undefined1 *)0xad5c;
    FUN_1def_07a4();
    local_c = local_88;
    puStack_e = local_80;
    local_10 = 1;
    uStack_12 = 0x1bb4;
    local_14 = 0xad79;
    local_1a = FUN_1def_0904();
    if (local_1a == -1) {
      *param_2 = 0xffff;
      param_2[1] = 0xffff;
      return 0xffff;
    }
    if (*(int *)0x158 != 0) {
      *param_2 = 0xfba9;
      param_2[1] = 0xffff;
      return 0xfba9;
    }
    if (local_1a == 1) break;
    *(undefined1 *)0xb8c = 1;
    func_0x000297e6();
    func_0x00029d78();
    local_10 = 0x22b2;
    uStack_12 = 0xaddd;
    func_0x000299d1();
    local_10 = 0x22b2;
    uStack_12 = 0xade6;
    func_0x000297e6();
    local_10 = 0x22b2;
    uStack_12 = 0xadeb;
    func_0x00029d78();
    local_18[0] = 0x22b2;
    local_1a = 0xadf5;
    func_0x000299d1();
    local_18[0] = 0x22b2;
    uVar6 = 0x11f2;
    local_1a = 0xadfa;
    lVar7 = FUN_13bf_39a0();
    *(undefined1 *)0xb8c = 0;
    if (0 < lVar7) {
      local_c = (undefined1 *)0x11f2;
      puStack_e = (undefined1 *)0xae20;
      local_84 = lVar7;
      puVar8 = (undefined2 *)func_0x0000013f();
      puVar4 = (undefined2 *)puVar8;
      puVar5 = local_18;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      func_0x000297e6();
      func_0x00029d78();
      local_10 = 0x22b2;
      uStack_12 = 0xae49;
      func_0x000299d1();
      local_10 = 0x22b2;
      uStack_12 = 0xae51;
      func_0x000297e6();
      local_10 = 0x22b2;
      uStack_12 = 0xae56;
      func_0x00029d78();
      local_18[0] = 0x22b2;
      local_1a = 0xae60;
      func_0x000299d1();
      local_18[0] = 0x22b2;
      local_1a = 0xae68;
      func_0x000297e6();
      local_18[0] = 0x22b2;
      local_1a = 0xae6d;
      func_0x00029d78();
      uStack_20 = 0x22b2;
      uStack_22 = 0xae77;
      func_0x000299d1();
      uStack_20 = 0x22b2;
      uStack_22 = 0xae7f;
      func_0x000297e6();
      uStack_20 = 0x22b2;
      uStack_22 = 0xae84;
      func_0x00029d78();
      uStack_28 = 0x22b2;
      uStack_2a = 0xae8e;
      func_0x000299d1();
      uStack_28 = 0x22b2;
      uVar6 = 0x1bb4;
      uStack_2a = 0xae93;
      iVar3 = FUN_1def_043a();
      lVar7 = local_84;
      if (iVar3 != 0) {
        *param_2 = (undefined2)local_84;
        param_2[1] = local_84._2_2_;
        return local_1c;
      }
    }
    if (lVar7 < 0) {
      local_c = (undefined1 *)0xaec0;
      local_84 = lVar7;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      local_c = (undefined1 *)0x11f2;
      puStack_e = (undefined1 *)0xaed4;
      FUN_1000_0599();
      uVar6 = 0x11f2;
      local_c = (undefined1 *)0xaedf;
      func_0x00012276();
      lVar7 = local_84;
    }
  }
  param_2[1] = 0;
  *param_2 = 0;
  return 0;
}



/* 3ab8:0369  FUN_3ab8_0369  234 bytes, 1 callers */

bool __cdecl16far FUN_3ab8_0369(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined2 *in_stack_00000024;
  undefined2 *in_stack_00000026;
  undefined1 local_a [4];
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  uStack_6 = 0xaef4;
  FUN_21f2_0ebc();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaefc;
  func_0x00029834();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf04;
  func_0x00029bfc();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf0c;
  func_0x000299b9();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf14;
  FUN_28b3_0ee9();
  uVar1 = *(undefined2 *)0xa166;
  *in_stack_00000024 = *(undefined2 *)0xa164;
  in_stack_00000024[1] = uVar1;
  uVar1 = *(undefined2 *)0xa15a;
  *in_stack_00000026 = *(undefined2 *)0xa158;
  in_stack_00000026[1] = uVar1;
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf3b;
  func_0x00029834();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf43;
  func_0x00029834();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf4b;
  func_0x00029bfc();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf53;
  func_0x000299b9();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf5b;
  func_0x00029c2c();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf63;
  func_0x00029834();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf6b;
  func_0x00029c2c();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf70;
  FUN_28b3_117c();
  func_0x000299d1(0x22b2);
  FUN_28b3_1582(0x22b2);
  uVar2 = (undefined1 *)0xfff7 < local_a;
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf89;
  func_0x00029834();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf91;
  func_0x000299b9();
  uStack_4 = 0x22b2;
  uStack_6 = 0xaf96;
  FUN_28b3_1181();
  if (!(bool)uVar2) {
    uStack_4 = 0x22b2;
    uStack_6 = 0xafa4;
    func_0x00029834();
    uStack_4 = 0x22b2;
    uStack_6 = 0xafac;
    func_0x00029c44();
    uStack_4 = 0x22b2;
    uStack_6 = 0xafb4;
    func_0x00029983();
    uStack_4 = 0x22b2;
    uStack_6 = 0xafbc;
    func_0x00029834();
    uStack_4 = 0x22b2;
    uStack_6 = 0xafc4;
    func_0x00029c44();
    uStack_4 = 0x22b2;
    uStack_6 = 0xafcc;
    func_0x00029983();
  }
  return !(bool)uVar2;
}



/* 3ab8:0453  FUN_3ab8_0453  246 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0453(int param_1)

{
  FUN_21f2_0ebc();
  if (param_1 == 0) {
    func_0x00029834(0x22b2);
    func_0x00029c2c(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029c2c(0x22b2);
    FUN_28b3_1163(0x22b2);
    func_0x00029c74(0x22b2);
    func_0x00029983(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029c2c(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029c2c(0x22b2);
    FUN_28b3_117c(0x22b2);
    func_0x00029c74(0x22b2);
  }
  else {
    func_0x00029834(0x22b2);
    func_0x00029bfc(0x22b2);
    func_0x000299b9(0x22b2);
    func_0x00029c2c(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029bfc(0x22b2);
    func_0x000299b9(0x22b2);
    func_0x00029c2c(0x22b2);
    FUN_28b3_117c(0x22b2);
    func_0x00029983(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029c2c(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029c2c(0x22b2);
    FUN_28b3_1163(0x22b2);
  }
  func_0x00029983(0x22b2);
  return 1;
}



/* 3ab8:0549  FUN_3ab8_0549  385 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_0549(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 *in_stack_00000034;
  undefined2 *in_stack_00000036;
  undefined2 auStack_44 [10];
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 *puStack_e;
  undefined2 *local_c;
  undefined2 *puStack_a;
  undefined1 *puStack_8;
  
  FUN_21f2_0ebc();
  local_18 = param_1;
  local_16 = param_2;
  local_14 = param_3;
  local_12 = param_4;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb0f6;
  func_0x00029834();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb0fe;
  func_0x00029983();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb106;
  func_0x00029834();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb10e;
  func_0x00029983();
  puStack_8 = &stack0xffd0;
  puStack_a = &local_28;
  local_c = &local_2c;
  puStack_e = &local_24;
  puVar5 = &local_2e;
  puVar4 = &param_1;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = auStack_44;
  puVar4 = &local_18;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iVar3 = FUN_1def_2179();
  uVar6 = 0;
  uVar7 = iVar3 == 0;
  if (!(bool)uVar7) {
    puStack_8 = (undefined1 *)0x1bb4;
    puStack_a = (undefined2 *)0xb151;
    func_0x000297e6();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb156;
    func_0x00029d78();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb15e;
    func_0x00029bfc();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb166;
    func_0x0002996b();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb16e;
    FUN_28b3_0ee9();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb176;
    func_0x000297e6();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb17b;
    func_0x00029d78();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb183;
    func_0x00029bfc();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb18b;
    func_0x0002996b();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb193;
    FUN_28b3_0ee9();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb19b;
    func_0x000297e6();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1a0;
    func_0x00029ae7();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1a8;
    func_0x000297e6();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1ad;
    func_0x00029ae7();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1b2;
    FUN_28b3_117c();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1ba;
    func_0x0002996b();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1c2;
    FUN_28b3_0ee9();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1ca;
    func_0x000297e6();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1cf;
    func_0x00029d78();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1d7;
    func_0x00029bfc();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1dc;
    func_0x00029ae7();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1e4;
    func_0x000297e6();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1e9;
    func_0x00029d78();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1f1;
    func_0x00029bfc();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1f6;
    func_0x00029ae7();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb1fb;
    FUN_28b3_117c();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb203;
    func_0x0002996b();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb20b;
    func_0x000297e6();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0xb210;
    FUN_28b3_1181();
    if ((bool)uVar6 || (bool)uVar7) {
      *in_stack_00000034 = local_28;
      in_stack_00000034[1] = local_26;
      local_2c = unaff_SS;
      local_2a = local_2e;
    }
    else {
      *in_stack_00000034 = local_24;
      in_stack_00000034[1] = local_22;
    }
    *in_stack_00000036 = local_2c;
    in_stack_00000036[1] = local_2a;
  }
  return;
}



/* 3ab8:06ca  FUN_3ab8_06ca  198 bytes, 1 callers */

void __cdecl16far FUN_3ab8_06ca(int param_1,uint *param_2)

{
  uint uVar1;
  undefined2 unaff_DS;
  uint local_4;
  
  local_4 = 0x3ab8;
  FUN_21f2_0ebc();
  if ((0x61ff < param_1) && (param_1 < 0x6b01)) {
    if (param_1 == 0x6200) {
      local_4 = 1;
    }
    if (param_1 == 0x6300) {
      local_4 = 2;
    }
    if (param_1 == 0x6400) {
      local_4 = 3;
    }
    if (param_1 == 0x6500) {
      local_4 = 4;
    }
    if (param_1 == 0x6600) {
      local_4 = 5;
    }
    if (param_1 == 0x6700) {
      local_4 = 6;
    }
    if (param_1 == 0x6800) {
      local_4 = 7;
    }
    if (param_1 == 0x6900) {
      local_4 = 8;
    }
    if (param_1 == 0x6a00) {
      local_4 = 9;
    }
    if (param_1 == 0x6b00) {
      local_4 = 0;
    }
    uVar1 = *param_2;
    if ((uVar1 ^ (int)uVar1 >> 0xf) - ((int)uVar1 >> 0xf) == local_4) {
      if (0 < (int)uVar1) {
        local_4 = -local_4;
      }
      if ((int)uVar1 < 0) {
        local_4 = 0;
      }
    }
    *param_2 = local_4;
  }
  return;
}



/* 3ab8:0790  FUN_3ab8_0790  372 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0790(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if (param_1 != 0) {
    *(undefined2 *)0xc22 = 1;
    iVar1 = (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
    if ((iVar1 == 1) || (iVar1 == 6)) {
      iVar1 = 4;
      FUN_1000_02b5(0x54df,0x12,2,4,0xffff);
    }
    if ((iVar1 == 2) || (iVar1 == 7)) {
      iVar1 = 5;
      FUN_1000_02b5(0x54e2,0x12,2,5,0xffff);
    }
    if ((((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 8)) || (iVar1 == 9)) {
      iVar1 = 6;
      FUN_1000_02b5(0x54e5,0x12,2,6,0xffff);
    }
    if (iVar1 != 5) {
      iVar1 = 4;
      FUN_1000_02b5(0x54e8,0x14,2,4,0xffff);
    }
    if (iVar1 < 5) {
      iVar1 = 5;
      FUN_1000_02b5(0x54ed,0x18,2,5,0xffff);
    }
    if (5 < iVar1) {
      iVar1 = 6;
      FUN_1000_02b5(0x54f2,0x18,2,6,0xffff);
    }
    if (((iVar1 == 4) || (iVar1 == 5)) || (iVar1 == 9)) {
      iVar1 = 7;
      FUN_1000_02b5(0x54f7,0x1c,2,7,0xffff);
    }
    if ((int)param_1 < 0) {
      if (iVar1 != 5) {
        *(undefined2 *)0xc22 = 2;
      }
      FUN_1000_02b5(0x54fc,0x12,0xffff,7);
    }
  }
  return;
}



/* 3ab8:0904  FUN_3ab8_0904  369 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0904(int param_1,int param_2,int param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  undefined1 local_15a [80];
  undefined1 local_10a [110];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [80];
  undefined1 local_34 [36];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xb48f;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)0x2f0;
  puStack_6 = local_10a;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb49d;
  func_0x00024c86();
  puStack_4 = (undefined1 *)0x98a;
  puStack_6 = local_10a;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb4ad;
  FUN_21f2_2d26();
  if (param_1 == 0) {
    puStack_4 = (undefined1 *)0x5501;
    puStack_6 = local_10a;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xb4c3;
    FUN_21f2_2d26();
  }
  puStack_4 = (undefined1 *)0x5504;
  puStack_6 = local_34;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb4d2;
  func_0x00024c86();
  puStack_4 = (undefined1 *)0x98a;
  puStack_6 = local_34;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb4e1;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x5515;
  puStack_6 = local_9c;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb4f1;
  func_0x00024c86();
  puStack_4 = (undefined1 *)0x551b;
  puStack_6 = local_90;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb501;
  func_0x00024c86();
  puStack_4 = local_90;
  puStack_6 = local_9c;
  puStack_8 = local_34;
  uStack_a = 0x5521;
  puStack_c = local_15a;
  uStack_e = 0x22b2;
  uStack_10 = 0xb51f;
  FUN_21f2_3454();
  puStack_4 = local_90;
  puStack_6 = local_9c;
  puStack_8 = local_34;
  uStack_a = 0x5530;
  puStack_c = local_84;
  uStack_e = 0x22b2;
  uStack_10 = 0xb53e;
  FUN_21f2_3454();
  if (param_3 == 0) {
    puStack_4 = (undefined1 *)0x553d;
    puStack_6 = (undefined1 *)param_4;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xb553;
    func_0x00024c86();
    puStack_4 = (undefined1 *)0x2dc;
  }
  else {
    puStack_4 = (undefined1 *)0x5540;
    puStack_6 = (undefined1 *)param_4;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xb566;
    func_0x00024c86();
    if ((*(int *)0xce6 == 0) && (param_2 < 4)) {
      puStack_4 = (undefined1 *)0x5546;
    }
    else {
      puStack_4 = (undefined1 *)0x5549;
    }
    puStack_6 = (undefined1 *)param_4;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xb586;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x554c;
    puStack_6 = (undefined1 *)param_4;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xb594;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x2e6;
  }
  puStack_6 = (undefined1 *)param_4;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb5a2;
  FUN_21f2_2d26();
  puStack_4 = local_10a;
  puStack_6 = (undefined1 *)param_4;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb5b1;
  FUN_21f2_2d26();
  if (param_1 == 0) {
    if (param_2 == 2) {
      puStack_4 = local_15a;
      puStack_6 = (undefined1 *)param_4;
      puStack_8 = (undefined1 *)0x22b2;
      uStack_a = 0xb5cc;
      FUN_21f2_2d26();
    }
    if (param_2 == 3) {
      puStack_4 = local_84;
      puStack_6 = (undefined1 *)param_4;
      puStack_8 = (undefined1 *)0x22b2;
      uStack_a = 0xb5e1;
      FUN_21f2_2d26();
    }
  }
  puStack_4 = (undefined1 *)param_4;
  puStack_6 = (undefined1 *)0x5;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb5ef;
  FUN_1def_07a4();
  return;
}



/* 3ab8:0a75  FUN_3ab8_0a75  357 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0a75(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_34;
  undefined1 local_32 [8];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 *puStack_e;
  undefined2 *puStack_c;
  int iStack_a;
  int iStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  uStack_6 = 0xb600;
  FUN_21f2_0ebc();
  if (*(char *)0xb782 == '\0') {
    local_34 = 0x11;
    uVar2 = 0x22b2;
    do {
      uStack_4 = 0xffff;
      uStack_6 = 4;
      iStack_8 = local_34;
      iStack_a = *(int *)0xa58 + -1;
      puStack_c = (undefined2 *)local_34;
      puStack_e = (undefined2 *)0x1;
      uStack_12 = 0xb62b;
      uStack_10 = uVar2;
      func_0x0000def0();
      local_34 = local_34 + 1;
      uVar2 = 0xdef;
    } while (local_34 < 0x30);
    uStack_4 = *(undefined2 *)0xa15a;
    uStack_6 = *(undefined2 *)0xa158;
    iStack_8 = 0xdef;
    iStack_a = 0xb647;
    func_0x000297e6();
    iStack_8 = 0x22b2;
    iStack_a = 0xb64c;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb656;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb65e;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb663;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    local_1a = 0xb66d;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    local_1a = 0xb675;
    func_0x000297e6();
    uStack_20 = 0x22b2;
    uStack_22 = 0xb67f;
    func_0x000299d1();
    uStack_20 = 0x22b2;
    uStack_22 = 0xb687;
    func_0x000297e6();
    uStack_28 = 0x22b2;
    uStack_2a = 0xb691;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    uStack_2a = 0xb696;
    puVar1 = (undefined2 *)FUN_1def_06ff();
    iStack_8 = puVar1[1];
    iStack_a = *puVar1;
    puStack_c = (undefined2 *)0x554f;
    puStack_e = &local_1a;
    uStack_10 = 0x1bb4;
    uStack_12 = 0xb6ad;
    FUN_10ad_1928();
    uStack_4 = *(undefined2 *)0xa15a;
    uStack_6 = *(undefined2 *)0xa158;
    iStack_8 = 0x11f2;
    iStack_a = 0xb6c0;
    func_0x000297e6();
    iStack_8 = 0x22b2;
    iStack_a = 0xb6c5;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb6cf;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb6d7;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb6dc;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    local_1a = 0xb6e6;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    local_1a = 0xb6ee;
    func_0x000297e6();
    uStack_20 = 0x22b2;
    uStack_22 = 0xb6f8;
    func_0x000299d1();
    uStack_20 = 0x22b2;
    uStack_22 = 0xb700;
    func_0x000297e6();
    uStack_28 = 0x22b2;
    uStack_2a = 0xb70a;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    uStack_2a = 0xb70f;
    puVar1 = (undefined2 *)FUN_1def_06ff();
    iStack_8 = puVar1[1];
    iStack_a = *puVar1;
    puStack_c = (undefined2 *)0x555b;
    puStack_e = (undefined2 *)local_32;
    uStack_10 = 0x1bb4;
    uStack_12 = 0xb726;
    FUN_10ad_1928();
    uStack_4 = 0;
    uStack_6 = 0;
    iStack_8 = 2;
    iStack_a = 1;
    puStack_c = &local_1a;
    puStack_e = (undefined2 *)0x11f2;
    uStack_10 = 0xb73e;
    FUN_1000_02b5();
    uStack_4 = 0;
    uStack_6 = 0;
    iStack_8 = 3;
    iStack_a = 1;
    puStack_c = (undefined2 *)local_32;
    puStack_e = (undefined2 *)0xdef;
    uStack_10 = 0xb756;
    FUN_1000_02b5();
  }
  return;
}



/* 3ab8:0bda  FUN_3ab8_0bda  51 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0bda(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if (param_1 != 0) {
    FUN_1000_02b5(0x5567,0x44,2,5,0xffff);
    *(undefined2 *)0xc22 = 1;
  }
  return;
}



/* 3ab8:0c0d  FUN_3ab8_0c0d  13400 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003cb18) */
/* WARNING: Removing unreachable block (ram,0x0003ce09) */
/* WARNING: Removing unreachable block (ram,0x0003c2b9) */
/* WARNING: Removing unreachable block (ram,0x0003e475) */
/* WARNING: Removing unreachable block (ram,0x0003c651) */
/* WARNING: Removing unreachable block (ram,0x0003c94d) */
/* WARNING: Removing unreachable block (ram,0x0003cf45) */
/* WARNING: Removing unreachable block (ram,0x0003d5c7) */

void FUN_3ab8_0c0d(undefined2 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 uVar11;
  uint uVar12;
  undefined2 *puVar13;
  int *piVar14;
  int *piVar15;
  undefined2 uVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  int *piVar21;
  undefined2 *puVar22;
  undefined4 uVar23;
  undefined1 local_2b6 [40];
  undefined4 local_28e;
  undefined2 local_28a;
  undefined2 local_288;
  undefined4 local_286;
  undefined4 local_282;
  int local_27e;
  int local_27c;
  undefined4 local_27a;
  undefined2 local_276;
  undefined2 local_274;
  int *local_272;
  undefined4 local_270;
  int local_26c;
  int local_26a;
  int local_268;
  int local_266;
  int local_264;
  int local_262;
  undefined2 local_25c;
  undefined4 local_25a;
  undefined2 local_256;
  undefined2 local_254;
  int local_250;
  int local_24e;
  int local_24c;
  int local_24a;
  undefined4 local_248;
  int local_244;
  int local_23c;
  int local_23a;
  int local_238;
  int local_236;
  undefined4 local_234;
  int local_22c;
  int local_22a;
  int local_228;
  int local_226;
  int local_224;
  int local_222;
  int local_21c;
  int local_21a;
  int local_212;
  int local_204;
  int local_202;
  int local_1fc;
  int local_1fa;
  int local_1f8 [26];
  undefined1 local_1c3;
  int local_194;
  int local_192;
  undefined2 local_184 [16];
  int local_164;
  int local_162;
  int local_160;
  int local_15a;
  int local_158;
  int local_156;
  int *local_154;
  int local_152;
  int local_150;
  int local_14e;
  int local_14c;
  int local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  int *local_13a;
  undefined2 local_138;
  undefined2 uStack_136;
  undefined2 uStack_134;
  undefined2 uStack_132;
  int local_130;
  undefined2 local_128 [11];
  int local_112;
  int local_110;
  int local_10e;
  int local_10c;
  int local_f2;
  int local_f0;
  int local_ee;
  int local_ec;
  int local_ea;
  int local_ce;
  int local_cc;
  int local_ca;
  int local_c8;
  undefined4 local_c6;
  int local_c2;
  int local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 local_bc;
  undefined2 local_b8 [11];
  int local_a2;
  undefined2 local_8a [11];
  int local_74;
  int local_70;
  uint local_62;
  char local_60;
  undefined2 local_52 [5];
  undefined2 uStack_48;
  undefined2 local_46;
  int aiStack_44 [2];
  undefined2 uStack_40;
  undefined2 uStack_3e;
  int aiStack_3a [5];
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined4 uStack_16;
  int *piStack_12;
  int *piStack_10;
  int *piStack_e;
  int *piStack_c;
  
  piVar14 = (int *)0x22b2;
  FUN_21f2_0ebc();
  local_60 = '\0';
  local_138 = *(undefined2 *)0xa170;
  uStack_136 = *(undefined2 *)0xa172;
  uStack_134 = *(undefined2 *)0xa174;
  uStack_132 = *(undefined2 *)0xa176;
  local_70 = *(int *)0xa62;
  local_28e = (int *)CONCAT22(local_28e._2_2_,(int *)local_28e);
  local_286 = CONCAT22(local_286._2_2_,(int)local_286);
  local_282 = CONCAT22(local_282._2_2_,(int)local_282);
  local_248 = CONCAT22(local_248._2_2_,(int)local_248);
  local_c6 = CONCAT22(local_c6._2_2_,(int)local_c6);
  local_234 = CONCAT22(local_234._2_2_,(undefined2)local_234);
  if (*(char *)0x124 == '\0') {
    *(undefined2 *)0x5598 = 0;
    local_28e = (int *)CONCAT22(local_28e._2_2_,(int *)local_28e);
    local_286 = CONCAT22(local_286._2_2_,(int)local_286);
    local_282 = CONCAT22(local_282._2_2_,(int)local_282);
    local_248 = CONCAT22(local_248._2_2_,(int)local_248);
    local_c6 = CONCAT22(local_c6._2_2_,(int)local_c6);
    local_234 = CONCAT22(local_234._2_2_,(undefined2)local_234);
  }
LAB_3ab8_0c3e:
  local_25a = 0;
  local_270._2_2_ = 0;
  local_270._0_2_ = 0;
  uVar16 = *(undefined2 *)0xa166;
  *(undefined2 *)0xb76a = *(undefined2 *)0xa164;
  *(undefined2 *)0xb76c = uVar16;
  uVar16 = *(undefined2 *)0xa15a;
  *(undefined2 *)0xb784 = *(undefined2 *)0xa158;
  *(undefined2 *)0xb786 = uVar16;
  local_1fc = 0;
  local_f2 = 0;
  local_212 = 0;
  local_a2 = 0;
  local_152 = 0;
  local_62 = 0;
  local_160 = 0;
  if (param_2 != 0) {
    local_25a._2_2_ = 0;
    local_25a._0_2_ = 0;
    func_0x00029834();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x00029834();
    func_0x0002996b();
    FUN_28b3_0ee9();
    piVar14 = (int *)0x22b2;
    local_25a = CONCAT22(local_25a._2_2_,(undefined2)local_25a);
    local_270 = CONCAT22(local_270._2_2_,(undefined2)local_270);
    if (param_2 != 2) goto LAB_3ab8_136f;
    local_25a = CONCAT22(local_25a._2_2_,(undefined2)local_25a);
    local_270 = CONCAT22(local_270._2_2_,(undefined2)local_270);
    if (*(int *)0xc1e != 2) goto LAB_3ab8_136f;
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xb873;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xb87c;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xb881;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xb88b;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xb890;
    local_25a = func_0x0001765f();
    piVar14 = (int *)0x11f2;
    local_270 = CONCAT22(local_270._2_2_,(undefined2)local_270);
    goto LAB_3ab8_136f;
  }
  do {
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            piStack_c = (int *)*(undefined2 *)0xa62;
            piStack_e = (int *)0x0;
            piStack_12 = (int *)0xb8bf;
            piStack_10 = piVar14;
            FUN_3ab8_0904();
            piStack_c = (int *)0xb8ca;
            FUN_3ab8_0790();
            piStack_c = (int *)0xb8d5;
            FUN_3ab8_0bda();
            *(undefined2 *)0xc1a = 1;
            *(undefined2 *)0xc20 = 2;
            if (*(int *)0xce6 != 0) {
              *(undefined2 *)0xc1a = 0;
            }
            piStack_c = &local_24c;
            piStack_e = local_1f8;
            piStack_10 = (int *)0x2710;
            piVar15 = (int *)0x1bb4;
            uStack_16._2_2_ = (int *)0xb90c;
            piStack_12 = piVar14;
            local_130 = FUN_1def_0904();
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 == 0) break;
            piVar14 = (int *)0x1b6e;
            FUN_1885_2ec3();
            if (*(char *)0x118 != '\0') {
              return;
            }
            if (*(char *)0x124 == '\0') {
              return;
            }
            if (*(int *)0x158 == 10000) {
              return;
            }
            if ((((*(int *)0xa62 != 2) || (*(int *)0xa64 != 2)) &&
                ((*(byte *)0xb782 < 4 ||
                 ((*(int *)0xa64 < 0x2711 || (*(int *)0xa64 != *(int *)0xa62)))))) &&
               ((*(byte *)0xb782 < 4 ||
                ((*(int *)0xa66 < 0x2711 || (*(int *)0xa66 != *(int *)0xa62)))))) {
              if (*(byte *)0xb782 < 4) {
                return;
              }
              if (*(int *)0xa62 != 2) {
                return;
              }
              if (local_70 != 2) {
                return;
              }
            }
            local_60 = local_60 == '\0';
            *(undefined2 *)0xa62 = 2;
            *(undefined2 *)0x158 = 0;
          }
          if (*(int *)0xc18 == 0) break;
          local_f2 = 0;
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xb9cc;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xb9d5;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xb9da;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0xb9e4;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          uStack_1a = 0xb9e9;
          func_0x0000507a();
          piVar14 = (int *)0x3bf;
        }
        if ((local_130 < 0x6200) || (0x6b00 < local_130)) break;
        piStack_c = (int *)0x1bb4;
        piStack_e = (int *)0xba0b;
        FUN_3ab8_06ca();
        piVar14 = piVar15;
      }
      local_25a._2_2_ = 0;
      local_25a._0_2_ = 0;
      local_25a = 0;
      if ((local_130 == 0) &&
         ((local_25a = 0, local_154 == (int *)0x2 && (local_25a = 0, *(int *)0xc1e == 2)))) {
        *(undefined1 *)0xb8c = 1;
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xba4f;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xba58;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xba5d;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xba67;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        piVar15 = (int *)0x11f2;
        uStack_1a = 0xba6c;
        local_25a = func_0x0001765f();
        if (local_25a == 0) {
          *(undefined1 *)0xb8c = 0;
          goto LAB_3ab8_0fd8;
        }
        *(undefined1 *)0xb8c = 0;
LAB_3ab8_0f03:
        local_1fc = 1;
        iVar8 = local_152;
        local_270 = CONCAT22(local_270._2_2_,(undefined2)local_270);
        goto LAB_3ab8_0f09;
      }
LAB_3ab8_0fd8:
      piVar14 = piVar15;
      if ((local_130 == 0) && (local_154 != (int *)0x0)) {
        piStack_c = local_154;
        piVar14 = (int *)0x11f2;
        piStack_10 = (int *)0xbb79;
        piStack_e = piVar15;
        iVar8 = func_0x00015409();
        if (iVar8 != 0) goto LAB_3ab8_0f03;
      }
      local_1fc = 0;
      if (local_130 == 1) {
        local_60 = '\0';
        if (*(int *)0xa62 == 2) {
          *(undefined2 *)0xa62 = 3;
        }
        else {
          *(undefined2 *)0xa62 = 2;
        }
        func_0x0000c053();
        *(undefined2 *)0xa64 = *(undefined2 *)0xa62;
        piVar14 = (int *)0x885;
        piStack_c = (int *)0xbbba;
        func_0x0000bbb4();
      }
      if (local_130 == 2) {
        local_140 = *(undefined2 *)0xa158;
        local_13e = *(undefined2 *)0xa15a;
        piVar14 = (int *)0x885;
        func_0x0000c3ca();
        piStack_c = (int *)0x1;
        piStack_e = (int *)0x885;
        piStack_10 = (int *)0xbbe7;
        local_162 = FUN_3ab8_0000();
        iVar8 = local_162;
        local_270 = CONCAT22(local_270._2_2_,(undefined2)local_270);
        if ((local_162 == 0) ||
           (iVar8 = local_162, local_270 = CONCAT22(local_270._2_2_,(undefined2)local_270),
           local_162 == 1)) goto LAB_3ab8_0f09;
      }
      if (local_130 == 3) {
        local_60 = '\0';
        local_62 = 0;
        pcVar5 = (code *)swi(0x3f);
        local_162 = (*pcVar5)();
        if (local_162 == 1) {
          local_160 = 1;
          iVar8 = local_152;
          local_270 = CONCAT22(local_270._2_2_,(undefined2)local_270);
          goto LAB_3ab8_0f09;
        }
        if (local_162 == 0) goto LAB_3ab8_10b6;
      }
      if (local_130 == 4) {
        local_60 = '\0';
        piVar14 = (int *)0x885;
        func_0x0000c3ca();
        piStack_c = (int *)0x885;
        piStack_e = (int *)0xbc5c;
        iVar8 = FUN_3ab8_018f();
        local_62 = (uint)(iVar8 == 2);
        if ((-1 < local_14c) && ((0 < local_14c || (local_14e != 0)))) {
          local_160 = 2;
          iVar8 = local_152;
          local_270 = CONCAT22(local_270._2_2_,(undefined2)local_270);
          goto LAB_3ab8_0f09;
        }
        if (local_14c == 0 && local_14e == 0) goto LAB_3ab8_10b6;
      }
    } while ((local_130 != 5) || (*(int *)0xa62 != 3));
    local_60 = '\0';
    piVar14 = (int *)0x885;
    func_0x0000c3ca();
    piStack_c = (int *)0x885;
    piStack_e = (int *)0xbcb8;
    FUN_3ab8_018f();
    local_62 = 0;
    if ((-1 < local_14c) && ((0 < local_14c || (local_14e != 0)))) {
      local_160 = 3;
      iVar8 = local_152;
      local_270 = CONCAT22(local_270._2_2_,(undefined2)local_270);
      goto LAB_3ab8_0f09;
    }
  } while (local_14c != 0 || local_14e != 0);
LAB_3ab8_10b6:
  local_160 = 0;
  iVar8 = local_152;
  local_270 = CONCAT22(local_270._2_2_,(undefined2)local_270);
LAB_3ab8_0f09:
  local_152 = iVar8;
  piStack_c = (int *)0xba91;
  func_0x0000daa6();
  func_0x0000abfa();
  piVar14 = (int *)0x885;
  do {
    do {
      do {
        while( true ) {
          while( true ) {
            if (local_1fc != 0) goto LAB_3ab8_136f;
            piStack_e = (int *)0xbaaf;
            piStack_c = piVar14;
            func_0x00024c86();
            piStack_c = (int *)0x22b2;
            piStack_e = (int *)0xbabf;
            FUN_21f2_2d26();
            if (local_f2 != 0) {
              piStack_c = local_13a;
              piStack_e = (int *)local_13c;
              piStack_10 = (int *)0x332;
              piStack_12 = (int *)0x556e;
              uStack_16._2_2_ = (int *)0x556f;
              uStack_16._0_2_ = (int *)&stack0xffc4;
              uStack_18 = 0x22b2;
              uStack_1a = 0xbaed;
              FUN_10ad_19f9();
              piStack_c = (int *)0x11f2;
              piStack_e = (int *)0xbafe;
              FUN_21f2_2d26();
              func_0x000297e6();
              func_0x00029d78();
              piStack_10 = (int *)0x22b2;
              piStack_12 = (int *)0xbb17;
              func_0x000299d1();
              piStack_10 = (int *)0x557f;
              piStack_12 = (int *)&stack0xffc4;
              uStack_16._2_2_ = (int *)0x22b2;
              uStack_16._0_2_ = (int *)0xbb24;
              FUN_21f2_3454();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xbb35;
              FUN_21f2_2d26();
            }
            piStack_c = (int *)0xbb3f;
            FUN_3ab8_0790();
            if (local_f2 == 0) {
              local_272 = (int *)0x2710;
            }
            else {
              local_272 = (int *)0x270f;
            }
            *(undefined2 *)0xc2c = 1;
            *(undefined2 *)0xc1a = 1;
            *(undefined2 *)0xc20 = 2;
            if (*(int *)0xce6 != 0) {
              *(undefined2 *)0xc1a = 0;
            }
            piStack_c = &local_24c;
            piStack_e = local_1f8;
            piStack_10 = local_272;
            piStack_12 = (int *)0x22b2;
            piVar14 = (int *)0x1bb4;
            uStack_16._2_2_ = (int *)0xbd27;
            local_74 = FUN_1def_0904();
            *(undefined2 *)0xc2c = 0;
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) {
              return;
            }
            if (*(int *)0xc18 == 0) break;
            local_f2 = 0;
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xbd63;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xbd6c;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xbd71;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xbd7b;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1a = 0xbd80;
            func_0x0000507a();
            piVar14 = (int *)0x3bf;
          }
          if ((local_74 < 0x6200) || (0x6b00 < local_74)) break;
          piStack_c = (int *)0x1bb4;
          piStack_e = (int *)0xbd9f;
          FUN_3ab8_06ca();
        }
      } while (local_74 == 99);
      if (local_74 == -1) {
        for (local_162 = 1; local_162 <= local_f2; local_162 = local_162 + 1) {
          local_256 = *(undefined2 *)0x148;
          local_254 = *(undefined2 *)0x14a;
          piStack_c = (int *)0xbdd5;
          func_0x0000daa6();
          piStack_c = (int *)0x885;
          piStack_e = (int *)0xbde3;
          func_0x00018779();
        }
        for (local_162 = 1; local_162 <= local_212; local_162 = local_162 + 1) {
          local_25c = *(undefined2 *)0x152;
          piStack_c = (int *)0xbe0a;
          func_0x0000daa6();
          piStack_c = (int *)0xbe14;
          FUN_1def_186d();
        }
        for (local_162 = 1; local_162 <= local_a2; local_162 = local_162 + 1) {
          local_25c = *(undefined2 *)0x150;
          piStack_c = (int *)0xbe3a;
          func_0x0000daa6();
          piStack_c = (int *)0xbe44;
          func_0x000190c7();
        }
        func_0x0000abfa();
        local_f2 = 0;
        local_212 = 0;
        local_a2 = 0;
        piVar14 = (int *)0x885;
        piStack_c = (int *)0xbe6f;
        func_0x0000b1d8();
        iVar8 = local_152;
        goto LAB_3ab8_1395;
      }
      if (local_74 == 0x14) goto LAB_3ab8_0c3e;
      local_25a._2_2_ = 0;
      local_25a._0_2_ = 0;
      local_25a = 0;
      if ((local_154 == (int *)0x2) && (local_25a = 0, *(int *)0xc1e == 2)) {
        *(undefined1 *)0xb8c = 1;
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xbeb5;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xbebe;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xbec3;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xbecd;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        piVar14 = (int *)0x11f2;
        uStack_1a = 0xbed2;
        local_25a = func_0x0001765f();
        if (local_25a != 0) {
          *(undefined1 *)0xb8c = 0;
          goto LAB_3ab8_136f;
        }
        *(undefined1 *)0xb8c = 0;
      }
    } while (local_154 == (int *)0x0);
    piStack_c = local_154;
    piStack_10 = (int *)0xc0d1;
    piStack_e = piVar14;
    iVar8 = func_0x00015409();
    piVar14 = (int *)0x11f2;
  } while (iVar8 == 0);
LAB_3ab8_136f:
  local_1fc = 0;
  local_250 = local_24c;
  local_24e = local_24a;
  local_26c = local_268;
  local_26a = local_266;
  iVar8 = local_152;
LAB_3ab8_1395:
  local_152 = iVar8;
  uVar16 = *(undefined2 *)0xa166;
  *(undefined2 *)0xb76a = *(undefined2 *)0xa164;
  *(undefined2 *)0xb76c = uVar16;
  uVar16 = *(undefined2 *)0xa15a;
  *(undefined2 *)0xb784 = *(undefined2 *)0xa158;
  *(undefined2 *)0xb786 = uVar16;
  if (((local_160 == 2) && (-1 < local_14c)) && ((0 < local_14c || (local_14e != 0)))) {
    piStack_e = (int *)0xbf5b;
    piStack_c = piVar14;
    puVar22 = (undefined2 *)func_0x0000013f();
    puVar13 = (undefined2 *)puVar22;
    puVar9 = local_52;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar4 = puVar13;
      puVar13 = puVar13 + 1;
      *puVar3 = *puVar4;
    }
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xbf84;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xbf8c;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xbf91;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbf9b;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbfa3;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbfa8;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    func_0x000299d1();
    iStack_20 = 0x22b2;
    func_0x000297e6();
    iStack_20 = 0x22b2;
    func_0x00029d78();
    uStack_28 = 0x22b2;
    uStack_2a = 0xbfc9;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    piVar14 = (int *)0x1bb4;
    uStack_2a = 0xbfce;
    iVar8 = FUN_1def_043a();
    if (iVar8 == 0) {
      uVar16 = *(undefined2 *)0xa166;
      *(undefined2 *)0xb76a = *(undefined2 *)0xa164;
      *(undefined2 *)0xb76c = uVar16;
      uVar16 = *(undefined2 *)0xa15a;
      *(undefined2 *)0xb784 = *(undefined2 *)0xa158;
      *(undefined2 *)0xb786 = uVar16;
    }
  }
  if (((local_160 == 3) && (-1 < local_14c)) && ((0 < local_14c || (local_14e != 0)))) {
    piStack_e = (int *)0xc01e;
    piStack_c = piVar14;
    puVar22 = (undefined2 *)func_0x0000013f();
    puVar13 = (undefined2 *)puVar22;
    puVar9 = local_52;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar4 = puVar13;
      puVar13 = puVar13 + 1;
      *puVar3 = *puVar4;
    }
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xc047;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xc04f;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xc054;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc05e;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc066;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc06b;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    func_0x000299d1();
    iStack_20 = 0x22b2;
    func_0x000297e6();
    iStack_20 = 0x22b2;
    func_0x00029d78();
    uStack_28 = 0x22b2;
    uStack_2a = 0xc08c;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    uStack_2a = 0xc091;
    iVar8 = FUN_1def_043a();
    if (iVar8 == 0) {
      uVar16 = *(undefined2 *)0xa166;
      *(undefined2 *)0xb76a = *(undefined2 *)0xa164;
      *(undefined2 *)0xb76c = uVar16;
      uVar16 = *(undefined2 *)0xa158;
      uVar11 = *(undefined2 *)0xa15a;
    }
    else {
      local_140 = *(undefined2 *)0xb76a;
      local_13e = *(undefined2 *)0xb76c;
      func_0x000297e6();
      func_0x00029af6();
      func_0x00029983();
      uVar16 = local_140;
      uVar11 = local_13e;
    }
    *(undefined2 *)0xb784 = uVar16;
    *(undefined2 *)0xb786 = uVar11;
  }
  func_0x000297e6();
  func_0x0002996b();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029983();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029983();
  func_0x000297e6();
  piVar14 = (int *)0x22b2;
  func_0x00029983();
  if ((local_25a == 0) && (local_62 != 0)) {
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xc1a9;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xc1b2;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xc1b7;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc1c1;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    iStack_1c = -0x3e36;
    puVar9 = (undefined2 *)FUN_1def_05d1();
    local_224 = *puVar9;
    local_222 = puVar9[1];
    piStack_c = (int *)*(undefined2 *)0xa17a;
    piStack_e = (int *)*(undefined2 *)0xa178;
    piStack_10 = (int *)0x1bb4;
    piStack_12 = (int *)0xc1f5;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xc1fa;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc204;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    iStack_1c = -0x3df4;
    piVar14 = (int *)FUN_1def_05d1();
    local_24c = *piVar14;
    local_24a = piVar14[1];
    piStack_c = (int *)*(int *)0xa17a;
    piStack_e = (int *)*(int *)0xa178;
    piStack_10 = (int *)0x1bb4;
    piStack_12 = (int *)0xc237;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xc23c;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc246;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    piVar14 = (int *)0x1bb4;
    iStack_1c = -0x3db2;
    piVar15 = (int *)func_0x0001e558();
    local_268 = *piVar15;
    local_266 = piVar15[1];
    local_204 = local_24c;
    local_202 = local_24a;
    local_224 = local_24c;
    local_222 = local_24a;
    local_15a = local_24c;
    local_158 = local_24a;
    local_23c = local_268;
    local_23a = local_266;
    local_228 = local_268;
    local_226 = local_266;
    local_194 = local_268;
    local_192 = local_266;
  }
  if (local_25a != 0) {
    if (0 < local_25a) {
      local_60 = '\0';
      piStack_e = (int *)0xc2d4;
      piStack_c = piVar14;
      puVar22 = (undefined2 *)func_0x0000013f();
      puVar13 = (undefined2 *)puVar22;
      puVar9 = local_8a;
      for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar4 = puVar13;
        puVar13 = puVar13 + 1;
        *puVar3 = *puVar4;
      }
      piStack_c = (int *)0x0;
      piStack_e = (int *)0xc2f8;
      func_0x000297e6();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xc2fd;
      func_0x00029d78();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xc307;
      func_0x000299d1();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xc30f;
      func_0x000297e6();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xc314;
      func_0x00029d78();
      iStack_1c = 0x22b2;
      func_0x000299d1();
      iStack_1c = 0x22b2;
      func_0x000297e6();
      iStack_1c = 0x22b2;
      func_0x00029d78();
      uStack_24 = 0x22b2;
      uStack_26 = 0xc336;
      func_0x000299d1();
      uStack_24 = 0x22b2;
      uStack_26 = 0xc33f;
      func_0x000297e6();
      uStack_24 = 0x22b2;
      uStack_26 = 0xc344;
      func_0x00029d78();
      uStack_2c = 0x22b2;
      piVar14 = (int *)0x22b2;
      uStack_2e = 0xc34e;
      func_0x000299d1();
      uStack_2c = 0x22b2;
      uStack_2e = 0xc352;
      FUN_3ab8_0369();
    }
    if (local_25a < 0) {
      piStack_e = (int *)0xc372;
      piStack_c = piVar14;
      piVar21 = (int *)func_0x00000271();
      piVar15 = (int *)piVar21;
      piVar14 = &local_f0;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        piVar2 = piVar14;
        piVar14 = piVar14 + 1;
        piVar1 = piVar15;
        piVar15 = piVar15 + 1;
        *piVar2 = *piVar1;
      }
      func_0x000297e6();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      func_0x0002996b();
      FUN_28b3_0ee9();
      if (*(int *)0xa62 == 2) {
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xc3db;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xc3e4;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xc3e9;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc3f3;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc3fc;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc401;
        func_0x00029d78();
        iStack_20 = 0x22b2;
        func_0x000299d1();
        iStack_20 = 0x22b2;
        func_0x000297e6();
        iStack_20 = 0x22b2;
        func_0x00029d78();
        uStack_28 = 0x22b2;
        uStack_2a = 0xc423;
        func_0x000299d1();
        uStack_28 = 0x22b2;
        uStack_2a = 0xc428;
        local_27a = FUN_1000_0718();
        local_274 = 0;
        local_276 = 0;
        func_0x00029da5();
        func_0x00029c2c();
        func_0x00029983();
        uVar19 = 0;
        if (*(int *)0xcb6 != 0) {
          func_0x000297e6();
          piStack_c = (int *)0xc472;
          func_0x00029b55();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar19) {
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029b6d();
          func_0x00029d78();
          iVar8 = FUN_28b3_0f51();
          local_27a._0_2_ = 0x5a;
        }
        else {
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029b6d();
          func_0x00029d78();
          iVar8 = FUN_28b3_0f51();
          local_27a._0_2_ = -0x5a;
        }
        local_27a._0_2_ = iVar8 * (int)local_27a;
        FUN_28b3_0d8b();
        func_0x00029983();
        if (*(int *)0xcb6 != 0) {
          func_0x000297e6();
          piStack_c = (int *)0xc510;
          func_0x00029bb5();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x000299b9();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xc53f;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xc544;
        func_0x0002a11e();
        func_0x00029834();
        func_0x00029b6d();
        func_0x00029bb5();
        func_0x00029983();
        func_0x00029834();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xc57c;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xc581;
        func_0x0002a10c();
        func_0x00029834();
        func_0x00029b6d();
        func_0x00029bb5();
        func_0x00029983();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xc5b9;
        func_0x000297e6();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xc5be;
        func_0x00029d78();
        uStack_16._2_2_ = (int *)0x22b2;
        uStack_16._0_2_ = (int *)0xc5c8;
        func_0x000299d1();
        uStack_16._2_2_ = (int *)0x22b2;
        uStack_16._0_2_ = (int *)0xc5d1;
        func_0x000297e6();
        uStack_16._2_2_ = (int *)0x22b2;
        uStack_16._0_2_ = (int *)0xc5d6;
        func_0x00029d78();
        iStack_1c = 0x22b2;
        func_0x000299d1();
        piVar15 = aiStack_3a;
        piVar14 = &local_f0;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          piVar1 = piVar15;
          piVar15 = piVar15 + 1;
          piVar21 = piVar14;
          piVar14 = piVar14 + 1;
          *piVar1 = *piVar21;
        }
        uStack_3e = 0xc5f4;
        FUN_3ab8_0549();
      }
    }
  }
  *(int *)0xb37e = local_228;
  *(int *)0xb380 = local_226;
  func_0x000297e6();
  func_0x0002996b();
  func_0x00029983();
  local_22c = local_228;
  local_22a = local_226;
  piStack_c = (int *)*(undefined2 *)0xa62;
  piStack_e = (int *)0x0;
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xc645;
  FUN_3ab8_0904();
  if (0 < local_25a) {
    local_1c3 = 0;
  }
  func_0x0000c340();
  piStack_c = (int *)0xc66c;
  func_0x00012276();
  piVar15 = (int *)0xdef;
  func_0x00010526();
  piStack_c = (int *)0xc67a;
  FUN_3ab8_0790();
  piStack_c = (int *)0xc685;
  FUN_3ab8_0bda();
  local_150 = 1;
LAB_3ab8_1b0c:
  if (local_25a == 0) {
    *(undefined2 *)0xc20 = 2;
  }
  else {
    *(undefined2 *)0xc20 = 3;
  }
  if (local_160 != 0) {
    *(undefined2 *)0xc20 = 1;
  }
  *(undefined2 *)0xc18 = 0;
  *(undefined2 *)0xc1a = 1;
  *(undefined2 *)0xa4a = 1;
  if (*(int *)0xa62 == 2) {
    *(undefined2 *)0xa48 = 4;
  }
  else {
    *(undefined2 *)0xa48 = 5;
  }
  if (*(int *)0xce6 != 0) {
    *(undefined2 *)0xc1a = 0;
  }
  piStack_c = &local_24c;
  piStack_e = &local_164;
  piStack_10 = &local_156;
  piVar14 = (int *)0x3bf;
  uStack_16._2_2_ = (int *)0xc700;
  piStack_12 = piVar15;
  local_1fa = func_0x00006608();
  *(undefined2 *)0xc20 = 0;
  *(undefined2 *)0xc1a = 0;
  *(undefined2 *)0xa4a = 0;
  *(undefined2 *)0xa48 = 0;
  if (*(int *)0x158 != 0) {
    piStack_c = (int *)0xc721;
    func_0x0000daa6();
    func_0x0000abfa();
    return;
  }
  if (*(int *)0xce6 == 0) {
LAB_3ab8_1c45:
    if (local_1fa == -1) {
      FUN_1885_2ec3();
      iVar8 = local_152;
      goto LAB_3ab8_0f09;
    }
    if (*(int *)0xc18 != 0) {
      local_224 = *(int *)0xa190;
      local_222 = *(int *)0xa192;
      FUN_1885_2ec3();
      local_f2 = 0;
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xc80d;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xc816;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xc81b;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xc825;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      piVar14 = (int *)0x3bf;
      uStack_1a = 0xc82a;
      func_0x0000507a();
      iVar8 = local_152;
      goto LAB_3ab8_1395;
    }
    if (local_1fa == 99) {
      local_224 = *(int *)0xa190;
      local_222 = *(int *)0xa192;
      iVar8 = local_152;
      goto LAB_3ab8_1395;
    }
    if (((local_154 != (int *)0x0) && (0x114 < local_156)) && (local_164 < *(int *)0xa5e)) {
      local_162 = (local_156 + -0x114) / 0x48;
      local_1fa = local_162 + 0x31;
    }
    if ((0x61ff < local_1fa) && (local_1fa < 0x6b01)) {
      piStack_e = (int *)0xc895;
      piStack_c = piVar14;
      FUN_3ab8_06ca();
      iVar8 = local_152;
      goto LAB_3ab8_1395;
    }
    if (local_1fa == 0x31) {
      local_60 = '\0';
      FUN_1885_2ec3();
      local_224 = *(int *)0xa194;
      local_222 = *(int *)0xa196;
      if (*(int *)0xa62 == 2) {
        *(undefined2 *)0xa62 = 3;
      }
      else {
        *(undefined2 *)0xa62 = 2;
      }
      if (*(int *)0xce6 == 0) {
        func_0x0000c053();
        *(undefined2 *)0xa64 = *(undefined2 *)0xa62;
      }
      goto LAB_3ab8_1c39;
    }
    if (local_1fa == 0x32) {
      FUN_1885_2ec3();
      local_224 = *(int *)0xa194;
      local_222 = *(int *)0xa196;
      local_140 = *(undefined2 *)0xa158;
      local_13e = *(undefined2 *)0xa15a;
      piVar14 = (int *)0x885;
      func_0x0000c3ca();
      piStack_c = (int *)0x1;
      piStack_e = (int *)0x885;
      piStack_10 = (int *)0xc925;
      local_162 = FUN_3ab8_0000();
      iVar8 = local_162;
      if ((local_162 != 0) && (iVar8 = local_162, local_162 != 1)) {
        iVar8 = local_152;
      }
      goto LAB_3ab8_1395;
    }
    if (local_25a < 1) {
      if (local_1fa == 0x33) {
        local_60 = '\0';
        piVar14 = (int *)0x1b6e;
        FUN_1885_2ec3();
        local_224 = *(int *)0xa194;
        local_222 = *(int *)0xa196;
        local_62 = 0;
        pcVar5 = (code *)swi(0x3f);
        local_162 = (*pcVar5)();
        if (local_162 == 0) {
          uVar16 = *(undefined2 *)0xa166;
          *(undefined2 *)0xb76a = *(undefined2 *)0xa164;
          *(undefined2 *)0xb76c = uVar16;
          uVar16 = *(undefined2 *)0xa15a;
          *(undefined2 *)0xb784 = *(undefined2 *)0xa158;
          *(undefined2 *)0xb786 = uVar16;
          local_160 = 0;
        }
        iVar8 = local_152;
        if (local_162 == 1) {
          local_160 = 1;
        }
        goto LAB_3ab8_1395;
      }
      if ((local_1fa == 0x34) || ((local_1fa == 0x35 && (*(int *)0xa62 == 2)))) {
        local_60 = '\0';
        FUN_1885_2ec3();
        local_224 = *(int *)0xa194;
        local_222 = *(int *)0xa196;
        local_160 = 0;
        piVar14 = (int *)0x885;
        func_0x0000c3ca();
        piStack_c = (int *)0x885;
        piStack_e = (int *)0xca0c;
        iVar8 = FUN_3ab8_018f();
        local_62 = (uint)(iVar8 == 2);
        iVar8 = local_152;
        if ((-1 < local_14c) && ((0 < local_14c || (local_14e != 0)))) {
          local_160 = 2;
        }
        goto LAB_3ab8_1395;
      }
      if ((local_1fa == 0x35) && (*(int *)0xa62 == 3)) {
        local_60 = '\0';
        func_0x0000c3ca();
        piVar14 = (int *)0x1b6e;
        FUN_1885_2ec3();
        local_224 = *(int *)0xa194;
        local_222 = *(int *)0xa196;
        local_160 = 0;
        local_62 = 0;
        piStack_c = (int *)0x1b6e;
        piStack_e = (int *)0xca7c;
        FUN_3ab8_018f();
        iVar8 = local_152;
        if ((-1 < local_14c) && ((0 < local_14c || (local_14e != 0)))) {
          local_160 = 3;
        }
        goto LAB_3ab8_1395;
      }
    }
    local_142 = 0;
    local_270._2_2_ = 0;
    local_270._0_2_ = 0;
    if (1 < *(byte *)0x126) {
      *(undefined1 *)0xb8c = 1;
    }
    local_270 = 0;
    if ((local_154 == (int *)0x2) && (local_270 = 0, *(int *)0xc1e == 2)) {
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xcadf;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xcae8;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xcaed;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xcaf7;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      piVar14 = (int *)0x11f2;
      uStack_1a = 0xcafc;
      local_270 = func_0x0001765f();
    }
    *(undefined1 *)0xb8c = 0;
    if ((0 < local_270) && (local_25a == 0)) {
      piStack_e = (int *)0xcb3c;
      piStack_c = piVar14;
      puVar22 = (undefined2 *)func_0x0000013f();
      puVar13 = (undefined2 *)puVar22;
      puVar9 = local_b8;
      for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar4 = puVar13;
        puVar13 = puVar13 + 1;
        *puVar3 = *puVar4;
      }
      piStack_c = (int *)0x0;
      piStack_e = (int *)0xcb61;
      func_0x000297e6();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xcb66;
      func_0x00029d78();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xcb70;
      func_0x000299d1();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xcb79;
      func_0x000297e6();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xcb7e;
      func_0x00029d78();
      iStack_1c = 0x22b2;
      func_0x000299d1();
      iStack_1c = 0x22b2;
      func_0x000297e6();
      uStack_24 = 0x22b2;
      uStack_26 = 0xcb9b;
      func_0x000299d1();
      uStack_24 = 0x22b2;
      uStack_26 = 0xcba4;
      func_0x000297e6();
      uStack_2c = 0x22b2;
      uStack_2e = 0xcbae;
      func_0x000299d1();
      uStack_2c = 0x22b2;
      uStack_2e = 0xcbb2;
      FUN_3ab8_0369();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xcbc8;
      func_0x000297e6();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xcbcd;
      func_0x00029d78();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xcbd7;
      func_0x000299d1();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xcbdf;
      func_0x000297e6();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xcbe4;
      func_0x00029d78();
      iStack_1c = 0x22b2;
      func_0x000299d1();
      iStack_1c = 0x22b2;
      func_0x000297e6();
      uStack_24 = 0x22b2;
      uStack_26 = 0xcc01;
      func_0x000299d1();
      uStack_24 = 0x22b2;
      uStack_26 = 0xcc0a;
      func_0x000297e6();
      uStack_2c = 0x22b2;
      uStack_2e = 0xcc14;
      func_0x000299d1();
      uStack_2c = 0x22b2;
      uStack_2e = 0xcc1d;
      func_0x000297e6();
      uStack_2c = 0x22b2;
      uStack_2e = 0xcc22;
      func_0x00029d78();
      aiStack_3a[3] = 0x22b2;
      aiStack_3a[2] = 0xcc2c;
      func_0x000299d1();
      aiStack_3a[3] = 0x22b2;
      aiStack_3a[2] = 0xcc35;
      func_0x000297e6();
      aiStack_3a[3] = 0x22b2;
      aiStack_3a[2] = 0xcc3a;
      func_0x00029d78();
      uStack_3e = 0xcc44;
      func_0x000299d1();
      uStack_3e = 0x22b2;
      uStack_40 = 0xcc4c;
      FUN_3ab8_0453();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xcc62;
      func_0x000297e6();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xcc67;
      func_0x00029d78();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xcc71;
      func_0x000299d1();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xcc79;
      func_0x000297e6();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xcc7e;
      func_0x00029d78();
      iStack_1c = 0x22b2;
      func_0x000299d1();
      iStack_1c = 0x22b2;
      func_0x000297e6();
      uStack_24 = 0x22b2;
      uStack_26 = 0xcc9b;
      func_0x000299d1();
      uStack_24 = 0x22b2;
      uStack_26 = 0xcca4;
      func_0x000297e6();
      uStack_2c = 0x22b2;
      uStack_2e = 0xccae;
      func_0x000299d1();
      uStack_2c = *(undefined2 *)0xa17e;
      uStack_2e = *(undefined2 *)0xa17c;
      aiStack_3a[4] = *(undefined2 *)0xa178;
      aiStack_3a[3] = 0x22b2;
      aiStack_3a[2] = 0xccc7;
      func_0x000297e6();
      aiStack_3a[3] = 0x22b2;
      aiStack_3a[2] = 0xcccc;
      func_0x00029d78();
      piVar14 = (int *)0x22b2;
      uStack_3e = 0xccd6;
      func_0x000299d1();
      uStack_3e = 0x22b2;
      uStack_40 = 0xccdd;
      FUN_3ab8_0453();
      local_224 = *(int *)0xa190;
      local_222 = *(int *)0xa192;
      local_142 = 1;
      local_154 = (int *)0x0;
    }
    if (local_270 < 0) {
      piStack_e = (int *)0xcd18;
      piStack_c = piVar14;
      piVar21 = (int *)func_0x00000271();
      piVar15 = (int *)piVar21;
      piVar14 = &local_112;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        piVar2 = piVar14;
        piVar14 = piVar14 + 1;
        piVar1 = piVar15;
        piVar15 = piVar15 + 1;
        *piVar2 = *piVar1;
      }
      if (*(int *)0xa62 == 3) {
        local_24c = local_112;
        local_24a = local_110;
        local_268 = local_10e;
        local_266 = local_10c;
      }
      local_224 = *(int *)0xa190;
      local_222 = *(int *)0xa192;
      local_142 = 1;
      local_154 = (int *)0x0;
    }
    local_234._2_2_ = 0;
    local_234._0_2_ = 0;
    local_234 = 0;
    if ((local_154 != (int *)0x0) && (local_234 = 0, local_1fa == 100)) {
      local_224 = *(int *)0xa190;
      local_222 = *(int *)0xa192;
      FUN_1885_2ec3();
      if ((local_154 == (int *)0x2) && ((*(int *)0xc1e < 0 && (local_160 != 0)))) {
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xcdd1;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xcdda;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xcddf;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xcde9;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        piVar14 = (int *)0x11f2;
        uStack_1a = 0xcdee;
        local_234 = FUN_13bf_39a0();
        iVar8 = local_152;
        if (local_234 == 0) goto LAB_3ab8_1395;
        if (0 < local_234) {
          piStack_c = (int *)0x11f2;
          piVar14 = (int *)0x0;
          piStack_e = (int *)0xce17;
          puVar22 = (undefined2 *)func_0x0000013f();
          puVar13 = (undefined2 *)puVar22;
          puVar9 = local_128;
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar3 = puVar9;
            puVar9 = puVar9 + 1;
            puVar4 = puVar13;
            puVar13 = puVar13 + 1;
            *puVar3 = *puVar4;
          }
          local_142 = 1;
        }
        if (-1 < local_234) goto LAB_3ab8_2305;
        piStack_e = (int *)0xce4d;
        piStack_c = piVar14;
        puVar22 = (undefined2 *)func_0x00000271();
        puVar13 = (undefined2 *)puVar22;
        puVar9 = local_184;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar9;
          puVar9 = puVar9 + 1;
          puVar4 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar3 = *puVar4;
        }
      }
      else {
        piStack_c = local_154;
        piStack_e = (int *)0x1b6e;
        piVar14 = (int *)0x11f2;
        piStack_10 = (int *)0xce75;
        iVar10 = func_0x00015409();
        iVar8 = local_152;
        if (iVar10 == 0) goto LAB_3ab8_1395;
      }
      local_142 = 1;
    }
LAB_3ab8_2305:
    uVar19 = *(int *)0xce6 == 0;
    if (!(bool)uVar19) {
      uVar17 = 0;
      uVar19 = local_142 == 0;
      if (!(bool)uVar19) {
        func_0x00029834();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        FUN_28b3_117c();
        func_0x00029d78();
        FUN_28b3_1181();
        if ((bool)uVar17) {
          *(undefined2 *)0xce6 = 10;
          return;
        }
      }
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar19) goto code_r0x0003cefd;
    goto LAB_3ab8_2399;
  }
  if (local_1fa == -1) {
    FUN_1885_2ec3();
    return;
  }
  uVar19 = 0;
  uVar17 = local_150 == 0;
  if (0 < local_150) {
    func_0x000297e6();
    func_0x000297e6();
    piVar14 = (int *)0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar19 && !(bool)uVar17) {
      local_150 = -(local_150 + 1);
    }
  }
  uVar19 = 0;
  if (local_150 < 0) {
    func_0x000297e6();
    func_0x000297e6();
    piVar14 = (int *)0x22b2;
    FUN_28b3_1181();
    if ((bool)uVar19) {
      local_150 = -(local_150 + -1);
    }
  }
  if (local_150 < 6) goto LAB_3ab8_1c45;
  if (*(int *)0xa62 == 2) {
    *(undefined2 *)0xa62 = 3;
  }
  else {
    *(undefined2 *)0xa62 = 2;
  }
LAB_3ab8_1c39:
  piVar14 = (int *)0x885;
  piStack_c = (int *)0xc7c2;
  func_0x0000bbb4();
  iVar8 = local_152;
  goto LAB_3ab8_1395;
code_r0x0003cefd:
  func_0x000297e6();
  func_0x000297e6();
  piVar15 = (int *)0x22b2;
  FUN_28b3_1181();
  if ((bool)uVar19) goto LAB_3ab8_1b0c;
LAB_3ab8_2399:
  piVar14 = (int *)0x22b2;
  local_248._0_2_ = local_24c;
  local_248._2_2_ = local_24a;
  local_264 = local_268;
  local_262 = local_266;
  if ((local_25a < 1) && (local_60 == '\0')) {
    local_27e = *(int *)0xa158;
    local_27c = *(int *)0xa15a;
    if (*(int *)0xcb6 != 0) {
      local_27e = *(int *)0xcc2;
      local_27c = *(int *)0xcc4;
    }
    if ((*(int *)0xa62 == 2) && (local_160 == 0)) {
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c2c();
      func_0x000299b9();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xcfb5;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xcfba;
      func_0x0002a11e();
      func_0x00029834();
      func_0x00029983();
      func_0x00029834();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xcfe0;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xcfe5;
      func_0x0002a10c();
      func_0x00029834();
      func_0x00029983();
    }
    if (local_160 == 1) {
      func_0x000297e6();
      func_0x00029bb5();
      func_0x0002996b();
      func_0x00029d78();
      func_0x00029c2c();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xd035;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xd03a;
      func_0x0002a11e();
      func_0x00029834();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c2c();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xd06e;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xd073;
      func_0x0002a10c();
      func_0x00029834();
      func_0x00029983();
    }
    piVar14 = (int *)0x22b2;
    if ((local_160 != 0) || (*(int *)0xa62 == 2)) {
      if (*(int *)0xa62 == 2) {
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd0b9;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd0c2;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd0c7;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd0d1;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        iStack_1c = -0x2f26;
        piVar14 = (int *)FUN_1def_05d1();
        local_248._0_2_ = *piVar14;
        local_248._2_2_ = piVar14[1];
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd104;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd10d;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd112;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd11c;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        iStack_1c = -0x2edb;
        piVar14 = (int *)func_0x0001e558();
        uVar19 = (undefined1 *)0xffed < &uStack_18;
        local_264 = *piVar14;
        local_262 = piVar14[1];
        func_0x000297e6();
        func_0x00029ae7();
        func_0x000297e6();
        func_0x00029ae7();
        FUN_28b3_1181();
        if ((bool)uVar19) {
          local_21c = (int)local_248;
          local_21a = local_248._2_2_;
          local_238 = *(int *)0xa158;
          local_236 = *(int *)0xa15a;
        }
        else {
          local_21c = *(int *)0xa158;
          local_21a = *(int *)0xa15a;
          local_238 = local_264;
          local_236 = local_262;
        }
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd1a5;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd1ae;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd1b8;
        func_0x000299d1();
        uStack_18 = 0;
        uStack_1a = 0x22b2;
        iStack_1c = -0x2e40;
        piVar14 = (int *)FUN_1def_05d1();
        local_248._0_2_ = *piVar14;
        local_248._2_2_ = piVar14[1];
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd1e5;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd1ee;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd1f8;
        func_0x000299d1();
        uStack_18 = 0;
        uStack_1a = 0x22b2;
        piVar14 = (int *)0x1bb4;
        iStack_1c = -0x2e00;
        piVar15 = (int *)func_0x0001e558();
        local_264 = *piVar15;
        local_262 = piVar15[1];
        if (local_160 == 1) {
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x000299b9();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd246;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd24b;
          func_0x0002a11e();
          func_0x00029834();
          func_0x00029983();
          func_0x00029834();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd271;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd276;
          func_0x0002a10c();
          func_0x00029834();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd2a1;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd2aa;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd2af;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0xd2b9;
          func_0x000299d1();
          uStack_18 = 1;
          uStack_1a = 0x22b2;
          iStack_1c = -0x2d3e;
          piVar14 = (int *)FUN_1def_05d1();
          local_286._0_2_ = *piVar14;
          local_286._2_2_ = piVar14[1];
          func_0x000297e6();
          func_0x00029ae7();
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd2fa;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd303;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd308;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0xd312;
          func_0x000299d1();
          uStack_18 = 1;
          uStack_1a = 0x22b2;
          iStack_1c = -0x2ce5;
          func_0x0001e558();
          uVar19 = (undefined1 *)0xffed < &uStack_18;
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029ae7();
          FUN_28b3_1181();
          if ((bool)uVar19) {
            local_21c = (int)local_286;
            local_21a = local_286._2_2_;
            local_238 = *(int *)0xa158;
            local_236 = *(int *)0xa15a;
          }
          else {
            local_21c = *(int *)0xa158;
            local_21a = *(int *)0xa15a;
            local_238 = (int)local_27a;
            local_236 = local_27a._2_2_;
          }
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd385;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd38e;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          uStack_1a = 0xd398;
          func_0x000299d1();
          uStack_18 = 0;
          uStack_1a = 0x22b2;
          iStack_1c = -0x2c60;
          piVar14 = (int *)FUN_1def_05d1();
          local_286._0_2_ = *piVar14;
          local_286._2_2_ = piVar14[1];
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd3c5;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd3ce;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          uStack_1a = 0xd3d8;
          func_0x000299d1();
          uStack_18 = 0;
          uStack_1a = 0x22b2;
          iStack_1c = -0x2c20;
          piVar14 = (int *)func_0x0001e558();
          uVar19 = (undefined1 *)0xffed < &uStack_18;
          uVar17 = &stack0x0000 == (undefined1 *)0x6;
          local_27a._0_2_ = *piVar14;
          local_27a._2_2_ = piVar14[1];
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_1163();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_117c();
          piVar14 = (int *)0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar19 || (bool)uVar17) {
            local_248._0_2_ = (int)local_286;
            local_248._2_2_ = local_286._2_2_;
            local_264 = (int)local_27a;
            local_262 = local_27a._2_2_;
          }
          else {
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            func_0x000299b9();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xd489;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xd48e;
            func_0x0002a11e();
            func_0x00029834();
            func_0x00029983();
            func_0x00029834();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xd4b4;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xd4b9;
            func_0x0002a10c();
            func_0x00029834();
            piVar14 = (int *)0x22b2;
            func_0x00029983();
          }
        }
      }
      else {
        local_238 = *(int *)0xa158;
        local_236 = *(int *)0xa15a;
        piStack_c = (int *)*(undefined2 *)0xa17a;
        piStack_e = (int *)*(undefined2 *)0xa178;
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd512;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd517;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd521;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd52a;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd52f;
        func_0x00029d78();
        iStack_20 = 0x22b2;
        func_0x000299d1();
        iStack_20 = 1;
        uStack_24 = 0xd542;
        FUN_1def_05d1();
        piStack_10 = (int *)0x1bb4;
        piStack_12 = (int *)0xd54c;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd555;
        func_0x0002996b();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xd55a;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd564;
        func_0x000299d1();
        uStack_18 = 0;
        uStack_1a = 0x22b2;
        iStack_1c = -0x2a94;
        piVar14 = (int *)FUN_1def_05d1();
        local_248._0_2_ = *piVar14;
        local_248._2_2_ = piVar14[1];
        piStack_c = (int *)*(int *)0xa17a;
        piStack_e = (int *)*(int *)0xa178;
        piStack_10 = (int *)0x1bb4;
        piStack_12 = (int *)0xd597;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd5a1;
        func_0x000299d1();
        uStack_18 = 0;
        uStack_1a = 0x22b2;
        piVar14 = (int *)0x1bb4;
        iStack_1c = -0x2a57;
        piVar15 = (int *)func_0x0001e558();
        local_264 = *piVar15;
        local_262 = piVar15[1];
      }
    }
  }
  lVar6 = local_25a;
  if ((0 < local_25a) && (local_60 == '\0')) {
    piStack_e = (int *)0xd5ed;
    piStack_c = piVar14;
    func_0x000297e6();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xd5f2;
    func_0x00029d78();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xd5fc;
    func_0x000299d1();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xd604;
    func_0x000297e6();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xd609;
    func_0x00029d78();
    iStack_1c = 0x22b2;
    func_0x000299d1();
    iStack_1c = 0x22b2;
    func_0x000297e6();
    uStack_24 = 0x22b2;
    uStack_26 = 0xd626;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0xd62f;
    func_0x000297e6();
    uStack_2c = 0x22b2;
    uStack_2e = 0xd639;
    func_0x000299d1();
    uStack_2c = 0x22b2;
    uStack_2e = 0xd642;
    func_0x000297e6();
    uStack_2c = 0x22b2;
    uStack_2e = 0xd647;
    func_0x00029d78();
    aiStack_3a[3] = 0x22b2;
    aiStack_3a[2] = 0xd651;
    func_0x000299d1();
    aiStack_3a[3] = 0x22b2;
    aiStack_3a[2] = 0xd65a;
    func_0x000297e6();
    aiStack_3a[3] = 0x22b2;
    aiStack_3a[2] = 0xd65f;
    func_0x00029d78();
    uStack_3e = 0xd669;
    func_0x000299d1();
    uStack_3e = 0x22b2;
    uStack_40 = 0xd671;
    FUN_3ab8_0453();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xd687;
    func_0x000297e6();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xd68c;
    func_0x00029d78();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xd696;
    func_0x000299d1();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xd69e;
    func_0x000297e6();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xd6a3;
    func_0x00029d78();
    iStack_1c = 0x22b2;
    func_0x000299d1();
    iStack_1c = 0x22b2;
    func_0x000297e6();
    uStack_24 = 0x22b2;
    uStack_26 = 0xd6c0;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0xd6c9;
    func_0x000297e6();
    uStack_2c = 0x22b2;
    uStack_2e = 0xd6d3;
    func_0x000299d1();
    uStack_2c = *(undefined2 *)0xa17e;
    uStack_2e = *(undefined2 *)0xa17c;
    aiStack_3a[4] = *(undefined2 *)0xa178;
    aiStack_3a[3] = 0x22b2;
    aiStack_3a[2] = 0xd6ec;
    func_0x000297e6();
    aiStack_3a[3] = 0x22b2;
    aiStack_3a[2] = 0xd6f1;
    func_0x00029d78();
    piVar14 = (int *)0x22b2;
    uStack_3e = 0xd6fb;
    func_0x000299d1();
    uStack_3e = 0x22b2;
    uStack_40 = 0xd702;
    FUN_3ab8_0453();
    lVar6 = local_25a;
  }
  local_25a._2_2_ = (int)((ulong)lVar6 >> 0x10);
  if ((local_60 != '\0') && (local_270 == 0)) {
    local_28e._0_2_ = (int *)*(undefined2 *)0xa158;
    local_28e._2_2_ = *(undefined2 *)0xa15a;
    if (*(int *)0xcb6 != 0) {
      local_28e._0_2_ = (int *)*(undefined2 *)0xcc2;
      local_28e._2_2_ = *(undefined2 *)0xcc4;
    }
    uVar19 = local_25a._2_2_ == 0;
    if (lVar6 < 0) {
      local_204 = local_f0;
      local_202 = local_ee;
      local_228 = local_ec;
      local_226 = local_ea;
    }
    local_25a = lVar6;
    func_0x000297e6();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar19) {
      func_0x000297e6();
      func_0x000297e6();
      piVar15 = (int *)0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar19) goto LAB_3ab8_1b0c;
    }
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xd7f1;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xd7fa;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xd803;
    FUN_28b3_100d();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xd808;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd812;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd817;
    func_0x0002a178();
    uVar17 = &stack0x0000 == (undefined1 *)0x6;
    func_0x00029834();
    func_0x00029c44();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1163();
    func_0x00029983();
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    func_0x00029834();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029d78();
    FUN_28b3_117c();
    iVar8 = FUN_28b3_0f51();
    local_282._0_2_ = (int)((long)iVar8 * 0xf);
    uVar19 = (long)(int)local_282 != (long)iVar8 * 0xf;
    FUN_28b3_0d8b();
    func_0x00029983();
    func_0x00029834();
    func_0x000297e6();
    piStack_c = (int *)0xd8c6;
    func_0x00029bb5();
    func_0x0002996b();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar19 || (bool)uVar17) {
LAB_3ab8_2d90:
      func_0x00029834();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar19 && !(bool)uVar17) {
        func_0x00029834();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar19) goto LAB_3ab8_2dd9;
        uVar16 = *(undefined2 *)0xa15a;
        *(undefined2 *)0xb76a = *(undefined2 *)0xa158;
        *(undefined2 *)0xb76c = uVar16;
        uVar16 = *(undefined2 *)0xa164;
        uVar11 = *(undefined2 *)0xa166;
        goto LAB_3ab8_2d86;
      }
LAB_3ab8_2dd9:
      func_0x00029834();
      func_0x000297e6();
      FUN_28b3_1181();
      uVar20 = uVar19;
      if (!(bool)uVar19 && !(bool)uVar17) {
        func_0x00029834();
        func_0x000297e6();
        FUN_28b3_1181();
        uVar20 = 0;
        if ((bool)uVar19) {
          uVar16 = *(undefined2 *)0xa1d4;
          uVar11 = *(undefined2 *)0xa1d6;
          goto LAB_3ab8_2d78;
        }
      }
      func_0x00029834();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar20) {
        func_0x00029834();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar20 && !(bool)uVar17) {
          uVar16 = *(undefined2 *)0xa15a;
          *(undefined2 *)0xb76a = *(undefined2 *)0xa158;
          *(undefined2 *)0xb76c = uVar16;
          uVar16 = *(undefined2 *)0xa1d4;
          uVar11 = *(undefined2 *)0xa1d6;
          goto LAB_3ab8_2d86;
        }
      }
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c2c();
      func_0x000299b9();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xda09;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xda0e;
      func_0x0002a11e();
      func_0x00029834();
      func_0x00029983();
      func_0x00029834();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xda34;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xda39;
      func_0x0002a10c();
      func_0x00029834();
      func_0x00029983();
    }
    else {
      func_0x00029834();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar19) goto LAB_3ab8_2d90;
      uVar16 = *(undefined2 *)0xa164;
      uVar11 = *(undefined2 *)0xa166;
LAB_3ab8_2d78:
      *(undefined2 *)0xb76a = uVar16;
      *(undefined2 *)0xb76c = uVar11;
      uVar16 = *(undefined2 *)0xa158;
      uVar11 = *(undefined2 *)0xa15a;
LAB_3ab8_2d86:
      *(undefined2 *)0xb784 = uVar16;
      *(undefined2 *)0xb786 = uVar11;
    }
    local_238 = *(int *)0xa158;
    local_236 = *(int *)0xa15a;
    piStack_c = (int *)*(undefined2 *)0xa17a;
    piStack_e = (int *)*(undefined2 *)0xa178;
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xda74;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xda79;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xda83;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xda8c;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xda91;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    func_0x000299d1();
    iStack_20 = 1;
    uStack_24 = 0xdaa4;
    FUN_1def_05d1();
    piStack_10 = (int *)0x1bb4;
    piStack_12 = (int *)0xdaae;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xdab7;
    func_0x0002996b();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xdabc;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xdac6;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    iStack_1c = -0x2532;
    piVar14 = (int *)FUN_1def_05d1();
    local_248._0_2_ = *piVar14;
    local_248._2_2_ = piVar14[1];
    piStack_c = (int *)*(int *)0xa17a;
    piStack_e = (int *)*(int *)0xa178;
    piStack_10 = (int *)0x1bb4;
    piStack_12 = (int *)0xdaf9;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xdb03;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    piVar14 = (int *)0x1bb4;
    iStack_1c = -0x24f5;
    piVar15 = (int *)func_0x0001e558();
    local_264 = *piVar15;
    local_262 = piVar15[1];
    lVar6 = local_25a;
  }
  local_25a = lVar6;
  if ((lVar6 < 0) && ((*(int *)0xa62 == 3 || (local_60 != '\0')))) {
    piStack_e = (int *)0xdb44;
    piStack_c = piVar14;
    func_0x000297e6();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xdb49;
    func_0x00029d78();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xdb53;
    func_0x000299d1();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xdb5c;
    func_0x000297e6();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xdb61;
    func_0x00029d78();
    iStack_1c = 0x22b2;
    func_0x000299d1();
    piVar15 = aiStack_3a;
    piVar14 = &local_f0;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      piVar1 = piVar15;
      piVar15 = piVar15 + 1;
      piVar21 = piVar14;
      piVar14 = piVar14 + 1;
      *piVar1 = *piVar21;
    }
    uStack_3e = 0xdb7f;
    FUN_3ab8_0549();
  }
  if (local_152 == 0) {
    if ((*(char *)0x4a != '\0') && (local_154 != (int *)0x2)) {
      puVar9 = (undefined2 *)func_0x0000c4c4();
      local_28e._0_2_ = (int *)*puVar9;
      local_28e._2_2_ = puVar9[1];
      func_0x000297e6();
      piStack_c = (int *)0xdcfe;
      func_0x00029b9d();
      func_0x00029983();
      func_0x000297e6();
      piStack_c = (int *)0xdd17;
      func_0x00029b55();
      func_0x00029983();
      func_0x000297e6();
      piStack_c = (int *)0xdd30;
      func_0x00029b55();
      func_0x00029983();
      if ((local_160 == 0) && (*(int *)0xa62 == 3)) {
        piStack_c = (int *)0x1;
        piStack_e = (int *)0x22b2;
        piStack_10 = (int *)0xdd5a;
        FUN_1def_0338();
        uVar19 = (undefined1 *)0xfff9 < &piStack_c;
        uVar17 = &stack0x0000 == (undefined1 *)0x6;
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar19 || (bool)uVar17) {
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029d78();
          func_0x00029bfc();
        }
        else {
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029d78();
          func_0x00029c74();
        }
        uVar23 = FUN_28b3_0f51();
        local_286 = uVar23;
        func_0x000298b4();
        func_0x00029b6d();
        func_0x00029983();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar19 || (bool)uVar17) {
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029d78();
          func_0x00029bfc();
        }
        else {
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029d78();
          func_0x00029c74();
        }
        uVar23 = FUN_28b3_0f51();
        local_286 = uVar23;
        func_0x000298b4();
        func_0x00029b6d();
        func_0x00029983();
        piStack_c = (int *)0x0;
        piStack_e = (int *)0x22b2;
        piStack_10 = (int *)0xde75;
        FUN_1def_0338();
        func_0x000297e6();
        piStack_c = (int *)0xde8b;
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        piStack_c = (int *)0xdea4;
        func_0x00029bb5();
      }
      else {
        func_0x000297e6();
        func_0x00029b6d();
        func_0x000297e6();
        func_0x00029b6d();
        FUN_28b3_117c();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xdee0;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xdee5;
        FUN_28b3_1582();
        func_0x00029834();
        func_0x000299b9();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1172();
        func_0x00029c74();
        uVar23 = FUN_28b3_0f51();
        local_286 = uVar23;
        local_282 = uVar23;
        func_0x000298b4();
        func_0x00029b6d();
        func_0x00029d78();
        func_0x00029c44();
        func_0x000299b9();
        FUN_28b3_0ee9();
        func_0x00029834();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029b6d();
        func_0x00029bb5();
        func_0x00029983();
        func_0x00029834();
        func_0x00029b6d();
        func_0x00029bb5();
      }
LAB_3ab8_342c:
      func_0x00029983();
    }
  }
  else {
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xdbad;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xdbb6;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xdbbb;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xdbc5;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xdbce;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xdbd3;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    func_0x000299d1();
    iStack_20 = 0x22b2;
    func_0x000297e6();
    iStack_20 = 0x22b2;
    func_0x00029d78();
    uStack_28 = 0x22b2;
    uStack_2a = 0xdbf5;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    uStack_2a = 0xdbfa;
    FUN_1def_06ff();
    uVar19 = (undefined1 *)0xffdf < &uStack_26;
    func_0x000297e6();
    func_0x00029d78();
    func_0x000299b9();
    FUN_28b3_1181();
    if (!(bool)uVar19) {
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c44();
      func_0x000299b9();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029d78();
      func_0x00029c9d();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_117c();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029d78();
      func_0x00029c2c();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_117c();
      goto LAB_3ab8_342c;
    }
    local_248._0_2_ = local_204;
    local_248._2_2_ = local_202;
    local_264 = local_228;
    local_262 = local_226;
  }
  FUN_1885_2ec3();
  piStack_c = (int *)0x1b6e;
  piStack_e = (int *)0xdfc3;
  FUN_1000_0599();
  piStack_c = (int *)0xdfd2;
  func_0x000297e6();
  piStack_c = (int *)0xdfd7;
  func_0x00029d78();
  piStack_12 = (int *)0x22b2;
  uStack_16._2_2_ = (int *)0xdfe1;
  func_0x000299d1();
  piStack_12 = (int *)0x22b2;
  uStack_16._2_2_ = (int *)0xdfea;
  func_0x000297e6();
  piStack_12 = (int *)0x22b2;
  uStack_16._2_2_ = (int *)0xdfef;
  func_0x00029d78();
  uStack_1a = 0x22b2;
  iStack_1c = -0x2007;
  func_0x000299d1();
  uStack_1a = 0x22b2;
  iStack_1c = -0x1ffe;
  func_0x000297e6();
  uStack_1a = 0x22b2;
  iStack_1c = -0x1ff9;
  func_0x00029d78();
  uStack_24 = 0xe011;
  func_0x000299d1();
  uStack_24 = 0xe01a;
  func_0x000297e6();
  uStack_24 = 0xe01f;
  func_0x00029d78();
  uStack_2a = 0x22b2;
  uStack_2c = 0xe029;
  func_0x000299d1();
  uStack_2a = 0x22b2;
  uStack_2c = 0xe02e;
  func_0x0001e18f();
  local_224 = local_24c;
  local_222 = local_24a;
  local_23c = local_268;
  local_23a = local_266;
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xe069;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xe072;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xe077;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xe081;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0xe08a;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xe08f;
  func_0x00029d78();
  iStack_20 = 0x22b2;
  func_0x000299d1();
  iStack_20 = 0x22b2;
  func_0x000297e6();
  iStack_20 = 0x22b2;
  func_0x00029d78();
  uStack_28 = 0x22b2;
  uStack_2a = 0xe0b1;
  func_0x000299d1();
  uStack_28 = 0x22b2;
  uStack_2a = 0xe0b6;
  piVar21 = (int *)FUN_1000_0718();
  local_288 = 0;
  local_28a = 0;
  local_28e = piVar21;
  func_0x00029da5();
  func_0x00029c2c();
  func_0x00029983();
  uVar19 = 0;
  uVar20 = *(int *)0xcb6 == 0;
  uVar17 = uVar19;
  if ((bool)uVar20) goto LAB_3ab8_358c;
  do {
    func_0x000297e6();
    piStack_c = (int *)0xe106;
    func_0x00029b55();
    func_0x00029983();
    uVar17 = uVar19;
LAB_3ab8_358c:
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    uVar18 = 0;
    uVar19 = 1;
  } while ((bool)uVar17);
  while( true ) {
    func_0x000297e6();
    func_0x000297e6();
    piVar15 = (int *)0x22b2;
    FUN_28b3_1181();
    if ((bool)uVar18 || (bool)uVar20) break;
    func_0x000297e6();
    piStack_c = (int *)0xe138;
    func_0x00029bb5();
    func_0x00029983();
  }
  if (local_142 == 0) {
    if (*(char *)0xb782 == '\0') {
      if ((((*(char *)0x4a == '\0') || (local_154 == (int *)0x2)) || (local_160 != 0)) ||
         (*(int *)0xa62 != 3)) {
        local_28e._0_2_ = (int *)0x11;
        do {
          piStack_c = (int *)local_28e;
          piStack_e = (int *)(*(int *)0xa58 + -1);
          piStack_10 = (int *)local_28e;
          piStack_12 = (int *)0x1;
          uStack_16._0_2_ = (int *)0xeb82;
          uStack_16._2_2_ = piVar15;
          func_0x0000def0();
          local_28e._0_2_ = (int *)((int)(int *)local_28e + 1);
          piVar15 = (int *)0xdef;
        } while ((int)(int *)local_28e < 0x30);
        piStack_c = (int *)0xdef;
        piStack_e = (int *)0xeba1;
        func_0x000297e6();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xeba6;
        func_0x00029d78();
        uStack_16._2_2_ = (int *)0x22b2;
        uStack_16._0_2_ = (int *)0xebb0;
        func_0x000299d1();
        uStack_16._2_2_ = (int *)0x22b2;
        uStack_16._0_2_ = (int *)0xebb9;
        func_0x000297e6();
        uStack_16._2_2_ = (int *)0x22b2;
        uStack_16._0_2_ = (int *)0xebbe;
        func_0x00029d78();
        iStack_1c = 0x22b2;
        func_0x000299d1();
        iStack_1c = 0x22b2;
        func_0x000297e6();
        iStack_1c = 0x22b2;
        func_0x00029d78();
        uStack_24 = 0x22b2;
        uStack_26 = 0xebe0;
        func_0x000299d1();
        uStack_24 = 0x22b2;
        uStack_26 = 0xebe9;
        func_0x000297e6();
        uStack_24 = 0x22b2;
        uStack_26 = 0xebee;
        func_0x00029d78();
        uStack_2c = 0x22b2;
        uStack_2e = 0xebf8;
        func_0x000299d1();
        uStack_2c = 0x22b2;
        uStack_2e = 0xebfd;
        puVar9 = (undefined2 *)FUN_1def_06ff();
        piStack_c = (int *)puVar9[1];
        piStack_e = (int *)*puVar9;
        piStack_10 = (int *)0x558b;
        piStack_12 = (int *)&stack0xffc4;
        uStack_16._2_2_ = (int *)0x1bb4;
        uStack_16._0_2_ = (int *)0xec14;
        FUN_10ad_1928();
        piStack_c = (int *)0x2;
        piStack_e = (int *)0x1;
        piStack_10 = (int *)&stack0xffc4;
        piStack_12 = (int *)0x11f2;
        uStack_16._2_2_ = (int *)0xec2c;
        FUN_1000_02b5();
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xec46;
        func_0x000299d1();
        piStack_10 = (int *)0x20a;
        piStack_12 = (int *)&stack0xffc4;
        uStack_16._2_2_ = (int *)0x22b2;
        uStack_16._0_2_ = (int *)0xec53;
        FUN_21f2_3454();
        piStack_c = (int *)0x3;
        piStack_e = (int *)0x1;
        piStack_10 = (int *)&stack0xffc4;
        piStack_12 = (int *)0x22b2;
        piVar15 = (int *)0xdef;
        uStack_16._2_2_ = (int *)0xec6b;
        FUN_1000_02b5();
      }
      else {
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029983();
        piStack_c = (int *)0x1;
        piStack_e = (int *)0x22b2;
        piVar15 = (int *)0x1bb4;
        piStack_10 = (int *)0xeb21;
        FUN_1def_0338();
        piStack_c = (int *)*(undefined2 *)0xa15a;
        piStack_e = (int *)*(undefined2 *)0xa158;
        piStack_10 = (int *)*(undefined2 *)0xa15a;
        piStack_12 = (int *)*(undefined2 *)0xa158;
        uStack_18 = *(undefined2 *)0xa15a;
        uStack_1a = *(undefined2 *)0xa158;
        iStack_1c = *(int *)0xa15a;
        iStack_20 = 0x1bb4;
        uStack_16 = local_28e;
        FUN_3ab8_0a75();
      }
    }
    goto LAB_3ab8_1b0c;
  }
  if ((local_270 < 0) && (*(int *)0xa62 == 2)) {
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe189;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe192;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe197;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xe1a1;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xe1aa;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xe1af;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    func_0x000299d1();
    iStack_20 = 0x22b2;
    func_0x000297e6();
    iStack_20 = 0x22b2;
    func_0x00029d78();
    uStack_28 = 0x22b2;
    uStack_2a = 0xe1d1;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    uStack_2a = 0xe1d6;
    uVar23 = FUN_1000_0718();
    local_288 = 0;
    local_28a = 0;
    local_28e = (int *)uVar23;
    func_0x00029da5();
    func_0x00029c2c();
    func_0x00029983();
    uVar19 = 0;
    if (*(int *)0xcb6 != 0) {
      func_0x000297e6();
      piStack_c = (int *)0xe220;
      func_0x00029b55();
      func_0x00029983();
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar19) {
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029b6d();
      func_0x00029d78();
      iVar8 = FUN_28b3_0f51();
      iVar10 = 0x5a;
    }
    else {
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029b6d();
      func_0x00029d78();
      iVar8 = FUN_28b3_0f51();
      iVar10 = -0x5a;
    }
    local_28e._0_2_ = (int *)(iVar8 * iVar10);
    FUN_28b3_0d8b();
    func_0x00029983();
    if (*(int *)0xcb6 != 0) {
      func_0x000297e6();
      piStack_c = (int *)0xe2be;
      func_0x00029bb5();
      func_0x00029983();
    }
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c2c();
    func_0x000299b9();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe2ed;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe2f2;
    func_0x0002a11e();
    func_0x00029834();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe32a;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe32f;
    func_0x0002a10c();
    func_0x00029834();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xe367;
    func_0x000297e6();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xe36c;
    func_0x00029d78();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xe376;
    func_0x000299d1();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xe37f;
    func_0x000297e6();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xe384;
    func_0x00029d78();
    iStack_1c = 0x22b2;
    func_0x000299d1();
    piVar15 = aiStack_3a;
    piVar14 = &local_112;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      piVar1 = piVar15;
      piVar15 = piVar15 + 1;
      piVar21 = piVar14;
      piVar14 = piVar14 + 1;
      *piVar1 = *piVar21;
    }
    uStack_3e = 0xe3a2;
    FUN_3ab8_0549();
  }
  piVar21 = local_28e;
  if ((local_270 < 0) && (*(int *)0xa62 == 3)) {
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xe3c6;
    func_0x000297e6();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xe3cb;
    func_0x00029d78();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xe3d5;
    func_0x000299d1();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xe3de;
    func_0x000297e6();
    uStack_16._2_2_ = (int *)0x22b2;
    uStack_16._0_2_ = (int *)0xe3e3;
    func_0x00029d78();
    iStack_1c = 0x22b2;
    func_0x000299d1();
    piVar15 = aiStack_3a;
    piVar14 = &local_112;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      piVar1 = piVar15;
      piVar15 = piVar15 + 1;
      piVar21 = piVar14;
      piVar14 = piVar14 + 1;
      *piVar1 = *piVar21;
    }
    uStack_3e = 0xe401;
    FUN_3ab8_0549();
    piVar21 = local_28e;
  }
  local_28e._2_2_ = (undefined2)((ulong)piVar21 >> 0x10);
  uVar16 = 0x22b2;
  local_bd = *(undefined1 *)0xa6a;
  local_be = *(undefined1 *)0xa6c;
  local_bc = *(undefined1 *)0xb310;
  local_ce = local_204;
  local_cc = local_202;
  local_ca = local_228;
  local_c8 = local_226;
  local_c6._0_2_ = (int)local_248;
  local_c6._2_2_ = local_248._2_2_;
  local_c2 = local_264;
  local_c0 = local_262;
  if (local_234 == 0) goto LAB_3ab8_3ae4;
  local_28e._0_2_ = (int *)0x0;
  lVar6 = local_234;
  if (0 < local_234) {
    piVar15 = &iStack_20;
    piVar14 = &local_ce;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      piVar1 = piVar15;
      piVar15 = piVar15 + 1;
      piVar21 = piVar14;
      piVar14 = piVar14 + 1;
      *piVar1 = *piVar21;
    }
    piVar14 = aiStack_3a + 2;
    puVar9 = local_128;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar4 = piVar14;
      piVar14 = piVar14 + 1;
      puVar22 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar4 = *puVar22;
    }
    aiStack_3a[1] = 0x22b2;
    uVar16 = 0x1bb4;
    aiStack_3a[0] = -6999;
    iVar8 = FUN_1def_1921();
    lVar6 = local_234;
    if (iVar8 == 0) {
      local_28e._0_2_ = (int *)0x1;
    }
  }
  local_234._2_2_ = (int)((ulong)lVar6 >> 0x10);
  uVar19 = 0;
  uVar17 = local_234._2_2_ == 0;
  local_234 = lVar6;
  if (lVar6 < 0) {
    piStack_c = &local_27e;
    piStack_e = (int *)&local_286;
    puVar13 = &uStack_2e;
    puVar9 = local_184;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar4 = puVar13;
      puVar13 = puVar13 + 1;
      puVar22 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar4 = *puVar22;
    }
    piVar15 = aiStack_44;
    piVar14 = &local_ce;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      piVar1 = piVar15;
      piVar15 = piVar15 + 1;
      piVar21 = piVar14;
      piVar14 = piVar14 + 1;
      *piVar1 = *piVar21;
    }
    uStack_48 = 0xe4f7;
    local_46 = uVar16;
    iVar8 = FUN_1def_2179();
    uVar19 = 0;
    uVar17 = iVar8 == 0;
    if ((bool)uVar17) {
      local_28e._0_2_ = (int *)0x1;
      local_248 = CONCAT22(local_248._2_2_,(int)local_248);
    }
    else {
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029ae7();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029ae7();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029ae7();
      FUN_28b3_1163();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029ae7();
      FUN_28b3_117c();
      FUN_28b3_1181();
      local_264 = (int)local_27a;
      local_262 = local_27a._2_2_;
      local_248 = local_282;
      if (!(bool)uVar19 && !(bool)uVar17) {
        local_264 = local_27e;
        local_262 = local_27c;
        local_248 = local_286;
      }
    }
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)uVar19) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar19 || (bool)uVar17) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar19) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar19 || (bool)uVar17) goto LAB_3ab8_3a98;
      }
    }
  }
  local_28e._0_2_ = (int *)0x1;
LAB_3ab8_3a98:
  piVar21 = (int *)CONCAT22(local_28e._2_2_,(int *)local_28e);
  if ((int *)local_28e == (int *)0x0) goto LAB_3ab8_3ae4;
  *(undefined2 *)0xc22 = 1;
  piStack_c = (int *)0x2;
  piStack_e = (int *)0x14;
  piStack_10 = (int *)0x402;
  piStack_12 = (int *)0x22b2;
  piVar14 = (int *)0xdef;
  uStack_16._2_2_ = (int *)0xe63e;
  FUN_1000_02b5();
  iVar8 = local_152;
  goto LAB_3ab8_1395;
LAB_3ab8_3ae4:
  local_c2 = local_264;
  local_c0 = local_262;
  local_28e = piVar21;
  local_c6 = local_248;
  FUN_1885_2ec3();
  piStack_c = (int *)0xe671;
  func_0x0000daa6();
  local_f2 = 0;
  local_212 = 0;
  local_a2 = 0;
  func_0x0000c3ca();
  piVar15 = &iStack_1c;
  piVar14 = &local_ce;
  for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
    piVar1 = piVar15;
    piVar15 = piVar15 + 1;
    piVar21 = piVar14;
    piVar14 = piVar14 + 1;
    *piVar1 = *piVar21;
  }
  iStack_20 = -0x1966;
  iVar8 = FUN_17a6_0cba();
  piVar21 = local_28e;
  uVar23 = local_286;
  uVar7 = local_282;
  if (0 < iVar8) {
    local_f2 = 1;
    uVar12 = (int)*(uint *)0x5598 >> 0xf;
    local_244 = (*(uint *)0x5598 ^ uVar12) - uVar12;
    if (local_244 != 0) {
      local_282 = CONCAT22(*(undefined2 *)0xb30e,*(undefined2 *)0xb30c);
      local_27e = *(int *)0xb37e;
      local_27c = *(int *)0xb380;
      local_286 = CONCAT22(*(undefined2 *)0xb76c,*(undefined2 *)0xb76a);
      local_28e = (int *)CONCAT22(*(undefined2 *)0xb786,(int *)*(undefined2 *)0xb784);
      local_27a._0_2_ = *(int *)0xc122;
      local_27a._2_2_ = *(int *)0xc124;
    }
    if (((local_244 == 1) || (local_244 == 3)) || (local_244 == 4)) {
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe732;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe73b;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe740;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe74a;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe74f;
      iVar8 = FUN_1def_1208();
      if (iVar8 != 0) {
        local_212 = local_212 + 1;
      }
    }
    if (((local_244 == 2) || (local_244 == 3)) || (local_244 == 4)) {
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe787;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe790;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe795;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe79f;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe7a4;
      iVar8 = FUN_1def_1208();
      if (iVar8 != 0) {
        local_212 = local_212 + 1;
      }
    }
    if (((local_244 == 6) || (local_244 == 8)) || (local_244 == 9)) {
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe7df;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe7e8;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe7ed;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe7f7;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe800;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe805;
      func_0x00029d78();
      iStack_20 = 0x22b2;
      func_0x000299d1();
      iStack_20 = 0x22b2;
      func_0x000297e6();
      iStack_20 = 0x22b2;
      func_0x00029d78();
      uStack_28 = 0x22b2;
      uStack_2a = 0xe827;
      func_0x000299d1();
      uStack_28 = 0x22b2;
      uStack_2a = 0xe82c;
      FUN_1def_043a();
      piStack_c = (int *)*(undefined2 *)0xa20a;
      piStack_e = (int *)*(int *)0xa208;
      piStack_10 = (int *)*(undefined2 *)0xa206;
      piStack_12 = (int *)*(undefined2 *)0xa204;
      pcVar5 = (code *)swi(0x3f);
      iVar8 = (*pcVar5)();
      local_f2 = local_f2 + iVar8;
    }
    if (((local_244 == 7) || (local_244 == 8)) || (local_244 == 9)) {
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe883;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe88c;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe891;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe89b;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe8a4;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe8a9;
      func_0x00029d78();
      iStack_20 = 0x22b2;
      func_0x000299d1();
      iStack_20 = 0x22b2;
      func_0x000297e6();
      iStack_20 = 0x22b2;
      func_0x00029d78();
      uStack_28 = 0x22b2;
      uStack_2a = 0xe8cb;
      func_0x000299d1();
      uStack_28 = 0x22b2;
      uStack_2a = 0xe8d0;
      FUN_1def_043a();
      piStack_c = (int *)*(undefined2 *)0xa20a;
      piStack_e = (int *)*(int *)0xa208;
      piStack_10 = (int *)*(undefined2 *)0xa206;
      piStack_12 = (int *)*(undefined2 *)0xa204;
      pcVar5 = (code *)swi(0x3f);
      iVar8 = (*pcVar5)();
      local_f2 = local_f2 + iVar8;
    }
    if (((local_244 == 4) || (local_244 == 5)) ||
       (piVar21 = local_28e, uVar23 = local_286, uVar7 = local_282, local_244 == 9)) {
      local_272 = (int *)*(int *)0xc1e;
      *(undefined2 *)0xc1e = 0;
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe934;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe93d;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe942;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe94c;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe955;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe95a;
      func_0x00029d78();
      iStack_20 = 0x22b2;
      func_0x000299d1();
      iStack_20 = 0x22b2;
      func_0x000297e6();
      iStack_20 = 0x22b2;
      func_0x00029d78();
      uStack_28 = 0x22b2;
      uStack_2a = 0xe97c;
      func_0x000299d1();
      uStack_28 = 0x22b2;
      uStack_2a = 0xe981;
      FUN_1def_043a();
      piStack_c = (int *)0x1bb4;
      piStack_e = (int *)0xe995;
      func_0x000297e6();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe99a;
      func_0x00029d78();
      uStack_16._2_2_ = (int *)0x22b2;
      uStack_16._0_2_ = (int *)0xe9a4;
      func_0x000299d1();
      uStack_16._2_2_ = (int *)local_2b6;
      uStack_16._0_2_ = (int *)0x0;
      pcVar5 = (code *)swi(0x3f);
      iVar8 = (*pcVar5)();
      if (iVar8 != 0) {
        local_a2 = 1;
      }
      *(int *)0xc1e = (int)local_272;
      piVar21 = local_28e;
      uVar23 = local_286;
      uVar7 = local_282;
    }
    local_282._2_2_ = (undefined2)((ulong)uVar7 >> 0x10);
    local_282._0_2_ = (int)uVar7;
    local_286._2_2_ = (int)((ulong)uVar23 >> 0x10);
    local_286._0_2_ = (int)uVar23;
    local_28e._2_2_ = (undefined2)((ulong)piVar21 >> 0x10);
    local_28e._0_2_ = (int *)piVar21;
    if (local_244 != 0) {
      *(undefined2 *)0xb30c = (int)local_282;
      *(undefined2 *)0xb30e = local_282._2_2_;
      *(int *)0xb37e = local_27e;
      *(int *)0xb380 = local_27c;
      *(int *)0xb76a = (int)local_286;
      *(undefined2 *)0xb76c = local_286._2_2_;
      *(undefined2 *)0xb784 = (int *)local_28e;
      *(undefined2 *)0xb786 = local_28e._2_2_;
      *(int *)0xc122 = (int)local_27a;
      *(int *)0xc124 = local_27a._2_2_;
    }
  }
  if (0 < *(int *)0x5598) {
    *(undefined2 *)0x5598 = 0;
  }
  local_28e = piVar21;
  local_286 = uVar23;
  local_282 = uVar7;
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xea3c;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xea45;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xea4a;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xea54;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0xea5d;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xea62;
  func_0x00029d78();
  iStack_20 = 0x22b2;
  func_0x000299d1();
  iStack_20 = 0x22b2;
  func_0x000297e6();
  iStack_20 = 0x22b2;
  func_0x00029d78();
  uStack_28 = 0x22b2;
  uStack_2a = 0xea84;
  func_0x000299d1();
  uStack_28 = 0x22b2;
  uStack_2a = 0xea89;
  puVar9 = (undefined2 *)FUN_1def_06ff();
  local_13c = *puVar9;
  local_13a = (int *)puVar9[1];
  func_0x0000abfa();
  iVar8 = local_152;
  if (param_2 != 0) {
    return;
  }
  goto LAB_3ab8_0f09;
}



/* 3ab8:40f7  FUN_3ab8_40f7  2873 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0003ed2d) */

int __cdecl16far FUN_3ab8_40f7(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined1 **ppuVar4;
  undefined2 uVar5;
  code *pcVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined2 *puVar18;
  int *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  int *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  int local_214;
  int local_212;
  int local_210;
  int local_20e;
  undefined2 local_1f2;
  undefined2 local_1f0;
  undefined2 uStack_1ee;
  undefined2 uStack_1ec;
  undefined2 local_1ea;
  undefined2 local_1e8;
  undefined2 uStack_1e4;
  undefined2 uStack_1e2;
  undefined2 uStack_1dc;
  undefined2 uStack_1da;
  int local_1d8;
  undefined2 uStack_1d6;
  undefined2 uStack_1d4;
  undefined2 local_1d2;
  undefined2 local_1d0;
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined2 uStack_1c6;
  undefined2 uStack_1c4;
  int local_1c2;
  undefined2 uStack_1be;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined2 uStack_1b8;
  undefined2 local_1b6;
  undefined2 local_1b4;
  int local_1ae;
  int local_1ac;
  int local_1aa [50];
  undefined2 local_146;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined2 uStack_140;
  undefined2 uStack_13e;
  undefined2 uStack_13c;
  int local_136;
  int local_134;
  int local_132;
  undefined2 local_12c;
  undefined1 *puStack_12a;
  int local_128;
  int local_126;
  undefined2 *local_124;
  int local_122;
  undefined2 local_11c;
  undefined2 local_11a;
  int local_118;
  int local_116;
  int local_114;
  undefined2 local_ea;
  undefined2 local_e8;
  undefined2 local_e6;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined2 uStack_d8;
  undefined2 uStack_d2;
  undefined2 uStack_d0;
  int local_c8;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  int *local_aa;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 auStack_90 [2];
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  int iStack_88;
  int iStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined1 *puStack_66;
  int local_64;
  int iStack_62;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  int iStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  int *piStack_16;
  undefined2 local_14;
  undefined2 uStack_12;
  int *local_10;
  int *piStack_e;
  int *piStack_c;
  
  FUN_21f2_0ebc();
  local_128 = 0;
  local_1c2 = 0;
  local_1d8 = 0;
  local_e6 = *(undefined2 *)0xa170;
  uStack_e4 = *(undefined2 *)0xa172;
  uStack_e2 = *(undefined2 *)0xa174;
  uStack_e0 = *(undefined2 *)0xa176;
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xecad;
  FUN_21f2_3454();
  piStack_c = (undefined2 *)0x22b2;
  uVar14 = 0x1bb4;
  piStack_e = (int *)0xecbd;
  FUN_1def_07a4();
LAB_3ab8_413f:
  uVar2 = *(undefined2 *)0xa158;
  uVar5 = *(undefined2 *)0xa15a;
  uVar15 = *(undefined2 *)0xa166;
  *(undefined2 *)0xb76a = *(undefined2 *)0xa164;
  *(undefined2 *)0xb76c = uVar15;
  uVar15 = *(undefined2 *)0xa15a;
  *(undefined2 *)0xb784 = *(undefined2 *)0xa158;
  *(undefined2 *)0xb786 = uVar15;
  local_1ae = 0;
  local_aa = (int *)0x0;
  local_122 = 0;
  local_132 = 0;
  local_1f2 = uVar2;
  local_1f0 = uVar5;
  if (param_1 != 0) {
    local_c8 = 1;
    local_122 = 1;
    goto LAB_3ab8_4537;
  }
LAB_3ab8_41a7:
  do {
    piStack_e = (int *)0xed3e;
    piStack_c = (int *)uVar14;
    FUN_21f2_3454();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xed4e;
    FUN_21f2_2d26();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xed5e;
    FUN_21f2_2d26();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xed6f;
    FUN_21f2_2d26();
    *(undefined2 *)0xc1a = 1;
    *(undefined2 *)0xc20 = 1;
    if (*(int *)0xce6 != 0) {
      *(undefined2 *)0xc1a = 0;
    }
    piStack_c = &local_1f2;
    piStack_e = local_1aa;
    local_10 = (int *)0x0;
    uStack_12 = 0x22b2;
    uVar14 = 0x1bb4;
    local_14 = 0xeda3;
    local_c8 = FUN_1def_0904();
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) {
LAB_2bb4_4a18:
      FUN_32b2_718c();
      FUN_32b2_6eb1();
      FUN_32b2_6d14();
      FUN_32b2_6fd6();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_7182();
      FUN_32b2_6e99();
      FUN_32b2_710c();
      FUN_32b2_7154();
      FUN_32b2_6e99();
      FUN_32b2_6eb1();
      FUN_32b2_6d14();
      FUN_32b2_6eb1();
      piStack_c = (int *)0x32b2;
      piStack_e = (int *)0x5db;
      FUN_32b2_6cc6();
      piStack_c = (int *)0x32b2;
      piStack_e = (int *)0x5e0;
      FUN_32b2_7258();
      local_14 = 0x32b2;
      piStack_16 = (int *)0x5ea;
      FUN_32b2_6eb1();
      local_14 = 0x32b2;
      piStack_16 = (int *)0x5f2;
      FUN_32b2_6cc6();
      local_14 = 0x32b2;
      piStack_16 = (int *)0x5f7;
      FUN_32b2_7258();
      local_1c = (undefined1 *)0x32b2;
      FUN_32b2_6eb1();
      local_1c = puStack_66;
      puStack_20 = (undefined1 *)uStack_6a;
      uStack_22 = uStack_6c;
      uStack_24 = uStack_4a;
      uStack_26 = uStack_4c;
      uStack_28 = uStack_4e;
      uStack_2a = uStack_50;
      uStack_2e = 0x622;
      FUN_32b2_6d14();
      uStack_34 = 0x32b2;
      uStack_36 = 0x62c;
      FUN_32b2_6eb1();
      uStack_34 = 0x32b2;
      uStack_36 = 0x635;
      FUN_32b2_6d14();
      uStack_3c = 0x32b2;
      uStack_3e = 0x63f;
      FUN_32b2_6eb1();
      uStack_3c = 0;
      uStack_3e = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      uStack_40 = 0x646;
      func_0x0003fc09();
      iStack_88 = local_64;
      iStack_86 = iStack_62;
      uStack_a0 = uStack_8c;
      uStack_9e = uStack_8a;
      puVar9 = &uStack_2a;
      puVar7 = (undefined2 *)&stack0x001a;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar18 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = *puVar18;
      }
                    /* WARNING: Call to offcut address within same function */
      uStack_2e = 0x684;
      iVar8 = func_0x0003fdaf();
      uVar16 = 0;
      uVar17 = iVar8 == 0;
      if (!(bool)uVar17) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_6fc7();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if ((bool)uVar16 || (bool)uVar17) {
          FUN_32b2_6d14();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_7258();
          FUN_32b2_7191();
          if ((bool)uVar16 || (bool)uVar17) {
            uStack_be = *(undefined2 *)0x93c0;
            uStack_bc = *(undefined2 *)0x93c2;
            uStack_ba = *(undefined2 *)0x93c4;
            uStack_b8 = *(undefined2 *)0x93c6;
          }
        }
      }
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_7154();
      FUN_32b2_7191();
      if ((bool)uVar16) {
        iStack_38 = 0;
      }
      else {
        FUN_32b2_6d14();
        FUN_32b2_6fc7();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_7191();
        if (!(bool)uVar16) {
          uStack_be = *(undefined2 *)0x93c0;
          uStack_bc = *(undefined2 *)0x93c2;
          uStack_ba = *(undefined2 *)0x93c4;
          uStack_b8 = *(undefined2 *)0x93c6;
        }
        piStack_c = (int *)uStack_bc;
        piStack_e = (int *)uStack_be;
        local_10 = (int *)0x32b2;
        uStack_12 = 0x774;
        FUN_32b2_7592();
        piStack_c = (int *)0x77e;
        FUN_32b2_6d14();
        piStack_c = (int *)0x786;
        FUN_32b2_70dc();
        piStack_c = (int *)0x78e;
        FUN_32b2_6d14();
        piStack_c = (int *)0x797;
        FUN_32b2_710c();
        piStack_c = (int *)0x79c;
        FUN_32b2_7182();
        piStack_c = (int *)0x7a5;
        FUN_32b2_6e99();
        piStack_c = (int *)0x7ad;
        FUN_32b2_710c();
        piStack_c = (int *)0x7b5;
        FUN_32b2_7154();
        piStack_c = (int *)0x7be;
        FUN_32b2_6e99();
        piStack_c = (int *)0x7c7;
        FUN_32b2_6eb1();
        piStack_c = &local_64;
        piStack_e = (int *)0x32b2;
        local_10 = (int *)0x7d9;
        FUN_32b2_6cc6();
        piStack_e = (int *)0x32b2;
        local_10 = (int *)0x7de;
        FUN_32b2_7258();
        piStack_16 = (int *)0x32b2;
        local_18 = 0x7e8;
        FUN_32b2_6eb1();
        piStack_16 = (int *)0x32b2;
        local_18 = 0x7f0;
        FUN_32b2_6cc6();
        piStack_16 = (int *)0x32b2;
        local_18 = 0x7f5;
        FUN_32b2_7258();
        puStack_20 = (undefined1 *)0x7ff;
        FUN_32b2_6eb1();
        puStack_20 = (undefined1 *)uStack_68;
        uStack_22 = uStack_6a;
        uStack_24 = uStack_6c;
        uStack_26 = uStack_4a;
        uStack_28 = uStack_4c;
        uStack_2a = uStack_4e;
        uStack_2e = 0x32b2;
        uStack_30 = 0x820;
        FUN_32b2_6d14();
        uStack_36 = 0x32b2;
        iStack_38 = 0x82a;
        FUN_32b2_6eb1();
        uStack_36 = 0x32b2;
        iStack_38 = 0x833;
        FUN_32b2_6d14();
        uStack_3e = 0x32b2;
        uStack_40 = 0x83d;
        FUN_32b2_6eb1();
        uStack_3e = 0;
        uStack_40 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
        uStack_42 = 0x844;
        func_0x0003fc09();
        uVar16 = (undefined1 *)0xffc9 < &uStack_3e;
        uVar17 = &stack0x0000 == (undefined1 *)0x8;
        piStack_c = (int *)0x84f;
        FUN_32b2_6cc6();
        piStack_c = (int *)0x857;
        FUN_32b2_6cc6();
        piStack_c = (int *)0x85c;
        FUN_32b2_7191();
        if ((bool)uVar17) {
          local_64 = param_1;
          iStack_62 = param_2;
        }
        piStack_c = (int *)0x872;
        FUN_32b2_6cc6();
        piStack_c = (int *)0x87a;
        FUN_32b2_6cc6();
        piStack_c = (int *)0x87f;
        FUN_32b2_7191();
        if ((bool)uVar17) {
          uStack_8c = param_3;
          uStack_8a = param_4;
        }
        *in_stack_0000003a = local_64;
        in_stack_0000003a[1] = iStack_62;
        *in_stack_0000003c = uStack_8c;
        in_stack_0000003c[1] = uStack_8a;
        *in_stack_0000003e = local_64;
        in_stack_0000003e[1] = iStack_62;
        *in_stack_00000040 = uStack_8c;
        in_stack_00000040[1] = uStack_8a;
        iStack_38 = iStack_38 + 1;
        uVar17 = iStack_38 == 0;
        piStack_c = (int *)0x8d7;
        FUN_32b2_6d14();
        piStack_c = (int *)0x8e0;
        FUN_32b2_6d14();
        piStack_c = (int *)0x8e5;
        FUN_32b2_7191();
        if (!(bool)uVar16 && !(bool)uVar17) {
          piStack_c = (int *)uStack_ba;
          piStack_e = (int *)uStack_bc;
          local_10 = (int *)uStack_be;
          uStack_12 = 0x32b2;
          local_14 = 0x8ff;
          FUN_32b2_7592();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x909;
          FUN_32b2_6d14();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x911;
          FUN_32b2_7154();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x916;
          FUN_32b2_6fd6();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x91e;
          FUN_32b2_6d14();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x927;
          FUN_32b2_710c();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x92c;
          FUN_32b2_7182();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x935;
          FUN_32b2_6e99();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x93d;
          FUN_32b2_710c();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x945;
          FUN_32b2_7154();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x94e;
          FUN_32b2_6e99();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x957;
          FUN_32b2_6eb1();
          piStack_c = &uStack_8c;
          piStack_e = &local_64;
          local_10 = (int *)0x32b2;
          uStack_12 = 0x969;
          FUN_32b2_6cc6();
          local_10 = (int *)0x32b2;
          uStack_12 = 0x96e;
          FUN_32b2_7258();
          local_18 = 0x32b2;
          uStack_1a = 0x978;
          FUN_32b2_6eb1();
          local_18 = 0x32b2;
          uStack_1a = 0x980;
          FUN_32b2_6cc6();
          local_18 = 0x32b2;
          uStack_1a = 0x985;
          FUN_32b2_7258();
          puStack_20 = (undefined1 *)0x32b2;
          uStack_22 = 0x98f;
          FUN_32b2_6eb1();
          puStack_20 = puStack_66;
          uStack_22 = uStack_68;
          uStack_24 = uStack_6a;
          uStack_26 = uStack_6c;
          uStack_28 = uStack_4a;
          uStack_2a = uStack_4c;
          uStack_2e = uStack_50;
          uStack_30 = 0x32b2;
          uStack_32 = 0x9b0;
          FUN_32b2_6d14();
          iStack_38 = 0x32b2;
          uStack_3a = 0x9ba;
          FUN_32b2_6eb1();
          iStack_38 = 0x32b2;
          uStack_3a = 0x9c3;
          FUN_32b2_6d14();
          uStack_40 = 0x32b2;
          uStack_42 = 0x9cd;
          FUN_32b2_6eb1();
          uStack_40 = 0;
          uStack_42 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
          uStack_44 = 0x9d4;
          func_0x0003fc09();
          uVar16 = &stack0x0000 == (undefined1 *)0xa;
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x9df;
          FUN_32b2_6cc6();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x9e7;
          FUN_32b2_6cc6();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0x9ec;
          FUN_32b2_7191();
          if ((bool)uVar16) {
            local_64 = param_1;
            iStack_62 = param_2;
          }
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0xa02;
          FUN_32b2_6cc6();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0xa0a;
          FUN_32b2_6cc6();
          piStack_c = (int *)0x32b2;
          piStack_e = (int *)0xa0f;
          FUN_32b2_7191();
          if ((bool)uVar16) {
            uStack_8c = param_3;
            uStack_8a = param_4;
          }
          *in_stack_0000003e = local_64;
          in_stack_0000003e[1] = iStack_62;
          *in_stack_00000040 = uStack_8c;
          in_stack_00000040[1] = uStack_8a;
          iStack_38 = iStack_38 + 1;
        }
      }
      return iStack_38;
    }
    if (*(int *)0xc18 != 0) {
      local_aa = (int *)0x0;
      func_0x000297e6();
      func_0x00029d78();
      local_10 = (int *)0x22b2;
      uStack_12 = 0xeddd;
      func_0x000299d1();
      local_10 = (int *)0x22b2;
      uStack_12 = 0xede6;
      func_0x000297e6();
      local_10 = (int *)0x22b2;
      uStack_12 = 0xedeb;
      func_0x00029d78();
      local_18 = 0x22b2;
      uStack_1a = 0xedf5;
      func_0x000299d1();
      local_18 = 0x22b2;
      uVar14 = 0x3bf;
      uStack_1a = 0xedfa;
      func_0x0000507a();
      goto LAB_3ab8_41a7;
    }
    if ((local_c8 == 0) && (local_124 != (undefined2 *)0x0)) {
      piStack_c = local_124;
      piStack_e = (int *)0x1bb4;
      uVar14 = 0x11f2;
      local_10 = (int *)0xee1f;
      iVar8 = func_0x00015409();
      if (iVar8 != 0) {
        local_1ae = 1;
        goto LAB_3ab8_42ac;
      }
    }
  } while ((local_c8 < 1) || (3 < local_c8));
  local_1ae = 0;
LAB_3ab8_42ac:
  if (local_c8 == 1) {
    uVar14 = 0x885;
    func_0x0000c3ca();
    piStack_c = (undefined2 *)0x2;
    piStack_e = (int *)0x885;
    local_10 = (int *)0xee48;
    local_134 = FUN_3ab8_0000();
    if (local_134 == -1) goto LAB_3ab8_413f;
    if ((local_134 == 0) || (local_134 == 1)) {
      local_1ae = local_134;
      local_122 = local_134;
    }
  }
  if (local_c8 == 2) {
    pcVar6 = (code *)swi(0x3f);
    local_134 = (*pcVar6)();
    if (local_134 == -1) goto LAB_3ab8_413f;
    local_132 = 0;
    if (local_134 == 1) {
      local_132 = 1;
    }
  }
  if (local_c8 == 3) {
    uVar14 = 0x885;
    func_0x0000c3ca();
    piStack_c = (undefined2 *)0x885;
    piStack_e = (int *)0xeed5;
    FUN_3ab8_018f();
    local_132 = 0;
    if ((local_118 == -1) && (local_116 == -1)) goto LAB_3ab8_413f;
    if ((-1 < local_116) && ((0 < local_116 || (local_118 != 0)))) {
      local_132 = 2;
    }
  }
LAB_3ab8_4384:
  piStack_c = (undefined2 *)0xef0c;
  func_0x0000daa6();
  uVar14 = 0x885;
  func_0x0000abfa();
  do {
    do {
      while( true ) {
        if ((local_1ae != 0) || (local_122 != 0)) goto LAB_3ab8_4511;
        if (local_aa == (int *)0x0) {
          piStack_c = (int *)0x55b5;
          piStack_e = local_1aa;
          uVar15 = 0x22b2;
          uStack_12 = 0xef40;
          local_10 = (int *)uVar14;
          FUN_21f2_3454();
        }
        else {
          piStack_c = (int *)local_e8;
          piStack_e = (int *)local_ea;
          local_10 = (int *)0x2f0;
          uStack_12 = 0x2dc;
          local_14 = 0x55c5;
          piStack_16 = local_1aa;
          uVar15 = 0x11f2;
          uStack_1a = 0xef6b;
          local_18 = uVar14;
          FUN_10ad_19f9();
        }
        *(undefined2 *)0xc2c = 1;
        *(undefined2 *)0xc1a = 1;
        *(undefined2 *)0xc20 = 1;
        if (*(int *)0xce6 != 0) {
          *(undefined2 *)0xc1a = 0;
        }
        piStack_c = &local_1f2;
        piStack_e = local_1aa;
        local_10 = local_aa;
        uVar14 = 0x1bb4;
        local_14 = 0xefa4;
        uStack_12 = uVar15;
        local_64 = FUN_1def_0904();
        *(undefined2 *)0xc2c = 0;
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) goto LAB_2bb4_4a18;
        if (*(int *)0xc18 == 0) break;
        local_aa = (int *)0x0;
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xefe0;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xefe9;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xefee;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xeff8;
        func_0x000299d1();
        local_18 = 0x22b2;
        uVar14 = 0x3bf;
        uStack_1a = 0xeffd;
        func_0x0000507a();
      }
      if (local_64 == -1) {
        if (param_1 == 0) {
          piStack_c = (int *)0xf017;
          func_0x0000daa6();
          local_134 = 1;
          uVar14 = 0x885;
          do {
            if ((int)local_aa < local_134) goto LAB_3ab8_44c6;
            local_1ea = *(undefined2 *)0x148;
            local_1e8 = *(undefined2 *)0x14a;
            piStack_e = (int *)0xf036;
            piStack_c = (int *)uVar14;
            func_0x00018779();
            local_134 = local_134 + 1;
            uVar14 = 0x11f2;
          } while( true );
        }
        goto LAB_2bb4_4a18;
      }
      if (local_64 == 0x14) {
        if (param_1 == 0) goto LAB_3ab8_413f;
        goto LAB_2bb4_4a18;
      }
    } while (local_124 == (undefined2 *)0x0);
    piStack_c = local_124;
    piStack_e = (int *)0x1bb4;
    uVar14 = 0x11f2;
    local_10 = (int *)0xf087;
    iVar8 = func_0x00015409();
  } while (iVar8 == 0);
LAB_3ab8_4511:
  local_1ae = 0;
LAB_3ab8_4537:
  do {
    func_0x000297e6();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029983();
    func_0x000297e6();
    uVar14 = 0x22b2;
    func_0x00029983();
    local_1ce = *(undefined2 *)0xa190;
    local_1cc = *(undefined2 *)0xa192;
    if (local_132 == 2) {
      if ((-1 < local_116) && ((0 < local_116 || (local_118 != 0)))) {
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xf14c;
        puVar18 = (undefined2 *)func_0x0000013f();
        puVar7 = (undefined2 *)puVar18;
        ppuVar10 = &local_1c;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          ppuVar4 = ppuVar10;
          ppuVar10 = ppuVar10 + 1;
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          *ppuVar4 = (undefined1 *)*puVar3;
        }
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xf175;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xf17d;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xf182;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xf18c;
        func_0x000299d1();
        local_18 = 0x22b2;
        uStack_1a = 0xf194;
        func_0x000297e6();
        local_18 = 0x22b2;
        uStack_1a = 0xf199;
        func_0x00029d78();
        puStack_20 = (undefined1 *)0x22b2;
        uStack_22 = 0xf1a3;
        func_0x000299d1();
        puStack_20 = (undefined1 *)0x22b2;
        uStack_22 = 0xf1ab;
        func_0x000297e6();
        puStack_20 = (undefined1 *)0x22b2;
        uStack_22 = 0xf1b0;
        func_0x00029d78();
        uStack_28 = 0x22b2;
        uStack_2a = 0xf1ba;
        func_0x000299d1();
        uStack_28 = 0x22b2;
        uVar14 = 0x1bb4;
        uStack_2a = 0xf1bf;
        iVar8 = FUN_1def_043a();
        if (iVar8 != 0) goto LAB_3ab8_4666;
        local_132 = 0;
      }
      uVar15 = *(undefined2 *)0xa166;
      *(undefined2 *)0xb76a = *(undefined2 *)0xa164;
      *(undefined2 *)0xb76c = uVar15;
      uVar15 = *(undefined2 *)0xa15a;
      *(undefined2 *)0xb784 = *(undefined2 *)0xa158;
      *(undefined2 *)0xb786 = uVar15;
    }
LAB_3ab8_4666:
    *(undefined2 *)0xb30c = local_1b6;
    *(undefined2 *)0xb30e = local_1b4;
    *(undefined2 *)0xb37e = local_1d2;
    *(undefined2 *)0xb380 = local_1d0;
    *(undefined2 *)0xc24 = 1;
    piStack_c = (int *)0x0;
    piStack_e = (int *)0x0;
    uStack_12 = 0xf21c;
    local_10 = (int *)uVar14;
    func_0x0000a76b();
    piStack_c = (int *)0x885;
    piStack_e = (int *)0xf229;
    FUN_1000_0599();
    piStack_c = (int *)0xf24d;
    func_0x00012276();
    piStack_c = (int *)0xf263;
    func_0x00012276();
    piStack_c = (int *)0x2e6;
    piStack_e = (int *)0x55f7;
    local_10 = (int *)0x11f2;
    uStack_12 = 0xf27a;
    func_0x00012276();
    func_0x00010526();
    piStack_c = (int *)0x1;
    piStack_e = (int *)0x7;
    local_10 = (int *)0xd;
    uStack_12 = 0x24e;
    local_14 = 3;
    piStack_16 = (int *)0x244;
    local_18 = 0xdef;
    uVar14 = 0xdef;
    uStack_1a = 0xf2a3;
    func_0x0000f350();
    if (local_122 == 0) {
      if (local_128 != 0) {
        piStack_c = (int *)*(undefined2 *)0xa17e;
        piStack_e = (int *)*(undefined2 *)0xa17c;
        local_10 = (int *)*(undefined2 *)0xa17a;
        uStack_12 = *(undefined2 *)0xa178;
        local_14 = *(undefined2 *)0xa17e;
        piStack_16 = (int *)*(int *)0xa17c;
        local_18 = *(undefined2 *)0xa17a;
        uStack_1a = *(undefined2 *)0xa178;
        local_1c = (undefined1 *)*(undefined2 *)0xa20a;
        puStack_20 = (undefined1 *)*(undefined2 *)0xa206;
        uStack_22 = *(undefined2 *)0xa204;
        uStack_24 = 3;
        uStack_26 = 7;
        uStack_28 = *(undefined2 *)0xa212;
        uStack_2a = *(undefined2 *)0xa210;
        uStack_2e = *(undefined2 *)0xa20c;
        uStack_30 = *(undefined2 *)0xa21a;
        uStack_32 = *(undefined2 *)0xa218;
        uStack_34 = *(undefined2 *)0xa216;
        uStack_36 = *(undefined2 *)0xa214;
        iStack_38 = *(undefined2 *)0xa222;
        uStack_3a = *(undefined2 *)0xa220;
        uStack_3c = *(undefined2 *)0xa21e;
        uStack_3e = *(undefined2 *)0xa21c;
        goto LAB_3ab8_48cc;
      }
    }
    else {
      if ((*(int *)0xff0 < 1) || (3 < *(int *)0xff0)) {
        local_20e = 0;
      }
      else {
        local_20e = -1;
      }
      if ((*(int *)0xff0 < 5) || (7 < *(int *)0xff0)) {
        local_210 = 0;
      }
      else {
        local_210 = 1;
      }
      local_1c2 = local_20e + local_210;
      if ((*(int *)0xff0 < 3) || (5 < *(int *)0xff0)) {
        local_212 = 0;
      }
      else {
        local_212 = -1;
      }
      if ((*(int *)0xff0 < 7) && (*(int *)0xff0 != 1)) {
        local_214 = 0;
      }
      else {
        local_214 = 1;
      }
      piStack_c = (int *)*(undefined2 *)0xa17e;
      piStack_e = (int *)*(undefined2 *)0xa17c;
      local_10 = (int *)*(undefined2 *)0xa17a;
      uStack_12 = *(undefined2 *)0xa178;
      local_14 = *(undefined2 *)0xa17e;
      piStack_16 = (int *)*(int *)0xa17c;
      local_18 = *(undefined2 *)0xa17a;
      uStack_1a = *(undefined2 *)0xa178;
      local_1c = (undefined1 *)*(undefined2 *)0xa20a;
      puStack_20 = (undefined1 *)*(undefined2 *)0xa206;
      uStack_22 = *(undefined2 *)0xa204;
      uStack_24 = 3;
      uStack_26 = 2;
      uStack_28 = *(undefined2 *)0xa212;
      uStack_2a = *(undefined2 *)0xa210;
      uStack_2e = *(undefined2 *)0xa20c;
      local_1d8 = local_212 + local_214;
      uStack_30 = 0xdef;
      uStack_32 = 0xf3a4;
      FUN_28b3_0d8b();
      iStack_38 = 0x22b2;
      uStack_3a = 0xf3ae;
      func_0x000299d1();
      iStack_38 = 0x22b2;
      uStack_3a = 0xf3c7;
      FUN_28b3_0d8b();
      uStack_40 = 0x22b2;
      uVar14 = 0x22b2;
      uStack_42 = 0xf3d1;
      func_0x000299d1();
LAB_3ab8_48cc:
      uStack_42 = 0xf451;
      uStack_40 = uVar14;
      func_0x0000fd9f();
    }
    uVar14 = 0x885;
    func_0x0000a799();
    while( true ) {
      *(undefined2 *)0xc18 = 0;
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xc1a = 1;
      *(undefined2 *)0xa4a = 1;
      *(undefined2 *)0xa48 = 4;
      if (*(int *)0xce6 != 0) {
        *(undefined2 *)0xc1a = 0;
      }
      piStack_c = &local_1f2;
      piStack_e = &local_136;
      local_10 = &local_126;
      local_14 = 0xf49c;
      uStack_12 = uVar14;
      local_1ac = func_0x00006608();
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xc1a = 0;
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(int *)0x158 != 0) {
        piStack_c = (undefined2 *)0xf4bd;
        func_0x0000daa6();
        func_0x0000abfa();
        goto LAB_2bb4_4a18;
      }
      if (local_1ac == -1) break;
      if (*(int *)0xc18 != 0) {
        local_1ce = *(undefined2 *)0xa190;
        local_1cc = *(undefined2 *)0xa192;
        FUN_1885_2ec3();
        local_aa = (int *)0x0;
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xf555;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xf55e;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xf563;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xf56d;
        func_0x000299d1();
        local_18 = 0x22b2;
        uStack_1a = 0xf572;
        func_0x0000507a();
        goto LAB_3ab8_4537;
      }
      if (local_1ac == 99) {
        local_1ce = *(undefined2 *)0xa190;
        local_1cc = *(undefined2 *)0xa192;
        goto LAB_3ab8_4537;
      }
      if ((local_124 != (undefined2 *)0x0) && (local_136 <= *(int *)0xa5e)) {
        local_124 = (undefined2 *)0x0;
        if (local_126 < 0x11d) goto LAB_3ab8_4537;
        local_1ac = (local_126 + -0x11c) / 0x48 + 0x31;
      }
      if (local_1ac == 0x31) {
        FUN_1885_2ec3();
        func_0x0000c3ca();
        piStack_c = (undefined2 *)0x2;
        piStack_e = (int *)0x885;
        local_10 = (int *)0xf5e6;
        local_134 = FUN_3ab8_0000();
        if (local_134 == 0) {
          if (local_122 != 0) {
            local_122 = 0;
            local_c8 = 0;
            local_aa = (int *)0x0;
            goto LAB_3ab8_4384;
          }
          local_122 = 0;
          local_c8 = 0;
        }
        if (local_134 == 1) {
          local_122 = 1;
          local_c8 = 1;
        }
        goto LAB_3ab8_4537;
      }
      if (local_1ac == 0x32) {
        FUN_1885_2ec3();
        local_132 = 0;
        pcVar6 = (code *)swi(0x3f);
        local_134 = (*pcVar6)();
        if (local_134 == 0) {
          uVar14 = *(undefined2 *)0xa166;
          *(undefined2 *)0xb76a = *(undefined2 *)0xa164;
          *(undefined2 *)0xb76c = uVar14;
          uVar14 = *(undefined2 *)0xa15a;
          *(undefined2 *)0xb784 = *(undefined2 *)0xa158;
          *(undefined2 *)0xb786 = uVar14;
          local_132 = 0;
        }
        if (local_134 == 1) {
          local_132 = 1;
        }
        goto LAB_3ab8_4537;
      }
      if (local_1ac == 0x33) {
        FUN_1885_2ec3();
        func_0x0000c3ca();
        local_132 = 0;
        piStack_c = (undefined2 *)0x885;
        piStack_e = (int *)0xf6a4;
        FUN_3ab8_018f();
        if ((-1 < local_116) && ((0 < local_116 || (local_118 != 0)))) {
          local_132 = 2;
        }
        goto LAB_3ab8_4537;
      }
      if ((local_1ac == 0x34) || (local_1ac == 0x35)) {
        FUN_1885_2ec3();
        if (local_122 == 0) {
          local_128 = local_128 + 1;
          if (1 < local_128) {
            local_128 = 0;
          }
        }
        else if ((*(char *)0x15b == '\x02') || ((local_1ac == 0x35 && (*(char *)0x15b == '\0')))) {
          piVar1 = (int *)0xff0;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            *(undefined2 *)0xff0 = 8;
          }
        }
        else {
          *(int *)0xff0 = *(int *)0xff0 + 1;
          if (8 < *(int *)0xff0) {
            *(undefined2 *)0xff0 = 0;
          }
        }
        goto LAB_3ab8_4537;
      }
      if (*(char *)0x15a != '\0') goto LAB_3ab8_4537;
      local_114 = 0;
      uVar16 = local_124 == (undefined2 *)0x0;
      if ((!(bool)uVar16) && (uVar16 = false, local_1ac == 100)) {
        local_1ce = *(undefined2 *)0xa190;
        local_1cc = *(undefined2 *)0xa192;
        piStack_c = local_124;
        piStack_e = (int *)0x3bf;
        local_10 = (int *)0xf76e;
        iVar8 = func_0x00015409();
        if (iVar8 == 0) goto LAB_3ab8_4537;
        local_114 = 1;
        uVar16 = false;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar16) goto LAB_3ab8_4c33;
      func_0x000297e6();
      func_0x000297e6();
      uVar14 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar16) {
LAB_3ab8_4c33:
        if (local_132 == 1) {
          func_0x000297e6();
          func_0x0002996b();
          FUN_28b3_0ee9();
          if (*(int *)0xcb6 != 0) {
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x000299b9();
          local_10 = (int *)0x22b2;
          uStack_12 = 0xf823;
          func_0x000299d1();
          local_10 = (int *)0x22b2;
          uStack_12 = 0xf828;
          func_0x0002a11e();
          func_0x00029834();
          func_0x00029983();
          func_0x00029834();
          local_10 = (int *)0x22b2;
          uStack_12 = 0xf84e;
          func_0x000299d1();
          local_10 = (int *)0x22b2;
          uStack_12 = 0xf853;
          func_0x0002a10c();
          func_0x00029834();
          func_0x00029983();
        }
        if (local_132 == 0) {
          if (*(int *)0xcb6 == 0) {
            uVar14 = *(undefined2 *)0xa166;
            *(undefined2 *)0xb76a = *(undefined2 *)0xa164;
            *(undefined2 *)0xb76c = uVar14;
            uVar14 = *(undefined2 *)0xa158;
            uVar15 = *(undefined2 *)0xa15a;
          }
          else {
            uVar14 = *(undefined2 *)0xcbc;
            *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
            *(undefined2 *)0xb76c = uVar14;
            uVar14 = *(undefined2 *)0xcbe;
            uVar15 = *(undefined2 *)0xcc0;
          }
          *(undefined2 *)0xb784 = uVar14;
          *(undefined2 *)0xb786 = uVar15;
        }
        if (local_122 == 0) {
          if ((*(char *)0x4a == '\0') || (local_124 == (undefined2 *)0x2)) {
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (int *)0x22b2;
            uStack_12 = 0xfd0a;
            func_0x000299d1();
            local_10 = (int *)0x22b2;
            uStack_12 = 0xfd13;
            func_0x000297e6();
            local_10 = (int *)0x22b2;
            uStack_12 = 0xfd18;
            func_0x00029d78();
            local_18 = 0x22b2;
            uStack_1a = 0xfd22;
            func_0x000299d1();
            local_18 = 1;
            uStack_1a = 0x22b2;
            local_1c = (undefined1 *)0xfd2b;
            puVar7 = (undefined2 *)FUN_1def_05d1();
            uStack_1c6 = *puVar7;
            uStack_1c4 = puVar7[1];
            FUN_28b3_0d8b();
            func_0x00029b6d();
            func_0x00029af6();
            func_0x0002996b();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (int *)0x22b2;
            uStack_12 = 0xfd7e;
            func_0x000299d1();
            local_10 = (int *)0x22b2;
            uStack_12 = 0xfd87;
            func_0x000297e6();
            local_10 = (int *)0x22b2;
            uStack_12 = 0xfd8c;
            func_0x00029d78();
            local_18 = 0x22b2;
            uStack_1a = 0xfd96;
            func_0x000299d1();
            local_18 = 1;
            uStack_1a = 0x22b2;
            local_1c = (undefined1 *)&SUB_0000_fd9f;
            func_0x0001e558();
            func_0x000297e6();
            func_0x0002996b();
            FUN_28b3_0d8b();
            func_0x00029c9d();
            func_0x00029af6();
            func_0x0002996b();
            func_0x00029983();
            FUN_28b3_0d8b();
            func_0x0002996b();
            func_0x00029b6d();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
          }
          else {
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (int *)0x22b2;
            uStack_12 = 64000;
            func_0x000299d1();
            local_10 = (int *)0x22b2;
            uStack_12 = 0xfa09;
            func_0x000297e6();
            local_10 = (int *)0x22b2;
            uStack_12 = 0xfa0e;
            func_0x00029d78();
            local_18 = 0x22b2;
            uStack_1a = 0xfa18;
            func_0x000299d1();
            local_18 = 1;
            uStack_1a = 0x22b2;
            local_1c = (undefined1 *)0xfa21;
            puVar7 = (undefined2 *)FUN_1def_05d1();
            uStack_1c6 = *puVar7;
            uStack_1c4 = puVar7[1];
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (int *)0x22b2;
            uStack_12 = 0xfa4b;
            func_0x000299d1();
            local_10 = (int *)0x22b2;
            uStack_12 = 0xfa54;
            func_0x000297e6();
            local_10 = (int *)0x22b2;
            uStack_12 = 0xfa59;
            func_0x00029d78();
            local_18 = 0x22b2;
            uStack_1a = 0xfa63;
            func_0x000299d1();
            local_18 = 1;
            uStack_1a = 0x22b2;
            local_1c = (undefined1 *)0xfa6c;
            puVar7 = (undefined2 *)func_0x0001e558();
            uStack_1dc = *puVar7;
            uStack_1da = puVar7[1];
            func_0x000297e6();
            func_0x00029b6d();
            func_0x0002996b();
            piStack_c = (int *)0xfaa3;
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            piStack_c = (int *)0xfabc;
            func_0x00029b6d();
            func_0x00029983();
            func_0x0000c4c4();
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029b6d();
            piStack_c = (undefined2 *)0xfafb;
            func_0x00029b6d();
            func_0x00029983();
            uVar16 = 0;
            uVar17 = local_128 == 0;
            if (!(bool)uVar17) {
              func_0x000297e6();
              piStack_c = (undefined2 *)0xfb1b;
              func_0x00029b6d();
              func_0x00029983();
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar16 || (bool)uVar17) {
              func_0x000297e6();
              func_0x00029b85();
              func_0x00029d78();
              func_0x00029bfc();
            }
            else {
              func_0x000297e6();
              func_0x00029b85();
              func_0x00029d78();
              func_0x00029c74();
            }
            FUN_28b3_0f51();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000298b4();
            FUN_28b3_1177();
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar16 || (bool)uVar17) {
              func_0x000297e6();
              func_0x00029b85();
              func_0x00029d78();
              func_0x00029bfc();
            }
            else {
              func_0x000297e6();
              func_0x00029b85();
              func_0x00029d78();
              func_0x00029c74();
            }
            FUN_28b3_0f51();
            FUN_28b3_0d8b();
            func_0x00029b6d();
            func_0x00029af6();
            func_0x0002996b();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000298b4();
            FUN_28b3_1177();
            func_0x00029b6d();
            func_0x0002996b();
            FUN_28b3_0d8b();
            func_0x00029c9d();
            func_0x00029af6();
            func_0x0002996b();
            func_0x00029983();
            FUN_28b3_0d8b();
            func_0x0002996b();
            func_0x00029b6d();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
          }
        }
        else {
          *(undefined2 *)0xb30c = local_1f2;
          *(undefined2 *)0xb30e = local_1f0;
          *(undefined2 *)0xb37e = uVar2;
          *(undefined2 *)0xb380 = uVar5;
          func_0x000297e6();
          func_0x00029b6d();
          func_0x0002996b();
          func_0x00029b9d();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b85();
          func_0x0002996b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c9d();
          func_0x00029c2c();
          func_0x0002996b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c9d();
          func_0x00029c2c();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
        }
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xfe49;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xfe52;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xfe57;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xfe61;
        func_0x000299d1();
        local_18 = 0;
        uStack_1a = 0x22b2;
        local_1c = (undefined1 *)0xfe69;
        puVar7 = (undefined2 *)FUN_1def_05d1();
        uStack_13e = *puVar7;
        uStack_13c = puVar7[1];
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xfe93;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xfe9c;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xfea1;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xfeab;
        func_0x000299d1();
        local_18 = 0;
        uStack_1a = 0x22b2;
        local_1c = (undefined1 *)0xfeb3;
        puVar7 = (undefined2 *)func_0x0001e558();
        uStack_1ba = *puVar7;
        uStack_1b8 = puVar7[1];
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xfed8;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xfee1;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xfee6;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xfef0;
        func_0x000299d1();
        local_18 = 0;
        uStack_1a = 0x22b2;
        local_1c = (undefined1 *)0xfef8;
        puVar7 = (undefined2 *)FUN_1def_05d1();
        uStack_1d6 = *puVar7;
        uStack_1d4 = puVar7[1];
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xff1d;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xff26;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xff2b;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xff35;
        func_0x000299d1();
        local_18 = 0;
        uStack_1a = 0x22b2;
        local_1c = (undefined1 *)0xff3d;
        puVar7 = (undefined2 *)func_0x0001e558();
        uStack_1e4 = *puVar7;
        uStack_1e2 = puVar7[1];
        uStack_1ee = local_12c;
        uStack_1ec = puStack_12a;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xff72;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xff7b;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xff80;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xff8a;
        func_0x000299d1();
        local_18 = 0;
        uStack_1a = 0x22b2;
        local_1c = (undefined1 *)0xff92;
        puVar7 = (undefined2 *)FUN_1def_05d1();
        local_12c = *puVar7;
        puStack_12a = (undefined1 *)puVar7[1];
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xffb7;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xffc0;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0xffc5;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xffcf;
        func_0x000299d1();
        local_18 = 0;
        uStack_1a = 0x22b2;
        local_1c = (undefined1 *)0xffd7;
        puVar7 = (undefined2 *)func_0x0001e558();
        local_146 = *puVar7;
        uStack_144 = puVar7[1];
        uStack_1ee = uStack_142;
        uStack_1ec = uStack_140;
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x21;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x2a;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x2f;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0x39;
        func_0x000299d1();
        local_18 = 0;
        uStack_1a = 0x22b2;
        local_1c = (undefined1 *)0x41;
        puVar7 = (undefined2 *)FUN_1def_05d1();
        uStack_142 = *puVar7;
        uStack_140 = puVar7[1];
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x6b;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x74;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x79;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0x83;
        func_0x000299d1();
        local_18 = 0;
        uStack_1a = 0x22b2;
        local_1c = (undefined1 *)0x8b;
        puVar7 = (undefined2 *)func_0x0001e558();
        uStack_1be = *puVar7;
        uStack_1bc = puVar7[1];
        if (local_114 == 0) {
          FUN_1885_2ec3();
          piStack_c = (int *)0x36f;
          func_0x000297e6();
          piStack_c = (int *)0x374;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          local_14 = 0x37e;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          local_14 = 0x387;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          local_14 = 0x38c;
          func_0x00029d78();
          uStack_1a = 0x22b2;
          local_1c = (undefined1 *)0x396;
          func_0x000299d1();
          uStack_1a = 0x22b2;
          local_1c = (undefined1 *)0x39f;
          func_0x000297e6();
          uStack_1a = 0x22b2;
          local_1c = (undefined1 *)0x3a4;
          func_0x00029d78();
          uStack_22 = 0x22b2;
          uStack_24 = 0x3ae;
          func_0x000299d1();
          uStack_22 = 0x22b2;
          uStack_24 = 0x3b7;
          func_0x000297e6();
          uStack_22 = 0x22b2;
          uStack_24 = 0x3bc;
          func_0x00029d78();
          uStack_2a = 0x22b2;
          func_0x000299d1();
          uStack_2a = 0x22b2;
          func_0x0001e18f();
          piStack_c = (int *)0x3db;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          local_14 = 0x3e5;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          local_14 = 0x3ee;
          func_0x000297e6();
          uStack_1a = 0x22b2;
          local_1c = (undefined1 *)0x3f8;
          func_0x000299d1();
          uStack_1a = 0x22b2;
          local_1c = (undefined1 *)0x401;
          func_0x000297e6();
          uStack_1a = 0x22b2;
          local_1c = (undefined1 *)0x406;
          func_0x00029d78();
          uStack_22 = 0x22b2;
          uStack_24 = 0x410;
          func_0x000299d1();
          uStack_22 = 0x22b2;
          uStack_24 = 0x419;
          func_0x000297e6();
          uStack_22 = 0x22b2;
          uStack_24 = 0x41e;
          func_0x00029d78();
          uStack_2a = 0x22b2;
          func_0x000299d1();
          uStack_2a = 0x22b2;
          func_0x0001e18f();
          piStack_c = (int *)0x43d;
          func_0x000297e6();
          piStack_c = (int *)0x442;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          local_14 = 0x44c;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          local_14 = 0x455;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          local_14 = 0x45a;
          func_0x00029d78();
          uStack_1a = 0x22b2;
          local_1c = (undefined1 *)0x464;
          func_0x000299d1();
          uStack_1a = 0x22b2;
          local_1c = (undefined1 *)0x46d;
          func_0x000297e6();
          uStack_22 = 0x22b2;
          uStack_24 = 0x477;
          func_0x000299d1();
          uStack_22 = 0x22b2;
          uStack_24 = 0x480;
          func_0x000297e6();
          uStack_2a = 0x22b2;
          func_0x000299d1();
          uStack_2a = 0x22b2;
          func_0x0001e18f();
          piStack_c = (int *)0x49f;
          func_0x000297e6();
          piStack_c = (int *)0x4a4;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          local_14 = 0x4ae;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          local_14 = 0x4b7;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          local_14 = 0x4bc;
          func_0x00029d78();
          uStack_1a = 0x22b2;
          local_1c = (undefined1 *)0x4c6;
          func_0x000299d1();
          uStack_1a = 0x22b2;
          local_1c = (undefined1 *)0x4cf;
          func_0x000297e6();
          uStack_1a = 0x22b2;
          local_1c = (undefined1 *)0x4d4;
          func_0x00029d78();
          uStack_22 = 0x22b2;
          uStack_24 = 0x4de;
          func_0x000299d1();
          uStack_22 = 0x22b2;
          uStack_24 = 0x4e7;
          func_0x000297e6();
          uStack_22 = 0x22b2;
          uStack_24 = 0x4ec;
          func_0x00029d78();
          uStack_2a = 0x22b2;
          func_0x000299d1();
          uStack_2a = 0x22b2;
          func_0x0001e18f();
          piStack_c = (int *)uStack_13c;
          piStack_e = (int *)uStack_13e;
          local_10 = (int *)uStack_1e2;
          uStack_12 = uStack_1e4;
          local_14 = uStack_1d4;
          piStack_16 = (int *)uStack_1d6;
          local_18 = uStack_144;
          uStack_1a = local_146;
          local_1c = puStack_12a;
          puStack_20 = (undefined1 *)0x1bb4;
          uStack_22 = 0x532;
          FUN_4375_7ea5();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uStack_7f = *(undefined1 *)0xa6a;
        uStack_80 = *(undefined1 *)0xa6c;
        uStack_7e = *(undefined1 *)0xb310;
        puVar7 = &uStack_a8;
        puVar9 = auStack_90;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar18 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar3 = *puVar18;
        }
        puVar7 = &uStack_c0;
        puVar9 = auStack_90;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar18 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar3 = *puVar18;
        }
        puVar7 = &uStack_de;
        puVar9 = auStack_90;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar18 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar3 = *puVar18;
        }
        uStack_8c = local_146;
        uStack_8a = uStack_144;
        iStack_88 = uStack_13e;
        iStack_86 = uStack_13c;
        uStack_84 = uStack_1ba;
        uStack_82 = uStack_1b8;
        uStack_a8 = uStack_13e;
        uStack_a6 = uStack_13c;
        uStack_a4 = uStack_1ba;
        uStack_a2 = uStack_1b8;
        uStack_a0 = uStack_142;
        uStack_9e = uStack_140;
        uStack_c0 = uStack_142;
        uStack_be = uStack_140;
        uStack_b8 = uStack_1d6;
        uStack_b6 = uStack_1d4;
        uStack_b4 = uStack_1e4;
        uStack_b2 = uStack_1e2;
        uStack_de = uStack_1d6;
        uStack_dc = uStack_1d4;
        uStack_da = uStack_1e4;
        uStack_d8 = uStack_1e2;
        uStack_bc = uStack_1be;
        uStack_ba = uStack_1bc;
        uStack_9c = uStack_1be;
        uStack_9a = uStack_1bc;
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        uStack_d2 = local_146;
        uStack_d0 = uStack_144;
        FUN_1885_2ec3();
        piStack_c = (int *)0x1e9;
        func_0x0000daa6();
        local_aa = (int *)0x0;
        ppuVar10 = &local_1c;
        ppuVar11 = &local_1c;
        ppuVar12 = &local_1c;
        ppuVar13 = &local_1c;
        puVar7 = auStack_90;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = ppuVar10;
          ppuVar10 = ppuVar10 + 1;
          puVar18 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar3 = *puVar18;
        }
        puStack_20 = (undefined1 *)0x205;
        iVar8 = FUN_17a6_0cba();
        if (0 < iVar8) {
          local_aa = (int *)0x1;
        }
        puVar7 = &uStack_a8;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = ppuVar11;
          ppuVar11 = ppuVar11 + 1;
          puVar18 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar3 = *puVar18;
        }
        puStack_20 = (undefined1 *)0x227;
        iVar8 = FUN_17a6_0cba();
        if (0 < iVar8) {
          local_aa = (int *)((int)local_aa + 1);
        }
        puVar7 = &uStack_c0;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = ppuVar12;
          ppuVar12 = ppuVar12 + 1;
          puVar18 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar3 = *puVar18;
        }
        puStack_20 = (undefined1 *)0x247;
        iVar8 = FUN_17a6_0cba();
        if (0 < iVar8) {
          local_aa = (int *)((int)local_aa + 1);
        }
        puVar7 = &uStack_de;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = ppuVar13;
          ppuVar13 = ppuVar13 + 1;
          puVar18 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar3 = *puVar18;
        }
        puStack_20 = (undefined1 *)0x267;
        iVar8 = FUN_17a6_0cba();
        if (0 < iVar8) {
          local_aa = (int *)((int)local_aa + 1);
        }
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x28a;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x293;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x298;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0x2a2;
        func_0x000299d1();
        local_18 = 0x22b2;
        uStack_1a = 0x2ab;
        func_0x000297e6();
        puStack_20 = (undefined1 *)0x22b2;
        uStack_22 = 0x2b5;
        func_0x000299d1();
        puStack_20 = (undefined1 *)0x22b2;
        uStack_22 = 0x2be;
        func_0x000297e6();
        uStack_28 = 0x22b2;
        uStack_2a = 0x2c8;
        func_0x000299d1();
        uStack_28 = 0x22b2;
        uStack_2a = 0x2cd;
        puVar7 = (undefined2 *)FUN_1def_06ff();
        local_ea = *puVar7;
        local_e8 = puVar7[1];
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x2f7;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x300;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        uStack_12 = 0x305;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0x30f;
        func_0x000299d1();
        local_18 = 0x22b2;
        uStack_1a = 0x318;
        func_0x000297e6();
        puStack_20 = (undefined1 *)0x22b2;
        uStack_22 = 0x322;
        func_0x000299d1();
        puStack_20 = (undefined1 *)0x22b2;
        uStack_22 = 0x32b;
        func_0x000297e6();
        uStack_28 = 0x22b2;
        uStack_2a = 0x335;
        func_0x000299d1();
        uStack_28 = 0x22b2;
        uStack_2a = 0x33a;
        puVar7 = (undefined2 *)FUN_1def_06ff();
        local_11c = *puVar7;
        local_11a = puVar7[1];
        iVar8 = func_0x0000abfa();
        if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        return iVar8;
      }
    }
    FUN_1885_2ec3();
    if (param_1 != 0) goto LAB_2bb4_4a18;
    if ((local_122 != 1) || (local_aa == (int *)0x0)) goto LAB_3ab8_4384;
    piStack_c = (int *)0xf4f4;
    func_0x0000daa6();
    uVar14 = 0x885;
    for (; 0 < (int)local_aa; local_aa = (int *)((int)local_aa + -1)) {
      local_1ea = *(undefined2 *)0x148;
      local_1e8 = *(undefined2 *)0x14a;
      piStack_e = (int *)0xf515;
      piStack_c = (int *)uVar14;
      func_0x00018779();
      uVar14 = 0x11f2;
    }
LAB_3ab8_44c6:
    func_0x0000abfa();
    local_aa = (int *)0x0;
    piStack_c = (undefined2 *)0xf05a;
    func_0x0000b1d8();
  } while( true );
}



/* 3ab8:4c91  FUN_3ab8_4c91  3401 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */

void __cdecl16far FUN_3ab8_4c91(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 uVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined1 *puStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0xf819;
  func_0x000299b9();
  uStack_a = 0x22b2;
  uStack_c = 0xf823;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xf828;
  func_0x0002a11e();
  uStack_4 = 0xf832;
  func_0x00029834();
  uStack_4 = 0xf83b;
  func_0x00029983();
  uStack_4 = 0xf844;
  func_0x00029834();
  uStack_a = 0x22b2;
  uStack_c = 0xf84e;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xf853;
  func_0x0002a10c();
  uStack_4 = 0xf85d;
  func_0x00029834();
  uStack_4 = 0xf866;
  func_0x00029983();
  if (*(int *)(unaff_BP + -0x130) == 0) {
    if (*(int *)0xcb6 == 0) {
      uVar3 = *(undefined2 *)0xa166;
      *(undefined2 *)0xb76a = *(undefined2 *)0xa164;
      *(undefined2 *)0xb76c = uVar3;
      uVar3 = *(undefined2 *)0xa158;
      uVar6 = *(undefined2 *)0xa15a;
    }
    else {
      uVar3 = *(undefined2 *)0xcbc;
      *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
      *(undefined2 *)0xb76c = uVar3;
      uVar3 = *(undefined2 *)0xcbe;
      uVar6 = *(undefined2 *)0xcc0;
    }
    *(undefined2 *)0xb784 = uVar3;
    *(undefined2 *)0xb786 = uVar6;
  }
  if (*(int *)(unaff_BP + -0x120) == 0) {
    if ((*(char *)0x4a == '\0') || (*(int *)(unaff_BP + -0x122) == 2)) {
      uStack_4 = 0xfcfb;
      func_0x000297e6();
      uStack_4 = 0xfd00;
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xfd0a;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0xfd13;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0xfd18;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xfd22;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      puStack_16 = (undefined1 *)0xfd2b;
      puVar4 = (undefined2 *)FUN_1def_05d1();
      uVar3 = puVar4[1];
      *(undefined2 *)(unaff_BP + -0x1c4) = *puVar4;
      *(undefined2 *)(unaff_BP + -0x1c2) = uVar3;
      uStack_4 = 0xfd46;
      FUN_28b3_0d8b();
      uStack_4 = 0xfd4f;
      func_0x00029b6d();
      uStack_4 = 0xfd54;
      func_0x00029af6();
      uStack_4 = 0xfd5d;
      func_0x0002996b();
      uStack_4 = 0xfd66;
      func_0x00029983();
      uStack_4 = 0xfd6f;
      func_0x000297e6();
      uStack_4 = 0xfd74;
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xfd7e;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0xfd87;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0xfd8c;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xfd96;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      puStack_16 = (undefined1 *)&SUB_0000_fd9f;
      func_0x0001e558();
      uStack_4 = 0xfda9;
      func_0x000297e6();
      uStack_4 = 0xfdb2;
      func_0x0002996b();
      uStack_4 = 0xfdbb;
      FUN_28b3_0d8b();
      uStack_4 = 0xfdc0;
      func_0x00029c9d();
      uStack_4 = 0xfdc5;
      func_0x00029af6();
      uStack_4 = 0xfdce;
      func_0x0002996b();
      uStack_4 = 0xfdd7;
      func_0x00029983();
      *(int *)(unaff_BP + -0x22a) = *(int *)(unaff_BP + -0x126) + 1;
      uStack_4 = 0xfde9;
      FUN_28b3_0d8b();
      uStack_4 = 0xfdf2;
      func_0x0002996b();
      uStack_4 = 0xfdfb;
      func_0x00029b6d();
      uStack_4 = 0xfe04;
      func_0x00029bb5();
      uStack_4 = 0xfe0d;
      func_0x00029983();
      uStack_4 = 0xfe16;
      func_0x000297e6();
      uStack_4 = 0xfe1f;
      func_0x00029b6d();
    }
    else {
      uStack_4 = 0xf9f1;
      func_0x000297e6();
      uStack_4 = 0xf9f6;
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 64000;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0xfa09;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0xfa0e;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xfa18;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      puStack_16 = (undefined1 *)0xfa21;
      puVar4 = (undefined2 *)FUN_1def_05d1();
      uVar3 = puVar4[1];
      *(undefined2 *)(unaff_BP + -0x1c4) = *puVar4;
      *(undefined2 *)(unaff_BP + -0x1c2) = uVar3;
      uStack_4 = 0xfa3c;
      func_0x000297e6();
      uStack_4 = 0xfa41;
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xfa4b;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0xfa54;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0xfa59;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xfa63;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      puStack_16 = (undefined1 *)0xfa6c;
      puVar4 = (undefined2 *)func_0x0001e558();
      uVar3 = puVar4[1];
      *(undefined2 *)(unaff_BP + -0x1da) = *puVar4;
      *(undefined2 *)(unaff_BP + -0x1d8) = uVar3;
      uStack_4 = 0xfa87;
      func_0x000297e6();
      uStack_4 = 0xfa90;
      func_0x00029b6d();
      uStack_4 = 0xfa99;
      func_0x0002996b();
      uStack_4 = 0x22b2;
      uStack_6 = 0xfaa3;
      func_0x00029b6d();
      uStack_4 = 0xfaa9;
      func_0x00029983();
      uStack_4 = 0xfab2;
      func_0x000297e6();
      uStack_4 = 0x22b2;
      uStack_6 = 0xfabc;
      func_0x00029b6d();
      uStack_4 = 0xfac2;
      func_0x00029983();
      uStack_4 = 0xfac7;
      puVar4 = (undefined2 *)func_0x0000c4c4();
      uVar3 = puVar4[1];
      *(undefined2 *)(unaff_BP + -0x22a) = *puVar4;
      *(undefined2 *)(unaff_BP + -0x228) = uVar3;
      uStack_4 = 0xfadf;
      func_0x000297e6();
      uStack_4 = 0xfae8;
      func_0x00029b85();
      uStack_4 = 0xfaf1;
      func_0x00029b6d();
      uStack_4 = 0x22b2;
      uStack_6 = 0xfafb;
      func_0x00029b6d();
      uStack_4 = 0xfb01;
      func_0x00029983();
      uVar12 = 0;
      uVar13 = *(int *)(unaff_BP + -0x126) == 0;
      if (!(bool)uVar13) {
        uStack_4 = 0xfb11;
        func_0x000297e6();
        uStack_4 = 0x22b2;
        uStack_6 = 0xfb1b;
        func_0x00029b6d();
        uStack_4 = 0xfb21;
        func_0x00029983();
      }
      uStack_4 = 0xfb2a;
      func_0x000297e6();
      uStack_4 = 0xfb33;
      func_0x000297e6();
      uStack_4 = 0xfb38;
      FUN_28b3_1181();
      if ((bool)uVar12 || (bool)uVar13) {
        uStack_4 = 0xfb65;
        func_0x000297e6();
        uStack_4 = 0xfb6e;
        func_0x00029b85();
        uStack_4 = 0xfb73;
        func_0x00029d78();
        uStack_4 = 0xfb7c;
        func_0x00029bfc();
      }
      else {
        uStack_4 = 0xfb43;
        func_0x000297e6();
        uStack_4 = 0xfb4c;
        func_0x00029b85();
        uStack_4 = 0xfb51;
        func_0x00029d78();
        uStack_4 = 0xfb5a;
        func_0x00029c74();
      }
      uStack_4 = 0xfb81;
      uVar14 = FUN_28b3_0f51();
      *(undefined2 *)(unaff_BP + -0x226) = (int)uVar14;
      *(undefined2 *)(unaff_BP + -0x224) = (int)((ulong)uVar14 >> 0x10);
      uStack_4 = 0xfb92;
      func_0x000297e6();
      uStack_4 = 0xfb9b;
      func_0x00029b6d();
      uStack_4 = 0xfba4;
      func_0x000298b4();
      uStack_4 = 0xfba9;
      FUN_28b3_1177();
      uStack_4 = 0xfbb2;
      func_0x00029b6d();
      uStack_4 = 0xfbbb;
      func_0x00029983();
      uStack_4 = 0xfbc4;
      func_0x000297e6();
      uStack_4 = 0xfbcd;
      func_0x000297e6();
      uStack_4 = 0xfbd2;
      FUN_28b3_1181();
      if ((bool)uVar12 || (bool)uVar13) {
        uStack_4 = 0xfbff;
        func_0x000297e6();
        uStack_4 = 0xfc08;
        func_0x00029b85();
        uStack_4 = 0xfc0d;
        func_0x00029d78();
        uStack_4 = 0xfc16;
        func_0x00029bfc();
      }
      else {
        uStack_4 = 0xfbdd;
        func_0x000297e6();
        uStack_4 = 0xfbe6;
        func_0x00029b85();
        uStack_4 = 0xfbeb;
        func_0x00029d78();
        uStack_4 = 0xfbf4;
        func_0x00029c74();
      }
      uStack_4 = 0xfc1b;
      uVar14 = FUN_28b3_0f51();
      *(undefined2 *)(unaff_BP + -0x226) = (int)uVar14;
      *(undefined2 *)(unaff_BP + -0x224) = (int)((ulong)uVar14 >> 0x10);
      uStack_4 = 0xfc2c;
      FUN_28b3_0d8b();
      uStack_4 = 0xfc35;
      func_0x00029b6d();
      uStack_4 = 0xfc3a;
      func_0x00029af6();
      uStack_4 = 0xfc43;
      func_0x0002996b();
      uStack_4 = 0xfc4c;
      func_0x00029983();
      uStack_4 = 0xfc55;
      func_0x000297e6();
      uStack_4 = 0xfc5e;
      func_0x00029b6d();
      uStack_4 = 0xfc67;
      func_0x000298b4();
      uStack_4 = 0xfc6c;
      FUN_28b3_1177();
      uStack_4 = 0xfc75;
      func_0x00029b6d();
      uStack_4 = 0xfc7e;
      func_0x0002996b();
      uStack_4 = 0xfc87;
      FUN_28b3_0d8b();
      uStack_4 = 0xfc8c;
      func_0x00029c9d();
      uStack_4 = 0xfc91;
      func_0x00029af6();
      uStack_4 = 0xfc9a;
      func_0x0002996b();
      uStack_4 = 0xfca3;
      func_0x00029983();
      *(int *)(unaff_BP + -0x216) = *(int *)(unaff_BP + -0x126) + 1;
      uStack_4 = 0xfcb5;
      FUN_28b3_0d8b();
      uStack_4 = 0xfcbe;
      func_0x0002996b();
      uStack_4 = 0xfcc7;
      func_0x00029b6d();
      uStack_4 = 0xfcd0;
      func_0x00029bb5();
      uStack_4 = 0xfcd9;
      func_0x00029983();
      uStack_4 = 0xfce2;
      func_0x000297e6();
      uStack_4 = 0xfceb;
      func_0x00029b6d();
    }
  }
  else {
    uVar3 = *(undefined2 *)(unaff_BP + -0x1ee);
    *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0x1f0);
    *(undefined2 *)0xb30e = uVar3;
    uVar3 = *(undefined2 *)(unaff_BP + -0x202);
    *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -0x204);
    *(undefined2 *)0xb380 = uVar3;
    uStack_4 = 0xf8d8;
    func_0x000297e6();
    uStack_4 = 0xf8e1;
    func_0x00029b6d();
    uStack_4 = 0xf8ea;
    func_0x0002996b();
    uStack_4 = 0xf8f3;
    func_0x00029b9d();
    uStack_4 = 0xf8fc;
    func_0x0002996b();
    uStack_4 = 0xf905;
    func_0x00029983();
    uStack_4 = 0xf90e;
    func_0x000297e6();
    uStack_4 = 0xf917;
    func_0x00029b85();
    uStack_4 = 0xf920;
    func_0x0002996b();
    uStack_4 = 0xf929;
    func_0x00029983();
    *(int *)(unaff_BP + -0x216) = *(int *)(unaff_BP + -0x1c0) + 1;
    uStack_4 = 0xf93b;
    FUN_28b3_0d8b();
    uStack_4 = 0xf944;
    func_0x000297e6();
    uStack_4 = 0xf949;
    func_0x00029d78();
    uStack_4 = 0xf94e;
    func_0x00029c9d();
    uStack_4 = 0xf957;
    func_0x00029c2c();
    uStack_4 = 0xf960;
    func_0x0002996b();
    uStack_4 = 0xf969;
    func_0x00029983();
    *(int *)(unaff_BP + -0x216) = *(int *)(unaff_BP + -0x1d6) + 1;
    uStack_4 = 0xf97b;
    FUN_28b3_0d8b();
    uStack_4 = 0xf984;
    func_0x000297e6();
    uStack_4 = 0xf989;
    func_0x00029d78();
    uStack_4 = 0xf98e;
    func_0x00029c9d();
    uStack_4 = 0xf997;
    func_0x00029c2c();
    uStack_4 = 0xf9a0;
    func_0x0002996b();
    uStack_4 = 0xf9a9;
    func_0x00029983();
    uStack_4 = 0xf9b2;
    func_0x000297e6();
    uStack_4 = 0xf9bb;
    func_0x00029bb5();
    uStack_4 = 0xf9c4;
    func_0x00029983();
    uStack_4 = 0xf9cd;
    func_0x000297e6();
  }
  uStack_4 = 0xfe28;
  func_0x00029bb5();
  uStack_4 = 0xfe31;
  func_0x00029983();
  uStack_4 = 0xfe3a;
  func_0x000297e6();
  uStack_4 = 0xfe3f;
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xfe49;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xfe52;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xfe57;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfe61;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)0xfe69;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x13c) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x13a) = uVar3;
  uStack_4 = 0xfe84;
  func_0x000297e6();
  uStack_4 = 0xfe89;
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xfe93;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xfe9c;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xfea1;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfeab;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)0xfeb3;
  puVar4 = (undefined2 *)func_0x0001e558();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x1b8) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x1b6) = uVar3;
  uStack_4 = 0xfece;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xfed8;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xfee1;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xfee6;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfef0;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)0xfef8;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x1d4) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x1d2) = uVar3;
  uStack_4 = 0xff13;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xff1d;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xff26;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xff2b;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xff35;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)0xff3d;
  puVar4 = (undefined2 *)func_0x0001e558();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x1e2) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x1e0) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x128);
  *(undefined2 *)(unaff_BP + -0x1ec) = *(undefined2 *)(unaff_BP + -0x12a);
  *(undefined2 *)(unaff_BP + -0x1ea) = uVar3;
  uStack_4 = 0xff68;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xff72;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xff7b;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xff80;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xff8a;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)0xff92;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x12a) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x128) = uVar3;
  uStack_4 = 0xffad;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xffb7;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xffc0;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xffc5;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xffcf;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)0xffd7;
  puVar4 = (undefined2 *)func_0x0001e558();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x144) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x142) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x13e);
  *(undefined2 *)(unaff_BP + -0x1ec) = *(undefined2 *)(unaff_BP + -0x140);
  *(undefined2 *)(unaff_BP + -0x1ea) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x1ba);
  *(undefined2 *)(unaff_BP + -0x200) = *(undefined2 *)(unaff_BP + -0x1bc);
  *(undefined2 *)(unaff_BP + -0x1fe) = uVar3;
  uStack_4 = 0x12;
  func_0x000297e6();
  uStack_4 = 0x17;
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0x21;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0x2a;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0x2f;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0x39;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)0x41;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x140) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x13e) = uVar3;
  uStack_4 = 0x5c;
  func_0x000297e6();
  uStack_4 = 0x61;
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0x6b;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0x74;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0x79;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0x83;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)0x8b;
  puVar4 = (undefined2 *)func_0x0001e558();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x1bc) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x1ba) = uVar3;
  if (*(int *)(unaff_BP + -0x112) == 0) {
    uStack_4 = 0x362;
    FUN_1885_2ec3();
    uStack_4 = 0x1b6e;
    uStack_6 = 0x36f;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    uStack_6 = 0x374;
    func_0x00029d78();
    uStack_c = 0x22b2;
    uStack_e = 0x37e;
    func_0x000299d1();
    uStack_c = 0x22b2;
    uStack_e = 0x387;
    func_0x000297e6();
    uStack_c = 0x22b2;
    uStack_e = 0x38c;
    func_0x00029d78();
    uStack_14 = 0x22b2;
    puStack_16 = (undefined1 *)0x396;
    func_0x000299d1();
    uStack_14 = 0x22b2;
    puStack_16 = (undefined1 *)0x39f;
    func_0x000297e6();
    uStack_14 = 0x22b2;
    puStack_16 = (undefined1 *)0x3a4;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x0001e18f(0x22b2);
    uStack_4 = 0x1bb4;
    uStack_6 = 0x3db;
    func_0x000297e6();
    uStack_c = 0x22b2;
    uStack_e = 0x3e5;
    func_0x000299d1();
    uStack_c = 0x22b2;
    uStack_e = 0x3ee;
    func_0x000297e6();
    uStack_14 = 0x22b2;
    puStack_16 = (undefined1 *)0x3f8;
    func_0x000299d1();
    uStack_14 = 0x22b2;
    puStack_16 = (undefined1 *)0x401;
    func_0x000297e6();
    uStack_14 = 0x22b2;
    puStack_16 = (undefined1 *)0x406;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x0001e18f(0x22b2);
    uStack_4 = 0x1bb4;
    uStack_6 = 0x43d;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    uStack_6 = 0x442;
    func_0x00029d78();
    uStack_c = 0x22b2;
    uStack_e = 0x44c;
    func_0x000299d1();
    uStack_c = 0x22b2;
    uStack_e = 0x455;
    func_0x000297e6();
    uStack_c = 0x22b2;
    uStack_e = 0x45a;
    func_0x00029d78();
    uStack_14 = 0x22b2;
    puStack_16 = (undefined1 *)0x464;
    func_0x000299d1();
    uStack_14 = 0x22b2;
    puStack_16 = (undefined1 *)0x46d;
    func_0x000297e6();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x0001e18f(0x22b2);
    uStack_4 = 0x1bb4;
    uStack_6 = 0x49f;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    uStack_6 = 0x4a4;
    func_0x00029d78();
    uStack_c = 0x22b2;
    uStack_e = 0x4ae;
    func_0x000299d1();
    uStack_c = 0x22b2;
    uStack_e = 0x4b7;
    func_0x000297e6();
    uStack_c = 0x22b2;
    uStack_e = 0x4bc;
    func_0x00029d78();
    uStack_14 = 0x22b2;
    puStack_16 = (undefined1 *)0x4c6;
    func_0x000299d1();
    uStack_14 = 0x22b2;
    puStack_16 = (undefined1 *)0x4cf;
    func_0x000297e6();
    uStack_14 = 0x22b2;
    puStack_16 = (undefined1 *)0x4d4;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x0001e18f(0x22b2);
    uStack_4 = *(undefined2 *)(unaff_BP + -0x1b8);
    uStack_6 = *(undefined2 *)(unaff_BP + -0x13a);
    uStack_8 = *(undefined2 *)(unaff_BP + -0x13c);
    uStack_a = *(undefined2 *)(unaff_BP + -0x1e0);
    uStack_c = *(undefined2 *)(unaff_BP + -0x1e2);
    uStack_e = *(undefined2 *)(unaff_BP + -0x1d2);
    uStack_10 = *(undefined2 *)(unaff_BP + -0x1d4);
    uStack_12 = *(undefined2 *)(unaff_BP + -0x142);
    uStack_14 = *(undefined2 *)(unaff_BP + -0x144);
    puStack_16 = (undefined1 *)*(undefined2 *)(unaff_BP + -0x128);
    FUN_4375_7ea5(0x1bb4,*(undefined2 *)(unaff_BP + -0x12a));
    uVar3 = *(undefined2 *)(unaff_BP + -0x1ee);
    *(undefined2 *)(unaff_BP + -0x1cc) = *(undefined2 *)(unaff_BP + -0x1f0);
    *(undefined2 *)(unaff_BP + -0x1ca) = uVar3;
    uVar3 = *(undefined2 *)(unaff_BP + -0x202);
    *(undefined2 *)(unaff_BP + -0x1de) = *(undefined2 *)(unaff_BP + -0x204);
    *(undefined2 *)(unaff_BP + -0x1dc) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_BP + -0x7d) = *(undefined1 *)0xa6a;
  *(undefined1 *)(unaff_BP + -0x7e) = *(undefined1 *)0xa6c;
  *(undefined1 *)(unaff_BP + -0x7c) = *(undefined1 *)0xb310;
  puVar4 = (undefined2 *)(unaff_BP + -0xa6);
  puVar7 = (undefined2 *)(unaff_BP + -0x8e);
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = *puVar1;
  }
  puVar4 = (undefined2 *)(unaff_BP + -0xbe);
  puVar7 = (undefined2 *)(unaff_BP + -0x8e);
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = *puVar1;
  }
  puVar4 = (undefined2 *)(unaff_BP + -0xdc);
  puVar7 = (undefined2 *)(unaff_BP + -0x8e);
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = *puVar1;
  }
  uVar3 = *(undefined2 *)(unaff_BP + -0x142);
  *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + -0x144);
  *(undefined2 *)(unaff_BP + -0x88) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x13a);
  *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x13c);
  *(undefined2 *)(unaff_BP + -0x84) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x1b6);
  *(undefined2 *)(unaff_BP + -0x82) = *(undefined2 *)(unaff_BP + -0x1b8);
  *(undefined2 *)(unaff_BP + -0x80) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x13a);
  *(undefined2 *)(unaff_BP + -0xa6) = *(undefined2 *)(unaff_BP + -0x13c);
  *(undefined2 *)(unaff_BP + -0xa4) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x1b6);
  *(undefined2 *)(unaff_BP + -0xa2) = *(undefined2 *)(unaff_BP + -0x1b8);
  *(undefined2 *)(unaff_BP + -0xa0) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x13e);
  *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x140);
  *(undefined2 *)(unaff_BP + -0x9c) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x1ba);
  *(undefined2 *)(unaff_BP + -0x9a) = *(undefined2 *)(unaff_BP + -0x1bc);
  *(undefined2 *)(unaff_BP + -0x98) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x13e);
  *(undefined2 *)(unaff_BP + -0xbe) = *(undefined2 *)(unaff_BP + -0x140);
  *(undefined2 *)(unaff_BP + -0xbc) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x1ba);
  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)(unaff_BP + -0x1bc);
  *(undefined2 *)(unaff_BP + -0xb8) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x1d2);
  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)(unaff_BP + -0x1d4);
  *(undefined2 *)(unaff_BP + -0xb4) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x1e0);
  *(undefined2 *)(unaff_BP + -0xb2) = *(undefined2 *)(unaff_BP + -0x1e2);
  *(undefined2 *)(unaff_BP + -0xb0) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x1d2);
  *(undefined2 *)(unaff_BP + -0xdc) = *(undefined2 *)(unaff_BP + -0x1d4);
  *(undefined2 *)(unaff_BP + -0xda) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x1e0);
  *(undefined2 *)(unaff_BP + -0xd8) = *(undefined2 *)(unaff_BP + -0x1e2);
  *(undefined2 *)(unaff_BP + -0xd6) = uVar3;
  uStack_4 = 0x1ba;
  func_0x000297e6();
  uStack_4 = 0x1c3;
  func_0x0002996b();
  uStack_4 = 0x1cc;
  func_0x00029983();
  uVar3 = *(undefined2 *)(unaff_BP + -0x142);
  *(undefined2 *)(unaff_BP + -0xd0) = *(undefined2 *)(unaff_BP + -0x144);
  *(undefined2 *)(unaff_BP + -0xce) = uVar3;
  uStack_4 = 0x1e1;
  FUN_1885_2ec3();
  uStack_4 = 0x1b6e;
  uStack_6 = 0x1e9;
  func_0x0000daa6();
  *(undefined2 *)(unaff_BP + -0xa8) = 0;
  ppuVar8 = &puStack_16;
  ppuVar9 = &puStack_16;
  ppuVar10 = &puStack_16;
  ppuVar11 = &puStack_16;
  puVar4 = (undefined2 *)(unaff_BP + -0x8e);
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = ppuVar8;
    ppuVar8 = ppuVar8 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iVar5 = FUN_17a6_0cba();
  if (0 < iVar5) {
    *(undefined2 *)(unaff_BP + -0xa8) = 1;
  }
  puVar4 = (undefined2 *)(unaff_BP + -0xa6);
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = ppuVar9;
    ppuVar9 = ppuVar9 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iVar5 = FUN_17a6_0cba();
  if (0 < iVar5) {
    *(int *)(unaff_BP + -0xa8) = *(int *)(unaff_BP + -0xa8) + 1;
  }
  puVar4 = (undefined2 *)(unaff_BP + -0xbe);
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = ppuVar10;
    ppuVar10 = ppuVar10 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iVar5 = FUN_17a6_0cba();
  if (0 < iVar5) {
    *(int *)(unaff_BP + -0xa8) = *(int *)(unaff_BP + -0xa8) + 1;
  }
  puVar4 = (undefined2 *)(unaff_BP + -0xdc);
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = ppuVar11;
    ppuVar11 = ppuVar11 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iVar5 = FUN_17a6_0cba();
  if (0 < iVar5) {
    *(int *)(unaff_BP + -0xa8) = *(int *)(unaff_BP + -0xa8) + 1;
  }
  uStack_4 = 0x27b;
  func_0x000297e6();
  uStack_4 = 0x280;
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0x28a;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0x293;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0x298;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0x2a2;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0x2ab;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  puVar4 = (undefined2 *)FUN_1def_06ff(0x22b2);
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0xe8) = *puVar4;
  *(undefined2 *)(unaff_BP + -0xe6) = uVar3;
  uStack_4 = 0x2e8;
  func_0x000297e6();
  uStack_4 = 0x2ed;
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0x2f7;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0x300;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0x305;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0x30f;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0x318;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  puVar4 = (undefined2 *)FUN_1def_06ff(0x22b2);
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x11a) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x118) = uVar3;
  uStack_4 = 0x351;
  func_0x0000abfa();
  if (*(int *)(unaff_BP + 6) != 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 3ab8:59de  FUN_3ab8_59de  413 bytes, 1 callers */

void __cdecl16far FUN_3ab8_59de(int param_1,int param_2,int param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  undefined1 local_a8 [80];
  undefined1 local_58 [70];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  undefined1 *local_8;
  undefined1 *puStack_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0x569;
  FUN_21f2_0ebc();
  local_4 = (undefined1 *)0x22b2;
  puStack_6 = (undefined1 *)0x571;
  func_0x00029834();
  local_4 = (undefined1 *)0x22b2;
  puStack_6 = (undefined1 *)0x579;
  func_0x00029983();
  local_4 = (undefined1 *)0x560e;
  puStack_6 = local_58;
  local_8 = (undefined1 *)0x22b2;
  uStack_a = 0x586;
  FUN_21f2_3454();
  if (0 < param_1) {
    local_4 = (undefined1 *)0x6da;
    puStack_6 = local_58;
    local_8 = (undefined1 *)0x22b2;
    uStack_a = 0x59b;
    FUN_21f2_2d26();
    local_4 = (undefined1 *)0x5616;
    puStack_6 = local_58;
    local_8 = (undefined1 *)0x22b2;
    uStack_a = 0x5aa;
    FUN_21f2_2d26();
    local_4 = (undefined1 *)0x7e0;
    puStack_6 = local_58;
    local_8 = (undefined1 *)0x22b2;
    uStack_a = 0x5b9;
    FUN_21f2_2d26();
  }
  local_4 = local_58;
  puStack_6 = (undefined1 *)param_4;
  local_8 = (undefined1 *)0x22b2;
  uStack_a = 0x5c7;
  FUN_21f2_2d26();
  local_4 = (undefined1 *)param_4;
  puStack_6 = (undefined1 *)0x4;
  local_8 = (undefined1 *)0x22b2;
  uStack_a = 0x5d5;
  FUN_1def_07a4();
  if (*(int *)0xc22 == 0) {
    local_4 = (undefined1 *)0xf;
    if (param_2 == 2) {
      local_4 = (undefined1 *)0x2d;
    }
    if (param_2 == 3) {
      local_4 = (undefined1 *)0x5a;
    }
    if (param_2 == 0) {
      local_4 = (undefined1 *)0x5630;
      puStack_6 = local_a8;
      local_8 = (undefined1 *)0x1bb4;
      uStack_a = 0x626;
      FUN_21f2_3454();
    }
    else {
      puStack_6 = (undefined1 *)0x5629;
      local_8 = local_a8;
      uStack_a = 0x1bb4;
      puStack_c = (undefined1 *)0x613;
      FUN_21f2_3454();
    }
    local_4 = (undefined1 *)0xffff;
    puStack_6 = (undefined1 *)0x5;
    local_8 = (undefined1 *)0x2;
    uStack_a = 0x25;
    puStack_c = local_a8;
    puStack_e = (undefined1 *)0x22b2;
    uStack_10 = 0x642;
    FUN_1000_02b5();
    *(undefined2 *)0xc22 = 1;
    if (0 < param_1) {
      if (param_2 == 0) {
        local_4 = (undefined1 *)0x5645;
      }
      else if (param_3 == 0) {
        local_4 = (undefined1 *)0x563e;
      }
      else {
        local_4 = (undefined1 *)0x5637;
      }
      puStack_6 = local_a8;
      local_8 = (undefined1 *)0xdef;
      uStack_a = 0x678;
      FUN_21f2_3454();
      local_4 = (undefined1 *)0xffff;
      puStack_6 = (undefined1 *)0x5;
      local_8 = (undefined1 *)0x2;
      uStack_a = 0x2e;
      puStack_c = local_a8;
      puStack_e = (undefined1 *)0x22b2;
      uStack_10 = 0x694;
      FUN_1000_02b5();
      local_4 = (undefined1 *)0x7f8;
      puStack_6 = local_58;
      local_8 = (undefined1 *)0xdef;
      uStack_a = 0x6a4;
      FUN_21f2_3454();
      local_4 = (undefined1 *)0x22b2;
      puStack_6 = (undefined1 *)0x6ae;
      func_0x000297e6();
      local_4 = (undefined1 *)0x22b2;
      puStack_6 = (undefined1 *)0x6b3;
      func_0x00029d78();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0x6bd;
      func_0x000299d1();
      puStack_c = (undefined1 *)0x564c;
      puStack_e = local_a8;
      uStack_10 = 0x22b2;
      uStack_12 = 0x6cb;
      FUN_21f2_3454();
      local_4 = local_a8;
      puStack_6 = local_58;
      local_8 = (undefined1 *)0x22b2;
      uStack_a = 0x6dc;
      FUN_21f2_2d26();
      local_4 = (undefined1 *)0xffff;
      puStack_6 = (undefined1 *)0x7;
      local_8 = (undefined1 *)0x2;
      uStack_a = 0x38;
      puStack_c = local_58;
      puStack_e = (undefined1 *)0x22b2;
      uStack_10 = 0x6f7;
      FUN_1000_02b5();
    }
  }
  return;
}



/* 3ab8:5b7b  FUN_3ab8_5b7b  148 bytes, 1 callers */

void __cdecl16far FUN_3ab8_5b7b(undefined2 *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 ***local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x3ab8;
  local_6 = (undefined2 ***)0x706;
  FUN_21f2_0ebc();
  uVar2 = 0x22b2;
  while( true ) {
    local_4 = &local_a;
    local_6 = &local_6;
    local_8 = 0x5654;
    local_a = 2;
    iVar1 = func_0x00001dd5(uVar2,0x4e21);
    if (*(int *)0x158 != 0) {
      return;
    }
    if (iVar1 == -1) break;
    uVar3 = 0;
    uVar4 = iVar1 == 0;
    uVar2 = 0xad;
    if (-1 < iVar1) {
      local_4 = (undefined2 *)0xad;
      local_6 = (undefined2 ***)0x72d;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = (undefined2 ***)0x736;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      uVar2 = 0x22b2;
      local_6 = (undefined2 ***)0x73b;
      FUN_28b3_1181();
      if ((bool)uVar3 || (bool)uVar4) {
        local_4 = (undefined2 *)0x22b2;
        local_6 = (undefined2 ***)0x746;
        func_0x000297e6();
        local_4 = (undefined2 *)0x22b2;
        local_6 = (undefined2 ***)0x74e;
        func_0x000297e6();
        local_4 = (undefined2 *)0x22b2;
        uVar2 = 0x22b2;
        local_6 = (undefined2 ***)0x753;
        FUN_28b3_1181();
        if ((bool)uVar3 || (bool)uVar4) {
          *param_1 = local_6;
          param_1[1] = local_4;
          return;
        }
      }
    }
  }
  return;
}



/* 3ab8:5c0f  FUN_3ab8_5c0f  896 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_5c0f(int param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 auStack_16 [4];
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 local_a;
  
  FUN_21f2_0ebc();
  if (param_1 == 0) {
    return 0;
  }
  local_a = 0x7af;
  func_0x000297e6();
  local_a = 0x7b4;
  func_0x00029d78();
  local_a = 0x7bc;
  func_0x000299d1();
  local_a = 0x7c4;
  func_0x000297e6();
  local_a = 0x7c9;
  func_0x00029d78();
  local_a = 0x7d1;
  func_0x000299d1();
  uVar2 = param_1 == 3;
  local_a = 0x805;
  func_0x00029834();
  local_a = 0x80d;
  func_0x00029834();
  local_a = 0x812;
  FUN_28b3_1181();
  if ((bool)uVar2) {
    local_a = 0x81c;
    func_0x00029834();
    local_a = 0x824;
    func_0x00029834();
    local_a = 0x829;
    FUN_28b3_1181();
    if ((bool)uVar2) {
      return 0;
    }
  }
  if (*(int *)0xcb6 != 0) {
    local_a = 0x854;
    func_0x000297e6();
    local_a = 0x859;
    func_0x00029d78();
    local_a = 0x861;
    func_0x000299d1();
  }
  local_a = 0x869;
  func_0x00029834();
  local_a = 0x871;
  func_0x00029bfc();
  uStack_10 = 0x22b2;
  local_12 = 0x87b;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0x883;
  func_0x00029834();
  uStack_10 = 0x22b2;
  local_12 = 0x88b;
  func_0x00029bfc();
  func_0x000299d1();
  func_0x0002a178();
  uVar2 = (undefined1 *)0xffef < auStack_16;
  uVar3 = &stack0x0000 == (undefined1 *)0x6;
  local_a = 0x8a4;
  func_0x00029834();
  local_a = 0x8ac;
  func_0x00029c44();
  local_a = 0x8b4;
  func_0x00029bfc();
  local_a = 0x8bc;
  func_0x000299d1();
  local_a = 0x8c5;
  func_0x00029834();
  local_a = 0x8cd;
  func_0x00029834();
  local_a = 0x8d2;
  FUN_28b3_1181();
  local_a = 0x8e3;
  func_0x00029834();
  local_a = 0x8eb;
  func_0x00029834();
  local_a = 0x8f3;
  func_0x00029c44();
  local_a = 0x8f8;
  FUN_28b3_117c();
  local_a = 0x8fd;
  FUN_28b3_0f51();
  local_a = 0x908;
  FUN_28b3_0d8b();
  local_a = 0x910;
  func_0x00029c2c();
  local_a = 0x918;
  func_0x000299d1();
  local_a = 0x921;
  func_0x00029834();
  local_a = 0x929;
  func_0x00029834();
  local_a = 0x22b2;
  uStack_c = 0x932;
  func_0x00029c74();
  local_a = 0x938;
  func_0x000299b9();
  local_a = 0x93d;
  FUN_28b3_1181();
  if ((bool)uVar2 || (bool)uVar3) {
LAB_3ab8_5ddf:
    local_a = 0x968;
    func_0x00029834();
    local_a = 0x970;
    func_0x00029834();
    local_a = 0x975;
    FUN_28b3_1181();
    if (!(bool)uVar2 && !(bool)uVar3) {
      local_a = 0x97f;
      func_0x00029834();
      local_a = 0x988;
      func_0x00029834();
      local_a = 0x98d;
      FUN_28b3_1181();
      if (!(bool)uVar2 && !(bool)uVar3) {
        local_12 = *(undefined2 *)0xa178;
        uStack_10 = *(undefined2 *)0xa17a;
        uStack_e = *(undefined2 *)0xa17c;
        uStack_c = *(undefined2 *)0xa17e;
        goto LAB_3ab8_5f03;
      }
    }
    local_a = 0x9ac;
    func_0x00029834();
    local_a = 0x9b5;
    func_0x00029834();
    local_a = 0x9ba;
    FUN_28b3_1181();
    if ((bool)uVar2) {
      local_a = 0x9c5;
      func_0x00029834();
      local_a = 0x9cd;
      func_0x00029834();
      local_a = 0x9d2;
      FUN_28b3_1181();
      if ((bool)uVar2) {
        puVar1 = (undefined2 *)0xa244;
        goto LAB_3ab8_5e5a;
      }
    }
    uVar2 = 0;
    local_a = 0x9f2;
    func_0x00029834();
    local_a = 0x9fa;
    func_0x00029834();
    local_a = 0x9ff;
    FUN_28b3_1181();
    if ((bool)uVar2) {
      local_a = 0xa0a;
      func_0x00029834();
      local_a = 0xa12;
      func_0x00029834();
      local_a = 0xa17;
      FUN_28b3_1181();
      if (!(bool)uVar2 && !(bool)uVar3) {
        local_12 = *(undefined2 *)0xa178;
        uStack_10 = *(undefined2 *)0xa17a;
        uStack_e = *(undefined2 *)0xa17c;
        uStack_c = *(undefined2 *)0xa17e;
        goto LAB_3ab8_5f03;
      }
    }
    local_a = 0xa35;
    func_0x00029834();
    local_a = 0xa3d;
    func_0x00029c2c();
    local_a = 0xa45;
    func_0x000299b9();
    uStack_10 = 0x22b2;
    local_12 = 0xa4f;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xa54;
    puVar1 = (undefined2 *)func_0x0002a11e();
    local_12 = *puVar1;
    uStack_10 = puVar1[1];
    uStack_e = puVar1[2];
    uStack_c = puVar1[3];
    local_a = 0xa6a;
    func_0x00029834();
    uStack_10 = 0x22b2;
    local_12 = 0xa74;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xa79;
    func_0x0002a10c();
  }
  else {
    local_a = 0x948;
    func_0x00029834();
    local_a = 0x950;
    func_0x00029834();
    local_a = 0x955;
    FUN_28b3_1181();
    if (!(bool)uVar2) goto LAB_3ab8_5ddf;
    puVar1 = (undefined2 *)0xa204;
LAB_3ab8_5e5a:
    local_12 = *puVar1;
    uStack_10 = puVar1[1];
    uStack_e = puVar1[2];
    uStack_c = puVar1[3];
  }
LAB_3ab8_5f03:
  local_a = 0xa99;
  func_0x00029834();
  local_a = 0xaa1;
  func_0x00029bfc();
  local_a = 0xaa9;
  func_0x00029c2c();
  local_a = 0xab1;
  func_0x00029834();
  local_a = 0xab9;
  func_0x00029bfc();
  local_a = 0xac1;
  func_0x00029c2c();
  local_a = 0xac6;
  FUN_28b3_117c();
  local_a = 0xace;
  func_0x000299b9();
  local_a = 0xad6;
  func_0x00029c2c();
  local_a = 0xade;
  func_0x00029c74();
  local_a = 0xae6;
  func_0x00029983();
  local_a = 0xaee;
  func_0x00029834();
  local_a = 0xaf6;
  func_0x00029c2c();
  local_a = 0xafe;
  func_0x00029c74();
  local_a = 0xb06;
  func_0x00029983();
  return 1;
}



/* 3ab8:5f8f  FUN_3ab8_5f8f  6741 bytes, 0 callers */

void __cdecl16far FUN_3ab8_5f8f(void)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  int unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  undefined2 local_bda;
  undefined2 local_bd8;
  undefined2 local_bd6;
  undefined2 local_bd4;
  int local_bd2 [210];
  undefined2 local_a2e;
  undefined2 local_a2c;
  undefined2 local_a2a;
  undefined2 local_a28;
  undefined2 local_a26;
  undefined2 local_a24;
  undefined2 local_a22;
  undefined2 local_a20;
  undefined4 local_a1e;
  undefined4 local_a1a;
  undefined2 local_a16;
  undefined2 local_a14;
  undefined2 local_a12;
  undefined2 local_a10;
  undefined2 local_a0e;
  undefined2 local_a0c;
  long local_a0a;
  undefined4 local_a02;
  uint local_9fe;
  int local_9fc;
  undefined2 local_9f2;
  undefined2 local_9f0;
  int local_9ea [50];
  int local_986;
  undefined2 local_984;
  undefined2 local_982;
  undefined2 local_978;
  undefined2 local_976;
  undefined2 local_974;
  undefined2 local_972;
  undefined2 local_970;
  undefined2 local_96e;
  undefined2 local_96c;
  undefined2 local_96a;
  undefined2 *local_950;
  undefined4 local_94e;
  undefined2 local_94a;
  undefined2 local_948;
  undefined2 local_946;
  undefined2 local_944;
  undefined2 local_942;
  undefined2 local_940;
  int local_93e;
  undefined4 local_93c;
  undefined2 local_938;
  undefined2 local_936;
  undefined2 local_934;
  undefined2 local_932;
  int local_918;
  int local_916;
  undefined2 auStack_914 [420];
  undefined2 local_5cc [13];
  undefined1 local_5b1;
  undefined1 *local_5ac;
  undefined2 auStack_5aa [420];
  undefined4 local_262;
  undefined2 local_25e;
  undefined2 local_25c;
  undefined4 local_25a;
  undefined2 local_256;
  undefined2 local_254;
  undefined1 local_252;
  undefined1 local_251;
  undefined1 local_250;
  undefined2 local_24c;
  undefined2 local_24a;
  undefined2 local_248 [4];
  undefined2 local_240;
  undefined2 local_23e;
  undefined2 local_23c;
  undefined2 local_23a;
  undefined2 local_232 [4];
  undefined4 local_22a;
  undefined2 local_226;
  undefined2 local_224;
  undefined2 local_21c;
  undefined2 local_21a;
  undefined2 local_218;
  undefined2 local_216;
  undefined4 local_214;
  undefined2 local_206;
  undefined2 local_204;
  undefined2 local_202;
  undefined2 local_200;
  undefined2 local_1fa;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined2 local_1f0;
  undefined2 local_1ee;
  undefined1 local_1ec;
  undefined1 local_1eb;
  undefined1 local_1ea;
  int local_1e6 [211];
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 uStack_3a;
  undefined2 local_38;
  undefined2 auStack_36 [3];
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  int in_stack_0000ffde;
  uint local_1c [3];
  undefined1 *puStack_16;
  uint local_14;
  uint uStack_12;
  int *piStack_10;
  int *piStack_e;
  undefined2 *puStack_c;
  
  uVar5 = CONCAT22(local_bd4,local_bd6);
  uVar11 = 0x22b2;
  FUN_21f2_0ebc();
  local_916 = 200;
  local_a0a = 0;
  local_a1a = 0;
  local_24c = *(undefined2 *)0xa24c;
  local_24a = *(undefined2 *)0xa24e;
  local_5ac = (undefined1 *)0x0;
  local_1e6[1] = 0;
  local_bd2[0] = 0;
  local_94e = 0;
LAB_3ab8_5fd9:
  do {
    do {
      puStack_c = (undefined2 *)*(undefined2 *)0xa62;
      piStack_e = (int *)0x1;
      uStack_12 = 0xb6d;
      piStack_10 = (int *)uVar11;
      FUN_4375_7d34();
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xb88;
      func_0x000299d1();
      piStack_10 = local_9ea;
      uStack_12 = (uint)*(byte *)0x565a;
      local_14 = (uint)*(byte *)0x5659;
      puStack_16 = (undefined1 *)0x0;
      local_1c[2] = 0x22b2;
      local_1c[1] = 0xba0;
      FUN_3ab8_59de();
      *(undefined2 *)0xc2c = 1;
      *(undefined2 *)0xc20 = 0x14;
      puStack_c = &local_a22;
      piStack_e = local_9ea;
      piStack_10 = (int *)local_5ac;
      uStack_12 = 0x22b2;
      uVar11 = 0x1bb4;
      local_14 = 0xbcc;
      local_918 = FUN_1def_0904();
      *(undefined2 *)0xc1a = 0;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xc2c = 0;
      if ((*(int *)0x158 != 0) || (local_918 == 0x14)) {
        return;
      }
      if ((local_918 == 1) && (*(char *)0x5659 = *(char *)0x5659 + '\x01', 3 < *(byte *)0x5659)) {
        *(undefined1 *)0x5659 = 0;
      }
      if (local_918 == -1) {
        if (local_5ac == (undefined1 *)0x1) goto LAB_3ab8_6096;
        goto LAB_3ab8_6366;
      }
      local_94e._2_2_ = 0;
      local_94e._0_2_ = 0;
      local_94e = 0;
    } while ((local_918 != 0) || (local_94e = 0, local_950 == (undefined2 *)0x0));
    if ((local_950 == (undefined2 *)0x2) && (*(int *)0xc1e == 2)) {
      *(undefined2 *)0xc20 = 0x14;
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xc85;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xc8e;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xc93;
      func_0x00029d78();
      local_1c[2] = 0x22b2;
      local_1c[1] = 0xc9d;
      func_0x000299d1();
      local_1c[2] = 0x22b2;
      uVar11 = 0x11f2;
      local_1c[1] = 0xca2;
      local_94e = FUN_13bf_39a0();
      *(undefined2 *)0xc20 = 0;
      if (local_94e < 0) goto LAB_3ab8_613a;
      goto LAB_3ab8_5fd9;
    }
    puStack_c = local_950;
    piStack_e = (int *)0x1bb4;
    uVar11 = 0x11f2;
    piStack_10 = (int *)0xe69;
    iVar7 = func_0x00015409();
    if (iVar7 != 0) {
LAB_3ab8_613a:
      local_a0a = local_94e;
      if (local_94e < 0) {
        puStack_c = (undefined2 *)0x11f2;
        piStack_e = (int *)0xcdc;
        puVar14 = (undefined2 *)func_0x00000271();
        puVar10 = (undefined2 *)puVar14;
        puVar6 = &local_938;
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar6;
          puVar6 = puVar6 + 1;
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = *puVar2;
        }
        local_a22 = local_938;
        local_a20 = local_936;
        local_a2e = local_934;
        local_a2c = local_932;
      }
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029983();
      local_a0e = local_a2e;
      local_a0c = local_a2c;
      local_984 = local_a2e;
      local_982 = local_a2c;
      local_5ac = (undefined1 *)0x0;
LAB_3ab8_61c8:
      do {
        local_a1a._2_2_ = 0;
        local_a1a._0_2_ = 0;
        local_1fa = 10000;
        local_1f8._2_2_ = 0;
        local_1f8._0_2_ = 0;
        local_1f4._2_2_ = 0;
        local_1f4._0_2_ = 0;
        local_1ee = 0;
        local_1f0 = 0;
        local_1ea = *(undefined1 *)0xb310;
        local_1ec = *(undefined1 *)0xa6c;
        puVar6 = local_5cc;
        puVar10 = &local_206;
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar14 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar2 = *puVar14;
        }
        func_0x000297e6();
        func_0x00029b85();
        func_0x00029983();
        puStack_c = (undefined2 *)*(undefined2 *)0xa62;
        piStack_e = (int *)0x1;
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xdba;
        FUN_4375_7d34();
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xdd5;
        func_0x000299d1();
        piStack_10 = local_9ea;
        uStack_12 = (uint)*(byte *)0x565a;
        local_14 = (uint)*(byte *)0x5659;
        puStack_16 = local_5ac;
        local_1c[2] = 0x22b2;
        local_1c[1] = 0xdec;
        FUN_3ab8_59de();
        if (local_916 < (int)local_5ac) {
          puStack_c = (undefined2 *)0x2;
          piStack_e = (int *)0x11;
          piStack_10 = (int *)0x62c;
          uStack_12 = 0x22b2;
          local_14 = 0xe12;
          FUN_1000_02b5();
        }
        func_0x0000c340();
        puStack_c = (undefined2 *)0xe24;
        func_0x00012276();
        uVar11 = 0xdef;
        func_0x00010526();
        local_a12 = *(undefined2 *)0xa250;
        local_a10 = *(undefined2 *)0xa252;
LAB_3ab8_62b9:
        if ((*(char *)0x5659 == '\0') || ((0 < (int)local_5ac && (*(char *)0x565a != '\0')))) {
          *(undefined2 *)0xc20 = 0x14;
        }
        else {
          *(undefined2 *)0xc20 = 1;
        }
        *(undefined2 *)0xa4a = 1;
        *(undefined2 *)0xa48 = 2;
        puStack_c = &local_a22;
        piStack_e = local_1e6;
        piStack_10 = (int *)&stack0xffde;
        local_14 = 0xea5;
        uStack_12 = uVar11;
        local_9fe = func_0x00006608();
        *(undefined2 *)0xc20 = 0;
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xa4a = 0;
        *(undefined2 *)0xa48 = 0;
        if (*(int *)0x158 != 0) {
          FUN_1885_2ec3();
          return;
        }
        if (local_9fe != 0xffff) {
          if (local_9fe == 99) {
            local_a12 = *(undefined2 *)0xa250;
            local_a10 = *(undefined2 *)0xa252;
            goto LAB_3ab8_61c8;
          }
          if (((local_950 != (undefined2 *)0x0) && (0x114 < in_stack_0000ffde)) &&
             (local_1e6[0] < *(int *)0xa5e)) {
            local_986 = (in_stack_0000ffde + -0x114) / 0x48;
            local_9fe = local_986 + 0x31;
          }
          if (local_9fe == 0x31) {
            func_0x00013e19();
            FUN_1885_2ec3();
            local_a12 = *(undefined2 *)0xa194;
            local_a10 = *(undefined2 *)0xa196;
            *(char *)0x5659 = *(char *)0x5659 + '\x01';
            if (3 < *(byte *)0x5659) {
              *(undefined1 *)0x5659 = 0;
            }
            goto LAB_3ab8_61c8;
          }
          if (local_9fe == 0x32) {
            func_0x00013e19();
            FUN_1885_2ec3();
            local_a12 = *(undefined2 *)0xa194;
            local_a10 = *(undefined2 *)0xa196;
            *(char *)0x565a = *(char *)0x565a + '\x01';
            if (1 < *(byte *)0x565a) {
              *(undefined1 *)0x565a = 0;
            }
            goto LAB_3ab8_61c8;
          }
          uVar12 = local_9fe < 0x33;
          if ((local_9fe == 0x33) ||
             ((local_950 != (undefined2 *)0x0 && (uVar12 = local_9fe < 0x34, local_9fe == 0x34)))) {
            func_0x00013e19();
            FUN_1885_2ec3();
            local_a12 = *(undefined2 *)0xa194;
            local_a10 = *(undefined2 *)0xa196;
            puStack_c = (undefined2 *)0x10d9;
            FUN_3ab8_5b7b();
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar12) {
              uVar11 = *(undefined2 *)0xa15a;
              *(undefined2 *)0xff2 = *(undefined2 *)0xa158;
              *(undefined2 *)0xff4 = uVar11;
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar12) {
              uVar11 = *(undefined2 *)0xa202;
              *(undefined2 *)0xff2 = *(undefined2 *)0xa200;
              *(undefined2 *)0xff4 = uVar11;
            }
            if (*(int *)0x158 != 0) {
              return;
            }
            goto LAB_3ab8_61c8;
          }
          local_93e = 0;
          local_9fc = 0;
          local_a1a._2_2_ = 0;
          local_a1a._0_2_ = 0;
          local_a1a = 0;
          if ((local_9fe != 0x34) && ((local_950 == (undefined2 *)0x0 || (local_9fe != 0x35)))) {
            if (local_950 == (undefined2 *)0x0) {
              uVar12 = 1;
              local_a1a = 0;
            }
            else if (local_9fe == 100) {
              func_0x00013e19();
              FUN_1885_2ec3();
              local_a12 = *(undefined2 *)0xa194;
              local_a10 = *(undefined2 *)0xa196;
              if (local_916 < (int)local_5ac) goto LAB_3ab8_61c8;
              local_a1a._2_2_ = 0;
              local_a1a._0_2_ = 0;
              if (((local_950 == (undefined2 *)0x2) && (*(int *)0xc1e == 2)) &&
                 ((*(char *)0x5659 == '\0' || ((0 < (int)local_5ac && (*(char *)0x565a != '\0'))))))
              {
                *(undefined2 *)0xc20 = 0x14;
                func_0x000297e6();
                func_0x00029d78();
                piStack_10 = (int *)0x22b2;
                uStack_12 = 0x1216;
                func_0x000299d1();
                piStack_10 = (int *)0x22b2;
                uStack_12 = 0x121f;
                func_0x000297e6();
                piStack_10 = (int *)0x22b2;
                uStack_12 = 0x1224;
                func_0x00029d78();
                local_1c[2] = 0x22b2;
                local_1c[1] = 0x122e;
                func_0x000299d1();
                local_1c[2] = 0x22b2;
                local_1c[1] = 0x1233;
                local_a1a = FUN_13bf_39a0();
                *(undefined2 *)0xc20 = 0;
                if (-1 < local_a1a) goto LAB_3ab8_61c8;
                uVar12 = (int)((ulong)local_a1a >> 0x10) + (uint)((int)local_a1a != 0) == 0;
                puStack_c = (undefined2 *)0x11f2;
                piStack_e = (int *)0x1259;
                puVar14 = (undefined2 *)func_0x00000271();
                puVar10 = (undefined2 *)puVar14;
                puVar6 = &local_970;
                for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                  puVar3 = puVar6;
                  puVar6 = puVar6 + 1;
                  puVar2 = puVar10;
                  puVar10 = puVar10 + 1;
                  *puVar3 = *puVar2;
                }
              }
              else {
                puStack_c = local_950;
                piStack_e = (int *)0x1b6e;
                piStack_10 = (int *)0x1281;
                iVar7 = func_0x00015409();
                uVar12 = 0;
                if (iVar7 == 0) goto LAB_3ab8_61c8;
              }
              local_93e = 1;
            }
            else {
              uVar12 = 0;
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar12) {
              func_0x000297e6();
              func_0x000297e6();
              uVar11 = 0x22b2;
              FUN_28b3_1181();
              if (((bool)uVar12) && (local_93e == 0)) goto LAB_3ab8_62b9;
            }
            local_a12 = local_a22;
            local_a10 = local_a20;
            local_a16 = local_a2e;
            local_a14 = local_a2c;
            if ((local_1e6[0] < 0x11) && (local_93e == 0)) {
              func_0x00013e19();
              FUN_1885_2ec3();
              puStack_c = (undefined2 *)0x1315;
              func_0x000297e6();
              puStack_c = (undefined2 *)0x131a;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              local_14 = 0x1324;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              local_14 = 0x132d;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              local_14 = 0x1332;
              func_0x00029d78();
              local_1c[1] = 0x22b2;
              local_1c[0] = 0x133c;
              func_0x000299d1();
              local_1c[1] = 0x22b2;
              local_1c[0] = 0x1345;
              func_0x000297e6();
              local_1c[1] = 0x22b2;
              local_1c[0] = 0x134a;
              func_0x00029d78();
              uStack_24 = 0x1354;
              func_0x000299d1();
LAB_3ab8_67d8:
              uStack_24 = 0x135d;
              func_0x000297e6();
              in_stack_0000ffde = 0x22b2;
              uStack_24 = 0x1362;
              func_0x00029d78();
              local_2a = 0x22b2;
              func_0x000299d1();
              local_2a = 0x22b2;
              uVar11 = 0x1bb4;
              func_0x0001e18f();
              goto LAB_3ab8_62b9;
            }
            local_a1e._0_2_ = local_a22;
            local_a1e._2_2_ = local_a20;
            local_a2a = local_a2e;
            local_a28 = local_a2c;
            if ((int)local_5ac < 1) {
              if (local_a0a < 0) {
                local_a02 = CONCAT22(local_936,local_938);
                local_a0e = local_934;
                local_a0c = local_932;
              }
              if (local_a1a < 0) {
                local_a1e._0_2_ = local_970;
                local_a1e._2_2_ = local_96e;
                local_a2a = local_96c;
                local_a28 = local_96a;
              }
              puStack_c = (undefined2 *)0x22b2;
              piStack_e = (int *)0x1a2d;
              func_0x000297e6();
              puStack_c = (undefined2 *)0x22b2;
              piStack_e = (int *)0x1a32;
              func_0x00029d78();
              local_14 = 0x22b2;
              puStack_16 = (undefined1 *)0x1a3c;
              func_0x000299d1();
              local_14 = 0x22b2;
              puStack_16 = (undefined1 *)0x1a45;
              func_0x000297e6();
              local_14 = 0x22b2;
              puStack_16 = (undefined1 *)0x1a4a;
              func_0x00029d78();
              local_1c[0] = 0x22b2;
              func_0x000299d1();
              local_1c[0] = (uint)*(byte *)0x5659;
              FUN_3ab8_5c0f();
              if (local_a0a < 0) {
                local_a02._0_2_ = (undefined2)local_a1e;
                local_a02._2_2_ = local_a1e._2_2_;
                local_a0e = local_a2a;
                local_a0c = local_a28;
                puVar10 = &local_2a;
                puVar6 = &local_938;
                for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                  puVar2 = puVar10;
                  puVar10 = puVar10 + 1;
                  puVar14 = puVar6;
                  puVar6 = puVar6 + 1;
                  *puVar2 = *puVar14;
                }
                local_2e = 0x1aa7;
                iVar7 = func_0x0001fdaf();
                if (iVar7 == 0) goto LAB_3ab8_61c8;
              }
              if (local_a1a < 0) {
                local_a1e = local_a02;
                local_a2a = local_a0e;
                local_a28 = local_a0c;
                puVar10 = &local_2a;
                puVar6 = &local_970;
                for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                  puVar2 = puVar10;
                  puVar10 = puVar10 + 1;
                  puVar14 = puVar6;
                  puVar6 = puVar6 + 1;
                  *puVar2 = *puVar14;
                }
                local_2e = 0x1af7;
                iVar7 = func_0x0001fdaf();
                if (iVar7 == 0) goto LAB_3ab8_61c8;
              }
LAB_3ab8_6f81:
              local_9fc = 0;
              uVar12 = 0;
              if (0 < (int)local_5ac) {
                func_0x00029834();
                func_0x000297e6();
                func_0x00029d78();
                FUN_28b3_1181();
                if ((bool)uVar12) {
                  local_a02 = local_22a;
                  local_a0e = local_226;
                  local_a0c = local_224;
                  puVar6 = (undefined2 *)&stack0xffe0;
                  puVar10 = local_232;
                  for (iVar7 = 0xb; uVar12 = 1, iVar7 != 0; iVar7 = iVar7 + -1) {
                    puVar2 = puVar6;
                    puVar6 = puVar6 + 1;
                    puVar14 = puVar10;
                    puVar10 = puVar10 + 1;
                    *puVar2 = *puVar14;
                  }
                }
                else {
                  func_0x000297e6();
                  func_0x00029d78();
                  piStack_10 = (int *)0x22b2;
                  uStack_12 = 0x1bd6;
                  func_0x000299d1();
                  piStack_10 = (int *)0x22b2;
                  uStack_12 = 0x1bdf;
                  func_0x000297e6();
                  piStack_10 = (int *)0x22b2;
                  uStack_12 = 0x1be4;
                  func_0x00029d78();
                  local_1c[2] = 0x22b2;
                  local_1c[1] = 0x1bee;
                  func_0x000299d1();
                  local_1c[2] = 0x22b2;
                  local_1c[1] = 0x1bf7;
                  func_0x000297e6();
                  local_1c[2] = 0x22b2;
                  local_1c[1] = 0x1bfc;
                  func_0x00029d78();
                  func_0x000299d1();
                  func_0x000297e6();
                  in_stack_0000ffde = 0x1c14;
                  func_0x00029d78();
                  local_2a = 0x1c1e;
                  func_0x000299d1();
                  local_2a = 0x1c23;
                  iVar7 = FUN_1def_043a();
                  if (iVar7 == 0) goto LAB_3ab8_61c8;
                  puStack_c = (undefined2 *)*(undefined2 *)0xa17a;
                  piStack_e = (int *)*(undefined2 *)0xa178;
                  piStack_10 = (int *)0x1bb4;
                  uStack_12 = 0x1c46;
                  func_0x000297e6();
                  local_1c[2] = 0x22b2;
                  local_1c[1] = 0x1c50;
                  func_0x000299d1();
                  local_1c[2] = 0;
                  local_1c[1] = 0x22b2;
                  local_1c[0] = 0x1c58;
                  puVar6 = (undefined2 *)FUN_1def_05d1();
                  local_946 = *puVar6;
                  local_944 = puVar6[1];
                  func_0x000297e6();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  puStack_c = (undefined2 *)*(undefined2 *)0xa17a;
                  piStack_e = (int *)*(undefined2 *)0xa178;
                  piStack_10 = (int *)0x22b2;
                  uStack_12 = 0x1c9c;
                  func_0x000297e6();
                  local_1c[2] = 0x22b2;
                  local_1c[1] = 0x1ca6;
                  func_0x000299d1();
                  local_1c[2] = 0;
                  local_1c[1] = 0x22b2;
                  local_1c[0] = 0x1cae;
                  func_0x0001e558();
                  func_0x000297e6();
                  func_0x0002996b();
                  func_0x00029983();
                  puStack_c = (undefined2 *)*(undefined2 *)0xa26e;
                  piStack_e = (int *)*(undefined2 *)0xa26c;
                  piStack_10 = (int *)0x22b2;
                  uStack_12 = 0x1ce2;
                  func_0x000297e6();
                  local_1c[2] = 0x22b2;
                  local_1c[1] = 0x1cec;
                  func_0x000299d1();
                  local_1c[2] = 0;
                  local_1c[1] = 0x22b2;
                  local_1c[0] = 0x1cf4;
                  puVar6 = (undefined2 *)FUN_1def_05d1();
                  local_30 = *puVar6;
                  local_2e = puVar6[1];
                  puStack_c = (undefined2 *)*(int *)0xa26e;
                  piStack_e = (int *)*(int *)0xa26c;
                  piStack_10 = (int *)0x1bb4;
                  uStack_12 = 0x1d1d;
                  func_0x000297e6();
                  local_1c[2] = 0x22b2;
                  local_1c[1] = 0x1d27;
                  func_0x000299d1();
                  local_1c[2] = 0;
                  local_1c[1] = 0x22b2;
                  local_1c[0] = 0x1d2f;
                  iVar7 = func_0x0001e558();
                  uVar12 = (undefined1 *)0xffed < local_1c + 2;
                  uVar13 = &stack0x0000 == (undefined1 *)0x6;
                  local_2a = *(undefined2 *)(iVar7 + 2);
                  func_0x000297e6();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029983();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  func_0x000297e6();
                  func_0x00029b6d();
                  func_0x000297e6();
                  func_0x00029b6d();
                  FUN_28b3_117c();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  func_0x00029834();
                  func_0x000297e6();
                  func_0x00029d78();
                  FUN_28b3_1181();
                  if (!(bool)uVar12 && !(bool)uVar13) {
                    func_0x000297e6();
                    func_0x00029d78();
                    piStack_10 = (int *)0x22b2;
                    uStack_12 = 0x1e13;
                    func_0x000299d1();
                    piStack_10 = (int *)0x22b2;
                    uStack_12 = 0x1e18;
                    FUN_28b3_1582();
                    func_0x00029834();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b85();
                    func_0x0002996b();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    func_0x00029b85();
                    func_0x0002996b();
                    func_0x00029b6d();
                    func_0x00029bb5();
                    func_0x0002996b();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029bb5();
                    func_0x0002996b();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029bb5();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029bb5();
                    func_0x00029983();
                    puVar10 = (undefined2 *)&stack0xffe0;
                    puVar6 = &local_21c;
                    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
                      puVar2 = puVar10;
                      puVar10 = puVar10 + 1;
                      puVar14 = puVar6;
                      puVar6 = puVar6 + 1;
                      *puVar2 = *puVar14;
                    }
                    puVar10 = auStack_36;
                    puVar6 = &local_38;
                    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
                      puVar2 = puVar10;
                      puVar10 = puVar10 + 1;
                      puVar14 = puVar6;
                      puVar6 = puVar6 + 1;
                      *puVar2 = *puVar14;
                    }
                    local_38 = 0x22b2;
                    uStack_3a = 0x1f4c;
                    iVar7 = FUN_1def_1921();
                    uVar12 = 0;
                    uVar13 = iVar7 == 0;
                    in_stack_0000ffde = unaff_SS;
                    if (!(bool)uVar13) {
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x0002996b();
                      FUN_28b3_0ee9();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x0002996b();
                      func_0x00029b6d();
                      func_0x000297e6();
                      func_0x00029b6d();
                      FUN_28b3_117c();
                      func_0x0002996b();
                      FUN_28b3_0ee9();
                      func_0x00029834();
                      func_0x000297e6();
                      func_0x00029d78();
                      FUN_28b3_1181();
                      if (!(bool)uVar12 && !(bool)uVar13) {
                        func_0x000297e6();
                        func_0x00029d78();
                        piStack_10 = (int *)0x22b2;
                        uStack_12 = 0x1ff7;
                        func_0x000299d1();
                        piStack_10 = (int *)0x22b2;
                        uStack_12 = 0x1ffc;
                        FUN_28b3_1582();
                        func_0x00029834();
                        func_0x00029983();
                        local_206 = 0x200f;
                        local_204 = 0x22b2;
                        local_202 = local_40;
                        local_200 = local_3e;
                        func_0x000297e6();
                        func_0x00029d78();
                        piStack_10 = (int *)0x22b2;
                        uStack_12 = 0x2053;
                        func_0x000299d1();
                        piStack_10 = (int *)0x22b2;
                        uStack_12 = 0x205c;
                        func_0x000297e6();
                        piStack_10 = (int *)0x22b2;
                        uStack_12 = 0x2061;
                        func_0x00029d78();
                        local_1c[2] = 0x22b2;
                        local_1c[1] = 0x206b;
                        func_0x000299d1();
                        local_1c[2] = 0x22b2;
                        local_1c[1] = 0x2073;
                        func_0x000297e6();
                        local_1c[2] = 0x22b2;
                        local_1c[1] = 0x2078;
                        func_0x00029d78();
                        func_0x000299d1();
                        func_0x000297e6();
                        func_0x00029d78();
                        local_2a = 0x2099;
                        func_0x000299d1();
                        local_2a = 0x209e;
                        uVar15 = FUN_1000_0718();
                        local_1f8 = uVar15;
                        func_0x000297e6();
                        func_0x00029d78();
                        piStack_10 = (int *)0x22b2;
                        uStack_12 = 0x20c1;
                        func_0x000299d1();
                        piStack_10 = (int *)0x22b2;
                        uStack_12 = 0x20ca;
                        func_0x000297e6();
                        piStack_10 = (int *)0x22b2;
                        uStack_12 = 0x20cf;
                        func_0x00029d78();
                        local_1c[2] = 0x22b2;
                        local_1c[1] = 0x20d9;
                        func_0x000299d1();
                        local_1c[2] = 0x22b2;
                        local_1c[1] = 0x20e1;
                        func_0x000297e6();
                        local_1c[2] = 0x22b2;
                        local_1c[1] = 0x20e6;
                        func_0x00029d78();
                        func_0x000299d1();
                        func_0x000297e6();
                        func_0x00029d78();
                        local_2a = 0x2107;
                        func_0x000299d1();
                        local_2a = 0x210c;
                        uVar15 = FUN_1000_0718();
                        local_1f4 = uVar15;
                        func_0x00029834();
                        func_0x000297e6();
                        func_0x00029d78();
                        piStack_10 = (int *)0x22b2;
                        uStack_12 = 0x2138;
                        func_0x000299d1();
                        piStack_10 = (int *)0x22b2;
                        uStack_12 = 0x2141;
                        func_0x000297e6();
                        piStack_10 = (int *)0x22b2;
                        uStack_12 = 0x2146;
                        func_0x00029d78();
                        local_1c[2] = 0x22b2;
                        local_1c[1] = 0x2150;
                        func_0x000299d1();
                        local_1c[2] = 1;
                        local_1c[1] = 0x22b2;
                        local_1c[0] = 0x2159;
                        func_0x0001e558();
                        uVar12 = (undefined1 *)0xffed < local_1c + 2;
                        func_0x000297e6();
                        func_0x0002996b();
                        func_0x00029ae7();
                        func_0x00029d78();
                        FUN_28b3_1181();
                        in_stack_0000ffde = 0x20fd;
                        if (!(bool)uVar12) {
                          func_0x000297e6();
                          func_0x000297e6();
                          FUN_28b3_1181();
                          uVar15 = local_1f8;
                          if ((bool)uVar12) {
                            uVar15 = local_1f4;
                            local_1f4 = local_1f8;
                            uVar5 = local_1f8;
                          }
                          local_9fc = 1;
                          local_a0e = local_9f2;
                          local_a0c = local_9f0;
                          local_1f8 = uVar15;
                          local_a02 = CONCAT22(local_976,local_978);
                        }
                      }
                    }
                  }
                }
              }
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029ae7();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar12) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                FUN_28b3_1181();
                if ((bool)uVar12) goto LAB_3ab8_61c8;
              }
              if (local_93e != 0) {
                func_0x00013e19();
                FUN_1885_2ec3();
                local_251 = *(undefined1 *)0xa6a;
                local_252 = *(undefined1 *)0xa6c;
                local_250 = *(undefined1 *)0xb310;
                local_25e = local_a0e;
                local_25c = local_a0c;
                local_256 = local_a2a;
                local_254 = local_a28;
                local_1eb = local_251;
                local_25a = local_a1e;
                local_262 = local_a02;
                goto LAB_3ab8_76df;
              }
              func_0x00013e19();
              FUN_1885_2ec3();
              puStack_c = (undefined2 *)0x22e8;
              func_0x000297e6();
              puStack_c = (undefined2 *)0x22ed;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              local_14 = 0x22f7;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              local_14 = 0x2300;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              local_14 = 0x2305;
              func_0x00029d78();
              local_1c[1] = 0x22b2;
              local_1c[0] = 0x230f;
              func_0x000299d1();
              local_1c[1] = 0x22b2;
              local_1c[0] = 0x2318;
              func_0x000297e6();
              local_1c[1] = 0x22b2;
              local_1c[0] = 0x231d;
              func_0x00029d78();
              uStack_24 = 8999;
              func_0x000299d1();
              uStack_24 = 0x2330;
              func_0x000297e6();
              in_stack_0000ffde = 0x22b2;
              uStack_24 = 0x2335;
              func_0x00029d78();
              local_2a = 0x22b2;
              func_0x000299d1();
              local_2a = 0x22b2;
              uVar11 = 0x1bb4;
              func_0x0001e18f();
              if (local_9fc != 0) {
                local_1eb = 9;
                puVar10 = &uStack_26;
                puVar6 = &local_206;
                for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                  puVar2 = puVar10;
                  puVar10 = puVar10 + 1;
                  puVar14 = puVar6;
                  puVar6 = puVar6 + 1;
                  *puVar2 = *puVar14;
                }
                uVar11 = 0x11f2;
                local_2a = 0x2368;
                func_0x00013e46();
              }
              if (0 < (int)local_5ac) {
                local_5b1 = 9;
                puVar10 = &uStack_26;
                puVar6 = local_5cc;
                for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                  puVar2 = puVar10;
                  puVar10 = puVar10 + 1;
                  puVar14 = puVar6;
                  puVar6 = puVar6 + 1;
                  *puVar2 = *puVar14;
                }
                local_2a = 0x238f;
                func_0x00013e46();
                puStack_c = (undefined2 *)0x239e;
                func_0x000297e6();
                puStack_c = (undefined2 *)0x23a3;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                local_14 = 0x23ad;
                func_0x000299d1();
                uStack_12 = 0x22b2;
                local_14 = 0x23b5;
                func_0x000297e6();
                uStack_12 = 0x22b2;
                local_14 = 0x23ba;
                func_0x00029d78();
                local_1c[1] = 0x22b2;
                local_1c[0] = 0x23c4;
                func_0x000299d1();
                local_1c[1] = 0x22b2;
                local_1c[0] = 0x23cc;
                func_0x000297e6();
                local_1c[1] = 0x22b2;
                local_1c[0] = 0x23d1;
                func_0x00029d78();
                uStack_24 = 0x23db;
                func_0x000299d1();
                goto LAB_3ab8_67d8;
              }
              goto LAB_3ab8_62b9;
            }
            puVar6 = (undefined2 *)&stack0xffe0;
            puVar10 = local_248;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              puVar14 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar2 = *puVar14;
            }
            puVar10 = &local_21c;
            puVar6 = (undefined2 *)&stack0xffe0;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar2 = puVar10;
              puVar10 = puVar10 + 1;
              puVar14 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar14;
            }
            puVar9 = &local_262;
            puVar6 = &local_21c;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar4 = puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 2);
              puVar14 = puVar6;
              puVar6 = puVar6 + 1;
              *(undefined2 *)puVar4 = *puVar14;
            }
            puVar6 = &local_38;
            puVar9 = &local_262;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar14 = puVar6;
              puVar6 = puVar6 + 1;
              puVar4 = puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 2);
              *puVar14 = *(undefined2 *)puVar4;
            }
            puVar10 = local_232;
            puVar6 = &local_38;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar2 = puVar10;
              puVar10 = puVar10 + 1;
              puVar14 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar14;
            }
            func_0x000297e6();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029983();
            if ((*(char *)0x5659 == '\0') || (*(char *)0x565a == '\0')) {
              local_942 = local_a0e;
              local_940 = local_a0c;
              puStack_c = (undefined2 *)0x22b2;
              piStack_e = (int *)0x15ee;
              func_0x000297e6();
              puStack_c = (undefined2 *)0x22b2;
              piStack_e = (int *)0x15f3;
              func_0x00029d78();
              local_14 = 0x22b2;
              puStack_16 = (undefined1 *)0x15fd;
              func_0x000299d1();
              local_14 = 0x22b2;
              puStack_16 = (undefined1 *)0x1606;
              func_0x000297e6();
              local_14 = 0x22b2;
              puStack_16 = (undefined1 *)0x160f;
              func_0x0002996b();
              local_14 = 0x22b2;
              puStack_16 = (undefined1 *)0x1614;
              func_0x00029d78();
              local_1c[0] = 0x22b2;
              func_0x000299d1();
              local_1c[0] = (uint)*(byte *)0x5659;
              FUN_3ab8_5c0f();
              if (local_a1a < 0) {
                local_a1e = local_a02;
                local_a2a = local_a0e;
                local_a28 = local_a0c;
                puVar10 = &local_2a;
                puVar6 = &local_970;
                for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                  puVar2 = puVar10;
                  puVar10 = puVar10 + 1;
                  puVar14 = puVar6;
                  puVar6 = puVar6 + 1;
                  *puVar2 = *puVar14;
                }
                local_2e = 0x1671;
                iVar7 = func_0x0001fdaf();
                if (iVar7 == 0) goto LAB_3ab8_61c8;
              }
            }
            else {
              func_0x000297e6();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029983();
              if (local_a1a < 0) {
                local_a1e._0_2_ = local_970;
                local_a1e._2_2_ = local_96e;
                local_a2a = local_96c;
                local_a28 = local_96a;
              }
              puStack_c = (undefined2 *)0x22b2;
              piStack_e = (int *)0x149e;
              func_0x000297e6();
              puStack_c = (undefined2 *)0x22b2;
              piStack_e = (int *)0x14a3;
              func_0x00029d78();
              local_14 = 0x22b2;
              puStack_16 = (undefined1 *)0x14ad;
              func_0x000299d1();
              local_14 = 0x22b2;
              puStack_16 = (undefined1 *)0x14b6;
              func_0x000297e6();
              local_14 = 0x22b2;
              puStack_16 = (undefined1 *)0x14bb;
              func_0x00029d78();
              local_1c[0] = 0x22b2;
              func_0x000299d1();
              local_1c[0] = (uint)*(byte *)0x5659;
              FUN_3ab8_5c0f();
              local_21c = (undefined2)local_a1e;
              local_21a = local_a1e._2_2_;
              local_218 = local_a2a;
              local_216 = local_a28;
              local_93c = uVar5;
              local_214 = uVar5;
              local_942 = local_bda;
              local_940 = local_bd8;
              puVar10 = (undefined2 *)&stack0xffe0;
              puVar6 = &local_21c;
              for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
                puVar2 = puVar10;
                puVar10 = puVar10 + 1;
                puVar14 = puVar6;
                puVar6 = puVar6 + 1;
                *puVar2 = *puVar14;
              }
              puVar10 = auStack_36;
              puVar6 = &local_38;
              for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
                puVar2 = puVar10;
                puVar10 = puVar10 + 1;
                puVar14 = puVar6;
                puVar6 = puVar6 + 1;
                *puVar2 = *puVar14;
              }
              local_38 = 0x22b2;
              uStack_3a = 0x154e;
              iVar7 = FUN_1def_1921();
              if (iVar7 != 0) {
                if (local_a1a < 0) {
                  local_a1e = uVar5;
                  local_a2a = local_bda;
                  local_a28 = local_bd8;
                  puVar10 = &local_2a;
                  puVar6 = &local_970;
                  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                    puVar2 = puVar10;
                    puVar10 = puVar10 + 1;
                    puVar14 = puVar6;
                    puVar6 = puVar6 + 1;
                    *puVar2 = *puVar14;
                  }
                  local_2e = 0x159e;
                  iVar7 = func_0x0001fdaf();
                  in_stack_0000ffde = unaff_SS;
                  if (iVar7 == 0) goto LAB_3ab8_61c8;
                }
                local_226 = local_bda;
                local_224 = local_bd8;
                local_22a = uVar5;
              }
            }
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x1690;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x1699;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x169e;
            func_0x00029d78();
            local_1c[2] = 0x22b2;
            local_1c[1] = 0x16a8;
            func_0x000299d1();
            local_1c[2] = 0x22b2;
            local_1c[1] = 0x16b1;
            func_0x000297e6();
            local_1c[2] = 0x22b2;
            local_1c[1] = 0x16b6;
            func_0x00029d78();
            func_0x000299d1();
            func_0x000297e6();
            in_stack_0000ffde = 0x16ce;
            func_0x00029d78();
            local_2a = 0x16d8;
            func_0x000299d1();
            local_2a = 0x16dd;
            iVar7 = FUN_1def_043a();
            if (iVar7 == 0) goto LAB_3ab8_61c8;
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x16ff;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x1708;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x170d;
            func_0x00029d78();
            local_1c[2] = 0x22b2;
            local_1c[1] = 0x1717;
            func_0x000299d1();
            local_1c[2] = 1;
            local_1c[1] = 0x22b2;
            local_1c[0] = 0x1720;
            puVar6 = (undefined2 *)func_0x0001e558();
            local_974 = *puVar6;
            local_972 = puVar6[1];
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x1753;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x175c;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x1761;
            func_0x00029d78();
            local_1c[2] = 0x22b2;
            local_1c[1] = 0x176b;
            func_0x000299d1();
            local_1c[2] = 1;
            local_1c[1] = 0x22b2;
            local_1c[0] = 0x1774;
            func_0x0001e558();
            uVar12 = (undefined1 *)0xffed < local_1c + 2;
            func_0x000297e6();
            func_0x0002996b();
            func_0x00029b55();
            func_0x00029ae7();
            func_0x00029d78();
            FUN_28b3_1181();
            if (!(bool)uVar12) goto LAB_3ab8_6f81;
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x17bc;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x17c5;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x17ca;
            func_0x00029d78();
            local_1c[2] = 0x22b2;
            local_1c[1] = 0x17d4;
            func_0x000299d1();
            local_1c[2] = 1;
            local_1c[1] = 0x22b2;
            local_1c[0] = 0x17dd;
            puVar6 = (undefined2 *)FUN_1def_05d1();
            local_93c._0_2_ = *puVar6;
            local_93c._2_2_ = puVar6[1];
            puVar9 = &local_262;
            puVar6 = local_232;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar4 = puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 2);
              puVar14 = puVar6;
              puVar6 = puVar6 + 1;
              *(undefined2 *)puVar4 = *puVar14;
            }
            puStack_c = (undefined2 *)*(undefined2 *)0xa17a;
            piStack_e = (int *)*(undefined2 *)0xa178;
            piStack_10 = (int *)0x1bb4;
            uStack_12 = 0x1817;
            func_0x000297e6();
            local_1c[2] = 0x22b2;
            local_1c[1] = 0x1821;
            func_0x000299d1();
            local_1c[2] = 0;
            local_1c[1] = 0x22b2;
            local_1c[0] = 0x1829;
            puVar6 = (undefined2 *)FUN_1def_05d1();
            local_25a._0_2_ = *puVar6;
            local_25a._2_2_ = puVar6[1];
            puStack_c = (undefined2 *)*(undefined2 *)0xa17a;
            piStack_e = (int *)*(int *)0xa178;
            piStack_10 = (int *)0x1bb4;
            uStack_12 = 0x1854;
            func_0x000297e6();
            local_1c[2] = 0x22b2;
            local_1c[1] = 0x185e;
            func_0x000299d1();
            local_1c[2] = 0;
            local_1c[1] = 0x22b2;
            local_1c[0] = 0x1866;
            puVar6 = (undefined2 *)func_0x0001e558();
            local_256 = *puVar6;
            local_254 = puVar6[1];
            func_0x00013e19();
            FUN_1885_2ec3();
            puStack_c = (undefined2 *)0x188f;
            func_0x000297e6();
            puStack_c = (undefined2 *)0x1894;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            local_14 = 0x189e;
            func_0x000299d1();
            uStack_12 = 0x22b2;
            local_14 = 0x18a7;
            func_0x000297e6();
            uStack_12 = 0x22b2;
            local_14 = 0x18ac;
            func_0x00029d78();
            local_1c[1] = 0x22b2;
            local_1c[0] = 0x18b6;
            func_0x000299d1();
            local_1c[1] = 0x22b2;
            local_1c[0] = 0x18bf;
            func_0x000297e6();
            local_1c[1] = 0x22b2;
            local_1c[0] = 0x18c4;
            func_0x00029d78();
            uStack_24 = 0x18ce;
            func_0x000299d1();
            uStack_24 = 0x18d7;
            func_0x000297e6();
            in_stack_0000ffde = 0x22b2;
            uStack_24 = 0x18dc;
            func_0x00029d78();
            local_2a = 0x22b2;
            func_0x000299d1();
            local_2a = 0x22b2;
            func_0x0001e18f();
            local_5b1 = 10;
            puVar10 = &uStack_26;
            puVar6 = local_5cc;
            for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar2 = puVar10;
              puVar10 = puVar10 + 1;
              puVar14 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar14;
            }
            local_2a = 0x1908;
            func_0x00013e46();
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029983();
            puVar10 = &uStack_26;
            puVar6 = local_5cc;
            for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar2 = puVar10;
              puVar10 = puVar10 + 1;
              puVar14 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar14;
            }
            local_2a = 0x193b;
            func_0x00013e46();
            uVar12 = (undefined1 *)0xffdf < &uStack_26;
            func_0x00029834();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029ae7();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar12) {
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029ae7();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar12) goto LAB_3ab8_61c8;
            }
            uVar11 = 0x22b2;
            if (local_93e != 0) goto LAB_3ab8_6e23;
            goto LAB_3ab8_62b9;
          }
          func_0x00013e19();
          FUN_1885_2ec3();
          local_a12 = *(undefined2 *)0xa194;
          local_a10 = *(undefined2 *)0xa196;
          local_93e = 10;
          puVar6 = (undefined2 *)&stack0xffe0;
          puVar10 = local_248;
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar14 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar2 = *puVar14;
          }
LAB_3ab8_76df:
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0x2277;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0x2280;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0x2285;
          func_0x00029d78();
          local_1c[2] = 0x22b2;
          local_1c[1] = 0x228f;
          func_0x000299d1();
          local_1c[2] = 0x22b2;
          local_1c[1] = 0x2298;
          func_0x000297e6();
          local_1c[2] = 0x22b2;
          local_1c[1] = 0x229d;
          func_0x00029d78();
          func_0x000299d1();
          func_0x000297e6();
          in_stack_0000ffde = 0x22b5;
          func_0x00029d78();
          local_2a = 0x22bf;
          func_0x000299d1();
          local_2a = 0x22c4;
          iVar7 = FUN_1def_043a();
          if (iVar7 == 0) goto LAB_3ab8_61c8;
          if (0 < (int)local_5ac) {
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x23ff;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x2407;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0x240c;
            func_0x00029d78();
            local_1c[2] = 0x22b2;
            local_1c[1] = 0x2416;
            func_0x000299d1();
            local_1c[2] = 0x22b2;
            local_1c[1] = 0x241e;
            func_0x000297e6();
            local_1c[2] = 0x22b2;
            local_1c[1] = 0x2423;
            func_0x00029d78();
            func_0x000299d1();
            func_0x000297e6();
            in_stack_0000ffde = 0x243a;
            func_0x00029d78();
            local_2a = 0x2444;
            func_0x000299d1();
            local_2a = 0x2449;
            iVar7 = FUN_1def_043a();
            if (iVar7 == 0) goto LAB_3ab8_61c8;
          }
          puStack_c = (undefined2 *)0x245b;
          func_0x0000daa6();
          puVar1 = local_5ac + 1;
          local_5ac = puVar1;
          local_1e6[(int)(puVar1 + 1)] = 0;
          local_bd2[(int)puVar1] = 0;
          if (1 < (int)local_5ac) {
            puVar8 = local_1c;
            puVar6 = (undefined2 *)&stack0xffe0;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar2 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar14;
            }
            iVar7 = FUN_17a6_0cba();
            if (0 < iVar7) {
              local_1e6[(int)(puVar1 + 1)] = 1;
            }
            uVar12 = 0;
            if (local_9fc != 0) {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if (!(bool)uVar12) {
                puVar10 = &uStack_26;
                puVar6 = &local_206;
                for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                  puVar2 = puVar10;
                  puVar10 = puVar10 + 1;
                  puVar14 = puVar6;
                  puVar6 = puVar6 + 1;
                  *puVar2 = *puVar14;
                }
                local_2a = 0x24d9;
                FUN_13bf_01c1();
                local_bd2[(int)local_5ac] = 1;
              }
            }
            uVar11 = local_23e;
            puVar1 = local_5ac;
            auStack_5aa[(int)local_5ac * 2] = local_240;
            auStack_5aa[(int)local_5ac * 2 + 1] = uVar11;
            uVar11 = local_23a;
            auStack_914[(int)local_5ac * 2] = local_23c;
            auStack_914[(int)puVar1 * 2 + 1] = uVar11;
          }
          uVar11 = 0x885;
          func_0x0000abfa();
          if (local_93e < 10) {
            puVar6 = local_232;
            puVar9 = &local_262;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar14 = puVar6;
              puVar6 = puVar6 + 1;
              puVar4 = puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 2);
              *puVar14 = *(undefined2 *)puVar4;
            }
            puVar6 = local_248;
            puVar10 = local_232;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              puVar14 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar2 = *puVar14;
            }
            local_a02 = local_a1e;
            local_a0e = local_a2a;
            local_a0c = local_a28;
            goto LAB_3ab8_61c8;
          }
          break;
        }
        uVar11 = 0x1b6e;
        FUN_1885_2ec3();
        if ((int)local_5ac < 1) break;
        if (local_5ac == (undefined1 *)0x1) {
LAB_3ab8_6096:
          local_a02 = CONCAT22(local_948,local_94a);
          local_a0e = local_984;
          local_a0c = local_982;
        }
        else {
LAB_3ab8_6366:
          piStack_e = (int *)0xef3;
          puStack_c = (undefined2 *)uVar11;
          puVar14 = (undefined2 *)func_0x0000013f();
          puVar10 = (undefined2 *)puVar14;
          puVar6 = local_248;
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar3 = puVar6;
            puVar6 = puVar6 + 1;
            puVar2 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar3 = *puVar2;
          }
          local_240 = auStack_5aa[(int)local_5ac * 2];
          local_23e = auStack_5aa[(int)local_5ac * 2 + 1];
          local_23c = auStack_914[(int)local_5ac * 2];
          local_23a = auStack_914[(int)local_5ac * 2 + 1];
          puVar6 = &local_21c;
          puVar10 = local_248;
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar14 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar2 = *puVar14;
          }
          puVar6 = &local_38;
          puVar10 = &local_21c;
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar14 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar2 = *puVar14;
          }
          puVar9 = &local_262;
          puVar6 = &local_38;
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar4 = puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 2);
            puVar14 = puVar6;
            puVar6 = puVar6 + 1;
            *(undefined2 *)puVar4 = *puVar14;
          }
          puVar6 = local_232;
          puVar9 = &local_262;
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar14 = puVar6;
            puVar6 = puVar6 + 1;
            puVar4 = puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 2);
            *puVar14 = *(undefined2 *)puVar4;
          }
          if (0 < local_1e6[(int)(local_5ac + 1)]) {
            local_a26 = *(undefined2 *)0x148;
            local_a24 = *(undefined2 *)0x14a;
            puStack_c = (undefined2 *)0xf84;
            func_0x0000daa6();
            puStack_c = (undefined2 *)0x885;
            piStack_e = (int *)0xf92;
            func_0x00018779();
          }
          if (0 < local_bd2[(int)local_5ac]) {
            local_a26 = *(undefined2 *)0x14c;
            local_a24 = *(undefined2 *)0x14e;
            puStack_c = (undefined2 *)0xfb8;
            func_0x0000daa6();
            puStack_c = (undefined2 *)0x885;
            piStack_e = (int *)0xfc6;
            FUN_13bf_0327();
          }
          local_1e6[(int)(local_5ac + 1)] = 0;
          local_bd2[(int)local_5ac] = 0;
        }
        local_5ac = local_5ac + -1;
        puStack_c = (undefined2 *)0xfe4;
        func_0x0000daa6();
        func_0x0000abfa();
      } while( true );
    }
  } while( true );
LAB_3ab8_6e23:
  puVar6 = local_232;
  puVar9 = &local_262;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar14 = puVar6;
    puVar6 = puVar6 + 1;
    puVar4 = puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 2);
    *puVar14 = *(undefined2 *)puVar4;
  }
  puVar6 = local_248;
  puVar10 = local_232;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar14 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar2 = *puVar14;
  }
  func_0x00013e19();
  FUN_1885_2ec3();
  goto LAB_3ab8_61c8;
}


