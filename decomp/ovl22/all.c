/* Ghidra decompilation of jw22.exe - machine output, not the original source. */

/* 3ab8:0000  OVL_0000  235 bytes, 1 callers */

void __cdecl16far OVL_0000(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 local_22 [18];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  puStack_6 = (undefined1 *)0xab8b;
  FUN_21f2_0ebc();
  uStack_4 = 1;
  puStack_6 = (undefined1 *)0x22b2;
  uVar3 = 0x11f2;
  puStack_8 = (undefined1 *)0xab94;
  func_0x00011f2c();
  if ((*(byte *)0x129 < 10) || (*(byte *)0xb782 < 4)) {
    uStack_4 = 0x11f2;
    puStack_6 = (undefined1 *)0xaba8;
    func_0x0000c354();
    uStack_4 = *(undefined2 *)0x1b40;
    puStack_6 = (undefined1 *)*(undefined2 *)0x1b3e;
    puStack_8 = (undefined1 *)(*(int *)0xa5a + 1);
    uStack_a = 0;
    puStack_c = (undefined1 *)0x885;
    uStack_e = 0xabbd;
    func_0x0000a76b();
    uStack_4 = 0x885;
    uVar3 = 0x885;
    puStack_6 = (undefined1 *)0xabc5;
    func_0x0000a799();
  }
  uStack_4 = 1;
  puStack_6 = (undefined1 *)0x1;
  uStack_a = 0xabcf;
  puStack_8 = (undefined1 *)uVar3;
  FUN_1000_0599();
  uStack_4 = 0xdef;
  puStack_6 = (undefined1 *)0xabd6;
  func_0x00010526();
  uStack_4 = 1;
  puStack_6 = (undefined1 *)0x12;
  puStack_8 = (undefined1 *)0xdef;
  uStack_a = 0xabe3;
  FUN_1000_0599();
  uStack_4 = 0x83c;
  puStack_6 = (undefined1 *)0x60a;
  puStack_8 = (undefined1 *)0x50ac;
  uStack_a = 0xdef;
  puStack_c = (undefined1 *)0xabf6;
  func_0x00012276();
  local_22[0] = 0;
  uStack_4 = *(undefined2 *)0xb310;
  puStack_6 = local_22;
  puStack_8 = (undefined1 *)0x11f2;
  uStack_a = 0xac0a;
  FUN_10ad_20a9();
  puStack_6 = (undefined1 *)0x11f2;
  puStack_8 = (undefined1 *)0xac11;
  func_0x00002ca6();
  puStack_6 = (undefined1 *)0x8;
  puStack_8 = (undefined1 *)0x1;
  uStack_a = 0x22;
  puStack_c = local_22;
  uStack_e = 0x2c1;
  uStack_10 = 0xac26;
  iVar2 = FUN_12c1_03d3();
  puStack_6 = (undefined1 *)0x0;
  puStack_8 = (undefined1 *)0x11f2;
  uStack_a = 0xac34;
  func_0x00012004();
  puStack_6 = (undefined1 *)0x11f2;
  uVar3 = 0xdef;
  puStack_8 = (undefined1 *)0xac3a;
  FUN_1000_0620();
  if (-1 < iVar2) {
    puStack_6 = (undefined1 *)*(undefined2 *)0xb310;
    puStack_8 = local_22;
    uStack_a = 0xdef;
    uVar3 = 0x11f2;
    puStack_c = (undefined1 *)0xac4d;
    FUN_10ad_20e9();
    *(undefined1 *)0xd14 = 2;
  }
  puStack_8 = (undefined1 *)0xac59;
  puStack_6 = (undefined1 *)uVar3;
  func_0x0000ac64();
  if (3 < *(byte *)0xb782) {
    puStack_6 = (undefined1 *)0x1;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
  }
  return;
}



/* 3ab8:00ee  FUN_3ab8_00ee  411 bytes, 1 callers */

void __cdecl16far FUN_3ab8_00ee(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined1 local_22 [10];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  int iStack_a;
  undefined1 *puStack_8;
  int iStack_6;
  
  iStack_6 = 0xac79;
  FUN_21f2_0ebc();
  iStack_6 = 1;
  puStack_8 = (undefined1 *)0x22b2;
  uVar5 = 0x11f2;
  iStack_a = 0xac83;
  func_0x00011f2c();
  if ((*(byte *)0x129 < 10) || (*(byte *)0xb782 < 4)) {
    iStack_6 = 0x11f2;
    puStack_8 = (undefined1 *)0xac97;
    func_0x0000c354();
    iStack_6 = *(undefined2 *)0x1b40;
    puStack_8 = (undefined1 *)*(undefined2 *)0x1b3e;
    iStack_a = *(int *)0xa5a + 1;
    puStack_c = (undefined1 *)0x0;
    uStack_e = 0x885;
    uStack_10 = 0xacac;
    func_0x0000a76b();
    iStack_6 = 0x885;
    uVar5 = 0x885;
    puStack_8 = (undefined1 *)0xacb4;
    func_0x0000a799();
  }
  iStack_6 = 1;
  puStack_8 = (undefined1 *)0x1;
  puStack_c = (undefined1 *)0xacbe;
  iStack_a = uVar5;
  FUN_1000_0599();
  iStack_6 = 0xdef;
  puStack_8 = (undefined1 *)0xacc5;
  func_0x00010526();
  iStack_6 = 1;
  puStack_8 = (undefined1 *)0x11;
  iStack_a = 0xdef;
  puStack_c = (undefined1 *)0xacd2;
  FUN_1000_0599();
  iStack_6 = 0x83c;
  puStack_8 = (undefined1 *)0x600;
  iStack_a = 0x60a;
  puStack_c = (undefined1 *)0x50b3;
  uStack_e = 0xdef;
  uStack_10 = 0xace9;
  func_0x00012276();
  iStack_6 = 0x11f2;
  puStack_8 = (undefined1 *)0xacf1;
  FUN_1000_060e();
  local_22[0] = 0;
  uVar4 = (int)*(uint *)0xb310 >> 0xf;
  iVar2 = ((int)((*(uint *)0xb310 ^ uVar4) - uVar4) >> 4 ^ uVar4) - uVar4;
  puStack_8 = local_22;
  iStack_a = 0xdef;
  puStack_c = (undefined1 *)0xad13;
  iStack_6 = iVar2;
  func_0x00012bf5();
  iStack_6 = 0x11f2;
  puStack_8 = (undefined1 *)0xad1a;
  func_0x00002ca6();
  iStack_6 = 0xe;
  puStack_8 = (undefined1 *)0x1;
  iStack_a = 0x2c;
  puStack_c = local_22;
  uStack_e = 0x2c1;
  uStack_10 = 0xad2f;
  iVar3 = FUN_12c1_03d3();
  iStack_6 = 0;
  puStack_8 = (undefined1 *)0x11f2;
  iStack_a = 0xad3d;
  func_0x00012004();
  iStack_6 = 0x11f2;
  uVar5 = 0xdef;
  puStack_8 = (undefined1 *)0xad43;
  FUN_1000_0620();
  if (-1 < iVar3) {
    puStack_8 = local_22;
    iStack_a = 0xdef;
    uVar5 = 0x11f2;
    puStack_c = (undefined1 *)0xad55;
    iStack_6 = iVar2;
    FUN_12c1_0025();
    *(undefined1 *)0xd14 = 2;
  }
  iStack_6 = 0;
  iStack_a = 0xad64;
  puStack_8 = (undefined1 *)uVar5;
  func_0x0000daa6();
  iStack_6 = *(undefined2 *)0x1b40;
  puStack_8 = (undefined1 *)*(undefined2 *)0x1b3e;
  iStack_a = 0;
  puStack_c = (undefined1 *)0x0;
  uStack_e = 0x885;
  uStack_10 = 0xad76;
  func_0x0000f1d8();
  iStack_6 = 0;
  puStack_8 = (undefined1 *)0x0;
  iStack_a = 1;
  puStack_c = (undefined1 *)0x7;
  uStack_e = *(undefined2 *)0x1b40;
  uStack_10 = *(undefined2 *)0x1b3e;
  uStack_12 = *(undefined2 *)0xa5e;
  uStack_14 = 0;
  uStack_16 = 0xdef;
  uStack_18 = 0xad9b;
  func_0x0000f350();
  if (*(byte *)0xb782 < 4) {
    uStack_e = *(undefined2 *)0x1b40;
    uStack_10 = *(undefined2 *)0x1b3e;
    uStack_12 = *(undefined2 *)0xa5e;
    uStack_14 = *(undefined2 *)0xa58;
  }
  else {
    uStack_e = *(undefined2 *)0x1b40;
    uStack_10 = *(undefined2 *)0x1b3e;
    uStack_12 = *(undefined2 *)0xa5e;
    uStack_14 = *(undefined2 *)0xa5c;
  }
  iStack_6 = 0;
  puStack_8 = (undefined1 *)0x0;
  iStack_a = 1;
  puStack_c = (undefined1 *)0x7;
  uStack_16 = 0xdef;
  uStack_18 = 0xade4;
  func_0x0000f350();
  iStack_6 = 0xdef;
  puStack_8 = (undefined1 *)0xadec;
  func_0x0000a799();
  *(undefined2 *)0xbc0 = 1;
  iStack_6 = 0x885;
  puStack_8 = (undefined1 *)0xadf7;
  func_0x0000ac64();
  if (3 < *(byte *)0xb782) {
    iStack_6 = 1;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
  }
  return;
}



/* 3ab8:028d  FUN_3ab8_028d  1394 bytes, 2 callers */

void __cdecl16far FUN_3ab8_028d(uint *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  int local_18;
  int local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined1 **ppuStack_e;
  undefined2 *local_c;
  undefined1 *local_a;
  undefined1 *puStack_8;
  undefined2 local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x3ab8;
  uVar2 = 0x22b2;
  local_6 = 0xae18;
  FUN_21f2_0ebc();
  do {
    while( true ) {
      local_6 = 0xae1d;
      local_4 = (undefined2 *)uVar2;
      func_0x0000c340();
      local_4 = (undefined2 *)0x728;
      local_6 = 0x885;
      puStack_8 = (undefined1 *)0xae26;
      func_0x00012276();
      local_4 = (undefined2 *)0x11f2;
      local_6 = 0xae2c;
      func_0x00010526();
      local_4 = (undefined2 *)0x1;
      local_6 = 0x12;
      puStack_8 = (undefined1 *)0xdef;
      local_a = (undefined1 *)0xae39;
      FUN_1000_0599();
      if (0x23 < (int)*param_1) break;
      local_4 = (undefined2 *)0x50bd;
      local_6 = 0xdef;
      puStack_8 = (undefined1 *)0xae4f;
      func_0x00012276();
      local_4 = (undefined2 *)0x11f2;
      local_6 = 0xae59;
      FUN_28b3_0d8b();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xae61;
      func_0x0002996b();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xae69;
      func_0x00029983();
      local_4 = (undefined2 *)0x1;
      local_6 = 0x2e;
      puStack_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xae76;
      FUN_1000_0599();
      local_4 = (undefined2 *)0x50d8;
      local_6 = 0xdef;
      puStack_8 = (undefined1 *)0xae81;
      func_0x00012276();
      local_4 = (undefined2 *)0x2711;
      local_6 = 0x30;
      puStack_8 = local_20;
      local_a = local_1c;
      local_c = &local_10;
      ppuStack_e = &local_a;
      local_10 = 0x11f2;
      uVar2 = 0xad;
      local_12 = 0xae9f;
      local_c = (undefined2 *)func_0x000021a4();
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_c != (undefined2 *)0x63) {
        uVar4 = local_c != (undefined2 *)0xffff;
        if (local_c == (undefined2 *)0xffff) {
          return;
        }
        local_4 = (undefined2 *)0xad;
        local_6 = 0xaec8;
        func_0x00029834();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaed0;
        func_0x000297e6();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaed5;
        func_0x00029d78();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaeda;
        FUN_28b3_1181();
        if ((bool)uVar4) {
          return;
        }
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaee7;
        func_0x000297e6();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaeec;
        func_0x00029d78();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaef5;
        func_0x00029c74();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaefa;
        local_16 = FUN_28b3_0f51();
        if ((4 < local_16) && (local_16 < 0x14)) {
          return;
        }
        if ((0x13 < local_16) && (local_16 < 0x33)) {
          local_16 = local_16 / 10 + 6;
        }
        if (local_16 == 100) {
          local_16 = 0xc;
        }
        if (local_16 == 500) {
          local_16 = 0xd;
        }
        if (local_16 == 1000) {
          local_16 = 0xe;
        }
        if ((((local_16 < 0) || (4 < local_16)) && ((local_16 < 8 || (0xe < local_16)))) ||
           (*(int *)0xa68 == local_16)) goto LAB_3ab8_07d2;
        *(int *)0xa68 = local_16;
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaf6e;
        func_0x0000c3ca();
        local_4 = (undefined2 *)0x885;
        local_6 = 0xaf7f;
        func_0x000297e6();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaf87;
        func_0x0002996b();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaf90;
        func_0x00029b9d();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaf99;
        func_0x00029983();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xafb8;
        FUN_28b3_0d8b();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xafc0;
        func_0x000297e6();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xafc5;
        func_0x00029d78();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xafca;
        FUN_28b3_1177();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xafd2;
        func_0x0002996b();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xafdb;
        func_0x00029983();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xafe3;
        func_0x000297e6();
        local_4 = &local_6;
        local_6 = 0x22b2;
        puStack_8 = (undefined1 *)0xafec;
        func_0x00029b9d();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xaff2;
        func_0x00029983();
        local_4 = (undefined2 *)0x0;
        local_6 = 0x22b2;
        puStack_8 = (undefined1 *)0xaffa;
        func_0x0000daa6();
        local_4 = (undefined2 *)0x1;
        local_6 = 0x885;
        puStack_8 = (undefined1 *)0xb007;
        func_0x000297e6();
        ppuStack_e = (undefined1 **)0x22b2;
        local_10 = 0xb011;
        func_0x000299d1();
        ppuStack_e = (undefined1 **)0x22b2;
        local_10 = 0xb019;
        func_0x000297e6();
        goto LAB_3ab8_07bb;
      }
      local_c = (undefined2 *)0x63;
    }
    local_4 = (undefined2 *)0x600;
    local_6 = 0x60a;
    puStack_8 = (undefined1 *)0x50db;
    local_a = (undefined1 *)0xdef;
    local_c = (undefined2 *)0xb02d;
    func_0x00012276();
    local_4 = (undefined2 *)0x1;
    local_6 = 0x2d;
    puStack_8 = (undefined1 *)0x11f2;
    local_a = (undefined1 *)0xb03d;
    FUN_1000_0599();
    local_4 = (undefined2 *)0x50ea;
    local_6 = 0xdef;
    puStack_8 = (undefined1 *)0xb048;
    func_0x00012276();
    local_4 = (undefined2 *)0x11f2;
    local_6 = 0xb052;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xb05a;
    func_0x0002996b();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xb062;
    func_0x00029983();
    uVar4 = *param_1 < 0x48;
    if ((int)*param_1 < 0x48) {
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xb073;
      func_0x00029834();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xb07b;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xb080;
      func_0x00029d78();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xb085;
      FUN_28b3_1181();
      if ((bool)uVar4) goto LAB_3ab8_0507;
LAB_3ab8_052d:
      local_4 = (undefined2 *)0x0;
      local_6 = 7;
      puStack_8 = (undefined1 *)0x1;
      local_a = (undefined1 *)0x2d;
      local_c = (undefined2 *)0x50f0;
      ppuStack_e = (undefined1 **)0x22b2;
      uVar3 = 0xdef;
      local_10 = 0xb0c5;
      FUN_1000_02b5();
      uVar1 = *param_1;
      uVar4 = uVar1 < 0x48;
      uVar5 = uVar1 == 0x48;
      if ((int)uVar1 < 0x48) {
        local_4 = (undefined2 *)0xdef;
        local_6 = 0xb0d9;
        func_0x00029834();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb0e2;
        func_0x000297e6();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb0e7;
        func_0x00029d78();
        local_4 = (undefined2 *)0x22b2;
        uVar3 = 0x22b2;
        local_6 = 0xb0ec;
        FUN_28b3_1181();
        if (!(bool)uVar4 && !(bool)uVar5) {
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb0f6;
          func_0x000297e6();
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb0fb;
          func_0x00029d78();
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb100;
          FUN_28b3_1c08();
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb105;
          FUN_28b3_1177();
          local_4 = (undefined2 *)0x22b2;
          uVar3 = 0x22b2;
          local_6 = 0xb10d;
          func_0x00029983();
        }
      }
    }
    else {
LAB_3ab8_0507:
      uVar3 = 0x22b2;
      uVar4 = *param_1 < 0x58;
      if ((int)*param_1 < 0x58) {
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb098;
        func_0x00029834();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb0a1;
        func_0x000297e6();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb0a6;
        func_0x00029d78();
        local_4 = (undefined2 *)0x22b2;
        uVar3 = 0x22b2;
        local_6 = 0xb0ab;
        FUN_28b3_1181();
        if ((bool)uVar4) goto LAB_3ab8_052d;
      }
    }
    local_4 = (undefined2 *)0x2711;
    local_6 = 0x32;
    puStack_8 = local_20;
    local_a = local_1c;
    local_c = &local_10;
    ppuStack_e = &local_a;
    uVar2 = 0xad;
    local_12 = 0xb12a;
    local_10 = uVar3;
    local_c = (undefined2 *)func_0x000021a4();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_c != (undefined2 *)0x63) {
      if (local_c == (undefined2 *)0xffff) {
        return;
      }
      uVar4 = *param_1 < 0x58;
      if ((int)*param_1 < 0x58) {
        local_4 = (undefined2 *)0xad;
        local_6 = 0xb15b;
        func_0x00029834();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb164;
        func_0x000297e6();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb169;
        func_0x00029d78();
        local_4 = (undefined2 *)0x22b2;
        uVar2 = 0x22b2;
        local_6 = 0xb16e;
        FUN_28b3_1181();
        if ((bool)uVar4) {
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb179;
          func_0x000297e6();
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb181;
          func_0x000297e6();
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb186;
          func_0x00029ae7();
          local_4 = (undefined2 *)0x22b2;
          uVar2 = 0x22b2;
          local_6 = 0xb18b;
          FUN_28b3_1181();
          if (!(bool)uVar4) {
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb195;
            func_0x000297e6();
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb19a;
            func_0x00029d78();
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb19f;
            FUN_28b3_1c08();
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb1a4;
            FUN_28b3_1177();
            local_4 = (undefined2 *)0x22b2;
            uVar2 = 0x22b2;
            local_6 = 0xb1ac;
            func_0x00029983();
          }
        }
      }
      uVar1 = *param_1;
      uVar4 = uVar1 < 0x48;
      uVar5 = uVar1 == 0x48;
      if ((int)uVar1 < 0x48) {
        local_6 = 0xb1bd;
        local_4 = (undefined2 *)uVar2;
        func_0x00029834();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb1c6;
        func_0x000297e6();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb1cb;
        func_0x00029d78();
        local_4 = (undefined2 *)0x22b2;
        uVar2 = 0x22b2;
        local_6 = 0xb1d0;
        FUN_28b3_1181();
        if (!(bool)uVar4) {
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb1db;
          func_0x00029834();
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb1e3;
          func_0x000297e6();
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb1e8;
          func_0x00029ae7();
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb1ed;
          func_0x00029d78();
          local_4 = (undefined2 *)0x22b2;
          uVar2 = 0x22b2;
          local_6 = 0xb1f2;
          FUN_28b3_1181();
          if (!(bool)uVar4 && !(bool)uVar5) {
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb1fc;
            func_0x000297e6();
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb201;
            func_0x00029d78();
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb206;
            FUN_28b3_1c08();
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb20b;
            FUN_28b3_1177();
            local_4 = (undefined2 *)0x22b2;
            uVar2 = 0x22b2;
            local_6 = 0xb213;
            func_0x00029983();
          }
        }
      }
      local_6 = 0xb21c;
      local_4 = (undefined2 *)uVar2;
      func_0x00029834();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xb224;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xb229;
      func_0x00029ae7();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xb231;
      func_0x0002996b();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xb236;
      func_0x00029d78();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xb23b;
      FUN_28b3_1181();
      if (!(bool)uVar4 && !(bool)uVar5) {
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb249;
        func_0x00029834();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb251;
        func_0x000297e6();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb256;
        func_0x00029d78();
        local_4 = (undefined2 *)0x22b2;
        local_6 = 0xb25b;
        FUN_28b3_1181();
        if ((bool)uVar4) {
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb265;
          func_0x000297e6();
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb26d;
          func_0x00029983();
          local_4 = &local_14;
          local_6 = 0x22b2;
          puStack_8 = (undefined1 *)0xb276;
          func_0x000088e3();
          local_4 = (undefined2 *)0x885;
          local_6 = 0xb27f;
          func_0x000297e6();
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb288;
          func_0x000297e6();
          local_4 = (undefined2 *)0x22b2;
          local_6 = 0xb28d;
          FUN_28b3_1181();
          if (!(bool)uVar5) {
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb297;
            func_0x0000c3ca();
            local_4 = (undefined2 *)0x885;
            local_6 = 0xb2a0;
            func_0x000297e6();
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb2a8;
            func_0x00029b85();
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb2b0;
            func_0x00029983();
            *(undefined2 *)0xb26 = local_14;
            *(undefined2 *)0xb28 = local_12;
            uVar1 = (int)*(uint *)0xb310 >> 0xf;
            local_18 = ((int)((*(uint *)0xb310 ^ uVar1) - uVar1) >> 4 ^ uVar1) - uVar1;
            *(undefined2 *)(local_18 * 4 + 0xb2a) = local_14;
            *(undefined2 *)(local_18 * 4 + 0xb2c) = local_12;
            uVar4 = 0;
            uVar5 = 1;
            local_4 = (undefined2 *)0x0;
            local_6 = 0x22b2;
            puStack_8 = (undefined1 *)0xb2ed;
            func_0x0000daa6();
            local_4 = (undefined2 *)0x885;
            local_6 = 0xb2f7;
            func_0x000297e6();
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb2ff;
            func_0x000297e6();
            local_4 = (undefined2 *)0x22b2;
            local_6 = 0xb304;
            FUN_28b3_1181();
            if ((bool)uVar4 || (bool)uVar5) {
              local_6 = *(undefined2 *)0xa0d6;
              puStack_8 = (undefined1 *)*(undefined2 *)0xa0d4;
              local_a = (undefined1 *)*(int *)0xa0d2;
              local_c = (undefined2 *)*(int *)0xa0d0;
            }
            else {
              local_6 = *(undefined2 *)0xa0ce;
              puStack_8 = (undefined1 *)*(undefined2 *)0xa0cc;
              local_a = (undefined1 *)*(int *)0xa0ca;
              local_c = (undefined2 *)*(int *)0xa0c8;
            }
            local_4 = (undefined2 *)0x0;
            ppuStack_e = (undefined1 **)0x22b2;
            local_10 = 0xb336;
            func_0x000297e6();
            ppuStack_e = (undefined1 **)0x22b2;
            local_10 = 0xb33b;
            func_0x00029d78();
LAB_3ab8_07bb:
            local_16 = 0x22b2;
            local_18 = 0xb345;
            func_0x000299d1();
            local_16 = 0x22b2;
            local_18 = 0xb349;
            FUN_3ab8_07ff();
            *(undefined2 *)0xbc0 = 1;
          }
        }
      }
LAB_3ab8_07d2:
      if ((*(int *)0x116c != 0) && (*(int *)0x116c != -1)) {
        local_18 = *(int *)0x116c;
        if (local_18 < 0) {
          local_18 = -(local_18 + 1);
        }
        local_4 = (undefined2 *)local_18;
        local_6 = 0x22b2;
        puStack_8 = (undefined1 *)0xb37a;
        func_0x00004f6e();
      }
      return;
    }
    local_c = (undefined2 *)0x63;
  } while( true );
}



/* 3ab8:07ff  FUN_3ab8_07ff  1260 bytes, 1 callers */

void __cdecl16far FUN_3ab8_07ff(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined4 uVar6;
  int in_stack_00000014;
  int local_226;
  uint local_220;
  int local_21e;
  int local_21c;
  int aiStack_20e [256];
  undefined2 local_e;
  undefined2 uStack_c;
  undefined4 local_a;
  
  FUN_21f2_0ebc();
  local_a._2_2_ = 0x22b2;
  local_a._0_2_ = 0xb391;
  func_0x0000c3ca();
  local_21c = 0;
  do {
    aiStack_20e[local_21c] = in_stack_00000014;
    local_21c = local_21c + 1;
  } while (local_21c < 0x100);
  uVar2 = (int)*(uint *)0xb310 >> 0xf;
  iVar1 = (((int)((*(uint *)0xb310 ^ uVar2) - uVar2) >> 4 ^ uVar2) - uVar2) * 0x10;
  for (local_21c = iVar1; local_21c <= iVar1 + 0xf; local_21c = local_21c + 1) {
    aiStack_20e[local_21c] = 1;
  }
  local_21e = 0;
  uVar3 = 0x885;
  for (local_220 = 1;
      (local_21e <= *(int *)0x14a && ((local_21e < *(int *)0x14a || (local_220 <= *(uint *)0x148))))
      ; local_220 = local_220 + 1) {
    local_a._2_2_ = local_21e;
    local_a._0_2_ = local_220;
    uVar4 = 0;
    local_e = 0xb427;
    uStack_c = uVar3;
    uVar6 = func_0x0000013f();
    uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
    if ((aiStack_20e[*(byte *)((int)uVar6 + 0x12)] != 0) && (*(byte *)((int)uVar6 + 0x11) < 0x5a)) {
      local_a._2_2_ = 0;
      local_a._0_2_ = 0xb450;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb455;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb45d;
      func_0x00029c2c();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb465;
      func_0x00029987();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb476;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb47b;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb483;
      func_0x00029c2c();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb48c;
      func_0x00029987();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb49d;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb4a2;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb4aa;
      func_0x00029c2c();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb4b3;
      func_0x00029987();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb4c4;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb4c9;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb4d1;
      func_0x00029c2c();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb4da;
      func_0x00029987();
      local_a._2_2_ = local_21e;
      local_a._0_2_ = local_220;
      uStack_c = 0x22b2;
      uVar4 = 0x11f2;
      local_e = 0xb4e7;
      FUN_13bf_0a80();
    }
    local_21e = local_21e + (uint)(0xfffe < local_220);
    uVar3 = uVar4;
  }
  local_21e = 0;
  for (local_220 = 1;
      (local_21e <= *(int *)0x14e && ((local_21e < *(int *)0x14e || (local_220 <= *(uint *)0x14c))))
      ; local_220 = local_220 + 1) {
    local_a._2_2_ = local_21e;
    local_a._0_2_ = local_220;
    uVar4 = 0;
    local_e = 0xb527;
    uStack_c = uVar3;
    uVar6 = func_0x00000271();
    uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
    if ((aiStack_20e[*(byte *)((int)uVar6 + 0x1c)] != 0) && (*(byte *)((int)uVar6 + 0x1b) < 0x5a)) {
      local_a._2_2_ = 0;
      local_a._0_2_ = 0xb552;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb557;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb55f;
      func_0x00029c2c();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb568;
      func_0x00029987();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb57a;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb57f;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb587;
      func_0x00029c2c();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb590;
      func_0x00029987();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb5a2;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb5a7;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb5af;
      func_0x00029c2c();
      local_a._2_2_ = 0x22b2;
      uVar4 = 0x22b2;
      local_a._0_2_ = 0xb5b8;
      func_0x00029987();
    }
    local_21e = local_21e + (uint)(0xfffe < local_220);
    uVar3 = uVar4;
  }
  local_a._0_2_ = 0xb5c3;
  local_a._2_2_ = uVar3;
  func_0x00029834();
  local_a._2_2_ = 0x22b2;
  local_a._0_2_ = 0xb5c8;
  func_0x00029ae7();
  local_a._2_2_ = 0x22b2;
  local_a._0_2_ = 0xb5d1;
  func_0x00029983();
  local_a._0_2_ = 0x22b2;
  for (local_226 = 1; local_226 <= *(int *)0x150; local_226 = local_226 + 1) {
    local_a._2_2_ = local_226;
    uVar4 = 0;
    uStack_c = 0xb71c;
    uVar6 = func_0x00000398();
    uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
    iVar1 = (int)uVar6;
    if ((aiStack_20e[*(byte *)(iVar1 + 0x15)] != 0) &&
       (uVar5 = *(byte *)(iVar1 + 0x14) < 0x5a, (bool)uVar5)) {
      local_a._2_2_ = 0;
      local_a._0_2_ = 0xb749;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb752;
      FUN_28b3_1006();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb75a;
      func_0x00029983();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb766;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb772;
      FUN_28b3_1006();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb77b;
      func_0x00029983();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb784;
      func_0x00029834();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb78c;
      func_0x00029834();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb791;
      FUN_28b3_1181();
      if (((bool)uVar5) || ((*(byte *)(iVar1 + 0x16) & 0x10) != 0)) {
        local_a._2_2_ = 0x22b2;
        local_a._0_2_ = 0xb7a9;
        func_0x000297e6();
        local_a._2_2_ = 0x22b2;
        local_a._0_2_ = 0xb7ae;
        func_0x00029d78();
        local_a._2_2_ = 0x22b2;
        local_a._0_2_ = 0xb7b7;
        func_0x00029c2c();
        local_a._2_2_ = 0x22b2;
        local_a._0_2_ = 0xb7c0;
        func_0x00029983();
        local_a._2_2_ = 0x22b2;
        local_a._0_2_ = 0xb7c9;
        func_0x000297e6();
        local_a._2_2_ = 0x22b2;
        local_a._0_2_ = 0xb7ce;
        func_0x00029d78();
        local_a._2_2_ = 0x22b2;
        local_a._0_2_ = 0xb7d7;
        func_0x00029c2c();
        local_a._2_2_ = 0x22b2;
        local_a._0_2_ = 0xb7e0;
        func_0x00029983();
      }
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb5fa;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb603;
      func_0x00029bb5();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb60c;
      func_0x0002996b();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb615;
      func_0x00029983();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb627;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb630;
      func_0x00029bb5();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb639;
      func_0x00029983();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb642;
      func_0x000297e6();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb647;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb64f;
      func_0x00029c2c();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb658;
      func_0x000297e6();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb661;
      func_0x00029b6d();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb666;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb66b;
      FUN_28b3_1163();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb674;
      func_0x00029987();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb67d;
      func_0x000297e6();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb682;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb68a;
      func_0x00029c2c();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb693;
      func_0x000297e6();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb69c;
      func_0x00029b6d();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb6a1;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb6a6;
      FUN_28b3_1163();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb6af;
      func_0x00029987();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb6b8;
      func_0x000297e6();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb6c0;
      func_0x00029b6d();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb6c9;
      FUN_28b3_107e();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb6d7;
      func_0x00029987();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb6e0;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb6e9;
      func_0x000297e6();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb6f2;
      func_0x00029b6d();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb6f7;
      FUN_28b3_117c();
      local_a._2_2_ = 0x22b2;
      uVar4 = 0x22b2;
      local_a._0_2_ = 0xb703;
      func_0x00029987();
    }
    local_a._0_2_ = uVar4;
  }
  for (local_226 = 1; local_226 <= *(int *)0x152; local_226 = local_226 + 1) {
    local_a._2_2_ = local_226;
    uVar4 = 0;
    uStack_c = 0xb7f4;
    local_a = func_0x000003ef();
    uVar3 = (undefined2)((ulong)local_a >> 0x10);
    if ((aiStack_20e[*(byte *)((int)local_a + 8)] != 0) && (*(byte *)((int)local_a + 9) < 0x5a)) {
      local_a._2_2_ = 0;
      local_a._0_2_ = 0xb81c;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb821;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb829;
      func_0x00029c2c();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb831;
      func_0x00029987();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb842;
      FUN_28b3_0c98();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb847;
      func_0x00029d78();
      local_a._2_2_ = 0x22b2;
      local_a._0_2_ = 0xb84f;
      func_0x00029c2c();
      local_a._2_2_ = 0x22b2;
      uVar4 = 0x22b2;
      local_a._0_2_ = 0xb858;
      func_0x00029987();
    }
    local_a._0_2_ = uVar4;
  }
  return;
}



