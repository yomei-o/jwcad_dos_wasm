/* Ghidra decompilation of jw29.exe - machine output, not the original source. */

/* 3ab8:0000  OVL_0000  996 bytes, 1 callers */

void __cdecl16far OVL_0000(int param_1,int param_2)

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
  undefined2 local_5a [6];
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  byte local_3e;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  byte local_28;
  undefined2 local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  local_20 = *(undefined2 *)0xa57c;
  local_1e = *(undefined2 *)0xa57e;
  if (param_2 != 0 || param_1 != 0) {
    uVar6 = param_2 == 0;
    local_1c = local_20;
    local_1a = local_1e;
    local_16 = local_20;
    local_14 = local_1e;
    local_12 = local_20;
    local_10 = local_1e;
    if ((-1 < param_2) && ((0 < param_2 || (uVar6 = param_1 == 0, !(bool)uVar6)))) {
      uVar7 = 0;
      uStack_c = 0x22b2;
      local_e = 0xabe9;
      puVar8 = (undefined2 *)func_0x0000013f();
      puVar4 = (undefined2 *)puVar8;
      puVar5 = &local_3a;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      uStack_c = 0;
      local_e = 0xac08;
      FUN_21f2_3454();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      func_0x00029b6d();
      FUN_28b3_117c();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar7 && !(bool)uVar6) {
        func_0x000297e6();
        func_0x00029d78();
        local_10 = 0x22b2;
        local_12 = 0xaca1;
        func_0x000299d1();
        local_10 = 0x22b2;
        local_12 = 0xaca9;
        func_0x000297e6();
        local_10 = 0x22b2;
        local_12 = 0xacae;
        func_0x00029d78();
        local_18 = (undefined2 *)0x22b2;
        local_1a = 0xacb8;
        func_0x000299d1();
        local_18 = (undefined2 *)0x22b2;
        local_1a = 0xacbd;
        func_0x0002a178();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029983();
        local_18 = (undefined2 *)(uint)(local_28 >> 4);
        func_0x000297e6();
        func_0x00029d78();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = 0x22b2;
        local_12 = 0xad0f;
        func_0x000299d1();
        local_10 = 0x22b2;
        local_12 = 0xad14;
        FUN_28b3_1582();
        func_0x00029c2c();
        func_0x00029b6d();
        func_0x00029983();
      }
    }
    uVar6 = 0;
    uVar7 = param_2 == 0;
    if (param_2 < 0) {
      uStack_c = 0x22b2;
      local_e = 0xad4c;
      puVar8 = (undefined2 *)func_0x00000271();
      puVar4 = (undefined2 *)puVar8;
      puVar5 = local_5a;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      uStack_c = 0;
      local_e = 0xad6b;
      FUN_21f2_3454();
      local_18 = (undefined2 *)(uint)(local_3e >> 4);
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b6d();
      func_0x00029983();
      local_34 = 0;
      local_36 = 0;
      local_38 = local_42;
      local_3a = local_44;
      func_0x00029da5();
      func_0x00029b85();
      func_0x00029983();
      local_34 = 0;
      local_36 = 0;
      local_38 = local_4a;
      local_3a = local_4c;
      func_0x00029da5();
      func_0x00029b85();
      func_0x00029983();
      local_34 = 0;
      local_36 = 0;
      local_38 = local_46;
      local_3a = local_48;
      func_0x00029da5();
      func_0x00029b85();
      func_0x0002996b();
      FUN_28b3_0ee9();
      uVar6 = 0;
      uVar7 = 1;
      local_34 = 0;
      local_36 = 0;
      local_38 = 0;
      local_3a = local_4e;
      func_0x00029da5();
      func_0x00029d78();
      func_0x00029c2c();
      func_0x00029983();
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar7) {
        local_1c = *(undefined2 *)0xa594;
        local_1a = *(undefined2 *)0xa596;
      }
    }
    func_0x00029834();
    func_0x000297e6();
    func_0x00029ae7();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar6 || (bool)uVar7) {
      *(undefined2 *)0xcdc = 0xaea5;
      *(undefined2 *)0xcde = 0x22b2;
    }
    *(undefined2 *)0xc22 = 2;
    uStack_c = 0x22b2;
    local_e = 0xaec7;
    FUN_1000_0599();
    func_0x000297e6();
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xaee0;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xaee8;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xaeed;
    func_0x00029d78();
    local_18 = (undefined2 *)0x22b2;
    local_1a = 0xaef7;
    func_0x000299d1();
    local_18 = &local_24;
    local_1a = 0x679a;
    local_1c = 0x22b2;
    local_1e = 0xaf04;
    func_0x00012276();
    if (param_2 < 0) {
      func_0x000297e6();
      func_0x00029d78();
      local_10 = 0x22b2;
      local_12 = 0xaf24;
      func_0x000299d1();
      local_10 = 0x22b2;
      local_12 = 0xaf2c;
      func_0x000297e6();
      local_10 = 0x22b2;
      local_12 = 0xaf31;
      func_0x00029d78();
      local_18 = (undefined2 *)0x22b2;
      local_1a = 0xaf3b;
      func_0x000299d1();
      local_18 = (undefined2 *)0x22b2;
      local_1a = 0xaf43;
      func_0x000297e6();
      local_18 = (undefined2 *)0x22b2;
      local_1a = 0xaf48;
      func_0x00029d78();
      local_20 = 0x22b2;
      uStack_22 = 0xaf52;
      func_0x000299d1();
      local_20 = 0x67a8;
      uStack_22 = 0x22b2;
      local_24 = 0xaf5b;
      func_0x00012276();
    }
  }
  return;
}



/* 3ab8:03e4  FUN_3ab8_03e4  616 bytes, 1 callers */

int __cdecl16far FUN_3ab8_03e4(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_78;
  char local_66 [68];
  undefined2 uStack_22;
  undefined2 auStack_1e [7];
  undefined2 uStack_10;
  undefined2 uStack_e;
  char *pcStack_c;
  char *pcStack_a;
  char *pcStack_8;
  
  FUN_21f2_0ebc();
  pcStack_8 = (char *)param_2;
  pcStack_a = local_66;
  pcStack_c = (char *)0x22b2;
  uStack_e = 0xaf7d;
  func_0x00024c86();
  pcStack_8 = local_66;
  pcStack_a = (char *)0x22b2;
  pcStack_c = (char *)0xaf88;
  iVar4 = func_0x00024ce4();
  if (iVar4 != 0) {
    if (*(char *)0x1131 != '\0') {
      pcStack_a = local_66;
      pcVar3 = (code *)swi(0x3f);
      pcStack_8 = (char *)iVar4;
      (*pcVar3)();
    }
    pcStack_8 = (char *)0x2e;
    pcStack_a = local_66;
    pcStack_c = (char *)0x22b2;
    uStack_e = 0xafb3;
    func_0x00025a9a();
    uVar8 = 0x22b2;
    for (local_78 = 0; uVar9 = uVar8, local_78 < iVar4; local_78 = local_78 + 1) {
      pcStack_8 = (char *)local_78;
      pcStack_a = local_66;
      uVar9 = 0x2a75;
      uStack_e = 0xafea;
      pcStack_c = (char *)uVar8;
      iVar5 = func_0x0002aa38();
      if (iVar5 == 1) {
        if ((local_66[local_78] == -0x7f) && (local_66[local_78 + 1] == 'D')) break;
        local_78 = local_78 + 1;
      }
      uVar8 = uVar9;
    }
    pcStack_a = (char *)0xb014;
    pcStack_8 = (char *)uVar9;
    FUN_28b3_0d8b();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb019;
    func_0x00029d78();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb022;
    func_0x00029b85();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb02b;
    func_0x00029c2c();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb033;
    func_0x00029983();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb03c;
    FUN_28b3_0d8b();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb041;
    func_0x00029d78();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb04a;
    func_0x00029b85();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb053;
    func_0x00029c2c();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb05b;
    func_0x00029983();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0a4;
    FUN_28b3_0d8b();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0ad;
    func_0x00029c74();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0b5;
    func_0x00029b6d();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0bd;
    FUN_28b3_0d8b();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0c5;
    func_0x00029b6d();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0ca;
    func_0x00029d78();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0cf;
    FUN_28b3_117c();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0d8;
    func_0x00029c2c();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0e1;
    func_0x0002996b();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0e9;
    func_0x00029b6d();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0ee;
    func_0x00029d78();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0f6;
    FUN_28b3_10e4();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb0ff;
    func_0x00029983();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb108;
    func_0x000297e6();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb110;
    func_0x00029b6d();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb115;
    func_0x00029d78();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb11d;
    FUN_28b3_10e4();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb126;
    func_0x00029983();
    pcStack_8 = (char *)*(undefined2 *)0x168;
    pcStack_a = (char *)0x0;
    pcStack_c = local_66;
    uStack_e = 0x22b2;
    uStack_10 = 0xb136;
    func_0x00018eff();
    pcStack_8 = (char *)0x18b3;
    pcStack_a = (char *)0xb14e;
    func_0x000297e6();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb156;
    func_0x00029b6d();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb15f;
    func_0x00029bb5();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb168;
    func_0x00029983();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb170;
    func_0x000297e6();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb178;
    func_0x00029b6d();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb181;
    func_0x00029bb5();
    pcStack_8 = (char *)0x22b2;
    pcStack_a = (char *)0xb18a;
    func_0x00029983();
    *(undefined1 *)0xc3b4 = *(undefined1 *)0x168;
    *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
    uVar8 = *(undefined2 *)0xbc78;
    *(int *)0xc3b0 = (int)local_66;
    *(undefined2 *)0xc3b2 = uVar8;
    *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
    pcStack_8 = (char *)0x0;
    pcStack_a = (char *)0x22b2;
    pcStack_c = (char *)0xb1b0;
    func_0x0000daa6();
    puVar7 = auStack_1e;
    puVar6 = (undefined2 *)0xc3a0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    uStack_22 = 0xb1c5;
    func_0x0001b198();
  }
  return iVar4;
}



/* 3ab8:0651  FUN_3ab8_0651  928 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_0651(int param_1,undefined2 param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  int local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 *local_76;
  undefined2 local_74;
  int local_72;
  undefined2 local_70;
  undefined1 local_6e [82];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  uint uStack_18;
  char *pcStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  undefined2 *puStack_e;
  undefined1 *puStack_c;
  undefined2 *local_a;
  undefined2 *puStack_8;
  undefined2 **local_6;
  
  uVar3 = 0x22b2;
  local_6 = (undefined2 **)0xb1dc;
  FUN_21f2_0ebc();
  local_70 = 0xffff;
  do {
    do {
      if (*(int *)0x158 != 0) goto LAB_3ab8_0862;
      if (*(char *)0xb782 == '\0') {
        local_6 = (undefined2 **)0x0;
        local_a = (undefined2 *)0xb1fe;
        puStack_8 = (undefined2 *)uVar3;
        func_0x0000daa6();
        uVar3 = 0x885;
        do {
          local_6 = (undefined2 **)0xffff;
          puStack_8 = (undefined2 *)0x4;
          local_a = (undefined2 *)0xffff;
          puStack_c = (undefined1 *)(*(int *)0xa58 + -1);
          puStack_e = (undefined2 *)0xffff;
          puStack_10 = (undefined1 *)0x1;
          uStack_14 = 0xb220;
          uStack_12 = uVar3;
          func_0x0000def0();
          uVar3 = 0xdef;
        } while ((int)local_6 + 1 < 0x30);
        local_6 = (undefined2 **)(*(int *)0x144 - *(int *)0x150);
        puStack_8 = (undefined2 *)*(undefined2 *)(*(int *)0x168 * 2 + 0x16c);
        local_a = (undefined2 *)0x67cb;
        puStack_c = (undefined1 *)0xbf48;
        puStack_e = (undefined2 *)0xdef;
        puStack_10 = (undefined1 *)0xb24b;
        FUN_21f2_3454();
        local_6 = (undefined2 **)0x0;
        puStack_8 = (undefined2 *)0x0;
        local_a = (undefined2 *)0x2;
        puStack_c = (undefined1 *)0x1;
        puStack_e = (undefined2 *)0xbf48;
        puStack_10 = (undefined1 *)0x22b2;
        uStack_12 = 0xb263;
        FUN_1000_02b5();
        local_6 = (undefined2 **)0xdef;
        puStack_8 = (undefined2 *)0xb279;
        FUN_28b3_0d8b();
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb282;
        func_0x00029c2c();
        puStack_e = (undefined2 *)0x22b2;
        puStack_10 = (undefined1 *)0xb28c;
        func_0x000299d1();
        puStack_e = (undefined2 *)0x22b2;
        puStack_10 = (undefined1 *)0xb295;
        FUN_28b3_0d8b();
        puStack_e = (undefined2 *)0x22b2;
        puStack_10 = (undefined1 *)0xb29e;
        func_0x00029c2c();
        pcStack_16 = (char *)0x22b2;
        uStack_18 = 0xb2a8;
        func_0x000299d1();
        pcStack_16 = (char *)0x978;
        uStack_18 = 0xbf48;
        uStack_1a = 0x22b2;
        uStack_1c = 0xb2b5;
        FUN_21f2_3454();
        local_6 = (undefined2 **)0x0;
        puStack_8 = (undefined2 *)0x0;
        local_a = (undefined2 *)0x3;
        puStack_c = (undefined1 *)0x1;
        puStack_e = (undefined2 *)0xbf48;
        puStack_10 = (undefined1 *)0x22b2;
        uVar3 = 0xdef;
        uStack_12 = 0xb2cd;
        FUN_1000_02b5();
      }
      local_6 = (undefined2 **)0x2f0;
      puStack_8 = (undefined2 *)0x302;
      local_a = (undefined2 *)*(undefined2 *)0x168;
      puStack_c = (undefined1 *)0x5d6;
      puStack_e = (undefined2 *)0x67db;
      puStack_10 = local_6e;
      uVar4 = 0x22b2;
      uStack_14 = 0xb2ed;
      uStack_12 = uVar3;
      FUN_21f2_3454();
      if ((*(int *)0xc22 == 0) && (param_1 == 1)) {
        local_6 = (undefined2 **)0xffff;
        puStack_8 = (undefined2 *)0x7;
        local_a = (undefined2 *)0x2;
        puStack_c = (undefined1 *)0x14;
        puStack_e = (undefined2 *)0x6800;
        puStack_10 = (undefined1 *)0x22b2;
        uVar4 = 0xdef;
        uStack_12 = 0xb316;
        FUN_1000_02b5();
      }
      local_74 = *(undefined2 *)0xc20;
      *(undefined2 *)0xc22 = 1;
      *(undefined2 *)0xc20 = 1;
      local_72 = *(int *)0xc2c;
      if (local_72 != 0x8ae) {
        *(undefined2 *)0xc2c = 0;
      }
      local_6 = &local_76;
      puStack_8 = &local_8c;
      local_a = &local_86;
      puStack_c = local_6e;
      puStack_e = (undefined2 *)0x270f;
      uVar3 = 0x1bb4;
      uStack_12 = 0xb354;
      puStack_10 = (undefined1 *)uVar4;
      local_82 = FUN_1def_0904();
      *(undefined2 *)0xc20 = local_74;
      *(int *)0xc2c = local_72;
      if (*(int *)0x158 != 0) goto LAB_3ab8_07ed;
      if ((0x61ff < local_82) && (local_82 < 0x6b01)) {
        uVar2 = (int)(local_82 + 0x9f00U) >> 0xf;
        *(int *)0x168 = ((int)((local_82 + 0x9f00U ^ uVar2) - uVar2) >> 8 ^ uVar2) - uVar2;
      }
      if ((*(int *)0xc2c == 0x8ae) && (local_82 == 0x14)) {
        return 0x14;
      }
      if ((local_82 == -1) || (local_82 == 0x14)) {
        return 0xffff;
      }
    } while (local_76 == (undefined2 *)0x0);
    local_6 = (undefined2 **)&local_8c;
    puStack_8 = &local_86;
    local_a = local_76;
    puStack_c = (undefined1 *)0x1bb4;
    uVar3 = 0x11f2;
    puStack_e = (undefined2 *)0xb3d8;
    iVar1 = func_0x00015409();
  } while (iVar1 == 0);
LAB_3ab8_0862:
  if (*(int *)0x158 == 0) {
    if (param_1 == 1) {
      *(undefined2 *)0xb30c = local_86;
      *(undefined2 *)0xb30e = local_84;
      *(undefined2 *)0xb37e = local_8c;
      *(undefined2 *)0xb380 = local_8a;
    }
    else {
      uVar2 = (uint)(-1 < param_1);
      puStack_8 = (undefined2 *)0xb42c;
      local_6 = (undefined2 **)uVar3;
      func_0x000297e6();
      local_6 = (undefined2 **)0x22b2;
      puStack_8 = (undefined2 *)0xb431;
      func_0x00029d78();
      puStack_e = (undefined2 *)0x22b2;
      puStack_10 = (undefined1 *)0xb43b;
      func_0x000299d1();
      puStack_e = (undefined2 *)0x22b2;
      puStack_10 = (undefined1 *)0xb444;
      func_0x000297e6();
      puStack_e = (undefined2 *)0x22b2;
      puStack_10 = (undefined1 *)0xb449;
      func_0x00029d78();
      pcStack_16 = (char *)0x22b2;
      uStack_18 = 0xb453;
      func_0x000299d1();
      pcStack_16 = (char *)param_2;
      uStack_1a = 0x22b2;
      uStack_1c = 0xb45d;
      uStack_18 = uVar2;
      local_88 = FUN_3ab8_03e4();
      if (*param_3 != '\0') {
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb487;
        FUN_28b3_0d8b();
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb490;
        FUN_28b3_0d8b();
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb495;
        func_0x00029c9d();
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb49e;
        func_0x00029c2c();
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb4a7;
        func_0x00029c74();
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb4b0;
        func_0x00029b85();
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb4b8;
        func_0x00029983();
        local_7c = *(undefined2 *)0xa5a8;
        local_7a = *(undefined2 *)0xa5aa;
        local_80 = *(undefined2 *)0xa57c;
        local_7e = *(undefined2 *)0xa57e;
        if ((uVar2 != 0) && (*(int *)0xcb6 != 0)) {
          local_7c = *(undefined2 *)0xcba;
          local_7a = *(undefined2 *)0xcbc;
          local_80 = *(undefined2 *)0xcbe;
          local_7e = *(undefined2 *)0xcc0;
        }
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb501;
        func_0x000297e6();
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb509;
        func_0x00029b6d();
        local_6 = (undefined2 **)&local_8c;
        puStack_8 = (undefined2 *)0x22b2;
        local_a = (undefined2 *)0xb513;
        func_0x00029bb5();
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb519;
        func_0x0002996b();
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb51e;
        func_0x00029d78();
        puStack_e = (undefined2 *)0x22b2;
        puStack_10 = (undefined1 *)0xb528;
        func_0x000299d1();
        puStack_e = (undefined2 *)0x22b2;
        puStack_10 = (undefined1 *)0xb530;
        func_0x000297e6();
        puStack_e = (undefined2 *)0x22b2;
        puStack_10 = (undefined1 *)0xb538;
        func_0x00029b6d();
        puStack_e = &local_86;
        puStack_10 = (undefined1 *)0x22b2;
        uStack_12 = 0xb542;
        func_0x00029bb5();
        puStack_e = (undefined2 *)0x22b2;
        puStack_10 = (undefined1 *)0xb548;
        func_0x0002996b();
        puStack_e = (undefined2 *)0x22b2;
        puStack_10 = (undefined1 *)0xb54d;
        func_0x00029d78();
        pcStack_16 = (char *)0x22b2;
        uStack_18 = 0xb557;
        func_0x000299d1();
        pcStack_16 = param_3;
        uStack_1a = 0x22b2;
        uStack_1c = 0xb561;
        uStack_18 = uVar2;
        FUN_3ab8_03e4();
        local_6 = (undefined2 **)0x22b2;
        puStack_8 = (undefined2 *)0xb569;
        func_0x0000abfa();
      }
    }
    uVar3 = 1;
  }
  else {
LAB_3ab8_07ed:
    uVar3 = 0;
  }
  return uVar3;
}



/* 3ab8:09f1  FUN_3ab8_09f1  320 bytes, 0 callers */

void __cdecl16far FUN_3ab8_09f1(uint param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar7;
  int local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22 [3];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  
  FUN_21f2_0ebc();
  FUN_1885_2ec3();
  if (0 < (int)param_1) {
    func_0x00013e19();
  }
  for (local_28 = (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf); 1 < local_28;
      local_28 = local_28 + -1) {
    iVar4 = *(int *)(local_28 * 4 + param_2 + 2);
    if ((-1 < iVar4) && ((0 < iVar4 || (*(int *)(local_28 * 4 + param_2) != 0)))) {
      func_0x000297e6();
      func_0x00029d78();
      local_12 = 0x22b2;
      local_14 = 0xb5d8;
      func_0x000299d1();
      local_12 = 0x22b2;
      local_14 = 0xb5e2;
      func_0x000297e6();
      local_12 = 0x22b2;
      local_14 = 0xb5e7;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb5f1;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb5f9;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb5fe;
      func_0x00029d78();
      local_22[0] = 0x22b2;
      local_24 = 0xb608;
      func_0x000299d1();
      local_22[0] = 0x22b2;
      local_24 = 0xb610;
      func_0x000297e6();
      local_22[0] = 0x22b2;
      local_24 = 0xb615;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x0001e18f(0x22b2);
    }
    iVar4 = local_28 * 4;
    if (*(int *)(iVar4 + param_2 + 2) < 0) {
      local_26 = *(undefined2 *)(iVar4 + param_2);
      local_24 = *(undefined2 *)(iVar4 + param_2 + 2);
      local_e = 0xb652;
      puVar7 = (undefined2 *)func_0x00000271();
      puVar5 = (undefined2 *)puVar7;
      puVar6 = local_22;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      local_14 = *(undefined2 *)(param_3 + iVar4);
      local_12 = *(undefined2 *)(param_3 + iVar4 + 2);
      local_10 = *(undefined2 *)(param_4 + iVar4);
      local_e = *(undefined2 *)(param_4 + iVar4 + 2);
      puVar5 = &local_26;
      puVar6 = local_22;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = *puVar7;
      }
      local_28 = 0;
      func_0x00013e46();
    }
  }
  return;
}



/* 3ab8:0b31  FUN_3ab8_0b31  258 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0b31(undefined2 param_1)

{
  undefined1 in_CF;
  undefined1 in_ZF;
  undefined1 local_1a [8];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *local_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  local_6 = (undefined1 *)0xb6bc;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)0x680f;
  local_6 = (undefined1 *)param_1;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb6c8;
  FUN_21f2_3454();
  puStack_4 = (undefined1 *)0x22b2;
  local_6 = (undefined1 *)0xb6d3;
  func_0x00029834();
  puStack_4 = (undefined1 *)0x22b2;
  local_6 = (undefined1 *)0xb6dc;
  func_0x000297e6();
  puStack_4 = (undefined1 *)0x22b2;
  local_6 = (undefined1 *)0xb6e1;
  FUN_28b3_1181();
  if ((bool)in_CF || (bool)in_ZF) {
    puStack_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb71a;
    func_0x00029834();
    puStack_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb723;
    func_0x000297e6();
    puStack_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb728;
    func_0x00029d78();
    puStack_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb72d;
    FUN_28b3_1c08();
    puStack_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb732;
    FUN_28b3_1177();
    puStack_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb73a;
    func_0x0002996b();
    puStack_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb73f;
    func_0x00029d78();
    puStack_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb744;
    FUN_28b3_1181();
    if ((bool)in_CF) {
      puStack_4 = (undefined1 *)0x22b2;
      local_6 = (undefined1 *)0xb74e;
      func_0x000297e6();
      uStack_c = 0x22b2;
      puStack_e = (undefined1 *)0xb758;
      func_0x000299d1();
      uStack_c = 0x681b;
    }
    else {
      puStack_4 = (undefined1 *)0x22b2;
      local_6 = (undefined1 *)0xb765;
      func_0x000297e6();
      puStack_4 = (undefined1 *)0x22b2;
      local_6 = (undefined1 *)0xb76a;
      func_0x00029d78();
      uStack_c = 0x22b2;
      puStack_e = (undefined1 *)0xb774;
      func_0x000299d1();
      uStack_c = 0x6821;
    }
    puStack_e = local_1a;
    uStack_10 = 0x22b2;
    uStack_12 = 0xb781;
    FUN_21f2_3454();
    puStack_4 = (undefined1 *)0x6827;
    local_6 = local_1a;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xb791;
    FUN_21f2_2d26();
  }
  else {
    puStack_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb6ec;
    func_0x000297e6();
    puStack_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb6f5;
    func_0x00029c74();
    puStack_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb6fa;
    puStack_4 = (undefined1 *)FUN_28b3_0f51();
    local_6 = (undefined1 *)0x6816;
    puStack_8 = local_1a;
    uStack_a = 0x22b2;
    uStack_c = 0xb70b;
    FUN_21f2_3454();
  }
  puStack_4 = local_1a;
  local_6 = (undefined1 *)param_1;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb79f;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x682a;
  local_6 = (undefined1 *)param_1;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb7ad;
  FUN_21f2_2d26();
  return;
}



/* 3ab8:0c33  FUN_3ab8_0c33  217 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0c33(void)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 local_c;
  undefined2 local_a;
  int iVar5;
  int iVar6;
  
  FUN_21f2_0ebc();
  local_a = 1;
  iVar3 = 0x22b2;
  iVar5 = 0;
  while( true ) {
    if ((*(int *)0x14a < iVar5) || ((*(int *)0x14a <= iVar5 && (*(uint *)0x148 < local_a)))) break;
    iVar6 = iVar3;
    uVar4 = func_0x0000013f(iVar3,local_a,iVar5);
    uVar2 = (undefined2)((ulong)uVar4 >> 0x10);
    iVar3 = (int)uVar4;
    *(byte *)(iVar3 + 0x14) = *(byte *)(iVar3 + 0x14) & 0xfd;
    *(byte *)(iVar3 + 0x15) = *(byte *)(iVar3 + 0x15) & 0xfe;
    *(byte *)(iVar3 + 0x15) = *(byte *)(iVar3 + 0x15) & 0xfd;
    local_a = 0xb7ee;
    iVar3 = 0;
    iVar5 = iVar6;
  }
  local_a = 1;
  iVar5 = 0;
  while( true ) {
    if ((*(int *)0x14e < iVar5) || ((*(int *)0x14e <= iVar5 && (*(uint *)0x14c < local_a)))) break;
    iVar6 = iVar3;
    uVar4 = func_0x00000271(iVar3,local_a,iVar5);
    pbVar1 = (byte *)((int)uVar4 + 0x1e);
    *pbVar1 = *pbVar1 & 0xfd;
    local_a = 0xb834;
    iVar3 = 0;
    iVar5 = iVar6;
  }
  for (local_c = 1; local_c <= *(int *)0x152; local_c = local_c + 1) {
    uVar4 = func_0x000003ef(iVar3,local_c);
    pbVar1 = (byte *)((int)uVar4 + 10);
    *pbVar1 = *pbVar1 & 0xfd;
    iVar3 = 0;
  }
  for (local_c = 1; local_c <= *(int *)0x150; local_c = local_c + 1) {
    uVar4 = func_0x00000398(iVar3,local_c);
    pbVar1 = (byte *)((int)uVar4 + 0x16);
    *pbVar1 = *pbVar1 & 0xfd;
    iVar3 = 0;
  }
  return;
}



/* 3ab8:0d0c  FUN_3ab8_0d0c  341 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_0d0c(int param_1,uint param_2,int param_3,undefined2 param_4,undefined2 param_5)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar10;
  undefined4 uVar11;
  undefined2 local_36 [12];
  undefined2 local_1e [7];
  undefined2 uStack_10;
  undefined2 local_e;
  undefined2 local_c;
  
  FUN_21f2_0ebc();
  uVar7 = (int)param_2 >> 0xf;
  iVar4 = (((int)((param_2 ^ uVar7) - uVar7) >> 4 ^ uVar7) - uVar7) + -2;
  if ((iVar4 < 1) || (param_3 < iVar4)) {
    uVar5 = 0;
  }
  else {
    local_c = 0xb8d0;
    puVar10 = (undefined2 *)func_0x00000398();
    puVar8 = (undefined2 *)puVar10;
    puVar9 = local_1e;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar2;
    }
    local_c = param_5;
    local_e = 0;
    uVar5 = 0x18b3;
    uStack_10 = 0xb8ef;
    FUN_1885_0344();
    if (param_1 == 1) {
      for (iVar4 = 1; iVar4 <= *(int *)0x150; iVar4 = iVar4 + 1) {
        uVar5 = 0;
        local_c = 0xb907;
        uVar11 = func_0x00000398();
        pbVar1 = (byte *)((int)uVar11 + 0x16);
        *pbVar1 = *pbVar1 & 0xfd;
      }
    }
    for (iVar4 = 1; iVar4 <= *(int *)0x150; iVar4 = iVar4 + 1) {
      uVar5 = 0;
      local_c = 0xb92b;
      uVar11 = func_0x00000398();
      if (*(byte *)((int)uVar11 + 0x14) < 0x5a) {
        local_c = 0xb93f;
        puVar10 = (undefined2 *)func_0x00000398();
        puVar8 = (undefined2 *)puVar10;
        puVar9 = local_36;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar3 = *puVar2;
        }
        uVar5 = 0x11f2;
        local_c = 0xb95b;
        iVar6 = func_0x000125f1();
        if (iVar6 != 0) {
          local_c = 0xbf48;
          local_e = 0x11f2;
          uStack_10 = 0xb96f;
          FUN_1885_0344();
          local_c = 0x18b3;
          uVar5 = 0x22b2;
          local_e = 0xb97e;
          iVar6 = func_0x00024cb8();
          if (iVar6 == 0) {
            uVar5 = 0;
            local_c = 0xb98c;
            uVar11 = func_0x00000398();
            pbVar1 = (byte *)((int)uVar11 + 0x16);
            *pbVar1 = *pbVar1 | 2;
          }
        }
      }
    }
    iVar4 = 2;
    do {
      local_e = 0xb9b2;
      local_c = uVar5;
      FUN_1000_0599();
      uVar5 = 0xdef;
      func_0x00010526();
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x19);
    local_c = 0xb9ca;
    func_0x0001470b();
    *(undefined2 *)0xbc0 = 1;
    local_c = 0xb9d7;
    func_0x00008095();
    uVar5 = 1;
  }
  return uVar5;
}



/* 3ab8:0e61  FUN_3ab8_0e61  2962 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003c01e) */
/* WARNING: Removing unreachable block (ram,0x0003c566) */

void __cdecl16far FUN_3ab8_0e61(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined2 uVar10;
  undefined1 *puVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar12;
  undefined4 uVar13;
  undefined2 local_438 [11];
  byte local_422;
  int local_420;
  int local_41e;
  undefined1 local_41c [4];
  undefined2 local_418 [11];
  byte local_402;
  int local_400 [114];
  int local_31c;
  int local_31a;
  undefined1 local_318 [100];
  int local_2b4;
  undefined2 local_2b2;
  undefined1 local_2b0 [250];
  int local_1b6;
  undefined1 *local_1b4;
  undefined1 local_1a8 [250];
  int local_ae;
  char local_ac [80];
  undefined1 local_5c [66];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_14;
  undefined1 *puStack_12;
  char *pcStack_10;
  char *pcStack_e;
  char *local_c;
  int iVar14;
  
  puVar9 = (undefined1 *)0x22b2;
  FUN_21f2_0ebc();
  local_ac[0] = '\0';
  local_2b2 = 0;
  local_31a = 0;
  local_ae = 0;
  for (local_2b4 = 1; local_2b4 <= *(int *)0x150; local_2b4 = local_2b4 + 1) {
    puVar9 = (undefined1 *)0x0;
    local_c = (char *)0xba18;
    uVar13 = func_0x00000398();
    pbVar1 = (byte *)((int)uVar13 + 0x16);
    *pbVar1 = *pbVar1 & 0xfe;
  }
LAB_3ab8_0eaf:
  do {
    do {
      pcStack_e = (char *)0xba3d;
      local_c = puVar9;
      FUN_21f2_3454();
      local_c = (char *)0x22b2;
      pcStack_e = (char *)0xba4d;
      FUN_21f2_3454();
      local_c = (char *)0x22b2;
      pcStack_e = (char *)0xba5d;
      FUN_21f2_3454();
      local_318[0] = 0;
      if (local_ae == 0) {
        local_c = (char *)0x22b2;
        pcStack_e = (char *)0xba7a;
        FUN_21f2_3454();
        local_c = (char *)0x22b2;
        pcStack_e = (char *)0xba8b;
        FUN_21f2_2d26();
      }
      local_c = (char *)0x22b2;
      pcStack_e = (char *)0xba9b;
      FUN_21f2_2d26();
      local_c = (char *)0x22b2;
      pcStack_e = (char *)0xbaac;
      FUN_21f2_2d26();
      local_c = (char *)0x22b2;
      pcStack_e = (char *)0xbabc;
      FUN_21f2_2d26();
      local_c = (char *)0x22b2;
      pcStack_e = (char *)0xbacd;
      FUN_21f2_2d26();
      local_c = (char *)0x22b2;
      pcStack_e = (char *)0xbadd;
      FUN_21f2_2d26();
      local_c = (char *)0x22b2;
      pcStack_e = (char *)0xbaed;
      FUN_21f2_2d26();
      if (local_ae == 0) {
        local_c = (char *)0x22b2;
        pcStack_e = (char *)0xbb4a;
        FUN_21f2_2d26();
      }
      else {
        local_c = (char *)0x22b2;
        pcStack_e = (char *)0xbb04;
        FUN_21f2_2d26();
        local_c = (char *)0x22b2;
        pcStack_e = (char *)0xbb14;
        FUN_21f2_2d26();
        local_c = (char *)0x22b2;
        pcStack_e = (char *)0xbb24;
        FUN_21f2_2d26();
        local_c = (char *)0x22b2;
        pcStack_e = (char *)0xbb34;
        FUN_21f2_2d26();
      }
      local_c = (char *)0x22b2;
      pcStack_e = (char *)0xbb5a;
      FUN_21f2_2d26();
      local_c = (char *)0x22b2;
      pcStack_e = (char *)0xbb6a;
      FUN_21f2_2d26();
      iVar14 = 4;
      local_c = (char *)0x22b2;
      uVar10 = 0x1bb4;
      pcStack_e = (char *)0xbb7a;
      FUN_1def_07a4();
      if (local_31a != 0) {
        *(undefined2 *)0xc22 = 1;
        if (local_ae == 0) {
          pcStack_e = (char *)0x26;
        }
        else {
          pcStack_e = (char *)0x1b;
        }
        iVar14 = 7;
        local_c = (char *)0x2;
        pcStack_10 = local_ac;
        puStack_12 = (undefined1 *)0x1bb4;
        uVar10 = 0xdef;
        uStack_14 = 0xbbbb;
        FUN_1000_02b5();
      }
      if (iVar14 != 0) {
        *(undefined2 *)0xc26 = 1;
        *(undefined2 *)0xc28 = 1;
      }
      *(undefined2 *)0xc2c = 1;
      pcStack_10 = local_41c;
      pcStack_e = local_318;
      puVar9 = (undefined1 *)0x1bb4;
      uStack_14 = 0xbc01;
      puStack_12 = (undefined1 *)uVar10;
      local_c = pcStack_10;
      local_420 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      *(undefined2 *)0xc26 = 0;
      *(undefined2 *)0xc28 = 0;
      if (((*(int *)0x158 != 0) || (local_420 == 0x14)) || (local_420 == -1)) {
LAB_3ab8_1099:
        for (local_2b4 = 1; local_2b4 <= *(int *)0x150; local_2b4 = local_2b4 + 1) {
          puVar9 = (undefined1 *)0x0;
          local_c = (char *)0xc50c;
          uVar13 = func_0x00000398();
          pbVar1 = (byte *)((int)uVar13 + 0x16);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        pcStack_e = (char *)0xc525;
        local_c = puVar9;
        FUN_1000_0599();
        func_0x00010526();
        local_2b4 = 3;
        do {
          local_c = (char *)0xdef;
          pcStack_e = (char *)0xc545;
          FUN_1000_0599();
          func_0x00010526();
          local_2b4 = local_2b4 + 1;
        } while (local_2b4 < 0x19);
        local_c = (char *)0xc55f;
        func_0x0001470b();
        *(undefined2 *)0xbc0 = 1;
        return;
      }
    } while (local_420 == 99);
    if (local_420 == 1) {
      for (local_2b4 = 1; local_2b4 <= *(int *)0x150; local_2b4 = local_2b4 + 1) {
        puVar9 = (undefined1 *)0x0;
        local_c = (undefined1 *)0xbc52;
        uVar13 = func_0x00000398();
        pbVar1 = (byte *)((int)uVar13 + 0x16);
        *pbVar1 = *pbVar1 & 0xfe;
      }
    }
    if (local_420 != 3) {
LAB_3ab8_1271:
      local_41e = 0;
      if (local_420 == 4) {
        while( true ) {
          local_41e = 0;
          pcStack_e = (char *)0xbe14;
          local_c = puVar9;
          iVar14 = func_0x00012038();
          if (iVar14 == 0) {
            local_5c[0] = 0;
          }
          local_c = (char *)0x11f2;
          pcStack_e = (char *)0xbe2e;
          FUN_1000_0599();
          func_0x00010526();
          local_c = (char *)0xdef;
          pcStack_e = (char *)0xbe42;
          FUN_1000_0599();
          local_c = (char *)0xbe4d;
          func_0x00012276();
          local_c = (char *)0x11f2;
          pcStack_e = (char *)0xbe5b;
          FUN_1000_0599();
          FUN_1000_060e();
          *(undefined2 *)0x16c = 0;
          local_c = (char *)0x15;
          pcStack_e = local_5c;
          pcStack_10 = (undefined1 *)0xdef;
          puStack_12 = (undefined1 *)0xbe7d;
          local_41e = FUN_12c1_03d3();
          func_0x00002cc6();
          *(undefined2 *)0x16c = 0;
          FUN_1000_0620();
          func_0x0000ac64();
          local_c = (char *)0x885;
          pcStack_e = (char *)0xbea3;
          FUN_1000_0599();
          if (3 < *(byte *)0xb782) {
            pcVar4 = (code *)swi(0x3f);
            (*pcVar4)();
          }
          if (local_41e < 1) break;
          local_c = local_5c;
          pcStack_e = (char *)0xdef;
          puVar9 = (undefined1 *)0x22b2;
          pcStack_10 = (undefined1 *)0xbed1;
          iVar14 = func_0x000276d7();
          if (iVar14 != 0) goto LAB_3ab8_13f6;
          do {
            *(undefined2 *)0xc22 = 2;
            local_c = (char *)0x2;
            pcStack_e = (char *)0x29;
            pcStack_10 = local_5c;
            uStack_14 = 0xbef7;
            puStack_12 = puVar9;
            FUN_1000_02b5();
            local_c = (char *)0xdef;
            pcStack_e = (char *)0xbf08;
            FUN_21f2_3454();
            local_c = (char *)0x22b2;
            pcStack_e = (char *)0xbf18;
            FUN_21f2_2d26();
            local_c = local_41c;
            pcStack_e = local_318;
            *(undefined2 *)0xc26 = 1;
            pcStack_10 = (undefined1 *)0x1;
            puStack_12 = (undefined1 *)0x22b2;
            puVar9 = (undefined1 *)0x1bb4;
            uStack_14 = 0xbf3a;
            iVar14 = FUN_1def_0904();
            *(undefined2 *)0xc26 = 0;
            if (*(int *)0x158 != 0) {
              puVar9 = (undefined1 *)0x885;
              func_0x0000c3ca();
              goto LAB_3ab8_1099;
            }
            if (iVar14 == -1) {
              local_41e = 0;
              goto LAB_3ab8_0eaf;
            }
            if ((iVar14 == 1) || (local_1b4 == (undefined1 *)0x1)) {
              local_1b4 = (undefined1 *)0x0;
              goto LAB_3ab8_13f6;
            }
          } while ((iVar14 != 2) && (local_1b4 != (undefined1 *)0x2));
        }
        goto LAB_3ab8_1220;
      }
      goto LAB_3ab8_144c;
    }
    uVar10 = 0x11f2;
    local_c = (char *)0xbc7c;
    func_0x00011f2c();
    if (puVar9 != (undefined1 *)0x0) {
      local_2b4 = 2;
      do {
        pcStack_e = (char *)0xbc96;
        local_c = (char *)uVar10;
        FUN_1000_0599();
        uVar10 = 0xdef;
        func_0x00010526();
        local_2b4 = local_2b4 + 1;
      } while (local_2b4 < 0x19);
      local_c = (char *)0xbcb0;
      func_0x0001470b();
    }
    local_c = (char *)0x11f2;
    pcStack_e = (char *)0xbcc0;
    FUN_1000_0599();
    func_0x00010526();
    local_c = (char *)0xdef;
    pcStack_e = (char *)0xbcd4;
    FUN_1000_0599();
    uVar10 = 0x11f2;
    local_c = (char *)0xbcdf;
    func_0x00012276();
    if ((*(byte *)0x129 < 10) || (*(byte *)0xb782 < 4)) {
      func_0x0000c354();
      local_c = (char *)(*(int *)0xa5a + 1);
      pcStack_e = (char *)0x0;
      pcStack_10 = (undefined1 *)0x885;
      puStack_12 = (undefined1 *)0xbd08;
      func_0x0000a76b();
      uVar10 = 0x885;
      func_0x0000a799();
    }
    pcStack_e = (char *)0xbd1d;
    local_c = (char *)uVar10;
    FUN_1000_0599();
    FUN_1000_060e();
    func_0x00002ca6();
    if (*(char *)0x124 == '\0') {
      *(undefined2 *)0x16c = 0;
    }
    else {
      *(undefined2 *)0x16c = 0xfff6;
    }
    local_c = (char *)0x24;
    pcStack_e = local_ac;
    pcStack_10 = (undefined1 *)0x2c1;
    puStack_12 = (undefined1 *)0xbd54;
    local_31a = FUN_12c1_03d3();
    func_0x00002cc6();
    *(undefined2 *)0x16c = 0;
    local_c = (char *)0xbd6b;
    func_0x00011f2c();
    FUN_1000_0620();
    func_0x0000ac64();
    local_c = (undefined1 *)0x885;
    pcStack_e = (undefined1 *)0xbd80;
    FUN_1000_0599();
    if (3 < *(byte *)0xb782) {
      pcVar4 = (code *)swi(0x3f);
      (*pcVar4)();
    }
    if (0 < local_31a) {
      if (local_ac[0] == '\0') {
        local_31a = 0;
      }
      puVar9 = (undefined1 *)0x885;
      func_0x0000c3ca();
      for (local_2b4 = 1; local_2b4 <= *(int *)0x150; local_2b4 = local_2b4 + 1) {
        puVar9 = (undefined1 *)0x0;
        local_c = (undefined1 *)0xbdda;
        uVar13 = func_0x00000398();
        pbVar1 = (byte *)((int)uVar13 + 0x16);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      goto LAB_3ab8_1271;
    }
    local_31a = 0;
LAB_3ab8_1220:
    local_c = (char *)0xdef;
    pcStack_e = (char *)0xbdad;
    FUN_1000_0599();
    puVar9 = (undefined1 *)0xdef;
    func_0x00010526();
  } while( true );
LAB_3ab8_13f6:
  pcStack_e = (undefined1 *)0xbf83;
  local_c = puVar9;
  func_0x000120ec();
  puVar9 = (undefined1 *)0x885;
  func_0x0000c3ca();
  for (local_2b4 = 1; local_2b4 <= *(int *)0x150; local_2b4 = local_2b4 + 1) {
    puVar9 = (undefined1 *)0x0;
    local_c = (undefined1 *)0xbfc0;
    uVar13 = func_0x00000398();
    pbVar1 = (byte *)((int)uVar13 + 0x16);
    *pbVar1 = *pbVar1 & 0xfe;
  }
LAB_3ab8_144c:
  if (local_1b4 == (undefined1 *)0x0) {
LAB_3ab8_15c1:
    local_2b4 = 2;
    do {
      pcStack_e = (char *)0xc154;
      local_c = puVar9;
      FUN_1000_0599();
      puVar9 = (undefined1 *)0xdef;
      func_0x00010526();
      local_2b4 = local_2b4 + 1;
    } while (local_2b4 < 0x19);
    local_c = (char *)(*(int *)0xa5e + 1);
    pcStack_e = (char *)(*(int *)0xa5c + 1);
    pcStack_10 = (undefined1 *)0xdef;
    puStack_12 = (undefined1 *)0xc17f;
    func_0x0000a76b();
    func_0x0000a799();
    local_2b2 = 1;
    *(undefined2 *)0xbc0 = 1;
    do {
      func_0x0000c3ca();
      local_c = (char *)0x3;
      pcStack_e = (char *)0x11;
      pcStack_10 = (undefined1 *)0x6856;
      puStack_12 = (undefined1 *)0x885;
      puVar9 = (undefined1 *)0xdef;
      uStack_14 = 0xc1b2;
      FUN_1000_02b5();
      local_ae = 0;
      if (local_41e != 0) {
        local_c = (char *)0xdef;
        uVar10 = 0x22b2;
        pcStack_e = (char *)0xc1cf;
        iVar14 = FUN_21f2_1348();
        *(int *)0xd70 = iVar14;
        if (iVar14 == 0) {
          uVar10 = 0x11f2;
          local_c = (char *)0xc1e1;
          FUN_13bf_0a03();
        }
        pcStack_e = (char *)0xc1fc;
        local_c = (char *)uVar10;
        func_0x0002327e();
        local_c = (char *)0x22b2;
        pcStack_e = (char *)0xc20c;
        func_0x0002327e();
        if (local_31a != 0) {
          local_c = (char *)*(undefined2 *)0xd70;
          pcStack_e = (char *)0x22b2;
          pcStack_10 = (undefined1 *)0xc227;
          func_0x0002327e();
        }
        local_c = (char *)0x22b2;
        puVar9 = (undefined1 *)0x22b2;
        pcStack_e = (char *)0xc237;
        func_0x0002327e();
      }
      for (iVar14 = 1; iVar14 <= *(int *)0x150; iVar14 = iVar14 + 1) {
        puVar9 = (undefined1 *)0x0;
        local_c = (char *)0xc27b;
        uVar13 = func_0x00000398();
        if (*(byte *)((int)uVar13 + 0x14) < 0x5a) {
          puVar9 = (undefined1 *)0x0;
          local_c = (char *)0xc28f;
          puVar12 = (undefined2 *)func_0x00000398();
          puVar7 = (undefined2 *)puVar12;
          puVar8 = local_418;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          if ((local_402 & 1) == 0) {
            puVar9 = (undefined1 *)0x11f2;
            local_c = (char *)0xc2b4;
            iVar6 = FUN_10ad_1ad0();
            if (iVar6 != 0) {
              local_c = local_1a8;
              pcStack_e = (char *)0x11f2;
              pcStack_10 = (undefined1 *)0xc252;
              FUN_1885_0344();
              puVar9 = (undefined1 *)0x22b2;
              local_c = (char *)0xc25f;
              uVar5 = func_0x00024ce4();
              if (uVar5 < 0x29) {
                if (local_31a != 0) {
                  local_c = (char *)0x22b2;
                  pcStack_e = (char *)0xc2d1;
                  iVar6 = func_0x00025bc2();
                  if (iVar6 == 0) {
                    puVar9 = (undefined1 *)0x0;
                    local_c = (char *)0xc2df;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x16);
                    *pbVar1 = *pbVar1 | 1;
                    goto LAB_3ab8_16e5;
                  }
                }
                puVar9 = (undefined1 *)0x22b2;
                if ((0x13 < local_ae) && (local_41e == 0)) break;
                local_ae = local_ae + 1;
                puVar11 = (undefined1 *)0x0;
                local_c = (char *)0xc35c;
                uVar13 = func_0x00000398();
                pbVar1 = (byte *)((int)uVar13 + 0x16);
                *pbVar1 = *pbVar1 | 1;
                if (local_41e == 0) {
                  local_400[local_ae] = iVar14;
                }
                local_31c = 1;
                for (local_2b4 = 1; local_2b4 <= *(int *)0x150; local_2b4 = local_2b4 + 1) {
                  puVar11 = (undefined1 *)0x0;
                  local_c = (char *)0xc3c7;
                  uVar13 = func_0x00000398();
                  if (*(byte *)((int)uVar13 + 0x14) < 0x5a) {
                    puVar11 = (undefined1 *)0x0;
                    local_c = (char *)0xc3dc;
                    puVar12 = (undefined2 *)func_0x00000398();
                    puVar7 = (undefined2 *)puVar12;
                    puVar8 = local_438;
                    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                      puVar3 = puVar8;
                      puVar8 = puVar8 + 1;
                      puVar2 = puVar7;
                      puVar7 = puVar7 + 1;
                      *puVar3 = *puVar2;
                    }
                    if ((local_422 & 1) == 0) {
                      puVar11 = (undefined1 *)0x11f2;
                      local_c = (char *)0xc401;
                      iVar6 = FUN_10ad_1ad0();
                      if (iVar6 != 0) {
                        local_c = local_2b0;
                        pcStack_e = (char *)0x11f2;
                        pcStack_10 = (undefined1 *)0xc399;
                        FUN_1885_0344();
                        local_c = (char *)0x18b3;
                        puVar11 = (undefined1 *)0x22b2;
                        pcStack_e = (char *)0xc3ab;
                        iVar6 = func_0x00024cb8();
                        if (iVar6 == 0) {
                          local_31c = local_31c + 1;
                          puVar11 = (undefined1 *)0x0;
                          local_c = (char *)0xc415;
                          uVar13 = func_0x00000398();
                          pbVar1 = (byte *)((int)uVar13 + 0x16);
                          *pbVar1 = *pbVar1 | 1;
                        }
                      }
                    }
                  }
                }
                if (local_41e == 0) {
                  pcStack_e = (char *)0xc439;
                  local_c = puVar11;
                  FUN_1000_0599();
                  local_c = (char *)0x6864;
                  pcStack_e = (char *)0xdef;
                  puVar9 = (undefined1 *)0x11f2;
                  pcStack_10 = (undefined1 *)0xc44d;
                  func_0x00012276();
                }
                else {
                  local_c = (char *)0x6870;
                  pcStack_e = (char *)*(int *)0xd70;
                  puVar9 = (undefined1 *)0x22b2;
                  puStack_12 = (undefined1 *)0xc469;
                  pcStack_10 = puVar11;
                  func_0x0002327e();
                }
              }
            }
          }
        }
LAB_3ab8_16e5:
      }
      if (local_41e == 0) goto LAB_3ab8_1914;
      func_0x0002504e();
      *(undefined2 *)0xd70 = 0;
      func_0x0000c3ca();
      if (0 < local_ae) {
        local_c = (char *)0x1;
        pcStack_e = (char *)0x26;
        pcStack_10 = (undefined1 *)0x718;
        puStack_12 = (undefined1 *)0x885;
        uStack_14 = 0xc334;
        FUN_1000_02b5();
        local_c = (char *)0xc340;
        func_0x000121f9();
      }
      local_41e = 0;
      for (local_2b4 = 1; local_2b4 <= *(int *)0x150; local_2b4 = local_2b4 + 1) {
        local_c = (char *)0xc488;
        uVar13 = func_0x00000398();
        pbVar1 = (byte *)((int)uVar13 + 0x16);
        *pbVar1 = *pbVar1 & 0xfe;
      }
    } while( true );
  }
  func_0x0000c3ca();
  if (local_ae != 0) {
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029b6d();
    FUN_28b3_0d8b();
    FUN_28b3_1168();
    func_0x00029d78();
    puVar9 = (undefined1 *)0x22b2;
    pcStack_e = (char *)FUN_28b3_0f51();
    local_c = (char *)local_ae;
    pcStack_10 = local_1b4;
    puStack_12 = (undefined1 *)0x22b2;
    uStack_14 = 0xc040;
    iVar14 = FUN_3ab8_0d0c();
    if (iVar14 != 0) {
      local_ae = 0;
    }
    goto LAB_3ab8_0eaf;
  }
  func_0x000297e6();
  func_0x00029d78();
  pcStack_10 = (char *)0x22b2;
  puStack_12 = (undefined1 *)0xc06e;
  func_0x000299d1();
  pcStack_10 = (char *)0x22b2;
  puStack_12 = (undefined1 *)0xc077;
  func_0x000297e6();
  pcStack_10 = (undefined1 *)0x22b2;
  puStack_12 = (undefined1 *)0xc07c;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xc086;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  puVar9 = (undefined1 *)0x18b3;
  uStack_1a = 0xc08b;
  local_1b6 = func_0x0001b204();
  if (0 < local_1b6) {
    local_c = (char *)0xc0aa;
    puVar12 = (undefined2 *)func_0x00000398();
    puVar7 = (undefined2 *)puVar12;
    puVar8 = local_418;
    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    local_c = local_1a8;
    pcStack_e = (char *)0x0;
    pcStack_10 = (char *)0xc0ce;
    FUN_1885_0344();
    local_c = (char *)0xc0db;
    uVar5 = func_0x00024ce4();
    if (uVar5 < 0x29) {
      local_c = local_ac;
      pcStack_e = (char *)0x22b2;
      puVar9 = (undefined1 *)0x18b3;
      pcStack_10 = (undefined1 *)0xc111;
      FUN_1885_0344();
      local_31a = 1;
      for (local_2b4 = 1; local_2b4 <= *(int *)0x150; local_2b4 = local_2b4 + 1) {
        puVar9 = (undefined1 *)0x0;
        local_c = (char *)0xc12a;
        uVar13 = func_0x00000398();
        pbVar1 = (byte *)((int)uVar13 + 0x16);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      goto LAB_3ab8_15c1;
    }
    local_c = (char *)0x2;
    pcStack_e = (char *)0x12;
    pcStack_10 = (undefined1 *)0x751;
    puStack_12 = (undefined1 *)0x22b2;
    puVar9 = (undefined1 *)0xdef;
    uStack_14 = 0xc0fa;
    FUN_1000_02b5();
  }
  local_31a = 0;
  local_ac[0] = '\0';
  goto LAB_3ab8_0eaf;
LAB_3ab8_1914:
  if (local_ae == 0) {
    local_2b4 = 2;
    do {
      pcStack_e = (char *)0xc4b1;
      local_c = puVar9;
      FUN_1000_0599();
      puVar9 = (undefined1 *)0xdef;
      func_0x00010526();
      local_2b4 = local_2b4 + 1;
    } while (local_2b4 < 0x19);
    local_c = (char *)0xc4cb;
    func_0x0001470b();
    *(undefined2 *)0xbc0 = 1;
    local_c = (char *)0x2;
    pcStack_e = (char *)0x11;
    pcStack_10 = (undefined1 *)0x38c;
    puStack_12 = (undefined1 *)0x11f2;
    puVar9 = (undefined1 *)0xdef;
    uStack_14 = 0xc4f0;
    FUN_1000_02b5();
  }
  goto LAB_3ab8_0eaf;
}



/* 3ab8:19fb  FUN_3ab8_19fb  160 bytes, 0 callers */

void __cdecl16far FUN_3ab8_19fb(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined1 local_2a [32];
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uStack_6 = 0xc586;
  FUN_21f2_0ebc();
  puStack_4 = local_2a;
  uStack_6 = 0x22b2;
  uStack_8 = 0xc58e;
  FUN_3ab8_0b31();
  puStack_4 = (undefined1 *)0x6877;
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xc59b;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x2f0;
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xc5a9;
  FUN_21f2_2d26();
  puStack_4 = local_2a;
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xc5b7;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x6883;
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xc5c5;
  FUN_21f2_2d26();
  if (param_3 == 0) {
    puStack_4 = (undefined1 *)0x6885;
  }
  else {
    puStack_4 = (undefined1 *)0x7e0;
  }
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xc5de;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x688c;
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xc5ec;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)param_2;
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xc5f9;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x6892;
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xc607;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)param_1;
  uStack_6 = 3;
  uStack_8 = 0x22b2;
  uStack_a = 0xc615;
  FUN_1def_07a4();
  return;
}



/* 3ab8:1a9b  FUN_3ab8_1a9b  12718 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003facd) */
/* WARNING: Removing unreachable block (ram,0x0003fad7) */
/* WARNING: Removing unreachable block (ram,0x0003fad4) */
/* WARNING: Removing unreachable block (ram,0x0003fae1) */
/* WARNING: Removing unreachable block (ram,0x0003fae4) */
/* WARNING: Type propagation algorithm not settling */

int __cdecl16far FUN_3ab8_1a9b(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *unaff_SI;
  int *unaff_DI;
  undefined2 *puVar12;
  undefined2 uVar13;
  undefined2 *puVar14;
  undefined2 uVar15;
  undefined2 *puVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  undefined1 uVar18;
  long lVar19;
  undefined2 *puVar20;
  int *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  int *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  undefined2 local_cec;
  undefined2 local_c8c;
  undefined2 local_c8a;
  undefined2 local_c74;
  undefined2 local_c72;
  undefined2 local_c46;
  undefined2 uStack_c44;
  undefined2 uStack_c42;
  undefined2 uStack_c40;
  undefined2 local_c10;
  undefined2 local_c0e;
  undefined2 local_c00;
  int local_bfe;
  undefined2 *local_bfc;
  undefined2 local_bfa;
  undefined2 local_be2 [6];
  undefined2 local_bd6;
  undefined2 local_bd4;
  undefined2 local_bd2;
  undefined2 local_bd0;
  undefined1 local_bce [116];
  undefined1 local_b5a [102];
  int local_af4;
  undefined1 local_ae2 [50];
  undefined1 local_ab0 [56];
  undefined1 local_a78 [58];
  int local_a3e;
  int local_a3c;
  undefined2 local_a3a;
  undefined2 local_a38;
  undefined2 local_a36;
  undefined2 local_a34;
  undefined2 local_a22 [56];
  undefined2 uStack_9b2;
  int local_9b0;
  undefined2 local_99a;
  undefined2 local_998;
  undefined2 local_996 [160];
  undefined2 *local_856;
  undefined4 local_852;
  undefined2 local_84e [161];
  undefined2 local_70c;
  undefined2 local_70a;
  undefined2 local_708;
  undefined2 local_706;
  undefined2 local_704 [160];
  undefined2 local_5c4 [160];
  undefined2 local_484;
  undefined2 local_482;
  undefined2 local_480;
  undefined2 local_47e;
  uint local_47c;
  undefined2 local_47a;
  undefined2 local_478;
  undefined2 local_476;
  undefined2 uStack_474;
  undefined2 uStack_472;
  undefined2 uStack_470;
  undefined2 local_46e;
  undefined2 local_46c;
  undefined1 local_46a [100];
  undefined2 local_406 [6];
  int local_3fa;
  undefined2 local_3f8;
  undefined2 local_3f6;
  undefined2 local_3f4;
  undefined2 local_3f2;
  undefined1 local_3ec;
  undefined1 local_3eb;
  undefined2 local_3e6;
  undefined2 local_3e4;
  int local_3de;
  undefined2 local_3dc;
  undefined2 local_3da;
  undefined2 local_3d4;
  undefined2 local_3d2;
  undefined2 local_3d0;
  undefined2 local_3ce;
  undefined2 local_3cc;
  undefined2 auStack_3c2 [4];
  undefined2 local_3ba;
  undefined2 uStack_3b8;
  undefined2 uStack_3b6;
  undefined2 uStack_3b4;
  int local_142 [46];
  undefined2 auStack_e6 [10];
  undefined2 auStack_d2 [10];
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
  int iStack_88;
  int iStack_86;
  undefined2 *puStack_84;
  undefined1 *puStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  int iStack_64;
  int iStack_62;
  undefined2 uStack_60;
  int iStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 *puStack_44;
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
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  int iStack_1c;
  int iStack_1a;
  undefined2 uStack_18;
  undefined2 *puStack_16;
  undefined2 *puStack_14;
  uint uStack_12;
  int *piStack_10;
  int *piStack_e;
  int *piStack_c;
  
  FUN_21f2_0ebc();
  local_9b0 = 0;
  local_c10 = *(undefined2 *)0xa57c;
  local_c0e = *(undefined2 *)0xa57e;
  local_3d2 = *(undefined2 *)0xa57c;
  local_3d0 = *(undefined2 *)0xa57e;
  local_3ce = *(undefined2 *)0xa57c;
  local_3cc = *(undefined2 *)0xa57e;
  local_3dc = *(undefined2 *)0xa57c;
  local_3da = *(undefined2 *)0xa57e;
  local_3e6 = *(undefined2 *)0xa57c;
  local_3e4 = *(undefined2 *)0xa57e;
  local_47a = *(undefined2 *)0xa57c;
  local_478 = *(undefined2 *)0xa57e;
  local_3de = 0x37;
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xc69c;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xc6ac;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xc6bc;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xc6cc;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xc6dc;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xc6ec;
  FUN_21f2_3454();
  func_0x0000c3ca();
  piStack_c = (int *)0x885;
  piStack_e = (int *)0xc701;
  func_0x00024c86();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xc711;
  FUN_21f2_2d26();
  piStack_c = local_a22;
  piStack_e = (undefined2 *)0x22b2;
  piStack_10 = (int *)0xc726;
  iVar10 = func_0x000276d7();
  if (iVar10 == 0) {
    local_9b0 = 1;
    local_852 = CONCAT22(local_852._2_2_,(int)local_852);
  }
LAB_3ab8_1bb7:
  FUN_1885_2ec3();
  puVar14 = (undefined2 *)0x1b6e;
  if (*(int *)0x158 == 0) {
    do {
      do {
        piStack_e = (int *)0xc757;
        piStack_c = puVar14;
        FUN_21f2_3454();
        piStack_c = (int *)0x22b2;
        uVar13 = 0x1bb4;
        piStack_e = (int *)0xc767;
        FUN_1def_07a4();
        if (local_9b0 != 0) {
          piStack_c = (int *)0x1bb4;
          uVar13 = 0x22b2;
          piStack_e = (int *)0xc781;
          FUN_21f2_2d26();
        }
        piStack_e = (int *)0xc791;
        piStack_c = (int *)uVar13;
        FUN_21f2_3454();
        if (*(int *)0x1170 == 0) {
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xc7ac;
          FUN_21f2_2d26();
          local_476 = *(undefined2 *)0xa5d4;
          uStack_474 = *(undefined2 *)0xa5d6;
          uStack_472 = *(undefined2 *)0xa5d8;
          uStack_470 = *(undefined2 *)0xa5da;
        }
        if (*(int *)0x1170 == 1) {
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xc7d4;
          FUN_21f2_2d26();
          local_476 = *(undefined2 *)0xa5a0;
          uStack_474 = *(undefined2 *)0xa5a2;
          uStack_472 = *(undefined2 *)0xa5a4;
          uStack_470 = *(undefined2 *)0xa5a6;
        }
        if (*(int *)0x1170 == 2) {
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xc7fc;
          FUN_21f2_2d26();
          local_476 = *(undefined2 *)0xa5dc;
          uStack_474 = *(undefined2 *)0xa5de;
          uStack_472 = *(undefined2 *)0xa5e0;
          uStack_470 = *(undefined2 *)0xa5e2;
        }
        uVar13 = 0x22b2;
        if (*(int *)0xc22 == 0) {
          *(undefined2 *)0xc22 = 1;
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xc829;
          FUN_21f2_2d26();
          piStack_c = (int *)0x2;
          piStack_e = (int *)0x35;
          piStack_10 = (int *)local_46a;
          uStack_12 = 0x22b2;
          puStack_14 = (undefined2 *)0xc845;
          FUN_1000_02b5();
          piStack_c = (int *)local_46a;
          piStack_e = (int *)0xdef;
          piStack_10 = (int *)0xc85a;
          FUN_21f2_3454();
          piStack_c = (int *)0x2;
          piStack_e = (int *)0x3d;
          piStack_10 = (int *)local_46a;
          uStack_12 = 0x22b2;
          uVar13 = 0xdef;
          puStack_14 = (undefined2 *)0xc877;
          FUN_1000_02b5();
        }
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xc18 = 0;
        if (param_1 == 0) {
          *(undefined2 *)0xc1a = 1;
        }
        *(undefined2 *)0xc20 = 1;
        piStack_c = &local_c10;
        piStack_e = local_a22;
        piStack_10 = (int *)param_1;
        puVar14 = (undefined2 *)0x1bb4;
        puStack_14 = (undefined2 *)0xc8b4;
        uStack_12 = uVar13;
        local_a3e = FUN_1def_0904();
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
        if (local_a3e == -1) {
          *(undefined2 *)0xc18 = 1;
          goto LAB_2bb4_45c4;
        }
        if (*(int *)0xc18 != 0) {
          local_47c = 0;
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xc90c;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xc915;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xc91a;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          iStack_1a = 0xc924;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          iStack_1a = -0x36d7;
          func_0x0000507a();
          goto LAB_3ab8_1bb7;
        }
        if ((0 < local_a3e) && (local_a3e < 6)) goto LAB_3ab8_1f18;
        if (local_a3e == 6) {
          local_856 = (undefined2 *)0x0;
          *(int *)0x1170 = *(int *)0x1170 + 1;
          if (2 < *(int *)0x1170) {
            *(undefined2 *)0x1170 = 0;
          }
          if (*(byte *)0x123 < 6) {
            if (*(int *)0x1170 == 0) {
              *(undefined2 *)0x1172 = 3;
            }
            if (*(int *)0x1170 == 1) {
              *(undefined2 *)0x1172 = 1;
            }
            if (*(int *)0x1170 == 2) {
              *(undefined2 *)0x1172 = 0;
            }
          }
        }
        if (local_a3e == 7) {
          local_856 = (undefined2 *)0x0;
          *(int *)0x1172 = *(int *)0x1172 + 1;
          if (3 < *(int *)0x1172) {
            *(undefined2 *)0x1172 = 0;
          }
        }
        if (local_a3e == 8) {
          local_856 = (undefined2 *)0x0;
          puVar14 = (undefined2 *)0x2ab8;
          piStack_c = (undefined2 *)0xc9df;
          func_0x0002b9e1();
          if (param_1 != 0) goto LAB_2bb4_45c4;
        }
        if (local_a3e == 9) {
                    /* WARNING: Call to offcut address within same function */
          piStack_e = (undefined2 *)0xca03;
          piStack_c = puVar14;
          func_0x00030a1d();
          local_856 = (undefined2 *)0x0;
          puVar14 = (undefined2 *)0x2ab8;
        }
        if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
      } while (local_856 == (undefined2 *)0x0);
      piStack_c = local_856;
      piStack_10 = (int *)0xca35;
      piStack_e = puVar14;
      iVar10 = func_0x00015409();
      puVar14 = (undefined2 *)0x11f2;
    } while (iVar10 == 0);
    local_a3e = 1;
    local_47c = 1;
    local_142[3] = 0;
    local_142[2] = 0;
    local_5c4[2] = local_c10;
    local_5c4[3] = local_c0e;
    local_84e[2] = local_3d2;
    local_84e[3] = local_3d0;
    local_3ba = *(undefined2 *)0xa5e4;
    uStack_3b8 = *(undefined2 *)0xa5e6;
    uStack_3b6 = *(undefined2 *)0xa5e8;
    uStack_3b4 = *(undefined2 *)0xa5ea;
LAB_3ab8_1f1e:
    for (local_a3c = 0; local_a3c <= local_3de; local_a3c = local_a3c + 1) {
      auStack_3c2[local_a3c * 4] = *(undefined2 *)0xa5e4;
      auStack_3c2[local_a3c * 4 + 1] = *(undefined2 *)0xa5e6;
      auStack_3c2[local_a3c * 4 + 2] = *(undefined2 *)0xa5e8;
      auStack_3c2[local_a3c * 4 + 3] = *(undefined2 *)0xa5ea;
    }
    local_484 = *(undefined2 *)0xa5e4;
    local_482 = *(undefined2 *)0xa5e6;
    local_480 = *(undefined2 *)0xa5e8;
    local_47e = *(undefined2 *)0xa5ea;
    local_a3a = *(undefined2 *)0xa5e4;
    local_a38 = *(undefined2 *)0xa5e6;
    local_a36 = *(undefined2 *)0xa5e8;
    local_a34 = *(undefined2 *)0xa5ea;
    local_142[1] = 0;
    local_142[0] = 0;
    puVar14 = (undefined2 *)0x1b6e;
    FUN_1885_2ec3();
LAB_3ab8_1f79:
    if (local_a3e == 1) {
      uVar13 = 0x22b2;
      piStack_e = (int *)0xcb11;
      piStack_c = puVar14;
      FUN_21f2_3454();
LAB_3ab8_1f93:
      piStack_e = (int *)0xcb21;
      piStack_c = (int *)uVar13;
      FUN_21f2_3454();
      if (*(int *)0x1170 == 0) {
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xcb3c;
        FUN_21f2_3454();
      }
      if (*(int *)0x1170 == 1) {
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xcb57;
        FUN_21f2_3454();
      }
      puVar16 = (undefined2 *)0x22b2;
      if (*(int *)0x1170 == 2) {
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xcb72;
        FUN_21f2_3454();
        puVar16 = (undefined2 *)0x22b2;
      }
      do {
        do {
          while( true ) {
            piStack_c = (int *)local_47e;
            piStack_e = (int *)local_480;
            piStack_10 = (int *)local_482;
            uStack_12 = local_484;
            puStack_14 = (undefined2 *)local_a78;
            puVar14 = (undefined2 *)0x1bb4;
            uStack_18 = 0xcb96;
            puStack_16 = puVar16;
            iVar10 = func_0x0002267f();
            if (iVar10 == 0) {
              piStack_c = (int *)0x1bb4;
              puVar14 = (undefined2 *)0x22b2;
              piStack_e = (int *)0xcbb0;
              FUN_21f2_3454();
            }
            piStack_c = (int *)local_a34;
            piStack_e = (int *)local_a36;
            piStack_10 = (int *)local_a38;
            uStack_12 = local_a3a;
            puStack_14 = (undefined2 *)local_ae2;
            uVar13 = 0x1bb4;
            uStack_18 = 0xcbd4;
            puStack_16 = puVar14;
            iVar10 = func_0x0002267f();
            if (iVar10 == 0) {
              piStack_c = (int *)0x1bb4;
              uVar13 = 0x22b2;
              piStack_e = (int *)0xcbee;
              FUN_21f2_3454();
            }
            piStack_e = (int *)0xcbff;
            piStack_c = (int *)uVar13;
            func_0x00024c86();
            if (local_47c == 0) {
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xcc19;
              FUN_21f2_2d26();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xcc29;
              FUN_21f2_2d26();
              piStack_c = (int *)0x22b2;
              uVar13 = 0x22b2;
              piStack_e = (int *)0xcc39;
              FUN_21f2_2d26();
              *(undefined2 *)0xc2c = 1;
            }
            else {
              piStack_c = local_a22;
              piStack_e = (int *)0x22b2;
              piStack_10 = (int *)0xcc56;
              func_0x0002c57b();
              piStack_c = (int *)0x2ab8;
              piStack_e = (int *)0xcc66;
              FUN_1000_0599();
              piStack_c = (int *)local_ab0;
              piStack_e = (int *)0x68fd;
              piStack_10 = (int *)0xdef;
              uStack_12 = 0xcc80;
              func_0x00012276();
              piStack_c = (int *)0x690c;
              piStack_e = (int *)local_b5a;
              piStack_10 = (int *)0x11f2;
              uStack_12 = 0xcc9b;
              FUN_21f2_3454();
              local_bce[0] = 0;
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xccb0;
              FUN_1000_0599();
              if (local_142[local_47c * 2 + 1] < 0) {
                piStack_c = (int *)0xccdc;
                func_0x00012276();
              }
              else {
                piStack_c = (int *)0xccce;
                func_0x00012276();
              }
              piStack_c = (int *)0x6912;
              piStack_e = (int *)0x11f2;
              uVar13 = 0x11f2;
              piStack_10 = (int *)0xccf0;
              func_0x00012276();
            }
            piStack_c = local_996;
            piStack_e = local_704;
            piStack_10 = local_142;
            uStack_12 = local_47c;
            puStack_16 = (undefined2 *)0xcd15;
            puStack_14 = (undefined2 *)uVar13;
            FUN_28b3_2a41();
            *(undefined2 *)0xc1a = 1;
            *(undefined2 *)0xc20 = 1;
            if (*(int *)0xa62 == 0x1b) {
              *(undefined2 *)0xc1a = 0;
            }
            piStack_c = &local_3ce;
            piStack_e = local_a22;
            piStack_10 = (int *)0x270f;
            uStack_12 = 0x2ab8;
            puStack_14 = (undefined2 *)0xcd4e;
            local_af4 = FUN_1def_0904();
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            *(undefined2 *)0xc2c = 0;
            FUN_1885_2ec3();
            func_0x00013e19();
            piStack_c = (int *)0x11f2;
            piStack_e = (int *)0xcd78;
            FUN_1000_0599();
            func_0x00010526();
            piStack_c = (undefined2 *)0xdef;
            piStack_e = (undefined2 *)0xcd8c;
            FUN_1000_0599();
            puVar16 = (undefined2 *)0xdef;
            func_0x00010526();
            if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
            if (*(int *)0xc18 == 0) break;
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xcdc2;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xcdcb;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xcdd0;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            iStack_1a = 0xcdda;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            iStack_1a = -0x3221;
            func_0x0000507a();
            puVar16 = (undefined2 *)0x3bf;
          }
          if ((param_1 != 0) && (local_af4 == 1)) goto LAB_2bb4_45c4;
          if ((local_af4 == 1) && (local_47c != 0)) {
            piStack_c = (undefined2 *)0x0;
            piStack_e = (undefined2 *)0xdef;
            puVar16 = (undefined2 *)0x2ab8;
            piStack_10 = (int *)0xce22;
            FUN_28b3_26a1();
          }
          uVar1 = local_47c;
          if ((local_af4 == 2) && (local_47c != 0)) goto LAB_3ab8_1f18;
          if (local_af4 == 0x14) goto LAB_3ab8_1bb7;
          if (local_af4 == -1) {
            if (local_47c == 0) goto LAB_3ab8_1bb7;
            local_a3a = *(undefined2 *)0xa5e4;
            local_a38 = *(undefined2 *)0xa5e6;
            local_a36 = *(undefined2 *)0xa5e8;
            local_a34 = *(undefined2 *)0xa5ea;
            local_856 = (undefined2 *)0x0;
            local_47c = local_47c - 1;
            if ((local_142[local_47c * 2 + 1] == 0 && local_142[local_47c * 2] == 0) &&
               (1 < (int)local_47c)) {
              local_47c = uVar1 - 2;
            }
            local_484 = auStack_3c2[local_47c * 4];
            local_482 = auStack_3c2[local_47c * 4 + 1];
            local_480 = auStack_3c2[local_47c * 4 + 2];
            local_47e = auStack_3c2[local_47c * 4 + 3];
            for (local_a3c = 1; local_a3c <= (int)local_47c; local_a3c = local_a3c + 1) {
              if (local_142[local_a3c * 2 + 1] != 0 || local_142[local_a3c * 2] != 0) {
                func_0x00029834();
                piStack_c = (undefined2 *)0xceff;
                func_0x00029c74();
                puVar16 = (undefined2 *)0x22b2;
                func_0x000299d1();
              }
            }
          }
          puVar14 = puVar16;
          if (local_af4 == 3) goto LAB_3ab8_23c3;
        } while (local_856 == (undefined2 *)0x0);
        piStack_c = local_856;
        puVar14 = (undefined2 *)0x11f2;
        piStack_10 = (int *)0xcf32;
        piStack_e = puVar16;
        iVar10 = func_0x00015409();
        puVar16 = puVar14;
      } while (iVar10 == 0);
LAB_3ab8_23c3:
      if ((local_af4 == 3) && ((int)local_47c < local_3de)) {
LAB_3ab8_23da:
        do {
          uVar15 = local_5c4[local_47c * 2];
          uVar4 = local_5c4[local_47c * 2 + 1];
          uVar5 = local_84e[local_47c * 2];
          uVar6 = local_84e[local_47c * 2 + 1];
          while( true ) {
            piStack_c = local_996;
            piStack_e = local_704;
            piStack_10 = local_142;
            uStack_12 = local_47c;
            puStack_16 = (undefined2 *)0xcfa4;
            puStack_14 = puVar14;
            FUN_28b3_2a41();
            piStack_c = local_a22;
            piStack_e = (int *)0x2ab8;
            piStack_10 = (int *)0xcfb9;
            FUN_21f2_3454();
            piStack_c = &local_c10;
            piStack_e = local_a22;
            piStack_10 = (int *)0x1;
            uStack_12 = 0x22b2;
            uVar13 = 0x1bb4;
            puStack_14 = (undefined2 *)0xcfd9;
            iVar10 = FUN_1def_0904();
            if (*(int *)0x158 != 0) {
              FUN_1885_2ec3();
              goto LAB_2bb4_45c4;
            }
            if (iVar10 == -1) goto LAB_3ab8_1f93;
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xd017;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xd020;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xd025;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            iStack_1a = 0xd02f;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            iStack_1a = -0x2fcc;
            lVar19 = FUN_13bf_39a0();
            local_852 = lVar19;
            if (lVar19 < 0) break;
            puVar14 = (undefined2 *)0x11f2;
            piStack_c = (int *)0xd056;
            func_0x00012276();
          }
          uVar17 = (int)((ulong)lVar19 >> 0x10) + (uint)((int)lVar19 != 0) == 0;
          piStack_c = (undefined2 *)0x11f2;
          piStack_e = (undefined2 *)0xd070;
          puVar20 = (undefined2 *)func_0x00000271();
          puVar16 = (undefined2 *)puVar20;
          puVar14 = local_406;
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar3 = puVar14;
            puVar14 = puVar14 + 1;
            puVar2 = puVar16;
            puVar16 = puVar16 + 1;
            *puVar3 = *puVar2;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar17) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar17) {
              puVar14 = (undefined2 *)0x11f2;
              piStack_c = (int *)0xd0c4;
              func_0x00012276();
              goto LAB_3ab8_23da;
            }
          }
LAB_3ab8_2548:
          do {
            func_0x00013e19();
            local_3ec = 2;
            local_3eb = 9;
            puVar16 = &uStack_26;
            puVar14 = local_406;
            for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar2 = puVar16;
              puVar16 = puVar16 + 1;
              puVar20 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar2 = *puVar20;
            }
            func_0x00013e46();
            piStack_c = local_996;
            piStack_e = local_704;
            piStack_10 = local_142;
            uStack_12 = -local_47c;
            puStack_14 = (undefined2 *)0x11f2;
            puStack_16 = (undefined2 *)0xd114;
            FUN_28b3_2a41();
            piStack_c = &local_c46;
            piStack_e = (int *)0x6925;
            piStack_10 = local_a22;
            uStack_12 = 0x2ab8;
            puStack_14 = (undefined2 *)0xd132;
            FUN_21f2_3454();
            *(undefined2 *)0xc20 = 1;
            piStack_c = &local_3ce;
            piStack_e = local_a22;
            piStack_10 = (int *)0x270f;
            uStack_12 = 0x22b2;
            puStack_14 = (undefined2 *)0xd158;
            iVar10 = FUN_1def_0904();
            *(undefined2 *)0xc20 = 0;
            puVar14 = (undefined2 *)0x11f2;
            func_0x00013e19();
            if (*(int *)0x158 != 0) {
              FUN_1885_2ec3();
              goto LAB_2bb4_45c4;
            }
            if (iVar10 == -1) goto LAB_3ab8_23da;
          } while (local_856 == (undefined2 *)0x0);
          piStack_c = local_856;
          piStack_e = (undefined2 *)0x11f2;
          piStack_10 = (int *)0xd1a6;
          iVar10 = func_0x00015409();
          uVar17 = 0;
          uVar18 = iVar10 == 0;
          if ((bool)uVar18) goto LAB_3ab8_2548;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar18) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar18) {
              piStack_c = (undefined2 *)0xd1f5;
              func_0x00012276();
              goto LAB_3ab8_2548;
            }
          }
          uVar18 = 0;
          func_0x000297e6();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x000297e6();
          func_0x0002996b();
          FUN_28b3_100d();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029c9d();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029c9d();
          FUN_28b3_1163();
          FUN_28b3_1181();
          if (!(bool)uVar17 && !(bool)uVar18) {
            local_70c = uVar15;
            local_70a = uVar4;
            func_0x000297e6();
            func_0x00029983();
            local_c74 = local_70c;
            local_c72 = local_70a;
            local_70c = uVar5;
            local_70a = uVar6;
            func_0x000297e6();
            func_0x00029983();
          }
          piStack_c = (int *)0xd2f8;
          func_0x000297e6();
          piStack_c = (int *)0xd2fd;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          puStack_14 = (undefined2 *)0xd307;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          puStack_14 = (undefined2 *)0xd310;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          puStack_14 = (undefined2 *)0xd315;
          func_0x00029d78();
          iStack_1a = 0x22b2;
          iStack_1c = 0xd31f;
          func_0x000299d1();
          iVar10 = -(int)local_852;
          iVar11 = -(local_852._2_2_ + (uint)((int)local_852 != 0));
          uStack_1e = 0x22b2;
          uStack_20 = 0xd339;
          iStack_1c = iVar10;
          iStack_1a = iVar11;
          FUN_20a9_1260();
          piStack_c = (int *)0xd34a;
          func_0x000297e6();
          piStack_c = (int *)0xd34f;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          puStack_14 = (undefined2 *)0xd359;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          puStack_14 = (undefined2 *)0xd362;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          puStack_14 = (undefined2 *)0xd367;
          func_0x00029d78();
          iStack_1a = 0x22b2;
          iStack_1c = 0xd371;
          func_0x000299d1();
          uStack_1e = 0x22b2;
          uStack_20 = 0xd378;
          iStack_1c = iVar10;
          iStack_1a = iVar11;
          FUN_20a9_1260();
          if (local_3fa == 10000) {
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xd3a7;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xd3b0;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xd3b9;
            FUN_28b3_100d();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xd3be;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            iStack_1a = 0xd3c8;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            iStack_1a = 0xd3cd;
            func_0x0002a178();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029d78();
            func_0x000299b9();
            FUN_28b3_0ee9();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029d78();
            func_0x000299b9();
            FUN_28b3_0ee9();
            func_0x00029834();
            func_0x00029834();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xd448;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xd451;
            func_0x00029834();
            uStack_18 = 0x22b2;
            iStack_1a = 0xd45b;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            iStack_1a = -0x2ba0;
            func_0x0002a178();
            uVar17 = (undefined1 *)0xffef < &puStack_16;
            uVar18 = &stack0x0000 == (undefined1 *)0x6;
            func_0x00029834();
            func_0x000299b9();
            FUN_28b3_1181();
            if ((bool)uVar17 || (bool)uVar18) {
              func_0x00029834();
              func_0x00029c74();
              func_0x000299d1();
            }
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029d78();
            func_0x00029834();
            func_0x00029bfc();
            func_0x00029c9d();
            func_0x00029b6d();
            func_0x000299d1();
            goto LAB_3ab8_29ea;
          }
          func_0x0000c3ca();
          piStack_c = (int *)0x885;
          piStack_e = (undefined2 *)0xd4ef;
          FUN_1000_0599();
          puVar14 = (undefined2 *)0x11f2;
          piStack_c = (int *)0xd4fa;
          func_0x00012276();
          local_3f8 = local_708;
          local_3f6 = local_706;
          local_3f4 = local_99a;
          local_3f2 = local_998;
          puVar12 = (undefined2 *)&stack0xffd8;
          puVar16 = local_406;
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar2 = puVar12;
            puVar12 = puVar12 + 1;
            puVar20 = puVar16;
            puVar16 = puVar16 + 1;
            *puVar2 = *puVar20;
          }
          pcVar7 = (code *)swi(0x3f);
          iVar10 = (*pcVar7)();
          if (iVar10 != 0) {
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029d78();
            piStack_c = (int *)0xd564;
            func_0x00029c2c();
            func_0x000299d1();
LAB_3ab8_29ea:
            func_0x00029834();
            piStack_c = (int *)0xd57d;
            func_0x00029c2c();
            func_0x000299b9();
            piStack_c = (undefined2 *)0xd58d;
            func_0x00029c74();
            func_0x000299d1();
            uVar1 = local_47c + 1;
            local_47c = uVar1;
            local_704[uVar1 * 2] = local_708;
            local_704[uVar1 * 2 + 1] = local_706;
            local_996[uVar1 * 2] = local_99a;
            local_996[uVar1 * 2 + 1] = local_998;
            uVar13 = local_3cc;
            local_5c4[uVar1 * 2] = local_3ce;
            local_5c4[uVar1 * 2 + 1] = uVar13;
            uVar13 = local_3da;
            local_84e[uVar1 * 2] = local_3dc;
            local_84e[uVar1 * 2 + 1] = uVar13;
            local_142[uVar1 * 2] = (int)local_852;
            local_142[uVar1 * 2 + 1] = local_852._2_2_;
            func_0x00029834();
            puVar14 = (undefined2 *)0x22b2;
            func_0x000299d1();
            goto LAB_3ab8_1f79;
          }
        } while( true );
      }
      if (local_47c == 0) {
        local_47c = 1;
        local_142[3] = 0;
        local_142[2] = 0;
        local_5c4[2] = local_3ce;
        local_5c4[3] = local_3cc;
        local_84e[2] = local_3dc;
        local_84e[3] = local_3da;
        local_484 = *(undefined2 *)0xa5e4;
        local_482 = *(undefined2 *)0xa5e6;
        local_480 = *(undefined2 *)0xa5e8;
        local_47e = *(undefined2 *)0xa5ea;
        local_3ba = *(undefined2 *)0xa5e4;
        uStack_3b8 = *(undefined2 *)0xa5e6;
        uStack_3b6 = *(undefined2 *)0xa5e8;
        uStack_3b4 = *(undefined2 *)0xa5ea;
        goto LAB_3ab8_1f79;
      }
      uVar17 = (local_47c & 0x3fff) == 0;
      func_0x000297e6();
      func_0x00029b55();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029b55();
      func_0x0002996b();
      FUN_28b3_1181();
      if ((bool)uVar17) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar17) {
          piStack_c = (int *)0xd6ef;
          func_0x00012276();
          piStack_c = (int *)0x11f2;
          piStack_e = (int *)0xd6fd;
          FUN_1000_0599();
          piStack_c = (undefined2 *)0xdef;
          puVar14 = (undefined2 *)0x11f2;
          piStack_e = (undefined2 *)0xd70d;
          func_0x00012276();
          goto LAB_3ab8_1f79;
        }
      }
      if ((int)local_47c < local_3de) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1168();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1168();
        func_0x000299d1();
        uVar13 = local_3cc;
        uVar1 = local_47c + 1;
        local_142[uVar1 * 2] = 1;
        local_142[uVar1 * 2 + 1] = 0;
        local_47c = uVar1;
        local_5c4[uVar1 * 2] = local_3ce;
        local_5c4[uVar1 * 2 + 1] = uVar13;
        uVar13 = local_3da;
        local_84e[uVar1 * 2] = local_3dc;
        local_84e[uVar1 * 2 + 1] = uVar13;
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029d78();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_117c();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xd7fb;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xd800;
        FUN_28b3_1582();
        func_0x00029c2c();
        func_0x000299d1();
        func_0x00029834();
        piStack_c = (int *)0xd828;
        func_0x00029c2c();
        func_0x000299b9();
        piStack_c = (int *)0xd838;
        func_0x00029c74();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299d1();
        uVar17 = *(byte *)0x123 < 8;
        uVar18 = *(byte *)0x123 == 8;
        if (!(bool)uVar17) {
          func_0x00029834();
          func_0x00029834();
          func_0x00029ae7();
          FUN_28b3_1181();
          if ((bool)uVar17 || (bool)uVar18) {
            func_0x00029834();
            func_0x00029983();
          }
        }
        piStack_c = (int *)0xd8aa;
        func_0x000297e6();
        piStack_c = (undefined2 *)0xd8af;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        puStack_14 = (undefined2 *)0xd8b9;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        puStack_14 = (undefined2 *)0xd8c2;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        puStack_14 = (undefined2 *)0xd8c7;
        func_0x00029d78();
        iStack_1a = 0x22b2;
        iStack_1c = 0xd8d1;
        func_0x000299d1();
        iStack_1a = 0x22b2;
        iStack_1c = 0xd8da;
        func_0x000297e6();
        iStack_1a = 0x22b2;
        iStack_1c = -0x2721;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xd8e9;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0xd8f2;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0xd8f7;
        func_0x00029d78();
        func_0x000299d1();
        puVar14 = (undefined2 *)0x1bb4;
        func_0x0001e18f();
      }
      else {
        piStack_c = (int *)0xd915;
        func_0x00012276();
        piStack_c = (int *)0x11f2;
        piStack_e = (int *)0xd923;
        FUN_1000_0599();
        piStack_c = (undefined2 *)0xdef;
        puVar14 = (undefined2 *)0x11f2;
        piStack_e = (undefined2 *)0xd933;
        func_0x00012276();
      }
      goto LAB_3ab8_1f79;
    }
    if (local_a3e == 2) {
      puVar14 = (undefined2 *)0x2ab8;
      piStack_c = (undefined2 *)0xd94e;
      FUN_2bb4_6c4a();
      if ((param_1 != 0) && (*(int *)0xc18 != 0)) {
        *(undefined2 *)0xc18 = 0;
        goto LAB_2bb4_45c4;
      }
    }
    if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
    if (local_a3e == 3) {
      piStack_e = (int *)0xd990;
      piStack_c = puVar14;
      FUN_21f2_3454();
      if (*(int *)0x1170 == 0) {
        piStack_c = (undefined2 *)0x22b2;
        piStack_e = (int *)0xd9aa;
        FUN_21f2_3454();
      }
      if (*(int *)0x1170 == 1) {
        piStack_c = (undefined2 *)0x22b2;
        piStack_e = (int *)0xd9c4;
        FUN_21f2_3454();
      }
      if (*(int *)0x1170 == 2) {
        piStack_c = (undefined2 *)0x22b2;
        piStack_e = (int *)0xd9de;
        FUN_21f2_3454();
      }
      local_484 = *(undefined2 *)0xa5e4;
      local_482 = *(undefined2 *)0xa5e6;
      local_480 = *(undefined2 *)0xa5e8;
      local_47e = *(undefined2 *)0xa5ea;
      local_a3a = *(undefined2 *)0xa5e4;
      local_a38 = *(undefined2 *)0xa5e6;
      local_a36 = *(undefined2 *)0xa5e8;
      local_a34 = *(undefined2 *)0xa5ea;
      local_47c = 0;
      puVar14 = (undefined2 *)0x1b6e;
      FUN_1885_2ec3();
      local_142[1] = 0;
      local_142[0] = 0;
      do {
        do {
          while( true ) {
            piStack_e = (int *)0xda1e;
            piStack_c = puVar14;
            func_0x00024c86();
            piStack_c = (int *)0x22b2;
            piStack_e = (int *)0xda2e;
            FUN_21f2_2d26();
            piStack_c = (int *)0x22b2;
            piStack_e = (int *)0xda3e;
            FUN_21f2_2d26();
            piStack_c = (int *)0x22b2;
            piStack_e = (int *)0xda4e;
            FUN_21f2_2d26();
            *(undefined2 *)0xc1a = 1;
            *(undefined2 *)0xc20 = 1;
            *(undefined2 *)0xc2c = 1;
            if (*(int *)0xa62 == 0x1b) {
              *(undefined2 *)0xc1a = 0;
            }
            piStack_c = &local_c10;
            piStack_e = local_a22;
            piStack_10 = (int *)0x1;
            uStack_12 = 0x22b2;
            puStack_14 = (undefined2 *)0xda89;
            local_af4 = FUN_1def_0904();
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            *(undefined2 *)0xc2c = 0;
            piStack_c = (int *)0x1bb4;
            piStack_e = (int *)0xdaa9;
            FUN_1000_0599();
            func_0x00010526();
            piStack_c = (undefined2 *)0xdef;
            piStack_e = (undefined2 *)0xdabd;
            FUN_1000_0599();
            puVar14 = (undefined2 *)0xdef;
            func_0x00010526();
            if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
            if (*(int *)0xc18 == 0) break;
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xdaf3;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xdafc;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xdb01;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            iStack_1a = 0xdb0b;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            puVar14 = (undefined2 *)0x3bf;
            iStack_1a = -0x24f0;
            func_0x0000507a();
          }
          if ((local_af4 == -1) || (local_af4 == 0x14)) goto LAB_3ab8_1bb7;
        } while (local_856 == (undefined2 *)0x0);
        piStack_c = local_856;
        piStack_e = (int *)0xdef;
        puVar14 = (undefined2 *)0x11f2;
        piStack_10 = (int *)0xdb4a;
        iVar10 = func_0x00015409();
      } while (iVar10 == 0);
      local_47c = 1;
      local_5c4[2] = local_c10;
      local_5c4[3] = local_c0e;
      local_84e[2] = local_3d2;
      local_84e[3] = local_3d0;
      local_142[3] = 0;
      local_142[2] = 0;
LAB_3ab8_300b:
      piStack_e = (int *)0xdb9a;
      piStack_c = puVar14;
      func_0x00024c86();
      piStack_c = local_a22;
      piStack_e = (int *)0x22b2;
      piStack_10 = (int *)0xdbad;
      func_0x0002c57b();
      piStack_c = (int *)0x2ab8;
      piStack_e = (int *)0xdbc1;
      func_0x00029834();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xdbc6;
      func_0x00029ae7();
      puStack_14 = (undefined2 *)0x22b2;
      puStack_16 = (undefined2 *)0xdbd0;
      func_0x000299d1();
      puStack_14 = (undefined2 *)local_a78;
      puStack_16 = (undefined2 *)0x22b2;
      uVar13 = 0x1bb4;
      uStack_18 = 0xdbda;
      iVar10 = func_0x0002267f();
      if (iVar10 == 0) {
        piStack_c = (int *)0x1bb4;
        uVar13 = 0x22b2;
        piStack_e = (int *)0xdbf4;
        FUN_21f2_3454();
      }
      piStack_e = (int *)0xdc07;
      piStack_c = (int *)uVar13;
      func_0x00029834();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xdc0c;
      func_0x00029ae7();
      puStack_14 = (undefined2 *)0x22b2;
      puStack_16 = (undefined2 *)0xdc16;
      func_0x000299d1();
      puStack_14 = (undefined2 *)local_ae2;
      puStack_16 = (undefined2 *)0x22b2;
      uVar13 = 0x1bb4;
      uStack_18 = 0xdc20;
      iVar10 = func_0x0002267f();
      if (iVar10 == 0) {
        piStack_c = (int *)0x1bb4;
        uVar13 = 0x22b2;
        piStack_e = (int *)0xdc3a;
        FUN_21f2_3454();
      }
      piStack_c = local_996;
      piStack_e = local_704;
      piStack_10 = local_142;
      uStack_12 = local_47c;
      uVar15 = 0x2ab8;
      puStack_16 = (undefined2 *)0xdc5e;
      puStack_14 = (undefined2 *)uVar13;
      FUN_28b3_2a41();
      if (1 < (int)local_47c) {
        piStack_c = (int *)0x2ab8;
        piStack_e = (int *)0xdc78;
        FUN_1000_0599();
        piStack_c = (int *)local_ab0;
        piStack_e = (int *)0x694f;
        piStack_10 = (int *)0xdef;
        uStack_12 = 0xdc92;
        func_0x00012276();
        piStack_c = (int *)0x695e;
        piStack_e = (int *)local_b5a;
        piStack_10 = (int *)0x11f2;
        uStack_12 = 0xdcad;
        FUN_21f2_3454();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xdcbd;
        FUN_1000_0599();
        piStack_c = (int *)local_ab0;
        piStack_e = (int *)0x6964;
        piStack_10 = (int *)0xdef;
        uStack_12 = 0xdcd7;
        func_0x00012276();
        local_3d4 = *(undefined2 *)0xa6c;
        *(undefined2 *)0xa6c = 3;
        piStack_c = (int *)0xdcfc;
        func_0x000297e6();
        piStack_c = (int *)0xdd01;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        puStack_14 = (undefined2 *)0xdd0b;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        puStack_14 = (undefined2 *)0xdd14;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        puStack_14 = (undefined2 *)0xdd19;
        func_0x00029d78();
        iStack_1a = 0x22b2;
        iStack_1c = 0xdd23;
        func_0x000299d1();
        iStack_1a = 0x22b2;
        iStack_1c = 0xdd2c;
        func_0x000297e6();
        iStack_1a = 0x22b2;
        iStack_1c = -0x22cf;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xdd3b;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0xdd44;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0xdd49;
        func_0x00029d78();
        func_0x000299d1();
        uVar15 = 0x1bb4;
        func_0x0001e18f();
        *(undefined2 *)0xa6c = local_3d4;
      }
      local_bce[0] = 0;
      *(undefined2 *)0xc1a = 1;
      *(undefined2 *)0xc20 = 1;
      if (*(int *)0xa62 == 0x1b) {
        *(undefined2 *)0xc1a = 0;
      }
      piStack_c = &local_3ce;
      piStack_e = local_a22;
      piStack_10 = (int *)0x270f;
      puStack_14 = (undefined2 *)0xdd9d;
      uStack_12 = uVar15;
      local_af4 = FUN_1def_0904();
      *(undefined2 *)0xc1a = 0;
      *(undefined2 *)0xc20 = 0;
      FUN_1885_2ec3();
      func_0x00013e19();
      piStack_c = (int *)0x11f2;
      piStack_e = (int *)0xddc4;
      FUN_1000_0599();
      func_0x00010526();
      piStack_c = (undefined2 *)0xdef;
      piStack_e = (undefined2 *)0xddd8;
      FUN_1000_0599();
      puVar14 = (undefined2 *)0xdef;
      func_0x00010526();
      if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
      if (*(int *)0xc18 != 0) {
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xde0e;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xde17;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xde1c;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        iStack_1a = 0xde26;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        iStack_1a = -0x21d5;
        func_0x0000507a();
        puVar14 = (undefined2 *)0x3bf;
        goto LAB_3ab8_300b;
      }
      if (local_af4 == -1) {
        if ((int)local_47c < 2) goto LAB_3ab8_1f18;
        local_a3a = *(undefined2 *)0xa5e4;
        local_a38 = *(undefined2 *)0xa5e6;
        local_a36 = *(undefined2 *)0xa5e8;
        local_a34 = *(undefined2 *)0xa5ea;
        local_856 = (undefined2 *)0x0;
        local_47c = local_47c - 1;
        local_484 = auStack_3c2[local_47c * 4];
        local_482 = auStack_3c2[local_47c * 4 + 1];
        local_480 = auStack_3c2[local_47c * 4 + 2];
        local_47e = auStack_3c2[local_47c * 4 + 3];
        for (local_a3c = 1; local_a3c <= (int)local_47c; local_a3c = local_a3c + 1) {
          if (local_142[local_a3c * 2 + 1] != 0 || local_142[local_a3c * 2] != 0) {
            func_0x00029834();
            piStack_c = (undefined2 *)0xdebf;
            func_0x00029c74();
            puVar14 = (undefined2 *)0x22b2;
            func_0x000299d1();
          }
        }
      }
      if (local_af4 == 0x14) goto LAB_3ab8_1bb7;
      if ((param_1 != 0) && (local_af4 == 1)) goto LAB_2bb4_45c4;
      if (local_af4 == 1) {
        piStack_c = (int *)local_bce;
        piStack_10 = (int *)0xdf08;
        piStack_e = puVar14;
        FUN_21f2_3454();
        piStack_c = (int *)0xdf15;
        iVar10 = func_0x00024ce4();
        if ((local_bce[iVar10 + -1] == '2') && (3 < *(byte *)0x123)) {
          local_bce[iVar10 + -1] = 0;
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xdf44;
          FUN_21f2_2d26();
        }
        piStack_c = (undefined2 *)0x0;
        piStack_e = (undefined2 *)0x22b2;
        puVar14 = (undefined2 *)0x2ab8;
        piStack_10 = (int *)0xdf58;
        FUN_28b3_26a1();
        local_bce[0] = 0;
      }
      if (local_af4 != 2) {
        puVar16 = puVar14;
        if (local_af4 != 3) goto LAB_3ab8_33fa;
        goto LAB_3ab8_3428;
      }
      goto LAB_3ab8_1f18;
    }
    if (local_a3e == 4) {
      piStack_e = (int *)0xefd3;
      piStack_c = puVar14;
      FUN_21f2_3454();
      if (*(int *)0x1170 == 0) {
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xefee;
        FUN_21f2_3454();
      }
      if (*(int *)0x1170 == 1) {
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xf009;
        FUN_21f2_3454();
      }
      puVar14 = (undefined2 *)0x22b2;
      if (*(int *)0x1170 == 2) {
        piStack_c = (int *)0x22b2;
        puVar14 = (undefined2 *)0x22b2;
        piStack_e = (int *)0xf024;
        FUN_21f2_3454();
      }
      do {
        local_47c = 0;
        do {
          do {
            while( true ) {
              piStack_e = (int *)0xf03b;
              piStack_c = puVar14;
              FUN_21f2_3454();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xf04b;
              FUN_21f2_2d26();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xf05b;
              FUN_21f2_2d26();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xf06b;
              FUN_21f2_2d26();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xf07b;
              FUN_21f2_2d26();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xf08b;
              FUN_21f2_2d26();
              *(undefined2 *)0xc1a = 1;
              *(undefined2 *)0xc20 = 1;
              *(undefined2 *)0xc2c = 1;
              if (*(int *)0xa62 == 0x1b) {
                *(undefined2 *)0xc1a = 0;
              }
              piStack_c = local_be2;
              piStack_e = local_a22;
              piStack_10 = (int *)0x0;
              uStack_12 = 0x22b2;
              puVar14 = (undefined2 *)0x1bb4;
              puStack_14 = (undefined2 *)0xf0c6;
              local_af4 = FUN_1def_0904();
              *(undefined2 *)0xc1a = 0;
              *(undefined2 *)0xc20 = 0;
              *(undefined2 *)0xc2c = 0;
              if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
              if (*(int *)0xc18 == 0) break;
              func_0x000297e6();
              func_0x00029d78();
              piStack_10 = (int *)0x22b2;
              uStack_12 = 0xf108;
              func_0x000299d1();
              piStack_10 = (int *)0x22b2;
              uStack_12 = 0xf111;
              func_0x000297e6();
              piStack_10 = (int *)0x22b2;
              uStack_12 = 0xf116;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              iStack_1a = 0xf120;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              puVar14 = (undefined2 *)0x3bf;
              iStack_1a = -0xedb;
              func_0x0000507a();
            }
            if (local_af4 == 0x14) goto LAB_3ab8_1bb7;
          } while (local_856 == (undefined2 *)0x0);
          piStack_c = local_856;
          piStack_e = (undefined2 *)0x1bb4;
          puVar14 = (undefined2 *)0x11f2;
          piStack_10 = (int *)0xf155;
          iVar10 = func_0x00015409();
        } while (iVar10 == 0);
LAB_3ab8_45e6:
        while( true ) {
          piStack_c = (int *)0xf170;
          FUN_28b3_2b81();
          piStack_c = (int *)0x2ab8;
          piStack_e = (int *)0xf180;
          FUN_21f2_3454();
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xf190;
          FUN_21f2_2d26();
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xf1a0;
          FUN_21f2_2d26();
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xf1b1;
          FUN_21f2_2d26();
          if (local_47c != 0) {
            piStack_c = (int *)0x22b2;
            piStack_e = (int *)0xf1cb;
            FUN_21f2_2d26();
            if (param_1 == 0) {
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xf1e4;
              FUN_21f2_2d26();
            }
            else {
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xf1f7;
              FUN_21f2_2d26();
            }
            if (*(char *)0x124 != '\0') {
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xf211;
              FUN_21f2_2d26();
            }
            piStack_c = (int *)0x22b2;
            piStack_e = (int *)0xf242;
            FUN_1000_0599();
            piStack_c = (int *)0xf24e;
            func_0x00012276();
            piStack_c = (int *)0x11f2;
            piStack_e = (int *)0xf25c;
            FUN_1000_0599();
            piStack_c = (int *)0x69b9;
            piStack_e = (int *)0xdef;
            piStack_10 = (int *)0xf271;
            func_0x00012276();
            piStack_c = (int *)0x11f2;
            piStack_e = (int *)0xf281;
            FUN_1000_0599();
            piStack_c = (int *)0x69c3;
            piStack_e = (int *)0xdef;
            piStack_10 = (int *)0xf296;
            func_0x00012276();
            piStack_c = (int *)0x69cd;
            piStack_e = (int *)local_b5a;
            piStack_10 = (int *)0x11f2;
            uStack_12 = 0xf2b1;
            FUN_21f2_3454();
            piStack_c = (int *)0x69d2;
            piStack_e = (int *)local_bce;
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xf2cc;
            FUN_21f2_3454();
            if (*(char *)0x134 != '\0') {
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xf2e8;
              FUN_21f2_3454();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xf2f9;
              FUN_21f2_3454();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xf30a;
              FUN_21f2_3454();
            }
          }
          *(undefined2 *)0xc1a = 1;
          *(undefined2 *)0xc20 = 1;
          *(undefined2 *)0xc2c = 1;
          if (*(int *)0xa62 == 0x1b) {
            *(undefined2 *)0xc1a = 0;
          }
          piStack_c = &local_c10;
          piStack_e = local_a22;
          piStack_10 = (int *)0x1;
          uStack_12 = 0x22b2;
          puStack_14 = (undefined2 *)0xf345;
          local_af4 = FUN_1def_0904();
          *(undefined2 *)0xc1a = 0;
          *(undefined2 *)0xc20 = 0;
          *(undefined2 *)0xc2c = 0;
          piStack_c = (int *)0x1bb4;
          piStack_e = (int *)0xf365;
          FUN_1000_0599();
          func_0x00010526();
          piStack_c = (undefined2 *)0xdef;
          piStack_e = (undefined2 *)0xf379;
          FUN_1000_0599();
          puVar14 = (undefined2 *)0xdef;
          func_0x00010526();
          if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
          if (*(int *)0xc18 == 0) break;
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xf3af;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xf3b8;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xf3bd;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          iStack_1a = 0xf3c7;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          iStack_1a = -0xc34;
          func_0x0000507a();
        }
      } while (local_af4 == -1);
      if ((local_af4 == 1) && (param_1 != 0)) goto LAB_2bb4_45c4;
      if ((local_af4 == 1) && (local_47c != 0)) {
        piStack_c = (undefined2 *)0x0;
        piStack_e = (undefined2 *)0xdef;
        puVar14 = (undefined2 *)0x2ab8;
        piStack_10 = (int *)0xf41c;
        FUN_28b3_26a1();
      }
      if ((local_af4 == 2) && (local_47c != 0)) {
        if (*(char *)0x134 == '\0') {
          *(undefined1 *)0x134 = 1;
        }
        else {
          *(undefined1 *)0x134 = 0;
        }
      }
      if (local_af4 == 0x14) goto LAB_3ab8_1bb7;
      if (local_856 != (undefined2 *)0x0) {
        piStack_c = local_856;
        piStack_10 = (int *)0xf474;
        piStack_e = puVar14;
        iVar10 = func_0x00015409();
        uVar17 = iVar10 == 0;
        if (!(bool)uVar17) {
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x0002996b();
          FUN_28b3_1181();
          if ((bool)uVar17) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar17) {
              piStack_c = (int *)0xf4fb;
              func_0x00012276();
              *(undefined2 *)0xc22 = 1;
              piStack_c = (int *)0x11f2;
              piStack_e = (int *)0xf50f;
              FUN_1000_0599();
              piStack_c = (int *)0xdef;
              piStack_e = (undefined2 *)0xf51f;
              func_0x00012276();
              goto LAB_3ab8_45e6;
            }
          }
          local_47c = 1;
          if (*(int *)0xcb6 != 0) {
            piStack_c = (undefined2 *)0x1;
            piStack_e = (undefined2 *)0x22b2;
            piStack_10 = (int *)0xf54a;
            FUN_1def_0338();
          }
          func_0x000297e6();
          func_0x00029b6d();
          func_0x0002996b();
          func_0x00029b6d();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x000299b9();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x000299d1();
          uVar17 = *(byte *)0x123 < 8;
          uVar18 = *(byte *)0x123 == 8;
          if (!(bool)uVar17) {
            func_0x00029834();
            func_0x00029834();
            func_0x00029ae7();
            FUN_28b3_1181();
            if ((bool)uVar17 || (bool)uVar18) {
              func_0x00029834();
              func_0x00029983();
            }
            func_0x00029834();
            func_0x00029834();
            func_0x00029ae7();
            FUN_28b3_1181();
            if ((bool)uVar17 || (bool)uVar18) {
              func_0x00029834();
              func_0x00029983();
            }
          }
          piStack_c = (int *)local_bd0;
          piStack_e = (int *)local_bd2;
          piStack_10 = (int *)local_bd4;
          uStack_12 = local_bd6;
          puStack_14 = (undefined2 *)local_a78;
          puStack_16 = (undefined2 *)0x22b2;
          puVar14 = (undefined2 *)0x1bb4;
          uStack_18 = 0xf64b;
          iVar10 = func_0x0002267f();
          if (iVar10 == 0) {
            piStack_c = (int *)0x1bb4;
            puVar14 = (undefined2 *)0x22b2;
            piStack_e = (int *)0xf665;
            FUN_21f2_3454();
          }
          piStack_c = (int *)local_bfa;
          piStack_e = local_bfc;
          piStack_10 = (int *)local_bfe;
          uStack_12 = local_c00;
          puStack_14 = (undefined2 *)local_ae2;
          uStack_18 = 0xf689;
          puStack_16 = puVar14;
          iVar10 = func_0x0002267f();
          if (iVar10 == 0) {
            piStack_c = (int *)0x1bb4;
            piStack_e = (undefined2 *)0xf6a3;
            FUN_21f2_3454();
          }
        }
      }
      goto LAB_3ab8_45e6;
    }
    local_47c = 0;
    if (local_a3e != 5) goto LAB_2bb4_45c4;
    piStack_e = (int *)0xf6c9;
    piStack_c = puVar14;
    FUN_21f2_3454();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xf6d9;
    FUN_21f2_3454();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xf6e9;
    FUN_21f2_3454();
    piStack_c = (int *)0x22b2;
    uVar13 = 0x22b2;
    piStack_e = (int *)0xf6f9;
    FUN_21f2_3454();
    goto LAB_3ab8_4b7b;
  }
LAB_2bb4_45c4:
  while( true ) {
    FUN_32b2_6d14();
    piStack_c = (int *)0x3ff;
    FUN_32b2_7154();
    FUN_32b2_6eb1();
    piVar9 = piStack_c;
    piVar8 = piStack_e;
    uStack_48 = 0x405;
    piStack_c = (int *)uStack_bc;
    piStack_e = (int *)uStack_be;
    piStack_10 = (int *)0x32b2;
    uStack_12 = 0x119;
    puStack_44 = unaff_SI;
    uStack_42 = unaff_DI;
    FUN_32b2_75fe();
    piStack_c = (int *)0x123;
    FUN_32b2_6d14();
    piStack_c = (int *)0x12b;
    FUN_32b2_704d();
    piStack_c = (int *)0x133;
    FUN_32b2_7095();
    piStack_c = (int *)0x13b;
    FUN_32b2_6eb1();
    piStack_c = (int *)uStack_ba;
    piStack_e = (int *)uStack_bc;
    piStack_10 = (int *)uStack_be;
    uStack_12 = 0x32b2;
    puStack_14 = (undefined2 *)0x150;
    FUN_32b2_75ec();
    uVar17 = &stack0x0000 == (undefined1 *)0xa;
    piStack_c = (int *)0x32b2;
    piStack_e = (int *)0x15a;
    FUN_32b2_6d14();
    piStack_c = (int *)0x32b2;
    piStack_e = (int *)0x162;
    FUN_32b2_704d();
    piStack_c = (int *)0x32b2;
    piStack_e = (int *)0x16a;
    FUN_32b2_7095();
    piStack_c = (int *)0x32b2;
    piStack_e = (int *)0x173;
    FUN_32b2_6eb1();
    piStack_c = (int *)0x32b2;
    piStack_e = (int *)0x17b;
    FUN_32b2_6cc6();
    piStack_c = (int *)0x32b2;
    piStack_e = (int *)0x183;
    FUN_32b2_6cc6();
    piStack_c = (int *)0x32b2;
    piStack_e = (int *)0x188;
    FUN_32b2_7191();
    if ((bool)uVar17) {
      piStack_c = (int *)0x32b2;
      piStack_e = (int *)0x192;
      FUN_32b2_6cc6();
      piStack_c = (int *)0x32b2;
      piStack_e = (int *)0x19a;
      FUN_32b2_6cc6();
      piStack_c = (int *)0x32b2;
      piStack_e = (int *)0x19f;
      FUN_32b2_7191();
      if ((bool)uVar17) {
        return 0;
      }
    }
    piStack_c = (int *)auStack_aa;
    piStack_e = &uStack_1e;
    piStack_10 = (int *)uStack_7e;
    uStack_12 = uStack_80;
    puStack_14 = (undefined2 *)puStack_82;
    puStack_16 = puStack_84;
    uStack_18 = uStack_5a;
    iStack_1a = uStack_5c;
    iStack_1c = iStack_5e;
    uStack_1e = uStack_60;
    uStack_20 = 0x32b2;
    uStack_22 = 0x1d0;
    FUN_32b2_6cc6();
    uStack_20 = 0x32b2;
    uStack_22 = 0x1d5;
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    uStack_30 = 0x32b2;
    uStack_32 = 0x1f6;
    FUN_32b2_6eb1();
    uStack_30 = 0x32b2;
    uStack_32 = 0x1fa;
    iVar10 = FUN_3ab8_4fbd();
    if (iVar10 == 0) break;
    piStack_c = (int *)0x32b2;
    piStack_e = (int *)0x209;
    FUN_32b2_6cc6();
    piStack_c = (int *)0x32b2;
    piStack_e = (int *)0x20e;
    FUN_32b2_7258();
    piStack_c = (int *)0x32b2;
    piStack_e = (int *)0x216;
    FUN_32b2_6e99();
    piStack_c = (int *)0x32b2;
    piStack_e = (int *)0x21e;
    FUN_32b2_6ef9();
    piStack_c = (int *)auStack_b6;
    piStack_e = (int *)auStack_a6;
    piStack_10 = (int *)0x32b2;
    uStack_12 = 0x231;
    FUN_32b2_6cc6();
    piStack_10 = (int *)0x32b2;
    uStack_12 = 0x236;
    FUN_32b2_7258();
    uStack_18 = 0x32b2;
    iStack_1a = 0x240;
    FUN_32b2_6eb1();
    uStack_18 = 0x32b2;
    iStack_1a = 0x248;
    FUN_32b2_6cc6();
    uStack_18 = 0x32b2;
    iStack_1a = 0x24d;
    FUN_32b2_7258();
    uStack_20 = 0x32b2;
    uStack_22 = 599;
    FUN_32b2_6eb1();
    uStack_20 = 0x32b2;
    uStack_22 = 0x25f;
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
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
    puStack_44 = (undefined2 *)0x2be;
    FUN_3ab8_5089();
    piStack_c = auStack_e6;
    piStack_e = auStack_d2;
    piStack_10 = (int *)0x32b2;
    uStack_12 = 0x2d4;
    FUN_32b2_6cc6();
    piStack_10 = (int *)0x32b2;
    uStack_12 = 0x2d9;
    FUN_32b2_7258();
    uStack_18 = 0x32b2;
    iStack_1a = 0x2e3;
    FUN_32b2_6eb1();
    uStack_18 = 0x32b2;
    iStack_1a = 0x2eb;
    FUN_32b2_6cc6();
    uStack_18 = 0x32b2;
    iStack_1a = 0x2f0;
    FUN_32b2_7258();
    uStack_20 = 0x32b2;
    uStack_22 = 0x2fa;
    FUN_32b2_6eb1();
    uStack_20 = 0x32b2;
    uStack_22 = 0x302;
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
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
    puStack_44 = (undefined2 *)0x354;
    FUN_3ab8_5089();
    uVar17 = (undefined1 *)0xffc9 < &uStack_3c;
    uVar18 = &stack0x0000 == (undefined1 *)0x6;
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
    unaff_SI = piVar8;
    unaff_DI = piVar9;
    if (!(bool)uVar17 && !(bool)uVar18) {
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_7191();
      if (!(bool)uVar18) {
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
        piStack_c = (int *)0x32b2;
        piStack_e = (int *)0x5db;
        FUN_32b2_6cc6();
        piStack_c = (int *)0x32b2;
        piStack_e = (int *)0x5e0;
        FUN_32b2_7258();
        puStack_14 = (undefined2 *)0x32b2;
        puStack_16 = (undefined2 *)0x5ea;
        FUN_32b2_6eb1();
        puStack_14 = (undefined2 *)0x32b2;
        puStack_16 = (undefined2 *)0x5f2;
        FUN_32b2_6cc6();
        puStack_14 = (undefined2 *)0x32b2;
        puStack_16 = (undefined2 *)0x5f7;
        FUN_32b2_7258();
        iStack_1c = 0x32b2;
        uStack_1e = 0x601;
        FUN_32b2_6eb1();
        iStack_1c = uStack_66;
        uStack_1e = uStack_68;
        uStack_20 = uStack_6a;
        uStack_22 = uStack_6c;
        uStack_24 = uStack_4a;
        uStack_26 = uStack_4c;
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
        FUN_3ab8_5089();
        iStack_88 = iStack_64;
        iStack_86 = iStack_62;
        uStack_a0 = uStack_8c;
        uStack_9e = uStack_8a;
        puVar16 = (undefined2 *)&stack0xffd6;
        puVar14 = (undefined2 *)&stack0x001a;
        for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar2 = puVar16;
          puVar16 = puVar16 + 1;
          puVar20 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar20;
        }
        uStack_2e = 0x684;
        iVar10 = FUN_3ab8_522f();
        uVar17 = 0;
        uVar18 = iVar10 == 0;
        if (!(bool)uVar18) {
          FUN_32b2_6d14();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_7258();
          FUN_32b2_7191();
          if ((bool)uVar17 || (bool)uVar18) {
            FUN_32b2_6d14();
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar17 || (bool)uVar18) {
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
        if (!(bool)uVar17) {
          FUN_32b2_6d14();
          FUN_32b2_6fc7();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_7191();
          if (!(bool)uVar17) {
            uStack_be = *(undefined2 *)0x93c0;
            uStack_bc = *(undefined2 *)0x93c2;
            uStack_ba = *(undefined2 *)0x93c4;
            uStack_b8 = *(undefined2 *)0x93c6;
          }
          piStack_c = (int *)uStack_bc;
          piStack_e = (int *)uStack_be;
          piStack_10 = (int *)0x32b2;
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
          piStack_c = &iStack_64;
          piStack_e = (int *)0x32b2;
          piStack_10 = (int *)0x7d9;
          FUN_32b2_6cc6();
          piStack_e = (int *)0x32b2;
          piStack_10 = (int *)0x7de;
          FUN_32b2_7258();
          puStack_16 = (undefined2 *)0x32b2;
          uStack_18 = 0x7e8;
          FUN_32b2_6eb1();
          puStack_16 = (undefined2 *)0x32b2;
          uStack_18 = 0x7f0;
          FUN_32b2_6cc6();
          puStack_16 = (undefined2 *)0x32b2;
          uStack_18 = 0x7f5;
          FUN_32b2_7258();
          uStack_1e = 0x32b2;
          uStack_20 = 0x7ff;
          FUN_32b2_6eb1();
          uStack_1e = uStack_66;
          uStack_20 = uStack_68;
          uStack_22 = uStack_6a;
          uStack_24 = uStack_6c;
          uStack_26 = uStack_4a;
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
          uStack_42 = 0x844;
          FUN_3ab8_5089();
          uVar17 = (undefined1 *)0xffc9 < &uStack_3e;
          uVar18 = &stack0x0000 == (undefined1 *)0x8;
          piStack_c = (int *)0x84f;
          FUN_32b2_6cc6();
          piStack_c = (int *)0x857;
          FUN_32b2_6cc6();
          piStack_c = (int *)0x85c;
          FUN_32b2_7191();
          if ((bool)uVar18) {
            iStack_64 = param_1;
            iStack_62 = param_2;
          }
          piStack_c = (int *)0x872;
          FUN_32b2_6cc6();
          piStack_c = (int *)0x87a;
          FUN_32b2_6cc6();
          piStack_c = (int *)0x87f;
          FUN_32b2_7191();
          if ((bool)uVar18) {
            uStack_8c = param_3;
            uStack_8a = param_4;
          }
          *in_stack_0000003a = iStack_64;
          in_stack_0000003a[1] = iStack_62;
          *in_stack_0000003c = uStack_8c;
          in_stack_0000003c[1] = uStack_8a;
          *in_stack_0000003e = iStack_64;
          in_stack_0000003e[1] = iStack_62;
          *in_stack_00000040 = uStack_8c;
          in_stack_00000040[1] = uStack_8a;
          iStack_38 = iStack_38 + 1;
          uVar18 = iStack_38 == 0;
          piStack_c = (int *)0x8d7;
          FUN_32b2_6d14();
          piStack_c = (int *)0x8e0;
          FUN_32b2_6d14();
          piStack_c = (int *)0x8e5;
          FUN_32b2_7191();
          if (!(bool)uVar17 && !(bool)uVar18) {
            piStack_c = (int *)uStack_ba;
            piStack_e = (int *)uStack_bc;
            piStack_10 = (int *)uStack_be;
            uStack_12 = 0x32b2;
            puStack_14 = (undefined2 *)0x8ff;
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
            piStack_e = &iStack_64;
            piStack_10 = (int *)0x32b2;
            uStack_12 = 0x969;
            FUN_32b2_6cc6();
            piStack_10 = (int *)0x32b2;
            uStack_12 = 0x96e;
            FUN_32b2_7258();
            uStack_18 = 0x32b2;
            iStack_1a = 0x978;
            FUN_32b2_6eb1();
            uStack_18 = 0x32b2;
            iStack_1a = 0x980;
            FUN_32b2_6cc6();
            uStack_18 = 0x32b2;
            iStack_1a = 0x985;
            FUN_32b2_7258();
            uStack_20 = 0x32b2;
            uStack_22 = 0x98f;
            FUN_32b2_6eb1();
            uStack_20 = uStack_66;
            uStack_22 = uStack_68;
            uStack_24 = uStack_6a;
            uStack_26 = uStack_6c;
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
            puStack_44 = (undefined2 *)0x9d4;
            FUN_3ab8_5089();
            uVar17 = &stack0x0000 == (undefined1 *)0xa;
            piStack_c = (int *)0x32b2;
            piStack_e = (int *)0x9df;
            FUN_32b2_6cc6();
            piStack_c = (int *)0x32b2;
            piStack_e = (int *)0x9e7;
            FUN_32b2_6cc6();
            piStack_c = (int *)0x32b2;
            piStack_e = (int *)0x9ec;
            FUN_32b2_7191();
            if ((bool)uVar17) {
              iStack_64 = param_1;
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
            if ((bool)uVar17) {
              uStack_8c = param_3;
              uStack_8a = param_4;
            }
            *in_stack_0000003e = iStack_64;
            in_stack_0000003e[1] = iStack_62;
            *in_stack_00000040 = uStack_8c;
            in_stack_00000040[1] = uStack_8a;
            return iStack_38 + 1;
          }
          return iStack_38;
        }
      }
      return 0;
    }
  }
  return 0;
LAB_3ab8_1f18:
  local_47c = 0;
  goto LAB_3ab8_1f1e;
LAB_3ab8_33fa:
  if (local_856 != (undefined2 *)0x0) {
    piStack_c = local_856;
    puVar16 = (undefined2 *)0x11f2;
    piStack_10 = (int *)0xdf97;
    piStack_e = puVar14;
    iVar10 = func_0x00015409();
    puVar14 = puVar16;
    if (iVar10 != 0) {
LAB_3ab8_3428:
      if ((local_af4 == 3) && ((int)local_47c < local_3de)) {
        while( true ) {
          piStack_c = local_a22;
          piStack_10 = (int *)0xdfd1;
          piStack_e = puVar16;
          FUN_21f2_3454();
          piStack_c = local_996;
          piStack_e = local_704;
          piStack_10 = local_142;
          uStack_12 = local_47c;
          puStack_14 = (undefined2 *)0x22b2;
          puStack_16 = (undefined2 *)0xdff6;
          FUN_28b3_2a41();
          local_3d4 = *(undefined2 *)0xa6c;
          *(undefined2 *)0xa6c = 3;
          piStack_c = (int *)0xe01b;
          func_0x000297e6();
          piStack_c = (int *)0xe020;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          puStack_14 = (undefined2 *)0xe02a;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          puStack_14 = (undefined2 *)0xe033;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          puStack_14 = (undefined2 *)0xe038;
          func_0x00029d78();
          iStack_1a = 0x22b2;
          iStack_1c = 0xe042;
          func_0x000299d1();
          iStack_1a = 0x22b2;
          iStack_1c = 0xe04b;
          func_0x000297e6();
          iStack_1a = 0x22b2;
          iStack_1c = -0x1fb0;
          func_0x00029d78();
          uStack_22 = 0x22b2;
          uStack_24 = 0xe05a;
          func_0x000299d1();
          uStack_22 = 0x22b2;
          uStack_24 = 0xe063;
          func_0x000297e6();
          uStack_22 = 0x22b2;
          uStack_24 = 0xe068;
          func_0x00029d78();
          func_0x000299d1();
          func_0x0001e18f();
          *(undefined2 *)0xa6c = local_3d4;
          piStack_c = &local_c10;
          piStack_e = local_a22;
          piStack_10 = (int *)0x1;
          uStack_12 = 0x1bb4;
          puStack_14 = (undefined2 *)0xe09e;
          iVar10 = FUN_1def_0904();
          if (*(int *)0x158 != 0) {
            FUN_1885_2ec3();
            goto LAB_2bb4_45c4;
          }
          puVar14 = (undefined2 *)0x1bb4;
          if (iVar10 == -1) break;
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xe0dc;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xe0e5;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xe0ea;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          iStack_1a = 0xe0f4;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          iStack_1a = -0x1f07;
          lVar19 = FUN_13bf_39a0();
          local_852 = lVar19;
          if (lVar19 < 0) {
            piStack_c = (undefined2 *)0x11f2;
            piStack_e = (undefined2 *)0xe135;
            puVar20 = (undefined2 *)func_0x00000271();
            puVar16 = (undefined2 *)puVar20;
            puVar14 = local_406;
            for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar3 = puVar14;
              puVar14 = puVar14 + 1;
              puVar2 = puVar16;
              puVar16 = puVar16 + 1;
              *puVar3 = *puVar2;
            }
            uVar17 = (local_47c & 0x3fff) == 0;
            func_0x000297e6();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x000297e6();
            func_0x0002996b();
            FUN_28b3_1181();
            if ((bool)uVar17) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar17) goto LAB_3ab8_3638;
              puVar16 = (undefined2 *)0x11f2;
              piStack_c = (int *)0xe1b4;
              func_0x00012276();
            }
            else {
LAB_3ab8_3638:
              func_0x00013e19();
              local_3ec = 2;
              local_3eb = 9;
              puVar16 = &uStack_26;
              puVar14 = local_406;
              for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
                puVar2 = puVar16;
                puVar16 = puVar16 + 1;
                puVar20 = puVar14;
                puVar14 = puVar14 + 1;
                *puVar2 = *puVar20;
              }
              func_0x00013e46();
              piStack_c = local_996;
              piStack_e = local_704;
              piStack_10 = local_142;
              uStack_12 = -local_47c;
              puStack_14 = (undefined2 *)0x11f2;
              puStack_16 = (undefined2 *)0xe204;
              FUN_28b3_2a41();
              local_3d4 = *(undefined2 *)0xa6c;
              *(undefined2 *)0xa6c = 3;
              piStack_c = (int *)0xe229;
              func_0x000297e6();
              piStack_c = (int *)0xe22e;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              puStack_14 = (undefined2 *)0xe238;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              puStack_14 = (undefined2 *)0xe241;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              puStack_14 = (undefined2 *)0xe246;
              func_0x00029d78();
              iStack_1a = 0x22b2;
              iStack_1c = 0xe250;
              func_0x000299d1();
              iStack_1a = 0x22b2;
              iStack_1c = 0xe259;
              func_0x000297e6();
              iStack_1a = 0x22b2;
              iStack_1c = -0x1da2;
              func_0x00029d78();
              uStack_22 = 0x22b2;
              uStack_24 = 0xe268;
              func_0x000299d1();
              uStack_22 = 0x22b2;
              uStack_24 = 0xe271;
              func_0x000297e6();
              uStack_22 = 0x22b2;
              uStack_24 = 0xe276;
              func_0x00029d78();
              func_0x000299d1();
              func_0x0001e18f();
              *(undefined2 *)0xa6c = local_3d4;
              piStack_c = (int *)0x697d;
              piStack_e = local_a22;
              piStack_10 = (int *)0x1bb4;
              uStack_12 = 0xe2a5;
              FUN_21f2_3454();
              *(undefined2 *)0xc20 = 1;
              piStack_c = &local_3ce;
              piStack_e = local_a22;
              piStack_10 = (int *)0x270f;
              uStack_12 = 0x22b2;
              puStack_14 = (undefined2 *)0xe2cb;
              iVar10 = FUN_1def_0904();
              *(undefined2 *)0xc20 = 0;
              puVar16 = (undefined2 *)0x11f2;
              func_0x00013e19();
              if (*(int *)0x158 != 0) {
                FUN_1885_2ec3();
                goto LAB_2bb4_45c4;
              }
              if (iVar10 != -1) {
                if (local_856 != (undefined2 *)0x0) {
                  piStack_c = local_856;
                  piStack_e = (undefined2 *)0x11f2;
                  piStack_10 = (int *)0xe319;
                  iVar10 = func_0x00015409();
                  uVar17 = 0;
                  uVar18 = iVar10 == 0;
                  if (!(bool)uVar18) {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar18) {
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if ((bool)uVar18) {
                        piStack_c = (undefined2 *)0xe368;
                        func_0x00012276();
                        goto LAB_3ab8_3638;
                      }
                    }
                    uVar18 = 0;
                    func_0x000297e6();
                    func_0x0002996b();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    func_0x000297e6();
                    func_0x0002996b();
                    FUN_28b3_100d();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029c9d();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029c9d();
                    FUN_28b3_1163();
                    FUN_28b3_1181();
                    if (!(bool)uVar17 && !(bool)uVar18) {
                      local_70c = local_c74;
                      local_70a = local_c72;
                      func_0x000297e6();
                      func_0x00029983();
                      local_70c = local_c8c;
                      local_70a = local_c8a;
                      func_0x000297e6();
                      func_0x00029983();
                    }
                    func_0x000297e6();
                    func_0x0002996b();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    func_0x0002996b();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    func_0x0002996b();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    func_0x0002996b();
                    FUN_28b3_0ee9();
                    if (local_3fa != 10000) {
                      func_0x00029da5();
                      func_0x00029b6d();
                      func_0x00029983();
                      puVar16 = (undefined2 *)&stack0xffd6;
                      puVar14 = local_406;
                      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
                        puVar2 = puVar16;
                        puVar16 = puVar16 + 1;
                        puVar20 = puVar14;
                        puVar14 = puVar14 + 1;
                        *puVar2 = *puVar20;
                      }
                      uStack_2e = 0xe551;
                      func_0x0001fcff();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029d78();
                      func_0x000299b9();
                      func_0x00029c2c();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029d78();
                      func_0x000299b9();
                      func_0x00029c2c();
                      FUN_28b3_117c();
                      func_0x000299b9();
                      func_0x00029c2c();
                      func_0x00029834();
                      func_0x00029c2c();
                      func_0x00029834();
                      func_0x00029c2c();
                      FUN_28b3_1163();
                      func_0x00029b85();
                      func_0x000299b9();
                      func_0x00029c2c();
                      FUN_28b3_1163();
                      func_0x000297e6();
                      func_0x00029d78();
                      FUN_28b3_117c();
                      func_0x00029983();
                      func_0x00029834();
                      func_0x00029c2c();
                      func_0x00029834();
                      func_0x00029c2c();
                      FUN_28b3_117c();
                      func_0x000297e6();
                      func_0x00029d78();
                      FUN_28b3_117c();
                      func_0x00029983();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029d78();
                      func_0x000299b9();
                      func_0x00029c2c();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029d78();
                      func_0x000299b9();
                      func_0x00029c2c();
                      FUN_28b3_117c();
                      func_0x000299b9();
                      func_0x000299d1();
                      func_0x00029834();
                      func_0x00029c2c();
                      func_0x00029834();
                      func_0x00029c2c();
                      FUN_28b3_1163();
                      func_0x00029b85();
                      func_0x000299b9();
                      func_0x000299d1();
                      func_0x00029834();
                      func_0x00029c2c();
                      func_0x00029834();
                      func_0x00029c2c();
                      FUN_28b3_1163();
                      func_0x000297e6();
                      func_0x00029d78();
                      FUN_28b3_117c();
                      func_0x00029983();
                      func_0x00029834();
                      func_0x00029c2c();
                      func_0x00029834();
                      func_0x00029c2c();
                      FUN_28b3_117c();
                      func_0x000297e6();
                      func_0x00029d78();
                      FUN_28b3_117c();
                      func_0x00029983();
                    }
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029d78();
                    piStack_10 = (int *)0x22b2;
                    uStack_12 = 0xe7cb;
                    func_0x000299d1();
                    piStack_10 = (int *)0x22b2;
                    uStack_12 = 0xe7d4;
                    func_0x000297e6();
                    piStack_10 = (int *)0x22b2;
                    uStack_12 = 0xe7dd;
                    FUN_28b3_100d();
                    piStack_10 = (int *)0x22b2;
                    uStack_12 = 0xe7e2;
                    func_0x00029d78();
                    uStack_18 = 0x22b2;
                    iStack_1a = 0xe7ec;
                    func_0x000299d1();
                    uStack_18 = 0x22b2;
                    iStack_1a = 0xe7f1;
                    puVar14 = (undefined2 *)func_0x0002a178();
                    local_c46 = *puVar14;
                    uStack_c44 = puVar14[1];
                    uStack_c42 = puVar14[2];
                    uStack_c40 = puVar14[3];
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029d78();
                    func_0x000299b9();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029d78();
                    func_0x000299b9();
                    FUN_28b3_0ee9();
                    func_0x00029834();
                    func_0x00029834();
                    piStack_10 = (int *)0x22b2;
                    uStack_12 = 0xe86c;
                    func_0x000299d1();
                    piStack_10 = (int *)0x22b2;
                    uStack_12 = 0xe875;
                    func_0x00029834();
                    uStack_18 = 0x22b2;
                    iStack_1a = 0xe87f;
                    func_0x000299d1();
                    uStack_18 = 0x22b2;
                    iStack_1a = -0x177c;
                    func_0x0002a178();
                    uVar17 = (undefined1 *)0xffef < &puStack_16;
                    uVar18 = &stack0x0000 == (undefined1 *)0x6;
                    func_0x00029834();
                    func_0x000299b9();
                    FUN_28b3_1181();
                    if (!(bool)uVar18) {
                      func_0x00029834();
                      func_0x00029834();
                      FUN_28b3_1181();
                      if ((bool)uVar17 || (bool)uVar18) {
                        func_0x00029834();
                        piStack_c = (undefined2 *)0xe8f8;
                        func_0x00029c74();
                        func_0x000299d1();
                      }
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x0002996b();
                      func_0x00029b6d();
                      func_0x00029d78();
                      func_0x000299b9();
                      func_0x00029c2c();
                      func_0x00029834();
                      func_0x00029bfc();
                      func_0x000299b9();
                      func_0x00029c9d();
                      func_0x00029c2c();
                      func_0x000299b9();
                      func_0x000299d1();
                      func_0x00029834();
                      func_0x00029ae7();
                      func_0x000299d1();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029c9d();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029c9d();
                      FUN_28b3_1163();
                      func_0x00029d78();
                      func_0x00029c2c();
                      func_0x00029b6d();
                      func_0x00029b6d();
                      func_0x00029ae7();
                      func_0x0002996b();
                      FUN_28b3_0ee9();
                      func_0x00029834();
                      func_0x00029834();
                      FUN_28b3_1181();
                      if (!(bool)uVar17 && !(bool)uVar18) {
                        func_0x000297e6();
                        func_0x00029af6();
                        func_0x00029983();
                      }
                      func_0x00029834();
                      FUN_28b3_100d();
                      func_0x00029b6d();
                      func_0x00029c2c();
                      func_0x00029c2c();
                      func_0x00029b6d();
                      func_0x000299d1();
                      func_0x000297e6();
                      local_47c = local_47c + 1;
                      func_0x0002996b();
                      func_0x0002996b();
                      FUN_28b3_0ee9();
                      func_0x000297e6();
                      func_0x0002996b();
                      func_0x0002996b();
                      FUN_28b3_0ee9();
                      if (2 < (int)local_47c) {
                        func_0x000297e6();
                        FUN_28b3_100d();
                        func_0x000297e6();
                        FUN_28b3_100d();
                        func_0x00029c9d();
                        func_0x000297e6();
                        FUN_28b3_100d();
                        func_0x000297e6();
                        FUN_28b3_100d();
                        func_0x00029c9d();
                        FUN_28b3_1163();
                        func_0x00029d78();
                        func_0x000297e6();
                        func_0x00029b6d();
                        func_0x00029d78();
                        func_0x00029c2c();
                        func_0x0002996b();
                        func_0x00029d78();
                        func_0x00029c9d();
                        func_0x00029b6d();
                        func_0x00029c2c();
                        piStack_c = (undefined2 *)0xeb91;
                        func_0x00029c74();
                        func_0x000299d1();
                      }
                      func_0x00029834();
                      piStack_c = (int *)0xebaa;
                      func_0x00029c74();
                      func_0x000299d1();
                      uVar1 = local_47c;
                      auStack_3c2[local_47c * 4] = local_484;
                      auStack_3c2[local_47c * 4 + 1] = local_482;
                      auStack_3c2[local_47c * 4 + 2] = local_480;
                      auStack_3c2[local_47c * 4 + 3] = local_47e;
                      local_142[local_47c * 2] = (int)local_852;
                      local_142[local_47c * 2 + 1] = local_852._2_2_;
                      piStack_c = (int *)0xebec;
                      func_0x000297e6();
                      piStack_c = (int *)0xebf1;
                      func_0x00029d78();
                      uStack_12 = 0x22b2;
                      puStack_14 = (undefined2 *)0xebfb;
                      func_0x000299d1();
                      uStack_12 = 0x22b2;
                      puStack_14 = (undefined2 *)0xec04;
                      func_0x000297e6();
                      uStack_12 = 0x22b2;
                      puStack_14 = (undefined2 *)0xec09;
                      func_0x00029d78();
                      iStack_1a = 0x22b2;
                      iStack_1c = 0xec13;
                      func_0x000299d1();
                      iVar10 = -(int)local_852;
                      iVar11 = -(local_852._2_2_ + (uint)((int)local_852 != 0));
                      uStack_1e = 0x22b2;
                      uStack_20 = 0xec33;
                      iStack_1c = iVar10;
                      iStack_1a = iVar11;
                      FUN_20a9_1260();
                      uVar13 = local_46c;
                      local_704[uVar1 * 2] = local_46e;
                      local_704[uVar1 * 2 + 1] = uVar13;
                      piStack_c = (int *)0xec54;
                      func_0x000297e6();
                      piStack_c = (int *)0xec59;
                      func_0x00029d78();
                      uStack_12 = 0x22b2;
                      puStack_14 = (undefined2 *)0xec63;
                      func_0x000299d1();
                      uStack_12 = 0x22b2;
                      puStack_14 = (undefined2 *)0xec6c;
                      func_0x000297e6();
                      uStack_12 = 0x22b2;
                      puStack_14 = (undefined2 *)0xec71;
                      func_0x00029d78();
                      iStack_1a = 0x22b2;
                      iStack_1c = 0xec7b;
                      func_0x000299d1();
                      uStack_1e = 0x22b2;
                      uStack_20 = 0xec88;
                      iStack_1c = iVar10;
                      iStack_1a = iVar11;
                      FUN_20a9_1260();
                      uVar13 = local_46c;
                      local_996[uVar1 * 2] = local_46e;
                      local_996[uVar1 * 2 + 1] = uVar13;
                      puVar14 = (undefined2 *)0x1bb4;
                      break;
                    }
                    piStack_c = (int *)0xe8ac;
                    func_0x00012276();
                    piStack_c = (int *)0x11f2;
                    piStack_e = (undefined2 *)0xe8ba;
                    FUN_1000_0599();
                    piStack_c = (undefined2 *)0xe8c5;
                    func_0x00012276();
                  }
                }
                goto LAB_3ab8_3638;
              }
            }
          }
          else {
            puVar16 = (undefined2 *)0x11f2;
            piStack_c = (int *)0xe11b;
            func_0x00012276();
          }
        }
        goto LAB_3ab8_300b;
      }
      uVar17 = (local_47c & 0x3fff) == 0;
      func_0x000297e6();
      func_0x00029b55();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029b55();
      func_0x0002996b();
      FUN_28b3_1181();
      if ((bool)uVar17) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar17) {
          piStack_c = (int *)0xed1c;
          func_0x00012276();
          piStack_c = (int *)0x11f2;
          piStack_e = (int *)0xed2a;
          FUN_1000_0599();
          piStack_c = (int *)0xdef;
          piStack_e = (int *)0xed3a;
          func_0x00012276();
          puVar14 = (undefined2 *)0x11f2;
          goto LAB_3ab8_300b;
        }
      }
      uVar13 = local_3cc;
      if ((int)local_47c < local_3de) {
        uVar1 = local_47c + 1;
        local_142[uVar1 * 2] = 1;
        local_142[uVar1 * 2 + 1] = 0;
        local_47c = uVar1;
        local_5c4[uVar1 * 2] = local_3ce;
        local_5c4[uVar1 * 2 + 1] = uVar13;
        uVar13 = local_3da;
        local_84e[uVar1 * 2] = local_3dc;
        local_84e[uVar1 * 2 + 1] = uVar13;
        piStack_c = (int *)0xedbd;
        func_0x000297e6();
        piStack_c = (int *)0xedc2;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        puStack_14 = (undefined2 *)0xedcc;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        puStack_14 = (undefined2 *)0xedd5;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        puStack_14 = (undefined2 *)0xedda;
        func_0x00029d78();
        iStack_1a = 0x22b2;
        iStack_1c = 0xede4;
        func_0x000299d1();
        iStack_1a = 0x22b2;
        iStack_1c = 0xeded;
        func_0x000297e6();
        iStack_1a = 0x22b2;
        iStack_1c = 0xedf6;
        func_0x0002996b();
        iStack_1a = 0x22b2;
        iStack_1c = -0x1205;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xee05;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0xee0e;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0xee17;
        func_0x0002996b();
        uStack_22 = 0x22b2;
        uStack_24 = 0xee1c;
        func_0x00029d78();
        func_0x000299d1();
        func_0x0001e18f();
        puVar14 = (undefined2 *)0x1bb4;
        if (2 < (int)local_47c) {
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029d78();
          func_0x000299b9();
          FUN_28b3_0ee9();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029d78();
          func_0x000299b9();
          FUN_28b3_0ee9();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029d78();
          func_0x000299b9();
          FUN_28b3_0ee9();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029d78();
          func_0x000299b9();
          FUN_28b3_0ee9();
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029834();
          func_0x00029c2c();
          FUN_28b3_1163();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x000299b9();
          func_0x00029c9d();
          func_0x00029c2c();
          func_0x00029c2c();
          func_0x000299b9();
          piStack_c = (int *)0xef58;
          func_0x00029c74();
          func_0x000299d1();
          func_0x00029834();
          func_0x000299d1();
          uVar17 = *(byte *)0x123 < 8;
          uVar18 = *(byte *)0x123 == 8;
          puVar14 = (undefined2 *)0x22b2;
          if (!(bool)uVar17) {
            func_0x00029834();
            func_0x00029834();
            func_0x00029ae7();
            FUN_28b3_1181();
            puVar14 = (undefined2 *)0x22b2;
            if ((bool)uVar17 || (bool)uVar18) {
              func_0x00029834();
              func_0x00029983();
              puVar14 = (undefined2 *)0x22b2;
            }
          }
        }
      }
      else {
        piStack_c = (int *)0xed55;
        func_0x00012276();
        piStack_c = (int *)0x11f2;
        piStack_e = (int *)0xed63;
        FUN_1000_0599();
        piStack_c = (int *)0xdef;
        piStack_e = (int *)0xed73;
        func_0x00012276();
        puVar14 = (undefined2 *)0x11f2;
      }
    }
  }
  goto LAB_3ab8_300b;
LAB_3ab8_4b7b:
  piStack_e = (int *)0xf709;
  piStack_c = (int *)uVar13;
  FUN_21f2_3454();
  if (param_1 != 0) {
    iVar10 = FUN_3ab8_4c9f();
    return iVar10;
  }
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf723;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf733;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf744;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf754;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf765;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf775;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf786;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf796;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf7a7;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf7b7;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf7c8;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf7d8;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf7e9;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf7f9;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf80a;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf81a;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf884;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf894;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf8a5;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf8b5;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xf8c5;
  FUN_1def_07a4();
  if (*(int *)0x6a3a == -1) {
    local_cec = 0x42;
    piStack_c = (int *)0x1bb4;
    piStack_e = (int *)0xf8e5;
    FUN_21f2_3454();
  }
  else {
    local_cec = 0x44;
    piStack_c = (int *)local_46a;
    piStack_e = (int *)0x1bb4;
    piStack_10 = (int *)0xf902;
    FUN_21f2_3454();
  }
  piStack_c = (int *)0x2;
  piStack_e = (int *)local_cec;
  piStack_10 = (int *)local_46a;
  uStack_12 = 0x22b2;
  uVar13 = 0xdef;
  puStack_14 = (undefined2 *)0xf91f;
  FUN_1000_02b5();
  if (*(int *)0x6a3c == 0) {
    local_cec = 0x48;
    piStack_c = (int *)0xdef;
    uVar13 = 0x22b2;
    piStack_e = (int *)0xf940;
    FUN_21f2_3454();
  }
  else {
    local_cec = 0x4a;
    if (*(int *)0x6a3c == 1) {
      piStack_c = (int *)0xdef;
      uVar13 = 0x22b2;
      piStack_e = (int *)0xf963;
      FUN_21f2_3454();
    }
    if (*(int *)0x6a3c == 2) {
      piStack_e = (int *)0xf97d;
      piStack_c = (int *)uVar13;
      FUN_21f2_3454();
      uVar13 = 0x22b2;
    }
  }
  if (-1 < *(int *)0x6a3a) {
    piStack_c = (int *)0x2;
    piStack_e = (int *)local_cec;
    piStack_10 = (int *)local_46a;
    puStack_14 = (undefined2 *)0xf9a3;
    uStack_12 = uVar13;
    FUN_1000_02b5();
    uVar13 = 0xdef;
  }
  if (*(int *)0xc22 == 0) {
    *(undefined2 *)0xc22 = 1;
  }
  *(undefined2 *)0xc1a = 1;
  *(undefined2 *)0xc20 = 1;
  if (*(int *)0xa62 == 0x1b) {
    *(undefined2 *)0xc1a = 0;
  }
  piStack_c = &local_c10;
  piStack_e = local_a22;
  piStack_10 = (int *)0x1;
  puStack_14 = (undefined2 *)0xf9ec;
  uStack_12 = uVar13;
  local_af4 = FUN_1def_0904();
  *(undefined2 *)0xc1a = 0;
  *(undefined2 *)0xc20 = 0;
  piStack_c = (undefined2 *)0x1bb4;
  piStack_e = (undefined2 *)0xfa09;
  FUN_1000_0599();
  uVar13 = 0xdef;
  func_0x00010526();
  if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
  if (*(int *)0xc18 == 0) {
    if (local_af4 == -1) {
      if (local_47c == 0) goto LAB_3ab8_1bb7;
      piStack_c = (int *)0xfa82;
      func_0x0000daa6();
      for (; 0 < (int)local_47c; local_47c = local_47c - 1) {
        uStack_9b2 = *(undefined2 *)0x150;
        piStack_c = (int *)0xfa9a;
        func_0x000190c7();
      }
      func_0x0000abfa();
      uVar13 = 0x885;
      piStack_c = (undefined2 *)0xfab0;
      func_0x0000b1d8();
      local_47c = 0;
    }
    if (local_af4 == 0x14) goto LAB_3ab8_1bb7;
    if ((0 < local_af4) && (local_af4 < 6)) {
      iVar10 = FUN_3ab8_4fbd();
      return iVar10;
    }
    if ((local_af4 == 6) && (*(int *)0x6a3a = *(int *)0x6a3a + 1, 3 < *(int *)0x6a3a)) {
      *(undefined2 *)0x6a3a = 0xffff;
    }
    if ((local_af4 == 7) && (*(int *)0x6a3c = *(int *)0x6a3c + 1, 2 < *(int *)0x6a3c)) {
      *(undefined2 *)0x6a3c = 0;
    }
    goto LAB_3ab8_4b7b;
  }
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xfa3f;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xfa48;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xfa4d;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  iStack_1a = 0xfa57;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uVar13 = 0x3bf;
  iStack_1a = -0x5a4;
  func_0x0000507a();
  goto LAB_3ab8_4b7b;
}



/* 3ab8:4c91  FUN_3ab8_4c91  15 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x000303ed) overlaps instruction at (ram,0x000303ec)
    */

undefined2 __cdecl16far FUN_3ab8_4c91(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int unaff_BP;
  undefined2 *puVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  undefined2 *puVar15;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  uVar11 = 0x3ab8;
  while( true ) {
    iStack_6 = 0xf81a;
    iStack_4 = uVar11;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf884;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf894;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf8a5;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf8b5;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf8c5;
    FUN_1def_07a4();
    if (*(int *)0x6a3a == -1) {
      *(undefined2 *)(unaff_BP + -0xcea) = 0x42;
      iStack_4 = 0x1bb4;
      iStack_6 = 0xf8e5;
      FUN_21f2_3454();
    }
    else {
      *(undefined2 *)(unaff_BP + -0xcea) = 0x44;
      iStack_4 = unaff_BP + -0x468;
      iStack_6 = 0x1bb4;
      iStack_8 = 0xf902;
      FUN_21f2_3454();
    }
    iStack_4 = 2;
    iStack_6 = *(undefined2 *)(unaff_BP + -0xcea);
    iStack_8 = unaff_BP + -0x468;
    iStack_a = 0x22b2;
    uVar11 = 0xdef;
    iStack_c = 0xf91f;
    FUN_1000_02b5();
    if (*(int *)0x6a3c == 0) {
      *(undefined2 *)(unaff_BP + -0xcea) = 0x48;
      iStack_4 = 0xdef;
      uVar11 = 0x22b2;
      iStack_6 = 0xf940;
      FUN_21f2_3454();
    }
    else {
      *(undefined2 *)(unaff_BP + -0xcea) = 0x4a;
      if (*(int *)0x6a3c == 1) {
        iStack_4 = 0xdef;
        uVar11 = 0x22b2;
        iStack_6 = 0xf963;
        FUN_21f2_3454();
      }
      if (*(int *)0x6a3c == 2) {
        iStack_6 = 0xf97d;
        iStack_4 = uVar11;
        FUN_21f2_3454();
        uVar11 = 0x22b2;
      }
    }
    if (-1 < *(int *)0x6a3a) {
      iStack_4 = 2;
      iStack_6 = *(undefined2 *)(unaff_BP + -0xcea);
      iStack_8 = unaff_BP + -0x468;
      iStack_c = 0xf9a3;
      iStack_a = uVar11;
      FUN_1000_02b5();
      uVar11 = 0xdef;
    }
    if (*(int *)0xc22 == 0) {
      *(undefined2 *)0xc22 = 1;
    }
    *(undefined2 *)0xc1a = 1;
    *(undefined2 *)0xc20 = 1;
    if (*(int *)0xa62 == 0x1b) {
      *(undefined2 *)0xc1a = 0;
    }
    iStack_4 = unaff_BP + -0xc0e;
    iStack_6 = unaff_BP + -0xa20;
    iStack_8 = 1;
    iStack_c = -0x614;
    iStack_a = uVar11;
    uVar11 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)0xc20 = 0;
    iStack_4 = 0x1bb4;
    iStack_6 = -0x5f7;
    FUN_1000_0599();
    uVar11 = 0xdef;
    func_0x00010526();
    if (*(int *)0x158 != 0) break;
    if (*(int *)0xc18 == 0) {
      if (*(int *)(unaff_BP + -0xaf2) == -1) {
        if (*(int *)(unaff_BP + -0x47a) != 0) {
          iStack_4 = 0xfa82;
          func_0x0000daa6();
          while (0 < *(int *)(unaff_BP + -0x47a)) {
            *(undefined2 *)(unaff_BP + -0x9b0) = *(undefined2 *)0x150;
            iStack_4 = 0xfa9a;
            func_0x000190c7();
            *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + -1;
          }
          func_0x0000abfa();
          uVar11 = 0x885;
          iStack_4 = -0x550;
          func_0x0000b1d8();
          *(undefined2 *)(unaff_BP + -0x47a) = 0;
          goto LAB_3ab8_4f37;
        }
      }
      else {
LAB_3ab8_4f37:
        if (*(int *)(unaff_BP + -0xaf2) != 0x14) {
          if (*(int *)(unaff_BP + 6) != 0) {
            if (*(int *)(unaff_BP + -0xaf2) == 1) break;
            if (*(int *)(unaff_BP + -0xaf2) < 5) goto LAB_3ab8_4b7b;
          }
          if ((0 < *(int *)(unaff_BP + -0xaf2)) && (*(int *)(unaff_BP + -0xaf2) < 6)) {
            uVar11 = FUN_3ab8_4fbd();
            return uVar11;
          }
          if ((*(int *)(unaff_BP + -0xaf2) == 6) &&
             (*(int *)0x6a3a = *(int *)0x6a3a + 1, 3 < *(int *)0x6a3a)) {
            *(undefined2 *)0x6a3a = 0xffff;
          }
          if ((*(int *)(unaff_BP + -0xaf2) == 7) &&
             (*(int *)0x6a3c = *(int *)0x6a3c + 1, 2 < *(int *)0x6a3c)) {
            *(undefined2 *)0x6a3c = 0;
          }
          goto LAB_3ab8_4b7b;
        }
      }
LAB_3ab8_1bb7:
      FUN_1885_2ec3();
      iVar5 = 0x1b6e;
      if (*(int *)0x158 == 0) {
        do {
          do {
            iStack_6 = 0xc757;
            iStack_4 = iVar5;
            FUN_21f2_3454();
            iStack_4 = 0x22b2;
            uVar11 = 0x1bb4;
            iStack_6 = 0xc767;
            FUN_1def_07a4();
            if (*(int *)(unaff_BP + -0x9ae) != 0) {
              iStack_4 = 0x1bb4;
              uVar11 = 0x22b2;
              iStack_6 = 0xc781;
              FUN_21f2_2d26();
            }
            iStack_6 = 0xc791;
            iStack_4 = uVar11;
            FUN_21f2_3454();
            if (*(int *)0x1170 == 0) {
              iStack_4 = 0x22b2;
              iStack_6 = 0xc7ac;
              FUN_21f2_2d26();
              *(undefined2 *)(unaff_BP + -0x474) = *(undefined2 *)0xa5d4;
              *(undefined2 *)(unaff_BP + -0x472) = *(undefined2 *)0xa5d6;
              *(undefined2 *)(unaff_BP + -0x470) = *(undefined2 *)0xa5d8;
              *(undefined2 *)(unaff_BP + -0x46e) = *(undefined2 *)0xa5da;
            }
            if (*(int *)0x1170 == 1) {
              iStack_4 = 0x22b2;
              iStack_6 = 0xc7d4;
              FUN_21f2_2d26();
              *(undefined2 *)(unaff_BP + -0x474) = *(undefined2 *)0xa5a0;
              *(undefined2 *)(unaff_BP + -0x472) = *(undefined2 *)0xa5a2;
              *(undefined2 *)(unaff_BP + -0x470) = *(undefined2 *)0xa5a4;
              *(undefined2 *)(unaff_BP + -0x46e) = *(undefined2 *)0xa5a6;
            }
            if (*(int *)0x1170 == 2) {
              iStack_4 = 0x22b2;
              iStack_6 = 0xc7fc;
              FUN_21f2_2d26();
              *(undefined2 *)(unaff_BP + -0x474) = *(undefined2 *)0xa5dc;
              *(undefined2 *)(unaff_BP + -0x472) = *(undefined2 *)0xa5de;
              *(undefined2 *)(unaff_BP + -0x470) = *(undefined2 *)0xa5e0;
              *(undefined2 *)(unaff_BP + -0x46e) = *(undefined2 *)0xa5e2;
            }
            uVar11 = 0x22b2;
            if (*(int *)0xc22 == 0) {
              *(undefined2 *)0xc22 = 1;
              iStack_4 = 0x22b2;
              iStack_6 = 0xc829;
              FUN_21f2_2d26();
              iStack_4 = 2;
              iStack_6 = 0x35;
              iStack_8 = unaff_BP + -0x468;
              iStack_a = 0x22b2;
              iStack_c = 0xc845;
              FUN_1000_02b5();
              iStack_4 = unaff_BP + -0x468;
              iStack_6 = 0xdef;
              iStack_8 = 0xc85a;
              FUN_21f2_3454();
              iStack_4 = 2;
              iStack_6 = 0x3d;
              iStack_8 = unaff_BP + -0x468;
              iStack_a = 0x22b2;
              uVar11 = 0xdef;
              iStack_c = 0xc877;
              FUN_1000_02b5();
            }
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc18 = 0;
            if (*(int *)(unaff_BP + 6) == 0) {
              *(undefined2 *)0xc1a = 1;
            }
            *(undefined2 *)0xc20 = 1;
            iStack_4 = unaff_BP + -0xc0e;
            iStack_6 = unaff_BP + -0xa20;
            iStack_8 = *(undefined2 *)(unaff_BP + 6);
            iVar5 = 0x1bb4;
            iStack_c = -0x374c;
            iStack_a = uVar11;
            uVar11 = FUN_1def_0904();
            *(undefined2 *)(unaff_BP + -0xa3c) = uVar11;
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
            if (*(int *)(unaff_BP + -0xa3c) == -1) {
              *(undefined2 *)0xc18 = 1;
              goto LAB_2bb4_45c4;
            }
            if (*(int *)0xc18 != 0) {
              *(undefined2 *)(unaff_BP + -0x47a) = 0;
              func_0x000297e6();
              func_0x00029d78();
              iStack_8 = 0x22b2;
              iStack_a = 0xc90c;
              func_0x000299d1();
              iStack_8 = 0x22b2;
              iStack_a = 0xc915;
              func_0x000297e6();
              iStack_8 = 0x22b2;
              iStack_a = 0xc91a;
              func_0x00029d78();
              uStack_10 = 0x22b2;
              iStack_12 = 0xc924;
              func_0x000299d1();
              uStack_10 = 0x22b2;
              iStack_12 = -0x36d7;
              func_0x0000507a();
              goto LAB_3ab8_1bb7;
            }
            if ((0 < *(int *)(unaff_BP + -0xa3c)) && (*(int *)(unaff_BP + -0xa3c) < 6))
            goto LAB_3ab8_1f18;
            if (*(int *)(unaff_BP + -0xa3c) == 6) {
              *(undefined2 *)(unaff_BP + -0x854) = 0;
              *(int *)0x1170 = *(int *)0x1170 + 1;
              if (2 < *(int *)0x1170) {
                *(undefined2 *)0x1170 = 0;
              }
              if (*(byte *)0x123 < 6) {
                if (*(int *)0x1170 == 0) {
                  *(undefined2 *)0x1172 = 3;
                }
                if (*(int *)0x1170 == 1) {
                  *(undefined2 *)0x1172 = 1;
                }
                if (*(int *)0x1170 == 2) {
                  *(undefined2 *)0x1172 = 0;
                }
              }
            }
            if (*(int *)(unaff_BP + -0xa3c) == 7) {
              *(undefined2 *)(unaff_BP + -0x854) = 0;
              *(int *)0x1172 = *(int *)0x1172 + 1;
              if (3 < *(int *)0x1172) {
                *(undefined2 *)0x1172 = 0;
              }
            }
            if (*(int *)(unaff_BP + -0xa3c) == 8) {
              *(undefined2 *)(unaff_BP + -0x854) = 0;
              iVar5 = 0x2ab8;
              iStack_4 = -0x3621;
              func_0x0002b9e1();
              if (*(int *)(unaff_BP + 6) != 0) goto LAB_2bb4_45c4;
            }
            if (*(int *)(unaff_BP + -0xa3c) == 9) {
                    /* WARNING: Call to offcut address within same function */
              iStack_6 = -0x35fd;
              iStack_4 = iVar5;
              func_0x00030a1d();
              *(undefined2 *)(unaff_BP + -0x854) = 0;
              iVar5 = 0x2ab8;
            }
            if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
          } while (*(int *)(unaff_BP + -0x854) == 0);
          iStack_4 = *(int *)(unaff_BP + -0x854);
          iStack_8 = 0xca35;
          iStack_6 = iVar5;
          iVar6 = func_0x00015409();
          iVar5 = 0x11f2;
        } while (iVar6 == 0);
        *(undefined2 *)(unaff_BP + -0xa3c) = 1;
        *(undefined2 *)(unaff_BP + -0x47a) = 1;
        *(undefined2 *)(unaff_BP + -0x13a) = 0;
        *(undefined2 *)(unaff_BP + -0x13c) = 0;
        uVar11 = *(undefined2 *)(unaff_BP + -0xc0c);
        *(undefined2 *)(unaff_BP + -0x5be) = *(undefined2 *)(unaff_BP + -0xc0e);
        *(undefined2 *)(unaff_BP + -0x5bc) = uVar11;
        uVar11 = *(undefined2 *)(unaff_BP + -0x3ce);
        *(undefined2 *)(unaff_BP + -0x848) = *(undefined2 *)(unaff_BP + -0x3d0);
        *(undefined2 *)(unaff_BP + -0x846) = uVar11;
        *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)0xa5e4;
        *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)0xa5e6;
        *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)0xa5e8;
        *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)0xa5ea;
        *(undefined2 *)(unaff_BP + -0x3b8) = *(undefined2 *)0xa5e4;
        *(undefined2 *)(unaff_BP + -0x3b6) = *(undefined2 *)0xa5e6;
        *(undefined2 *)(unaff_BP + -0x3b4) = *(undefined2 *)0xa5e8;
        *(undefined2 *)(unaff_BP + -0x3b2) = *(undefined2 *)0xa5ea;
LAB_3ab8_1f1e:
        *(undefined2 *)(unaff_BP + -0xa3a) = 0;
        while (*(int *)(unaff_BP + -0xa3a) <= *(int *)(unaff_BP + -0x3dc)) {
          iVar5 = unaff_BP + *(int *)(unaff_BP + -0xa3a) * 8;
          *(undefined2 *)(iVar5 + -0x3c0) = *(undefined2 *)0xa5e4;
          *(undefined2 *)(iVar5 + -0x3be) = *(undefined2 *)0xa5e6;
          *(undefined2 *)(iVar5 + -0x3bc) = *(undefined2 *)0xa5e8;
          *(undefined2 *)(iVar5 + -0x3ba) = *(undefined2 *)0xa5ea;
          *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
        }
        *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)0xa5e4;
        *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)0xa5e6;
        *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)0xa5e8;
        *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)0xa5ea;
        *(undefined2 *)(unaff_BP + -0xa38) = *(undefined2 *)0xa5e4;
        *(undefined2 *)(unaff_BP + -0xa36) = *(undefined2 *)0xa5e6;
        *(undefined2 *)(unaff_BP + -0xa34) = *(undefined2 *)0xa5e8;
        *(undefined2 *)(unaff_BP + -0xa32) = *(undefined2 *)0xa5ea;
        *(undefined2 *)(unaff_BP + -0x13e) = 0;
        *(undefined2 *)(unaff_BP + -0x140) = 0;
        iVar5 = 0x1b6e;
        FUN_1885_2ec3();
LAB_3ab8_1f79:
        if (*(int *)(unaff_BP + -0xa3c) == 1) {
          uVar11 = 0x22b2;
          iStack_6 = 0xcb11;
          iStack_4 = iVar5;
          FUN_21f2_3454();
LAB_3ab8_1f93:
          iStack_6 = 0xcb21;
          iStack_4 = uVar11;
          FUN_21f2_3454();
          if (*(int *)0x1170 == 0) {
            iStack_4 = 0x22b2;
            iStack_6 = 0xcb3c;
            FUN_21f2_3454();
          }
          if (*(int *)0x1170 == 1) {
            iStack_4 = 0x22b2;
            iStack_6 = 0xcb57;
            FUN_21f2_3454();
          }
          iVar6 = 0x22b2;
          if (*(int *)0x1170 == 2) {
            iStack_4 = 0x22b2;
            iStack_6 = 0xcb72;
            FUN_21f2_3454();
            iVar6 = 0x22b2;
          }
          do {
            do {
              while( true ) {
                iStack_4 = *(undefined2 *)(unaff_BP + -0x47c);
                iStack_6 = *(undefined2 *)(unaff_BP + -0x47e);
                iStack_8 = *(undefined2 *)(unaff_BP + -0x480);
                iStack_a = *(undefined2 *)(unaff_BP + -0x482);
                iStack_c = unaff_BP + -0xa76;
                iVar9 = 0x1bb4;
                uStack_10 = 0xcb96;
                iStack_e = iVar6;
                iVar5 = func_0x0002267f();
                if (iVar5 == 0) {
                  iStack_4 = 0x1bb4;
                  iVar9 = 0x22b2;
                  iStack_6 = 0xcbb0;
                  FUN_21f2_3454();
                }
                iStack_4 = *(undefined2 *)(unaff_BP + -0xa32);
                iStack_6 = *(undefined2 *)(unaff_BP + -0xa34);
                iStack_8 = *(undefined2 *)(unaff_BP + -0xa36);
                iStack_a = *(undefined2 *)(unaff_BP + -0xa38);
                iStack_c = unaff_BP + -0xae0;
                uVar11 = 0x1bb4;
                uStack_10 = 0xcbd4;
                iStack_e = iVar9;
                iVar5 = func_0x0002267f();
                if (iVar5 == 0) {
                  iStack_4 = 0x1bb4;
                  uVar11 = 0x22b2;
                  iStack_6 = 0xcbee;
                  FUN_21f2_3454();
                }
                iStack_6 = 0xcbff;
                iStack_4 = uVar11;
                func_0x00024c86();
                if (*(int *)(unaff_BP + -0x47a) == 0) {
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xcc19;
                  FUN_21f2_2d26();
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xcc29;
                  FUN_21f2_2d26();
                  iStack_4 = 0x22b2;
                  uVar11 = 0x22b2;
                  iStack_6 = 0xcc39;
                  FUN_21f2_2d26();
                  *(undefined2 *)0xc2c = 1;
                }
                else {
                  iStack_4 = unaff_BP + -0xa20;
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xcc56;
                  func_0x0002c57b();
                  iStack_4 = 0x2ab8;
                  iStack_6 = 0xcc66;
                  FUN_1000_0599();
                  iStack_4 = unaff_BP + -0xaae;
                  iStack_6 = 0x68fd;
                  iStack_8 = 0xdef;
                  iStack_a = 0xcc80;
                  func_0x00012276();
                  iStack_4 = 0x690c;
                  iStack_6 = unaff_BP + -0xb58;
                  iStack_8 = 0x11f2;
                  iStack_a = 0xcc9b;
                  FUN_21f2_3454();
                  *(undefined1 *)(unaff_BP + -0xbcc) = 0;
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xccb0;
                  FUN_1000_0599();
                  if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x47a) * 4 + -0x13e) < 0) {
                    iStack_4 = 0xccdc;
                    func_0x00012276();
                  }
                  else {
                    iStack_4 = 0xccce;
                    func_0x00012276();
                  }
                  iStack_4 = 0x6912;
                  iStack_6 = 0x11f2;
                  uVar11 = 0x11f2;
                  iStack_8 = 0xccf0;
                  func_0x00012276();
                }
                iStack_4 = unaff_BP + -0x994;
                iStack_6 = unaff_BP + -0x702;
                iStack_8 = unaff_BP + -0x140;
                iStack_a = *(undefined2 *)(unaff_BP + -0x47a);
                iStack_e = -0x32eb;
                iStack_c = uVar11;
                FUN_28b3_2a41();
                *(undefined2 *)0xc1a = 1;
                *(undefined2 *)0xc20 = 1;
                if (*(int *)0xa62 == 0x1b) {
                  *(undefined2 *)0xc1a = 0;
                }
                iStack_4 = unaff_BP + -0x3cc;
                iStack_6 = unaff_BP + -0xa20;
                iStack_8 = 9999;
                iStack_a = 0x2ab8;
                iStack_c = -0x32b2;
                uVar11 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
                *(undefined2 *)0xc1a = 0;
                *(undefined2 *)0xc20 = 0;
                *(undefined2 *)0xc2c = 0;
                FUN_1885_2ec3();
                func_0x00013e19();
                iStack_4 = 0x11f2;
                iStack_6 = 0xcd78;
                FUN_1000_0599();
                func_0x00010526();
                iStack_4 = 0xdef;
                iStack_6 = -0x3274;
                FUN_1000_0599();
                iVar6 = 0xdef;
                func_0x00010526();
                if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
                if (*(int *)0xc18 == 0) break;
                func_0x000297e6();
                func_0x00029d78();
                iStack_8 = 0x22b2;
                iStack_a = 0xcdc2;
                func_0x000299d1();
                iStack_8 = 0x22b2;
                iStack_a = 0xcdcb;
                func_0x000297e6();
                iStack_8 = 0x22b2;
                iStack_a = 0xcdd0;
                func_0x00029d78();
                uStack_10 = 0x22b2;
                iStack_12 = 0xcdda;
                func_0x000299d1();
                uStack_10 = 0x22b2;
                iStack_12 = -0x3221;
                func_0x0000507a();
                iVar6 = 0x3bf;
              }
              if ((*(int *)(unaff_BP + 6) != 0) && (*(int *)(unaff_BP + -0xaf2) == 1))
              goto LAB_2bb4_45c4;
              if ((*(int *)(unaff_BP + -0xaf2) == 1) && (*(int *)(unaff_BP + -0x47a) != 0)) {
                iStack_4 = 0;
                iStack_6 = 0xdef;
                iVar6 = 0x2ab8;
                iStack_8 = 0xce22;
                FUN_28b3_26a1();
              }
              if ((*(int *)(unaff_BP + -0xaf2) == 2) && (*(int *)(unaff_BP + -0x47a) != 0))
              goto LAB_3ab8_1f18;
              if (*(int *)(unaff_BP + -0xaf2) == 0x14) goto LAB_3ab8_1bb7;
              if (*(int *)(unaff_BP + -0xaf2) == -1) {
                if (*(int *)(unaff_BP + -0x47a) == 0) goto LAB_3ab8_1bb7;
                *(undefined2 *)(unaff_BP + -0xa38) = *(undefined2 *)0xa5e4;
                *(undefined2 *)(unaff_BP + -0xa36) = *(undefined2 *)0xa5e6;
                *(undefined2 *)(unaff_BP + -0xa34) = *(undefined2 *)0xa5e8;
                *(undefined2 *)(unaff_BP + -0xa32) = *(undefined2 *)0xa5ea;
                *(undefined2 *)(unaff_BP + -0x854) = 0;
                *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + -1;
                iVar5 = *(int *)(unaff_BP + -0x47a) * 4;
                if ((*(int *)(unaff_BP + iVar5 + -0x13e) == 0 &&
                     *(int *)(unaff_BP + iVar5 + -0x140) == 0) && (1 < *(int *)(unaff_BP + -0x47a)))
                {
                  *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + -1;
                }
                iVar5 = unaff_BP + *(int *)(unaff_BP + -0x47a) * 8;
                *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)(iVar5 + -0x3c0);
                *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)(iVar5 + -0x3be);
                *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)(iVar5 + -0x3bc);
                *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)(iVar5 + -0x3ba);
                *(undefined2 *)(unaff_BP + -0xa3a) = 1;
                while (*(int *)(unaff_BP + -0xa3a) <= *(int *)(unaff_BP + -0x47a)) {
                  iVar5 = *(int *)(unaff_BP + -0xa3a) * 4;
                  if (*(int *)(unaff_BP + iVar5 + -0x13e) != 0 ||
                      *(int *)(unaff_BP + iVar5 + -0x140) != 0) {
                    func_0x00029834();
                    iStack_4 = -0x3101;
                    func_0x00029c74();
                    iVar6 = 0x22b2;
                    func_0x000299d1();
                  }
                  *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
                }
              }
              iVar5 = iVar6;
              if (*(int *)(unaff_BP + -0xaf2) == 3) goto LAB_3ab8_23c3;
            } while (*(int *)(unaff_BP + -0x854) == 0);
            iStack_4 = *(int *)(unaff_BP + -0x854);
            iVar5 = 0x11f2;
            iStack_8 = 0xcf32;
            iStack_6 = iVar6;
            iVar9 = func_0x00015409();
            iVar6 = iVar5;
          } while (iVar9 == 0);
LAB_3ab8_23c3:
          if ((*(int *)(unaff_BP + -0xaf2) == 3) &&
             (*(int *)(unaff_BP + -0x47a) < *(int *)(unaff_BP + -0x3dc))) {
LAB_3ab8_23da:
            do {
              iVar6 = *(int *)(unaff_BP + -0x47a) * 4;
              uVar11 = *(undefined2 *)(unaff_BP + iVar6 + -0x5c0);
              *(undefined2 *)(unaff_BP + -0xc68) = *(undefined2 *)(unaff_BP + iVar6 + -0x5c2);
              *(undefined2 *)(unaff_BP + -0xc66) = uVar11;
              uVar11 = *(undefined2 *)(unaff_BP + iVar6 + -0x84a);
              *(undefined2 *)(unaff_BP + -0xc6e) = *(undefined2 *)(unaff_BP + iVar6 + -0x84c);
              *(undefined2 *)(unaff_BP + -0xc6c) = uVar11;
              while( true ) {
                iStack_4 = unaff_BP + -0x994;
                iStack_6 = unaff_BP + -0x702;
                iStack_8 = unaff_BP + -0x140;
                iStack_a = *(undefined2 *)(unaff_BP + -0x47a);
                iStack_e = -0x305c;
                iStack_c = iVar5;
                FUN_28b3_2a41();
                iStack_4 = unaff_BP + -0xa20;
                iStack_6 = 0x2ab8;
                iStack_8 = 0xcfb9;
                FUN_21f2_3454();
                iStack_4 = unaff_BP + -0xc0e;
                iStack_6 = unaff_BP + -0xa20;
                iStack_8 = 1;
                iStack_a = 0x22b2;
                uVar11 = 0x1bb4;
                iStack_c = -0x3027;
                uVar10 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0xc6a) = uVar10;
                if (*(int *)0x158 != 0) {
                  FUN_1885_2ec3();
                  goto LAB_2bb4_45c4;
                }
                if (*(int *)(unaff_BP + -0xc6a) == -1) goto LAB_3ab8_1f93;
                func_0x000297e6();
                func_0x00029d78();
                iStack_8 = 0x22b2;
                iStack_a = 0xd017;
                func_0x000299d1();
                iStack_8 = 0x22b2;
                iStack_a = 0xd020;
                func_0x000297e6();
                iStack_8 = 0x22b2;
                iStack_a = 0xd025;
                func_0x00029d78();
                uStack_10 = 0x22b2;
                iStack_12 = 0xd02f;
                func_0x000299d1();
                uStack_10 = 0x22b2;
                iStack_12 = -0x2fcc;
                lVar14 = FUN_13bf_39a0();
                *(undefined2 *)(unaff_BP + -0x850) = (int)lVar14;
                *(undefined2 *)(unaff_BP + -0x84e) = (int)((ulong)lVar14 >> 0x10);
                if (lVar14 < 0) break;
                iVar5 = 0x11f2;
                iStack_4 = 0xd056;
                func_0x00012276();
              }
              uVar12 = *(int *)(unaff_BP + -0x84e) + (uint)(*(int *)(unaff_BP + -0x850) != 0) == 0;
              iStack_4 = 0x11f2;
              iStack_6 = -0x2f90;
              puVar15 = (undefined2 *)func_0x00000271();
              puVar8 = (undefined2 *)puVar15;
              puVar7 = (undefined2 *)(unaff_BP + -0x404);
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar3 = puVar7;
                puVar7 = puVar7 + 1;
                puVar2 = puVar8;
                puVar8 = puVar8 + 1;
                *puVar3 = *puVar2;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar12) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar12) {
                  iVar5 = 0x11f2;
                  iStack_4 = 0xd0c4;
                  func_0x00012276();
                  goto LAB_3ab8_23da;
                }
              }
LAB_3ab8_2548:
              do {
                func_0x00013e19();
                *(undefined1 *)(unaff_BP + -0x3ea) = 2;
                *(undefined1 *)(unaff_BP + -0x3e9) = 9;
                puVar8 = &uStack_1e;
                puVar7 = (undefined2 *)(unaff_BP + -0x404);
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar2 = puVar8;
                  puVar8 = puVar8 + 1;
                  puVar15 = puVar7;
                  puVar7 = puVar7 + 1;
                  *puVar2 = *puVar15;
                }
                func_0x00013e46();
                iStack_4 = unaff_BP + -0x994;
                iStack_6 = unaff_BP + -0x702;
                iStack_8 = unaff_BP + -0x140;
                iStack_a = -*(int *)(unaff_BP + -0x47a);
                iStack_c = 0x11f2;
                iStack_e = -0x2eec;
                FUN_28b3_2a41();
                iStack_4 = unaff_BP + -0xc44;
                iStack_6 = 0x6925;
                iStack_8 = unaff_BP + -0xa20;
                iStack_a = 0x2ab8;
                iStack_c = 0xd132;
                FUN_21f2_3454();
                *(undefined2 *)0xc20 = 1;
                iStack_4 = unaff_BP + -0x3cc;
                iStack_6 = unaff_BP + -0xa20;
                iStack_8 = 9999;
                iStack_a = 0x22b2;
                iStack_c = -0x2ea8;
                uVar11 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0xc6a) = uVar11;
                *(undefined2 *)0xc20 = 0;
                iVar5 = 0x11f2;
                func_0x00013e19();
                if (*(int *)0x158 != 0) {
                  FUN_1885_2ec3();
                  goto LAB_2bb4_45c4;
                }
                if (*(int *)(unaff_BP + -0xc6a) == -1) goto LAB_3ab8_23da;
              } while (*(int *)(unaff_BP + -0x854) == 0);
              iStack_4 = *(int *)(unaff_BP + -0x854);
              iStack_6 = 0x11f2;
              iStack_8 = 0xd1a6;
              iVar5 = func_0x00015409();
              uVar12 = 0;
              uVar13 = iVar5 == 0;
              if ((bool)uVar13) goto LAB_3ab8_2548;
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar13) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar13) {
                  iStack_4 = -0x2e0b;
                  func_0x00012276();
                  goto LAB_3ab8_2548;
                }
              }
              uVar13 = 0;
              func_0x000297e6();
              func_0x0002996b();
              FUN_28b3_0ee9();
              func_0x000297e6();
              func_0x000297e6();
              func_0x0002996b();
              FUN_28b3_100d();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029c9d();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029c9d();
              FUN_28b3_1163();
              FUN_28b3_1181();
              if (!(bool)uVar12 && !(bool)uVar13) {
                uVar11 = *(undefined2 *)(unaff_BP + -0xc66);
                *(undefined2 *)(unaff_BP + -0x70a) = *(undefined2 *)(unaff_BP + -0xc68);
                *(undefined2 *)(unaff_BP + -0x708) = uVar11;
                func_0x000297e6();
                func_0x00029983();
                uVar11 = *(undefined2 *)(unaff_BP + -0x708);
                *(undefined2 *)(unaff_BP + -0xc72) = *(undefined2 *)(unaff_BP + -0x70a);
                *(undefined2 *)(unaff_BP + -0xc70) = uVar11;
                uVar11 = *(undefined2 *)(unaff_BP + -0xc6c);
                *(undefined2 *)(unaff_BP + -0x70a) = *(undefined2 *)(unaff_BP + -0xc6e);
                *(undefined2 *)(unaff_BP + -0x708) = uVar11;
                func_0x000297e6();
                func_0x00029983();
                uVar11 = *(undefined2 *)(unaff_BP + -0x708);
                *(undefined2 *)(unaff_BP + -0xc76) = *(undefined2 *)(unaff_BP + -0x70a);
                *(undefined2 *)(unaff_BP + -0xc74) = uVar11;
              }
              iStack_4 = 0xd2f8;
              func_0x000297e6();
              iStack_4 = 0xd2fd;
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xd307;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xd310;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0xd315;
              func_0x00029d78();
              iStack_12 = 0x22b2;
              iStack_14 = 0xd31f;
              func_0x000299d1();
              iVar5 = -*(int *)(unaff_BP + -0x850);
              iVar6 = -(*(int *)(unaff_BP + -0x84e) + (uint)(*(int *)(unaff_BP + -0x850) != 0));
              uStack_16 = 0x22b2;
              uStack_18 = 0xd339;
              iStack_14 = iVar5;
              iStack_12 = iVar6;
              FUN_20a9_1260();
              iStack_4 = 0xd34a;
              func_0x000297e6();
              iStack_4 = 0xd34f;
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xd359;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xd362;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = -0x2c99;
              func_0x00029d78();
              iStack_12 = 0x22b2;
              iStack_14 = 0xd371;
              func_0x000299d1();
              uStack_16 = 0x22b2;
              uStack_18 = 0xd378;
              iStack_14 = iVar5;
              iStack_12 = iVar6;
              FUN_20a9_1260();
              if (*(int *)(unaff_BP + -0x3f8) == 10000) {
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029d78();
                iStack_8 = 0x22b2;
                iStack_a = 0xd3a7;
                func_0x000299d1();
                iStack_8 = 0x22b2;
                iStack_a = 0xd3b0;
                func_0x000297e6();
                iStack_8 = 0x22b2;
                iStack_a = 0xd3b9;
                FUN_28b3_100d();
                iStack_8 = 0x22b2;
                iStack_a = 0xd3be;
                func_0x00029d78();
                uStack_10 = 0x22b2;
                iStack_12 = 0xd3c8;
                func_0x000299d1();
                uStack_10 = 0x22b2;
                iStack_12 = 0xd3cd;
                puVar7 = (undefined2 *)func_0x0002a178();
                *(undefined2 *)(unaff_BP + -0xc5c) = *puVar7;
                *(undefined2 *)(unaff_BP + -0xc5a) = puVar7[1];
                *(undefined2 *)(unaff_BP + -0xc58) = puVar7[2];
                *(undefined2 *)(unaff_BP + -0xc56) = puVar7[3];
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029d78();
                func_0x000299b9();
                FUN_28b3_0ee9();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029d78();
                func_0x000299b9();
                FUN_28b3_0ee9();
                func_0x00029834();
                func_0x00029834();
                iStack_8 = 0x22b2;
                iStack_a = 0xd448;
                func_0x000299d1();
                iStack_8 = 0x22b2;
                iStack_a = 0xd451;
                func_0x00029834();
                uStack_10 = 0x22b2;
                iStack_12 = 0xd45b;
                func_0x000299d1();
                uStack_10 = 0x22b2;
                iStack_12 = -0x2ba0;
                func_0x0002a178();
                uVar12 = (undefined1 *)0xffef < &iStack_e;
                uVar13 = &stack0x0000 == (undefined1 *)0xfffe;
                func_0x00029834();
                func_0x000299b9();
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  func_0x00029834();
                  func_0x00029c74();
                  func_0x000299d1();
                }
                func_0x000297e6();
                func_0x00029b6d();
                func_0x00029d78();
                func_0x00029834();
                func_0x00029bfc();
                func_0x00029c9d();
                func_0x00029b6d();
                func_0x000299d1();
                goto LAB_3ab8_29ea;
              }
              func_0x0000c3ca();
              iStack_4 = 0x885;
              iStack_6 = -0x2b11;
              FUN_1000_0599();
              iVar5 = 0x11f2;
              iStack_4 = 0xd4fa;
              func_0x00012276();
              uVar11 = *(undefined2 *)(unaff_BP + -0x704);
              *(undefined2 *)(unaff_BP + -0x3f6) = *(undefined2 *)(unaff_BP + -0x706);
              *(undefined2 *)(unaff_BP + -0x3f4) = uVar11;
              uVar11 = *(undefined2 *)(unaff_BP + -0x996);
              *(undefined2 *)(unaff_BP + -0x3f2) = *(undefined2 *)(unaff_BP + -0x998);
              *(undefined2 *)(unaff_BP + -0x3f0) = uVar11;
              puVar8 = (undefined2 *)&stack0xffe0;
              puVar7 = (undefined2 *)(unaff_BP + -0x404);
              for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar2 = puVar8;
                puVar8 = puVar8 + 1;
                puVar15 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar2 = *puVar15;
              }
              pcVar4 = (code *)swi(0x3f);
              iVar6 = (*pcVar4)();
              if (iVar6 != 0) {
                func_0x000297e6();
                func_0x00029b6d();
                func_0x00029d78();
                iStack_4 = 0xd564;
                func_0x00029c2c();
                func_0x000299d1();
LAB_3ab8_29ea:
                func_0x00029834();
                iStack_4 = 0xd57d;
                func_0x00029c2c();
                func_0x000299b9();
                iStack_4 = -0x2a73;
                func_0x00029c74();
                func_0x000299d1();
                uVar11 = *(undefined2 *)(unaff_BP + -0x706);
                uVar10 = *(undefined2 *)(unaff_BP + -0x704);
                *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
                iVar5 = *(int *)(unaff_BP + -0x47a) * 4;
                *(undefined2 *)(unaff_BP + iVar5 + -0x702) = uVar11;
                *(undefined2 *)(unaff_BP + iVar5 + -0x700) = uVar10;
                uVar11 = *(undefined2 *)(unaff_BP + -0x996);
                *(undefined2 *)(unaff_BP + iVar5 + -0x994) = *(undefined2 *)(unaff_BP + -0x998);
                *(undefined2 *)(unaff_BP + iVar5 + -0x992) = uVar11;
                uVar11 = *(undefined2 *)(unaff_BP + -0x3ca);
                *(undefined2 *)(unaff_BP + iVar5 + -0x5c2) = *(undefined2 *)(unaff_BP + -0x3cc);
                *(undefined2 *)(unaff_BP + iVar5 + -0x5c0) = uVar11;
                uVar11 = *(undefined2 *)(unaff_BP + -0x3d8);
                *(undefined2 *)(unaff_BP + iVar5 + -0x84c) = *(undefined2 *)(unaff_BP + -0x3da);
                *(undefined2 *)(unaff_BP + iVar5 + -0x84a) = uVar11;
                uVar11 = *(undefined2 *)(unaff_BP + -0x84e);
                *(undefined2 *)(unaff_BP + iVar5 + -0x140) = *(undefined2 *)(unaff_BP + -0x850);
                *(undefined2 *)(unaff_BP + iVar5 + -0x13e) = uVar11;
                func_0x00029834();
                iVar5 = 0x22b2;
                func_0x000299d1();
                goto LAB_3ab8_1f79;
              }
            } while( true );
          }
          if (*(int *)(unaff_BP + -0x47a) != 0) {
            uVar12 = (*(uint *)(unaff_BP + -0x47a) & 0x3fff) == 0;
            func_0x000297e6();
            func_0x00029b55();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029b55();
            func_0x0002996b();
            FUN_28b3_1181();
            if ((bool)uVar12) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar12) {
                iStack_4 = 0xd6ef;
                func_0x00012276();
                iStack_4 = 0x11f2;
                iStack_6 = 0xd6fd;
                FUN_1000_0599();
                iStack_4 = 0xdef;
                iVar5 = 0x11f2;
                iStack_6 = -0x28f3;
                func_0x00012276();
                goto LAB_3ab8_1f79;
              }
            }
            if (*(int *)(unaff_BP + -0x47a) < *(int *)(unaff_BP + -0x3dc)) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1168();
              func_0x000299d1();
              func_0x000297e6();
              func_0x00029d78();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1168();
              func_0x000299d1();
              *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
              iVar5 = *(int *)(unaff_BP + -0x47a) * 4;
              *(undefined2 *)(unaff_BP + iVar5 + -0x140) = 1;
              *(undefined2 *)(unaff_BP + iVar5 + -0x13e) = 0;
              uVar11 = *(undefined2 *)(unaff_BP + -0x3ca);
              *(undefined2 *)(unaff_BP + iVar5 + -0x5c2) = *(undefined2 *)(unaff_BP + -0x3cc);
              *(undefined2 *)(unaff_BP + iVar5 + -0x5c0) = uVar11;
              uVar11 = *(undefined2 *)(unaff_BP + -0x3d8);
              *(undefined2 *)(unaff_BP + iVar5 + -0x84c) = *(undefined2 *)(unaff_BP + -0x3da);
              *(undefined2 *)(unaff_BP + iVar5 + -0x84a) = uVar11;
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029d78();
              func_0x00029834();
              func_0x00029c2c();
              func_0x00029834();
              func_0x00029c2c();
              FUN_28b3_117c();
              iStack_8 = 0x22b2;
              iStack_a = 0xd7fb;
              func_0x000299d1();
              iStack_8 = 0x22b2;
              iStack_a = 0xd800;
              FUN_28b3_1582();
              func_0x00029c2c();
              func_0x000299d1();
              func_0x00029834();
              iStack_4 = 0xd828;
              func_0x00029c2c();
              func_0x000299b9();
              iStack_4 = 0xd838;
              func_0x00029c74();
              func_0x000299d1();
              func_0x00029834();
              func_0x000299d1();
              uVar12 = *(byte *)0x123 < 8;
              uVar13 = *(byte *)0x123 == 8;
              if (!(bool)uVar12) {
                func_0x00029834();
                func_0x00029834();
                func_0x00029ae7();
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  func_0x00029834();
                  func_0x00029983();
                }
              }
              iStack_4 = 0xd8aa;
              func_0x000297e6();
              iStack_4 = -0x2751;
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xd8b9;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xd8c2;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = -0x2739;
              func_0x00029d78();
              iStack_12 = 0x22b2;
              iStack_14 = 0xd8d1;
              func_0x000299d1();
              iStack_12 = 0x22b2;
              iStack_14 = 0xd8da;
              func_0x000297e6();
              iStack_12 = 0x22b2;
              iStack_14 = -0x2721;
              func_0x00029d78();
              uStack_1a = 0x22b2;
              uStack_1c = 0xd8e9;
              func_0x000299d1();
              uStack_1a = 0x22b2;
              uStack_1c = 0xd8f2;
              func_0x000297e6();
              uStack_1a = 0x22b2;
              uStack_1c = 0xd8f7;
              func_0x00029d78();
              func_0x000299d1();
              iVar5 = 0x1bb4;
              func_0x0001e18f();
            }
            else {
              iStack_4 = 0xd915;
              func_0x00012276();
              iStack_4 = 0x11f2;
              iStack_6 = 0xd923;
              FUN_1000_0599();
              iStack_4 = 0xdef;
              iVar5 = 0x11f2;
              iStack_6 = -0x26cd;
              func_0x00012276();
            }
            goto LAB_3ab8_1f79;
          }
          *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
          iVar6 = *(int *)(unaff_BP + -0x47a) * 4;
          *(undefined2 *)(unaff_BP + iVar6 + -0x13e) = 0;
          *(undefined2 *)(unaff_BP + iVar6 + -0x140) = 0;
          uVar11 = *(undefined2 *)(unaff_BP + -0x3ca);
          *(undefined2 *)(unaff_BP + iVar6 + -0x5c2) = *(undefined2 *)(unaff_BP + -0x3cc);
          *(undefined2 *)(unaff_BP + iVar6 + -0x5c0) = uVar11;
          uVar11 = *(undefined2 *)(unaff_BP + -0x3d8);
          *(undefined2 *)(unaff_BP + iVar6 + -0x84c) = *(undefined2 *)(unaff_BP + -0x3da);
          *(undefined2 *)(unaff_BP + iVar6 + -0x84a) = uVar11;
          *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)0xa5e4;
          *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)0xa5e6;
          *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)0xa5e8;
          *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)0xa5ea;
          iVar6 = unaff_BP + *(int *)(unaff_BP + -0x47a) * 8;
          *(undefined2 *)(iVar6 + -0x3c0) = *(undefined2 *)0xa5e4;
          *(undefined2 *)(iVar6 + -0x3be) = *(undefined2 *)0xa5e6;
          *(undefined2 *)(iVar6 + -0x3bc) = *(undefined2 *)0xa5e8;
          *(undefined2 *)(iVar6 + -0x3ba) = *(undefined2 *)0xa5ea;
          goto LAB_3ab8_1f79;
        }
        if (*(int *)(unaff_BP + -0xa3c) == 2) {
          iVar5 = 0x2ab8;
          iStack_4 = -0x26b2;
          FUN_2bb4_6c4a();
          if ((*(int *)(unaff_BP + 6) != 0) && (*(int *)0xc18 != 0)) {
            *(undefined2 *)0xc18 = 0;
            break;
          }
        }
        if (*(int *)0x158 != 0) break;
        if (*(int *)(unaff_BP + -0xa3c) == 3) {
          iStack_6 = 0xd990;
          iStack_4 = iVar5;
          FUN_21f2_3454();
          if (*(int *)0x1170 == 0) {
            iStack_4 = 0x22b2;
            iStack_6 = 0xd9aa;
            FUN_21f2_3454();
          }
          if (*(int *)0x1170 == 1) {
            iStack_4 = 0x22b2;
            iStack_6 = 0xd9c4;
            FUN_21f2_3454();
          }
          if (*(int *)0x1170 == 2) {
            iStack_4 = 0x22b2;
            iStack_6 = 0xd9de;
            FUN_21f2_3454();
          }
          *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)0xa5e4;
          *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)0xa5e6;
          *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)0xa5e8;
          *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)0xa5ea;
          *(undefined2 *)(unaff_BP + -0xa38) = *(undefined2 *)0xa5e4;
          *(undefined2 *)(unaff_BP + -0xa36) = *(undefined2 *)0xa5e6;
          *(undefined2 *)(unaff_BP + -0xa34) = *(undefined2 *)0xa5e8;
          *(undefined2 *)(unaff_BP + -0xa32) = *(undefined2 *)0xa5ea;
          *(undefined2 *)(unaff_BP + -0x47a) = 0;
          iVar5 = 0x1b6e;
          FUN_1885_2ec3();
          *(undefined2 *)(unaff_BP + -0x13e) = 0;
          *(undefined2 *)(unaff_BP + -0x140) = 0;
          do {
            do {
              while( true ) {
                iStack_6 = 0xda1e;
                iStack_4 = iVar5;
                func_0x00024c86();
                iStack_4 = 0x22b2;
                iStack_6 = 0xda2e;
                FUN_21f2_2d26();
                iStack_4 = 0x22b2;
                iStack_6 = 0xda3e;
                FUN_21f2_2d26();
                iStack_4 = 0x22b2;
                iStack_6 = 0xda4e;
                FUN_21f2_2d26();
                *(undefined2 *)0xc1a = 1;
                *(undefined2 *)0xc20 = 1;
                *(undefined2 *)0xc2c = 1;
                if (*(int *)0xa62 == 0x1b) {
                  *(undefined2 *)0xc1a = 0;
                }
                iStack_4 = unaff_BP + -0xc0e;
                iStack_6 = unaff_BP + -0xa20;
                iStack_8 = 1;
                iStack_a = 0x22b2;
                iStack_c = -0x2577;
                uVar11 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
                *(undefined2 *)0xc1a = 0;
                *(undefined2 *)0xc20 = 0;
                *(undefined2 *)0xc2c = 0;
                iStack_4 = 0x1bb4;
                iStack_6 = 0xdaa9;
                FUN_1000_0599();
                func_0x00010526();
                iStack_4 = 0xdef;
                iStack_6 = -0x2543;
                FUN_1000_0599();
                iVar5 = 0xdef;
                func_0x00010526();
                if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
                if (*(int *)0xc18 == 0) break;
                func_0x000297e6();
                func_0x00029d78();
                iStack_8 = 0x22b2;
                iStack_a = 0xdaf3;
                func_0x000299d1();
                iStack_8 = 0x22b2;
                iStack_a = 0xdafc;
                func_0x000297e6();
                iStack_8 = 0x22b2;
                iStack_a = 0xdb01;
                func_0x00029d78();
                uStack_10 = 0x22b2;
                iStack_12 = 0xdb0b;
                func_0x000299d1();
                uStack_10 = 0x22b2;
                iVar5 = 0x3bf;
                iStack_12 = -0x24f0;
                func_0x0000507a();
              }
              if ((*(int *)(unaff_BP + -0xaf2) == -1) || (*(int *)(unaff_BP + -0xaf2) == 0x14))
              goto LAB_3ab8_1bb7;
            } while (*(int *)(unaff_BP + -0x854) == 0);
            iStack_4 = *(undefined2 *)(unaff_BP + -0x854);
            iStack_6 = 0xdef;
            iVar5 = 0x11f2;
            iStack_8 = 0xdb4a;
            iVar6 = func_0x00015409();
          } while (iVar6 == 0);
          *(undefined2 *)(unaff_BP + -0x47a) = 1;
          uVar11 = *(undefined2 *)(unaff_BP + -0xc0c);
          *(undefined2 *)(unaff_BP + -0x5be) = *(undefined2 *)(unaff_BP + -0xc0e);
          *(undefined2 *)(unaff_BP + -0x5bc) = uVar11;
          uVar11 = *(undefined2 *)(unaff_BP + -0x3ce);
          *(undefined2 *)(unaff_BP + -0x848) = *(undefined2 *)(unaff_BP + -0x3d0);
          *(undefined2 *)(unaff_BP + -0x846) = uVar11;
          *(undefined2 *)(unaff_BP + -0x13a) = 0;
          *(undefined2 *)(unaff_BP + -0x13c) = 0;
LAB_3ab8_300b:
          do {
            iStack_6 = 0xdb9a;
            iStack_4 = iVar5;
            func_0x00024c86();
            iStack_4 = unaff_BP + -0xa20;
            iStack_6 = 0x22b2;
            iStack_8 = 0xdbad;
            func_0x0002c57b();
            iStack_4 = 0x2ab8;
            iStack_6 = 0xdbc1;
            func_0x00029834();
            iStack_4 = 0x22b2;
            iStack_6 = 0xdbc6;
            func_0x00029ae7();
            iStack_c = 0x22b2;
            iStack_e = -0x2430;
            func_0x000299d1();
            iStack_c = unaff_BP + -0xa76;
            iStack_e = 0x22b2;
            uVar11 = 0x1bb4;
            uStack_10 = 0xdbda;
            iVar5 = func_0x0002267f();
            if (iVar5 == 0) {
              iStack_4 = 0x1bb4;
              uVar11 = 0x22b2;
              iStack_6 = 0xdbf4;
              FUN_21f2_3454();
            }
            iStack_6 = 0xdc07;
            iStack_4 = uVar11;
            func_0x00029834();
            iStack_4 = 0x22b2;
            iStack_6 = 0xdc0c;
            func_0x00029ae7();
            iStack_c = 0x22b2;
            iStack_e = -0x23ea;
            func_0x000299d1();
            iStack_c = unaff_BP + -0xae0;
            iStack_e = 0x22b2;
            uVar11 = 0x1bb4;
            uStack_10 = 0xdc20;
            iVar5 = func_0x0002267f();
            if (iVar5 == 0) {
              iStack_4 = 0x1bb4;
              uVar11 = 0x22b2;
              iStack_6 = 0xdc3a;
              FUN_21f2_3454();
            }
            iStack_4 = unaff_BP + -0x994;
            iStack_6 = unaff_BP + -0x702;
            iStack_8 = unaff_BP + -0x140;
            iStack_a = *(undefined2 *)(unaff_BP + -0x47a);
            uVar10 = 0x2ab8;
            iStack_e = -0x23a2;
            iStack_c = uVar11;
            FUN_28b3_2a41();
            if (1 < *(int *)(unaff_BP + -0x47a)) {
              iStack_4 = 0x2ab8;
              iStack_6 = 0xdc78;
              FUN_1000_0599();
              iStack_4 = unaff_BP + -0xaae;
              iStack_6 = 0x694f;
              iStack_8 = 0xdef;
              iStack_a = 0xdc92;
              func_0x00012276();
              iStack_4 = 0x695e;
              iStack_6 = unaff_BP + -0xb58;
              iStack_8 = 0x11f2;
              iStack_a = 0xdcad;
              FUN_21f2_3454();
              iStack_4 = 0x22b2;
              iStack_6 = 0xdcbd;
              FUN_1000_0599();
              iStack_4 = unaff_BP + -0xaae;
              iStack_6 = 0x6964;
              iStack_8 = 0xdef;
              iStack_a = 0xdcd7;
              func_0x00012276();
              *(undefined2 *)(unaff_BP + -0x3d2) = *(undefined2 *)0xa6c;
              *(undefined2 *)0xa6c = 3;
              iStack_4 = 0xdcfc;
              func_0x000297e6();
              iStack_4 = 0xdd01;
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xdd0b;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xdd14;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0xdd19;
              func_0x00029d78();
              iStack_12 = 0x22b2;
              iStack_14 = 0xdd23;
              func_0x000299d1();
              iStack_12 = 0x22b2;
              iStack_14 = 0xdd2c;
              func_0x000297e6();
              iStack_12 = 0x22b2;
              iStack_14 = -0x22cf;
              func_0x00029d78();
              uStack_1a = 0x22b2;
              uStack_1c = 0xdd3b;
              func_0x000299d1();
              uStack_1a = 0x22b2;
              uStack_1c = 0xdd44;
              func_0x000297e6();
              uStack_1a = 0x22b2;
              uStack_1c = 0xdd49;
              func_0x00029d78();
              func_0x000299d1();
              uVar10 = 0x1bb4;
              func_0x0001e18f();
              *(undefined2 *)0xa6c = *(undefined2 *)(unaff_BP + -0x3d2);
            }
            *(undefined1 *)(unaff_BP + -0xbcc) = 0;
            *(undefined2 *)0xc1a = 1;
            *(undefined2 *)0xc20 = 1;
            if (*(int *)0xa62 == 0x1b) {
              *(undefined2 *)0xc1a = 0;
            }
            iStack_4 = unaff_BP + -0x3cc;
            iStack_6 = unaff_BP + -0xa20;
            iStack_8 = 9999;
            iStack_c = -0x2263;
            iStack_a = uVar10;
            uVar11 = FUN_1def_0904();
            *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            FUN_1885_2ec3();
            func_0x00013e19();
            iStack_4 = 0x11f2;
            iStack_6 = 0xddc4;
            FUN_1000_0599();
            func_0x00010526();
            iStack_4 = 0xdef;
            iStack_6 = -0x2228;
            FUN_1000_0599();
            iVar5 = 0xdef;
            func_0x00010526();
            if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
            if (*(int *)0xc18 == 0) {
              if (*(int *)(unaff_BP + -0xaf2) == -1) {
                if (*(int *)(unaff_BP + -0x47a) < 2) goto LAB_3ab8_1f18;
                *(undefined2 *)(unaff_BP + -0xa38) = *(undefined2 *)0xa5e4;
                *(undefined2 *)(unaff_BP + -0xa36) = *(undefined2 *)0xa5e6;
                *(undefined2 *)(unaff_BP + -0xa34) = *(undefined2 *)0xa5e8;
                *(undefined2 *)(unaff_BP + -0xa32) = *(undefined2 *)0xa5ea;
                *(undefined2 *)(unaff_BP + -0x854) = 0;
                *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + -1;
                iVar6 = unaff_BP + *(int *)(unaff_BP + -0x47a) * 8;
                *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)(iVar6 + -0x3c0);
                *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)(iVar6 + -0x3be);
                *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)(iVar6 + -0x3bc);
                *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)(iVar6 + -0x3ba);
                *(undefined2 *)(unaff_BP + -0xa3a) = 1;
                while (*(int *)(unaff_BP + -0xa3a) <= *(int *)(unaff_BP + -0x47a)) {
                  iVar6 = *(int *)(unaff_BP + -0xa3a) * 4;
                  if (*(int *)(unaff_BP + iVar6 + -0x13e) != 0 ||
                      *(int *)(unaff_BP + iVar6 + -0x140) != 0) {
                    func_0x00029834();
                    iStack_4 = -0x2141;
                    func_0x00029c74();
                    iVar5 = 0x22b2;
                    func_0x000299d1();
                  }
                  *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
                }
              }
              if (*(int *)(unaff_BP + -0xaf2) == 0x14) goto LAB_3ab8_1bb7;
              if ((*(int *)(unaff_BP + 6) != 0) && (*(int *)(unaff_BP + -0xaf2) == 1))
              goto LAB_2bb4_45c4;
              if (*(int *)(unaff_BP + -0xaf2) == 1) {
                iStack_4 = unaff_BP + -0xbcc;
                iStack_8 = 0xdf08;
                iStack_6 = iVar5;
                FUN_21f2_3454();
                iStack_4 = 0xdf15;
                iVar5 = func_0x00024ce4();
                iVar5 = iVar5 + -1;
                *(int *)(unaff_BP + -0xc76) = iVar5;
                if ((*(char *)(unaff_BP + iVar5 + -0xbcc) == '2') && (3 < *(byte *)0x123)) {
                  *(undefined1 *)(unaff_BP + iVar5 + -0xbcc) = 0;
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xdf44;
                  FUN_21f2_2d26();
                }
                iStack_4 = 0;
                iStack_6 = 0x22b2;
                iVar5 = 0x2ab8;
                iStack_8 = 0xdf58;
                FUN_28b3_26a1();
                *(undefined1 *)(unaff_BP + -0xbcc) = 0;
              }
              if (*(int *)(unaff_BP + -0xaf2) == 2) goto LAB_3ab8_1f18;
              if (*(int *)(unaff_BP + -0xaf2) != 3) {
                if (*(int *)(unaff_BP + -0x854) == 0) goto LAB_3ab8_300b;
                iStack_4 = *(int *)(unaff_BP + -0x854);
                iStack_8 = 0xdf97;
                iStack_6 = iVar5;
                iVar6 = func_0x00015409();
                iVar5 = 0x11f2;
                if (iVar6 == 0) goto LAB_3ab8_300b;
              }
              if ((*(int *)(unaff_BP + -0xaf2) != 3) ||
                 (*(int *)(unaff_BP + -0x3dc) <= *(int *)(unaff_BP + -0x47a))) {
                uVar12 = (*(uint *)(unaff_BP + -0x47a) & 0x3fff) == 0;
                func_0x000297e6();
                func_0x00029b55();
                func_0x0002996b();
                FUN_28b3_0ee9();
                func_0x000297e6();
                func_0x000297e6();
                func_0x00029b55();
                func_0x0002996b();
                FUN_28b3_1181();
                if ((bool)uVar12) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar12) {
                    iStack_4 = 0xed1c;
                    func_0x00012276();
                    iStack_4 = 0x11f2;
                    iStack_6 = 0xed2a;
                    FUN_1000_0599();
                    iStack_4 = 0xdef;
                    iStack_6 = 0xed3a;
                    func_0x00012276();
                    iVar5 = 0x11f2;
                    goto LAB_3ab8_300b;
                  }
                }
                if (*(int *)(unaff_BP + -0x47a) < *(int *)(unaff_BP + -0x3dc)) {
                  *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
                  iVar5 = *(int *)(unaff_BP + -0x47a) * 4;
                  *(undefined2 *)(unaff_BP + iVar5 + -0x140) = 1;
                  *(undefined2 *)(unaff_BP + iVar5 + -0x13e) = 0;
                  uVar11 = *(undefined2 *)(unaff_BP + -0x3ca);
                  *(undefined2 *)(unaff_BP + iVar5 + -0x5c2) = *(undefined2 *)(unaff_BP + -0x3cc);
                  *(undefined2 *)(unaff_BP + iVar5 + -0x5c0) = uVar11;
                  uVar11 = *(undefined2 *)(unaff_BP + -0x3d8);
                  *(undefined2 *)(unaff_BP + iVar5 + -0x84c) = *(undefined2 *)(unaff_BP + -0x3da);
                  *(undefined2 *)(unaff_BP + iVar5 + -0x84a) = uVar11;
                  iStack_4 = 0xedbd;
                  func_0x000297e6();
                  iStack_4 = 0xedc2;
                  func_0x00029d78();
                  iStack_a = 0x22b2;
                  iStack_c = 0xedcc;
                  func_0x000299d1();
                  iStack_a = 0x22b2;
                  iStack_c = 0xedd5;
                  func_0x000297e6();
                  iStack_a = 0x22b2;
                  iStack_c = -0x1226;
                  func_0x00029d78();
                  iStack_12 = 0x22b2;
                  iStack_14 = 0xede4;
                  func_0x000299d1();
                  iStack_12 = 0x22b2;
                  iStack_14 = 0xeded;
                  func_0x000297e6();
                  iStack_12 = 0x22b2;
                  iStack_14 = 0xedf6;
                  func_0x0002996b();
                  iStack_12 = 0x22b2;
                  iStack_14 = -0x1205;
                  func_0x00029d78();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xee05;
                  func_0x000299d1();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xee0e;
                  func_0x000297e6();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xee17;
                  func_0x0002996b();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xee1c;
                  func_0x00029d78();
                  func_0x000299d1();
                  iVar5 = 0x1bb4;
                  func_0x0001e18f();
                  if (2 < *(int *)(unaff_BP + -0x47a)) {
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029d78();
                    func_0x000299b9();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029d78();
                    func_0x000299b9();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029d78();
                    func_0x000299b9();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029d78();
                    func_0x000299b9();
                    FUN_28b3_0ee9();
                    func_0x00029834();
                    func_0x00029c2c();
                    func_0x00029834();
                    func_0x00029c2c();
                    FUN_28b3_1163();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029d78();
                    func_0x00029c2c();
                    func_0x000299b9();
                    func_0x00029c9d();
                    func_0x00029c2c();
                    func_0x00029c2c();
                    func_0x000299b9();
                    iStack_4 = 0xef58;
                    func_0x00029c74();
                    func_0x000299d1();
                    func_0x00029834();
                    iVar5 = 0x22b2;
                    func_0x000299d1();
                    uVar12 = *(byte *)0x123 < 8;
                    uVar13 = *(byte *)0x123 == 8;
                    if (!(bool)uVar12) {
                      func_0x00029834();
                      func_0x00029834();
                      func_0x00029ae7();
                      iVar5 = 0x22b2;
                      FUN_28b3_1181();
                      if ((bool)uVar12 || (bool)uVar13) {
                        func_0x00029834();
                        iVar5 = 0x22b2;
                        func_0x00029983();
                      }
                    }
                  }
                }
                else {
                  iStack_4 = 0xed55;
                  func_0x00012276();
                  iStack_4 = 0x11f2;
                  iStack_6 = 0xed63;
                  FUN_1000_0599();
                  iStack_4 = 0xdef;
                  iStack_6 = 0xed73;
                  func_0x00012276();
                  iVar5 = 0x11f2;
                }
                goto LAB_3ab8_300b;
              }
              while( true ) {
                iStack_4 = unaff_BP + -0xa20;
                iStack_8 = 0xdfd1;
                iStack_6 = iVar5;
                FUN_21f2_3454();
                iStack_4 = unaff_BP + -0x994;
                iStack_6 = unaff_BP + -0x702;
                iStack_8 = unaff_BP + -0x140;
                iStack_a = *(undefined2 *)(unaff_BP + -0x47a);
                iStack_c = 0x22b2;
                iStack_e = -0x200a;
                FUN_28b3_2a41();
                *(undefined2 *)(unaff_BP + -0x3d2) = *(undefined2 *)0xa6c;
                *(undefined2 *)0xa6c = 3;
                iStack_4 = 0xe01b;
                func_0x000297e6();
                iStack_4 = 0xe020;
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xe02a;
                func_0x000299d1();
                iStack_a = 0x22b2;
                iStack_c = 0xe033;
                func_0x000297e6();
                iStack_a = 0x22b2;
                iStack_c = 0xe038;
                func_0x00029d78();
                iStack_12 = 0x22b2;
                iStack_14 = 0xe042;
                func_0x000299d1();
                iStack_12 = 0x22b2;
                iStack_14 = 0xe04b;
                func_0x000297e6();
                iStack_12 = 0x22b2;
                iStack_14 = -0x1fb0;
                func_0x00029d78();
                uStack_1a = 0x22b2;
                uStack_1c = 0xe05a;
                func_0x000299d1();
                uStack_1a = 0x22b2;
                uStack_1c = 0xe063;
                func_0x000297e6();
                uStack_1a = 0x22b2;
                uStack_1c = 0xe068;
                func_0x00029d78();
                func_0x000299d1();
                func_0x0001e18f();
                *(undefined2 *)0xa6c = *(undefined2 *)(unaff_BP + -0x3d2);
                iStack_4 = unaff_BP + -0xc0e;
                iStack_6 = unaff_BP + -0xa20;
                iStack_8 = 1;
                iStack_a = 0x1bb4;
                iVar5 = 0x1bb4;
                iStack_c = -0x1f62;
                uVar11 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0xc6e) = uVar11;
                if (*(int *)0x158 != 0) {
                  FUN_1885_2ec3();
                  goto LAB_2bb4_45c4;
                }
                if (*(int *)(unaff_BP + -0xc6e) == -1) break;
                func_0x000297e6();
                func_0x00029d78();
                iStack_8 = 0x22b2;
                iStack_a = 0xe0dc;
                func_0x000299d1();
                iStack_8 = 0x22b2;
                iStack_a = 0xe0e5;
                func_0x000297e6();
                iStack_8 = 0x22b2;
                iStack_a = 0xe0ea;
                func_0x00029d78();
                uStack_10 = 0x22b2;
                iStack_12 = 0xe0f4;
                func_0x000299d1();
                uStack_10 = 0x22b2;
                iStack_12 = -0x1f07;
                lVar14 = FUN_13bf_39a0();
                *(undefined2 *)(unaff_BP + -0x850) = (int)lVar14;
                *(undefined2 *)(unaff_BP + -0x84e) = (int)((ulong)lVar14 >> 0x10);
                if (lVar14 < 0) {
                  iStack_4 = 0x11f2;
                  iStack_6 = -0x1ecb;
                  puVar15 = (undefined2 *)func_0x00000271();
                  puVar8 = (undefined2 *)puVar15;
                  puVar7 = (undefined2 *)(unaff_BP + -0x404);
                  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                    puVar3 = puVar7;
                    puVar7 = puVar7 + 1;
                    puVar2 = puVar8;
                    puVar8 = puVar8 + 1;
                    *puVar3 = *puVar2;
                  }
                  uVar12 = (*(uint *)(unaff_BP + -0x47a) & 0x3fff) == 0;
                  func_0x000297e6();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  func_0x000297e6();
                  func_0x000297e6();
                  func_0x0002996b();
                  FUN_28b3_1181();
                  if ((bool)uVar12) {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if (!(bool)uVar12) goto LAB_3ab8_3638;
                    iVar5 = 0x11f2;
                    iStack_4 = 0xe1b4;
                    func_0x00012276();
                  }
                  else {
LAB_3ab8_3638:
                    func_0x00013e19();
                    *(undefined1 *)(unaff_BP + -0x3ea) = 2;
                    *(undefined1 *)(unaff_BP + -0x3e9) = 9;
                    puVar8 = &uStack_1e;
                    puVar7 = (undefined2 *)(unaff_BP + -0x404);
                    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                      puVar2 = puVar8;
                      puVar8 = puVar8 + 1;
                      puVar15 = puVar7;
                      puVar7 = puVar7 + 1;
                      *puVar2 = *puVar15;
                    }
                    func_0x00013e46();
                    iStack_4 = unaff_BP + -0x994;
                    iStack_6 = unaff_BP + -0x702;
                    iStack_8 = unaff_BP + -0x140;
                    iStack_a = -*(int *)(unaff_BP + -0x47a);
                    iStack_c = 0x11f2;
                    iStack_e = -0x1dfc;
                    FUN_28b3_2a41();
                    *(undefined2 *)(unaff_BP + -0x3d2) = *(undefined2 *)0xa6c;
                    *(undefined2 *)0xa6c = 3;
                    iStack_4 = 0xe229;
                    func_0x000297e6();
                    iStack_4 = 0xe22e;
                    func_0x00029d78();
                    iStack_a = 0x22b2;
                    iStack_c = 0xe238;
                    func_0x000299d1();
                    iStack_a = 0x22b2;
                    iStack_c = 0xe241;
                    func_0x000297e6();
                    iStack_a = 0x22b2;
                    iStack_c = 0xe246;
                    func_0x00029d78();
                    iStack_12 = 0x22b2;
                    iStack_14 = 0xe250;
                    func_0x000299d1();
                    iStack_12 = 0x22b2;
                    iStack_14 = 0xe259;
                    func_0x000297e6();
                    iStack_12 = 0x22b2;
                    iStack_14 = -0x1da2;
                    func_0x00029d78();
                    uStack_1a = 0x22b2;
                    uStack_1c = 0xe268;
                    func_0x000299d1();
                    uStack_1a = 0x22b2;
                    uStack_1c = 0xe271;
                    func_0x000297e6();
                    uStack_1a = 0x22b2;
                    uStack_1c = 0xe276;
                    func_0x00029d78();
                    func_0x000299d1();
                    func_0x0001e18f();
                    *(undefined2 *)0xa6c = *(undefined2 *)(unaff_BP + -0x3d2);
                    iStack_4 = 0x697d;
                    iStack_6 = unaff_BP + -0xa20;
                    iStack_8 = 0x1bb4;
                    iStack_a = 0xe2a5;
                    FUN_21f2_3454();
                    *(undefined2 *)0xc20 = 1;
                    iStack_4 = unaff_BP + -0x3cc;
                    iStack_6 = unaff_BP + -0xa20;
                    iStack_8 = 9999;
                    iStack_a = 0x22b2;
                    iStack_c = -0x1d35;
                    uVar11 = FUN_1def_0904();
                    *(undefined2 *)(unaff_BP + -0xc6e) = uVar11;
                    *(undefined2 *)0xc20 = 0;
                    iVar5 = 0x11f2;
                    func_0x00013e19();
                    if (*(int *)0x158 != 0) {
                      FUN_1885_2ec3();
                      goto LAB_2bb4_45c4;
                    }
                    if (*(int *)(unaff_BP + -0xc6e) != -1) {
                      if (*(int *)(unaff_BP + -0x854) != 0) {
                        iStack_4 = *(int *)(unaff_BP + -0x854);
                        iStack_6 = 0x11f2;
                        iStack_8 = 0xe319;
                        iVar5 = func_0x00015409();
                        uVar12 = 0;
                        uVar13 = iVar5 == 0;
                        if (!(bool)uVar13) {
                          func_0x000297e6();
                          func_0x000297e6();
                          FUN_28b3_1181();
                          if ((bool)uVar13) {
                            func_0x000297e6();
                            func_0x000297e6();
                            FUN_28b3_1181();
                            if ((bool)uVar13) {
                              iStack_4 = -0x1c98;
                              func_0x00012276();
                              goto LAB_3ab8_3638;
                            }
                          }
                          uVar13 = 0;
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_0ee9();
                          uVar11 = *(undefined2 *)0xa5aa;
                          *(undefined2 *)(unaff_BP + -0xc76) = *(undefined2 *)0xa5a8;
                          *(undefined2 *)(unaff_BP + -0xc74) = uVar11;
                          func_0x000297e6();
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_100d();
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x00029c9d();
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x00029c9d();
                          FUN_28b3_1163();
                          FUN_28b3_1181();
                          if (!(bool)uVar12 && !(bool)uVar13) {
                            uVar11 = *(undefined2 *)(unaff_BP + -0xc70);
                            *(undefined2 *)(unaff_BP + -0x70a) = *(undefined2 *)(unaff_BP + -0xc72);
                            *(undefined2 *)(unaff_BP + -0x708) = uVar11;
                            func_0x000297e6();
                            func_0x00029983();
                            uVar11 = *(undefined2 *)(unaff_BP + -0x708);
                            *(undefined2 *)(unaff_BP + -0xc92) = *(undefined2 *)(unaff_BP + -0x70a);
                            *(undefined2 *)(unaff_BP + -0xc90) = uVar11;
                            uVar11 = *(undefined2 *)(unaff_BP + -0xc88);
                            *(undefined2 *)(unaff_BP + -0x70a) = *(undefined2 *)(unaff_BP + -0xc8a);
                            *(undefined2 *)(unaff_BP + -0x708) = uVar11;
                            func_0x000297e6();
                            func_0x00029983();
                            uVar11 = *(undefined2 *)(unaff_BP + -0x708);
                            *(undefined2 *)(unaff_BP + -0xc9a) = *(undefined2 *)(unaff_BP + -0x70a);
                            *(undefined2 *)(unaff_BP + -0xc98) = uVar11;
                            uVar11 = *(undefined2 *)0xa5f6;
                            *(undefined2 *)(unaff_BP + -0xc76) = *(undefined2 *)0xa5f4;
                            *(undefined2 *)(unaff_BP + -0xc74) = uVar11;
                          }
                          uVar11 = *(undefined2 *)0xa5aa;
                          *(undefined2 *)(unaff_BP + -0xc9e) = *(undefined2 *)0xa5a8;
                          *(undefined2 *)(unaff_BP + -0xc9c) = uVar11;
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_0ee9();
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_0ee9();
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_0ee9();
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_0ee9();
                          if (*(int *)(unaff_BP + -0x3f8) != 10000) {
                            uVar11 = *(undefined2 *)(unaff_BP + -0x3f8);
                            *(undefined2 *)(unaff_BP + -0xca4) = 0;
                            *(undefined2 *)(unaff_BP + -0xca6) = 0;
                            *(undefined2 *)(unaff_BP + -0xca8) = 0;
                            *(undefined2 *)(unaff_BP + -0xcaa) = uVar11;
                            func_0x00029da5();
                            func_0x00029b6d();
                            func_0x00029983();
                            puVar8 = (undefined2 *)&stack0xffde;
                            puVar7 = (undefined2 *)(unaff_BP + -0x404);
                            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                              puVar2 = puVar8;
                              puVar8 = puVar8 + 1;
                              puVar15 = puVar7;
                              puVar7 = puVar7 + 1;
                              *puVar2 = *puVar15;
                            }
                            uStack_26 = 0xe551;
                            puVar7 = (undefined2 *)func_0x0001fcff();
                            *(undefined2 *)(unaff_BP + -0xc64) = *puVar7;
                            *(undefined2 *)(unaff_BP + -0xc62) = puVar7[1];
                            *(undefined2 *)(unaff_BP + -0xc60) = puVar7[2];
                            *(undefined2 *)(unaff_BP + -0xc5e) = puVar7[3];
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029d78();
                            func_0x000299b9();
                            func_0x00029c2c();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029d78();
                            func_0x000299b9();
                            func_0x00029c2c();
                            FUN_28b3_117c();
                            func_0x000299b9();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            FUN_28b3_1163();
                            func_0x00029b85();
                            func_0x000299b9();
                            func_0x00029c2c();
                            FUN_28b3_1163();
                            func_0x000297e6();
                            func_0x00029d78();
                            FUN_28b3_117c();
                            func_0x00029983();
                            func_0x00029834();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            FUN_28b3_117c();
                            func_0x000297e6();
                            func_0x00029d78();
                            FUN_28b3_117c();
                            func_0x00029983();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029d78();
                            func_0x000299b9();
                            func_0x00029c2c();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029d78();
                            func_0x000299b9();
                            func_0x00029c2c();
                            FUN_28b3_117c();
                            func_0x000299b9();
                            func_0x000299d1();
                            func_0x00029834();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            FUN_28b3_1163();
                            func_0x00029b85();
                            func_0x000299b9();
                            func_0x000299d1();
                            func_0x00029834();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            FUN_28b3_1163();
                            func_0x000297e6();
                            func_0x00029d78();
                            FUN_28b3_117c();
                            func_0x00029983();
                            func_0x00029834();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            FUN_28b3_117c();
                            func_0x000297e6();
                            func_0x00029d78();
                            FUN_28b3_117c();
                            func_0x00029983();
                          }
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x00029d78();
                          iStack_8 = 0x22b2;
                          iStack_a = 0xe7cb;
                          func_0x000299d1();
                          iStack_8 = 0x22b2;
                          iStack_a = 0xe7d4;
                          func_0x000297e6();
                          iStack_8 = 0x22b2;
                          iStack_a = 0xe7dd;
                          FUN_28b3_100d();
                          iStack_8 = 0x22b2;
                          iStack_a = 0xe7e2;
                          func_0x00029d78();
                          uStack_10 = 0x22b2;
                          iStack_12 = 0xe7ec;
                          func_0x000299d1();
                          uStack_10 = 0x22b2;
                          iStack_12 = 0xe7f1;
                          puVar7 = (undefined2 *)func_0x0002a178();
                          *(undefined2 *)(unaff_BP + -0xc44) = *puVar7;
                          *(undefined2 *)(unaff_BP + -0xc42) = puVar7[1];
                          *(undefined2 *)(unaff_BP + -0xc40) = puVar7[2];
                          *(undefined2 *)(unaff_BP + -0xc3e) = puVar7[3];
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x00029d78();
                          func_0x000299b9();
                          FUN_28b3_0ee9();
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x00029d78();
                          func_0x000299b9();
                          FUN_28b3_0ee9();
                          func_0x00029834();
                          func_0x00029834();
                          iStack_8 = 0x22b2;
                          iStack_a = 0xe86c;
                          func_0x000299d1();
                          iStack_8 = 0x22b2;
                          iStack_a = 0xe875;
                          func_0x00029834();
                          uStack_10 = 0x22b2;
                          iStack_12 = 0xe87f;
                          func_0x000299d1();
                          uStack_10 = 0x22b2;
                          iStack_12 = -0x177c;
                          func_0x0002a178();
                          uVar12 = (undefined1 *)0xffef < &iStack_e;
                          uVar13 = &stack0x0000 == (undefined1 *)0xfffe;
                          func_0x00029834();
                          func_0x000299b9();
                          FUN_28b3_1181();
                          if (!(bool)uVar13) {
                            func_0x00029834();
                            func_0x00029834();
                            FUN_28b3_1181();
                            if ((bool)uVar12 || (bool)uVar13) {
                              func_0x00029834();
                              iStack_4 = -0x1708;
                              func_0x00029c74();
                              func_0x000299d1();
                            }
                            func_0x000297e6();
                            func_0x00029b6d();
                            func_0x0002996b();
                            func_0x00029b6d();
                            func_0x00029d78();
                            func_0x000299b9();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029bfc();
                            func_0x000299b9();
                            func_0x00029c9d();
                            func_0x00029c2c();
                            func_0x000299b9();
                            func_0x000299d1();
                            func_0x00029834();
                            func_0x00029ae7();
                            func_0x000299d1();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029c9d();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029c9d();
                            FUN_28b3_1163();
                            func_0x00029d78();
                            func_0x00029c2c();
                            func_0x00029b6d();
                            func_0x00029b6d();
                            func_0x00029ae7();
                            func_0x0002996b();
                            FUN_28b3_0ee9();
                            func_0x00029834();
                            func_0x00029834();
                            FUN_28b3_1181();
                            if (!(bool)uVar12 && !(bool)uVar13) {
                              func_0x000297e6();
                              func_0x00029af6();
                              func_0x00029983();
                            }
                            func_0x00029834();
                            FUN_28b3_100d();
                            func_0x00029b6d();
                            func_0x00029c2c();
                            func_0x00029c2c();
                            func_0x00029b6d();
                            func_0x000299d1();
                            func_0x000297e6();
                            *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
                            func_0x0002996b();
                            func_0x0002996b();
                            FUN_28b3_0ee9();
                            func_0x000297e6();
                            func_0x0002996b();
                            func_0x0002996b();
                            FUN_28b3_0ee9();
                            if (2 < *(int *)(unaff_BP + -0x47a)) {
                              func_0x000297e6();
                              FUN_28b3_100d();
                              func_0x000297e6();
                              FUN_28b3_100d();
                              func_0x00029c9d();
                              func_0x000297e6();
                              FUN_28b3_100d();
                              func_0x000297e6();
                              FUN_28b3_100d();
                              func_0x00029c9d();
                              FUN_28b3_1163();
                              func_0x00029d78();
                              func_0x000297e6();
                              func_0x00029b6d();
                              func_0x00029d78();
                              func_0x00029c2c();
                              func_0x0002996b();
                              func_0x00029d78();
                              func_0x00029c9d();
                              func_0x00029b6d();
                              func_0x00029c2c();
                              iStack_4 = -0x146f;
                              func_0x00029c74();
                              func_0x000299d1();
                            }
                            func_0x00029834();
                            iStack_4 = 0xebaa;
                            func_0x00029c74();
                            func_0x000299d1();
                            iVar5 = unaff_BP + *(int *)(unaff_BP + -0x47a) * 8;
                            *(undefined2 *)(iVar5 + -0x3c0) = *(undefined2 *)(unaff_BP + -0x482);
                            *(undefined2 *)(iVar5 + -0x3be) = *(undefined2 *)(unaff_BP + -0x480);
                            *(undefined2 *)(iVar5 + -0x3bc) = *(undefined2 *)(unaff_BP + -0x47e);
                            *(undefined2 *)(iVar5 + -0x3ba) = *(undefined2 *)(unaff_BP + -0x47c);
                            uVar11 = *(undefined2 *)(unaff_BP + -0x84e);
                            iVar5 = *(int *)(unaff_BP + -0x47a) * 4;
                            *(undefined2 *)(unaff_BP + iVar5 + -0x140) =
                                 *(undefined2 *)(unaff_BP + -0x850);
                            *(undefined2 *)(unaff_BP + iVar5 + -0x13e) = uVar11;
                            iStack_4 = 0xebec;
                            func_0x000297e6();
                            iStack_4 = 0xebf1;
                            func_0x00029d78();
                            iStack_a = 0x22b2;
                            iStack_c = 0xebfb;
                            func_0x000299d1();
                            iStack_a = 0x22b2;
                            iStack_c = 0xec04;
                            func_0x000297e6();
                            iStack_a = 0x22b2;
                            iStack_c = 0xec09;
                            func_0x00029d78();
                            iStack_12 = 0x22b2;
                            iStack_14 = 0xec13;
                            func_0x000299d1();
                            iStack_14 = -*(int *)(unaff_BP + -0x850);
                            iStack_12 = -(*(int *)(unaff_BP + -0x84e) +
                                         (uint)(*(int *)(unaff_BP + -0x850) != 0));
                            *(int *)(unaff_BP + -0xcea) = iStack_14;
                            *(int *)(unaff_BP + -0xce8) = iStack_12;
                            uStack_16 = 0x22b2;
                            uStack_18 = 0xec33;
                            FUN_20a9_1260();
                            uVar11 = *(undefined2 *)(unaff_BP + -0x46a);
                            *(undefined2 *)(unaff_BP + iVar5 + -0x702) =
                                 *(undefined2 *)(unaff_BP + -0x46c);
                            *(undefined2 *)(unaff_BP + iVar5 + -0x700) = uVar11;
                            iStack_4 = 0xec54;
                            func_0x000297e6();
                            iStack_4 = 0xec59;
                            func_0x00029d78();
                            iStack_a = 0x22b2;
                            iStack_c = 0xec63;
                            func_0x000299d1();
                            iStack_a = 0x22b2;
                            iStack_c = 0xec6c;
                            func_0x000297e6();
                            iStack_a = 0x22b2;
                            iStack_c = -0x138f;
                            func_0x00029d78();
                            iStack_12 = 0x22b2;
                            iStack_14 = 0xec7b;
                            func_0x000299d1();
                            iStack_12 = *(int *)(unaff_BP + -0xce8);
                            iStack_14 = *(int *)(unaff_BP + -0xcea);
                            uStack_16 = 0x22b2;
                            uStack_18 = 0xec88;
                            FUN_20a9_1260();
                            uVar11 = *(undefined2 *)(unaff_BP + -0x46a);
                            *(undefined2 *)(unaff_BP + iVar5 + -0x994) =
                                 *(undefined2 *)(unaff_BP + -0x46c);
                            *(undefined2 *)(unaff_BP + iVar5 + -0x992) = uVar11;
                            iVar5 = 0x1bb4;
                            break;
                          }
                          iStack_4 = 0xe8ac;
                          func_0x00012276();
                          iStack_4 = 0x11f2;
                          iStack_6 = -0x1746;
                          FUN_1000_0599();
                          iStack_4 = -0x173b;
                          func_0x00012276();
                        }
                      }
                      goto LAB_3ab8_3638;
                    }
                  }
                }
                else {
                  iVar5 = 0x11f2;
                  iStack_4 = 0xe11b;
                  func_0x00012276();
                }
              }
              goto LAB_3ab8_300b;
            }
            func_0x000297e6();
            func_0x00029d78();
            iStack_8 = 0x22b2;
            iStack_a = 0xde0e;
            func_0x000299d1();
            iStack_8 = 0x22b2;
            iStack_a = 0xde17;
            func_0x000297e6();
            iStack_8 = 0x22b2;
            iStack_a = 0xde1c;
            func_0x00029d78();
            uStack_10 = 0x22b2;
            iStack_12 = 0xde26;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            iStack_12 = -0x21d5;
            func_0x0000507a();
            iVar5 = 0x3bf;
          } while( true );
        }
        if (*(int *)(unaff_BP + -0xa3c) == 4) {
          iStack_6 = 0xefd3;
          iStack_4 = iVar5;
          FUN_21f2_3454();
          if (*(int *)0x1170 == 0) {
            iStack_4 = 0x22b2;
            iStack_6 = 0xefee;
            FUN_21f2_3454();
          }
          if (*(int *)0x1170 == 1) {
            iStack_4 = 0x22b2;
            iStack_6 = 0xf009;
            FUN_21f2_3454();
          }
          iVar5 = 0x22b2;
          if (*(int *)0x1170 == 2) {
            iStack_4 = 0x22b2;
            iVar5 = 0x22b2;
            iStack_6 = 0xf024;
            FUN_21f2_3454();
          }
          do {
            *(undefined2 *)(unaff_BP + -0x47a) = 0;
            do {
              do {
                while( true ) {
                  iStack_6 = 0xf03b;
                  iStack_4 = iVar5;
                  FUN_21f2_3454();
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xf04b;
                  FUN_21f2_2d26();
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xf05b;
                  FUN_21f2_2d26();
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xf06b;
                  FUN_21f2_2d26();
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xf07b;
                  FUN_21f2_2d26();
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xf08b;
                  FUN_21f2_2d26();
                  *(undefined2 *)0xc1a = 1;
                  *(undefined2 *)0xc20 = 1;
                  *(undefined2 *)0xc2c = 1;
                  if (*(int *)0xa62 == 0x1b) {
                    *(undefined2 *)0xc1a = 0;
                  }
                  iStack_4 = unaff_BP + -0xbe0;
                  iStack_6 = unaff_BP + -0xa20;
                  iStack_8 = 0;
                  iStack_a = 0x22b2;
                  iVar5 = 0x1bb4;
                  iStack_c = -0xf3a;
                  uVar11 = FUN_1def_0904();
                  *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
                  *(undefined2 *)0xc1a = 0;
                  *(undefined2 *)0xc20 = 0;
                  *(undefined2 *)0xc2c = 0;
                  if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
                  if (*(int *)0xc18 == 0) break;
                  func_0x000297e6();
                  func_0x00029d78();
                  iStack_8 = 0x22b2;
                  iStack_a = 0xf108;
                  func_0x000299d1();
                  iStack_8 = 0x22b2;
                  iStack_a = 0xf111;
                  func_0x000297e6();
                  iStack_8 = 0x22b2;
                  iStack_a = 0xf116;
                  func_0x00029d78();
                  uStack_10 = 0x22b2;
                  iStack_12 = 0xf120;
                  func_0x000299d1();
                  uStack_10 = 0x22b2;
                  iVar5 = 0x3bf;
                  iStack_12 = -0xedb;
                  func_0x0000507a();
                }
                if (*(int *)(unaff_BP + -0xaf2) == 0x14) goto LAB_3ab8_1bb7;
              } while (*(int *)(unaff_BP + -0x854) == 0);
              iStack_4 = *(undefined2 *)(unaff_BP + -0x854);
              iStack_6 = 0x1bb4;
              iVar5 = 0x11f2;
              iStack_8 = 0xf155;
              iVar6 = func_0x00015409();
            } while (iVar6 == 0);
LAB_3ab8_45e6:
            while( true ) {
              iStack_4 = 0xf170;
              FUN_28b3_2b81();
              iStack_4 = 0x2ab8;
              iStack_6 = 0xf180;
              FUN_21f2_3454();
              iStack_4 = 0x22b2;
              iStack_6 = 0xf190;
              FUN_21f2_2d26();
              iStack_4 = 0x22b2;
              iStack_6 = 0xf1a0;
              FUN_21f2_2d26();
              iStack_4 = 0x22b2;
              iStack_6 = 0xf1b1;
              FUN_21f2_2d26();
              if (*(int *)(unaff_BP + -0x47a) != 0) {
                iStack_4 = 0x22b2;
                iStack_6 = 0xf1cb;
                FUN_21f2_2d26();
                if (*(int *)(unaff_BP + 6) == 0) {
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xf1e4;
                  FUN_21f2_2d26();
                }
                else {
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xf1f7;
                  FUN_21f2_2d26();
                }
                if (*(char *)0x124 != '\0') {
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xf211;
                  FUN_21f2_2d26();
                }
                *(undefined2 *)(unaff_BP + -0xcea) = 0x1a;
                *(undefined2 *)(unaff_BP + -0xce2) = 0x32;
                if (*(char *)0x134 != '\0') {
                  *(undefined2 *)(unaff_BP + -0xcea) = 0x32;
                  *(undefined2 *)(unaff_BP + -0xce2) = 0x1a;
                }
                iStack_4 = 0x22b2;
                iStack_6 = 0xf242;
                FUN_1000_0599();
                iStack_4 = 0xf24e;
                func_0x00012276();
                iStack_4 = 0x11f2;
                iStack_6 = 0xf25c;
                FUN_1000_0599();
                iStack_4 = 0x69b9;
                iStack_6 = 0xdef;
                iStack_8 = 0xf271;
                func_0x00012276();
                iStack_4 = 0x11f2;
                iStack_6 = 0xf281;
                FUN_1000_0599();
                iStack_4 = 0x69c3;
                iStack_6 = 0xdef;
                iStack_8 = 0xf296;
                func_0x00012276();
                iStack_4 = 0x69cd;
                iStack_6 = unaff_BP + -0xb58;
                iStack_8 = 0x11f2;
                iStack_a = 0xf2b1;
                FUN_21f2_3454();
                iStack_4 = 0x69d2;
                iStack_6 = unaff_BP + -0xbcc;
                iStack_8 = 0x22b2;
                iStack_a = 0xf2cc;
                FUN_21f2_3454();
                if (*(char *)0x134 != '\0') {
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xf2e8;
                  FUN_21f2_3454();
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xf2f9;
                  FUN_21f2_3454();
                  iStack_4 = 0x22b2;
                  iStack_6 = 0xf30a;
                  FUN_21f2_3454();
                }
              }
              *(undefined2 *)0xc1a = 1;
              *(undefined2 *)0xc20 = 1;
              *(undefined2 *)0xc2c = 1;
              if (*(int *)0xa62 == 0x1b) {
                *(undefined2 *)0xc1a = 0;
              }
              iStack_4 = unaff_BP + -0xc0e;
              iStack_6 = unaff_BP + -0xa20;
              iStack_8 = 1;
              iStack_a = 0x22b2;
              iStack_c = -0xcbb;
              uVar11 = FUN_1def_0904();
              *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
              *(undefined2 *)0xc1a = 0;
              *(undefined2 *)0xc20 = 0;
              *(undefined2 *)0xc2c = 0;
              iStack_4 = 0x1bb4;
              iStack_6 = 0xf365;
              FUN_1000_0599();
              func_0x00010526();
              iStack_4 = 0xdef;
              iStack_6 = -0xc87;
              FUN_1000_0599();
              iVar5 = 0xdef;
              func_0x00010526();
              if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
              if (*(int *)0xc18 == 0) break;
              func_0x000297e6();
              func_0x00029d78();
              iStack_8 = 0x22b2;
              iStack_a = 0xf3af;
              func_0x000299d1();
              iStack_8 = 0x22b2;
              iStack_a = 0xf3b8;
              func_0x000297e6();
              iStack_8 = 0x22b2;
              iStack_a = 0xf3bd;
              func_0x00029d78();
              uStack_10 = 0x22b2;
              iStack_12 = 0xf3c7;
              func_0x000299d1();
              uStack_10 = 0x22b2;
              iStack_12 = -0xc34;
              func_0x0000507a();
            }
          } while (*(int *)(unaff_BP + -0xaf2) == -1);
          if ((*(int *)(unaff_BP + -0xaf2) == 1) && (*(int *)(unaff_BP + 6) != 0)) break;
          if ((*(int *)(unaff_BP + -0xaf2) == 1) && (*(int *)(unaff_BP + -0x47a) != 0)) {
            iStack_4 = 0;
            iStack_6 = 0xdef;
            iVar5 = 0x2ab8;
            iStack_8 = 0xf41c;
            FUN_28b3_26a1();
          }
          if ((*(int *)(unaff_BP + -0xaf2) == 2) && (*(int *)(unaff_BP + -0x47a) != 0)) {
            if (*(char *)0x134 == '\0') {
              *(undefined1 *)0x134 = 1;
            }
            else {
              *(undefined1 *)0x134 = 0;
            }
          }
          if (*(int *)(unaff_BP + -0xaf2) == 0x14) goto LAB_3ab8_1bb7;
          if (*(int *)(unaff_BP + -0x854) != 0) {
            iStack_4 = *(undefined2 *)(unaff_BP + -0x854);
            iStack_8 = 0xf474;
            iStack_6 = iVar5;
            iVar5 = func_0x00015409();
            uVar12 = iVar5 == 0;
            if (!(bool)uVar12) {
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x0002996b();
              FUN_28b3_0ee9();
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x0002996b();
              FUN_28b3_1181();
              if ((bool)uVar12) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar12) {
                  iStack_4 = 0xf4fb;
                  func_0x00012276();
                  *(undefined2 *)0xc22 = 1;
                  iStack_4 = 0x11f2;
                  iStack_6 = 0xf50f;
                  FUN_1000_0599();
                  iStack_4 = 0xdef;
                  iStack_6 = -0xae1;
                  func_0x00012276();
                  goto LAB_3ab8_45e6;
                }
              }
              *(undefined2 *)(unaff_BP + -0x47a) = 1;
              if (*(int *)0xcb6 != 0) {
                iStack_4 = 1;
                iStack_6 = 0x22b2;
                iStack_8 = 0xf54a;
                FUN_1def_0338();
              }
              func_0x000297e6();
              func_0x00029b6d();
              func_0x0002996b();
              func_0x00029b6d();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x000299b9();
              FUN_28b3_0ee9();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x000299d1();
              uVar12 = *(byte *)0x123 < 8;
              uVar13 = *(byte *)0x123 == 8;
              if (!(bool)uVar12) {
                func_0x00029834();
                func_0x00029834();
                func_0x00029ae7();
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  func_0x00029834();
                  func_0x00029983();
                }
                func_0x00029834();
                func_0x00029834();
                func_0x00029ae7();
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  func_0x00029834();
                  func_0x00029983();
                }
              }
              iStack_4 = *(undefined2 *)(unaff_BP + -0xbce);
              iStack_6 = *(undefined2 *)(unaff_BP + -0xbd0);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xbd2);
              iStack_a = *(undefined2 *)(unaff_BP + -0xbd4);
              iStack_c = unaff_BP + -0xa76;
              iStack_e = 0x22b2;
              iVar6 = 0x1bb4;
              uStack_10 = 0xf64b;
              iVar5 = func_0x0002267f();
              if (iVar5 == 0) {
                iStack_4 = 0x1bb4;
                iVar6 = 0x22b2;
                iStack_6 = 0xf665;
                FUN_21f2_3454();
              }
              iStack_4 = *(undefined2 *)(unaff_BP + -0xbf8);
              iStack_6 = *(int *)(unaff_BP + -0xbfa);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xbfc);
              iStack_a = *(undefined2 *)(unaff_BP + -0xbfe);
              iStack_c = unaff_BP + -0xae0;
              uStack_10 = 0xf689;
              iStack_e = iVar6;
              iVar5 = func_0x0002267f();
              if (iVar5 == 0) {
                iStack_4 = 0x1bb4;
                iStack_6 = -0x95d;
                FUN_21f2_3454();
              }
            }
          }
          goto LAB_3ab8_45e6;
        }
        *(undefined2 *)(unaff_BP + -0x47a) = 0;
        if (*(int *)(unaff_BP + -0xa3c) != 5) break;
        iStack_6 = 0xf6c9;
        iStack_4 = iVar5;
        FUN_21f2_3454();
        iStack_4 = 0x22b2;
        iStack_6 = 0xf6d9;
        FUN_21f2_3454();
        iStack_4 = 0x22b2;
        iStack_6 = 0xf6e9;
        FUN_21f2_3454();
        iStack_4 = 0x22b2;
        uVar11 = 0x22b2;
        iStack_6 = 0xf6f9;
        FUN_21f2_3454();
        goto LAB_3ab8_4b7b;
      }
      break;
    }
    func_0x000297e6();
    func_0x00029d78();
    iStack_8 = 0x22b2;
    iStack_a = 0xfa3f;
    func_0x000299d1();
    iStack_8 = 0x22b2;
    iStack_a = 0xfa48;
    func_0x000297e6();
    iStack_8 = 0x22b2;
    iStack_a = 0xfa4d;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    iStack_12 = 0xfa57;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uVar11 = 0x3bf;
    iStack_12 = -0x5a4;
    func_0x0000507a();
LAB_3ab8_4b7b:
    iStack_6 = 0xf709;
    iStack_4 = uVar11;
    FUN_21f2_3454();
    if (*(int *)(unaff_BP + 6) != 0) {
      uVar11 = FUN_3ab8_4c9f();
      return uVar11;
    }
    iStack_4 = 0x22b2;
    iStack_6 = 0xf723;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf733;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf744;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf754;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf765;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf775;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf786;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf796;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf7a7;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf7b7;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf7c8;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf7d8;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf7e9;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    iStack_6 = 0xf7f9;
    FUN_21f2_2d26();
    iStack_4 = 0x22b2;
    uVar11 = 0x22b2;
    iStack_6 = 0xf80a;
    FUN_21f2_2d26();
  }
LAB_2bb4_45c4:
  while( true ) {
    FUN_32b2_6d14();
    iStack_4 = 0x3ff;
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
    iStack_4 = *(undefined2 *)(unaff_BP + -0xba);
    iStack_6 = *(undefined2 *)(unaff_BP + -0xbc);
    iStack_8 = 0x32b2;
    iStack_a = 0x119;
    FUN_32b2_75fe();
    iStack_4 = 0x123;
    FUN_32b2_6d14();
    iStack_4 = 299;
    FUN_32b2_704d();
    iStack_4 = 0x133;
    FUN_32b2_7095();
    iStack_4 = 0x13b;
    FUN_32b2_6eb1();
    iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
    iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
    iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
    iStack_a = 0x32b2;
    iStack_c = 0x150;
    FUN_32b2_75ec();
    uVar12 = &stack0x0000 == (undefined1 *)0x2;
    iStack_4 = 0x32b2;
    iStack_6 = 0x15a;
    FUN_32b2_6d14();
    iStack_4 = 0x32b2;
    iStack_6 = 0x162;
    FUN_32b2_704d();
    iStack_4 = 0x32b2;
    iStack_6 = 0x16a;
    FUN_32b2_7095();
    iStack_4 = 0x32b2;
    iStack_6 = 0x173;
    FUN_32b2_6eb1();
    iStack_4 = 0x32b2;
    iStack_6 = 0x17b;
    FUN_32b2_6cc6();
    iStack_4 = 0x32b2;
    iStack_6 = 0x183;
    FUN_32b2_6cc6();
    iStack_4 = 0x32b2;
    iStack_6 = 0x188;
    FUN_32b2_7191();
    if ((bool)uVar12) {
      iStack_4 = 0x32b2;
      iStack_6 = 0x192;
      FUN_32b2_6cc6();
      iStack_4 = 0x32b2;
      iStack_6 = 0x19a;
      FUN_32b2_6cc6();
      iStack_4 = 0x32b2;
      iStack_6 = 0x19f;
      FUN_32b2_7191();
      if ((bool)uVar12) {
        return 0;
      }
    }
    iStack_4 = unaff_BP + -0xa8;
    iStack_6 = unaff_BP + -0x1c;
    iStack_8 = *(undefined2 *)(unaff_BP + -0x7c);
    iStack_a = *(undefined2 *)(unaff_BP + -0x7e);
    iStack_c = *(int *)(unaff_BP + -0x80);
    iStack_e = *(int *)(unaff_BP + -0x82);
    uStack_10 = *(undefined2 *)(unaff_BP + -0x58);
    iStack_12 = *(undefined2 *)(unaff_BP + -0x5a);
    iStack_14 = *(int *)(unaff_BP + -0x5c);
    uStack_16 = *(undefined2 *)(unaff_BP + -0x5e);
    uStack_18 = 0x32b2;
    uStack_1a = 0x1d0;
    FUN_32b2_6cc6();
    uStack_18 = 0x32b2;
    uStack_1a = 0x1d5;
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    uStack_28 = 0x32b2;
    uStack_2a = 0x1f6;
    FUN_32b2_6eb1();
    uStack_28 = 0x32b2;
    uStack_2a = 0x1fa;
    iVar5 = FUN_3ab8_4fbd();
    if (iVar5 == 0) break;
    iStack_4 = 0x32b2;
    iStack_6 = 0x209;
    FUN_32b2_6cc6();
    iStack_4 = 0x32b2;
    iStack_6 = 0x20e;
    FUN_32b2_7258();
    iStack_4 = 0x32b2;
    iStack_6 = 0x216;
    FUN_32b2_6e99();
    iStack_4 = 0x32b2;
    iStack_6 = 0x21e;
    FUN_32b2_6ef9();
    iStack_4 = unaff_BP + -0xb4;
    iStack_6 = unaff_BP + -0xa4;
    iStack_8 = 0x32b2;
    iStack_a = 0x231;
    FUN_32b2_6cc6();
    iStack_8 = 0x32b2;
    iStack_a = 0x236;
    FUN_32b2_7258();
    uStack_10 = 0x32b2;
    iStack_12 = 0x240;
    FUN_32b2_6eb1();
    uStack_10 = 0x32b2;
    iStack_12 = 0x248;
    FUN_32b2_6cc6();
    uStack_10 = 0x32b2;
    iStack_12 = 0x24d;
    FUN_32b2_7258();
    uStack_18 = 0x32b2;
    uStack_1a = 599;
    FUN_32b2_6eb1();
    uStack_18 = 0x32b2;
    uStack_1a = 0x25f;
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    uStack_28 = 0x32b2;
    uStack_2a = 0x288;
    FUN_32b2_6eb1();
    uStack_28 = 0x32b2;
    uStack_2a = 0x290;
    FUN_32b2_6cc6();
    uStack_28 = 0x32b2;
    uStack_2a = 0x295;
    FUN_32b2_7258();
    uStack_30 = 0x32b2;
    uStack_32 = 0x29f;
    FUN_32b2_6eb1();
    uStack_30 = 0x32b2;
    uStack_32 = 0x2a7;
    FUN_32b2_6cc6();
    uStack_30 = 0x32b2;
    uStack_32 = 0x2ac;
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_3ab8_5089(0x32b2,1);
    iStack_4 = unaff_BP + -0xe4;
    iStack_6 = unaff_BP + -0xd0;
    iStack_8 = 0x32b2;
    iStack_a = 0x2d4;
    FUN_32b2_6cc6();
    iStack_8 = 0x32b2;
    iStack_a = 0x2d9;
    FUN_32b2_7258();
    uStack_10 = 0x32b2;
    iStack_12 = 0x2e3;
    FUN_32b2_6eb1();
    uStack_10 = 0x32b2;
    iStack_12 = 0x2eb;
    FUN_32b2_6cc6();
    uStack_10 = 0x32b2;
    iStack_12 = 0x2f0;
    FUN_32b2_7258();
    uStack_18 = 0x32b2;
    uStack_1a = 0x2fa;
    FUN_32b2_6eb1();
    uStack_18 = 0x32b2;
    uStack_1a = 0x302;
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    uStack_28 = 0x32b2;
    uStack_2a = 0x31e;
    FUN_32b2_6eb1();
    uStack_28 = 0x32b2;
    uStack_2a = 0x326;
    FUN_32b2_6cc6();
    uStack_28 = 0x32b2;
    uStack_2a = 0x32b;
    FUN_32b2_7258();
    uStack_30 = 0x32b2;
    uStack_32 = 0x335;
    FUN_32b2_6eb1();
    uStack_30 = 0x32b2;
    uStack_32 = 0x33d;
    FUN_32b2_6cc6();
    uStack_30 = 0x32b2;
    uStack_32 = 0x342;
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_3ab8_5089(0x32b2,1);
    uVar12 = (undefined1 *)0xffc9 < &uStack_34;
    uVar13 = &stack0x0000 == (undefined1 *)0xfffe;
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
    if (!(bool)uVar12 && !(bool)uVar13) {
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_7191();
      if (!(bool)uVar13) {
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
        iStack_4 = 0x32b2;
        iStack_6 = 0x5db;
        FUN_32b2_6cc6();
        iStack_4 = 0x32b2;
        iStack_6 = 0x5e0;
        FUN_32b2_7258();
        iStack_c = 0x32b2;
        iStack_e = 0x5ea;
        FUN_32b2_6eb1();
        iStack_c = 0x32b2;
        iStack_e = 0x5f2;
        FUN_32b2_6cc6();
        iStack_c = 0x32b2;
        iStack_e = 0x5f7;
        FUN_32b2_7258();
        iStack_14 = 0x32b2;
        uStack_16 = 0x601;
        FUN_32b2_6eb1();
        iStack_14 = *(undefined2 *)(unaff_BP + -100);
        uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
        uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
        uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_26 = 0x622;
        FUN_32b2_6d14();
        uStack_2c = 0x32b2;
        uStack_2e = 0x62c;
        FUN_32b2_6eb1();
        uStack_2c = 0x32b2;
        uStack_2e = 0x635;
        FUN_32b2_6d14();
        uStack_34 = 0x32b2;
        uStack_36 = 0x63f;
        FUN_32b2_6eb1();
        uStack_34 = 0;
        uStack_36 = 0x32b2;
        FUN_3ab8_5089();
        uVar11 = *(undefined2 *)(unaff_BP + -0x60);
        *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
        *(undefined2 *)(unaff_BP + -0x84) = uVar11;
        uVar11 = *(undefined2 *)(unaff_BP + -0x88);
        *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
        *(undefined2 *)(unaff_BP + -0x9c) = uVar11;
        puVar8 = (undefined2 *)&stack0xffde;
        puVar7 = (undefined2 *)(unaff_BP + 0x1c);
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar15 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar15;
        }
        uStack_26 = 0x684;
        iVar5 = FUN_3ab8_522f();
        uVar12 = 0;
        uVar13 = iVar5 == 0;
        if (!(bool)uVar13) {
          FUN_32b2_6d14();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_7258();
          FUN_32b2_7191();
          if ((bool)uVar12 || (bool)uVar13) {
            FUN_32b2_6d14();
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar12 || (bool)uVar13) {
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
        if (!(bool)uVar12) {
          FUN_32b2_6d14();
          FUN_32b2_6fc7();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_7191();
          if (!(bool)uVar12) {
            *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
            *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
            *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
            *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
          }
          iStack_4 = *(undefined2 *)(unaff_BP + -0xba);
          iStack_6 = *(undefined2 *)(unaff_BP + -0xbc);
          iStack_8 = 0x32b2;
          iStack_a = 0x774;
          FUN_32b2_7592();
          iStack_4 = 0x77e;
          FUN_32b2_6d14();
          iStack_4 = 0x786;
          FUN_32b2_70dc();
          iStack_4 = 0x78e;
          FUN_32b2_6d14();
          iStack_4 = 0x797;
          FUN_32b2_710c();
          iStack_4 = 0x79c;
          FUN_32b2_7182();
          iStack_4 = 0x7a5;
          FUN_32b2_6e99();
          iStack_4 = 0x7ad;
          FUN_32b2_710c();
          iStack_4 = 0x7b5;
          FUN_32b2_7154();
          iStack_4 = 0x7be;
          FUN_32b2_6e99();
          iStack_4 = 0x7c7;
          FUN_32b2_6eb1();
          iStack_4 = unaff_BP + -0x62;
          iStack_6 = 0x32b2;
          iStack_8 = 0x7d9;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          iStack_8 = 0x7de;
          FUN_32b2_7258();
          iStack_e = 0x32b2;
          uStack_10 = 0x7e8;
          FUN_32b2_6eb1();
          iStack_e = 0x32b2;
          uStack_10 = 0x7f0;
          FUN_32b2_6cc6();
          iStack_e = 0x32b2;
          uStack_10 = 0x7f5;
          FUN_32b2_7258();
          uStack_16 = 0x32b2;
          uStack_18 = 0x7ff;
          FUN_32b2_6eb1();
          uStack_16 = *(undefined2 *)(unaff_BP + -100);
          uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
          uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
          uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
          uStack_26 = 0x32b2;
          uStack_28 = 0x820;
          FUN_32b2_6d14();
          uStack_2e = 0x32b2;
          uStack_30 = 0x82a;
          FUN_32b2_6eb1();
          uStack_2e = 0x32b2;
          uStack_30 = 0x833;
          FUN_32b2_6d14();
          uStack_36 = 0x32b2;
          FUN_32b2_6eb1();
          uStack_36 = 0;
          FUN_3ab8_5089(0x32b2);
          uVar12 = (undefined1 *)0xffc9 < &uStack_36;
          uVar13 = &stack0x0000 == (undefined1 *)0x0;
          iStack_4 = 0x84f;
          FUN_32b2_6cc6();
          iStack_4 = 0x857;
          FUN_32b2_6cc6();
          iStack_4 = 0x85c;
          FUN_32b2_7191();
          if ((bool)uVar13) {
            uVar11 = *(undefined2 *)(unaff_BP + 8);
            *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
            *(undefined2 *)(unaff_BP + -0x60) = uVar11;
          }
          iStack_4 = 0x872;
          FUN_32b2_6cc6();
          iStack_4 = 0x87a;
          FUN_32b2_6cc6();
          iStack_4 = 0x87f;
          FUN_32b2_7191();
          if ((bool)uVar13) {
            uVar11 = *(undefined2 *)(unaff_BP + 0xc);
            *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
            *(undefined2 *)(unaff_BP + -0x88) = uVar11;
          }
          uVar11 = *(undefined2 *)(unaff_BP + -0x60);
          puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
          *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
          puVar7[1] = uVar11;
          uVar11 = *(undefined2 *)(unaff_BP + -0x88);
          puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
          *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar7[1] = uVar11;
          uVar11 = *(undefined2 *)(unaff_BP + -0x60);
          puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
          *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
          puVar7[1] = uVar11;
          uVar11 = *(undefined2 *)(unaff_BP + -0x88);
          puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
          *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar7[1] = uVar11;
          piVar1 = (int *)(unaff_BP + -0x36);
          *piVar1 = *piVar1 + 1;
          uVar13 = *piVar1 == 0;
          iStack_4 = 0x8d7;
          FUN_32b2_6d14();
          iStack_4 = 0x8e0;
          FUN_32b2_6d14();
          iStack_4 = 0x8e5;
          FUN_32b2_7191();
          if (!(bool)uVar12 && !(bool)uVar13) {
            iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
            iStack_a = 0x32b2;
            iStack_c = 0x8ff;
            FUN_32b2_7592();
            iStack_4 = 0x32b2;
            iStack_6 = 0x909;
            FUN_32b2_6d14();
            iStack_4 = 0x32b2;
            iStack_6 = 0x911;
            FUN_32b2_7154();
            iStack_4 = 0x32b2;
            iStack_6 = 0x916;
            FUN_32b2_6fd6();
            iStack_4 = 0x32b2;
            iStack_6 = 0x91e;
            FUN_32b2_6d14();
            iStack_4 = 0x32b2;
            iStack_6 = 0x927;
            FUN_32b2_710c();
            iStack_4 = 0x32b2;
            iStack_6 = 0x92c;
            FUN_32b2_7182();
            iStack_4 = 0x32b2;
            iStack_6 = 0x935;
            FUN_32b2_6e99();
            iStack_4 = 0x32b2;
            iStack_6 = 0x93d;
            FUN_32b2_710c();
            iStack_4 = 0x32b2;
            iStack_6 = 0x945;
            FUN_32b2_7154();
            iStack_4 = 0x32b2;
            iStack_6 = 0x94e;
            FUN_32b2_6e99();
            iStack_4 = 0x32b2;
            iStack_6 = 0x957;
            FUN_32b2_6eb1();
            iStack_4 = unaff_BP + -0x8a;
            iStack_6 = unaff_BP + -0x62;
            iStack_8 = 0x32b2;
            iStack_a = 0x969;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0x96e;
            FUN_32b2_7258();
            uStack_10 = 0x32b2;
            iStack_12 = 0x978;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            iStack_12 = 0x980;
            FUN_32b2_6cc6();
            uStack_10 = 0x32b2;
            iStack_12 = 0x985;
            FUN_32b2_7258();
            uStack_18 = 0x32b2;
            uStack_1a = 0x98f;
            FUN_32b2_6eb1();
            uStack_18 = *(undefined2 *)(unaff_BP + -100);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x68);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_26 = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_28 = 0x32b2;
            uStack_2a = 0x9b0;
            FUN_32b2_6d14();
            uStack_30 = 0x32b2;
            uStack_32 = 0x9ba;
            FUN_32b2_6eb1();
            uStack_30 = 0x32b2;
            uStack_32 = 0x9c3;
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            FUN_3ab8_5089(0x32b2,0);
            uVar12 = &stack0x0000 == (undefined1 *)0x2;
            iStack_4 = 0x32b2;
            iStack_6 = 0x9df;
            FUN_32b2_6cc6();
            iStack_4 = 0x32b2;
            iStack_6 = 0x9e7;
            FUN_32b2_6cc6();
            iStack_4 = 0x32b2;
            iStack_6 = 0x9ec;
            FUN_32b2_7191();
            if ((bool)uVar12) {
              uVar11 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar11;
            }
            iStack_4 = 0x32b2;
            iStack_6 = 0xa02;
            FUN_32b2_6cc6();
            iStack_4 = 0x32b2;
            iStack_6 = 0xa0a;
            FUN_32b2_6cc6();
            iStack_4 = 0x32b2;
            iStack_6 = 0xa0f;
            FUN_32b2_7191();
            if ((bool)uVar12) {
              uVar11 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar11;
            }
            uVar11 = *(undefined2 *)(unaff_BP + -0x60);
            puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
            puVar7[1] = uVar11;
            uVar11 = *(undefined2 *)(unaff_BP + -0x88);
            puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar7[1] = uVar11;
            *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
          }
          return *(undefined2 *)(unaff_BP + -0x36);
        }
      }
      return 0;
    }
  }
  return 0;
LAB_3ab8_1f18:
  *(undefined2 *)(unaff_BP + -0x47a) = 0;
  goto LAB_3ab8_1f1e;
}



/* 3ab8:4c9f  FUN_3ab8_4c9f  798 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x000303ed) overlaps instruction at (ram,0x000303ec)
    */

undefined2 FUN_3ab8_4c9f(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int unaff_BP;
  undefined2 *puVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  undefined2 *puVar15;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  int iStack_16;
  int iStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  iStack_6 = 0x3ab8;
  iStack_8 = 0xf82d;
  FUN_21f2_2d26();
  *(undefined2 *)(unaff_BP + -0xa88) = 1;
  while (*(int *)(unaff_BP + -0xa88) < 5) {
    iStack_6 = 0x22b2;
    iStack_8 = 0xf854;
    FUN_21f2_2d26();
    *(int *)(unaff_BP + -0xa88) = *(int *)(unaff_BP + -0xa88) + 1;
  }
  *(undefined1 *)(unaff_BP + -0xa1c) = *(undefined1 *)0x7e0;
  *(undefined1 *)(unaff_BP + -0xa1b) = *(undefined1 *)0x7e1;
  *(undefined1 *)(unaff_BP + -0xa1a) = *(undefined1 *)0x7e2;
  *(undefined1 *)(unaff_BP + -0xa19) = *(undefined1 *)0x7e3;
  while( true ) {
    iStack_6 = 0x22b2;
    iStack_8 = 0xf884;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf894;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf8a5;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf8b5;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf8c5;
    FUN_1def_07a4();
    if (*(int *)0x6a3a == -1) {
      *(undefined2 *)(unaff_BP + -0xcea) = 0x42;
      iStack_6 = 0x1bb4;
      iStack_8 = 0xf8e5;
      FUN_21f2_3454();
    }
    else {
      *(undefined2 *)(unaff_BP + -0xcea) = 0x44;
      iStack_6 = unaff_BP + -0x468;
      iStack_8 = 0x1bb4;
      iStack_a = 0xf902;
      FUN_21f2_3454();
    }
    iStack_6 = 2;
    iStack_8 = *(undefined2 *)(unaff_BP + -0xcea);
    iStack_a = unaff_BP + -0x468;
    iStack_c = 0x22b2;
    uVar11 = 0xdef;
    iStack_e = 0xf91f;
    FUN_1000_02b5();
    if (*(int *)0x6a3c == 0) {
      *(undefined2 *)(unaff_BP + -0xcea) = 0x48;
      iStack_6 = 0xdef;
      uVar11 = 0x22b2;
      iStack_8 = 0xf940;
      FUN_21f2_3454();
    }
    else {
      *(undefined2 *)(unaff_BP + -0xcea) = 0x4a;
      if (*(int *)0x6a3c == 1) {
        iStack_6 = 0xdef;
        uVar11 = 0x22b2;
        iStack_8 = 0xf963;
        FUN_21f2_3454();
      }
      if (*(int *)0x6a3c == 2) {
        iStack_8 = 0xf97d;
        iStack_6 = uVar11;
        FUN_21f2_3454();
        uVar11 = 0x22b2;
      }
    }
    if (-1 < *(int *)0x6a3a) {
      iStack_6 = 2;
      iStack_8 = *(undefined2 *)(unaff_BP + -0xcea);
      iStack_a = unaff_BP + -0x468;
      iStack_e = 0xf9a3;
      iStack_c = uVar11;
      FUN_1000_02b5();
      uVar11 = 0xdef;
    }
    if (*(int *)0xc22 == 0) {
      *(undefined2 *)0xc22 = 1;
    }
    *(undefined2 *)0xc1a = 1;
    *(undefined2 *)0xc20 = 1;
    if (*(int *)0xa62 == 0x1b) {
      *(undefined2 *)0xc1a = 0;
    }
    iStack_6 = unaff_BP + -0xc0e;
    iStack_8 = unaff_BP + -0xa20;
    iStack_a = 1;
    iStack_e = -0x614;
    iStack_c = uVar11;
    uVar11 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)0xc20 = 0;
    iStack_6 = 0x1bb4;
    iStack_8 = -0x5f7;
    FUN_1000_0599();
    uVar11 = 0xdef;
    func_0x00010526();
    if (*(int *)0x158 != 0) break;
    if (*(int *)0xc18 == 0) {
      if (*(int *)(unaff_BP + -0xaf2) == -1) {
        if (*(int *)(unaff_BP + -0x47a) != 0) {
          iStack_6 = 0xfa82;
          func_0x0000daa6();
          while (0 < *(int *)(unaff_BP + -0x47a)) {
            *(undefined2 *)(unaff_BP + -0x9b0) = *(undefined2 *)0x150;
            iStack_6 = 0xfa9a;
            func_0x000190c7();
            *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + -1;
          }
          func_0x0000abfa();
          uVar11 = 0x885;
          iStack_6 = -0x550;
          func_0x0000b1d8();
          *(undefined2 *)(unaff_BP + -0x47a) = 0;
          goto LAB_3ab8_4f37;
        }
      }
      else {
LAB_3ab8_4f37:
        if (*(int *)(unaff_BP + -0xaf2) != 0x14) {
          if (*(int *)(unaff_BP + 6) != 0) {
            if (*(int *)(unaff_BP + -0xaf2) == 1) break;
            if (*(int *)(unaff_BP + -0xaf2) < 5) goto LAB_3ab8_4b7b;
          }
          if ((0 < *(int *)(unaff_BP + -0xaf2)) && (*(int *)(unaff_BP + -0xaf2) < 6)) {
            uVar11 = FUN_3ab8_4fbd();
            return uVar11;
          }
          if ((*(int *)(unaff_BP + -0xaf2) == 6) &&
             (*(int *)0x6a3a = *(int *)0x6a3a + 1, 3 < *(int *)0x6a3a)) {
            *(undefined2 *)0x6a3a = 0xffff;
          }
          if ((*(int *)(unaff_BP + -0xaf2) == 7) &&
             (*(int *)0x6a3c = *(int *)0x6a3c + 1, 2 < *(int *)0x6a3c)) {
            *(undefined2 *)0x6a3c = 0;
          }
          goto LAB_3ab8_4b7b;
        }
      }
LAB_3ab8_1bb7:
      FUN_1885_2ec3();
      iVar5 = 0x1b6e;
      if (*(int *)0x158 == 0) {
        do {
          do {
            iStack_8 = 0xc757;
            iStack_6 = iVar5;
            FUN_21f2_3454();
            iStack_6 = 0x22b2;
            uVar11 = 0x1bb4;
            iStack_8 = 0xc767;
            FUN_1def_07a4();
            if (*(int *)(unaff_BP + -0x9ae) != 0) {
              iStack_6 = 0x1bb4;
              uVar11 = 0x22b2;
              iStack_8 = 0xc781;
              FUN_21f2_2d26();
            }
            iStack_8 = 0xc791;
            iStack_6 = uVar11;
            FUN_21f2_3454();
            if (*(int *)0x1170 == 0) {
              iStack_6 = 0x22b2;
              iStack_8 = 0xc7ac;
              FUN_21f2_2d26();
              *(undefined2 *)(unaff_BP + -0x474) = *(undefined2 *)0xa5d4;
              *(undefined2 *)(unaff_BP + -0x472) = *(undefined2 *)0xa5d6;
              *(undefined2 *)(unaff_BP + -0x470) = *(undefined2 *)0xa5d8;
              *(undefined2 *)(unaff_BP + -0x46e) = *(undefined2 *)0xa5da;
            }
            if (*(int *)0x1170 == 1) {
              iStack_6 = 0x22b2;
              iStack_8 = 0xc7d4;
              FUN_21f2_2d26();
              *(undefined2 *)(unaff_BP + -0x474) = *(undefined2 *)0xa5a0;
              *(undefined2 *)(unaff_BP + -0x472) = *(undefined2 *)0xa5a2;
              *(undefined2 *)(unaff_BP + -0x470) = *(undefined2 *)0xa5a4;
              *(undefined2 *)(unaff_BP + -0x46e) = *(undefined2 *)0xa5a6;
            }
            if (*(int *)0x1170 == 2) {
              iStack_6 = 0x22b2;
              iStack_8 = 0xc7fc;
              FUN_21f2_2d26();
              *(undefined2 *)(unaff_BP + -0x474) = *(undefined2 *)0xa5dc;
              *(undefined2 *)(unaff_BP + -0x472) = *(undefined2 *)0xa5de;
              *(undefined2 *)(unaff_BP + -0x470) = *(undefined2 *)0xa5e0;
              *(undefined2 *)(unaff_BP + -0x46e) = *(undefined2 *)0xa5e2;
            }
            uVar11 = 0x22b2;
            if (*(int *)0xc22 == 0) {
              *(undefined2 *)0xc22 = 1;
              iStack_6 = 0x22b2;
              iStack_8 = 0xc829;
              FUN_21f2_2d26();
              iStack_6 = 2;
              iStack_8 = 0x35;
              iStack_a = unaff_BP + -0x468;
              iStack_c = 0x22b2;
              iStack_e = 0xc845;
              FUN_1000_02b5();
              iStack_6 = unaff_BP + -0x468;
              iStack_8 = 0xdef;
              iStack_a = 0xc85a;
              FUN_21f2_3454();
              iStack_6 = 2;
              iStack_8 = 0x3d;
              iStack_a = unaff_BP + -0x468;
              iStack_c = 0x22b2;
              uVar11 = 0xdef;
              iStack_e = 0xc877;
              FUN_1000_02b5();
            }
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc18 = 0;
            if (*(int *)(unaff_BP + 6) == 0) {
              *(undefined2 *)0xc1a = 1;
            }
            *(undefined2 *)0xc20 = 1;
            iStack_6 = unaff_BP + -0xc0e;
            iStack_8 = unaff_BP + -0xa20;
            iStack_a = *(undefined2 *)(unaff_BP + 6);
            iVar5 = 0x1bb4;
            iStack_e = -0x374c;
            iStack_c = uVar11;
            uVar11 = FUN_1def_0904();
            *(undefined2 *)(unaff_BP + -0xa3c) = uVar11;
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
            if (*(int *)(unaff_BP + -0xa3c) == -1) {
              *(undefined2 *)0xc18 = 1;
              goto LAB_2bb4_45c4;
            }
            if (*(int *)0xc18 != 0) {
              *(undefined2 *)(unaff_BP + -0x47a) = 0;
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xc90c;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xc915;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0xc91a;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              iStack_14 = 0xc924;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              iStack_14 = -0x36d7;
              func_0x0000507a();
              goto LAB_3ab8_1bb7;
            }
            if ((0 < *(int *)(unaff_BP + -0xa3c)) && (*(int *)(unaff_BP + -0xa3c) < 6))
            goto LAB_3ab8_1f18;
            if (*(int *)(unaff_BP + -0xa3c) == 6) {
              *(undefined2 *)(unaff_BP + -0x854) = 0;
              *(int *)0x1170 = *(int *)0x1170 + 1;
              if (2 < *(int *)0x1170) {
                *(undefined2 *)0x1170 = 0;
              }
              if (*(byte *)0x123 < 6) {
                if (*(int *)0x1170 == 0) {
                  *(undefined2 *)0x1172 = 3;
                }
                if (*(int *)0x1170 == 1) {
                  *(undefined2 *)0x1172 = 1;
                }
                if (*(int *)0x1170 == 2) {
                  *(undefined2 *)0x1172 = 0;
                }
              }
            }
            if (*(int *)(unaff_BP + -0xa3c) == 7) {
              *(undefined2 *)(unaff_BP + -0x854) = 0;
              *(int *)0x1172 = *(int *)0x1172 + 1;
              if (3 < *(int *)0x1172) {
                *(undefined2 *)0x1172 = 0;
              }
            }
            if (*(int *)(unaff_BP + -0xa3c) == 8) {
              *(undefined2 *)(unaff_BP + -0x854) = 0;
              iVar5 = 0x2ab8;
              iStack_6 = -0x3621;
              func_0x0002b9e1();
              if (*(int *)(unaff_BP + 6) != 0) goto LAB_2bb4_45c4;
            }
            if (*(int *)(unaff_BP + -0xa3c) == 9) {
                    /* WARNING: Call to offcut address within same function */
              iStack_8 = -0x35fd;
              iStack_6 = iVar5;
              func_0x00030a1d();
              *(undefined2 *)(unaff_BP + -0x854) = 0;
              iVar5 = 0x2ab8;
            }
            if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
          } while (*(int *)(unaff_BP + -0x854) == 0);
          iStack_6 = *(int *)(unaff_BP + -0x854);
          iStack_a = 0xca35;
          iStack_8 = iVar5;
          iVar6 = func_0x00015409();
          iVar5 = 0x11f2;
        } while (iVar6 == 0);
        *(undefined2 *)(unaff_BP + -0xa3c) = 1;
        *(undefined2 *)(unaff_BP + -0x47a) = 1;
        *(undefined2 *)(unaff_BP + -0x13a) = 0;
        *(undefined2 *)(unaff_BP + -0x13c) = 0;
        uVar11 = *(undefined2 *)(unaff_BP + -0xc0c);
        *(undefined2 *)(unaff_BP + -0x5be) = *(undefined2 *)(unaff_BP + -0xc0e);
        *(undefined2 *)(unaff_BP + -0x5bc) = uVar11;
        uVar11 = *(undefined2 *)(unaff_BP + -0x3ce);
        *(undefined2 *)(unaff_BP + -0x848) = *(undefined2 *)(unaff_BP + -0x3d0);
        *(undefined2 *)(unaff_BP + -0x846) = uVar11;
        *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)0xa5e4;
        *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)0xa5e6;
        *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)0xa5e8;
        *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)0xa5ea;
        *(undefined2 *)(unaff_BP + -0x3b8) = *(undefined2 *)0xa5e4;
        *(undefined2 *)(unaff_BP + -0x3b6) = *(undefined2 *)0xa5e6;
        *(undefined2 *)(unaff_BP + -0x3b4) = *(undefined2 *)0xa5e8;
        *(undefined2 *)(unaff_BP + -0x3b2) = *(undefined2 *)0xa5ea;
LAB_3ab8_1f1e:
        *(undefined2 *)(unaff_BP + -0xa3a) = 0;
        while (*(int *)(unaff_BP + -0xa3a) <= *(int *)(unaff_BP + -0x3dc)) {
          iVar5 = unaff_BP + *(int *)(unaff_BP + -0xa3a) * 8;
          *(undefined2 *)(iVar5 + -0x3c0) = *(undefined2 *)0xa5e4;
          *(undefined2 *)(iVar5 + -0x3be) = *(undefined2 *)0xa5e6;
          *(undefined2 *)(iVar5 + -0x3bc) = *(undefined2 *)0xa5e8;
          *(undefined2 *)(iVar5 + -0x3ba) = *(undefined2 *)0xa5ea;
          *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
        }
        *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)0xa5e4;
        *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)0xa5e6;
        *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)0xa5e8;
        *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)0xa5ea;
        *(undefined2 *)(unaff_BP + -0xa38) = *(undefined2 *)0xa5e4;
        *(undefined2 *)(unaff_BP + -0xa36) = *(undefined2 *)0xa5e6;
        *(undefined2 *)(unaff_BP + -0xa34) = *(undefined2 *)0xa5e8;
        *(undefined2 *)(unaff_BP + -0xa32) = *(undefined2 *)0xa5ea;
        *(undefined2 *)(unaff_BP + -0x13e) = 0;
        *(undefined2 *)(unaff_BP + -0x140) = 0;
        iVar5 = 0x1b6e;
        FUN_1885_2ec3();
LAB_3ab8_1f79:
        if (*(int *)(unaff_BP + -0xa3c) == 1) {
          uVar11 = 0x22b2;
          iStack_8 = 0xcb11;
          iStack_6 = iVar5;
          FUN_21f2_3454();
LAB_3ab8_1f93:
          iStack_8 = 0xcb21;
          iStack_6 = uVar11;
          FUN_21f2_3454();
          if (*(int *)0x1170 == 0) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xcb3c;
            FUN_21f2_3454();
          }
          if (*(int *)0x1170 == 1) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xcb57;
            FUN_21f2_3454();
          }
          iVar6 = 0x22b2;
          if (*(int *)0x1170 == 2) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xcb72;
            FUN_21f2_3454();
            iVar6 = 0x22b2;
          }
          do {
            do {
              while( true ) {
                iStack_6 = *(undefined2 *)(unaff_BP + -0x47c);
                iStack_8 = *(undefined2 *)(unaff_BP + -0x47e);
                iStack_a = *(undefined2 *)(unaff_BP + -0x480);
                iStack_c = *(undefined2 *)(unaff_BP + -0x482);
                iStack_e = unaff_BP + -0xa76;
                iVar9 = 0x1bb4;
                uStack_12 = 0xcb96;
                iStack_10 = iVar6;
                iVar5 = func_0x0002267f();
                if (iVar5 == 0) {
                  iStack_6 = 0x1bb4;
                  iVar9 = 0x22b2;
                  iStack_8 = 0xcbb0;
                  FUN_21f2_3454();
                }
                iStack_6 = *(undefined2 *)(unaff_BP + -0xa32);
                iStack_8 = *(undefined2 *)(unaff_BP + -0xa34);
                iStack_a = *(undefined2 *)(unaff_BP + -0xa36);
                iStack_c = *(undefined2 *)(unaff_BP + -0xa38);
                iStack_e = unaff_BP + -0xae0;
                uVar11 = 0x1bb4;
                uStack_12 = 0xcbd4;
                iStack_10 = iVar9;
                iVar5 = func_0x0002267f();
                if (iVar5 == 0) {
                  iStack_6 = 0x1bb4;
                  uVar11 = 0x22b2;
                  iStack_8 = 0xcbee;
                  FUN_21f2_3454();
                }
                iStack_8 = 0xcbff;
                iStack_6 = uVar11;
                func_0x00024c86();
                if (*(int *)(unaff_BP + -0x47a) == 0) {
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xcc19;
                  FUN_21f2_2d26();
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xcc29;
                  FUN_21f2_2d26();
                  iStack_6 = 0x22b2;
                  uVar11 = 0x22b2;
                  iStack_8 = 0xcc39;
                  FUN_21f2_2d26();
                  *(undefined2 *)0xc2c = 1;
                }
                else {
                  iStack_6 = unaff_BP + -0xa20;
                  iStack_8 = 0x22b2;
                  iStack_a = 0xcc56;
                  func_0x0002c57b();
                  iStack_6 = 0x2ab8;
                  iStack_8 = 0xcc66;
                  FUN_1000_0599();
                  iStack_6 = unaff_BP + -0xaae;
                  iStack_8 = 0x68fd;
                  iStack_a = 0xdef;
                  iStack_c = 0xcc80;
                  func_0x00012276();
                  iStack_6 = 0x690c;
                  iStack_8 = unaff_BP + -0xb58;
                  iStack_a = 0x11f2;
                  iStack_c = 0xcc9b;
                  FUN_21f2_3454();
                  *(undefined1 *)(unaff_BP + -0xbcc) = 0;
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xccb0;
                  FUN_1000_0599();
                  if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x47a) * 4 + -0x13e) < 0) {
                    iStack_6 = 0xccdc;
                    func_0x00012276();
                  }
                  else {
                    iStack_6 = 0xccce;
                    func_0x00012276();
                  }
                  iStack_6 = 0x6912;
                  iStack_8 = 0x11f2;
                  uVar11 = 0x11f2;
                  iStack_a = 0xccf0;
                  func_0x00012276();
                }
                iStack_6 = unaff_BP + -0x994;
                iStack_8 = unaff_BP + -0x702;
                iStack_a = unaff_BP + -0x140;
                iStack_c = *(undefined2 *)(unaff_BP + -0x47a);
                iStack_10 = -0x32eb;
                iStack_e = uVar11;
                FUN_28b3_2a41();
                *(undefined2 *)0xc1a = 1;
                *(undefined2 *)0xc20 = 1;
                if (*(int *)0xa62 == 0x1b) {
                  *(undefined2 *)0xc1a = 0;
                }
                iStack_6 = unaff_BP + -0x3cc;
                iStack_8 = unaff_BP + -0xa20;
                iStack_a = 9999;
                iStack_c = 0x2ab8;
                iStack_e = -0x32b2;
                uVar11 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
                *(undefined2 *)0xc1a = 0;
                *(undefined2 *)0xc20 = 0;
                *(undefined2 *)0xc2c = 0;
                FUN_1885_2ec3();
                func_0x00013e19();
                iStack_6 = 0x11f2;
                iStack_8 = 0xcd78;
                FUN_1000_0599();
                func_0x00010526();
                iStack_6 = 0xdef;
                iStack_8 = -0x3274;
                FUN_1000_0599();
                iVar6 = 0xdef;
                func_0x00010526();
                if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
                if (*(int *)0xc18 == 0) break;
                func_0x000297e6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xcdc2;
                func_0x000299d1();
                iStack_a = 0x22b2;
                iStack_c = 0xcdcb;
                func_0x000297e6();
                iStack_a = 0x22b2;
                iStack_c = 0xcdd0;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                iStack_14 = 0xcdda;
                func_0x000299d1();
                uStack_12 = 0x22b2;
                iStack_14 = -0x3221;
                func_0x0000507a();
                iVar6 = 0x3bf;
              }
              if ((*(int *)(unaff_BP + 6) != 0) && (*(int *)(unaff_BP + -0xaf2) == 1))
              goto LAB_2bb4_45c4;
              if ((*(int *)(unaff_BP + -0xaf2) == 1) && (*(int *)(unaff_BP + -0x47a) != 0)) {
                iStack_6 = 0;
                iStack_8 = 0xdef;
                iVar6 = 0x2ab8;
                iStack_a = 0xce22;
                FUN_28b3_26a1();
              }
              if ((*(int *)(unaff_BP + -0xaf2) == 2) && (*(int *)(unaff_BP + -0x47a) != 0))
              goto LAB_3ab8_1f18;
              if (*(int *)(unaff_BP + -0xaf2) == 0x14) goto LAB_3ab8_1bb7;
              if (*(int *)(unaff_BP + -0xaf2) == -1) {
                if (*(int *)(unaff_BP + -0x47a) == 0) goto LAB_3ab8_1bb7;
                *(undefined2 *)(unaff_BP + -0xa38) = *(undefined2 *)0xa5e4;
                *(undefined2 *)(unaff_BP + -0xa36) = *(undefined2 *)0xa5e6;
                *(undefined2 *)(unaff_BP + -0xa34) = *(undefined2 *)0xa5e8;
                *(undefined2 *)(unaff_BP + -0xa32) = *(undefined2 *)0xa5ea;
                *(undefined2 *)(unaff_BP + -0x854) = 0;
                *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + -1;
                iVar5 = *(int *)(unaff_BP + -0x47a) * 4;
                if ((*(int *)(unaff_BP + iVar5 + -0x13e) == 0 &&
                     *(int *)(unaff_BP + iVar5 + -0x140) == 0) && (1 < *(int *)(unaff_BP + -0x47a)))
                {
                  *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + -1;
                }
                iVar5 = unaff_BP + *(int *)(unaff_BP + -0x47a) * 8;
                *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)(iVar5 + -0x3c0);
                *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)(iVar5 + -0x3be);
                *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)(iVar5 + -0x3bc);
                *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)(iVar5 + -0x3ba);
                *(undefined2 *)(unaff_BP + -0xa3a) = 1;
                while (*(int *)(unaff_BP + -0xa3a) <= *(int *)(unaff_BP + -0x47a)) {
                  iVar5 = *(int *)(unaff_BP + -0xa3a) * 4;
                  if (*(int *)(unaff_BP + iVar5 + -0x13e) != 0 ||
                      *(int *)(unaff_BP + iVar5 + -0x140) != 0) {
                    func_0x00029834();
                    iStack_6 = -0x3101;
                    func_0x00029c74();
                    iVar6 = 0x22b2;
                    func_0x000299d1();
                  }
                  *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
                }
              }
              iVar5 = iVar6;
              if (*(int *)(unaff_BP + -0xaf2) == 3) goto LAB_3ab8_23c3;
            } while (*(int *)(unaff_BP + -0x854) == 0);
            iStack_6 = *(int *)(unaff_BP + -0x854);
            iVar5 = 0x11f2;
            iStack_a = 0xcf32;
            iStack_8 = iVar6;
            iVar9 = func_0x00015409();
            iVar6 = iVar5;
          } while (iVar9 == 0);
LAB_3ab8_23c3:
          if ((*(int *)(unaff_BP + -0xaf2) == 3) &&
             (*(int *)(unaff_BP + -0x47a) < *(int *)(unaff_BP + -0x3dc))) {
LAB_3ab8_23da:
            do {
              iVar6 = *(int *)(unaff_BP + -0x47a) * 4;
              uVar11 = *(undefined2 *)(unaff_BP + iVar6 + -0x5c0);
              *(undefined2 *)(unaff_BP + -0xc68) = *(undefined2 *)(unaff_BP + iVar6 + -0x5c2);
              *(undefined2 *)(unaff_BP + -0xc66) = uVar11;
              uVar11 = *(undefined2 *)(unaff_BP + iVar6 + -0x84a);
              *(undefined2 *)(unaff_BP + -0xc6e) = *(undefined2 *)(unaff_BP + iVar6 + -0x84c);
              *(undefined2 *)(unaff_BP + -0xc6c) = uVar11;
              while( true ) {
                iStack_6 = unaff_BP + -0x994;
                iStack_8 = unaff_BP + -0x702;
                iStack_a = unaff_BP + -0x140;
                iStack_c = *(undefined2 *)(unaff_BP + -0x47a);
                iStack_10 = -0x305c;
                iStack_e = iVar5;
                FUN_28b3_2a41();
                iStack_6 = unaff_BP + -0xa20;
                iStack_8 = 0x2ab8;
                iStack_a = 0xcfb9;
                FUN_21f2_3454();
                iStack_6 = unaff_BP + -0xc0e;
                iStack_8 = unaff_BP + -0xa20;
                iStack_a = 1;
                iStack_c = 0x22b2;
                uVar11 = 0x1bb4;
                iStack_e = -0x3027;
                uVar10 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0xc6a) = uVar10;
                if (*(int *)0x158 != 0) {
                  FUN_1885_2ec3();
                  goto LAB_2bb4_45c4;
                }
                if (*(int *)(unaff_BP + -0xc6a) == -1) goto LAB_3ab8_1f93;
                func_0x000297e6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xd017;
                func_0x000299d1();
                iStack_a = 0x22b2;
                iStack_c = 0xd020;
                func_0x000297e6();
                iStack_a = 0x22b2;
                iStack_c = 0xd025;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                iStack_14 = 0xd02f;
                func_0x000299d1();
                uStack_12 = 0x22b2;
                iStack_14 = -0x2fcc;
                lVar14 = FUN_13bf_39a0();
                *(undefined2 *)(unaff_BP + -0x850) = (int)lVar14;
                *(undefined2 *)(unaff_BP + -0x84e) = (int)((ulong)lVar14 >> 0x10);
                if (lVar14 < 0) break;
                iVar5 = 0x11f2;
                iStack_6 = 0xd056;
                func_0x00012276();
              }
              uVar12 = *(int *)(unaff_BP + -0x84e) + (uint)(*(int *)(unaff_BP + -0x850) != 0) == 0;
              iStack_6 = 0x11f2;
              iStack_8 = -0x2f90;
              puVar15 = (undefined2 *)func_0x00000271();
              puVar8 = (undefined2 *)puVar15;
              puVar7 = (undefined2 *)(unaff_BP + -0x404);
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar3 = puVar7;
                puVar7 = puVar7 + 1;
                puVar2 = puVar8;
                puVar8 = puVar8 + 1;
                *puVar3 = *puVar2;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar12) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar12) {
                  iVar5 = 0x11f2;
                  iStack_6 = 0xd0c4;
                  func_0x00012276();
                  goto LAB_3ab8_23da;
                }
              }
LAB_3ab8_2548:
              do {
                func_0x00013e19();
                *(undefined1 *)(unaff_BP + -0x3ea) = 2;
                *(undefined1 *)(unaff_BP + -0x3e9) = 9;
                puVar8 = &uStack_20;
                puVar7 = (undefined2 *)(unaff_BP + -0x404);
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar2 = puVar8;
                  puVar8 = puVar8 + 1;
                  puVar15 = puVar7;
                  puVar7 = puVar7 + 1;
                  *puVar2 = *puVar15;
                }
                func_0x00013e46();
                iStack_6 = unaff_BP + -0x994;
                iStack_8 = unaff_BP + -0x702;
                iStack_a = unaff_BP + -0x140;
                iStack_c = -*(int *)(unaff_BP + -0x47a);
                iStack_e = 0x11f2;
                iStack_10 = -0x2eec;
                FUN_28b3_2a41();
                iStack_6 = unaff_BP + -0xc44;
                iStack_8 = 0x6925;
                iStack_a = unaff_BP + -0xa20;
                iStack_c = 0x2ab8;
                iStack_e = 0xd132;
                FUN_21f2_3454();
                *(undefined2 *)0xc20 = 1;
                iStack_6 = unaff_BP + -0x3cc;
                iStack_8 = unaff_BP + -0xa20;
                iStack_a = 9999;
                iStack_c = 0x22b2;
                iStack_e = -0x2ea8;
                uVar11 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0xc6a) = uVar11;
                *(undefined2 *)0xc20 = 0;
                iVar5 = 0x11f2;
                func_0x00013e19();
                if (*(int *)0x158 != 0) {
                  FUN_1885_2ec3();
                  goto LAB_2bb4_45c4;
                }
                if (*(int *)(unaff_BP + -0xc6a) == -1) goto LAB_3ab8_23da;
              } while (*(int *)(unaff_BP + -0x854) == 0);
              iStack_6 = *(int *)(unaff_BP + -0x854);
              iStack_8 = 0x11f2;
              iStack_a = 0xd1a6;
              iVar5 = func_0x00015409();
              uVar12 = 0;
              uVar13 = iVar5 == 0;
              if ((bool)uVar13) goto LAB_3ab8_2548;
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar13) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar13) {
                  iStack_6 = -0x2e0b;
                  func_0x00012276();
                  goto LAB_3ab8_2548;
                }
              }
              uVar13 = 0;
              func_0x000297e6();
              func_0x0002996b();
              FUN_28b3_0ee9();
              func_0x000297e6();
              func_0x000297e6();
              func_0x0002996b();
              FUN_28b3_100d();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029c9d();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029c9d();
              FUN_28b3_1163();
              FUN_28b3_1181();
              if (!(bool)uVar12 && !(bool)uVar13) {
                uVar11 = *(undefined2 *)(unaff_BP + -0xc66);
                *(undefined2 *)(unaff_BP + -0x70a) = *(undefined2 *)(unaff_BP + -0xc68);
                *(undefined2 *)(unaff_BP + -0x708) = uVar11;
                func_0x000297e6();
                func_0x00029983();
                uVar11 = *(undefined2 *)(unaff_BP + -0x708);
                *(undefined2 *)(unaff_BP + -0xc72) = *(undefined2 *)(unaff_BP + -0x70a);
                *(undefined2 *)(unaff_BP + -0xc70) = uVar11;
                uVar11 = *(undefined2 *)(unaff_BP + -0xc6c);
                *(undefined2 *)(unaff_BP + -0x70a) = *(undefined2 *)(unaff_BP + -0xc6e);
                *(undefined2 *)(unaff_BP + -0x708) = uVar11;
                func_0x000297e6();
                func_0x00029983();
                uVar11 = *(undefined2 *)(unaff_BP + -0x708);
                *(undefined2 *)(unaff_BP + -0xc76) = *(undefined2 *)(unaff_BP + -0x70a);
                *(undefined2 *)(unaff_BP + -0xc74) = uVar11;
              }
              iStack_6 = 0xd2f8;
              func_0x000297e6();
              iStack_6 = 0xd2fd;
              func_0x00029d78();
              iStack_c = 0x22b2;
              iStack_e = 0xd307;
              func_0x000299d1();
              iStack_c = 0x22b2;
              iStack_e = 0xd310;
              func_0x000297e6();
              iStack_c = 0x22b2;
              iStack_e = 0xd315;
              func_0x00029d78();
              iStack_14 = 0x22b2;
              iStack_16 = 0xd31f;
              func_0x000299d1();
              iVar5 = -*(int *)(unaff_BP + -0x850);
              iVar6 = -(*(int *)(unaff_BP + -0x84e) + (uint)(*(int *)(unaff_BP + -0x850) != 0));
              uStack_18 = 0x22b2;
              uStack_1a = 0xd339;
              iStack_16 = iVar5;
              iStack_14 = iVar6;
              FUN_20a9_1260();
              iStack_6 = 0xd34a;
              func_0x000297e6();
              iStack_6 = 0xd34f;
              func_0x00029d78();
              iStack_c = 0x22b2;
              iStack_e = 0xd359;
              func_0x000299d1();
              iStack_c = 0x22b2;
              iStack_e = 0xd362;
              func_0x000297e6();
              iStack_c = 0x22b2;
              iStack_e = -0x2c99;
              func_0x00029d78();
              iStack_14 = 0x22b2;
              iStack_16 = 0xd371;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              uStack_1a = 0xd378;
              iStack_16 = iVar5;
              iStack_14 = iVar6;
              FUN_20a9_1260();
              if (*(int *)(unaff_BP + -0x3f8) == 10000) {
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xd3a7;
                func_0x000299d1();
                iStack_a = 0x22b2;
                iStack_c = 0xd3b0;
                func_0x000297e6();
                iStack_a = 0x22b2;
                iStack_c = 0xd3b9;
                FUN_28b3_100d();
                iStack_a = 0x22b2;
                iStack_c = 0xd3be;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                iStack_14 = 0xd3c8;
                func_0x000299d1();
                uStack_12 = 0x22b2;
                iStack_14 = 0xd3cd;
                puVar7 = (undefined2 *)func_0x0002a178();
                *(undefined2 *)(unaff_BP + -0xc5c) = *puVar7;
                *(undefined2 *)(unaff_BP + -0xc5a) = puVar7[1];
                *(undefined2 *)(unaff_BP + -0xc58) = puVar7[2];
                *(undefined2 *)(unaff_BP + -0xc56) = puVar7[3];
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029d78();
                func_0x000299b9();
                FUN_28b3_0ee9();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029d78();
                func_0x000299b9();
                FUN_28b3_0ee9();
                func_0x00029834();
                func_0x00029834();
                iStack_a = 0x22b2;
                iStack_c = 0xd448;
                func_0x000299d1();
                iStack_a = 0x22b2;
                iStack_c = 0xd451;
                func_0x00029834();
                uStack_12 = 0x22b2;
                iStack_14 = 0xd45b;
                func_0x000299d1();
                uStack_12 = 0x22b2;
                iStack_14 = -0x2ba0;
                func_0x0002a178();
                uVar12 = (undefined1 *)0xffef < &iStack_10;
                uVar13 = &stack0x0000 == (undefined1 *)0x0;
                func_0x00029834();
                func_0x000299b9();
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  func_0x00029834();
                  func_0x00029c74();
                  func_0x000299d1();
                }
                func_0x000297e6();
                func_0x00029b6d();
                func_0x00029d78();
                func_0x00029834();
                func_0x00029bfc();
                func_0x00029c9d();
                func_0x00029b6d();
                func_0x000299d1();
                goto LAB_3ab8_29ea;
              }
              func_0x0000c3ca();
              iStack_6 = 0x885;
              iStack_8 = -0x2b11;
              FUN_1000_0599();
              iVar5 = 0x11f2;
              iStack_6 = 0xd4fa;
              func_0x00012276();
              uVar11 = *(undefined2 *)(unaff_BP + -0x704);
              *(undefined2 *)(unaff_BP + -0x3f6) = *(undefined2 *)(unaff_BP + -0x706);
              *(undefined2 *)(unaff_BP + -0x3f4) = uVar11;
              uVar11 = *(undefined2 *)(unaff_BP + -0x996);
              *(undefined2 *)(unaff_BP + -0x3f2) = *(undefined2 *)(unaff_BP + -0x998);
              *(undefined2 *)(unaff_BP + -0x3f0) = uVar11;
              puVar8 = (undefined2 *)&stack0xffde;
              puVar7 = (undefined2 *)(unaff_BP + -0x404);
              for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar2 = puVar8;
                puVar8 = puVar8 + 1;
                puVar15 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar2 = *puVar15;
              }
              pcVar4 = (code *)swi(0x3f);
              iVar6 = (*pcVar4)();
              if (iVar6 != 0) {
                func_0x000297e6();
                func_0x00029b6d();
                func_0x00029d78();
                iStack_6 = 0xd564;
                func_0x00029c2c();
                func_0x000299d1();
LAB_3ab8_29ea:
                func_0x00029834();
                iStack_6 = 0xd57d;
                func_0x00029c2c();
                func_0x000299b9();
                iStack_6 = -0x2a73;
                func_0x00029c74();
                func_0x000299d1();
                uVar11 = *(undefined2 *)(unaff_BP + -0x706);
                uVar10 = *(undefined2 *)(unaff_BP + -0x704);
                *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
                iVar5 = *(int *)(unaff_BP + -0x47a) * 4;
                *(undefined2 *)(unaff_BP + iVar5 + -0x702) = uVar11;
                *(undefined2 *)(unaff_BP + iVar5 + -0x700) = uVar10;
                uVar11 = *(undefined2 *)(unaff_BP + -0x996);
                *(undefined2 *)(unaff_BP + iVar5 + -0x994) = *(undefined2 *)(unaff_BP + -0x998);
                *(undefined2 *)(unaff_BP + iVar5 + -0x992) = uVar11;
                uVar11 = *(undefined2 *)(unaff_BP + -0x3ca);
                *(undefined2 *)(unaff_BP + iVar5 + -0x5c2) = *(undefined2 *)(unaff_BP + -0x3cc);
                *(undefined2 *)(unaff_BP + iVar5 + -0x5c0) = uVar11;
                uVar11 = *(undefined2 *)(unaff_BP + -0x3d8);
                *(undefined2 *)(unaff_BP + iVar5 + -0x84c) = *(undefined2 *)(unaff_BP + -0x3da);
                *(undefined2 *)(unaff_BP + iVar5 + -0x84a) = uVar11;
                uVar11 = *(undefined2 *)(unaff_BP + -0x84e);
                *(undefined2 *)(unaff_BP + iVar5 + -0x140) = *(undefined2 *)(unaff_BP + -0x850);
                *(undefined2 *)(unaff_BP + iVar5 + -0x13e) = uVar11;
                func_0x00029834();
                iVar5 = 0x22b2;
                func_0x000299d1();
                goto LAB_3ab8_1f79;
              }
            } while( true );
          }
          if (*(int *)(unaff_BP + -0x47a) != 0) {
            uVar12 = (*(uint *)(unaff_BP + -0x47a) & 0x3fff) == 0;
            func_0x000297e6();
            func_0x00029b55();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029b55();
            func_0x0002996b();
            FUN_28b3_1181();
            if ((bool)uVar12) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar12) {
                iStack_6 = 0xd6ef;
                func_0x00012276();
                iStack_6 = 0x11f2;
                iStack_8 = 0xd6fd;
                FUN_1000_0599();
                iStack_6 = 0xdef;
                iVar5 = 0x11f2;
                iStack_8 = -0x28f3;
                func_0x00012276();
                goto LAB_3ab8_1f79;
              }
            }
            if (*(int *)(unaff_BP + -0x47a) < *(int *)(unaff_BP + -0x3dc)) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1168();
              func_0x000299d1();
              func_0x000297e6();
              func_0x00029d78();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1168();
              func_0x000299d1();
              *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
              iVar5 = *(int *)(unaff_BP + -0x47a) * 4;
              *(undefined2 *)(unaff_BP + iVar5 + -0x140) = 1;
              *(undefined2 *)(unaff_BP + iVar5 + -0x13e) = 0;
              uVar11 = *(undefined2 *)(unaff_BP + -0x3ca);
              *(undefined2 *)(unaff_BP + iVar5 + -0x5c2) = *(undefined2 *)(unaff_BP + -0x3cc);
              *(undefined2 *)(unaff_BP + iVar5 + -0x5c0) = uVar11;
              uVar11 = *(undefined2 *)(unaff_BP + -0x3d8);
              *(undefined2 *)(unaff_BP + iVar5 + -0x84c) = *(undefined2 *)(unaff_BP + -0x3da);
              *(undefined2 *)(unaff_BP + iVar5 + -0x84a) = uVar11;
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029d78();
              func_0x00029834();
              func_0x00029c2c();
              func_0x00029834();
              func_0x00029c2c();
              FUN_28b3_117c();
              iStack_a = 0x22b2;
              iStack_c = 0xd7fb;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xd800;
              FUN_28b3_1582();
              func_0x00029c2c();
              func_0x000299d1();
              func_0x00029834();
              iStack_6 = 0xd828;
              func_0x00029c2c();
              func_0x000299b9();
              iStack_6 = 0xd838;
              func_0x00029c74();
              func_0x000299d1();
              func_0x00029834();
              func_0x000299d1();
              uVar12 = *(byte *)0x123 < 8;
              uVar13 = *(byte *)0x123 == 8;
              if (!(bool)uVar12) {
                func_0x00029834();
                func_0x00029834();
                func_0x00029ae7();
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  func_0x00029834();
                  func_0x00029983();
                }
              }
              iStack_6 = 0xd8aa;
              func_0x000297e6();
              iStack_6 = -0x2751;
              func_0x00029d78();
              iStack_c = 0x22b2;
              iStack_e = 0xd8b9;
              func_0x000299d1();
              iStack_c = 0x22b2;
              iStack_e = 0xd8c2;
              func_0x000297e6();
              iStack_c = 0x22b2;
              iStack_e = -0x2739;
              func_0x00029d78();
              iStack_14 = 0x22b2;
              iStack_16 = 0xd8d1;
              func_0x000299d1();
              iStack_14 = 0x22b2;
              iStack_16 = 0xd8da;
              func_0x000297e6();
              iStack_14 = 0x22b2;
              iStack_16 = -0x2721;
              func_0x00029d78();
              uStack_1c = 0x22b2;
              uStack_1e = 0xd8e9;
              func_0x000299d1();
              uStack_1c = 0x22b2;
              uStack_1e = 0xd8f2;
              func_0x000297e6();
              uStack_1c = 0x22b2;
              uStack_1e = 0xd8f7;
              func_0x00029d78();
              func_0x000299d1();
              iVar5 = 0x1bb4;
              func_0x0001e18f();
            }
            else {
              iStack_6 = 0xd915;
              func_0x00012276();
              iStack_6 = 0x11f2;
              iStack_8 = 0xd923;
              FUN_1000_0599();
              iStack_6 = 0xdef;
              iVar5 = 0x11f2;
              iStack_8 = -0x26cd;
              func_0x00012276();
            }
            goto LAB_3ab8_1f79;
          }
          *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
          iVar6 = *(int *)(unaff_BP + -0x47a) * 4;
          *(undefined2 *)(unaff_BP + iVar6 + -0x13e) = 0;
          *(undefined2 *)(unaff_BP + iVar6 + -0x140) = 0;
          uVar11 = *(undefined2 *)(unaff_BP + -0x3ca);
          *(undefined2 *)(unaff_BP + iVar6 + -0x5c2) = *(undefined2 *)(unaff_BP + -0x3cc);
          *(undefined2 *)(unaff_BP + iVar6 + -0x5c0) = uVar11;
          uVar11 = *(undefined2 *)(unaff_BP + -0x3d8);
          *(undefined2 *)(unaff_BP + iVar6 + -0x84c) = *(undefined2 *)(unaff_BP + -0x3da);
          *(undefined2 *)(unaff_BP + iVar6 + -0x84a) = uVar11;
          *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)0xa5e4;
          *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)0xa5e6;
          *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)0xa5e8;
          *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)0xa5ea;
          iVar6 = unaff_BP + *(int *)(unaff_BP + -0x47a) * 8;
          *(undefined2 *)(iVar6 + -0x3c0) = *(undefined2 *)0xa5e4;
          *(undefined2 *)(iVar6 + -0x3be) = *(undefined2 *)0xa5e6;
          *(undefined2 *)(iVar6 + -0x3bc) = *(undefined2 *)0xa5e8;
          *(undefined2 *)(iVar6 + -0x3ba) = *(undefined2 *)0xa5ea;
          goto LAB_3ab8_1f79;
        }
        if (*(int *)(unaff_BP + -0xa3c) == 2) {
          iVar5 = 0x2ab8;
          iStack_6 = -0x26b2;
          FUN_2bb4_6c4a();
          if ((*(int *)(unaff_BP + 6) != 0) && (*(int *)0xc18 != 0)) {
            *(undefined2 *)0xc18 = 0;
            break;
          }
        }
        if (*(int *)0x158 != 0) break;
        if (*(int *)(unaff_BP + -0xa3c) == 3) {
          iStack_8 = 0xd990;
          iStack_6 = iVar5;
          FUN_21f2_3454();
          if (*(int *)0x1170 == 0) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xd9aa;
            FUN_21f2_3454();
          }
          if (*(int *)0x1170 == 1) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xd9c4;
            FUN_21f2_3454();
          }
          if (*(int *)0x1170 == 2) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xd9de;
            FUN_21f2_3454();
          }
          *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)0xa5e4;
          *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)0xa5e6;
          *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)0xa5e8;
          *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)0xa5ea;
          *(undefined2 *)(unaff_BP + -0xa38) = *(undefined2 *)0xa5e4;
          *(undefined2 *)(unaff_BP + -0xa36) = *(undefined2 *)0xa5e6;
          *(undefined2 *)(unaff_BP + -0xa34) = *(undefined2 *)0xa5e8;
          *(undefined2 *)(unaff_BP + -0xa32) = *(undefined2 *)0xa5ea;
          *(undefined2 *)(unaff_BP + -0x47a) = 0;
          iVar5 = 0x1b6e;
          FUN_1885_2ec3();
          *(undefined2 *)(unaff_BP + -0x13e) = 0;
          *(undefined2 *)(unaff_BP + -0x140) = 0;
          do {
            do {
              while( true ) {
                iStack_8 = 0xda1e;
                iStack_6 = iVar5;
                func_0x00024c86();
                iStack_6 = 0x22b2;
                iStack_8 = 0xda2e;
                FUN_21f2_2d26();
                iStack_6 = 0x22b2;
                iStack_8 = 0xda3e;
                FUN_21f2_2d26();
                iStack_6 = 0x22b2;
                iStack_8 = 0xda4e;
                FUN_21f2_2d26();
                *(undefined2 *)0xc1a = 1;
                *(undefined2 *)0xc20 = 1;
                *(undefined2 *)0xc2c = 1;
                if (*(int *)0xa62 == 0x1b) {
                  *(undefined2 *)0xc1a = 0;
                }
                iStack_6 = unaff_BP + -0xc0e;
                iStack_8 = unaff_BP + -0xa20;
                iStack_a = 1;
                iStack_c = 0x22b2;
                iStack_e = -0x2577;
                uVar11 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
                *(undefined2 *)0xc1a = 0;
                *(undefined2 *)0xc20 = 0;
                *(undefined2 *)0xc2c = 0;
                iStack_6 = 0x1bb4;
                iStack_8 = 0xdaa9;
                FUN_1000_0599();
                func_0x00010526();
                iStack_6 = 0xdef;
                iStack_8 = -0x2543;
                FUN_1000_0599();
                iVar5 = 0xdef;
                func_0x00010526();
                if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
                if (*(int *)0xc18 == 0) break;
                func_0x000297e6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xdaf3;
                func_0x000299d1();
                iStack_a = 0x22b2;
                iStack_c = 0xdafc;
                func_0x000297e6();
                iStack_a = 0x22b2;
                iStack_c = 0xdb01;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                iStack_14 = 0xdb0b;
                func_0x000299d1();
                uStack_12 = 0x22b2;
                iVar5 = 0x3bf;
                iStack_14 = -0x24f0;
                func_0x0000507a();
              }
              if ((*(int *)(unaff_BP + -0xaf2) == -1) || (*(int *)(unaff_BP + -0xaf2) == 0x14))
              goto LAB_3ab8_1bb7;
            } while (*(int *)(unaff_BP + -0x854) == 0);
            iStack_6 = *(undefined2 *)(unaff_BP + -0x854);
            iStack_8 = 0xdef;
            iVar5 = 0x11f2;
            iStack_a = 0xdb4a;
            iVar6 = func_0x00015409();
          } while (iVar6 == 0);
          *(undefined2 *)(unaff_BP + -0x47a) = 1;
          uVar11 = *(undefined2 *)(unaff_BP + -0xc0c);
          *(undefined2 *)(unaff_BP + -0x5be) = *(undefined2 *)(unaff_BP + -0xc0e);
          *(undefined2 *)(unaff_BP + -0x5bc) = uVar11;
          uVar11 = *(undefined2 *)(unaff_BP + -0x3ce);
          *(undefined2 *)(unaff_BP + -0x848) = *(undefined2 *)(unaff_BP + -0x3d0);
          *(undefined2 *)(unaff_BP + -0x846) = uVar11;
          *(undefined2 *)(unaff_BP + -0x13a) = 0;
          *(undefined2 *)(unaff_BP + -0x13c) = 0;
LAB_3ab8_300b:
          do {
            iStack_8 = 0xdb9a;
            iStack_6 = iVar5;
            func_0x00024c86();
            iStack_6 = unaff_BP + -0xa20;
            iStack_8 = 0x22b2;
            iStack_a = 0xdbad;
            func_0x0002c57b();
            iStack_6 = 0x2ab8;
            iStack_8 = 0xdbc1;
            func_0x00029834();
            iStack_6 = 0x22b2;
            iStack_8 = 0xdbc6;
            func_0x00029ae7();
            iStack_e = 0x22b2;
            iStack_10 = -0x2430;
            func_0x000299d1();
            iStack_e = unaff_BP + -0xa76;
            iStack_10 = 0x22b2;
            uVar11 = 0x1bb4;
            uStack_12 = 0xdbda;
            iVar5 = func_0x0002267f();
            if (iVar5 == 0) {
              iStack_6 = 0x1bb4;
              uVar11 = 0x22b2;
              iStack_8 = 0xdbf4;
              FUN_21f2_3454();
            }
            iStack_8 = 0xdc07;
            iStack_6 = uVar11;
            func_0x00029834();
            iStack_6 = 0x22b2;
            iStack_8 = 0xdc0c;
            func_0x00029ae7();
            iStack_e = 0x22b2;
            iStack_10 = -0x23ea;
            func_0x000299d1();
            iStack_e = unaff_BP + -0xae0;
            iStack_10 = 0x22b2;
            uVar11 = 0x1bb4;
            uStack_12 = 0xdc20;
            iVar5 = func_0x0002267f();
            if (iVar5 == 0) {
              iStack_6 = 0x1bb4;
              uVar11 = 0x22b2;
              iStack_8 = 0xdc3a;
              FUN_21f2_3454();
            }
            iStack_6 = unaff_BP + -0x994;
            iStack_8 = unaff_BP + -0x702;
            iStack_a = unaff_BP + -0x140;
            iStack_c = *(undefined2 *)(unaff_BP + -0x47a);
            uVar10 = 0x2ab8;
            iStack_10 = -0x23a2;
            iStack_e = uVar11;
            FUN_28b3_2a41();
            if (1 < *(int *)(unaff_BP + -0x47a)) {
              iStack_6 = 0x2ab8;
              iStack_8 = 0xdc78;
              FUN_1000_0599();
              iStack_6 = unaff_BP + -0xaae;
              iStack_8 = 0x694f;
              iStack_a = 0xdef;
              iStack_c = 0xdc92;
              func_0x00012276();
              iStack_6 = 0x695e;
              iStack_8 = unaff_BP + -0xb58;
              iStack_a = 0x11f2;
              iStack_c = 0xdcad;
              FUN_21f2_3454();
              iStack_6 = 0x22b2;
              iStack_8 = 0xdcbd;
              FUN_1000_0599();
              iStack_6 = unaff_BP + -0xaae;
              iStack_8 = 0x6964;
              iStack_a = 0xdef;
              iStack_c = 0xdcd7;
              func_0x00012276();
              *(undefined2 *)(unaff_BP + -0x3d2) = *(undefined2 *)0xa6c;
              *(undefined2 *)0xa6c = 3;
              iStack_6 = 0xdcfc;
              func_0x000297e6();
              iStack_6 = 0xdd01;
              func_0x00029d78();
              iStack_c = 0x22b2;
              iStack_e = 0xdd0b;
              func_0x000299d1();
              iStack_c = 0x22b2;
              iStack_e = 0xdd14;
              func_0x000297e6();
              iStack_c = 0x22b2;
              iStack_e = 0xdd19;
              func_0x00029d78();
              iStack_14 = 0x22b2;
              iStack_16 = 0xdd23;
              func_0x000299d1();
              iStack_14 = 0x22b2;
              iStack_16 = 0xdd2c;
              func_0x000297e6();
              iStack_14 = 0x22b2;
              iStack_16 = -0x22cf;
              func_0x00029d78();
              uStack_1c = 0x22b2;
              uStack_1e = 0xdd3b;
              func_0x000299d1();
              uStack_1c = 0x22b2;
              uStack_1e = 0xdd44;
              func_0x000297e6();
              uStack_1c = 0x22b2;
              uStack_1e = 0xdd49;
              func_0x00029d78();
              func_0x000299d1();
              uVar10 = 0x1bb4;
              func_0x0001e18f();
              *(undefined2 *)0xa6c = *(undefined2 *)(unaff_BP + -0x3d2);
            }
            *(undefined1 *)(unaff_BP + -0xbcc) = 0;
            *(undefined2 *)0xc1a = 1;
            *(undefined2 *)0xc20 = 1;
            if (*(int *)0xa62 == 0x1b) {
              *(undefined2 *)0xc1a = 0;
            }
            iStack_6 = unaff_BP + -0x3cc;
            iStack_8 = unaff_BP + -0xa20;
            iStack_a = 9999;
            iStack_e = -0x2263;
            iStack_c = uVar10;
            uVar11 = FUN_1def_0904();
            *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            FUN_1885_2ec3();
            func_0x00013e19();
            iStack_6 = 0x11f2;
            iStack_8 = 0xddc4;
            FUN_1000_0599();
            func_0x00010526();
            iStack_6 = 0xdef;
            iStack_8 = -0x2228;
            FUN_1000_0599();
            iVar5 = 0xdef;
            func_0x00010526();
            if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
            if (*(int *)0xc18 == 0) {
              if (*(int *)(unaff_BP + -0xaf2) == -1) {
                if (*(int *)(unaff_BP + -0x47a) < 2) goto LAB_3ab8_1f18;
                *(undefined2 *)(unaff_BP + -0xa38) = *(undefined2 *)0xa5e4;
                *(undefined2 *)(unaff_BP + -0xa36) = *(undefined2 *)0xa5e6;
                *(undefined2 *)(unaff_BP + -0xa34) = *(undefined2 *)0xa5e8;
                *(undefined2 *)(unaff_BP + -0xa32) = *(undefined2 *)0xa5ea;
                *(undefined2 *)(unaff_BP + -0x854) = 0;
                *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + -1;
                iVar6 = unaff_BP + *(int *)(unaff_BP + -0x47a) * 8;
                *(undefined2 *)(unaff_BP + -0x482) = *(undefined2 *)(iVar6 + -0x3c0);
                *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)(iVar6 + -0x3be);
                *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)(iVar6 + -0x3bc);
                *(undefined2 *)(unaff_BP + -0x47c) = *(undefined2 *)(iVar6 + -0x3ba);
                *(undefined2 *)(unaff_BP + -0xa3a) = 1;
                while (*(int *)(unaff_BP + -0xa3a) <= *(int *)(unaff_BP + -0x47a)) {
                  iVar6 = *(int *)(unaff_BP + -0xa3a) * 4;
                  if (*(int *)(unaff_BP + iVar6 + -0x13e) != 0 ||
                      *(int *)(unaff_BP + iVar6 + -0x140) != 0) {
                    func_0x00029834();
                    iStack_6 = -0x2141;
                    func_0x00029c74();
                    iVar5 = 0x22b2;
                    func_0x000299d1();
                  }
                  *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
                }
              }
              if (*(int *)(unaff_BP + -0xaf2) == 0x14) goto LAB_3ab8_1bb7;
              if ((*(int *)(unaff_BP + 6) != 0) && (*(int *)(unaff_BP + -0xaf2) == 1))
              goto LAB_2bb4_45c4;
              if (*(int *)(unaff_BP + -0xaf2) == 1) {
                iStack_6 = unaff_BP + -0xbcc;
                iStack_a = 0xdf08;
                iStack_8 = iVar5;
                FUN_21f2_3454();
                iStack_6 = 0xdf15;
                iVar5 = func_0x00024ce4();
                iVar5 = iVar5 + -1;
                *(int *)(unaff_BP + -0xc76) = iVar5;
                if ((*(char *)(unaff_BP + iVar5 + -0xbcc) == '2') && (3 < *(byte *)0x123)) {
                  *(undefined1 *)(unaff_BP + iVar5 + -0xbcc) = 0;
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xdf44;
                  FUN_21f2_2d26();
                }
                iStack_6 = 0;
                iStack_8 = 0x22b2;
                iVar5 = 0x2ab8;
                iStack_a = 0xdf58;
                FUN_28b3_26a1();
                *(undefined1 *)(unaff_BP + -0xbcc) = 0;
              }
              if (*(int *)(unaff_BP + -0xaf2) == 2) goto LAB_3ab8_1f18;
              if (*(int *)(unaff_BP + -0xaf2) != 3) {
                if (*(int *)(unaff_BP + -0x854) == 0) goto LAB_3ab8_300b;
                iStack_6 = *(int *)(unaff_BP + -0x854);
                iStack_a = 0xdf97;
                iStack_8 = iVar5;
                iVar6 = func_0x00015409();
                iVar5 = 0x11f2;
                if (iVar6 == 0) goto LAB_3ab8_300b;
              }
              if ((*(int *)(unaff_BP + -0xaf2) != 3) ||
                 (*(int *)(unaff_BP + -0x3dc) <= *(int *)(unaff_BP + -0x47a))) {
                uVar12 = (*(uint *)(unaff_BP + -0x47a) & 0x3fff) == 0;
                func_0x000297e6();
                func_0x00029b55();
                func_0x0002996b();
                FUN_28b3_0ee9();
                func_0x000297e6();
                func_0x000297e6();
                func_0x00029b55();
                func_0x0002996b();
                FUN_28b3_1181();
                if ((bool)uVar12) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar12) {
                    iStack_6 = 0xed1c;
                    func_0x00012276();
                    iStack_6 = 0x11f2;
                    iStack_8 = 0xed2a;
                    FUN_1000_0599();
                    iStack_6 = 0xdef;
                    iStack_8 = 0xed3a;
                    func_0x00012276();
                    iVar5 = 0x11f2;
                    goto LAB_3ab8_300b;
                  }
                }
                if (*(int *)(unaff_BP + -0x47a) < *(int *)(unaff_BP + -0x3dc)) {
                  *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
                  iVar5 = *(int *)(unaff_BP + -0x47a) * 4;
                  *(undefined2 *)(unaff_BP + iVar5 + -0x140) = 1;
                  *(undefined2 *)(unaff_BP + iVar5 + -0x13e) = 0;
                  uVar11 = *(undefined2 *)(unaff_BP + -0x3ca);
                  *(undefined2 *)(unaff_BP + iVar5 + -0x5c2) = *(undefined2 *)(unaff_BP + -0x3cc);
                  *(undefined2 *)(unaff_BP + iVar5 + -0x5c0) = uVar11;
                  uVar11 = *(undefined2 *)(unaff_BP + -0x3d8);
                  *(undefined2 *)(unaff_BP + iVar5 + -0x84c) = *(undefined2 *)(unaff_BP + -0x3da);
                  *(undefined2 *)(unaff_BP + iVar5 + -0x84a) = uVar11;
                  iStack_6 = 0xedbd;
                  func_0x000297e6();
                  iStack_6 = 0xedc2;
                  func_0x00029d78();
                  iStack_c = 0x22b2;
                  iStack_e = 0xedcc;
                  func_0x000299d1();
                  iStack_c = 0x22b2;
                  iStack_e = 0xedd5;
                  func_0x000297e6();
                  iStack_c = 0x22b2;
                  iStack_e = -0x1226;
                  func_0x00029d78();
                  iStack_14 = 0x22b2;
                  iStack_16 = 0xede4;
                  func_0x000299d1();
                  iStack_14 = 0x22b2;
                  iStack_16 = 0xeded;
                  func_0x000297e6();
                  iStack_14 = 0x22b2;
                  iStack_16 = 0xedf6;
                  func_0x0002996b();
                  iStack_14 = 0x22b2;
                  iStack_16 = -0x1205;
                  func_0x00029d78();
                  uStack_1c = 0x22b2;
                  uStack_1e = 0xee05;
                  func_0x000299d1();
                  uStack_1c = 0x22b2;
                  uStack_1e = 0xee0e;
                  func_0x000297e6();
                  uStack_1c = 0x22b2;
                  uStack_1e = 0xee17;
                  func_0x0002996b();
                  uStack_1c = 0x22b2;
                  uStack_1e = 0xee1c;
                  func_0x00029d78();
                  func_0x000299d1();
                  iVar5 = 0x1bb4;
                  func_0x0001e18f();
                  if (2 < *(int *)(unaff_BP + -0x47a)) {
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029d78();
                    func_0x000299b9();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029d78();
                    func_0x000299b9();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029d78();
                    func_0x000299b9();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029d78();
                    func_0x000299b9();
                    FUN_28b3_0ee9();
                    func_0x00029834();
                    func_0x00029c2c();
                    func_0x00029834();
                    func_0x00029c2c();
                    FUN_28b3_1163();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029d78();
                    func_0x00029c2c();
                    func_0x000299b9();
                    func_0x00029c9d();
                    func_0x00029c2c();
                    func_0x00029c2c();
                    func_0x000299b9();
                    iStack_6 = 0xef58;
                    func_0x00029c74();
                    func_0x000299d1();
                    func_0x00029834();
                    iVar5 = 0x22b2;
                    func_0x000299d1();
                    uVar12 = *(byte *)0x123 < 8;
                    uVar13 = *(byte *)0x123 == 8;
                    if (!(bool)uVar12) {
                      func_0x00029834();
                      func_0x00029834();
                      func_0x00029ae7();
                      iVar5 = 0x22b2;
                      FUN_28b3_1181();
                      if ((bool)uVar12 || (bool)uVar13) {
                        func_0x00029834();
                        iVar5 = 0x22b2;
                        func_0x00029983();
                      }
                    }
                  }
                }
                else {
                  iStack_6 = 0xed55;
                  func_0x00012276();
                  iStack_6 = 0x11f2;
                  iStack_8 = 0xed63;
                  FUN_1000_0599();
                  iStack_6 = 0xdef;
                  iStack_8 = 0xed73;
                  func_0x00012276();
                  iVar5 = 0x11f2;
                }
                goto LAB_3ab8_300b;
              }
              while( true ) {
                iStack_6 = unaff_BP + -0xa20;
                iStack_a = 0xdfd1;
                iStack_8 = iVar5;
                FUN_21f2_3454();
                iStack_6 = unaff_BP + -0x994;
                iStack_8 = unaff_BP + -0x702;
                iStack_a = unaff_BP + -0x140;
                iStack_c = *(undefined2 *)(unaff_BP + -0x47a);
                iStack_e = 0x22b2;
                iStack_10 = -0x200a;
                FUN_28b3_2a41();
                *(undefined2 *)(unaff_BP + -0x3d2) = *(undefined2 *)0xa6c;
                *(undefined2 *)0xa6c = 3;
                iStack_6 = 0xe01b;
                func_0x000297e6();
                iStack_6 = 0xe020;
                func_0x00029d78();
                iStack_c = 0x22b2;
                iStack_e = 0xe02a;
                func_0x000299d1();
                iStack_c = 0x22b2;
                iStack_e = 0xe033;
                func_0x000297e6();
                iStack_c = 0x22b2;
                iStack_e = 0xe038;
                func_0x00029d78();
                iStack_14 = 0x22b2;
                iStack_16 = 0xe042;
                func_0x000299d1();
                iStack_14 = 0x22b2;
                iStack_16 = 0xe04b;
                func_0x000297e6();
                iStack_14 = 0x22b2;
                iStack_16 = -0x1fb0;
                func_0x00029d78();
                uStack_1c = 0x22b2;
                uStack_1e = 0xe05a;
                func_0x000299d1();
                uStack_1c = 0x22b2;
                uStack_1e = 0xe063;
                func_0x000297e6();
                uStack_1c = 0x22b2;
                uStack_1e = 0xe068;
                func_0x00029d78();
                func_0x000299d1();
                func_0x0001e18f();
                *(undefined2 *)0xa6c = *(undefined2 *)(unaff_BP + -0x3d2);
                iStack_6 = unaff_BP + -0xc0e;
                iStack_8 = unaff_BP + -0xa20;
                iStack_a = 1;
                iStack_c = 0x1bb4;
                iVar5 = 0x1bb4;
                iStack_e = -0x1f62;
                uVar11 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0xc6e) = uVar11;
                if (*(int *)0x158 != 0) {
                  FUN_1885_2ec3();
                  goto LAB_2bb4_45c4;
                }
                if (*(int *)(unaff_BP + -0xc6e) == -1) break;
                func_0x000297e6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xe0dc;
                func_0x000299d1();
                iStack_a = 0x22b2;
                iStack_c = 0xe0e5;
                func_0x000297e6();
                iStack_a = 0x22b2;
                iStack_c = 0xe0ea;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                iStack_14 = 0xe0f4;
                func_0x000299d1();
                uStack_12 = 0x22b2;
                iStack_14 = -0x1f07;
                lVar14 = FUN_13bf_39a0();
                *(undefined2 *)(unaff_BP + -0x850) = (int)lVar14;
                *(undefined2 *)(unaff_BP + -0x84e) = (int)((ulong)lVar14 >> 0x10);
                if (lVar14 < 0) {
                  iStack_6 = 0x11f2;
                  iStack_8 = -0x1ecb;
                  puVar15 = (undefined2 *)func_0x00000271();
                  puVar8 = (undefined2 *)puVar15;
                  puVar7 = (undefined2 *)(unaff_BP + -0x404);
                  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                    puVar3 = puVar7;
                    puVar7 = puVar7 + 1;
                    puVar2 = puVar8;
                    puVar8 = puVar8 + 1;
                    *puVar3 = *puVar2;
                  }
                  uVar12 = (*(uint *)(unaff_BP + -0x47a) & 0x3fff) == 0;
                  func_0x000297e6();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  func_0x000297e6();
                  func_0x000297e6();
                  func_0x0002996b();
                  FUN_28b3_1181();
                  if ((bool)uVar12) {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if (!(bool)uVar12) goto LAB_3ab8_3638;
                    iVar5 = 0x11f2;
                    iStack_6 = 0xe1b4;
                    func_0x00012276();
                  }
                  else {
LAB_3ab8_3638:
                    func_0x00013e19();
                    *(undefined1 *)(unaff_BP + -0x3ea) = 2;
                    *(undefined1 *)(unaff_BP + -0x3e9) = 9;
                    puVar8 = &uStack_20;
                    puVar7 = (undefined2 *)(unaff_BP + -0x404);
                    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                      puVar2 = puVar8;
                      puVar8 = puVar8 + 1;
                      puVar15 = puVar7;
                      puVar7 = puVar7 + 1;
                      *puVar2 = *puVar15;
                    }
                    func_0x00013e46();
                    iStack_6 = unaff_BP + -0x994;
                    iStack_8 = unaff_BP + -0x702;
                    iStack_a = unaff_BP + -0x140;
                    iStack_c = -*(int *)(unaff_BP + -0x47a);
                    iStack_e = 0x11f2;
                    iStack_10 = -0x1dfc;
                    FUN_28b3_2a41();
                    *(undefined2 *)(unaff_BP + -0x3d2) = *(undefined2 *)0xa6c;
                    *(undefined2 *)0xa6c = 3;
                    iStack_6 = 0xe229;
                    func_0x000297e6();
                    iStack_6 = 0xe22e;
                    func_0x00029d78();
                    iStack_c = 0x22b2;
                    iStack_e = 0xe238;
                    func_0x000299d1();
                    iStack_c = 0x22b2;
                    iStack_e = 0xe241;
                    func_0x000297e6();
                    iStack_c = 0x22b2;
                    iStack_e = 0xe246;
                    func_0x00029d78();
                    iStack_14 = 0x22b2;
                    iStack_16 = 0xe250;
                    func_0x000299d1();
                    iStack_14 = 0x22b2;
                    iStack_16 = 0xe259;
                    func_0x000297e6();
                    iStack_14 = 0x22b2;
                    iStack_16 = -0x1da2;
                    func_0x00029d78();
                    uStack_1c = 0x22b2;
                    uStack_1e = 0xe268;
                    func_0x000299d1();
                    uStack_1c = 0x22b2;
                    uStack_1e = 0xe271;
                    func_0x000297e6();
                    uStack_1c = 0x22b2;
                    uStack_1e = 0xe276;
                    func_0x00029d78();
                    func_0x000299d1();
                    func_0x0001e18f();
                    *(undefined2 *)0xa6c = *(undefined2 *)(unaff_BP + -0x3d2);
                    iStack_6 = 0x697d;
                    iStack_8 = unaff_BP + -0xa20;
                    iStack_a = 0x1bb4;
                    iStack_c = 0xe2a5;
                    FUN_21f2_3454();
                    *(undefined2 *)0xc20 = 1;
                    iStack_6 = unaff_BP + -0x3cc;
                    iStack_8 = unaff_BP + -0xa20;
                    iStack_a = 9999;
                    iStack_c = 0x22b2;
                    iStack_e = -0x1d35;
                    uVar11 = FUN_1def_0904();
                    *(undefined2 *)(unaff_BP + -0xc6e) = uVar11;
                    *(undefined2 *)0xc20 = 0;
                    iVar5 = 0x11f2;
                    func_0x00013e19();
                    if (*(int *)0x158 != 0) {
                      FUN_1885_2ec3();
                      goto LAB_2bb4_45c4;
                    }
                    if (*(int *)(unaff_BP + -0xc6e) != -1) {
                      if (*(int *)(unaff_BP + -0x854) != 0) {
                        iStack_6 = *(int *)(unaff_BP + -0x854);
                        iStack_8 = 0x11f2;
                        iStack_a = 0xe319;
                        iVar5 = func_0x00015409();
                        uVar12 = 0;
                        uVar13 = iVar5 == 0;
                        if (!(bool)uVar13) {
                          func_0x000297e6();
                          func_0x000297e6();
                          FUN_28b3_1181();
                          if ((bool)uVar13) {
                            func_0x000297e6();
                            func_0x000297e6();
                            FUN_28b3_1181();
                            if ((bool)uVar13) {
                              iStack_6 = -0x1c98;
                              func_0x00012276();
                              goto LAB_3ab8_3638;
                            }
                          }
                          uVar13 = 0;
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_0ee9();
                          uVar11 = *(undefined2 *)0xa5aa;
                          *(undefined2 *)(unaff_BP + -0xc76) = *(undefined2 *)0xa5a8;
                          *(undefined2 *)(unaff_BP + -0xc74) = uVar11;
                          func_0x000297e6();
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_100d();
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x00029c9d();
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x00029c9d();
                          FUN_28b3_1163();
                          FUN_28b3_1181();
                          if (!(bool)uVar12 && !(bool)uVar13) {
                            uVar11 = *(undefined2 *)(unaff_BP + -0xc70);
                            *(undefined2 *)(unaff_BP + -0x70a) = *(undefined2 *)(unaff_BP + -0xc72);
                            *(undefined2 *)(unaff_BP + -0x708) = uVar11;
                            func_0x000297e6();
                            func_0x00029983();
                            uVar11 = *(undefined2 *)(unaff_BP + -0x708);
                            *(undefined2 *)(unaff_BP + -0xc92) = *(undefined2 *)(unaff_BP + -0x70a);
                            *(undefined2 *)(unaff_BP + -0xc90) = uVar11;
                            uVar11 = *(undefined2 *)(unaff_BP + -0xc88);
                            *(undefined2 *)(unaff_BP + -0x70a) = *(undefined2 *)(unaff_BP + -0xc8a);
                            *(undefined2 *)(unaff_BP + -0x708) = uVar11;
                            func_0x000297e6();
                            func_0x00029983();
                            uVar11 = *(undefined2 *)(unaff_BP + -0x708);
                            *(undefined2 *)(unaff_BP + -0xc9a) = *(undefined2 *)(unaff_BP + -0x70a);
                            *(undefined2 *)(unaff_BP + -0xc98) = uVar11;
                            uVar11 = *(undefined2 *)0xa5f6;
                            *(undefined2 *)(unaff_BP + -0xc76) = *(undefined2 *)0xa5f4;
                            *(undefined2 *)(unaff_BP + -0xc74) = uVar11;
                          }
                          uVar11 = *(undefined2 *)0xa5aa;
                          *(undefined2 *)(unaff_BP + -0xc9e) = *(undefined2 *)0xa5a8;
                          *(undefined2 *)(unaff_BP + -0xc9c) = uVar11;
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_0ee9();
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_0ee9();
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_0ee9();
                          func_0x000297e6();
                          func_0x0002996b();
                          FUN_28b3_0ee9();
                          if (*(int *)(unaff_BP + -0x3f8) != 10000) {
                            uVar11 = *(undefined2 *)(unaff_BP + -0x3f8);
                            *(undefined2 *)(unaff_BP + -0xca4) = 0;
                            *(undefined2 *)(unaff_BP + -0xca6) = 0;
                            *(undefined2 *)(unaff_BP + -0xca8) = 0;
                            *(undefined2 *)(unaff_BP + -0xcaa) = uVar11;
                            func_0x00029da5();
                            func_0x00029b6d();
                            func_0x00029983();
                            puVar8 = (undefined2 *)&stack0xffdc;
                            puVar7 = (undefined2 *)(unaff_BP + -0x404);
                            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                              puVar2 = puVar8;
                              puVar8 = puVar8 + 1;
                              puVar15 = puVar7;
                              puVar7 = puVar7 + 1;
                              *puVar2 = *puVar15;
                            }
                            uStack_28 = 0xe551;
                            puVar7 = (undefined2 *)func_0x0001fcff();
                            *(undefined2 *)(unaff_BP + -0xc64) = *puVar7;
                            *(undefined2 *)(unaff_BP + -0xc62) = puVar7[1];
                            *(undefined2 *)(unaff_BP + -0xc60) = puVar7[2];
                            *(undefined2 *)(unaff_BP + -0xc5e) = puVar7[3];
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029d78();
                            func_0x000299b9();
                            func_0x00029c2c();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029d78();
                            func_0x000299b9();
                            func_0x00029c2c();
                            FUN_28b3_117c();
                            func_0x000299b9();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            FUN_28b3_1163();
                            func_0x00029b85();
                            func_0x000299b9();
                            func_0x00029c2c();
                            FUN_28b3_1163();
                            func_0x000297e6();
                            func_0x00029d78();
                            FUN_28b3_117c();
                            func_0x00029983();
                            func_0x00029834();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            FUN_28b3_117c();
                            func_0x000297e6();
                            func_0x00029d78();
                            FUN_28b3_117c();
                            func_0x00029983();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029d78();
                            func_0x000299b9();
                            func_0x00029c2c();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029d78();
                            func_0x000299b9();
                            func_0x00029c2c();
                            FUN_28b3_117c();
                            func_0x000299b9();
                            func_0x000299d1();
                            func_0x00029834();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            FUN_28b3_1163();
                            func_0x00029b85();
                            func_0x000299b9();
                            func_0x000299d1();
                            func_0x00029834();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            FUN_28b3_1163();
                            func_0x000297e6();
                            func_0x00029d78();
                            FUN_28b3_117c();
                            func_0x00029983();
                            func_0x00029834();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029c2c();
                            FUN_28b3_117c();
                            func_0x000297e6();
                            func_0x00029d78();
                            FUN_28b3_117c();
                            func_0x00029983();
                          }
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x00029d78();
                          iStack_a = 0x22b2;
                          iStack_c = 0xe7cb;
                          func_0x000299d1();
                          iStack_a = 0x22b2;
                          iStack_c = 0xe7d4;
                          func_0x000297e6();
                          iStack_a = 0x22b2;
                          iStack_c = 0xe7dd;
                          FUN_28b3_100d();
                          iStack_a = 0x22b2;
                          iStack_c = 0xe7e2;
                          func_0x00029d78();
                          uStack_12 = 0x22b2;
                          iStack_14 = 0xe7ec;
                          func_0x000299d1();
                          uStack_12 = 0x22b2;
                          iStack_14 = 0xe7f1;
                          puVar7 = (undefined2 *)func_0x0002a178();
                          *(undefined2 *)(unaff_BP + -0xc44) = *puVar7;
                          *(undefined2 *)(unaff_BP + -0xc42) = puVar7[1];
                          *(undefined2 *)(unaff_BP + -0xc40) = puVar7[2];
                          *(undefined2 *)(unaff_BP + -0xc3e) = puVar7[3];
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x00029d78();
                          func_0x000299b9();
                          FUN_28b3_0ee9();
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x00029d78();
                          func_0x000299b9();
                          FUN_28b3_0ee9();
                          func_0x00029834();
                          func_0x00029834();
                          iStack_a = 0x22b2;
                          iStack_c = 0xe86c;
                          func_0x000299d1();
                          iStack_a = 0x22b2;
                          iStack_c = 0xe875;
                          func_0x00029834();
                          uStack_12 = 0x22b2;
                          iStack_14 = 0xe87f;
                          func_0x000299d1();
                          uStack_12 = 0x22b2;
                          iStack_14 = -0x177c;
                          func_0x0002a178();
                          uVar12 = (undefined1 *)0xffef < &iStack_10;
                          uVar13 = &stack0x0000 == (undefined1 *)0x0;
                          func_0x00029834();
                          func_0x000299b9();
                          FUN_28b3_1181();
                          if (!(bool)uVar13) {
                            func_0x00029834();
                            func_0x00029834();
                            FUN_28b3_1181();
                            if ((bool)uVar12 || (bool)uVar13) {
                              func_0x00029834();
                              iStack_6 = -0x1708;
                              func_0x00029c74();
                              func_0x000299d1();
                            }
                            func_0x000297e6();
                            func_0x00029b6d();
                            func_0x0002996b();
                            func_0x00029b6d();
                            func_0x00029d78();
                            func_0x000299b9();
                            func_0x00029c2c();
                            func_0x00029834();
                            func_0x00029bfc();
                            func_0x000299b9();
                            func_0x00029c9d();
                            func_0x00029c2c();
                            func_0x000299b9();
                            func_0x000299d1();
                            func_0x00029834();
                            func_0x00029ae7();
                            func_0x000299d1();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029c9d();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x000297e6();
                            FUN_28b3_100d();
                            func_0x00029c9d();
                            FUN_28b3_1163();
                            func_0x00029d78();
                            func_0x00029c2c();
                            func_0x00029b6d();
                            func_0x00029b6d();
                            func_0x00029ae7();
                            func_0x0002996b();
                            FUN_28b3_0ee9();
                            func_0x00029834();
                            func_0x00029834();
                            FUN_28b3_1181();
                            if (!(bool)uVar12 && !(bool)uVar13) {
                              func_0x000297e6();
                              func_0x00029af6();
                              func_0x00029983();
                            }
                            func_0x00029834();
                            FUN_28b3_100d();
                            func_0x00029b6d();
                            func_0x00029c2c();
                            func_0x00029c2c();
                            func_0x00029b6d();
                            func_0x000299d1();
                            func_0x000297e6();
                            *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
                            func_0x0002996b();
                            func_0x0002996b();
                            FUN_28b3_0ee9();
                            func_0x000297e6();
                            func_0x0002996b();
                            func_0x0002996b();
                            FUN_28b3_0ee9();
                            if (2 < *(int *)(unaff_BP + -0x47a)) {
                              func_0x000297e6();
                              FUN_28b3_100d();
                              func_0x000297e6();
                              FUN_28b3_100d();
                              func_0x00029c9d();
                              func_0x000297e6();
                              FUN_28b3_100d();
                              func_0x000297e6();
                              FUN_28b3_100d();
                              func_0x00029c9d();
                              FUN_28b3_1163();
                              func_0x00029d78();
                              func_0x000297e6();
                              func_0x00029b6d();
                              func_0x00029d78();
                              func_0x00029c2c();
                              func_0x0002996b();
                              func_0x00029d78();
                              func_0x00029c9d();
                              func_0x00029b6d();
                              func_0x00029c2c();
                              iStack_6 = -0x146f;
                              func_0x00029c74();
                              func_0x000299d1();
                            }
                            func_0x00029834();
                            iStack_6 = 0xebaa;
                            func_0x00029c74();
                            func_0x000299d1();
                            iVar5 = unaff_BP + *(int *)(unaff_BP + -0x47a) * 8;
                            *(undefined2 *)(iVar5 + -0x3c0) = *(undefined2 *)(unaff_BP + -0x482);
                            *(undefined2 *)(iVar5 + -0x3be) = *(undefined2 *)(unaff_BP + -0x480);
                            *(undefined2 *)(iVar5 + -0x3bc) = *(undefined2 *)(unaff_BP + -0x47e);
                            *(undefined2 *)(iVar5 + -0x3ba) = *(undefined2 *)(unaff_BP + -0x47c);
                            uVar11 = *(undefined2 *)(unaff_BP + -0x84e);
                            iVar5 = *(int *)(unaff_BP + -0x47a) * 4;
                            *(undefined2 *)(unaff_BP + iVar5 + -0x140) =
                                 *(undefined2 *)(unaff_BP + -0x850);
                            *(undefined2 *)(unaff_BP + iVar5 + -0x13e) = uVar11;
                            iStack_6 = 0xebec;
                            func_0x000297e6();
                            iStack_6 = 0xebf1;
                            func_0x00029d78();
                            iStack_c = 0x22b2;
                            iStack_e = 0xebfb;
                            func_0x000299d1();
                            iStack_c = 0x22b2;
                            iStack_e = 0xec04;
                            func_0x000297e6();
                            iStack_c = 0x22b2;
                            iStack_e = 0xec09;
                            func_0x00029d78();
                            iStack_14 = 0x22b2;
                            iStack_16 = 0xec13;
                            func_0x000299d1();
                            iStack_16 = -*(int *)(unaff_BP + -0x850);
                            iStack_14 = -(*(int *)(unaff_BP + -0x84e) +
                                         (uint)(*(int *)(unaff_BP + -0x850) != 0));
                            *(int *)(unaff_BP + -0xcea) = iStack_16;
                            *(int *)(unaff_BP + -0xce8) = iStack_14;
                            uStack_18 = 0x22b2;
                            uStack_1a = 0xec33;
                            FUN_20a9_1260();
                            uVar11 = *(undefined2 *)(unaff_BP + -0x46a);
                            *(undefined2 *)(unaff_BP + iVar5 + -0x702) =
                                 *(undefined2 *)(unaff_BP + -0x46c);
                            *(undefined2 *)(unaff_BP + iVar5 + -0x700) = uVar11;
                            iStack_6 = 0xec54;
                            func_0x000297e6();
                            iStack_6 = 0xec59;
                            func_0x00029d78();
                            iStack_c = 0x22b2;
                            iStack_e = 0xec63;
                            func_0x000299d1();
                            iStack_c = 0x22b2;
                            iStack_e = 0xec6c;
                            func_0x000297e6();
                            iStack_c = 0x22b2;
                            iStack_e = -0x138f;
                            func_0x00029d78();
                            iStack_14 = 0x22b2;
                            iStack_16 = 0xec7b;
                            func_0x000299d1();
                            iStack_14 = *(int *)(unaff_BP + -0xce8);
                            iStack_16 = *(int *)(unaff_BP + -0xcea);
                            uStack_18 = 0x22b2;
                            uStack_1a = 0xec88;
                            FUN_20a9_1260();
                            uVar11 = *(undefined2 *)(unaff_BP + -0x46a);
                            *(undefined2 *)(unaff_BP + iVar5 + -0x994) =
                                 *(undefined2 *)(unaff_BP + -0x46c);
                            *(undefined2 *)(unaff_BP + iVar5 + -0x992) = uVar11;
                            iVar5 = 0x1bb4;
                            break;
                          }
                          iStack_6 = 0xe8ac;
                          func_0x00012276();
                          iStack_6 = 0x11f2;
                          iStack_8 = -0x1746;
                          FUN_1000_0599();
                          iStack_6 = -0x173b;
                          func_0x00012276();
                        }
                      }
                      goto LAB_3ab8_3638;
                    }
                  }
                }
                else {
                  iVar5 = 0x11f2;
                  iStack_6 = 0xe11b;
                  func_0x00012276();
                }
              }
              goto LAB_3ab8_300b;
            }
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xde0e;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0xde17;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0xde1c;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            iStack_14 = 0xde26;
            func_0x000299d1();
            uStack_12 = 0x22b2;
            iStack_14 = -0x21d5;
            func_0x0000507a();
            iVar5 = 0x3bf;
          } while( true );
        }
        if (*(int *)(unaff_BP + -0xa3c) == 4) {
          iStack_8 = 0xefd3;
          iStack_6 = iVar5;
          FUN_21f2_3454();
          if (*(int *)0x1170 == 0) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xefee;
            FUN_21f2_3454();
          }
          if (*(int *)0x1170 == 1) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xf009;
            FUN_21f2_3454();
          }
          iVar5 = 0x22b2;
          if (*(int *)0x1170 == 2) {
            iStack_6 = 0x22b2;
            iVar5 = 0x22b2;
            iStack_8 = 0xf024;
            FUN_21f2_3454();
          }
          do {
            *(undefined2 *)(unaff_BP + -0x47a) = 0;
            do {
              do {
                while( true ) {
                  iStack_8 = 0xf03b;
                  iStack_6 = iVar5;
                  FUN_21f2_3454();
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xf04b;
                  FUN_21f2_2d26();
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xf05b;
                  FUN_21f2_2d26();
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xf06b;
                  FUN_21f2_2d26();
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xf07b;
                  FUN_21f2_2d26();
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xf08b;
                  FUN_21f2_2d26();
                  *(undefined2 *)0xc1a = 1;
                  *(undefined2 *)0xc20 = 1;
                  *(undefined2 *)0xc2c = 1;
                  if (*(int *)0xa62 == 0x1b) {
                    *(undefined2 *)0xc1a = 0;
                  }
                  iStack_6 = unaff_BP + -0xbe0;
                  iStack_8 = unaff_BP + -0xa20;
                  iStack_a = 0;
                  iStack_c = 0x22b2;
                  iVar5 = 0x1bb4;
                  iStack_e = -0xf3a;
                  uVar11 = FUN_1def_0904();
                  *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
                  *(undefined2 *)0xc1a = 0;
                  *(undefined2 *)0xc20 = 0;
                  *(undefined2 *)0xc2c = 0;
                  if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
                  if (*(int *)0xc18 == 0) break;
                  func_0x000297e6();
                  func_0x00029d78();
                  iStack_a = 0x22b2;
                  iStack_c = 0xf108;
                  func_0x000299d1();
                  iStack_a = 0x22b2;
                  iStack_c = 0xf111;
                  func_0x000297e6();
                  iStack_a = 0x22b2;
                  iStack_c = 0xf116;
                  func_0x00029d78();
                  uStack_12 = 0x22b2;
                  iStack_14 = 0xf120;
                  func_0x000299d1();
                  uStack_12 = 0x22b2;
                  iVar5 = 0x3bf;
                  iStack_14 = -0xedb;
                  func_0x0000507a();
                }
                if (*(int *)(unaff_BP + -0xaf2) == 0x14) goto LAB_3ab8_1bb7;
              } while (*(int *)(unaff_BP + -0x854) == 0);
              iStack_6 = *(undefined2 *)(unaff_BP + -0x854);
              iStack_8 = 0x1bb4;
              iVar5 = 0x11f2;
              iStack_a = 0xf155;
              iVar6 = func_0x00015409();
            } while (iVar6 == 0);
LAB_3ab8_45e6:
            while( true ) {
              iStack_6 = 0xf170;
              FUN_28b3_2b81();
              iStack_6 = 0x2ab8;
              iStack_8 = 0xf180;
              FUN_21f2_3454();
              iStack_6 = 0x22b2;
              iStack_8 = 0xf190;
              FUN_21f2_2d26();
              iStack_6 = 0x22b2;
              iStack_8 = 0xf1a0;
              FUN_21f2_2d26();
              iStack_6 = 0x22b2;
              iStack_8 = 0xf1b1;
              FUN_21f2_2d26();
              if (*(int *)(unaff_BP + -0x47a) != 0) {
                iStack_6 = 0x22b2;
                iStack_8 = 0xf1cb;
                FUN_21f2_2d26();
                if (*(int *)(unaff_BP + 6) == 0) {
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xf1e4;
                  FUN_21f2_2d26();
                }
                else {
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xf1f7;
                  FUN_21f2_2d26();
                }
                if (*(char *)0x124 != '\0') {
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xf211;
                  FUN_21f2_2d26();
                }
                *(undefined2 *)(unaff_BP + -0xcea) = 0x1a;
                *(undefined2 *)(unaff_BP + -0xce2) = 0x32;
                if (*(char *)0x134 != '\0') {
                  *(undefined2 *)(unaff_BP + -0xcea) = 0x32;
                  *(undefined2 *)(unaff_BP + -0xce2) = 0x1a;
                }
                iStack_6 = 0x22b2;
                iStack_8 = 0xf242;
                FUN_1000_0599();
                iStack_6 = 0xf24e;
                func_0x00012276();
                iStack_6 = 0x11f2;
                iStack_8 = 0xf25c;
                FUN_1000_0599();
                iStack_6 = 0x69b9;
                iStack_8 = 0xdef;
                iStack_a = 0xf271;
                func_0x00012276();
                iStack_6 = 0x11f2;
                iStack_8 = 0xf281;
                FUN_1000_0599();
                iStack_6 = 0x69c3;
                iStack_8 = 0xdef;
                iStack_a = 0xf296;
                func_0x00012276();
                iStack_6 = 0x69cd;
                iStack_8 = unaff_BP + -0xb58;
                iStack_a = 0x11f2;
                iStack_c = 0xf2b1;
                FUN_21f2_3454();
                iStack_6 = 0x69d2;
                iStack_8 = unaff_BP + -0xbcc;
                iStack_a = 0x22b2;
                iStack_c = 0xf2cc;
                FUN_21f2_3454();
                if (*(char *)0x134 != '\0') {
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xf2e8;
                  FUN_21f2_3454();
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xf2f9;
                  FUN_21f2_3454();
                  iStack_6 = 0x22b2;
                  iStack_8 = 0xf30a;
                  FUN_21f2_3454();
                }
              }
              *(undefined2 *)0xc1a = 1;
              *(undefined2 *)0xc20 = 1;
              *(undefined2 *)0xc2c = 1;
              if (*(int *)0xa62 == 0x1b) {
                *(undefined2 *)0xc1a = 0;
              }
              iStack_6 = unaff_BP + -0xc0e;
              iStack_8 = unaff_BP + -0xa20;
              iStack_a = 1;
              iStack_c = 0x22b2;
              iStack_e = -0xcbb;
              uVar11 = FUN_1def_0904();
              *(undefined2 *)(unaff_BP + -0xaf2) = uVar11;
              *(undefined2 *)0xc1a = 0;
              *(undefined2 *)0xc20 = 0;
              *(undefined2 *)0xc2c = 0;
              iStack_6 = 0x1bb4;
              iStack_8 = 0xf365;
              FUN_1000_0599();
              func_0x00010526();
              iStack_6 = 0xdef;
              iStack_8 = -0xc87;
              FUN_1000_0599();
              iVar5 = 0xdef;
              func_0x00010526();
              if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
              if (*(int *)0xc18 == 0) break;
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xf3af;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xf3b8;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0xf3bd;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              iStack_14 = 0xf3c7;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              iStack_14 = -0xc34;
              func_0x0000507a();
            }
          } while (*(int *)(unaff_BP + -0xaf2) == -1);
          if ((*(int *)(unaff_BP + -0xaf2) == 1) && (*(int *)(unaff_BP + 6) != 0)) break;
          if ((*(int *)(unaff_BP + -0xaf2) == 1) && (*(int *)(unaff_BP + -0x47a) != 0)) {
            iStack_6 = 0;
            iStack_8 = 0xdef;
            iVar5 = 0x2ab8;
            iStack_a = 0xf41c;
            FUN_28b3_26a1();
          }
          if ((*(int *)(unaff_BP + -0xaf2) == 2) && (*(int *)(unaff_BP + -0x47a) != 0)) {
            if (*(char *)0x134 == '\0') {
              *(undefined1 *)0x134 = 1;
            }
            else {
              *(undefined1 *)0x134 = 0;
            }
          }
          if (*(int *)(unaff_BP + -0xaf2) == 0x14) goto LAB_3ab8_1bb7;
          if (*(int *)(unaff_BP + -0x854) != 0) {
            iStack_6 = *(undefined2 *)(unaff_BP + -0x854);
            iStack_a = 0xf474;
            iStack_8 = iVar5;
            iVar5 = func_0x00015409();
            uVar12 = iVar5 == 0;
            if (!(bool)uVar12) {
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x0002996b();
              FUN_28b3_0ee9();
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x0002996b();
              FUN_28b3_1181();
              if ((bool)uVar12) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar12) {
                  iStack_6 = 0xf4fb;
                  func_0x00012276();
                  *(undefined2 *)0xc22 = 1;
                  iStack_6 = 0x11f2;
                  iStack_8 = 0xf50f;
                  FUN_1000_0599();
                  iStack_6 = 0xdef;
                  iStack_8 = -0xae1;
                  func_0x00012276();
                  goto LAB_3ab8_45e6;
                }
              }
              *(undefined2 *)(unaff_BP + -0x47a) = 1;
              if (*(int *)0xcb6 != 0) {
                iStack_6 = 1;
                iStack_8 = 0x22b2;
                iStack_a = 0xf54a;
                FUN_1def_0338();
              }
              func_0x000297e6();
              func_0x00029b6d();
              func_0x0002996b();
              func_0x00029b6d();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x000299b9();
              FUN_28b3_0ee9();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x000299d1();
              uVar12 = *(byte *)0x123 < 8;
              uVar13 = *(byte *)0x123 == 8;
              if (!(bool)uVar12) {
                func_0x00029834();
                func_0x00029834();
                func_0x00029ae7();
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  func_0x00029834();
                  func_0x00029983();
                }
                func_0x00029834();
                func_0x00029834();
                func_0x00029ae7();
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  func_0x00029834();
                  func_0x00029983();
                }
              }
              iStack_6 = *(undefined2 *)(unaff_BP + -0xbce);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xbd0);
              iStack_a = *(undefined2 *)(unaff_BP + -0xbd2);
              iStack_c = *(undefined2 *)(unaff_BP + -0xbd4);
              iStack_e = unaff_BP + -0xa76;
              iStack_10 = 0x22b2;
              iVar6 = 0x1bb4;
              uStack_12 = 0xf64b;
              iVar5 = func_0x0002267f();
              if (iVar5 == 0) {
                iStack_6 = 0x1bb4;
                iVar6 = 0x22b2;
                iStack_8 = 0xf665;
                FUN_21f2_3454();
              }
              iStack_6 = *(undefined2 *)(unaff_BP + -0xbf8);
              iStack_8 = *(int *)(unaff_BP + -0xbfa);
              iStack_a = *(undefined2 *)(unaff_BP + -0xbfc);
              iStack_c = *(undefined2 *)(unaff_BP + -0xbfe);
              iStack_e = unaff_BP + -0xae0;
              uStack_12 = 0xf689;
              iStack_10 = iVar6;
              iVar5 = func_0x0002267f();
              if (iVar5 == 0) {
                iStack_6 = 0x1bb4;
                iStack_8 = -0x95d;
                FUN_21f2_3454();
              }
            }
          }
          goto LAB_3ab8_45e6;
        }
        *(undefined2 *)(unaff_BP + -0x47a) = 0;
        if (*(int *)(unaff_BP + -0xa3c) != 5) break;
        iStack_8 = 0xf6c9;
        iStack_6 = iVar5;
        FUN_21f2_3454();
        iStack_6 = 0x22b2;
        iStack_8 = 0xf6d9;
        FUN_21f2_3454();
        iStack_6 = 0x22b2;
        iStack_8 = 0xf6e9;
        FUN_21f2_3454();
        iStack_6 = 0x22b2;
        uVar11 = 0x22b2;
        iStack_8 = 0xf6f9;
        FUN_21f2_3454();
        goto LAB_3ab8_4b7b;
      }
      break;
    }
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xfa3f;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xfa48;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0xfa4d;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    iStack_14 = 0xfa57;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uVar11 = 0x3bf;
    iStack_14 = -0x5a4;
    func_0x0000507a();
LAB_3ab8_4b7b:
    iStack_8 = 0xf709;
    iStack_6 = uVar11;
    FUN_21f2_3454();
    if (*(int *)(unaff_BP + 6) != 0) {
      uVar11 = FUN_3ab8_4c9f();
      return uVar11;
    }
    iStack_6 = 0x22b2;
    iStack_8 = 0xf723;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf733;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf744;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf754;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf765;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf775;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf786;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf796;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf7a7;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf7b7;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf7c8;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf7d8;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf7e9;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf7f9;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf80a;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf81a;
    FUN_21f2_2d26();
  }
LAB_2bb4_45c4:
  while( true ) {
    FUN_32b2_6d14();
    iStack_6 = 0x3ff;
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
    iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
    iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
    iStack_a = 0x32b2;
    iStack_c = 0x119;
    FUN_32b2_75fe();
    iStack_6 = 0x123;
    FUN_32b2_6d14();
    iStack_6 = 299;
    FUN_32b2_704d();
    iStack_6 = 0x133;
    FUN_32b2_7095();
    iStack_6 = 0x13b;
    FUN_32b2_6eb1();
    iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
    iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
    iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
    iStack_c = 0x32b2;
    iStack_e = 0x150;
    FUN_32b2_75ec();
    uVar12 = &stack0x0000 == (undefined1 *)0x4;
    iStack_6 = 0x32b2;
    iStack_8 = 0x15a;
    FUN_32b2_6d14();
    iStack_6 = 0x32b2;
    iStack_8 = 0x162;
    FUN_32b2_704d();
    iStack_6 = 0x32b2;
    iStack_8 = 0x16a;
    FUN_32b2_7095();
    iStack_6 = 0x32b2;
    iStack_8 = 0x173;
    FUN_32b2_6eb1();
    iStack_6 = 0x32b2;
    iStack_8 = 0x17b;
    FUN_32b2_6cc6();
    iStack_6 = 0x32b2;
    iStack_8 = 0x183;
    FUN_32b2_6cc6();
    iStack_6 = 0x32b2;
    iStack_8 = 0x188;
    FUN_32b2_7191();
    if ((bool)uVar12) {
      iStack_6 = 0x32b2;
      iStack_8 = 0x192;
      FUN_32b2_6cc6();
      iStack_6 = 0x32b2;
      iStack_8 = 0x19a;
      FUN_32b2_6cc6();
      iStack_6 = 0x32b2;
      iStack_8 = 0x19f;
      FUN_32b2_7191();
      if ((bool)uVar12) {
        return 0;
      }
    }
    iStack_6 = unaff_BP + -0xa8;
    iStack_8 = unaff_BP + -0x1c;
    iStack_a = *(undefined2 *)(unaff_BP + -0x7c);
    iStack_c = *(undefined2 *)(unaff_BP + -0x7e);
    iStack_e = *(int *)(unaff_BP + -0x80);
    iStack_10 = *(int *)(unaff_BP + -0x82);
    uStack_12 = *(undefined2 *)(unaff_BP + -0x58);
    iStack_14 = *(undefined2 *)(unaff_BP + -0x5a);
    iStack_16 = *(int *)(unaff_BP + -0x5c);
    uStack_18 = *(undefined2 *)(unaff_BP + -0x5e);
    uStack_1a = 0x32b2;
    uStack_1c = 0x1d0;
    FUN_32b2_6cc6();
    uStack_1a = 0x32b2;
    uStack_1c = 0x1d5;
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    uStack_2a = 0x32b2;
    uStack_2c = 0x1f6;
    FUN_32b2_6eb1();
    uStack_2a = 0x32b2;
    uStack_2c = 0x1fa;
    iVar5 = FUN_3ab8_4fbd();
    if (iVar5 == 0) break;
    iStack_6 = 0x32b2;
    iStack_8 = 0x209;
    FUN_32b2_6cc6();
    iStack_6 = 0x32b2;
    iStack_8 = 0x20e;
    FUN_32b2_7258();
    iStack_6 = 0x32b2;
    iStack_8 = 0x216;
    FUN_32b2_6e99();
    iStack_6 = 0x32b2;
    iStack_8 = 0x21e;
    FUN_32b2_6ef9();
    iStack_6 = unaff_BP + -0xb4;
    iStack_8 = unaff_BP + -0xa4;
    iStack_a = 0x32b2;
    iStack_c = 0x231;
    FUN_32b2_6cc6();
    iStack_a = 0x32b2;
    iStack_c = 0x236;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    iStack_14 = 0x240;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    iStack_14 = 0x248;
    FUN_32b2_6cc6();
    uStack_12 = 0x32b2;
    iStack_14 = 0x24d;
    FUN_32b2_7258();
    uStack_1a = 0x32b2;
    uStack_1c = 599;
    FUN_32b2_6eb1();
    uStack_1a = 0x32b2;
    uStack_1c = 0x25f;
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    uStack_2a = 0x32b2;
    uStack_2c = 0x288;
    FUN_32b2_6eb1();
    uStack_2a = 0x32b2;
    uStack_2c = 0x290;
    FUN_32b2_6cc6();
    uStack_2a = 0x32b2;
    uStack_2c = 0x295;
    FUN_32b2_7258();
    uStack_32 = 0x32b2;
    uStack_34 = 0x29f;
    FUN_32b2_6eb1();
    uStack_32 = 0x32b2;
    uStack_34 = 0x2a7;
    FUN_32b2_6cc6();
    uStack_32 = 0x32b2;
    uStack_34 = 0x2ac;
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_3ab8_5089(0x32b2,1);
    iStack_6 = unaff_BP + -0xe4;
    iStack_8 = unaff_BP + -0xd0;
    iStack_a = 0x32b2;
    iStack_c = 0x2d4;
    FUN_32b2_6cc6();
    iStack_a = 0x32b2;
    iStack_c = 0x2d9;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    iStack_14 = 0x2e3;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    iStack_14 = 0x2eb;
    FUN_32b2_6cc6();
    uStack_12 = 0x32b2;
    iStack_14 = 0x2f0;
    FUN_32b2_7258();
    uStack_1a = 0x32b2;
    uStack_1c = 0x2fa;
    FUN_32b2_6eb1();
    uStack_1a = 0x32b2;
    uStack_1c = 0x302;
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    uStack_2a = 0x32b2;
    uStack_2c = 0x31e;
    FUN_32b2_6eb1();
    uStack_2a = 0x32b2;
    uStack_2c = 0x326;
    FUN_32b2_6cc6();
    uStack_2a = 0x32b2;
    uStack_2c = 0x32b;
    FUN_32b2_7258();
    uStack_32 = 0x32b2;
    uStack_34 = 0x335;
    FUN_32b2_6eb1();
    uStack_32 = 0x32b2;
    uStack_34 = 0x33d;
    FUN_32b2_6cc6();
    uStack_32 = 0x32b2;
    uStack_34 = 0x342;
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_3ab8_5089(0x32b2,1);
    uVar12 = (undefined1 *)0xffc9 < &uStack_36;
    uVar13 = &stack0x0000 == (undefined1 *)0x0;
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
    if (!(bool)uVar12 && !(bool)uVar13) {
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_7191();
      if (!(bool)uVar13) {
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
        iStack_6 = 0x32b2;
        iStack_8 = 0x5db;
        FUN_32b2_6cc6();
        iStack_6 = 0x32b2;
        iStack_8 = 0x5e0;
        FUN_32b2_7258();
        iStack_e = 0x32b2;
        iStack_10 = 0x5ea;
        FUN_32b2_6eb1();
        iStack_e = 0x32b2;
        iStack_10 = 0x5f2;
        FUN_32b2_6cc6();
        iStack_e = 0x32b2;
        iStack_10 = 0x5f7;
        FUN_32b2_7258();
        iStack_16 = 0x32b2;
        uStack_18 = 0x601;
        FUN_32b2_6eb1();
        iStack_16 = *(undefined2 *)(unaff_BP + -100);
        uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
        uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
        uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_28 = 0x622;
        FUN_32b2_6d14();
        uStack_2e = 0x32b2;
        uStack_30 = 0x62c;
        FUN_32b2_6eb1();
        uStack_2e = 0x32b2;
        uStack_30 = 0x635;
        FUN_32b2_6d14();
        uStack_36 = 0x32b2;
        uStack_38 = 0x63f;
        FUN_32b2_6eb1();
        uStack_36 = 0;
        uStack_38 = 0x32b2;
        FUN_3ab8_5089();
        uVar11 = *(undefined2 *)(unaff_BP + -0x60);
        *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
        *(undefined2 *)(unaff_BP + -0x84) = uVar11;
        uVar11 = *(undefined2 *)(unaff_BP + -0x88);
        *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
        *(undefined2 *)(unaff_BP + -0x9c) = uVar11;
        puVar8 = (undefined2 *)&stack0xffdc;
        puVar7 = (undefined2 *)(unaff_BP + 0x1c);
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar15 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar15;
        }
        uStack_28 = 0x684;
        iVar5 = FUN_3ab8_522f();
        uVar12 = 0;
        uVar13 = iVar5 == 0;
        if (!(bool)uVar13) {
          FUN_32b2_6d14();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_7258();
          FUN_32b2_7191();
          if ((bool)uVar12 || (bool)uVar13) {
            FUN_32b2_6d14();
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar12 || (bool)uVar13) {
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
        if (!(bool)uVar12) {
          FUN_32b2_6d14();
          FUN_32b2_6fc7();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_7191();
          if (!(bool)uVar12) {
            *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
            *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
            *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
            *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
          }
          iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
          iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
          iStack_a = 0x32b2;
          iStack_c = 0x774;
          FUN_32b2_7592();
          iStack_6 = 0x77e;
          FUN_32b2_6d14();
          iStack_6 = 0x786;
          FUN_32b2_70dc();
          iStack_6 = 0x78e;
          FUN_32b2_6d14();
          iStack_6 = 0x797;
          FUN_32b2_710c();
          iStack_6 = 0x79c;
          FUN_32b2_7182();
          iStack_6 = 0x7a5;
          FUN_32b2_6e99();
          iStack_6 = 0x7ad;
          FUN_32b2_710c();
          iStack_6 = 0x7b5;
          FUN_32b2_7154();
          iStack_6 = 0x7be;
          FUN_32b2_6e99();
          iStack_6 = 0x7c7;
          FUN_32b2_6eb1();
          iStack_6 = unaff_BP + -0x62;
          iStack_8 = 0x32b2;
          iStack_a = 0x7d9;
          FUN_32b2_6cc6();
          iStack_8 = 0x32b2;
          iStack_a = 0x7de;
          FUN_32b2_7258();
          iStack_10 = 0x32b2;
          uStack_12 = 0x7e8;
          FUN_32b2_6eb1();
          iStack_10 = 0x32b2;
          uStack_12 = 0x7f0;
          FUN_32b2_6cc6();
          iStack_10 = 0x32b2;
          uStack_12 = 0x7f5;
          FUN_32b2_7258();
          uStack_18 = 0x32b2;
          uStack_1a = 0x7ff;
          FUN_32b2_6eb1();
          uStack_18 = *(undefined2 *)(unaff_BP + -100);
          uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
          uStack_1c = *(undefined2 *)(unaff_BP + -0x68);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
          uStack_28 = 0x32b2;
          uStack_2a = 0x820;
          FUN_32b2_6d14();
          uStack_30 = 0x32b2;
          uStack_32 = 0x82a;
          FUN_32b2_6eb1();
          uStack_30 = 0x32b2;
          uStack_32 = 0x833;
          FUN_32b2_6d14();
          uStack_38 = 0x32b2;
          FUN_32b2_6eb1();
          uStack_38 = 0;
          FUN_3ab8_5089(0x32b2);
          uVar12 = (undefined1 *)0xffc9 < &uStack_38;
          uVar13 = &stack0x0000 == (undefined1 *)0x2;
          iStack_6 = 0x84f;
          FUN_32b2_6cc6();
          iStack_6 = 0x857;
          FUN_32b2_6cc6();
          iStack_6 = 0x85c;
          FUN_32b2_7191();
          if ((bool)uVar13) {
            uVar11 = *(undefined2 *)(unaff_BP + 8);
            *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
            *(undefined2 *)(unaff_BP + -0x60) = uVar11;
          }
          iStack_6 = 0x872;
          FUN_32b2_6cc6();
          iStack_6 = 0x87a;
          FUN_32b2_6cc6();
          iStack_6 = 0x87f;
          FUN_32b2_7191();
          if ((bool)uVar13) {
            uVar11 = *(undefined2 *)(unaff_BP + 0xc);
            *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
            *(undefined2 *)(unaff_BP + -0x88) = uVar11;
          }
          uVar11 = *(undefined2 *)(unaff_BP + -0x60);
          puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
          *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
          puVar7[1] = uVar11;
          uVar11 = *(undefined2 *)(unaff_BP + -0x88);
          puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
          *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar7[1] = uVar11;
          uVar11 = *(undefined2 *)(unaff_BP + -0x60);
          puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
          *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
          puVar7[1] = uVar11;
          uVar11 = *(undefined2 *)(unaff_BP + -0x88);
          puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
          *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar7[1] = uVar11;
          piVar1 = (int *)(unaff_BP + -0x36);
          *piVar1 = *piVar1 + 1;
          uVar13 = *piVar1 == 0;
          iStack_6 = 0x8d7;
          FUN_32b2_6d14();
          iStack_6 = 0x8e0;
          FUN_32b2_6d14();
          iStack_6 = 0x8e5;
          FUN_32b2_7191();
          if (!(bool)uVar12 && !(bool)uVar13) {
            iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
            iStack_c = 0x32b2;
            iStack_e = 0x8ff;
            FUN_32b2_7592();
            iStack_6 = 0x32b2;
            iStack_8 = 0x909;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x911;
            FUN_32b2_7154();
            iStack_6 = 0x32b2;
            iStack_8 = 0x916;
            FUN_32b2_6fd6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x91e;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x927;
            FUN_32b2_710c();
            iStack_6 = 0x32b2;
            iStack_8 = 0x92c;
            FUN_32b2_7182();
            iStack_6 = 0x32b2;
            iStack_8 = 0x935;
            FUN_32b2_6e99();
            iStack_6 = 0x32b2;
            iStack_8 = 0x93d;
            FUN_32b2_710c();
            iStack_6 = 0x32b2;
            iStack_8 = 0x945;
            FUN_32b2_7154();
            iStack_6 = 0x32b2;
            iStack_8 = 0x94e;
            FUN_32b2_6e99();
            iStack_6 = 0x32b2;
            iStack_8 = 0x957;
            FUN_32b2_6eb1();
            iStack_6 = unaff_BP + -0x8a;
            iStack_8 = unaff_BP + -0x62;
            iStack_a = 0x32b2;
            iStack_c = 0x969;
            FUN_32b2_6cc6();
            iStack_a = 0x32b2;
            iStack_c = 0x96e;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            iStack_14 = 0x978;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            iStack_14 = 0x980;
            FUN_32b2_6cc6();
            uStack_12 = 0x32b2;
            iStack_14 = 0x985;
            FUN_32b2_7258();
            uStack_1a = 0x32b2;
            uStack_1c = 0x98f;
            FUN_32b2_6eb1();
            uStack_1a = *(undefined2 *)(unaff_BP + -100);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x66);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_28 = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_2a = 0x32b2;
            uStack_2c = 0x9b0;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x9ba;
            FUN_32b2_6eb1();
            uStack_32 = 0x32b2;
            uStack_34 = 0x9c3;
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            FUN_3ab8_5089(0x32b2,0);
            uVar12 = &stack0x0000 == (undefined1 *)0x4;
            iStack_6 = 0x32b2;
            iStack_8 = 0x9df;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x9e7;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x9ec;
            FUN_32b2_7191();
            if ((bool)uVar12) {
              uVar11 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar11;
            }
            iStack_6 = 0x32b2;
            iStack_8 = 0xa02;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0xa0a;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0xa0f;
            FUN_32b2_7191();
            if ((bool)uVar12) {
              uVar11 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar11;
            }
            uVar11 = *(undefined2 *)(unaff_BP + -0x60);
            puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
            puVar7[1] = uVar11;
            uVar11 = *(undefined2 *)(unaff_BP + -0x88);
            puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar7[1] = uVar11;
            *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
          }
          return *(undefined2 *)(unaff_BP + -0x36);
        }
      }
      return 0;
    }
  }
  return 0;
LAB_3ab8_1f18:
  *(undefined2 *)(unaff_BP + -0x47a) = 0;
  goto LAB_3ab8_1f1e;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  117 bytes, 3 callers */

/* WARNING: Instruction at (ram,0x0003017b) overlaps instruction at (ram,0x0003017a)
    */

undefined2 __cdecl16far FUN_3ab8_4fbd(void)

{
  int *piVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined2 uVar7;
  int in_CX;
  undefined2 uVar8;
  int unaff_BP;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  int iStack_6;
  
  *(undefined2 *)(unaff_BP + -0x47a) = 0;
  if ((0 < *(int *)(unaff_BP + -0xaf2)) && (*(int *)(unaff_BP + -0xaf2) < 5)) {
    iStack_6 = 0x3ab8;
    iStack_8 = 0xfb66;
    FUN_21f2_3454();
    iStack_6 = 0x22b2;
    iStack_8 = 0xfb77;
    FUN_21f2_2d26();
    func_0x0000c3ca();
    iStack_6 = *(undefined2 *)0xa5e6;
    iStack_8 = *(undefined2 *)0xa5e4;
    uStack_a = *(undefined2 *)0xa5ea;
    uStack_c = *(undefined2 *)0xa5e8;
    uStack_e = *(undefined2 *)0xa5e6;
    uStack_10 = *(undefined2 *)0xa5e4;
    uStack_12 = 0;
    iStack_14 = unaff_BP + -0xa20;
    uStack_16 = 0xfffe;
    in_CX = 1;
    uStack_18 = 1;
    pcVar5 = (code *)swi(0x3f);
    iVar6 = (*pcVar5)();
    if (iVar6 != -1) {
      if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
      *(undefined2 *)0xbc0 = 1;
      *(undefined2 *)0xbc2 = 0;
      *(undefined2 *)(unaff_BP + -0xcc2) = 0;
      iStack_6 = 0xfbe4;
      func_0x0000daa6();
      FUN_10ad_1871();
      *(undefined2 *)(unaff_BP + -0xce2) = 0;
      uVar7 = *(undefined2 *)0xa606;
      *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)0xa604;
      *(undefined2 *)(unaff_BP + -0xc10) = uVar7;
      *(undefined2 *)(unaff_BP + -0xa3a) = 1;
      while (*(int *)(unaff_BP + -0xa3a) <= *(int *)0x150) {
        iStack_6 = 0xfc21;
        uVar14 = func_0x00000398();
        if ((*(byte *)((int)uVar14 + 0x16) & 2) != 0) {
          iStack_6 = 0xfc39;
          uVar14 = func_0x00000398();
          uVar11 = 0;
          uVar12 = (*(byte *)((int)uVar14 + 0x16) & 1) == 0;
          if ((bool)uVar12) {
            func_0x000297e6();
            iStack_6 = 0xfc5a;
            func_0x00000398();
            FUN_28b3_0c98();
            FUN_28b3_1181();
            if (!(bool)uVar11 && !(bool)uVar12) {
              iStack_6 = 0xfc7a;
              uVar14 = func_0x00000398();
              uVar8 = (undefined2)((ulong)uVar14 >> 0x10);
              uVar7 = *(undefined2 *)((int)uVar14 + 6);
              *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)((int)uVar14 + 4);
              *(undefined2 *)(unaff_BP + -0xc10) = uVar7;
              *(undefined2 *)(unaff_BP + -0xce2) = *(undefined2 *)(unaff_BP + -0xa3a);
            }
          }
        }
        *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
      }
      if (0 < *(int *)(unaff_BP + -0xce2)) {
        iStack_6 = 0xfcad;
        puVar13 = (undefined2 *)func_0x00000398();
        puVar9 = (undefined2 *)puVar13;
        puVar10 = (undefined2 *)(unaff_BP + -0xc44);
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4 = puVar10;
          puVar10 = puVar10 + 1;
          puVar3 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar4 = *puVar3;
        }
        puVar9 = &uStack_18;
        puVar10 = (undefined2 *)(unaff_BP + -0xc44);
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar9;
          puVar9 = puVar9 + 1;
          puVar13 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = *puVar13;
        }
        uStack_1c = 0;
        uStack_1e = 0xfcd8;
        func_0x00019593();
        *(undefined2 *)0xc0a = 0;
        if (*(int *)(unaff_BP + -0xcc2) < 200) {
          iStack_6 = 0xfcf5;
          uVar14 = func_0x00000398();
          puVar2 = (uint *)((int)uVar14 + 0x16);
          *puVar2 = *puVar2 | 1;
          uVar7 = *(undefined2 *)(unaff_BP + -0xce2);
          *(int *)(unaff_BP + -0xcc2) = *(int *)(unaff_BP + -0xcc2) + 1;
          *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xcc2) * 2 + -0xee2) = uVar7;
        }
        uVar7 = FUN_3ab8_5197();
        return uVar7;
      }
      uVar7 = thunk_FUN_3ab8_519a();
      return uVar7;
    }
  }
  while( true ) {
    uVar11 = (char)in_CX == *(char *)(unaff_DI + 0xe5e);
    FUN_32b2_6cc6();
    FUN_32b2_7191();
    if ((bool)uVar11) {
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191();
      if ((bool)uVar11) {
        return 0;
      }
    }
    iStack_6 = *(undefined2 *)(unaff_BP + -0x7c);
    iStack_8 = *(undefined2 *)(unaff_BP + -0x7e);
    uStack_a = *(undefined2 *)(unaff_BP + -0x80);
    uStack_c = *(undefined2 *)(unaff_BP + -0x82);
    uStack_e = *(undefined2 *)(unaff_BP + -0x58);
    uStack_10 = *(undefined2 *)(unaff_BP + -0x5a);
    uStack_12 = *(undefined2 *)(unaff_BP + -0x5c);
    iStack_14 = *(int *)(unaff_BP + -0x5e);
    uStack_16 = 0x32b2;
    uStack_18 = 0x1d0;
    FUN_32b2_6cc6();
    uStack_16 = 0x32b2;
    uStack_18 = 0x1d5;
    FUN_32b2_7258();
    uStack_1e = 0x32b2;
    uStack_20 = 0x1df;
    FUN_32b2_6eb1();
    uStack_1e = 0x32b2;
    uStack_20 = 0x1e7;
    FUN_32b2_6cc6();
    uStack_1e = 0x32b2;
    uStack_20 = 0x1ec;
    FUN_32b2_7258();
    uStack_28 = 0x1f6;
    FUN_32b2_6eb1();
    uStack_28 = 0x1fa;
    iVar6 = FUN_3ab8_4fbd();
    if (iVar6 == 0) break;
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    iStack_6 = 0x32b2;
    iStack_8 = 0x231;
    FUN_32b2_6cc6();
    iStack_6 = 0x32b2;
    iStack_8 = 0x236;
    FUN_32b2_7258();
    uStack_e = 0x32b2;
    uStack_10 = 0x240;
    FUN_32b2_6eb1();
    uStack_e = 0x32b2;
    uStack_10 = 0x248;
    FUN_32b2_6cc6();
    uStack_e = 0x32b2;
    uStack_10 = 0x24d;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 599;
    FUN_32b2_6eb1();
    uStack_16 = 0x32b2;
    uStack_18 = 0x25f;
    FUN_32b2_6d14();
    uStack_1e = 0x32b2;
    uStack_20 = 0x269;
    FUN_32b2_6eb1();
    uStack_1e = 0x32b2;
    uStack_20 = 0x271;
    FUN_32b2_6cc6();
    uStack_1e = 0x32b2;
    uStack_20 = 0x276;
    FUN_32b2_7258();
    uStack_1e = 0x32b2;
    uStack_20 = 0x27e;
    FUN_32b2_6e99();
    uStack_28 = 0x288;
    FUN_32b2_6eb1();
    uStack_28 = 0x290;
    FUN_32b2_6cc6();
    uStack_28 = 0x295;
    FUN_32b2_7258();
    uStack_2e = 0x32b2;
    uStack_30 = 0x29f;
    FUN_32b2_6eb1();
    uStack_2e = 0x32b2;
    uStack_30 = 0x2a7;
    FUN_32b2_6cc6();
    uStack_2e = 0x32b2;
    uStack_30 = 0x2ac;
    FUN_32b2_7258();
    uStack_36 = 0x32b2;
    uStack_38 = 0x2b6;
    FUN_32b2_6eb1();
    uStack_36 = 1;
    uStack_38 = 0x32b2;
    FUN_3ab8_5089();
    in_CX = unaff_BP + -0xd0;
    iStack_6 = 0x32b2;
    iStack_8 = 0x2d4;
    FUN_32b2_6cc6();
    iStack_6 = 0x32b2;
    iStack_8 = 0x2d9;
    FUN_32b2_7258();
    uStack_e = 0x32b2;
    uStack_10 = 0x2e3;
    FUN_32b2_6eb1();
    uStack_e = 0x32b2;
    uStack_10 = 0x2eb;
    FUN_32b2_6cc6();
    uStack_e = 0x32b2;
    uStack_10 = 0x2f0;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 0x2fa;
    FUN_32b2_6eb1();
    uStack_16 = 0x32b2;
    uStack_18 = 0x302;
    FUN_32b2_6d14();
    uStack_1e = 0x32b2;
    uStack_20 = 0x30c;
    FUN_32b2_6eb1();
    uStack_1e = 0x32b2;
    uStack_20 = 0x314;
    FUN_32b2_6d14();
    uStack_28 = 0x31e;
    FUN_32b2_6eb1();
    uStack_28 = 0x326;
    FUN_32b2_6cc6();
    uStack_28 = 0x32b;
    FUN_32b2_7258();
    uStack_2e = 0x32b2;
    uStack_30 = 0x335;
    FUN_32b2_6eb1();
    uStack_2e = 0x32b2;
    uStack_30 = 0x33d;
    FUN_32b2_6cc6();
    uStack_2e = 0x32b2;
    uStack_30 = 0x342;
    FUN_32b2_7258();
    uStack_36 = 0x32b2;
    uStack_38 = 0x34c;
    FUN_32b2_6eb1();
    uStack_36 = 1;
    uStack_38 = 0x32b2;
    FUN_3ab8_5089();
    uVar11 = (undefined1 *)0xffc9 < &uStack_36;
    uVar12 = &stack0x0000 == (undefined1 *)0x0;
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
    if (!(bool)uVar11 && !(bool)uVar12) {
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_7191();
      if (!(bool)uVar12) {
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
        iStack_6 = 0x32b2;
        iStack_8 = 0x5db;
        FUN_32b2_6cc6();
        iStack_6 = 0x32b2;
        iStack_8 = 0x5e0;
        FUN_32b2_7258();
        uStack_e = 0x32b2;
        uStack_10 = 0x5ea;
        FUN_32b2_6eb1();
        uStack_e = 0x32b2;
        uStack_10 = 0x5f2;
        FUN_32b2_6cc6();
        uStack_e = 0x32b2;
        uStack_10 = 0x5f7;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 0x601;
        FUN_32b2_6eb1();
        uStack_16 = *(undefined2 *)(unaff_BP + -100);
        uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
        uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_22 = *(undefined2 *)(unaff_BP + -0x4c);
        uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
        uStack_28 = 0x622;
        FUN_32b2_6d14();
        uStack_2e = 0x32b2;
        uStack_30 = 0x62c;
        FUN_32b2_6eb1();
        uStack_2e = 0x32b2;
        uStack_30 = 0x635;
        FUN_32b2_6d14();
        uStack_36 = 0x32b2;
        uStack_38 = 0x63f;
        FUN_32b2_6eb1();
        uStack_36 = 0;
        uStack_38 = 0x32b2;
        FUN_3ab8_5089();
        uVar7 = *(undefined2 *)(unaff_BP + -0x60);
        *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
        *(undefined2 *)(unaff_BP + -0x84) = uVar7;
        uVar7 = *(undefined2 *)(unaff_BP + -0x88);
        *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
        *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
        puVar9 = &uStack_24;
        puVar10 = (undefined2 *)(unaff_BP + 0x1c);
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar9;
          puVar9 = puVar9 + 1;
          puVar13 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = *puVar13;
        }
        uStack_28 = 0x684;
        iVar6 = FUN_3ab8_522f();
        uVar11 = 0;
        uVar12 = iVar6 == 0;
        if (!(bool)uVar12) {
          FUN_32b2_6d14();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_7258();
          FUN_32b2_7191();
          if ((bool)uVar11 || (bool)uVar12) {
            FUN_32b2_6d14();
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar11 || (bool)uVar12) {
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
        if (!(bool)uVar11) {
          FUN_32b2_6d14();
          FUN_32b2_6fc7();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_7191();
          if (!(bool)uVar11) {
            *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
            *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
            *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
            *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
          }
          iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
          iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
          uStack_a = 0x32b2;
          uStack_c = 0x774;
          FUN_32b2_7592();
          iStack_6 = 0x77e;
          FUN_32b2_6d14();
          iStack_6 = 0x786;
          FUN_32b2_70dc();
          iStack_6 = 0x78e;
          FUN_32b2_6d14();
          iStack_6 = 0x797;
          FUN_32b2_710c();
          iStack_6 = 0x79c;
          FUN_32b2_7182();
          iStack_6 = 0x7a5;
          FUN_32b2_6e99();
          iStack_6 = 0x7ad;
          FUN_32b2_710c();
          iStack_6 = 0x7b5;
          FUN_32b2_7154();
          iStack_6 = 0x7be;
          FUN_32b2_6e99();
          iStack_6 = 0x7c7;
          FUN_32b2_6eb1();
          iStack_6 = unaff_BP + -0x62;
          iStack_8 = 0x32b2;
          uStack_a = 0x7d9;
          FUN_32b2_6cc6();
          iStack_8 = 0x32b2;
          uStack_a = 0x7de;
          FUN_32b2_7258();
          uStack_10 = 0x32b2;
          uStack_12 = 0x7e8;
          FUN_32b2_6eb1();
          uStack_10 = 0x32b2;
          uStack_12 = 0x7f0;
          FUN_32b2_6cc6();
          uStack_10 = 0x32b2;
          uStack_12 = 0x7f5;
          FUN_32b2_7258();
          uStack_18 = 0x32b2;
          FUN_32b2_6eb1();
          uStack_18 = *(undefined2 *)(unaff_BP + -100);
          uStack_1c = *(undefined2 *)(unaff_BP + -0x68);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_28 = 0x32b2;
          uStack_2a = 0x820;
          FUN_32b2_6d14();
          uStack_30 = 0x32b2;
          uStack_32 = 0x82a;
          FUN_32b2_6eb1();
          uStack_30 = 0x32b2;
          uStack_32 = 0x833;
          FUN_32b2_6d14();
          uStack_38 = 0x32b2;
          FUN_32b2_6eb1();
          uStack_38 = 0;
          FUN_3ab8_5089(0x32b2);
          uVar11 = (undefined1 *)0xffc9 < &uStack_38;
          uVar12 = &stack0x0000 == (undefined1 *)0x2;
          iStack_6 = 0x84f;
          FUN_32b2_6cc6();
          iStack_6 = 0x857;
          FUN_32b2_6cc6();
          iStack_6 = 0x85c;
          FUN_32b2_7191();
          if ((bool)uVar12) {
            uVar7 = *(undefined2 *)(unaff_BP + 8);
            *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
            *(undefined2 *)(unaff_BP + -0x60) = uVar7;
          }
          iStack_6 = 0x872;
          FUN_32b2_6cc6();
          iStack_6 = 0x87a;
          FUN_32b2_6cc6();
          iStack_6 = 0x87f;
          FUN_32b2_7191();
          if ((bool)uVar12) {
            uVar7 = *(undefined2 *)(unaff_BP + 0xc);
            *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
            *(undefined2 *)(unaff_BP + -0x88) = uVar7;
          }
          uVar7 = *(undefined2 *)(unaff_BP + -0x60);
          puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
          *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
          puVar10[1] = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x88);
          puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
          *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar10[1] = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x60);
          puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
          *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
          puVar10[1] = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x88);
          puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
          *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar10[1] = uVar7;
          piVar1 = (int *)(unaff_BP + -0x36);
          *piVar1 = *piVar1 + 1;
          uVar12 = *piVar1 == 0;
          iStack_6 = 0x8d7;
          FUN_32b2_6d14();
          iStack_6 = 0x8e0;
          FUN_32b2_6d14();
          iStack_6 = 0x8e5;
          FUN_32b2_7191();
          if (!(bool)uVar11 && !(bool)uVar12) {
            iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
            uStack_a = *(undefined2 *)(unaff_BP + -0xbc);
            uStack_c = 0x32b2;
            uStack_e = 0x8ff;
            FUN_32b2_7592();
            iStack_6 = 0x32b2;
            iStack_8 = 0x909;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x911;
            FUN_32b2_7154();
            iStack_6 = 0x32b2;
            iStack_8 = 0x916;
            FUN_32b2_6fd6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x91e;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x927;
            FUN_32b2_710c();
            iStack_6 = 0x32b2;
            iStack_8 = 0x92c;
            FUN_32b2_7182();
            iStack_6 = 0x32b2;
            iStack_8 = 0x935;
            FUN_32b2_6e99();
            iStack_6 = 0x32b2;
            iStack_8 = 0x93d;
            FUN_32b2_710c();
            iStack_6 = 0x32b2;
            iStack_8 = 0x945;
            FUN_32b2_7154();
            iStack_6 = 0x32b2;
            iStack_8 = 0x94e;
            FUN_32b2_6e99();
            iStack_6 = 0x32b2;
            iStack_8 = 0x957;
            FUN_32b2_6eb1();
            iStack_6 = unaff_BP + -0x8a;
            iStack_8 = unaff_BP + -0x62;
            uStack_a = 0x32b2;
            uStack_c = 0x969;
            FUN_32b2_6cc6();
            uStack_a = 0x32b2;
            uStack_c = 0x96e;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            iStack_14 = 0x978;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            iStack_14 = 0x980;
            FUN_32b2_6cc6();
            uStack_12 = 0x32b2;
            iStack_14 = 0x985;
            FUN_32b2_7258();
            uStack_1c = 0x98f;
            FUN_32b2_6eb1();
            uStack_1c = *(undefined2 *)(unaff_BP + -0x66);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_28 = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_2a = 0x32b2;
            uStack_2c = 0x9b0;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x9ba;
            FUN_32b2_6eb1();
            uStack_32 = 0x32b2;
            uStack_34 = 0x9c3;
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            FUN_3ab8_5089(0x32b2,0);
            uVar11 = &stack0x0000 == (undefined1 *)0x4;
            iStack_6 = 0x32b2;
            iStack_8 = 0x9df;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x9e7;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x9ec;
            FUN_32b2_7191();
            if ((bool)uVar11) {
              uVar7 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar7;
            }
            iStack_6 = 0x32b2;
            iStack_8 = 0xa02;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0xa0a;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0xa0f;
            FUN_32b2_7191();
            if ((bool)uVar11) {
              uVar7 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar7;
            }
            uVar7 = *(undefined2 *)(unaff_BP + -0x60);
            puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
            puVar10[1] = uVar7;
            uVar7 = *(undefined2 *)(unaff_BP + -0x88);
            puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar10[1] = uVar7;
            *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
          }
          return *(undefined2 *)(unaff_BP + -0x36);
        }
      }
      return 0;
    }
LAB_2bb4_45c4:
    FUN_32b2_6d14();
    iStack_6 = 0x3ff;
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
    unaff_DI = unaff_BP + -8;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
    iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
    iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
    uStack_a = 0x32b2;
    uStack_c = 0x119;
    FUN_32b2_75fe();
    iStack_6 = 0x123;
    FUN_32b2_6d14();
    iStack_6 = 299;
    FUN_32b2_704d();
    iStack_6 = 0x133;
    FUN_32b2_7095();
    iStack_6 = 0x13b;
    FUN_32b2_6eb1();
    iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
    iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
    uStack_a = *(undefined2 *)(unaff_BP + -0xbc);
    uStack_c = 0x32b2;
    uStack_e = 0x150;
    FUN_32b2_75ec();
    iStack_6 = 0x32b2;
    iStack_8 = 0x15a;
    FUN_32b2_6d14();
    iStack_6 = 0x32b2;
    iStack_8 = 0x162;
    FUN_32b2_704d();
    iStack_6 = 0x32b2;
    iStack_8 = 0x16a;
    FUN_32b2_7095();
    iStack_6 = 0x32b2;
    iStack_8 = 0x173;
    FUN_32b2_6eb1();
    iStack_6 = 0x32b2;
    iStack_8 = 0x17b;
    FUN_32b2_6cc6();
  }
  return 0;
}



/* 3ab8:5089  FUN_3ab8_5089  276 bytes, 3 callers */

void FUN_3ab8_5089(void)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined2 auStack_18 [9];
  undefined2 uStack_6;
  
  while (*(int *)(unaff_BP + -0xa3a) <= *(int *)0x150) {
    uStack_6 = 0xfc21;
    uVar12 = func_0x00000398();
    if ((*(byte *)((int)uVar12 + 0x16) & 2) != 0) {
      uStack_6 = 0xfc39;
      uVar12 = func_0x00000398();
      uVar9 = 0;
      uVar10 = (*(byte *)((int)uVar12 + 0x16) & 1) == 0;
      if ((bool)uVar10) {
        func_0x000297e6();
        uStack_6 = 0xfc5a;
        func_0x00000398();
        FUN_28b3_0c98();
        FUN_28b3_1181();
        if (!(bool)uVar9 && !(bool)uVar10) {
          uStack_6 = 0xfc7a;
          uVar12 = func_0x00000398();
          uVar6 = (undefined2)((ulong)uVar12 >> 0x10);
          uVar4 = *(undefined2 *)((int)uVar12 + 6);
          *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)((int)uVar12 + 4);
          *(undefined2 *)(unaff_BP + -0xc10) = uVar4;
          *(undefined2 *)(unaff_BP + -0xce2) = *(undefined2 *)(unaff_BP + -0xa3a);
        }
      }
    }
    *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
  }
  if (0 < *(int *)(unaff_BP + -0xce2)) {
    uStack_6 = 0xfcad;
    puVar11 = (undefined2 *)func_0x00000398();
    puVar7 = (undefined2 *)puVar11;
    puVar8 = (undefined2 *)(unaff_BP + -0xc44);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    puVar7 = auStack_18;
    puVar8 = (undefined2 *)(unaff_BP + -0xc44);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar11 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar11;
    }
    func_0x00019593(0,1);
    *(undefined2 *)0xc0a = 0;
    if (*(int *)(unaff_BP + -0xcc2) < 200) {
      uStack_6 = 0xfcf5;
      uVar12 = func_0x00000398();
      puVar1 = (uint *)((int)uVar12 + 0x16);
      *puVar1 = *puVar1 | 1;
      uVar4 = *(undefined2 *)(unaff_BP + -0xce2);
      *(int *)(unaff_BP + -0xcc2) = *(int *)(unaff_BP + -0xcc2) + 1;
      *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xcc2) * 2 + -0xee2) = uVar4;
    }
    FUN_3ab8_5197();
    return;
  }
  thunk_FUN_3ab8_519a();
  return;
}



/* 3ab8:517f  FUN_3ab8_517f  21 bytes, 2 callers */

void FUN_3ab8_517f(void)

{
  undefined2 uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)(unaff_BP + -0xce2);
  *(int *)(unaff_BP + -0xcc2) = *(int *)(unaff_BP + -0xcc2) + 1;
  *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xcc2) * 2 + -0xee2) = uVar1;
  FUN_3ab8_5197();
  return;
}



/* 3ab8:5194  thunk_FUN_3ab8_519a  3 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0003017a) overlaps instruction at (ram,0x00030176)
    */

undefined2 thunk_FUN_3ab8_519a(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  char cVar9;
  int unaff_BP;
  undefined2 *puVar10;
  int *piVar11;
  int unaff_DI;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 *puVar15;
  undefined4 uVar16;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  
  uVar12 = 0x11f2;
  FUN_10ad_1871();
  do {
    uStack_8 = 0xfd2e;
    iStack_6 = uVar12;
    FUN_21f2_3454();
    iStack_6 = 0x22b2;
    uStack_8 = 0xfd3f;
    FUN_21f2_2d26();
    uVar12 = 0x885;
    func_0x0000c3ca();
    iStack_6 = *(undefined2 *)0xa5e6;
    uStack_8 = *(undefined2 *)0xa5e4;
    uStack_a = *(undefined2 *)0xa5ea;
    uStack_c = *(undefined2 *)0xa5e8;
    iStack_e = *(int *)0xa5e6;
    iStack_10 = *(int *)0xa5e4;
    iStack_12 = 0;
    iStack_14 = unaff_BP + -0xa20;
    cVar9 = '\x01';
    uStack_18 = 1;
    pcVar5 = (code *)swi(0x3f);
    iVar6 = (*pcVar5)();
    if (iVar6 == -1) {
      if ((0 < *(int *)(unaff_BP + -0xaf2)) && (*(int *)(unaff_BP + -0xaf2) < 5)) {
        param_1 = unaff_BP + -0xcca;
        FUN_21f2_3454();
        param_1 = unaff_BP + -0xcba;
        FUN_21f2_2d26();
        param_1 = 0x22b2;
        uVar12 = 0x885;
        func_0x0000c3ca();
        param_1 = *(undefined2 *)0xa5ea;
        iStack_6 = *(undefined2 *)0xa5ea;
        uStack_8 = *(undefined2 *)0xa5e8;
        uStack_a = *(undefined2 *)0xa5e6;
        uStack_c = *(undefined2 *)0xa5e4;
        iStack_e = 0;
        iStack_10 = unaff_BP + -0xa20;
        iStack_12 = 0xfffe;
        cVar9 = '\x01';
        iStack_14 = 1;
        pcVar5 = (code *)swi(0x3f);
        iVar6 = (*pcVar5)();
        if (iVar6 != -1) {
          if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
          *(undefined2 *)0xbc0 = 1;
          *(undefined2 *)0xbc2 = 0;
          *(undefined2 *)(unaff_BP + -0xcc2) = 0;
          param_1 = 0;
          func_0x0000daa6();
          param_1 = 0x885;
          FUN_10ad_1871();
          *(undefined2 *)(unaff_BP + -0xce2) = 0;
          uVar12 = *(undefined2 *)0xa606;
          *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)0xa604;
          *(undefined2 *)(unaff_BP + -0xc10) = uVar12;
          *(undefined2 *)(unaff_BP + -0xa3a) = 1;
          while (*(int *)(unaff_BP + -0xa3a) <= *(int *)0x150) {
            param_1 = *(undefined2 *)(unaff_BP + -0xa3a);
            uVar16 = func_0x00000398();
            if ((*(byte *)((int)uVar16 + 0x16) & 2) != 0) {
              param_1 = *(undefined2 *)(unaff_BP + -0xa3a);
              uVar16 = func_0x00000398();
              uVar14 = 0;
              uVar13 = (*(byte *)((int)uVar16 + 0x16) & 1) == 0;
              if ((bool)uVar13) {
                param_1 = 0;
                func_0x000297e6();
                param_1 = *(undefined2 *)(unaff_BP + -0xa3a);
                func_0x00000398();
                param_1 = 0;
                FUN_28b3_0c98();
                param_1 = 0x22b2;
                FUN_28b3_1181();
                if (!(bool)uVar14 && !(bool)uVar13) {
                  param_1 = *(undefined2 *)(unaff_BP + -0xa3a);
                  uVar16 = func_0x00000398();
                  uVar7 = (undefined2)((ulong)uVar16 >> 0x10);
                  uVar12 = *(undefined2 *)((int)uVar16 + 6);
                  *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)((int)uVar16 + 4);
                  *(undefined2 *)(unaff_BP + -0xc10) = uVar12;
                  *(undefined2 *)(unaff_BP + -0xce2) = *(undefined2 *)(unaff_BP + -0xa3a);
                }
              }
            }
            *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
          }
          if (0 < *(int *)(unaff_BP + -0xce2)) {
            param_1 = *(undefined2 *)(unaff_BP + -0xce2);
            puVar15 = (undefined2 *)func_0x00000398();
            puVar10 = (undefined2 *)puVar15;
            puVar8 = (undefined2 *)(unaff_BP + -0xc44);
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar4 = puVar8;
              puVar8 = puVar8 + 1;
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar4 = *puVar3;
            }
            piVar11 = &iStack_14;
            puVar8 = (undefined2 *)(unaff_BP + -0xc44);
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = piVar11;
              piVar11 = piVar11 + 1;
              puVar15 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar3 = *puVar15;
            }
            uStack_18 = 0;
            param_1 = unaff_DS;
            func_0x00019593();
            *(undefined2 *)0xc0a = 0;
            if (*(int *)(unaff_BP + -0xcc2) < 200) {
              param_1 = *(undefined2 *)(unaff_BP + -0xce2);
              uVar16 = func_0x00000398();
              puVar2 = (uint *)((int)uVar16 + 0x16);
              *puVar2 = *puVar2 | 1;
              uVar12 = *(undefined2 *)(unaff_BP + -0xce2);
              *(int *)(unaff_BP + -0xcc2) = *(int *)(unaff_BP + -0xcc2) + 1;
              *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xcc2) * 2 + -0xee2) = uVar12;
            }
            uVar12 = FUN_3ab8_5197();
            return uVar12;
          }
          uVar12 = thunk_FUN_3ab8_519a();
          return uVar12;
        }
      }
      uVar14 = cVar9 == *(char *)(unaff_DI + 0xe5e);
      goto code_r0x0003017e;
    }
    if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
    while( true ) {
      if (*(int *)0x158 != 0) goto LAB_3ab8_528c;
      param_1 = unaff_BP + -0xbcc;
      uVar12 = 0x2ab8;
      iStack_6 = 0xfdb3;
      uVar7 = FUN_28b3_26a1();
      *(undefined2 *)(unaff_BP + -0xa3a) = uVar7;
      if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
      if (*(int *)(unaff_BP + -0xa3a) == -1) break;
      if (*(int *)(unaff_BP + -0xa3a) == 1) {
        uVar7 = *(undefined2 *)0xb30e;
        *(undefined2 *)(unaff_BP + -0xbe4) = *(undefined2 *)0xb30c;
        *(undefined2 *)(unaff_BP + -0xbe2) = uVar7;
        uVar7 = *(undefined2 *)0xb380;
        *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)0xb37e;
        *(undefined2 *)(unaff_BP + -0xc10) = uVar7;
LAB_3ab8_528c:
        if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
        param_1 = 0;
        func_0x0000daa6();
        param_1 = 0x885;
        func_0x0000c3ca();
        *(undefined2 *)(unaff_BP + -0xcaa) = 0;
        *(undefined2 *)(unaff_BP + -0xce2) = 0;
        uVar12 = *(undefined2 *)0xa606;
        *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)0xa604;
        *(undefined2 *)(unaff_BP + -0xc10) = uVar12;
        *(undefined2 *)(unaff_BP + -0xa3a) = 1;
        while (*(int *)(unaff_BP + -0xa3a) <= *(int *)0x150) {
          iStack_6 = 0xfe65;
          uVar16 = func_0x00000398();
          if ((*(byte *)((int)uVar16 + 0x16) & 2) != 0) {
            iStack_6 = 0xfe7d;
            uVar16 = func_0x00000398();
            uVar14 = 0;
            uVar13 = (*(byte *)((int)uVar16 + 0x16) & 1) == 0;
            if ((bool)uVar13) {
              func_0x000297e6();
              iStack_6 = 0xfe9e;
              func_0x00000398();
              FUN_28b3_0c98();
              FUN_28b3_1181();
              if (!(bool)uVar14 && !(bool)uVar13) {
                iStack_6 = 0xfebe;
                uVar16 = func_0x00000398();
                uVar7 = (undefined2)((ulong)uVar16 >> 0x10);
                uVar12 = *(undefined2 *)((int)uVar16 + 6);
                *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)((int)uVar16 + 4);
                *(undefined2 *)(unaff_BP + -0xc10) = uVar12;
                *(undefined2 *)(unaff_BP + -0xce2) = *(undefined2 *)(unaff_BP + -0xa3a);
              }
            }
          }
          *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
        }
        uVar14 = *(int *)(unaff_BP + -0xce2) == 0;
        if ((0 < *(int *)(unaff_BP + -0xce2)) &&
           (uVar14 = *(int *)(unaff_BP + -0xcaa) == *(int *)(unaff_BP + -0xcc2),
           *(int *)(unaff_BP + -0xcaa) < *(int *)(unaff_BP + -0xcc2))) {
          *(int *)(unaff_BP + -0xcaa) = *(int *)(unaff_BP + -0xcaa) + 1;
          *(undefined2 *)(unaff_BP + -0xca2) =
               *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xcaa) * 2 + -0xee2);
          iStack_6 = 0xff0d;
          puVar15 = (undefined2 *)func_0x00000398();
          puVar10 = (undefined2 *)puVar15;
          puVar8 = (undefined2 *)(unaff_BP + -0xc44);
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar4 = puVar8;
            puVar8 = puVar8 + 1;
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar4 = *puVar3;
          }
          iStack_6 = unaff_BP + -0xa20;
          uStack_8 = 0;
          uStack_a = 0xff31;
          FUN_1885_0344();
          iStack_6 = 0xff3e;
          puVar8 = (undefined2 *)func_0x000228e3();
          *(undefined2 *)(unaff_BP + -0xa38) = *puVar8;
          *(undefined2 *)(unaff_BP + -0xa36) = puVar8[1];
          *(undefined2 *)(unaff_BP + -0xa34) = puVar8[2];
          *(undefined2 *)(unaff_BP + -0xa32) = puVar8[3];
          iStack_6 = 0xff54;
          puVar15 = (undefined2 *)func_0x00000398();
          puVar10 = (undefined2 *)puVar15;
          puVar8 = (undefined2 *)(unaff_BP + -0xc44);
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar4 = puVar8;
            puVar8 = puVar8 + 1;
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar4 = *puVar3;
          }
          puVar10 = &uStack_18;
          puVar8 = (undefined2 *)(unaff_BP + -0xc44);
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            puVar15 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar3 = *puVar15;
          }
          *(undefined2 *)(unaff_BP + -0xc9a) = 1;
          uStack_1c = 0;
          uStack_1e = 0xff83;
          func_0x00019593();
          *(undefined2 *)0xc0a = 0;
          iStack_6 = 0xff95;
          uVar16 = func_0x00000398();
          puVar2 = (uint *)((int)uVar16 + 0x16);
          *puVar2 = *puVar2 | 1;
          uVar12 = *(undefined2 *)(unaff_BP + -0xc36);
          *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)(unaff_BP + -0xc38);
          *(undefined2 *)(unaff_BP + -0xc10) = uVar12;
          iStack_6 = unaff_BP + -0xa20;
          uStack_8 = 0;
          uStack_a = 0xffc1;
          FUN_1885_0344();
          iVar6 = 0x1bb4;
          iStack_6 = 0xffce;
          puVar8 = (undefined2 *)func_0x000228e3();
          *(undefined2 *)(unaff_BP + -0x482) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x480) = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x47e) = puVar8[2];
          *(undefined2 *)(unaff_BP + -0x47c) = puVar8[3];
          if (*(int *)(unaff_BP + -0xaf2) == 1) {
            func_0x00029834();
            iStack_6 = 0xfff8;
            func_0x00029c2c();
            iVar6 = 0x22b2;
            func_0x000299d1();
          }
          uVar14 = *(int *)(unaff_BP + -0xaf2) == 2;
          if ((bool)uVar14) {
            func_0x00029834();
            func_0x00029834();
            iVar6 = 0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar14) {
              *(undefined2 *)(unaff_BP + -0xc9a) = 0;
            }
            else {
              func_0x00029834();
              iStack_6 = 0x37;
              thunk_FUN_28b3_1140();
              iVar6 = 0x22b2;
              func_0x000299d1();
            }
          }
          if (*(int *)(unaff_BP + -0xaf2) == 3) {
            func_0x00029834();
            iStack_6 = 99;
            func_0x00029c74();
            iVar6 = 0x22b2;
            func_0x000299d1();
          }
          if (*(int *)(unaff_BP + -0xaf2) == 4) {
            func_0x00029834();
            iStack_6 = 0x86;
            FUN_28b3_10e4();
            iVar6 = 0x22b2;
            func_0x000299d1();
          }
          if (7 < *(byte *)0x123) {
            uVar14 = 0;
            uVar13 = *(int *)(unaff_BP + -0x47a) == 0;
            if ((bool)uVar13) {
              func_0x00029834();
              func_0x00029834();
              func_0x00029ae7();
              iVar6 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar14 || (bool)uVar13) {
                func_0x00029834();
                iVar6 = 0x22b2;
                func_0x00029983();
              }
            }
          }
          if (*(int *)(unaff_BP + -0xc9a) == 0) {
            uStack_8 = 0x113;
            iStack_6 = iVar6;
            FUN_21f2_3454();
          }
          else {
            iStack_6 = *(int *)(unaff_BP + -0xa32);
            uStack_8 = *(undefined2 *)(unaff_BP + -0xa34);
            uStack_a = *(undefined2 *)(unaff_BP + -0xa36);
            uStack_c = *(undefined2 *)(unaff_BP + -0xa38);
            iStack_e = unaff_BP + -0xb58;
            iStack_12 = 0xff;
            iStack_10 = iVar6;
            func_0x0002267f();
          }
          func_0x000297e6();
          func_0x00029d78();
          uStack_a = 0x22b2;
          uStack_c = 0x12d;
          func_0x000299d1();
          uStack_a = 0x22b2;
          uStack_c = 0x136;
          func_0x000297e6();
          uStack_a = 0x22b2;
          uStack_c = 0x13b;
          func_0x00029d78();
          iStack_12 = 0x22b2;
          iStack_14 = 0x145;
          func_0x000299d1();
          iStack_12 = unaff_BP + -0xb58;
          iStack_14 = 0;
          uStack_18 = 0x153;
          func_0x0002af64();
          *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        while( true ) {
          FUN_32b2_704d();
          FUN_32b2_7095();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
code_r0x0003017e:
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar14) {
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_7191();
            if ((bool)uVar14) {
              return 0;
            }
          }
          iStack_6 = *(undefined2 *)(unaff_BP + -0x7c);
          uStack_8 = *(undefined2 *)(unaff_BP + -0x7e);
          uStack_a = *(undefined2 *)(unaff_BP + -0x80);
          uStack_c = *(undefined2 *)(unaff_BP + -0x82);
          iStack_e = *(undefined2 *)(unaff_BP + -0x58);
          iStack_10 = *(undefined2 *)(unaff_BP + -0x5a);
          iStack_12 = *(undefined2 *)(unaff_BP + -0x5c);
          iStack_14 = *(int *)(unaff_BP + -0x5e);
          uStack_18 = 0x1d0;
          FUN_32b2_6cc6();
          uStack_18 = 0x1d5;
          FUN_32b2_7258();
          uStack_1e = 0x32b2;
          uStack_20 = 0x1df;
          FUN_32b2_6eb1();
          uStack_1e = 0x32b2;
          uStack_20 = 0x1e7;
          FUN_32b2_6cc6();
          uStack_1e = 0x32b2;
          uStack_20 = 0x1ec;
          FUN_32b2_7258();
          uStack_26 = 0x32b2;
          uStack_28 = 0x1f6;
          FUN_32b2_6eb1();
          uStack_26 = 0x32b2;
          uStack_28 = 0x1fa;
          iVar6 = FUN_3ab8_4fbd();
          if (iVar6 == 0) break;
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6e99();
          FUN_32b2_6ef9();
          iStack_6 = 0x32b2;
          uStack_8 = 0x231;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          uStack_8 = 0x236;
          FUN_32b2_7258();
          iStack_e = 0x32b2;
          iStack_10 = 0x240;
          FUN_32b2_6eb1();
          iStack_e = 0x32b2;
          iStack_10 = 0x248;
          FUN_32b2_6cc6();
          iStack_e = 0x32b2;
          iStack_10 = 0x24d;
          FUN_32b2_7258();
          uStack_18 = 599;
          FUN_32b2_6eb1();
          uStack_18 = 0x25f;
          FUN_32b2_6d14();
          uStack_1e = 0x32b2;
          uStack_20 = 0x269;
          FUN_32b2_6eb1();
          uStack_1e = 0x32b2;
          uStack_20 = 0x271;
          FUN_32b2_6cc6();
          uStack_1e = 0x32b2;
          uStack_20 = 0x276;
          FUN_32b2_7258();
          uStack_1e = 0x32b2;
          uStack_20 = 0x27e;
          FUN_32b2_6e99();
          uStack_26 = 0x32b2;
          uStack_28 = 0x288;
          FUN_32b2_6eb1();
          uStack_26 = 0x32b2;
          uStack_28 = 0x290;
          FUN_32b2_6cc6();
          uStack_26 = 0x32b2;
          uStack_28 = 0x295;
          FUN_32b2_7258();
          uStack_2e = 0x32b2;
          uStack_30 = 0x29f;
          FUN_32b2_6eb1();
          uStack_2e = 0x32b2;
          uStack_30 = 0x2a7;
          FUN_32b2_6cc6();
          uStack_2e = 0x32b2;
          uStack_30 = 0x2ac;
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_3ab8_5089(0x32b2,1);
          iStack_6 = 0x32b2;
          uStack_8 = 0x2d4;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          uStack_8 = 0x2d9;
          FUN_32b2_7258();
          iStack_e = 0x32b2;
          iStack_10 = 0x2e3;
          FUN_32b2_6eb1();
          iStack_e = 0x32b2;
          iStack_10 = 0x2eb;
          FUN_32b2_6cc6();
          iStack_e = 0x32b2;
          iStack_10 = 0x2f0;
          FUN_32b2_7258();
          uStack_18 = 0x2fa;
          FUN_32b2_6eb1();
          uStack_18 = 0x302;
          FUN_32b2_6d14();
          uStack_1e = 0x32b2;
          uStack_20 = 0x30c;
          FUN_32b2_6eb1();
          uStack_1e = 0x32b2;
          uStack_20 = 0x314;
          FUN_32b2_6d14();
          uStack_26 = 0x32b2;
          uStack_28 = 0x31e;
          FUN_32b2_6eb1();
          uStack_26 = 0x32b2;
          uStack_28 = 0x326;
          FUN_32b2_6cc6();
          uStack_26 = 0x32b2;
          uStack_28 = 0x32b;
          FUN_32b2_7258();
          uStack_2e = 0x32b2;
          uStack_30 = 0x335;
          FUN_32b2_6eb1();
          uStack_2e = 0x32b2;
          uStack_30 = 0x33d;
          FUN_32b2_6cc6();
          uStack_2e = 0x32b2;
          uStack_30 = 0x342;
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_3ab8_5089(0x32b2,1);
          uVar14 = (undefined1 *)0xffc9 < &uStack_32;
          uVar13 = &stack0x0000 == (undefined1 *)0xfffc;
          param_1 = 0x32b2;
          FUN_32b2_6cc6();
          param_1 = 0x32b2;
          FUN_32b2_701d();
          param_1 = 0x32b2;
          FUN_32b2_7258();
          param_1 = 0x32b2;
          FUN_32b2_6e99();
          param_1 = 0x32b2;
          FUN_32b2_6ef9();
          param_1 = 0x32b2;
          FUN_32b2_6cc6();
          param_1 = 0x32b2;
          FUN_32b2_701d();
          param_1 = 0x32b2;
          FUN_32b2_7258();
          param_1 = 0x32b2;
          FUN_32b2_6e99();
          param_1 = 0x32b2;
          FUN_32b2_6ef9();
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_6fc7();
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_6fc7();
          param_1 = 0x32b2;
          FUN_32b2_710c();
          param_1 = 0x32b2;
          uVar12 = 0x32b2;
          FUN_32b2_7191();
          if (!(bool)uVar14 && !(bool)uVar13) {
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_7191();
            if (!(bool)uVar13) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_7124();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_704d();
              param_1 = 0x32b2;
              FUN_32b2_7035();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_718c();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_70dc();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_718c();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6fd6();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7182();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7154();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = unaff_BP + -0x8a;
              FUN_32b2_6cc6();
              FUN_32b2_7258();
              uStack_a = 0x32b2;
              uStack_c = 0x5ea;
              FUN_32b2_6eb1();
              uStack_a = 0x32b2;
              uStack_c = 0x5f2;
              FUN_32b2_6cc6();
              uStack_a = 0x32b2;
              uStack_c = 0x5f7;
              FUN_32b2_7258();
              iStack_12 = 0x32b2;
              iStack_14 = 0x601;
              FUN_32b2_6eb1();
              iStack_12 = *(undefined2 *)(unaff_BP + -100);
              iStack_14 = *(int *)(unaff_BP + -0x66);
              uStack_18 = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x4c);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x4e);
              uStack_24 = 0x622;
              FUN_32b2_6d14();
              uStack_2a = 0x32b2;
              uStack_2c = 0x62c;
              FUN_32b2_6eb1();
              uStack_2a = 0x32b2;
              uStack_2c = 0x635;
              FUN_32b2_6d14();
              uStack_32 = 0x32b2;
              uStack_34 = 0x63f;
              FUN_32b2_6eb1();
              uStack_32 = 0;
              uStack_34 = 0x32b2;
              FUN_3ab8_5089();
              uVar12 = *(undefined2 *)(unaff_BP + -0x60);
              *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
              *(undefined2 *)(unaff_BP + -0x84) = uVar12;
              uVar12 = *(undefined2 *)(unaff_BP + -0x88);
              *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
              *(undefined2 *)(unaff_BP + -0x9c) = uVar12;
              param_1 = unaff_BP + -0x9e;
              puVar10 = &uStack_20;
              puVar8 = (undefined2 *)(unaff_BP + 0x1c);
              for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar3 = puVar10;
                puVar10 = puVar10 + 1;
                puVar15 = puVar8;
                puVar8 = puVar8 + 1;
                *puVar3 = *puVar15;
              }
              uStack_24 = 0x684;
              iVar6 = FUN_3ab8_522f();
              uVar14 = 0;
              uVar13 = iVar6 == 0;
              if (!(bool)uVar13) {
                param_1 = 0x32b2;
                FUN_32b2_6d14();
                param_1 = 0x32b2;
                FUN_32b2_6cc6();
                param_1 = 0x32b2;
                FUN_32b2_701d();
                param_1 = 0x32b2;
                FUN_32b2_6fc7();
                param_1 = 0x32b2;
                FUN_32b2_7258();
                param_1 = 0x32b2;
                FUN_32b2_7191();
                if ((bool)uVar14 || (bool)uVar13) {
                  param_1 = 0x32b2;
                  FUN_32b2_6d14();
                  param_1 = 0x32b2;
                  FUN_32b2_6cc6();
                  param_1 = 0x32b2;
                  FUN_32b2_701d();
                  param_1 = 0x32b2;
                  FUN_32b2_6fc7();
                  param_1 = 0x32b2;
                  FUN_32b2_7258();
                  param_1 = 0x32b2;
                  FUN_32b2_7191();
                  if ((bool)uVar14 || (bool)uVar13) {
                    *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                    *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                    *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                    *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                  }
                }
              }
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7154();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if (!(bool)uVar14) {
                param_1 = 0x32b2;
                FUN_32b2_6d14();
                param_1 = 0x32b2;
                FUN_32b2_6fc7();
                param_1 = 0x32b2;
                FUN_32b2_6d14();
                param_1 = 0x32b2;
                FUN_32b2_710c();
                param_1 = 0x32b2;
                FUN_32b2_710c();
                param_1 = 0x32b2;
                FUN_32b2_7191();
                if (!(bool)uVar14) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
                param_1 = *(undefined2 *)(unaff_BP + -0xb6);
                iStack_6 = 0x32b2;
                uStack_8 = 0x774;
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
                iStack_6 = 0x7d9;
                FUN_32b2_6cc6();
                iStack_6 = 0x7de;
                FUN_32b2_7258();
                uStack_c = 0x32b2;
                iStack_e = 0x7e8;
                FUN_32b2_6eb1();
                uStack_c = 0x32b2;
                iStack_e = 0x7f0;
                FUN_32b2_6cc6();
                uStack_c = 0x32b2;
                iStack_e = 0x7f5;
                FUN_32b2_7258();
                iStack_14 = 0x32b2;
                FUN_32b2_6eb1();
                iStack_14 = *(int *)(unaff_BP + -100);
                uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
                uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
                uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
                uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
                uStack_24 = 0x32b2;
                uStack_26 = 0x820;
                FUN_32b2_6d14();
                uStack_2c = 0x32b2;
                uStack_2e = 0x82a;
                FUN_32b2_6eb1();
                uStack_2c = 0x32b2;
                uStack_2e = 0x833;
                FUN_32b2_6d14();
                uStack_34 = 0x32b2;
                FUN_32b2_6eb1();
                uStack_34 = 0;
                FUN_3ab8_5089(0x32b2);
                uVar14 = (undefined1 *)0xffc9 < &uStack_34;
                uVar13 = &stack0x0000 == (undefined1 *)0xfffe;
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar13) {
                  uVar12 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar12;
                }
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar13) {
                  uVar12 = *(undefined2 *)(unaff_BP + 0xc);
                  *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                  *(undefined2 *)(unaff_BP + -0x88) = uVar12;
                }
                uVar12 = *(undefined2 *)(unaff_BP + -0x60);
                puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
                *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
                puVar8[1] = uVar12;
                uVar12 = *(undefined2 *)(unaff_BP + -0x88);
                puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
                *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar8[1] = uVar12;
                uVar12 = *(undefined2 *)(unaff_BP + -0x60);
                puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
                puVar8[1] = uVar12;
                uVar12 = *(undefined2 *)(unaff_BP + -0x88);
                puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar8[1] = uVar12;
                piVar1 = (int *)(unaff_BP + -0x36);
                *piVar1 = *piVar1 + 1;
                uVar13 = *piVar1 == 0;
                FUN_32b2_6d14();
                FUN_32b2_6d14();
                FUN_32b2_7191();
                if (!(bool)uVar14 && !(bool)uVar13) {
                  iStack_6 = *(undefined2 *)(unaff_BP + -0xbc);
                  uStack_8 = 0x32b2;
                  uStack_a = 0x8ff;
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
                  iStack_6 = 0x32b2;
                  uStack_8 = 0x969;
                  FUN_32b2_6cc6();
                  iStack_6 = 0x32b2;
                  uStack_8 = 0x96e;
                  FUN_32b2_7258();
                  iStack_e = 0x32b2;
                  iStack_10 = 0x978;
                  FUN_32b2_6eb1();
                  iStack_e = 0x32b2;
                  iStack_10 = 0x980;
                  FUN_32b2_6cc6();
                  iStack_e = 0x32b2;
                  iStack_10 = 0x985;
                  FUN_32b2_7258();
                  uStack_18 = 0x98f;
                  FUN_32b2_6eb1();
                  uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
                  uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
                  uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
                  uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
                  uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
                  uStack_26 = 0x32b2;
                  uStack_28 = 0x9b0;
                  FUN_32b2_6d14();
                  uStack_2e = 0x32b2;
                  uStack_30 = 0x9ba;
                  FUN_32b2_6eb1();
                  uStack_2e = 0x32b2;
                  uStack_30 = 0x9c3;
                  FUN_32b2_6d14();
                  FUN_32b2_6eb1();
                  FUN_3ab8_5089(0x32b2,0);
                  uVar14 = &stack0x0000 == (undefined1 *)0x0;
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if ((bool)uVar14) {
                    uVar12 = *(undefined2 *)(unaff_BP + 8);
                    *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                    *(undefined2 *)(unaff_BP + -0x60) = uVar12;
                  }
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if ((bool)uVar14) {
                    uVar12 = *(undefined2 *)(unaff_BP + 0xc);
                    *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                    *(undefined2 *)(unaff_BP + -0x88) = uVar12;
                  }
                  uVar12 = *(undefined2 *)(unaff_BP + -0x60);
                  puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                  *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
                  puVar8[1] = uVar12;
                  uVar12 = *(undefined2 *)(unaff_BP + -0x88);
                  puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                  *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
                  puVar8[1] = uVar12;
                  *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
                }
                return *(undefined2 *)(unaff_BP + -0x36);
              }
            }
            return 0;
          }
LAB_2bb4_45c4:
          param_1 = uVar12;
          FUN_32b2_6d14();
          param_1 = unaff_BP + -0xbc;
          FUN_32b2_7154();
          param_1 = 0x32b2;
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
          param_1 = *(undefined2 *)(unaff_BP + -0xb6);
          iStack_6 = 0x32b2;
          uStack_8 = 0x119;
          FUN_32b2_75fe();
          FUN_32b2_6d14();
          FUN_32b2_704d();
          FUN_32b2_7095();
          FUN_32b2_6eb1();
          iStack_6 = *(undefined2 *)(unaff_BP + -0xbc);
          uStack_8 = 0x32b2;
          uStack_a = 0x150;
          FUN_32b2_75ec();
          uVar14 = &stack0x0000 == (undefined1 *)0x0;
          FUN_32b2_6d14();
        }
        return 0;
      }
    }
    param_1 = 0;
    uVar12 = 0x7a6;
    func_0x00008095();
  } while( true );
}



/* 3ab8:5197  FUN_3ab8_5197  3 bytes, 1 callers */

void FUN_3ab8_5197(void)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined2 auStack_18 [9];
  undefined2 uStack_6;
  
  *(undefined2 *)(unaff_BP + -0xce2) = 0;
  uVar4 = *(undefined2 *)0xa606;
  *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)0xa604;
  *(undefined2 *)(unaff_BP + -0xc10) = uVar4;
  *(undefined2 *)(unaff_BP + -0xa3a) = 1;
  while (*(int *)(unaff_BP + -0xa3a) <= *(int *)0x150) {
    uStack_6 = 0xfc21;
    uVar12 = func_0x00000398();
    if ((*(byte *)((int)uVar12 + 0x16) & 2) != 0) {
      uStack_6 = 0xfc39;
      uVar12 = func_0x00000398();
      uVar9 = 0;
      uVar10 = (*(byte *)((int)uVar12 + 0x16) & 1) == 0;
      if ((bool)uVar10) {
        func_0x000297e6();
        uStack_6 = 0xfc5a;
        func_0x00000398();
        FUN_28b3_0c98();
        FUN_28b3_1181();
        if (!(bool)uVar9 && !(bool)uVar10) {
          uStack_6 = 0xfc7a;
          uVar12 = func_0x00000398();
          uVar6 = (undefined2)((ulong)uVar12 >> 0x10);
          uVar4 = *(undefined2 *)((int)uVar12 + 6);
          *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)((int)uVar12 + 4);
          *(undefined2 *)(unaff_BP + -0xc10) = uVar4;
          *(undefined2 *)(unaff_BP + -0xce2) = *(undefined2 *)(unaff_BP + -0xa3a);
        }
      }
    }
    *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
  }
  if (0 < *(int *)(unaff_BP + -0xce2)) {
    uStack_6 = 0xfcad;
    puVar11 = (undefined2 *)func_0x00000398();
    puVar7 = (undefined2 *)puVar11;
    puVar8 = (undefined2 *)(unaff_BP + -0xc44);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    puVar7 = auStack_18;
    puVar8 = (undefined2 *)(unaff_BP + -0xc44);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar11 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar11;
    }
    func_0x00019593(0,1);
    *(undefined2 *)0xc0a = 0;
    if (*(int *)(unaff_BP + -0xcc2) < 200) {
      uStack_6 = 0xfcf5;
      uVar12 = func_0x00000398();
      puVar1 = (uint *)((int)uVar12 + 0x16);
      *puVar1 = *puVar1 | 1;
      uVar4 = *(undefined2 *)(unaff_BP + -0xce2);
      *(int *)(unaff_BP + -0xcc2) = *(int *)(unaff_BP + -0xcc2) + 1;
      *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xcc2) * 2 + -0xee2) = uVar4;
    }
    FUN_3ab8_5197();
    return;
  }
  thunk_FUN_3ab8_519a();
  return;
}



/* 3ab8:519a  FUN_3ab8_519a  96 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0003017a) overlaps instruction at (ram,0x00030176)
    */

undefined2 FUN_3ab8_519a(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  char cVar9;
  int unaff_BP;
  undefined2 *puVar10;
  int *piVar11;
  int unaff_DI;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 *puVar15;
  undefined4 uVar16;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  
  uVar12 = 0x11f2;
  FUN_10ad_1871();
  do {
    uStack_8 = 0xfd2e;
    iStack_6 = uVar12;
    FUN_21f2_3454();
    iStack_6 = 0x22b2;
    uStack_8 = 0xfd3f;
    FUN_21f2_2d26();
    uVar12 = 0x885;
    func_0x0000c3ca();
    iStack_6 = *(undefined2 *)0xa5e6;
    uStack_8 = *(undefined2 *)0xa5e4;
    uStack_a = *(undefined2 *)0xa5ea;
    uStack_c = *(undefined2 *)0xa5e8;
    iStack_e = *(int *)0xa5e6;
    iStack_10 = *(int *)0xa5e4;
    iStack_12 = 0;
    iStack_14 = unaff_BP + -0xa20;
    cVar9 = '\x01';
    uStack_18 = 1;
    pcVar5 = (code *)swi(0x3f);
    iVar6 = (*pcVar5)();
    if (iVar6 == -1) {
      if ((0 < *(int *)(unaff_BP + -0xaf2)) && (*(int *)(unaff_BP + -0xaf2) < 5)) {
        param_1 = unaff_BP + -0xcca;
        FUN_21f2_3454();
        param_1 = unaff_BP + -0xcba;
        FUN_21f2_2d26();
        param_1 = 0x22b2;
        uVar12 = 0x885;
        func_0x0000c3ca();
        param_1 = *(undefined2 *)0xa5ea;
        iStack_6 = *(undefined2 *)0xa5ea;
        uStack_8 = *(undefined2 *)0xa5e8;
        uStack_a = *(undefined2 *)0xa5e6;
        uStack_c = *(undefined2 *)0xa5e4;
        iStack_e = 0;
        iStack_10 = unaff_BP + -0xa20;
        iStack_12 = 0xfffe;
        cVar9 = '\x01';
        iStack_14 = 1;
        pcVar5 = (code *)swi(0x3f);
        iVar6 = (*pcVar5)();
        if (iVar6 != -1) {
          if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
          *(undefined2 *)0xbc0 = 1;
          *(undefined2 *)0xbc2 = 0;
          *(undefined2 *)(unaff_BP + -0xcc2) = 0;
          param_1 = 0;
          func_0x0000daa6();
          param_1 = 0x885;
          FUN_10ad_1871();
          *(undefined2 *)(unaff_BP + -0xce2) = 0;
          uVar12 = *(undefined2 *)0xa606;
          *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)0xa604;
          *(undefined2 *)(unaff_BP + -0xc10) = uVar12;
          *(undefined2 *)(unaff_BP + -0xa3a) = 1;
          while (*(int *)(unaff_BP + -0xa3a) <= *(int *)0x150) {
            param_1 = *(undefined2 *)(unaff_BP + -0xa3a);
            uVar16 = func_0x00000398();
            if ((*(byte *)((int)uVar16 + 0x16) & 2) != 0) {
              param_1 = *(undefined2 *)(unaff_BP + -0xa3a);
              uVar16 = func_0x00000398();
              uVar14 = 0;
              uVar13 = (*(byte *)((int)uVar16 + 0x16) & 1) == 0;
              if ((bool)uVar13) {
                param_1 = 0;
                func_0x000297e6();
                param_1 = *(undefined2 *)(unaff_BP + -0xa3a);
                func_0x00000398();
                param_1 = 0;
                FUN_28b3_0c98();
                param_1 = 0x22b2;
                FUN_28b3_1181();
                if (!(bool)uVar14 && !(bool)uVar13) {
                  param_1 = *(undefined2 *)(unaff_BP + -0xa3a);
                  uVar16 = func_0x00000398();
                  uVar7 = (undefined2)((ulong)uVar16 >> 0x10);
                  uVar12 = *(undefined2 *)((int)uVar16 + 6);
                  *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)((int)uVar16 + 4);
                  *(undefined2 *)(unaff_BP + -0xc10) = uVar12;
                  *(undefined2 *)(unaff_BP + -0xce2) = *(undefined2 *)(unaff_BP + -0xa3a);
                }
              }
            }
            *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
          }
          if (0 < *(int *)(unaff_BP + -0xce2)) {
            param_1 = *(undefined2 *)(unaff_BP + -0xce2);
            puVar15 = (undefined2 *)func_0x00000398();
            puVar10 = (undefined2 *)puVar15;
            puVar8 = (undefined2 *)(unaff_BP + -0xc44);
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar4 = puVar8;
              puVar8 = puVar8 + 1;
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar4 = *puVar3;
            }
            piVar11 = &iStack_14;
            puVar8 = (undefined2 *)(unaff_BP + -0xc44);
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = piVar11;
              piVar11 = piVar11 + 1;
              puVar15 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar3 = *puVar15;
            }
            uStack_18 = 0;
            param_1 = unaff_DS;
            func_0x00019593();
            *(undefined2 *)0xc0a = 0;
            if (*(int *)(unaff_BP + -0xcc2) < 200) {
              param_1 = *(undefined2 *)(unaff_BP + -0xce2);
              uVar16 = func_0x00000398();
              puVar2 = (uint *)((int)uVar16 + 0x16);
              *puVar2 = *puVar2 | 1;
              uVar12 = *(undefined2 *)(unaff_BP + -0xce2);
              *(int *)(unaff_BP + -0xcc2) = *(int *)(unaff_BP + -0xcc2) + 1;
              *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xcc2) * 2 + -0xee2) = uVar12;
            }
            uVar12 = FUN_3ab8_5197();
            return uVar12;
          }
          uVar12 = thunk_FUN_3ab8_519a();
          return uVar12;
        }
      }
      uVar14 = cVar9 == *(char *)(unaff_DI + 0xe5e);
      goto code_r0x0003017e;
    }
    if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
    while( true ) {
      if (*(int *)0x158 != 0) goto LAB_3ab8_528c;
      param_1 = unaff_BP + -0xbcc;
      uVar12 = 0x2ab8;
      iStack_6 = 0xfdb3;
      uVar7 = FUN_28b3_26a1();
      *(undefined2 *)(unaff_BP + -0xa3a) = uVar7;
      if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
      if (*(int *)(unaff_BP + -0xa3a) == -1) break;
      if (*(int *)(unaff_BP + -0xa3a) == 1) {
        uVar7 = *(undefined2 *)0xb30e;
        *(undefined2 *)(unaff_BP + -0xbe4) = *(undefined2 *)0xb30c;
        *(undefined2 *)(unaff_BP + -0xbe2) = uVar7;
        uVar7 = *(undefined2 *)0xb380;
        *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)0xb37e;
        *(undefined2 *)(unaff_BP + -0xc10) = uVar7;
LAB_3ab8_528c:
        if (*(int *)0x158 != 0) goto LAB_2bb4_45c4;
        param_1 = 0;
        func_0x0000daa6();
        param_1 = 0x885;
        func_0x0000c3ca();
        *(undefined2 *)(unaff_BP + -0xcaa) = 0;
        *(undefined2 *)(unaff_BP + -0xce2) = 0;
        uVar12 = *(undefined2 *)0xa606;
        *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)0xa604;
        *(undefined2 *)(unaff_BP + -0xc10) = uVar12;
        *(undefined2 *)(unaff_BP + -0xa3a) = 1;
        while (*(int *)(unaff_BP + -0xa3a) <= *(int *)0x150) {
          iStack_6 = 0xfe65;
          uVar16 = func_0x00000398();
          if ((*(byte *)((int)uVar16 + 0x16) & 2) != 0) {
            iStack_6 = 0xfe7d;
            uVar16 = func_0x00000398();
            uVar14 = 0;
            uVar13 = (*(byte *)((int)uVar16 + 0x16) & 1) == 0;
            if ((bool)uVar13) {
              func_0x000297e6();
              iStack_6 = 0xfe9e;
              func_0x00000398();
              FUN_28b3_0c98();
              FUN_28b3_1181();
              if (!(bool)uVar14 && !(bool)uVar13) {
                iStack_6 = 0xfebe;
                uVar16 = func_0x00000398();
                uVar7 = (undefined2)((ulong)uVar16 >> 0x10);
                uVar12 = *(undefined2 *)((int)uVar16 + 6);
                *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)((int)uVar16 + 4);
                *(undefined2 *)(unaff_BP + -0xc10) = uVar12;
                *(undefined2 *)(unaff_BP + -0xce2) = *(undefined2 *)(unaff_BP + -0xa3a);
              }
            }
          }
          *(int *)(unaff_BP + -0xa3a) = *(int *)(unaff_BP + -0xa3a) + 1;
        }
        uVar14 = *(int *)(unaff_BP + -0xce2) == 0;
        if ((0 < *(int *)(unaff_BP + -0xce2)) &&
           (uVar14 = *(int *)(unaff_BP + -0xcaa) == *(int *)(unaff_BP + -0xcc2),
           *(int *)(unaff_BP + -0xcaa) < *(int *)(unaff_BP + -0xcc2))) {
          *(int *)(unaff_BP + -0xcaa) = *(int *)(unaff_BP + -0xcaa) + 1;
          *(undefined2 *)(unaff_BP + -0xca2) =
               *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xcaa) * 2 + -0xee2);
          iStack_6 = 0xff0d;
          puVar15 = (undefined2 *)func_0x00000398();
          puVar10 = (undefined2 *)puVar15;
          puVar8 = (undefined2 *)(unaff_BP + -0xc44);
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar4 = puVar8;
            puVar8 = puVar8 + 1;
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar4 = *puVar3;
          }
          iStack_6 = unaff_BP + -0xa20;
          uStack_8 = 0;
          uStack_a = 0xff31;
          FUN_1885_0344();
          iStack_6 = 0xff3e;
          puVar8 = (undefined2 *)func_0x000228e3();
          *(undefined2 *)(unaff_BP + -0xa38) = *puVar8;
          *(undefined2 *)(unaff_BP + -0xa36) = puVar8[1];
          *(undefined2 *)(unaff_BP + -0xa34) = puVar8[2];
          *(undefined2 *)(unaff_BP + -0xa32) = puVar8[3];
          iStack_6 = 0xff54;
          puVar15 = (undefined2 *)func_0x00000398();
          puVar10 = (undefined2 *)puVar15;
          puVar8 = (undefined2 *)(unaff_BP + -0xc44);
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar4 = puVar8;
            puVar8 = puVar8 + 1;
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar4 = *puVar3;
          }
          puVar10 = &uStack_18;
          puVar8 = (undefined2 *)(unaff_BP + -0xc44);
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            puVar15 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar3 = *puVar15;
          }
          *(undefined2 *)(unaff_BP + -0xc9a) = 1;
          uStack_1c = 0;
          uStack_1e = 0xff83;
          func_0x00019593();
          *(undefined2 *)0xc0a = 0;
          iStack_6 = 0xff95;
          uVar16 = func_0x00000398();
          puVar2 = (uint *)((int)uVar16 + 0x16);
          *puVar2 = *puVar2 | 1;
          uVar12 = *(undefined2 *)(unaff_BP + -0xc36);
          *(undefined2 *)(unaff_BP + -0xc12) = *(undefined2 *)(unaff_BP + -0xc38);
          *(undefined2 *)(unaff_BP + -0xc10) = uVar12;
          iStack_6 = unaff_BP + -0xa20;
          uStack_8 = 0;
          uStack_a = 0xffc1;
          FUN_1885_0344();
          iVar6 = 0x1bb4;
          iStack_6 = 0xffce;
          puVar8 = (undefined2 *)func_0x000228e3();
          *(undefined2 *)(unaff_BP + -0x482) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x480) = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x47e) = puVar8[2];
          *(undefined2 *)(unaff_BP + -0x47c) = puVar8[3];
          if (*(int *)(unaff_BP + -0xaf2) == 1) {
            func_0x00029834();
            iStack_6 = 0xfff8;
            func_0x00029c2c();
            iVar6 = 0x22b2;
            func_0x000299d1();
          }
          uVar14 = *(int *)(unaff_BP + -0xaf2) == 2;
          if ((bool)uVar14) {
            func_0x00029834();
            func_0x00029834();
            iVar6 = 0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar14) {
              *(undefined2 *)(unaff_BP + -0xc9a) = 0;
            }
            else {
              func_0x00029834();
              iStack_6 = 0x37;
              thunk_FUN_28b3_1140();
              iVar6 = 0x22b2;
              func_0x000299d1();
            }
          }
          if (*(int *)(unaff_BP + -0xaf2) == 3) {
            func_0x00029834();
            iStack_6 = 99;
            func_0x00029c74();
            iVar6 = 0x22b2;
            func_0x000299d1();
          }
          if (*(int *)(unaff_BP + -0xaf2) == 4) {
            func_0x00029834();
            iStack_6 = 0x86;
            FUN_28b3_10e4();
            iVar6 = 0x22b2;
            func_0x000299d1();
          }
          if (7 < *(byte *)0x123) {
            uVar14 = 0;
            uVar13 = *(int *)(unaff_BP + -0x47a) == 0;
            if ((bool)uVar13) {
              func_0x00029834();
              func_0x00029834();
              func_0x00029ae7();
              iVar6 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar14 || (bool)uVar13) {
                func_0x00029834();
                iVar6 = 0x22b2;
                func_0x00029983();
              }
            }
          }
          if (*(int *)(unaff_BP + -0xc9a) == 0) {
            uStack_8 = 0x113;
            iStack_6 = iVar6;
            FUN_21f2_3454();
          }
          else {
            iStack_6 = *(int *)(unaff_BP + -0xa32);
            uStack_8 = *(undefined2 *)(unaff_BP + -0xa34);
            uStack_a = *(undefined2 *)(unaff_BP + -0xa36);
            uStack_c = *(undefined2 *)(unaff_BP + -0xa38);
            iStack_e = unaff_BP + -0xb58;
            iStack_12 = 0xff;
            iStack_10 = iVar6;
            func_0x0002267f();
          }
          func_0x000297e6();
          func_0x00029d78();
          uStack_a = 0x22b2;
          uStack_c = 0x12d;
          func_0x000299d1();
          uStack_a = 0x22b2;
          uStack_c = 0x136;
          func_0x000297e6();
          uStack_a = 0x22b2;
          uStack_c = 0x13b;
          func_0x00029d78();
          iStack_12 = 0x22b2;
          iStack_14 = 0x145;
          func_0x000299d1();
          iStack_12 = unaff_BP + -0xb58;
          iStack_14 = 0;
          uStack_18 = 0x153;
          func_0x0002af64();
          *(int *)(unaff_BP + -0x47a) = *(int *)(unaff_BP + -0x47a) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        while( true ) {
          FUN_32b2_704d();
          FUN_32b2_7095();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
code_r0x0003017e:
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar14) {
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_7191();
            if ((bool)uVar14) {
              return 0;
            }
          }
          iStack_6 = *(undefined2 *)(unaff_BP + -0x7c);
          uStack_8 = *(undefined2 *)(unaff_BP + -0x7e);
          uStack_a = *(undefined2 *)(unaff_BP + -0x80);
          uStack_c = *(undefined2 *)(unaff_BP + -0x82);
          iStack_e = *(undefined2 *)(unaff_BP + -0x58);
          iStack_10 = *(undefined2 *)(unaff_BP + -0x5a);
          iStack_12 = *(undefined2 *)(unaff_BP + -0x5c);
          iStack_14 = *(int *)(unaff_BP + -0x5e);
          uStack_18 = 0x1d0;
          FUN_32b2_6cc6();
          uStack_18 = 0x1d5;
          FUN_32b2_7258();
          uStack_1e = 0x32b2;
          uStack_20 = 0x1df;
          FUN_32b2_6eb1();
          uStack_1e = 0x32b2;
          uStack_20 = 0x1e7;
          FUN_32b2_6cc6();
          uStack_1e = 0x32b2;
          uStack_20 = 0x1ec;
          FUN_32b2_7258();
          uStack_26 = 0x32b2;
          uStack_28 = 0x1f6;
          FUN_32b2_6eb1();
          uStack_26 = 0x32b2;
          uStack_28 = 0x1fa;
          iVar6 = FUN_3ab8_4fbd();
          if (iVar6 == 0) break;
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6e99();
          FUN_32b2_6ef9();
          iStack_6 = 0x32b2;
          uStack_8 = 0x231;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          uStack_8 = 0x236;
          FUN_32b2_7258();
          iStack_e = 0x32b2;
          iStack_10 = 0x240;
          FUN_32b2_6eb1();
          iStack_e = 0x32b2;
          iStack_10 = 0x248;
          FUN_32b2_6cc6();
          iStack_e = 0x32b2;
          iStack_10 = 0x24d;
          FUN_32b2_7258();
          uStack_18 = 599;
          FUN_32b2_6eb1();
          uStack_18 = 0x25f;
          FUN_32b2_6d14();
          uStack_1e = 0x32b2;
          uStack_20 = 0x269;
          FUN_32b2_6eb1();
          uStack_1e = 0x32b2;
          uStack_20 = 0x271;
          FUN_32b2_6cc6();
          uStack_1e = 0x32b2;
          uStack_20 = 0x276;
          FUN_32b2_7258();
          uStack_1e = 0x32b2;
          uStack_20 = 0x27e;
          FUN_32b2_6e99();
          uStack_26 = 0x32b2;
          uStack_28 = 0x288;
          FUN_32b2_6eb1();
          uStack_26 = 0x32b2;
          uStack_28 = 0x290;
          FUN_32b2_6cc6();
          uStack_26 = 0x32b2;
          uStack_28 = 0x295;
          FUN_32b2_7258();
          uStack_2e = 0x32b2;
          uStack_30 = 0x29f;
          FUN_32b2_6eb1();
          uStack_2e = 0x32b2;
          uStack_30 = 0x2a7;
          FUN_32b2_6cc6();
          uStack_2e = 0x32b2;
          uStack_30 = 0x2ac;
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_3ab8_5089(0x32b2,1);
          iStack_6 = 0x32b2;
          uStack_8 = 0x2d4;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          uStack_8 = 0x2d9;
          FUN_32b2_7258();
          iStack_e = 0x32b2;
          iStack_10 = 0x2e3;
          FUN_32b2_6eb1();
          iStack_e = 0x32b2;
          iStack_10 = 0x2eb;
          FUN_32b2_6cc6();
          iStack_e = 0x32b2;
          iStack_10 = 0x2f0;
          FUN_32b2_7258();
          uStack_18 = 0x2fa;
          FUN_32b2_6eb1();
          uStack_18 = 0x302;
          FUN_32b2_6d14();
          uStack_1e = 0x32b2;
          uStack_20 = 0x30c;
          FUN_32b2_6eb1();
          uStack_1e = 0x32b2;
          uStack_20 = 0x314;
          FUN_32b2_6d14();
          uStack_26 = 0x32b2;
          uStack_28 = 0x31e;
          FUN_32b2_6eb1();
          uStack_26 = 0x32b2;
          uStack_28 = 0x326;
          FUN_32b2_6cc6();
          uStack_26 = 0x32b2;
          uStack_28 = 0x32b;
          FUN_32b2_7258();
          uStack_2e = 0x32b2;
          uStack_30 = 0x335;
          FUN_32b2_6eb1();
          uStack_2e = 0x32b2;
          uStack_30 = 0x33d;
          FUN_32b2_6cc6();
          uStack_2e = 0x32b2;
          uStack_30 = 0x342;
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_3ab8_5089(0x32b2,1);
          uVar14 = (undefined1 *)0xffc9 < &uStack_32;
          uVar13 = &stack0x0000 == (undefined1 *)0xfffc;
          param_1 = 0x32b2;
          FUN_32b2_6cc6();
          param_1 = 0x32b2;
          FUN_32b2_701d();
          param_1 = 0x32b2;
          FUN_32b2_7258();
          param_1 = 0x32b2;
          FUN_32b2_6e99();
          param_1 = 0x32b2;
          FUN_32b2_6ef9();
          param_1 = 0x32b2;
          FUN_32b2_6cc6();
          param_1 = 0x32b2;
          FUN_32b2_701d();
          param_1 = 0x32b2;
          FUN_32b2_7258();
          param_1 = 0x32b2;
          FUN_32b2_6e99();
          param_1 = 0x32b2;
          FUN_32b2_6ef9();
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_6fc7();
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_6fc7();
          param_1 = 0x32b2;
          FUN_32b2_710c();
          param_1 = 0x32b2;
          uVar12 = 0x32b2;
          FUN_32b2_7191();
          if (!(bool)uVar14 && !(bool)uVar13) {
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_7191();
            if (!(bool)uVar13) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_7124();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_704d();
              param_1 = 0x32b2;
              FUN_32b2_7035();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_718c();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_70dc();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_718c();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6fd6();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7182();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7154();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = unaff_BP + -0x8a;
              FUN_32b2_6cc6();
              FUN_32b2_7258();
              uStack_a = 0x32b2;
              uStack_c = 0x5ea;
              FUN_32b2_6eb1();
              uStack_a = 0x32b2;
              uStack_c = 0x5f2;
              FUN_32b2_6cc6();
              uStack_a = 0x32b2;
              uStack_c = 0x5f7;
              FUN_32b2_7258();
              iStack_12 = 0x32b2;
              iStack_14 = 0x601;
              FUN_32b2_6eb1();
              iStack_12 = *(undefined2 *)(unaff_BP + -100);
              iStack_14 = *(int *)(unaff_BP + -0x66);
              uStack_18 = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x4c);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x4e);
              uStack_24 = 0x622;
              FUN_32b2_6d14();
              uStack_2a = 0x32b2;
              uStack_2c = 0x62c;
              FUN_32b2_6eb1();
              uStack_2a = 0x32b2;
              uStack_2c = 0x635;
              FUN_32b2_6d14();
              uStack_32 = 0x32b2;
              uStack_34 = 0x63f;
              FUN_32b2_6eb1();
              uStack_32 = 0;
              uStack_34 = 0x32b2;
              FUN_3ab8_5089();
              uVar12 = *(undefined2 *)(unaff_BP + -0x60);
              *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
              *(undefined2 *)(unaff_BP + -0x84) = uVar12;
              uVar12 = *(undefined2 *)(unaff_BP + -0x88);
              *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
              *(undefined2 *)(unaff_BP + -0x9c) = uVar12;
              param_1 = unaff_BP + -0x9e;
              puVar10 = &uStack_20;
              puVar8 = (undefined2 *)(unaff_BP + 0x1c);
              for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar3 = puVar10;
                puVar10 = puVar10 + 1;
                puVar15 = puVar8;
                puVar8 = puVar8 + 1;
                *puVar3 = *puVar15;
              }
              uStack_24 = 0x684;
              iVar6 = FUN_3ab8_522f();
              uVar14 = 0;
              uVar13 = iVar6 == 0;
              if (!(bool)uVar13) {
                param_1 = 0x32b2;
                FUN_32b2_6d14();
                param_1 = 0x32b2;
                FUN_32b2_6cc6();
                param_1 = 0x32b2;
                FUN_32b2_701d();
                param_1 = 0x32b2;
                FUN_32b2_6fc7();
                param_1 = 0x32b2;
                FUN_32b2_7258();
                param_1 = 0x32b2;
                FUN_32b2_7191();
                if ((bool)uVar14 || (bool)uVar13) {
                  param_1 = 0x32b2;
                  FUN_32b2_6d14();
                  param_1 = 0x32b2;
                  FUN_32b2_6cc6();
                  param_1 = 0x32b2;
                  FUN_32b2_701d();
                  param_1 = 0x32b2;
                  FUN_32b2_6fc7();
                  param_1 = 0x32b2;
                  FUN_32b2_7258();
                  param_1 = 0x32b2;
                  FUN_32b2_7191();
                  if ((bool)uVar14 || (bool)uVar13) {
                    *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                    *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                    *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                    *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                  }
                }
              }
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7154();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if (!(bool)uVar14) {
                param_1 = 0x32b2;
                FUN_32b2_6d14();
                param_1 = 0x32b2;
                FUN_32b2_6fc7();
                param_1 = 0x32b2;
                FUN_32b2_6d14();
                param_1 = 0x32b2;
                FUN_32b2_710c();
                param_1 = 0x32b2;
                FUN_32b2_710c();
                param_1 = 0x32b2;
                FUN_32b2_7191();
                if (!(bool)uVar14) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
                param_1 = *(undefined2 *)(unaff_BP + -0xb6);
                iStack_6 = 0x32b2;
                uStack_8 = 0x774;
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
                iStack_6 = 0x7d9;
                FUN_32b2_6cc6();
                iStack_6 = 0x7de;
                FUN_32b2_7258();
                uStack_c = 0x32b2;
                iStack_e = 0x7e8;
                FUN_32b2_6eb1();
                uStack_c = 0x32b2;
                iStack_e = 0x7f0;
                FUN_32b2_6cc6();
                uStack_c = 0x32b2;
                iStack_e = 0x7f5;
                FUN_32b2_7258();
                iStack_14 = 0x32b2;
                FUN_32b2_6eb1();
                iStack_14 = *(int *)(unaff_BP + -100);
                uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
                uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
                uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
                uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
                uStack_24 = 0x32b2;
                uStack_26 = 0x820;
                FUN_32b2_6d14();
                uStack_2c = 0x32b2;
                uStack_2e = 0x82a;
                FUN_32b2_6eb1();
                uStack_2c = 0x32b2;
                uStack_2e = 0x833;
                FUN_32b2_6d14();
                uStack_34 = 0x32b2;
                FUN_32b2_6eb1();
                uStack_34 = 0;
                FUN_3ab8_5089(0x32b2);
                uVar14 = (undefined1 *)0xffc9 < &uStack_34;
                uVar13 = &stack0x0000 == (undefined1 *)0xfffe;
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar13) {
                  uVar12 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar12;
                }
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar13) {
                  uVar12 = *(undefined2 *)(unaff_BP + 0xc);
                  *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                  *(undefined2 *)(unaff_BP + -0x88) = uVar12;
                }
                uVar12 = *(undefined2 *)(unaff_BP + -0x60);
                puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
                *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
                puVar8[1] = uVar12;
                uVar12 = *(undefined2 *)(unaff_BP + -0x88);
                puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
                *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar8[1] = uVar12;
                uVar12 = *(undefined2 *)(unaff_BP + -0x60);
                puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
                puVar8[1] = uVar12;
                uVar12 = *(undefined2 *)(unaff_BP + -0x88);
                puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar8[1] = uVar12;
                piVar1 = (int *)(unaff_BP + -0x36);
                *piVar1 = *piVar1 + 1;
                uVar13 = *piVar1 == 0;
                FUN_32b2_6d14();
                FUN_32b2_6d14();
                FUN_32b2_7191();
                if (!(bool)uVar14 && !(bool)uVar13) {
                  iStack_6 = *(undefined2 *)(unaff_BP + -0xbc);
                  uStack_8 = 0x32b2;
                  uStack_a = 0x8ff;
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
                  iStack_6 = 0x32b2;
                  uStack_8 = 0x969;
                  FUN_32b2_6cc6();
                  iStack_6 = 0x32b2;
                  uStack_8 = 0x96e;
                  FUN_32b2_7258();
                  iStack_e = 0x32b2;
                  iStack_10 = 0x978;
                  FUN_32b2_6eb1();
                  iStack_e = 0x32b2;
                  iStack_10 = 0x980;
                  FUN_32b2_6cc6();
                  iStack_e = 0x32b2;
                  iStack_10 = 0x985;
                  FUN_32b2_7258();
                  uStack_18 = 0x98f;
                  FUN_32b2_6eb1();
                  uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
                  uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
                  uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
                  uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
                  uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
                  uStack_26 = 0x32b2;
                  uStack_28 = 0x9b0;
                  FUN_32b2_6d14();
                  uStack_2e = 0x32b2;
                  uStack_30 = 0x9ba;
                  FUN_32b2_6eb1();
                  uStack_2e = 0x32b2;
                  uStack_30 = 0x9c3;
                  FUN_32b2_6d14();
                  FUN_32b2_6eb1();
                  FUN_3ab8_5089(0x32b2,0);
                  uVar14 = &stack0x0000 == (undefined1 *)0x0;
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if ((bool)uVar14) {
                    uVar12 = *(undefined2 *)(unaff_BP + 8);
                    *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                    *(undefined2 *)(unaff_BP + -0x60) = uVar12;
                  }
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if ((bool)uVar14) {
                    uVar12 = *(undefined2 *)(unaff_BP + 0xc);
                    *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                    *(undefined2 *)(unaff_BP + -0x88) = uVar12;
                  }
                  uVar12 = *(undefined2 *)(unaff_BP + -0x60);
                  puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                  *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
                  puVar8[1] = uVar12;
                  uVar12 = *(undefined2 *)(unaff_BP + -0x88);
                  puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                  *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
                  puVar8[1] = uVar12;
                  *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
                }
                return *(undefined2 *)(unaff_BP + -0x36);
              }
            }
            return 0;
          }
LAB_2bb4_45c4:
          param_1 = uVar12;
          FUN_32b2_6d14();
          param_1 = unaff_BP + -0xbc;
          FUN_32b2_7154();
          param_1 = 0x32b2;
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
          param_1 = *(undefined2 *)(unaff_BP + -0xb6);
          iStack_6 = 0x32b2;
          uStack_8 = 0x119;
          FUN_32b2_75fe();
          FUN_32b2_6d14();
          FUN_32b2_704d();
          FUN_32b2_7095();
          FUN_32b2_6eb1();
          iStack_6 = *(undefined2 *)(unaff_BP + -0xbc);
          uStack_8 = 0x32b2;
          uStack_a = 0x150;
          FUN_32b2_75ec();
          uVar14 = &stack0x0000 == (undefined1 *)0x0;
          FUN_32b2_6d14();
        }
        return 0;
      }
    }
    param_1 = 0;
    uVar12 = 0x7a6;
    func_0x00008095();
  } while( true );
}



/* 3ab8:522f  FUN_3ab8_522f  9 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_522f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 3ab8:5876  FUN_3ab8_5876  28 bytes, 1 callers */

void __cdecl16far FUN_3ab8_5876(undefined2 param_1)

{
  FUN_21f2_0ebc();
  func_0x00012276(0x22b2,0x1de,param_1);
  return;
}



/* 3ab8:5892  FUN_3ab8_5892  50 bytes, 2 callers */

void __cdecl16far FUN_3ab8_5892(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_21f2_0ebc();
  FUN_1000_0599(0x22b2,param_1,param_2);
  FUN_3ab8_5876(0x6a3e);
  func_0x00012276(0xdef,0x1ea,param_3);
  return;
}



/* 3ab8:58c4  FUN_3ab8_58c4  98 bytes, 0 callers */

void __cdecl16far FUN_3ab8_58c4(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  uVar1 = 0x22b2;
  FUN_21f2_0ebc();
  for (iVar2 = 2; iVar2 <= param_1; iVar2 = iVar2 + 1) {
    FUN_1000_0599(uVar1,0x12,iVar2);
    iVar2 = 0xdef;
    uVar1 = 0xdef;
    func_0x00010526();
  }
  FUN_1000_02b5(0x88f,0x12,2,2,0xffff);
  FUN_3ab8_5892(0x37,2,param_2);
  *(undefined2 *)0xc22 = 1;
  return;
}



/* 3ab8:5926  FUN_3ab8_5926  175 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_5926(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_SI;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  FUN_21f2_0ebc();
  func_0x00029834(0x22b2);
  func_0x00029834(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)in_CF) {
    FUN_1000_0599(0x22b2,0x12,3);
    func_0x00012276(0xdef,0x396);
    func_0x00010526(0x11f2);
    *(undefined2 *)0xc22 = 2;
    uVar1 = 1;
  }
  else {
    FUN_21f2_3454(param_1,0x6a46,param_2,param_3,param_4,param_5);
    iVar2 = func_0x00025b06(0x22b2,param_1,0x2e);
    if (iVar2 != 0) {
      unaff_SI = func_0x00024ce4(0x22b2,param_1);
      while( true ) {
        unaff_SI = unaff_SI + -1;
        if (*(char *)(param_1 + unaff_SI) != '0') break;
        *(undefined1 *)(param_1 + unaff_SI) = 0;
      }
    }
    if (*(char *)(param_1 + unaff_SI) == '.') {
      *(undefined1 *)(param_1 + unaff_SI) = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* 3ab8:59d5  FUN_3ab8_59d5  629 bytes, 0 callers */

int __cdecl16far
FUN_3ab8_59d5(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined1 *param_5,
             int param_6,int *param_7,undefined2 param_8,undefined2 *param_9)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  int local_de;
  int local_dc;
  int local_d2;
  undefined1 local_d0 [188];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  int iVar6;
  
  FUN_21f2_0ebc();
  local_dc = *param_7;
  iVar6 = 0;
  local_de = 0;
  *param_5 = 0;
  do {
    if (*(char *)(param_6 + local_dc) == '\0') {
LAB_3ab8_5a26:
      *(undefined2 *)0xc22 = 0;
      puStack_a = (undefined1 *)0x22b2;
      uVar3 = 0x1bb4;
      uStack_c = 0x5b4;
      puVar1 = (undefined2 *)func_0x000228e3();
      *param_9 = *puVar1;
      param_9[1] = puVar1[1];
      param_9[2] = puVar1[2];
      param_9[3] = puVar1[3];
      if (*(int *)0xc22 == 0) {
        *param_7 = local_dc;
      }
      else {
        for (local_d2 = 3; local_d2 <= param_2; local_d2 = local_d2 + 1) {
          puStack_a = (undefined1 *)0x12;
          uStack_e = 0x794;
          uStack_c = uVar3;
          FUN_1000_0599();
          uVar3 = 0xdef;
          puStack_a = (undefined1 *)0x79b;
          func_0x00010526();
        }
        puStack_a = (undefined1 *)0x6;
        uStack_e = 0x28;
        puStack_10 = (undefined1 *)0x402;
LAB_3ab8_5bd8:
        uStack_c = 2;
        uStack_14 = 0x75d;
        uStack_12 = uVar3;
        FUN_1000_02b5();
        puStack_a = (undefined1 *)0x2;
        uStack_c = 0x37;
        uStack_e = 0xdef;
        puStack_10 = (undefined1 *)0x76f;
        FUN_3ab8_5892();
        *(undefined2 *)0xc22 = 2;
        local_de = -2;
      }
      return local_de;
    }
    if ((*(char *)(param_6 + local_dc) != ' ') && (*(char *)(param_6 + local_dc) != '\t')) {
      if (param_1 == 0) {
        if ((*(char *)(param_6 + local_dc) == ';') || (*(char *)(param_6 + local_dc) == '\"'))
        goto LAB_3ab8_5a26;
      }
      else if ((((*(char *)(param_6 + local_dc) == '<') || (*(char *)(param_6 + local_dc) == '>'))
               || (*(char *)(param_6 + local_dc) == '=')) || (iVar6 < 0)) goto LAB_3ab8_5a26;
      if (((0x40 < *(byte *)(param_6 + local_dc)) && (*(byte *)(param_6 + local_dc) < 0x5b)) ||
         (*(char *)(param_6 + local_dc) == '$')) {
        puStack_a = (undefined1 *)0x667;
        func_0x00029834();
        puStack_a = (undefined1 *)0x670;
        func_0x000299b9();
        puStack_10 = (undefined1 *)0x22b2;
        uStack_12 = 0x67a;
        func_0x000299d1();
        puStack_10 = local_d0;
        uStack_12 = 0x22b2;
        uStack_14 = 0x683;
        iVar2 = FUN_3ab8_5926();
        uVar5 = 0;
        if (iVar2 != 0) {
          return -1;
        }
        puStack_a = (undefined1 *)0x699;
        func_0x00029834();
        puStack_a = (undefined1 *)0x6a2;
        func_0x00029834();
        puStack_a = (undefined1 *)0x6a7;
        FUN_28b3_1181();
        if ((bool)uVar5) {
          puStack_a = param_5;
          uStack_c = 0x22b2;
          uStack_e = 0x6b5;
          FUN_21f2_2d26();
        }
        puStack_a = param_5;
        uStack_c = 0x22b2;
        uStack_e = 0x6c4;
        FUN_21f2_2d26();
        puStack_a = (undefined1 *)0x6cf;
        func_0x00029834();
        puStack_a = (undefined1 *)0x6d8;
        func_0x00029834();
        puStack_a = (undefined1 *)0x6dd;
        FUN_28b3_1181();
        if ((bool)uVar5) {
          puStack_a = param_5;
          uStack_c = 0x22b2;
          uStack_e = 0x6eb;
          FUN_21f2_2d26();
        }
        puStack_a = (undefined1 *)0x22b2;
        uVar4 = 0x22b2;
        uStack_c = 0x6f5;
        local_de = func_0x00024ce4();
        if (local_de < 0x51) goto LAB_3ab8_5a10;
        for (local_d2 = 2; local_d2 <= param_2; local_d2 = local_d2 + 1) {
          puStack_a = (undefined1 *)0x12;
          uStack_e = 0x714;
          uStack_c = uVar4;
          FUN_1000_0599();
          uVar4 = 0xdef;
          puStack_a = (undefined1 *)0x71b;
          func_0x00010526();
        }
        puStack_a = (undefined1 *)0x7;
        uStack_c = 2;
        uStack_e = 0x12;
        puStack_10 = (undefined1 *)0x6a4e;
        uVar3 = 0xdef;
        uStack_14 = 0x741;
        uStack_12 = uVar4;
        FUN_1000_02b5();
        puStack_a = (undefined1 *)0x7;
        uStack_e = 0x16;
        puStack_10 = (undefined1 *)0x751;
        goto LAB_3ab8_5bd8;
      }
      if ((*(char *)(param_6 + local_dc) == '(') || (*(char *)(param_6 + local_dc) == '[')) {
        iVar6 = iVar6 + 1;
      }
      if ((*(char *)(param_6 + local_dc) == ')') || (*(char *)(param_6 + local_dc) == ']')) {
        iVar6 = iVar6 + -1;
      }
      if ((param_1 == 0) || (-1 < iVar6)) {
        param_5[local_de] = *(undefined1 *)(param_6 + local_dc);
        local_de = local_de + 1;
        param_5[local_de] = 0;
        goto LAB_3ab8_5a10;
      }
      goto LAB_3ab8_5a26;
    }
LAB_3ab8_5a10:
    local_dc = local_dc + 1;
  } while( true );
}



/* 3ab8:5c4a  FUN_3ab8_5c4a  595 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_5c4a(int param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined2 local_3c;
  uint local_3a;
  int local_38;
  uint local_36;
  int local_34;
  char acStack_2f [5];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  uint uStack_26;
  int iStack_24;
  char *pcStack_22;
  undefined2 uStack_20;
  undefined4 uStack_1e;
  undefined1 *puStack_1a;
  char *pcStack_18;
  undefined2 uStack_16;
  uint uStack_14;
  long lStack_12;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  FUN_21f2_0ebc();
  if (param_1 == 1) {
    uStack_8 = 0x22b2;
    uStack_a = 0x7e5;
    func_0x00029834();
    uStack_8 = 0x22b2;
    uStack_a = 0x7ea;
    func_0x00029ae7();
    uStack_8 = 0x22b2;
    uStack_a = 0x7f3;
    func_0x00029c2c();
    uStack_8 = 0x22b2;
    uStack_a = 0x7fc;
    func_0x00029c74();
    uStack_8 = 0x22b2;
    uStack_a = 0x801;
    lStack_12 = FUN_28b3_0f51();
    uVar3 = (uint)((ulong)lStack_12 >> 0x10);
    uVar4 = (uint)lStack_12;
    uStack_8 = 0xffff;
    uStack_a = 0xffc4;
    uStack_c = 0;
    uStack_e = 0x3c;
    uStack_14 = 0x22b2;
    uStack_16 = 0x81b;
    local_3a = uVar3;
    local_3c = FUN_21f2_5978();
    pcStack_18 = (char *)0x22b2;
    puStack_1a = (undefined1 *)0x828;
    uStack_16 = local_3c;
    uStack_14 = local_3a;
    uVar8 = func_0x00027932();
    uVar5 = (uint)((ulong)uVar8 >> 0x10);
    local_36 = uVar4 + (uint)uVar8;
    uVar4 = (uint)CARRY2(uVar4,(uint)uVar8);
    uVar1 = uVar3 + uVar5;
    uVar6 = CARRY2(uVar3,uVar5) || CARRY2(uVar1,uVar4);
    local_34 = uVar1 + uVar4;
    uVar7 = local_34 == 0;
  }
  else {
    uStack_8 = 0x22b2;
    uStack_a = 0x83d;
    func_0x00029834();
    uStack_8 = 0x22b2;
    uStack_a = 0x842;
    func_0x00029ae7();
    uStack_8 = 0x22b2;
    uStack_a = 0x84b;
    func_0x00029c2c();
    uStack_8 = 0x22b2;
    uStack_a = 0x854;
    func_0x00029c74();
    uStack_8 = 0x22b2;
    uStack_a = 0x859;
    lVar9 = FUN_28b3_0f51();
    local_3a = (uint)((ulong)lVar9 >> 0x10);
    uStack_8 = 0xffff;
    uStack_a = 0x7360;
    uStack_c = 0;
    uStack_e = 36000;
    uStack_14 = 0x22b2;
    uStack_16 = 0x873;
    lStack_12 = lVar9;
    local_3c = FUN_21f2_5978();
    pcStack_18 = (char *)0x22b2;
    puStack_1a = (undefined1 *)0x880;
    uStack_16 = local_3c;
    uStack_14 = local_3a;
    uStack_1e = func_0x00027932();
    uStack_1e = lVar9 + uStack_1e;
    uVar4 = (uint)uStack_1e;
    uVar5 = (uint)((ulong)uStack_1e >> 0x10);
    local_34 = 0;
    pcStack_18 = (char *)0x0;
    puStack_1a = (undefined1 *)0x258;
    uStack_20 = 0x22b2;
    pcStack_22 = (char *)0x897;
    local_36 = FUN_21f2_5978();
    uStack_20 = 0xffff;
    pcStack_22 = (char *)0xfda8;
    uStack_28 = 0x22b2;
    uStack_2a = 0x8ac;
    uStack_26 = local_36;
    iStack_24 = local_34;
    uVar8 = func_0x00027932();
    uVar3 = (uint)((ulong)uVar8 >> 0x10);
    uVar4 = (uint)CARRY2(uVar4,(uint)uVar8);
    uVar1 = uVar5 + uVar3;
    uVar6 = CARRY2(uVar5,uVar3) || CARRY2(uVar1,uVar4);
    uVar7 = uVar1 + uVar4 == 0;
    uStack_28 = 0x22b2;
    uStack_2a = 0x8be;
    func_0x000298b4();
    uStack_28 = 0x22b2;
    uStack_2a = 0x8c7;
    func_0x00029b6d();
    uStack_28 = 0x22b2;
    uStack_2a = 0x8cf;
    func_0x00029983();
  }
  *param_3 = 0;
  pcStack_18 = (char *)0x22b2;
  puStack_1a = (undefined1 *)0x8dd;
  func_0x00029834();
  pcStack_18 = (char *)0x22b2;
  puStack_1a = (undefined1 *)0x8e6;
  func_0x00029834();
  pcStack_18 = (char *)0x22b2;
  puStack_1a = (undefined1 *)0x8eb;
  FUN_28b3_1181();
  if (!(bool)uVar6 && !(bool)uVar7) {
    *param_3 = 0x2d;
    param_3[1] = 0;
  }
  pcStack_18 = (char *)local_3a;
  puStack_1a = (undefined1 *)local_3c;
  uStack_1e._2_2_ = 0x6a53;
  uStack_1e._0_2_ = acStack_2f + 1;
  uStack_20 = 0x22b2;
  pcStack_22 = (char *)0x90a;
  FUN_21f2_3454();
  pcStack_18 = acStack_2f + 1;
  puStack_1a = param_3;
  uStack_1e._2_2_ = 0x22b2;
  uStack_1e._0_2_ = (char *)0x919;
  FUN_21f2_2d26();
  if (((param_2 != 0) && (local_34 < 1)) && ((local_34 < 0 || (local_36 < 10)))) {
    pcStack_18 = (char *)0x6a58;
    puStack_1a = param_3;
    uStack_1e._2_2_ = 0x22b2;
    uStack_1e._0_2_ = (char *)0x93b;
    FUN_21f2_2d26();
  }
  pcStack_18 = (char *)local_34;
  puStack_1a = (undefined1 *)local_36;
  uStack_1e._2_2_ = 0x6a5a;
  uStack_1e._0_2_ = acStack_2f + 1;
  uStack_20 = 0x22b2;
  pcStack_22 = (char *)0x950;
  FUN_21f2_3454();
  pcStack_18 = acStack_2f + 1;
  puStack_1a = param_3;
  uStack_1e._2_2_ = 0x22b2;
  uStack_1e._0_2_ = (char *)0x95f;
  FUN_21f2_2d26();
  if (param_1 != 1) {
    uVar6 = 0;
    if (param_2 != 0) {
      pcStack_18 = (char *)0x22b2;
      puStack_1a = (undefined1 *)0x97c;
      func_0x00029834();
      pcStack_18 = (char *)0x22b2;
      puStack_1a = (undefined1 *)0x984;
      func_0x000297e6();
      pcStack_18 = (char *)0x22b2;
      puStack_1a = (undefined1 *)0x989;
      func_0x00029d78();
      pcStack_18 = (char *)0x22b2;
      puStack_1a = (undefined1 *)0x98e;
      FUN_28b3_1181();
      if ((bool)uVar6) {
        pcStack_18 = (char *)0x6a5f;
        puStack_1a = param_3;
        uStack_1e._2_2_ = 0x22b2;
        uStack_1e._0_2_ = (char *)0x99c;
        FUN_21f2_2d26();
      }
    }
    pcStack_18 = (char *)0x22b2;
    puStack_1a = (undefined1 *)0x9a6;
    func_0x000297e6();
    pcStack_18 = (char *)0x22b2;
    puStack_1a = (undefined1 *)0x9ab;
    func_0x00029d78();
    uStack_20 = 0x22b2;
    pcStack_22 = (char *)0x9b5;
    func_0x000299d1();
    uStack_20 = 0x6a61;
    pcStack_22 = acStack_2f + 1;
    iStack_24 = 0x22b2;
    uStack_26 = 0x9c2;
    FUN_21f2_3454();
    if (param_2 == 0) {
      pcStack_18 = acStack_2f + 1;
      puStack_1a = (undefined1 *)0x22b2;
      uStack_1e._2_2_ = 0x9d4;
      iVar2 = func_0x00024ce4();
      while (local_38 = iVar2 + -1, acStack_2f[iVar2] == '0') {
        acStack_2f[iVar2] = '\0';
        iVar2 = local_38;
      }
      if (acStack_2f[iVar2] == '.') {
        acStack_2f[iVar2] = '\0';
      }
    }
    pcStack_18 = acStack_2f + 1;
    puStack_1a = param_3;
    uStack_1e._2_2_ = 0x22b2;
    uStack_1e._0_2_ = (char *)0xa04;
    FUN_21f2_2d26();
    pcStack_18 = (char *)0x6a66;
    puStack_1a = param_3;
    uStack_1e._2_2_ = 0x22b2;
    uStack_1e._0_2_ = (char *)0xa12;
    FUN_21f2_2d26();
  }
  return 1;
}



/* 3ab8:5e9d  FUN_3ab8_5e9d  1437 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far FUN_3ab8_5e9d(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined2 uVar19;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined2 *puVar22;
  int iStack_80c;
  int *piStack_808;
  int *piStack_806;
  int *piStack_800;
  int *piStack_7fe;
  int local_7ea;
  char *pcStack_7e6;
  char acStack_7dc [27];
  char cStack_7c1;
  char cStack_7be;
  int local_7bc;
  int iStack_7ba;
  int iStack_7b8;
  char *pcStack_7b6;
  undefined1 local_7b4 [4];
  undefined2 uStack_7b0;
  undefined2 uStack_7ae;
  char acStack_7ac [82];
  int iStack_75a;
  uint uStack_758;
  int *piStack_756;
  int aiStack_754 [51];
  char acStack_6ed [105];
  char acStack_684 [82];
  int iStack_632;
  uint uStack_630;
  int iStack_62e;
  int iStack_62c;
  int local_62a;
  undefined2 auStack_628 [11];
  byte bStack_612;
  int local_610;
  int local_60e;
  int local_60c;
  undefined2 local_60a;
  undefined2 local_608;
  byte local_606;
  undefined2 local_605 [2];
  undefined1 uStack_600;
  undefined1 uStack_5cc;
  char acStack_53e [360];
  int *piStack_3d6;
  int *piStack_3d4;
  int iStack_3d2;
  int iStack_3d0;
  undefined2 local_3ce;
  char local_3cc [202];
  int local_302;
  int iStack_300;
  int iStack_2fe;
  int iStack_2fc;
  int aiStack_2a8 [108];
  int iStack_1d0;
  char *pcStack_1ce;
  undefined2 uStack_1cc;
  undefined2 uStack_1ca;
  int iStack_1b4;
  int local_1b2;
  int local_1b0;
  undefined2 auStack_1ae [144];
  int local_8e;
  int iStack_8c;
  byte local_8a;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  int iStack_80;
  uint uStack_7e;
  uint uStack_7c;
  int iStack_7a;
  int local_78;
  int iStack_76;
  int iStack_74;
  int *piStack_72;
  undefined2 uStack_70;
  char acStack_6d [73];
  undefined2 uStack_24;
  undefined2 uStack_22;
  int aiStack_1e [5];
  char *pcStack_14;
  int *piStack_12;
  char *pcStack_10;
  int *piStack_e;
  int *piStack_c;
  char cVar23;
  
  FUN_21f2_0ebc();
  local_60a = 0;
  local_1b2 = 0;
  local_1b0 = 0;
  local_88 = *(undefined2 *)0xa5e4;
  uStack_86 = *(undefined2 *)0xa5e6;
  uStack_84 = *(undefined2 *)0xa5e8;
  uStack_82 = *(undefined2 *)0xa5ea;
  piVar17 = (int *)0x885;
  uVar11 = func_0x0000db57();
  if ((uVar11 & 2) != 0) {
    local_60a = 1;
  }
LAB_3ab8_5ed4:
  do {
    piStack_e = (int *)0xa62;
    piStack_c = piVar17;
    func_0x00024c86();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xa72;
    FUN_21f2_2d26();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xa82;
    local_7bc = FUN_21f2_1348();
    if (local_7bc == 0) {
      func_0x0002504e();
      return 0;
    }
    do {
      piStack_c = (int *)local_3cc;
      piStack_e = (int *)0x22b2;
      pcStack_10 = (char *)0xaae;
      iVar12 = func_0x0002509c();
      if (iVar12 == 0) goto LAB_3ab8_5f71;
      piStack_c = (int *)0xabf;
      iVar12 = func_0x00024ce4();
      if (local_3cc[iVar12 + -1] == '\n') {
        local_3cc[iVar12 + -1] = '\0';
      }
    } while ((local_3cc[0] == '#') || (local_3cc[0] == '\0'));
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xaef;
    func_0x00024c86();
LAB_3ab8_5f71:
    local_8e = 0;
    piVar17 = (int *)0x22b2;
    func_0x0002504e();
    local_7bc = 0;
    do {
      piStack_c = (int *)local_7b4;
      piStack_e = &local_608;
      pcStack_10 = (char *)0x270f;
      puVar18 = (undefined1 *)0x1bb4;
      pcStack_14 = (char *)0xb1f;
      piStack_12 = piVar17;
      local_60e = FUN_1def_0904();
      for (local_3ce = 1; local_3ce <= local_1b2; local_3ce = local_3ce + 1) {
        piStack_e = (undefined2 *)0xb3d;
        piStack_c = (int *)puVar18;
        FUN_1000_0599();
        puVar18 = (undefined1 *)0xdef;
        func_0x00010526();
      }
      local_1b2 = 0;
      *(undefined2 *)0xbc0 = 1;
      piVar17 = (int *)0x885;
      func_0x0000c3ca();
      if (*(int *)0x158 != 0) {
        return 0xff91;
      }
      if (local_60e == -1) {
        return 0xffff;
      }
      if (local_302 == 1) {
        local_60e = 1;
      }
      if (local_302 == 2) {
        local_60e = 2;
      }
    } while (((local_60e < 1) || (9 < local_60e)) && ((local_60e < 0x6200 || (0x6b00 < local_60e))))
    ;
    if (local_60e == 0x6b00) {
      piStack_e = (int *)0x6a69;
    }
    else {
      local_1b0 = 0;
      if ((0x61ff < local_60e) && (local_60e < 0x6a01)) {
        local_1b0 = 1;
        uVar11 = (int)(local_60e + 0x9f00U) >> 0xf;
        local_60e = ((int)((local_60e + 0x9f00U ^ uVar11) - uVar11) >> 8 ^ uVar11) - uVar11;
      }
      uVar11 = func_0x0000db57();
      if ((uVar11 & 2) != 0) {
        local_60a = 1;
      }
      piStack_c = (int *)0x885;
      piStack_e = (int *)0xc27;
      func_0x00024c86();
      local_3cc[0] = (byte)local_60e + '0';
      local_3cc[1] = 0;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xc47;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piVar17 = (int *)0x22b2;
      piStack_e = (int *)0xc57;
      FUN_21f2_2d26();
      if (local_1b0 == 0) {
LAB_3ab8_6107:
        piStack_e = (int *)0xc95;
        piStack_c = piVar17;
        local_7bc = FUN_21f2_1348();
        if (local_7bc == 0) {
          func_0x0002504e();
          piStack_e = (int *)0x14;
          pcStack_10 = (char *)0x568;
        }
        else {
          local_8a = 0;
          local_610 = 1;
          piStack_c = &local_608;
          piStack_e = (int *)0x22b2;
          pcStack_10 = (char *)0xce9;
          iVar12 = func_0x0002509c();
          if ((((iVar12 != 0) && ((char)local_608 == '#')) && (local_608._1_1_ == 'h')) &&
             (local_606 == 0x6d)) {
            local_8a = 1;
            local_610 = 4;
            func_0x0002504e();
            piStack_c = (undefined2 *)0x22b2;
            piStack_e = (int *)0xd23;
            local_7bc = FUN_21f2_1348();
          }
          piVar17 = (int *)0x22b2;
          func_0x0002504e();
          local_7bc = 0;
          do {
            if (local_8a == 0) goto LAB_3ab8_6269;
            piStack_c = (int *)local_7b4;
            piStack_e = local_605;
            pcStack_10 = (char *)0x1;
            puVar18 = (undefined1 *)0x1bb4;
            pcStack_14 = (char *)0xd5b;
            piStack_12 = piVar17;
            local_60e = FUN_1def_0904();
            for (local_3ce = 1; local_3ce <= local_1b2; local_3ce = local_3ce + 1) {
              piStack_e = (undefined2 *)0xd79;
              piStack_c = (int *)puVar18;
              FUN_1000_0599();
              puVar18 = (undefined1 *)0xdef;
              func_0x00010526();
            }
            local_1b2 = 0;
            *(undefined2 *)0xbc0 = 1;
            piVar17 = (int *)0x885;
            func_0x0000c3ca();
            if (*(int *)0x158 != 0) {
              return 0xff91;
            }
            if (local_60e == -1) goto LAB_3ab8_5ed4;
            if (local_302 == 1) {
              local_60e = 1;
            }
            if (local_302 == 2) {
              local_60e = 2;
            }
          } while ((local_60e < 1) || (9 < local_60e));
          local_8a = (byte)local_60e;
LAB_3ab8_6269:
          piStack_e = (int *)0xdf7;
          piStack_c = piVar17;
          local_7bc = FUN_21f2_1348();
          local_3ce = 0;
          local_60c = 0;
          local_62a = 0;
          local_78 = 0;
          bVar6 = false;
          do {
            while( true ) {
              do {
                piStack_c = &local_608;
                piStack_e = (int *)0x22b2;
                pcStack_10 = (char *)0xe24;
                iVar12 = func_0x0002509c();
                if (iVar12 == 0) goto LAB_3ab8_639a;
              } while ((local_8a != 0) &&
                      ((((char)local_608 != '#' || (local_608._1_1_ != ':')) ||
                       ((uint)local_8a - (uint)local_606 != -0x30))));
              if (0 < local_3ce) break;
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xe7a;
              func_0x00024c86();
              local_3ce = local_3ce + 1;
              piStack_c = (int *)0xe89;
              iVar12 = func_0x00024ce4();
              if (acStack_6d[iVar12] == '\n') {
                acStack_6d[iVar12] = '\0';
              }
            }
            if ((local_60c == 0) && (*(char *)((int)&local_60a + local_610 + 1) == '%')) {
              local_60c = 1;
              local_3ce = local_3ce + 1;
              piStack_c = (int *)((int)&local_608 + local_610);
              piStack_e = (int *)0x22b2;
              pcStack_10 = (char *)0xece;
              func_0x000253ce();
            }
            if ((local_62a == 0) && (*(char *)((int)&local_60a + local_610 + 1) == '@')) {
              local_62a = 1;
              local_3ce = local_3ce + 1;
              piStack_c = (int *)((int)&local_608 + local_610);
              piStack_e = (int *)0x22b2;
              pcStack_10 = (char *)0xf00;
              func_0x000253ce();
              if (local_60c != 0) {
                bVar6 = true;
              }
            }
          } while (local_3ce != 3);
LAB_3ab8_639a:
          func_0x0002504e();
          local_7bc = 0;
          if (((local_3ce == 3) && (0 < local_78)) && (local_78 < 0xb)) {
LAB_3ab8_63fc:
            do {
              piVar17 = (int *)0x885;
              func_0x0000c3ca();
              if (local_1b2 == 0) {
                piStack_c = (int *)0x2;
                piStack_e = (int *)0x12;
                pcStack_10 = acStack_6d + 1;
                piStack_12 = (int *)0x885;
                piVar17 = (int *)0xdef;
                pcStack_14 = (char *)0xfa1;
                FUN_1000_02b5();
                if (*(int *)0xc22 == 0) {
                  *(undefined2 *)0xc22 = 1;
                }
              }
              local_3ce = 500;
              if (local_8e != 0) {
                local_3ce = 0x1f5;
              }
              piStack_c = (int *)*(int *)0xa5e6;
              piStack_e = (int *)*(int *)0xa5e4;
              pcStack_10 = (char *)*(int *)0xa5ea;
              piStack_12 = (int *)*(int *)0xa5e8;
              pcStack_14 = (char *)*(int *)0xa5e6;
              aiStack_1e[4] = *(int *)0xa5e4;
              aiStack_1e[3] = 0;
              aiStack_1e[2] = 0x804;
              aiStack_1e[1] = 0xfffe;
              aiStack_1e[0] = local_3ce;
              pcVar4 = (code *)swi(0x3f);
              iStack_2fc = (*pcVar4)();
              if (iStack_2fc == 0x14) goto LAB_3ab8_7bf7;
              if (iStack_2fc == -1) {
                if (local_8e == 0) goto LAB_3ab8_5ed4;
                piStack_c = (int *)0x101f;
                func_0x0000daa6();
                for (; 0 < local_8e; local_8e = local_8e + -1) {
                  local_3ce = *(int *)0x150;
                  piStack_c = (int *)0xf5b;
                  func_0x000190c7();
                }
                func_0x0000abfa();
                piStack_c = (int *)0xf75;
                func_0x0000b1d8();
                local_8e = 0;
              }
              else {
                for (local_3ce = 1; local_3ce <= local_1b2; local_3ce = local_3ce + 1) {
                  piStack_e = (int *)0x103a;
                  piStack_c = piVar17;
                  FUN_1000_0599();
                  piVar17 = (int *)0xdef;
                  func_0x00010526();
                }
                local_1b2 = 0;
                *(undefined2 *)0xbc0 = 1;
                func_0x0000c3ca();
                if (*(int *)0x158 != 0) {
                  return 0xff91;
                }
                piStack_c = (int *)0x1072;
                func_0x0000daa6();
                piVar17 = (int *)0x885;
                func_0x0000c3ca();
                iStack_7a = 0;
                local_8e = 0;
                *(undefined2 *)0xbc0 = 1;
                for (local_60c = 1; local_60c <= *(int *)0x150; local_60c = local_60c + 1) {
                  piVar17 = (int *)0x0;
                  piStack_c = (int *)0x10ba;
                  puVar22 = (undefined2 *)func_0x00000398();
                  puVar14 = (undefined2 *)puVar22;
                  puVar16 = auStack_628;
                  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
                    puVar2 = puVar16;
                    puVar16 = puVar16 + 1;
                    puVar1 = puVar14;
                    puVar14 = puVar14 + 1;
                    *puVar2 = *puVar1;
                  }
                  if ((bStack_612 & 2) != 0) {
                    piVar17 = aiStack_1e;
                    puVar16 = auStack_628;
                    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
                      puVar1 = piVar17;
                      piVar17 = piVar17 + 1;
                      puVar22 = puVar16;
                      puVar16 = puVar16 + 1;
                      *puVar1 = *puVar22;
                    }
                    uStack_22 = 0;
                    piVar17 = (int *)0x18b3;
                    uStack_24 = 0x10ec;
                    func_0x00019593();
                    *(undefined2 *)0xc0a = 0;
                    iStack_7a = iStack_7a + 1;
                    if (local_78 < iStack_7a) break;
                    puVar16 = auStack_1ae + iStack_7a * 0xc;
                    puVar14 = auStack_628;
                    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
                      puVar1 = puVar16;
                      puVar16 = puVar16 + 1;
                      puVar22 = puVar14;
                      puVar14 = puVar14 + 1;
                      *puVar1 = *puVar22;
                    }
                  }
                }
                *(undefined2 *)0xbc2 = 0;
                if (local_78 == iStack_7a) {
                  for (local_60c = 1; local_60c <= local_78; local_60c = local_60c + 1) {
                    uStack_7b0 = auStack_1ae[local_60c * 0xc];
                    uStack_7ae = auStack_1ae[local_60c * 0xc + 1];
                    uVar19 = auStack_1ae[local_60c * 0xc + 2];
                    uVar3 = auStack_1ae[local_60c * 0xc + 3];
                    piStack_c = (int *)0x1;
                    pcStack_10 = (char *)0x11a6;
                    piStack_e = piVar17;
                    FUN_1def_0338();
                    auStack_1ae[local_60c * 0xc] = uStack_7b0;
                    auStack_1ae[local_60c * 0xc + 1] = uStack_7ae;
                    auStack_1ae[local_60c * 0xc + 2] = uVar19;
                    auStack_1ae[local_60c * 0xc + 3] = uVar3;
                    piVar17 = (int *)0x1bb4;
                  }
                  if (bVar6) {
                    for (local_3ce = 1; local_3ce < local_78; local_3ce = local_3ce + 1) {
                      uStack_7b0 = auStack_1ae[local_3ce * 0xc];
                      uStack_7ae = auStack_1ae[local_3ce * 0xc + 1];
                      for (local_60c = local_3ce + 1; uVar21 = local_78 == local_60c,
                          local_60c <= local_78; local_60c = local_60c + 1) {
                        func_0x000297e6();
                        uVar20 = (long)(int)((long)local_60c * 0x18) != (long)local_60c * 0x18;
                        func_0x000297e6();
                        FUN_28b3_1181();
                        if ((bool)uVar20 || (bool)uVar21) {
                          func_0x000297e6();
                          uVar20 = (long)(int)((long)local_60c * 0x18) != (long)local_60c * 0x18;
                          func_0x000297e6();
                          FUN_28b3_1181();
                          if ((bool)uVar21) {
                            func_0x000297e6();
                            func_0x000297e6();
                            FUN_28b3_1181();
                            if ((bool)uVar20 || (bool)uVar21) goto LAB_3ab8_6672;
                          }
                          puVar16 = auStack_1ae + local_60c * 0xc;
                          puVar14 = auStack_628;
                          puVar15 = puVar16;
                          for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
                            puVar1 = puVar14;
                            puVar14 = puVar14 + 1;
                            puVar22 = puVar15;
                            puVar15 = puVar15 + 1;
                            *puVar1 = *puVar22;
                          }
                          puVar14 = auStack_1ae + local_3ce * 0xc;
                          puVar15 = puVar14;
                          for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
                            puVar1 = puVar16;
                            puVar16 = puVar16 + 1;
                            puVar22 = puVar15;
                            puVar15 = puVar15 + 1;
                            *puVar1 = *puVar22;
                          }
                          puVar16 = auStack_628;
                          puVar15 = puVar14;
                          for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
                            puVar1 = puVar15;
                            puVar15 = puVar15 + 1;
                            puVar22 = puVar16;
                            puVar16 = puVar16 + 1;
                            *puVar1 = *puVar22;
                          }
                          uStack_7b0 = *puVar14;
                          uStack_7ae = auStack_1ae[local_3ce * 0xc + 1];
                        }
LAB_3ab8_6672:
                        piVar17 = (int *)0x22b2;
                      }
                    }
                  }
                  else {
                    for (local_3ce = 1; local_3ce < local_78; local_3ce = local_3ce + 1) {
                      uStack_7b0 = auStack_1ae[local_3ce * 0xc];
                      uStack_7ae = auStack_1ae[local_3ce * 0xc + 1];
                      for (local_60c = local_3ce + 1; uVar21 = local_78 == local_60c,
                          local_60c <= local_78; local_60c = local_60c + 1) {
                        func_0x000297e6();
                        uVar20 = (long)(int)((long)local_60c * 0x18) != (long)local_60c * 0x18;
                        func_0x000297e6();
                        FUN_28b3_1181();
                        if (!(bool)uVar20) {
                          func_0x000297e6();
                          uVar20 = (long)(int)((long)local_60c * 0x18) != (long)local_60c * 0x18;
                          func_0x000297e6();
                          FUN_28b3_1181();
                          if ((bool)uVar21) {
                            func_0x000297e6();
                            func_0x000297e6();
                            FUN_28b3_1181();
                            if (!(bool)uVar20) goto LAB_3ab8_6790;
                          }
                          puVar16 = auStack_1ae + local_60c * 0xc;
                          puVar14 = auStack_628;
                          puVar15 = puVar16;
                          for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
                            puVar1 = puVar14;
                            puVar14 = puVar14 + 1;
                            puVar22 = puVar15;
                            puVar15 = puVar15 + 1;
                            *puVar1 = *puVar22;
                          }
                          puVar14 = auStack_1ae + local_3ce * 0xc;
                          puVar15 = puVar14;
                          for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
                            puVar1 = puVar16;
                            puVar16 = puVar16 + 1;
                            puVar22 = puVar15;
                            puVar15 = puVar15 + 1;
                            *puVar1 = *puVar22;
                          }
                          puVar16 = auStack_628;
                          puVar15 = puVar14;
                          for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
                            puVar1 = puVar15;
                            puVar15 = puVar15 + 1;
                            puVar22 = puVar16;
                            puVar16 = puVar16 + 1;
                            *puVar1 = *puVar22;
                          }
                          uStack_7b0 = *puVar14;
                          uStack_7ae = auStack_1ae[local_3ce * 0xc + 1];
                        }
LAB_3ab8_6790:
                        piVar17 = (int *)0x22b2;
                      }
                    }
                  }
                  piStack_e = (int *)0x142c;
                  piStack_c = piVar17;
                  FUN_1000_0599();
                  piStack_c = (int *)0x1436;
                  FUN_3ab8_5876();
                  piVar17 = (int *)0xdef;
                  func_0x00010526();
                  local_3ce = 1;
                  do {
                    aiStack_2a8[local_3ce * 4] = *(int *)0xa5e4;
                    aiStack_2a8[local_3ce * 4 + 1] = *(int *)0xa5e6;
                    aiStack_2a8[local_3ce * 4 + 2] = *(int *)0xa5e8;
                    aiStack_2a8[local_3ce * 4 + 3] = *(int *)0xa5ea;
                    local_3ce = local_3ce + 1;
                  } while (local_3ce < 0x1d);
                  local_3ce = 1;
                  do {
                    acStack_53e[local_3ce * 0xc] = '\0';
                    acStack_7dc[local_3ce] = '\0';
                    local_3ce = local_3ce + 1;
                  } while (local_3ce < 0x1d);
                  if (local_8a != 0) {
                    func_0x00029da5();
                    piVar17 = (int *)0x22b2;
                    func_0x000299d1();
                  }
                  for (local_3ce = 1; local_3ce <= local_78; local_3ce = local_3ce + 1) {
                    *(undefined2 *)0xc22 = 0;
                    puVar14 = auStack_628;
                    puVar16 = auStack_1ae + local_3ce * 0xc;
                    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
                      puVar1 = puVar14;
                      puVar14 = puVar14 + 1;
                      puVar22 = puVar16;
                      puVar16 = puVar16 + 1;
                      *puVar1 = *puVar22;
                    }
                    piStack_c = &local_608;
                    pcStack_10 = (char *)0x14ff;
                    piStack_e = piVar17;
                    FUN_1885_0344();
                    piVar17 = (int *)0x1bb4;
                    piStack_c = (int *)0x150c;
                    piVar13 = (int *)func_0x000228e3();
                    aiStack_2a8[local_3ce * 4] = *piVar13;
                    aiStack_2a8[local_3ce * 4 + 1] = piVar13[1];
                    aiStack_2a8[local_3ce * 4 + 2] = piVar13[2];
                    aiStack_2a8[local_3ce * 4 + 3] = piVar13[3];
                    if (*(int *)0xc22 != 0) goto LAB_3ab8_63fc;
                  }
                  iStack_76 = 2;
                  local_3ce = 1;
                  while( true ) {
                    if (local_78 < local_3ce) goto LAB_3ab8_6acd;
                    piStack_c = &local_608;
                    pcStack_10 = (char *)0x15e6;
                    piStack_e = piVar17;
                    FUN_21f2_3454();
                    func_0x00029834();
                    func_0x000299b9();
                    pcStack_10 = (char *)0x22b2;
                    piStack_12 = (int *)0x160d;
                    func_0x000299d1();
                    pcStack_10 = local_3cc;
                    piStack_12 = (int *)0x22b2;
                    pcStack_14 = (char *)0x1616;
                    iVar12 = FUN_3ab8_5926();
                    if (iVar12 != 0) goto LAB_3ab8_63fc;
                    piStack_c = (int *)0x22b2;
                    piStack_e = (int *)0x162f;
                    FUN_21f2_2d26();
                    uVar19 = 0x22b2;
                    piStack_c = (int *)0x163b;
                    uVar11 = func_0x00024ce4();
                    if (0x14 < uVar11) break;
                    iStack_7ba = (local_3ce + -1) / 2;
                    iVar12 = iStack_7ba + 3;
                    local_60c = (local_3ce + -1) % 2;
                    piStack_c = (int *)0x22b2;
                    piStack_e = (int *)0x15b3;
                    FUN_1000_0599();
                    piStack_c = (int *)0x15be;
                    FUN_3ab8_5876();
                    piVar17 = (int *)0xdef;
                    func_0x00010526();
                    local_3ce = local_3ce + 1;
                    iStack_76 = iVar12;
                  }
                  for (local_60c = 2; piStack_c = (int *)uVar19, local_60c <= iStack_76;
                      local_60c = local_60c + 1) {
                    piStack_e = (int *)0x1543;
                    FUN_1000_0599();
                    uVar19 = 0xdef;
                    func_0x00010526();
                  }
                  piStack_e = (int *)0x1564;
                  FUN_1000_0599();
                  piStack_c = (int *)0x156e;
                  FUN_3ab8_5876();
                  func_0x00010526();
                  *(undefined2 *)0xc22 = 1;
                }
                else {
                  piStack_c = (int *)0x3;
                  piStack_e = (int *)0x12;
                  pcStack_10 = (char *)0x402;
                  pcStack_14 = (char *)0x1127;
                  piStack_12 = piVar17;
                  FUN_1000_02b5();
                  piStack_c = (int *)0xdef;
                  piStack_e = (int *)0x1138;
                  func_0x00024c86();
                  uStack_600 = 0;
                  piStack_c = (int *)0x3;
                  piStack_e = (int *)0x1a;
                  pcStack_10 = (char *)&local_608;
                  piStack_12 = (int *)0x22b2;
                  pcStack_14 = (char *)0x1158;
                  FUN_1000_02b5();
                  *(undefined2 *)0xc22 = 2;
                }
              }
            } while( true );
          }
          piStack_e = (int *)0x12;
          pcStack_10 = (char *)0x88f;
        }
        piStack_c = (int *)0x2;
        local_7bc = 0;
        piStack_12 = (int *)0x22b2;
        piVar17 = (int *)0xdef;
        pcStack_14 = (char *)0xcc3;
        FUN_1000_02b5();
        *(undefined2 *)0xc22 = 1;
        goto LAB_3ab8_5ed4;
      }
      piStack_e = (int *)0x6a6d;
    }
    piStack_c = (int *)0x1078;
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
    *(undefined2 *)0x158 = 0;
    piVar17 = (int *)0xdef;
    FUN_1000_0620();
  } while( true );
LAB_3ab8_6acd:
  if (local_60a != 0) {
    piStack_e = (int *)0x1661;
    piStack_c = piVar17;
    FUN_1000_0599();
    piStack_c = (int *)0x166b;
    FUN_3ab8_5876();
    do {
      iStack_75a = func_0x00010632();
    } while (iStack_75a == 0);
    for (local_3ce = 2; piVar17 = (int *)0xdef, local_3ce <= iStack_76; local_3ce = local_3ce + 1) {
      piStack_c = (int *)0xdef;
      piStack_e = (int *)0x168b;
      FUN_1000_0599();
      func_0x00010526();
    }
    if (iStack_75a == 0x1b) goto LAB_3ab8_63fc;
  }
  piStack_e = (int *)0x16b7;
  piStack_c = piVar17;
  local_7bc = FUN_21f2_1348();
  if (local_7bc == 0) {
LAB_3ab8_6b41:
    piVar17 = (int *)0x22b2;
    func_0x0002504e();
    local_7bc = 0;
    goto LAB_3ab8_5ed4;
  }
  iStack_2fe = 0;
  iStack_1b4 = 0;
  uStack_758 = 0;
  uStack_630 = 0;
  local_608._0_1_ = '\0';
  local_3ce = 1;
  do {
    acStack_53e[local_3ce * 0xc] = '\0';
    acStack_7dc[local_3ce] = '\0';
    local_3ce = local_3ce + 1;
  } while (local_3ce < 0x1d);
  cVar23 = '\0';
  iStack_80 = 0;
  piStack_c = (int *)0x22b2;
  piVar17 = (int *)0x22b2;
  piStack_e = (int *)0x1728;
  FUN_21f2_3154();
LAB_3ab8_6baa:
  piStack_756 = (int *)0x0;
  piVar13 = piVar17;
  if (cVar23 != '\0') {
    piVar13 = (int *)0x22b2;
    piStack_e = (int *)0x1747;
    piStack_c = piVar17;
    FUN_21f2_32c4();
    do {
      do {
        piStack_c = &local_608;
        pcStack_10 = (char *)0x175b;
        piStack_e = piVar13;
        iVar12 = func_0x0002509c();
        piVar17 = (int *)0x22b2;
        if (iVar12 == 0) goto LAB_3ab8_6c3e;
        piStack_756 = (int *)((int)piStack_756 + 1);
        piVar13 = (int *)0xdef;
        iVar12 = func_0x00010632();
        if (iVar12 == 0x1b) goto LAB_3ab8_6b41;
        for (local_62a = 0;
            (*(char *)((int)&local_608 + local_62a) == ' ' ||
            (*(char *)((int)&local_608 + local_62a) == '\t')); local_62a = local_62a + 1) {
        }
      } while ((*(char *)((int)&local_608 + local_62a) != '*') &&
              (*(char *)((int)&local_608 + local_62a) != '<'));
      do {
        do {
          iVar12 = local_62a;
          local_62a = local_62a + 1;
        } while (*(char *)((int)&local_608 + iVar12 + 1) == ' ');
      } while (*(char *)((int)&local_608 + iVar12 + 1) == '\t');
      piVar17 = piVar13;
    } while (*(char *)((int)&local_608 + iVar12 + 1) != cVar23);
LAB_3ab8_6c3e:
    piVar13 = piVar17;
    if (*(char *)((int)&local_608 + local_62a) != cVar23) {
LAB_3ab8_6cd6:
      piStack_e = (int *)0x1861;
      piStack_c = piVar17;
      FUN_3ab8_58c4();
LAB_3ab8_6ce3:
      *(undefined2 *)0xc22 = 1;
      goto LAB_3ab8_6b41;
    }
  }
LAB_3ab8_6c52:
  piStack_c = aiStack_754;
  piVar17 = (int *)0x22b2;
  pcStack_10 = (char *)0x17e4;
  piStack_e = piVar13;
  iVar12 = func_0x0002509c();
  if (iVar12 != 0) goto LAB_3ab8_6c6e;
LAB_3ab8_6d3b:
  piVar17 = (int *)0x22b2;
  func_0x0002504e();
  local_7bc = 0;
  for (local_3ce = 2; local_3ce <= iStack_76; local_3ce = local_3ce + 1) {
    piStack_e = (int *)0x238f;
    piStack_c = piVar17;
    FUN_1000_0599();
    piVar17 = (int *)0xdef;
    func_0x00010526();
  }
  local_62a = 0;
  local_3ce = 1;
  do {
    if (((local_3ce <= local_78) || (acStack_53e[local_3ce * 0xc] != '\0')) &&
       (iStack_1b4 != local_3ce)) {
      local_62a = local_62a + 1;
      local_608._0_1_ = '\0';
      piVar13 = piVar17;
      if (local_3ce <= local_78) {
        piStack_c = &local_608;
        piVar13 = (int *)0x22b2;
        pcStack_10 = (char *)0x23eb;
        piStack_e = piVar17;
        FUN_21f2_3454();
      }
      if (acStack_7dc[local_3ce] != '\0') {
        piStack_e = (int *)0x2411;
        piStack_c = piVar13;
        func_0x00024c86();
      }
      func_0x00029834();
      func_0x000299b9();
      pcStack_10 = (char *)0x22b2;
      piStack_12 = (int *)0x2437;
      func_0x000299d1();
      pcStack_10 = local_3cc;
      piStack_12 = (int *)0x22b2;
      pcStack_14 = (char *)0x2440;
      iVar12 = FUN_3ab8_5926();
      if (iVar12 != 0) goto LAB_3ab8_63fc;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x2459;
      FUN_21f2_2d26();
      iStack_7ba = (local_62a + -1) / 2;
      local_60c = (local_62a + -1) % 2;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x248d;
      FUN_1000_0599();
      if (acStack_7dc[local_3ce] == '\0') {
        piStack_c = (int *)0xdef;
        piStack_e = (int *)0x24b2;
        FUN_21f2_2d26();
      }
      piStack_c = (int *)0x24bd;
      FUN_3ab8_5876();
      piVar17 = (int *)0xdef;
      func_0x00010526();
      iStack_76 = iStack_7ba + 3;
    }
    local_3ce = local_3ce + 1;
  } while (local_3ce < 0x1b);
  acStack_7ac[0] = '\0';
  acStack_684[0] = '\0';
  iStack_8c = *(int *)0x150;
  uStack_70 = *(undefined2 *)0x112c;
  piStack_e = (int *)0x24ff;
  piStack_c = piVar17;
  FUN_1000_0599();
  func_0x00010526();
  if (0 < iStack_1b4) {
    if (piStack_72 != (int *)0x0) {
      *(undefined2 *)0x112c = 1;
    }
    piStack_c = (int *)0xdef;
    piStack_e = (int *)0x2534;
    func_0x00029834();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x253d;
    func_0x000299b9();
    pcStack_14 = (char *)0x22b2;
    aiStack_1e[4] = 0x2547;
    func_0x000299d1();
    pcStack_14 = acStack_684;
    aiStack_1e[4] = 0x22b2;
    uVar19 = 0x1bb4;
    aiStack_1e[3] = 0x2551;
    func_0x0002267f();
    if (uStack_630 != 0) {
      func_0x00029834();
      pcStack_10 = (char *)0x22b2;
      uVar19 = 0x22b2;
      piStack_12 = (int *)0x256e;
      func_0x000299d1();
      pcStack_10 = acStack_684;
      piStack_12 = piStack_72;
      pcStack_14 = pcStack_7b6;
      aiStack_1e[4] = 0x22b2;
      aiStack_1e[3] = 0x257e;
      FUN_3ab8_5c4a();
    }
    piStack_c = (int *)uVar19;
    if (acStack_7dc[iStack_1b4] == '\0') {
      piStack_e = (int *)0x25a4;
      FUN_21f2_2d26();
    }
    else {
      piStack_e = (int *)0x25bc;
      func_0x00024c86();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x25cd;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x25de;
      func_0x00024c86();
    }
    piStack_c = (int *)0x2;
    piStack_e = (int *)0x14;
    pcStack_10 = acStack_684;
    piStack_12 = (int *)0x22b2;
    pcStack_14 = (char *)0x25fa;
    FUN_1000_02b5();
  }
  *(undefined2 *)0x112c = uStack_70;
  if (iStack_2fe == 0x1b) {
    if (iStack_74 != 0) {
      *(undefined2 *)0x112c = 1;
    }
    piStack_c = (int *)uStack_1ca;
    piStack_e = (int *)uStack_1cc;
    pcStack_10 = pcStack_1ce;
    piStack_12 = (int *)iStack_1d0;
    pcStack_14 = acStack_7ac;
    aiStack_1e[4] = 0xdef;
    aiStack_1e[3] = 0x263a;
    func_0x0002267f();
    if (uStack_758 != 0) {
      piStack_c = (int *)pcStack_1ce;
      piStack_e = (int *)iStack_1d0;
      pcStack_10 = acStack_7ac;
      piStack_12 = (int *)iStack_74;
      pcStack_14 = pcStack_7e6;
      aiStack_1e[4] = 0x1bb4;
      aiStack_1e[3] = 0x2664;
      FUN_3ab8_5c4a();
    }
    if (cStack_7c1 == '\0') {
      piStack_c = (int *)0x1bb4;
      piStack_e = (int *)0x267d;
      FUN_21f2_2d26();
    }
    else {
      piStack_c = (int *)0x1bb4;
      piStack_e = (int *)0x268e;
      func_0x00024c86();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x269f;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x26b0;
      func_0x00024c86();
    }
    piStack_c = (int *)0x2;
    piStack_e = (int *)0x32;
    pcStack_10 = acStack_7ac;
    piStack_12 = (int *)0x22b2;
    pcStack_14 = (char *)0x26cc;
    FUN_1000_02b5();
  }
  piVar17 = (int *)0xdef;
  *(undefined2 *)0x112c = uStack_70;
  if (iStack_1b4 == 0) {
    piStack_c = (int *)0xdef;
    piVar17 = (int *)0x22b2;
    piStack_e = (int *)0x26eb;
    func_0x00024c86();
    acStack_7ac[0] = '\0';
  }
  *(undefined2 *)0xc2c = 0x8ae;
  piStack_c = (int *)0xffff;
  pcStack_10 = (char *)0x270a;
  piStack_e = piVar17;
  local_60e = FUN_4375_7a81();
  local_8e = 0;
  *(undefined2 *)0xc2c = 0;
  if ((0 < local_60e) && (local_60e < 0x14)) {
    local_8e = *(int *)0x150 - iStack_8c;
  }
  for (local_3ce = 2; local_3ce <= iStack_76; local_3ce = local_3ce + 1) {
    piStack_e = (int *)0x2744;
    piStack_c = piVar17;
    FUN_1000_0599();
    piVar17 = (int *)0xdef;
    func_0x00010526();
  }
  *(undefined2 *)0xbc0 = 1;
  piVar17 = (int *)0x885;
  func_0x0000c3ca();
  if (*(int *)0x158 != 0) {
    return 0xff91;
  }
  if (local_60e == 0x14) goto LAB_3ab8_7bf7;
  goto LAB_3ab8_63fc;
LAB_3ab8_6c6e:
  local_62a = 0;
  iStack_62c = 0;
  piStack_756 = (int *)((int)piStack_756 + 1);
  if (local_60a != 0) {
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x180f;
    FUN_1000_0599();
    piVar17 = (int *)0xdef;
    func_0x00010526();
    piStack_c = (int *)0x37;
    piStack_e = (int *)0xdef;
    pcStack_10 = (char *)0x1826;
    FUN_3ab8_5892();
  }
LAB_3ab8_6ca9:
  iStack_62c = iStack_62c + local_62a;
  piStack_e = (int *)0x1844;
  piStack_c = piVar17;
  func_0x00024c86();
  local_62a = 0;
  iStack_80 = iStack_80 + 1;
  piVar17 = (int *)0x22b2;
  if (10000 < iStack_80) goto LAB_3ab8_6cd6;
  iVar12 = func_0x00010632();
  if (iVar12 == 0x1b) goto LAB_3ab8_6cf6;
  while ((acStack_6ed[local_62a + 1] == ' ' || (acStack_6ed[local_62a + 1] == '\t'))) {
    local_62a = local_62a + 1;
  }
  if ((acStack_6ed[local_62a + 1] == 'e') &&
     ((iStack_62c == 0 || (acStack_6ed[local_62a + 2] == ';')))) goto LAB_3ab8_6d3b;
  if (acStack_6ed[local_62a + 1] != ';') goto LAB_3ab8_6d5a;
  do {
    local_62a = local_62a + 1;
LAB_3ab8_6d5a:
  } while ((acStack_6ed[local_62a + 1] == ' ') || (acStack_6ed[local_62a + 1] == '\t'));
  piStack_c = (int *)0xdef;
  piVar13 = (int *)0x2a75;
  piStack_e = (int *)0x18f9;
  iVar12 = func_0x0002a752();
  if ((iVar12 == 1) ||
     (((((byte)acStack_6ed[local_62a + 1] < 0x41 || (0x5a < (byte)acStack_6ed[local_62a + 1])) &&
       (acStack_6ed[local_62a + 1] != '$')) &&
      (((acStack_6ed[local_62a + 1] != 'i' && (acStack_6ed[local_62a + 1] != 'g')) &&
       (acStack_6ed[local_62a + 1] != '!')))))) goto LAB_3ab8_6c52;
  iStack_632 = local_62a;
  if (acStack_6ed[local_62a + 1] != '!') {
    if ((acStack_6ed[local_62a + 1] == 'i') && (acStack_6ed[local_62a + 2] == 'f')) {
      iStack_80c = 0;
      bVar7 = false;
      bVar8 = false;
      bVar5 = false;
      local_62a = local_62a + 2;
      piStack_c = (int *)0x2a75;
      piVar17 = (int *)0x22b2;
      piStack_e = (int *)0x1a87;
      func_0x00024c86();
LAB_3ab8_6f09:
      if (acStack_6ed[local_62a + 1] == '\0') goto LAB_3ab8_6f5d;
      if ((acStack_6ed[local_62a + 1] != ' ') && (acStack_6ed[local_62a + 1] != '\t')) {
        if ((acStack_6ed[local_62a + 1] == '(') && (iStack_80c == 0)) {
          local_62a = local_62a + 1;
          iStack_80c = 1;
          goto LAB_3ab8_6f09;
        }
        if ((acStack_6ed[local_62a + 1] == ')') && (iStack_80c == 3)) {
          local_3cc[local_62a + 1] = '\0';
          local_62a = local_62a + 1;
          goto LAB_3ab8_6f5d;
        }
        local_7ea = 0;
        if (acStack_6ed[local_62a + 1] == '=') {
          bVar7 = true;
        }
        else {
          if (acStack_6ed[local_62a + 1] == '<') {
            bVar8 = true;
            goto LAB_3ab8_6f22;
          }
          if (acStack_6ed[local_62a + 1] != '>') {
            if (iStack_80c == 1) {
              piStack_c = &local_62a;
              piStack_e = (int *)((int)acStack_6ed + 1);
              pcStack_10 = (char *)&local_608;
              piStack_12 = piStack_756;
              pcStack_14 = (char *)local_60a;
              aiStack_1e[4] = iStack_76;
              aiStack_1e[3] = 1;
              aiStack_1e[2] = 0x22b2;
              aiStack_1e[1] = 0x1b50;
              local_7ea = FUN_3ab8_59d5();
              if (0 < local_7ea) {
                iStack_80c = 2;
                goto LAB_3ab8_6f09;
              }
            }
            if (iStack_80c == 2) {
              piStack_c = &local_62a;
              piStack_e = (int *)((int)acStack_6ed + 1);
              pcStack_10 = (char *)&local_608;
              piStack_12 = piStack_756;
              pcStack_14 = (char *)local_60a;
              aiStack_1e[4] = iStack_76;
              aiStack_1e[3] = 1;
              aiStack_1e[2] = 0x22b2;
              aiStack_1e[1] = 0x1b97;
              local_7ea = FUN_3ab8_59d5();
              if (0 < local_7ea) {
                iStack_80c = 3;
                goto LAB_3ab8_6f09;
              }
            }
            if (local_7ea == -2) goto LAB_3ab8_6ce3;
            goto LAB_3ab8_6cd6;
          }
          bVar5 = true;
        }
      }
LAB_3ab8_6f22:
      local_62a = local_62a + 1;
      goto LAB_3ab8_6f09;
    }
    piVar17 = (int *)0x22b2;
    piStack_c = (int *)0x1d40;
    local_7ea = func_0x00024ce4();
    if (acStack_6ed[local_7ea] == '\n') {
      acStack_6ed[local_7ea] = '\0';
    }
    iVar12 = local_62a;
    iStack_7b8 = 0;
    iStack_300 = 0;
    if ((((acStack_6ed[local_62a + 1] != 'g') || (acStack_6ed[local_62a + 2] != 'o')) ||
        (acStack_6ed[local_62a + 3] != 't')) || (acStack_6ed[local_62a + 4] != 'o')) {
      if (acStack_6ed[local_62a + 1] == '$') {
        iStack_300 = 0x1b;
        iStack_7b8 = 0x1b;
        iStack_2fe = 0x1b;
        pcStack_7e6 = (char *)0xffff;
        uStack_758 = 0;
        iStack_74 = 0;
        uStack_7e = 0;
        local_62a = local_62a + 1;
        cStack_7be = acStack_6ed[iVar12 + 2];
        if (cStack_7be == '%') {
          uStack_758 = 1;
          pcStack_7e6 = (char *)0x1;
          local_62a = iVar12 + 2;
        }
        uStack_758 = (uint)(cStack_7be == '%');
        if (cStack_7be == '&') {
          uStack_758 = 1;
          pcStack_7e6 = (char *)0x0;
          local_62a = local_62a + 1;
        }
        if ((uStack_758 != 0) && (acStack_6ed[local_62a + 1] == '0')) {
          iStack_74 = 1;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == '0') {
          pcStack_7e6 = (char *)0x0;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == '1') {
          pcStack_7e6 = (char *)0x1;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == '2') {
          pcStack_7e6 = (char *)0x2;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == '3') {
          pcStack_7e6 = (char *)0x3;
          local_62a = local_62a + 1;
        }
        if ((int)pcStack_7e6 < 0) goto LAB_3ab8_752a;
        cStack_7be = acStack_6ed[local_62a + 1];
        if (cStack_7be == '0') {
          iStack_74 = 1;
          uStack_7e = 0;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == '1') {
          iStack_74 = 1;
          uStack_7e = 1;
          local_62a = local_62a + 1;
        }
        uStack_7e = (uint)(cStack_7be == '1');
        if (cStack_7be == '2') {
          iStack_74 = 1;
          uStack_7e = 2;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == 'a') {
          uStack_7e = 0;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == 'b') {
          uStack_7e = 1;
          local_62a = local_62a + 1;
        }
        if (cStack_7be != 'c') goto LAB_3ab8_752a;
        uStack_7e = 2;
      }
      else {
        local_3ce = (byte)acStack_6ed[local_62a + 1] - 0x40;
        if ((local_3ce < 1) || (0x1a < local_3ce)) goto LAB_3ab8_6cd6;
        iStack_300 = local_3ce;
        iStack_1b4 = local_3ce;
        pcStack_7b6 = (char *)0xffff;
        uStack_630 = 0;
        piStack_72 = (int *)0x0;
        uStack_7c = 0;
        local_62a = local_62a + 1;
        cStack_7be = acStack_6ed[iVar12 + 2];
        if (cStack_7be == '%') {
          uStack_630 = 1;
          pcStack_7b6 = (char *)0x1;
          local_62a = iVar12 + 2;
        }
        uStack_630 = (uint)(cStack_7be == '%');
        if (cStack_7be == '&') {
          uStack_630 = 1;
          pcStack_7b6 = (char *)0x0;
          local_62a = local_62a + 1;
        }
        if ((uStack_630 != 0) && (acStack_6ed[local_62a + 1] == '0')) {
          piStack_72 = (int *)0x1;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == '0') {
          pcStack_7b6 = (char *)0x0;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == '1') {
          pcStack_7b6 = (char *)0x1;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == '2') {
          pcStack_7b6 = (char *)0x2;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == '3') {
          pcStack_7b6 = (char *)0x3;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == '0') {
          piStack_72 = (int *)0x1;
        }
        if ((int)pcStack_7b6 < 0) goto LAB_3ab8_752a;
        cStack_7be = acStack_6ed[local_62a + 1];
        if (cStack_7be == '0') {
          piStack_72 = (int *)0x1;
          uStack_7c = 0;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == '1') {
          piStack_72 = (int *)0x1;
          uStack_7c = 1;
          local_62a = local_62a + 1;
        }
        uStack_7c = (uint)(cStack_7be == '1');
        if (cStack_7be == '2') {
          piStack_72 = (int *)0x1;
          uStack_7c = 2;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == 'a') {
          uStack_7c = 0;
          local_62a = local_62a + 1;
        }
        if (cStack_7be == 'b') {
          uStack_7c = 1;
          local_62a = local_62a + 1;
        }
        if (cStack_7be != 'c') goto LAB_3ab8_752a;
        uStack_7c = 2;
      }
      do {
        local_62a = local_62a + 1;
LAB_3ab8_752a:
      } while ((acStack_6ed[local_62a + 1] == ' ') || (acStack_6ed[local_62a + 1] == '\t'));
      if (acStack_6ed[local_62a + 1] == '=') {
        local_62a = local_62a + 1;
        local_7ea = 0;
        local_608._0_1_ = '\0';
        while( true ) {
          while ((iVar10 = iStack_300, iVar12 = local_62a, acStack_6ed[local_62a + 1] == ' ' ||
                 (acStack_6ed[local_62a + 1] == '\t'))) {
            local_62a = local_62a + 1;
          }
          if (acStack_6ed[local_62a + 1] == '\0') goto LAB_3ab8_7578;
          if (acStack_6ed[local_62a + 1] == ';') goto LAB_3ab8_75af;
          if (acStack_6ed[local_62a + 1] == '\"') break;
          piStack_c = &local_62a;
          piStack_e = (int *)((int)acStack_6ed + 1);
          pcStack_10 = (char *)&local_608;
          piStack_12 = piStack_756;
          pcStack_14 = (char *)local_60a;
          aiStack_1e[4] = iStack_76;
          aiStack_1e[3] = 0;
          aiStack_1e[2] = 0x22b2;
          aiStack_1e[1] = 0x220e;
          local_7ea = FUN_3ab8_59d5();
          if (local_7ea < 0) goto LAB_3ab8_6b41;
        }
        acStack_7dc[iStack_300] = '\0';
        if (acStack_6ed[iVar12 + 2] == '\"') {
          local_62a = local_62a + 1;
          acStack_7dc[iVar10] = '\x01';
        }
        iStack_62e = 0;
        iVar12 = iStack_300 * 0xc;
        while( true ) {
          bVar5 = false;
          acStack_53e[iVar12] = '\0';
          while( true ) {
            iVar10 = local_62a;
            local_62a = local_62a + 1;
            if ((acStack_6ed[iVar10 + 2] == '\0') || (9 < iStack_62e)) goto LAB_3ab8_75af;
            if ((acStack_6ed[iVar10 + 2] != '\\') || (bVar5)) break;
            bVar5 = true;
          }
          if ((acStack_6ed[iVar10 + 2] == '\"') && (!bVar5)) break;
          iVar12 = iStack_300 * 0xc;
          acStack_53e[iVar12 + iStack_62e] = acStack_6ed[iVar10 + 2];
          iStack_62e = iStack_62e + 1;
          iVar12 = iVar12 + iStack_62e;
        }
        acStack_6ed[iVar10 + 3] = 0;
        local_62a = local_62a + 2;
        goto LAB_3ab8_7578;
      }
      if (acStack_6ed[local_62a + 1] == ';') goto LAB_3ab8_7574;
      goto LAB_3ab8_6cd6;
    }
    local_62a = local_62a + 4;
    while ((acStack_6ed[local_62a + 1] == ' ' || (acStack_6ed[local_62a + 1] == '\t'))) {
      local_62a = local_62a + 1;
    }
    cVar23 = acStack_6ed[local_62a + 1];
    uVar19 = local_62a + 2;
    local_62a = local_62a + 1;
    acStack_6ed[uVar19] = 0;
    if (local_60a != 0) {
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x1dc8;
      FUN_1000_0599();
      piStack_c = (int *)0x1dd7;
      FUN_3ab8_5876();
      do {
        iStack_75a = func_0x00010632();
      } while (iStack_75a == 0);
      piStack_c = (int *)0xdef;
      piStack_e = (int *)0x1df2;
      FUN_1000_0599();
      piVar17 = (int *)0xdef;
      func_0x00010526();
      if (iStack_75a == 0x1b) goto LAB_3ab8_6d00;
    }
    goto LAB_3ab8_6baa;
  }
  local_62a = local_62a + 1;
  bVar7 = false;
  bVar5 = false;
  local_7ea = 0;
  local_608._0_1_ = '\0';
  while ((acStack_6ed[local_62a + 1] == ' ' || (acStack_6ed[local_62a + 1] == '\t'))) {
    local_62a = local_62a + 1;
  }
  while (((acStack_6ed[local_62a + 1] != '\0' && (acStack_6ed[local_62a + 1] != '\n')) &&
         (local_7ea < 0x3c))) {
    if ((acStack_6ed[local_62a + 1] != '\\') || (bVar5)) {
      if ((acStack_6ed[local_62a + 1] != '\"') || (bVar5)) {
        if (bVar7) {
          *(undefined1 *)((int)&local_608 + local_7ea) = acStack_6ed[local_62a + 1];
          *(undefined1 *)((int)&local_608 + local_7ea + 1) = 0;
          local_62a = local_62a + 1;
          bVar5 = false;
          local_7ea = local_7ea + 1;
        }
        else {
          local_62a = local_62a + 1;
        }
      }
      else {
        if (bVar7) break;
        local_62a = local_62a + 1;
        bVar7 = true;
      }
    }
    else {
      local_62a = local_62a + 1;
      bVar5 = true;
    }
  }
  for (local_3ce = 2; local_3ce <= iStack_76; local_3ce = local_3ce + 1) {
    piStack_e = (int *)0x1a15;
    piStack_c = piVar13;
    FUN_1000_0599();
    piVar13 = (int *)0xdef;
    func_0x00010526();
  }
  piStack_c = (int *)0x3;
  piStack_e = (int *)0x12;
  pcStack_10 = (char *)&local_608;
  pcStack_14 = (char *)0x1a38;
  piStack_12 = piVar13;
  FUN_1000_02b5();
  *(undefined2 *)0xc22 = 2;
  goto LAB_3ab8_6d00;
LAB_3ab8_6cf6:
  do {
    iVar12 = func_0x00010632();
  } while (iVar12 == 0x1b);
LAB_3ab8_6d00:
  func_0x0002504e();
  local_7bc = 0;
  goto LAB_3ab8_63fc;
LAB_3ab8_6f5d:
  piVar13 = piVar17;
  if (iStack_80c != 3) goto LAB_3ab8_6c52;
  bVar9 = false;
  uVar21 = !bVar7;
  if (!(bool)uVar21) {
    func_0x00029834();
    func_0x00029834();
    FUN_28b3_1181();
    if ((bool)uVar21) {
      bVar9 = true;
    }
  }
  uVar20 = 0;
  uVar21 = !bVar8;
  if (!(bool)uVar21) {
    func_0x00029834();
    func_0x00029834();
    FUN_28b3_1181();
    if (!(bool)uVar20 && !(bool)uVar21) {
      bVar9 = true;
    }
  }
  uVar21 = 0;
  if (bVar5) {
    func_0x00029834();
    func_0x00029834();
    FUN_28b3_1181();
    if ((bool)uVar21) {
      bVar9 = true;
    }
  }
  piVar17 = (int *)0x22b2;
  if (local_60a != 0) {
    local_3cc[local_62a] = '\0';
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x1c50;
    FUN_1000_0599();
    piStack_c = (int *)0x1c5f;
    FUN_3ab8_5876();
    piStack_c = (int *)0x1c74;
    FUN_3ab8_5876();
    piStack_c = piStack_7fe;
    piStack_e = piStack_800;
    pcStack_10 = local_3cc;
    piStack_12 = (int *)0xdef;
    pcStack_14 = (char *)0x1c8e;
    iVar12 = FUN_3ab8_5926();
    if (iVar12 != 0) goto LAB_3ab8_6d00;
    piStack_c = (int *)0xdef;
    piStack_e = (int *)0x1ca5;
    FUN_1000_0599();
    piStack_c = (int *)0x1cb0;
    FUN_3ab8_5876();
    piStack_c = piStack_806;
    piStack_e = piStack_808;
    pcStack_10 = local_3cc;
    piStack_12 = (int *)0xdef;
    pcStack_14 = (char *)0x1cca;
    iVar12 = FUN_3ab8_5926();
    if (iVar12 != 0) goto LAB_3ab8_6d00;
    piStack_c = (int *)0xdef;
    piStack_e = (int *)0x1ce1;
    FUN_1000_0599();
    piStack_c = (int *)0x1cec;
    FUN_3ab8_5876();
    do {
      iStack_75a = func_0x00010632();
    } while (iStack_75a == 0);
    local_3ce = 2;
    do {
      piStack_c = (int *)0xdef;
      piStack_e = (int *)0x1d0d;
      FUN_1000_0599();
      piVar17 = (int *)0xdef;
      func_0x00010526();
      local_3ce = local_3ce + 1;
    } while (local_3ce < 5);
    if (iStack_75a == 0x1b) goto LAB_3ab8_6d00;
  }
  piVar13 = piVar17;
  if (!bVar9) goto LAB_3ab8_6c52;
  goto LAB_3ab8_6ca9;
LAB_3ab8_75af:
  acStack_6ed[local_62a + 1] = 0;
LAB_3ab8_7574:
  local_62a = local_62a + 1;
LAB_3ab8_7578:
  *(undefined2 *)0xc22 = 0;
  if (0 < local_7ea) {
    if (iStack_7b8 == 0x1b) {
      piVar13 = &iStack_1d0;
    }
    else {
      piVar13 = aiStack_2a8 + iStack_1b4 * 4;
    }
    *piVar13 = (int)piStack_3d6;
    piVar13[1] = (int)piStack_3d4;
    piVar13[2] = iStack_3d2;
    piVar13[3] = iStack_3d0;
    piStack_c = piStack_3d4;
    piStack_e = piStack_3d6;
    pcStack_10 = local_3cc;
    piStack_12 = (int *)0x22b2;
    pcStack_14 = (char *)0x2246;
    iVar12 = FUN_3ab8_5926();
    if (iVar12 != 0) goto LAB_3ab8_6d00;
  }
  if (local_60a != 0) {
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x2267;
    FUN_1000_0599();
    func_0x00010526();
    piStack_c = (int *)0xdef;
    piStack_e = (int *)0x227b;
    FUN_1000_0599();
    piStack_c = (int *)0x228a;
    FUN_3ab8_5876();
    if (0 < local_7ea) {
      piStack_c = (int *)0xdef;
      piStack_e = (int *)0x22a3;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x22b4;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x22c5;
      func_0x00024c86();
      uStack_5cc = 0;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x22d9;
      FUN_1000_0599();
      piStack_c = (int *)0x22e4;
      FUN_3ab8_5876();
      func_0x00010526();
      piStack_c = (int *)0x22f4;
      uVar11 = func_0x00024ce4();
      if (0x3c < uVar11) {
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0x2307;
        FUN_1000_0599();
        piStack_c = (int *)0x2312;
        FUN_3ab8_5876();
        func_0x00010526();
      }
    }
    do {
      iStack_75a = func_0x00010632();
    } while (iStack_75a == 0);
    piStack_c = (int *)0xdef;
    piStack_e = (int *)0x2332;
    FUN_1000_0599();
    func_0x00010526();
    piStack_c = (int *)0xdef;
    piStack_e = (int *)0x2346;
    FUN_1000_0599();
    func_0x00010526();
    piStack_c = (int *)0xdef;
    piStack_e = (int *)0x235a;
    FUN_1000_0599();
    piVar17 = (int *)0xdef;
    func_0x00010526();
    if (*(int *)0xc22 != 0) goto LAB_3ab8_6b41;
    if (iStack_75a == 0x1b) goto LAB_3ab8_6d00;
  }
  goto LAB_3ab8_6ca9;
LAB_3ab8_7bf7:
  if (local_8a == 0) goto LAB_3ab8_5ed4;
  goto LAB_3ab8_6107;
}



/* 3ab8:7c0a  FUN_3ab8_7c0a  2132 bytes, 0 callers */

void __cdecl16far FUN_3ab8_7c0a(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 local_238 [4];
  char local_234 [20];
  char local_220 [4];
  undefined1 local_21c [12];
  undefined1 local_210 [50];
  undefined1 local_1de [6];
  undefined2 local_1d8;
  undefined2 uStack_1d6;
  undefined2 uStack_1d4;
  undefined2 uStack_1d2;
  char local_1d0 [50];
  int local_19e;
  undefined1 local_15a [30];
  undefined1 local_13c [72];
  int local_f4;
  char local_da [100];
  undefined1 local_76 [40];
  char *local_4e;
  char local_4c [18];
  char *local_3a;
  undefined1 local_30 [6];
  undefined2 local_2a;
  undefined2 uStack_28;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined1 *local_14;
  char *pcStack_12;
  char *local_10;
  char *local_e;
  char *local_c;
  char *local_a;
  
  FUN_21f2_0ebc();
  local_f4 = 0;
  local_a = local_15a;
  local_c = (char *)0x22b2;
  local_e = (char *)0x27ab;
  FUN_21f2_3454();
  local_a = local_76;
  local_c = (char *)0x22b2;
  local_e = (char *)0x27ba;
  FUN_21f2_3454();
  local_a = (char *)&local_26;
  local_c = (char *)0x22b2;
  local_e = (char *)0x27c9;
  FUN_21f2_3454();
  local_a = local_4c;
  local_c = (char *)0x22b2;
  local_e = (char *)0x27d8;
  FUN_21f2_3454();
  local_a = local_13c;
  local_c = (char *)0x22b2;
  local_e = (char *)0x27e8;
  FUN_21f2_3454();
  local_a = local_30;
  local_c = (char *)0x22b2;
  local_e = (char *)0x27f7;
  FUN_21f2_3454();
  local_a = &stack0xfff8;
  local_c = (char *)0x22b2;
  local_e = (char *)0x2806;
  FUN_21f2_3454();
  local_a = local_1de;
  local_c = (char *)0x22b2;
  pcVar2 = (char *)0x22b2;
  local_e = (char *)0x2816;
  FUN_21f2_3454();
  local_1d0[0] = '\0';
  local_210[0] = 0;
LAB_3ab8_7ca2:
  do {
    local_3a = (char *)0x0;
    do {
      do {
        while( true ) {
          local_a = local_da;
          local_e = (char *)0x2836;
          local_c = pcVar2;
          FUN_21f2_3454();
          local_a = local_da;
          local_c = (char *)0x22b2;
          local_e = (char *)0x2846;
          FUN_21f2_2d26();
          local_a = local_da;
          local_c = (char *)0x22b2;
          local_e = (char *)0x2856;
          FUN_21f2_2d26();
          local_a = local_da;
          local_c = (char *)0x22b2;
          local_e = (char *)0x2867;
          FUN_21f2_2d26();
          if (local_f4 == 0) {
            local_a = local_da;
            local_c = (char *)0x22b2;
            local_e = (char *)0x287f;
            FUN_21f2_2d26();
          }
          local_a = local_da;
          local_c = (char *)0x22b2;
          local_e = (char *)0x288f;
          FUN_21f2_2d26();
          if (local_f4 == 0) {
            local_a = local_da;
            local_c = (char *)0x22b2;
            local_e = (char *)0x28a6;
            FUN_21f2_2d26();
          }
          local_a = local_da;
          local_c = (char *)0x22b2;
          local_e = (char *)0x28b6;
          FUN_21f2_2d26();
          if (local_f4 != 0) {
            local_a = local_da;
            local_c = (char *)0x22b2;
            local_e = (char *)0x28ce;
            FUN_21f2_2d26();
          }
          local_a = local_da;
          local_c = (char *)0x22b2;
          local_e = (char *)0x28de;
          FUN_21f2_2d26();
          if (local_f4 != 0) {
            local_a = local_da;
            local_c = (char *)0x22b2;
            local_e = (char *)0x28f5;
            FUN_21f2_2d26();
          }
          local_a = local_da;
          local_c = (char *)0x22b2;
          local_e = (char *)0x2906;
          FUN_21f2_2d26();
          if (local_1d0[0] == '\0') {
            local_a = local_da;
            local_c = (char *)0x22b2;
            pcVar2 = (char *)0x22b2;
            local_e = (char *)0x296a;
            FUN_21f2_2d26();
          }
          else {
            local_a = local_da;
            local_c = (char *)0x22b2;
            local_e = (char *)0x2929;
            FUN_21f2_2d26();
            local_a = (char *)0x7;
            local_c = (char *)0x2;
            local_e = (char *)0x40;
            local_10 = local_1d0;
            pcStack_12 = (char *)0x22b2;
            pcVar2 = (char *)0xdef;
            local_14 = (undefined1 *)0x2945;
            FUN_1000_02b5();
            *(undefined2 *)0xc22 = 1;
          }
          local_a = local_da;
          local_e = (char *)0x297b;
          local_c = pcVar2;
          FUN_21f2_2d26();
          local_a = (char *)0x2;
          local_c = (char *)0x22b2;
          local_e = (char *)0x298b;
          FUN_1def_07a4();
          *(undefined2 *)0xc1a = 1;
          *(undefined2 *)0xc20 = 1;
          *(undefined2 *)0xc2c = 1;
          if (*(int *)0xa62 == 0x1b) {
            *(undefined2 *)0xc1a = 0;
          }
          local_a = local_238;
          local_c = local_220;
          local_e = local_da;
          local_10 = local_3a;
          pcStack_12 = (char *)0x1bb4;
          pcVar3 = (char *)0x1bb4;
          local_14 = (undefined1 *)0x29c1;
          local_19e = FUN_1def_0904();
          *(undefined2 *)0xc1a = 0;
          *(undefined2 *)0xc20 = 0;
          *(undefined2 *)0xc2c = 0;
          if (*(int *)0x158 != 0) {
            return;
          }
          if (*(int *)0xc18 == 0) break;
          local_a = (char *)0x29eb;
          func_0x000297e6();
          local_a = (char *)0x29f0;
          func_0x00029d78();
          local_10 = (char *)0x22b2;
          pcStack_12 = (char *)0x29fa;
          func_0x000299d1();
          local_10 = (char *)0x22b2;
          pcStack_12 = (char *)0x2a03;
          func_0x000297e6();
          local_10 = (char *)0x22b2;
          pcStack_12 = (char *)0x2a08;
          func_0x00029d78();
          local_18 = 0x22b2;
          uStack_1a = 0x2a12;
          func_0x000299d1();
          local_18 = 0x22b2;
          uStack_1a = 0x2a17;
          func_0x0000507a();
          pcVar2 = (char *)0x3bf;
        }
        if (local_19e == -1) {
          local_4e = (char *)0x0;
          local_a = (char *)0x1bb4;
          local_c = (char *)0x2a2d;
          func_0x0000daa6();
          local_a = (char *)0x885;
          pcVar3 = (char *)0x18b3;
          local_c = (char *)0x2a37;
          func_0x000190c7();
          local_3a = (char *)0x0;
        }
        if (local_19e == 1) {
          local_4e = (char *)0x0;
          local_f4 = 1 - local_f4;
        }
        if ((local_19e == 2) && (*(int *)0xa62 == 0x1b)) {
          *(undefined2 *)0xc18 = 1;
          return;
        }
        if (local_19e == 2) {
          local_4e = (char *)0x0;
          if (local_1d0[0] == '\0') {
            local_3a = (char *)0x0;
            if (*(char *)0x6b07 == '\0') {
              *(undefined1 *)0x6b07 = 1;
            }
            else {
              *(undefined1 *)0x6b07 = 0;
            }
          }
          else {
            local_a = local_1d0;
            local_c = (char *)0x0;
            local_10 = (char *)0x2a8f;
            local_e = pcVar3;
            iVar1 = FUN_4375_7a81();
            if (iVar1 == 1) {
              local_3a = (char *)0x1;
            }
          }
        }
        if (local_19e == 0x14) {
          return;
        }
        pcVar2 = pcVar3;
      } while (local_4e == (char *)0x0);
      local_a = local_220;
      local_c = local_4e;
      pcVar2 = (char *)0x11f2;
      local_10 = (char *)0x2ad6;
      local_e = pcVar3;
      iVar1 = func_0x00015409();
    } while (iVar1 == 0);
    local_3a = (char *)0x0;
    local_1d0[0] = '\0';
    local_210[0] = 0;
LAB_3ab8_7f6f:
    if (local_f4 != 0) {
      local_a = (char *)0x302;
      local_c = (char *)&local_26;
      local_e = (char *)0x6acd;
      local_10 = local_da;
      local_14 = (undefined1 *)0x2b10;
      pcStack_12 = pcVar2;
      FUN_21f2_3454();
      local_a = (char *)&local_1c;
      local_c = local_234;
      local_e = local_da;
      *(undefined2 *)0xc20 = 1;
      local_10 = (char *)0x1;
      pcStack_12 = (char *)0x22b2;
      pcVar2 = (char *)0x1bb4;
      local_14 = (undefined1 *)0x2b31;
      local_19e = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_19e == -1) {
        local_19e = -1;
        goto LAB_3ab8_7ca2;
      }
      if (local_4e == (char *)0x0) goto LAB_3ab8_7f6f;
      local_a = local_234;
      local_c = local_4e;
      local_e = (char *)0x1bb4;
      pcVar2 = (char *)0x11f2;
      local_10 = (char *)0x2b67;
      iVar1 = func_0x00015409();
      if (iVar1 == 0) goto LAB_3ab8_7f6f;
    }
    uVar6 = local_f4 == 0;
    if (!(bool)uVar6) {
      local_a = (char *)0x2b80;
      func_0x000297e6();
      local_a = (char *)0x2b89;
      FUN_28b3_100d();
      local_a = (char *)0x2b91;
      func_0x0002996b();
      local_a = (char *)0x2b99;
      FUN_28b3_0ee9();
      local_a = (char *)0x2ba2;
      func_0x000297e6();
      local_a = (char *)0x2bab;
      func_0x000297e6();
      local_a = (char *)0x2bb4;
      FUN_28b3_100d();
      local_a = (char *)0x2bbd;
      func_0x0002996b();
      local_a = (char *)0x2bc2;
      FUN_28b3_1181();
      if ((bool)uVar6) {
        local_a = (char *)0x2bcd;
        func_0x000297e6();
        local_a = (char *)0x2bd5;
        func_0x000297e6();
        local_a = (char *)0x2bda;
        FUN_28b3_1181();
        if ((bool)uVar6) {
          local_a = (char *)0x22b2;
          pcVar2 = (char *)0x11f2;
          local_c = (char *)0x2be8;
          func_0x00012276();
          *(undefined2 *)0xc22 = 1;
          goto LAB_3ab8_7f6f;
        }
      }
      pcVar2 = (char *)0x22b2;
    }
LAB_3ab8_816a:
    do {
      if (local_f4 == 0) {
        local_c = local_4c;
        local_e = (char *)0x6add;
      }
      else {
        local_c = (char *)&local_26;
        local_e = (char *)0x6aee;
      }
      local_a = (char *)0x302;
      local_10 = local_da;
      local_14 = (undefined1 *)0x2c0c;
      pcStack_12 = pcVar2;
      FUN_21f2_3454();
      local_a = (char *)&local_2a;
      local_c = (char *)&local_18;
      local_e = local_da;
      *(undefined2 *)0xc20 = 1;
      local_10 = (char *)0x1;
      pcStack_12 = (char *)0x22b2;
      pcVar2 = (char *)0x1bb4;
      local_14 = (undefined1 *)0x2c2c;
      local_19e = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_19e == -1) goto code_r0x00042c48;
    } while (local_4e == (char *)0x0);
    local_a = (char *)&local_18;
    local_c = local_4e;
    local_e = (char *)0x1bb4;
    pcVar2 = (char *)0x11f2;
    local_10 = (char *)0x2c6e;
    iVar1 = func_0x00015409();
    uVar6 = iVar1 == 0;
    if ((bool)uVar6) goto LAB_3ab8_816a;
    local_a = (char *)0x2c7d;
    func_0x000297e6();
    local_a = (char *)0x2c86;
    FUN_28b3_100d();
    local_a = (char *)0x2c8f;
    func_0x0002996b();
    local_a = (char *)0x2c97;
    FUN_28b3_0ee9();
    local_a = (char *)0x2ca0;
    func_0x000297e6();
    local_a = (char *)0x2ca8;
    func_0x000297e6();
    local_a = (char *)0x2cb1;
    FUN_28b3_100d();
    local_a = (char *)0x2cba;
    func_0x0002996b();
    local_a = (char *)0x2cbf;
    FUN_28b3_1181();
    if ((bool)uVar6) {
      local_a = (char *)0x2cca;
      func_0x000297e6();
      local_a = (char *)0x2cd3;
      func_0x000297e6();
      local_a = (char *)0x2cd8;
      FUN_28b3_1181();
      if ((bool)uVar6) {
        local_a = (char *)0x22b2;
        pcVar2 = (char *)0x11f2;
        local_c = (char *)0x2ce3;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        goto LAB_3ab8_816a;
      }
    }
    if (local_f4 != 0) {
      local_a = (char *)0x2d45;
      func_0x000297e6();
      local_a = (char *)0x2d4a;
      func_0x00029d78();
      local_10 = (char *)0x22b2;
      pcStack_12 = (char *)0x2d54;
      func_0x000299d1();
      local_10 = (char *)0x22b2;
      pcStack_12 = (char *)0x2d5d;
      func_0x000297e6();
      local_10 = (char *)0x22b2;
      pcStack_12 = (char *)0x2d62;
      func_0x00029d78();
      local_18 = 0x22b2;
      uStack_1a = 0x2d6c;
      func_0x000299d1();
      local_18 = *(undefined2 *)0xa5ea;
      uStack_1a = *(undefined2 *)0xa5e8;
      local_1c = *(undefined2 *)0xa5e6;
      uStack_1e = *(undefined2 *)0xa5e4;
      uStack_20 = *(undefined2 *)0xa5ea;
      uStack_22 = *(undefined2 *)0xa5e8;
      uStack_24 = *(undefined2 *)0xa5e6;
      local_26 = *(undefined2 *)0xa5e4;
      uStack_28 = 0x22b2;
      local_2a = 0x2d91;
      FUN_1000_0718();
      uVar6 = (undefined1 *)0xffdf < &local_26;
      local_a = (char *)0x2db1;
      func_0x00029da5();
      local_a = (char *)0x2dba;
      func_0x00029c2c();
      goto LAB_3ab8_8254;
    }
    local_1d8 = *(undefined2 *)0xa5e4;
    uStack_1d6 = *(undefined2 *)0xa5e6;
    uStack_1d4 = *(undefined2 *)0xa5e8;
    uStack_1d2 = *(undefined2 *)0xa5ea;
    uVar6 = 0;
    if (*(int *)0xcb6 != 0) {
      local_a = local_21c;
      local_c = (char *)0x1;
      local_e = (char *)0x22b2;
      local_10 = (char *)0x2d37;
      FUN_1def_0338();
      uVar6 = (undefined1 *)0xfff9 < &local_c;
    }
    while( true ) {
      local_a = (char *)0x2de2;
      func_0x00029834();
      local_a = (char *)0x2deb;
      func_0x00029834();
      local_a = (char *)0x2df0;
      FUN_28b3_1181();
      if (!(bool)uVar6) break;
      local_a = (char *)0x2dc9;
      func_0x00029834();
      local_a = (char *)0x22b2;
      local_c = (char *)0x2dd3;
      func_0x00029c74();
LAB_3ab8_8254:
      local_a = (char *)0x2dd9;
      func_0x000299d1();
    }
    local_a = (char *)0x2dfb;
    func_0x000297e6();
    local_a = (char *)0x2e00;
    func_0x00029d78();
    local_10 = (char *)0x22b2;
    pcStack_12 = (char *)0x2e0a;
    func_0x000299d1();
    local_10 = (char *)0x22b2;
    pcStack_12 = (char *)0x2e13;
    func_0x000297e6();
    local_10 = (char *)0x22b2;
    pcStack_12 = (char *)0x2e18;
    func_0x00029d78();
    local_18 = 0x22b2;
    uStack_1a = 0x2e22;
    func_0x000299d1();
    local_18 = *(undefined2 *)0xa5ea;
    uStack_1a = *(undefined2 *)0xa5e8;
    local_1c = *(undefined2 *)0xa5e6;
    uStack_1e = *(undefined2 *)0xa5e4;
    uStack_20 = *(undefined2 *)0xa5ea;
    uStack_22 = *(undefined2 *)0xa5e8;
    uStack_24 = *(undefined2 *)0xa5e6;
    local_26 = *(undefined2 *)0xa5e4;
    uStack_28 = 0x22b2;
    local_2a = 0x2e47;
    FUN_1000_0718();
    uVar6 = (undefined1 *)0xffdf < &local_26;
    local_a = (char *)0x2e67;
    func_0x00029da5();
    local_a = (char *)0x2e70;
    func_0x00029c2c();
    while( true ) {
      local_a = (char *)0x2e8f;
      func_0x000299d1();
      local_a = (char *)0x2e98;
      func_0x00029834();
      local_a = (char *)0x2ea1;
      func_0x00029834();
      local_a = (char *)0x2ea6;
      FUN_28b3_1181();
      if (!(bool)uVar6) break;
      local_a = (char *)0x2e7f;
      func_0x00029834();
      local_a = (char *)0x22b2;
      local_c = (char *)0x2e89;
      func_0x00029c74();
    }
    do {
      uVar5 = uVar6;
      local_a = (char *)0x2eb7;
      func_0x00029834();
      local_a = (char *)0x22b2;
      local_c = (char *)0x2ec1;
      FUN_28b3_10e4();
      local_a = (char *)0x2ec7;
      func_0x000299d1();
      local_a = (char *)0x2ed0;
      func_0x00029834();
      local_a = (char *)0x2ed9;
      func_0x00029834();
      local_a = (char *)0x2ede;
      FUN_28b3_1181();
      uVar7 = 0;
      uVar6 = 1;
    } while ((bool)uVar5);
    while( true ) {
      local_a = (char *)0x2f04;
      func_0x00029834();
      local_a = (char *)0x2f0d;
      func_0x00029834();
      local_a = (char *)0x2f12;
      FUN_28b3_1181();
      if ((bool)uVar7) break;
      local_a = (char *)0x2eeb;
      func_0x00029834();
      local_a = (char *)0x22b2;
      local_c = (char *)0x2ef5;
      func_0x00029c74();
      local_a = (char *)0x2efb;
      func_0x000299d1();
    }
    local_a = (char *)0x2f1d;
    func_0x00029834();
    local_a = (char *)0x2f25;
    func_0x000299b9();
    local_a = (char *)0x2f2d;
    FUN_28b3_0ee9();
    uVar6 = *(byte *)0x123 < 8;
    uVar7 = *(byte *)0x123 == 8;
    if (!(bool)uVar6) {
      local_a = (char *)0x2f3d;
      func_0x00029834();
      local_a = (char *)0x2f45;
      func_0x00029834();
      local_a = (char *)0x2f4a;
      func_0x00029ae7();
      local_a = (char *)0x2f4f;
      FUN_28b3_1181();
      if ((bool)uVar6 || (bool)uVar7) {
        local_a = (char *)0x2f59;
        func_0x00029834();
        local_a = (char *)0x2f62;
        func_0x00029983();
      }
    }
    if (*(char *)0x6b07 == '\0') {
      local_a = param_1;
      local_c = param_1;
      local_e = param_1;
      local_10 = param_1;
      pcStack_12 = param_1;
      local_14 = local_210;
      uStack_16 = 0x22b2;
      uVar4 = 0x1bb4;
      local_18 = 0x2fa9;
      iVar1 = func_0x0002267f();
      if (iVar1 == 0) {
        local_a = local_210;
        local_c = (char *)0x1bb4;
        uVar4 = 0x22b2;
        local_e = (char *)0x2fbe;
        FUN_21f2_3454();
      }
      local_a = (char *)0x6b02;
      local_c = local_1d0;
      local_10 = (char *)0x2fd3;
      local_e = (char *)uVar4;
      FUN_21f2_3454();
    }
    else {
      local_a = local_c;
      local_c = local_e;
      local_e = local_10;
      local_10 = local_1d0;
      pcStack_12 = (char *)0x0;
      local_14 = (undefined1 *)0x0;
      uStack_16 = 0x22b2;
      local_18 = 0x2f82;
      FUN_3ab8_5c4a();
    }
    pcVar2 = (char *)0x22b2;
    local_210[0] = 0;
  } while( true );
code_r0x00042c48:
  if (local_f4 == 0) goto LAB_3ab8_7ca2;
  goto LAB_3ab8_7f6f;
}


