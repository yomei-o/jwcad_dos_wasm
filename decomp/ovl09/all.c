/* Ghidra decompilation of jw09.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  65 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0000(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  *(undefined2 *)0xc22 = 1;
  func_0x00012276(0x22b2,0x1dc);
  FUN_1000_0599(0x11f2,0x14,2);
  func_0x00012276(0xdef,0x3616,0xf7e,param_1,0x2a2);
  return;
}



/* 3ab8:0041  FUN_3ab8_0041  53 bytes, 0 callers */

void __cdecl16far FUN_3ab8_0041(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  
  FUN_21f2_0ebc();
  iVar2 = 0x22b2;
  do {
    do {
      FUN_3ab8_0081(iVar2);
      func_0x0000c3ca();
      if (*(int *)0x158 != 0) {
        return;
      }
    } while ((iVar2 != 1) && (bVar3 = iVar2 != 2, iVar2 = 0x885, bVar3));
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
    iVar2 = 0x885;
  } while (*(int *)0x158 == 0);
  return;
}



/* 3ab8:0081  FUN_3ab8_0081  7500 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003b221) */
/* WARNING: Removing unreachable block (ram,0x0003bc03) */
/* WARNING: Removing unreachable block (ram,0x0003c98c) */

uint FUN_3ab8_0081(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 uVar16;
  uint uVar17;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  long lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined2 *puVar24;
  undefined2 local_1930;
  undefined2 local_192e;
  undefined2 local_192c [1621];
  int local_c82;
  int local_c72;
  int aiStack_c70 [101];
  int local_ba6;
  int local_ba4;
  undefined2 local_ba2 [4];
  undefined2 auStack_b9a [1107];
  undefined2 local_2f4;
  undefined2 local_2f2;
  int local_2f0;
  undefined1 local_2ec;
  undefined2 local_27a;
  undefined2 local_278;
  undefined2 local_272;
  undefined2 local_270;
  undefined2 local_26e;
  undefined2 local_26c;
  undefined2 local_268;
  uint local_266;
  uint local_264;
  int local_262;
  int local_260;
  undefined2 local_25e;
  undefined2 local_25c;
  undefined2 local_256;
  undefined2 local_254;
  int local_252;
  int local_250;
  undefined4 local_24e;
  undefined2 local_246;
  undefined2 local_244;
  uint local_240;
  int local_23e;
  int local_23c;
  int local_23a;
  undefined2 local_238 [7];
  int local_22a;
  int local_228;
  int local_226;
  int local_224;
  undefined1 uStack_21e;
  byte bStack_21a;
  undefined2 local_218 [22];
  undefined2 local_1ec;
  undefined2 local_1ea;
  undefined2 local_1e8;
  undefined2 local_1e6;
  undefined2 local_1e4;
  undefined2 local_1e2;
  undefined2 local_1e0;
  undefined2 local_1de;
  undefined1 local_1dc;
  byte bStack_1d8;
  undefined2 local_1d6 [4];
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined2 local_1c8;
  undefined2 local_1c0 [11];
  int local_1aa;
  int local_1a4;
  int local_19c;
  int local_19a;
  uint local_198 [175];
  undefined2 uStack_3a;
  uint uStack_38;
  undefined2 auStack_36 [5];
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
  undefined4 uStack_16;
  undefined4 uStack_12;
  
  lVar5 = CONCAT22(local_192e,local_1930);
  FUN_21f2_0ebc();
  lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
LAB_3ab8_0093:
  uStack_16 = lVar21;
  local_23a = 0;
  local_252 = 0;
  local_ba6 = 0;
  local_ba4 = 0;
  local_c72 = 0;
  local_1a4 = 0;
LAB_3ab8_00ad:
  do {
    local_1aa = 1;
LAB_3ab8_00b3:
    do {
      while( true ) {
        local_2ec = 0;
        if ((local_ba6 == 0) && (*(char *)0x126 != '\0')) {
          func_0x00024c86();
        }
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        uVar11 = (int)*(uint *)0xc1c >> 0xf;
        if ((int)((*(uint *)0xc1c ^ uVar11) - uVar11) < 0x65) {
          FUN_21f2_2d26();
        }
        if ((local_ba6 == 0) && (*(char *)0x126 != '\0')) {
          FUN_21f2_2d26();
        }
        *(undefined2 *)0xc22 = 1;
        FUN_1000_0599();
        func_0x00012276();
        uStack_12._2_2_ = (undefined2 *)local_1aa;
        uStack_12._0_2_ = 0x11f2;
        uStack_16._2_2_ = 0xad21;
        func_0x00030b64();
        local_1aa = 1;
        *(undefined2 *)0xbc0 = 1;
        if (*(int *)0xc04 != 0) {
          *(undefined2 *)0xc04 = 0xffff;
        }
        if ((local_23a == 0) && (local_c72 == 0)) {
          local_240 = 10000;
        }
        else {
          local_240 = 9999;
        }
        *(undefined2 *)0xc1a = 10;
        uStack_12._2_2_ = (undefined2 *)local_240;
        uStack_12._0_2_ = 0x11f2;
        uVar11 = 0x1bb4;
        uStack_16._2_2_ = 0xad7a;
        local_c82 = FUN_1def_0904();
        *(undefined2 *)0xc1a = 0;
        if (*(int *)0x158 != 0) goto LAB_3ab8_020e;
        if (*(int *)0xc18 != 1) break;
        *(undefined2 *)0xc18 = 0;
        func_0x0000c3ca();
        func_0x000297e6();
        func_0x00029d78();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = 0xade5;
        func_0x000299d1();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = 0xadee;
        func_0x000297e6();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = 0xadf3;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uVar11 = 0x22b2;
        uStack_1a = 0xadfd;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x3684;
        uStack_1c = 0xffff;
        uStack_1e = 1;
        uStack_20 = 0;
        pcVar3 = (code *)swi(0x3f);
        iVar9 = (*pcVar3)();
        if (iVar9 != -1) {
          if (*(int *)0x158 == 0) {
            func_0x00008095();
            local_23a = 0;
            local_1a4 = local_ba6;
            local_c72 = 1;
            local_266 = 1;
            local_264 = 0;
            do {
              if ((*(int *)0x14a < (int)local_264) ||
                 ((*(int *)0x14a <= (int)local_264 && (*(uint *)0x148 < local_266))))
              goto LAB_3ab8_038d;
              uVar22 = func_0x0000013f();
              if (*(byte *)((int)uVar22 + 0x11) < 0x5a) {
                uVar22 = func_0x0000013f();
                if ((*(byte *)((int)uVar22 + 0x14) & 2) != 0) {
                  puVar24 = (undefined2 *)func_0x0000013f();
                  puVar14 = (undefined2 *)puVar24;
                  puVar13 = &local_1ec;
                  for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
                    puVar2 = puVar13;
                    puVar13 = puVar13 + 1;
                    puVar1 = puVar14;
                    puVar14 = puVar14 + 1;
                    *puVar2 = *puVar1;
                  }
                  if ((bStack_1d8 & 0x20) == 0) {
                    if (99 < local_ba6) goto LAB_3ab8_038d;
                    local_ba6 = local_ba6 + 1;
                    local_1dc = 1;
                    puVar13 = local_ba2 + local_ba6 * 0xb;
                    puVar14 = &local_1ec;
                    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
                      puVar1 = puVar13;
                      puVar13 = puVar13 + 1;
                      puVar24 = puVar14;
                      puVar14 = puVar14 + 1;
                      *puVar1 = *puVar24;
                    }
                    local_198[local_ba6 * 2] = local_266;
                    local_198[local_ba6 * 2 + 1] = local_264;
                  }
                }
              }
              bVar18 = 0xfffe < local_266;
              local_266 = local_266 + 1;
              local_264 = local_264 + bVar18;
            } while( true );
          }
LAB_3ab8_020e:
          uStack_12._2_2_ = (undefined2 *)0x0;
          uStack_16._2_2_ = 0xada9;
          uStack_12._0_2_ = uVar11;
          func_0x00030b64();
          *(undefined2 *)0xc04 = 0;
          return 0xff91;
        }
      }
      *(undefined2 *)0xc18 = 0;
      if (((local_c82 == 1) && (local_ba6 == 0)) && (*(char *)0x126 != '\0')) {
        if (*(char *)0x15b != '\0') {
          return (uint)*(byte *)0x15b;
        }
        goto LAB_3ab8_00ad;
      }
      lVar21 = local_24e;
      if ((local_c82 == 1) && (local_ba6 != 0)) goto LAB_3ab8_04aa;
    } while (local_c82 == 99);
    local_268 = 0;
    if ((local_c82 == -1) && ((local_23a != 0 || (local_c72 != 0)))) {
      if (0 < local_23a) {
        local_c82 = 0;
        goto LAB_3ab8_056f;
      }
      if (local_23a < 0) {
        local_23a = 0;
        local_1aa = -1;
        goto LAB_3ab8_00b3;
      }
      if (local_c72 != 0) {
        local_ba6 = local_1a4;
        local_c72 = 0;
        local_1a4 = 0;
        func_0x0001470b();
        goto LAB_3ab8_00b3;
      }
    }
    if (local_250 == 0) goto LAB_3ab8_00b3;
    if (99 < local_ba6) goto LAB_3ab8_0465;
    local_c72 = 0;
    *(undefined2 *)0x1150 = 1;
    func_0x000297e6();
    func_0x00029d78();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = 0xb1cd;
    func_0x000299d1();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = 0xb1d6;
    func_0x000297e6();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = 0xb1db;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xb1e5;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uVar11 = 0x11f2;
    uStack_1a = 0xb1ea;
    lVar21 = FUN_13bf_39a0();
    local_24e = lVar21;
    if (lVar21 == 0) {
      *(undefined2 *)0x1150 = 0;
      uStack_16 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
      uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
      goto LAB_3ab8_00b3;
    }
    *(undefined2 *)0x1150 = 0;
    if (local_250 != 2) {
      if (0 < lVar21) {
        local_c82 = 0;
        goto LAB_3ab8_04aa;
      }
      if (lVar21 < 0) {
        *(undefined2 *)0xc22 = 1;
        func_0x00012276();
        FUN_1000_0599();
        func_0x00012276();
      }
      goto LAB_3ab8_00b3;
    }
    local_c82 = 2;
LAB_3ab8_04aa:
    *(undefined2 *)0xc04 = 0xffff;
    if (local_c82 == 0) {
      local_23a = 0;
      local_24e = lVar21;
      puVar24 = (undefined2 *)func_0x0000013f();
      puVar14 = (undefined2 *)puVar24;
      puVar13 = &local_1ec;
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2 = puVar13;
        puVar13 = puVar13 + 1;
        puVar1 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar2 = *puVar1;
      }
      local_ba6 = local_ba6 + 1;
      local_1dc = 1;
      puVar13 = local_ba2 + local_ba6 * 0xb;
      puVar14 = &local_1ec;
      iVar9 = 0xb;
      lVar21 = local_24e;
      while( true ) {
        local_24e._2_2_ = (uint)((ulong)lVar21 >> 0x10);
        local_24e._0_2_ = (uint)lVar21;
        local_24e = lVar21;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        puVar1 = puVar13;
        puVar13 = puVar13 + 1;
        puVar24 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar1 = *puVar24;
        lVar21 = local_24e;
      }
      local_198[local_ba6 * 2] = (uint)local_24e;
      local_198[local_ba6 * 2 + 1] = local_24e._2_2_;
      local_252 = 1;
      uVar11 = 0;
      puVar24 = (undefined2 *)func_0x0000013f();
      puVar14 = (undefined2 *)puVar24;
      puVar13 = local_1d6;
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2 = puVar13;
        puVar13 = puVar13 + 1;
        puVar1 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar2 = *puVar1;
      }
      local_ba4 = local_ba6;
      lVar21 = local_24e;
      lVar5 = local_24e;
    }
LAB_3ab8_056f:
    local_1aa = 1;
    local_24e = lVar21;
    lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
    uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
LAB_3ab8_0575:
    do {
      uStack_16._0_2_ = (uint)lVar21;
      uStack_16 = lVar21;
      if (local_c82 != 0) {
        if (local_c82 != 2) {
          if (local_c82 != 1) goto LAB_3ab8_0093;
          uStack_12._2_2_ = local_ba2;
          uStack_16._2_2_ = 0xcae3;
          uStack_12._0_2_ = uVar11;
          iVar9 = FUN_3ab8_2b19();
          if (iVar9 == -1) goto LAB_3ab8_00ad;
          uStack_12._2_2_ = (undefined2 *)0x0;
          uStack_16._2_2_ = 0xcb07;
          uStack_12._0_2_ = uVar11;
          func_0x00030b64();
          *(undefined2 *)0xc04 = 0;
          lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
          if (*(int *)0x158 != 0) {
            return 0xff91;
          }
          goto LAB_3ab8_0093;
        }
        if (0 < local_24e) {
          *(undefined2 *)0xc22 = 1;
        }
        if (local_24e < 0) {
          uVar22 = func_0x00000271();
          uVar16 = (undefined2)((ulong)uVar22 >> 0x10);
          uVar23 = func_0x00000271();
          uVar12 = (undefined2)((ulong)uVar23 >> 0x10);
          if ((*(int *)((int)uVar22 + 0xe) != *(int *)((int)uVar23 + 0x12)) ||
             (*(int *)((int)uVar22 + 0x10) != *(int *)((int)uVar23 + 0x14))) {
            *(undefined2 *)0xc22 = 1;
          }
        }
        if (*(int *)0xc22 == 1) {
          func_0x00012276();
          FUN_1000_0599();
          func_0x00012276();
          func_0x00012276();
        }
        else if (local_24e != 0) {
          if (local_ba6 < 100) {
            puVar24 = (undefined2 *)func_0x00000271();
            puVar14 = (undefined2 *)puVar24;
            puVar13 = local_238;
            for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar2 = puVar13;
              puVar13 = puVar13 + 1;
              puVar1 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar2 = *puVar1;
            }
            puVar24 = (undefined2 *)func_0x00000271();
            puVar14 = (undefined2 *)puVar24;
            puVar13 = local_218;
            for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar2 = puVar13;
              puVar13 = puVar13 + 1;
              puVar1 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar2 = *puVar1;
            }
            local_ba6 = local_ba6 + 1;
            puVar13 = local_192c + local_ba6 * 0x10;
            puVar14 = local_238;
            for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar1 = puVar13;
              puVar13 = puVar13 + 1;
              puVar24 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar1 = *puVar24;
            }
            local_198[local_ba6 * 2] = (uint)local_24e;
            local_198[local_ba6 * 2 + 1] = local_24e._2_2_;
            local_23a = -1;
          }
          else {
LAB_3ab8_15ff:
            FUN_3ab8_0000();
          }
        }
        goto LAB_3ab8_00ad;
      }
      *(undefined2 *)0xbc0 = 1;
      *(int *)0xc04 = local_ba4;
      FUN_21f2_3454();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      if ((2 < local_252) || ((int)local_198[local_ba6 * 2 + 1] < 0)) {
        FUN_21f2_2d26();
      }
      *(undefined2 *)0xc22 = 1;
      FUN_1000_0599();
      func_0x00012276();
      uStack_12._2_2_ = (undefined2 *)local_1aa;
      uStack_12._0_2_ = 0x11f2;
      uStack_16._2_2_ = 0xb331;
      func_0x00030b64();
      local_1aa = 1;
      uStack_12._2_2_ = (undefined2 *)0x270f;
      uStack_12._0_2_ = 0x11f2;
      uVar11 = 0x1bb4;
      uStack_16._2_2_ = 0xb357;
      iVar9 = FUN_1def_0904();
      lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
      if (*(int *)0x158 != 0) goto LAB_3ab8_020e;
    } while (iVar9 == 99);
    if (iVar9 == -1) {
      local_1aa = iVar9;
      local_252 = local_252 + -1;
      if (local_252 == 0) {
        uStack_12._2_2_ = (undefined2 *)0xffff;
        uStack_12._0_2_ = 0x1bb4;
        uStack_16._2_2_ = 0xb39b;
        func_0x00030b64();
        local_23a = 0;
        goto LAB_3ab8_00ad;
      }
      lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
      uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
      if ((-1 < (int)local_198[local_ba6 * 2 + 1]) &&
         ((0 < (int)local_198[local_ba6 * 2 + 1] ||
          (lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16),
          uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12), local_198[local_ba6 * 2] != 0)))) {
        puVar14 = local_1d6;
        puVar13 = local_ba2 + local_ba6 * 0xb;
        iVar9 = 0xb;
        while( true ) {
          lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
          uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          puVar1 = puVar14;
          puVar14 = puVar14 + 1;
          puVar24 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar1 = *puVar24;
        }
      }
      goto LAB_3ab8_0575;
    }
    if (99 < local_ba6) {
LAB_3ab8_0869:
      FUN_3ab8_0000();
      lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
      uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
      goto LAB_3ab8_0575;
    }
    if (iVar9 == 1) goto LAB_3ab8_087e;
    lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
    uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
    if (local_250 == 0) goto LAB_3ab8_0575;
    *(undefined2 *)0x1150 = 1;
    func_0x000297e6();
    func_0x00029d78();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = 0xba59;
    func_0x000299d1();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = 0xba62;
    func_0x000297e6();
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = 0xba67;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xba71;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uVar11 = 0x11f2;
    uStack_1a = 0xba76;
    lVar21 = FUN_13bf_39a0();
    local_24e = lVar21;
    if (lVar21 == 0) {
      *(undefined2 *)0x1150 = 0;
      lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
      uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
      goto LAB_3ab8_0575;
    }
    *(undefined2 *)0x1150 = 0;
    uVar17 = uVar11;
LAB_3ab8_0f14:
    local_23c = 0;
    uVar11 = uVar17;
    local_24e = lVar21;
    if (lVar21 == lVar5) {
      if (((int)local_198[local_ba6 * 2 + 1] < 0) ||
         (((int)local_198[local_ba6 * 2 + 1] < 1 && (local_198[local_ba6 * 2] == 0)))) {
LAB_3ab8_1071:
        local_23c = 1;
        uVar11 = uVar17;
        local_24e = lVar21;
      }
      else {
        puVar14 = local_1c0;
        puVar13 = local_ba2 + local_ba4 * 0xb;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar1 = puVar14;
          puVar14 = puVar14 + 1;
          puVar24 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar1 = *puVar24;
        }
        puVar14 = &local_1ec;
        puVar13 = local_ba2 + local_ba6 * 0xb;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar1 = puVar14;
          puVar14 = puVar14 + 1;
          puVar24 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar1 = *puVar24;
        }
        puVar14 = &uStack_20;
        puVar13 = &local_1ec;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar1 = puVar14;
          puVar14 = puVar14 + 1;
          puVar24 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar1 = *puVar24;
        }
        puVar14 = auStack_36;
        puVar13 = local_1c0;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar1 = puVar14;
          puVar14 = puVar14 + 1;
          puVar24 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar1 = *puVar24;
        }
        uVar11 = 0x1bb4;
        uStack_3a = 0xbb28;
        uStack_38 = uVar17;
        iVar10 = FUN_1def_1921();
        if (iVar10 != 0) {
          func_0x000297e6();
          func_0x00029d78();
          uStack_12._2_2_ = (undefined2 *)0x22b2;
          uStack_12._0_2_ = 0xbb4a;
          func_0x000299d1();
          uStack_12._2_2_ = (undefined2 *)0x22b2;
          uStack_12._0_2_ = 0xbb53;
          func_0x000297e6();
          uStack_12._2_2_ = (undefined2 *)0x22b2;
          uStack_12._0_2_ = 0xbb58;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0xbb62;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          uStack_1a = 0xbb6b;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          uStack_1a = 0xbb70;
          func_0x00029d78();
          uStack_20 = 0x22b2;
          uStack_22 = 0xbb7a;
          func_0x000299d1();
          uStack_20 = 0x22b2;
          uStack_22 = 0xbb83;
          func_0x000297e6();
          uStack_20 = 0x22b2;
          uStack_22 = 0xbb88;
          func_0x00029d78();
          uStack_28 = 0x22b2;
          uStack_2a = 0xbb92;
          func_0x000299d1();
          uStack_28 = 0x22b2;
          uStack_2a = 0xbb97;
          iVar10 = FUN_1def_043a();
          uVar11 = 0x1bb4;
          if (iVar10 != 0) {
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029d78();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xbbbf;
            func_0x000299d1();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xbbc8;
            func_0x000297e6();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xbbcd;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xbbd7;
            func_0x000299d1();
            uStack_18 = 1;
            uStack_1a = 0x22b2;
            uStack_1c = 0xbbe0;
            FUN_1def_05d1();
            uVar19 = (undefined1 *)0xffed < &uStack_18;
            uVar20 = &stack0x0000 == (undefined1 *)0x6;
            func_0x000297e6();
            uVar17 = 0x22b2;
            FUN_28b3_1181();
            uVar11 = uVar17;
            lVar21 = local_24e;
            if (!(bool)uVar19 && !(bool)uVar20) goto LAB_3ab8_1071;
          }
        }
      }
    }
    if ((0 < local_24e) && (local_23c == 0)) {
      if (local_ba6 < 100) {
        puVar24 = (undefined2 *)func_0x0000013f();
        puVar14 = (undefined2 *)puVar24;
        puVar13 = &local_1ec;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar2 = puVar13;
          puVar13 = puVar13 + 1;
          puVar1 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar1;
        }
        if (((int)local_198[local_ba6 * 2 + 1] < 0) ||
           (((int)local_198[local_ba6 * 2 + 1] < 1 && (local_198[local_ba6 * 2] == 0)))) {
          uStack_12._0_2_ = local_198[local_ba6 * 2];
          uStack_12._2_2_ = (undefined2 *)local_198[local_ba6 * 2 + 1];
          uStack_18 = 0;
          uStack_1a = 0xbce4;
          uStack_16 = local_24e;
          local_19c = FUN_1def_2b59();
          local_19a = local_19c >> 0xf;
          uVar19 = 0;
          uVar20 = local_19c == 0;
          if (local_19c == 0) goto LAB_3ab8_1174;
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x0002996b();
          func_0x00029b6d();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x0002996b();
          func_0x00029b6d();
          FUN_28b3_117c();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x0002996b();
          func_0x00029b6d();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x0002996b();
          func_0x00029b6d();
          FUN_28b3_117c();
          FUN_28b3_1181();
          if ((bool)uVar19 || (bool)uVar20) {
            local_25e = local_256;
            local_25c = local_254;
            local_27a = local_272;
            local_278 = local_270;
          }
          else {
            local_25e = local_26e;
            local_25c = local_26c;
            local_27a = local_2f4;
            local_278 = local_2f2;
          }
        }
        else {
          puVar14 = local_1d6;
          puVar13 = local_ba2 + local_ba6 * 0xb;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar1 = puVar14;
            puVar14 = puVar14 + 1;
            puVar24 = puVar13;
            puVar13 = puVar13 + 1;
            *puVar1 = *puVar24;
          }
          puVar14 = &uStack_20;
          puVar13 = &local_1ec;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar1 = puVar14;
            puVar14 = puVar14 + 1;
            puVar24 = puVar13;
            puVar13 = puVar13 + 1;
            *puVar1 = *puVar24;
          }
          puVar14 = auStack_36;
          puVar13 = local_1d6;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar1 = puVar14;
            puVar14 = puVar14 + 1;
            puVar24 = puVar13;
            puVar13 = puVar13 + 1;
            *puVar1 = *puVar24;
          }
          uStack_38 = 0;
          uVar11 = 0x1bb4;
          uStack_3a = 0xbc9c;
          iVar10 = FUN_1def_1921();
          lVar21 = uStack_16;
          uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
          if (iVar10 == 0) goto LAB_3ab8_0575;
        }
        puVar24 = (undefined2 *)func_0x0000013f();
        puVar14 = (undefined2 *)puVar24;
        puVar13 = &local_1ec;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar2 = puVar14;
          puVar14 = puVar14 + 1;
          puVar1 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar2 = *puVar1;
        }
        func_0x000297e6();
        func_0x00029d78();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = 0xbe2c;
        func_0x000299d1();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = 0xbe35;
        func_0x000297e6();
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uStack_12._0_2_ = 0xbe3a;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xbe44;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0xbe4d;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xbe52;
        func_0x00029d78();
        uStack_20 = 0x22b2;
        uStack_22 = 0xbe5c;
        func_0x000299d1();
        uStack_20 = 0x22b2;
        uStack_22 = 0xbe65;
        func_0x000297e6();
        uStack_20 = 0x22b2;
        uStack_22 = 0xbe6a;
        func_0x00029d78();
        uStack_28 = 0x22b2;
        uStack_2a = 0xbe74;
        func_0x000299d1();
        uStack_28 = 0x22b2;
        uStack_2a = 0xbe78;
        FUN_3ab8_2754();
        puVar24 = (undefined2 *)func_0x0000013f();
        puVar14 = (undefined2 *)puVar24;
        puVar13 = &local_1ec;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar2 = puVar13;
          puVar13 = puVar13 + 1;
          puVar1 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar1;
        }
        local_1ec = local_25e;
        local_1ea = local_25c;
        local_1e8 = local_27a;
        local_1e6 = local_278;
        uVar11 = 0x885;
        func_0x0000daa6();
        if (((int)local_198[local_ba6 * 2 + 1] < 0) ||
           (((int)local_198[local_ba6 * 2 + 1] < 1 && (local_198[local_ba6 * 2] == 0)))) {
          local_266 = local_198[local_ba6 * 2];
          local_264 = local_198[local_ba6 * 2 + 1];
          puVar24 = (undefined2 *)func_0x00000271();
          puVar14 = (undefined2 *)puVar24;
          puVar13 = local_238;
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar2 = puVar13;
            puVar13 = puVar13 + 1;
            puVar1 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar2 = *puVar1;
          }
          puVar24 = (undefined2 *)func_0x00000271();
          puVar14 = (undefined2 *)puVar24;
          puVar13 = local_192c + local_ba6 * 0x10;
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar2 = puVar14;
            puVar14 = puVar14 + 1;
            puVar1 = puVar13;
            puVar13 = puVar13 + 1;
            *puVar2 = *puVar1;
          }
          puVar14 = local_238;
          puVar13 = local_192c + local_ba6 * 0x10;
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar1 = puVar14;
            puVar14 = puVar14 + 1;
            puVar24 = puVar13;
            puVar13 = puVar13 + 1;
            *puVar1 = *puVar24;
          }
          func_0x000297e6();
          func_0x00029d78();
          uStack_12._0_2_ = 0x22b2;
          uStack_16._2_2_ = 0xc079;
          func_0x000299d1();
          uStack_12._0_2_ = 0x22b2;
          uStack_16._2_2_ = 0xc082;
          func_0x000297e6();
          uStack_12._0_2_ = 0x22b2;
          uStack_16._2_2_ = 0xc087;
          func_0x00029d78();
          uStack_1a = 0x22b2;
          uStack_1c = 0xc091;
          func_0x000299d1();
          uStack_1a = 0;
          uStack_1c = 0;
          uStack_1e = 0x22b2;
          uVar11 = 0x1bb4;
          uStack_20 = 0xc09a;
          FUN_20a9_1260();
          if (aiStack_c70[local_ba6] == 0) {
            local_226 = local_262;
            local_224 = local_260;
          }
          else {
            local_22a = local_262;
            local_228 = local_260;
          }
          puVar13 = local_192c + local_ba6 * 0x10;
          puVar14 = local_238;
          iVar10 = 0x10;
        }
        else {
          if (local_252 == 1) {
            puVar24 = (undefined2 *)func_0x0000013f();
            puVar14 = (undefined2 *)puVar24;
            puVar13 = local_1d6;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar2 = puVar13;
              puVar13 = puVar13 + 1;
              puVar1 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar2 = *puVar1;
            }
            puVar24 = (undefined2 *)func_0x0000013f();
            puVar14 = (undefined2 *)puVar24;
            puVar13 = local_1d6;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar2 = puVar14;
              puVar14 = puVar14 + 1;
              puVar1 = puVar13;
              puVar13 = puVar13 + 1;
              *puVar2 = *puVar1;
            }
            func_0x000297e6();
            func_0x00029d78();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xbf40;
            func_0x000299d1();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xbf49;
            func_0x000297e6();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xbf4e;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xbf58;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1a = 0xbf61;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            uStack_1a = 0xbf66;
            func_0x00029d78();
            uStack_20 = 0x22b2;
            uStack_22 = 0xbf70;
            func_0x000299d1();
            uStack_20 = 0x22b2;
            uStack_22 = 0xbf79;
            func_0x000297e6();
            uStack_20 = 0x22b2;
            uStack_22 = 0xbf7e;
            func_0x00029d78();
            uStack_28 = 0x22b2;
            uStack_2a = 0xbf88;
            func_0x000299d1();
            uStack_28 = 0x22b2;
            uStack_2a = 0xbf8c;
            FUN_3ab8_2754();
            uVar11 = 0;
            puVar24 = (undefined2 *)func_0x0000013f();
            puVar14 = (undefined2 *)puVar24;
            puVar13 = local_1d6;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar2 = puVar13;
              puVar13 = puVar13 + 1;
              puVar1 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar2 = *puVar1;
            }
          }
          local_1ce = local_25e;
          local_1cc = local_25c;
          local_1ca = local_27a;
          local_1c8 = local_278;
          puVar13 = local_ba2 + local_ba6 * 0xb;
          puVar14 = local_1d6;
          iVar10 = 0xb;
        }
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar1 = puVar13;
          puVar13 = puVar13 + 1;
          puVar24 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar1 = *puVar24;
        }
        local_ba6 = local_ba6 + 1;
        local_1dc = 1;
        puVar13 = local_ba2 + local_ba6 * 0xb;
        puVar14 = &local_1ec;
        iVar10 = 0xb;
        lVar4 = local_24e;
        while( true ) {
          local_24e._2_2_ = (uint)((ulong)lVar4 >> 0x10);
          local_24e._0_2_ = (uint)lVar4;
          local_24e = lVar4;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          puVar1 = puVar13;
          puVar13 = puVar13 + 1;
          puVar24 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar1 = *puVar24;
          lVar4 = local_24e;
        }
        local_198[local_ba6 * 2] = (uint)local_24e;
        local_198[local_ba6 * 2 + 1] = local_24e._2_2_;
        puVar13 = local_1d6;
        puVar14 = &local_1ec;
        iVar10 = 0xb;
        while( true ) {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          puVar1 = puVar13;
          puVar13 = puVar13 + 1;
          puVar24 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar1 = *puVar24;
        }
        local_252 = local_252 + 1;
        lVar21 = uStack_16;
        uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
        if (iVar9 == 1) {
          do {
            uStack_12._2_2_ = (undefined2 *)0x1;
            uStack_16._2_2_ = 0xba2b;
            uStack_12._0_2_ = uVar11;
            local_24e = lVar4;
            func_0x00030b64();
LAB_3ab8_087e:
            func_0x0000c340();
            func_0x00010526();
            FUN_1000_0599();
            func_0x00012276();
            *(undefined2 *)0xc22 = 1;
            FUN_1000_0599();
            func_0x00012276();
            uVar22 = FUN_1000_0632();
            iVar10 = (int)((ulong)uVar22 >> 0x10);
            if (((uint)uVar22 & 0xff) == 0x1b) {
LAB_3ab8_0908:
              uVar11 = 0xdef;
              lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
              uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
              break;
            }
            uStack_12._2_2_ = (undefined2 *)0xdef;
            uStack_12._0_2_ = 0xb471;
            uVar11 = FUN_3ab8_1fa3();
            local_24e._0_2_ = uVar11;
            local_24e._2_2_ = iVar10;
            cVar8 = FUN_1000_0632();
            if (cVar8 == '\x1b') goto LAB_3ab8_0908;
            if (local_24e._2_2_ == 0 && (uint)local_24e == 0) goto LAB_3ab8_0918;
            uVar19 = local_24e._2_2_ == 0;
            if ((-1 < (int)local_24e._2_2_) &&
               ((0 < (int)local_24e._2_2_ || (uVar19 = (uint)local_24e == 0, !(bool)uVar19))))
            goto LAB_3ab8_0937;
            puVar24 = (undefined2 *)func_0x0000013f();
            puVar14 = (undefined2 *)puVar24;
            puVar13 = &local_1ec;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar2 = puVar13;
              puVar13 = puVar13 + 1;
              puVar1 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar2 = *puVar1;
            }
            func_0x000297e6();
            func_0x00029d78();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xb7d3;
            func_0x000299d1();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xb7dc;
            func_0x000297e6();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xb7e1;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xb7eb;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1a = 0xb7f4;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            uStack_1a = 0xb7f9;
            func_0x00029d78();
            uStack_20 = 0x22b2;
            uStack_22 = 0xb803;
            func_0x000299d1();
            uStack_20 = 0x22b2;
            uStack_22 = 0xb80c;
            func_0x000297e6();
            uStack_20 = 0x22b2;
            uStack_22 = 0xb811;
            func_0x00029d78();
            uStack_28 = 0x22b2;
            uStack_2a = 0xb81b;
            func_0x000299d1();
            uStack_28 = 0x22b2;
            uVar11 = 0x1bb4;
            uStack_2a = 0xb820;
            iVar10 = FUN_1def_043a();
            local_24e = CONCAT22(local_24e._2_2_,(uint)local_24e);
            lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
            uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
            if (iVar10 == 0) break;
            func_0x000297e6();
            func_0x00029d78();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xb842;
            func_0x000299d1();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xb84b;
            func_0x000297e6();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xb850;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xb85a;
            func_0x000299d1();
            uStack_18 = 1;
            uStack_1a = 0x22b2;
            uStack_1c = 0xb863;
            FUN_1def_05d1();
            func_0x000297e6();
            func_0x00029d78();
            func_0x000297e6();
            func_0x00029d78();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xb88a;
            func_0x000299d1();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xb893;
            func_0x000297e6();
            uStack_12._2_2_ = (undefined2 *)0x22b2;
            uStack_12._0_2_ = 0xb898;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xb8a2;
            func_0x000299d1();
            uStack_18 = 1;
            uStack_1a = 0x22b2;
            uStack_1c = 0xb8ab;
            FUN_1def_05d1();
            uVar19 = (undefined1 *)0xffed < &uStack_18;
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c74();
            uVar11 = 0x22b2;
            FUN_28b3_1181();
            uVar7 = local_1e6;
            uVar6 = local_1e8;
            uVar12 = local_1ea;
            uVar16 = local_1ec;
            if ((bool)uVar19) {
              local_1ec = local_1e4;
              local_1ea = local_1e2;
              local_1e4 = uVar16;
              local_1e2 = uVar12;
              local_246 = local_1e8;
              local_244 = local_1e6;
              local_1e8 = local_1e0;
              local_1e6 = local_1de;
              local_1e0 = uVar6;
              local_1de = uVar7;
            }
            uVar16 = local_1ea;
            if (local_24e._2_2_ +
                (uint)CARRY2(local_198[local_ba4 * 2],(uint)local_24e) +
                local_198[local_ba4 * 2 + 1] == 0 && local_198[local_ba4 * 2] + (uint)local_24e == 0
               ) {
              auStack_b9a[local_ba6 * 0xb] = local_1ec;
              auStack_b9a[local_ba6 * 0xb + 1] = uVar16;
              uVar16 = local_1e6;
              auStack_b9a[local_ba6 * 0xb + 2] = local_1e8;
              auStack_b9a[local_ba6 * 0xb + 3] = uVar16;
              goto LAB_3ab8_0def;
            }
            local_1ec = local_1ce;
            local_1ea = local_1cc;
            local_1e8 = local_1ca;
            local_1e6 = local_1c8;
            local_ba6 = local_ba6 + 1;
            local_1dc = 1;
            puVar13 = local_ba2 + local_ba6 * 0xb;
            puVar14 = &local_1ec;
            for (iVar10 = 0xb; lVar4 = CONCAT22(local_24e._2_2_,(uint)local_24e), iVar10 != 0;
                iVar10 = iVar10 + -1) {
              puVar1 = puVar13;
              puVar13 = puVar13 + 1;
              puVar24 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar1 = *puVar24;
            }
            local_198[local_ba6 * 2] = -(uint)local_24e;
            local_198[local_ba6 * 2 + 1] = -(local_24e._2_2_ + ((uint)local_24e != 0));
            puVar13 = local_1d6;
            puVar14 = &local_1ec;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar1 = puVar13;
              puVar13 = puVar13 + 1;
              puVar24 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar1 = *puVar24;
            }
            local_252 = local_252 + 1;
          } while( true );
        }
        goto LAB_3ab8_0575;
      }
      goto LAB_3ab8_0869;
    }
    if (local_24e < 0) {
      if ((int)local_198[local_ba6 * 2 + 1] < 0) {
        *(undefined2 *)0xc22 = 1;
        func_0x00012276();
        FUN_1000_0599();
        goto LAB_3ab8_0918;
      }
      uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
      if (99 < local_ba6) goto LAB_3ab8_15ff;
      puVar24 = (undefined2 *)func_0x00000271();
      puVar14 = (undefined2 *)puVar24;
      puVar13 = local_238;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2 = puVar13;
        puVar13 = puVar13 + 1;
        puVar1 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar2 = *puVar1;
      }
      if ((local_22a == local_226) && (local_228 == local_224)) {
        *(undefined2 *)0xc22 = 1;
        func_0x00012276();
        FUN_1000_0599();
LAB_3ab8_0918:
        uVar11 = 0x11f2;
        func_0x00012276();
        lVar21 = uStack_16;
      }
      else {
        uStack_12 = local_24e;
        uStack_16._0_2_ = local_198[local_ba6 * 2];
        uStack_16._2_2_ = local_198[local_ba6 * 2 + 1];
        uStack_18 = 0;
        uStack_1a = 0xc227;
        local_19c = FUN_1def_2b59();
        local_19a = local_19c >> 0xf;
        uVar19 = 0;
        uVar20 = local_19c == 0;
        if (local_19c == 0) goto LAB_3ab8_1174;
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x0002996b();
        func_0x00029b6d();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x0002996b();
        func_0x00029b6d();
        FUN_28b3_117c();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x0002996b();
        func_0x00029b6d();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x0002996b();
        func_0x00029b6d();
        FUN_28b3_117c();
        FUN_28b3_1181();
        if ((bool)uVar19 || (bool)uVar20) {
          local_25e = local_256;
          local_25c = local_254;
          local_27a = local_272;
          local_278 = local_270;
        }
        else {
          local_25e = local_26e;
          local_25c = local_26c;
          local_27a = local_2f4;
          local_278 = local_2f2;
        }
        puVar24 = (undefined2 *)func_0x00000271();
        puVar14 = (undefined2 *)puVar24;
        puVar13 = local_238;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar2 = puVar14;
          puVar14 = puVar14 + 1;
          puVar1 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar2 = *puVar1;
        }
        local_23e = 0;
        uStack_12._2_2_ = (undefined2 *)0x0;
        uStack_12._0_2_ = 0;
        uStack_16._2_2_ = 0;
        uStack_16._0_2_ = 0xc358;
        FUN_20a9_0ca3();
        uVar19 = (undefined1 *)0xfff3 < (undefined1 *)((int)&uStack_16 + 2);
        uVar20 = &stack0x0000 == (undefined1 *)0x8;
        func_0x00029834();
        FUN_28b3_100d();
        func_0x000299b9();
        func_0x00029c2c();
        func_0x00029834();
        FUN_28b3_100d();
        func_0x000299b9();
        func_0x00029c2c();
        FUN_28b3_117c();
        func_0x00029834();
        FUN_28b3_100d();
        func_0x000299b9();
        func_0x00029c2c();
        func_0x00029834();
        FUN_28b3_100d();
        func_0x000299b9();
        func_0x00029c2c();
        FUN_28b3_117c();
        FUN_28b3_1181();
        if ((bool)uVar19 || (bool)uVar20) {
          local_23e = 1;
        }
        func_0x0000daa6();
        if ((-1 < (int)local_198[local_ba6 * 2 + 1]) &&
           ((0 < (int)local_198[local_ba6 * 2 + 1] || (local_198[local_ba6 * 2] != 0)))) {
          if (local_252 == 1) {
            uStack_12._2_2_ = (undefined2 *)0xc440;
            puVar24 = (undefined2 *)func_0x0000013f();
            puVar14 = (undefined2 *)puVar24;
            puVar13 = local_1d6;
            for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar2 = puVar13;
              puVar13 = puVar13 + 1;
              puVar1 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar2 = *puVar1;
            }
            uStack_12._2_2_ = (undefined2 *)0xc45c;
            puVar24 = (undefined2 *)func_0x0000013f();
            puVar14 = (undefined2 *)puVar24;
            puVar13 = local_1d6;
            for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar2 = puVar14;
              puVar14 = puVar14 + 1;
              puVar1 = puVar13;
              puVar13 = puVar13 + 1;
              *puVar2 = *puVar1;
            }
            func_0x000297e6();
            func_0x00029d78();
            uStack_12._0_2_ = 0x22b2;
            uStack_16._2_2_ = 0xc48b;
            func_0x000299d1();
            uStack_12._0_2_ = 0x22b2;
            uStack_16._2_2_ = 0xc494;
            func_0x000297e6();
            uStack_12._0_2_ = 0x22b2;
            uStack_16._2_2_ = 0xc499;
            func_0x00029d78();
            uStack_1a = 0x22b2;
            uStack_1c = 0xc4a3;
            func_0x000299d1();
            uStack_1a = 0x22b2;
            uStack_1c = 0xc4ac;
            func_0x000297e6();
            uStack_1a = 0x22b2;
            uStack_1c = 0xc4b1;
            func_0x00029d78();
            uStack_22 = 0x22b2;
            uStack_24 = 0xc4bb;
            func_0x000299d1();
            uStack_22 = 0x22b2;
            uStack_24 = 0xc4c4;
            func_0x000297e6();
            uStack_22 = 0x22b2;
            uStack_24 = 0xc4c9;
            func_0x00029d78();
            uStack_2a = 0x22b2;
            uStack_2c = 0xc4d3;
            func_0x000299d1();
            uStack_2a = 0x22b2;
            uStack_2c = 0xc4d7;
            FUN_3ab8_2754();
            uStack_12._2_2_ = (undefined2 *)0xc4e3;
            puVar24 = (undefined2 *)func_0x0000013f();
            puVar14 = (undefined2 *)puVar24;
            puVar13 = local_1d6;
            for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar2 = puVar13;
              puVar13 = puVar13 + 1;
              puVar1 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar2 = *puVar1;
            }
          }
          local_1ce = local_25e;
          local_1cc = local_25c;
          local_1ca = local_27a;
          local_1c8 = local_278;
          puVar13 = local_ba2 + local_ba6 * 0xb;
          puVar14 = local_1d6;
          for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar1 = puVar13;
            puVar13 = puVar13 + 1;
            puVar24 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar1 = *puVar24;
          }
        }
        func_0x000297e6();
        func_0x00029d78();
        uStack_16._2_2_ = 0x22b2;
        uStack_16._0_2_ = 0xc54b;
        func_0x000299d1();
        uStack_16._2_2_ = 0x22b2;
        uStack_16._0_2_ = 0xc554;
        func_0x000297e6();
        uStack_16._2_2_ = 0x22b2;
        uStack_16._0_2_ = 0xc559;
        func_0x00029d78();
        uStack_1c = 0x22b2;
        uStack_1e = 0xc563;
        func_0x000299d1();
        uStack_1c = 0;
        uStack_1e = 0;
        uStack_20 = 0x22b2;
        uStack_22 = 0xc56c;
        FUN_20a9_1260();
        if (local_23e == 0) {
          local_22a = local_262;
          local_228 = local_260;
        }
        if (local_23e == 1) {
          local_226 = local_262;
          local_224 = local_260;
        }
        local_ba6 = local_ba6 + 1;
        local_198[local_ba6 * 2] = (uint)local_24e;
        local_198[local_ba6 * 2 + 1] = local_24e._2_2_;
        puVar13 = local_192c + local_ba6 * 0x10;
        puVar14 = local_238;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar1 = puVar13;
          puVar13 = puVar13 + 1;
          puVar24 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar1 = *puVar24;
        }
        aiStack_c70[local_ba6] = local_23e;
        local_252 = local_252 + 1;
        uVar11 = 0;
        uStack_12._2_2_ = (undefined2 *)0xc5f0;
        puVar24 = (undefined2 *)func_0x00000271();
        puVar14 = (undefined2 *)puVar24;
        puVar13 = local_218;
        iVar9 = 0x10;
        while( true ) {
          lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
          uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          puVar2 = puVar13;
          puVar13 = puVar13 + 1;
          puVar1 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar1;
        }
      }
      goto LAB_3ab8_0575;
    }
    lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
    uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
    if ((lVar5 != local_24e) ||
       ((local_252 < 3 &&
        (lVar21 = uStack_16, uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12),
        -1 < (int)local_198[local_ba6 * 2 + 1])))) goto LAB_3ab8_0575;
    func_0x0000daa6();
    puVar24 = (undefined2 *)func_0x0000013f();
    puVar14 = (undefined2 *)puVar24;
    puVar13 = &local_1ec;
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar2 = puVar13;
      puVar13 = puVar13 + 1;
      puVar1 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar2 = *puVar1;
    }
    if (((int)local_198[local_ba6 * 2 + 1] < 0) ||
       (((int)local_198[local_ba6 * 2 + 1] < 1 && (local_198[local_ba6 * 2] == 0)))) {
      uStack_12._0_2_ = local_198[local_ba6 * 2];
      uStack_12._2_2_ = (undefined2 *)local_198[local_ba6 * 2 + 1];
      uStack_18 = 0;
      uStack_1a = 0xc763;
      uStack_16 = local_24e;
      local_19c = FUN_1def_2b59();
      local_19a = local_19c >> 0xf;
      uVar19 = 0;
      uVar20 = local_19c == 0;
      if (local_19c == 0) {
LAB_3ab8_1174:
        *(undefined2 *)0xc22 = 1;
        func_0x00012276();
        FUN_1000_0599();
        goto LAB_3ab8_0918;
      }
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      func_0x00029b6d();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      func_0x00029b6d();
      FUN_28b3_117c();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      func_0x00029b6d();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      func_0x00029b6d();
      FUN_28b3_117c();
      FUN_28b3_1181();
      if ((bool)uVar19 || (bool)uVar20) {
        local_25e = local_256;
        local_25c = local_254;
        local_27a = local_272;
        local_278 = local_270;
      }
      else {
        local_25e = local_26e;
        local_25c = local_26c;
        local_27a = local_2f4;
        local_278 = local_2f2;
      }
      local_266 = local_198[local_ba6 * 2];
      local_264 = local_198[local_ba6 * 2 + 1];
      puVar24 = (undefined2 *)func_0x00000271();
      puVar14 = (undefined2 *)puVar24;
      puVar13 = local_192c + local_ba6 * 0x10;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2 = puVar14;
        puVar14 = puVar14 + 1;
        puVar1 = puVar13;
        puVar13 = puVar13 + 1;
        *puVar2 = *puVar1;
      }
      puVar14 = local_238;
      puVar13 = local_192c + local_ba6 * 0x10;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar1 = puVar14;
        puVar14 = puVar14 + 1;
        puVar24 = puVar13;
        puVar13 = puVar13 + 1;
        *puVar1 = *puVar24;
      }
      func_0x000297e6();
      func_0x00029d78();
      uStack_12._0_2_ = 0x22b2;
      uStack_16._2_2_ = 0xc8c5;
      func_0x000299d1();
      uStack_12._0_2_ = 0x22b2;
      uStack_16._2_2_ = 0xc8ce;
      func_0x000297e6();
      uStack_12._0_2_ = 0x22b2;
      uStack_16._2_2_ = 0xc8d3;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      uStack_1c = 0xc8dd;
      func_0x000299d1();
      uStack_1a = 0;
      uStack_1c = 0;
      uStack_1e = 0x22b2;
      uStack_20 = 0xc8e6;
      FUN_20a9_1260();
      if (aiStack_c70[local_ba6] == 0) {
        local_226 = local_262;
        local_224 = local_260;
      }
      else {
        local_22a = local_262;
        local_228 = local_260;
      }
      puVar13 = local_192c + local_ba6 * 0x10;
      puVar14 = local_238;
      iVar9 = 0x10;
      uVar16 = unaff_SS;
    }
    else {
      puVar14 = local_1d6;
      puVar13 = local_ba2 + local_ba6 * 0xb;
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar1 = puVar14;
        puVar14 = puVar14 + 1;
        puVar24 = puVar13;
        puVar13 = puVar13 + 1;
        *puVar1 = *puVar24;
      }
      puVar14 = &uStack_20;
      puVar13 = &local_1ec;
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar1 = puVar14;
        puVar14 = puVar14 + 1;
        puVar24 = puVar13;
        puVar13 = puVar13 + 1;
        *puVar1 = *puVar24;
      }
      puVar14 = auStack_36;
      puVar13 = local_1d6;
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar1 = puVar14;
        puVar14 = puVar14 + 1;
        puVar24 = puVar13;
        puVar13 = puVar13 + 1;
        *puVar1 = *puVar24;
      }
      uStack_38 = 0;
      uVar11 = 0x1bb4;
      uStack_3a = 0xc6be;
      iVar9 = FUN_1def_1921();
      lVar21 = CONCAT22(uStack_16._2_2_,(uint)uStack_16);
      uStack_12 = CONCAT22(uStack_12._2_2_,(uint)uStack_12);
      if (iVar9 == 0) goto LAB_3ab8_0575;
      local_266 = local_198[local_ba6 * 2];
      local_264 = local_198[local_ba6 * 2 + 1];
      puVar13 = local_ba2 + local_ba6 * 0xb;
      puVar14 = local_1d6;
      puVar15 = puVar13;
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar1 = puVar14;
        puVar14 = puVar14 + 1;
        puVar24 = puVar15;
        puVar15 = puVar15 + 1;
        *puVar1 = *puVar24;
      }
      local_1ce = local_25e;
      local_1cc = local_25c;
      local_1ca = local_27a;
      local_1c8 = local_278;
      puVar14 = local_1d6;
      iVar9 = 0xb;
      uVar16 = unaff_DS;
    }
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar1 = puVar13;
      puVar13 = puVar13 + 1;
      puVar24 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar1 = *puVar24;
    }
    puVar13 = local_ba2 + local_ba4 * 0xb;
    puVar14 = &local_1ec;
    puVar15 = puVar13;
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar1 = puVar14;
      puVar14 = puVar14 + 1;
      puVar24 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar1 = *puVar24;
    }
    local_1ec = local_25e;
    local_1ea = local_25c;
    local_1e8 = local_27a;
    local_1e6 = local_278;
    puVar14 = &local_1ec;
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar1 = puVar13;
      puVar13 = puVar13 + 1;
      puVar24 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar1 = *puVar24;
    }
