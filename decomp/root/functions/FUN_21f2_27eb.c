/* 21f2:27eb */

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16far
FUN_21f2_27eb(uint param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5,int param_6
             ,int param_7,undefined2 param_8,undefined2 param_9,undefined2 param_10,
             undefined2 param_11,undefined2 param_12,undefined2 param_13,undefined2 param_14,
             undefined2 param_15,undefined2 param_16,undefined2 param_17,undefined2 param_18,
             undefined2 param_19,undefined2 param_20,undefined2 param_21,undefined2 param_22,
             undefined2 param_23,undefined2 param_24,undefined2 param_25,undefined2 param_26,
             undefined2 param_27,undefined2 param_28,undefined2 param_29,undefined2 param_30,
             undefined2 param_31,undefined2 param_32,undefined2 param_33)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined1 extraout_AH;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint *puVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  undefined2 *puVar28;
  undefined2 *puVar29;
  undefined2 *puVar30;
  undefined2 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined2 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined2 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  uint *puVar40;
  uint *puVar41;
  undefined2 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  undefined2 *puVar45;
  undefined2 *puVar46;
  undefined1 *puVar47;
  undefined1 *puVar48;
  undefined1 *puVar49;
  undefined2 *puVar50;
  undefined2 *puVar51;
  undefined2 *puVar52;
  undefined1 *puVar53;
  undefined1 *puVar54;
  undefined2 *puVar55;
  undefined2 *puVar56;
  undefined2 *puVar57;
  undefined1 *puVar58;
  undefined2 *puVar59;
  undefined2 *puVar60;
  undefined2 *puVar61;
  undefined2 *puVar62;
  undefined1 *puVar63;
  int unaff_SI;
  int unaff_DI;
  undefined2 uVar64;
  undefined2 uVar65;
  uint unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar66;
  bool bVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined2 local_a4;
  undefined1 local_8e [4];
  undefined1 local_8a [4];
  undefined1 local_86 [4];
  uint local_82;
  int local_80;
  undefined1 local_7e [20];
  undefined2 local_6a [23];
  undefined2 local_3c [13];
  byte local_21;
  byte local_20;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  uint local_6;
  uint uVar70;
  
  local_6 = 0x4716;
  FUN_32b2_02bc();
  if (*(char *)0xc0f != '\0') {
    return 0;
  }
  *(undefined1 *)0xc0e = 1;
  local_6 = 0x32b2;
  local_8 = 0x4731;
  FUN_1885_5256();
  if (*(int *)0x16c < 1) {
    FUN_1885_3b7a();
    if (param_1 != 0) goto LAB_21f2_2864;
    if (*(char *)0xb782 == '\0') {
      param_1 = *(int *)0xa60 + -1;
      local_6 = 0x4810;
      FUN_1885_1f1b();
      param_2 = 0x4818;
      FUN_1885_23c4();
      param_5 = 0xffff;
      param_4 = 7;
      param_2 = 0x1d;
      param_1 = 0x1e20;
      FUN_1def_23c5();
    }
    else {
      param_1 = 0x1885;
      FUN_1885_3b04();
      param_2 = *(int *)0x1b3e + -1;
      param_1 = *(int *)0xa5e + 1;
      local_6 = 0x47ac;
      FUN_1885_1f1b();
      param_2 = 0;
      param_1 = 1;
      local_6 = 0;
      local_8 = 0x1885;
      local_a = 0x47d1;
      FUN_1def_1460();
      param_5 = 0;
      param_4 = 0;
      param_2 = 7;
      param_1 = *(uint *)0xa60;
      local_6 = 0x47f2;
      FUN_1def_1460();
    }
    param_7 = 0x1def;
    uVar65 = 0x1885;
    param_6 = 0x4839;
    FUN_1885_1f49();
  }
  else if (param_1 == 0) {
    local_6 = *(int *)0xa5c + 1;
    local_8 = 0x1885;
    local_a = 0x4758;
    FUN_1885_1f1b();
    param_7 = *(int *)0xa60 + -1;
    param_6 = *(int *)0x1b3e + -1;
    param_5 = 0x30;
    param_4 = *(int *)0xa5c + 1;
    uVar65 = 0x1def;
    param_2 = 0x4773;
    FUN_1def_12e8();
  }
  else {
LAB_21f2_2864:
    uVar65 = 0x1885;
  }
  param_8 = 0x484d;
  param_9 = uVar65;
  FUN_32b2_6d9b();
  param_11 = 0x32b2;
  param_10 = 0x4856;
  FUN_32b2_6e4b();
  param_13 = 0x32b2;
  param_12 = 0x485e;
  FUN_32b2_6ef9();
  param_15 = 0x32b2;
  param_14 = 0x4872;
  FUN_32b2_6d9b();
  param_17 = 0x32b2;
  param_16 = 0x487b;
  FUN_32b2_6e63();
  local_8 = 0x709;
  local_6 = CONCAT11(local_6._1_1_,*(undefined1 *)0xb310);
  uVar68 = *(byte *)0x74 == 6;
  if (*(byte *)0x74 < 6) {
    if (*(char *)0x130 != '\0') {
      param_17 = 0x32b2;
      param_16 = 0x48b2;
      FUN_32b2_6d9b();
      param_19 = 0x32b2;
      param_18 = 0x48bb;
      FUN_32b2_707d();
      param_21 = 0x32b2;
      param_20 = 0x48c4;
      FUN_32b2_704d();
      param_23 = 0x32b2;
      param_22 = 0x48cd;
      FUN_32b2_6e63();
    }
    local_18 = *(undefined2 *)0x92ac;
    local_16 = *(undefined2 *)0x92ae;
    local_14 = local_18;
    local_12 = local_16;
    local_10 = local_18;
    local_e = local_16;
    param_17 = 0;
    puVar34 = &param_6;
    puVar45 = &local_18;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar34;
      puVar34 = puVar34 + 1;
      puVar1 = puVar45;
      puVar45 = puVar45 + 1;
      *puVar2 = *puVar1;
    }
    param_5 = 0x32b2;
    local_6 = 0x4911;
    param_4 = unaff_SI;
    FUN_21f2_6476();
    param_11 = 0;
    puVar34 = (undefined2 *)&stack0x0002;
    puVar45 = &local_18;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar34;
      puVar34 = puVar34 + 1;
      puVar1 = puVar45;
      puVar45 = puVar45 + 1;
      *puVar2 = *puVar1;
    }
    FUN_21f2_6476();
    local_c = *(undefined2 *)0x92ac;
    local_a = *(undefined2 *)0x92ae;
    param_13 = 0;
    puVar34 = &param_2;
    puVar45 = &local_18;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar34;
      puVar34 = puVar34 + 1;
      puVar1 = puVar45;
      puVar45 = puVar45 + 1;
      *puVar2 = *puVar1;
    }
    param_1 = 0x32b2;
    FUN_21f2_6476();
    local_18 = *(undefined2 *)0x92ac;
    local_16 = *(undefined2 *)0x92ae;
    local_14 = *(undefined2 *)0x92ac;
    local_12 = *(undefined2 *)0x92ae;
    param_15 = 0;
    puVar34 = (undefined2 *)&stack0x000a;
    puVar45 = &local_18;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar34;
      puVar34 = puVar34 + 1;
      puVar1 = puVar45;
      puVar45 = puVar45 + 1;
      *puVar2 = *puVar1;
    }
    param_2 = 0x49bb;
    param_1 = unaff_SS;
    FUN_21f2_6476();
    uVar69 = (undefined1 *)0xffe7 < &param_6;
    uVar68 = &stack0x0000 == (undefined1 *)0xffda;
    uVar70 = unaff_SS;
  }
  else {
    uVar69 = false;
    uVar70 = 0;
  }
  param_17 = 0x32b2;
  param_16 = 0x49c7;
  FUN_32b2_6d14();
  param_19 = 0x32b2;
  param_18 = 0x49d0;
  FUN_32b2_6cc6();
  param_21 = 0x32b2;
  param_20 = 0x49d5;
  FUN_32b2_7191();
  uVar66 = uVar69;
  if (!(bool)uVar69 && !(bool)uVar68) {
    param_21 = 0x32b2;
    param_20 = 0x49e0;
    FUN_32b2_6d14();
    param_23 = 0x32b2;
    param_22 = 0x49e9;
    FUN_32b2_6cc6();
    param_25 = 0x32b2;
    param_24 = 0x49ee;
    FUN_32b2_7191();
    uVar66 = 0;
    if ((bool)uVar69) {
      bVar5 = true;
      bVar4 = true;
      goto LAB_21f2_2b06;
    }
  }
  bVar5 = false;
  param_21 = 0x32b2;
  param_20 = 0x4a0a;
  FUN_32b2_6cc6();
  param_23 = 0x32b2;
  param_22 = 0x4a13;
  FUN_32b2_6cc6();
  param_25 = 0x32b2;
  param_24 = 0x4a18;
  FUN_32b2_7191();
  if ((bool)uVar66) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