/* 3ab8:0ceb  FUN_3ab8_0ceb  228 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0ceb(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar7;
  undefined1 local_60 [12];
  undefined2 local_54 [12];
  int local_3c;
  int local_3a;
  undefined2 local_38;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  
  FUN_21f2_0ebc();
  uVar6 = 0x22b2;
  while( true ) {
    local_38 = *(undefined2 *)0xc2c;
    *(undefined2 *)0xc2c = 0;
    puStack_c = local_60;
    uStack_e = 0x50f6;
    uStack_10 = 1;
    uStack_14 = 0xb89d;
    uStack_12 = uVar6;
    iVar3 = FUN_1def_0904();
    *(undefined2 *)0xc2c = local_38;
    if (((*(int *)0x158 != 0) || (iVar3 == -1)) || (iVar3 == 0x14)) break;
    uVar6 = 0x1bb4;
    if (local_3a != 0) {
      func_0x000297e6();
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb8df;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb8e7;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb8ec;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xb8f6;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uVar6 = 0x18b3;
      uStack_1a = 0xb8fb;
      local_3c = func_0x0001b204();
      if (local_3c != 0) {
        puStack_c = (undefined1 *)0xb90e;
        puVar7 = (undefined2 *)func_0x00000398();
        puVar5 = (undefined2 *)puVar7;
        puVar4 = local_54;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar4;
          puVar4 = puVar4 + 1;
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar2 = *puVar1;
        }
        puStack_c = (undefined1 *)0xbf48;
        uStack_e = 0;
        uStack_10 = 0xb92e;
        FUN_1885_0344();
        puStack_c = (undefined1 *)0xb93a;
        puVar4 = (undefined2 *)func_0x000228e3();
        *param_1 = *puVar4;
        param_1[1] = puVar4[1];
        param_1[2] = puVar4[2];
        param_1[3] = puVar4[3];
        return 1;
      }
    }
  }
  return 0xffff;
}



/* 3ab8:0dcf  FUN_3ab8_0dcf  108 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_0dcf(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,int param_6)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  FUN_21f2_3454(param_1,0x5111,param_2,param_3,param_4,param_5);
  *(undefined1 *)(param_6 + param_1) = 0;
  do {
    while( true ) {
      param_6 = param_6 + -1;
      if (param_6 < 1) goto LAB_3ab8_0e2d;
      if (*(char *)(param_6 + param_1) == '.') {
        *(undefined1 *)(param_6 + param_1) = 0;
        goto LAB_3ab8_0e2d;
      }
      if (*(char *)(param_6 + param_1) != '0') break;
      *(undefined1 *)(param_6 + param_1) = 0;
    }
  } while (*(char *)(param_6 + param_1) == '\0');
LAB_3ab8_0e2d:
  func_0x00024ce4(0x22b2,param_1);
  return;
}



/* 3ab8:0e3b  FUN_3ab8_0e3b  320 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0e3b(void)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  func_0x0000daa6(0x22b2,0);
  func_0x0000f1d8(0x885,0,0,*(undefined2 *)0x1b3e,*(undefined2 *)0xa60);
  func_0x0000f350(0xdef,0,*(undefined2 *)0xa5e,*(undefined2 *)0x1b3e,*(undefined2 *)0xa60,7,1,0,0);
  func_0x0000f350(0xdef,0,*(undefined2 *)0xa5e,*(undefined2 *)0xa5c,*(undefined2 *)0xa60,7,1,0,0);
  func_0x0000f350(0xdef,0,0x130,*(undefined2 *)0xa5c,0x150,7,1,0,0);
  func_0x0000f350(0xdef,0,0x160,*(undefined2 *)0xa5c,0x170,7,1,0,0);
  func_0x0000f350(0xdef,0,0x180,*(undefined2 *)0xa5c,400,7,1,0,0);
  func_0x0000f350(0xdef,0x18,0x150,0x30,400,7,1,0,0);
  func_0x0000f350(0xdef,0x48,0x150,0x66,400,7,1,0,0);
  func_0x0000f350(0xdef,0x57,0x150,0x57,0x170,7,0,0,0);
  func_0x0000a799(0xdef);
  return;
}



/* 3ab8:0f7b  FUN_3ab8_0f7b  37 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0f7b(undefined2 param_1)

{
  FUN_21f2_0ebc();
  FUN_1000_02b5(0x5118,1,param_1,7,0);
  return;
}



/* 3ab8:0fa0  FUN_3ab8_0fa0  4212 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_0fa0(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  uint uVar7;
  uint unaff_SI;
  int unaff_DI;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 local_7e [4];
  int local_7a [2];
  uint local_76;
  undefined2 local_72;
  int local_70;
  undefined2 local_6e;
  int local_3a;
  int local_38;
  int local_36;
  int local_34;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  int local_28;
  int local_26;
  undefined1 local_24 [2];
  int local_22;
  int *local_20;
  int *local_1e;
  int *local_1c;
  int local_1a;
  undefined2 uStack_18;
  int local_16;
  int local_14;
  int *local_12;
  int *local_10;
  int *piStack_e;
  int *piStack_c;
  int *piStack_a;
  
  piVar8 = (int *)0x22b2;
  FUN_21f2_0ebc();
  local_34 = 0;
  local_70 = 0;
  if (*(int *)0xca4 != 0) {
    piVar8 = (int *)0xdef;
    piStack_a = (int *)0xbb40;
    func_0x00010526();
  }
  piStack_a = (int *)0x11;
  piStack_e = (int *)0xbb4d;
  piStack_c = piVar8;
  FUN_1000_0599();
  piVar8 = (int *)0xdef;
  piStack_a = (int *)0xbb54;
  func_0x00010526();
LAB_3ab8_0fd4:
  *(undefined2 *)0xca2 = 1;
LAB_3ab8_0fda:
  piStack_c = (int *)0xbb62;
  piStack_a = piVar8;
  func_0x0000daa6();
  piStack_a = (int *)(*(int *)0xa5c + -1);
  piStack_c = (int *)0x132;
  piStack_e = (int *)0x1;
  local_10 = (int *)0x885;
  local_12 = (int *)0xbb79;
  func_0x0000a76b();
  piStack_a = (int *)0x6;
  piStack_c = (int *)0x16;
  piStack_e = (int *)0x1;
  local_10 = (int *)0x5128;
  local_12 = (int *)0x885;
  local_14 = 0xbb94;
  FUN_1000_02b5();
  piStack_a = (int *)0x6;
  piStack_c = (int *)0x17;
  piStack_e = (int *)0x1;
  local_10 = (int *)0x5138;
  local_12 = (int *)0xdef;
  local_14 = 0xbbaf;
  FUN_1000_02b5();
  piStack_a = (int *)0x6;
  piStack_c = (int *)0x18;
  piStack_e = (int *)0x1;
  local_10 = (int *)0x5148;
  local_12 = (int *)0xdef;
  local_14 = 0xbbca;
  FUN_1000_02b5();
  piStack_a = (int *)0x6;
  piStack_c = (int *)0x19;
  piStack_e = (int *)0x1;
  local_10 = (int *)0x5158;
  local_12 = (int *)0xdef;
  local_14 = -0x441b;
  FUN_1000_02b5();
  piStack_a = (int *)0xbbec;
  FUN_3ab8_0e3b();
  uVar11 = local_70 == 0;
  if ((bool)uVar11) {
    local_76 = 0xffff;
  }
LAB_3ab8_1077:
  piStack_a = (int *)0xbc00;
  func_0x00029834();
  piStack_a = (int *)0xbc09;
  func_0x00029834();
  piVar8 = (int *)0x22b2;
  piStack_a = (int *)0xbc0e;
  FUN_28b3_1181();
  if ((bool)uVar11) {
    local_76 = 0;
    *(undefined1 *)0xbea4 = 0;
  }
  local_3a = 0;
LAB_3ab8_109f:
  piStack_c = (int *)0xbc27;
  piStack_a = piVar8;
  FUN_3ab8_0f7b();
  uVar11 = 0;
  if (local_76 != 0) {
    piStack_a = (int *)0xbc3a;
    func_0x00029834();
    piStack_a = (int *)0xbc43;
    func_0x00029834();
    piStack_a = (int *)0xbc48;
    func_0x00029ae7();
    piStack_a = (int *)0xbc4d;
    FUN_28b3_1181();
    if ((bool)uVar11) {
      piStack_a = (int *)*(undefined2 *)0x5238;
      piStack_c = (int *)*(undefined2 *)0x5236;
      piStack_e = (int *)*(undefined2 *)0x5234;
      local_10 = (int *)*(undefined2 *)0x5232;
      local_12 = (int *)0xbea4;
      local_14 = 0x22b2;
      local_16 = -0x4395;
      local_72 = FUN_3ab8_0dcf();
      piStack_a = (int *)0x7;
      piStack_c = (int *)0x14;
      piStack_e = (int *)0xbea4;
      local_10 = (int *)0x22b2;
      local_12 = (int *)0xbc85;
      iVar4 = func_0x00024ce4();
      piStack_e = (int *)-(iVar4 + -0xe);
      local_10 = (int *)0xbea4;
      local_12 = (int *)0x22b2;
      piVar8 = (int *)0xdef;
      local_14 = -0x436b;
      FUN_1000_02b5();
    }
    else {
      piStack_a = (int *)0x7;
      piStack_c = (int *)0x14;
      piStack_e = (int *)0xc;
      local_10 = (int *)0x5168;
      local_12 = (int *)0x22b2;
      piVar8 = (int *)0xdef;
      local_14 = -0x434e;
      FUN_1000_02b5();
      *(undefined1 *)0xbea4 = 0;
      local_76 = 0;
      *(undefined2 *)0x5232 = *(undefined2 *)0xa0d8;
      *(undefined2 *)0x5234 = *(undefined2 *)0xa0da;
      *(undefined2 *)0x5236 = *(undefined2 *)0xa0dc;
      *(undefined2 *)0x5238 = *(undefined2 *)0xa0de;
    }
  }
  piVar9 = piVar8;
  if (local_76 == 1) {
    piStack_a = (int *)0x7;
    piStack_c = (int *)0x14;
    piStack_e = (int *)0xe;
    local_10 = (int *)0x516a;
    piVar9 = (int *)0xdef;
    local_14 = -0x4315;
    local_12 = piVar8;
    FUN_1000_02b5();
  }
  piVar8 = piVar9;
  if (local_76 == 2) {
    piStack_a = (int *)0x7;
    piStack_c = (int *)0x14;
    piStack_e = (int *)0xe;
    local_10 = (int *)0x516d;
    piVar8 = (int *)0xdef;
    local_14 = -0x42f4;
    local_12 = piVar9;
    FUN_1000_02b5();
  }
  piVar9 = piVar8;
  if (local_76 == 3) {
    piStack_a = (int *)0x7;
    piStack_c = (int *)0x14;
    piStack_e = (int *)0xe;
    local_10 = (int *)0x5170;
    piVar9 = (int *)0xdef;
    local_14 = -0x42d3;
    local_12 = piVar8;
    FUN_1000_02b5();
  }
  piVar10 = piVar9;
  if (local_76 == 4) {
    piStack_a = (int *)0x7;
    piStack_c = (int *)0x14;
    piStack_e = (int *)0xe;
    local_10 = (int *)0x5173;
    piVar10 = (int *)0xdef;
    local_14 = -0x42b2;
    local_12 = piVar9;
    FUN_1000_02b5();
  }
  piVar8 = piVar10;
  if (local_76 == 5) {
    piStack_a = (int *)0x7;
    piStack_c = (int *)0x14;
    piStack_e = (int *)0xe;
    local_10 = (int *)0x5176;
    piVar8 = (int *)0xdef;
    local_14 = -0x4291;
    local_12 = piVar10;
    FUN_1000_02b5();
  }
  if (((*(int *)0x158 != 0) || (unaff_SI == 0xffff)) ||
     ((piVar9 = piVar8, *(int *)0xca4 != 0 && ((unaff_SI == 0xd || (unaff_SI == 0x2c)))))) {
LAB_3ab8_1fa5:
    piStack_c = (int *)0xcb2d;
    piStack_a = piVar8;
    func_0x0000daa6();
    *(undefined2 *)0xca2 = 0;
    if ((*(int *)0xca4 < 1) || (unaff_SI != 0x2c)) {
      piStack_a = (int *)0xcb5a;
      func_0x0000ac64();
      piStack_a = (int *)0x11;
      piStack_c = (int *)0x885;
      piStack_e = (int *)0xcb67;
      FUN_1000_0599();
      piStack_a = (int *)0xcb6e;
      func_0x00010526();
      piStack_a = (int *)0xcb73;
      func_0x0000b6ea();
      if (unaff_SI == 0xffff) {
        uVar6 = 0xffff;
      }
      else if ((*(int *)0xca4 == 0) || (unaff_SI != 99)) {
        if ((*(int *)0xca4 == 0) || (unaff_SI != 0x62)) {
          uVar6 = 0;
          *(undefined2 *)0xca4 = 0;
        }
        else {
          uVar6 = 0x62;
        }
      }
      else {
        uVar6 = 99;
      }
    }
    else {
      piStack_a = (int *)0xbea4;
      piStack_c = (int *)0x885;
      piStack_e = (int *)0xcb4e;
      FUN_21f2_2d26();
      uVar6 = 1;
    }
    return uVar6;
  }
LAB_3ab8_1749:
  if (local_70 == 0) {
    piStack_a = &local_6e;
    piVar8 = (int *)0x22b2;
    piStack_e = (int *)0xc2df;
    piStack_c = piVar9;
    FUN_21f2_3454();
    local_28 = 0;
    unaff_DI = 0;
  }
  else {
    local_70 = 0;
    piVar8 = piVar9;
    if ((int)local_76 < 1) {
      local_76 = 1;
    }
  }
LAB_3ab8_1231:
  do {
    piStack_a = (int *)0x7;
    piStack_c = (int *)0x1;
    piStack_e = (int *)0x1;
    local_10 = (int *)0x517b;
    local_14 = 0xbdc6;
    local_12 = piVar8;
    FUN_1000_02b5();
    if (*(int *)0xca4 == 0) {
      piStack_a = (int *)0x6;
      piStack_c = (int *)0xdef;
      piStack_e = (int *)0xbddd;
      FUN_1000_0599();
      piStack_a = (int *)0xbde4;
      func_0x00010526();
      piStack_a = (int *)0x7;
      piStack_c = (int *)0x1;
      piStack_e = (int *)0x7;
      local_10 = (int *)0x5181;
      local_12 = (int *)0xdef;
      local_14 = 0xbdf9;
      FUN_1000_02b5();
      piStack_e = (int *)0x29;
      local_10 = (int *)0x51a6;
LAB_3ab8_12b9:
      piStack_a = (int *)0x7;
      piStack_c = (int *)0x1;
      local_12 = (int *)0xdef;
      local_14 = 0xbe3f;
      FUN_1000_02b5();
    }
    else if (local_34 != 0) {
      piStack_a = (int *)0x6;
      piStack_c = (int *)0xdef;
      piStack_e = (int *)0xbe23;
      FUN_1000_0599();
      piStack_a = (int *)0xbe2a;
      func_0x00010526();
      piStack_e = (int *)0x7;
      local_10 = (int *)0x51c8;
      goto LAB_3ab8_12b9;
    }
    piStack_a = (int *)0xdef;
    piStack_c = (int *)0xbe4a;
    FUN_3ab8_0f7b();
    piStack_a = (int *)0x7;
    piStack_c = (int *)0x15;
    piStack_e = &local_6e;
    local_10 = (int *)0xdef;
    local_12 = (int *)0xbe5f;
    iVar4 = func_0x00024ce4();
    piStack_e = (int *)-(iVar4 + -0xe);
    local_10 = &local_6e;
    local_12 = (int *)0x22b2;
    local_14 = 0xbe6f;
    FUN_1000_02b5();
    if (local_3a == 0) {
      piStack_a = (int *)0x7;
      piStack_c = (int *)0x15;
      piStack_e = (int *)0xf;
      local_10 = (int *)0x51d1;
      local_12 = (int *)0xdef;
      local_14 = 0xbe90;
      FUN_1000_02b5();
      piStack_a = (int *)0x6;
      piStack_c = (int *)0x17;
      piStack_e = (int *)0xc;
      local_10 = (int *)0x51d3;
      local_12 = (int *)0xdef;
      local_14 = 0xbeab;
      FUN_1000_02b5();
    }
    if (local_3a == 1) {
      piStack_a = (int *)0x7;
      piStack_c = (int *)0x15;
      piStack_e = (int *)0xf;
      local_10 = (int *)0x51d6;
      local_12 = (int *)0xdef;
      local_14 = 0xbecd;
      FUN_1000_02b5();
      piStack_a = (int *)0x6;
      piStack_c = (int *)0x17;
      piStack_e = (int *)0xc;
      local_10 = (int *)0x51d8;
      local_12 = (int *)0xdef;
      local_14 = 0xbee8;
      FUN_1000_02b5();
    }
    if (local_3a == 2) {
      piStack_a = (int *)0x7;
      piStack_c = (int *)0x15;
      piStack_e = (int *)0xf;
      local_10 = (int *)0x51db;
      local_12 = (int *)0xdef;
      local_14 = 0xbf0a;
      FUN_1000_02b5();
      piStack_a = (int *)0x6;
      piStack_c = (int *)0x17;
      piStack_e = (int *)0xc;
      local_10 = (int *)0x51dd;
      local_12 = (int *)0xdef;
      local_14 = 0xbf25;
      FUN_1000_02b5();
    }
    piVar8 = (int *)0xdef;
    *(undefined2 *)0xc22 = 0;
LAB_3ab8_13ae:
    piVar9 = piVar8;
    if (*(int *)0xc22 == 0) {
      *(undefined2 *)0xc22 = 1;
      piStack_a = (int *)0x7;
      piStack_c = (int *)0x2;
      piStack_e = (int *)0x12;
      local_10 = (int *)0x51e0;
      piVar9 = (int *)0xdef;
      local_14 = 0xbf54;
      local_12 = piVar8;
      FUN_1000_02b5();
      piStack_a = (int *)0xbf5b;
      FUN_3ab8_0e3b();
    }
    *(undefined2 *)0xc26 = 0xffff;
    uVar6 = *(undefined2 *)0xa4a;
    *(undefined2 *)0xa4a = 1;
    uVar1 = *(undefined2 *)0xc2c;
    *(undefined2 *)0xc2c = 0;
    uVar2 = *(undefined2 *)0xa48;
    if (*(int *)0xca4 == 0) {
      *(undefined2 *)0xa48 = 0xfffe;
    }
    else {
      *(undefined2 *)0xa48 = 0;
    }
    piStack_a = (int *)local_7e;
    piStack_c = local_7a;
    piStack_e = &local_26;
    local_10 = &local_22;
    piVar8 = (int *)0x3bf;
    local_14 = -0x4052;
    local_12 = piVar9;
    unaff_SI = func_0x00006608();
    *(undefined2 *)0xc26 = 0;
    *(undefined2 *)0xa4a = uVar6;
    *(undefined2 *)0xc2c = uVar1;
    *(undefined2 *)0xa48 = uVar2;
    piVar9 = local_10;
    iVar4 = local_38;
    if (unaff_SI == 99) {
      local_34 = 1;
      goto LAB_3ab8_0fda;
    }
    do {
      local_10 = piVar8;
      piVar8 = local_10;
      if (iVar4 == 0) break;
      piStack_a = (int *)local_24;
      piStack_c = &local_36;
      piStack_e = &local_16;
      piVar8 = (int *)0x885;
      local_12 = (int *)0xbff6;
      func_0x0000dcbd();
      piVar9 = local_10;
      iVar4 = local_36;
    } while (local_16 != 0);
    local_10 = piVar9;
    if (*(int *)0x158 != 0) goto LAB_3ab8_109f;
    if (unaff_SI == 0xffff) {
      uVar11 = true;
      goto LAB_3ab8_1077;
    }
    piStack_a = piVar8;
    if ((*(int *)0xca4 == 0) &&
       (((unaff_SI == 0x6200 || (unaff_SI == 0x6300)) ||
        ((local_38 != 0 &&
         (((local_26 < *(int *)0xa5e && (0x148 < local_22)) && (local_22 < 0x240)))))))) {
      piStack_c = (int *)0xc035;
      func_0x0000daa6();
      piVar8 = (int *)0x885;
      piStack_a = (int *)0xc03b;
      func_0x0000ac64();
      local_10 = (int *)((uint)local_10 & 0xff00);
      *(undefined2 *)0xc26 = 0xffff;
      if ((unaff_SI == 0x6200) ||
         (((local_22 < 0x1d4 && (local_26 < *(int *)0xa5e)) && (local_38 != 0)))) {
        piStack_a = (int *)0xbea4;
        piStack_c = (int *)0x0;
        pcVar3 = (code *)swi(0x3f);
        (*pcVar3)();
      }
      else {
        local_20 = (int *)*(int *)0xa0d8;
        local_1e = (int *)*(int *)0xa0da;
        local_1c = (int *)*(int *)0xa0dc;
        local_1a = *(int *)0xa0de;
        piStack_a = (int *)0x885;
        piStack_c = (int *)0xcaae;
        FUN_3ab8_0ceb();
        local_28 = 0x14;
        piStack_a = (int *)local_1a;
        piStack_c = local_1c;
        piStack_e = local_1e;
        local_10 = local_20;
        local_12 = &local_6e;
        local_14 = 0x885;
        local_16 = -0x3534;
        FUN_3ab8_0dcf();
        uVar11 = &stack0x0000 == (undefined1 *)0x6;
        piStack_a = (int *)0xcad7;
        func_0x00029834();
        piStack_a = (int *)0xcae0;
        func_0x00029834();
        piVar8 = (int *)0x22b2;
        piStack_a = (int *)0xcae5;
        FUN_28b3_1181();
        if ((bool)uVar11) {
          local_6e._0_1_ = 0;
          goto LAB_3ab8_0fd4;
        }
        if ((int)local_76 < 1) {
          local_76 = 1;
          *(undefined2 *)0x5232 = *(undefined2 *)0xa0d8;
          *(undefined2 *)0x5234 = *(undefined2 *)0xa0da;
          *(undefined2 *)0x5236 = *(undefined2 *)0xa0dc;
          *(undefined2 *)0x5238 = *(undefined2 *)0xa0de;
          piStack_a = (int *)0x22b2;
          piStack_c = (int *)0xcb0f;
          FUN_3ab8_0f7b();
        }
        local_70 = 1;
      }
      *(undefined2 *)0xc26 = 0;
      if (*(int *)0x158 == 0) goto LAB_3ab8_0fd4;
      goto LAB_3ab8_1fa5;
    }
    if ((((int)unaff_SI < 0x2a) || (0x39 < (int)unaff_SI)) &&
       (((unaff_SI != 0x3d &&
         ((((unaff_SI != 0xd && (unaff_SI != 0x5b)) && (unaff_SI != 0x2c)) &&
          ((unaff_SI != 0x40 && (unaff_SI != 0x3a)))))) && (unaff_SI != 0x5e)))) {
      if ((unaff_SI == 0x7f) || (unaff_SI == 0xff9d)) {
        local_38 = 0;
        unaff_SI = 0x43;
        goto LAB_3ab8_1553;
      }
      if (((0x66ff < (int)unaff_SI) && ((int)unaff_SI < 0x6b01)) || (local_38 != 0))
      goto LAB_3ab8_1553;
      goto LAB_3ab8_13ae;
    }
    local_38 = 0;
LAB_3ab8_1553:
    if (((local_38 != 0) && (*(int *)0xa5e < local_26)) &&
       ((local_26 < *(int *)0xa5e + 0x10 &&
        ((local_12 = (int *)((local_22 + -0x88) / 0x60), -1 < (int)local_12 && ((int)local_12 < 5)))
        ))) {
      unaff_SI = (uint)(byte)((char)local_12 + 0x67) << 8;
    }
    if (((((param_1 != 0) && (local_38 != 0)) && (1 < local_22)) &&
        ((local_22 < 0x78 && (0x11 < local_26)))) && (local_26 < 0x2f)) {
      *(char *)0xcc6 = *(char *)0xcc6 + '\x01';
      if (2 < *(byte *)0xcc6) {
        *(undefined1 *)0xcc6 = 0;
      }
      unaff_SI = 0x62;
      goto LAB_3ab8_1fa5;
    }
    if (((local_38 != 0) && (local_22 < 0x78)) && ((0x150 < local_26 && (local_26 < 400)))) {
      uVar7 = (int)(400U - local_26) >> 0xf;
      local_14 = ((int)((400U - local_26 ^ uVar7) - uVar7) >> 4 ^ uVar7) - uVar7;
      local_12 = (int *)(local_22 / 0x18 + 1);
      if ((3 < (int)local_12) && (local_22 < 0x67)) {
        local_12 = (int *)0x4;
      }
      if ((0 < (int)local_12) && ((int)local_12 < 4)) {
        if ((0 < local_14) && (local_14 < 4)) {
          unaff_SI = (local_14 + 0xf) * 3 + (int)local_12;
        }
        if (local_14 == 0) {
          if (local_12 == (int *)0x1) {
            unaff_SI = 0x30;
          }
          if (local_12 == (int *)0x2) {
            unaff_SI = 0x2c;
          }
          if (local_12 == (int *)0x3) {
            unaff_SI = 0x2e;
          }
        }
      }
      if (local_12 == (int *)0x4) {
        if ((local_14 == 3) && (unaff_SI = 0x2d, 0x57 < local_22)) {
          unaff_SI = 0x2f;
        }
        if ((local_14 == 2) && (unaff_SI = 0x2a, 0x57 < local_22)) {
          unaff_SI = 0x40;
        }
        if (local_14 == 1) {
          unaff_SI = 0x2b;
        }
        if (local_14 == 0) {
          unaff_SI = 0x3d;
        }
      }
      if (local_12 == (int *)0x5) {
        if (local_14 == 3) {
          unaff_SI = 0x5e;
        }
        if (local_14 == 2) {
          unaff_SI = 0x41;
        }
        if (local_14 == 1) {
          unaff_SI = 0x43;
        }
        if (local_14 == 0) {
          unaff_SI = 0xd;
        }
      }
    }
    if ((unaff_SI == 0x41) || (unaff_SI == 0x5b)) {
      uVar11 = true;
      *(undefined2 *)0x5232 = *(undefined2 *)0xa0d8;
      *(undefined2 *)0x5234 = *(undefined2 *)0xa0da;
      *(undefined2 *)0x5236 = *(undefined2 *)0xa0dc;
      *(undefined2 *)0x5238 = *(undefined2 *)0xa0de;
      goto LAB_3ab8_1077;
    }
    piVar9 = piVar8;
    if ((unaff_SI == 0x43) || (unaff_SI == 0x3a)) goto LAB_3ab8_1749;
    if ((unaff_SI == 0x2c) && (local_76 == 0)) goto LAB_3ab8_109f;
    if ((((((unaff_SI == 0x2f) || (unaff_SI == 0x2a)) || (unaff_SI == 0x2d)) ||
         ((unaff_SI == 0x2b || (unaff_SI == 0x3d)))) || (unaff_SI == 0x2c)) ||
       (((unaff_SI == 0xd || (unaff_SI == 0x40)) || (unaff_SI == 0x6700)))) {
      piStack_a = (int *)0x521d;
      piStack_c = &local_6e;
      local_10 = (int *)0xc346;
      piStack_e = piVar8;
      func_0x000253ce();
      uVar11 = (undefined1 *)0xfff9 < &piStack_c;
      piStack_a = (int *)0xc351;
      func_0x00029834();
      piStack_a = (int *)0xc359;
      func_0x000299b9();
      piStack_a = (int *)0xc361;
      FUN_28b3_0ee9();
      piStack_a = (int *)0xc36a;
      func_0x00029834();
      piStack_a = (int *)0xc373;
      func_0x00029834();
      piStack_a = (int *)0xc378;
      FUN_28b3_1181();
      if (((bool)uVar11) && (local_3a != 0)) {
        piStack_a = (int *)0xc388;
        func_0x00029834();
        piStack_a = (int *)0xc38d;
        func_0x00029ae7();
        piStack_a = (int *)0xc392;
        func_0x00029af6();
        piStack_a = (int *)0xc39a;
        func_0x000299d1();
      }
      if (unaff_SI == 0x40) {
        if (local_3a == 0) {
          *(undefined2 *)0x5232 = local_32;
          *(undefined2 *)0x5234 = uStack_30;
          *(undefined2 *)0x5236 = uStack_2e;
          *(undefined2 *)0x5238 = uStack_2c;
        }
        if (local_3a == 1) {
          piStack_a = (int *)0xc3c2;
          func_0x00029834();
          piStack_a = (int *)0xc3cb;
          func_0x00029c2c();
          piStack_a = (int *)0x22b2;
          piStack_c = (int *)0xc3d5;
          func_0x00029c74();
          piStack_a = (int *)0xc3db;
          func_0x000299d1();
        }
        if (local_3a == 2) {
          piStack_a = (int *)0xc3e9;
          func_0x00029834();
          piStack_a = (int *)0xc3f2;
          func_0x00029c2c();
          piStack_a = (int *)0x22b2;
          piStack_c = (int *)0xc3fc;
          func_0x00029c74();
          piStack_a = (int *)0xc402;
          func_0x000299d1();
        }
        piVar8 = (int *)0x22b2;
        local_3a = local_3a + 1;
        if (2 < local_3a) {
          local_3a = 0;
        }
        local_76 = 10;
      }
      else {
        if (local_3a == 1) {
          piStack_a = (int *)0xc426;
          func_0x00029834();
          piStack_a = (int *)0xc42f;
          func_0x00029c2c();
          piStack_a = (int *)0x22b2;
          piStack_c = (int *)0xc439;
          func_0x00029c74();
          piStack_a = (int *)0xc43f;
          func_0x000299d1();
        }
        if (local_3a == 2) {
          piStack_a = (int *)0xc44d;
          func_0x00029834();
          piStack_a = (int *)0xc456;
          func_0x00029c2c();
          piStack_a = (int *)0x22b2;
          piStack_c = (int *)0xc460;
          func_0x00029c74();
          piStack_a = (int *)0xc466;
          func_0x000299d1();
        }
        local_3a = 0;
        uVar11 = local_76 < 5;
        uVar12 = local_76 == 5;
        if ((bool)uVar12) {
          piStack_a = (int *)0xc47c;
          func_0x00029834();
          piStack_a = (int *)0xc485;
          func_0x00029834();
          piStack_a = (int *)0xc48a;
          FUN_28b3_1181();
          if ((bool)uVar12) {
            piStack_a = (int *)0xc495;
            func_0x00029834();
            piStack_a = (int *)0xc49e;
            func_0x00029834();
            piStack_a = (int *)0xc4a3;
            FUN_28b3_1181();
            if ((bool)uVar12) goto LAB_3ab8_19b0;
          }
          uVar12 = 0;
          piStack_a = (int *)0xc4b1;
          func_0x00029834();
          piStack_a = (int *)0xc4ba;
          func_0x00029834();
          piStack_a = (int *)0xc4bf;
          FUN_28b3_1181();
          if ((bool)uVar11) {
            piStack_a = (int *)0xc4c9;
            func_0x00029834();
            piStack_a = (int *)0xc4d1;
            func_0x00029834();
            piStack_a = (int *)0xc4d6;
            FUN_28b3_0f51();
            piStack_a = (int *)0xc4e3;
            FUN_28b3_0d8b();
            piStack_a = (int *)0xc4e8;
            FUN_28b3_1181();
            if (!(bool)uVar12) {
              *(undefined2 *)0x5232 = *(undefined2 *)0xa100;
              *(undefined2 *)0x5234 = *(undefined2 *)0xa102;
              *(undefined2 *)0x5236 = *(undefined2 *)0xa104;
              *(undefined2 *)0x5238 = *(undefined2 *)0xa106;
              unaff_SI = 0;
              goto LAB_3ab8_19b0;
            }
          }
          piStack_a = local_1c;
          piStack_c = local_1e;
          piStack_e = local_20;
          local_10 = (int *)*(int *)0x5238;
          local_12 = (int *)*(int *)0x5236;
          local_14 = *(int *)0x5234;
          local_16 = *(int *)0x5232;
          uStack_18 = 0x22b2;
          local_1a = -0x3af5;
          puVar5 = (undefined2 *)func_0x0002a0c4();
          *(undefined2 *)0x5232 = *puVar5;
          *(undefined2 *)0x5234 = puVar5[1];
          *(undefined2 *)0x5236 = puVar5[2];
          *(undefined2 *)0x5238 = puVar5[3];
        }
LAB_3ab8_19b0:
        uVar11 = local_76 == 4;
        if ((bool)uVar11) {
          piStack_a = (int *)0xc53e;
          func_0x00029834();
          piStack_a = (int *)0xc547;
          func_0x00029834();
          piStack_a = (int *)0xc54c;
          FUN_28b3_1181();
          if ((bool)uVar11) {
            *(undefined2 *)0x5232 = *(undefined2 *)0xa100;
            *(undefined2 *)0x5234 = *(undefined2 *)0xa102;
            *(undefined2 *)0x5236 = *(undefined2 *)0xa104;
            *(undefined2 *)0x5238 = *(undefined2 *)0xa106;
            unaff_SI = 0;
          }
          else {
            piStack_a = (int *)0xc556;
            func_0x00029834();
            piStack_a = (int *)0x22b2;
            piStack_c = (int *)0xc560;
            FUN_28b3_112c();
            piStack_a = (int *)0xc566;
            func_0x000299d1();
          }
        }
        if (local_76 == 3) {
          piStack_a = (int *)0xc589;
          func_0x00029834();
          piStack_a = (int *)0x22b2;
          piStack_c = (int *)0xc593;
          func_0x00029c2c();
          piStack_a = (int *)0xc599;
          func_0x000299d1();
        }
        if (local_76 == 2) {
          piStack_a = (int *)0xc5a7;
          func_0x00029834();
          piStack_a = (int *)0x22b2;
          piStack_c = (int *)0xc5b1;
          FUN_28b3_10e4();
          piStack_a = (int *)0xc5b7;
          func_0x000299d1();
        }
        if (local_76 == 1) {
          piStack_a = (int *)0xc5c5;
          func_0x00029834();
          piStack_a = (int *)0x22b2;
          piStack_c = (int *)0xc5cf;
          func_0x00029c74();
          piStack_a = (int *)0xc5d5;
          func_0x000299d1();
        }
        piVar8 = (int *)0x22b2;
        local_76 = 0xffff;
        if (unaff_SI == 0x6700) {
          local_76 = 5;
        }
        if (unaff_SI == 0x2f) {
          local_76 = 4;
        }
        if (unaff_SI == 0x2a) {
          local_76 = 3;
        }
        if (unaff_SI == 0x2d) {
          local_76 = 2;
        }
        if (unaff_SI == 0x2b) {
          local_76 = 1;
        }
      }
      goto LAB_3ab8_109f;
    }
    if ((0x67ff < (int)unaff_SI) && ((int)unaff_SI < 0x6b01)) {
      piStack_a = (int *)0x5223;
      piStack_c = &local_6e;
      local_10 = (int *)0xc64a;
      piStack_e = piVar8;
      func_0x000253ce();
      uVar11 = &stack0x0000 == (undefined1 *)0x6;
      piStack_a = (int *)0xc655;
      func_0x00029834();
      piStack_a = (int *)0xc65e;
      func_0x00029834();
      piStack_a = (int *)0xc663;
      FUN_28b3_1181();
      if ((bool)uVar11) {
        piStack_a = (int *)0xc66e;
        func_0x00029834();
        piStack_a = (int *)0xc677;
        func_0x00029834();
        piStack_a = (int *)0xc67c;
        FUN_28b3_1181();
        if ((!(bool)uVar11) && ((int)local_76 < 1)) {
          local_20 = (int *)*(int *)0x5232;
          local_1e = (int *)*(int *)0x5234;
          local_1c = (int *)*(int *)0x5236;
          local_1a = *(int *)0x5238;
        }
      }
      uVar11 = unaff_SI < 0x6800;
      uVar12 = unaff_SI == 0x6800;
      if ((bool)uVar12) break;
      goto LAB_3ab8_1b51;
    }
    if (unaff_SI == 0x5e) {
      if (local_3a == 0) {
        piStack_a = (int *)0x5229;
        piStack_c = &local_6e;
        local_10 = (int *)0xc980;
        piStack_e = piVar8;
        func_0x000253ce();
        uVar11 = &stack0x0000 == (undefined1 *)0x6;
        piStack_a = (int *)0xc98b;
        func_0x00029834();
        piStack_a = (int *)0xc994;
        func_0x00029834();
        piStack_a = (int *)0xc999;
        FUN_28b3_1181();
        if ((bool)uVar11) {
          piStack_a = (int *)0xc9dc;
          func_0x00029834();
          piStack_a = (int *)0xc9e1;
          func_0x00029af6();
          piVar8 = (int *)0x22b2;
          piStack_a = (int *)0xc9ea;
          func_0x000299d1();
          if (local_76 == 0) goto LAB_3ab8_1d6c;
          goto LAB_3ab8_109f;
        }
        piStack_a = (int *)0xc9a3;
        func_0x00029834();
        piStack_a = (int *)0xc9a8;
        func_0x00029af6();
        piVar8 = (int *)0x22b2;
        piStack_a = (int *)0xc9b0;
        func_0x000299d1();
        piStack_a = (int *)local_1a;
        piStack_c = local_1c;
        piStack_e = local_1e;
        local_10 = local_20;
        local_12 = &local_6e;
        local_14 = 0x22b2;
        local_16 = -0x3638;
        FUN_3ab8_0dcf();
        local_28 = 0x14;
      }
      else {
        piStack_a = (int *)0xc90c;
        func_0x00029834();
        piStack_a = (int *)0xc911;
        func_0x00029af6();
        piStack_a = (int *)0xc91a;
        func_0x000299d1();
        piStack_a = (int *)0x22b2;
        piStack_c = (int *)0xc922;
        FUN_3ab8_0f7b();
        piStack_a = (int *)*(undefined2 *)0x5238;
        piStack_c = (int *)*(undefined2 *)0x5236;
        piStack_e = (int *)*(undefined2 *)0x5234;
        local_10 = (int *)*(undefined2 *)0x5232;
        local_12 = (int *)0xbea4;
        local_14 = 0x22b2;
        local_16 = -0x36c1;
        local_72 = FUN_3ab8_0dcf();
        piStack_a = (int *)0x7;
        piStack_c = (int *)0x14;
        piStack_e = (int *)0xbea4;
        local_10 = (int *)0x22b2;
        local_12 = (int *)0xc959;
        iVar4 = func_0x00024ce4();
        piStack_e = (int *)-(iVar4 + -0xe);
        local_10 = (int *)0xbea4;
        local_12 = (int *)0x22b2;
        piVar8 = (int *)0xdef;
        local_14 = 0xc969;
        FUN_1000_02b5();
      }
    }
    else {
      if ((int)local_76 < 1) {
        local_76 = 1;
        *(undefined2 *)0x5232 = *(undefined2 *)0xa0d8;
        *(undefined2 *)0x5234 = *(undefined2 *)0xa0da;
        *(undefined2 *)0x5236 = *(undefined2 *)0xa0dc;
        *(undefined2 *)0x5238 = *(undefined2 *)0xa0de;
        piStack_c = (int *)0xca17;
        FUN_3ab8_0f7b();
      }
      if (((0x30 < (int)unaff_SI) && ((int)unaff_SI < 0x3a)) && (local_28 < 10)) {
        *(undefined1 *)((int)&local_6e + local_28) = (char)unaff_SI;
        iVar4 = local_28 + 1;
        local_28 = local_28 + 1;
        *(undefined1 *)((int)&local_6e + iVar4) = 0;
      }
      if (((unaff_SI == 0x30) && (local_28 != 0)) && (local_28 < 10)) {
        *(undefined1 *)((int)&local_6e + local_28) = 0x30;
        iVar4 = local_28 + 1;
        local_28 = local_28 + 1;
        *(undefined1 *)((int)&local_6e + iVar4) = 0;
      }
      if (((unaff_SI == 0x2e) && (unaff_DI == 0)) && (local_28 < 10)) {
        if (local_28 == 0) {
          local_28 = 1;
        }
        *(undefined1 *)((int)&local_6e + local_28) = 0x2e;
        iVar4 = local_28 + 1;
        local_28 = local_28 + 1;
        *(undefined1 *)((int)&local_6e + iVar4) = 0;
        unaff_DI = 1;
      }
    }
  } while( true );
  piStack_a = (int *)0xc69f;
  func_0x00029834();
  piStack_a = (int *)0xc6a8;
  func_0x00029834();
  piVar8 = (int *)0x22b2;
  piStack_a = (int *)0xc6ad;
  FUN_28b3_1181();
  if (!(bool)uVar11 && !(bool)uVar12) goto LAB_3ab8_1231;
  piStack_a = local_1c;
  piStack_c = local_1e;
  piStack_e = local_20;
  local_10 = (int *)0x22b2;
  local_12 = (int *)0xc6c3;
  piVar8 = (int *)FUN_28b3_1582();
  local_20 = (int *)*piVar8;
  local_1e = (int *)piVar8[1];
  local_1c = (int *)piVar8[2];
  local_1a = piVar8[3];
LAB_3ab8_1b51:
  if (unaff_SI == 0x6900) {
    piStack_a = (int *)0xc6e1;
    func_0x00029834();
    piStack_a = (int *)0xc6e9;
    func_0x00029c2c();
    local_10 = (int *)0x22b2;
    local_12 = (int *)0xc6f3;
    func_0x000299d1();
    local_10 = (int *)0x22b2;
    local_12 = (int *)0xc6f8;
    piVar8 = (int *)func_0x0002a11e();
    local_20 = (int *)*piVar8;
    local_1e = (int *)piVar8[1];
    local_1c = (int *)piVar8[2];
    local_1a = piVar8[3];
  }
  if (unaff_SI == 0x6a00) {
    piStack_a = (int *)0xc716;
    func_0x00029834();
    piStack_a = (int *)0xc71e;
    func_0x00029c2c();
    local_10 = (int *)0x22b2;
    local_12 = (int *)0xc728;
    func_0x000299d1();
    local_10 = (int *)0x22b2;
    local_12 = (int *)0xc72d;
    piVar8 = (int *)func_0x0002a10c();
    local_20 = (int *)*piVar8;
    local_1e = (int *)piVar8[1];
    local_1c = (int *)piVar8[2];
    local_1a = piVar8[3];
  }
  if (unaff_SI == 0x6b00) {
    piStack_a = local_1c;
    piStack_c = local_1e;
    piStack_e = local_20;
    local_10 = (int *)0x22b2;
    local_12 = (int *)0xc753;
    func_0x0002a166();
    piStack_a = (int *)0xc75d;
    func_0x00029834();
    piStack_a = (int *)0xc766;
    func_0x00029c44();
    piStack_a = (int *)0xc76e;
    func_0x000299d1();
  }
  uVar11 = local_76 < 5;
  uVar12 = local_76 == 5;
  if ((bool)uVar12) {
    piStack_a = (int *)0xc77f;
    func_0x00029834();
    piStack_a = (int *)0xc788;
    func_0x00029834();
    piStack_a = (int *)0xc78d;
    FUN_28b3_1181();
    if ((bool)uVar12) {
      piStack_a = (int *)0xc798;
      func_0x00029834();
      piStack_a = (int *)0xc7a1;
      func_0x00029834();
      piStack_a = (int *)0xc7a6;
      FUN_28b3_1181();
      if ((bool)uVar12) goto LAB_3ab8_1cb3;
    }
    uVar12 = 0;
    piStack_a = (int *)0xc7b4;
    func_0x00029834();
    piStack_a = (int *)0xc7bd;
    func_0x00029834();
    piStack_a = (int *)0xc7c2;
    FUN_28b3_1181();
    if ((bool)uVar11) {
      piStack_a = (int *)0xc7cc;
      func_0x00029834();
      piStack_a = (int *)0xc7d4;
      func_0x00029834();
      piStack_a = (int *)0xc7d9;
      FUN_28b3_0f51();
      piStack_a = (int *)0xc7e6;
      FUN_28b3_0d8b();
      piStack_a = (int *)0xc7eb;
      FUN_28b3_1181();
      if (!(bool)uVar12) {
        *(undefined2 *)0x5232 = *(undefined2 *)0xa100;
        *(undefined2 *)0x5234 = *(undefined2 *)0xa102;
        *(undefined2 *)0x5236 = *(undefined2 *)0xa104;
        *(undefined2 *)0x5238 = *(undefined2 *)0xa106;
        unaff_SI = 0;
        goto LAB_3ab8_1cb3;
      }
    }
    piStack_a = local_1c;
    piStack_c = local_1e;
    piStack_e = local_20;
    local_10 = (int *)*(int *)0x5238;
    local_12 = (int *)*(int *)0x5236;
    local_14 = *(int *)0x5234;
    local_16 = *(int *)0x5232;
    uStack_18 = 0x22b2;
    local_1a = -0x37f2;
    puVar5 = (undefined2 *)func_0x0002a0c4();
    *(undefined2 *)0x5232 = *puVar5;
    *(undefined2 *)0x5234 = puVar5[1];
    *(undefined2 *)0x5236 = puVar5[2];
    *(undefined2 *)0x5238 = puVar5[3];
  }
LAB_3ab8_1cb3:
  uVar11 = local_76 == 4;
  if ((bool)uVar11) {
    piStack_a = (int *)0xc841;
    func_0x00029834();
    piStack_a = (int *)0xc84a;
    func_0x00029834();
    piStack_a = (int *)0xc84f;
    FUN_28b3_1181();
    if ((bool)uVar11) {
      *(undefined2 *)0x5232 = *(undefined2 *)0xa100;
      *(undefined2 *)0x5234 = *(undefined2 *)0xa102;
      *(undefined2 *)0x5236 = *(undefined2 *)0xa104;
      *(undefined2 *)0x5238 = *(undefined2 *)0xa106;
      unaff_SI = 0;
    }
    else {
      piStack_a = (int *)0xc859;
      func_0x00029834();
      piStack_a = (int *)0x22b2;
      piStack_c = (int *)0xc863;
      FUN_28b3_112c();
      piStack_a = (int *)0xc869;
      func_0x000299d1();
    }
  }
  if (local_76 == 3) {
    piStack_a = (int *)0xc88c;
    func_0x00029834();
    piStack_a = (int *)0x22b2;
    piStack_c = (int *)0xc896;
    func_0x00029c2c();
    piStack_a = (int *)0xc89c;
    func_0x000299d1();
  }
  if (local_76 == 2) {
    piStack_a = (int *)0xc8aa;
    func_0x00029834();
    piStack_a = (int *)0x22b2;
    piStack_c = (int *)0xc8b4;
    FUN_28b3_10e4();
    piStack_a = (int *)0xc8ba;
    func_0x000299d1();
  }
  if (local_76 == 1) {
    piStack_a = (int *)0xc8c8;
    func_0x00029834();
    piStack_a = (int *)0x22b2;
    piStack_c = (int *)0xc8d2;
    func_0x00029c74();
    piStack_a = (int *)0xc8d8;
    func_0x000299d1();
  }
  if ((int)local_76 < 1) {
    *(int *)0x5232 = (int)local_20;
    *(int *)0x5234 = (int)local_1e;
    *(int *)0x5236 = (int)local_1c;
    *(int *)0x5238 = local_1a;
  }
LAB_3ab8_1d6c:
  piVar8 = (int *)0x22b2;
  local_76 = 0xffff;
  goto LAB_3ab8_109f;
}



/* 3ab8:202d  FUN_3ab8_202d  9794 bytes, 1 callers */