LAB_3ab8_0def:
    *(undefined2 *)0xc04 = 0xffff;
    local_23a = 1;
  } while( true );
LAB_3ab8_0937:
  uVar20 = 0;
  puVar24 = (undefined2 *)func_0x0000013f();
  puVar14 = (undefined2 *)puVar24;
  puVar13 = &local_1ec;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar2 = puVar13;
    puVar13 = puVar13 + 1;
    puVar1 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar2 = *puVar1;
  }
  local_250 = 1;
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029b6d();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029b6d();
  FUN_28b3_1163();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029b6d();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029b6d();
  FUN_28b3_1163();
  func_0x0002996b();
  FUN_28b3_1181();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)uVar20 && !(bool)uVar19) goto LAB_3ab8_0918;
  local_2f0 = 1;
  while( true ) {
    lVar21 = CONCAT22(local_24e._2_2_,(uint)local_24e);
    uVar17 = 0x22b2;
    if (local_ba6 + -1 < local_2f0) break;
    uVar11 = local_198[local_2f0 * 2 + 1];
    uVar19 = uVar11 == 0;
    if ((0 < (int)uVar11) ||
       ((-1 < (int)uVar11 && (uVar19 = local_198[local_2f0 * 2] == 0, !(bool)uVar19)))) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar19) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar19) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar19) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar19) {
              *(undefined2 *)0xc22 = 1;
              func_0x00012276();
              FUN_1000_0599();
              uVar11 = 0x11f2;
              func_0x00012276();
              lVar21 = CONCAT22(local_24e._2_2_,(uint)local_24e);
              goto LAB_3ab8_056f;
            }
          }
        }
      }
    }
    local_2f0 = local_2f0 + 1;
  }
  goto LAB_3ab8_0f14;
LAB_3ab8_038d:
  local_266 = 1;
  local_264 = 0;
  do {
    if ((*(int *)0x14e < (int)local_264) ||
       ((*(int *)0x14e <= (int)local_264 && (*(uint *)0x14c < local_266)))) break;
    uVar22 = func_0x00000271();
    if (*(byte *)((int)uVar22 + 0x1b) < 0x5a) {
      uVar22 = func_0x00000271();
      if ((*(byte *)((int)uVar22 + 0x1e) & 2) != 0) {
        puVar24 = (undefined2 *)func_0x00000271();
        puVar14 = (undefined2 *)puVar24;
        puVar13 = local_238;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar2 = puVar13;
          puVar13 = puVar13 + 1;
          puVar1 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar1;
        }
        if ((bStack_21a & 0x20) == 0) {
          if (99 < local_ba6) break;
          local_ba6 = local_ba6 + 1;
          uStack_21e = 1;
          puVar13 = local_192c + local_ba6 * 0x10;
          puVar14 = local_238;
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar1 = puVar13;
            puVar13 = puVar13 + 1;
            puVar24 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar1 = *puVar24;
          }
          local_198[local_ba6 * 2] = -local_266;
          local_198[local_ba6 * 2 + 1] = -(local_264 + (local_266 != 0));
        }
      }
    }
    bVar18 = 0xfffe < local_266;
    local_266 = local_266 + 1;
    local_264 = local_264 + bVar18;
  } while( true );
  if (99 < local_ba6) {
LAB_3ab8_0465:
    FUN_3ab8_0000();
  }
  goto LAB_3ab8_00b3;
}



/* 3ab8:1fa3  FUN_3ab8_1fa3  1969 bytes, 1 callers */

undefined1 * __cdecl16far FUN_3ab8_1fa3(int param_1,undefined2 param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined1 *unaff_SS;
  undefined1 *unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined2 *puVar13;
  undefined1 *local_86;
  int local_84;
  undefined1 local_82 [4];
  undefined2 local_7e;
  undefined2 local_7c;
  undefined1 *local_7a;
  int local_78;
  undefined1 local_76 [52];
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3a;
  undefined2 uStack_38;
  undefined2 local_36 [6];
  undefined2 local_2a;
  undefined2 uStack_28;
  char local_26;
  byte local_25;
  byte local_24;
  undefined1 *puVar14;
  undefined2 local_20 [2];
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18 [3];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puVar15;
  undefined1 *puVar16;
  
  FUN_21f2_0ebc();
  puVar8 = local_20;
  puVar6 = (undefined2 *)(param_4 * 0x16 + param_1);
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    puVar13 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = *puVar13;
  }
  uVar10 = 0;
  uVar12 = 1;
  local_78 = 0;
  local_7a = (undefined1 *)0x0;
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar10 || (bool)uVar12) {
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029983();
    func_0x000297e6();
  }
  else {
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029983();
    func_0x000297e6();
  }
  func_0x00029bb5();
  func_0x00029983();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar10) {
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029983();
    func_0x000297e6();
  }
  else {
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029983();
    func_0x000297e6();
  }
  func_0x00029bb5();
  func_0x00029983();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029983();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029983();
  if (-1 < *(int *)(param_4 * 4 + param_3 + 2)) {
    func_0x000297e6();
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xcc98;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xcca0;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xcca5;
    func_0x00029d78();
    local_18[0] = 0x22b2;
    uStack_1a = 0xccaf;
    func_0x000299d1();
    local_18[0] = 0x22b2;
    uStack_1a = 0xccb7;
    func_0x000297e6();
    local_18[0] = 0x22b2;
    uStack_1a = 0xccbc;
    func_0x00029d78();
    local_20[0] = 0x22b2;
    func_0x000299d1();
    local_20[0] = 0x22b2;
    func_0x000297e6();
    local_20[0] = 0x22b2;
    puVar14 = (undefined1 *)0x0;
    func_0x00029d78();
    uStack_28 = 0x22b2;
    local_2a = 0xccdd;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    local_2a = 0xcce2;
    iVar7 = FUN_1def_043a();
    if (iVar7 != 0) {
      func_0x000297e6();
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xcd00;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xcd08;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xcd0d;
      func_0x00029d78();
      local_18[0] = 0x22b2;
      uStack_1a = 0xcd17;
      func_0x000299d1();
      local_18[0] = 1;
      uStack_1a = 0x22b2;
      local_1c = 0xcd20;
      FUN_1def_05d1();
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029bb5();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029983();
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029b55();
      puVar16 = (undefined1 *)0x22b2;
      puVar15 = (undefined1 *)0xcd8f;
      func_0x00029983();
      local_86 = (undefined1 *)0x1;
      local_84 = 0;
      uStack_c = 0x22b2;
      do {
        if ((*(int *)0x14a < local_84) ||
           ((*(int *)0x14a <= local_84 && ((undefined1 *)*(uint *)0x148 < local_86)))) {
          if (local_78 != 0 || local_7a != (undefined1 *)0x0) {
            return local_7a;
          }
          if (-1 < (int)puVar16) {
            return local_7a;
          }
          return puVar15;
        }
        uVar9 = 0;
        uStack_e = 0xce01;
        puVar13 = (undefined2 *)func_0x0000013f();
        puVar8 = (undefined2 *)puVar13;
        puVar6 = local_36;
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        puVar5 = (undefined1 *)(uint)local_24;
        puVar15 = unaff_SS;
        puVar16 = unaff_DS;
        if (local_25 < 0x5a) {
          puVar15 = (undefined1 *)0x0;
          uVar9 = 0x11f2;
          uStack_c = 0xce28;
          iVar7 = func_0x000125f1();
          puVar16 = puVar5;
          if ((iVar7 != 0) &&
             ((((undefined1 *)*(uint *)(param_4 * 4 + param_3) != local_86 ||
               (*(int *)(param_4 * 4 + param_3 + 2) != local_84)) && (local_26 == '\x01')))) {
            uVar10 = 0;
            uVar12 = ((uint)puVar14 & 0x20) == 0;
            if ((bool)uVar12) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar10) {
                func_0x000297e6();
                func_0x000297e6();
                uVar9 = 0x22b2;
                puVar15 = (undefined1 *)0xce85;
                FUN_28b3_1181();
                puVar16 = (undefined1 *)0x22b2;
                if ((bool)uVar10) goto LAB_3ab8_2254;
              }
              uVar10 = 0;
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar12) {
                func_0x000297e6();
                func_0x000297e6();
                uVar9 = 0x22b2;
                puVar15 = (undefined1 *)0xceb8;
                FUN_28b3_1181();
                puVar16 = (undefined1 *)0x22b2;
                if (!(bool)uVar10 && !(bool)uVar12) goto LAB_3ab8_2254;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar10) {
                func_0x000297e6();
                func_0x000297e6();
                uVar9 = 0x22b2;
                puVar15 = (undefined1 *)0xceeb;
                FUN_28b3_1181();
                puVar16 = (undefined1 *)0x22b2;
                if ((bool)uVar10) goto LAB_3ab8_2254;
              }
              uVar10 = 0;
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar12) {
                func_0x000297e6();
                func_0x000297e6();
                uVar9 = 0x22b2;
                puVar15 = (undefined1 *)0xcf1e;
                FUN_28b3_1181();
                puVar16 = (undefined1 *)0x22b2;
                if (!(bool)uVar10 && !(bool)uVar12) goto LAB_3ab8_2254;
              }
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029d78();
              uStack_10 = 0x22b2;
              uStack_12 = 0xcf42;
              func_0x000299d1();
              uStack_10 = 0x22b2;
              uStack_12 = 0xcf4a;
              func_0x000297e6();
              uStack_10 = 0x22b2;
              uStack_12 = 0xcf4f;
              func_0x00029d78();
              local_18[0] = 0x22b2;
              uStack_1a = 0xcf59;
              func_0x000299d1();
              local_18[0] = 1;
              uStack_1a = 0x22b2;
              local_1c = 0xcf62;
              func_0x0001e558();
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029ae7();
              FUN_28b3_1181();
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029d78();
              uStack_10 = 0x22b2;
              uStack_12 = 0xcfaf;
              func_0x000299d1();
              uStack_10 = 0x22b2;
              uStack_12 = 0xcfb7;
              func_0x000297e6();
              uStack_10 = 0x22b2;
              uStack_12 = 0xcfbc;
              func_0x00029d78();
              local_18[0] = 0x22b2;
              uStack_1a = 0xcfc6;
              func_0x000299d1();
              local_18[0] = 1;
              uStack_1a = 0x22b2;
              local_1c = 0xcfcf;
              func_0x0001e558();
              uVar10 = (undefined1 *)0xffed < local_18;
              uVar12 = &stack0x0000 == (undefined1 *)0x6;
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029ae7();
              FUN_28b3_1181();
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar12) {
                func_0x000297e6();
                func_0x000297e6();
                uVar9 = 0x22b2;
                puVar15 = (undefined1 *)0xd02d;
                FUN_28b3_1181();
                puVar16 = (undefined1 *)0x22b2;
                if (!(bool)uVar10 && !(bool)uVar12) goto LAB_3ab8_2254;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar10) {
                func_0x000297e6();
                func_0x000297e6();
                uVar9 = 0x22b2;
                puVar15 = (undefined1 *)0xd062;
                FUN_28b3_1181();
                puVar16 = (undefined1 *)0x22b2;
                if ((bool)uVar10) goto LAB_3ab8_2254;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar12) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (!(bool)uVar12) goto LAB_3ab8_221d;
                func_0x000297e6();
                func_0x00029d78();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd0b3;
                func_0x000299d1();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd0bb;
                func_0x000297e6();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd0c0;
                func_0x00029d78();
                local_18[0] = 0x22b2;
                uStack_1a = 0xd0ca;
                func_0x000299d1();
                local_18[0] = 1;
                uStack_1a = 0x22b2;
                local_1c = 0xd0d3;
                puVar6 = (undefined2 *)FUN_1def_05d1();
                local_7e = *puVar6;
                local_7c = puVar6[1];
                func_0x000297e6();
                func_0x00029d78();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd0fa;
                func_0x000299d1();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd102;
                func_0x000297e6();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd107;
                func_0x00029d78();
                local_18[0] = 0x22b2;
                uStack_1a = 0xd111;
                func_0x000299d1();
                local_18[0] = 1;
                uStack_1a = 0x22b2;
                local_1c = 0xd11a;
                puVar6 = (undefined2 *)FUN_1def_05d1();
                uVar10 = (undefined1 *)0xffed < local_18;
                uVar12 = &stack0x0000 == (undefined1 *)0x6;
                uVar3 = *puVar6;
                uVar4 = puVar6[1];
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (!(bool)uVar10 && !(bool)uVar12) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if (!(bool)uVar10) {
                    local_42 = local_7e;
                    local_40 = local_7c;
                    iVar7 = local_84 + (uint)(local_86 != (undefined1 *)0x0);
                    uVar10 = iVar7 != 0;
                    uVar12 = iVar7 == 0;
                  }
                }
                func_0x000297e6();
                func_0x000297e6();
                uVar9 = 0x22b2;
                puVar15 = (undefined1 *)0xd192;
                FUN_28b3_1181();
                puVar16 = (undefined1 *)0x22b2;
                if (!(bool)uVar10) goto LAB_3ab8_2254;
                func_0x000297e6();
                func_0x000297e6();
                uVar9 = 0x22b2;
                puVar15 = (undefined1 *)0xd1ac;
                FUN_28b3_1181();
                if ((bool)uVar10 || (bool)uVar12) {
                  puVar15 = (undefined1 *)-(int)local_86;
                  local_42 = uVar3;
                  local_40 = uVar4;
                  puVar16 = (undefined1 *)-(local_84 + (uint)(local_86 != (undefined1 *)0x0));
                  goto LAB_3ab8_2254;
                }
              }
              else {
LAB_3ab8_221d:
                puVar15 = local_76;
                puVar8 = local_20;
                puVar6 = local_36;
                for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
                  puVar1 = puVar8;
                  puVar8 = puVar8 + 1;
                  puVar13 = puVar6;
                  puVar6 = puVar6 + 1;
                  *puVar1 = *puVar13;
                }
                puVar8 = local_36;
                puVar6 = local_20;
                for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
                  puVar1 = puVar8;
                  puVar8 = puVar8 + 1;
                  puVar13 = puVar6;
                  puVar6 = puVar6 + 1;
                  *puVar1 = *puVar13;
                }
                uStack_38 = 0x22b2;
                uVar9 = 0x1bb4;
                local_3a = 0xcdc6;
                iVar7 = FUN_1def_1921();
                puVar14 = unaff_SS;
                puVar16 = local_82;
                if (iVar7 == 0) goto LAB_3ab8_2254;
                func_0x000297e6();
                func_0x000297e6();
                func_0x00029d78();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd1f6;
                func_0x000299d1();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd1fe;
                func_0x000297e6();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd203;
                func_0x00029d78();
                local_18[0] = 0x22b2;
                uStack_1a = 0xd20d;
                func_0x000299d1();
                local_18[0] = 1;
                uStack_1a = 0x22b2;
                local_1c = 0xd216;
                FUN_1def_05d1();
                uVar10 = (undefined1 *)0xffed < local_18;
                uVar12 = &stack0x0000 == (undefined1 *)0x6;
                func_0x000297e6();
                func_0x0002996b();
                puVar15 = (undefined1 *)0xd22d;
                FUN_28b3_1181();
                if (!(bool)uVar10 && !(bool)uVar12) {
                  func_0x000297e6();
                  func_0x000297e6();
                  puVar15 = (undefined1 *)0xd244;
                  FUN_28b3_1181();
                  if ((bool)uVar10) {
                    func_0x000297e6();
                    func_0x000297e6();
                    puVar15 = (undefined1 *)0xd260;
                    FUN_28b3_1181();
                    if ((bool)uVar10 || (bool)uVar12) {
                      func_0x000297e6();
                      func_0x000297e6();
                      puVar15 = (undefined1 *)0xd279;
                      FUN_28b3_1181();
                      if ((bool)uVar10 || (bool)uVar12) {
                        func_0x000297e6();
                        func_0x000297e6();
                        uVar9 = 0x22b2;
                        puVar15 = (undefined1 *)0xd290;
                        FUN_28b3_1181();
                        puVar16 = (undefined1 *)0x22b2;
                        if ((bool)uVar10) goto LAB_3ab8_2254;
                      }
                    }
                    uVar9 = 0x22b2;
                    local_7a = local_86;
                    local_78 = local_84;
                    puVar16 = (undefined1 *)0x22b2;
                    goto LAB_3ab8_2254;
                  }
                }
              }
              uVar9 = 0x22b2;
              puVar16 = (undefined1 *)0x22b2;
            }
          }
        }
LAB_3ab8_2254:
        bVar11 = (undefined1 *)0xfffe < local_86;
        local_86 = local_86 + 1;
        local_84 = local_84 + (uint)bVar11;
        uStack_c = uVar9;
      } while( true );
    }
  }
  return (undefined1 *)0x0;
}



/* 3ab8:2754  FUN_3ab8_2754  345 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_2754(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 *puVar9;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  FUN_21f2_0ebc();
  uVar7 = 0;
  uVar8 = 1;
  local_c = 0x22b2;
  local_e = 0xd2ea;
  puVar9 = (undefined2 *)func_0x0000013f();
  puVar5 = (undefined2 *)puVar9;
  puVar6 = &local_18;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029ae7();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029ae7();
  FUN_28b3_1181();
  if ((bool)uVar7 || (bool)uVar8) {
    func_0x00029834();
    func_0x00029834();
    FUN_28b3_1181();
    if (!(bool)uVar7 && !(bool)uVar8) {
      func_0x000297e6();
      func_0x000297e6();
      uVar3 = 0xd3a5;
      FUN_28b3_1181();
      goto joined_r0x0003d3a5;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    local_12 = 0xd3be;
    if ((bool)uVar7 || (bool)uVar8) goto LAB_3ab8_2840;
LAB_3ab8_27db:
    uVar3 = 0;
  }
  else {
    func_0x00029834();
    func_0x00029834();
    FUN_28b3_1181();
    if ((bool)uVar7 || (bool)uVar8) {
      func_0x000297e6();
      func_0x000297e6();
      uVar3 = 0xd375;
      FUN_28b3_1181();
joined_r0x0003d3a5:
      local_12 = uVar3;
      if ((bool)uVar7) goto LAB_3ab8_27db;
    }
    else {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      local_12 = 0xd359;
      if (!(bool)uVar7 && !(bool)uVar8) goto LAB_3ab8_27db;
    }
LAB_3ab8_2840:
    uVar3 = local_18;
    local_18 = local_10;
    local_16 = local_e;
    local_10 = uVar3;
    local_14 = local_c;
    local_c = 0x22b2;
    local_e = 0xd411;
    puVar9 = (undefined2 *)func_0x0000013f();
    puVar5 = (undefined2 *)puVar9;
    puVar6 = &local_18;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* 3ab8:28ad  FUN_3ab8_28ad  440 bytes, 1 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far
FUN_3ab8_28ad(undefined2 param_1,int *param_2,uint param_3,undefined2 *param_4,int *param_5)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  uint local_34;
  undefined1 local_32 [20];
  undefined1 local_1e [12];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 **ppuStack_e;
  undefined1 **ppuStack_c;
  undefined1 *local_a;
  undefined1 *local_8;
  undefined1 *local_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x3ab8;
  local_6 = (undefined1 *)0xd438;
  FUN_21f2_0ebc();
  local_4 = (undefined1 *)0x375a;
  local_6 = local_32;
  local_8 = (undefined1 *)0x22b2;
  local_a = (undefined1 *)0xd445;
  FUN_21f2_3454();
  local_4 = (undefined1 *)0x3761;
  local_6 = local_1e;
  local_8 = (undefined1 *)0x22b2;
  uVar1 = 0x22b2;
  local_a = (undefined1 *)0xd454;
  FUN_21f2_3454();
LAB_3ab8_28d6:
  do {
    while( true ) {
      local_6 = (undefined1 *)0xd45b;
      local_4 = (undefined1 *)uVar1;
      func_0x0001bb4e();
      local_4 = (undefined1 *)param_1;
      local_6 = (undefined1 *)0x376a;
      local_8 = (undefined1 *)0x1bb4;
      local_a = (undefined1 *)0xd467;
      func_0x00012276();
      local_4 = (undefined1 *)0x1;
      local_6 = (undefined1 *)0x34;
      local_8 = (undefined1 *)0x11f2;
      local_a = (undefined1 *)0xd476;
      FUN_1000_0599();
      local_4 = (undefined1 *)0x3774;
      local_6 = (undefined1 *)0xdef;
      local_8 = (undefined1 *)0xd481;
      func_0x00012276();
      if (*param_2 == 0) {
        local_8 = (undefined1 *)0x3787;
      }
      else {
        local_8 = (undefined1 *)0x377c;
      }
      local_4 = local_1e;
      local_6 = local_32;
      local_a = (undefined1 *)0x11f2;
      ppuStack_c = (undefined1 **)0xd4a8;
      func_0x00012276();
      local_4 = (undefined1 *)0x3792;
      local_6 = (undefined1 *)0x11f2;
      local_8 = (undefined1 *)0xd4b4;
      func_0x00012276();
      *(undefined2 *)0xa48 = 0xffff;
      local_4 = (undefined1 *)0x2711;
      local_6 = (undefined1 *)0x1e;
      local_8 = local_3c;
      local_a = local_38;
      ppuStack_c = &local_a;
      ppuStack_e = &local_6;
      uStack_10 = 0x11f2;
      uVar1 = 0xad;
      uStack_12 = 0xd4f4;
      local_34 = func_0x000021a4();
      *(undefined2 *)0xa48 = 0;
      if (*(int *)0x158 != 0) {
        return 0;
      }
      if (local_34 == 0xffff) {
        return 0xffff;
      }
      if (local_34 == 0x65) {
        return 1;
      }
      if (local_34 == 99) {
        return 99;
      }
      if (local_34 != 0x6200) break;
LAB_3ab8_29b6:
      if (*param_2 == 0) {
        *param_2 = 1;
      }
      else {
        *param_2 = 0;
      }
    }
    uVar2 = local_34 < 0x34;
    uVar3 = local_34 == 0x34;
    if (0x34 < (int)local_34) {
      uVar2 = local_34 < 0x4e;
      uVar3 = local_34 == 0x4e;
      if ((int)local_34 < 0x4e) goto LAB_3ab8_29b6;
    }
    local_4 = (undefined1 *)0xad;
    local_6 = (undefined1 *)0xd555;
    func_0x00029834();
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xd55d;
    func_0x000297e6();
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xd562;
    func_0x00029d78();
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xd567;
    FUN_28b3_1181();
    if (!(bool)uVar2) {
      local_4 = (undefined1 *)0x22b2;
      local_6 = (undefined1 *)0xd572;
      func_0x000297e6();
      local_4 = (undefined1 *)0x22b2;
      local_6 = (undefined1 *)0xd57a;
      func_0x000297e6();
      local_4 = (undefined1 *)0x22b2;
      local_6 = (undefined1 *)0xd57f;
      FUN_28b3_1181();
      if ((bool)uVar2 || (bool)uVar3) {
        uVar2 = param_3 < 2;
        uVar3 = param_3 == 2;
        if (!(bool)uVar3) {
LAB_3ab8_2a42:
          *param_4 = local_6;
          param_4[1] = local_4;
          *param_5 = (int)local_a;
          param_5[1] = (int)local_8;
          return 1;
        }
        local_4 = (undefined1 *)0x22b2;
        local_6 = (undefined1 *)0xd593;
        func_0x00029834();
        local_4 = (undefined1 *)0x22b2;
        local_6 = (undefined1 *)0xd59b;
        func_0x000297e6();
        local_4 = (undefined1 *)0x22b2;
        local_6 = (undefined1 *)0xd5a0;
        func_0x00029d78();
        local_4 = (undefined1 *)0x22b2;
        local_6 = (undefined1 *)0xd5a5;
        FUN_28b3_1181();
        if (!(bool)uVar2) {
          local_4 = (undefined1 *)0x22b2;
          local_6 = (undefined1 *)0xd5b0;
          func_0x000297e6();
          local_4 = (undefined1 *)0x22b2;
          local_6 = (undefined1 *)0xd5b8;
          func_0x000297e6();
          local_4 = (undefined1 *)0x22b2;
          local_6 = (undefined1 *)0xd5bd;
          FUN_28b3_1181();
          if ((bool)uVar2 || (bool)uVar3) goto LAB_3ab8_2a42;
        }
        uVar1 = 0x22b2;
        goto LAB_3ab8_28d6;
      }
    }
    uVar1 = 0x22b2;
  } while( true );
}



/* 3ab8:2a65  FUN_3ab8_2a65  180 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2a65(int param_1,int param_2)

{
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 *puStack_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x3ab8;
  puStack_6 = (undefined2 *)0xd5f0;
  FUN_21f2_0ebc();
  if (param_2 == 1) {
    puStack_4 = (undefined2 *)0x3795;
    puStack_6 = &local_a;
    uStack_8 = 0x22b2;
    local_a = 0xd603;
    FUN_21f2_3454();
  }
  if (param_2 == 2) {
    puStack_4 = (undefined2 *)0x3798;
    puStack_6 = &local_a;
    uStack_8 = 0x22b2;
    local_a = 0xd618;
    FUN_21f2_3454();
  }
  if (param_2 == 3) {
    puStack_4 = (undefined2 *)0x379b;
    puStack_6 = &local_a;
    uStack_8 = 0x22b2;
    local_a = 0xd62d;
    FUN_21f2_3454();
  }
  if (param_2 == 4) {
    puStack_4 = (undefined2 *)0x379e;
    puStack_6 = &local_a;
    uStack_8 = 0x22b2;
    local_a = 0xd642;
    FUN_21f2_3454();
  }
  if (param_2 == 5) {
    puStack_4 = (undefined2 *)0x37a1;
    puStack_6 = &local_a;
    uStack_8 = 0x22b2;
    local_a = 0xd657;
    FUN_21f2_3454();
  }
  if (param_2 == param_1) {
    puStack_4 = &local_a;
    puStack_6 = (undefined2 *)0x37a4;
    uStack_8 = 0xbf48;
    local_a = 0x22b2;
    FUN_21f2_3454();
  }
  else {
    if (param_1 == 0) {
      puStack_6 = (undefined2 *)0x37ab;
    }
    else {
      puStack_6 = (undefined2 *)0x37b2;
    }
    puStack_4 = &local_a;
    uStack_8 = 0xbf48;
    local_a = 0x22b2;
    FUN_21f2_3454();
  }
  return;
}



/* 3ab8:2b19  FUN_3ab8_2b19  8047 bytes, 1 callers */

