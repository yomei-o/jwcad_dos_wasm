/* Ghidra decompilation of jw26.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  63 bytes, 3 callers */

void __cdecl16far FUN_3ab8_0000(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  uVar2 = *(uint *)0x14c + 4;
  iVar3 = *(int *)0x14e + (uint)(0xfffb < *(uint *)0x14c);
  if ((*(int *)0x142 <= iVar3) && ((*(int *)0x142 < iVar3 || (*(uint *)0x140 < uVar2)))) {
    pcVar1 = (code *)swi(0x3f);
    iVar3 = (*pcVar1)(*(undefined2 *)0x148,*(undefined2 *)0x14a,uVar2,iVar3,*(undefined2 *)0x152,
                      *(undefined2 *)0x150);
    if (iVar3 == -1) {
      FUN_13bf_0a03();
    }
  }
  return;
}



/* 3ab8:0052  FUN_3ab8_0052  93 bytes, 5 callers */

void __cdecl16far FUN_3ab8_0052(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  FUN_10ad_17a6(0x1dc);
  *(undefined2 *)0xc22 = 1;
  FUN_1000_0599(0x11f2,0x12,2);
  if (param_1 == 1) {
    FUN_10ad_17a6(0x25c);
  }
  if (param_1 == 2) {
    FUN_10ad_17a6(0x402);
  }
  if (param_1 == 3) {
    FUN_10ad_17a6(0x5c70);
  }
  return;
}



/* 3ab8:00af  FUN_3ab8_00af  382 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_00af(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 *puVar9;
  undefined2 local_46;
  undefined2 auStack_44 [3];
  undefined1 local_3e [4];
  int local_3a;
  undefined2 local_38 [5];
  undefined2 auStack_2e [10];
  undefined2 uStack_1a;
  undefined2 local_18;
  int iStack_16;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  undefined1 *puStack_e;
  undefined2 *puStack_c;
  
  uVar6 = 0x22b2;
  FUN_21f2_0ebc();
  local_3a = 0;
  if (param_2 < 0) {
    puStack_c = &local_46;
    puStack_e = local_3e;
    iStack_12 = -param_3;
    iStack_10 = -(param_4 + (uint)(param_3 != 0));
    iStack_14 = param_2;
    iStack_16 = param_1;
    local_18 = 0x22b2;
    uVar6 = 0x1bb4;
    uStack_1a = 0xac71;
    local_3a = FUN_1def_2b59();
  }
  if ((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) {
    puStack_e = (undefined1 *)0xac90;
    puStack_c = (undefined2 *)uVar6;
    puVar9 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar9;
    puVar5 = &local_18;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    puStack_c = (undefined2 *)0x0;
    puStack_e = (undefined1 *)0xacad;
    puVar9 = (undefined2 *)func_0x00000271();
    puVar4 = (undefined2 *)puVar9;
    puVar5 = local_38;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    puStack_c = &local_46;
    puStack_e = local_3e;
    puVar4 = auStack_2e;
    puVar5 = local_38;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar9;
    }
    puVar4 = auStack_44;
    puVar5 = &local_18;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar9;
    }
    local_46 = 0;
    local_3a = FUN_1def_2179();
  }
  uVar7 = 0;
  uVar8 = local_3a == 0;
  if (!(bool)uVar8) {
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
  }
  func_0x00029834();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029ae7();
  func_0x00029d78();
  FUN_28b3_1181();
  if ((bool)uVar7 || (bool)uVar8) {
    func_0x00029834();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029ae7();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar7 || (bool)uVar8) {
      return 1;
    }
  }
  return 0;
}



/* 3ab8:022d  FUN_3ab8_022d  511 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_022d(int param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar7;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_38 [5];
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 local_18 [3];
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  
  uVar6 = 0x22b2;
  FUN_21f2_0ebc();
  local_40 = *param_3;
  local_3e = param_3[1];
  local_44 = *param_4;
  local_42 = param_4[1];
  if (param_2 < 0) {
    local_c = 0x22b2;
    uStack_e = 0xadf0;
    puVar7 = (undefined2 *)func_0x00000271();
    puVar5 = (undefined2 *)puVar7;
    puVar3 = local_38;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    puVar5 = &uStack_2a;
    puVar3 = local_38;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar1 = *puVar7;
    }
    uStack_2c = 0;
    uVar6 = 0x1bb4;
    uStack_2e = 0xae1c;
    iVar4 = FUN_1def_1ebf();
    if (iVar4 != 0) goto LAB_3ab8_02b1;
    local_c = 0xae2b;
    FUN_3ab8_0052();
LAB_3ab8_02ac:
    uVar6 = 0;
  }
  else {
LAB_3ab8_02b1:
    if ((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) {
      uStack_e = 0xae50;
      local_c = uVar6;
      puVar7 = (undefined2 *)func_0x0000013f();
      puVar5 = (undefined2 *)puVar7;
      puVar3 = local_18;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      func_0x000297e6();
      func_0x00029d78();
      local_10 = 0x22b2;
      uStack_12 = 0xae79;
      func_0x000299d1();
      local_10 = 0x22b2;
      uStack_12 = 0xae81;
      func_0x000297e6();
      local_10 = 0x22b2;
      uStack_12 = 0xae86;
      func_0x00029d78();
      local_18[0] = 0x22b2;
      uStack_1a = 0xae90;
      func_0x000299d1();
      local_18[0] = 0x22b2;
      uStack_1a = 0xae98;
      func_0x000297e6();
      local_18[0] = 0x22b2;
      uStack_1a = 0xae9d;
      func_0x00029d78();
      uStack_20 = 0x22b2;
      uStack_22 = 0xaea7;
      func_0x000299d1();
      uStack_20 = 0x22b2;
      uStack_22 = 0xaeaf;
      func_0x000297e6();
      uStack_20 = 0x22b2;
      uStack_22 = 0xaeb4;
      func_0x00029d78();
      uStack_28 = 0x22b2;
      uStack_2a = 0xaebe;
      func_0x000299d1();
      uStack_28 = 0x22b2;
      uStack_2a = 0xaec3;
      iVar4 = FUN_1def_043a();
      if (iVar4 == 0) goto LAB_3ab8_02ac;
      local_c = *(undefined2 *)0xa412;
      uStack_e = *(undefined2 *)0xa410;
      local_10 = 0x1bb4;
      uStack_12 = 0xaee5;
      func_0x000297e6();
      local_10 = 0x22b2;
      uStack_12 = 0xaeea;
      func_0x00029d78();
      local_18[0] = 0x22b2;
      uStack_1a = 0xaef4;
      func_0x000299d1();
      local_18[0] = 0x22b2;
      uStack_1a = 0xaefc;
      func_0x000297e6();
      local_18[0] = 0x22b2;
      uStack_1a = 0xaf01;
      func_0x00029d78();
      uStack_20 = 0x22b2;
      uStack_22 = 0xaf0b;
      func_0x000299d1();
      uStack_20 = 1;
      uStack_22 = 0x22b2;
      uStack_24 = 0xaf14;
      FUN_1def_05d1();
      local_10 = 0x1bb4;
      uStack_12 = 0xaf1e;
      func_0x000297e6();
      local_10 = 0x22b2;
      uStack_12 = 0xaf26;
      func_0x0002996b();
      local_10 = 0x22b2;
      uStack_12 = 0xaf2b;
      func_0x00029d78();
      local_18[0] = 0x22b2;
      uStack_1a = 0xaf35;
      func_0x000299d1();
      local_18[0] = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xaf3d;
      puVar3 = (undefined2 *)FUN_1def_05d1();
      local_40 = *puVar3;
      local_3e = puVar3[1];
      local_c = *(undefined2 *)0xa412;
      uStack_e = *(undefined2 *)0xa410;
      local_10 = 0x1bb4;
      uStack_12 = 0xaf65;
      func_0x000297e6();
      local_18[0] = 0x22b2;
      uStack_1a = 0xaf6f;
      func_0x000299d1();
      local_18[0] = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xaf77;
      puVar3 = (undefined2 *)func_0x0001e558();
      local_44 = *puVar3;
      local_42 = puVar3[1];
    }
    *param_3 = local_40;
    param_3[1] = local_3e;
    *param_4 = local_44;
    param_4[1] = local_42;
    uVar6 = 1;
  }
  return uVar6;
}



/* 3ab8:042c  FUN_3ab8_042c  396 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_042c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  undefined2 *in_stack_00000030;
  undefined2 auStack_14 [3];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = 0x3ab8;
  local_6 = 0xafb7;
  FUN_21f2_0ebc();
  *in_stack_00000030 = 0;
  local_4 = 0x22b2;
  local_6 = 0xafc6;
  func_0x000297e6();
  local_4 = 0x22b2;
  local_6 = 0xafcb;
  func_0x00029d78();
  uStack_c = 0x22b2;
  uStack_e = 0xafd5;
  func_0x000299d1();
  uStack_c = 0x22b2;
  uStack_e = 0xafdd;
  func_0x000297e6();
  uStack_c = 0x22b2;
  uStack_e = 0xafe2;
  func_0x00029d78();
  auStack_14[0] = 0x22b2;
  func_0x000299d1();
  auStack_14[0] = 0x22b2;
  func_0x000297e6();
  auStack_14[0] = 0x22b2;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  iVar1 = FUN_1def_043a(0x22b2);
  if (iVar1 == 0) {
LAB_3ab8_04a6:
    uVar2 = 1;
  }
  else {
    local_4 = 0x1bb4;
    local_6 = 0xb034;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = 0xb039;
    func_0x00029d78();
    uStack_c = 0x22b2;
    uStack_e = 0xb043;
    func_0x000299d1();
    uStack_c = 0x22b2;
    uStack_e = 0xb04b;
    func_0x000297e6();
    uStack_c = 0x22b2;
    uStack_e = 0xb050;
    func_0x00029d78();
    auStack_14[0] = 0x22b2;
    func_0x000299d1();
    auStack_14[0] = 1;
    func_0x0001e558(0x22b2);
    local_4 = 0x1bb4;
    local_6 = 0xb07b;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = 0xb080;
    func_0x00029d78();
    uStack_c = 0x22b2;
    uStack_e = 0xb08a;
    func_0x000299d1();
    uStack_c = 0x22b2;
    uStack_e = 0xb092;
    func_0x000297e6();
    uStack_c = 0x22b2;
    uStack_e = 0xb097;
    func_0x00029d78();
    auStack_14[0] = 0x22b2;
    func_0x000299d1();
    auStack_14[0] = 1;
    puVar3 = (undefined2 *)func_0x0001e558(0x22b2);
    uVar4 = (undefined1 *)0xffed < auStack_14;
    local_a = *puVar3;
    local_8 = puVar3[1];
    local_4 = 0x1bb4;
    local_6 = 0xb0c3;
    func_0x00029834();
    local_4 = 0x22b2;
    local_6 = 0xb0cb;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = 0xb0d0;
    func_0x00029ae7();
    local_4 = 0x22b2;
    local_6 = 0xb0d5;
    func_0x00029d78();
    local_4 = 0x22b2;
    local_6 = 0xb0da;
    FUN_28b3_1181();
    if ((bool)uVar4) {
      local_4 = 0x22b2;
      local_6 = 0xb0e5;
      func_0x00029834();
      local_4 = 0x22b2;
      local_6 = 0xb0ed;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = 0xb0f2;
      func_0x00029ae7();
      local_4 = 0x22b2;
      local_6 = 0xb0f7;
      func_0x00029d78();
      local_4 = 0x22b2;
      local_6 = 0xb0fc;
      FUN_28b3_1181();
      if ((bool)uVar4) goto LAB_3ab8_04a6;
    }
    uVar4 = 0;
    local_4 = 0x22b2;
    local_6 = 0xb10a;
    func_0x00029834();
    local_4 = 0x22b2;
    local_6 = 0xb112;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = 0xb11a;
    FUN_28b3_100d();
    local_4 = 0x22b2;
    local_6 = 0xb11f;
    func_0x00029ae7();
    local_4 = 0x22b2;
    local_6 = 0xb124;
    func_0x00029d78();
    local_4 = 0x22b2;
    local_6 = 0xb129;
    FUN_28b3_1181();
    if ((bool)uVar4) {
      *in_stack_00000030 = 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* 3ab8:05b8  FUN_3ab8_05b8  2447 bytes, 2 callers */

/* WARNING: Removing unreachable block (ram,0x0003b300) */
/* WARNING: Removing unreachable block (ram,0x0003b265) */

undefined2 __cdecl16far FUN_3ab8_05b8(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined2 uVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined2 in_stack_00000048;
  undefined2 in_stack_0000004a;
  undefined2 in_stack_0000004c;
  undefined2 in_stack_0000004e;
  undefined2 in_stack_00000050;
  undefined2 in_stack_00000052;
  undefined2 in_stack_00000054;
  undefined2 in_stack_00000056;
  undefined2 in_stack_00000058;
  undefined2 in_stack_0000005a;
  undefined2 in_stack_0000005c;
  undefined2 in_stack_0000005e;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined1 local_a4 [4];
  int local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  int local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  undefined2 local_5a;
  undefined2 local_58 [6];
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined2 uStack_3a;
  undefined1 *puStack_38;
  undefined2 uStack_36;
  undefined2 auStack_34 [5];
  undefined2 uStack_2a;
  undefined2 auStack_26 [2];
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 local_18 [3];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  
  FUN_21f2_0ebc();
  puStack_a = (undefined2 *)0xb14a;
  func_0x0000c3ca();
  puStack_a = (undefined2 *)0xb14e;
  FUN_3ab8_0000();
  uVar7 = in_stack_0000005e;
  uVar6 = in_stack_0000005c;
  uVar5 = in_stack_0000005a;
  uVar4 = in_stack_00000058;
  uVar3 = in_stack_00000056;
  uVar14 = in_stack_00000054;
  local_88 = in_stack_00000048;
  local_86 = in_stack_0000004a;
  local_9e = in_stack_0000004c;
  local_9c = in_stack_0000004e;
  local_9a = in_stack_00000050;
  local_98 = in_stack_00000052;
  local_b0 = in_stack_00000054;
  local_ae = in_stack_00000056;
  local_ac = in_stack_00000058;
  local_aa = in_stack_0000005a;
  local_ba = in_stack_0000005c;
  local_b8 = in_stack_0000005e;
  local_5a = 0;
  local_8a = 0;
  local_a0 = 0;
  puVar15 = &uStack_1e;
  puVar17 = &uStack_1e;
  puVar16 = &uStack_1e;
  puVar12 = (undefined2 *)&stack0x001c;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  puVar15 = auStack_34;
  puVar12 = (undefined2 *)&stack0x0006;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  uStack_36 = 0x885;
  puStack_38 = (undefined1 *)&SUB_0000_b1d8;
  iVar13 = FUN_3ab8_042c();
  if (iVar13 != 0) {
    return 0;
  }
  puVar12 = (undefined2 *)&stack0x0032;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar17;
    puVar17 = puVar17 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  puVar15 = auStack_34;
  puVar12 = (undefined2 *)&stack0x001c;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  uStack_36 = 0x885;
  puStack_38 = (undefined1 *)0xb209;
  iVar13 = FUN_3ab8_042c();
  if (iVar13 != 0) {
    return 0;
  }
  puVar12 = (undefined2 *)&stack0x0006;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar16;
    puVar16 = puVar16 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  puVar15 = auStack_34;
  puVar12 = (undefined2 *)&stack0x0032;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  uStack_36 = 0x885;
  puStack_38 = (undefined1 *)0xb235;
  iVar13 = FUN_3ab8_042c();
  uVar11 = local_86;
  uVar10 = local_88;
  uVar9 = local_98;
  uVar8 = local_9a;
  if (iVar13 != 0) {
    return 0;
  }
  if ((local_8a == 0) && (local_a0 == 0)) {
    return 0;
  }
  if (local_8a != 0) {
    if (local_a0 == 1) {
      return 0;
    }
    puVar12 = local_18;
    puVar15 = (undefined2 *)&stack0x001c;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      puVar1 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = *puVar1;
    }
    puVar12 = (undefined2 *)&stack0x001c;
    puVar15 = (undefined2 *)&stack0x0032;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      puVar1 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = *puVar1;
    }
    puVar12 = (undefined2 *)&stack0x0032;
    puVar15 = local_18;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      puVar1 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = *puVar1;
    }
    local_70 = local_9a;
    local_6e = local_98;
    local_84 = uVar14;
    local_82 = uVar3;
    local_9a = uVar4;
    local_98 = uVar5;
    local_b0 = uVar6;
    local_ae = uVar7;
    local_ac = uVar8;
    local_aa = uVar9;
    local_ba = uVar14;
    local_b8 = uVar3;
  }
  if (local_a0 != 0) {
    if (local_8a == 1) {
      return 0;
    }
    puVar12 = local_18;
    puVar15 = (undefined2 *)&stack0x0006;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      puVar1 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = *puVar1;
    }
    puVar12 = (undefined2 *)&stack0x0006;
    puVar15 = (undefined2 *)&stack0x001c;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      puVar1 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = *puVar1;
    }
    puVar12 = (undefined2 *)&stack0x001c;
    puVar15 = local_18;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      puVar1 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = *puVar1;
    }
    local_70 = local_88;
    local_6e = local_86;
    local_84 = local_9e;
    local_82 = local_9c;
    local_88 = local_9a;
    local_86 = local_98;
    local_9e = local_b0;
    local_9c = local_ae;
    local_9a = uVar10;
    local_98 = uVar11;
  }
  puStack_a = &local_92;
  puVar15 = (undefined2 *)&stack0xffe0;
  puVar17 = (undefined2 *)&stack0xffe0;
  puVar12 = (undefined2 *)&stack0x001c;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  puVar15 = &uStack_36;
  puVar12 = (undefined2 *)&stack0x0006;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  puStack_38 = (undefined1 *)0x885;
  uStack_3a = 0xb3ab;
  iVar13 = FUN_1def_1921();
  if (iVar13 == 0) {
    return 0;
  }
  puStack_a = (undefined2 *)local_a4;
  puVar12 = (undefined2 *)&stack0x0032;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar17;
    puVar17 = puVar17 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  puVar15 = &uStack_36;
  puVar12 = (undefined2 *)&stack0x001c;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  puStack_38 = (undefined1 *)0x1bb4;
  uStack_3a = 0xb3e0;
  iVar13 = FUN_1def_1921();
  if (iVar13 == 0) {
    return 0;
  }
  puStack_a = (undefined2 *)0xb3ef;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb3f4;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb3fe;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb406;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb40b;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb415;
  func_0x000299d1();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb41d;
  func_0x000297e6();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb422;
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  uStack_2a = 0xb443;
  func_0x000299d1();
  uStack_2a = 0xb448;
  iVar13 = FUN_1def_043a();
  if (iVar13 == 0) {
    return 0;
  }
  *(undefined2 *)0xb30c = local_92;
  *(undefined2 *)0xb30e = local_90;
  *(undefined2 *)0xb37e = local_a8;
  *(undefined2 *)0xb380 = local_a6;
  puStack_a = (undefined2 *)0xb479;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb47e;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb488;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb491;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb496;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb4a0;
  func_0x000299d1();
  local_18[0] = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0xb4a9;
  puVar12 = (undefined2 *)FUN_1def_05d1();
  local_68 = *puVar12;
  local_66 = puVar12[1];
  puStack_a = (undefined2 *)0xb4c2;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb4c7;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb4d1;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb4da;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb4df;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb4e9;
  func_0x000299d1();
  local_18[0] = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0xb4f2;
  puVar12 = (undefined2 *)FUN_1def_05d1();
  uVar18 = (undefined1 *)0xffed < local_18;
  uVar19 = &stack0x0000 == (undefined1 *)0x6;
  local_8e = *puVar12;
  local_8c = puVar12[1];
  puStack_a = (undefined2 *)0xb50c;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb515;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb51a;
  FUN_28b3_1181();
  if ((bool)uVar18) {
    puStack_a = (undefined2 *)0xb525;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xb52e;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xb533;
    FUN_28b3_1181();
    if (!(bool)uVar18) goto LAB_3ab8_09b5;
  }
  else {
LAB_3ab8_09b5:
    puStack_a = (undefined2 *)0xb53d;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xb546;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xb54b;
    FUN_28b3_1181();
    if ((bool)uVar18 || (bool)uVar19) goto LAB_3ab8_0b54;
    puStack_a = (undefined2 *)0xb556;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xb55f;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xb564;
    FUN_28b3_1181();
    if ((bool)uVar18 || (bool)uVar19) goto LAB_3ab8_0b54;
  }
  puVar12 = local_18;
  puVar15 = (undefined2 *)&stack0x0006;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar12;
    puVar12 = puVar12 + 1;
    puVar1 = puVar15;
    puVar15 = puVar15 + 1;
    *puVar2 = *puVar1;
  }
  puVar12 = (undefined2 *)&stack0x0006;
  puVar15 = (undefined2 *)&stack0x0032;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar12;
    puVar12 = puVar12 + 1;
    puVar1 = puVar15;
    puVar15 = puVar15 + 1;
    *puVar2 = *puVar1;
  }
  puVar12 = (undefined2 *)&stack0x0032;
  puVar15 = local_18;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar12;
    puVar12 = puVar12 + 1;
    puVar1 = puVar15;
    puVar15 = puVar15 + 1;
    *puVar2 = *puVar1;
  }
  local_70 = local_88;
  local_6e = local_86;
  local_84 = local_9e;
  local_82 = local_9c;
  local_88 = local_ac;
  local_86 = local_aa;
  local_9e = local_ba;
  local_9c = local_b8;
  puStack_a = &local_92;
  puVar15 = (undefined2 *)&stack0xffe0;
  puVar12 = (undefined2 *)&stack0x001c;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  puVar15 = &uStack_36;
  puVar12 = (undefined2 *)&stack0x0006;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  puStack_38 = (undefined1 *)0x22b2;
  uStack_3a = 0xb60f;
  iVar13 = FUN_1def_1921();
  if (iVar13 == 0) {
    return 0;
  }
  puStack_a = (undefined2 *)local_a4;
  puVar15 = (undefined2 *)&stack0xffe0;
  puVar12 = (undefined2 *)&stack0x0032;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  puVar15 = &uStack_36;
  puVar12 = (undefined2 *)&stack0x001c;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  puStack_38 = (undefined1 *)0x1bb4;
  uStack_3a = 0xb644;
  iVar13 = FUN_1def_1921();
  if (iVar13 == 0) {
    return 0;
  }
  puStack_a = (undefined2 *)0xb653;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb658;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb662;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb66a;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb66f;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb679;
  func_0x000299d1();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb681;
  func_0x000297e6();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb686;
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  uStack_2a = 0xb6a7;
  func_0x000299d1();
  uStack_2a = 0xb6ac;
  iVar13 = FUN_1def_043a();
  if (iVar13 == 0) {
    return 0;
  }
  *(undefined2 *)0xb30c = local_92;
  *(undefined2 *)0xb30e = local_90;
  *(undefined2 *)0xb37e = local_a8;
  *(undefined2 *)0xb380 = local_a6;
LAB_3ab8_0b54:
  puStack_a = (undefined2 *)0xb6dd;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb6e6;
  FUN_28b3_100d();
  puStack_a = (undefined2 *)0xb6ef;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xb6f8;
  func_0x00029983();
  puStack_a = (undefined2 *)0xb701;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb70a;
  FUN_28b3_100d();
  puStack_a = (undefined2 *)0xb712;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xb71a;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xb723;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb72c;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xb731;
  FUN_28b3_117c();
  puStack_a = (undefined2 *)0xb736;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb740;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb745;
  FUN_28b3_1582();
  puStack_a = (undefined2 *)0xb74f;
  func_0x00029834();
  puStack_a = (undefined2 *)0xb757;
  func_0x00029983();
  puStack_a = (undefined2 *)0xb760;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb769;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb76e;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb778;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb781;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb786;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb790;
  func_0x000299d1();
  local_18[0] = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0xb799;
  FUN_1def_05d1();
  uVar18 = (undefined1 *)0xffed < local_18;
  puStack_a = (undefined2 *)0xb7a3;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb7a8;
  FUN_28b3_1181();
  if ((bool)uVar18) {
    puStack_a = (undefined2 *)0xb7b2;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xb7b7;
    func_0x00029af6();
    puStack_a = (undefined2 *)0xb7bf;
    func_0x00029983();
  }
  puStack_a = (undefined2 *)*(undefined2 *)0xa414;
  uStack_c = *(undefined2 *)0xa412;
  uStack_e = *(undefined2 *)0xa410;
  uStack_10 = 0x22b2;
  uStack_12 = 0xb7d7;
  func_0x000297e6();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb7e1;
  func_0x000299d1();
  local_18[0] = 0;
  uStack_1a = 0x22b2;
  uStack_1c = 0xb7e9;
  puVar12 = (undefined2 *)FUN_1def_05d1();
  local_7c = *puVar12;
  local_7a = puVar12[1];
  puStack_a = (undefined2 *)*(undefined2 *)0xa414;
  uStack_c = *(undefined2 *)0xa412;
  uStack_e = *(undefined2 *)0xa410;
  uStack_10 = 0x1bb4;
  uStack_12 = 0xb811;
  func_0x000297e6();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb81b;
  func_0x000299d1();
  local_18[0] = 0;
  uStack_1a = 0x22b2;
  uStack_1c = 0xb823;
  puVar12 = (undefined2 *)func_0x0001e558();
  local_96 = *puVar12;
  local_94 = puVar12[1];
  puStack_a = (undefined2 *)0xb83e;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb846;
  FUN_28b3_100d();
  puStack_a = (undefined2 *)0xb84f;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xb857;
  func_0x00029bb5();
  puStack_a = (undefined2 *)0xb860;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xb868;
  func_0x00029983();
  puStack_a = (undefined2 *)0xb871;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb87a;
  FUN_28b3_100d();
  puStack_a = (undefined2 *)0xb883;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xb88c;
  func_0x00029bb5();
  puStack_a = (undefined2 *)0xb895;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xb89d;
  func_0x00029983();
  puStack_a = (undefined2 *)0xb8a6;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb8ab;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb8b5;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb8be;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb8c3;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb8cd;
  func_0x000299d1();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb8d6;
  func_0x000297e6();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb8db;
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  uStack_2a = 0xb8fd;
  func_0x000299d1();
  uStack_2a = 0xb902;
  iVar13 = FUN_1def_043a();
  if (iVar13 == 0) {
    return 0;
  }
  puStack_a = (undefined2 *)0xb915;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb91e;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xb927;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xb92c;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb936;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb93b;
  FUN_28b3_1582();
  puStack_a = (undefined2 *)0xb945;
  func_0x00029834();
  puStack_a = (undefined2 *)0xb94e;
  func_0x00029c2c();
  puStack_a = (undefined2 *)0xb956;
  func_0x00029983();
  puStack_a = (undefined2 *)0xb95f;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb964;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb96e;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb977;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb97c;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb986;
  func_0x000299d1();
  local_18[0] = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0xb98f;
  func_0x0001e558();
  puStack_a = (undefined2 *)0xb999;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb9a2;
  func_0x00029b85();
  puStack_a = (undefined2 *)0xb9aa;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xb9af;
  func_0x00029ae7();
  puStack_a = (undefined2 *)0xb9b8;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xb9c0;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xb9c5;
  func_0x00029d78();
  puStack_a = (undefined2 *)0xb9ca;
  local_4c = FUN_28b3_0f51();
  puStack_a = (undefined2 *)0xb9d6;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xb9db;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb9e5;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb9ee;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb9f3;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  uStack_1a = 0xb9fd;
  func_0x000299d1();
  local_18[0] = 0x22b2;
  uStack_1a = 0xba05;
  func_0x000297e6();
  local_18[0] = 0x22b2;
  uStack_1a = 0xba0a;
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  uStack_2a = 0xba2b;
  func_0x000299d1();
  uStack_2a = 0xba30;
  local_64 = FUN_1000_0718();
  uVar14 = (undefined2)((ulong)local_64 >> 0x10);
  puStack_a = (undefined2 *)local_64;
  uStack_c = 0xdef;
  uStack_e = 0xba40;
  local_42 = FUN_20a9_145e();
  local_48 = 0;
  local_4a = 0;
  local_44 = 0;
  local_46 = 0;
  local_3d = *(undefined1 *)0xa6a;
  local_3e = *(undefined1 *)0xa6c;
  local_3c = *(undefined1 *)0xb310;
  puStack_a = (undefined2 *)0x1bb4;
  uStack_c = 0xba70;
  local_40 = uVar14;
  func_0x0000daa6();
  if (param_1 == 0) {
    puVar15 = auStack_26;
    puVar12 = local_58;
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar2 = puVar15;
      puVar15 = puVar15 + 1;
      puVar1 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar2 = *puVar1;
    }
    uStack_2a = 0xba8b;
    iVar13 = FUN_13bf_01c1();
    if (iVar13 != 0) {
      local_5a = 1;
    }
    puStack_a = (undefined2 *)0xba9c;
    func_0x0000abfa();
    return local_5a;
  }
  puVar15 = auStack_26;
  puVar12 = local_58;
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar1;
  }
  uStack_2a = 0xbab2;
  iVar13 = FUN_13bf_0066();
  if (iVar13 != 0) {
    return 1;
  }
  return local_5a;
}