void FUN_3ab8_202d(undefined2 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined2 *puVar4;
  int iVar5;
  int unaff_SI;
  int *piVar6;
  int unaff_DI;
  int *piVar7;
  undefined2 uVar8;
  int *piVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  long lVar13;
  int *piVar14;
  int local_26a;
  int local_268;
  undefined1 local_266 [20];
  int local_252 [20];
  undefined1 local_22a [40];
  int local_202 [50];
  int local_19e;
  int local_19c;
  int local_196;
  int local_194;
  int local_182;
  int local_180;
  int local_16e;
  int local_16c;
  int local_15a;
  int local_158;
  int local_156;
  int local_154;
  int local_152;
  int local_150;
  int local_14e;
  int local_14c;
  int local_14a;
  int local_148;
  int local_146;
  int local_144;
  int local_142;
  int local_140;
  int local_13e;
  int local_13c;
  int *local_13a;
  undefined2 local_138;
  undefined2 local_136;
  int local_134;
  int local_132;
  undefined2 local_12c;
  undefined2 local_12a;
  int local_124;
  int local_122;
  undefined2 local_120;
  undefined2 local_11e;
  int local_11c;
  int local_11a;
  int local_118;
  int local_116;
  undefined2 local_114;
  undefined2 uStack_112;
  undefined2 uStack_110;
  undefined2 uStack_10e;
  int local_10c;
  int local_10a;
  int local_108;
  int local_106;
  int local_100 [64];
  int *local_80;
  int local_7e;
  int local_7c;
  int local_7a;
  int local_78;
  int local_76;
  int local_74;
  int *local_6e;
  int local_6c;
  int local_6a;
  int local_68;
  int *local_66;
  undefined4 local_64;
  int local_60;
  int local_5e;
  int local_5c;
  int local_5a;
  int local_50;
  int local_4e;
  int *local_4c;
  int local_4a;
  int local_48;
  int local_46;
  undefined2 local_40;
  undefined2 local_3e;
  int local_3c;
  int local_3a;
  int local_38;
  int local_36;
  int local_34;
  int local_32;
  int local_30;
  int local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 uStack_28;
  uint local_26;
  int local_24 [3];
  int in_stack_0000ffe2;
  int local_1c;
  int *piStack_1a;
  int local_18;
  int *piStack_16;
  int *local_14;
  int *piStack_12;
  int *local_10;
  int *piStack_e;
  int *piStack_c;
  
  uVar8 = 0x22b2;
  FUN_21f2_0ebc();
  local_4c = (int *)0x0;
  uVar10 = *(undefined2 *)0xa0aa;
  *(undefined2 *)0xb76a = *(undefined2 *)0xa0a8;
  *(undefined2 *)0xb76c = uVar10;
  local_196 = *(int *)0xa0c4;
  local_194 = *(int *)0xa0c6;
  *(int *)0xb784 = local_196;
  *(int *)0xb786 = local_194;
  if (param_2 == 1) {
LAB_3ab8_2064:
    do {
      while( true ) {
        piStack_e = (int *)0xcbf2;
        piStack_c = (int *)uVar8;
        FUN_21f2_3454();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xcc02;
        FUN_21f2_2d26();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xcc12;
        FUN_21f2_2d26();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xcc22;
        FUN_21f2_2d26();
        *(undefined2 *)0xc20 = 1;
        *(undefined2 *)0xc2c = 1;
        piStack_c = &local_134;
        piStack_e = local_100;
        local_10 = local_4c;
        piStack_12 = (int *)0x22b2;
        uVar8 = 0x1bb4;
        local_14 = (int *)0xcc48;
        local_122 = FUN_1def_0904();
        *(undefined2 *)0xc20 = 0;
        *(undefined2 *)0xc2c = 0;
        if (*(int *)0x158 != 0) {
          return;
        }
        if (local_122 == 0x14) {
          return;
        }
        if (local_122 != -1) break;
        if (0 < (int)local_4c) {
          piStack_c = (int *)0xcc7c;
          func_0x0000daa6();
          piStack_c = (int *)0x885;
          for (local_80 = (int *)0x1; (int)local_80 <= (int)local_4c;
              local_80 = (int *)((int)local_80 + 1)) {
            local_138 = *(undefined2 *)0x148;
            local_136 = *(undefined2 *)0x14a;
            piStack_e = (int *)0xcc9a;
            func_0x00018779();
            piStack_c = (int *)0x11f2;
          }
          piStack_c = (int *)0xccb0;
          func_0x0000b1d8();
          uVar8 = 0x885;
          func_0x0000abfa();
        }
        local_4c = (int *)0x0;
      }
      if (local_66 == (int *)0x0) break;
      piStack_c = local_66;
      piStack_e = (int *)0x1bb4;
      uVar8 = 0x11f2;
      local_10 = (int *)0xccd5;
      iVar5 = func_0x00015409();
    } while (iVar5 == 0);
    local_7a = local_134;
    local_78 = local_132;
    local_10c = local_146;
    local_10a = local_144;
LAB_3ab8_217d:
    piStack_e = (int *)0xcd0b;
    piStack_c = (int *)uVar8;
    FUN_21f2_3454();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xcd1b;
    FUN_21f2_2d26();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xcd2b;
    FUN_21f2_2d26();
    piStack_c = &local_134;
    piStack_e = local_100;
    *(undefined2 *)0xc20 = 1;
    local_10 = (int *)0x1;
    piStack_12 = (int *)0x22b2;
    uVar8 = 0x1bb4;
    local_14 = (int *)0xcd4c;
    local_122 = FUN_1def_0904();
    local_4c = (int *)0x0;
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_122 != -1) {
      if (local_66 != (int *)0x0) goto code_r0x0003cd73;
      goto LAB_3ab8_220f;
    }
    goto LAB_3ab8_2064;
  }
  if (param_2 == 2) {
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xd39e;
    FUN_21f2_3454();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xd3ae;
    FUN_21f2_3454();
    piStack_c = (int *)0x22b2;
    uVar10 = 0x22b2;
    piStack_e = (int *)0xd3be;
    FUN_21f2_3454();
LAB_3ab8_2840:
    do {
      piStack_c = (int *)0x528b;
      piStack_e = local_100;
      piStack_12 = (int *)0xd3d4;
      local_10 = (int *)uVar10;
      FUN_21f2_3454();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xd3e5;
      FUN_1def_07a4();
      *(undefined2 *)0xc2c = 1;
      piStack_c = &local_134;
      piStack_e = local_100;
      local_10 = (int *)0x0;
      piStack_12 = (int *)0x1bb4;
      uVar10 = 0x1bb4;
      local_14 = (int *)0xd408;
      local_124 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_124 == 0x14) {
        return;
      }
    } while ((local_124 < 1) || (2 < local_124));
LAB_3ab8_28ae:
    if (local_124 == 2) goto code_r0x0003d435;
    goto LAB_3ab8_291e;
  }
  if (param_2 != 3) {
    return;
  }
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xe6be;
  local_182 = local_196;
  local_180 = local_194;
  local_16e = local_196;
  local_16c = local_194;
  local_15a = local_196;
  local_158 = local_194;
  local_156 = local_196;
  local_154 = local_194;
  local_152 = local_196;
  local_150 = local_194;
  local_14e = local_196;
  local_14c = local_194;
  local_14a = local_196;
  local_148 = local_194;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xe6ce;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piVar9 = (int *)0x22b2;
  piStack_e = (int *)0xe6de;
  FUN_21f2_3454();
LAB_3ab8_3b60:
  do {
    do {
      local_10c = *(int *)0xa0c4;
      local_10a = *(int *)0xa0c6;
      local_182 = local_10c;
      local_180 = local_10a;
      if (*(int *)0xcb6 != 0) {
        local_182 = *(int *)0xcc2;
        local_180 = *(int *)0xcc4;
      }
      piStack_e = (int *)0xe72d;
      local_7a = local_10c;
      local_78 = local_10a;
      local_50 = local_10c;
      local_4e = local_10a;
      local_4a = local_10c;
      local_48 = local_10a;
      piStack_c = piVar9;
      FUN_21f2_3454();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe73d;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe74d;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe75d;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe76d;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe77d;
      FUN_21f2_2d26();
      if (*(char *)0x53f9 == '\0') {
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xe795;
        FUN_21f2_2d26();
      }
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe7b1;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe7c2;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe7e0;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe7f0;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe801;
      FUN_21f2_2d26();
      if (*(char *)0x53f9 != '\0') {
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xe819;
        FUN_21f2_2d26();
      }
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe829;
      FUN_21f2_2d26();
      if ((*(char *)0x124 != '\0') && (*(char *)0x53f9 == '\0')) {
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xe847;
        FUN_21f2_2d26();
      }
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe857;
      FUN_1def_07a4();
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xc2c = 1;
      piStack_c = &local_134;
      piStack_e = local_202;
      local_10 = (int *)0x0;
      piStack_12 = (int *)0x1bb4;
      piVar9 = (int *)0x1bb4;
      local_14 = (int *)0xe87d;
      local_122 = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xc2c = 0;
      if ((*(int *)0x158 != 0) || (local_122 == 0x14)) {
        return;
      }
      if (local_122 == 2) {
        *(char *)0x53f9 = '\x01' - *(char *)0x53f9;
      }
      if (local_122 == 3) {
        *(char *)0x134 = '\x01' - *(char *)0x134;
      }
    } while ((local_122 != 0) && (local_122 != 1));
    if ((local_122 != 0) || (local_66 == (int *)0x0)) break;
    piStack_c = local_66;
    piStack_e = (int *)0x1bb4;
    piVar9 = (int *)0x11f2;
    local_10 = (int *)0xe8ef;
    iVar5 = func_0x00015409();
  } while (iVar5 == 0);
  if (local_122 == 1) {
    local_146 = *(int *)0xa0c4;
    local_144 = *(int *)0xa0c6;
    local_134 = local_146;
    local_132 = local_144;
  }
  local_7e = local_146;
  local_7c = local_144;
  func_0x000297e6();
  func_0x0002996b();
  func_0x00029983();
  local_10c = local_146;
  local_10a = local_144;
  local_4c = (int *)0x0;
LAB_3ab8_3dd3:
  while( true ) {
    while( true ) {
      func_0x0001bb4e();
      if ((int)local_4c < 1) {
        piStack_c = (int *)0x1bb4;
        piStack_e = (int *)0xe96b;
        FUN_1000_0599();
      }
      else {
        piStack_c = (int *)0xe97b;
        func_0x00012276();
        piStack_c = (int *)0xe991;
        func_0x00012276();
      }
      piStack_c = (int *)0xe99b;
      func_0x00012276();
      piStack_c = (int *)0x11f2;
      piStack_e = (int *)0xe9aa;
      FUN_21f2_3454();
      if ((*(char *)0x53f9 == '\0') && (*(char *)0x134 != '\0')) {
        local_26a = local_50;
        local_268 = local_4e;
        local_19e = local_4a;
        local_19c = local_48;
      }
      else {
        local_26a = local_4a;
        local_268 = local_48;
        local_19e = local_50;
        local_19c = local_4e;
      }
      piStack_c = (int *)local_268;
      piStack_e = (int *)local_26a;
      local_10 = (int *)0x53bb;
      piStack_12 = (int *)local_22a;
      local_14 = (int *)0x22b2;
      uVar10 = 0x11f2;
      piStack_16 = (int *)0xea0a;
      FUN_10ad_1928();
      if (*(char *)0x53f9 != '\0') {
        piStack_c = (int *)0xea1d;
        func_0x000297e6();
        piStack_c = (int *)0xea22;
        func_0x00029d78();
        piStack_12 = (int *)0x22b2;
        local_14 = (int *)0xea2c;
        func_0x000299d1();
        piStack_12 = (int *)0x53c0;
        local_14 = (int *)local_22a;
        piStack_16 = (int *)0x22b2;
        uVar10 = 0x22b2;
        local_18 = -0x15c6;
        FUN_21f2_3454();
      }
      piStack_c = (int *)*(undefined2 *)0xa0c4;
      piStack_e = (int *)local_19c;
      local_10 = (int *)local_19e;
      piStack_12 = (int *)0x53c6;
      local_14 = local_252;
      local_18 = -0x15a5;
      piStack_16 = (int *)uVar10;
      FUN_10ad_1928();
      piStack_c = (int *)local_22a;
      piStack_e = local_202;
      local_10 = (int *)0x11f2;
      piStack_12 = (int *)0xea6d;
      FUN_21f2_2d26();
      piStack_c = local_252;
      piStack_e = local_202;
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xea7e;
      FUN_21f2_2d26();
      piStack_c = local_202;
      piStack_e = (int *)0x22b2;
      uVar10 = 0x22b2;
      local_10 = (int *)0xea8a;
      iVar5 = func_0x00024ce4();
      local_13a = (int *)-(iVar5 + -0x50);
      if (*(int *)0xc22 == 0) {
        piStack_c = (int *)0xffff;
        piStack_e = (int *)0x7;
        local_10 = (int *)0x2;
        local_14 = local_202;
        piStack_16 = (int *)0x22b2;
        uVar10 = 0xdef;
        local_18 = -0x154b;
        piStack_12 = local_13a;
        FUN_1000_02b5();
      }
      piStack_c = (int *)0x1;
      piStack_e = (int *)0x17;
      piStack_12 = (int *)0xeac5;
      local_10 = (int *)uVar10;
      FUN_1000_0599();
      piStack_c = (int *)local_266;
      piStack_e = (int *)0xdef;
      local_10 = (int *)0xead1;
      func_0x00012276();
      if (*(char *)0x53f9 == '\0') {
        piStack_c = (int *)0x53ce;
        piStack_e = (int *)0x11f2;
        local_10 = (int *)0xeae2;
        func_0x00012276();
        if (*(char *)0x134 == '\0') {
          piStack_c = (int *)0x53d0;
        }
        else {
          piStack_c = (int *)0x53d4;
        }
      }
      else {
        piStack_c = (int *)0x53d8;
      }
      piStack_e = (int *)0x11f2;
      local_10 = (int *)0xeafd;
      func_0x00012276();
      piStack_c = (int *)0x53dd;
      piStack_e = (int *)0x11f2;
      local_10 = (int *)0xeb07;
      func_0x00012276();
      piStack_c = (int *)0x1;
      piStack_e = (int *)0x3a;
      local_10 = (int *)0x11f2;
      piStack_12 = (int *)0xeb15;
      FUN_1000_0599();
      piStack_c = (int *)0x53df;
      piStack_e = (int *)0xdef;
      local_10 = (int *)0xeb20;
      func_0x00012276();
      piStack_c = (int *)0x744;
      piStack_e = (int *)0x11f2;
      local_10 = (int *)0xeb2a;
      func_0x00012276();
      piStack_c = (int *)0x11f2;
      piStack_e = (int *)0xeb34;
      func_0x000297e6();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xeb39;
      func_0x00029d78();
      local_14 = (int *)0x22b2;
      piStack_16 = (int *)0xeb43;
      func_0x000299d1();
      local_14 = (int *)0x53e1;
      piStack_16 = (int *)0x22b2;
      local_18 = -0x14b4;
      func_0x00012276();
      piStack_c = (int *)0x53e8;
      piStack_e = (int *)0x11f2;
      local_10 = (int *)0xeb58;
      func_0x00012276();
      piStack_c = (int *)0x6e2;
      piStack_e = (int *)0x11f2;
      local_10 = (int *)0xeb62;
      func_0x00012276();
      piStack_c = (int *)0x53eb;
      piStack_e = (int *)0x11f2;
      local_10 = (int *)0xeb6c;
      func_0x00012276();
      if ((*(char *)0x53f9 == '\0') && (*(char *)0x134 != '\0')) {
        local_14 = &local_4a;
        piStack_16 = &local_50;
      }
      else {
        local_14 = &local_50;
        piStack_16 = &local_4a;
      }
      local_10 = &local_146;
      piStack_12 = &local_134;
      piStack_c = (int *)0x1;
      piStack_e = (int *)0x22;
      local_18 = 0x11f2;
      piStack_1a = (int *)0xebb5;
      local_26 = func_0x000021a4();
      piVar9 = (int *)0xad;
      for (local_80 = local_13a; (int)local_80 < 0x50; local_80 = (int *)((int)local_80 + 1)) {
        piStack_c = (int *)0x2;
        piStack_e = local_80;
        local_10 = (int *)0x53ee;
        local_14 = (int *)0xebdb;
        piStack_12 = piVar9;
        FUN_1000_02b5();
        piVar9 = (int *)0xdef;
      }
      if (*(int *)0x158 != 0) {
        return;
      }
      local_66 = (int *)(uint)(local_26 == 0x65);
      if (local_26 == 0x66) {
        local_66 = (int *)0x2;
      }
      if (local_66 == (int *)0x0) break;
      piStack_c = local_66;
      local_10 = (int *)0xec24;
      piStack_e = piVar9;
      iVar5 = func_0x00015409();
      if (iVar5 != 0) {
        local_3c = local_7a;
        local_3a = local_78;
        local_38 = local_10c;
        local_36 = local_10a;
        local_34 = local_134;
        local_32 = local_132;
        local_30 = local_146;
        local_2e = local_144;
        goto LAB_3ab8_4636;
      }
    }
    if (local_26 != 0xffff) goto LAB_3ab8_42f8;
    if (local_4c == (int *)0x0) break;
    if (1 < (int)local_4c) {
      piStack_e = (int *)0xec8f;
      piStack_c = piVar9;
      piVar14 = (int *)func_0x0000013f();
      piVar6 = (int *)piVar14;
      piVar9 = &local_1c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        piVar1 = piVar9;
        piVar9 = piVar9 + 1;
        piVar2 = piVar6;
        piVar6 = piVar6 + 1;
        *piVar1 = *piVar2;
      }
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      func_0x00029983();
      piStack_c = (int *)0xeced;
      func_0x0000daa6();
      local_138 = *(undefined2 *)0x148;
      local_136 = *(undefined2 *)0x14a;
      piStack_c = (int *)0x885;
      piStack_e = (int *)0xed04;
      func_0x00018779();
      piStack_c = (int *)0xed0f;
      func_0x0000b1d8();
      func_0x0000abfa();
      if ((*(char *)0x53f9 != '\0') && (*(char *)0x53f8 != '\0')) {
        piStack_c = (int *)0x885;
        piStack_e = (int *)0xed33;
        piVar14 = (int *)func_0x0000013f();
        piVar6 = (int *)piVar14;
        piVar9 = &local_1c;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          piVar1 = piVar9;
          piVar9 = piVar9 + 1;
          piVar2 = piVar6;
          piVar6 = piVar6 + 1;
          *piVar1 = *piVar2;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x0002996b();
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        piStack_12 = (int *)0xed8f;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        piStack_12 = (int *)0xed98;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        piStack_12 = (int *)0xed9d;
        func_0x00029d78();
        local_18 = 0x22b2;
        piStack_1a = (int *)0xeda7;
        func_0x000299d1();
        local_18 = 0x22b2;
        piStack_1a = (int *)0xedac;
        func_0x0002a178();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029983();
      }
    }
    if (local_4c == (int *)0x2) {
      local_7a = local_156;
      local_78 = local_154;
      local_10c = local_152;
      local_10a = local_150;
      if ((*(char *)0x53f9 != '\0') && (*(char *)0x53f8 != '\0')) {
        local_182 = *(int *)0xa0c4;
        local_180 = *(int *)0xa0c6;
        if (*(int *)0xcb6 != 0) {
          local_182 = *(int *)0xcc2;
          local_180 = *(int *)0xcc4;
        }
      }
    }
    if (local_4c == (int *)0x1) {
      local_7a = local_60;
      local_78 = local_5e;
      local_10c = local_7e;
      local_10a = local_7c;
      if ((*(char *)0x53f9 != '\0') && (*(char *)0x53f8 != '\0')) {
        local_182 = *(int *)0xa0c4;
        local_180 = *(int *)0xa0c6;
        if (*(int *)0xcb6 != 0) {
          local_182 = *(int *)0xcc2;
          local_180 = *(int *)0xcc4;
        }
      }
    }
    local_4c = (int *)((int)local_4c + -1);
  }
  goto LAB_3ab8_3b60;