undefined2
FUN_3ab8_2b19(undefined2 param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
             int param_5,undefined2 *param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  bool bVar16;
  undefined2 local_1b4 [10];
  undefined2 local_1a0 [5];
  undefined2 *local_196;
  undefined2 auStack_192 [2];
  int local_18e;
  undefined2 local_18c;
  undefined2 local_18a;
  undefined2 local_188;
  undefined2 local_186;
  undefined2 local_180;
  undefined2 local_17e;
  int local_17c;
  undefined2 local_17a;
  undefined2 local_178;
  undefined2 local_176;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined2 *local_168;
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined2 local_160;
  undefined2 local_15e;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined2 local_14c;
  undefined2 local_14a;
  int local_144;
  int local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_130 [5];
  int local_126;
  uint local_124;
  undefined2 local_11e;
  undefined2 local_11c;
  int local_11a;
  int local_118;
  undefined2 local_116;
  undefined2 local_114;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined2 local_10a [10];
  int local_f6;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined2 local_ec;
  undefined2 local_ea;
  undefined2 local_e8;
  undefined2 local_e6;
  undefined2 local_e4;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 *local_dc;
  int local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 local_b4;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  int local_ac;
  int local_aa;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 *local_a0;
  int local_9e;
  undefined2 *local_9c;
  undefined2 local_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 local_92 [5];
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  int local_72;
  uint local_70;
  undefined2 *local_6e;
  int local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  int local_54;
  int local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 auStack_36 [2];
  undefined2 uStack_32;
  int iStack_30;
  undefined2 *local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 uStack_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 *local_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 *puStack_10;
  undefined2 *local_e;
  undefined2 **local_c;
  undefined2 *local_a;
  undefined2 **ppuVar17;
  
  FUN_21f2_0ebc();
  local_180 = *(undefined2 *)0x9870;
  local_17e = *(undefined2 *)0x9872;
  local_a = local_130;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xd6cb;
  local_164 = local_180;
  local_162 = local_17e;
  FUN_21f2_3454();
  local_a = local_10a;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xd6db;
  FUN_21f2_3454();
  local_a = local_92;
  local_c = (undefined2 **)0x22b2;
  uVar11 = 0x22b2;
  local_e = (undefined2 *)0xd6eb;
  FUN_21f2_3454();
  local_142 = param_5;
LAB_3ab8_2b74:
  do {
    local_160 = *(undefined2 *)0x148;
    local_15e = *(undefined2 *)0x14a;
    local_50 = *(undefined2 *)0x14c;
    local_4e = *(undefined2 *)0x14e;
    local_17a = *(undefined2 *)0x152;
LAB_3ab8_2b97:
    *(undefined2 *)0xbc0 = 1;
    local_a = (undefined2 *)0x11;
    local_e = (undefined2 *)0xd72a;
    local_c = (undefined2 **)uVar11;
    func_0x0000c35c();
    local_a = param_6;
    local_c = (undefined2 **)0x885;
    local_e = (undefined2 *)0xd738;
    FUN_21f2_3454();
    local_a = param_6;
    local_c = (undefined2 **)0x22b2;
    local_e = (undefined2 *)0xd746;
    FUN_21f2_2d26();
    local_a = param_6;
    local_c = (undefined2 **)0x22b2;
    local_e = (undefined2 *)0xd754;
    FUN_21f2_2d26();
    local_a = param_6;
    local_c = (undefined2 **)0x22b2;
    local_e = (undefined2 *)0xd763;
    FUN_21f2_2d26();
    local_a = param_6;
    local_c = (undefined2 **)0x22b2;
    uVar11 = 0x22b2;
    local_e = (undefined2 *)0xd771;
    FUN_21f2_2d26();
    if (*(int *)0x1116 == -1) {
      local_a = (undefined2 *)0xbf48;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd78a;
      FUN_21f2_3454();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd798;
      FUN_21f2_2d26();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd7a6;
      FUN_21f2_2d26();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd7b4;
      FUN_21f2_2d26();
      local_a = (undefined2 *)0xd7bf;
      func_0x000297e6();
      local_a = (undefined2 *)0xd7c4;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xd7ce;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xd7d7;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xd7dc;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xd7e6;
      func_0x000299d1();
      uStack_18 = 0x3802;
      local_1a = (undefined2 *)0xbf48;
      local_1c = 0x22b2;
      local_1e = 0xd7f3;
      FUN_21f2_3454();
      local_a = (undefined2 *)0x7;
      local_c = (undefined2 **)0x2;
      local_e = (undefined2 *)0x41;
      puStack_10 = (undefined2 *)0xbf48;
      uStack_12 = 0x22b2;
      uVar11 = 0xdef;
      uStack_14 = 0xd80f;
      FUN_1000_02b5();
    }
    if (*(int *)0x1116 == 0) {
      if ((*(int *)0x38d8 < 1) || (5 < *(int *)0x38d8)) {
        *(undefined2 *)0x38d8 = 1;
      }
      local_a = param_6;
      local_e = (undefined2 *)0xd83d;
      local_c = (undefined2 **)uVar11;
      FUN_21f2_2d26();
      local_a = (undefined2 *)0x0;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd84a;
      FUN_3ab8_2a65();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd858;
      FUN_21f2_2d26();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd866;
      FUN_21f2_2d26();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd875;
      FUN_21f2_2d26();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd883;
      FUN_21f2_2d26();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd891;
      FUN_21f2_2d26();
      local_a = (undefined2 *)0xd89c;
      func_0x000297e6();
      local_a = (undefined2 *)0xd8a1;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xd8ab;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x3814;
      uStack_12 = 0xbf48;
      uStack_14 = 0x22b2;
      uStack_16 = 0xd8b8;
      FUN_21f2_3454();
      local_a = (undefined2 *)0x7;
      local_c = (undefined2 **)0x2;
      local_e = (undefined2 *)0x41;
      puStack_10 = (undefined2 *)0xbf48;
      uStack_12 = 0x22b2;
      uVar11 = 0xdef;
      uStack_14 = 0xd8d4;
      FUN_1000_02b5();
    }
    if (0 < *(int *)0x1116) {
      local_a = (undefined2 *)0x3822;
      local_c = (undefined2 **)0xbf48;
      puStack_10 = (undefined2 *)0xd8ef;
      local_e = (undefined2 *)uVar11;
      FUN_21f2_3454();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd8fe;
      FUN_21f2_2d26();
    }
    uVar15 = *(int *)0x1116 == 2;
    if (1 < *(int *)0x1116) {
      local_a = (undefined2 *)0xd910;
      func_0x000297e6();
      local_a = (undefined2 *)0xd915;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xd91f;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x382e;
      uStack_12 = 0xbf48;
      uStack_14 = 0x22b2;
      uStack_16 = 0xd92c;
      FUN_21f2_3454();
      uVar15 = &stack0x0000 == (undefined1 *)0x6;
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xd93b;
      FUN_21f2_2d26();
    }
    local_a = (undefined2 *)0xd946;
    func_0x000297e6();
    local_a = (undefined2 *)0xd94f;
    func_0x000297e6();
    local_a = (undefined2 *)0xd954;
    FUN_28b3_1181();
    if ((bool)uVar15) {
      local_a = (undefined2 *)0xd95f;
      func_0x000297e6();
      local_a = (undefined2 *)0xd968;
      func_0x000297e6();
      local_a = (undefined2 *)0xd96d;
      FUN_28b3_1181();
      if (!(bool)uVar15) goto LAB_3ab8_2def;
    }
    else {
LAB_3ab8_2def:
      local_a = (undefined2 *)0x7;
      local_c = (undefined2 **)0x2;
      local_e = (undefined2 *)0x18;
      puStack_10 = (undefined2 *)0x383d;
      uStack_12 = 0x22b2;
      uStack_14 = 0xd988;
      FUN_1000_02b5();
    }
    local_a = (undefined2 *)0xd994;
    func_0x000297e6();
    local_a = (undefined2 *)0xd999;
    func_0x00029d78();
    puStack_10 = (undefined2 *)0x22b2;
    uStack_12 = 0xd9a3;
    func_0x000299d1();
    puStack_10 = (undefined2 *)0x3844;
    uStack_12 = 0xbf48;
    uStack_14 = 0x22b2;
    uStack_16 = 0xd9b0;
    FUN_21f2_3454();
    local_a = (undefined2 *)0x7;
    local_c = (undefined2 **)0x2;
    local_e = (undefined2 *)0x20;
    puStack_10 = (undefined2 *)0xbf48;
    uStack_12 = 0x22b2;
    uVar11 = 0xdef;
    uStack_14 = 0xd9cc;
    FUN_1000_02b5();
    if (*(int *)0x1116 < 0) {
      puStack_10 = (undefined2 *)0x3854;
    }
    else {
      local_a = (undefined2 *)0xd9df;
      func_0x000297e6();
      local_a = (undefined2 *)0xd9e4;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xd9ee;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x384c;
      uStack_12 = 0xbf48;
      uStack_14 = 0x22b2;
      uVar11 = 0x22b2;
      uStack_16 = 0xd9fb;
      FUN_21f2_3454();
      puStack_10 = (undefined2 *)0xbf48;
    }
    local_a = (undefined2 *)0x7;
    local_c = (undefined2 **)0x2;
    local_e = (undefined2 *)0x2a;
    uStack_14 = 0xda2c;
    uStack_12 = uVar11;
    FUN_1000_02b5();
    local_a = (undefined2 *)0x6;
    local_c = (undefined2 **)0xdef;
    local_e = (undefined2 *)0xda3b;
    FUN_1def_07a4();
    *(undefined2 *)0xc22 = 1;
    local_a = &local_18c;
    local_c = (undefined2 **)&local_178;
    local_e = param_6;
    puStack_10 = (undefined2 *)0x270f;
    uStack_12 = 0x1bb4;
    uVar11 = 0x1bb4;
    uStack_14 = 0xda5e;
    local_144 = FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return 0;
    }
    if (local_144 == -1) {
      return 0xffff;
    }
    if (local_144 == 99) {
      local_dc = (undefined2 *)0x0;
      local_a = param_4;
      local_c = (undefined2 **)param_3;
      local_e = param_2;
      puStack_10 = (undefined2 *)0x1;
      uStack_12 = 0x1bb4;
      uStack_14 = 0xda9a;
      func_0x00030b64();
    }
    if ((0 < local_144) && (local_144 < 7)) {
      local_dc = (undefined2 *)0x0;
    }
    if ((local_144 != 1) && (local_dc != (undefined2 *)0x1)) {
      do {
        local_18e = 0;
        do {
          do {
            if (local_144 != 2) goto LAB_3ab8_3092;
            local_a = param_6;
            local_e = (undefined2 *)0xdb77;
            local_c = (undefined2 **)uVar11;
            FUN_21f2_3454();
            local_a = param_6;
            local_c = (undefined2 **)0x22b2;
            local_e = (undefined2 *)0xdb85;
            FUN_21f2_2d26();
            local_a = param_6;
            local_c = (undefined2 **)0x22b2;
            local_e = (undefined2 *)0xdb93;
            FUN_21f2_2d26();
            local_a = param_6;
            local_c = (undefined2 **)0x22b2;
            local_e = (undefined2 *)0xdba1;
            FUN_21f2_2d26();
            local_a = param_6;
            local_c = (undefined2 **)0x22b2;
            local_e = (undefined2 *)0xdbaf;
            FUN_21f2_2d26();
            local_a = param_6;
            local_c = (undefined2 **)0x22b2;
            local_e = (undefined2 *)0xdbbd;
            FUN_21f2_2d26();
            local_a = (undefined2 *)0x1;
            local_c = (undefined2 **)0x22b2;
            local_e = (undefined2 *)0xdbcb;
            FUN_1def_07a4();
            *(undefined2 *)0xc20 = 1;
            local_a = &local_18c;
            local_c = (undefined2 **)&local_178;
            local_e = param_6;
            puStack_10 = (undefined2 *)0x270f;
            uStack_12 = 0x1bb4;
            uVar11 = 0x1bb4;
            uStack_14 = 0xdbee;
            local_18e = FUN_1def_0904();
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) {
              return 0;
            }
            if ((local_18e == -1) || (local_18e == 99)) goto LAB_3ab8_3092;
            if (local_18e == 1) {
              uVar12 = *(undefined2 *)0x9870;
              uVar9 = *(undefined2 *)0x9872;
              *(undefined2 *)0x38dc = uVar12;
              *(undefined2 *)0x38de = uVar9;
              goto LAB_3ab8_2f74;
            }
          } while (local_dc == (undefined2 *)0x0);
          local_a = &local_178;
          local_c = (undefined2 **)local_dc;
          local_e = (undefined2 *)0x1bb4;
          uVar11 = 0x11f2;
          puStack_10 = (undefined2 *)0xdb18;
          iVar6 = func_0x00015409();
        } while (iVar6 == 0);
        *(undefined2 *)0x38dc = local_178;
        *(undefined2 *)0x38de = local_176;
        uVar12 = local_18c;
        uVar9 = local_18a;
LAB_3ab8_2f74:
        *(undefined2 *)0x38e0 = uVar12;
        *(undefined2 *)0x38e2 = uVar9;
LAB_3ab8_3092:
        if (local_144 == 3) {
          local_a = (undefined2 *)0x0;
          pcVar4 = (code *)swi(0x3f);
          local_18e = (*pcVar4)();
          if (local_18e != 99) {
            local_a = param_4;
            local_c = (undefined2 **)param_3;
            local_e = param_2;
            puStack_10 = (undefined2 *)0x1;
            uStack_14 = 0xdc46;
            uStack_12 = uVar11;
            func_0x00030b64();
          }
        }
        if (local_144 == 4) {
          local_cc = *(undefined2 *)0x9870;
          local_ca = *(undefined2 *)0x9872;
          local_a = param_6;
          local_e = (undefined2 *)0xdc6b;
          local_c = (undefined2 **)uVar11;
          FUN_21f2_3454();
          local_a = param_6;
          local_c = (undefined2 **)0x22b2;
          uVar11 = 0x22b2;
          local_e = (undefined2 *)0xdc7a;
          FUN_21f2_2d26();
          local_a = (undefined2 *)0x111c;
          local_c = (undefined2 **)0x1;
          local_e = (undefined2 *)0x38da;
          puStack_10 = param_6;
          uStack_12 = 0x22b2;
          uStack_14 = 0xdc94;
          local_18e = FUN_3ab8_28ad();
        }
        if ((local_144 == 5) && (*(int *)0x1116 = *(int *)0x1116 + 1, 3 < *(int *)0x1116)) {
          *(undefined2 *)0x1116 = 0xffff;
        }
        if ((*(int *)0x1116 == -1) && (local_144 == 6)) {
          local_a = (undefined2 *)0x38f0;
          local_c = (undefined2 **)0x2;
          local_e = (undefined2 *)0x38da;
          puStack_10 = (undefined2 *)0x386a;
          uStack_14 = 0xdcd9;
          uStack_12 = uVar11;
          local_18e = FUN_3ab8_28ad();
        }
        if ((0 < *(int *)0x1116) && (local_144 == 6)) {
          local_cc = *(undefined2 *)0x9870;
          local_ca = *(undefined2 *)0x9872;
          local_a = (undefined2 *)0x1120;
          local_c = (undefined2 **)0x1;
          local_e = (undefined2 *)0x38da;
          puStack_10 = (undefined2 *)0x3879;
          uStack_14 = 0xdd16;
          uStack_12 = uVar11;
          local_18e = FUN_3ab8_28ad();
        }
        if (*(int *)0x158 != 0) {
          return 0;
        }
        if (local_18e != 99) goto LAB_3ab8_31aa;
        local_a = param_4;
        local_c = (undefined2 **)param_3;
        local_e = param_2;
        puStack_10 = (undefined2 *)0x1;
        uStack_14 = 0xdb58;
        uStack_12 = uVar11;
        func_0x00030b64();
      } while( true );
    }
    if (*(int *)0x38da == 0) {
      local_a = (undefined2 *)0xdff0;
      func_0x000297e6();
    }
    else {
      local_a = (undefined2 *)0xdad5;
      func_0x000297e6();
      local_a = (undefined2 *)0xdade;
      func_0x00029b6d();
    }
    local_a = (undefined2 *)0xdff5;
    FUN_28b3_1c08();
    local_a = (undefined2 *)0xdffa;
    FUN_28b3_1177();
    uVar11 = 0x22b2;
    local_a = (undefined2 *)0xe003;
    func_0x00029983();
    if ((*(int *)0x1116 != 0) || (*(int *)0x38d8 != 5)) goto LAB_3ab8_35fa;
    while( true ) {
      local_a = param_6;
      local_e = (undefined2 *)0xe024;
      local_c = (undefined2 **)uVar11;
      FUN_21f2_3454();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xe032;
      FUN_21f2_2d26();
      *(undefined2 *)0xc18 = 0;
      uVar11 = 0x885;
      local_a = (undefined2 *)0xe03f;
      func_0x0000c3ca();
      local_a = (undefined2 *)*(undefined2 *)0x9898;
      local_c = (undefined2 **)*(undefined2 *)0x9896;
      local_e = (undefined2 *)*(undefined2 *)0x9894;
      puStack_10 = (undefined2 *)*(int *)0x989a;
      uStack_12 = *(undefined2 *)0x9898;
      uStack_14 = *(undefined2 *)0x9896;
      uStack_16 = *(undefined2 *)0x9894;
      uStack_18 = 0;
      local_1a = param_6;
      local_1c = 0xffff;
      local_1e = 1;
      local_20 = 0;
      pcVar4 = (code *)swi(0x3f);
      iVar6 = (*pcVar4)();
      if (iVar6 == -1) break;
      if (*(int *)0x158 != 0) {
        return 0;
      }
      while( true ) {
        local_a = param_6;
        local_e = (undefined2 *)0xe090;
        local_c = (undefined2 **)uVar11;
        FUN_21f2_3454();
        local_a = param_6;
        local_c = (undefined2 **)0x22b2;
        local_e = (undefined2 *)0xe09e;
        FUN_21f2_2d26();
        local_a = param_6;
        local_c = (undefined2 **)0x22b2;
        local_e = (undefined2 *)0xe0ac;
        FUN_21f2_2d26();
        local_a = param_6;
        local_c = (undefined2 **)0x22b2;
        local_e = (undefined2 *)0xe0ba;
        FUN_21f2_2d26();
        local_a = &local_180;
        local_c = (undefined2 **)&local_164;
        local_e = param_6;
        *(undefined2 *)0xc20 = 1;
        puStack_10 = (undefined2 *)0x1;
        uStack_12 = 0x22b2;
        uVar11 = 0x1bb4;
        uStack_14 = 0xe0da;
        local_126 = FUN_1def_0904();
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) {
          return 0;
        }
        if (local_126 == -1) break;
        if (local_dc != (undefined2 *)0x0) {
          local_a = &local_164;
          local_c = (undefined2 **)local_dc;
          local_e = (undefined2 *)0x1bb4;
          uVar11 = 0x11f2;
          puStack_10 = (undefined2 *)0xe11c;
          iVar6 = func_0x00015409();
          if (iVar6 != 0) {
            local_a = param_6;
            local_c = (undefined2 **)0x11f2;
            local_e = (undefined2 *)0xe132;
            FUN_21f2_3454();
            local_a = auStack_192;
            local_c = &local_196;
            local_e = param_6;
            puStack_10 = (undefined2 *)0x1;
            uStack_12 = 0x22b2;
            uStack_14 = 0xe14f;
            local_126 = FUN_1def_0904();
            local_a = (undefined2 *)0x1bb4;
            uVar11 = 0x7a6;
            local_c = (undefined2 **)0xe15e;
            func_0x00008095();
            if (*(int *)0x158 != 0) {
              return 0;
            }
            if ((local_126 == 1) || (local_dc == (undefined2 *)0x1)) goto LAB_3ab8_35fa;
            goto LAB_3ab8_2b74;
          }
        }
      }
      local_a = (undefined2 *)0x1bb4;
      uVar11 = 0x7a6;
      local_c = (undefined2 **)0xe0fe;
      func_0x00008095();
    }
  } while( true );
LAB_3ab8_31aa:
  if ((*(int *)0x1116 != 0) || (local_144 != 6)) goto LAB_3ab8_2b97;
  local_a = param_6;
  local_e = (undefined2 *)0xdd47;
  local_c = (undefined2 **)uVar11;
  FUN_21f2_3454();
  local_11a = 1;
  do {
    local_a = (undefined2 *)*(undefined2 *)0x38d8;
    local_c = (undefined2 **)0x22b2;
    local_e = (undefined2 *)0xdd5b;
    FUN_3ab8_2a65();
    local_a = param_6;
    local_c = (undefined2 **)0x22b2;
    local_e = (undefined2 *)0xdd69;
    FUN_21f2_2d26();
    local_a = param_6;
    local_c = (undefined2 **)0x22b2;
    local_e = (undefined2 *)0xdd77;
    FUN_21f2_2d26();
    local_11a = local_11a + 1;
  } while (local_11a < 6);
  local_a = param_6;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xdd90;
  FUN_21f2_2d26();
  local_a = param_6;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xdd9f;
  FUN_21f2_2d26();
  local_a = param_6;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xddad;
  FUN_21f2_2d26();
  local_a = (undefined2 *)0xddb8;
  func_0x000297e6();
  local_a = (undefined2 *)0xddbd;
  func_0x00029d78();
  puStack_10 = (undefined2 *)0x22b2;
  uStack_12 = 0xddc7;
  func_0x000299d1();
  puStack_10 = (undefined2 *)0x3897;
  uStack_12 = 0xbf48;
  uStack_14 = 0x22b2;
  uStack_16 = 0xddd4;
  FUN_21f2_3454();
  local_a = (undefined2 *)0x7;
  local_c = (undefined2 **)0x2;
  local_e = (undefined2 *)0x37;
  puStack_10 = (undefined2 *)0xbf48;
  uStack_12 = 0x22b2;
  uStack_14 = 0xddf0;
  FUN_1000_02b5();
  if (*(int *)0x38d8 < 5) {
    local_a = param_6;
    local_c = (undefined2 **)0xdef;
    local_e = (undefined2 *)0xde07;
    FUN_21f2_2d26();
    local_a = param_6;
    local_c = (undefined2 **)0x22b2;
    local_e = (undefined2 *)0xde15;
    FUN_21f2_2d26();
    local_a = (undefined2 *)0xde20;
    func_0x000297e6();
    local_a = (undefined2 *)0xde25;
    func_0x00029d78();
    puStack_10 = (undefined2 *)0x22b2;
    uStack_12 = 0xde2f;
    func_0x000299d1();
    puStack_10 = (undefined2 *)0x22b2;
    uStack_12 = 0xde38;
    func_0x000297e6();
    puStack_10 = (undefined2 *)0x22b2;
    uStack_12 = 0xde3d;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    local_1a = (undefined2 *)0xde47;
    func_0x000299d1();
    uStack_18 = 0x38a1;
    local_1a = (undefined2 *)0xbf48;
    local_1c = 0x22b2;
    local_1e = 0xde54;
    FUN_21f2_3454();
    local_a = (undefined2 *)0x7;
    local_c = (undefined2 **)0x2;
    local_e = (undefined2 *)0x41;
    puStack_10 = (undefined2 *)0xbf48;
    uStack_12 = 0x22b2;
    uStack_14 = 0xde70;
    FUN_1000_02b5();
  }
  local_a = (undefined2 *)0x8;
  local_c = (undefined2 **)0xdef;
  local_e = (undefined2 *)0xde7f;
  FUN_1def_07a4();
  *(undefined2 *)0xc22 = 1;
  local_a = &local_18c;
  local_c = (undefined2 **)&local_178;
  local_e = param_6;
  puStack_10 = (undefined2 *)0x270f;
  uStack_12 = 0x1bb4;
  uVar11 = 0x1bb4;
  uStack_14 = 0xdea2;
  local_54 = FUN_1def_0904();
  if (*(int *)0x158 != 0) {
    return 0;
  }
  if (local_54 == -1) goto LAB_3ab8_2b74;
  if (local_54 == 99) {
    local_a = param_4;
    local_c = (undefined2 **)param_3;
    local_e = param_2;
    puStack_10 = (undefined2 *)0x1;
    uStack_12 = 0x1bb4;
    uStack_14 = 0xded5;
    func_0x00030b64();
  }
  if ((0 < local_54) && (local_54 < 9)) {
    local_dc = (undefined2 *)0x0;
  }
  if ((local_54 == 1) || (local_dc != (undefined2 *)0x0)) goto LAB_3ab8_2b97;
  if ((1 < local_54) && (local_54 < 7)) {
    *(int *)0x38d8 = local_54 + -1;
  }
  while( true ) {
    local_18e = 0;
    if (local_54 == 7) {
      local_cc = *(undefined2 *)0x9870;
      local_ca = *(undefined2 *)0x9872;
      local_a = param_6;
      local_e = (undefined2 *)0xdf38;
      local_c = (undefined2 **)uVar11;
      FUN_21f2_3454();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xdf46;
      FUN_21f2_2d26();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      uVar11 = 0x22b2;
      local_e = (undefined2 *)0xdf55;
      FUN_21f2_2d26();
      local_a = (undefined2 *)0x38ec;
      local_c = (undefined2 **)0x1;
      local_e = (undefined2 *)0x38da;
      puStack_10 = param_6;
      uStack_12 = 0x22b2;
      uStack_14 = 0xdf6f;
      local_18e = FUN_3ab8_28ad();
    }
    if (local_54 == 8) {
      local_a = param_6;
      local_e = (undefined2 *)0xdf88;
      local_c = (undefined2 **)uVar11;
      FUN_21f2_3454();
      local_a = param_6;
      local_c = (undefined2 **)0x22b2;
      uVar11 = 0x22b2;
      local_e = (undefined2 *)0xdf97;
      FUN_21f2_2d26();
      local_a = (undefined2 *)0x38e4;
      local_c = (undefined2 **)0x2;
      local_e = (undefined2 *)0x38da;
      puStack_10 = param_6;
      uStack_12 = 0x22b2;
      uStack_14 = 0xdfb0;
      local_18e = FUN_3ab8_28ad();
    }
    if (*(int *)0x158 != 0) {
      return 0;
    }
    if (local_18e != 99) break;
    local_a = param_4;
    local_c = (undefined2 **)param_3;
    local_e = param_2;
    puStack_10 = (undefined2 *)0x1;
    uStack_14 = 0xdfe1;
    uStack_12 = uVar11;
    func_0x00030b64();
  }
  goto LAB_3ab8_31aa;
LAB_3ab8_35fa:
  local_a = (undefined2 *)0xe17f;
  func_0x0000c340();
  local_a = (undefined2 *)0xe184;
  func_0x00010526();
  local_a = (undefined2 *)0x16;
  local_c = (undefined2 **)0xdef;
  local_e = (undefined2 *)0xe191;
  FUN_1000_0599();
  local_a = (undefined2 *)0xdef;
  local_c = (undefined2 **)0xe19c;
  func_0x00012276();
  local_a = (undefined2 *)0x11f2;
  local_c = (undefined2 **)0xe1a6;
  func_0x00012276();
  local_9a = *(undefined2 *)0x989c;
  uStack_98 = *(undefined2 *)0x989e;
  uStack_96 = *(undefined2 *)0x98a0;
  uStack_94 = *(undefined2 *)0x98a2;
  *(undefined2 *)0xbc0 = 1;
  local_72 = 0;
  if (*(int *)0x1116 < 0) {
    local_118 = -3;
  }
  else {
    local_118 = *(int *)0x1116;
  }