/* 3ab8:0f47  FUN_3ab8_0f47  3695 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003bc76) */
/* WARNING: Removing unreachable block (ram,0x0003bc6f) */
/* WARNING: Removing unreachable block (ram,0x0003bc79) */
/* WARNING: Removing unreachable block (ram,0x0003bc83) */
/* WARNING: Removing unreachable block (ram,0x0003bc8e) */
/* WARNING: Removing unreachable block (ram,0x0003bc90) */
/* WARNING: Removing unreachable block (ram,0x0003bc99) */
/* WARNING: Removing unreachable block (ram,0x0003bc9b) */
/* WARNING: Removing unreachable block (ram,0x0003bca4) */
/* WARNING: Removing unreachable block (ram,0x0003bca6) */
/* WARNING: Removing unreachable block (ram,0x0003bc80) */
/* WARNING: Removing unreachable block (ram,0x0003bc04) */
/* WARNING: Removing unreachable block (ram,0x0003bc0a) */
/* WARNING: Removing unreachable block (ram,0x0003bc11) */
/* WARNING: Removing unreachable block (ram,0x0003bc1b) */
/* WARNING: Removing unreachable block (ram,0x0003bc26) */
/* WARNING: Removing unreachable block (ram,0x0003bc28) */
/* WARNING: Removing unreachable block (ram,0x0003bc32) */
/* WARNING: Removing unreachable block (ram,0x0003bc34) */
/* WARNING: Removing unreachable block (ram,0x0003bc3e) */
/* WARNING: Removing unreachable block (ram,0x0003bc40) */
/* WARNING: Removing unreachable block (ram,0x0003bc68) */
/* WARNING: Removing unreachable block (ram,0x0003bcce) */
/* WARNING: Removing unreachable block (ram,0x0003bce1) */
/* WARNING: Removing unreachable block (ram,0x0003bce3) */
/* WARNING: Removing unreachable block (ram,0x0003bcee) */
/* WARNING: Removing unreachable block (ram,0x0003bcf0) */
/* WARNING: Removing unreachable block (ram,0x0003bcfe) */
/* WARNING: Removing unreachable block (ram,0x0003bd04) */
/* WARNING: Removing unreachable block (ram,0x0003bcfb) */
/* WARNING: Removing unreachable block (ram,0x0003bd07) */
/* WARNING: Removing unreachable block (ram,0x0003bd1f) */
/* WARNING: Removing unreachable block (ram,0x0003bd21) */
/* WARNING: Removing unreachable block (ram,0x0003bd2c) */
/* WARNING: Removing unreachable block (ram,0x0003bd2e) */
/* WARNING: Removing unreachable block (ram,0x0003bd3d) */
/* WARNING: Removing unreachable block (ram,0x0003bd54) */
/* WARNING: Removing unreachable block (ram,0x0003bd56) */
/* WARNING: Removing unreachable block (ram,0x0003bd61) */
/* WARNING: Removing unreachable block (ram,0x0003bd63) */
/* WARNING: Removing unreachable block (ram,0x0003bd6f) */
/* WARNING: Removing unreachable block (ram,0x0003bd87) */
/* WARNING: Removing unreachable block (ram,0x0003bd89) */
/* WARNING: Removing unreachable block (ram,0x0003bd94) */
/* WARNING: Removing unreachable block (ram,0x0003bd96) */
/* WARNING: Removing unreachable block (ram,0x0003bda2) */
/* WARNING: Removing unreachable block (ram,0x0003bdba) */
/* WARNING: Removing unreachable block (ram,0x0003bdbc) */
/* WARNING: Removing unreachable block (ram,0x0003bdc8) */
/* WARNING: Removing unreachable block (ram,0x0003bdca) */
/* WARNING: Removing unreachable block (ram,0x0003bdd9) */
/* WARNING: Removing unreachable block (ram,0x0003beef) */
/* WARNING: Removing unreachable block (ram,0x0003befa) */
/* WARNING: Removing unreachable block (ram,0x0003befc) */
/* WARNING: Removing unreachable block (ram,0x0003bf05) */
/* WARNING: Removing unreachable block (ram,0x0003bf07) */
/* WARNING: Removing unreachable block (ram,0x0003bf11) */
/* WARNING: Removing unreachable block (ram,0x0003bf13) */
/* WARNING: Removing unreachable block (ram,0x0003bf1e) */
/* WARNING: Removing unreachable block (ram,0x0003bf20) */
/* WARNING: Removing unreachable block (ram,0x0003bf2a) */
/* WARNING: Removing unreachable block (ram,0x0003bf2c) */
/* WARNING: Removing unreachable block (ram,0x0003beec) */
/* WARNING: Removing unreachable block (ram,0x0003c00c) */
/* WARNING: Removing unreachable block (ram,0x0003c07b) */
/* WARNING: Removing unreachable block (ram,0x0003c3d2) */
/* WARNING: Removing unreachable block (ram,0x0003c3e7) */
/* WARNING: Removing unreachable block (ram,0x0003c5e7) */
/* WARNING: Removing unreachable block (ram,0x0003c5e9) */
/* WARNING: Removing unreachable block (ram,0x0003c5f4) */
/* WARNING: Removing unreachable block (ram,0x0003c5f6) */
/* WARNING: Removing unreachable block (ram,0x0003c601) */
/* WARNING: Removing unreachable block (ram,0x0003c603) */
/* WARNING: Removing unreachable block (ram,0x0003c629) */
/* WARNING: Removing unreachable block (ram,0x0003c645) */
/* WARNING: Removing unreachable block (ram,0x0003c647) */
/* WARNING: Removing unreachable block (ram,0x0003c652) */
/* WARNING: Removing unreachable block (ram,0x0003c654) */
/* WARNING: Removing unreachable block (ram,0x0003c6d9) */
/* WARNING: Removing unreachable block (ram,0x0003c6dc) */
/* WARNING: Removing unreachable block (ram,0x0003c79a) */
/* WARNING: Removing unreachable block (ram,0x0003c79c) */
/* WARNING: Removing unreachable block (ram,0x0003c7ae) */
/* WARNING: Removing unreachable block (ram,0x0003c7b0) */
/* WARNING: Removing unreachable block (ram,0x0003c913) */
/* WARNING: Removing unreachable block (ram,0x0003c915) */
/* WARNING: Removing unreachable block (ram,0x0003c921) */
/* WARNING: Removing unreachable block (ram,0x0003c927) */
/* WARNING: Removing unreachable block (ram,0x0003c626) */
/* WARNING: Removing unreachable block (ram,0x0003c92c) */
/* WARNING: Removing unreachable block (ram,0x0003c078) */
/* WARNING: Removing unreachable block (ram,0x0003bd3a) */
/* WARNING: Removing unreachable block (ram,0x0003bdd6) */
/* WARNING: Removing unreachable block (ram,0x0003bc18) */

undefined2 __cdecl16far FUN_3ab8_0f47(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar7;
  undefined2 local_be [11];
  undefined2 local_a8 [11];
  undefined2 local_92;
  undefined2 local_70 [13];
  undefined2 local_56 [15];
  undefined2 auStack_34 [6];
  undefined2 auStack_1e [8];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  func_0x0000c3ca();
  FUN_3ab8_0000();
  uStack_c = 0x885;
  uStack_e = 0xbae8;
  puVar7 = (undefined2 *)func_0x0000013f();
  puVar4 = (undefined2 *)puVar7;
  puVar5 = local_56;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_c = 0;
  uStack_e = 0xbb05;
  puVar7 = (undefined2 *)func_0x0000013f();
  puVar4 = (undefined2 *)puVar7;
  puVar5 = local_70;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_c = 0;
  uStack_e = 0xbb22;
  puVar7 = (undefined2 *)func_0x0000013f();
  puVar4 = (undefined2 *)puVar7;
  puVar5 = local_a8;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_c = 0;
  uStack_e = 0xbb40;
  puVar7 = (undefined2 *)func_0x0000013f();
  puVar4 = (undefined2 *)puVar7;
  puVar5 = local_be;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  local_92 = 0;
  puVar4 = auStack_1e;
  puVar5 = local_70;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = *puVar7;
  }
  puVar4 = auStack_34;
  puVar5 = local_56;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = *puVar7;
  }
  iVar3 = FUN_3ab8_042c();
  if (iVar3 == 0) {
    puVar4 = auStack_1e;
    puVar6 = auStack_1e;
    puVar5 = local_a8;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar7;
    }
    puVar4 = auStack_34;
    puVar5 = local_70;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar7;
    }
    iVar3 = FUN_3ab8_042c();
    if (iVar3 == 0) {
      puVar5 = local_56;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = *puVar7;
      }
      puVar4 = auStack_34;
      puVar5 = local_a8;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = *puVar7;
      }
      FUN_3ab8_042c();
    }
  }
  return 0;
}



/* 3ab8:1db6  FUN_3ab8_1db6  1006 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_1db6(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
             undefined2 param_13,undefined2 param_14,undefined2 param_15,undefined2 param_16,
             undefined2 param_17,undefined2 param_18)

{
  undefined2 *puVar1;
  int iVar2;
  int extraout_DX;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  uint local_c0;
  int local_b2;
  int local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  int local_5e;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2a;
  undefined2 auStack_26 [2];
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  int iStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  undefined2 *puStack_8;
  
  FUN_21f2_0ebc();
  puStack_8 = (undefined2 *)0x22b2;
  uVar6 = 0x885;
  puStack_a = (undefined2 *)0xc948;
  func_0x0000c3ca();
  local_5a = 0;
  puStack_8 = (undefined2 *)0x885;
  puStack_a = (undefined2 *)0xc951;
  FUN_3ab8_0000();
  local_66 = param_7;
  local_64 = param_8;
  local_7a = param_9;
  local_78 = param_10;
  local_76 = param_11;
  local_74 = param_12;
  local_96 = param_13;
  local_94 = param_14;
  local_92 = param_15;
  local_90 = param_16;
  local_ae = param_17;
  local_ac = param_18;
  local_5e = 1;
  do {
    if (0x32 < local_5e) {
LAB_3ab8_2052:
      if (local_c0 == 0) {
LAB_3ab8_2046:
        puStack_8 = (undefined2 *)0x2;
        uStack_c = 0xcbce;
        puStack_a = (undefined2 *)uVar6;
        FUN_3ab8_0052();
LAB_3ab8_2197:
        local_5a = 0;
      }
      else {
        puStack_8 = (undefined2 *)local_b0;
        puStack_a = (undefined2 *)local_b2;
        uStack_e = 0xcbe6;
        uStack_c = uVar6;
        uVar8 = func_0x00000271();
        uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
        local_50 = *(undefined2 *)((int)uVar8 + 8);
        local_4e = *(undefined2 *)((int)uVar8 + 10);
        puStack_8 = (undefined2 *)local_b0;
        puStack_a = (undefined2 *)local_b2;
        uStack_c = 0;
        uStack_e = 0xcc07;
        puVar9 = (undefined2 *)func_0x00000271();
        local_58 = *puVar9;
        local_56 = ((undefined2 *)puVar9)[1];
        puStack_8 = (undefined2 *)local_b0;
        puStack_a = (undefined2 *)local_b2;
        uStack_c = 0;
        uStack_e = 0xcc27;
        uVar8 = func_0x00000271();
        uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
        local_54 = *(undefined2 *)((int)uVar8 + 4);
        local_52 = *(undefined2 *)((int)uVar8 + 6);
        local_4c = 10000;
        local_40 = 0;
        local_42 = 0;
        local_48 = 0;
        local_4a = 0;
        local_44 = 0;
        local_46 = 0;
        local_3d = *(undefined1 *)0xa6a;
        local_3e = *(undefined1 *)0xa6c;
        local_3c = *(undefined1 *)0xb310;
        puStack_8 = (undefined2 *)0x0;
        puStack_a = (undefined2 *)0x0;
        uStack_c = 0xcc6e;
        func_0x0000daa6();
        puVar5 = auStack_26;
        puVar4 = &local_58;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          puVar9 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar1 = *puVar9;
        }
        uStack_2a = 0xcc83;
        iVar2 = FUN_13bf_01c1();
        if (iVar2 != 0) {
          local_5a = 1;
        }
        puStack_8 = (undefined2 *)0x11f2;
        puStack_a = (undefined2 *)0xcc94;
        func_0x0000abfa();
      }
      return local_5a;
    }
    local_62 = local_66;
    local_60 = local_64;
    local_72 = local_7a;
    local_70 = local_78;
    local_6a = local_76;
    local_68 = local_74;
    local_86 = local_96;
    local_84 = local_94;
    local_7e = local_92;
    local_7c = local_90;
    local_9e = local_ae;
    local_9c = local_ac;
    puStack_8 = &local_7a;
    puStack_a = &local_66;
    uStack_c = param_2;
    uStack_e = param_1;
    uStack_12 = 0xcd0d;
    uStack_10 = uVar6;
    iVar2 = FUN_3ab8_022d();
    if (iVar2 == 0) goto LAB_3ab8_2197;
    puStack_8 = &local_96;
    puStack_a = &local_76;
    uStack_c = param_4;
    uStack_e = param_3;
    uStack_12 = 0xc9ba;
    uStack_10 = uVar6;
    iVar2 = FUN_3ab8_022d();
    if (iVar2 == 0) goto LAB_3ab8_2197;
    puStack_8 = &local_ae;
    puStack_a = &local_92;
    uStack_c = param_6;
    uStack_e = param_5;
    uStack_12 = 0xc9d8;
    uStack_10 = uVar6;
    iVar2 = FUN_3ab8_022d();
    if (iVar2 == 0) goto LAB_3ab8_2197;
    puStack_a = (undefined2 *)0xc9eb;
    puStack_8 = (undefined2 *)uVar6;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0xc9f0;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc9fa;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xca03;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xca08;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xca12;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xca1b;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xca20;
    func_0x00029d78();
    uStack_20 = 0x22b2;
    uStack_22 = 0xca2a;
    func_0x000299d1();
    uStack_20 = 0x22b2;
    uStack_22 = 0xca32;
    func_0x000297e6();
    uStack_20 = 0x22b2;
    uStack_22 = 0xca37;
    func_0x00029d78();
    uStack_2a = 0xca41;
    func_0x000299d1();
    uStack_2a = 0xca49;
    func_0x000297e6();
    uStack_2a = 0xca4e;
    func_0x00029d78();
    uStack_30 = 0x22b2;
    uStack_32 = 0xca58;
    func_0x000299d1();
    uStack_30 = 0x22b2;
    uStack_32 = 0xca60;
    func_0x000297e6();
    uStack_30 = 0x22b2;
    uStack_32 = 0xca65;
    func_0x00029d78();
    uStack_38 = 0x22b2;
    uStack_3a = 0xca6f;
    func_0x000299d1();
    uStack_38 = 0x22b2;
    uStack_3a = 0xca73;
    local_b0 = extraout_DX;
    local_b2 = FUN_3ab8_27cf();
    if (local_b0 == 0 && local_b2 == 0) goto LAB_3ab8_2197;
    uStack_c = 0x22b2;
    uStack_e = 0xca8f;
    puStack_a = (undefined2 *)local_b2;
    puStack_8 = (undefined2 *)local_b0;
    uVar8 = func_0x00000271();
    *(undefined2 *)((int)uVar8 + 0xc) = 10000;
    uStack_c = 0;
    uStack_e = 0xcaa8;
    puStack_a = (undefined2 *)local_b2;
    puStack_8 = (undefined2 *)local_b0;
    uVar8 = func_0x00000271();
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    *(undefined2 *)((int)uVar8 + 0x18) = 0;
    *(undefined2 *)((int)uVar8 + 0x16) = 0;
    uStack_c = 0;
    uStack_e = 0xcac5;
    puStack_a = (undefined2 *)local_b2;
    puStack_8 = (undefined2 *)local_b0;
    uVar8 = func_0x00000271();
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    *(undefined2 *)((int)uVar8 + 0x10) = 0;
    *(undefined2 *)((int)uVar8 + 0xe) = 0;
    uStack_c = 0;
    uVar6 = 0;
    uStack_e = 0xcae2;
    puStack_a = (undefined2 *)local_b2;
    puStack_8 = (undefined2 *)local_b0;
    uVar8 = func_0x00000271();
    uVar3 = (undefined2)((ulong)uVar8 >> 0x10);
    *(undefined2 *)((int)uVar8 + 0x14) = 0;
    *(undefined2 *)((int)uVar8 + 0x12) = 0;
    puStack_8 = &local_7a;
    puStack_a = &local_66;
    uStack_c = local_70;
    uStack_e = local_72;
    uStack_10 = local_60;
    uStack_12 = local_62;
    uStack_18 = param_2;
    uStack_1a = param_1;
    uStack_1c = 0;
    uStack_1e = 0xcb18;
    iStack_16 = local_b2;
    iStack_14 = local_b0;
    iVar2 = FUN_3ab8_00af();
    local_c0 = (uint)(iVar2 != 0);
    puStack_8 = &local_96;
    puStack_a = &local_76;
    uStack_c = local_84;
    uStack_e = local_86;
    uStack_10 = local_68;
    uStack_12 = local_6a;
    uStack_18 = param_4;
    uStack_1a = param_3;
    uStack_1c = 0;
    uStack_1e = 0xcb4c;
    iStack_16 = local_b2;
    iStack_14 = local_b0;
    iVar2 = FUN_3ab8_00af();
    if (iVar2 == 0) {
      local_c0 = 0;
    }
    puStack_8 = &local_ae;
    puStack_a = &local_92;
    uStack_c = local_9c;
    uStack_e = local_9e;
    uStack_10 = local_7c;
    uStack_12 = local_7e;
    uStack_18 = param_6;
    uStack_1a = param_5;
    uStack_1c = 0;
    uStack_1e = 0xcb81;
    iStack_16 = local_b2;
    iStack_14 = local_b0;
    iVar2 = FUN_3ab8_00af();
    if (iVar2 == 0) {
      local_c0 = 0;
    }
    uVar7 = 0;
    if (local_c0 != 0) {
      puStack_8 = (undefined2 *)0x0;
      puStack_a = (undefined2 *)0xcb9f;
      func_0x00029834();
      uStack_c = 0x22b2;
      uStack_e = 0xcbac;
      puStack_a = (undefined2 *)local_b2;
      puStack_8 = (undefined2 *)local_b0;
      func_0x00000271();
      puStack_8 = (undefined2 *)0x0;
      puStack_a = (undefined2 *)0xcbba;
      FUN_28b3_0c98();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0xcbbf;
      func_0x00029d78();
      puStack_8 = (undefined2 *)0x22b2;
      uVar6 = 0x22b2;
      puStack_a = (undefined2 *)0xcbc4;
      FUN_28b3_1181();
      if ((bool)uVar7) goto LAB_3ab8_2046;
      goto LAB_3ab8_2052;
    }
    local_5e = local_5e + 1;
  } while( true );
}



/* 3ab8:21a4  FUN_3ab8_21a4  153 bytes, 2 callers */

void __cdecl16far FUN_3ab8_21a4(int param_1,int param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  FUN_21f2_0ebc();
  FUN_21f2_3454(param_3,0x5c7c);
  if (param_1 == 1) {
    FUN_21f2_2d26(0x22b2,param_3,0x5c7e);
  }
  if (param_1 == 2) {
    FUN_21f2_2d26(0x22b2,param_3,0x5c83);
  }
  if (param_1 == 3) {
    FUN_21f2_2d26(0x22b2,param_3,0x5c8c);
  }
  if (param_1 == 4) {
    FUN_21f2_2d26(0x22b2,param_3,0x5c95);
  }
  if (1 < param_1) {
    FUN_21f2_2d26(0x22b2,param_3,0x5c98);
  }
  if (param_2 == 0) {
    uVar1 = 0x5ca7;
  }
  else {
    uVar1 = 0x5c9e;
  }
  FUN_21f2_2d26(0x22b2,param_3,uVar1);
  return;
}



/* 3ab8:223d  FUN_3ab8_223d  286 bytes, 2 callers */

void __cdecl16far FUN_3ab8_223d(int param_1,int param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  FUN_21f2_0ebc();
  if (1 < param_2) {
    FUN_21f2_2d26(0x22b2,param_3,0x5caa);
  }
  if (2 < param_2) {
    FUN_21f2_2d26(0x22b2,param_3,0x5cad);
  }
  if (3 < param_2) {
    FUN_21f2_2d26(0x22b2,param_3,0x5cb0);
  }
  if (0 < param_2) {
    FUN_21f2_2d26(0x22b2,param_3,0x5cb3);
  }
  if (param_2 == 1) {
    FUN_21f2_2d26(0x22b2,param_3,0x5cb6);
  }
  if (param_2 == 2) {
    FUN_21f2_2d26(0x22b2,param_3,0x5cb9);
  }
  if (param_2 == 3) {
    FUN_21f2_2d26(0x22b2,param_3,0x5cbc);
  }
  if (param_2 == 4) {
    FUN_21f2_2d26(0x22b2,param_3,0x5cbf);
  }
  if (param_2 != 0) {
    FUN_21f2_2d26(0x22b2,param_3,0x5cc2);
  }
  if (param_1 == 0) {
    FUN_21f2_2d26(0x22b2,param_3,0x5cd1);
    FUN_21f2_2d26(0x22b2,param_3,0x302);
    uVar1 = 0x2f0;
  }
  else {
    if (param_1 < 5) {
      uVar1 = 0x5cc8;
    }
    else {
      uVar1 = 0x5cc5;
    }
    FUN_21f2_2d26(0x22b2,param_3,uVar1);
    FUN_21f2_2d26(0x22b2,param_3,0x5cce);
    uVar1 = 0x302;
  }
  FUN_21f2_2d26(0x22b2,param_3,uVar1);
  return;
}



/* 3ab8:235b  FUN_3ab8_235b  1140 bytes, 1 callers */

bool __cdecl16far FUN_3ab8_235b(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  int local_46;
  undefined2 local_42 [6];
  uint local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined1 local_26 [4];
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 uStack_a;
  
  FUN_21f2_0ebc();
  local_46 = 0;
  uStack_a._2_2_ = 0x22b2;
  uStack_a._0_2_ = 0xcef8;
  func_0x000297e6();
  uStack_a._2_2_ = 0x22b2;
  uStack_a._0_2_ = 0xcf00;
  FUN_28b3_100d();
  uStack_a._2_2_ = 0x22b2;
  uStack_a._0_2_ = 0xcf09;
  func_0x00029b6d();
  uStack_a._2_2_ = 0x22b2;
  uStack_a._0_2_ = 0xcf11;
  func_0x00029bb5();
  uStack_a._2_2_ = 0x22b2;
  uStack_a._0_2_ = 0xcf19;
  func_0x00029983();
  uStack_a._2_2_ = 0x22b2;
  uStack_a._0_2_ = 0xcf21;
  func_0x000297e6();
  uStack_a._2_2_ = 0x22b2;
  uStack_a._0_2_ = 0xcf29;
  FUN_28b3_100d();
  uStack_a._2_2_ = 0x22b2;
  uStack_a._0_2_ = 0xcf32;
  func_0x00029b6d();
  uStack_a._2_2_ = 0x22b2;
  uStack_a._0_2_ = 0xcf3a;
  func_0x00029bb5();
  uStack_a._2_2_ = 0x22b2;
  uVar6 = 0x22b2;
  uStack_a._0_2_ = 0xcf42;
  func_0x00029983();
  do {
    uStack_a._0_2_ = 0xcf4a;
    uStack_a._2_2_ = uVar6;
    func_0x000297e6();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xcf4f;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xcf59;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xcf61;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xcf66;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xcf70;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xcf78;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xcf7d;
    func_0x00029d78();
    uStack_20 = 0x22b2;
    uStack_22 = 0xcf87;
    func_0x000299d1();
    uStack_20 = 0x22b2;
    uStack_22 = 0xcf8f;
    func_0x000297e6();
    uStack_20 = 0x22b2;
    uStack_22 = 0xcf94;
    func_0x00029d78();
    local_2a = 0xcf9e;
    func_0x000299d1();
    uVar6 = 0x1bb4;
    local_2a = 0xcfa3;
    iVar3 = FUN_1def_043a();
    if (iVar3 == 0) break;
    uStack_a._2_2_ = 0x1bb4;
    uStack_a._0_2_ = 0xcfb6;
    func_0x000297e6();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xcfbb;
    func_0x00029ae7();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xcfc3;
    func_0x00029983();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xcfcb;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xcfd5;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xcfdd;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xcfe7;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    uStack_1c = 0xcff0;
    FUN_1def_05d1();
    uStack_a._2_2_ = 0x1bb4;
    uStack_a._0_2_ = 0xcffa;
    func_0x000297e6();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd002;
    func_0x0002996b();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd007;
    func_0x00029ae7();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd00f;
    func_0x00029983();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd017;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xd021;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xd029;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd033;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    uStack_1c = 0xd03c;
    func_0x0001e558();
    uVar7 = (undefined1 *)0xffed < &uStack_18;
    uStack_a._2_2_ = 0x1bb4;
    uStack_a._0_2_ = 0xd046;
    func_0x000297e6();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd04e;
    func_0x0002996b();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd053;
    func_0x00029ae7();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd05b;
    func_0x00029983();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd064;
    func_0x00029834();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd06c;
    func_0x000297e6();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd074;
    FUN_28b3_100d();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd079;
    func_0x00029d78();
    uStack_a._2_2_ = 0x22b2;
    uVar6 = 0x22b2;
    uStack_a._0_2_ = 0xd07e;
    FUN_28b3_1181();
    if ((bool)uVar7) break;
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd08c;
    func_0x00029834();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd094;
    func_0x000297e6();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd09c;
    func_0x00029b6d();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd0a4;
    func_0x000297e6();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd0ac;
    func_0x00029b6d();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd0b1;
    FUN_28b3_1163();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd0b6;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xd0c0;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xd0c5;
    FUN_28b3_1582();
    uVar7 = (undefined1 *)0xfff7 < &uStack_e;
    uVar8 = &stack0x0000 == (undefined1 *)0x6;
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd0cf;
    func_0x00029834();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd0d7;
    func_0x00029b9d();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd0df;
    func_0x0002996b();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd0e4;
    func_0x00029d78();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd0e9;
    FUN_28b3_1181();
    if ((bool)uVar7 || (bool)uVar8) {
      uStack_a._2_2_ = 0x22b2;
      uStack_a._0_2_ = 0xd231;
      func_0x000297e6();
      uStack_a._2_2_ = 0x22b2;
      uStack_a._0_2_ = 0xd236;
      func_0x00029ae7();
      uStack_a._2_2_ = 0x22b2;
      uStack_a._0_2_ = 0xd23f;
      func_0x00029b6d();
      uStack_a._2_2_ = 0x22b2;
      uStack_a._0_2_ = 0xd247;
      func_0x0002996b();
      uStack_a._2_2_ = 0x22b2;
      uStack_a._0_2_ = 0xd24c;
      func_0x00029d78();
      uStack_a._2_2_ = 0x22b2;
      uVar6 = 0x22b2;
      uStack_a._0_2_ = 0xd251;
      local_36 = FUN_28b3_0f51();
      if (99 < local_36) {
        uStack_a._2_2_ = 0x22b2;
        uStack_a._0_2_ = 0xd264;
        func_0x000297e6();
        uStack_a._2_2_ = 0x22b2;
        uStack_a._0_2_ = 0xd269;
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uStack_12 = 0xd273;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0xd27b;
        func_0x000297e6();
        uStack_10 = 0x22b2;
        uStack_12 = 0xd280;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd28a;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd292;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd297;
        func_0x00029d78();
        uStack_20 = 0x22b2;
        uStack_22 = 0xd2a1;
        func_0x000299d1();
        uStack_20 = 0x22b2;
        uStack_22 = 0xd2a9;
        func_0x000297e6();
        uStack_20 = 0x22b2;
        uStack_22 = 0xd2ae;
        func_0x00029d78();
        local_2a = 0xd2b8;
        func_0x000299d1();
        local_2a = 0xd2bd;
        uStack_a = FUN_1000_0718();
        uVar6 = (undefined2)((ulong)uStack_a >> 0x10);
        uStack_c = 0xdef;
        uStack_e = 0xd2cd;
        local_2c = FUN_20a9_145e();
        local_32 = 0;
        local_34 = 0;
        local_2e = 0;
        local_30 = 0;
        local_26[0] = *(undefined1 *)0xb310;
        uStack_a._2_2_ = 0;
        uStack_a._0_2_ = 0x1bb4;
        uStack_c = 0xd2fd;
        local_2a = uVar6;
        func_0x0000daa6();
        puVar5 = (undefined2 *)local_26;
        puVar4 = local_42;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
        local_2a = 0xd312;
        iVar3 = FUN_13bf_01c1();
        uStack_a._2_2_ = 0x11f2;
        uStack_a._0_2_ = 0xd323;
        func_0x0000abfa();
        return iVar3 != 0;
      }
      break;
    }
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd10e;
    func_0x000297e6();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd116;
    func_0x00029b6d();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd11e;
    func_0x0002996b();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd123;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xd12d;
    func_0x000299d1();
    uStack_10 = *(undefined2 *)0xa416;
    uStack_12 = *(undefined2 *)0xa414;
    uStack_14 = *(undefined2 *)0xa412;
    uStack_16 = *(undefined2 *)0xa410;
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xd145;
    FUN_1def_05d1();
    uStack_a._2_2_ = 0x1bb4;
    uStack_a._0_2_ = 0xd15d;
    func_0x000297e6();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd162;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xd16c;
    func_0x000299d1();
    uStack_10 = *(undefined2 *)0xa416;
    uStack_12 = *(undefined2 *)0xa414;
    uStack_14 = *(undefined2 *)0xa412;
    uStack_16 = *(undefined2 *)0xa410;
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xd184;
    func_0x0001e558();
    uStack_a._2_2_ = 0x1bb4;
    uStack_a._0_2_ = 0xd19c;
    func_0x000297e6();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd1a1;
    func_0x00029af6();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd1a6;
    func_0x00029d78();
    uStack_a._2_2_ = 0x22b2;
    uStack_a._0_2_ = 0xd1ae;
    func_0x000299b9();
    uStack_10 = 0x22b2;
    uStack_12 = 0xd1b8;
    func_0x000299d1();
    uStack_10 = *(undefined2 *)0xa416;
    uStack_12 = *(undefined2 *)0xa414;
    uStack_14 = *(undefined2 *)0xa412;
    uStack_16 = *(undefined2 *)0xa410;
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xd1d0;
    FUN_1def_05d1();
    uStack_a._2_2_ = 0x1bb4;
    uStack_a._0_2_ = 0xd1e8;
    func_0x00029834();
    uStack_10 = 0x22b2;
    uStack_12 = 0xd1f2;
    func_0x000299d1();
    uStack_10 = *(undefined2 *)0xa416;
    uStack_12 = *(undefined2 *)0xa414;
    uStack_14 = *(undefined2 *)0xa412;
    uStack_16 = *(undefined2 *)0xa410;
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uVar6 = 0x1bb4;
    uStack_1c = 0xd20a;
    func_0x0001e558();
    local_46 = local_46 + 1;
  } while (local_46 < 0x65);
  *(undefined2 *)0xc22 = 1;
  uStack_a._2_2_ = 2;
  uStack_a._0_2_ = 0x12;
  uStack_e = 0xd33b;
  uStack_c = uVar6;
  FUN_1000_0599();
  uStack_a._2_2_ = 0x396;
  uStack_a._0_2_ = 0xdef;
  uStack_c = 0xd346;
  FUN_10ad_17a6();
  return false;
}