LAB_21f2_2b06:
  param_21 = 0x32b2;
  param_20 = 0x4a2f;
  FUN_32b2_6cc6();
  param_23 = 0x32b2;
  param_22 = 19000;
  FUN_32b2_704d();
  param_25 = 0x32b2;
  param_24 = 0x4a41;
  FUN_32b2_6d9b();
  param_27 = 0x32b2;
  param_26 = 0x4a46;
  FUN_32b2_7178();
  param_27 = 0x32b2;
  param_26 = 0x4a4e;
  FUN_32b2_6e63();
  param_27 = 0x32b2;
  param_26 = 0x4a57;
  FUN_32b2_6cc6();
  param_29 = 0x32b2;
  param_28 = 0x4a60;
  FUN_32b2_704d();
  param_31 = 0x32b2;
  param_30 = 0x4a69;
  FUN_32b2_6d9b();
  param_33 = 0x32b2;
  param_32 = 0x4a6e;
  FUN_32b2_718c();
  param_33 = 0x32b2;
  uVar65 = 0x32b2;
  puVar63 = (undefined1 *)ZEXT24(&param_32);
  param_32 = 0x4a76;
  FUN_32b2_6e63();
  *(undefined1 *)0xc10 = 0;
  if (*(char *)0x136 != '\0') {
    for (unaff_SI = 0; unaff_SI < 0x100; unaff_SI = unaff_SI + 1) {
      puVar10 = (undefined1 *)puVar63;
      *(int *)(puVar10 + -2) = unaff_SI;
      *(undefined2 *)(puVar10 + -4) = 0x32b2;
      puVar11 = (undefined2 *)(puVar10 + -6);
      *(undefined2 *)(puVar10 + -6) = 0x4a92;
      iVar6 = FUN_21f2_0680();
      puVar63 = (undefined1 *)ZEXT24(puVar11 + 3);
      if (iVar6 != 0) {
        puVar11[2] = unaff_SI;
        puVar11[1] = 0x32b2;
        *puVar11 = 0x4a9c;
        iVar6 = FUN_21f2_06d1();
        puVar63 = (undefined1 *)ZEXT24((undefined1 *)((int)puVar11 + 6));
        if ((iVar6 == 0) &&
           ((*(char *)(unaff_SI + -0x4b5a) != '\0' || (*(char *)(unaff_SI + -0x4488) != '\0')))) {
          *(undefined1 *)0xc10 = 1;
          break;
        }
      }
    }
  }