LAB_3ab8_3655:
  if (*(int *)0xcb6 == 0) {
    local_a = (undefined2 *)0xe1f9;
    func_0x000297e6();
  }
  else {
    local_a = (undefined2 *)0xe1e5;
    func_0x000297e6();
    local_a = (undefined2 *)0xe1ee;
    func_0x00029bb5();
  }
  local_a = (undefined2 *)0xe1fe;
  func_0x00029d78();
  local_a = (undefined2 *)0xe207;
  func_0x000299d1();
  uVar11 = *(undefined2 *)0x38de;
  *(undefined2 *)0xb30c = *(undefined2 *)0x38dc;
  *(undefined2 *)0xb30e = uVar11;
  uVar11 = *(undefined2 *)0x38e2;
  *(undefined2 *)0xb37e = *(undefined2 *)0x38e0;
  *(undefined2 *)0xb380 = uVar11;
  if ((local_118 == -2) || (uVar15 = local_118 != -1, local_118 == -1)) {
    local_a = (undefined2 *)0xe23d;
    func_0x00029834();
    local_a = (undefined2 *)0xe246;
    func_0x00029c2c();
    local_a = (undefined2 *)0xe24f;
    func_0x000299b9();
    puStack_10 = (undefined2 *)0x22b2;
    uStack_12 = 0xe259;
    func_0x000299d1();
    puStack_10 = (undefined2 *)0x22b2;
    uStack_12 = 0xe25e;
    func_0x0002a11e();
    local_a = (undefined2 *)0xe268;
    func_0x00029834();
    local_a = (undefined2 *)0xe271;
    func_0x00029983();
    local_a = (undefined2 *)0xe27a;
    func_0x00029834();
    puStack_10 = (undefined2 *)0x22b2;
    uStack_12 = 0xe284;
    func_0x000299d1();
    puStack_10 = (undefined2 *)0x22b2;
    uStack_12 = 0xe289;
    func_0x0002a10c();
    local_a = (undefined2 *)0xe293;
    func_0x00029834();
    local_a = (undefined2 *)0xe29c;
    func_0x00029983();
    local_a = (undefined2 *)0xe2a5;
    func_0x000297e6();
    local_a = (undefined2 *)0xe2ae;
    func_0x00029b6d();
    local_a = (undefined2 *)0xe2b3;
    func_0x00029d78();
    local_a = (undefined2 *)0xe2bc;
    func_0x00029c2c();
    local_a = (undefined2 *)0xe2c5;
    func_0x00029983();
    local_a = (undefined2 *)0xe2ce;
    func_0x000297e6();
    local_a = (undefined2 *)0xe2d7;
    func_0x00029b6d();
    local_a = (undefined2 *)0xe2dc;
    func_0x00029d78();
    local_a = (undefined2 *)0xe2e5;
    func_0x00029c2c();
    local_a = (undefined2 *)0xe2ee;
    func_0x0002996b();
    local_a = (undefined2 *)0xe2f6;
    FUN_28b3_0ee9();
    if (local_118 == -2) {
      local_a = (undefined2 *)0xe309;
      func_0x000297e6();
      local_a = (undefined2 *)0xe30e;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe318;
      func_0x000299d1();
      puStack_10 = (undefined2 *)*(undefined2 *)0x989a;
      uStack_12 = *(undefined2 *)0x9898;
      uStack_14 = *(undefined2 *)0x9896;
      uStack_16 = *(undefined2 *)0x9894;
      uStack_18 = 0;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xe330;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      local_140 = *puVar7;
      local_13e = puVar7[1];
      local_a = (undefined2 *)0xe34b;
      func_0x000297e6();
      local_a = (undefined2 *)0xe350;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe35a;
      func_0x000299d1();
      puStack_10 = (undefined2 *)*(int *)0x989a;
      uStack_12 = *(undefined2 *)0x9898;
      uStack_14 = *(undefined2 *)0x9896;
      uStack_16 = *(undefined2 *)0x9894;
      uStack_18 = 0;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xe372;
      puVar7 = (undefined2 *)func_0x0001e558();
      local_15c = *puVar7;
      local_15a = puVar7[1];
    }
    uVar15 = local_118 != -1;
    bVar16 = local_118 == -1;
    if (bVar16) {
      local_a = (undefined2 *)0xe397;
      func_0x000297e6();
      local_a = (undefined2 *)0xe39c;
      func_0x00029af6();
      local_a = (undefined2 *)0xe3a1;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe3ab;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe3b4;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe3b9;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe3c3;
      func_0x000299d1();
      uStack_18 = 0;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xe3cb;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      local_140 = *puVar7;
      local_13e = puVar7[1];
      local_a = (undefined2 *)0xe3e6;
      func_0x000297e6();
      local_a = (undefined2 *)0xe3eb;
      func_0x00029af6();
      local_a = (undefined2 *)0xe3f0;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe3fa;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe403;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe408;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe412;
      func_0x000299d1();
      uStack_18 = 0;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xe41a;
      puVar7 = (undefined2 *)func_0x0001e558();
      uVar15 = (undefined1 *)0xffed < &uStack_18;
      local_15c = *puVar7;
      local_15a = puVar7[1];
    }
    uVar13 = bVar16 && &stack0x0000 == (undefined1 *)0x6;
    *(undefined2 *)0xb30c = local_140;
    *(undefined2 *)0xb30e = local_13e;
    *(undefined2 *)0xb37e = local_15c;
    *(undefined2 *)0xb380 = local_15a;
    local_a = (undefined2 *)0xe453;
    func_0x00029834();
    local_a = (undefined2 *)0x22b2;
    local_c = (undefined2 **)0xe45d;
    func_0x00029c74();
    local_a = (undefined2 *)0xe463;
    func_0x000299d1();
  }
  else {
    uVar13 = 0;
  }
  local_b4 = local_bc;
  uStack_b2 = uStack_ba;
  uStack_b0 = uStack_b8;
  uStack_ae = uStack_b6;
  while( true ) {
    local_a = (undefined2 *)0xe495;
    func_0x00029834();
    local_a = (undefined2 *)0xe49e;
    func_0x00029834();
    local_a = (undefined2 *)0xe4a3;
    FUN_28b3_1181();
    if (!(bool)uVar15) break;
    local_a = (undefined2 *)0xe47c;
    func_0x00029834();
    local_a = (undefined2 *)0x22b2;
    local_c = (undefined2 **)0xe486;
    FUN_28b3_10e4();
    local_a = (undefined2 *)0xe48c;
    func_0x000299d1();
  }
  while( true ) {
    local_a = (undefined2 *)0xe4c9;
    func_0x00029834();
    local_a = (undefined2 *)0xe4d2;
    func_0x00029834();
    local_a = (undefined2 *)0xe4d7;
    FUN_28b3_1181();
    if ((bool)uVar15 || (bool)uVar13) break;
    local_a = (undefined2 *)0xe4b0;
    func_0x00029834();
    local_a = (undefined2 *)0x22b2;
    local_c = (undefined2 **)0xe4ba;
    func_0x00029c74();
    local_a = (undefined2 *)0xe4c0;
    func_0x000299d1();
  }
  local_a = (undefined2 *)0xe4e2;
  func_0x00029834();
  local_a = (undefined2 *)0xe4eb;
  func_0x00029834();
  local_a = (undefined2 *)0xe4f0;
  FUN_28b3_1181();
  local_124 = (uint)(!(bool)uVar15 && !(bool)uVar13);
  local_a = (undefined2 *)0xe509;
  func_0x00029834();
  local_a = (undefined2 *)0x22b2;
  local_c = (undefined2 **)0xe513;
  func_0x00029c2c();
  local_a = (undefined2 *)0xe519;
  func_0x000299b9();
  puStack_10 = (undefined2 *)0x22b2;
  uStack_12 = 0xe523;
  func_0x000299d1();
  puStack_10 = (undefined2 *)0x22b2;
  uStack_12 = 0xe528;
  func_0x0002a11e();
  local_a = (undefined2 *)0xe532;
  func_0x00029834();
  local_a = (undefined2 *)0xe53b;
  func_0x00029983();
  local_a = (undefined2 *)0xe544;
  func_0x00029834();
  puStack_10 = (undefined2 *)0x22b2;
  uStack_12 = 0xe54e;
  func_0x000299d1();
  puStack_10 = (undefined2 *)0x22b2;
  uStack_12 = 0xe553;
  func_0x0002a10c();
  local_a = (undefined2 *)0xe55d;
  func_0x00029834();
  local_a = (undefined2 *)0xe566;
  func_0x00029983();
  local_14c = *(undefined2 *)0x98d4;
  local_14a = *(undefined2 *)0x98d6;
  local_188 = *(undefined2 *)0x98d8;
  local_186 = *(undefined2 *)0x98da;
  local_16c = local_188;
  local_16a = local_186;
  local_134 = local_14c;
  local_132 = local_14a;
  for (local_f6 = 1; iVar6 = local_f6, local_f6 <= param_5; local_f6 = local_f6 + 1) {
    local_ac = param_4[local_f6 * 2];
    local_aa = param_4[local_f6 * 2 + 1];
    if ((-1 < local_aa) && ((0 < local_aa || (local_ac != 0)))) {
      local_d8 = param_2[local_f6 * 0xb];
      local_d6 = param_2[local_f6 * 0xb + 1];
      local_f4 = param_2[local_f6 * 0xb + 2];
      local_f2 = param_2[local_f6 * 0xb + 3];
      local_a = (undefined2 *)0xe5f7;
      func_0x000297e6();
      local_a = (undefined2 *)0xe5fc;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe606;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe60f;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe614;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe61e;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xe627;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      local_140 = *puVar7;
      local_13e = puVar7[1];
      local_a = &local_16c;
      local_c = (undefined2 **)&local_14c;
      local_e = &local_134;
      puStack_10 = (undefined2 *)0x1bb4;
      uStack_12 = 0xe656;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe65b;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe665;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe66e;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe673;
      func_0x00029d78();
      local_20 = 0x22b2;
      func_0x000299d1();
      local_20 = 1;
      local_24 = 0xe686;
      func_0x0001e558();
      puStack_10 = (undefined2 *)0x1bb4;
      uStack_12 = 0xe690;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe699;
      func_0x0002996b();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe69e;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe6a8;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe6b1;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe6b6;
      func_0x00029d78();
      local_20 = 0x22b2;
      func_0x000299d1();
      local_20 = 0x22b2;
      FUN_3ab8_4bb9();
      local_d8 = param_2[iVar6 * 0xb + 4];
      local_d6 = param_2[iVar6 * 0xb + 5];
      local_f4 = param_2[iVar6 * 0xb + 6];
      local_f2 = param_2[iVar6 * 0xb + 7];
      local_a = (undefined2 *)0xe6ec;
      func_0x000297e6();
      local_a = (undefined2 *)0xe6f1;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe6fb;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe704;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe709;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe713;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xe71c;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      local_140 = *puVar7;
      local_13e = puVar7[1];
      local_a = &local_16c;
      local_c = (undefined2 **)&local_14c;
      local_e = &local_134;
      puStack_10 = (undefined2 *)0x1bb4;
      uStack_12 = 0xe74b;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe750;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe75a;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe763;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe768;
      func_0x00029d78();
      local_20 = 0x22b2;
      func_0x000299d1();
      local_20 = 1;
      local_24 = 0xe77b;
      func_0x0001e558();
      puStack_10 = (undefined2 *)0x1bb4;
      uStack_12 = 0xe785;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe78e;
      func_0x0002996b();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe793;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe79d;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe7a6;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe7ab;
      func_0x00029d78();
      local_20 = 0x22b2;
      func_0x000299d1();
      local_20 = 0x22b2;
      FUN_3ab8_4bb9();
    }
    if (local_aa < 0) {
      local_d8 = param_3[local_f6 * 0x10];
      local_d6 = param_3[local_f6 * 0x10 + 1];
      local_f4 = param_3[local_f6 * 0x10 + 2];
      local_f2 = param_3[local_f6 * 0x10 + 3];
      local_a = (undefined2 *)0xe7f7;
      func_0x000297e6();
      local_a = (undefined2 *)0xe7fc;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe806;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe80f;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe814;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe81e;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xe827;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      local_140 = *puVar7;
      local_13e = puVar7[1];
      local_a = (undefined2 *)0xe842;
      func_0x000297e6();
      local_a = (undefined2 *)0xe847;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe851;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe85a;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe85f;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe869;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xe872;
      puVar7 = (undefined2 *)func_0x0001e558();
      local_15c = *puVar7;
      local_15a = puVar7[1];
      local_a = (undefined2 *)0xe890;
      func_0x000297e6();
      local_a = (undefined2 *)0xe899;
      func_0x00029b55();
      local_a = (undefined2 *)0xe8a2;
      func_0x00029983();
      local_a = (undefined2 *)0xe8a9;
      func_0x000297e6();
      local_a = (undefined2 *)0xe8b2;
      func_0x00029b55();
      local_a = (undefined2 *)0xe8bb;
      func_0x00029983();
      local_a = &local_16c;
      local_c = (undefined2 **)&local_14c;
      local_e = &local_134;
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe8d8;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe8dd;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe8e7;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe8f0;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe8f5;
      func_0x00029d78();
      local_20 = 0x22b2;
      func_0x000299d1();
      local_20 = 0x22b2;
      FUN_3ab8_4bb9();
      local_a = (undefined2 *)0xe90d;
      func_0x000297e6();
      local_a = (undefined2 *)0xe916;
      func_0x00029bb5();
      local_a = (undefined2 *)0xe91f;
      func_0x00029983();
      local_a = (undefined2 *)0xe926;
      func_0x000297e6();
      local_a = (undefined2 *)0xe92f;
      func_0x00029bb5();
      local_a = (undefined2 *)0xe938;
      func_0x00029983();
      local_a = &local_16c;
      local_c = (undefined2 **)&local_14c;
      local_e = &local_134;
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe955;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xe95a;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe964;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe96d;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xe972;
      func_0x00029d78();
      local_20 = 0x22b2;
      func_0x000299d1();
      local_20 = 0x22b2;
      FUN_3ab8_4bb9();
    }
  }
  local_a = (undefined2 *)0xe99c;
  func_0x000297e6();
  local_a = (undefined2 *)0x22b2;
  local_c = (undefined2 **)0xe9a6;
  func_0x00029b55();
  local_a = (undefined2 *)0xe9ac;
  func_0x00029983();
  local_a = (undefined2 *)0xe9b5;
  func_0x000297e6();
  local_a = (undefined2 *)0x22b2;
  local_c = (undefined2 **)0xe9bf;
  func_0x00029bb5();
  local_a = (undefined2 *)0xe9c5;
  func_0x00029983();
  local_a = (undefined2 *)0xe9ce;
  func_0x000297e6();
  local_a = (undefined2 *)0xe9d7;
  func_0x00029b6d();
  local_a = (undefined2 *)0xe9e0;
  func_0x00029983();
  if (local_118 < 0) {
    local_a = (undefined2 *)0xe9f0;
    func_0x000297e6();
    local_a = (undefined2 *)0xe9f9;
    func_0x00029b6d();
    local_a = (undefined2 *)0xea02;
    func_0x00029983();
    if (local_118 == -3) {
      local_a = (undefined2 *)0xea12;
      func_0x000297e6();
      local_a = (undefined2 *)0xea1b;
      func_0x00029b6d();
      local_a = (undefined2 *)0xea24;
      func_0x00029983();
    }
  }
  local_a = (undefined2 *)0xea2d;
  func_0x000297e6();
  local_a = (undefined2 *)0xea36;
  func_0x0002996b();
  local_a = (undefined2 *)0xea3f;
  func_0x00029b85();
  local_a = (undefined2 *)0xea44;
  func_0x00029d78();
  local_a = (undefined2 *)0xea49;
  local_f6 = FUN_28b3_0f51();
  local_196 = (undefined2 *)CONCAT22(local_196._2_2_,(undefined2 *)(local_f6 + -4));
  local_a = (undefined2 *)0xea5d;
  FUN_28b3_0d8b();
  local_a = (undefined2 *)0xea66;
  func_0x00029b6d();
  local_a = (undefined2 *)0xea6f;
  func_0x00029983();
  local_a = (undefined2 *)0xea78;
  func_0x000297e6();
  local_a = (undefined2 *)0xea81;
  func_0x00029b6d();
  local_a = (undefined2 *)0xea8a;
  func_0x0002996b();
  local_a = (undefined2 *)0xea92;
  FUN_28b3_0ee9();
  if (local_118 == 2) {
    local_a = (undefined2 *)0xeaa2;
    func_0x000297e6();
    local_a = (undefined2 *)0x22b2;
    local_c = (undefined2 **)0xeaac;
    func_0x00029b55();
    local_a = (undefined2 *)0xeab2;
    func_0x00029983();
    local_a = (undefined2 *)0xeabb;
    func_0x000297e6();
    local_a = (undefined2 *)0xeac4;
    func_0x00029b6d();
    local_a = (undefined2 *)0x22b2;
    local_c = (undefined2 **)0xeace;
    func_0x00029bb5();
    local_a = (undefined2 *)0xead4;
    func_0x00029983();
  }
  if (local_118 == 3) {
    local_a = (undefined2 *)0xeae4;
    func_0x000297e6();
    local_a = (undefined2 *)0xeaed;
    func_0x00029b6d();
    local_a = (undefined2 *)0x22b2;
    local_c = (undefined2 **)0xeaf7;
    func_0x00029bb5();
    local_a = (undefined2 *)0xeafd;
    func_0x00029983();
    local_a = (undefined2 *)0xeb06;
    func_0x000297e6();
    local_a = (undefined2 *)0x22b2;
    local_c = (undefined2 **)0xeb10;
    func_0x00029bb5();
    local_a = (undefined2 *)0xeb16;
    func_0x00029983();
  }
  if ((local_118 == -1) || (local_118 == -2)) {
    local_52 = 1;
  }
  if (local_118 == 0) {
    local_52 = *(int *)0x38d8;
  }
  if ((0 < local_118) || (local_118 == -3)) {
    local_52 = 0;
  }
  if (local_52 == 0) {
    local_2e = (undefined2 *)*(int *)0x9884;
    local_2c = *(undefined2 *)0x9886;
    local_e = local_2e;
    local_c = (undefined2 **)local_2c;
  }
  if (0 < local_52) {
    local_a = (undefined2 *)0xeb71;
    func_0x000297e6();
    local_a = (undefined2 *)0xeb7a;
    func_0x00029b6d();
    local_a = (undefined2 *)0xeb83;
    func_0x00029c2c();
    local_a = (undefined2 *)0xeb8b;
    func_0x00029983();
    local_a = (undefined2 *)0xeb94;
    func_0x000297e6();
    local_a = (undefined2 *)0xeb9d;
    func_0x00029b6d();
    local_a = (undefined2 *)0xeba6;
    func_0x00029c2c();
    local_a = (undefined2 *)0xebae;
    func_0x00029983();
  }
  local_168 = local_2e;
  local_166 = local_2c;
  if (local_52 == 1) {
    local_168 = (undefined2 *)*(int *)0x9884;
    local_166 = *(undefined2 *)0x9886;
  }
  local_a = (undefined2 *)0xebd4;
  func_0x000297e6();
  local_a = (undefined2 *)0xebdd;
  func_0x00029b6d();
  local_a = (undefined2 *)0xebe5;
  func_0x0002996b();
  local_a = (undefined2 *)0xebed;
  FUN_28b3_0ee9();
  if (local_52 == 5) {
    local_a = (undefined2 *)0xebfb;
    func_0x000297e6();
    local_a = (undefined2 *)0xec00;
    func_0x00029d78();
    local_a = (undefined2 *)0xec09;
    func_0x00029c2c();
    local_a = (undefined2 *)0xec11;
    func_0x00029983();
    local_a = (undefined2 *)0xec1a;
    func_0x000297e6();
    local_a = (undefined2 *)0xec1f;
    func_0x00029d78();
    local_a = (undefined2 *)0xec28;
    func_0x00029c2c();
    local_a = (undefined2 *)0xec30;
    func_0x00029983();
  }
  if (local_118 < 0) {
    local_a = (undefined2 *)0xec40;
    func_0x000297e6();
    local_a = (undefined2 *)0xec49;
    func_0x00029b6d();
    local_a = (undefined2 *)0xec52;
    func_0x0002996b();
    local_a = (undefined2 *)0xec57;
    func_0x00029d78();
    local_a = (undefined2 *)0xec60;
    func_0x00029c2c();
    local_a = (undefined2 *)0xec68;
    func_0x00029983();
    local_a = (undefined2 *)0xec71;
    func_0x000297e6();
    local_a = (undefined2 *)0xec7a;
    func_0x00029b6d();
    local_a = (undefined2 *)0xec82;
    func_0x00029983();
  }
  local_a = (undefined2 *)0x22b2;
  local_c = (undefined2 **)0xec8a;
  func_0x0000daa6();
  local_70 = 1;
  do {
    if ((local_118 < 2) || (local_70 == 1)) {
      local_a = (undefined2 *)0xeca6;
      func_0x000297e6();
      local_a = (undefined2 *)0x22b2;
      local_c = (undefined2 **)0xecb0;
      func_0x00029bb5();
      local_a = (undefined2 *)0xecb6;
      func_0x00029983();
      uVar3 = *(uint *)0x1116;
      uVar13 = uVar3 < 2;
      uVar15 = uVar3 == 2;
      if (1 < (int)uVar3) {
        local_70 = local_70 + 1;
        uVar15 = local_70 == 0;
      }
    }
    else {
      local_a = (undefined2 *)0xeccb;
      func_0x000297e6();
      local_a = (undefined2 *)0x22b2;
      local_c = (undefined2 **)0xecd5;
      func_0x00029bb5();
      local_a = (undefined2 *)0xecdb;
      func_0x00029983();
      local_70 = local_70 + 1;
      if ((*(int *)0x1116 == 2) && (2 < (int)local_70)) {
        local_70 = 1;
      }
      uVar13 = *(uint *)0x1116 < 3;
      uVar15 = false;
      if (*(uint *)0x1116 == 3) {
        uVar13 = local_70 < 3;
        uVar15 = local_70 == 3;
        if (3 < (int)local_70) {
          local_70 = 1;
        }
      }
    }
    local_a = (undefined2 *)0xed0b;
    func_0x000297e6();
    local_a = (undefined2 *)0xed14;
    func_0x000297e6();
    local_a = (undefined2 *)0xed1d;
    func_0x00029bb5();
    local_a = (undefined2 *)0xed22;
    FUN_28b3_1181();
    if (!(bool)uVar13) break;
    local_a = (undefined2 *)0xed3e;
    func_0x000297e6();
    local_a = (undefined2 *)0xed47;
    func_0x000297e6();
    local_a = (undefined2 *)0xed50;
    FUN_28b3_100d();
    local_a = (undefined2 *)0xed55;
    FUN_28b3_1181();
    if (!(bool)uVar13 && !(bool)uVar15) {
      local_a = (undefined2 *)0xed63;
      func_0x000297e6();
      local_a = (undefined2 *)0xed68;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xed72;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xed7b;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xed80;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xed8a;
      func_0x000299d1();
      uStack_18 = 0;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xed92;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      local_ec = *puVar7;
      local_ea = puVar7[1];
      local_a = (undefined2 *)0xedad;
      func_0x000297e6();
      local_a = (undefined2 *)0xedb2;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xedbc;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xedc5;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xedca;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xedd4;
      func_0x000299d1();
      uStack_18 = 0;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xeddc;
      puVar7 = (undefined2 *)func_0x0001e558();
      local_116 = *puVar7;
      local_114 = puVar7[1];
      local_a = (undefined2 *)0xedf7;
      func_0x000297e6();
      local_a = (undefined2 *)0xedfc;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xee06;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xee0f;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xee14;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xee1e;
      func_0x000299d1();
      uStack_18 = 0;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xee26;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      local_112 = *puVar7;
      local_110 = puVar7[1];
      iVar6 = 0;
      local_da = 0;
      local_4c = *(undefined2 *)0x98ec;
      local_4a = *(undefined2 *)0x98ee;
      local_44 = local_ec;
      local_42 = local_ea;
      local_40 = local_116;
      local_3e = local_114;
      local_a = (undefined2 *)0xee81;
      local_3c = local_112;
      local_3a = local_110;
      func_0x000297e6();
      local_a = (undefined2 *)0xee86;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xee90;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xee99;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      uStack_12 = 0xee9e;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = (undefined2 *)0xeea8;
      func_0x000299d1();
      uStack_18 = 0;
      local_1a = (undefined2 *)0x22b2;
      local_1c = 0xeeb0;
      func_0x0001e558();
      local_a = (undefined2 *)0xeeba;
      func_0x000297e6();
      local_a = (undefined2 *)0xeec3;
      func_0x0002996b();
      local_a = (undefined2 *)0xeecb;
      func_0x00029983();
      local_26 = local_ec;
      local_24 = local_ea;
      local_20 = local_114;
      local_1e = local_112;
      local_1c = local_110;
      local_a = (undefined2 *)0xeefe;
      func_0x000297e6();
      local_a = (undefined2 *)0xef06;
      func_0x00029983();
      local_a = (undefined2 *)0x0;
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xef0f;
      local_196 = (undefined2 *)func_0x0000013f();
      puVar10 = (undefined2 *)local_196;
      puVar7 = &local_26;
      for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar2 = puVar10;
        puVar10 = puVar10 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar1;
      }
      do {
        uVar11 = 0x11f2;
        local_a = (undefined2 *)0xef2a;
        cVar5 = FUN_12c1_009c();
        if (cVar5 == '\x1b') goto LAB_3ab8_41a4;
        if (local_118 < 1) {
          uVar11 = 0x885;
          local_a = (undefined2 *)0xef3d;
          func_0x0000a9df();
        }
        local_126 = 0;
        local_46 = *(undefined2 *)0x9892;
        for (local_f6 = 1; local_f6 <= param_5; local_f6 = local_f6 + 1) {
          local_ac = param_4[local_f6 * 2];
          local_aa = param_4[local_f6 * 2 + 1];
          uVar12 = uVar11;
          if ((local_aa < 0) || ((local_aa < 1 && (local_ac == 0)))) {
LAB_3ab8_4445:
            if (local_aa < 0) {
              local_a = (undefined2 *)0x0;
              local_e = (undefined2 *)0xefd5;
              local_c = (undefined2 **)uVar12;
              local_196 = (undefined2 *)func_0x00000271();
              puVar10 = (undefined2 *)local_196;
              puVar7 = param_3 + local_f6 * 0x10;
              for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar2 = puVar10;
                puVar10 = puVar10 + 1;
                puVar1 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar2 = *puVar1;
              }
              local_a = &local_e0;
              local_c = (undefined2 **)&local_e4;
              local_e = &local_c4;
              puStack_10 = (undefined2 *)0xffff;
              uStack_12 = 0xd8f0;
              uStack_14 = 0;
              uStack_16 = 0;
              uStack_18 = 0;
              uVar12 = 0x1bb4;
              local_1a = (undefined2 *)0xf018;
              iVar8 = FUN_1def_2b59();
              if (1 < iVar8) {
                puVar7 = param_3 + local_f6 * 0x10;
                if (((undefined2 *)puVar7[7] != (undefined2 *)puVar7[9]) ||
                   (puVar7[8] != puVar7[10])) {
                  local_6e = (undefined2 *)puVar7[7];
                  local_6c = puVar7[8];
                  local_a4 = *puVar7;
                  local_a2 = puVar7[1];
                  local_c8 = puVar7[2];
                  local_c6 = puVar7[3];
                  local_c0 = puVar7[0xb];
                  local_be = puVar7[0xc];
                  ppuVar17 = &local_a;
                  local_a = (undefined2 *)0x1bb4;
                  local_c = (undefined2 **)0xf18c;
                  local_a0 = (undefined2 *)puVar7[9];
                  local_9e = puVar7[10];
                  func_0x000297e6();
                  local_a = (undefined2 *)0x22b2;
                  local_c = (undefined2 **)0xf191;
                  func_0x00029d78();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xf19b;
                  func_0x000299d1();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xf1a4;
                  func_0x000297e6();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xf1a9;
                  func_0x00029d78();
                  local_1a = (undefined2 *)0x22b2;
                  local_1c = 0xf1b3;
                  func_0x000299d1();
                  local_1a = (undefined2 *)0x0;
                  local_1c = 0;
                  local_1e = 0x22b2;
                  local_20 = 0xf1bc;
                  FUN_20a9_1260();
                  if ((int)ppuVar17 < 0) {
                    ppuVar17 = (undefined2 **)&stack0x015e;
                  }
                  if ((local_9e < local_6c) || ((local_9e <= local_6c && (local_a0 <= local_6e)))) {
                    if (((int)ppuVar17 <= local_6c) &&
                       (((int)ppuVar17 < local_6c || (local_a < local_6e)))) goto LAB_3ab8_4688;
                  }
                  else {
                    if ((local_6c <= (int)ppuVar17) &&
                       ((local_6c < (int)ppuVar17 || (local_6e <= local_a)))) {
LAB_3ab8_4688:
                      if (((int)ppuVar17 < local_9e) ||
                         (((int)ppuVar17 <= local_9e && (local_a < local_a0)))) goto LAB_3ab8_46ad;
                    }
                    local_e4 = *(undefined2 *)0x98f0;
                    local_e2 = *(undefined2 *)0x98f2;
                    local_c4 = local_e4;
                    local_c2 = local_e2;
                  }
LAB_3ab8_46ad:
                  ppuVar17 = &local_a;
                  local_a = (undefined2 *)0x1bb4;
                  local_c = (undefined2 **)0xf23a;
                  func_0x000297e6();
                  local_a = (undefined2 *)0x22b2;
                  local_c = (undefined2 **)0xf23f;
                  func_0x00029d78();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xf249;
                  func_0x000299d1();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xf252;
                  func_0x000297e6();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xf257;
                  func_0x00029d78();
                  local_1a = (undefined2 *)0x22b2;
                  local_1c = 0xf261;
                  func_0x000299d1();
                  local_1a = (undefined2 *)0x0;
                  local_1c = 0;
                  local_1e = 0x22b2;
                  local_20 = 0xf26a;
                  FUN_20a9_1260();
                  if ((int)ppuVar17 < 0) {
                    ppuVar17 = (undefined2 **)&stack0x015e;
                  }
                  if ((local_9e < local_6c) || ((local_9e <= local_6c && (local_a0 <= local_6e)))) {
                    if (((int)ppuVar17 <= local_6c) &&
                       (((int)ppuVar17 < local_6c || (local_a < local_6e)))) goto LAB_3ab8_4736;
                  }
                  else {
                    if ((local_6c <= (int)ppuVar17) &&
                       ((local_6c < (int)ppuVar17 || (local_6e <= local_a)))) {
LAB_3ab8_4736:
                      if (((int)ppuVar17 < local_9e) ||
                         (((int)ppuVar17 <= local_9e && (local_a < local_a0)))) goto LAB_3ab8_475b;
                    }
                    local_10e = *(undefined2 *)0x98f0;
                    local_10c = *(undefined2 *)0x98f2;
                    local_e0 = local_10e;
                    local_de = local_10c;
                  }
                }
LAB_3ab8_475b:
                uVar15 = 0;
                uVar13 = local_124 == 0;
                if ((bool)uVar13) {
                  local_a = (undefined2 *)0xf2ed;
                  func_0x000297e6();
                  local_a = (undefined2 *)0xf2f6;
                  func_0x000297e6();
                  local_a = (undefined2 *)0xf2fb;
                  FUN_28b3_1181();
                  uVar14 = uVar15;
                  if (!(bool)uVar15 && !(bool)uVar13) {
                    local_a = (undefined2 *)0xf305;
                    func_0x000297e6();
                    local_a = (undefined2 *)0xf30e;
                    func_0x000297e6();
                    local_a = (undefined2 *)0xf313;
                    FUN_28b3_1181();
                    uVar14 = 0;
                    if ((bool)uVar15) {
                      local_126 = 1;
                      local_46 = local_c2;
                      local_d0 = local_c4;
                      local_ce = local_c2;
                      local_e8 = local_e4;
                      local_e6 = local_e2;
                      uVar14 = local_f6 != 0;
                      local_da = -local_f6;
                      uVar13 = local_da == 0;
                    }
                  }
                  local_a = (undefined2 *)0xf354;
                  func_0x000297e6();
                  local_a = (undefined2 *)0xf35c;
                  func_0x000297e6();
                  uVar12 = 0x22b2;
                  local_a = (undefined2 *)0xf361;
                  FUN_28b3_1181();
                  if ((bool)uVar14) {
                    local_a = (undefined2 *)0xf36f;
                    func_0x000297e6();
                    local_a = (undefined2 *)0xf377;
                    func_0x000297e6();
                    uVar12 = 0x22b2;
                    local_a = (undefined2 *)0xf37c;
                    FUN_28b3_1181();
                    if (!(bool)uVar14 && !(bool)uVar13) {
                      local_46 = local_de;
                      goto LAB_3ab8_4815;
                    }
                  }
                }
                else {
                  local_a = (undefined2 *)0xf3c3;
                  func_0x000297e6();
                  local_a = (undefined2 *)0xf3cb;
                  func_0x000297e6();
                  local_a = (undefined2 *)0xf3d0;
                  FUN_28b3_1181();
                  if ((bool)uVar15) {
                    local_a = (undefined2 *)0xf3db;
                    func_0x000297e6();
                    local_a = (undefined2 *)0xf3e3;
                    func_0x000297e6();
                    local_a = (undefined2 *)0xf3e8;
                    FUN_28b3_1181();
                    if (!(bool)uVar15 && !(bool)uVar13) {
                      local_126 = 1;
                      local_46 = local_e2;
                      local_d0 = local_c4;
                      local_ce = local_c2;
                      local_e8 = local_e4;
                      local_e6 = local_e2;
                      uVar15 = local_f6 != 0;
                      local_da = -local_f6;
                      uVar13 = local_da == 0;
                    }
                  }
                  local_a = (undefined2 *)0xf431;
                  func_0x000297e6();
                  local_a = (undefined2 *)0xf439;
                  func_0x000297e6();
                  uVar12 = 0x22b2;
                  local_a = (undefined2 *)0xf43e;
                  FUN_28b3_1181();
                  if ((bool)uVar15) {
                    local_a = (undefined2 *)0xf44c;
                    func_0x000297e6();
                    local_a = (undefined2 *)0xf454;
                    func_0x000297e6();
                    uVar12 = 0x22b2;
                    local_a = (undefined2 *)0xf459;
                    FUN_28b3_1181();
                    if (!(bool)uVar15 && !(bool)uVar13) {
                      local_46 = local_10c;
LAB_3ab8_4815:
                      local_126 = 1;
                      uVar12 = 0x22b2;
                      local_e8 = local_10e;
                      local_e6 = local_10c;
                      local_da = -local_f6;
                      local_d0 = local_e0;
                      local_ce = local_de;
                    }
                  }
                }
              }
            }
          }
          else {
            local_6a = param_2[local_f6 * 0xb];
            local_68 = param_2[local_f6 * 0xb + 1];
            local_66 = param_2[local_f6 * 0xb + 2];
            local_64 = param_2[local_f6 * 0xb + 3];
            local_62 = param_2[local_f6 * 0xb + 4];
            local_60 = param_2[local_f6 * 0xb + 5];
            local_5e = param_2[local_f6 * 0xb + 6];
            local_5c = param_2[local_f6 * 0xb + 7];
            local_a = &local_d8;
            puVar10 = &local_20;
            puVar7 = &local_6a;
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar2 = puVar10;
              puVar10 = puVar10 + 1;
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar1;
            }
            puVar10 = auStack_36;
            puVar7 = &local_44;
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar2 = puVar10;
              puVar10 = puVar10 + 1;
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar1;
            }
            uVar12 = 0x1bb4;
            local_3a = 0xf0c3;
            local_38 = uVar11;
            iVar8 = FUN_1def_1921();
            if (0 < iVar8) {
              uVar15 = 0;
              uVar13 = local_124 == 0;
              if ((bool)uVar13) {
                local_a = (undefined2 *)0xf0df;
                func_0x000297e6();
                local_a = (undefined2 *)0xf0e8;
                func_0x000297e6();
                local_a = (undefined2 *)0xf0ed;
                FUN_28b3_1181();
                uVar12 = 0x22b2;
                if (!(bool)uVar15 && !(bool)uVar13) {
                  local_a = (undefined2 *)0xf0fa;
                  func_0x000297e6();
                  local_a = (undefined2 *)0xf103;
                  func_0x000297e6();
                  local_a = (undefined2 *)0xf108;
                  FUN_28b3_1181();
                  uVar12 = 0x22b2;
                  if ((bool)uVar15) {
                    local_46 = local_d6;
                    goto LAB_3ab8_4425;
                  }
                }
              }
              else {
                local_a = (undefined2 *)0xef61;
                func_0x000297e6();
                local_a = (undefined2 *)0xef6a;
                func_0x000297e6();
                local_a = (undefined2 *)0xef6f;
                FUN_28b3_1181();
                uVar12 = 0x22b2;
                if (!(bool)uVar15 && !(bool)uVar13) {
                  local_a = (undefined2 *)0xef79;
                  func_0x000297e6();
                  local_a = (undefined2 *)0xef82;
                  func_0x000297e6();
                  local_a = (undefined2 *)0xef87;
                  FUN_28b3_1181();
                  uVar12 = 0x22b2;
                  if ((bool)uVar15) {
                    local_46 = local_f2;
LAB_3ab8_4425:
                    local_126 = 1;
                    local_d0 = local_d8;
                    local_ce = local_d6;
                    local_e8 = local_f4;
                    local_e6 = local_f2;
                    local_da = local_f6;
                    uVar12 = 0x22b2;
                  }
                }
              }
              goto LAB_3ab8_4445;
            }
          }
          uVar11 = uVar12;
        }
        if (local_126 == 0) break;
        local_4c = local_e8;
        local_4a = local_e6;
        if (local_124 == 0) {
          local_4c = local_d0;
          local_4a = local_ce;
        }
        if (iVar6 == 0) {
          local_11e = local_d0;
          local_11c = local_ce;
          local_13c = local_e8;
          local_13a = local_e6;
        }
        else {
          local_77 = *(undefined1 *)0xa6a;
          local_78 = *(undefined1 *)0xa6c;
          local_76 = *(undefined1 *)0xb310;
          local_88 = local_11e;
          local_86 = local_11c;
          local_84 = local_13c;
          local_82 = local_13a;
          local_80 = local_d0;
          local_7e = local_ce;
          local_7c = local_e8;
          local_7a = local_e6;
          local_a = (undefined2 *)0xf505;
          func_0x000297e6();
          local_a = (undefined2 *)0xf50a;
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          uStack_12 = 0xf514;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          uStack_12 = 0xf51d;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          uStack_12 = 0xf522;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = (undefined2 *)0xf52c;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          local_1a = (undefined2 *)0xf534;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = (undefined2 *)0xf539;
          func_0x00029d78();
          local_20 = 0x22b2;
          func_0x000299d1();
          local_20 = 0x22b2;
          func_0x000297e6();
          local_20 = 0x22b2;
          func_0x00029d78();
          uStack_28 = 0x22b2;
          local_2a = 0xf55a;
          func_0x000299d1();
          uStack_28 = 0x22b2;
          local_2a = 0xf562;
          func_0x000297e6();
          uStack_28 = 0x22b2;
          local_2a = 0xf567;
          func_0x00029d78();
          iStack_30 = 0x22b2;
          uStack_32 = 0xf571;
          func_0x000299d1();
          iStack_30 = local_52;
          puVar10 = &local_46;
          puVar7 = &local_88;
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar2 = puVar10;
            puVar10 = puVar10 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          local_4a = 0xf588;
          iVar8 = FUN_3ab8_4db4();
          local_72 = local_72 + iVar8;
        }
        iVar6 = 1 - iVar6;
      } while( true );
    }
  } while( true );
LAB_3ab8_41a4:
  uVar11 = 0x885;
  local_a = (undefined2 *)0xed29;
  func_0x0000abfa();
  local_118 = local_118 + 1;
  if (-1 < local_118) goto LAB_3ab8_4add;
  goto LAB_3ab8_3655;