/* 3ab8:27cf  FUN_3ab8_27cf  1376 bytes, 1 callers */

int __cdecl16far
FUN_3ab8_27cf(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
             undefined2 param_13,undefined2 param_14,undefined2 param_15,undefined2 param_16,
             undefined2 param_17,undefined2 param_18,undefined2 param_19,undefined2 param_20,
             undefined2 param_21,undefined2 param_22,undefined2 param_23,undefined2 param_24)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  undefined1 in_ZF;
  undefined1 uVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 local_e;
  int local_c;
  int local_a;
  
  FUN_21f2_0ebc();
  local_c = 0;
  local_a = 0xd369;
  func_0x00029834();
  local_a = 0xd371;
  func_0x00029834();
  local_a = 0xd376;
  FUN_28b3_1181();
  if ((bool)in_ZF) {
    local_a = 0xd380;
    func_0x00029834();
    local_a = 0xd388;
    func_0x00029834();
    local_a = 0xd38d;
    FUN_28b3_1181();
    if ((bool)in_ZF) {
      local_a = 0xd397;
      func_0x00029834();
      local_a = 0xd39f;
      func_0x00029834();
      local_a = 0xd3a4;
      FUN_28b3_1181();
      if ((bool)in_ZF) {
        local_a = 0xd3ae;
        func_0x00029834();
        local_a = 0xd3b6;
        func_0x00029834();
        local_a = 0xd3bb;
        FUN_28b3_1181();
        if ((bool)in_ZF) {
          local_a = 0x22b2;
          local_c = 0xd3c6;
          FUN_10ad_17a6();
          *(undefined2 *)0xc22 = 1;
          local_a = 0x12;
          local_c = 0x11f2;
          local_e = 0xd3da;
          FUN_1000_0599();
          local_a = 0xdef;
          local_c = 0xd3e5;
          FUN_10ad_17a6();
          return 0;
        }
      }
    }
  }
  uVar4 = 0;
  local_a = 0xd3f4;
  func_0x00029834();
  local_a = 0xd3fc;
  func_0x00029834();
  local_a = 0xd401;
  FUN_28b3_1181();
  if ((bool)uVar4) {
    local_a = 0xd40b;
    func_0x00029834();
    local_a = 0xd413;
    func_0x00029834();
    local_a = 0xd418;
    FUN_28b3_1181();
    if ((bool)uVar4) {
      local_c = 1;
      param_9 = param_17;
      param_10 = param_18;
      param_11 = param_19;
      param_12 = param_20;
      param_13 = param_21;
      param_14 = param_22;
      param_15 = param_23;
      param_16 = param_24;
    }
  }
  local_a = 0xd43d;
  func_0x00029834();
  local_a = 0xd445;
  func_0x00029834();
  local_a = 0xd44a;
  FUN_28b3_1181();
  if ((bool)uVar4) {
    local_a = 0xd454;
    func_0x00029834();
    local_a = 0xd45c;
    func_0x00029834();
    local_a = 0xd461;
    FUN_28b3_1181();
    if ((bool)uVar4) {
      local_c = 1;
    }
  }
  local_a = 0xd470;
  func_0x00029834();
  local_a = 0xd478;
  func_0x00029834();
  local_a = 0xd47d;
  FUN_28b3_1181();
  if ((bool)uVar4) {
    local_a = 0xd487;
    func_0x00029834();
    local_a = 0xd48f;
    func_0x00029834();
    local_a = 0xd494;
    FUN_28b3_1181();
    if ((bool)uVar4) {
      local_c = 1;
      param_1 = param_9;
      param_2 = param_10;
      param_3 = param_11;
      param_4 = param_12;
      param_5 = param_13;
      param_6 = param_14;
      param_7 = param_15;
      param_8 = param_16;
    }
  }
  if (local_c != 0) {
    local_a = 0xd4c2;
    func_0x00029834();
    local_a = 0xd4ca;
    func_0x00029bfc();
    local_a = 0xd4d2;
    func_0x0002996b();
    local_a = 0xd4da;
    func_0x00029b6d();
    local_a = 0xd4e2;
    func_0x00029834();
    local_a = 0xd4ea;
    func_0x00029bfc();
    local_a = 0xd4f2;
    func_0x0002996b();
    local_a = 0xd4fa;
    func_0x00029b6d();
    local_a = 0xd4ff;
    FUN_28b3_117c();
    local_a = 0xd504;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    uVar12 = 0x22b2;
    FUN_28b3_1582();
    local_a = 0xd51d;
    func_0x00029834();
    local_a = 0xd526;
    func_0x00029c2c();
    local_a = 0xd52e;
    func_0x00029983();
    local_a = 0xd536;
    func_0x000297e6();
    local_a = 0xd53f;
    func_0x00029b6d();
    local_a = 0xd544;
    func_0x00029d78();
    local_a = 0xd54c;
    func_0x00029c74();
    local_a = 0xd554;
    func_0x0002996b();
    local_a = 0xd55c;
    func_0x00029983();
    local_a = 0xd564;
    func_0x000297e6();
    local_a = 0xd56d;
    func_0x00029b6d();
    local_a = 0xd572;
    func_0x00029d78();
    local_a = 0xd57a;
    func_0x00029c74();
    local_a = 0xd582;
    func_0x0002996b();
    local_a = 0xd58a;
    func_0x00029983();
    iVar1 = *(int *)0x14c;
    local_a = 0xd5a9;
    iVar2 = iVar1 + 2;
    func_0x000297e6();
    local_c = 0x22b2;
    local_e = 0xd5b0;
    local_a = iVar1 + 2;
    func_0x00000271();
    local_a = 0xd5bb;
    func_0x00029987();
    local_a = 0xd5c3;
    func_0x000297e6();
    local_c = 0x22b2;
    local_e = 0xd5ce;
    local_a = iVar2;
    func_0x00000271();
    uVar9 = 0x22b2;
    local_a = 0xd5dc;
    func_0x00029987();
LAB_3ab8_2a5c:
    local_e = 0xd5e7;
    local_c = uVar9;
    local_a = iVar2;
    uVar7 = func_0x00000271();
    uVar10 = (undefined2)((ulong)uVar7 >> 0x10);
    *(undefined2 *)((int)uVar7 + 8) = uVar12;
    *(undefined2 *)((int)uVar7 + 10) = local_e;
    return iVar2;
  }
  local_a = param_15;
  local_c = param_14;
  local_e = param_13;
  iVar2 = FUN_1def_043a(0x22b2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,param_10,param_11,param_12);
  if (iVar2 != 0) {
    local_a = param_15;
    local_c = param_14;
    local_e = param_13;
    FUN_1def_05d1(0x1bb4,1,param_9,param_10,param_11,param_12);
    local_a = param_23;
    local_c = param_22;
    local_e = param_21;
    FUN_1def_05d1(0x1bb4,1,param_17,param_18,param_19,param_20);
    local_a = 0xd6ae;
    func_0x00029834();
    local_a = param_23;
    local_c = param_22;
    local_e = param_21;
    func_0x0001e558(0x22b2,1,param_17,param_18,param_19,param_20);
    local_a = 0xd6d9;
    func_0x000297e6();
    local_a = 0xd6e1;
    func_0x0002996b();
    local_a = 0xd6e6;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x00029f30(0x22b2);
    uVar4 = (undefined1 *)0xfff7 < &local_e;
    uVar5 = &stack0x0000 == (undefined1 *)0x6;
    local_a = 0xd6ff;
    func_0x00029834();
    local_a = 0xd704;
    FUN_28b3_1181();
    if (!(bool)uVar4 && !(bool)uVar5) {
      local_a = 0xd719;
      func_0x000297e6();
      local_a = 0xd71e;
      func_0x00029d78();
      local_a = 0xd727;
      func_0x00029c2c();
      local_a = 0xd72f;
      func_0x0002996b();
      local_a = 0xd738;
      func_0x00029b6d();
      local_a = 0xd740;
      func_0x00029bb5();
      local_a = 0xd748;
      func_0x00029b6d();
      local_a = 0xd750;
      func_0x000297e6();
      local_a = 0xd758;
      func_0x00029b6d();
      local_a = 0xd75d;
      FUN_28b3_117c();
      local_a = 0xd766;
      func_0x000297e6();
      local_a = 0xd76e;
      func_0x00029b6d();
      local_a = 0xd773;
      FUN_28b3_1172();
      local_a = 0xd77b;
      func_0x0002996b();
      local_a = 0xd783;
      func_0x00029983();
      local_a = 0xd78b;
      func_0x000297e6();
      local_a = 0xd793;
      func_0x00029b6d();
      local_a = 0xd79b;
      func_0x000297e6();
      local_a = 0xd7a3;
      func_0x00029b6d();
      local_a = 0xd7a8;
      FUN_28b3_117c();
      local_a = 0xd7ad;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      FUN_28b3_1582(0x22b2);
      local_a = 0xd7c6;
      func_0x00029834();
      local_a = 0xd7ce;
      func_0x00029983();
      local_a = 0xd7d6;
      func_0x000297e6();
      local_a = 0xd7db;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar10 = 0xd7f2;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2,param_17,param_18,uVar10);
      iVar2 = FUN_1def_05d1(0x22b2,0);
      uVar10 = *(undefined2 *)(iVar2 + 2);
      local_a = 0xd81c;
      func_0x000297e6();
      local_a = 0xd821;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar12 = 0x22b2;
      uVar11 = 0xd838;
      func_0x00029d78();
      func_0x000299d1(0x22b2,uVar10,param_18,uVar11);
      uVar9 = 0;
      puVar3 = (undefined2 *)func_0x0001e558(0x22b2);
      uVar11 = *puVar3;
      uVar8 = puVar3[1];
      iVar2 = *(int *)0x14c + 2;
      local_c = 0x1bb4;
      local_e = 0xd874;
      local_a = iVar2;
      puVar6 = (undefined2 *)func_0x00000271();
      *puVar6 = uVar9;
      ((undefined2 *)puVar6)[1] = uVar10;
      local_c = 0;
      uVar9 = 0;
      local_e = 0xd892;
      local_a = iVar2;
      uVar7 = func_0x00000271();
      uVar10 = (undefined2)((ulong)uVar7 >> 0x10);
      *(undefined2 *)((int)uVar7 + 4) = uVar11;
      *(undefined2 *)((int)uVar7 + 6) = uVar8;
      goto LAB_3ab8_2a5c;
    }
    local_a = 0x22b2;
    local_c = 0xd70e;
    FUN_3ab8_0052();
  }
  return 0;
}



/* 3000:d8af  FUN_3000_d8af  1126 bytes, 0 callers */

undefined2 __cdecl16far FUN_3000_d8af(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  long lVar4;
  undefined4 uVar5;
  undefined2 local_1b6;
  undefined2 local_1b4;
  undefined2 local_1b2;
  undefined2 local_1b0;
  undefined2 local_1ae;
  undefined2 ***local_1ac;
  undefined2 ***local_1aa;
  undefined2 local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  int local_19e;
  undefined1 local_19c [100];
  int local_138;
  undefined2 ***local_136;
  int aiStack_134 [4];
  int local_12c;
  int local_12a;
  int local_128;
  int local_126;
  int local_120;
  undefined1 local_11e [72];
  int local_d6;
  int local_44;
  undefined2 auStack_42 [4];
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 ***local_36;
  undefined2 local_34;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  int iStack_2a;
  int iStack_28;
  int iStack_26;
  int iStack_24;
  int iStack_22;
  int iStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 ****appppuStack_16 [8];
  
  uVar3 = 0x22b2;
  FUN_21f2_0ebc();
LAB_3ab8_2d3c:
  local_d6 = 0;
  local_19e = 0;
  do {
    appppuStack_16[7] = (undefined2 ****)0x5cd6;
    appppuStack_16[6] = (undefined2 ****)local_19c;
    appppuStack_16[4] = (undefined2 ****)0xd8d4;
    appppuStack_16[5] = (undefined2 ****)uVar3;
    FUN_21f2_3454();
    local_138 = 1;
    do {
      appppuStack_16[7] = (undefined2 ****)local_11e;
      appppuStack_16[6] = (undefined2 ****)0x0;
      appppuStack_16[5] = (undefined2 ****)local_138;
      appppuStack_16[4] = (undefined2 ****)0x22b2;
      appppuStack_16[3] = (undefined2 ****)0xd8ec;
      FUN_3ab8_21a4();
      appppuStack_16[7] = (undefined2 ****)local_11e;
      appppuStack_16[6] = (undefined2 ****)local_19c;
      appppuStack_16[5] = (undefined2 ****)0x22b2;
      appppuStack_16[4] = (undefined2 ****)0xd8fe;
      FUN_21f2_2d26();
      local_138 = local_138 + 1;
    } while (local_138 < 5);
    appppuStack_16[7] = (undefined2 ****)local_19c;
    appppuStack_16[6] = (undefined2 ****)0x4;
    appppuStack_16[5] = (undefined2 ****)0x22b2;
    appppuStack_16[4] = (undefined2 ****)0xd919;
    FUN_1def_07a4();
    *(undefined2 *)0xc2c = 1;
    appppuStack_16[7] = &local_136;
    appppuStack_16[6] = (undefined2 ****)&local_1b6;
    appppuStack_16[5] = &local_1ac;
    appppuStack_16[4] = (undefined2 ****)local_19c;
    appppuStack_16[3] = (undefined2 ****)0x0;
    appppuStack_16[2] = (undefined2 ****)0x1bb4;
    uVar3 = 0x1bb4;
    appppuStack_16[1] = (undefined2 ****)0xd93d;
    local_19e = FUN_1def_0904();
    *(undefined2 *)0xc2c = 0;
    if (((*(int *)0x158 != 0) || (local_19e == 0x14)) || (local_19e == -1)) {
      return 1;
    }
  } while ((local_19e < 1) || (4 < local_19e));
  local_d6 = 0;
  do {
    appppuStack_16[7] = (undefined2 ****)local_11e;
    local_1a0 = 1;
    appppuStack_16[6] = (undefined2 ****)0x1;
    appppuStack_16[5] = (undefined2 ****)local_19e;
    appppuStack_16[3] = (undefined2 ****)0xd98c;
    appppuStack_16[4] = (undefined2 ****)uVar3;
    FUN_3ab8_21a4();
LAB_3ab8_2e0f:
    do {
      while( true ) {
        while( true ) {
          appppuStack_16[7] = (undefined2 ****)local_11e;
          appppuStack_16[6] = (undefined2 ****)local_19c;
          appppuStack_16[4] = (undefined2 ****)0xd99e;
          appppuStack_16[5] = (undefined2 ****)uVar3;
          FUN_21f2_3454();
          local_1b2 = 0;
          local_120 = local_1a0;
          if ((local_19e == 2) && (2 < local_1a0)) {
            local_1b2 = 1;
            local_120 = 0;
          }
          if ((local_19e == 3) && (local_120 = 0, 1 < local_1a0)) {
            local_1b2 = 1;
            local_120 = local_1a0 + -1;
          }
          if ((local_19e == 4) && (0 < local_1a0)) {
            local_1b2 = 1;
            local_120 = local_1a0;
          }
          if ((local_19e == 5) && (0 < local_1a0)) {
            local_1b2 = 5;
            local_120 = local_1a0;
          }
          appppuStack_16[7] = (undefined2 ****)local_19c;
          appppuStack_16[6] = (undefined2 ****)local_120;
          appppuStack_16[5] = (undefined2 ****)local_1b2;
          appppuStack_16[4] = (undefined2 ****)0x22b2;
          appppuStack_16[3] = (undefined2 ****)0xda2c;
          FUN_3ab8_223d();
          *(undefined2 *)0xc2c = 1;
          *(undefined2 *)0xc20 = 0;
          if (((local_19e == 1) || ((local_19e == 2 && (local_1a0 < 3)))) ||
             ((local_19e == 3 && (local_1a0 < 2)))) {
            *(undefined2 *)0xc20 = 1;
          }
          if ((local_1a0 == 1) && (local_d6 == 0)) {
            local_1a8 = 0;
          }
          else {
            local_1a8 = 1;
          }
          appppuStack_16[7] = &local_136;
          appppuStack_16[6] = (undefined2 ****)&local_1b6;
          appppuStack_16[5] = &local_1ac;
          appppuStack_16[4] = (undefined2 ****)local_19c;
          appppuStack_16[3] = (undefined2 ****)local_1a8;
          appppuStack_16[2] = (undefined2 ****)0x22b2;
          uVar3 = 0x1bb4;
          appppuStack_16[1] = (undefined2 ****)0xda9d;
          local_44 = FUN_1def_0904();
          *(undefined2 *)0xc2c = 0;
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 != 0) {
            return 1;
          }
          if (((local_44 != -1) || (local_d6 < 1)) || (local_1a0 != 1)) break;
          appppuStack_16[7] = (undefined2 ****)0x0;
          appppuStack_16[6] = (undefined2 ****)0x1bb4;
          appppuStack_16[5] = (undefined2 ****)0xdacd;
          func_0x0000daa6();
          local_1b0 = *(undefined2 *)0x14c;
          local_1ae = *(undefined2 *)0x14e;
          appppuStack_16[5] = (undefined2 ****)0x885;
          appppuStack_16[4] = (undefined2 ****)0xdae4;
          appppuStack_16[6] = (undefined2 ****)local_1b0;
          appppuStack_16[7] = (undefined2 ****)local_1ae;
          FUN_13bf_0327();
          local_d6 = 0;
          appppuStack_16[7] = (undefined2 ****)0x11f2;
          uVar3 = 0x885;
          appppuStack_16[6] = (undefined2 ****)0xdaf1;
          func_0x0000abfa();
        }
        if ((local_44 != -1) || (local_1a0 < 2)) break;
        local_1a0 = local_1a0 + -1;
      }
      if (local_44 == 0x14) goto LAB_3ab8_2d3c;
    } while ((undefined2 ****)local_136 == (undefined2 ****)0x0);
    if (((local_19e == 1) || ((local_19e == 2 && (local_1a0 < 3)))) ||
       ((local_19e == 3 && (local_1a0 < 2)))) {
      appppuStack_16[7] = (undefined2 ****)&local_1b6;
      appppuStack_16[6] = &local_1ac;
      appppuStack_16[5] = (undefined2 ****)local_136;
      appppuStack_16[4] = (undefined2 ****)0x1bb4;
      uVar3 = 0x11f2;
      appppuStack_16[3] = (undefined2 ****)0xdb50;
      iVar1 = FUN_13bf_1819();
      if (iVar1 == 0) goto LAB_3ab8_2e0f;
      aiStack_134[local_1a0 * 2 + 1] = 0;
      aiStack_134[local_1a0 * 2] = 0;
      lVar4 = local_1a4;
    }
    else {
      appppuStack_16[7] = (undefined2 ****)0x1bb4;
      appppuStack_16[6] = (undefined2 ****)0xdb78;
      func_0x000297e6();
      appppuStack_16[7] = (undefined2 ****)0x22b2;
      appppuStack_16[6] = (undefined2 ****)0xdb7d;
      func_0x00029d78();
      appppuStack_16[3] = (undefined2 ****)0x22b2;
      appppuStack_16[2] = (undefined2 ****)0xdb87;
      func_0x000299d1();
      appppuStack_16[3] = (undefined2 ****)0x22b2;
      appppuStack_16[2] = (undefined2 ****)0xdb90;
      func_0x000297e6();
      appppuStack_16[3] = (undefined2 ****)0x22b2;
      appppuStack_16[2] = (undefined2 ****)0xdb95;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xdb9f;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uVar3 = 0x11f2;
      uStack_1a = 0xdba4;
      lVar4 = FUN_13bf_39a0();
      local_1a4 = lVar4;
      if (lVar4 == 0) goto LAB_3ab8_2e0f;
      if (lVar4 < 0) {
        iVar1 = -(int)lVar4;
        iVar2 = -((int)((ulong)lVar4 >> 0x10) + (uint)((int)lVar4 != 0));
        appppuStack_16[5] = (undefined2 ****)0x11f2;
        appppuStack_16[4] = (undefined2 ****)0xdbd3;
        appppuStack_16[6] = (undefined2 ****)iVar1;
        appppuStack_16[7] = (undefined2 ****)iVar2;
        uVar5 = func_0x00000271();
        if (0x270e < *(uint *)((int)uVar5 + 0xc)) {
          appppuStack_16[5] = (undefined2 ****)0x0;
          uVar3 = 0;
          appppuStack_16[4] = (undefined2 ****)0xdbe8;
          appppuStack_16[6] = (undefined2 ****)iVar1;
          appppuStack_16[7] = (undefined2 ****)iVar2;
          uVar5 = func_0x00000271();
          lVar4 = local_1a4;
          if (*(uint *)((int)uVar5 + 0xc) < 0x2712) goto LAB_3ab8_3082;
        }
        uVar3 = 0;
        appppuStack_16[7] = (undefined2 ****)0x1;
        appppuStack_16[6] = (undefined2 ****)0x0;
        appppuStack_16[5] = (undefined2 ****)0xdbfe;
        FUN_3ab8_0052();
        goto LAB_3ab8_2e0f;
      }
LAB_3ab8_3082:
      local_1a4._2_2_ = (int)((ulong)lVar4 >> 0x10);
      local_1a4._0_2_ = (int)lVar4;
      aiStack_134[local_1a0 * 2] = (int)local_1a4;
      aiStack_134[local_1a0 * 2 + 1] = local_1a4._2_2_;
    }
    appppuStack_16[local_1a0 * 2] = (undefined2 ****)local_1ac;
    appppuStack_16[local_1a0 * 2 + 1] = (undefined2 ****)local_1aa;
    auStack_42[local_1a0 * 2] = local_1b6;
    auStack_42[local_1a0 * 2 + 1] = local_1b4;
    local_1a4 = lVar4;
    if (local_1a0 < 3) {
      local_1a0 = local_1a0 + 1;
      goto LAB_3ab8_2e0f;
    }
    appppuStack_16[6] = (undefined2 ****)0xdc42;
    appppuStack_16[7] = (undefined2 ****)uVar3;
    func_0x0000c3ca();
    local_d6 = 0;
    uVar3 = 0x885;
    if ((local_19e == 4) &&
       ((((aiStack_134[2] == local_12c && (aiStack_134[3] == local_12a)) ||
         ((local_12c == local_128 && (local_12a == local_126)))) ||
        ((aiStack_134[2] == local_128 && (aiStack_134[3] == local_126)))))) {
      appppuStack_16[7] = (undefined2 ****)0x3;
      appppuStack_16[6] = (undefined2 ****)0x885;
      appppuStack_16[5] = (undefined2 ****)0xdc8b;
      FUN_3ab8_0052();
    }
    else {
      appppuStack_16[7] = (undefined2 ****)local_34;
      appppuStack_16[6] = (undefined2 ****)local_36;
      appppuStack_16[5] = (undefined2 ****)local_34;
      appppuStack_16[4] = (undefined2 ****)local_36;
      appppuStack_16[3] = (undefined2 ****)local_38;
      appppuStack_16[2] = (undefined2 ****)local_3a;
      appppuStack_16[1] = (undefined2 ****)local_34;
      appppuStack_16[0] = (undefined2 ****)local_36;
      uStack_18 = auStack_42[3];
      uStack_1a = auStack_42[2];
      uStack_1c = local_38;
      uStack_1e = local_3a;
      iStack_20 = local_126;
      iStack_22 = local_128;
      iStack_24 = local_12a;
      iStack_26 = local_12c;
      iStack_28 = aiStack_134[3];
      iStack_2a = aiStack_134[2];
      uStack_2c = 0x885;
      uStack_2e = 0xdcd6;
      local_d6 = FUN_3ab8_1db6();
      if (local_d6 == 0) {
        appppuStack_16[7] = (undefined2 ****)0x1dc;
        appppuStack_16[6] = (undefined2 ****)0x885;
        appppuStack_16[5] = (undefined2 ****)0xdced;
        FUN_10ad_17a6();
        *(undefined2 *)0xc22 = 1;
        appppuStack_16[7] = (undefined2 ****)0x2;
        appppuStack_16[6] = (undefined2 ****)0x12;
        appppuStack_16[5] = (undefined2 ****)0x11f2;
        appppuStack_16[4] = (undefined2 ****)0xdd01;
        FUN_1000_0599();
        appppuStack_16[7] = (undefined2 ****)0x396;
        appppuStack_16[6] = (undefined2 ****)0xdef;
        appppuStack_16[5] = (undefined2 ****)0xdd0c;
        FUN_10ad_17a6();
        uVar3 = 0x11f2;
      }
    }
  } while( true );
}