LAB_21f2_2b94:
  if (*(int *)0xc0c == 1) {
    local_82 = 1;
    local_80 = 0;
  }
  else {
    local_82 = *(uint *)0x148;
    local_80 = *(int *)0x14a;
  }
  do {
    if ((local_80 < 0) ||
       ((((local_80 < 1 && (local_82 == 0)) || (*(int *)0x14a < local_80)) ||
        ((*(int *)0x14a <= local_80 && (*(uint *)0x148 < local_82)))))) break;
    puVar21 = (undefined1 *)puVar63;
    *(int *)(puVar21 + -2) = local_80;
    *(uint *)(puVar21 + -4) = local_82;
    *(undefined2 *)(puVar21 + -6) = uVar65;
    uVar65 = 0x1000;
    puVar22 = (uint *)(puVar21 + -8);
    *(undefined2 *)(puVar21 + -8) = 0x4c0f;
    iVar6 = local_80;
    puVar34 = (undefined2 *)FUN_1000_013f();
    puVar22[3] = unaff_SI;
    puVar22[2] = unaff_DI;
    puVar22[1] = unaff_DS;
    puVar45 = &local_18;
    *puVar22 = unaff_SS;
    uVar64 = *puVar22;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar2 = puVar45;
      puVar45 = puVar45 + 1;
      puVar1 = puVar34;
      puVar34 = puVar34 + 1;
      *puVar2 = *puVar1;
    }
    unaff_DS = puVar22[1];
    unaff_DI = puVar22[2];
    unaff_SI = puVar22[3];
    puVar22[3] = local_6 & 0xff;
    puVar22[2] = 0x1000;
    puVar23 = puVar22 + 1;
    puVar22[1] = 0x4c2f;
    iVar6 = FUN_21f2_0680();
    puVar63 = (undefined1 *)ZEXT24(puVar23 + 3);
    if (((iVar6 == 0) || ((*(char *)0xb9e != '\0' && ((uint)local_8._1_1_ != *(uint *)0xa6a)))) ||
       (0x4f < local_8._1_1_)) goto LAB_21f2_2cb3;
    if (*(char *)0x136 == '\0') {
LAB_21f2_2bc2:
      puVar13 = (undefined1 *)((int)puVar23 + 6);
      local_a4 = *(undefined2 *)((local_8 >> 8) * 2 + 0xa70);
LAB_21f2_2bd1:
      if ((char)local_82 == '\0') {
        *(undefined2 *)(puVar13 + -2) = 0x1000;
        uVar65 = 0x1885;
        puVar12 = puVar13 + -4;
        *(undefined2 *)(puVar13 + -4) = 0x4afc;
        unaff_DI = FUN_1885_532a();
        puVar13 = puVar12 + 4;
        puVar63 = (undefined1 *)ZEXT24(puVar12 + 4);
        if (unaff_DI != 0) {
          if (unaff_DI == -1) {
            *(int *)0xc0c = -*(int *)0xc0c;
            goto LAB_21f2_2b94;
          }
          if (unaff_DI != 1) goto LAB_21f2_2ed1;
          break;
        }
      }
      if (((uVar70 & 0x10) == 0) || (!bVar4)) {
        if (bVar5) {
          *(undefined2 *)(puVar13 + -2) = uVar65;
          puVar24 = (undefined2 *)(puVar13 + -4);
          *(undefined2 *)(puVar13 + -4) = 0x4c8a;
          FUN_32b2_6cc6();
          puVar24[1] = 0x32b2;
          *puVar24 = 0x4c92;
          FUN_32b2_7095();
          puVar24[1] = 0x32b2;
          *puVar24 = 0x4c9a;
          FUN_32b2_6e63();
          *(undefined2 *)((int)puVar24 + -2) = 0x32b2;
          puVar25 = (undefined2 *)((int)puVar24 + -4);
          *(undefined2 *)((int)puVar24 + -4) = 0x4ca2;
          FUN_32b2_6cc6();
          puVar25[1] = 0x32b2;
          *puVar25 = 0x4caa;
          FUN_32b2_701d();
          puVar25[1] = 0x32b2;
          *puVar25 = 0x4cb3;
          FUN_32b2_6e63();
          *(undefined2 *)((int)puVar25 + -2) = 0x32b2;
          puVar26 = (undefined2 *)((int)puVar25 + -4);
          *(undefined2 *)((int)puVar25 + -4) = 0x4cbb;
          FUN_32b2_6cc6();
          puVar26[1] = 0x32b2;
          *puVar26 = 0x4cc3;
          FUN_32b2_7095();
          puVar26[1] = 0x32b2;
          *puVar26 = 0x4ccc;
          FUN_32b2_6e63();
          *(undefined2 *)((int)puVar26 + -2) = 0x32b2;
          puVar27 = (undefined2 *)((int)puVar26 + -4);
          *(undefined2 *)((int)puVar26 + -4) = 0x4cd4;
          FUN_32b2_6cc6();
          puVar27[1] = 0x32b2;
          *puVar27 = 0x4cdc;
          FUN_32b2_701d();
          puVar32 = (undefined1 *)((int)puVar27 + 4);
        }
        else {
          *(undefined2 *)(puVar13 + -2) = uVar65;
          puVar28 = (undefined2 *)(puVar13 + -4);
          *(undefined2 *)(puVar13 + -4) = 0x4ce6;
          FUN_32b2_6cc6();
          puVar28[1] = 0x32b2;
          *puVar28 = 0x4cef;
          FUN_32b2_704d();
          puVar28[1] = 0x32b2;
          *puVar28 = 0x4cf7;
          FUN_32b2_7095();
          puVar28[1] = 0x32b2;
          *puVar28 = 0x4cff;
          FUN_32b2_6e63();
          *(undefined2 *)((int)puVar28 + -2) = 0x32b2;
          puVar29 = (undefined2 *)((int)puVar28 + -4);
          *(undefined2 *)((int)puVar28 + -4) = 0x4d07;
          FUN_32b2_6cc6();
          puVar29[1] = 0x32b2;
          *puVar29 = 0x4d10;
          FUN_32b2_704d();
          puVar29[1] = 0x32b2;
          *puVar29 = 0x4d18;
          FUN_32b2_7035();
          puVar29[1] = 0x32b2;
          *puVar29 = 0x4d21;
          FUN_32b2_6e63();
          *(undefined2 *)((int)puVar29 + -2) = 0x32b2;
          puVar30 = (undefined2 *)((int)puVar29 + -4);
          *(undefined2 *)((int)puVar29 + -4) = 0x4d29;
          FUN_32b2_6cc6();
          puVar30[1] = 0x32b2;
          *puVar30 = 0x4d32;
          FUN_32b2_704d();
          puVar30[1] = 0x32b2;
          *puVar30 = 0x4d3a;
          FUN_32b2_7095();
          puVar30[1] = 0x32b2;
          *puVar30 = 0x4d43;
          FUN_32b2_6e63();
          *(undefined2 *)((int)puVar30 + -2) = 0x32b2;
          puVar31 = (undefined2 *)((int)puVar30 + -4);
          *(undefined2 *)((int)puVar30 + -4) = 0x4d4b;
          FUN_32b2_6cc6();
          puVar31[1] = 0x32b2;
          *puVar31 = 0x4d54;
          FUN_32b2_704d();
          puVar31[1] = 0x32b2;
          *puVar31 = 0x4d5c;
          FUN_32b2_7035();
          puVar32 = (undefined1 *)((int)puVar31 + 4);
        }
        *(undefined2 *)(puVar32 + -2) = 0x32b2;
        puVar19 = puVar32 + -4;
        *(undefined2 *)(puVar32 + -4) = 0x4d65;
        uVar7 = FUN_32b2_6e63();
        *(uint *)(puVar19 + -2) = uVar7 & 0xff00;
        *(undefined2 *)(puVar19 + -4) = *(undefined2 *)((local_8 & 0xff) * 2 + 0xa88);
        *(undefined2 *)(puVar19 + -6) = local_a4;
        *(undefined1 **)(puVar19 + -8) = local_8e;
        *(undefined1 **)(puVar19 + -10) = local_86;
        *(undefined1 **)(puVar19 + -0xc) = local_8a;
        *(undefined1 **)(puVar19 + -0xe) = local_7e;
      }
      else {
        if (bVar5) {
          *(undefined2 *)(puVar13 + -2) = uVar65;
          puVar14 = (undefined2 *)(puVar13 + -4);
          *(undefined2 *)(puVar13 + -4) = 0x4b49;
          FUN_32b2_6cc6();
          puVar14[1] = 0x32b2;
          *puVar14 = 0x4b51;
          FUN_32b2_7095();
          puVar14[1] = 0x32b2;
          *puVar14 = 0x4b59;
          FUN_32b2_6e63();
          *(undefined2 *)((int)puVar14 + -2) = 0x32b2;
          puVar15 = (undefined2 *)((int)puVar14 + -4);
          *(undefined2 *)((int)puVar14 + -4) = 0x4b61;
          FUN_32b2_6cc6();
          puVar15[1] = 0x32b2;
          *puVar15 = 0x4b69;
          FUN_32b2_701d();
          puVar18 = (undefined1 *)((int)puVar15 + 4);
        }
        else {
          *(undefined2 *)(puVar13 + -2) = uVar65;
          puVar16 = (undefined2 *)(puVar13 + -4);
          *(undefined2 *)(puVar13 + -4) = 0x4b73;
          FUN_32b2_6cc6();
          puVar16[1] = 0x32b2;
          *puVar16 = 0x4b7c;
          FUN_32b2_704d();
          puVar16[1] = 0x32b2;
          *puVar16 = 0x4b84;
          FUN_32b2_7095();
          puVar16[1] = 0x32b2;
          *puVar16 = 0x4b8c;
          FUN_32b2_6e63();
          *(undefined2 *)((int)puVar16 + -2) = 0x32b2;
          puVar17 = (undefined2 *)((int)puVar16 + -4);
          *(undefined2 *)((int)puVar16 + -4) = 0x4b94;
          FUN_32b2_6cc6();
          puVar17[1] = 0x32b2;
          *puVar17 = 0x4b9d;
          FUN_32b2_704d();
          puVar17[1] = 0x32b2;
          *puVar17 = 0x4ba5;
          FUN_32b2_7035();
          puVar18 = (undefined1 *)((int)puVar17 + 4);
        }
        *(undefined2 *)(puVar18 + -2) = 0x32b2;
        puVar19 = puVar18 + -4;
        *(undefined2 *)(puVar18 + -4) = 0x4bae;
        FUN_32b2_6e63();
        *(uint *)(puVar19 + -2) = CONCAT11(extraout_AH,1);
        *(undefined2 *)(puVar19 + -4) = *(undefined2 *)((local_8 & 0xff) * 2 + 0xa88);
        *(undefined2 *)(puVar19 + -6) = local_a4;
        *(undefined1 **)(puVar19 + -8) = local_8a;
        *(undefined1 **)(puVar19 + -10) = local_7e;
        *(undefined1 **)(puVar19 + -0xc) = local_8a;
        *(undefined1 **)(puVar19 + -0xe) = local_7e;
      }
      *(undefined2 *)(puVar19 + -0x10) = 0x32b2;
      uVar65 = 0x1def;
      puVar20 = puVar19 + -0x12;
      *(undefined2 *)(puVar19 + -0x12) = 0x4bd0;
      FUN_1def_17bb();
      puVar63 = (undefined1 *)ZEXT24(puVar20 + 0x12);
    }
    else {
      puVar23[2] = local_6 & 0xff;
      puVar23[1] = 0x1000;
      *puVar23 = 0x4c60;
      iVar6 = FUN_21f2_06d1();
      puVar13 = (undefined1 *)((int)puVar23 + 6);
      puVar63 = (undefined1 *)ZEXT24((undefined1 *)((int)puVar23 + 6));
      if (iVar6 == 0) {
        if (*(char *)0xc10 != '\0') {
          local_a4 = 8;
          goto LAB_21f2_2bd1;
        }
      }
      else if (*(char *)0xc10 == '\0') goto LAB_21f2_2bc2;
    }