code_r0x0003cd73:
  piStack_c = local_66;
  piStack_e = (int *)0x1bb4;
  uVar8 = 0x11f2;
  local_10 = (int *)0xcd85;
  iVar5 = func_0x00015409();
  if (iVar5 == 0) goto LAB_3ab8_217d;
LAB_3ab8_220f:
  local_118 = local_146;
  local_116 = local_144;
  func_0x000297e6();
  func_0x00029d78();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xcdb7;
  func_0x000299d1();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xcdc0;
  func_0x000297e6();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xcdc9;
  func_0x0002996b();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xcdce;
  func_0x00029d78();
  local_18 = 0x22b2;
  piStack_1a = (int *)0xcdd8;
  func_0x000299d1();
  local_18 = 0x22b2;
  piStack_1a = (int *)0xcde1;
  func_0x000297e6();
  local_18 = 0x22b2;
  piStack_1a = (int *)0xcde6;
  func_0x00029d78();
  local_24[2] = 0x22b2;
  local_24[1] = 0xcdf0;
  func_0x000299d1();
  local_24[2] = 0x22b2;
  local_24[1] = 0xcdf8;
  func_0x000297e6();
  local_24[2] = 0x22b2;
  local_24[1] = 0xcdfd;
  func_0x00029d78();
  uStack_28 = 0x22b2;
  local_2a = 0xce07;
  func_0x000299d1();
  uStack_28 = 0x22b2;
  local_2a = 0xce0c;
  puVar4 = (undefined2 *)FUN_1def_06ff();
  uVar12 = &stack0x0000 == (undefined1 *)0x6;
  local_40 = *puVar4;
  local_3e = puVar4[1];
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar12) {
    func_0x000297e6();
    func_0x000297e6();
    uVar8 = 0x22b2;
    FUN_28b3_1181();
    if ((bool)uVar12) goto LAB_3ab8_217d;
  }
  func_0x000297e6();
  func_0x00029d78();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xce68;
  func_0x000299d1();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xce71;
  func_0x000297e6();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xce76;
  func_0x00029d78();
  local_18 = 0x22b2;
  piStack_1a = (int *)0xce80;
  func_0x000299d1();
  local_18 = 0x22b2;
  piStack_1a = (int *)0xce89;
  func_0x000297e6();
  local_18 = 0x22b2;
  piStack_1a = (int *)0xce8e;
  func_0x00029d78();
  local_24[2] = 0x22b2;
  local_24[1] = 0xce98;
  func_0x000299d1();
  local_24[2] = 0x22b2;
  local_24[1] = 0xcea0;
  func_0x000297e6();
  local_24[2] = 0x22b2;
  local_24[1] = 0xcea5;
  func_0x00029d78();
  uStack_28 = 0x22b2;
  local_2a = 0xceaf;
  func_0x000299d1();
  uStack_28 = 0x22b2;
  uVar8 = 0x1bb4;
  local_2a = 0xceb4;
  iVar5 = FUN_1def_043a();
  if (iVar5 == 0) goto LAB_3ab8_217d;
LAB_3ab8_233e:
  do {
    local_4a = *(int *)0x102e;
    local_48 = *(undefined2 *)0x1030;
    local_50 = *(int *)0x1032;
    local_4e = *(undefined2 *)0x1034;
    func_0x0000c340();
    func_0x00010526();
    func_0x0000c340();
    piStack_c = (int *)0xcef0;
    func_0x00012276();
    piStack_c = (int *)*(undefined2 *)0x1030;
    piStack_e = (int *)*(undefined2 *)0x102e;
    local_10 = (int *)0x5253;
    piStack_12 = local_100;
    local_14 = (int *)0x11f2;
    piStack_16 = (int *)0xcf0f;
    FUN_10ad_1928();
    piStack_c = (int *)0x22;
    piStack_e = (int *)0x11f2;
    local_10 = (int *)0xcf1f;
    FUN_1000_0599();
    piStack_c = (int *)0x31e;
    piStack_e = (int *)0x5263;
    local_10 = (int *)0xdef;
    piStack_12 = (int *)0xcf33;
    func_0x00012276();
    piStack_c = (int *)0xe;
    piStack_e = &local_146;
    local_10 = &local_134;
    piStack_12 = &local_50;
    local_14 = &local_4a;
    piStack_16 = (int *)0x11f2;
    uVar8 = 0xad;
    local_18 = -0x30ab;
    local_26 = func_0x000021a4();
    if (local_26 == 0xffff) goto LAB_3ab8_217d;
    uVar12 = 0;
    uVar11 = *(int *)0x158 == 0;
    if (!(bool)uVar11) {
      return;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
  } while (!(bool)uVar12);
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar12 || (bool)uVar11) goto LAB_3ab8_233e;
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)uVar12 && !(bool)uVar11) goto LAB_3ab8_233e;
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((!(bool)uVar12 && !(bool)uVar11) || ((local_26 != 0x66 && (local_26 != 0))))
  goto LAB_3ab8_233e;
  uVar12 = local_26 < 99;
  uVar11 = local_26 == 99;
  if ((bool)uVar11) goto LAB_3ab8_233e;
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029bb5();
  FUN_28b3_1181();
  if ((bool)uVar12 || (bool)uVar11) goto LAB_3ab8_233e;
  *(int *)0x102e = local_4a;
  *(undefined2 *)0x1030 = local_48;
  *(int *)0x1032 = local_50;
  *(undefined2 *)0x1034 = local_4e;
  func_0x000297e6();
  func_0x00029d78();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd03a;
  func_0x000299d1();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd043;
  func_0x000297e6();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd048;
  func_0x00029d78();
  local_18 = 0x22b2;
  piStack_1a = (int *)0xd052;
  func_0x000299d1();
  local_18 = 1;
  piStack_1a = (int *)0x22b2;
  local_1c = -0x2fa5;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  local_120 = *puVar4;
  local_11e = puVar4[1];
  local_12c = *(undefined2 *)0xa0c4;
  local_12a = *(undefined2 *)0xa0c6;
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
  func_0x000297e6();
  func_0x00029b6d();
  func_0x0002996b();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_1163();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x00029b85();
  func_0x00029b6d();
  func_0x0002996b();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029b55();
  func_0x00029d78();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd16a;
  func_0x000299d1();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd16f;
  FUN_28b3_1582();
  func_0x00029834();
  func_0x00029983();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xd190;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xd1a0;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xd1b0;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xd1c0;
  FUN_21f2_2d26();
  piStack_c = &local_134;
  piStack_e = local_100;
  local_10 = (int *)0x1;
  piStack_12 = (int *)0x22b2;
  local_14 = (int *)0xd1de;
  iVar5 = FUN_1def_0904();
  if (iVar5 == -1) goto LAB_3ab8_233e;
  if (*(int *)0x158 != 0) {
    return;
  }
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029d78();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd212;
  func_0x000299d1();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd21b;
  func_0x000297e6();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd220;
  func_0x00029d78();
  local_18 = 0x22b2;
  piStack_1a = (int *)0xd22a;
  func_0x000299d1();
  local_18 = 1;
  piStack_1a = (int *)0x22b2;
  local_1c = -0x2dcd;
  func_0x0001e558();
  uVar12 = (undefined1 *)0xffed < &local_18;
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar12) {
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029983();
  }
  func_0x000297e6();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd26e;
  func_0x000299d1();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd276;
  func_0x000297e6();
  local_18 = 0x22b2;
  piStack_1a = (int *)0xd280;
  func_0x000299d1();
  local_18 = 0;
  piStack_1a = (int *)0x22b2;
  local_1c = -0x2d78;
  piVar9 = (int *)FUN_1def_05d1();
  local_5c = *piVar9;
  local_5a = piVar9[1];
  func_0x000297e6();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd2ab;
  func_0x000299d1();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd2b3;
  func_0x000297e6();
  local_18 = 0x22b2;
  piStack_1a = (int *)0xd2bd;
  func_0x000299d1();
  local_18 = 0;
  piStack_1a = (int *)0x22b2;
  local_1c = -0x2d3b;
  piVar9 = (int *)func_0x0001e558();
  local_76 = *piVar9;
  local_74 = piVar9[1];
  local_2c = CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
  local_2a = CONCAT11(local_2a._1_1_,*(undefined1 *)0xb310);
  local_3c = local_7a;
  local_3a = local_78;
  local_38 = local_10c;
  local_36 = local_10a;
  local_34 = local_5c;
  local_32 = local_5a;
  local_4c = (int *)0x0;
  piStack_c = (int *)0xd324;
  local_30 = local_76;
  local_2e = local_74;
  func_0x0000daa6();
  piVar6 = &local_1c;
  piVar7 = &local_1c;
  piVar9 = &local_3c;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    piVar14 = piVar9;
    piVar9 = piVar9 + 1;
    *piVar2 = *piVar14;
  }
  local_24[2] = 0xd339;
  iVar5 = FUN_17a6_0cba();
  if (0 < iVar5) {
    local_4c = (int *)0x1;
  }
  local_3c = local_108;
  local_3a = local_106;
  local_38 = local_118;
  local_36 = local_116;
  piVar9 = &local_3c;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    piVar2 = piVar7;
    piVar7 = piVar7 + 1;
    piVar14 = piVar9;
    piVar9 = piVar9 + 1;
    *piVar2 = *piVar14;
  }
  local_24[2] = 0xd375;
  iVar5 = FUN_17a6_0cba();
  if (0 < iVar5) {
    local_4c = (int *)((int)local_4c + 1);
  }
  uVar8 = 0x885;
  func_0x0000abfa();
  goto LAB_3ab8_2064;
code_r0x0003d435:
  piStack_c = &local_16e;
  piStack_e = &local_196;
  local_10 = (int *)0x52a9;
  piStack_12 = local_100;
  piStack_16 = (int *)0xd44f;
  local_14 = (int *)uVar10;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xd460;
  FUN_1def_07a4();
  piStack_c = &local_134;
  piStack_e = local_100;
  local_10 = (int *)0x1;
  piStack_12 = (int *)0x1bb4;
  uVar10 = 0x1bb4;
  local_14 = (int *)0xd47e;
  local_122 = FUN_1def_0904();
  if (*(int *)0x158 != 0) {
    return;
  }
  if (local_122 == -1) {
    return;
  }
  if ((0 < local_122) && (local_122 < 4)) {
LAB_3ab8_291e:
    FUN_28b3_0d8b();
    func_0x00029983();
    func_0x0001bb4e();
    piStack_c = &local_182;
    piStack_e = (int *)0x52cf;
    local_10 = (int *)0x1bb4;
    piStack_12 = (int *)0xd4ca;
    func_0x00012276();
    piStack_c = &local_146;
    piStack_e = &local_134;
    local_10 = &local_50;
    piStack_12 = &local_4a;
    local_14 = (int *)0x11f2;
    uVar10 = 0xad;
    piStack_16 = (int *)0xd4ec;
    local_26 = func_0x000021a4();
    if ((local_26 == 0xffff) && (local_124 == 1)) goto LAB_3ab8_2840;
    if ((local_26 != 0xffff) || (local_124 != 2)) {
      uVar12 = 0;
      uVar11 = *(int *)0x158 == 0;
      if (!(bool)uVar11) {
        return;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar12) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar12 || (bool)uVar11) {
          if (local_26 == 0) {
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c74();
            uVar10 = FUN_28b3_0f51();
            *(undefined2 *)0x53f6 = uVar10;
          }
          else if (local_26 != 0x66) goto LAB_3ab8_291e;
          uVar10 = 0x22b2;
          local_4c = (int *)0x0;
LAB_3ab8_29fe:
          do {
            if (local_124 != 2) break;
            piStack_c = (int *)0x52ef;
            piStack_e = local_100;
            piStack_12 = (int *)0xd59e;
            local_10 = (int *)uVar10;
            FUN_21f2_3454();
            piStack_c = &local_134;
            piStack_e = local_100;
            local_10 = (int *)0x1;
            piStack_12 = (int *)0x22b2;
            uVar10 = 0x1bb4;
            local_14 = (int *)0xd5bd;
            local_46 = FUN_1def_0904();
            if (local_46 == -1) goto LAB_3ab8_291e;
            if (*(int *)0x158 != 0) {
              return;
            }
            if (local_46 == 1) {
              pcVar3 = (code *)swi(0x3f);
              iVar5 = (*pcVar3)();
              if (iVar5 == -1) goto LAB_3ab8_29fe;
              if (*(int *)0x158 != 0) {
                return;
              }
              local_1c = *(int *)0xa0c4;
              piStack_1a = (int *)*(int *)0xa0c6;
              local_18 = local_1c;
              piStack_16 = piStack_1a;
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x0002996b();
              func_0x00029d78();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xd638;
              func_0x000299d1();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xd63d;
              func_0x0002a11e();
              func_0x00029834();
              func_0x00029c2c();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029d78();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xd66f;
              func_0x000299d1();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xd674;
              func_0x0002a10c();
              func_0x00029834();
              func_0x00029c2c();
              func_0x00029983();
              local_66 = (int *)0x0;
            }
            else {
              if (local_66 == (int *)0x0) goto LAB_3ab8_29fe;
              func_0x000297e6();
              func_0x00029d78();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xd6b5;
              func_0x000299d1();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xd6be;
              func_0x000297e6();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xd6c3;
              func_0x00029d78();
              local_18 = 0x22b2;
              piStack_1a = (int *)0xd6cd;
              func_0x000299d1();
              local_18 = 0x22b2;
              uVar10 = 0x11f2;
              piStack_1a = (int *)0xd6d2;
              lVar13 = FUN_13bf_39a0();
              local_64 = lVar13;
              if (lVar13 == 0) goto LAB_3ab8_29fe;
              if (lVar13 < 0) {
                piStack_c = (int *)0xd6f1;
                func_0x00012276();
                *(undefined2 *)0xc22 = 1;
                piStack_c = (int *)0x11f2;
                piStack_e = (int *)0xd705;
                FUN_1000_0599();
                uVar10 = 0x11f2;
                piStack_c = (int *)0xd710;
                func_0x00012276();
                goto LAB_3ab8_29fe;
              }
              piStack_c = (int *)0x11f2;
              piStack_e = (int *)0xd71d;
              piVar14 = (int *)func_0x0000013f();
              piVar6 = (int *)piVar14;
              piVar9 = &local_1c;
              for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                piVar1 = piVar9;
                piVar9 = piVar9 + 1;
                piVar2 = piVar6;
                piVar6 = piVar6 + 1;
                *piVar1 = *piVar2;
              }
            }
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (int *)0x22b2;
            piStack_12 = (int *)0xd746;
            func_0x000299d1();
            local_10 = (int *)0x22b2;
            piStack_12 = (int *)0xd74e;
            func_0x000297e6();
            local_10 = (int *)0x22b2;
            piStack_12 = (int *)0xd753;
            func_0x00029d78();
            local_18 = 0x22b2;
            piStack_1a = (int *)0xd75d;
            func_0x000299d1();
            local_18 = 0x22b2;
            piStack_1a = (int *)0xd765;
            func_0x000297e6();
            local_18 = 0x22b2;
            piStack_1a = (int *)0xd76a;
            func_0x00029d78();
            local_24[2] = 0x22b2;
            local_24[1] = 0xd774;
            func_0x000299d1();
            local_24[2] = 0x22b2;
            local_24[1] = 0xd77c;
            func_0x000297e6();
            local_24[2] = 0x22b2;
            local_24[1] = 0xd781;
            func_0x00029d78();
            uStack_28 = 0x22b2;
            local_2a = 0xd78b;
            func_0x000299d1();
            uStack_28 = 0x22b2;
            uVar10 = 0x1bb4;
            local_2a = 0xd790;
            iVar5 = FUN_1def_043a();
          } while (iVar5 == 0);
LAB_3ab8_2c1a:
          piStack_c = (int *)0x302;
          piStack_e = (int *)0x5300;
          local_10 = local_100;
          local_14 = (int *)0xd7b4;
          piStack_12 = (int *)uVar10;
          FUN_21f2_3454();
          *(undefined2 *)0xc2c = 1;
          *(undefined2 *)0xc20 = 1;
          piStack_c = &local_134;
          piStack_e = local_100;
          local_10 = local_4c;
          piStack_12 = (int *)0x22b2;
          uVar10 = 0x1bb4;
          local_14 = (int *)0xd7db;
          local_26 = FUN_1def_0904();
          *(undefined2 *)0xc2c = 0;
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 != 0) {
            return;
          }
          if (local_26 == 0x14) goto LAB_3ab8_2840;
          if (local_26 != 1) {
            if (local_26 != 0xffff) {
              if (local_66 != (int *)0x0) goto code_r0x0003d85c;
              goto LAB_3ab8_2cf8;
            }
            if (0 < (int)local_4c) {
              piStack_c = (int *)0xd815;
              func_0x0000daa6();
              piStack_c = (int *)0x885;
              for (local_80 = (int *)0x1; (int)local_80 <= (int)local_4c;
                  local_80 = (int *)((int)local_80 + 1)) {
                local_138 = *(undefined2 *)0x148;
                local_136 = *(undefined2 *)0x14a;
                piStack_e = (int *)0xd833;
                func_0x00018779();
                piStack_c = (int *)0x11f2;
              }
              piStack_c = (int *)0xd849;
              func_0x0000b1d8();
              uVar10 = 0x885;
              func_0x0000abfa();
            }
            local_4c = (int *)0x0;
            goto LAB_3ab8_2c1a;
          }
        }
      }
      goto LAB_3ab8_291e;
    }
  }
  goto LAB_3ab8_28ae;
code_r0x0003d85c:
  piStack_c = local_66;
  piStack_e = (int *)0x1bb4;
  uVar10 = 0x11f2;
  local_10 = (int *)0xd86e;
  iVar5 = func_0x00015409();
  if (iVar5 != 0) {
LAB_3ab8_2cf8:
    *(int *)0xb37e = local_146;
    *(int *)0xb380 = local_144;
    func_0x000297e6();
    func_0x0002996b();
    func_0x00029983();
    local_142 = local_146;
    local_140 = local_144;
    do {
      do {
        local_4c = (int *)0x0;
        if (local_124 == 1) {
          func_0x00029834();
          FUN_28b3_0d8b();
          FUN_28b3_1172();
          func_0x000299b9();
          func_0x00029c2c();
          func_0x000299b9();
          func_0x000299d1();
          func_0x00029834();
          local_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd90e;
          func_0x000299d1();
          local_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd913;
          puVar4 = (undefined2 *)func_0x0002a11e();
          local_114 = *puVar4;
          uStack_112 = puVar4[1];
          uStack_110 = puVar4[2];
          uStack_10e = puVar4[3];
LAB_3ab8_2da2:
          do {
            func_0x0001bb4e();
            piStack_c = (int *)0xd930;
            func_0x00012276();
            piStack_c = (int *)0xd946;
            func_0x00012276();
            piStack_c = (int *)0x5328;
            piStack_e = (int *)0x11f2;
            local_10 = (int *)0xd958;
            func_0x00012276();
            piStack_c = (int *)0x11f2;
            piStack_e = (int *)0xd968;
            FUN_1000_0599();
            piStack_c = (int *)0x532e;
            piStack_e = (int *)0xdef;
            piVar9 = (int *)0x11f2;
            local_10 = (int *)0xd97b;
            func_0x00012276();
            local_11c = *(int *)0xa130;
            local_11a = *(int *)0xa132;
LAB_3ab8_2e0d:
            *(undefined2 *)0xc20 = 1;
            *(undefined2 *)0xa4a = 1;
            *(undefined2 *)0xa48 = 1;
            piStack_c = &local_13e;
            piStack_e = local_24;
            local_10 = (int *)&stack0xffe2;
            local_14 = (int *)0xd9b3;
            piStack_12 = piVar9;
            local_26 = func_0x00006608();
            *(undefined2 *)0xc20 = 0;
            *(undefined2 *)0xa4a = 0;
            *(undefined2 *)0xa48 = 0;
            if (*(int *)0x158 != 0) {
              piStack_c = (int *)0xd9d0;
              func_0x0000daa6();
              func_0x0000abfa();
              return;
            }
            if (local_26 == 0xffff) {
              uVar10 = 0x1b6e;
              FUN_1885_2ec3();
              goto LAB_3ab8_2c1a;
            }
            if (local_26 == 99) {
              local_11c = *(int *)0xa130;
              local_11a = *(int *)0xa132;
              goto LAB_3ab8_2da2;
            }
            if ((local_26 != 0x31) &&
               (((local_66 == (int *)0x0 || (*(int *)0xa5e <= local_24[0])) ||
                (in_stack_0000ffe2 < 0x1b9)))) {
              if (local_66 == (int *)0x0) {
                uVar12 = true;
LAB_3ab8_30f1:
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar12) goto code_r0x0003dc8a;
                goto LAB_3ab8_3125;
              }
              uVar12 = local_26 == 100;
              if (!(bool)uVar12) goto LAB_3ab8_30f1;
              piStack_c = local_66;
              piStack_e = (int *)0x3bf;
              local_10 = (int *)0xda46;
              iVar5 = func_0x00015409();
              uVar11 = iVar5 == 0;
              uVar12 = true;
              if ((bool)uVar11) goto LAB_3ab8_30f1;
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar11) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar11) {
                  uVar12 = true;
                  goto LAB_3ab8_30f1;
                }
              }
              FUN_1885_2ec3();
              local_2c = CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
              local_2a = CONCAT11(local_2a._1_1_,*(undefined1 *)0xb310);
              uVar12 = 1;
              local_4c = (int *)0x0;
              piStack_c = (int *)&SUB_0000_daa6;
              func_0x0000daa6();
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
                if ((bool)uVar12) break;
              }
              func_0x000297e6();
              func_0x00029d78();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xe005;
              func_0x000299d1();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xe00e;
              func_0x000297e6();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xe013;
              func_0x00029d78();
              local_18 = 0x22b2;
              piStack_1a = (int *)0xe01d;
              func_0x000299d1();
              local_18 = 0x22b2;
              piStack_1a = (int *)0xe022;
              piVar9 = (int *)func_0x0002a178();
              local_6e = (int *)*piVar9;
              local_6c = piVar9[1];
              local_6a = piVar9[2];
              local_68 = piVar9[3];
              func_0x000297e6();
              func_0x00029b6d();
              func_0x000297e6();
              func_0x00029b6d();
              FUN_28b3_117c();
              func_0x00029d78();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xe068;
              func_0x000299d1();
              local_10 = (int *)0x22b2;
              piStack_12 = (int *)0xe06d;
              FUN_28b3_1582();
              func_0x00029834();
              func_0x00029983();
              local_60 = local_13e;
              local_5e = local_13c;
              local_7e = unaff_SI;
              local_7c = unaff_DI;
              if (*(int *)0x53f4 == 1) {
                func_0x000297e6();
                func_0x00029d78();
                func_0x00029c44();
                func_0x0002996b();
                func_0x00029d78();
                func_0x00029834();
                piStack_c = (int *)0xe0d8;
                func_0x00029c74();
                func_0x000299b9();
                local_10 = (int *)0x22b2;
                piStack_12 = (int *)0xe0e8;
                func_0x000299d1();
                local_10 = (int *)0x22b2;
                piStack_12 = (int *)0xe0ed;
                func_0x0002a11e();
                func_0x00029c2c();
                func_0x00029bb5();
                func_0x00029983();
                func_0x00029834();
                local_10 = (int *)0x22b2;
                piStack_12 = (int *)0xe11a;
                func_0x000299d1();
                local_10 = (int *)0x22b2;
                piStack_12 = (int *)0xe11f;
                func_0x0002a10c();
                func_0x00029834();
                func_0x00029b6d();
                func_0x00029bb5();
                func_0x00029983();
              }
              local_7a = local_60;
              local_78 = local_5e;
              local_10c = local_7e;
              local_10a = local_7c;
              for (local_80 = (int *)0x1; (int)local_80 <= *(int *)0x53f6;
                  local_80 = (int *)((int)local_80 + 1)) {
                func_0x00029834();
                piStack_c = (int *)0xe1d7;
                func_0x00029c74();
                func_0x000299b9();
                local_10 = (int *)0x22b2;
                piStack_12 = (int *)0xe1e7;
                func_0x000299d1();
                local_10 = (int *)0x22b2;
                piStack_12 = (int *)0xe1ec;
                func_0x0002a11e();
                func_0x00029834();
                func_0x00029b6d();
                func_0x00029bb5();
                func_0x00029983();
                func_0x00029834();
                local_10 = (int *)0x22b2;
                piStack_12 = (int *)0xe222;
                func_0x000299d1();
                local_10 = (int *)0x22b2;
                piStack_12 = (int *)0xe227;
                func_0x0002a10c();
                func_0x00029834();
                func_0x00029b6d();
                func_0x00029bb5();
                func_0x00029983();
                local_3c = local_7a;
                local_3a = local_78;
                local_38 = local_10c;
                local_36 = local_10a;
                if ((int)local_80 < *(int *)0x53f6) {
                  local_34 = local_108;
                  local_32 = local_106;
                  local_30 = local_118;
                  local_2e = local_116;
                }
                else {
                  local_34 = local_60;
                  local_32 = local_5e;
                  local_30 = local_7e;
                  local_2e = local_7c;
                }
                piVar6 = &local_1c;
                piVar9 = &local_3c;
                for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                  piVar2 = piVar6;
                  piVar6 = piVar6 + 1;
                  piVar14 = piVar9;
                  piVar9 = piVar9 + 1;
                  *piVar2 = *piVar14;
                }
                in_stack_0000ffe2 = 0x22b2;
                local_24[2] = 0xe18f;
                iVar5 = FUN_17a6_0cba();
                if (0 < iVar5) {
                  local_7a = local_108;
                  local_78 = local_106;
                  local_10c = local_118;
                  local_10a = local_116;
                  local_4c = (int *)((int)local_4c + 1);
                }
              }
              break;
            }
            *(int *)0x53f4 = 1 - *(int *)0x53f4;
          } while( true );
        }
        if (local_124 != 2) goto LAB_3ab8_3adf;
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        func_0x0000c340();
        func_0x00010526();
        func_0x0000c340();
        piStack_c = (int *)0xdb4b;
        func_0x00012276();
        if ((local_122 == 1) || (local_122 == 2)) {
          piStack_c = (int *)0xdb63;
          func_0x00012276();
        }
        if (local_122 == 1) {
          piStack_c = (int *)0xdb74;
          func_0x00012276();
        }
        if (local_122 == 2) {
          piStack_c = (int *)0xdb85;
          func_0x00012276();
        }
        if ((local_122 == 1) || (local_122 == 2)) {
          piStack_c = (int *)0xdb9d;
          func_0x00012276();
        }
        if (local_122 == 3) {
          piStack_c = (int *)0xdbae;
          func_0x00012276();
        }
        piStack_c = (int *)0xdbb8;
        func_0x00012276();
        piStack_c = (int *)*(undefined2 *)0x1038;
        piStack_e = (int *)*(undefined2 *)0x1036;
        local_10 = (int *)0x5377;
        piStack_12 = local_100;
        local_14 = (int *)0x11f2;
        piStack_16 = (int *)0xdbd7;
        FUN_10ad_1928();
        piStack_c = (int *)0x32;
        piStack_e = (int *)0x11f2;
        local_10 = (int *)0xdbe7;
        FUN_1000_0599();
        piStack_c = (int *)0x31e;
        piStack_e = (int *)0x5380;
        local_10 = (int *)0xdef;
        piStack_12 = (int *)0xdbfb;
        func_0x00012276();
        piStack_c = (int *)0x20;
        piStack_e = &local_146;
        local_10 = &local_134;
        piStack_12 = &local_50;
        local_14 = &local_4a;
        piStack_16 = (int *)0x11f2;
        uVar10 = 0xad;
        local_18 = -0x23e3;
        local_26 = func_0x000021a4();
        if (local_26 == 0xffff) goto LAB_3ab8_2c1a;
        uVar12 = 0;
        uVar11 = *(int *)0x158 == 0;
        if (!(bool)uVar11) {
          return;
        }
        func_0x00029834();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1181();
      } while ((bool)uVar12);
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
    } while ((!(bool)uVar12 && !(bool)uVar11) ||
            ((((local_26 != 0x65 && (local_26 != 0x66)) && (local_26 != 0)) || (local_26 == 99))));
    func_0x00029834();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x000299b9();
    FUN_28b3_0ee9();
    func_0x00029834();
    func_0x00029c2c();
    func_0x00029bfc();
    func_0x000299d1();
    func_0x000297e6();
    func_0x0002996b();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_1172();
    func_0x0002996b();
    FUN_28b3_0ee9();
    if (local_122 == 1) {
      func_0x00029834();
      func_0x00029c2c();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe34b;
      func_0x000299d1();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe350;
      func_0x0002a11e();
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1177();
      func_0x00029983();
    }
    if (local_122 == 3) {
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029d78();
      func_0x00029834();
      func_0x00029c2c();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe3ac;
      func_0x000299d1();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe3b1;
      func_0x0002a10c();
      func_0x00029c44();
      func_0x00029983();
    }
    piStack_c = (int *)local_6c;
    piStack_e = local_6e;
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe3d4;
    func_0x0002a11e();
    func_0x00029834();
    func_0x00029b6d();
    func_0x00029983();
    piStack_c = (int *)local_6c;
    piStack_e = local_6e;
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe3ff;
    func_0x0002a10c();
    func_0x00029834();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029d78();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe429;
    func_0x000299d1();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe431;
    func_0x000297e6();
    local_18 = 0x22b2;
    piStack_1a = (int *)0xe43b;
    func_0x000299d1();
    local_18 = 0;
    piStack_1a = (int *)0x22b2;
    local_1c = -0x1bbd;
    piVar9 = (int *)FUN_1def_05d1();
    local_7a = *piVar9;
    local_78 = piVar9[1];
    func_0x000297e6();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe466;
    func_0x000299d1();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xe46e;
    func_0x000297e6();
    local_18 = 0x22b2;
    piStack_1a = (int *)0xe478;
    func_0x000299d1();
    local_18 = 0;
    piStack_1a = (int *)0x22b2;
    local_1c = -0x1b80;
    piVar9 = (int *)func_0x0001e558();
    local_10c = *piVar9;
    local_10a = piVar9[1];
    local_60 = local_7a;
    local_5e = local_78;
    local_4c = (int *)0x0;
    piStack_c = (int *)0xe4b7;
    local_7e = local_10c;
    local_7c = local_10a;
    func_0x0000daa6();
    local_2c = CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
    local_2a = CONCAT11(local_2a._1_1_,*(undefined1 *)0xb310);
    for (local_80 = (int *)0x1; (int)local_80 <= *(int *)0x53f6;
        local_80 = (int *)((int)local_80 + 1)) {
      func_0x00029834();
      piStack_c = (int *)0xe545;
      func_0x00029c74();
      func_0x000299b9();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe555;
      func_0x000299d1();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe55a;
      func_0x0002a11e();
      func_0x00029834();
      func_0x00029b6d();
      func_0x00029983();
      func_0x00029834();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe586;
      func_0x000299d1();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe58b;
      func_0x0002a10c();
      func_0x00029834();
      func_0x00029b6d();
      func_0x0002996b();
      func_0x00029d78();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe5b5;
      func_0x000299d1();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe5bd;
      func_0x000297e6();
      local_18 = 0x22b2;
      piStack_1a = (int *)0xe5c7;
      func_0x000299d1();
      local_18 = 0;
      piStack_1a = (int *)0x22b2;
      local_1c = -0x1a31;
      piVar9 = (int *)FUN_1def_05d1();
      local_108 = *piVar9;
      local_106 = piVar9[1];
      func_0x000297e6();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe5f4;
      func_0x000299d1();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe5fc;
      func_0x000297e6();
      local_18 = 0x22b2;
      piStack_1a = (int *)0xe606;
      func_0x000299d1();
      local_18 = 0;
      piStack_1a = (int *)0x22b2;
      local_1c = -0x19f2;
      piVar9 = (int *)func_0x0001e558();
      local_118 = *piVar9;
      local_116 = piVar9[1];
      local_3c = local_7a;
      local_3a = local_78;
      local_38 = local_10c;
      local_36 = local_10a;
      if ((int)local_80 < *(int *)0x53f6) {
        local_34 = local_108;
        local_32 = local_106;
        local_30 = local_118;
        local_2e = local_116;
      }
      else {
        local_34 = local_60;
        local_32 = local_5e;
        local_30 = local_7e;
        local_2e = local_7c;
      }
      piVar6 = &local_1c;
      piVar9 = &local_3c;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        piVar2 = piVar6;
        piVar6 = piVar6 + 1;
        piVar14 = piVar9;
        piVar9 = piVar9 + 1;
        *piVar2 = *piVar14;
      }
      in_stack_0000ffe2 = 0x1bb4;
      local_24[2] = 0xe4fd;
      iVar5 = FUN_17a6_0cba();
      if (0 < iVar5) {
        local_7a = local_108;
        local_78 = local_106;
        local_10c = local_118;
        local_10a = local_116;
        local_4c = (int *)((int)local_4c + 1);
      }
    }