/* 3000:dd15  FUN_3000_dd15  1814 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far FUN_3000_dd15(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  undefined2 **local_1ea;
  undefined2 **local_1e8;
  undefined2 **local_1e0;
  undefined2 **local_1de;
  undefined2 local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  int local_1d2;
  undefined1 local_1d0 [102];
  undefined2 ***local_16a;
  undefined1 *apuStack_168 [4];
  undefined1 *local_160;
  undefined2 local_15e;
  undefined1 *local_15c;
  undefined2 local_15a;
  int local_150;
  undefined2 local_11c [11];
  int local_106;
  undefined2 local_104 [39];
  undefined2 local_b6 [40];
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  int local_60;
  undefined2 **appuStack_5e [4];
  undefined1 *local_56;
  undefined2 local_54;
  undefined2 auStack_4a [11];
  undefined2 auStack_34 [9];
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined1 *puStack_1e;
  undefined2 uStack_1c;
  undefined2 ***apppuStack_1a [8];
  
  FUN_21f2_0ebc();
  apppuStack_1a[7] = (undefined2 ***)0x22b2;
  apppuStack_1a[6] = (undefined2 ***)0xdd30;
  FUN_21f2_3454();
  apppuStack_1a[7] = (undefined2 ***)0x22b2;
  apppuStack_1a[6] = (undefined2 ***)0xdd40;
  FUN_21f2_3454();
  apppuStack_1a[7] = (undefined2 ***)0x22b2;
  apppuStack_1a[6] = (undefined2 ***)0xdd51;
  FUN_21f2_2d26();
  apppuStack_1a[7] = (undefined2 ***)0x22b2;
  apppuStack_1a[6] = (undefined2 ***)0xdd60;
  FUN_21f2_3454();
  apppuStack_1a[7] = (undefined2 ***)0x22b2;
  uVar7 = 0x22b2;
  apppuStack_1a[6] = (undefined2 ***)0xdd70;
  FUN_21f2_2d26();
LAB_3ab8_31f2:
  local_106 = 0;
  local_1d2 = 0;
  do {
    apppuStack_1a[6] = (undefined2 ***)0xdd8a;
    apppuStack_1a[7] = (undefined2 ***)uVar7;
    FUN_21f2_3454();
    apppuStack_1a[7] = (undefined2 ***)0x22b2;
    apppuStack_1a[6] = (undefined2 ***)0xdd9a;
    FUN_21f2_2d26();
    apppuStack_1a[7] = (undefined2 ***)0x22b2;
    apppuStack_1a[6] = (undefined2 ***)0xddaa;
    FUN_21f2_2d26();
    apppuStack_1a[7] = (undefined2 ***)0x1;
    apppuStack_1a[6] = (undefined2 ***)0x22b2;
    apppuStack_1a[5] = (undefined2 ***)0xddbc;
    FUN_3ab8_21a4();
    apppuStack_1a[7] = (undefined2 ***)0x22b2;
    apppuStack_1a[6] = (undefined2 ***)0xddce;
    FUN_21f2_2d26();
    apppuStack_1a[7] = (undefined2 ***)0x22b2;
    apppuStack_1a[6] = (undefined2 ***)0xdddf;
    FUN_21f2_2d26();
    apppuStack_1a[7] = (undefined2 ***)0x22b2;
    apppuStack_1a[6] = (undefined2 ***)0xddef;
    FUN_21f2_2d26();
    apppuStack_1a[7] = (undefined2 ***)0x22b2;
    apppuStack_1a[6] = (undefined2 ***)0xddff;
    FUN_21f2_2d26();
    apppuStack_1a[7] = (undefined2 ***)0x22b2;
    apppuStack_1a[6] = (undefined2 ***)0xde0f;
    FUN_21f2_2d26();
    apppuStack_1a[7] = (undefined2 ***)0x22b2;
    apppuStack_1a[6] = (undefined2 ***)0xde1f;
    FUN_1def_07a4();
    *(undefined2 *)0xc2c = 1;
    apppuStack_1a[7] = &local_1e0;
    apppuStack_1a[6] = (undefined2 ***)local_1d0;
    apppuStack_1a[5] = (undefined2 ***)0x0;
    apppuStack_1a[4] = (undefined2 ***)0x1bb4;
    uVar7 = 0x1bb4;
    apppuStack_1a[3] = (undefined2 ***)0xde43;
    local_1d2 = FUN_1def_0904();
    *(undefined2 *)0xc2c = 0;
    if (((*(int *)0x158 != 0) || (local_1d2 == 0x14)) || (local_1d2 == -1)) {
      return 1;
    }
  } while ((local_1d2 < 1) || (3 < local_1d2));
  local_106 = 0;
LAB_3ab8_32fd:
  uVar8 = uVar7;
  if (local_1d2 == 1) {
    uVar8 = 0x22b2;
    apppuStack_1a[6] = (undefined2 ***)0xde92;
    apppuStack_1a[7] = (undefined2 ***)uVar7;
    FUN_21f2_3454();
  }
  uVar7 = uVar8;
  if (local_1d2 == 2) {
    uVar7 = 0x22b2;
    apppuStack_1a[6] = (undefined2 ***)0xdeaa;
    apppuStack_1a[7] = (undefined2 ***)uVar8;
    FUN_21f2_3454();
  }
  uVar8 = uVar7;
  if (local_1d2 == 3) {
    uVar8 = 0x22b2;
    apppuStack_1a[6] = (undefined2 ***)0xdec1;
    apppuStack_1a[7] = (undefined2 ***)uVar7;
    FUN_21f2_3454();
  }
  uVar7 = 0x22b2;
  apppuStack_1a[6] = (undefined2 ***)0xded1;
  apppuStack_1a[7] = (undefined2 ***)uVar8;
  FUN_21f2_2d26();
  local_1d4 = 1;
LAB_3ab8_3359:
  do {
    while( true ) {
      while( true ) {
        apppuStack_1a[6] = (undefined2 ***)0xdee8;
        apppuStack_1a[7] = (undefined2 ***)uVar7;
        FUN_21f2_3454();
        apppuStack_1a[7] = (undefined2 ***)0x22b2;
        apppuStack_1a[6] = (undefined2 ***)0xdef8;
        FUN_21f2_2d26();
        local_150 = local_1d4;
        if (local_1d2 == 1) {
          if (local_1d4 == 2) {
            apppuStack_1a[7] = (undefined2 ***)0x22b2;
            apppuStack_1a[6] = (undefined2 ***)0xdf25;
            FUN_21f2_2d26();
          }
          if (local_1d4 < 3) {
            apppuStack_1a[7] = (undefined2 ***)0x22b2;
            apppuStack_1a[6] = (undefined2 ***)0xdf3c;
            FUN_21f2_2d26();
          }
          if (local_1d4 == 1) {
            apppuStack_1a[7] = (undefined2 ***)0x22b2;
            apppuStack_1a[6] = (undefined2 ***)0xdf53;
            FUN_21f2_2d26();
          }
          if (local_1d4 == 2) {
            apppuStack_1a[7] = (undefined2 ***)0x22b2;
            apppuStack_1a[6] = (undefined2 ***)0xdf6a;
            FUN_21f2_2d26();
          }
          if (local_1d4 == 3) {
            apppuStack_1a[7] = (undefined2 ***)0x22b2;
            apppuStack_1a[6] = (undefined2 ***)0xdf81;
            FUN_21f2_2d26();
          }
          apppuStack_1a[7] = (undefined2 ***)0x22b2;
          apppuStack_1a[6] = (undefined2 ***)0xdf91;
          FUN_21f2_2d26();
          apppuStack_1a[7] = (undefined2 ***)0x22b2;
          apppuStack_1a[6] = (undefined2 ***)0xdfa1;
          FUN_21f2_2d26();
        }
        if (local_1d2 == 2) {
          local_150 = local_1d4;
          apppuStack_1a[7] = (undefined2 ***)0x5;
          apppuStack_1a[6] = (undefined2 ***)0x22b2;
          apppuStack_1a[5] = (undefined2 ***)0xdfc4;
          FUN_3ab8_223d();
        }
        if (local_1d2 == 3) {
          local_150 = local_1d4;
          apppuStack_1a[7] = (undefined2 ***)0x5;
          apppuStack_1a[6] = (undefined2 ***)0x22b2;
          apppuStack_1a[5] = (undefined2 ***)0xdfe8;
          FUN_3ab8_223d();
        }
        *(undefined2 *)0xc2c = 1;
        *(undefined2 *)0xc20 = 0;
        if (local_1d2 == 1) {
          *(undefined2 *)0xc20 = 1;
        }
        if ((local_1d4 == 1) && (local_106 == 0)) {
          local_1dc = 0;
        }
        else {
          local_1dc = 1;
        }
        apppuStack_1a[7] = &local_1e0;
        apppuStack_1a[6] = (undefined2 ***)local_1d0;
        apppuStack_1a[5] = (undefined2 ***)local_1dc;
        apppuStack_1a[4] = (undefined2 ***)0x22b2;
        uVar7 = 0x1bb4;
        apppuStack_1a[3] = (undefined2 ***)0xe03d;
        local_60 = FUN_1def_0904();
        *(undefined2 *)0xc2c = 0;
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) {
          return 1;
        }
        if (((local_60 != -1) || (local_106 < 1)) || (local_1d4 != 1)) break;
        apppuStack_1a[7] = (undefined2 ***)0xe06d;
        func_0x0000daa6();
        apppuStack_1a[7] = (undefined2 ***)0x885;
        apppuStack_1a[6] = (undefined2 ***)0xe084;
        FUN_13bf_0327();
        local_106 = 0;
        uVar7 = 0x885;
        func_0x0000abfa();
      }
      if ((local_60 != -1) || (local_1d4 < 2)) break;
      local_1d4 = local_1d4 + -1;
    }
    if (local_60 == 0x14) goto LAB_3ab8_31f2;
  } while (local_16a == (undefined2 ***)0x0);
  if (local_1d2 == 1) {
    apppuStack_1a[7] = local_16a;
    apppuStack_1a[6] = (undefined2 ***)0x1bb4;
    uVar7 = 0x11f2;
    apppuStack_1a[5] = (undefined2 ***)0xe0d7;
    iVar3 = FUN_13bf_1819();
    if (iVar3 == 0) goto LAB_3ab8_3359;
    uVar9 = local_1d4 == 2;
    if (local_1d4 < 2) {
LAB_3ab8_3598:
      uVar9 = local_1d4 == 3;
      puVar10 = local_1d8;
      if ((bool)uVar9) {
        func_0x000297e6();
        func_0x000297e6();
        uVar7 = 0x22b2;
        FUN_28b3_1181();
        puVar10 = local_1d8;
        if ((bool)uVar9) {
          func_0x000297e6();
          func_0x000297e6();
          uVar7 = 0x22b2;
          FUN_28b3_1181();
          puVar10 = local_1d8;
          if ((bool)uVar9) goto LAB_3ab8_35cf;
        }
      }
      apuStack_168[local_1d4 * 2 + 1] = (undefined1 *)0x0;
      apuStack_168[local_1d4 * 2] = (undefined1 *)0x0;
LAB_3ab8_36ee:
      apppuStack_1a[local_1d4 * 2] = (undefined2 ***)local_1e0;
      apppuStack_1a[local_1d4 * 2 + 1] = (undefined2 ***)local_1de;
      appuStack_5e[local_1d4 * 2] = local_1ea;
      appuStack_5e[local_1d4 * 2 + 1] = local_1e8;
      local_1d8 = puVar10;
      if (((local_1d2 < 3) && (2 < local_1d4)) || ((local_1d2 == 3 && (3 < local_1d4))))
      goto LAB_3ab8_371e;
      local_1d4 = local_1d4 + 1;
      goto LAB_3ab8_3359;
    }
    func_0x000297e6();
    func_0x000297e6();
    uVar7 = 0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar9) goto LAB_3ab8_3598;
    func_0x000297e6();
    func_0x000297e6();
    uVar7 = 0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar9) goto LAB_3ab8_3598;
LAB_3ab8_35cf:
    apppuStack_1a[7] = (undefined2 ***)0xe158;
    FUN_10ad_17a6();
    *(undefined2 *)0xc22 = 1;
    apppuStack_1a[7] = (undefined2 ***)0x11f2;
    apppuStack_1a[6] = (undefined2 ***)0xe16c;
    FUN_1000_0599();
LAB_3ab8_35f1:
    apppuStack_1a[7] = (undefined2 ***)0xe177;
    FUN_10ad_17a6();
  }
  else {
    func_0x000297e6();
    func_0x00029d78();
    apppuStack_1a[5] = (undefined2 ***)0x22b2;
    apppuStack_1a[4] = (undefined2 ***)0xe1a8;
    func_0x000299d1();
    apppuStack_1a[5] = (undefined2 ***)0x22b2;
    apppuStack_1a[4] = (undefined2 ***)0xe1b1;
    func_0x000297e6();
    apppuStack_1a[5] = (undefined2 ***)0x22b2;
    apppuStack_1a[4] = (undefined2 ***)0xe1b6;
    func_0x00029d78();
    apppuStack_1a[1] = (undefined2 ***)0x22b2;
    apppuStack_1a[0] = (undefined2 ***)0xe1c0;
    func_0x000299d1();
    apppuStack_1a[1] = (undefined2 ***)0x22b2;
    uVar7 = 0x11f2;
    apppuStack_1a[0] = (undefined2 ***)0xe1c5;
    puVar10 = (undefined1 *)FUN_13bf_39a0();
    local_1d8 = puVar10;
    if ((puVar10 == (undefined1 *)0x0) || ((local_1d2 == 5 && ((long)puVar10 < 0))))
    goto LAB_3ab8_3359;
    if ((long)puVar10 < 0) {
      *(undefined2 *)0xc22 = 1;
      apppuStack_1a[7] = (undefined2 ***)0x11f2;
      apppuStack_1a[6] = (undefined2 ***)0xe202;
      FUN_1000_0599();
      goto LAB_3ab8_35f1;
    }
    if ((((local_1d4 < 2) || (puVar10 != (undefined1 *)CONCAT22(apuStack_168[3],apuStack_168[2])))
        && ((local_1d4 < 3 || (puVar10 != (undefined1 *)CONCAT22(local_15e,local_160))))) &&
       ((local_1d4 < 4 || (puVar10 != (undefined1 *)CONCAT22(local_15a,local_15c))))) {
      apuStack_168[local_1d4 * 2] = (undefined1 *)puVar10;
      apuStack_168[local_1d4 * 2 + 1] = (undefined1 *)((ulong)puVar10 >> 0x10);
      goto LAB_3ab8_36ee;
    }
    apppuStack_1a[7] = (undefined2 ***)0xe257;
    FUN_3ab8_0052();
  }
  uVar7 = 0x11f2;
  goto LAB_3ab8_3359;
LAB_3ab8_371e:
  uVar7 = 0x885;
  func_0x0000c3ca();
  local_106 = 0;
  if (local_1d2 == 1) {
    apppuStack_1a[5] = (undefined2 ***)local_54;
    apppuStack_1a[4] = (undefined2 ***)local_56;
    apppuStack_1a[3] = (undefined2 ***)local_54;
    apppuStack_1a[2] = (undefined2 ***)local_56;
    apppuStack_1a[1] = (undefined2 ***)appuStack_5e[3];
    apppuStack_1a[0] = (undefined2 ***)appuStack_5e[2];
    uStack_1c = local_54;
    puStack_1e = local_56;
    uStack_20 = 0x885;
    uStack_22 = 0xe2d8;
    local_106 = FUN_3ab8_235b();
  }
  if (local_1d2 == 2) {
    apppuStack_1a[7] = (undefined2 ***)0x885;
    apppuStack_1a[6] = (undefined2 ***)0xe2f6;
    puVar11 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar11;
    puVar5 = local_b6;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    apppuStack_1a[7] = (undefined2 ***)0x0;
    apppuStack_1a[6] = (undefined2 ***)0xe316;
    puVar11 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar11;
    puVar5 = local_104;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    apppuStack_1a[7] = (undefined2 ***)0x0;
    uVar7 = 0;
    apppuStack_1a[6] = (undefined2 ***)0xe336;
    puVar11 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar11;
    puVar5 = local_11c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    apppuStack_1a[5] = (undefined2 ***)local_54;
    apppuStack_1a[4] = (undefined2 ***)local_56;
    apppuStack_1a[3] = (undefined2 ***)local_54;
    apppuStack_1a[2] = (undefined2 ***)local_56;
    apppuStack_1a[1] = (undefined2 ***)appuStack_5e[3];
    apppuStack_1a[0] = (undefined2 ***)appuStack_5e[2];
    uStack_1c = local_54;
    puStack_1e = local_56;
    puVar4 = auStack_34;
    puVar5 = local_11c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar11;
    }
    puVar4 = auStack_4a;
    puVar5 = local_104;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar11;
    }
    piVar6 = &local_60;
    puVar5 = local_b6;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = piVar6;
      piVar6 = piVar6 + 1;
      puVar11 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar11;
    }
    uStack_62 = 0;
    uStack_64 = 0;
    uStack_66 = 0xe39e;
    local_106 = FUN_3ab8_05b8();
  }
  if (local_1d2 == 3) {
    apppuStack_1a[7] = (undefined2 ***)local_15a;
    apppuStack_1a[6] = (undefined2 ***)local_15c;
    apppuStack_1a[5] = (undefined2 ***)local_15e;
    apppuStack_1a[4] = (undefined2 ***)local_160;
    apppuStack_1a[3] = (undefined2 ***)apuStack_168[3];
    apppuStack_1a[2] = (undefined2 ***)apuStack_168[2];
    apppuStack_1a[0] = (undefined2 ***)0xe3d0;
    apppuStack_1a[1] = (undefined2 ***)uVar7;
    local_106 = FUN_3ab8_0f47();
  }
  if (local_106 == 0) {
    apppuStack_1a[7] = (undefined2 ***)0xe3ea;
    FUN_10ad_17a6();
    *(undefined2 *)0xc22 = 1;
    apppuStack_1a[7] = (undefined2 ***)0x11f2;
    apppuStack_1a[6] = (undefined2 ***)0xe3fe;
    FUN_1000_0599();
    uVar7 = 0x11f2;
    apppuStack_1a[7] = (undefined2 ***)0xe409;
    FUN_10ad_17a6();
  }
  goto LAB_3ab8_32fd;
}



/* 3ab8:38ab  FUN_3ab8_38ab  932 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_38ab(void)

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
  undefined2 *in_stack_00000038;
  undefined2 *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  undefined2 *in_stack_0000003e;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 uStack_38;
  undefined2 local_36 [2];
  undefined2 local_32 [8];
  undefined2 auStack_20 [2];
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18 [3];
  undefined2 uStack_12;
  undefined2 local_10;
  undefined1 auStack_e [4];
  undefined2 *puStack_a;
  
  FUN_21f2_0ebc();
  puStack_a = (undefined2 *)0xe440;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xe448;
  FUN_28b3_100d();
  puStack_a = (undefined2 *)0xe450;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xe458;
  FUN_28b3_0ee9();
  puStack_a = (undefined2 *)0xe461;
  func_0x00029834();
  puStack_a = (undefined2 *)0xe469;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xe471;
  FUN_28b3_100d();
  puStack_a = (undefined2 *)0xe479;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xe481;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xe489;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xe491;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xe496;
  FUN_28b3_117c();
  puStack_a = (undefined2 *)0xe49b;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xe4a5;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xe4aa;
  FUN_28b3_1582();
  uVar6 = (undefined1 *)0xfff7 < auStack_e;
  uVar7 = &stack0x0000 == (undefined1 *)0x6;
  puStack_a = (undefined2 *)0xe4b4;
  func_0x00029834();
  puStack_a = (undefined2 *)0xe4bc;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xe4c1;
  func_0x00029d78();
  puStack_a = (undefined2 *)0xe4c6;
  FUN_28b3_1181();
  if (!(bool)uVar6 && !(bool)uVar7) {
    puStack_a = (undefined2 *)0xe4d5;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe4dd;
    func_0x00029b85();
    puStack_a = (undefined2 *)0xe4e5;
    func_0x00029983();
    puStack_a = (undefined2 *)0xe4ed;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe4f5;
    func_0x00029b85();
    puStack_a = (undefined2 *)0xe4fd;
    func_0x0002996b();
    puStack_a = (undefined2 *)0xe505;
    func_0x00029983();
    puVar5 = &local_1c;
    puVar4 = (undefined2 *)&stack0x001a;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    puStack_a = (undefined2 *)0xe51a;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe51f;
    func_0x00029af6();
    puStack_a = (undefined2 *)0xe524;
    func_0x00029d78();
    puStack_a = (undefined2 *)0xe52c;
    func_0x00029c2c();
    puStack_a = (undefined2 *)0xe534;
    func_0x00029983();
    puStack_a = (undefined2 *)0xe53c;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe541;
    func_0x00029d78();
    puStack_a = (undefined2 *)0xe549;
    func_0x00029c2c();
    puStack_a = (undefined2 *)0xe551;
    func_0x0002996b();
    puStack_a = (undefined2 *)0xe559;
    FUN_28b3_0ee9();
    puStack_a = (undefined2 *)0xe561;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe569;
    func_0x00029bb5();
    puStack_a = (undefined2 *)0xe571;
    func_0x00029983();
    puStack_a = (undefined2 *)0xe579;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe581;
    func_0x00029bb5();
    puStack_a = (undefined2 *)0xe589;
    func_0x00029983();
    puStack_a = (undefined2 *)0xe591;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe599;
    func_0x00029bb5();
    puStack_a = (undefined2 *)0xe5a1;
    func_0x00029983();
    puStack_a = (undefined2 *)0xe5a9;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe5b1;
    func_0x00029bb5();
    puStack_a = (undefined2 *)0xe5b9;
    func_0x00029983();
    puStack_a = &local_3e;
    puVar4 = auStack_20;
    puVar5 = &local_1c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = local_36;
    puVar5 = (undefined2 *)&stack0x0004;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    uStack_38 = 0x22b2;
    local_3a = 0xe5e2;
    iVar3 = FUN_1def_1921();
    if (iVar3 != 0) {
      puVar5 = local_32;
      puVar4 = (undefined2 *)&stack0x001a;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      puStack_a = (undefined2 *)0xe601;
      func_0x00029834();
      puStack_a = (undefined2 *)0xe606;
      func_0x00029af6();
      puStack_a = (undefined2 *)0xe60e;
      func_0x000299b9();
      puStack_a = (undefined2 *)0xe616;
      func_0x00029b6d();
      puStack_a = (undefined2 *)0xe61e;
      func_0x0002996b();
      puStack_a = (undefined2 *)0xe626;
      FUN_28b3_0ee9();
      puStack_a = (undefined2 *)0xe62e;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xe633;
      func_0x00029af6();
      puStack_a = (undefined2 *)0xe638;
      func_0x00029d78();
      puStack_a = (undefined2 *)0xe640;
      func_0x00029c2c();
      puStack_a = (undefined2 *)0xe648;
      func_0x0002996b();
      puStack_a = (undefined2 *)0xe650;
      func_0x00029bb5();
      puStack_a = (undefined2 *)0xe658;
      func_0x00029983();
      puStack_a = (undefined2 *)0xe660;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xe668;
      func_0x00029bb5();
      puStack_a = (undefined2 *)0xe670;
      func_0x00029983();
      puStack_a = (undefined2 *)0xe678;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xe680;
      func_0x00029bb5();
      puStack_a = (undefined2 *)0xe688;
      func_0x00029983();
      puStack_a = (undefined2 *)0xe690;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xe698;
      func_0x00029bb5();
      puStack_a = (undefined2 *)0xe6a0;
      func_0x00029983();
      puStack_a = &local_46;
      puVar4 = auStack_20;
      puVar5 = local_32;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      puVar4 = local_36;
      puVar5 = (undefined2 *)&stack0x0004;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      uStack_38 = 0x22b2;
      local_3a = 0xe6c9;
      iVar3 = FUN_1def_1921();
      if (iVar3 != 0) {
        puStack_a = (undefined2 *)0xe6db;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe6e0;
        func_0x00029d78();
        local_10 = 0x22b2;
        uStack_12 = 0xe6ea;
        func_0x000299d1();
        local_10 = 0x22b2;
        uStack_12 = 0xe6f2;
        func_0x000297e6();
        local_10 = 0x22b2;
        uStack_12 = 0xe6f7;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        uStack_1a = 0xe701;
        func_0x000299d1();
        local_18[0] = 1;
        uStack_1a = 0x22b2;
        local_1c = 0xe70a;
        FUN_1def_05d1();
        puStack_a = (undefined2 *)0xe714;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe71c;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe721;
        func_0x00029d78();
        local_10 = 0x22b2;
        uStack_12 = 0xe72b;
        func_0x000299d1();
        local_10 = 0x22b2;
        uStack_12 = 0xe733;
        func_0x000297e6();
        local_10 = 0x22b2;
        uStack_12 = 0xe738;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        uStack_1a = 0xe742;
        func_0x000299d1();
        local_18[0] = 1;
        uStack_1a = 0x22b2;
        local_1c = 0xe74b;
        FUN_1def_05d1();
        uVar6 = (undefined1 *)0xffed < local_18;
        uVar7 = &stack0x0000 == (undefined1 *)0x6;
        puStack_a = (undefined2 *)0xe755;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe75a;
        FUN_28b3_1181();
        if ((bool)uVar6 || (bool)uVar7) {
          *in_stack_00000038 = local_46;
          in_stack_00000038[1] = local_44;
          *in_stack_0000003a = local_4e;
          in_stack_0000003a[1] = local_4c;
          *in_stack_0000003c = local_3e;
          in_stack_0000003c[1] = local_3c;
          local_4e = local_4a;
          local_4c = local_48;
        }
        else {
          *in_stack_00000038 = local_3e;
          in_stack_00000038[1] = local_3c;
          *in_stack_0000003a = local_4a;
          in_stack_0000003a[1] = local_48;
          *in_stack_0000003c = local_46;
          in_stack_0000003c[1] = local_44;
        }
        *in_stack_0000003e = local_4e;
        in_stack_0000003e[1] = local_4c;
        return 1;
      }
    }
  }
  return 0;
}



/* 3ab8:3c4f  FUN_3ab8_3c4f  492 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_3c4f(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 in_stack_00000038;
  undefined2 in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  undefined2 *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  undefined2 auStack_36 [10];
  undefined2 auStack_20 [2];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 auStack_18 [3];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  FUN_21f2_0ebc();
  uStack_8 = in_stack_0000003a;
  uStack_a = in_stack_00000038;
  puVar6 = auStack_20;
  puVar4 = (undefined2 *)&stack0x001a;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar6 = auStack_36;
  puVar4 = (undefined2 *)&stack0x0004;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iVar5 = FUN_1def_1921();
  if (iVar5 != 0) {
    uStack_8 = 0x1bb4;
    uStack_a = 0xe816;
    func_0x000297e6();
    uStack_8 = 0x22b2;
    uStack_a = 0xe81b;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xe825;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xe82d;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xe832;
    func_0x00029d78();
    auStack_18[0] = 0x22b2;
    uStack_1a = 0xe83c;
    func_0x000299d1();
    auStack_18[0] = 1;
    uStack_1a = 0x22b2;
    uStack_1c = 0xe845;
    puVar4 = (undefined2 *)FUN_1def_05d1();
    uVar7 = (undefined1 *)0xffed < auStack_18;
    uVar8 = &stack0x0000 == (undefined1 *)0x6;
    uVar3 = puVar4[1];
    *in_stack_0000003c = *puVar4;
    in_stack_0000003c[1] = uVar3;
    uStack_8 = 0x1bb4;
    uStack_a = 0xe85c;
    func_0x000297e6();
    uStack_8 = 0x22b2;
    uStack_a = 0xe864;
    func_0x00029834();
    uStack_8 = 0x22b2;
    uStack_a = 0xe869;
    func_0x00029af6();
    uStack_8 = 0x22b2;
    uStack_a = 0xe86e;
    FUN_28b3_1181();
    if ((bool)uVar7 || (bool)uVar8) {
      uStack_8 = 0x22b2;
      uStack_a = 0xe878;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xe881;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xe886;
      func_0x00029d78();
      uStack_8 = 0x22b2;
      uStack_a = 0xe88e;
      func_0x00029c74();
      uStack_8 = 0x22b2;
      uStack_a = 0xe893;
      FUN_28b3_1181();
      if (!(bool)uVar7) {
        uStack_8 = 0x22b2;
        uStack_a = 0xe8a0;
        func_0x000297e6();
        uStack_8 = 0x22b2;
        uStack_a = 0xe8a5;
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uStack_12 = 0xe8af;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0xe8b7;
        func_0x000297e6();
        uStack_10 = 0x22b2;
        uStack_12 = 0xe8bc;
        func_0x00029d78();
        auStack_18[0] = 0x22b2;
        uStack_1a = 0xe8c6;
        func_0x000299d1();
        auStack_18[0] = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xe8cf;
        puVar4 = (undefined2 *)func_0x0001e558();
        uVar3 = puVar4[1];
        *in_stack_0000003e = *puVar4;
        in_stack_0000003e[1] = uVar3;
        uStack_8 = 0x1bb4;
        uStack_a = 0xe8e9;
        func_0x000297e6();
        uStack_8 = 0x22b2;
        uStack_a = 0xe8ee;
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uStack_12 = 0xe8f8;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0xe900;
        func_0x000297e6();
        uStack_10 = 0x22b2;
        uStack_12 = 0xe905;
        func_0x00029d78();
        auStack_18[0] = 0x22b2;
        uStack_1a = 0xe90f;
        func_0x000299d1();
        auStack_18[0] = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xe918;
        puVar4 = (undefined2 *)func_0x0001e558();
        uVar7 = (undefined1 *)0xffed < auStack_18;
        uVar8 = &stack0x0000 == (undefined1 *)0x6;
        uVar3 = puVar4[1];
        *in_stack_00000040 = *puVar4;
        in_stack_00000040[1] = uVar3;
        uStack_8 = 0x1bb4;
        uStack_a = 0xe932;
        func_0x00029834();
        uStack_8 = 0x22b2;
        uStack_a = 0xe93a;
        func_0x000297e6();
        uStack_8 = 0x22b2;
        uStack_a = 0xe93f;
        func_0x00029d78();
        uStack_8 = 0x22b2;
        uStack_a = 0xe944;
        FUN_28b3_1181();
        if (!(bool)uVar7 && !(bool)uVar8) {
          uStack_8 = 0x22b2;
          uStack_a = 0xe94e;
          func_0x00029834();
          uStack_8 = 0x22b2;
          uStack_a = 0xe956;
          func_0x000297e6();
          uStack_8 = 0x22b2;
          uStack_a = 0xe95b;
          func_0x00029d78();
          uStack_8 = 0x22b2;
          uStack_a = 0xe960;
          FUN_28b3_1181();
          if (!(bool)uVar7 && !(bool)uVar8) {
            return 0;
          }
        }
        uStack_8 = 0x22b2;
        uStack_a = 0xe96e;
        func_0x00029834();
        uStack_8 = 0x22b2;
        uStack_a = 0xe976;
        func_0x000297e6();
        uStack_8 = 0x22b2;
        uStack_a = 0xe97b;
        func_0x00029d78();
        uStack_8 = 0x22b2;
        uStack_a = 0xe983;
        func_0x00029c74();
        uStack_8 = 0x22b2;
        uStack_a = 0xe988;
        FUN_28b3_1181();
        if ((bool)uVar7) {
          uStack_8 = 0x22b2;
          uStack_a = 0xe993;
          func_0x00029834();
          uStack_8 = 0x22b2;
          uStack_a = 0xe99b;
          func_0x000297e6();
          uStack_8 = 0x22b2;
          uStack_a = 0xe9a0;
          func_0x00029d78();
          uStack_8 = 0x22b2;
          uStack_a = 0xe9a8;
          func_0x00029c74();
          uStack_8 = 0x22b2;
          uStack_a = 0xe9ad;
          FUN_28b3_1181();
          if ((bool)uVar7) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



/* 3000:e9bb  FUN_3000_e9bb  382 bytes, 0 callers */

void __cdecl16far FUN_3000_e9bb(void)

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
  undefined2 *puVar8;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22 [6];
  int local_16;
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  uStack_c = 0x22b2;
  uStack_e = 0xe9d3;
  puVar8 = (undefined2 *)func_0x00000271();
  puVar4 = (undefined2 *)puVar8;
  puVar5 = local_22;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  func_0x000297e6();
  func_0x0002996b();
  func_0x00029d78();
  func_0x00029c74();
  func_0x00029983();
  if (local_16 == 10000) {
    uVar6 = 0;
  }
  else {
    func_0x00029834();
    uVar6 = 0;
    uVar7 = 1;
    func_0x00029da5();
    func_0x00029b6d();
    func_0x00029d78();
    func_0x00029c2c();
    func_0x00029c74();
    func_0x0002996b();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar6 && !(bool)uVar7) {
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar6 || (bool)uVar7) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1172();
        local_16 = FUN_28b3_0f51();
        goto LAB_3ab8_3f47;
      }
    }
    local_26 = *(undefined2 *)0xa464;
    local_24 = *(undefined2 *)0xa466;
  }
LAB_3ab8_3f47:
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  FUN_28b3_1181();
  if (!(bool)uVar6) {
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar6) {
      uStack_c = 0xeb1b;
      func_0x0000daa6();
      puVar4 = &local_26;
      puVar5 = local_22;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = *puVar8;
      }
      FUN_13bf_01c1();
    }
  }
  return;
}