LAB_21f2_2cb3:
    uVar7 = *(uint *)0xc0c;
    bVar67 = CARRY2(local_82,uVar7);
    local_82 = local_82 + uVar7;
    local_80 = local_80 + ((int)uVar7 >> 0xf) + (uint)bVar67;
  } while( true );
LAB_21f2_2bf3:
  if (*(int *)0xc0c == 1) {
    local_82 = 1;
    local_80 = 0;
  }
  else {
    local_82 = *(uint *)0x14c;
    local_80 = *(int *)0x14e;
  }
  do {
    puVar39 = (undefined1 *)puVar63;
    if (((local_80 < 0) || (((local_80 < 1 && (local_82 == 0)) || (*(int *)0x14e < local_80)))) ||
       ((*(int *)0x14e <= local_80 && (*(uint *)0x14c < local_82)))) goto LAB_21f2_2ea7;
    *(int *)(puVar39 + -2) = local_80;
    *(uint *)(puVar39 + -4) = local_82;
    *(undefined2 *)(puVar39 + -6) = uVar65;
    uVar65 = 0x1000;
    puVar40 = (uint *)(puVar39 + -8);
    *(undefined2 *)(puVar39 + -8) = 0x4e6b;
    iVar6 = local_80;
    puVar34 = (undefined2 *)FUN_1000_0271();
    puVar40[3] = unaff_SI;
    puVar40[2] = unaff_DI;
    puVar40[1] = unaff_DS;
    puVar45 = local_3c;
    *puVar40 = unaff_SS;
    uVar64 = *puVar40;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar2 = puVar45;
      puVar45 = puVar45 + 1;
      puVar1 = puVar34;
      puVar34 = puVar34 + 1;
      *puVar2 = *puVar1;
    }
    unaff_DS = puVar40[1];
    iVar6 = puVar40[2];
    unaff_SI = puVar40[3];
    puVar63 = (undefined1 *)ZEXT24(puVar40 + 4);
    if (((*(char *)0xb9e == '\0') || ((uint)local_21 == *(uint *)0xa6a)) && (local_21 < 0x5a)) {
      uVar7 = (uint)local_20;
      puVar40[3] = uVar7;
      puVar40[2] = 0x1000;
      puVar41 = puVar40 + 1;
      puVar40[1] = 0x4ea7;
      iVar8 = FUN_21f2_0680();
      puVar45 = puVar41 + 3;
      puVar63 = (undefined1 *)ZEXT24(puVar41 + 3);
      if (iVar8 != 0) {
        if (*(char *)0x136 == '\0') {
LAB_21f2_2e87:
          if ((local_82 & 0xf) == 0) {
            *(undefined2 *)((int)puVar45 + -2) = 0x1000;
            uVar65 = 0x1885;
            puVar33 = (undefined1 *)((int)puVar45 + -4);
            *(undefined2 *)((int)puVar45 + -4) = 0x4db2;
            unaff_DI = FUN_1885_532a();
            puVar39 = puVar33 + 4;
            puVar45 = (undefined2 *)(puVar33 + 4);
            puVar63 = (undefined1 *)ZEXT24(puVar33 + 4);
            iVar6 = 0;
            if (unaff_DI != 0) break;
          }
          puVar37 = (undefined2 *)((int)puVar45 + -0x20);
          *(int *)((int)puVar45 + -0x22) = iVar6;
          *(int *)((int)puVar45 + -0x24) = unaff_SI;
          puVar34 = local_3c;
          *(uint *)((int)puVar45 + -0x26) = unaff_SS;
          uVar64 = *(undefined2 *)((int)puVar45 + -0x26);
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar37;
            puVar37 = puVar37 + 1;
            puVar1 = puVar34;
            puVar34 = puVar34 + 1;
            *puVar2 = *puVar1;
          }
          unaff_SI = *(int *)((int)puVar45 + -0x24);
          iVar6 = *(int *)((int)puVar45 + -0x22);
          *(undefined2 *)((int)puVar45 + -0x22) = uVar65;
          puVar38 = (undefined1 *)((int)puVar45 + -0x24);
          *(undefined2 *)((int)puVar45 + -0x24) = 0x4e2f;
          FUN_21f2_1c0d();
          puVar63 = (undefined1 *)ZEXT24(puVar38 + 0x24);
        }
        else {
          puVar41[2] = uVar7;
          puVar41[1] = 0x1000;
          *puVar41 = 0x4ec0;
          iVar8 = FUN_21f2_06d1();
          puVar45 = (undefined2 *)((int)puVar41 + 6);
          puVar63 = (undefined1 *)ZEXT24((undefined1 *)((int)puVar41 + 6));
          if (iVar8 == 0) {
            if (*(char *)0xc10 != '\0') {
              local_21 = 8;
              goto LAB_21f2_2e87;
            }
          }
          else {
            puVar45 = (undefined2 *)((int)puVar41 + 6);
            if (*(char *)0xc10 == '\0') goto LAB_21f2_2e87;
          }
        }
      }
    }
    uVar7 = *(uint *)0xc0c;
    bVar67 = CARRY2(local_82,uVar7);
    local_82 = local_82 + uVar7;
    local_80 = local_80 + ((int)uVar7 >> 0xf) + (uint)bVar67;
    unaff_DI = iVar6;
  } while( true );
  if (unaff_DI != -1) goto LAB_21f2_2ea2;
  *(int *)0xc0c = -*(int *)0xc0c;
  goto LAB_21f2_2bf3;