LAB_3ab8_4add:
  local_a = local_1b4;
  local_e = (undefined2 *)0xf66b;
  local_c = (undefined2 **)uVar11;
  FUN_21f2_3454();
  local_a = local_1a0;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xf67b;
  FUN_21f2_3454();
  local_a = param_6;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xf68a;
  FUN_21f2_3454();
  local_a = param_6;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xf698;
  FUN_21f2_2d26();
  local_a = param_6;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xf6a7;
  FUN_21f2_2d26();
  local_a = param_6;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xf6b5;
  FUN_21f2_2d26();
  local_a = param_6;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xf6c4;
  FUN_21f2_2d26();
  local_a = param_6;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xf6d2;
  FUN_21f2_2d26();
  local_a = param_6;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xf6e1;
  FUN_21f2_2d26();
  local_a = param_6;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xf6f0;
  FUN_21f2_2d26();
  local_a = (undefined2 *)0x2;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xf6fe;
  FUN_1def_07a4();
  *(undefined2 *)0xbc0 = 1;
  if (local_72 == 0) {
    local_9c = (undefined2 *)0x2710;
  }
  else {
    local_9c = (undefined2 *)0x270f;
  }
  local_a = &local_18c;
  local_c = (undefined2 **)&local_178;
  local_e = param_6;
  puStack_10 = local_9c;
  uStack_12 = 0x1bb4;
  uVar11 = 0x1bb4;
  uStack_14 = 0xf5dd;
  local_17c = FUN_1def_0904();
  if (*(int *)0x158 != 0) {
    return 0;
  }
  if (local_17c == -1) {
    local_a = (undefined2 *)0x1bb4;
    local_c = (undefined2 **)0xf5fe;
    func_0x0000daa6();
    local_a = (undefined2 *)0xf604;
    func_0x0000c3ca();
    *(undefined2 *)0x148 = local_160;
    *(undefined2 *)0x14a = local_15e;
    *(undefined2 *)0x14c = local_50;
    *(undefined2 *)0x14e = local_4e;
    *(undefined2 *)0x152 = local_17a;
    local_a = (undefined2 *)0x885;
    local_c = (undefined2 **)0xf62f;
    func_0x0001470b();
    local_a = (undefined2 *)0x11f2;
    local_c = (undefined2 **)0xf639;
    func_0x0000b1d8();
    uVar11 = 0x885;
    local_a = (undefined2 *)0xf63f;
    func_0x0000abfa();
    local_72 = 0;
  }
  else if (local_17c != 99) {
    if (local_17c != 1) {
      if (local_17c == 2) {
        return 0;
      }
      goto LAB_3ab8_4add;
    }
    goto LAB_3ab8_2b74;
  }
  local_a = param_4;
  local_c = (undefined2 **)param_3;
  local_e = param_2;
  puStack_10 = (undefined2 *)0x1;
  uStack_14 = 0xf65a;
  uStack_12 = uVar11;
  func_0x00030b64();
  goto LAB_3ab8_4add;
}



/* 3ab8:4bb9  FUN_3ab8_4bb9  190 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4bb9(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  uVar2 = 1;
  FUN_21f2_0ebc();
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar1 && !(bool)uVar2) {
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
  }
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar1 && !(bool)uVar2) {
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
  }
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar1) {
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
  }
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar1) {
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
  }
  return;
}



/* 3ab8:4c77  FUN_3ab8_4c77  25 bytes, 1 callers */

undefined2
FUN_3ab8_4c77(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,byte param_11,undefined2 param_12,
             undefined2 param_13,undefined2 param_14,undefined2 param_15,undefined2 param_16,
             undefined2 param_17,undefined2 param_18,undefined2 param_19,undefined2 param_20,
             undefined2 param_21,undefined2 param_22,undefined2 param_23,undefined2 param_24,
             undefined2 param_25,undefined2 param_26,undefined2 param_27,undefined2 param_28)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
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
  undefined2 *puStack_8;
  
  FUN_21f2_0ebc();
  puStack_8 = (undefined2 *)param_20;
  uStack_a = param_19;
  uStack_c = param_18;
  uStack_e = param_17;
  uStack_10 = param_16;
  uStack_12 = param_15;
  uStack_14 = param_14;
  uStack_16 = param_13;
  uStack_18 = 0;
  uStack_1a = 0x22b2;
  uStack_1c = 0xf824;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  param_2 = *puVar4;
  param_3 = puVar4[1];
  puStack_8 = (undefined2 *)param_20;
  uStack_a = param_19;
  uStack_c = param_18;
  uStack_e = param_17;
  uStack_10 = param_16;
  uStack_12 = param_15;
  uStack_14 = param_14;
  uStack_16 = param_13;
  uStack_18 = 0;
  uStack_1a = 0x1bb4;
  uStack_1c = 0xf854;
  puVar4 = (undefined2 *)func_0x0001e558();
  param_4 = *puVar4;
  param_5 = puVar4[1];
  puStack_8 = (undefined2 *)param_28;
  uStack_a = param_27;
  uStack_c = param_26;
  uStack_e = param_25;
  uStack_10 = param_24;
  uStack_12 = param_23;
  uStack_14 = param_22;
  uStack_16 = param_21;
  uStack_18 = 0;
  uStack_1a = 0x1bb4;
  uStack_1c = 0xf884;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  param_6 = *puVar4;
  param_7 = puVar4[1];
  puStack_8 = (undefined2 *)param_28;
  uStack_a = param_27;
  uStack_c = param_26;
  uStack_e = param_25;
  uStack_10 = param_24;
  uStack_12 = param_23;
  uStack_14 = param_22;
  uStack_16 = param_21;
  uStack_18 = 0;
  uStack_1a = 0x1bb4;
  uStack_1c = 0xf8b4;
  puVar4 = (undefined2 *)func_0x0001e558();
  param_8 = *puVar4;
  param_9 = puVar4[1];
  puStack_8 = &param_2;
  uStack_a = 0;
  uStack_c = 0x1bb4;
  uVar8 = 0x11f2;
  uStack_e = 0xf8d0;
  iVar5 = func_0x000185d3();
  uVar6 = 0;
  if (iVar5 != 0) {
    if (*(char *)(param_11 + 0xb4a6) == '\0') {
      *(undefined1 *)(param_11 + 0xb4a6) = 1;
      puStack_8 = (undefined2 *)0xffff;
      uStack_a = 0x11f2;
      uStack_c = 0xf8ef;
      func_0x0000b1d8();
      puStack_8 = (undefined2 *)0x0;
      uStack_a = 0x885;
      uVar8 = 0x885;
      uStack_c = 0xf8f8;
      func_0x0000daa6();
    }
    puStack_8 = (undefined2 *)0x0;
    puVar7 = &uStack_1e;
    puVar4 = &param_2;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar3 = *puVar2;
    }
    func_0x00018396(uVar8);
    puStack_8 = (undefined2 *)*(undefined2 *)0x14a;
    uStack_a = *(undefined2 *)0x148;
    uStack_c = 0x11f2;
    uStack_e = 0xf920;
    uVar9 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar9 + 0x14);
    *pbVar1 = *pbVar1 | 0x20;
    uVar6 = 1;
  }
  return uVar6;
}



/* 3ab8:4c91  FUN_3ab8_4c91  290 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x0003f835) overlaps instruction at (ram,0x0003f834)
    */

undefined2 __cdecl16far FUN_3ab8_4c91(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 in_DX;
  int unaff_BP;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool in_CF;
  bool in_ZF;
  undefined4 uVar9;
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
  int iStack_2;
  
  uVar7 = 0x3ab8;
  if (in_CF || in_ZF) {
    uStack_12 = uVar7;
    if (in_CF || in_ZF) goto LAB_3ab8_4ce1;
  }
  else {
    iStack_2 = *(undefined2 *)(unaff_BP + 0x20);
    uStack_4 = *(undefined2 *)(unaff_BP + 0x1e);
    uStack_6 = *(undefined2 *)(unaff_BP + 0x1c);
    uStack_8 = 0;
    uStack_a = 0x3ab8;
    uStack_c = 0xf824;
    puVar4 = (undefined2 *)FUN_1def_05d1();
    uVar7 = puVar4[1];
    *(undefined2 *)(unaff_BP + 6) = *puVar4;
    *(undefined2 *)(unaff_BP + 8) = uVar7;
    uStack_12 = 0x1bb4;
  }
  iStack_2 = *(undefined2 *)(unaff_BP + 0x28);
  uStack_4 = *(undefined2 *)(unaff_BP + 0x26);
  uStack_6 = *(undefined2 *)(unaff_BP + 0x24);
  uStack_8 = *(undefined2 *)(unaff_BP + 0x22);
  uStack_a = *(undefined2 *)(unaff_BP + 0x20);
  uStack_c = *(undefined2 *)(unaff_BP + 0x1e);
  uStack_e = *(undefined2 *)(unaff_BP + 0x1c);
  uStack_10 = 0;
  uVar7 = 0x1bb4;
  uStack_14 = 0xf854;
  puVar4 = (undefined2 *)func_0x0001e558();
  in_DX = puVar4[1];
  *(undefined2 *)(unaff_BP + 10) = *puVar4;
LAB_3ab8_4ce1:
  *(undefined2 *)(unaff_BP + 0xc) = in_DX;
  iStack_2 = *(undefined2 *)(unaff_BP + 0x3a);
  uStack_4 = *(undefined2 *)(unaff_BP + 0x38);
  uStack_6 = *(undefined2 *)(unaff_BP + 0x36);
  uStack_8 = *(undefined2 *)(unaff_BP + 0x34);
  uStack_a = *(undefined2 *)(unaff_BP + 0x32);
  uStack_c = *(undefined2 *)(unaff_BP + 0x30);
  uStack_e = *(undefined2 *)(unaff_BP + 0x2e);
  uStack_10 = *(undefined2 *)(unaff_BP + 0x2c);
  uStack_12 = 0;
  uStack_16 = 0xf884;
  uStack_14 = uVar7;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  uVar7 = puVar4[1];
  *(undefined2 *)(unaff_BP + 0xe) = *puVar4;
  *(undefined2 *)(unaff_BP + 0x10) = uVar7;
  iStack_2 = *(undefined2 *)(unaff_BP + 0x3a);
  uStack_4 = *(undefined2 *)(unaff_BP + 0x38);
  uStack_6 = *(undefined2 *)(unaff_BP + 0x36);
  uStack_8 = *(undefined2 *)(unaff_BP + 0x34);
  uStack_a = *(undefined2 *)(unaff_BP + 0x32);
  uStack_c = *(undefined2 *)(unaff_BP + 0x30);
  uStack_e = *(undefined2 *)(unaff_BP + 0x2e);
  uStack_10 = *(undefined2 *)(unaff_BP + 0x2c);
  uStack_12 = 0;
  uStack_14 = 0x1bb4;
  uStack_16 = 0xf8b4;
  puVar4 = (undefined2 *)func_0x0001e558();
  uVar7 = puVar4[1];
  *(undefined2 *)(unaff_BP + 0x12) = *puVar4;
  *(undefined2 *)(unaff_BP + 0x14) = uVar7;
  iStack_2 = unaff_BP + 6;
  uStack_4 = 0;
  uStack_6 = 0x1bb4;
  uVar8 = 0x11f2;
  uStack_8 = 0xf8d0;
  iVar5 = func_0x000185d3();
  uVar7 = 0;
  if (iVar5 != 0) {
    if (*(char *)(*(byte *)(unaff_BP + 0x18) + 0xb4a6) == '\0') {
      *(undefined1 *)(*(byte *)(unaff_BP + 0x18) + 0xb4a6) = 1;
      iStack_2 = 0xffff;
      uStack_4 = 0x11f2;
      uStack_6 = 0xf8ef;
      func_0x0000b1d8();
      iStack_2 = 0;
      uStack_4 = 0x885;
      uVar8 = 0x885;
      uStack_6 = 0xf8f8;
      func_0x0000daa6();
    }
    iStack_2 = 0;
    puVar6 = &uStack_18;
    puVar4 = (undefined2 *)(unaff_BP + 6);
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar3 = *puVar2;
    }
    func_0x00018396(uVar8);
    iStack_2 = *(undefined2 *)0x14a;
    uStack_4 = *(undefined2 *)0x148;
    uStack_6 = 0x11f2;
    uStack_8 = 0xf920;
    uVar9 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar9 + 0x14);
    *pbVar1 = *pbVar1 | 0x20;
    uVar7 = 1;
  }
  return uVar7;
}



/* 3ab8:4db4  FUN_3ab8_4db4  519 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x0003071f) overlaps instruction at (ram,0x0003071e)
    */
/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far
FUN_3ab8_4db4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 *param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,byte param_10,undefined2 param_11,uint param_12)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 **ppuVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined2 extraout_DX;
  undefined2 uVar10;
  undefined2 *in_BX;
  undefined2 *unaff_SI;
  undefined2 **ppuVar11;
  undefined2 *puVar12;
  undefined2 *unaff_DI;
  uint *puVar13;
  undefined2 unaff_ES;
  undefined2 uVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar15;
  undefined1 uVar16;
  bool bVar17;
  undefined2 *puVar18;
  undefined4 uVar19;
  undefined2 *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  undefined2 *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  undefined1 auStack_d2 [20];
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined1 auStack_aa [4];
  undefined1 auStack_a6 [2];
  uint uStack_a4;
  int iStack_a2;
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
  undefined2 auStack_7c [4];
  byte bStack_74;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 *puStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  uint uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_54;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined2 *puStack_50;
  undefined2 *puStack_4e;
  undefined2 *local_4c;
  undefined2 *puStack_4a;
  undefined2 uStack_48;
  undefined2 *puStack_44;
  undefined2 *puStack_42;
  uint local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 *local_30;
  undefined2 *local_2e;
  undefined2 *local_2a;
  undefined2 *local_28;
  undefined2 *local_26;
  undefined2 *puStack_24;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 local_1a;
  uint uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined4 uStack_12;
  undefined2 *puStack_e;
  undefined2 *puStack_c;
  undefined2 *puStack_a;
  
  iVar6 = FUN_21f2_0ebc();
  if (param_12 == 0) {
    in_BX = &param_1;
    puStack_a = (undefined2 *)0x0;
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xf953;
    iVar7 = func_0x000185d3();
    iVar6 = 0;
    if (iVar7 == 0) goto LAB_3ab8_4dd9;
    if (*(char *)(param_10 + 0xb4a6) == '\0') {
      *(undefined1 *)(param_10 + 0xb4a6) = 1;
      puStack_a = (undefined2 *)0x11f2;
      puStack_c = (undefined2 *)0xf977;
      func_0x0000b1d8();
      puStack_a = (undefined2 *)0x885;
      puStack_c = (undefined2 *)0xf980;
      func_0x0000daa6();
    }
    puVar8 = &uStack_1e;
    unaff_SI = &param_1;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar18 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *puVar2 = *puVar18;
    }
    func_0x00018396();
    puStack_a = (undefined2 *)*(undefined2 *)0x148;
    puStack_c = (undefined2 *)0x11f2;
    puStack_e = (undefined2 *)0xf9a8;
    puVar18 = (undefined2 *)func_0x0000013f();
    in_BX = (undefined2 *)puVar18;
    bVar17 = false;
    *(byte *)(in_BX + 10) = *(byte *)(in_BX + 10) | 0x20;
  }
  else {
    if (0 < (int)param_12) {
      local_34 = param_3;
      local_32 = param_4;
      puStack_a = (undefined2 *)0xf9d3;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xf9d8;
      func_0x00029d78();
      uStack_12._2_2_ = 0x22b2;
      uStack_12._0_2_ = 0xf9e2;
      func_0x000299d1();
      uStack_12._2_2_ = 0x22b2;
      uStack_12._0_2_ = 0xf9ea;
      func_0x000297e6();
      uStack_12._2_2_ = 0x22b2;
      uStack_12._0_2_ = 0xf9f2;
      func_0x0002996b();
      uStack_12._2_2_ = 0x22b2;
      uStack_12._0_2_ = 0xf9f7;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = 0xfa01;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = 0x22b2;
      uStack_1c = 0xfa0a;
      puVar8 = (undefined2 *)FUN_1def_05d1();
      local_30 = (undefined2 *)*puVar8;
      local_2e = (undefined2 *)puVar8[1];
      puStack_a = (undefined2 *)0xfa22;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xfa27;
      func_0x00029d78();
      uStack_12._2_2_ = 0x22b2;
      uStack_12._0_2_ = 0xfa31;
      func_0x000299d1();
      uStack_12._2_2_ = 0x22b2;
      uStack_12._0_2_ = 0xfa39;
      func_0x000297e6();
      uStack_12._2_2_ = 0x22b2;
      uStack_12._0_2_ = 0xfa3e;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = 0xfa48;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = 0x22b2;
      uStack_1c = 0xfa51;
      puVar8 = (undefined2 *)func_0x0001e558();
      local_3c = *puVar8;
      local_3a = puVar8[1];
      local_28 = local_30;
      local_26 = local_2e;
      puStack_a = (undefined2 *)0xfa75;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xfa7a;
      func_0x00029d78();
      puStack_a = (undefined2 *)0xfa82;
      func_0x00029c44();
      puStack_a = (undefined2 *)0xfa87;
      local_3e = FUN_28b3_0f51();
      local_4c = (undefined2 *)(local_3e - 2);
      puStack_a = (undefined2 *)0xfa97;
      FUN_28b3_0d8b();
      puStack_a = (undefined2 *)0xfa9c;
      func_0x00029d78();
      puStack_a = (undefined2 *)0xfaa4;
      func_0x00029c2c();
      puStack_a = (undefined2 *)0xfaac;
      func_0x00029983();
      local_2a = param_6;
      local_34 = param_7;
      local_32 = param_8;
      puStack_a = (undefined2 *)0xfacc;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xfad1;
      func_0x00029d78();
      uStack_12._2_2_ = 0x22b2;
      uStack_12._0_2_ = 0xfadb;
      func_0x000299d1();
      uStack_12._2_2_ = 0x22b2;
      uStack_12._0_2_ = 0xfae3;
      func_0x000297e6();
      uStack_12._2_2_ = 0x22b2;
      uStack_12._0_2_ = 0xfae8;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = 0xfaf2;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = 0x22b2;
      uStack_1c = 0xfafb;
      puVar8 = (undefined2 *)FUN_1def_05d1();
      uVar14 = *puVar8;
      local_36 = puVar8[1];
      if (param_12 == 1) {
        puStack_a = (undefined2 *)0xfb1e;
        func_0x00029834();
        puStack_a = (undefined2 *)0xfb23;
        func_0x00029af6();
      }
      else {
        puStack_a = (undefined2 *)0xfb2d;
        func_0x00029834();
      }
      puStack_a = (undefined2 *)0xfb35;
      func_0x00029983();
      uVar15 = param_12 < 4;
      if (param_12 == 4) {
        uStack_12._0_2_ = 10000;
        uStack_12._2_2_ = 0;
        puStack_a = (undefined2 *)0xfb50;
        func_0x00029834();
        puStack_a = (undefined2 *)0xfb58;
        func_0x00029983();
        puStack_a = (undefined2 *)0xfb60;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xfb65;
        func_0x00029d78();
        uStack_12._2_2_ = 0x22b2;
        uStack_12._0_2_ = 0xfb6f;
        func_0x000299d1();
        uStack_12._2_2_ = 0x22b2;
        uStack_12._0_2_ = 0xfb77;
        func_0x000297e6();
        uStack_12._2_2_ = 0x22b2;
        uStack_12._0_2_ = 0xfb7c;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        local_1a = 0xfb86;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        local_1a = 0xfb8e;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        local_1a = 0xfb93;
        func_0x00029d78();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        local_28 = (undefined2 *)0x22b2;
        local_2a = (undefined2 *)0xfbb4;
        func_0x000299d1();
        local_28 = (undefined2 *)0x22b2;
        local_2a = (undefined2 *)0xfbb9;
        puVar18 = (undefined2 *)FUN_1000_0718();
        uVar9 = (uint)((ulong)puVar18 >> 0x10);
        puStack_24 = (undefined2 *)puVar18;
        uVar15 = (undefined1 *)0xffdf < &local_26;
        uVar16 = &stack0x0000 == (undefined1 *)0x6;
        puStack_a = (undefined2 *)0xfbca;
        func_0x00029834();
        puStack_a = (undefined2 *)0xfbd3;
        func_0x00029834();
        puStack_a = (undefined2 *)0xfbdb;
        func_0x00029c74();
        puStack_a = (undefined2 *)0xfbe0;
        FUN_28b3_1181();
        if ((bool)uVar15) {
          puStack_a = (undefined2 *)0xfbeb;
          func_0x00029834();
          puStack_a = (undefined2 *)0xfbf3;
          func_0x00029c44();
          puStack_a = (undefined2 *)0xfbfb;
          func_0x00029c2c();
          puStack_a = (undefined2 *)0xfc00;
          uStack_12 = FUN_28b3_0f51();
        }
        puStack_a = (undefined2 *)0xfc0e;
        func_0x00029834();
        puStack_a = (undefined2 *)0xfc16;
        func_0x00029834();
        puStack_a = (undefined2 *)0xfc1f;
        func_0x00029bfc();
        puStack_a = (undefined2 *)0xfc24;
        FUN_28b3_1181();
        if (!(bool)uVar15 && !(bool)uVar16) {
          puStack_a = (undefined2 *)0xfc2f;
          func_0x00029834();
          puStack_a = (undefined2 *)0xfc37;
          func_0x00029c44();
          puStack_a = (undefined2 *)0xfc3f;
          func_0x00029c2c();
          puStack_a = (undefined2 *)0xfc44;
          uVar19 = FUN_28b3_0f51();
          puStack_a = (undefined2 *)0xfc52;
          uStack_12 = uVar19;
          func_0x00029834();
          puStack_a = (undefined2 *)0xfc5a;
          func_0x00029983();
          uVar15 = 0xffa5 < uVar9;
          uVar16 = uVar9 == 0xffa6;
          puStack_a = puStack_24;
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined2 *)0xfc6d;
          puStack_24 = (undefined2 *)func_0x00021eee();
        }
      }
      else {
        uVar16 = 0;
      }
LAB_3ab8_50f5:
      puStack_a = (undefined2 *)0xfc7d;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xfc85;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xfc8d;
      func_0x00029bb5();
      puStack_a = (undefined2 *)0xfc92;
      FUN_28b3_1181();
      if ((bool)uVar15) {
        puStack_a = (undefined2 *)0xfc9f;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xfca7;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xfcaf;
        FUN_28b3_100d();
        puStack_a = (undefined2 *)0xfcb4;
        FUN_28b3_1181();
        if ((bool)uVar15 || (bool)uVar16) goto code_r0x0003fcb6;
        uVar15 = param_12 == 0;
        uVar16 = param_12 == 1;
        puVar8 = unaff_DI;
        if (!(bool)uVar16) {
          uVar15 = param_12 < 2;
          uVar16 = param_12 == 2;
          uVar10 = extraout_DX;
          if (!(bool)uVar16) goto LAB_3ab8_5273;
        }
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x00029c74();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029983();
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029bfc();
        func_0x0002996b();
        FUN_28b3_1181();
        if ((bool)uVar15) {
          unaff_SI = local_28;
          puVar8 = local_26;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar15 && !(bool)uVar16) {
          puStack_a = (undefined2 *)uVar14;
        }
        func_0x000297e6();
        func_0x00029d78();
        local_28 = (undefined2 *)0x22b2;
        local_2a = (undefined2 *)0xfd91;
        func_0x000299d1();
        local_28 = (undefined2 *)0x22b2;
        local_2a = (undefined2 *)0xfd99;
        func_0x000297e6();
        local_28 = (undefined2 *)0x22b2;
        local_2a = (undefined2 *)0xfd9e;
        func_0x00029d78();
        local_30 = (undefined2 *)0x22b2;
        local_32 = 0xfda8;
        func_0x000299d1();
        local_30 = (undefined2 *)0x22b2;
        local_32 = 0xfdb0;
        func_0x000297e6();
        local_30 = (undefined2 *)0x22b2;
        local_32 = 0xfdb5;
        func_0x00029d78();
        local_3a = 0xfdbf;
        func_0x000299d1();
        local_3a = 0xfdc7;
        func_0x000297e6();
        local_3a = 0xfdcc;
        func_0x00029d78();
        puStack_42 = (undefined2 *)0xfdd6;
        func_0x000299d1();
        unaff_DI = &uStack_54;
        puVar12 = &param_1;
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = unaff_DI;
          unaff_DI = unaff_DI + 1;
          puVar18 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar2 = *puVar18;
        }
        uStack_58 = 0xfde9;
        uVar19 = FUN_3ab8_4c77();
        uVar10 = (undefined2)((ulong)uVar19 >> 0x10);
        unaff_ES = unaff_SS;
LAB_3ab8_5273:
        if (param_12 == 2) {
          func_0x000297e6();
          func_0x00029bfc();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029c74();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x00029d78();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xfe6b;
          func_0x000299d1();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xfe73;
          func_0x000297e6();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xfe78;
          func_0x00029d78();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0xfe82;
          func_0x000299d1();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0xfe8a;
          func_0x000297e6();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0xfe8f;
          func_0x00029d78();
          local_3a = 0xfe99;
          func_0x000299d1();
          local_3a = 0xfea1;
          func_0x000297e6();
          local_3a = 0xfea6;
          func_0x00029d78();
          puStack_42 = (undefined2 *)0xfeb0;
          func_0x000299d1();
          unaff_DI = &uStack_54;
          puVar12 = &param_1;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = unaff_DI;
            unaff_DI = unaff_DI + 1;
            puVar18 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar2 = *puVar18;
          }
          uStack_58 = 0xfec3;
          uVar19 = FUN_3ab8_4c77();
          uVar10 = (undefined2)((ulong)uVar19 >> 0x10);
          unaff_ES = unaff_SS;
        }
        if (param_12 == 3) {
          func_0x000297e6();
          func_0x00029bfc();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029c74();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x00029d78();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xff52;
          func_0x000299d1();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xff5a;
          func_0x000297e6();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xff5f;
          func_0x00029d78();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0xff69;
          func_0x000299d1();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0xff71;
          func_0x000297e6();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0xff76;
          func_0x00029d78();
          local_3a = 0xff80;
          func_0x000299d1();
          local_3a = 0xff88;
          func_0x000297e6();
          local_3a = 0xff8d;
          func_0x00029d78();
          puStack_42 = (undefined2 *)0xff97;
          func_0x000299d1();
          puVar12 = &uStack_54;
          puVar8 = &param_1;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar12;
            puVar12 = puVar12 + 1;
            puVar18 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar18;
          }
          uStack_58 = 0xffaa;
          FUN_3ab8_4c77();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c74();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x00029d78();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xfff0;
          func_0x000299d1();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xfff8;
          func_0x000297e6();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xfffd;
          func_0x00029d78();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 7;
          func_0x000299d1();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0xf;
          func_0x000297e6();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0x14;
          func_0x00029d78();
          local_3a = 0x1e;
          func_0x000299d1();
          local_3a = 0x26;
          func_0x000297e6();
          local_3a = 0x2b;
          func_0x00029d78();
          local_3a = 0x33;
          func_0x00029c74();
          local_3a = 0x3b;
          func_0x0002996b();
          local_3a = 0x40;
          func_0x00029d78();
          puStack_42 = (undefined2 *)0x4a;
          func_0x000299d1();
          puVar12 = &uStack_54;
          puVar8 = &param_1;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar12;
            puVar12 = puVar12 + 1;
            puVar18 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar18;
          }
          uStack_58 = 0x5d;
          FUN_4375_c0a7();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x00029d78();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xa3;
          func_0x000299d1();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xab;
          func_0x000297e6();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xb0;
          func_0x00029d78();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xb8;
          func_0x00029c74();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xc0;
          func_0x0002996b();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0xc5;
          func_0x00029d78();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0xcf;
          func_0x000299d1();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0xd7;
          func_0x000297e6();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0xdc;
          func_0x00029d78();
          local_3a = 0xe6;
          func_0x000299d1();
          local_3a = 0xee;
          func_0x000297e6();
          local_3a = 0xf3;
          func_0x00029d78();
          puStack_42 = (undefined2 *)0xfd;
          func_0x000299d1();
          puVar12 = &uStack_54;
          puVar8 = &param_1;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar12;
            puVar12 = puVar12 + 1;
            puVar18 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar18;
          }
          uStack_58 = 0x110;
          FUN_4375_c0a7();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x00029d78();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0x156;
          func_0x000299d1();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0x15e;
          func_0x000297e6();
          local_28 = (undefined2 *)0x22b2;
          local_2a = (undefined2 *)0x163;
          func_0x00029d78();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0x16d;
          func_0x000299d1();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0x175;
          func_0x000297e6();
          local_30 = (undefined2 *)0x22b2;
          local_32 = 0x17a;
          func_0x00029d78();
          local_3a = 0x184;
          func_0x000299d1();
          local_3a = 0x18c;
          func_0x000297e6();
          local_3a = 0x191;
          func_0x00029d78();
          local_3a = 0x199;
          func_0x00029bfc();
          local_3a = 0x1a1;
          func_0x0002996b();
          local_3a = 0x1a6;
          func_0x00029d78();
          puStack_42 = (undefined2 *)0x1b0;
          func_0x000299d1();
          puVar12 = &uStack_54;
          puVar8 = &param_1;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar12;
            puVar12 = puVar12 + 1;
            puVar18 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar18;
          }
          uStack_58 = 0x1c3;
          FUN_4375_c0a7();
          if (param_12 == 4) {
            uStack_64 = uStack_16;
            uStack_62 = uStack_14;
            uStack_51 = *(undefined1 *)0xa6a;
            uStack_52 = *(undefined1 *)0xa6c;
            puStack_50 = (undefined2 *)CONCAT11(puStack_50._1_1_,*(undefined1 *)0xb310);
            uStack_60 = (undefined2)uStack_12;
            uStack_54 = 0x14c;
            uStack_5c = 0;
            uStack_5e = 0;
            uStack_58 = 0;
            uStack_5a = 0;
            func_0x000297e6();
            local_28 = (undefined2 *)0x22b2;
            local_2a = (undefined2 *)0x226;
            func_0x000299d1();
            local_28 = (undefined2 *)0x22b2;
            local_2a = (undefined2 *)0x22e;
            func_0x000297e6();
            local_30 = (undefined2 *)0x22b2;
            local_32 = 0x238;
            func_0x000299d1();
            local_30 = (undefined2 *)0x0;
            local_32 = 0x22b2;
            local_34 = 0x240;
            puVar8 = (undefined2 *)FUN_1def_05d1();
            puStack_6c = (undefined2 *)*puVar8;
            uStack_6a = puVar8[1];
            func_0x000297e6();
            local_28 = (undefined2 *)0x22b2;
            local_2a = (undefined2 *)0x262;
            func_0x000299d1();
            local_28 = (undefined2 *)0x22b2;
            local_2a = (undefined2 *)0x26a;
            func_0x000297e6();
            local_30 = (undefined2 *)0x22b2;
            local_32 = 0x274;
            func_0x000299d1();
            local_30 = (undefined2 *)0x0;
            local_32 = 0x22b2;
            local_34 = 0x27c;
            puVar8 = (undefined2 *)func_0x0001e558();
            uStack_68 = *puVar8;
            uStack_66 = puVar8[1];
            puVar13 = &local_3e;
            ppuVar11 = &puStack_6c;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar18 = puVar13;
              puVar13 = puVar13 + 1;
              ppuVar3 = ppuVar11;
              ppuVar11 = ppuVar11 + 1;
              *puVar18 = *ppuVar3;
            }
            puStack_42 = (undefined2 *)0x2a0;
            FUN_13bf_01c1();
            puStack_24 = (undefined2 *)0x11f2;
            local_26 = (undefined2 *)0x2b3;
            uVar19 = func_0x00000271();
            pbVar1 = (byte *)((int)uVar19 + 0x1e);
            *pbVar1 = *pbVar1 | 0x20;
          }
          if (param_12 == 5) {
            func_0x000297e6();
            local_28 = (undefined2 *)0x22b2;
            local_2a = (undefined2 *)0x2d9;
            func_0x000299d1();
            local_28 = (undefined2 *)0x22b2;
            local_2a = (undefined2 *)0x2e1;
            func_0x000297e6();
            local_30 = (undefined2 *)0x22b2;
            local_32 = 0x2eb;
            func_0x000299d1();
            local_30 = (undefined2 *)0x0;
            local_32 = 0x22b2;
            local_34 = 0x2f3;
            puVar8 = (undefined2 *)FUN_1def_05d1();
            uStack_70 = *puVar8;
            uStack_6e = puVar8[1];
            func_0x000297e6();
            local_28 = (undefined2 *)0x22b2;
            local_2a = (undefined2 *)0x315;
            func_0x000299d1();
            local_28 = (undefined2 *)0x22b2;
            local_2a = (undefined2 *)0x31d;
            func_0x000297e6();
            local_30 = (undefined2 *)0x22b2;
            local_32 = 0x327;
            func_0x000299d1();
            local_30 = (undefined2 *)0x0;
            local_32 = 0x22b2;
            local_34 = 0x32f;
            puVar8 = (undefined2 *)func_0x0001e558();
            uStack_80 = *puVar8;
            uStack_7e = puVar8[1];
            uStack_a4 = *(uint *)0x148;
            iStack_a2 = *(int *)0x14a;
            iVar6 = 0;
            puStack_24 = (undefined2 *)0x1bb4;
            for (puStack_42 = (undefined2 *)0x1;
                (iVar6 <= iStack_a2 && ((iVar6 < iStack_a2 || (puStack_42 <= uStack_a4))));
                puStack_42 = (undefined2 *)((int)puStack_42 + 1)) {
              uVar14 = 0;
              local_26 = (undefined2 *)0x383;
              uVar19 = func_0x0000013f();
              if (*(byte *)((int)uVar19 + 0x11) < 0x5a) {
                puStack_24 = (undefined2 *)0x0;
                uVar14 = 0;
                local_26 = (undefined2 *)0x39b;
                uVar19 = func_0x0000013f();
                if ((*(byte *)((int)uVar19 + 0x14) & 2) != 0) {
                  puStack_24 = (undefined2 *)0x0;
                  local_26 = (undefined2 *)0x3b6;
                  puVar18 = (undefined2 *)func_0x0000013f();
                  puVar8 = (undefined2 *)puVar18;
                  ppuVar11 = &puStack_6c;
                  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
                    ppuVar3 = ppuVar11;
                    ppuVar11 = ppuVar11 + 1;
                    puVar2 = puVar8;
                    puVar8 = puVar8 + 1;
                    *ppuVar3 = (undefined2 *)*puVar2;
                  }
                  uStack_5a = CONCAT11(uStack_5a._1_1_,*(undefined1 *)0xb310);
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029bfc();
                  func_0x00029bb5();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029bfc();
                  func_0x00029bb5();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029bfc();
                  func_0x00029bb5();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029bfc();
                  func_0x00029bb5();
                  func_0x00029983();
                  puStack_24 = (undefined2 *)0x22b2;
                  uVar14 = 0x11f2;
                  local_26 = (undefined2 *)0x46e;
                  iVar7 = func_0x000185d3();
                  if (iVar7 != 0) {
                    if (*(char *)((uStack_5a & 0xff) + 0xb4a6) == '\0') {
                      *(undefined1 *)((uStack_5a & 0xff) + 0xb4a6) = 1;
                      puStack_24 = (undefined2 *)0x490;
                      func_0x0000b1d8();
                      puStack_24 = (undefined2 *)0x499;
                      func_0x0000daa6();
                    }
                    puVar8 = &local_36;
                    ppuVar11 = &puStack_6c;
                    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
                      puVar18 = puVar8;
                      puVar8 = puVar8 + 1;
                      ppuVar3 = ppuVar11;
                      ppuVar11 = ppuVar11 + 1;
                      *puVar18 = *ppuVar3;
                    }
                    local_3a = 0x4b1;
                    func_0x00018396();
                    puStack_24 = (undefined2 *)0x11f2;
                    uVar14 = 0;
                    local_26 = (undefined2 *)0x4c1;
                    uVar19 = func_0x0000013f();
                    pbVar1 = (byte *)((int)uVar19 + 0x14);
                    *pbVar1 = *pbVar1 | 0x20;
                  }
                }
              }
              iVar6 = iVar6 + (uint)(0xfffe < puStack_42);
              puStack_24 = (undefined2 *)uVar14;
            }
            uStack_a4 = *(uint *)0x14c;
            iStack_a2 = *(int *)0x14e;
            iVar6 = 0;
            for (puStack_42 = (undefined2 *)0x1;
                (iVar6 <= iStack_a2 && ((iVar6 < iStack_a2 || (puStack_42 <= uStack_a4))));
                puStack_42 = (undefined2 *)((int)puStack_42 + 1)) {
              local_26 = (undefined2 *)0x516;
              uVar19 = func_0x00000271();
              if (*(byte *)((int)uVar19 + 0x1b) < 0x5a) {
                puStack_24 = (undefined2 *)0x0;
                local_26 = (undefined2 *)0x52e;
                uVar19 = func_0x00000271();
                if ((*(byte *)((int)uVar19 + 0x1e) & 2) != 0) {
                  puStack_24 = (undefined2 *)0x0;
                  local_26 = (undefined2 *)0x546;
                  puVar18 = (undefined2 *)func_0x00000271();
                  puVar12 = (undefined2 *)puVar18;
                  puVar8 = &uStack_a0;
                  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                    puVar4 = puVar8;
                    puVar8 = puVar8 + 1;
                    puVar2 = puVar12;
                    puVar12 = puVar12 + 1;
                    *puVar4 = *puVar2;
                  }
                  uStack_84 = CONCAT11(uStack_84._1_1_,*(undefined1 *)0xb310);
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029bfc();
                  func_0x00029bb5();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029bfc();
                  func_0x00029bb5();
                  func_0x00029983();
                  puVar13 = &local_3e;
                  puVar8 = &uStack_a0;
                  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                    puVar2 = puVar13;
                    puVar13 = puVar13 + 1;
                    puVar18 = puVar8;
                    puVar8 = puVar8 + 1;
                    *puVar2 = *puVar18;
                  }
                  iVar6 = 0x22b2;
                  puStack_42 = (undefined2 *)0x5c3;
                  FUN_13bf_01c1();
                  puStack_24 = (undefined2 *)0x11f2;
                  local_26 = (undefined2 *)0x5d6;
                  uVar19 = func_0x00000271();
                  pbVar1 = (byte *)((int)uVar19 + 0x1e);
                  *pbVar1 = *pbVar1 | 0x20;
                }
              }
              puStack_24 = (undefined2 *)0x0;
              iVar6 = iVar6 + (uint)(0xfffe < puStack_42);
            }
            uStack_a4 = *(uint *)0x152;
            iStack_a2 = (int)uStack_a4 >> 0xf;
            for (local_3e = 1;
                ((int)local_3e >> 0xf <= iStack_a2 &&
                (((int)local_3e >> 0xf < iStack_a2 || (local_3e <= uStack_a4))));
                local_3e = local_3e + 1) {
              puStack_24 = (undefined2 *)0x618;
              uVar19 = func_0x000003ef();
              if (*(byte *)((int)uVar19 + 9) < 0x5a) {
                puStack_24 = (undefined2 *)0x62f;
                uVar19 = func_0x000003ef();
                if ((*(byte *)((int)uVar19 + 10) & 2) != 0) {
                  puStack_24 = (undefined2 *)0x646;
                  puVar18 = (undefined2 *)func_0x000003ef();
                  puVar12 = (undefined2 *)puVar18;
                  puVar8 = auStack_7c;
                  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                    puVar4 = puVar8;
                    puVar8 = puVar8 + 1;
                    puVar2 = puVar12;
                    puVar12 = puVar12 + 1;
                    *puVar4 = *puVar2;
                  }
                  bStack_74 = *(byte *)0xb310;
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029bfc();
                  func_0x00029bb5();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029bfc();
                  func_0x00029bb5();
                  func_0x00029983();
                  puStack_24 = (undefined2 *)0x6af;
                  func_0x0000daa6();
                  ppuVar11 = &local_2a;
                  puVar8 = auStack_7c;
                  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                    puVar2 = ppuVar11;
                    ppuVar11 = ppuVar11 + 1;
                    puVar18 = puVar8;
                    puVar8 = puVar8 + 1;
                    *puVar2 = *puVar18;
                  }
                  uVar14 = 0x1bb4;
                  local_2e = (undefined2 *)0x6c4;
                  iVar6 = func_0x0001efe0();
                  if (iVar6 != 0) {
                    if (*(char *)(bStack_74 + 0xb4a6) == '\0') {
                      *(undefined1 *)(bStack_74 + 0xb4a6) = 1;
                      puStack_24 = (undefined2 *)0x6e7;
                      func_0x0000b1d8();
                      uVar14 = 0x885;
                      puStack_24 = (undefined2 *)0x6f0;
                      func_0x0000daa6();
                    }
                    local_26 = (undefined2 *)0x6fe;
                    puStack_24 = (undefined2 *)uVar14;
                    func_0x0001f185();
                    puStack_24 = (undefined2 *)0x70c;
                    uVar19 = func_0x000003ef();
                    pbVar1 = (byte *)((int)uVar19 + 10);
                    *pbVar1 = *pbVar1 | 0x20;
                  }
                }
              }
            }
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar15 = in(uVar10);
        *(undefined1 *)unaff_DI = uVar15;
        while( true ) {
          FUN_32b2_7258();
          local_28 = (undefined2 *)0x32b2;
          local_2a = (undefined2 *)0x1df;
          FUN_32b2_6eb1();
          local_28 = (undefined2 *)0x32b2;
          local_2a = (undefined2 *)0x1e7;
          FUN_32b2_6cc6();
          local_28 = (undefined2 *)0x32b2;
          local_2a = (undefined2 *)0x1ec;
          FUN_32b2_7258();
          local_30 = (undefined2 *)0x32b2;
          local_32 = 0x1f6;
          FUN_32b2_6eb1();
          local_30 = (undefined2 *)0x32b2;
          local_32 = 0x1fa;
          ppuVar11 = &local_2a;
          iVar6 = FUN_3ab8_4fbd();
          if (iVar6 == 0) {
            return 0;
          }
          puStack_a = (undefined2 *)0x209;
          FUN_32b2_6cc6();
          puStack_a = (undefined2 *)0x20e;
          FUN_32b2_7258();
          puStack_a = (undefined2 *)0x216;
          FUN_32b2_6e99();
          puStack_a = (undefined2 *)0x21e;
          FUN_32b2_6ef9();
          puStack_a = (undefined2 *)auStack_a6;
          puStack_c = (undefined2 *)0x32b2;
          puStack_e = (undefined2 *)0x231;
          FUN_32b2_6cc6();
          puStack_c = (undefined2 *)0x32b2;
          puStack_e = (undefined2 *)0x236;
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
          puStack_24 = (undefined2 *)0x32b2;
          local_26 = (undefined2 *)0x269;
          FUN_32b2_6eb1();
          puStack_24 = (undefined2 *)0x32b2;
          local_26 = (undefined2 *)0x271;
          FUN_32b2_6cc6();
          puStack_24 = (undefined2 *)0x32b2;
          local_26 = (undefined2 *)0x276;
          FUN_32b2_7258();
          puStack_24 = (undefined2 *)0x32b2;
          local_26 = (undefined2 *)0x27e;
          FUN_32b2_6e99();
          local_2e = (undefined2 *)0x288;
          FUN_32b2_6eb1();
          local_2e = (undefined2 *)0x290;
          FUN_32b2_6cc6();
          local_2e = (undefined2 *)0x295;
          FUN_32b2_7258();
          local_34 = 0x32b2;
          local_36 = 0x29f;
          FUN_32b2_6eb1();
          local_34 = 0x32b2;
          local_36 = 0x2a7;
          FUN_32b2_6cc6();
          local_34 = 0x32b2;
          local_36 = 0x2ac;
          FUN_32b2_7258();
          local_3c = 0x32b2;
          local_3e = 0x2b6;
          FUN_32b2_6eb1();
          local_3c = 1;
          local_3e = 0x32b2;
          FUN_3ab8_5089();
          puStack_a = (undefined2 *)auStack_d2;
          puStack_c = (undefined2 *)0x32b2;
          puStack_e = (undefined2 *)0x2d4;
          FUN_32b2_6cc6();
          puStack_c = (undefined2 *)0x32b2;
          puStack_e = (undefined2 *)0x2d9;
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
          puStack_24 = (undefined2 *)0x32b2;
          local_26 = (undefined2 *)0x30c;
          FUN_32b2_6eb1();
          puStack_24 = (undefined2 *)0x32b2;
          local_26 = (undefined2 *)0x314;
          FUN_32b2_6d14();
          local_2e = (undefined2 *)0x31e;
          FUN_32b2_6eb1();
          local_2e = (undefined2 *)0x326;
          FUN_32b2_6cc6();
          local_2e = (undefined2 *)0x32b;
          FUN_32b2_7258();
          local_34 = 0x32b2;
          local_36 = 0x335;
          FUN_32b2_6eb1();
          local_34 = 0x32b2;
          local_36 = 0x33d;
          FUN_32b2_6cc6();
          local_34 = 0x32b2;
          local_36 = 0x342;
          FUN_32b2_7258();
          local_3c = 0x32b2;
          local_3e = 0x34c;
          FUN_32b2_6eb1();
          local_3c = 1;
          local_3e = 0x32b2;
          FUN_3ab8_5089();
          uVar15 = (undefined1 *)0xffc9 < &local_3c;
          uVar16 = &stack0x0000 == (undefined1 *)0x6;
          puStack_a = (undefined2 *)0x360;
          FUN_32b2_6cc6();
          puStack_a = (undefined2 *)0x369;
          FUN_32b2_701d();
          puStack_a = (undefined2 *)0x36e;
          FUN_32b2_7258();
          puStack_a = (undefined2 *)0x376;
          FUN_32b2_6e99();
          puStack_a = (undefined2 *)0x37e;
          FUN_32b2_6ef9();
          puStack_a = (undefined2 *)0x387;
          FUN_32b2_6cc6();
          puStack_a = (undefined2 *)0x390;
          FUN_32b2_701d();
          puStack_a = (undefined2 *)0x395;
          FUN_32b2_7258();
          puStack_a = (undefined2 *)0x39e;
          FUN_32b2_6e99();
          puStack_a = (undefined2 *)0x3a6;
          FUN_32b2_6ef9();
          puStack_a = (undefined2 *)0x3af;
          FUN_32b2_6d14();
          puStack_a = (undefined2 *)0x3b4;
          FUN_32b2_6fc7();
          puStack_a = (undefined2 *)0x3bc;
          FUN_32b2_6d14();
          puStack_a = (undefined2 *)0x3c1;
          FUN_32b2_6fc7();
          puStack_a = (undefined2 *)0x3ca;
          FUN_32b2_710c();
          puStack_a = (undefined2 *)0x3cf;
          FUN_32b2_7191();
          if (!(bool)uVar15 && !(bool)uVar16) break;
          puStack_a = (undefined2 *)0x3f5;
          FUN_32b2_6d14();
          puStack_a = (undefined2 *)0x32b2;
          puStack_c = (undefined2 *)0x3ff;
          FUN_32b2_7154();
          puStack_a = (undefined2 *)0x405;
          FUN_32b2_6eb1();
          puVar5 = puStack_c;
          puVar12 = puStack_e;
          uStack_48 = puStack_a;
          puStack_a = (undefined2 *)uStack_ba;
          puStack_c = (undefined2 *)uStack_bc;
          puStack_e = (undefined2 *)uStack_be;
          uStack_12._2_2_ = 0x32b2;
          uStack_12._0_2_ = 0x119;
          puStack_44 = unaff_SI;
          puStack_42 = puVar8;
          FUN_32b2_75fe();
          puStack_a = (undefined2 *)0x32b2;
          puStack_c = (undefined2 *)0x123;
          FUN_32b2_6d14();
          puStack_a = (undefined2 *)0x32b2;
          puStack_c = (undefined2 *)0x12b;
          FUN_32b2_704d();
          puStack_a = (undefined2 *)0x32b2;
          puStack_c = (undefined2 *)0x133;
          FUN_32b2_7095();
          puStack_a = (undefined2 *)0x32b2;
          puStack_c = (undefined2 *)0x13b;
          FUN_32b2_6eb1();
          puStack_a = (undefined2 *)uStack_b8;
          puStack_c = (undefined2 *)uStack_ba;
          puStack_e = (undefined2 *)uStack_bc;
          uStack_12._2_2_ = uStack_be;
          uStack_12._0_2_ = 0x32b2;
          uStack_14 = 0x150;
          FUN_32b2_75ec();
          uVar15 = &stack0x0000 == (undefined1 *)0xa;
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
          if ((bool)uVar15) {
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x192;
            FUN_32b2_6cc6();
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x19a;
            FUN_32b2_6cc6();
            puStack_c = (undefined2 *)0x32b2;
            puStack_e = (undefined2 *)0x19f;
            FUN_32b2_7191();
            if ((bool)uVar15) {
              return 0;
            }
          }
          puStack_c = (undefined2 *)auStack_aa;
          puStack_e = &uStack_1e;
          uStack_12._2_2_ = uStack_7e;
          uStack_12._0_2_ = uStack_80;
          uStack_14 = uStack_82;
          uStack_16 = uStack_84;
          uStack_18 = uStack_5a;
          local_1a = uStack_5c;
          uStack_1c = uStack_5e;
          uStack_1e = uStack_60;
          FUN_32b2_6cc6();
          unaff_SI = puVar12;
          puVar8 = puVar5;
        }
        puStack_a = (undefined2 *)0x3da;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x3e2;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x3e7;
        FUN_32b2_7191();
        if ((bool)uVar16) {
          return 0;
        }
        puStack_a = (undefined2 *)0x431;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x439;
        FUN_32b2_7124();
        puStack_a = (undefined2 *)0x441;
        FUN_32b2_6e99();
        puStack_a = (undefined2 *)0x44a;
        FUN_32b2_704d();
        puStack_a = (undefined2 *)0x453;
        FUN_32b2_7035();
        puStack_a = (undefined2 *)0x45c;
        FUN_32b2_6e99();
        puStack_a = (undefined2 *)0x464;
        FUN_32b2_6eb1();
        puStack_a = (undefined2 *)0x46c;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x474;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x47c;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x484;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x48c;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x494;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x49d;
        FUN_32b2_6e99();
        puStack_a = (undefined2 *)0x4a2;
        FUN_32b2_718c();
        puStack_a = (undefined2 *)0x4ab;
        FUN_32b2_6e99();
        puStack_a = (undefined2 *)0x4b3;
        FUN_32b2_6eb1();
        puStack_a = (undefined2 *)0x4bc;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x4c4;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x4cd;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x4d5;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x4dd;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x4e6;
        FUN_32b2_6e99();
        puStack_a = (undefined2 *)0x4ee;
        FUN_32b2_6eb1();
        puStack_a = (undefined2 *)0x4f7;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x500;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x509;
        FUN_32b2_70dc();
        puStack_a = (undefined2 *)0x511;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x519;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x522;
        FUN_32b2_6e99();
        puStack_a = (undefined2 *)0x52b;
        FUN_32b2_6eb1();
        puStack_a = (undefined2 *)0x534;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x53d;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x546;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x54f;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x558;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x55d;
        FUN_32b2_718c();
        puStack_a = (undefined2 *)0x566;
        FUN_32b2_6eb1();
        puStack_a = (undefined2 *)0x56f;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x574;
        FUN_32b2_6fd6();
        puStack_a = (undefined2 *)0x57d;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x586;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x58b;
        FUN_32b2_7182();
        puStack_a = (undefined2 *)0x594;
        FUN_32b2_6e99();
        puStack_a = (undefined2 *)0x59c;
        FUN_32b2_710c();
        puStack_a = (undefined2 *)0x5a5;
        FUN_32b2_7154();
        puStack_a = (undefined2 *)0x5ae;
        FUN_32b2_6e99();
        puStack_a = (undefined2 *)0x5b7;
        FUN_32b2_6eb1();
        puStack_a = (undefined2 *)0x5c0;
        FUN_32b2_6d14();
        puStack_a = (undefined2 *)0x5c9;
        FUN_32b2_6eb1();
        puStack_a = &uStack_64;
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
        puStack_24 = puStack_4a;
        local_26 = local_4c;
        local_28 = puStack_4e;
        local_2a = puStack_50;
        local_2e = (undefined2 *)0x622;
        FUN_32b2_6d14();
        local_34 = 0x32b2;
        local_36 = 0x62c;
        FUN_32b2_6eb1();
        local_34 = 0x32b2;
        local_36 = 0x635;
        FUN_32b2_6d14();
        local_3c = 0x32b2;
        local_3e = 0x63f;
        FUN_32b2_6eb1();
        local_3c = 0;
        local_3e = 0x32b2;
        FUN_3ab8_5089();
        uStack_88 = uStack_64;
        uStack_86 = uStack_62;
        uStack_a0 = uStack_8c;
        uStack_9e = uStack_8a;
        puStack_a = &uStack_88;
        puVar8 = &param_12;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = ppuVar11;
          ppuVar11 = ppuVar11 + 1;
          puVar18 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar18;
        }
                    /* WARNING: Call to offcut address within same function */
        local_2e = (undefined2 *)0x684;
        iVar6 = func_0x0003fdaf();
        uVar15 = 0;
        uVar16 = iVar6 == 0;
        if (!(bool)uVar16) {
          puStack_a = (undefined2 *)0x694;
          FUN_32b2_6d14();
          puStack_a = (undefined2 *)0x69d;
          FUN_32b2_6cc6();
          puStack_a = (undefined2 *)0x6a5;
          FUN_32b2_701d();
          puStack_a = (undefined2 *)0x6aa;
          FUN_32b2_6fc7();
          puStack_a = (undefined2 *)0x6af;
          FUN_32b2_7258();
          puStack_a = (undefined2 *)0x6b4;
          FUN_32b2_7191();
          if (!(bool)uVar15 && !(bool)uVar16) goto LAB_2bb4_4baf;
          puStack_a = (undefined2 *)0x6bf;
          FUN_32b2_6d14();
          puStack_a = (undefined2 *)0x6c8;
          FUN_32b2_6cc6();
          puStack_a = (undefined2 *)0x6d1;
          FUN_32b2_701d();
          puStack_a = (undefined2 *)0x6d6;
          FUN_32b2_6fc7();
          goto code_r0x000306d6;
        }
        goto LAB_2bb4_4baf;
      }
      uVar15 = false;
      goto code_r0x0003071f;
    }