LAB_3ab8_3adf:
    uVar10 = 0x885;
    func_0x0000abfa();
  }
  goto LAB_3ab8_2c1a;
code_r0x0003dc8a:
  func_0x000297e6();
  func_0x000297e6();
  piVar9 = (int *)0x22b2;
  FUN_28b3_1181();
  if (!(bool)uVar12) {
LAB_3ab8_3125:
    uVar12 = 0;
    FUN_1885_2ec3();
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
      piVar9 = (int *)0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar12) goto LAB_3ab8_2e0d;
    }
    func_0x000297e6();
    func_0x00029b6d();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029d78();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xdd4b;
    func_0x000299d1();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xdd50;
    FUN_28b3_1582();
    func_0x00029834();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029d78();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xdd7a;
    func_0x000299d1();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xdd83;
    func_0x000297e6();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xdd88;
    func_0x00029d78();
    local_18 = 0x22b2;
    piStack_1a = (int *)0xdd92;
    func_0x000299d1();
    local_18 = 0x22b2;
    piStack_1a = (int *)0xdd97;
    piVar9 = (int *)func_0x0002a178();
    local_6e = (int *)*piVar9;
    local_6c = piVar9[1];
    local_6a = piVar9[2];
    local_68 = piVar9[3];
    local_60 = local_13e;
    local_5e = local_13c;
    local_7e = unaff_SI;
    local_7c = unaff_DI;
    if (*(int *)0x53f4 == 1) {
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c44();
      func_0x0002996b();
      func_0x00029d78();
      func_0x00029834();
      piStack_c = (int *)0xddfe;
      func_0x00029c74();
      func_0x000299b9();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xde0e;
      func_0x000299d1();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xde13;
      func_0x0002a11e();
      func_0x00029c2c();
      func_0x00029bb5();
      func_0x00029983();
      func_0x00029834();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xde40;
      func_0x000299d1();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xde45;
      func_0x0002a10c();
      func_0x00029834();
      func_0x00029b6d();
      func_0x00029bb5();
      func_0x00029983();
    }
    piVar9 = (int *)0x22b2;
    local_7a = local_60;
    local_78 = local_5e;
    local_10c = local_7e;
    local_10a = local_7c;
    for (local_80 = (int *)0x1; (int)local_80 <= *(int *)0x53f6;
        local_80 = (int *)((int)local_80 + 1)) {
      func_0x00029834();
      piStack_c = (int *)0xde9b;
      func_0x00029c74();
      func_0x000299b9();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xdeab;
      func_0x000299d1();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xdeb0;
      func_0x0002a11e();
      func_0x00029834();
      func_0x00029b6d();
      func_0x00029bb5();
      func_0x00029983();
      func_0x00029834();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xdee6;
      func_0x000299d1();
      local_10 = (int *)0x22b2;
      piStack_12 = (int *)0xdeeb;
      func_0x0002a10c();
      func_0x00029834();
      func_0x00029b6d();
      func_0x00029bb5();
      func_0x00029983();
      if ((int *)*(int *)0x53f6 == local_80) {
        local_108 = local_60;
        local_106 = local_5e;
        local_118 = local_7e;
        local_116 = local_7c;
      }
      piStack_c = (int *)0xdf41;
      func_0x000297e6();
      piStack_c = (int *)0xdf46;
      func_0x00029d78();
      piStack_12 = (int *)0x22b2;
      local_14 = (int *)0xdf50;
      func_0x000299d1();
      piStack_12 = (int *)0x22b2;
      local_14 = (int *)0xdf59;
      func_0x000297e6();
      piStack_12 = (int *)0x22b2;
      local_14 = (int *)0xdf5e;
      func_0x00029d78();
      piStack_1a = (int *)0x22b2;
      local_1c = -0x2098;
      func_0x000299d1();
      piStack_1a = (int *)0x22b2;
      local_1c = -0x208f;
      func_0x000297e6();
      piStack_1a = (int *)0x22b2;
      local_1c = -0x208a;
      func_0x00029d78();
      local_24[1] = 0x22b2;
      local_24[0] = -0x2080;
      func_0x000299d1();
      local_24[1] = 0x22b2;
      local_24[0] = -0x2078;
      func_0x000297e6();
      local_24[1] = 0x22b2;
      local_24[0] = -0x2073;
      func_0x00029d78();
      local_2a = 0x22b2;
      local_2c = 0xdf97;
      func_0x000299d1();
      local_2a = 0x22b2;
      piVar9 = (int *)0x1bb4;
      local_2c = 0xdf9c;
      func_0x0001e18f();
      local_7a = local_108;
      local_78 = local_106;
      local_10c = local_118;
      local_10a = local_116;
    }
    local_11c = local_13e;
    local_11a = local_13c;
  }
  goto LAB_3ab8_2e0d;
LAB_3ab8_42f8:
  if (local_26 == 99) goto LAB_3ab8_3dd3;
  local_26 = (local_26 ^ (int)local_26 >> 0xf) - ((int)local_26 >> 0xf);
  if ((local_26 == 0x6200) || ((8 < (int)local_26 && ((int)local_26 < 0x16)))) {
    if (0 < (int)local_4c) {
      *(char *)0x53f8 = '\x01' - *(char *)0x53f8;
    }
    goto LAB_3ab8_3dd3;
  }
  if ((local_26 == 0x6300) || ((0x3a < (int)local_26 && ((int)local_26 < 0x48)))) {
    pcVar3 = (code *)swi(0x3f);
    (*pcVar3)();
    goto LAB_3ab8_3dd3;
  }
  if ((local_26 == 0x6400) || (0x48 < (int)local_26)) goto LAB_3ab8_435b;
  if (local_26 != 0) goto LAB_3ab8_3dd3;
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
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c2c();
  func_0x0002996b();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029d78();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xef83;
  func_0x000299d1();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xef88;
  func_0x0002a11e();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c9d();
  func_0x000297e6();
  func_0x00029d78();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xefbd;
  func_0x000299d1();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xefc2;
  func_0x0002a10c();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c9d();
  FUN_28b3_1163();
  func_0x00029983();
  func_0x000297e6();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xf000;
  func_0x000299d1();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xf005;
  func_0x0002a10c();
  func_0x00029834();
  func_0x00029b6d();
  func_0x000297e6();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xf02b;
  func_0x000299d1();
  local_10 = (int *)0x22b2;
  piStack_12 = (int *)0xf030;
  func_0x0002a11e();
  func_0x00029834();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x00029983();
  local_3c = local_7a;
  local_3a = local_78;
  local_38 = local_10c;
  local_36 = local_10a;
  if (*(char *)0x53f9 != '\0') {
    if (*(char *)0xcc6 == '\x01') {
      func_0x000297e6();
      piStack_c = (int *)0xf08e;
      func_0x00029b6d();
      func_0x00029983();
    }
    if (*(char *)0xcc6 == '\x02') {
      func_0x000297e6();
      piStack_c = (int *)0xf0ad;
      func_0x00029b9d();
      func_0x00029983();
    }
    func_0x000297e6();
    func_0x00029bb5();
    func_0x00029d78();
    func_0x00029c2c();
    func_0x0002996b();
    func_0x00029d78();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xf0ea;
    func_0x000299d1();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xf0ef;
    func_0x0002a11e();
    func_0x00029834();
    func_0x00029b6d();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029d78();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xf123;
    func_0x000299d1();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xf128;
    func_0x0002a10c();
    func_0x00029834();
    func_0x00029b6d();
    func_0x00029983();
  }
  func_0x000297e6();
  func_0x00029bb5();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029bb5();
  func_0x00029983();
  if ((*(char *)0x53f8 != '\0') && (0 < (int)local_4c)) {
    func_0x000297e6();
    func_0x00029bb5();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029bb5();
    func_0x00029983();
  }
LAB_3ab8_4636:
  if ((int)local_4c < 1) {
    local_4c = (int *)0x1;
    local_156 = local_34;
    local_154 = local_32;
    local_152 = local_30;
    local_150 = local_2e;
    local_10c = local_152;
    local_10a = local_150;
    local_7a = local_156;
    local_78 = local_154;
    goto LAB_3ab8_3dd3;
  }
  if ((*(char *)0x53f9 != '\0') && (uVar12 = *(char *)0x53f8 == '\0', !(bool)uVar12)) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar12) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12) goto LAB_3ab8_4733;
    }
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    func_0x00029d78();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xf27a;
    func_0x000299d1();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xf283;
    func_0x000297e6();
    local_10 = (int *)0x22b2;
    piStack_12 = (int *)0xf288;
    func_0x00029d78();
    local_18 = 0x22b2;
    piStack_1a = (int *)0xf292;
    func_0x000299d1();
    local_18 = 0x22b2;
    piStack_1a = (int *)0xf297;
    func_0x0002a178();
    func_0x00029834();
    func_0x00029c2c();
    func_0x00029983();
  }
LAB_3ab8_4733:
  piStack_c = (int *)0xf2bb;
  func_0x0000daa6();
  local_2c = CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
  local_2a = CONCAT11(local_2a._1_1_,*(undefined1 *)0xb310);
  piVar6 = &local_1c;
  piVar9 = &local_3c;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    piVar14 = piVar9;
    piVar9 = piVar9 + 1;
    *piVar2 = *piVar14;
  }
  local_24[2] = 0xf2e2;
  iVar5 = FUN_17a6_0cba();
  if (0 < iVar5) {
    local_7a = local_34;
    local_78 = local_32;
    local_10c = local_30;
    local_10a = local_2e;
    local_4c = (int *)((int)local_4c + 1);
  }
  func_0x0000abfa();
  goto LAB_3ab8_3dd3;
LAB_3ab8_435b:
  local_4c = (int *)0x0;
  goto LAB_3ab8_3b60;
}



/* 3ab8:4794  FUN_3ab8_4794  975 bytes, 0 callers */

void __cdecl16far FUN_3ab8_4794(void)

{
  undefined2 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 local_9a [4];
  int local_96;
  uint local_94;
  int local_92;
  undefined1 local_90 [4];
  undefined2 local_8c;
  undefined1 local_8a [120];
  int local_12;
  int local_10;
  int local_e;
  undefined2 local_c;
  undefined1 *local_a;
  undefined1 *local_8;
  undefined1 *local_6;
  int *local_4;
  
  local_4 = (int *)0x3ab8;
  uVar4 = 0x22b2;
  local_6 = (undefined1 *)0xf31f;
  FUN_21f2_0ebc();
  local_96 = *(int *)0x150;
  local_e = *(int *)0x152;
  do {
    while( true ) {
      uVar1 = *(undefined2 *)0xa0aa;
      *(undefined2 *)0xb76a = *(undefined2 *)0xa0a8;
      *(undefined2 *)0xb76c = uVar1;
      uVar1 = *(undefined2 *)0xa0c6;
      *(undefined2 *)0xb784 = *(undefined2 *)0xa0c4;
      *(undefined2 *)0xb786 = uVar1;
      local_4 = (int *)0x53fa;
      local_6 = local_8a;
      local_a = (undefined1 *)0xf370;
      local_8 = (undefined1 *)uVar4;
      FUN_21f2_3454();
      local_4 = (int *)0x844;
      local_6 = local_8a;
      local_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xf380;
      FUN_21f2_2d26();
      local_4 = (int *)0x53fc;
      local_6 = local_8a;
      local_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xf390;
      FUN_21f2_2d26();
      local_4 = (int *)0x810;
      local_6 = local_8a;
      local_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xf3a0;
      FUN_21f2_2d26();
      local_4 = (int *)0x816;
      local_6 = local_8a;
      local_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xf3b0;
      FUN_21f2_2d26();
      if (*(char *)0x1106 == '\0') {
        local_4 = (int *)0x540d;
      }
      else {
        local_4 = (int *)0x5414;
      }
      local_6 = local_8a;
      local_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xf3cc;
      FUN_21f2_2d26();
      local_4 = (int *)0x5417;
      local_6 = local_8a;
      local_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xf3dc;
      FUN_21f2_2d26();
      local_4 = (int *)0x810;
      local_6 = local_8a;
      local_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xf3ec;
      FUN_21f2_2d26();
      local_4 = (int *)0x860;
      local_6 = local_8a;
      local_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xf3fc;
      FUN_21f2_2d26();
      local_4 = (int *)0x541f;
      local_6 = local_8a;
      local_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xf40c;
      FUN_21f2_2d26();
      if (*(char *)0x1106 != '\0') {
        *(undefined1 *)0x110f = 0x4e;
        local_4 = (int *)0x98a;
        local_6 = local_8a;
        local_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xf428;
        FUN_21f2_2d26();
        local_4 = (int *)0x5424;
        local_6 = local_8a;
        local_8 = (undefined1 *)0x22b2;
        local_a = (undefined1 *)0xf438;
        FUN_21f2_2d26();
      }
      local_4 = (int *)0x98a;
      local_6 = local_8a;
      local_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xf448;
      FUN_21f2_2d26();
      local_4 = (int *)local_8a;
      local_6 = (undefined1 *)0x4;
      local_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xf458;
      FUN_1def_07a4();
      local_c = 10000;
      if ((((((undefined1 *)*(int *)0x148 != local_a) || ((undefined1 *)*(int *)0x14a != local_8))
           || ((undefined1 *)*(int *)0x14c != local_6)) ||
          (((int *)*(int *)0x14e != local_4 || (local_96 != *(int *)0x150)))) ||
         (local_e != *(int *)0x152)) {
        local_c = 9999;
      }
      local_4 = &local_12;
      local_6 = local_9a;
      local_8 = local_90;
      local_a = local_8a;
      local_e = 0x1bb4;
      local_10 = 0xf4b4;
      local_10 = FUN_1def_0904();
      if (((*(char *)0x124 != '\0') && (*(int *)0x158 != 0)) && (*(int *)0xa62 == 0x13)) {
        local_10 = 3;
        *(undefined2 *)0x158 = 0;
      }
      if (*(int *)0x158 != 0) {
        return;
      }
      local_4 = (int *)0x1bb4;
      uVar4 = 0x885;
      local_6 = (undefined1 *)0xf4e9;
      func_0x0000c3ca();
      if (local_10 != -1) break;
      while (((int)local_8 <= *(int *)0x14a &&
             (((int)local_8 < *(int *)0x14a || (local_a < (undefined1 *)*(uint *)0x148))))) {
        local_4 = (int *)0x0;
        local_8 = (undefined1 *)0xf50e;
        local_6 = (undefined1 *)uVar4;
        func_0x0000daa6();
        local_94 = *(uint *)0x148;
        local_92 = *(int *)0x14a;
        local_8 = (undefined1 *)0x885;
        uVar4 = 0x11f2;
        local_a = (undefined1 *)0xf525;
        local_6 = (undefined1 *)local_94;
        local_4 = (int *)local_92;
        func_0x00018779();
      }
      while (((int)local_4 <= *(int *)0x14e &&
             (((int)local_4 < *(int *)0x14e || (local_6 < *(uint *)0x14c))))) {
        local_4 = (int *)0x0;
        local_8 = (undefined1 *)0xf545;
        local_6 = (undefined1 *)uVar4;
        func_0x0000daa6();
        local_94 = *(uint *)0x14c;
        local_92 = *(int *)0x14e;
        local_8 = (undefined1 *)0x885;
        uVar4 = 0x11f2;
        local_a = (undefined1 *)0xf55c;
        local_6 = (undefined1 *)local_94;
        local_4 = (int *)local_92;
        FUN_13bf_0327();
      }
      while (local_96 < *(int *)0x150) {
        local_4 = (int *)0x0;
        local_8 = (undefined1 *)0xf568;
        local_6 = (undefined1 *)uVar4;
        func_0x0000daa6();
        local_8c = *(undefined2 *)0x150;
        local_6 = (undefined1 *)0x885;
        uVar4 = 0x18b3;
        local_8 = (undefined1 *)0xf576;
        local_4 = (int *)local_8c;
        func_0x000190c7();
      }
      while (local_6 = (undefined1 *)uVar4, *(int *)0x152 < local_e) {
        local_4 = (int *)0x0;
        local_8 = (undefined1 *)0xf58a;
        func_0x0000daa6();
        local_8c = *(undefined2 *)0x152;
        local_6 = (undefined1 *)0x885;
        uVar4 = 0x1bb4;
        local_8 = (undefined1 *)0xf598;
        local_4 = (int *)local_8c;
        FUN_1def_186d();
      }
      local_4 = (int *)0x1;
      local_8 = (undefined1 *)0xf5aa;
      func_0x0000b1d8();
      local_4 = (int *)0x885;
      uVar4 = 0x885;
      local_6 = (undefined1 *)0xf5b0;
      func_0x0000abfa();
    }
    local_a = (undefined1 *)*(undefined2 *)0x148;
    local_8 = (undefined1 *)*(undefined2 *)0x14a;
    local_6 = (undefined1 *)*(undefined2 *)0x14c;
    local_96 = *(int *)0x150;
    local_e = *(int *)0x152;
    if ((local_12 == 1) || (local_10 == 1)) {
      local_4 = (int *)0x1;
      local_6 = (undefined1 *)0x885;
      local_8 = (undefined1 *)0xf5ee;
      FUN_3ab8_202d();
    }
    if ((local_12 == 2) || (local_10 == 2)) {
      local_4 = (int *)0x2;
      local_6 = (undefined1 *)0x885;
      local_8 = (undefined1 *)0xf603;
      FUN_3ab8_202d();
    }
    if (local_10 == 3) {
      local_4 = (int *)0x3;
      local_6 = (undefined1 *)0x885;
      local_8 = (undefined1 *)0xf612;
      FUN_3ab8_202d();
    }
    if (local_10 == 4) {
      local_4 = (int *)0x885;
      local_6 = (undefined1 *)0xf61e;
      uVar3 = func_0x0000db57();
      local_4 = (int *)(uint)((uVar3 & 0xe) != 8);
      pcVar2 = (code *)swi(0x3f);
      (*pcVar2)();
    }
    uVar4 = 0x885;
    if ((*(char *)0x1106 != '\0') &&
       ((local_10 == 5 || ((0x61ff < local_10 && (local_10 < 0x6b01)))))) {
      if (0x61ff < local_10) {
        if (local_10 == 0x6200) {
          *(undefined1 *)0x110f = 0x31;
        }
        if (local_10 == 0x6300) {
          *(undefined1 *)0x110f = 0x32;
        }
        if (local_10 == 0x6400) {
          *(undefined1 *)0x110f = 0x33;
        }
        if (local_10 == 0x6500) {
          *(undefined1 *)0x110f = 0x34;
        }
        if (local_10 == 0x6600) {
          *(undefined1 *)0x110f = 0x35;
        }
        if (local_10 == 0x6700) {
          *(undefined1 *)0x110f = 0x36;
        }
        if (local_10 == 0x6800) {
          *(undefined1 *)0x110f = 0x37;
        }
        if (local_10 == 0x6900) {
          *(undefined1 *)0x110f = 0x38;
        }
        if (local_10 == 0x6a00) {
          *(undefined1 *)0x110f = 0x39;
        }
        if (local_10 == 0x6b00) {
          *(undefined1 *)0x110f = 0x30;
        }
      }
      local_4 = (int *)0xa;
      pcVar2 = (code *)swi(0x3f);
      (*pcVar2)();
    }
  } while (*(int *)0x158 == 0);
  return;
}



/* 3ab8:4b6b  FUN_3ab8_4b6b  58 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_4b6b(char *param_1,byte param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if ((((param_2 & 0x10) == 0) || ((*param_1 == '.' && (param_1[1] == '\0')))) ||
     ((*param_1 == '.' && ((param_1[1] == '.' && (param_1[2] == '\0')))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* 3ab8:4ba5  FUN_3ab8_4ba5  130 bytes, 1 callers */

undefined1 * __cdecl16far FUN_3ab8_4ba5(undefined1 *param_1,undefined2 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_30 [21];
  byte local_1b;
  undefined1 local_12 [6];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xf730;
  FUN_21f2_0ebc();
  *param_3 = 0;
  local_4 = local_30;
  puStack_6 = (undefined1 *)0x10;
  uStack_8 = param_2;
  uStack_a = 0x22b2;
  uStack_c = 0xf74b;
  iVar1 = func_0x000276d7();
  if (iVar1 == 0) {
    do {
      local_4 = (undefined1 *)(uint)local_1b;
      puStack_6 = local_12;
      uStack_8 = 0x22b2;
      uStack_a = 0xf762;
      iVar1 = FUN_3ab8_4b6b();
      if ((iVar1 == 0) && (local_4 = local_4 + 1, local_4 == param_1)) {
        local_4 = local_12;
        puStack_6 = param_3;
        uStack_8 = 0x22b2;
        uStack_a = 0xf77f;
        FUN_21f2_3454();
      }
      if ((int)param_1 < (int)local_4) {
        return local_4;
      }
      local_4 = local_30;
      puStack_6 = (undefined1 *)0x22b2;
      uStack_8 = 0xf792;
      iVar1 = func_0x000276cc();
    } while (iVar1 == 0);
    if ((int)param_1 <= (int)local_4) {
      if (param_1 != local_4) {
        return local_4;
      }
      return (undefined1 *)-(int)local_4;
    }
  }
  return (undefined1 *)0x0;
}



/* 3ab8:4c27  FUN_3ab8_4c27  98 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4c27(char *param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if ((((((*param_1 == *(char *)0xeae) && (param_1[1] == *(char *)0xeaf)) &&
        (param_1[2] == *(char *)0xeb0)) &&
       ((param_1[3] == *(char *)0xeb1 && (param_1[4] == *(char *)0xeb2)))) &&
      ((param_1[5] == *(char *)0xeb3 && ((0x30 < (byte)param_1[6] && ((byte)param_1[6] < 0x3a))))))
     && ((param_1[7] == '_' && (param_1[8] == '\0')))) {
    param_1[7] = param_1[6];
    param_1[6] = '0';
  }
  return;
}



/* 3ab8:4c89  FUN_3ab8_4c89  6 bytes, 1 callers */

int FUN_3ab8_4c89(undefined2 param_1,int param_2,undefined2 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 extraout_AH;
  undefined2 unaff_DS;
  undefined1 auStack_70 [21];
  byte bStack_5b;
  undefined1 auStack_52 [14];
  int iStack_44;
  undefined1 auStack_42 [16];
  undefined1 auStack_32 [16];
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 auStack_12 [6];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xf814;
  FUN_21f2_0ebc();
  iStack_44 = 0;
  uStack_1d = 0xff;
  uStack_1e = 0xff;
  uStack_1f = 0xff;
  uStack_20 = 0xff;
  uStack_21 = 0xff;
  uStack_22 = 0xff;
  uStack_17 = 0xff;
  uStack_18 = 0xff;
  uStack_19 = 0xff;
  uStack_1a = 0xff;
  uStack_1b = 0xff;
  uStack_1c = 0xff;
  uStack_16 = 0;
  puStack_4 = &uStack_22;
  puStack_6 = auStack_42;
  uStack_8 = 0x22b2;
  uStack_a = 0xf850;
  FUN_21f2_3454();
  puStack_4 = auStack_70;
  puStack_6 = (undefined1 *)0x10;
  uStack_8 = param_3;
  uStack_a = 0x22b2;
  uStack_c = 0xf862;
  iVar1 = func_0x000276d7();
  if (iVar1 == 0) {
    puStack_4 = param_4;
    puStack_6 = auStack_12;
    uStack_8 = 0x22b2;
    uStack_a = 0xf87a;
    FUN_21f2_3454();
    puStack_4 = auStack_12;
    puStack_6 = (undefined1 *)0x22b2;
    uStack_8 = 0xf884;
    FUN_3ab8_4c27();
    puStack_4 = (undefined1 *)CONCAT11(extraout_AH,bStack_5b);
    puStack_6 = auStack_52;
    uStack_8 = 0x22b2;
    uStack_a = 0xf891;
    iVar1 = FUN_3ab8_4b6b();
    if (iVar1 == 0) {
      iStack_44 = iStack_44 + 1;
      puStack_4 = auStack_52;
      puStack_6 = auStack_32;
      uStack_8 = 0x22b2;
      uStack_a = 0xf8a7;
      FUN_21f2_3454();
      puStack_4 = auStack_32;
      puStack_6 = (undefined1 *)0x22b2;
      uStack_8 = 0xf8b1;
      FUN_3ab8_4c27();
      puStack_4 = auStack_12;
      puStack_6 = auStack_32;
      uStack_8 = 0x22b2;
      uStack_a = 0xf8bf;
      iVar1 = func_0x00024cb8();
      goto joined_r0x0003f8c3;
    }
    while( true ) {
      puStack_4 = auStack_70;
      puStack_6 = (undefined1 *)0x22b2;
      uStack_8 = 0xf8ce;
      iVar1 = func_0x000276cc();
      if (iVar1 != 0) break;
      puStack_4 = (undefined1 *)(uint)bStack_5b;
      puStack_6 = auStack_52;
      uStack_8 = 0x22b2;
      uStack_a = 0xf90a;
      iVar1 = FUN_3ab8_4b6b();
      if (iVar1 == 0) {
        iStack_44 = iStack_44 + 1;
        puStack_4 = auStack_52;
        puStack_6 = auStack_32;
        uStack_8 = 0x22b2;
        uStack_a = 0xf920;
        FUN_21f2_3454();
        puStack_4 = auStack_32;
        puStack_6 = (undefined1 *)0x22b2;
        uStack_8 = 0xf92a;
        FUN_3ab8_4c27();
        puStack_4 = auStack_12;
        puStack_6 = auStack_32;
        uStack_8 = 0x22b2;
        uStack_a = 0xf938;
        iVar1 = func_0x00024cb8();
joined_r0x0003f8c3:
        if (0 < iVar1) {
          puStack_4 = &uStack_22;
          puStack_6 = auStack_32;
          uStack_8 = 0x22b2;
          uStack_a = 0xf94b;
          iVar1 = func_0x00024cb8();
          if (iVar1 < 0) {
            puStack_4 = auStack_32;
            puStack_6 = &uStack_22;
            uStack_8 = 0x22b2;
            uStack_a = 0xf961;
            FUN_21f2_3454();
            puStack_4 = auStack_52;
            puStack_6 = auStack_42;
            uStack_8 = 0x22b2;
            uStack_a = 0xf970;
            FUN_21f2_3454();
          }
        }
      }
    }
    *param_4 = 0;
    if (param_2 <= iStack_44) {
      puStack_4 = auStack_42;
      puStack_6 = param_4;
      uStack_8 = 0x22b2;
      uStack_a = 0xf8ed;
      FUN_21f2_3454();
      if (iStack_44 != param_2) {
        return iStack_44;
      }
      return -iStack_44;
    }
  }
  return 0;
}



/* 3ab8:4c91  FUN_3ab8_4c91  363 bytes, 1 callers */

int __cdecl16far FUN_3ab8_4c91(void)

{
  int iVar1;
  undefined1 extraout_AH;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined1 *)(unaff_BP + -0x1b) = 0xff;
  *(undefined1 *)(unaff_BP + -0x1c) = 0xff;
  *(undefined1 *)(unaff_BP + -0x1d) = 0xff;
  *(undefined1 *)(unaff_BP + -0x1e) = 0xff;
  *(undefined1 *)(unaff_BP + -0x1f) = 0xff;
  *(undefined1 *)(unaff_BP + -0x20) = 0xff;
  *(undefined1 *)(unaff_BP + -0x15) = 0xff;
  *(undefined1 *)(unaff_BP + -0x16) = 0xff;
  *(undefined1 *)(unaff_BP + -0x17) = 0xff;
  *(undefined1 *)(unaff_BP + -0x18) = 0xff;
  *(undefined1 *)(unaff_BP + -0x19) = 0xff;
  *(undefined1 *)(unaff_BP + -0x1a) = 0xff;
  *(undefined1 *)(unaff_BP + -0x14) = 0;
  FUN_21f2_3454(unaff_BP + -0x40,unaff_BP + -0x20);
  iVar1 = func_0x000276d7(0x22b2,*(undefined2 *)(unaff_BP + 8),0x10,unaff_BP + -0x6e);
  if (iVar1 == 0) {
    FUN_21f2_3454(unaff_BP + -0x10,*(undefined2 *)(unaff_BP + 10));
    FUN_3ab8_4c27(unaff_BP + -0x10);
    iVar1 = FUN_3ab8_4b6b(unaff_BP + -0x50,CONCAT11(extraout_AH,*(undefined1 *)(unaff_BP + -0x59)));
    if (iVar1 == 0) {
      *(int *)(unaff_BP + -0x42) = *(int *)(unaff_BP + -0x42) + 1;
      FUN_21f2_3454(unaff_BP + -0x30,unaff_BP + -0x50);
      FUN_3ab8_4c27(unaff_BP + -0x30);
      iVar1 = func_0x00024cb8(0x22b2,unaff_BP + -0x30,unaff_BP + -0x10);
      goto joined_r0x0003f8c3;
    }
    while (iVar1 = func_0x000276cc(0x22b2,unaff_BP + -0x6e), iVar1 == 0) {
      iVar1 = FUN_3ab8_4b6b(unaff_BP + -0x50,*(undefined1 *)(unaff_BP + -0x59));
      if (iVar1 == 0) {
        *(int *)(unaff_BP + -0x42) = *(int *)(unaff_BP + -0x42) + 1;
        FUN_21f2_3454(unaff_BP + -0x30,unaff_BP + -0x50);
        FUN_3ab8_4c27(unaff_BP + -0x30);
        iVar1 = func_0x00024cb8(0x22b2,unaff_BP + -0x30,unaff_BP + -0x10);
joined_r0x0003f8c3:
        if ((0 < iVar1) &&
           (iVar1 = func_0x00024cb8(0x22b2,unaff_BP + -0x30,unaff_BP + -0x20), iVar1 < 0)) {
          FUN_21f2_3454(unaff_BP + -0x20,unaff_BP + -0x30);
          FUN_21f2_3454(unaff_BP + -0x40,unaff_BP + -0x50);
        }
      }
    }
    *(undefined1 *)*(undefined2 *)(unaff_BP + 10) = 0;
    if (*(int *)(unaff_BP + 6) <= *(int *)(unaff_BP + -0x42)) {
      FUN_21f2_3454(*(undefined2 *)(unaff_BP + 10),unaff_BP + -0x40);
      if (*(int *)(unaff_BP + -0x42) == *(int *)(unaff_BP + 6)) {
        return -*(int *)(unaff_BP + -0x42);
      }
      return *(int *)(unaff_BP + -0x42);
    }
  }
  return 0;
}



/* 3ab8:4dfc  FUN_3ab8_4dfc  330 bytes, 1 callers */