LAB_21f2_2ea2:
  if (unaff_DI != 1) goto LAB_21f2_2ed1;
LAB_21f2_2ea7:
  puVar34 = (undefined2 *)(puVar39 + -0x18);
  *(int *)(puVar39 + -0x1a) = unaff_DI;
  *(int *)(puVar39 + -0x1c) = unaff_SI;
  puVar45 = local_6a;
  *(uint *)(puVar39 + -0x1e) = unaff_SS;
  uVar64 = *(undefined2 *)(puVar39 + -0x1e);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar34;
    puVar34 = puVar34 + 1;
    puVar1 = puVar45;
    puVar45 = puVar45 + 1;
    *puVar2 = *puVar1;
  }
  unaff_SI = *(int *)(puVar39 + -0x1c);
  unaff_DI = *(int *)(puVar39 + -0x1a);
  *(undefined2 *)(puVar39 + -0x1a) = 2;
  *(undefined2 *)(puVar39 + -0x1c) = uVar65;
  uVar65 = 0x28b3;
  puVar35 = puVar39 + -0x1e;
  *(undefined2 *)(puVar39 + -0x1e) = 0x4de6;
  iVar6 = FUN_28b3_0a63();
  puVar63 = (undefined1 *)ZEXT24(puVar35 + 0x1a);
  if (iVar6 == 0x20) goto LAB_21f2_2ed1;
  *(undefined2 *)(puVar35 + 0x18) = 0;
  *(undefined2 *)(puVar35 + 0x16) = 2;
  *(undefined2 *)(puVar35 + 0x14) = 0x28b3;
  uVar65 = 0x2bb4;
  puVar42 = (undefined2 *)(puVar35 + 0x12);
  *(undefined2 *)(puVar35 + 0x12) = 0x4ee5;
  iVar6 = FUN_2bb4_3645();
  puVar63 = (undefined1 *)ZEXT24(puVar42 + 4);
  if (iVar6 == 0x20) goto LAB_21f2_2ed1;
  if ((*(char *)0x136 == '\0') || (*(char *)0xc10 == '\0')) goto LAB_21f2_2fe5;
  *(undefined1 *)0xc10 = 0;
  goto LAB_21f2_2b94;