/* 3ab8:3fb9  FUN_3ab8_3fb9  1497 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

int FUN_3ab8_3fb9(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *unaff_SI;
  undefined2 *puVar6;
  undefined2 *unaff_DI;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined2 *puVar13;
  undefined2 *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  undefined2 *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  int local_1238;
  uint local_122c;
  int local_122a;
  uint local_1218;
  int local_1216;
  undefined2 local_1192;
  undefined2 local_1190;
  undefined2 local_118e;
  undefined2 local_118c;
  undefined2 local_118a;
  undefined2 local_1188;
  undefined2 local_1186;
  undefined2 local_1184;
  byte local_117e;
  undefined2 local_117c;
  undefined2 local_117a;
  undefined2 local_1178;
  undefined2 local_1176;
  undefined2 local_1174;
  undefined2 local_1172;
  undefined1 local_116c;
  undefined1 local_116b;
  undefined1 local_116a;
  byte local_1168;
  undefined2 auStack_115e [2108];
  undefined1 auStack_e6 [20];
  undefined1 auStack_d2 [20];
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined1 auStack_b6 [12];
  undefined1 auStack_aa [4];
  undefined1 auStack_a6 [6];
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined1 *puStack_44;
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
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 *puStack_10;
  undefined2 *puStack_e;
  undefined2 *puStack_c;
  
  FUN_21f2_0ebc();
  func_0x00029834();
  func_0x00029ae7();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029d78();
  FUN_28b3_1172();
  func_0x00029983();
  local_1216 = 0;
  uVar7 = 0x22b2;
  for (local_1218 = 1;
      (local_1216 <= *(int *)0x14a &&
      ((local_1216 < *(int *)0x14a || (local_1218 <= *(uint *)0x148)))); local_1218 = local_1218 + 1
      ) {
    puStack_e = (undefined2 *)0xebcc;
    puStack_c = (undefined2 *)uVar7;
    uVar12 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar12 + 0x14);
    *pbVar1 = *pbVar1 & 0xfe;
    local_1216 = local_1216 + (uint)(0xfffe < local_1218);
    uVar7 = 0;
  }
  local_1238 = 0;
  local_1218 = 1;
  local_1216 = 0;
  while( true ) {
    if ((*(int *)0x14a < local_1216) ||
       ((*(int *)0x14a <= local_1216 && (*(uint *)0x148 < local_1218)))) {
      local_1216 = 0;
      for (local_1218 = 1;
          (local_1216 <= *(int *)0x14a &&
          ((local_1216 < *(int *)0x14a || (local_1218 <= *(uint *)0x148))));
          local_1218 = local_1218 + 1) {
        puStack_e = (undefined2 *)0xf100;
        puStack_c = (undefined2 *)uVar7;
        uVar12 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar12 + 0x14);
        *pbVar1 = *pbVar1 & 0xfe;
        local_1216 = local_1216 + (uint)(0xfffe < local_1218);
        uVar7 = 0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_32b2_02bc();
    }
    uVar8 = 0;
    puStack_e = (undefined2 *)0xf00c;
    puStack_c = (undefined2 *)uVar7;
    puVar13 = (undefined2 *)func_0x0000013f();
    puVar6 = (undefined2 *)puVar13;
    puVar5 = &local_117c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar2;
    }
    if (((local_1168 & 2) != 0) && ((local_1168 & 1) == 0)) break;
LAB_3ab8_445f:
    bVar10 = 0xfffe < local_1218;
    local_1218 = local_1218 + 1;
    local_1216 = local_1216 + (uint)bVar10;
    uVar7 = uVar8;
  }
  local_116b = *(undefined1 *)0xa6a;
  local_116c = *(undefined1 *)0xa6c;
  local_116a = *(undefined1 *)0xb310;
LAB_3ab8_44c8:
  func_0x000297e6();
  func_0x00029d78();
  puStack_10 = (undefined2 *)0x22b2;
  uStack_12 = 0xf060;
  func_0x000299d1();
  puStack_10 = (undefined2 *)0x22b2;
  uStack_12 = 0xf069;
  func_0x000297e6();
  puStack_10 = (undefined2 *)0x22b2;
  uStack_12 = 0xf06e;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xf078;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0xf081;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xf086;
  func_0x00029d78();
  uStack_20 = 0x22b2;
  uStack_22 = 0xf090;
  func_0x000299d1();
  uStack_20 = 0x22b2;
  uStack_22 = 0xf099;
  func_0x000297e6();
  uStack_20 = 0x22b2;
  uStack_22 = 0xf09e;
  func_0x00029d78();
  uStack_28 = 0x22b2;
  uStack_2a = 0xf0a8;
  func_0x000299d1();
  uStack_28 = 0x22b2;
  uVar8 = 0x1bb4;
  uStack_2a = 0xf0ad;
  iVar4 = FUN_1def_043a();
  if (iVar4 != 0) {
    local_122c = 1;
    local_122a = 0;
    do {
      if ((*(int *)0x14a < local_122a) ||
         ((*(int *)0x14a <= local_122a && (*(uint *)0x148 < local_122c)))) {
        local_1238 = local_1238 + 1;
        if (200 < local_1238) {
          *(undefined2 *)0xc22 = 1;
          puStack_c = (undefined2 *)0xefb7;
          FUN_10ad_17a6();
          puStack_c = (undefined2 *)0xefc1;
          FUN_10ad_17a6();
          uVar9 = 0;
          uVar11 = 1;
          while( true ) {
            FUN_32b2_6ef9();
            FUN_32b2_6d14();
            FUN_32b2_6fc7();
            FUN_32b2_6d14();
            FUN_32b2_6fc7();
            FUN_32b2_710c();
            FUN_32b2_7191();
            if (!(bool)uVar9 && !(bool)uVar11) {
              FUN_32b2_6d14();
              FUN_32b2_6d14();
              FUN_32b2_7191();
              if (!(bool)uVar11) {
                FUN_32b2_6d14();
                FUN_32b2_7124();
                FUN_32b2_6e99();
                FUN_32b2_704d();
                FUN_32b2_7035();
                FUN_32b2_6e99();
                FUN_32b2_6eb1();
                FUN_32b2_6d14();
                FUN_32b2_710c();
                FUN_32b2_710c();
                FUN_32b2_710c();
                FUN_32b2_6d14();
                FUN_32b2_710c();
                FUN_32b2_6e99();
                FUN_32b2_718c();
                FUN_32b2_6e99();
                FUN_32b2_6eb1();
                FUN_32b2_6d14();
                FUN_32b2_710c();
                FUN_32b2_710c();
                FUN_32b2_710c();
                FUN_32b2_710c();
                FUN_32b2_6e99();
                FUN_32b2_6eb1();
                FUN_32b2_6d14();
                FUN_32b2_710c();
                FUN_32b2_70dc();
                FUN_32b2_710c();
                FUN_32b2_710c();
                FUN_32b2_6e99();
                FUN_32b2_6eb1();
                FUN_32b2_6d14();
                FUN_32b2_710c();
                FUN_32b2_710c();
                FUN_32b2_6d14();
                FUN_32b2_710c();
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
                puStack_c = (undefined2 *)0x32b2;
                puStack_e = (undefined2 *)0x5db;
                FUN_32b2_6cc6();
                puStack_c = (undefined2 *)0x32b2;
                puStack_e = (undefined2 *)0x5e0;
                FUN_32b2_7258();
                uStack_14 = 0x32b2;
                uStack_16 = 0x5ea;
                FUN_32b2_6eb1();
                uStack_14 = 0x32b2;
                uStack_16 = 0x5f2;
                FUN_32b2_6cc6();
                uStack_14 = 0x32b2;
                uStack_16 = 0x5f7;
                FUN_32b2_7258();
                uStack_1c = 0x32b2;
                uStack_1e = 0x601;
                FUN_32b2_6eb1();
                uStack_1c = uStack_66;
                uStack_1e = uStack_68;
                uStack_20 = uStack_6a;
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
                uStack_40 = 0x646;
                func_0x0003fc09();
                uStack_88 = uStack_64;
                uStack_86 = uStack_62;
                uStack_a0 = uStack_8c;
                uStack_9e = uStack_8a;
                puVar6 = &uStack_2a;
                puVar5 = (undefined2 *)&stack0x001a;
                for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                  puVar2 = puVar6;
                  puVar6 = puVar6 + 1;
                  puVar13 = puVar5;
                  puVar5 = puVar5 + 1;
                  *puVar2 = *puVar13;
                }
                uStack_2e = 0x684;
                iVar4 = FUN_3ab8_522f();
                uVar9 = 0;
                uVar11 = iVar4 == 0;
                if (!(bool)uVar11) {
                  puStack_c = (undefined2 *)0x694;
                  FUN_32b2_6d14();
                  puStack_c = (undefined2 *)0x69d;
                  FUN_32b2_6cc6();
                  puStack_c = (undefined2 *)0x6a5;
                  FUN_32b2_701d();
                  puStack_c = (undefined2 *)0x6aa;
                  FUN_32b2_6fc7();
                  puStack_c = (undefined2 *)0x6af;
                  FUN_32b2_7258();
                  puStack_c = (undefined2 *)0x6b4;
                  FUN_32b2_7191();
                  if ((bool)uVar9 || (bool)uVar11) {
                    puStack_c = (undefined2 *)0x6bf;
                    FUN_32b2_6d14();
                    puStack_c = (undefined2 *)0x6c8;
                    FUN_32b2_6cc6();
                    puStack_c = (undefined2 *)0x6d1;
                    FUN_32b2_701d();
                    puStack_c = (undefined2 *)0x6d6;
                    FUN_32b2_6fc7();
                    puStack_c = (undefined2 *)0x6db;
                    FUN_32b2_7258();
                    puStack_c = (undefined2 *)0x6e0;
                    FUN_32b2_7191();
                    if ((bool)uVar9 || (bool)uVar11) {
                      uStack_be = *(undefined2 *)0x93c0;
                      uStack_bc = *(undefined2 *)0x93c2;
                      uStack_ba = *(undefined2 *)0x93c4;
                      uStack_b8 = *(undefined2 *)0x93c6;
                    }
                  }
                }
                puStack_c = (undefined2 *)0x6f8;
                FUN_32b2_6d14();
                puStack_c = (undefined2 *)0x700;
                FUN_32b2_6d14();
                puStack_c = (undefined2 *)0x708;
                FUN_32b2_710c();
                puStack_c = (undefined2 *)0x711;
                FUN_32b2_710c();
                puStack_c = (undefined2 *)0x71a;
                FUN_32b2_7154();
                puStack_c = (undefined2 *)0x71f;
                FUN_32b2_7191();
                if (!(bool)uVar9) {
                  puStack_c = (undefined2 *)0x72d;
                  FUN_32b2_6d14();
                  puStack_c = (undefined2 *)0x732;
                  FUN_32b2_6fc7();
                  puStack_c = (undefined2 *)0x73a;
                  FUN_32b2_6d14();
                  puStack_c = (undefined2 *)0x742;
                  FUN_32b2_710c();
                  puStack_c = (undefined2 *)0x74b;
                  FUN_32b2_710c();
                  puStack_c = (undefined2 *)0x750;
                  FUN_32b2_7191();
                  if (!(bool)uVar9) {
                    uStack_be = *(undefined2 *)0x93c0;
                    uStack_bc = *(undefined2 *)0x93c2;
                    uStack_ba = *(undefined2 *)0x93c4;
                    uStack_b8 = *(undefined2 *)0x93c6;
                  }
                  puStack_c = (undefined2 *)uStack_ba;
                  puStack_e = (undefined2 *)uStack_bc;
                  puStack_10 = (undefined2 *)uStack_be;
                  uStack_12 = 0x32b2;
                  uStack_14 = 0x774;
                  FUN_32b2_7592();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x77e;
                  FUN_32b2_6d14();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x786;
                  FUN_32b2_70dc();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x78e;
                  FUN_32b2_6d14();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x797;
                  FUN_32b2_710c();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x79c;
                  FUN_32b2_7182();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x7a5;
                  FUN_32b2_6e99();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x7ad;
                  FUN_32b2_710c();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x7b5;
                  FUN_32b2_7154();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x7be;
                  FUN_32b2_6e99();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x7c7;
                  FUN_32b2_6eb1();
                  puStack_c = &uStack_8c;
                  puStack_e = &uStack_64;
                  puStack_10 = (undefined2 *)0x32b2;
                  uStack_12 = 0x7d9;
                  FUN_32b2_6cc6();
                  puStack_10 = (undefined2 *)0x32b2;
                  uStack_12 = 0x7de;
                  FUN_32b2_7258();
                  uStack_18 = 0x32b2;
                  uStack_1a = 0x7e8;
                  FUN_32b2_6eb1();
                  uStack_18 = 0x32b2;
                  uStack_1a = 0x7f0;
                  FUN_32b2_6cc6();
                  uStack_18 = 0x32b2;
                  uStack_1a = 0x7f5;
                  FUN_32b2_7258();
                  uStack_20 = 0x32b2;
                  uStack_22 = 0x7ff;
                  FUN_32b2_6eb1();
                  uStack_20 = uStack_66;
                  uStack_22 = uStack_68;
                  uStack_24 = uStack_6a;
                  uStack_26 = uStack_6c;
                  uStack_28 = uStack_4a;
                  uStack_2a = uStack_4c;
                  uStack_2e = uStack_50;
                  uStack_30 = 0x32b2;
                  uStack_32 = 0x820;
                  FUN_32b2_6d14();
                  iStack_38 = 0x32b2;
                  uStack_3a = 0x82a;
                  FUN_32b2_6eb1();
                  iStack_38 = 0x32b2;
                  uStack_3a = 0x833;
                  FUN_32b2_6d14();
                  uStack_40 = 0x32b2;
                  uStack_42 = 0x83d;
                  FUN_32b2_6eb1();
                  uStack_40 = 0;
                  uStack_42 = 0x32b2;
                  puStack_44 = (undefined1 *)0x844;
                  func_0x0003fc09();
                  uVar9 = (undefined1 *)0xffc9 < &uStack_40;
                  uVar11 = &stack0x0000 == (undefined1 *)0xa;
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x84f;
                  FUN_32b2_6cc6();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x857;
                  FUN_32b2_6cc6();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x85c;
                  FUN_32b2_7191();
                  if ((bool)uVar11) {
                    uStack_64 = param_2;
                    uStack_62 = param_3;
                  }
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x872;
                  FUN_32b2_6cc6();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x87a;
                  FUN_32b2_6cc6();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x87f;
                  FUN_32b2_7191();
                  if ((bool)uVar11) {
                    uStack_8c = param_4;
                    uStack_8a = param_5;
                  }
                  *in_stack_0000003a = uStack_64;
                  in_stack_0000003a[1] = uStack_62;
                  *in_stack_0000003c = uStack_8c;
                  in_stack_0000003c[1] = uStack_8a;
                  *in_stack_0000003e = uStack_64;
                  in_stack_0000003e[1] = uStack_62;
                  *in_stack_00000040 = uStack_8c;
                  in_stack_00000040[1] = uStack_8a;
                  iStack_38 = iStack_38 + 1;
                  uVar11 = iStack_38 == 0;
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x8d7;
                  FUN_32b2_6d14();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x8e0;
                  FUN_32b2_6d14();
                  puStack_c = (undefined2 *)0x32b2;
                  puStack_e = (undefined2 *)0x8e5;
                  FUN_32b2_7191();
                  if (!(bool)uVar9 && !(bool)uVar11) {
                    puStack_c = (undefined2 *)uStack_b8;
                    puStack_e = (undefined2 *)uStack_ba;
                    puStack_10 = (undefined2 *)uStack_bc;
                    uStack_12 = uStack_be;
                    uStack_14 = 0x32b2;
                    uStack_16 = 0x8ff;
                    FUN_32b2_7592();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x909;
                    FUN_32b2_6d14();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x911;
                    FUN_32b2_7154();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x916;
                    FUN_32b2_6fd6();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x91e;
                    FUN_32b2_6d14();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x927;
                    FUN_32b2_710c();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x92c;
                    FUN_32b2_7182();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x935;
                    FUN_32b2_6e99();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x93d;
                    FUN_32b2_710c();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x945;
                    FUN_32b2_7154();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x94e;
                    FUN_32b2_6e99();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x957;
                    FUN_32b2_6eb1();
                    puStack_e = &uStack_8c;
                    puStack_10 = &uStack_64;
                    uStack_12 = 0x32b2;
                    uStack_14 = 0x969;
                    FUN_32b2_6cc6();
                    uStack_12 = 0x32b2;
                    uStack_14 = 0x96e;
                    FUN_32b2_7258();
                    uStack_1a = 0x32b2;
                    uStack_1c = 0x978;
                    FUN_32b2_6eb1();
                    uStack_1a = 0x32b2;
                    uStack_1c = 0x980;
                    FUN_32b2_6cc6();
                    uStack_1a = 0x32b2;
                    uStack_1c = 0x985;
                    FUN_32b2_7258();
                    uStack_22 = 0x32b2;
                    uStack_24 = 0x98f;
                    FUN_32b2_6eb1();
                    uStack_22 = uStack_66;
                    uStack_24 = uStack_68;
                    uStack_26 = uStack_6a;
                    uStack_28 = uStack_6c;
                    uStack_2a = uStack_4a;
                    uStack_2e = uStack_4e;
                    uStack_30 = uStack_50;
                    uStack_32 = 0x32b2;
                    uStack_34 = 0x9b0;
                    FUN_32b2_6d14();
                    uStack_3a = 0x32b2;
                    uStack_3c = 0x9ba;
                    FUN_32b2_6eb1();
                    uStack_3a = 0x32b2;
                    uStack_3c = 0x9c3;
                    FUN_32b2_6d14();
                    uStack_42 = 0x32b2;
                    puStack_44 = (undefined1 *)0x9cd;
                    FUN_32b2_6eb1();
                    uStack_42 = 0;
                    puStack_44 = (undefined1 *)0x32b2;
                    uStack_46 = 0x9d4;
                    func_0x0003fc09();
                    uVar9 = &stack0x0000 == (undefined1 *)0xc;
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x9df;
                    FUN_32b2_6cc6();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x9e7;
                    FUN_32b2_6cc6();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0x9ec;
                    FUN_32b2_7191();
                    if ((bool)uVar9) {
                      uStack_64 = param_2;
                      uStack_62 = param_3;
                    }
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0xa02;
                    FUN_32b2_6cc6();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0xa0a;
                    FUN_32b2_6cc6();
                    puStack_e = (undefined2 *)0x32b2;
                    puStack_10 = (undefined2 *)0xa0f;
                    FUN_32b2_7191();
                    if ((bool)uVar9) {
                      uStack_8c = param_4;
                      uStack_8a = param_5;
                    }
                    *in_stack_0000003e = uStack_64;
                    in_stack_0000003e[1] = uStack_62;
                    *in_stack_00000040 = uStack_8c;
                    in_stack_00000040[1] = uStack_8a;
                    return iStack_38 + 1;
                  }
                  return iStack_38;
                }
              }
              return 0;
            }
            FUN_32b2_6d14();
            puStack_c = (undefined2 *)0x3ff;
            FUN_32b2_7154();
            FUN_32b2_6eb1();
            puVar6 = puStack_c;
            puVar5 = puStack_e;
            uStack_48 = 0x405;
            puStack_c = (undefined2 *)uStack_bc;
            puStack_e = (undefined2 *)uStack_be;
            puStack_10 = (undefined2 *)0x32b2;
            uStack_12 = 0x119;
            puStack_44 = (undefined1 *)unaff_SI;
            uStack_42 = unaff_DI;
            FUN_32b2_75fe();
            puStack_c = (undefined2 *)0x123;
            FUN_32b2_6d14();
            puStack_c = (undefined2 *)0x12b;
            FUN_32b2_704d();
            puStack_c = (undefined2 *)0x133;
            FUN_32b2_7095();
            puStack_c = (undefined2 *)0x13b;
            FUN_32b2_6eb1();
            puStack_c = (undefined2 *)uStack_ba;
            puStack_e = (undefined2 *)uStack_bc;
            puStack_10 = (undefined2 *)uStack_be;
            uStack_12 = 0x32b2;
            uStack_14 = 0x150;
            FUN_32b2_75ec();
            uVar9 = &stack0x0000 == (undefined1 *)0xa;
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x15a;
            FUN_32b2_6d14();
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x162;
            FUN_32b2_704d();
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x16a;
            FUN_32b2_7095();
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x173;
            FUN_32b2_6eb1();
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x17b;
            FUN_32b2_6cc6();
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x183;
            FUN_32b2_6cc6();
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x188;
            FUN_32b2_7191();
            if ((bool)uVar9) {
              puStack_c = (undefined2 *)0x32b2;
              puStack_e = (undefined2 *)0x192;
              FUN_32b2_6cc6();
              puStack_c = (undefined2 *)0x32b2;
              puStack_e = (undefined2 *)0x19a;
              FUN_32b2_6cc6();
              puStack_c = (undefined2 *)0x32b2;
              puStack_e = (undefined2 *)0x19f;
              FUN_32b2_7191();
              if ((bool)uVar9) {
                return 0;
              }
            }
            puStack_c = (undefined2 *)auStack_aa;
            puStack_e = &uStack_1e;
            puStack_10 = (undefined2 *)uStack_7e;
            uStack_12 = uStack_80;
            uStack_14 = uStack_82;
            uStack_16 = uStack_84;
            uStack_18 = uStack_5a;
            uStack_1a = uStack_5c;
            uStack_1c = uStack_5e;
            uStack_1e = uStack_60;
            uStack_20 = 0x32b2;
            uStack_22 = 0x1d0;
            FUN_32b2_6cc6();
            uStack_20 = 0x32b2;
            uStack_22 = 0x1d5;
            FUN_32b2_7258();
            uStack_28 = 0x32b2;
            uStack_2a = 0x1df;
            FUN_32b2_6eb1();
            uStack_28 = 0x32b2;
            uStack_2a = 0x1e7;
            FUN_32b2_6cc6();
            uStack_28 = 0x32b2;
            uStack_2a = 0x1ec;
            FUN_32b2_7258();
            uStack_30 = 0x32b2;
            uStack_32 = 0x1f6;
            FUN_32b2_6eb1();
            uStack_30 = 0x32b2;
            uStack_32 = 0x1fa;
            iVar4 = FUN_3ab8_4fbd();
            if (iVar4 == 0) break;
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x209;
            FUN_32b2_6cc6();
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x20e;
            FUN_32b2_7258();
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x216;
            FUN_32b2_6e99();
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x21e;
            FUN_32b2_6ef9();
            puStack_c = (undefined2 *)auStack_b6;
            puStack_e = (undefined2 *)auStack_a6;
            puStack_10 = (undefined2 *)0x32b2;
            uStack_12 = 0x231;
            FUN_32b2_6cc6();
            puStack_10 = (undefined2 *)0x32b2;
            uStack_12 = 0x236;
            FUN_32b2_7258();
            uStack_18 = 0x32b2;
            uStack_1a = 0x240;
            FUN_32b2_6eb1();
            uStack_18 = 0x32b2;
            uStack_1a = 0x248;
            FUN_32b2_6cc6();
            uStack_18 = 0x32b2;
            uStack_1a = 0x24d;
            FUN_32b2_7258();
            uStack_20 = 0x32b2;
            uStack_22 = 599;
            FUN_32b2_6eb1();
            uStack_20 = 0x32b2;
            uStack_22 = 0x25f;
            FUN_32b2_6d14();
            uStack_28 = 0x32b2;
            uStack_2a = 0x269;
            FUN_32b2_6eb1();
            uStack_28 = 0x32b2;
            uStack_2a = 0x271;
            FUN_32b2_6cc6();
            uStack_28 = 0x32b2;
            uStack_2a = 0x276;
            FUN_32b2_7258();
            uStack_28 = 0x32b2;
            uStack_2a = 0x27e;
            FUN_32b2_6e99();
            uStack_30 = 0x32b2;
            uStack_32 = 0x288;
            FUN_32b2_6eb1();
            uStack_30 = 0x32b2;
            uStack_32 = 0x290;
            FUN_32b2_6cc6();
            uStack_30 = 0x32b2;
            uStack_32 = 0x295;
            FUN_32b2_7258();
            iStack_38 = 0x32b2;
            uStack_3a = 0x29f;
            FUN_32b2_6eb1();
            iStack_38 = 0x32b2;
            uStack_3a = 0x2a7;
            FUN_32b2_6cc6();
            iStack_38 = 0x32b2;
            uStack_3a = 0x2ac;
            FUN_32b2_7258();
            uStack_40 = 0x32b2;
            uStack_42 = 0x2b6;
            FUN_32b2_6eb1();
            uStack_40 = 1;
            uStack_42 = 0x32b2;
            puStack_44 = (undefined1 *)0x2be;
            func_0x0003fc09();
            puStack_c = (undefined2 *)auStack_e6;
            puStack_e = (undefined2 *)auStack_d2;
            puStack_10 = (undefined2 *)0x32b2;
            uStack_12 = 0x2d4;
            FUN_32b2_6cc6();
            puStack_10 = (undefined2 *)0x32b2;
            uStack_12 = 0x2d9;
            FUN_32b2_7258();
            uStack_18 = 0x32b2;
            uStack_1a = 0x2e3;
            FUN_32b2_6eb1();
            uStack_18 = 0x32b2;
            uStack_1a = 0x2eb;
            FUN_32b2_6cc6();
            uStack_18 = 0x32b2;
            uStack_1a = 0x2f0;
            FUN_32b2_7258();
            uStack_20 = 0x32b2;
            uStack_22 = 0x2fa;
            FUN_32b2_6eb1();
            uStack_20 = 0x32b2;
            uStack_22 = 0x302;
            FUN_32b2_6d14();
            uStack_28 = 0x32b2;
            uStack_2a = 0x30c;
            FUN_32b2_6eb1();
            uStack_28 = 0x32b2;
            uStack_2a = 0x314;
            FUN_32b2_6d14();
            uStack_30 = 0x32b2;
            uStack_32 = 0x31e;
            FUN_32b2_6eb1();
            uStack_30 = 0x32b2;
            uStack_32 = 0x326;
            FUN_32b2_6cc6();
            uStack_30 = 0x32b2;
            uStack_32 = 0x32b;
            FUN_32b2_7258();
            iStack_38 = 0x32b2;
            uStack_3a = 0x335;
            FUN_32b2_6eb1();
            iStack_38 = 0x32b2;
            uStack_3a = 0x33d;
            FUN_32b2_6cc6();
            iStack_38 = 0x32b2;
            uStack_3a = 0x342;
            FUN_32b2_7258();
            uStack_40 = 0x32b2;
            uStack_42 = 0x34c;
            FUN_32b2_6eb1();
            uStack_40 = 1;
            uStack_42 = 0x32b2;
            puStack_44 = (undefined1 *)0x354;
            func_0x0003fc09();
            uVar9 = (undefined1 *)0xffc9 < &uStack_3c;
            uVar11 = &stack0x0000 == (undefined1 *)0x6;
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_7258();
            FUN_32b2_6e99();
            FUN_32b2_6ef9();
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_7258();
            FUN_32b2_6e99();
            unaff_SI = puVar5;
            unaff_DI = puVar6;
          }
          return 0;
        }
        puVar5 = auStack_115e + local_1238 * 0xb;
        puVar6 = &local_117c;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar13 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar13;
        }
        break;
      }
      uVar7 = 0;
      puStack_e = (undefined2 *)0xec40;
      puStack_c = (undefined2 *)uVar8;
      puVar13 = (undefined2 *)func_0x0000013f();
      puVar6 = (undefined2 *)puVar13;
      puVar5 = &local_1192;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar3 = puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar3 = *puVar2;
      }
      if (((local_117e & 2) != 0) &&
         (((local_122c != local_1218 || (local_122a != local_1216)) && ((local_117e & 1) == 0)))) {
        func_0x000297e6();
        func_0x00029d78();
        puStack_10 = (undefined2 *)0x22b2;
        uStack_12 = 0xec88;
        func_0x000299d1();
        puStack_10 = (undefined2 *)0x22b2;
        uStack_12 = 0xec91;
        func_0x000297e6();
        puStack_10 = (undefined2 *)0x22b2;
        uStack_12 = 0xec96;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xeca0;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xeca9;
        func_0x0001e558();
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029ae7();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029d78();
        puStack_10 = (undefined2 *)0x22b2;
        uStack_12 = 0xece2;
        func_0x000299d1();
        puStack_10 = (undefined2 *)0x22b2;
        uStack_12 = 0xeceb;
        func_0x000297e6();
        puStack_10 = (undefined2 *)0x22b2;
        uStack_12 = 0xecf0;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xecfa;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xed03;
        func_0x0001e558();
        uVar9 = (undefined1 *)0xffed < &uStack_18;
        uVar11 = &stack0x0000 == (undefined1 *)0x6;
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029ae7();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        func_0x000297e6();
        uVar7 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar9) {
          func_0x000297e6();
          func_0x000297e6();
          uVar7 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar9 && !(bool)uVar11) goto LAB_3ab8_4093;
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          uStack_12 = 0xed7d;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          uStack_12 = 0xed86;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          uStack_12 = 0xed8b;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0xed95;
          func_0x000299d1();
          uStack_18 = 1;
          uStack_1a = 0x22b2;
          uStack_1c = 0xed9e;
          FUN_1def_05d1();
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          uStack_12 = 0xedc8;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          uStack_12 = 0xedd1;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          uStack_12 = 0xedd6;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0xede0;
          func_0x000299d1();
          uStack_18 = 1;
          uStack_1a = 0x22b2;
          uStack_1c = 0xede9;
          FUN_1def_05d1();
          uVar9 = (undefined1 *)0xffed < &uStack_18;
          uVar11 = &stack0x0000 == (undefined1 *)0x6;
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029af6();
          func_0x0002996b();
          FUN_28b3_1181();
          if (!(bool)uVar9 && !(bool)uVar11) {
            func_0x000297e6();
            func_0x000297e6();
            uVar7 = 0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar9 && !(bool)uVar11) goto LAB_3ab8_4093;
          }
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x0002996b();
          FUN_28b3_1181();
          if (!(bool)uVar9) goto LAB_3ab8_4305;
          func_0x000297e6();
          func_0x000297e6();
          uVar7 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar9) goto LAB_3ab8_4305;
        }
      }
LAB_3ab8_4093:
      bVar10 = 0xfffe < local_122c;
      local_122c = local_122c + 1;
      local_122a = local_122a + (uint)bVar10;
      uVar8 = uVar7;
    } while( true );
  }
  goto LAB_3ab8_445f;
LAB_3ab8_4305:
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar9 || (bool)uVar11) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar9 && !(bool)uVar11) {
      local_117c = local_118a;
      local_117a = local_1188;
      local_1178 = local_1186;
      local_1176 = local_1184;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar9) {
      local_1174 = local_1192;
      local_1172 = local_1190;
    }
  }
  else {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar9 && !(bool)uVar11) {
      local_117c = local_1192;
      local_117a = local_1190;
      local_1178 = local_118e;
      local_1176 = local_118c;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar9) {
      local_1174 = local_118a;
      local_1172 = local_1188;
    }
  }
  puStack_c = (undefined2 *)0x22b2;
  puStack_e = (undefined2 *)0xef8c;
  uVar12 = func_0x0000013f();
  pbVar1 = (byte *)((int)uVar12 + 0x14);
  *pbVar1 = *pbVar1 | 1;
  goto LAB_3ab8_44c8;
}



/* 3ab8:45cd  FUN_3ab8_45cd  30 bytes, 0 callers */