void FUN_3ab8_4dfc(undefined2 param_1,int param_2,int param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int local_7c;
  undefined1 local_7a [16];
  int local_6a;
  undefined1 local_68 [86];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  int iVar5;
  
  puStack_6 = (undefined1 *)0xf987;
  FUN_21f2_0ebc();
  puStack_6 = (undefined1 *)param_3;
  puStack_8 = local_68;
  iStack_a = 0x22b2;
  iStack_c = 0xf994;
  FUN_21f2_3454();
  for (local_7c = 1; local_7c < param_2; local_7c = local_7c + 1) {
    puStack_6 = (undefined1 *)(local_7c * 0xf + param_3);
    puStack_8 = local_68;
    iStack_a = 0x22b2;
    iStack_c = 0xf9b0;
    FUN_21f2_2d26();
    puStack_6 = (undefined1 *)0x5429;
    puStack_8 = local_68;
    iStack_a = 0x22b2;
    iStack_c = 0xf9bf;
    FUN_21f2_2d26();
  }
  puStack_6 = local_68;
  puStack_8 = (undefined1 *)0x22b2;
  iStack_a = 0xf9d5;
  iVar2 = func_0x00024ce4();
  puStack_6 = (undefined1 *)0x542b;
  puStack_8 = local_68;
  iStack_a = 0x22b2;
  iVar3 = 0x22b2;
  iStack_c = -0x61a;
  FUN_21f2_2d26();
  iVar5 = 0;
  *(undefined2 *)(param_4 + param_2 * 2) = 0;
  local_7a[0] = 0;
  while( true ) {
    iVar5 = iVar5 + 1;
    if ((int)param_5 < 2) {
      puStack_6 = local_7a;
      puStack_8 = local_68;
      uStack_e = 0xfa13;
      iStack_c = iVar3;
      iStack_a = iVar5;
      local_6a = FUN_3ab8_4ba5();
      if (local_6a == 0) goto LAB_3ab8_4e9d;
    }
    if (param_5 == (undefined1 *)0x2) {
      puStack_6 = local_7a;
      puStack_8 = local_68;
      uStack_e = 0xfa37;
      iStack_c = iVar3;
      iStack_a = iVar5;
      local_6a = FUN_3ab8_4c89();
      if (local_6a == 0) goto LAB_3ab8_4e9d;
    }
    puStack_6 = local_7a;
    iStack_a = 0xfa4a;
    puStack_8 = (undefined1 *)iVar3;
    iVar3 = func_0x00024ce4();
    if ((0x28 < (uint)(iVar3 + iVar2)) || (10 < param_2)) break;
    puStack_6 = local_7a;
    puStack_8 = (undefined1 *)(param_2 * 0xf + param_3);
    iStack_a = 0x22b2;
    iStack_c = 0xfb30;
    FUN_21f2_3454();
    *(int *)(param_4 + param_2 * 2) = local_6a;
    *(undefined1 *)0xbf48 = 0;
    for (local_7c = 1; local_7c < param_2; local_7c = local_7c + 1) {
      if (*(int *)(param_4 + local_7c * 2) < 1) {
        puStack_6 = (undefined1 *)0x5431;
      }
      else {
        puStack_6 = (undefined1 *)0x542f;
      }
      puStack_8 = (undefined1 *)0xbf48;
      iStack_a = 0x22b2;
      iStack_c = 0xfb58;
      FUN_21f2_2d26();
      puStack_6 = (undefined1 *)0x5433;
      puStack_8 = (undefined1 *)0xbf48;
      iStack_a = 0x22b2;
      iStack_c = 0xfb67;
      FUN_21f2_2d26();
    }
    if (*(int *)(param_4 + param_2 * 2) < 1) {
      puStack_6 = (undefined1 *)0x5438;
    }
    else {
      puStack_6 = (undefined1 *)0x5436;
    }
    puStack_8 = (undefined1 *)0xbf48;
    iStack_a = 0x22b2;
    iStack_c = 0xfba4;
    FUN_21f2_2d26();
    puStack_6 = (undefined1 *)0x543a;
    puStack_8 = (undefined1 *)0xbf48;
    iStack_a = 0x22b2;
    iStack_c = 0xfbb3;
    FUN_21f2_2d26();
    puStack_6 = local_7a;
    puStack_8 = (undefined1 *)0xbf48;
    iStack_a = 0x22b2;
    iStack_c = 0xfbc2;
    FUN_21f2_2d26();
    puStack_6 = (undefined1 *)0x543d;
    puStack_8 = (undefined1 *)0xbf48;
    iStack_a = 0x22b2;
    iStack_c = 0xfbd1;
    FUN_21f2_2d26();
    puStack_6 = (undefined1 *)*(undefined2 *)0xd70;
    puStack_8 = (undefined1 *)0xbf48;
    iStack_a = 0x22b2;
    uVar4 = 0x22b2;
    iStack_c = 0xfbe0;
    iVar3 = FUN_21f2_31f0();
    if (iVar3 != 0) {
      puStack_6 = (undefined1 *)0x658;
      puStack_8 = (undefined1 *)0x22b2;
      uVar4 = 0x11f2;
      iStack_a = 0xfbef;
      FUN_13bf_0a03();
    }
    puStack_6 = local_68;
    puStack_8 = (undefined1 *)0xbf48;
    iStack_c = 0xfbfd;
    iStack_a = uVar4;
    FUN_21f2_3454();
    *(undefined1 *)(iVar2 + -0x40b8) = 0;
    puStack_6 = local_7a;
    puStack_8 = (undefined1 *)0xbf48;
    iStack_a = 0x22b2;
    iStack_c = 0xfc14;
    FUN_21f2_2d26();
    puStack_6 = (undefined1 *)0xa;
    puStack_8 = (undefined1 *)0x16;
    iStack_a = 0x22b2;
    iStack_c = 0xfc23;
    FUN_1000_0599();
    puStack_6 = (undefined1 *)0xbf48;
    puStack_8 = (undefined1 *)0xdef;
    iStack_a = 0xfc2e;
    func_0x00012276();
    puStack_6 = (undefined1 *)0x11f2;
    iVar3 = 0xdef;
    puStack_8 = (undefined1 *)0xfc34;
    func_0x00010526();
    puStack_6 = param_5;
    puStack_8 = param_4;
    iStack_a = param_3;
    iStack_c = param_2 + 1;
    uStack_e = 0xdef;
    uStack_10 = 0xfc46;
    FUN_3ab8_4dfc();
    if (local_6a < 0) {
LAB_3ab8_4e9d:
      FUN_3ab8_50d5();
      return;
    }
  }
  puStack_6 = local_68;
  puStack_8 = (undefined1 *)0xbf48;
  iStack_a = 0x22b2;
  iStack_c = 0xfa69;
  FUN_21f2_3454();
  *(undefined1 *)(iVar2 + -0x40b8) = 0;
  puStack_6 = local_7a;
  puStack_8 = (undefined1 *)0xbf48;
  iStack_a = 0x22b2;
  iStack_c = 0xfa80;
  FUN_21f2_2d26();
  puStack_6 = (undefined1 *)0xa;
  puStack_8 = (undefined1 *)0x16;
  iStack_a = 0x22b2;
  iStack_c = -0x571;
  FUN_1000_0599();
  puStack_6 = (undefined1 *)0xbf48;
  puStack_8 = (undefined1 *)0xdef;
  iStack_a = -0x566;
  func_0x00012276();
  puStack_6 = (undefined1 *)0x11f2;
  puStack_8 = (undefined1 *)0xfaa0;
  func_0x00010526();
  puStack_6 = (undefined1 *)0xbf48;
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  puStack_6 = (undefined1 *)0xdef;
  puStack_8 = (undefined1 *)0xfab7;
  FUN_1000_0599();
  puStack_6 = (undefined1 *)0xfac2;
  func_0x00012276();
  if (*(byte *)0x123 < 0x14) {
    puStack_6 = (undefined1 *)0xffff;
    puStack_8 = (undefined1 *)0x7;
    iStack_a = 1;
    iStack_c = 0x18;
    uStack_e = 0x968;
    uStack_10 = 0x11f2;
    uStack_12 = 0xfae6;
    FUN_1000_02b5();
    do {
      puStack_6 = (undefined1 *)0xdef;
      puStack_8 = (undefined1 *)0xfaee;
      iVar5 = func_0x00010632();
    } while (iVar5 == 0);
    puStack_6 = (undefined1 *)0x1;
    puStack_8 = (undefined1 *)0x14;
    iStack_a = 0xdef;
    iStack_c = 0xfaff;
    FUN_1000_0599();
    puStack_6 = (undefined1 *)0xdef;
    puStack_8 = (undefined1 *)0xfb06;
    func_0x00010526();
    puStack_6 = (undefined1 *)0xc;
    puStack_8 = (undefined1 *)0x14;
    iStack_a = 0xdef;
    iStack_c = -0x4ed;
    FUN_1000_0599();
    puStack_6 = (undefined1 *)0xdef;
    puStack_8 = (undefined1 *)0xfb1a;
    func_0x00010526();
  }
  goto LAB_3ab8_4e9d;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  279 bytes, 2 callers */

void FUN_3ab8_4fbd(void)

{
  code *pcVar1;
  undefined2 in_AX;
  undefined2 uVar2;
  int iVar3;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar4 = 0x3ab8;
  while( true ) {
    *(undefined2 *)(in_BX + unaff_SI) = in_AX;
    *(undefined1 *)0xbf48 = 0;
    *(undefined2 *)(unaff_BP + -0x7a) = 1;
    while (*(int *)(unaff_BP + -0x7a) < *(int *)(unaff_BP + 6)) {
      if (*(int *)(*(int *)(unaff_BP + -0x7a) * 2 + *(int *)(unaff_BP + 10)) < 1) {
        uVar2 = 0x5431;
      }
      else {
        uVar2 = 0x542f;
      }
      FUN_21f2_2d26(uVar4,0xbf48,uVar2);
      uVar4 = 0x22b2;
      FUN_21f2_2d26(0x22b2,0xbf48,0x5433);
      *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + 1;
    }
    if (*(int *)(*(int *)(unaff_BP + 6) * 2 + *(int *)(unaff_BP + 10)) < 1) {
      uVar2 = 0x5438;
    }
    else {
      uVar2 = 0x5436;
    }
    FUN_21f2_2d26(uVar4,0xbf48,uVar2);
    FUN_21f2_2d26(0x22b2,0xbf48,0x543a);
    FUN_21f2_2d26(0x22b2,0xbf48,unaff_BP + -0x78);
    FUN_21f2_2d26(0x22b2,0xbf48,0x543d);
    iVar3 = FUN_21f2_31f0(0xbf48,*(undefined2 *)0xd70);
    if (iVar3 != 0) {
      FUN_13bf_0a03(0x658);
    }
    FUN_21f2_3454(0xbf48,unaff_BP + -0x66);
    *(undefined1 *)(*(int *)(unaff_BP + -0x7c) + -0x40b8) = 0;
    FUN_21f2_2d26(0x22b2,0xbf48,unaff_BP + -0x78);
    FUN_1000_0599(0x22b2,0x16,10);
    func_0x00012276(0xdef,0xbf48);
    func_0x00010526(0x11f2);
    FUN_3ab8_4dfc(0xdef,*(int *)(unaff_BP + 6) + 1,*(undefined2 *)(unaff_BP + 8),
                  *(undefined2 *)(unaff_BP + 10),*(undefined2 *)(unaff_BP + 0xc));
    if (*(int *)(unaff_BP + -0x68) < 0) goto LAB_3ab8_4e9d;
    *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
    if (*(int *)(unaff_BP + 0xc) < 2) {
      iVar3 = FUN_3ab8_4ba5(*(undefined2 *)(unaff_BP + -2),unaff_BP + -0x66,unaff_BP + -0x78);
      *(int *)(unaff_BP + -0x68) = iVar3;
      if (iVar3 == 0) goto LAB_3ab8_4e9d;
    }
    if (*(int *)(unaff_BP + 0xc) == 2) {
      iVar3 = FUN_3ab8_4c89(0xdef,*(undefined2 *)(unaff_BP + -2),unaff_BP + -0x66,unaff_BP + -0x78);
      *(int *)(unaff_BP + -0x68) = iVar3;
      if (iVar3 == 0) goto LAB_3ab8_4e9d;
    }
    iVar3 = func_0x00024ce4(0xdef,unaff_BP + -0x78);
    if ((0x28 < (uint)(iVar3 + *(int *)(unaff_BP + -0x7c))) || (10 < *(int *)(unaff_BP + 6))) break;
    uVar4 = 0x22b2;
    FUN_21f2_3454(*(int *)(unaff_BP + 6) * 0xf + *(int *)(unaff_BP + 8),unaff_BP + -0x78);
    in_AX = *(undefined2 *)(unaff_BP + -0x68);
    in_BX = *(int *)(unaff_BP + 6) << 1;
    unaff_SI = *(int *)(unaff_BP + 10);
  }
  FUN_21f2_3454(0xbf48,unaff_BP + -0x66);
  *(undefined1 *)(*(int *)(unaff_BP + -0x7c) + -0x40b8) = 0;
  FUN_21f2_2d26(0x22b2,0xbf48,unaff_BP + -0x78);
  FUN_1000_0599(0x22b2,0x16,10);
  func_0x00012276(0xdef,0xbf48);
  func_0x00010526(0x11f2);
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  FUN_1000_0599(0xdef);
  func_0x00012276();
  if (*(byte *)0x123 < 0x14) {
    FUN_1000_02b5(0x968,0x18,1,7,0xffff);
    do {
      iVar3 = func_0x00010632(0xdef);
    } while (iVar3 == 0);
    FUN_1000_0599(0xdef,0x14,1);
    func_0x00010526(0xdef);
    FUN_1000_0599(0xdef,0x14,0xc);
    func_0x00010526(0xdef);
  }
LAB_3ab8_4e9d:
  FUN_3ab8_50d5();
  return;
}



/* 3ab8:50d5  FUN_3ab8_50d5  5 bytes, 1 callers */

void __cdecl16far FUN_3ab8_50d5(void)

{
  return;
}



/* 3ab8:50da  FUN_3ab8_50da  18 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

int FUN_3ab8_50da(undefined2 param_1,int param_2,int param_3,undefined1 *param_4,undefined2 param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000030;
  undefined2 in_stack_00000032;
  int *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  int *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  undefined1 auStack_e6 [20];
  undefined1 auStack_d2 [4];
  int iStack_ce;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined1 auStack_b6 [12];
  undefined1 auStack_aa [4];
  undefined1 auStack_a6 [6];
  undefined1 *puStack_a0;
  undefined2 uStack_9e;
  undefined1 *puStack_8c;
  undefined2 uStack_8a;
  int iStack_88;
  int iStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  int iStack_64;
  int iStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined1 *puStack_46;
  int iStack_44;
  undefined2 uStack_42;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  int aiStack_38 [9];
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
  undefined1 *puStack_10;
  int iStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int *piStack_8;
  undefined1 **ppuStack_6;
  undefined1 **ppuStack_4;
  
  ppuStack_4 = (undefined1 **)0x3ab8;
  ppuStack_6 = (undefined1 **)0xfc65;
  FUN_21f2_0ebc();
  ppuStack_4 = (undefined1 **)0x22b2;
  uVar7 = 0x885;
  ppuStack_6 = (undefined1 **)0xfc6a;
  func_0x0000c3ca();
  pcVar3 = (code *)swi(0x3f);
  (*pcVar3)();
  if (param_2 == 10) {
    ppuStack_4 = (undefined1 **)0x885;
    ppuStack_6 = (undefined1 **)0xfc83;
    func_0x00024c86();
    ppuStack_4 = (undefined1 **)0x22b2;
    ppuStack_6 = (undefined1 **)0xfc93;
    FUN_21f2_2d26();
    *(undefined2 *)0xc22 = 1;
    ppuStack_4 = (undefined1 **)0x2;
    ppuStack_6 = (undefined1 **)0x1e;
    piStack_8 = (int *)auStack_aa;
    uStack_a = 0x22b2;
    uVar7 = 0xdef;
    uStack_c = 0xfcb5;
    FUN_1000_02b5();
  }
  ppuStack_6 = (undefined1 **)0xfcc6;
  ppuStack_4 = (undefined1 **)uVar7;
  func_0x00024c86();
  ppuStack_4 = (undefined1 **)0x22b2;
  ppuStack_6 = (undefined1 **)0xfcd6;
  FUN_21f2_2d26();
  ppuStack_4 = (undefined1 **)0x22b2;
  ppuStack_6 = (undefined1 **)0xfce5;
  FUN_21f2_2d26();
  ppuStack_4 = (undefined1 **)0x22b2;
  ppuStack_6 = (undefined1 **)0xfcf5;
  FUN_21f2_2d26();
  ppuStack_4 = (undefined1 **)0x22b2;
  ppuStack_6 = (undefined1 **)0xfd05;
  FUN_21f2_2d26();
  if (param_2 != 0) {
    ppuStack_4 = (undefined1 **)0x22b2;
    ppuStack_6 = (undefined1 **)0xfd1b;
    FUN_21f2_2d26();
  }
  uVar7 = 0x22b2;
  if (*(char *)0x133 != '\0') {
    *(undefined2 *)0xc22 = 1;
    ppuStack_4 = (undefined1 **)0x2;
    ppuStack_6 = (undefined1 **)0x14;
    piStack_8 = (int *)0x546e;
    uStack_a = 0x22b2;
    uVar7 = 0xdef;
    uStack_c = 0xfd42;
    FUN_1000_02b5();
  }
  ppuStack_6 = (undefined1 **)0xfd53;
  ppuStack_4 = (undefined1 **)uVar7;
  FUN_1def_07a4();
  *(undefined2 *)0xb6a = 0;
  *(undefined2 *)0xc26 = 1;
  *(undefined2 *)0xc28 = 1;
  ppuStack_4 = (undefined1 **)auStack_d2;
  ppuStack_6 = (undefined1 **)auStack_aa;
  piStack_8 = (int *)0x270f;
  uStack_a = 0x1bb4;
  uStack_c = 0xfd81;
  iStack_44 = FUN_1def_0904();
  *(undefined2 *)0xb6a = 0;
  *(undefined2 *)0xc26 = 0;
  *(undefined2 *)0xc28 = 0;
  if (((*(int *)0x158 != 0) || (iStack_44 == -1)) || (iStack_44 == 3)) goto LAB_2bb4_4535;
  if (iStack_ce == 1) {
    iStack_44 = 1;
  }
  if (iStack_ce == 2) {
    iStack_44 = 2;
  }
  if ((iStack_44 < 1) || (2 < iStack_44)) {
    if ((iStack_44 != 0x6200) && (iStack_44 != 0x3e00)) {
      iVar4 = FUN_3ab8_5138();
      return iVar4;
    }
    if (*(char *)0x133 != '\0') {
      *(undefined1 *)0x133 = 0;
      iVar4 = FUN_3ab8_5138();
      return iVar4;
    }
    *(undefined1 *)0x133 = 1;
    iVar4 = FUN_3ab8_5138();
    return iVar4;
  }
  func_0x0000c3ca();
  ppuStack_4 = (undefined1 **)0x885;
  ppuStack_6 = (undefined1 **)0xfde8;
  FUN_21f2_3454();
  ppuStack_4 = (undefined1 **)0x22b2;
  ppuStack_6 = (undefined1 **)0xfdf6;
  FUN_21f2_2d26();
  if (*(char *)0x133 != '\0') {
    ppuStack_4 = (undefined1 **)0x22b2;
    ppuStack_6 = (undefined1 **)0xfe0b;
    FUN_21f2_3454();
    uStack_42 = CONCAT11(0x5f,*param_4);
  }
  ppuStack_4 = (undefined1 **)0x22b2;
  ppuStack_6 = (undefined1 **)0xfe26;
  FUN_1000_0599();
  ppuStack_4 = (undefined1 **)0xfe31;
  func_0x00012276();
  ppuStack_4 = (undefined1 **)0xfe3b;
  func_0x00012276();
  ppuStack_4 = (undefined1 **)0x11f2;
  ppuStack_6 = (undefined1 **)0xfe48;
  FUN_21f2_3454();
  *(undefined1 *)0xbf51 = 0x30;
  *(undefined1 *)0xbf52 = 0x30;
  *(undefined1 *)0xbf53 = 0x30;
  ppuStack_4 = (undefined1 **)0x22b2;
  ppuStack_6 = (undefined1 **)0xfe61;
  FUN_21f2_3454();
  ppuStack_4 = (undefined1 **)0x22b2;
  ppuStack_6 = (undefined1 **)0xfe70;
  FUN_21f2_2d26();
  if (*(char *)0x133 != '\0') {
    ppuStack_4 = (undefined1 **)0x22b2;
    ppuStack_6 = (undefined1 **)0xfe86;
    FUN_21f2_3454();
    uStack_58 = *param_4;
    uStack_57 = 0x5f;
  }
  ppuStack_4 = (undefined1 **)0x22b2;
  ppuStack_6 = (undefined1 **)0xfea1;
  iVar4 = func_0x00026f7a();
  if ((iVar4 == 0) || (*(int *)0x7a34 != 0xd)) {
    ppuStack_4 = (undefined1 **)&uStack_58;
    ppuStack_6 = (undefined1 **)0x22b2;
    piStack_8 = (int *)0xff10;
    iVar4 = func_0x000276d7();
    if (iVar4 == 0) {
      ppuStack_4 = (undefined1 **)0xff20;
      iVar4 = func_0x00027698();
      if (iVar4 == 0) goto LAB_3ab8_53bf;
      *(undefined2 *)0xd70 = 0;
    }
    else {
LAB_3ab8_53bf:
      ppuStack_4 = (undefined1 **)0x22b2;
      ppuStack_6 = (undefined1 **)0xff4c;
      iVar4 = FUN_21f2_1348();
      *(int *)0xd70 = iVar4;
      if (iVar4 != 0) {
        ppuStack_4 = (undefined1 **)0x22b2;
        ppuStack_6 = (undefined1 **)0xff61;
        FUN_21f2_3454();
        ppuStack_4 = (undefined1 **)0x22b2;
        ppuStack_6 = (undefined1 **)0xff70;
        FUN_21f2_2d26();
        ppuStack_4 = (undefined1 **)0x22b2;
        ppuStack_6 = (undefined1 **)0xff8b;
        FUN_21f2_2d26();
        ppuStack_4 = (undefined1 **)0x22b2;
        ppuStack_6 = (undefined1 **)0xff9a;
        FUN_21f2_2d26();
        ppuStack_4 = (undefined1 **)0x22b2;
        uVar7 = 0x22b2;
        ppuStack_6 = (undefined1 **)0xffa9;
        iVar4 = FUN_21f2_31f0();
        if (iVar4 != 0) {
          uVar7 = 0x11f2;
          ppuStack_4 = (undefined1 **)0xffb8;
          FUN_13bf_0a03();
        }
        ppuStack_6 = (undefined1 **)0xffc4;
        ppuStack_4 = (undefined1 **)uVar7;
        FUN_21f2_3454();
        ppuStack_4 = (undefined1 **)0x22b2;
        ppuStack_6 = (undefined1 **)0xffd2;
        FUN_21f2_3454();
        *(undefined1 *)0xbf48 = 0x2a;
        ppuStack_4 = (undefined1 **)0x22b2;
        ppuStack_6 = (undefined1 **)0xffe6;
        FUN_21f2_2d26();
        ppuStack_4 = (undefined1 **)0x22b2;
        uVar7 = 0x22b2;
        ppuStack_6 = (undefined1 **)0xfff5;
        iVar4 = FUN_21f2_31f0();
        if (iVar4 != 0) {
          uVar7 = 0x11f2;
          ppuStack_4 = (undefined1 **)0x4;
          FUN_13bf_0a03();
        }
        ppuStack_4 = (undefined1 **)param_5;
        ppuStack_6 = (undefined1 **)0x1;
        uStack_a = 0x18;
        piStack_8 = (int *)uVar7;
        FUN_4375_c22c();
        func_0x0002504e();
        *(undefined2 *)0xd70 = 0;
        ppuStack_4 = (undefined1 **)&uStack_42;
        ppuStack_6 = (undefined1 **)0x22b2;
        uVar7 = 0x22b2;
        piStack_8 = (int *)0x36;
        iVar4 = func_0x000276d7();
        if (iVar4 == 0) {
          uVar7 = 0x22b2;
          ppuStack_4 = (undefined1 **)0x46;
          iVar4 = func_0x00027698();
          if (iVar4 != 0) {
            uVar7 = 0x11f2;
            ppuStack_4 = (undefined1 **)0x54;
            FUN_13bf_0a03();
          }
        }
        ppuStack_6 = (undefined1 **)0x62;
        ppuStack_4 = (undefined1 **)uVar7;
        iVar4 = func_0x000270f0();
        if (iVar4 != 0) {
          ppuStack_4 = (undefined1 **)0x71;
          FUN_13bf_0a03();
        }
        return 1;
      }
    }
    func_0x0002504e();
  }
  else {
    ppuStack_4 = (undefined1 **)0x3;
    ppuStack_6 = (undefined1 **)0x16;
    piStack_8 = (int *)0x860;
    uStack_a = 0x584;
    uStack_c = 0x22b2;
    iStack_e = -0x135;
    piStack_8 = (int *)func_0x0001450d();
    uStack_a = 0x11f2;
    uStack_c = 0xfed3;
    FUN_1000_02b5();
  }
  ppuStack_4 = (undefined1 **)0xff39;
  func_0x000121f9();
LAB_2bb4_4535:
  aiStack_38[0] = 0;
  ppuStack_4 = (undefined1 **)0x84;
  FUN_32b2_6d14();
  ppuStack_4 = (undefined1 **)0x8c;
  FUN_32b2_6e99();
  ppuStack_4 = (undefined1 **)0xaf;
  FUN_32b2_7285();
  ppuStack_4 = (undefined1 **)0xb4;
  FUN_32b2_717d();
  ppuStack_4 = (undefined1 **)0xbd;
  FUN_32b2_6eb1();
  ppuStack_4 = (undefined1 **)0xc5;
  FUN_32b2_6cc6();
  ppuStack_4 = (undefined1 **)0xcd;
  FUN_32b2_6eb1();
  ppuStack_4 = (undefined1 **)0xeb;
  FUN_32b2_7285();
  ppuStack_4 = (undefined1 **)0xf3;
  FUN_32b2_704d();
  ppuStack_4 = (undefined1 **)0xfc;
  FUN_32b2_710c();
  ppuStack_4 = (undefined1 **)0x104;
  FUN_32b2_6eb1();
  while( true ) {
    ppuStack_4 = (undefined1 **)uStack_ba;
    ppuStack_6 = (undefined1 **)uStack_bc;
    piStack_8 = (int *)uStack_be;
    uStack_a = 0x32b2;
    uStack_c = 0x119;
    FUN_32b2_75fe();
    ppuStack_4 = (undefined1 **)0x32b2;
    ppuStack_6 = (undefined1 **)0x123;
    FUN_32b2_6d14();
    ppuStack_4 = (undefined1 **)0x32b2;
    ppuStack_6 = (undefined1 **)0x12b;
    FUN_32b2_704d();
    ppuStack_4 = (undefined1 **)0x32b2;
    ppuStack_6 = (undefined1 **)0x133;
    FUN_32b2_7095();
    ppuStack_4 = (undefined1 **)0x32b2;
    ppuStack_6 = (undefined1 **)0x13b;
    FUN_32b2_6eb1();
    ppuStack_4 = (undefined1 **)uStack_b8;
    ppuStack_6 = (undefined1 **)uStack_ba;
    piStack_8 = (int *)uStack_bc;
    uStack_a = uStack_be;
    uStack_c = 0x32b2;
    iStack_e = 0x150;
    FUN_32b2_75ec();
    uVar8 = &stack0x0000 == (undefined1 *)0x4;
    ppuStack_6 = (undefined1 **)0x32b2;
    piStack_8 = (int *)0x15a;
    FUN_32b2_6d14();
    ppuStack_6 = (undefined1 **)0x32b2;
    piStack_8 = (int *)0x162;
    FUN_32b2_704d();
    ppuStack_6 = (undefined1 **)0x32b2;
    piStack_8 = (int *)0x16a;
    FUN_32b2_7095();
    ppuStack_6 = (undefined1 **)0x32b2;
    piStack_8 = (int *)0x173;
    FUN_32b2_6eb1();
    ppuStack_6 = (undefined1 **)0x32b2;
    piStack_8 = (int *)0x17b;
    FUN_32b2_6cc6();
    ppuStack_6 = (undefined1 **)0x32b2;
    piStack_8 = (int *)0x183;
    FUN_32b2_6cc6();
    ppuStack_6 = (undefined1 **)0x32b2;
    piStack_8 = (int *)0x188;
    FUN_32b2_7191();
    if ((bool)uVar8) {
      ppuStack_6 = (undefined1 **)0x32b2;
      piStack_8 = (int *)0x192;
      FUN_32b2_6cc6();
      ppuStack_6 = (undefined1 **)0x32b2;
      piStack_8 = (int *)0x19a;
      FUN_32b2_6cc6();
      ppuStack_6 = (undefined1 **)0x32b2;
      piStack_8 = (int *)0x19f;
      FUN_32b2_7191();
      if ((bool)uVar8) {
        return 0;
      }
    }
    ppuStack_6 = (undefined1 **)auStack_aa;
    piStack_8 = &uStack_1e;
    uStack_a = uStack_7e;
    uStack_c = uStack_80;
    iStack_e = uStack_82;
    puStack_10 = (undefined1 *)uStack_84;
    uStack_12 = uStack_5a;
    uStack_14 = uStack_5c;
    uStack_16 = uStack_5e;
    uStack_18 = uStack_60;
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
    aiStack_38[7] = 0x32b2;
    aiStack_38[6] = 0x1f6;
    FUN_32b2_6eb1();
    aiStack_38[7] = 0x32b2;
    aiStack_38[6] = 0x1fa;
    iVar4 = FUN_3ab8_4fbd();
    if (iVar4 == 0) break;
    ppuStack_6 = (undefined1 **)0x32b2;
    piStack_8 = (int *)0x209;
    FUN_32b2_6cc6();
    ppuStack_6 = (undefined1 **)0x32b2;
    piStack_8 = (int *)0x20e;
    FUN_32b2_7258();
    ppuStack_6 = (undefined1 **)0x32b2;
    piStack_8 = (int *)0x216;
    FUN_32b2_6e99();
    ppuStack_6 = (undefined1 **)0x32b2;
    piStack_8 = (int *)0x21e;
    FUN_32b2_6ef9();
    ppuStack_6 = (undefined1 **)auStack_b6;
    piStack_8 = (int *)auStack_a6;
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
    aiStack_38[7] = 0x32b2;
    aiStack_38[6] = 0x288;
    FUN_32b2_6eb1();
    aiStack_38[7] = 0x32b2;
    aiStack_38[6] = 0x290;
    FUN_32b2_6cc6();
    aiStack_38[7] = 0x32b2;
    aiStack_38[6] = 0x295;
    FUN_32b2_7258();
    aiStack_38[3] = 0x32b2;
    aiStack_38[2] = 0x29f;
    FUN_32b2_6eb1();
    aiStack_38[3] = 0x32b2;
    aiStack_38[2] = 0x2a7;
    FUN_32b2_6cc6();
    aiStack_38[3] = 0x32b2;
    aiStack_38[2] = 0x2ac;
    FUN_32b2_7258();
    uStack_3a = 0x32b2;
    uStack_3c = 0x2b6;
    FUN_32b2_6eb1();
    uStack_3a = 1;
    uStack_3c = 0x32b2;
    uStack_3e = 0x2be;
    func_0x0003fc09();
    ppuStack_6 = (undefined1 **)auStack_e6;
    piStack_8 = (int *)auStack_d2;
    uStack_a = 0x32b2;
    uStack_c = 0x2d4;
    FUN_32b2_6cc6();
    uStack_a = 0x32b2;
    uStack_c = 0x2d9;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    uStack_14 = 0x2e3;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x2eb;
    FUN_32b2_6cc6();
    uStack_12 = 0x32b2;
    uStack_14 = 0x2f0;
    FUN_32b2_7258();
    uStack_1a = 0x32b2;
    uStack_1c = 0x2fa;
    FUN_32b2_6eb1();
    uStack_1a = 0x32b2;
    uStack_1c = 0x302;
    FUN_32b2_6d14();
    uStack_22 = 0x32b2;
    uStack_24 = 0x30c;
    FUN_32b2_6eb1();
    uStack_22 = 0x32b2;
    uStack_24 = 0x314;
    FUN_32b2_6d14();
    aiStack_38[7] = 0x32b2;
    aiStack_38[6] = 0x31e;
    FUN_32b2_6eb1();
    aiStack_38[7] = 0x32b2;
    aiStack_38[6] = 0x326;
    FUN_32b2_6cc6();
    aiStack_38[7] = 0x32b2;
    aiStack_38[6] = 0x32b;
    FUN_32b2_7258();
    aiStack_38[3] = 0x32b2;
    aiStack_38[2] = 0x335;
    FUN_32b2_6eb1();
    aiStack_38[3] = 0x32b2;
    aiStack_38[2] = 0x33d;
    FUN_32b2_6cc6();
    aiStack_38[3] = 0x32b2;
    aiStack_38[2] = 0x342;
    FUN_32b2_7258();
    uStack_3a = 0x32b2;
    uStack_3c = 0x34c;
    FUN_32b2_6eb1();
    uStack_3a = 1;
    uStack_3c = 0x32b2;
    uStack_3e = 0x354;
    func_0x0003fc09();
    uVar8 = (int *)0xffc9 < aiStack_38 + 1;
    uVar9 = &stack0x0000 == (undefined1 *)0x0;
    ppuStack_4 = (undefined1 **)0x360;
    FUN_32b2_6cc6();
    ppuStack_4 = (undefined1 **)0x369;
    FUN_32b2_701d();
    ppuStack_4 = (undefined1 **)0x36e;
    FUN_32b2_7258();
    ppuStack_4 = (undefined1 **)0x376;
    FUN_32b2_6e99();
    ppuStack_4 = (undefined1 **)0x37e;
    FUN_32b2_6ef9();
    ppuStack_4 = (undefined1 **)0x387;
    FUN_32b2_6cc6();
    ppuStack_4 = (undefined1 **)0x390;
    FUN_32b2_701d();
    ppuStack_4 = (undefined1 **)0x395;
    FUN_32b2_7258();
    ppuStack_4 = (undefined1 **)0x39e;
    FUN_32b2_6e99();
    ppuStack_4 = (undefined1 **)0x3a6;
    FUN_32b2_6ef9();
    ppuStack_4 = (undefined1 **)0x3af;
    FUN_32b2_6d14();
    ppuStack_4 = (undefined1 **)0x3b4;
    FUN_32b2_6fc7();
    ppuStack_4 = (undefined1 **)0x3bc;
    FUN_32b2_6d14();
    ppuStack_4 = (undefined1 **)0x3c1;
    FUN_32b2_6fc7();
    ppuStack_4 = (undefined1 **)0x3ca;
    FUN_32b2_710c();
    ppuStack_4 = (undefined1 **)0x3cf;
    FUN_32b2_7191();
    if (!(bool)uVar8 && !(bool)uVar9) {
      ppuStack_4 = (undefined1 **)0x3da;
      FUN_32b2_6d14();
      ppuStack_4 = (undefined1 **)0x3e2;
      FUN_32b2_6d14();
      ppuStack_4 = (undefined1 **)0x3e7;
      FUN_32b2_7191();
      if (!(bool)uVar9) {
        ppuStack_4 = (undefined1 **)0x431;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x439;
        FUN_32b2_7124();
        ppuStack_4 = (undefined1 **)0x441;
        FUN_32b2_6e99();
        ppuStack_4 = (undefined1 **)0x44a;
        FUN_32b2_704d();
        ppuStack_4 = (undefined1 **)0x453;
        FUN_32b2_7035();
        ppuStack_4 = (undefined1 **)0x45c;
        FUN_32b2_6e99();
        ppuStack_4 = (undefined1 **)0x464;
        FUN_32b2_6eb1();
        ppuStack_4 = (undefined1 **)0x46c;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x474;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x47c;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x484;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x48c;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x494;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x49d;
        FUN_32b2_6e99();
        ppuStack_4 = (undefined1 **)0x4a2;
        FUN_32b2_718c();
        ppuStack_4 = (undefined1 **)0x4ab;
        FUN_32b2_6e99();
        ppuStack_4 = (undefined1 **)0x4b3;
        FUN_32b2_6eb1();
        ppuStack_4 = (undefined1 **)0x4bc;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x4c4;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x4cd;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x4d5;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x4dd;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x4e6;
        FUN_32b2_6e99();
        ppuStack_4 = (undefined1 **)0x4ee;
        FUN_32b2_6eb1();
        ppuStack_4 = (undefined1 **)0x4f7;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x500;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x509;
        FUN_32b2_70dc();
        ppuStack_4 = (undefined1 **)0x511;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x519;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x522;
        FUN_32b2_6e99();
        ppuStack_4 = (undefined1 **)0x52b;
        FUN_32b2_6eb1();
        ppuStack_4 = (undefined1 **)0x534;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x53d;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x546;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x54f;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x558;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x55d;
        FUN_32b2_718c();
        ppuStack_4 = (undefined1 **)0x566;
        FUN_32b2_6eb1();
        ppuStack_4 = (undefined1 **)0x56f;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x574;
        FUN_32b2_6fd6();
        ppuStack_4 = (undefined1 **)0x57d;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x586;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x58b;
        FUN_32b2_7182();
        ppuStack_4 = (undefined1 **)0x594;
        FUN_32b2_6e99();
        ppuStack_4 = (undefined1 **)0x59c;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x5a5;
        FUN_32b2_7154();
        ppuStack_4 = (undefined1 **)0x5ae;
        FUN_32b2_6e99();
        ppuStack_4 = (undefined1 **)0x5b7;
        FUN_32b2_6eb1();
        ppuStack_4 = (undefined1 **)0x5c0;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x5c9;
        FUN_32b2_6eb1();
        ppuStack_4 = (undefined1 **)&iStack_64;
        ppuStack_6 = (undefined1 **)0x32b2;
        piStack_8 = (int *)0x5db;
        FUN_32b2_6cc6();
        ppuStack_6 = (undefined1 **)0x32b2;
        piStack_8 = (int *)0x5e0;
        FUN_32b2_7258();
        iStack_e = 0x32b2;
        puStack_10 = (undefined1 *)0x5ea;
        FUN_32b2_6eb1();
        iStack_e = 0x32b2;
        puStack_10 = (undefined1 *)0x5f2;
        FUN_32b2_6cc6();
        iStack_e = 0x32b2;
        puStack_10 = (undefined1 *)0x5f7;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 0x601;
        FUN_32b2_6eb1();
        uStack_16 = uStack_66;
        uStack_18 = uStack_68;
        uStack_1a = uStack_6a;
        uStack_1c = uStack_6c;
        uStack_1e = uStack_4a;
        uStack_20 = uStack_4c;
        uStack_22 = uStack_4e;
        uStack_24 = uStack_50;
        aiStack_38[8] = 0x622;
        FUN_32b2_6d14();
        aiStack_38[5] = 0x32b2;
        aiStack_38[4] = 0x62c;
        FUN_32b2_6eb1();
        aiStack_38[5] = 0x32b2;
        aiStack_38[4] = 0x635;
        FUN_32b2_6d14();
        aiStack_38[1] = 0x32b2;
        aiStack_38[0] = 0x63f;
        FUN_32b2_6eb1();
        aiStack_38[1] = 0;
        aiStack_38[0] = 0x32b2;
        uStack_3a = 0x646;
        func_0x0003fc09();
        iStack_88 = iStack_64;
        iStack_86 = iStack_62;
        puStack_a0 = puStack_8c;
        uStack_9e = uStack_8a;
        ppuStack_4 = (undefined1 **)&iStack_88;
        puVar6 = &uStack_24;
        puVar5 = (undefined2 *)&stack0x001a;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar2 = *puVar1;
        }
                    /* WARNING: Call to offcut address within same function */
        aiStack_38[8] = 0x684;
        iVar4 = func_0x0003fdaf();
        uVar8 = 0;
        uVar9 = iVar4 == 0;
        if (!(bool)uVar9) {
          ppuStack_4 = (undefined1 **)0x694;
          FUN_32b2_6d14();
          ppuStack_4 = (undefined1 **)0x69d;
          FUN_32b2_6cc6();
          ppuStack_4 = (undefined1 **)0x6a5;
          FUN_32b2_701d();
          ppuStack_4 = (undefined1 **)0x6aa;
          FUN_32b2_6fc7();
          ppuStack_4 = (undefined1 **)0x6af;
          FUN_32b2_7258();
          ppuStack_4 = (undefined1 **)0x6b4;
          FUN_32b2_7191();
          if ((bool)uVar8 || (bool)uVar9) {
            ppuStack_4 = (undefined1 **)0x6bf;
            FUN_32b2_6d14();
            ppuStack_4 = (undefined1 **)0x6c8;
            FUN_32b2_6cc6();
            ppuStack_4 = (undefined1 **)0x6d1;
            FUN_32b2_701d();
            ppuStack_4 = (undefined1 **)0x6d6;
            FUN_32b2_6fc7();
            ppuStack_4 = (undefined1 **)0x6db;
            FUN_32b2_7258();
            ppuStack_4 = (undefined1 **)0x6e0;
            FUN_32b2_7191();
            if ((bool)uVar8 || (bool)uVar9) {
              uStack_be = *(undefined2 *)0x93c0;
              uStack_bc = *(undefined2 *)0x93c2;
              uStack_ba = *(undefined2 *)0x93c4;
              uStack_b8 = *(undefined2 *)0x93c6;
            }
          }
        }
        ppuStack_4 = (undefined1 **)0x6f8;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x700;
        FUN_32b2_6d14();
        ppuStack_4 = (undefined1 **)0x708;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x711;
        FUN_32b2_710c();
        ppuStack_4 = (undefined1 **)0x71a;
        FUN_32b2_7154();
        ppuStack_4 = (undefined1 **)0x71f;
        FUN_32b2_7191();
        if (!(bool)uVar8) {
          ppuStack_4 = (undefined1 **)0x72d;
          FUN_32b2_6d14();
          ppuStack_4 = (undefined1 **)0x732;
          FUN_32b2_6fc7();
          ppuStack_4 = (undefined1 **)0x73a;
          FUN_32b2_6d14();
          ppuStack_4 = (undefined1 **)0x742;
          FUN_32b2_710c();
          ppuStack_4 = (undefined1 **)0x74b;
          FUN_32b2_710c();
          ppuStack_4 = (undefined1 **)0x750;
          FUN_32b2_7191();
          if (!(bool)uVar8) {
            uStack_be = *(undefined2 *)0x93c0;
            uStack_bc = *(undefined2 *)0x93c2;
            uStack_ba = *(undefined2 *)0x93c4;
            uStack_b8 = *(undefined2 *)0x93c6;
          }
          ppuStack_4 = (undefined1 **)uStack_ba;
          ppuStack_6 = (undefined1 **)uStack_bc;
          piStack_8 = (int *)uStack_be;
          uStack_a = 0x32b2;
          uStack_c = 0x774;
          FUN_32b2_7592();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x77e;
          FUN_32b2_6d14();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x786;
          FUN_32b2_70dc();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x78e;
          FUN_32b2_6d14();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x797;
          FUN_32b2_710c();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x79c;
          FUN_32b2_7182();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x7a5;
          FUN_32b2_6e99();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x7ad;
          FUN_32b2_710c();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x7b5;
          FUN_32b2_7154();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x7be;
          FUN_32b2_6e99();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x7c7;
          FUN_32b2_6eb1();
          ppuStack_4 = &puStack_8c;
          ppuStack_6 = (undefined1 **)&iStack_64;
          piStack_8 = (int *)0x32b2;
          uStack_a = 0x7d9;
          FUN_32b2_6cc6();
          piStack_8 = (int *)0x32b2;
          uStack_a = 0x7de;
          FUN_32b2_7258();
          puStack_10 = (undefined1 *)0x32b2;
          uStack_12 = 0x7e8;
          FUN_32b2_6eb1();
          puStack_10 = (undefined1 *)0x32b2;
          uStack_12 = 0x7f0;
          FUN_32b2_6cc6();
          puStack_10 = (undefined1 *)0x32b2;
          uStack_12 = 0x7f5;
          FUN_32b2_7258();
          uStack_18 = 0x32b2;
          uStack_1a = 0x7ff;
          FUN_32b2_6eb1();
          uStack_18 = uStack_66;
          uStack_1a = uStack_68;
          uStack_1c = uStack_6a;
          uStack_1e = uStack_6c;
          uStack_20 = uStack_4a;
          uStack_22 = uStack_4c;
          uStack_24 = uStack_4e;
          aiStack_38[8] = 0x32b2;
          aiStack_38[7] = 0x820;
          FUN_32b2_6d14();
          aiStack_38[4] = 0x32b2;
          aiStack_38[3] = 0x82a;
          FUN_32b2_6eb1();
          aiStack_38[4] = 0x32b2;
          aiStack_38[3] = 0x833;
          FUN_32b2_6d14();
          aiStack_38[0] = 0x32b2;
          uStack_3a = 0x83d;
          FUN_32b2_6eb1();
          aiStack_38[0] = 0;
          uStack_3a = 0x32b2;
          uStack_3c = 0x844;
          func_0x0003fc09();
          uVar8 = (undefined1 *)0xffc9 < aiStack_38;
          uVar9 = &stack0x0000 == (undefined1 *)0x2;
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x84f;
          FUN_32b2_6cc6();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x857;
          FUN_32b2_6cc6();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x85c;
          FUN_32b2_7191();
          if ((bool)uVar9) {
            iStack_64 = param_2;
            iStack_62 = param_3;
          }
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x872;
          FUN_32b2_6cc6();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x87a;
          FUN_32b2_6cc6();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x87f;
          FUN_32b2_7191();
          if ((bool)uVar9) {
            puStack_8c = param_4;
            uStack_8a = param_5;
          }
          *in_stack_0000003a = iStack_64;
          in_stack_0000003a[1] = iStack_62;
          *in_stack_0000003c = puStack_8c;
          in_stack_0000003c[1] = uStack_8a;
          *in_stack_0000003e = iStack_64;
          in_stack_0000003e[1] = iStack_62;
          *in_stack_00000040 = puStack_8c;
          in_stack_00000040[1] = uStack_8a;
          aiStack_38[0] = aiStack_38[0] + 1;
          uVar9 = aiStack_38[0] == 0;
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x8d7;
          FUN_32b2_6d14();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x8e0;
          FUN_32b2_6d14();
          ppuStack_4 = (undefined1 **)0x32b2;
          ppuStack_6 = (undefined1 **)0x8e5;
          FUN_32b2_7191();
          if (!(bool)uVar8 && !(bool)uVar9) {
            ppuStack_4 = (undefined1 **)uStack_b8;
            ppuStack_6 = (undefined1 **)uStack_ba;
            piStack_8 = (int *)uStack_bc;
            uStack_a = uStack_be;
            uStack_c = 0x32b2;
            iStack_e = 0x8ff;
            FUN_32b2_7592();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x909;
            FUN_32b2_6d14();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x911;
            FUN_32b2_7154();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x916;
            FUN_32b2_6fd6();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x91e;
            FUN_32b2_6d14();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x927;
            FUN_32b2_710c();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x92c;
            FUN_32b2_7182();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x935;
            FUN_32b2_6e99();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x93d;
            FUN_32b2_710c();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x945;
            FUN_32b2_7154();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x94e;
            FUN_32b2_6e99();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x957;
            FUN_32b2_6eb1();
            ppuStack_6 = &puStack_8c;
            piStack_8 = &iStack_64;
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
            uStack_1a = uStack_66;
            uStack_1c = uStack_68;
            uStack_1e = uStack_6a;
            uStack_20 = uStack_6c;
            uStack_22 = uStack_4a;
            uStack_24 = uStack_4c;
            aiStack_38[8] = uStack_50;
            aiStack_38[7] = 0x32b2;
            aiStack_38[6] = 0x9b0;
            FUN_32b2_6d14();
            aiStack_38[3] = 0x32b2;
            aiStack_38[2] = 0x9ba;
            FUN_32b2_6eb1();
            aiStack_38[3] = 0x32b2;
            aiStack_38[2] = 0x9c3;
            FUN_32b2_6d14();
            uStack_3a = 0x32b2;
            uStack_3c = 0x9cd;
            FUN_32b2_6eb1();
            uStack_3a = 0;
            uStack_3c = 0x32b2;
            uStack_3e = 0x9d4;
            func_0x0003fc09();
            uVar8 = &stack0x0000 == (undefined1 *)0x4;
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x9df;
            FUN_32b2_6cc6();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x9e7;
            FUN_32b2_6cc6();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0x9ec;
            FUN_32b2_7191();
            if ((bool)uVar8) {
              iStack_64 = param_2;
              iStack_62 = param_3;
            }
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0xa02;
            FUN_32b2_6cc6();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0xa0a;
            FUN_32b2_6cc6();
            ppuStack_6 = (undefined1 **)0x32b2;
            piStack_8 = (int *)0xa0f;
            FUN_32b2_7191();
            if ((bool)uVar8) {
              puStack_8c = param_4;
              uStack_8a = param_5;
            }
            *in_stack_0000003e = iStack_64;
            in_stack_0000003e[1] = iStack_62;
            *in_stack_00000040 = puStack_8c;
            in_stack_00000040[1] = uStack_8a;
            return aiStack_38[0] + 1;
          }
          return aiStack_38[0];
        }
      }
      return 0;
    }
    ppuStack_4 = (undefined1 **)0x3f5;
    FUN_32b2_6d14();
    ppuStack_4 = (undefined1 **)0x32b2;
    ppuStack_6 = (undefined1 **)0x3ff;
    FUN_32b2_7154();
    ppuStack_4 = (undefined1 **)0x405;
    FUN_32b2_6eb1();
    uStack_48 = uStack_a;
    puStack_46 = (undefined1 *)piStack_8;
    iStack_44 = (int)ppuStack_6;
    uStack_42 = ppuStack_4;
    uStack_12 = uStack_a;
    puStack_10 = (undefined1 *)piStack_8;
    iStack_e = (int)ppuStack_6;
  }
  return 0;
}