LAB_3ab8_4dd9:
    bVar17 = SBORROW2(iVar6,iVar6);
  }
  if (bVar17) {
    return 0;
  }
  uVar15 = 0;
  uVar16 = (char)in_BX == (&stack0x6fc5)[(int)unaff_SI];
code_r0x000306d6:
  puStack_a = (undefined2 *)0x6db;
  FUN_32b2_7258();
  puStack_a = (undefined2 *)0x6e0;
  FUN_32b2_7191();
  if ((bool)uVar15 || (bool)uVar16) {
    uStack_be = *(undefined2 *)0x93c0;
    uStack_bc = *(undefined2 *)0x93c2;
    uStack_ba = *(undefined2 *)0x93c4;
    uStack_b8 = *(undefined2 *)0x93c6;
  }
LAB_2bb4_4baf:
  puStack_a = (undefined2 *)0x6f8;
  FUN_32b2_6d14();
  puStack_a = (undefined2 *)0x700;
  FUN_32b2_6d14();
  puStack_a = (undefined2 *)0x708;
  FUN_32b2_710c();
  puStack_a = (undefined2 *)0x711;
  FUN_32b2_710c();
  puStack_a = (undefined2 *)0x71a;
  FUN_32b2_7154();
  puStack_a = (undefined2 *)0x71f;
  FUN_32b2_7191();
code_r0x0003071f:
  if ((bool)uVar15) {
    return 0;
  }
  puStack_a = (undefined2 *)0x72d;
  FUN_32b2_6d14();
  puStack_a = (undefined2 *)0x732;
  FUN_32b2_6fc7();
  puStack_a = (undefined2 *)0x73a;
  FUN_32b2_6d14();
  puStack_a = (undefined2 *)0x742;
  FUN_32b2_710c();
  puStack_a = (undefined2 *)0x74b;
  FUN_32b2_710c();
  puStack_a = (undefined2 *)0x750;
  FUN_32b2_7191();
  if (!(bool)uVar15) {
    uStack_be = *(undefined2 *)0x93c0;
    uStack_bc = *(undefined2 *)0x93c2;
    uStack_ba = *(undefined2 *)0x93c4;
    uStack_b8 = *(undefined2 *)0x93c6;
  }
  puStack_a = (undefined2 *)uStack_ba;
  puStack_c = (undefined2 *)uStack_bc;
  puStack_e = (undefined2 *)uStack_be;
  uStack_12._2_2_ = 0x32b2;
  uStack_12._0_2_ = 0x774;
  FUN_32b2_7592();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x77e;
  FUN_32b2_6d14();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x786;
  FUN_32b2_70dc();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x78e;
  FUN_32b2_6d14();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x797;
  FUN_32b2_710c();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x79c;
  FUN_32b2_7182();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x7a5;
  FUN_32b2_6e99();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x7ad;
  FUN_32b2_710c();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x7b5;
  FUN_32b2_7154();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x7be;
  FUN_32b2_6e99();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x7c7;
  FUN_32b2_6eb1();
  puStack_a = &uStack_8c;
  puStack_c = &uStack_64;
  puStack_e = (undefined2 *)0x32b2;
  uStack_12._2_2_ = 0x7d9;
  FUN_32b2_6cc6();
  puStack_e = (undefined2 *)0x32b2;
  uStack_12._2_2_ = 0x7de;
  FUN_32b2_7258();
  uStack_16 = 0x32b2;
  uStack_18 = 0x7e8;
  FUN_32b2_6eb1();
  uStack_16 = 0x32b2;
  uStack_18 = 0x7f0;
  FUN_32b2_6cc6();
  uStack_16 = 0x32b2;
  uStack_18 = 0x7f5;
  FUN_32b2_7258();
  uStack_1e = 0x32b2;
  FUN_32b2_6eb1();
  uStack_1e = uStack_66;
  puStack_24 = puStack_6c;
  local_26 = puStack_4a;
  local_28 = local_4c;
  local_2a = puStack_4e;
  local_2e = (undefined2 *)0x32b2;
  local_30 = (undefined2 *)0x820;
  FUN_32b2_6d14();
  local_36 = 0x32b2;
  FUN_32b2_6eb1();
  local_36 = 0x32b2;
  FUN_32b2_6d14();
  local_3e = 0x32b2;
  FUN_32b2_6eb1();
  local_3e = 0;
  puStack_42 = (undefined2 *)0x844;
  FUN_3ab8_5089();
  uVar15 = (undefined1 *)0xffc9 < &local_3e;
  uVar16 = &stack0x0000 == (undefined1 *)0x8;
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x84f;
  FUN_32b2_6cc6();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x857;
  FUN_32b2_6cc6();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x85c;
  FUN_32b2_7191();
  if ((bool)uVar16) {
    uStack_64 = param_1;
    uStack_62 = param_2;
  }
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x872;
  FUN_32b2_6cc6();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x87a;
  FUN_32b2_6cc6();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x87f;
  FUN_32b2_7191();
  if ((bool)uVar16) {
    uStack_8c = param_3;
    uStack_8a = param_4;
  }
  *in_stack_0000003a = uStack_64;
  in_stack_0000003a[1] = uStack_62;
  *in_stack_0000003c = uStack_8c;
  in_stack_0000003c[1] = uStack_8a;
  *in_stack_0000003e = uStack_64;
  in_stack_0000003e[1] = uStack_62;
  *in_stack_00000040 = uStack_8c;
  in_stack_00000040[1] = uStack_8a;
  uVar16 = 0;
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x8d7;
  FUN_32b2_6d14();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x8e0;
  FUN_32b2_6d14();
  puStack_a = (undefined2 *)0x32b2;
  puStack_c = (undefined2 *)0x8e5;
  FUN_32b2_7191();
  if (!(bool)uVar15 && !(bool)uVar16) {
    puStack_a = (undefined2 *)uStack_b8;
    puStack_c = (undefined2 *)uStack_ba;
    puStack_e = (undefined2 *)uStack_bc;
    uStack_12._2_2_ = uStack_be;
    uStack_12._0_2_ = 0x32b2;
    uStack_14 = 0x8ff;
    FUN_32b2_7592();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x909;
    FUN_32b2_6d14();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x911;
    FUN_32b2_7154();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x916;
    FUN_32b2_6fd6();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x91e;
    FUN_32b2_6d14();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x927;
    FUN_32b2_710c();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x92c;
    FUN_32b2_7182();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x935;
    FUN_32b2_6e99();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x93d;
    FUN_32b2_710c();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x945;
    FUN_32b2_7154();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x94e;
    FUN_32b2_6e99();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x957;
    FUN_32b2_6eb1();
    puStack_c = &uStack_8c;
    puStack_e = &uStack_64;
    uStack_12._2_2_ = 0x32b2;
    uStack_12._0_2_ = 0x969;
    FUN_32b2_6cc6();
    uStack_12._2_2_ = 0x32b2;
    uStack_12._0_2_ = 0x96e;
    FUN_32b2_7258();
    uStack_18 = 0x32b2;
    local_1a = 0x978;
    FUN_32b2_6eb1();
    uStack_18 = 0x32b2;
    local_1a = 0x980;
    FUN_32b2_6cc6();
    uStack_18 = 0x32b2;
    local_1a = 0x985;
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    puStack_24 = (undefined2 *)uStack_6a;
    local_26 = puStack_6c;
    local_28 = puStack_4a;
    local_2a = local_4c;
    local_2e = puStack_50;
    local_30 = (undefined2 *)0x32b2;
    local_32 = 0x9b0;
    FUN_32b2_6d14();
    local_3a = 0x9ba;
    FUN_32b2_6eb1();
    local_3a = 0x9c3;
    FUN_32b2_6d14();
    puStack_42 = (undefined2 *)0x9cd;
    FUN_32b2_6eb1();
    puStack_42 = (undefined2 *)0x32b2;
    puStack_44 = (undefined2 *)0x9d4;
    FUN_3ab8_5089();
    uVar15 = &stack0x0000 == (undefined1 *)0xa;
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x9df;
    FUN_32b2_6cc6();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x9e7;
    FUN_32b2_6cc6();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0x9ec;
    FUN_32b2_7191();
    if ((bool)uVar15) {
      uStack_64 = param_1;
      uStack_62 = param_2;
    }
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0xa02;
    FUN_32b2_6cc6();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0xa0a;
    FUN_32b2_6cc6();
    puStack_c = (undefined2 *)0x32b2;
    puStack_e = (undefined2 *)0xa0f;
    FUN_32b2_7191();
    if ((bool)uVar15) {
      uStack_8c = param_3;
      uStack_8a = param_4;
    }
    *in_stack_0000003e = uStack_64;
    in_stack_0000003e[1] = uStack_62;
    *in_stack_00000040 = uStack_8c;
    in_stack_00000040[1] = uStack_8a;
    return 0x32b3;
  }
  return 0x834;
code_r0x0003fcb6:
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c74();
  func_0x00029983();
  goto LAB_3ab8_50f5;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  204 bytes, 2 callers */

/* WARNING: Instruction at (ram,0x0003071a) overlaps instruction at (ram,0x00030719)
    */
/* WARNING: Control flow encountered bad instruction data */

undefined2 FUN_3ab8_4fbd(void)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  int iVar8;
  uint in_AX;
  undefined2 extraout_DX;
  char *in_BX;
  int unaff_BP;
  undefined2 *puVar9;
  uint unaff_DI;
  undefined2 *puVar10;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  int iStack_6;
  
  puVar10 = (undefined2 *)(unaff_DI + in_AX);
  LOCK();
  *in_BX = *in_BX + (char)(in_AX >> 8) + CARRY2(unaff_DI,in_AX);
  UNLOCK();
  *(undefined2 *)(unaff_BP + -0xe) = 0;
  func_0x00029834();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xfb6f;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xfb77;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xfb7c;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfb86;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfb8e;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfb93;
  func_0x00029d78();
  uStack_1c = 0xfb9d;
  func_0x000299d1();
  uStack_1c = 0xfba5;
  func_0x000297e6();
  uStack_1c = 0xfbaa;
  func_0x00029d78();
  uStack_24 = 0xfbb4;
  func_0x000299d1();
  uStack_24 = 0xfbb9;
  uVar13 = FUN_1000_0718();
  uVar11 = (undefined1 *)0xffdf < &uStack_20;
  uVar12 = &stack0x0000 == (undefined1 *)0x0;
  *(undefined2 *)(unaff_BP + -0x22) = (int)uVar13;
  *(undefined2 *)(unaff_BP + -0x20) = (int)((ulong)uVar13 >> 0x10);
  func_0x00029834();
  func_0x00029834();
  func_0x00029c74();
  FUN_28b3_1181();
  if ((bool)uVar11) {
    func_0x00029834();
    func_0x00029c44();
    func_0x00029c2c();
    uVar13 = FUN_28b3_0f51();
    *(undefined2 *)(unaff_BP + -0x10) = (int)uVar13;
    *(undefined2 *)(unaff_BP + -0xe) = (int)((ulong)uVar13 >> 0x10);
  }
  func_0x00029834();
  func_0x00029834();
  func_0x00029bfc();
  FUN_28b3_1181();
  if (!(bool)uVar11 && !(bool)uVar12) {
    func_0x00029834();
    func_0x00029c44();
    func_0x00029c2c();
    uVar13 = FUN_28b3_0f51();
    *(undefined2 *)(unaff_BP + -0x10) = (int)uVar13;
    *(undefined2 *)(unaff_BP + -0xe) = (int)((ulong)uVar13 >> 0x10);
    func_0x00029834();
    func_0x00029983();
    uVar11 = 0xffa5 < *(uint *)(unaff_BP + -0x20);
    uVar12 = *(uint *)(unaff_BP + -0x20) == 0xffa6;
    iStack_6 = 0x22b2;
    iStack_8 = 0xfc6d;
    uVar13 = func_0x00021eee();
    *(undefined2 *)(unaff_BP + -0x22) = (int)uVar13;
    *(undefined2 *)(unaff_BP + -0x20) = (int)((ulong)uVar13 >> 0x10);
  }
LAB_3ab8_50f5:
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029bb5();
  FUN_28b3_1181();
  if (!(bool)uVar11) {
    uVar11 = false;
code_r0x0003071f:
    if ((bool)uVar11) {
LAB_2bb4_4661:
      uVar7 = 0;
    }
    else {
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
      uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
      uStack_26 = *(undefined2 *)(unaff_BP + -0x4e);
      uStack_28 = 0x32b2;
      uStack_2a = 0x820;
      FUN_32b2_6d14();
      uStack_30 = 0x32b2;
      uStack_32 = 0x82a;
      FUN_32b2_6eb1();
      uStack_30 = 0x32b2;
      uStack_32 = 0x833;
      FUN_32b2_6d14();
      FUN_32b2_6eb1();
      FUN_3ab8_5089();
      uVar11 = (undefined1 *)0xffc9 < &stack0xffc8;
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
        uStack_1c = 0x98f;
        FUN_32b2_6eb1();
        uStack_1c = *(undefined2 *)(unaff_BP + -0x66);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_26 = *(undefined2 *)(unaff_BP + -0x4c);
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
        FUN_3ab8_5089(0);
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
      uVar7 = *(undefined2 *)(unaff_BP + -0x36);
    }
    return uVar7;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_100d();
  FUN_28b3_1181();
  if ((bool)uVar11 || (bool)uVar12) goto code_r0x0003fcb6;
  uVar11 = *(int *)(unaff_BP + 0x1c) == 0;
  uVar12 = *(int *)(unaff_BP + 0x1c) == 1;
  if (!(bool)uVar12) {
    uVar11 = *(uint *)(unaff_BP + 0x1c) < 2;
    uVar12 = *(uint *)(unaff_BP + 0x1c) == 2;
    uVar7 = extraout_DX;
    if (!(bool)uVar12) goto LAB_3ab8_5273;
  }
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029c74();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029983();
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029bfc();
  func_0x0002996b();
  FUN_28b3_1181();
  if ((bool)uVar11) {
    uVar7 = *(undefined2 *)(unaff_BP + -0x24);
    *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0x26);
    *(undefined2 *)(unaff_BP + -2) = uVar7;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)uVar11 && !(bool)uVar12) {
    uVar7 = *(undefined2 *)(unaff_BP + -0x34);
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x36);
    *(undefined2 *)(unaff_BP + -6) = uVar7;
  }
  func_0x000297e6();
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xfd91;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xfd99;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xfd9e;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfda8;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfdb0;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfdb5;
  func_0x00029d78();
  uStack_1c = 0xfdbf;
  func_0x000299d1();
  uStack_1c = 0xfdc7;
  func_0x000297e6();
  uStack_1c = 0xfdcc;
  func_0x00029d78();
  uStack_24 = 0xfdd6;
  func_0x000299d1();
  puVar10 = &uStack_36;
  puVar9 = (undefined2 *)(unaff_BP + 6);
  for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar5 = puVar10;
    puVar10 = puVar10 + 1;
    puVar14 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar5 = *puVar14;
  }
  uVar13 = FUN_3ab8_4c77();
  uVar7 = (undefined2)((ulong)uVar13 >> 0x10);
  unaff_ES = unaff_SS;
  if ((int)uVar13 != 0) {
    *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
  }