undefined2 FUN_3ab8_45cd(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_BP;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uVar7 = 0x3ab8;
  iVar4 = (int)*(uint *)(unaff_BP + -0x1236) >> 0xf;
  if ((*(int *)(unaff_BP + -0x1214) <= iVar4) &&
     ((*(int *)(unaff_BP + -0x1214) < iVar4 ||
      (*(uint *)(unaff_BP + -0x1216) <= *(uint *)(unaff_BP + -0x1236))))) {
                    /* WARNING: Subroutine does not return */
    uStack_2 = 0x3ab8;
    uStack_4 = 0xf16b;
    thunk_FUN_32b2_02bc();
  }
  while( true ) {
    uStack_4 = 0x2eb;
    uStack_2 = uVar7;
    FUN_32b2_6cc6();
    uStack_2 = 0x32b2;
    uStack_4 = 0x2f0;
    FUN_32b2_7258();
    uStack_a = 0x32b2;
    uStack_c = 0x2fa;
    FUN_32b2_6eb1();
    uStack_a = 0x32b2;
    uStack_c = 0x302;
    FUN_32b2_6d14();
    uStack_12 = 0x32b2;
    uStack_14 = 0x30c;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x314;
    FUN_32b2_6d14();
    uStack_1c = 0x31e;
    FUN_32b2_6eb1();
    uStack_1c = 0x326;
    FUN_32b2_6cc6();
    uStack_1c = 0x32b;
    FUN_32b2_7258();
    uStack_22 = 0x32b2;
    uStack_24 = 0x335;
    FUN_32b2_6eb1();
    uStack_22 = 0x32b2;
    uStack_24 = 0x33d;
    FUN_32b2_6cc6();
    uStack_22 = 0x32b2;
    uStack_24 = 0x342;
    FUN_32b2_7258();
    uStack_2a = 0x32b2;
    uStack_2c = 0x34c;
    FUN_32b2_6eb1();
    uStack_2a = 1;
    uStack_2c = 0x32b2;
    uStack_2e = 0x354;
    func_0x0003fc09();
    uVar8 = (undefined1 *)0xffc9 < &uStack_2a;
    uVar9 = &stack0x0000 == (undefined1 *)0xfff4;
    FUN_32b2_6cc6();
    FUN_32b2_701d();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_701d();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6d14();
    FUN_32b2_6fc7();
    FUN_32b2_6d14();
    FUN_32b2_6fc7();
    FUN_32b2_710c();
    FUN_32b2_7191();
    if (!(bool)uVar8 && !(bool)uVar9) {
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_7191();
      if (!(bool)uVar9) {
        FUN_32b2_6d14();
        FUN_32b2_7124();
        FUN_32b2_6e99();
        FUN_32b2_704d();
        FUN_32b2_7035();
        FUN_32b2_6e99();
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_6e99();
        FUN_32b2_718c();
        FUN_32b2_6e99();
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_6e99();
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_70dc();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_6e99();
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_6d14();
        FUN_32b2_710c();
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
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        uStack_2 = 0x32b2;
        uStack_4 = 0x5ea;
        FUN_32b2_6eb1();
        uStack_2 = 0x32b2;
        uStack_4 = 0x5f2;
        FUN_32b2_6cc6();
        uStack_2 = 0x32b2;
        uStack_4 = 0x5f7;
        FUN_32b2_7258();
        uStack_a = 0x32b2;
        uStack_c = 0x601;
        FUN_32b2_6eb1();
        uStack_a = *(undefined2 *)(unaff_BP + -100);
        uStack_c = *(undefined2 *)(unaff_BP + -0x66);
        uStack_e = *(undefined2 *)(unaff_BP + -0x68);
        uStack_10 = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_12 = *(undefined2 *)(unaff_BP + -0x48);
        uStack_14 = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_16 = *(undefined2 *)(unaff_BP + -0x4c);
        uStack_18 = *(undefined2 *)(unaff_BP + -0x4e);
        uStack_1c = 0x622;
        FUN_32b2_6d14();
        uStack_22 = 0x32b2;
        uStack_24 = 0x62c;
        FUN_32b2_6eb1();
        uStack_22 = 0x32b2;
        uStack_24 = 0x635;
        FUN_32b2_6d14();
        uStack_2a = 0x32b2;
        uStack_2c = 0x63f;
        FUN_32b2_6eb1();
        uStack_2a = 0;
        uStack_2c = 0x32b2;
        uStack_2e = 0x646;
        func_0x0003fc09();
        uVar7 = *(undefined2 *)(unaff_BP + -0x60);
        *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
        *(undefined2 *)(unaff_BP + -0x84) = uVar7;
        uVar7 = *(undefined2 *)(unaff_BP + -0x88);
        *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
        *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
        puVar6 = &uStack_18;
        puVar5 = (undefined2 *)(unaff_BP + 0x1c);
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar3 = puVar6;
          puVar6 = puVar6 + 1;
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar3 = *puVar2;
        }
        uStack_1c = 0x684;
        iVar4 = FUN_3ab8_522f();
        uVar8 = 0;
        uVar9 = iVar4 == 0;
        if (!(bool)uVar9) {
          FUN_32b2_6d14();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_7258();
          FUN_32b2_7191();
          if ((bool)uVar8 || (bool)uVar9) {
            FUN_32b2_6d14();
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar8 || (bool)uVar9) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
          }
        }
        FUN_32b2_6d14();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_7154();
        FUN_32b2_7191();
        if (!(bool)uVar8) {
          FUN_32b2_6d14();
          FUN_32b2_6fc7();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_7191();
          if (!(bool)uVar8) {
            *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
            *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
            *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
            *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
          }
          uStack_2 = 0x774;
          FUN_32b2_7592();
          FUN_32b2_6d14();
          FUN_32b2_70dc();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_7182();
          FUN_32b2_6e99();
          FUN_32b2_710c();
          FUN_32b2_7154();
          FUN_32b2_6e99();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          uStack_6 = 0x32b2;
          uStack_8 = 0x7e8;
          FUN_32b2_6eb1();
          uStack_6 = 0x32b2;
          uStack_8 = 0x7f0;
          FUN_32b2_6cc6();
          uStack_6 = 0x32b2;
          uStack_8 = 0x7f5;
          FUN_32b2_7258();
          uStack_e = 0x32b2;
          uStack_10 = 0x7ff;
          FUN_32b2_6eb1();
          uStack_e = *(undefined2 *)(unaff_BP + -100);
          uStack_10 = *(undefined2 *)(unaff_BP + -0x66);
          uStack_12 = *(undefined2 *)(unaff_BP + -0x68);
          uStack_14 = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_16 = *(undefined2 *)(unaff_BP + -0x48);
          uStack_18 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_1c = *(undefined2 *)(unaff_BP + -0x4e);
          uStack_1e = 0x32b2;
          uStack_20 = 0x820;
          FUN_32b2_6d14();
          uStack_26 = 0x32b2;
          uStack_28 = 0x82a;
          FUN_32b2_6eb1();
          uStack_26 = 0x32b2;
          uStack_28 = 0x833;
          FUN_32b2_6d14();
          uStack_2e = 0x32b2;
          FUN_32b2_6eb1();
          uStack_2e = 0;
          func_0x0003fc09(0x32b2);
          uVar8 = (undefined1 *)0xffc9 < &uStack_2e;
          uVar9 = &stack0x0000 == (undefined1 *)0xfff8;
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar9) {
            uVar7 = *(undefined2 *)(unaff_BP + 8);
            *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
            *(undefined2 *)(unaff_BP + -0x60) = uVar7;
          }
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar9) {
            uVar7 = *(undefined2 *)(unaff_BP + 0xc);
            *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
            *(undefined2 *)(unaff_BP + -0x88) = uVar7;
          }
          uVar7 = *(undefined2 *)(unaff_BP + -0x60);
          puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
          *puVar5 = *(undefined2 *)(unaff_BP + -0x62);
          puVar5[1] = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x88);
          puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
          *puVar5 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar5[1] = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x60);
          puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
          *puVar5 = *(undefined2 *)(unaff_BP + -0x62);
          puVar5[1] = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x88);
          puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
          *puVar5 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar5[1] = uVar7;
          piVar1 = (int *)(unaff_BP + -0x36);
          *piVar1 = *piVar1 + 1;
          uVar9 = *piVar1 == 0;
          FUN_32b2_6d14();
          FUN_32b2_6d14();
          FUN_32b2_7191();
          if (!(bool)uVar8 && !(bool)uVar9) {
            uStack_2 = 0x32b2;
            uStack_4 = 0x8ff;
            FUN_32b2_7592();
            FUN_32b2_6d14();
            FUN_32b2_7154();
            FUN_32b2_6fd6();
            FUN_32b2_6d14();
            FUN_32b2_710c();
            FUN_32b2_7182();
            FUN_32b2_6e99();
            FUN_32b2_710c();
            FUN_32b2_7154();
            FUN_32b2_6e99();
            FUN_32b2_6eb1();
            uStack_2 = 0x969;
            FUN_32b2_6cc6();
            uStack_2 = 0x96e;
            FUN_32b2_7258();
            uStack_8 = 0x32b2;
            uStack_a = 0x978;
            FUN_32b2_6eb1();
            uStack_8 = 0x32b2;
            uStack_a = 0x980;
            FUN_32b2_6cc6();
            uStack_8 = 0x32b2;
            uStack_a = 0x985;
            FUN_32b2_7258();
            uStack_10 = 0x32b2;
            uStack_12 = 0x98f;
            FUN_32b2_6eb1();
            uStack_10 = *(undefined2 *)(unaff_BP + -100);
            uStack_12 = *(undefined2 *)(unaff_BP + -0x66);
            uStack_14 = *(undefined2 *)(unaff_BP + -0x68);
            uStack_16 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_18 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_20 = 0x32b2;
            uStack_22 = 0x9b0;
            FUN_32b2_6d14();
            uStack_28 = 0x32b2;
            uStack_2a = 0x9ba;
            FUN_32b2_6eb1();
            uStack_28 = 0x32b2;
            uStack_2a = 0x9c3;
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            func_0x0003fc09(0x32b2,0);
            uVar8 = &stack0x0000 == (undefined1 *)0xfffa;
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_7191();
            if ((bool)uVar8) {
              uVar7 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar7;
            }
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_7191();
            if ((bool)uVar8) {
              uVar7 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar7;
            }
            uVar7 = *(undefined2 *)(unaff_BP + -0x60);
            puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar5 = *(undefined2 *)(unaff_BP + -0x62);
            puVar5[1] = uVar7;
            uVar7 = *(undefined2 *)(unaff_BP + -0x88);
            puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar5 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar5[1] = uVar7;
            *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
          }
          return *(undefined2 *)(unaff_BP + -0x36);
        }
      }
      return 0;
    }
    FUN_32b2_6d14();
    FUN_32b2_7154();
    FUN_32b2_6eb1();
    *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -8);
    *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -6);
    *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -4);
    *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -2);
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x10);
    *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0xe);
    *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xc);
    *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -10);
    *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x46);
    *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x44);
    *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x42);
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
    FUN_32b2_75fe();
    FUN_32b2_6d14();
    FUN_32b2_704d();
    FUN_32b2_7095();
    FUN_32b2_6eb1();
    uStack_2 = 0x150;
    FUN_32b2_75ec();
    uVar8 = &stack0x0000 == (undefined1 *)0xfff8;
    FUN_32b2_6d14();
    FUN_32b2_704d();
    FUN_32b2_7095();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7191();
    if ((bool)uVar8) {
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191();
      if ((bool)uVar8) {
        return 0;
      }
    }
    uStack_2 = *(undefined2 *)(unaff_BP + -0x80);
    uStack_4 = *(undefined2 *)(unaff_BP + -0x82);
    uStack_6 = *(undefined2 *)(unaff_BP + -0x58);
    uStack_8 = *(undefined2 *)(unaff_BP + -0x5a);
    uStack_a = *(undefined2 *)(unaff_BP + -0x5c);
    uStack_c = *(undefined2 *)(unaff_BP + -0x5e);
    uStack_e = 0x32b2;
    uStack_10 = 0x1d0;
    FUN_32b2_6cc6();
    uStack_e = 0x32b2;
    uStack_10 = 0x1d5;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 0x1df;
    FUN_32b2_6eb1();
    uStack_16 = 0x32b2;
    uStack_18 = 0x1e7;
    FUN_32b2_6cc6();
    uStack_16 = 0x32b2;
    uStack_18 = 0x1ec;
    FUN_32b2_7258();
    uStack_1e = 0x32b2;
    uStack_20 = 0x1f6;
    FUN_32b2_6eb1();
    uStack_1e = 0x32b2;
    uStack_20 = 0x1fa;
    iVar4 = FUN_3ab8_4fbd();
    if (iVar4 == 0) break;
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    uStack_2 = 0x32b2;
    uStack_4 = 0x240;
    FUN_32b2_6eb1();
    uStack_2 = 0x32b2;
    uStack_4 = 0x248;
    FUN_32b2_6cc6();
    uStack_2 = 0x32b2;
    uStack_4 = 0x24d;
    FUN_32b2_7258();
    uStack_a = 0x32b2;
    uStack_c = 599;
    FUN_32b2_6eb1();
    uStack_a = 0x32b2;
    uStack_c = 0x25f;
    FUN_32b2_6d14();
    uStack_12 = 0x32b2;
    uStack_14 = 0x269;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x271;
    FUN_32b2_6cc6();
    uStack_12 = 0x32b2;
    uStack_14 = 0x276;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    uStack_14 = 0x27e;
    FUN_32b2_6e99();
    uStack_1c = 0x288;
    FUN_32b2_6eb1();
    uStack_1c = 0x290;
    FUN_32b2_6cc6();
    uStack_1c = 0x295;
    FUN_32b2_7258();
    uStack_22 = 0x32b2;
    uStack_24 = 0x29f;
    FUN_32b2_6eb1();
    uStack_22 = 0x32b2;
    uStack_24 = 0x2a7;
    FUN_32b2_6cc6();
    uStack_22 = 0x32b2;
    uStack_24 = 0x2ac;
    FUN_32b2_7258();
    uStack_2a = 0x32b2;
    uStack_2c = 0x2b6;
    FUN_32b2_6eb1();
    uStack_2a = 1;
    uStack_2c = 0x32b2;
    uStack_2e = 0x2be;
    func_0x0003fc09();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    uStack_2 = 0x32b2;
    uVar7 = 0x32b2;
    uStack_4 = 0x2e3;
    FUN_32b2_6eb1();
  }
  return 0;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  1224 bytes, 1 callers */

void FUN_3ab8_4fbd(void)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined1 in_AL;
  undefined2 *puVar6;
  int iVar7;
  undefined2 in_DX;
  int unaff_BP;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uStack_3e;
  undefined2 auStack_3c [9];
  undefined2 auStack_26 [6];
  undefined2 uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 auStack_12 [2];
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  out(in_DX,in_AL);
  *(undefined2 *)(unaff_BP + -0x11d8) = in_DX;
  iStack_4 = 0xfb4b;
  func_0x000297e6();
  iStack_4 = 0xfb50;
  func_0x00029d78();
  iStack_a = 0x22b2;
  uStack_c = 0xfb5a;
  func_0x000299d1();
  iStack_a = 0x22b2;
  uStack_c = 0xfb63;
  func_0x000297e6();
  iStack_a = 0x22b2;
  uStack_c = 0xfb68;
  func_0x00029d78();
  auStack_12[0] = 0x22b2;
  uStack_14 = 0xfb72;
  func_0x000299d1();
  auStack_12[0] = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0xfb7b;
  FUN_1def_05d1();
  iStack_4 = 0xfb85;
  func_0x000297e6();
  iStack_4 = 0xfb8e;
  func_0x000297e6();
  iStack_4 = 0xfb93;
  func_0x00029d78();
  iStack_a = 0x22b2;
  uStack_c = 0xfb9d;
  func_0x000299d1();
  iStack_a = 0x22b2;
  uStack_c = 0xfba6;
  func_0x000297e6();
  iStack_a = 0x22b2;
  uStack_c = 0xfbaf;
  func_0x0002996b();
  iStack_a = 0x22b2;
  uStack_c = 0xfbb4;
  func_0x00029d78();
  auStack_12[0] = 0x22b2;
  uStack_14 = 0xfbbe;
  func_0x000299d1();
  auStack_12[0] = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0xfbc7;
  FUN_1def_05d1();
  uVar10 = (undefined1 *)0xffed < auStack_12;
  uVar11 = &stack0x0000 == (undefined1 *)0x0;
  iStack_4 = 0xfbd1;
  func_0x000297e6();
  iStack_4 = 0xfbd6;
  FUN_28b3_1181();
  if (!(bool)uVar10 && !(bool)uVar11) {
    iStack_4 = 0x22b2;
    iStack_6 = -0x420;
    func_0x0000daa6();
    puVar8 = &uStack_16;
    puVar6 = (undefined2 *)(unaff_BP + -0x11e6);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar4 = puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar4 = *puVar3;
    }
    uStack_1a = 0xfbf6;
    iVar7 = FUN_17a6_0cba();
    if (iVar7 != 0) {
      *(int *)(unaff_BP + -0x11d0) = *(int *)(unaff_BP + -0x11d0) + 1;
    }
  }
  iStack_4 = 0xfc0a;
  func_0x000297e6();
  iStack_4 = 0xfc0f;
  func_0x00029d78();
  iStack_a = 0x22b2;
  uStack_c = 0xfc19;
  func_0x000299d1();
  iStack_a = 0x22b2;
  uStack_c = 0xfc22;
  func_0x000297e6();
  iStack_a = 0x22b2;
  uStack_c = 0xfc27;
  func_0x00029d78();
  auStack_12[0] = 0x22b2;
  uStack_14 = 0xfc31;
  func_0x000299d1();
  auStack_12[0] = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0xfc3a;
  FUN_1def_05d1();
  iStack_4 = 0xfc44;
  func_0x000297e6();
  iStack_4 = 0xfc4d;
  func_0x000297e6();
  iStack_4 = 0xfc52;
  func_0x00029d78();
  iStack_a = 0x22b2;
  uStack_c = 0xfc5c;
  func_0x000299d1();
  iStack_a = 0x22b2;
  uStack_c = 0xfc65;
  func_0x000297e6();
  iStack_a = 0x22b2;
  uStack_c = 0xfc6a;
  func_0x00029d78();
  auStack_12[0] = 0x22b2;
  uStack_14 = 0xfc74;
  func_0x000299d1();
  auStack_12[0] = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0xfc7d;
  FUN_1def_05d1();
  uVar10 = (undefined1 *)0xffed < auStack_12;
  uVar11 = &stack0x0000 == (undefined1 *)0x0;
  iStack_4 = 0xfc87;
  func_0x000297e6();
  iStack_4 = 0xfc8c;
  FUN_28b3_1181();
  if (!(bool)uVar10 && !(bool)uVar11) {
    uVar5 = *(undefined2 *)(unaff_BP + -0x1218);
    *(undefined2 *)(unaff_BP + -0x11e6) = *(undefined2 *)(unaff_BP + -0x121a);
    *(undefined2 *)(unaff_BP + -0x11e4) = uVar5;
    uVar5 = *(undefined2 *)(unaff_BP + -0x122c);
    *(undefined2 *)(unaff_BP + -0x11e2) = *(undefined2 *)(unaff_BP + -0x122e);
    *(undefined2 *)(unaff_BP + -0x11e0) = uVar5;
  }
  iStack_4 = 0xfcb7;
  func_0x000297e6();
  iStack_a = 0x22b2;
  uStack_c = 0xfcc1;
  func_0x000299d1();
  iStack_a = 0x22b2;
  uStack_c = 0xfcca;
  func_0x000297e6();
  iStack_a = 0x22b2;
  uStack_c = 0xfcd3;
  func_0x00029bb5();
  iStack_a = 0x22b2;
  uStack_c = 0xfcd8;
  func_0x00029d78();
  auStack_12[0] = 0x22b2;
  uStack_14 = 0xfce2;
  func_0x000299d1();
  auStack_12[0] = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xfcea;
  puVar6 = (undefined2 *)FUN_1def_05d1();
  uVar5 = puVar6[1];
  *(undefined2 *)(unaff_BP + -0x11de) = *puVar6;
  *(undefined2 *)(unaff_BP + -0x11dc) = uVar5;
  iStack_4 = 0xfd05;
  func_0x000297e6();
  iStack_a = 0x22b2;
  uStack_c = 0xfd0f;
  func_0x000299d1();
  iStack_a = 0x22b2;
  uStack_c = 0xfd18;
  func_0x000297e6();
  iStack_a = 0x22b2;
  uStack_c = 0xfd21;
  func_0x00029bb5();
  iStack_a = 0x22b2;
  uStack_c = 0xfd26;
  func_0x00029d78();
  auStack_12[0] = 0x22b2;
  uStack_14 = 0xfd30;
  func_0x000299d1();
  auStack_12[0] = 0;
  uStack_14 = 0x22b2;
  uVar9 = 0x1bb4;
  uStack_16 = 0xfd38;
  puVar6 = (undefined2 *)func_0x0001e558();
  uVar5 = puVar6[1];
  *(undefined2 *)(unaff_BP + -0x11da) = *puVar6;
  *(undefined2 *)(unaff_BP + -0x11d8) = uVar5;
  uVar5 = *(undefined2 *)0xa472;
  *(undefined2 *)(unaff_BP + -0x11b2) = *(undefined2 *)0xa470;
  *(undefined2 *)(unaff_BP + -0x11b0) = uVar5;
  *(undefined2 *)(unaff_BP + -0x1200) = 0;
  *(undefined2 *)(unaff_BP + -0x1202) = 0;
  *(undefined2 *)(unaff_BP + -0x122a) = 1;
  *(undefined2 *)(unaff_BP + -0x1228) = 0;
  do {
    iVar7 = (int)*(uint *)(unaff_BP + -0x1236) >> 0xf;
    if ((iVar7 < *(int *)(unaff_BP + -0x1228)) ||
       ((iVar7 <= *(int *)(unaff_BP + -0x1228) &&
        (*(uint *)(unaff_BP + -0x1236) < *(uint *)(unaff_BP + -0x122a))))) {
      uVar5 = *(undefined2 *)(unaff_BP + -0x11b0);
      *(undefined2 *)(unaff_BP + -0x11ee) = *(undefined2 *)(unaff_BP + -0x11b2);
      *(undefined2 *)(unaff_BP + -0x11ec) = uVar5;
                    /* WARNING: Subroutine does not return */
      iStack_4 = 0xfa98;
      thunk_FUN_32b2_02bc();
    }
    puVar8 = (undefined2 *)(unaff_BP + -0x1190);
    puVar6 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x122a) * 0x16 + -0x115c);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar4 = puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar4 = *puVar3;
    }
    if (((*(byte *)(unaff_BP + -0x117c) & 2) != 0) &&
       (((*(int *)(unaff_BP + -0x122a) != *(int *)(unaff_BP + -0x1216) ||
         (*(int *)(unaff_BP + -0x1228) != *(int *)(unaff_BP + -0x1214))) &&
        ((*(byte *)(unaff_BP + -0x117c) & 1) == 0)))) {
      iStack_4 = unaff_BP + -0x1226;
      iStack_6 = unaff_BP + -0x11fa;
      iStack_8 = unaff_BP + -0x1212;
      iStack_a = unaff_BP + -0x11fe;
      uStack_e = 0xf883;
      uStack_c = uVar9;
      func_0x000297e6();
      uStack_c = 0x22b2;
      uStack_e = 0xf888;
      func_0x00029d78();
      uStack_14 = 0x22b2;
      uVar9 = 0x22b2;
      uStack_16 = 0xf892;
      func_0x000299d1();
      puVar8 = (undefined2 *)&stack0xffd8;
      puVar6 = (undefined2 *)(unaff_BP + -0x1190);
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar4 = puVar8;
        puVar8 = puVar8 + 1;
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar4 = *puVar3;
      }
      puVar8 = &uStack_3e;
      puVar6 = (undefined2 *)(unaff_BP + -0x117a);
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar4 = puVar8;
        puVar8 = puVar8 + 1;
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar4 = *puVar3;
      }
      iVar7 = FUN_3ab8_3c4f();
      uVar10 = 0;
      uVar11 = iVar7 == 0;
      if (!(bool)uVar11) {
        iStack_4 = 0xf8c7;
        func_0x000297e6();
        iStack_4 = 0xf8d0;
        func_0x000297e6();
        iStack_4 = 0xf8d5;
        FUN_28b3_1181();
        if ((bool)uVar10) {
          iStack_4 = 0xf8e0;
          func_0x000297e6();
          iStack_4 = 0xf8e9;
          func_0x000297e6();
          iStack_4 = 0xf8f2;
          FUN_28b3_100d();
          iStack_4 = 0xf8f7;
          FUN_28b3_1181();
          if (!(bool)uVar10 && !(bool)uVar11) {
            iStack_4 = 0xf905;
            func_0x000297e6();
            iStack_4 = 0xf90e;
            func_0x000297e6();
            iStack_4 = 0xf913;
            FUN_28b3_1181();
            if ((bool)uVar10 || (bool)uVar11) {
              iStack_4 = 0xf953;
              func_0x000297e6();
              iStack_4 = 0xf95c;
              func_0x000297e6();
              iStack_4 = 0xf965;
              func_0x00029bb5();
              iStack_4 = 0xf96a;
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar11) {
                iStack_4 = 0xf975;
                func_0x000297e6();
                iStack_4 = 0xf97e;
                func_0x000297e6();
                iStack_4 = 0xf987;
                func_0x00029bb5();
                uVar9 = 0x22b2;
                iStack_4 = 0xf98c;
                FUN_28b3_1181();
                if (!(bool)uVar10 && !(bool)uVar11) goto LAB_3ab8_4c89;
              }
            }
            else {
              iStack_4 = 0xf91e;
              func_0x000297e6();
              iStack_4 = 0xf927;
              func_0x000297e6();
              iStack_4 = 0xf92c;
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar11) {
                iStack_4 = 0xf937;
                func_0x000297e6();
                iStack_4 = 0xf940;
                func_0x000297e6();
                uVar9 = 0x22b2;
                iStack_4 = 0xf945;
                FUN_28b3_1181();
                if (!(bool)uVar10 && !(bool)uVar11) goto LAB_3ab8_4c89;
              }
            }
            iStack_4 = unaff_BP + -0x121a;
            iStack_6 = unaff_BP + -0x121e;
            iStack_8 = unaff_BP + -0x1206;
            iStack_a = 0x22b2;
            uStack_c = 0xf9ae;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0xf9b3;
            func_0x00029d78();
            auStack_12[0] = 0x22b2;
            uStack_14 = 0xf9bd;
            func_0x000299d1();
            puVar8 = auStack_26;
            puVar6 = (undefined2 *)(unaff_BP + -0x1190);
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar4 = puVar8;
              puVar8 = puVar8 + 1;
              puVar3 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar4 = *puVar3;
            }
            puVar8 = auStack_3c;
            puVar6 = (undefined2 *)(unaff_BP + -0x11e6);
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar4 = puVar8;
              puVar8 = puVar8 + 1;
              puVar3 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar4 = *puVar3;
            }
            uStack_3e = 0x22b2;
            iVar7 = FUN_3ab8_38ab();
            if (iVar7 != 0) {
              iStack_4 = 0xf9ef;
              func_0x000297e6();
              iStack_4 = 0xf9f8;
              func_0x000297e6();
              iStack_4 = 0xf9fd;
              func_0x00029d78();
              iStack_a = 0x22b2;
              uStack_c = 0xfa07;
              func_0x000299d1();
              iStack_a = 0x22b2;
              uStack_c = 0xfa10;
              func_0x000297e6();
              iStack_a = 0x22b2;
              uStack_c = 0xfa15;
              func_0x00029d78();
              auStack_12[0] = 0x22b2;
              uStack_14 = 0xfa1f;
              func_0x000299d1();
              auStack_12[0] = 1;
              uStack_14 = 0x22b2;
              uStack_16 = 0xfa28;
              FUN_1def_05d1();
              uVar10 = (undefined1 *)0xffed < auStack_12;
              uVar11 = &stack0x0000 == (undefined1 *)0x0;
              iStack_4 = 0xfa32;
              func_0x000297e6();
              iStack_4 = 0xfa3b;
              func_0x0002996b();
              iStack_4 = 0xfa40;
              FUN_28b3_1181();
              if ((bool)uVar10) {
                iStack_4 = 0xfa4b;
                func_0x000297e6();
                iStack_4 = 0xfa54;
                func_0x000297e6();
                iStack_4 = 0xfa59;
                FUN_28b3_1181();
                if (!(bool)uVar10 && !(bool)uVar11) {
                  iStack_4 = 0xfa67;
                  func_0x000297e6();
                  uVar9 = 0x22b2;
                  iStack_4 = 0xfa70;
                  func_0x00029983();
                  uVar5 = *(undefined2 *)(unaff_BP + -0x1228);
                  *(undefined2 *)(unaff_BP + -0x1202) = *(undefined2 *)(unaff_BP + -0x122a);
                  *(undefined2 *)(unaff_BP + -0x1200) = uVar5;
                  goto LAB_3ab8_4c89;
                }
              }
            }
            uVar9 = 0x22b2;
            goto LAB_3ab8_4c89;
          }
        }
        uVar9 = 0x22b2;
      }
    }
LAB_3ab8_4c89:
    puVar1 = (uint *)(unaff_BP + -0x122a);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -0x1228) = *(int *)(unaff_BP + -0x1228) + (uint)(0xfffe < uVar2);
  } while( true );
}