LAB_21f2_2fe5:
  puVar42[3] = 0;
  puVar42[2] = 2;
  puVar42[1] = 0x2bb4;
  uVar65 = 0x2bb4;
  *puVar42 = 0x4f11;
  iVar6 = FUN_2bb4_309a();
  puVar45 = (undefined2 *)((int)puVar42 + 8);
  puVar63 = (undefined1 *)ZEXT24((undefined1 *)((int)puVar42 + 8));
  if (iVar6 == 0x20) {
LAB_21f2_2ed1:
    puVar36 = (undefined1 *)puVar63;
    if (((param_1 == 0) && (*(int *)0xbc2 != 0)) && (*(char *)0xb9e == '\0')) {
      local_80 = 0;
      for (local_82 = 1;
          (local_80 <= *(int *)0x14a && ((local_80 < *(int *)0x14a || (local_82 <= *(uint *)0x148)))
          ); local_82 = local_82 + 1) {
        puVar48 = (undefined1 *)puVar63;
        *(int *)(puVar48 + -2) = local_80;
        *(uint *)(puVar48 + -4) = local_82;
        *(undefined2 *)(puVar48 + -6) = uVar65;
        puVar49 = puVar48 + -8;
        *(undefined2 *)(puVar48 + -8) = 0x4fcd;
        iVar6 = local_80;
        iVar8 = FUN_1000_013f();
        *(uint *)(puVar49 + 6) = (uint)*(byte *)(iVar8 + 0x12);
        *(undefined2 *)(puVar49 + 4) = 0x1000;
        puVar50 = (undefined2 *)(puVar49 + 2);
        *(undefined2 *)(puVar49 + 2) = 0x4fde;
        iVar8 = FUN_21f2_06d1();
        puVar52 = puVar50 + 3;
        if (iVar8 == 0) {
          puVar50[2] = local_80;
          puVar50[1] = local_82;
          *puVar50 = 0x1000;
          puVar51 = puVar50 + -1;
          puVar50[-1] = 0x4fee;
          iVar8 = FUN_1000_013f();
          puVar52 = (undefined2 *)((int)puVar51 + 8);
          *(byte *)(iVar8 + 0x14) = *(byte *)(iVar8 + 0x14) & 0xfd;
        }
        puVar63 = (undefined1 *)ZEXT24(puVar52);
        uVar65 = 0x1000;
        local_80 = local_80 + (uint)(0xfffe < local_82);
      }
      local_80 = 0;
      for (local_82 = 1;
          (local_80 <= *(int *)0x14e && ((local_80 < *(int *)0x14e || (local_82 <= *(uint *)0x14c)))
          ); local_82 = local_82 + 1) {
        puVar53 = (undefined1 *)puVar63;
        *(int *)(puVar53 + -2) = local_80;
        *(uint *)(puVar53 + -4) = local_82;
        *(undefined2 *)(puVar53 + -6) = uVar65;
        puVar54 = puVar53 + -8;
        *(undefined2 *)(puVar53 + -8) = 0x502a;
        iVar6 = local_80;
        iVar8 = FUN_1000_0271();
        *(uint *)(puVar54 + 6) = (uint)*(byte *)(iVar8 + 0x1c);
        *(undefined2 *)(puVar54 + 4) = 0x1000;
        puVar55 = (undefined2 *)(puVar54 + 2);
        *(undefined2 *)(puVar54 + 2) = 0x503b;
        iVar8 = FUN_21f2_06d1();
        puVar57 = puVar55 + 3;
        if (iVar8 == 0) {
          puVar55[2] = local_80;
          puVar55[1] = local_82;
          *puVar55 = 0x1000;
          puVar56 = puVar55 + -1;
          puVar55[-1] = 0x504b;
          iVar8 = FUN_1000_0271();
          puVar57 = (undefined2 *)((int)puVar56 + 8);
          *(byte *)(iVar8 + 0x1e) = *(byte *)(iVar8 + 0x1e) & 0xfd;
        }
        puVar63 = (undefined1 *)ZEXT24(puVar57);
        uVar65 = 0x1000;
        local_80 = local_80 + (uint)(0xfffe < local_82);
      }
      iVar6 = local_80;
      for (iVar8 = 1; iVar8 <= *(int *)0x152; iVar8 = iVar8 + 1) {
        puVar58 = (undefined1 *)puVar63;
        *(int *)(puVar58 + -2) = iVar8;
        *(undefined2 *)(puVar58 + -4) = uVar65;
        puVar59 = (undefined2 *)(puVar58 + -6);
        *(undefined2 *)(puVar58 + -6) = 0x5063;
        iVar9 = FUN_1000_03ef();
        puVar59[2] = (uint)*(byte *)(iVar9 + 8);
        puVar59[1] = 0x1000;
        *puVar59 = 0x5073;
        iVar9 = FUN_21f2_06d1();
        puVar60 = puVar59 + 3;
        if (iVar9 == 0) {
          puVar59[2] = iVar8;
          puVar59[1] = 0x1000;
          *puVar59 = 0x507e;
          iVar9 = FUN_1000_03ef();
          puVar60 = (undefined2 *)((int)puVar59 + 6);
          *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfd;
        }
        uVar65 = 0x1000;
        puVar63 = (undefined1 *)ZEXT24(puVar60);
      }
      for (iVar8 = 1; puVar36 = (undefined1 *)puVar63, iVar8 <= *(int *)0x150; iVar8 = iVar8 + 1) {
        *(int *)(puVar36 + -2) = iVar8;
        *(undefined2 *)(puVar36 + -4) = uVar65;
        puVar61 = (undefined2 *)(puVar36 + -6);
        *(undefined2 *)(puVar36 + -6) = 0x509a;
        iVar9 = FUN_1000_0398();
        puVar61[2] = (uint)*(byte *)(iVar9 + 0x15);
        puVar61[1] = 0x1000;
        *puVar61 = 0x50aa;
        iVar9 = FUN_21f2_06d1();
        puVar62 = puVar61 + 3;
        if (iVar9 == 0) {
          puVar61[2] = iVar8;
          puVar61[1] = 0x1000;
          *puVar61 = 0x50b5;
          iVar9 = FUN_1000_0398();
          puVar62 = (undefined2 *)((int)puVar61 + 6);
          *(byte *)(iVar9 + 0x16) = *(byte *)(iVar9 + 0x16) & 0xfd;
        }
        uVar65 = 0x1000;
        puVar63 = (undefined1 *)ZEXT24(puVar62);
      }
    }
    if ((param_1 == 0) && (*(int *)0x16c == 0)) {
      *(undefined2 *)(puVar36 + -2) = uVar65;
      *(undefined2 *)(puVar36 + -4) = 0x50d8;
      FUN_1885_2414();
    }
    uVar65 = 0xffff;
  }
  else {
    if (param_1 == 0) {
      puVar45 = (undefined2 *)((int)puVar42 + 8);
      if ((*(int *)0xbc2 != 0) &&
         (puVar45 = (undefined2 *)((int)puVar42 + 8), *(char *)0xb9e == '\0')) {
        *(undefined2 *)((int)puVar42 + 6) = 1;
        *(undefined2 *)((int)puVar42 + 4) = 0x2bb4;
        uVar65 = 0x17a6;
        puVar43 = (undefined1 *)((int)puVar42 + 2);
        *(undefined2 *)((int)puVar42 + 2) = 0x4f38;
        iVar6 = FUN_17a6_0635();
        puVar45 = (undefined2 *)(puVar43 + 6);
        puVar63 = (undefined1 *)ZEXT24(puVar43 + 6);
        if (iVar6 == 0x20) goto LAB_21f2_2ed1;
      }
      if ((*(int *)0xc06 != 0) && (*(char *)0xb9e == '\0')) {
        puVar44 = (undefined1 *)((int)puVar45 + -2);
        *(undefined2 *)((int)puVar45 + -2) = 1;
        pcVar3 = (code *)swi(0x3f);
        (*pcVar3)();
        puVar45 = (undefined2 *)(puVar44 + 2);
      }
    }
    if ((*(int *)0x116c != 0) && (*(int *)0x116c != -1)) {
      uVar68 = 0;
      uVar69 = param_1 == 0;
      if ((bool)uVar69) {
        *(undefined2 *)((int)puVar45 + -2) = uVar65;
        puVar46 = (undefined2 *)((int)puVar45 + -4);
        *(undefined2 *)((int)puVar45 + -4) = 0x4f76;
        FUN_32b2_6cc6();
        puVar46[1] = 0x32b2;
        *puVar46 = 0x4f7f;
        FUN_32b2_6d9b();
        puVar46[1] = 0x32b2;
        uVar65 = 0x32b2;
        *puVar46 = 0x4f84;
        puVar45 = puVar46;
        FUN_32b2_7191();
        if ((bool)uVar68 || (bool)uVar69) {
          *(undefined2 *)((int)puVar45 + -2) = 0x32b2;
          puVar47 = (undefined1 *)((int)puVar45 + -4);
          *(undefined2 *)((int)puVar45 + -4) = 0x4f8a;
          iVar6 = FUN_21f2_31c1();
          puVar45 = (undefined2 *)(puVar47 + 4);
          puVar63 = (undefined1 *)ZEXT24(puVar47 + 4);
          if (iVar6 == 0x20) goto LAB_21f2_2ed1;
        }
      }
    }
    if ((param_1 == 0) && (*(int *)0x16c == 0)) {
      *(undefined2 *)((int)puVar45 + -2) = uVar65;
      *(undefined2 *)((int)puVar45 + -4) = 0x4fa4;
      FUN_1885_2414();
    }
    uVar65 = 1;
  }
  return uVar65;
}


