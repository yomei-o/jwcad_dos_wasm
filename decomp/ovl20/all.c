/* Ghidra decompilation of jw20.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  501 bytes, 2 callers */

void __cdecl16far FUN_3ab8_0000(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  char local_2e;
  int local_2c;
  undefined1 local_2a [26];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  int iStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  puStack_6 = (undefined1 *)0xab8b;
  FUN_21f2_0ebc();
  if (param_1 == 0) {
    local_2e = '\0';
  }
  else {
    local_2e = *(char *)0x4cb1;
  }
  uStack_4 = 0x22b2;
  puStack_6 = (undefined1 *)0xaba7;
  func_0x0001bb4e();
  uStack_4 = 0x4cac;
  puStack_6 = (undefined1 *)0x1bb4;
  uStack_8 = 0xabb0;
  func_0x00012276();
  if (local_2e == '\0') {
    uStack_4 = 0x4c4e;
  }
  else {
    uStack_4 = 0x4ca6;
  }
  puStack_6 = (undefined1 *)0x11f2;
  uStack_8 = 0xabc5;
  func_0x00012276();
  uStack_4 = 0x4c53;
  puStack_6 = (undefined1 *)0x11f2;
  uStack_8 = 0xabcf;
  func_0x00012276();
  uStack_4 = 1;
  puStack_6 = (undefined1 *)0x25;
  uStack_8 = 0x11f2;
  iStack_a = 0xabdd;
  FUN_1000_0599();
  uStack_4 = 0x31e;
  puStack_6 = (undefined1 *)0xdef;
  uStack_8 = 0xabe8;
  func_0x00012276();
  if (local_2e == '\0') {
    uStack_4 = param_2;
    puStack_6 = (undefined1 *)0x4c55;
    uStack_8 = 0x11f2;
    iStack_a = 0xabfb;
    func_0x00012276();
  }
  else {
    uStack_4 = 0x11f2;
    puStack_6 = (undefined1 *)0xac08;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    puStack_6 = (undefined1 *)0xac0d;
    func_0x00029d78();
    puStack_c = (undefined1 *)0x22b2;
    uStack_e = 0xac17;
    func_0x000299d1();
    puStack_c = (undefined1 *)0x4c5a;
    uStack_e = 0x22b2;
    uStack_10 = 0xac20;
    func_0x00012276();
  }
  if (param_1 != 0) {
    uStack_4 = 1;
    puStack_6 = (undefined1 *)0x42;
    uStack_8 = 0x11f2;
    iStack_a = 0xac39;
    FUN_1000_0599();
    uStack_4 = 0x98a;
    puStack_6 = (undefined1 *)0xdef;
    uStack_8 = 0xac44;
    func_0x00012276();
    uStack_4 = 0x4c61;
    puStack_6 = (undefined1 *)0x11f2;
    uStack_8 = 0xac4e;
    func_0x00012276();
    uStack_4 = 0x4cac;
    puStack_6 = (undefined1 *)0x11f2;
    uStack_8 = 0xac58;
    func_0x00012276();
    uStack_4 = 0x652;
    puStack_6 = (undefined1 *)0x11f2;
    uStack_8 = 0xac62;
    func_0x00012276();
    uStack_4 = 0x98a;
    puStack_6 = (undefined1 *)0x11f2;
    uVar1 = 0x11f2;
    uStack_8 = 0xac6c;
    func_0x00012276();
    if (*(char *)0x4cb1 != '\0') {
      if (*(byte *)0x4cb1 < 4) {
        if (*(byte *)0x4cb1 < 2) {
          local_2a[0] = 0;
        }
        else {
          uStack_4 = 0x4cac;
          puStack_6 = local_2a;
          uStack_8 = 0x11f2;
          uVar1 = 0x22b2;
          iStack_a = 0xac95;
          func_0x00024c86();
        }
        uStack_4 = 0x4ca6;
        puStack_6 = local_2a;
        iStack_a = 0xacaa;
        uStack_8 = uVar1;
        FUN_21f2_2d26();
        if (*(char *)0x4cb1 == '\x01') {
          uStack_4 = 0x4c67;
          puStack_6 = local_2a;
          uStack_8 = 0x22b2;
          iStack_a = 0xacc0;
          FUN_21f2_2d26();
        }
        if (1 < *(byte *)0x4cb1) {
          uStack_4 = 0x4c70;
          puStack_6 = local_2a;
          uStack_8 = 0x22b2;
          iStack_a = 0xacd6;
          FUN_21f2_2d26();
        }
        if (*(char *)0x4cb1 == '\x02') {
          uStack_4 = 0x4c73;
          puStack_6 = local_2a;
          uStack_8 = 0x22b2;
          iStack_a = 0xacec;
          FUN_21f2_2d26();
        }
        if (*(char *)0x4cb1 == '\x03') {
          uStack_4 = 0x4c76;
          puStack_6 = local_2a;
          uStack_8 = 0x22b2;
          iStack_a = 0xad02;
          FUN_21f2_2d26();
        }
        local_2c = 0;
      }
      else {
        if (param_1 < 1) {
          uStack_4 = 0x4c7e;
        }
        else {
          uStack_4 = 0x4c79;
        }
        puStack_6 = local_2a;
        uStack_8 = 0x11f2;
        iStack_a = 0xad23;
        func_0x00024c86();
        uStack_4 = 0x4c83;
        puStack_6 = local_2a;
        uStack_8 = 0x22b2;
        iStack_a = 0xad32;
        FUN_21f2_2d26();
        uStack_4 = 0x4ca6;
        puStack_6 = local_2a;
        uStack_8 = 0x22b2;
        iStack_a = 0xad41;
        FUN_21f2_2d26();
        local_2c = 2;
      }
      *(undefined2 *)0xc22 = 1;
      uStack_4 = 0xffff;
      puStack_6 = (undefined1 *)-(*(byte *)0x4cb1 - 8);
      uStack_8 = 2;
      iStack_a = 0x44 - local_2c;
      puStack_c = local_2a;
      uStack_e = 0x22b2;
      uStack_10 = 0xad71;
      FUN_1000_02b5();
    }
  }
  return;
}



/* 3ab8:01f5  FUN_3ab8_01f5  4780 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003b78c) */
/* WARNING: Removing unreachable block (ram,0x0003af18) */
/* WARNING: Removing unreachable block (ram,0x0003b101) */
/* WARNING: Removing unreachable block (ram,0x0003b145) */
/* WARNING: Removing unreachable block (ram,0x0003b79e) */
/* WARNING: Removing unreachable block (ram,0x0003b496) */

void __cdecl16far FUN_3ab8_01f5(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 *puVar14;
  undefined1 local_12e [4];
  undefined1 local_12a [4];
  int local_126;
  undefined4 local_124;
  undefined2 local_120;
  undefined2 local_11e;
  undefined2 *local_114;
  undefined2 *local_112;
  undefined1 local_110 [4];
  undefined4 local_10c;
  int local_104;
  undefined2 local_102;
  undefined2 local_100;
  undefined1 local_fe [124];
  uint local_82;
  undefined2 local_80;
  undefined2 local_7e;
  int local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 *local_66;
  undefined2 *local_60;
  undefined2 *local_5e;
  undefined2 *local_58;
  undefined2 *local_56;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 *local_46;
  undefined2 *local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 *local_3e;
  undefined2 *local_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 auStack_36 [6];
  uint local_2a;
  undefined2 local_28 [3];
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 *local_12;
  undefined2 *local_10;
  undefined4 local_e;
  
  FUN_21f2_0ebc();
  local_e._2_2_ = (undefined1 *)0x22b2;
  puVar8 = (undefined1 *)0x22b2;
  local_e._0_2_ = (undefined1 *)0xad8f;
  func_0x00024c86();
  local_66 = (undefined2 *)0x0;
LAB_3ab8_0216:
  do {
    do {
      while( true ) {
        local_e._0_2_ = (undefined1 *)0xada4;
        local_e._2_2_ = puVar8;
        func_0x00024c86();
        local_e._2_2_ = (undefined1 *)0x22b2;
        local_e._0_2_ = (undefined1 *)0xadb4;
        FUN_21f2_2d26();
        local_e._2_2_ = (undefined1 *)0x22b2;
        local_e._0_2_ = (undefined1 *)0xadc4;
        FUN_21f2_2d26();
        local_e._2_2_ = (undefined1 *)0x22b2;
        local_e._0_2_ = (undefined1 *)0xadd4;
        FUN_21f2_2d26();
        local_e._2_2_ = (undefined1 *)0x22b2;
        local_e._0_2_ = (undefined1 *)0xade3;
        FUN_21f2_2d26();
        local_e._2_2_ = (undefined1 *)0x22b2;
        puVar9 = (undefined2 *)0x22b2;
        local_e._0_2_ = (undefined1 *)0xadf3;
        FUN_21f2_2d26();
        if ((0 < (int)local_66) && (*(int *)0xc22 == 0)) {
          *(undefined2 *)0xc22 = 1;
          local_e._2_2_ = (undefined1 *)0x22b2;
          local_e._0_2_ = (undefined1 *)0xae15;
          FUN_1000_0599();
          local_e._2_2_ = (undefined1 *)0xdef;
          local_e._0_2_ = (undefined1 *)0xae25;
          func_0x00012276();
          puVar9 = (undefined2 *)0x11f2;
          local_e._2_2_ = (undefined1 *)0xae30;
          func_0x00012276();
        }
        *(undefined2 *)0xc2c = 1;
        local_e._2_2_ = local_12a;
        local_e._0_2_ = local_fe;
        local_10 = local_66;
        puVar8 = (undefined1 *)0x1bb4;
        uStack_14 = 0xae51;
        local_12 = puVar9;
        local_104 = FUN_1def_0904();
        *(undefined2 *)0xc2c = 0;
        if ((*(int *)0x158 != 0) || (local_104 == 0x14)) {
          return;
        }
        if (local_104 == -1) {
          local_e._2_2_ = (undefined1 *)0xae7d;
          func_0x0000daa6();
          local_78 = 0;
          uVar11 = 0x885;
          for (local_82 = 1; (int)local_82 <= (int)local_66; local_82 = local_82 + 1) {
            local_120 = *(undefined2 *)0x148;
            local_11e = *(undefined2 *)0x14a;
            local_e._0_2_ = (undefined1 *)0xaea0;
            local_e._2_2_ = (undefined1 *)uVar11;
            func_0x00018779();
            uVar11 = 0x11f2;
          }
          func_0x0000abfa();
          local_66 = (undefined2 *)0x0;
          puVar8 = (undefined1 *)0x885;
          local_e._2_2_ = (undefined1 *)0xaec0;
          func_0x0000b1d8();
        }
        local_10c._2_2_ = 0;
        local_10c._0_2_ = 0;
        local_10c = 0;
        if (local_78 != 0) {
          func_0x000297e6();
          func_0x00029d78();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xaee7;
          func_0x000299d1();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xaef0;
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xaef5;
          func_0x00029d78();
          local_18 = 0x22b2;
          uStack_1a = 0xaeff;
          func_0x000299d1();
          local_18 = 0x22b2;
          puVar8 = (undefined1 *)0x11f2;
          uStack_1a = 0xaf04;
          local_10c = FUN_13bf_39a0();
        }
        if (0 < local_10c) break;
        if (local_10c < 0) {
          local_e._0_2_ = (undefined1 *)0xaf9e;
          local_e._2_2_ = puVar8;
          FUN_1000_0599();
          local_e._2_2_ = (undefined1 *)0xdef;
          puVar8 = (undefined1 *)0x11f2;
          local_e._0_2_ = (undefined1 *)0xafad;
          func_0x00012276();
          *(undefined2 *)0xc22 = 1;
        }
      }
LAB_3ab8_039f:
      local_e._0_2_ = (undefined1 *)0xaf2d;
      local_e._2_2_ = puVar8;
      func_0x00024c86();
      local_e._2_2_ = (undefined1 *)0x22b2;
      local_e._0_2_ = (undefined1 *)0xaf3d;
      FUN_21f2_2d26();
      local_e._2_2_ = (undefined1 *)0x22b2;
      local_e._0_2_ = (undefined1 *)0xaf4d;
      FUN_21f2_2d26();
      local_e._2_2_ = (undefined1 *)0x22b2;
      local_e._0_2_ = (undefined1 *)0xaf5d;
      FUN_21f2_2d26();
      local_e._2_2_ = &stack0xfffa;
      local_e._0_2_ = local_fe;
      local_10 = (undefined2 *)0x1;
      local_12 = (undefined2 *)0x22b2;
      puVar8 = (undefined1 *)0x1bb4;
      uStack_14 = 0xaf79;
      local_104 = FUN_1def_0904();
      if (*(int *)0x158 != 0) {
        return;
      }
    } while (local_104 == -1);
    local_124._2_2_ = 0;
    local_124._0_2_ = 0;
    local_124 = 0;
    puVar10 = puVar8;
    if (local_78 == 1) {
      func_0x000297e6();
      func_0x00029d78();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xafe7;
      func_0x000299d1();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xafef;
      func_0x000297e6();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xaff4;
      func_0x00029d78();
      local_18 = 0x22b2;
      uStack_1a = 0xaffe;
      func_0x000299d1();
      local_18 = 0x22b2;
      puVar10 = (undefined1 *)0x11f2;
      uStack_1a = 0xb003;
      local_124 = FUN_13bf_39a0();
    }
    puVar8 = puVar10;
    if (local_78 != 2) {
LAB_3ab8_04ab:
      if (local_124 == local_10c) {
        local_e._0_2_ = (undefined1 *)0xb0dc;
        local_e._2_2_ = puVar8;
        FUN_1000_0599();
        puVar8 = (undefined1 *)0x11f2;
        local_e._2_2_ = (undefined1 *)0xb0e7;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        local_124 = 0;
      }
      if (0 < local_124) goto LAB_3ab8_04ae;
      if (local_124 < 0) {
        local_e._0_2_ = (undefined1 *)0xb122;
        local_e._2_2_ = puVar8;
        FUN_1000_0599();
        local_e._2_2_ = (undefined1 *)0xdef;
        puVar8 = (undefined1 *)0x11f2;
        local_e._0_2_ = (undefined1 *)0xb131;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
      }
      goto LAB_3ab8_039f;
    }
    local_e._2_2_ = (undefined1 *)local_78;
    puVar8 = (undefined1 *)0x11f2;
    local_10 = (undefined2 *)0xb024;
    local_e._0_2_ = puVar10;
    iVar6 = func_0x00015409();
    if (iVar6 == 0) goto LAB_3ab8_04ab;
LAB_3ab8_04ae:
    local_e._0_2_ = (undefined1 *)0xb03b;
    local_e._2_2_ = puVar8;
    puVar14 = (undefined2 *)func_0x0000013f();
    puVar7 = (undefined2 *)puVar14;
    puVar9 = &local_4a;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    func_0x000297e6();
    func_0x00029d78();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb064;
    func_0x000299d1();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb06c;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb071;
    func_0x00029d78();
    local_18 = 0x22b2;
    uStack_1a = 0xb07b;
    func_0x000299d1();
    local_18 = 0x22b2;
    uStack_1a = 0xb083;
    func_0x000297e6();
    local_18 = 0x22b2;
    uStack_1a = 0xb088;
    func_0x00029d78();
    local_20 = 0x22b2;
    func_0x000299d1();
    local_20 = 0x22b2;
    func_0x000297e6();
    local_20 = 0x22b2;
    func_0x00029d78();
    local_28[0] = 0x22b2;
    local_2a = 0xb0a9;
    func_0x000299d1();
    local_28[0] = 0x22b2;
    puVar8 = (undefined1 *)0x1bb4;
    local_2a = 0xb0ae;
    iVar6 = FUN_1def_043a();
    if (iVar6 == 0) goto LAB_3ab8_0216;
    if (local_124 < 1) {
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029983();
      local_58 = local_12;
      local_56 = local_10;
      local_60 = local_12;
      local_5e = local_10;
    }
    else {
      local_e._2_2_ = (undefined1 *)0x1bb4;
      local_e._0_2_ = (undefined1 *)0xb159;
      puVar14 = (undefined2 *)func_0x0000013f();
      puVar7 = (undefined2 *)puVar14;
      puVar9 = (undefined2 *)&stack0xff9c;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar1;
      }
    }
    func_0x000297e6();
    func_0x00029d78();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb1ae;
    func_0x000299d1();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb1b6;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb1bb;
    func_0x00029d78();
    local_18 = 0x22b2;
    uStack_1a = 0xb1c5;
    func_0x000299d1();
    local_18 = 1;
    uStack_1a = 0x22b2;
    local_1c = 0xb1ce;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_76 = *puVar9;
    local_74 = puVar9[1];
    func_0x000297e6();
    func_0x00029d78();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb1f5;
    func_0x000299d1();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb1fd;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb202;
    func_0x00029d78();
    local_18 = 0x22b2;
    uStack_1a = 0xb20c;
    func_0x000299d1();
    local_18 = 1;
    uStack_1a = 0x22b2;
    local_1c = 0xb215;
    puVar9 = (undefined2 *)func_0x0001e558();
    uVar12 = (undefined1 *)0xffed < &local_18;
    uVar13 = &stack0x0000 == (undefined1 *)0x6;
    local_80 = *puVar9;
    local_7e = puVar9[1];
    func_0x00029834();
    func_0x000297e6();
    func_0x00029ae7();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar12) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029ae7();
      func_0x00029d78();
      puVar8 = (undefined1 *)0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar12) goto LAB_3ab8_039f;
    }
    uVar12 = 0;
    local_126 = 0;
    local_102 = *(undefined2 *)0x9ea4;
    local_100 = *(undefined2 *)0x9ea6;
    func_0x00029834();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    func_0x00029ae7();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar12 || (bool)uVar13) {
      local_126 = -1;
      func_0x000297e6();
      func_0x00029ae7();
      func_0x000297e6();
      func_0x00029ae7();
      FUN_28b3_117c();
      func_0x00029d78();
      func_0x00029c2c();
      func_0x00029983();
    }
LAB_3ab8_077d:
    FUN_28b3_0d8b();
    func_0x00029983();
    if ((*(char *)0x4cb1 != '\0') && (local_126 != 0)) {
      local_6a = *(undefined2 *)0x4cb2;
      local_68 = *(undefined2 *)0x4cb4;
    }
    local_6e = local_6a;
    local_6c = local_68;
    local_e._2_2_ = (undefined1 *)0x22b2;
    local_e._0_2_ = (undefined1 *)0xb341;
    FUN_3ab8_0000();
    local_e._2_2_ = local_12e;
    local_e._0_2_ = local_110;
    local_10 = &local_6e;
    local_12 = &local_6a;
    uStack_14 = 0x22b2;
    puVar8 = (undefined1 *)0xad;
    local_16 = 0xb375;
    local_2a = func_0x000021a4();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_2a == 0xffff) break;
    iVar6 = (local_2a ^ (int)local_2a >> 0xf) - ((int)local_2a >> 0xf);
    if (((0x42 < iVar6) && (iVar6 < 0x50)) || (local_2a == 0x6200)) {
      if (local_126 != 0) {
        if ((int)local_2a < 1) {
          if (*(char *)0x4cb1 == '\0') {
            *(undefined1 *)0x4cb1 = 4;
          }
          else {
            *(char *)0x4cb1 = *(char *)0x4cb1 + -1;
          }
        }
        else {
          *(char *)0x4cb1 = *(char *)0x4cb1 + '\x01';
          if (4 < *(byte *)0x4cb1) {
            *(undefined1 *)0x4cb1 = 0;
          }
        }
      }
      goto LAB_3ab8_077d;
    }
    if (*(char *)0x4cb1 == '\0') {
LAB_3ab8_0870:
      uVar13 = 1;
      uVar12 = 0;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar12 && !(bool)uVar13) goto LAB_3ab8_077d;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12) goto LAB_3ab8_077d;
      if (local_2a != 0x66) {
        uVar12 = local_2a == 0;
        if (!(bool)uVar12) goto LAB_3ab8_077d;
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c74();
        uVar11 = FUN_28b3_0f51();
        *(undefined2 *)0x4ce6 = uVar11;
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((!(bool)uVar12) && (uVar12 = 0, *(char *)0x126 != '\0')) {
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if (!(bool)uVar12) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
          }
        }
      }
    }
    else {
      uVar12 = 0;
      uVar13 = local_126 == 0;
      if ((bool)uVar13) goto LAB_3ab8_0870;
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if ((bool)uVar12) goto LAB_3ab8_077d;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12 || (bool)uVar13) goto LAB_3ab8_077d;
      if (local_2a != 0x66) {
        if (local_2a != 0) goto LAB_3ab8_077d;
        *(undefined2 *)0x4cb2 = local_6a;
        *(undefined2 *)0x4cb4 = local_68;
      }
    }
    if ((*(char *)0x4cb1 == '\0') || (local_126 == 0)) {
      local_e._0_2_ = (undefined1 *)*(int *)0x4ce6;
      local_e._2_2_ = (undefined1 *)((int)(undefined1 *)local_e >> 0xf);
      func_0x000298b4();
      func_0x00029983();
    }
    else {
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b9d();
      func_0x00029b9d();
      func_0x0002996b();
      FUN_28b3_0ee9();
      uVar12 = *(char *)0x4cb1 == '\0';
      uVar13 = *(char *)0x4cb1 == '\x01';
      if ((bool)uVar13) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c74();
        local_e = FUN_28b3_0f51();
        func_0x000298b4();
LAB_3ab8_0bfb:
        func_0x00029983();
      }
      else {
        func_0x000297e6();
        func_0x00029d78();
        local_e = FUN_28b3_0f51();
        func_0x000298b4();
        func_0x00029b55();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x00029834();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1181();
        if (!(bool)uVar12) {
          uVar12 = CARRY2((uint)local_e._2_2_,(uint)(0xfffe < (undefined1 *)local_e));
          uVar13 = (int)((ulong)(local_e + 1) >> 0x10) == 0;
          local_e = local_e + 1;
          func_0x000298b4();
          func_0x00029983();
        }
        func_0x00029834();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1181();
        if ((bool)uVar12 || (bool)uVar13) {
          func_0x000298b4();
          func_0x00029983();
        }
        uVar12 = *(byte *)0x4cb1 < 3;
        if (!(bool)uVar12) {
          func_0x000297e6();
          func_0x000298b4();
          FUN_28b3_1181();
          if ((bool)uVar12) {
            local_e = local_e + 1;
          }
        }
        if (*(byte *)0x4cb1 < 4) {
          func_0x000298b4();
          func_0x00029983();
        }
        if (3 < *(byte *)0x4cb1) {
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029b9d();
          func_0x00029b9d();
          goto LAB_3ab8_0bfb;
        }
      }
      if ((10000 < local_e) || (local_e < 2)) {
        *(undefined2 *)0xc22 = 1;
        local_e._2_2_ = (undefined1 *)0x2;
        local_e._0_2_ = (undefined1 *)0x14;
        local_10 = (undefined2 *)0x396;
        local_12 = (undefined2 *)0x22b2;
        uStack_14 = 0xb7c6;
        FUN_1000_02b5();
        goto LAB_3ab8_077d;
      }
    }
    local_e._2_2_ = (undefined1 *)0xb460;
    func_0x0000daa6();
    local_66 = (undefined2 *)0x0;
    FUN_1885_2ec3();
    local_e._2_2_ = (undefined1 *)0x1b6e;
    uVar11 = 0;
    local_e._0_2_ = (undefined1 *)0xb478;
    puVar14 = (undefined2 *)func_0x0000013f();
    puVar7 = (undefined2 *)puVar14;
    puVar9 = &local_4a;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    if (local_124 < 1) {
      local_2a = 0;
      local_58 = local_12;
      local_56 = local_10;
      local_60 = local_12;
      local_5e = local_10;
    }
    else {
      local_e._2_2_ = (undefined1 *)0x0;
      local_e._0_2_ = (undefined1 *)0xb4ad;
      puVar14 = (undefined2 *)func_0x0000013f();
      puVar7 = (undefined2 *)puVar14;
      puVar9 = (undefined2 *)&stack0xff9c;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar1;
      }
      puVar7 = &local_20;
      puVar9 = (undefined2 *)&stack0xff9c;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        puVar14 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar1 = *puVar14;
      }
      puVar7 = auStack_36;
      puVar9 = &local_4a;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        puVar14 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar1 = *puVar14;
      }
      uStack_38 = 0;
      uVar11 = 0x1bb4;
      uStack_3a = 0xb4e6;
      local_2a = FUN_1def_1921();
    }
    puVar4 = local_5e;
    puVar3 = local_60;
    puVar7 = &local_20;
    puVar9 = (undefined2 *)&stack0xff9c;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      puVar14 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar1 = *puVar14;
    }
    puVar7 = auStack_36;
    puVar9 = &local_4a;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      puVar14 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar1 = *puVar14;
    }
    uStack_3a = 0xb81e;
    uStack_38 = uVar11;
    local_2a = FUN_1def_1921();
    if (local_2a == 0) {
      func_0x000297e6();
      func_0x00029d78();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xb842;
      func_0x000299d1();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xb84a;
      func_0x000297e6();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xb84f;
      func_0x00029d78();
      local_18 = 0x22b2;
      uStack_1a = 0xb859;
      func_0x000299d1();
      local_18 = 0x22b2;
      uStack_1a = 0xb861;
      func_0x000297e6();
      local_18 = 0x22b2;
      uStack_1a = 0xb866;
      func_0x00029d78();
      local_20 = 0x22b2;
      func_0x000299d1();
      local_20 = 0x22b2;
      func_0x000297e6();
      local_20 = 0x22b2;
      func_0x00029d78();
      local_28[0] = 0x22b2;
      local_2a = 0xb887;
      func_0x000299d1();
      local_28[0] = 0x22b2;
      local_2a = 0xb88c;
      iVar6 = FUN_1def_043a();
      if (iVar6 != 0) {
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xb8ad;
        func_0x000299d1();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xb8b5;
        func_0x000297e6();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xb8ba;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xb8c4;
        func_0x000299d1();
        local_18 = 1;
        uStack_1a = 0x22b2;
        local_1c = 0xb8cd;
        puVar9 = (undefined2 *)FUN_1def_05d1();
        local_76 = *puVar9;
        local_74 = puVar9[1];
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xb8fc;
        func_0x000299d1();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xb904;
        func_0x000297e6();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xb909;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xb913;
        func_0x000299d1();
        local_18 = 1;
        uStack_1a = 0x22b2;
        local_1c = 0xb91c;
        FUN_1def_05d1();
        uVar12 = (undefined1 *)0xffed < &local_18;
        uVar13 = &stack0x0000 == (undefined1 *)0x6;
        func_0x000297e6();
        func_0x0002996b();
        goto LAB_3ab8_0fe3;
      }
LAB_3ab8_0e19:
      puVar8 = (undefined1 *)0x1bb4;
      goto LAB_3ab8_0216;
    }
    func_0x000297e6();
    func_0x00029d78();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb948;
    func_0x000299d1();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb950;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb955;
    func_0x00029d78();
    local_18 = 0x22b2;
    uStack_1a = 0xb95f;
    func_0x000299d1();
    local_18 = 0x22b2;
    uStack_1a = 0xb967;
    func_0x000297e6();
    local_18 = 0x22b2;
    uStack_1a = 0xb96c;
    func_0x00029d78();
    local_20 = 0x22b2;
    func_0x000299d1();
    local_20 = 0x22b2;
    func_0x000297e6();
    local_20 = 0x22b2;
    func_0x00029d78();
    local_28[0] = 0x22b2;
    local_2a = 0xb98d;
    func_0x000299d1();
    local_28[0] = 0x22b2;
    local_2a = 0xb992;
    iVar6 = FUN_1def_043a();
    if (iVar6 == 0) goto LAB_3ab8_0e19;
    func_0x000297e6();
    func_0x00029d78();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb9b3;
    func_0x000299d1();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb9bc;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb9c1;
    func_0x00029d78();
    local_18 = 0x22b2;
    uStack_1a = 0xb9cb;
    func_0x000299d1();
    local_18 = 1;
    uStack_1a = 0x22b2;
    local_1c = 0xb9d4;
    FUN_1def_05d1();
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029d78();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb9f5;
    func_0x000299d1();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xb9fd;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xba02;
    func_0x00029d78();
    local_18 = 0x22b2;
    uStack_1a = 0xba0c;
    func_0x000299d1();
    local_18 = 1;
    uStack_1a = 0x22b2;
    local_1c = 0xba15;
    FUN_1def_05d1();
    uVar12 = (undefined1 *)0xffed < &local_18;
    func_0x000297e6();
    FUN_28b3_1181();
    puVar7 = local_44;
    puVar9 = local_46;
    uVar5 = local_48;
    uVar11 = local_4a;
    if ((bool)uVar12) {
      local_4a = local_42;
      local_48 = local_40;
      local_42 = uVar11;
      local_40 = uVar5;
      local_114 = local_46;
      local_112 = local_44;
      local_46 = local_3e;
      local_44 = local_3c;
      local_3e = puVar9;
      local_3c = puVar7;
    }
    func_0x000297e6();
    func_0x00029d78();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xba8d;
    func_0x000299d1();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xba95;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xba9a;
    func_0x00029d78();
    local_18 = 0x22b2;
    uStack_1a = 0xbaa4;
    func_0x000299d1();
    local_18 = 0x22b2;
    uStack_1a = 0xbaac;
    func_0x000297e6();
    local_18 = 0x22b2;
    uStack_1a = 0xbab1;
    func_0x00029d78();
    local_20 = 0x22b2;
    func_0x000299d1();
    local_20 = 0x22b2;
    func_0x000297e6();
    local_20 = 0x22b2;
    func_0x00029d78();
    local_28[0] = 0x22b2;
    local_2a = 0xbad2;
    func_0x000299d1();
    local_28[0] = 0x22b2;
    puVar8 = (undefined1 *)0x1bb4;
    local_2a = 0xbad7;
    iVar6 = FUN_1def_043a();
    if (iVar6 != 0) {
      func_0x000297e6();
      func_0x00029d78();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xbaf8;
      func_0x000299d1();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xbb00;
      func_0x000297e6();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xbb05;
      func_0x00029d78();
      local_18 = 0x22b2;
      uStack_1a = 0xbb0f;
      func_0x000299d1();
      local_18 = 1;
      uStack_1a = 0x22b2;
      local_1c = 0xbb18;
      FUN_1def_05d1();
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029d78();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xbb39;
      func_0x000299d1();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xbb41;
      func_0x000297e6();
      local_10 = (undefined2 *)0x22b2;
      local_12 = (undefined2 *)0xbb46;
      func_0x00029d78();
      local_18 = 0x22b2;
      uStack_1a = 0xbb50;
      func_0x000299d1();
      local_18 = 1;
      uStack_1a = 0x22b2;
      local_1c = 0xbb59;
      FUN_1def_05d1();
      uVar12 = (undefined1 *)0xffed < &local_18;
      uVar13 = &stack0x0000 == (undefined1 *)0x6;
      func_0x000297e6();
LAB_3ab8_0fe3:
      FUN_28b3_1181();
      if ((bool)uVar12) {
        local_114 = local_60;
        local_112 = local_5e;
        local_60 = local_58;
        local_5e = local_56;
        local_58 = puVar3;
        local_56 = puVar4;
      }
      func_0x00029834();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12) {
LAB_3ab8_1085:
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b85();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b85();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b85();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b85();
        func_0x00029983();
        for (local_82 = 1;
            ((int)local_82 >> 0xf <= (int)local_e._2_2_ &&
            (((int)local_82 >> 0xf < (int)local_e._2_2_ || (local_82 < (undefined1 *)local_e))));
            local_82 = local_82 + 1) {
          local_18 = CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
          local_16 = CONCAT11(local_16._1_1_,*(undefined1 *)0xb310);
          func_0x000298b4();
          func_0x00029b6d();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000298b4();
          func_0x00029b6d();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000298b4();
          func_0x00029b6d();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000298b4();
          func_0x00029b6d();
          func_0x00029bb5();
          func_0x00029983();
          puVar7 = &local_1c;
          puVar9 = local_28;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            puVar14 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar1 = *puVar14;
          }
          local_20 = 0xbd8a;
          iVar6 = FUN_17a6_0cba();
          if (0 < iVar6) {
            local_66 = (undefined2 *)((int)local_66 + 1);
          }
        }
      }
      else {
        func_0x00029834();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar12 && !(bool)uVar13) {
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar12) goto LAB_3ab8_1085;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000298b4();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xbdc2;
        func_0x000299d1();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xbdca;
        func_0x000297e6();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xbdcf;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xbdd9;
        func_0x000299d1();
        local_18 = 0x22b2;
        uStack_1a = 0xbdde;
        func_0x0002a0c4();
        func_0x00029834();
        FUN_28b3_10e4();
        FUN_28b3_1172();
        func_0x0002996b();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029c9d();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029983();
        for (local_82 = 1;
            ((int)local_82 >> 0xf <= (int)local_e._2_2_ &&
            (((int)local_82 >> 0xf < (int)local_e._2_2_ || (local_82 < (undefined1 *)local_e))));
            local_82 = local_82 + 1) {
          local_18 = CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
          local_16 = CONCAT11(local_16._1_1_,*(undefined1 *)0xb310);
          if (local_82 == 1) {
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
          }
          else {
            FUN_28b3_0d8b();
            local_10 = (undefined2 *)0x22b2;
            local_12 = (undefined2 *)0xbea6;
            func_0x000299d1();
            local_10 = (undefined2 *)0x22b2;
            local_12 = (undefined2 *)0xbeae;
            func_0x000297e6();
            local_10 = (undefined2 *)0x22b2;
            local_12 = (undefined2 *)0xbeb3;
            func_0x00029d78();
            local_18 = 0x22b2;
            uStack_1a = 0xbebd;
            func_0x000299d1();
            local_18 = 0x22b2;
            uStack_1a = 0xbec2;
            func_0x0002a0c4();
            func_0x00029834();
            func_0x0002996b();
            func_0x00029b6d();
            local_e._2_2_ = (undefined1 *)0xbee7;
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            local_e._2_2_ = (undefined1 *)0xbf08;
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            local_e._2_2_ = (undefined1 *)0xbf29;
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            local_e._2_2_ = (undefined1 *)0xbf4a;
            func_0x00029bb5();
          }
          func_0x00029983();
          puVar7 = &local_1c;
          puVar9 = local_28;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            puVar14 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar1 = *puVar14;
          }
          local_20 = 0xbf64;
          iVar6 = FUN_17a6_0cba();
          if (0 < iVar6) {
            local_66 = (undefined2 *)((int)local_66 + 1);
          }
        }
      }
      puVar8 = (undefined1 *)0x885;
      func_0x0000abfa();
    }
  } while( true );
  local_2a = 0xffff;
  goto LAB_3ab8_039f;
}



/* 3ab8:14a1  FUN_3ab8_14a1  4922 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003d14c) */
/* WARNING: Removing unreachable block (ram,0x0003c449) */
/* WARNING: Removing unreachable block (ram,0x0003ca4b) */
/* WARNING: Removing unreachable block (ram,0x0003ca5b) */
/* WARNING: Removing unreachable block (ram,0x0003cae1) */
/* WARNING: Removing unreachable block (ram,0x0003ceba) */
/* WARNING: Removing unreachable block (ram,0x0003d162) */
/* WARNING: Removing unreachable block (ram,0x0003d1c6) */

void __cdecl16far FUN_3ab8_14a1(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int *piVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  long lVar15;
  undefined2 local_160;
  undefined2 local_15e;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined2 local_158;
  undefined2 local_152;
  undefined2 local_150;
  int local_14a;
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_12c [60];
  int local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  int local_a4;
  undefined2 *local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_84;
  undefined2 local_82;
  undefined1 local_80 [54];
  int local_4a;
  int local_48;
  undefined4 local_46;
  undefined2 local_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 *local_3a;
  int local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 uStack_2a;
  uint local_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int local_14;
  undefined4 uStack_12;
  undefined2 *puStack_e;
  undefined2 *local_c;
  undefined2 uVar16;
  
  uVar10 = 0x22b2;
  FUN_21f2_0ebc();
  local_42 = *(undefined2 *)0x9ef0;
  uStack_40 = *(undefined2 *)0x9ef2;
  uStack_3e = *(undefined2 *)0x9ef4;
  uStack_3c = *(undefined2 *)0x9ef6;
  local_3a = (undefined2 *)0x0;
LAB_3ab8_14bf:
  if (*(int *)0x105e == 0) {
    local_14a = 100 - *(int *)0x154;
  }
  else {
    local_14a = *(int *)0x146 - *(int *)0x152;
  }
  puStack_e = (undefined2 *)0xc078;
  local_c = (undefined2 *)uVar10;
  func_0x00024c86();
  local_c = (undefined2 *)0x4ce8;
  puStack_e = (undefined2 *)local_80;
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xc090;
  FUN_21f2_3454();
  local_c = (undefined2 *)0x22b2;
  uVar10 = 0x1bb4;
  puStack_e = (undefined2 *)0xc0a0;
  FUN_1def_07a4();
  if ((0 < (int)(((uint)local_3a ^ (int)local_3a >> 0xf) - ((int)local_3a >> 0xf))) &&
     (*(int *)0xc22 == 0)) {
    *(undefined2 *)0xc22 = 1;
    local_c = (undefined2 *)0x1bb4;
    puStack_e = (undefined2 *)0xc0ca;
    FUN_1000_0599();
    local_c = (undefined2 *)0xdef;
    puStack_e = (undefined2 *)0xc0d9;
    func_0x00012276();
    uVar10 = 0x11f2;
    local_c = (undefined2 *)0xc0e4;
    func_0x00012276();
  }
LAB_3ab8_1565:
  while (param_1 == 1) {
    puStack_e = (undefined2 *)0xc0fc;
    local_c = (undefined2 *)uVar10;
    func_0x00024c86();
    local_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xc10b;
    FUN_21f2_2d26();
    local_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xc11b;
    FUN_21f2_2d26();
    local_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xc12b;
    FUN_21f2_2d26();
    local_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xc13b;
    FUN_21f2_2d26();
    local_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xc14b;
    FUN_21f2_2d26();
    *(undefined2 *)0xc2c = 1;
    *(undefined2 *)0xc20 = 1;
    local_c = &local_15a;
    puStack_e = local_12c;
    uStack_12._2_2_ = local_3a;
    uStack_12._0_2_ = (undefined2 *)0x22b2;
    uVar10 = 0x1bb4;
    local_14 = -0x3e8e;
    local_4a = FUN_1def_0904();
    *(undefined2 *)0xc2c = 0;
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_4a == 1) goto LAB_3ab8_160f;
    if (local_4a == 0x14) {
      return;
    }
    if (local_4a == -1) {
      local_c = (undefined2 *)0xc1b1;
      func_0x0000daa6();
      local_9e = (undefined2 *)0x0;
      for (; 0 < (int)local_3a; local_3a = (undefined2 *)((int)local_3a + -1)) {
        local_15c = *(undefined2 *)0x154;
        local_c = (undefined2 *)0xc1c6;
        FUN_2bb4_4988();
      }
      for (; (int)local_3a < 0; local_3a = (undefined2 *)((int)local_3a + 1)) {
        local_15c = *(undefined2 *)0x152;
        local_c = (undefined2 *)0xc1df;
        FUN_1def_186d();
      }
      goto LAB_3ab8_1669;
    }
    if (local_9e != (undefined2 *)0x0) goto code_r0x0003c201;
  }
  goto LAB_3ab8_169e;
code_r0x0003c201:
  local_c = local_9e;
  puStack_e = (undefined2 *)0x1bb4;
  uVar10 = 0x11f2;
  uStack_12._2_2_ = (undefined2 *)0xc214;
  iVar5 = func_0x00015409();
  if (iVar5 != 0) goto LAB_3ab8_169e;
  goto LAB_3ab8_1565;
LAB_3ab8_169e:
  if ((param_1 != 2) && (param_1 != 3)) goto LAB_3ab8_180a;
  puStack_e = (undefined2 *)0xc23b;
  local_c = (undefined2 *)uVar10;
  func_0x00024c86();
  local_c = (undefined2 *)0x22b2;
  puStack_e = (undefined2 *)0xc24a;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  puStack_e = (undefined2 *)0xc25a;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  puStack_e = (undefined2 *)0xc26a;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  puStack_e = (undefined2 *)0xc27a;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  puStack_e = (undefined2 *)0xc28a;
  FUN_21f2_2d26();
  *(undefined2 *)0xc2c = 1;
  local_c = &local_15a;
  puStack_e = local_12c;
  uStack_12._2_2_ = local_3a;
  uStack_12._0_2_ = (undefined2 *)0x22b2;
  uVar10 = 0x1bb4;
  local_14 = -0x3d52;
  local_48 = FUN_1def_0904();
  *(undefined2 *)0xc2c = 0;
  if ((*(int *)0x158 != 0) || (local_48 == 0x14)) {
    return;
  }
  if (local_48 == 1) {
LAB_3ab8_160f:
    uVar10 = 0x1bb4;
    *(int *)0x105e = 1 - *(int *)0x105e;
  }
  else {
    if (local_48 != -1) goto LAB_3ab8_1799;
    local_c = (undefined2 *)0xc2de;
    func_0x0000daa6();
    local_9e = (undefined2 *)0x0;
    for (; 0 < (int)local_3a; local_3a = (undefined2 *)((int)local_3a + -1)) {
      local_15c = *(undefined2 *)0x154;
      local_c = (undefined2 *)0xc2f3;
      FUN_2bb4_4988();
    }
    for (; (int)local_3a < 0; local_3a = (undefined2 *)((int)local_3a + 1)) {
      local_15c = *(undefined2 *)0x152;
      local_c = (undefined2 *)0xc313;
      FUN_1def_186d();
    }
LAB_3ab8_1669:
    func_0x0000abfa();
    uVar10 = 0x885;
    local_c = (undefined2 *)0xc1f7;
    func_0x0000b1d8();
  }
  goto LAB_3ab8_14bf;
LAB_3ab8_1799:
  if (local_9e != (undefined2 *)0x0) {
    func_0x000297e6();
    func_0x00029d78();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xc33b;
    func_0x000299d1();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xc344;
    func_0x000297e6();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xc349;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc353;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc358;
    lVar15 = FUN_13bf_39a0();
    if (lVar15 < 0) {
      local_c = (undefined2 *)0x11f2;
      uVar10 = 0;
      puStack_e = (undefined2 *)0xc378;
      puVar14 = (undefined2 *)func_0x00000271();
      puVar8 = (undefined2 *)puVar14;
      puVar7 = &local_34;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar1 = *puVar2;
      }
LAB_3ab8_180a:
      if ((param_1 != 2) && (param_1 != 3)) goto LAB_3ab8_1909;
      puStack_e = (undefined2 *)0xc3a6;
      local_c = (undefined2 *)uVar10;
      func_0x00024c86();
      local_c = (undefined2 *)0x22b2;
      puStack_e = (undefined2 *)0xc3b6;
      FUN_21f2_2d26();
      local_c = (undefined2 *)0x22b2;
      puStack_e = (undefined2 *)0xc3c6;
      FUN_21f2_2d26();
      local_c = (undefined2 *)0x22b2;
      puStack_e = (undefined2 *)0xc3d6;
      FUN_21f2_2d26();
      local_c = (undefined2 *)0x22b2;
      puStack_e = (undefined2 *)0xc3e6;
      FUN_21f2_2d26();
      local_c = &local_15a;
      puStack_e = local_12c;
      *(undefined2 *)0xc20 = 1;
      uStack_12._2_2_ = (undefined2 *)0x1;
      uStack_12._0_2_ = (undefined2 *)0x22b2;
      uVar10 = 0x1bb4;
      local_14 = -0x3bf8;
      local_48 = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_48 != -1) {
        if (local_9e != (undefined2 *)0x0) {
          local_c = local_9e;
          puStack_e = (undefined2 *)0x1bb4;
          uVar10 = 0x11f2;
          uStack_12._2_2_ = (undefined2 *)0xc47f;
          iVar5 = func_0x00015409();
          if (iVar5 != 0) {
LAB_3ab8_1909:
            local_3a = (undefined2 *)0x0;
            local_aa = local_15a;
            local_a8 = local_158;
            local_13c = local_160;
            local_13a = local_15e;
LAB_3ab8_192e:
            do {
              puStack_e = (undefined2 *)0xc4bc;
              local_c = (undefined2 *)uVar10;
              func_0x00024c86();
              local_c = (undefined2 *)0x22b2;
              puStack_e = (undefined2 *)0xc4cc;
              FUN_21f2_2d26();
              local_c = (undefined2 *)0x22b2;
              puStack_e = (undefined2 *)0xc4dc;
              FUN_21f2_2d26();
              local_c = &local_15a;
              puStack_e = local_12c;
              *(undefined2 *)0xc20 = 1;
              uStack_12._2_2_ = (undefined2 *)0x1;
              uStack_12._0_2_ = (undefined2 *)0x22b2;
              uVar10 = 0x1bb4;
              local_14 = -0x3b02;
              local_48 = FUN_1def_0904();
              *(undefined2 *)0xc20 = 0;
              if (*(int *)0x158 != 0) {
                return;
              }
              if ((local_48 == -1) && (param_1 == 1)) goto LAB_3ab8_14bf;
              if ((local_48 == -1) && ((param_1 == 2 || (param_1 == 3)))) goto LAB_3ab8_180a;
              if (local_9e != (undefined2 *)0x0) {
                local_c = local_9e;
                puStack_e = (undefined2 *)0x1bb4;
                uVar10 = 0x11f2;
                uStack_12._2_2_ = (undefined2 *)0xc553;
                iVar5 = func_0x00015409();
                if (iVar5 == 0) {
                  local_9e = (undefined2 *)0x0;
                }
              }
            } while (local_9e == (undefined2 *)0x0);
            uVar11 = param_1 == 1;
            if ((bool)uVar11) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar11) {
                func_0x000297e6();
                func_0x000297e6();
                uVar10 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar11) goto LAB_3ab8_192e;
              }
            }
            local_134 = local_15a;
            local_132 = local_158;
            local_144 = local_160;
            local_142 = local_15e;
LAB_3ab8_1a43:
            FUN_28b3_0d8b();
            func_0x00029983();
            if (*(char *)0x4cb1 != '\0') {
              local_84 = *(undefined2 *)0x4cb2;
              local_82 = *(undefined2 *)0x4cb4;
            }
            local_94 = local_84;
            local_92 = local_82;
            local_c = (undefined2 *)0x22b2;
            puStack_e = (undefined2 *)0xc605;
            FUN_3ab8_0000();
            local_c = &local_160;
            puStack_e = &local_15a;
            uStack_12._2_2_ = &local_94;
            uStack_12._0_2_ = &local_84;
            local_14 = 0x22b2;
            uVar10 = 0xad;
            uStack_16 = 0xc634;
            local_c = (undefined2 *)func_0x000021a4();
            if (*(int *)0x158 != 0) {
              return;
            }
            if (local_c == (undefined2 *)0xffff) goto LAB_3ab8_192e;
            iVar5 = ((uint)local_c ^ (int)local_c >> 0xf) - ((int)local_c >> 0xf);
            if (((0x42 < iVar5) && (iVar5 < 0x50)) || (local_c == (undefined2 *)0x6200)) {
              if ((int)local_c < 1) {
                if (*(char *)0x4cb1 == '\0') {
                  *(undefined1 *)0x4cb1 = 4;
                }
                else {
                  *(char *)0x4cb1 = *(char *)0x4cb1 + -1;
                }
              }
              else {
                *(char *)0x4cb1 = *(char *)0x4cb1 + '\x01';
                if (4 < *(byte *)0x4cb1) {
                  *(undefined1 *)0x4cb1 = 0;
                }
              }
              goto LAB_3ab8_1a43;
            }
            uVar11 = 0;
            uVar12 = *(char *)0x4cb1 == '\0';
            if ((bool)uVar12) goto LAB_3ab8_1b1e;
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar11) goto LAB_3ab8_1a43;
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar11 || (bool)uVar12) goto LAB_3ab8_1a43;
            if (local_c == (undefined2 *)0x66) goto LAB_3ab8_1b5e;
            if (local_c != (undefined2 *)0x0) goto LAB_3ab8_1a43;
            *(undefined2 *)0x4cb2 = local_84;
            *(undefined2 *)0x4cb4 = local_82;
            goto LAB_3ab8_1b5e;
          }
        }
        goto LAB_3ab8_180a;
      }
    }
    else {
      local_c = (undefined2 *)0xc427;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      local_c = (undefined2 *)0x11f2;
      uVar10 = 0xdef;
      puStack_e = (undefined2 *)0xc43b;
      FUN_1000_0599();
      if (0 < lVar15) {
        uVar10 = 0x11f2;
        local_c = (undefined2 *)0xc459;
        func_0x00012276();
      }
    }
  }
  goto LAB_3ab8_169e;
LAB_3ab8_1b1e:
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)uVar11 && !(bool)uVar12) goto LAB_3ab8_1a43;
  func_0x000297e6();
  FUN_28b3_0d8b();
  FUN_28b3_1181();
  if ((bool)uVar11) goto LAB_3ab8_1a43;
  if (local_c != (undefined2 *)0x66) {
    if (local_c != (undefined2 *)0x0) goto LAB_3ab8_1a43;
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c74();
    uVar10 = FUN_28b3_0f51();
    *(undefined2 *)0x1060 = uVar10;
  }
LAB_3ab8_1b5e:
  uVar10 = 0x885;
  func_0x0000c3ca();
  if (param_1 == 1) {
    uVar11 = 0;
    if (*(char *)0x4cb1 == '\0') {
      lVar15 = (long)*(int *)0x1060;
      func_0x000298b4();
      func_0x00029983();
    }
    else {
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
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      uVar10 = 0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar11) goto LAB_3ab8_14bf;
      func_0x000297e6();
      func_0x00029d78();
      uStack_12._2_2_ = (undefined2 *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xc88f;
      func_0x000299d1();
      uStack_12._2_2_ = (undefined2 *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xc894;
      FUN_28b3_1582();
      func_0x00029834();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b9d();
      func_0x00029b9d();
      func_0x0002996b();
      FUN_28b3_0ee9();
      uVar11 = *(char *)0x4cb1 == '\0';
      uVar12 = *(char *)0x4cb1 == '\x01';
      if ((bool)uVar12) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c74();
        lVar15 = FUN_28b3_0f51();
        func_0x000298b4();
LAB_3ab8_1eb7:
        func_0x00029983();
      }
      else {
        func_0x000297e6();
        func_0x00029d78();
        lVar15 = FUN_28b3_0f51();
        uVar4 = (ulong)lVar15 >> 0x10;
        uVar6 = (uint)lVar15;
        func_0x000298b4();
        func_0x00029b55();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x00029834();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1181();
        if (!(bool)uVar11) {
          lVar15 = lVar15 + 1;
          uVar11 = CARRY2((uint)uVar4,(uint)(0xfffe < uVar6));
          uVar12 = (int)((ulong)lVar15 >> 0x10) == 0;
          func_0x000298b4();
          func_0x00029983();
        }
        func_0x00029834();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1181();
        if ((bool)uVar11 || (bool)uVar12) {
          func_0x000298b4();
          func_0x00029983();
        }
        uVar11 = *(byte *)0x4cb1 < 3;
        if (!(bool)uVar11) {
          func_0x000297e6();
          func_0x000298b4();
          FUN_28b3_1181();
          if ((bool)uVar11) {
            lVar15 = lVar15 + 1;
          }
        }
        if (*(byte *)0x4cb1 < 4) {
          func_0x000298b4();
          func_0x00029983();
        }
        if (3 < *(byte *)0x4cb1) {
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029b9d();
          func_0x00029b9d();
          goto LAB_3ab8_1eb7;
        }
      }
      if ((0x22b2 < lVar15) || (lVar15 < 2)) goto LAB_3ab8_1ee4;
    }
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029b85();
    func_0x00029983();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029b85();
    uVar10 = 0x22b2;
    func_0x00029983();
    for (local_b4 = 1; local_b4 < lVar15; local_b4 = local_b4 + 1) {
      func_0x000298b4();
      func_0x00029b6d();
      func_0x00029bb5();
      func_0x00029983();
      func_0x000298b4();
      func_0x00029b6d();
      func_0x00029bb5();
      func_0x00029983();
      if (*(char *)0x1cd != '\0') {
        *(uint *)0x1d0 = (uint)*(byte *)0x1cd;
      }
      if (*(int *)0x105e == 0) {
        func_0x000297e6();
        uVar16 = 0xcb73;
        func_0x00029d78();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xcb7d;
        func_0x000299d1();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xcb86;
        func_0x000297e6();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xcb8b;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uVar10 = 0x22b2;
        uStack_1a = 0xcb95;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0xcb99;
        iVar5 = func_0x00030353();
        if (iVar5 != 0) {
          local_3a = (undefined2 *)((int)local_3a + 1);
        }
      }
      else {
        func_0x000297e6();
        uVar16 = 0xca97;
        func_0x00029d78();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xcaa1;
        func_0x000299d1();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xcaaa;
        func_0x000297e6();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xcaaf;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xcab9;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uVar10 = 0x1bb4;
        uStack_1a = 0xcabe;
        iVar5 = FUN_1def_1208();
        if (iVar5 != 0) {
          local_3a = (undefined2 *)((int)local_3a + -1);
        }
      }
      *(undefined2 *)0x1d0 = uVar16;
    }
  }
  if ((param_1 != 2) && (param_1 != 3)) goto LAB_3ab8_14bf;
  func_0x00029da5();
  func_0x00029c2c();
  func_0x000299b9();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcbf6;
  func_0x000299d1();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcbfb;
  func_0x0002a11e();
  func_0x00029834();
  func_0x00029983();
  func_0x00029834();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcc21;
  func_0x000299d1();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcc26;
  func_0x0002a10c();
  func_0x00029834();
  func_0x00029983();
  *(undefined2 *)0xb30c = local_34;
  *(undefined2 *)0xb30e = local_32;
  *(undefined2 *)0xb37e = local_30;
  *(undefined2 *)0xb380 = local_2e;
  func_0x000297e6();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcc66;
  func_0x000299d1();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcc6f;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xcc79;
  func_0x000299d1();
  uStack_18 = 1;
  uStack_1a = 0x22b2;
  local_1c = 0xcc82;
  puVar7 = (undefined2 *)FUN_1def_05d1();
  local_138 = *puVar7;
  local_136 = puVar7[1];
  func_0x000297e6();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcca7;
  func_0x000299d1();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xccb0;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xccba;
  func_0x000299d1();
  uStack_18 = 1;
  uStack_1a = 0x22b2;
  local_1c = 0xccc3;
  func_0x0001e558();
  func_0x000297e6();
  func_0x00029da5();
  FUN_28b3_1172();
  func_0x00029b6d();
  func_0x0002996b();
  func_0x00029d78();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcd11;
  func_0x000299d1();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcd1a;
  func_0x000297e6();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcd1f;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xcd29;
  func_0x000299d1();
  uStack_18 = *(undefined2 *)0x9efe;
  uStack_1a = *(undefined2 *)0x9efc;
  local_1c = *(undefined2 *)0x9efa;
  local_1e = *(undefined2 *)0x9ef8;
  uStack_20 = *(undefined2 *)0x9efe;
  uStack_22 = *(undefined2 *)0x9efc;
  uStack_24 = *(undefined2 *)0x9efa;
  uStack_26 = *(undefined2 *)0x9ef8;
  local_28 = 0x22b2;
  uStack_2a = 0xcd4e;
  uVar13 = FUN_1000_0718();
  local_36 = (int)((ulong)uVar13 >> 0x10);
  func_0x000297e6();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcd6a;
  func_0x000299d1();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcd73;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xcd7d;
  func_0x000299d1();
  uStack_18 = 1;
  uStack_1a = 0x22b2;
  local_1c = 0xcd86;
  puVar7 = (undefined2 *)FUN_1def_05d1();
  local_140 = *puVar7;
  local_13e = puVar7[1];
  func_0x000297e6();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcdab;
  func_0x000299d1();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xcdb4;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xcdbe;
  func_0x000299d1();
  uStack_18 = 1;
  uStack_1a = 0x22b2;
  local_1c = 0xcdc7;
  func_0x0001e558();
  func_0x000297e6();
  func_0x00029da5();
  FUN_28b3_1172();
  func_0x00029b6d();
  func_0x0002996b();
  func_0x00029d78();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xce15;
  func_0x000299d1();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xce1e;
  func_0x000297e6();
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xce23;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xce2d;
  func_0x000299d1();
  uStack_18 = *(undefined2 *)0x9efe;
  uStack_1a = *(undefined2 *)0x9efc;
  local_1c = *(undefined2 *)0x9efa;
  local_1e = *(undefined2 *)0x9ef8;
  uStack_20 = *(undefined2 *)0x9efe;
  uStack_22 = *(undefined2 *)0x9efc;
  uStack_24 = *(undefined2 *)0x9efa;
  uStack_26 = *(undefined2 *)0x9ef8;
  local_28 = 0x22b2;
  uVar10 = 0xdef;
  uStack_2a = 0xce52;
  puVar14 = (undefined2 *)FUN_1000_0718();
  local_46 = puVar14;
  if ((param_1 == 3) && ((0x2711 < local_28 || (local_28 < 9999)))) {
    local_c = (undefined2 *)*(undefined2 *)0x1060;
    puStack_e = (undefined2 *)CONCAT11((char)((ulong)puVar14 >> 8),*(undefined1 *)0x4cb1);
    uStack_12 = puVar14;
    local_14 = local_36;
    uStack_16 = (int)uVar13;
    piVar9 = &local_36;
    puVar7 = &local_34;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = piVar9;
      piVar9 = piVar9 + 1;
      puVar14 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar14;
    }
    pcVar3 = (code *)swi(0x3f);
    local_3a = (undefined2 *)(*pcVar3)();
    goto LAB_3ab8_14bf;
  }
  lVar15 = (long)puVar14 - CONCAT22(local_36,(int)uVar13);
  local_a6 = (undefined2)lVar15;
  local_a4 = (int)((ulong)lVar15 >> 0x10);
  if (lVar15 < 1) {
    local_a4 = local_a4 + 0x168;
  }
  uVar11 = 0;
  if (*(char *)0x4cb1 == '\0') {
    lVar15 = (long)*(int *)0x1060;
    func_0x000298b4();
    func_0x00029983();
    goto LAB_3ab8_236f;
  }
  func_0x000298b4();
  func_0x00029b6d();
  func_0x00029d78();
  func_0x00029c2c();
  func_0x0002996b();
  func_0x00029ae7();
  func_0x0002996b();
  func_0x00029983();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  uVar10 = 0x22b2;
  FUN_28b3_1181();
  if ((bool)uVar11) goto LAB_3ab8_14bf;
  local_152 = local_84;
  local_150 = local_82;
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029b9d();
  local_c = (undefined2 *)0xcfd4;
  func_0x00029b9d();
  func_0x00029983();
  uVar11 = *(char *)0x4cb1 == '\0';
  uVar12 = *(char *)0x4cb1 == '\x01';
  if ((bool)uVar12) {
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c74();
    lVar15 = FUN_28b3_0f51();
    func_0x000298b4();
LAB_3ab8_25b5:
    func_0x00029983();
  }
  else {
    func_0x000297e6();
    func_0x00029d78();
    lVar15 = FUN_28b3_0f51();
    uVar4 = (ulong)lVar15 >> 0x10;
    uVar6 = (uint)lVar15;
    func_0x000298b4();
    func_0x00029b55();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar11) {
      lVar15 = lVar15 + 1;
      uVar11 = CARRY2((uint)uVar4,(uint)(0xfffe < uVar6));
      uVar12 = (int)((ulong)lVar15 >> 0x10) == 0;
      func_0x000298b4();
      func_0x00029983();
    }
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar11 || (bool)uVar12) {
      func_0x000298b4();
      func_0x00029983();
    }
    uVar11 = *(byte *)0x4cb1 < 3;
    if (!(bool)uVar11) {
      func_0x000297e6();
      func_0x000298b4();
      FUN_28b3_1181();
      if ((bool)uVar11) {
        lVar15 = lVar15 + 1;
      }
    }
    if (*(byte *)0x4cb1 < 4) {
      func_0x000298b4();
      func_0x00029983();
    }
    if (3 < *(byte *)0x4cb1) {
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b9d();
      func_0x00029b9d();
      goto LAB_3ab8_25b5;
    }
  }
  if ((0x22b2 < lVar15) || (lVar15 < 2)) {
LAB_3ab8_1ee4:
    *(undefined2 *)0xc22 = 1;
    local_c = (undefined2 *)0x2;
    puStack_e = (undefined2 *)0x14;
    uStack_12._2_2_ = (undefined2 *)0x396;
    uStack_12._0_2_ = (undefined2 *)0x22b2;
    local_14 = -0x357d;
    FUN_1000_02b5();
    goto LAB_3ab8_1a43;
  }
LAB_3ab8_236f:
  func_0x000298b4();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x000298b4();
  func_0x0002996b();
  func_0x00029b85();
  func_0x00029d78();
  func_0x00029c2c();
  uVar10 = 0x22b2;
  func_0x000299d1();
  for (local_b4 = 1; local_b4 < lVar15; local_b4 = local_b4 + 1) {
    func_0x000298b4();
    func_0x00029c2c();
    func_0x00029c74();
    func_0x000299b9();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xd203;
    func_0x000299d1();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xd208;
    func_0x0002a11e();
    func_0x00029834();
    func_0x00029b6d();
    func_0x00029983();
    func_0x00029834();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xd236;
    func_0x000299d1();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xd23b;
    func_0x0002a10c();
    func_0x00029834();
    func_0x00029da5();
    func_0x00029c9d();
    func_0x00029b6d();
    func_0x00029c2c();
    func_0x0002996b();
    func_0x00029d78();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xd291;
    func_0x000299d1();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xd29a;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd2a4;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    local_1c = 0xd2ac;
    puVar7 = (undefined2 *)FUN_1def_05d1();
    local_9c = *puVar7;
    local_9a = puVar7[1];
    func_0x000297e6();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xd2d1;
    func_0x000299d1();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xd2da;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd2e4;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    local_1c = 0xd2ec;
    puVar7 = (undefined2 *)func_0x0001e558();
    local_b2 = *puVar7;
    local_b0 = puVar7[1];
    if (*(char *)0x1cd != '\0') {
      *(uint *)0x1d0 = (uint)*(byte *)0x1cd;
    }
    if (*(int *)0x105e == 0) {
      func_0x000297e6();
      uVar16 = 0xd32b;
      func_0x00029d78();
      uStack_12._2_2_ = (undefined2 *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xd335;
      func_0x000299d1();
      uStack_12._2_2_ = (undefined2 *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xd33e;
      func_0x000297e6();
      uStack_12._2_2_ = (undefined2 *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xd343;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uVar10 = 0x22b2;
      uStack_1a = 0xd34d;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd351;
      iVar5 = func_0x00030353();
      if (iVar5 != 0) {
        local_3a = (undefined2 *)((int)local_3a + 1);
      }
    }
    else {
      func_0x000297e6();
      uVar16 = 0xd17c;
      func_0x00029d78();
      uStack_12._2_2_ = (undefined2 *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xd186;
      func_0x000299d1();
      uStack_12._2_2_ = (undefined2 *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xd18f;
      func_0x000297e6();
      uStack_12._2_2_ = (undefined2 *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xd194;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd19e;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uVar10 = 0x1bb4;
      uStack_1a = 0xd1a3;
      iVar5 = FUN_1def_1208();
      if (iVar5 != 0) {
        local_3a = (undefined2 *)((int)local_3a + -1);
      }
    }
    *(undefined2 *)0x1d0 = uVar16;
  }
  goto LAB_3ab8_14bf;
}



/* 3ab8:27e7  FUN_3ab8_27e7  2389 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_27e7(void)

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
  undefined1 uVar9;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined1 local_62 [12];
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_50;
  undefined1 local_4e [20];
  undefined2 local_3a;
  undefined2 uStack_38;
  undefined2 auStack_36 [6];
  undefined2 local_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 auStack_20 [2];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined1 auStack_e [2];
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined2 *puStack_8;
  
  FUN_21f2_0ebc();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xd37c;
  func_0x000297e6();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xd381;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  local_12 = 0xd38b;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xd393;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  local_12 = 0xd398;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xd3a2;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0xd3aa;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xd3af;
  func_0x00029d78();
  auStack_20[0] = 0x22b2;
  func_0x000299d1();
  auStack_20[0] = 0x22b2;
  func_0x000297e6();
  auStack_20[0] = 0x22b2;
  func_0x00029d78();
  uStack_28 = 0x22b2;
  local_2a = 0xd3d0;
  func_0x000299d1();
  uStack_28 = 0x22b2;
  local_2a = 0xd3d5;
  iVar3 = FUN_1def_043a();
  if (iVar3 == 0) {
    return 0;
  }
  puStack_8 = (undefined2 *)0x1bb4;
  puStack_a = (undefined1 *)0xd3e9;
  func_0x000297e6();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xd3ee;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  local_12 = 0xd3f8;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xd400;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  local_12 = 0xd405;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xd40f;
  func_0x000299d1();
  uStack_18 = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0xd418;
  func_0x0001e558();
  puStack_8 = (undefined2 *)0x1bb4;
  puStack_a = (undefined1 *)0xd422;
  func_0x000297e6();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xd427;
  func_0x00029d78();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xd42f;
  func_0x000299d1();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xd437;
  func_0x000297e6();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xd43c;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  local_12 = 0xd446;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xd44e;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  local_12 = 0xd453;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xd45d;
  func_0x000299d1();
  uStack_18 = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0xd466;
  func_0x0001e558();
  puStack_8 = (undefined2 *)0x1bb4;
  puStack_a = (undefined1 *)0xd470;
  func_0x000297e6();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xd475;
  func_0x00029d78();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xd47d;
  func_0x000299d1();
  puStack_8 = (undefined2 *)local_62;
  puStack_a = local_4e;
  puVar5 = auStack_20;
  puVar4 = (undefined2 *)&stack0x003a;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = auStack_36;
  puVar4 = (undefined2 *)&stack0x0024;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_38 = 0x22b2;
  uVar6 = 0x1bb4;
  local_3a = 0xd4a6;
  iVar3 = FUN_1def_1921();
  uVar7 = 0;
  uVar9 = iVar3 == 0;
  uVar8 = uVar7;
  if ((bool)uVar9) {
LAB_3ab8_2955:
    puStack_a = (undefined1 *)0xd4de;
    puStack_8 = (undefined2 *)uVar6;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd4e6;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd4eb;
    func_0x00029ae7();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd4f0;
    FUN_28b3_1181();
    if (!(bool)uVar8 && !(bool)uVar9) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd4fd;
      func_0x00029834();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd506;
      func_0x00029c2c();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd50e;
      func_0x0002996b();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd513;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      local_12 = 0xd51d;
      func_0x000299d1();
      uStack_10 = *(undefined2 *)0x9efe;
      local_12 = *(undefined2 *)0x9efc;
      uStack_14 = *(undefined2 *)0x9efa;
      uStack_16 = *(undefined2 *)0x9ef8;
      uStack_18 = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd535;
      FUN_1def_05d1();
      puStack_8 = (undefined2 *)0x1bb4;
      puStack_a = (undefined1 *)0xd53f;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd544;
      func_0x00029d78();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd54c;
      func_0x000299d1();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd554;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd559;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      local_12 = 0xd563;
      func_0x000299d1();
      uStack_10 = *(undefined2 *)0x9efe;
      local_12 = *(undefined2 *)0x9efc;
      uStack_14 = *(undefined2 *)0x9efa;
      uStack_16 = *(undefined2 *)0x9ef8;
      uStack_18 = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd57b;
      func_0x0001e558();
      puStack_8 = (undefined2 *)0x1bb4;
      puStack_a = (undefined1 *)0xd585;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd58a;
      func_0x00029d78();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd592;
      func_0x000299d1();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd59a;
      func_0x00029834();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd5a3;
      func_0x00029983();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd5ab;
      func_0x00029834();
      goto LAB_3ab8_312a;
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd5b7;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd5bc;
    func_0x00029d78();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd5c4;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd5cd;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd5d2;
    func_0x00029af6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd5db;
    func_0x00029983();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd5e3;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd5ec;
    func_0x00029983();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd5f4;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd5f9;
    func_0x00029d78();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd601;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd609;
    FUN_28b3_0ee9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd611;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd616;
    func_0x00029d78();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd61e;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd626;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd62b;
    func_0x00029d78();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd633;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd63b;
    FUN_28b3_0ee9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd643;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd648;
    func_0x00029d78();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd650;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd658;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd660;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd665;
    FUN_28b3_1181();
    if ((bool)uVar8) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd66f;
      func_0x00029834();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd677;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd67f;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd687;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd68c;
    FUN_28b3_1181();
    if ((bool)uVar8) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd696;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd69e;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd6a6;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd6ae;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd6b3;
    FUN_28b3_1181();
    if ((bool)uVar8) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd6bd;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd6c5;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd6cd;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd6d5;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd6da;
    FUN_28b3_1181();
    if ((bool)uVar8) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd6e4;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd6ec;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd6f4;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd6fc;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd701;
    FUN_28b3_1181();
    if ((bool)uVar8) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd70b;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd713;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd71b;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd723;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd728;
    FUN_28b3_1181();
    if ((bool)uVar8) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd732;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd73a;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd742;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd74a;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd74f;
    FUN_28b3_1181();
    if (!(bool)uVar8 && !(bool)uVar9) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd759;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd761;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd769;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd771;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd776;
    FUN_28b3_1181();
    if (!(bool)uVar8 && !(bool)uVar9) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd780;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd788;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd790;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd798;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd79d;
    FUN_28b3_1181();
    if (!(bool)uVar8 && !(bool)uVar9) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd7a7;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd7af;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd7b7;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd7bf;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd7c4;
    FUN_28b3_1181();
    if (!(bool)uVar8 && !(bool)uVar9) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd7ce;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd7d6;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd7de;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd7e6;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd7eb;
    FUN_28b3_1181();
    if (!(bool)uVar8 && !(bool)uVar9) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd7f5;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd7fd;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd805;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd80d;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd812;
    FUN_28b3_1181();
    if (!(bool)uVar8 && !(bool)uVar9) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd81f;
      func_0x000297e6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd827;
      func_0x000299d1();
    }
  }
  else {
    puStack_8 = (undefined2 *)0x1bb4;
    puStack_a = (undefined1 *)0xd4b6;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd4be;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd4c6;
    func_0x00029bfc();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd4cb;
    func_0x00029ae7();
    puStack_8 = (undefined2 *)0x22b2;
    uVar6 = 0x22b2;
    puStack_a = (undefined1 *)0xd4d0;
    FUN_28b3_1181();
    uVar8 = 1;
    if ((bool)uVar7) goto LAB_3ab8_2955;
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd832;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd83a;
    FUN_28b3_100d();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd83f;
    func_0x00029d78();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd847;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd84f;
    FUN_28b3_0ee9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd857;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd85f;
    FUN_28b3_100d();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd864;
    func_0x00029d78();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd86c;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd874;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd87c;
    func_0x00029c2c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd884;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd88c;
    func_0x00029c2c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd891;
    FUN_28b3_117c();
    uStack_10 = 0x22b2;
    local_12 = 0xd89b;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xd8a0;
    FUN_28b3_1582();
    uVar8 = (undefined1 *)0xfff7 < auStack_e;
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd8aa;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd8b2;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd8b7;
    FUN_28b3_1172();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd8c0;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd8c8;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd8d0;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd8d8;
    func_0x00029c44();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd8e1;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd8e9;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd8f1;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd8f9;
    FUN_28b3_100d();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd902;
    func_0x00029c2c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd90a;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd912;
    FUN_28b3_100d();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd91b;
    func_0x00029c2c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd920;
    FUN_28b3_117c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd929;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd931;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd93a;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd943;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd948;
    FUN_28b3_1181();
    if ((bool)uVar8) {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd96a;
      func_0x00029834();
      puStack_8 = &local_12;
      puStack_a = (undefined1 *)0x22b2;
      uStack_c = 0xd973;
      FUN_28b3_10e4();
    }
    else {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd953;
      func_0x00029834();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xd95c;
      func_0x00029c74();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd979;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd981;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd989;
    func_0x00029c2c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd991;
    func_0x00029bb5();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd999;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd9a1;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd9a9;
    func_0x00029c2c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd9b1;
    func_0x00029bb5();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd9b9;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd9c1;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xd9c6;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    local_12 = 0xd9d0;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xd9d8;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    local_12 = 0xd9dd;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd9e7;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd9ef;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd9f4;
    func_0x00029d78();
    auStack_20[0] = 0x22b2;
    func_0x000299d1();
    auStack_20[0] = 0x22b2;
    func_0x000297e6();
    auStack_20[0] = 0x22b2;
    func_0x00029d78();
    uStack_28 = 0x22b2;
    local_2a = 0xda15;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    local_2a = 0xda1a;
    iVar3 = FUN_1def_043a();
    if (iVar3 == 0) {
      return 0;
    }
    puStack_8 = (undefined2 *)0x1bb4;
    puStack_a = (undefined1 *)0xda2c;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda34;
    FUN_28b3_100d();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda39;
    func_0x00029d78();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda42;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda4a;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda52;
    FUN_28b3_100d();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda57;
    func_0x00029d78();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda5f;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda67;
    func_0x00029c2c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda70;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda79;
    func_0x00029c2c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda7e;
    FUN_28b3_117c();
    uStack_10 = 0x22b2;
    local_12 = 0xda88;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xda8d;
    FUN_28b3_1582();
    uVar8 = (undefined1 *)0xfff7 < auStack_e;
    uVar7 = &stack0x0000 == (undefined1 *)0x6;
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda97;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xda9f;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdaa4;
    FUN_28b3_1172();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdaad;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdab5;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdabd;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdac5;
    func_0x00029c44();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdace;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdad6;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdade;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdae6;
    FUN_28b3_100d();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdaef;
    func_0x00029c2c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdaf7;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdaff;
    FUN_28b3_100d();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdb08;
    func_0x00029c2c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdb0d;
    FUN_28b3_117c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdb16;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdb1e;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdb27;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdb30;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdb35;
    FUN_28b3_1181();
    if ((bool)uVar8) {
LAB_3ab8_2fcf:
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xdb57;
      func_0x00029834();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xdb60;
      func_0x00029834();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xdb65;
      FUN_28b3_1181();
      if (!(bool)uVar8 && !(bool)uVar7) {
        puStack_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined1 *)0xdb70;
        func_0x00029834();
        puStack_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined1 *)0xdb78;
        func_0x00029834();
        puStack_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined1 *)0xdb7d;
        FUN_28b3_1181();
        if (!(bool)uVar8 && !(bool)uVar7) goto LAB_3ab8_2fff;
      }
    }
    else {
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xdb40;
      func_0x00029834();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xdb48;
      func_0x00029834();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xdb4d;
      FUN_28b3_1181();
      if (!(bool)uVar8) goto LAB_3ab8_2fcf;
LAB_3ab8_2fff:
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xdb87;
      func_0x00029834();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xdb8c;
      func_0x00029af6();
      puStack_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined1 *)0xdb94;
      func_0x000299d1();
    }
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdb9c;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdba4;
    func_0x00029c2c();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdbac;
    func_0x00029bb5();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdbb5;
    func_0x000299b9();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdbbd;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdbc6;
    func_0x00029834();
    uStack_10 = 0x22b2;
    local_12 = 0xdbd0;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xdbd8;
    func_0x00029834();
    uStack_10 = 0x22b2;
    local_12 = 0xdbe0;
    func_0x00029c2c();
    uStack_10 = 0x22b2;
    local_12 = 0xdbe8;
    func_0x00029bb5();
    uStack_10 = 0x22b2;
    local_12 = 0xdbf0;
    func_0x000299b9();
    uStack_18 = 0x22b2;
    uStack_1a = 0xdbfa;
    func_0x000299d1();
    uStack_18 = local_6c;
    uStack_1a = local_6e;
    uStack_1c = local_70;
    auStack_20[0] = local_50;
    uStack_24 = local_54;
    uStack_26 = local_56;
    uStack_28 = 0x22b2;
    local_2a = 0xdc17;
    iVar3 = FUN_1def_043a();
    if (iVar3 == 0) {
      return 0;
    }
    puStack_8 = (undefined2 *)0x1bb4;
    puStack_a = (undefined1 *)0xdc2a;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdc2f;
    func_0x00029d78();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdc37;
    func_0x000299d1();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdc40;
    func_0x000297e6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdc45;
    func_0x00029af6();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdc4e;
    func_0x00029983();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdc56;
    func_0x00029834();
    puStack_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined1 *)0xdc5f;
    func_0x00029983();
  }
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xdc67;
  func_0x00029834();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xdc6f;
  func_0x00029bfc();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xdc78;
  func_0x00029c2c();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xdc80;
  func_0x00029c74();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xdc89;
  func_0x00029983();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xdc91;
  func_0x00029834();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xdc99;
  func_0x00029bfc();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xdca2;
  func_0x00029c2c();
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xdcaa;
  func_0x00029c74();
LAB_3ab8_312a:
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined1 *)0xdcb3;
  func_0x00029983();
  return 1;
}



/* 3ab8:313c  FUN_3ab8_313c  3575 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003dde9) */
/* WARNING: Removing unreachable block (ram,0x0003df31) */

void __cdecl16far FUN_3ab8_313c(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined2 **ppuVar4;
  int iVar5;
  undefined2 unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_DI;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 *unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  long lVar12;
  undefined2 *puVar13;
  undefined2 *local_1e6;
  undefined2 *local_1e4;
  undefined2 local_1e2;
  undefined2 local_1e0;
  undefined2 local_1de;
  undefined2 local_1dc;
  undefined2 local_1da;
  undefined2 local_1d8;
  undefined2 local_1d6;
  undefined2 local_1d4;
  undefined2 *local_1d2;
  undefined2 *local_1d0;
  int local_1ce;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined2 local_1c8;
  undefined2 local_1c6;
  undefined2 local_19c;
  undefined2 local_19a;
  undefined2 *local_194;
  undefined2 *local_192;
  int local_190;
  int local_18e;
  undefined2 local_188;
  undefined2 local_186;
  undefined1 *local_17c;
  undefined2 **local_17a;
  undefined1 local_174 [120];
  int local_fc;
  undefined2 local_e6;
  undefined2 local_e4;
  undefined2 *local_e2;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  int local_d4;
  undefined2 *local_aa;
  undefined2 local_a8 [31];
  undefined2 local_6a [10];
  undefined2 uStack_56;
  undefined2 local_54;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_36;
  undefined2 *puStack_34;
  undefined2 auStack_32 [3];
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined1 local_16 [2];
  undefined2 local_14;
  undefined2 *local_12;
  undefined2 *local_10;
  undefined1 *local_e;
  undefined2 *local_c;
  
  FUN_21f2_0ebc();
  local_aa = (undefined2 *)0x0;
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xdcdc;
  func_0x00024c86();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xdcec;
  func_0x00024c86();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xdcfc;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xdd0c;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xdd1c;
  func_0x00024c86();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xdd2c;
  func_0x00024c86();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xdd3c;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xdd4c;
  FUN_21f2_2d26();
  uVar10 = 0x22b2;
LAB_3ab8_3e61:
  local_e = (undefined1 *)0xe9ef;
  local_c = (undefined2 *)uVar10;
  func_0x00024c86();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xe9ff;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xea0f;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xea1f;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xea30;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xea40;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xea51;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xea61;
  FUN_21f2_2d26();
  local_c = (undefined2 *)0x22b2;
  local_e = (undefined1 *)0xea72;
  FUN_21f2_2d26();
  *(undefined2 *)0xc20 = 1;
  local_c = &local_1e2;
  local_e = local_174;
  local_10 = local_aa;
  local_12 = (undefined2 *)0x22b2;
  uVar10 = 0x1bb4;
  local_14 = 0xea96;
  local_1ce = FUN_1def_0904();
  *(undefined2 *)0xc20 = 0;
  if (*(int *)0x158 != 0) {
    return;
  }
  if ((local_1ce == -1) && (0 < (int)local_aa)) {
    local_c = (undefined2 *)0xdd65;
    func_0x0000daa6();
    local_1de = *(undefined2 *)0x148;
    local_1dc = *(undefined2 *)0x14a;
    local_c = (undefined2 *)0x885;
    local_e = (undefined1 *)0xdd7c;
    func_0x00018779();
    local_c = (undefined2 *)0xdd87;
    func_0x0000b1d8();
    uVar10 = 0x885;
    func_0x0000abfa();
    local_aa = (undefined2 *)0x0;
    local_fc = 0;
  }
  if (local_fc != 1) goto LAB_3ab8_3331;
  func_0x000297e6();
  func_0x00029d78();
  local_10 = (undefined2 *)0x22b2;
  local_12 = (undefined2 *)0xddb8;
  func_0x000299d1();
  local_10 = (undefined2 *)0x22b2;
  local_12 = (undefined2 *)0xddc1;
  func_0x000297e6();
  local_10 = (undefined2 *)0x22b2;
  local_12 = (undefined2 *)0xddc6;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  local_1a = 0xddd0;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uVar10 = 0x11f2;
  local_1a = 0xddd5;
  lVar12 = FUN_13bf_39a0();
  if (lVar12 < 1) goto LAB_3ab8_3331;
  goto LAB_3ab8_3270;
LAB_3ab8_3331:
  if (local_fc == 2) {
    local_c = (undefined2 *)local_fc;
    local_10 = (undefined2 *)0xdecd;
    local_e = (undefined1 *)uVar10;
    iVar5 = func_0x00015409();
    uVar10 = 0x11f2;
    if (iVar5 != 0) {
LAB_3ab8_3270:
      local_aa = (undefined2 *)0x0;
      uVar10 = 0x11f2;
LAB_3ab8_3276:
      do {
        *(undefined2 *)0xc20 = 1;
        local_e = (undefined1 *)0xde0a;
        local_c = (undefined2 *)uVar10;
        func_0x00024c86();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined1 *)0xde1a;
        FUN_21f2_2d26();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined1 *)0xde2a;
        FUN_21f2_2d26();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined1 *)0xde3b;
        FUN_21f2_2d26();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined1 *)0xde4b;
        FUN_21f2_2d26();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined1 *)0xde5c;
        FUN_21f2_2d26();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined1 *)0xde6c;
        FUN_21f2_2d26();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined1 *)0xde7d;
        FUN_21f2_2d26();
        local_c = (undefined2 *)&stack0xfffa;
        local_e = local_174;
        local_10 = (undefined2 *)0x1;
        local_12 = (undefined2 *)0x22b2;
        uVar10 = 0x1bb4;
        local_14 = 0xde9a;
        local_d4 = FUN_1def_0904();
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) {
          return;
        }
        if (local_d4 == -1) break;
        if (local_190 == 1) {
          func_0x000297e6();
          func_0x00029d78();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xdf03;
          func_0x000299d1();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xdf0b;
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xdf10;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xdf1a;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          uVar10 = 0x11f2;
          local_1a = 0xdf1f;
          lVar12 = FUN_13bf_39a0();
          puVar3 = (undefined1 *)0xdef9;
          ppuVar4 = (undefined2 **)0x22b2;
          if (lVar12 < 1) goto LAB_3ab8_345f;
        }
        else {
LAB_3ab8_345f:
          if (local_190 != 2) goto LAB_3ab8_3276;
          local_c = (undefined2 *)local_190;
          local_10 = (undefined2 *)0xdffa;
          local_e = (undefined1 *)uVar10;
          iVar5 = func_0x00015409();
          uVar10 = 0x11f2;
          puVar3 = &stack0xfffa;
          ppuVar4 = &local_12;
          if (iVar5 == 0) goto LAB_3ab8_3276;
        }
        local_17a = ppuVar4;
        local_17c = puVar3;
        uVar10 = 0x11f2;
        local_e6 = local_1e2;
        local_e4 = local_1e0;
        local_aa = (undefined2 *)0x0;
        local_194 = local_12;
        local_192 = local_10;
LAB_3ab8_33f8:
        do {
          do {
            local_e = (undefined1 *)0xdf86;
            local_c = (undefined2 *)uVar10;
            func_0x00024c86();
            local_c = (undefined2 *)0x22b2;
            local_e = (undefined1 *)0xdf96;
            FUN_21f2_2d26();
            local_c = (undefined2 *)0x22b2;
            local_e = (undefined1 *)0xdfa6;
            FUN_21f2_2d26();
            local_c = &local_1da;
            local_e = local_174;
            *(undefined2 *)0xc20 = 1;
            local_10 = (undefined2 *)0x1;
            local_12 = (undefined2 *)0x22b2;
            uVar10 = 0x1bb4;
            local_14 = 0xdfc8;
            local_d4 = FUN_1def_0904();
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) {
              return;
            }
            if (local_d4 == -1) goto LAB_3ab8_3276;
          } while (local_e2 == (undefined2 *)0x0);
          local_c = local_e2;
          local_e = (undefined1 *)0x1bb4;
          uVar10 = 0x11f2;
          local_10 = (undefined2 *)0xe02c;
          iVar5 = func_0x00015409();
        } while (iVar5 == 0);
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        puVar7 = (undefined2 *)0x22b2;
        func_0x00029983();
        puVar9 = (undefined2 *)0xe07d;
        if (local_fc == 1) {
          local_c = (undefined2 *)0x22b2;
          puVar7 = (undefined2 *)0x0;
          local_e = (undefined1 *)0xe091;
          puVar13 = (undefined2 *)func_0x0000013f();
          puVar6 = (undefined2 *)puVar13;
          puVar8 = local_6a;
          for (iVar5 = 0xb; puVar9 = unaff_SS, iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
        }
        puVar8 = puVar7;
        if (local_190 == 1) {
          puVar8 = (undefined2 *)0x0;
          local_e = (undefined1 *)0xe0b5;
          local_c = puVar7;
          puVar13 = (undefined2 *)func_0x0000013f();
          puVar6 = (undefined2 *)puVar13;
          puVar7 = local_a8;
          for (iVar5 = 0xb; puVar9 = unaff_SS, iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
        }
        if ((local_fc == 1) && (local_190 == 1)) {
          puVar7 = &local_1c;
          puVar9 = local_a8;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar1 = *puVar13;
          }
          puVar7 = auStack_32;
          puVar9 = local_6a;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar1 = *puVar13;
          }
          uStack_36 = 0xe101;
          puStack_34 = puVar8;
          func_0x000297e6();
          puStack_34 = (undefined2 *)0x22b2;
          uStack_36 = 0xe106;
          func_0x00029d78();
          uStack_3c = 0x22b2;
          uStack_3e = 0xe110;
          func_0x000299d1();
          uStack_3c = 0x22b2;
          uStack_3e = 0xe118;
          func_0x000297e6();
          uStack_3c = 0x22b2;
          uStack_3e = 0xe11d;
          func_0x00029d78();
          uStack_44 = 0x22b2;
          uStack_46 = 0xe127;
          func_0x000299d1();
          uStack_44 = 0x22b2;
          uStack_46 = 0xe12f;
          func_0x000297e6();
          uStack_44 = 0x22b2;
          uStack_46 = 0xe134;
          func_0x00029d78();
          uStack_4c = 0x22b2;
          uStack_4e = 0xe13e;
          func_0x000299d1();
          uStack_4c = 0x22b2;
          uStack_4e = 0xe147;
          func_0x000297e6();
          uStack_4c = 0x22b2;
          uStack_4e = 0xe14c;
          func_0x00029d78();
          local_54 = 0x22b2;
          uVar10 = 0x22b2;
          uStack_56 = 0xe156;
          func_0x000299d1();
          local_54 = 0x22b2;
          uStack_56 = 0xe15a;
          iVar5 = FUN_3ab8_27e7();
          if (iVar5 == 0) goto LAB_3ab8_3276;
          local_c = (undefined2 *)*(undefined2 *)0x9efa;
          local_e = (undefined1 *)*(undefined2 *)0x9ef8;
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe17d;
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe182;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xe18c;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          local_1a = 0xe195;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xe19a;
          func_0x00029d78();
          local_20 = 0x22b2;
          local_22 = 0xe1a4;
          func_0x000299d1();
          local_20 = 1;
          local_22 = 0x22b2;
          local_24 = 0xe1ad;
          FUN_1def_05d1();
          local_10 = (undefined2 *)0x1bb4;
          local_12 = (undefined2 *)0xe1b7;
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe1c0;
          func_0x0002996b();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe1c5;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xe1cf;
          func_0x000299d1();
          uStack_18 = 0;
          local_1a = 0x22b2;
          local_1c = 0xe1d7;
          puVar9 = (undefined2 *)FUN_1def_05d1();
          local_188 = *puVar9;
          local_186 = puVar9[1];
          puVar9 = (undefined2 *)*(int *)0x9efc;
          local_c = (undefined2 *)*(int *)0x9efa;
          local_e = (undefined1 *)*(int *)0x9ef8;
          local_10 = (undefined2 *)0x1bb4;
          local_12 = (undefined2 *)0xe202;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xe20c;
          func_0x000299d1();
          uStack_18 = 0;
          local_1a = 0x22b2;
          local_1c = 0xe214;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_19c = *puVar7;
          local_19a = puVar7[1];
        }
        if (((local_fc == 1) && (local_190 == 2)) || ((local_fc == 2 && (local_190 == 1)))) {
          if (local_fc == 1) {
            puVar7 = &local_2c;
            puVar8 = local_6a;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              puVar13 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar1 = *puVar13;
            }
            local_1e6 = local_12;
            local_1e4 = local_10;
            local_1da = unaff_SI;
            local_1d8 = unaff_DI;
          }
          if (local_190 == 1) {
            puVar7 = &local_2c;
            puVar8 = local_a8;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              puVar13 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar1 = *puVar13;
            }
            local_1da = local_1e2;
            local_1d8 = local_1e0;
            local_1e6 = puVar9;
            local_1e4 = unaff_SS;
          }
          func_0x000297e6();
          func_0x00029d78();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe2bf;
          func_0x000299d1();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe2c7;
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe2cc;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xe2d6;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          local_1a = 0xe2de;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xe2e3;
          func_0x00029d78();
          local_20 = 0x22b2;
          local_22 = 0xe2ed;
          func_0x000299d1();
          local_20 = 0x22b2;
          local_22 = 0xe2f5;
          func_0x000297e6();
          local_20 = 0x22b2;
          local_22 = 0xe2fa;
          func_0x00029d78();
          local_28 = 0x22b2;
          local_2a = 0xe304;
          func_0x000299d1();
          local_28 = 0x22b2;
          uVar10 = 0x1bb4;
          local_2a = 0xe309;
          iVar5 = FUN_1def_043a();
          if (iVar5 == 0) goto LAB_3ab8_3276;
          func_0x000297e6();
          func_0x00029d78();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe32b;
          func_0x000299d1();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe334;
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe339;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xe343;
          func_0x000299d1();
          uStack_18 = 1;
          local_1a = 0x22b2;
          local_1c = 0xe34c;
          puVar9 = (undefined2 *)FUN_1def_05d1();
          local_dc = *puVar9;
          local_da = puVar9[1];
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe37f;
          func_0x000299d1();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe388;
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe38d;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xe397;
          func_0x000299d1();
          uStack_18 = 1;
          local_1a = 0x22b2;
          local_1c = 0xe3a0;
          func_0x0001e558();
          uVar11 = (undefined1 *)0xffed < &uStack_18;
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x0002996b();
          func_0x00029ae7();
          func_0x00029d78();
          uVar10 = 0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar11) goto LAB_3ab8_3276;
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe3e8;
          func_0x000299d1();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe3f1;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xe3fb;
          func_0x000299d1();
          uStack_18 = 0;
          local_1a = 0x22b2;
          local_1c = 0xe403;
          puVar9 = (undefined2 *)FUN_1def_05d1();
          local_188 = *puVar9;
          local_186 = puVar9[1];
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe428;
          func_0x000299d1();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe431;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xe43b;
          func_0x000299d1();
          uStack_18 = 0;
          local_1a = 0x22b2;
          local_1c = 0xe443;
          puVar9 = (undefined2 *)func_0x0001e558();
          local_19c = *puVar9;
          local_19a = puVar9[1];
          *(undefined2 *)0xb30c = local_188;
          *(undefined2 *)0xb30e = local_186;
          *(undefined2 *)0xb37e = local_19c;
          *(undefined2 *)0xb380 = local_19a;
        }
        if ((local_fc == 2) && (local_190 == 2)) {
          func_0x000297e6();
          func_0x00029d78();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe49c;
          func_0x000299d1();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe4a5;
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe4aa;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xe4b4;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          local_1a = 0xe4bd;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xe4c2;
          func_0x00029d78();
          local_20 = 0x22b2;
          local_22 = 0xe4cc;
          func_0x000299d1();
          local_20 = 0x22b2;
          local_22 = 0xe4d5;
          func_0x000297e6();
          local_20 = 0x22b2;
          local_22 = 0xe4da;
          func_0x00029d78();
          local_28 = 0x22b2;
          local_2a = 0xe4e4;
          func_0x000299d1();
          local_28 = 0x22b2;
          uVar10 = 0x1bb4;
          local_2a = 0xe4e9;
          iVar5 = FUN_1def_043a();
          if (iVar5 == 0) goto LAB_3ab8_3276;
          local_d8 = *(undefined2 *)0xb76a;
          local_d6 = *(undefined2 *)0xb76c;
          func_0x000297e6();
          func_0x00029af6();
          func_0x00029983();
          *(undefined2 *)0xb784 = local_d8;
          *(undefined2 *)0xb786 = local_d6;
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
          local_c = (undefined2 *)*(undefined2 *)0x9efa;
          local_e = (undefined1 *)*(undefined2 *)0x9ef8;
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe59b;
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe5a0;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xe5aa;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          local_1a = 0xe5b3;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xe5b8;
          func_0x00029d78();
          local_20 = 0x22b2;
          local_22 = 0xe5c2;
          func_0x000299d1();
          local_20 = 1;
          local_22 = 0x22b2;
          local_24 = 0xe5cb;
          FUN_1def_05d1();
          local_10 = (undefined2 *)0x1bb4;
          local_12 = (undefined2 *)0xe5d5;
          func_0x000297e6();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe5de;
          func_0x0002996b();
          local_10 = (undefined2 *)0x22b2;
          local_12 = (undefined2 *)0xe5e3;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xe5ed;
          func_0x000299d1();
          uStack_18 = 0;
          local_1a = 0x22b2;
          local_1c = 0xe5f5;
          puVar9 = (undefined2 *)FUN_1def_05d1();
          local_188 = *puVar9;
          local_186 = puVar9[1];
          local_c = (undefined2 *)*(int *)0x9efa;
          local_e = (undefined1 *)*(int *)0x9ef8;
          local_10 = (undefined2 *)0x1bb4;
          local_12 = (undefined2 *)0xe620;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xe62a;
          func_0x000299d1();
          uStack_18 = 0;
          local_1a = 0x22b2;
          local_1c = 0xe632;
          puVar9 = (undefined2 *)func_0x0001e558();
          local_19c = *puVar9;
          local_19a = puVar9[1];
          *(undefined2 *)0xb30c = local_188;
          *(undefined2 *)0xb30e = local_186;
          *(undefined2 *)0xb37e = local_19c;
          *(undefined2 *)0xb380 = local_19a;
        }
LAB_3ab8_3ae2:
        func_0x0001bb4e();
        local_c = (undefined2 *)0xe670;
        func_0x00012276();
        local_c = (undefined2 *)0xe67a;
        func_0x00012276();
        local_c = (undefined2 *)0xe684;
        func_0x00012276();
        puVar9 = (undefined2 *)0xdef;
        func_0x00010526();
LAB_3ab8_3b0a:
        *(undefined2 *)0xc20 = 1;
        *(undefined2 *)0xa4a = 1;
        local_c = &local_1da;
        local_e = local_16;
        local_10 = &local_14;
        local_14 = 0xe6af;
        local_12 = puVar9;
        local_18e = func_0x00006608();
        *(undefined2 *)0xc20 = 0;
        *(undefined2 *)0xa4a = 0;
        if (*(int *)0x158 != 0) {
          return;
        }
        if (local_18e == -1) {
          uVar10 = 0x1b6e;
          FUN_1885_2ec3();
          goto LAB_3ab8_33f8;
        }
        if (local_18e == 99) goto code_r0x0003e6dd;
        if (local_e2 == (undefined2 *)0x0) {
LAB_3ab8_3b8f:
          uVar11 = 1;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar11) goto code_r0x0003e87e;
          goto LAB_3ab8_3d1a;
        }
        local_c = local_e2;
        local_e = (undefined1 *)0x3bf;
        local_10 = (undefined2 *)0xe708;
        iVar5 = func_0x00015409();
        if (iVar5 == 0) goto LAB_3ab8_3b8f;
        FUN_1885_2ec3();
        local_c = (undefined2 *)*(undefined2 *)0x9efa;
        local_e = (undefined1 *)*(undefined2 *)0x9ef8;
        local_10 = (undefined2 *)0x1b6e;
        local_12 = (undefined2 *)0xe730;
        func_0x000297e6();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xe735;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        local_1a = 0xe73f;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        local_1a = 0xe748;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        local_1a = 0xe74d;
        func_0x00029d78();
        local_20 = 0x22b2;
        local_22 = 0xe757;
        func_0x000299d1();
        local_20 = 1;
        local_22 = 0x22b2;
        local_24 = 0xe760;
        FUN_1def_05d1();
        local_10 = (undefined2 *)0x1bb4;
        local_12 = (undefined2 *)0xe76a;
        func_0x000297e6();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xe773;
        func_0x0002996b();
        local_10 = (undefined2 *)0x22b2;
        local_12 = (undefined2 *)0xe778;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        local_1a = 0xe782;
        func_0x000299d1();
        uStack_18 = 0;
        local_1a = 0x22b2;
        local_1c = 0xe78a;
        puVar9 = (undefined2 *)FUN_1def_05d1();
        local_1cc = *puVar9;
        local_1ca = puVar9[1];
        local_c = (undefined2 *)*(undefined2 *)0x9efa;
        local_e = (undefined1 *)*(undefined2 *)0x9ef8;
        local_10 = (undefined2 *)0x1bb4;
        local_12 = (undefined2 *)0xe7b5;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        local_1a = 0xe7bf;
        func_0x000299d1();
        uStack_18 = 0;
        local_1a = 0x22b2;
        local_1c = 0xe7c7;
        puVar9 = (undefined2 *)func_0x0001e558();
        local_1d6 = *puVar9;
        local_1d4 = puVar9[1];
        local_1c = CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
        local_1a = CONCAT11(local_1a._1_1_,*(undefined1 *)0xb310);
        local_2c = local_188;
        local_2a = local_186;
        local_28 = local_19c;
        local_26 = local_19a;
        local_24 = local_1cc;
        local_22 = local_1ca;
        local_c = (undefined2 *)0xe82b;
        local_20 = local_1d6;
        func_0x0000daa6();
        local_aa = (undefined2 *)0x0;
        puVar7 = &local_1c;
        puVar9 = &local_2c;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          puVar13 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar1 = *puVar13;
        }
        local_20 = 0xe846;
        iVar5 = FUN_17a6_0cba();
        if (0 < iVar5) {
          local_aa = (undefined2 *)0x1;
        }
        uVar10 = 0x885;
        func_0x0000abfa();
      } while (local_1ce == 1);
    }
  }
  goto LAB_3ab8_3e61;
code_r0x0003e6dd:
  local_1c8 = *(undefined2 *)0x9f14;
  local_1c6 = *(undefined2 *)0x9f16;
  goto LAB_3ab8_3ae2;
code_r0x0003e87e:
  func_0x000297e6();
  func_0x000297e6();
  puVar9 = (undefined2 *)0x22b2;
  FUN_28b3_1181();
  if (!(bool)uVar11) {
LAB_3ab8_3d1a:
    FUN_1885_2ec3();
    local_1d2 = local_1e6;
    local_1d0 = local_1e4;
    local_c = (undefined2 *)*(undefined2 *)0x9efa;
    local_e = (undefined1 *)*(undefined2 *)0x9ef8;
    local_10 = (undefined2 *)0x1b6e;
    local_12 = (undefined2 *)0xe8c8;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xe8cd;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    local_1a = 0xe8d7;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    local_1a = 0xe8e0;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    local_1a = 0xe8e9;
    func_0x0002996b();
    uStack_18 = 0x22b2;
    local_1a = 0xe8ee;
    func_0x00029d78();
    local_20 = 0x22b2;
    local_22 = 0xe8f8;
    func_0x000299d1();
    local_20 = 1;
    local_22 = 0x22b2;
    local_24 = 0xe901;
    FUN_1def_05d1();
    local_10 = (undefined2 *)0x1bb4;
    local_12 = (undefined2 *)0xe90b;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xe914;
    func_0x0002996b();
    local_10 = (undefined2 *)0x22b2;
    local_12 = (undefined2 *)0xe919;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    local_1a = 0xe923;
    func_0x000299d1();
    uStack_18 = 0;
    local_1a = 0x22b2;
    local_1c = 0xe92b;
    puVar9 = (undefined2 *)FUN_1def_05d1();
    local_1cc = *puVar9;
    local_1ca = puVar9[1];
    local_c = (undefined2 *)*(undefined2 *)0x9efc;
    local_e = (undefined1 *)*(undefined2 *)0x9efa;
    local_10 = (undefined2 *)*(undefined2 *)0x9ef8;
    local_12 = (undefined2 *)0x1bb4;
    local_14 = 0xe95a;
    func_0x000297e6();
    local_1a = 0x22b2;
    local_1c = 0xe964;
    func_0x000299d1();
    local_1a = 0;
    local_1c = 0x22b2;
    func_0x0001e558();
    local_c = (undefined2 *)0xe976;
    func_0x000297e6();
    local_c = (undefined2 *)0xe97f;
    func_0x0002996b();
    local_c = (undefined2 *)0xe984;
    func_0x00029d78();
    local_12 = (undefined2 *)0x22b2;
    local_14 = 0xe98e;
    func_0x000299d1();
    local_12 = (undefined2 *)0x22b2;
    local_14 = 0xe997;
    func_0x000297e6();
    local_12 = (undefined2 *)0x22b2;
    local_14 = 0xe99c;
    func_0x00029d78();
    local_1a = 0x22b2;
    local_1c = 0xe9a6;
    func_0x000299d1();
    local_1a = 0x22b2;
    local_1c = 0xe9af;
    func_0x000297e6();
    local_1a = 0x22b2;
    local_1c = 0xe9b4;
    func_0x00029d78();
    local_22 = 0x22b2;
    local_24 = 0xe9be;
    func_0x000299d1();
    local_22 = 0x22b2;
    local_24 = 0xe9c7;
    func_0x000297e6();
    local_22 = 0x22b2;
    local_24 = 0xe9cc;
    func_0x00029d78();
    local_2a = 0x22b2;
    local_2c = 0xe9d6;
    func_0x000299d1();
    local_2a = 0x22b2;
    puVar9 = (undefined2 *)0x1bb4;
    local_2c = 0xe9db;
    func_0x0001e18f();
  }
  goto LAB_3ab8_3b0a;
}



/* 3ab8:3f33  FUN_3ab8_3f33  1719 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003ed5b) */
/* WARNING: Removing unreachable block (ram,0x0003ed67) */

void __cdecl16far FUN_3ab8_3f33(char param_1)

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
  long lVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined1 local_214 [36];
  int local_1f0;
  int local_1d2;
  undefined1 local_1c0 [4];
  undefined2 local_1bc [51];
  int local_156;
  undefined1 local_14c [16];
  undefined1 local_13c [4];
  undefined2 local_138;
  undefined2 local_136;
  int local_134;
  undefined2 local_12e;
  undefined2 local_12c;
  undefined2 local_122;
  undefined2 local_120;
  undefined2 local_c8;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined1 *local_c0;
  undefined2 local_b8 [32];
  undefined2 local_78 [31];
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 auStack_36 [8];
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined4 uStack_22;
  undefined2 *puStack_1e;
  undefined1 *puStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined4 uStack_16;
  undefined2 *puStack_12;
  undefined1 *puStack_10;
  undefined2 *puStack_e;
  undefined1 *puStack_c;
  undefined1 *puVar12;
  
  FUN_21f2_0ebc();
  puStack_c = (undefined1 *)0x22b2;
  uVar6 = 0x22b2;
  puStack_e = (undefined2 *)0xeacd;
  func_0x00024c86();
  local_c8 = *(undefined2 *)0x9ef0;
  uStack_c6 = *(undefined2 *)0x9ef2;
  uStack_c4 = *(undefined2 *)0x9ef4;
  uStack_c2 = *(undefined2 *)0x9ef6;
  local_c0 = (undefined1 *)0x0;
LAB_3ab8_3f62:
  local_156 = 0;
  do {
    do {
      puStack_e = (undefined2 *)0xeaf6;
      puStack_c = (undefined1 *)uVar6;
      func_0x00024c86();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined2 *)0xeb05;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined2 *)0xeb15;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined2 *)0xeb25;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined2 *)0xeb35;
      FUN_21f2_2d26();
      *(undefined2 *)0xc2c = 1;
      puStack_c = local_214;
      puStack_e = local_1bc;
      puStack_10 = local_c0;
      puStack_12 = (undefined2 *)0x22b2;
      uVar6 = 0x1bb4;
      uStack_16._2_2_ = 0xeb5a;
      local_1f0 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_1f0 == 0x14) {
        return;
      }
      if (local_1f0 == 1) {
        local_134 = 0;
        *(int *)0x105e = 1 - *(int *)0x105e;
      }
      if (local_1f0 == -1) {
        puStack_c = (undefined1 *)0xeb97;
        func_0x0000daa6();
        local_134 = 0;
        for (; 0 < (int)local_c0; local_c0 = local_c0 + -1) {
          puStack_c = (undefined1 *)0xebac;
          FUN_2bb4_4988();
        }
        for (; (int)local_c0 < 0; local_c0 = local_c0 + 1) {
          puStack_c = (undefined1 *)0xebc7;
          FUN_1def_186d();
        }
        func_0x0000abfa();
        uVar6 = 0x885;
        puStack_c = (undefined1 *)0xebe1;
        func_0x0000b1d8();
      }
    } while (local_134 == 0);
    func_0x000297e6();
    func_0x00029d78();
    puStack_10 = (undefined1 *)0x22b2;
    puStack_12 = (undefined2 *)0xec01;
    func_0x000299d1();
    puStack_10 = (undefined1 *)0x22b2;
    puStack_12 = (undefined2 *)0xec0a;
    func_0x000297e6();
    puStack_10 = (undefined1 *)0x22b2;
    puStack_12 = (undefined2 *)0xec0f;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xec19;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uVar6 = 0x11f2;
    uStack_1a = 0xec1e;
    lVar9 = FUN_13bf_39a0();
  } while (lVar9 == 0);
LAB_3ab8_40b0:
  while( true ) {
    do {
      do {
        puStack_e = (undefined2 *)0xec3e;
        puStack_c = (undefined1 *)uVar6;
        func_0x00024c86();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined2 *)0xec4d;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined2 *)0xec5d;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined2 *)0xec6d;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined2 *)0xec7d;
        FUN_21f2_2d26();
        puStack_c = local_214;
        puStack_e = local_1bc;
        puStack_10 = (undefined1 *)0x1;
        puStack_12 = (undefined2 *)0x22b2;
        uVar6 = 0x1bb4;
        uStack_16._2_2_ = 0xec9c;
        local_1f0 = FUN_1def_0904();
        if (*(int *)0x158 != 0) {
          return;
        }
        if (local_1f0 == -1) goto LAB_3ab8_3f62;
      } while (local_134 == 0);
      func_0x000297e6();
      func_0x00029d78();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xecd4;
      func_0x000299d1();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xecdd;
      func_0x000297e6();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xece2;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xecec;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uVar6 = 0x11f2;
      uStack_1a = 0xecf1;
      lVar10 = FUN_13bf_39a0();
      puVar12 = (undefined1 *)((ulong)lVar10 >> 0x10);
    } while (lVar10 == 0);
    if (lVar9 != lVar10) break;
    puStack_c = (undefined1 *)0xed19;
    func_0x00012276();
    *(undefined2 *)0xc22 = 1;
    puStack_c = (undefined1 *)0x11f2;
    puStack_e = (undefined2 *)0xed2d;
    FUN_1000_0599();
    puStack_c = (undefined1 *)0xed38;
    func_0x00012276();
    uVar6 = 0x11f2;
    puStack_c = (undefined1 *)0xed42;
    func_0x00012276();
  }
  local_c0 = (undefined1 *)0x0;
  local_156 = 0;
  if ((0 < lVar9) && (0 < lVar10)) {
    puStack_c = (undefined1 *)0x11f2;
    puStack_e = (undefined2 *)0xed79;
    puVar11 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar11;
    puVar5 = local_78;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    puStack_c = (undefined1 *)0x0;
    puStack_e = (undefined2 *)0xed96;
    puVar11 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar11;
    puVar5 = local_b8;
    iVar3 = 0xb;
    lVar10 = uStack_22;
    while( true ) {
      uStack_22._2_2_ = (undefined2)((ulong)lVar10 >> 0x10);
      uStack_22._0_2_ = (undefined2)lVar10;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      uStack_22 = lVar10;
      *puVar2 = *puVar1;
      lVar10 = uStack_22;
    }
    puVar12 = local_14c;
    puVar4 = (undefined2 *)((int)&uStack_22 + 2);
    puVar5 = local_b8;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar11;
    }
    puVar4 = auStack_36;
    puVar5 = local_78;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar11;
    }
    uStack_38 = 0;
    uVar6 = 0x1bb4;
    uStack_3a = 0xedd3;
    iVar3 = FUN_1def_1921();
    uStack_22 = CONCAT22(uStack_22._2_2_,(undefined2)uStack_22);
    if (iVar3 == 0) {
      local_156 = 1;
      uStack_22 = CONCAT22(uStack_22._2_2_,(undefined2)uStack_22);
    }
  }
  local_1d2 = 0;
  if ((lVar9 < 0) || ((int)puVar12 < 0)) {
    puStack_10 = local_1c0;
    puStack_12 = &local_138;
    puStack_c = local_13c;
    puStack_e = &local_122;
    uStack_1a = 0xee1a;
    uStack_18 = uVar6;
    uStack_16 = lVar9;
    local_1d2 = FUN_1def_2b59();
    if (local_1d2 != 0) {
LAB_3ab8_43d6:
      if (local_1d2 == 1) goto LAB_3ab8_443a;
      puStack_c = (undefined1 *)0x1bb4;
      puStack_e = (undefined2 *)0xef6b;
      func_0x00024c86();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined2 *)0xef7b;
      FUN_21f2_2d26();
      puStack_c = local_214;
      puStack_e = local_1bc;
      puStack_10 = (undefined1 *)0x1;
      puStack_12 = (undefined2 *)0x22b2;
      uVar6 = 0x1bb4;
      uStack_16._2_2_ = 0xef9a;
      local_1f0 = FUN_1def_0904();
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_1f0 != -1) goto LAB_3ab8_4433;
      local_1f0 = -1;
      goto LAB_3ab8_40b0;
    }
    local_156 = 1;
  }
LAB_3ab8_42ae:
  uVar7 = local_1d2 != -1;
  if (local_1d2 == -1) {
    func_0x0000c3ca();
    puStack_c = (undefined1 *)0x885;
    puStack_e = (undefined2 *)0xee4d;
    func_0x000297e6();
    puStack_c = (undefined1 *)0x22b2;
    puStack_e = (undefined2 *)0xee52;
    func_0x00029d78();
    uStack_16._2_2_ = 0x22b2;
    uStack_16._0_2_ = 0xee5c;
    func_0x000299d1();
    uStack_16._2_2_ = 0x22b2;
    uStack_16._0_2_ = 0xee65;
    func_0x000297e6();
    uStack_16._2_2_ = 0x22b2;
    uStack_16._0_2_ = 0xee6a;
    func_0x00029d78();
    puStack_1c = (undefined1 *)0x22b2;
    puStack_1e = (undefined2 *)0xee74;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0xee87;
    puStack_1e = &local_12e;
    puStack_1c = local_14c;
    uStack_22 = lVar9;
    iVar3 = FUN_20a9_0933();
    uVar7 = false;
    uStack_16 = CONCAT22(uStack_16._2_2_,(undefined2)uStack_16);
    if (iVar3 == 0) {
      local_156 = 1;
      uStack_16 = CONCAT22(uStack_16._2_2_,(undefined2)uStack_16);
    }
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar7) {
LAB_3ab8_4378:
    local_156 = 1;
  }
  else {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar7) goto LAB_3ab8_4378;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar7) goto LAB_3ab8_4378;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar7) goto LAB_3ab8_4378;
  }
  if (local_156 == 0) {
    if (param_1 == '\0') {
      func_0x000297e6();
      func_0x00029d78();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xef29;
      func_0x000299d1();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xef32;
      func_0x000297e6();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xef37;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uVar6 = 0x22b2;
      uStack_1a = 0xef41;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xef45;
      iVar3 = func_0x00030353();
      if (iVar3 != 0) {
        local_c0 = local_c0 + 1;
      }
    }
    else {
      func_0x000297e6();
      func_0x00029d78();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xf114;
      func_0x000299d1();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xf11d;
      func_0x000297e6();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xf122;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xf12c;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uVar6 = 0x1bb4;
      uStack_1a = 0xf131;
      iVar3 = FUN_1def_1208();
      if (iVar3 != 0) {
        local_c0 = local_c0 + -1;
      }
    }
  }
  else {
    *(undefined2 *)0xc22 = 1;
    puStack_c = (undefined1 *)0x22b2;
    puStack_e = (undefined2 *)0xf155;
    FUN_1000_0599();
    uVar6 = 0x11f2;
    puStack_c = (undefined1 *)0xf160;
    func_0x00012276();
  }
  goto LAB_3ab8_3f62;
LAB_3ab8_4433:
  if (local_134 != 0) {
LAB_3ab8_443a:
    uVar7 = local_1d2 != -1;
    uVar8 = local_1d2 == -1;
    if (!(bool)uVar8) {
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      func_0x00029ae7();
      func_0x000297e6();
      func_0x00029ae7();
      FUN_28b3_117c();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      func_0x00029ae7();
      func_0x000297e6();
      func_0x00029ae7();
      FUN_28b3_117c();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar7 || (bool)uVar8) {
        local_12e = local_138;
        local_12c = local_136;
      }
      else {
        local_12e = local_122;
        local_12c = local_120;
      }
    }
    goto LAB_3ab8_42ae;
  }
  goto LAB_3ab8_43d6;
}



/* 3ab8:45ea  FUN_3ab8_45ea  1060 bytes, 0 callers */

/* WARNING: Possible PIC construction at 0x0003f7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0003f7d0) */
/* WARNING: Removing unreachable block (ram,0x0003f90c) */
/* WARNING: Type propagation algorithm not settling */

int FUN_3ab8_45ea(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  undefined2 *unaff_DI;
  undefined2 uVar10;
  undefined2 *puVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  undefined2 *puVar15;
  undefined2 in_stack_0000000a;
  undefined2 *in_stack_0000000c;
  undefined2 *in_stack_0000000e;
  undefined2 *in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 *in_stack_00000014;
  undefined2 *in_stack_00000016;
  undefined2 *in_stack_00000018;
  undefined2 in_stack_0000001a;
  int in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  undefined2 in_stack_00000024;
  undefined2 *in_stack_00000026;
  undefined2 *in_stack_00000028;
  undefined2 *in_stack_0000002a;
  undefined2 *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  undefined2 *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  undefined2 auStack_204 [40];
  undefined2 auStack_1b4 [2];
  undefined2 uStack_1b0;
  undefined2 uStack_1ae;
  int iStack_1ac;
  undefined2 local_1a6 [2];
  undefined2 local_1a2;
  undefined2 local_1a0 [10];
  int local_18c;
  int local_18a;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined2 uStack_170;
  undefined2 uStack_16e;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined2 uStack_164;
  undefined2 uStack_162;
  undefined2 uStack_160;
  undefined2 uStack_15e;
  undefined2 local_15c [50];
  undefined1 local_f8 [38];
  undefined1 auStack_d2 [14];
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined1 auStack_aa [4];
  undefined1 auStack_a6 [6];
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 *local_98;
  undefined4 uStack_96;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 local_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 *local_66;
  undefined2 uStack_64;
  undefined2 local_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  int iStack_5a;
  undefined2 local_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 *local_4a;
  undefined2 *local_48;
  undefined2 *puStack_46;
  undefined2 *puStack_44;
  undefined2 uStack_42;
  int iStack_38;
  undefined2 uStack_2a;
  undefined2 auStack_28 [3];
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined1 auStack_1e [2];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 *puStack_16;
  undefined2 uStack_14;
  undefined2 *puStack_12;
  undefined2 *puStack_10;
  undefined2 *puStack_e;
  undefined2 *puStack_c;
  
  FUN_21f2_0ebc();
  local_62 = 7;
  local_52 = *(undefined2 *)0x9ef0;
  uStack_50 = *(undefined2 *)0x9ef2;
  uStack_4e = *(undefined2 *)0x9ef4;
  puVar7 = (undefined2 *)0x9ef8;
  uStack_4c = *(undefined2 *)0x9ef6;
  local_4a = (undefined2 *)0x0;
  if ((*(char *)0x1cd == '\0') && (5 < *(byte *)0x123)) {
    *(undefined1 *)0x1cd = *(undefined1 *)0x1d0;
  }
  puVar5 = (undefined2 *)*(int *)0x1d0;
  if (*(char *)0x1cd != '\0') {
    *(uint *)0x1d0 = (uint)*(byte *)0x1cd;
  }
  puStack_c = (undefined2 *)0x22b2;
  puStack_e = (undefined2 *)0xf1c4;
  func_0x00024c86();
  puStack_c = (undefined2 *)0x22b2;
  puStack_e = (undefined2 *)0xf1d3;
  func_0x00024c86();
  puStack_c = (undefined2 *)0x22b2;
  puStack_e = (undefined2 *)0xf1e2;
  func_0x00024c86();
  puVar6 = (undefined2 *)0x22b2;
LAB_3ab8_4664:
  do {
    if (*(char *)0x1cd != '\0') {
      *(uint *)0x1d0 = (uint)*(byte *)0x1cd;
    }
    puStack_c = local_15c;
    puStack_10 = (undefined2 *)0xf205;
    puStack_e = puVar6;
    FUN_21f2_3454();
    if (*(char *)0x4e23 == '\0') {
      puStack_c = (undefined2 *)0x22b2;
      uVar10 = 0x22b2;
      puStack_e = (undefined2 *)0xf21d;
      FUN_21f2_2d26();
    }
    else {
      puStack_c = (undefined2 *)0x22b2;
      puStack_e = (undefined2 *)0xf22f;
      FUN_21f2_2d26();
      puStack_c = (undefined2 *)local_f8;
      puStack_e = (undefined2 *)0x22b2;
      puStack_10 = (undefined2 *)0xf243;
      FUN_21f2_3454();
      if (*(byte *)0x123 < 6) {
        local_62 = 7;
      }
      else {
        local_62 = *(undefined2 *)(*(int *)0x1d0 * 2 + 0xa70);
        if (*(int *)0x1d0 == 7) {
          local_62 = *(undefined2 *)0xa80;
        }
      }
      *(undefined2 *)0xc22 = 1;
      puStack_c = (undefined2 *)0x2;
      puStack_e = (undefined2 *)0x1b;
      puStack_10 = (undefined2 *)local_f8;
      puStack_12 = (undefined2 *)0x22b2;
      uVar10 = 0xdef;
      uStack_14 = 0xf28d;
      FUN_1000_02b5();
    }
    puStack_e = (undefined2 *)0xf29e;
    puStack_c = (undefined2 *)uVar10;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xf2ae;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xf2be;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xf2ce;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xf2de;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xf2ee;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xf2fe;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xf30e;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xf31f;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xf32f;
    FUN_21f2_2d26();
    puVar6 = local_15c;
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xf33f;
    FUN_1def_07a4();
    *(undefined2 *)0xc1a = 1;
    *(undefined2 *)0xc20 = 1;
    if (*(char *)0x4e23 == '\0') {
      local_66 = local_4a;
    }
    else if (local_4a == (undefined2 *)0x0) {
      local_66 = (undefined2 *)0x2710;
    }
    else {
      local_66 = (undefined2 *)0x270f;
    }
    puStack_c = local_1a0;
    puStack_e = local_15c;
    puStack_10 = local_66;
    puStack_12 = (undefined2 *)0x1bb4;
    puVar11 = (undefined2 *)0x1bb4;
    uStack_14 = 0xf387;
    local_18c = FUN_1def_0904();
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) {
LAB_2bb4_480c_1:
      *(undefined2 *)0x1d0 = puVar5;
      *(int *)((int)puVar6 + (int)puVar7) = *(int *)((int)puVar6 + (int)puVar7) + (int)puVar5;
      puVar7 = puVar5;
      while( true ) {
        puStack_c = (undefined2 *)0x354;
        FUN_3ab8_5089();
        uVar12 = (undefined1 *)0xffc9 < &stack0xfff8;
        uVar13 = &stack0x0000 == (undefined1 *)0xffd2;
        in_stack_0000002a = (undefined2 *)0x360;
        FUN_32b2_6cc6();
        in_stack_0000002a = (undefined2 *)0x369;
        FUN_32b2_701d();
        in_stack_0000002a = (undefined2 *)0x36e;
        FUN_32b2_7258();
        in_stack_0000002a = (undefined2 *)0x376;
        FUN_32b2_6e99();
        in_stack_0000002a = (undefined2 *)0x37e;
        FUN_32b2_6ef9();
        in_stack_0000002a = (undefined2 *)0x387;
        FUN_32b2_6cc6();
        in_stack_0000002a = (undefined2 *)0x390;
        FUN_32b2_701d();
        in_stack_0000002a = (undefined2 *)0x395;
        FUN_32b2_7258();
        in_stack_0000002a = (undefined2 *)0x39e;
        FUN_32b2_6e99();
        in_stack_0000002a = (undefined2 *)0x3a6;
        FUN_32b2_6ef9();
        in_stack_0000002a = (undefined2 *)0x3af;
        FUN_32b2_6d14();
        in_stack_0000002a = (undefined2 *)0x3b4;
        FUN_32b2_6fc7();
        in_stack_0000002a = (undefined2 *)0x3bc;
        FUN_32b2_6d14();
        in_stack_0000002a = (undefined2 *)0x3c1;
        FUN_32b2_6fc7();
        in_stack_0000002a = (undefined2 *)0x3ca;
        FUN_32b2_710c();
        in_stack_0000002a = (undefined2 *)0x3cf;
        FUN_32b2_7191();
        if (!(bool)uVar12 && !(bool)uVar13) {
          in_stack_0000002a = (undefined2 *)0x3da;
          FUN_32b2_6d14();
          in_stack_0000002a = (undefined2 *)0x3e2;
          FUN_32b2_6d14();
          in_stack_0000002a = (undefined2 *)0x3e7;
          FUN_32b2_7191();
          if (!(bool)uVar13) {
            in_stack_0000002a = (undefined2 *)0x431;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x439;
            FUN_32b2_7124();
            in_stack_0000002a = (undefined2 *)0x441;
            FUN_32b2_6e99();
            in_stack_0000002a = (undefined2 *)0x44a;
            FUN_32b2_704d();
            in_stack_0000002a = (undefined2 *)0x453;
            FUN_32b2_7035();
            in_stack_0000002a = (undefined2 *)0x45c;
            FUN_32b2_6e99();
            in_stack_0000002a = (undefined2 *)0x464;
            FUN_32b2_6eb1();
            in_stack_0000002a = (undefined2 *)0x46c;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x474;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x47c;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x484;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x48c;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x494;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x49d;
            FUN_32b2_6e99();
            in_stack_0000002a = (undefined2 *)0x4a2;
            FUN_32b2_718c();
            in_stack_0000002a = (undefined2 *)0x4ab;
            FUN_32b2_6e99();
            in_stack_0000002a = (undefined2 *)0x4b3;
            FUN_32b2_6eb1();
            in_stack_0000002a = (undefined2 *)0x4bc;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x4c4;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x4cd;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x4d5;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x4dd;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x4e6;
            FUN_32b2_6e99();
            in_stack_0000002a = (undefined2 *)0x4ee;
            FUN_32b2_6eb1();
            in_stack_0000002a = (undefined2 *)0x4f7;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x500;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x509;
            FUN_32b2_70dc();
            in_stack_0000002a = (undefined2 *)0x511;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x519;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x522;
            FUN_32b2_6e99();
            in_stack_0000002a = (undefined2 *)0x52b;
            FUN_32b2_6eb1();
            in_stack_0000002a = (undefined2 *)0x534;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x53d;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x546;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x54f;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x558;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x55d;
            FUN_32b2_718c();
            in_stack_0000002a = (undefined2 *)0x566;
            FUN_32b2_6eb1();
            in_stack_0000002a = (undefined2 *)0x56f;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x574;
            FUN_32b2_6fd6();
            in_stack_0000002a = (undefined2 *)0x57d;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x586;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x58b;
            FUN_32b2_7182();
            in_stack_0000002a = (undefined2 *)0x594;
            FUN_32b2_6e99();
            in_stack_0000002a = (undefined2 *)0x59c;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x5a5;
            FUN_32b2_7154();
            in_stack_0000002a = (undefined2 *)0x5ae;
            FUN_32b2_6e99();
            in_stack_0000002a = (undefined2 *)0x5b7;
            FUN_32b2_6eb1();
            in_stack_0000002a = (undefined2 *)0x5c0;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x5c9;
            FUN_32b2_6eb1();
            in_stack_0000002a = &uStack_64;
            in_stack_00000028 = (undefined2 *)0x32b2;
            in_stack_00000026 = (undefined2 *)0x5db;
            FUN_32b2_6cc6();
            in_stack_00000028 = (undefined2 *)0x32b2;
            in_stack_00000026 = (undefined2 *)0x5e0;
            FUN_32b2_7258();
            in_stack_00000020 = 0x32b2;
            in_stack_0000001e = 0x5ea;
            FUN_32b2_6eb1();
            in_stack_00000020 = 0x32b2;
            in_stack_0000001e = 0x5f2;
            FUN_32b2_6cc6();
            in_stack_00000020 = 0x32b2;
            in_stack_0000001e = 0x5f7;
            FUN_32b2_7258();
            in_stack_00000018 = (undefined2 *)0x32b2;
            in_stack_00000016 = (undefined2 *)0x601;
            FUN_32b2_6eb1();
            in_stack_00000018 = local_66;
            in_stack_00000016 = (undefined2 *)uStack_68;
            in_stack_00000014 = (undefined2 *)uStack_6a;
            in_stack_00000012 = uStack_6c;
            in_stack_00000010 = local_4a;
            in_stack_0000000e = (undefined2 *)uStack_4c;
            in_stack_0000000c = (undefined2 *)uStack_4e;
            in_stack_0000000a = uStack_50;
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            puStack_c = (undefined2 *)0x646;
            FUN_3ab8_5089();
            uStack_88 = uStack_64;
            uStack_86 = local_62;
            uStack_a0 = uStack_8c;
            uStack_9e = uStack_8a;
            in_stack_0000002a = &uStack_88;
            puVar5 = &stack0x000a;
            puVar7 = &stack0x001a;
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar1 = puVar5;
              puVar5 = puVar5 + 1;
              puVar15 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar1 = *puVar15;
            }
            iVar8 = func_0x0003fdaf();
            uVar12 = 0;
            uVar13 = iVar8 == 0;
            if (!(bool)uVar13) {
              in_stack_0000002a = (undefined2 *)0x694;
              FUN_32b2_6d14();
              in_stack_0000002a = (undefined2 *)0x69d;
              FUN_32b2_6cc6();
              in_stack_0000002a = (undefined2 *)0x6a5;
              FUN_32b2_701d();
              in_stack_0000002a = (undefined2 *)0x6aa;
              FUN_32b2_6fc7();
              in_stack_0000002a = (undefined2 *)0x6af;
              FUN_32b2_7258();
              in_stack_0000002a = (undefined2 *)0x6b4;
              FUN_32b2_7191();
              if ((bool)uVar12 || (bool)uVar13) {
                in_stack_0000002a = (undefined2 *)0x6bf;
                FUN_32b2_6d14();
                in_stack_0000002a = (undefined2 *)0x6c8;
                FUN_32b2_6cc6();
                in_stack_0000002a = (undefined2 *)0x6d1;
                FUN_32b2_701d();
                in_stack_0000002a = (undefined2 *)0x6d6;
                FUN_32b2_6fc7();
                in_stack_0000002a = (undefined2 *)0x6db;
                FUN_32b2_7258();
                in_stack_0000002a = (undefined2 *)0x6e0;
                FUN_32b2_7191();
                if ((bool)uVar12 || (bool)uVar13) {
                  uStack_be = *(undefined2 *)0x93c0;
                  uStack_bc = *(undefined2 *)0x93c2;
                  uStack_ba = *(undefined2 *)0x93c4;
                  uStack_b8 = *(undefined2 *)0x93c6;
                }
              }
            }
            in_stack_0000002a = (undefined2 *)0x6f8;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x700;
            FUN_32b2_6d14();
            in_stack_0000002a = (undefined2 *)0x708;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x711;
            FUN_32b2_710c();
            in_stack_0000002a = (undefined2 *)0x71a;
            FUN_32b2_7154();
            in_stack_0000002a = (undefined2 *)0x71f;
            FUN_32b2_7191();
            if (!(bool)uVar12) {
              in_stack_0000002a = (undefined2 *)0x72d;
              FUN_32b2_6d14();
              in_stack_0000002a = (undefined2 *)0x732;
              FUN_32b2_6fc7();
              in_stack_0000002a = (undefined2 *)0x73a;
              FUN_32b2_6d14();
              in_stack_0000002a = (undefined2 *)0x742;
              FUN_32b2_710c();
              in_stack_0000002a = (undefined2 *)0x74b;
              FUN_32b2_710c();
              in_stack_0000002a = (undefined2 *)0x750;
              FUN_32b2_7191();
              if (!(bool)uVar12) {
                uStack_be = *(undefined2 *)0x93c0;
                uStack_bc = *(undefined2 *)0x93c2;
                uStack_ba = *(undefined2 *)0x93c4;
                uStack_b8 = *(undefined2 *)0x93c6;
              }
              in_stack_0000002a = (undefined2 *)uStack_ba;
              in_stack_00000028 = (undefined2 *)uStack_bc;
              in_stack_00000026 = (undefined2 *)uStack_be;
              in_stack_00000024 = 0x32b2;
              in_stack_00000022 = 0x774;
              FUN_32b2_7592();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x77e;
              FUN_32b2_6d14();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x786;
              FUN_32b2_70dc();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x78e;
              FUN_32b2_6d14();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x797;
              FUN_32b2_710c();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x79c;
              FUN_32b2_7182();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x7a5;
              FUN_32b2_6e99();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x7ad;
              FUN_32b2_710c();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x7b5;
              FUN_32b2_7154();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x7be;
              FUN_32b2_6e99();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x7c7;
              FUN_32b2_6eb1();
              in_stack_0000002a = &uStack_8c;
              in_stack_00000028 = &uStack_64;
              in_stack_00000026 = (undefined2 *)0x32b2;
              in_stack_00000024 = 0x7d9;
              FUN_32b2_6cc6();
              in_stack_00000026 = (undefined2 *)0x32b2;
              in_stack_00000024 = 0x7de;
              FUN_32b2_7258();
              in_stack_0000001e = 0x32b2;
              in_stack_0000001c = 0x7e8;
              FUN_32b2_6eb1();
              in_stack_0000001e = 0x32b2;
              in_stack_0000001c = 0x7f0;
              FUN_32b2_6cc6();
              in_stack_0000001e = 0x32b2;
              in_stack_0000001c = 0x7f5;
              FUN_32b2_7258();
              in_stack_00000016 = (undefined2 *)0x32b2;
              in_stack_00000014 = (undefined2 *)0x7ff;
              FUN_32b2_6eb1();
              uVar10 = uStack_50;
              in_stack_00000016 = local_66;
              in_stack_00000014 = (undefined2 *)uStack_68;
              in_stack_00000012 = uStack_6a;
              in_stack_00000010 = (undefined2 *)uStack_6c;
              in_stack_0000000e = local_4a;
              in_stack_0000000c = (undefined2 *)uStack_4c;
              in_stack_0000000a = uStack_4e;
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              FUN_32b2_6d14();
              puStack_c = (undefined2 *)0x83d;
              FUN_32b2_6eb1();
              puStack_c = (undefined2 *)0x32b2;
              puStack_e = (undefined2 *)0x844;
              FUN_3ab8_5089();
              uVar12 = (undefined1 *)0xffc9 < &stack0xfff6;
              uVar13 = &stack0x0000 == (undefined1 *)0xffd4;
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x84f;
              FUN_32b2_6cc6();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x857;
              FUN_32b2_6cc6();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x85c;
              FUN_32b2_7191();
              if ((bool)uVar13) {
                uStack_64 = 0x820;
                local_62 = 0x32b2;
              }
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x872;
              FUN_32b2_6cc6();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x87a;
              FUN_32b2_6cc6();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x87f;
              FUN_32b2_7191();
              if ((bool)uVar13) {
                uStack_8c = uVar10;
                uStack_8a = in_stack_0000000a;
              }
              *in_stack_0000003a = uStack_64;
              in_stack_0000003a[1] = local_62;
              *in_stack_0000003c = uStack_8c;
              in_stack_0000003c[1] = uStack_8a;
              *in_stack_0000003e = uStack_64;
              in_stack_0000003e[1] = local_62;
              *in_stack_00000040 = uStack_8c;
              in_stack_00000040[1] = uStack_8a;
              iStack_38 = iStack_38 + 1;
              uVar13 = iStack_38 == 0;
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x8d7;
              FUN_32b2_6d14();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x8e0;
              FUN_32b2_6d14();
              in_stack_0000002a = (undefined2 *)0x32b2;
              in_stack_00000028 = (undefined2 *)0x8e5;
              FUN_32b2_7191();
              if (!(bool)uVar12 && !(bool)uVar13) {
                in_stack_0000002a = (undefined2 *)uStack_b8;
                in_stack_00000028 = (undefined2 *)uStack_ba;
                in_stack_00000026 = (undefined2 *)uStack_bc;
                in_stack_00000024 = uStack_be;
                in_stack_00000022 = 0x32b2;
                in_stack_00000020 = 0x8ff;
                FUN_32b2_7592();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x909;
                FUN_32b2_6d14();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x911;
                FUN_32b2_7154();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x916;
                FUN_32b2_6fd6();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x91e;
                FUN_32b2_6d14();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x927;
                FUN_32b2_710c();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x92c;
                FUN_32b2_7182();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x935;
                FUN_32b2_6e99();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x93d;
                FUN_32b2_710c();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x945;
                FUN_32b2_7154();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x94e;
                FUN_32b2_6e99();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x957;
                FUN_32b2_6eb1();
                in_stack_00000028 = &uStack_8c;
                in_stack_00000026 = &uStack_64;
                in_stack_00000024 = 0x32b2;
                in_stack_00000022 = 0x969;
                FUN_32b2_6cc6();
                in_stack_00000024 = 0x32b2;
                in_stack_00000022 = 0x96e;
                FUN_32b2_7258();
                in_stack_0000001c = 0x32b2;
                in_stack_0000001a = 0x978;
                FUN_32b2_6eb1();
                in_stack_0000001c = 0x32b2;
                in_stack_0000001a = 0x980;
                FUN_32b2_6cc6();
                in_stack_0000001c = 0x32b2;
                in_stack_0000001a = 0x985;
                FUN_32b2_7258();
                in_stack_00000014 = (undefined2 *)0x32b2;
                in_stack_00000012 = 0x98f;
                FUN_32b2_6eb1();
                uVar3 = uStack_4e;
                uVar10 = uStack_50;
                in_stack_00000014 = local_66;
                in_stack_00000012 = uStack_68;
                in_stack_00000010 = (undefined2 *)uStack_6a;
                in_stack_0000000e = (undefined2 *)uStack_6c;
                in_stack_0000000c = local_4a;
                in_stack_0000000a = uStack_4c;
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_32b2_6d14();
                puStack_c = (undefined2 *)0x32b2;
                puStack_e = (undefined2 *)0x9cd;
                FUN_32b2_6eb1();
                puStack_c = (undefined2 *)0x0;
                puStack_e = (undefined2 *)0x32b2;
                puStack_10 = (undefined2 *)0x9d4;
                FUN_3ab8_5089();
                uVar12 = &stack0x0000 == (undefined1 *)0xffd6;
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x9df;
                FUN_32b2_6cc6();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x9e7;
                FUN_32b2_6cc6();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0x9ec;
                FUN_32b2_7191();
                if ((bool)uVar12) {
                  uStack_64 = 0x32b2;
                  local_62 = uVar10;
                }
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0xa02;
                FUN_32b2_6cc6();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0xa0a;
                FUN_32b2_6cc6();
                in_stack_00000028 = (undefined2 *)0x32b2;
                in_stack_00000026 = (undefined2 *)0xa0f;
                FUN_32b2_7191();
                if ((bool)uVar12) {
                  uStack_8c = uVar3;
                  uStack_8a = in_stack_0000000a;
                }
                *in_stack_0000003e = uStack_64;
                in_stack_0000003e[1] = local_62;
                *in_stack_00000040 = uStack_8c;
                in_stack_00000040[1] = uStack_8a;
                return iStack_38 + 1;
              }
              return iStack_38;
            }
          }
          return 0;
        }
        in_stack_0000002a = (undefined2 *)0x3f5;
        FUN_32b2_6d14();
        in_stack_0000002a = (undefined2 *)0x32b2;
        in_stack_00000028 = (undefined2 *)0x3ff;
        FUN_32b2_7154();
        in_stack_0000002a = (undefined2 *)0x405;
        FUN_32b2_6eb1();
        puVar4 = puStack_c;
        puVar6 = puStack_e;
        in_stack_0000002a = (undefined2 *)uStack_ba;
        in_stack_00000028 = (undefined2 *)uStack_bc;
        in_stack_00000026 = (undefined2 *)uStack_be;
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x119;
        local_48 = puVar11;
        puStack_46 = puVar5;
        puStack_44 = puVar7;
        uStack_42 = unaff_DI;
        puStack_12 = puVar11;
        puStack_10 = puVar5;
        puStack_e = puVar7;
        puStack_c = unaff_DI;
        FUN_32b2_75fe();
        in_stack_0000002a = (undefined2 *)0x32b2;
        in_stack_00000028 = (undefined2 *)0x123;
        FUN_32b2_6d14();
        in_stack_0000002a = (undefined2 *)0x32b2;
        in_stack_00000028 = (undefined2 *)0x12b;
        FUN_32b2_704d();
        in_stack_0000002a = (undefined2 *)0x32b2;
        in_stack_00000028 = (undefined2 *)0x133;
        FUN_32b2_7095();
        in_stack_0000002a = (undefined2 *)0x32b2;
        in_stack_00000028 = (undefined2 *)0x13b;
        FUN_32b2_6eb1();
        in_stack_0000002a = (undefined2 *)uStack_b8;
        in_stack_00000028 = (undefined2 *)uStack_ba;
        in_stack_00000026 = (undefined2 *)uStack_bc;
        in_stack_00000024 = uStack_be;
        in_stack_00000022 = 0x32b2;
        in_stack_00000020 = 0x150;
        FUN_32b2_75ec();
        uVar12 = &stack0x0000 == (undefined1 *)0xffd6;
        in_stack_00000028 = (undefined2 *)0x32b2;
        in_stack_00000026 = (undefined2 *)0x15a;
        FUN_32b2_6d14();
        in_stack_00000028 = (undefined2 *)0x32b2;
        in_stack_00000026 = (undefined2 *)0x162;
        FUN_32b2_704d();
        in_stack_00000028 = (undefined2 *)0x32b2;
        in_stack_00000026 = (undefined2 *)0x16a;
        FUN_32b2_7095();
        in_stack_00000028 = (undefined2 *)0x32b2;
        in_stack_00000026 = (undefined2 *)0x173;
        FUN_32b2_6eb1();
        in_stack_00000028 = (undefined2 *)0x32b2;
        in_stack_00000026 = (undefined2 *)0x17b;
        FUN_32b2_6cc6();
        in_stack_00000028 = (undefined2 *)0x32b2;
        in_stack_00000026 = (undefined2 *)0x183;
        FUN_32b2_6cc6();
        in_stack_00000028 = (undefined2 *)0x32b2;
        in_stack_00000026 = (undefined2 *)0x188;
        FUN_32b2_7191();
        if ((bool)uVar12) {
          in_stack_00000028 = (undefined2 *)0x32b2;
          in_stack_00000026 = (undefined2 *)0x192;
          FUN_32b2_6cc6();
          in_stack_00000028 = (undefined2 *)0x32b2;
          in_stack_00000026 = (undefined2 *)0x19a;
          FUN_32b2_6cc6();
          in_stack_00000028 = (undefined2 *)0x32b2;
          in_stack_00000026 = (undefined2 *)0x19f;
          FUN_32b2_7191();
          if ((bool)uVar12) {
            return 0;
          }
        }
        in_stack_00000028 = (undefined2 *)auStack_aa;
        in_stack_00000026 = (undefined2 *)auStack_1e;
        in_stack_00000024 = uStack_7e;
        in_stack_00000022 = uStack_80;
        in_stack_00000020 = local_82;
        in_stack_0000001e = uStack_84;
        in_stack_0000001c = iStack_5a;
        in_stack_0000001a = uStack_5c;
        in_stack_00000018 = (undefined2 *)uStack_5e;
        in_stack_00000016 = (undefined2 *)uStack_60;
        in_stack_00000014 = (undefined2 *)0x32b2;
        in_stack_00000012 = 0x1d0;
        FUN_32b2_6cc6();
        in_stack_00000014 = (undefined2 *)0x32b2;
        in_stack_00000012 = 0x1d5;
        FUN_32b2_7258();
        in_stack_0000000c = (undefined2 *)0x32b2;
        in_stack_0000000a = 0x1df;
        FUN_32b2_6eb1();
        in_stack_0000000c = (undefined2 *)0x32b2;
        in_stack_0000000a = 0x1e7;
        FUN_32b2_6cc6();
        in_stack_0000000c = (undefined2 *)0x32b2;
        in_stack_0000000a = 0x1ec;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
        iVar8 = func_0x0003fb3d();
        if (iVar8 == 0) break;
        in_stack_0000002a = (undefined2 *)0x209;
        FUN_32b2_6cc6();
        in_stack_0000002a = (undefined2 *)0x20e;
        FUN_32b2_7258();
        in_stack_0000002a = (undefined2 *)0x216;
        FUN_32b2_6e99();
        in_stack_0000002a = (undefined2 *)0x21e;
        FUN_32b2_6ef9();
        in_stack_0000002a = (undefined2 *)auStack_a6;
        in_stack_00000028 = (undefined2 *)0x32b2;
        in_stack_00000026 = (undefined2 *)0x231;
        FUN_32b2_6cc6();
        in_stack_00000028 = (undefined2 *)0x32b2;
        in_stack_00000026 = (undefined2 *)0x236;
        FUN_32b2_7258();
        in_stack_00000020 = 0x32b2;
        in_stack_0000001e = 0x240;
        FUN_32b2_6eb1();
        in_stack_00000020 = 0x32b2;
        in_stack_0000001e = 0x248;
        FUN_32b2_6cc6();
        in_stack_00000020 = 0x32b2;
        in_stack_0000001e = 0x24d;
        FUN_32b2_7258();
        in_stack_00000018 = (undefined2 *)0x32b2;
        in_stack_00000016 = (undefined2 *)0x257;
        FUN_32b2_6eb1();
        in_stack_00000018 = (undefined2 *)0x32b2;
        in_stack_00000016 = (undefined2 *)0x25f;
        FUN_32b2_6d14();
        in_stack_00000010 = (undefined2 *)0x32b2;
        in_stack_0000000e = (undefined2 *)0x269;
        FUN_32b2_6eb1();
        in_stack_00000010 = (undefined2 *)0x32b2;
        in_stack_0000000e = (undefined2 *)0x271;
        FUN_32b2_6cc6();
        in_stack_00000010 = (undefined2 *)0x32b2;
        in_stack_0000000e = (undefined2 *)0x276;
        FUN_32b2_7258();
        in_stack_00000010 = (undefined2 *)0x32b2;
        in_stack_0000000e = (undefined2 *)0x27e;
        FUN_32b2_6e99();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        puStack_c = (undefined2 *)0x2be;
        FUN_3ab8_5089();
        in_stack_0000002a = (undefined2 *)auStack_d2;
        in_stack_00000028 = (undefined2 *)0x32b2;
        in_stack_00000026 = (undefined2 *)0x2d4;
        FUN_32b2_6cc6();
        in_stack_00000028 = (undefined2 *)0x32b2;
        in_stack_00000026 = (undefined2 *)0x2d9;
        FUN_32b2_7258();
        in_stack_00000020 = 0x32b2;
        in_stack_0000001e = 0x2e3;
        FUN_32b2_6eb1();
        in_stack_00000020 = 0x32b2;
        in_stack_0000001e = 0x2eb;
        FUN_32b2_6cc6();
        in_stack_00000020 = 0x32b2;
        in_stack_0000001e = 0x2f0;
        FUN_32b2_7258();
        in_stack_00000018 = (undefined2 *)0x32b2;
        in_stack_00000016 = (undefined2 *)0x2fa;
        FUN_32b2_6eb1();
        in_stack_00000018 = (undefined2 *)0x32b2;
        in_stack_00000016 = (undefined2 *)0x302;
        FUN_32b2_6d14();
        in_stack_00000010 = (undefined2 *)0x32b2;
        in_stack_0000000e = (undefined2 *)0x30c;
        FUN_32b2_6eb1();
        in_stack_00000010 = (undefined2 *)0x32b2;
        in_stack_0000000e = (undefined2 *)0x314;
        FUN_32b2_6d14();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        puVar11 = (undefined2 *)0x32b2;
        FUN_32b2_6eb1();
        puVar5 = (undefined2 *)0x1;
        puVar7 = puVar6;
        unaff_DI = puVar4;
      }
      return 0;
    }
    if (*(int *)0xc18 == 0) {
      if (local_18c == 1) {
        local_98 = (undefined2 *)0x0;
        local_4a = (undefined2 *)0x0;
        *(char *)0x4e23 = '\x01' - *(char *)0x4e23;
      }
      if (local_18c == -1) {
        puStack_c = (undefined2 *)0xf40f;
        func_0x0000daa6();
        local_98 = (undefined2 *)0x0;
        if (0 < (int)local_4a) {
          local_1a2 = *(undefined2 *)0x154;
          puStack_c = (undefined2 *)0xf428;
          FUN_2bb4_4988();
          local_4a = (undefined2 *)((int)local_4a + -1);
        }
        if ((int)local_4a < 0) {
          local_1a2 = *(undefined2 *)0x152;
          puStack_c = (undefined2 *)0xf43f;
          FUN_1def_186d();
          local_4a = (undefined2 *)((int)local_4a + 1);
        }
        func_0x0000abfa();
        puVar11 = (undefined2 *)0x885;
        puStack_c = (undefined2 *)0xf451;
        func_0x0000b1d8();
      }
      puVar6 = puVar5;
      if (((0x61ff < local_18c) && (local_18c < 0x6701)) ||
         ((5 < *(byte *)0x123 && (local_18c == 0x6800)))) {
        local_98 = (undefined2 *)0x0;
        uVar9 = (int)(local_18c + 0x9f00U) >> 0xf;
        puVar6 = (undefined2 *)(((int)((local_18c + 0x9f00U ^ uVar9) - uVar9) >> 8 ^ uVar9) - uVar9)
        ;
        *(int *)0x1d0 = (int)puVar6;
        if ((*(char *)0x1cd != '\0') || (puVar6 == (undefined2 *)0x7)) {
          *(undefined1 *)0x1cd = *(undefined1 *)0x1d0;
          puVar6 = puVar5;
        }
      }
      puVar5 = puVar6;
      puVar6 = puVar11;
      if ((local_18c < 2) || (5 < local_18c)) break;
      local_18c = local_18c + -1;
      goto LAB_3ab8_4938;
    }
    local_4a = (undefined2 *)0x0;
    func_0x000297e6();
    func_0x00029d78();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xf3c6;
    func_0x000299d1();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xf3cf;
    func_0x000297e6();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xf3d4;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xf3de;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xf3e3;
    func_0x0000507a();
    puVar6 = (undefined2 *)0x3bf;
  } while( true );
  if (local_98 != (undefined2 *)0x0) {
    puStack_c = local_98;
    puVar6 = (undefined2 *)0x11f2;
    puStack_10 = (undefined2 *)0xf527;
    puStack_e = puVar11;
    iVar8 = func_0x00015409();
    if (iVar8 != 0) {
      local_18c = 0;
LAB_3ab8_4938:
      if (local_18c == 0) {
        if (*(char *)0x4e23 == '\0') {
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf4e1;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf4ea;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf4ef;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          puVar6 = (undefined2 *)0x22b2;
          uStack_1a = 0xf4f9;
          func_0x000299d1();
          uStack_18 = 0x22b2;
                    /* WARNING: Call to offcut address within same function */
          uStack_1a = 0xf4fd;
          iVar8 = func_0x00030353();
          if (iVar8 != 0) {
            local_4a = (undefined2 *)((int)local_4a + 1);
          }
        }
        else {
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf54e;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf557;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf55c;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0xf566;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          uStack_1a = 0xf56b;
          iVar8 = FUN_1def_1208();
          puVar6 = (undefined2 *)0x1bb4;
          if (iVar8 != 0) {
            local_4a = (undefined2 *)((int)local_4a + -1);
          }
        }
      }
      else {
        local_4a = (undefined2 *)0x0;
        local_18a = 0;
        if (local_18c != 1) {
          iVar8 = FUN_3ab8_5357();
          return iVar8;
        }
        uStack_96 = 0;
        while( true ) {
          puStack_e = (undefined2 *)0xf5a4;
          puStack_c = puVar6;
          func_0x00024c86();
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined2 *)0xf5b4;
          FUN_21f2_2d26();
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined2 *)0xf5c4;
          FUN_21f2_2d26();
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined2 *)0xf5d4;
          FUN_21f2_2d26();
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined2 *)0xf5e4;
          FUN_21f2_2d26();
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined2 *)0xf5f4;
          FUN_21f2_2d26();
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined2 *)0xf610;
          FUN_21f2_2d26();
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined2 *)0xf620;
          FUN_21f2_2d26();
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined2 *)0xf630;
          FUN_21f2_2d26();
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined2 *)0xf640;
          FUN_21f2_2d26();
          if (local_4a != (undefined2 *)0x0) {
            puStack_c = (undefined2 *)0x22b2;
            puStack_e = (undefined2 *)0xf656;
            FUN_21f2_2d26();
            puStack_c = (undefined2 *)0x22b2;
            puStack_e = (undefined2 *)0xf666;
            FUN_21f2_2d26();
          }
          puVar6 = local_15c;
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined2 *)0xf676;
          FUN_1def_07a4();
          *(undefined2 *)0xc2c = 1;
          *(undefined2 *)0xc20 = 1;
          puStack_c = &uStack_bc;
          puStack_e = local_15c;
          puStack_10 = local_4a;
          puStack_12 = (undefined2 *)0x1bb4;
          puVar11 = (undefined2 *)0x1bb4;
          uStack_14 = 0xf69d;
          iStack_5a = FUN_1def_0904();
          *(undefined2 *)0xc2c = 0;
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
          puVar6 = puVar11;
          if (iStack_5a == 0x14) break;
          if (iStack_5a == -1) {
            puStack_c = (undefined2 *)0xf6ce;
            func_0x0000daa6();
            local_98 = (undefined2 *)0x0;
            if (0 < (int)local_4a) {
              local_1a2 = *(undefined2 *)0x154;
              puStack_c = (undefined2 *)0xf6e7;
              FUN_2bb4_4988();
              local_4a = (undefined2 *)((int)local_4a + -1);
            }
            if ((int)local_4a < 0) {
              local_1a2 = *(undefined2 *)0x152;
              puStack_c = (undefined2 *)0xf6fe;
              FUN_1def_186d();
              local_4a = (undefined2 *)((int)local_4a + 1);
            }
            func_0x0000abfa();
            puStack_c = (undefined2 *)0xf710;
            func_0x0000b1d8();
            func_0x000297e6();
            puStack_c = (undefined2 *)0xf724;
            func_0x00029b55();
            puVar6 = (undefined2 *)0x22b2;
            func_0x00029983();
          }
          if (iStack_5a == 1) {
            local_4a = (undefined2 *)0x0;
            if (local_18a == 0) {
              local_18a = 1;
            }
            else {
              local_18a = 0;
            }
          }
          if ((iStack_5a == 2) && (local_4a != (undefined2 *)0x0)) {
            func_0x000297e6();
            puStack_c = (undefined2 *)0xf769;
            func_0x00029bb5();
LAB_3ab8_4fae:
            func_0x00029983();
            if ((local_18a != 0) && (uStack_96 < 0)) {
              iVar8 = func_0x0003fc30();
              return iVar8;
            }
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xfb5c;
            func_0x000299d1();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xfb65;
            func_0x000297e6();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xfb6a;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xfb74;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1a = 0xfb7d;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            uStack_1a = 0xfb82;
            func_0x00029d78();
            uStack_20 = 0x22b2;
            uStack_22 = 0xfb8c;
            func_0x000299d1();
            uStack_20 = 0x22b2;
            uStack_22 = 0xfb95;
            func_0x000297e6();
            uStack_20 = 0x22b2;
            uStack_22 = 0xfb9a;
            func_0x00029d78();
            auStack_28[0] = 0x22b2;
            uStack_2a = 0xfba4;
            func_0x000299d1();
            auStack_28[0] = 0x22b2;
            puVar6 = (undefined2 *)0x1bb4;
            uStack_2a = 0xfba9;
            iVar8 = FUN_1def_043a();
            if (iVar8 != 0) {
              puStack_c = (undefined2 *)*(undefined2 *)0x9efa;
              puStack_e = (undefined2 *)*(undefined2 *)0x9ef8;
              puStack_10 = (undefined2 *)0x1bb4;
              puStack_12 = (undefined2 *)0xfbcc;
              func_0x000297e6();
              uStack_18 = 0x22b2;
              uStack_1a = 0xfbd6;
              func_0x000299d1();
              uStack_18 = 0;
              uStack_1a = 0x22b2;
              uStack_1c = 0xfbde;
              puVar7 = (undefined2 *)FUN_1def_05d1();
              uStack_92 = *puVar7;
              uStack_90 = puVar7[1];
              puStack_c = (undefined2 *)*(undefined2 *)0x9efa;
              puStack_e = (undefined2 *)*(undefined2 *)0x9ef8;
              puStack_10 = (undefined2 *)0x1bb4;
              puStack_12 = (undefined2 *)0xfc09;
              func_0x000297e6();
              uStack_18 = 0x22b2;
              uStack_1a = 0xfc13;
              func_0x000299d1();
              uStack_18 = 0;
              uStack_1a = 0x22b2;
              uStack_1c = 0xfc1b;
              puVar7 = (undefined2 *)func_0x0001e558();
              uStack_c4 = *puVar7;
              uStack_c2 = puVar7[1];
              iVar8 = FUN_3ab8_52c7();
              return iVar8;
            }
          }
          else if ((local_98 != (undefined2 *)0x0) && (iStack_5a == 0)) {
            puStack_c = local_98;
            puVar11 = (undefined2 *)0x11f2;
            puStack_10 = (undefined2 *)0xf790;
            puStack_e = puVar6;
            iVar8 = func_0x00015409();
            puVar6 = puVar11;
            if (iVar8 != 0) {
              local_4a = (undefined2 *)0x0;
              uStack_96 = 0;
              uStack_b8 = uStack_bc;
              uStack_b6 = uStack_ba;
              uStack_164 = uStack_170;
              uStack_162 = uStack_16e;
LAB_3ab8_4c49:
              do {
                if (local_18a != 0) {
                  puStack_e = (undefined2 *)0xf7e1;
                  puStack_c = puVar11;
                  func_0x00024c86();
                  puStack_c = (undefined2 *)0x22b2;
                  puStack_e = (undefined2 *)0xf7f1;
                  FUN_21f2_2d26();
                  puVar6 = (undefined2 *)0x302;
                  puStack_c = local_1a0;
                  puStack_e = local_15c;
                  puStack_10 = (undefined2 *)0x1;
                  puStack_12 = (undefined2 *)0x22b2;
                  puVar11 = (undefined2 *)0x1bb4;
                  uStack_14 = 0xf810;
                  iVar8 = FUN_1def_0904();
                  if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
                  if (iVar8 == -1) {
                    iVar8 = FUN_3ab8_4a0e();
                    return iVar8;
                  }
                  if (local_98 == (undefined2 *)0x0) goto LAB_3ab8_4c49;
                  func_0x000297e6();
                  func_0x00029d78();
                  puStack_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xf849;
                  func_0x000299d1();
                  puStack_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xf852;
                  func_0x000297e6();
                  puStack_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xf857;
                  func_0x00029d78();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xf861;
                  func_0x000299d1();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xf866;
                  lVar14 = FUN_13bf_39a0();
                  uStack_96 = lVar14;
                  if (-1 < lVar14) {
LAB_3ab8_4d64:
                    puStack_c = (undefined2 *)0xf8ed;
                    func_0x00012276();
                    *(undefined2 *)0xc22 = 1;
                    puStack_c = (undefined2 *)0x11f2;
                    puVar11 = (undefined2 *)0xdef;
                    puStack_e = (undefined2 *)0xf901;
                    FUN_1000_0599();
                    if (0 < uStack_96) {
                      puVar11 = (undefined2 *)0x11f2;
                      puStack_c = (undefined2 *)0xf91c;
                      func_0x00012276();
                    }
                    uStack_96 = 0;
                    goto LAB_3ab8_4c49;
                  }
                  uVar12 = (int)((ulong)lVar14 >> 0x10) + (uint)((int)lVar14 != 0) == 0;
                  puStack_c = (undefined2 *)0x11f2;
                  puStack_e = (undefined2 *)0xf883;
                  puVar15 = (undefined2 *)func_0x00000271();
                  puVar7 = (undefined2 *)puVar15;
                  puVar6 = auStack_28;
                  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                    puVar2 = puVar6;
                    puVar6 = puVar6 + 1;
                    puVar1 = puVar7;
                    puVar7 = puVar7 + 1;
                    *puVar2 = *puVar1;
                  }
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar12) {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar12) {
                      *(undefined2 *)0xc22 = 1;
                      puStack_c = (undefined2 *)0x22b2;
                      puStack_e = (undefined2 *)0xf8d8;
                      FUN_1000_0599();
                      puStack_c = (undefined2 *)0xf8e3;
                      func_0x00012276();
                      goto LAB_3ab8_4d64;
                    }
                  }
                }
FUN_3ab8_4daa:
                do {
                  func_0x000297e6();
                  func_0x0002996b();
                  func_0x00029983();
                  func_0x0001bb4e();
                  puStack_c = (undefined2 *)0xf953;
                  func_0x00012276();
                  puStack_c = (undefined2 *)0xf95d;
                  func_0x00012276();
                  puStack_c = (undefined2 *)*(undefined2 *)0x4e26;
                  puStack_e = (undefined2 *)*(undefined2 *)0x4e24;
                  puStack_10 = (undefined2 *)0x31e;
                  puStack_12 = (undefined2 *)0x4de4;
                  uStack_14 = 0x4de5;
                  puStack_16 = auStack_204;
                  uStack_18 = 0x11f2;
                  uStack_1a = 0xf984;
                  FUN_10ad_19f9();
                  puStack_c = (undefined2 *)0x11f2;
                  puStack_e = (undefined2 *)0xf994;
                  FUN_1000_0599();
                  puVar6 = auStack_204;
                  puStack_c = (undefined2 *)0xf9a0;
                  func_0x00012276();
                  if (local_18a != 0) {
                    puStack_c = (undefined2 *)0x11f2;
                    puStack_e = (undefined2 *)0xf9b5;
                    FUN_1000_0599();
                    puStack_c = (undefined2 *)0xf9c0;
                    func_0x00012276();
                    puStack_c = (undefined2 *)0xf9ca;
                    func_0x00012276();
                    puVar6 = (undefined2 *)0x4df1;
                    *(undefined2 *)0xc22 = 1;
                  }
                  puStack_c = local_1a6;
                  puStack_e = local_1a0;
                  puStack_10 = auStack_1b4;
                  puStack_12 = &uStack_1b0;
                  uStack_14 = 0x11f2;
                  puVar11 = (undefined2 *)0xad;
                  puStack_16 = (undefined2 *)0xf9f2;
                  iStack_1ac = func_0x000021a4();
                  uVar12 = 0;
                  uVar13 = *(int *)0x158 == 0;
                  if (!(bool)uVar13) goto LAB_2bb4_480c_1;
                  func_0x00029834();
                  func_0x000297e6();
                  func_0x00029ae7();
                  func_0x00029d78();
                  puVar11 = (undefined2 *)0x22b2;
                  FUN_28b3_1181();
                } while (!(bool)uVar12 && !(bool)uVar13);
                if (iStack_1ac != -1) {
                  if ((iStack_1ac == 0x66) || (iStack_1ac == 0)) {
                    *(undefined2 *)0x4e24 = uStack_1b0;
                    *(undefined2 *)0x4e26 = uStack_1ae;
LAB_3ab8_4edd:
                    if (local_18a != 0) goto LAB_3ab8_4f54;
                    puStack_e = (undefined2 *)0xfa72;
                    puStack_c = puVar11;
                    func_0x00024c86();
                    puVar6 = (undefined2 *)0x3dd;
                    *(undefined2 *)0xc20 = 1;
                    puStack_c = &uStack_168;
                    puStack_e = local_15c;
                    puStack_10 = (undefined2 *)0x1;
                    puStack_12 = (undefined2 *)0x22b2;
                    puVar11 = (undefined2 *)0x1bb4;
                    uStack_14 = 0xfa97;
                    iStack_5a = FUN_1def_0904();
                    *(undefined2 *)0xc20 = 0;
                    if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
                    if (iStack_5a != -1) goto LAB_3ab8_4f34;
                  }
                  goto FUN_3ab8_4daa;
                }
                puVar6 = puVar11;
              } while (local_18a != 0);
            }
          }
        }
        local_4a = (undefined2 *)0x0;
      }
    }
  }
  goto LAB_3ab8_4664;
LAB_3ab8_4f34:
  if (local_98 != (undefined2 *)0x0) {
    puStack_c = local_98;
    puStack_e = (undefined2 *)0x1bb4;
    puVar11 = (undefined2 *)0x11f2;
    puStack_10 = (undefined2 *)0xfacd;
    iVar8 = func_0x00015409();
    if (iVar8 != 0) {
LAB_3ab8_4f54:
      uStack_160 = uStack_168;
      uStack_15e = uStack_166;
      uStack_174 = uStack_17c;
      uStack_172 = uStack_17a;
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b9d();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      goto LAB_3ab8_4fae;
    }
  }
  goto LAB_3ab8_4edd;
}



/* 3ab8:4a0e  FUN_3ab8_4a0e  642 bytes, 1 callers */

/* WARNING: Possible PIC construction at 0x0003f7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0003f7d0) */

undefined2 FUN_3ab8_4a0e(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 in_AX;
  undefined2 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  undefined2 *puVar15;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000016;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  undefined2 in_stack_00000024;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  int in_stack_0000002c;
  int in_stack_0000002e;
  int in_stack_00000030;
  int iStack_2;
  
  iVar11 = 0x3ab8;
code_r0x0003f58e:
  *(undefined2 *)(unaff_BP + -0x92) = in_AX;
  *(undefined2 *)(unaff_BP + -0x94) = in_AX;
  while( true ) {
    iStack_2 = 0x4ca6;
    func_0x00024c86(iVar11);
    iStack_2 = 0x4dce;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x2dc;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x2f0;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x98a;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x4dd1;
    FUN_21f2_2d26(0x22b2);
    if (*(int *)(unaff_BP + -0x188) == 0) {
      iStack_2 = 0x4dd9;
    }
    else {
      iStack_2 = 0x4dd4;
    }
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x4ca6;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x4dde;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x98a;
    FUN_21f2_2d26(0x22b2);
    if (*(int *)(unaff_BP + -0x48) != 0) {
      iStack_2 = 0x934;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = 0x98a;
      FUN_21f2_2d26(0x22b2);
    }
    iStack_2 = unaff_BP + -0x15a;
    FUN_1def_07a4(0x22b2);
    *(undefined2 *)0xc2c = 1;
    *(undefined2 *)0xc20 = 1;
    iVar11 = 0x1bb4;
    iVar5 = iStack_2;
    iStack_2 = unaff_BP + -0x96;
    uVar6 = FUN_1def_0904(0x1bb4,*(undefined2 *)(unaff_BP + -0x48),unaff_BP + -0x15a,
                          unaff_BP + -0xba);
    *(undefined2 *)(unaff_BP + -0x58) = uVar6;
    *(undefined2 *)0xc2c = 0;
    *(undefined2 *)0xc20 = 0;
    iVar5 = iStack_2;
    if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
    if (*(int *)(unaff_BP + -0x58) == 0x14) break;
    if (*(int *)(unaff_BP + -0x58) == -1) {
      iStack_2 = 0;
      iVar11 = 0x885;
      func_0x0000daa6();
      *(undefined2 *)(unaff_BP + -0x96) = 0;
      if (0 < *(int *)(unaff_BP + -0x48)) {
        iStack_2 = *(int *)0x154;
        *(int *)(unaff_BP + -0x1a0) = iStack_2;
        FUN_2bb4_4988();
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
      }
      if (*(int *)(unaff_BP + -0x48) < 0) {
        iStack_2 = *(int *)0x152;
        *(int *)(unaff_BP + -0x1a0) = iStack_2;
        iVar11 = 0x1bb4;
        FUN_1def_186d();
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
      }
      iStack_2 = iVar11;
      func_0x0000abfa();
      iStack_2 = 1;
      func_0x0000b1d8();
      iStack_2 = 0x885;
      func_0x000297e6();
      iStack_2 = unaff_BP + -0x192;
      func_0x00029b55();
      iStack_2 = 0x22b2;
      iVar11 = 0x22b2;
      func_0x00029983();
    }
    if (*(int *)(unaff_BP + -0x58) == 1) {
      *(undefined2 *)(unaff_BP + -0x48) = 0;
      if (*(int *)(unaff_BP + -0x188) == 0) {
        *(undefined2 *)(unaff_BP + -0x188) = 1;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x188) = 0;
      }
    }
    if ((*(int *)(unaff_BP + -0x58) == 2) && (*(int *)(unaff_BP + -0x48) != 0)) {
      iStack_2 = iVar11;
      func_0x000297e6();
      iStack_2 = unaff_BP + -0x192;
      func_0x00029bb5();
LAB_3ab8_4fae:
      iStack_2 = 0x22b2;
      func_0x00029983();
      if ((*(int *)(unaff_BP + -0x188) != 0) && (*(int *)(unaff_BP + -0x92) < 0)) {
        uVar6 = func_0x0003fc30();
        return uVar6;
      }
      iStack_2 = 0x22b2;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      iVar11 = 0x1bb4;
      iVar5 = FUN_1def_043a(0x22b2);
      if (iVar5 != 0) {
        iStack_2 = *(int *)0x9efe;
        func_0x000297e6(0x1bb4,*(undefined2 *)0x9ef8,*(undefined2 *)0x9efa);
        func_0x000299d1(0x22b2);
        puVar7 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
        uVar6 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0x90) = *puVar7;
        *(undefined2 *)(unaff_BP + -0x8e) = uVar6;
        iStack_2 = *(int *)0x9efe;
        func_0x000297e6(0x1bb4,*(undefined2 *)0x9ef8,*(undefined2 *)0x9efa);
        func_0x000299d1(0x22b2);
        puVar7 = (undefined2 *)func_0x0001e558(0x22b2,0);
        uVar6 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0xc2) = *puVar7;
        *(undefined2 *)(unaff_BP + -0xc0) = uVar6;
        uVar6 = FUN_3ab8_52c7();
        return uVar6;
      }
    }
    else if ((*(int *)(unaff_BP + -0x96) != 0) && (*(int *)(unaff_BP + -0x58) == 0)) {
      iStack_2 = unaff_BP + -0x16e;
      iVar10 = 0x11f2;
      iVar5 = func_0x00015409(iVar11,*(undefined2 *)(unaff_BP + -0x96));
      iVar11 = iVar10;
      if (iVar5 != 0) {
        *(undefined2 *)(unaff_BP + -0x48) = 0;
        *(undefined2 *)(unaff_BP + -0x92) = 0;
        *(undefined2 *)(unaff_BP + -0x94) = 0;
        uVar6 = *(undefined2 *)(unaff_BP + -0xb8);
        *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)(unaff_BP + -0xba);
        *(undefined2 *)(unaff_BP + -0xb4) = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x16c);
        *(undefined2 *)(unaff_BP + -0x162) = *(undefined2 *)(unaff_BP + -0x16e);
        *(undefined2 *)(unaff_BP + -0x160) = uVar6;
LAB_3ab8_4c49:
        do {
          if (*(int *)(unaff_BP + -0x188) != 0) {
            iStack_2 = unaff_BP + -0x80;
            func_0x00024c86(iVar10);
            iStack_2 = 0x302;
            FUN_21f2_2d26(0x22b2);
            iVar10 = 0x1bb4;
            iVar5 = iStack_2;
            iStack_2 = unaff_BP + -0x96;
            iVar11 = FUN_1def_0904(0x22b2,1,unaff_BP + -0x15a,unaff_BP + -0x19e);
            *(int *)(unaff_BP + -6) = iVar11;
            if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
            if (iVar11 == -1) {
              uVar6 = FUN_3ab8_4a0e();
              return uVar6;
            }
            if (*(int *)(unaff_BP + -0x96) == 0) goto LAB_3ab8_4c49;
            iStack_2 = 0x1bb4;
            func_0x000297e6();
            iStack_2 = 0x22b2;
            func_0x00029d78();
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2);
            lVar14 = FUN_13bf_39a0(0x22b2);
            iVar11 = (int)((ulong)lVar14 >> 0x10);
            *(int *)(unaff_BP + -0x94) = (int)lVar14;
            *(int *)(unaff_BP + -0x92) = iVar11;
            if (-1 < lVar14) {
LAB_3ab8_4d64:
              iStack_2 = 0x1dc;
              func_0x00012276();
              *(undefined2 *)0xc22 = 1;
              iStack_2 = 2;
              iVar10 = 0xdef;
              FUN_1000_0599(0x11f2);
              if ((-1 < *(int *)(unaff_BP + -0x92)) &&
                 ((0 < *(int *)(unaff_BP + -0x92) || (*(int *)(unaff_BP + -0x94) != 0)))) {
                iStack_2 = 900;
                iVar10 = 0x11f2;
                func_0x00012276();
              }
              *(undefined2 *)(unaff_BP + -0x92) = 0;
              *(undefined2 *)(unaff_BP + -0x94) = 0;
              goto LAB_3ab8_4c49;
            }
            iStack_2 = -(iVar11 + (uint)((int)lVar14 != 0));
            uVar12 = iStack_2 == 0;
            puVar15 = (undefined2 *)func_0x00000271(0x11f2);
            unaff_SI = (undefined2 *)puVar15;
            puVar7 = (undefined2 *)(unaff_BP + -0x26);
            for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
              puVar3 = puVar7;
              puVar7 = puVar7 + 1;
              puVar2 = unaff_SI;
              unaff_SI = unaff_SI + 1;
              *puVar3 = *puVar2;
            }
            iStack_2 = 0;
            func_0x000297e6();
            iStack_2 = 0x22b2;
            func_0x000297e6();
            iStack_2 = 0x22b2;
            iVar10 = 0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar12) {
              iStack_2 = 0x22b2;
              func_0x000297e6();
              iStack_2 = 0x22b2;
              func_0x000297e6();
              iStack_2 = 0x22b2;
              iVar10 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar12) {
                *(undefined2 *)0xc22 = 1;
                iStack_2 = 2;
                FUN_1000_0599(0x22b2);
                iStack_2 = 0x396;
                func_0x00012276();
                goto LAB_3ab8_4d64;
              }
            }
          }
FUN_3ab8_4daa:
          do {
            iStack_2 = iVar10;
            func_0x000297e6();
            iStack_2 = 0x22b2;
            func_0x0002996b();
            iStack_2 = 0x22b2;
            func_0x00029983();
            iStack_2 = 0x22b2;
            func_0x0001bb4e();
            iStack_2 = 0x4ca6;
            func_0x00012276();
            iStack_2 = 0x4de1;
            func_0x00012276();
            iStack_2 = *(int *)0x9ea6;
            FUN_10ad_19f9(0x11f2,unaff_BP + -0x202,0x4de5,0x4de4,0x31e,*(undefined2 *)0x4e24,
                          *(undefined2 *)0x4e26);
            iStack_2 = 1;
            FUN_1000_0599(0x11f2);
            iStack_2 = unaff_BP + -0x202;
            func_0x00012276();
            iVar5 = iStack_2;
            if (*(int *)(unaff_BP + -0x188) != 0) {
              iStack_2 = 2;
              FUN_1000_0599(0x11f2);
              iStack_2 = unaff_BP + -0x80;
              func_0x00012276();
              iStack_2 = 0x4df1;
              func_0x00012276();
              *(undefined2 *)0xc22 = 1;
              iVar5 = iStack_2;
            }
            iStack_2 = 1;
            uVar6 = func_0x000021a4(0x11f2,unaff_BP + -0x1ae,unaff_BP + -0x1b2,unaff_BP + -0x19e,
                                    unaff_BP + -0x1a4);
            *(undefined2 *)(unaff_BP + -0x1aa) = uVar6;
            uVar12 = 0;
            uVar13 = *(int *)0x158 == 0;
            if (!(bool)uVar13) goto LAB_2bb4_480c_1;
            iStack_2 = 0xad;
            func_0x00029834();
            iStack_2 = 0x22b2;
            func_0x000297e6();
            iStack_2 = 0x22b2;
            func_0x00029ae7();
            iStack_2 = 0x22b2;
            func_0x00029d78();
            iStack_2 = 0x22b2;
            iVar10 = 0x22b2;
            FUN_28b3_1181();
          } while (!(bool)uVar12 && !(bool)uVar13);
          if (*(int *)(unaff_BP + -0x1aa) != -1) {
            if ((*(int *)(unaff_BP + -0x1aa) == 0x66) || (*(int *)(unaff_BP + -0x1aa) == 0)) {
              uVar6 = *(undefined2 *)(unaff_BP + -0x1ac);
              *(undefined2 *)0x4e24 = *(undefined2 *)(unaff_BP + -0x1ae);
              *(undefined2 *)0x4e26 = uVar6;
LAB_3ab8_4edd:
              if (*(int *)(unaff_BP + -0x188) != 0) goto LAB_3ab8_4f54;
              iStack_2 = 0x3dd;
              func_0x00024c86(iVar10);
              *(undefined2 *)0xc20 = 1;
              iVar10 = 0x1bb4;
              iVar11 = iStack_2;
              iStack_2 = unaff_BP + -0x96;
              uVar6 = FUN_1def_0904(0x22b2,1,unaff_BP + -0x15a,unaff_BP + -0x166);
              *(undefined2 *)(unaff_BP + -0x58) = uVar6;
              *(undefined2 *)0xc20 = 0;
              iVar5 = iStack_2;
              if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
              if (*(int *)(unaff_BP + -0x58) != -1) goto LAB_3ab8_4f34;
            }
            goto FUN_3ab8_4daa;
          }
          iVar11 = iVar10;
        } while (*(int *)(unaff_BP + -0x188) != 0);
      }
    }
  }
  *(undefined2 *)(unaff_BP + -0x48) = 0;
LAB_3ab8_4664:
  do {
    if (*(char *)0x1cd != '\0') {
      *(uint *)0x1d0 = (uint)*(byte *)0x1cd;
    }
    iStack_2 = 0x2f0;
    FUN_21f2_3454(unaff_BP + -0x15a);
    if (*(char *)0x4e23 == '\0') {
      iStack_2 = 0x2b8;
      uVar6 = 0x22b2;
      FUN_21f2_2d26(0x22b2);
    }
    else {
      iStack_2 = 0x2b2;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = *(int *)0x1d0;
      FUN_21f2_3454(unaff_BP + -0xf6);
      if (*(byte *)0x123 < 6) {
        *(undefined2 *)(unaff_BP + -0x60) = 7;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x60) = *(undefined2 *)(*(int *)0x1d0 * 2 + 0xa70);
        if (*(int *)0x1d0 == 7) {
          *(undefined2 *)(unaff_BP + -0x60) = *(undefined2 *)0xa80;
        }
      }
      *(undefined2 *)0xc22 = 1;
      iStack_2 = -1;
      uVar6 = 0xdef;
      FUN_1000_02b5(unaff_BP + -0xf6,0x1b,2);
    }
    iStack_2 = 0x4dc4;
    FUN_21f2_2d26(uVar6);
    iStack_2 = 0x98a;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x4ca6;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x98a;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = unaff_BP + -0x46;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x98a;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x4dc7;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x98a;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = unaff_BP + -0xb2;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x98a;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = unaff_BP + -0x15a;
    FUN_1def_07a4(0x22b2);
    *(undefined2 *)0xc1a = 1;
    *(undefined2 *)0xc20 = 1;
    if (*(char *)0x4e23 == '\0') {
      *(undefined2 *)(unaff_BP + -100) = *(undefined2 *)(unaff_BP + -0x48);
    }
    else if (*(int *)(unaff_BP + -0x48) == 0) {
      *(undefined2 *)(unaff_BP + -100) = 10000;
    }
    else {
      *(undefined2 *)(unaff_BP + -100) = 9999;
    }
    iVar10 = 0x1bb4;
    iVar5 = iStack_2;
    iStack_2 = unaff_BP + -0x96;
    uVar6 = FUN_1def_0904(0x1bb4,*(undefined2 *)(unaff_BP + -100),unaff_BP + -0x15a,
                          unaff_BP + -0x19e);
    *(undefined2 *)(unaff_BP + -0x18a) = uVar6;
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) {
LAB_2bb4_480c_1:
      iStack_2 = *(int *)(unaff_BP + -4);
      *(int *)0x1d0 = iStack_2;
      *(int *)(iVar5 + (int)unaff_SI) = *(int *)(iVar5 + (int)unaff_SI) + iStack_2;
      while( true ) {
        FUN_3ab8_5089();
        uVar12 = (undefined1 *)0xffc9 < &iStack_2;
        uVar13 = &stack0x0000 == (undefined1 *)0xffcc;
        in_stack_00000030 = 0x360;
        FUN_32b2_6cc6();
        in_stack_00000030 = 0x369;
        FUN_32b2_701d();
        in_stack_00000030 = 0x36e;
        FUN_32b2_7258();
        in_stack_00000030 = 0x376;
        FUN_32b2_6e99();
        in_stack_00000030 = 0x37e;
        FUN_32b2_6ef9();
        in_stack_00000030 = 0x387;
        FUN_32b2_6cc6();
        in_stack_00000030 = 0x390;
        FUN_32b2_701d();
        in_stack_00000030 = 0x395;
        FUN_32b2_7258();
        in_stack_00000030 = 0x39e;
        FUN_32b2_6e99();
        in_stack_00000030 = 0x3a6;
        FUN_32b2_6ef9();
        in_stack_00000030 = 0x3af;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x3b4;
        FUN_32b2_6fc7();
        in_stack_00000030 = 0x3bc;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x3c1;
        FUN_32b2_6fc7();
        in_stack_00000030 = 0x3ca;
        FUN_32b2_710c();
        in_stack_00000030 = 0x3cf;
        FUN_32b2_7191();
        if (!(bool)uVar12 && !(bool)uVar13) {
          in_stack_00000030 = 0x3da;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x3e2;
          FUN_32b2_6d14();
          in_stack_00000030 = 999;
          FUN_32b2_7191();
          if (!(bool)uVar13) {
            in_stack_00000030 = 0x431;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x439;
            FUN_32b2_7124();
            in_stack_00000030 = 0x441;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x44a;
            FUN_32b2_704d();
            in_stack_00000030 = 0x453;
            FUN_32b2_7035();
            in_stack_00000030 = 0x45c;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x464;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x46c;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x474;
            FUN_32b2_710c();
            in_stack_00000030 = 0x47c;
            FUN_32b2_710c();
            in_stack_00000030 = 0x484;
            FUN_32b2_710c();
            in_stack_00000030 = 0x48c;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x494;
            FUN_32b2_710c();
            in_stack_00000030 = 0x49d;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x4a2;
            FUN_32b2_718c();
            in_stack_00000030 = 0x4ab;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x4b3;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x4bc;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x4c4;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4cd;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4d5;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4dd;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4e6;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x4ee;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x4f7;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x500;
            FUN_32b2_710c();
            in_stack_00000030 = 0x509;
            FUN_32b2_70dc();
            in_stack_00000030 = 0x511;
            FUN_32b2_710c();
            in_stack_00000030 = 0x519;
            FUN_32b2_710c();
            in_stack_00000030 = 0x522;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x52b;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x534;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x53d;
            FUN_32b2_710c();
            in_stack_00000030 = 0x546;
            FUN_32b2_710c();
            in_stack_00000030 = 0x54f;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x558;
            FUN_32b2_710c();
            in_stack_00000030 = 0x55d;
            FUN_32b2_718c();
            in_stack_00000030 = 0x566;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x56f;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x574;
            FUN_32b2_6fd6();
            in_stack_00000030 = 0x57d;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x586;
            FUN_32b2_710c();
            in_stack_00000030 = 0x58b;
            FUN_32b2_7182();
            in_stack_00000030 = 0x594;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x59c;
            FUN_32b2_710c();
            in_stack_00000030 = 0x5a5;
            FUN_32b2_7154();
            in_stack_00000030 = 0x5ae;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x5b7;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x5c0;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x5c9;
            FUN_32b2_6eb1();
            in_stack_00000030 = unaff_BP + -0x62;
            in_stack_0000002e = 0x32b2;
            in_stack_0000002c = 0x5db;
            FUN_32b2_6cc6();
            in_stack_0000002e = 0x32b2;
            in_stack_0000002c = 0x5e0;
            FUN_32b2_7258();
            in_stack_00000026 = 0x32b2;
            in_stack_00000024 = 0x5ea;
            FUN_32b2_6eb1();
            in_stack_00000026 = 0x32b2;
            in_stack_00000024 = 0x5f2;
            FUN_32b2_6cc6();
            in_stack_00000026 = 0x32b2;
            in_stack_00000024 = 0x5f7;
            FUN_32b2_7258();
            in_stack_0000001e = 0x32b2;
            in_stack_0000001c = 0x601;
            FUN_32b2_6eb1();
            in_stack_0000001e = *(undefined2 *)(unaff_BP + -100);
            in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x66);
            in_stack_0000001a = *(undefined2 *)(unaff_BP + -0x68);
            in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x6a);
            in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x48);
            in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x4a);
            in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x4c);
            in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4e);
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            FUN_32b2_6d14();
            iStack_2 = 0x32b2;
            FUN_32b2_6eb1();
            iStack_2 = 0;
            FUN_3ab8_5089();
            uVar6 = *(undefined2 *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
            *(undefined2 *)(unaff_BP + -0x84) = uVar6;
            uVar6 = *(undefined2 *)(unaff_BP + -0x88);
            *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
            *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
            in_stack_00000030 = unaff_BP + -0x86;
            puVar9 = &stack0x0010;
            puVar7 = (undefined2 *)(unaff_BP + 0x1c);
            for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              puVar15 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar15;
            }
            iVar11 = func_0x0003fdaf();
            uVar12 = 0;
            uVar13 = iVar11 == 0;
            if (!(bool)uVar13) {
              in_stack_00000030 = 0x694;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x69d;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x6a5;
              FUN_32b2_701d();
              in_stack_00000030 = 0x6aa;
              FUN_32b2_6fc7();
              in_stack_00000030 = 0x6af;
              FUN_32b2_7258();
              in_stack_00000030 = 0x6b4;
              FUN_32b2_7191();
              if ((bool)uVar12 || (bool)uVar13) {
                in_stack_00000030 = 0x6bf;
                FUN_32b2_6d14();
                in_stack_00000030 = 0x6c8;
                FUN_32b2_6cc6();
                in_stack_00000030 = 0x6d1;
                FUN_32b2_701d();
                in_stack_00000030 = 0x6d6;
                FUN_32b2_6fc7();
                in_stack_00000030 = 0x6db;
                FUN_32b2_7258();
                in_stack_00000030 = 0x6e0;
                FUN_32b2_7191();
                if ((bool)uVar12 || (bool)uVar13) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
              }
            }
            in_stack_00000030 = 0x6f8;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x700;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x708;
            FUN_32b2_710c();
            in_stack_00000030 = 0x711;
            FUN_32b2_710c();
            in_stack_00000030 = 0x71a;
            FUN_32b2_7154();
            in_stack_00000030 = 0x71f;
            FUN_32b2_7191();
            if (!(bool)uVar12) {
              in_stack_00000030 = 0x72d;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x732;
              FUN_32b2_6fc7();
              in_stack_00000030 = 0x73a;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x742;
              FUN_32b2_710c();
              in_stack_00000030 = 0x74b;
              FUN_32b2_710c();
              in_stack_00000030 = 0x750;
              FUN_32b2_7191();
              if (!(bool)uVar12) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
              in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb8);
              in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xba);
              in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xbc);
              in_stack_0000002a = 0x32b2;
              in_stack_00000028 = 0x774;
              FUN_32b2_7592();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x77e;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x786;
              FUN_32b2_70dc();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x78e;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x797;
              FUN_32b2_710c();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x79c;
              FUN_32b2_7182();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7a5;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7ad;
              FUN_32b2_710c();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7b5;
              FUN_32b2_7154();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7be;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7c7;
              FUN_32b2_6eb1();
              in_stack_00000030 = unaff_BP + -0x8a;
              in_stack_0000002e = unaff_BP + -0x62;
              in_stack_0000002c = 0x32b2;
              in_stack_0000002a = 0x7d9;
              FUN_32b2_6cc6();
              in_stack_0000002c = 0x32b2;
              in_stack_0000002a = 0x7de;
              FUN_32b2_7258();
              in_stack_00000024 = 0x32b2;
              in_stack_00000022 = 0x7e8;
              FUN_32b2_6eb1();
              in_stack_00000024 = 0x32b2;
              in_stack_00000022 = 0x7f0;
              FUN_32b2_6cc6();
              in_stack_00000024 = 0x32b2;
              in_stack_00000022 = 0x7f5;
              FUN_32b2_7258();
              in_stack_0000001c = 0x32b2;
              in_stack_0000001a = 0x7ff;
              FUN_32b2_6eb1();
              in_stack_0000001c = *(undefined2 *)(unaff_BP + -100);
              in_stack_0000001a = *(undefined2 *)(unaff_BP + -0x66);
              in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x68);
              in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x6a);
              in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x48);
              in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x4a);
              in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4c);
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              FUN_3ab8_5089(0x32b2);
              uVar12 = (undefined1 *)0xffc9 < &stack0xfffc;
              uVar13 = &stack0x0000 == (undefined1 *)0xffce;
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x84f;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x857;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x85c;
              FUN_32b2_7191();
              if ((bool)uVar13) {
                uVar6 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar6;
              }
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x872;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x87a;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x87f;
              FUN_32b2_7191();
              if ((bool)uVar13) {
                uVar6 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar6;
              }
              uVar6 = *(undefined2 *)(unaff_BP + -0x60);
              puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
              *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
              puVar7[1] = uVar6;
              uVar6 = *(undefined2 *)(unaff_BP + -0x88);
              puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
              *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar7[1] = uVar6;
              uVar6 = *(undefined2 *)(unaff_BP + -0x60);
              puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
              puVar7[1] = uVar6;
              uVar6 = *(undefined2 *)(unaff_BP + -0x88);
              puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar7[1] = uVar6;
              piVar1 = (int *)(unaff_BP + -0x36);
              *piVar1 = *piVar1 + 1;
              uVar13 = *piVar1 == 0;
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x8d7;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x8e0;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x8e5;
              FUN_32b2_7191();
              if (!(bool)uVar12 && !(bool)uVar13) {
                in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb6);
                in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xb8);
                in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xba);
                in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xbc);
                in_stack_00000028 = 0x32b2;
                in_stack_00000026 = 0x8ff;
                FUN_32b2_7592();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x909;
                FUN_32b2_6d14();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x911;
                FUN_32b2_7154();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x916;
                FUN_32b2_6fd6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x91e;
                FUN_32b2_6d14();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x927;
                FUN_32b2_710c();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x92c;
                FUN_32b2_7182();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x935;
                FUN_32b2_6e99();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x93d;
                FUN_32b2_710c();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x945;
                FUN_32b2_7154();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x94e;
                FUN_32b2_6e99();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x957;
                FUN_32b2_6eb1();
                in_stack_0000002e = unaff_BP + -0x8a;
                in_stack_0000002c = unaff_BP + -0x62;
                in_stack_0000002a = 0x32b2;
                in_stack_00000028 = 0x969;
                FUN_32b2_6cc6();
                in_stack_0000002a = 0x32b2;
                in_stack_00000028 = 0x96e;
                FUN_32b2_7258();
                in_stack_00000022 = 0x32b2;
                in_stack_00000020 = 0x978;
                FUN_32b2_6eb1();
                in_stack_00000022 = 0x32b2;
                in_stack_00000020 = 0x980;
                FUN_32b2_6cc6();
                in_stack_00000022 = 0x32b2;
                in_stack_00000020 = 0x985;
                FUN_32b2_7258();
                in_stack_0000001a = 0x32b2;
                in_stack_00000018 = 0x98f;
                FUN_32b2_6eb1();
                in_stack_0000001a = *(undefined2 *)(unaff_BP + -100);
                in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x66);
                in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x68);
                in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x6a);
                in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x48);
                in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4a);
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_3ab8_5089(0x32b2,0);
                uVar12 = &stack0x0000 == (undefined1 *)0xffd0;
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x9df;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x9e7;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x9ec;
                FUN_32b2_7191();
                if ((bool)uVar12) {
                  uVar6 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar6;
                }
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0xa02;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0xa0a;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0xa0f;
                FUN_32b2_7191();
                if ((bool)uVar12) {
                  uVar6 = *(undefined2 *)(unaff_BP + 0xc);
                  *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                  *(undefined2 *)(unaff_BP + -0x88) = uVar6;
                }
                uVar6 = *(undefined2 *)(unaff_BP + -0x60);
                puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
                puVar7[1] = uVar6;
                uVar6 = *(undefined2 *)(unaff_BP + -0x88);
                puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar7[1] = uVar6;
                *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
              }
              return *(undefined2 *)(unaff_BP + -0x36);
            }
          }
          return 0;
        }
        in_stack_00000030 = 0x3f5;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x3ff;
        FUN_32b2_7154();
        in_stack_00000030 = 0x405;
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
        in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb8);
        in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xba);
        in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xbc);
        in_stack_0000002a = 0x32b2;
        in_stack_00000028 = 0x119;
        FUN_32b2_75fe();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x123;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 299;
        FUN_32b2_704d();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x133;
        FUN_32b2_7095();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x13b;
        FUN_32b2_6eb1();
        in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb6);
        in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xb8);
        in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xba);
        in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xbc);
        in_stack_00000028 = 0x32b2;
        in_stack_00000026 = 0x150;
        FUN_32b2_75ec();
        uVar12 = &stack0x0000 == (undefined1 *)0xffd0;
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x15a;
        FUN_32b2_6d14();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x162;
        FUN_32b2_704d();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x16a;
        FUN_32b2_7095();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x173;
        FUN_32b2_6eb1();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x17b;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x183;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x188;
        FUN_32b2_7191();
        if ((bool)uVar12) {
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x192;
          FUN_32b2_6cc6();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x19a;
          FUN_32b2_6cc6();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x19f;
          FUN_32b2_7191();
          if ((bool)uVar12) {
            return 0;
          }
        }
        in_stack_0000002e = unaff_BP + -0xa8;
        in_stack_0000002c = unaff_BP + -0x1c;
        in_stack_0000002a = *(undefined2 *)(unaff_BP + -0x7c);
        in_stack_00000028 = *(undefined2 *)(unaff_BP + -0x7e);
        in_stack_00000026 = *(undefined2 *)(unaff_BP + -0x80);
        in_stack_00000024 = *(undefined2 *)(unaff_BP + -0x82);
        in_stack_00000022 = *(undefined2 *)(unaff_BP + -0x58);
        in_stack_00000020 = *(undefined2 *)(unaff_BP + -0x5a);
        in_stack_0000001e = *(undefined2 *)(unaff_BP + -0x5c);
        in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x5e);
        in_stack_0000001a = 0x32b2;
        in_stack_00000018 = 0x1d0;
        FUN_32b2_6cc6();
        in_stack_0000001a = 0x32b2;
        in_stack_00000018 = 0x1d5;
        FUN_32b2_7258();
        in_stack_00000012 = 0x32b2;
        in_stack_00000010 = 0x1df;
        FUN_32b2_6eb1();
        in_stack_00000012 = 0x32b2;
        in_stack_00000010 = 0x1e7;
        FUN_32b2_6cc6();
        in_stack_00000012 = 0x32b2;
        in_stack_00000010 = 0x1ec;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
        iVar11 = func_0x0003fb3d();
        if (iVar11 == 0) break;
        in_stack_00000030 = 0x209;
        FUN_32b2_6cc6();
        in_stack_00000030 = 0x20e;
        FUN_32b2_7258();
        in_stack_00000030 = 0x216;
        FUN_32b2_6e99();
        in_stack_00000030 = 0x21e;
        FUN_32b2_6ef9();
        in_stack_00000030 = unaff_BP + -0xa4;
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x231;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x236;
        FUN_32b2_7258();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x240;
        FUN_32b2_6eb1();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x248;
        FUN_32b2_6cc6();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x24d;
        FUN_32b2_7258();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 599;
        FUN_32b2_6eb1();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 0x25f;
        FUN_32b2_6d14();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x269;
        FUN_32b2_6eb1();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x271;
        FUN_32b2_6cc6();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x276;
        FUN_32b2_7258();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x27e;
        FUN_32b2_6e99();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        iStack_2 = 0x32b2;
        FUN_32b2_6eb1();
        iStack_2 = 1;
        FUN_3ab8_5089();
        in_stack_00000030 = unaff_BP + -0xd0;
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x2d4;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x2d9;
        FUN_32b2_7258();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x2e3;
        FUN_32b2_6eb1();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x2eb;
        FUN_32b2_6cc6();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x2f0;
        FUN_32b2_7258();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 0x2fa;
        FUN_32b2_6eb1();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 0x302;
        FUN_32b2_6d14();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x30c;
        FUN_32b2_6eb1();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x314;
        FUN_32b2_6d14();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        iStack_2 = 0x32b2;
        FUN_32b2_6eb1();
        iStack_2 = 1;
      }
      return 0;
    }
    if (*(int *)0xc18 == 0) {
      if (*(int *)(unaff_BP + -0x18a) == 1) {
        *(undefined2 *)(unaff_BP + -0x96) = 0;
        *(undefined2 *)(unaff_BP + -0x48) = 0;
        *(char *)0x4e23 = '\x01' - *(char *)0x4e23;
      }
      if (*(int *)(unaff_BP + -0x18a) == -1) {
        iStack_2 = 0;
        iVar11 = 0x885;
        func_0x0000daa6();
        *(undefined2 *)(unaff_BP + -0x96) = 0;
        if (0 < *(int *)(unaff_BP + -0x48)) {
          iStack_2 = *(int *)0x154;
          *(int *)(unaff_BP + -0x1a0) = iStack_2;
          FUN_2bb4_4988();
          *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
        }
        if (*(int *)(unaff_BP + -0x48) < 0) {
          iStack_2 = *(int *)0x152;
          *(int *)(unaff_BP + -0x1a0) = iStack_2;
          iVar11 = 0x1bb4;
          FUN_1def_186d();
          *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
        }
        iStack_2 = iVar11;
        func_0x0000abfa();
        iStack_2 = 1;
        iVar10 = 0x885;
        func_0x0000b1d8();
      }
      if (((0x61ff < *(int *)(unaff_BP + -0x18a)) && (*(int *)(unaff_BP + -0x18a) < 0x6701)) ||
         ((5 < *(byte *)0x123 && (*(int *)(unaff_BP + -0x18a) == 0x6800)))) {
        *(undefined2 *)(unaff_BP + -0x96) = 0;
        uVar4 = *(int *)(unaff_BP + -0x18a) + 0x9f00;
        uVar8 = (int)uVar4 >> 0xf;
        iVar11 = ((int)((uVar4 ^ uVar8) - uVar8) >> 8 ^ uVar8) - uVar8;
        *(int *)0x1d0 = iVar11;
        if ((*(char *)0x1cd == '\0') && (iVar11 != 7)) {
          *(int *)(unaff_BP + -4) = iVar11;
        }
        else {
          *(undefined1 *)0x1cd = *(undefined1 *)0x1d0;
        }
      }
      if ((*(int *)(unaff_BP + -0x18a) < 2) || (5 < *(int *)(unaff_BP + -0x18a))) break;
      *(int *)(unaff_BP + -0x18a) = *(int *)(unaff_BP + -0x18a) + -1;
      iVar11 = iVar10;
      goto LAB_3ab8_4938;
    }
    *(undefined2 *)(unaff_BP + -0x48) = 0;
    iStack_2 = 0x1bb4;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x0000507a(0x22b2);
  } while( true );
  if (*(int *)(unaff_BP + -0x96) == 0) goto LAB_3ab8_4664;
  iStack_2 = unaff_BP + -0x1a4;
  iVar11 = 0x11f2;
  iVar5 = func_0x00015409(iVar10,*(undefined2 *)(unaff_BP + -0x96));
  if (iVar5 == 0) goto LAB_3ab8_4664;
  *(undefined2 *)(unaff_BP + -0x18a) = 0;
LAB_3ab8_4938:
  if (*(int *)(unaff_BP + -0x18a) == 0) {
    iStack_2 = iVar11;
    if (*(char *)0x4e23 == '\0') {
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
                    /* WARNING: Call to offcut address within same function */
      iVar11 = func_0x00030353(0x22b2);
      if (iVar11 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
      }
    }
    else {
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      iVar11 = FUN_1def_1208();
      if (iVar11 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
      }
    }
    goto LAB_3ab8_4664;
  }
  in_AX = 0;
  *(undefined2 *)(unaff_BP + -0x48) = 0;
  *(undefined2 *)(unaff_BP + -0x188) = 0;
  if (*(int *)(unaff_BP + -0x18a) != 1) {
    uVar6 = FUN_3ab8_5357();
    return uVar6;
  }
  goto code_r0x0003f58e;
LAB_3ab8_4f34:
  if (*(int *)(unaff_BP + -0x96) != 0) {
    iStack_2 = unaff_BP + -0x17a;
    iVar10 = 0x11f2;
    iVar11 = func_0x00015409(0x1bb4,*(undefined2 *)(unaff_BP + -0x96));
    if (iVar11 != 0) {
LAB_3ab8_4f54:
      uVar6 = *(undefined2 *)(unaff_BP + -0x164);
      *(undefined2 *)(unaff_BP + -0x15e) = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -0x15c) = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x178);
      *(undefined2 *)(unaff_BP + -0x172) = *(undefined2 *)(unaff_BP + -0x17a);
      *(undefined2 *)(unaff_BP + -0x170) = uVar6;
      iStack_2 = iVar10;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      func_0x00029b9d();
      iStack_2 = 0x22b2;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      func_0x00029983();
      iStack_2 = 0x22b2;
      func_0x000297e6();
      goto LAB_3ab8_4fae;
    }
  }
  goto LAB_3ab8_4edd;
}



/* 3ab8:4c91  FUN_3ab8_4c91  282 bytes, 1 callers */

/* WARNING: Possible PIC construction at 0x0003f7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0003f7d0) */

undefined2 FUN_3ab8_4c91(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int in_AX;
  undefined2 uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  int in_BX;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar9;
  int iVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  long lVar13;
  undefined2 *puVar14;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000016;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  undefined2 in_stack_00000024;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  int in_stack_0000002c;
  int in_stack_0000002e;
  int in_stack_00000030;
  undefined2 uVar15;
  undefined2 uVar16;
  int iStack_2;
  
  iVar7 = 0x3ab8;
code_r0x0003f813:
  *(int *)(unaff_BP + -6) = in_AX;
  if (*(int *)0x158 != 0) {
LAB_2bb4_480c_1:
    iStack_2 = *(int *)(unaff_BP + -4);
    *(int *)0x1d0 = iStack_2;
    *(int *)(in_BX + (int)unaff_SI) = *(int *)(in_BX + (int)unaff_SI) + iStack_2;
    while( true ) {
      FUN_3ab8_5089();
      uVar11 = (undefined1 *)0xffc9 < &iStack_2;
      uVar12 = &stack0x0000 == (undefined1 *)0xffcc;
      in_stack_00000030 = 0x360;
      FUN_32b2_6cc6();
      in_stack_00000030 = 0x369;
      FUN_32b2_701d();
      in_stack_00000030 = 0x36e;
      FUN_32b2_7258();
      in_stack_00000030 = 0x376;
      FUN_32b2_6e99();
      in_stack_00000030 = 0x37e;
      FUN_32b2_6ef9();
      in_stack_00000030 = 0x387;
      FUN_32b2_6cc6();
      in_stack_00000030 = 0x390;
      FUN_32b2_701d();
      in_stack_00000030 = 0x395;
      FUN_32b2_7258();
      in_stack_00000030 = 0x39e;
      FUN_32b2_6e99();
      in_stack_00000030 = 0x3a6;
      FUN_32b2_6ef9();
      in_stack_00000030 = 0x3af;
      FUN_32b2_6d14();
      in_stack_00000030 = 0x3b4;
      FUN_32b2_6fc7();
      in_stack_00000030 = 0x3bc;
      FUN_32b2_6d14();
      in_stack_00000030 = 0x3c1;
      FUN_32b2_6fc7();
      in_stack_00000030 = 0x3ca;
      FUN_32b2_710c();
      in_stack_00000030 = 0x3cf;
      FUN_32b2_7191();
      if (!(bool)uVar11 && !(bool)uVar12) {
        in_stack_00000030 = 0x3da;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x3e2;
        FUN_32b2_6d14();
        in_stack_00000030 = 999;
        FUN_32b2_7191();
        if (!(bool)uVar12) {
          in_stack_00000030 = 0x431;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x439;
          FUN_32b2_7124();
          in_stack_00000030 = 0x441;
          FUN_32b2_6e99();
          in_stack_00000030 = 0x44a;
          FUN_32b2_704d();
          in_stack_00000030 = 0x453;
          FUN_32b2_7035();
          in_stack_00000030 = 0x45c;
          FUN_32b2_6e99();
          in_stack_00000030 = 0x464;
          FUN_32b2_6eb1();
          in_stack_00000030 = 0x46c;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x474;
          FUN_32b2_710c();
          in_stack_00000030 = 0x47c;
          FUN_32b2_710c();
          in_stack_00000030 = 0x484;
          FUN_32b2_710c();
          in_stack_00000030 = 0x48c;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x494;
          FUN_32b2_710c();
          in_stack_00000030 = 0x49d;
          FUN_32b2_6e99();
          in_stack_00000030 = 0x4a2;
          FUN_32b2_718c();
          in_stack_00000030 = 0x4ab;
          FUN_32b2_6e99();
          in_stack_00000030 = 0x4b3;
          FUN_32b2_6eb1();
          in_stack_00000030 = 0x4bc;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x4c4;
          FUN_32b2_710c();
          in_stack_00000030 = 0x4cd;
          FUN_32b2_710c();
          in_stack_00000030 = 0x4d5;
          FUN_32b2_710c();
          in_stack_00000030 = 0x4dd;
          FUN_32b2_710c();
          in_stack_00000030 = 0x4e6;
          FUN_32b2_6e99();
          in_stack_00000030 = 0x4ee;
          FUN_32b2_6eb1();
          in_stack_00000030 = 0x4f7;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x500;
          FUN_32b2_710c();
          in_stack_00000030 = 0x509;
          FUN_32b2_70dc();
          in_stack_00000030 = 0x511;
          FUN_32b2_710c();
          in_stack_00000030 = 0x519;
          FUN_32b2_710c();
          in_stack_00000030 = 0x522;
          FUN_32b2_6e99();
          in_stack_00000030 = 0x52b;
          FUN_32b2_6eb1();
          in_stack_00000030 = 0x534;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x53d;
          FUN_32b2_710c();
          in_stack_00000030 = 0x546;
          FUN_32b2_710c();
          in_stack_00000030 = 0x54f;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x558;
          FUN_32b2_710c();
          in_stack_00000030 = 0x55d;
          FUN_32b2_718c();
          in_stack_00000030 = 0x566;
          FUN_32b2_6eb1();
          in_stack_00000030 = 0x56f;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x574;
          FUN_32b2_6fd6();
          in_stack_00000030 = 0x57d;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x586;
          FUN_32b2_710c();
          in_stack_00000030 = 0x58b;
          FUN_32b2_7182();
          in_stack_00000030 = 0x594;
          FUN_32b2_6e99();
          in_stack_00000030 = 0x59c;
          FUN_32b2_710c();
          in_stack_00000030 = 0x5a5;
          FUN_32b2_7154();
          in_stack_00000030 = 0x5ae;
          FUN_32b2_6e99();
          in_stack_00000030 = 0x5b7;
          FUN_32b2_6eb1();
          in_stack_00000030 = 0x5c0;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x5c9;
          FUN_32b2_6eb1();
          in_stack_00000030 = unaff_BP + -0x62;
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x5db;
          FUN_32b2_6cc6();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x5e0;
          FUN_32b2_7258();
          in_stack_00000026 = 0x32b2;
          in_stack_00000024 = 0x5ea;
          FUN_32b2_6eb1();
          in_stack_00000026 = 0x32b2;
          in_stack_00000024 = 0x5f2;
          FUN_32b2_6cc6();
          in_stack_00000026 = 0x32b2;
          in_stack_00000024 = 0x5f7;
          FUN_32b2_7258();
          in_stack_0000001e = 0x32b2;
          in_stack_0000001c = 0x601;
          FUN_32b2_6eb1();
          in_stack_0000001e = *(undefined2 *)(unaff_BP + -100);
          in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x66);
          in_stack_0000001a = *(undefined2 *)(unaff_BP + -0x68);
          in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x6a);
          in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x48);
          in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x4a);
          in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x4c);
          in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4e);
          FUN_32b2_6d14();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          iStack_2 = 0x32b2;
          FUN_32b2_6eb1();
          iStack_2 = 0;
          FUN_3ab8_5089();
          uVar5 = *(undefined2 *)(unaff_BP + -0x60);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)(unaff_BP + -0x84) = uVar5;
          uVar5 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x9c) = uVar5;
          in_stack_00000030 = unaff_BP + -0x86;
          puVar9 = &stack0x0010;
          puVar6 = (undefined2 *)(unaff_BP + 0x1c);
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            puVar14 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar14;
          }
          iVar7 = func_0x0003fdaf();
          uVar11 = 0;
          uVar12 = iVar7 == 0;
          if (!(bool)uVar12) {
            in_stack_00000030 = 0x694;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x69d;
            FUN_32b2_6cc6();
            in_stack_00000030 = 0x6a5;
            FUN_32b2_701d();
            in_stack_00000030 = 0x6aa;
            FUN_32b2_6fc7();
            in_stack_00000030 = 0x6af;
            FUN_32b2_7258();
            in_stack_00000030 = 0x6b4;
            FUN_32b2_7191();
            if ((bool)uVar11 || (bool)uVar12) {
              in_stack_00000030 = 0x6bf;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x6c8;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x6d1;
              FUN_32b2_701d();
              in_stack_00000030 = 0x6d6;
              FUN_32b2_6fc7();
              in_stack_00000030 = 0x6db;
              FUN_32b2_7258();
              in_stack_00000030 = 0x6e0;
              FUN_32b2_7191();
              if ((bool)uVar11 || (bool)uVar12) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
            }
          }
          in_stack_00000030 = 0x6f8;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x700;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x708;
          FUN_32b2_710c();
          in_stack_00000030 = 0x711;
          FUN_32b2_710c();
          in_stack_00000030 = 0x71a;
          FUN_32b2_7154();
          in_stack_00000030 = 0x71f;
          FUN_32b2_7191();
          if (!(bool)uVar11) {
            in_stack_00000030 = 0x72d;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x732;
            FUN_32b2_6fc7();
            in_stack_00000030 = 0x73a;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x742;
            FUN_32b2_710c();
            in_stack_00000030 = 0x74b;
            FUN_32b2_710c();
            in_stack_00000030 = 0x750;
            FUN_32b2_7191();
            if (!(bool)uVar11) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
            in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb8);
            in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xba);
            in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xbc);
            in_stack_0000002a = 0x32b2;
            in_stack_00000028 = 0x774;
            FUN_32b2_7592();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x77e;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x786;
            FUN_32b2_70dc();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x78e;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x797;
            FUN_32b2_710c();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x79c;
            FUN_32b2_7182();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x7a5;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x7ad;
            FUN_32b2_710c();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x7b5;
            FUN_32b2_7154();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x7be;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x7c7;
            FUN_32b2_6eb1();
            in_stack_00000030 = unaff_BP + -0x8a;
            in_stack_0000002e = unaff_BP + -0x62;
            in_stack_0000002c = 0x32b2;
            in_stack_0000002a = 0x7d9;
            FUN_32b2_6cc6();
            in_stack_0000002c = 0x32b2;
            in_stack_0000002a = 0x7de;
            FUN_32b2_7258();
            in_stack_00000024 = 0x32b2;
            in_stack_00000022 = 0x7e8;
            FUN_32b2_6eb1();
            in_stack_00000024 = 0x32b2;
            in_stack_00000022 = 0x7f0;
            FUN_32b2_6cc6();
            in_stack_00000024 = 0x32b2;
            in_stack_00000022 = 0x7f5;
            FUN_32b2_7258();
            in_stack_0000001c = 0x32b2;
            in_stack_0000001a = 0x7ff;
            FUN_32b2_6eb1();
            in_stack_0000001c = *(undefined2 *)(unaff_BP + -100);
            in_stack_0000001a = *(undefined2 *)(unaff_BP + -0x66);
            in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x68);
            in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x6a);
            in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x48);
            in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x4a);
            in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4c);
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            FUN_3ab8_5089(0x32b2);
            uVar11 = (undefined1 *)0xffc9 < &stack0xfffc;
            uVar12 = &stack0x0000 == (undefined1 *)0xffce;
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x84f;
            FUN_32b2_6cc6();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x857;
            FUN_32b2_6cc6();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x85c;
            FUN_32b2_7191();
            if ((bool)uVar12) {
              uVar5 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar5;
            }
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x872;
            FUN_32b2_6cc6();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x87a;
            FUN_32b2_6cc6();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x87f;
            FUN_32b2_7191();
            if ((bool)uVar12) {
              uVar5 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar5;
            }
            uVar5 = *(undefined2 *)(unaff_BP + -0x60);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
            puVar6[1] = uVar5;
            uVar5 = *(undefined2 *)(unaff_BP + -0x88);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar6[1] = uVar5;
            uVar5 = *(undefined2 *)(unaff_BP + -0x60);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
            puVar6[1] = uVar5;
            uVar5 = *(undefined2 *)(unaff_BP + -0x88);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar6[1] = uVar5;
            piVar1 = (int *)(unaff_BP + -0x36);
            *piVar1 = *piVar1 + 1;
            uVar12 = *piVar1 == 0;
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x8d7;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x8e0;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x32b2;
            in_stack_0000002e = 0x8e5;
            FUN_32b2_7191();
            if (!(bool)uVar11 && !(bool)uVar12) {
              in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb6);
              in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xb8);
              in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xba);
              in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xbc);
              in_stack_00000028 = 0x32b2;
              in_stack_00000026 = 0x8ff;
              FUN_32b2_7592();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x909;
              FUN_32b2_6d14();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x911;
              FUN_32b2_7154();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x916;
              FUN_32b2_6fd6();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x91e;
              FUN_32b2_6d14();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x927;
              FUN_32b2_710c();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x92c;
              FUN_32b2_7182();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x935;
              FUN_32b2_6e99();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x93d;
              FUN_32b2_710c();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x945;
              FUN_32b2_7154();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x94e;
              FUN_32b2_6e99();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x957;
              FUN_32b2_6eb1();
              in_stack_0000002e = unaff_BP + -0x8a;
              in_stack_0000002c = unaff_BP + -0x62;
              in_stack_0000002a = 0x32b2;
              in_stack_00000028 = 0x969;
              FUN_32b2_6cc6();
              in_stack_0000002a = 0x32b2;
              in_stack_00000028 = 0x96e;
              FUN_32b2_7258();
              in_stack_00000022 = 0x32b2;
              in_stack_00000020 = 0x978;
              FUN_32b2_6eb1();
              in_stack_00000022 = 0x32b2;
              in_stack_00000020 = 0x980;
              FUN_32b2_6cc6();
              in_stack_00000022 = 0x32b2;
              in_stack_00000020 = 0x985;
              FUN_32b2_7258();
              in_stack_0000001a = 0x32b2;
              in_stack_00000018 = 0x98f;
              FUN_32b2_6eb1();
              in_stack_0000001a = *(undefined2 *)(unaff_BP + -100);
              in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x66);
              in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x68);
              in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x6a);
              in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x48);
              in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4a);
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              FUN_3ab8_5089(0x32b2,0);
              uVar11 = &stack0x0000 == (undefined1 *)0xffd0;
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x9df;
              FUN_32b2_6cc6();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x9e7;
              FUN_32b2_6cc6();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x9ec;
              FUN_32b2_7191();
              if ((bool)uVar11) {
                uVar5 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar5;
              }
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0xa02;
              FUN_32b2_6cc6();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0xa0a;
              FUN_32b2_6cc6();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0xa0f;
              FUN_32b2_7191();
              if ((bool)uVar11) {
                uVar5 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar5;
              }
              uVar5 = *(undefined2 *)(unaff_BP + -0x60);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
              puVar6[1] = uVar5;
              uVar5 = *(undefined2 *)(unaff_BP + -0x88);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar6[1] = uVar5;
              *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
            }
            return *(undefined2 *)(unaff_BP + -0x36);
          }
        }
        return 0;
      }
      in_stack_00000030 = 0x3f5;
      FUN_32b2_6d14();
      in_stack_00000030 = 0x32b2;
      in_stack_0000002e = 0x3ff;
      FUN_32b2_7154();
      in_stack_00000030 = 0x405;
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
      in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb8);
      in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xba);
      in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xbc);
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x119;
      FUN_32b2_75fe();
      in_stack_00000030 = 0x32b2;
      in_stack_0000002e = 0x123;
      FUN_32b2_6d14();
      in_stack_00000030 = 0x32b2;
      in_stack_0000002e = 299;
      FUN_32b2_704d();
      in_stack_00000030 = 0x32b2;
      in_stack_0000002e = 0x133;
      FUN_32b2_7095();
      in_stack_00000030 = 0x32b2;
      in_stack_0000002e = 0x13b;
      FUN_32b2_6eb1();
      in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb6);
      in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xb8);
      in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xba);
      in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xbc);
      in_stack_00000028 = 0x32b2;
      in_stack_00000026 = 0x150;
      FUN_32b2_75ec();
      uVar11 = &stack0x0000 == (undefined1 *)0xffd0;
      in_stack_0000002e = 0x32b2;
      in_stack_0000002c = 0x15a;
      FUN_32b2_6d14();
      in_stack_0000002e = 0x32b2;
      in_stack_0000002c = 0x162;
      FUN_32b2_704d();
      in_stack_0000002e = 0x32b2;
      in_stack_0000002c = 0x16a;
      FUN_32b2_7095();
      in_stack_0000002e = 0x32b2;
      in_stack_0000002c = 0x173;
      FUN_32b2_6eb1();
      in_stack_0000002e = 0x32b2;
      in_stack_0000002c = 0x17b;
      FUN_32b2_6cc6();
      in_stack_0000002e = 0x32b2;
      in_stack_0000002c = 0x183;
      FUN_32b2_6cc6();
      in_stack_0000002e = 0x32b2;
      in_stack_0000002c = 0x188;
      FUN_32b2_7191();
      if ((bool)uVar11) {
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x192;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x19a;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x19f;
        FUN_32b2_7191();
        if ((bool)uVar11) {
          return 0;
        }
      }
      in_stack_0000002e = unaff_BP + -0xa8;
      in_stack_0000002c = unaff_BP + -0x1c;
      in_stack_0000002a = *(undefined2 *)(unaff_BP + -0x7c);
      in_stack_00000028 = *(undefined2 *)(unaff_BP + -0x7e);
      in_stack_00000026 = *(undefined2 *)(unaff_BP + -0x80);
      in_stack_00000024 = *(undefined2 *)(unaff_BP + -0x82);
      in_stack_00000022 = *(undefined2 *)(unaff_BP + -0x58);
      in_stack_00000020 = *(undefined2 *)(unaff_BP + -0x5a);
      in_stack_0000001e = *(undefined2 *)(unaff_BP + -0x5c);
      in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x5e);
      in_stack_0000001a = 0x32b2;
      in_stack_00000018 = 0x1d0;
      FUN_32b2_6cc6();
      in_stack_0000001a = 0x32b2;
      in_stack_00000018 = 0x1d5;
      FUN_32b2_7258();
      in_stack_00000012 = 0x32b2;
      in_stack_00000010 = 0x1df;
      FUN_32b2_6eb1();
      in_stack_00000012 = 0x32b2;
      in_stack_00000010 = 0x1e7;
      FUN_32b2_6cc6();
      in_stack_00000012 = 0x32b2;
      in_stack_00000010 = 0x1ec;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
      iVar7 = func_0x0003fb3d();
      if (iVar7 == 0) break;
      in_stack_00000030 = 0x209;
      FUN_32b2_6cc6();
      in_stack_00000030 = 0x20e;
      FUN_32b2_7258();
      in_stack_00000030 = 0x216;
      FUN_32b2_6e99();
      in_stack_00000030 = 0x21e;
      FUN_32b2_6ef9();
      in_stack_00000030 = unaff_BP + -0xa4;
      in_stack_0000002e = 0x32b2;
      in_stack_0000002c = 0x231;
      FUN_32b2_6cc6();
      in_stack_0000002e = 0x32b2;
      in_stack_0000002c = 0x236;
      FUN_32b2_7258();
      in_stack_00000026 = 0x32b2;
      in_stack_00000024 = 0x240;
      FUN_32b2_6eb1();
      in_stack_00000026 = 0x32b2;
      in_stack_00000024 = 0x248;
      FUN_32b2_6cc6();
      in_stack_00000026 = 0x32b2;
      in_stack_00000024 = 0x24d;
      FUN_32b2_7258();
      in_stack_0000001e = 0x32b2;
      in_stack_0000001c = 599;
      FUN_32b2_6eb1();
      in_stack_0000001e = 0x32b2;
      in_stack_0000001c = 0x25f;
      FUN_32b2_6d14();
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 0x269;
      FUN_32b2_6eb1();
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 0x271;
      FUN_32b2_6cc6();
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 0x276;
      FUN_32b2_7258();
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 0x27e;
      FUN_32b2_6e99();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      iStack_2 = 0x32b2;
      FUN_32b2_6eb1();
      iStack_2 = 1;
      FUN_3ab8_5089();
      in_stack_00000030 = unaff_BP + -0xd0;
      in_stack_0000002e = 0x32b2;
      in_stack_0000002c = 0x2d4;
      FUN_32b2_6cc6();
      in_stack_0000002e = 0x32b2;
      in_stack_0000002c = 0x2d9;
      FUN_32b2_7258();
      in_stack_00000026 = 0x32b2;
      in_stack_00000024 = 0x2e3;
      FUN_32b2_6eb1();
      in_stack_00000026 = 0x32b2;
      in_stack_00000024 = 0x2eb;
      FUN_32b2_6cc6();
      in_stack_00000026 = 0x32b2;
      in_stack_00000024 = 0x2f0;
      FUN_32b2_7258();
      in_stack_0000001e = 0x32b2;
      in_stack_0000001c = 0x2fa;
      FUN_32b2_6eb1();
      in_stack_0000001e = 0x32b2;
      in_stack_0000001c = 0x302;
      FUN_32b2_6d14();
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 0x30c;
      FUN_32b2_6eb1();
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 0x314;
      FUN_32b2_6d14();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      iStack_2 = 0x32b2;
      FUN_32b2_6eb1();
      iStack_2 = 1;
    }
    return 0;
  }
  if (in_AX == -1) {
    uVar5 = FUN_3ab8_4a0e();
    return uVar5;
  }
  if (*(int *)(unaff_BP + -0x96) != 0) {
    iStack_2 = iVar7;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    lVar13 = FUN_13bf_39a0(0x22b2);
    iVar7 = (int)((ulong)lVar13 >> 0x10);
    *(int *)(unaff_BP + -0x94) = (int)lVar13;
    *(int *)(unaff_BP + -0x92) = iVar7;
    if (lVar13 < 0) {
      iStack_2 = -(iVar7 + (uint)((int)lVar13 != 0));
      uVar11 = iStack_2 == 0;
      puVar14 = (undefined2 *)func_0x00000271(0x11f2);
      unaff_SI = (undefined2 *)puVar14;
      puVar6 = (undefined2 *)(unaff_BP + -0x26);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = unaff_SI;
        unaff_SI = unaff_SI + 1;
        *puVar3 = *puVar2;
      }
      iStack_2 = 0;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iVar7 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar11) goto FUN_3ab8_4daa;
      iStack_2 = 0x22b2;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iVar7 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar11) goto FUN_3ab8_4daa;
      *(undefined2 *)0xc22 = 1;
      iStack_2 = 2;
      FUN_1000_0599(0x22b2);
      iStack_2 = 0x396;
      func_0x00012276();
    }
    iStack_2 = 0x1dc;
    func_0x00012276();
    *(undefined2 *)0xc22 = 1;
    iStack_2 = 2;
    iVar7 = 0xdef;
    FUN_1000_0599(0x11f2);
    if ((-1 < *(int *)(unaff_BP + -0x92)) &&
       ((0 < *(int *)(unaff_BP + -0x92) || (*(int *)(unaff_BP + -0x94) != 0)))) {
      iStack_2 = 900;
      iVar7 = 0x11f2;
      func_0x00012276();
    }
    *(undefined2 *)(unaff_BP + -0x92) = 0;
    *(undefined2 *)(unaff_BP + -0x94) = 0;
  }
LAB_3ab8_4c49:
  do {
    if (*(int *)(unaff_BP + -0x188) != 0) goto LAB_3ab8_4c53;
FUN_3ab8_4daa:
    do {
      iStack_2 = iVar7;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      func_0x00029983();
      iStack_2 = 0x22b2;
      func_0x0001bb4e();
      iStack_2 = 0x4ca6;
      func_0x00012276();
      iStack_2 = 0x4de1;
      func_0x00012276();
      iStack_2 = *(int *)0x9ea6;
      FUN_10ad_19f9(0x11f2,unaff_BP + -0x202,0x4de5,0x4de4,0x31e,*(undefined2 *)0x4e24,
                    *(undefined2 *)0x4e26);
      iStack_2 = 1;
      FUN_1000_0599(0x11f2);
      iStack_2 = unaff_BP + -0x202;
      func_0x00012276();
      in_BX = iStack_2;
      if (*(int *)(unaff_BP + -0x188) != 0) {
        iStack_2 = 2;
        FUN_1000_0599(0x11f2);
        iStack_2 = unaff_BP + -0x80;
        func_0x00012276();
        iStack_2 = 0x4df1;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        in_BX = iStack_2;
      }
      iStack_2 = 1;
      uVar16 = 0x11f2;
      uVar15 = 0xf9f2;
      uVar5 = func_0x000021a4(0x11f2,unaff_BP + -0x1ae,unaff_BP + -0x1b2,unaff_BP + -0x19e,
                              unaff_BP + -0x1a4);
      *(undefined2 *)(unaff_BP + -0x1aa) = uVar5;
      uVar11 = 0;
      uVar12 = *(int *)0x158 == 0;
      if (!(bool)uVar12) goto LAB_2bb4_480c_1;
      iStack_2 = 0xad;
      func_0x00029834();
      iStack_2 = 0x22b2;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029ae7();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iVar7 = 0x22b2;
      FUN_28b3_1181();
    } while (!(bool)uVar11 && !(bool)uVar12);
    if (*(int *)(unaff_BP + -0x1aa) != -1) {
      if ((*(int *)(unaff_BP + -0x1aa) == 0x66) || (*(int *)(unaff_BP + -0x1aa) == 0)) {
        uVar5 = *(undefined2 *)(unaff_BP + -0x1ac);
        *(undefined2 *)0x4e24 = *(undefined2 *)(unaff_BP + -0x1ae);
        *(undefined2 *)0x4e26 = uVar5;
LAB_3ab8_4edd:
        if (*(int *)(unaff_BP + -0x188) != 0) goto LAB_3ab8_4f54;
        iStack_2 = 0x3dd;
        func_0x00024c86(iVar7);
        *(undefined2 *)0xc20 = 1;
        iVar7 = 0x1bb4;
        uVar16 = 0xfa97;
        iVar10 = iStack_2;
        iStack_2 = unaff_BP + -0x96;
        uVar5 = FUN_1def_0904(0x22b2,1,unaff_BP + -0x15a,unaff_BP + -0x166);
        *(undefined2 *)(unaff_BP + -0x58) = uVar5;
        *(undefined2 *)0xc20 = 0;
        in_BX = iStack_2;
        if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
        if (*(int *)(unaff_BP + -0x58) != -1) break;
      }
      goto FUN_3ab8_4daa;
    }
    if (*(int *)(unaff_BP + -0x188) == 0) goto LAB_3ab8_4a16;
  } while( true );
  if (*(int *)(unaff_BP + -0x96) != 0) {
    iStack_2 = unaff_BP + -0x17a;
    iVar7 = 0x11f2;
    iVar10 = func_0x00015409(0x1bb4,*(undefined2 *)(unaff_BP + -0x96));
    if (iVar10 != 0) {
LAB_3ab8_4f54:
      uVar5 = *(undefined2 *)(unaff_BP + -0x164);
      *(undefined2 *)(unaff_BP + -0x15e) = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -0x15c) = uVar5;
      uVar5 = *(undefined2 *)(unaff_BP + -0x178);
      *(undefined2 *)(unaff_BP + -0x172) = *(undefined2 *)(unaff_BP + -0x17a);
      *(undefined2 *)(unaff_BP + -0x170) = uVar5;
      iStack_2 = iVar7;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      func_0x00029b9d();
      iStack_2 = 0x22b2;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      func_0x00029983();
      iStack_2 = 0x22b2;
      func_0x000297e6();
      goto LAB_3ab8_4fae;
    }
  }
  goto LAB_3ab8_4edd;
LAB_3ab8_4fae:
  iStack_2 = 0x22b2;
  func_0x00029983();
  if ((*(int *)(unaff_BP + -0x188) != 0) && (*(int *)(unaff_BP + -0x92) < 0)) {
    uVar5 = func_0x0003fc30();
    return uVar5;
  }
  iStack_2 = 0x22b2;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  uVar5 = 0xfb6a;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar15,uVar16,uVar5);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  iVar10 = FUN_1def_043a(0x22b2);
  iVar7 = 0x1bb4;
  if (iVar10 != 0) {
    iStack_2 = *(int *)0x9efe;
    uVar5 = 0xfbcc;
    func_0x000297e6(0x1bb4,*(undefined2 *)0x9ef8,*(undefined2 *)0x9efa);
    func_0x000299d1(0x22b2,uVar15,uVar16,uVar5);
    puVar6 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
    uVar5 = puVar6[1];
    *(undefined2 *)(unaff_BP + -0x90) = *puVar6;
    *(undefined2 *)(unaff_BP + -0x8e) = uVar5;
    iStack_2 = *(int *)0x9efe;
    uVar5 = 0xfc09;
    func_0x000297e6(0x1bb4,*(undefined2 *)0x9ef8,*(undefined2 *)0x9efa);
    func_0x000299d1(0x22b2,uVar15,uVar16,uVar5);
    puVar6 = (undefined2 *)func_0x0001e558(0x22b2,0);
    uVar5 = puVar6[1];
    *(undefined2 *)(unaff_BP + -0xc2) = *puVar6;
    *(undefined2 *)(unaff_BP + -0xc0) = uVar5;
    uVar5 = FUN_3ab8_52c7();
    return uVar5;
  }
LAB_3ab8_4a16:
  iStack_2 = 0x4ca6;
  func_0x00024c86(iVar7);
  iStack_2 = 0x4dce;
  FUN_21f2_2d26(0x22b2);
  iStack_2 = 0x2dc;
  FUN_21f2_2d26(0x22b2);
  iStack_2 = 0x2f0;
  FUN_21f2_2d26(0x22b2);
  iStack_2 = 0x98a;
  FUN_21f2_2d26(0x22b2);
  iStack_2 = 0x4dd1;
  FUN_21f2_2d26(0x22b2);
  if (*(int *)(unaff_BP + -0x188) == 0) {
    iStack_2 = 0x4dd9;
  }
  else {
    iStack_2 = 0x4dd4;
  }
  FUN_21f2_2d26(0x22b2);
  iStack_2 = 0x4ca6;
  FUN_21f2_2d26(0x22b2);
  iStack_2 = 0x4dde;
  FUN_21f2_2d26(0x22b2);
  iStack_2 = 0x98a;
  FUN_21f2_2d26(0x22b2);
  if (*(int *)(unaff_BP + -0x48) != 0) {
    iStack_2 = 0x934;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x98a;
    FUN_21f2_2d26(0x22b2);
  }
  iStack_2 = unaff_BP + -0x15a;
  FUN_1def_07a4(0x22b2);
  *(undefined2 *)0xc2c = 1;
  *(undefined2 *)0xc20 = 1;
  iVar10 = 0x1bb4;
  uVar16 = 0xf69d;
  iVar7 = iStack_2;
  iStack_2 = unaff_BP + -0x96;
  uVar5 = FUN_1def_0904(0x1bb4,*(undefined2 *)(unaff_BP + -0x48),unaff_BP + -0x15a,unaff_BP + -0xba)
  ;
  *(undefined2 *)(unaff_BP + -0x58) = uVar5;
  *(undefined2 *)0xc2c = 0;
  *(undefined2 *)0xc20 = 0;
  in_BX = iStack_2;
  if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
  if (*(int *)(unaff_BP + -0x58) == 0x14) {
    *(undefined2 *)(unaff_BP + -0x48) = 0;
LAB_3ab8_4664:
    while( true ) {
      if (*(char *)0x1cd != '\0') {
        *(uint *)0x1d0 = (uint)*(byte *)0x1cd;
      }
      iStack_2 = 0x2f0;
      FUN_21f2_3454(unaff_BP + -0x15a);
      if (*(char *)0x4e23 == '\0') {
        iStack_2 = 0x2b8;
        uVar5 = 0x22b2;
        FUN_21f2_2d26(0x22b2);
      }
      else {
        iStack_2 = 0x2b2;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = *(int *)0x1d0;
        FUN_21f2_3454(unaff_BP + -0xf6);
        if (*(byte *)0x123 < 6) {
          *(undefined2 *)(unaff_BP + -0x60) = 7;
        }
        else {
          *(undefined2 *)(unaff_BP + -0x60) = *(undefined2 *)(*(int *)0x1d0 * 2 + 0xa70);
          if (*(int *)0x1d0 == 7) {
            *(undefined2 *)(unaff_BP + -0x60) = *(undefined2 *)0xa80;
          }
        }
        *(undefined2 *)0xc22 = 1;
        iStack_2 = -1;
        uVar5 = 0xdef;
        FUN_1000_02b5(unaff_BP + -0xf6,0x1b,2);
      }
      iStack_2 = 0x4dc4;
      FUN_21f2_2d26(uVar5);
      iStack_2 = 0x98a;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = 0x4ca6;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = 0x98a;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = unaff_BP + -0x46;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = 0x98a;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = 0x4dc7;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = 0x98a;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = unaff_BP + -0xb2;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = 0x98a;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = unaff_BP + -0x15a;
      FUN_1def_07a4(0x22b2);
      *(undefined2 *)0xc1a = 1;
      *(undefined2 *)0xc20 = 1;
      if (*(char *)0x4e23 == '\0') {
        *(undefined2 *)(unaff_BP + -100) = *(undefined2 *)(unaff_BP + -0x48);
      }
      else if (*(int *)(unaff_BP + -0x48) == 0) {
        *(undefined2 *)(unaff_BP + -100) = 10000;
      }
      else {
        *(undefined2 *)(unaff_BP + -100) = 9999;
      }
      iVar10 = 0x1bb4;
      uVar16 = 0xf387;
      in_BX = iStack_2;
      iStack_2 = unaff_BP + -0x96;
      uVar5 = FUN_1def_0904(0x1bb4,*(undefined2 *)(unaff_BP + -100),unaff_BP + -0x15a,
                            unaff_BP + -0x19e);
      *(undefined2 *)(unaff_BP + -0x18a) = uVar5;
      *(undefined2 *)0xc1a = 0;
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) break;
      if (*(int *)0xc18 == 0) {
        if (*(int *)(unaff_BP + -0x18a) == 1) {
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          *(undefined2 *)(unaff_BP + -0x48) = 0;
          *(char *)0x4e23 = '\x01' - *(char *)0x4e23;
        }
        if (*(int *)(unaff_BP + -0x18a) == -1) {
          iStack_2 = 0;
          iVar7 = 0x885;
          func_0x0000daa6();
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          if (0 < *(int *)(unaff_BP + -0x48)) {
            iStack_2 = *(int *)0x154;
            *(int *)(unaff_BP + -0x1a0) = iStack_2;
            FUN_2bb4_4988();
            *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
          }
          if (*(int *)(unaff_BP + -0x48) < 0) {
            iStack_2 = *(int *)0x152;
            *(int *)(unaff_BP + -0x1a0) = iStack_2;
            iVar7 = 0x1bb4;
            FUN_1def_186d();
            *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
          }
          iStack_2 = iVar7;
          func_0x0000abfa();
          iStack_2 = 1;
          iVar10 = 0x885;
          func_0x0000b1d8();
        }
        if (((0x61ff < *(int *)(unaff_BP + -0x18a)) && (*(int *)(unaff_BP + -0x18a) < 0x6701)) ||
           ((5 < *(byte *)0x123 && (*(int *)(unaff_BP + -0x18a) == 0x6800)))) {
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          uVar4 = *(int *)(unaff_BP + -0x18a) + 0x9f00;
          uVar8 = (int)uVar4 >> 0xf;
          iVar7 = ((int)((uVar4 ^ uVar8) - uVar8) >> 8 ^ uVar8) - uVar8;
          *(int *)0x1d0 = iVar7;
          if ((*(char *)0x1cd == '\0') && (iVar7 != 7)) {
            *(int *)(unaff_BP + -4) = iVar7;
          }
          else {
            *(undefined1 *)0x1cd = *(undefined1 *)0x1d0;
          }
        }
        if ((*(int *)(unaff_BP + -0x18a) < 2) || (5 < *(int *)(unaff_BP + -0x18a)))
        goto LAB_3ab8_498d;
        *(int *)(unaff_BP + -0x18a) = *(int *)(unaff_BP + -0x18a) + -1;
        iVar7 = iVar10;
        goto LAB_3ab8_4938;
      }
      *(undefined2 *)(unaff_BP + -0x48) = 0;
      iStack_2 = 0x1bb4;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar5 = 0xf3d4;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2,uVar15,uVar16,uVar5);
      func_0x0000507a(0x22b2);
    }
    goto LAB_2bb4_480c_1;
  }
  if (*(int *)(unaff_BP + -0x58) == -1) {
    iStack_2 = 0;
    iVar7 = 0x885;
    func_0x0000daa6();
    *(undefined2 *)(unaff_BP + -0x96) = 0;
    if (0 < *(int *)(unaff_BP + -0x48)) {
      iStack_2 = *(int *)0x154;
      *(int *)(unaff_BP + -0x1a0) = iStack_2;
      FUN_2bb4_4988();
      *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
    }
    if (*(int *)(unaff_BP + -0x48) < 0) {
      iStack_2 = *(int *)0x152;
      *(int *)(unaff_BP + -0x1a0) = iStack_2;
      iVar7 = 0x1bb4;
      FUN_1def_186d();
      *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
    }
    iStack_2 = iVar7;
    func_0x0000abfa();
    iStack_2 = 1;
    func_0x0000b1d8();
    iStack_2 = 0x885;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x192;
    func_0x00029b55();
    iStack_2 = 0x22b2;
    iVar10 = 0x22b2;
    func_0x00029983();
  }
  if (*(int *)(unaff_BP + -0x58) == 1) {
    *(undefined2 *)(unaff_BP + -0x48) = 0;
    if (*(int *)(unaff_BP + -0x188) == 0) {
      *(undefined2 *)(unaff_BP + -0x188) = 1;
    }
    else {
      *(undefined2 *)(unaff_BP + -0x188) = 0;
    }
  }
  if ((*(int *)(unaff_BP + -0x58) != 2) || (*(int *)(unaff_BP + -0x48) == 0)) {
    iVar7 = iVar10;
    if ((*(int *)(unaff_BP + -0x96) != 0) && (*(int *)(unaff_BP + -0x58) == 0)) {
      iStack_2 = unaff_BP + -0x16e;
      iVar7 = 0x11f2;
      iVar10 = func_0x00015409(iVar10,*(undefined2 *)(unaff_BP + -0x96));
      if (iVar10 != 0) {
        *(undefined2 *)(unaff_BP + -0x48) = 0;
        *(undefined2 *)(unaff_BP + -0x92) = 0;
        *(undefined2 *)(unaff_BP + -0x94) = 0;
        uVar5 = *(undefined2 *)(unaff_BP + -0xb8);
        *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)(unaff_BP + -0xba);
        *(undefined2 *)(unaff_BP + -0xb4) = uVar5;
        uVar5 = *(undefined2 *)(unaff_BP + -0x16c);
        *(undefined2 *)(unaff_BP + -0x162) = *(undefined2 *)(unaff_BP + -0x16e);
        *(undefined2 *)(unaff_BP + -0x160) = uVar5;
        goto LAB_3ab8_4c49;
      }
    }
    goto LAB_3ab8_4a16;
  }
  iStack_2 = iVar10;
  func_0x000297e6();
  iStack_2 = unaff_BP + -0x192;
  func_0x00029bb5();
  goto LAB_3ab8_4fae;
LAB_3ab8_498d:
  if (*(int *)(unaff_BP + -0x96) == 0) goto LAB_3ab8_4664;
  iStack_2 = unaff_BP + -0x1a4;
  iVar7 = 0x11f2;
  iVar10 = func_0x00015409(iVar10,*(undefined2 *)(unaff_BP + -0x96));
  if (iVar10 == 0) goto LAB_3ab8_4664;
  *(undefined2 *)(unaff_BP + -0x18a) = 0;
LAB_3ab8_4938:
  if (*(int *)(unaff_BP + -0x18a) == 0) {
    iStack_2 = iVar7;
    if (*(char *)0x4e23 == '\0') {
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar5 = 0xf4ef;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2,uVar15,uVar16,uVar5);
                    /* WARNING: Call to offcut address within same function */
      iVar7 = func_0x00030353(0x22b2);
      if (iVar7 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
      }
    }
    else {
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar5 = 0xf55c;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2,uVar15,uVar16,uVar5);
      iVar7 = FUN_1def_1208();
      if (iVar7 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
      }
    }
    goto LAB_3ab8_4664;
  }
  *(undefined2 *)(unaff_BP + -0x48) = 0;
  *(undefined2 *)(unaff_BP + -0x188) = 0;
  if (*(int *)(unaff_BP + -0x18a) != 1) {
    uVar5 = FUN_3ab8_5357();
    return uVar5;
  }
  *(undefined2 *)(unaff_BP + -0x92) = 0;
  *(undefined2 *)(unaff_BP + -0x94) = 0;
  goto LAB_3ab8_4a16;
LAB_3ab8_4c53:
  iStack_2 = unaff_BP + -0x80;
  func_0x00024c86(iVar7);
  iStack_2 = 0x302;
  FUN_21f2_2d26(0x22b2);
  iVar7 = 0x1bb4;
  in_BX = iStack_2;
  iStack_2 = unaff_BP + -0x96;
  in_AX = FUN_1def_0904(0x22b2,1,unaff_BP + -0x15a,unaff_BP + -0x19e);
  goto code_r0x0003f813;
}



/* 3ab8:4daa  FUN_3ab8_4daa  735 bytes, 1 callers */

undefined2 FUN_3ab8_4daa(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar10;
  int iVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  undefined2 *puVar15;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000016;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  undefined2 in_stack_00000024;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  int in_stack_0000002c;
  int in_stack_0000002e;
  int in_stack_00000030;
  undefined2 uVar16;
  undefined2 uVar17;
  int iStack_2;
  
  iVar8 = 0x3ab8;
code_r0x0003f92a:
  do {
    do {
      iStack_2 = iVar8;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      func_0x00029983();
      iStack_2 = 0x22b2;
      func_0x0001bb4e();
      iStack_2 = 0x4ca6;
      func_0x00012276();
      iStack_2 = 0x4de1;
      func_0x00012276();
      iStack_2 = *(int *)0x9ea6;
      FUN_10ad_19f9(0x11f2,unaff_BP + -0x202,0x4de5,0x4de4,0x31e,*(undefined2 *)0x4e24,
                    *(undefined2 *)0x4e26);
      iStack_2 = 1;
      FUN_1000_0599(0x11f2);
      iStack_2 = unaff_BP + -0x202;
      func_0x00012276();
      iVar5 = iStack_2;
      if (*(int *)(unaff_BP + -0x188) != 0) {
        iStack_2 = 2;
        FUN_1000_0599(0x11f2);
        iStack_2 = unaff_BP + -0x80;
        func_0x00012276();
        iStack_2 = 0x4df1;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        iVar5 = iStack_2;
      }
      iStack_2 = 1;
      uVar17 = 0x11f2;
      uVar16 = 0xf9f2;
      uVar6 = func_0x000021a4(0x11f2,unaff_BP + -0x1ae,unaff_BP + -0x1b2,unaff_BP + -0x19e,
                              unaff_BP + -0x1a4);
      *(undefined2 *)(unaff_BP + -0x1aa) = uVar6;
      uVar12 = 0;
      uVar13 = *(int *)0x158 == 0;
      if (!(bool)uVar13) {
LAB_2bb4_480c_1:
        iStack_2 = *(int *)(unaff_BP + -4);
        *(int *)0x1d0 = iStack_2;
        *(int *)(iVar5 + (int)unaff_SI) = *(int *)(iVar5 + (int)unaff_SI) + iStack_2;
        while( true ) {
          FUN_3ab8_5089();
          uVar12 = (undefined1 *)0xffc9 < &iStack_2;
          uVar13 = &stack0x0000 == (undefined1 *)0xffcc;
          in_stack_00000030 = 0x360;
          FUN_32b2_6cc6();
          in_stack_00000030 = 0x369;
          FUN_32b2_701d();
          in_stack_00000030 = 0x36e;
          FUN_32b2_7258();
          in_stack_00000030 = 0x376;
          FUN_32b2_6e99();
          in_stack_00000030 = 0x37e;
          FUN_32b2_6ef9();
          in_stack_00000030 = 0x387;
          FUN_32b2_6cc6();
          in_stack_00000030 = 0x390;
          FUN_32b2_701d();
          in_stack_00000030 = 0x395;
          FUN_32b2_7258();
          in_stack_00000030 = 0x39e;
          FUN_32b2_6e99();
          in_stack_00000030 = 0x3a6;
          FUN_32b2_6ef9();
          in_stack_00000030 = 0x3af;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x3b4;
          FUN_32b2_6fc7();
          in_stack_00000030 = 0x3bc;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x3c1;
          FUN_32b2_6fc7();
          in_stack_00000030 = 0x3ca;
          FUN_32b2_710c();
          in_stack_00000030 = 0x3cf;
          FUN_32b2_7191();
          if (!(bool)uVar12 && !(bool)uVar13) {
            in_stack_00000030 = 0x3da;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x3e2;
            FUN_32b2_6d14();
            in_stack_00000030 = 999;
            FUN_32b2_7191();
            if (!(bool)uVar13) {
              in_stack_00000030 = 0x431;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x439;
              FUN_32b2_7124();
              in_stack_00000030 = 0x441;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x44a;
              FUN_32b2_704d();
              in_stack_00000030 = 0x453;
              FUN_32b2_7035();
              in_stack_00000030 = 0x45c;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x464;
              FUN_32b2_6eb1();
              in_stack_00000030 = 0x46c;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x474;
              FUN_32b2_710c();
              in_stack_00000030 = 0x47c;
              FUN_32b2_710c();
              in_stack_00000030 = 0x484;
              FUN_32b2_710c();
              in_stack_00000030 = 0x48c;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x494;
              FUN_32b2_710c();
              in_stack_00000030 = 0x49d;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x4a2;
              FUN_32b2_718c();
              in_stack_00000030 = 0x4ab;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x4b3;
              FUN_32b2_6eb1();
              in_stack_00000030 = 0x4bc;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x4c4;
              FUN_32b2_710c();
              in_stack_00000030 = 0x4cd;
              FUN_32b2_710c();
              in_stack_00000030 = 0x4d5;
              FUN_32b2_710c();
              in_stack_00000030 = 0x4dd;
              FUN_32b2_710c();
              in_stack_00000030 = 0x4e6;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x4ee;
              FUN_32b2_6eb1();
              in_stack_00000030 = 0x4f7;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x500;
              FUN_32b2_710c();
              in_stack_00000030 = 0x509;
              FUN_32b2_70dc();
              in_stack_00000030 = 0x511;
              FUN_32b2_710c();
              in_stack_00000030 = 0x519;
              FUN_32b2_710c();
              in_stack_00000030 = 0x522;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x52b;
              FUN_32b2_6eb1();
              in_stack_00000030 = 0x534;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x53d;
              FUN_32b2_710c();
              in_stack_00000030 = 0x546;
              FUN_32b2_710c();
              in_stack_00000030 = 0x54f;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x558;
              FUN_32b2_710c();
              in_stack_00000030 = 0x55d;
              FUN_32b2_718c();
              in_stack_00000030 = 0x566;
              FUN_32b2_6eb1();
              in_stack_00000030 = 0x56f;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x574;
              FUN_32b2_6fd6();
              in_stack_00000030 = 0x57d;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x586;
              FUN_32b2_710c();
              in_stack_00000030 = 0x58b;
              FUN_32b2_7182();
              in_stack_00000030 = 0x594;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x59c;
              FUN_32b2_710c();
              in_stack_00000030 = 0x5a5;
              FUN_32b2_7154();
              in_stack_00000030 = 0x5ae;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x5b7;
              FUN_32b2_6eb1();
              in_stack_00000030 = 0x5c0;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x5c9;
              FUN_32b2_6eb1();
              in_stack_00000030 = unaff_BP + -0x62;
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x5db;
              FUN_32b2_6cc6();
              in_stack_0000002e = 0x32b2;
              in_stack_0000002c = 0x5e0;
              FUN_32b2_7258();
              in_stack_00000026 = 0x32b2;
              in_stack_00000024 = 0x5ea;
              FUN_32b2_6eb1();
              in_stack_00000026 = 0x32b2;
              in_stack_00000024 = 0x5f2;
              FUN_32b2_6cc6();
              in_stack_00000026 = 0x32b2;
              in_stack_00000024 = 0x5f7;
              FUN_32b2_7258();
              in_stack_0000001e = 0x32b2;
              in_stack_0000001c = 0x601;
              FUN_32b2_6eb1();
              in_stack_0000001e = *(undefined2 *)(unaff_BP + -100);
              in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x66);
              in_stack_0000001a = *(undefined2 *)(unaff_BP + -0x68);
              in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x6a);
              in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x48);
              in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x4a);
              in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x4c);
              in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4e);
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              FUN_32b2_6d14();
              iStack_2 = 0x32b2;
              FUN_32b2_6eb1();
              iStack_2 = 0;
              FUN_3ab8_5089();
              uVar6 = *(undefined2 *)(unaff_BP + -0x60);
              *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
              *(undefined2 *)(unaff_BP + -0x84) = uVar6;
              uVar6 = *(undefined2 *)(unaff_BP + -0x88);
              *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
              *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
              in_stack_00000030 = unaff_BP + -0x86;
              puVar10 = &stack0x0010;
              puVar7 = (undefined2 *)(unaff_BP + 0x1c);
              for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar2 = puVar10;
                puVar10 = puVar10 + 1;
                puVar15 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar2 = *puVar15;
              }
              iVar8 = func_0x0003fdaf();
              uVar12 = 0;
              uVar13 = iVar8 == 0;
              if (!(bool)uVar13) {
                in_stack_00000030 = 0x694;
                FUN_32b2_6d14();
                in_stack_00000030 = 0x69d;
                FUN_32b2_6cc6();
                in_stack_00000030 = 0x6a5;
                FUN_32b2_701d();
                in_stack_00000030 = 0x6aa;
                FUN_32b2_6fc7();
                in_stack_00000030 = 0x6af;
                FUN_32b2_7258();
                in_stack_00000030 = 0x6b4;
                FUN_32b2_7191();
                if ((bool)uVar12 || (bool)uVar13) {
                  in_stack_00000030 = 0x6bf;
                  FUN_32b2_6d14();
                  in_stack_00000030 = 0x6c8;
                  FUN_32b2_6cc6();
                  in_stack_00000030 = 0x6d1;
                  FUN_32b2_701d();
                  in_stack_00000030 = 0x6d6;
                  FUN_32b2_6fc7();
                  in_stack_00000030 = 0x6db;
                  FUN_32b2_7258();
                  in_stack_00000030 = 0x6e0;
                  FUN_32b2_7191();
                  if ((bool)uVar12 || (bool)uVar13) {
                    *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                    *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                    *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                    *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                  }
                }
              }
              in_stack_00000030 = 0x6f8;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x700;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x708;
              FUN_32b2_710c();
              in_stack_00000030 = 0x711;
              FUN_32b2_710c();
              in_stack_00000030 = 0x71a;
              FUN_32b2_7154();
              in_stack_00000030 = 0x71f;
              FUN_32b2_7191();
              if (!(bool)uVar12) {
                in_stack_00000030 = 0x72d;
                FUN_32b2_6d14();
                in_stack_00000030 = 0x732;
                FUN_32b2_6fc7();
                in_stack_00000030 = 0x73a;
                FUN_32b2_6d14();
                in_stack_00000030 = 0x742;
                FUN_32b2_710c();
                in_stack_00000030 = 0x74b;
                FUN_32b2_710c();
                in_stack_00000030 = 0x750;
                FUN_32b2_7191();
                if (!(bool)uVar12) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
                in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb8);
                in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xba);
                in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xbc);
                in_stack_0000002a = 0x32b2;
                in_stack_00000028 = 0x774;
                FUN_32b2_7592();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x77e;
                FUN_32b2_6d14();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x786;
                FUN_32b2_70dc();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x78e;
                FUN_32b2_6d14();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x797;
                FUN_32b2_710c();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x79c;
                FUN_32b2_7182();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x7a5;
                FUN_32b2_6e99();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x7ad;
                FUN_32b2_710c();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x7b5;
                FUN_32b2_7154();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x7be;
                FUN_32b2_6e99();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x7c7;
                FUN_32b2_6eb1();
                in_stack_00000030 = unaff_BP + -0x8a;
                in_stack_0000002e = unaff_BP + -0x62;
                in_stack_0000002c = 0x32b2;
                in_stack_0000002a = 0x7d9;
                FUN_32b2_6cc6();
                in_stack_0000002c = 0x32b2;
                in_stack_0000002a = 0x7de;
                FUN_32b2_7258();
                in_stack_00000024 = 0x32b2;
                in_stack_00000022 = 0x7e8;
                FUN_32b2_6eb1();
                in_stack_00000024 = 0x32b2;
                in_stack_00000022 = 0x7f0;
                FUN_32b2_6cc6();
                in_stack_00000024 = 0x32b2;
                in_stack_00000022 = 0x7f5;
                FUN_32b2_7258();
                in_stack_0000001c = 0x32b2;
                in_stack_0000001a = 0x7ff;
                FUN_32b2_6eb1();
                in_stack_0000001c = *(undefined2 *)(unaff_BP + -100);
                in_stack_0000001a = *(undefined2 *)(unaff_BP + -0x66);
                in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x68);
                in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x6a);
                in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x48);
                in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x4a);
                in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4c);
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_3ab8_5089(0x32b2);
                uVar12 = (undefined1 *)0xffc9 < &stack0xfffc;
                uVar13 = &stack0x0000 == (undefined1 *)0xffce;
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x84f;
                FUN_32b2_6cc6();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x857;
                FUN_32b2_6cc6();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x85c;
                FUN_32b2_7191();
                if ((bool)uVar13) {
                  uVar6 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar6;
                }
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x872;
                FUN_32b2_6cc6();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x87a;
                FUN_32b2_6cc6();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x87f;
                FUN_32b2_7191();
                if ((bool)uVar13) {
                  uVar6 = *(undefined2 *)(unaff_BP + 0xc);
                  *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                  *(undefined2 *)(unaff_BP + -0x88) = uVar6;
                }
                uVar6 = *(undefined2 *)(unaff_BP + -0x60);
                puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
                *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
                puVar7[1] = uVar6;
                uVar6 = *(undefined2 *)(unaff_BP + -0x88);
                puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
                *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar7[1] = uVar6;
                uVar6 = *(undefined2 *)(unaff_BP + -0x60);
                puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
                puVar7[1] = uVar6;
                uVar6 = *(undefined2 *)(unaff_BP + -0x88);
                puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar7[1] = uVar6;
                piVar1 = (int *)(unaff_BP + -0x36);
                *piVar1 = *piVar1 + 1;
                uVar13 = *piVar1 == 0;
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x8d7;
                FUN_32b2_6d14();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x8e0;
                FUN_32b2_6d14();
                in_stack_00000030 = 0x32b2;
                in_stack_0000002e = 0x8e5;
                FUN_32b2_7191();
                if (!(bool)uVar12 && !(bool)uVar13) {
                  in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb6);
                  in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xb8);
                  in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xba);
                  in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xbc);
                  in_stack_00000028 = 0x32b2;
                  in_stack_00000026 = 0x8ff;
                  FUN_32b2_7592();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x909;
                  FUN_32b2_6d14();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x911;
                  FUN_32b2_7154();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x916;
                  FUN_32b2_6fd6();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x91e;
                  FUN_32b2_6d14();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x927;
                  FUN_32b2_710c();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x92c;
                  FUN_32b2_7182();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x935;
                  FUN_32b2_6e99();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x93d;
                  FUN_32b2_710c();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x945;
                  FUN_32b2_7154();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x94e;
                  FUN_32b2_6e99();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x957;
                  FUN_32b2_6eb1();
                  in_stack_0000002e = unaff_BP + -0x8a;
                  in_stack_0000002c = unaff_BP + -0x62;
                  in_stack_0000002a = 0x32b2;
                  in_stack_00000028 = 0x969;
                  FUN_32b2_6cc6();
                  in_stack_0000002a = 0x32b2;
                  in_stack_00000028 = 0x96e;
                  FUN_32b2_7258();
                  in_stack_00000022 = 0x32b2;
                  in_stack_00000020 = 0x978;
                  FUN_32b2_6eb1();
                  in_stack_00000022 = 0x32b2;
                  in_stack_00000020 = 0x980;
                  FUN_32b2_6cc6();
                  in_stack_00000022 = 0x32b2;
                  in_stack_00000020 = 0x985;
                  FUN_32b2_7258();
                  in_stack_0000001a = 0x32b2;
                  in_stack_00000018 = 0x98f;
                  FUN_32b2_6eb1();
                  in_stack_0000001a = *(undefined2 *)(unaff_BP + -100);
                  in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x66);
                  in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x68);
                  in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x6a);
                  in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x48);
                  in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4a);
                  FUN_32b2_6d14();
                  FUN_32b2_6eb1();
                  FUN_32b2_6d14();
                  FUN_32b2_6eb1();
                  FUN_3ab8_5089(0x32b2,0);
                  uVar12 = &stack0x0000 == (undefined1 *)0xffd0;
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x9df;
                  FUN_32b2_6cc6();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x9e7;
                  FUN_32b2_6cc6();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0x9ec;
                  FUN_32b2_7191();
                  if ((bool)uVar12) {
                    uVar6 = *(undefined2 *)(unaff_BP + 8);
                    *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                    *(undefined2 *)(unaff_BP + -0x60) = uVar6;
                  }
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0xa02;
                  FUN_32b2_6cc6();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0xa0a;
                  FUN_32b2_6cc6();
                  in_stack_0000002e = 0x32b2;
                  in_stack_0000002c = 0xa0f;
                  FUN_32b2_7191();
                  if ((bool)uVar12) {
                    uVar6 = *(undefined2 *)(unaff_BP + 0xc);
                    *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                    *(undefined2 *)(unaff_BP + -0x88) = uVar6;
                  }
                  uVar6 = *(undefined2 *)(unaff_BP + -0x60);
                  puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                  *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
                  puVar7[1] = uVar6;
                  uVar6 = *(undefined2 *)(unaff_BP + -0x88);
                  puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                  *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
                  puVar7[1] = uVar6;
                  *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
                }
                return *(undefined2 *)(unaff_BP + -0x36);
              }
            }
            return 0;
          }
          in_stack_00000030 = 0x3f5;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x32b2;
          in_stack_0000002e = 0x3ff;
          FUN_32b2_7154();
          in_stack_00000030 = 0x405;
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
          in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb8);
          in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xba);
          in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xbc);
          in_stack_0000002a = 0x32b2;
          in_stack_00000028 = 0x119;
          FUN_32b2_75fe();
          in_stack_00000030 = 0x32b2;
          in_stack_0000002e = 0x123;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x32b2;
          in_stack_0000002e = 299;
          FUN_32b2_704d();
          in_stack_00000030 = 0x32b2;
          in_stack_0000002e = 0x133;
          FUN_32b2_7095();
          in_stack_00000030 = 0x32b2;
          in_stack_0000002e = 0x13b;
          FUN_32b2_6eb1();
          in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb6);
          in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xb8);
          in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xba);
          in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xbc);
          in_stack_00000028 = 0x32b2;
          in_stack_00000026 = 0x150;
          FUN_32b2_75ec();
          uVar12 = &stack0x0000 == (undefined1 *)0xffd0;
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x15a;
          FUN_32b2_6d14();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x162;
          FUN_32b2_704d();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x16a;
          FUN_32b2_7095();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x173;
          FUN_32b2_6eb1();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x17b;
          FUN_32b2_6cc6();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x183;
          FUN_32b2_6cc6();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x188;
          FUN_32b2_7191();
          if ((bool)uVar12) {
            in_stack_0000002e = 0x32b2;
            in_stack_0000002c = 0x192;
            FUN_32b2_6cc6();
            in_stack_0000002e = 0x32b2;
            in_stack_0000002c = 0x19a;
            FUN_32b2_6cc6();
            in_stack_0000002e = 0x32b2;
            in_stack_0000002c = 0x19f;
            FUN_32b2_7191();
            if ((bool)uVar12) {
              return 0;
            }
          }
          in_stack_0000002e = unaff_BP + -0xa8;
          in_stack_0000002c = unaff_BP + -0x1c;
          in_stack_0000002a = *(undefined2 *)(unaff_BP + -0x7c);
          in_stack_00000028 = *(undefined2 *)(unaff_BP + -0x7e);
          in_stack_00000026 = *(undefined2 *)(unaff_BP + -0x80);
          in_stack_00000024 = *(undefined2 *)(unaff_BP + -0x82);
          in_stack_00000022 = *(undefined2 *)(unaff_BP + -0x58);
          in_stack_00000020 = *(undefined2 *)(unaff_BP + -0x5a);
          in_stack_0000001e = *(undefined2 *)(unaff_BP + -0x5c);
          in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x5e);
          in_stack_0000001a = 0x32b2;
          in_stack_00000018 = 0x1d0;
          FUN_32b2_6cc6();
          in_stack_0000001a = 0x32b2;
          in_stack_00000018 = 0x1d5;
          FUN_32b2_7258();
          in_stack_00000012 = 0x32b2;
          in_stack_00000010 = 0x1df;
          FUN_32b2_6eb1();
          in_stack_00000012 = 0x32b2;
          in_stack_00000010 = 0x1e7;
          FUN_32b2_6cc6();
          in_stack_00000012 = 0x32b2;
          in_stack_00000010 = 0x1ec;
          FUN_32b2_7258();
          FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
          iVar8 = func_0x0003fb3d();
          if (iVar8 == 0) break;
          in_stack_00000030 = 0x209;
          FUN_32b2_6cc6();
          in_stack_00000030 = 0x20e;
          FUN_32b2_7258();
          in_stack_00000030 = 0x216;
          FUN_32b2_6e99();
          in_stack_00000030 = 0x21e;
          FUN_32b2_6ef9();
          in_stack_00000030 = unaff_BP + -0xa4;
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x231;
          FUN_32b2_6cc6();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x236;
          FUN_32b2_7258();
          in_stack_00000026 = 0x32b2;
          in_stack_00000024 = 0x240;
          FUN_32b2_6eb1();
          in_stack_00000026 = 0x32b2;
          in_stack_00000024 = 0x248;
          FUN_32b2_6cc6();
          in_stack_00000026 = 0x32b2;
          in_stack_00000024 = 0x24d;
          FUN_32b2_7258();
          in_stack_0000001e = 0x32b2;
          in_stack_0000001c = 599;
          FUN_32b2_6eb1();
          in_stack_0000001e = 0x32b2;
          in_stack_0000001c = 0x25f;
          FUN_32b2_6d14();
          in_stack_00000016 = 0x32b2;
          in_stack_00000014 = 0x269;
          FUN_32b2_6eb1();
          in_stack_00000016 = 0x32b2;
          in_stack_00000014 = 0x271;
          FUN_32b2_6cc6();
          in_stack_00000016 = 0x32b2;
          in_stack_00000014 = 0x276;
          FUN_32b2_7258();
          in_stack_00000016 = 0x32b2;
          in_stack_00000014 = 0x27e;
          FUN_32b2_6e99();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          iStack_2 = 0x32b2;
          FUN_32b2_6eb1();
          iStack_2 = 1;
          FUN_3ab8_5089();
          in_stack_00000030 = unaff_BP + -0xd0;
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x2d4;
          FUN_32b2_6cc6();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x2d9;
          FUN_32b2_7258();
          in_stack_00000026 = 0x32b2;
          in_stack_00000024 = 0x2e3;
          FUN_32b2_6eb1();
          in_stack_00000026 = 0x32b2;
          in_stack_00000024 = 0x2eb;
          FUN_32b2_6cc6();
          in_stack_00000026 = 0x32b2;
          in_stack_00000024 = 0x2f0;
          FUN_32b2_7258();
          in_stack_0000001e = 0x32b2;
          in_stack_0000001c = 0x2fa;
          FUN_32b2_6eb1();
          in_stack_0000001e = 0x32b2;
          in_stack_0000001c = 0x302;
          FUN_32b2_6d14();
          in_stack_00000016 = 0x32b2;
          in_stack_00000014 = 0x30c;
          FUN_32b2_6eb1();
          in_stack_00000016 = 0x32b2;
          in_stack_00000014 = 0x314;
          FUN_32b2_6d14();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          iStack_2 = 0x32b2;
          FUN_32b2_6eb1();
          iStack_2 = 1;
        }
        return 0;
      }
      iStack_2 = 0xad;
      func_0x00029834();
      iStack_2 = 0x22b2;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029ae7();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iVar8 = 0x22b2;
      FUN_28b3_1181();
    } while (!(bool)uVar12 && !(bool)uVar13);
    if (*(int *)(unaff_BP + -0x1aa) == -1) {
      if (*(int *)(unaff_BP + -0x188) == 0) goto LAB_3ab8_4a16;
LAB_3ab8_4c49:
      do {
        if (*(int *)(unaff_BP + -0x188) == 0) {
          uVar6 = FUN_3ab8_4daa();
          return uVar6;
        }
        iStack_2 = unaff_BP + -0x80;
        func_0x00024c86(iVar8);
        iStack_2 = 0x302;
        FUN_21f2_2d26(0x22b2);
        iVar8 = 0x1bb4;
        uVar6 = 0xf810;
        iVar5 = iStack_2;
        iStack_2 = unaff_BP + -0x96;
        iVar11 = FUN_1def_0904(0x22b2,1,unaff_BP + -0x15a,unaff_BP + -0x19e);
        *(int *)(unaff_BP + -6) = iVar11;
        if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
        if (iVar11 == -1) {
          uVar6 = FUN_3ab8_4a0e();
          return uVar6;
        }
      } while (*(int *)(unaff_BP + -0x96) == 0);
      iStack_2 = 0x1bb4;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar17 = 0xf857;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2,uVar16,uVar6,uVar17);
      lVar14 = FUN_13bf_39a0(0x22b2);
      iVar8 = (int)((ulong)lVar14 >> 0x10);
      *(int *)(unaff_BP + -0x94) = (int)lVar14;
      *(int *)(unaff_BP + -0x92) = iVar8;
      if (lVar14 < 0) {
        iStack_2 = -(iVar8 + (uint)((int)lVar14 != 0));
        uVar12 = iStack_2 == 0;
        puVar15 = (undefined2 *)func_0x00000271(0x11f2);
        unaff_SI = (undefined2 *)puVar15;
        puVar7 = (undefined2 *)(unaff_BP + -0x26);
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = unaff_SI;
          unaff_SI = unaff_SI + 1;
          *puVar3 = *puVar2;
        }
        iStack_2 = 0;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iVar8 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar12) goto code_r0x0003f92a;
        iStack_2 = 0x22b2;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iVar8 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar12) goto code_r0x0003f92a;
        *(undefined2 *)0xc22 = 1;
        iStack_2 = 2;
        FUN_1000_0599(0x22b2);
        iStack_2 = 0x396;
        func_0x00012276();
      }
      iStack_2 = 0x1dc;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      iStack_2 = 2;
      iVar8 = 0xdef;
      FUN_1000_0599(0x11f2);
      if ((-1 < *(int *)(unaff_BP + -0x92)) &&
         ((0 < *(int *)(unaff_BP + -0x92) || (*(int *)(unaff_BP + -0x94) != 0)))) {
        iStack_2 = 900;
        iVar8 = 0x11f2;
        func_0x00012276();
      }
      *(undefined2 *)(unaff_BP + -0x92) = 0;
      *(undefined2 *)(unaff_BP + -0x94) = 0;
      goto LAB_3ab8_4c49;
    }
    if ((*(int *)(unaff_BP + -0x1aa) == 0x66) || (*(int *)(unaff_BP + -0x1aa) == 0)) {
      uVar6 = *(undefined2 *)(unaff_BP + -0x1ac);
      *(undefined2 *)0x4e24 = *(undefined2 *)(unaff_BP + -0x1ae);
      *(undefined2 *)0x4e26 = uVar6;
      do {
        do {
          if (*(int *)(unaff_BP + -0x188) != 0) goto LAB_3ab8_4f54;
          iStack_2 = 0x3dd;
          func_0x00024c86(iVar8);
          *(undefined2 *)0xc20 = 1;
          iVar8 = 0x1bb4;
          uVar17 = 0xfa97;
          iVar5 = iStack_2;
          iStack_2 = unaff_BP + -0x96;
          uVar6 = FUN_1def_0904(0x22b2,1,unaff_BP + -0x15a,unaff_BP + -0x166);
          *(undefined2 *)(unaff_BP + -0x58) = uVar6;
          *(undefined2 *)0xc20 = 0;
          iVar5 = iStack_2;
          if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
          if (*(int *)(unaff_BP + -0x58) == -1) goto code_r0x0003f92a;
        } while (*(int *)(unaff_BP + -0x96) == 0);
        iStack_2 = unaff_BP + -0x17a;
        iVar8 = 0x11f2;
        iVar5 = func_0x00015409(0x1bb4,*(undefined2 *)(unaff_BP + -0x96));
      } while (iVar5 == 0);
LAB_3ab8_4f54:
      uVar6 = *(undefined2 *)(unaff_BP + -0x164);
      *(undefined2 *)(unaff_BP + -0x15e) = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -0x15c) = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x178);
      *(undefined2 *)(unaff_BP + -0x172) = *(undefined2 *)(unaff_BP + -0x17a);
      *(undefined2 *)(unaff_BP + -0x170) = uVar6;
      iStack_2 = iVar8;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      func_0x00029b9d();
      iStack_2 = 0x22b2;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      func_0x00029983();
      iStack_2 = 0x22b2;
      func_0x000297e6();
      do {
        iStack_2 = 0x22b2;
        func_0x00029983();
        if ((*(int *)(unaff_BP + -0x188) != 0) && (*(int *)(unaff_BP + -0x92) < 0)) {
          uVar6 = func_0x0003fc30();
          return uVar6;
        }
        iStack_2 = 0x22b2;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        func_0x00029d78();
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        uVar6 = 0xfb6a;
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2,uVar16,uVar17,uVar6);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        iVar5 = FUN_1def_043a(0x22b2);
        iVar8 = 0x1bb4;
        if (iVar5 != 0) {
          iStack_2 = *(int *)0x9efe;
          uVar6 = 0xfbcc;
          func_0x000297e6(0x1bb4,*(undefined2 *)0x9ef8,*(undefined2 *)0x9efa);
          func_0x000299d1(0x22b2,uVar16,uVar17,uVar6);
          puVar7 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
          uVar6 = puVar7[1];
          *(undefined2 *)(unaff_BP + -0x90) = *puVar7;
          *(undefined2 *)(unaff_BP + -0x8e) = uVar6;
          iStack_2 = *(int *)0x9efe;
          uVar6 = 0xfc09;
          func_0x000297e6(0x1bb4,*(undefined2 *)0x9ef8,*(undefined2 *)0x9efa);
          func_0x000299d1(0x22b2,uVar16,uVar17,uVar6);
          puVar7 = (undefined2 *)func_0x0001e558(0x22b2,0);
          uVar6 = puVar7[1];
          *(undefined2 *)(unaff_BP + -0xc2) = *puVar7;
          *(undefined2 *)(unaff_BP + -0xc0) = uVar6;
          uVar6 = FUN_3ab8_52c7();
          return uVar6;
        }
LAB_3ab8_4a16:
        iStack_2 = 0x4ca6;
        func_0x00024c86(iVar8);
        iStack_2 = 0x4dce;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x2dc;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x2f0;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x98a;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x4dd1;
        FUN_21f2_2d26(0x22b2);
        if (*(int *)(unaff_BP + -0x188) == 0) {
          iStack_2 = 0x4dd9;
        }
        else {
          iStack_2 = 0x4dd4;
        }
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x4ca6;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x4dde;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x98a;
        FUN_21f2_2d26(0x22b2);
        if (*(int *)(unaff_BP + -0x48) != 0) {
          iStack_2 = 0x934;
          FUN_21f2_2d26(0x22b2);
          iStack_2 = 0x98a;
          FUN_21f2_2d26(0x22b2);
        }
        iStack_2 = unaff_BP + -0x15a;
        FUN_1def_07a4(0x22b2);
        *(undefined2 *)0xc2c = 1;
        *(undefined2 *)0xc20 = 1;
        iVar11 = 0x1bb4;
        uVar17 = 0xf69d;
        iVar8 = iStack_2;
        iStack_2 = unaff_BP + -0x96;
        uVar6 = FUN_1def_0904(0x1bb4,*(undefined2 *)(unaff_BP + -0x48),unaff_BP + -0x15a,
                              unaff_BP + -0xba);
        *(undefined2 *)(unaff_BP + -0x58) = uVar6;
        *(undefined2 *)0xc2c = 0;
        *(undefined2 *)0xc20 = 0;
        iVar5 = iStack_2;
        if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
        if (*(int *)(unaff_BP + -0x58) == 0x14) {
          *(undefined2 *)(unaff_BP + -0x48) = 0;
LAB_3ab8_4664:
          while( true ) {
            if (*(char *)0x1cd != '\0') {
              *(uint *)0x1d0 = (uint)*(byte *)0x1cd;
            }
            iStack_2 = 0x2f0;
            FUN_21f2_3454(unaff_BP + -0x15a);
            if (*(char *)0x4e23 == '\0') {
              iStack_2 = 0x2b8;
              uVar6 = 0x22b2;
              FUN_21f2_2d26(0x22b2);
            }
            else {
              iStack_2 = 0x2b2;
              FUN_21f2_2d26(0x22b2);
              iStack_2 = *(int *)0x1d0;
              FUN_21f2_3454(unaff_BP + -0xf6);
              if (*(byte *)0x123 < 6) {
                *(undefined2 *)(unaff_BP + -0x60) = 7;
              }
              else {
                *(undefined2 *)(unaff_BP + -0x60) = *(undefined2 *)(*(int *)0x1d0 * 2 + 0xa70);
                if (*(int *)0x1d0 == 7) {
                  *(undefined2 *)(unaff_BP + -0x60) = *(undefined2 *)0xa80;
                }
              }
              *(undefined2 *)0xc22 = 1;
              iStack_2 = -1;
              uVar6 = 0xdef;
              FUN_1000_02b5(unaff_BP + -0xf6,0x1b,2);
            }
            iStack_2 = 0x4dc4;
            FUN_21f2_2d26(uVar6);
            iStack_2 = 0x98a;
            FUN_21f2_2d26(0x22b2);
            iStack_2 = 0x4ca6;
            FUN_21f2_2d26(0x22b2);
            iStack_2 = 0x98a;
            FUN_21f2_2d26(0x22b2);
            iStack_2 = unaff_BP + -0x46;
            FUN_21f2_2d26(0x22b2);
            iStack_2 = 0x98a;
            FUN_21f2_2d26(0x22b2);
            iStack_2 = 0x4dc7;
            FUN_21f2_2d26(0x22b2);
            iStack_2 = 0x98a;
            FUN_21f2_2d26(0x22b2);
            iStack_2 = unaff_BP + -0xb2;
            FUN_21f2_2d26(0x22b2);
            iStack_2 = 0x98a;
            FUN_21f2_2d26(0x22b2);
            iStack_2 = unaff_BP + -0x15a;
            FUN_1def_07a4(0x22b2);
            *(undefined2 *)0xc1a = 1;
            *(undefined2 *)0xc20 = 1;
            if (*(char *)0x4e23 == '\0') {
              *(undefined2 *)(unaff_BP + -100) = *(undefined2 *)(unaff_BP + -0x48);
            }
            else if (*(int *)(unaff_BP + -0x48) == 0) {
              *(undefined2 *)(unaff_BP + -100) = 10000;
            }
            else {
              *(undefined2 *)(unaff_BP + -100) = 9999;
            }
            iVar11 = 0x1bb4;
            uVar17 = 0xf387;
            iVar5 = iStack_2;
            iStack_2 = unaff_BP + -0x96;
            uVar6 = FUN_1def_0904(0x1bb4,*(undefined2 *)(unaff_BP + -100),unaff_BP + -0x15a,
                                  unaff_BP + -0x19e);
            *(undefined2 *)(unaff_BP + -0x18a) = uVar6;
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) break;
            if (*(int *)0xc18 == 0) {
              if (*(int *)(unaff_BP + -0x18a) == 1) {
                *(undefined2 *)(unaff_BP + -0x96) = 0;
                *(undefined2 *)(unaff_BP + -0x48) = 0;
                *(char *)0x4e23 = '\x01' - *(char *)0x4e23;
              }
              if (*(int *)(unaff_BP + -0x18a) == -1) {
                iStack_2 = 0;
                iVar8 = 0x885;
                func_0x0000daa6();
                *(undefined2 *)(unaff_BP + -0x96) = 0;
                if (0 < *(int *)(unaff_BP + -0x48)) {
                  iStack_2 = *(int *)0x154;
                  *(int *)(unaff_BP + -0x1a0) = iStack_2;
                  FUN_2bb4_4988();
                  *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
                }
                if (*(int *)(unaff_BP + -0x48) < 0) {
                  iStack_2 = *(int *)0x152;
                  *(int *)(unaff_BP + -0x1a0) = iStack_2;
                  iVar8 = 0x1bb4;
                  FUN_1def_186d();
                  *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
                }
                iStack_2 = iVar8;
                func_0x0000abfa();
                iStack_2 = 1;
                iVar11 = 0x885;
                func_0x0000b1d8();
              }
              if (((0x61ff < *(int *)(unaff_BP + -0x18a)) && (*(int *)(unaff_BP + -0x18a) < 0x6701))
                 || ((5 < *(byte *)0x123 && (*(int *)(unaff_BP + -0x18a) == 0x6800)))) {
                *(undefined2 *)(unaff_BP + -0x96) = 0;
                uVar4 = *(int *)(unaff_BP + -0x18a) + 0x9f00;
                uVar9 = (int)uVar4 >> 0xf;
                iVar8 = ((int)((uVar4 ^ uVar9) - uVar9) >> 8 ^ uVar9) - uVar9;
                *(int *)0x1d0 = iVar8;
                if ((*(char *)0x1cd == '\0') && (iVar8 != 7)) {
                  *(int *)(unaff_BP + -4) = iVar8;
                }
                else {
                  *(undefined1 *)0x1cd = *(undefined1 *)0x1d0;
                }
              }
              if ((*(int *)(unaff_BP + -0x18a) < 2) || (5 < *(int *)(unaff_BP + -0x18a)))
              goto LAB_3ab8_498d;
              *(int *)(unaff_BP + -0x18a) = *(int *)(unaff_BP + -0x18a) + -1;
              iVar8 = iVar11;
              goto LAB_3ab8_4938;
            }
            *(undefined2 *)(unaff_BP + -0x48) = 0;
            iStack_2 = 0x1bb4;
            func_0x000297e6();
            iStack_2 = 0x22b2;
            func_0x00029d78();
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            uVar6 = 0xf3d4;
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2,uVar16,uVar17,uVar6);
            func_0x0000507a(0x22b2);
          }
          goto LAB_2bb4_480c_1;
        }
        if (*(int *)(unaff_BP + -0x58) == -1) {
          iStack_2 = 0;
          iVar8 = 0x885;
          func_0x0000daa6();
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          if (0 < *(int *)(unaff_BP + -0x48)) {
            iStack_2 = *(int *)0x154;
            *(int *)(unaff_BP + -0x1a0) = iStack_2;
            FUN_2bb4_4988();
            *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
          }
          if (*(int *)(unaff_BP + -0x48) < 0) {
            iStack_2 = *(int *)0x152;
            *(int *)(unaff_BP + -0x1a0) = iStack_2;
            iVar8 = 0x1bb4;
            FUN_1def_186d();
            *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
          }
          iStack_2 = iVar8;
          func_0x0000abfa();
          iStack_2 = 1;
          func_0x0000b1d8();
          iStack_2 = 0x885;
          func_0x000297e6();
          iStack_2 = unaff_BP + -0x192;
          func_0x00029b55();
          iStack_2 = 0x22b2;
          iVar11 = 0x22b2;
          func_0x00029983();
        }
        if (*(int *)(unaff_BP + -0x58) == 1) {
          *(undefined2 *)(unaff_BP + -0x48) = 0;
          if (*(int *)(unaff_BP + -0x188) == 0) {
            *(undefined2 *)(unaff_BP + -0x188) = 1;
          }
          else {
            *(undefined2 *)(unaff_BP + -0x188) = 0;
          }
        }
        if ((*(int *)(unaff_BP + -0x58) != 2) || (*(int *)(unaff_BP + -0x48) == 0)) {
          iVar8 = iVar11;
          if ((*(int *)(unaff_BP + -0x96) != 0) && (*(int *)(unaff_BP + -0x58) == 0)) {
            iStack_2 = unaff_BP + -0x16e;
            iVar8 = 0x11f2;
            iVar5 = func_0x00015409(iVar11,*(undefined2 *)(unaff_BP + -0x96));
            if (iVar5 != 0) {
              *(undefined2 *)(unaff_BP + -0x48) = 0;
              *(undefined2 *)(unaff_BP + -0x92) = 0;
              *(undefined2 *)(unaff_BP + -0x94) = 0;
              uVar6 = *(undefined2 *)(unaff_BP + -0xb8);
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)(unaff_BP + -0xba);
              *(undefined2 *)(unaff_BP + -0xb4) = uVar6;
              uVar6 = *(undefined2 *)(unaff_BP + -0x16c);
              *(undefined2 *)(unaff_BP + -0x162) = *(undefined2 *)(unaff_BP + -0x16e);
              *(undefined2 *)(unaff_BP + -0x160) = uVar6;
              goto LAB_3ab8_4c49;
            }
          }
          goto LAB_3ab8_4a16;
        }
        iStack_2 = iVar11;
        func_0x000297e6();
        iStack_2 = unaff_BP + -0x192;
        func_0x00029bb5();
      } while( true );
    }
  } while( true );
LAB_3ab8_498d:
  if (*(int *)(unaff_BP + -0x96) == 0) goto LAB_3ab8_4664;
  iStack_2 = unaff_BP + -0x1a4;
  iVar8 = 0x11f2;
  iVar5 = func_0x00015409(iVar11,*(undefined2 *)(unaff_BP + -0x96));
  if (iVar5 == 0) goto LAB_3ab8_4664;
  *(undefined2 *)(unaff_BP + -0x18a) = 0;
LAB_3ab8_4938:
  if (*(int *)(unaff_BP + -0x18a) == 0) {
    iStack_2 = iVar8;
    if (*(char *)0x4e23 == '\0') {
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar6 = 0xf4ef;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2,uVar16,uVar17,uVar6);
                    /* WARNING: Call to offcut address within same function */
      iVar8 = func_0x00030353(0x22b2);
      if (iVar8 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
      }
    }
    else {
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar6 = 0xf55c;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2,uVar16,uVar17,uVar6);
      iVar8 = FUN_1def_1208();
      if (iVar8 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
      }
    }
    goto LAB_3ab8_4664;
  }
  *(undefined2 *)(unaff_BP + -0x48) = 0;
  *(undefined2 *)(unaff_BP + -0x188) = 0;
  if (*(int *)(unaff_BP + -0x18a) != 1) {
    uVar6 = FUN_3ab8_5357();
    return uVar6;
  }
  *(undefined2 *)(unaff_BP + -0x92) = 0;
  *(undefined2 *)(unaff_BP + -0x94) = 0;
  goto LAB_3ab8_4a16;
}



/* 3ab8:5089  FUN_3ab8_5089  39 bytes, 4 callers */

void FUN_3ab8_5089(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  func_0x000299d1(0x3ab8);
  puVar2 = (undefined2 *)func_0x0001e558(0x22b2,0);
  uVar1 = puVar2[1];
  *(undefined2 *)(unaff_BP + -0xc2) = *puVar2;
  *(undefined2 *)(unaff_BP + -0xc0) = uVar1;
  FUN_3ab8_52c7();
  return;
}



/* 3ab8:50b0  FUN_3ab8_50b0  522 bytes, 1 callers */

/* WARNING: Possible PIC construction at 0x0003f7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0003f7d0) */

undefined2 FUN_3ab8_50b0(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  uint uVar9;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 in_ZF;
  long lVar15;
  undefined2 *puVar16;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000016;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  undefined2 in_stack_00000024;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  int in_stack_0000002c;
  int in_stack_0000002e;
  int in_stack_00000030;
  undefined2 auStack_30 [6];
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  int iStack_16;
  int iStack_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029d78();
  func_0x000299b9();
  FUN_28b3_0ee9();
  func_0x00029834();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029d78();
  func_0x000299b9();
  FUN_28b3_1181();
  if ((bool)in_ZF) {
    func_0x00029834();
    func_0x00029834();
    FUN_28b3_1181();
    iVar12 = 0x22b2;
    if ((bool)in_ZF) goto LAB_3ab8_4a16;
  }
  if (*(int *)(unaff_BP + -0x1a) == 10000) {
    iStack_6 = *(undefined2 *)(unaff_BP + -0x208);
    iStack_8 = *(undefined2 *)(unaff_BP + -0x20a);
    iStack_a = *(undefined2 *)(unaff_BP + -0x20c);
    iStack_c = *(undefined2 *)(unaff_BP + -0x20e);
    uStack_e = *(undefined2 *)(unaff_BP + -0x210);
    iStack_10 = *(undefined2 *)(unaff_BP + -0x212);
    uStack_12 = 0x22b2;
    iStack_14 = 0xfcd1;
    puVar8 = (undefined2 *)func_0x0002a178();
    *(undefined2 *)(unaff_BP + -0x202) = *puVar8;
    *(undefined2 *)(unaff_BP + -0x200) = puVar8[1];
    *(undefined2 *)(unaff_BP + -0x1fe) = puVar8[2];
    *(undefined2 *)(unaff_BP + -0x1fc) = puVar8[3];
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029d78();
    iStack_6 = 0xfd00;
    func_0x00029c74();
    func_0x000299b9();
    iStack_a = 0x22b2;
    iStack_c = 0xfd10;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xfd15;
    func_0x0002a11e();
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c9d();
    func_0x00029bb5();
    func_0x00029983();
    func_0x00029834();
    iStack_a = 0x22b2;
    iStack_c = 0xfd55;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xfd5a;
    func_0x0002a10c();
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c9d();
    func_0x00029bb5();
    func_0x00029983();
    uVar7 = FUN_3ab8_52c7();
    return uVar7;
  }
  func_0x0000c3ca();
  iStack_6 = 0x885;
  iStack_8 = 0xfd9c;
  FUN_1000_0599();
  iStack_6 = 0xfda7;
  func_0x00012276();
  iStack_6 = 0xfdb6;
  func_0x000297e6();
  iStack_6 = 0xfdbb;
  func_0x00029d78();
  iStack_c = 0x22b2;
  uStack_e = 0xfdc5;
  func_0x000299d1();
  iStack_c = 0x22b2;
  uStack_e = 0xfdce;
  func_0x000297e6();
  iStack_c = 0x22b2;
  uStack_e = 0xfdd3;
  func_0x00029d78();
  iStack_14 = 0x22b2;
  iStack_16 = 0xfddd;
  func_0x000299d1();
  iStack_16 = -*(int *)(unaff_BP + -0x94);
  iStack_14 = -(*(int *)(unaff_BP + -0x92) + (uint)(*(int *)(unaff_BP + -0x94) != 0));
  uStack_18 = 0x22b2;
  uStack_1a = 0xfdf3;
  FUN_20a9_1260();
  iStack_6 = 0x1bb4;
  iStack_8 = 0xfe09;
  func_0x000297e6();
  iStack_6 = 0x22b2;
  iStack_8 = 0xfe0e;
  func_0x00029d78();
  iStack_6 = 0x22b2;
  iStack_8 = 0xfe17;
  func_0x000299b9();
  uStack_e = 0x22b2;
  iStack_10 = 0xfe21;
  func_0x000299d1();
  uStack_e = *(undefined2 *)(unaff_BP + -0x1b0);
  iStack_10 = *(undefined2 *)(unaff_BP + -0x1b2);
  puVar8 = auStack_30;
  unaff_SI = (undefined2 *)(unaff_BP + -0x26);
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    puVar16 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar16;
  }
  pcVar4 = (code *)swi(0x3f);
  iVar6 = (*pcVar4)();
  iVar12 = 0x22b2;
  if (iVar6 != 0) {
    if (*(char *)0x4e23 == '\0') {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xfe66;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xfe6f;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = -0x18c;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xfe7e;
      func_0x000299d1();
      uStack_12 = 0x22b2;
                    /* WARNING: Call to offcut address within same function */
      iStack_14 = -0x17e;
      iVar6 = func_0x00030353();
      iVar12 = 0x22b2;
      if (iVar6 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
      }
    }
    else {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xfeaa;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xfeb3;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = -0x148;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xfec2;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      iStack_14 = -0x139;
      iVar6 = FUN_1def_1208();
      iVar12 = 0x1bb4;
      if (iVar6 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
      }
    }
  }
LAB_3ab8_4a16:
  do {
    iStack_8 = 0xf5a4;
    iStack_6 = iVar12;
    func_0x00024c86();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf5b4;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf5c4;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf5d4;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf5e4;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf5f4;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf610;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf620;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf630;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf640;
    FUN_21f2_2d26();
    if (*(int *)(unaff_BP + -0x48) != 0) {
      iStack_6 = 0x22b2;
      iStack_8 = 0xf656;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = 0xf666;
      FUN_21f2_2d26();
    }
    iVar6 = unaff_BP + -0x15a;
    iStack_6 = 0x22b2;
    iStack_8 = 0xf676;
    FUN_1def_07a4();
    *(undefined2 *)0xc2c = 1;
    *(undefined2 *)0xc20 = 1;
    iStack_6 = unaff_BP + -0xba;
    iStack_8 = unaff_BP + -0x15a;
    iStack_a = *(int *)(unaff_BP + -0x48);
    iStack_c = 0x1bb4;
    iVar12 = 0x1bb4;
    uStack_e = 0xf69d;
    uVar7 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x58) = uVar7;
    *(undefined2 *)0xc2c = 0;
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) {
LAB_2bb4_480c_1:
      iVar12 = *(int *)(unaff_BP + -4);
      *(int *)0x1d0 = iVar12;
      *(int *)(iVar6 + (int)unaff_SI) = *(int *)(iVar6 + (int)unaff_SI) + iVar12;
      while( true ) {
        iStack_6 = 0x354;
        FUN_3ab8_5089();
        uVar13 = (undefined1 *)0xffc9 < &stack0xfffe;
        uVar14 = &stack0x0000 == (undefined1 *)0xffcc;
        in_stack_00000030 = 0x360;
        FUN_32b2_6cc6();
        in_stack_00000030 = 0x369;
        FUN_32b2_701d();
        in_stack_00000030 = 0x36e;
        FUN_32b2_7258();
        in_stack_00000030 = 0x376;
        FUN_32b2_6e99();
        in_stack_00000030 = 0x37e;
        FUN_32b2_6ef9();
        in_stack_00000030 = 0x387;
        FUN_32b2_6cc6();
        in_stack_00000030 = 0x390;
        FUN_32b2_701d();
        in_stack_00000030 = 0x395;
        FUN_32b2_7258();
        in_stack_00000030 = 0x39e;
        FUN_32b2_6e99();
        in_stack_00000030 = 0x3a6;
        FUN_32b2_6ef9();
        in_stack_00000030 = 0x3af;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x3b4;
        FUN_32b2_6fc7();
        in_stack_00000030 = 0x3bc;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x3c1;
        FUN_32b2_6fc7();
        in_stack_00000030 = 0x3ca;
        FUN_32b2_710c();
        in_stack_00000030 = 0x3cf;
        FUN_32b2_7191();
        if (!(bool)uVar13 && !(bool)uVar14) {
          in_stack_00000030 = 0x3da;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x3e2;
          FUN_32b2_6d14();
          in_stack_00000030 = 999;
          FUN_32b2_7191();
          if (!(bool)uVar14) {
            in_stack_00000030 = 0x431;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x439;
            FUN_32b2_7124();
            in_stack_00000030 = 0x441;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x44a;
            FUN_32b2_704d();
            in_stack_00000030 = 0x453;
            FUN_32b2_7035();
            in_stack_00000030 = 0x45c;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x464;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x46c;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x474;
            FUN_32b2_710c();
            in_stack_00000030 = 0x47c;
            FUN_32b2_710c();
            in_stack_00000030 = 0x484;
            FUN_32b2_710c();
            in_stack_00000030 = 0x48c;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x494;
            FUN_32b2_710c();
            in_stack_00000030 = 0x49d;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x4a2;
            FUN_32b2_718c();
            in_stack_00000030 = 0x4ab;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x4b3;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x4bc;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x4c4;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4cd;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4d5;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4dd;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4e6;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x4ee;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x4f7;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x500;
            FUN_32b2_710c();
            in_stack_00000030 = 0x509;
            FUN_32b2_70dc();
            in_stack_00000030 = 0x511;
            FUN_32b2_710c();
            in_stack_00000030 = 0x519;
            FUN_32b2_710c();
            in_stack_00000030 = 0x522;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x52b;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x534;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x53d;
            FUN_32b2_710c();
            in_stack_00000030 = 0x546;
            FUN_32b2_710c();
            in_stack_00000030 = 0x54f;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x558;
            FUN_32b2_710c();
            in_stack_00000030 = 0x55d;
            FUN_32b2_718c();
            in_stack_00000030 = 0x566;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x56f;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x574;
            FUN_32b2_6fd6();
            in_stack_00000030 = 0x57d;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x586;
            FUN_32b2_710c();
            in_stack_00000030 = 0x58b;
            FUN_32b2_7182();
            in_stack_00000030 = 0x594;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x59c;
            FUN_32b2_710c();
            in_stack_00000030 = 0x5a5;
            FUN_32b2_7154();
            in_stack_00000030 = 0x5ae;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x5b7;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x5c0;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x5c9;
            FUN_32b2_6eb1();
            in_stack_00000030 = unaff_BP + -0x62;
            in_stack_0000002e = 0x32b2;
            in_stack_0000002c = 0x5db;
            FUN_32b2_6cc6();
            in_stack_0000002e = 0x32b2;
            in_stack_0000002c = 0x5e0;
            FUN_32b2_7258();
            in_stack_00000026 = 0x32b2;
            in_stack_00000024 = 0x5ea;
            FUN_32b2_6eb1();
            in_stack_00000026 = 0x32b2;
            in_stack_00000024 = 0x5f2;
            FUN_32b2_6cc6();
            in_stack_00000026 = 0x32b2;
            in_stack_00000024 = 0x5f7;
            FUN_32b2_7258();
            in_stack_0000001e = 0x32b2;
            in_stack_0000001c = 0x601;
            FUN_32b2_6eb1();
            in_stack_0000001e = *(undefined2 *)(unaff_BP + -100);
            in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x66);
            in_stack_0000001a = *(undefined2 *)(unaff_BP + -0x68);
            in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x6a);
            in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x48);
            in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x4a);
            in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x4c);
            in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4e);
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            iStack_6 = 0x646;
            FUN_3ab8_5089();
            uVar7 = *(undefined2 *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
            *(undefined2 *)(unaff_BP + -0x84) = uVar7;
            uVar7 = *(undefined2 *)(unaff_BP + -0x88);
            *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
            *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
            in_stack_00000030 = unaff_BP + -0x86;
            puVar10 = &stack0x0010;
            puVar8 = (undefined2 *)(unaff_BP + 0x1c);
            for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
              puVar2 = puVar10;
              puVar10 = puVar10 + 1;
              puVar16 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar2 = *puVar16;
            }
                    /* WARNING: Call to offcut address within same function */
            iVar12 = func_0x0003fdaf();
            uVar13 = 0;
            uVar14 = iVar12 == 0;
            if (!(bool)uVar14) {
              in_stack_00000030 = 0x694;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x69d;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x6a5;
              FUN_32b2_701d();
              in_stack_00000030 = 0x6aa;
              FUN_32b2_6fc7();
              in_stack_00000030 = 0x6af;
              FUN_32b2_7258();
              in_stack_00000030 = 0x6b4;
              FUN_32b2_7191();
              if ((bool)uVar13 || (bool)uVar14) {
                in_stack_00000030 = 0x6bf;
                FUN_32b2_6d14();
                in_stack_00000030 = 0x6c8;
                FUN_32b2_6cc6();
                in_stack_00000030 = 0x6d1;
                FUN_32b2_701d();
                in_stack_00000030 = 0x6d6;
                FUN_32b2_6fc7();
                in_stack_00000030 = 0x6db;
                FUN_32b2_7258();
                in_stack_00000030 = 0x6e0;
                FUN_32b2_7191();
                if ((bool)uVar13 || (bool)uVar14) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
              }
            }
            in_stack_00000030 = 0x6f8;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x700;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x708;
            FUN_32b2_710c();
            in_stack_00000030 = 0x711;
            FUN_32b2_710c();
            in_stack_00000030 = 0x71a;
            FUN_32b2_7154();
            in_stack_00000030 = 0x71f;
            FUN_32b2_7191();
            if (!(bool)uVar13) {
              in_stack_00000030 = 0x72d;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x732;
              FUN_32b2_6fc7();
              in_stack_00000030 = 0x73a;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x742;
              FUN_32b2_710c();
              in_stack_00000030 = 0x74b;
              FUN_32b2_710c();
              in_stack_00000030 = 0x750;
              FUN_32b2_7191();
              if (!(bool)uVar13) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
              in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb8);
              in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xba);
              in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xbc);
              in_stack_0000002a = 0x32b2;
              in_stack_00000028 = 0x774;
              FUN_32b2_7592();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x77e;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x786;
              FUN_32b2_70dc();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x78e;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x797;
              FUN_32b2_710c();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x79c;
              FUN_32b2_7182();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7a5;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7ad;
              FUN_32b2_710c();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7b5;
              FUN_32b2_7154();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7be;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7c7;
              FUN_32b2_6eb1();
              in_stack_00000030 = unaff_BP + -0x8a;
              in_stack_0000002e = unaff_BP + -0x62;
              in_stack_0000002c = 0x32b2;
              in_stack_0000002a = 0x7d9;
              FUN_32b2_6cc6();
              in_stack_0000002c = 0x32b2;
              in_stack_0000002a = 0x7de;
              FUN_32b2_7258();
              in_stack_00000024 = 0x32b2;
              in_stack_00000022 = 0x7e8;
              FUN_32b2_6eb1();
              in_stack_00000024 = 0x32b2;
              in_stack_00000022 = 0x7f0;
              FUN_32b2_6cc6();
              in_stack_00000024 = 0x32b2;
              in_stack_00000022 = 0x7f5;
              FUN_32b2_7258();
              in_stack_0000001c = 0x32b2;
              in_stack_0000001a = 0x7ff;
              FUN_32b2_6eb1();
              in_stack_0000001c = *(undefined2 *)(unaff_BP + -100);
              in_stack_0000001a = *(undefined2 *)(unaff_BP + -0x66);
              in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x68);
              in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x6a);
              in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x48);
              in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x4a);
              in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4c);
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              FUN_32b2_6d14();
              iStack_6 = 0x83d;
              FUN_32b2_6eb1();
              iStack_6 = 0x32b2;
              iStack_8 = 0x844;
              FUN_3ab8_5089();
              uVar13 = (undefined1 *)0xffc9 < &stack0xfffc;
              uVar14 = &stack0x0000 == (undefined1 *)0xffce;
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x84f;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x857;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x85c;
              FUN_32b2_7191();
              if ((bool)uVar14) {
                uVar7 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar7;
              }
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x872;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x87a;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x87f;
              FUN_32b2_7191();
              if ((bool)uVar14) {
                uVar7 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar7;
              }
              uVar7 = *(undefined2 *)(unaff_BP + -0x60);
              puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
              *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
              puVar8[1] = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x88);
              puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
              *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar8[1] = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x60);
              puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
              puVar8[1] = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x88);
              puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar8[1] = uVar7;
              piVar1 = (int *)(unaff_BP + -0x36);
              *piVar1 = *piVar1 + 1;
              uVar14 = *piVar1 == 0;
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x8d7;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x8e0;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x8e5;
              FUN_32b2_7191();
              if (!(bool)uVar13 && !(bool)uVar14) {
                in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb6);
                in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xb8);
                in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xba);
                in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xbc);
                in_stack_00000028 = 0x32b2;
                in_stack_00000026 = 0x8ff;
                FUN_32b2_7592();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x909;
                FUN_32b2_6d14();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x911;
                FUN_32b2_7154();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x916;
                FUN_32b2_6fd6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x91e;
                FUN_32b2_6d14();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x927;
                FUN_32b2_710c();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x92c;
                FUN_32b2_7182();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x935;
                FUN_32b2_6e99();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x93d;
                FUN_32b2_710c();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x945;
                FUN_32b2_7154();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x94e;
                FUN_32b2_6e99();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x957;
                FUN_32b2_6eb1();
                in_stack_0000002e = unaff_BP + -0x8a;
                in_stack_0000002c = unaff_BP + -0x62;
                in_stack_0000002a = 0x32b2;
                in_stack_00000028 = 0x969;
                FUN_32b2_6cc6();
                in_stack_0000002a = 0x32b2;
                in_stack_00000028 = 0x96e;
                FUN_32b2_7258();
                in_stack_00000022 = 0x32b2;
                in_stack_00000020 = 0x978;
                FUN_32b2_6eb1();
                in_stack_00000022 = 0x32b2;
                in_stack_00000020 = 0x980;
                FUN_32b2_6cc6();
                in_stack_00000022 = 0x32b2;
                in_stack_00000020 = 0x985;
                FUN_32b2_7258();
                in_stack_0000001a = 0x32b2;
                in_stack_00000018 = 0x98f;
                FUN_32b2_6eb1();
                in_stack_0000001a = *(undefined2 *)(unaff_BP + -100);
                in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x66);
                in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x68);
                in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x6a);
                in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x48);
                in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4a);
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_32b2_6d14();
                iStack_6 = 0x32b2;
                iStack_8 = 0x9cd;
                FUN_32b2_6eb1();
                iStack_6 = 0;
                iStack_8 = 0x32b2;
                iStack_a = 0x9d4;
                FUN_3ab8_5089();
                uVar13 = &stack0x0000 == (undefined1 *)0xffd0;
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x9df;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x9e7;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x9ec;
                FUN_32b2_7191();
                if ((bool)uVar13) {
                  uVar7 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar7;
                }
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0xa02;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0xa0a;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0xa0f;
                FUN_32b2_7191();
                if ((bool)uVar13) {
                  uVar7 = *(undefined2 *)(unaff_BP + 0xc);
                  *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                  *(undefined2 *)(unaff_BP + -0x88) = uVar7;
                }
                uVar7 = *(undefined2 *)(unaff_BP + -0x60);
                puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
                puVar8[1] = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0x88);
                puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar8[1] = uVar7;
                *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
              }
              return *(undefined2 *)(unaff_BP + -0x36);
            }
          }
          return 0;
        }
        in_stack_00000030 = 0x3f5;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x3ff;
        FUN_32b2_7154();
        in_stack_00000030 = 0x405;
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
        in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb8);
        in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xba);
        in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xbc);
        in_stack_0000002a = 0x32b2;
        in_stack_00000028 = 0x119;
        FUN_32b2_75fe();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x123;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 299;
        FUN_32b2_704d();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x133;
        FUN_32b2_7095();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x13b;
        FUN_32b2_6eb1();
        in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb6);
        in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xb8);
        in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xba);
        in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xbc);
        in_stack_00000028 = 0x32b2;
        in_stack_00000026 = 0x150;
        FUN_32b2_75ec();
        uVar13 = &stack0x0000 == (undefined1 *)0xffd0;
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x15a;
        FUN_32b2_6d14();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x162;
        FUN_32b2_704d();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x16a;
        FUN_32b2_7095();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x173;
        FUN_32b2_6eb1();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x17b;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x183;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x188;
        FUN_32b2_7191();
        if ((bool)uVar13) {
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x192;
          FUN_32b2_6cc6();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x19a;
          FUN_32b2_6cc6();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x19f;
          FUN_32b2_7191();
          if ((bool)uVar13) {
            return 0;
          }
        }
        in_stack_0000002e = unaff_BP + -0xa8;
        in_stack_0000002c = unaff_BP + -0x1c;
        in_stack_0000002a = *(undefined2 *)(unaff_BP + -0x7c);
        in_stack_00000028 = *(undefined2 *)(unaff_BP + -0x7e);
        in_stack_00000026 = *(undefined2 *)(unaff_BP + -0x80);
        in_stack_00000024 = *(undefined2 *)(unaff_BP + -0x82);
        in_stack_00000022 = *(undefined2 *)(unaff_BP + -0x58);
        in_stack_00000020 = *(undefined2 *)(unaff_BP + -0x5a);
        in_stack_0000001e = *(undefined2 *)(unaff_BP + -0x5c);
        in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x5e);
        in_stack_0000001a = 0x32b2;
        in_stack_00000018 = 0x1d0;
        FUN_32b2_6cc6();
        in_stack_0000001a = 0x32b2;
        in_stack_00000018 = 0x1d5;
        FUN_32b2_7258();
        in_stack_00000012 = 0x32b2;
        in_stack_00000010 = 0x1df;
        FUN_32b2_6eb1();
        in_stack_00000012 = 0x32b2;
        in_stack_00000010 = 0x1e7;
        FUN_32b2_6cc6();
        in_stack_00000012 = 0x32b2;
        in_stack_00000010 = 0x1ec;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
        iVar12 = func_0x0003fb3d();
        if (iVar12 == 0) break;
        in_stack_00000030 = 0x209;
        FUN_32b2_6cc6();
        in_stack_00000030 = 0x20e;
        FUN_32b2_7258();
        in_stack_00000030 = 0x216;
        FUN_32b2_6e99();
        in_stack_00000030 = 0x21e;
        FUN_32b2_6ef9();
        in_stack_00000030 = unaff_BP + -0xa4;
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x231;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x236;
        FUN_32b2_7258();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x240;
        FUN_32b2_6eb1();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x248;
        FUN_32b2_6cc6();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x24d;
        FUN_32b2_7258();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 599;
        FUN_32b2_6eb1();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 0x25f;
        FUN_32b2_6d14();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x269;
        FUN_32b2_6eb1();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x271;
        FUN_32b2_6cc6();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x276;
        FUN_32b2_7258();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x27e;
        FUN_32b2_6e99();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        iStack_6 = 0x2be;
        FUN_3ab8_5089();
        in_stack_00000030 = unaff_BP + -0xd0;
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x2d4;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x2d9;
        FUN_32b2_7258();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x2e3;
        FUN_32b2_6eb1();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x2eb;
        FUN_32b2_6cc6();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x2f0;
        FUN_32b2_7258();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 0x2fa;
        FUN_32b2_6eb1();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 0x302;
        FUN_32b2_6d14();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x30c;
        FUN_32b2_6eb1();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x314;
        FUN_32b2_6d14();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
      }
      return 0;
    }
    if (*(int *)(unaff_BP + -0x58) == 0x14) {
      *(undefined2 *)(unaff_BP + -0x48) = 0;
LAB_3ab8_4664:
      while( true ) {
        if (*(char *)0x1cd != '\0') {
          *(uint *)0x1d0 = (uint)*(byte *)0x1cd;
        }
        iStack_6 = unaff_BP + -0x15a;
        iStack_a = -0xdfb;
        iStack_8 = iVar12;
        FUN_21f2_3454();
        if (*(char *)0x4e23 == '\0') {
          iStack_6 = 0x22b2;
          uVar7 = 0x22b2;
          iStack_8 = 0xf21d;
          FUN_21f2_2d26();
        }
        else {
          iStack_6 = 0x22b2;
          iStack_8 = 61999;
          FUN_21f2_2d26();
          iStack_6 = unaff_BP + -0xf6;
          iStack_8 = 0x22b2;
          iStack_a = 0xf243;
          FUN_21f2_3454();
          if (*(byte *)0x123 < 6) {
            *(undefined2 *)(unaff_BP + -0x60) = 7;
          }
          else {
            *(undefined2 *)(unaff_BP + -0x60) = *(undefined2 *)(*(int *)0x1d0 * 2 + 0xa70);
            if (*(int *)0x1d0 == 7) {
              *(undefined2 *)(unaff_BP + -0x60) = *(undefined2 *)0xa80;
            }
          }
          *(undefined2 *)0xc22 = 1;
          iStack_6 = 2;
          iStack_8 = 0x1b;
          iStack_a = unaff_BP + -0xf6;
          iStack_c = 0x22b2;
          uVar7 = 0xdef;
          uStack_e = 0xf28d;
          FUN_1000_02b5();
        }
        iStack_8 = 0xf29e;
        iStack_6 = uVar7;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = 0xf2ae;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = 0xf2be;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = 0xf2ce;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = 0xf2de;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = 0xf2ee;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = 0xf2fe;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = 0xf30e;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = 0xf31f;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = 0xf32f;
        FUN_21f2_2d26();
        iVar6 = unaff_BP + -0x15a;
        iStack_6 = 0x22b2;
        iStack_8 = 0xf33f;
        FUN_1def_07a4();
        *(undefined2 *)0xc1a = 1;
        *(undefined2 *)0xc20 = 1;
        if (*(char *)0x4e23 == '\0') {
          *(undefined2 *)(unaff_BP + -100) = *(undefined2 *)(unaff_BP + -0x48);
        }
        else if (*(int *)(unaff_BP + -0x48) == 0) {
          *(undefined2 *)(unaff_BP + -100) = 10000;
        }
        else {
          *(undefined2 *)(unaff_BP + -100) = 9999;
        }
        iStack_6 = unaff_BP + -0x19e;
        iStack_8 = unaff_BP + -0x15a;
        iStack_a = *(int *)(unaff_BP + -100);
        iStack_c = 0x1bb4;
        iVar11 = 0x1bb4;
        uStack_e = 0xf387;
        uVar7 = FUN_1def_0904();
        *(undefined2 *)(unaff_BP + -0x18a) = uVar7;
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) break;
        if (*(int *)0xc18 == 0) {
          if (*(int *)(unaff_BP + -0x18a) == 1) {
            *(undefined2 *)(unaff_BP + -0x96) = 0;
            *(undefined2 *)(unaff_BP + -0x48) = 0;
            *(char *)0x4e23 = '\x01' - *(char *)0x4e23;
          }
          if (*(int *)(unaff_BP + -0x18a) == -1) {
            iStack_6 = 0xf40f;
            func_0x0000daa6();
            *(undefined2 *)(unaff_BP + -0x96) = 0;
            if (0 < *(int *)(unaff_BP + -0x48)) {
              *(undefined2 *)(unaff_BP + -0x1a0) = *(undefined2 *)0x154;
              iStack_6 = 0xf428;
              FUN_2bb4_4988();
              *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
            }
            if (*(int *)(unaff_BP + -0x48) < 0) {
              *(undefined2 *)(unaff_BP + -0x1a0) = *(undefined2 *)0x152;
              iStack_6 = 0xf43f;
              FUN_1def_186d();
              *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
            }
            func_0x0000abfa();
            iVar11 = 0x885;
            iStack_6 = -0xbaf;
            func_0x0000b1d8();
          }
          if (((0x61ff < *(int *)(unaff_BP + -0x18a)) && (*(int *)(unaff_BP + -0x18a) < 0x6701)) ||
             ((5 < *(byte *)0x123 && (*(int *)(unaff_BP + -0x18a) == 0x6800)))) {
            *(undefined2 *)(unaff_BP + -0x96) = 0;
            uVar5 = *(int *)(unaff_BP + -0x18a) + 0x9f00;
            uVar9 = (int)uVar5 >> 0xf;
            iVar12 = ((int)((uVar5 ^ uVar9) - uVar9) >> 8 ^ uVar9) - uVar9;
            *(int *)0x1d0 = iVar12;
            if ((*(char *)0x1cd == '\0') && (iVar12 != 7)) {
              *(int *)(unaff_BP + -4) = iVar12;
            }
            else {
              *(undefined1 *)0x1cd = *(undefined1 *)0x1d0;
            }
          }
          iVar12 = iVar11;
          if ((*(int *)(unaff_BP + -0x18a) < 2) || (5 < *(int *)(unaff_BP + -0x18a)))
          goto LAB_3ab8_498d;
          *(int *)(unaff_BP + -0x18a) = *(int *)(unaff_BP + -0x18a) + -1;
          goto LAB_3ab8_4938;
        }
        *(undefined2 *)(unaff_BP + -0x48) = 0;
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xf3c6;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xf3cf;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = -0xc2c;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        iStack_14 = 0xf3de;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        iStack_14 = -0xc1d;
        func_0x0000507a();
        iVar12 = 0x3bf;
      }
      goto LAB_2bb4_480c_1;
    }
    if (*(int *)(unaff_BP + -0x58) == -1) {
      iStack_6 = 0xf6ce;
      func_0x0000daa6();
      *(undefined2 *)(unaff_BP + -0x96) = 0;
      if (0 < *(int *)(unaff_BP + -0x48)) {
        *(undefined2 *)(unaff_BP + -0x1a0) = *(undefined2 *)0x154;
        iStack_6 = 0xf6e7;
        FUN_2bb4_4988();
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
      }
      if (*(int *)(unaff_BP + -0x48) < 0) {
        *(undefined2 *)(unaff_BP + -0x1a0) = *(undefined2 *)0x152;
        iStack_6 = 0xf6fe;
        FUN_1def_186d();
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
      }
      func_0x0000abfa();
      iStack_6 = 0xf710;
      func_0x0000b1d8();
      func_0x000297e6();
      iStack_6 = -0x8dc;
      func_0x00029b55();
      iVar12 = 0x22b2;
      func_0x00029983();
    }
    if (*(int *)(unaff_BP + -0x58) == 1) {
      *(undefined2 *)(unaff_BP + -0x48) = 0;
      if (*(int *)(unaff_BP + -0x188) == 0) {
        *(undefined2 *)(unaff_BP + -0x188) = 1;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x188) = 0;
      }
    }
    if ((*(int *)(unaff_BP + -0x58) != 2) || (*(int *)(unaff_BP + -0x48) == 0)) {
      if ((*(int *)(unaff_BP + -0x96) != 0) && (*(int *)(unaff_BP + -0x58) == 0)) {
        iStack_6 = *(int *)(unaff_BP + -0x96);
        iVar11 = 0x11f2;
        iStack_a = -0x870;
        iStack_8 = iVar12;
        iVar6 = func_0x00015409();
        iVar12 = iVar11;
        if (iVar6 != 0) {
          *(undefined2 *)(unaff_BP + -0x48) = 0;
          *(undefined2 *)(unaff_BP + -0x92) = 0;
          *(undefined2 *)(unaff_BP + -0x94) = 0;
          uVar7 = *(undefined2 *)(unaff_BP + -0xb8);
          *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)(unaff_BP + -0xba);
          *(undefined2 *)(unaff_BP + -0xb4) = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x16c);
          *(undefined2 *)(unaff_BP + -0x162) = *(undefined2 *)(unaff_BP + -0x16e);
          *(undefined2 *)(unaff_BP + -0x160) = uVar7;
LAB_3ab8_4c49:
          do {
            if (*(int *)(unaff_BP + -0x188) != 0) {
              iStack_8 = 0xf7e1;
              iStack_6 = iVar11;
              func_0x00024c86();
              iStack_6 = 0x22b2;
              iStack_8 = 0xf7f1;
              FUN_21f2_2d26();
              iVar6 = 0x302;
              iStack_6 = unaff_BP + -0x19e;
              iStack_8 = unaff_BP + -0x15a;
              iStack_a = 1;
              iStack_c = 0x22b2;
              iVar11 = 0x1bb4;
              uStack_e = 0xf810;
              iVar12 = FUN_1def_0904();
              *(int *)(unaff_BP + -6) = iVar12;
              if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
              if (iVar12 == -1) {
                uVar7 = FUN_3ab8_4a0e();
                return uVar7;
              }
              if (*(int *)(unaff_BP + -0x96) == 0) goto LAB_3ab8_4c49;
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xf849;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xf852;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = -0x7a9;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              iStack_14 = 0xf861;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              iStack_14 = -0x79a;
              lVar15 = FUN_13bf_39a0();
              iVar12 = (int)((ulong)lVar15 >> 0x10);
              *(int *)(unaff_BP + -0x94) = (int)lVar15;
              *(int *)(unaff_BP + -0x92) = iVar12;
              if (-1 < lVar15) {
LAB_3ab8_4d64:
                iStack_6 = 0xf8ed;
                func_0x00012276();
                *(undefined2 *)0xc22 = 1;
                iStack_6 = 0x11f2;
                iVar11 = 0xdef;
                iStack_8 = -0x6ff;
                FUN_1000_0599();
                if ((-1 < *(int *)(unaff_BP + -0x92)) &&
                   ((0 < *(int *)(unaff_BP + -0x92) || (*(int *)(unaff_BP + -0x94) != 0)))) {
                  iVar11 = 0x11f2;
                  iStack_6 = -0x6e4;
                  func_0x00012276();
                }
                *(undefined2 *)(unaff_BP + -0x92) = 0;
                *(undefined2 *)(unaff_BP + -0x94) = 0;
                goto LAB_3ab8_4c49;
              }
              uVar13 = iVar12 + (uint)((int)lVar15 != 0) == 0;
              iStack_6 = 0x11f2;
              iStack_8 = -0x77d;
              puVar16 = (undefined2 *)func_0x00000271();
              unaff_SI = (undefined2 *)puVar16;
              puVar8 = (undefined2 *)(unaff_BP + -0x26);
              for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
                puVar3 = puVar8;
                puVar8 = puVar8 + 1;
                puVar2 = unaff_SI;
                unaff_SI = unaff_SI + 1;
                *puVar3 = *puVar2;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar13) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar13) {
                  *(undefined2 *)0xc22 = 1;
                  iStack_6 = 0x22b2;
                  iStack_8 = -0x728;
                  FUN_1000_0599();
                  iStack_6 = 0xf8e3;
                  func_0x00012276();
                  goto LAB_3ab8_4d64;
                }
              }
            }
FUN_3ab8_4daa:
            do {
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029983();
              func_0x0001bb4e();
              iStack_6 = 0xf953;
              func_0x00012276();
              iStack_6 = 0xf95d;
              func_0x00012276();
              iStack_6 = *(undefined2 *)0x4e26;
              iStack_8 = *(undefined2 *)0x4e24;
              iStack_a = 0x31e;
              iStack_c = 0x4de4;
              uStack_e = 0x4de5;
              iStack_10 = unaff_BP + -0x202;
              uStack_12 = 0x11f2;
              iStack_14 = -0x67c;
              FUN_10ad_19f9();
              iStack_6 = 0x11f2;
              iStack_8 = 0xf994;
              FUN_1000_0599();
              iVar6 = unaff_BP + -0x202;
              iStack_6 = 0xf9a0;
              func_0x00012276();
              if (*(int *)(unaff_BP + -0x188) != 0) {
                iStack_6 = 0x11f2;
                iStack_8 = 0xf9b5;
                FUN_1000_0599();
                iStack_6 = 0xf9c0;
                func_0x00012276();
                iStack_6 = 0xf9ca;
                func_0x00012276();
                iVar6 = 0x4df1;
                *(undefined2 *)0xc22 = 1;
              }
              iStack_6 = unaff_BP + -0x1a4;
              iStack_8 = unaff_BP + -0x19e;
              iStack_a = unaff_BP + -0x1b2;
              iStack_c = unaff_BP + -0x1ae;
              uStack_e = 0x11f2;
              iStack_10 = 0xf9f2;
              uVar7 = func_0x000021a4();
              *(undefined2 *)(unaff_BP + -0x1aa) = uVar7;
              uVar13 = 0;
              uVar14 = *(int *)0x158 == 0;
              if (!(bool)uVar14) goto LAB_2bb4_480c_1;
              func_0x00029834();
              func_0x000297e6();
              func_0x00029ae7();
              func_0x00029d78();
              iVar11 = 0x22b2;
              FUN_28b3_1181();
            } while (!(bool)uVar13 && !(bool)uVar14);
            if (*(int *)(unaff_BP + -0x1aa) != -1) {
              if ((*(int *)(unaff_BP + -0x1aa) == 0x66) || (*(int *)(unaff_BP + -0x1aa) == 0)) {
                uVar7 = *(undefined2 *)(unaff_BP + -0x1ac);
                *(undefined2 *)0x4e24 = *(undefined2 *)(unaff_BP + -0x1ae);
                *(undefined2 *)0x4e26 = uVar7;
LAB_3ab8_4edd:
                if (*(int *)(unaff_BP + -0x188) != 0) goto LAB_3ab8_4f54;
                iStack_8 = 0xfa72;
                iStack_6 = iVar11;
                func_0x00024c86();
                iVar6 = 0x3dd;
                *(undefined2 *)0xc20 = 1;
                iStack_6 = unaff_BP + -0x166;
                iStack_8 = unaff_BP + -0x15a;
                iStack_a = 1;
                iStack_c = 0x22b2;
                iVar11 = 0x1bb4;
                uStack_e = 0xfa97;
                uVar7 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0x58) = uVar7;
                *(undefined2 *)0xc20 = 0;
                if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
                if (*(int *)(unaff_BP + -0x58) != -1) goto LAB_3ab8_4f34;
              }
              goto FUN_3ab8_4daa;
            }
            iVar12 = iVar11;
          } while (*(int *)(unaff_BP + -0x188) != 0);
        }
      }
      goto LAB_3ab8_4a16;
    }
    func_0x000297e6();
    iStack_6 = -0x897;
    func_0x00029bb5();
LAB_3ab8_4fae:
    func_0x00029983();
    if ((*(int *)(unaff_BP + -0x188) != 0) && (*(int *)(unaff_BP + -0x92) < 0)) {
      uVar7 = FUN_3ab8_50b0();
      return uVar7;
    }
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xfb5c;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xfb65;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = -0x496;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    iStack_14 = 0xfb74;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    iStack_14 = 0xfb7d;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    iStack_14 = -0x47e;
    func_0x00029d78();
    uStack_1a = 0x22b2;
    uStack_1c = 0xfb8c;
    func_0x000299d1();
    uStack_1a = 0x22b2;
    uStack_1c = 0xfb95;
    func_0x000297e6();
    uStack_1a = 0x22b2;
    uStack_1c = 0xfb9a;
    func_0x00029d78();
    uStack_22 = 0x22b2;
    uStack_24 = 0xfba4;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    iVar12 = 0x1bb4;
    uStack_24 = 0xfba9;
    iVar6 = FUN_1def_043a();
    if (iVar6 != 0) {
      iStack_6 = *(undefined2 *)0x9efa;
      iStack_8 = *(undefined2 *)0x9ef8;
      iStack_a = 0x1bb4;
      iStack_c = 0xfbcc;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      iStack_14 = 0xfbd6;
      func_0x000299d1();
      uStack_12 = 0;
      iStack_14 = 0x22b2;
      iStack_16 = 0xfbde;
      puVar8 = (undefined2 *)FUN_1def_05d1();
      uVar7 = puVar8[1];
      *(undefined2 *)(unaff_BP + -0x90) = *puVar8;
      *(undefined2 *)(unaff_BP + -0x8e) = uVar7;
      iStack_6 = *(undefined2 *)0x9efa;
      iStack_8 = *(undefined2 *)0x9ef8;
      iStack_a = 0x1bb4;
      iStack_c = 0xfc09;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      iStack_14 = 0xfc13;
      func_0x000299d1();
      uStack_12 = 0;
      iStack_14 = 0x22b2;
      iStack_16 = 0xfc1b;
      puVar8 = (undefined2 *)func_0x0001e558();
      uVar7 = puVar8[1];
      *(undefined2 *)(unaff_BP + -0xc2) = *puVar8;
      *(undefined2 *)(unaff_BP + -0xc0) = uVar7;
      uVar7 = FUN_3ab8_52c7();
      return uVar7;
    }
  } while( true );
LAB_3ab8_498d:
  if (*(int *)(unaff_BP + -0x96) == 0) goto LAB_3ab8_4664;
  iStack_6 = *(int *)(unaff_BP + -0x96);
  iVar12 = 0x11f2;
  iStack_a = -0xad9;
  iStack_8 = iVar11;
  iVar6 = func_0x00015409();
  if (iVar6 == 0) goto LAB_3ab8_4664;
  *(undefined2 *)(unaff_BP + -0x18a) = 0;
LAB_3ab8_4938:
  if (*(int *)(unaff_BP + -0x18a) == 0) {
    if (*(char *)0x4e23 == '\0') {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xf4e1;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xf4ea;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = -0xb11;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xf4f9;
      func_0x000299d1();
      uStack_12 = 0x22b2;
                    /* WARNING: Call to offcut address within same function */
      iStack_14 = -0xb03;
      iVar6 = func_0x00030353();
      iVar12 = 0x22b2;
      if (iVar6 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
      }
    }
    else {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xf54e;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xf557;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = -0xaa4;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xf566;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      iStack_14 = -0xa95;
      iVar6 = FUN_1def_1208();
      iVar12 = 0x1bb4;
      if (iVar6 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
      }
    }
    goto LAB_3ab8_4664;
  }
  *(undefined2 *)(unaff_BP + -0x48) = 0;
  *(undefined2 *)(unaff_BP + -0x188) = 0;
  if (*(int *)(unaff_BP + -0x18a) != 1) {
    uVar7 = FUN_3ab8_5357();
    return uVar7;
  }
  *(undefined2 *)(unaff_BP + -0x92) = 0;
  *(undefined2 *)(unaff_BP + -0x94) = 0;
  goto LAB_3ab8_4a16;
LAB_3ab8_4f34:
  if (*(int *)(unaff_BP + -0x96) != 0) {
    iStack_6 = *(int *)(unaff_BP + -0x96);
    iStack_8 = 0x1bb4;
    iVar11 = 0x11f2;
    iStack_a = -0x533;
    iVar12 = func_0x00015409();
    if (iVar12 != 0) {
LAB_3ab8_4f54:
      uVar7 = *(undefined2 *)(unaff_BP + -0x164);
      *(undefined2 *)(unaff_BP + -0x15e) = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -0x15c) = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x178);
      *(undefined2 *)(unaff_BP + -0x172) = *(undefined2 *)(unaff_BP + -0x17a);
      *(undefined2 *)(unaff_BP + -0x170) = uVar7;
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b9d();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      goto LAB_3ab8_4fae;
    }
  }
  goto LAB_3ab8_4edd;
}



/* 3ab8:52c7  FUN_3ab8_52c7  144 bytes, 2 callers */

/* WARNING: Possible PIC construction at 0x0003f7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0003f7d0) */

undefined2 __cdecl16far FUN_3ab8_52c7(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  undefined2 *puVar15;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000016;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  undefined2 in_stack_00000024;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  int in_stack_0000002c;
  int in_stack_0000002e;
  int in_stack_00000030;
  int iStack_2;
  
  if (*(char *)0x4e23 == '\0') {
    iStack_2 = 0x3ab8;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
                    /* WARNING: Call to offcut address within same function */
    iVar7 = func_0x00030353(0x22b2);
    iVar11 = 0x22b2;
    if (iVar7 != 0) {
      *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
    }
  }
  else {
    iStack_2 = 0x3ab8;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    iVar7 = FUN_1def_1208();
    iVar11 = 0x1bb4;
    if (iVar7 != 0) {
      *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
    }
  }
LAB_3ab8_4a16:
  do {
    iStack_2 = 0x4ca6;
    func_0x00024c86(iVar11);
    iStack_2 = 0x4dce;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x2dc;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x2f0;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x98a;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x4dd1;
    FUN_21f2_2d26(0x22b2);
    if (*(int *)(unaff_BP + -0x188) == 0) {
      iStack_2 = 0x4dd9;
    }
    else {
      iStack_2 = 0x4dd4;
    }
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x4ca6;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x4dde;
    FUN_21f2_2d26(0x22b2);
    iStack_2 = 0x98a;
    FUN_21f2_2d26(0x22b2);
    if (*(int *)(unaff_BP + -0x48) != 0) {
      iStack_2 = 0x934;
      FUN_21f2_2d26(0x22b2);
      iStack_2 = 0x98a;
      FUN_21f2_2d26(0x22b2);
    }
    iStack_2 = unaff_BP + -0x15a;
    FUN_1def_07a4(0x22b2);
    *(undefined2 *)0xc2c = 1;
    *(undefined2 *)0xc20 = 1;
    iVar11 = 0x1bb4;
    iVar7 = iStack_2;
    iStack_2 = unaff_BP + -0x96;
    uVar5 = FUN_1def_0904(0x1bb4,*(undefined2 *)(unaff_BP + -0x48),unaff_BP + -0x15a,
                          unaff_BP + -0xba);
    *(undefined2 *)(unaff_BP + -0x58) = uVar5;
    *(undefined2 *)0xc2c = 0;
    *(undefined2 *)0xc20 = 0;
    iVar7 = iStack_2;
    if (*(int *)0x158 != 0) {
LAB_2bb4_480c_1:
      iStack_2 = *(int *)(unaff_BP + -4);
      *(int *)0x1d0 = iStack_2;
      *(int *)(iVar7 + (int)unaff_SI) = *(int *)(iVar7 + (int)unaff_SI) + iStack_2;
      while( true ) {
        FUN_3ab8_5089();
        uVar12 = (undefined1 *)0xffc9 < &iStack_2;
        uVar13 = &stack0x0000 == (undefined1 *)0xffcc;
        in_stack_00000030 = 0x360;
        FUN_32b2_6cc6();
        in_stack_00000030 = 0x369;
        FUN_32b2_701d();
        in_stack_00000030 = 0x36e;
        FUN_32b2_7258();
        in_stack_00000030 = 0x376;
        FUN_32b2_6e99();
        in_stack_00000030 = 0x37e;
        FUN_32b2_6ef9();
        in_stack_00000030 = 0x387;
        FUN_32b2_6cc6();
        in_stack_00000030 = 0x390;
        FUN_32b2_701d();
        in_stack_00000030 = 0x395;
        FUN_32b2_7258();
        in_stack_00000030 = 0x39e;
        FUN_32b2_6e99();
        in_stack_00000030 = 0x3a6;
        FUN_32b2_6ef9();
        in_stack_00000030 = 0x3af;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x3b4;
        FUN_32b2_6fc7();
        in_stack_00000030 = 0x3bc;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x3c1;
        FUN_32b2_6fc7();
        in_stack_00000030 = 0x3ca;
        FUN_32b2_710c();
        in_stack_00000030 = 0x3cf;
        FUN_32b2_7191();
        if (!(bool)uVar12 && !(bool)uVar13) {
          in_stack_00000030 = 0x3da;
          FUN_32b2_6d14();
          in_stack_00000030 = 0x3e2;
          FUN_32b2_6d14();
          in_stack_00000030 = 999;
          FUN_32b2_7191();
          if (!(bool)uVar13) {
            in_stack_00000030 = 0x431;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x439;
            FUN_32b2_7124();
            in_stack_00000030 = 0x441;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x44a;
            FUN_32b2_704d();
            in_stack_00000030 = 0x453;
            FUN_32b2_7035();
            in_stack_00000030 = 0x45c;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x464;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x46c;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x474;
            FUN_32b2_710c();
            in_stack_00000030 = 0x47c;
            FUN_32b2_710c();
            in_stack_00000030 = 0x484;
            FUN_32b2_710c();
            in_stack_00000030 = 0x48c;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x494;
            FUN_32b2_710c();
            in_stack_00000030 = 0x49d;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x4a2;
            FUN_32b2_718c();
            in_stack_00000030 = 0x4ab;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x4b3;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x4bc;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x4c4;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4cd;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4d5;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4dd;
            FUN_32b2_710c();
            in_stack_00000030 = 0x4e6;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x4ee;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x4f7;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x500;
            FUN_32b2_710c();
            in_stack_00000030 = 0x509;
            FUN_32b2_70dc();
            in_stack_00000030 = 0x511;
            FUN_32b2_710c();
            in_stack_00000030 = 0x519;
            FUN_32b2_710c();
            in_stack_00000030 = 0x522;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x52b;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x534;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x53d;
            FUN_32b2_710c();
            in_stack_00000030 = 0x546;
            FUN_32b2_710c();
            in_stack_00000030 = 0x54f;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x558;
            FUN_32b2_710c();
            in_stack_00000030 = 0x55d;
            FUN_32b2_718c();
            in_stack_00000030 = 0x566;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x56f;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x574;
            FUN_32b2_6fd6();
            in_stack_00000030 = 0x57d;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x586;
            FUN_32b2_710c();
            in_stack_00000030 = 0x58b;
            FUN_32b2_7182();
            in_stack_00000030 = 0x594;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x59c;
            FUN_32b2_710c();
            in_stack_00000030 = 0x5a5;
            FUN_32b2_7154();
            in_stack_00000030 = 0x5ae;
            FUN_32b2_6e99();
            in_stack_00000030 = 0x5b7;
            FUN_32b2_6eb1();
            in_stack_00000030 = 0x5c0;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x5c9;
            FUN_32b2_6eb1();
            in_stack_00000030 = unaff_BP + -0x62;
            in_stack_0000002e = 0x32b2;
            in_stack_0000002c = 0x5db;
            FUN_32b2_6cc6();
            in_stack_0000002e = 0x32b2;
            in_stack_0000002c = 0x5e0;
            FUN_32b2_7258();
            in_stack_00000026 = 0x32b2;
            in_stack_00000024 = 0x5ea;
            FUN_32b2_6eb1();
            in_stack_00000026 = 0x32b2;
            in_stack_00000024 = 0x5f2;
            FUN_32b2_6cc6();
            in_stack_00000026 = 0x32b2;
            in_stack_00000024 = 0x5f7;
            FUN_32b2_7258();
            in_stack_0000001e = 0x32b2;
            in_stack_0000001c = 0x601;
            FUN_32b2_6eb1();
            in_stack_0000001e = *(undefined2 *)(unaff_BP + -100);
            in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x66);
            in_stack_0000001a = *(undefined2 *)(unaff_BP + -0x68);
            in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x6a);
            in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x48);
            in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x4a);
            in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x4c);
            in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4e);
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            FUN_32b2_6d14();
            iStack_2 = 0x32b2;
            FUN_32b2_6eb1();
            iStack_2 = 0;
            FUN_3ab8_5089();
            uVar5 = *(undefined2 *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
            *(undefined2 *)(unaff_BP + -0x84) = uVar5;
            uVar5 = *(undefined2 *)(unaff_BP + -0x88);
            *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
            *(undefined2 *)(unaff_BP + -0x9c) = uVar5;
            in_stack_00000030 = unaff_BP + -0x86;
            puVar9 = &stack0x0010;
            puVar6 = (undefined2 *)(unaff_BP + 0x1c);
            for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              puVar15 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar15;
            }
            iVar11 = func_0x0003fdaf();
            uVar12 = 0;
            uVar13 = iVar11 == 0;
            if (!(bool)uVar13) {
              in_stack_00000030 = 0x694;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x69d;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x6a5;
              FUN_32b2_701d();
              in_stack_00000030 = 0x6aa;
              FUN_32b2_6fc7();
              in_stack_00000030 = 0x6af;
              FUN_32b2_7258();
              in_stack_00000030 = 0x6b4;
              FUN_32b2_7191();
              if ((bool)uVar12 || (bool)uVar13) {
                in_stack_00000030 = 0x6bf;
                FUN_32b2_6d14();
                in_stack_00000030 = 0x6c8;
                FUN_32b2_6cc6();
                in_stack_00000030 = 0x6d1;
                FUN_32b2_701d();
                in_stack_00000030 = 0x6d6;
                FUN_32b2_6fc7();
                in_stack_00000030 = 0x6db;
                FUN_32b2_7258();
                in_stack_00000030 = 0x6e0;
                FUN_32b2_7191();
                if ((bool)uVar12 || (bool)uVar13) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
              }
            }
            in_stack_00000030 = 0x6f8;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x700;
            FUN_32b2_6d14();
            in_stack_00000030 = 0x708;
            FUN_32b2_710c();
            in_stack_00000030 = 0x711;
            FUN_32b2_710c();
            in_stack_00000030 = 0x71a;
            FUN_32b2_7154();
            in_stack_00000030 = 0x71f;
            FUN_32b2_7191();
            if (!(bool)uVar12) {
              in_stack_00000030 = 0x72d;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x732;
              FUN_32b2_6fc7();
              in_stack_00000030 = 0x73a;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x742;
              FUN_32b2_710c();
              in_stack_00000030 = 0x74b;
              FUN_32b2_710c();
              in_stack_00000030 = 0x750;
              FUN_32b2_7191();
              if (!(bool)uVar12) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
              in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb8);
              in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xba);
              in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xbc);
              in_stack_0000002a = 0x32b2;
              in_stack_00000028 = 0x774;
              FUN_32b2_7592();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x77e;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x786;
              FUN_32b2_70dc();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x78e;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x797;
              FUN_32b2_710c();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x79c;
              FUN_32b2_7182();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7a5;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7ad;
              FUN_32b2_710c();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7b5;
              FUN_32b2_7154();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7be;
              FUN_32b2_6e99();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x7c7;
              FUN_32b2_6eb1();
              in_stack_00000030 = unaff_BP + -0x8a;
              in_stack_0000002e = unaff_BP + -0x62;
              in_stack_0000002c = 0x32b2;
              in_stack_0000002a = 0x7d9;
              FUN_32b2_6cc6();
              in_stack_0000002c = 0x32b2;
              in_stack_0000002a = 0x7de;
              FUN_32b2_7258();
              in_stack_00000024 = 0x32b2;
              in_stack_00000022 = 0x7e8;
              FUN_32b2_6eb1();
              in_stack_00000024 = 0x32b2;
              in_stack_00000022 = 0x7f0;
              FUN_32b2_6cc6();
              in_stack_00000024 = 0x32b2;
              in_stack_00000022 = 0x7f5;
              FUN_32b2_7258();
              in_stack_0000001c = 0x32b2;
              in_stack_0000001a = 0x7ff;
              FUN_32b2_6eb1();
              in_stack_0000001c = *(undefined2 *)(unaff_BP + -100);
              in_stack_0000001a = *(undefined2 *)(unaff_BP + -0x66);
              in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x68);
              in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x6a);
              in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x48);
              in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x4a);
              in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4c);
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              FUN_3ab8_5089(0x32b2);
              uVar12 = (undefined1 *)0xffc9 < &stack0xfffc;
              uVar13 = &stack0x0000 == (undefined1 *)0xffce;
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x84f;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x857;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x85c;
              FUN_32b2_7191();
              if ((bool)uVar13) {
                uVar5 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar5;
              }
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x872;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x87a;
              FUN_32b2_6cc6();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x87f;
              FUN_32b2_7191();
              if ((bool)uVar13) {
                uVar5 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar5;
              }
              uVar5 = *(undefined2 *)(unaff_BP + -0x60);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
              puVar6[1] = uVar5;
              uVar5 = *(undefined2 *)(unaff_BP + -0x88);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar6[1] = uVar5;
              uVar5 = *(undefined2 *)(unaff_BP + -0x60);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
              puVar6[1] = uVar5;
              uVar5 = *(undefined2 *)(unaff_BP + -0x88);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar6[1] = uVar5;
              piVar1 = (int *)(unaff_BP + -0x36);
              *piVar1 = *piVar1 + 1;
              uVar13 = *piVar1 == 0;
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x8d7;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x8e0;
              FUN_32b2_6d14();
              in_stack_00000030 = 0x32b2;
              in_stack_0000002e = 0x8e5;
              FUN_32b2_7191();
              if (!(bool)uVar12 && !(bool)uVar13) {
                in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb6);
                in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xb8);
                in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xba);
                in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xbc);
                in_stack_00000028 = 0x32b2;
                in_stack_00000026 = 0x8ff;
                FUN_32b2_7592();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x909;
                FUN_32b2_6d14();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x911;
                FUN_32b2_7154();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x916;
                FUN_32b2_6fd6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x91e;
                FUN_32b2_6d14();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x927;
                FUN_32b2_710c();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x92c;
                FUN_32b2_7182();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x935;
                FUN_32b2_6e99();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x93d;
                FUN_32b2_710c();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x945;
                FUN_32b2_7154();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x94e;
                FUN_32b2_6e99();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x957;
                FUN_32b2_6eb1();
                in_stack_0000002e = unaff_BP + -0x8a;
                in_stack_0000002c = unaff_BP + -0x62;
                in_stack_0000002a = 0x32b2;
                in_stack_00000028 = 0x969;
                FUN_32b2_6cc6();
                in_stack_0000002a = 0x32b2;
                in_stack_00000028 = 0x96e;
                FUN_32b2_7258();
                in_stack_00000022 = 0x32b2;
                in_stack_00000020 = 0x978;
                FUN_32b2_6eb1();
                in_stack_00000022 = 0x32b2;
                in_stack_00000020 = 0x980;
                FUN_32b2_6cc6();
                in_stack_00000022 = 0x32b2;
                in_stack_00000020 = 0x985;
                FUN_32b2_7258();
                in_stack_0000001a = 0x32b2;
                in_stack_00000018 = 0x98f;
                FUN_32b2_6eb1();
                in_stack_0000001a = *(undefined2 *)(unaff_BP + -100);
                in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x66);
                in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x68);
                in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x6a);
                in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x48);
                in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4a);
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_3ab8_5089(0x32b2,0);
                uVar12 = &stack0x0000 == (undefined1 *)0xffd0;
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x9df;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x9e7;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0x9ec;
                FUN_32b2_7191();
                if ((bool)uVar12) {
                  uVar5 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar5;
                }
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0xa02;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0xa0a;
                FUN_32b2_6cc6();
                in_stack_0000002e = 0x32b2;
                in_stack_0000002c = 0xa0f;
                FUN_32b2_7191();
                if ((bool)uVar12) {
                  uVar5 = *(undefined2 *)(unaff_BP + 0xc);
                  *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                  *(undefined2 *)(unaff_BP + -0x88) = uVar5;
                }
                uVar5 = *(undefined2 *)(unaff_BP + -0x60);
                puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
                puVar6[1] = uVar5;
                uVar5 = *(undefined2 *)(unaff_BP + -0x88);
                puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar6[1] = uVar5;
                *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
              }
              return *(undefined2 *)(unaff_BP + -0x36);
            }
          }
          return 0;
        }
        in_stack_00000030 = 0x3f5;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x3ff;
        FUN_32b2_7154();
        in_stack_00000030 = 0x405;
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
        in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb8);
        in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xba);
        in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xbc);
        in_stack_0000002a = 0x32b2;
        in_stack_00000028 = 0x119;
        FUN_32b2_75fe();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x123;
        FUN_32b2_6d14();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 299;
        FUN_32b2_704d();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x133;
        FUN_32b2_7095();
        in_stack_00000030 = 0x32b2;
        in_stack_0000002e = 0x13b;
        FUN_32b2_6eb1();
        in_stack_00000030 = *(undefined2 *)(unaff_BP + -0xb6);
        in_stack_0000002e = *(undefined2 *)(unaff_BP + -0xb8);
        in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xba);
        in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xbc);
        in_stack_00000028 = 0x32b2;
        in_stack_00000026 = 0x150;
        FUN_32b2_75ec();
        uVar12 = &stack0x0000 == (undefined1 *)0xffd0;
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x15a;
        FUN_32b2_6d14();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x162;
        FUN_32b2_704d();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x16a;
        FUN_32b2_7095();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x173;
        FUN_32b2_6eb1();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x17b;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x183;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x188;
        FUN_32b2_7191();
        if ((bool)uVar12) {
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x192;
          FUN_32b2_6cc6();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x19a;
          FUN_32b2_6cc6();
          in_stack_0000002e = 0x32b2;
          in_stack_0000002c = 0x19f;
          FUN_32b2_7191();
          if ((bool)uVar12) {
            return 0;
          }
        }
        in_stack_0000002e = unaff_BP + -0xa8;
        in_stack_0000002c = unaff_BP + -0x1c;
        in_stack_0000002a = *(undefined2 *)(unaff_BP + -0x7c);
        in_stack_00000028 = *(undefined2 *)(unaff_BP + -0x7e);
        in_stack_00000026 = *(undefined2 *)(unaff_BP + -0x80);
        in_stack_00000024 = *(undefined2 *)(unaff_BP + -0x82);
        in_stack_00000022 = *(undefined2 *)(unaff_BP + -0x58);
        in_stack_00000020 = *(undefined2 *)(unaff_BP + -0x5a);
        in_stack_0000001e = *(undefined2 *)(unaff_BP + -0x5c);
        in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x5e);
        in_stack_0000001a = 0x32b2;
        in_stack_00000018 = 0x1d0;
        FUN_32b2_6cc6();
        in_stack_0000001a = 0x32b2;
        in_stack_00000018 = 0x1d5;
        FUN_32b2_7258();
        in_stack_00000012 = 0x32b2;
        in_stack_00000010 = 0x1df;
        FUN_32b2_6eb1();
        in_stack_00000012 = 0x32b2;
        in_stack_00000010 = 0x1e7;
        FUN_32b2_6cc6();
        in_stack_00000012 = 0x32b2;
        in_stack_00000010 = 0x1ec;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
        iVar11 = func_0x0003fb3d();
        if (iVar11 == 0) break;
        in_stack_00000030 = 0x209;
        FUN_32b2_6cc6();
        in_stack_00000030 = 0x20e;
        FUN_32b2_7258();
        in_stack_00000030 = 0x216;
        FUN_32b2_6e99();
        in_stack_00000030 = 0x21e;
        FUN_32b2_6ef9();
        in_stack_00000030 = unaff_BP + -0xa4;
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x231;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x236;
        FUN_32b2_7258();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x240;
        FUN_32b2_6eb1();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x248;
        FUN_32b2_6cc6();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x24d;
        FUN_32b2_7258();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 599;
        FUN_32b2_6eb1();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 0x25f;
        FUN_32b2_6d14();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x269;
        FUN_32b2_6eb1();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x271;
        FUN_32b2_6cc6();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x276;
        FUN_32b2_7258();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x27e;
        FUN_32b2_6e99();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        iStack_2 = 0x32b2;
        FUN_32b2_6eb1();
        iStack_2 = 1;
        FUN_3ab8_5089();
        in_stack_00000030 = unaff_BP + -0xd0;
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x2d4;
        FUN_32b2_6cc6();
        in_stack_0000002e = 0x32b2;
        in_stack_0000002c = 0x2d9;
        FUN_32b2_7258();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x2e3;
        FUN_32b2_6eb1();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x2eb;
        FUN_32b2_6cc6();
        in_stack_00000026 = 0x32b2;
        in_stack_00000024 = 0x2f0;
        FUN_32b2_7258();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 0x2fa;
        FUN_32b2_6eb1();
        in_stack_0000001e = 0x32b2;
        in_stack_0000001c = 0x302;
        FUN_32b2_6d14();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x30c;
        FUN_32b2_6eb1();
        in_stack_00000016 = 0x32b2;
        in_stack_00000014 = 0x314;
        FUN_32b2_6d14();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        iStack_2 = 0x32b2;
        FUN_32b2_6eb1();
        iStack_2 = 1;
      }
      return 0;
    }
    if (*(int *)(unaff_BP + -0x58) == 0x14) {
      *(undefined2 *)(unaff_BP + -0x48) = 0;
LAB_3ab8_4664:
      while( true ) {
        if (*(char *)0x1cd != '\0') {
          *(uint *)0x1d0 = (uint)*(byte *)0x1cd;
        }
        iStack_2 = 0x2f0;
        FUN_21f2_3454(unaff_BP + -0x15a);
        if (*(char *)0x4e23 == '\0') {
          iStack_2 = 0x2b8;
          uVar5 = 0x22b2;
          FUN_21f2_2d26(0x22b2);
        }
        else {
          iStack_2 = 0x2b2;
          FUN_21f2_2d26(0x22b2);
          iStack_2 = *(int *)0x1d0;
          FUN_21f2_3454(unaff_BP + -0xf6);
          if (*(byte *)0x123 < 6) {
            *(undefined2 *)(unaff_BP + -0x60) = 7;
          }
          else {
            *(undefined2 *)(unaff_BP + -0x60) = *(undefined2 *)(*(int *)0x1d0 * 2 + 0xa70);
            if (*(int *)0x1d0 == 7) {
              *(undefined2 *)(unaff_BP + -0x60) = *(undefined2 *)0xa80;
            }
          }
          *(undefined2 *)0xc22 = 1;
          iStack_2 = -1;
          uVar5 = 0xdef;
          FUN_1000_02b5(unaff_BP + -0xf6,0x1b,2);
        }
        iStack_2 = 0x4dc4;
        FUN_21f2_2d26(uVar5);
        iStack_2 = 0x98a;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x4ca6;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x98a;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = unaff_BP + -0x46;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x98a;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x4dc7;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x98a;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = unaff_BP + -0xb2;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = 0x98a;
        FUN_21f2_2d26(0x22b2);
        iStack_2 = unaff_BP + -0x15a;
        FUN_1def_07a4(0x22b2);
        *(undefined2 *)0xc1a = 1;
        *(undefined2 *)0xc20 = 1;
        if (*(char *)0x4e23 == '\0') {
          *(undefined2 *)(unaff_BP + -100) = *(undefined2 *)(unaff_BP + -0x48);
        }
        else if (*(int *)(unaff_BP + -0x48) == 0) {
          *(undefined2 *)(unaff_BP + -100) = 10000;
        }
        else {
          *(undefined2 *)(unaff_BP + -100) = 9999;
        }
        iVar10 = 0x1bb4;
        iVar7 = iStack_2;
        iStack_2 = unaff_BP + -0x96;
        uVar5 = FUN_1def_0904(0x1bb4,*(undefined2 *)(unaff_BP + -100),unaff_BP + -0x15a,
                              unaff_BP + -0x19e);
        *(undefined2 *)(unaff_BP + -0x18a) = uVar5;
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) break;
        if (*(int *)0xc18 == 0) {
          if (*(int *)(unaff_BP + -0x18a) == 1) {
            *(undefined2 *)(unaff_BP + -0x96) = 0;
            *(undefined2 *)(unaff_BP + -0x48) = 0;
            *(char *)0x4e23 = '\x01' - *(char *)0x4e23;
          }
          if (*(int *)(unaff_BP + -0x18a) == -1) {
            iStack_2 = 0;
            iVar11 = 0x885;
            func_0x0000daa6();
            *(undefined2 *)(unaff_BP + -0x96) = 0;
            if (0 < *(int *)(unaff_BP + -0x48)) {
              iStack_2 = *(int *)0x154;
              *(int *)(unaff_BP + -0x1a0) = iStack_2;
              FUN_2bb4_4988();
              *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
            }
            if (*(int *)(unaff_BP + -0x48) < 0) {
              iStack_2 = *(int *)0x152;
              *(int *)(unaff_BP + -0x1a0) = iStack_2;
              iVar11 = 0x1bb4;
              FUN_1def_186d();
              *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
            }
            iStack_2 = iVar11;
            func_0x0000abfa();
            iStack_2 = 1;
            iVar10 = 0x885;
            func_0x0000b1d8();
          }
          if (((0x61ff < *(int *)(unaff_BP + -0x18a)) && (*(int *)(unaff_BP + -0x18a) < 0x6701)) ||
             ((5 < *(byte *)0x123 && (*(int *)(unaff_BP + -0x18a) == 0x6800)))) {
            *(undefined2 *)(unaff_BP + -0x96) = 0;
            uVar4 = *(int *)(unaff_BP + -0x18a) + 0x9f00;
            uVar8 = (int)uVar4 >> 0xf;
            iVar11 = ((int)((uVar4 ^ uVar8) - uVar8) >> 8 ^ uVar8) - uVar8;
            *(int *)0x1d0 = iVar11;
            if ((*(char *)0x1cd == '\0') && (iVar11 != 7)) {
              *(int *)(unaff_BP + -4) = iVar11;
            }
            else {
              *(undefined1 *)0x1cd = *(undefined1 *)0x1d0;
            }
          }
          if ((*(int *)(unaff_BP + -0x18a) < 2) || (5 < *(int *)(unaff_BP + -0x18a)))
          goto LAB_3ab8_498d;
          *(int *)(unaff_BP + -0x18a) = *(int *)(unaff_BP + -0x18a) + -1;
          iVar11 = iVar10;
          goto LAB_3ab8_4938;
        }
        *(undefined2 *)(unaff_BP + -0x48) = 0;
        iStack_2 = 0x1bb4;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        func_0x00029d78();
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        func_0x0000507a(0x22b2);
      }
      goto LAB_2bb4_480c_1;
    }
    if (*(int *)(unaff_BP + -0x58) == -1) {
      iStack_2 = 0;
      iVar11 = 0x885;
      func_0x0000daa6();
      *(undefined2 *)(unaff_BP + -0x96) = 0;
      if (0 < *(int *)(unaff_BP + -0x48)) {
        iStack_2 = *(int *)0x154;
        *(int *)(unaff_BP + -0x1a0) = iStack_2;
        FUN_2bb4_4988();
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
      }
      if (*(int *)(unaff_BP + -0x48) < 0) {
        iStack_2 = *(int *)0x152;
        *(int *)(unaff_BP + -0x1a0) = iStack_2;
        iVar11 = 0x1bb4;
        FUN_1def_186d();
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
      }
      iStack_2 = iVar11;
      func_0x0000abfa();
      iStack_2 = 1;
      func_0x0000b1d8();
      iStack_2 = 0x885;
      func_0x000297e6();
      iStack_2 = unaff_BP + -0x192;
      func_0x00029b55();
      iStack_2 = 0x22b2;
      iVar11 = 0x22b2;
      func_0x00029983();
    }
    if (*(int *)(unaff_BP + -0x58) == 1) {
      *(undefined2 *)(unaff_BP + -0x48) = 0;
      if (*(int *)(unaff_BP + -0x188) == 0) {
        *(undefined2 *)(unaff_BP + -0x188) = 1;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x188) = 0;
      }
    }
    if ((*(int *)(unaff_BP + -0x58) != 2) || (*(int *)(unaff_BP + -0x48) == 0)) {
      if ((*(int *)(unaff_BP + -0x96) != 0) && (*(int *)(unaff_BP + -0x58) == 0)) {
        iStack_2 = unaff_BP + -0x16e;
        iVar10 = 0x11f2;
        iVar7 = func_0x00015409(iVar11,*(undefined2 *)(unaff_BP + -0x96));
        iVar11 = iVar10;
        if (iVar7 != 0) {
          *(undefined2 *)(unaff_BP + -0x48) = 0;
          *(undefined2 *)(unaff_BP + -0x92) = 0;
          *(undefined2 *)(unaff_BP + -0x94) = 0;
          uVar5 = *(undefined2 *)(unaff_BP + -0xb8);
          *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)(unaff_BP + -0xba);
          *(undefined2 *)(unaff_BP + -0xb4) = uVar5;
          uVar5 = *(undefined2 *)(unaff_BP + -0x16c);
          *(undefined2 *)(unaff_BP + -0x162) = *(undefined2 *)(unaff_BP + -0x16e);
          *(undefined2 *)(unaff_BP + -0x160) = uVar5;
LAB_3ab8_4c49:
          do {
            if (*(int *)(unaff_BP + -0x188) != 0) {
              iStack_2 = unaff_BP + -0x80;
              func_0x00024c86(iVar10);
              iStack_2 = 0x302;
              FUN_21f2_2d26(0x22b2);
              iVar10 = 0x1bb4;
              iVar7 = iStack_2;
              iStack_2 = unaff_BP + -0x96;
              iVar11 = FUN_1def_0904(0x22b2,1,unaff_BP + -0x15a,unaff_BP + -0x19e);
              *(int *)(unaff_BP + -6) = iVar11;
              if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
              if (iVar11 == -1) {
                uVar5 = FUN_3ab8_4a0e();
                return uVar5;
              }
              if (*(int *)(unaff_BP + -0x96) == 0) goto LAB_3ab8_4c49;
              iStack_2 = 0x1bb4;
              func_0x000297e6();
              iStack_2 = 0x22b2;
              func_0x00029d78();
              func_0x000299d1(0x22b2);
              func_0x000297e6(0x22b2);
              func_0x00029d78(0x22b2);
              func_0x000299d1(0x22b2);
              lVar14 = FUN_13bf_39a0(0x22b2);
              iVar11 = (int)((ulong)lVar14 >> 0x10);
              *(int *)(unaff_BP + -0x94) = (int)lVar14;
              *(int *)(unaff_BP + -0x92) = iVar11;
              if (-1 < lVar14) {
LAB_3ab8_4d64:
                iStack_2 = 0x1dc;
                func_0x00012276();
                *(undefined2 *)0xc22 = 1;
                iStack_2 = 2;
                iVar10 = 0xdef;
                FUN_1000_0599(0x11f2);
                if ((-1 < *(int *)(unaff_BP + -0x92)) &&
                   ((0 < *(int *)(unaff_BP + -0x92) || (*(int *)(unaff_BP + -0x94) != 0)))) {
                  iStack_2 = 900;
                  iVar10 = 0x11f2;
                  func_0x00012276();
                }
                *(undefined2 *)(unaff_BP + -0x92) = 0;
                *(undefined2 *)(unaff_BP + -0x94) = 0;
                goto LAB_3ab8_4c49;
              }
              iStack_2 = -(iVar11 + (uint)((int)lVar14 != 0));
              uVar12 = iStack_2 == 0;
              puVar15 = (undefined2 *)func_0x00000271(0x11f2);
              unaff_SI = (undefined2 *)puVar15;
              puVar6 = (undefined2 *)(unaff_BP + -0x26);
              for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
                puVar3 = puVar6;
                puVar6 = puVar6 + 1;
                puVar2 = unaff_SI;
                unaff_SI = unaff_SI + 1;
                *puVar3 = *puVar2;
              }
              iStack_2 = 0;
              func_0x000297e6();
              iStack_2 = 0x22b2;
              func_0x000297e6();
              iStack_2 = 0x22b2;
              iVar10 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar12) {
                iStack_2 = 0x22b2;
                func_0x000297e6();
                iStack_2 = 0x22b2;
                func_0x000297e6();
                iStack_2 = 0x22b2;
                iVar10 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar12) {
                  *(undefined2 *)0xc22 = 1;
                  iStack_2 = 2;
                  FUN_1000_0599(0x22b2);
                  iStack_2 = 0x396;
                  func_0x00012276();
                  goto LAB_3ab8_4d64;
                }
              }
            }
FUN_3ab8_4daa:
            do {
              iStack_2 = iVar10;
              func_0x000297e6();
              iStack_2 = 0x22b2;
              func_0x0002996b();
              iStack_2 = 0x22b2;
              func_0x00029983();
              iStack_2 = 0x22b2;
              func_0x0001bb4e();
              iStack_2 = 0x4ca6;
              func_0x00012276();
              iStack_2 = 0x4de1;
              func_0x00012276();
              iStack_2 = *(int *)0x9ea6;
              FUN_10ad_19f9(0x11f2,unaff_BP + -0x202,0x4de5,0x4de4,0x31e,*(undefined2 *)0x4e24,
                            *(undefined2 *)0x4e26);
              iStack_2 = 1;
              FUN_1000_0599(0x11f2);
              iStack_2 = unaff_BP + -0x202;
              func_0x00012276();
              iVar7 = iStack_2;
              if (*(int *)(unaff_BP + -0x188) != 0) {
                iStack_2 = 2;
                FUN_1000_0599(0x11f2);
                iStack_2 = unaff_BP + -0x80;
                func_0x00012276();
                iStack_2 = 0x4df1;
                func_0x00012276();
                *(undefined2 *)0xc22 = 1;
                iVar7 = iStack_2;
              }
              iStack_2 = 1;
              uVar5 = func_0x000021a4(0x11f2,unaff_BP + -0x1ae,unaff_BP + -0x1b2,unaff_BP + -0x19e,
                                      unaff_BP + -0x1a4);
              *(undefined2 *)(unaff_BP + -0x1aa) = uVar5;
              uVar12 = 0;
              uVar13 = *(int *)0x158 == 0;
              if (!(bool)uVar13) goto LAB_2bb4_480c_1;
              iStack_2 = 0xad;
              func_0x00029834();
              iStack_2 = 0x22b2;
              func_0x000297e6();
              iStack_2 = 0x22b2;
              func_0x00029ae7();
              iStack_2 = 0x22b2;
              func_0x00029d78();
              iStack_2 = 0x22b2;
              iVar10 = 0x22b2;
              FUN_28b3_1181();
            } while (!(bool)uVar12 && !(bool)uVar13);
            if (*(int *)(unaff_BP + -0x1aa) != -1) {
              if ((*(int *)(unaff_BP + -0x1aa) == 0x66) || (*(int *)(unaff_BP + -0x1aa) == 0)) {
                uVar5 = *(undefined2 *)(unaff_BP + -0x1ac);
                *(undefined2 *)0x4e24 = *(undefined2 *)(unaff_BP + -0x1ae);
                *(undefined2 *)0x4e26 = uVar5;
LAB_3ab8_4edd:
                if (*(int *)(unaff_BP + -0x188) != 0) goto LAB_3ab8_4f54;
                iStack_2 = 0x3dd;
                func_0x00024c86(iVar10);
                *(undefined2 *)0xc20 = 1;
                iVar10 = 0x1bb4;
                iVar11 = iStack_2;
                iStack_2 = unaff_BP + -0x96;
                uVar5 = FUN_1def_0904(0x22b2,1,unaff_BP + -0x15a,unaff_BP + -0x166);
                *(undefined2 *)(unaff_BP + -0x58) = uVar5;
                *(undefined2 *)0xc20 = 0;
                iVar7 = iStack_2;
                if (*(int *)0x158 != 0) goto LAB_2bb4_480c_1;
                if (*(int *)(unaff_BP + -0x58) != -1) goto LAB_3ab8_4f34;
              }
              goto FUN_3ab8_4daa;
            }
            iVar11 = iVar10;
          } while (*(int *)(unaff_BP + -0x188) != 0);
        }
      }
      goto LAB_3ab8_4a16;
    }
    iStack_2 = iVar11;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x192;
    func_0x00029bb5();
LAB_3ab8_4fae:
    iStack_2 = 0x22b2;
    func_0x00029983();
    if ((*(int *)(unaff_BP + -0x188) != 0) && (*(int *)(unaff_BP + -0x92) < 0)) {
      uVar5 = func_0x0003fc30();
      return uVar5;
    }
    iStack_2 = 0x22b2;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    iVar11 = 0x1bb4;
    iVar7 = FUN_1def_043a(0x22b2);
    if (iVar7 != 0) {
      iStack_2 = *(int *)0x9efe;
      func_0x000297e6(0x1bb4,*(undefined2 *)0x9ef8,*(undefined2 *)0x9efa);
      func_0x000299d1(0x22b2);
      puVar6 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
      uVar5 = puVar6[1];
      *(undefined2 *)(unaff_BP + -0x90) = *puVar6;
      *(undefined2 *)(unaff_BP + -0x8e) = uVar5;
      iStack_2 = *(int *)0x9efe;
      func_0x000297e6(0x1bb4,*(undefined2 *)0x9ef8,*(undefined2 *)0x9efa);
      func_0x000299d1(0x22b2);
      puVar6 = (undefined2 *)func_0x0001e558(0x22b2,0);
      uVar5 = puVar6[1];
      *(undefined2 *)(unaff_BP + -0xc2) = *puVar6;
      *(undefined2 *)(unaff_BP + -0xc0) = uVar5;
      uVar5 = FUN_3ab8_52c7();
      return uVar5;
    }
  } while( true );
LAB_3ab8_498d:
  if (*(int *)(unaff_BP + -0x96) == 0) goto LAB_3ab8_4664;
  iStack_2 = unaff_BP + -0x1a4;
  iVar11 = 0x11f2;
  iVar7 = func_0x00015409(iVar10,*(undefined2 *)(unaff_BP + -0x96));
  if (iVar7 == 0) goto LAB_3ab8_4664;
  *(undefined2 *)(unaff_BP + -0x18a) = 0;
LAB_3ab8_4938:
  if (*(int *)(unaff_BP + -0x18a) == 0) {
    iStack_2 = iVar11;
    if (*(char *)0x4e23 == '\0') {
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
                    /* WARNING: Call to offcut address within same function */
      iVar11 = func_0x00030353(0x22b2);
      if (iVar11 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + 1;
      }
    }
    else {
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      iVar11 = FUN_1def_1208();
      if (iVar11 != 0) {
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) + -1;
      }
    }
    goto LAB_3ab8_4664;
  }
  *(undefined2 *)(unaff_BP + -0x48) = 0;
  *(undefined2 *)(unaff_BP + -0x188) = 0;
  if (*(int *)(unaff_BP + -0x18a) != 1) {
    uVar5 = FUN_3ab8_5357();
    return uVar5;
  }
  *(undefined2 *)(unaff_BP + -0x92) = 0;
  *(undefined2 *)(unaff_BP + -0x94) = 0;
  goto LAB_3ab8_4a16;
LAB_3ab8_4f34:
  if (*(int *)(unaff_BP + -0x96) != 0) {
    iStack_2 = unaff_BP + -0x17a;
    iVar10 = 0x11f2;
    iVar11 = func_0x00015409(0x1bb4,*(undefined2 *)(unaff_BP + -0x96));
    if (iVar11 != 0) {
LAB_3ab8_4f54:
      uVar5 = *(undefined2 *)(unaff_BP + -0x164);
      *(undefined2 *)(unaff_BP + -0x15e) = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -0x15c) = uVar5;
      uVar5 = *(undefined2 *)(unaff_BP + -0x178);
      *(undefined2 *)(unaff_BP + -0x172) = *(undefined2 *)(unaff_BP + -0x17a);
      *(undefined2 *)(unaff_BP + -0x170) = uVar5;
      iStack_2 = iVar10;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      func_0x00029b9d();
      iStack_2 = 0x22b2;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      func_0x00029983();
      iStack_2 = 0x22b2;
      func_0x000297e6();
      goto LAB_3ab8_4fae;
    }
  }
  goto LAB_3ab8_4edd;
}



/* 3ab8:5357  FUN_3ab8_5357  39 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_5357(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 in_DX;
  int unaff_BP;
  undefined2 *puVar5;
  undefined1 *unaff_SI;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined1 uVar9;
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
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  uVar7 = 0x3ab8;
  if (*(int *)(unaff_BP + -0x18a) == 2) {
    iStack_4 = CONCAT11((char)((uint)(unaff_BP + -0x46) >> 8),*(undefined1 *)0x4e23);
    iStack_6 = 0x3ab8;
    iStack_8 = -0x116;
    FUN_3ab8_3f33();
    if (*(int *)0x158 != 0) {
      iVar4 = *(int *)(unaff_BP + -4);
      *(int *)0x1d0 = iVar4;
      *(int *)(unaff_SI + unaff_BP + -0x46) = *(int *)(unaff_SI + unaff_BP + -0x46) + iVar4;
      goto code_r0x0003034f;
    }
  }
  *(undefined2 *)(unaff_BP + -0x48) = 0;
  out(*unaff_SI,in_DX);
  while( true ) {
    iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
    iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
    iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
    uStack_c = 0x119;
    uStack_a = uVar7;
    FUN_32b2_75fe();
    iStack_4 = 0x32b2;
    iStack_6 = 0x123;
    FUN_32b2_6d14();
    iStack_4 = 0x32b2;
    iStack_6 = 299;
    FUN_32b2_704d();
    iStack_4 = 0x32b2;
    iStack_6 = 0x133;
    FUN_32b2_7095();
    iStack_4 = 0x32b2;
    iStack_6 = 0x13b;
    FUN_32b2_6eb1();
    iStack_4 = *(undefined2 *)(unaff_BP + -0xb6);
    iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
    iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
    uStack_a = *(undefined2 *)(unaff_BP + -0xbc);
    uStack_c = 0x32b2;
    uStack_e = 0x150;
    FUN_32b2_75ec();
    uVar8 = &stack0x0000 == (undefined1 *)0x4;
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
    if ((bool)uVar8) {
      iStack_6 = 0x32b2;
      iStack_8 = 0x192;
      FUN_32b2_6cc6();
      iStack_6 = 0x32b2;
      iStack_8 = 0x19a;
      FUN_32b2_6cc6();
      iStack_6 = 0x32b2;
      iStack_8 = 0x19f;
      FUN_32b2_7191();
      if ((bool)uVar8) {
        return 0;
      }
    }
    iStack_6 = unaff_BP + -0xa8;
    iStack_8 = unaff_BP + -0x1c;
    uStack_a = *(undefined2 *)(unaff_BP + -0x7c);
    uStack_c = *(undefined2 *)(unaff_BP + -0x7e);
    uStack_e = *(undefined2 *)(unaff_BP + -0x80);
    uStack_10 = *(undefined2 *)(unaff_BP + -0x82);
    uStack_12 = *(undefined2 *)(unaff_BP + -0x58);
    uStack_14 = *(undefined2 *)(unaff_BP + -0x5a);
    uStack_16 = *(undefined2 *)(unaff_BP + -0x5c);
    uStack_18 = *(undefined2 *)(unaff_BP + -0x5e);
    uStack_1a = 0x32b2;
    uStack_1c = 0x1d0;
    FUN_32b2_6cc6();
    uStack_1a = 0x32b2;
    uStack_1c = 0x1d5;
    FUN_32b2_7258();
    uStack_22 = 0x32b2;
    uStack_24 = 0x1df;
    FUN_32b2_6eb1();
    uStack_22 = 0x32b2;
    uStack_24 = 0x1e7;
    FUN_32b2_6cc6();
    uStack_22 = 0x32b2;
    uStack_24 = 0x1ec;
    FUN_32b2_7258();
    uStack_2a = 0x32b2;
    uStack_2c = 0x1f6;
    FUN_32b2_6eb1();
    uStack_2a = 0x32b2;
    uStack_2c = 0x1fa;
    iVar4 = func_0x0003fb3d();
    if (iVar4 == 0) break;
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
    uStack_a = 0x32b2;
    uStack_c = 0x231;
    FUN_32b2_6cc6();
    uStack_a = 0x32b2;
    uStack_c = 0x236;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    uStack_14 = 0x240;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x248;
    FUN_32b2_6cc6();
    uStack_12 = 0x32b2;
    uStack_14 = 0x24d;
    FUN_32b2_7258();
    uStack_1a = 0x32b2;
    uStack_1c = 599;
    FUN_32b2_6eb1();
    uStack_1a = 0x32b2;
    uStack_1c = 0x25f;
    FUN_32b2_6d14();
    uStack_22 = 0x32b2;
    uStack_24 = 0x269;
    FUN_32b2_6eb1();
    uStack_22 = 0x32b2;
    uStack_24 = 0x271;
    FUN_32b2_6cc6();
    uStack_22 = 0x32b2;
    uStack_24 = 0x276;
    FUN_32b2_7258();
    uStack_22 = 0x32b2;
    uStack_24 = 0x27e;
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
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    uVar7 = 0x32b2;
    iStack_4 = 0x34c;
    FUN_32b2_6eb1();
code_r0x0003034f:
    iStack_6 = 0x354;
    iStack_4 = uVar7;
    FUN_3ab8_5089();
    uVar8 = (undefined1 *)0xffc9 < &uStack_36;
    uVar9 = &stack0x0000 == (undefined1 *)0x0;
    iStack_4 = 0x360;
    FUN_32b2_6cc6();
    iStack_4 = 0x369;
    FUN_32b2_701d();
    iStack_4 = 0x36e;
    FUN_32b2_7258();
    iStack_4 = 0x376;
    FUN_32b2_6e99();
    iStack_4 = 0x37e;
    FUN_32b2_6ef9();
    iStack_4 = 0x387;
    FUN_32b2_6cc6();
    iStack_4 = 0x390;
    FUN_32b2_701d();
    iStack_4 = 0x395;
    FUN_32b2_7258();
    iStack_4 = 0x39e;
    FUN_32b2_6e99();
    iStack_4 = 0x3a6;
    FUN_32b2_6ef9();
    iStack_4 = 0x3af;
    FUN_32b2_6d14();
    iStack_4 = 0x3b4;
    FUN_32b2_6fc7();
    iStack_4 = 0x3bc;
    FUN_32b2_6d14();
    iStack_4 = 0x3c1;
    FUN_32b2_6fc7();
    iStack_4 = 0x3ca;
    FUN_32b2_710c();
    iStack_4 = 0x3cf;
    FUN_32b2_7191();
    if (!(bool)uVar8 && !(bool)uVar9) {
      iStack_4 = 0x3da;
      FUN_32b2_6d14();
      iStack_4 = 0x3e2;
      FUN_32b2_6d14();
      iStack_4 = 999;
      FUN_32b2_7191();
      if (!(bool)uVar9) {
        iStack_4 = 0x431;
        FUN_32b2_6d14();
        iStack_4 = 0x439;
        FUN_32b2_7124();
        iStack_4 = 0x441;
        FUN_32b2_6e99();
        iStack_4 = 0x44a;
        FUN_32b2_704d();
        iStack_4 = 0x453;
        FUN_32b2_7035();
        iStack_4 = 0x45c;
        FUN_32b2_6e99();
        iStack_4 = 0x464;
        FUN_32b2_6eb1();
        iStack_4 = 0x46c;
        FUN_32b2_6d14();
        iStack_4 = 0x474;
        FUN_32b2_710c();
        iStack_4 = 0x47c;
        FUN_32b2_710c();
        iStack_4 = 0x484;
        FUN_32b2_710c();
        iStack_4 = 0x48c;
        FUN_32b2_6d14();
        iStack_4 = 0x494;
        FUN_32b2_710c();
        iStack_4 = 0x49d;
        FUN_32b2_6e99();
        iStack_4 = 0x4a2;
        FUN_32b2_718c();
        iStack_4 = 0x4ab;
        FUN_32b2_6e99();
        iStack_4 = 0x4b3;
        FUN_32b2_6eb1();
        iStack_4 = 0x4bc;
        FUN_32b2_6d14();
        iStack_4 = 0x4c4;
        FUN_32b2_710c();
        iStack_4 = 0x4cd;
        FUN_32b2_710c();
        iStack_4 = 0x4d5;
        FUN_32b2_710c();
        iStack_4 = 0x4dd;
        FUN_32b2_710c();
        iStack_4 = 0x4e6;
        FUN_32b2_6e99();
        iStack_4 = 0x4ee;
        FUN_32b2_6eb1();
        iStack_4 = 0x4f7;
        FUN_32b2_6d14();
        iStack_4 = 0x500;
        FUN_32b2_710c();
        iStack_4 = 0x509;
        FUN_32b2_70dc();
        iStack_4 = 0x511;
        FUN_32b2_710c();
        iStack_4 = 0x519;
        FUN_32b2_710c();
        iStack_4 = 0x522;
        FUN_32b2_6e99();
        iStack_4 = 0x52b;
        FUN_32b2_6eb1();
        iStack_4 = 0x534;
        FUN_32b2_6d14();
        iStack_4 = 0x53d;
        FUN_32b2_710c();
        iStack_4 = 0x546;
        FUN_32b2_710c();
        iStack_4 = 0x54f;
        FUN_32b2_6d14();
        iStack_4 = 0x558;
        FUN_32b2_710c();
        iStack_4 = 0x55d;
        FUN_32b2_718c();
        iStack_4 = 0x566;
        FUN_32b2_6eb1();
        iStack_4 = 0x56f;
        FUN_32b2_6d14();
        iStack_4 = 0x574;
        FUN_32b2_6fd6();
        iStack_4 = 0x57d;
        FUN_32b2_6d14();
        iStack_4 = 0x586;
        FUN_32b2_710c();
        iStack_4 = 0x58b;
        FUN_32b2_7182();
        iStack_4 = 0x594;
        FUN_32b2_6e99();
        iStack_4 = 0x59c;
        FUN_32b2_710c();
        iStack_4 = 0x5a5;
        FUN_32b2_7154();
        iStack_4 = 0x5ae;
        FUN_32b2_6e99();
        iStack_4 = 0x5b7;
        FUN_32b2_6eb1();
        iStack_4 = 0x5c0;
        FUN_32b2_6d14();
        iStack_4 = 0x5c9;
        FUN_32b2_6eb1();
        iStack_4 = unaff_BP + -0x62;
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
        uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
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
        iStack_4 = unaff_BP + -0x86;
        puVar6 = &uStack_24;
        puVar5 = (undefined2 *)(unaff_BP + 0x1c);
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar3 = puVar6;
          puVar6 = puVar6 + 1;
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar3 = *puVar2;
        }
        uStack_28 = 0x684;
        iVar4 = func_0x0003fdaf();
        uVar8 = 0;
        uVar9 = iVar4 == 0;
        if (!(bool)uVar9) {
          iStack_4 = 0x694;
          FUN_32b2_6d14();
          iStack_4 = 0x69d;
          FUN_32b2_6cc6();
          iStack_4 = 0x6a5;
          FUN_32b2_701d();
          iStack_4 = 0x6aa;
          FUN_32b2_6fc7();
          iStack_4 = 0x6af;
          FUN_32b2_7258();
          iStack_4 = 0x6b4;
          FUN_32b2_7191();
          if ((bool)uVar8 || (bool)uVar9) {
            iStack_4 = 0x6bf;
            FUN_32b2_6d14();
            iStack_4 = 0x6c8;
            FUN_32b2_6cc6();
            iStack_4 = 0x6d1;
            FUN_32b2_701d();
            iStack_4 = 0x6d6;
            FUN_32b2_6fc7();
            iStack_4 = 0x6db;
            FUN_32b2_7258();
            iStack_4 = 0x6e0;
            FUN_32b2_7191();
            if ((bool)uVar8 || (bool)uVar9) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
          }
        }
        iStack_4 = 0x6f8;
        FUN_32b2_6d14();
        iStack_4 = 0x700;
        FUN_32b2_6d14();
        iStack_4 = 0x708;
        FUN_32b2_710c();
        iStack_4 = 0x711;
        FUN_32b2_710c();
        iStack_4 = 0x71a;
        FUN_32b2_7154();
        iStack_4 = 0x71f;
        FUN_32b2_7191();
        if (!(bool)uVar8) {
          iStack_4 = 0x72d;
          FUN_32b2_6d14();
          iStack_4 = 0x732;
          FUN_32b2_6fc7();
          iStack_4 = 0x73a;
          FUN_32b2_6d14();
          iStack_4 = 0x742;
          FUN_32b2_710c();
          iStack_4 = 0x74b;
          FUN_32b2_710c();
          iStack_4 = 0x750;
          FUN_32b2_7191();
          if (!(bool)uVar8) {
            *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
            *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
            *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
            *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
          }
          iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
          iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
          iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
          uStack_a = 0x32b2;
          uStack_c = 0x774;
          FUN_32b2_7592();
          iStack_4 = 0x32b2;
          iStack_6 = 0x77e;
          FUN_32b2_6d14();
          iStack_4 = 0x32b2;
          iStack_6 = 0x786;
          FUN_32b2_70dc();
          iStack_4 = 0x32b2;
          iStack_6 = 0x78e;
          FUN_32b2_6d14();
          iStack_4 = 0x32b2;
          iStack_6 = 0x797;
          FUN_32b2_710c();
          iStack_4 = 0x32b2;
          iStack_6 = 0x79c;
          FUN_32b2_7182();
          iStack_4 = 0x32b2;
          iStack_6 = 0x7a5;
          FUN_32b2_6e99();
          iStack_4 = 0x32b2;
          iStack_6 = 0x7ad;
          FUN_32b2_710c();
          iStack_4 = 0x32b2;
          iStack_6 = 0x7b5;
          FUN_32b2_7154();
          iStack_4 = 0x32b2;
          iStack_6 = 0x7be;
          FUN_32b2_6e99();
          iStack_4 = 0x32b2;
          iStack_6 = 0x7c7;
          FUN_32b2_6eb1();
          iStack_4 = unaff_BP + -0x8a;
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
          uStack_1a = 0x7ff;
          FUN_32b2_6eb1();
          uStack_18 = *(undefined2 *)(unaff_BP + -100);
          uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
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
          uVar8 = (undefined1 *)0xffc9 < &uStack_38;
          uVar9 = &stack0x0000 == (undefined1 *)0x2;
          iStack_4 = 0x32b2;
          iStack_6 = 0x84f;
          FUN_32b2_6cc6();
          iStack_4 = 0x32b2;
          iStack_6 = 0x857;
          FUN_32b2_6cc6();
          iStack_4 = 0x32b2;
          iStack_6 = 0x85c;
          FUN_32b2_7191();
          if ((bool)uVar9) {
            uVar7 = *(undefined2 *)(unaff_BP + 8);
            *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
            *(undefined2 *)(unaff_BP + -0x60) = uVar7;
          }
          iStack_4 = 0x32b2;
          iStack_6 = 0x872;
          FUN_32b2_6cc6();
          iStack_4 = 0x32b2;
          iStack_6 = 0x87a;
          FUN_32b2_6cc6();
          iStack_4 = 0x32b2;
          iStack_6 = 0x87f;
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
          iStack_4 = 0x32b2;
          iStack_6 = 0x8d7;
          FUN_32b2_6d14();
          iStack_4 = 0x32b2;
          iStack_6 = 0x8e0;
          FUN_32b2_6d14();
          iStack_4 = 0x32b2;
          iStack_6 = 0x8e5;
          FUN_32b2_7191();
          if (!(bool)uVar8 && !(bool)uVar9) {
            iStack_4 = *(undefined2 *)(unaff_BP + -0xb6);
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
            uStack_14 = 0x978;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            uStack_14 = 0x980;
            FUN_32b2_6cc6();
            uStack_12 = 0x32b2;
            uStack_14 = 0x985;
            FUN_32b2_7258();
            uStack_1a = 0x32b2;
            uStack_1c = 0x98f;
            FUN_32b2_6eb1();
            uStack_1a = *(undefined2 *)(unaff_BP + -100);
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
            uVar8 = &stack0x0000 == (undefined1 *)0x4;
            iStack_6 = 0x32b2;
            iStack_8 = 0x9df;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x9e7;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x9ec;
            FUN_32b2_7191();
            if ((bool)uVar8) {
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
    iStack_4 = 0x3f5;
    FUN_32b2_6d14();
    iStack_4 = 0x32b2;
    iStack_6 = 0x3ff;
    FUN_32b2_7154();
    uVar7 = 0x32b2;
    iStack_4 = 0x405;
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
  }
  return 0;
}



/* 3ab8:57d3  FUN_3ab8_57d3  373 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_57d3(void)

{
  int iVar1;
  bool bVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  
  FUN_21f2_0ebc();
  uVar5 = *(uint *)0x154;
  uVar3 = uVar5 < 100;
  uVar4 = uVar5 == 100;
  if ((int)uVar5 < 100) {
    func_0x00029834(0x22b2);
    func_0x00029834(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar3 || (bool)uVar4) {
      func_0x00029834(0x22b2);
      func_0x00029834(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar3 || (bool)uVar4) {
        func_0x00029834(0x22b2);
        func_0x00029834(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar3) {
          func_0x00029834(0x22b2);
          func_0x00029834(0x22b2);
          FUN_28b3_1181(0x22b2);
          if ((bool)uVar3 || (bool)uVar4) {
            bVar2 = false;
            for (uVar5 = 1; (int)uVar5 <= *(int *)0x154; uVar5 = uVar5 + 1) {
              func_0x00029834(0x22b2);
              uVar3 = (uVar5 & 0x3fff) == 0;
              func_0x000297e6(0x22b2);
              func_0x00029d78(0x22b2);
              FUN_28b3_1181(0x22b2);
              if ((bool)uVar3) {
                func_0x00029834(0x22b2);
                func_0x000297e6(0x22b2);
                func_0x00029d78(0x22b2);
                FUN_28b3_1181(0x22b2);
                if (((bool)uVar3) && ((uint)*(byte *)(uVar5 + 0xc0b4) == *(uint *)0xb310)) {
                  bVar2 = true;
                }
              }
            }
            if (!bVar2) {
              *(undefined1 *)0xd14 = 2;
              func_0x00029834(0x22b2);
              *(int *)0x154 = *(int *)0x154 + 1;
              func_0x00029983(0x22b2);
              func_0x00029834(0x22b2);
              func_0x00029983(0x22b2);
              iVar1 = *(int *)0x154;
              *(undefined1 *)(iVar1 + -0x3f4c) = *(undefined1 *)0xb310;
              func_0x0001ebda(0x22b2,1,iVar1);
              return *(undefined2 *)0x154;
            }
          }
        }
      }
    }
  }
  else {
    *(undefined2 *)0xc22 = 1;
    func_0x00012276(0x22b2,0x1dc);
    FUN_1000_0599(0x11f2,0x14,2);
    func_0x00012276(0xdef,0x4e28,0x2a2);
  }
  return 0;
}



/* 3ab8:5948  FUN_3ab8_5948  229 bytes, 1 callers */

void __cdecl16far FUN_3ab8_5948(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if (((0 < param_1) && (param_1 <= *(int *)0x154)) &&
     (iVar7 = func_0x00008854(0x22b2,*(undefined1 *)(param_1 + -0x3f4c)), iVar7 == 0)) {
    *(undefined1 *)0xd14 = 2;
    func_0x0000daa6(0x885,0);
    func_0x0001ebda(0x885,0,param_1);
    iVar7 = *(int *)0x154;
    if (param_1 < iVar7) {
      iVar8 = param_1 * 4;
      uVar2 = *(undefined2 *)(iVar8 + -0x3c10);
      uVar3 = *(undefined2 *)(iVar8 + -0x3c0e);
      uVar4 = *(undefined2 *)(iVar8 + -0x3a7c);
      uVar5 = *(undefined2 *)(iVar8 + -0x3a7a);
      uVar1 = *(undefined1 *)(param_1 + -0x3f4c);
      iVar9 = iVar7 * 4;
      uVar6 = *(undefined2 *)(iVar9 + -0x3c0e);
      *(undefined2 *)(iVar8 + -0x3c10) = *(undefined2 *)(iVar9 + -0x3c10);
      *(undefined2 *)(iVar8 + -0x3c0e) = uVar6;
      uVar6 = *(undefined2 *)(iVar9 + -0x3a7a);
      *(undefined2 *)(iVar8 + -0x3a7c) = *(undefined2 *)(iVar9 + -0x3a7c);
      *(undefined2 *)(iVar8 + -0x3a7a) = uVar6;
      *(undefined1 *)(param_1 + -0x3f4c) = *(undefined1 *)(iVar7 + -0x3f4c);
      *(undefined2 *)(iVar9 + -0x3c10) = uVar2;
      *(undefined2 *)(iVar9 + -0x3c0e) = uVar3;
      *(undefined2 *)(iVar9 + -0x3a7c) = uVar4;
      *(undefined2 *)(iVar9 + -0x3a7a) = uVar5;
      *(undefined1 *)(iVar7 + -0x3f4c) = uVar1;
    }
    *(int *)0x154 = *(int *)0x154 + -1;
  }
  return;
}



/* 3ab8:5a2d  FUN_3ab8_5a2d  115 bytes, 0 callers */

int __cdecl16far FUN_3ab8_5a2d(void)

{
  int iVar1;
  undefined2 **ppuVar2;
  undefined2 unaff_DS;
  undefined2 **local_a;
  
  FUN_21f2_0ebc();
  local_a = &local_a;
  ppuVar2 = (undefined2 **)0x1bb4;
  iVar1 = FUN_1def_0fcd();
  if (iVar1 == 0) {
    local_a = (undefined2 **)0x1bb4;
    func_0x00012276();
    *(undefined2 *)0xc22 = 1;
    local_a = (undefined2 **)0x14;
    FUN_1000_0599();
    local_a = (undefined2 **)0xdef;
    ppuVar2 = (undefined2 **)0x11f2;
    func_0x00012276();
  }
  local_a = ppuVar2;
  FUN_3ab8_5948();
  return iVar1;
}



/* 3ab8:5aa0  FUN_3ab8_5aa0  506 bytes, 0 callers */

void __cdecl16far FUN_3ab8_5aa0(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 local_c6 [4];
  undefined1 local_c2 [20];
  undefined1 local_ae [4];
  int local_aa;
  undefined1 local_a8 [100];
  int local_44;
  undefined1 local_42 [20];
  undefined1 local_2e [20];
  undefined1 local_1a [10];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  int *piStack_4;
  
  piStack_4 = (int *)0x3ab8;
  puStack_6 = (undefined1 *)0x62b;
  FUN_21f2_0ebc();
  piStack_4 = (int *)0x4cac;
  puStack_6 = local_a8;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x639;
  func_0x00024c86();
  piStack_4 = (int *)0x4e2e;
  puStack_6 = local_a8;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x649;
  FUN_21f2_2d26();
  piStack_4 = (int *)0x4e31;
  puStack_6 = local_2e;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x658;
  func_0x00024c86();
  piStack_4 = (int *)local_a8;
  puStack_6 = local_2e;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x668;
  FUN_21f2_2d26();
  piStack_4 = (int *)0x4e38;
  puStack_6 = local_42;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x677;
  func_0x00024c86();
  piStack_4 = (int *)local_a8;
  puStack_6 = local_42;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x687;
  FUN_21f2_2d26();
  piStack_4 = (int *)0x4e3b;
  puStack_6 = local_1a;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x696;
  func_0x00024c86();
  piStack_4 = (int *)0x2ac;
  puStack_6 = local_c2;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x6a6;
  func_0x00024c86();
  piStack_4 = (int *)local_a8;
  puStack_6 = local_c2;
  puStack_8 = (undefined1 *)0x22b2;
  uVar1 = 0x22b2;
  puStack_a = (undefined1 *)0x6b7;
  FUN_21f2_2d26();
  do {
    piStack_4 = (int *)0x98a;
    puStack_6 = local_a8;
    puStack_a = (undefined1 *)0x6c7;
    puStack_8 = (undefined1 *)uVar1;
    func_0x00024c86();
    piStack_4 = (int *)local_2e;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0x6d7;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x4e4c;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0x6e7;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x98a;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0x6f7;
    FUN_21f2_2d26();
    piStack_4 = (int *)local_42;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0x707;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x4e50;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0x717;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x98a;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0x727;
    FUN_21f2_2d26();
    piStack_4 = (int *)local_c2;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0x738;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x98a;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0x748;
    FUN_21f2_2d26();
    piStack_4 = (int *)local_1a;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0x758;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x98a;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0x768;
    FUN_21f2_2d26();
    piStack_4 = (int *)local_a8;
    puStack_6 = (undefined1 *)0x4;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0x778;
    FUN_1def_07a4();
    piStack_4 = &local_44;
    puStack_6 = local_c6;
    puStack_8 = local_ae;
    puStack_a = local_a8;
    uStack_c = 0;
    uStack_e = 0x1bb4;
    uStack_10 = 0x795;
    local_aa = FUN_1def_0904();
    piStack_4 = (int *)0x1bb4;
    uVar1 = 0x885;
    puStack_6 = (undefined1 *)0x7a1;
    func_0x0000c3ca();
    if ((local_aa == 1) || (local_44 == 1)) {
      piStack_4 = (int *)local_42;
      puStack_6 = local_2e;
      puStack_8 = (undefined1 *)0x1;
      puStack_a = (undefined1 *)0x885;
      uStack_c = 0x7be;
      FUN_4375_88d1();
    }
    if ((local_aa == 2) || (local_44 == 2)) {
      piStack_4 = (int *)local_42;
      puStack_6 = local_2e;
      puStack_8 = (undefined1 *)0x2;
      puStack_a = (undefined1 *)0x885;
      uStack_c = 0x7de;
      FUN_4375_88d1();
    }
    if (local_aa == 3) {
      piStack_4 = (int *)local_c2;
      puStack_6 = local_2e;
      puStack_8 = (undefined1 *)0x3;
      puStack_a = (undefined1 *)0x885;
      uStack_c = 0x7f9;
      FUN_4375_88d1();
    }
    if (local_aa == 4) {
      piStack_4 = (int *)local_1a;
      puStack_6 = (undefined1 *)0x885;
      puStack_8 = (undefined1 *)0x80b;
      FUN_4375_7625();
    }
  } while (*(int *)0x158 == 0);
  return;
}



/* 3ab8:5c9a  FUN_3ab8_5c9a  4466 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x00040936) */
/* WARNING: Removing unreachable block (ram,0x0004093d) */
/* WARNING: Removing unreachable block (ram,0x00041c4f) */
/* WARNING: Removing unreachable block (ram,0x00041c5d) */
/* WARNING: Removing unreachable block (ram,0x00041c5f) */
/* WARNING: Removing unreachable block (ram,0x00041c6b) */
/* WARNING: Removing unreachable block (ram,0x00041d3c) */
/* WARNING: Removing unreachable block (ram,0x00041d71) */
/* WARNING: Removing unreachable block (ram,0x00041d88) */
/* WARNING: Removing unreachable block (ram,0x00041d96) */
/* WARNING: Removing unreachable block (ram,0x00041d9c) */
/* WARNING: Removing unreachable block (ram,0x00041dd1) */
/* WARNING: Removing unreachable block (ram,0x00041014) */
/* WARNING: Removing unreachable block (ram,0x000410aa) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl16far FUN_3ab8_5c9a(int param_1)

{
  uint **ppuVar1;
  uint ***pppuVar2;
  undefined2 *puVar3;
  code *pcVar4;
  uint **ppuVar5;
  int iVar6;
  int *piVar7;
  undefined2 *puVar8;
  int iVar9;
  uint ***pppuVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint **ppuVar15;
  uint **unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined2 *puVar18;
  long lVar19;
  uint *puStack_23c;
  undefined2 uStack_23a;
  undefined2 uStack_238;
  undefined2 uStack_236;
  uint *puStack_234;
  uint *puStack_232;
  undefined2 uStack_230;
  undefined2 uStack_22c;
  undefined2 uStack_22a;
  undefined2 uStack_228;
  undefined2 uStack_226;
  uint uStack_224;
  undefined2 uStack_222;
  undefined2 uStack_220;
  undefined2 uStack_21e;
  uint *puStack_21c;
  uint **ppuStack_21a;
  uint *puStack_218;
  uint **ppuStack_216;
  uint *puStack_20e;
  uint **ppuStack_20c;
  uint *puStack_20a;
  uint **ppuStack_208;
  uint *puStack_206;
  undefined2 *local_1ec;
  int local_1dc;
  int local_1ce;
  uint *local_1cc;
  uint **local_1ca;
  int local_1c4;
  uint *local_1c2;
  uint **local_1c0;
  uint *local_1be;
  uint **local_1bc;
  uint *local_1ba;
  uint **local_1b8;
  undefined2 local_1b6;
  int local_1b4;
  undefined2 local_1b2;
  uint *local_1b0;
  uint **local_1ae;
  uint *local_1ac;
  uint **local_1aa;
  uint *local_1a8;
  uint **local_1a6;
  uint *local_1a4;
  uint **local_1a2;
  undefined2 uStack_1a0;
  int iStack_19e;
  undefined4 local_19c;
  uint *local_198;
  uint **local_196;
  uint *local_194;
  uint **local_192;
  uint *local_190;
  uint **local_18e;
  uint local_18c [50];
  int local_128;
  int local_126;
  undefined4 local_124;
  uint *local_11c;
  uint **local_11a;
  uint *local_118;
  uint **local_116;
  undefined4 uStack_114;
  uint **local_106;
  int local_104;
  undefined4 local_102;
  int iStack_fe;
  int iStack_fc;
  uint *local_f6;
  uint **local_f4;
  uint *local_ee;
  uint **local_ec;
  undefined4 uStack_ea;
  undefined4 local_e6;
  uint *local_de;
  uint **local_dc;
  uint **local_da;
  int local_d8;
  int local_d6;
  uint *local_d4;
  uint **local_d2;
  uint *local_d0;
  uint **local_ce;
  uint *local_cc;
  uint **local_ca;
  uint *local_c8;
  uint **local_c6;
  uint *local_be;
  uint **local_bc;
  uint *local_ba;
  uint **local_b8;
  uint *local_b6;
  uint **local_b4;
  uint *local_b2;
  uint **local_b0;
  uint *local_a8;
  uint **local_a6;
  undefined2 local_a4 [2];
  uint *local_a0;
  uint **local_9e;
  undefined2 local_98;
  undefined4 local_96;
  undefined4 local_92;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  uint *local_84;
  uint **local_82;
  uint *local_80;
  uint **local_7e;
  int local_78;
  undefined1 local_64 [42];
  undefined2 uStack_3a;
  uint *puStack_38;
  undefined4 uStack_36;
  uint **ppuStack_32;
  uint *local_30;
  uint **local_2e;
  uint **local_2c;
  uint **local_2a;
  uint *puStack_20;
  int *piStack_1e;
  undefined1 *puStack_1c;
  uint **ppuStack_1a;
  uint uStack_18;
  uint *puStack_16;
  uint **ppuStack_14;
  uint ***pppuStack_12;
  uint **ppuStack_10;
  uint *puStack_e;
  uint **ppuStack_c;
  uint uVar20;
  uint uVar21;
  
  FUN_21f2_0ebc();
  local_102._2_2_ = 0;
  local_102._0_2_ = 0;
  local_e6._2_2_ = 0;
  local_e6._0_2_ = 0;
  local_124._2_2_ = 0;
  local_124._0_2_ = 0;
  local_19c._2_2_ = 0;
  local_19c._0_2_ = 0;
  local_30 = (uint *)0x0;
  local_1ce = 0;
  local_1ba = (uint *)*(int *)0x9ea4;
  local_1b8 = (uint **)*(int *)0x9ea6;
  uVar21 = *(uint *)0x1126;
  if (param_1 == 2) {
    local_1c4 = 0;
  }
  else {
    local_1c4 = param_1;
  }
  if (local_1c4 == 1) {
    ppuVar5 = (uint **)0x4e54;
  }
  else {
    ppuVar5 = (uint **)0x4e59;
  }
  ppuStack_c = (uint **)0x22b2;
  puVar13 = (uint *)0x22b2;
  puStack_e = (uint *)0x8c6;
  local_1a8 = local_1ba;
  local_1a6 = local_1b8;
  local_1a4 = local_1ba;
  local_1a2 = local_1b8;
  local_190 = local_1ba;
  local_18e = local_1b8;
  local_ee = local_1ba;
  local_ec = local_1b8;
  local_de = local_1ba;
  local_dc = local_1b8;
  FUN_21f2_3454();
  local_64[0] = 0;
  local_d6 = 0;
  uVar20 = 0;
  local_104 = 0;
  local_126 = 0;
  local_78 = 10000;
  lVar19 = CONCAT22(local_124._2_2_,(undefined2)local_124);
LAB_3ab8_5d65:
  do {
    if (*(int *)0x158 != 0) goto LAB_3ab8_646f;
    ppuStack_c = (uint **)puVar13;
    local_124 = lVar19;
    if (local_1c4 == 0) {
      puStack_e = (uint *)0x908;
      FUN_21f2_3454();
      ppuStack_c = (uint **)0x22b2;
      puStack_e = (uint *)0x918;
      FUN_21f2_2d26();
      ppuStack_c = (uint **)0x22b2;
      puStack_e = (uint *)0x928;
      FUN_21f2_2d26();
      iVar6 = 0x302;
      local_d8 = 0x11;
      for (local_128 = 1; local_128 <= local_d8; local_128 = local_128 + 1) {
        iVar6 = 0x4e62;
        ppuStack_c = (uint **)0x22b2;
        puStack_e = (uint *)0x97a;
        FUN_21f2_2d26();
      }
    }
    else {
      puStack_e = (uint *)0x98d;
      FUN_21f2_3454();
      if (*(char *)0x4ea2 == '\0') {
        ppuStack_c = (uint **)0x22b2;
        puStack_e = (uint *)0x9a4;
        FUN_21f2_2d26();
        ppuStack_c = (uint **)0x22b2;
        puStack_e = (uint *)0x9b4;
        FUN_21f2_2d26();
        iVar6 = 0x2f0;
        ppuStack_c = (uint **)0x22b2;
        puStack_e = (uint *)0x9c4;
        FUN_21f2_2d26();
      }
      else {
        ppuStack_c = (uint **)0x22b2;
        puStack_e = (uint *)0x9d6;
        FUN_21f2_2d26();
        ppuStack_c = (uint **)0x22b2;
        puStack_e = (uint *)0x9e6;
        FUN_21f2_2d26();
        ppuStack_c = (uint **)0x22b2;
        puStack_e = (uint *)0x9f6;
        FUN_21f2_2d26();
        local_128 = 1;
        do {
          iVar6 = 0x4e69;
          ppuStack_c = (uint **)0x22b2;
          puStack_e = (uint *)0xa0c;
          FUN_21f2_2d26();
          local_128 = local_128 + 1;
        } while (local_128 < 7);
      }
      *(undefined2 *)0xc20 = 1;
    }
    local_30 = (uint *)0x0;
    if (iVar6 == 0) {
      ppuStack_c = (uint **)0x22b2;
      puStack_e = (uint *)0xa38;
      FUN_21f2_2d26();
      if ((local_1c4 == 0) && (local_1ce != 0)) {
        ppuStack_c = (uint **)0x22b2;
        puStack_e = (uint *)0xa56;
        FUN_21f2_2d26();
        ppuStack_c = (uint **)0x22b2;
        puStack_e = (uint *)0xa66;
        FUN_21f2_2d26();
        ppuStack_c = (uint **)0x22b2;
        puStack_e = (uint *)0xa76;
        FUN_21f2_2d26();
        ppuStack_c = (uint **)0x22b2;
        puStack_e = (uint *)0xa86;
        FUN_21f2_2d26();
      }
    }
    if (local_1c4 == 1) {
      ppuStack_c = (uint **)0x22b2;
      puStack_e = (uint *)0xa9d;
      FUN_21f2_2d26();
      ppuStack_c = (uint **)0x22b2;
      puStack_e = (uint *)0xab9;
      FUN_21f2_2d26();
      ppuStack_c = (uint **)0x22b2;
      puStack_e = (uint *)0xac9;
      FUN_21f2_2d26();
    }
    ppuStack_c = (uint **)0x22b2;
    puVar13 = (uint *)0x1bb4;
    puStack_e = (uint *)0xad9;
    FUN_1def_07a4();
    if ((*(int *)0xc22 == 0) && (&stack0x0000 == (undefined1 *)0x18c)) {
      if (uVar21 == 0) {
        puStack_e = (uint *)0x2e;
        ppuStack_10 = (uint **)0x4e8d;
      }
      else {
        puStack_e = (uint *)0x2d;
        ppuStack_10 = (uint **)0x4e88;
      }
      ppuStack_c = (uint **)0x2;
      pppuStack_12 = (uint ***)0x1bb4;
      ppuStack_14 = (uint **)0xb22;
      FUN_1000_02b5();
      if (local_1c4 == 1) {
        if (*(char *)0x4ea1 == '\0') {
          puStack_e = (uint *)0x35;
          ppuStack_10 = (uint **)0x4e97;
        }
        else {
          puStack_e = (uint *)0x33;
          ppuStack_10 = (uint **)0x4e90;
        }
        ppuStack_c = (uint **)0x2;
        pppuStack_12 = (uint ***)0xdef;
        ppuStack_14 = (uint **)0xb61;
        FUN_1000_02b5();
      }
      puVar13 = (uint *)0xdef;
      *(undefined2 *)0xc22 = 1;
      if (local_d6 != 0) {
        ppuStack_c = (uint **)0x2;
        puStack_e = (uint *)0x11;
        ppuStack_10 = (uint **)0x128;
        pppuStack_12 = (uint ***)0xdef;
        puVar13 = (uint *)0xdef;
        ppuStack_14 = (uint **)0xb8a;
        FUN_1000_02b5();
      }
    }
    if (local_d6 == 0) {
      local_da = (uint **)0x2710;
    }
    else {
      local_da = (uint **)0x270f;
    }
    *(undefined2 *)0xc2c = 1;
    *(undefined2 *)0xc1a = 1;
    if (*(int *)0xce6 != 0) {
      *(undefined2 *)0xc1a = 0;
    }
    ppuStack_c = &local_f6;
    puStack_e = local_18c;
    ppuStack_10 = local_da;
    ppuStack_14 = (uint **)0xbd5;
    pppuStack_12 = (uint ***)puVar13;
    local_1dc = FUN_1def_0904();
    *(undefined2 *)0xc2c = 0;
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)0xc20 = 0;
    puVar13 = (uint *)0x885;
    iVar6 = 0xbec;
    func_0x0000c3ca();
    ppuVar5 = local_11a;
    if (*(int *)0x158 != 0) {
      return;
    }
    if ((*(int *)0xc18 == -2) && (2 < *(byte *)0x126)) {
      local_d6 = 0;
      ppuStack_c = local_f4;
      puStack_e = local_f6;
      pcVar4 = (code *)swi(0x3f);
      (*pcVar4)();
      lVar19 = local_124;
      goto LAB_3ab8_5d65;
    }
    if (*(int *)0xc18 == 0) {
      if (local_1dc == 0x14) {
        return;
      }
      ppuVar5 = (uint **)0x1bb4;
      if ((local_1dc == -1) && (local_d6 != 0)) {
        for (; 0 < (int)uVar20; uVar20 = uVar20 - 1) {
          local_1b4 = *(int *)0x148;
          local_1b2 = *(undefined2 *)0x14a;
          ppuStack_c = (uint **)0xca4;
          func_0x0000daa6();
          iVar6 = local_1b4;
          ppuStack_c = (uint **)0x885;
          puStack_e = (uint *)0xcb2;
          func_0x00018779();
        }
        for (; 0 < local_126; local_126 = local_126 + -1) {
          local_1b4 = *(int *)0x14c;
          local_1b2 = *(undefined2 *)0x14e;
          ppuStack_c = (uint **)0xcd6;
          func_0x0000daa6();
          iVar6 = local_1b4;
          ppuStack_c = (uint **)0x885;
          puStack_e = (uint *)0xce4;
          FUN_13bf_0327();
        }
        for (; 0 < local_104; local_104 = local_104 + -1) {
          local_1b6 = *(undefined2 *)0x152;
          ppuStack_c = (uint **)0xd02;
          func_0x0000daa6();
          iVar6 = 0x885;
          ppuStack_c = (uint **)0xd0c;
          FUN_1def_186d();
        }
        while (0 < iVar6) {
          local_1b6 = *(undefined2 *)0x150;
          ppuStack_c = (uint **)0xd29;
          func_0x0000daa6();
          ppuStack_c = (uint **)0xd33;
          func_0x000190c7();
          iVar6 = 0x884;
        }
        local_106 = (uint **)0x0;
        func_0x0000abfa();
        ppuStack_c = (uint **)0xd51;
        func_0x0000b1d8();
        local_d6 = 0;
        ppuVar5 = (uint **)0x1;
      }
      puVar13 = (uint *)0x885;
      if (local_1dc == 1) {
        local_106 = (uint **)0x0;
        uVar21 = (uint)((int)uVar21 < 1);
      }
      local_30 = (uint *)0x0;
      if ((((local_1dc == 2) || (local_106 == (uint **)0x2)) && (local_1c4 == 0)) &&
         ((ppuVar5 == (uint **)0x0 && (local_1ce != 0)))) {
        local_118 = local_f6;
        local_116 = local_f4;
        local_198 = local_11c;
        local_196 = local_11a;
        ppuVar5 = &local_198;
        ppuStack_c = local_106;
        puStack_e = (uint *)0x885;
        puVar13 = (uint *)0x11f2;
        ppuStack_10 = (uint **)0xdd2;
        iVar6 = func_0x00015409();
        lVar19 = local_124;
        if (iVar6 != 0) {
          local_30 = (uint *)0x1;
          local_106 = (uint **)0x0;
          local_f6 = local_de;
          local_f4 = local_dc;
          local_11c = local_ee;
          local_11a = local_ec;
          local_1ac = local_190;
          local_1aa = local_18e;
          local_1c2 = local_1a8;
          local_1c0 = local_1a6;
          local_1be = local_1a4;
          local_1bc = local_1a2;
          local_1cc = local_1ba;
          local_1ca = local_1b8;
          ppuVar15 = &local_84;
          pppuVar10 = &local_2a;
          for (iVar6 = 0x10; ppuVar5 = unaff_SS, local_102 = local_e6, lVar19 = local_19c,
              iVar6 != 0; iVar6 = iVar6 + -1) {
            ppuVar1 = ppuVar15;
            ppuVar15 = ppuVar15 + 1;
            pppuVar2 = pppuVar10;
            pppuVar10 = pppuVar10 + 1;
            *ppuVar1 = (uint *)*pppuVar2;
          }
LAB_3ab8_62e5:
          if (*(int *)0x158 != 0) goto LAB_3ab8_6735;
          puStack_e = (uint *)0xe7e;
          ppuStack_c = (uint **)puVar13;
          local_19c = lVar19;
          FUN_21f2_3454();
          ppuStack_c = (uint **)0x22b2;
          puStack_e = (uint *)0xe8e;
          FUN_21f2_2d26();
          local_128 = 1;
          do {
            ppuStack_c = (uint **)0x22b2;
            puStack_e = (uint *)0xea4;
            FUN_21f2_2d26();
            local_128 = local_128 + 1;
          } while (local_128 < 10);
          if ((*(char *)0x4ea2 == '\0') || (local_1c4 == 0)) {
            ppuStack_c = (uint **)0x22b2;
            puStack_e = (uint *)0xed0;
            FUN_21f2_2d26();
          }
          else {
            ppuStack_c = (uint **)0x22b2;
            puStack_e = (uint *)0x10e2;
            FUN_21f2_2d26();
          }
          ppuStack_c = (uint **)0x22b2;
          puStack_e = (uint *)0x10f2;
          FUN_21f2_2d26();
          ppuStack_c = &local_194;
          puStack_e = local_18c;
          *(undefined2 *)0xc20 = 1;
          ppuStack_10 = (uint **)0x1;
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x1114;
          local_1dc = FUN_1def_0904();
          *(undefined2 *)0xc20 = 0;
          ppuVar5 = (uint **)0x1bb4;
          puVar13 = (uint *)0x885;
          func_0x0000c3ca();
          if (*(int *)0x158 != 0) {
            return;
          }
          if (local_1dc != -1) break;
          if ((*(char *)0x4ea2 == '\0') || (lVar19 = local_124, local_1c4 == 0)) {
LAB_3ab8_65cb:
            if (((*(char *)0x4ea2 != '\0') && (local_1c4 != 0)) || (*(int *)0x158 != 0))
            goto LAB_3ab8_6691;
            puStack_e = (uint *)0x1172;
            ppuStack_c = (uint **)puVar13;
            FUN_21f2_3454();
            ppuStack_c = (uint **)0x22b2;
            puStack_e = (uint *)0x1182;
            FUN_21f2_2d26();
            ppuStack_c = (uint **)0x22b2;
            puStack_e = (uint *)0x1192;
            FUN_21f2_2d26();
            ppuStack_c = (uint **)0x22b2;
            puStack_e = (uint *)0x11a2;
            FUN_21f2_2d26();
            ppuStack_c = &local_118;
            puStack_e = local_18c;
            *(undefined2 *)0xc20 = 1;
            ppuStack_10 = (uint **)0x1;
            pppuStack_12 = (uint ***)0x22b2;
            ppuStack_14 = (uint **)0x11c4;
            local_1dc = FUN_1def_0904();
            *(undefined2 *)0xc20 = 0;
            ppuVar5 = (uint **)0x1bb4;
            puVar13 = (uint *)0x885;
            func_0x0000c3ca();
            if (*(int *)0x158 != 0) {
              return;
            }
            lVar19 = local_124;
            if (local_1dc != -1) goto LAB_3ab8_666a;
          }
        }
      }
      else {
        if (local_1dc == 2) {
          local_106 = (uint **)0x0;
          *(bool *)0x4ea1 = *(char *)0x4ea1 == '\0';
        }
        if (local_1dc == 3) {
          local_106 = (uint **)0x0;
          *(bool *)0x4ea2 = *(char *)0x4ea2 == '\0';
        }
        lVar19 = local_124;
        if (local_106 != (uint **)0x0) {
          if (local_1c4 == 0) {
            func_0x000297e6();
            func_0x00029d78();
            ppuStack_10 = (uint **)0x22b2;
            pppuStack_12 = (uint ***)0xf3e;
            func_0x000299d1();
            ppuStack_10 = (uint **)0x22b2;
            pppuStack_12 = (uint ***)0xf47;
            func_0x000297e6();
            ppuStack_10 = (uint **)0x22b2;
            pppuStack_12 = (uint ***)0xf4c;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            ppuStack_1a = (uint **)0xf56;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            ppuStack_1a = (uint **)0xf5b;
            lVar19 = func_0x0001765f();
            local_102 = lVar19;
            if (lVar19 < 0) {
              local_2e = (uint **)local_f6;
              local_2c = local_f4;
              local_a8 = local_11c;
              local_a6 = local_11a;
              ppuStack_c = (uint **)0x11f2;
              puStack_e = (uint *)0xf99;
              puVar18 = (undefined2 *)func_0x00000271();
              puVar8 = (undefined2 *)puVar18;
              ppuVar5 = &local_84;
              for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                ppuVar1 = ppuVar5;
                ppuVar5 = ppuVar5 + 1;
                puVar3 = puVar8;
                puVar8 = puVar8 + 1;
                *ppuVar1 = (uint *)*puVar3;
              }
              local_f6 = local_84;
              local_f4 = local_82;
              local_11c = local_80;
              local_11a = local_7e;
              ppuVar5 = &local_a8;
              pppuVar10 = &local_2a;
              ppuVar15 = &local_84;
              for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar18 = pppuVar10;
                pppuVar10 = pppuVar10 + 1;
                ppuVar1 = ppuVar15;
                ppuVar15 = ppuVar15 + 1;
                *puVar18 = *ppuVar1;
              }
              local_2c = (uint **)0x0;
              puVar13 = (uint *)0x1bb4;
              local_2e = (uint **)0xfe5;
              iVar6 = func_0x0001fdaf();
              lVar19 = local_124;
LAB_3ab8_6468:
              if (iVar6 != 0) goto LAB_3ab8_646f;
            }
            else {
              ppuVar5 = (uint **)0x2;
              ppuStack_c = (uint **)0x11f2;
              puVar13 = (uint *)0xdef;
              puStack_e = (uint *)0x1009;
              FUN_1000_0599();
              if (0 < local_102) {
                ppuVar5 = (uint **)0x2ce;
                puVar13 = (uint *)0x11f2;
                ppuStack_c = (uint **)0x1024;
                func_0x00012276();
              }
              if (local_102 == 0) {
                ppuVar5 = (uint **)0x384;
                puVar13 = (uint *)0x11f2;
                ppuStack_c = (uint **)0x1038;
                func_0x00012276();
              }
              *(undefined2 *)0xc22 = 1;
              lVar19 = local_124;
            }
          }
          else {
            if (*(char *)0x4ea2 == '\0') {
              ppuVar5 = &local_11c;
              ppuStack_c = local_106;
              puStack_e = (uint *)0x885;
              puVar13 = (uint *)0x11f2;
              ppuStack_10 = (uint **)0x105c;
              iVar6 = func_0x00015409();
              lVar19 = local_124;
              goto LAB_3ab8_6468;
            }
            func_0x000297e6();
            ppuVar5 = (uint **)0x22b2;
            func_0x00029d78();
            ppuStack_10 = (uint **)0x22b2;
            pppuStack_12 = (uint ***)0x1079;
            func_0x000299d1();
            ppuStack_10 = (uint **)0x22b2;
            pppuStack_12 = (uint ***)0x1082;
            func_0x000297e6();
            ppuStack_10 = (uint **)0x22b2;
            pppuStack_12 = (uint ***)0x1087;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            ppuStack_1a = (uint **)0x1091;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            puVar13 = (uint *)0x11f2;
            ppuStack_1a = (uint **)0x1096;
            lVar19 = FUN_13bf_39a0();
            if (0 < lVar19) {
              local_118 = local_f6;
              local_116 = local_f4;
              local_198 = local_11c;
              local_196 = local_11a;
LAB_3ab8_646f:
              local_124 = lVar19;
              if (*(int *)0x158 == 0) goto LAB_3ab8_65cb;
              return;
            }
          }
        }
      }
    }
    else {
      local_d6 = 0;
      func_0x000297e6();
      ppuVar5 = (uint **)0x22b2;
      func_0x00029d78();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0xc4a;
      func_0x000299d1();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0xc53;
      func_0x000297e6();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0xc58;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      ppuStack_1a = (uint **)0xc62;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      puVar13 = (uint *)0x3bf;
      ppuStack_1a = (uint **)0xc67;
      func_0x0000507a();
      lVar19 = local_124;
    }
  } while( true );
  lVar19 = local_19c;
  if (local_106 == (uint **)0x0) goto LAB_3ab8_62e5;
  if ((*(char *)0x4ea2 == '\0') || (local_1c4 == 0)) {
    ppuVar5 = &local_1b0;
    ppuStack_c = local_106;
    puStack_e = (uint *)0x885;
    ppuStack_10 = (uint **)0x12ab;
    iVar6 = func_0x00015409();
    lVar19 = local_19c;
LAB_3ab8_672e:
    puVar13 = (uint *)0x11f2;
    if (iVar6 == 0) goto LAB_3ab8_62e5;
  }
  else {
    func_0x000297e6();
    ppuVar5 = (uint **)0x22b2;
    func_0x00029d78();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x12d7;
    func_0x000299d1();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x12e0;
    func_0x000297e6();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x12e5;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    ppuStack_1a = (uint **)0x12ef;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    puVar13 = (uint *)0x11f2;
    ppuStack_1a = (uint **)0x12f4;
    lVar19 = FUN_13bf_39a0();
    iVar6 = (int)lVar19;
    if (lVar19 < 0) goto LAB_3ab8_62e5;
    if (lVar19 < 0x10000) goto LAB_3ab8_672e;
  }
LAB_3ab8_6735:
  if (*(int *)0x158 != 0) {
    return;
  }
  local_19c = lVar19;
  if ((*(char *)0x4ea2 == '\0') || (puVar14 = puVar13, local_1c4 == 0)) {
    uVar16 = 1;
    func_0x000297e6();
    func_0x000297e6();
    ppuVar5 = (uint **)0x22b2;
    puVar14 = (uint *)0x22b2;
    FUN_28b3_1181();
    if ((bool)uVar16) {
      func_0x000297e6();
      func_0x000297e6();
      ppuVar5 = (uint **)0x22b2;
      puVar14 = (uint *)0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar16) goto LAB_3ab8_67ec;
    }
  }
  if (((*(char *)0x4ea2 == '\0') || (local_1c4 == 0)) || (local_19c != local_124)) {
    if ((*(char *)0x4ea2 != '\0') && (local_1c4 != 0)) {
      puStack_e = (uint *)0x13af;
      ppuStack_c = (uint **)puVar14;
      puVar18 = (undefined2 *)func_0x0000013f();
      puVar8 = (undefined2 *)puVar18;
      ppuVar5 = &local_be;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        ppuVar1 = ppuVar5;
        ppuVar5 = ppuVar5 + 1;
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        *ppuVar1 = (uint *)*puVar3;
      }
      ppuStack_c = (uint **)0x0;
      puStack_e = (uint *)0x13cf;
      puVar18 = (undefined2 *)func_0x0000013f();
      puVar8 = (undefined2 *)puVar18;
      ppuVar5 = &local_d4;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        ppuVar1 = ppuVar5;
        ppuVar5 = ppuVar5 + 1;
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        *ppuVar1 = (uint *)*puVar3;
      }
      ppuVar15 = &puStack_20;
      ppuVar5 = &local_d4;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar18 = ppuVar15;
        ppuVar15 = ppuVar15 + 1;
        ppuVar1 = ppuVar5;
        ppuVar5 = ppuVar5 + 1;
        *puVar18 = *ppuVar1;
      }
      puVar11 = &uStack_36;
      ppuVar5 = &local_be;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar18 = (undefined2 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 2);
        ppuVar1 = ppuVar5;
        ppuVar5 = ppuVar5 + 1;
        *puVar18 = *ppuVar1;
      }
      puStack_38 = (uint *)0x0;
      uStack_3a = 0x140d;
      iVar6 = FUN_1def_1921();
      if (iVar6 == 0) {
        *(undefined2 *)0xc22 = 1;
        ppuStack_c = (uint **)0x1bb4;
        puVar13 = (uint *)0x11f2;
        puStack_e = (uint *)0x1427;
        func_0x00012276();
        ppuVar5 = (uint **)0x396;
        lVar19 = local_19c;
        goto LAB_3ab8_62e5;
      }
      func_0x000297e6();
      func_0x00029d78();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x1444;
      func_0x000299d1();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x144d;
      func_0x000297e6();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x1452;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      ppuStack_1a = (uint **)0x145c;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      ppuStack_1a = (uint **)0x1465;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      ppuStack_1a = (uint **)0x146a;
      func_0x00029d78();
      puStack_20 = (uint *)0x22b2;
      func_0x000299d1();
      puStack_20 = (uint *)0x22b2;
      func_0x000297e6();
      puStack_20 = (uint *)0x22b2;
      func_0x00029d78();
      local_2a = (uint **)0x148c;
      func_0x000299d1();
      local_2a = (uint **)0x1491;
      FUN_1def_043a();
      func_0x000297e6();
      func_0x00029d78();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x14ac;
      func_0x000299d1();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x14b5;
      func_0x000297e6();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x14ba;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      ppuStack_1a = (uint **)0x14c4;
      func_0x000299d1();
      uStack_18 = 1;
      ppuStack_1a = (uint **)0x22b2;
      puStack_1c = (undefined1 *)0x14cd;
      FUN_1def_05d1();
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029d78();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x14ef;
      func_0x000299d1();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x14f8;
      func_0x000297e6();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x14fd;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      ppuStack_1a = (uint **)0x1507;
      func_0x000299d1();
      uStack_18 = 1;
      ppuStack_1a = (uint **)0x22b2;
      puStack_1c = (undefined1 *)0x1510;
      FUN_1def_05d1();
      uVar16 = (undefined1 *)0xffed < &uStack_18;
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar16) {
        local_118 = local_be;
        local_116 = local_bc;
        local_198 = local_ba;
        local_196 = local_b8;
      }
      else {
        local_118 = local_b6;
        local_116 = local_b4;
        local_198 = local_b2;
        local_196 = local_b0;
      }
      func_0x000297e6();
      func_0x00029d78();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x1573;
      func_0x000299d1();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x157c;
      func_0x000297e6();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x1581;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      ppuStack_1a = (uint **)0x158b;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      ppuStack_1a = (uint **)0x1594;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      ppuStack_1a = (uint **)0x1599;
      func_0x00029d78();
      puStack_20 = (uint *)0x22b2;
      func_0x000299d1();
      puStack_20 = (uint *)0x22b2;
      func_0x000297e6();
      puStack_20 = (uint *)0x22b2;
      func_0x00029d78();
      local_2a = (uint **)0x15bb;
      func_0x000299d1();
      local_2a = (uint **)0x15c0;
      FUN_1def_043a();
      func_0x000297e6();
      func_0x00029d78();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x15db;
      func_0x000299d1();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x15e4;
      func_0x000297e6();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x15e9;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      ppuStack_1a = (uint **)0x15f3;
      func_0x000299d1();
      uStack_18 = 1;
      ppuStack_1a = (uint **)0x22b2;
      puStack_1c = (undefined1 *)0x15fc;
      FUN_1def_05d1();
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029d78();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x161e;
      func_0x000299d1();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x1627;
      func_0x000297e6();
      ppuStack_10 = (uint **)0x22b2;
      pppuStack_12 = (uint ***)0x162c;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      ppuStack_1a = (uint **)0x1636;
      func_0x000299d1();
      uStack_18 = 1;
      ppuStack_1a = (uint **)0x22b2;
      puStack_1c = (undefined1 *)0x163f;
      FUN_1def_05d1();
      uVar16 = (undefined1 *)0xffed < &uStack_18;
      uVar17 = &stack0x0000 == (undefined1 *)0x6;
      func_0x000297e6();
      ppuVar5 = (uint **)0x22b2;
      puVar14 = (uint *)0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar16 || (bool)uVar17) {
        local_194 = local_cc;
        local_192 = local_ca;
        local_1b0 = local_c8;
        local_1ae = local_c6;
      }
      else {
        local_194 = local_d4;
        local_192 = local_d2;
        local_1b0 = local_d0;
        local_1ae = local_ce;
      }
    }
    if (ppuVar5 == (uint **)0x0) {
      puVar13 = puVar14;
      if (local_30 == (uint *)0x0) goto LAB_3ab8_6c86;
    }
    else {
      func_0x000297e6();
      func_0x0002996b();
      puVar14 = (uint *)0x22b2;
      func_0x00029983();
      local_1cc = local_a8;
      local_1ca = local_a6;
      local_1c2 = local_a8;
      local_1c0 = local_a6;
    }
LAB_3ab8_6b45:
    puVar13 = (uint *)0x885;
    func_0x0000c3ca();
    ppuVar5 = local_1ae;
    local_d6 = 0;
    uVar20 = 0;
    local_104 = 0;
    local_126 = 0;
    if ((local_1c4 == 0) && (puVar14 == (uint *)0x0)) {
      local_1ce = 1;
      local_de = local_f6;
      local_dc = local_f4;
      local_ee = local_11c;
      local_ec = local_11a;
      local_190 = local_1ac;
      local_18e = local_1aa;
      local_1a8 = local_1c2;
      local_1a6 = local_1c0;
      local_1a4 = local_1be;
      local_1a2 = local_1bc;
      local_1ba = local_1cc;
      local_1b8 = local_1ca;
      pppuVar10 = &local_2a;
      ppuVar15 = &local_84;
      for (iVar6 = 0x10; local_e6 = local_102, iVar6 != 0; iVar6 = iVar6 + -1) {
        pppuVar2 = pppuVar10;
        pppuVar10 = pppuVar10 + 1;
        ppuVar1 = ppuVar15;
        ppuVar15 = ppuVar15 + 1;
        *pppuVar2 = (uint **)*ppuVar1;
      }
    }
    if ((local_102 < 0) && (local_78 != 10000)) {
      ppuStack_c = local_192;
      puStack_e = local_194;
      ppuStack_10 = local_196;
      pppuStack_12 = (uint ***)local_198;
      ppuStack_14 = local_116;
      puStack_16 = local_118;
      ppuStack_1a = (uint **)&local_126;
      puStack_1c = &stack0xfff6;
      piStack_1e = &local_104;
      puStack_20 = (uint *)&stack0xfffa;
      local_2a = local_1c0;
      local_2c = (uint **)local_1c2;
      local_2e = local_1aa;
      local_30 = local_1ac;
      ppuStack_32 = local_1ae;
      puStack_38 = (uint *)local_64;
      pcVar4 = (code *)swi(0x3f);
      uStack_18 = uVar21;
      uStack_36 = local_102;
      iVar6 = (*pcVar4)();
      lVar19 = local_124;
      if (iVar6 == 0) goto LAB_3ab8_5d65;
      goto LAB_3ab8_7a6d;
    }
    local_a0 = local_11c;
    local_9e = local_11a;
    func_0x000297e6();
    func_0x0002996b();
    func_0x00029b55();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    func_0x00029983();
    func_0x00029834();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029d78();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x1a2d;
    func_0x000299d1();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x1a32;
    FUN_28b3_1582();
    uVar16 = (undefined1 *)0xfff7 < &puStack_e;
    func_0x00029834();
    func_0x0002996b();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar16) {
      *(undefined2 *)0xc22 = 1;
      ppuStack_c = (uint **)0x22b2;
      puVar13 = (uint *)0x11f2;
      puStack_e = (uint *)0x1a64;
      func_0x00012276();
LAB_3ab8_6c86:
      if (((*(char *)0x4ea2 != '\0') && (local_1c4 != 0)) || (*(int *)0x158 != 0))
      goto LAB_3ab8_6d10;
      pcVar4 = (code *)swi(0x3f);
      (*pcVar4)();
      *(undefined2 *)0xc20 = 1;
      ppuStack_c = (uint **)0x1;
      ppuStack_10 = (uint **)0x1846;
      puStack_e = puVar13;
      local_1dc = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      uVar21 = 0x1bb4;
      puVar13 = (uint *)0x885;
      uVar20 = 0x1858;
      func_0x0000c3ca();
      if (*(int *)0x158 != 0) {
        return;
      }
      ppuVar5 = &local_1ac;
      lVar19 = local_19c;
      if (local_1dc != -1) goto LAB_3ab8_6cec;
      goto LAB_3ab8_62e5;
    }
    local_8c = 0;
    local_8e = 0;
    local_96._2_2_ = 0;
    local_96._0_2_ = 0;
    local_92._2_2_ = 0;
    local_92._0_2_ = 0;
    local_98 = 10000;
    pcVar4 = (code *)swi(0x3f);
    uStack_8a = (*pcVar4)();
    pcVar4 = (code *)swi(0x3f);
    uStack_89 = (*pcVar4)();
    uStack_88 = *(undefined1 *)0xb310;
    func_0x000297e6();
    func_0x00029d78();
    func_0x000299d1();
    func_0x000297e6();
    func_0x00029d78();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x1adc;
    func_0x000299d1();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x1ae5;
    func_0x000297e6();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x1aea;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    ppuStack_1a = (uint **)0x1af4;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    ppuStack_1a = (uint **)0x1afd;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    ppuStack_1a = (uint **)0x1b02;
    func_0x00029d78();
    puStack_20 = (uint *)0x22b2;
    func_0x000299d1();
    puStack_20 = (uint *)0x22b2;
    FUN_1def_043a();
    func_0x000297e6();
    func_0x00029d78();
    func_0x000299d1();
    func_0x000297e6();
    func_0x00029d78();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x1b44;
    func_0x000299d1();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x1b4d;
    func_0x000297e6();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x1b52;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    ppuStack_1a = (uint **)0x1b5c;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    ppuStack_1a = (uint **)0x1b65;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    ppuStack_1a = (uint **)0x1b6a;
    func_0x00029d78();
    puStack_20 = (uint *)0x22b2;
    func_0x000299d1();
    puStack_20 = (uint *)0x22b2;
    lVar19 = FUN_1000_0718();
    uStack_ea = lVar19;
    func_0x000297e6();
    func_0x00029d78();
    func_0x000299d1();
    func_0x000297e6();
    ppuVar5 = (uint **)0x22b2;
    func_0x00029d78();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x1bb4;
    func_0x000299d1();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x1bbd;
    func_0x000297e6();
    ppuStack_10 = (uint **)0x22b2;
    pppuStack_12 = (uint ***)0x1bc2;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    ppuStack_1a = (uint **)0x1bcc;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    ppuStack_1a = (uint **)0x1bd5;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    ppuStack_1a = (uint **)0x1bda;
    func_0x00029d78();
    puStack_20 = (uint *)0x22b2;
    func_0x000299d1();
    puStack_20 = (uint *)0x22b2;
    lVar19 = FUN_1000_0718();
    local_96 = uStack_ea;
    local_92 = lVar19;
    if (lVar19 == uStack_ea) {
      local_8e = (undefined2)uStack_ea;
      local_8c = (int)((ulong)lVar19 >> 0x10);
      local_96 = 0;
      local_92 = 0;
    }
    puVar13 = (uint *)0x885;
    uVar21 = 0x1c48;
    uStack_114 = lVar19;
    func_0x0000daa6();
    iVar6 = *(int *)0x14e + (uint)(0xfffe < *(uint *)0x14c);
    lVar19 = local_124;
    if ((iVar6 <= *(int *)0x142) &&
       ((iVar6 < *(int *)0x142 || (*(uint *)0x14c + 1 <= *(uint *)0x140)))) {
      ppuStack_c = (uint **)0x885;
      puStack_e = (uint *)0x1cb8;
      local_1ec = (undefined2 *)func_0x00000271();
      puVar12 = (undefined2 *)local_1ec;
      puVar8 = local_a4;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar3 = puVar12;
        puVar12 = puVar12 + 1;
        puVar18 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar18;
      }
      iStack_fe = *(uint *)0x14c + 1;
      iStack_fc = *(int *)0x14e + (uint)(0xfffe < *(uint *)0x14c);
      puVar13 = (uint *)0x0;
      if ((local_126 == 0) && (iVar6 == 0)) {
        ppuVar5 = (uint **)0x0;
      }
      else {
        ppuVar5 = &puStack_23c;
        ppuStack_c = &puStack_234;
        puStack_e = &uStack_224;
        ppuStack_14 = (uint **)0x0;
        ppuVar15 = (uint **)0x1bb4;
        puStack_16 = (uint *)0x1d15;
        pppuStack_12 = (uint ***)iStack_fe;
        ppuStack_10 = (uint **)iStack_fc;
        FUN_20a9_0ca3();
        if (ppuVar5 == (uint **)0x0) {
          ppuStack_c = (uint **)*(undefined2 *)0x14c;
          pcVar4 = (code *)swi(0x3f);
          uVar20 = (*pcVar4)();
        }
        if (uStack_ea == uStack_114) {
          ppuStack_c = (uint **)uStack_230;
          puStack_e = puStack_232;
          ppuStack_10 = (uint **)puStack_234;
          pppuStack_12 = (uint ***)uStack_21e;
          ppuStack_14 = (uint **)uStack_220;
          puStack_16 = (uint *)uStack_222;
          uStack_18 = uStack_224;
          puStack_1c = (undefined1 *)0x1e2b;
          ppuStack_1a = ppuVar15;
          func_0x000297e6();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x1e30;
          func_0x00029d78();
          func_0x000299d1();
          func_0x000297e6();
          func_0x00029d78();
          local_2a = (uint **)0x22b2;
          local_2c = (uint **)0x1e52;
          func_0x000299d1();
          local_2a = (uint **)0x22b2;
          local_2c = (uint **)0x1e57;
          FUN_1def_043a();
          ppuStack_c = (uint **)*(undefined2 *)0x9f50;
          puStack_e = (uint *)*(undefined2 *)0x9f4e;
          ppuStack_10 = (uint **)*(undefined2 *)0x9f4c;
          pppuStack_12 = (uint ***)*(undefined2 *)0x9efe;
          ppuStack_14 = (uint **)*(undefined2 *)0x9efc;
          puStack_16 = (uint *)*(undefined2 *)0x9efa;
          uStack_18 = *(uint *)0x9ef8;
          ppuStack_1a = (uint **)0x0;
          puStack_1c = (undefined1 *)0x1bb4;
          piStack_1e = (int *)0x1e82;
          piVar7 = (int *)FUN_1def_05d1();
          local_194 = (uint *)*piVar7;
          local_192 = (uint **)piVar7[1];
          ppuStack_c = (uint **)*(undefined2 *)0x9f50;
          puStack_e = (uint *)*(undefined2 *)0x9f4e;
          ppuStack_10 = (uint **)*(undefined2 *)0x9f4c;
          pppuStack_12 = (uint ***)*(undefined2 *)0x9efe;
          ppuStack_14 = (uint **)*(undefined2 *)0x9efc;
          puStack_16 = (uint *)*(undefined2 *)0x9efa;
          uStack_18 = *(uint *)0x9ef8;
          ppuStack_1a = (uint **)0x0;
          puStack_1c = (undefined1 *)0x1bb4;
          piStack_1e = (int *)0x1ebc;
          puVar8 = (undefined2 *)func_0x0001e558();
          local_1b0 = (uint *)*puVar8;
          local_1ae = (uint **)puVar8[1];
          ppuStack_c = (uint **)0x1ed7;
          func_0x000297e6();
          ppuStack_c = (uint **)0x1edc;
          func_0x00029d78();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x1ee6;
          func_0x000299d1();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x1eef;
          func_0x000297e6();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x1ef4;
          func_0x00029d78();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x1efe;
          func_0x000299d1();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x1f07;
          func_0x000297e6();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x1f0c;
          func_0x00029d78();
          func_0x000299d1();
          func_0x000297e6();
          func_0x00029d78();
          local_2a = (uint **)0x22b2;
          local_2c = (uint **)0x1f2e;
          func_0x000299d1();
          local_2a = (uint **)0x22b2;
          local_2c = (uint **)0x1f33;
          FUN_1def_043a();
          ppuStack_c = (uint **)*(undefined2 *)0x9efc;
          puStack_e = (uint *)*(undefined2 *)0x9efa;
          ppuStack_10 = (uint **)*(undefined2 *)0x9ef8;
          pppuStack_12 = (uint ***)*(undefined2 *)0x9f5a;
          ppuStack_14 = (uint **)*(undefined2 *)0x9f58;
          puStack_16 = (uint *)*(undefined2 *)0x9f56;
          uStack_18 = *(uint *)0x9f54;
          ppuStack_1a = (uint **)0x0;
          puStack_1c = (undefined1 *)0x1bb4;
          piStack_1e = (int *)0x1f5e;
          piVar7 = (int *)FUN_1def_05d1();
          local_118 = (uint *)*piVar7;
          local_116 = (uint **)piVar7[1];
          ppuStack_c = (uint **)*(undefined2 *)0x9efc;
          puStack_e = (uint *)*(undefined2 *)0x9efa;
          ppuStack_10 = (uint **)*(undefined2 *)0x9ef8;
          pppuStack_12 = (uint ***)*(undefined2 *)0x9f5a;
          ppuStack_14 = (uint **)*(undefined2 *)0x9f58;
          puStack_16 = (uint *)*(undefined2 *)0x9f56;
          uStack_18 = *(uint *)0x9f54;
          ppuStack_1a = (uint **)0x0;
          puStack_1c = (undefined1 *)0x1bb4;
          piStack_1e = (int *)0x1f98;
          piVar7 = (int *)func_0x0001e558();
          local_198 = (uint *)*piVar7;
          local_196 = (uint **)piVar7[1];
          ppuStack_c = (uint **)0x1fb3;
          func_0x000297e6();
          ppuStack_c = (uint **)0x1fb8;
          func_0x00029d78();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x1fc2;
          func_0x000299d1();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x1fcb;
          func_0x000297e6();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x1fd0;
          func_0x00029d78();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x1fda;
          func_0x000299d1();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x1fe3;
          func_0x000297e6();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x1fe8;
          func_0x00029d78();
          func_0x000299d1();
          func_0x000297e6();
          func_0x00029d78();
          local_2a = (uint **)0x22b2;
          ppuVar15 = (uint **)0x22b2;
          local_2c = (uint **)0x200a;
          func_0x000299d1();
        }
        else {
          ppuStack_c = (uint **)uStack_230;
          puStack_e = puStack_232;
          ppuStack_10 = (uint **)puStack_234;
          pppuStack_12 = (uint ***)uStack_21e;
          ppuStack_14 = (uint **)uStack_220;
          puStack_16 = (uint *)uStack_222;
          uStack_18 = uStack_224;
          ppuStack_1a = (uint **)uStack_236;
          puStack_1c = (undefined1 *)uStack_238;
          piStack_1e = (int *)uStack_23a;
          puStack_20 = puStack_23c;
        }
        local_2c = (uint **)0x2051;
        local_2a = ppuVar15;
        FUN_1def_043a();
        ppuStack_c = (uint **)0x205d;
        func_0x000297e6();
        ppuStack_c = (uint **)0x2062;
        func_0x00029d78();
        pppuStack_12 = (uint ***)0x22b2;
        ppuStack_14 = (uint **)0x206c;
        func_0x000299d1();
        pppuStack_12 = (uint ***)0x22b2;
        ppuStack_14 = (uint **)0x2075;
        func_0x000297e6();
        pppuStack_12 = (uint ***)0x22b2;
        ppuStack_14 = (uint **)0x207a;
        func_0x00029d78();
        ppuStack_1a = (uint **)0x22b2;
        puStack_1c = (undefined1 *)0x2084;
        func_0x000299d1();
        ppuStack_1a = (uint **)0x1;
        puStack_1c = (undefined1 *)0x22b2;
        piStack_1e = (int *)0x208d;
        func_0x0001e558();
        ppuStack_c = (uint **)0x2097;
        func_0x000297e6();
        ppuStack_c = (uint **)0x20a0;
        func_0x00029bb5();
        ppuStack_c = (uint **)0x20a9;
        func_0x0002996b();
        ppuStack_c = (uint **)0x20ae;
        func_0x00029d78();
        pppuStack_12 = (uint ***)0x22b2;
        ppuStack_14 = (uint **)0x20b8;
        func_0x000299d1();
        pppuStack_12 = (uint ***)*(undefined2 *)0x9efe;
        ppuStack_14 = (uint **)*(undefined2 *)0x9efc;
        puStack_16 = (uint *)*(undefined2 *)0x9efa;
        uStack_18 = *(uint *)0x9ef8;
        ppuStack_1a = (uint **)0x0;
        puStack_1c = (undefined1 *)0x22b2;
        piStack_1e = (int *)0x20d0;
        piVar7 = (int *)FUN_1def_05d1();
        local_194 = (uint *)*piVar7;
        local_192 = (uint **)piVar7[1];
        ppuStack_c = (uint **)0x20eb;
        func_0x000297e6();
        pppuStack_12 = (uint ***)0x22b2;
        ppuStack_14 = (uint **)0x20f5;
        func_0x000299d1();
        pppuStack_12 = (uint ***)*(undefined2 *)0x9efe;
        ppuStack_14 = (uint **)*(undefined2 *)0x9efc;
        puStack_16 = (uint *)*(undefined2 *)0x9efa;
        uStack_18 = *(uint *)0x9ef8;
        ppuStack_1a = (uint **)0x0;
        puStack_1c = (undefined1 *)0x22b2;
        puVar13 = (uint *)0x1bb4;
        piStack_1e = (int *)0x210d;
        puVar8 = (undefined2 *)func_0x0001e558();
        local_1b0 = (uint *)*puVar8;
        local_1ae = (uint **)puVar8[1];
        *(int *)0xb30c = (int)local_194;
        *(int *)0xb30e = (int)local_192;
        *(undefined2 *)0xb37e = local_1b0;
        *(int *)0xb380 = (int)local_1ae;
        if (uStack_ea == uStack_114) {
          ppuStack_20c = (uint **)*(int *)0x9f5c;
          puStack_20a = (uint *)*(int *)0x9f5e;
          ppuStack_208 = (uint **)*(int *)0x9f60;
          puStack_206 = (uint *)*(int *)0x9f62;
        }
        else {
          lVar19 = uStack_114 - uStack_ea;
          uStack_1a0 = (undefined2)lVar19;
          iStack_19e = (int)((ulong)lVar19 >> 0x10);
          if (0x167ffff < lVar19) {
            iStack_19e = iStack_19e + -0x168;
          }
          if (iStack_19e < 0) {
            iStack_19e = iStack_19e + 0x168;
          }
          ppuStack_c = (uint **)0x21a5;
          func_0x000298b4();
          ppuStack_c = (uint **)0x21ae;
          func_0x00029c2c();
          puVar13 = (uint *)0x22b2;
          ppuStack_c = (uint **)0x21b7;
          func_0x000299d1();
        }
        *(undefined2 *)0xc1e = 0;
        if (local_1c4 == 0) {
          ppuStack_c = (uint **)*(undefined2 *)0x9efc;
          puStack_e = (uint *)*(undefined2 *)0x9efa;
          ppuStack_10 = (uint **)*(undefined2 *)0x9ef8;
          ppuStack_14 = (uint **)0x21e0;
          pppuStack_12 = (uint ***)puVar13;
          func_0x000297e6();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x21e5;
          func_0x00029d78();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x21ef;
          func_0x000299d1();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x21f8;
          func_0x000297e6();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x21fd;
          func_0x00029d78();
          func_0x000299d1();
          FUN_1def_05d1();
          pppuStack_12 = (uint ***)0x1bb4;
          ppuStack_14 = (uint **)0x221a;
          func_0x000297e6();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x221f;
          func_0x00029d78();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x2227;
          func_0x000297e6();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x222c;
          func_0x00029d78();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x2235;
          func_0x00029c2c();
          pppuStack_12 = &ppuStack_20c;
          ppuStack_14 = (uint **)0x22b2;
          puStack_16 = (uint *)0x223f;
          func_0x00029c2c();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x2245;
          func_0x000299b9();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x224e;
          func_0x00029c2c();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x2253;
          FUN_28b3_1163();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x225c;
          func_0x0002996b();
          pppuStack_12 = (uint ***)0x22b2;
          ppuStack_14 = (uint **)0x2261;
          func_0x00029d78();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x226b;
          func_0x000299d1();
          ppuStack_1a = (uint **)0x0;
          puStack_1c = (undefined1 *)0x22b2;
          piStack_1e = (int *)0x2273;
          piVar7 = (int *)FUN_1def_05d1();
          local_194 = (uint *)*piVar7;
          local_192 = (uint **)piVar7[1];
          ppuStack_c = (uint **)*(undefined2 *)0x9efc;
          puStack_e = (uint *)*(undefined2 *)0x9efa;
          ppuStack_10 = (uint **)*(undefined2 *)0x9ef8;
          pppuStack_12 = (uint ***)0x1bb4;
          ppuStack_14 = (uint **)0x229e;
          func_0x000297e6();
          ppuStack_1a = (uint **)0x22b2;
          puStack_1c = (undefined1 *)0x22a8;
          func_0x000299d1();
          ppuStack_1a = (uint **)0x0;
          puStack_1c = (undefined1 *)0x22b2;
          piStack_1e = (int *)0x22b0;
          puVar8 = (undefined2 *)func_0x0001e558();
          local_1b0 = (uint *)*puVar8;
          local_1ae = (uint **)puVar8[1];
          *(int *)0xb30c = (int)local_194;
          *(int *)0xb30e = (int)local_192;
          *(undefined2 *)0xb37e = local_1b0;
          *(int *)0xb380 = (int)local_1ae;
          ppuStack_c = (uint **)0x22e9;
          func_0x00029834();
          ppuStack_c = (uint **)0x22f2;
          func_0x00029983();
          ppuStack_c = (uint **)*(int *)0x1124;
          puStack_e = (uint *)0x22b2;
          ppuStack_10 = (uint **)0x2303;
          func_0x00029834();
          puStack_16 = (uint *)0x22b2;
          puVar13 = (uint *)0x22b2;
          uStack_18 = 0x230d;
          func_0x000299d1();
          uStack_18 = 0;
        }
        else if (*(char *)0x4ea1 == '\0') {
          uStack_18 = 1;
          ppuStack_c = (uint **)0x4;
          puStack_e = puStack_206;
          ppuStack_10 = ppuStack_208;
          pppuStack_12 = (uint ***)puStack_20a;
          ppuStack_14 = ppuStack_20c;
        }
        else {
          ppuStack_c = (uint **)0x0;
          puStack_e = puStack_206;
          ppuStack_10 = ppuStack_208;
          pppuStack_12 = (uint ***)puStack_20a;
          ppuStack_14 = ppuStack_20c;
          uStack_18 = 2;
        }
        puStack_16 = (uint *)local_64;
        pcVar4 = (code *)swi(0x3f);
        (*pcVar4)();
        if ((((*(char *)0x4ea2 == '\0') || (local_1c4 == 0)) && (*(int *)0x158 == 0)) &&
           (ppuVar5 == (uint **)0x0)) {
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029d78();
          func_0x000299d1();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_117c();
          func_0x00029d78();
          ppuStack_10 = (uint **)0x22b2;
          pppuStack_12 = (uint ***)0x2435;
          func_0x000299d1();
          ppuStack_10 = (uint **)0x22b2;
          pppuStack_12 = (uint ***)0x243a;
          FUN_28b3_1582();
          uVar16 = (undefined1 *)0xfff7 < &puStack_e;
          func_0x00029834();
          func_0x000299b9();
          FUN_28b3_1181();
          if ((bool)uVar16) {
            func_0x000297e6();
            func_0x00029c74();
          }
          else {
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
          }
          func_0x000299d1();
          ppuStack_c = (uint **)puStack_232;
          puStack_e = puStack_234;
          ppuStack_10 = (uint **)uStack_21e;
          pppuStack_12 = (uint ***)uStack_220;
          ppuStack_14 = (uint **)uStack_222;
          puStack_16 = (uint *)uStack_224;
          uStack_18 = 0x22b2;
          ppuStack_1a = (uint **)0x24b1;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          ppuStack_1a = (uint **)0x24b6;
          func_0x00029d78();
          puStack_20 = (uint *)0x22b2;
          func_0x000299d1();
          puStack_20 = (uint *)0x22b2;
          func_0x000297e6();
          puStack_20 = (uint *)0x22b2;
          func_0x00029d78();
          local_2a = (uint **)0x24d8;
          func_0x000299d1();
          puVar13 = (uint *)0x1bb4;
          local_2a = (uint **)0x24dd;
          FUN_1def_043a();
          ppuVar5 = (uint **)*(int *)0x9efe;
          ppuStack_c = (uint **)*(int *)0x9efa;
          puStack_e = (uint *)*(int *)0x9ef8;
          ppuStack_10 = ppuStack_216;
          pppuStack_12 = (uint ***)puStack_218;
          ppuStack_14 = ppuStack_21a;
          puStack_16 = puStack_21c;
          uStack_18 = *(uint *)0x9efe;
          ppuStack_1a = (uint **)*(int *)0x9efc;
          puStack_1c = (undefined1 *)*(int *)0x9efa;
          piStack_1e = (int *)*(int *)0x9ef8;
          puStack_20 = puStack_20e;
          pcVar4 = (code *)swi(0x3f);
          iVar6 = (*pcVar4)();
          if (iVar6 != 0) {
            uVar20 = uVar20 + 1;
          }
          if (uStack_ea != uStack_114) {
            ppuStack_c = (uint **)uStack_23a;
            puStack_e = puStack_23c;
            ppuStack_10 = (uint **)uStack_226;
            pppuStack_12 = (uint ***)uStack_228;
            ppuStack_14 = (uint **)uStack_22a;
            puStack_16 = (uint *)uStack_22c;
            uStack_18 = 0x1bb4;
            ppuStack_1a = (uint **)0x256f;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            ppuStack_1a = (uint **)0x2574;
            func_0x00029d78();
            puStack_20 = (uint *)0x22b2;
            func_0x000299d1();
            puStack_20 = (uint *)0x22b2;
            func_0x000297e6();
            puStack_20 = (uint *)0x22b2;
            func_0x00029d78();
            local_2a = (uint **)0x2596;
            func_0x000299d1();
            puVar13 = (uint *)0x1bb4;
            local_2a = (uint **)0x259b;
            FUN_1def_043a();
            ppuVar5 = (uint **)*(int *)0x9efe;
            ppuStack_c = (uint **)*(int *)0x9efa;
            puStack_e = (uint *)*(int *)0x9ef8;
            ppuStack_10 = ppuStack_216;
            pppuStack_12 = (uint ***)puStack_218;
            ppuStack_14 = ppuStack_21a;
            puStack_16 = puStack_21c;
            uStack_18 = *(uint *)0x9efe;
            ppuStack_1a = (uint **)*(int *)0x9efc;
            puStack_1c = (undefined1 *)*(int *)0x9efa;
            piStack_1e = (int *)*(int *)0x9ef8;
            puStack_20 = puStack_20e;
            pcVar4 = (code *)swi(0x3f);
            iVar6 = (*pcVar4)();
            if (iVar6 != 0) {
              uVar20 = uVar20 + 1;
            }
          }
        }
      }
LAB_3ab8_7a6d:
      local_d6 = 1;
      lVar19 = local_124;
    }
    goto LAB_3ab8_5d65;
  }
LAB_3ab8_67ec:
  puStack_e = (uint *)0x1379;
  ppuStack_c = (uint **)puVar14;
  FUN_1000_0599();
  puVar13 = (uint *)0x11f2;
  ppuStack_c = (uint **)0x1384;
  func_0x00012276();
  *(undefined2 *)0xc22 = 1;
  ppuVar5 = (uint **)0x396;
  lVar19 = local_19c;
  goto LAB_3ab8_62e5;
LAB_3ab8_6cec:
  if (local_106 != (uint **)0x0) {
    ppuStack_c = local_106;
    puStack_e = (uint *)0x885;
    puVar13 = (uint *)0x11f2;
    ppuStack_10 = (uint **)0x1886;
    iVar6 = func_0x00015409();
    if (iVar6 != 0) {
LAB_3ab8_6d10:
      if (*(int *)0x158 != 0) {
        return;
      }
LAB_3ab8_6d9c:
      if (*(int *)0x158 != 0) goto LAB_3ab8_6d3e;
      pcVar4 = (code *)swi(0x3f);
      (*pcVar4)();
      *(undefined2 *)0xc20 = 1;
      ppuStack_c = (uint **)0x1;
      ppuStack_10 = (uint **)0x194e;
      puStack_e = puVar13;
      local_1dc = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      uVar21 = 0x1bb4;
      puVar13 = (uint *)0x885;
      uVar20 = 0x1960;
      func_0x0000c3ca();
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_1dc != -1) goto LAB_3ab8_6d1d;
      if ((*(char *)0x4ea2 != '\0') && (ppuVar5 = &local_1be, lVar19 = local_19c, local_1c4 != 0))
      goto LAB_3ab8_62e5;
    }
  }
  goto LAB_3ab8_6c86;
LAB_3ab8_6d1d:
  if (local_106 != (uint **)0x0) {
    ppuStack_c = local_106;
    puStack_e = (uint *)0x885;
    puVar13 = (uint *)0x11f2;
    ppuStack_10 = (uint **)0x18b7;
    iVar6 = func_0x00015409();
    if (iVar6 != 0) {
LAB_3ab8_6d3e:
      uVar16 = *(int *)0x158 == 0;
      if (!(bool)uVar16) {
        return;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar16) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar16) {
          ppuStack_c = (uint **)0x22b2;
          puStack_e = (uint *)0x190a;
          FUN_1000_0599();
          puVar13 = (uint *)0x11f2;
          ppuStack_c = (uint **)0x1915;
          func_0x00012276();
          *(undefined2 *)0xc22 = 1;
          goto LAB_3ab8_6d9c;
        }
      }
      puVar14 = (uint *)0x22b2;
      goto LAB_3ab8_6b45;
    }
  }
  goto LAB_3ab8_6d9c;
LAB_3ab8_666a:
  if (local_106 != (uint **)0x0) {
    ppuVar5 = &local_198;
    ppuStack_c = local_106;
    puStack_e = (uint *)0x885;
    puVar13 = (uint *)0x11f2;
    ppuStack_10 = (uint **)0x1207;
    iVar6 = func_0x00015409();
    if (iVar6 == 0) goto LAB_3ab8_65cb;
LAB_3ab8_6691:
    if (*(int *)0x158 != 0) {
      return;
    }
    if ((*(char *)0x4ea2 == '\0') || (lVar19 = local_19c, local_1c4 == 0)) {
      uVar16 = 1;
      func_0x000297e6();
      func_0x000297e6();
      puVar13 = (uint *)0x22b2;
      FUN_28b3_1181();
      ppuVar5 = (uint **)0x22b2;
      lVar19 = local_19c;
      if (!(bool)uVar16) goto LAB_3ab8_62e5;
      func_0x000297e6();
      func_0x000297e6();
      puVar13 = (uint *)0x22b2;
      FUN_28b3_1181();
      ppuVar5 = (uint **)0x22b2;
      lVar19 = local_19c;
      if (!(bool)uVar16) goto LAB_3ab8_62e5;
      ppuStack_c = (uint **)0x22b2;
      puStack_e = (uint *)0x126b;
      FUN_1000_0599();
      ppuVar5 = (uint **)0x396;
      puVar13 = (uint *)0x11f2;
      ppuStack_c = (uint **)0x1276;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      goto LAB_3ab8_65cb;
    }
    goto LAB_3ab8_62e5;
  }
  goto LAB_3ab8_65cb;
}



/* 4000:25fc  FUN_4000_25fc  2389 bytes, 0 callers */

void __cdecl16far FUN_4000_25fc(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 ******ppppppuVar3;
  char cVar4;
  undefined2 ******ppppppuVar5;
  undefined2 ******ppppppuVar6;
  undefined2 ******ppppppuVar7;
  bool bVar8;
  code *pcVar9;
  undefined2 *****pppppuVar10;
  undefined2 *****pppppuVar11;
  undefined2 *****pppppuVar12;
  undefined2 *****pppppuVar13;
  int iVar14;
  int *piVar15;
  undefined2 *puVar16;
  undefined2 uVar17;
  undefined2 ******ppppppuVar18;
  undefined2 ******ppppppuVar19;
  undefined2 uVar20;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar21;
  undefined1 uVar22;
  long lVar23;
  undefined2 *puVar24;
  undefined4 uVar25;
  undefined2 *****pppppuStack_17e;
  undefined2 *****pppppuStack_17c;
  undefined2 *****pppppuStack_172;
  undefined2 *****pppppuStack_170;
  undefined2 ****local_16e [50];
  undefined2 uStack_10a;
  undefined2 *****pppppuStack_108;
  undefined2 *****local_106;
  undefined2 *****local_104;
  undefined2 *****local_102;
  undefined2 *****local_100;
  undefined2 *****pppppuStack_fe;
  undefined2 *****pppppuStack_fc;
  undefined2 *****local_fa;
  undefined2 *****local_f8;
  undefined2 *****local_de;
  undefined2 *****local_dc;
  undefined2 *****local_da;
  undefined2 *****local_d8;
  undefined2 *****pppppuStack_d6;
  undefined2 *****pppppuStack_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined2 ****local_ce [50];
  undefined2 *****local_6a;
  undefined2 *****local_68;
  int local_66;
  int local_64;
  undefined4 local_62;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 *****local_56;
  undefined2 *****local_54;
  undefined2 *****local_52;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 *****local_3e;
  undefined2 *****local_3c;
  undefined2 *****local_3a;
  undefined2 *****local_38;
  int local_1e;
  undefined2 local_1c;
  undefined2 *****local_1a;
  undefined2 *****local_18;
  undefined2 *****local_16;
  undefined2 *****local_14;
  undefined2 *****pppppuStack_10;
  undefined2 *****local_e;
  undefined2 *****pppppuStack_c;
  int iVar26;
  
  uVar20 = 0x22b2;
  FUN_21f2_0ebc();
  iVar26 = 0;
  local_64 = 0;
  local_1e = 0;
  local_50 = *(undefined2 *)0x9f6c;
  uStack_4e = *(undefined2 *)0x9f6e;
  uStack_4c = *(undefined2 *)0x9f70;
  uStack_4a = *(undefined2 *)0x9f72;
  local_16e[0]._0_1_ = 0;
LAB_3ab8_7ab9:
  do {
    while( true ) {
      while( true ) {
        if (*(int *)0xc22 == 0) {
          func_0x000297e6();
          func_0x00029d78();
          pppppuStack_10 = (undefined2 *****)0x22b2;
          func_0x000299d1();
          pppppuStack_10 = (undefined2 *****)0x4ea3;
          local_14 = (undefined2 *****)0x22b2;
          local_16 = (undefined2 ******)0x2666;
          FUN_21f2_3454();
          pppppuStack_c = (undefined2 *****)0x2;
          local_e = (undefined2 *****)0x3e;
          pppppuStack_10 = local_ce;
          uVar20 = 0xdef;
          local_14 = (undefined2 *****)0x2683;
          FUN_1000_02b5();
          *(undefined2 *)0xc22 = 1;
          if (iVar26 != 0) {
            pppppuStack_c = (undefined2 *****)0x2;
            local_e = (undefined2 *****)0x12;
            pppppuStack_10 = local_16e;
            uVar20 = 0xdef;
            local_14 = (undefined2 *****)0x26ac;
            FUN_1000_02b5();
          }
        }
        local_e = (undefined2 *****)0x26bd;
        pppppuStack_c = (undefined2 *****)uVar20;
        FUN_21f2_3454();
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x26cd;
        FUN_21f2_2d26();
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x26dd;
        FUN_21f2_2d26();
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x26f9;
        FUN_21f2_2d26();
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x2709;
        FUN_21f2_2d26();
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x2725;
        FUN_21f2_2d26();
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x2735;
        FUN_21f2_2d26();
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x2745;
        FUN_21f2_2d26();
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x2755;
        FUN_21f2_2d26();
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x2765;
        FUN_21f2_2d26();
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x2775;
        FUN_1def_07a4();
        if (iVar26 == 0) {
          local_52 = (undefined2 ******)0x2710;
        }
        else {
          local_52 = (undefined2 ******)0x270f;
        }
        *(undefined2 *)0xc2c = 1;
        if (*(int *)0xce6 == 0) {
          *(undefined2 *)0xc1a = 1;
        }
        else {
          *(undefined2 *)0xc1a = 0;
        }
        pppppuStack_c = &local_6a;
        local_e = local_ce;
        pppppuStack_10 = local_52;
        local_14 = (undefined2 *****)0x27be;
        iVar14 = FUN_1def_0904();
        *(undefined2 *)0xc2c = 0;
        *(undefined2 *)0xc1a = 0;
        uVar20 = 0x885;
        func_0x0000c3ca();
        if (*(int *)0x158 != 0) {
          return;
        }
        if ((*(int *)0xc18 != -2) || (*(byte *)0x126 < 3)) break;
        iVar26 = 0;
        pppppuStack_c = local_68;
        local_e = local_6a;
        pcVar9 = (code *)swi(0x3f);
        (*pcVar9)();
      }
      if (*(int *)0xc18 == 0) break;
      iVar26 = 0;
      func_0x000297e6();
      func_0x00029d78();
      pppppuStack_10 = (undefined2 *****)0x22b2;
      func_0x000299d1();
      pppppuStack_10 = (undefined2 *****)0x22b2;
      func_0x000297e6();
      pppppuStack_10 = (undefined2 ******)0x22b2;
      func_0x00029d78();
      local_18 = (undefined2 *****)0x22b2;
      local_1a = (undefined2 *****)0x2843;
      func_0x000299d1();
      local_18 = (undefined2 ******)0x22b2;
      uVar20 = 0x3bf;
      local_1a = (undefined2 ******)0x2848;
      func_0x0000507a();
    }
    if (iVar14 == 0x14) {
      return;
    }
    if ((iVar14 == -1) && (iVar26 != 0)) {
      for (; 0 < iVar26; iVar26 = iVar26 + -1) {
        local_46 = *(undefined2 *)0x148;
        local_44 = *(undefined2 *)0x14a;
        pppppuStack_c = (undefined2 *****)0x2885;
        func_0x0000daa6();
        pppppuStack_c = (undefined2 ******)0x885;
        local_e = (undefined2 ******)0x2891;
        func_0x00018779();
      }
      while (0 < local_64) {
        local_64 = local_64 + -1;
        local_48 = *(undefined2 *)0x152;
        pppppuStack_c = (undefined2 *****)0x28ac;
        func_0x0000daa6();
        pppppuStack_c = (undefined2 ******)0x28b5;
        FUN_1def_186d();
      }
      if (local_1e != 0) {
        local_48 = *(undefined2 *)0x150;
        local_1e = 0;
        pppppuStack_c = (undefined2 *****)0x28d3;
        func_0x0000daa6();
        pppppuStack_c = (undefined2 ******)0x28dc;
        func_0x000190c7();
      }
      func_0x0000abfa();
      pppppuStack_c = (undefined2 ******)0x28eb;
      func_0x0000b1d8();
    }
    if (iVar14 == 1) {
      local_66 = 0;
      *(char *)0x4ee8 = '\x01' - *(char *)0x4ee8;
    }
    if (iVar14 == 2) {
      local_66 = 0;
      *(char *)0x4ee9 = '\x01' - *(char *)0x4ee9;
    }
    if (iVar14 == 3) {
      uVar20 = 0x885;
      func_0x0000c3ca();
      pcVar9 = (code *)swi(0x3f);
      iVar14 = (*pcVar9)();
      if (iVar14 == -1) goto LAB_3ab8_7ab9;
      if (*(int *)0x158 != 0) {
        return;
      }
      local_66 = 0;
    }
    uVar20 = 0x885;
    if (local_66 != 0) {
      func_0x000297e6();
      func_0x00029d78();
      pppppuStack_10 = (undefined2 *****)0x22b2;
      func_0x000299d1();
      pppppuStack_10 = (undefined2 *****)0x22b2;
      func_0x000297e6();
      pppppuStack_10 = (undefined2 ******)0x22b2;
      func_0x00029d78();
      local_18 = (undefined2 *****)0x22b2;
      local_1a = (undefined2 *****)0x298c;
      func_0x000299d1();
      local_18 = (undefined2 ******)0x22b2;
      local_1a = (undefined2 ******)0x2991;
      lVar23 = func_0x0001765f();
      local_62 = lVar23;
      if (lVar23 < 0) {
        uVar21 = local_66 == 1;
        bVar8 = !(bool)uVar21;
        func_0x0000c3ca();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        uVar22 = false;
        if ((bool)uVar21) {
          uVar22 = *(int *)0xcb6 == 0;
          if ((bool)uVar22) {
            uVar20 = *(undefined2 *)0x9ee6;
            *(undefined2 *)0xb76a = *(undefined2 *)0x9ee4;
            *(undefined2 *)0xb76c = uVar20;
            uVar20 = *(undefined2 *)0x9ea4;
            uVar17 = *(undefined2 *)0x9ea6;
          }
          else {
            uVar20 = *(undefined2 *)0xcbc;
            *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
            *(undefined2 *)0xb76c = uVar20;
            uVar20 = *(undefined2 *)0xcbe;
            uVar17 = *(undefined2 *)0xcc0;
          }
          *(undefined2 *)0xb784 = uVar20;
          *(undefined2 *)0xb786 = uVar17;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        uVar21 = 0;
        if ((bool)uVar22) {
          uVar21 = *(int *)0xcb6 == 0;
          if ((bool)uVar21) {
            uVar20 = *(undefined2 *)0x9ea6;
            *(undefined2 *)0xb76a = *(undefined2 *)0x9ea4;
            *(undefined2 *)0xb76c = uVar20;
            uVar20 = *(undefined2 *)0x9ee4;
            uVar17 = *(undefined2 *)0x9ee6;
          }
          else {
            func_0x000297e6();
            func_0x00029af6();
            func_0x00029983();
            uVar20 = *(undefined2 *)0xcba;
            uVar17 = *(undefined2 *)0xcbc;
          }
          *(undefined2 *)0xb784 = uVar20;
          *(undefined2 *)0xb786 = uVar17;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar21) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar21) goto LAB_3ab8_7f3b;
        }
        else {
LAB_3ab8_7f3b:
          if (*(int *)0xcb6 == 0) {
            func_0x000297e6();
          }
          else {
            func_0x000297e6();
            func_0x00029bb5();
          }
          func_0x00029d78();
          func_0x00029c2c();
          func_0x000299d1();
          pppppuStack_c = (undefined2 *****)local_5c;
          local_e = (undefined2 *****)local_5e;
          pppppuStack_10 = (undefined2 *****)0x22b2;
          func_0x0002a11e();
          func_0x00029834();
          func_0x00029983();
          pppppuStack_c = (undefined2 *****)local_5c;
          local_e = (undefined2 *****)local_5e;
          pppppuStack_10 = (undefined2 ******)0x22b2;
          func_0x0002a10c();
          func_0x00029834();
          func_0x00029983();
        }
        iVar26 = 0;
        local_64 = 0;
        local_1e = 0;
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x2b5b;
        puVar24 = (undefined2 *)func_0x00000271();
        puVar16 = (undefined2 *)puVar24;
        ppppppuVar18 = &local_3e;
        for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
          ppppppuVar3 = ppppppuVar18;
          ppppppuVar18 = ppppppuVar18 + 1;
          puVar2 = puVar16;
          puVar16 = puVar16 + 1;
          *ppppppuVar3 = (undefined2 *****)*puVar2;
        }
        *(int *)0xb30c = (int)local_3e;
        *(int *)0xb30e = (int)local_3c;
        *(int *)0xb37e = (int)local_3a;
        *(int *)0xb380 = (int)local_38;
        local_1a = local_3e;
        local_18 = local_3c;
        local_16 = local_3a;
        local_14 = local_38;
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029bb5();
        func_0x00029983();
        pppppuStack_c = (undefined2 *****)0x22b2;
        local_e = (undefined2 *****)0x2bec;
        puVar24 = (undefined2 *)func_0x0000013f();
        puVar16 = (undefined2 *)puVar24;
        ppppppuVar18 = &local_1a;
        for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
          puVar2 = puVar16;
          puVar16 = puVar16 + 1;
          ppppppuVar3 = ppppppuVar18;
          ppppppuVar18 = ppppppuVar18 + 1;
          *puVar2 = *ppppppuVar3;
        }
        pppppuStack_c = &local_de;
        local_e = &local_6a;
        pppppuStack_10 = local_62._2_2_;
        local_14 = (undefined2 *****)0x0;
        local_16 = (undefined2 ******)0x0;
        local_18 = (undefined2 *****)0x0;
        local_1a = (undefined2 *****)0x2c24;
        FUN_1def_2b59();
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029d78();
        pppppuStack_10 = (undefined2 *****)0x22b2;
        func_0x000299d1();
        pppppuStack_10 = (undefined2 *****)0x22b2;
        func_0x000297e6();
        pppppuStack_10 = (undefined2 ******)0x22b2;
        func_0x00029d78();
        local_18 = (undefined2 *****)0x22b2;
        local_1a = (undefined2 *****)0x2c5f;
        func_0x000299d1();
        local_18 = (undefined2 ******)0x1;
        local_1a = (undefined2 ******)0x22b2;
        local_1c = 0x2c68;
        FUN_1def_05d1();
        uVar22 = (undefined1 *)0xffed < &local_18;
        uVar21 = &stack0x0000 == (undefined1 *)0x6;
        func_0x000297e6();
        FUN_28b3_1181();
        pppppuVar13 = local_68;
        pppppuVar12 = local_6a;
        pppppuVar11 = local_dc;
        pppppuVar10 = local_de;
        if (!(bool)uVar22 && !(bool)uVar21) {
          local_6a = local_da;
          local_68 = local_d8;
          local_da = pppppuVar12;
          local_d8 = pppppuVar13;
          local_56 = local_de;
          local_54 = local_dc;
          local_de = local_102;
          local_dc = local_100;
          local_102 = pppppuVar10;
          local_100 = pppppuVar11;
        }
        uVar22 = 0;
        uVar21 = !bVar8;
        if ((bool)uVar21) {
          local_6a = local_3e;
          local_68 = local_3c;
          local_de = local_3a;
          local_dc = local_38;
        }
        else {
          *(int *)0xb30c = (int)local_6a;
          *(int *)0xb30e = (int)local_68;
          *(int *)0xb37e = (int)local_de;
          *(int *)0xb380 = (int)local_dc;
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
        func_0x00029b55();
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
        func_0x000297e6();
        func_0x000297e6();
        uVar20 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar22 && !(bool)uVar21) {
          func_0x000297e6();
          func_0x00029d78();
          pppppuStack_10 = (undefined2 *****)0x22b2;
          func_0x000299d1();
          pppppuStack_10 = (undefined2 *****)0x22b2;
          FUN_28b3_1582();
          func_0x00029834();
          uVar20 = 0x22b2;
          func_0x00029983();
          local_1c = 1;
          local_d2 = *(undefined2 *)0x9ea4;
          local_d0 = *(undefined2 *)0x9ea6;
          if (*(char *)0x4ee9 != '\0') {
            local_1c = 0;
            *(int *)0xb30c = (int)local_da;
            *(int *)0xb30e = (int)local_d8;
            *(int *)0xb37e = (int)local_102;
            *(int *)0xb380 = (int)local_100;
            if (*(char *)0x4ee8 == '\0') {
              func_0x000297e6();
              func_0x00029d78();
            }
            else {
              func_0x000297e6();
              func_0x00029d78();
            }
            func_0x00029c2c();
            func_0x00029b85();
            func_0x00029983();
            pppppuStack_c = (undefined2 *****)*(undefined2 *)0x9efa;
            local_e = (undefined2 *****)*(undefined2 *)0x9ef8;
            pppppuStack_10 = (undefined2 *****)0x22b2;
            func_0x000297e6();
            local_18 = (undefined2 *****)0x22b2;
            local_1a = (undefined2 *****)0x2ecb;
            func_0x000299d1();
            local_18 = (undefined2 *****)0x0;
            local_1a = (undefined2 *****)0x22b2;
            local_1c = 0x2ed3;
            piVar15 = (int *)FUN_1def_05d1();
            local_fa = (undefined2 *****)*piVar15;
            local_f8 = (undefined2 *****)piVar15[1];
            pppppuStack_c = (undefined2 *****)*(undefined2 *)0x9efa;
            local_e = (undefined2 *****)*(undefined2 *)0x9ef8;
            pppppuStack_10 = (undefined2 *****)0x1bb4;
            func_0x000297e6();
            local_18 = (undefined2 *****)0x22b2;
            local_1a = (undefined2 *****)0x2f08;
            func_0x000299d1();
            local_18 = (undefined2 ******)0x0;
            local_1a = (undefined2 ******)0x22b2;
            uVar20 = 0x1bb4;
            local_1c = 0x2f10;
            piVar15 = (int *)func_0x0001e558();
            local_106 = (undefined2 *****)*piVar15;
            local_104 = (undefined2 *****)piVar15[1];
            *(int *)0xb30c = (int)local_fa;
            *(int *)0xb30e = (int)local_f8;
            *(int *)0xb37e = (int)local_106;
            *(int *)0xb380 = (int)local_104;
          }
          if (bVar8) {
            *(undefined2 *)0xc1e = 0xffff;
          }
          else {
            *(undefined2 *)0xc1e = 1;
          }
          local_e = (undefined2 *****)0x2f64;
          pppppuStack_c = (undefined2 *****)uVar20;
          func_0x000297e6();
          pppppuStack_c = (undefined2 *****)0x22b2;
          local_e = (undefined2 *****)0x2f69;
          func_0x00029d78();
          local_14 = (undefined2 *****)0x22b2;
          local_16 = (undefined2 *****)0x2f73;
          func_0x000299d1();
          local_14 = local_16e;
          local_16 = (undefined2 *****)0x0;
          pcVar9 = (code *)swi(0x3f);
          iVar26 = (*pcVar9)();
          if (iVar26 != 0) {
            local_1e = local_1e + 1;
          }
          *(int *)0xb30c = (int)local_6a;
          *(int *)0xb30e = (int)local_68;
          *(int *)0xb37e = (int)local_de;
          *(int *)0xb380 = (int)local_dc;
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x00029b85();
          func_0x00029af6();
          func_0x0002996b();
          func_0x00029983();
          pppppuStack_c = (undefined2 *****)0x22b2;
          local_e = (undefined2 *****)0x2ff5;
          func_0x000297e6();
          pppppuStack_c = (undefined2 *****)0x22b2;
          local_e = (undefined2 *****)0x2ffa;
          func_0x00029d78();
          local_14 = (undefined2 *****)0x22b2;
          local_16 = (undefined2 *****)0x3004;
          func_0x000299d1();
          *(undefined2 *)0xc1e = 0;
          local_14 = (undefined2 *****)0x0;
          local_16 = (undefined2 *****)0x22b2;
          local_18 = (undefined2 *****)0x300f;
          piVar15 = (int *)FUN_1def_05d1();
          pppppuStack_d6 = (undefined2 *****)*piVar15;
          pppppuStack_d4 = (undefined2 *****)piVar15[1];
          pppppuStack_c = (undefined2 *****)0x1bb4;
          local_e = (undefined2 *****)0x3039;
          func_0x000297e6();
          pppppuStack_c = (undefined2 *****)0x22b2;
          local_e = (undefined2 *****)0x303e;
          func_0x00029d78();
          local_14 = (undefined2 *****)0x22b2;
          local_16 = (undefined2 *****)0x3048;
          func_0x000299d1();
          local_14 = (undefined2 *****)0x0;
          local_16 = (undefined2 *****)0x22b2;
          local_18 = (undefined2 *****)0x3050;
          piVar15 = (int *)func_0x0001e558();
          pppppuStack_fe = (undefined2 *****)*piVar15;
          pppppuStack_fc = (undefined2 *****)piVar15[1];
          *(int *)0xb30c = (int)local_da;
          *(int *)0xb30e = (int)local_d8;
          *(int *)0xb37e = (int)local_102;
          *(int *)0xb380 = (int)local_100;
          pppppuStack_c = (undefined2 *****)0x1bb4;
          local_e = (undefined2 *****)0x3098;
          func_0x000297e6();
          pppppuStack_c = (undefined2 *****)0x22b2;
          local_e = (undefined2 *****)0x309d;
          func_0x00029af6();
          pppppuStack_c = (undefined2 *****)0x22b2;
          local_e = (undefined2 *****)0x30a5;
          func_0x0002996b();
          pppppuStack_c = (undefined2 *****)0x22b2;
          local_e = (undefined2 *****)0x30aa;
          func_0x00029d78();
          local_14 = (undefined2 *****)0x22b2;
          local_16 = (undefined2 *****)0x30b4;
          func_0x000299d1();
          local_14 = (undefined2 *****)0x0;
          local_16 = (undefined2 *****)0x22b2;
          local_18 = (undefined2 *****)0x30bc;
          puVar16 = (undefined2 *)FUN_1def_05d1();
          uStack_10a = *puVar16;
          pppppuStack_108 = (undefined2 *****)puVar16[1];
          pppppuStack_c = (undefined2 *****)0x1bb4;
          local_e = (undefined2 *****)0x30e6;
          func_0x000297e6();
          local_14 = (undefined2 *****)0x22b2;
          local_16 = (undefined2 *****)0x30f0;
          func_0x000299d1();
          local_14 = (undefined2 *****)0x0;
          local_16 = (undefined2 *****)0x22b2;
          local_18 = (undefined2 *****)0x30f8;
          piVar15 = (int *)func_0x0001e558();
          ppppppuVar18 = (undefined2 ******)*piVar15;
          ppppppuVar19 = (undefined2 ******)piVar15[1];
          func_0x000297e6();
          func_0x00029bb5();
          func_0x0002996b();
          func_0x00029983();
          pppppuStack_c = (undefined2 *****)0x22b2;
          local_e = (undefined2 *****)0x3146;
          func_0x000297e6();
          pppppuStack_c = (undefined2 *****)0x22b2;
          local_e = (undefined2 *****)0x314b;
          func_0x00029d78();
          local_14 = (undefined2 *****)0x22b2;
          local_16 = (undefined2 *****)0x3155;
          func_0x000299d1();
          local_14 = (undefined2 *****)0x0;
          local_16 = (undefined2 *****)0x22b2;
          local_18 = (undefined2 *****)0x315d;
          iVar26 = FUN_1def_05d1();
          ppppppuVar5 = (undefined2 ******)*(int *)(iVar26 + 2);
          pppppuStack_c = (undefined2 *****)0x1bb4;
          local_e = (undefined2 *****)0x3187;
          func_0x000297e6();
          pppppuStack_c = (undefined2 *****)0x22b2;
          local_e = (undefined2 *****)0x318c;
          func_0x00029d78();
          local_14 = (undefined2 *****)0x22b2;
          local_16 = (undefined2 *****)0x3196;
          func_0x000299d1();
          local_14 = (undefined2 *****)0x0;
          local_16 = (undefined2 *****)0x22b2;
          local_18 = (undefined2 *****)0x319e;
          piVar15 = (int *)func_0x0001e558();
          ppppppuVar6 = (undefined2 ******)*piVar15;
          ppppppuVar7 = (undefined2 ******)piVar15[1];
          pcVar9 = (code *)swi(0x3f);
          (*pcVar9)();
          pcVar9 = (code *)swi(0x3f);
          (*pcVar9)();
          if (*(char *)0x4ee9 == '\0') {
            local_1a = local_6a;
            local_18 = local_68;
            local_16 = local_de;
            local_14 = local_dc;
            pppppuStack_10 = local_d8;
            local_e = local_102;
            pppppuStack_c = local_100;
            if (*(char *)0x4ee8 != '\0') {
              pppppuStack_10 = pppppuStack_108;
              cVar4 = bVar8;
              local_e = ppppppuVar18;
              pppppuStack_c = ppppppuVar19;
              goto LAB_3ab8_86fc;
            }
          }
          else {
            local_1a = local_6a;
            local_18 = local_68;
            local_16 = local_de;
            local_14 = local_dc;
            pppppuStack_10 = ppppppuVar5;
            local_e = ppppppuVar6;
            pppppuStack_c = ppppppuVar7;
            if (bVar8) {
              cVar4 = *(char *)0x4ee8;
LAB_3ab8_86fc:
              local_14 = local_dc;
              local_16 = local_de;
              local_18 = local_68;
              local_1a = local_6a;
              if (cVar4 != '\0') {
                local_1a = pppppuStack_d6;
                local_18 = pppppuStack_d4;
                local_16 = pppppuStack_fe;
                local_14 = pppppuStack_fc;
              }
            }
          }
          func_0x0000daa6();
          ppppppuVar19 = &pppppuStack_10;
          ppppppuVar18 = &local_1a;
          for (iVar26 = 0xb; iVar26 != 0; iVar26 = iVar26 + -1) {
            puVar24 = ppppppuVar19;
            ppppppuVar19 = ppppppuVar19 + 1;
            ppppppuVar3 = ppppppuVar18;
            ppppppuVar18 = ppppppuVar18 + 1;
            *puVar24 = *ppppppuVar3;
          }
          local_14 = (undefined2 *****)0x32b7;
          iVar26 = FUN_17a6_0cba();
          if (0 < iVar26) {
            uVar25 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar25 + 0x15);
            *pbVar1 = *pbVar1 | 0x20;
          }
          local_fa = local_6a;
          local_f8 = local_68;
          local_106 = local_de;
          local_104 = local_dc;
          func_0x000297e6();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x0002996b();
          FUN_28b3_0ee9();
          if (bVar8) {
            if (*(char *)0x4ee8 != '\0') {
              func_0x000297e6();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029983();
              pppppuStack_172 = local_6a;
              pppppuStack_170 = local_68;
              pppppuStack_17e = local_de;
              pppppuStack_17c = local_dc;
            }
            *(int *)0xb30c = (int)local_fa;
            *(int *)0xb30e = (int)local_f8;
            *(int *)0xb37e = (int)local_106;
            *(int *)0xb380 = (int)local_104;
            pcVar9 = (code *)swi(0x3f);
            (*pcVar9)();
            *(int *)0xb30c = (int)pppppuStack_172;
            *(int *)0xb30e = (int)pppppuStack_170;
            *(int *)0xb37e = (int)pppppuStack_17e;
            *(int *)0xb380 = (int)pppppuStack_17c;
LAB_3ab8_8896:
            iVar26 = *(int *)0x9f8e;
          }
          else {
            *(int *)0xb30c = (int)pppppuStack_172;
            *(int *)0xb30e = (int)pppppuStack_170;
            *(int *)0xb37e = (int)pppppuStack_17e;
            *(int *)0xb380 = (int)pppppuStack_17c;
            if (*(char *)0x4ee8 == '\0') goto LAB_3ab8_8896;
            iVar26 = *(int *)0x9eea;
          }
          pcVar9 = (code *)swi(0x3f);
          iVar14 = (*pcVar9)();
          iVar26 = iVar26 + iVar14;
          uVar20 = 0x885;
          func_0x0000abfa();
          if (*(int *)0xce6 != 0) {
            return;
          }
        }
      }
      else {
        pppppuStack_c = (undefined2 *****)0x11f2;
        local_e = (undefined2 ******)0x29f9;
        FUN_1000_0599();
        uVar20 = 0x11f2;
        pppppuStack_c = (undefined2 ******)0x2a04;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
      }
    }
  } while( true );
}