/* 3ab8:522f  FUN_3ab8_522f  849 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_522f(void)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 in_DX;
  undefined2 uVar8;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 *puVar9;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uStack_3e;
  undefined2 auStack_3c [9];
  undefined2 auStack_26 [8];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 auStack_12 [2];
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  iVar5 = in(in_DX);
  *(int *)(in_BX + unaff_SI) = *(int *)(in_BX + unaff_SI) + iVar5;
  *(undefined2 *)(unaff_BP + -0x1228) = 0;
  do {
    iVar5 = (int)*(uint *)(unaff_BP + -0x1236) >> 0xf;
    if (iVar5 < *(int *)(unaff_BP + -0x1228)) {
      FUN_2bb4_45c0();
      return;
    }
    if ((iVar5 <= *(int *)(unaff_BP + -0x1228)) &&
       (*(uint *)(unaff_BP + -0x1236) < *(uint *)(unaff_BP + -0x122a))) {
      FUN_2bb4_45c0();
      return;
    }
    puVar9 = (undefined2 *)(unaff_BP + -0x1190);
    puVar6 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x122a) * 0x16 + -0x115c);
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar4 = puVar9;
      puVar9 = puVar9 + 1;
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar4 = *puVar3;
    }
    if (((*(byte *)(unaff_BP + -0x117c) & 2) != 0) &&
       ((*(int *)(unaff_BP + -0x122a) != *(int *)(unaff_BP + -0x1216) ||
        (*(int *)(unaff_BP + -0x1228) != *(int *)(unaff_BP + -0x1214))))) {
      iStack_4 = unaff_BP + -0x1226;
      iStack_6 = unaff_BP + -0x11fa;
      iStack_8 = unaff_BP + -0x1212;
      iStack_a = unaff_BP + -0x11fe;
      uStack_e = 0xfddc;
      uStack_c = unaff_CS;
      func_0x000297e6();
      uStack_c = 0x22b2;
      uStack_e = 0xfde1;
      func_0x00029d78();
      uStack_14 = 0x22b2;
      unaff_CS = 0x22b2;
      uStack_16 = 0xfdeb;
      func_0x000299d1();
      puVar9 = (undefined2 *)&stack0xffd8;
      puVar6 = (undefined2 *)(unaff_BP + -0x1190);
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar4 = puVar9;
        puVar9 = puVar9 + 1;
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar4 = *puVar3;
      }
      puVar9 = &uStack_3e;
      puVar6 = (undefined2 *)(unaff_BP + -0x117a);
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar4 = puVar9;
        puVar9 = puVar9 + 1;
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar4 = *puVar3;
      }
      iVar5 = FUN_3ab8_3c4f();
      uVar10 = 0;
      uVar11 = iVar5 == 0;
      if (!(bool)uVar11) {
        iStack_4 = 0xfe78;
        func_0x000297e6();
        iStack_4 = 0xfe81;
        func_0x000297e6();
        iStack_4 = 0xfe8a;
        FUN_28b3_100d();
        iStack_4 = -0x171;
        FUN_28b3_1181();
        if ((bool)uVar10 || (bool)uVar11) {
          iStack_4 = unaff_BP + -0x121a;
          iStack_6 = unaff_BP + -0x121e;
          iStack_8 = unaff_BP + -0x1206;
          iStack_a = 0x22b2;
          uStack_c = 0xfeae;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0xfeb3;
          func_0x00029d78();
          auStack_12[0] = 0x22b2;
          uStack_14 = 0xfebd;
          func_0x000299d1();
          puVar9 = auStack_26;
          puVar6 = (undefined2 *)(unaff_BP + -0x1190);
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar4 = puVar9;
            puVar9 = puVar9 + 1;
            puVar3 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar4 = *puVar3;
          }
          puVar9 = auStack_3c;
          puVar6 = (undefined2 *)(unaff_BP + -0x11e6);
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar4 = puVar9;
            puVar9 = puVar9 + 1;
            puVar3 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar4 = *puVar3;
          }
          uStack_3e = 0x22b2;
          iVar5 = FUN_3ab8_38ab();
          if (iVar5 != 0) {
            iStack_4 = 0xfef2;
            func_0x000297e6();
            iStack_4 = 0xfef7;
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0xff01;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0xff0a;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0xff0f;
            func_0x00029d78();
            auStack_12[0] = 0x22b2;
            uStack_14 = 0xff19;
            func_0x000299d1();
            auStack_12[0] = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0xff22;
            puVar6 = (undefined2 *)func_0x0001e558();
            uVar7 = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x1226) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x1224) = uVar7;
            iStack_4 = 0xff3d;
            func_0x000297e6();
            iStack_4 = 0xff42;
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0xff4c;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0xff55;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0xff5a;
            func_0x00029d78();
            auStack_12[0] = 0x22b2;
            uStack_14 = 0xff64;
            func_0x000299d1();
            auStack_12[0] = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0xff6d;
            puVar6 = (undefined2 *)func_0x0001e558();
            uVar10 = (undefined1 *)0xffed < auStack_12;
            uVar11 = &stack0x0000 == (undefined1 *)0x0;
            uVar7 = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x1232) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x1230) = uVar7;
            iStack_4 = 0xff88;
            func_0x000297e6();
            iStack_4 = 0xff91;
            func_0x000297e6();
            iStack_4 = 0xff96;
            FUN_28b3_1181();
            if ((bool)uVar10 || (bool)uVar11) {
              *(undefined2 *)(unaff_BP + -0x1238) = 0;
              iStack_4 = 0xffda;
              func_0x000297e6();
              iStack_4 = 0xffe3;
              func_0x000297e6();
              iStack_4 = 0xffec;
              func_0x00029bb5();
              iStack_4 = 0xfff1;
              FUN_28b3_1181();
              if (!(bool)uVar10) {
                iStack_4 = 0xfffc;
                func_0x000297e6();
                iStack_4 = 5;
                func_0x000297e6();
                iStack_4 = 0xe;
                func_0x00029bb5();
                goto LAB_3ab8_548e;
              }
            }
            else {
              *(undefined2 *)(unaff_BP + -0x1238) = 0;
              iStack_4 = 0xffa7;
              func_0x000297e6();
              iStack_4 = 0xffb0;
              func_0x000297e6();
              iStack_4 = 0xffb5;
              FUN_28b3_1181();
              if (!(bool)uVar10) {
                iStack_4 = 0xffc0;
                func_0x000297e6();
                iStack_4 = 0xffc9;
                func_0x000297e6();
LAB_3ab8_548e:
                iStack_4 = 0x13;
                FUN_28b3_1181();
                if (!(bool)uVar10) goto LAB_3ab8_549b;
              }
            }
            *(undefined2 *)(unaff_BP + -0x1238) = 1;
LAB_3ab8_549b:
            if (*(int *)(unaff_BP + -0x1238) == 0) {
              uVar7 = *(undefined2 *)(unaff_BP + -0x1218);
              *(undefined2 *)(unaff_BP + -0x11fa) = *(undefined2 *)(unaff_BP + -0x121a);
              *(undefined2 *)(unaff_BP + -0x11f8) = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x122e);
              uVar8 = *(undefined2 *)(unaff_BP + -0x122c);
            }
            else {
              uVar7 = *(undefined2 *)(unaff_BP + -0x1204);
              *(undefined2 *)(unaff_BP + -0x11fa) = *(undefined2 *)(unaff_BP + -0x1206);
              *(undefined2 *)(unaff_BP + -0x11f8) = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x121e);
              uVar8 = *(undefined2 *)(unaff_BP + -0x121c);
            }
            *(undefined2 *)(unaff_BP + -0x120e) = uVar7;
            *(undefined2 *)(unaff_BP + -0x120c) = uVar8;
            iStack_4 = 0x65;
            func_0x000297e6();
            iStack_4 = 0x6e;
            func_0x000297e6();
            iStack_4 = 0x73;
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0x7d;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0x86;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0x8b;
            func_0x00029d78();
            auStack_12[0] = 0x22b2;
            uStack_14 = 0x95;
            func_0x000299d1();
            auStack_12[0] = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0x9e;
            FUN_1def_05d1();
            uVar10 = (undefined1 *)0xffed < auStack_12;
            iStack_4 = 0xa8;
            func_0x000297e6();
            iStack_4 = 0xb1;
            func_0x0002996b();
            iStack_4 = 0xb6;
            FUN_28b3_1181();
            if ((bool)uVar10) {
              uVar7 = *(undefined2 *)(unaff_BP + -0x1228);
              *(undefined2 *)(unaff_BP + -0x1266) = *(undefined2 *)(unaff_BP + -0x122a);
              *(undefined2 *)(unaff_BP + -0x1264) = uVar7;
              iStack_4 = 0xd4;
              func_0x000297e6();
              iStack_4 = 0xdd;
              func_0x00029983();
              uVar7 = *(undefined2 *)(unaff_BP + -0x11f8);
              *(undefined2 *)(unaff_BP + -0x11de) = *(undefined2 *)(unaff_BP + -0x11fa);
              *(undefined2 *)(unaff_BP + -0x11dc) = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x120c);
              *(undefined2 *)(unaff_BP + -0x11da) = *(undefined2 *)(unaff_BP + -0x120e);
              *(undefined2 *)(unaff_BP + -0x11d8) = uVar7;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        unaff_CS = 0x22b2;
      }
    }
    puVar1 = (uint *)(unaff_BP + -0x122a);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -0x1228) = *(int *)(unaff_BP + -0x1228) + (uint)(0xfffe < uVar2);
  } while( true );
}



/* 4000:03a4  FUN_4000_03a4  581 bytes, 0 callers */

undefined1 * __cdecl16far FUN_4000_03a4(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 local_86 [4];
  undefined2 local_82;
  undefined2 local_80;
  undefined1 local_7e [98];
  undefined2 uStack_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined1 *puStack_10;
  int local_e;
  int local_c;
  undefined1 *local_a;
  undefined2 *local_8;
  undefined2 *local_6;
  int *local_4;
  
  local_4 = (int *)0x3ab8;
  uVar3 = 0x22b2;
  local_6 = (undefined2 *)0x3af;
  FUN_21f2_0ebc();
  local_8 = (undefined2 *)*(int *)0x14c;
  local_a = (undefined1 *)0x0;
  local_c = 0;
LAB_3ab8_5844:
  if (param_1 == 0) {
    uVar4 = 0x885;
    local_6 = (undefined2 *)0x3d2;
    local_4 = (int *)uVar3;
    func_0x0000c3ca();
    local_4 = (int *)*(undefined2 *)0xa416;
    local_6 = (undefined2 *)*(undefined2 *)0xa414;
    local_8 = (undefined2 *)*(int *)0xa412;
    local_a = (undefined1 *)*(int *)0xa410;
    local_c = *(int *)0xa416;
    local_e = *(int *)0xa414;
    puStack_10 = (undefined1 *)*(undefined2 *)0xa412;
    local_12 = *(undefined2 *)0xa410;
    uStack_14 = 0;
    uStack_16 = 0x5d10;
    uStack_18 = 0xffff;
    local_1a = 1;
    uStack_1c = 0;
    pcVar1 = (code *)swi(0x3f);
    iVar2 = (*pcVar1)();
    if (*(int *)0x158 != 0) {
      return (undefined1 *)0x1;
    }
    uVar3 = uVar4;
    if (iVar2 == -1) {
      if (((int)local_a < 1) && (local_c < 1)) {
        return (undefined1 *)0x0;
      }
      for (; 0 < (int)local_a; local_a = (undefined1 *)((int)local_a + -1)) {
        local_4 = (int *)0x0;
        local_8 = (undefined2 *)0x438;
        local_6 = (undefined2 *)uVar4;
        func_0x0000daa6();
        uStack_16 = *(undefined2 *)0x148;
        uStack_14 = *(undefined2 *)0x14a;
        local_8 = (undefined2 *)0x885;
        uVar4 = 0x11f2;
        local_a = (undefined1 *)0x44d;
        local_6 = (undefined2 *)uStack_16;
        local_4 = (int *)uStack_14;
        FUN_17a6_0d19();
      }
      for (; 0 < local_c; local_c = local_c + -1) {
        local_4 = (int *)0x0;
        local_8 = (undefined2 *)0x462;
        local_6 = (undefined2 *)uVar4;
        func_0x0000daa6();
        uStack_16 = *(undefined2 *)0x14c;
        uStack_14 = *(undefined2 *)0x14e;
        local_8 = (undefined2 *)0x885;
        uVar4 = 0x11f2;
        local_a = (undefined1 *)0x477;
        local_6 = (undefined2 *)uStack_16;
        local_4 = (int *)uStack_14;
        FUN_13bf_0327();
      }
      local_6 = (undefined2 *)0x487;
      local_4 = (int *)uVar4;
      func_0x0000abfa();
      local_a = (undefined1 *)0x0;
      local_c = 0;
      local_4 = (int *)0x1;
      local_6 = (undefined2 *)0x885;
      uVar3 = 0x885;
      local_8 = (undefined2 *)0x498;
      func_0x0000b1d8();
      goto LAB_3ab8_5844;
    }
  }
  local_a = (undefined1 *)0x0;
  local_c = 0;
  while( true ) {
    local_6 = (undefined2 *)0x4ad;
    local_4 = (int *)uVar3;
    func_0x000297e6();
    local_4 = (int *)0x22b2;
    local_6 = (undefined2 *)0x4b2;
    func_0x00029d78();
    local_c = 0x22b2;
    local_e = 0x4bc;
    func_0x000299d1();
    local_c = 0x522;
    local_e = 0x5d17;
    puStack_10 = local_7e;
    local_12 = 0x22b2;
    uStack_14 = 0x4cd;
    FUN_21f2_3454();
    if (*(char *)0x5d56 == '\0') {
      local_4 = (int *)0x5d3c;
    }
    else {
      local_4 = (int *)0x5d39;
    }
    local_6 = (undefined2 *)local_7e;
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined1 *)0x4e9;
    FUN_21f2_2d26();
    local_4 = (int *)0x5d3f;
    local_6 = (undefined2 *)local_7e;
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined1 *)0x4f8;
    FUN_21f2_2d26();
    if (*(char *)0x5d56 != '\0') {
      local_4 = (int *)0x5d43;
      local_6 = (undefined2 *)local_7e;
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined1 *)0x50e;
      FUN_21f2_2d26();
    }
    local_4 = &local_e;
    local_6 = &local_1a;
    local_8 = &local_12;
    local_a = local_7e;
    local_c = 1;
    local_e = 0x22b2;
    uVar3 = 0x1bb4;
    puStack_10 = (undefined1 *)0x529;
    local_4 = (int *)FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return (undefined1 *)0x1;
    }
    if (((local_4 == (int *)0xffff) || (local_4 == (int *)0x2)) || (local_e == 2)) {
      local_4 = (int *)0x0;
      local_6 = (undefined2 *)0x1bb4;
      uVar3 = 0x7a6;
      local_8 = (undefined2 *)0x551;
      func_0x00008095();
      if (param_1 != 0) {
        return (undefined1 *)0x0;
      }
      goto LAB_3ab8_5844;
    }
    if ((local_4 == (int *)0x1) || (local_e == 1)) break;
    if (local_4 == (int *)0x3) {
      local_4 = (int *)0x1bb4;
      local_6 = (undefined2 *)0x5e0;
      func_0x000297e6();
      local_4 = (int *)0x22b2;
      local_6 = (undefined2 *)0x5e9;
      func_0x0002996b();
      local_4 = (int *)0x22b2;
      local_6 = (undefined2 *)0x5f1;
      func_0x00029983();
      local_4 = (int *)local_86;
      local_6 = &local_82;
      local_8 = (undefined2 *)0x5d4c;
      local_a = (undefined1 *)0x2;
      local_c = 1;
      local_e = 0x22b2;
      uVar3 = 0xad;
      puStack_10 = (undefined1 *)0x60b;
      iVar2 = func_0x00001dd5();
      if (*(int *)0x158 != 0) {
        return (undefined1 *)0x1;
      }
      uVar5 = 0;
      uVar6 = iVar2 == 0;
      if (-1 < iVar2) {
        local_4 = (int *)0xad;
        local_6 = (undefined2 *)0x629;
        func_0x000297e6();
        local_4 = (int *)0x22b2;
        local_6 = (undefined2 *)0x631;
        func_0x000297e6();
        local_4 = (int *)0x22b2;
        uVar3 = 0x22b2;
        local_6 = (undefined2 *)0x636;
        FUN_28b3_1181();
        if (!(bool)uVar5 && !(bool)uVar6) {
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x640;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x649;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          uVar3 = 0x22b2;
          local_6 = (undefined2 *)0x64e;
          FUN_28b3_1181();
          if (!(bool)uVar5) {
            *(undefined2 *)0x5d52 = local_82;
            *(undefined2 *)0x5d54 = local_80;
          }
        }
      }
    }
    if (local_4 == (int *)0x4) {
      if (*(char *)0x5d56 == '\0') {
        *(undefined1 *)0x5d56 = 1;
      }
      else {
        *(undefined1 *)0x5d56 = 0;
      }
    }
  }
  local_4 = (int *)0x0;
  local_6 = (undefined2 *)0x1bb4;
  local_8 = (undefined2 *)0x573;
  func_0x0000daa6();
  local_4 = (int *)0x885;
  local_6 = (undefined2 *)0x579;
  func_0x0000c3ca();
  local_4 = (int *)0x0;
  local_6 = (undefined2 *)0x885;
  local_8 = (undefined2 *)0x581;
  func_0x00008095();
  local_4 = (int *)(uint)*(byte *)0x5d56;
  local_6 = (undefined2 *)0x7a6;
  local_8 = (undefined2 *)0x59e;
  func_0x000297e6();
  local_6 = (undefined2 *)0x22b2;
  local_8 = (undefined2 *)0x5a3;
  func_0x00029d78();
  local_e = 0x22b2;
  uVar3 = 0x22b2;
  puStack_10 = (undefined1 *)0x5ad;
  func_0x000299d1();
  local_e = 0x22b2;
  puStack_10 = (undefined1 *)0x5b1;
  local_a = (undefined1 *)FUN_4375_b3e9();
  local_c = *(int *)0x14c - (int)local_8;
  if (param_1 != 0) {
    return local_a;
  }
  goto LAB_3ab8_5844;
}



/* 3ab8:5b01  FUN_3ab8_5b01  1554 bytes, 1 callers */

void __cdecl16far FUN_3ab8_5b01(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_112 [4];
  undefined1 local_10e [10];
  undefined2 local_104 [10];
  undefined2 local_f0 [10];
  undefined1 local_dc [4];
  undefined4 local_d8;
  int local_d4;
  int local_d2;
  undefined1 local_d0 [100];
  uint local_6c;
  int local_6a;
  undefined1 local_68 [2];
  undefined1 local_66 [20];
  undefined2 local_52 [10];
  undefined4 local_3e;
  undefined2 local_3a [10];
  undefined4 local_26;
  int local_22;
  undefined4 local_20;
  int local_1c;
  undefined2 local_1a;
  undefined1 *puStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 *puStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  undefined2 *puStack_8;
  undefined2 *local_6;
  int iVar8;
  
  local_6 = (undefined2 *)0x68c;
  FUN_21f2_0ebc();
  local_6 = (undefined2 *)0x5d57;
  puStack_8 = (undefined2 *)local_66;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x69a;
  FUN_21f2_3454();
  local_6 = (undefined2 *)0x5d5c;
  puStack_8 = (undefined2 *)local_10e;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x6aa;
  FUN_21f2_3454();
  local_6 = (undefined2 *)local_66;
  puStack_8 = local_52;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x6b9;
  FUN_21f2_3454();
  local_6 = (undefined2 *)0x5d5f;
  puStack_8 = local_52;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x6c8;
  FUN_21f2_2d26();
  local_6 = (undefined2 *)0xf7e;
  puStack_8 = local_3a;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x6d7;
  FUN_21f2_3454();
  local_6 = (undefined2 *)local_66;
  puStack_8 = local_3a;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x6e6;
  FUN_21f2_2d26();
  local_6 = (undefined2 *)0xfbd;
  puStack_8 = &local_1a;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x6f5;
  FUN_21f2_3454();
  local_6 = (undefined2 *)local_66;
  puStack_8 = &local_1a;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x704;
  FUN_21f2_2d26();
  local_6 = (undefined2 *)0xf62;
  puStack_8 = local_104;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x714;
  FUN_21f2_3454();
  local_6 = (undefined2 *)local_66;
  puStack_8 = local_104;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x724;
  FUN_21f2_2d26();
  local_6 = (undefined2 *)0x5d64;
  puStack_8 = local_f0;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x734;
  FUN_21f2_3454();
  local_6 = (undefined2 *)local_66;
  puStack_8 = local_f0;
  puStack_a = (undefined1 *)0x22b2;
  uVar4 = 0x22b2;
  puStack_c = (undefined1 *)0x744;
  FUN_21f2_2d26();
  do {
    if (param_1 == 0) {
      local_6 = (undefined2 *)local_66;
      puStack_8 = (undefined2 *)local_d0;
      puStack_c = (undefined1 *)0x75a;
      puStack_a = (undefined1 *)uVar4;
      FUN_21f2_3454();
      local_6 = (undefined2 *)0x804;
      puStack_8 = (undefined2 *)local_d0;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x76a;
      FUN_21f2_2d26();
      local_6 = (undefined2 *)*(undefined2 *)0xa416;
      puStack_8 = (undefined2 *)*(undefined2 *)0xa414;
      puStack_a = (undefined1 *)*(undefined2 *)0xa412;
      puStack_c = (undefined1 *)*(undefined2 *)0xa410;
      puStack_e = (undefined2 *)*(int *)0xa416;
      uStack_10 = *(undefined2 *)0xa414;
      uStack_12 = *(undefined2 *)0xa412;
      uStack_14 = *(undefined2 *)0xa410;
      uStack_16 = 0;
      puStack_18 = local_d0;
      local_1a = 0;
      local_1c = 1;
      local_20._2_2_ = 0;
      pcVar1 = (code *)swi(0x3f);
      local_d4 = (*pcVar1)();
      uVar4 = 0x885;
      func_0x0000c3ca();
      if (local_d4 == -1) {
        return;
      }
      if (*(int *)0x158 != 0) {
        return;
      }
    }
    local_22 = 0;
    local_1c = 0;
    iVar8 = 0;
    bVar2 = false;
    while( true ) {
      local_6 = (undefined2 *)local_10e;
      puStack_8 = (undefined2 *)local_d0;
      puStack_c = (undefined1 *)0x7e0;
      puStack_a = (undefined1 *)uVar4;
      FUN_21f2_3454();
      local_6 = local_52;
      puStack_8 = (undefined2 *)local_d0;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x7f0;
      FUN_21f2_2d26();
      local_6 = (undefined2 *)local_10e;
      puStack_8 = (undefined2 *)local_d0;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x801;
      FUN_21f2_2d26();
      local_6 = local_3a;
      puStack_8 = (undefined2 *)local_d0;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x811;
      FUN_21f2_2d26();
      local_6 = (undefined2 *)local_10e;
      puStack_8 = (undefined2 *)local_d0;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x822;
      FUN_21f2_2d26();
      local_6 = &local_1a;
      puStack_8 = (undefined2 *)local_d0;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x832;
      FUN_21f2_2d26();
      local_6 = (undefined2 *)local_10e;
      puStack_8 = (undefined2 *)local_d0;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x843;
      FUN_21f2_2d26();
      local_6 = local_104;
      puStack_8 = (undefined2 *)local_d0;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x854;
      FUN_21f2_2d26();
      local_6 = (undefined2 *)local_10e;
      puStack_8 = (undefined2 *)local_d0;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x865;
      FUN_21f2_2d26();
      local_6 = local_f0;
      puStack_8 = (undefined2 *)local_d0;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x876;
      FUN_21f2_2d26();
      local_6 = (undefined2 *)local_10e;
      puStack_8 = (undefined2 *)local_d0;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x887;
      FUN_21f2_2d26();
      local_6 = (undefined2 *)local_d0;
      puStack_8 = (undefined2 *)0x5;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x897;
      FUN_1def_07a4();
      *(undefined2 *)0xc1a = 0;
      *(undefined2 *)0xc2c = 0;
      local_6 = (undefined2 *)local_68;
      puStack_8 = (undefined2 *)local_112;
      puStack_a = local_dc;
      puStack_c = local_d0;
      puStack_e = (undefined2 *)0x1;
      uStack_10 = 0x1bb4;
      uStack_12 = 0x8bd;
      local_d4 = FUN_1def_0904();
      local_6 = (undefined2 *)0x1bb4;
      uVar4 = 0x885;
      puStack_8 = (undefined2 *)0x8c9;
      func_0x0000c3ca();
      if (*(int *)0x158 != 0) {
        local_6 = (undefined2 *)0x0;
        puStack_8 = (undefined2 *)0x885;
        puStack_a = (undefined1 *)0x8d8;
        func_0x00008095();
        return;
      }
      if (local_d4 == -1) break;
      if ((0 < local_d4) && (local_d4 < 6)) {
        local_6 = (undefined2 *)0x885;
        uVar4 = 0x885;
        puStack_8 = (undefined2 *)0x90e;
        func_0x0000c3ca();
        *(undefined1 *)0xd14 = 2;
        *(undefined2 *)0xc22 = 1;
        if (local_d4 == 1) {
          bVar2 = true;
          local_22 = 0;
          local_1c = 0;
          local_6 = (undefined2 *)0x0;
          iVar8 = 0;
        }
        if (local_d4 == 2) {
          iVar8 = 1;
          local_22 = 0;
          local_1c = 0;
          bVar2 = false;
        }
        if (local_d4 == 3) {
          local_6 = (undefined2 *)0x1;
          bVar2 = false;
        }
        if (local_d4 == 4) {
          local_1c = 1;
          local_22 = 0;
          iVar8 = 0;
          bVar2 = false;
        }
        if (local_d4 == 5) {
          local_22 = 1;
          local_1c = 0;
          iVar8 = 0;
          bVar2 = false;
        }
        if (bVar2) {
          local_6 = (undefined2 *)0xffff;
          puStack_8 = (undefined2 *)0x7;
          puStack_a = (undefined1 *)0x2;
          puStack_c = (undefined1 *)0x14;
          puStack_e = local_52;
          uStack_10 = 0x885;
          uVar4 = 0xdef;
          uStack_12 = 0x9ae;
          FUN_1000_02b5();
        }
        uVar5 = uVar4;
        if (iVar8 != 0) {
          local_6 = (undefined2 *)0xffff;
          puStack_8 = (undefined2 *)0x6;
          puStack_a = (undefined1 *)0x2;
          puStack_c = (undefined1 *)0x18;
          puStack_e = local_3a;
          uVar5 = 0xdef;
          uStack_12 = 0x9d0;
          uStack_10 = uVar4;
          FUN_1000_02b5();
        }
        uVar4 = uVar5;
        if (local_6 != (undefined2 *)0x0) {
          local_6 = (undefined2 *)0xffff;
          puStack_8 = (undefined2 *)0x6;
          puStack_a = (undefined1 *)0x2;
          puStack_c = (undefined1 *)0x26;
          puStack_e = &local_1a;
          uVar4 = 0xdef;
          uStack_12 = 0x9f2;
          uStack_10 = uVar5;
          FUN_1000_02b5();
        }
        uVar5 = uVar4;
        if (local_1c != 0) {
          local_6 = (undefined2 *)0xffff;
          puStack_8 = (undefined2 *)0x6;
          puStack_a = (undefined1 *)0x2;
          puStack_c = (undefined1 *)0x34;
          puStack_e = local_104;
          uVar5 = 0xdef;
          uStack_12 = 0xa15;
          uStack_10 = uVar4;
          FUN_1000_02b5();
        }
        uVar4 = uVar5;
        if (local_22 != 0) {
          local_6 = (undefined2 *)0xffff;
          puStack_8 = (undefined2 *)0x6;
          puStack_a = (undefined1 *)0x2;
          puStack_c = (undefined1 *)0x41;
          puStack_e = local_f0;
          uVar4 = 0xdef;
          uStack_12 = 0xa38;
          uStack_10 = uVar5;
          FUN_1000_02b5();
        }
        local_6 = (undefined2 *)0x0;
        puStack_a = (undefined1 *)0xa43;
        puStack_8 = (undefined2 *)uVar4;
        func_0x00008095();
        local_6a = 0;
        puStack_a = (undefined1 *)0x7a6;
        uVar7 = local_20;
        uVar6 = local_3e;
        for (local_6c = 1;
            (local_20 = uVar7, local_6a <= *(int *)0x14a &&
            ((local_6a < *(int *)0x14a || (local_6c <= *(uint *)0x148)))); local_6c = local_6c + 1)
        {
          local_6 = (undefined2 *)local_6a;
          puStack_8 = (undefined2 *)local_6c;
          puStack_c = (undefined1 *)0xa79;
          local_3e = uVar6;
          uVar7 = func_0x0000013f();
          uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
          iVar3 = (int)uVar7;
          if ((*(byte *)(iVar3 + 0x14) & 2) != 0) {
            *(uint *)(iVar3 + 0x14) =
                 *(uint *)(iVar3 + 0x14) ^
                 (byte)(*(byte *)(iVar3 + 0x14) ^ (byte)(iVar8 << 5)) & 0x20;
            *(uint *)(iVar3 + 0x14) =
                 *(uint *)(iVar3 + 0x14) ^
                 ((byte)(*(byte *)(iVar3 + 0x15) ^ (byte)((uint)((int)local_6 << 0xb) >> 8)) & 8) <<
                 8;
            *(uint *)(iVar3 + 0x14) =
                 *(uint *)(iVar3 + 0x14) ^
                 ((byte)(*(byte *)(iVar3 + 0x15) ^ (byte)((uint)(local_1c << 0xd) >> 8)) & 0x20) <<
                 8;
            *(uint *)(iVar3 + 0x14) =
                 *(uint *)(iVar3 + 0x14) ^
                 ((byte)(*(byte *)(iVar3 + 0x15) ^ (byte)((uint)(local_22 << 0xc) >> 8)) & 0x10) <<
                 8;
            *(uint *)(iVar3 + 0x14) = local_22 << 0xf ^ *(uint *)(iVar3 + 0x14) & 0x7fff;
          }
          local_6a = local_6a + (uint)(0xfffe < local_6c);
          puStack_a = (undefined1 *)0;
          uVar6 = local_3e;
        }
        local_6a = 0;
        uVar7 = local_26;
        for (local_6c = 1;
            (local_3e = uVar6, local_6a <= *(int *)0x14e &&
            ((local_6a < *(int *)0x14e || (local_6c <= *(uint *)0x14c)))); local_6c = local_6c + 1)
        {
          local_6 = (undefined2 *)local_6a;
          puStack_8 = (undefined2 *)local_6c;
          puStack_c = (undefined1 *)0xb3d;
          local_26 = uVar7;
          uVar6 = func_0x00000271();
          uVar4 = (undefined2)((ulong)uVar6 >> 0x10);
          iVar3 = (int)uVar6;
          if ((*(byte *)(iVar3 + 0x1e) & 2) != 0) {
            *(uint *)(iVar3 + 0x1e) =
                 *(uint *)(iVar3 + 0x1e) ^
                 (byte)(*(byte *)(iVar3 + 0x1e) ^ (byte)(iVar8 << 5)) & 0x20;
            *(uint *)(iVar3 + 0x1e) =
                 *(uint *)(iVar3 + 0x1e) ^
                 (byte)(*(byte *)(iVar3 + 0x1e) ^ (byte)((int)local_6 << 4)) & 0x10;
            *(uint *)(iVar3 + 0x1e) =
                 *(uint *)(iVar3 + 0x1e) ^
                 (byte)(*(byte *)(iVar3 + 0x1e) ^ (byte)(local_1c << 6)) & 0x40;
            *(uint *)(iVar3 + 0x1e) =
                 *(uint *)(iVar3 + 0x1e) ^
                 (byte)(*(byte *)(iVar3 + 0x1e) ^ (byte)(local_22 << 7)) & 0x80;
          }
          local_6a = local_6a + (uint)(0xfffe < local_6c);
          puStack_a = (undefined1 *)0;
          uVar7 = local_26;
        }
        puStack_8 = (undefined2 *)puStack_a;
        uVar6 = local_d8;
        for (local_d2 = 1; local_26 = uVar7, local_d2 <= *(int *)0x152; local_d2 = local_d2 + 1) {
          local_6 = (undefined2 *)local_d2;
          puStack_a = (undefined1 *)0xbb4;
          local_d8 = uVar6;
          uVar7 = func_0x000003ef();
          uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
          iVar3 = (int)uVar7;
          if ((*(byte *)(iVar3 + 10) & 2) != 0) {
            *(uint *)(iVar3 + 10) =
                 *(uint *)(iVar3 + 10) ^ (byte)(*(byte *)(iVar3 + 10) ^ (byte)(iVar8 << 5)) & 0x20;
            *(uint *)(iVar3 + 10) =
                 *(uint *)(iVar3 + 10) ^
                 (byte)(*(byte *)(iVar3 + 10) ^ (byte)((int)local_6 << 4)) & 0x10;
            *(uint *)(iVar3 + 10) =
                 *(uint *)(iVar3 + 10) ^
                 (byte)(*(byte *)(iVar3 + 10) ^ (byte)(local_1c << 6)) & 0x40;
            *(uint *)(iVar3 + 10) =
                 *(uint *)(iVar3 + 10) ^
                 (byte)(*(byte *)(iVar3 + 10) ^ (byte)(local_22 << 7)) & 0x80;
          }
          puStack_8 = (undefined2 *)0;
          uVar6 = local_d8;
        }
        for (local_d2 = 1; local_d8 = uVar6, local_d2 <= *(int *)0x150; local_d2 = local_d2 + 1) {
          local_6 = (undefined2 *)local_d2;
          puStack_a = (undefined1 *)0xc34;
          uVar6 = func_0x00000398();
          uVar4 = (undefined2)((ulong)uVar6 >> 0x10);
          iVar3 = (int)uVar6;
          if ((*(byte *)(iVar3 + 0x16) & 2) != 0) {
            *(uint *)(iVar3 + 0x16) =
                 *(uint *)(iVar3 + 0x16) ^
                 ((byte)(*(byte *)(iVar3 + 0x17) ^ (byte)((uint)((int)local_6 << 0xb) >> 8)) & 8) <<
                 8;
            *(uint *)(iVar3 + 0x16) =
                 *(uint *)(iVar3 + 0x16) ^
                 ((byte)(*(byte *)(iVar3 + 0x17) ^ (byte)((uint)(local_1c << 0xe) >> 8)) & 0x40) <<
                 8;
            *(uint *)(iVar3 + 0x16) =
                 *(uint *)(iVar3 + 0x16) ^
                 (byte)((byte)((uint)*(undefined2 *)(iVar3 + 0x16) >> 10) ^
                       (byte)*(undefined2 *)(iVar3 + 0x16)) & 0x10;
            *(uint *)(iVar3 + 0x16) =
                 *(uint *)(iVar3 + 0x16) ^
                 ((byte)(*(byte *)(iVar3 + 0x17) ^ (byte)((uint)(local_22 << 0xd) >> 8)) & 0x20) <<
                 8;
          }
          puStack_8 = (undefined2 *)0;
        }
        local_6 = (undefined2 *)0x1;
        uVar4 = 0x7a6;
        puStack_a = (undefined1 *)0xcad;
        func_0x00008095();
      }
    }
    local_6 = (undefined2 *)0x0;
    puStack_8 = (undefined2 *)0x885;
    uVar4 = 0x7a6;
    puStack_a = (undefined1 *)0x8eb;
    func_0x00008095();
  } while (param_1 == 0);
  return;
}