LAB_3ab8_5273:
  if (*(int *)(unaff_BP + 0x1c) == 2) {
    func_0x000297e6();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029c74();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xfe6b;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xfe73;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xfe78;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe82;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe8a;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe8f;
    func_0x00029d78();
    uStack_1c = 0xfe99;
    func_0x000299d1();
    uStack_1c = 0xfea1;
    func_0x000297e6();
    uStack_1c = 0xfea6;
    func_0x00029d78();
    uStack_24 = 0xfeb0;
    func_0x000299d1();
    puVar10 = &uStack_36;
    puVar9 = (undefined2 *)(unaff_BP + 6);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar5 = *puVar14;
    }
    uVar13 = FUN_3ab8_4c77();
    uVar7 = (undefined2)((ulong)uVar13 >> 0x10);
    unaff_ES = unaff_SS;
    if ((int)uVar13 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
  }
  if (*(int *)(unaff_BP + 0x1c) == 3) {
    func_0x000297e6();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029bfc();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029c74();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xff52;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xff5a;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xff5f;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xff69;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xff71;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xff76;
    func_0x00029d78();
    uStack_1c = 0xff80;
    func_0x000299d1();
    uStack_1c = 0xff88;
    func_0x000297e6();
    uStack_1c = 0xff8d;
    func_0x00029d78();
    uStack_24 = 0xff97;
    func_0x000299d1();
    puVar9 = &uStack_36;
    puVar10 = (undefined2 *)(unaff_BP + 6);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar9;
      puVar9 = puVar9 + 1;
      puVar14 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar5 = *puVar14;
    }
    iVar8 = FUN_3ab8_4c77();
    if (iVar8 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c74();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xfff0;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xfff8;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xfffd;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 7;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xf;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0x14;
    func_0x00029d78();
    uStack_1c = 0x1e;
    func_0x000299d1();
    uStack_1c = 0x26;
    func_0x000297e6();
    uStack_1c = 0x2b;
    func_0x00029d78();
    uStack_1c = 0x33;
    func_0x00029c74();
    uStack_1c = 0x3b;
    func_0x0002996b();
    uStack_1c = 0x40;
    func_0x00029d78();
    uStack_24 = 0x4a;
    func_0x000299d1();
    puVar9 = &uStack_36;
    puVar10 = (undefined2 *)(unaff_BP + 6);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar9;
      puVar9 = puVar9 + 1;
      puVar14 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar5 = *puVar14;
    }
    iVar8 = FUN_4375_c0a7();
    if (iVar8 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xa3;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xab;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xb0;
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xb8;
    func_0x00029c74();
    uStack_a = 0x22b2;
    uStack_c = 0xc0;
    func_0x0002996b();
    uStack_a = 0x22b2;
    uStack_c = 0xc5;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xcf;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xd7;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xdc;
    func_0x00029d78();
    uStack_1c = 0xe6;
    func_0x000299d1();
    uStack_1c = 0xee;
    func_0x000297e6();
    uStack_1c = 0xf3;
    func_0x00029d78();
    uStack_24 = 0xfd;
    func_0x000299d1();
    puVar9 = &uStack_36;
    puVar10 = (undefined2 *)(unaff_BP + 6);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar9;
      puVar9 = puVar9 + 1;
      puVar14 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar5 = *puVar14;
    }
    iVar8 = FUN_4375_c0a7();
    if (iVar8 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0x156;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0x15e;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0x163;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0x16d;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0x175;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0x17a;
    func_0x00029d78();
    uStack_1c = 0x184;
    func_0x000299d1();
    uStack_1c = 0x18c;
    func_0x000297e6();
    uStack_1c = 0x191;
    func_0x00029d78();
    uStack_1c = 0x199;
    func_0x00029bfc();
    uStack_1c = 0x1a1;
    func_0x0002996b();
    uStack_1c = 0x1a6;
    func_0x00029d78();
    uStack_24 = 0x1b0;
    func_0x000299d1();
    puVar9 = &uStack_36;
    puVar10 = (undefined2 *)(unaff_BP + 6);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar9;
      puVar9 = puVar9 + 1;
      puVar14 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar5 = *puVar14;
    }
    iVar8 = FUN_4375_c0a7();
    if (iVar8 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    if (*(int *)(unaff_BP + 0x1c) == 4) {
      uVar7 = *(undefined2 *)(unaff_BP + -0x12);
      *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + -0x14);
      *(undefined2 *)(unaff_BP + -0x60) = uVar7;
      *(undefined1 *)(unaff_BP + -0x4f) = *(undefined1 *)0xa6a;
      *(undefined1 *)(unaff_BP + -0x50) = *(undefined1 *)0xa6c;
      *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xb310;
      *(undefined2 *)(unaff_BP + -0x5e) = *(undefined2 *)(unaff_BP + -0x10);
      uVar7 = *(undefined2 *)(unaff_BP + -0x20);
      *(undefined2 *)(unaff_BP + -0x54) = *(undefined2 *)(unaff_BP + -0x22);
      *(undefined2 *)(unaff_BP + -0x52) = uVar7;
      *(undefined2 *)(unaff_BP + -0x5a) = 0;
      *(undefined2 *)(unaff_BP + -0x5c) = 0;
      *(undefined2 *)(unaff_BP + -0x56) = 0;
      *(undefined2 *)(unaff_BP + -0x58) = 0;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x226;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x22e;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x238;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x240;
      puVar10 = (undefined2 *)FUN_1def_05d1();
      uVar7 = puVar10[1];
      *(undefined2 *)(unaff_BP + -0x6a) = *puVar10;
      *(undefined2 *)(unaff_BP + -0x68) = uVar7;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x262;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x26a;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x274;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x27c;
      puVar10 = (undefined2 *)func_0x0001e558();
      uVar7 = puVar10[1];
      *(undefined2 *)(unaff_BP + -0x66) = *puVar10;
      *(undefined2 *)(unaff_BP + -100) = uVar7;
      puVar9 = &uStack_20;
      puVar10 = (undefined2 *)(unaff_BP + -0x6a);
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar5 = puVar9;
        puVar9 = puVar9 + 1;
        puVar14 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar5 = *puVar14;
      }
      uStack_24 = 0x2a0;
      FUN_13bf_01c1();
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
      iStack_6 = 0x11f2;
      iStack_8 = 0x2b3;
      uVar13 = func_0x00000271();
      pbVar3 = (byte *)((int)uVar13 + 0x1e);
      *pbVar3 = *pbVar3 | 0x20;
    }
    if (*(int *)(unaff_BP + 0x1c) == 5) {
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x2d9;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x2e1;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x2eb;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x2f3;
      puVar10 = (undefined2 *)FUN_1def_05d1();
      uVar7 = puVar10[1];
      *(undefined2 *)(unaff_BP + -0x6e) = *puVar10;
      *(undefined2 *)(unaff_BP + -0x6c) = uVar7;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x315;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x31d;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x327;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x32f;
      puVar10 = (undefined2 *)func_0x0001e558();
      uVar7 = puVar10[1];
      *(undefined2 *)(unaff_BP + -0x7e) = *puVar10;
      *(undefined2 *)(unaff_BP + -0x7c) = uVar7;
      uVar7 = *(undefined2 *)0x14a;
      *(undefined2 *)(unaff_BP + -0xa2) = *(undefined2 *)0x148;
      *(undefined2 *)(unaff_BP + -0xa0) = uVar7;
      *(undefined2 *)(unaff_BP + -0x40) = 1;
      *(undefined2 *)(unaff_BP + -0x3e) = 0;
      iStack_6 = 0x1bb4;
      while( true ) {
        if ((*(int *)(unaff_BP + -0xa0) < *(int *)(unaff_BP + -0x3e)) ||
           ((*(int *)(unaff_BP + -0xa0) <= *(int *)(unaff_BP + -0x3e) &&
            (*(uint *)(unaff_BP + -0xa2) < *(uint *)(unaff_BP + -0x40))))) break;
        uVar7 = 0;
        iStack_8 = 899;
        uVar13 = func_0x0000013f();
        if (*(byte *)((int)uVar13 + 0x11) < 0x5a) {
          iStack_6 = 0;
          uVar7 = 0;
          iStack_8 = 0x39b;
          uVar13 = func_0x0000013f();
          if ((*(byte *)((int)uVar13 + 0x14) & 2) != 0) {
            iStack_6 = 0;
            iStack_8 = 0x3b6;
            puVar14 = (undefined2 *)func_0x0000013f();
            puVar9 = (undefined2 *)puVar14;
            puVar10 = (undefined2 *)(unaff_BP + -0x6a);
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar6 = puVar10;
              puVar10 = puVar10 + 1;
              puVar5 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar6 = *puVar5;
            }
            *(undefined1 *)(unaff_BP + -0x58) = *(undefined1 *)0xb310;
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            iStack_6 = 0x22b2;
            uVar7 = 0x11f2;
            iStack_8 = 0x46e;
            iVar8 = func_0x000185d3();
            if (iVar8 != 0) {
              if (*(char *)(*(byte *)(unaff_BP + -0x58) + 0xb4a6) == '\0') {
                *(undefined1 *)(*(byte *)(unaff_BP + -0x58) + 0xb4a6) = 1;
                iStack_6 = 0x490;
                func_0x0000b1d8();
                iStack_6 = 0x499;
                func_0x0000daa6();
              }
              puVar9 = &uStack_18;
              puVar10 = (undefined2 *)(unaff_BP + -0x6a);
              for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar5 = puVar9;
                puVar9 = puVar9 + 1;
                puVar14 = puVar10;
                puVar10 = puVar10 + 1;
                *puVar5 = *puVar14;
              }
              uStack_1c = 0x4b1;
              func_0x00018396();
              iStack_6 = 0x11f2;
              uVar7 = 0;
              iStack_8 = 0x4c1;
              uVar13 = func_0x0000013f();
              pbVar3 = (byte *)((int)uVar13 + 0x14);
              *pbVar3 = *pbVar3 | 0x20;
              *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
            }
          }
        }
        puVar2 = (uint *)(unaff_BP + -0x40);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x3e) = *(int *)(unaff_BP + -0x3e) + (uint)(0xfffe < uVar4);
        iStack_6 = uVar7;
      }
      uVar7 = *(undefined2 *)0x14e;
      *(undefined2 *)(unaff_BP + -0xa2) = *(undefined2 *)0x14c;
      *(undefined2 *)(unaff_BP + -0xa0) = uVar7;
      *(undefined2 *)(unaff_BP + -0x40) = 1;
      *(undefined2 *)(unaff_BP + -0x3e) = 0;
      while( true ) {
        if ((*(int *)(unaff_BP + -0xa0) < *(int *)(unaff_BP + -0x3e)) ||
           ((*(int *)(unaff_BP + -0xa0) <= *(int *)(unaff_BP + -0x3e) &&
            (*(uint *)(unaff_BP + -0xa2) < *(uint *)(unaff_BP + -0x40))))) break;
        iStack_8 = 0x516;
        uVar13 = func_0x00000271();
        if (*(byte *)((int)uVar13 + 0x1b) < 0x5a) {
          iStack_6 = 0;
          iStack_8 = 0x52e;
          uVar13 = func_0x00000271();
          if ((*(byte *)((int)uVar13 + 0x1e) & 2) != 0) {
            iStack_6 = 0;
            iStack_8 = 0x546;
            puVar14 = (undefined2 *)func_0x00000271();
            puVar9 = (undefined2 *)puVar14;
            puVar10 = (undefined2 *)(unaff_BP + -0x9e);
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar6 = puVar10;
              puVar10 = puVar10 + 1;
              puVar5 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar6 = *puVar5;
            }
            *(undefined1 *)(unaff_BP + -0x82) = *(undefined1 *)0xb310;
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            puVar9 = &uStack_20;
            puVar10 = (undefined2 *)(unaff_BP + -0x9e);
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar5 = puVar9;
              puVar9 = puVar9 + 1;
              puVar14 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar5 = *puVar14;
            }
            uStack_24 = 0x5c3;
            FUN_13bf_01c1();
            *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
            iStack_6 = 0x11f2;
            iStack_8 = 0x5d6;
            uVar13 = func_0x00000271();
            pbVar3 = (byte *)((int)uVar13 + 0x1e);
            *pbVar3 = *pbVar3 | 0x20;
          }
        }
        iStack_6 = 0;
        puVar2 = (uint *)(unaff_BP + -0x40);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x3e) = *(int *)(unaff_BP + -0x3e) + (uint)(0xfffe < uVar4);
      }
      iVar8 = *(int *)0x152;
      *(int *)(unaff_BP + -0xa2) = iVar8;
      *(int *)(unaff_BP + -0xa0) = iVar8 >> 0xf;
      *(undefined2 *)(unaff_BP + -0x3c) = 1;
      while( true ) {
        iVar8 = (int)*(uint *)(unaff_BP + -0x3c) >> 0xf;
        if ((*(int *)(unaff_BP + -0xa0) < iVar8) ||
           ((*(int *)(unaff_BP + -0xa0) <= iVar8 &&
            (*(uint *)(unaff_BP + -0xa2) < *(uint *)(unaff_BP + -0x3c))))) break;
        iStack_6 = 0x618;
        uVar13 = func_0x000003ef();
        if (*(byte *)((int)uVar13 + 9) < 0x5a) {
          iStack_6 = 0x62f;
          uVar13 = func_0x000003ef();
          if ((*(byte *)((int)uVar13 + 10) & 2) != 0) {
            iStack_6 = 0x646;
            puVar14 = (undefined2 *)func_0x000003ef();
            puVar9 = (undefined2 *)puVar14;
            puVar10 = (undefined2 *)(unaff_BP + -0x7a);
            for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar6 = puVar10;
              puVar10 = puVar10 + 1;
              puVar5 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar6 = *puVar5;
            }
            *(undefined1 *)(unaff_BP + -0x72) = *(undefined1 *)0xb310;
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            iStack_6 = 0x6af;
            func_0x0000daa6();
            puVar9 = &uStack_c;
            puVar10 = (undefined2 *)(unaff_BP + -0x7a);
            for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar5 = puVar9;
              puVar9 = puVar9 + 1;
              puVar14 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar5 = *puVar14;
            }
            uVar7 = 0x1bb4;
            uStack_10 = 0x6c4;
            iVar8 = func_0x0001efe0();
            if (iVar8 != 0) {
              if (*(char *)(*(byte *)(unaff_BP + -0x72) + 0xb4a6) == '\0') {
                *(undefined1 *)(*(byte *)(unaff_BP + -0x72) + 0xb4a6) = 1;
                iStack_6 = 0x6e7;
                func_0x0000b1d8();
                uVar7 = 0x885;
                iStack_6 = 0x6f0;
                func_0x0000daa6();
              }
              iStack_8 = 0x6fe;
              iStack_6 = uVar7;
              func_0x0001f185();
              *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
              iStack_6 = 0x70c;
              uVar13 = func_0x000003ef();
              pbVar3 = (byte *)((int)uVar13 + 10);
              *pbVar3 = *pbVar3 | 0x20;
            }
          }
        }
        *(int *)(unaff_BP + -0x3c) = *(int *)(unaff_BP + -0x3c) + 1;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar11 = in(uVar7);
  *(undefined1 *)puVar10 = uVar11;
  while( true ) {
    FUN_32b2_7258();
    uStack_a = 0x32b2;
    uStack_c = 0x1df;
    FUN_32b2_6eb1();
    uStack_a = 0x32b2;
    uStack_c = 0x1e7;
    FUN_32b2_6cc6();
    uStack_a = 0x32b2;
    uStack_c = 0x1ec;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    uStack_14 = 0x1f6;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x1fa;
    puVar10 = &uStack_c;
    iVar8 = FUN_3ab8_4fbd();
    if (iVar8 == 0) break;
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    iStack_6 = 0x32b2;
    iStack_8 = 0x269;
    FUN_32b2_6eb1();
    iStack_6 = 0x32b2;
    iStack_8 = 0x271;
    FUN_32b2_6cc6();
    iStack_6 = 0x32b2;
    iStack_8 = 0x276;
    FUN_32b2_7258();
    iStack_6 = 0x32b2;
    iStack_8 = 0x27e;
    FUN_32b2_6e99();
    uStack_10 = 0x288;
    FUN_32b2_6eb1();
    uStack_10 = 0x290;
    FUN_32b2_6cc6();
    uStack_10 = 0x295;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 0x29f;
    FUN_32b2_6eb1();
    uStack_16 = 0x32b2;
    uStack_18 = 0x2a7;
    FUN_32b2_6cc6();
    uStack_16 = 0x32b2;
    uStack_18 = 0x2ac;
    FUN_32b2_7258();
    uStack_1e = 0x32b2;
    uStack_20 = 0x2b6;
    FUN_32b2_6eb1();
    uStack_1e = 1;
    uStack_20 = 0x32b2;
    FUN_3ab8_5089();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    iStack_6 = 0x32b2;
    iStack_8 = 0x30c;
    FUN_32b2_6eb1();
    iStack_6 = 0x32b2;
    iStack_8 = 0x314;
    FUN_32b2_6d14();
    uStack_10 = 0x31e;
    FUN_32b2_6eb1();
    uStack_10 = 0x326;
    FUN_32b2_6cc6();
    uStack_10 = 0x32b;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 0x335;
    FUN_32b2_6eb1();
    uStack_16 = 0x32b2;
    uStack_18 = 0x33d;
    FUN_32b2_6cc6();
    uStack_16 = 0x32b2;
    uStack_18 = 0x342;
    FUN_32b2_7258();
    uStack_1e = 0x32b2;
    uStack_20 = 0x34c;
    FUN_32b2_6eb1();
    uStack_1e = 1;
    uStack_20 = 0x32b2;
    FUN_3ab8_5089();
    uVar11 = (undefined1 *)0xffc9 < &uStack_1e;
    uVar12 = &stack0x0000 == (undefined1 *)0xffe8;
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
      if ((bool)uVar12) break;
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
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      iStack_6 = *(undefined2 *)(unaff_BP + -0x48);
      iStack_8 = *(undefined2 *)(unaff_BP + -0x4a);
      uStack_a = *(undefined2 *)(unaff_BP + -0x4c);
      uStack_c = *(undefined2 *)(unaff_BP + -0x4e);
      uStack_10 = 0x622;
      FUN_32b2_6d14();
      uStack_16 = 0x32b2;
      uStack_18 = 0x62c;
      FUN_32b2_6eb1();
      uStack_16 = 0x32b2;
      uStack_18 = 0x635;
      FUN_32b2_6d14();
      uStack_1e = 0x32b2;
      uStack_20 = 0x63f;
      FUN_32b2_6eb1();
      uStack_1e = 0;
      uStack_20 = 0x32b2;
      FUN_3ab8_5089();
      uVar7 = *(undefined2 *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
      *(undefined2 *)(unaff_BP + -0x84) = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x88);
      *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
      *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
      puVar9 = (undefined2 *)(unaff_BP + 0x1c);
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar5 = puVar10;
        puVar10 = puVar10 + 1;
        puVar14 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar5 = *puVar14;
      }
                    /* WARNING: Call to offcut address within same function */
      uStack_10 = 0x684;
      iVar8 = func_0x0003fdaf();
      uVar11 = 0;
      uVar12 = iVar8 == 0;
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
      goto code_r0x0003071f;
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
    FUN_32b2_75ec();
    uVar11 = &stack0x0000 == (undefined1 *)0xffec;
    FUN_32b2_6d14();
    FUN_32b2_704d();
    FUN_32b2_7095();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7191();
    if ((bool)uVar11) {
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191();
      if ((bool)uVar11) break;
    }
    FUN_32b2_6cc6();
  }
  goto LAB_2bb4_4661;
code_r0x0003fcb6:
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c74();
  func_0x00029983();
  goto LAB_3ab8_50f5;
}



/* 3ab8:5089  FUN_3ab8_5089  246 bytes, 3 callers */

/* WARNING: Instruction at (ram,0x0003071a) overlaps instruction at (ram,0x00030719)
    */
/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far FUN_3ab8_5089(void)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 extraout_DX;
  int unaff_BP;
  undefined2 *puVar10;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 in_CF;
  undefined1 uVar12;
  undefined1 in_ZF;
  undefined4 uVar13;
  undefined2 *puVar14;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  int iStack_6;
  
  func_0x00029834();
  func_0x00029834();
  func_0x00029bfc();
  FUN_28b3_1181();
  if (!(bool)in_CF && !(bool)in_ZF) {
    func_0x00029834();
    func_0x00029c44();
    func_0x00029c2c();
    uVar13 = FUN_28b3_0f51();
    *(undefined2 *)(unaff_BP + -0x10) = (int)uVar13;
    *(undefined2 *)(unaff_BP + -0xe) = (int)((ulong)uVar13 >> 0x10);
    func_0x00029834();
    func_0x00029983();
    in_CF = 0xffa5 < *(uint *)(unaff_BP + -0x20);
    in_ZF = *(uint *)(unaff_BP + -0x20) == 0xffa6;
    iStack_6 = 0x22b2;
    iStack_8 = 0xfc6d;
    uVar13 = func_0x00021eee();
    *(undefined2 *)(unaff_BP + -0x22) = (int)uVar13;
    *(undefined2 *)(unaff_BP + -0x20) = (int)((ulong)uVar13 >> 0x10);
  }
LAB_3ab8_50f5:
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029bb5();
  FUN_28b3_1181();
  if (!(bool)in_CF) {
    uVar11 = false;
code_r0x0003071f:
    if ((bool)uVar11) {
LAB_2bb4_4661:
      uVar7 = 0;
    }
    else {
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
      uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
      uStack_26 = *(undefined2 *)(unaff_BP + -0x4e);
      uStack_28 = 0x32b2;
      uStack_2a = 0x820;
      FUN_32b2_6d14();
      uStack_30 = 0x32b2;
      uStack_32 = 0x82a;
      FUN_32b2_6eb1();
      uStack_30 = 0x32b2;
      uStack_32 = 0x833;
      FUN_32b2_6d14();
      FUN_32b2_6eb1();
      FUN_3ab8_5089();
      uVar11 = (undefined1 *)0xffc9 < &stack0xffc8;
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
      puVar9 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
      *puVar9 = *(undefined2 *)(unaff_BP + -0x62);
      puVar9[1] = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x88);
      puVar9 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
      *puVar9 = *(undefined2 *)(unaff_BP + -0x8a);
      puVar9[1] = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x60);
      puVar9 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
      *puVar9 = *(undefined2 *)(unaff_BP + -0x62);
      puVar9[1] = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x88);
      puVar9 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
      *puVar9 = *(undefined2 *)(unaff_BP + -0x8a);
      puVar9[1] = uVar7;
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
        uStack_1c = 0x98f;
        FUN_32b2_6eb1();
        uStack_1c = *(undefined2 *)(unaff_BP + -0x66);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_26 = *(undefined2 *)(unaff_BP + -0x4c);
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
        FUN_3ab8_5089(0);
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
        puVar9 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
        *puVar9 = *(undefined2 *)(unaff_BP + -0x62);
        puVar9[1] = uVar7;
        uVar7 = *(undefined2 *)(unaff_BP + -0x88);
        puVar9 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
        *puVar9 = *(undefined2 *)(unaff_BP + -0x8a);
        puVar9[1] = uVar7;
        *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
      }
      uVar7 = *(undefined2 *)(unaff_BP + -0x36);
    }
    return uVar7;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_100d();
  FUN_28b3_1181();
  if ((bool)in_CF || (bool)in_ZF) goto code_r0x0003fcb6;
  uVar11 = *(int *)(unaff_BP + 0x1c) == 0;
  uVar12 = *(int *)(unaff_BP + 0x1c) == 1;
  if (!(bool)uVar12) {
    uVar11 = *(uint *)(unaff_BP + 0x1c) < 2;
    uVar12 = *(uint *)(unaff_BP + 0x1c) == 2;
    uVar7 = extraout_DX;
    if (!(bool)uVar12) goto LAB_3ab8_5273;
  }
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029c74();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029983();
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029bfc();
  func_0x0002996b();
  FUN_28b3_1181();
  if ((bool)uVar11) {
    uVar7 = *(undefined2 *)(unaff_BP + -0x24);
    *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0x26);
    *(undefined2 *)(unaff_BP + -2) = uVar7;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)uVar11 && !(bool)uVar12) {
    uVar7 = *(undefined2 *)(unaff_BP + -0x34);
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x36);
    *(undefined2 *)(unaff_BP + -6) = uVar7;
  }
  func_0x000297e6();
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xfd91;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xfd99;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xfd9e;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfda8;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfdb0;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfdb5;
  func_0x00029d78();
  uStack_1c = 0xfdbf;
  func_0x000299d1();
  uStack_1c = 0xfdc7;
  func_0x000297e6();
  uStack_1c = 0xfdcc;
  func_0x00029d78();
  uStack_24 = 0xfdd6;
  func_0x000299d1();
  unaff_DI = &uStack_36;
  puVar9 = (undefined2 *)(unaff_BP + 6);
  for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar5 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    puVar14 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar5 = *puVar14;
  }
  uVar13 = FUN_3ab8_4c77();
  uVar7 = (undefined2)((ulong)uVar13 >> 0x10);
  unaff_ES = unaff_SS;
  if ((int)uVar13 != 0) {
    *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
  }
LAB_3ab8_5273:
  if (*(int *)(unaff_BP + 0x1c) == 2) {
    func_0x000297e6();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029c74();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xfe6b;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xfe73;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xfe78;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe82;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe8a;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe8f;
    func_0x00029d78();
    uStack_1c = 0xfe99;
    func_0x000299d1();
    uStack_1c = 0xfea1;
    func_0x000297e6();
    uStack_1c = 0xfea6;
    func_0x00029d78();
    uStack_24 = 0xfeb0;
    func_0x000299d1();
    unaff_DI = &uStack_36;
    puVar9 = (undefined2 *)(unaff_BP + 6);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      puVar14 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar5 = *puVar14;
    }
    uVar13 = FUN_3ab8_4c77();
    uVar7 = (undefined2)((ulong)uVar13 >> 0x10);
    unaff_ES = unaff_SS;
    if ((int)uVar13 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
  }
  if (*(int *)(unaff_BP + 0x1c) == 3) {
    func_0x000297e6();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029bfc();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029c74();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xff52;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xff5a;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xff5f;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xff69;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xff71;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xff76;
    func_0x00029d78();
    uStack_1c = 0xff80;
    func_0x000299d1();
    uStack_1c = 0xff88;
    func_0x000297e6();
    uStack_1c = 0xff8d;
    func_0x00029d78();
    uStack_24 = 0xff97;
    func_0x000299d1();
    puVar10 = &uStack_36;
    puVar9 = (undefined2 *)(unaff_BP + 6);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar5 = *puVar14;
    }
    iVar8 = FUN_3ab8_4c77();
    if (iVar8 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c74();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xfff0;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xfff8;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xfffd;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 7;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xf;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0x14;
    func_0x00029d78();
    uStack_1c = 0x1e;
    func_0x000299d1();
    uStack_1c = 0x26;
    func_0x000297e6();
    uStack_1c = 0x2b;
    func_0x00029d78();
    uStack_1c = 0x33;
    func_0x00029c74();
    uStack_1c = 0x3b;
    func_0x0002996b();
    uStack_1c = 0x40;
    func_0x00029d78();
    uStack_24 = 0x4a;
    func_0x000299d1();
    puVar10 = &uStack_36;
    puVar9 = (undefined2 *)(unaff_BP + 6);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar5 = *puVar14;
    }
    iVar8 = FUN_4375_c0a7();
    if (iVar8 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xa3;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xab;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xb0;
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xb8;
    func_0x00029c74();
    uStack_a = 0x22b2;
    uStack_c = 0xc0;
    func_0x0002996b();
    uStack_a = 0x22b2;
    uStack_c = 0xc5;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xcf;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xd7;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xdc;
    func_0x00029d78();
    uStack_1c = 0xe6;
    func_0x000299d1();
    uStack_1c = 0xee;
    func_0x000297e6();
    uStack_1c = 0xf3;
    func_0x00029d78();
    uStack_24 = 0xfd;
    func_0x000299d1();
    puVar10 = &uStack_36;
    puVar9 = (undefined2 *)(unaff_BP + 6);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar5 = *puVar14;
    }
    iVar8 = FUN_4375_c0a7();
    if (iVar8 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0x156;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0x15e;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0x163;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0x16d;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0x175;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0x17a;
    func_0x00029d78();
    uStack_1c = 0x184;
    func_0x000299d1();
    uStack_1c = 0x18c;
    func_0x000297e6();
    uStack_1c = 0x191;
    func_0x00029d78();
    uStack_1c = 0x199;
    func_0x00029bfc();
    uStack_1c = 0x1a1;
    func_0x0002996b();
    uStack_1c = 0x1a6;
    func_0x00029d78();
    uStack_24 = 0x1b0;
    func_0x000299d1();
    puVar10 = &uStack_36;
    puVar9 = (undefined2 *)(unaff_BP + 6);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar5 = *puVar14;
    }
    iVar8 = FUN_4375_c0a7();
    if (iVar8 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    if (*(int *)(unaff_BP + 0x1c) == 4) {
      uVar7 = *(undefined2 *)(unaff_BP + -0x12);
      *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + -0x14);
      *(undefined2 *)(unaff_BP + -0x60) = uVar7;
      *(undefined1 *)(unaff_BP + -0x4f) = *(undefined1 *)0xa6a;
      *(undefined1 *)(unaff_BP + -0x50) = *(undefined1 *)0xa6c;
      *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xb310;
      *(undefined2 *)(unaff_BP + -0x5e) = *(undefined2 *)(unaff_BP + -0x10);
      uVar7 = *(undefined2 *)(unaff_BP + -0x20);
      *(undefined2 *)(unaff_BP + -0x54) = *(undefined2 *)(unaff_BP + -0x22);
      *(undefined2 *)(unaff_BP + -0x52) = uVar7;
      *(undefined2 *)(unaff_BP + -0x5a) = 0;
      *(undefined2 *)(unaff_BP + -0x5c) = 0;
      *(undefined2 *)(unaff_BP + -0x56) = 0;
      *(undefined2 *)(unaff_BP + -0x58) = 0;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x226;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x22e;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x238;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x240;
      puVar9 = (undefined2 *)FUN_1def_05d1();
      uVar7 = puVar9[1];
      *(undefined2 *)(unaff_BP + -0x6a) = *puVar9;
      *(undefined2 *)(unaff_BP + -0x68) = uVar7;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x262;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x26a;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x274;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x27c;
      puVar9 = (undefined2 *)func_0x0001e558();
      uVar7 = puVar9[1];
      *(undefined2 *)(unaff_BP + -0x66) = *puVar9;
      *(undefined2 *)(unaff_BP + -100) = uVar7;
      puVar10 = &uStack_20;
      puVar9 = (undefined2 *)(unaff_BP + -0x6a);
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar5 = puVar10;
        puVar10 = puVar10 + 1;
        puVar14 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar5 = *puVar14;
      }
      uStack_24 = 0x2a0;
      FUN_13bf_01c1();
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
      iStack_6 = 0x11f2;
      iStack_8 = 0x2b3;
      uVar13 = func_0x00000271();
      pbVar3 = (byte *)((int)uVar13 + 0x1e);
      *pbVar3 = *pbVar3 | 0x20;
    }
    if (*(int *)(unaff_BP + 0x1c) == 5) {
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x2d9;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x2e1;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x2eb;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x2f3;
      puVar9 = (undefined2 *)FUN_1def_05d1();
      uVar7 = puVar9[1];
      *(undefined2 *)(unaff_BP + -0x6e) = *puVar9;
      *(undefined2 *)(unaff_BP + -0x6c) = uVar7;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x315;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x31d;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x327;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x32f;
      puVar9 = (undefined2 *)func_0x0001e558();
      uVar7 = puVar9[1];
      *(undefined2 *)(unaff_BP + -0x7e) = *puVar9;
      *(undefined2 *)(unaff_BP + -0x7c) = uVar7;
      uVar7 = *(undefined2 *)0x14a;
      *(undefined2 *)(unaff_BP + -0xa2) = *(undefined2 *)0x148;
      *(undefined2 *)(unaff_BP + -0xa0) = uVar7;
      *(undefined2 *)(unaff_BP + -0x40) = 1;
      *(undefined2 *)(unaff_BP + -0x3e) = 0;
      iStack_6 = 0x1bb4;
      while( true ) {
        if ((*(int *)(unaff_BP + -0xa0) < *(int *)(unaff_BP + -0x3e)) ||
           ((*(int *)(unaff_BP + -0xa0) <= *(int *)(unaff_BP + -0x3e) &&
            (*(uint *)(unaff_BP + -0xa2) < *(uint *)(unaff_BP + -0x40))))) break;
        uVar7 = 0;
        iStack_8 = 899;
        uVar13 = func_0x0000013f();
        if (*(byte *)((int)uVar13 + 0x11) < 0x5a) {
          iStack_6 = 0;
          uVar7 = 0;
          iStack_8 = 0x39b;
          uVar13 = func_0x0000013f();
          if ((*(byte *)((int)uVar13 + 0x14) & 2) != 0) {
            iStack_6 = 0;
            iStack_8 = 0x3b6;
            puVar14 = (undefined2 *)func_0x0000013f();
            puVar10 = (undefined2 *)puVar14;
            puVar9 = (undefined2 *)(unaff_BP + -0x6a);
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar6 = puVar9;
              puVar9 = puVar9 + 1;
              puVar5 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar6 = *puVar5;
            }
            *(undefined1 *)(unaff_BP + -0x58) = *(undefined1 *)0xb310;
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            iStack_6 = 0x22b2;
            uVar7 = 0x11f2;
            iStack_8 = 0x46e;
            iVar8 = func_0x000185d3();
            if (iVar8 != 0) {
              if (*(char *)(*(byte *)(unaff_BP + -0x58) + 0xb4a6) == '\0') {
                *(undefined1 *)(*(byte *)(unaff_BP + -0x58) + 0xb4a6) = 1;
                iStack_6 = 0x490;
                func_0x0000b1d8();
                iStack_6 = 0x499;
                func_0x0000daa6();
              }
              puVar10 = &uStack_18;
              puVar9 = (undefined2 *)(unaff_BP + -0x6a);
              for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar5 = puVar10;
                puVar10 = puVar10 + 1;
                puVar14 = puVar9;
                puVar9 = puVar9 + 1;
                *puVar5 = *puVar14;
              }
              uStack_1c = 0x4b1;
              func_0x00018396();
              iStack_6 = 0x11f2;
              uVar7 = 0;
              iStack_8 = 0x4c1;
              uVar13 = func_0x0000013f();
              pbVar3 = (byte *)((int)uVar13 + 0x14);
              *pbVar3 = *pbVar3 | 0x20;
              *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
            }
          }
        }
        puVar2 = (uint *)(unaff_BP + -0x40);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x3e) = *(int *)(unaff_BP + -0x3e) + (uint)(0xfffe < uVar4);
        iStack_6 = uVar7;
      }
      uVar7 = *(undefined2 *)0x14e;
      *(undefined2 *)(unaff_BP + -0xa2) = *(undefined2 *)0x14c;
      *(undefined2 *)(unaff_BP + -0xa0) = uVar7;
      *(undefined2 *)(unaff_BP + -0x40) = 1;
      *(undefined2 *)(unaff_BP + -0x3e) = 0;
      while( true ) {
        if ((*(int *)(unaff_BP + -0xa0) < *(int *)(unaff_BP + -0x3e)) ||
           ((*(int *)(unaff_BP + -0xa0) <= *(int *)(unaff_BP + -0x3e) &&
            (*(uint *)(unaff_BP + -0xa2) < *(uint *)(unaff_BP + -0x40))))) break;
        iStack_8 = 0x516;
        uVar13 = func_0x00000271();
        if (*(byte *)((int)uVar13 + 0x1b) < 0x5a) {
          iStack_6 = 0;
          iStack_8 = 0x52e;
          uVar13 = func_0x00000271();
          if ((*(byte *)((int)uVar13 + 0x1e) & 2) != 0) {
            iStack_6 = 0;
            iStack_8 = 0x546;
            puVar14 = (undefined2 *)func_0x00000271();
            puVar10 = (undefined2 *)puVar14;
            puVar9 = (undefined2 *)(unaff_BP + -0x9e);
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar6 = puVar9;
              puVar9 = puVar9 + 1;
              puVar5 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar6 = *puVar5;
            }
            *(undefined1 *)(unaff_BP + -0x82) = *(undefined1 *)0xb310;
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            puVar10 = &uStack_20;
            puVar9 = (undefined2 *)(unaff_BP + -0x9e);
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar5 = puVar10;
              puVar10 = puVar10 + 1;
              puVar14 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar5 = *puVar14;
            }
            uStack_24 = 0x5c3;
            FUN_13bf_01c1();
            *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
            iStack_6 = 0x11f2;
            iStack_8 = 0x5d6;
            uVar13 = func_0x00000271();
            pbVar3 = (byte *)((int)uVar13 + 0x1e);
            *pbVar3 = *pbVar3 | 0x20;
          }
        }
        iStack_6 = 0;
        puVar2 = (uint *)(unaff_BP + -0x40);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x3e) = *(int *)(unaff_BP + -0x3e) + (uint)(0xfffe < uVar4);
      }
      iVar8 = *(int *)0x152;
      *(int *)(unaff_BP + -0xa2) = iVar8;
      *(int *)(unaff_BP + -0xa0) = iVar8 >> 0xf;
      *(undefined2 *)(unaff_BP + -0x3c) = 1;
      while( true ) {
        iVar8 = (int)*(uint *)(unaff_BP + -0x3c) >> 0xf;
        if ((*(int *)(unaff_BP + -0xa0) < iVar8) ||
           ((*(int *)(unaff_BP + -0xa0) <= iVar8 &&
            (*(uint *)(unaff_BP + -0xa2) < *(uint *)(unaff_BP + -0x3c))))) break;
        iStack_6 = 0x618;
        uVar13 = func_0x000003ef();
        if (*(byte *)((int)uVar13 + 9) < 0x5a) {
          iStack_6 = 0x62f;
          uVar13 = func_0x000003ef();
          if ((*(byte *)((int)uVar13 + 10) & 2) != 0) {
            iStack_6 = 0x646;
            puVar14 = (undefined2 *)func_0x000003ef();
            puVar10 = (undefined2 *)puVar14;
            puVar9 = (undefined2 *)(unaff_BP + -0x7a);
            for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar6 = puVar9;
              puVar9 = puVar9 + 1;
              puVar5 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar6 = *puVar5;
            }
            *(undefined1 *)(unaff_BP + -0x72) = *(undefined1 *)0xb310;
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            iStack_6 = 0x6af;
            func_0x0000daa6();
            puVar10 = &uStack_c;
            puVar9 = (undefined2 *)(unaff_BP + -0x7a);
            for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar5 = puVar10;
              puVar10 = puVar10 + 1;
              puVar14 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar5 = *puVar14;
            }
            uVar7 = 0x1bb4;
            uStack_10 = 0x6c4;
            iVar8 = func_0x0001efe0();
            if (iVar8 != 0) {
              if (*(char *)(*(byte *)(unaff_BP + -0x72) + 0xb4a6) == '\0') {
                *(undefined1 *)(*(byte *)(unaff_BP + -0x72) + 0xb4a6) = 1;
                iStack_6 = 0x6e7;
                func_0x0000b1d8();
                uVar7 = 0x885;
                iStack_6 = 0x6f0;
                func_0x0000daa6();
              }
              iStack_8 = 0x6fe;
              iStack_6 = uVar7;
              func_0x0001f185();
              *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
              iStack_6 = 0x70c;
              uVar13 = func_0x000003ef();
              pbVar3 = (byte *)((int)uVar13 + 10);
              *pbVar3 = *pbVar3 | 0x20;
            }
          }
        }
        *(int *)(unaff_BP + -0x3c) = *(int *)(unaff_BP + -0x3c) + 1;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar11 = in(uVar7);
  *(undefined1 *)unaff_DI = uVar11;
  while( true ) {
    FUN_32b2_7258();
    uStack_a = 0x32b2;
    uStack_c = 0x1df;
    FUN_32b2_6eb1();
    uStack_a = 0x32b2;
    uStack_c = 0x1e7;
    FUN_32b2_6cc6();
    uStack_a = 0x32b2;
    uStack_c = 0x1ec;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    uStack_14 = 0x1f6;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x1fa;
    puVar9 = &uStack_c;
    iVar8 = FUN_3ab8_4fbd();
    if (iVar8 == 0) break;
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    iStack_6 = 0x32b2;
    iStack_8 = 0x269;
    FUN_32b2_6eb1();
    iStack_6 = 0x32b2;
    iStack_8 = 0x271;
    FUN_32b2_6cc6();
    iStack_6 = 0x32b2;
    iStack_8 = 0x276;
    FUN_32b2_7258();
    iStack_6 = 0x32b2;
    iStack_8 = 0x27e;
    FUN_32b2_6e99();
    uStack_10 = 0x288;
    FUN_32b2_6eb1();
    uStack_10 = 0x290;
    FUN_32b2_6cc6();
    uStack_10 = 0x295;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 0x29f;
    FUN_32b2_6eb1();
    uStack_16 = 0x32b2;
    uStack_18 = 0x2a7;
    FUN_32b2_6cc6();
    uStack_16 = 0x32b2;
    uStack_18 = 0x2ac;
    FUN_32b2_7258();
    uStack_1e = 0x32b2;
    uStack_20 = 0x2b6;
    FUN_32b2_6eb1();
    uStack_1e = 1;
    uStack_20 = 0x32b2;
    FUN_3ab8_5089();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    iStack_6 = 0x32b2;
    iStack_8 = 0x30c;
    FUN_32b2_6eb1();
    iStack_6 = 0x32b2;
    iStack_8 = 0x314;
    FUN_32b2_6d14();
    uStack_10 = 0x31e;
    FUN_32b2_6eb1();
    uStack_10 = 0x326;
    FUN_32b2_6cc6();
    uStack_10 = 0x32b;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 0x335;
    FUN_32b2_6eb1();
    uStack_16 = 0x32b2;
    uStack_18 = 0x33d;
    FUN_32b2_6cc6();
    uStack_16 = 0x32b2;
    uStack_18 = 0x342;
    FUN_32b2_7258();
    uStack_1e = 0x32b2;
    uStack_20 = 0x34c;
    FUN_32b2_6eb1();
    uStack_1e = 1;
    uStack_20 = 0x32b2;
    FUN_3ab8_5089();
    uVar11 = (undefined1 *)0xffc9 < &uStack_1e;
    uVar12 = &stack0x0000 == (undefined1 *)0xffe8;
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
      if ((bool)uVar12) break;
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
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      iStack_6 = *(undefined2 *)(unaff_BP + -0x48);
      iStack_8 = *(undefined2 *)(unaff_BP + -0x4a);
      uStack_a = *(undefined2 *)(unaff_BP + -0x4c);
      uStack_c = *(undefined2 *)(unaff_BP + -0x4e);
      uStack_10 = 0x622;
      FUN_32b2_6d14();
      uStack_16 = 0x32b2;
      uStack_18 = 0x62c;
      FUN_32b2_6eb1();
      uStack_16 = 0x32b2;
      uStack_18 = 0x635;
      FUN_32b2_6d14();
      uStack_1e = 0x32b2;
      uStack_20 = 0x63f;
      FUN_32b2_6eb1();
      uStack_1e = 0;
      uStack_20 = 0x32b2;
      FUN_3ab8_5089();
      uVar7 = *(undefined2 *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
      *(undefined2 *)(unaff_BP + -0x84) = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x88);
      *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
      *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
      puVar10 = (undefined2 *)(unaff_BP + 0x1c);
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar5 = puVar9;
        puVar9 = puVar9 + 1;
        puVar14 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar5 = *puVar14;
      }
                    /* WARNING: Call to offcut address within same function */
      uStack_10 = 0x684;
      iVar8 = func_0x0003fdaf();
      uVar11 = 0;
      uVar12 = iVar8 == 0;
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
      goto code_r0x0003071f;
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
    FUN_32b2_75ec();
    uVar11 = &stack0x0000 == (undefined1 *)0xffec;
    FUN_32b2_6d14();
    FUN_32b2_704d();
    FUN_32b2_7095();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7191();
    if ((bool)uVar11) {
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191();
      if ((bool)uVar11) break;
    }
    FUN_32b2_6cc6();
  }
  goto LAB_2bb4_4661;