/* 3ab8:5138  FUN_3ab8_5138  71 bytes, 1 callers */

undefined2 FUN_3ab8_5138(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  int unaff_BP;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
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
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  iStack_6 = 0x3ab8;
  iStack_8 = 0xfcc6;
  func_0x00024c86();
  iStack_6 = 0x22b2;
  iStack_8 = 0xfcd6;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = 0xfce5;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = 0xfcf5;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = 0xfd05;
  FUN_21f2_2d26();
  if (*(int *)(unaff_BP + 6) != 0) {
    iStack_6 = 0x22b2;
    iStack_8 = 0xfd1b;
    FUN_21f2_2d26();
  }
  uVar8 = 0x22b2;
  if (*(char *)0x133 != '\0') {
    *(undefined2 *)0xc22 = 1;
    iStack_6 = 2;
    iStack_8 = 0x14;
    iStack_a = 0x546e;
    uStack_c = 0x22b2;
    uVar8 = 0xdef;
    uStack_e = 0xfd42;
    FUN_1000_02b5();
  }
  iStack_8 = 0xfd53;
  iStack_6 = uVar8;
  FUN_1def_07a4();
  *(undefined2 *)0xb6a = 0;
  *(undefined2 *)0xc26 = 1;
  *(undefined2 *)0xc28 = 1;
  iStack_6 = unaff_BP + -0xd0;
  iStack_8 = unaff_BP + -0xa8;
  iStack_a = 9999;
  uStack_c = 0x1bb4;
  uStack_e = 0xfd81;
  uVar8 = FUN_1def_0904();
  *(undefined2 *)(unaff_BP + -0x42) = uVar8;
  *(undefined2 *)0xb6a = 0;
  *(undefined2 *)0xc26 = 0;
  *(undefined2 *)0xc28 = 0;
  if (((*(int *)0x158 != 0) || (*(int *)(unaff_BP + -0x42) == -1)) ||
     (*(int *)(unaff_BP + -0x42) == 3)) goto LAB_2bb4_4535;
  if (*(int *)(unaff_BP + -0xcc) == 1) {
    *(undefined2 *)(unaff_BP + -0x42) = 1;
  }
  if (*(int *)(unaff_BP + -0xcc) == 2) {
    *(undefined2 *)(unaff_BP + -0x42) = 2;
  }
  if ((*(int *)(unaff_BP + -0x42) < 1) || (2 < *(int *)(unaff_BP + -0x42))) {
    if ((*(int *)(unaff_BP + -0x42) != 0x6200) && (*(int *)(unaff_BP + -0x42) != 0x3e00)) {
      uVar8 = FUN_3ab8_5138();
      return uVar8;
    }
    if (*(char *)0x133 != '\0') {
      *(undefined1 *)0x133 = 0;
      uVar8 = FUN_3ab8_5138();
      return uVar8;
    }
    *(undefined1 *)0x133 = 1;
    uVar8 = FUN_3ab8_5138();
    return uVar8;
  }
  func_0x0000c3ca();
  iStack_6 = 0x885;
  iStack_8 = 65000;
  FUN_21f2_3454();
  iStack_6 = 0x22b2;
  iStack_8 = 0xfdf6;
  FUN_21f2_2d26();
  if (*(char *)0x133 != '\0') {
    iStack_6 = 0x22b2;
    iStack_8 = 0xfe0b;
    FUN_21f2_3454();
    *(undefined1 *)(unaff_BP + -0x40) = *(undefined1 *)*(undefined2 *)(unaff_BP + 10);
    *(undefined1 *)(unaff_BP + -0x3f) = 0x5f;
  }
  iStack_6 = 0x22b2;
  iStack_8 = 0xfe26;
  FUN_1000_0599();
  iStack_6 = 0xfe31;
  func_0x00012276();
  iStack_6 = 0xfe3b;
  func_0x00012276();
  iStack_6 = 0x11f2;
  iStack_8 = 0xfe48;
  FUN_21f2_3454();
  *(undefined1 *)0xbf51 = 0x30;
  *(undefined1 *)0xbf52 = 0x30;
  *(undefined1 *)0xbf53 = 0x30;
  iStack_6 = 0x22b2;
  iStack_8 = 0xfe61;
  FUN_21f2_3454();
  iStack_6 = 0x22b2;
  iStack_8 = 0xfe70;
  FUN_21f2_2d26();
  if (*(char *)0x133 != '\0') {
    iStack_6 = 0x22b2;
    iStack_8 = 0xfe86;
    FUN_21f2_3454();
    *(undefined1 *)(unaff_BP + -0x56) = *(undefined1 *)*(undefined2 *)(unaff_BP + 10);
    *(undefined1 *)(unaff_BP + -0x55) = 0x5f;
  }
  iStack_6 = 0x22b2;
  iStack_8 = 0xfea1;
  iVar5 = func_0x00026f7a();
  if ((iVar5 == 0) || (*(int *)0x7a34 != 0xd)) {
    iStack_6 = unaff_BP + -0x56;
    iStack_8 = 0x22b2;
    iStack_a = 0xff10;
    iVar5 = func_0x000276d7();
    if (iVar5 == 0) {
      iStack_6 = 0xff20;
      iVar5 = func_0x00027698();
      if (iVar5 == 0) goto LAB_3ab8_53bf;
      *(undefined2 *)0xd70 = 0;
    }
    else {
LAB_3ab8_53bf:
      iStack_6 = 0x22b2;
      iStack_8 = -0xb4;
      iVar5 = FUN_21f2_1348();
      *(int *)0xd70 = iVar5;
      if (iVar5 != 0) {
        iStack_6 = 0x22b2;
        iStack_8 = 0xff61;
        FUN_21f2_3454();
        iStack_6 = 0x22b2;
        iStack_8 = 0xff70;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = 0xff8b;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = 0xff9a;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        uVar8 = 0x22b2;
        iStack_8 = 0xffa9;
        iVar5 = FUN_21f2_31f0();
        if (iVar5 != 0) {
          uVar8 = 0x11f2;
          iStack_6 = 0xffb8;
          FUN_13bf_0a03();
        }
        iStack_8 = 0xffc4;
        iStack_6 = uVar8;
        FUN_21f2_3454();
        iStack_6 = 0x22b2;
        iStack_8 = 0xffd2;
        FUN_21f2_3454();
        *(undefined1 *)0xbf48 = 0x2a;
        iStack_6 = 0x22b2;
        iStack_8 = 0xffe6;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        uVar8 = 0x22b2;
        iStack_8 = 0xfff5;
        iVar5 = FUN_21f2_31f0();
        if (iVar5 != 0) {
          uVar8 = 0x11f2;
          iStack_6 = 4;
          FUN_13bf_0a03();
        }
        iStack_6 = *(undefined2 *)(unaff_BP + 0xc);
        iStack_8 = 1;
        uStack_c = 0x18;
        iStack_a = uVar8;
        FUN_4375_c22c();
        func_0x0002504e();
        *(undefined2 *)0xd70 = 0;
        iStack_6 = unaff_BP + -0x40;
        iStack_8 = 0x22b2;
        uVar8 = 0x22b2;
        iStack_a = 0x36;
        iVar5 = func_0x000276d7();
        if (iVar5 == 0) {
          uVar8 = 0x22b2;
          iStack_6 = 0x46;
          iVar5 = func_0x00027698();
          if (iVar5 != 0) {
            uVar8 = 0x11f2;
            iStack_6 = 0x54;
            FUN_13bf_0a03();
          }
        }
        iStack_8 = 0x62;
        iStack_6 = uVar8;
        iVar5 = func_0x000270f0();
        if (iVar5 != 0) {
          iStack_6 = 0x71;
          FUN_13bf_0a03();
        }
        return 1;
      }
    }
    func_0x0002504e();
  }
  else {
    iStack_6 = 3;
    iStack_8 = 0x16;
    iStack_a = 0x860;
    uStack_c = 0x584;
    uStack_e = 0x22b2;
    uStack_10 = 0xfecb;
    iStack_a = func_0x0001450d();
    uStack_c = 0x11f2;
    uStack_e = 0xfed3;
    FUN_1000_02b5();
  }
  iStack_6 = 0xff39;
  func_0x000121f9();
LAB_2bb4_4535:
  *(undefined2 *)(unaff_BP + -0x36) = 0;
  iStack_6 = 0x84;
  FUN_32b2_6d14();
  iStack_6 = 0x8c;
  FUN_32b2_6e99();
  uVar8 = *(undefined2 *)(unaff_BP + 0x32);
  uVar4 = *(undefined2 *)(unaff_BP + 0x34);
  *(undefined2 *)(unaff_BP + -0xe6) = 0;
  *(undefined2 *)(unaff_BP + -0xe8) = 0;
  *(undefined2 *)(unaff_BP + -0xea) = uVar4;
  *(undefined2 *)(unaff_BP + -0xec) = uVar8;
  iStack_6 = 0xaf;
  FUN_32b2_7285();
  iStack_6 = 0xb4;
  FUN_32b2_717d();
  iStack_6 = 0xbd;
  FUN_32b2_6eb1();
  iStack_6 = 0xc5;
  FUN_32b2_6cc6();
  iStack_6 = 0xcd;
  FUN_32b2_6eb1();
  uVar8 = *(undefined2 *)(unaff_BP + 0x28);
  *(undefined2 *)(unaff_BP + -0xe6) = 0;
  *(undefined2 *)(unaff_BP + -0xe8) = 0;
  *(undefined2 *)(unaff_BP + -0xea) = 0;
  *(undefined2 *)(unaff_BP + -0xec) = uVar8;
  iStack_6 = 0xeb;
  FUN_32b2_7285();
  iStack_6 = 0xf3;
  FUN_32b2_704d();
  iStack_6 = 0xfc;
  FUN_32b2_710c();
  iStack_6 = 0x104;
  FUN_32b2_6eb1();
  while( true ) {
    iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
    iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
    iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
    uStack_c = 0x32b2;
    uStack_e = 0x119;
    FUN_32b2_75fe();
    iStack_6 = 0x32b2;
    iStack_8 = 0x123;
    FUN_32b2_6d14();
    iStack_6 = 0x32b2;
    iStack_8 = 299;
    FUN_32b2_704d();
    iStack_6 = 0x32b2;
    iStack_8 = 0x133;
    FUN_32b2_7095();
    iStack_6 = 0x32b2;
    iStack_8 = 0x13b;
    FUN_32b2_6eb1();
    iStack_6 = *(undefined2 *)(unaff_BP + -0xb6);
    iStack_8 = *(undefined2 *)(unaff_BP + -0xb8);
    iStack_a = *(undefined2 *)(unaff_BP + -0xba);
    uStack_c = *(undefined2 *)(unaff_BP + -0xbc);
    uStack_e = 0x32b2;
    uStack_10 = 0x150;
    FUN_32b2_75ec();
    uVar9 = &stack0x0000 == (undefined1 *)0x6;
    iStack_8 = 0x32b2;
    iStack_a = 0x15a;
    FUN_32b2_6d14();
    iStack_8 = 0x32b2;
    iStack_a = 0x162;
    FUN_32b2_704d();
    iStack_8 = 0x32b2;
    iStack_a = 0x16a;
    FUN_32b2_7095();
    iStack_8 = 0x32b2;
    iStack_a = 0x173;
    FUN_32b2_6eb1();
    iStack_8 = 0x32b2;
    iStack_a = 0x17b;
    FUN_32b2_6cc6();
    iStack_8 = 0x32b2;
    iStack_a = 0x183;
    FUN_32b2_6cc6();
    iStack_8 = 0x32b2;
    iStack_a = 0x188;
    FUN_32b2_7191();
    if ((bool)uVar9) {
      iStack_8 = 0x32b2;
      iStack_a = 0x192;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x19a;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x19f;
      FUN_32b2_7191();
      if ((bool)uVar9) {
        return 0;
      }
    }
    iStack_8 = unaff_BP + -0xa8;
    iStack_a = unaff_BP + -0x1c;
    uStack_c = *(undefined2 *)(unaff_BP + -0x7c);
    uStack_e = *(undefined2 *)(unaff_BP + -0x7e);
    uStack_10 = *(undefined2 *)(unaff_BP + -0x80);
    uStack_12 = *(undefined2 *)(unaff_BP + -0x82);
    uStack_14 = *(undefined2 *)(unaff_BP + -0x58);
    uStack_16 = *(undefined2 *)(unaff_BP + -0x5a);
    uStack_18 = *(undefined2 *)(unaff_BP + -0x5c);
    uStack_1a = *(undefined2 *)(unaff_BP + -0x5e);
    uStack_1c = 0x32b2;
    uStack_1e = 0x1d0;
    FUN_32b2_6cc6();
    uStack_1c = 0x32b2;
    uStack_1e = 0x1d5;
    FUN_32b2_7258();
    uStack_24 = 0x32b2;
    uStack_26 = 0x1df;
    FUN_32b2_6eb1();
    uStack_24 = 0x32b2;
    uStack_26 = 0x1e7;
    FUN_32b2_6cc6();
    uStack_24 = 0x32b2;
    uStack_26 = 0x1ec;
    FUN_32b2_7258();
    uStack_2c = 0x32b2;
    uStack_2e = 0x1f6;
    FUN_32b2_6eb1();
    uStack_2c = 0x32b2;
    uStack_2e = 0x1fa;
    iVar5 = FUN_3ab8_4fbd();
    if (iVar5 == 0) break;
    iStack_8 = 0x32b2;
    iStack_a = 0x209;
    FUN_32b2_6cc6();
    iStack_8 = 0x32b2;
    iStack_a = 0x20e;
    FUN_32b2_7258();
    iStack_8 = 0x32b2;
    iStack_a = 0x216;
    FUN_32b2_6e99();
    iStack_8 = 0x32b2;
    iStack_a = 0x21e;
    FUN_32b2_6ef9();
    iStack_8 = unaff_BP + -0xb4;
    iStack_a = unaff_BP + -0xa4;
    uStack_c = 0x32b2;
    uStack_e = 0x231;
    FUN_32b2_6cc6();
    uStack_c = 0x32b2;
    uStack_e = 0x236;
    FUN_32b2_7258();
    uStack_14 = 0x32b2;
    uStack_16 = 0x240;
    FUN_32b2_6eb1();
    uStack_14 = 0x32b2;
    uStack_16 = 0x248;
    FUN_32b2_6cc6();
    uStack_14 = 0x32b2;
    uStack_16 = 0x24d;
    FUN_32b2_7258();
    uStack_1c = 0x32b2;
    uStack_1e = 599;
    FUN_32b2_6eb1();
    uStack_1c = 0x32b2;
    uStack_1e = 0x25f;
    FUN_32b2_6d14();
    uStack_24 = 0x32b2;
    uStack_26 = 0x269;
    FUN_32b2_6eb1();
    uStack_24 = 0x32b2;
    uStack_26 = 0x271;
    FUN_32b2_6cc6();
    uStack_24 = 0x32b2;
    uStack_26 = 0x276;
    FUN_32b2_7258();
    uStack_24 = 0x32b2;
    uStack_26 = 0x27e;
    FUN_32b2_6e99();
    uStack_2c = 0x32b2;
    uStack_2e = 0x288;
    FUN_32b2_6eb1();
    uStack_2c = 0x32b2;
    uStack_2e = 0x290;
    FUN_32b2_6cc6();
    uStack_2c = 0x32b2;
    uStack_2e = 0x295;
    FUN_32b2_7258();
    uStack_34 = 0x32b2;
    uStack_36 = 0x29f;
    FUN_32b2_6eb1();
    uStack_34 = 0x32b2;
    uStack_36 = 0x2a7;
    FUN_32b2_6cc6();
    uStack_34 = 0x32b2;
    uStack_36 = 0x2ac;
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    func_0x0003fc09(0x32b2,1);
    iStack_8 = unaff_BP + -0xe4;
    iStack_a = unaff_BP + -0xd0;
    uStack_c = 0x32b2;
    uStack_e = 0x2d4;
    FUN_32b2_6cc6();
    uStack_c = 0x32b2;
    uStack_e = 0x2d9;
    FUN_32b2_7258();
    uStack_14 = 0x32b2;
    uStack_16 = 0x2e3;
    FUN_32b2_6eb1();
    uStack_14 = 0x32b2;
    uStack_16 = 0x2eb;
    FUN_32b2_6cc6();
    uStack_14 = 0x32b2;
    uStack_16 = 0x2f0;
    FUN_32b2_7258();
    uStack_1c = 0x32b2;
    uStack_1e = 0x2fa;
    FUN_32b2_6eb1();
    uStack_1c = 0x32b2;
    uStack_1e = 0x302;
    FUN_32b2_6d14();
    uStack_24 = 0x32b2;
    uStack_26 = 0x30c;
    FUN_32b2_6eb1();
    uStack_24 = 0x32b2;
    uStack_26 = 0x314;
    FUN_32b2_6d14();
    uStack_2c = 0x32b2;
    uStack_2e = 0x31e;
    FUN_32b2_6eb1();
    uStack_2c = 0x32b2;
    uStack_2e = 0x326;
    FUN_32b2_6cc6();
    uStack_2c = 0x32b2;
    uStack_2e = 0x32b;
    FUN_32b2_7258();
    uStack_34 = 0x32b2;
    uStack_36 = 0x335;
    FUN_32b2_6eb1();
    uStack_34 = 0x32b2;
    uStack_36 = 0x33d;
    FUN_32b2_6cc6();
    uStack_34 = 0x32b2;
    uStack_36 = 0x342;
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    func_0x0003fc09(0x32b2,1);
    uVar9 = (undefined1 *)0xffc9 < &uStack_38;
    uVar10 = &stack0x0000 == (undefined1 *)0x2;
    iStack_6 = 0x360;
    FUN_32b2_6cc6();
    iStack_6 = 0x369;
    FUN_32b2_701d();
    iStack_6 = 0x36e;
    FUN_32b2_7258();
    iStack_6 = 0x376;
    FUN_32b2_6e99();
    iStack_6 = 0x37e;
    FUN_32b2_6ef9();
    iStack_6 = 0x387;
    FUN_32b2_6cc6();
    iStack_6 = 0x390;
    FUN_32b2_701d();
    iStack_6 = 0x395;
    FUN_32b2_7258();
    iStack_6 = 0x39e;
    FUN_32b2_6e99();
    iStack_6 = 0x3a6;
    FUN_32b2_6ef9();
    iStack_6 = 0x3af;
    FUN_32b2_6d14();
    iStack_6 = 0x3b4;
    FUN_32b2_6fc7();
    iStack_6 = 0x3bc;
    FUN_32b2_6d14();
    iStack_6 = 0x3c1;
    FUN_32b2_6fc7();
    iStack_6 = 0x3ca;
    FUN_32b2_710c();
    iStack_6 = 0x3cf;
    FUN_32b2_7191();
    if (!(bool)uVar9 && !(bool)uVar10) {
      iStack_6 = 0x3da;
      FUN_32b2_6d14();
      iStack_6 = 0x3e2;
      FUN_32b2_6d14();
      iStack_6 = 999;
      FUN_32b2_7191();
      if (!(bool)uVar10) {
        iStack_6 = 0x431;
        FUN_32b2_6d14();
        iStack_6 = 0x439;
        FUN_32b2_7124();
        iStack_6 = 0x441;
        FUN_32b2_6e99();
        iStack_6 = 0x44a;
        FUN_32b2_704d();
        iStack_6 = 0x453;
        FUN_32b2_7035();
        iStack_6 = 0x45c;
        FUN_32b2_6e99();
        iStack_6 = 0x464;
        FUN_32b2_6eb1();
        iStack_6 = 0x46c;
        FUN_32b2_6d14();
        iStack_6 = 0x474;
        FUN_32b2_710c();
        iStack_6 = 0x47c;
        FUN_32b2_710c();
        iStack_6 = 0x484;
        FUN_32b2_710c();
        iStack_6 = 0x48c;
        FUN_32b2_6d14();
        iStack_6 = 0x494;
        FUN_32b2_710c();
        iStack_6 = 0x49d;
        FUN_32b2_6e99();
        iStack_6 = 0x4a2;
        FUN_32b2_718c();
        iStack_6 = 0x4ab;
        FUN_32b2_6e99();
        iStack_6 = 0x4b3;
        FUN_32b2_6eb1();
        iStack_6 = 0x4bc;
        FUN_32b2_6d14();
        iStack_6 = 0x4c4;
        FUN_32b2_710c();
        iStack_6 = 0x4cd;
        FUN_32b2_710c();
        iStack_6 = 0x4d5;
        FUN_32b2_710c();
        iStack_6 = 0x4dd;
        FUN_32b2_710c();
        iStack_6 = 0x4e6;
        FUN_32b2_6e99();
        iStack_6 = 0x4ee;
        FUN_32b2_6eb1();
        iStack_6 = 0x4f7;
        FUN_32b2_6d14();
        iStack_6 = 0x500;
        FUN_32b2_710c();
        iStack_6 = 0x509;
        FUN_32b2_70dc();
        iStack_6 = 0x511;
        FUN_32b2_710c();
        iStack_6 = 0x519;
        FUN_32b2_710c();
        iStack_6 = 0x522;
        FUN_32b2_6e99();
        iStack_6 = 0x52b;
        FUN_32b2_6eb1();
        iStack_6 = 0x534;
        FUN_32b2_6d14();
        iStack_6 = 0x53d;
        FUN_32b2_710c();
        iStack_6 = 0x546;
        FUN_32b2_710c();
        iStack_6 = 0x54f;
        FUN_32b2_6d14();
        iStack_6 = 0x558;
        FUN_32b2_710c();
        iStack_6 = 0x55d;
        FUN_32b2_718c();
        iStack_6 = 0x566;
        FUN_32b2_6eb1();
        iStack_6 = 0x56f;
        FUN_32b2_6d14();
        iStack_6 = 0x574;
        FUN_32b2_6fd6();
        iStack_6 = 0x57d;
        FUN_32b2_6d14();
        iStack_6 = 0x586;
        FUN_32b2_710c();
        iStack_6 = 0x58b;
        FUN_32b2_7182();
        iStack_6 = 0x594;
        FUN_32b2_6e99();
        iStack_6 = 0x59c;
        FUN_32b2_710c();
        iStack_6 = 0x5a5;
        FUN_32b2_7154();
        iStack_6 = 0x5ae;
        FUN_32b2_6e99();
        iStack_6 = 0x5b7;
        FUN_32b2_6eb1();
        iStack_6 = 0x5c0;
        FUN_32b2_6d14();
        iStack_6 = 0x5c9;
        FUN_32b2_6eb1();
        iStack_6 = unaff_BP + -0x62;
        iStack_8 = 0x32b2;
        iStack_a = 0x5db;
        FUN_32b2_6cc6();
        iStack_8 = 0x32b2;
        iStack_a = 0x5e0;
        FUN_32b2_7258();
        uStack_10 = 0x32b2;
        uStack_12 = 0x5ea;
        FUN_32b2_6eb1();
        uStack_10 = 0x32b2;
        uStack_12 = 0x5f2;
        FUN_32b2_6cc6();
        uStack_10 = 0x32b2;
        uStack_12 = 0x5f7;
        FUN_32b2_7258();
        uStack_18 = 0x32b2;
        uStack_1a = 0x601;
        FUN_32b2_6eb1();
        uStack_18 = *(undefined2 *)(unaff_BP + -100);
        uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
        uStack_1c = *(undefined2 *)(unaff_BP + -0x68);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
        uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
        uStack_26 = *(undefined2 *)(unaff_BP + -0x4e);
        uStack_2a = 0x622;
        FUN_32b2_6d14();
        uStack_30 = 0x32b2;
        uStack_32 = 0x62c;
        FUN_32b2_6eb1();
        uStack_30 = 0x32b2;
        uStack_32 = 0x635;
        FUN_32b2_6d14();
        uStack_38 = 0x32b2;
        uStack_3a = 0x63f;
        FUN_32b2_6eb1();
        uStack_38 = 0;
        uStack_3a = 0x32b2;
        func_0x0003fc09();
        uVar8 = *(undefined2 *)(unaff_BP + -0x60);
        *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
        *(undefined2 *)(unaff_BP + -0x84) = uVar8;
        uVar8 = *(undefined2 *)(unaff_BP + -0x88);
        *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
        *(undefined2 *)(unaff_BP + -0x9c) = uVar8;
        iStack_6 = unaff_BP + -0x86;
        puVar7 = &uStack_26;
        puVar6 = (undefined2 *)(unaff_BP + 0x1c);
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
                    /* WARNING: Call to offcut address within same function */
        uStack_2a = 0x684;
        iVar5 = func_0x0003fdaf();
        uVar9 = 0;
        uVar10 = iVar5 == 0;
        if (!(bool)uVar10) {
          iStack_6 = 0x694;
          FUN_32b2_6d14();
          iStack_6 = 0x69d;
          FUN_32b2_6cc6();
          iStack_6 = 0x6a5;
          FUN_32b2_701d();
          iStack_6 = 0x6aa;
          FUN_32b2_6fc7();
          iStack_6 = 0x6af;
          FUN_32b2_7258();
          iStack_6 = 0x6b4;
          FUN_32b2_7191();
          if ((bool)uVar9 || (bool)uVar10) {
            iStack_6 = 0x6bf;
            FUN_32b2_6d14();
            iStack_6 = 0x6c8;
            FUN_32b2_6cc6();
            iStack_6 = 0x6d1;
            FUN_32b2_701d();
            iStack_6 = 0x6d6;
            FUN_32b2_6fc7();
            iStack_6 = 0x6db;
            FUN_32b2_7258();
            iStack_6 = 0x6e0;
            FUN_32b2_7191();
            if ((bool)uVar9 || (bool)uVar10) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
          }
        }
        iStack_6 = 0x6f8;
        FUN_32b2_6d14();
        iStack_6 = 0x700;
        FUN_32b2_6d14();
        iStack_6 = 0x708;
        FUN_32b2_710c();
        iStack_6 = 0x711;
        FUN_32b2_710c();
        iStack_6 = 0x71a;
        FUN_32b2_7154();
        iStack_6 = 0x71f;
        FUN_32b2_7191();
        if (!(bool)uVar9) {
          iStack_6 = 0x72d;
          FUN_32b2_6d14();
          iStack_6 = 0x732;
          FUN_32b2_6fc7();
          iStack_6 = 0x73a;
          FUN_32b2_6d14();
          iStack_6 = 0x742;
          FUN_32b2_710c();
          iStack_6 = 0x74b;
          FUN_32b2_710c();
          iStack_6 = 0x750;
          FUN_32b2_7191();
          if (!(bool)uVar9) {
            *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
            *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
            *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
            *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
          }
          iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
          iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
          iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
          uStack_c = 0x32b2;
          uStack_e = 0x774;
          FUN_32b2_7592();
          iStack_6 = 0x32b2;
          iStack_8 = 0x77e;
          FUN_32b2_6d14();
          iStack_6 = 0x32b2;
          iStack_8 = 0x786;
          FUN_32b2_70dc();
          iStack_6 = 0x32b2;
          iStack_8 = 0x78e;
          FUN_32b2_6d14();
          iStack_6 = 0x32b2;
          iStack_8 = 0x797;
          FUN_32b2_710c();
          iStack_6 = 0x32b2;
          iStack_8 = 0x79c;
          FUN_32b2_7182();
          iStack_6 = 0x32b2;
          iStack_8 = 0x7a5;
          FUN_32b2_6e99();
          iStack_6 = 0x32b2;
          iStack_8 = 0x7ad;
          FUN_32b2_710c();
          iStack_6 = 0x32b2;
          iStack_8 = 0x7b5;
          FUN_32b2_7154();
          iStack_6 = 0x32b2;
          iStack_8 = 0x7be;
          FUN_32b2_6e99();
          iStack_6 = 0x32b2;
          iStack_8 = 0x7c7;
          FUN_32b2_6eb1();
          iStack_6 = unaff_BP + -0x8a;
          iStack_8 = unaff_BP + -0x62;
          iStack_a = 0x32b2;
          uStack_c = 0x7d9;
          FUN_32b2_6cc6();
          iStack_a = 0x32b2;
          uStack_c = 0x7de;
          FUN_32b2_7258();
          uStack_12 = 0x32b2;
          uStack_14 = 0x7e8;
          FUN_32b2_6eb1();
          uStack_12 = 0x32b2;
          uStack_14 = 0x7f0;
          FUN_32b2_6cc6();
          uStack_12 = 0x32b2;
          uStack_14 = 0x7f5;
          FUN_32b2_7258();
          uStack_1a = 0x32b2;
          uStack_1c = 0x7ff;
          FUN_32b2_6eb1();
          uStack_1a = *(undefined2 *)(unaff_BP + -100);
          uStack_1c = *(undefined2 *)(unaff_BP + -0x66);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_26 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_2a = 0x32b2;
          uStack_2c = 0x820;
          FUN_32b2_6d14();
          uStack_32 = 0x32b2;
          uStack_34 = 0x82a;
          FUN_32b2_6eb1();
          uStack_32 = 0x32b2;
          uStack_34 = 0x833;
          FUN_32b2_6d14();
          uStack_3a = 0x32b2;
          FUN_32b2_6eb1();
          uStack_3a = 0;
          func_0x0003fc09(0x32b2);
          uVar9 = (undefined1 *)0xffc9 < &uStack_3a;
          uVar10 = &stack0x0000 == (undefined1 *)0x4;
          iStack_6 = 0x32b2;
          iStack_8 = 0x84f;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          iStack_8 = 0x857;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          iStack_8 = 0x85c;
          FUN_32b2_7191();
          if ((bool)uVar10) {
            uVar8 = *(undefined2 *)(unaff_BP + 8);
            *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
            *(undefined2 *)(unaff_BP + -0x60) = uVar8;
          }
          iStack_6 = 0x32b2;
          iStack_8 = 0x872;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          iStack_8 = 0x87a;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          iStack_8 = 0x87f;
          FUN_32b2_7191();
          if ((bool)uVar10) {
            uVar8 = *(undefined2 *)(unaff_BP + 0xc);
            *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
            *(undefined2 *)(unaff_BP + -0x88) = uVar8;
          }
          uVar8 = *(undefined2 *)(unaff_BP + -0x60);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
          *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
          puVar6[1] = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0x88);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
          *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar6[1] = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0x60);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
          *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
          puVar6[1] = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0x88);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
          *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar6[1] = uVar8;
          piVar1 = (int *)(unaff_BP + -0x36);
          *piVar1 = *piVar1 + 1;
          uVar10 = *piVar1 == 0;
          iStack_6 = 0x32b2;
          iStack_8 = 0x8d7;
          FUN_32b2_6d14();
          iStack_6 = 0x32b2;
          iStack_8 = 0x8e0;
          FUN_32b2_6d14();
          iStack_6 = 0x32b2;
          iStack_8 = 0x8e5;
          FUN_32b2_7191();
          if (!(bool)uVar9 && !(bool)uVar10) {
            iStack_6 = *(undefined2 *)(unaff_BP + -0xb6);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_a = *(undefined2 *)(unaff_BP + -0xba);
            uStack_c = *(undefined2 *)(unaff_BP + -0xbc);
            uStack_e = 0x32b2;
            uStack_10 = 0x8ff;
            FUN_32b2_7592();
            iStack_8 = 0x32b2;
            iStack_a = 0x909;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x911;
            FUN_32b2_7154();
            iStack_8 = 0x32b2;
            iStack_a = 0x916;
            FUN_32b2_6fd6();
            iStack_8 = 0x32b2;
            iStack_a = 0x91e;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x927;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            iStack_a = 0x92c;
            FUN_32b2_7182();
            iStack_8 = 0x32b2;
            iStack_a = 0x935;
            FUN_32b2_6e99();
            iStack_8 = 0x32b2;
            iStack_a = 0x93d;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            iStack_a = 0x945;
            FUN_32b2_7154();
            iStack_8 = 0x32b2;
            iStack_a = 0x94e;
            FUN_32b2_6e99();
            iStack_8 = 0x32b2;
            iStack_a = 0x957;
            FUN_32b2_6eb1();
            iStack_8 = unaff_BP + -0x8a;
            iStack_a = unaff_BP + -0x62;
            uStack_c = 0x32b2;
            uStack_e = 0x969;
            FUN_32b2_6cc6();
            uStack_c = 0x32b2;
            uStack_e = 0x96e;
            FUN_32b2_7258();
            uStack_14 = 0x32b2;
            uStack_16 = 0x978;
            FUN_32b2_6eb1();
            uStack_14 = 0x32b2;
            uStack_16 = 0x980;
            FUN_32b2_6cc6();
            uStack_14 = 0x32b2;
            uStack_16 = 0x985;
            FUN_32b2_7258();
            uStack_1c = 0x32b2;
            uStack_1e = 0x98f;
            FUN_32b2_6eb1();
            uStack_1c = *(undefined2 *)(unaff_BP + -100);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x66);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x68);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_26 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_2a = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_2c = 0x32b2;
            uStack_2e = 0x9b0;
            FUN_32b2_6d14();
            uStack_34 = 0x32b2;
            uStack_36 = 0x9ba;
            FUN_32b2_6eb1();
            uStack_34 = 0x32b2;
            uStack_36 = 0x9c3;
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            func_0x0003fc09(0x32b2,0);
            uVar9 = &stack0x0000 == (undefined1 *)0x6;
            iStack_8 = 0x32b2;
            iStack_a = 0x9df;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0x9e7;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0x9ec;
            FUN_32b2_7191();
            if ((bool)uVar9) {
              uVar8 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar8;
            }
            iStack_8 = 0x32b2;
            iStack_a = 0xa02;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0xa0a;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0xa0f;
            FUN_32b2_7191();
            if ((bool)uVar9) {
              uVar8 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar8;
            }
            uVar8 = *(undefined2 *)(unaff_BP + -0x60);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
            puVar6[1] = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x88);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar6[1] = uVar8;
            *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
          }
          return *(undefined2 *)(unaff_BP + -0x36);
        }
      }
      return 0;
    }
    iStack_6 = 0x3f5;
    FUN_32b2_6d14();
    iStack_6 = 0x32b2;
    iStack_8 = 0x3ff;
    FUN_32b2_7154();
    iStack_6 = 0x405;
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