/* 4000:0cb6  FUN_4000_0cb6  1926 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x000410a7) */
/* WARNING: Removing unreachable block (ram,0x00041173) */

void __cdecl16far FUN_4000_0cb6(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  int unaff_SI;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int unaff_SS;
  int unaff_DS;
  undefined1 uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined2 *puVar15;
  undefined1 local_18e [12];
  int local_182;
  int local_180;
  uint uStack_17e;
  int iStack_154;
  uint local_152;
  int iStack_ec;
  uint uStack_ea;
  int iStack_e8;
  int local_e6;
  int iStack_e4;
  int local_e2;
  undefined2 local_e0 [13];
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 *local_c0;
  undefined2 local_be [13];
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined2 auStack_9e [13];
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined2 *puStack_7e;
  int iStack_6e;
  undefined2 local_6c [8];
  undefined1 local_5c;
  undefined1 local_5b;
  undefined2 auStack_56 [4];
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined2 *puStack_3e;
  undefined2 local_3a [8];
  undefined2 local_2a;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  int iStack_16;
  undefined2 uStack_14;
  int iStack_12;
  undefined1 *puStack_10;
  
  FUN_21f2_0ebc();
  local_182 = 0;
  local_c0 = (undefined1 *)0x0;
  local_e2 = 0;
  FUN_21f2_3454();
  FUN_21f2_2d26();
  FUN_21f2_2d26();
  if (param_1 != 0) {
    func_0x00029834();
    func_0x00029983();
    func_0x00029834();
    func_0x00029983();
    goto LAB_3ab8_61ac;
  }
LAB_3ab8_6398:
  do {
    while( true ) {
      FUN_21f2_3454();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      if (*(int *)0x5e40 == 0) {
        FUN_21f2_2d26();
      }
      if (*(int *)0x5e40 == 1) {
        FUN_21f2_2d26();
      }
      FUN_21f2_2d26();
      FUN_1def_07a4();
      *(undefined2 *)0xc1a = 1;
      if (*(int *)0xce6 != 0) {
        *(undefined2 *)0xc1a = 0;
      }
      puStack_10 = local_c0;
      iStack_12 = 0x1bb4;
      uStack_14 = 0x1037;
      local_180 = FUN_1def_0904();
      *(undefined2 *)0xc1a = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (*(int *)0xc18 == 0) break;
      local_c0 = (undefined1 *)0x0;
      func_0x000297e6();
      func_0x00029d78();
      puStack_10 = (undefined1 *)0x22b2;
      iStack_12 = 0x1076;
      func_0x000299d1();
      puStack_10 = (undefined1 *)0x22b2;
      iStack_12 = 0x107f;
      func_0x000297e6();
      puStack_10 = (undefined1 *)0x22b2;
      iStack_12 = 0x1084;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0x108e;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0x1093;
      func_0x0000507a();
    }
    if ((local_180 == -1) && (local_182 == 0)) {
      func_0x0000c3ca();
      func_0x0000daa6();
      if (0 < (int)local_c0) {
        puVar7 = local_3a;
        puVar9 = local_6c;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar15 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar15;
        }
        local_2a = 1;
        puVar9 = &uStack_1c;
        puVar7 = local_3a;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar15 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar15;
        }
        FUN_17a6_0ae3();
        local_2a = CONCAT11(local_5b,local_5c);
        puVar9 = &uStack_1c;
        puVar7 = local_3a;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar15 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar15;
        }
        FUN_17a6_0ae3();
        puVar15 = (undefined2 *)func_0x0000013f();
        puVar9 = (undefined2 *)puVar15;
        puVar7 = local_6c;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = *puVar2;
        }
      }
      if ((int)local_c0 < 0) {
        puVar7 = local_be;
        puVar9 = local_e0;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar15 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar15;
        }
        local_a3 = 0;
        local_a4 = 1;
        puVar9 = (undefined2 *)&stack0xffda;
        puVar7 = local_be;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar15 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar15;
        }
        local_2a = 0xe53;
        puVar9 = (undefined2 *)&stack0xffda;
        func_0x00013e46();
        local_a3 = local_c5;
        local_a4 = local_c6;
        puVar7 = local_be;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar15 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar15;
        }
        local_2a = 0xe7b;
        func_0x00013e46();
        puVar15 = (undefined2 *)func_0x00000271();
        puVar9 = (undefined2 *)puVar15;
        puVar7 = local_e0;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = *puVar2;
        }
      }
      func_0x0000b1d8();
      local_c0 = (undefined1 *)0x0;
    }
    if (local_180 == 1) {
LAB_3ab8_6342:
      local_182 = local_180;
    }
    else {
      if (local_180 == 2) {
        local_e6 = 0;
        *(int *)0x5e40 = 1 - *(int *)0x5e40;
      }
      if (local_180 == 3) goto LAB_3ab8_6342;
      if (local_e6 == 0) goto LAB_3ab8_6398;
      local_182 = 0;
    }
    if (local_182 == 3) {
      func_0x0000c3ca();
      FUN_3ab8_5b01();
      iVar4 = *(int *)0x158;
    }
    else {
LAB_3ab8_61ac:
      local_c0 = (undefined1 *)0x0;
      if (local_182 != 0) {
LAB_3ab8_7255:
        local_c0 = (undefined1 *)0x0;
        local_e2 = 0;
LAB_3ab8_725f:
        if (local_182 == 1) {
          if (*(int *)0x158 != 0) {
            return;
          }
LAB_3ab8_7270:
          do {
            func_0x0000c3ca();
            puStack_10 = (undefined1 *)*(int *)0xa416;
            iStack_12 = *(undefined2 *)0xa414;
            uStack_14 = *(undefined2 *)0xa412;
            iStack_16 = *(int *)0xa410;
            uStack_18 = 0;
            uStack_1a = 0x5dc3;
            uStack_1c = 0xffff;
            pcVar3 = (code *)swi(0x3f);
            iVar4 = (*pcVar3)();
            if (*(int *)0x158 != 0) {
              return;
            }
            if (iVar4 != -1) {
              do {
                local_e2 = 0;
                do {
                  FUN_21f2_3454();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_1def_07a4();
                  puStack_10 = (undefined1 *)0x1;
                  iStack_12 = 0x1bb4;
                  uStack_14 = 0x16c1;
                  iStack_e4 = FUN_1def_0904();
                  if (*(int *)0x158 != 0) {
                    return;
                  }
                  if (iStack_e4 == -1) {
                    local_e6 = 0;
                    func_0x0000c3ca();
                    puStack_10 = (undefined1 *)*(int *)0xa416;
                    iStack_12 = *(undefined2 *)0xa414;
                    uStack_14 = *(undefined2 *)0xa412;
                    iStack_16 = *(int *)0xa410;
                    uStack_18 = 0;
                    uStack_1a = 0x5dfb;
                    uStack_1c = 0xffff;
                    pcVar3 = (code *)swi(0x3f);
                    iVar4 = (*pcVar3)();
                    if (iVar4 == -1) goto LAB_3ab8_7270;
                  }
                } while (((iStack_e4 != 1) && (iStack_e4 != 2)) && (iStack_e4 != 3));
                *(undefined1 *)0xd14 = 2;
LAB_3ab8_6bbd:
                while( true ) {
                  if ((iStack_e4 != 1) && (iStack_e4 != 2)) goto LAB_3ab8_6c83;
                  func_0x0000c3ca();
                  if (*(int *)0x158 != 0) {
                    return;
                  }
                  FUN_21f2_3454();
                  FUN_21f2_3454();
                  FUN_21f2_2d26();
                  iStack_6e = 1;
                  do {
                    FUN_21f2_2d26();
                    iStack_6e = iStack_6e + 1;
                  } while (iStack_6e < 7);
                  if (iStack_e4 == 1) {
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                    uVar11 = 0x1bb4;
                    FUN_1def_07a4();
                    if (*(char *)0x126 != '\0') {
                      *(undefined2 *)0xc22 = 1;
                      puStack_10 = (undefined1 *)0x5e18;
                      iStack_12 = 0x1bb4;
                      uVar11 = 0xdef;
                      uStack_14 = 0x14ad;
                      FUN_1000_02b5();
                    }
                  }
                  else {
                    func_0x00008095();
                    uVar11 = 0x1bb4;
                    FUN_1def_07a4();
                  }
                  *(undefined2 *)0xc24 = 1;
                  iStack_12 = 0x14e5;
                  puStack_10 = (undefined1 *)uVar11;
                  func_0x0000a76b();
                  FUN_1885_32fe();
                  FUN_10ad_17a6();
                  if (iStack_e4 == 1) {
                    uVar11 = 0x11f2;
                    for (iStack_ec = 1; iStack_ec < 9; iStack_ec = iStack_ec + 1) {
                      puStack_10 = (undefined1 *)0x8;
                      iStack_154 = iStack_ec * 0x40 + 0x50;
                      iStack_12 = iStack_ec * 0x40 + 0x74;
                      uStack_14 = 8;
                      uStack_1a = 0x154b;
                      uStack_18 = uVar11;
                      iStack_16 = iStack_154;
                      func_0x0000f350();
                      uVar11 = 0xdef;
                    }
                  }
                  else {
                    iStack_ec = 1;
                    uVar11 = 0x11f2;
                    do {
                      puStack_10 = (undefined1 *)0xc;
                      iStack_154 = iStack_ec * 0x40 + 0x50;
                      iStack_12 = iStack_ec * 0x40 + 0x74;
                      uStack_14 = 4;
                      uStack_1a = 0x158c;
                      uStack_18 = uVar11;
                      iStack_16 = iStack_154;
                      func_0x0000f350();
                      iStack_ec = iStack_ec + 1;
                      uVar11 = 0xdef;
                    } while (iStack_ec < 7);
                  }
                  func_0x0000a799();
                  uVar11 = 0x885;
                  do {
                    puStack_10 = &stack0xfffa;
                    uStack_14 = 0x15bb;
                    iStack_12 = uVar11;
                    uStack_17e = func_0x00006608();
                    if (*(int *)0x158 != 0) {
                      return;
                    }
                  } while ((uStack_17e == 0) && (uVar11 = 0x3bf, local_e6 == 0));
                  if (uStack_17e == 0xffff) break;
                  if (local_e6 != 0) {
                    if ((unaff_SI < 0x7d) || (*(int *)0xa5e < (int)local_18e)) {
                      uStack_17e = 0;
                    }
                    else {
                      uVar6 = (int)(unaff_SI - 0x7cU) >> 0xf;
                      uStack_17e = (((int)((unaff_SI - 0x7cU ^ uVar6) - uVar6) >> 6 ^ uVar6) - uVar6
                                   ) + 0x31;
                    }
                  }
                  if ((0x30 < (int)uStack_17e) && ((int)uStack_17e < 0x39)) {
                    uStack_17e = uStack_17e - 0x30;
                  }
                  if (iStack_e4 == 1) {
                    if (((int)uStack_17e < 1) || (8 < (int)uStack_17e)) goto LAB_3ab8_6ca0;
                    goto LAB_3ab8_6c7a;
                  }
                  if ((0 < (int)uStack_17e) && ((int)uStack_17e < 7)) goto LAB_3ab8_6c83;
                }
                if (iStack_e4 == 2) {
                  func_0x00008095();
                }
              } while( true );
            }
            if (local_e2 < 1) break;
            func_0x0000daa6();
            for (; 0 < local_e2; local_e2 = local_e2 + -1) {
              FUN_17a6_0d19();
            }
            func_0x0000abfa();
            local_e2 = 0;
            func_0x0000b1d8();
          } while( true );
        }
        goto LAB_3ab8_6398;
      }
      func_0x000297e6();
      func_0x00029d78();
      puStack_10 = (undefined1 *)0x22b2;
      iStack_12 = 0xd54;
      func_0x000299d1();
      puStack_10 = (undefined1 *)0x22b2;
      iStack_12 = 0xd5d;
      func_0x000297e6();
      puStack_10 = (undefined1 *)0x22b2;
      iStack_12 = 0xd62;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd6c;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd71;
      lVar13 = FUN_13bf_39a0();
      iVar4 = param_1;
      if (lVar13 != 0) {
        func_0x0000c3ca();
        if (0 < lVar13) {
          uVar14 = func_0x0000013f();
          local_152 = (uint)(*(byte *)((int)uVar14 + 0x12) >> 4);
        }
        if (lVar13 < 0) {
          uVar14 = func_0x00000271();
          local_152 = (uint)(*(byte *)((int)uVar14 + 0x1c) >> 4);
        }
        if (*(int *)0x5e40 == 1) {
          func_0x000297e6();
          uVar12 = (local_152 & 0x3fff) == 0;
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar12) {
            *(undefined2 *)0xc22 = 1;
            FUN_1000_0599();
            puStack_10 = (undefined1 *)0xdef;
            iStack_12 = 0x1153;
            FUN_10ad_17a6();
            goto LAB_3ab8_6366;
          }
        }
        func_0x0000daa6();
        *(undefined1 *)0xd14 = 2;
        if (lVar13 < 1) {
LAB_3ab8_66d8:
          if (lVar13 < 0) {
            func_0x00000271();
            iVar5 = func_0x00008854();
            if (iVar5 != 0) goto LAB_3ab8_67ee;
            puVar15 = (undefined2 *)func_0x00000271();
            puVar9 = (undefined2 *)puVar15;
            puVar7 = local_be;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar1 = *puVar2;
            }
            local_a3 = 0;
            local_a4 = 1;
            puVar9 = (undefined2 *)&stack0xffda;
            puVar7 = local_be;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              puVar15 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar15;
            }
            local_2a = 0x12d8;
            puVar7 = (undefined2 *)&stack0xffda;
            func_0x00013e46();
            if (*(int *)0x5e40 == 1) {
              local_a2 = *(undefined1 *)0xb310;
            }
            local_a3 = *(undefined1 *)0xa6a;
            local_a4 = *(undefined1 *)0xa6c;
            puVar9 = local_be;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              puVar15 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar2 = *puVar15;
            }
            local_2a = 0x130c;
            func_0x00013e46();
            puVar15 = (undefined2 *)func_0x00000271();
            puVar9 = (undefined2 *)puVar15;
            puVar7 = local_e0;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar1 = *puVar2;
            }
            puVar15 = (undefined2 *)func_0x00000271();
            puVar9 = (undefined2 *)puVar15;
            puVar7 = local_be;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar1 = *puVar2;
            }
            local_c0 = (undefined1 *)0xffff;
          }
          func_0x0000b1d8();
        }
        else {
          func_0x0000013f();
          iVar5 = func_0x00008854();
          if (iVar5 == 0) {
            puVar15 = (undefined2 *)func_0x0000013f();
            puVar9 = (undefined2 *)puVar15;
            puVar7 = local_3a;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar1 = *puVar2;
            }
            local_2a = 1;
            puVar9 = &uStack_1c;
            puVar7 = local_3a;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              puVar15 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar15;
            }
            FUN_17a6_0ae3();
            local_2a = CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
            puVar9 = &uStack_1c;
            puVar7 = local_3a;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              puVar15 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar15;
            }
            FUN_17a6_0ae3();
            puVar15 = (undefined2 *)func_0x0000013f();
            puVar9 = (undefined2 *)puVar15;
            puVar7 = local_6c;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar1 = *puVar2;
            }
            puVar15 = (undefined2 *)func_0x0000013f();
            puVar9 = (undefined2 *)puVar15;
            puVar7 = local_3a;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar1 = *puVar2;
            }
            local_c0 = (undefined1 *)0x1;
            goto LAB_3ab8_66d8;
          }
        }
LAB_3ab8_67ee:
        uVar11 = 0x885;
        if (0 < (int)local_c0) {
          puStack_10 = (undefined1 *)0x5dbd;
          iStack_12 = 0x885;
          uVar11 = 0xdef;
          uStack_14 = 0x138e;
          FUN_1000_02b5();
        }
        uVar10 = uVar11;
        if ((int)local_c0 < 0) {
          puStack_10 = (undefined1 *)0x5dc0;
          uVar10 = 0xdef;
          uStack_14 = 0x13b1;
          iStack_12 = uVar11;
          FUN_1000_02b5();
        }
        if (local_c0 != (undefined1 *)0x0) {
          puStack_10 = (undefined1 *)0x652;
          uStack_14 = 0x13d4;
          iStack_12 = uVar10;
          FUN_1000_02b5();
          *(undefined2 *)0xc22 = 1;
        }
      }
    }
LAB_3ab8_6366:
    if (iVar4 != 0) {
      return;
    }
  } while( true );
LAB_3ab8_6ca0:
  if ((0x61ff < (int)uStack_17e) && (((int)uStack_17e < 0x6a01 && (*(char *)0x126 != '\0')))) {
    if (uStack_17e == 0x6a00) {
      uStack_17e = 9;
    }
    else {
      uVar6 = (int)(uStack_17e + 0x9f00) >> 0xf;
      uStack_17e = (((int)((uStack_17e + 0x9f00 ^ uVar6) - uVar6) >> 8 ^ uVar6) - uVar6) + 10;
    }
LAB_3ab8_6c7a:
    func_0x00008095();
LAB_3ab8_6c83:
    func_0x0000c3ca();
    if (iStack_e4 != 3) {
      iStack_e8 = 0;
      for (uStack_ea = 1;
          (iStack_e8 <= *(int *)0x14a &&
          ((iStack_e8 < *(int *)0x14a || (uStack_ea <= *(uint *)0x148)))); uStack_ea = uStack_ea + 1
          ) {
        uVar14 = func_0x0000013f();
        uVar11 = (undefined2)((ulong)uVar14 >> 0x10);
        iVar4 = (int)uVar14;
        if ((*(byte *)(iVar4 + 0x14) & 2) != 0) {
          *(byte *)(iVar4 + 0x14) = *(byte *)(iVar4 + 0x14) & 0xfd;
          if ((iStack_e4 == 1) && (*(byte *)(iVar4 + 0x10) == uStack_17e)) {
            *(byte *)(iVar4 + 0x14) = *(byte *)(iVar4 + 0x14) | 2;
          }
          if ((iStack_e4 == 2) && (*(byte *)(iVar4 + 0x11) == uStack_17e)) {
            *(byte *)(iVar4 + 0x14) = *(byte *)(iVar4 + 0x14) | 2;
          }
        }
        iStack_e8 = iStack_e8 + (uint)(0xfffe < uStack_ea);
      }
      iStack_e8 = 0;
      for (uStack_ea = 1;
          (iStack_e8 <= *(int *)0x14e &&
          ((iStack_e8 < *(int *)0x14e || (uStack_ea <= *(uint *)0x14c)))); uStack_ea = uStack_ea + 1
          ) {
        puStack_7e = (undefined2 *)func_0x00000271();
        uVar11 = (undefined2)((ulong)puStack_7e >> 0x10);
        puVar7 = (undefined2 *)puStack_7e;
        if ((*(byte *)(puVar7 + 0xf) & 2) != 0) {
          *(byte *)(puVar7 + 0xf) = *(byte *)(puVar7 + 0xf) & 0xfd;
          if ((iStack_e4 == 1) && (*(byte *)(puVar7 + 0xd) == uStack_17e)) {
            *(byte *)(puVar7 + 0xf) = *(byte *)(puVar7 + 0xf) | 2;
          }
          if ((iStack_e4 == 2) && (*(byte *)((int)puVar7 + 0x1b) == uStack_17e)) {
            *(byte *)(puVar7 + 0xf) = *(byte *)(puVar7 + 0xf) | 2;
          }
        }
        iStack_e8 = iStack_e8 + (uint)(0xfffe < uStack_ea);
      }
      for (iStack_ec = 1; iStack_ec <= *(int *)0x152; iStack_ec = iStack_ec + 1) {
        puStack_3e = (undefined2 *)func_0x000003ef();
        uVar11 = (undefined2)((ulong)puStack_3e >> 0x10);
        puVar7 = (undefined2 *)puStack_3e;
        if ((((*(byte *)(puVar7 + 5) & 2) != 0) &&
            (*(byte *)(puVar7 + 5) = *(byte *)(puVar7 + 5) & 0xfd, iStack_e4 == 2)) &&
           (*(byte *)((int)puVar7 + 9) == uStack_17e)) {
          *(byte *)(puVar7 + 5) = *(byte *)(puVar7 + 5) | 2;
        }
      }
      func_0x00008095();
    }
    goto LAB_3ab8_6e49;
  }
  goto LAB_3ab8_6bbd;
LAB_3ab8_6e49:
  puStack_10 = (undefined1 *)0x19db;
  FUN_21f2_3454();
  FUN_21f2_3454();
  FUN_21f2_3454();
  FUN_21f2_2d26();
  FUN_21f2_2d26();
  FUN_21f2_2d26();
  FUN_21f2_2d26();
  FUN_21f2_2d26();
  FUN_21f2_2d26();
  FUN_21f2_2d26();
  FUN_21f2_2d26();
  FUN_21f2_2d26();
  FUN_21f2_2d26();
  uVar11 = 0x1bb4;
  FUN_1def_07a4();
  if (*(char *)0x126 != '\0') {
    uVar11 = 0x22b2;
    FUN_21f2_2d26();
  }
  puStack_10 = (undefined1 *)0x1;
  uStack_14 = 0x1ae8;
  iStack_12 = uVar11;
  iVar4 = FUN_1def_0904();
  if (*(int *)0x158 != 0) {
    return;
  }
  if (iVar4 == -1) goto code_r0x00041afd;
  if ((iVar4 < 1) || (5 < iVar4)) goto LAB_3ab8_6e49;
  local_e2 = 0;
  if (iVar4 == 4) {
    func_0x0000c3ca();
    local_e2 = FUN_4000_03a4();
  }
  else {
    if (iVar4 != 5) goto LAB_3ab8_6fd7;
    func_0x0000c3ca();
    FUN_3ab8_5b01();
  }
  if (*(int *)0x158 != 0) {
    return;
  }
  goto LAB_3ab8_725f;
code_r0x00041afd:
  func_0x00008095();
  goto LAB_3ab8_7270;
LAB_3ab8_6fd7:
  func_0x00008095();
  func_0x0000daa6();
  func_0x0000c3ca();
  local_e2 = 0;
  iStack_e8 = 0;
  for (uStack_ea = 1;
      (iStack_e8 <= *(int *)0x14a && ((iStack_e8 < *(int *)0x14a || (uStack_ea <= *(uint *)0x148))))
      ; uStack_ea = uStack_ea + 1) {
    puVar15 = (undefined2 *)func_0x0000013f();
    uVar11 = (undefined2)((ulong)puVar15 >> 0x10);
    puVar7 = (undefined2 *)puVar15;
    if ((*(byte *)(puVar7 + 10) & 2) != 0) {
      puVar9 = local_3a;
      puVar8 = puVar7;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar15;
      }
      puVar9 = &uStack_24;
      puVar8 = local_3a;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar15;
      }
      if (iVar4 < 4) {
        uStack_14 = 1;
        puVar8 = (undefined2 *)&stack0xffe2;
        puVar9 = &uStack_24;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar15 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar15;
        }
        uStack_22 = 0x1c00;
        FUN_17a6_0936();
      }
      if (iVar4 == 1) {
        local_2a = CONCAT11(local_2a._1_1_,*(undefined1 *)0xa6c);
      }
      if (iVar4 == 2) {
        local_2a = CONCAT11(*(undefined1 *)0xa6a,(undefined1)local_2a);
      }
      puVar8 = (undefined2 *)&stack0xffe2;
      puVar9 = local_3a;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        puVar15 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar15;
      }
      uStack_22 = 0x1c3e;
      FUN_17a6_0936();
      puVar9 = local_3a;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar15 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar15;
      }
    }
    iStack_e8 = iStack_e8 + (uint)(0xfffe < uStack_ea);
  }
  iStack_e8 = 0;
  for (uStack_ea = 1;
      (iStack_e8 <= *(int *)0x14e && ((iStack_e8 < *(int *)0x14e || (uStack_ea <= *(uint *)0x14c))))
      ; uStack_ea = uStack_ea + 1) {
    puStack_7e = (undefined2 *)func_0x00000271();
    uVar11 = (undefined2)((ulong)puStack_7e >> 0x10);
    puVar7 = (undefined2 *)puStack_7e;
    if ((*(byte *)(puVar7 + 0xf) & 2) != 0) {
      puVar9 = local_be;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar15;
      }
      puVar7 = auStack_9e;
      puVar9 = local_be;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar15 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar15;
      }
      uStack_83 = 0;
      uStack_84 = 1;
      puVar9 = &uStack_22;
      puVar7 = auStack_9e;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar15;
      }
      uStack_24 = 0;
      FUN_12c1_0f1d();
      if (unaff_DS == 1) {
        local_a4 = uRam00000a7c;
      }
      if (unaff_DS == 2) {
        local_a3 = uRam00000a8a;
      }
      if (unaff_DS == 3) {
        local_a2 = uRam0000b340;
      }
      puVar9 = &uStack_24;
      puVar7 = local_be;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar15;
      }
      FUN_12c1_0f1d();
      puVar7 = local_be;
      puVar9 = (undefined2 *)puStack_7e;
      for (iVar5 = 0x10; unaff_SI = unaff_SS, iVar4 = unaff_DS, iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar15;
      }
    }
    iStack_e8 = iStack_e8 + (uint)(0xfffe < uStack_ea);
  }
  for (iStack_ec = 1; iStack_ec <= *(int *)0x152; iStack_ec = iStack_ec + 1) {
    puStack_3e = (undefined2 *)func_0x000003ef();
    uVar11 = (undefined2)((ulong)puStack_3e >> 0x10);
    puVar7 = (undefined2 *)puStack_3e;
    if ((*(byte *)(puVar7 + 5) & 2) != 0) {
      puVar9 = auStack_56;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar15;
      }
      FUN_1def_1295();
      uVar11 = (undefined2)((ulong)puStack_3e >> 0x10);
      puVar7 = (undefined2 *)puStack_3e;
      uStack_4d = *(undefined1 *)((int)puVar7 + 9);
      if (((iVar4 == 2) && (uStack_4d = *(undefined1 *)0x1d0, *(char *)0x1cd != '\0')) &&
         (5 < *(byte *)0x123)) {
        uStack_4d = *(undefined1 *)0x1cd;
      }
      if (iVar4 == 3) {
        uStack_4e = *(undefined1 *)0xb310;
      }
      puVar9 = auStack_56;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar15 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar15;
      }
      FUN_1def_1295();
    }
  }
  func_0x0000b1d8();
  goto LAB_3ab8_7255;
}