code_r0x0003fcb6:
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c74();
  func_0x00029983();
  goto LAB_3ab8_50f5;
}



/* 3ab8:517f  FUN_3ab8_517f  2585 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far FUN_3ab8_517f(void)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  int iVar9;
  int unaff_BP;
  undefined2 *puVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 in_CF;
  undefined1 uVar12;
  undefined1 in_ZF;
  undefined4 uVar13;
  undefined2 *puVar14;
  undefined2 auStack_36 [8];
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  func_0x000297e6();
  func_0x00029c74();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029983();
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029bfc();
  func_0x0002996b();
  FUN_28b3_1181();
  if ((bool)in_CF) {
    uVar7 = *(undefined2 *)(unaff_BP + -0x24);
    *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0x26);
    *(undefined2 *)(unaff_BP + -2) = uVar7;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)in_CF && !(bool)in_ZF) {
    uVar7 = *(undefined2 *)(unaff_BP + -0x34);
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x36);
    *(undefined2 *)(unaff_BP + -6) = uVar7;
  }
  func_0x000297e6();
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xfd91;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xfd99;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xfd9e;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfda8;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfdb0;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfdb5;
  func_0x00029d78();
  uStack_1c = 0xfdbf;
  func_0x000299d1();
  uStack_1c = 0xfdc7;
  func_0x000297e6();
  uStack_1c = 0xfdcc;
  func_0x00029d78();
  uStack_24 = 0xfdd6;
  func_0x000299d1();
  puVar10 = auStack_36;
  puVar8 = (undefined2 *)(unaff_BP + 6);
  for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar5 = puVar10;
    puVar10 = puVar10 + 1;
    puVar14 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar5 = *puVar14;
  }
  uVar13 = FUN_3ab8_4c77(0x22b2);
  uVar7 = (undefined2)((ulong)uVar13 >> 0x10);
  if ((int)uVar13 != 0) {
    *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
  }
  if (*(int *)(unaff_BP + 0x1c) == 2) {
    func_0x000297e6();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029c74();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xfe6b;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xfe73;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xfe78;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe82;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe8a;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe8f;
    func_0x00029d78();
    uStack_1c = 0xfe99;
    func_0x000299d1();
    uStack_1c = 0xfea1;
    func_0x000297e6();
    uStack_1c = 0xfea6;
    func_0x00029d78();
    uStack_24 = 0xfeb0;
    func_0x000299d1();
    puVar10 = auStack_36;
    puVar8 = (undefined2 *)(unaff_BP + 6);
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar5 = *puVar14;
    }
    uVar13 = FUN_3ab8_4c77(0x22b2);
    uVar7 = (undefined2)((ulong)uVar13 >> 0x10);
    if ((int)uVar13 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
  }
  if (*(int *)(unaff_BP + 0x1c) == 3) {
    func_0x000297e6();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029bfc();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029c74();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xff52;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xff5a;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xff5f;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xff69;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xff71;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xff76;
    func_0x00029d78();
    uStack_1c = 0xff80;
    func_0x000299d1();
    uStack_1c = 0xff88;
    func_0x000297e6();
    uStack_1c = 0xff8d;
    func_0x00029d78();
    uStack_24 = 0xff97;
    func_0x000299d1();
    puVar10 = auStack_36;
    puVar8 = (undefined2 *)(unaff_BP + 6);
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar5 = *puVar14;
    }
    iVar9 = FUN_3ab8_4c77(0x22b2);
    if (iVar9 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c74();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xfff0;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xfff8;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xfffd;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 7;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xf;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0x14;
    func_0x00029d78();
    uStack_1c = 0x1e;
    func_0x000299d1();
    uStack_1c = 0x26;
    func_0x000297e6();
    uStack_1c = 0x2b;
    func_0x00029d78();
    uStack_1c = 0x33;
    func_0x00029c74();
    uStack_1c = 0x3b;
    func_0x0002996b();
    uStack_1c = 0x40;
    func_0x00029d78();
    uStack_24 = 0x4a;
    func_0x000299d1();
    puVar10 = auStack_36;
    puVar8 = (undefined2 *)(unaff_BP + 6);
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar5 = *puVar14;
    }
    iVar9 = FUN_4375_c0a7(0x22b2);
    if (iVar9 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xa3;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xab;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xb0;
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xb8;
    func_0x00029c74();
    uStack_a = 0x22b2;
    uStack_c = 0xc0;
    func_0x0002996b();
    uStack_a = 0x22b2;
    uStack_c = 0xc5;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xcf;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xd7;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xdc;
    func_0x00029d78();
    uStack_1c = 0xe6;
    func_0x000299d1();
    uStack_1c = 0xee;
    func_0x000297e6();
    uStack_1c = 0xf3;
    func_0x00029d78();
    uStack_24 = 0xfd;
    func_0x000299d1();
    puVar10 = auStack_36;
    puVar8 = (undefined2 *)(unaff_BP + 6);
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar5 = *puVar14;
    }
    iVar9 = FUN_4375_c0a7(0x22b2);
    if (iVar9 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029bfc();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0x156;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0x15e;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0x163;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0x16d;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0x175;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0x17a;
    func_0x00029d78();
    uStack_1c = 0x184;
    func_0x000299d1();
    uStack_1c = 0x18c;
    func_0x000297e6();
    uStack_1c = 0x191;
    func_0x00029d78();
    uStack_1c = 0x199;
    func_0x00029bfc();
    uStack_1c = 0x1a1;
    func_0x0002996b();
    uStack_1c = 0x1a6;
    func_0x00029d78();
    uStack_24 = 0x1b0;
    func_0x000299d1();
    puVar10 = auStack_36;
    puVar8 = (undefined2 *)(unaff_BP + 6);
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar5 = *puVar14;
    }
    iVar9 = FUN_4375_c0a7(0x22b2);
    if (iVar9 != 0) {
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
    }
    if (*(int *)(unaff_BP + 0x1c) == 4) {
      uVar7 = *(undefined2 *)(unaff_BP + -0x12);
      *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + -0x14);
      *(undefined2 *)(unaff_BP + -0x60) = uVar7;
      *(undefined1 *)(unaff_BP + -0x4f) = *(undefined1 *)0xa6a;
      *(undefined1 *)(unaff_BP + -0x50) = *(undefined1 *)0xa6c;
      *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xb310;
      *(undefined2 *)(unaff_BP + -0x5e) = *(undefined2 *)(unaff_BP + -0x10);
      uVar7 = *(undefined2 *)(unaff_BP + -0x20);
      *(undefined2 *)(unaff_BP + -0x54) = *(undefined2 *)(unaff_BP + -0x22);
      *(undefined2 *)(unaff_BP + -0x52) = uVar7;
      *(undefined2 *)(unaff_BP + -0x5a) = 0;
      *(undefined2 *)(unaff_BP + -0x5c) = 0;
      *(undefined2 *)(unaff_BP + -0x56) = 0;
      *(undefined2 *)(unaff_BP + -0x58) = 0;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x226;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x22e;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x238;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x240;
      puVar8 = (undefined2 *)FUN_1def_05d1();
      uVar7 = puVar8[1];
      *(undefined2 *)(unaff_BP + -0x6a) = *puVar8;
      *(undefined2 *)(unaff_BP + -0x68) = uVar7;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x262;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x26a;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x274;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x27c;
      puVar8 = (undefined2 *)func_0x0001e558();
      uVar7 = puVar8[1];
      *(undefined2 *)(unaff_BP + -0x66) = *puVar8;
      *(undefined2 *)(unaff_BP + -100) = uVar7;
      puVar10 = &uStack_20;
      puVar8 = (undefined2 *)(unaff_BP + -0x6a);
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar5 = puVar10;
        puVar10 = puVar10 + 1;
        puVar14 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar5 = *puVar14;
      }
      uStack_24 = 0x2a0;
      FUN_13bf_01c1();
      *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
      uStack_6 = 0x11f2;
      uStack_8 = 0x2b3;
      uVar13 = func_0x00000271();
      pbVar3 = (byte *)((int)uVar13 + 0x1e);
      *pbVar3 = *pbVar3 | 0x20;
    }
    if (*(int *)(unaff_BP + 0x1c) == 5) {
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x2d9;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x2e1;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x2eb;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x2f3;
      puVar8 = (undefined2 *)FUN_1def_05d1();
      uVar7 = puVar8[1];
      *(undefined2 *)(unaff_BP + -0x6e) = *puVar8;
      *(undefined2 *)(unaff_BP + -0x6c) = uVar7;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0x315;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0x31d;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x327;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0x32f;
      puVar8 = (undefined2 *)func_0x0001e558();
      uVar7 = puVar8[1];
      *(undefined2 *)(unaff_BP + -0x7e) = *puVar8;
      *(undefined2 *)(unaff_BP + -0x7c) = uVar7;
      uVar7 = *(undefined2 *)0x14a;
      *(undefined2 *)(unaff_BP + -0xa2) = *(undefined2 *)0x148;
      *(undefined2 *)(unaff_BP + -0xa0) = uVar7;
      *(undefined2 *)(unaff_BP + -0x40) = 1;
      *(undefined2 *)(unaff_BP + -0x3e) = 0;
      uStack_6 = 0x1bb4;
      while( true ) {
        if ((*(int *)(unaff_BP + -0xa0) < *(int *)(unaff_BP + -0x3e)) ||
           ((*(int *)(unaff_BP + -0xa0) <= *(int *)(unaff_BP + -0x3e) &&
            (*(uint *)(unaff_BP + -0xa2) < *(uint *)(unaff_BP + -0x40))))) break;
        uVar7 = 0;
        uStack_8 = 899;
        uVar13 = func_0x0000013f();
        if (*(byte *)((int)uVar13 + 0x11) < 0x5a) {
          uStack_6 = 0;
          uVar7 = 0;
          uStack_8 = 0x39b;
          uVar13 = func_0x0000013f();
          if ((*(byte *)((int)uVar13 + 0x14) & 2) != 0) {
            uStack_6 = 0;
            uStack_8 = 0x3b6;
            puVar14 = (undefined2 *)func_0x0000013f();
            puVar10 = (undefined2 *)puVar14;
            puVar8 = (undefined2 *)(unaff_BP + -0x6a);
            for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar6 = puVar8;
              puVar8 = puVar8 + 1;
              puVar5 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar6 = *puVar5;
            }
            *(undefined1 *)(unaff_BP + -0x58) = *(undefined1 *)0xb310;
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            uStack_6 = 0x22b2;
            uVar7 = 0x11f2;
            uStack_8 = 0x46e;
            iVar9 = func_0x000185d3();
            if (iVar9 != 0) {
              if (*(char *)(*(byte *)(unaff_BP + -0x58) + 0xb4a6) == '\0') {
                *(undefined1 *)(*(byte *)(unaff_BP + -0x58) + 0xb4a6) = 1;
                uStack_6 = 0x490;
                func_0x0000b1d8();
                uStack_6 = 0x499;
                func_0x0000daa6();
              }
              puVar10 = &uStack_18;
              puVar8 = (undefined2 *)(unaff_BP + -0x6a);
              for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar5 = puVar10;
                puVar10 = puVar10 + 1;
                puVar14 = puVar8;
                puVar8 = puVar8 + 1;
                *puVar5 = *puVar14;
              }
              uStack_1c = 0x4b1;
              func_0x00018396();
              uStack_6 = 0x11f2;
              uVar7 = 0;
              uStack_8 = 0x4c1;
              uVar13 = func_0x0000013f();
              pbVar3 = (byte *)((int)uVar13 + 0x14);
              *pbVar3 = *pbVar3 | 0x20;
              *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
            }
          }
        }
        puVar2 = (uint *)(unaff_BP + -0x40);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x3e) = *(int *)(unaff_BP + -0x3e) + (uint)(0xfffe < uVar4);
        uStack_6 = uVar7;
      }
      uVar7 = *(undefined2 *)0x14e;
      *(undefined2 *)(unaff_BP + -0xa2) = *(undefined2 *)0x14c;
      *(undefined2 *)(unaff_BP + -0xa0) = uVar7;
      *(undefined2 *)(unaff_BP + -0x40) = 1;
      *(undefined2 *)(unaff_BP + -0x3e) = 0;
      while( true ) {
        if ((*(int *)(unaff_BP + -0xa0) < *(int *)(unaff_BP + -0x3e)) ||
           ((*(int *)(unaff_BP + -0xa0) <= *(int *)(unaff_BP + -0x3e) &&
            (*(uint *)(unaff_BP + -0xa2) < *(uint *)(unaff_BP + -0x40))))) break;
        uStack_8 = 0x516;
        uVar13 = func_0x00000271();
        if (*(byte *)((int)uVar13 + 0x1b) < 0x5a) {
          uStack_6 = 0;
          uStack_8 = 0x52e;
          uVar13 = func_0x00000271();
          if ((*(byte *)((int)uVar13 + 0x1e) & 2) != 0) {
            uStack_6 = 0;
            uStack_8 = 0x546;
            puVar14 = (undefined2 *)func_0x00000271();
            puVar10 = (undefined2 *)puVar14;
            puVar8 = (undefined2 *)(unaff_BP + -0x9e);
            for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar6 = puVar8;
              puVar8 = puVar8 + 1;
              puVar5 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar6 = *puVar5;
            }
            *(undefined1 *)(unaff_BP + -0x82) = *(undefined1 *)0xb310;
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            puVar10 = &uStack_20;
            puVar8 = (undefined2 *)(unaff_BP + -0x9e);
            for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar5 = puVar10;
              puVar10 = puVar10 + 1;
              puVar14 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar5 = *puVar14;
            }
            uStack_24 = 0x5c3;
            FUN_13bf_01c1();
            *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
            uStack_6 = 0x11f2;
            uStack_8 = 0x5d6;
            uVar13 = func_0x00000271();
            pbVar3 = (byte *)((int)uVar13 + 0x1e);
            *pbVar3 = *pbVar3 | 0x20;
          }
        }
        uStack_6 = 0;
        puVar2 = (uint *)(unaff_BP + -0x40);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x3e) = *(int *)(unaff_BP + -0x3e) + (uint)(0xfffe < uVar4);
      }
      iVar9 = *(int *)0x152;
      *(int *)(unaff_BP + -0xa2) = iVar9;
      *(int *)(unaff_BP + -0xa0) = iVar9 >> 0xf;
      *(undefined2 *)(unaff_BP + -0x3c) = 1;
      while( true ) {
        iVar9 = (int)*(uint *)(unaff_BP + -0x3c) >> 0xf;
        if ((*(int *)(unaff_BP + -0xa0) < iVar9) ||
           ((*(int *)(unaff_BP + -0xa0) <= iVar9 &&
            (*(uint *)(unaff_BP + -0xa2) < *(uint *)(unaff_BP + -0x3c))))) break;
        uStack_6 = 0x618;
        uVar13 = func_0x000003ef();
        if (*(byte *)((int)uVar13 + 9) < 0x5a) {
          uStack_6 = 0x62f;
          uVar13 = func_0x000003ef();
          if ((*(byte *)((int)uVar13 + 10) & 2) != 0) {
            uStack_6 = 0x646;
            puVar14 = (undefined2 *)func_0x000003ef();
            puVar10 = (undefined2 *)puVar14;
            puVar8 = (undefined2 *)(unaff_BP + -0x7a);
            for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar6 = puVar8;
              puVar8 = puVar8 + 1;
              puVar5 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar6 = *puVar5;
            }
            *(undefined1 *)(unaff_BP + -0x72) = *(undefined1 *)0xb310;
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029bb5();
            func_0x00029983();
            uStack_6 = 0x6af;
            func_0x0000daa6();
            puVar10 = &uStack_c;
            puVar8 = (undefined2 *)(unaff_BP + -0x7a);
            for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar5 = puVar10;
              puVar10 = puVar10 + 1;
              puVar14 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar5 = *puVar14;
            }
            uVar7 = 0x1bb4;
            uStack_10 = 0x6c4;
            iVar9 = func_0x0001efe0();
            if (iVar9 != 0) {
              if (*(char *)(*(byte *)(unaff_BP + -0x72) + 0xb4a6) == '\0') {
                *(undefined1 *)(*(byte *)(unaff_BP + -0x72) + 0xb4a6) = 1;
                uStack_6 = 0x6e7;
                func_0x0000b1d8();
                uVar7 = 0x885;
                uStack_6 = 0x6f0;
                func_0x0000daa6();
              }
              uStack_8 = 0x6fe;
              uStack_6 = uVar7;
              func_0x0001f185();
              *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + -0x1e) + 1;
              uStack_6 = 0x70c;
              uVar13 = func_0x000003ef();
              pbVar3 = (byte *)((int)uVar13 + 10);
              *pbVar3 = *pbVar3 | 0x20;
            }
          }
        }
        *(int *)(unaff_BP + -0x3c) = *(int *)(unaff_BP + -0x3c) + 1;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar11 = in(uVar7);
  *(undefined1 *)puVar10 = uVar11;
  while( true ) {
    FUN_32b2_7258();
    uStack_a = 0x32b2;
    uStack_c = 0x1df;
    FUN_32b2_6eb1();
    uStack_a = 0x32b2;
    uStack_c = 0x1e7;
    FUN_32b2_6cc6();
    uStack_a = 0x32b2;
    uStack_c = 0x1ec;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    uStack_14 = 0x1f6;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x1fa;
    puVar8 = &uStack_c;
    iVar9 = FUN_3ab8_4fbd();
    if (iVar9 == 0) goto LAB_2bb4_4661;
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    uStack_6 = 0x32b2;
    uStack_8 = 0x269;
    FUN_32b2_6eb1();
    uStack_6 = 0x32b2;
    uStack_8 = 0x271;
    FUN_32b2_6cc6();
    uStack_6 = 0x32b2;
    uStack_8 = 0x276;
    FUN_32b2_7258();
    uStack_6 = 0x32b2;
    uStack_8 = 0x27e;
    FUN_32b2_6e99();
    uStack_10 = 0x288;
    FUN_32b2_6eb1();
    uStack_10 = 0x290;
    FUN_32b2_6cc6();
    uStack_10 = 0x295;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 0x29f;
    FUN_32b2_6eb1();
    uStack_16 = 0x32b2;
    uStack_18 = 0x2a7;
    FUN_32b2_6cc6();
    uStack_16 = 0x32b2;
    uStack_18 = 0x2ac;
    FUN_32b2_7258();
    uStack_1e = 0x32b2;
    uStack_20 = 0x2b6;
    FUN_32b2_6eb1();
    uStack_1e = 1;
    uStack_20 = 0x32b2;
    FUN_3ab8_5089();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    uStack_6 = 0x32b2;
    uStack_8 = 0x30c;
    FUN_32b2_6eb1();
    uStack_6 = 0x32b2;
    uStack_8 = 0x314;
    FUN_32b2_6d14();
    uStack_10 = 0x31e;
    FUN_32b2_6eb1();
    uStack_10 = 0x326;
    FUN_32b2_6cc6();
    uStack_10 = 0x32b;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 0x335;
    FUN_32b2_6eb1();
    uStack_16 = 0x32b2;
    uStack_18 = 0x33d;
    FUN_32b2_6cc6();
    uStack_16 = 0x32b2;
    uStack_18 = 0x342;
    FUN_32b2_7258();
    uStack_1e = 0x32b2;
    uStack_20 = 0x34c;
    FUN_32b2_6eb1();
    uStack_1e = 1;
    uStack_20 = 0x32b2;
    FUN_3ab8_5089();
    uVar11 = (undefined1 *)0xffc9 < &uStack_1e;
    uVar12 = &stack0x0000 == (undefined1 *)0xffe8;
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
    if (!(bool)uVar11 && !(bool)uVar12) break;
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
    FUN_32b2_75ec();
    uVar11 = &stack0x0000 == (undefined1 *)0xffec;
    FUN_32b2_6d14();
    FUN_32b2_704d();
    FUN_32b2_7095();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7191();
    if ((bool)uVar11) {
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191();
      if ((bool)uVar11) goto LAB_2bb4_4661;
    }
    FUN_32b2_6cc6();
  }
  FUN_32b2_6d14();
  FUN_32b2_6d14();
  FUN_32b2_7191();
  if ((bool)uVar12) goto LAB_2bb4_4661;
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
  FUN_32b2_6eb1();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  uStack_6 = *(undefined2 *)(unaff_BP + -0x48);
  uStack_8 = *(undefined2 *)(unaff_BP + -0x4a);
  uStack_a = *(undefined2 *)(unaff_BP + -0x4c);
  uStack_c = *(undefined2 *)(unaff_BP + -0x4e);
  uStack_10 = 0x622;
  FUN_32b2_6d14();
  uStack_16 = 0x32b2;
  uStack_18 = 0x62c;
  FUN_32b2_6eb1();
  uStack_16 = 0x32b2;
  uStack_18 = 0x635;
  FUN_32b2_6d14();
  uStack_1e = 0x32b2;
  uStack_20 = 0x63f;
  FUN_32b2_6eb1();
  uStack_1e = 0;
  uStack_20 = 0x32b2;
  FUN_3ab8_5089();
  uVar7 = *(undefined2 *)(unaff_BP + -0x60);
  *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
  *(undefined2 *)(unaff_BP + -0x84) = uVar7;
  uVar7 = *(undefined2 *)(unaff_BP + -0x88);
  *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
  *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
  puVar10 = (undefined2 *)(unaff_BP + 0x1c);
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar5 = puVar8;
    puVar8 = puVar8 + 1;
    puVar14 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar5 = *puVar14;
  }
                    /* WARNING: Call to offcut address within same function */
  uStack_10 = 0x684;
  iVar9 = func_0x0003fdaf();
  uVar11 = 0;
  uVar12 = iVar9 == 0;
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
  if ((bool)uVar11) {
LAB_2bb4_4661:
    uVar7 = 0;
  }
  else {
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
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    uStack_6 = *(undefined2 *)(unaff_BP + -0x6a);
    uStack_8 = *(undefined2 *)(unaff_BP + -0x48);
    uStack_a = *(undefined2 *)(unaff_BP + -0x4a);
    uStack_c = *(undefined2 *)(unaff_BP + -0x4c);
    uStack_10 = 0x32b2;
    uStack_12 = 0x820;
    FUN_32b2_6d14();
    uStack_18 = 0x32b2;
    FUN_32b2_6eb1();
    uStack_18 = 0x32b2;
    FUN_32b2_6d14();
    uStack_20 = 0x32b2;
    FUN_32b2_6eb1();
    uStack_20 = 0;
    uStack_24 = 0x844;
    FUN_3ab8_5089();
    uVar11 = (undefined1 *)0xffc9 < &uStack_20;
    uVar12 = &stack0x0000 == (undefined1 *)0xffea;
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7191();
    if ((bool)uVar12) {
      uVar7 = *(undefined2 *)(unaff_BP + 8);
      *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
      *(undefined2 *)(unaff_BP + -0x60) = uVar7;
    }
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7191();
    if ((bool)uVar12) {
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
    uVar12 = *piVar1 == 0;
    FUN_32b2_6d14();
    FUN_32b2_6d14();
    FUN_32b2_7191();
    if (!(bool)uVar11 && !(bool)uVar12) {
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
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      uStack_6 = *(undefined2 *)(unaff_BP + -0x68);
      uStack_8 = *(undefined2 *)(unaff_BP + -0x6a);
      uStack_a = *(undefined2 *)(unaff_BP + -0x48);
      uStack_c = *(undefined2 *)(unaff_BP + -0x4a);
      uStack_10 = *(undefined2 *)(unaff_BP + -0x4e);
      uStack_12 = 0x32b2;
      uStack_14 = 0x9b0;
      FUN_32b2_6d14();
      uStack_1c = 0x9ba;
      FUN_32b2_6eb1();
      uStack_1c = 0x9c3;
      FUN_32b2_6d14();
      uStack_24 = 0x9cd;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x9d4;
      FUN_3ab8_5089();
      uVar11 = &stack0x0000 == (undefined1 *)0xffec;
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191();
      if ((bool)uVar11) {
        uVar7 = *(undefined2 *)(unaff_BP + 8);
        *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
        *(undefined2 *)(unaff_BP + -0x60) = uVar7;
      }
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191();
      if ((bool)uVar11) {
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
    uVar7 = *(undefined2 *)(unaff_BP + -0x36);
  }
  return uVar7;
}



/* 3ab8:5ba2  FUN_3ab8_5ba2  700 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_5ba2(int param_1,int param_2,int param_3,int param_4)

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
  undefined1 local_5a;
  undefined1 local_58;
  undefined2 local_2e [6];
  undefined2 local_22;
  undefined2 local_1e;
  undefined2 local_18 [5];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  if (*(int *)(param_4 * 4 + param_3 + 2) < 0) {
    return 0;
  }
  uStack_c = 0x22b2;
  uStack_e = 0x754;
  puVar8 = (undefined2 *)func_0x0000013f();
  puVar5 = (undefined2 *)puVar8;
  puVar4 = local_18;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  local_58 = 1;
  if (param_1 == 0) {
    local_5a = 0;
    goto LAB_3ab8_5dfa;
  }
  local_5a = 7;
  puVar5 = local_2e;
  puVar4 = (undefined2 *)(param_4 * 0x16 + param_2);
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = *puVar8;
  }
  local_1e._1_1_ = 0;
  local_1e._0_1_ = 1;
  puVar5 = &local_1e;
  puVar4 = local_2e;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = *puVar8;
  }
  local_22 = 0x7ab;
  func_0x00018396();
  uVar6 = (undefined1 *)0xffe7 < &local_1e;
  uVar7 = &stack0x0000 == (undefined1 *)0x6;
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029ae7();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029ae7();
  FUN_28b3_1181();
  if ((bool)uVar6 || (bool)uVar7) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar7) {
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1c08();
      FUN_28b3_1177();
      func_0x0002996b();
      uStack_c = 0x8d5;
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      uStack_c = 0x8ec;
      func_0x00029bb5();
      func_0x00029983();
      puVar5 = &local_1e;
      puVar4 = local_2e;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar1 = *puVar8;
      }
      local_22 = 0x909;
      func_0x00018396();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x0002996b();
      uStack_c = 0x92e;
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
LAB_3ab8_5dbf:
      uStack_c = 0x945;
      func_0x00029bb5();
      func_0x00029983();
      puVar5 = &local_1e;
      puVar4 = local_2e;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar1 = *puVar8;
      }
      local_22 = 0x962;
      func_0x00018396();
    }
  }
  else {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar7) {
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1c08();
      FUN_28b3_1177();
      func_0x0002996b();
      uStack_c = 0x825;
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      uStack_c = 0x83c;
      func_0x00029bb5();
      func_0x00029983();
      puVar5 = &local_1e;
      puVar4 = local_2e;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar1 = *puVar8;
      }
      local_22 = 0x859;
      func_0x00018396();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x0002996b();
      uStack_c = 0x87e;
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      goto LAB_3ab8_5dbf;
    }
  }
  if (*(int *)0xc04 == param_4) {
    local_58 = 0;
  }
LAB_3ab8_5dfa:
  puVar5 = local_2e;
  puVar4 = (undefined2 *)(param_4 * 0x16 + param_2);
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = *puVar8;
  }
  local_1e._1_1_ = local_5a;
  local_1e._0_1_ = local_58;
  puVar5 = &local_1e;
  puVar4 = local_2e;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = *puVar8;
  }
  local_22 = 0x9b2;
  puVar4 = &local_1e;
  func_0x00018396();
  if (param_1 == 0) {
    puVar5 = local_18;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar8;
    }
    local_22 = 0x9d2;
    func_0x00018396();
  }
  return 1;
}



/* 3ab8:5e5e  FUN_3ab8_5e5e  390 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_5e5e(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar7;
  undefined1 local_78;
  undefined2 local_42 [4];
  undefined1 local_3a [14];
  undefined2 uStack_2c;
  undefined2 local_28;
  undefined2 uStack_24;
  undefined2 local_22 [9];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  
  FUN_21f2_0ebc();
  iVar4 = *(int *)(param_4 * 4 + param_3 + 2);
  if ((iVar4 < 0) || ((iVar4 < 1 && (*(int *)(param_4 * 4 + param_3) == 0)))) {
    puStack_c = (undefined1 *)0x22b2;
    uVar3 = 0;
    uStack_e = 0xa1d;
    puVar7 = (undefined2 *)func_0x00000271();
    puVar5 = (undefined2 *)puVar7;
    puVar6 = local_22;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    if (param_1 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = 7;
      puVar5 = local_42;
      puVar6 = (undefined2 *)(param_4 * 0x20 + param_2);
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = *puVar7;
      }
      local_28 = 1;
      puVar5 = (undefined2 *)&stack0xffda;
      puVar6 = local_42;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = *puVar7;
      }
      local_28 = 0;
      FUN_12c1_0f1d();
      puStack_c = (undefined1 *)0xa7c;
      func_0x000297e6();
      puStack_c = (undefined1 *)0xa81;
      func_0x00029d78();
      puStack_c = (undefined1 *)0xa86;
      FUN_28b3_1c08();
      puStack_c = (undefined1 *)0xa8b;
      FUN_28b3_1177();
      puStack_c = (undefined1 *)0xa93;
      func_0x0002996b();
      puStack_c = (undefined1 *)0xa9b;
      func_0x00029983();
      puStack_c = (undefined1 *)0xaa3;
      func_0x000297e6();
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xaac;
      func_0x00029bb5();
      puStack_c = (undefined1 *)0xab2;
      func_0x00029983();
      puVar5 = &local_28;
      puVar6 = local_42;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = *puVar7;
      }
      uStack_2c = 0xac6;
      FUN_12c1_0f1d();
      puStack_c = (undefined1 *)0x11f2;
      uStack_e = 0xad2;
      func_0x000297e6();
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xada;
      func_0x00029b6d();
      puStack_c = local_3a;
      uStack_e = 0x22b2;
      uStack_10 = 0xae3;
      func_0x00029bb5();
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xae9;
      func_0x00029983();
      puVar5 = &uStack_24;
      puVar6 = local_42;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = *puVar7;
      }
      uVar3 = 0x11f2;
      local_28 = 0xafd;
      FUN_12c1_0f1d();
    }
    puVar5 = local_42;
    puVar6 = (undefined2 *)(param_4 * 0x20 + param_2);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = *puVar7;
    }
    local_28 = CONCAT11(local_78,1);
    puVar5 = (undefined2 *)&stack0xffda;
    puVar6 = local_42;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = *puVar7;
    }
    local_28 = uVar3;
    FUN_12c1_0f1d();
    if (param_1 == 0) {
      puVar5 = &local_28;
      puVar6 = local_22;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = *puVar7;
      }
      uStack_2c = 0xb58;
      FUN_12c1_0f1d();
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* 3ab8:5fe4  FUN_3ab8_5fe4  232 bytes, 0 callers */

void __cdecl16far
FUN_3ab8_5fe4(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_3c;
  int local_3a;
  
  FUN_21f2_0ebc();
  local_3c = *param_5;
  if (0 < local_3c) {
    func_0x0000daa6(0x22b2,0);
    *(undefined2 *)0xbc0 = 1;
    for (local_3a = 1; local_3a <= local_3c; local_3a = local_3a + 1) {
      iVar1 = *(int *)(local_3a * 4 + param_4 + 2);
      if ((iVar1 < 0) || ((iVar1 < 1 && (*(int *)(local_3a * 4 + param_4) == 0)))) {
        FUN_3ab8_5e5e(0,param_3,param_4,local_3a);
      }
      else {
        FUN_3ab8_5ba2(0,param_2,param_4,local_3a);
      }
    }
    if (param_1 != 0) {
      if (param_1 == -1) {
        local_3c = local_3c + -1;
        *param_5 = local_3c;
      }
      if (0 < local_3c) {
        func_0x0000daa6(0x885,0);
        for (local_3a = 1; local_3a <= local_3c; local_3a = local_3a + 1) {
          iVar1 = *(int *)(local_3a * 4 + param_4 + 2);
          if ((iVar1 < 0) || ((iVar1 < 1 && (*(int *)(local_3a * 4 + param_4) == 0)))) {
            FUN_3ab8_5e5e(1,param_3,param_4,local_3a);
          }
          else {
            FUN_3ab8_5ba2(1,param_2,param_4,local_3a);
          }
        }
        return;
      }
    }
    *param_5 = 0;
  }
  return;
}


