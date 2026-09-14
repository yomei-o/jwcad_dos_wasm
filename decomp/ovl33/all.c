/* Ghidra decompilation of jw33.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  23 bytes, 1 callers */

void FUN_3ab8_0000(void)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  
  uVar4 = 0x22b2;
  FUN_21f2_0ebc();
  pcVar2 = (code *)swi(0x3f);
  iVar3 = (*pcVar2)(1);
  if (iVar3 != 0) {
    uVar4 = 0x11f2;
    FUN_13bf_0a03(0x6b0);
  }
  iVar3 = *(int *)0xbe92;
  *(undefined2 *)0xc392 = *(undefined2 *)0xbe90;
  *(int *)0xc394 = iVar3;
  uVar5 = func_0x00027a04(uVar4);
  iVar3 = (int)((ulong)uVar5 >> 0x10) + iVar3;
  *(undefined2 *)0xc398 = (int)uVar5;
  *(int *)0xc39a = iVar3;
  uVar5 = func_0x00027a04(0x22b2);
  *(undefined2 *)0xc39c = (int)uVar5;
  *(int *)0xc39e = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xbf44 = (int)uVar5;
  *(int *)0xbf46 = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xc130 = (int)uVar5;
  *(int *)0xc132 = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xc13a = (int)uVar5;
  *(int *)0xc13c = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xbef6 = (int)uVar5;
  *(int *)0xbef8 = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xc28c = (int)uVar5;
  *(int *)0xc28e = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xbece = (int)uVar5;
  *(int *)0xbed0 = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xc08a = (int)uVar5;
  *(int *)0xc08c = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xc096 = (int)uVar5;
  *(int *)0xc098 = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xbc7a = (int)uVar5;
  *(int *)0xbc7c = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xc278 = (int)uVar5;
  *(int *)0xc27a = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xb77c = (int)uVar5;
  *(int *)0xb77e = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xb37a = (int)uVar5;
  *(int *)0xb37c = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xbef2 = (int)uVar5;
  *(int *)0xbef4 = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xb48c = (int)uVar5;
  *(int *)0xb48e = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xc086 = (int)uVar5;
  *(int *)0xc088 = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  *(undefined2 *)0xc09a = (int)uVar5;
  *(int *)0xc09c = (int)((ulong)uVar5 >> 0x10) + iVar3;
  iVar3 = 0x22b2;
  uVar5 = func_0x00027a04();
  uVar1 = (int)((ulong)uVar5 >> 0x10) + iVar3;
  if ((0xbffe < uVar1) && ((0xbfff < uVar1 || ((int)uVar5 != 0)))) {
    FUN_13bf_0a03(0x722e);
  }
  return;
}



/* 3ab8:0321  FUN_3ab8_0321  729 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0321(void)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 auStack_e [4];
  undefined2 local_a;
  
  FUN_21f2_0ebc();
  local_a = 0xaeb7;
  func_0x000297e6();
  local_a = 0xaebc;
  func_0x00029d78();
  local_a = 0xaec5;
  func_0x00029c2c();
  local_a = 0xaecd;
  func_0x000299b9();
  local_a = 0xaed5;
  func_0x000299d1();
  local_a = 0xaedd;
  func_0x00029834();
  func_0x000299d1(0x22b2);
  func_0x0002a10c(0x22b2);
  func_0x0002a11e(0x22b2);
  local_a = 0xaf22;
  func_0x000297e6();
  local_a = 0xaf27;
  func_0x00029d78();
  local_a = 0xaf30;
  func_0x00029c2c();
  local_a = 0xaf38;
  func_0x000299b9();
  local_a = 0xaf40;
  func_0x000299d1();
  local_a = 0xaf48;
  func_0x00029834();
  func_0x000299d1(0x22b2);
  func_0x0002a10c(0x22b2);
  func_0x0002a11e(0x22b2);
  local_a = 0xaf8c;
  FUN_28b3_0d8b();
  local_a = 0xaf95;
  func_0x00029c2c();
  local_a = 0xaf9d;
  func_0x000299b9();
  func_0x000299d1(0x22b2);
  func_0x0002a11e(0x22b2);
  local_a = 0xafb6;
  func_0x00029834();
  local_a = 0xafbe;
  func_0x00029c2c();
  local_a = 0xafc6;
  func_0x00029c2c();
  local_a = 0xafce;
  func_0x00029834();
  local_a = 0xafd6;
  func_0x00029c2c();
  local_a = 0xafdb;
  FUN_28b3_117c();
  local_a = 0xafe3;
  func_0x000299d1();
  local_a = 0xafeb;
  func_0x00029834();
  local_a = 0xaff3;
  func_0x00029c2c();
  local_a = 0xaffc;
  FUN_28b3_10e4();
  func_0x000299d1(0x22b2);
  FUN_28b3_1582();
  local_a = 0xb015;
  func_0x00029834();
  local_a = 0xb01d;
  func_0x000299b9();
  local_a = 0xb025;
  FUN_28b3_112c();
  local_a = 0xb02a;
  FUN_28b3_1c08();
  local_a = 0xb02f;
  FUN_28b3_1177();
  local_a = 0xb037;
  func_0x000299d1();
  local_a = 0xb03f;
  func_0x00029834();
  func_0x000299d1(0x22b2);
  func_0x0002a10c(0x22b2);
  uVar2 = (undefined1 *)0xfff7 < auStack_e;
  uVar3 = &stack0x0000 == (undefined1 *)0x6;
  local_a = 0xb058;
  func_0x00029834();
  local_a = 0xb060;
  func_0x00029c44();
  local_a = 0xb068;
  func_0x00029c2c();
  local_a = 0xb070;
  func_0x000299d1();
  local_a = 0xb078;
  func_0x00029834();
  local_a = 0xb080;
  func_0x00029c2c();
  local_a = 0xb088;
  func_0x00029bfc();
  local_a = 0xb090;
  func_0x00029834();
  local_a = 0xb098;
  func_0x00029c2c();
  local_a = 0xb09d;
  FUN_28b3_1172();
  local_a = 0xb0a5;
  func_0x000299b9();
  local_a = 0xb0ad;
  func_0x000299d1();
  local_a = 0xb0b5;
  func_0x00029834();
  local_a = 0xb0be;
  func_0x00029c2c();
  local_a = 0xb0c6;
  func_0x0002996b();
  local_a = 0xb0ce;
  func_0x00029983();
  local_a = 0xb0d6;
  func_0x00029834();
  local_a = 0xb0df;
  func_0x00029c2c();
  local_a = 0xb0e7;
  func_0x0002996b();
  local_a = 0xb0ef;
  func_0x00029983();
  local_a = 0xb0fc;
  FUN_28b3_0c98();
  local_a = 0xb104;
  func_0x00029b6d();
  local_a = 0xb111;
  FUN_28b3_0c98();
  local_a = 0xb119;
  func_0x00029b6d();
  local_a = 0xb11e;
  FUN_28b3_1163();
  local_a = 0xb126;
  func_0x0002996b();
  local_a = 0xb12e;
  func_0x00029983();
  local_a = 0xb137;
  func_0x00029834();
  local_a = 0xb13f;
  func_0x000297e6();
  local_a = 0xb144;
  func_0x00029d78();
  local_a = 0xb149;
  FUN_28b3_1181();
  if ((bool)uVar2) {
    uVar1 = 0xffff;
  }
  else {
    local_a = 0xb159;
    func_0x00029834();
    local_a = 0xb161;
    func_0x000297e6();
    local_a = 0xb166;
    func_0x00029d78();
    local_a = 0xb16b;
    FUN_28b3_1181();
    if ((bool)uVar2 || (bool)uVar3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* 3ab8:05fa  FUN_3ab8_05fa  1287 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_05fa(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_b2 [100];
  int local_4e;
  undefined4 local_4a;
  undefined1 local_46 [4];
  undefined2 *local_42;
  int local_3c;
  int local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32 [4];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_20;
  byte local_1e;
  byte local_1d;
  uint local_1c;
  uint local_1a;
  undefined2 local_18 [2];
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined1 *puStack_e;
  undefined1 *local_c;
  
  FUN_21f2_0ebc();
  local_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0xb192;
  puVar12 = (undefined2 *)func_0x0000013f();
  puVar6 = (undefined2 *)puVar12;
  puVar7 = local_18;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar3 = *puVar2;
  }
  local_38 = 0;
  func_0x000297e6();
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xb1c0;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xb1c8;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xb1cd;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  local_1a = 0xb1d7;
  func_0x000299d1();
  local_18[0] = 0x22b2;
  local_1a = 0xb1df;
  func_0x000297e6();
  local_18[0] = 0x22b2;
  local_1a = 0xb1e4;
  func_0x00029d78();
  uStack_20 = 0x22b2;
  uStack_22 = 0xb1ee;
  func_0x000299d1();
  uStack_20 = 0x22b2;
  uStack_22 = 0xb1f6;
  func_0x000297e6();
  uStack_20 = 0x22b2;
  uStack_22 = 0xb1fb;
  func_0x00029d78();
  uStack_28 = 0x22b2;
  uStack_2a = 0xb205;
  func_0x000299d1();
  uStack_28 = 0x22b2;
  uVar9 = 0x1bb4;
  uStack_2a = 0xb20a;
  iVar4 = FUN_1def_043a();
  if (iVar4 == 0) {
    return 1;
  }
  local_3c = 1;
  do {
    if (*(int *)0x150 < local_3c) {
      local_c = (undefined1 *)uVar9;
      if (local_38 == 0) {
        puStack_e = (undefined1 *)0xb40e;
        FUN_1000_0599();
        if (*(int *)0xc22 < 1) {
          *(undefined2 *)0xc22 = 1;
        }
        local_c = (undefined1 *)0xb426;
        func_0x00012276();
        local_c = (undefined1 *)0xb430;
        func_0x00012276();
        return 1;
      }
      if (local_38 < 1) {
        return 0;
      }
      puStack_e = (undefined1 *)0xb448;
      puVar12 = (undefined2 *)func_0x0000013f();
      local_36 = *puVar12;
      local_34 = ((undefined2 *)puVar12)[1];
      local_c = (undefined1 *)0x0;
      puStack_e = (undefined1 *)0xb466;
      local_42 = (undefined2 *)func_0x0000013f();
      local_c = (undefined1 *)0x0;
      puStack_e = (undefined1 *)0xb479;
      uVar13 = func_0x0000013f();
      uVar5 = (undefined2)((ulong)uVar13 >> 0x10);
      uVar9 = *(undefined2 *)((int)uVar13 + 10);
      *local_42 = *(undefined2 *)((int)uVar13 + 8);
      ((undefined2 *)local_42)[1] = uVar9;
      local_c = (undefined1 *)0x0;
      puStack_e = (undefined1 *)0xb49c;
      uVar13 = func_0x0000013f();
      uVar9 = (undefined2)((ulong)uVar13 >> 0x10);
      *(undefined2 *)((int)uVar13 + 8) = local_36;
      *(undefined2 *)((int)uVar13 + 10) = local_34;
      local_c = (undefined1 *)0x0;
      puStack_e = (undefined1 *)0xb4bb;
      uVar13 = func_0x0000013f();
      uVar9 = (undefined2)((ulong)uVar13 >> 0x10);
      local_36 = *(undefined2 *)((int)uVar13 + 4);
      local_34 = *(undefined2 *)((int)uVar13 + 6);
      local_c = (undefined1 *)0x0;
      puStack_e = (undefined1 *)0xb4da;
      local_4a = func_0x0000013f();
      local_c = (undefined1 *)0x0;
      puStack_e = (undefined1 *)0xb4ed;
      uVar13 = func_0x0000013f();
      uVar5 = (undefined2)((ulong)uVar13 >> 0x10);
      uVar9 = *(undefined2 *)((int)uVar13 + 0xc);
      uVar5 = *(undefined2 *)((int)uVar13 + 0xe);
      uVar13 = local_4a;
LAB_3ab8_097e:
      uVar8 = (undefined2)((ulong)uVar13 >> 0x10);
      *(undefined2 *)((int)uVar13 + 4) = uVar9;
      *(undefined2 *)((int)uVar13 + 6) = uVar5;
      local_c = (undefined1 *)0x0;
      puStack_e = (undefined1 *)0xb511;
      uVar13 = func_0x0000013f();
      uVar9 = (undefined2)((ulong)uVar13 >> 0x10);
      *(undefined2 *)((int)uVar13 + 0xc) = local_36;
      *(undefined2 *)((int)uVar13 + 0xe) = local_34;
      return 0;
    }
    uVar9 = 0;
    local_c = (undefined1 *)0xb339;
    puVar12 = (undefined2 *)func_0x00000398();
    puVar6 = (undefined2 *)puVar12;
    puVar7 = local_32;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar2;
    }
    if ((local_1e < 0x5a) && ((local_1c & 0x80) != 0)) {
      local_1a = (uint)local_1d;
      uVar9 = 0x11f2;
      local_c = (undefined1 *)0xb364;
      iVar4 = func_0x000125f1();
      if (iVar4 != 0) {
        func_0x00029834();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = 0x22b2;
        uStack_12 = 0xb389;
        func_0x000299d1();
        local_10 = 0x22b2;
        uStack_12 = 0xb391;
        func_0x000297e6();
        local_10 = 0x22b2;
        uStack_12 = 0xb396;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0xb3a0;
        func_0x000299d1();
        local_18[0] = 1;
        local_1a = 0x22b2;
        local_1c = 0xb3a9;
        func_0x0001e558();
        uVar10 = (undefined1 *)0xffed < local_18;
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029ae7();
        func_0x00029d78();
        uVar9 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar10) {
          uVar10 = 0;
          uVar11 = local_38 == 0;
          if ((bool)uVar11) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar10 || (bool)uVar11) {
              local_38 = -1;
            }
            else {
              local_38 = 1;
            }
          }
          uVar10 = 0;
          if (0 < local_38) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar10) goto LAB_3ab8_0782;
LAB_3ab8_06c8:
            local_c = (undefined1 *)0x22b2;
            puStack_e = (undefined1 *)0xb253;
            uVar13 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar13 + 0x14);
            *pbVar1 = *pbVar1 | 2;
            local_c = (undefined1 *)0x1;
            puStack_e = (undefined1 *)0x0;
            uVar9 = 0x7a6;
            local_10 = 0xb26d;
            func_0x00007d9b();
            *(undefined2 *)0xbc2 = 1;
            do {
              puStack_e = (undefined1 *)0xb284;
              local_c = (undefined1 *)uVar9;
              func_0x00024c86();
              local_c = (undefined1 *)0x22b2;
              puStack_e = (undefined1 *)0xb294;
              FUN_21f2_2d26();
              local_c = (undefined1 *)0x22b2;
              puStack_e = (undefined1 *)0xb2a4;
              FUN_21f2_2d26();
              local_c = (undefined1 *)0x22b2;
              puStack_e = (undefined1 *)0xb2b4;
              FUN_21f2_2d26();
              local_c = local_46;
              puStack_e = local_b2;
              local_10 = 1;
              uStack_12 = 0x22b2;
              uVar9 = 0x1bb4;
              local_14 = 0xb2d0;
              iVar4 = FUN_1def_0904();
              local_4a = CONCAT22(local_4a._2_2_,iVar4);
              if (*(int *)0x158 != 0) {
                local_c = (undefined1 *)0xb2e8;
                func_0x00008095();
                local_c = (undefined1 *)0x7a6;
                puStack_e = (undefined1 *)0xb2f4;
                uVar13 = func_0x0000013f();
                pbVar1 = (byte *)((int)uVar13 + 0x14);
                *pbVar1 = *pbVar1 & 0xfd;
                return 1;
              }
              if (iVar4 == -1) {
                local_c = (undefined1 *)0xb537;
                func_0x00008095();
                local_c = (undefined1 *)0x7a6;
                puStack_e = (undefined1 *)0xb543;
                uVar13 = func_0x0000013f();
                pbVar1 = (byte *)((int)uVar13 + 0x14);
                *pbVar1 = *pbVar1 & 0xfd;
                return 0xffff;
              }
            } while (local_4e == 0);
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029d78();
            local_10 = 0x22b2;
            uStack_12 = 0xb57d;
            func_0x000299d1();
            local_10 = 0x22b2;
            uStack_12 = 0xb585;
            func_0x000297e6();
            local_10 = 0x22b2;
            uStack_12 = 0xb58a;
            func_0x00029d78();
            local_18[0] = 0x22b2;
            local_1a = 0xb594;
            func_0x000299d1();
            local_18[0] = 1;
            local_1a = 0x22b2;
            local_1c = 0xb59d;
            func_0x0001e558();
            uVar10 = (undefined1 *)0xffed < local_18;
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar10) {
              return 0;
            }
            local_c = (undefined1 *)0x22b2;
            puStack_e = (undefined1 *)0xb5bc;
            puVar12 = (undefined2 *)func_0x0000013f();
            local_36 = *puVar12;
            local_34 = ((undefined2 *)puVar12)[1];
            local_c = (undefined1 *)0x0;
            puStack_e = (undefined1 *)0xb5da;
            puVar12 = (undefined2 *)func_0x0000013f();
            local_c = (undefined1 *)0x0;
            puStack_e = (undefined1 *)0xb5ef;
            uVar13 = func_0x0000013f();
            uVar5 = (undefined2)((ulong)uVar13 >> 0x10);
            uVar9 = *(undefined2 *)((int)uVar13 + 10);
            *puVar12 = *(undefined2 *)((int)uVar13 + 8);
            ((undefined2 *)puVar12)[1] = uVar9;
            local_c = (undefined1 *)0x0;
            puStack_e = (undefined1 *)0xb613;
            uVar13 = func_0x0000013f();
            uVar9 = (undefined2)((ulong)uVar13 >> 0x10);
            *(undefined2 *)((int)uVar13 + 8) = local_36;
            *(undefined2 *)((int)uVar13 + 10) = local_34;
            local_c = (undefined1 *)0x0;
            puStack_e = (undefined1 *)0xb632;
            uVar13 = func_0x0000013f();
            uVar9 = (undefined2)((ulong)uVar13 >> 0x10);
            local_36 = *(undefined2 *)((int)uVar13 + 4);
            local_34 = *(undefined2 *)((int)uVar13 + 6);
            local_c = (undefined1 *)0x0;
            puStack_e = (undefined1 *)0xb651;
            uVar13 = func_0x0000013f();
            local_c = (undefined1 *)0x0;
            puStack_e = (undefined1 *)0xb666;
            uVar14 = func_0x0000013f();
            uVar5 = (undefined2)((ulong)uVar14 >> 0x10);
            uVar9 = *(undefined2 *)((int)uVar14 + 0xc);
            uVar5 = *(undefined2 *)((int)uVar14 + 0xe);
            goto LAB_3ab8_097e;
          }
LAB_3ab8_0782:
          uVar9 = 0x22b2;
          uVar10 = 0;
          uVar11 = local_38 == 0;
          if (local_38 < 0) {
            func_0x000297e6();
            func_0x000297e6();
            uVar9 = 0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar10 && !(bool)uVar11) goto LAB_3ab8_06c8;
          }
        }
      }
    }
    local_3c = local_3c + 1;
  } while( true );
}



/* 3ab8:0b01  FUN_3ab8_0b01  426 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_0b01(void)

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
  undefined2 local_18 [3];
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  
  FUN_21f2_0ebc();
  local_c = 0x22b2;
  uStack_e = 0xb699;
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
  uStack_12 = 0xb6c2;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xb6ca;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xb6cf;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  func_0x000299d1();
  local_18[0] = 0x22b2;
  func_0x000297e6();
  local_18[0] = 0x22b2;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  iVar3 = FUN_1def_043a(0x22b2);
  if (iVar3 != 0) {
    if (1 < *(byte *)0x11d6) {
      return 0;
    }
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029d78();
    local_10 = 0x22b2;
    uStack_12 = 0xb743;
    func_0x000299d1();
    local_10 = 0x22b2;
    uStack_12 = 0xb74b;
    func_0x000297e6();
    local_10 = 0x22b2;
    uStack_12 = 0xb750;
    func_0x00029d78();
    local_18[0] = 0x22b2;
    func_0x000299d1();
    local_18[0] = 1;
    func_0x0001e558(0x22b2);
    uVar6 = (undefined1 *)0xffed < local_18;
    func_0x000297e6();
    func_0x0002996b();
    FUN_28b3_1181();
    if (!(bool)uVar6) {
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029d78();
      local_10 = 0x22b2;
      uStack_12 = 0xb7cf;
      func_0x000299d1();
      local_10 = 0x22b2;
      uStack_12 = 0xb7d7;
      func_0x000297e6();
      local_10 = 0x22b2;
      uStack_12 = 0xb7dc;
      func_0x00029d78();
      local_18[0] = 0x22b2;
      func_0x000299d1();
      local_18[0] = 1;
      FUN_1def_05d1(0x22b2);
      uVar6 = (undefined1 *)0xffed < local_18;
      uVar7 = &stack0x0000 == (undefined1 *)0x6;
      func_0x000297e6();
      func_0x0002996b();
      FUN_28b3_1181();
      if (!(bool)uVar6) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar6 || (bool)uVar7) {
          return 0;
        }
      }
    }
    local_c = 0x22b2;
    uStack_e = 0xb789;
    FUN_1000_0599();
    if (*(int *)0xc22 < 2) {
      *(undefined2 *)0xc22 = 2;
    }
    local_c = 0xb7a1;
    func_0x00012276();
    local_c = 0xb7ab;
    func_0x00012276();
  }
  return 1;
}



/* 3ab8:0cab  FUN_3ab8_0cab  1876 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0cab(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  uint *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar14;
  undefined1 uVar15;
  uint *in_stack_0000001a;
  uint *in_stack_0000001c;
  uint *in_stack_0000001e;
  int in_stack_00000020;
  undefined2 local_3a;
  undefined2 local_38;
  uint local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 auStack_18 [3];
  uint local_12;
  undefined2 uStack_10;
  undefined2 *local_a;
  undefined2 *local_8;
  
  FUN_21f2_0ebc();
  uVar6 = *in_stack_0000001a;
  uVar4 = *in_stack_0000001c;
  local_36 = *in_stack_0000001e;
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb865;
  FUN_28b3_0c98();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb86a;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  local_12 = 0xb874;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xb87f;
  FUN_28b3_0c98();
  uStack_10 = 0x22b2;
  local_12 = 0xb884;
  func_0x00029d78();
  auStack_18[0] = 0x22b2;
  local_1a = 0xb88e;
  func_0x000299d1();
  auStack_18[0] = 1;
  local_1a = 0x22b2;
  local_1c = 0xb897;
  puVar5 = (undefined2 *)func_0x0001e558();
  local_34 = *puVar5;
  local_32 = puVar5[1];
  local_8 = (undefined2 *)0x1bb4;
  local_a = (undefined2 *)0xb8bd;
  FUN_28b3_0c98();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb8c2;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  local_12 = 0xb8cc;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xb8d7;
  FUN_28b3_0c98();
  uStack_10 = 0x22b2;
  local_12 = 0xb8dc;
  func_0x00029d78();
  auStack_18[0] = 0x22b2;
  local_1a = 0xb8e6;
  func_0x000299d1();
  auStack_18[0] = 1;
  local_1a = 0x22b2;
  local_1c = 0xb8ef;
  func_0x0001e558();
  uVar14 = (undefined1 *)0xffed < auStack_18;
  local_8 = (undefined2 *)0x1bb4;
  local_a = (undefined2 *)0xb908;
  func_0x00029834();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb910;
  func_0x000297e6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb915;
  func_0x00029d78();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb91a;
  FUN_28b3_1181();
  if (!(bool)uVar14) {
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xb925;
    func_0x00029834();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xb92d;
    func_0x000297e6();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xb932;
    func_0x00029d78();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xb937;
    FUN_28b3_1181();
    if (!(bool)uVar14) {
      *(undefined2 *)(uVar6 * 2 + (int)*(undefined4 *)0xbece) = 0xfffe;
      *(undefined2 *)(uVar4 * 2 + (int)*(undefined4 *)0xbece) = 0xfffe;
      return 1;
    }
  }
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb964;
  func_0x00029834();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb96c;
  func_0x000297e6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb971;
  func_0x00029d78();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb976;
  FUN_28b3_1181();
  if ((bool)uVar14) {
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xb981;
    func_0x00029834();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xb989;
    func_0x000297e6();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xb98e;
    func_0x00029d78();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xb993;
    FUN_28b3_1181();
    if ((bool)uVar14) {
      return 0;
    }
  }
  uVar14 = 0;
  uVar1 = local_36 + 1;
  *in_stack_0000001e = uVar1;
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb9b0;
  local_36 = uVar1;
  func_0x00029834();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb9b8;
  func_0x000297e6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb9bd;
  func_0x00029d78();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xb9c2;
  FUN_28b3_1181();
  if ((bool)uVar14) {
    local_12 = uVar4;
    *in_stack_0000001c = local_36;
  }
  else {
    local_12 = uVar6;
    *in_stack_0000001a = uVar1;
  }
  *(undefined2 *)(local_36 * 2 + (int)*(undefined4 *)0xbece) = 0xffff;
  *(undefined2 *)(local_12 * 2 + (int)*(undefined4 *)0xbece) = 0xfffe;
  *(undefined1 *)(local_36 + in_stack_00000020) = *(undefined1 *)(local_12 + in_stack_00000020);
  uVar12 = (undefined2)((ulong)*(undefined4 *)0xc28c >> 0x10);
  iVar7 = (int)*(undefined4 *)0xc28c;
  *(undefined2 *)(local_36 * 2 + iVar7) = *(undefined2 *)(local_12 * 2 + iVar7);
  iVar7 = uVar6 * 4;
  uVar12 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
  iVar8 = (int)*(undefined4 *)0xc392;
  local_28 = *(undefined2 *)(iVar7 + iVar8);
  local_26 = *(undefined2 *)(iVar7 + iVar8 + 2);
  local_24 = *(undefined2 *)(iVar7 + (int)*(undefined4 *)0xc398);
  iVar7 = uVar4 * 4;
  local_20 = *(undefined2 *)(iVar7 + iVar8);
  local_1e = *(undefined2 *)(iVar7 + iVar8 + 2);
  uVar12 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
  iVar8 = (int)*(undefined4 *)0xc398;
  local_1c = *(undefined2 *)(iVar7 + iVar8);
  local_1a = *(undefined2 *)(iVar7 + iVar8 + 2);
  local_8 = &local_3a;
  local_a = &local_30;
  puVar10 = &local_20;
  puVar5 = &local_28;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  puVar11 = &local_36;
  puVar5 = (undefined2 *)&stack0x0004;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = puVar11;
    puVar11 = puVar11 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  local_38 = 0x22b2;
  local_3a = 0xba9b;
  iVar7 = FUN_1def_1921();
  uVar14 = 0;
  if (iVar7 == 0) {
LAB_3ab8_102b:
    iVar7 = local_12 * 4;
    uVar13 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
    iVar9 = (int)*(undefined4 *)0xc392;
    uVar12 = *(undefined2 *)(iVar7 + iVar9 + 2);
    iVar8 = local_36 * 4;
    *(undefined2 *)(iVar8 + iVar9) = *(undefined2 *)(iVar7 + iVar9);
    *(undefined2 *)(iVar8 + iVar9 + 2) = uVar12;
    uVar13 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
    iVar9 = (int)*(undefined4 *)0xc398;
    uVar12 = *(undefined2 *)(iVar7 + iVar9 + 2);
    *(undefined2 *)(iVar8 + iVar9) = *(undefined2 *)(iVar7 + iVar9);
    *(undefined2 *)(iVar8 + iVar9 + 2) = uVar12;
    uVar13 = (undefined2)((ulong)*(undefined4 *)0xc39c >> 0x10);
    iVar9 = (int)*(undefined4 *)0xc39c;
    uVar12 = *(undefined2 *)(iVar7 + iVar9 + 2);
    *(undefined2 *)(iVar8 + iVar9) = *(undefined2 *)(iVar7 + iVar9);
    *(undefined2 *)(iVar8 + iVar9 + 2) = uVar12;
    uVar13 = (undefined2)((ulong)*(undefined4 *)0xbf44 >> 0x10);
    iVar9 = (int)*(undefined4 *)0xbf44;
    uVar12 = *(undefined2 *)(iVar7 + iVar9 + 2);
    *(undefined2 *)(iVar8 + iVar9) = *(undefined2 *)(iVar7 + iVar9);
    *(undefined2 *)(iVar8 + iVar9 + 2) = uVar12;
    return 0;
  }
  local_8 = (undefined2 *)0x1bb4;
  local_a = (undefined2 *)0xbab0;
  func_0x000297e6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbabb;
  FUN_28b3_0c98();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbac0;
  FUN_28b3_1181();
  if ((bool)uVar14) {
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbaca;
    func_0x000297e6();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbad5;
    FUN_28b3_0c98();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbada;
    FUN_28b3_1181();
    if ((bool)uVar14) goto LAB_3ab8_102b;
  }
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbae7;
  func_0x000297e6();
  uVar14 = (int)(uVar6 << 1) < 0;
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbaf9;
  FUN_28b3_0c98();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbafe;
  FUN_28b3_1181();
  if ((bool)uVar14) {
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbb08;
    func_0x000297e6();
    uVar14 = (int)(uVar4 << 1) < 0;
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbb1a;
    FUN_28b3_0c98();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbb1f;
    FUN_28b3_1181();
    if ((bool)uVar14) goto LAB_3ab8_102b;
  }
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbb2c;
  func_0x000297e6();
  uVar14 = (int)(uVar6 << 1) < 0;
  uVar15 = (uVar6 & 0x3fff) == 0;
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbb3e;
  FUN_28b3_0c98();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbb43;
  FUN_28b3_1181();
  if (!(bool)uVar14 && !(bool)uVar15) {
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbb4d;
    func_0x000297e6();
    uVar14 = (int)(uVar4 << 1) < 0;
    uVar15 = (uVar4 & 0x3fff) == 0;
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbb5f;
    FUN_28b3_0c98();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbb64;
    FUN_28b3_1181();
    if (!(bool)uVar14 && !(bool)uVar15) goto LAB_3ab8_102b;
  }
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbb6e;
  func_0x000297e6();
  uVar14 = (int)(uVar6 << 1) < 0;
  uVar15 = (uVar6 & 0x3fff) == 0;
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbb80;
  FUN_28b3_0c98();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbb85;
  FUN_28b3_1181();
  if (!(bool)uVar14 && !(bool)uVar15) {
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbb92;
    func_0x000297e6();
    uVar14 = (int)(uVar4 << 1) < 0;
    uVar15 = (uVar4 & 0x3fff) == 0;
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbba4;
    FUN_28b3_0c98();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbba9;
    FUN_28b3_1181();
    if (!(bool)uVar14 && !(bool)uVar15) goto LAB_3ab8_102b;
  }
  uVar14 = *(byte *)0x11d6 < 2;
  uVar15 = *(byte *)0x11d6 == 2;
  if ((bool)uVar14) {
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbc29;
    func_0x00029834();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbc31;
    func_0x000297e6();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbc36;
    func_0x00029d78();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbc3b;
    FUN_28b3_1181();
    if ((bool)uVar14 || (bool)uVar15) {
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined2 *)0xbc46;
      func_0x00029834();
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined2 *)0xbc4e;
      func_0x000297e6();
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined2 *)0xbc53;
      func_0x00029d78();
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined2 *)0xbc58;
      FUN_28b3_1181();
      if ((bool)uVar14 || (bool)uVar15) goto LAB_3ab8_1167;
    }
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbc66;
    func_0x00029834();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbc6e;
    func_0x000297e6();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbc73;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    local_12 = 0xbc7d;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xbc85;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    local_12 = 0xbc8a;
    func_0x00029d78();
    auStack_18[0] = 0x22b2;
    local_1a = 0xbc94;
    func_0x000299d1();
    auStack_18[0] = 1;
    local_1a = 0x22b2;
    local_1c = 0xbc9d;
    FUN_1def_05d1();
    uVar14 = (undefined1 *)0xffed < auStack_18;
    uVar15 = &stack0x0000 == (undefined1 *)0x6;
    local_8 = (undefined2 *)0x1bb4;
    local_a = (undefined2 *)0xbca7;
    func_0x000297e6();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbcaf;
    func_0x0002996b();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbcb4;
    func_0x00029d78();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbcb9;
    FUN_28b3_1181();
    if (!(bool)uVar14 && !(bool)uVar15) {
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined2 *)0xbcc4;
      func_0x000297e6();
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined2 *)0xbcc9;
      func_0x00029d78();
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined2 *)0xbcd2;
      func_0x00029bfc();
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined2 *)0xbcda;
      func_0x000297e6();
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined2 *)0xbcdf;
      FUN_28b3_1181();
      if ((bool)uVar14) {
        return 10;
      }
    }
  }
LAB_3ab8_1167:
  iVar7 = local_36 * 4;
  uVar12 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
  iVar8 = (int)*(undefined4 *)0xc392;
  *(undefined2 *)(iVar7 + iVar8) = local_30;
  *(undefined2 *)(iVar7 + iVar8 + 2) = local_2e;
  uVar12 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
  iVar8 = (int)*(undefined4 *)0xc398;
  *(undefined2 *)(iVar7 + iVar8) = local_3a;
  *(undefined2 *)(iVar7 + iVar8 + 2) = local_38;
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd2b;
  FUN_28b3_0c98();
  uVar14 = (int)(uVar6 << 1) < 0;
  uVar15 = (uVar6 & 0x3fff) == 0;
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd42;
  FUN_28b3_1006();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd4a;
  func_0x0002996b();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd52;
  func_0x00029983();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd60;
  FUN_28b3_0c98();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd6e;
  FUN_28b3_1006();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd76;
  func_0x0002996b();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd7e;
  func_0x00029983();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd87;
  func_0x000297e6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd8f;
  func_0x000297e6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd94;
  func_0x00029ae7();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbd9c;
  func_0x000297e6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbda1;
  func_0x00029ae7();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbda6;
  FUN_28b3_117c();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0xbdab;
  FUN_28b3_1181();
  if ((bool)uVar14) {
    iVar8 = local_12 * 4;
    uVar13 = (undefined2)((ulong)*(undefined4 *)0xc39c >> 0x10);
    iVar9 = (int)*(undefined4 *)0xc39c;
    uVar12 = *(undefined2 *)(iVar8 + iVar9 + 2);
    *(undefined2 *)(iVar7 + iVar9) = *(undefined2 *)(iVar8 + iVar9);
    ((undefined2 *)(iVar7 + iVar9))[1] = uVar12;
    uVar13 = (undefined2)((ulong)*(undefined4 *)0xbf44 >> 0x10);
    iVar9 = (int)*(undefined4 *)0xbf44;
    uVar12 = *(undefined2 *)(iVar8 + iVar9 + 2);
    *(undefined2 *)(iVar7 + iVar9) = *(undefined2 *)(iVar8 + iVar9);
    *(undefined2 *)(iVar7 + iVar9 + 2) = uVar12;
  }
  else {
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbde9;
    func_0x000297e6();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbdee;
    func_0x00029ae7();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbdf6;
    func_0x000297e6();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbdfb;
    func_0x00029ae7();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbe00;
    FUN_28b3_1181();
    if ((bool)uVar14 || (bool)uVar15) {
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined2 *)0xbe43;
      FUN_28b3_0c98();
    }
    else {
      local_8 = (undefined2 *)0x22b2;
      local_a = (undefined2 *)0xbe20;
      FUN_28b3_0c98();
    }
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbe4b;
    func_0x00029b55();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbe53;
    func_0x00029983();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbe65;
    FUN_28b3_0c98();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbe77;
    FUN_28b3_0c98();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbe7f;
    func_0x0002996b();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbe84;
    FUN_28b3_1163();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbe8c;
    func_0x00029b85();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbe94;
    func_0x00029b6d();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbe9c;
    func_0x00029bb5();
    uVar6 = local_36 * 4;
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbeb2;
    func_0x00029987();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbebb;
    func_0x000297e6();
    uVar14 = CARRY2(uVar6,*(uint *)0xc39c);
    puVar5 = (undefined2 *)(uVar6 + *(uint *)0xc39c);
    uVar12 = *(undefined2 *)0xc39e;
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbecc;
    FUN_28b3_0c98();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbed1;
    FUN_28b3_1181();
    if ((bool)uVar14) {
      uVar13 = *(undefined2 *)0xa7fe;
      *puVar5 = *(undefined2 *)0xa7fc;
      puVar5[1] = uVar13;
    }
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbef5;
    FUN_28b3_0c98();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbf07;
    FUN_28b3_0c98();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbf0f;
    func_0x0002996b();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbf14;
    FUN_28b3_1163();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbf1c;
    func_0x00029b85();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbf24;
    func_0x00029b6d();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbf2c;
    func_0x00029bb5();
    uVar6 = local_36 * 4;
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbf42;
    func_0x00029987();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbf4b;
    func_0x000297e6();
    uVar14 = CARRY2(uVar6,*(uint *)0xbf44);
    puVar5 = (undefined2 *)(uVar6 + *(uint *)0xbf44);
    uVar12 = *(undefined2 *)0xbf46;
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbf5c;
    FUN_28b3_0c98();
    local_8 = (undefined2 *)0x22b2;
    local_a = (undefined2 *)0xbf61;
    FUN_28b3_1181();
    if ((bool)uVar14) {
      uVar13 = *(undefined2 *)0xa7fe;
      *puVar5 = *(undefined2 *)0xa7fc;
      puVar5[1] = uVar13;
    }
  }
  return 0;
}



/* 3ab8:13ff  FUN_3ab8_13ff  7945 bytes, 0 callers */

int FUN_3ab8_13ff(undefined2 param_1,int *param_2,uint *param_3)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int *piVar18;
  int *piVar19;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined4 uVar22;
  undefined2 *puVar23;
  undefined2 *in_stack_00000010;
  int in_stack_00000012;
  int in_stack_00000014;
  char *in_stack_00000016;
  int *local_f3e;
  int *local_f3c;
  int local_f36;
  int local_f32 [620];
  int local_a5a;
  int *local_a56;
  int local_a52;
  int local_a50;
  undefined2 local_a4e;
  undefined2 local_a4c;
  uint local_a4a;
  int local_a48;
  int local_a46;
  uint local_a44;
  int local_a42;
  undefined2 local_a40;
  undefined2 local_a3e;
  uint local_a3a;
  char local_a38;
  char local_a37;
  char local_a36;
  undefined1 local_a35 [37];
  undefined2 local_a10;
  undefined2 local_a0e;
  undefined2 local_a0c;
  undefined2 local_a0a;
  int local_a08;
  int local_a04;
  int local_a00;
  int local_9fe;
  int local_9fc;
  undefined2 local_9f6;
  undefined2 local_9f4;
  int local_9f2;
  int *local_9f0;
  int local_9ee;
  int local_9ec;
  undefined2 auStack_9ea [32];
  int local_9aa [2];
  int local_9a6;
  undefined2 local_9a4;
  undefined2 local_9a2;
  uint local_994;
  int local_992;
  undefined2 local_990;
  undefined2 local_98e;
  undefined2 local_988;
  undefined2 local_986;
  undefined2 local_984;
  undefined2 local_982;
  undefined2 local_980;
  undefined2 local_97e;
  byte local_970;
  byte local_96f;
  byte local_96e;
  int local_96c;
  int local_96a;
  uint local_968;
  undefined2 local_966;
  undefined2 local_964;
  undefined2 local_962;
  undefined2 uStack_960;
  undefined2 uStack_95e;
  undefined2 uStack_95c;
  byte local_95a [606];
  int *local_6fc;
  undefined2 local_6fa;
  uint local_6ec;
  undefined2 local_6ea;
  undefined2 local_6e8;
  undefined2 local_6e6 [11];
  uint local_6d0;
  uint local_462;
  int local_45e [13];
  undefined1 local_443;
  undefined1 local_428 [8];
  undefined2 local_420 [2];
  undefined2 local_41c;
  undefined2 local_41a;
  undefined2 local_414;
  undefined2 local_412;
  byte local_40f;
  byte local_40e;
  byte local_40c;
  int local_40a;
  int local_408;
  undefined2 local_406;
  undefined2 local_404;
  undefined2 uStack_2a;
  int *piStack_28;
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
  int *piStack_10;
  int *piStack_e;
  int *piStack_c;
  
  FUN_21f2_0ebc();
  if (*(int *)0xc62 != 0) {
    func_0x0000b6ea();
  }
  func_0x0000c3ca();
  piStack_c = (int *)0xbfa5;
  func_0x0000daa6();
  piStack_c = (int *)0x0;
  piStack_e = (int *)0x3;
  piStack_10 = (int *)0x885;
  uStack_12 = 0xbfbe;
  func_0x0000f2cb();
  *(undefined2 *)0x11c = 10;
  *(undefined2 *)0xc22 = 0;
  FUN_3ab8_0000();
  if (*(int *)0xc22 != 0) {
    piStack_c = (int *)0xdef;
    piStack_e = (int *)0xbfe5;
    FUN_1000_0599();
    func_0x00010526();
    piStack_c = (int *)0xdef;
    piStack_e = (int *)0xbff9;
    FUN_1000_0599();
    func_0x00010526();
  }
  local_6d0 = 0;
  puVar16 = (undefined1 *)0xdef;
  do {
    uVar4 = local_6d0;
    uVar13 = *(undefined2 *)0xa7fe;
    auStack_9ea[local_6d0 * 2] = *(undefined2 *)0xa7fc;
    auStack_9ea[uVar4 * 2 + 1] = uVar13;
    puVar17 = (undefined1 *)0x11f2;
    piStack_e = (int *)0xc02b;
    piStack_c = (int *)puVar16;
    func_0x00012bf5();
    if (((local_a38 == '#') && (local_a37 == 'l')) && (local_a36 == 'v')) {
      piStack_c = (int *)local_a35;
      piStack_e = (int *)0x11f2;
      puVar17 = (undefined1 *)0x22b2;
      piStack_10 = (int *)0xc055;
      func_0x000253ce();
      auStack_9ea[uVar4 * 2] = local_a0c;
      auStack_9ea[uVar4 * 2 + 1] = local_a0a;
    }
    local_6d0 = local_6d0 + 1;
    puVar16 = puVar17;
  } while ((int)local_6d0 < 0x10);
  local_a3a = 0;
  do {
    local_a0c = *(undefined2 *)0xa7fc;
    local_a0a = *(undefined2 *)0xa7fe;
    piStack_e = (int *)0xc096;
    piStack_c = (int *)puVar17;
    FUN_10ad_20a9();
    if (((local_a38 == '#') && (local_a37 == 'l')) && (local_a36 == 'v')) {
      piStack_c = (int *)local_a35;
      piStack_e = (int *)0x11f2;
      piStack_10 = (int *)0xc0c0;
      func_0x000253ce();
    }
    local_6d0 = (int)local_a3a >> 0xf;
    local_6d0 = ((int)((local_a3a ^ local_6d0) - local_6d0) >> 4 ^ local_6d0) - local_6d0;
    func_0x000297e6();
    func_0x00029bb5();
    puVar17 = (undefined1 *)0x22b2;
    func_0x00029983();
    local_a3a = local_a3a + 1;
  } while ((int)local_a3a < 0xff);
  local_992 = 0;
  local_462 = 0;
  *(undefined2 *)0xbc0 = 1;
  local_994 = 1;
LAB_3ab8_15a5:
  do {
    if (*(int *)0x150 < (int)local_994) goto LAB_3ab8_18dd;
    puVar17 = (undefined1 *)0x0;
    piStack_c = (int *)0xc13a;
    puVar23 = (undefined2 *)func_0x00000398();
    puVar12 = (undefined2 *)puVar23;
    puVar7 = &local_984;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar3 = *puVar2;
    }
    if ((local_970 < 0x5a) && ((local_96e & 0x80) != 0)) {
      local_968 = (uint)local_96f;
      puVar17 = (undefined1 *)0x11f2;
      piStack_c = (int *)0xc170;
      iVar10 = func_0x000125f1();
      if (iVar10 != 0) {
        func_0x000297e6();
        local_6d0 = (int)local_968 >> 0xf;
        local_6d0 = ((int)((local_968 ^ local_6d0) - local_6d0) >> 4 ^ local_6d0) - local_6d0;
        uVar20 = (local_6d0 & 0x3fff) == 0;
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar20) {
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xc1b8;
          FUN_21f2_3454();
          local_443 = 0;
          goto LAB_3ab8_328f;
        }
        piStack_c = (int *)0xbf48;
        piStack_e = (int *)0x22b2;
        piStack_10 = (int *)0xc1d3;
        FUN_1885_0344();
        local_962 = *(undefined2 *)0xa814;
        uStack_960 = *(undefined2 *)0xa816;
        uStack_95e = *(undefined2 *)0xa818;
        uStack_95c = *(undefined2 *)0xa81a;
        piStack_c = (int *)0x7267;
        piStack_e = (int *)0xbf48;
        piStack_10 = (int *)0x18b3;
        uStack_12 = 0xc1fa;
        local_a52 = func_0x000253ce();
        if (local_a52 == 0) {
          piStack_e = (int *)0x3;
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xc217;
          piStack_c = (int *)local_a52;
          func_0x0000f2cb();
          func_0x0000a799();
          piStack_c = (int *)0xc228;
          func_0x000190c7();
          piStack_c = (int *)0x0;
          piStack_e = (int *)0x3;
          piStack_10 = (int *)0x18b3;
          puVar17 = (undefined1 *)0xdef;
          uStack_12 = 0xc241;
          func_0x0000f2cb();
          goto LAB_3ab8_15a5;
        }
        func_0x000297e6();
        uVar20 = (int)(local_968 << 1) < 0;
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029834();
        func_0x00029ae7();
        FUN_28b3_117c();
        func_0x00029bfc();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029d78();
        FUN_28b3_1172();
        func_0x00029c2c();
        func_0x0002996b();
        FUN_28b3_1181();
        if ((bool)uVar20) {
          local_9a4 = *(undefined2 *)0xa7fc;
          local_9a2 = *(undefined2 *)0xa7fe;
          if (*(int *)0xc22 < 2) {
            *(undefined2 *)0xc22 = 2;
          }
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xc2df;
          FUN_1000_0599();
          piStack_c = (int *)0xc2ea;
          func_0x00012276();
        }
        iVar6 = (local_462 + 1) * 4;
        uVar13 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
        iVar10 = (int)*(undefined4 *)0xc392;
        *(undefined2 *)(iVar6 + iVar10) = local_984;
        *(undefined2 *)(iVar6 + iVar10 + 2) = local_982;
        uVar13 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
        iVar10 = (int)*(undefined4 *)0xc398;
        *(undefined2 *)(iVar6 + iVar10) = local_980;
        *(undefined2 *)(iVar6 + iVar10 + 2) = local_97e;
        uVar13 = (undefined2)((ulong)*(undefined4 *)0xc39c >> 0x10);
        iVar10 = (int)*(undefined4 *)0xc39c;
        *(undefined2 *)(iVar6 + iVar10) = local_9a4;
        *(undefined2 *)(iVar6 + iVar10 + 2) = local_9a2;
        iVar10 = local_462 + 1;
        local_462 = local_462 + 1;
        local_95a[iVar10] = local_96f;
        uVar15 = (undefined2)((ulong)*(undefined4 *)0xbf44 >> 0x10);
        iVar10 = (int)*(undefined4 *)0xbf44;
        uVar13 = *(undefined2 *)0xa7fe;
        *(undefined2 *)(iVar6 + iVar10) = *(undefined2 *)0xa7fc;
        *(undefined2 *)(iVar6 + iVar10 + 2) = uVar13;
        if (local_a52 == 2) {
          func_0x00029834();
          uVar20 = (int)(local_968 << 1) < 0;
          uVar21 = (local_968 & 0x3fff) == 0;
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          piStack_c = (int *)0xc38a;
          func_0x00029c74();
          func_0x000299b9();
          FUN_28b3_1181();
          if (!(bool)uVar20 && !(bool)uVar21) {
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029d78();
            FUN_28b3_112c();
            func_0x00029c2c();
            func_0x00029987();
          }
        }
        uVar20 = (int)local_462 < 0;
        iVar10 = local_462 * 2;
        uVar21 = iVar10 == 0;
        *(uint *)(iVar10 + (int)*(undefined4 *)0xbece) = local_994;
        func_0x00029834();
        func_0x00029834();
        puVar17 = (undefined1 *)0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar20 || (bool)uVar21) {
          uVar20 = (int)(local_462 << 1) < 0;
          uVar13 = (undefined2)((ulong)*(undefined4 *)0xbf44 >> 0x10);
          iVar10 = (int)*(undefined4 *)0xbf44;
          *(undefined2 *)(local_462 * 4 + iVar10) = local_9a4;
          *(undefined2 *)(local_462 * 4 + iVar10 + 2) = local_9a2;
          func_0x00029834();
          func_0x00029834();
          puVar17 = (undefined1 *)0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar20) {
            *(undefined2 *)(local_462 * 2 + (int)*(undefined4 *)0xc28c) = 0xffff;
          }
          else {
            *(undefined2 *)(local_462 * 2 + (int)*(undefined4 *)0xc28c) = 0;
          }
        }
        else {
          *(undefined2 *)((int)*(undefined4 *)0xc28c + iVar10) = 1;
        }
      }
    }
    local_994 = local_994 + 1;
  } while( true );
LAB_3ab8_2087:
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  FUN_28b3_1181();
  if ((bool)uVar20) {
    func_0x000297e6();
    func_0x00029d78();
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c74();
    FUN_28b3_1181();
    if ((bool)uVar20) {
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xcc5f;
      func_0x00024c86();
      goto LAB_3ab8_20e4;
    }
  }
  uVar20 = 0;
  func_0x00029834();
  func_0x000297e6();
  func_0x00029ae7();
  func_0x00029d78();
  FUN_28b3_1181();
  if (!(bool)uVar20) {
    func_0x00029834();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029ae7();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar20) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029ae7();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar20) {
        func_0x00029834();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        func_0x00029d78();
        FUN_28b3_1181();
        if (!(bool)uVar20) goto LAB_3ab8_2195;
      }
    }
  }
  *(undefined1 *)0x11d5 = 1;
LAB_3ab8_2195:
  piVar19 = (int *)0x22b2;
  local_a56 = (int *)((int)local_a56 + 1);
  goto LAB_3ab8_2199;
LAB_3ab8_18dd:
  if (in_stack_00000014 != 0 || in_stack_00000012 != 0) {
    piStack_e = (int *)0xc473;
    piStack_c = (int *)puVar17;
    puVar23 = (undefined2 *)func_0x0000013f();
    puVar12 = (undefined2 *)puVar23;
    puVar7 = local_6e6;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar3 = *puVar2;
    }
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc49e;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc4a7;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc4ac;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc4b6;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc4bf;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc4c4;
    func_0x00029d78();
    uStack_20 = 0x22b2;
    uStack_22 = 0xc4ce;
    func_0x000299d1();
    uStack_20 = 0x22b2;
    uStack_22 = 0xc4d7;
    func_0x000297e6();
    uStack_20 = 0x22b2;
    uStack_22 = 0xc4dc;
    func_0x00029d78();
    piStack_28 = (int *)0x22b2;
    uStack_2a = 0xc4e6;
    func_0x000299d1();
    piStack_28 = (int *)0x22b2;
    puVar17 = (undefined1 *)0x1bb4;
    uStack_2a = 0xc4eb;
    FUN_1def_043a();
    local_6ec = local_462;
  }
  piStack_e = (int *)0xc503;
  piStack_c = (int *)puVar17;
  FUN_1000_0599();
  piStack_c = (int *)0x7284;
  piStack_e = (int *)0xdef;
  piStack_10 = (int *)0xc516;
  func_0x00012276();
  local_40a = 0;
  local_a46 = 0;
  local_a42 = 0;
  piVar19 = (int *)0x11f2;
  for (local_a44 = 1;
      (local_a42 <= *(int *)0x14a && ((local_a42 < *(int *)0x14a || (local_a44 <= *(uint *)0x148))))
      ; local_a44 = local_a44 + 1) {
    piVar18 = (int *)0x0;
    piStack_e = (int *)0xc67c;
    piStack_c = piVar19;
    puVar23 = (undefined2 *)func_0x0000013f();
    puVar12 = (undefined2 *)puVar23;
    puVar7 = local_420;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar3 = *puVar2;
    }
    if (local_40f < 0x5a) {
      local_9aa[0] = 0;
      local_9f2 = 0;
      local_968 = (uint)local_40e;
      if (((local_40c & 0x40) == 0) && ((local_40c & 0x80) == 0)) {
        for (local_96c = 1; local_96c <= (int)local_462; local_96c = local_96c + 1) {
          if (local_95a[local_96c] == local_968) {
            func_0x00029834();
            uVar20 = local_96c << 1 < 0;
            FUN_28b3_0c98();
            func_0x00029b55();
            func_0x00029ae7();
            FUN_28b3_0c98();
            func_0x00029b55();
            func_0x00029ae7();
            FUN_28b3_117c();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar20) {
              local_9aa[0] = local_96c;
              uVar13 = (undefined2)((ulong)*(undefined4 *)0xbece >> 0x10);
              iVar10 = (int)*(undefined4 *)0xbece;
              if (0 < *(int *)(local_96c * 2 + iVar10)) {
                *(undefined2 *)(local_96c * 2 + iVar10) = 0;
              }
            }
            func_0x00029834();
            uVar20 = local_96c << 1 < 0;
            FUN_28b3_0c98();
            func_0x00029b55();
            func_0x00029ae7();
            FUN_28b3_0c98();
            func_0x00029b55();
            func_0x00029ae7();
            FUN_28b3_117c();
            func_0x00029d78();
            piVar18 = (int *)0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar20) {
              local_9f2 = local_96c;
              uVar13 = (undefined2)((ulong)*(undefined4 *)0xbece >> 0x10);
              iVar10 = (int)*(undefined4 *)0xbece;
              if (0 < *(int *)(local_96c * 2 + iVar10)) {
                *(undefined2 *)(local_96c * 2 + iVar10) = 0;
              }
            }
          }
        }
        if ((local_9aa[0] != 0) || (local_9f2 != 0)) {
          if ((in_stack_00000014 != 0 || in_stack_00000012 != 0) &&
             ((0 < local_9aa[0] && (0 < local_9f2)))) {
            piStack_c = &local_9f2;
            piStack_e = local_9aa;
            puVar12 = &uStack_24;
            puVar7 = local_6e6;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar2 = puVar12;
              puVar12 = puVar12 + 1;
              puVar23 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar23;
            }
            piStack_28 = (int *)0xc6fb;
            local_a04 = FUN_3ab8_0cab();
            if (9 < local_a04) {
              piStack_e = (int *)0xc715;
              piStack_c = piVar18;
              func_0x00024c86();
              goto LAB_3ab8_328f;
            }
            if (0 < local_a04) goto LAB_3ab8_1acf;
          }
          if (((local_9aa[0] < 1) || (local_9f2 < 1)) || (local_9f2 == local_9aa[0])) {
            local_a46 = local_a46 + 1;
            piStack_c = local_45e;
            piStack_10 = (int *)0xc78c;
            piStack_e = piVar18;
            FUN_21f2_3454();
            if (local_9aa[0] == 0) {
              local_990 = local_41c;
              local_98e = local_41a;
              func_0x000297e6();
              func_0x00029d78();
              piStack_10 = (int *)0x22b2;
              uStack_12 = 0xc7be;
              func_0x000299d1();
              piStack_10 = (int *)0x22b2;
              uStack_12 = 0xc7c7;
              func_0x000297e6();
              piStack_10 = (int *)0x22b2;
              uStack_12 = 0xc7cc;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              uStack_1a = 0xc7d6;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              uStack_1a = 0xc7df;
              func_0x000297e6();
              uStack_18 = 0x22b2;
              uStack_1a = 0xc7e4;
              func_0x00029d78();
              uStack_20 = 0x22b2;
              uStack_22 = 0xc7ee;
              func_0x000299d1();
            }
            else {
              local_990 = local_414;
              local_98e = local_412;
              func_0x000297e6();
              func_0x00029d78();
              piStack_10 = (int *)0x22b2;
              uStack_12 = 0xc81c;
              func_0x000299d1();
              piStack_10 = (int *)0x22b2;
              uStack_12 = 0xc825;
              func_0x000297e6();
              piStack_10 = (int *)0x22b2;
              uStack_12 = 0xc82a;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              uStack_1a = 0xc834;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              uStack_1a = 0xc83d;
              func_0x000297e6();
              uStack_18 = 0x22b2;
              uStack_1a = 0xc842;
              func_0x00029d78();
              uStack_20 = 0x22b2;
              uStack_22 = 0xc84c;
              func_0x000299d1();
            }
            uStack_20 = 0x22b2;
            uStack_22 = 0xc855;
            func_0x000297e6();
            uStack_20 = 0x22b2;
            uStack_22 = 0xc85e;
            func_0x0002996b();
            uStack_20 = 0x22b2;
            uStack_22 = 0xc863;
            func_0x00029d78();
            piStack_28 = (int *)0x22b2;
            uStack_2a = 0xc86d;
            func_0x000299d1();
            piStack_28 = (int *)0x22b2;
            piVar18 = (int *)0x1bb4;
            uStack_2a = 0xc872;
            FUN_1def_043a();
            local_96c = 0;
            local_992 = 1;
            for (local_96a = 1; local_96a <= *(int *)0x150; local_96a = local_96a + 1) {
              piVar18 = (int *)0x0;
              piStack_c = (int *)0xc8f6;
              puVar23 = (undefined2 *)func_0x00000398();
              puVar12 = (undefined2 *)puVar23;
              puVar7 = &local_984;
              for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
                puVar3 = puVar7;
                puVar7 = puVar7 + 1;
                puVar2 = puVar12;
                puVar12 = puVar12 + 1;
                *puVar3 = *puVar2;
              }
              if (((local_970 < 0x5a) && ((local_96e & 0x80) != 0)) &&
                 (uVar20 = local_96f < local_968, local_96f == local_968)) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                FUN_28b3_117c();
                func_0x00029d78();
                piVar18 = (int *)0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar20) {
                  local_96c = 1;
                  break;
                }
              }
            }
            if (local_96c == 0) {
              piStack_c = (int *)0x0;
              piStack_e = (int *)0x3;
              uStack_12 = 0xc93b;
              piStack_10 = piVar18;
              func_0x0000f2cb();
              func_0x0000a799();
              piStack_c = (int *)0x885;
              piStack_e = (int *)0xc94f;
              FUN_3ab8_37ef();
              piStack_c = (int *)0xc95a;
              uVar22 = func_0x00000398();
              pbVar1 = (byte *)((int)uVar22 + 0x16);
              *pbVar1 = *pbVar1 | 0x80;
              piStack_c = (int *)0xc96d;
              uVar22 = func_0x00000398();
              *(byte *)((int)uVar22 + 0x15) = local_40e;
              piStack_c = (int *)0x0;
              piStack_e = (int *)0x3;
              piStack_10 = (int *)0x0;
              piVar18 = (int *)0xdef;
              uStack_12 = 0xc992;
              func_0x0000f2cb();
            }
          }
          else {
            local_40a = local_40a + 1;
            *(int *)(local_40a * 2 + (int)*(undefined4 *)0xc08a) = local_9aa[0];
            *(int *)(local_40a * 2 + (int)*(undefined4 *)0xc096) = local_9f2;
            piStack_e = (int *)0xc762;
            piStack_c = piVar18;
            FUN_1000_0599();
            piStack_c = (int *)0xdef;
            piVar18 = (int *)0x11f2;
            piStack_e = (int *)0xc771;
            func_0x00012276();
          }
        }
      }
    }
LAB_3ab8_1acf:
    local_a42 = local_a42 + (uint)(0xfffe < local_a44);
    piVar19 = piVar18;
  }
  if (0 < local_a46) goto LAB_3ab8_328f;
  *(undefined1 *)0x11d5 = 0;
  if ((in_stack_00000014 != 0 || in_stack_00000012 != 0) && ((int)local_462 < (int)local_6ec)) {
    local_a5a = 0;
    local_a48 = 0;
    local_a50 = 0;
    local_9ee = 1;
    for (local_994 = 1; (int)local_994 <= (int)local_6ec; local_994 = local_994 + 1) {
      local_f32[local_994] = 0;
    }
    while( true ) {
      while( true ) {
        local_a00 = local_9ee;
        for (local_9fc = local_9ee; local_9fc <= local_40a; local_9fc = local_9fc + 1) {
          local_9ec = *(int *)(local_9fc * 2 + (int)*(undefined4 *)0xc08a);
          local_9fe = *(int *)(local_9fc * 2 + (int)*(undefined4 *)0xc096);
          if ((local_a48 == 0) && (local_f32[local_9ec] == 0)) {
            local_a48 = 1;
            local_a5a = local_a5a + 1;
            local_f32[local_9ec] = local_a5a;
            local_9ee = local_9fc;
          }
          iVar10 = local_a5a;
          if (((local_f32[local_9ec] == 0) || (local_f32[local_9fe] == 0)) &&
             ((local_f32[local_9ec] != 0 || (local_f32[local_9fe] != 0)))) {
            local_a50 = 1;
            local_f32[local_9ec] = local_a5a;
            local_f32[local_9fe] = iVar10;
          }
        }
        if (local_a50 == 0) break;
        local_a50 = 0;
      }
      if (local_a48 == 0) break;
      local_a48 = 0;
    }
    local_a56 = (int *)0x1;
LAB_3ab8_2199:
    if ((int)local_a56 <= local_a5a) {
      local_9aa[0] = 0;
      local_9f2 = 0;
      do {
        if ((0 < local_9aa[0]) && (0 < local_9f2)) {
          FUN_28b3_0c98();
          local_a52 = local_9f2 << 2;
          uVar20 = local_a52 == 0;
          FUN_28b3_0c98();
          FUN_28b3_1181();
          if ((bool)uVar20) {
            FUN_28b3_0c98();
            FUN_28b3_0c98();
            FUN_28b3_1181();
            if ((bool)uVar20) goto LAB_3ab8_2254;
          }
          local_40a = local_40a + 1;
          iVar10 = local_40a * 2;
          *(int *)(iVar10 + (int)*(undefined4 *)0xc08a) = local_9aa[0];
          *(int *)(iVar10 + (int)*(undefined4 *)0xc096) = local_9f2;
        }
LAB_3ab8_2254:
        local_9aa[0] = local_9f2;
        local_9f2 = 0;
        local_9f6 = *(undefined2 *)0xa824;
        local_9f4 = *(undefined2 *)0xa826;
        for (local_96c = local_462 + 1; local_96c <= (int)local_6ec; local_96c = local_96c + 1) {
          if (((int *)local_f32[local_96c] == local_a56) &&
             (*(int *)(local_96c * 2 + (int)*(undefined4 *)0xbece) == -1)) {
            func_0x000297e6();
            FUN_28b3_0c98();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xcb34;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xcb3f;
            FUN_28b3_0c98();
            piStack_10 = (int *)0x22b2;
            uStack_12 = 0xcb44;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xcb4e;
            func_0x000299d1();
            uStack_18 = 1;
            uStack_1a = 0x22b2;
            uStack_1c = 0xcb57;
            FUN_1def_05d1();
            uVar20 = (undefined1 *)0xffed < &uStack_18;
            func_0x000297e6();
            func_0x0002996b();
            FUN_28b3_1181();
            if ((bool)uVar20) {
              func_0x000297e6();
              func_0x00029983();
              local_9f2 = local_96c;
            }
          }
        }
        uVar20 = 0;
        if (local_9f2 < 1) goto LAB_3ab8_2087;
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        *(undefined2 *)(local_9f2 * 2 + (int)*(undefined4 *)0xbece) = 0;
      } while( true );
    }
    local_462 = local_6ec;
  }
  local_a46 = 0;
  for (local_994 = local_462; iVar10 = local_40a, uVar4 = local_462, 0 < (int)local_994;
      local_994 = local_994 - 1) {
    local_96a = *(int *)(local_994 * 2 + (int)*(undefined4 *)0xbece);
    if (0 < local_96a) {
      local_992 = 1;
      piStack_c = (int *)0x0;
      piStack_e = (int *)0x3;
      uStack_12 = 0xce44;
      piStack_10 = piVar19;
      func_0x0000f2cb();
      func_0x0000a799();
      piStack_c = (int *)0xce55;
      func_0x000190c7();
      local_a46 = local_a46 + 1;
      piStack_c = (int *)0x0;
      piStack_e = (int *)0x3;
      piStack_10 = (int *)0x18b3;
      piVar19 = (int *)0xdef;
      uStack_12 = 0xce72;
      func_0x0000f2cb();
    }
  }
  if (0 < local_a46) {
    piStack_e = (int *)0xce95;
    piStack_c = piVar19;
    func_0x00024c86();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xcea5;
    FUN_21f2_2d26();
    piStack_c = (int *)0xbf48;
    piStack_e = (int *)0x22b2;
    piStack_10 = (int *)0xceb8;
    FUN_21f2_3454();
LAB_3ab8_20e4:
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xcc6f;
    FUN_21f2_2d26();
    goto LAB_3ab8_328f;
  }
  if (local_992 != 0) goto LAB_3ab8_328f;
  if (((int)(local_40a * 2 + local_462) < 0x3e9) && ((int)(local_462 * 2) < 0x259)) {
    local_a4a = local_462;
    local_a08 = local_40a;
    for (local_994 = 1; uVar5 = local_462, (int)local_994 <= (int)uVar4; local_994 = local_994 + 1)
    {
      iVar8 = local_994 * 4;
      uVar15 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
      iVar6 = (int)*(undefined4 *)0xc392;
      uVar13 = *(undefined2 *)(iVar8 + iVar6 + 2);
      local_462 = local_462 + 1;
      iVar11 = local_462 * 4;
      *(undefined2 *)(iVar11 + iVar6) = *(undefined2 *)(iVar8 + iVar6);
      *(undefined2 *)(iVar11 + iVar6 + 2) = uVar13;
      uVar15 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
      iVar9 = (int)*(undefined4 *)0xc398;
      uVar13 = *(undefined2 *)(iVar9 + iVar8 + 2);
      iVar6 = *(int *)0xc398;
      *(undefined2 *)(iVar11 + iVar6) = *(undefined2 *)(iVar9 + iVar8);
      *(undefined2 *)(iVar11 + iVar6 + 2) = uVar13;
      local_95a[uVar5 + 1] = local_95a[local_994];
      if (*(int *)(local_994 * 2 + (int)*(undefined4 *)0xc28c) < 1) {
        uVar15 = (undefined2)((ulong)*(undefined4 *)0xc39c >> 0x10);
        iVar6 = (int)*(undefined4 *)0xc39c;
        uVar13 = *(undefined2 *)(local_994 * 4 + iVar6 + 2);
        *(undefined2 *)(local_462 * 4 + iVar6) = *(undefined2 *)(local_994 * 4 + iVar6);
        *(undefined2 *)(local_462 * 4 + iVar6 + 2) = uVar13;
        *(undefined2 *)(local_462 * 2 + (int)*(undefined4 *)0xc28c) = 0xffff;
      }
      else {
        uVar15 = (undefined2)((ulong)*(undefined4 *)0xbf44 >> 0x10);
        iVar6 = (int)*(undefined4 *)0xbf44;
        uVar13 = *(undefined2 *)(iVar6 + iVar8 + 2);
        uVar14 = (undefined2)((ulong)*(undefined4 *)0xc39c >> 0x10);
        iVar9 = (int)*(undefined4 *)0xc39c;
        *(undefined2 *)(iVar11 + iVar9) = *(undefined2 *)(iVar6 + iVar8);
        *(undefined2 *)(iVar11 + iVar9 + 2) = uVar13;
        *(undefined2 *)(local_462 * 2 + (int)*(undefined4 *)0xc28c) = 1;
        if ((in_stack_00000014 == 0 && in_stack_00000012 == 0) ||
           (*(int *)(local_994 * 2 + (int)*(undefined4 *)0xbece) != -2)) {
          local_40a = local_40a + 1;
          iVar6 = local_40a * 2;
          *(int *)(iVar6 + (int)*(undefined4 *)0xc08a) = local_994;
          *(uint *)(iVar6 + (int)*(undefined4 *)0xc096) = local_462;
        }
      }
    }
    for (local_994 = 1; (int)local_994 <= iVar10; local_994 = local_994 + 1) {
      iVar6 = *(int *)(local_994 * 2 + (int)*(undefined4 *)0xc08a) + uVar4;
      iVar8 = *(int *)(local_994 * 2 + (int)*(undefined4 *)0xc096) + uVar4;
      uVar13 = (undefined2)((ulong)*(undefined4 *)0xc28c >> 0x10);
      iVar11 = (int)*(undefined4 *)0xc28c;
      if ((-1 < *(int *)(iVar6 * 2 + iVar11)) && (-1 < *(int *)(iVar8 * 2 + iVar11))) {
        local_40a = local_40a + 1;
        *(int *)(local_40a * 2 + (int)*(undefined4 *)0xc08a) = iVar6;
        *(int *)(local_40a * 2 + (int)*(undefined4 *)0xc096) = iVar8;
      }
    }
    piStack_c = (int *)*(undefined2 *)0xa7e6;
    piStack_e = (int *)*(undefined2 *)0xa7e4;
    piStack_10 = (int *)*(undefined2 *)0xa7e2;
    uStack_12 = *(undefined2 *)0xa7e0;
    uStack_14 = *(undefined2 *)0xa7de;
    uStack_16 = *(undefined2 *)0xa7dc;
    uStack_18 = *(undefined2 *)0xa7ea;
    uStack_1a = *(undefined2 *)0xa7e8;
    uStack_1c = *(undefined2 *)0xa7e6;
    uStack_1e = *(undefined2 *)0xa7e4;
    uStack_20 = *(undefined2 *)0xa7ea;
    uStack_22 = *(undefined2 *)0xa7e8;
    uStack_24 = *(undefined2 *)0xa7e6;
    uVar13 = 0x1bb4;
    uStack_2a = 0xd0cf;
    piStack_28 = piVar19;
    FUN_1def_043a();
    for (local_994 = 1; (int)local_994 <= *(int *)0x150; local_994 = local_994 + 1) {
      uVar13 = 0;
      piStack_c = (int *)0xd0f3;
      puVar23 = (undefined2 *)func_0x00000398();
      puVar12 = (undefined2 *)puVar23;
      puVar7 = &local_984;
      for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar3 = puVar7;
        puVar7 = puVar7 + 1;
        puVar2 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar3 = *puVar2;
      }
      if ((local_970 < 0x5a) && ((local_96e & 0x40) != 0)) {
        piStack_c = (int *)0xbf48;
        piStack_e = (int *)0x0;
        piStack_10 = (int *)0xd124;
        FUN_1885_0344();
        piStack_c = (int *)0xbf48;
        piStack_e = (int *)0x18b3;
        piStack_10 = (int *)0xd139;
        func_0x000253ce();
        func_0x00029834();
        piStack_c = (int *)0xd14f;
        func_0x00029c2c();
        func_0x000299d1();
        piStack_c = (int *)local_6fa;
        piStack_e = local_6fc;
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xd16a;
        func_0x0002a11e();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029983();
        piStack_c = (int *)local_6fa;
        piStack_e = local_6fc;
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xd19b;
        func_0x0002a10c();
        func_0x00029834();
        func_0x00029c2c();
        func_0x0002996b();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xd1c6;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xd1cf;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xd1d4;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd1de;
        func_0x000299d1();
        uStack_18 = *(undefined2 *)0xa7ea;
        uStack_1a = *(undefined2 *)0xa7e8;
        uStack_1c = *(undefined2 *)0xa7e6;
        uStack_1e = *(undefined2 *)0xa7e4;
        uStack_20 = *(undefined2 *)0xa7ea;
        uStack_22 = *(undefined2 *)0xa7e8;
        uStack_24 = *(undefined2 *)0xa7e6;
        piStack_28 = (int *)0x22b2;
        uVar13 = 0x1bb4;
        uStack_2a = 0xd203;
        FUN_1def_043a();
        break;
      }
    }
    local_966 = *(undefined2 *)0xa82c;
    local_964 = *(undefined2 *)0xa82e;
    for (local_994 = 1; (int)local_994 <= (int)local_462; local_994 = local_994 + 1) {
      func_0x000297e6();
      FUN_28b3_0c98();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd24d;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd258;
      FUN_28b3_0c98();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd25d;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd267;
      func_0x000299d1();
      uStack_18 = 1;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd270;
      func_0x0001e558();
      uVar20 = (undefined1 *)0xffed < &uStack_18;
      func_0x000297e6();
      func_0x0002996b();
      FUN_28b3_1181();
      if ((bool)uVar20) {
        func_0x000297e6();
        func_0x00029983();
        local_96a = local_994;
      }
      uVar13 = 0x22b2;
    }
    iVar10 = local_96a * 4;
    uVar14 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
    iVar6 = (int)*(undefined4 *)0xc392;
    uVar15 = *(undefined2 *)(iVar10 + iVar6 + 2);
    *(undefined2 *)0xb30c = *(undefined2 *)(iVar10 + iVar6);
    *(undefined2 *)0xb30e = uVar15;
    uVar14 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
    iVar6 = (int)*(undefined4 *)0xc398;
    uVar15 = *(undefined2 *)(iVar10 + iVar6 + 2);
    *(undefined2 *)0xb37e = *(undefined2 *)(iVar10 + iVar6);
    *(undefined2 *)0xb380 = uVar15;
    local_a4e = *(undefined2 *)0xa7fc;
    local_a4c = *(undefined2 *)0xa7fe;
    local_a40 = local_a4e;
    local_a3e = local_a4c;
    local_a10 = local_a4e;
    local_a0e = local_a4c;
    local_9f6 = local_a4e;
    local_9f4 = local_a4c;
    local_406 = local_a4e;
    local_404 = local_a4c;
    for (local_994 = 1; (int)local_994 <= (int)local_462; local_994 = local_994 + 1) {
      iVar10 = local_994 * 4;
      FUN_28b3_0c98();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd33d;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd348;
      FUN_28b3_0c98();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd34d;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd357;
      func_0x000299d1();
      uStack_18 = 1;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd360;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      local_988 = *puVar7;
      local_986 = puVar7[1];
      FUN_28b3_0c98();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd38c;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd397;
      FUN_28b3_0c98();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd39c;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd3a6;
      func_0x000299d1();
      uStack_18 = 1;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd3af;
      puVar7 = (undefined2 *)func_0x0001e558();
      uVar20 = (undefined1 *)0xffed < &uStack_18;
      uVar21 = &stack0x0000 == (undefined1 *)0x6;
      local_990 = *puVar7;
      local_98e = puVar7[1];
      uVar13 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
      iVar6 = (int)*(undefined4 *)0xc392;
      *(undefined2 *)(iVar6 + iVar10) = local_988;
      *(undefined2 *)(iVar6 + iVar10 + 2) = local_986;
      uVar13 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
      iVar6 = (int)*(undefined4 *)0xc398;
      *(undefined2 *)(iVar6 + iVar10) = local_990;
      *(undefined2 *)(iVar6 + iVar10 + 2) = local_98e;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar20) {
        local_a40 = local_988;
        local_a3e = local_986;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar20 && !(bool)uVar21) {
        local_9f6 = local_988;
        local_9f4 = local_986;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar20) {
        local_a4e = local_990;
        local_a4c = local_98e;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar20 && !(bool)uVar21) {
        local_a10 = local_990;
        local_a0e = local_98e;
      }
      func_0x000297e6();
      uVar20 = (int)(local_994 << 1) < 0;
      uVar21 = (local_994 & 0x3fff) == 0;
      FUN_28b3_0c98();
      func_0x0002996b();
      FUN_28b3_1181();
      if (!(bool)uVar20 && !(bool)uVar21) {
        func_0x000297e6();
        func_0x00029983();
      }
      uVar13 = 0x22b2;
    }
    if (in_stack_00000014 != 0 || in_stack_00000012 != 0) {
      local_a52 = 0;
      piStack_e = (int *)0xd4f6;
      piStack_c = (int *)uVar13;
      puVar23 = (undefined2 *)func_0x0000013f();
      puVar12 = (undefined2 *)puVar23;
      puVar7 = local_420;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar3 = puVar7;
        puVar7 = puVar7 + 1;
        puVar2 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar3 = *puVar2;
      }
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd51c;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd525;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd52f;
      func_0x000299d1();
      uStack_18 = 1;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd538;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      uVar13 = puVar7[1];
      uVar15 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
      iVar10 = (int)*(undefined4 *)0xc392;
      *(undefined2 *)(iVar10 + 0x970) = *puVar7;
      *(undefined2 *)(iVar10 + 0x972) = uVar13;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd563;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd56c;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd576;
      func_0x000299d1();
      uStack_18 = 1;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd57f;
      puVar7 = (undefined2 *)func_0x0001e558();
      uVar13 = puVar7[1];
      uVar15 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
      iVar10 = (int)*(undefined4 *)0xc398;
      *(undefined2 *)(iVar10 + 0x970) = *puVar7;
      *(undefined2 *)(iVar10 + 0x972) = uVar13;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd5aa;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd5b3;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd5bd;
      func_0x000299d1();
      uStack_18 = 1;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd5c6;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      uVar13 = puVar7[1];
      uVar15 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
      iVar10 = (int)*(undefined4 *)0xc392;
      *(undefined2 *)(iVar10 + 0x974) = *puVar7;
      *(undefined2 *)(iVar10 + 0x976) = uVar13;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd5f1;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd5fa;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd604;
      func_0x000299d1();
      uStack_18 = 1;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd60d;
      puVar7 = (undefined2 *)func_0x0001e558();
      uVar13 = puVar7[1];
      uVar15 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
      iVar10 = (int)*(undefined4 *)0xc398;
      *(undefined2 *)(iVar10 + 0x974) = *puVar7;
      *(undefined2 *)(iVar10 + 0x976) = uVar13;
      FUN_28b3_0c98();
      FUN_28b3_1006();
      func_0x00029987();
      FUN_28b3_0c98();
      FUN_28b3_1006();
      func_0x00029987();
      FUN_28b3_0c98();
      func_0x0002996b();
      func_0x00029b6d();
      FUN_28b3_0c98();
      func_0x0002996b();
      func_0x00029b6d();
      FUN_28b3_117c();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd6c5;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd6ca;
      FUN_28b3_1582();
      func_0x00029834();
      func_0x00029983();
      FUN_28b3_0c98();
      func_0x00029b85();
      func_0x00029987();
      FUN_28b3_0c98();
      func_0x00029b85();
      func_0x00029987();
      FUN_28b3_0c98();
      func_0x00029b6d();
      FUN_28b3_107e();
      func_0x00029987();
      FUN_28b3_0c98();
      func_0x00029b6d();
      FUN_28b3_107e();
      func_0x00029987();
      FUN_28b3_0c98();
      func_0x00029b6d();
      FUN_28b3_0c98();
      func_0x00029b6d();
      FUN_28b3_1163();
      FUN_28b3_107e();
      func_0x00029987();
      FUN_28b3_0c98();
      func_0x00029b6d();
      FUN_28b3_0c98();
      func_0x00029b6d();
      FUN_28b3_117c();
      FUN_28b3_107e();
      func_0x00029987();
      if (*(int *)0x11e4 == 0) {
        local_a56 = (int *)0x3840;
      }
      else {
        local_a56 = (int *)0x2a30;
      }
      piStack_c = (int *)local_428;
      local_f3e = (int *)-(int)local_a56;
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd84a;
      piStack_e = local_f3e;
      local_f32[0] = FUN_3ab8_0321();
      piStack_c = (int *)local_428;
      piStack_e = local_a56;
      piStack_10 = (int *)0x22b2;
      uStack_12 = 0xd868;
      local_f36 = FUN_3ab8_0321();
      if (local_f32[0] < 1) {
        for (; (int)local_f3e <= (int)local_a56; local_f3e = local_f3e + 0x1e) {
          piStack_c = (int *)local_428;
          piStack_e = local_f3e;
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xd8b0;
          iVar10 = FUN_3ab8_0321();
          if (0 < iVar10) break;
          local_f32[0] = (int)local_f3e / 0x3c;
        }
        if ((int)local_a56 / 0x3c <= local_f32[0]) {
          local_f36 = 20000;
        }
      }
      else {
        local_f32[0] = 20000;
      }
      if (local_f36 < 1) {
        for (local_f3e = local_a56;
            (int *)-(int)local_f3e == local_a56 || -(int)local_a56 < (int)local_f3e;
            local_f3e = local_f3e + -0x1e) {
          piStack_c = (int *)local_428;
          piStack_e = local_f3e;
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xd91c;
          iVar10 = FUN_3ab8_0321();
          if (0 < iVar10) break;
          local_f36 = (int)local_f3e / 0x3c;
        }
      }
      else {
        local_f36 = 20000;
      }
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xd938;
      func_0x00024c86();
      *(undefined1 *)0xbf4c = 0;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xd94c;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xd95b;
      FUN_21f2_2d26();
      *in_stack_00000016 = '\0';
      if (local_f32[0] < 20000) {
        local_a5a = (local_f32[0] + 0x2d0) % 0x3c;
        local_f3c = (int *)0x8;
        if (*(int *)0x11e4 != 0) {
          local_f3c = (int *)0x9;
        }
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xd9ac;
        func_0x00024c86();
        piStack_c = (int *)0x0;
        piStack_e = local_f3c;
        piStack_10 = (int *)0x218;
        uStack_12 = 0xbf48;
        uStack_14 = 0x22b2;
        uStack_16 = 0xd9cb;
        FUN_21f2_3454();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xd9da;
        FUN_21f2_2d26();
      }
      if (local_f36 < 20000) {
        local_a5a = (local_f36 + 0x2d0) % 0x3c;
        if (*in_stack_00000016 == '\0') {
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xda2e;
          func_0x00024c86();
        }
        piStack_c = (int *)local_a5a;
        piStack_10 = (int *)0x218;
        uStack_12 = 0xbf48;
        uStack_14 = 0x22b2;
        uStack_16 = 0xda4d;
        piStack_e = (int *)((local_f36 + 0x2d0) / 0x3c);
        FUN_21f2_3454();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xda5c;
        FUN_21f2_2d26();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xda6a;
        FUN_21f2_2d26();
      }
      if (*in_stack_00000016 != '\0') {
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xda7e;
        FUN_21f2_2d26();
      }
    }
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
    func_0x00029d78();
    func_0x000299d1();
    if (*(int *)0x11e4 == 0) {
      local_9f0 = (int *)0x3840;
    }
    else {
      local_9f0 = (int *)0x2a30;
    }
    piStack_c = (int *)local_428;
    piStack_e = local_9f0;
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xdb18;
    FUN_3ab8_0321();
    uVar20 = (undefined1 *)0xfff7 < &piStack_e;
    uVar21 = &stack0x0000 == (undefined1 *)0x6;
    func_0x00029834();
    func_0x00029834();
    FUN_28b3_1181();
    if (!(bool)uVar20) {
      func_0x00029834();
      func_0x00029834();
      FUN_28b3_1181();
      if ((bool)uVar20 || (bool)uVar21) {
        piStack_c = (int *)local_6fa;
        piStack_e = local_6fc;
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xdb68;
        FUN_28b3_1582();
        uVar20 = (undefined1 *)0xfff7 < &piStack_e;
        uVar21 = &stack0x0000 == (undefined1 *)0x6;
        func_0x00029834();
        func_0x00029c2c();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x00029c74();
        func_0x00029c2c();
        func_0x000299d1();
        local_6ea = *(undefined2 *)0xa834;
        local_6e8 = *(undefined2 *)0xa836;
        while( true ) {
          func_0x00029834();
          func_0x000297e6();
          func_0x00029c2c();
          func_0x000297e6();
          func_0x00029c2c();
          func_0x00029c9d();
          FUN_28b3_1181();
          if ((bool)uVar20 || (bool)uVar21) break;
          func_0x000297e6();
          piStack_c = (int *)0xdbda;
          func_0x00029b55();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x000297e6();
        piVar19 = (int *)0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar20 || (bool)uVar21) {
          *in_stack_00000010 = local_6ea;
          in_stack_00000010[1] = local_6e8;
          local_408 = 0;
          local_a48 = 0;
          local_a50 = 0;
          local_9ee = 1;
          for (local_994 = 1; (int)local_994 <= (int)local_462; local_994 = local_994 + 1) {
            *(undefined2 *)(local_994 * 2 + (int)*(undefined4 *)0xbece) = 0;
          }
          while( true ) {
            while( true ) {
              local_a00 = local_9ee;
              for (local_9fc = local_9ee; local_9fc <= local_40a; local_9fc = local_9fc + 1) {
                local_9ec = *(int *)(local_9fc * 2 + (int)*(undefined4 *)0xc08a);
                local_9fe = *(int *)(local_9fc * 2 + (int)*(undefined4 *)0xc096);
                if (local_a48 == 0) {
                  uVar13 = (undefined2)((ulong)*(undefined4 *)0xbece >> 0x10);
                  iVar10 = (int)*(undefined4 *)0xbece;
                  if (*(int *)(local_9ec * 2 + iVar10) == 0) {
                    local_a48 = 1;
                    local_408 = local_408 + 1;
                    *(int *)(local_9ec * 2 + iVar10) = local_408;
                    local_9ee = local_9fc;
                  }
                }
                uVar13 = (undefined2)((ulong)*(undefined4 *)0xbece >> 0x10);
                iVar10 = (int)*(undefined4 *)0xbece;
                if (((*(int *)(local_9ec * 2 + iVar10) == 0) ||
                    (*(int *)(local_9fe * 2 + iVar10) == 0)) &&
                   ((*(int *)(local_9ec * 2 + iVar10) != 0 ||
                    (*(int *)(local_9fe * 2 + iVar10) != 0)))) {
                  local_a50 = 1;
                  *(int *)(local_9ec * 2 + iVar10) = local_408;
                  *(int *)(local_9fe * 2 + (int)*(undefined4 *)0xbece) = local_408;
                }
              }
              if (local_a50 == 0) break;
              local_a50 = 0;
            }
            if (local_a48 == 0) break;
            local_a48 = 0;
          }
          if (0 < local_408) {
            for (local_9a6 = 1; local_9a6 <= (int)local_462; local_9a6 = local_9a6 + 1) {
              func_0x000297e6();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xddaa;
              FUN_28b3_1036();
              func_0x00029987();
              func_0x000297e6();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xddc6;
              FUN_28b3_1036();
              func_0x00029987();
              func_0x000297e6();
              piStack_c = (int *)0x22b2;
              piStack_e = (int *)0xdde2;
              FUN_28b3_1036();
              func_0x00029987();
            }
            *param_3 = local_462;
            *param_2 = local_40a;
            return local_408;
          }
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xdd79;
          func_0x00024c86();
          goto LAB_3ab8_20e4;
        }
        goto LAB_3ab8_2368;
      }
    }
    piVar19 = (int *)0x22b2;
  }
LAB_3ab8_2368:
  piStack_e = (int *)0xcef3;
  piStack_c = piVar19;
  FUN_21f2_3454();
LAB_3ab8_328f:
  piStack_c = (int *)0xde18;
  func_0x00012276();
  if (*(int *)0xc22 < 2) {
    *(undefined2 *)0xc22 = 2;
  }
  piStack_c = (int *)0x11f2;
  piStack_e = (int *)0xde33;
  FUN_1000_0599();
  piStack_c = (int *)0xde3f;
  func_0x00012276();
  piStack_c = (int *)0x0;
  piStack_e = (int *)0x3;
  piStack_10 = (int *)0x11f2;
  uStack_12 = 0xde54;
  func_0x0000f2cb();
  func_0x0000a799();
  piStack_c = (int *)0xde64;
  func_0x0001470b();
  piStack_c = (int *)0x11f2;
  piStack_e = (int *)0xde72;
  FUN_1000_0599();
  piStack_c = (int *)0xde7e;
  func_0x00012276();
  return -1;
}



/* 3ab8:3308  FUN_3ab8_3308  1018 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_3308(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint unaff_SS;
  uint unaff_DS;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined2 *puVar9;
  int local_4a;
  undefined2 local_3c [9];
  undefined2 local_2a;
  uint local_28;
  byte local_26;
  undefined2 local_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  func_0x00029834();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xdecc;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xded4;
  func_0x00029834();
  local_10 = 0x22b2;
  uStack_12 = 0xdedc;
  func_0x0002996b();
  local_10 = 0x22b2;
  uStack_12 = 0xdee1;
  func_0x00029d78();
  local_18 = 0x22b2;
  local_1a = 0xdeeb;
  func_0x000299d1();
  local_18 = 0x22b2;
  local_1a = 0xdef0;
  lVar8 = FUN_13bf_39a0();
  if (lVar8 != 0) {
    if (lVar8 < 0) {
      uStack_c = 0xdf12;
      func_0x00012276();
      if (*(int *)0xc22 < 1) {
        *(undefined2 *)0xc22 = 1;
      }
      uStack_c = 0x11f2;
      local_e = 0xdf2d;
      FUN_1000_0599();
    }
    else {
      uStack_c = 0x11f2;
      local_e = 0xdf44;
      puVar9 = (undefined2 *)func_0x0000013f();
      puVar4 = (undefined2 *)puVar9;
      puVar5 = &local_1c;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      if ((unaff_SS & 0xff) == *(uint *)0xb310) {
        if ((unaff_DS & 0x40) == 0) {
          uVar6 = 0;
          uVar7 = (unaff_DS & 0x80) == 0;
          if ((bool)uVar7) {
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029ae7();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029ae7();
            FUN_28b3_117c();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029ae7();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029ae7();
            FUN_28b3_117c();
            FUN_28b3_1181();
            if ((bool)uVar6 || (bool)uVar7) {
              func_0x000297e6();
              func_0x00029d78();
              local_10 = 0x22b2;
              uStack_12 = 0xe0b3;
              func_0x000299d1();
              local_10 = 0x22b2;
              uStack_12 = 0xe0bb;
              func_0x000297e6();
              local_10 = 0x22b2;
              uStack_12 = 0xe0c0;
              func_0x00029d78();
              local_18 = 0x22b2;
              local_1a = 0xe0ca;
              func_0x000299d1();
              local_18 = 0x22b2;
              local_1a = 0xe0d2;
              func_0x000297e6();
              local_18 = 0x22b2;
              local_1a = 0xe0d7;
              func_0x00029d78();
              uStack_20 = 0x22b2;
              uStack_22 = 0xe0e1;
              func_0x000299d1();
              uStack_20 = 0x22b2;
              uStack_22 = 0xe0e9;
              func_0x000297e6();
              uStack_20 = 0x22b2;
              uStack_22 = 0xe0f1;
              func_0x0002996b();
            }
            else {
              func_0x000297e6();
              func_0x00029d78();
              local_10 = 0x22b2;
              uStack_12 = 0xe058;
              func_0x000299d1();
              local_10 = 0x22b2;
              uStack_12 = 0xe060;
              func_0x000297e6();
              local_10 = 0x22b2;
              uStack_12 = 0xe065;
              func_0x00029d78();
              local_18 = 0x22b2;
              local_1a = 0xe06f;
              func_0x000299d1();
              local_18 = 0x22b2;
              local_1a = 0xe077;
              func_0x000297e6();
              local_18 = 0x22b2;
              local_1a = 0xe07c;
              func_0x00029d78();
              uStack_20 = 0x22b2;
              uStack_22 = 0xe086;
              func_0x000299d1();
              uStack_20 = 0x22b2;
              uStack_22 = 0xe08e;
              func_0x000297e6();
            }
            uStack_20 = 0x22b2;
            uStack_22 = 0xe0f6;
            func_0x00029d78();
            local_28 = 0x22b2;
            local_2a = 0xe100;
            func_0x000299d1();
            local_28 = 0x22b2;
            local_2a = 0xe105;
            FUN_1def_043a();
            local_4a = 1;
            do {
              if (*(int *)0x150 < local_4a) {
                return (int)lVar8;
              }
              uStack_c = 0xe249;
              puVar9 = (undefined2 *)func_0x00000398();
              puVar4 = (undefined2 *)puVar9;
              puVar5 = local_3c;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                puVar2 = puVar5;
                puVar5 = puVar5 + 1;
                puVar1 = puVar4;
                puVar4 = puVar4 + 1;
                *puVar2 = *puVar1;
              }
              if ((((byte)local_28 < 0x5a) && ((local_26 & 0x80) != 0)) &&
                 (uVar6 = local_28 >> 8 < *(uint *)0xb310, local_28 >> 8 == *(uint *)0xb310)) {
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
                if ((bool)uVar6) {
                  uStack_c = 0xbf48;
                  local_e = 0x22b2;
                  local_10 = 0xe172;
                  FUN_1885_0344();
                  uStack_c = 0xbf48;
                  local_e = 0x18b3;
                  local_10 = 0xe186;
                  iVar3 = func_0x000253ce();
                  if (iVar3 == 0) {
                    local_24 = *(undefined2 *)0xa84c;
                    uStack_22 = *(undefined2 *)0xa84e;
                    uStack_20 = *(undefined2 *)0xa850;
                    uStack_1e = *(undefined2 *)0xa852;
                  }
                  uVar6 = param_1 == 0;
                  if (param_1 == 1) {
                    func_0x00029834();
                    func_0x00029834();
                    FUN_28b3_1181();
                    if ((bool)uVar6) {
                      uStack_c = 0xe1c8;
                      func_0x00012276();
                      if (*(int *)0xc22 < 3) {
                        *(undefined2 *)0xc22 = 3;
                      }
                      uStack_c = 0x11f2;
                      local_e = 0xe1e3;
                      FUN_1000_0599();
                      uStack_c = 0xe1ee;
                      func_0x00012276();
                      uStack_c = 0x11f2;
                      local_e = 0xe1fc;
                      FUN_1000_0599();
                      uStack_c = 0xe207;
                      func_0x00012276();
                      uStack_c = 0xe211;
                      func_0x00012276();
                      return 0;
                    }
                  }
                  uStack_c = 0xe21c;
                  func_0x0000daa6();
                  uStack_c = 0xe225;
                  func_0x000190c7();
                  func_0x0000abfa();
                  uStack_c = 0xe234;
                  func_0x0000b1d8();
                  return (int)lVar8;
                }
              }
              local_4a = local_4a + 1;
            } while( true );
          }
        }
        uStack_c = 0xdfa1;
        func_0x00012276();
        if (*(int *)0xc22 < 1) {
          *(undefined2 *)0xc22 = 1;
        }
        uStack_c = 0x11f2;
        local_e = 0xdfbc;
        FUN_1000_0599();
      }
      else {
        uStack_c = 0xdf6a;
        func_0x00012276();
        if (*(int *)0xc22 < 1) {
          *(undefined2 *)0xc22 = 1;
        }
        uStack_c = 0x11f2;
        local_e = 0xdf85;
        FUN_1000_0599();
      }
    }
    uStack_c = 0xdf38;
    func_0x00012276();
  }
  return 0;
}



/* 3ab8:3702  FUN_3ab8_3702  237 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_3702(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined2 in_stack_0000000c;
  undefined2 in_stack_0000000e;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  int in_stack_00000014;
  undefined1 local_56 [20];
  undefined2 local_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 local_3a;
  undefined1 local_34 [28];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined1 *puStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  
  FUN_21f2_0ebc();
  local_3a = *(undefined2 *)0x112c;
  *(undefined2 *)0x112c = 1;
  if (in_stack_00000014 < 0) {
    puStack_a = local_34;
    uStack_c = 0x22b2;
    uStack_e = 0xe350;
    FUN_21f2_3454();
  }
  else {
    puStack_a = (undefined1 *)in_stack_00000014;
    uStack_c = 0x22b2;
    uStack_e = 0xe2b2;
    func_0x00029834();
    uStack_c = 0x22b2;
    uStack_e = 0xe2ba;
    func_0x000299b9();
    puStack_14 = (undefined1 *)0x22b2;
    uStack_16 = 0xe2c4;
    func_0x000299d1();
    puStack_14 = local_34;
    uStack_16 = 0x22b2;
    uStack_18 = 0xe2cd;
    iVar1 = func_0x0002267f();
    uVar3 = 0;
    if (iVar1 == 0) {
      *(undefined2 *)0x112c = local_3a;
      return 0;
    }
    puStack_a = (undefined1 *)0xe2e7;
    func_0x00029834();
    puStack_a = (undefined1 *)0xe2f0;
    func_0x00029834();
    uVar2 = 0x22b2;
    puStack_a = (undefined1 *)0xe2f5;
    FUN_28b3_1181();
    if (!(bool)uVar3) goto LAB_3ab8_37d2;
    local_42 = in_stack_0000000c;
    uStack_40 = in_stack_0000000e;
    uStack_3e = in_stack_00000010;
    uStack_3c = in_stack_00000012;
    puStack_a = (undefined1 *)in_stack_00000014;
    uStack_c = in_stack_00000012;
    uStack_e = in_stack_00000010;
    uStack_10 = in_stack_0000000e;
    uStack_12 = in_stack_0000000c;
    puStack_14 = local_56;
    uStack_16 = 0x22b2;
    uVar2 = 0x1bb4;
    uStack_18 = 0xe31e;
    iVar1 = func_0x0002267f();
    if (iVar1 == 0) goto LAB_3ab8_37d2;
    puStack_a = local_34;
    uStack_c = 0x1bb4;
    uStack_e = 0xe332;
    FUN_21f2_2d26();
    puStack_a = local_34;
    uStack_c = 0x22b2;
    uStack_e = 0xe341;
    FUN_21f2_2d26();
  }
  uVar2 = 0x22b2;
LAB_3ab8_37d2:
  *(undefined2 *)0x112c = local_3a;
  puStack_a = (undefined1 *)0x2;
  uStack_e = 0xe364;
  uStack_c = uVar2;
  FUN_3ab8_37ef();
  return 1;
}



/* 3ab8:37ef  FUN_3ab8_37ef  284 bytes, 3 callers */

undefined2 __cdecl16far FUN_3ab8_37ef(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  FUN_21f2_0ebc();
  uStack_8 = param_2;
  uStack_a = 0x22b2;
  uStack_c = 0xe384;
  iVar3 = func_0x00024ce4();
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uStack_8 = param_1;
    uStack_a = 0;
    uStack_c = param_2;
    uStack_e = 0x22b2;
    local_10 = 0xe39d;
    func_0x00018eff();
    uVar5 = *(undefined2 *)0xb30e;
    *(undefined2 *)0xc3a0 = *(undefined2 *)0xb30c;
    *(undefined2 *)0xc3a2 = uVar5;
    uVar5 = *(undefined2 *)0xb380;
    *(undefined2 *)0xc3a4 = *(undefined2 *)0xb37e;
    *(undefined2 *)0xc3a6 = uVar5;
    *(undefined1 *)0xc3b4 = (undefined1)param_1;
    *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
    uStack_8 = *(undefined2 *)0xa7ea;
    uStack_a = *(undefined2 *)0xa7e8;
    uStack_c = *(undefined2 *)0xa7e6;
    uStack_e = *(undefined2 *)0xa7e4;
    local_10 = 0x18b3;
    uStack_12 = 0xe3ed;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xe3f7;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xe3ff;
    puVar4 = (undefined2 *)FUN_1def_05d1();
    uVar5 = puVar4[1];
    *(undefined2 *)0xc3a8 = *puVar4;
    *(undefined2 *)0xc3aa = uVar5;
    uStack_8 = *(undefined2 *)0xa7ea;
    uStack_a = *(undefined2 *)0xa7e8;
    uStack_c = *(undefined2 *)0xa7e6;
    uStack_e = *(undefined2 *)0xa7e4;
    local_10 = 0x1bb4;
    uStack_12 = 0xe428;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xe432;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xe43a;
    puVar4 = (undefined2 *)func_0x0001e558();
    uVar5 = puVar4[1];
    *(undefined2 *)0xc3ac = *puVar4;
    *(undefined2 *)0xc3ae = uVar5;
    uVar5 = *(undefined2 *)0xbc78;
    *(undefined2 *)0xc3b0 = param_2;
    *(undefined2 *)0xc3b2 = uVar5;
    *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
    uStack_8 = 0;
    uStack_a = 0x1bb4;
    uStack_c = 0xe465;
    func_0x0000daa6();
    puVar6 = &uStack_1e;
    puVar4 = (undefined2 *)0xc3a0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    func_0x0001b198(0x885);
    uStack_8 = 0x18b3;
    uStack_a = 0xe482;
    func_0x0000abfa();
    uVar5 = 1;
  }
  return uVar5;
}



/* 3ab8:390b  FUN_3ab8_390b  2885 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_390b(uint param_1)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int extraout_DX;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 *puVar12;
  long lVar13;
  undefined4 uVar14;
  undefined1 local_f4 [4];
  int local_f0;
  undefined1 local_ee [4];
  undefined2 local_ea;
  undefined1 local_e8 [100];
  int local_84;
  uint local_82;
  undefined4 local_80;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c [10];
  byte local_58;
  byte local_57;
  byte local_56;
  int local_54;
  undefined2 *local_4e;
  undefined2 local_4c [11];
  uint local_36;
  undefined2 local_34 [5];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  uint uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 *puStack_12;
  undefined2 *puStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  
  uVar8 = 0x22b2;
  FUN_21f2_0ebc();
  local_4e = (undefined2 *)0x0;
LAB_3ab8_391d:
  if ((param_1 == 1) || (param_1 == 2)) {
LAB_3ab8_392c:
    do {
      uVar9 = uVar8;
      if (param_1 == 1) {
        uVar9 = 0x22b2;
        puStack_e = (undefined1 *)0xe4c0;
        puStack_c = (undefined1 *)uVar8;
        FUN_21f2_3454();
      }
      uVar10 = param_1 < 2;
      uVar11 = param_1 == 2;
      uVar8 = uVar9;
      if ((bool)uVar11) {
        uVar8 = 0x22b2;
        puStack_e = (undefined1 *)0xe4d6;
        puStack_c = (undefined1 *)uVar9;
        FUN_21f2_3454();
      }
      puStack_e = (undefined1 *)0xe4e6;
      puStack_c = (undefined1 *)uVar8;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xe4f6;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xe506;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xe516;
      FUN_21f2_2d26();
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029ae7();
      FUN_28b3_1181();
      if ((bool)uVar10 || (bool)uVar11) {
        func_0x000297e6();
        func_0x00029d78();
        puStack_10 = (undefined2 *)0x22b2;
        puStack_12 = (undefined2 *)0xe551;
        func_0x000299d1();
        puStack_10 = (undefined2 *)0x738f;
        puStack_12 = local_34;
        uStack_14 = 0x22b2;
        uStack_16 = 0xe55e;
        FUN_21f2_3454();
        uVar10 = (undefined1 *)0xfff3 < &puStack_12;
        uVar11 = &stack0x0000 == (undefined1 *)0x6;
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xe56f;
        FUN_21f2_2d26();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar10 && !(bool)uVar11) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar10 && !(bool)uVar11) {
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xe5bb;
            func_0x000299d1();
            puStack_10 = (undefined2 *)0x73a2;
            puStack_12 = local_34;
            uStack_14 = 0x22b2;
            uStack_16 = 0xe5c8;
            FUN_21f2_3454();
            puStack_c = (undefined1 *)0x22b2;
            puStack_e = (undefined1 *)0xe5d9;
            FUN_21f2_2d26();
          }
        }
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xe5e9;
        FUN_21f2_2d26();
      }
      if (*(int *)0xc22 < 2) {
        *(undefined2 *)0xc22 = 2;
      }
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xe605;
      FUN_1000_0599();
      puStack_c = (undefined1 *)0xe610;
      func_0x00012276();
      if (param_1 == 2) {
        local_4e = (undefined2 *)0x0;
      }
      *(undefined2 *)0xc2c = 1;
      puStack_c = local_ee;
      puStack_e = local_e8;
      puStack_10 = local_4e;
      puStack_12 = (undefined2 *)0x11f2;
      uVar8 = 0x1bb4;
      uStack_14 = 0xe63d;
      local_f0 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) {
        return 0xd499;
      }
      if (local_f0 == 0x14) {
        return 0;
      }
      if (local_f0 == -1) {
        puStack_c = (undefined1 *)0xe66e;
        func_0x0000daa6();
        local_ea = *(undefined2 *)0x150;
        puStack_c = (undefined1 *)0xe67c;
        func_0x000190c7();
        func_0x0000abfa();
        uVar8 = 0x885;
        puStack_c = (undefined1 *)0xe68b;
        func_0x0000b1d8();
        local_4e = (undefined2 *)0x0;
        local_82 = 0;
      }
      uVar10 = local_82 < 2;
      uVar11 = local_82 == 2;
      if (!(bool)uVar11) {
LAB_3ab8_3b45:
        if (local_82 != 0) {
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xe6e6;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xe6ef;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xe6f4;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uVar8 = 0x22b2;
          uStack_1a = 0xe6fe;
          func_0x000299d1();
          uStack_18 = param_1;
          uStack_1a = 0x22b2;
          uStack_1c = 0xe705;
          iVar6 = extraout_DX;
          iVar4 = FUN_3ab8_3308();
          if ((-1 < iVar6) && ((0 < iVar6 || (iVar4 != 0)))) {
LAB_3ab8_3b98:
            uVar10 = local_82 == 0;
            uVar11 = local_82 == 1;
            if (!(bool)uVar11) {
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029ae7();
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar11) goto LAB_3ab8_3bbf;
              goto LAB_3ab8_3d1b;
            }
LAB_3ab8_3bbf:
            local_78 = *(undefined2 *)0x73e6;
            local_76 = *(undefined2 *)0x73e8;
            local_7c = *(undefined2 *)0xa7fc;
            local_7a = *(undefined2 *)0xa7fe;
            func_0x0001bb4e();
            puStack_c = (undefined1 *)0xe767;
            func_0x00012276();
            puStack_c = (undefined1 *)0xe771;
            func_0x00012276();
            puStack_c = local_f4;
            puStack_e = local_ee;
            puStack_10 = &local_7c;
            puStack_12 = &local_78;
            uStack_14 = 0x11f2;
            uVar8 = 0xad;
            uStack_16 = 0xe791;
            local_36 = func_0x000021a4();
            if (local_36 != 0xffff) {
              uVar10 = 0;
              uVar11 = *(int *)0x158 == 0;
              if (!(bool)uVar11) {
                return 0;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              uVar9 = local_76;
              uVar8 = local_78;
              if (!(bool)uVar10 && !(bool)uVar11) {
                local_78 = local_7c;
                local_76 = local_7a;
                local_7c = uVar8;
                local_7a = uVar9;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar11) {
LAB_3ab8_3c95:
                local_7c = *(undefined2 *)0xa7fc;
                local_7a = *(undefined2 *)0xa7fe;
              }
              else {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar10 || (bool)uVar11) goto LAB_3ab8_3c95;
              }
              uVar11 = false;
              uVar10 = local_36 == 0;
              if (!(bool)uVar10) goto code_r0x0003e828;
              goto LAB_3ab8_3cb1;
            }
          }
        }
        goto LAB_3ab8_392c;
      }
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029ae7();
      uVar8 = 0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar10 || (bool)uVar11) goto LAB_3ab8_3b45;
      uVar8 = 0x11f2;
      puStack_c = (undefined1 *)0xe6c1;
      func_0x00012276();
    } while( true );
  }
  goto LAB_3ab8_3ee5;
code_r0x0003e828:
  uVar11 = local_36 < 0x66;
  uVar10 = true;
  if (local_36 == 0x66) {
LAB_3ab8_3cb1:
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029ae7();
    FUN_28b3_1181();
    if ((bool)uVar11 || (bool)uVar10) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar11) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar11 || (bool)uVar10) {
          *(undefined2 *)0x73e6 = local_78;
          *(undefined2 *)0x73e8 = local_76;
          *(undefined2 *)0x73ea = local_7c;
          *(undefined2 *)0x73ec = local_7a;
LAB_3ab8_3d1b:
          puStack_c = (undefined1 *)0xe8a8;
          func_0x000297e6();
          puStack_c = (undefined1 *)0xe8ad;
          func_0x00029d78();
          puStack_12 = (undefined2 *)0x22b2;
          uStack_14 = 0xe8b7;
          func_0x000299d1();
          puStack_12 = (undefined2 *)0x22b2;
          uStack_14 = 0xe8c0;
          func_0x000297e6();
          puStack_12 = (undefined2 *)0x22b2;
          uStack_14 = 0xe8c5;
          func_0x00029d78();
          uStack_1a = 0x22b2;
          uVar8 = 0x22b2;
          uStack_1c = 0xe8cf;
          func_0x000299d1();
          uStack_1a = 0x22b2;
          uStack_1c = 0xe8d3;
          iVar6 = FUN_3ab8_3702();
          if (iVar6 != 0) {
            local_4e = (undefined2 *)0x1;
            uVar8 = 0;
            puStack_c = (undefined1 *)0xe8eb;
            uVar14 = func_0x00000398();
            pbVar1 = (byte *)((int)uVar14 + 0x16);
            *pbVar1 = *pbVar1 | 0x80;
          }
          goto LAB_3ab8_391d;
        }
      }
    }
  }
  goto LAB_3ab8_3b98;
LAB_3ab8_3ee5:
  do {
    do {
      if (param_1 != 3) {
        lVar13 = CONCAT22(local_80._2_2_,(undefined2)local_80);
        if (param_1 == 4) {
          do {
            do {
              puStack_e = (undefined1 *)0xea85;
              puStack_c = (undefined1 *)uVar8;
              local_80 = lVar13;
              func_0x00024c86();
              puStack_c = (undefined1 *)0x22b2;
              puStack_e = (undefined1 *)0xea95;
              FUN_21f2_2d26();
              puStack_c = (undefined1 *)0x22b2;
              puStack_e = (undefined1 *)0xeaa5;
              FUN_21f2_2d26();
              puStack_c = (undefined1 *)0x22b2;
              puStack_e = (undefined1 *)0xeab5;
              FUN_21f2_2d26();
              puStack_c = (undefined1 *)0x22b2;
              puStack_e = (undefined1 *)0xeac5;
              FUN_21f2_2d26();
              *(undefined2 *)0xc2c = 1;
              puStack_c = local_ee;
              puStack_e = local_e8;
              puStack_10 = (undefined2 *)0x0;
              puStack_12 = (undefined2 *)0x22b2;
              uVar8 = 0x1bb4;
              uStack_14 = 0xeae8;
              local_f0 = FUN_1def_0904();
              *(undefined2 *)0xc2c = 0;
              if (*(int *)0x158 != 0) {
                return 0xd499;
              }
              if ((local_f0 == 0x14) || (local_f0 == -1)) {
                return 0;
              }
              lVar13 = local_80;
            } while (local_82 == 0);
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xeb2a;
            func_0x000299d1();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xeb33;
            func_0x000297e6();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xeb38;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xeb42;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uVar8 = 0x11f2;
            uStack_1a = 0xeb47;
            lVar13 = FUN_13bf_39a0();
            uVar10 = (int)((ulong)lVar13 >> 0x10) == 0;
          } while ((lVar13 < 0) || ((lVar13 < 0x10000 && (uVar10 = false, (int)lVar13 == 0))));
          uVar11 = 0;
          puStack_c = (undefined1 *)0x11f2;
          puStack_e = (undefined1 *)0xeb67;
          local_80 = lVar13;
          puVar12 = (undefined2 *)func_0x0000013f();
          puVar7 = (undefined2 *)puVar12;
          puVar5 = local_4c;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar5;
            puVar5 = puVar5 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_117c();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_117c();
          FUN_28b3_1181();
          if ((bool)uVar11 || (bool)uVar10) {
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029983();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xeca7;
            func_0x000299d1();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xecaf;
            func_0x000297e6();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xecb4;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xecbe;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1a = 0xecc6;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            uStack_1a = 0xeccb;
            func_0x00029d78();
            uStack_20 = 0x22b2;
            uStack_22 = 0xecd5;
            func_0x000299d1();
          }
          else {
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029983();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xec2b;
            func_0x000299d1();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xec33;
            func_0x000297e6();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xec38;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xec42;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1a = 0xec4a;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            uStack_1a = 0xec4f;
            func_0x00029d78();
            uStack_20 = 0x22b2;
            uStack_22 = 0xec59;
            func_0x000299d1();
          }
          uStack_20 = 0x22b2;
          uStack_22 = 0xecdd;
          func_0x000297e6();
          uStack_20 = 0x22b2;
          uStack_22 = 0xece2;
          func_0x00029d78();
          uStack_28 = 0x22b2;
          uStack_2a = 0xecec;
          func_0x000299d1();
          uStack_28 = 0x22b2;
          uStack_2a = 0xecf1;
          FUN_1def_043a();
          local_84 = 1;
          puStack_c = (undefined1 *)0xed02;
          func_0x0000daa6();
          while (local_84 <= *(int *)0x150) {
            puStack_c = (undefined1 *)0xed0e;
            puVar12 = (undefined2 *)func_0x00000398();
            puVar7 = (undefined2 *)puVar12;
            puVar5 = local_6c;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar5;
              puVar5 = puVar5 + 1;
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar2;
            }
            if ((local_58 < 0x5a) && ((local_56 & 0x40) != 0)) {
              puStack_c = (undefined1 *)0xefc7;
              func_0x000190c7();
            }
            else {
              local_84 = local_84 + 1;
            }
          }
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xed56;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xed5f;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xed64;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0xed6e;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          uStack_1a = 0xed73;
          func_0x0002a178();
          uVar10 = (undefined1 *)0xffef < &uStack_16;
          uVar11 = &stack0x0000 == (undefined1 *)0x6;
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bfc();
          func_0x0002996b();
          FUN_28b3_1181();
          if ((bool)uVar10 || (bool)uVar11) {
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
          }
          func_0x00029834();
          func_0x000297e6();
          func_0x00029ae7();
          func_0x00029d78();
          FUN_28b3_1181();
          if ((bool)uVar10) {
            local_74 = *(undefined2 *)0xa7fc;
            local_72 = *(undefined2 *)0xa7fe;
          }
          puStack_c = (undefined1 *)*(undefined2 *)0xa7e8;
          puStack_e = (undefined1 *)*(undefined2 *)0xa7e6;
          puStack_10 = (undefined2 *)*(undefined2 *)0xa7e4;
          puStack_12 = (undefined2 *)0x22b2;
          uStack_14 = 0xee02;
          func_0x000297e6();
          puStack_12 = (undefined2 *)0x22b2;
          uStack_14 = 0xee07;
          func_0x00029d78();
          uStack_1a = 0x22b2;
          uStack_1c = 0xee11;
          func_0x000299d1();
          uStack_1a = 0x22b2;
          uStack_1c = 0xee15;
          iVar6 = FUN_3ab8_3702();
          if (iVar6 != 0) {
            puStack_c = (undefined1 *)0xee25;
            uVar14 = func_0x00000398();
            pbVar1 = (byte *)((int)uVar14 + 0x16);
            *pbVar1 = *pbVar1 | 0x40;
          }
          func_0x000297e6();
          func_0x00029b85();
          func_0x0002996b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1172();
          func_0x00029c2c();
          func_0x0002996b();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xeea0;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xeea9;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xeeae;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0xeeb8;
          func_0x000299d1();
          uStack_18 = 0;
          uStack_1a = 0x22b2;
          uStack_1c = 0xeec0;
          puVar5 = (undefined2 *)FUN_1def_05d1();
          uVar8 = puVar5[1];
          *(undefined2 *)0xb30c = *puVar5;
          *(undefined2 *)0xb30e = uVar8;
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xeee8;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xeef0;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xeef5;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0xeeff;
          func_0x000299d1();
          uStack_18 = 0;
          uStack_1a = 0x22b2;
          uStack_1c = 0xef07;
          puVar5 = (undefined2 *)func_0x0001e558();
          uVar8 = puVar5[1];
          *(undefined2 *)0xb37e = *puVar5;
          *(undefined2 *)0xb380 = uVar8;
          local_70 = *(undefined2 *)0xb76a;
          local_6e = *(undefined2 *)0xb76c;
          func_0x000297e6();
          func_0x00029af6();
          func_0x00029983();
          *(undefined2 *)0xb784 = local_70;
          *(undefined2 *)0xb786 = local_6e;
          puStack_c = (undefined1 *)0x22b2;
          puStack_e = (undefined1 *)0xef56;
          func_0x00024c86();
          puStack_c = (undefined1 *)*(undefined2 *)0xa7e8;
          puStack_e = (undefined1 *)*(undefined2 *)0xa7e6;
          puStack_10 = (undefined2 *)*(undefined2 *)0xa7e4;
          puStack_12 = (undefined2 *)0x22b2;
          uStack_14 = 0xef74;
          func_0x000297e6();
          puStack_12 = (undefined2 *)0x22b2;
          uStack_14 = 0xef79;
          func_0x00029d78();
          uStack_1a = 0x22b2;
          uStack_1c = 0xef83;
          func_0x000299d1();
          uStack_1a = 0x22b2;
          uStack_1c = 0xef87;
          iVar6 = FUN_3ab8_3702();
          if (iVar6 != 0) {
            puStack_c = (undefined1 *)0xef97;
            uVar14 = func_0x00000398();
            pbVar1 = (byte *)((int)uVar14 + 0x16);
            *pbVar1 = *pbVar1 | 0x40;
          }
          puStack_c = (undefined1 *)0xefaa;
          func_0x0000b1d8();
          func_0x0000abfa();
        }
        return 1;
      }
      *(undefined2 *)0xc2c = 1;
      puStack_e = (undefined1 *)0xe90c;
      puStack_c = (undefined1 *)uVar8;
      func_0x00024c86();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xe91c;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xe92c;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xe93c;
      FUN_21f2_2d26();
      puStack_c = local_ee;
      puStack_e = local_e8;
      puStack_10 = (undefined2 *)0x0;
      puStack_12 = (undefined2 *)0x22b2;
      uVar8 = 0x1bb4;
      uStack_14 = 0xe959;
      local_f0 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) {
        return 0xd499;
      }
      if (local_f0 == 0x14) {
        return 0;
      }
    } while (local_82 == 0);
    func_0x000297e6();
    func_0x00029d78();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xe996;
    func_0x000299d1();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xe99f;
    func_0x000297e6();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xe9a4;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xe9ae;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uVar8 = 0x18b3;
    uStack_1a = 0xe9b3;
    local_54 = func_0x0001b204();
  } while (local_54 == 0);
  puStack_c = (undefined1 *)0xe9c6;
  puVar12 = (undefined2 *)func_0x00000398();
  puVar7 = (undefined2 *)puVar12;
  puVar5 = local_6c;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar5;
    puVar5 = puVar5 + 1;
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar3 = *puVar2;
  }
  if ((uint)local_57 != *(uint *)0xb310) {
    if (*(int *)0xc22 < 2) {
      *(undefined2 *)0xc22 = 2;
    }
    puStack_c = (undefined1 *)0xe9f8;
    func_0x00012276();
    puStack_c = (undefined1 *)0x11f2;
    puStack_e = (undefined1 *)0xea06;
    FUN_1000_0599();
LAB_3ab8_3e8b:
    uVar8 = 0x11f2;
    puStack_c = (undefined1 *)0xea11;
    func_0x00012276();
    goto LAB_3ab8_3ee5;
  }
  if ((local_56 & 0x80) == 0) {
    if (*(int *)0xc22 < 2) {
      *(undefined2 *)0xc22 = 2;
    }
    puStack_c = (undefined1 *)0x0;
    puStack_e = (undefined1 *)0xea33;
    FUN_1000_0599();
    puStack_c = (undefined1 *)0xea3e;
    func_0x00012276();
    goto LAB_3ab8_3e8b;
  }
  puStack_c = (undefined1 *)0xea4c;
  func_0x0000daa6();
  puStack_c = (undefined1 *)0xea55;
  func_0x000190c7();
  func_0x0000abfa();
  uVar8 = 0x885;
  puStack_c = (undefined1 *)0xea64;
  func_0x0000b1d8();
  goto LAB_3ab8_3ee5;
}



/* 3ab8:4450  FUN_3ab8_4450  266 bytes, 2 callers */

undefined2 __cdecl16far
FUN_3ab8_4450(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined1 *param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
             undefined2 param_13,int param_14)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 local_34 [22];
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uStack_6 = 0xefdb;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)param_9;
  uStack_6 = param_8;
  uStack_8 = param_7;
  uStack_a = param_6;
  uStack_c = 0x119c;
  puStack_e = param_5;
  uStack_10 = param_4;
  uStack_12 = param_3;
  uStack_14 = param_2;
  uStack_16 = 0x117e;
  uStack_18 = 0x73ee;
  uStack_1a = param_1;
  uStack_1c = 0x22b2;
  uStack_1e = 0xf007;
  FUN_21f2_3454();
  uVar2 = (undefined1 *)0xffe7 < &uStack_1a;
  uVar3 = &stack0x0000 == (undefined1 *)0x2;
  puStack_4 = (undefined1 *)0x22b2;
  uStack_6 = 0xf013;
  func_0x00029834();
  puStack_4 = (undefined1 *)0x22b2;
  uStack_6 = 0xf01b;
  func_0x00029834();
  puStack_4 = (undefined1 *)0x22b2;
  uStack_6 = 0xf020;
  func_0x00029ae7();
  puStack_4 = (undefined1 *)0x22b2;
  uStack_6 = 0xf025;
  FUN_28b3_1181();
  if ((bool)uVar2) {
    puStack_4 = (undefined1 *)0x7403;
  }
  else {
    puStack_4 = (undefined1 *)0x22b2;
    uStack_6 = 0xf034;
    func_0x00029834();
    puStack_4 = (undefined1 *)0x22b2;
    uStack_6 = 0xf03d;
    func_0x00029834();
    puStack_4 = (undefined1 *)0x22b2;
    uStack_6 = 0xf042;
    FUN_28b3_1181();
    if ((bool)uVar2 || (bool)uVar3) {
      puStack_4 = (undefined1 *)0x22b2;
      uStack_6 = 0xf051;
      func_0x00029834();
      puStack_4 = (undefined1 *)0x22b2;
      uStack_6 = 0xf05a;
      func_0x00029834();
      puStack_4 = (undefined1 *)0x22b2;
      uStack_6 = 0xf05f;
      FUN_28b3_1181();
      if ((bool)uVar2) {
        puStack_4 = (undefined1 *)0x7411;
      }
      else {
        puStack_4 = (undefined1 *)param_13;
        uStack_6 = param_12;
        uStack_8 = param_11;
        uStack_a = param_10;
        uStack_c = 0x7418;
        puStack_e = local_34;
        uStack_10 = 0x22b2;
        uStack_12 = 0xf07f;
        FUN_21f2_3454();
        puStack_4 = local_34;
      }
    }
    else {
      puStack_4 = (undefined1 *)0x740a;
    }
  }
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xf08e;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x741e;
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xf09c;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x11b4;
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xf0aa;
  FUN_21f2_2d26();
  if (param_14 == 0) {
    puStack_4 = (undefined1 *)0x118c;
    uStack_6 = param_1;
    uStack_8 = 0x22b2;
    uStack_a = 0xf0d1;
    FUN_21f2_2d26();
    uVar1 = 7;
  }
  else {
    puStack_4 = (undefined1 *)0x1194;
    uStack_6 = param_1;
    uStack_8 = 0x22b2;
    uStack_a = 0xf0be;
    FUN_21f2_2d26();
    uVar1 = 6;
  }
  return uVar1;
}



/* 3ab8:455a  FUN_3ab8_455a  1744 bytes, 0 callers */

void __cdecl16far
FUN_3ab8_455a(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,int *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 local_b8 [4];
  undefined2 local_b4;
  undefined1 local_b2 [4];
  uint local_ae;
  int local_ac;
  int local_aa;
  undefined1 local_a8 [100];
  int local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 *local_3a;
  int local_38;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined1 *puStack_20;
  undefined1 *puStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 *puStack_e;
  undefined2 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  int *local_4;
  
  local_4 = (int *)0x3ab8;
  uVar4 = 0x22b2;
  puStack_6 = (undefined1 *)0xf0e5;
  FUN_21f2_0ebc();
LAB_3ab8_4565:
  local_3a = (undefined2 *)0x0;
  local_ac = *(int *)0x150;
  do {
    local_38 = *param_4;
    local_4 = (int *)0xffff;
    puStack_a = (undefined1 *)0xf106;
    puStack_8 = (undefined1 *)uVar4;
    puStack_6 = (undefined1 *)local_38;
    func_0x000297e6();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xf10b;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xf115;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xf11d;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xf122;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xf12c;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xf134;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xf139;
    func_0x00029d78();
    puStack_20 = (undefined1 *)0x22b2;
    uStack_22 = 0xf143;
    func_0x000299d1();
    puStack_20 = local_a8;
    uStack_22 = 0x22b2;
    uStack_24 = 0xf14c;
    local_b4 = FUN_3ab8_4450();
    puStack_8 = (undefined1 *)0x3;
    puStack_a = (undefined1 *)0x12;
    puStack_c = (undefined2 *)local_a8;
    puStack_e = (undefined2 *)0x22b2;
    uStack_10 = 0xf166;
    puStack_6 = (undefined1 *)local_b4;
    FUN_1000_02b5();
    if (*(int *)0xc22 < 2) {
      *(undefined2 *)0xc22 = 2;
    }
    local_4 = (int *)0x7421;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0xdef;
    puStack_a = (undefined1 *)0xf184;
    FUN_21f2_3454();
    local_4 = (int *)0x117e;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xf194;
    FUN_21f2_2d26();
    local_4 = (int *)0x742c;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xf1a4;
    FUN_21f2_2d26();
    local_4 = (int *)0x119c;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xf1b4;
    FUN_21f2_2d26();
    local_4 = (int *)0x7430;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xf1c4;
    FUN_21f2_2d26();
    local_4 = (int *)0x11a2;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xf1d4;
    FUN_21f2_2d26();
    local_4 = (int *)0x743b;
    puStack_6 = local_a8;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xf1e4;
    FUN_21f2_2d26();
    if (1 < *(byte *)0x123) {
      local_4 = (int *)0x743d;
      puStack_6 = local_a8;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xf1fb;
      FUN_21f2_2d26();
    }
    local_4 = (int *)local_a8;
    puStack_6 = (undefined1 *)0x5;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xf20b;
    FUN_1def_07a4();
    local_4 = &local_44;
    puStack_6 = local_b8;
    puStack_8 = local_b2;
    puStack_a = local_a8;
    puStack_c = local_3a;
    puStack_e = (undefined2 *)0x1bb4;
    uVar4 = 0x1bb4;
    uStack_10 = 0xf228;
    local_ae = FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_ae == 0xffff) {
      local_4 = (int *)0x0;
      puStack_6 = (undefined1 *)0x1bb4;
      puStack_8 = (undefined1 *)0xf246;
      func_0x0000daa6();
      local_4 = (int *)*(undefined2 *)0xcb4;
      puStack_6 = (undefined1 *)*(undefined2 *)0xcb2;
      puStack_8 = (undefined1 *)0x0;
      puStack_a = (undefined1 *)0x3;
      puStack_c = (undefined2 *)0x885;
      puStack_e = (undefined2 *)0xf25b;
      func_0x0000f2cb();
      local_4 = (int *)0xdef;
      puStack_6 = (undefined1 *)0xf263;
      func_0x0000a799();
      uVar2 = 0x885;
      while (local_4 = (int *)*(int *)0x150, local_ac < (int)local_4) {
        puStack_8 = (undefined1 *)0xf26f;
        local_aa = (int)local_4;
        puStack_6 = (undefined1 *)uVar2;
        func_0x000190c7();
        uVar2 = 0x18b3;
      }
      local_3a = (undefined2 *)0x0;
      uVar4 = 0x885;
      puStack_6 = (undefined1 *)0xf287;
      local_ac = (int)local_4;
      local_4 = (int *)uVar2;
      func_0x0000abfa();
    }
    if (local_ae == 1) {
      return;
    }
    while (local_ae == 2) {
      local_42 = *param_3;
      local_40 = param_3[1];
      puStack_6 = (undefined1 *)0xf2b1;
      local_3e = local_42;
      local_3c = local_40;
      local_4 = (int *)uVar4;
      func_0x0001bb4e();
      local_4 = (int *)0x117e;
      puStack_6 = (undefined1 *)0x1bb4;
      puStack_8 = (undefined1 *)0xf2ba;
      func_0x00012276();
      local_4 = (int *)0x7440;
      puStack_6 = (undefined1 *)0x11f2;
      puStack_8 = (undefined1 *)0xf2c4;
      func_0x00012276();
      local_4 = (int *)0x2711;
      puStack_6 = (undefined1 *)0x1a;
      puStack_8 = local_b8;
      puStack_a = local_b2;
      puStack_c = &local_42;
      puStack_e = &local_3e;
      uStack_10 = 0x11f2;
      uVar4 = 0xad;
      uStack_12 = 0xf2e4;
      iVar1 = func_0x000021a4();
      if (iVar1 == -1) break;
      if (*(int *)0x158 != 0) {
        return;
      }
      uVar5 = 0;
      uVar6 = iVar1 == 0;
      if ((bool)uVar6) {
        local_4 = (int *)0xad;
        puStack_6 = (undefined1 *)0xf36a;
        func_0x000297e6();
        local_4 = (int *)0x22b2;
        puStack_6 = (undefined1 *)0xf373;
        func_0x000297e6();
        local_4 = (int *)0x22b2;
        puStack_6 = (undefined1 *)0xf378;
        FUN_28b3_1181();
        if ((bool)uVar5 || (bool)uVar6) {
          local_4 = (int *)0x22b2;
          puStack_6 = (undefined1 *)0xf383;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          puStack_6 = (undefined1 *)0xf38b;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          uVar4 = 0x22b2;
          puStack_6 = (undefined1 *)0xf390;
          FUN_28b3_1181();
          if ((bool)uVar5 || (bool)uVar6) {
            *param_3 = local_3e;
            param_3[1] = local_3c;
            break;
          }
        }
        uVar4 = 0x22b2;
      }
    }
    do {
      do {
        do {
          if (local_ae != 3) goto LAB_3ab8_4982;
          local_42 = *param_1;
          local_40 = param_1[1];
          puStack_6 = (undefined1 *)0xf310;
          local_3e = local_42;
          local_3c = local_40;
          local_4 = (int *)uVar4;
          func_0x0001bb4e();
          local_4 = (int *)0x119c;
          puStack_6 = (undefined1 *)0x1bb4;
          puStack_8 = (undefined1 *)0xf319;
          func_0x00012276();
          local_4 = (int *)0x7447;
          puStack_6 = (undefined1 *)0x11f2;
          puStack_8 = (undefined1 *)0xf323;
          func_0x00012276();
          local_4 = (int *)0x2711;
          puStack_6 = (undefined1 *)0x14;
          puStack_8 = local_b8;
          puStack_a = local_b2;
          puStack_c = &local_42;
          puStack_e = &local_3e;
          uStack_10 = 0x11f2;
          uVar4 = 0xad;
          uStack_12 = 0xf343;
          iVar1 = func_0x000021a4();
          if (iVar1 == -1) goto LAB_3ab8_4982;
          if (*(int *)0x158 != 0) {
            return;
          }
          uVar5 = 0;
          uVar6 = iVar1 == 0;
        } while (!(bool)uVar6);
        local_4 = (int *)0xad;
        puStack_6 = (undefined1 *)0xf3be;
        func_0x000297e6();
        local_4 = (int *)0x22b2;
        puStack_6 = (undefined1 *)0xf3c7;
        func_0x000297e6();
        local_4 = (int *)0x22b2;
        uVar4 = 0x22b2;
        puStack_6 = (undefined1 *)0xf3cc;
        FUN_28b3_1181();
      } while (!(bool)uVar5 && !(bool)uVar6);
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf3d6;
      func_0x000297e6();
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf3df;
      func_0x000297e6();
      local_4 = (int *)0x22b2;
      uVar4 = 0x22b2;
      puStack_6 = (undefined1 *)0xf3e4;
      FUN_28b3_1181();
    } while ((bool)uVar5);
    *param_1 = local_3e;
    param_1[1] = local_3c;
    local_4 = (int *)0x22b2;
    puStack_6 = (undefined1 *)0xf400;
    func_0x00029834();
    local_4 = (int *)0x22b2;
    puStack_6 = (undefined1 *)0xf408;
    func_0x000297e6();
    local_4 = (int *)0x22b2;
    puStack_6 = (undefined1 *)0xf40d;
    func_0x00029d78();
    local_4 = (int *)0x22b2;
    puStack_6 = (undefined1 *)0xf412;
    FUN_28b3_1181();
    if ((bool)uVar5 || (bool)uVar6) {
      *param_4 = 0;
    }
    else {
      *param_4 = 1;
    }
    local_4 = (int *)0x22b2;
    puStack_6 = (undefined1 *)0xf42d;
    func_0x00029834();
    local_4 = (int *)0x22b2;
    puStack_6 = (undefined1 *)0xf435;
    func_0x000297e6();
    local_4 = (int *)0x22b2;
    puStack_6 = (undefined1 *)0xf43a;
    FUN_28b3_1181();
    if ((bool)uVar5) {
LAB_3ab8_48d4:
      uVar4 = 0x22b2;
    }
    else {
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf445;
      func_0x00029834();
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf44d;
      func_0x000297e6();
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf452;
      FUN_28b3_1181();
      if (!(bool)uVar5 && !(bool)uVar6) goto LAB_3ab8_48d4;
      local_4 = (int *)0x11b4;
      puStack_6 = local_a8;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xf465;
      FUN_21f2_3454();
      local_4 = (int *)0x744e;
      puStack_6 = local_a8;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xf475;
      FUN_21f2_2d26();
      local_4 = (int *)0x118c;
      puStack_6 = local_a8;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xf485;
      FUN_21f2_2d26();
      local_4 = (int *)0x7451;
      puStack_6 = local_a8;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xf495;
      FUN_21f2_2d26();
      local_4 = (int *)0x1194;
      puStack_6 = local_a8;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xf4a5;
      FUN_21f2_2d26();
      local_4 = (int *)0x7455;
      puStack_6 = local_a8;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xf4b5;
      FUN_21f2_2d26();
      local_4 = (int *)local_a8;
      puStack_6 = (undefined1 *)0x2;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xf4c5;
      FUN_1def_07a4();
      local_4 = &local_44;
      puStack_6 = local_b8;
      puStack_8 = local_b2;
      puStack_a = local_a8;
      puStack_c = (undefined2 *)0x1;
      puStack_e = (undefined2 *)0x1bb4;
      uVar4 = 0x1bb4;
      uStack_10 = 0xf4e3;
      iVar1 = FUN_1def_0904();
      if (iVar1 == 1) {
        *param_4 = 0;
      }
      if (iVar1 == 2) {
        *param_4 = 1;
      }
    }
LAB_3ab8_4982:
    uVar5 = local_ae < 4;
    uVar6 = local_ae == 4;
    if ((bool)uVar6) {
      puStack_6 = (undefined1 *)0xf512;
      local_4 = (int *)uVar4;
      func_0x00029834();
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf51a;
      func_0x000297e6();
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf51f;
      func_0x00029ae7();
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf524;
      func_0x00029d78();
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf529;
      FUN_28b3_1181();
      if ((bool)uVar5) {
        uVar2 = *(undefined2 *)0xa8b8;
        uVar3 = *(undefined2 *)0xa8ba;
      }
      else {
        local_4 = (int *)0x22b2;
        puStack_6 = (undefined1 *)0xf53d;
        func_0x00029834();
        local_4 = (int *)0x22b2;
        puStack_6 = (undefined1 *)0xf545;
        func_0x000297e6();
        local_4 = (int *)0x22b2;
        puStack_6 = (undefined1 *)0xf54a;
        func_0x00029d78();
        local_4 = (int *)0x22b2;
        puStack_6 = (undefined1 *)0xf54f;
        FUN_28b3_1181();
        if ((bool)uVar5) {
          uVar2 = *(undefined2 *)0xa7fc;
          uVar3 = *(undefined2 *)0xa7fe;
        }
        else {
          local_4 = (int *)0x22b2;
          puStack_6 = (undefined1 *)0xf563;
          func_0x00029834();
          local_4 = (int *)0x22b2;
          puStack_6 = (undefined1 *)0xf56b;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          puStack_6 = (undefined1 *)0xf570;
          func_0x00029d78();
          local_4 = (int *)0x22b2;
          uVar4 = 0x22b2;
          puStack_6 = (undefined1 *)0xf575;
          FUN_28b3_1181();
          if ((bool)uVar5 || (bool)uVar6) goto LAB_3ab8_4a06;
          uVar2 = *(undefined2 *)0xa8bc;
          uVar3 = *(undefined2 *)0xa8be;
        }
      }
      uVar4 = 0x22b2;
      *param_2 = uVar2;
      param_2[1] = uVar3;
    }
LAB_3ab8_4a06:
    if (local_ae == 5) {
      do {
        local_4 = (int *)0x11a2;
        puStack_6 = local_a8;
        puStack_a = (undefined1 *)0xf59e;
        puStack_8 = (undefined1 *)uVar4;
        FUN_21f2_3454();
        local_4 = (int *)0x7458;
        puStack_6 = local_a8;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xf5ae;
        FUN_21f2_2d26();
        local_4 = (int *)0x302;
        puStack_6 = local_a8;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xf5be;
        FUN_21f2_2d26();
        local_4 = &local_44;
        puStack_6 = local_b8;
        puStack_8 = local_b2;
        puStack_a = local_a8;
        puStack_c = (undefined2 *)0x1;
        puStack_e = (undefined2 *)0x22b2;
        uVar4 = 0x1bb4;
        uStack_10 = 0xf5dc;
        iVar1 = FUN_1def_0904();
        if (*(int *)0x158 != 0) {
          return;
        }
        if (iVar1 == -1) goto LAB_3ab8_4565;
      } while (local_44 == 0);
      local_ac = *(int *)0x150;
      local_4 = (int *)0x0;
      puStack_6 = (undefined1 *)0x1bb4;
      puStack_8 = (undefined1 *)0xf609;
      func_0x0000daa6();
      local_4 = (int *)local_38;
      puStack_6 = (undefined1 *)0x885;
      puStack_8 = (undefined1 *)0xf615;
      func_0x000297e6();
      puStack_6 = (undefined1 *)0x22b2;
      puStack_8 = (undefined1 *)0xf61a;
      func_0x00029d78();
      puStack_e = (undefined2 *)0x22b2;
      uStack_10 = 0xf624;
      func_0x000299d1();
      puStack_e = (undefined2 *)0x22b2;
      uStack_10 = 0xf62c;
      func_0x000297e6();
      puStack_e = (undefined2 *)0x22b2;
      uStack_10 = 0xf631;
      func_0x00029d78();
      uStack_16 = 0x22b2;
      uStack_18 = 0xf63b;
      func_0x000299d1();
      uStack_16 = 0x22b2;
      uStack_18 = 0xf643;
      func_0x000297e6();
      uStack_16 = 0x22b2;
      uStack_18 = 0xf648;
      func_0x00029d78();
      puStack_1e = (undefined1 *)0x22b2;
      puStack_20 = (undefined1 *)0xf652;
      func_0x000299d1();
      puStack_1e = local_a8;
      puStack_20 = (undefined1 *)0x22b2;
      uStack_22 = 0xf65b;
      FUN_3ab8_4450();
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf667;
      func_0x000297e6();
      puStack_c = (undefined2 *)0x22b2;
      puStack_e = (undefined2 *)0xf671;
      func_0x000299d1();
      puStack_c = (undefined2 *)0x22b2;
      puStack_e = (undefined2 *)0xf67a;
      func_0x000297e6();
      puStack_c = (undefined2 *)0x22b2;
      puStack_e = (undefined2 *)0xf683;
      func_0x00029bb5();
      puStack_c = (undefined2 *)0x22b2;
      puStack_e = (undefined2 *)0xf688;
      func_0x00029d78();
      uStack_14 = 0x22b2;
      uStack_16 = 0xf692;
      func_0x000299d1();
      uStack_14 = 0x22b2;
      uStack_16 = 0xf69b;
      func_0x000297e6();
      uStack_1c = 0x22b2;
      puStack_1e = (undefined1 *)0xf6a5;
      func_0x000299d1();
      uStack_1c = 0x22b2;
      puStack_1e = (undefined1 *)0xf6ae;
      func_0x000297e6();
      uStack_1c = 0x22b2;
      puStack_1e = (undefined1 *)0xf6b3;
      func_0x00029d78();
      uStack_24 = 0x22b2;
      uStack_26 = 0xf6bd;
      func_0x000299d1();
      uStack_24 = 0x22b2;
      uVar4 = 0x1bb4;
      uStack_26 = 0xf6c2;
      FUN_1def_043a();
      local_4 = (int *)local_a8;
      puStack_6 = (undefined1 *)0x3;
      puStack_8 = (undefined1 *)0x1bb4;
      puStack_a = (undefined1 *)0xf6d2;
      FUN_3ab8_37ef();
      local_3a = (undefined2 *)0x1;
    }
    do {
      do {
        do {
          if (local_ae != 6) goto LAB_3ab8_4c06;
          local_42 = *param_2;
          local_40 = param_2[1];
          puStack_6 = (undefined1 *)0xf6fc;
          local_3e = local_42;
          local_3c = local_40;
          local_4 = (int *)uVar4;
          func_0x0001bb4e();
          local_4 = (int *)0x745e;
          puStack_6 = (undefined1 *)0x1bb4;
          puStack_8 = (undefined1 *)0xf705;
          func_0x00012276();
          local_4 = (int *)0x2711;
          puStack_6 = (undefined1 *)0x14;
          puStack_8 = local_b8;
          puStack_a = local_b2;
          puStack_c = &local_42;
          puStack_e = &local_3e;
          uStack_10 = 0x11f2;
          uVar4 = 0xad;
          uStack_12 = 0xf725;
          iVar1 = func_0x000021a4();
          if (iVar1 == -1) goto LAB_3ab8_4c06;
          if (*(int *)0x158 != 0) {
            return;
          }
          uVar5 = 0;
          uVar6 = iVar1 == 0;
        } while (!(bool)uVar6);
        local_4 = (int *)0xad;
        puStack_6 = (undefined1 *)0xf744;
        func_0x00029834();
        local_4 = (int *)0x22b2;
        puStack_6 = (undefined1 *)0xf74c;
        func_0x000297e6();
        local_4 = (int *)0x22b2;
        puStack_6 = (undefined1 *)0xf751;
        func_0x00029d78();
        local_4 = (int *)0x22b2;
        uVar4 = 0x22b2;
        puStack_6 = (undefined1 *)0xf756;
        FUN_28b3_1181();
      } while ((bool)uVar5 || (bool)uVar6);
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf761;
      func_0x00029834();
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf769;
      func_0x000297e6();
      local_4 = (int *)0x22b2;
      puStack_6 = (undefined1 *)0xf76e;
      func_0x00029d78();
      local_4 = (int *)0x22b2;
      uVar4 = 0x22b2;
      puStack_6 = (undefined1 *)0xf773;
      FUN_28b3_1181();
    } while (!(bool)uVar5);
    *param_2 = local_3e;
    param_2[1] = local_3c;
LAB_3ab8_4c06:
    if (local_ae == 7) {
      if (*param_4 == 0) {
        *param_4 = 1;
      }
      else {
        *param_4 = 0;
      }
    }
  } while( true );
}



/* 3ab8:4c2a  FUN_3ab8_4c2a  40 bytes, 0 callers */

void __cdecl16far FUN_3ab8_4c2a(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_21f2_0ebc();
  FUN_21f2_3454(param_1,0x746a,param_2,0x302,0x2f0,param_3);
  return;
}



/* 3ab8:4c52  FUN_3ab8_4c52  62 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_4c52(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 auStack_14 [2];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  puStack_6 = (undefined1 *)0xf7dd;
  FUN_21f2_0ebc();
  if ((*(byte *)0x123 < 0xc) || ((*(int *)0x148 == param_1 && (*(int *)0x14a == param_2)))) {
    uVar1 = 0;
  }
  else {
    uStack_4 = 0x22b2;
    puStack_6 = (undefined1 *)0xf7ff;
    func_0x0000c3ca();
    uStack_4 = 0;
    puStack_6 = (undefined1 *)0x885;
    uStack_8 = 0xf807;
    func_0x0000daa6();
    local_16 = 0x23;
    local_15 = 0x6c;
    auStack_14[0] = 0;
    uStack_4 = 0x885;
    puStack_6 = (undefined1 *)0xf81d;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    puStack_6 = (undefined1 *)0xf822;
    func_0x00029d78();
    uStack_c = 0x22b2;
    puStack_e = (undefined1 *)0xf82c;
    func_0x000299d1();
    uStack_c = 0x7483;
    puStack_e = auStack_14;
    uStack_10 = 0x22b2;
    uStack_12 = 0xf839;
    FUN_21f2_3454();
    puStack_e = (undefined1 *)((uint)puStack_e & 0xff00);
    uStack_4 = *(undefined2 *)0xb310;
    puStack_6 = &local_16;
    uStack_8 = 0x22b2;
    uStack_a = 0xf84d;
    FUN_10ad_20e9();
    uStack_4 = 0x11f2;
    puStack_6 = (undefined1 *)0xf854;
    func_0x0000b6ea();
    uVar1 = 1;
  }
  return uVar1;
}



/* 3ab8:4c91  FUN_3ab8_4c91  74 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_4c91(void)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 in_AL;
  byte in_CL;
  undefined2 in_DX;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  out(in_DX,in_AL);
  pbVar2 = (byte *)(unaff_DI + -0x1fe2);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + in_CL;
  piVar1 = (int *)(unaff_BP + unaff_SI + 0x6cc7);
  *piVar1 = *piVar1 + in_BX + (uint)CARRY1(bVar3,in_CL);
  func_0x00029d78(0x3ab8);
  func_0x000299d1(0x22b2);
  FUN_21f2_3454(unaff_BP + -0x12,0x7483);
  *(undefined1 *)(unaff_BP + -0xc) = 0;
  FUN_10ad_20e9(0x22b2,unaff_BP + -0x14,*(undefined2 *)0xb310);
  func_0x0000b6ea(0x11f2);
  return 1;
}



/* 3000:f85b  FUN_3000_f85b  513 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0003fb0a) */
/* WARNING: Removing unreachable block (ram,0x0003fb67) */

void FUN_3000_f85b(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined2 *puVar15;
  undefined2 auStack_10e [18];
  undefined1 local_ea [8];
  undefined4 local_e2;
  int iStack_de;
  int local_d8;
  undefined2 local_d6;
  undefined2 local_d4;
  undefined1 local_d2 [4];
  undefined1 uStack_ce;
  int local_6e;
  int local_6c;
  undefined1 local_5c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  
  uVar9 = 0x22b2;
  FUN_21f2_0ebc();
  lVar14 = 0;
  *(undefined1 *)0x11d6 = 0;
  if (0x13 < *(byte *)0x123) {
    bVar5 = func_0x0000db57();
    if ((bVar5 & 2) == 2) {
      *(byte *)0x11d6 = *(byte *)0x11d6 | 2;
    }
    uVar9 = 0x885;
    bVar5 = func_0x0000db57();
    if ((bVar5 & 4) == 4) {
      *(byte *)0x11d6 = *(byte *)0x11d6 | 4;
    }
  }
  local_5c = 0;
  for (local_6e = 1; local_6e <= *(int *)0x152; local_6e = local_6e + 1) {
    uVar9 = 0;
    puStack_c = (undefined1 *)0xf8ad;
    uVar13 = func_0x000003ef();
    pbVar1 = (byte *)((int)uVar13 + 10);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  local_e2._0_2_ = 1;
  local_e2._2_2_ = 0;
  puStack_c = (undefined1 *)uVar9;
  while( true ) {
    if ((*(int *)0x14a < local_e2._2_2_) ||
       ((*(int *)0x14a <= local_e2._2_2_ && (*(uint *)0x148 < (uint)local_e2)))) break;
    puStack_e = (undefined1 *)0xf8fc;
    uVar13 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar13 + 0x14);
    *pbVar1 = *pbVar1 & 0xfd;
    bVar11 = 0xfffe < (uint)local_e2;
    local_e2._0_2_ = (uint)local_e2 + 1;
    local_e2._2_2_ = local_e2._2_2_ + (uint)bVar11;
    puStack_c = (undefined1 *)0;
  }
  local_e2._0_2_ = 1;
  local_e2._2_2_ = 0;
  uVar9 = puStack_c;
  while( true ) {
    if ((*(int *)0x14e < local_e2._2_2_) ||
       ((*(int *)0x14e <= local_e2._2_2_ && (*(uint *)0x14c < (uint)local_e2)))) break;
    puStack_e = (undefined1 *)0xf943;
    puStack_c = (undefined1 *)uVar9;
    uVar13 = func_0x00000271();
    pbVar1 = (byte *)((int)uVar13 + 0x1e);
    *pbVar1 = *pbVar1 & 0xfd;
    bVar11 = 0xfffe < (uint)local_e2;
    local_e2._0_2_ = (uint)local_e2 + 1;
    local_e2._2_2_ = local_e2._2_2_ + (uint)bVar11;
    uVar9 = 0;
  }
  for (local_6e = 1; local_6e <= *(int *)0x150; local_6e = local_6e + 1) {
    uVar9 = 0;
    puStack_c = (undefined1 *)0xf95f;
    uVar13 = func_0x00000398();
    pbVar1 = (byte *)((int)uVar13 + 0x16);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  *(undefined1 *)0x11d7 = 0;
  local_d6 = *(undefined2 *)0xa8d4;
  local_d4 = *(undefined2 *)0xa8d6;
  do {
    while( true ) {
      while( true ) {
        local_5c = 0;
        puStack_c = (undefined1 *)0x0;
        puStack_e = (undefined1 *)0x3;
        uStack_12 = 0xf9a0;
        uStack_10 = uVar9;
        func_0x0000f2cb();
        func_0x0000a799();
        puStack_c = (undefined1 *)0x885;
        puStack_e = (undefined1 *)0xf9b6;
        FUN_21f2_3454();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xf9c6;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xf9d6;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        uVar9 = 0x1bb4;
        puStack_e = (undefined1 *)0xf9e6;
        FUN_1def_07a4();
        if (lVar14 != 0) {
          if (*(int *)0xc22 < 1) {
            *(undefined2 *)0xc22 = 1;
          }
          puStack_c = (undefined1 *)0x2;
          puStack_e = (undefined1 *)0x47;
          uStack_10 = 0x11cc;
          uStack_12 = 0x1bb4;
          uVar9 = 0xdef;
          uStack_14 = 0xfa13;
          FUN_1000_02b5();
        }
        puStack_c = local_ea;
        puStack_e = local_d2;
        uStack_10 = 9999;
        uStack_14 = 0xfa32;
        uStack_12 = uVar9;
        local_d8 = FUN_1def_0904();
        if (*(int *)0x158 != 0) {
          halt_baddata();
        }
        if (local_d8 == -1) {
          puStack_c = (undefined1 *)0xfa50;
          func_0x00008095();
          halt_baddata();
        }
        if (local_d8 != 5) {
          FUN_3ab8_5176();
          return;
        }
        puStack_c = (undefined1 *)0x1bb4;
        puStack_e = (undefined1 *)0xfa6a;
        func_0x00024c86();
        uStack_ce = 0;
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xfa7f;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xfa8f;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xfa9f;
        FUN_21f2_2d26();
        if (lVar14 != 0) {
          puStack_c = (undefined1 *)0x22b2;
          puStack_e = (undefined1 *)0xfab7;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          puStack_e = (undefined1 *)0xfac7;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          puStack_e = (undefined1 *)0xfad7;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          puStack_e = (undefined1 *)0xfae7;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          puStack_e = (undefined1 *)0xfaf7;
          FUN_1def_07a4();
        }
        uVar10 = 0x7a6;
        puStack_c = (undefined1 *)0xfb01;
        func_0x00008095();
        if (0 < lVar14) {
          puStack_c = (undefined1 *)0x7a6;
          uVar10 = 0;
          puStack_e = (undefined1 *)0xfb1b;
          uVar13 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar13 + 0x14);
          *pbVar1 = *pbVar1 & 0xfd;
        }
        puStack_c = local_ea;
        puStack_e = local_d2;
        uStack_10 = 1;
        uVar9 = 0x1bb4;
        uStack_14 = 0xfb42;
        uStack_12 = uVar10;
        iStack_de = FUN_1def_0904();
        local_5c = 0;
        if (*(int *)0x158 != 0) {
          halt_baddata();
        }
        if (iStack_de != -1) break;
        if (0 < lVar14) {
          puStack_c = (undefined1 *)0x1bb4;
          puStack_e = (undefined1 *)0xfb85;
          local_e2 = lVar14;
          uVar13 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar13 + 0x14);
          *pbVar1 = *pbVar1 | 2;
          puStack_c = (undefined1 *)0xfb98;
          func_0x0000daa6();
          puStack_c = (undefined1 *)0x1;
          puStack_e = (undefined1 *)0x885;
          uVar9 = 0x7a6;
          uStack_10 = 0xfba8;
          func_0x00007d9b();
          *(undefined2 *)0xbc2 = 1;
        }
      }
      if (iStack_de != 1) break;
      lVar14 = 0;
    }
    if (local_6c == 0) {
      FUN_3ab8_4edc();
      return;
    }
    *(undefined1 *)0xb8c = 1;
    func_0x000297e6();
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xfbea;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xfbf3;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xfbf8;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xfc02;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xfc07;
    lVar14 = FUN_13bf_39a0();
    uVar12 = &stack0x0000 == (undefined1 *)0x6;
    *(undefined1 *)0xb8c = 0;
    puStack_c = (undefined1 *)0x11f2;
    puStack_e = (undefined1 *)0xfc1e;
    local_e2 = lVar14;
    puVar15 = (undefined2 *)func_0x0000013f();
    puVar7 = (undefined2 *)puVar15;
    puVar8 = auStack_10e;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
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
        local_e2 = 0;
      }
    }
    if (local_e2 < 0) {
      FUN_3ab8_4edc();
      return;
    }
    if ((local_e2 < 0x10000) && ((uint)local_e2 == 0)) {
      FUN_3ab8_4edc();
      return;
    }
    puStack_c = (undefined1 *)0xfc8b;
    func_0x00008095();
    puStack_c = (undefined1 *)0x7a6;
    puStack_e = (undefined1 *)0xfca0;
    iVar6 = FUN_3ab8_05fa();
    lVar4 = local_e2;
    lVar14 = 0;
    if (iVar6 == 0) {
      puStack_c = (undefined1 *)0x7a6;
      puStack_e = (undefined1 *)0xfcbb;
      uVar13 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar13 + 0x14);
      *pbVar1 = *pbVar1 | 2;
      puStack_c = (undefined1 *)0xfcce;
      func_0x0000daa6();
      puStack_c = (undefined1 *)0x1;
      puStack_e = (undefined1 *)0x885;
      uStack_10 = 0xfce0;
      func_0x00007d9b();
      *(undefined2 *)0xbc2 = 1;
      lVar14 = lVar4;
    }
    uVar9 = 0x7a6;
  } while (*(int *)0x158 == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 3ab8:4edc  FUN_3ab8_4edc  225 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_4edc(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int unaff_BP;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  int iVar13;
  
  uVar8 = 0x3ab8;
  do {
    func_0x00024c86(uVar8,unaff_BP + -0xd0,0x11cc);
    *(undefined1 *)(unaff_BP + -0xcc) = 0;
    FUN_21f2_2d26(0x22b2,unaff_BP + -0xd0,0x74c0);
    FUN_21f2_2d26(0x22b2,unaff_BP + -0xd0,0x951);
    uVar8 = 0x22b2;
    FUN_21f2_2d26(0x22b2,unaff_BP + -0xd0,0x302);
    if (*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) {
      FUN_21f2_2d26(0x22b2,unaff_BP + -0xd0,0x951);
      FUN_21f2_2d26(0x22b2,unaff_BP + -0xd0,0x98a);
      FUN_21f2_2d26(0x22b2,unaff_BP + -0xd0,0x92e);
      FUN_21f2_2d26(0x22b2,unaff_BP + -0xd0,0x98a);
      uVar8 = 0x1bb4;
      FUN_1def_07a4(0x22b2,1,unaff_BP + -0xd0);
    }
    uVar9 = 0x7a6;
    func_0x00008095(uVar8,0);
    if ((-1 < *(int *)(unaff_BP + -2)) &&
       ((0 < *(int *)(unaff_BP + -2) || (*(int *)(unaff_BP + -4) != 0)))) {
      uVar9 = 0;
      uVar11 = func_0x0000013f(0x7a6,*(undefined2 *)(unaff_BP + -4),*(undefined2 *)(unaff_BP + -2));
      pbVar1 = (byte *)((int)uVar11 + 0x14);
      *pbVar1 = *pbVar1 & 0xfd;
    }
    iVar4 = unaff_BP + -0xe8;
    iVar13 = unaff_BP + -0xd0;
    uVar8 = 0x1bb4;
    iVar5 = FUN_1def_0904(uVar9,1,iVar13,iVar4,unaff_BP + -0xf0,unaff_BP + -0x6a);
    *(int *)(unaff_BP + -0xdc) = iVar5;
    *(undefined1 *)(unaff_BP + -0x5a) = 0;
    if (*(int *)0x158 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar5 == -1) {
      if ((-1 < *(int *)(unaff_BP + -2)) &&
         ((0 < *(int *)(unaff_BP + -2) || (*(int *)(unaff_BP + -4) != 0)))) {
        uVar8 = *(undefined2 *)(unaff_BP + -4);
        uVar9 = *(undefined2 *)(unaff_BP + -2);
        *(undefined2 *)(unaff_BP + -0xe0) = uVar8;
        *(undefined2 *)(unaff_BP + -0xde) = uVar9;
        uVar11 = func_0x0000013f(0x1bb4,uVar8,uVar9);
        pbVar1 = (byte *)((int)uVar11 + 0x14);
        *pbVar1 = *pbVar1 | 2;
        func_0x0000daa6(0,0);
        uVar8 = 0x7a6;
        func_0x00007d9b(0x885,1,*(undefined2 *)(unaff_BP + -4),*(undefined2 *)(unaff_BP + -2));
        *(undefined2 *)0xbc2 = 1;
      }
    }
    else if (iVar5 == 1) {
      *(undefined2 *)(unaff_BP + -2) = 0;
      *(undefined2 *)(unaff_BP + -4) = 0;
    }
    else {
      if (*(int *)(unaff_BP + -0x6a) == 0) {
        FUN_3ab8_4edc();
        return;
      }
      *(undefined1 *)0xb8c = 1;
      func_0x000297e6(0x1bb4);
      uVar8 = 0xfbe0;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2,iVar13,iVar4,uVar8);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      uVar11 = FUN_13bf_39a0(0x22b2);
      uVar10 = &stack0x0000 == (undefined1 *)0x0;
      *(undefined2 *)(unaff_BP + -0xe0) = (int)uVar11;
      *(undefined2 *)(unaff_BP + -0xde) = (int)((ulong)uVar11 >> 0x10);
      *(undefined1 *)0xb8c = 0;
      puVar12 = (undefined2 *)func_0x0000013f(0x11f2,uVar11);
      puVar6 = (undefined2 *)puVar12;
      puVar7 = (undefined2 *)(unaff_BP + -0x10c);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar3 = puVar7;
        puVar7 = puVar7 + 1;
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar3 = *puVar2;
      }
      func_0x000297e6(0);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181();
      if ((bool)uVar10) {
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181();
        if ((bool)uVar10) {
          *(undefined2 *)(unaff_BP + -0xde) = 0;
          *(undefined2 *)(unaff_BP + -0xe0) = 0;
        }
      }
      if (*(int *)(unaff_BP + -0xde) < 0) {
        FUN_3ab8_4edc();
        return;
      }
      if ((*(int *)(unaff_BP + -0xde) < 1) && (*(int *)(unaff_BP + -0xe0) == 0)) {
        FUN_3ab8_4edc();
        return;
      }
      func_0x00008095(0x22b2,0);
      *(undefined2 *)(unaff_BP + -2) = 0;
      *(undefined2 *)(unaff_BP + -4) = 0;
      iVar4 = FUN_3ab8_05fa(*(undefined2 *)(unaff_BP + -0xe0),*(undefined2 *)(unaff_BP + -0xde));
      if (iVar4 == 0) {
        uVar8 = *(undefined2 *)(unaff_BP + -0xe0);
        uVar9 = *(undefined2 *)(unaff_BP + -0xde);
        *(undefined2 *)(unaff_BP + -4) = uVar8;
        *(undefined2 *)(unaff_BP + -2) = uVar9;
        uVar11 = func_0x0000013f(0x7a6,uVar8,uVar9);
        pbVar1 = (byte *)((int)uVar11 + 0x14);
        *pbVar1 = *pbVar1 | 2;
        func_0x0000daa6(0,0);
        func_0x00007d9b(0x885,1,*(undefined2 *)(unaff_BP + -0xe0),*(undefined2 *)(unaff_BP + -0xde))
        ;
        *(undefined2 *)0xbc2 = 1;
      }
      uVar8 = 0x7a6;
      if (*(int *)0x158 != 0) {
        halt_baddata();
      }
    }
    *(undefined1 *)(unaff_BP + -0x5a) = 0;
    func_0x0000f2cb(uVar8,3,0,*(undefined2 *)0xcb2,*(undefined2 *)0xcb4);
    func_0x0000a799(0xdef);
    FUN_21f2_3454(unaff_BP + -0xd0,0x748a);
    FUN_21f2_2d26(0x22b2,unaff_BP + -0xd0,0x11cc);
    FUN_21f2_2d26(0x22b2,unaff_BP + -0xd0,0x98a);
    uVar9 = 0x1bb4;
    FUN_1def_07a4(0x22b2,5,unaff_BP + -0xd0);
    if (*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) {
      if (*(int *)0xc22 < 1) {
        *(undefined2 *)0xc22 = 1;
      }
      uVar9 = 0xdef;
      FUN_1000_02b5(0x11cc,0x47,2,2,0xffff);
    }
    uVar8 = 0x1bb4;
    iVar4 = FUN_1def_0904(uVar9,9999,unaff_BP + -0xd0,unaff_BP + -0xe8,unaff_BP + -0xf0,
                          unaff_BP + -0x6a);
    *(int *)(unaff_BP + -0xd6) = iVar4;
    if (*(int *)0x158 != 0) {
      halt_baddata();
    }
    if (iVar4 == -1) {
      func_0x00008095(0x1bb4,0);
      halt_baddata();
    }
    if (iVar4 != 5) {
      FUN_3ab8_5176();
      return;
    }
  } while( true );
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  440 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_4fbd(void)

{
  byte *pbVar1;
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
  undefined4 uVar9;
  undefined2 *puVar10;
  
  uVar7 = 0x3ab8;
  do {
    iVar4 = FUN_1def_0904(uVar7);
    *(int *)(unaff_BP + -0xdc) = iVar4;
    *(undefined1 *)(unaff_BP + -0x5a) = 0;
    if (*(int *)0x158 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar4 == -1) {
      if ((-1 < *(int *)(unaff_BP + -2)) &&
         ((0 < *(int *)(unaff_BP + -2) || (*(int *)(unaff_BP + -4) != 0)))) {
        uVar7 = *(undefined2 *)(unaff_BP + -2);
        *(undefined2 *)(unaff_BP + -0xe0) = *(undefined2 *)(unaff_BP + -4);
        *(undefined2 *)(unaff_BP + -0xde) = uVar7;
        uVar9 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar9 + 0x14);
        *pbVar1 = *pbVar1 | 2;
        func_0x0000daa6();
        func_0x00007d9b();
        *(undefined2 *)0xbc2 = 1;
      }
    }
    else if (iVar4 == 1) {
      *(undefined2 *)(unaff_BP + -2) = 0;
      *(undefined2 *)(unaff_BP + -4) = 0;
    }
    else {
      if (*(int *)(unaff_BP + -0x6a) == 0) {
        FUN_3ab8_4edc();
        return;
      }
      *(undefined1 *)0xb8c = 1;
      func_0x000297e6();
      func_0x00029d78();
      func_0x000299d1();
      func_0x000297e6();
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      uVar9 = FUN_13bf_39a0(0x22b2);
      uVar8 = &stack0x0000 == (undefined1 *)0xfff6;
      *(undefined2 *)(unaff_BP + -0xe0) = (int)uVar9;
      *(undefined2 *)(unaff_BP + -0xde) = (int)((ulong)uVar9 >> 0x10);
      *(undefined1 *)0xb8c = 0;
      puVar10 = (undefined2 *)func_0x0000013f();
      puVar5 = (undefined2 *)puVar10;
      puVar6 = (undefined2 *)(unaff_BP + -0x10c);
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar3 = *puVar2;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar8) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar8) {
          *(undefined2 *)(unaff_BP + -0xde) = 0;
          *(undefined2 *)(unaff_BP + -0xe0) = 0;
        }
      }
      if (*(int *)(unaff_BP + -0xde) < 0) {
        FUN_3ab8_4edc();
        return;
      }
      if ((*(int *)(unaff_BP + -0xde) < 1) && (*(int *)(unaff_BP + -0xe0) == 0)) {
        FUN_3ab8_4edc();
        return;
      }
      func_0x00008095();
      *(undefined2 *)(unaff_BP + -2) = 0;
      *(undefined2 *)(unaff_BP + -4) = 0;
      iVar4 = FUN_3ab8_05fa();
      if (iVar4 == 0) {
        uVar7 = *(undefined2 *)(unaff_BP + -0xde);
        *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xe0);
        *(undefined2 *)(unaff_BP + -2) = uVar7;
        uVar9 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar9 + 0x14);
        *pbVar1 = *pbVar1 | 2;
        func_0x0000daa6();
        func_0x00007d9b();
        *(undefined2 *)0xbc2 = 1;
      }
      if (*(int *)0x158 != 0) {
        halt_baddata();
      }
    }
    *(undefined1 *)(unaff_BP + -0x5a) = 0;
    func_0x0000f2cb();
    func_0x0000a799();
    FUN_21f2_3454();
    FUN_21f2_2d26();
    FUN_21f2_2d26();
    uVar7 = 0x1bb4;
    FUN_1def_07a4();
    if (*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) {
      if (*(int *)0xc22 < 1) {
        *(undefined2 *)0xc22 = 1;
      }
      uVar7 = 0xdef;
      FUN_1000_02b5();
    }
    iVar4 = FUN_1def_0904(uVar7);
    *(int *)(unaff_BP + -0xd6) = iVar4;
    if (*(int *)0x158 != 0) {
      halt_baddata();
    }
    if (iVar4 == -1) {
      func_0x00008095();
      halt_baddata();
    }
    if (iVar4 != 5) {
      FUN_3ab8_5176();
      return;
    }
    func_0x00024c86();
    *(undefined1 *)(unaff_BP + -0xcc) = 0;
    FUN_21f2_2d26();
    FUN_21f2_2d26();
    FUN_21f2_2d26();
    if (*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) {
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_1def_07a4();
    }
    uVar7 = 0x7a6;
    func_0x00008095();
    if ((-1 < *(int *)(unaff_BP + -2)) &&
       ((0 < *(int *)(unaff_BP + -2) || (*(int *)(unaff_BP + -4) != 0)))) {
      uVar7 = 0;
      uVar9 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar9 + 0x14);
      *pbVar1 = *pbVar1 & 0xfd;
    }
  } while( true );
}



/* 3ab8:5176  FUN_3ab8_5176  185 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */

int FUN_3ab8_5176(void)

{
  int *piVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  int iVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  int iVar10;
  undefined2 uVar11;
  int iVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  int iStack_2a;
  int iStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  int iStack_1e;
  int iStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  if (*(int *)(unaff_BP + -0xd6) != 1) {
    iVar6 = FUN_3ab8_52c1();
    return iVar6;
  }
  iStack_4 = *(undefined2 *)0xcb2;
  iStack_6 = 0;
  iStack_8 = 3;
  iStack_a = 0x3ab8;
  iStack_c = 0xfd14;
  func_0x0000f2cb();
  iStack_4 = 0xfd1c;
  func_0x0000a799();
  iStack_4 = 0x885;
  uVar9 = 0x7a6;
  iStack_6 = 0xfd24;
  func_0x00008095();
  if (*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) {
    iStack_4 = *(undefined2 *)(unaff_BP + -4);
    iStack_6 = 0x7a6;
    uVar9 = 0;
    iStack_8 = 0xfd38;
    uVar15 = func_0x0000013f();
    pbVar2 = (byte *)((int)uVar15 + 0x14);
    *pbVar2 = *pbVar2 & 0xfd;
  }
  *(undefined2 *)(unaff_BP + -2) = 0;
  *(undefined2 *)(unaff_BP + -4) = 0;
  *(undefined1 *)(unaff_BP + -0x5a) = 0;
  iStack_4 = unaff_BP + -0xd0;
  iStack_8 = 0xfd5d;
  iStack_6 = uVar9;
  func_0x00024c86();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x22b2;
  iStack_8 = 0xfd6d;
  FUN_21f2_2d26();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x22b2;
  iStack_8 = 0xfd7d;
  FUN_21f2_2d26();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x22b2;
  iStack_8 = 0xfd8d;
  FUN_21f2_2d26();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x22b2;
  iStack_8 = 0xfd9d;
  FUN_21f2_2d26();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x22b2;
  iStack_8 = 0xfdad;
  FUN_21f2_2d26();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x22b2;
  iStack_8 = 0xfdbd;
  FUN_21f2_2d26();
  iStack_4 = 5;
  iStack_6 = 0x22b2;
  iStack_8 = 0xfdcd;
  FUN_1def_07a4();
  *(undefined2 *)0xc2c = 1;
  iStack_4 = unaff_BP + -0xf0;
  iStack_6 = unaff_BP + -0xe8;
  iStack_8 = unaff_BP + -0xd0;
  iStack_a = 0;
  iStack_c = 0x1bb4;
  iVar10 = 0x1bb4;
  uStack_e = 0xfdf0;
  iVar6 = FUN_1def_0904();
  *(int *)(unaff_BP + -0xe2) = iVar6;
  *(undefined2 *)0xc2c = 0;
  if (*(int *)0x158 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((((iVar6 == 1) || (iVar6 == 2)) || (iVar6 == 3)) || (iVar6 == 4)) {
    iStack_4 = 0x1bb4;
    iStack_6 = -0x1e0;
    FUN_3ab8_390b();
  }
  if (*(int *)(unaff_BP + -0xe2) == 5) {
    iVar10 = 0x885;
    iStack_4 = 0xfe2d;
    func_0x0000c3ca();
    pcVar5 = (code *)swi(0x3f);
    (*pcVar5)();
  }
  if (*(int *)(unaff_BP + -0xe2) != 0x14) {
    iStack_4 = 0x38;
    FUN_32b2_7095();
    iStack_4 = 0x40;
    FUN_32b2_6eb1();
    iStack_4 = 0x48;
    FUN_32b2_6d14();
    iStack_4 = 0x50;
    FUN_32b2_6e63();
    iStack_4 = 0x58;
    FUN_32b2_6d14();
    iStack_4 = 0x60;
    FUN_32b2_6e63();
    return 1;
  }
  *(undefined2 *)(unaff_BP + -0x60) = 0;
  uVar9 = *(undefined2 *)0x14a;
  *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)0x148;
  *(undefined2 *)(unaff_BP + -8) = uVar9;
  *(undefined2 *)(unaff_BP + -0xd8) = *(undefined2 *)0x150;
  if (*(int *)(unaff_BP + -0xd6) != 2) {
    while( true ) {
      iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
      iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
      iStack_c = 0x119;
      iStack_a = iVar10;
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
      iStack_a = *(int *)(unaff_BP + -0xbc);
      iStack_c = 0x32b2;
      uStack_e = 0x150;
      FUN_32b2_75ec();
      uVar13 = &stack0x0000 == (undefined1 *)0x4;
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
      if ((bool)uVar13) {
        iStack_6 = 0x32b2;
        iStack_8 = 0x192;
        FUN_32b2_6cc6();
        iStack_6 = 0x32b2;
        iStack_8 = 0x19a;
        FUN_32b2_6cc6();
        iStack_6 = 0x32b2;
        iStack_8 = 0x19f;
        FUN_32b2_7191();
        if ((bool)uVar13) {
          return 0;
        }
      }
      iStack_6 = unaff_BP + -0xa8;
      iStack_8 = unaff_BP + -0x1c;
      iStack_a = *(int *)(unaff_BP + -0x7c);
      iStack_c = *(undefined2 *)(unaff_BP + -0x7e);
      uStack_e = *(undefined2 *)(unaff_BP + -0x80);
      uStack_10 = *(undefined2 *)(unaff_BP + -0x82);
      iStack_12 = *(undefined2 *)(unaff_BP + -0x58);
      iStack_14 = *(undefined2 *)(unaff_BP + -0x5a);
      uStack_16 = *(undefined2 *)(unaff_BP + -0x5c);
      uStack_18 = *(undefined2 *)(unaff_BP + -0x5e);
      uStack_1a = 0x32b2;
      iStack_1c = 0x1d0;
      FUN_32b2_6cc6();
      uStack_1a = 0x32b2;
      iStack_1c = 0x1d5;
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
      iStack_2a = 0x32b2;
      uStack_2c = 0x1f6;
      FUN_32b2_6eb1();
      iStack_2a = 0x32b2;
      uStack_2c = 0x1fa;
      iVar6 = FUN_3ab8_4fbd();
      if (iVar6 == 0) break;
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
      iStack_12 = 0x32b2;
      iStack_14 = 0x240;
      FUN_32b2_6eb1();
      iStack_12 = 0x32b2;
      iStack_14 = 0x248;
      FUN_32b2_6cc6();
      iStack_12 = 0x32b2;
      iStack_14 = 0x24d;
      FUN_32b2_7258();
      uStack_1a = 0x32b2;
      iStack_1c = 599;
      FUN_32b2_6eb1();
      uStack_1a = 0x32b2;
      iStack_1c = 0x25f;
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
      iStack_2a = 0x32b2;
      uStack_2c = 0x288;
      FUN_32b2_6eb1();
      iStack_2a = 0x32b2;
      uStack_2c = 0x290;
      FUN_32b2_6cc6();
      iStack_2a = 0x32b2;
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
      iStack_a = 0x32b2;
      iStack_c = 0x2d4;
      FUN_32b2_6cc6();
      iStack_a = 0x32b2;
      iStack_c = 0x2d9;
      FUN_32b2_7258();
      iStack_12 = 0x32b2;
      iStack_14 = 0x2e3;
      FUN_32b2_6eb1();
      iStack_12 = 0x32b2;
      iStack_14 = 0x2eb;
      FUN_32b2_6cc6();
      iStack_12 = 0x32b2;
      iStack_14 = 0x2f0;
      FUN_32b2_7258();
      uStack_1a = 0x32b2;
      iStack_1c = 0x2fa;
      FUN_32b2_6eb1();
      uStack_1a = 0x32b2;
      iStack_1c = 0x302;
      FUN_32b2_6d14();
      uStack_22 = 0x32b2;
      uStack_24 = 0x30c;
      FUN_32b2_6eb1();
      uStack_22 = 0x32b2;
      uStack_24 = 0x314;
      FUN_32b2_6d14();
      iStack_2a = 0x32b2;
      uStack_2c = 0x31e;
      FUN_32b2_6eb1();
      iStack_2a = 0x32b2;
      uStack_2c = 0x326;
      FUN_32b2_6cc6();
      iStack_2a = 0x32b2;
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
      uVar13 = (undefined1 *)0xffc9 < &uStack_36;
      uVar14 = &stack0x0000 == (undefined1 *)0x0;
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
      if (!(bool)uVar13 && !(bool)uVar14) {
        iStack_4 = 0x3da;
        FUN_32b2_6d14();
        iStack_4 = 0x3e2;
        FUN_32b2_6d14();
        iStack_4 = 999;
        FUN_32b2_7191();
        if (!(bool)uVar14) {
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
          iStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
          iStack_1e = *(undefined2 *)(unaff_BP + -0x48);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
          iStack_28 = 0x622;
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
          uVar9 = *(undefined2 *)(unaff_BP + -0x60);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)(unaff_BP + -0x84) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x9c) = uVar9;
          iStack_4 = unaff_BP + -0x86;
          puVar8 = &uStack_24;
          puVar7 = (undefined2 *)(unaff_BP + 0x1c);
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar4 = puVar8;
            puVar8 = puVar8 + 1;
            puVar3 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar4 = *puVar3;
          }
          iStack_28 = 0x684;
          iVar6 = FUN_3ab8_522f();
          uVar13 = 0;
          uVar14 = iVar6 == 0;
          if (!(bool)uVar14) {
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
            if ((bool)uVar13 || (bool)uVar14) {
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
              if ((bool)uVar13 || (bool)uVar14) {
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
          if (!(bool)uVar13) {
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
            if (!(bool)uVar13) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
            iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
            iStack_a = 0x32b2;
            iStack_c = 0x774;
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
            iStack_a = 0x7d9;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0x7de;
            FUN_32b2_7258();
            uStack_10 = 0x32b2;
            iStack_12 = 0x7e8;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            iStack_12 = 0x7f0;
            FUN_32b2_6cc6();
            uStack_10 = 0x32b2;
            iStack_12 = 0x7f5;
            FUN_32b2_7258();
            uStack_18 = 0x32b2;
            uStack_1a = 0x7ff;
            FUN_32b2_6eb1();
            uStack_18 = *(undefined2 *)(unaff_BP + -100);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
            iStack_1c = *(undefined2 *)(unaff_BP + -0x68);
            iStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
            iStack_28 = 0x32b2;
            iStack_2a = 0x820;
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
            uVar13 = (undefined1 *)0xffc9 < &uStack_38;
            uVar14 = &stack0x0000 == (undefined1 *)0x2;
            iStack_4 = 0x32b2;
            iStack_6 = 0x84f;
            FUN_32b2_6cc6();
            iStack_4 = 0x32b2;
            iStack_6 = 0x857;
            FUN_32b2_6cc6();
            iStack_4 = 0x32b2;
            iStack_6 = 0x85c;
            FUN_32b2_7191();
            if ((bool)uVar14) {
              uVar9 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar9;
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
            if ((bool)uVar14) {
              uVar9 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar9;
            }
            uVar9 = *(undefined2 *)(unaff_BP + -0x60);
            puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
            *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
            puVar7[1] = uVar9;
            uVar9 = *(undefined2 *)(unaff_BP + -0x88);
            puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
            *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar7[1] = uVar9;
            uVar9 = *(undefined2 *)(unaff_BP + -0x60);
            puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
            puVar7[1] = uVar9;
            uVar9 = *(undefined2 *)(unaff_BP + -0x88);
            puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar7[1] = uVar9;
            piVar1 = (int *)(unaff_BP + -0x36);
            *piVar1 = *piVar1 + 1;
            uVar14 = *piVar1 == 0;
            iStack_4 = 0x32b2;
            iStack_6 = 0x8d7;
            FUN_32b2_6d14();
            iStack_4 = 0x32b2;
            iStack_6 = 0x8e0;
            FUN_32b2_6d14();
            iStack_4 = 0x32b2;
            iStack_6 = 0x8e5;
            FUN_32b2_7191();
            if (!(bool)uVar13 && !(bool)uVar14) {
              iStack_4 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
              iStack_a = *(int *)(unaff_BP + -0xbc);
              iStack_c = 0x32b2;
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
              iStack_a = 0x32b2;
              iStack_c = 0x969;
              FUN_32b2_6cc6();
              iStack_a = 0x32b2;
              iStack_c = 0x96e;
              FUN_32b2_7258();
              iStack_12 = 0x32b2;
              iStack_14 = 0x978;
              FUN_32b2_6eb1();
              iStack_12 = 0x32b2;
              iStack_14 = 0x980;
              FUN_32b2_6cc6();
              iStack_12 = 0x32b2;
              iStack_14 = 0x985;
              FUN_32b2_7258();
              uStack_1a = 0x32b2;
              iStack_1c = 0x98f;
              FUN_32b2_6eb1();
              uStack_1a = *(undefined2 *)(unaff_BP + -100);
              iStack_1c = *(undefined2 *)(unaff_BP + -0x66);
              iStack_1e = *(undefined2 *)(unaff_BP + -0x68);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
              uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
              iStack_28 = *(undefined2 *)(unaff_BP + -0x4e);
              iStack_2a = 0x32b2;
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
              uVar13 = &stack0x0000 == (undefined1 *)0x4;
              iStack_6 = 0x32b2;
              iStack_8 = 0x9df;
              FUN_32b2_6cc6();
              iStack_6 = 0x32b2;
              iStack_8 = 0x9e7;
              FUN_32b2_6cc6();
              iStack_6 = 0x32b2;
              iStack_8 = 0x9ec;
              FUN_32b2_7191();
              if ((bool)uVar13) {
                uVar9 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar9;
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
              if ((bool)uVar13) {
                uVar9 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar9;
              }
              uVar9 = *(undefined2 *)(unaff_BP + -0x60);
              puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
              puVar7[1] = uVar9;
              uVar9 = *(undefined2 *)(unaff_BP + -0x88);
              puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar7[1] = uVar9;
              *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
            }
            return *(int *)(unaff_BP + -0x36);
          }
        }
        return 0;
      }
      iStack_4 = 0x3f5;
      FUN_32b2_6d14();
      iStack_4 = 0x32b2;
      iStack_6 = 0x3ff;
      FUN_32b2_7154();
      iVar10 = 0x32b2;
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
  iStack_4 = *(undefined2 *)(unaff_BP + -10);
  iStack_8 = 0xfe6e;
  iStack_6 = iVar10;
  FUN_3ab8_4c52();
  *(undefined2 *)(unaff_BP + -0x60) = 10000;
  if ((*(int *)(unaff_BP + -8) <= *(int *)0x14a) &&
     ((*(int *)(unaff_BP + -8) < *(int *)0x14a || (*(uint *)(unaff_BP + -10) < *(uint *)0x148)))) {
    *(undefined2 *)(unaff_BP + -0x60) = 9999;
  }
  iStack_4 = *(undefined2 *)0x11e4;
  iStack_8 = 0xfe9e;
  iStack_6 = iVar10;
  func_0x000297e6();
  iStack_6 = 0x22b2;
  iStack_8 = 0xfea3;
  func_0x00029d78();
  uStack_e = 0x22b2;
  uStack_10 = 0xfead;
  func_0x000299d1();
  uStack_e = 0x22b2;
  uStack_10 = 0xfeb6;
  func_0x000297e6();
  uStack_e = 0x22b2;
  uStack_10 = 0xfebb;
  func_0x00029d78();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfec5;
  func_0x000299d1();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfece;
  func_0x000297e6();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfed3;
  func_0x00029d78();
  iStack_1e = 0x22b2;
  uStack_20 = 0xfedd;
  func_0x000299d1();
  iStack_1e = unaff_BP + -0xd0;
  uStack_20 = 0x22b2;
  uStack_22 = 0xfee6;
  iStack_4 = FUN_3ab8_4450();
  *(undefined2 *)(unaff_BP + -0xea) = iStack_4;
  iStack_6 = 2;
  iStack_8 = 0x12;
  iStack_a = unaff_BP + -0xd0;
  iStack_c = 0x22b2;
  iVar6 = 0xdef;
  uStack_e = 0xff00;
  FUN_1000_02b5();
  if (*(int *)0xc22 < 1) {
    *(undefined2 *)0xc22 = 1;
  }
  if (*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) {
    if (*(int *)0xc22 < 2) {
      *(undefined2 *)0xc22 = 2;
    }
    iStack_4 = 2;
    iStack_6 = 3;
    iStack_8 = 0x47;
    iStack_a = 0x11cc;
    iStack_c = 0xdef;
    uStack_e = 0xff41;
    FUN_1000_02b5();
    uVar13 = (undefined1 *)0xfff5 < &iStack_a;
    iStack_4 = 0xff4d;
    func_0x00029834();
    iStack_4 = 0xff56;
    func_0x000297e6();
    iStack_4 = 0xff5b;
    func_0x00029ae7();
    iStack_4 = 0xff60;
    func_0x00029d78();
    iVar10 = 0x22b2;
    iStack_4 = 0xff65;
    FUN_28b3_1181();
    if (!(bool)uVar13) {
      iStack_4 = 2;
      iStack_6 = 3;
      iStack_8 = 0x1a;
      iStack_a = 0x998;
      iStack_c = 0x22b2;
      iVar10 = 0xdef;
      uStack_e = 0xff80;
      FUN_1000_02b5();
    }
    iVar6 = iVar10;
    if (*(char *)(unaff_BP + -0x5a) != '\0') {
      iStack_4 = 6;
      iStack_6 = 3;
      iStack_8 = 0x1e;
      iStack_a = unaff_BP + -0x5a;
      iVar6 = 0xdef;
      uStack_e = 0xffa2;
      iStack_c = iVar10;
      FUN_1000_02b5();
    }
  }
  iStack_4 = *(undefined2 *)0xcb2;
  iStack_6 = 0;
  iStack_8 = 3;
  iStack_c = 0xffb9;
  iStack_a = iVar6;
  func_0x0000f2cb();
  iStack_4 = 0xffc1;
  func_0x0000a799();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x885;
  iStack_8 = 0xffcf;
  FUN_21f2_3454();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x22b2;
  iStack_8 = 0xffdf;
  FUN_21f2_2d26();
  iStack_4 = 4;
  iStack_6 = 0x22b2;
  iStack_8 = 0xffef;
  FUN_1def_07a4();
  *(undefined2 *)0xc2c = 1;
  iStack_4 = unaff_BP + -0xf0;
  iStack_6 = unaff_BP + -0xe8;
  iStack_8 = unaff_BP + -0xd0;
  iStack_a = *(int *)(unaff_BP + -0x60);
  iStack_c = 0x1bb4;
  uStack_e = 0x12;
  uVar9 = FUN_1def_0904();
  *(undefined2 *)(unaff_BP + -0xe2) = uVar9;
  *(undefined2 *)0xc2c = 0;
  iStack_4 = 0x1bb4;
  iVar6 = 0x885;
  iStack_6 = 0x24;
  iVar10 = func_0x0000daa6();
  if (*(int *)0x158 == 0) {
    if (*(int *)(unaff_BP + -0xe2) == -1) {
      iStack_4 = *(undefined2 *)0xcb2;
      iStack_6 = 0;
      iStack_8 = 3;
      iStack_a = 0x885;
      iStack_c = 0x57;
      func_0x0000f2cb();
      iStack_4 = 0x5f;
      func_0x0000a799();
      iStack_4 = 0x885;
      while (*(int *)(unaff_BP + -0xd8) < *(int *)0x150) {
        *(int *)(unaff_BP + -0xda) = *(int *)0x150;
        iStack_6 = 0x6b;
        func_0x000190c7();
        iStack_4 = 0x18b3;
      }
      uVar9 = *(undefined2 *)(unaff_BP + -8);
      *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -10);
      *(undefined2 *)0x14a = uVar9;
      iStack_4 = 0x87;
      func_0x0000abfa();
      iStack_4 = 0x885;
      iStack_6 = 0x90;
      func_0x0000b1d8();
      iStack_4 = 0x885;
      iVar6 = 0x11f2;
      iStack_6 = 0x99;
      iVar10 = func_0x0001470b();
    }
    if ((*(int *)(unaff_BP + -0xe2) == 1) || (*(int *)(unaff_BP + -0xe2) == 2)) {
      uVar9 = *(undefined2 *)0x14a;
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)0x148;
      *(undefined2 *)(unaff_BP + -8) = uVar9;
      *(undefined2 *)(unaff_BP + -0xd8) = *(undefined2 *)0x150;
      iStack_4 = *(undefined2 *)(unaff_BP + -2);
      iStack_6 = *(undefined2 *)(unaff_BP + -4);
      iStack_8 = unaff_BP + -0x5e;
      iStack_c = 0xd6;
      iStack_a = iVar6;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = 0xdb;
      func_0x00029d78();
      iStack_12 = 0x22b2;
      iVar6 = 0x22b2;
      iStack_14 = 0xe5;
      func_0x000299d1();
      iStack_12 = unaff_BP + -0xf2;
      iStack_14 = unaff_BP + -0xe4;
      uStack_16 = 0x22b2;
      uStack_18 = 0xf3;
      iVar10 = FUN_4375_882f();
      *(int *)(unaff_BP + -6) = iVar10;
      if (iVar10 < 1) goto LAB_3ab8_5580;
      uVar9 = *(undefined2 *)0xa812;
      *(undefined2 *)(unaff_BP + -0xd4) = *(undefined2 *)0xa810;
      *(undefined2 *)(unaff_BP + -0xd2) = uVar9;
      if (*(int *)(unaff_BP + -0xe2) == 1) {
        uVar9 = *(undefined2 *)0xa8da;
        *(undefined2 *)(unaff_BP + -0xd4) = *(undefined2 *)0xa8d8;
        *(undefined2 *)(unaff_BP + -0xd2) = uVar9;
      }
      *(undefined1 *)0x11d7 = 0;
      iStack_4 = *(undefined2 *)(unaff_BP + -4);
      iStack_6 = *(int *)0x11e4;
      iStack_8 = 0x22b2;
      iStack_a = 0x32f;
      func_0x000297e6();
      iStack_8 = 0x22b2;
      iStack_a = 0x334;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      iStack_12 = 0x33e;
      func_0x000299d1();
      uStack_10 = *(undefined2 *)(unaff_BP + -6);
      iStack_12 = 0x22b2;
      iStack_14 = 0x34a;
      func_0x000297e6();
      iStack_12 = 0x22b2;
      iStack_14 = 0x34f;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      iStack_1c = 0x359;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      iStack_1c = 0x362;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      iStack_1c = 0x367;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x371;
      func_0x000299d1();
      uStack_22 = *(undefined2 *)(unaff_BP + -0xf2);
      uStack_24 = *(undefined2 *)(unaff_BP + -0xe4);
      iStack_28 = 0x382;
      func_0x000297e6();
      iStack_28 = 0x387;
      func_0x00029d78();
      uStack_2e = 0x22b2;
      iVar6 = 0x22b2;
      uStack_30 = 0x391;
      func_0x000299d1();
      pcVar5 = (code *)swi(0x3f);
      iVar10 = (*pcVar5)();
      *(undefined2 *)0x11c = 1;
    }
    if (*(int *)(unaff_BP + -0xe2) == 3) {
      uVar9 = *(undefined2 *)0x14a;
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)0x148;
      *(undefined2 *)(unaff_BP + -8) = uVar9;
      *(undefined2 *)(unaff_BP + -0xd8) = *(undefined2 *)0x150;
      do {
        do {
          do {
            while( true ) {
              iStack_4 = 0x3c6;
              func_0x000297e6();
              iStack_4 = 0x3ce;
              func_0x0002996b();
              iStack_4 = 0x3d6;
              func_0x00029983();
              iStack_4 = 0x3db;
              func_0x0001bb4e();
              iStack_4 = 0x1bb4;
              iStack_6 = 0x3e4;
              func_0x00012276();
              iStack_4 = 0x14;
              iStack_6 = unaff_BP + -0xf0;
              iStack_8 = unaff_BP + -0xe8;
              iStack_a = unaff_BP + -0x68;
              iStack_c = unaff_BP + -100;
              uStack_e = 0x11f2;
              uStack_10 = 0x404;
              iVar6 = func_0x000021a4();
              *(int *)(unaff_BP + -0x6c) = iVar6;
              if (iVar6 + 1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (*(int *)0x158 != 0) {
                return iVar6 + 1;
              }
              if (*(int *)0x11e4 == 0) break;
              uVar13 = 0;
              uVar14 = *(int *)(unaff_BP + -0x6c) == 0;
              if ((bool)uVar14) {
                iStack_4 = 0x432;
                func_0x000297e6();
                iStack_4 = 0x43b;
                func_0x000297e6();
                iStack_4 = 0x440;
                FUN_28b3_1181();
                if ((bool)uVar13 || (bool)uVar14) {
                  iStack_4 = 0x44a;
                  func_0x000297e6();
                  iStack_4 = 0x453;
                  func_0x000297e6();
                  iStack_4 = 0x458;
                  FUN_28b3_1181();
                  if (!(bool)uVar13) goto LAB_3ab8_58dd;
                }
              }
            }
            uVar13 = 0;
            uVar14 = *(int *)(unaff_BP + -0x6c) == 0;
          } while (!(bool)uVar14);
          iStack_4 = 0x4c4;
          func_0x000297e6();
          iStack_4 = 0x4cc;
          func_0x000297e6();
          iStack_4 = 0x4d1;
          FUN_28b3_1181();
        } while ((bool)uVar13);
        iStack_4 = 0x4dc;
        func_0x000297e6();
        iStack_4 = 0x4e4;
        func_0x000297e6();
        iStack_4 = 0x4e9;
        FUN_28b3_1181();
      } while (!(bool)uVar13 && !(bool)uVar14);
LAB_3ab8_58dd:
      uVar9 = *(undefined2 *)(unaff_BP + -0x62);
      *(undefined2 *)(unaff_BP + -0xd4) = *(undefined2 *)(unaff_BP + -100);
      *(undefined2 *)(unaff_BP + -0xd2) = uVar9;
      iStack_4 = 0x22b2;
      iStack_6 = 0x473;
      func_0x0000daa6();
      iStack_4 = *(undefined2 *)(unaff_BP + -2);
      iStack_6 = *(undefined2 *)(unaff_BP + -4);
      iStack_8 = unaff_BP + -0x5e;
      iStack_a = 0x885;
      iStack_c = 0x48b;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = 0x490;
      func_0x00029d78();
      iStack_12 = 0x22b2;
      iVar6 = 0x22b2;
      iStack_14 = 0x49a;
      func_0x000299d1();
      iStack_12 = unaff_BP + -0xf2;
      iStack_14 = unaff_BP + -0xe4;
      uStack_16 = 0x22b2;
      uStack_18 = 0x4a8;
      iVar10 = FUN_4375_882f();
      *(int *)(unaff_BP + -6) = iVar10;
      if (iVar10 < 1) goto LAB_3ab8_5580;
      *(undefined1 *)0x11d7 = 0;
      iStack_4 = *(undefined2 *)(unaff_BP + -4);
      iStack_6 = *(int *)0x11e4;
      iStack_8 = 0x22b2;
      iStack_a = 0x508;
      func_0x000297e6();
      iStack_8 = 0x22b2;
      iStack_a = 0x50d;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      iStack_12 = 0x517;
      func_0x000299d1();
      uStack_10 = *(undefined2 *)(unaff_BP + -6);
      iStack_12 = 0x22b2;
      iStack_14 = 0x523;
      func_0x000297e6();
      iStack_12 = 0x22b2;
      iStack_14 = 0x528;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      iStack_1c = 0x532;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      iStack_1c = 0x53b;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      iStack_1c = 0x540;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x54a;
      func_0x000299d1();
      uStack_22 = *(undefined2 *)(unaff_BP + -0xf2);
      uStack_24 = *(undefined2 *)(unaff_BP + -0xe4);
      iStack_28 = 0x55b;
      func_0x000297e6();
      iStack_28 = 0x560;
      func_0x00029d78();
      uStack_2e = 0x22b2;
      iVar6 = 0x22b2;
      uStack_30 = 0x56a;
      func_0x000299d1();
      pcVar5 = (code *)swi(0x3f);
      iVar10 = (*pcVar5)();
      *(undefined2 *)0x11c = 1;
    }
    if (((*(int *)(unaff_BP + -0xe2) == 1) || (*(int *)(unaff_BP + -0xe2) == 2)) ||
       (*(int *)(unaff_BP + -0xe2) == 3)) {
      *(undefined2 *)0x11c = 1;
      iVar6 = 0x885;
      iStack_4 = 0x598;
      iVar10 = func_0x0000a7c5();
      *(undefined2 *)0xc08 = 0;
      *(undefined2 *)0xbc0 = 1;
    }
    if (*(int *)(unaff_BP + -0xe2) == 4) {
      *(undefined1 *)(unaff_BP + -0x5a) = 0;
      iStack_4 = 0x11e0;
      iStack_6 = 0x11dc;
      iStack_8 = 0x11d8;
      iStack_c = 0x5c3;
      iStack_a = iVar6;
      iVar10 = FUN_4375_b98a();
    }
    if (*(int *)(unaff_BP + -0xe2) == 0x14) {
LAB_3ab8_5580:
      iVar10 = *(int *)0x148;
      uVar9 = *(undefined2 *)0x14a;
      *(int *)(unaff_BP + -10) = iVar10;
      *(undefined2 *)(unaff_BP + -8) = uVar9;
LAB_3ab8_558d:
      if ((*(int *)(unaff_BP + -0xd6) == 3) || (*(int *)(unaff_BP + -0xd6) == 4)) {
LAB_3ab8_559e:
        do {
          iStack_4 = *(undefined2 *)0x11e4;
          iStack_8 = 0x12e;
          iStack_6 = iVar6;
          func_0x000297e6();
          iStack_6 = 0x22b2;
          iStack_8 = 0x133;
          func_0x00029d78();
          uStack_e = 0x22b2;
          uStack_10 = 0x13d;
          func_0x000299d1();
          uStack_e = 0x22b2;
          uStack_10 = 0x146;
          func_0x000297e6();
          uStack_e = 0x22b2;
          uStack_10 = 0x14b;
          func_0x00029d78();
          uStack_16 = 0x22b2;
          uStack_18 = 0x155;
          func_0x000299d1();
          uStack_16 = 0x22b2;
          uStack_18 = 0x15e;
          func_0x000297e6();
          uStack_16 = 0x22b2;
          uStack_18 = 0x163;
          func_0x00029d78();
          iStack_1e = 0x22b2;
          uStack_20 = 0x16d;
          func_0x000299d1();
          iStack_1e = unaff_BP + -0xd0;
          uStack_20 = 0x22b2;
          uStack_22 = 0x176;
          iStack_4 = FUN_4375_b880();
          *(undefined2 *)(unaff_BP + -0xea) = iStack_4;
          iStack_6 = 2;
          iStack_8 = 0x12;
          iStack_a = unaff_BP + -0xd0;
          iStack_c = 0x22b2;
          iVar6 = 0xdef;
          uStack_e = 400;
          FUN_1000_02b5();
          if (*(int *)0xc22 < 1) {
            *(undefined2 *)0xc22 = 1;
          }
          if (*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) {
            if (*(int *)0xc22 < 2) {
              *(undefined2 *)0xc22 = 2;
            }
            iStack_4 = 2;
            iStack_6 = 3;
            iStack_8 = 0x47;
            iStack_a = 0x11cc;
            iStack_c = 0xdef;
            uStack_e = 0x1ce;
            FUN_1000_02b5();
            uVar13 = (undefined1 *)0xfff5 < &iStack_a;
            iStack_4 = 0x1da;
            func_0x00029834();
            iStack_4 = 0x1e3;
            func_0x000297e6();
            iStack_4 = 0x1e8;
            func_0x00029ae7();
            iStack_4 = 0x1ed;
            func_0x00029d78();
            iVar6 = 0x22b2;
            iStack_4 = 0x1f2;
            FUN_28b3_1181();
            if (!(bool)uVar13) {
              iStack_4 = 2;
              iStack_6 = 3;
              iStack_8 = 0x1a;
              iStack_a = 0x998;
              iStack_c = 0x22b2;
              iVar6 = 0xdef;
              uStack_e = 0x20d;
              FUN_1000_02b5();
            }
          }
          iStack_4 = *(undefined2 *)0xcb2;
          iStack_6 = 0;
          iStack_8 = 3;
          iStack_c = 0x224;
          iStack_a = iVar6;
          func_0x0000f2cb();
          uVar9 = 0x885;
          iStack_4 = 0x22c;
          func_0x0000a799();
          if (*(int *)(unaff_BP + -0xd6) == 3) {
            iStack_4 = unaff_BP + -0xd0;
            iStack_6 = 0x885;
            uVar9 = 0x22b2;
            iStack_8 = 0x241;
            FUN_21f2_3454();
          }
          uVar11 = uVar9;
          if (*(int *)(unaff_BP + -0xd6) == 4) {
            if ((*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) &&
               (*(char *)(unaff_BP + -0x5a) != '\0')) {
              iStack_4 = 6;
              iStack_6 = 3;
              iStack_8 = 0x1e;
              iStack_a = unaff_BP + -0x5a;
              uVar11 = 0xdef;
              uStack_e = 0x271;
              iStack_c = uVar9;
              FUN_1000_02b5();
            }
            iStack_4 = *(int *)0x11e + 1;
            iStack_6 = unaff_BP + -0xd0;
            iStack_a = 0x286;
            iStack_8 = uVar11;
            FUN_4375_c05a();
          }
          iStack_4 = unaff_BP + -0xd0;
          iStack_8 = 0x297;
          iStack_6 = uVar11;
          FUN_21f2_2d26();
          iStack_4 = 4;
          iStack_6 = 0x22b2;
          iStack_8 = 0x2a7;
          FUN_1def_07a4();
          *(undefined2 *)0xc2c = 1;
          if (*(int *)(unaff_BP + -0xd6) == 4) {
            *(undefined2 *)0xc20 = 1;
          }
          iStack_4 = unaff_BP + -0xf0;
          iStack_6 = unaff_BP + -0xe8;
          iStack_8 = unaff_BP + -0xd0;
          iStack_a = 10000;
          iStack_c = 0x1bb4;
          iVar12 = 0x1bb4;
          uStack_e = 0x2d8;
          uVar9 = FUN_1def_0904();
          *(undefined2 *)(unaff_BP + -0xe2) = uVar9;
          iVar10 = 0;
          *(undefined2 *)0xc2c = 0;
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 != 0) {
            return 0;
          }
          if (((*(int *)(unaff_BP + -0xd6) == 3) && (0 < *(int *)(unaff_BP + -0xe2))) &&
             (*(int *)(unaff_BP + -0xe2) < 4)) {
            iStack_4 = 0x1bb4;
            iStack_6 = 0x5fe;
            func_0x0000daa6();
            iStack_4 = 0x885;
            iStack_6 = 0x60c;
            func_0x000297e6();
            iStack_4 = 0x22b2;
            iStack_6 = 0x611;
            func_0x00029d78();
            iStack_c = 0x22b2;
            uStack_e = 0x61b;
            func_0x000299d1();
            iStack_c = 0x22b2;
            uStack_e = 0x624;
            func_0x000297e6();
            iStack_c = 0x22b2;
            uStack_e = 0x629;
            func_0x00029d78();
            iStack_14 = 0x22b2;
            uStack_16 = 0x633;
            func_0x000299d1();
            iStack_14 = 0x22b2;
            uStack_16 = 0x63c;
            func_0x000297e6();
            iStack_14 = 0x22b2;
            uStack_16 = 0x641;
            func_0x00029d78();
            iStack_1c = 0x22b2;
            iStack_1e = 0x64b;
            func_0x000299d1();
            iStack_1c = unaff_BP + -0xd0;
            iStack_1e = 0x22b2;
            uStack_20 = 0x654;
            FUN_4375_b880();
            iStack_4 = 7;
            iStack_6 = 2;
            iStack_8 = 0x12;
            iStack_a = unaff_BP + -0xd0;
            iStack_c = 0x22b2;
            uStack_e = 0x670;
            FUN_1000_02b5();
            iStack_4 = *(undefined2 *)(unaff_BP + -2);
            iStack_6 = *(undefined2 *)(unaff_BP + -4);
            iStack_8 = unaff_BP + -0x5e;
            iStack_a = 0xdef;
            iStack_c = 0x68a;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0x68f;
            func_0x00029d78();
            iStack_12 = 0x22b2;
            iStack_14 = 0x699;
            func_0x000299d1();
            iStack_12 = unaff_BP + -0xf2;
            iStack_14 = unaff_BP + -0xe4;
            uStack_16 = 0x22b2;
            uStack_18 = 0x6a7;
            iVar10 = FUN_4375_882f();
            *(int *)(unaff_BP + -6) = iVar10;
            if (iVar10 < 1) break;
            *(undefined1 *)0x11d7 = 0;
            iStack_4 = *(undefined2 *)(unaff_BP + -2);
            iStack_6 = *(undefined2 *)(unaff_BP + -4);
            iStack_8 = *(undefined2 *)0x11e4;
            iStack_a = 0x22b2;
            iStack_c = 0x6d9;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0x6de;
            func_0x00029d78();
            iStack_12 = 0x22b2;
            iStack_14 = 0x6e8;
            func_0x000299d1();
            iStack_12 = *(int *)(unaff_BP + -6);
            iStack_14 = 0x22b2;
            uStack_16 = 0x6f4;
            func_0x000297e6();
            iStack_14 = 0x22b2;
            uStack_16 = 0x6f9;
            func_0x00029d78();
            iStack_1c = 0x22b2;
            iStack_1e = 0x703;
            func_0x000299d1();
            iStack_1c = 0x22b2;
            iStack_1e = 0x70c;
            func_0x000297e6();
            iStack_1c = 0x22b2;
            iStack_1e = 0x711;
            func_0x00029d78();
            uStack_24 = 0x22b2;
            func_0x000299d1();
            uStack_24 = *(undefined2 *)(unaff_BP + -0xf2);
            iStack_28 = *(int *)(unaff_BP + -0xe2);
            pcVar5 = (code *)swi(0x3f);
            (*pcVar5)();
            *(undefined2 *)0x11c = 1;
            iStack_4 = 3;
            iStack_6 = 0x22b2;
            iStack_8 = 0x749;
            func_0x0000f2cb();
            iVar12 = 0x885;
            func_0x0000a799();
            iStack_4 = 0x75b;
            iVar10 = FUN_4375_c082();
          }
          if ((*(int *)(unaff_BP + -0xd6) != 4) || (*(int *)(unaff_BP + -0x6a) == 0))
          goto LAB_3ab8_6175;
          *(undefined2 *)(unaff_BP + -0x2c8) = 0;
          *(undefined2 *)(unaff_BP + -0x2cc) = 0;
          iVar6 = iVar12;
LAB_3ab8_5bf7:
          iStack_4 = *(int *)0x11e + *(int *)(unaff_BP + -0x2c8) + 1;
          iStack_6 = unaff_BP + -0xd0;
          iStack_a = 0x791;
          iStack_8 = iVar6;
          FUN_4375_c05a();
          iStack_4 = unaff_BP + -0xd0;
          iVar12 = 0x22b2;
          iStack_8 = 0x7a2;
          iStack_6 = iVar6;
          FUN_21f2_2d26();
          *(undefined2 *)0xc20 = 1;
          if (0 < *(int *)(unaff_BP + -0x2c8)) {
            iStack_4 = unaff_BP + -0xf0;
            iStack_6 = unaff_BP + -0xe8;
            iStack_8 = unaff_BP + -0xd0;
            iStack_a = 1;
            iStack_c = 0x22b2;
            iVar12 = 0x1bb4;
            uStack_e = 0x7cd;
            uVar9 = FUN_1def_0904();
            *(undefined2 *)(unaff_BP + -0x2cc) = uVar9;
          }
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 == 0) {
            if (*(int *)(unaff_BP + -0x2cc) == -1) {
              iStack_6 = 0x7f9;
              iStack_4 = iVar12;
              func_0x0000daa6();
              iStack_4 = 0x885;
              iStack_6 = 0x803;
              FUN_1def_186d();
              iStack_4 = 0x1bb4;
              iStack_6 = 0x80c;
              func_0x0000daa6();
              *(undefined2 *)(unaff_BP + -0x2ca) = *(undefined2 *)0x150;
              iStack_4 = 0x885;
              iStack_6 = 0x81a;
              func_0x000190c7();
              iStack_4 = 0x18b3;
              iStack_6 = 0x824;
              func_0x0000b1d8();
              iVar6 = 0x885;
              iStack_4 = 0x82a;
              func_0x0000abfa();
              *(undefined2 *)(unaff_BP + -0x6a) = 0;
              *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + -1;
              iVar12 = iVar6;
              if (*(int *)(unaff_BP + -0x2c8) < 1) goto LAB_3ab8_559e;
            }
            if (*(int *)(unaff_BP + -0x2cc) == 1) {
LAB_3ab8_5cc4:
              while( true ) {
                iStack_4 = unaff_BP + -0xd0;
                iStack_8 = 0x852;
                iStack_6 = iVar12;
                FUN_21f2_3454();
                iStack_4 = unaff_BP + -0xd0;
                iStack_6 = 0x22b2;
                iStack_8 = 0x862;
                FUN_21f2_2d26();
                iStack_4 = unaff_BP + -0xd0;
                iStack_6 = 0x22b2;
                iStack_8 = 0x872;
                FUN_21f2_2d26();
                iStack_4 = unaff_BP + -0xf0;
                iStack_6 = unaff_BP + -0xe8;
                iStack_8 = unaff_BP + -0xd0;
                *(undefined2 *)0xc20 = 1;
                iStack_a = 1;
                iStack_c = 0x22b2;
                iVar12 = 0x1bb4;
                uStack_e = 0x893;
                iVar6 = FUN_1def_0904();
                *(int *)(unaff_BP + -0x2cc) = iVar6;
                *(undefined2 *)0xc20 = 0;
                if (*(int *)0x158 != 0) goto LAB_3ab8_5c61;
                if (iVar6 == -1) break;
                if (*(int *)(unaff_BP + -0x6a) != 0) {
                  iStack_4 = unaff_BP + -0xe8;
                  iStack_6 = *(undefined2 *)(unaff_BP + -0x6a);
                  iStack_8 = 0x1bb4;
                  iVar12 = 0x11f2;
                  iStack_a = 0xa76;
                  iVar6 = func_0x00015409();
                  if (iVar6 != 0) {
                    uVar9 = *(undefined2 *)(unaff_BP + -0xe6);
                    *(undefined2 *)(unaff_BP + -0x1ea) = *(undefined2 *)(unaff_BP + -0xe8);
                    *(undefined2 *)(unaff_BP + -0x1e8) = uVar9;
                    uVar9 = *(undefined2 *)(unaff_BP + -0xee);
                    *(undefined2 *)(unaff_BP + -0x2c6) = *(undefined2 *)(unaff_BP + -0xf0);
                    *(undefined2 *)(unaff_BP + -0x2c4) = uVar9;
                    iStack_4 = 0x11f2;
                    iStack_6 = 0xaa8;
                    func_0x0000daa6();
                    iStack_4 = *(undefined2 *)0x11e4;
                    iStack_6 = 0x885;
                    iStack_8 = 0xab9;
                    func_0x000297e6();
                    iStack_6 = 0x22b2;
                    iStack_8 = 0xabe;
                    func_0x00029d78();
                    uStack_e = 0x22b2;
                    uStack_10 = 0xac8;
                    func_0x000299d1();
                    uStack_e = 0x22b2;
                    uStack_10 = 0xad1;
                    func_0x000297e6();
                    uStack_e = 0x22b2;
                    uStack_10 = 0xad6;
                    func_0x00029d78();
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xae0;
                    func_0x000299d1();
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xae9;
                    func_0x000297e6();
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xaee;
                    func_0x00029d78();
                    iStack_1e = 0x22b2;
                    uStack_20 = 0xaf8;
                    func_0x000299d1();
                    iStack_1e = unaff_BP + -0xd0;
                    uStack_20 = 0x22b2;
                    uStack_22 = 0xb01;
                    iStack_4 = FUN_4375_b880();
                    *(undefined2 *)(unaff_BP + -0xea) = iStack_4;
                    iStack_6 = 2;
                    iStack_8 = 0x12;
                    iStack_a = unaff_BP + -0xd0;
                    iStack_c = 0x22b2;
                    uStack_e = 0xb1b;
                    FUN_1000_02b5();
                    iStack_4 = *(undefined2 *)(unaff_BP + -2);
                    iStack_6 = *(undefined2 *)(unaff_BP + -4);
                    iStack_8 = unaff_BP + -0x5e;
                    iStack_a = 0xdef;
                    iStack_c = 0xb35;
                    func_0x000297e6();
                    iStack_a = 0x22b2;
                    iStack_c = 0xb3a;
                    func_0x00029d78();
                    iStack_12 = 0x22b2;
                    iVar12 = 0x22b2;
                    iStack_14 = 0xb44;
                    func_0x000299d1();
                    iStack_12 = unaff_BP + -0xf2;
                    iStack_14 = unaff_BP + -0xe4;
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xb52;
                    iVar6 = FUN_4375_882f();
                    *(int *)(unaff_BP + -6) = iVar6;
                    if (iVar6 < 1) goto LAB_3ab8_5c61;
                    *(undefined1 *)0x11d7 = 0;
                    iStack_4 = *(undefined2 *)(unaff_BP + -2);
                    iStack_6 = *(undefined2 *)(unaff_BP + -4);
                    iStack_8 = *(undefined2 *)0x11e4;
                    iStack_a = 0x22b2;
                    iStack_c = 0xb7a;
                    func_0x000297e6();
                    iStack_a = 0x22b2;
                    iStack_c = 0xb7f;
                    func_0x00029d78();
                    iStack_12 = 0x22b2;
                    iStack_14 = 0xb89;
                    func_0x000299d1();
                    iStack_12 = *(int *)(unaff_BP + -6);
                    iStack_14 = 0x22b2;
                    uStack_16 = 0xb95;
                    func_0x000297e6();
                    iStack_14 = 0x22b2;
                    uStack_16 = 0xb9a;
                    func_0x00029d78();
                    iStack_1c = 0x22b2;
                    iStack_1e = 0xba4;
                    func_0x000299d1();
                    iStack_1c = 0x22b2;
                    iStack_1e = 0xbad;
                    func_0x000297e6();
                    iStack_1c = 0x22b2;
                    iStack_1e = 0xbb2;
                    func_0x00029d78();
                    uStack_24 = 0x22b2;
                    func_0x000299d1();
                    uStack_24 = *(undefined2 *)(unaff_BP + -0xf2);
                    iStack_28 = unaff_BP + -0x2c6;
                    iStack_2a = unaff_BP + -0x1ea;
                    uStack_2c = *(undefined2 *)(unaff_BP + -0x2c8);
                    uStack_2e = *(undefined2 *)0x11e;
                    pcVar5 = (code *)swi(0x3f);
                    uVar9 = (*pcVar5)();
                    *(undefined2 *)(unaff_BP + -0x2cc) = uVar9;
                    func_0x0000daa6();
                    iStack_4 = 3;
                    iStack_6 = 0x885;
                    iStack_8 = 0xc03;
                    func_0x0000f2cb();
                    *(undefined2 *)0x11c = 1;
                    iVar12 = 0x885;
                    func_0x0000a7c5();
                    *(undefined2 *)0xc08 = 0;
                    *(undefined2 *)0xbc0 = 1;
                    goto LAB_3ab8_609d;
                  }
                }
              }
              iVar6 = iVar12;
              if (0x31 < *(int *)(unaff_BP + -0x2c8)) {
                iStack_4 = 0x1bb4;
                iStack_6 = 0xa21;
                func_0x0000daa6();
                iStack_4 = 0x885;
                iStack_6 = 0xa2b;
                FUN_1def_186d();
                iStack_4 = 0x1bb4;
                iStack_6 = 0xa34;
                func_0x0000daa6();
                *(undefined2 *)(unaff_BP + -0x2ca) = *(undefined2 *)0x150;
                iStack_4 = 0x885;
                iStack_6 = 0xa42;
                func_0x000190c7();
                iStack_4 = 0x18b3;
                iStack_6 = 0xa4c;
                func_0x0000b1d8();
                iStack_4 = 0xa52;
                func_0x0000abfa();
                *(undefined2 *)(unaff_BP + -0x6a) = 0;
                *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + -1;
                iVar6 = 0x885;
              }
              goto LAB_3ab8_5bf7;
            }
            iVar6 = iVar12;
            if (*(int *)(unaff_BP + -0x6a) == 0) goto LAB_3ab8_5bf7;
            if (0x31 < *(int *)(unaff_BP + -0x2c8)) {
LAB_3ab8_5e73:
              if (0x31 < *(int *)(unaff_BP + -0x2c8)) {
                iVar12 = 0x11f2;
                iStack_6 = 0xa06;
                iStack_4 = iVar6;
                func_0x00012276();
                goto LAB_3ab8_5cc4;
              }
              goto LAB_3ab8_5bf7;
            }
            iStack_4 = unaff_BP + -0xe8;
            iStack_6 = *(undefined2 *)(unaff_BP + -0x6a);
            iVar6 = 0x11f2;
            iStack_a = 0x8d2;
            iStack_8 = iVar12;
            iVar10 = func_0x00015409();
            if (iVar10 == 0) {
              if (0 < *(int *)(unaff_BP + -0x2c8)) goto LAB_3ab8_5e73;
              goto LAB_3ab8_559e;
            }
            if ((*(int *)(unaff_BP + -2) == 0 && *(int *)(unaff_BP + -4) == 0) ||
               (iVar10 = FUN_4375_7f31(), iVar10 == 0)) {
              iStack_4 = 0x11f2;
              iStack_6 = 0x91a;
              func_0x0000daa6();
              iStack_4 = 0x924;
              func_0x000297e6();
              iStack_4 = 0x929;
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0x933;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x93c;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0x941;
              func_0x00029d78();
              iStack_12 = 0x22b2;
              iStack_14 = 0x94b;
              func_0x000299d1();
              iStack_12 = 0x22b2;
              iStack_14 = 0x950;
              FUN_1def_1208();
              uVar9 = *(undefined2 *)(unaff_BP + -0xe8);
              uVar11 = *(undefined2 *)(unaff_BP + -0xe6);
              *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + 1;
              iVar6 = *(int *)(unaff_BP + -0x2c8) * 4;
              *(undefined2 *)(unaff_BP + iVar6 + -0x1ea) = uVar9;
              *(undefined2 *)(unaff_BP + iVar6 + -0x1e8) = uVar11;
              uVar9 = *(undefined2 *)(unaff_BP + -0xee);
              *(undefined2 *)(unaff_BP + iVar6 + -0x2c6) = *(undefined2 *)(unaff_BP + -0xf0);
              *(undefined2 *)(unaff_BP + iVar6 + -0x2c4) = uVar9;
              iStack_4 = 0x7562;
              iStack_6 = unaff_BP + -0xd0;
              iStack_8 = 0x1bb4;
              iStack_a = 0x996;
              FUN_21f2_3454();
              uVar9 = *(undefined2 *)0xa812;
              *(undefined2 *)0xb76a = *(undefined2 *)0xa810;
              *(undefined2 *)0xb76c = uVar9;
              uVar9 = *(undefined2 *)0xa7fe;
              *(undefined2 *)0xb784 = *(undefined2 *)0xa7fc;
              *(undefined2 *)0xb786 = uVar9;
              uVar9 = *(undefined2 *)(unaff_BP + -0xe6);
              *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0xe8);
              *(undefined2 *)0xb30e = uVar9;
              uVar9 = *(undefined2 *)(unaff_BP + -0xee);
              *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -0xf0);
              *(undefined2 *)0xb380 = uVar9;
              iStack_4 = 2;
              iStack_6 = 0x22b2;
              iStack_8 = 0x9e0;
              FUN_4375_ac1f();
              iStack_4 = 0x9e7;
              func_0x0000abfa();
              iVar6 = 0x885;
              goto LAB_3ab8_5e73;
            }
            if (*(int *)(unaff_BP + -0x2c8) < 1) goto LAB_3ab8_559e;
            goto LAB_3ab8_5bf7;
          }
LAB_3ab8_5c61:
          *(undefined2 *)(unaff_BP + -0x2cc) = 0xffff;
LAB_3ab8_609d:
          if (-1 < *(int *)(unaff_BP + -0x2cc)) {
            iVar10 = *(int *)(unaff_BP + -0x2c8);
            *(int *)0x11e = *(int *)0x11e + iVar10;
            goto LAB_3ab8_6175;
          }
          if (*(int *)(unaff_BP + -0x2cc) == -2) {
            iStack_6 = 0xc37;
            iStack_4 = iVar12;
            func_0x00012276();
            if (*(int *)0xc22 < 2) {
              *(undefined2 *)0xc22 = 2;
            }
            iStack_4 = 0x14;
            iStack_6 = 0x11f2;
            iStack_8 = 0xc52;
            FUN_1000_0599();
            iStack_4 = 0xdef;
            iVar12 = 0x11f2;
            iStack_6 = 0xc5d;
            func_0x00012276();
          }
          uVar9 = 0x11f2;
          iStack_6 = 0xc66;
          iStack_4 = iVar12;
          func_0x0001470b();
          while (iStack_4 = uVar9, 0 < *(int *)(unaff_BP + -0x2c8)) {
            uVar9 = 0x885;
            iStack_6 = 0xc71;
            func_0x0000daa6();
            iVar6 = *(int *)0x152;
            *(int *)(unaff_BP + -0x2ca) = iVar6;
            if (0 < iVar6) {
              iStack_4 = 0x885;
              uVar9 = 0x1bb4;
              iStack_6 = 0xc83;
              FUN_1def_186d();
            }
            iStack_6 = 0xc8c;
            iStack_4 = uVar9;
            func_0x0000daa6();
            *(undefined2 *)(unaff_BP + -0x2ca) = *(undefined2 *)0x150;
            iStack_4 = 0x885;
            while (uVar11 = iStack_4, 0 < *(int *)(unaff_BP + -0x2ca)) {
              uVar11 = 0;
              iStack_6 = 0xc9f;
              uVar15 = func_0x00000398();
              if ((*(byte *)((int)uVar15 + 0x16) & 0x80) == 0) break;
              *(int *)(unaff_BP + -0x2ca) = *(int *)(unaff_BP + -0x2ca) + -1;
              iStack_4 = uVar11;
            }
            uVar9 = uVar11;
            if (0 < *(int *)(unaff_BP + -0x2ca)) {
              uVar9 = 0x18b3;
              iStack_6 = 0xcc6;
              iStack_4 = uVar11;
              func_0x000190c7();
            }
            *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + -1;
          }
          iStack_6 = 0xcdb;
          func_0x0000b1d8();
          iVar6 = 0x885;
          iStack_4 = 0xce1;
          iVar10 = func_0x0000abfa();
          if (*(int *)0x158 != 0) {
            return iVar10;
          }
        } while( true );
      }
      goto LAB_3ab8_5b31;
    }
    if (*(int *)0x158 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return iVar10;
LAB_3ab8_6175:
  if (((*(int *)(unaff_BP + -0xd6) == 3) && (*(int *)(unaff_BP + -0xe2) == 4)) ||
     ((*(int *)(unaff_BP + -0xd6) == 4 && (*(int *)(unaff_BP + -0xe2) == 1)))) {
    *(undefined1 *)(unaff_BP + -0x5a) = 0;
    iStack_4 = 0x11e0;
    iStack_6 = 0x11dc;
    iStack_8 = 0x11d8;
    iStack_c = 0xd29;
    iStack_a = iVar12;
    iVar10 = FUN_4375_b98a();
  }
  if (*(int *)(unaff_BP + -0xe2) == 0x14) {
LAB_3ab8_5b31:
    if (*(int *)(unaff_BP + -0xd6) != 0x14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return iVar10;
  }
  iVar6 = iVar12;
  if (*(int *)0x158 != 0) {
    return iVar10;
  }
  goto LAB_3ab8_558d;
}



/* 3ab8:522f  FUN_3ab8_522f  142 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */

int __cdecl16far FUN_3ab8_522f(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined2 uVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  int iStack_2a;
  int iStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  int iStack_1e;
  int iStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x3ab8;
  iStack_8 = 0xfdbd;
  FUN_21f2_2d26();
  iStack_4 = 5;
  iStack_6 = 0x22b2;
  iStack_8 = 0xfdcd;
  FUN_1def_07a4();
  *(undefined2 *)0xc2c = 1;
  iStack_4 = unaff_BP + -0xf0;
  iStack_6 = unaff_BP + -0xe8;
  iStack_8 = unaff_BP + -0xd0;
  iStack_a = 0;
  iStack_c = 0x1bb4;
  iVar9 = 0x1bb4;
  uStack_e = 0xfdf0;
  iVar5 = FUN_1def_0904();
  *(int *)(unaff_BP + -0xe2) = iVar5;
  *(undefined2 *)0xc2c = 0;
  if (*(int *)0x158 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((((iVar5 == 1) || (iVar5 == 2)) || (iVar5 == 3)) || (iVar5 == 4)) {
    iStack_4 = 0x1bb4;
    iStack_6 = -0x1e0;
    FUN_3ab8_390b();
  }
  if (*(int *)(unaff_BP + -0xe2) == 5) {
    iVar9 = 0x885;
    iStack_4 = 0xfe2d;
    func_0x0000c3ca();
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
  }
  if (*(int *)(unaff_BP + -0xe2) != 0x14) {
    iStack_4 = 0x38;
    FUN_32b2_7095();
    iStack_4 = 0x40;
    FUN_32b2_6eb1();
    iStack_4 = 0x48;
    FUN_32b2_6d14();
    iStack_4 = 0x50;
    FUN_32b2_6e63();
    iStack_4 = 0x58;
    FUN_32b2_6d14();
    iStack_4 = 0x60;
    FUN_32b2_6e63();
    return 1;
  }
  *(undefined2 *)(unaff_BP + -0x60) = 0;
  uVar6 = *(undefined2 *)0x14a;
  *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)0x148;
  *(undefined2 *)(unaff_BP + -8) = uVar6;
  *(undefined2 *)(unaff_BP + -0xd8) = *(undefined2 *)0x150;
  if (*(int *)(unaff_BP + -0xd6) != 2) {
    while( true ) {
      iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
      iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
      iStack_c = 0x119;
      iStack_a = iVar9;
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
      iStack_a = *(int *)(unaff_BP + -0xbc);
      iStack_c = 0x32b2;
      uStack_e = 0x150;
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
      iStack_a = *(int *)(unaff_BP + -0x7c);
      iStack_c = *(undefined2 *)(unaff_BP + -0x7e);
      uStack_e = *(undefined2 *)(unaff_BP + -0x80);
      uStack_10 = *(undefined2 *)(unaff_BP + -0x82);
      iStack_12 = *(undefined2 *)(unaff_BP + -0x58);
      iStack_14 = *(undefined2 *)(unaff_BP + -0x5a);
      uStack_16 = *(undefined2 *)(unaff_BP + -0x5c);
      uStack_18 = *(undefined2 *)(unaff_BP + -0x5e);
      uStack_1a = 0x32b2;
      iStack_1c = 0x1d0;
      FUN_32b2_6cc6();
      uStack_1a = 0x32b2;
      iStack_1c = 0x1d5;
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
      iStack_2a = 0x32b2;
      uStack_2c = 0x1f6;
      FUN_32b2_6eb1();
      iStack_2a = 0x32b2;
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
      iStack_12 = 0x32b2;
      iStack_14 = 0x240;
      FUN_32b2_6eb1();
      iStack_12 = 0x32b2;
      iStack_14 = 0x248;
      FUN_32b2_6cc6();
      iStack_12 = 0x32b2;
      iStack_14 = 0x24d;
      FUN_32b2_7258();
      uStack_1a = 0x32b2;
      iStack_1c = 599;
      FUN_32b2_6eb1();
      uStack_1a = 0x32b2;
      iStack_1c = 0x25f;
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
      iStack_2a = 0x32b2;
      uStack_2c = 0x288;
      FUN_32b2_6eb1();
      iStack_2a = 0x32b2;
      uStack_2c = 0x290;
      FUN_32b2_6cc6();
      iStack_2a = 0x32b2;
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
      iStack_a = 0x32b2;
      iStack_c = 0x2d4;
      FUN_32b2_6cc6();
      iStack_a = 0x32b2;
      iStack_c = 0x2d9;
      FUN_32b2_7258();
      iStack_12 = 0x32b2;
      iStack_14 = 0x2e3;
      FUN_32b2_6eb1();
      iStack_12 = 0x32b2;
      iStack_14 = 0x2eb;
      FUN_32b2_6cc6();
      iStack_12 = 0x32b2;
      iStack_14 = 0x2f0;
      FUN_32b2_7258();
      uStack_1a = 0x32b2;
      iStack_1c = 0x2fa;
      FUN_32b2_6eb1();
      uStack_1a = 0x32b2;
      iStack_1c = 0x302;
      FUN_32b2_6d14();
      uStack_22 = 0x32b2;
      uStack_24 = 0x30c;
      FUN_32b2_6eb1();
      uStack_22 = 0x32b2;
      uStack_24 = 0x314;
      FUN_32b2_6d14();
      iStack_2a = 0x32b2;
      uStack_2c = 0x31e;
      FUN_32b2_6eb1();
      iStack_2a = 0x32b2;
      uStack_2c = 0x326;
      FUN_32b2_6cc6();
      iStack_2a = 0x32b2;
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
      uVar12 = (undefined1 *)0xffc9 < &uStack_36;
      uVar13 = &stack0x0000 == (undefined1 *)0x0;
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
      if (!(bool)uVar12 && !(bool)uVar13) {
        iStack_4 = 0x3da;
        FUN_32b2_6d14();
        iStack_4 = 0x3e2;
        FUN_32b2_6d14();
        iStack_4 = 999;
        FUN_32b2_7191();
        if (!(bool)uVar13) {
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
          iStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
          iStack_1e = *(undefined2 *)(unaff_BP + -0x48);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
          iStack_28 = 0x622;
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
          uVar6 = *(undefined2 *)(unaff_BP + -0x60);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)(unaff_BP + -0x84) = uVar6;
          uVar6 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
          iStack_4 = unaff_BP + -0x86;
          puVar8 = &uStack_24;
          puVar7 = (undefined2 *)(unaff_BP + 0x1c);
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          iStack_28 = 0x684;
          iVar5 = FUN_3ab8_522f();
          uVar12 = 0;
          uVar13 = iVar5 == 0;
          if (!(bool)uVar13) {
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
            if ((bool)uVar12 || (bool)uVar13) {
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
              if ((bool)uVar12 || (bool)uVar13) {
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
          if (!(bool)uVar12) {
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
            if (!(bool)uVar12) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
            iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
            iStack_a = 0x32b2;
            iStack_c = 0x774;
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
            iStack_a = 0x7d9;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0x7de;
            FUN_32b2_7258();
            uStack_10 = 0x32b2;
            iStack_12 = 0x7e8;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            iStack_12 = 0x7f0;
            FUN_32b2_6cc6();
            uStack_10 = 0x32b2;
            iStack_12 = 0x7f5;
            FUN_32b2_7258();
            uStack_18 = 0x32b2;
            uStack_1a = 0x7ff;
            FUN_32b2_6eb1();
            uStack_18 = *(undefined2 *)(unaff_BP + -100);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
            iStack_1c = *(undefined2 *)(unaff_BP + -0x68);
            iStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
            iStack_28 = 0x32b2;
            iStack_2a = 0x820;
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
            uVar12 = (undefined1 *)0xffc9 < &uStack_38;
            uVar13 = &stack0x0000 == (undefined1 *)0x2;
            iStack_4 = 0x32b2;
            iStack_6 = 0x84f;
            FUN_32b2_6cc6();
            iStack_4 = 0x32b2;
            iStack_6 = 0x857;
            FUN_32b2_6cc6();
            iStack_4 = 0x32b2;
            iStack_6 = 0x85c;
            FUN_32b2_7191();
            if ((bool)uVar13) {
              uVar6 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar6;
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
            iStack_4 = 0x32b2;
            iStack_6 = 0x8d7;
            FUN_32b2_6d14();
            iStack_4 = 0x32b2;
            iStack_6 = 0x8e0;
            FUN_32b2_6d14();
            iStack_4 = 0x32b2;
            iStack_6 = 0x8e5;
            FUN_32b2_7191();
            if (!(bool)uVar12 && !(bool)uVar13) {
              iStack_4 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
              iStack_a = *(int *)(unaff_BP + -0xbc);
              iStack_c = 0x32b2;
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
              iStack_a = 0x32b2;
              iStack_c = 0x969;
              FUN_32b2_6cc6();
              iStack_a = 0x32b2;
              iStack_c = 0x96e;
              FUN_32b2_7258();
              iStack_12 = 0x32b2;
              iStack_14 = 0x978;
              FUN_32b2_6eb1();
              iStack_12 = 0x32b2;
              iStack_14 = 0x980;
              FUN_32b2_6cc6();
              iStack_12 = 0x32b2;
              iStack_14 = 0x985;
              FUN_32b2_7258();
              uStack_1a = 0x32b2;
              iStack_1c = 0x98f;
              FUN_32b2_6eb1();
              uStack_1a = *(undefined2 *)(unaff_BP + -100);
              iStack_1c = *(undefined2 *)(unaff_BP + -0x66);
              iStack_1e = *(undefined2 *)(unaff_BP + -0x68);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
              uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
              iStack_28 = *(undefined2 *)(unaff_BP + -0x4e);
              iStack_2a = 0x32b2;
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
                uVar6 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar6;
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
            return *(int *)(unaff_BP + -0x36);
          }
        }
        return 0;
      }
      iStack_4 = 0x3f5;
      FUN_32b2_6d14();
      iStack_4 = 0x32b2;
      iStack_6 = 0x3ff;
      FUN_32b2_7154();
      iVar9 = 0x32b2;
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
  iStack_4 = *(undefined2 *)(unaff_BP + -10);
  iStack_8 = 0xfe6e;
  iStack_6 = iVar9;
  FUN_3ab8_4c52();
  *(undefined2 *)(unaff_BP + -0x60) = 10000;
  if ((*(int *)(unaff_BP + -8) <= *(int *)0x14a) &&
     ((*(int *)(unaff_BP + -8) < *(int *)0x14a || (*(uint *)(unaff_BP + -10) < *(uint *)0x148)))) {
    *(undefined2 *)(unaff_BP + -0x60) = 9999;
  }
  iStack_4 = *(undefined2 *)0x11e4;
  iStack_8 = 0xfe9e;
  iStack_6 = iVar9;
  func_0x000297e6();
  iStack_6 = 0x22b2;
  iStack_8 = 0xfea3;
  func_0x00029d78();
  uStack_e = 0x22b2;
  uStack_10 = 0xfead;
  func_0x000299d1();
  uStack_e = 0x22b2;
  uStack_10 = 0xfeb6;
  func_0x000297e6();
  uStack_e = 0x22b2;
  uStack_10 = 0xfebb;
  func_0x00029d78();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfec5;
  func_0x000299d1();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfece;
  func_0x000297e6();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfed3;
  func_0x00029d78();
  iStack_1e = 0x22b2;
  uStack_20 = 0xfedd;
  func_0x000299d1();
  iStack_1e = unaff_BP + -0xd0;
  uStack_20 = 0x22b2;
  uStack_22 = 0xfee6;
  iStack_4 = FUN_3ab8_4450();
  *(undefined2 *)(unaff_BP + -0xea) = iStack_4;
  iStack_6 = 2;
  iStack_8 = 0x12;
  iStack_a = unaff_BP + -0xd0;
  iStack_c = 0x22b2;
  iVar5 = 0xdef;
  uStack_e = 0xff00;
  FUN_1000_02b5();
  if (*(int *)0xc22 < 1) {
    *(undefined2 *)0xc22 = 1;
  }
  if (*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) {
    if (*(int *)0xc22 < 2) {
      *(undefined2 *)0xc22 = 2;
    }
    iStack_4 = 2;
    iStack_6 = 3;
    iStack_8 = 0x47;
    iStack_a = 0x11cc;
    iStack_c = 0xdef;
    uStack_e = 0xff41;
    FUN_1000_02b5();
    uVar12 = (undefined1 *)0xfff5 < &iStack_a;
    iStack_4 = 0xff4d;
    func_0x00029834();
    iStack_4 = 0xff56;
    func_0x000297e6();
    iStack_4 = 0xff5b;
    func_0x00029ae7();
    iStack_4 = 0xff60;
    func_0x00029d78();
    iVar9 = 0x22b2;
    iStack_4 = 0xff65;
    FUN_28b3_1181();
    if (!(bool)uVar12) {
      iStack_4 = 2;
      iStack_6 = 3;
      iStack_8 = 0x1a;
      iStack_a = 0x998;
      iStack_c = 0x22b2;
      iVar9 = 0xdef;
      uStack_e = 0xff80;
      FUN_1000_02b5();
    }
    iVar5 = iVar9;
    if (*(char *)(unaff_BP + -0x5a) != '\0') {
      iStack_4 = 6;
      iStack_6 = 3;
      iStack_8 = 0x1e;
      iStack_a = unaff_BP + -0x5a;
      iVar5 = 0xdef;
      uStack_e = 0xffa2;
      iStack_c = iVar9;
      FUN_1000_02b5();
    }
  }
  iStack_4 = *(undefined2 *)0xcb2;
  iStack_6 = 0;
  iStack_8 = 3;
  iStack_c = 0xffb9;
  iStack_a = iVar5;
  func_0x0000f2cb();
  iStack_4 = 0xffc1;
  func_0x0000a799();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x885;
  iStack_8 = 0xffcf;
  FUN_21f2_3454();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x22b2;
  iStack_8 = 0xffdf;
  FUN_21f2_2d26();
  iStack_4 = 4;
  iStack_6 = 0x22b2;
  iStack_8 = 0xffef;
  FUN_1def_07a4();
  *(undefined2 *)0xc2c = 1;
  iStack_4 = unaff_BP + -0xf0;
  iStack_6 = unaff_BP + -0xe8;
  iStack_8 = unaff_BP + -0xd0;
  iStack_a = *(int *)(unaff_BP + -0x60);
  iStack_c = 0x1bb4;
  uStack_e = 0x12;
  uVar6 = FUN_1def_0904();
  *(undefined2 *)(unaff_BP + -0xe2) = uVar6;
  *(undefined2 *)0xc2c = 0;
  iStack_4 = 0x1bb4;
  iVar5 = 0x885;
  iStack_6 = 0x24;
  iVar9 = func_0x0000daa6();
  if (*(int *)0x158 == 0) {
    if (*(int *)(unaff_BP + -0xe2) == -1) {
      iStack_4 = *(undefined2 *)0xcb2;
      iStack_6 = 0;
      iStack_8 = 3;
      iStack_a = 0x885;
      iStack_c = 0x57;
      func_0x0000f2cb();
      iStack_4 = 0x5f;
      func_0x0000a799();
      iStack_4 = 0x885;
      while (*(int *)(unaff_BP + -0xd8) < *(int *)0x150) {
        *(int *)(unaff_BP + -0xda) = *(int *)0x150;
        iStack_6 = 0x6b;
        func_0x000190c7();
        iStack_4 = 0x18b3;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -8);
      *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -10);
      *(undefined2 *)0x14a = uVar6;
      iStack_4 = 0x87;
      func_0x0000abfa();
      iStack_4 = 0x885;
      iStack_6 = 0x90;
      func_0x0000b1d8();
      iStack_4 = 0x885;
      iVar5 = 0x11f2;
      iStack_6 = 0x99;
      iVar9 = func_0x0001470b();
    }
    if ((*(int *)(unaff_BP + -0xe2) == 1) || (*(int *)(unaff_BP + -0xe2) == 2)) {
      uVar6 = *(undefined2 *)0x14a;
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)0x148;
      *(undefined2 *)(unaff_BP + -8) = uVar6;
      *(undefined2 *)(unaff_BP + -0xd8) = *(undefined2 *)0x150;
      iStack_4 = *(undefined2 *)(unaff_BP + -2);
      iStack_6 = *(undefined2 *)(unaff_BP + -4);
      iStack_8 = unaff_BP + -0x5e;
      iStack_c = 0xd6;
      iStack_a = iVar5;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = 0xdb;
      func_0x00029d78();
      iStack_12 = 0x22b2;
      iVar5 = 0x22b2;
      iStack_14 = 0xe5;
      func_0x000299d1();
      iStack_12 = unaff_BP + -0xf2;
      iStack_14 = unaff_BP + -0xe4;
      uStack_16 = 0x22b2;
      uStack_18 = 0xf3;
      iVar9 = FUN_4375_882f();
      *(int *)(unaff_BP + -6) = iVar9;
      if (iVar9 < 1) goto LAB_3ab8_5580;
      uVar6 = *(undefined2 *)0xa812;
      *(undefined2 *)(unaff_BP + -0xd4) = *(undefined2 *)0xa810;
      *(undefined2 *)(unaff_BP + -0xd2) = uVar6;
      if (*(int *)(unaff_BP + -0xe2) == 1) {
        uVar6 = *(undefined2 *)0xa8da;
        *(undefined2 *)(unaff_BP + -0xd4) = *(undefined2 *)0xa8d8;
        *(undefined2 *)(unaff_BP + -0xd2) = uVar6;
      }
      *(undefined1 *)0x11d7 = 0;
      iStack_4 = *(undefined2 *)(unaff_BP + -4);
      iStack_6 = *(int *)0x11e4;
      iStack_8 = 0x22b2;
      iStack_a = 0x32f;
      func_0x000297e6();
      iStack_8 = 0x22b2;
      iStack_a = 0x334;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      iStack_12 = 0x33e;
      func_0x000299d1();
      uStack_10 = *(undefined2 *)(unaff_BP + -6);
      iStack_12 = 0x22b2;
      iStack_14 = 0x34a;
      func_0x000297e6();
      iStack_12 = 0x22b2;
      iStack_14 = 0x34f;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      iStack_1c = 0x359;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      iStack_1c = 0x362;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      iStack_1c = 0x367;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x371;
      func_0x000299d1();
      uStack_22 = *(undefined2 *)(unaff_BP + -0xf2);
      uStack_24 = *(undefined2 *)(unaff_BP + -0xe4);
      iStack_28 = 0x382;
      func_0x000297e6();
      iStack_28 = 0x387;
      func_0x00029d78();
      uStack_2e = 0x22b2;
      iVar5 = 0x22b2;
      uStack_30 = 0x391;
      func_0x000299d1();
      pcVar4 = (code *)swi(0x3f);
      iVar9 = (*pcVar4)();
      *(undefined2 *)0x11c = 1;
    }
    if (*(int *)(unaff_BP + -0xe2) == 3) {
      uVar6 = *(undefined2 *)0x14a;
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)0x148;
      *(undefined2 *)(unaff_BP + -8) = uVar6;
      *(undefined2 *)(unaff_BP + -0xd8) = *(undefined2 *)0x150;
      do {
        do {
          do {
            while( true ) {
              iStack_4 = 0x3c6;
              func_0x000297e6();
              iStack_4 = 0x3ce;
              func_0x0002996b();
              iStack_4 = 0x3d6;
              func_0x00029983();
              iStack_4 = 0x3db;
              func_0x0001bb4e();
              iStack_4 = 0x1bb4;
              iStack_6 = 0x3e4;
              func_0x00012276();
              iStack_4 = 0x14;
              iStack_6 = unaff_BP + -0xf0;
              iStack_8 = unaff_BP + -0xe8;
              iStack_a = unaff_BP + -0x68;
              iStack_c = unaff_BP + -100;
              uStack_e = 0x11f2;
              uStack_10 = 0x404;
              iVar5 = func_0x000021a4();
              *(int *)(unaff_BP + -0x6c) = iVar5;
              if (iVar5 + 1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (*(int *)0x158 != 0) {
                return iVar5 + 1;
              }
              if (*(int *)0x11e4 == 0) break;
              uVar12 = 0;
              uVar13 = *(int *)(unaff_BP + -0x6c) == 0;
              if ((bool)uVar13) {
                iStack_4 = 0x432;
                func_0x000297e6();
                iStack_4 = 0x43b;
                func_0x000297e6();
                iStack_4 = 0x440;
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  iStack_4 = 0x44a;
                  func_0x000297e6();
                  iStack_4 = 0x453;
                  func_0x000297e6();
                  iStack_4 = 0x458;
                  FUN_28b3_1181();
                  if (!(bool)uVar12) goto LAB_3ab8_58dd;
                }
              }
            }
            uVar12 = 0;
            uVar13 = *(int *)(unaff_BP + -0x6c) == 0;
          } while (!(bool)uVar13);
          iStack_4 = 0x4c4;
          func_0x000297e6();
          iStack_4 = 0x4cc;
          func_0x000297e6();
          iStack_4 = 0x4d1;
          FUN_28b3_1181();
        } while ((bool)uVar12);
        iStack_4 = 0x4dc;
        func_0x000297e6();
        iStack_4 = 0x4e4;
        func_0x000297e6();
        iStack_4 = 0x4e9;
        FUN_28b3_1181();
      } while (!(bool)uVar12 && !(bool)uVar13);
LAB_3ab8_58dd:
      uVar6 = *(undefined2 *)(unaff_BP + -0x62);
      *(undefined2 *)(unaff_BP + -0xd4) = *(undefined2 *)(unaff_BP + -100);
      *(undefined2 *)(unaff_BP + -0xd2) = uVar6;
      iStack_4 = 0x22b2;
      iStack_6 = 0x473;
      func_0x0000daa6();
      iStack_4 = *(undefined2 *)(unaff_BP + -2);
      iStack_6 = *(undefined2 *)(unaff_BP + -4);
      iStack_8 = unaff_BP + -0x5e;
      iStack_a = 0x885;
      iStack_c = 0x48b;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = 0x490;
      func_0x00029d78();
      iStack_12 = 0x22b2;
      iVar5 = 0x22b2;
      iStack_14 = 0x49a;
      func_0x000299d1();
      iStack_12 = unaff_BP + -0xf2;
      iStack_14 = unaff_BP + -0xe4;
      uStack_16 = 0x22b2;
      uStack_18 = 0x4a8;
      iVar9 = FUN_4375_882f();
      *(int *)(unaff_BP + -6) = iVar9;
      if (iVar9 < 1) goto LAB_3ab8_5580;
      *(undefined1 *)0x11d7 = 0;
      iStack_4 = *(undefined2 *)(unaff_BP + -4);
      iStack_6 = *(int *)0x11e4;
      iStack_8 = 0x22b2;
      iStack_a = 0x508;
      func_0x000297e6();
      iStack_8 = 0x22b2;
      iStack_a = 0x50d;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      iStack_12 = 0x517;
      func_0x000299d1();
      uStack_10 = *(undefined2 *)(unaff_BP + -6);
      iStack_12 = 0x22b2;
      iStack_14 = 0x523;
      func_0x000297e6();
      iStack_12 = 0x22b2;
      iStack_14 = 0x528;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      iStack_1c = 0x532;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      iStack_1c = 0x53b;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      iStack_1c = 0x540;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x54a;
      func_0x000299d1();
      uStack_22 = *(undefined2 *)(unaff_BP + -0xf2);
      uStack_24 = *(undefined2 *)(unaff_BP + -0xe4);
      iStack_28 = 0x55b;
      func_0x000297e6();
      iStack_28 = 0x560;
      func_0x00029d78();
      uStack_2e = 0x22b2;
      iVar5 = 0x22b2;
      uStack_30 = 0x56a;
      func_0x000299d1();
      pcVar4 = (code *)swi(0x3f);
      iVar9 = (*pcVar4)();
      *(undefined2 *)0x11c = 1;
    }
    if (((*(int *)(unaff_BP + -0xe2) == 1) || (*(int *)(unaff_BP + -0xe2) == 2)) ||
       (*(int *)(unaff_BP + -0xe2) == 3)) {
      *(undefined2 *)0x11c = 1;
      iVar5 = 0x885;
      iStack_4 = 0x598;
      iVar9 = func_0x0000a7c5();
      *(undefined2 *)0xc08 = 0;
      *(undefined2 *)0xbc0 = 1;
    }
    if (*(int *)(unaff_BP + -0xe2) == 4) {
      *(undefined1 *)(unaff_BP + -0x5a) = 0;
      iStack_4 = 0x11e0;
      iStack_6 = 0x11dc;
      iStack_8 = 0x11d8;
      iStack_c = 0x5c3;
      iStack_a = iVar5;
      iVar9 = FUN_4375_b98a();
    }
    if (*(int *)(unaff_BP + -0xe2) == 0x14) {
LAB_3ab8_5580:
      iVar9 = *(int *)0x148;
      uVar6 = *(undefined2 *)0x14a;
      *(int *)(unaff_BP + -10) = iVar9;
      *(undefined2 *)(unaff_BP + -8) = uVar6;
LAB_3ab8_558d:
      if ((*(int *)(unaff_BP + -0xd6) == 3) || (*(int *)(unaff_BP + -0xd6) == 4)) {
LAB_3ab8_559e:
        do {
          iStack_4 = *(undefined2 *)0x11e4;
          iStack_8 = 0x12e;
          iStack_6 = iVar5;
          func_0x000297e6();
          iStack_6 = 0x22b2;
          iStack_8 = 0x133;
          func_0x00029d78();
          uStack_e = 0x22b2;
          uStack_10 = 0x13d;
          func_0x000299d1();
          uStack_e = 0x22b2;
          uStack_10 = 0x146;
          func_0x000297e6();
          uStack_e = 0x22b2;
          uStack_10 = 0x14b;
          func_0x00029d78();
          uStack_16 = 0x22b2;
          uStack_18 = 0x155;
          func_0x000299d1();
          uStack_16 = 0x22b2;
          uStack_18 = 0x15e;
          func_0x000297e6();
          uStack_16 = 0x22b2;
          uStack_18 = 0x163;
          func_0x00029d78();
          iStack_1e = 0x22b2;
          uStack_20 = 0x16d;
          func_0x000299d1();
          iStack_1e = unaff_BP + -0xd0;
          uStack_20 = 0x22b2;
          uStack_22 = 0x176;
          iStack_4 = FUN_4375_b880();
          *(undefined2 *)(unaff_BP + -0xea) = iStack_4;
          iStack_6 = 2;
          iStack_8 = 0x12;
          iStack_a = unaff_BP + -0xd0;
          iStack_c = 0x22b2;
          iVar5 = 0xdef;
          uStack_e = 400;
          FUN_1000_02b5();
          if (*(int *)0xc22 < 1) {
            *(undefined2 *)0xc22 = 1;
          }
          if (*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) {
            if (*(int *)0xc22 < 2) {
              *(undefined2 *)0xc22 = 2;
            }
            iStack_4 = 2;
            iStack_6 = 3;
            iStack_8 = 0x47;
            iStack_a = 0x11cc;
            iStack_c = 0xdef;
            uStack_e = 0x1ce;
            FUN_1000_02b5();
            uVar12 = (undefined1 *)0xfff5 < &iStack_a;
            iStack_4 = 0x1da;
            func_0x00029834();
            iStack_4 = 0x1e3;
            func_0x000297e6();
            iStack_4 = 0x1e8;
            func_0x00029ae7();
            iStack_4 = 0x1ed;
            func_0x00029d78();
            iVar5 = 0x22b2;
            iStack_4 = 0x1f2;
            FUN_28b3_1181();
            if (!(bool)uVar12) {
              iStack_4 = 2;
              iStack_6 = 3;
              iStack_8 = 0x1a;
              iStack_a = 0x998;
              iStack_c = 0x22b2;
              iVar5 = 0xdef;
              uStack_e = 0x20d;
              FUN_1000_02b5();
            }
          }
          iStack_4 = *(undefined2 *)0xcb2;
          iStack_6 = 0;
          iStack_8 = 3;
          iStack_c = 0x224;
          iStack_a = iVar5;
          func_0x0000f2cb();
          uVar6 = 0x885;
          iStack_4 = 0x22c;
          func_0x0000a799();
          if (*(int *)(unaff_BP + -0xd6) == 3) {
            iStack_4 = unaff_BP + -0xd0;
            iStack_6 = 0x885;
            uVar6 = 0x22b2;
            iStack_8 = 0x241;
            FUN_21f2_3454();
          }
          uVar10 = uVar6;
          if (*(int *)(unaff_BP + -0xd6) == 4) {
            if ((*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) &&
               (*(char *)(unaff_BP + -0x5a) != '\0')) {
              iStack_4 = 6;
              iStack_6 = 3;
              iStack_8 = 0x1e;
              iStack_a = unaff_BP + -0x5a;
              uVar10 = 0xdef;
              uStack_e = 0x271;
              iStack_c = uVar6;
              FUN_1000_02b5();
            }
            iStack_4 = *(int *)0x11e + 1;
            iStack_6 = unaff_BP + -0xd0;
            iStack_a = 0x286;
            iStack_8 = uVar10;
            FUN_4375_c05a();
          }
          iStack_4 = unaff_BP + -0xd0;
          iStack_8 = 0x297;
          iStack_6 = uVar10;
          FUN_21f2_2d26();
          iStack_4 = 4;
          iStack_6 = 0x22b2;
          iStack_8 = 0x2a7;
          FUN_1def_07a4();
          *(undefined2 *)0xc2c = 1;
          if (*(int *)(unaff_BP + -0xd6) == 4) {
            *(undefined2 *)0xc20 = 1;
          }
          iStack_4 = unaff_BP + -0xf0;
          iStack_6 = unaff_BP + -0xe8;
          iStack_8 = unaff_BP + -0xd0;
          iStack_a = 10000;
          iStack_c = 0x1bb4;
          iVar11 = 0x1bb4;
          uStack_e = 0x2d8;
          uVar6 = FUN_1def_0904();
          *(undefined2 *)(unaff_BP + -0xe2) = uVar6;
          iVar9 = 0;
          *(undefined2 *)0xc2c = 0;
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 != 0) {
            return 0;
          }
          if (((*(int *)(unaff_BP + -0xd6) == 3) && (0 < *(int *)(unaff_BP + -0xe2))) &&
             (*(int *)(unaff_BP + -0xe2) < 4)) {
            iStack_4 = 0x1bb4;
            iStack_6 = 0x5fe;
            func_0x0000daa6();
            iStack_4 = 0x885;
            iStack_6 = 0x60c;
            func_0x000297e6();
            iStack_4 = 0x22b2;
            iStack_6 = 0x611;
            func_0x00029d78();
            iStack_c = 0x22b2;
            uStack_e = 0x61b;
            func_0x000299d1();
            iStack_c = 0x22b2;
            uStack_e = 0x624;
            func_0x000297e6();
            iStack_c = 0x22b2;
            uStack_e = 0x629;
            func_0x00029d78();
            iStack_14 = 0x22b2;
            uStack_16 = 0x633;
            func_0x000299d1();
            iStack_14 = 0x22b2;
            uStack_16 = 0x63c;
            func_0x000297e6();
            iStack_14 = 0x22b2;
            uStack_16 = 0x641;
            func_0x00029d78();
            iStack_1c = 0x22b2;
            iStack_1e = 0x64b;
            func_0x000299d1();
            iStack_1c = unaff_BP + -0xd0;
            iStack_1e = 0x22b2;
            uStack_20 = 0x654;
            FUN_4375_b880();
            iStack_4 = 7;
            iStack_6 = 2;
            iStack_8 = 0x12;
            iStack_a = unaff_BP + -0xd0;
            iStack_c = 0x22b2;
            uStack_e = 0x670;
            FUN_1000_02b5();
            iStack_4 = *(undefined2 *)(unaff_BP + -2);
            iStack_6 = *(undefined2 *)(unaff_BP + -4);
            iStack_8 = unaff_BP + -0x5e;
            iStack_a = 0xdef;
            iStack_c = 0x68a;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0x68f;
            func_0x00029d78();
            iStack_12 = 0x22b2;
            iStack_14 = 0x699;
            func_0x000299d1();
            iStack_12 = unaff_BP + -0xf2;
            iStack_14 = unaff_BP + -0xe4;
            uStack_16 = 0x22b2;
            uStack_18 = 0x6a7;
            iVar9 = FUN_4375_882f();
            *(int *)(unaff_BP + -6) = iVar9;
            if (iVar9 < 1) break;
            *(undefined1 *)0x11d7 = 0;
            iStack_4 = *(undefined2 *)(unaff_BP + -2);
            iStack_6 = *(undefined2 *)(unaff_BP + -4);
            iStack_8 = *(undefined2 *)0x11e4;
            iStack_a = 0x22b2;
            iStack_c = 0x6d9;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0x6de;
            func_0x00029d78();
            iStack_12 = 0x22b2;
            iStack_14 = 0x6e8;
            func_0x000299d1();
            iStack_12 = *(int *)(unaff_BP + -6);
            iStack_14 = 0x22b2;
            uStack_16 = 0x6f4;
            func_0x000297e6();
            iStack_14 = 0x22b2;
            uStack_16 = 0x6f9;
            func_0x00029d78();
            iStack_1c = 0x22b2;
            iStack_1e = 0x703;
            func_0x000299d1();
            iStack_1c = 0x22b2;
            iStack_1e = 0x70c;
            func_0x000297e6();
            iStack_1c = 0x22b2;
            iStack_1e = 0x711;
            func_0x00029d78();
            uStack_24 = 0x22b2;
            func_0x000299d1();
            uStack_24 = *(undefined2 *)(unaff_BP + -0xf2);
            iStack_28 = *(int *)(unaff_BP + -0xe2);
            pcVar4 = (code *)swi(0x3f);
            (*pcVar4)();
            *(undefined2 *)0x11c = 1;
            iStack_4 = 3;
            iStack_6 = 0x22b2;
            iStack_8 = 0x749;
            func_0x0000f2cb();
            iVar11 = 0x885;
            func_0x0000a799();
            iStack_4 = 0x75b;
            iVar9 = FUN_4375_c082();
          }
          if ((*(int *)(unaff_BP + -0xd6) != 4) || (*(int *)(unaff_BP + -0x6a) == 0))
          goto LAB_3ab8_6175;
          *(undefined2 *)(unaff_BP + -0x2c8) = 0;
          *(undefined2 *)(unaff_BP + -0x2cc) = 0;
          iVar5 = iVar11;
LAB_3ab8_5bf7:
          iStack_4 = *(int *)0x11e + *(int *)(unaff_BP + -0x2c8) + 1;
          iStack_6 = unaff_BP + -0xd0;
          iStack_a = 0x791;
          iStack_8 = iVar5;
          FUN_4375_c05a();
          iStack_4 = unaff_BP + -0xd0;
          iVar11 = 0x22b2;
          iStack_8 = 0x7a2;
          iStack_6 = iVar5;
          FUN_21f2_2d26();
          *(undefined2 *)0xc20 = 1;
          if (0 < *(int *)(unaff_BP + -0x2c8)) {
            iStack_4 = unaff_BP + -0xf0;
            iStack_6 = unaff_BP + -0xe8;
            iStack_8 = unaff_BP + -0xd0;
            iStack_a = 1;
            iStack_c = 0x22b2;
            iVar11 = 0x1bb4;
            uStack_e = 0x7cd;
            uVar6 = FUN_1def_0904();
            *(undefined2 *)(unaff_BP + -0x2cc) = uVar6;
          }
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 == 0) {
            if (*(int *)(unaff_BP + -0x2cc) == -1) {
              iStack_6 = 0x7f9;
              iStack_4 = iVar11;
              func_0x0000daa6();
              iStack_4 = 0x885;
              iStack_6 = 0x803;
              FUN_1def_186d();
              iStack_4 = 0x1bb4;
              iStack_6 = 0x80c;
              func_0x0000daa6();
              *(undefined2 *)(unaff_BP + -0x2ca) = *(undefined2 *)0x150;
              iStack_4 = 0x885;
              iStack_6 = 0x81a;
              func_0x000190c7();
              iStack_4 = 0x18b3;
              iStack_6 = 0x824;
              func_0x0000b1d8();
              iVar5 = 0x885;
              iStack_4 = 0x82a;
              func_0x0000abfa();
              *(undefined2 *)(unaff_BP + -0x6a) = 0;
              *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + -1;
              iVar11 = iVar5;
              if (*(int *)(unaff_BP + -0x2c8) < 1) goto LAB_3ab8_559e;
            }
            if (*(int *)(unaff_BP + -0x2cc) == 1) {
LAB_3ab8_5cc4:
              while( true ) {
                iStack_4 = unaff_BP + -0xd0;
                iStack_8 = 0x852;
                iStack_6 = iVar11;
                FUN_21f2_3454();
                iStack_4 = unaff_BP + -0xd0;
                iStack_6 = 0x22b2;
                iStack_8 = 0x862;
                FUN_21f2_2d26();
                iStack_4 = unaff_BP + -0xd0;
                iStack_6 = 0x22b2;
                iStack_8 = 0x872;
                FUN_21f2_2d26();
                iStack_4 = unaff_BP + -0xf0;
                iStack_6 = unaff_BP + -0xe8;
                iStack_8 = unaff_BP + -0xd0;
                *(undefined2 *)0xc20 = 1;
                iStack_a = 1;
                iStack_c = 0x22b2;
                iVar11 = 0x1bb4;
                uStack_e = 0x893;
                iVar5 = FUN_1def_0904();
                *(int *)(unaff_BP + -0x2cc) = iVar5;
                *(undefined2 *)0xc20 = 0;
                if (*(int *)0x158 != 0) goto LAB_3ab8_5c61;
                if (iVar5 == -1) break;
                if (*(int *)(unaff_BP + -0x6a) != 0) {
                  iStack_4 = unaff_BP + -0xe8;
                  iStack_6 = *(undefined2 *)(unaff_BP + -0x6a);
                  iStack_8 = 0x1bb4;
                  iVar11 = 0x11f2;
                  iStack_a = 0xa76;
                  iVar5 = func_0x00015409();
                  if (iVar5 != 0) {
                    uVar6 = *(undefined2 *)(unaff_BP + -0xe6);
                    *(undefined2 *)(unaff_BP + -0x1ea) = *(undefined2 *)(unaff_BP + -0xe8);
                    *(undefined2 *)(unaff_BP + -0x1e8) = uVar6;
                    uVar6 = *(undefined2 *)(unaff_BP + -0xee);
                    *(undefined2 *)(unaff_BP + -0x2c6) = *(undefined2 *)(unaff_BP + -0xf0);
                    *(undefined2 *)(unaff_BP + -0x2c4) = uVar6;
                    iStack_4 = 0x11f2;
                    iStack_6 = 0xaa8;
                    func_0x0000daa6();
                    iStack_4 = *(undefined2 *)0x11e4;
                    iStack_6 = 0x885;
                    iStack_8 = 0xab9;
                    func_0x000297e6();
                    iStack_6 = 0x22b2;
                    iStack_8 = 0xabe;
                    func_0x00029d78();
                    uStack_e = 0x22b2;
                    uStack_10 = 0xac8;
                    func_0x000299d1();
                    uStack_e = 0x22b2;
                    uStack_10 = 0xad1;
                    func_0x000297e6();
                    uStack_e = 0x22b2;
                    uStack_10 = 0xad6;
                    func_0x00029d78();
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xae0;
                    func_0x000299d1();
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xae9;
                    func_0x000297e6();
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xaee;
                    func_0x00029d78();
                    iStack_1e = 0x22b2;
                    uStack_20 = 0xaf8;
                    func_0x000299d1();
                    iStack_1e = unaff_BP + -0xd0;
                    uStack_20 = 0x22b2;
                    uStack_22 = 0xb01;
                    iStack_4 = FUN_4375_b880();
                    *(undefined2 *)(unaff_BP + -0xea) = iStack_4;
                    iStack_6 = 2;
                    iStack_8 = 0x12;
                    iStack_a = unaff_BP + -0xd0;
                    iStack_c = 0x22b2;
                    uStack_e = 0xb1b;
                    FUN_1000_02b5();
                    iStack_4 = *(undefined2 *)(unaff_BP + -2);
                    iStack_6 = *(undefined2 *)(unaff_BP + -4);
                    iStack_8 = unaff_BP + -0x5e;
                    iStack_a = 0xdef;
                    iStack_c = 0xb35;
                    func_0x000297e6();
                    iStack_a = 0x22b2;
                    iStack_c = 0xb3a;
                    func_0x00029d78();
                    iStack_12 = 0x22b2;
                    iVar11 = 0x22b2;
                    iStack_14 = 0xb44;
                    func_0x000299d1();
                    iStack_12 = unaff_BP + -0xf2;
                    iStack_14 = unaff_BP + -0xe4;
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xb52;
                    iVar5 = FUN_4375_882f();
                    *(int *)(unaff_BP + -6) = iVar5;
                    if (iVar5 < 1) goto LAB_3ab8_5c61;
                    *(undefined1 *)0x11d7 = 0;
                    iStack_4 = *(undefined2 *)(unaff_BP + -2);
                    iStack_6 = *(undefined2 *)(unaff_BP + -4);
                    iStack_8 = *(undefined2 *)0x11e4;
                    iStack_a = 0x22b2;
                    iStack_c = 0xb7a;
                    func_0x000297e6();
                    iStack_a = 0x22b2;
                    iStack_c = 0xb7f;
                    func_0x00029d78();
                    iStack_12 = 0x22b2;
                    iStack_14 = 0xb89;
                    func_0x000299d1();
                    iStack_12 = *(int *)(unaff_BP + -6);
                    iStack_14 = 0x22b2;
                    uStack_16 = 0xb95;
                    func_0x000297e6();
                    iStack_14 = 0x22b2;
                    uStack_16 = 0xb9a;
                    func_0x00029d78();
                    iStack_1c = 0x22b2;
                    iStack_1e = 0xba4;
                    func_0x000299d1();
                    iStack_1c = 0x22b2;
                    iStack_1e = 0xbad;
                    func_0x000297e6();
                    iStack_1c = 0x22b2;
                    iStack_1e = 0xbb2;
                    func_0x00029d78();
                    uStack_24 = 0x22b2;
                    func_0x000299d1();
                    uStack_24 = *(undefined2 *)(unaff_BP + -0xf2);
                    iStack_28 = unaff_BP + -0x2c6;
                    iStack_2a = unaff_BP + -0x1ea;
                    uStack_2c = *(undefined2 *)(unaff_BP + -0x2c8);
                    uStack_2e = *(undefined2 *)0x11e;
                    pcVar4 = (code *)swi(0x3f);
                    uVar6 = (*pcVar4)();
                    *(undefined2 *)(unaff_BP + -0x2cc) = uVar6;
                    func_0x0000daa6();
                    iStack_4 = 3;
                    iStack_6 = 0x885;
                    iStack_8 = 0xc03;
                    func_0x0000f2cb();
                    *(undefined2 *)0x11c = 1;
                    iVar11 = 0x885;
                    func_0x0000a7c5();
                    *(undefined2 *)0xc08 = 0;
                    *(undefined2 *)0xbc0 = 1;
                    goto LAB_3ab8_609d;
                  }
                }
              }
              iVar5 = iVar11;
              if (0x31 < *(int *)(unaff_BP + -0x2c8)) {
                iStack_4 = 0x1bb4;
                iStack_6 = 0xa21;
                func_0x0000daa6();
                iStack_4 = 0x885;
                iStack_6 = 0xa2b;
                FUN_1def_186d();
                iStack_4 = 0x1bb4;
                iStack_6 = 0xa34;
                func_0x0000daa6();
                *(undefined2 *)(unaff_BP + -0x2ca) = *(undefined2 *)0x150;
                iStack_4 = 0x885;
                iStack_6 = 0xa42;
                func_0x000190c7();
                iStack_4 = 0x18b3;
                iStack_6 = 0xa4c;
                func_0x0000b1d8();
                iStack_4 = 0xa52;
                func_0x0000abfa();
                *(undefined2 *)(unaff_BP + -0x6a) = 0;
                *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + -1;
                iVar5 = 0x885;
              }
              goto LAB_3ab8_5bf7;
            }
            iVar5 = iVar11;
            if (*(int *)(unaff_BP + -0x6a) == 0) goto LAB_3ab8_5bf7;
            if (0x31 < *(int *)(unaff_BP + -0x2c8)) {
LAB_3ab8_5e73:
              if (0x31 < *(int *)(unaff_BP + -0x2c8)) {
                iVar11 = 0x11f2;
                iStack_6 = 0xa06;
                iStack_4 = iVar5;
                func_0x00012276();
                goto LAB_3ab8_5cc4;
              }
              goto LAB_3ab8_5bf7;
            }
            iStack_4 = unaff_BP + -0xe8;
            iStack_6 = *(undefined2 *)(unaff_BP + -0x6a);
            iVar5 = 0x11f2;
            iStack_a = 0x8d2;
            iStack_8 = iVar11;
            iVar9 = func_0x00015409();
            if (iVar9 == 0) {
              if (0 < *(int *)(unaff_BP + -0x2c8)) goto LAB_3ab8_5e73;
              goto LAB_3ab8_559e;
            }
            if ((*(int *)(unaff_BP + -2) == 0 && *(int *)(unaff_BP + -4) == 0) ||
               (iVar9 = FUN_4375_7f31(), iVar9 == 0)) {
              iStack_4 = 0x11f2;
              iStack_6 = 0x91a;
              func_0x0000daa6();
              iStack_4 = 0x924;
              func_0x000297e6();
              iStack_4 = 0x929;
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0x933;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x93c;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0x941;
              func_0x00029d78();
              iStack_12 = 0x22b2;
              iStack_14 = 0x94b;
              func_0x000299d1();
              iStack_12 = 0x22b2;
              iStack_14 = 0x950;
              FUN_1def_1208();
              uVar6 = *(undefined2 *)(unaff_BP + -0xe8);
              uVar10 = *(undefined2 *)(unaff_BP + -0xe6);
              *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + 1;
              iVar5 = *(int *)(unaff_BP + -0x2c8) * 4;
              *(undefined2 *)(unaff_BP + iVar5 + -0x1ea) = uVar6;
              *(undefined2 *)(unaff_BP + iVar5 + -0x1e8) = uVar10;
              uVar6 = *(undefined2 *)(unaff_BP + -0xee);
              *(undefined2 *)(unaff_BP + iVar5 + -0x2c6) = *(undefined2 *)(unaff_BP + -0xf0);
              *(undefined2 *)(unaff_BP + iVar5 + -0x2c4) = uVar6;
              iStack_4 = 0x7562;
              iStack_6 = unaff_BP + -0xd0;
              iStack_8 = 0x1bb4;
              iStack_a = 0x996;
              FUN_21f2_3454();
              uVar6 = *(undefined2 *)0xa812;
              *(undefined2 *)0xb76a = *(undefined2 *)0xa810;
              *(undefined2 *)0xb76c = uVar6;
              uVar6 = *(undefined2 *)0xa7fe;
              *(undefined2 *)0xb784 = *(undefined2 *)0xa7fc;
              *(undefined2 *)0xb786 = uVar6;
              uVar6 = *(undefined2 *)(unaff_BP + -0xe6);
              *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0xe8);
              *(undefined2 *)0xb30e = uVar6;
              uVar6 = *(undefined2 *)(unaff_BP + -0xee);
              *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -0xf0);
              *(undefined2 *)0xb380 = uVar6;
              iStack_4 = 2;
              iStack_6 = 0x22b2;
              iStack_8 = 0x9e0;
              FUN_4375_ac1f();
              iStack_4 = 0x9e7;
              func_0x0000abfa();
              iVar5 = 0x885;
              goto LAB_3ab8_5e73;
            }
            if (*(int *)(unaff_BP + -0x2c8) < 1) goto LAB_3ab8_559e;
            goto LAB_3ab8_5bf7;
          }
LAB_3ab8_5c61:
          *(undefined2 *)(unaff_BP + -0x2cc) = 0xffff;
LAB_3ab8_609d:
          if (-1 < *(int *)(unaff_BP + -0x2cc)) {
            iVar9 = *(int *)(unaff_BP + -0x2c8);
            *(int *)0x11e = *(int *)0x11e + iVar9;
            goto LAB_3ab8_6175;
          }
          if (*(int *)(unaff_BP + -0x2cc) == -2) {
            iStack_6 = 0xc37;
            iStack_4 = iVar11;
            func_0x00012276();
            if (*(int *)0xc22 < 2) {
              *(undefined2 *)0xc22 = 2;
            }
            iStack_4 = 0x14;
            iStack_6 = 0x11f2;
            iStack_8 = 0xc52;
            FUN_1000_0599();
            iStack_4 = 0xdef;
            iVar11 = 0x11f2;
            iStack_6 = 0xc5d;
            func_0x00012276();
          }
          uVar6 = 0x11f2;
          iStack_6 = 0xc66;
          iStack_4 = iVar11;
          func_0x0001470b();
          while (iStack_4 = uVar6, 0 < *(int *)(unaff_BP + -0x2c8)) {
            uVar6 = 0x885;
            iStack_6 = 0xc71;
            func_0x0000daa6();
            iVar5 = *(int *)0x152;
            *(int *)(unaff_BP + -0x2ca) = iVar5;
            if (0 < iVar5) {
              iStack_4 = 0x885;
              uVar6 = 0x1bb4;
              iStack_6 = 0xc83;
              FUN_1def_186d();
            }
            iStack_6 = 0xc8c;
            iStack_4 = uVar6;
            func_0x0000daa6();
            *(undefined2 *)(unaff_BP + -0x2ca) = *(undefined2 *)0x150;
            iStack_4 = 0x885;
            while (uVar10 = iStack_4, 0 < *(int *)(unaff_BP + -0x2ca)) {
              uVar10 = 0;
              iStack_6 = 0xc9f;
              uVar14 = func_0x00000398();
              if ((*(byte *)((int)uVar14 + 0x16) & 0x80) == 0) break;
              *(int *)(unaff_BP + -0x2ca) = *(int *)(unaff_BP + -0x2ca) + -1;
              iStack_4 = uVar10;
            }
            uVar6 = uVar10;
            if (0 < *(int *)(unaff_BP + -0x2ca)) {
              uVar6 = 0x18b3;
              iStack_6 = 0xcc6;
              iStack_4 = uVar10;
              func_0x000190c7();
            }
            *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + -1;
          }
          iStack_6 = 0xcdb;
          func_0x0000b1d8();
          iVar5 = 0x885;
          iStack_4 = 0xce1;
          iVar9 = func_0x0000abfa();
          if (*(int *)0x158 != 0) {
            return iVar9;
          }
        } while( true );
      }
      goto LAB_3ab8_5b31;
    }
    if (*(int *)0x158 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return iVar9;
LAB_3ab8_6175:
  if (((*(int *)(unaff_BP + -0xd6) == 3) && (*(int *)(unaff_BP + -0xe2) == 4)) ||
     ((*(int *)(unaff_BP + -0xd6) == 4 && (*(int *)(unaff_BP + -0xe2) == 1)))) {
    *(undefined1 *)(unaff_BP + -0x5a) = 0;
    iStack_4 = 0x11e0;
    iStack_6 = 0x11dc;
    iStack_8 = 0x11d8;
    iStack_c = 0xd29;
    iStack_a = iVar11;
    iVar9 = FUN_4375_b98a();
  }
  if (*(int *)(unaff_BP + -0xe2) == 0x14) {
LAB_3ab8_5b31:
    if (*(int *)(unaff_BP + -0xd6) != 0x14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return iVar9;
  }
  iVar5 = iVar11;
  if (*(int *)0x158 != 0) {
    return iVar9;
  }
  goto LAB_3ab8_558d;
}



/* 3ab8:52c1  FUN_3ab8_52c1  3687 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */

int __cdecl16far FUN_3ab8_52c1(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  int unaff_BP;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  int iVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  int iStack_2a;
  int iStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  int iStack_1e;
  int iStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  iVar5 = 0x3ab8;
  *(undefined2 *)(unaff_BP + -0x60) = 0;
  uVar6 = *(undefined2 *)0x14a;
  *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)0x148;
  *(undefined2 *)(unaff_BP + -8) = uVar6;
  *(undefined2 *)(unaff_BP + -0xd8) = *(undefined2 *)0x150;
  if (*(int *)(unaff_BP + -0xd6) != 2) {
    while( true ) {
      iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
      iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
      iStack_c = 0x119;
      iStack_a = iVar5;
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
      iStack_a = *(int *)(unaff_BP + -0xbc);
      iStack_c = 0x32b2;
      uStack_e = 0x150;
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
      iStack_a = *(int *)(unaff_BP + -0x7c);
      iStack_c = *(undefined2 *)(unaff_BP + -0x7e);
      uStack_e = *(undefined2 *)(unaff_BP + -0x80);
      uStack_10 = *(undefined2 *)(unaff_BP + -0x82);
      iStack_12 = *(undefined2 *)(unaff_BP + -0x58);
      iStack_14 = *(undefined2 *)(unaff_BP + -0x5a);
      uStack_16 = *(undefined2 *)(unaff_BP + -0x5c);
      uStack_18 = *(undefined2 *)(unaff_BP + -0x5e);
      uStack_1a = 0x32b2;
      iStack_1c = 0x1d0;
      FUN_32b2_6cc6();
      uStack_1a = 0x32b2;
      iStack_1c = 0x1d5;
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
      iStack_2a = 0x32b2;
      uStack_2c = 0x1f6;
      FUN_32b2_6eb1();
      iStack_2a = 0x32b2;
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
      iStack_12 = 0x32b2;
      iStack_14 = 0x240;
      FUN_32b2_6eb1();
      iStack_12 = 0x32b2;
      iStack_14 = 0x248;
      FUN_32b2_6cc6();
      iStack_12 = 0x32b2;
      iStack_14 = 0x24d;
      FUN_32b2_7258();
      uStack_1a = 0x32b2;
      iStack_1c = 599;
      FUN_32b2_6eb1();
      uStack_1a = 0x32b2;
      iStack_1c = 0x25f;
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
      iStack_2a = 0x32b2;
      uStack_2c = 0x288;
      FUN_32b2_6eb1();
      iStack_2a = 0x32b2;
      uStack_2c = 0x290;
      FUN_32b2_6cc6();
      iStack_2a = 0x32b2;
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
      iStack_a = 0x32b2;
      iStack_c = 0x2d4;
      FUN_32b2_6cc6();
      iStack_a = 0x32b2;
      iStack_c = 0x2d9;
      FUN_32b2_7258();
      iStack_12 = 0x32b2;
      iStack_14 = 0x2e3;
      FUN_32b2_6eb1();
      iStack_12 = 0x32b2;
      iStack_14 = 0x2eb;
      FUN_32b2_6cc6();
      iStack_12 = 0x32b2;
      iStack_14 = 0x2f0;
      FUN_32b2_7258();
      uStack_1a = 0x32b2;
      iStack_1c = 0x2fa;
      FUN_32b2_6eb1();
      uStack_1a = 0x32b2;
      iStack_1c = 0x302;
      FUN_32b2_6d14();
      uStack_22 = 0x32b2;
      uStack_24 = 0x30c;
      FUN_32b2_6eb1();
      uStack_22 = 0x32b2;
      uStack_24 = 0x314;
      FUN_32b2_6d14();
      iStack_2a = 0x32b2;
      uStack_2c = 0x31e;
      FUN_32b2_6eb1();
      iStack_2a = 0x32b2;
      uStack_2c = 0x326;
      FUN_32b2_6cc6();
      iStack_2a = 0x32b2;
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
      uVar12 = (undefined1 *)0xffc9 < &uStack_36;
      uVar13 = &stack0x0000 == (undefined1 *)0x0;
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
      if (!(bool)uVar12 && !(bool)uVar13) {
        iStack_4 = 0x3da;
        FUN_32b2_6d14();
        iStack_4 = 0x3e2;
        FUN_32b2_6d14();
        iStack_4 = 999;
        FUN_32b2_7191();
        if (!(bool)uVar13) {
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
          iStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
          iStack_1e = *(undefined2 *)(unaff_BP + -0x48);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
          iStack_28 = 0x622;
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
          uVar6 = *(undefined2 *)(unaff_BP + -0x60);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)(unaff_BP + -0x84) = uVar6;
          uVar6 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
          iStack_4 = unaff_BP + -0x86;
          puVar9 = &uStack_24;
          puVar8 = (undefined2 *)(unaff_BP + 0x1c);
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar3 = puVar9;
            puVar9 = puVar9 + 1;
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar3 = *puVar2;
          }
          iStack_28 = 0x684;
          iVar5 = FUN_3ab8_522f();
          uVar12 = 0;
          uVar13 = iVar5 == 0;
          if (!(bool)uVar13) {
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
            if ((bool)uVar12 || (bool)uVar13) {
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
              if ((bool)uVar12 || (bool)uVar13) {
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
          if (!(bool)uVar12) {
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
            if (!(bool)uVar12) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
            iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
            iStack_a = 0x32b2;
            iStack_c = 0x774;
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
            iStack_a = 0x7d9;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0x7de;
            FUN_32b2_7258();
            uStack_10 = 0x32b2;
            iStack_12 = 0x7e8;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            iStack_12 = 0x7f0;
            FUN_32b2_6cc6();
            uStack_10 = 0x32b2;
            iStack_12 = 0x7f5;
            FUN_32b2_7258();
            uStack_18 = 0x32b2;
            uStack_1a = 0x7ff;
            FUN_32b2_6eb1();
            uStack_18 = *(undefined2 *)(unaff_BP + -100);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
            iStack_1c = *(undefined2 *)(unaff_BP + -0x68);
            iStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
            iStack_28 = 0x32b2;
            iStack_2a = 0x820;
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
            uVar12 = (undefined1 *)0xffc9 < &uStack_38;
            uVar13 = &stack0x0000 == (undefined1 *)0x2;
            iStack_4 = 0x32b2;
            iStack_6 = 0x84f;
            FUN_32b2_6cc6();
            iStack_4 = 0x32b2;
            iStack_6 = 0x857;
            FUN_32b2_6cc6();
            iStack_4 = 0x32b2;
            iStack_6 = 0x85c;
            FUN_32b2_7191();
            if ((bool)uVar13) {
              uVar6 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar6;
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
            if ((bool)uVar13) {
              uVar6 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar6;
            }
            uVar6 = *(undefined2 *)(unaff_BP + -0x60);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
            puVar8[1] = uVar6;
            uVar6 = *(undefined2 *)(unaff_BP + -0x88);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar8[1] = uVar6;
            uVar6 = *(undefined2 *)(unaff_BP + -0x60);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
            puVar8[1] = uVar6;
            uVar6 = *(undefined2 *)(unaff_BP + -0x88);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar8[1] = uVar6;
            piVar1 = (int *)(unaff_BP + -0x36);
            *piVar1 = *piVar1 + 1;
            uVar13 = *piVar1 == 0;
            iStack_4 = 0x32b2;
            iStack_6 = 0x8d7;
            FUN_32b2_6d14();
            iStack_4 = 0x32b2;
            iStack_6 = 0x8e0;
            FUN_32b2_6d14();
            iStack_4 = 0x32b2;
            iStack_6 = 0x8e5;
            FUN_32b2_7191();
            if (!(bool)uVar12 && !(bool)uVar13) {
              iStack_4 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
              iStack_a = *(int *)(unaff_BP + -0xbc);
              iStack_c = 0x32b2;
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
              iStack_a = 0x32b2;
              iStack_c = 0x969;
              FUN_32b2_6cc6();
              iStack_a = 0x32b2;
              iStack_c = 0x96e;
              FUN_32b2_7258();
              iStack_12 = 0x32b2;
              iStack_14 = 0x978;
              FUN_32b2_6eb1();
              iStack_12 = 0x32b2;
              iStack_14 = 0x980;
              FUN_32b2_6cc6();
              iStack_12 = 0x32b2;
              iStack_14 = 0x985;
              FUN_32b2_7258();
              uStack_1a = 0x32b2;
              iStack_1c = 0x98f;
              FUN_32b2_6eb1();
              uStack_1a = *(undefined2 *)(unaff_BP + -100);
              iStack_1c = *(undefined2 *)(unaff_BP + -0x66);
              iStack_1e = *(undefined2 *)(unaff_BP + -0x68);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
              uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
              iStack_28 = *(undefined2 *)(unaff_BP + -0x4e);
              iStack_2a = 0x32b2;
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
                uVar6 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar6;
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
                uVar6 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar6;
              }
              uVar6 = *(undefined2 *)(unaff_BP + -0x60);
              puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
              puVar8[1] = uVar6;
              uVar6 = *(undefined2 *)(unaff_BP + -0x88);
              puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar8[1] = uVar6;
              *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
            }
            return *(int *)(unaff_BP + -0x36);
          }
        }
        return 0;
      }
      iStack_4 = 0x3f5;
      FUN_32b2_6d14();
      iStack_4 = 0x32b2;
      iStack_6 = 0x3ff;
      FUN_32b2_7154();
      iVar5 = 0x32b2;
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
  iStack_4 = *(undefined2 *)(unaff_BP + -10);
  iStack_6 = 0x3ab8;
  iStack_8 = 0xfe6e;
  FUN_3ab8_4c52();
  *(undefined2 *)(unaff_BP + -0x60) = 10000;
  if ((*(int *)(unaff_BP + -8) <= *(int *)0x14a) &&
     ((*(int *)(unaff_BP + -8) < *(int *)0x14a || (*(uint *)(unaff_BP + -10) < *(uint *)0x148)))) {
    *(undefined2 *)(unaff_BP + -0x60) = 9999;
  }
  iStack_4 = *(undefined2 *)0x11e4;
  iStack_6 = 0x3ab8;
  iStack_8 = 0xfe9e;
  func_0x000297e6();
  iStack_6 = 0x22b2;
  iStack_8 = 0xfea3;
  func_0x00029d78();
  uStack_e = 0x22b2;
  uStack_10 = 0xfead;
  func_0x000299d1();
  uStack_e = 0x22b2;
  uStack_10 = 0xfeb6;
  func_0x000297e6();
  uStack_e = 0x22b2;
  uStack_10 = 0xfebb;
  func_0x00029d78();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfec5;
  func_0x000299d1();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfece;
  func_0x000297e6();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfed3;
  func_0x00029d78();
  iStack_1e = 0x22b2;
  uStack_20 = 0xfedd;
  func_0x000299d1();
  iStack_1e = unaff_BP + -0xd0;
  uStack_20 = 0x22b2;
  uStack_22 = 0xfee6;
  iStack_4 = FUN_3ab8_4450();
  *(undefined2 *)(unaff_BP + -0xea) = iStack_4;
  iStack_6 = 2;
  iStack_8 = 0x12;
  iStack_a = unaff_BP + -0xd0;
  iStack_c = 0x22b2;
  iVar5 = 0xdef;
  uStack_e = 0xff00;
  FUN_1000_02b5();
  if (*(int *)0xc22 < 1) {
    *(undefined2 *)0xc22 = 1;
  }
  if (*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) {
    if (*(int *)0xc22 < 2) {
      *(undefined2 *)0xc22 = 2;
    }
    iStack_4 = 2;
    iStack_6 = 3;
    iStack_8 = 0x47;
    iStack_a = 0x11cc;
    iStack_c = 0xdef;
    uStack_e = 0xff41;
    FUN_1000_02b5();
    uVar12 = (undefined1 *)0xfff5 < &iStack_a;
    iStack_4 = 0xff4d;
    func_0x00029834();
    iStack_4 = 0xff56;
    func_0x000297e6();
    iStack_4 = 0xff5b;
    func_0x00029ae7();
    iStack_4 = 0xff60;
    func_0x00029d78();
    iVar7 = 0x22b2;
    iStack_4 = 0xff65;
    FUN_28b3_1181();
    if (!(bool)uVar12) {
      iStack_4 = 2;
      iStack_6 = 3;
      iStack_8 = 0x1a;
      iStack_a = 0x998;
      iStack_c = 0x22b2;
      iVar7 = 0xdef;
      uStack_e = 0xff80;
      FUN_1000_02b5();
    }
    iVar5 = iVar7;
    if (*(char *)(unaff_BP + -0x5a) != '\0') {
      iStack_4 = 6;
      iStack_6 = 3;
      iStack_8 = 0x1e;
      iStack_a = unaff_BP + -0x5a;
      iVar5 = 0xdef;
      uStack_e = 0xffa2;
      iStack_c = iVar7;
      FUN_1000_02b5();
    }
  }
  iStack_4 = *(undefined2 *)0xcb2;
  iStack_6 = 0;
  iStack_8 = 3;
  iStack_c = 0xffb9;
  iStack_a = iVar5;
  func_0x0000f2cb();
  iStack_4 = 0xffc1;
  func_0x0000a799();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x885;
  iStack_8 = 0xffcf;
  FUN_21f2_3454();
  iStack_4 = unaff_BP + -0xd0;
  iStack_6 = 0x22b2;
  iStack_8 = 0xffdf;
  FUN_21f2_2d26();
  iStack_4 = 4;
  iStack_6 = 0x22b2;
  iStack_8 = 0xffef;
  FUN_1def_07a4();
  *(undefined2 *)0xc2c = 1;
  iStack_4 = unaff_BP + -0xf0;
  iStack_6 = unaff_BP + -0xe8;
  iStack_8 = unaff_BP + -0xd0;
  iStack_a = *(int *)(unaff_BP + -0x60);
  iStack_c = 0x1bb4;
  uStack_e = 0x12;
  uVar6 = FUN_1def_0904();
  *(undefined2 *)(unaff_BP + -0xe2) = uVar6;
  *(undefined2 *)0xc2c = 0;
  iStack_4 = 0x1bb4;
  iVar5 = 0x885;
  iStack_6 = 0x24;
  iVar7 = func_0x0000daa6();
  if (*(int *)0x158 == 0) {
    if (*(int *)(unaff_BP + -0xe2) == -1) {
      iStack_4 = *(undefined2 *)0xcb2;
      iStack_6 = 0;
      iStack_8 = 3;
      iStack_a = 0x885;
      iStack_c = 0x57;
      func_0x0000f2cb();
      iStack_4 = 0x5f;
      func_0x0000a799();
      iStack_4 = 0x885;
      while (*(int *)(unaff_BP + -0xd8) < *(int *)0x150) {
        *(int *)(unaff_BP + -0xda) = *(int *)0x150;
        iStack_6 = 0x6b;
        func_0x000190c7();
        iStack_4 = 0x18b3;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -8);
      *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -10);
      *(undefined2 *)0x14a = uVar6;
      iStack_4 = 0x87;
      func_0x0000abfa();
      iStack_4 = 0x885;
      iStack_6 = 0x90;
      func_0x0000b1d8();
      iStack_4 = 0x885;
      iVar5 = 0x11f2;
      iStack_6 = 0x99;
      iVar7 = func_0x0001470b();
    }
    if ((*(int *)(unaff_BP + -0xe2) == 1) || (*(int *)(unaff_BP + -0xe2) == 2)) {
      uVar6 = *(undefined2 *)0x14a;
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)0x148;
      *(undefined2 *)(unaff_BP + -8) = uVar6;
      *(undefined2 *)(unaff_BP + -0xd8) = *(undefined2 *)0x150;
      iStack_4 = *(undefined2 *)(unaff_BP + -2);
      iStack_6 = *(undefined2 *)(unaff_BP + -4);
      iStack_8 = unaff_BP + -0x5e;
      iStack_c = 0xd6;
      iStack_a = iVar5;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = 0xdb;
      func_0x00029d78();
      iStack_12 = 0x22b2;
      iVar5 = 0x22b2;
      iStack_14 = 0xe5;
      func_0x000299d1();
      iStack_12 = unaff_BP + -0xf2;
      iStack_14 = unaff_BP + -0xe4;
      uStack_16 = 0x22b2;
      uStack_18 = 0xf3;
      iVar7 = FUN_4375_882f();
      *(int *)(unaff_BP + -6) = iVar7;
      if (iVar7 < 1) goto LAB_3ab8_5580;
      uVar6 = *(undefined2 *)0xa812;
      *(undefined2 *)(unaff_BP + -0xd4) = *(undefined2 *)0xa810;
      *(undefined2 *)(unaff_BP + -0xd2) = uVar6;
      if (*(int *)(unaff_BP + -0xe2) == 1) {
        uVar6 = *(undefined2 *)0xa8da;
        *(undefined2 *)(unaff_BP + -0xd4) = *(undefined2 *)0xa8d8;
        *(undefined2 *)(unaff_BP + -0xd2) = uVar6;
      }
      *(undefined1 *)0x11d7 = 0;
      iStack_4 = *(undefined2 *)(unaff_BP + -4);
      iStack_6 = *(int *)0x11e4;
      iStack_8 = 0x22b2;
      iStack_a = 0x32f;
      func_0x000297e6();
      iStack_8 = 0x22b2;
      iStack_a = 0x334;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      iStack_12 = 0x33e;
      func_0x000299d1();
      uStack_10 = *(undefined2 *)(unaff_BP + -6);
      iStack_12 = 0x22b2;
      iStack_14 = 0x34a;
      func_0x000297e6();
      iStack_12 = 0x22b2;
      iStack_14 = 0x34f;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      iStack_1c = 0x359;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      iStack_1c = 0x362;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      iStack_1c = 0x367;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x371;
      func_0x000299d1();
      uStack_22 = *(undefined2 *)(unaff_BP + -0xf2);
      uStack_24 = *(undefined2 *)(unaff_BP + -0xe4);
      iStack_28 = 0x382;
      func_0x000297e6();
      iStack_28 = 0x387;
      func_0x00029d78();
      uStack_2e = 0x22b2;
      iVar5 = 0x22b2;
      uStack_30 = 0x391;
      func_0x000299d1();
      pcVar4 = (code *)swi(0x3f);
      iVar7 = (*pcVar4)();
      *(undefined2 *)0x11c = 1;
    }
    if (*(int *)(unaff_BP + -0xe2) == 3) {
      uVar6 = *(undefined2 *)0x14a;
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)0x148;
      *(undefined2 *)(unaff_BP + -8) = uVar6;
      *(undefined2 *)(unaff_BP + -0xd8) = *(undefined2 *)0x150;
      do {
        do {
          do {
            while( true ) {
              iStack_4 = 0x3c6;
              func_0x000297e6();
              iStack_4 = 0x3ce;
              func_0x0002996b();
              iStack_4 = 0x3d6;
              func_0x00029983();
              iStack_4 = 0x3db;
              func_0x0001bb4e();
              iStack_4 = 0x1bb4;
              iStack_6 = 0x3e4;
              func_0x00012276();
              iStack_4 = 0x14;
              iStack_6 = unaff_BP + -0xf0;
              iStack_8 = unaff_BP + -0xe8;
              iStack_a = unaff_BP + -0x68;
              iStack_c = unaff_BP + -100;
              uStack_e = 0x11f2;
              uStack_10 = 0x404;
              iVar5 = func_0x000021a4();
              *(int *)(unaff_BP + -0x6c) = iVar5;
              if (iVar5 + 1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (*(int *)0x158 != 0) {
                return iVar5 + 1;
              }
              if (*(int *)0x11e4 == 0) break;
              uVar12 = 0;
              uVar13 = *(int *)(unaff_BP + -0x6c) == 0;
              if ((bool)uVar13) {
                iStack_4 = 0x432;
                func_0x000297e6();
                iStack_4 = 0x43b;
                func_0x000297e6();
                iStack_4 = 0x440;
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  iStack_4 = 0x44a;
                  func_0x000297e6();
                  iStack_4 = 0x453;
                  func_0x000297e6();
                  iStack_4 = 0x458;
                  FUN_28b3_1181();
                  if (!(bool)uVar12) goto LAB_3ab8_58dd;
                }
              }
            }
            uVar12 = 0;
            uVar13 = *(int *)(unaff_BP + -0x6c) == 0;
          } while (!(bool)uVar13);
          iStack_4 = 0x4c4;
          func_0x000297e6();
          iStack_4 = 0x4cc;
          func_0x000297e6();
          iStack_4 = 0x4d1;
          FUN_28b3_1181();
        } while ((bool)uVar12);
        iStack_4 = 0x4dc;
        func_0x000297e6();
        iStack_4 = 0x4e4;
        func_0x000297e6();
        iStack_4 = 0x4e9;
        FUN_28b3_1181();
      } while (!(bool)uVar12 && !(bool)uVar13);
LAB_3ab8_58dd:
      uVar6 = *(undefined2 *)(unaff_BP + -0x62);
      *(undefined2 *)(unaff_BP + -0xd4) = *(undefined2 *)(unaff_BP + -100);
      *(undefined2 *)(unaff_BP + -0xd2) = uVar6;
      iStack_4 = 0x22b2;
      iStack_6 = 0x473;
      func_0x0000daa6();
      iStack_4 = *(undefined2 *)(unaff_BP + -2);
      iStack_6 = *(undefined2 *)(unaff_BP + -4);
      iStack_8 = unaff_BP + -0x5e;
      iStack_a = 0x885;
      iStack_c = 0x48b;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = 0x490;
      func_0x00029d78();
      iStack_12 = 0x22b2;
      iVar5 = 0x22b2;
      iStack_14 = 0x49a;
      func_0x000299d1();
      iStack_12 = unaff_BP + -0xf2;
      iStack_14 = unaff_BP + -0xe4;
      uStack_16 = 0x22b2;
      uStack_18 = 0x4a8;
      iVar7 = FUN_4375_882f();
      *(int *)(unaff_BP + -6) = iVar7;
      if (iVar7 < 1) goto LAB_3ab8_5580;
      *(undefined1 *)0x11d7 = 0;
      iStack_4 = *(undefined2 *)(unaff_BP + -4);
      iStack_6 = *(int *)0x11e4;
      iStack_8 = 0x22b2;
      iStack_a = 0x508;
      func_0x000297e6();
      iStack_8 = 0x22b2;
      iStack_a = 0x50d;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      iStack_12 = 0x517;
      func_0x000299d1();
      uStack_10 = *(undefined2 *)(unaff_BP + -6);
      iStack_12 = 0x22b2;
      iStack_14 = 0x523;
      func_0x000297e6();
      iStack_12 = 0x22b2;
      iStack_14 = 0x528;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      iStack_1c = 0x532;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      iStack_1c = 0x53b;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      iStack_1c = 0x540;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x54a;
      func_0x000299d1();
      uStack_22 = *(undefined2 *)(unaff_BP + -0xf2);
      uStack_24 = *(undefined2 *)(unaff_BP + -0xe4);
      iStack_28 = 0x55b;
      func_0x000297e6();
      iStack_28 = 0x560;
      func_0x00029d78();
      uStack_2e = 0x22b2;
      iVar5 = 0x22b2;
      uStack_30 = 0x56a;
      func_0x000299d1();
      pcVar4 = (code *)swi(0x3f);
      iVar7 = (*pcVar4)();
      *(undefined2 *)0x11c = 1;
    }
    if (((*(int *)(unaff_BP + -0xe2) == 1) || (*(int *)(unaff_BP + -0xe2) == 2)) ||
       (*(int *)(unaff_BP + -0xe2) == 3)) {
      *(undefined2 *)0x11c = 1;
      iVar5 = 0x885;
      iStack_4 = 0x598;
      iVar7 = func_0x0000a7c5();
      *(undefined2 *)0xc08 = 0;
      *(undefined2 *)0xbc0 = 1;
    }
    if (*(int *)(unaff_BP + -0xe2) == 4) {
      *(undefined1 *)(unaff_BP + -0x5a) = 0;
      iStack_4 = 0x11e0;
      iStack_6 = 0x11dc;
      iStack_8 = 0x11d8;
      iStack_c = 0x5c3;
      iStack_a = iVar5;
      iVar7 = FUN_4375_b98a();
    }
    if (*(int *)(unaff_BP + -0xe2) == 0x14) {
LAB_3ab8_5580:
      iVar7 = *(int *)0x148;
      uVar6 = *(undefined2 *)0x14a;
      *(int *)(unaff_BP + -10) = iVar7;
      *(undefined2 *)(unaff_BP + -8) = uVar6;
LAB_3ab8_558d:
      if ((*(int *)(unaff_BP + -0xd6) == 3) || (*(int *)(unaff_BP + -0xd6) == 4)) {
LAB_3ab8_559e:
        do {
          iStack_4 = *(undefined2 *)0x11e4;
          iStack_8 = 0x12e;
          iStack_6 = iVar5;
          func_0x000297e6();
          iStack_6 = 0x22b2;
          iStack_8 = 0x133;
          func_0x00029d78();
          uStack_e = 0x22b2;
          uStack_10 = 0x13d;
          func_0x000299d1();
          uStack_e = 0x22b2;
          uStack_10 = 0x146;
          func_0x000297e6();
          uStack_e = 0x22b2;
          uStack_10 = 0x14b;
          func_0x00029d78();
          uStack_16 = 0x22b2;
          uStack_18 = 0x155;
          func_0x000299d1();
          uStack_16 = 0x22b2;
          uStack_18 = 0x15e;
          func_0x000297e6();
          uStack_16 = 0x22b2;
          uStack_18 = 0x163;
          func_0x00029d78();
          iStack_1e = 0x22b2;
          uStack_20 = 0x16d;
          func_0x000299d1();
          iStack_1e = unaff_BP + -0xd0;
          uStack_20 = 0x22b2;
          uStack_22 = 0x176;
          iStack_4 = FUN_4375_b880();
          *(undefined2 *)(unaff_BP + -0xea) = iStack_4;
          iStack_6 = 2;
          iStack_8 = 0x12;
          iStack_a = unaff_BP + -0xd0;
          iStack_c = 0x22b2;
          iVar5 = 0xdef;
          uStack_e = 400;
          FUN_1000_02b5();
          if (*(int *)0xc22 < 1) {
            *(undefined2 *)0xc22 = 1;
          }
          if (*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) {
            if (*(int *)0xc22 < 2) {
              *(undefined2 *)0xc22 = 2;
            }
            iStack_4 = 2;
            iStack_6 = 3;
            iStack_8 = 0x47;
            iStack_a = 0x11cc;
            iStack_c = 0xdef;
            uStack_e = 0x1ce;
            FUN_1000_02b5();
            uVar12 = (undefined1 *)0xfff5 < &iStack_a;
            iStack_4 = 0x1da;
            func_0x00029834();
            iStack_4 = 0x1e3;
            func_0x000297e6();
            iStack_4 = 0x1e8;
            func_0x00029ae7();
            iStack_4 = 0x1ed;
            func_0x00029d78();
            iVar5 = 0x22b2;
            iStack_4 = 0x1f2;
            FUN_28b3_1181();
            if (!(bool)uVar12) {
              iStack_4 = 2;
              iStack_6 = 3;
              iStack_8 = 0x1a;
              iStack_a = 0x998;
              iStack_c = 0x22b2;
              iVar5 = 0xdef;
              uStack_e = 0x20d;
              FUN_1000_02b5();
            }
          }
          iStack_4 = *(undefined2 *)0xcb2;
          iStack_6 = 0;
          iStack_8 = 3;
          iStack_c = 0x224;
          iStack_a = iVar5;
          func_0x0000f2cb();
          uVar6 = 0x885;
          iStack_4 = 0x22c;
          func_0x0000a799();
          if (*(int *)(unaff_BP + -0xd6) == 3) {
            iStack_4 = unaff_BP + -0xd0;
            iStack_6 = 0x885;
            uVar6 = 0x22b2;
            iStack_8 = 0x241;
            FUN_21f2_3454();
          }
          uVar10 = uVar6;
          if (*(int *)(unaff_BP + -0xd6) == 4) {
            if ((*(int *)(unaff_BP + -2) != 0 || *(int *)(unaff_BP + -4) != 0) &&
               (*(char *)(unaff_BP + -0x5a) != '\0')) {
              iStack_4 = 6;
              iStack_6 = 3;
              iStack_8 = 0x1e;
              iStack_a = unaff_BP + -0x5a;
              uVar10 = 0xdef;
              uStack_e = 0x271;
              iStack_c = uVar6;
              FUN_1000_02b5();
            }
            iStack_4 = *(int *)0x11e + 1;
            iStack_6 = unaff_BP + -0xd0;
            iStack_a = 0x286;
            iStack_8 = uVar10;
            FUN_4375_c05a();
          }
          iStack_4 = unaff_BP + -0xd0;
          iStack_8 = 0x297;
          iStack_6 = uVar10;
          FUN_21f2_2d26();
          iStack_4 = 4;
          iStack_6 = 0x22b2;
          iStack_8 = 0x2a7;
          FUN_1def_07a4();
          *(undefined2 *)0xc2c = 1;
          if (*(int *)(unaff_BP + -0xd6) == 4) {
            *(undefined2 *)0xc20 = 1;
          }
          iStack_4 = unaff_BP + -0xf0;
          iStack_6 = unaff_BP + -0xe8;
          iStack_8 = unaff_BP + -0xd0;
          iStack_a = 10000;
          iStack_c = 0x1bb4;
          iVar11 = 0x1bb4;
          uStack_e = 0x2d8;
          uVar6 = FUN_1def_0904();
          *(undefined2 *)(unaff_BP + -0xe2) = uVar6;
          iVar7 = 0;
          *(undefined2 *)0xc2c = 0;
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 != 0) {
            return 0;
          }
          if (((*(int *)(unaff_BP + -0xd6) == 3) && (0 < *(int *)(unaff_BP + -0xe2))) &&
             (*(int *)(unaff_BP + -0xe2) < 4)) {
            iStack_4 = 0x1bb4;
            iStack_6 = 0x5fe;
            func_0x0000daa6();
            iStack_4 = 0x885;
            iStack_6 = 0x60c;
            func_0x000297e6();
            iStack_4 = 0x22b2;
            iStack_6 = 0x611;
            func_0x00029d78();
            iStack_c = 0x22b2;
            uStack_e = 0x61b;
            func_0x000299d1();
            iStack_c = 0x22b2;
            uStack_e = 0x624;
            func_0x000297e6();
            iStack_c = 0x22b2;
            uStack_e = 0x629;
            func_0x00029d78();
            iStack_14 = 0x22b2;
            uStack_16 = 0x633;
            func_0x000299d1();
            iStack_14 = 0x22b2;
            uStack_16 = 0x63c;
            func_0x000297e6();
            iStack_14 = 0x22b2;
            uStack_16 = 0x641;
            func_0x00029d78();
            iStack_1c = 0x22b2;
            iStack_1e = 0x64b;
            func_0x000299d1();
            iStack_1c = unaff_BP + -0xd0;
            iStack_1e = 0x22b2;
            uStack_20 = 0x654;
            FUN_4375_b880();
            iStack_4 = 7;
            iStack_6 = 2;
            iStack_8 = 0x12;
            iStack_a = unaff_BP + -0xd0;
            iStack_c = 0x22b2;
            uStack_e = 0x670;
            FUN_1000_02b5();
            iStack_4 = *(undefined2 *)(unaff_BP + -2);
            iStack_6 = *(undefined2 *)(unaff_BP + -4);
            iStack_8 = unaff_BP + -0x5e;
            iStack_a = 0xdef;
            iStack_c = 0x68a;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0x68f;
            func_0x00029d78();
            iStack_12 = 0x22b2;
            iStack_14 = 0x699;
            func_0x000299d1();
            iStack_12 = unaff_BP + -0xf2;
            iStack_14 = unaff_BP + -0xe4;
            uStack_16 = 0x22b2;
            uStack_18 = 0x6a7;
            iVar7 = FUN_4375_882f();
            *(int *)(unaff_BP + -6) = iVar7;
            if (iVar7 < 1) break;
            *(undefined1 *)0x11d7 = 0;
            iStack_4 = *(undefined2 *)(unaff_BP + -2);
            iStack_6 = *(undefined2 *)(unaff_BP + -4);
            iStack_8 = *(undefined2 *)0x11e4;
            iStack_a = 0x22b2;
            iStack_c = 0x6d9;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0x6de;
            func_0x00029d78();
            iStack_12 = 0x22b2;
            iStack_14 = 0x6e8;
            func_0x000299d1();
            iStack_12 = *(int *)(unaff_BP + -6);
            iStack_14 = 0x22b2;
            uStack_16 = 0x6f4;
            func_0x000297e6();
            iStack_14 = 0x22b2;
            uStack_16 = 0x6f9;
            func_0x00029d78();
            iStack_1c = 0x22b2;
            iStack_1e = 0x703;
            func_0x000299d1();
            iStack_1c = 0x22b2;
            iStack_1e = 0x70c;
            func_0x000297e6();
            iStack_1c = 0x22b2;
            iStack_1e = 0x711;
            func_0x00029d78();
            uStack_24 = 0x22b2;
            func_0x000299d1();
            uStack_24 = *(undefined2 *)(unaff_BP + -0xf2);
            iStack_28 = *(int *)(unaff_BP + -0xe2);
            pcVar4 = (code *)swi(0x3f);
            (*pcVar4)();
            *(undefined2 *)0x11c = 1;
            iStack_4 = 3;
            iStack_6 = 0x22b2;
            iStack_8 = 0x749;
            func_0x0000f2cb();
            iVar11 = 0x885;
            func_0x0000a799();
            iStack_4 = 0x75b;
            iVar7 = FUN_4375_c082();
          }
          if ((*(int *)(unaff_BP + -0xd6) != 4) || (*(int *)(unaff_BP + -0x6a) == 0))
          goto LAB_3ab8_6175;
          *(undefined2 *)(unaff_BP + -0x2c8) = 0;
          *(undefined2 *)(unaff_BP + -0x2cc) = 0;
          iVar5 = iVar11;
LAB_3ab8_5bf7:
          iStack_4 = *(int *)0x11e + *(int *)(unaff_BP + -0x2c8) + 1;
          iStack_6 = unaff_BP + -0xd0;
          iStack_a = 0x791;
          iStack_8 = iVar5;
          FUN_4375_c05a();
          iStack_4 = unaff_BP + -0xd0;
          iVar11 = 0x22b2;
          iStack_8 = 0x7a2;
          iStack_6 = iVar5;
          FUN_21f2_2d26();
          *(undefined2 *)0xc20 = 1;
          if (0 < *(int *)(unaff_BP + -0x2c8)) {
            iStack_4 = unaff_BP + -0xf0;
            iStack_6 = unaff_BP + -0xe8;
            iStack_8 = unaff_BP + -0xd0;
            iStack_a = 1;
            iStack_c = 0x22b2;
            iVar11 = 0x1bb4;
            uStack_e = 0x7cd;
            uVar6 = FUN_1def_0904();
            *(undefined2 *)(unaff_BP + -0x2cc) = uVar6;
          }
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 == 0) {
            if (*(int *)(unaff_BP + -0x2cc) == -1) {
              iStack_6 = 0x7f9;
              iStack_4 = iVar11;
              func_0x0000daa6();
              iStack_4 = 0x885;
              iStack_6 = 0x803;
              FUN_1def_186d();
              iStack_4 = 0x1bb4;
              iStack_6 = 0x80c;
              func_0x0000daa6();
              *(undefined2 *)(unaff_BP + -0x2ca) = *(undefined2 *)0x150;
              iStack_4 = 0x885;
              iStack_6 = 0x81a;
              func_0x000190c7();
              iStack_4 = 0x18b3;
              iStack_6 = 0x824;
              func_0x0000b1d8();
              iVar5 = 0x885;
              iStack_4 = 0x82a;
              func_0x0000abfa();
              *(undefined2 *)(unaff_BP + -0x6a) = 0;
              *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + -1;
              iVar11 = iVar5;
              if (*(int *)(unaff_BP + -0x2c8) < 1) goto LAB_3ab8_559e;
            }
            if (*(int *)(unaff_BP + -0x2cc) == 1) {
LAB_3ab8_5cc4:
              while( true ) {
                iStack_4 = unaff_BP + -0xd0;
                iStack_8 = 0x852;
                iStack_6 = iVar11;
                FUN_21f2_3454();
                iStack_4 = unaff_BP + -0xd0;
                iStack_6 = 0x22b2;
                iStack_8 = 0x862;
                FUN_21f2_2d26();
                iStack_4 = unaff_BP + -0xd0;
                iStack_6 = 0x22b2;
                iStack_8 = 0x872;
                FUN_21f2_2d26();
                iStack_4 = unaff_BP + -0xf0;
                iStack_6 = unaff_BP + -0xe8;
                iStack_8 = unaff_BP + -0xd0;
                *(undefined2 *)0xc20 = 1;
                iStack_a = 1;
                iStack_c = 0x22b2;
                iVar11 = 0x1bb4;
                uStack_e = 0x893;
                iVar5 = FUN_1def_0904();
                *(int *)(unaff_BP + -0x2cc) = iVar5;
                *(undefined2 *)0xc20 = 0;
                if (*(int *)0x158 != 0) goto LAB_3ab8_5c61;
                if (iVar5 == -1) break;
                if (*(int *)(unaff_BP + -0x6a) != 0) {
                  iStack_4 = unaff_BP + -0xe8;
                  iStack_6 = *(undefined2 *)(unaff_BP + -0x6a);
                  iStack_8 = 0x1bb4;
                  iVar11 = 0x11f2;
                  iStack_a = 0xa76;
                  iVar5 = func_0x00015409();
                  if (iVar5 != 0) {
                    uVar6 = *(undefined2 *)(unaff_BP + -0xe6);
                    *(undefined2 *)(unaff_BP + -0x1ea) = *(undefined2 *)(unaff_BP + -0xe8);
                    *(undefined2 *)(unaff_BP + -0x1e8) = uVar6;
                    uVar6 = *(undefined2 *)(unaff_BP + -0xee);
                    *(undefined2 *)(unaff_BP + -0x2c6) = *(undefined2 *)(unaff_BP + -0xf0);
                    *(undefined2 *)(unaff_BP + -0x2c4) = uVar6;
                    iStack_4 = 0x11f2;
                    iStack_6 = 0xaa8;
                    func_0x0000daa6();
                    iStack_4 = *(undefined2 *)0x11e4;
                    iStack_6 = 0x885;
                    iStack_8 = 0xab9;
                    func_0x000297e6();
                    iStack_6 = 0x22b2;
                    iStack_8 = 0xabe;
                    func_0x00029d78();
                    uStack_e = 0x22b2;
                    uStack_10 = 0xac8;
                    func_0x000299d1();
                    uStack_e = 0x22b2;
                    uStack_10 = 0xad1;
                    func_0x000297e6();
                    uStack_e = 0x22b2;
                    uStack_10 = 0xad6;
                    func_0x00029d78();
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xae0;
                    func_0x000299d1();
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xae9;
                    func_0x000297e6();
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xaee;
                    func_0x00029d78();
                    iStack_1e = 0x22b2;
                    uStack_20 = 0xaf8;
                    func_0x000299d1();
                    iStack_1e = unaff_BP + -0xd0;
                    uStack_20 = 0x22b2;
                    uStack_22 = 0xb01;
                    iStack_4 = FUN_4375_b880();
                    *(undefined2 *)(unaff_BP + -0xea) = iStack_4;
                    iStack_6 = 2;
                    iStack_8 = 0x12;
                    iStack_a = unaff_BP + -0xd0;
                    iStack_c = 0x22b2;
                    uStack_e = 0xb1b;
                    FUN_1000_02b5();
                    iStack_4 = *(undefined2 *)(unaff_BP + -2);
                    iStack_6 = *(undefined2 *)(unaff_BP + -4);
                    iStack_8 = unaff_BP + -0x5e;
                    iStack_a = 0xdef;
                    iStack_c = 0xb35;
                    func_0x000297e6();
                    iStack_a = 0x22b2;
                    iStack_c = 0xb3a;
                    func_0x00029d78();
                    iStack_12 = 0x22b2;
                    iVar11 = 0x22b2;
                    iStack_14 = 0xb44;
                    func_0x000299d1();
                    iStack_12 = unaff_BP + -0xf2;
                    iStack_14 = unaff_BP + -0xe4;
                    uStack_16 = 0x22b2;
                    uStack_18 = 0xb52;
                    iVar5 = FUN_4375_882f();
                    *(int *)(unaff_BP + -6) = iVar5;
                    if (iVar5 < 1) goto LAB_3ab8_5c61;
                    *(undefined1 *)0x11d7 = 0;
                    iStack_4 = *(undefined2 *)(unaff_BP + -2);
                    iStack_6 = *(undefined2 *)(unaff_BP + -4);
                    iStack_8 = *(undefined2 *)0x11e4;
                    iStack_a = 0x22b2;
                    iStack_c = 0xb7a;
                    func_0x000297e6();
                    iStack_a = 0x22b2;
                    iStack_c = 0xb7f;
                    func_0x00029d78();
                    iStack_12 = 0x22b2;
                    iStack_14 = 0xb89;
                    func_0x000299d1();
                    iStack_12 = *(int *)(unaff_BP + -6);
                    iStack_14 = 0x22b2;
                    uStack_16 = 0xb95;
                    func_0x000297e6();
                    iStack_14 = 0x22b2;
                    uStack_16 = 0xb9a;
                    func_0x00029d78();
                    iStack_1c = 0x22b2;
                    iStack_1e = 0xba4;
                    func_0x000299d1();
                    iStack_1c = 0x22b2;
                    iStack_1e = 0xbad;
                    func_0x000297e6();
                    iStack_1c = 0x22b2;
                    iStack_1e = 0xbb2;
                    func_0x00029d78();
                    uStack_24 = 0x22b2;
                    func_0x000299d1();
                    uStack_24 = *(undefined2 *)(unaff_BP + -0xf2);
                    iStack_28 = unaff_BP + -0x2c6;
                    iStack_2a = unaff_BP + -0x1ea;
                    uStack_2c = *(undefined2 *)(unaff_BP + -0x2c8);
                    uStack_2e = *(undefined2 *)0x11e;
                    pcVar4 = (code *)swi(0x3f);
                    uVar6 = (*pcVar4)();
                    *(undefined2 *)(unaff_BP + -0x2cc) = uVar6;
                    func_0x0000daa6();
                    iStack_4 = 3;
                    iStack_6 = 0x885;
                    iStack_8 = 0xc03;
                    func_0x0000f2cb();
                    *(undefined2 *)0x11c = 1;
                    iVar11 = 0x885;
                    func_0x0000a7c5();
                    *(undefined2 *)0xc08 = 0;
                    *(undefined2 *)0xbc0 = 1;
                    goto LAB_3ab8_609d;
                  }
                }
              }
              iVar5 = iVar11;
              if (0x31 < *(int *)(unaff_BP + -0x2c8)) {
                iStack_4 = 0x1bb4;
                iStack_6 = 0xa21;
                func_0x0000daa6();
                iStack_4 = 0x885;
                iStack_6 = 0xa2b;
                FUN_1def_186d();
                iStack_4 = 0x1bb4;
                iStack_6 = 0xa34;
                func_0x0000daa6();
                *(undefined2 *)(unaff_BP + -0x2ca) = *(undefined2 *)0x150;
                iStack_4 = 0x885;
                iStack_6 = 0xa42;
                func_0x000190c7();
                iStack_4 = 0x18b3;
                iStack_6 = 0xa4c;
                func_0x0000b1d8();
                iStack_4 = 0xa52;
                func_0x0000abfa();
                *(undefined2 *)(unaff_BP + -0x6a) = 0;
                *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + -1;
                iVar5 = 0x885;
              }
              goto LAB_3ab8_5bf7;
            }
            iVar5 = iVar11;
            if (*(int *)(unaff_BP + -0x6a) == 0) goto LAB_3ab8_5bf7;
            if (0x31 < *(int *)(unaff_BP + -0x2c8)) {
LAB_3ab8_5e73:
              if (0x31 < *(int *)(unaff_BP + -0x2c8)) {
                iVar11 = 0x11f2;
                iStack_6 = 0xa06;
                iStack_4 = iVar5;
                func_0x00012276();
                goto LAB_3ab8_5cc4;
              }
              goto LAB_3ab8_5bf7;
            }
            iStack_4 = unaff_BP + -0xe8;
            iStack_6 = *(undefined2 *)(unaff_BP + -0x6a);
            iVar5 = 0x11f2;
            iStack_a = 0x8d2;
            iStack_8 = iVar11;
            iVar7 = func_0x00015409();
            if (iVar7 == 0) {
              if (0 < *(int *)(unaff_BP + -0x2c8)) goto LAB_3ab8_5e73;
              goto LAB_3ab8_559e;
            }
            if ((*(int *)(unaff_BP + -2) == 0 && *(int *)(unaff_BP + -4) == 0) ||
               (iVar7 = FUN_4375_7f31(), iVar7 == 0)) {
              iStack_4 = 0x11f2;
              iStack_6 = 0x91a;
              func_0x0000daa6();
              iStack_4 = 0x924;
              func_0x000297e6();
              iStack_4 = 0x929;
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0x933;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x93c;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0x941;
              func_0x00029d78();
              iStack_12 = 0x22b2;
              iStack_14 = 0x94b;
              func_0x000299d1();
              iStack_12 = 0x22b2;
              iStack_14 = 0x950;
              FUN_1def_1208();
              uVar6 = *(undefined2 *)(unaff_BP + -0xe8);
              uVar10 = *(undefined2 *)(unaff_BP + -0xe6);
              *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + 1;
              iVar5 = *(int *)(unaff_BP + -0x2c8) * 4;
              *(undefined2 *)(unaff_BP + iVar5 + -0x1ea) = uVar6;
              *(undefined2 *)(unaff_BP + iVar5 + -0x1e8) = uVar10;
              uVar6 = *(undefined2 *)(unaff_BP + -0xee);
              *(undefined2 *)(unaff_BP + iVar5 + -0x2c6) = *(undefined2 *)(unaff_BP + -0xf0);
              *(undefined2 *)(unaff_BP + iVar5 + -0x2c4) = uVar6;
              iStack_4 = 0x7562;
              iStack_6 = unaff_BP + -0xd0;
              iStack_8 = 0x1bb4;
              iStack_a = 0x996;
              FUN_21f2_3454();
              uVar6 = *(undefined2 *)0xa812;
              *(undefined2 *)0xb76a = *(undefined2 *)0xa810;
              *(undefined2 *)0xb76c = uVar6;
              uVar6 = *(undefined2 *)0xa7fe;
              *(undefined2 *)0xb784 = *(undefined2 *)0xa7fc;
              *(undefined2 *)0xb786 = uVar6;
              uVar6 = *(undefined2 *)(unaff_BP + -0xe6);
              *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0xe8);
              *(undefined2 *)0xb30e = uVar6;
              uVar6 = *(undefined2 *)(unaff_BP + -0xee);
              *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -0xf0);
              *(undefined2 *)0xb380 = uVar6;
              iStack_4 = 2;
              iStack_6 = 0x22b2;
              iStack_8 = 0x9e0;
              FUN_4375_ac1f();
              iStack_4 = 0x9e7;
              func_0x0000abfa();
              iVar5 = 0x885;
              goto LAB_3ab8_5e73;
            }
            if (*(int *)(unaff_BP + -0x2c8) < 1) goto LAB_3ab8_559e;
            goto LAB_3ab8_5bf7;
          }
LAB_3ab8_5c61:
          *(undefined2 *)(unaff_BP + -0x2cc) = 0xffff;
LAB_3ab8_609d:
          if (-1 < *(int *)(unaff_BP + -0x2cc)) {
            iVar7 = *(int *)(unaff_BP + -0x2c8);
            *(int *)0x11e = *(int *)0x11e + iVar7;
            goto LAB_3ab8_6175;
          }
          if (*(int *)(unaff_BP + -0x2cc) == -2) {
            iStack_6 = 0xc37;
            iStack_4 = iVar11;
            func_0x00012276();
            if (*(int *)0xc22 < 2) {
              *(undefined2 *)0xc22 = 2;
            }
            iStack_4 = 0x14;
            iStack_6 = 0x11f2;
            iStack_8 = 0xc52;
            FUN_1000_0599();
            iStack_4 = 0xdef;
            iVar11 = 0x11f2;
            iStack_6 = 0xc5d;
            func_0x00012276();
          }
          uVar6 = 0x11f2;
          iStack_6 = 0xc66;
          iStack_4 = iVar11;
          func_0x0001470b();
          while (iStack_4 = uVar6, 0 < *(int *)(unaff_BP + -0x2c8)) {
            uVar6 = 0x885;
            iStack_6 = 0xc71;
            func_0x0000daa6();
            iVar5 = *(int *)0x152;
            *(int *)(unaff_BP + -0x2ca) = iVar5;
            if (0 < iVar5) {
              iStack_4 = 0x885;
              uVar6 = 0x1bb4;
              iStack_6 = 0xc83;
              FUN_1def_186d();
            }
            iStack_6 = 0xc8c;
            iStack_4 = uVar6;
            func_0x0000daa6();
            *(undefined2 *)(unaff_BP + -0x2ca) = *(undefined2 *)0x150;
            iStack_4 = 0x885;
            while (uVar10 = iStack_4, 0 < *(int *)(unaff_BP + -0x2ca)) {
              uVar10 = 0;
              iStack_6 = 0xc9f;
              uVar14 = func_0x00000398();
              if ((*(byte *)((int)uVar14 + 0x16) & 0x80) == 0) break;
              *(int *)(unaff_BP + -0x2ca) = *(int *)(unaff_BP + -0x2ca) + -1;
              iStack_4 = uVar10;
            }
            uVar6 = uVar10;
            if (0 < *(int *)(unaff_BP + -0x2ca)) {
              uVar6 = 0x18b3;
              iStack_6 = 0xcc6;
              iStack_4 = uVar10;
              func_0x000190c7();
            }
            *(int *)(unaff_BP + -0x2c8) = *(int *)(unaff_BP + -0x2c8) + -1;
          }
          iStack_6 = 0xcdb;
          func_0x0000b1d8();
          iVar5 = 0x885;
          iStack_4 = 0xce1;
          iVar7 = func_0x0000abfa();
          if (*(int *)0x158 != 0) {
            return iVar7;
          }
        } while( true );
      }
      goto LAB_3ab8_5b31;
    }
    if (*(int *)0x158 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return iVar7;
LAB_3ab8_6175:
  if (((*(int *)(unaff_BP + -0xd6) == 3) && (*(int *)(unaff_BP + -0xe2) == 4)) ||
     ((*(int *)(unaff_BP + -0xd6) == 4 && (*(int *)(unaff_BP + -0xe2) == 1)))) {
    *(undefined1 *)(unaff_BP + -0x5a) = 0;
    iStack_4 = 0x11e0;
    iStack_6 = 0x11dc;
    iStack_8 = 0x11d8;
    iStack_c = 0xd29;
    iStack_a = iVar11;
    iVar7 = FUN_4375_b98a();
  }
  if (*(int *)(unaff_BP + -0xe2) == 0x14) {
LAB_3ab8_5b31:
    if (*(int *)(unaff_BP + -0xd6) != 0x14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return iVar7;
  }
  iVar5 = iVar11;
  if (*(int *)0x158 != 0) {
    return iVar7;
  }
  goto LAB_3ab8_558d;
}