/* 3ab8:517f  FUN_3ab8_517f  889 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_517f(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  int unaff_BP;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined1 uVar10;
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
  
  iStack_4 = 0x3ab8;
  iStack_6 = 0xfd05;
  FUN_21f2_2d26();
  if (*(int *)(unaff_BP + 6) != 0) {
    iStack_4 = 0x22b2;
    iStack_6 = 0xfd1b;
    FUN_21f2_2d26();
  }
  uVar8 = 0x22b2;
  if (*(char *)0x133 != '\0') {
    *(undefined2 *)0xc22 = 1;
    iStack_4 = 2;
    iStack_6 = 0x14;
    iStack_8 = 0x546e;
    uStack_a = 0x22b2;
    uVar8 = 0xdef;
    uStack_c = 0xfd42;
    FUN_1000_02b5();
  }
  iStack_6 = 0xfd53;
  iStack_4 = uVar8;
  FUN_1def_07a4();
  *(undefined2 *)0xb6a = 0;
  *(undefined2 *)0xc26 = 1;
  *(undefined2 *)0xc28 = 1;
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = unaff_BP + -0xa8;
  iStack_8 = 9999;
  uStack_a = 0x1bb4;
  uStack_c = 0xfd81;
  uVar8 = FUN_1def_0904();
  *(undefined2 *)(unaff_BP + -0x42) = uVar8;
  *(undefined2 *)0xb6a = 0;
  *(undefined2 *)0xc26 = 0;
  *(undefined2 *)0xc28 = 0;
  if (((*(int *)0x158 != 0) || (*(int *)(unaff_BP + -0x42) == -1)) ||
     (*(int *)(unaff_BP + -0x42) == 3)) goto LAB_2bb4_4535;
  if (*(int *)(unaff_BP + -0xcc) == 1) {
    *(undefined2 *)(unaff_BP + -0x42) = 1;
  }
  if (*(int *)(unaff_BP + -0xcc) == 2) {
    *(undefined2 *)(unaff_BP + -0x42) = 2;
  }
  if ((*(int *)(unaff_BP + -0x42) < 1) || (2 < *(int *)(unaff_BP + -0x42))) {
    if ((*(int *)(unaff_BP + -0x42) != 0x6200) && (*(int *)(unaff_BP + -0x42) != 0x3e00)) {
      uVar8 = FUN_3ab8_5138();
      return uVar8;
    }
    if (*(char *)0x133 != '\0') {
      *(undefined1 *)0x133 = 0;
      uVar8 = FUN_3ab8_5138();
      return uVar8;
    }
    *(undefined1 *)0x133 = 1;
    uVar8 = FUN_3ab8_5138();
    return uVar8;
  }
  func_0x0000c3ca();
  iStack_4 = 0x885;
  iStack_6 = 65000;
  FUN_21f2_3454();
  iStack_4 = 0x22b2;
  iStack_6 = 0xfdf6;
  FUN_21f2_2d26();
  if (*(char *)0x133 != '\0') {
    iStack_4 = 0x22b2;
    iStack_6 = 0xfe0b;
    FUN_21f2_3454();
    *(undefined1 *)(unaff_BP + -0x40) = *(undefined1 *)*(undefined2 *)(unaff_BP + 10);
    *(undefined1 *)(unaff_BP + -0x3f) = 0x5f;
  }
  iStack_4 = 0x22b2;
  iStack_6 = 0xfe26;
  FUN_1000_0599();
  iStack_4 = 0xfe31;
  func_0x00012276();
  iStack_4 = 0xfe3b;
  func_0x00012276();
  iStack_4 = 0x11f2;
  iStack_6 = 0xfe48;
  FUN_21f2_3454();
  *(undefined1 *)0xbf51 = 0x30;
  *(undefined1 *)0xbf52 = 0x30;
  *(undefined1 *)0xbf53 = 0x30;
  iStack_4 = 0x22b2;
  iStack_6 = 0xfe61;
  FUN_21f2_3454();
  iStack_4 = 0x22b2;
  iStack_6 = 0xfe70;
  FUN_21f2_2d26();
  if (*(char *)0x133 != '\0') {
    iStack_4 = 0x22b2;
    iStack_6 = 0xfe86;
    FUN_21f2_3454();
    *(undefined1 *)(unaff_BP + -0x56) = *(undefined1 *)*(undefined2 *)(unaff_BP + 10);
    *(undefined1 *)(unaff_BP + -0x55) = 0x5f;
  }
  iStack_4 = 0x22b2;
  iStack_6 = 0xfea1;
  iVar5 = func_0x00026f7a();
  if ((iVar5 == 0) || (*(int *)0x7a34 != 0xd)) {
    iStack_4 = unaff_BP + -0x56;
    iStack_6 = 0x22b2;
    iStack_8 = 0xff10;
    iVar5 = func_0x000276d7();
    if (iVar5 == 0) {
      iStack_4 = 0xff20;
      iVar5 = func_0x00027698();
      if (iVar5 == 0) goto LAB_3ab8_53bf;
      *(undefined2 *)0xd70 = 0;
    }
    else {
LAB_3ab8_53bf:
      iStack_4 = 0x22b2;
      iStack_6 = -0xb4;
      iVar5 = FUN_21f2_1348();
      *(int *)0xd70 = iVar5;
      if (iVar5 != 0) {
        iStack_4 = 0x22b2;
        iStack_6 = 0xff61;
        FUN_21f2_3454();
        iStack_4 = 0x22b2;
        iStack_6 = 0xff70;
        FUN_21f2_2d26();
        iStack_4 = 0x22b2;
        iStack_6 = 0xff8b;
        FUN_21f2_2d26();
        iStack_4 = 0x22b2;
        iStack_6 = 0xff9a;
        FUN_21f2_2d26();
        iStack_4 = 0x22b2;
        uVar8 = 0x22b2;
        iStack_6 = 0xffa9;
        iVar5 = FUN_21f2_31f0();
        if (iVar5 != 0) {
          uVar8 = 0x11f2;
          iStack_4 = 0xffb8;
          FUN_13bf_0a03();
        }
        iStack_6 = 0xffc4;
        iStack_4 = uVar8;
        FUN_21f2_3454();
        iStack_4 = 0x22b2;
        iStack_6 = 0xffd2;
        FUN_21f2_3454();
        *(undefined1 *)0xbf48 = 0x2a;
        iStack_4 = 0x22b2;
        iStack_6 = 0xffe6;
        FUN_21f2_2d26();
        iStack_4 = 0x22b2;
        uVar8 = 0x22b2;
        iStack_6 = 0xfff5;
        iVar5 = FUN_21f2_31f0();
        if (iVar5 != 0) {
          uVar8 = 0x11f2;
          iStack_4 = 4;
          FUN_13bf_0a03();
        }
        iStack_4 = *(undefined2 *)(unaff_BP + 0xc);
        iStack_6 = 1;
        uStack_a = 0x18;
        iStack_8 = uVar8;
        FUN_4375_c22c();
        func_0x0002504e();
        *(undefined2 *)0xd70 = 0;
        iStack_4 = unaff_BP + -0x40;
        iStack_6 = 0x22b2;
        uVar8 = 0x22b2;
        iStack_8 = 0x36;
        iVar5 = func_0x000276d7();
        if (iVar5 == 0) {
          uVar8 = 0x22b2;
          iStack_4 = 0x46;
          iVar5 = func_0x00027698();
          if (iVar5 != 0) {
            uVar8 = 0x11f2;
            iStack_4 = 0x54;
            FUN_13bf_0a03();
          }
        }
        iStack_6 = 0x62;
        iStack_4 = uVar8;
        iVar5 = func_0x000270f0();
        if (iVar5 != 0) {
          iStack_4 = 0x71;
          FUN_13bf_0a03();
        }
        return 1;
      }
    }
    func_0x0002504e();
  }
  else {
    iStack_4 = 3;
    iStack_6 = 0x16;
    iStack_8 = 0x860;
    uStack_a = 0x584;
    uStack_c = 0x22b2;
    uStack_e = 0xfecb;
    iStack_8 = func_0x0001450d();
    uStack_a = 0x11f2;
    uStack_c = 0xfed3;
    FUN_1000_02b5();
  }
  iStack_4 = 0xff39;
  func_0x000121f9();
LAB_2bb4_4535:
  *(undefined2 *)(unaff_BP + -0x36) = 0;
  iStack_4 = 0x84;
  FUN_32b2_6d14();
  iStack_4 = 0x8c;
  FUN_32b2_6e99();
  uVar8 = *(undefined2 *)(unaff_BP + 0x32);
  uVar4 = *(undefined2 *)(unaff_BP + 0x34);
  *(undefined2 *)(unaff_BP + -0xe6) = 0;
  *(undefined2 *)(unaff_BP + -0xe8) = 0;
  *(undefined2 *)(unaff_BP + -0xea) = uVar4;
  *(undefined2 *)(unaff_BP + -0xec) = uVar8;
  iStack_4 = 0xaf;
  FUN_32b2_7285();
  iStack_4 = 0xb4;
  FUN_32b2_717d();
  iStack_4 = 0xbd;
  FUN_32b2_6eb1();
  iStack_4 = 0xc5;
  FUN_32b2_6cc6();
  iStack_4 = 0xcd;
  FUN_32b2_6eb1();
  uVar8 = *(undefined2 *)(unaff_BP + 0x28);
  *(undefined2 *)(unaff_BP + -0xe6) = 0;
  *(undefined2 *)(unaff_BP + -0xe8) = 0;
  *(undefined2 *)(unaff_BP + -0xea) = 0;
  *(undefined2 *)(unaff_BP + -0xec) = uVar8;
  iStack_4 = 0xeb;
  FUN_32b2_7285();
  iStack_4 = 0xf3;
  FUN_32b2_704d();
  iStack_4 = 0xfc;
  FUN_32b2_710c();
  iStack_4 = 0x104;
  FUN_32b2_6eb1();
  while( true ) {
    iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
    iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
    iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
    uStack_a = 0x32b2;
    uStack_c = 0x119;
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
    uVar9 = &stack0x0000 == (undefined1 *)0x4;
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
    if ((bool)uVar9) {
      iStack_6 = 0x32b2;
      iStack_8 = 0x192;
      FUN_32b2_6cc6();
      iStack_6 = 0x32b2;
      iStack_8 = 0x19a;
      FUN_32b2_6cc6();
      iStack_6 = 0x32b2;
      iStack_8 = 0x19f;
      FUN_32b2_7191();
      if ((bool)uVar9) {
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
    func_0x0003fc09(0x32b2,1);
    iStack_6 = unaff_BP + -0xe4;
    iStack_8 = unaff_BP + -0xd0;
    uStack_a = 0x32b2;
    uStack_c = 0x2d4;
    FUN_32b2_6cc6();
    uStack_a = 0x32b2;
    uStack_c = 0x2d9;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    uStack_14 = 0x2e3;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x2eb;
    FUN_32b2_6cc6();
    uStack_12 = 0x32b2;
    uStack_14 = 0x2f0;
    FUN_32b2_7258();
    uStack_1a = 0x32b2;
    uStack_1c = 0x2fa;
    FUN_32b2_6eb1();
    uStack_1a = 0x32b2;
    uStack_1c = 0x302;
    FUN_32b2_6d14();
    uStack_22 = 0x32b2;
    uStack_24 = 0x30c;
    FUN_32b2_6eb1();
    uStack_22 = 0x32b2;
    uStack_24 = 0x314;
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
    func_0x0003fc09(0x32b2,1);
    uVar9 = (undefined1 *)0xffc9 < &uStack_36;
    uVar10 = &stack0x0000 == (undefined1 *)0x0;
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
    if (!(bool)uVar9 && !(bool)uVar10) {
      iStack_4 = 0x3da;
      FUN_32b2_6d14();
      iStack_4 = 0x3e2;
      FUN_32b2_6d14();
      iStack_4 = 999;
      FUN_32b2_7191();
      if (!(bool)uVar10) {
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
        func_0x0003fc09();
        uVar8 = *(undefined2 *)(unaff_BP + -0x60);
        *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
        *(undefined2 *)(unaff_BP + -0x84) = uVar8;
        uVar8 = *(undefined2 *)(unaff_BP + -0x88);
        *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
        *(undefined2 *)(unaff_BP + -0x9c) = uVar8;
        iStack_4 = unaff_BP + -0x86;
        puVar7 = &uStack_24;
        puVar6 = (undefined2 *)(unaff_BP + 0x1c);
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
                    /* WARNING: Call to offcut address within same function */
        uStack_28 = 0x684;
        iVar5 = func_0x0003fdaf();
        uVar9 = 0;
        uVar10 = iVar5 == 0;
        if (!(bool)uVar10) {
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
          if ((bool)uVar9 || (bool)uVar10) {
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
            if ((bool)uVar9 || (bool)uVar10) {
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
        if (!(bool)uVar9) {
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
          if (!(bool)uVar9) {
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
          func_0x0003fc09(0x32b2);
          uVar9 = (undefined1 *)0xffc9 < &uStack_38;
          uVar10 = &stack0x0000 == (undefined1 *)0x2;
          iStack_4 = 0x32b2;
          iStack_6 = 0x84f;
          FUN_32b2_6cc6();
          iStack_4 = 0x32b2;
          iStack_6 = 0x857;
          FUN_32b2_6cc6();
          iStack_4 = 0x32b2;
          iStack_6 = 0x85c;
          FUN_32b2_7191();
          if ((bool)uVar10) {
            uVar8 = *(undefined2 *)(unaff_BP + 8);
            *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
            *(undefined2 *)(unaff_BP + -0x60) = uVar8;
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
          if ((bool)uVar10) {
            uVar8 = *(undefined2 *)(unaff_BP + 0xc);
            *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
            *(undefined2 *)(unaff_BP + -0x88) = uVar8;
          }
          uVar8 = *(undefined2 *)(unaff_BP + -0x60);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
          *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
          puVar6[1] = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0x88);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
          *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar6[1] = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0x60);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
          *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
          puVar6[1] = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0x88);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
          *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar6[1] = uVar8;
          piVar1 = (int *)(unaff_BP + -0x36);
          *piVar1 = *piVar1 + 1;
          uVar10 = *piVar1 == 0;
          iStack_4 = 0x32b2;
          iStack_6 = 0x8d7;
          FUN_32b2_6d14();
          iStack_4 = 0x32b2;
          iStack_6 = 0x8e0;
          FUN_32b2_6d14();
          iStack_4 = 0x32b2;
          iStack_6 = 0x8e5;
          FUN_32b2_7191();
          if (!(bool)uVar9 && !(bool)uVar10) {
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
            func_0x0003fc09(0x32b2,0);
            uVar9 = &stack0x0000 == (undefined1 *)0x4;
            iStack_6 = 0x32b2;
            iStack_8 = 0x9df;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x9e7;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x9ec;
            FUN_32b2_7191();
            if ((bool)uVar9) {
              uVar8 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar8;
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
            if ((bool)uVar9) {
              uVar8 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar8;
            }
            uVar8 = *(undefined2 *)(unaff_BP + -0x60);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
            puVar6[1] = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x88);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar6[1] = uVar8;
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


