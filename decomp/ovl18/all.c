/* Ghidra decompilation of jw18.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  196 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0003ff48) overlaps instruction at (ram,0x0003ff46)
    */
/* WARNING: Removing unreachable block (ram,0x0003491f) */
/* WARNING: Removing unreachable block (ram,0x00034914) */
/* WARNING: Removing unreachable block (ram,0x000409dc) */
/* WARNING: Removing unreachable block (ram,0x00041184) */
/* WARNING: Removing unreachable block (ram,0x00041633) */
/* WARNING: Removing unreachable block (ram,0x0004141a) */
/* WARNING: Removing unreachable block (ram,0x000410fb) */
/* WARNING: Removing unreachable block (ram,0x000400b4) */
/* WARNING: Removing unreachable block (ram,0x0004112a) */
/* WARNING: Removing unreachable block (ram,0x00041446) */
/* WARNING: Removing unreachable block (ram,0x00041161) */
/* WARNING: Removing unreachable block (ram,0x0004164f) */
/* WARNING: Removing unreachable block (ram,0x00040a24) */
/* WARNING: Removing unreachable block (ram,0x000415c1) */
/* WARNING: Removing unreachable block (ram,0x00041344) */
/* WARNING: Type propagation algorithm not settling */

byte * __cdecl16far
FUN_3ab8_0000(byte *param_1,byte *param_2,byte *param_3,undefined2 param_4,undefined2 param_5,
             byte *param_6,byte *param_7)

{
  byte *pbVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  char *pcVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  undefined2 *puVar14;
  byte bVar16;
  uint in_CX;
  uint extraout_DX;
  uint extraout_DX_00;
  undefined2 extraout_DX_01;
  uint uVar17;
  code *unaff_BP;
  undefined4 *puVar18;
  char *unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  uint uVar19;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar20;
  bool bVar21;
  undefined1 uVar22;
  bool bVar23;
  long lVar24;
  long lVar25;
  byte *pbStack_2b8;
  undefined2 auStack_2b2 [36];
  undefined2 uStack_26a;
  byte *pbStack_262;
  byte *pbStack_260;
  byte *pbStack_25e;
  uint uStack_25c;
  byte *pbStack_25a;
  byte *pbStack_258;
  uint uStack_256;
  byte *pbStack_254;
  uint uStack_252;
  byte *pbStack_250;
  uint uStack_24e;
  byte *apbStack_24c [36];
  byte *pbStack_204;
  uint uStack_202;
  int aiStack_200 [4];
  byte *pbStack_1f8;
  uint uStack_1f6;
  undefined2 uStack_1f4;
  undefined2 uStack_1f2;
  undefined2 uStack_1f0;
  undefined2 uStack_1ee;
  undefined2 uStack_1ec;
  undefined2 uStack_1ea;
  byte *pbStack_1e8;
  uint uStack_1e6;
  undefined2 uStack_1e0;
  undefined2 uStack_1de;
  uint uStack_1dc;
  undefined1 auStack_1da [4];
  byte *pbStack_1d6;
  uint uStack_1d4;
  byte *pbStack_1d2;
  uint uStack_1d0;
  uint uStack_1ce;
  undefined2 uStack_1cc;
  undefined2 uStack_1ca;
  byte *pbStack_1c2;
  uint uStack_1c0;
  undefined2 uStack_1ba;
  undefined2 uStack_1b8;
  byte *pbStack_1b4;
  uint uStack_1b2;
  undefined2 uStack_1a4;
  undefined2 uStack_1a2;
  byte *pbStack_1a0;
  uint uStack_19e;
  undefined4 uStack_198;
  ulong uStack_194;
  long lStack_190;
  undefined4 uStack_184;
  byte *pbStack_17e;
  uint uStack_17c;
  byte *pbStack_176;
  undefined2 uStack_174;
  byte *pbStack_172;
  int iStack_170;
  byte *pbStack_162;
  uint uStack_160;
  undefined2 uStack_15e;
  undefined2 uStack_15c;
  uint uStack_156;
  int iStack_154;
  byte *pbStack_e6;
  byte *pbStack_e0;
  uint uStack_de;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  byte *pbStack_d0;
  int iStack_ce;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  uint uStack_be;
  int iStack_bc;
  byte *pbStack_b6;
  uint uStack_b4;
  byte *pbStack_ae;
  uint uStack_ac;
  uint uStack_aa;
  uint uStack_a8;
  uint uStack_96;
  uint uStack_94;
  byte *pbStack_92;
  byte *pbStack_90;
  byte *pbStack_8e;
  byte *pbStack_8c;
  byte abStack_8a [4];
  byte *pbStack_86;
  byte *pbStack_84;
  int iStack_82;
  byte *pbStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  int iStack_76;
  byte *pbStack_74;
  undefined2 uStack_6e;
  uint uStack_6c;
  undefined2 uStack_66;
  undefined2 uStack_64;
  uint uStack_5e;
  uint uStack_5c;
  uint uStack_5a;
  uint uStack_58;
  uint uStack_56;
  undefined2 uStack_54;
  byte bStack_50;
  undefined2 uStack_4e;
  int iStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  byte *pbStack_44;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined4 uStack_3a;
  byte *local_36;
  byte *local_34 [3];
  uint uStack_2e;
  int iStack_2c;
  uint uStack_2a;
  int iStack_28;
  byte abStack_26 [2];
  byte *pbStack_24;
  undefined4 uStack_22;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined4 uStack_1a;
  undefined4 uStack_16;
  undefined4 uStack_12;
  undefined4 uStack_e;
  undefined4 uStack_a;
  undefined2 uStack_6;
  char cVar26;
  char cVar15;
  
  puVar9 = &stack0xfffe;
  uStack_6 = (byte **)0xab8b;
  FUN_21f2_0ebc();
  uStack_6 = (byte **)0x22b2;
  uStack_a._2_2_ = (byte **)0xab93;
  iVar10 = func_0x00024ce4();
  if (iVar10 != 2) {
LAB_3ab8_015f:
    return (byte *)0x0;
  }
  bVar16 = *param_1;
  if (bVar16 == 0x24) {
    pbVar11 = (byte *)0x490a;
  }
  else if (bVar16 == 0x25) {
    pbVar11 = (byte *)0x490d;
  }
  else {
    if (bVar16 != 0x26) {
      return (byte *)0x0;
    }
    pbVar11 = (byte *)0x4912;
  }
  uStack_6 = local_34;
  uStack_a._2_2_ = (byte **)0x22b2;
  uStack_a._0_2_ = (byte *)0xabbf;
  func_0x00024c86();
  bVar16 = param_1[1];
  uVar17 = (uint)bVar16;
  local_36 = param_7;
  if (uVar17 == 0x79) goto LAB_3ab8_0059;
  if (uVar17 < 0x7a) {
    local_36 = param_3;
    if ((bVar16 == 0x4d) || (local_36 = param_2, bVar16 == 0x53)) {
LAB_3ab8_0059:
      uStack_6 = local_34;
      uStack_a._2_2_ = (byte **)param_1;
      uStack_a._0_2_ = (byte *)0x22b2;
      uStack_e._2_2_ = (byte *)0xacdc;
      FUN_21f2_3454();
      return (byte *)0x1;
    }
    if (bVar16 == 0x59) {
      local_36 = param_7 + -0x58;
      goto LAB_3ab8_0059;
    }
    local_36 = param_6;
    if (bVar16 == 0x6d) goto LAB_3ab8_0059;
  }
  pbVar12 = (byte *)(uVar17 - 0x46);
  if (((uint)pbVar12 & 1) != 0) {
    return (byte *)0x0;
  }
  uVar20 = pbVar12 < (byte *)0x28;
  bVar23 = SBORROW2((int)pbVar12,0x28);
  iVar10 = uVar17 - 0x6e;
  bVar21 = pbVar12 == (byte *)0x28;
  uVar19 = 0x3000;
  switch(uVar17) {
  case 0x46:
  case 0x4e:
  case 0x56:
    return param_1;
  case 0x47:
    uVar20 = 0;
    uStack_6 = (byte **)0x2466;
    FUN_32b2_6e99();
    uStack_6 = (byte **)0x246e;
    FUN_32b2_6eb1();
    uStack_6 = (byte **)0x2477;
    FUN_32b2_6d14();
    uStack_6 = (byte **)0x247f;
    FUN_32b2_6d14();
    uStack_6 = (byte **)0x2488;
    FUN_32b2_7154();
    uStack_6 = (byte **)0x2491;
    FUN_32b2_710c();
    uStack_6 = (byte **)0x2499;
    FUN_32b2_6e99();
    uStack_6 = (byte **)0x249e;
    FUN_32b2_7191();
    if ((bool)uVar20) {
      uStack_6 = (byte **)0x24a9;
      FUN_32b2_6d14();
      uStack_6 = (byte **)0x24b2;
      FUN_32b2_6eb1();
      uStack_6 = (byte **)0x24ba;
      FUN_32b2_6d14();
      uStack_6 = (byte **)0x24c2;
      FUN_32b2_6eb1();
      uStack_6 = (byte **)0x24cb;
      FUN_32b2_6d14();
      uStack_6 = (byte **)0x24d3;
      FUN_32b2_6eb1();
      iStack_28 = iStack_28 + -0x5a;
      uStack_94 = uStack_94 - 0x5a;
    }
    uStack_6 = (byte **)uStack_2a;
    uStack_a._2_2_ = (byte **)0x32b2;
    uStack_a._0_2_ = (byte *)0x24ef;
    uStack_e._2_2_ = (byte *)FUN_2bb4_63ae();
    uStack_6 = (byte **)(uStack_16._2_2_ + uStack_96);
    pbVar11 = (byte *)uStack_12 + CARRY2(uStack_96,(uint)uStack_16._2_2_) + uStack_94;
    uStack_a._2_2_ = (byte **)0x32b2;
    uStack_a._0_2_ = (byte *)0x250b;
    uStack_16._2_2_ = (byte *)FUN_2bb4_63ae();
    uStack_6 = (byte **)(uStack_96 + uStack_12._2_2_);
    uVar22 = CARRY2(uStack_94,(uint)(byte *)uStack_e) ||
             CARRY2((uint)((byte *)uStack_e + uStack_94),(uint)CARRY2(uStack_96,uStack_12._2_2_));
    pbVar12 = (byte *)uStack_e + uStack_94 + CARRY2(uStack_96,uStack_12._2_2_);
    uStack_a._2_2_ = (byte **)0x32b2;
    uStack_a._0_2_ = (byte *)0x2527;
    uStack_12._0_2_ = pbVar11;
    uStack_12._2_2_ = FUN_2bb4_63ae();
    uStack_6 = (byte **)0x2538;
    uStack_e._0_2_ = pbVar12;
    FUN_32b2_6d14();
    uStack_6 = (byte **)0x2540;
    FUN_32b2_6d14();
    uStack_6 = (byte **)0x2545;
    FUN_32b2_7191();
    uVar20 = 0;
    if ((bool)uVar22) {
      uStack_6 = (byte **)0x254f;
      FUN_32b2_6d14();
      uStack_6 = (byte **)0x2554;
      FUN_32b2_6fd6();
      uStack_6 = (byte **)0x255c;
      FUN_32b2_6eb1();
      uStack_6 = (byte **)-uStack_12._2_2_;
      pbVar11 = (byte *)((0xb4 - (int)(byte *)uStack_e) - (uint)(uStack_12._2_2_ != 0));
      uStack_a._2_2_ = (byte **)0x32b2;
      uStack_a._0_2_ = (byte *)0x256d;
      iStack_76 = FUN_2bb4_63ae();
      uStack_6 = (byte **)-(int)uStack_16._2_2_;
      uVar20 = (byte *)0xb4 < (byte *)uStack_12 ||
               0xb4U - (int)(byte *)uStack_12 < (uint)(uStack_16._2_2_ != (byte *)0x0);
      pbVar12 = (byte *)((0xb4U - (int)(byte *)uStack_12) - (uint)(uStack_16._2_2_ != (byte *)0x0));
      uStack_a._2_2_ = (byte **)0x32b2;
      uStack_a._0_2_ = (byte *)0x2586;
      pbStack_74 = pbVar11;
      iStack_82 = FUN_2bb4_63ae();
      uStack_16._2_2_ = (byte *)iStack_76;
      uStack_12._0_2_ = pbStack_74;
      pbStack_80 = pbVar12;
      uStack_12._2_2_ = iStack_82;
      uStack_e._0_2_ = pbVar12;
    }
    uStack_6 = (byte **)0x25af;
    FUN_32b2_6d14();
    uStack_6 = (byte **)0x25b7;
    FUN_32b2_6d14();
    uStack_6 = (byte **)0x25bc;
    FUN_32b2_7191();
    if ((bool)uVar20) {
      uStack_6 = (byte **)0x25c6;
      FUN_32b2_6d14();
      uStack_6 = (byte **)0x25cb;
      FUN_32b2_6fd6();
      uStack_6 = (byte **)0x25d3;
      FUN_32b2_6eb1();
      uStack_6 = (byte **)-uStack_12._2_2_;
      pbVar11 = (byte *)-(int)((byte *)uStack_e + (uStack_12._2_2_ != 0));
      uStack_a._2_2_ = (byte **)0x32b2;
      uStack_a._0_2_ = (byte *)0x25e6;
      iStack_76 = FUN_2bb4_63ae();
      uStack_6 = (byte **)-(int)uStack_16._2_2_;
      pbVar12 = (byte *)-(int)((byte *)uStack_12 + (uStack_16._2_2_ != (byte *)0x0));
      uStack_a._2_2_ = (byte **)0x32b2;
      uStack_a._0_2_ = (byte *)0x2601;
      pbStack_74 = pbVar11;
      iStack_82 = FUN_2bb4_63ae();
      uStack_16._2_2_ = (byte *)iStack_76;
      uStack_12._0_2_ = pbStack_74;
      pbStack_80 = pbVar12;
      uStack_12._2_2_ = iStack_82;
      uStack_e._0_2_ = pbVar12;
    }
    uStack_6 = (byte **)0x2629;
    FUN_32b2_6d14();
    uStack_6 = (byte **)0x2631;
    FUN_32b2_6e63();
    uStack_6 = (byte **)0x2639;
    FUN_32b2_6d14();
    uStack_6 = (byte **)0x2641;
    FUN_32b2_7124();
    uStack_6 = (byte **)0x264a;
    FUN_32b2_710c();
    uStack_6 = (byte **)0x264f;
    uStack_16._0_2_ = (byte *)FUN_32b2_6f61();
    if ((byte *)uStack_16 < 100) {
      uStack_16._0_2_ = (byte *)0x64;
    }
    if ((0x270d < (byte *)uStack_16) && ((byte *)uStack_16 < 0x2713)) {
      uStack_16._0_2_ = (byte *)0x2710;
    }
    puVar14 = (undefined2 *)0xb1ca;
    puVar18 = &uStack_22;
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar4 = puVar18;
      puVar18 = (undefined4 *)((int)puVar18 + 2);
      *puVar5 = *(undefined2 *)puVar4;
    }
    return (byte *)0xb1ca;
  case 0x48:
    unaff_DI = unaff_DI + 1;
    (&stack0xc62c)[(int)unaff_DI] = (&stack0xc62c)[(int)unaff_DI] + '\x01';
  case 0x50:
    puVar14 = (undefined2 *)*(undefined2 *)0x8ac6;
    cVar26 = *(char *)(puVar14 + -1);
    pbVar11 = (byte *)CONCAT11((char)((uint)param_1 >> 8),cVar26);
    *(int *)0x8ac6 = *(int *)0x8ac6 + -0xc;
    *(byte **)unaff_DI = pbVar11;
    *(undefined2 *)(unaff_DI + 2) = *puVar14;
    *(undefined2 *)(unaff_DI + 4) = puVar14[1];
    if (cVar26 != '\x03') {
      *(undefined2 *)(unaff_DI + 6) = puVar14[2];
      *(undefined2 *)(unaff_DI + 8) = puVar14[3];
    }
    return pbVar11;
  case 0x49:
    *(undefined2 *)param_1 = *(undefined2 *)(uVar17 - 0x3e);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(uVar17 - 0x3c);
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(uVar17 - 0x3a);
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(uVar17 - 0x38);
    return param_1;
  case 0x4a:
    *unaff_DI = (char)param_1 + '@';
    unaff_DI[1] = ':';
    unaff_DI[2] = '\\';
    uStack_12._2_2_ = CONCAT11(0x47,uStack_12._2_1_);
    uStack_6 = (byte **)((int)&uStack_12 + 2);
    uStack_a._2_2_ = (byte **)0x3000;
    uVar19 = 0x32b2;
    uStack_a._0_2_ = (byte *)0x707c;
    FUN_32b2_29ac();
    if ((byte *)uStack_12 != (byte *)0x0) {
      *(undefined2 *)0x7a34 = 0xd;
      *(undefined2 *)0x7a3f = uStack_1e;
      return (byte *)0x0;
    }
  case 0x52:
    uStack_a._2_2_ = (byte **)0x70a0;
    uStack_6 = (byte **)uVar19;
    iVar10 = FUN_32b2_21c4();
    uStack_22._2_2_ = (char *)(iVar10 + 1);
    if (param_2 == (byte *)0x0) {
      if ((int)unaff_SI < (int)uStack_22._2_2_) {
        unaff_SI = uStack_22._2_2_;
      }
      uStack_6 = (byte **)0x32b2;
      uStack_a._2_2_ = (byte **)0x70ba;
      param_2 = (byte *)thunk_FUN_32b2_1f83();
      if (param_2 == (byte *)0x0) {
        *(undefined2 *)0x7a34 = 0xc;
        return (byte *)0x0;
      }
    }
    if ((int)unaff_SI < (int)uStack_22._2_2_) {
      *(undefined2 *)0x7a34 = 0x22;
      return (byte *)0x0;
    }
    uStack_a._2_2_ = (byte **)0x32b2;
    uStack_a._0_2_ = (byte *)0x70e7;
    uStack_6 = (byte **)param_2;
    pbVar11 = (byte *)FUN_32b2_2166();
    return pbVar11;
  case 0x4b:
  case 0x53:
    (pbVar12 + (int)unaff_DI)[-0x1ba] = (pbVar12 + (int)unaff_DI)[-0x1ba] | (byte)in_CX;
    uStack_6 = (byte **)pbVar11;
    goto LAB_3ab8_0919;
  case 0x4c:
  case 0x54:
  case 0x5c:
    return param_1;
  case 0x4d:
  case 0x55:
    pcVar7 = (code *)swi(3);
    pbVar11 = (byte *)(*pcVar7)();
    return pbVar11;
  case 0x4f:
switchD_3000_ac9e_caseD_4f:
    if ((bVar21 || bVar23 != iVar10 < 0) && (in_CX <= (uint)uStack_3a)) goto LAB_2bb4_60b4;
LAB_2bb4_60e4:
    iStack_4c = iStack_4c + 0x5a;
    if (0x10e < iStack_4c) {
      return (byte *)0x1;
    }
    in_CX = 0;
    uStack_2a = 0;
    iStack_28 = iStack_4c;
    if ((iStack_2c <= uStack_3a._2_2_) &&
       ((iStack_2c < uStack_3a._2_2_ || (uStack_2e < (uint)uStack_3a)))) goto LAB_2bb4_610f;
    goto LAB_2bb4_60b4;
  case 0x51:
                    /* WARNING: Could not recover jumptable at 0x0003959d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar11 = (byte *)(*unaff_BP)();
    return pbVar11;
  case 0x57:
    do {
      bVar16 = *pbVar12;
      *pbVar12 = (byte)pbVar11;
      pbVar11 = (byte *)(uint)bVar16;
      pbVar12 = param_1 + 1;
      pbVar1 = param_1;
      param_1 = pbVar12;
    } while (*pbVar1 != 0);
    return (byte *)(uint)bVar16;
  case 0x58:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x59:
    if (!bVar23) {
      uStack_6 = (byte **)0xb153;
      FUN_28b3_1181();
      if ((bool)uVar20) {
        uStack_6 = (byte **)param_3;
        uStack_a._2_2_ = (byte **)0x22b2;
        uStack_a._0_2_ = (byte *)0xb161;
        func_0x00024c86();
        return (byte *)0x3;
      }
      uStack_6 = (byte **)0xb173;
      func_0x00029834();
      uStack_6 = (byte **)0xb17b;
      func_0x000298b4();
      uVar19 = 0x22b2;
      uStack_6 = (byte **)0xb180;
      FUN_28b3_1181();
      if (!(bool)uVar20) {
        uStack_6 = (byte **)0xb190;
        func_0x00029834();
        uStack_6 = (byte **)0xb198;
        func_0x000298b4();
        uVar19 = 0x22b2;
        uStack_6 = (byte **)0xb19d;
        FUN_28b3_1181();
      }
    }
    uStack_6 = (byte **)param_3;
    uStack_a._0_2_ = (byte *)0xb1b0;
    uStack_a._2_2_ = (byte **)uVar19;
    func_0x00024c86();
    return (byte *)0x1;
  case 0x5a:
    return (byte *)uStack_a._2_2_;
  case 0x5b:
    param_1 = param_2;
    uStack_6 = (byte **)param_2;
LAB_3ab8_0919:
    do {
      while( true ) {
        if (*(byte *)uStack_6 == 0) {
          return param_1;
        }
        bVar16 = *(byte *)uStack_6;
        uStack_12._2_2_ = CONCAT11(uStack_12._3_1_,bVar16);
        uStack_a._2_2_ = (byte **)uVar19;
        if (bVar16 != 0x5c) break;
        bVar16 = *(byte *)((int)uStack_6 + 1);
        uStack_12._2_2_ = CONCAT11(uStack_12._3_1_,bVar16);
        if (bVar16 == 0x78) {
LAB_3ab8_073e:
          uStack_6 = (byte **)0x496b;
          uStack_a._2_2_ = (byte **)((int)&uStack_a + 3);
          uStack_e._2_2_ = (byte *)0xb2d0;
          uStack_a._0_2_ = (byte *)uVar19;
          func_0x000253ce();
          uVar19 = 0x22b2;
        }
        else if (bVar16 < 0x79) {
          if (bVar16 == 0x30) {
            uStack_a._2_2_ = (byte **)0x0;
          }
          else {
            if (bVar16 == 0x58) goto LAB_3ab8_073e;
            if (bVar16 == 0x65) {
              uStack_a._2_2_ = (byte **)0x1b;
            }
            else if (bVar16 == 0x6e) {
              uStack_6 = (byte **)0xd;
              uStack_a._0_2_ = (byte *)0xb31b;
              iVar10 = FUN_3ab8_0405();
              uVar17 = uVar19;
              if (iVar10 == -1) {
                uVar17 = 0x11f2;
                uStack_a._2_2_ = (byte **)0xb329;
                uStack_6 = (byte **)uVar19;
                FUN_13bf_0a03();
              }
              uStack_a._2_2_ = (byte **)0xa;
              uVar19 = uVar17;
            }
            else if (bVar16 == 0x72) {
              uStack_a._2_2_ = (byte **)0x1e;
            }
            else {
              if (bVar16 != 0x75) goto LAB_3ab8_0732;
              uStack_a._2_2_ = (byte **)0x1f;
            }
          }
        }
        else {
LAB_3ab8_0732:
          uStack_a._2_2_ = (byte **)(uint)*(byte *)((int)uStack_6 + 1);
        }
        pbVar11 = (byte *)*(undefined2 *)0xd70;
        uStack_6 = uStack_a._2_2_;
        uStack_a._0_2_ = (byte *)0xb2e2;
        uStack_a._2_2_ = (byte **)uVar19;
        iVar10 = FUN_3ab8_0405();
        param_1 = (byte *)(iVar10 + 1);
        uStack_6 = (byte **)pbVar11;
        if (param_1 == (byte *)0x0) {
          uStack_a._2_2_ = (byte **)0xb2f3;
          uStack_6 = (byte **)uVar19;
          param_1 = (byte *)FUN_13bf_0a03();
          uVar19 = 0x11f2;
          uStack_6 = (byte **)(byte *)0x492a;
        }
      }
      if (bVar16 == 0x5b) {
        uStack_a._0_2_ = (byte *)0xb34b;
        uStack_6 = (byte **)func_0x00025a9a();
        pbVar11 = (byte *)uStack_12;
        uVar19 = 0x22b2;
        if (uStack_6 != (byte **)0x0) {
          bVar16 = *(byte *)0x5e;
          uStack_12._2_2_ = CONCAT11(uStack_12._3_1_,bVar16);
          if ((bVar16 < 0x31) || (0x39 < bVar16)) {
            if ((bVar16 < 0x41) || (0x5a < bVar16)) {
              uStack_a._2_2_ = (byte **)0xffff;
            }
            else {
              uStack_a._2_2_ = (byte **)(bVar16 - 0x38);
            }
          }
          else {
            uStack_a._2_2_ = (byte **)(bVar16 - 0x31);
          }
          if (-1 < (int)uStack_a._2_2_) {
            uStack_12._0_2_ = (byte *)((uint)(byte *)uStack_12 & 0xff00);
            uVar17 = (uint)(byte *)uStack_12;
            iVar10 = 0x5f;
            uStack_12._1_1_ = SUB21(pbVar11,1);
            if (*(char *)0x5f == -0x26) {
              uStack_12._0_2_ = (byte *)CONCAT11(uStack_12._1_1_,1);
              iVar10 = 0x60;
              uVar17 = (uint)(byte *)uStack_12;
            }
            else if (*(char *)0x5f == -0x49) {
              uStack_12._0_2_ = (byte *)CONCAT11(uStack_12._1_1_,2);
              iVar10 = 0x60;
              uVar17 = (uint)(byte *)uStack_12;
            }
            uStack_12._0_2_ = (byte *)uVar17;
            pbStack_8c = (byte *)((int)uStack_6 + -iVar10);
            if (0x13 < (int)pbStack_8c) {
              pbStack_8c = (byte *)0x13;
            }
            if ((int)pbStack_8c < 1) {
              uStack_6 = (byte **)abStack_26;
              uStack_a._2_2_ = (byte **)0x22b2;
              uStack_a._0_2_ = (byte *)0xb408;
              func_0x00024c86();
            }
            else {
              uStack_6 = (byte **)pbStack_8c;
              uStack_a._2_2_ = (byte **)abStack_26;
              uStack_a._0_2_ = (byte *)0x22b2;
              uStack_e._2_2_ = (byte *)0xb3eb;
              func_0x00024d00();
              abStack_26[(int)pbStack_8c] = 0;
            }
            iVar10 = (int)uStack_a._2_2_ * 8;
            uStack_6 = (byte **)*(undefined2 *)(iVar10 + (int)(byte *)uStack_a + 4);
            uStack_a._2_2_ = (byte **)*(undefined2 *)(iVar10 + (int)(byte *)uStack_a + 2);
            uStack_a._0_2_ = (byte *)*(undefined2 *)(iVar10 + (int)(byte *)uStack_a);
            uStack_e._2_2_ = abStack_26;
            uStack_e._0_2_ = abStack_8a;
            uStack_12._2_2_ = 0x22b2;
            uStack_12._0_2_ = (byte *)0xb42d;
            FUN_21f2_3454();
            uStack_6 = (byte **)0x22b2;
            uStack_a._2_2_ = (byte **)0xb439;
            FUN_3ab8_0218();
            if ((char)uStack_12 == '\x01') {
              uStack_6 = (byte **)0x22b2;
              uStack_a._2_2_ = (byte **)0xb449;
              FUN_3ab8_063e();
            }
            if ((char)uStack_12 == '\x02') {
              uStack_6 = (byte **)0x22b2;
              uStack_a._2_2_ = (byte **)0xb459;
              FUN_3ab8_068d();
            }
            uStack_a._2_2_ = (byte **)abStack_8a;
            uStack_a._0_2_ = (byte *)0x22b2;
            uStack_e._2_2_ = (byte *)0xb469;
            uStack_6 = uStack_a._2_2_;
            uStack_a._2_2_ = (byte **)func_0x00024ce4();
            uStack_a._0_2_ = (byte *)0x22b2;
            uStack_e._2_2_ = (byte *)0xb46f;
            FUN_3ab8_04aa();
          }
          uVar19 = 0x22b2;
          param_1 = (byte *)((int)uStack_6 + 1);
          uStack_6 = (byte **)param_1;
          goto LAB_3ab8_0919;
        }
      }
      iVar10 = *(int *)0xd70;
      uStack_6 = (byte **)(uStack_12._2_2_ & 0xff);
      uStack_a._0_2_ = (byte *)0xb487;
      uStack_a._2_2_ = (byte **)uVar19;
      iVar13 = FUN_3ab8_0405();
      param_1 = (byte *)(iVar13 + 1);
      uVar17 = uVar19;
      if (param_1 == (byte *)0x0) {
        iVar10 = 0x492a;
        uVar17 = 0x11f2;
        uStack_a._2_2_ = (byte **)0xb495;
        uStack_6 = (byte **)uVar19;
        param_1 = (byte *)FUN_13bf_0a03();
      }
      uVar19 = uVar17;
      uStack_6 = (byte **)(iVar10 + 1);
    } while( true );
  case 0x5d:
    uVar20 = 0;
    uStack_256 = (uint)bStack_50;
    uStack_6 = (byte **)0xff46;
    func_0x00029834();
    break;
  case 0x5e:
  case 0x62:
  case 0x66:
  case 0x6a:
    uStack_6 = (byte **)0xb70d;
    FUN_28b3_100d();
    uStack_6 = (byte **)0xb715;
    func_0x00029983();
    if (((*(uint *)(param_1 + 0xdca) & 1) != 0) || ((*(uint *)(param_1 + 0xdca) & 2) != 0)) {
      uStack_6 = (byte **)0xb732;
      func_0x000297e6();
      uStack_6 = (byte **)0xb737;
      func_0x00029d78();
      uStack_6 = (byte **)0xb73c;
      uStack_16 = (byte *)FUN_28b3_0f51();
      uStack_6 = (byte **)0xb74a;
      func_0x000297e6();
      uStack_6 = (byte **)0xb74f;
      func_0x00029d78();
      uStack_6 = (byte **)0xb754;
      FUN_28b3_0f51();
      uStack_6 = (byte **)0xb762;
      func_0x000297e6();
      uStack_6 = (byte **)0xb767;
      func_0x00029d78();
      uStack_6 = (byte **)0xb76c;
      uStack_a = FUN_28b3_0f51();
      uStack_6 = (byte **)0xb77a;
      func_0x000297e6();
      uStack_6 = (byte **)0xb77f;
      func_0x00029d78();
      uStack_6 = (byte **)0xb784;
      uStack_e = (byte *)FUN_28b3_0f51();
      uStack_1a._0_2_ = (int)uStack_6 - (int)(byte *)uStack_e;
      uStack_1a._2_2_ =
           (0x22b2 - (int)((ulong)uStack_e >> 0x10)) - (uint)(uStack_6 < (byte *)uStack_e);
      uStack_22 = uStack_a - (long)uStack_16;
      if (uStack_1a._2_2_ == 0 && (int)uStack_1a == 0) {
        uVar20 = 0;
        uVar22 = uStack_22 == 0;
        if (uStack_22 == 0) {
          uStack_1a._0_2_ = 1;
          uStack_1a._2_2_ = 0;
          uStack_22._0_2_ = 1;
          uStack_22._2_2_ = (char *)0x0;
          uStack_6 = (byte **)0xb7cf;
          func_0x000297e6();
          uStack_6 = (byte **)0xb7d4;
          func_0x00029ae7();
          uStack_6 = (byte **)0xb7dc;
          func_0x0002996b();
          uStack_6 = (byte **)0xb7e4;
          func_0x000297e6();
          uStack_6 = (byte **)0xb7e9;
          func_0x00029ae7();
          uStack_6 = (byte **)0xb7f1;
          func_0x0002996b();
          uStack_6 = (byte **)0xb7f6;
          FUN_28b3_1181();
          if ((bool)uVar20 || (bool)uVar22) {
            uStack_6 = (byte **)0xb800;
            func_0x000297e6();
            uStack_6 = (byte **)0xb808;
            func_0x000297e6();
            uStack_6 = (byte **)0xb811;
            func_0x00029b6d();
            uStack_6 = (byte **)0xb816;
            FUN_28b3_1181();
            if ((bool)uVar20 || (bool)uVar22) {
              uVar20 = 0;
              uVar22 = 1;
              uStack_22._2_2_ = (char *)0x0;
              uStack_22._0_2_ = 0;
            }
          }
          else {
            uStack_6 = (byte **)0xb82a;
            func_0x000297e6();
            uStack_6 = (byte **)0xb82f;
            func_0x00029ae7();
            uStack_6 = (byte **)0xb837;
            func_0x000297e6();
            uStack_6 = (byte **)0xb83c;
            func_0x00029ae7();
            uStack_6 = (byte **)0xb845;
            func_0x00029b6d();
            uStack_6 = (byte **)0xb84a;
            FUN_28b3_1181();
            if ((bool)uVar20 || (bool)uVar22) {
              uVar20 = 0;
              uVar22 = 1;
              uStack_1a._2_2_ = 0;
              uStack_1a._0_2_ = 0;
            }
          }
          uStack_6 = (byte **)0xb85c;
          func_0x000297e6();
          uStack_6 = (byte **)0xb865;
          func_0x000297e6();
          uStack_6 = (byte **)0xb86a;
          FUN_28b3_1181();
          if (!(bool)uVar20 && !(bool)uVar22) {
            bVar21 = (int)uStack_1a != 0;
            uStack_1a._0_2_ = -(int)uStack_1a;
            iVar10 = uStack_1a._2_2_ + bVar21;
            uVar20 = iVar10 != 0;
            uStack_1a._2_2_ = -iVar10;
            uVar22 = uStack_1a._2_2_ == 0;
          }
          uStack_6 = (byte **)0xb87e;
          func_0x000297e6();
          uStack_6 = (byte **)0xb887;
          func_0x000297e6();
          uStack_6 = (byte **)0xb88c;
          FUN_28b3_1181();
          if (!(bool)uVar20 && !(bool)uVar22) {
            uStack_22 = CONCAT22(-((int)uStack_22._2_2_ + (uint)((int)uStack_22 != 0)),
                                 -(int)uStack_22);
          }
        }
      }
      uStack_6 = (byte **)0xb8a0;
      func_0x000298b4();
      uStack_6 = (byte **)0xb8a8;
      func_0x00029983();
      uStack_6 = (byte **)0xb8b0;
      func_0x000298b4();
      uStack_6 = (byte **)0xb8b8;
      func_0x0002996b();
      uStack_6 = (byte **)0xb8c0;
      func_0x000298b4();
      uStack_6 = (byte **)0xb8c5;
      FUN_28b3_117c();
      uStack_6 = (byte **)0xb8cd;
      func_0x00029983();
      uStack_6 = (byte **)0xb8d5;
      func_0x000298b4();
      uStack_6 = (byte **)0xb8dd;
      func_0x000298b4();
      uStack_6 = (byte **)0xb8e2;
      FUN_28b3_117c();
      uStack_6 = (byte **)0xb8ea;
      func_0x00029983();
      uStack_6 = (byte **)0xb8f2;
      func_0x000298b4();
      uStack_6 = (byte **)0xb8fa;
      func_0x00029983();
      uStack_6 = (byte **)0xb902;
      func_0x000298b4();
      uStack_6 = (byte **)0xb90a;
      func_0x00029983();
    }
    if ((param_1[0xdca] & 0x40) == 0) {
      uStack_6 = (byte **)0xb9bc;
      func_0x000297e6();
      uStack_6 = (byte **)0xb9c1;
      func_0x00029d78();
      uStack_e._2_2_ = (byte *)0x22b2;
      uStack_e._0_2_ = (byte *)0xb9cb;
      func_0x000299d1();
      uStack_e._2_2_ = (byte *)0x22b2;
      uStack_e._0_2_ = (byte *)0xb9d3;
      func_0x000297e6();
      uStack_e._2_2_ = (byte *)0x22b2;
      uStack_e._0_2_ = (byte *)0xb9d8;
      func_0x00029d78();
      uStack_16._2_2_ = (byte *)0x22b2;
      uStack_16._0_2_ = (byte *)0xb9e2;
      func_0x000299d1();
      uStack_16._2_2_ = (byte *)0x22b2;
      uStack_16._0_2_ = (byte *)0xb9ea;
      func_0x000297e6();
      uStack_16._2_2_ = (byte *)0x22b2;
      uStack_16._0_2_ = (byte *)0xb9ef;
      func_0x00029d78();
      uStack_1c = 0x22b2;
      uStack_1e = 0xb9f9;
      func_0x000299d1();
      uStack_1c = 0x22b2;
      uStack_1e = 0xba01;
      func_0x000297e6();
      uStack_1c = 0x22b2;
      uStack_1e = 0xba06;
      func_0x00029d78();
      pbStack_24 = (byte *)0x22b2;
      abStack_26[0] = 0x10;
      abStack_26[1] = 0xba;
      func_0x000299d1();
      pbStack_24 = param_1 + 0x6e8;
      abStack_26[0] = 0x48;
      abStack_26[1] = 0xbf;
      iStack_28 = 0x22b2;
      uStack_2a = 0xba20;
      FUN_21f2_3454();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xba2b;
      FUN_3ab8_0929();
    }
    else {
      uStack_6 = (byte **)0xb91f;
      func_0x000297e6();
      uStack_6 = (byte **)0xb924;
      func_0x00029d78();
      uStack_e._2_2_ = (byte *)0x22b2;
      uStack_e._0_2_ = (byte *)0xb92e;
      func_0x000299d1();
      uStack_e._2_2_ = (byte *)0x22b2;
      uStack_e._0_2_ = (byte *)0xb936;
      func_0x000297e6();
      uStack_e._2_2_ = (byte *)0x22b2;
      uStack_e._0_2_ = (byte *)0xb93b;
      func_0x00029d78();
      uStack_16._2_2_ = (byte *)0x22b2;
      uStack_16._0_2_ = (byte *)0xb945;
      func_0x000299d1();
      uStack_16._2_2_ = (byte *)0x22b2;
      uStack_16._0_2_ = (byte *)0xb94d;
      func_0x000297e6();
      uStack_16._2_2_ = (byte *)0x22b2;
      uStack_16._0_2_ = (byte *)0xb952;
      func_0x00029d78();
      uStack_1c = 0x22b2;
      uStack_1e = 0xb95c;
      func_0x000299d1();
      uStack_1c = 0x22b2;
      uStack_1e = 0xb964;
      func_0x000297e6();
      uStack_1c = 0x22b2;
      uStack_1e = 0xb969;
      func_0x00029d78();
      pbStack_24 = (byte *)0x22b2;
      abStack_26[0] = 0x73;
      abStack_26[1] = 0xb9;
      func_0x000299d1();
      pbStack_24 = (byte *)0x22b2;
      abStack_26[0] = 0x7b;
      abStack_26[1] = 0xb9;
      func_0x000297e6();
      pbStack_24 = (byte *)0x22b2;
      abStack_26[0] = 0x80;
      abStack_26[1] = 0xb9;
      func_0x00029d78();
      iStack_2c = 0x22b2;
      uStack_2e = 0xb98a;
      func_0x000299d1();
      iStack_2c = 0x22b2;
      uStack_2e = 0xb992;
      func_0x000297e6();
      iStack_2c = 0x22b2;
      uStack_2e = 0xb997;
      func_0x00029d78();
      local_34[0] = (byte *)0x22b2;
      local_36 = (byte *)0xb9a1;
      func_0x000299d1();
      local_34[0] = param_1 + 0x6e8;
      local_36 = param_1;
      uStack_3a._2_2_ = 0x22b2;
      uStack_3a._0_2_ = 0xb9af;
      FUN_3ab8_06dc();
    }
    return (byte *)0x1;
  case 0x5f:
    if (((bool)uVar20) &&
       ((FUN_32b2_2028(), (bool)uVar20 || (param_1 = (byte *)FUN_32b2_1fac(), (bool)uVar20)))) {
      param_1 = (byte *)0x0;
    }
    return param_1;
  case 0x60:
    goto switchD_3000_ac9e_caseD_60;
  case 0x61:
  case 0x65:
  case 0x69:
    goto switchD_3000_ac9e_caseD_61;
  case 99:
    do {
      if (in_CX == 1) {
        bVar21 = false;
        if ((pbVar12[0x7a43] & 0x40) == 0) {
          pcVar7 = (code *)swi(0x21);
          iVar10 = (*pcVar7)();
          if (bVar21) {
LAB_32b2_1d93:
            pbVar11 = (byte *)FUN_32b2_0621();
            return pbVar11;
          }
          uVar20 = 0;
          if (iVar10 != 0) {
            pcVar7 = (code *)swi(0x21);
            (*pcVar7)();
            in_CX = 1;
            uVar20 = extraout_AH_01;
          }
          puVar9 = (undefined1 *)CONCAT11(uVar20,0xd);
        }
        else {
          pcVar7 = (code *)swi(0x21);
          (*pcVar7)();
          bVar21 = false;
          uVar20 = extraout_AH;
          if ((extraout_DX_00 & 0x20) == 0) {
            pcVar7 = (code *)swi(0x21);
            (*pcVar7)();
            uVar20 = extraout_AH_00;
            if (bVar21) goto LAB_32b2_1d93;
          }
          puVar9 = (undefined1 *)CONCAT11(uVar20,10);
        }
      }
      else if (*unaff_SI == '\n') goto LAB_32b2_1d8d;
      while( true ) {
        *unaff_DI = (char)puVar9;
        unaff_DI = unaff_DI + 1;
LAB_32b2_1d8d:
        in_CX = in_CX - 1;
        if (in_CX == 0) goto LAB_32b2_1d93;
        pcVar3 = unaff_SI;
        unaff_SI = unaff_SI + 1;
        cVar26 = *pcVar3;
        cVar15 = (char)((uint)puVar9 >> 8);
        puVar9 = (undefined1 *)CONCAT11(cVar15,cVar26);
        if (cVar26 == cVar15) break;
        if (cVar26 == '\x1a') {
          pbVar12[0x7a43] = pbVar12[0x7a43] | 2;
          goto LAB_32b2_1d93;
        }
      }
    } while( true );
  case 100:
    goto switchD_3000_ac9e_caseD_60;
  case 0x67:
    if ((int)&stack0xfffe < -1) {
      pbVar11 = (byte *)FUN_32b2_0621();
      return pbVar11;
    }
    if (&stack0x0000 == (undefined1 *)0x1) {
      uStack_6 = (byte **)CONCAT11(0x80,(undefined1)uStack_6);
    }
    bVar21 = false;
    pcVar7 = (code *)swi(0x21);
    pbVar12 = (byte *)(*pcVar7)();
    cVar26 = (char)((uint)pbVar11 >> 8);
    if (bVar21) {
      if ((pbVar12 != (byte *)0x2) || ((in_CX & 0x100) == 0)) goto LAB_32b2_1bba;
      bVar21 = false;
      in_CX = (uint)param_3._1_1_;
      FUN_32b2_1d07();
      param_3._1_1_ = (byte)in_CX;
      if ((cVar26 != '\0') || (uVar20 = 0, ((uint)param_2 & 0x200) == 0)) {
        uVar20 = 0;
        in_CX = 0;
      }
LAB_32b2_1c76:
      pcVar7 = (code *)swi(0x21);
      pbVar12 = (byte *)(*pcVar7)();
      if ((bool)uVar20) {
LAB_32b2_1c7f:
        pbVar11 = (byte *)FUN_32b2_0621();
        return pbVar11;
      }
      if ((cVar26 != '\0') || (((uint)param_2 & 0x200) == 0)) {
        pcVar7 = (code *)swi(0x21);
        (*pcVar7)();
        bVar23 = false;
        pcVar7 = (code *)swi(0x21);
        pbVar12 = (byte *)(*pcVar7)();
        if (bVar23) goto LAB_32b2_1c7f;
        if ((!bVar21) && ((param_3._1_1_ & 1) != 0)) {
          bVar21 = false;
          in_CX = (uint)(byte)((byte)in_CX | 1);
          pcVar7 = (code *)swi(0x21);
          (*pcVar7)();
          if (bVar21) goto LAB_32b2_1c7f;
        }
      }
    }
    else {
      if ((in_CX & 0x500) == 0x500) {
        pcVar7 = (code *)swi(0x21);
        (*pcVar7)();
        goto LAB_32b2_1bba;
      }
      bVar21 = true;
      pcVar7 = (code *)swi(0x21);
      (*pcVar7)();
      if ((extraout_DX & 0x80) != 0) {
        uStack_6 = (byte **)((uint)uStack_6 | 0x4000);
      }
      if (((uint)uStack_6 & 0x4000) == 0) {
        if (((uint)param_3 & 2) == 0) {
          if ((((uint)uStack_6 & 0x8000) != 0) && (((uint)param_2 & 0x200) != 0)) {
            pcVar7 = (code *)swi(0x21);
            (*pcVar7)();
            pcVar7 = (code *)swi(0x21);
            iVar10 = (*pcVar7)();
            if ((iVar10 != 0) && ((char)unaff_BP == '\x1a')) {
              pcVar7 = (code *)swi(0x21);
              (*pcVar7)();
              pcVar7 = (code *)swi(0x21);
              (*pcVar7)();
            }
            in_CX = 0;
            pcVar7 = (code *)swi(0x21);
            (*pcVar7)();
          }
        }
        else {
          uVar20 = 0;
          if (((uint)param_2 & 0x300) == 0) {
            pcVar7 = (code *)swi(0x21);
            (*pcVar7)();
            pcVar7 = (code *)swi(0x21);
            (*pcVar7)();
            goto LAB_32b2_1c76;
          }
          in_CX = 0;
          pcVar7 = (code *)swi(0x21);
          (*pcVar7)();
        }
      }
    }
    if (((uint)uStack_6 & 0x4000) == 0) {
      pcVar7 = (code *)swi(0x21);
      (*pcVar7)();
      bVar16 = 0;
      if ((in_CX & 1) != 0) {
        bVar16 = 0x10;
      }
      if (((uint)param_2 & 0x800) != 0) {
        bVar16 = bVar16 | 0x20;
      }
    }
    else {
      bVar16 = 0;
    }
    if (pbVar12 < (byte *)*(uint *)0x7a41) {
      pbVar12[0x7a43] = bVar16 | uStack_6._1_1_ | 1;
      return pbVar12;
    }
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
LAB_32b2_1bba:
    pbVar11 = (byte *)FUN_32b2_0621();
    return pbVar11;
  case 0x68:
    break;
  case 0x6b:
    do {
      pbVar11 = (byte *)FUN_32b2_1964();
      in_CX = in_CX - 1;
    } while (in_CX != 0);
    return pbVar11;
  case 0x6c:
    break;
  case 0x6d:
    pcVar6 = *(char **)(unaff_DI + -4);
    if (pcVar6 == unaff_DI) {
      unaff_DI[(uint)pbVar12 & 0xff] = unaff_DI[(uint)pbVar12 & 0xff] ^ 0x80;
      return param_1;
    }
    *(char **)(unaff_DI + -4) = unaff_DI;
    *(undefined2 *)unaff_DI = *(undefined2 *)pcVar6;
    if ((char)pbVar12 != '\x03') {
      *(uint *)(unaff_DI + 2) = *(uint *)(pcVar6 + 2);
      *(undefined2 *)(unaff_DI + 4) = *(undefined2 *)(pcVar6 + 4);
      uVar17 = *(uint *)(pcVar6 + 6);
      *(byte **)(unaff_DI + 6) = (byte *)(uVar17 ^ 0x8000);
      return (byte *)(uVar17 ^ 0x8000);
    }
    pbVar11 = (byte *)(*(uint *)(pcVar6 + 2) ^ 0x8000);
    *(byte **)(unaff_DI + 2) = pbVar11;
    return pbVar11;
  case 0x6e:
    LOCK();
    bVar16 = (pbVar12 + (int)unaff_SI)[-0x7402];
    (pbVar12 + (int)unaff_SI)[-0x7402] = (byte)extraout_DX_01;
    UNLOCK();
    pbVar12[(int)unaff_DI] = pbVar12[(int)unaff_DI] + 1;
    piVar2 = (int *)(CONCAT11((char)((uint)extraout_DX_01 >> 8),bVar16) + 0x1c);
    iVar10 = *piVar2;
    *piVar2 = *piVar2 + 1;
    if (((*piVar2 != 0 && SCARRY2(iVar10,1) == *piVar2 < 0) || (param_1 < pbStack_ae)) &&
       ((int)unaff_SI <= (int)uStack_b4)) {
      if ((int)unaff_SI < (int)uStack_b4) {
        pbVar11 = (byte *)FUN_3ab8_3fca();
        return pbVar11;
      }
      if (param_1 < pbStack_b6) {
        pbVar11 = (byte *)FUN_3ab8_3fca();
        return pbVar11;
      }
    }
    if (((uStack_aa == uStack_96) && (uStack_a8 == uStack_94)) &&
       ((pbStack_ae == pbStack_b6 && (uStack_ac == uStack_b4)))) {
      pbVar11 = (byte *)FUN_3ab8_3fca();
      return pbVar11;
    }
    if (((((((int)uStack_94 < iStack_bc) ||
           (((int)uStack_94 <= iStack_bc && (uStack_96 < uStack_be)))) ||
          ((int)uStack_a8 < iStack_bc)) ||
         (((((int)uStack_a8 <= iStack_bc && (uStack_aa < uStack_be)) || ((int)uStack_ac < iStack_ce)
           ) || (((int)uStack_ac <= iStack_ce && (pbStack_ae < pbStack_d0)))))) ||
        ((((int)uStack_b4 < iStack_ce ||
          (((int)uStack_b4 <= iStack_ce && (pbStack_b6 < pbStack_d0)))) ||
         ((iStack_154 < (int)uStack_94 ||
          (((((iStack_154 <= (int)uStack_94 && (uStack_156 < uStack_96)) ||
             (iStack_154 < (int)uStack_a8)) ||
            ((iStack_154 <= (int)uStack_a8 && (uStack_156 < uStack_aa)))) ||
           ((iStack_170 < (int)uStack_ac ||
            ((iStack_170 <= (int)uStack_ac && (pbStack_172 < pbStack_ae)))))))))))) ||
       ((iStack_170 <= (int)uStack_b4 &&
        ((iStack_170 < (int)uStack_b4 || (pbStack_172 < pbStack_b6)))))) {
      uVar20 = uStack_a8 < uStack_94;
      uVar22 = uStack_a8 == uStack_94;
      if ((int)uStack_a8 <= (int)uStack_94) {
        if ((int)uStack_94 <= (int)uStack_a8) {
          uVar20 = uStack_aa < uStack_96;
          uVar22 = uStack_aa == uStack_96;
          if (!(bool)uVar20) goto LAB_3ab8_429e;
        }
        uStack_6 = (byte **)0x3000;
        uStack_a._2_2_ = (byte **)0xedb5;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xedba;
        func_0x00029d78();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xedc3;
        func_0x000299d1();
        uStack_dc = uStack_15e;
        uStack_da = uStack_15c;
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xeddc;
        func_0x00029834();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xede5;
        func_0x00029983();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xedee;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xedf3;
        func_0x00029d78();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xedfc;
        func_0x000299d1();
        pbStack_162 = pbStack_17e;
        uStack_160 = uStack_17c;
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xee15;
        func_0x00029834();
        uStack_6 = (byte **)0x22b2;
        uVar19 = 0x22b2;
        uStack_a._2_2_ = (byte **)0xee1e;
        func_0x00029983();
      }
LAB_3ab8_429e:
      uStack_a._2_2_ = (byte **)0xee27;
      uStack_6 = (byte **)uVar19;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xee30;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xee35;
      FUN_28b3_1181();
      if (!(bool)uVar20 && !(bool)uVar22) {
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xee40;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xee49;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xee52;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xee5b;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xee60;
        FUN_28b3_1172();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xee69;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xee72;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xee77;
        func_0x00029c9d();
        uStack_6 = &pbStack_162;
        uStack_a._2_2_ = (byte **)0x22b2;
        uStack_a._0_2_ = (byte *)0xee81;
        func_0x00029bb5();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xee87;
        func_0x00029983();
        uStack_dc = uStack_1a4;
        uStack_da = uStack_1a2;
      }
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xeea0;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xeea9;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xeeae;
      FUN_28b3_1181();
      if ((bool)uVar20) {
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xeeb9;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xeec2;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xeecb;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xeed4;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xeed9;
        FUN_28b3_1172();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xeee2;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xeeeb;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xeef0;
        func_0x00029c9d();
        uStack_6 = &pbStack_17e;
        uStack_a._2_2_ = (byte **)0x22b2;
        uStack_a._0_2_ = (byte *)0xeefa;
        func_0x00029b55();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xef00;
        func_0x00029983();
        uStack_15e = uStack_1ba;
        uStack_15c = uStack_1b8;
      }
      pbStack_ae = pbStack_162;
      uStack_ac = uStack_160;
      if ((int)uStack_160 < 0) {
        pbStack_ae = (byte *)-(int)pbStack_162;
        uStack_ac = -((uStack_160 & 0x7fff) + (uint)(pbStack_162 != (byte *)0x0));
      }
      pbStack_b6 = pbStack_17e;
      uStack_b4 = uStack_17c;
      if ((int)uStack_17c < 0) {
        pbStack_b6 = (byte *)-(int)pbStack_17e;
        uStack_b4 = -((uStack_17c & 0x7fff) + (uint)(pbStack_17e != (byte *)0x0));
      }
      if (((int)uStack_ac <= iStack_ce) &&
         ((((int)uStack_ac < iStack_ce || (pbStack_ae < pbStack_d0)) &&
          ((int)uStack_b4 <= iStack_ce)))) {
        if ((int)uStack_b4 < iStack_ce) {
          pbVar11 = (byte *)FUN_3ab8_3fca();
          return pbVar11;
        }
        if (pbStack_b6 < pbStack_d0) {
          pbVar11 = (byte *)FUN_3ab8_3fca();
          return pbVar11;
        }
      }
      if (((iStack_170 <= (int)uStack_ac) &&
          ((iStack_170 < (int)uStack_ac || (pbStack_172 < pbStack_ae)))) &&
         (iStack_170 <= (int)uStack_b4)) {
        if (iStack_170 < (int)uStack_b4) {
          pbVar11 = (byte *)FUN_3ab8_3fca();
          return pbVar11;
        }
        if (pbStack_172 < pbStack_b6) {
          pbVar11 = (byte *)FUN_3ab8_3fca();
          return pbVar11;
        }
      }
      uVar20 = uStack_ac < uStack_b4;
      uVar22 = uStack_ac == uStack_b4;
      if ((int)uStack_b4 <= (int)uStack_ac) {
        if ((int)uStack_ac <= (int)uStack_b4) {
          uVar20 = pbStack_ae < pbStack_b6;
          uVar22 = pbStack_ae == pbStack_b6;
          if (pbStack_ae <= pbStack_b6) goto LAB_3ab8_44c2;
        }
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xefd9;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xefde;
        func_0x00029d78();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xefe7;
        func_0x000299d1();
        uStack_dc = uStack_15e;
        uStack_da = uStack_15c;
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf000;
        func_0x00029834();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf009;
        func_0x00029983();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf012;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf017;
        func_0x00029d78();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf020;
        func_0x000299d1();
        pbStack_162 = pbStack_17e;
        uStack_160 = uStack_17c;
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf039;
        func_0x00029834();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf042;
        func_0x00029983();
      }
LAB_3ab8_44c2:
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf04b;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf054;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf059;
      FUN_28b3_1181();
      if (!(bool)uVar20 && !(bool)uVar22) {
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf064;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf06d;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf076;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf07f;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf084;
        FUN_28b3_1172();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf08d;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf096;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf09b;
        func_0x00029c9d();
        uStack_6 = (byte **)&uStack_dc;
        uStack_a._2_2_ = (byte **)0x22b2;
        uStack_a._0_2_ = (byte *)0xf0a5;
        func_0x00029bb5();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf0ab;
        func_0x00029983();
        pbStack_162 = pbStack_1b4;
        uStack_160 = uStack_1b2;
      }
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf0c4;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf0cd;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uVar19 = 0x22b2;
      uStack_a._2_2_ = (byte **)0xf0d2;
      FUN_28b3_1181();
      if ((bool)uVar20) {
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf0dd;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf0e6;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf0ef;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf0f8;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf0fd;
        FUN_28b3_1172();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf106;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf10f;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf114;
        func_0x00029c9d();
        uStack_6 = (byte **)&uStack_15e;
        uStack_a._2_2_ = (byte **)0x22b2;
        uStack_a._0_2_ = (byte *)0xf11e;
        func_0x00029b55();
        uStack_6 = (byte **)0x22b2;
        uVar19 = 0x22b2;
        uStack_a._2_2_ = (byte **)0xf124;
        func_0x00029983();
        pbStack_17e = pbStack_1c2;
        uStack_17c = uStack_1c0;
      }
    }
    if ((char)uStack_6c != '\0') {
      uStack_6 = (byte **)pbStack_44;
      uStack_a._2_2_ = (byte **)param_2;
      uStack_e._2_2_ = (byte *)0xf144;
      uStack_a._0_2_ = (byte *)uVar19;
      FUN_3ab8_114a();
      uStack_6c = uStack_6c & 0xff00;
    }
    uStack_1ce = uStack_1a._2_2_ & 0xff;
    uStack_a._2_2_ = (byte **)0xf167;
    uStack_6 = (byte **)uVar19;
    func_0x000297e6();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf170;
    func_0x00029983();
    if ((param_2[uStack_1ce * 0x28 + 0x420] != 0) && ((int)uStack_1ce < 9)) {
      bVar21 = ((uint)uStack_16._2_2_ & 0x80) == 0;
      if (bVar21) {
        uStack_6 = (byte **)uStack_1ca;
        uStack_a._2_2_ = (byte **)uStack_1cc;
        uStack_a._0_2_ = (byte *)uStack_1ce;
        uStack_e._0_2_ = (byte *)0x22b2;
        uStack_12._2_2_ = 0xf1a4;
        uStack_e._2_2_ = param_2;
        FUN_3ab8_0f56();
      }
      uVar22 = bVar21 && &stack0x0000 == (undefined1 *)0x4;
      uVar20 = bVar21 && (undefined1 *)0xfff7 < (undefined1 *)((int)&uStack_e + 2);
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf1b0;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf1b9;
      FUN_28b3_100d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf1be;
      func_0x00029ae7();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf1c7;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf1d0;
      FUN_28b3_100d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf1d5;
      func_0x00029ae7();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf1de;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf1e7;
      FUN_28b3_100d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf1ec;
      func_0x00029ae7();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf1f1;
      FUN_28b3_1163();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf1fa;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf203;
      FUN_28b3_100d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf208;
      func_0x00029ae7();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf20d;
      FUN_28b3_117c();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf212;
      FUN_28b3_1181();
      if (!(bool)uVar20 && !(bool)uVar22) {
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf21d;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf222;
        func_0x00029d78();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf22b;
        func_0x000299d1();
        uStack_dc = uStack_15e;
        uStack_da = uStack_15c;
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf244;
        func_0x00029834();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf24d;
        func_0x00029983();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf256;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf25b;
        func_0x00029d78();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf264;
        func_0x000299d1();
        pbStack_162 = pbStack_17e;
        uStack_160 = uStack_17c;
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf27d;
        func_0x00029834();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf286;
        func_0x00029983();
      }
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf28f;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf298;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf29d;
      FUN_28b3_1181();
      if ((bool)uVar22) {
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf2a8;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf2b1;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf2b6;
        FUN_28b3_1181();
        if ((bool)uVar22) goto LAB_3ab8_478a;
      }
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf2c1;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf2c9;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf2d2;
      func_0x00029bb5();
      uStack_a._0_2_ = (byte *)0x22b2;
      uStack_e._2_2_ = (byte *)0xf2dc;
      func_0x00029983();
      uStack_a._0_2_ = (byte *)0x22b2;
      uStack_e._2_2_ = (byte *)0xf2e5;
      func_0x000297e6();
      uStack_a._0_2_ = (byte *)0x22b2;
      uStack_e._2_2_ = (byte *)0xf2ed;
      func_0x00029b6d();
      uStack_a._0_2_ = (byte *)0x22b2;
      uStack_e._2_2_ = (byte *)0xf2f6;
      func_0x00029bb5();
      uStack_e._0_2_ = (byte *)0x22b2;
      uStack_12._2_2_ = 0xf300;
      func_0x00029983();
      uStack_e._0_2_ = param_2;
      uStack_12._2_2_ = 0x22b2;
      uStack_12._0_2_ = (byte *)0xf307;
      FUN_3ab8_0eb3();
LAB_3ab8_478a:
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf313;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf31b;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf324;
      func_0x00029bb5();
      uStack_a._0_2_ = (byte *)0x22b2;
      uStack_e._2_2_ = (byte *)0xf32e;
      func_0x00029983();
      uStack_a._0_2_ = (byte *)0x22b2;
      uStack_e._2_2_ = (byte *)0xf337;
      func_0x000297e6();
      uStack_a._0_2_ = (byte *)0x22b2;
      uStack_e._2_2_ = (byte *)0xf33f;
      func_0x00029b6d();
      uStack_a._0_2_ = (byte *)0x22b2;
      uStack_e._2_2_ = (byte *)0xf348;
      func_0x00029bb5();
      uStack_e._0_2_ = (byte *)0x22b2;
      uStack_12._2_2_ = 0xf352;
      func_0x00029983();
      uStack_e._0_2_ = (byte *)0x22b2;
      uStack_12._2_2_ = 0xf35b;
      func_0x000297e6();
      uStack_e._0_2_ = (byte *)0x22b2;
      uStack_12._2_2_ = 0xf363;
      func_0x00029b6d();
      uStack_e._0_2_ = (byte *)0x22b2;
      uStack_12._2_2_ = 0xf36c;
      func_0x00029bb5();
      uStack_12._0_2_ = (byte *)0x22b2;
      uStack_16._2_2_ = (byte *)0xf376;
      func_0x00029983();
      uStack_12._0_2_ = (byte *)0x22b2;
      uStack_16._2_2_ = (byte *)0xf37f;
      func_0x000297e6();
      uStack_12._0_2_ = (byte *)0x22b2;
      uStack_16._2_2_ = (byte *)0xf387;
      func_0x00029b6d();
      uStack_12._0_2_ = (byte *)0x22b2;
      uStack_16._2_2_ = (byte *)0xf390;
      func_0x00029bb5();
      uStack_16._0_2_ = (byte *)0x22b2;
      uStack_1a._2_2_ = 0xf39a;
      func_0x00029983();
      uStack_16._0_2_ = param_2;
      uStack_1a._2_2_ = 0x22b2;
      uStack_1a._0_2_ = 0xf3a1;
      FUN_3ab8_0b0a();
      uStack_c6 = uStack_15e;
      uStack_c4 = uStack_15c;
      pbStack_e0 = pbStack_17e;
      uStack_de = uStack_17c;
      pbVar11 = (byte *)FUN_3ab8_3fca();
      return pbVar11;
    }
    pbStack_1d6 = (byte *)*(undefined2 *)0x9df0;
    uStack_1d4 = *(uint *)0x9df2;
    uStack_1e0 = *(undefined2 *)0x9d90;
    uStack_1de = *(undefined2 *)0x9d92;
    uStack_256 = 0;
    uStack_1dc = 0;
    uStack_6 = (byte **)*(undefined2 *)0x9d8a;
    uStack_a._2_2_ = (byte **)*(undefined2 *)0x9d88;
    uStack_a._0_2_ = (byte *)0x1;
    uStack_e._0_2_ = (byte *)0x22b2;
    uStack_12._2_2_ = 0xf408;
    pbStack_1d2 = pbStack_1d6;
    uStack_1d0 = uStack_1d4;
    uStack_e._2_2_ = param_2;
    FUN_3ab8_0f56();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf414;
    func_0x000297e6();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf41d;
    FUN_28b3_100d();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf426;
    func_0x0002996b();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf42f;
    func_0x00029983();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf438;
    func_0x000297e6();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf441;
    FUN_28b3_100d();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf44a;
    func_0x0002996b();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf453;
    func_0x00029983();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf45c;
    func_0x00029834();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf465;
    func_0x000297e6();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf46e;
    func_0x00029b6d();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf477;
    func_0x000297e6();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf480;
    func_0x00029b6d();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf485;
    FUN_28b3_117c();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf48a;
    func_0x00029d78();
    uStack_e._0_2_ = (byte *)0x22b2;
    uStack_12._2_2_ = 0xf494;
    func_0x000299d1();
    uStack_e._0_2_ = (byte *)0x22b2;
    uStack_12._2_2_ = 0xf499;
    FUN_28b3_1582();
    uVar20 = (undefined1 *)0xfff7 < (undefined1 *)((int)&uStack_e + 2);
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf4a3;
    func_0x00029834();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf4ac;
    func_0x0002996b();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf4b1;
    func_0x00029d78();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf4b6;
    FUN_28b3_1181();
    if ((bool)uVar20) {
      pbVar11 = (byte *)FUN_3ab8_3fca();
      return pbVar11;
    }
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf4c4;
    func_0x000297e6();
    uStack_6 = (byte **)auStack_1da;
    uStack_a._2_2_ = (byte **)0x22b2;
    uStack_a._0_2_ = (byte *)0xf4ce;
    func_0x00029b9d();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf4d4;
    func_0x00029983();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf4dd;
    func_0x000297e6();
    uStack_6 = (byte **)aiStack_200;
    uStack_a._2_2_ = (byte **)0x22b2;
    uStack_a._0_2_ = (byte *)0xf4e7;
    func_0x00029b9d();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf4ed;
    func_0x00029983();
    pbStack_176 = (byte *)*(undefined2 *)(uStack_1ce * 2 + 0xa88);
    pbStack_262 = (byte *)*(undefined2 *)0x9d88;
    pbStack_260 = (byte *)*(undefined2 *)0x9d8a;
    uStack_174 = 0;
    pbStack_92 = pbStack_176;
    pbStack_90 = pbStack_176;
    if (uStack_1ce == 0x10) {
      pbStack_92 = (byte *)0x7fff;
      pbStack_90 = (byte *)0xfffd;
    }
    if (uStack_1ce == 0x11) {
      pbStack_92 = (byte *)0xbfff;
      pbStack_90 = (byte *)0xfffa;
    }
    if (uStack_1ce == 0x12) {
      pbStack_92 = (byte *)0xffff;
      pbStack_90 = (byte *)0xfff7;
    }
    pbStack_25a = pbStack_262;
    pbStack_258 = pbStack_260;
    pbStack_e6 = pbStack_176;
    if (((((int)uStack_1ce < 2) || (8 < (int)uStack_1ce)) && ((int)uStack_1ce < 0x10)) ||
       ((((uint)uStack_16._2_2_ & 0x40) == 0 && (((uint)uStack_16._2_2_ & 0x80) == 0)))) {
      pbStack_80 = (byte *)0x0;
      pbStack_8e = pbStack_92;
      pbStack_8c = pbStack_90;
      pbStack_1a0 = (byte *)*(undefined2 *)0x9d88;
      uStack_19e = *(uint *)0x9d8a;
      pbStack_86 = pbStack_1a0;
      pbStack_84 = (byte *)uStack_19e;
      if ((int)uStack_1ce < 0x10) {
        uVar20 = uStack_1ce == 0;
        if ((int)uStack_1ce < 2) {
          uStack_1cc = *(undefined2 *)0x9df4;
          uStack_1ca = *(undefined2 *)0x9df6;
        }
        else {
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf622;
          func_0x000297e6();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf62b;
          func_0x00029b85();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf634;
          func_0x00029b6d();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf63d;
          func_0x00029983();
        }
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf657;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf660;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf669;
        func_0x00029b6d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf66e;
        FUN_28b3_1181();
        if ((bool)uVar20) {
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf679;
          func_0x000297e6();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf682;
          func_0x00029b85();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf68b;
          func_0x00029bb5();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf690;
          func_0x00029d78();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf695;
          uStack_26a = FUN_28b3_0f51();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf6a2;
          FUN_28b3_0d8b();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf6ab;
          func_0x00029b9d();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf6b4;
          func_0x00029983();
        }
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf6bd;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf6c6;
        func_0x00029b6d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf6ce;
        func_0x0002996b();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf6d6;
        FUN_28b3_0ee9();
        if (10 < (int)uStack_1ce) {
          uStack_6 = (byte **)&uStack_1e0;
          uStack_a._2_2_ = apbStack_24c;
          uStack_a._0_2_ = (byte *)uStack_1ce;
          uStack_e._2_2_ = (byte *)0x22b2;
          uStack_e._0_2_ = (byte *)0xf6ef;
          uStack_1dc = FUN_3ab8_3a0b();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf6fe;
          func_0x000297e6();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf707;
          func_0x00029b6d();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xf70f;
          func_0x00029983();
        }
      }
      uVar20 = uStack_1ce < 0xf;
      if ((int)uStack_1ce < 0x10) goto LAB_3ab8_4c4c;
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf722;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf72b;
      func_0x000297e6();
      uStack_6 = (byte **)&uStack_1cc;
      uStack_a._2_2_ = (byte **)0x22b2;
      uStack_a._0_2_ = (byte *)0xf735;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf73b;
      func_0x0002996b();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf744;
      func_0x00029b85();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf74d;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf756;
      func_0x0002996b();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf75b;
      FUN_28b3_1181();
      if ((bool)uVar20) {
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf766;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf76f;
        func_0x00029b85();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf774;
        func_0x00029d78();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf77d;
        func_0x00029c74();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf782;
        uStack_26a = FUN_28b3_0f51();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf78f;
        FUN_28b3_0d8b();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf798;
        func_0x00029b9d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf7a1;
        func_0x00029983();
      }
      else {
        uStack_1cc = *(undefined2 *)0x9df4;
        uStack_1ca = *(undefined2 *)0x9df6;
      }
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf7bb;
      func_0x000297e6();
    }
    else {
      if (pbStack_80 == pbStack_176) goto LAB_3ab8_4c4c;
      pbStack_8e = pbStack_92;
      pbStack_8c = pbStack_90;
      pbStack_1a0 = (byte *)*(undefined2 *)0x9d88;
      uStack_19e = *(uint *)0x9d8a;
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf5bc;
      pbStack_86 = pbStack_1a0;
      pbStack_84 = (byte *)uStack_19e;
      pbStack_80 = pbStack_176;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf5c5;
      func_0x00029b85();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf5ce;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf5d7;
      func_0x0002996b();
    }
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf7c4;
    func_0x00029b6d();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf7cc;
    func_0x00029983();
LAB_3ab8_4c4c:
    pbStack_204 = pbStack_1a0;
    uStack_202 = uStack_19e;
    pbStack_1a0 = (byte *)*(undefined2 *)0x9d88;
    uStack_19e = *(undefined2 *)0x9d8a;
    do {
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf7f4;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf7fd;
      func_0x00029bb5();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf806;
      func_0x00029983();
      pbStack_86 = (byte *)*(undefined2 *)0x9d88;
      pbStack_84 = (byte *)*(uint *)0x9d8a;
      uVar20 = uStack_1ce < 8;
      uVar22 = uStack_1ce == 8;
      if ((int)uStack_1ce < 9) {
LAB_3ab8_4ca3:
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf82c;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf835;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf83a;
        FUN_28b3_1181();
        if (!(bool)uVar20 && !(bool)uVar22) {
          pbVar11 = (byte *)FUN_3ab8_5076();
          return pbVar11;
        }
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf848;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf851;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf85a;
        func_0x00029983();
        pbStack_254 = pbStack_1f8;
        uStack_252 = uStack_1f6;
      }
      else {
        uVar20 = uStack_1ce < 0xf;
        uVar22 = uStack_1ce == 0xf;
        if (0xf < (int)uStack_1ce) goto LAB_3ab8_4ca3;
      }
      if ((10 < (int)uStack_1ce) && ((int)uStack_1ce < 0x10)) {
        pbStack_25a = pbStack_262;
        pbStack_258 = pbStack_260;
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf893;
        func_0x000297e6();
        uStack_6 = &pbStack_254;
        uStack_a._2_2_ = (byte **)0x22b2;
        uStack_a._0_2_ = (byte *)0xf89d;
        func_0x00029bb5();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf8a3;
        func_0x00029983();
        pbStack_262 = apbStack_24c[uStack_256 * 2];
        pbStack_260 = apbStack_24c[uStack_256 * 2 + 1];
        uStack_256 = uStack_256 + 1;
        uVar20 = uStack_256 < uStack_1dc;
        uVar22 = uStack_256 == uStack_1dc;
        if ((int)uStack_1dc < (int)uStack_256) {
          uStack_256 = 0;
        }
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf8d8;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf8dd;
        func_0x00029d78();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf8e6;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf8eb;
        func_0x00029d78();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf8f4;
        func_0x00029bfc();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xf8f9;
        FUN_28b3_1181();
        if ((bool)uVar20 || (bool)uVar22) {
          pbStack_254 = pbStack_1f8;
          uStack_252 = uStack_1f6;
          pbStack_262 = (byte *)*(undefined2 *)0x9d88;
          pbStack_260 = (byte *)*(undefined2 *)0x9d8a;
        }
      }
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf923;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf92c;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf935;
      func_0x00029bb5();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf93e;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf947;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf950;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf955;
      FUN_28b3_1163();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf95e;
      func_0x00029983();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf967;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf970;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf979;
      func_0x00029bb5();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf982;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf98b;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf994;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf999;
      FUN_28b3_117c();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf9a2;
      func_0x00029983();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf9ab;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf9b4;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf9bd;
      func_0x00029bb5();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf9c6;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf9cf;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf9d8;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf9dd;
      FUN_28b3_1163();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf9e6;
      func_0x00029983();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf9ef;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xf9f8;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfa01;
      func_0x00029bb5();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfa0a;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfa13;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfa1c;
      func_0x00029b6d();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfa21;
      FUN_28b3_117c();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfa2a;
      func_0x00029983();
      uVar20 = pbStack_80 == (byte *)0x0;
      if ((bool)uVar20) {
LAB_3ab8_4ecc:
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfa58;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfa61;
        func_0x00029b6d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfa6a;
        func_0x00029bb5();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfa73;
        func_0x00029983();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfa7f;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfa88;
        func_0x00029b6d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfa91;
        func_0x00029bb5();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfa9a;
        func_0x00029983();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfaa3;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfaac;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfab1;
        FUN_28b3_1181();
        if ((bool)uVar20) {
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xfabc;
          func_0x000297e6();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xfac5;
          func_0x000297e6();
          uStack_6 = (byte **)0x22b2;
          uStack_a._2_2_ = (byte **)0xfaca;
          FUN_28b3_1181();
          if (!(bool)uVar20) goto LAB_3ab8_4f4c;
        }
        else {
LAB_3ab8_4f4c:
          uStack_6 = (byte **)uStack_1ee;
          uStack_a._2_2_ = (byte **)uStack_1f0;
          uStack_a._0_2_ = (byte *)uStack_1e6;
          uStack_e._2_2_ = pbStack_1e8;
          uStack_e._0_2_ = param_2;
          uStack_12._2_2_ = 0x22b2;
          uStack_12._0_2_ = (byte *)0xfae3;
          FUN_3ab8_0eb3();
        }
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfaf2;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfafb;
        func_0x00029b6d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfb04;
        func_0x00029bb5();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfb0d;
        func_0x0002996b();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfb16;
        func_0x00029983();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfb22;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfb2b;
        func_0x00029b6d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfb34;
        func_0x00029bb5();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfb3d;
        func_0x0002996b();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfb46;
        func_0x00029983();
        uStack_6 = (byte **)uStack_1ee;
        uStack_a._2_2_ = (byte **)uStack_1f0;
        uStack_a._0_2_ = (byte *)uStack_1e6;
        uStack_e._2_2_ = pbStack_1e8;
        uStack_e._0_2_ = (byte *)0x22b2;
        uStack_12._2_2_ = 0xfb5f;
        func_0x000297e6();
        uStack_12._0_2_ = (byte *)0x22b2;
        uStack_16._2_2_ = (byte *)0xfb69;
        func_0x00029983();
        uStack_12._0_2_ = (byte *)0x22b2;
        uStack_16._2_2_ = (byte *)0xfb72;
        func_0x000297e6();
        uStack_16._0_2_ = (byte *)0x22b2;
        uStack_1a._2_2_ = 0xfb7c;
        func_0x00029983();
        uStack_16._0_2_ = param_2;
        uStack_1a._2_2_ = 0x22b2;
        uStack_1a._0_2_ = -0x47d;
        FUN_3ab8_0b0a();
      }
      else {
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfa39;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfa42;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfa47;
        FUN_28b3_1181();
        if (!(bool)uVar20) goto LAB_3ab8_4ecc;
      }
      pbStack_204 = pbStack_254;
      uStack_202 = uStack_252;
      while( true ) {
        uVar20 = uStack_1ce < 8;
        uVar22 = uStack_1ce == 8;
        if (8 < (int)uStack_1ce) {
          uVar20 = uStack_1ce < 0xf;
          uVar22 = uStack_1ce == 0xf;
          if ((int)uStack_1ce < 0x10) goto LAB_3ab8_50ba;
        }
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfbb0;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfbb9;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfbbe;
        FUN_28b3_1181();
        if ((bool)uVar20 || (bool)uVar22) break;
        uVar20 = 0;
        uVar22 = ((uint)pbStack_8c & 0x8000) == 0;
        if (!(bool)uVar22) goto LAB_3ab8_50ba;
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfc91;
        func_0x000297e6();
        uStack_6 = &pbStack_204;
        uStack_a._2_2_ = (byte **)0x22b2;
        uStack_a._0_2_ = (byte *)0xfc9b;
        func_0x00029bb5();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfca1;
        func_0x00029983();
        bVar21 = (int)pbStack_8e < 0;
        pbStack_8e = (byte *)((int)pbStack_8e << 1);
        pbStack_8c = (byte *)((int)pbStack_8c << 1 | (uint)bVar21);
        pbStack_86 = (byte *)*(undefined2 *)0x9d88;
        pbStack_84 = (byte *)*(uint *)0x9d8a;
      }
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfbc9;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfbd2;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfbd7;
      FUN_28b3_1181();
      if ((bool)uVar22) {
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfbe2;
        func_0x000297e6();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfbeb;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x22b2;
        uStack_a._2_2_ = (byte **)0xfbf4;
        func_0x00029983();
      }
LAB_3ab8_50ba:
      pbStack_1d2 = pbStack_250;
      uStack_1d0 = uStack_24e;
      pbStack_1d6 = pbStack_25e;
      uStack_1d4 = uStack_25c;
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfc63;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfc68;
      func_0x00029d78();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfc71;
      func_0x000297e6();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfc76;
      func_0x00029d78();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfc7f;
      func_0x00029bfc();
      uStack_6 = (byte **)0x22b2;
      uStack_a._2_2_ = (byte **)0xfc84;
      FUN_28b3_1181();
      if ((bool)uVar20 || (bool)uVar22) {
        uStack_c6 = *(undefined2 *)0x9df0;
        uStack_c4 = *(undefined2 *)0x9df2;
        pbVar11 = (byte *)FUN_3ab8_3fca();
        return pbVar11;
      }
    } while( true );
  default:
    goto LAB_3ab8_015f;
  }
switchD_3000_ac9e_caseD_60:
  uStack_6 = (byte **)0xff4f;
  func_0x000297e6();
  uStack_6 = (byte **)0xff54;
  func_0x00029d78();
  uStack_6 = (byte **)0xff59;
  FUN_28b3_1181();
  if ((bool)uVar20) {
LAB_3ab8_53f9:
    uStack_256 = 1;
  }
  else {
    uStack_6 = (byte **)0xff64;
    func_0x00029834();
    uStack_6 = (byte **)0xff6d;
    func_0x000297e6();
    uStack_6 = (byte **)0xff72;
    func_0x00029d78();
    uStack_6 = (byte **)0xff77;
    FUN_28b3_1181();
    if ((bool)uVar20) goto LAB_3ab8_53f9;
  }
  uStack_6 = (byte **)0xff95;
  func_0x000297e6();
  uStack_6 = (byte **)0xff9e;
  func_0x00029983();
  if (0xf < (int)uStack_256) {
    uStack_6 = (byte **)0xffae;
    func_0x000297e6();
    uStack_6 = (byte **)0xffb3;
    func_0x00029d78();
    uStack_6 = (byte **)0xffbc;
    func_0x00029c2c();
    uStack_6 = (byte **)0xffc5;
    func_0x00029983();
  }
  uVar20 = uStack_256 == 0;
  uVar22 = uStack_256 == 1;
  if ((int)uStack_256 < 2) {
LAB_3ab8_5478:
    uVar19 = 0x22b2;
    if (10 < (int)uStack_256) {
switchD_3000_ac9e_caseD_61:
      if ((int)uStack_256 < 0x10) goto LAB_3ab8_5489;
    }
    lStack_190 = 0x1680000;
  }
  else {
    uStack_6 = (byte **)0xffd5;
    func_0x000297e6();
    uStack_6 = (byte **)0xffda;
    func_0x00029d78();
    uStack_6 = (byte **)0xffe3;
    func_0x000297e6();
    uStack_6 = (byte **)0xffe8;
    func_0x00029d78();
    uStack_6 = (byte **)0xfff1;
    func_0x00029c2c();
    uVar19 = 0x22b2;
    uStack_6 = (byte **)0xfff6;
    FUN_28b3_1181();
    if ((bool)uVar20 || (bool)uVar22) goto LAB_3ab8_5478;
LAB_3ab8_5489:
    pbVar11 = (byte *)(uStack_58 - uStack_5c);
    pbStack_2b8 = (byte *)((uStack_56 - uStack_5a) - (uint)(uStack_58 < uStack_5c));
    if (((int)pbStack_2b8 < 1) && (((int)pbStack_2b8 < 0 || (pbVar11 == (byte *)0x0)))) {
      pbStack_2b8 = pbStack_2b8 + 0x168;
    }
    uStack_6 = (byte **)0x10;
    uStack_a._0_2_ = (byte *)0x45;
    uStack_a._2_2_ = (byte **)uVar19;
    func_0x000297e6();
    uStack_a._2_2_ = (byte **)0x22b2;
    uStack_a._0_2_ = (byte *)0x4e;
    func_0x00029b85();
    uStack_a._2_2_ = (byte **)0x22b2;
    uStack_a._0_2_ = (byte *)0x57;
    func_0x00029b6d();
    uStack_a._2_2_ = (byte **)0x22b2;
    uStack_a._0_2_ = (byte *)0x5c;
    func_0x00029d78();
    uStack_a._2_2_ = (byte **)0x22b2;
    uStack_a._0_2_ = (byte *)0x65;
    func_0x00029c44();
    uStack_a._2_2_ = (byte **)0x22b2;
    uStack_a._0_2_ = (byte *)0x6a;
    uStack_a = FUN_28b3_0f51();
    uStack_e._2_2_ = pbStack_2b8;
    uStack_12._2_2_ = 0x22b2;
    uStack_12._0_2_ = (byte *)0x79;
    uStack_e._0_2_ = pbVar11;
    lVar25 = FUN_21f2_5978();
    uStack_12 = (byte *)(lVar25 + 1);
    uStack_16._2_2_ = pbStack_2b8;
    uStack_1a._2_2_ = 0x22b2;
    uStack_1a._0_2_ = 0x8e;
    uStack_16._0_2_ = pbVar11;
    uStack_1a = FUN_21f2_5978();
    uStack_1c = 0x22b2;
    uStack_1e = 0x95;
    lStack_190 = FUN_21f2_5978();
  }
  if (lStack_190 < 1) {
    lStack_190 = 1;
  }
  pbStack_e6 = (byte *)*(uint *)(uStack_256 * 2 + 0xa88);
  uStack_6 = (byte **)0xf8;
  func_0x00029da5();
  uStack_6 = (byte **)0x101;
  func_0x00029c2c();
  uStack_6 = (byte **)0x10a;
  func_0x000299b9();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x114;
  func_0x000299d1();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x119;
  func_0x0002a11e();
  uStack_6 = (byte **)0x123;
  func_0x00029834();
  uStack_6 = (byte **)0x12b;
  func_0x00029983();
  uStack_6 = (byte **)0x134;
  func_0x00029834();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x13e;
  func_0x000299d1();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x143;
  func_0x0002a10c();
  uVar20 = (undefined1 *)0xfff7 < &uStack_a;
  uVar22 = &stack0x0000 == (undefined1 *)0x2;
  uStack_6 = (byte **)0x14d;
  func_0x00029834();
  uStack_6 = (byte **)0x156;
  func_0x00029983();
  uStack_6 = (byte **)0x15f;
  func_0x00029834();
  uStack_6 = (byte **)0x168;
  func_0x000297e6();
  uStack_6 = (byte **)0x16d;
  func_0x00029d78();
  uStack_6 = (byte **)0x172;
  FUN_28b3_1181();
  if ((bool)uVar20) {
    uStack_198._2_2_ = 0x24;
  }
  else {
    uStack_6 = (byte **)0x18b;
    func_0x000297e6();
    uStack_6 = (byte **)0x194;
    func_0x000297e6();
    uStack_6 = (byte **)0x199;
    FUN_28b3_1181();
    if ((bool)uVar20 || (bool)uVar22) {
      uStack_6 = (byte **)0x1b2;
      func_0x000297e6();
      uStack_6 = (byte **)0x1bb;
      func_0x000297e6();
      uStack_6 = (byte **)0x1c0;
      FUN_28b3_1181();
      if ((bool)uVar20 || (bool)uVar22) {
        uStack_198._2_2_ = 2;
      }
      else {
        uStack_198._2_2_ = 5;
      }
    }
    else {
      uStack_198._2_2_ = 0x14;
    }
  }
  uStack_198._0_2_ = 0;
  if ((((param_2[0xc26] == 0) && (param_2[0xcf0] == 0)) || (param_2[uStack_256 * 0x28 + 0x420] == 0)
      ) || ((int)((-(uint)((param_2[0xdca] & 1) == 0) & 7) + 1) < (int)uStack_256)) {
LAB_3ab8_644d:
    uStack_6 = (byte **)*(undefined2 *)0x9d88;
    uStack_a._2_2_ = (byte **)0x1;
    uStack_a._0_2_ = param_2;
    uStack_e._2_2_ = (byte *)0x22b2;
    uStack_e._0_2_ = (byte *)0xfe0;
    FUN_4375_8386();
    lVar25 = lStack_190;
    if ((10 < (int)uStack_256) && ((int)uStack_256 < 0x10)) {
      uStack_6 = (byte **)auStack_2b2;
      uStack_a._2_2_ = (byte **)uStack_256;
      uStack_a._0_2_ = (byte *)0x22b2;
      uStack_e._2_2_ = (byte *)0x1003;
      pbStack_262 = (byte *)FUN_4375_ae3b();
      uStack_6 = (byte **)0x1013;
      func_0x000298b4();
      uStack_6 = (byte **)0x101c;
      func_0x00029b6d();
      uStack_6 = (byte **)0x1021;
      func_0x00029d78();
      uStack_6 = (byte **)0x1026;
      lVar25 = FUN_28b3_0f51();
    }
    if ((uStack_56 <= uStack_5a) && ((uStack_5a != uStack_56 || (uStack_58 <= uStack_5c)))) {
      uStack_56 = uStack_56 + 0x168;
    }
    pbStack_1f8 = (byte *)*(undefined2 *)0x9d88;
    uStack_1f6 = *(undefined2 *)0x9d8a;
    uStack_6 = (byte **)0x1061;
    lStack_190 = lVar25;
    func_0x000297e6();
    uStack_6 = (byte **)0x106a;
    func_0x00029b6d();
    uStack_6 = (byte **)0x1073;
    func_0x00029983();
    uStack_6 = (byte **)0x107c;
    func_0x000297e6();
    uStack_6 = (byte **)0x1085;
    func_0x00029b6d();
    uStack_6 = (byte **)0x108e;
    func_0x00029983();
    uVar20 = uStack_256 == 0;
    uVar22 = uStack_256 == 1;
    if ((bool)uVar22) {
      uStack_6 = (byte **)0x109e;
      func_0x00029834();
      uStack_6 = (byte **)0x10a7;
      func_0x000298b4();
      uStack_6 = (byte **)0x10b0;
      func_0x00029b6d();
      uStack_6 = (byte **)0x10b5;
      func_0x00029d78();
      uStack_6 = (byte **)0x10be;
      func_0x00029c2c();
      uStack_6 = (byte **)0x10c3;
      FUN_28b3_1181();
      if (!(bool)uVar20 && !(bool)uVar22) {
        uStack_6 = (byte **)0x10ce;
        func_0x000297e6();
        uStack_6 = (byte **)0x10d3;
        func_0x00029d78();
        uStack_6 = (byte **)0x10dc;
        func_0x00029c2c();
        uStack_6 = (byte **)0x10e5;
        FUN_28b3_112c();
        uStack_6 = (byte **)0x10ea;
        uStack_198 = FUN_28b3_0f51();
      }
    }
    if (uStack_198 < 1) {
      uStack_198 = 1;
    }
    uStack_194 = CONCAT22(uStack_5a,uStack_5c);
    do {
      while( true ) {
        if (CONCAT22(uStack_56,uStack_58) <= uStack_194) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar8 = uStack_194;
        uStack_3a = uStack_194;
        if (((int)uStack_256 < 0xb) || (0xf < (int)uStack_256)) break;
        while( true ) {
          if (CONCAT22(uStack_5a,uStack_5c) < uStack_3a) {
            uStack_194 = lStack_190 + uStack_194;
          }
          if (CONCAT22(uStack_56,uStack_58) <= uStack_194) {
            uStack_194 = CONCAT22(uStack_56,uStack_58);
            pbStack_1f8 = (byte *)*(undefined2 *)0x9d88;
            uStack_1f6 = *(undefined2 *)0x9d8a;
          }
          uStack_6 = (byte **)0x11aa;
          func_0x000297e6();
          uStack_6 = (byte **)0x11b3;
          func_0x00029bb5();
          uStack_6 = (byte **)0x11b8;
          func_0x00029d78();
          uStack_6 = (byte **)0x11c1;
          func_0x000298b4();
          uStack_6 = (byte **)0x11ca;
          func_0x00029c2c();
          uStack_6 = (byte **)0x11d3;
          func_0x000299b9();
          uStack_e._2_2_ = (byte *)0x22b2;
          uStack_e._0_2_ = (byte *)0x11dd;
          func_0x000299d1();
          uStack_e._2_2_ = (byte *)0x22b2;
          uStack_e._0_2_ = (byte *)0x11e2;
          func_0x0002a11e();
          uStack_6 = (byte **)0x11ec;
          func_0x00029c2c();
          uStack_6 = (byte **)0x11f5;
          func_0x00029983();
          uStack_6 = (byte **)0x11fe;
          func_0x000297e6();
          uStack_6 = (byte **)0x1207;
          func_0x00029bb5();
          uStack_6 = (byte **)0x120c;
          func_0x00029d78();
          uStack_6 = (byte **)0x1215;
          func_0x00029834();
          uStack_e._2_2_ = (byte *)0x22b2;
          uStack_e._0_2_ = (byte *)0x121f;
          func_0x000299d1();
          uStack_e._2_2_ = (byte *)0x22b2;
          uStack_e._0_2_ = (byte *)0x1224;
          func_0x0002a10c();
          uStack_6 = (byte **)0x122e;
          func_0x00029c2c();
          uStack_6 = (byte **)0x1237;
          func_0x00029983();
          uStack_6 = (byte **)0x123f;
          func_0x000297e6();
          uStack_6 = (byte **)0x1248;
          func_0x00029b6d();
          uStack_6 = (byte **)0x1251;
          func_0x000297e6();
          uStack_6 = (byte **)0x125a;
          func_0x00029b6d();
          uStack_6 = (byte **)0x125f;
          FUN_28b3_1163();
          uStack_6 = (byte **)0x1268;
          func_0x00029bb5();
          uStack_6 = (byte **)0x1271;
          func_0x0002996b();
          uStack_6 = (byte **)0x127a;
          func_0x00029983();
          uStack_6 = (byte **)0x1282;
          func_0x000297e6();
          uStack_6 = (byte **)0x128b;
          func_0x00029b6d();
          uStack_6 = (byte **)0x1294;
          func_0x000297e6();
          uStack_6 = (byte **)0x129d;
          func_0x00029b6d();
          uStack_6 = (byte **)0x12a2;
          FUN_28b3_117c();
          uStack_6 = (byte **)0x12ab;
          func_0x00029bb5();
          uStack_6 = (byte **)0x12b4;
          func_0x0002996b();
          uStack_6 = (byte **)0x12bd;
          func_0x00029983();
          uStack_6 = (byte **)0x12c9;
          func_0x000297e6();
          uStack_6 = (byte **)0x12d2;
          func_0x00029b6d();
          uStack_6 = (byte **)0x12db;
          func_0x00029bb5();
          uStack_6 = (byte **)0x12e4;
          func_0x00029983();
          uStack_6 = (byte **)0x12f0;
          func_0x000297e6();
          uStack_6 = (byte **)0x12f9;
          func_0x00029b6d();
          uStack_6 = (byte **)0x1302;
          func_0x00029bb5();
          uStack_6 = (byte **)0x130b;
          func_0x00029983();
          pbStack_1f8 = (byte *)auStack_2b2[aiStack_200[0] * 2];
          uStack_1f6 = auStack_2b2[aiStack_200[0] * 2 + 1];
          aiStack_200[0] = aiStack_200[0] + 1;
          if ((int)pbStack_262 < aiStack_200[0]) {
            aiStack_200[0] = 0;
          }
          if (CONCAT22(uStack_5a,uStack_5c) < uStack_3a) break;
          uStack_6 = (byte **)apbStack_24c[0];
          uStack_a._2_2_ = (byte **)uStack_252;
          uStack_a._0_2_ = pbStack_254;
          uStack_e._2_2_ = param_2;
          uStack_e._0_2_ = (byte *)0x22b2;
          uStack_12._2_2_ = 0x1360;
          FUN_4375_82e3();
          pbStack_250 = pbStack_254;
          uStack_24e = uStack_252;
          pbStack_204 = apbStack_24c[0];
          uStack_3a = uStack_3a + 1;
        }
        uStack_6 = (byte **)pbStack_204;
        uStack_a._2_2_ = (byte **)uStack_24e;
        uStack_a._0_2_ = pbStack_250;
        uStack_e._2_2_ = apbStack_24c[1];
        uStack_e._0_2_ = apbStack_24c[0];
        uStack_12._2_2_ = uStack_252;
        uStack_12._0_2_ = pbStack_254;
        uStack_16._2_2_ = param_2;
        uStack_16._0_2_ = (byte *)0x22b2;
        uStack_1a._2_2_ = 0x13b5;
        FUN_4375_7f3a();
        pbStack_250 = pbStack_254;
        uStack_24e = uStack_252;
        pbStack_204 = apbStack_24c[0];
      }
      for (; uVar8 < CONCAT22(uStack_56,uStack_58); uVar8 = lStack_190 + uVar8) {
        if (((uint)pbStack_e6 & 0x8000) == 0) goto LAB_3ab8_68b6;
        pbStack_e6 = (byte *)((int)pbStack_e6 << 1 | 1);
      }
      uVar8 = CONCAT22(uStack_56,uStack_58);
LAB_3ab8_68b6:
      while( true ) {
        uStack_184 = uStack_194;
        if ((long)uVar8 < (long)uStack_194) {
          uStack_184 = uVar8;
        }
        uStack_6 = (byte **)0x145d;
        uStack_194 = uVar8;
        func_0x000298b4();
        uStack_6 = (byte **)0x1466;
        func_0x00029c2c();
        uStack_6 = (byte **)0x146f;
        func_0x000299b9();
        uStack_e._2_2_ = (byte *)0x22b2;
        uStack_e._0_2_ = (byte *)0x1479;
        func_0x000299d1();
        uStack_e._2_2_ = (byte *)0x22b2;
        uStack_e._0_2_ = (byte *)0x147e;
        func_0x0002a11e();
        uStack_6 = (byte **)0x1488;
        func_0x00029834();
        uStack_6 = (byte **)0x1491;
        func_0x00029b6d();
        uStack_6 = (byte **)0x149a;
        func_0x00029983();
        uStack_6 = (byte **)0x14a3;
        func_0x00029834();
        uStack_e._2_2_ = (byte *)0x22b2;
        uStack_e._0_2_ = (byte *)0x14ad;
        func_0x000299d1();
        uStack_e._2_2_ = (byte *)0x22b2;
        uStack_e._0_2_ = (byte *)0x14b2;
        func_0x0002a10c();
        uStack_6 = (byte **)0x14bc;
        func_0x00029834();
        uStack_6 = (byte **)0x14c5;
        func_0x00029b6d();
        uStack_6 = (byte **)0x14ce;
        func_0x00029983();
        uStack_6 = (byte **)0x14d6;
        func_0x000297e6();
        uStack_6 = (byte **)0x14df;
        func_0x00029b6d();
        uStack_6 = (byte **)0x14e8;
        func_0x000297e6();
        uStack_6 = (byte **)0x14f1;
        func_0x00029b6d();
        uStack_6 = (byte **)0x14f6;
        FUN_28b3_1163();
        uStack_6 = (byte **)0x14ff;
        func_0x00029bb5();
        uStack_6 = (byte **)0x1508;
        func_0x0002996b();
        uStack_6 = (byte **)0x1511;
        func_0x00029983();
        uStack_6 = (byte **)0x1519;
        func_0x000297e6();
        uStack_6 = (byte **)0x1522;
        func_0x00029b6d();
        uStack_6 = (byte **)0x152b;
        func_0x000297e6();
        uStack_6 = (byte **)0x1534;
        func_0x00029b6d();
        uStack_6 = (byte **)0x1539;
        FUN_28b3_117c();
        uStack_6 = (byte **)0x1542;
        func_0x00029bb5();
        uStack_6 = (byte **)0x154b;
        func_0x0002996b();
        uStack_6 = (byte **)0x1554;
        func_0x00029983();
        uStack_6 = (byte **)0x1560;
        func_0x000297e6();
        uStack_6 = (byte **)0x1569;
        func_0x00029b6d();
        uStack_6 = (byte **)0x1572;
        func_0x00029bb5();
        uStack_6 = (byte **)0x157b;
        func_0x0002996b();
        uStack_6 = (byte **)0x1584;
        func_0x00029983();
        uStack_6 = (byte **)0x1590;
        func_0x000297e6();
        uStack_6 = (byte **)0x1599;
        func_0x00029b6d();
        uStack_6 = (byte **)0x15a2;
        func_0x00029bb5();
        uStack_6 = (byte **)0x15ab;
        func_0x0002996b();
        uStack_6 = (byte **)0x15b3;
        FUN_28b3_0ee9();
        if ((long)uStack_3a < (long)uStack_184) {
          FUN_4375_7f3a();
          uVar8 = uStack_194;
        }
        else {
          func_0x000297e6();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029983();
          uStack_e._2_2_ = param_2;
          uStack_e._0_2_ = (byte *)0x22b2;
          uStack_12._2_2_ = 0x15f4;
          FUN_4375_82e3();
          uVar8 = uStack_194;
        }
        if ((long)uVar8 <= (long)uStack_184) break;
        uStack_194 = uStack_198 + uStack_184;
        pbStack_250 = pbStack_254;
        uStack_24e = uStack_252;
        pbStack_204 = apbStack_24c[0];
      }
      for (; (uStack_194 = uVar8, uVar8 < CONCAT22(uStack_56,uStack_58) &&
             (((uint)pbStack_e6 & 0x8000) == 0)); pbStack_e6 = (byte *)((int)pbStack_e6 << 1)) {
        uVar8 = lStack_190 + uVar8;
      }
    } while( true );
  }
  uVar20 = uStack_5e < 10000;
  uVar22 = uStack_5e == 10000;
  if (!(bool)uVar22) goto LAB_3ab8_644d;
  uStack_6 = (byte **)0x229;
  func_0x000297e6();
  uStack_6 = (byte **)0x232;
  func_0x000297e6();
  uStack_6 = (byte **)0x237;
  FUN_28b3_1181();
  if (!(bool)uVar20 && !(bool)uVar22) goto LAB_3ab8_644d;
  uStack_6 = (byte **)0x242;
  func_0x000297e6();
  uStack_6 = (byte **)0x24b;
  func_0x000297e6();
  uStack_6 = (byte **)0x250;
  FUN_28b3_1181();
  if (!(bool)uVar20 && !(bool)uVar22) goto LAB_3ab8_644d;
  uStack_6 = (byte **)0x25b;
  func_0x000297e6();
  uStack_6 = (byte **)0x264;
  func_0x000297e6();
  uStack_6 = (byte **)0x269;
  FUN_28b3_1181();
  if ((bool)uVar20) goto LAB_3ab8_644d;
  uStack_6 = (byte **)0x274;
  func_0x000297e6();
  uStack_6 = (byte **)0x27d;
  func_0x000297e6();
  uStack_6 = (byte **)0x282;
  FUN_28b3_1181();
  if ((bool)uVar20) goto LAB_3ab8_644d;
  uStack_1f0 = *(undefined2 *)0x9e34;
  uStack_1ee = *(undefined2 *)0x9e36;
  uStack_6 = (byte **)pbStack_25a;
  uStack_a._2_2_ = (byte **)uStack_256;
  uStack_a._0_2_ = param_2;
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x2a9;
  FUN_4375_8386();
  uStack_6 = (byte **)0x2d5;
  func_0x00029da5();
  uStack_6 = (byte **)0x2de;
  func_0x00029c2c();
  uStack_6 = (byte **)0x2e7;
  func_0x00029983();
  uStack_6 = (byte **)0x310;
  func_0x00029da5();
  uStack_6 = (byte **)0x319;
  func_0x00029c2c();
  uStack_6 = (byte **)0x322;
  func_0x00029983();
  if (uStack_5c == uStack_58) {
    uVar22 = uStack_5a < uStack_56;
    uVar20 = uStack_5a == uStack_56;
    if (!(bool)uVar20) goto LAB_3ab8_57b2;
LAB_3ab8_57c6:
    uStack_1f4 = *(undefined2 *)0x9d88;
    uStack_1f2 = *(undefined2 *)0x9d8a;
    uStack_1ec = *(undefined2 *)0x9dd8;
    uStack_1ea = *(undefined2 *)0x9dda;
  }
  else {
LAB_3ab8_57b2:
    uVar17 = (uStack_5a - uStack_56) - (uint)(uStack_5c < uStack_58);
    uVar22 = false;
    uVar20 = false;
    if (uStack_5c == uStack_58) {
      uVar22 = uVar17 < 0xfe98;
      uVar20 = uVar17 == 0xfe98;
      if ((bool)uVar20) goto LAB_3ab8_57c6;
    }
  }
  uStack_6 = (byte **)0x36d;
  func_0x000297e6();
  uStack_6 = (byte **)0x379;
  func_0x000297e6();
  uStack_6 = (byte **)0x37e;
  FUN_28b3_1181();
  if (!(bool)uVar22) goto LAB_3ab8_5861;
  uStack_6 = (byte **)0x389;
  func_0x000297e6();
  uStack_6 = (byte **)0x38e;
  func_0x00029af6();
  uStack_6 = (byte **)0x397;
  func_0x00029983();
  uStack_6 = (byte **)0x3a0;
  func_0x000297e6();
  uStack_6 = (byte **)0x3a9;
  FUN_28b3_100d();
  while( true ) {
    uStack_6 = (byte **)0x3e1;
    func_0x00029983();
LAB_3ab8_5861:
    uStack_6 = (byte **)0x3ea;
    func_0x000297e6();
    uStack_6 = (byte **)0x3f3;
    func_0x000297e6();
    uStack_6 = (byte **)0x3f8;
    FUN_28b3_1181();
    if ((bool)uVar22 || (bool)uVar20) break;
    uStack_6 = (byte **)0x3b8;
    func_0x000297e6();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0x3c2;
    func_0x00029bb5();
    uStack_6 = (byte **)0x3c8;
    func_0x00029983();
    uStack_6 = (byte **)0x3d1;
    func_0x000297e6();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0x3db;
    func_0x00029bb5();
  }
  while( true ) {
    uStack_6 = (byte **)0x437;
    func_0x000297e6();
    uStack_6 = (byte **)0x440;
    func_0x000297e6();
    uStack_6 = (byte **)0x445;
    FUN_28b3_1181();
    if ((bool)uVar22) break;
    uStack_6 = (byte **)0x405;
    func_0x000297e6();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0x40f;
    func_0x00029b55();
    uStack_6 = (byte **)0x415;
    func_0x00029983();
    uStack_6 = (byte **)0x41e;
    func_0x000297e6();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0x428;
    func_0x00029b55();
    uStack_6 = (byte **)0x42e;
    func_0x00029983();
  }
  uVar22 = 1;
  while( true ) {
    uStack_6 = (byte **)0x46b;
    func_0x000297e6();
    uStack_6 = (byte **)0x474;
    func_0x000297e6();
    uStack_6 = (byte **)0x479;
    FUN_28b3_1181();
    if (!(bool)uVar22) break;
    uStack_6 = (byte **)0x452;
    func_0x000297e6();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0x45c;
    func_0x00029bb5();
    uStack_6 = (byte **)0x462;
    func_0x00029983();
  }
  uStack_6 = (byte **)0x484;
  func_0x00029834();
  uStack_6 = (byte **)0x48d;
  func_0x000297e6();
  uStack_6 = (byte **)0x496;
  func_0x000297e6();
  uStack_6 = (byte **)0x49b;
  FUN_28b3_1181();
  if ((bool)uVar22 || (bool)uVar20) {
    uStack_6 = (byte **)0x4ba;
    func_0x000297e6();
  }
  else {
    uStack_6 = (byte **)0x4a6;
    func_0x000297e6();
    uStack_6 = (byte **)0x4af;
    FUN_28b3_100d();
  }
  uStack_6 = (byte **)0x4c3;
  func_0x0002996b();
  uStack_6 = (byte **)0x4cc;
  FUN_28b3_100d();
  uStack_6 = (byte **)0x4d1;
  func_0x00029ae7();
  uStack_6 = (byte **)0x4d6;
  func_0x00029d78();
  uStack_6 = (byte **)0x4db;
  FUN_28b3_1181();
  if ((bool)uVar22) {
    uStack_6 = (byte **)0x4e9;
    func_0x000297e6();
    uStack_6 = (byte **)0x4f2;
    func_0x000297e6();
    uStack_6 = (byte **)0x4f7;
    FUN_28b3_1181();
    if (!(bool)uVar22 && !(bool)uVar20) {
      uStack_6 = (byte **)0x502;
      func_0x000297e6();
      uStack_6 = (byte **)0x50b;
      func_0x000297e6();
      uStack_6 = (byte **)0x510;
      func_0x00029d78();
      uStack_6 = (byte **)0x519;
      func_0x00029c74();
      uStack_6 = (byte **)0x522;
      func_0x0002996b();
      uStack_6 = (byte **)0x527;
      FUN_28b3_1181();
      if (!(bool)uVar22 && !(bool)uVar20) {
        uStack_6 = (byte **)0x532;
        func_0x000297e6();
        uStack_6 = (byte **)0x53b;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x544;
        func_0x00029983();
      }
    }
    uStack_6 = (byte **)0x54d;
    func_0x000297e6();
    uStack_6 = (byte **)0x556;
    func_0x000297e6();
    uStack_6 = (byte **)0x55b;
    FUN_28b3_1181();
    if ((bool)uVar22) {
      uStack_6 = (byte **)0x566;
      func_0x000297e6();
      uStack_6 = (byte **)0x56f;
      func_0x000297e6();
      uStack_6 = (byte **)0x574;
      func_0x00029d78();
      uStack_6 = (byte **)0x57d;
      func_0x00029bfc();
      uStack_6 = (byte **)0x586;
      func_0x0002996b();
      uStack_6 = (byte **)0x58b;
      FUN_28b3_1181();
      if ((bool)uVar22 || (bool)uVar20) {
        uStack_6 = (byte **)0x596;
        func_0x000297e6();
        uStack_6 = (byte **)0x59f;
        func_0x00029bb5();
        uStack_6 = (byte **)0x5a8;
        func_0x00029983();
      }
    }
  }
  uStack_6 = (byte **)0x5b1;
  func_0x00029834();
  uStack_6 = (byte **)0x5ba;
  func_0x000297e6();
  uStack_6 = (byte **)0x5bf;
  func_0x00029d78();
  uStack_6 = (byte **)0x5c4;
  FUN_28b3_1181();
  if ((bool)uVar22) {
    pbStack_1e8 = (byte *)*(undefined2 *)0x9dd8;
    uStack_1e6 = *(uint *)0x9dda;
  }
  uStack_6 = (byte **)0x5de;
  func_0x00029834();
  uStack_6 = (byte **)0x5e7;
  func_0x000297e6();
  uStack_6 = (byte **)0x5f0;
  func_0x0002996b();
  uStack_6 = (byte **)0x5f9;
  FUN_28b3_100d();
  uStack_6 = (byte **)0x5fe;
  func_0x00029ae7();
  uStack_6 = (byte **)0x603;
  func_0x00029d78();
  uStack_6 = (byte **)0x608;
  FUN_28b3_1181();
  if ((bool)uVar22) {
    uStack_6 = (byte **)0x616;
    func_0x000297e6();
    uStack_6 = (byte **)0x61f;
    func_0x000297e6();
    uStack_6 = (byte **)0x624;
    FUN_28b3_1181();
    if (!(bool)uVar22 && !(bool)uVar20) {
      uStack_6 = (byte **)0x62f;
      func_0x000297e6();
      uStack_6 = (byte **)0x638;
      func_0x000297e6();
      uStack_6 = (byte **)0x63d;
      func_0x00029d78();
      uStack_6 = (byte **)0x646;
      func_0x00029c74();
      uStack_6 = (byte **)0x64f;
      func_0x0002996b();
      uStack_6 = (byte **)0x654;
      FUN_28b3_1181();
      if (!(bool)uVar22 && !(bool)uVar20) {
        uStack_6 = (byte **)0x65f;
        func_0x000297e6();
        uStack_6 = (byte **)0x668;
        FUN_28b3_100d();
        uStack_6 = (byte **)0x671;
        func_0x00029983();
      }
    }
    uStack_6 = (byte **)0x67a;
    func_0x000297e6();
    uStack_6 = (byte **)0x683;
    func_0x000297e6();
    uStack_6 = (byte **)0x688;
    FUN_28b3_1181();
    if ((bool)uVar22) {
      uStack_6 = (byte **)0x693;
      func_0x000297e6();
      uStack_6 = (byte **)0x69c;
      func_0x000297e6();
      uStack_6 = (byte **)0x6a1;
      func_0x00029d78();
      uStack_6 = (byte **)0x6aa;
      func_0x00029bfc();
      uStack_6 = (byte **)0x6b3;
      func_0x0002996b();
      uStack_6 = (byte **)0x6b8;
      FUN_28b3_1181();
      if ((bool)uVar22 || (bool)uVar20) {
        uStack_6 = (byte **)0x6c3;
        func_0x000297e6();
        uStack_6 = (byte **)0x6cc;
        func_0x00029bb5();
        uStack_6 = (byte **)0x6d5;
        func_0x00029983();
      }
    }
  }
  uStack_6 = (byte **)0x6dd;
  func_0x000297e6();
  uStack_6 = (byte **)0x6e5;
  func_0x00029b6d();
  uStack_6 = (byte **)0x6ee;
  func_0x0002996b();
  uStack_6 = (byte **)0x6f6;
  FUN_28b3_0ee9();
  uStack_6 = (byte **)0x6fe;
  func_0x000297e6();
  uStack_6 = (byte **)0x706;
  func_0x00029b6d();
  uStack_6 = (byte **)0x70f;
  func_0x0002996b();
  uStack_6 = (byte **)0x714;
  func_0x00029d78();
  uStack_6 = (byte **)0x71d;
  func_0x000297e6();
  uStack_6 = (byte **)0x726;
  func_0x00029b6d();
  uStack_6 = (byte **)0x72b;
  func_0x00029d78();
  uStack_6 = (byte **)0x734;
  func_0x000299b9();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x73e;
  func_0x000299d1();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x743;
  func_0x0002a11e();
  uStack_6 = (byte **)0x74d;
  func_0x00029c2c();
  uStack_6 = (byte **)0x756;
  func_0x00029983();
  uStack_6 = (byte **)0x75f;
  func_0x00029834();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x769;
  func_0x000299d1();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x76e;
  func_0x0002a10c();
  uStack_6 = (byte **)0x778;
  func_0x00029834();
  uStack_6 = (byte **)0x781;
  func_0x000297e6();
  uStack_6 = (byte **)0x786;
  func_0x00029d78();
  uStack_6 = (byte **)0x78b;
  func_0x00029c9d();
  uStack_6 = (byte **)0x794;
  func_0x00029983();
  uStack_6 = (byte **)0x79d;
  func_0x000297e6();
  uStack_6 = (byte **)0x7a6;
  func_0x00029b6d();
  uStack_6 = (byte **)0x7af;
  func_0x0002996b();
  uStack_6 = (byte **)0x7b8;
  func_0x00029983();
  uStack_6 = (byte **)0x7c1;
  func_0x000297e6();
  uStack_6 = (byte **)0x7c6;
  func_0x00029d78();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x7d0;
  func_0x000299d1();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x7d5;
  func_0x0002a11e();
  uStack_6 = (byte **)0x7df;
  func_0x00029834();
  uStack_6 = (byte **)0x7e8;
  func_0x00029b6d();
  uStack_6 = (byte **)0x7f1;
  func_0x00029983();
  uStack_6 = (byte **)0x7fa;
  func_0x000297e6();
  uStack_6 = (byte **)0x7ff;
  func_0x00029d78();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x809;
  func_0x000299d1();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x80e;
  func_0x0002a10c();
  uStack_6 = (byte **)0x818;
  func_0x00029834();
  uStack_6 = (byte **)0x821;
  func_0x000297e6();
  uStack_6 = (byte **)0x826;
  func_0x00029d78();
  uStack_6 = (byte **)0x82b;
  func_0x00029c9d();
  uStack_6 = (byte **)0x834;
  func_0x00029983();
  uStack_6 = (byte **)0x83d;
  func_0x000297e6();
  uStack_6 = (byte **)0x845;
  func_0x00029b6d();
  uStack_6 = (byte **)0x84e;
  func_0x00029bb5();
  uStack_6 = (byte **)0x857;
  func_0x0002996b();
  uStack_6 = (byte **)0x85f;
  FUN_28b3_0ee9();
  uStack_6 = (byte **)0x868;
  func_0x000297e6();
  uStack_6 = (byte **)0x870;
  func_0x00029b6d();
  uStack_6 = (byte **)0x879;
  func_0x00029bb5();
  uStack_6 = (byte **)0x882;
  func_0x0002996b();
  uStack_6 = (byte **)0x88a;
  FUN_28b3_0ee9();
  uStack_6 = (byte **)0x893;
  func_0x000297e6();
  uStack_6 = (byte **)0x89c;
  func_0x00029bb5();
  uStack_a._2_2_ = (byte **)0x22b2;
  uStack_a._0_2_ = (byte *)0x8a6;
  func_0x00029983();
  uStack_a._2_2_ = (byte **)0x22b2;
  uStack_a._0_2_ = (byte *)0x8af;
  func_0x000297e6();
  uStack_a._2_2_ = (byte **)0x22b2;
  uStack_a._0_2_ = (byte *)0x8b8;
  func_0x00029bb5();
  uStack_e._2_2_ = (byte *)0x22b2;
  uStack_e._0_2_ = (byte *)0x8c2;
  func_0x00029983();
  uStack_e._2_2_ = param_2;
  uStack_e._0_2_ = (byte *)0x22b2;
  uStack_12._2_2_ = 0x8c9;
  FUN_4375_82e3();
  uStack_6 = (byte **)0x8d5;
  func_0x000297e6();
  uStack_6 = (byte **)0x8de;
  FUN_28b3_100d();
  uStack_6 = (byte **)0x8e7;
  func_0x00029983();
  uStack_6 = (byte **)0x8f3;
  func_0x000297e6();
  uStack_6 = (byte **)0x8f8;
  func_0x00029ae7();
  uStack_6 = (byte **)0x901;
  func_0x0002996b();
  uStack_6 = (byte **)0x90a;
  func_0x00029983();
  uStack_6 = (byte **)0x913;
  func_0x000297e6();
  uStack_6 = (byte **)0x22b2;
  uStack_a._2_2_ = (byte **)0x91d;
  func_0x00029b6d();
  uStack_6 = (byte **)0x923;
  func_0x00029983();
  uStack_6 = (byte **)0x92c;
  func_0x000297e6();
  uStack_6 = (byte **)0x22b2;
  uStack_a._2_2_ = (byte **)0x936;
  func_0x00029b6d();
  uStack_6 = (byte **)0x93c;
  func_0x00029983();
  uStack_6 = (byte **)0x945;
  func_0x000297e6();
  uStack_6 = (byte **)0x22b2;
  uStack_a._2_2_ = (byte **)0x94f;
  func_0x00029b6d();
  uStack_6 = (byte **)0x955;
  func_0x00029983();
  uStack_6 = (byte **)0x95e;
  func_0x000297e6();
  uStack_6 = (byte **)0x22b2;
  uStack_a._2_2_ = (byte **)0x968;
  func_0x00029b6d();
  uStack_6 = (byte **)0x96e;
  func_0x00029983();
  uStack_6 = (byte **)0x977;
  func_0x000297e6();
  uStack_6 = (byte **)0x22b2;
  uStack_a._2_2_ = (byte **)0x981;
  func_0x00029b6d();
  uStack_6 = (byte **)0x987;
  func_0x00029983();
  if (((*(uint *)(param_2 + 0xdca) & 1) == 0) && ((*(uint *)(param_2 + 0xdca) & 2) == 0))
  goto LAB_3ab8_60a2;
  uStack_6 = (byte **)0x9a5;
  func_0x000297e6();
  uStack_6 = (byte **)0x9aa;
  func_0x00029d78();
  uStack_6 = (byte **)0x9af;
  lVar24 = FUN_28b3_0f51();
  uStack_6 = (byte **)0x9bc;
  func_0x000297e6();
  uStack_6 = (byte **)0x9c1;
  func_0x00029d78();
  uStack_6 = (byte **)0x9c6;
  lVar25 = FUN_28b3_0f51();
  lVar25 = lVar25 - lVar24;
  if (lVar25 < 0) {
    lVar25 = CONCAT22(-((int)((ulong)lVar25 >> 0x10) + (uint)((int)lVar25 != 0)),-(int)lVar25);
  }
  if (2 < lVar25) goto LAB_3ab8_60a2;
  uStack_6 = (byte **)0x9ed;
  func_0x000297e6();
  uStack_6 = (byte **)0x9f2;
  func_0x00029d78();
  uStack_6 = (byte **)0x9f7;
  lVar24 = FUN_28b3_0f51();
  uStack_6 = (byte **)0xa04;
  func_0x000297e6();
  uStack_6 = (byte **)0xa09;
  func_0x00029d78();
  uStack_6 = (byte **)0xa0e;
  lVar25 = FUN_28b3_0f51();
  lVar25 = lVar25 - lVar24;
  if (lVar25 < 0) {
    lVar25 = CONCAT22(-((int)((ulong)lVar25 >> 0x10) + (uint)((int)lVar25 != 0)),-(int)lVar25);
  }
  if (2 < lVar25) goto LAB_3ab8_60a2;
  if ((uStack_5a <= uStack_56) &&
     (((uStack_5a < uStack_56 || (uStack_5c < uStack_58)) &&
      ((uStack_56 - uStack_5a) - (uint)(uStack_58 < uStack_5c) < 0xb4)))) goto LAB_3ab8_5fa8;
  uVar22 = uStack_5a == uStack_56;
  uVar20 = true;
  if (uStack_56 <= uStack_5a) {
    if ((bool)uVar22) {
      uVar20 = uStack_5c < uStack_58;
      uVar22 = uStack_5c == uStack_58;
      if (uStack_5c <= uStack_58) goto LAB_3ab8_5ef8;
    }
    uVar17 = (uStack_5a - uStack_56) - (uint)(uStack_5c < uStack_58);
    uVar22 = uVar17 == 0xb4;
    if (0xb4 < uVar17) goto LAB_3ab8_5fa8;
    uVar20 = true;
    if (0xb3 < uVar17) {
      uVar20 = false;
      uVar22 = true;
      if (uStack_5c != uStack_58) goto LAB_3ab8_5fa8;
    }
  }
LAB_3ab8_5ef8:
  uStack_6 = (byte **)0xa81;
  func_0x00029834();
  uStack_6 = (byte **)0xa8a;
  func_0x000297e6();
  uStack_6 = (byte **)0xa8f;
  func_0x00029d78();
  uStack_6 = (byte **)0xa94;
  FUN_28b3_1181();
  if (!(bool)uVar20 && !(bool)uVar22) {
    uStack_6 = (byte **)0xaa2;
    func_0x00029834();
    uStack_6 = (byte **)0xaab;
    func_0x000297e6();
    uStack_6 = (byte **)0xab0;
    func_0x00029ae7();
    uStack_6 = (byte **)0xab5;
    func_0x00029d78();
    uStack_6 = (byte **)0xaba;
    FUN_28b3_1181();
    if ((bool)uVar20 || (bool)uVar22) {
      uStack_6 = (byte **)0xac5;
      func_0x00029834();
      uStack_6 = (byte **)0xace;
      func_0x000297e6();
      uStack_6 = (byte **)0xad3;
      func_0x00029ae7();
      uStack_6 = (byte **)0xad8;
      func_0x00029d78();
      uStack_6 = (byte **)0xadd;
      FUN_28b3_1181();
      if ((bool)uVar20 || (bool)uVar22) goto LAB_3ab8_5fa8;
    }
    uStack_6 = (byte **)0xae8;
    func_0x00029834();
    uStack_6 = (byte **)0xaf1;
    func_0x000297e6();
    uStack_6 = (byte **)0xaf6;
    func_0x00029ae7();
    uStack_6 = (byte **)0xafb;
    func_0x00029d78();
    uStack_6 = (byte **)0xb00;
    FUN_28b3_1181();
    if ((bool)uVar20 || (bool)uVar22) {
      uStack_6 = (byte **)0xb0b;
      func_0x00029834();
      uStack_6 = (byte **)0xb14;
      func_0x000297e6();
      uStack_6 = (byte **)0xb19;
      func_0x00029ae7();
      uStack_6 = (byte **)0xb1e;
      func_0x00029d78();
      uStack_6 = (byte **)0xb23;
      FUN_28b3_1181();
      if ((bool)uVar20 || (bool)uVar22) goto LAB_3ab8_5fa8;
    }
    uStack_1f4 = *(undefined2 *)0x9d88;
    uStack_1f2 = *(undefined2 *)0x9d8a;
    uStack_6 = (byte **)0xbd1;
    func_0x000297e6();
    uStack_6 = (byte **)0xbda;
    func_0x00029b6d();
    uStack_6 = (byte **)0xbe3;
    func_0x0002996b();
    uStack_6 = (byte **)0xbec;
    func_0x00029983();
    uStack_6 = (byte **)0xbf5;
    func_0x000297e6();
    uStack_6 = (byte **)0xbfe;
    func_0x00029983();
    uStack_6 = (byte **)0xc07;
    func_0x000297e6();
    uStack_6 = (byte **)0xc10;
    func_0x00029983();
    uStack_6 = (byte **)0xc19;
    func_0x000297e6();
    uStack_6 = (byte **)0xc22;
    func_0x00029983();
LAB_3ab8_60a2:
    if ((param_2[0xdca] & 0x40) != 0) {
      uStack_6 = (byte **)0xc38;
      func_0x000297e6();
      uStack_e._2_2_ = (byte *)0x22b2;
      uStack_e._0_2_ = (byte *)0xc42;
      func_0x000299d1();
      uStack_e._2_2_ = (byte *)0x22b2;
      uStack_e._0_2_ = (byte *)0xc47;
      puVar14 = (undefined2 *)func_0x0002a18a();
      uStack_6 = (byte **)puVar14[2];
      uStack_a._2_2_ = (byte **)puVar14[1];
      uStack_a._0_2_ = (byte *)*puVar14;
      uStack_e._2_2_ = (byte *)0x22b2;
      uStack_e._0_2_ = (byte *)0xc60;
      func_0x000297e6();
      uStack_e._2_2_ = (byte *)0x22b2;
      uStack_e._0_2_ = (byte *)0xc65;
      func_0x00029d78();
      uStack_16._2_2_ = (byte *)0x22b2;
      uStack_16._0_2_ = (byte *)0xc6f;
      func_0x000299d1();
      uStack_16._2_2_ = (byte *)0x22b2;
      uStack_16._0_2_ = (byte *)0xc74;
      puVar14 = (undefined2 *)func_0x0002a18a();
      uStack_e._2_2_ = (byte *)puVar14[3];
      uStack_e._0_2_ = (byte *)puVar14[2];
      uStack_12._2_2_ = puVar14[1];
      uStack_12._0_2_ = (byte *)*puVar14;
      uStack_16._2_2_ = (byte *)0x22b2;
      uStack_16._0_2_ = (byte *)0xc8d;
      func_0x000297e6();
      uStack_1c = 0x22b2;
      uStack_1e = 0xc97;
      func_0x000299d1();
      uStack_1c = 0x22b2;
      uStack_1e = 0xc9c;
      puVar14 = (undefined2 *)func_0x0002a18a();
      uStack_16._2_2_ = (byte *)puVar14[3];
      uStack_16._0_2_ = (byte *)puVar14[2];
      uStack_1a._2_2_ = puVar14[1];
      uStack_1a._0_2_ = *puVar14;
      uStack_1c = 0x22b2;
      uStack_1e = 0xcb5;
      func_0x000297e6();
      pbStack_24 = (byte *)0x22b2;
      abStack_26[0] = 0xbf;
      abStack_26[1] = 0xc;
      func_0x000299d1();
      pbStack_24 = (byte *)0x22b2;
      abStack_26[0] = 0xc4;
      abStack_26[1] = 0xc;
      puVar14 = (undefined2 *)func_0x0002a18a();
      uStack_1c = puVar14[3];
      uStack_1e = puVar14[2];
      uStack_22._2_2_ = (char *)puVar14[1];
      uStack_22._0_2_ = *puVar14;
      pbStack_24 = (byte *)0x22b2;
      abStack_26[0] = 0xdd;
      abStack_26[1] = 0xc;
      func_0x000298b4();
      pbStack_24 = (byte *)0x22b2;
      abStack_26[0] = 0xe2;
      abStack_26[1] = 0xc;
      func_0x00029d78();
      pbStack_24 = (byte *)0x22b2;
      abStack_26[0] = 0xeb;
      abStack_26[1] = 0xc;
      func_0x00029c2c();
      pbStack_24 = (byte *)0x22b2;
      abStack_26[0] = 0xf4;
      abStack_26[1] = 0xc;
      func_0x00029b6d();
      iStack_2c = 0x22b2;
      uStack_2e = 0xcfe;
      func_0x000299d1();
      iStack_2c = 0x22b2;
      uStack_2e = 0xd07;
      func_0x000297e6();
      iStack_2c = 0x22b2;
      uStack_2e = 0xd0c;
      func_0x00029d78();
      local_34[0] = (byte *)0x22b2;
      local_36 = (byte *)0xd16;
      func_0x000299d1();
      local_34[0] = (byte *)0x22b2;
      local_36 = (byte *)0xd1f;
      func_0x000297e6();
      local_34[0] = (byte *)0x22b2;
      local_36 = (byte *)0xd24;
      func_0x00029d78();
      uStack_3c = 0x22b2;
      uStack_3e = 0xd2e;
      func_0x000299d1();
      uStack_3c = 0x22b2;
      uStack_3e = 0xd37;
      func_0x000297e6();
      uStack_3c = 0x22b2;
      uStack_3e = 0xd3c;
      func_0x00029d78();
      pbStack_44 = (byte *)0x22b2;
      uStack_46 = 0xd46;
      func_0x000299d1();
      pbStack_44 = (byte *)0x22b2;
      uStack_46 = 0xd4f;
      func_0x000297e6();
      pbStack_44 = (byte *)0x22b2;
      uStack_46 = 0xd54;
      func_0x00029d78();
      iStack_4c = 0x22b2;
      uStack_4e = 0xd5e;
      func_0x000299d1();
      iStack_4c = 0x22b2;
      uStack_4e = 0xd67;
      func_0x000297e6();
      uStack_54 = 0x22b2;
      uStack_56 = 0xd71;
      func_0x000299d1();
      uStack_54 = 0x22b2;
      uStack_56 = 0xd7a;
      func_0x000297e6();
      uStack_54 = 0x22b2;
      uStack_56 = 0xd7f;
      func_0x00029d78();
      uStack_5c = 0x22b2;
      uStack_5e = 0xd89;
      func_0x000299d1();
      uStack_5c = 0x22b2;
      uStack_5e = 0xd92;
      func_0x000297e6();
      uStack_64 = 0x22b2;
      uStack_66 = 0xd9c;
      func_0x000299d1();
      uStack_64 = 0x22b2;
      uStack_66 = 0xda5;
      func_0x000297e6();
      uStack_6c = 0x22b2;
      uStack_6e = 0xdaf;
      func_0x000299d1();
      uStack_6c = 0x22b2;
      uStack_6e = 0xdb8;
      func_0x000297e6();
      uStack_6c = 0x22b2;
      uStack_6e = 0xdbd;
      func_0x00029d78();
      pbStack_74 = (byte *)0x22b2;
      iStack_76 = 0xdc7;
      func_0x000299d1();
      pbStack_74 = (byte *)0x22b2;
      iStack_76 = 0xdd0;
      func_0x000297e6();
      pbStack_74 = (byte *)0x22b2;
      iStack_76 = 0xdd5;
      func_0x00029d78();
      uStack_7c = 0x22b2;
      uStack_7e = 0xddf;
      func_0x000299d1();
      uStack_7c = 0x22b2;
      uStack_7e = 0xde8;
      func_0x000297e6();
      uStack_7c = 0x22b2;
      uStack_7e = 0xded;
      func_0x00029d78();
      pbStack_84 = (byte *)0x22b2;
      pbStack_86 = (byte *)0xdf7;
      func_0x000299d1();
      pbStack_84 = param_2 + 0xc26;
      pbStack_86 = param_2;
      abStack_8a[2] = 0xb2;
      abStack_8a[3] = 0x22;
      abStack_8a[0] = 5;
      abStack_8a[1] = 0xe;
      FUN_4375_7b0c();
      halt_baddata();
    }
    uStack_6 = (byte **)0xe15;
    func_0x000298b4();
    uStack_6 = (byte **)0xe1a;
    func_0x00029d78();
    uStack_6 = (byte **)0xe23;
    func_0x00029c2c();
    uStack_6 = (byte **)0xe2c;
    func_0x00029b6d();
    uStack_e._2_2_ = (byte *)0x22b2;
    uStack_e._0_2_ = (byte *)0xe36;
    func_0x000299d1();
    uStack_e._2_2_ = (byte *)0x22b2;
    uStack_e._0_2_ = (byte *)0xe3f;
    func_0x000297e6();
    uStack_e._2_2_ = (byte *)0x22b2;
    uStack_e._0_2_ = (byte *)0xe44;
    func_0x00029d78();
    uStack_16._2_2_ = (byte *)0x22b2;
    uStack_16._0_2_ = (byte *)0xe4e;
    func_0x000299d1();
    uStack_16._2_2_ = (byte *)0x22b2;
    uStack_16._0_2_ = (byte *)0xe57;
    func_0x000297e6();
    uStack_16._2_2_ = (byte *)0x22b2;
    uStack_16._0_2_ = (byte *)0xe5c;
    func_0x00029d78();
    uStack_1c = 0x22b2;
    uStack_1e = 0xe66;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    uStack_1e = 0xe6f;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    uStack_1e = 0xe74;
    func_0x00029d78();
    pbStack_24 = (byte *)0x22b2;
    abStack_26[0] = 0x7e;
    abStack_26[1] = 0xe;
    func_0x000299d1();
    pbStack_24 = (byte *)0x22b2;
    abStack_26[0] = 0x87;
    abStack_26[1] = 0xe;
    func_0x000297e6();
    iStack_2c = 0x22b2;
    uStack_2e = 0xe91;
    func_0x000299d1();
    iStack_2c = 0x22b2;
    uStack_2e = 0xe9a;
    func_0x000297e6();
    local_34[0] = (byte *)0x22b2;
    local_36 = (byte *)0xea4;
    func_0x000299d1();
    local_34[0] = (byte *)0x22b2;
    local_36 = (byte *)0xead;
    func_0x000297e6();
    uStack_3c = 0x22b2;
    uStack_3e = 0xeb7;
    func_0x000299d1();
    uStack_3c = 0x22b2;
    uStack_3e = 0xec0;
    func_0x000297e6();
    pbStack_44 = (byte *)0x22b2;
    uStack_46 = 0xeca;
    func_0x000299d1();
    pbStack_44 = param_2 + 0xc26;
    uStack_46 = 0xbf48;
    uStack_48 = 0x22b2;
    uStack_4a = 0xeda;
    FUN_21f2_3454();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xee5;
    FUN_4375_7d59();
    uStack_6 = (byte **)0xeef;
    func_0x000297e6();
    uStack_e._2_2_ = (byte *)0x22b2;
    uStack_e._0_2_ = (byte *)0xef9;
    func_0x000299d1();
    uStack_e._2_2_ = (byte *)0x22b2;
    uStack_e._0_2_ = (byte *)0xf02;
    func_0x000297e6();
    uStack_16._2_2_ = (byte *)0x22b2;
    uStack_16._0_2_ = (byte *)0xf0c;
    func_0x000299d1();
    uStack_16._2_2_ = (byte *)0x22b2;
    uStack_16._0_2_ = (byte *)0xf15;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    uStack_1e = 0xf1f;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    uStack_1e = 0xf28;
    func_0x000297e6();
    pbStack_24 = (byte *)0x22b2;
    abStack_26[0] = 0x32;
    abStack_26[1] = 0xf;
    func_0x000299d1();
    pbStack_24 = param_2 + 0xcf0;
    abStack_26[0] = 0x48;
    abStack_26[1] = 0xbf;
    iStack_28 = 0x22b2;
    uStack_2a = 0xf42;
    FUN_21f2_3454();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xf4d;
    FUN_4375_7d59();
    uStack_6 = (byte **)0xf57;
    func_0x000297e6();
    uStack_6 = (byte **)0xf5c;
    func_0x00029d78();
    uStack_e._2_2_ = (byte *)0x22b2;
    uStack_e._0_2_ = (byte *)0xf66;
    func_0x000299d1();
    uStack_e._2_2_ = (byte *)0x22b2;
    uStack_e._0_2_ = (byte *)0xf6f;
    func_0x000297e6();
    uStack_e._2_2_ = (byte *)0x22b2;
    uStack_e._0_2_ = (byte *)0xf74;
    func_0x00029d78();
    uStack_16._2_2_ = (byte *)0x22b2;
    uStack_16._0_2_ = (byte *)0xf7e;
    func_0x000299d1();
    uStack_16._2_2_ = (byte *)0x22b2;
    uStack_16._0_2_ = (byte *)0xf87;
    func_0x000297e6();
    uStack_16._2_2_ = (byte *)0x22b2;
    uStack_16._0_2_ = (byte *)0xf8c;
    func_0x00029d78();
    uStack_1c = 0x22b2;
    uStack_1e = 0xf96;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    uStack_1e = 3999;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    uStack_1e = 0xfa4;
    func_0x00029d78();
    pbStack_24 = (byte *)0x22b2;
    abStack_26[0] = 0xae;
    abStack_26[1] = 0xf;
    func_0x000299d1();
    pbStack_24 = param_2 + 0xd18;
    abStack_26[0] = 0x48;
    abStack_26[1] = 0xbf;
    iStack_28 = 0x22b2;
    uStack_2a = 0xfbe;
    FUN_21f2_3454();
    uStack_6 = (byte **)0x22b2;
    uStack_a._2_2_ = (byte **)0xfc9;
    FUN_4375_7d59();
    halt_baddata();
  }
LAB_3ab8_5fa8:
  uStack_6 = (byte **)0xb31;
  func_0x000297e6();
  uStack_6 = (byte **)0x22b2;
  uStack_a._2_2_ = (byte **)0xb3b;
  func_0x00029bb5();
  uStack_6 = (byte **)0xb41;
  func_0x00029983();
  uStack_6 = (byte **)0xb4a;
  func_0x000297e6();
  uStack_6 = (byte **)0x22b2;
  uStack_a._2_2_ = (byte **)0xb54;
  func_0x00029bb5();
  uStack_6 = (byte **)0xb5a;
  func_0x00029983();
  uStack_6 = (byte **)0xb63;
  func_0x000297e6();
  uStack_6 = (byte **)0x22b2;
  uStack_a._2_2_ = (byte **)0xb6d;
  func_0x00029bb5();
  uStack_6 = (byte **)0xb73;
  func_0x00029983();
  uStack_6 = (byte **)0xb7c;
  func_0x000297e6();
  uStack_6 = (byte **)0x22b2;
  uStack_a._2_2_ = (byte **)0xb86;
  func_0x00029bb5();
  uStack_6 = (byte **)0xb8c;
  func_0x00029983();
  uStack_6 = (byte **)pbStack_162;
  uStack_a._2_2_ = (byte **)uStack_da;
  uStack_a._0_2_ = (byte *)uStack_dc;
  uStack_e._2_2_ = (byte *)uStack_17c;
  uStack_e._0_2_ = pbStack_17e;
  uStack_12._2_2_ = uStack_15c;
  uStack_12._0_2_ = (byte *)uStack_15e;
  uStack_16._2_2_ = param_2;
  uStack_16._0_2_ = (byte *)0x22b2;
  uStack_1a._2_2_ = 0xbb3;
  FUN_4375_7f3a();
  halt_baddata();
LAB_2bb4_610f:
  if ((iStack_4c < iStack_2c) || ((iStack_4c <= iStack_2c && (uStack_2e != 0)))) goto LAB_2bb4_60e4;
  bVar23 = SBORROW2(iStack_4c,uStack_3a._2_2_);
  iVar10 = iStack_4c - uStack_3a._2_2_;
  bVar21 = iStack_4c == uStack_3a._2_2_;
  if (iStack_4c < uStack_3a._2_2_) {
LAB_2bb4_60b4:
    if (((iStack_2c < uStack_3a._2_2_) ||
        (((((iStack_2c <= uStack_3a._2_2_ && (uStack_2e <= (uint)uStack_3a)) ||
           (iStack_2c < iStack_28)) || ((iStack_2c <= iStack_28 && (uStack_2e <= uStack_2a)))) ||
         (iStack_28 < uStack_3a._2_2_)))) ||
       ((iStack_28 <= uStack_3a._2_2_ && (uStack_2a <= (uint)uStack_3a)))) {
      if (iStack_4c == 0) {
        uStack_6 = (byte **)0x1c75;
        FUN_32b2_6cc6();
        uStack_6 = (byte **)0x1c7d;
        FUN_32b2_7095();
        uStack_6 = (byte **)0x1c85;
        FUN_32b2_6e63();
      }
      if (iStack_4c == 0x5a) {
        uStack_6 = (byte **)0x1c93;
        FUN_32b2_6cc6();
        uStack_6 = (byte **)0x1c9b;
        FUN_32b2_7095();
        uStack_6 = (byte **)0x1ca3;
        FUN_32b2_6e63();
      }
      if (iStack_4c == 0xb4) {
        uStack_6 = (byte **)0x1cb2;
        FUN_32b2_6cc6();
        uStack_6 = (byte **)0x1cba;
        FUN_32b2_701d();
        uStack_6 = (byte **)0x1cc2;
        FUN_32b2_6e63();
      }
      if (iStack_4c == 0x10e) {
        uStack_6 = (byte **)0x1cd4;
        FUN_32b2_6cc6();
        uStack_6 = (byte **)0x1cdc;
        FUN_32b2_701d();
        uStack_6 = (byte **)0x1ce4;
        FUN_32b2_6e63();
      }
    }
    goto LAB_2bb4_60e4;
  }
  goto switchD_3000_ac9e_caseD_4f;
}



/* 3ab8:0163  FUN_3ab8_0163  181 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0163(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 local_5e;
  undefined1 local_5c [80];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *local_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x3ab8;
  local_6 = (undefined1 *)0xacee;
  FUN_21f2_0ebc();
  local_5e = 0;
  local_4 = (undefined1 *)0x254;
  local_6 = (undefined1 *)0x4947;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xad00;
  local_6 = (undefined1 *)FUN_21f2_1348();
  if (local_6 == (undefined1 *)0x0) {
    local_5e = 0;
  }
  else {
    do {
      local_4 = local_6;
      local_6 = (undefined1 *)0x50;
      puStack_8 = local_5c;
      uStack_a = 0x22b2;
      uStack_c = 0xad81;
      iVar2 = func_0x0002509c();
      if (iVar2 == 0) goto LAB_3ab8_0208;
      local_4 = (undefined1 *)0xa;
      local_6 = local_5c;
      puStack_8 = (undefined1 *)0x22b2;
      uStack_a = 0xad19;
      puVar1 = (undefined1 *)func_0x00025b06();
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 0;
      }
      local_4 = (undefined1 *)0x9;
      local_6 = local_5c;
      puStack_8 = (undefined1 *)0x22b2;
      uStack_a = 0xad34;
      puVar1 = (undefined1 *)func_0x00025a9a();
      if (puVar1 == (undefined1 *)0x0) goto LAB_3ab8_0208;
      *puVar1 = 0;
      local_5e = 1;
      local_4 = param_1;
      local_6 = local_5c;
      puStack_8 = (undefined1 *)0x22b2;
      uStack_a = 0xad57;
      iVar2 = func_0x00024cb8();
    } while (iVar2 != 0);
    local_5e = 2;
    local_6 = param_1;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xad6d;
    func_0x00024c86();
LAB_3ab8_0208:
    local_4 = local_6;
    local_6 = (undefined1 *)0x22b2;
    puStack_8 = (undefined1 *)0xad90;
    FUN_21f2_1262();
  }
  return local_5e;
}



/* 3ab8:0218  FUN_3ab8_0218  167 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0218(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_8;
  int *local_6;
  int *local_4;
  
  local_4 = (int *)0x3ab8;
  iVar3 = 0x22b2;
  local_6 = (int *)0xada3;
  FUN_21f2_0ebc();
  do {
    if ((char)*param_1 == '\0') {
      return;
    }
    local_4 = param_1;
    if ((char)*param_1 == '\\') {
      bVar1 = *(byte *)((int)param_1 + 1);
      if (bVar1 == 0x78) {
LAB_3ab8_025b:
        local_4 = &local_8;
        local_6 = (int *)0x4953;
        local_8 = 0x4954;
        func_0x000253ce(iVar3);
        local_6 = (int *)((int)local_6 + 3);
        iVar3 = 0x22b2;
      }
      else {
        if (0x78 < bVar1) goto LAB_3ab8_02aa;
        if (bVar1 == 0x58) goto LAB_3ab8_025b;
        if (bVar1 == 0x65) {
          local_8 = 0x1b;
        }
        else if (bVar1 == 0x72) {
          local_8 = 0x1e;
        }
        else {
          if (bVar1 != 0x75) goto LAB_3ab8_02aa;
          local_8 = 0x1f;
        }
        local_6 = param_1 + 1;
      }
      piVar2 = local_4;
      if (local_8 != 0) {
        *(char *)local_4 = (char)local_8;
        local_4 = local_6;
        local_6 = (int *)((int)piVar2 + 1);
        local_8 = iVar3;
        func_0x00018b44();
        iVar3 = 0x18b3;
      }
    }
LAB_3ab8_02aa:
    param_1 = (int *)((int)local_4 + 1);
  } while( true );
}



/* 3ab8:02bf  FUN_3ab8_02bf  48 bytes, 2 callers */

void __cdecl16far FUN_3ab8_02bf(void)

{
  undefined1 local_1e [14];
  undefined1 local_10;
  undefined1 local_f;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xae4a;
  FUN_21f2_0ebc();
  local_f = 3;
  puStack_4 = local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x14;
  local_a = 0x22b2;
  uStack_c = 0xae65;
  func_0x00024f9a();
  return;
}



/* 3ab8:02ef  FUN_3ab8_02ef  54 bytes, 1 callers */

void __cdecl16far FUN_3ab8_02ef(undefined1 param_1)

{
  undefined1 local_1e [14];
  undefined1 local_10;
  undefined1 local_f;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xae7a;
  FUN_21f2_0ebc();
  local_f = 1;
  local_10 = param_1;
  puStack_4 = local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x14;
  local_a = 0x22b2;
  uStack_c = 0xae9b;
  func_0x00024f9a();
  return;
}



/* 3ab8:0325  FUN_3ab8_0325  47 bytes, 1 callers */

undefined1 __cdecl16far FUN_3ab8_0325(void)

{
  undefined1 local_1e [14];
  undefined1 local_10;
  undefined1 local_f;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xaeb0;
  FUN_21f2_0ebc();
  local_f = 2;
  puStack_4 = local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x14;
  local_a = 0x22b2;
  uStack_c = 0xaecb;
  func_0x00024f9a();
  return local_1e[0];
}



/* 3ab8:0354  FUN_3ab8_0354  39 bytes, 1 callers */

bool __cdecl16far FUN_3ab8_0354(undefined1 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  bool bVar3;
  
  FUN_21f2_0ebc();
  uVar2 = FUN_3ab8_02bf();
  bVar3 = (uVar2 & 0x100) != 0;
  if (bVar3) {
    uVar1 = FUN_3ab8_0325();
    *param_1 = uVar1;
  }
  return bVar3;
}



/* 3ab8:037b  FUN_3ab8_037b  138 bytes, 1 callers */

uint __cdecl16far FUN_3ab8_037b(byte param_1)

{
  char cVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if (*(int *)0xcf2 != 0) {
    uVar2 = FUN_3ab8_02bf();
    if ((*(uint *)0xcf2 & uVar2) == 0) {
      FUN_1000_02b5(0x4957,0x50,1,7,0);
      do {
        cVar1 = FUN_12c1_009c();
        if (cVar1 == '\x1b') goto LAB_3ab8_03b9;
        uVar2 = FUN_3ab8_02bf();
      } while ((*(uint *)0xcf2 & uVar2) == 0);
      FUN_1000_02b5(0x4959,0x50,1,7,0);
      func_0x000121f9(0xdef,3);
    }
  }
  uVar2 = FUN_3ab8_02ef(param_1);
  if ((uVar2 & 0x8000) == 0) {
    uVar2 = (uint)param_1;
  }
  else {
LAB_3ab8_03b9:
    uVar2 = 0xffff;
  }
  return uVar2;
}



/* 3ab8:0405  FUN_3ab8_0405  165 bytes, 3 callers */

undefined2 __cdecl16far FUN_3ab8_0405(uint param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  uint local_6;
  uint *local_4;
  
  local_4 = (uint *)0x3ab8;
  uVar4 = 0x22b2;
  local_6 = 0xaf90;
  FUN_21f2_0ebc();
  if (param_2 == 0) {
    do {
      while( true ) {
        local_4 = &local_6;
        local_6 = uVar4;
        iVar3 = FUN_3ab8_0354();
        if (iVar3 == 0) break;
        if (*(int *)0xcf2 == 0) {
          if ((char)local_6 == '\x11') {
            local_4 = (uint *)0x0;
            local_6 = 7;
            uVar4 = 0xdef;
            FUN_1000_02b5(0x495b,0x50,1);
          }
          if ((char)local_6 == '\x13') {
            local_4 = (uint *)0x0;
            local_6 = 7;
            uVar4 = 0xdef;
            FUN_1000_02b5(0x495d,0x50,1);
          }
        }
      }
      if ((char)local_4 != '\x13') {
        local_4 = (uint *)(param_1 & 0xff);
        local_6 = uVar4;
        uVar2 = FUN_3ab8_037b();
        return uVar2;
      }
      local_6 = 0xb01f;
      local_4 = (uint *)uVar4;
      cVar1 = FUN_12c1_009c();
      uVar4 = 0x11f2;
    } while (cVar1 != '\x1b');
    uVar2 = 0xffff;
  }
  else {
    local_4 = (uint *)param_2;
    local_6 = param_1;
    uVar2 = func_0x0002455c(0x22b2);
  }
  return uVar2;
}



/* 3ab8:04aa  FUN_3ab8_04aa  67 bytes, 2 callers */

void __cdecl16far FUN_3ab8_04aa(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_21f2_0ebc();
  for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
    iVar1 = FUN_3ab8_0405(*(undefined1 *)(iVar2 + param_2),param_3);
    if (iVar1 == -1) {
      FUN_13bf_0a03(0x492a);
    }
  }
  return;
}



/* 3ab8:04ed  FUN_3ab8_04ed  168 bytes, 3 callers */

int __cdecl16far FUN_3ab8_04ed(uint param_1,uint param_2,undefined1 *param_3)

{
  undefined1 extraout_AH;
  uint uVar1;
  undefined1 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar3;
  int iVar4;
  int local_a;
  undefined2 *local_8;
  undefined2 uStack_6;
  
  uStack_6 = 0xb078;
  FUN_21f2_0ebc();
  if ((int)param_2 < 0) {
    bVar3 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar3);
  }
  uStack_6 = CONCAT11(extraout_AH,4);
  local_8 = &param_1;
  FUN_21f2_5b7a();
  local_a = 1;
  while (local_a < 4) {
    if ((param_2 | param_1) == 0) {
      *(undefined1 *)((int)&local_8 + local_a) = 0;
      uVar2 = 0;
    }
    else {
      uVar1 = CONCAT11((char)((param_2 | param_1) >> 8),(undefined1)param_1) & 0xff3f;
      uVar2 = (undefined1)(uVar1 >> 8);
      *(char *)((int)&local_8 + local_a) = (char)uVar1 + '@';
    }
    FUN_21f2_5b7a(&param_1);
    local_a = CONCAT11(uVar2,6) + 1;
  }
  iVar4 = 0;
  local_a = 3;
  do {
    if (*(char *)((int)&local_8 + local_a) != '\0') {
      *param_3 = *(undefined1 *)((int)&local_8 + local_a);
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 1;
    }
    local_a = local_a + -1;
  } while (-1 < local_a);
  *param_3 = 0;
  return iVar4;
}



/* 3ab8:0595  FUN_3ab8_0595  169 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0595(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined1 in_CF;
  
  FUN_21f2_0ebc();
  func_0x00029834(0x22b2);
  func_0x000298b4(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)in_CF) {
    uVar1 = 0x495f;
  }
  else {
    func_0x00029834(0x22b2);
    func_0x000298b4(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)in_CF) {
      func_0x00024c86(0x22b2,param_3,0x4961);
      return 3;
    }
    func_0x00029834(0x22b2);
    func_0x000298b4(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)in_CF) {
      uVar1 = 0x4965;
    }
    else {
      func_0x00029834(0x22b2);
      func_0x000298b4(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)in_CF) {
        uVar1 = 0x4967;
      }
      else {
        uVar1 = 0x4969;
      }
    }
  }
  func_0x00024c86(0x22b2,param_3,uVar1);
  return 1;
}



/* 3ab8:063e  FUN_3ab8_063e  79 bytes, 1 callers */

void __cdecl16far FUN_3ab8_063e(undefined2 param_1)

{
  undefined2 local_c;
  undefined2 uStack_a;
  undefined4 local_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0x3ab8;
  local_8._2_2_ = 0xb1c9;
  FUN_21f2_0ebc();
  puStack_4 = (undefined4 *)&local_c;
  local_8._2_2_ = 0x206;
  local_8._0_2_ = param_1;
  uStack_a = 0x22b2;
  local_c = 0xb1d9;
  func_0x000253ce();
  puStack_4 = &local_8;
  local_8._2_2_ = 0x22b2;
  local_8._0_2_ = 0xb1e8;
  func_0x000297e6();
  local_8._2_2_ = 0x22b2;
  local_8._0_2_ = 0xb1ed;
  func_0x00029d78();
  local_8._2_2_ = 0x22b2;
  local_8._0_2_ = 0xb1f2;
  local_8 = FUN_28b3_0f51();
  uStack_a = 0x22b2;
  local_c = 0xb1f8;
  FUN_3ab8_04ed();
  puStack_4 = &local_8;
  local_8._2_2_ = param_1;
  local_8._0_2_ = 0x22b2;
  uStack_a = 0xb207;
  func_0x00024c86();
  return;
}



/* 3ab8:068d  FUN_3ab8_068d  79 bytes, 1 callers */

void __cdecl16far FUN_3ab8_068d(undefined2 param_1)

{
  undefined2 local_c;
  undefined2 uStack_a;
  undefined4 local_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0x3ab8;
  local_8._2_2_ = 0xb218;
  FUN_21f2_0ebc();
  puStack_4 = (undefined4 *)&local_c;
  local_8._2_2_ = 0x206;
  local_8._0_2_ = param_1;
  uStack_a = 0x22b2;
  local_c = 0xb228;
  func_0x000253ce();
  puStack_4 = &local_8;
  local_8._2_2_ = 0x22b2;
  local_8._0_2_ = 0xb237;
  func_0x000297e6();
  local_8._2_2_ = 0x22b2;
  local_8._0_2_ = 0xb23c;
  func_0x00029d78();
  local_8._2_2_ = 0x22b2;
  local_8._0_2_ = 0xb241;
  local_8 = FUN_28b3_0f51();
  uStack_a = 0x22b2;
  local_c = 0xb247;
  FUN_3ab8_04ed();
  puStack_4 = &local_8;
  local_8._2_2_ = param_1;
  local_8._0_2_ = 0x22b2;
  uStack_a = 0xb256;
  func_0x00024c86();
  return;
}



/* 3ab8:06dc  FUN_3ab8_06dc  589 bytes, 5 callers */

void __cdecl16far FUN_3ab8_06dc(int param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_8c;
  char local_8a [100];
  char local_26 [18];
  undefined2 uStack_14;
  uint local_12;
  char *local_10;
  char *pcStack_e;
  char *pcStack_c;
  char *local_a;
  char *local_8;
  char **local_6;
  
  local_6 = (char **)0xb267;
  FUN_21f2_0ebc();
LAB_3ab8_06f1:
  pcVar7 = (char *)0x22b2;
  do {
    while( true ) {
      if (*param_2 == '\0') {
        return;
      }
      cVar2 = *param_2;
      local_10 = (char *)CONCAT11(local_10._1_1_,cVar2);
      local_a = pcVar7;
      if (cVar2 != '\\') break;
      pbVar1 = (byte *)(param_2 + 1);
      bVar3 = *pbVar1;
      local_10 = (char *)CONCAT11(local_10._1_1_,bVar3);
      if (bVar3 == 0x78) {
LAB_3ab8_073e:
        local_6 = &local_8;
        local_8 = (char *)0x496b;
        local_a = param_2 + 2;
        pcVar8 = (char *)0x22b2;
        pcStack_e = (char *)0xb2d0;
        pcStack_c = pcVar7;
        func_0x000253ce();
        param_2 = param_2 + 4;
      }
      else if (bVar3 < 0x79) {
        if (bVar3 == 0x30) {
          local_8 = (char *)0x0;
        }
        else {
          if (bVar3 == 0x58) goto LAB_3ab8_073e;
          if (bVar3 == 0x65) {
            local_8 = (char *)0x1b;
          }
          else if (bVar3 == 0x6e) {
            local_6 = (char **)*(undefined2 *)0xd70;
            local_8 = (char *)0xd;
            pcStack_c = (char *)0xb31b;
            iVar6 = FUN_3ab8_0405();
            pcVar8 = pcVar7;
            if (iVar6 == -1) {
              local_6 = (char **)0x492a;
              pcVar8 = (char *)0x11f2;
              local_a = (char *)0xb329;
              local_8 = pcVar7;
              FUN_13bf_0a03();
            }
            local_8 = (char *)0xa;
            pcVar7 = pcVar8;
          }
          else if (bVar3 == 0x72) {
            local_8 = (char *)0x1e;
          }
          else {
            if (bVar3 != 0x75) goto LAB_3ab8_0732;
            local_8 = (char *)0x1f;
          }
        }
        param_2 = param_2 + 2;
        pcVar8 = pcVar7;
      }
      else {
LAB_3ab8_0732:
        param_2 = param_2 + 2;
        local_8 = (char *)(uint)*pbVar1;
        pcVar8 = pcVar7;
      }
      local_6 = (char **)*(undefined2 *)0xd70;
      pcStack_c = (char *)0xb2e2;
      local_a = pcVar8;
      iVar6 = FUN_3ab8_0405();
      pcVar7 = pcVar8;
      if (iVar6 == -1) {
        local_6 = (char **)0x492a;
        local_a = (char *)0xb2f3;
        local_8 = pcVar8;
        FUN_13bf_0a03();
        pcVar7 = (char *)0x11f2;
      }
    }
    if (cVar2 == '[') {
      local_6 = (char **)0x5d;
      pcStack_c = (char *)0xb34b;
      local_8 = param_2;
      local_6 = (char **)func_0x00025a9a();
      uVar4 = local_12;
      pcVar7 = (char *)0x22b2;
      if (local_6 != (char **)0x0) break;
    }
    local_6 = (char **)*(undefined2 *)0xd70;
    local_8 = (char *)((uint)local_10 & 0xff);
    pcStack_c = (char *)0xb487;
    local_a = pcVar7;
    iVar6 = FUN_3ab8_0405();
    pcVar8 = pcVar7;
    if (iVar6 == -1) {
      local_6 = (char **)0x492a;
      pcVar8 = (char *)0x11f2;
      local_a = (char *)0xb495;
      local_8 = pcVar7;
      FUN_13bf_0a03();
    }
    param_2 = param_2 + 1;
    pcVar7 = pcVar8;
  } while( true );
  bVar3 = param_2[1];
  local_10 = (char *)CONCAT11(local_10._1_1_,bVar3);
  if ((bVar3 < 0x31) || (0x39 < bVar3)) {
    if ((bVar3 < 0x41) || (0x5a < bVar3)) {
      local_8 = (char *)0xffff;
    }
    else {
      local_8 = (char *)(bVar3 - 0x38);
    }
  }
  else {
    local_8 = (char *)(bVar3 - 0x31);
  }
  if (-1 < (int)local_8) {
    local_12 = local_12 & 0xff00;
    uVar5 = local_12;
    local_8 = param_2 + 2;
    local_12._1_1_ = SUB21(uVar4,1);
    if (*local_8 == -0x26) {
      local_12 = CONCAT11(local_12._1_1_,1);
      local_8 = param_2 + 3;
      uVar5 = local_12;
    }
    else if (*local_8 == -0x49) {
      local_12 = CONCAT11(local_12._1_1_,2);
      local_8 = param_2 + 3;
      uVar5 = local_12;
    }
    local_12 = uVar5;
    local_8c = (int)local_6 - (int)local_8;
    if (0x13 < local_8c) {
      local_8c = 0x13;
    }
    if (local_8c < 1) {
      local_6 = (char **)(param_1 + 0xd40);
      local_8 = local_26;
      local_a = (char *)0x22b2;
      pcStack_c = (char *)0xb408;
      func_0x00024c86();
    }
    else {
      local_6 = (char **)local_8c;
      local_a = local_26;
      pcStack_c = (char *)0x22b2;
      pcStack_e = (char *)0xb3eb;
      func_0x00024d00();
      local_26[local_8c] = '\0';
    }
    iVar6 = (int)local_8 * 8;
    local_6 = *(char ***)(local_a + iVar6 + 6);
    local_8 = *(char **)(local_a + iVar6 + 4);
    pcStack_c = *(char **)(local_a + iVar6);
    pcStack_e = local_26;
    local_10 = local_8a;
    local_12 = 0x22b2;
    uStack_14 = 0xb42d;
    local_a = (char *)*(undefined2 *)(local_a + iVar6 + 2);
    FUN_21f2_3454();
    local_6 = (char **)local_8a;
    local_8 = (char *)0x22b2;
    local_a = (char *)0xb439;
    FUN_3ab8_0218();
    if ((char)local_12 == '\x01') {
      local_6 = (char **)local_8a;
      local_8 = (char *)0x22b2;
      local_a = (char *)0xb449;
      FUN_3ab8_063e();
    }
    if ((char)local_12 == '\x02') {
      local_6 = (char **)local_8a;
      local_8 = (char *)0x22b2;
      local_a = (char *)0xb459;
      FUN_3ab8_068d();
    }
    local_6 = (char **)*(int *)0xd70;
    local_a = local_8a;
    pcStack_c = (char *)0x22b2;
    pcStack_e = (char *)0xb469;
    local_8 = local_a;
    local_a = (char *)func_0x00024ce4();
    pcStack_c = (char *)0x22b2;
    pcStack_e = (char *)0xb46f;
    FUN_3ab8_04aa();
  }
  param_2 = (char *)((int)local_6 + 1);
  goto LAB_3ab8_06f1;
}



/* 3ab8:0929  FUN_3ab8_0929  481 bytes, 6 callers */

void __cdecl16far FUN_3ab8_0929(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  char *local_1e;
  int local_14;
  undefined1 local_10 [2];
  undefined2 uStack_e;
  char *local_c;
  undefined4 local_a;
  undefined1 *puStack_6;
  
  puStack_6 = (undefined1 *)0xb4b4;
  FUN_21f2_0ebc();
  puStack_6 = (undefined1 *)param_1;
  local_a._2_2_ = (char *)0x22b2;
  pcVar3 = (char *)0x22b2;
  local_a._0_2_ = (char *)0xb4bd;
  local_1e = (char *)func_0x00024ce4();
  for (local_14 = 0; *(char *)(local_14 + param_1) != '\0'; local_14 = local_14 + 1) {
    pcVar2 = (char *)(param_1 + local_14);
    pcVar4 = pcVar3;
    local_a._0_2_ = pcVar2;
    if ((*pcVar2 == -0x26) && (pcVar2[1] == '[')) {
      puStack_6 = (undefined1 *)0x5d;
      pcVar4 = (char *)0x22b2;
      local_c = (char *)0xb4e3;
      local_a._0_2_ = pcVar3;
      local_a._2_2_ = pcVar2;
      iVar1 = func_0x00025a9a();
      if (iVar1 != 0) {
        puStack_6 = local_10;
        local_a._2_2_ = (char *)0x206;
        local_a._0_2_ = pcVar2 + 2;
        local_c = (char *)0x22b2;
        uStack_e = 0xb501;
        func_0x000253ce();
        puStack_6 = (undefined1 *)((int)&local_a + 2);
        local_a._2_2_ = (char *)0x22b2;
        local_a._0_2_ = (char *)0xb510;
        func_0x000297e6();
        local_a._2_2_ = (char *)0x22b2;
        local_a._0_2_ = (char *)0xb515;
        func_0x00029d78();
        local_a._2_2_ = (char *)0x22b2;
        local_a._0_2_ = (char *)0xb51a;
        local_a = FUN_28b3_0f51();
        local_c = (char *)0x22b2;
        uStack_e = 0xb526;
        iVar1 = FUN_3ab8_04ed();
        local_a._2_2_ = (char *)((int)&local_a + 2);
        local_c = (char *)0x22b2;
        uStack_e = 0xb537;
        local_a._0_2_ = pcVar2;
        puStack_6 = (undefined1 *)iVar1;
        func_0x00024d00();
        puStack_6 = local_c;
        local_a._0_2_ = (char *)0x22b2;
        pcVar4 = (char *)0x18b3;
        local_c = (char *)0xb549;
        local_a._2_2_ = pcVar2 + iVar1;
        func_0x00018b44();
        local_1e = pcVar2 + iVar1 + ((int)local_1e - (int)local_c);
      }
    }
    if ((*(char *)local_a == -0x49) && (((char *)local_a)[1] == '[')) {
      puStack_6 = (undefined1 *)0x5d;
      local_a._2_2_ = (char *)local_a;
      local_c = (char *)0xb56f;
      local_a._0_2_ = pcVar4;
      iVar1 = func_0x00025a9a();
      pcVar4 = (char *)0x22b2;
      if (iVar1 != 0) {
        puStack_6 = local_10;
        local_a._2_2_ = (char *)0x206;
        local_a._0_2_ = (char *)local_a + 2;
        local_c = (char *)0x22b2;
        uStack_e = 0xb58f;
        func_0x000253ce();
        puStack_6 = (undefined1 *)((int)&local_a + 2);
        local_a._2_2_ = (char *)0x22b2;
        local_a._0_2_ = (char *)0xb59e;
        func_0x000297e6();
        local_a._2_2_ = (char *)0x22b2;
        local_a._0_2_ = (char *)0xb5a3;
        func_0x00029d78();
        local_a._2_2_ = (char *)0x22b2;
        local_a._0_2_ = (char *)0xb5a8;
        local_a = FUN_28b3_0f51();
        local_c = (char *)0x22b2;
        uStack_e = 0xb5b4;
        iVar1 = FUN_3ab8_0595();
        puStack_6 = (undefined1 *)((int)&local_a + 2);
        local_a._2_2_ = (char *)local_a;
        local_a._0_2_ = (char *)0x22b2;
        local_c = (char *)0xb5c6;
        func_0x00024c86();
        puStack_6 = local_c;
        local_a._2_2_ = (char *)((int)(char *)local_a + iVar1);
        local_a._0_2_ = (char *)0x22b2;
        pcVar4 = (char *)0x18b3;
        local_c = (char *)0xb5da;
        func_0x00018b44();
        local_1e = (char *)local_a + ((int)local_1e - (int)local_c);
      }
    }
    pcVar2 = pcVar4;
    if ((*(char *)local_a == -0x2f) && (((char *)local_a)[1] == '[')) {
      puStack_6 = (undefined1 *)0x5d;
      local_a._2_2_ = (char *)local_a;
      pcVar2 = (char *)0x22b2;
      local_c = (char *)0xb5fd;
      local_a._0_2_ = pcVar4;
      iVar1 = func_0x00025a9a();
      if (iVar1 != 0) {
        puStack_6 = (undefined1 *)(iVar1 + 1);
        local_a._2_2_ = (char *)local_a;
        local_a._0_2_ = (char *)0x22b2;
        pcVar2 = (char *)0x18b3;
        local_c = (char *)0xb613;
        func_0x00018b44();
        local_14 = local_14 + -1;
        local_1e = (char *)local_a + ((int)local_1e - (int)local_c);
      }
    }
    pcVar3 = pcVar2;
    if (*(char *)local_a == '[') {
      puStack_6 = (undefined1 *)0x496f;
      local_a._2_2_ = (char *)local_a;
      pcVar3 = (char *)0x22b2;
      local_c = (char *)0xb633;
      local_a._0_2_ = pcVar2;
      iVar1 = func_0x00025bc2();
      if (iVar1 != 0) {
        puStack_6 = (undefined1 *)(iVar1 + 5);
        *(char *)local_a = '\0';
        local_a._2_2_ = (char *)local_a + 1;
        local_a._0_2_ = (char *)0x22b2;
        pcVar3 = (char *)0x18b3;
        local_c = (char *)0xb657;
        func_0x00018b44();
        local_14 = local_14 + -1;
        local_1e = local_1e + ((int)(char *)local_a - (int)local_c);
      }
    }
  }
  puStack_6 = (undefined1 *)*(undefined2 *)0xd70;
  local_a._2_2_ = (char *)param_1;
  local_a._0_2_ = local_1e;
  uStack_e = 0xb682;
  local_c = pcVar3;
  FUN_3ab8_04aa();
  return;
}



/* 3ab8:0b0a  FUN_3ab8_0b0a  937 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_0b0a(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  FUN_21f2_0ebc();
  func_0x000297e6(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_0ee9(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_0ee9(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_0ee9(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x0002996b(0x22b2);
  func_0x00029b55(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029983(0x22b2);
  if (((*(uint *)(param_1 + 0xdca) & 1) != 0) || ((*(uint *)(param_1 + 0xdca) & 2) != 0)) {
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    uVar6 = FUN_28b3_0f51(0x22b2);
    iVar8 = (int)((ulong)uVar6 >> 0x10);
    uVar2 = (uint)uVar6;
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    FUN_28b3_0f51(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    uVar6 = FUN_28b3_0f51(0x22b2);
    uVar3 = (uint)uVar6;
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    iVar9 = 0x22b2;
    uVar7 = FUN_28b3_0f51();
    if (iVar9 - (int)((ulong)uVar7 >> 0x10) == (uint)(0xb784 < (uint)uVar7) && (uint)uVar7 == 0xb784
       ) {
      uVar4 = 0;
      bVar1 = (int)((ulong)uVar6 >> 0x10) - iVar8 == (uint)(uVar3 < uVar2);
      uVar5 = bVar1 && uVar3 == uVar2;
      if (bVar1 && uVar3 == uVar2) {
        func_0x000297e6(0x22b2);
        func_0x00029ae7(0x22b2);
        func_0x0002996b(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029ae7(0x22b2);
        func_0x0002996b(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar4 || (bool)uVar5) {
          func_0x000297e6(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029b6d(0x22b2);
          FUN_28b3_1181(0x22b2);
        }
        else {
          func_0x000297e6(0x22b2);
          func_0x00029ae7(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029ae7(0x22b2);
          func_0x00029b6d(0x22b2);
          FUN_28b3_1181(0x22b2);
        }
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
      }
    }
    func_0x000298b4(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000298b4(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x000298b4(0x22b2);
    FUN_28b3_117c(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000298b4(0x22b2);
    func_0x000298b4(0x22b2);
    FUN_28b3_117c(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000298b4(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000298b4(0x22b2);
    func_0x00029983(0x22b2);
  }
  if ((*(byte *)(param_1 + 0xdca) & 0x40) == 0) {
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
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
    FUN_21f2_3454(0xbf48,param_1 + 0x6e8);
    FUN_3ab8_0929(0xbf48);
  }
  else {
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
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
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    FUN_3ab8_06dc(param_1,param_1 + 0x6e8);
  }
  return 1;
}



/* 3ab8:0eb3  FUN_3ab8_0eb3  163 bytes, 2 callers */

void __cdecl16far FUN_3ab8_0eb3(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if ((*(byte *)(param_1 + 0xdca) & 0x40) == 0) {
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    FUN_21f2_3454(0xbf48,param_1 + 0x684);
    FUN_3ab8_0929(0xbf48);
  }
  else {
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    FUN_3ab8_06dc(param_1,param_1 + 0x684);
  }
  return;
}



/* 3ab8:0f56  FUN_3ab8_0f56  500 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0f56(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if ((*(byte *)(param_1 + 0xdca) & 0x40) == 0) {
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    FUN_21f2_3454(0xbf48,param_2 * 0x28 + param_1 + 0x420);
    FUN_3ab8_0929(0xbf48);
  }
  else {
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    FUN_3ab8_06dc(param_1,param_2 * 0x28 + param_1 + 0x420);
  }
  return;
}



/* 3ab8:114a  FUN_3ab8_114a  105 bytes, 3 callers */

/* WARNING: Instruction at (ram,0x00039af1) overlaps instruction at (ram,0x00039af0)
    */

char * __cdecl16far FUN_3ab8_114a(char *param_1,char *param_2,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  uint unaff_SI;
  char *pcVar7;
  int unaff_DI;
  char *pcVar8;
  undefined2 unaff_DS;
  char *in_stack_0000fff4;
  int iVar9;
  undefined2 uVar10;
  
  FUN_21f2_0ebc();
  FUN_1000_0599(0x22b2,0x37,1);
  func_0x00012276(0xdef,0x4975,param_2);
  if ((param_1[0xdca] & 0x40U) != 0) {
    switch(param_2 + -1) {
    case (char *)0x0:
      return param_1;
    case (char *)0x1:
      return (char *)0x0;
    case (char *)0x2:
      goto switchD_3000_be2f_caseD_2;
    case (char *)0x3:
      goto switchD_3000_be2f_caseD_4;
    case (char *)0x4:
      uVar5 = (uint)*(byte *)(unaff_DI + -2);
      *(byte *)(uVar5 + unaff_DI) = *(byte *)(uVar5 + unaff_DI) & 0x7f;
      goto switchD_3000_be2f_caseD_5;
    case (char *)0x5:
      return in_stack_0000fff4;
    default:
      return param_2 + -1;
    }
  }
  if ((char *)0x5 < param_2 + -1) {
    pcVar6 = (char *)FUN_3ab8_0929(0xbf48);
    return pcVar6;
  }
  uVar5 = (int)(param_2 + -1) * 2;
  switch(param_2) {
  case (char *)0x1:
    iVar2 = FUN_32b2_2fa4();
    if (iVar2 == 0) {
      unaff_SI = unaff_SI | 0x40;
    }
    return (char *)(unaff_SI | (unaff_SI & 0x1c0) >> 3 | (unaff_SI & 0x1c0) >> 6);
  case (char *)0x2:
switchD_3000_be2f_caseD_2:
    return param_1;
  case (char *)0x3:
    return param_1;
  case (char *)0x4:
switchD_3000_be2f_caseD_4:
    return param_1;
  case (char *)0x5:
switchD_3000_be2f_caseD_5:
    piVar1 = (int *)(uVar5 + unaff_SI + 0x7f21);
    *piVar1 = *piVar1 + 1;
    return param_1;
  }
  pcVar7 = (char *)0x0;
  *(undefined2 *)0x7c46 = 0x10;
  pcVar8 = (char *)0x32b2;
  uVar10 = param_4;
  pcVar6 = (char *)FUN_32b2_406e(param_1,param_2,param_3);
  if ((pcVar6 == (char *)0xffff) && (*(int *)0x7a34 == 2)) {
    uVar10 = 0x2f;
    pcVar8 = (char *)0x3a75;
    pcVar6 = param_2;
    iVar2 = FUN_3a75_0064();
    if (iVar2 == 0) {
      uVar10 = 0x5c;
      pcVar8 = (char *)0x3a75;
      pcVar6 = param_2;
      iVar2 = FUN_3a75_0064();
      if ((iVar2 == 0) && ((*param_2 == '\0' || (param_2[1] != ':')))) {
        uVar10 = 0x88fe;
        pcVar6 = (char *)0x3a75;
        pcVar8 = (char *)0x32b2;
        iVar2 = FUN_32b2_238c();
        if (iVar2 != 0) {
          uVar10 = 0x104;
          pcVar6 = (char *)0x32b2;
          pcVar8 = (char *)0x32b2;
          pcVar7 = (char *)thunk_FUN_32b2_1f83();
          if (pcVar7 != (char *)0x0) {
            *(undefined2 *)0x7c46 = uVar10;
            do {
              do {
                do {
                  pcVar6 = pcVar7;
                  iVar2 = FUN_32b2_3250(iVar2,pcVar7,0x103);
                  if ((iVar2 == 0) || (*pcVar7 == '\0')) goto LAB_32b2_4386;
                  iVar3 = FUN_32b2_21c4(pcVar7);
                  if (pcVar7[iVar3 + -1] == '\\') {
                    iVar9 = 0x32b2;
                    iVar3 = FUN_3a75_0194(pcVar7,0x5c);
                    if (iVar9 != iVar3) {
                      uVar10 = 0x8903;
LAB_32b2_42ce:
                      FUN_32b2_2126(pcVar7,uVar10);
                    }
                  }
                  else if (pcVar7[iVar3 + -1] != '/') {
                    uVar10 = 0x8905;
                    goto LAB_32b2_42ce;
                  }
                  iVar3 = FUN_32b2_21c4(param_2);
                  pcVar6 = (char *)0x32b2;
                  pcVar8 = (char *)0x32b2;
                  iVar9 = FUN_32b2_21c4(pcVar7);
                  if (0x103 < (uint)(iVar9 + iVar3)) goto LAB_32b2_4386;
                  FUN_32b2_2126(pcVar7,param_2);
                  pcVar8 = (char *)0x32b2;
                  pcVar6 = (char *)FUN_32b2_406e(param_1,pcVar7,param_3,param_4);
                  if (pcVar6 != (char *)0xffff) goto LAB_32b2_4386;
                } while (*(int *)0x7a34 == 2);
                pcVar6 = (char *)FUN_3a75_0064(pcVar7,0x5c);
                if (pcVar6 != pcVar7) {
                  pcVar8 = (char *)0x3a75;
                  pcVar6 = pcVar7;
                  pcVar4 = (char *)FUN_3a75_0064(pcVar7,0x2f);
                  if (pcVar4 != pcVar7) goto LAB_32b2_4386;
                }
                pcVar8 = (char *)0x3a75;
                iVar3 = FUN_3a75_0064(pcVar7 + 1,0x5c);
              } while (iVar3 - (int)pcVar7 == 1);
              pcVar6 = pcVar7 + 1;
              pcVar8 = (char *)0x3a75;
              iVar3 = FUN_3a75_0064(pcVar6,0x2f);
            } while (iVar3 - (int)pcVar7 == 1);
            goto LAB_32b2_4386;
          }
        }
      }
    }
  }
  *(undefined2 *)0x7c46 = uVar10;
LAB_32b2_4386:
  if (pcVar7 != (char *)0x0) {
    thunk_FUN_32b2_1f62(pcVar7);
    pcVar6 = pcVar8;
  }
  return pcVar6;
}



/* 3ab8:12cd  FUN_3ab8_12cd  112 bytes, 1 callers */

void __cdecl16far FUN_3ab8_12cd(uint *param_1,int *param_2,undefined2 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if ((*param_1 < 0x2920) || (0x2980 < *param_1)) {
    if ((*param_1 < 0x2a20) || (0x2a80 < *param_1)) {
      if (((*param_1 < 0x2920) || (0x2b80 < *param_1)) && (*param_2 != -0x7ac1)) {
        uVar3 = *(undefined2 *)0x9d90;
        uVar4 = *(undefined2 *)0x9d92;
        goto LAB_3ab8_12fb;
      }
      cVar1 = ' ';
    }
    else {
      cVar1 = (char)*param_1 + -0x80;
    }
  }
  else {
    cVar1 = (char)*param_1;
  }
  uVar2 = func_0x00019234(0x22b2,cVar1);
  *param_1 = uVar2;
  uVar3 = *(undefined2 *)0x9d8c;
  uVar4 = *(undefined2 *)0x9d8e;
LAB_3ab8_12fb:
  *param_3 = uVar3;
  param_3[1] = uVar4;
  return;
}



/* 3ab8:133d  FUN_3ab8_133d  288 bytes, 1 callers */

void __cdecl16far FUN_3ab8_133d(int param_1)

{
  undefined2 local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x3ab8;
  local_6 = 0xbec8;
  FUN_21f2_0ebc();
  if (3 < param_1) {
    if (param_1 == 5) {
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xbefc;
      func_0x00029834();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xbf05;
      FUN_28b3_100d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xbf0d;
      func_0x00029983();
    }
    if (param_1 == 6) {
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xbf1c;
      func_0x00029834();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xbf25;
      FUN_28b3_100d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xbf2d;
      func_0x00029983();
    }
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbf48;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbf50;
    func_0x00029b6d();
    local_4 = &local_6;
    local_6 = 0x22b2;
    func_0x00029b6d();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbf5f;
    func_0x0002996b();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 48999;
    func_0x00029b6d();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbf6f;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbf77;
    func_0x00029b6d();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbf7c;
    FUN_28b3_1163();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbf88;
    func_0x00029b6d();
    local_4 = (undefined2 *)0xb30c;
    local_6 = 0x22b2;
    func_0x00029bb5();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbf98;
    func_0x00029983();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbfa0;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbfa8;
    func_0x00029b6d();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbfb0;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbfb8;
    func_0x00029b6d();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbfbd;
    FUN_28b3_1163();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbfc9;
    func_0x00029b6d();
    local_4 = (undefined2 *)0xb37e;
    local_6 = 0x22b2;
    func_0x00029bb5();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xbfd9;
    func_0x00029983();
  }
  return;
}



/* 3ab8:145d  FUN_3ab8_145d  476 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_145d(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x3ab8;
  local_6 = 0xbfe8;
  FUN_21f2_0ebc();
  if (0 < param_1) {
    if (param_1 < 5) {
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc045;
      func_0x000297e6();
      local_4 = &local_6;
      local_6 = 0x22b2;
      func_0x00029b6d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc054;
      func_0x0002996b();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc060;
      func_0x00029b6d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc068;
      func_0x00029b6d();
      local_4 = (undefined2 *)param_3;
      local_6 = 0x22b2;
      func_0x00029b55();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc077;
      func_0x00029983();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc083;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc08b;
      func_0x00029b6d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc093;
      func_0x00029b6d();
      local_4 = (undefined2 *)param_4;
      local_6 = 0x22b2;
      func_0x00029bb5();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc0a2;
      func_0x00029983();
    }
    if (param_1 == 5) {
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc0d1;
      func_0x00029834();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc0da;
      FUN_28b3_100d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc0e2;
      func_0x00029983();
    }
    if (param_1 == 6) {
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc0f1;
      func_0x00029834();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc0fa;
      FUN_28b3_100d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc102;
      func_0x00029983();
    }
    if (3 < param_1) {
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc126;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc12e;
      func_0x00029b6d();
      local_4 = &local_6;
      local_6 = 0x22b2;
      func_0x00029b6d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc13d;
      func_0x0002996b();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc145;
      func_0x00029b6d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc14d;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc155;
      func_0x00029b6d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc15a;
      FUN_28b3_1163();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc166;
      func_0x00029b6d();
      local_4 = (undefined2 *)param_3;
      local_6 = 0x22b2;
      func_0x00029bb5();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc175;
      func_0x00029983();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc17d;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc185;
      func_0x00029b6d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc18d;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc195;
      func_0x00029b6d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc19a;
      FUN_28b3_1163();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc1a6;
      func_0x00029b6d();
      local_4 = (undefined2 *)param_4;
      local_6 = 0x22b2;
      func_0x00029bb5();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0xc1b5;
      func_0x00029983();
    }
  }
  return;
}



/* 3ab8:1639  FUN_3ab8_1639  9170 bytes, 0 callers */

void FUN_3ab8_1639(undefined2 param_1,undefined2 *******param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  undefined2 ******ppppppuVar3;
  char cVar4;
  undefined2 *puVar5;
  undefined2 *******pppppppuVar6;
  uint uVar7;
  int iVar8;
  undefined2 *******pppppppuVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 *******unaff_DS;
  bool bVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 *puVar15;
  undefined2 *******pppppppuVar16;
  undefined2 ******local_27a;
  undefined2 ******local_278;
  undefined2 ******local_276;
  undefined2 ******local_274;
  undefined2 ******local_272;
  undefined2 ******local_270;
  undefined2 ******local_26e;
  undefined2 ******local_26c;
  undefined2 ******local_266;
  undefined2 ******local_264;
  undefined2 ******local_262;
  undefined2 ******local_260;
  undefined2 ******local_25e;
  undefined2 ******local_25c;
  undefined2 ******local_25a;
  undefined2 ******local_258;
  undefined2 *****local_252 [2];
  int local_24e;
  undefined2 ******local_24a;
  undefined2 ******local_248;
  undefined2 *****local_246 [4];
  undefined2 ******local_23e;
  undefined2 ******local_23c;
  undefined2 ******local_23a;
  undefined2 ******local_238;
  undefined2 ******local_236;
  undefined2 ******local_234;
  undefined2 ******local_232;
  undefined2 local_22c;
  undefined2 local_22a;
  undefined2 ******local_228;
  undefined2 ******local_226;
  undefined2 ******local_224;
  undefined2 ******local_222;
  undefined2 ******local_220;
  undefined2 ******local_21e;
  undefined2 ******local_21c;
  undefined2 *****local_218;
  undefined2 local_216;
  undefined2 ******local_210;
  undefined2 ******local_20e;
  undefined4 local_20c;
  undefined2 local_208;
  undefined2 local_206;
  undefined2 ******local_204;
  undefined2 ******local_202;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f8;
  undefined2 local_1f6;
  uint local_1f4;
  char local_1f2;
  undefined1 auStack_1f1 [301];
  int local_c4;
  undefined2 ******local_c2;
  undefined2 ******local_c0;
  undefined2 ******local_be;
  undefined2 ******local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  int local_b2;
  undefined2 ******local_b0;
  undefined2 ******local_ae;
  undefined2 *****local_ac;
  uint local_aa;
  int local_a0;
  undefined2 *****local_9e;
  uint local_9c;
  undefined2 *****local_92;
  undefined2 *****local_90;
  int local_8e;
  undefined2 ******local_8c;
  undefined2 *****local_8a;
  uint local_88;
  undefined2 ******local_86;
  undefined2 local_84;
  undefined2 ******ppppppuStack_82;
  undefined2 ******local_80;
  undefined2 ******local_7e;
  undefined2 *****local_7c;
  undefined2 *****local_7a;
  undefined2 uStack_78;
  undefined2 ******local_76;
  undefined2 ******local_74;
  undefined2 ******local_72;
  undefined2 ******local_70;
  undefined2 local_6a;
  undefined2 uStack_68;
  undefined2 local_62;
  undefined2 local_60;
  byte local_5e;
  byte local_5c;
  undefined2 ******local_5a;
  undefined2 ******local_58;
  undefined2 *****local_56;
  uint local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 *****local_4e;
  uint local_4c;
  undefined2 ******local_4a;
  undefined2 ******local_48;
  undefined2 local_42;
  undefined2 uStack_40;
  undefined2 *****local_3e;
  uint local_3c;
  undefined2 local_3a;
  undefined2 ******ppppppuStack_38;
  undefined2 ******local_36;
  undefined2 ******ppppppuStack_34;
  undefined4 local_32;
  undefined2 ******local_2e;
  undefined2 ******local_2c;
  undefined2 ******local_2a;
  undefined2 ******ppppppuStack_28;
  undefined2 ******local_26;
  undefined2 ******local_24;
  undefined2 ******local_22;
  undefined2 ******local_20;
  undefined2 ******local_1e;
  undefined2 ******local_1c;
  undefined1 *puVar17;
  undefined2 ******local_18;
  undefined2 ******local_16;
  undefined2 ******local_14;
  undefined2 ******ppppppuStack_12;
  undefined2 ******ppppppuStack_10;
  undefined2 ******ppppppuStack_e;
  undefined2 ******local_c;
  
  FUN_21f2_0ebc();
  local_1fc = *(undefined2 *)0x9d90;
  local_1fa = *(undefined2 *)0x9d92;
  local_8c = (undefined2 *******)0x0;
  local_16 = (undefined2 *******)0x1;
  local_c = (undefined2 ******)0xc1f2;
  local_1f8 = local_1fc;
  local_1f6 = local_1fa;
  func_0x000257c0();
  local_c = (undefined2 ******)0xc1fd;
  puVar5 = (undefined2 *)func_0x00025750();
  pppppppuVar6 = &local_14;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    pppppppuVar16 = pppppppuVar6;
    pppppppuVar6 = pppppppuVar6 + 1;
    puVar15 = puVar5;
    puVar5 = puVar5 + 1;
    *pppppppuVar16 = (undefined2 ******)*puVar15;
  }
  pppppppuVar6 = (undefined2 *******)(*(uint *)0xc0ac - *(uint *)0xbefa);
  local_18 = (undefined2 ******)
             ((*(int *)0xc0ae - *(int *)0xbefc) - (uint)(*(uint *)0xc0ac < *(uint *)0xbefa));
  if (0 < *(int *)0x150) {
    local_c = (undefined2 ******)0x22b2;
    ppppppuStack_e = (undefined2 *******)0xc239;
    FUN_1000_0599();
    local_c = (undefined2 *******)0xc244;
    func_0x00012276();
    local_7c = param_2[0x6cb];
    local_7a = param_2[0x6cc];
    local_92 = param_2[0x6cd];
    local_90 = param_2[0x6ce];
    for (local_24 = (undefined2 *******)0x1; (int)local_24 < 7;
        local_24 = (undefined2 ******)((int)local_24 + 1)) {
      local_26 = (undefined2 ******)CONCAT11(local_26._1_1_,1);
      local_1f2 = '\0';
      for (local_8e = 1; local_8e <= *(int *)0x150; local_8e = local_8e + 1) {
        cVar4 = FUN_12c1_009c();
        if (cVar4 == '\x1b') {
          *(undefined2 *)0xa4a = 1;
          return;
        }
        local_c = (undefined2 *******)0xc277;
        puVar15 = (undefined2 *)func_0x00000398();
        puVar5 = (undefined2 *)puVar15;
        pppppppuVar9 = &local_72;
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          pppppppuVar16 = pppppppuVar9;
          pppppppuVar9 = pppppppuVar9 + 1;
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          *pppppppuVar16 = (undefined2 ******)*puVar1;
        }
        if ((undefined2 *******)*(uint *)((uint)local_5e * 2 + 0x16c) ==
            (undefined2 *******)local_24) {
          local_1f4 = (uint)local_5e;
          local_c = (undefined2 ******)0xc2ce;
          iVar8 = FUN_10ad_1ad0();
          if (((iVar8 == 0) || ((int)local_1f4 < 1)) || (10 < (int)local_1f4)) {
            local_c = (undefined2 ******)(auStack_1f1 + 1);
            ppppppuStack_e = (undefined2 *******)0x11f2;
            ppppppuStack_10 = (undefined2 *******)0xc2f1;
            FUN_1885_0344();
            local_86 = (undefined2 ******)(auStack_1f1 + 1);
          }
          else {
            FUN_28b3_0d8b();
            func_0x00029c2c();
            func_0x00029983();
            FUN_28b3_0d8b();
            func_0x00029c2c();
            func_0x00029983();
            FUN_28b3_0d8b();
            func_0x00029c2c();
            func_0x00029983();
            local_ba = *(undefined2 *)0x9d90;
            local_b8 = *(undefined2 *)0x9d92;
            local_c = (undefined2 ******)(auStack_1f1 + 1);
            ppppppuStack_e = (undefined2 ******)0x22b2;
            ppppppuStack_10 = (undefined2 ******)0xc385;
            FUN_1885_0344();
            local_86 = (undefined2 ******)(auStack_1f1 + 1);
            local_c = (undefined2 ******)0xc396;
            iVar8 = func_0x00018e7b();
            if (iVar8 != 0) {
              bVar2 = local_5c & 0x20;
              local_c = (undefined2 ******)(auStack_1f1 + 1);
              ppppppuStack_e = (undefined2 ******)0x18b3;
              ppppppuStack_10 = (undefined2 ******)0xc3bd;
              func_0x00018eff();
              func_0x000297e6();
              local_c = (undefined2 ******)(auStack_1f1 + 1);
              ppppppuStack_e = (undefined2 ******)0x22b2;
              ppppppuStack_10 = (undefined2 ******)0xc3d9;
              func_0x00018eff();
              func_0x00029b85();
              func_0x00029983();
              if (bVar2 == 0) {
                func_0x000297e6();
              }
              else {
                func_0x000297e6();
              }
              local_c = (undefined2 ******)0xc410;
              func_0x00029b6d();
              func_0x00029983();
              func_0x000297e6();
              local_c = (undefined2 ******)0xc428;
              func_0x00029b6d();
              func_0x00029983();
            }
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x00029d78();
            ppppppuStack_10 = (undefined2 ******)0x22b2;
            ppppppuStack_12 = (undefined2 ******)0xc466;
            func_0x000299d1();
            ppppppuStack_10 = (undefined2 ******)0x22b2;
            ppppppuStack_12 = (undefined2 ******)0xc46e;
            func_0x000297e6();
            ppppppuStack_10 = (undefined2 ******)0x22b2;
            ppppppuStack_12 = (undefined2 ******)0xc473;
            func_0x00029d78();
            local_18 = (undefined2 ******)0x22b2;
            func_0x000299d1();
            local_18 = (undefined2 ******)0x22b2;
            func_0x000297e6();
            local_18 = (undefined2 ******)0x22b2;
            func_0x00029d78();
            local_20 = (undefined2 ******)0x22b2;
            local_22 = (undefined2 ******)0xc494;
            func_0x000299d1();
            local_20 = (undefined2 ******)0x22b2;
            local_22 = (undefined2 ******)0xc49c;
            func_0x000297e6();
            local_20 = (undefined2 ******)0x22b2;
            local_22 = (undefined2 ******)0xc4a1;
            func_0x00029d78();
            ppppppuStack_28 = (undefined2 ******)0x22b2;
            local_2a = (undefined2 ******)0xc4ab;
            func_0x000299d1();
            ppppppuStack_28 = (undefined2 ******)0x22b2;
            local_2a = (undefined2 ******)0xc4b0;
            pppppppuVar16 = (undefined2 *******)FUN_1000_0718();
            local_206 = 0;
            local_208 = 0;
            local_20c = pppppppuVar16;
            func_0x00029da5();
            func_0x00029c2c();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            ppppppuStack_10 = (undefined2 ******)0x22b2;
            ppppppuStack_12 = (undefined2 ******)0xc4f9;
            func_0x000299d1();
            ppppppuStack_10 = (undefined2 ******)0x22b2;
            ppppppuStack_12 = (undefined2 ******)0xc501;
            func_0x000297e6();
            ppppppuStack_10 = (undefined2 ******)0x22b2;
            ppppppuStack_12 = (undefined2 ******)0xc509;
            FUN_28b3_100d();
            ppppppuStack_10 = (undefined2 ******)0x22b2;
            ppppppuStack_12 = (undefined2 ******)0xc512;
            func_0x0002996b();
            ppppppuStack_10 = (undefined2 ******)0x22b2;
            ppppppuStack_12 = (undefined2 ******)0xc517;
            func_0x00029d78();
            local_18 = (undefined2 ******)0x22b2;
            func_0x000299d1();
            local_18 = (undefined2 ******)*(uint *)0x9dbe;
            local_1c = (undefined2 ******)*(undefined2 *)0x9dba;
            local_1e = (undefined2 ******)*(undefined2 *)0x9db8;
            local_20 = (undefined2 ******)*(uint *)0x9dbe;
            local_22 = (undefined2 ******)*(uint *)0x9dbc;
            local_24 = (undefined2 ******)*(uint *)0x9dba;
            local_26 = (undefined2 ******)*(uint *)0x9db8;
            ppppppuStack_28 = (undefined2 *******)0x22b2;
            local_2a = (undefined2 *******)0xc546;
            FUN_1def_043a();
            func_0x00029834();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_117c();
            func_0x00029d78();
            ppppppuStack_10 = (undefined2 ******)0x22b2;
            ppppppuStack_12 = (undefined2 ******)0xc58a;
            func_0x000299d1();
            ppppppuStack_10 = (undefined2 ******)0x22b2;
            ppppppuStack_12 = (undefined2 *******)0xc58f;
            FUN_28b3_1582();
            uVar13 = (undefined1 *)0xfff7 < &ppppppuStack_e;
            uVar14 = &stack0x0000 == (undefined1 *)0x6;
            func_0x00029834();
            func_0x0002996b();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar13 || (bool)uVar14) {
              local_be = (undefined2 ******)*(uint *)0x9d88;
              local_bc = (undefined2 ******)*(uint *)0x9d8a;
              local_1e = (undefined2 ******)*(undefined2 *)0x9d90;
              local_1c = (undefined2 ******)*(undefined2 *)0x9d92;
            }
            else {
              func_0x000297e6();
              func_0x00029b85();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b85();
              func_0x00029983();
            }
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029983();
            uVar13 = 0;
            if ((local_5c & 0x20) == 0) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar13) {
LAB_3ab8_1af3:
                func_0x000297e6();
                func_0x00029af6();
                func_0x00029d78();
                ppppppuStack_10 = (undefined2 ******)0x22b2;
                ppppppuStack_12 = (undefined2 ******)0xc690;
                func_0x000299d1();
                ppppppuStack_10 = (undefined2 ******)0x22b2;
                ppppppuStack_12 = (undefined2 ******)0xc699;
                func_0x000297e6();
                ppppppuStack_10 = (undefined2 ******)0x22b2;
                ppppppuStack_12 = (undefined2 *******)0xc69e;
                func_0x00029d78();
                local_18 = (undefined2 ******)0x22b2;
                func_0x000299d1();
                local_18 = (undefined2 ******)*(uint *)0x9dbe;
                local_1c = (undefined2 ******)*(undefined2 *)0x9dba;
                local_1e = (undefined2 ******)*(undefined2 *)0x9db8;
                local_20 = (undefined2 ******)*(uint *)0x9dbe;
                local_22 = (undefined2 ******)*(uint *)0x9dbc;
                local_24 = (undefined2 ******)*(uint *)0x9dba;
                local_26 = (undefined2 ******)*(uint *)0x9db8;
                ppppppuStack_28 = (undefined2 *******)0x22b2;
                local_2a = (undefined2 *******)0xc6cd;
                FUN_1def_043a();
              }
              else {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar13) goto LAB_3ab8_1af3;
              }
              func_0x000297e6();
              local_c = (undefined2 ******)0xc6e1;
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b85();
            }
            else {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar13) {
LAB_3ab8_1bb7:
                func_0x000297e6();
                func_0x00029d78();
                ppppppuStack_10 = (undefined2 ******)0x22b2;
                ppppppuStack_12 = (undefined2 ******)0xc74f;
                func_0x000299d1();
                ppppppuStack_10 = (undefined2 ******)0x22b2;
                ppppppuStack_12 = (undefined2 ******)0xc758;
                func_0x000297e6();
                ppppppuStack_10 = (undefined2 ******)0x22b2;
                ppppppuStack_12 = (undefined2 ******)0xc75d;
                func_0x00029af6();
                ppppppuStack_10 = (undefined2 ******)0x22b2;
                ppppppuStack_12 = (undefined2 *******)0xc762;
                func_0x00029d78();
                local_18 = (undefined2 ******)0x22b2;
                func_0x000299d1();
                local_18 = (undefined2 ******)*(uint *)0x9dbe;
                local_1c = (undefined2 ******)*(undefined2 *)0x9dba;
                local_1e = (undefined2 ******)*(undefined2 *)0x9db8;
                local_20 = (undefined2 ******)*(uint *)0x9dbe;
                local_22 = (undefined2 ******)*(uint *)0x9dbc;
                local_24 = (undefined2 ******)*(uint *)0x9dba;
                local_26 = (undefined2 ******)*(uint *)0x9db8;
                ppppppuStack_28 = (undefined2 *******)0x22b2;
                local_2a = (undefined2 *******)0xc791;
                FUN_1def_043a();
              }
              else {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar13) goto LAB_3ab8_1bb7;
              }
              func_0x000297e6();
              local_c = (undefined2 ******)0xc7a5;
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b85();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b6d();
              local_c = (undefined2 ******)0xc7df;
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b6d();
              local_c = (undefined2 ******)0xc800;
              func_0x00029bb5();
              func_0x00029983();
              local_b0 = (undefined2 ******)*(uint *)0xb784;
              local_ae = (undefined2 ******)*(uint *)0xb786;
              uVar10 = *(undefined2 *)0xb76c;
              *(undefined2 *)0xb784 = *(undefined2 *)0xb76a;
              *(undefined2 *)0xb786 = uVar10;
              func_0x000297e6();
              func_0x00029af6();
            }
            func_0x00029983();
            local_b2 = 0;
            local_76 = local_72;
            local_74 = local_70;
            func_0x000297e6();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x0002996b();
            func_0x00029b55();
            func_0x00029983();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029983();
            local_2e = local_76;
            local_2c = local_74;
            if ((int)local_74 < 0) {
              local_2e = (undefined2 *******)-(int)local_76;
              local_2c = (undefined2 *******)
                         -(((uint)local_74 & 0x7fff) +
                          (uint)((undefined2 *******)local_76 != (undefined2 *******)0x0));
            }
            local_3e = local_8a;
            local_3c = local_88;
            if ((int)local_88 < 0) {
              local_3e = (undefined2 ******)-(int)local_8a;
              local_3c = -((local_88 & 0x7fff) +
                          (uint)((undefined2 ******)local_8a != (undefined2 ******)0x0));
            }
            local_4e = local_9e;
            local_4c = local_9c;
            if ((int)local_9c < 0) {
              local_4e = (undefined2 ******)-(int)local_9e;
              local_4c = -((local_9c & 0x7fff) +
                          (uint)((undefined2 ******)local_9e != (undefined2 ******)0x0));
            }
            local_56 = local_ac;
            local_54 = local_aa;
            if ((int)local_aa < 0) {
              local_56 = (undefined2 ******)-(int)local_ac;
              local_54 = -((local_aa & 0x7fff) +
                          (uint)((undefined2 ******)local_ac != (undefined2 ******)0x0));
            }
            if ((((int)local_2c <= (int)param_2[0x6de]) &&
                (((int)local_2c < (int)param_2[0x6de] || (local_2e < param_2[0x6dd])))) &&
               (((int)local_3c <= (int)param_2[0x6de] &&
                ((((int)local_3c < (int)param_2[0x6de] || (local_3e < param_2[0x6dd])) &&
                 (((int)local_4c <= (int)param_2[0x6de] &&
                  (((((int)local_4c < (int)param_2[0x6de] || (local_4e < param_2[0x6dd])) &&
                    ((int)local_54 <= (int)param_2[0x6de])) &&
                   (((int)local_54 < (int)param_2[0x6de] || (local_56 < param_2[0x6dd])))))))))))) {
              local_b2 = 1;
            }
            if (((((int)param_2[0x6e2] <= (int)local_2c) &&
                 (((int)param_2[0x6e2] < (int)local_2c || (param_2[0x6e1] < local_2e)))) &&
                ((int)param_2[0x6e2] <= (int)local_3c)) &&
               ((((((int)param_2[0x6e2] < (int)local_3c || (param_2[0x6e1] < local_3e)) &&
                  ((int)param_2[0x6e2] <= (int)local_4c)) &&
                 (((int)param_2[0x6e2] < (int)local_4c || (param_2[0x6e1] < local_4e)))) &&
                (((int)param_2[0x6e2] <= (int)local_54 &&
                 (((int)param_2[0x6e2] < (int)local_54 || (param_2[0x6e1] < local_56)))))))) {
              local_b2 = 1;
            }
            func_0x000297e6();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x0002996b();
            func_0x000297e6();
            func_0x0002996b();
            FUN_28b3_117c();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            local_2e = local_76;
            local_2c = local_74;
            if ((int)local_74 < 0) {
              local_2e = (undefined2 *******)-(int)local_76;
              local_2c = (undefined2 *******)
                         -(((uint)local_74 & 0x7fff) +
                          (uint)((undefined2 *******)local_76 != (undefined2 *******)0x0));
            }
            local_3e = local_8a;
            local_3c = local_88;
            if ((int)local_88 < 0) {
              local_3e = (undefined2 ******)-(int)local_8a;
              local_3c = -((local_88 & 0x7fff) +
                          (uint)((undefined2 ******)local_8a != (undefined2 ******)0x0));
            }
            local_4e = local_9e;
            local_4c = local_9c;
            if ((int)local_9c < 0) {
              local_4e = (undefined2 ******)-(int)local_9e;
              local_4c = -((local_9c & 0x7fff) +
                          (uint)((undefined2 ******)local_9e != (undefined2 ******)0x0));
            }
            local_56 = local_ac;
            local_54 = local_aa;
            if ((int)local_aa < 0) {
              local_56 = (undefined2 ******)-(int)local_ac;
              local_54 = -((local_aa & 0x7fff) +
                          (uint)((undefined2 ******)local_ac != (undefined2 ******)0x0));
            }
            if ((((int)local_2c <= (int)param_2[0x6e0]) &&
                ((((int)local_2c < (int)param_2[0x6e0] || (local_2e < param_2[0x6df])) &&
                 ((int)local_3c <= (int)param_2[0x6e0])))) &&
               (((((int)local_3c < (int)param_2[0x6e0] || (local_3e < param_2[0x6df])) &&
                 ((int)local_4c <= (int)param_2[0x6e0])) &&
                ((((int)local_4c < (int)param_2[0x6e0] || (local_4e < param_2[0x6df])) &&
                 (((int)local_54 <= (int)param_2[0x6e0] &&
                  (((int)local_54 < (int)param_2[0x6e0] || (local_56 < param_2[0x6df])))))))))) {
              local_b2 = 1;
            }
            if (((((int)param_2[0x6e4] <= (int)local_2c) &&
                 ((((((int)param_2[0x6e4] < (int)local_2c || (param_2[0x6e3] < local_2e)) &&
                    ((int)param_2[0x6e4] <= (int)local_3c)) &&
                   (((int)param_2[0x6e4] < (int)local_3c || (param_2[0x6e3] < local_3e)))) &&
                  ((int)param_2[0x6e4] <= (int)local_4c)))) &&
                (((int)param_2[0x6e4] < (int)local_4c || (param_2[0x6e3] < local_4e)))) &&
               (((int)param_2[0x6e4] <= (int)local_54 &&
                (((int)param_2[0x6e4] < (int)local_54 || (param_2[0x6e3] < local_56)))))) {
              local_b2 = 1;
            }
            local_c = (undefined2 ******)(auStack_1f1 + 1);
            ppppppuStack_e = (undefined2 *******)0x22b2;
            ppppppuStack_10 = (undefined2 *******)0xcbca;
            FUN_1885_0344();
            pppppppuVar9 = &local_18;
            pppppppuVar6 = &local_14;
            for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar15 = pppppppuVar9;
              pppppppuVar9 = pppppppuVar9 + 1;
              pppppppuVar16 = pppppppuVar6;
              pppppppuVar6 = pppppppuVar6 + 1;
              *puVar15 = *pppppppuVar16;
            }
            pppppppuVar6 = (undefined2 *******)(auStack_1f1 + 1);
            local_1c = (undefined2 *******)0x18b3;
            local_1e = (undefined2 *******)0xcbe9;
            local_86 = pppppppuVar6;
            FUN_3ab8_0000();
            if ((undefined2 *******)local_16 != (undefined2 *******)0x0) {
              local_c = (undefined2 ******)0xcbfb;
              local_16 = (undefined2 ******)FUN_3ab8_0163();
            }
            if (local_b2 == 0) {
              local_c = local_86;
              ppppppuStack_e = (undefined2 *******)0x18b3;
              ppppppuStack_10 = (undefined2 *******)0xcc1f;
              func_0x00019287();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029983();
              if ((local_5c & 0x20) != 0) {
                local_b0 = local_be;
                local_ae = local_bc;
                local_be = local_1e;
                local_bc = local_1c;
                func_0x000297e6();
                func_0x00029af6();
                func_0x00029983();
              }
              pppppppuVar9 = (undefined2 *******)0x22b2;
              if ((char)local_26 != '\0') {
                local_c = (undefined2 *******)0x22b2;
                ppppppuStack_e = (undefined2 *******)0xcd00;
                FUN_3ab8_114a();
                local_26 = (undefined2 ******)((uint)local_26 & 0xff00);
              }
              local_22 = local_1e;
              local_20 = local_1c;
              local_c2 = local_be;
              local_c0 = local_bc;
              bVar12 = pppppppuVar6 == (undefined2 *******)0x0;
              pppppppuVar6 = (undefined2 *******)auStack_1f1;
              local_18 = (undefined2 ******)((int)local_18 - (uint)bVar12);
              local_8c = (undefined2 *******)0x0;
              for (local_a0 = 0; ppppppuVar3 = local_86, local_a0 < local_c4;
                  local_a0 = local_a0 + 1) {
                local_1e = local_22;
                local_1c = local_20;
                local_be = local_c2;
                local_bc = local_c0;
                uVar10 = 0x2a75;
                ppppppuStack_e = (undefined2 ******)0xd96b;
                local_c = pppppppuVar9;
                iVar8 = func_0x0002a752();
                if (iVar8 == 1) {
                  local_1f8 = *(undefined2 *)0x9d90;
                  local_1f6 = *(undefined2 *)0x9d92;
                  local_20e = (undefined2 ******)
                              CONCAT11(*(undefined1 *)(local_a0 + (int)ppppppuVar3),
                                       *(undefined1 *)((int)ppppppuVar3 + local_a0 + 1));
                  uVar11 = 0x2a75;
                  local_c = (undefined2 ******)0xd99d;
                  local_210 = (undefined2 ******)FUN_28b3_1e80();
                  if (((undefined2 *******)0x232f < local_210) &&
                     (local_210 < (undefined2 *******)0x237a)) {
                    local_c = (undefined2 ******)0x2a75;
                    uVar11 = 0x22b2;
                    ppppppuStack_e = (undefined2 ******)0xd9bc;
                    iVar8 = func_0x00025bc2();
                    if (iVar8 != 0) {
                      local_210 = local_210 + -0x1180;
                    }
                  }
                  uVar10 = 0x22b2;
                  ppppppuStack_e = (undefined2 ******)0xd9d8;
                  local_c = (undefined2 ******)uVar11;
                  iVar8 = func_0x00025bc2();
                  if (iVar8 != 0) {
                    local_1f8 = *(undefined2 *)0x9d8c;
                    local_1f6 = *(undefined2 *)0x9d8e;
                  }
                  local_a0 = local_a0 + 1;
                }
                else {
                  local_1f8 = *(undefined2 *)0x9d8c;
                  local_1f6 = *(undefined2 *)0x9d8e;
                  local_210 = (undefined2 ******)(uint)*(byte *)(local_a0 + (int)local_86);
                }
                local_c = (undefined2 ******)uVar10;
                if (local_210 < (undefined2 *******)0x100) {
                  puVar17 = (undefined1 *)((int)pppppppuVar6 + -1);
                  local_18 = (undefined2 ******)
                             ((int)local_18 - (uint)(pppppppuVar6 == (undefined2 *******)0x0));
                  if ((int)local_18 < 0) {
                    local_18 = (undefined2 *******)0x0;
                    puVar17 = (undefined1 *)0x0;
                  }
                  ppppppuStack_e = (undefined2 ******)0xd8e3;
                  FUN_1000_0599();
                  local_c = (undefined2 ******)0x49a3;
                  ppppppuStack_e = (undefined2 ******)0xdef;
                  ppppppuStack_10 = (undefined2 ******)0xd8f4;
                  func_0x00012276();
                  local_c = local_86;
                  ppppppuStack_e = (undefined2 *******)0x11f2;
                  pppppppuVar9 = (undefined2 *******)0x18b3;
                  ppppppuStack_10 = (undefined2 *******)0xd907;
                  local_24e = FUN_1885_0406();
                  if (local_24e == 0) {
                    if (*(char *)(param_2 + 0x42c) == '\0') goto LAB_3ab8_2ed0;
                    if (*(char *)(param_2 + 0x402) == '\0') {
                      uVar13 = 0;
                      uVar14 = *(char *)(param_2 + 0x418) == '\0';
                      if ((bool)uVar14) {
                        func_0x00029834();
                        func_0x000297e6();
                        func_0x00029ae7();
                        func_0x00029d78();
                        pppppppuVar9 = (undefined2 *******)0x22b2;
                        FUN_28b3_1181();
                        if ((bool)uVar13 || (bool)uVar14) {
                          func_0x000297e6();
                          func_0x000297e6();
                          pppppppuVar9 = (undefined2 *******)0x22b2;
                          FUN_28b3_1181();
                          if ((bool)uVar13 || (bool)uVar14) goto LAB_3ab8_307b;
                        }
LAB_3ab8_2ed0:
                        local_218 = (undefined2 *****)*(undefined2 *)0x9d88;
                        local_216 = *(undefined2 *)0x9d8a;
                        if (local_1f2 != '\x02') {
                          ppppppuStack_e = (undefined2 *******)0xda73;
                          local_c = pppppppuVar9;
                          FUN_1000_0599();
                          local_c = (undefined2 ******)0xda7e;
                          func_0x00012276();
                          local_1f2 = '\x02';
                        }
                        local_c = (undefined2 ******)0xda8e;
                        local_210 = (undefined2 ******)func_0x00019234();
                        func_0x000297e6();
                        func_0x00029b6d();
                        func_0x00029bb5();
                        func_0x00029983();
                        func_0x000297e6();
                        func_0x00029b6d();
                        func_0x00029bb5();
                        func_0x00029983();
                        pppppppuVar6 = (undefined2 *******)local_4a;
                        local_c = local_bc;
                        ppppppuStack_e = local_be;
                        ppppppuStack_10 = local_1c;
                        ppppppuStack_12 = local_1e;
                        local_14 = local_202;
                        local_16 = local_204;
                        local_18 = local_48;
                        local_1c = local_58;
                        local_1e = local_5a;
                        local_20 = param_2;
                        local_22 = local_8c;
                        local_24 = (undefined2 ******)0x22b2;
                        local_26 = (undefined2 *******)0xdb1d;
                        FUN_3ab8_133d();
                        local_c = (undefined2 ******)0x22b2;
                        ppppppuStack_e = (undefined2 ******)0xdb2f;
                        func_0x000297e6();
                        local_c = (undefined2 ******)0x22b2;
                        ppppppuStack_e = (undefined2 ******)0xdb38;
                        func_0x00029b6d();
                        local_c = (undefined2 ******)0x22b2;
                        ppppppuStack_e = (undefined2 ******)0xdb3f;
                        func_0x00029b6d();
                        local_c = (undefined2 ******)0x22b2;
                        ppppppuStack_e = (undefined2 ******)0xdb48;
                        func_0x00029b6d();
                        local_c = (undefined2 *******)0x22b2;
                        ppppppuStack_e = (undefined2 *******)0xdb4d;
                        func_0x00029d78();
                        local_14 = (undefined2 ******)0x22b2;
                        local_16 = (undefined2 ******)0xdb57;
                        func_0x000299d1();
                        local_14 = (undefined2 ******)0x22b2;
                        local_16 = (undefined2 ******)0xdb60;
                        func_0x000297e6();
                        local_14 = (undefined2 ******)0x22b2;
                        local_16 = (undefined2 ******)0xdb68;
                        func_0x00029b6d();
                        goto LAB_3ab8_2fea;
                      }
                    }
LAB_3ab8_307b:
                    if (local_1f2 != '\x03') {
                      ppppppuStack_e = (undefined2 *******)0xdc0f;
                      local_c = pppppppuVar9;
                      FUN_1000_0599();
                      local_c = (undefined2 *******)0xdc1a;
                      func_0x00012276();
                      local_1f2 = '\x03';
                    }
                    uVar13 = 0;
                    uVar14 = (local_5c & 0x20) == 0;
                    if ((bool)uVar14) {
                      func_0x000297e6();
                    }
                    else {
                      func_0x000297e6();
                      func_0x00029bb5();
                    }
                    func_0x0002996b();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if (!(bool)uVar13) {
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029983();
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar13) {
                      func_0x000297e6();
                      local_c = (undefined2 *******)0xdcb2;
                      func_0x00029bb5();
                      func_0x00029983();
                    }
                    func_0x000297e6();
                    local_c = (undefined2 *******)0xdcce;
                    func_0x00029b6d();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar14) {
                      func_0x000297e6();
                    }
                    else {
                      func_0x000297e6();
                      func_0x000297e6();
                      func_0x00029b6d();
                      FUN_28b3_1172();
                      func_0x00029b6d();
                    }
                    func_0x0002996b();
                    func_0x00029b6d();
                    func_0x00029b6d();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029b6d();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029b6d();
                    func_0x00029b6d();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029bb5();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029bb5();
                    func_0x00029983();
                    if (0 < (int)local_8c) {
                      local_218 = (undefined2 *****)*(undefined2 *)0x9d88;
                      local_216 = *(undefined2 *)0x9d8a;
                      if ((int)local_8c < 5) {
                        func_0x000297e6();
                        local_c = (undefined2 ******)0xde6d;
                        func_0x00029b6d();
                        func_0x00029983();
                      }
                      local_c = local_bc;
                      ppppppuStack_e = local_be;
                      ppppppuStack_10 = local_1c;
                      ppppppuStack_12 = local_1e;
                      local_14 = local_202;
                      local_16 = local_204;
                      local_18 = local_48;
                      local_1c = local_7e;
                      local_1e = local_80;
                      local_20 = local_58;
                      local_22 = local_5a;
                      local_24 = local_246;
                      local_26 = local_252;
                      ppppppuStack_28 = param_2;
                      local_2a = local_8c;
                      local_2c = (undefined2 *******)0x22b2;
                      local_2e = (undefined2 *******)0xdeb8;
                      FUN_3ab8_145d();
                    }
                    if (((uint)param_2[0x6e5] & 0x40) == 0) {
                      func_0x000297e6();
                      func_0x00029d78();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xe3e5;
                      func_0x000299d1();
                      ppppppuStack_10 = param_2 + 0x402;
                      ppppppuStack_12 = (undefined2 ******)0xbf48;
                      local_14 = (undefined2 ******)0x22b2;
                      local_16 = (undefined2 *******)0xe3f5;
                      FUN_21f2_3454();
                      local_c = (undefined2 ******)0xe400;
                      FUN_3ab8_0929();
                      func_0x000297e6();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xe414;
                      func_0x000299d1();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xe41d;
                      func_0x000297e6();
                      local_18 = (undefined2 ******)0x22b2;
                      func_0x000299d1();
                      local_18 = (undefined2 ******)0x22b2;
                      func_0x000297e6();
                      local_18 = (undefined2 ******)0x22b2;
                      func_0x00029d78();
                      local_20 = (undefined2 ******)0x22b2;
                      local_22 = (undefined2 ******)0xe43f;
                      func_0x000299d1();
                      local_20 = (undefined2 ******)0x22b2;
                      local_22 = (undefined2 ******)0xe448;
                      func_0x000297e6();
                      local_20 = (undefined2 ******)0x22b2;
                      local_22 = (undefined2 *******)0xe44d;
                      func_0x00029d78();
                      ppppppuStack_28 = (undefined2 ******)0x22b2;
                      local_2a = (undefined2 ******)0xe457;
                      func_0x000299d1();
                      ppppppuStack_28 = (undefined2 *******)0x22b2;
                      local_2a = (undefined2 *******)0xe460;
                      func_0x000297e6();
                      local_32._2_2_ = (undefined2 *******)0x22b2;
                      local_32._0_2_ = (undefined2 *******)0xe46a;
                      func_0x000299d1();
                      local_32._2_2_ = (undefined2 *******)0x22b2;
                      local_32._0_2_ = (undefined2 *******)0xe473;
                      func_0x000297e6();
                      ppppppuStack_38 = (undefined2 ******)0x22b2;
                      local_3a = 0xe47d;
                      func_0x000299d1();
                      ppppppuStack_38 = param_2 + 0x418;
                      local_3a = 0xbf48;
                      local_3c = 0x22b2;
                      local_3e = (undefined2 ******)0xe48d;
                      FUN_21f2_3454();
                      local_c = (undefined2 ******)0xe498;
                      FUN_3ab8_0929();
                      func_0x000297e6();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xe4ac;
                      func_0x000299d1();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xe4b5;
                      func_0x000297e6();
                      local_18 = (undefined2 ******)0x22b2;
                      func_0x000299d1();
                      local_18 = param_2 + 0x3a6;
                      local_1c = (undefined2 ******)0x22b2;
                      local_1e = (undefined2 ******)0xe4cf;
                      FUN_21f2_3454();
                      local_c = (undefined2 ******)0xe4da;
                      FUN_3ab8_0929();
                      func_0x000297e6();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xe4ee;
                      func_0x000299d1();
                      ppppppuStack_10 = (undefined2 *******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xe4f7;
                      func_0x000297e6();
                      local_18 = (undefined2 ******)0x22b2;
                      func_0x000299d1();
                      local_18 = param_2 + 0x3ba;
                      local_1c = (undefined2 ******)0x22b2;
                      local_1e = (undefined2 ******)0xe511;
                      FUN_21f2_3454();
                      local_c = (undefined2 ******)0xe51c;
                      FUN_3ab8_0929();
                      local_c = (undefined2 ******)0xe52d;
                      func_0x000297e6();
                      local_c = (undefined2 ******)0xe532;
                      func_0x00029d78();
                      ppppppuStack_12 = (undefined2 ******)0x22b2;
                      local_14 = (undefined2 ******)0xe53c;
                      func_0x000299d1();
                      ppppppuStack_12 = (undefined2 ******)0x22b2;
                      local_14 = (undefined2 ******)0xe545;
                      func_0x000297e6();
                      ppppppuStack_12 = (undefined2 *******)0x22b2;
                      local_14 = (undefined2 *******)0xe54a;
                      func_0x00029d78();
                      local_1c = (undefined2 ******)0xe554;
                      func_0x000299d1();
                      pppppppuVar6 = param_2 + 0x42c;
                      local_1c = (undefined2 *******)0xbf48;
                      local_1e = (undefined2 *******)0x22b2;
                      local_20 = (undefined2 *******)0xe564;
                      FUN_21f2_3454();
LAB_3ab8_2d34:
                      pppppppuVar9 = (undefined2 *******)0x22b2;
                      local_c = (undefined2 *******)0xd8bc;
                      FUN_3ab8_0929();
                    }
                    else {
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x0002996b();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x0002996b();
                      func_0x00029983();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x0002996b();
                      func_0x00029b6d();
                      func_0x000297e6();
                      func_0x00029b6d();
                      FUN_28b3_1163();
                      func_0x000297e6();
                      func_0x00029b6d();
                      FUN_28b3_1172();
                      func_0x00029b6d();
                      local_c = (undefined2 ******)0xdf7d;
                      func_0x00029bb5();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x000297e6();
                      func_0x00029b6d();
                      FUN_28b3_117c();
                      func_0x00029b85();
                      func_0x00029b6d();
                      local_c = (undefined2 ******)0xdfce;
                      func_0x00029bb5();
                      func_0x00029983();
                      if ((*(char *)(param_2 + 0x4f6) == '\0') || (((uint)local_210 & 0x80) == 0)) {
                        iVar8 = (int)local_24 * 10;
                        local_c = (undefined2 ******)0xe278;
                        uVar7 = func_0x00019234();
                        local_238 = (undefined2 ******)(uVar7 >> 8);
                        local_23e = (undefined2 ******)(uVar7 & 0xff);
                        ppppppuStack_10 = local_26c;
                        ppppppuStack_12 = local_26e;
                        local_14 = local_270;
                        local_16 = local_272;
                        local_18 = local_274;
                        local_1c = local_278;
                        local_1e = local_27a;
                        local_22 = local_23a;
                        local_24 = local_23c;
                        ppppppuStack_28 = local_232;
                        local_2a = local_234;
                        local_2c = local_236;
                        ppppppuStack_34 = local_20e;
                        local_36 = local_210;
                        ppppppuStack_38 = (undefined2 ******)0x18b3;
                        local_3a = 0xe2f5;
                        local_2e = local_238;
                        local_26 = local_23e;
                        local_20 = local_238;
                        ppppppuStack_e = param_2 + iVar8 + 0x55b;
                        local_c = unaff_DS;
                        local_32 = local_20c;
                        func_0x000297e6();
                        ppppppuStack_38 = (undefined2 *******)0x22b2;
                        local_3a = 0xe2fa;
                        func_0x00029d78();
                        uStack_40 = 0x22b2;
                        local_42 = 0xe304;
                        func_0x000299d1();
                        uStack_40 = 0x22b2;
                        local_42 = 0xe30d;
                        func_0x000297e6();
                        uStack_40 = 0x22b2;
                        local_42 = 0xe312;
                        func_0x00029d78();
                        local_48 = (undefined2 ******)0x22b2;
                        local_4a = (undefined2 ******)0xe31c;
                        func_0x000299d1();
                        local_48 = (undefined2 ******)0x22b2;
                        local_4a = (undefined2 ******)0xe325;
                        func_0x000297e6();
                        local_48 = (undefined2 *******)0x22b2;
                        local_4a = (undefined2 *******)0xe32a;
                        func_0x00029d78();
                        local_50 = 0x22b2;
                        local_52 = 0xe334;
                        func_0x000299d1();
                        local_50 = 0x22b2;
                        local_52 = 0xe33d;
                        func_0x000297e6();
                        local_50 = 0x22b2;
                        local_52 = 0xe342;
                        func_0x00029d78();
                        local_58 = (undefined2 ******)0x22b2;
                        local_5a = (undefined2 ******)0xe34c;
                        func_0x000299d1();
                        local_58 = (undefined2 ******)0x22b2;
                        local_5a = (undefined2 ******)0xe355;
                        func_0x000297e6();
                        local_58 = (undefined2 *******)0x22b2;
                        local_5a = (undefined2 *******)0xe35a;
                        func_0x00029d78();
                        local_60 = 0x22b2;
                        local_62 = 0xe364;
                        func_0x000299d1();
                        local_60 = 0x22b2;
                        local_62 = 0xe36d;
                        func_0x000297e6();
                        local_60 = 0x22b2;
                        local_62 = 0xe372;
                        func_0x00029d78();
                        uStack_68 = 0x22b2;
                        local_6a = 0xe37c;
                        func_0x000299d1();
                        uStack_68 = 0x22b2;
                        local_6a = 0xe385;
                        func_0x000297e6();
                        uStack_68 = 0x22b2;
                        local_6a = 0xe38a;
                        func_0x00029d78();
                        local_70 = (undefined2 ******)0x22b2;
                        local_72 = (undefined2 ******)0xe394;
                        func_0x000299d1();
                        local_70 = (undefined2 ******)0x22b2;
                        local_72 = (undefined2 ******)0xe39d;
                        func_0x000297e6();
                        local_70 = (undefined2 *******)0x22b2;
                        local_72 = (undefined2 *******)0xe3a2;
                        func_0x00029d78();
                        uStack_78 = 0x22b2;
                        local_7a = (undefined2 *****)0xe3ac;
                        func_0x000299d1();
                        uStack_78 = 0x22b2;
                        local_7a = (undefined2 *****)0xe3b5;
                        func_0x000297e6();
                        uStack_78 = 0x22b2;
                        local_7a = (undefined2 ******)0xe3ba;
                        func_0x00029d78();
                        local_80 = (undefined2 ******)0x22b2;
                        ppppppuStack_82 = (undefined2 ******)0xe3c4;
                        func_0x000299d1();
                        local_80 = param_2 + 0x42c;
                        pppppppuVar6 = (undefined2 *******)local_276;
                      }
                      else {
                        iVar8 = (int)local_24 * 10;
                        local_210 = (undefined2 ******)((uint)local_210 & 0x7f);
                        uVar13 = (undefined2 *******)local_210 == (undefined2 *******)0x0;
                        func_0x000297e6();
                        func_0x000297e6();
                        FUN_28b3_1181();
                        if ((bool)uVar13) {
                          func_0x000297e6();
                        }
                        else {
                          func_0x000297e6();
                          func_0x000297e6();
                          func_0x00029b6d();
                          FUN_28b3_1172();
                          func_0x00029b6d();
                        }
                        func_0x0002996b();
                        func_0x00029b6d();
                        func_0x00029b6d();
                        func_0x0002996b();
                        func_0x00029983();
                        func_0x000297e6();
                        func_0x00029b6d();
                        func_0x00029b6d();
                        func_0x0002996b();
                        func_0x00029983();
                        func_0x000297e6();
                        func_0x00029b6d();
                        func_0x00029b6d();
                        func_0x00029b6d();
                        func_0x0002996b();
                        func_0x00029983();
                        func_0x000297e6();
                        func_0x00029b6d();
                        func_0x0002996b();
                        func_0x00029983();
                        ppppppuStack_10 = local_260;
                        ppppppuStack_12 = local_262;
                        local_14 = local_264;
                        local_16 = local_266;
                        local_18 = local_258;
                        local_1c = local_25c;
                        local_1e = local_25e;
                        local_20 = local_274;
                        local_22 = local_276;
                        local_24 = local_278;
                        local_26 = local_27a;
                        ppppppuStack_28 = local_26c;
                        local_2a = local_26e;
                        local_2c = local_270;
                        local_2e = local_272;
                        ppppppuStack_34 = local_20e;
                        local_36 = local_210;
                        ppppppuStack_38 = (undefined2 ******)0x22b2;
                        local_3a = 0xe178;
                        ppppppuStack_e = param_2 + iVar8 + 0x55b;
                        local_c = unaff_DS;
                        local_32 = local_20c;
                        func_0x000297e6();
                        ppppppuStack_38 = (undefined2 *******)0x22b2;
                        local_3a = 0xe17d;
                        func_0x00029d78();
                        uStack_40 = 0x22b2;
                        local_42 = 0xe187;
                        func_0x000299d1();
                        uStack_40 = 0x22b2;
                        local_42 = 0xe190;
                        func_0x000297e6();
                        uStack_40 = 0x22b2;
                        local_42 = 0xe195;
                        func_0x00029d78();
                        local_48 = (undefined2 ******)0x22b2;
                        local_4a = (undefined2 ******)0xe19f;
                        func_0x000299d1();
                        local_48 = (undefined2 ******)0x22b2;
                        local_4a = (undefined2 ******)0xe1a8;
                        func_0x000297e6();
                        local_48 = (undefined2 *******)0x22b2;
                        local_4a = (undefined2 *******)0xe1ad;
                        func_0x00029d78();
                        local_50 = 0x22b2;
                        local_52 = 0xe1b7;
                        func_0x000299d1();
                        local_50 = 0x22b2;
                        local_52 = 0xe1c0;
                        func_0x000297e6();
                        local_50 = 0x22b2;
                        local_52 = 0xe1c5;
                        func_0x00029d78();
                        local_58 = (undefined2 ******)0x22b2;
                        local_5a = (undefined2 ******)0xe1cf;
                        func_0x000299d1();
                        local_58 = (undefined2 ******)0x22b2;
                        local_5a = (undefined2 ******)0xe1d8;
                        func_0x000297e6();
                        local_58 = (undefined2 *******)0x22b2;
                        local_5a = (undefined2 *******)0xe1dd;
                        func_0x00029d78();
                        local_60 = 0x22b2;
                        local_62 = 0xe1e7;
                        func_0x000299d1();
                        local_60 = 0x22b2;
                        local_62 = 0xe1f0;
                        func_0x000297e6();
                        local_60 = 0x22b2;
                        local_62 = 0xe1f5;
                        func_0x00029d78();
                        uStack_68 = 0x22b2;
                        local_6a = 0xe1ff;
                        func_0x000299d1();
                        uStack_68 = 0x22b2;
                        local_6a = 0xe208;
                        func_0x000297e6();
                        uStack_68 = 0x22b2;
                        local_6a = 0xe20d;
                        func_0x00029d78();
                        local_70 = (undefined2 ******)0x22b2;
                        local_72 = (undefined2 ******)0xe217;
                        func_0x000299d1();
                        local_70 = (undefined2 ******)0x22b2;
                        local_72 = (undefined2 ******)0xe220;
                        func_0x000297e6();
                        local_70 = (undefined2 *******)0x22b2;
                        local_72 = (undefined2 *******)0xe225;
                        func_0x00029d78();
                        uStack_78 = 0x22b2;
                        local_7a = (undefined2 *****)0xe22f;
                        func_0x000299d1();
                        uStack_78 = 0x22b2;
                        local_7a = (undefined2 *****)0xe238;
                        func_0x000297e6();
                        uStack_78 = 0x22b2;
                        local_7a = (undefined2 ******)0xe23d;
                        func_0x00029d78();
                        local_80 = (undefined2 ******)0x22b2;
                        ppppppuStack_82 = (undefined2 ******)0xe247;
                        func_0x000299d1();
                        local_80 = param_2 + 0x4f6;
                        pppppppuVar6 = (undefined2 *******)local_25a;
                      }
LAB_3ab8_36cd:
                      pppppppuVar9 = (undefined2 *******)0x22b2;
                      ppppppuStack_82 = param_2;
                      local_84 = 0x22b2;
                      local_86 = (undefined2 *******)0xe255;
                      FUN_3ab8_06dc();
                    }
                    goto LAB_3ab8_3018;
                  }
                  pppppppuVar6 = (undefined2 *******)(puVar17 + -1);
                  local_18 = (undefined2 ******)
                             ((int)local_18 - (uint)(puVar17 == (undefined1 *)0x0));
                  local_8c = (undefined2 ******)(local_24e % 10);
                  local_a0 = local_a0 + 1;
                }
                else {
                  bVar12 = pppppppuVar6 < (undefined2 *******)0x2;
                  pppppppuVar6 = pppppppuVar6 + -1;
                  local_18 = (undefined2 ******)((int)local_18 - (uint)bVar12);
                  if ((int)local_18 < 0) {
                    local_18 = (undefined2 *******)0x0;
                    pppppppuVar6 = (undefined2 *******)0x0;
                  }
                  ppppppuStack_e = (undefined2 ******)0xcd84;
                  FUN_1000_0599();
                  local_c = (undefined2 ******)0x498c;
                  ppppppuStack_e = (undefined2 ******)0xdef;
                  pppppppuVar9 = (undefined2 *******)0x11f2;
                  ppppppuStack_10 = (undefined2 ******)0xcd95;
                  func_0x00012276();
                  local_20c._0_2_ = (undefined2 *******)(uint)(*(char *)(param_2 + 0x491) == '\0');
                  if (*(char *)(param_2 + 0x402) == '\0') {
                    uVar13 = 0;
                    uVar14 = *(char *)(param_2 + 0x418) == '\0';
                    if ((bool)uVar14) {
                      func_0x00029834();
                      func_0x000297e6();
                      func_0x00029ae7();
                      func_0x00029d78();
                      FUN_28b3_1181();
                      if ((bool)uVar13 || (bool)uVar14) {
                        func_0x000297e6();
                        func_0x000297e6();
                        pppppppuVar9 = (undefined2 *******)0x22b2;
                        FUN_28b3_1181();
                        if ((bool)uVar13 || (bool)uVar14) goto LAB_3ab8_227d;
                      }
                      pppppppuVar9 = (undefined2 *******)0x22b2;
                      local_20c._0_2_ = (undefined2 *******)0x1;
                    }
                  }
LAB_3ab8_227d:
                  if (((uint)param_2[0x6e5] & 0x20) == 0) {
                    if (((undefined2 *******)0x2840 < local_210) &&
                       (local_210 < (undefined2 *******)0x3020)) {
                      local_20c._0_2_ = (undefined2 *******)0x1;
                    }
                    if ((undefined2 *******)0x7424 < local_210) {
                      local_20c._0_2_ = (undefined2 *******)0x1;
                    }
                  }
                  local_c = pppppppuVar9;
                  if ((undefined2 *******)local_20c == (undefined2 *******)0x0) {
                    if (local_1f2 != '\x01') {
                      ppppppuStack_e = (undefined2 ******)0xce6d;
                      FUN_1000_0599();
                      pppppppuVar9 = (undefined2 *******)0x11f2;
                      local_c = (undefined2 ******)0xce78;
                      func_0x00012276();
                      local_1f2 = '\x01';
                    }
                  }
                  else if (local_1f2 != '\x02') {
                    ppppppuStack_e = (undefined2 ******)0xce46;
                    FUN_1000_0599();
                    pppppppuVar9 = (undefined2 *******)0x11f2;
                    local_c = (undefined2 ******)0xce51;
                    func_0x00012276();
                    local_1f2 = '\x02';
                  }
                  local_c = &local_210;
                  ppppppuStack_10 = (undefined2 *******)0xce91;
                  ppppppuStack_e = pppppppuVar9;
                  FUN_3ab8_12cd();
                  if ((undefined2 *******)local_20c == (undefined2 *******)0x0) {
                    if ((undefined2 *******)local_210 != (undefined2 *******)0x2121) {
                      func_0x000297e6();
                      func_0x0002996b();
                      FUN_28b3_0ee9();
                      uVar13 = 0;
                      uVar14 = (local_5c & 0x20) == 0;
                      if (!(bool)uVar14) {
                        func_0x000297e6();
                        func_0x00029bb5();
                        func_0x00029983();
                        if (((((undefined2 *******)local_210 == (undefined2 *******)0x213c) ||
                             ((undefined2 *******)local_210 == (undefined2 *******)0x213d)) ||
                            ((undefined2 *******)local_210 == (undefined2 *******)0x2141)) ||
                           (((undefined2 *******)0x2149 < local_210 &&
                            (local_210 < (undefined2 *******)0x215c)))) {
                          local_22c = local_52;
                          local_22a = local_50;
                        }
                        func_0x000297e6();
                        func_0x00029d78();
                        func_0x00029c2c();
                        func_0x0002996b();
                        func_0x00029d78();
                        ppppppuStack_10 = (undefined2 ******)0x22b2;
                        ppppppuStack_12 = (undefined2 ******)0xd044;
                        func_0x000299d1();
                        ppppppuStack_10 = (undefined2 ******)0x22b2;
                        ppppppuStack_12 = (undefined2 ******)0xd049;
                        func_0x0002a11e();
                        func_0x00029834();
                        func_0x00029983();
                        func_0x000297e6();
                        ppppppuStack_10 = (undefined2 ******)0x22b2;
                        ppppppuStack_12 = (undefined2 ******)0xd06e;
                        func_0x000299d1();
                        ppppppuStack_10 = (undefined2 *******)0x22b2;
                        ppppppuStack_12 = (undefined2 *******)0xd073;
                        func_0x0002a10c();
                        uVar13 = (undefined1 *)0xfff7 < &ppppppuStack_e;
                        uVar14 = &stack0x0000 == (undefined1 *)0x6;
                        func_0x00029834();
                        func_0x00029983();
                      }
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if (!(bool)uVar13) {
                        func_0x000297e6();
                        local_c = (undefined2 *******)0xd0b2;
                        func_0x00029b55();
                        func_0x00029983();
                      }
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if ((bool)uVar13) {
                        func_0x000297e6();
                        local_c = (undefined2 *******)0xd0e4;
                        func_0x00029bb5();
                        func_0x00029983();
                      }
                      func_0x000297e6();
                      local_c = (undefined2 *******)0xd100;
                      func_0x00029b6d();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if ((bool)uVar14) {
                        func_0x000297e6();
                      }
                      else {
                        func_0x000297e6();
                        func_0x000297e6();
                        func_0x00029b6d();
                        func_0x00029b6d();
                        FUN_28b3_1172();
                        func_0x00029b6d();
                      }
                      func_0x0002996b();
                      func_0x00029b6d();
                      func_0x00029b6d();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x00029b6d();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x00029b6d();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x00029bb5();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029b6d();
                      func_0x00029bb5();
                      func_0x00029983();
                      if (0 < (int)local_8c) {
                        if ((int)local_8c < 5) {
                          func_0x000297e6();
                          local_c = (undefined2 ******)0xd293;
                          func_0x00029b6d();
                          func_0x00029983();
                          func_0x000297e6();
                          local_c = (undefined2 ******)0xd2ac;
                          func_0x00029b6d();
                          func_0x00029983();
                          local_1f8 = *(undefined2 *)0x9d8c;
                          local_1f6 = *(undefined2 *)0x9d8e;
                        }
                        local_c = local_bc;
                        ppppppuStack_e = local_be;
                        ppppppuStack_10 = local_1c;
                        ppppppuStack_12 = local_1e;
                        local_14 = local_202;
                        local_16 = local_204;
                        local_18 = local_48;
                        local_1c = local_7e;
                        local_1e = local_80;
                        local_20 = local_58;
                        local_22 = local_5a;
                        local_24 = &local_220;
                        local_26 = &local_218;
                        ppppppuStack_28 = param_2;
                        local_2a = local_8c;
                        local_2c = (undefined2 *******)0x22b2;
                        local_2e = (undefined2 *******)0xd306;
                        FUN_3ab8_145d();
                      }
                      if ((local_5c & 0x20) != 0) {
                        if ((((undefined2 *******)local_210 == (undefined2 *******)0x213c) ||
                            ((undefined2 *******)local_210 == (undefined2 *******)0x213d)) ||
                           (((undefined2 *******)local_210 == (undefined2 *******)0x2141 ||
                            (((undefined2 *******)0x2149 < local_210 &&
                             (local_210 < (undefined2 *******)0x215c)))))) {
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
                          func_0x000297e6();
                          func_0x00029b6d();
                          func_0x00029b6d();
                          func_0x00029983();
                          func_0x000297e6();
                          func_0x00029b6d();
                          func_0x00029983();
                        }
                        if (((undefined2 *******)0x2121 < local_210) &&
                           (local_210 < (undefined2 *******)0x2126)) {
                          func_0x000297e6();
                          func_0x00029bb5();
                          func_0x00029b6d();
                          func_0x00029b55();
                          func_0x00029b6d();
                          func_0x00029bb5();
                          func_0x00029983();
                          func_0x000297e6();
                          FUN_28b3_100d();
                          func_0x00029b6d();
                          func_0x00029b55();
                          func_0x00029b6d();
                          func_0x00029bb5();
                          func_0x00029983();
                        }
                      }
                      local_228 = (undefined2 ******)((uint)local_210 >> 8);
                      local_224 = (undefined2 ******)((uint)local_210 & 0xff);
                      local_226 = local_224 + (int)local_228 * 0x32 + -0x650;
                      local_222 = (undefined2 ******)((uint)local_20e >> 8);
                      local_23e = (undefined2 ******)((uint)local_20e & 0xff);
                      if (((uint)param_2[0x6e5] & 0x40) != 0) {
                        local_24a = param_2 + (int)local_24 * 10 + 0x5a1;
                        local_248 = unaff_DS;
                        func_0x000297e6();
                        func_0x00029b6d();
                        func_0x0002996b();
                        func_0x00029983();
                        func_0x000297e6();
                        func_0x00029b6d();
                        func_0x0002996b();
                        func_0x00029983();
                        func_0x000297e6();
                        FUN_28b3_100d();
                        func_0x0002996b();
                        func_0x00029b6d();
                        func_0x000297e6();
                        func_0x00029b6d();
                        FUN_28b3_1163();
                        func_0x00029b85();
                        func_0x00029b6d();
                        local_c = (undefined2 ******)0xd57a;
                        func_0x00029bb5();
                        func_0x00029983();
                        func_0x000297e6();
                        func_0x00029b6d();
                        func_0x000297e6();
                        func_0x00029b6d();
                        FUN_28b3_117c();
                        func_0x00029b85();
                        func_0x00029b6d();
                        local_c = (undefined2 ******)0xd5c6;
                        func_0x00029bb5();
                        func_0x00029983();
                        pppppppuVar6 = (undefined2 *******)local_23a;
                        local_c = local_248;
                        ppppppuStack_e = local_24a;
                        ppppppuStack_10 = local_220;
                        ppppppuStack_12 = local_222;
                        local_14 = local_224;
                        local_16 = local_226;
                        local_18 = local_238;
                        local_1c = local_23c;
                        local_1e = local_23e;
                        local_20 = local_21c;
                        local_22 = local_21e;
                        local_24 = local_220;
                        local_26 = local_222;
                        ppppppuStack_28 = local_21e;
                        local_2a = local_220;
                        local_2c = local_222;
                        local_2e = local_224;
                        local_32._2_2_ = (undefined2 *******)local_222;
                        local_32._0_2_ = (undefined2 *******)local_224;
                        ppppppuStack_34 = local_226;
                        local_36 = local_228;
                        ppppppuStack_38 = (undefined2 ******)0x22b2;
                        local_3a = 0xd635;
                        func_0x000297e6();
                        ppppppuStack_38 = (undefined2 *******)0x22b2;
                        local_3a = 0xd63a;
                        func_0x00029d78();
                        uStack_40 = 0x22b2;
                        local_42 = 0xd644;
                        func_0x000299d1();
                        uStack_40 = 0x22b2;
                        local_42 = 0xd64d;
                        func_0x000297e6();
                        uStack_40 = 0x22b2;
                        local_42 = 0xd652;
                        func_0x00029d78();
                        local_48 = (undefined2 ******)0x22b2;
                        local_4a = (undefined2 ******)0xd65c;
                        func_0x000299d1();
                        local_48 = (undefined2 ******)0x22b2;
                        local_4a = (undefined2 ******)0xd665;
                        func_0x000297e6();
                        local_48 = (undefined2 *******)0x22b2;
                        local_4a = (undefined2 *******)0xd66a;
                        func_0x00029d78();
                        local_50 = 0x22b2;
                        local_52 = 0xd674;
                        func_0x000299d1();
                        local_50 = 0x22b2;
                        local_52 = 0xd67d;
                        func_0x000297e6();
                        local_50 = 0x22b2;
                        local_52 = 0xd682;
                        func_0x00029d78();
                        local_58 = (undefined2 ******)0x22b2;
                        local_5a = (undefined2 ******)0xd68c;
                        func_0x000299d1();
                        local_58 = (undefined2 ******)0x22b2;
                        local_5a = (undefined2 ******)0xd695;
                        func_0x000297e6();
                        local_58 = (undefined2 *******)0x22b2;
                        local_5a = (undefined2 *******)0xd69a;
                        func_0x00029d78();
                        local_60 = 0x22b2;
                        local_62 = 0xd6a4;
                        func_0x000299d1();
                        local_60 = 0x22b2;
                        local_62 = 0xd6ad;
                        func_0x000297e6();
                        local_60 = 0x22b2;
                        local_62 = 0xd6b2;
                        func_0x00029d78();
                        uStack_68 = 0x22b2;
                        local_6a = 0xd6bc;
                        func_0x000299d1();
                        uStack_68 = 0x22b2;
                        local_6a = 0xd6c5;
                        func_0x000297e6();
                        uStack_68 = 0x22b2;
                        local_6a = 0xd6ca;
                        func_0x00029d78();
                        local_70 = (undefined2 ******)0x22b2;
                        local_72 = (undefined2 ******)0xd6d4;
                        func_0x000299d1();
                        local_70 = (undefined2 ******)0x22b2;
                        local_72 = (undefined2 ******)0xd6dd;
                        func_0x000297e6();
                        local_70 = (undefined2 *******)0x22b2;
                        local_72 = (undefined2 *******)0xd6e2;
                        func_0x00029d78();
                        uStack_78 = 0x22b2;
                        local_7a = (undefined2 *****)0xd6ec;
                        func_0x000299d1();
                        uStack_78 = 0x22b2;
                        local_7a = (undefined2 *****)0xd6f5;
                        func_0x000297e6();
                        uStack_78 = 0x22b2;
                        local_7a = (undefined2 ******)0xd6fa;
                        func_0x00029d78();
                        local_80 = (undefined2 ******)0x22b2;
                        ppppppuStack_82 = (undefined2 ******)0xd704;
                        func_0x000299d1();
                        local_80 = param_2 + 0x491;
                        goto LAB_3ab8_36cd;
                      }
                      func_0x000297e6();
                      func_0x00029d78();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xd725;
                      func_0x000299d1();
                      ppppppuStack_10 = param_2 + 0x402;
                      ppppppuStack_12 = (undefined2 ******)0xbf48;
                      local_14 = (undefined2 ******)0x22b2;
                      local_16 = (undefined2 *******)0xd735;
                      FUN_21f2_3454();
                      local_c = (undefined2 ******)0xd740;
                      FUN_3ab8_0929();
                      func_0x000297e6();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xd754;
                      func_0x000299d1();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xd75d;
                      func_0x000297e6();
                      local_18 = (undefined2 ******)0x22b2;
                      func_0x000299d1();
                      local_18 = (undefined2 ******)0x22b2;
                      func_0x000297e6();
                      local_18 = (undefined2 ******)0x22b2;
                      func_0x00029d78();
                      local_20 = (undefined2 ******)0x22b2;
                      local_22 = (undefined2 ******)0xd77f;
                      func_0x000299d1();
                      local_20 = (undefined2 ******)0x22b2;
                      local_22 = (undefined2 ******)0xd788;
                      func_0x000297e6();
                      local_20 = (undefined2 *******)0x22b2;
                      local_22 = (undefined2 ******)0xd78d;
                      func_0x00029d78();
                      ppppppuStack_28 = (undefined2 ******)0x22b2;
                      local_2a = (undefined2 ******)0xd797;
                      func_0x000299d1();
                      ppppppuStack_28 = (undefined2 ******)0x22b2;
                      local_2a = (undefined2 *******)0xd7a0;
                      func_0x000297e6();
                      local_32._2_2_ = (undefined2 *******)0x22b2;
                      local_32._0_2_ = (undefined2 *******)0xd7aa;
                      func_0x000299d1();
                      local_32._2_2_ = (undefined2 *******)0x22b2;
                      local_32._0_2_ = (undefined2 *******)0xd7b3;
                      func_0x000297e6();
                      ppppppuStack_38 = (undefined2 ******)0x22b2;
                      local_3a = 0xd7bd;
                      func_0x000299d1();
                      ppppppuStack_38 = param_2 + 0x418;
                      local_3a = 0xbf48;
                      local_3c = 0x22b2;
                      local_3e = (undefined2 ******)0xd7cd;
                      FUN_21f2_3454();
                      local_c = (undefined2 ******)0xd7d8;
                      FUN_3ab8_0929();
                      func_0x000297e6();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xd7ec;
                      func_0x000299d1();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xd7f5;
                      func_0x000297e6();
                      local_18 = (undefined2 ******)0x22b2;
                      func_0x000299d1();
                      local_18 = param_2 + 0x3d6;
                      local_1c = (undefined2 ******)0x22b2;
                      local_1e = (undefined2 ******)0xd80f;
                      FUN_21f2_3454();
                      local_c = (undefined2 ******)0xd81a;
                      FUN_3ab8_0929();
                      func_0x000297e6();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xd82e;
                      func_0x000299d1();
                      ppppppuStack_10 = (undefined2 ******)0x22b2;
                      ppppppuStack_12 = (undefined2 ******)0xd837;
                      func_0x000297e6();
                      local_18 = (undefined2 ******)0x22b2;
                      func_0x000299d1();
                      local_18 = param_2 + 0x3ea;
                      local_1c = (undefined2 ******)0x22b2;
                      local_1e = (undefined2 *******)0xd851;
                      FUN_21f2_3454();
                      local_c = (undefined2 ******)0xd85c;
                      FUN_3ab8_0929();
                      local_c = local_226;
                      ppppppuStack_e = local_224;
                      ppppppuStack_10 = local_228;
                      ppppppuStack_12 = (undefined2 ******)0x22b2;
                      local_14 = (undefined2 ******)0xd87a;
                      func_0x000297e6();
                      ppppppuStack_12 = (undefined2 *******)0x22b2;
                      local_14 = (undefined2 *******)0xd87f;
                      func_0x00029d78();
                      local_1c = (undefined2 ******)0xd889;
                      func_0x000299d1();
                      local_1c = (undefined2 ******)0xd892;
                      func_0x000297e6();
                      pppppppuVar6 = (undefined2 *******)0x22b2;
                      local_1c = (undefined2 *******)0xd897;
                      func_0x00029d78();
                      local_22 = (undefined2 ******)0x22b2;
                      local_24 = (undefined2 ******)0xd8a1;
                      func_0x000299d1();
                      local_22 = param_2 + 0x491;
                      local_24 = (undefined2 *******)0xbf48;
                      local_26 = (undefined2 *******)0x22b2;
                      ppppppuStack_28 = (undefined2 *******)0xd8b1;
                      FUN_21f2_3454();
                      goto LAB_3ab8_2d34;
                    }
                  }
                  else {
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029bb5();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x00029bb5();
                    func_0x00029983();
                    pppppppuVar6 = (undefined2 *******)local_4a;
                    if ((0 < (int)local_8c) && ((int)local_8c < 5)) {
                      local_1f8 = *(undefined2 *)0x9d8c;
                      local_1f6 = *(undefined2 *)0x9d8e;
                    }
                    local_c = local_bc;
                    ppppppuStack_e = local_be;
                    ppppppuStack_10 = local_1c;
                    ppppppuStack_12 = local_1e;
                    local_14 = local_202;
                    local_16 = local_204;
                    local_18 = local_48;
                    local_1c = local_58;
                    local_1e = local_5a;
                    local_20 = param_2;
                    local_22 = local_8c;
                    local_24 = (undefined2 ******)0x22b2;
                    local_26 = (undefined2 *******)0xcf3d;
                    FUN_3ab8_133d();
                    local_c = (undefined2 ******)0x22b2;
                    ppppppuStack_e = (undefined2 ******)0xcf4f;
                    func_0x000297e6();
                    local_c = (undefined2 ******)0x22b2;
                    ppppppuStack_e = (undefined2 ******)0xcf58;
                    func_0x00029b6d();
                    local_c = (undefined2 ******)0x22b2;
                    ppppppuStack_e = (undefined2 ******)0xcf64;
                    func_0x00029b6d();
                    local_c = (undefined2 ******)0x22b2;
                    ppppppuStack_e = (undefined2 ******)0xcf6d;
                    func_0x00029b6d();
                    local_c = (undefined2 *******)0x22b2;
                    ppppppuStack_e = (undefined2 *******)0xcf72;
                    func_0x00029d78();
                    local_14 = (undefined2 ******)0x22b2;
                    local_16 = (undefined2 ******)0xcf7c;
                    func_0x000299d1();
                    local_14 = (undefined2 ******)0x22b2;
                    local_16 = (undefined2 ******)0xcf85;
                    func_0x000297e6();
                    local_14 = (undefined2 ******)0x22b2;
                    local_16 = (undefined2 ******)0xcf8d;
                    func_0x00029b6d();
LAB_3ab8_2fea:
                    local_14 = (undefined2 ******)0x22b2;
                    local_16 = (undefined2 ******)0xdb6f;
                    func_0x00029b6d();
                    local_14 = (undefined2 *******)0x22b2;
                    local_16 = (undefined2 *******)0xdb74;
                    func_0x00029d78();
                    local_1c = (undefined2 ******)0x22b2;
                    pppppppuVar9 = (undefined2 *******)0x22b2;
                    local_1e = (undefined2 ******)0xdb7e;
                    func_0x000299d1();
                    local_1c = local_210;
                    local_1e = (undefined2 ******)((local_5c & 0x20) >> 5);
                    local_20 = (undefined2 *******)0x1;
                    local_22 = (undefined2 *******)0x22b2;
                    local_24 = (undefined2 *******)0xdb95;
                    func_0x00032660();
                  }
LAB_3ab8_3018:
                  if ((int)local_8c < 4) {
                    func_0x000297e6();
                    func_0x00029b6d();
                    local_c = (undefined2 ******)0xdbba;
                    func_0x00029bb5();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029b6d();
                    local_c = (undefined2 *******)0xdbdc;
                    func_0x00029bb5();
                    pppppppuVar9 = (undefined2 *******)0x22b2;
                    func_0x00029983();
                    local_1fc = local_1f8;
                    local_1fa = local_1f6;
                  }
                  local_8c = (undefined2 *******)0x0;
                }
              }
              goto LAB_3ab8_1718;
            }
          }
          local_c = (undefined2 *******)0xc302;
          iVar8 = func_0x00024ce4();
          bVar12 = pppppppuVar6 < (undefined2 *******)(iVar8 + 1U);
          pppppppuVar6 = (undefined2 *******)((int)pppppppuVar6 - (int)(iVar8 + 1U));
          local_18 = (undefined2 ******)((int)local_18 - (uint)bVar12);
        }
LAB_3ab8_1718:
      }
    }
  }
  return;
}



/* 3ab8:3a0b  FUN_3ab8_3a0b  185 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_3a0b(int param_1)

{
  undefined2 unaff_DS;
  int local_c;
  undefined2 uVar1;
  
  FUN_21f2_0ebc();
  uVar1 = *(undefined2 *)0x9d92;
  if (0xd < param_1) {
    uVar1 = *(undefined2 *)0x9d86;
  }
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    if (((1 < local_c) && (local_c != 4)) && (local_c != 6)) {
      func_0x000297e6(0x22b2);
      func_0x00029af6(0x22b2);
      func_0x00029983(0x22b2);
    }
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x00029c2c(0x22b2);
    func_0x00029983(0x22b2);
  }
  FUN_28b3_0d8b(0x22b2,uVar1);
  func_0x00029983(0x22b2);
  return 7;
}



/* 3ab8:3ac4  FUN_3ab8_3ac4  150 bytes, 1 callers */

void __cdecl16far FUN_3ab8_3ac4(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined1 local_54 [68];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  uint uStack_8;
  int *piStack_6;
  
  piStack_6 = (int *)0xe64f;
  FUN_21f2_0ebc();
  if (*(char *)(param_1 + 0xd4a) == '\0') {
    return;
  }
  piStack_6 = (int *)0x49ba;
  uStack_a = 0x22b2;
  puStack_c = (undefined1 *)0xe66b;
  uStack_8 = param_1 + 0xd4a;
  piVar3 = (int *)FUN_21f2_1348();
  uStack_8 = 0x22b2;
  if (piVar3 != (int *)0x0) goto LAB_3ab8_3b13;
  uStack_8 = 0x568;
  uStack_a = 0x49bd;
  puStack_c = local_54;
  uStack_e = 0x22b2;
  uVar6 = 0x22b2;
  uStack_10 = 0xe686;
  piStack_6 = (int *)(param_1 + 0xd4a);
  FUN_21f2_3454();
  piStack_6 = (int *)local_54;
  do {
    uStack_a = 0xe692;
    uStack_8 = uVar6;
    FUN_13bf_0a03();
    uStack_8 = 0x11f2;
LAB_3ab8_3b13:
    do {
      piVar1 = piVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        uVar6 = 0x22b2;
        uStack_a = 0xe6b0;
        piStack_6 = piVar3;
        uVar4 = func_0x00023414();
      }
      else {
        pbVar2 = (byte *)*piVar3;
        *piVar3 = *piVar3 + 1;
        uVar4 = (uint)*pbVar2;
        uVar6 = uStack_8;
      }
      if (uVar4 == 0xffff) {
        uStack_a = 0xe6d4;
        uStack_8 = uVar6;
        piStack_6 = piVar3;
        FUN_21f2_1262();
        return;
      }
      piStack_6 = (int *)*(undefined2 *)0xd70;
      puStack_c = (undefined1 *)0xe6c2;
      uStack_a = uVar6;
      uStack_8 = uVar4;
      iVar5 = FUN_3ab8_0405();
      uStack_8 = uVar6;
    } while (iVar5 != -1);
    piStack_6 = (int *)0x492a;
  } while( true );
}



/* 3ab8:3b5a  FUN_3ab8_3b5a  881 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x00031c65) */

undefined2 FUN_3ab8_3b5a(undefined2 param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 extraout_DX;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined1 uVar9;
  int iStack_4c;
  uint uStack_18;
  uint uStack_16;
  uint uStack_12;
  uint uStack_10;
  uint uStack_e;
  
  FUN_21f2_0ebc();
  func_0x000257c0();
  if (param_2 == 0) {
    func_0x0000c340();
    func_0x00012276();
    func_0x00010526();
    uStack_e = 0xe77c;
    FUN_1000_0599();
    uStack_e = 0xdef;
    uStack_10 = 0xe78d;
    func_0x00012276();
  }
  else {
    func_0x0000c3ca();
  }
  if ((*(byte *)(param_3 + 0xdca) & 0x40) == 0) {
    uStack_e = 0xe7d1;
    FUN_21f2_3454();
    FUN_3ab8_0929();
  }
  else {
    func_0x000297e6();
    func_0x00029d78();
    uStack_10 = 0x22b2;
    func_0x000299d1();
    uStack_10 = param_3;
    FUN_3ab8_06dc();
  }
  func_0x000297e6();
  func_0x00029d78();
  FUN_28b3_0f51();
  func_0x000121f9();
  cVar2 = FUN_12c1_009c();
  if (cVar2 != '\x1b') {
    if ((*(byte *)(param_3 + 0xdca) & 0x40) == 0) {
      uStack_e = 0xe8c0;
      FUN_21f2_3454();
      FUN_3ab8_0929();
      uStack_e = 0xe8db;
      FUN_21f2_3454();
      FUN_3ab8_0929();
      uStack_e = -0x170a;
      FUN_21f2_3454();
      FUN_3ab8_0929();
    }
    else {
      uStack_e = param_3 + 0x1e8;
      uStack_10 = 0x11f2;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1();
      func_0x000297e6();
      uStack_18 = 0x22b2;
      func_0x00029d78();
      func_0x000299d1();
      func_0x000297e6();
      func_0x00029d78();
      func_0x000299d1();
      func_0x000297e6();
      func_0x00029d78();
      func_0x000299d1();
      FUN_3ab8_06dc();
      FUN_3ab8_3ac4();
    }
    cVar2 = (char)(param_3 >> 8);
    if ((*(byte *)(param_3 + 0xdca) & 0x40) == 0) {
      func_0x000297e6();
      func_0x00029d78();
      uStack_10 = 0x22b2;
      func_0x000299d1();
      uStack_10 = CONCAT11(cVar2 + '\x03',(char)param_3);
      uStack_12 = 0xbf48;
      uStack_16 = 0xe95e;
      FUN_21f2_3454();
      FUN_3ab8_0929();
    }
    else {
      func_0x000297e6();
      func_0x00029d78();
      uStack_10 = 0x22b2;
      func_0x000299d1();
      uStack_10 = CONCAT11(cVar2 + '\x03',(char)param_3);
      uStack_12 = param_3;
      uStack_16 = 0xe931;
      FUN_3ab8_06dc();
    }
    if (param_2 == 0) {
      func_0x0000daa6();
      FUN_32b2_6e63();
      if ((uStack_18 != 0x22b2) || (uStack_16 != uStack_12)) {
        uStack_e = param_3;
        uStack_10 = param_2;
        FUN_2bb4_5bf3();
        uVar8 = (undefined1 *)0xfff3 < &uStack_10;
        uVar9 = &stack0x0000 == (undefined1 *)0x4;
        FUN_32b2_6d14();
        FUN_32b2_6d14();
        FUN_32b2_7191();
        if ((bool)uVar8 || (bool)uVar9) {
          FUN_32b2_6d14();
          FUN_32b2_6e63();
        }
        else {
          FUN_32b2_6d14();
          FUN_32b2_6e63();
        }
        FUN_32b2_6d14();
        FUN_32b2_6e63();
        FUN_32b2_6d14();
        FUN_32b2_6d14();
        FUN_32b2_7191();
        if ((bool)uVar8 || (bool)uVar9) {
          FUN_32b2_6d14();
          FUN_32b2_6e63();
        }
        else {
          FUN_32b2_6d14();
          FUN_32b2_6e63();
        }
        FUN_32b2_6d14();
        FUN_32b2_6e63();
        iVar6 = uStack_e + uStack_16 + (uint)CARRY2(uStack_10,uStack_18);
        uVar3 = FUN_2bb4_63ae();
        iVar7 = uStack_e + 0x32b2 + (uint)(0xe4e1 < uStack_10);
        uVar4 = FUN_2bb4_63ae();
        for (iStack_4c = 0; iStack_4c < 0x10f; iStack_4c = iStack_4c + 0x5a) {
          if ((((iVar7 < iVar6) || ((iVar7 <= iVar6 && (uVar4 <= uVar3)))) ||
              ((iVar6 <= iStack_4c &&
               (((iVar6 < iStack_4c || (uVar3 == 0)) &&
                ((iStack_4c < iVar7 || (iStack_4c <= iVar7)))))))) &&
             ((iVar6 < iVar7 ||
              (((((iVar6 <= iVar7 && (uVar3 <= uVar4)) || (iVar6 < iStack_4c)) ||
                ((iVar6 <= iStack_4c && (uVar3 == 0)))) ||
               ((iStack_4c < iVar7 || (iStack_4c <= iVar7)))))))) {
            if (iStack_4c == 0) {
              FUN_32b2_6cc6();
              FUN_32b2_7095();
              FUN_32b2_6e63();
            }
            if (iStack_4c == 0x5a) {
              FUN_32b2_6cc6();
              FUN_32b2_7095();
              FUN_32b2_6e63();
            }
            if (iStack_4c == 0xb4) {
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_6e63();
            }
            if (iStack_4c == 0x10e) {
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_6e63();
            }
          }
        }
        return 1;
      }
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6e63();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6e63();
      FUN_32b2_6cc6();
    }
    else {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
      in(extraout_DX);
    }
    FUN_32b2_7095();
    FUN_32b2_6e63();
    FUN_32b2_6cc6();
    FUN_32b2_7095();
    FUN_32b2_6e63();
    return 0;
  }
  *(undefined2 *)0xa4a = 1;
  uVar5 = FUN_2bb4_5f95();
  return uVar5;
}



/* 3ab8:3ed1  FUN_3ab8_3ed1  249 bytes, 1 callers */

void FUN_3ab8_3ed1(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int unaff_BP;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar13;
  
  uVar12 = 0x3ab8;
  if (*(char *)(unaff_BP + -2) != '\0') {
    *(undefined1 *)(unaff_BP + -2) = 0;
    FUN_1000_0599(0x3ab8,0x41,1);
    uVar12 = 0x11f2;
    func_0x00012276(0xdef,0x49d0);
  }
  if ((*(byte *)(unaff_BP + -0xe2) & 7) == 0) {
    cVar7 = FUN_12c1_009c();
    if (cVar7 == '\x1b') {
      *(undefined2 *)0xa4a = 1;
      FUN_2bb4_5f95();
      return;
    }
    FUN_1000_0599(0x11f2,0x2d,1);
    uVar12 = 0x11f2;
    func_0x00012276(0xdef,0x49d3,*(undefined2 *)(unaff_BP + -6),*(undefined2 *)(unaff_BP + -4));
  }
  uVar6 = *(undefined2 *)(unaff_BP + -0x24);
  *(undefined2 *)(unaff_BP + -0xda) = *(undefined2 *)(unaff_BP + -0x26);
  *(undefined2 *)(unaff_BP + -0xd8) = uVar6;
  uVar6 = *(undefined2 *)(unaff_BP + -0x1c);
  *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x1e);
  *(undefined2 *)(unaff_BP + -0x15a) = uVar6;
  if (*(int *)(unaff_BP + -0xd8) < 0) {
    iVar8 = -*(int *)(unaff_BP + -0xda);
    iVar9 = -((*(uint *)(unaff_BP + -0xd8) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0xda) != 0));
  }
  else {
    iVar8 = *(int *)(unaff_BP + -0xda);
    iVar9 = *(int *)(unaff_BP + -0xd8);
  }
  *(int *)(unaff_BP + -0x94) = iVar8;
  *(int *)(unaff_BP + -0x92) = iVar9;
  if (*(int *)(unaff_BP + -0x15a) < 0) {
    iVar8 = -*(int *)(unaff_BP + -0x15c);
    iVar9 = -((*(uint *)(unaff_BP + -0x15a) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0x15c) != 0));
  }
  else {
    iVar8 = *(int *)(unaff_BP + -0x15c);
    iVar9 = *(int *)(unaff_BP + -0x15a);
  }
  *(int *)(unaff_BP + -0xa8) = iVar8;
  *(int *)(unaff_BP + -0xa6) = iVar9;
  iVar8 = *(int *)(unaff_BP + -0xba);
  if (iVar8 < *(int *)(unaff_BP + -0x92)) {
    FUN_3ab8_404b();
    return;
  }
  if ((iVar8 <= *(int *)(unaff_BP + -0x92)) &&
     (*(uint *)(unaff_BP + -0xbc) <= *(uint *)(unaff_BP + -0x94))) {
    FUN_3ab8_404b();
    return;
  }
  if (iVar8 < *(int *)(unaff_BP + -0xa6)) {
    FUN_3ab8_404b();
    return;
  }
  if ((iVar8 <= *(int *)(unaff_BP + -0xa6)) &&
     (*(uint *)(unaff_BP + -0xbc) <= *(uint *)(unaff_BP + -0xa8))) {
    FUN_3ab8_404b();
    return;
  }
  while( true ) {
    puVar2 = (uint *)(unaff_BP + -0xe2);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0xe0) = *(int *)(unaff_BP + -0xe0) + (uint)(0xfffe < uVar3);
    if (*(int *)(unaff_BP + 0xc) < *(int *)(unaff_BP + -0xe0)) {
      FUN_3ab8_514d();
      return;
    }
    if ((*(int *)(unaff_BP + 0xc) <= *(int *)(unaff_BP + -0xe0)) &&
       (*(uint *)(unaff_BP + 10) < *(uint *)(unaff_BP + -0xe2))) break;
    puVar13 = (undefined2 *)
              func_0x0000013f(uVar12,*(undefined2 *)(unaff_BP + -0xe2),
                              *(undefined2 *)(unaff_BP + -0xe0));
    puVar10 = (undefined2 *)puVar13;
    puVar11 = (undefined2 *)(unaff_BP + -0x26);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar11;
      puVar11 = puVar11 + 1;
      puVar4 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar5 = *puVar4;
    }
    uVar12 = 0;
    if ((uint)*(byte *)(unaff_BP + -0x15) == *(uint *)(unaff_BP + -0x42)) {
      piVar1 = (int *)(unaff_BP + -6);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) - (uint)(iVar8 == 0);
      uVar12 = 0x11f2;
      iVar8 = FUN_10ad_1ad0(0,*(undefined1 *)(unaff_BP + -0x14));
      if ((((iVar8 != 0) && (*(char *)(unaff_BP + -0x16) != '\0')) &&
          (*(byte *)(unaff_BP + -0x16) < 0x13)) &&
         ((*(char *)(unaff_BP + -0x16) != '\t' && (*(char *)(unaff_BP + -0x16) != '\n')))) {
        FUN_3ab8_3ed1();
        return;
      }
    }
  }
  FUN_3ab8_514d();
  return;
}



/* 3ab8:3fca  FUN_3ab8_3fca  129 bytes, 2 callers */

void FUN_3ab8_3fca(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 *puVar10;
  
  uVar9 = 0x3ab8;
  while( true ) {
    puVar2 = (uint *)(unaff_BP + -0xe2);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0xe0) = *(int *)(unaff_BP + -0xe0) + (uint)(0xfffe < uVar3);
    if (*(int *)(unaff_BP + 0xc) < *(int *)(unaff_BP + -0xe0)) {
      FUN_3ab8_514d();
      return;
    }
    if ((*(int *)(unaff_BP + 0xc) <= *(int *)(unaff_BP + -0xe0)) &&
       (*(uint *)(unaff_BP + 10) < *(uint *)(unaff_BP + -0xe2))) break;
    puVar10 = (undefined2 *)
              func_0x0000013f(uVar9,*(undefined2 *)(unaff_BP + -0xe2),
                              *(undefined2 *)(unaff_BP + -0xe0));
    puVar7 = (undefined2 *)puVar10;
    puVar8 = (undefined2 *)(unaff_BP + -0x26);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar5 = puVar8;
      puVar8 = puVar8 + 1;
      puVar4 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar5 = *puVar4;
    }
    uVar9 = 0;
    if ((uint)*(byte *)(unaff_BP + -0x15) == *(uint *)(unaff_BP + -0x42)) {
      piVar1 = (int *)(unaff_BP + -6);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) - (uint)(iVar6 == 0);
      uVar9 = 0x11f2;
      iVar6 = FUN_10ad_1ad0(0,*(undefined1 *)(unaff_BP + -0x14));
      if ((((iVar6 != 0) && (*(char *)(unaff_BP + -0x16) != '\0')) &&
          (*(byte *)(unaff_BP + -0x16) < 0x13)) &&
         ((*(char *)(unaff_BP + -0x16) != '\t' && (*(char *)(unaff_BP + -0x16) != '\n')))) {
        FUN_3ab8_3ed1();
        return;
      }
    }
  }
  FUN_3ab8_514d();
  return;
}



/* 3ab8:404b  FUN_3ab8_404b  3142 bytes, 1 callers */

void FUN_3ab8_404b(void)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int unaff_BP;
  int iVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  int iStack_8;
  undefined2 uStack_6;
  int iStack_4;
  int iStack_2;
  
  uVar8 = 0x3ab8;
  if ((*(int *)(unaff_BP + -0x152) <= *(int *)(unaff_BP + -0x92)) &&
     ((*(int *)(unaff_BP + -0x152) < *(int *)(unaff_BP + -0x92) ||
      (*(uint *)(unaff_BP + -0x154) < *(uint *)(unaff_BP + -0x94))))) {
    if (*(int *)(unaff_BP + -0x152) <= *(int *)(unaff_BP + -0xa6)) {
      if (*(int *)(unaff_BP + -0x152) < *(int *)(unaff_BP + -0xa6)) {
        FUN_3ab8_3fca();
        return;
      }
      if (*(uint *)(unaff_BP + -0x154) < *(uint *)(unaff_BP + -0xa8)) {
        FUN_3ab8_3fca();
        return;
      }
    }
  }
  uVar2 = *(undefined2 *)(unaff_BP + -0x20);
  *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x22);
  *(undefined2 *)(unaff_BP + -0x15e) = uVar2;
  uVar2 = *(undefined2 *)(unaff_BP + -0x18);
  *(undefined2 *)(unaff_BP + -0x17c) = *(undefined2 *)(unaff_BP + -0x1a);
  *(undefined2 *)(unaff_BP + -0x17a) = uVar2;
  if (*(int *)(unaff_BP + -0x15e) < 0) {
    iVar7 = -*(int *)(unaff_BP + -0x160);
    iVar6 = -((*(uint *)(unaff_BP + -0x15e) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0x160) != 0));
  }
  else {
    iVar7 = *(int *)(unaff_BP + -0x160);
    iVar6 = *(int *)(unaff_BP + -0x15e);
  }
  *(int *)(unaff_BP + -0xac) = iVar7;
  *(int *)(unaff_BP + -0xaa) = iVar6;
  if (*(int *)(unaff_BP + -0x17a) < 0) {
    iVar7 = -*(int *)(unaff_BP + -0x17c);
    iVar6 = -((*(uint *)(unaff_BP + -0x17a) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0x17c) != 0));
  }
  else {
    iVar7 = *(int *)(unaff_BP + -0x17c);
    iVar6 = *(int *)(unaff_BP + -0x17a);
  }
  *(int *)(unaff_BP + -0xb4) = iVar7;
  *(int *)(unaff_BP + -0xb2) = iVar6;
  iVar7 = *(int *)(unaff_BP + -0xcc);
  if ((*(int *)(unaff_BP + -0xaa) <= iVar7) &&
     (((*(int *)(unaff_BP + -0xaa) < iVar7 ||
       (*(uint *)(unaff_BP + -0xac) < *(uint *)(unaff_BP + -0xce))) &&
      (*(int *)(unaff_BP + -0xb2) <= iVar7)))) {
    if (*(int *)(unaff_BP + -0xb2) < iVar7) {
      FUN_3ab8_3fca();
      return;
    }
    if (*(uint *)(unaff_BP + -0xb4) < *(uint *)(unaff_BP + -0xce)) {
      FUN_3ab8_3fca();
      return;
    }
  }
  iVar7 = *(int *)(unaff_BP + -0x16e);
  if (((iVar7 <= *(int *)(unaff_BP + -0xaa)) &&
      ((iVar7 < *(int *)(unaff_BP + -0xaa) ||
       (*(uint *)(unaff_BP + -0x170) < *(uint *)(unaff_BP + -0xac))))) &&
     (iVar7 <= *(int *)(unaff_BP + -0xb2))) {
    if (iVar7 < *(int *)(unaff_BP + -0xb2)) {
      FUN_3ab8_3fca();
      return;
    }
    if (*(uint *)(unaff_BP + -0x170) < *(uint *)(unaff_BP + -0xb4)) {
      FUN_3ab8_3fca();
      return;
    }
  }
  if (((*(int *)(unaff_BP + -0xa8) == *(int *)(unaff_BP + -0x94)) &&
      (*(int *)(unaff_BP + -0xa6) == *(int *)(unaff_BP + -0x92))) &&
     ((*(int *)(unaff_BP + -0xac) == *(int *)(unaff_BP + -0xb4) &&
      (*(int *)(unaff_BP + -0xaa) == *(int *)(unaff_BP + -0xb2))))) {
    FUN_3ab8_3fca();
    return;
  }
  iVar7 = *(int *)(unaff_BP + -0xba);
  if ((*(int *)(unaff_BP + -0x92) < iVar7) ||
     ((((*(int *)(unaff_BP + -0x92) <= iVar7 &&
        (*(uint *)(unaff_BP + -0x94) < *(uint *)(unaff_BP + -0xbc))) ||
       (*(int *)(unaff_BP + -0xa6) < iVar7)) ||
      ((*(int *)(unaff_BP + -0xa6) <= iVar7 &&
       (*(uint *)(unaff_BP + -0xa8) < *(uint *)(unaff_BP + -0xbc))))))) {
LAB_3ab8_4216:
    uVar3 = *(uint *)(unaff_BP + -0x92);
    uVar4 = *(uint *)(unaff_BP + -0xa6);
    uVar9 = uVar4 < uVar3;
    uVar10 = uVar4 == uVar3;
    if ((int)uVar4 <= (int)uVar3) {
      if ((int)uVar3 <= (int)uVar4) {
        uVar9 = *(uint *)(unaff_BP + -0xa8) < *(uint *)(unaff_BP + -0x94);
        uVar10 = *(uint *)(unaff_BP + -0xa8) == *(uint *)(unaff_BP + -0x94);
        if (!(bool)uVar9) goto LAB_3ab8_429e;
      }
      iStack_2 = 0x3ab8;
      iStack_4 = 0xedb5;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xedba;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0xedc3;
      func_0x000299d1();
      uVar8 = *(undefined2 *)(unaff_BP + -0x15a);
      *(undefined2 *)(unaff_BP + -0xda) = *(undefined2 *)(unaff_BP + -0x15c);
      *(undefined2 *)(unaff_BP + -0xd8) = uVar8;
      iStack_2 = 0x22b2;
      iStack_4 = 0xeddc;
      func_0x00029834();
      iStack_2 = 0x22b2;
      iStack_4 = 0xede5;
      func_0x00029983();
      iStack_2 = 0x22b2;
      iStack_4 = 0xedee;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xedf3;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0xedfc;
      func_0x000299d1();
      uVar8 = *(undefined2 *)(unaff_BP + -0x17a);
      *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x17c);
      *(undefined2 *)(unaff_BP + -0x15e) = uVar8;
      iStack_2 = 0x22b2;
      iStack_4 = 0xee15;
      func_0x00029834();
      iStack_2 = 0x22b2;
      uVar8 = 0x22b2;
      iStack_4 = 0xee1e;
      func_0x00029983();
    }
LAB_3ab8_429e:
    iStack_4 = 0xee27;
    iStack_2 = uVar8;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xee30;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xee35;
    FUN_28b3_1181();
    if (!(bool)uVar9 && !(bool)uVar10) {
      iStack_2 = 0x22b2;
      iStack_4 = 0xee40;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xee49;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xee52;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xee5b;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xee60;
      FUN_28b3_1172();
      iStack_2 = 0x22b2;
      iStack_4 = 0xee69;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xee72;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xee77;
      func_0x00029c9d();
      iStack_2 = unaff_BP + -0x160;
      iStack_4 = 0x22b2;
      uStack_6 = 0xee81;
      func_0x00029bb5();
      iStack_2 = 0x22b2;
      iStack_4 = 0xee87;
      func_0x00029983();
      uVar8 = *(undefined2 *)(unaff_BP + -0x1a0);
      *(undefined2 *)(unaff_BP + -0xda) = *(undefined2 *)(unaff_BP + -0x1a2);
      *(undefined2 *)(unaff_BP + -0xd8) = uVar8;
    }
    iStack_2 = 0x22b2;
    iStack_4 = 0xeea0;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xeea9;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xeeae;
    FUN_28b3_1181();
    if ((bool)uVar9) {
      iStack_2 = 0x22b2;
      iStack_4 = 0xeeb9;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xeec2;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xeecb;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xeed4;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xeed9;
      FUN_28b3_1172();
      iStack_2 = 0x22b2;
      iStack_4 = 0xeee2;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xeeeb;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xeef0;
      func_0x00029c9d();
      iStack_2 = unaff_BP + -0x17c;
      iStack_4 = 0x22b2;
      uStack_6 = 0xeefa;
      func_0x00029b55();
      iStack_2 = 0x22b2;
      iStack_4 = 0xef00;
      func_0x00029983();
      uVar8 = *(undefined2 *)(unaff_BP + -0x1b6);
      *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x1b8);
      *(undefined2 *)(unaff_BP + -0x15a) = uVar8;
    }
    if (*(int *)(unaff_BP + -0x15e) < 0) {
      iVar7 = -*(int *)(unaff_BP + -0x160);
      iVar6 = -((*(uint *)(unaff_BP + -0x15e) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0x160) != 0));
    }
    else {
      iVar7 = *(int *)(unaff_BP + -0x160);
      iVar6 = *(int *)(unaff_BP + -0x15e);
    }
    *(int *)(unaff_BP + -0xac) = iVar7;
    *(int *)(unaff_BP + -0xaa) = iVar6;
    if (*(int *)(unaff_BP + -0x17a) < 0) {
      iVar7 = -*(int *)(unaff_BP + -0x17c);
      iVar6 = -((*(uint *)(unaff_BP + -0x17a) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0x17c) != 0));
    }
    else {
      iVar7 = *(int *)(unaff_BP + -0x17c);
      iVar6 = *(int *)(unaff_BP + -0x17a);
    }
    *(int *)(unaff_BP + -0xb4) = iVar7;
    *(int *)(unaff_BP + -0xb2) = iVar6;
    iVar7 = *(int *)(unaff_BP + -0xcc);
    if ((*(int *)(unaff_BP + -0xaa) <= iVar7) &&
       (((*(int *)(unaff_BP + -0xaa) < iVar7 ||
         (*(uint *)(unaff_BP + -0xac) < *(uint *)(unaff_BP + -0xce))) &&
        (*(int *)(unaff_BP + -0xb2) <= iVar7)))) {
      if (*(int *)(unaff_BP + -0xb2) < iVar7) {
        FUN_3ab8_3fca();
        return;
      }
      if (*(uint *)(unaff_BP + -0xb4) < *(uint *)(unaff_BP + -0xce)) {
        FUN_3ab8_3fca();
        return;
      }
    }
    iVar7 = *(int *)(unaff_BP + -0x16e);
    if (((iVar7 <= *(int *)(unaff_BP + -0xaa)) &&
        ((iVar7 < *(int *)(unaff_BP + -0xaa) ||
         (*(uint *)(unaff_BP + -0x170) < *(uint *)(unaff_BP + -0xac))))) &&
       (iVar7 <= *(int *)(unaff_BP + -0xb2))) {
      if (iVar7 < *(int *)(unaff_BP + -0xb2)) {
        FUN_3ab8_3fca();
        return;
      }
      if (*(uint *)(unaff_BP + -0x170) < *(uint *)(unaff_BP + -0xb4)) {
        FUN_3ab8_3fca();
        return;
      }
    }
    uVar3 = *(uint *)(unaff_BP + -0xb4);
    uVar4 = *(uint *)(unaff_BP + -0xb2);
    uVar5 = *(uint *)(unaff_BP + -0xaa);
    uVar9 = uVar5 < uVar4;
    uVar10 = uVar5 == uVar4;
    if ((int)uVar4 <= (int)uVar5) {
      if ((int)uVar5 <= (int)uVar4) {
        uVar4 = *(uint *)(unaff_BP + -0xac);
        uVar9 = uVar4 < uVar3;
        uVar10 = uVar4 == uVar3;
        if (uVar4 <= uVar3) goto LAB_3ab8_44c2;
      }
      iStack_2 = 0x22b2;
      iStack_4 = 0xefd9;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xefde;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0xefe7;
      func_0x000299d1();
      uVar8 = *(undefined2 *)(unaff_BP + -0x15a);
      *(undefined2 *)(unaff_BP + -0xda) = *(undefined2 *)(unaff_BP + -0x15c);
      *(undefined2 *)(unaff_BP + -0xd8) = uVar8;
      iStack_2 = 0x22b2;
      iStack_4 = 0xf000;
      func_0x00029834();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf009;
      func_0x00029983();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf012;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf017;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf020;
      func_0x000299d1();
      uVar8 = *(undefined2 *)(unaff_BP + -0x17a);
      *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x17c);
      *(undefined2 *)(unaff_BP + -0x15e) = uVar8;
      iStack_2 = 0x22b2;
      iStack_4 = 0xf039;
      func_0x00029834();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf042;
      func_0x00029983();
    }
LAB_3ab8_44c2:
    iStack_2 = 0x22b2;
    iStack_4 = 0xf04b;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf054;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf059;
    FUN_28b3_1181();
    if (!(bool)uVar9 && !(bool)uVar10) {
      iStack_2 = 0x22b2;
      iStack_4 = 0xf064;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf06d;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf076;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf07f;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf084;
      FUN_28b3_1172();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf08d;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf096;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf09b;
      func_0x00029c9d();
      iStack_2 = unaff_BP + -0xda;
      iStack_4 = 0x22b2;
      uStack_6 = 0xf0a5;
      func_0x00029bb5();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf0ab;
      func_0x00029983();
      uVar8 = *(undefined2 *)(unaff_BP + -0x1b0);
      *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x1b2);
      *(undefined2 *)(unaff_BP + -0x15e) = uVar8;
    }
    iStack_2 = 0x22b2;
    iStack_4 = 0xf0c4;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf0cd;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uVar8 = 0x22b2;
    iStack_4 = 0xf0d2;
    FUN_28b3_1181();
    if ((bool)uVar9) {
      iStack_2 = 0x22b2;
      iStack_4 = 0xf0dd;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf0e6;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf0ef;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf0f8;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf0fd;
      FUN_28b3_1172();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf106;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf10f;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf114;
      func_0x00029c9d();
      iStack_2 = unaff_BP + -0x15c;
      iStack_4 = 0x22b2;
      uStack_6 = 0xf11e;
      func_0x00029b55();
      iStack_2 = 0x22b2;
      uVar8 = 0x22b2;
      iStack_4 = 0xf124;
      func_0x00029983();
      uVar2 = *(undefined2 *)(unaff_BP + -0x1be);
      *(undefined2 *)(unaff_BP + -0x17c) = *(undefined2 *)(unaff_BP + -0x1c0);
      *(undefined2 *)(unaff_BP + -0x17a) = uVar2;
    }
  }
  else {
    iVar7 = *(int *)(unaff_BP + -0xcc);
    if (((*(int *)(unaff_BP + -0xaa) < iVar7) ||
        ((*(int *)(unaff_BP + -0xaa) <= iVar7 &&
         (*(uint *)(unaff_BP + -0xac) < *(uint *)(unaff_BP + -0xce))))) ||
       ((*(int *)(unaff_BP + -0xb2) < iVar7 ||
        ((*(int *)(unaff_BP + -0xb2) <= iVar7 &&
         (*(uint *)(unaff_BP + -0xb4) < *(uint *)(unaff_BP + -0xce))))))) goto LAB_3ab8_4216;
    if ((*(int *)(unaff_BP + -0x152) < *(int *)(unaff_BP + -0x92)) ||
       ((*(int *)(unaff_BP + -0x152) <= *(int *)(unaff_BP + -0x92) &&
        (*(uint *)(unaff_BP + -0x154) < *(uint *)(unaff_BP + -0x94))))) goto LAB_3ab8_4216;
    if ((*(int *)(unaff_BP + -0x152) < *(int *)(unaff_BP + -0xa6)) ||
       ((*(int *)(unaff_BP + -0x152) <= *(int *)(unaff_BP + -0xa6) &&
        (*(uint *)(unaff_BP + -0x154) < *(uint *)(unaff_BP + -0xa8))))) goto LAB_3ab8_4216;
    iVar7 = *(int *)(unaff_BP + -0x16e);
    if ((iVar7 < *(int *)(unaff_BP + -0xaa)) ||
       (((iVar7 <= *(int *)(unaff_BP + -0xaa) &&
         (*(uint *)(unaff_BP + -0x170) < *(uint *)(unaff_BP + -0xac))) ||
        ((iVar7 <= *(int *)(unaff_BP + -0xb2) &&
         ((iVar7 < *(int *)(unaff_BP + -0xb2) ||
          (*(uint *)(unaff_BP + -0x170) < *(uint *)(unaff_BP + -0xb4))))))))) goto LAB_3ab8_4216;
  }
  if (*(char *)(unaff_BP + -0x6a) != '\0') {
    iStack_2 = *(undefined2 *)(unaff_BP + -0x42);
    iStack_4 = *(undefined2 *)(unaff_BP + 8);
    iStack_8 = -0xebc;
    uStack_6 = uVar8;
    FUN_3ab8_114a();
    *(undefined1 *)(unaff_BP + -0x6a) = 0;
  }
  *(uint *)(unaff_BP + -0x1cc) = (uint)*(byte *)(unaff_BP + -0x16);
  iStack_4 = 0xf167;
  iStack_2 = uVar8;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf170;
  func_0x00029983();
  iVar7 = *(int *)(unaff_BP + 8);
  if ((*(char *)(iVar7 + *(int *)(unaff_BP + -0x1cc) * 0x28 + 0x420) != '\0') &&
     (*(int *)(unaff_BP + -0x1cc) < 9)) {
    bVar11 = (*(byte *)(unaff_BP + -0x12) & 0x80) == 0;
    if (bVar11) {
      iStack_2 = *(undefined2 *)(unaff_BP + -0x1c8);
      iStack_4 = *(undefined2 *)(unaff_BP + -0x1ca);
      uStack_6 = *(undefined2 *)(unaff_BP + -0x1cc);
      iStack_8 = iVar7;
      FUN_3ab8_0f56();
    }
    uVar10 = bVar11 && &stack0x0000 == (undefined1 *)0x0;
    uVar9 = bVar11 && (undefined1 *)0xfff7 < &iStack_8;
    iStack_2 = 0x22b2;
    iStack_4 = 0xf1b0;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf1b9;
    FUN_28b3_100d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf1be;
    func_0x00029ae7();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf1c7;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf1d0;
    FUN_28b3_100d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf1d5;
    func_0x00029ae7();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf1de;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf1e7;
    FUN_28b3_100d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf1ec;
    func_0x00029ae7();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf1f1;
    FUN_28b3_1163();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf1fa;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf203;
    FUN_28b3_100d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf208;
    func_0x00029ae7();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf20d;
    FUN_28b3_117c();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf212;
    FUN_28b3_1181();
    if (!(bool)uVar9 && !(bool)uVar10) {
      iStack_2 = 0x22b2;
      iStack_4 = 0xf21d;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf222;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf22b;
      func_0x000299d1();
      uVar8 = *(undefined2 *)(unaff_BP + -0x15a);
      *(undefined2 *)(unaff_BP + -0xda) = *(undefined2 *)(unaff_BP + -0x15c);
      *(undefined2 *)(unaff_BP + -0xd8) = uVar8;
      iStack_2 = 0x22b2;
      iStack_4 = 0xf244;
      func_0x00029834();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf24d;
      func_0x00029983();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf256;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf25b;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf264;
      func_0x000299d1();
      uVar8 = *(undefined2 *)(unaff_BP + -0x17a);
      *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x17c);
      *(undefined2 *)(unaff_BP + -0x15e) = uVar8;
      iStack_2 = 0x22b2;
      iStack_4 = 0xf27d;
      func_0x00029834();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf286;
      func_0x00029983();
    }
    iStack_2 = 0x22b2;
    iStack_4 = 0xf28f;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf298;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf29d;
    FUN_28b3_1181();
    if ((bool)uVar10) {
      iStack_2 = 0x22b2;
      iStack_4 = 0xf2a8;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf2b1;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf2b6;
      FUN_28b3_1181();
      if ((bool)uVar10) goto LAB_3ab8_478a;
    }
    iStack_2 = 0x22b2;
    iStack_4 = 0xf2c1;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf2c9;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf2d2;
    func_0x00029bb5();
    uStack_6 = 0x22b2;
    iStack_8 = -0xd24;
    func_0x00029983();
    uStack_6 = 0x22b2;
    iStack_8 = -0xd1b;
    func_0x000297e6();
    uStack_6 = 0x22b2;
    iStack_8 = -0xd13;
    func_0x00029b6d();
    uStack_6 = 0x22b2;
    iStack_8 = -0xd0a;
    func_0x00029bb5();
    func_0x00029983(0x22b2);
    FUN_3ab8_0eb3(*(undefined2 *)(unaff_BP + 8));
LAB_3ab8_478a:
    iStack_2 = 0x22b2;
    iStack_4 = 0xf313;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf31b;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf324;
    func_0x00029bb5();
    uStack_6 = 0x22b2;
    iStack_8 = -0xcd2;
    func_0x00029983();
    uStack_6 = 0x22b2;
    iStack_8 = -0xcc9;
    func_0x000297e6();
    uStack_6 = 0x22b2;
    iStack_8 = -0xcc1;
    func_0x00029b6d();
    uStack_6 = 0x22b2;
    iStack_8 = -0xcb8;
    func_0x00029bb5();
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    uVar8 = 0xf36c;
    func_0x00029bb5(0x22b2);
    func_0x00029983(0x22b2,uVar8);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    uVar8 = 0xf390;
    func_0x00029bb5(0x22b2);
    func_0x00029983(0x22b2,uVar8);
    FUN_3ab8_0b0a(*(undefined2 *)(unaff_BP + 8));
    uVar8 = *(undefined2 *)(unaff_BP + -0x15a);
    *(undefined2 *)(unaff_BP + -0xc4) = *(undefined2 *)(unaff_BP + -0x15c);
    *(undefined2 *)(unaff_BP + -0xc2) = uVar8;
    uVar8 = *(undefined2 *)(unaff_BP + -0x17a);
    *(undefined2 *)(unaff_BP + -0xde) = *(undefined2 *)(unaff_BP + -0x17c);
    *(undefined2 *)(unaff_BP + -0xdc) = uVar8;
    FUN_3ab8_3fca();
    return;
  }
  uVar8 = *(undefined2 *)0x9df0;
  uVar2 = *(undefined2 *)0x9df2;
  *(undefined2 *)(unaff_BP + -0x1d0) = uVar8;
  *(undefined2 *)(unaff_BP + -0x1ce) = uVar2;
  *(undefined2 *)(unaff_BP + -0x1d4) = uVar8;
  *(undefined2 *)(unaff_BP + -0x1d2) = uVar2;
  uVar8 = *(undefined2 *)0x9d92;
  *(undefined2 *)(unaff_BP + -0x1de) = *(undefined2 *)0x9d90;
  *(undefined2 *)(unaff_BP + -0x1dc) = uVar8;
  *(undefined2 *)(unaff_BP + -0x254) = 0;
  *(undefined2 *)(unaff_BP + -0x1da) = 0;
  iStack_2 = *(undefined2 *)0x9d8a;
  iStack_4 = *(undefined2 *)0x9d88;
  uStack_6 = 1;
  iStack_8 = iVar7;
  FUN_3ab8_0f56();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf414;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf41d;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf426;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf42f;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf438;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf441;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf44a;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf453;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf45c;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf465;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf46e;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf477;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf480;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf485;
  FUN_28b3_117c();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf48a;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  FUN_28b3_1582(0x22b2);
  uVar9 = (undefined1 *)0xfff7 < &iStack_8;
  iStack_2 = 0x22b2;
  iStack_4 = 0xf4a3;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf4ac;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf4b1;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf4b6;
  FUN_28b3_1181();
  if ((bool)uVar9) {
    FUN_3ab8_3fca();
    return;
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0xf4c4;
  func_0x000297e6();
  iStack_2 = unaff_BP + -0x1d8;
  iStack_4 = 0x22b2;
  uStack_6 = 0xf4ce;
  func_0x00029b9d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf4d4;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf4dd;
  func_0x000297e6();
  iStack_2 = unaff_BP + -0x1fe;
  iStack_4 = 0x22b2;
  uStack_6 = 0xf4e7;
  func_0x00029b9d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf4ed;
  func_0x00029983();
  iVar7 = *(int *)(*(int *)(unaff_BP + -0x1cc) * 2 + 0xa88);
  *(int *)(unaff_BP + -0xe4) = iVar7;
  uVar8 = *(undefined2 *)0x9d88;
  uVar2 = *(undefined2 *)0x9d8a;
  *(undefined2 *)(unaff_BP + -600) = uVar8;
  *(undefined2 *)(unaff_BP + -0x256) = uVar2;
  *(undefined2 *)(unaff_BP + -0x260) = uVar8;
  *(undefined2 *)(unaff_BP + -0x25e) = uVar2;
  *(int *)(unaff_BP + -0x174) = iVar7;
  *(undefined2 *)(unaff_BP + -0x172) = 0;
  *(int *)(unaff_BP + -0x90) = iVar7;
  *(int *)(unaff_BP + -0x8e) = iVar7;
  if (*(int *)(unaff_BP + -0x1cc) == 0x10) {
    *(undefined2 *)(unaff_BP + -0x90) = 0x7fff;
    *(undefined2 *)(unaff_BP + -0x8e) = 0xfffd;
  }
  if (*(int *)(unaff_BP + -0x1cc) == 0x11) {
    *(undefined2 *)(unaff_BP + -0x90) = 0xbfff;
    *(undefined2 *)(unaff_BP + -0x8e) = 0xfffa;
  }
  if (*(int *)(unaff_BP + -0x1cc) == 0x12) {
    *(undefined2 *)(unaff_BP + -0x90) = 0xffff;
    *(undefined2 *)(unaff_BP + -0x8e) = 0xfff7;
  }
  if ((((*(int *)(unaff_BP + -0x1cc) < 2) || (8 < *(int *)(unaff_BP + -0x1cc))) &&
      (*(int *)(unaff_BP + -0x1cc) < 0x10)) ||
     (((*(byte *)(unaff_BP + -0x12) & 0x40) == 0 && ((*(byte *)(unaff_BP + -0x12) & 0x80) == 0)))) {
    *(undefined2 *)(unaff_BP + -0x7e) = 0;
    uVar8 = *(undefined2 *)(unaff_BP + -0x8e);
    *(undefined2 *)(unaff_BP + -0x8c) = *(undefined2 *)(unaff_BP + -0x90);
    *(undefined2 *)(unaff_BP + -0x8a) = uVar8;
    uVar8 = *(undefined2 *)0x9d88;
    uVar2 = *(undefined2 *)0x9d8a;
    *(undefined2 *)(unaff_BP + -0x19e) = uVar8;
    *(undefined2 *)(unaff_BP + -0x19c) = uVar2;
    *(undefined2 *)(unaff_BP + -0x84) = uVar8;
    *(undefined2 *)(unaff_BP + -0x82) = uVar2;
    if (*(int *)(unaff_BP + -0x1cc) < 0x10) {
      uVar9 = *(int *)(unaff_BP + -0x1cc) == 0;
      if (*(int *)(unaff_BP + -0x1cc) < 2) {
        uVar8 = *(undefined2 *)0x9df6;
        *(undefined2 *)(unaff_BP + -0x1ca) = *(undefined2 *)0x9df4;
        *(undefined2 *)(unaff_BP + -0x1c8) = uVar8;
      }
      else {
        iStack_2 = 0x22b2;
        iStack_4 = 0xf622;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf62b;
        func_0x00029b85();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf634;
        func_0x00029b6d();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf63d;
        func_0x00029983();
      }
      iStack_2 = 0x22b2;
      iStack_4 = 0xf657;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf660;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf669;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf66e;
      FUN_28b3_1181();
      if ((bool)uVar9) {
        iStack_2 = 0x22b2;
        iStack_4 = 0xf679;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf682;
        func_0x00029b85();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf68b;
        func_0x00029bb5();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf690;
        func_0x00029d78();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf695;
        uVar8 = FUN_28b3_0f51();
        *(undefined2 *)(unaff_BP + -0x268) = uVar8;
        iStack_2 = 0x22b2;
        iStack_4 = 0xf6a2;
        FUN_28b3_0d8b();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf6ab;
        func_0x00029b9d();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf6b4;
        func_0x00029983();
      }
      iStack_2 = 0x22b2;
      iStack_4 = 0xf6bd;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf6c6;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf6ce;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf6d6;
      FUN_28b3_0ee9();
      if (10 < *(int *)(unaff_BP + -0x1cc)) {
        iStack_2 = unaff_BP + -0x1de;
        iStack_4 = unaff_BP + -0x24a;
        uStack_6 = *(undefined2 *)(unaff_BP + -0x1cc);
        iStack_8 = 0x22b2;
        uVar8 = FUN_3ab8_3a0b();
        *(undefined2 *)(unaff_BP + -0x1da) = uVar8;
        iStack_2 = 0x22b2;
        iStack_4 = 0xf6fe;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf707;
        func_0x00029b6d();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf70f;
        func_0x00029983();
      }
    }
    uVar9 = *(uint *)(unaff_BP + -0x1cc) < 0xf;
    if ((int)*(uint *)(unaff_BP + -0x1cc) < 0x10) goto LAB_3ab8_4c4c;
    iStack_2 = 0x22b2;
    iStack_4 = 0xf722;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf72b;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x1ca;
    iStack_4 = 0x22b2;
    uStack_6 = 0xf735;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf73b;
    func_0x0002996b();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf744;
    func_0x00029b85();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf74d;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf756;
    func_0x0002996b();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf75b;
    FUN_28b3_1181();
    if ((bool)uVar9) {
      iStack_2 = 0x22b2;
      iStack_4 = 0xf766;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf76f;
      func_0x00029b85();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf774;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf77d;
      func_0x00029c74();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf782;
      uVar8 = FUN_28b3_0f51();
      *(undefined2 *)(unaff_BP + -0x268) = uVar8;
      iStack_2 = 0x22b2;
      iStack_4 = 0xf78f;
      FUN_28b3_0d8b();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf798;
      func_0x00029b9d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf7a1;
      func_0x00029983();
    }
    else {
      uVar8 = *(undefined2 *)0x9df6;
      *(undefined2 *)(unaff_BP + -0x1ca) = *(undefined2 *)0x9df4;
      *(undefined2 *)(unaff_BP + -0x1c8) = uVar8;
    }
    iStack_2 = 0x22b2;
    iStack_4 = 0xf7bb;
    func_0x000297e6();
  }
  else {
    if (*(int *)(unaff_BP + -0x7e) == iVar7) goto LAB_3ab8_4c4c;
    *(int *)(unaff_BP + -0x7e) = iVar7;
    uVar8 = *(undefined2 *)(unaff_BP + -0x8e);
    *(undefined2 *)(unaff_BP + -0x8c) = *(undefined2 *)(unaff_BP + -0x90);
    *(undefined2 *)(unaff_BP + -0x8a) = uVar8;
    uVar8 = *(undefined2 *)0x9d88;
    uVar2 = *(undefined2 *)0x9d8a;
    *(undefined2 *)(unaff_BP + -0x19e) = uVar8;
    *(undefined2 *)(unaff_BP + -0x19c) = uVar2;
    *(undefined2 *)(unaff_BP + -0x84) = uVar8;
    *(undefined2 *)(unaff_BP + -0x82) = uVar2;
    iStack_2 = 0x22b2;
    iStack_4 = 0xf5bc;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf5c5;
    func_0x00029b85();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf5ce;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf5d7;
    func_0x0002996b();
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0xf7c4;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf7cc;
  func_0x00029983();
LAB_3ab8_4c4c:
  uVar8 = *(undefined2 *)(unaff_BP + -0x19c);
  *(undefined2 *)(unaff_BP + -0x202) = *(undefined2 *)(unaff_BP + -0x19e);
  *(undefined2 *)(unaff_BP + -0x200) = uVar8;
  uVar8 = *(undefined2 *)0x9d8a;
  *(undefined2 *)(unaff_BP + -0x19e) = *(undefined2 *)0x9d88;
  *(undefined2 *)(unaff_BP + -0x19c) = uVar8;
  do {
    iStack_2 = 0x22b2;
    iStack_4 = 0xf7f4;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf7fd;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf806;
    func_0x00029983();
    uVar8 = *(undefined2 *)0x9d8a;
    *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)0x9d88;
    *(undefined2 *)(unaff_BP + -0x82) = uVar8;
    uVar3 = *(uint *)(unaff_BP + -0x1cc);
    uVar9 = uVar3 < 8;
    uVar10 = uVar3 == 8;
    if ((int)uVar3 < 9) {
LAB_3ab8_4ca3:
      iStack_2 = 0x22b2;
      iStack_4 = 0xf82c;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf835;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf83a;
      FUN_28b3_1181();
      if (!(bool)uVar9 && !(bool)uVar10) {
        FUN_3ab8_5076();
        return;
      }
      iStack_2 = 0x22b2;
      iStack_4 = 0xf848;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf851;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf85a;
      func_0x00029983();
      uVar8 = *(undefined2 *)(unaff_BP + -500);
      *(undefined2 *)(unaff_BP + -0x252) = *(undefined2 *)(unaff_BP + -0x1f6);
      *(undefined2 *)(unaff_BP + -0x250) = uVar8;
    }
    else {
      uVar3 = *(uint *)(unaff_BP + -0x1cc);
      uVar9 = uVar3 < 0xf;
      uVar10 = uVar3 == 0xf;
      if (0xf < (int)uVar3) goto LAB_3ab8_4ca3;
    }
    if ((10 < *(int *)(unaff_BP + -0x1cc)) && (*(int *)(unaff_BP + -0x1cc) < 0x10)) {
      uVar8 = *(undefined2 *)(unaff_BP + -0x25e);
      *(undefined2 *)(unaff_BP + -600) = *(undefined2 *)(unaff_BP + -0x260);
      *(undefined2 *)(unaff_BP + -0x256) = uVar8;
      iStack_2 = 0x22b2;
      iStack_4 = 0xf893;
      func_0x000297e6();
      iStack_2 = unaff_BP + -0x252;
      iStack_4 = 0x22b2;
      uStack_6 = 0xf89d;
      func_0x00029bb5();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf8a3;
      func_0x00029983();
      iVar7 = *(int *)(unaff_BP + -0x254) * 4;
      uVar8 = *(undefined2 *)(unaff_BP + iVar7 + -0x248);
      *(undefined2 *)(unaff_BP + -0x260) = *(undefined2 *)(unaff_BP + iVar7 + -0x24a);
      *(undefined2 *)(unaff_BP + -0x25e) = uVar8;
      uVar3 = *(uint *)(unaff_BP + -0x1da);
      *(int *)(unaff_BP + -0x254) = *(int *)(unaff_BP + -0x254) + 1;
      uVar4 = *(uint *)(unaff_BP + -0x254);
      uVar9 = uVar4 < uVar3;
      uVar10 = uVar4 == uVar3;
      if ((int)uVar3 < (int)uVar4) {
        *(undefined2 *)(unaff_BP + -0x254) = 0;
      }
      iStack_2 = 0x22b2;
      iStack_4 = 0xf8d8;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf8dd;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf8e6;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf8eb;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf8f4;
      func_0x00029bfc();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf8f9;
      FUN_28b3_1181();
      if ((bool)uVar9 || (bool)uVar10) {
        uVar8 = *(undefined2 *)(unaff_BP + -500);
        *(undefined2 *)(unaff_BP + -0x252) = *(undefined2 *)(unaff_BP + -0x1f6);
        *(undefined2 *)(unaff_BP + -0x250) = uVar8;
        uVar8 = *(undefined2 *)0x9d8a;
        *(undefined2 *)(unaff_BP + -0x260) = *(undefined2 *)0x9d88;
        *(undefined2 *)(unaff_BP + -0x25e) = uVar8;
      }
    }
    iStack_2 = 0x22b2;
    iStack_4 = 0xf923;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf92c;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf935;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf93e;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf947;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf950;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf955;
    FUN_28b3_1163();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf95e;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf967;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf970;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf979;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf982;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf98b;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf994;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf999;
    FUN_28b3_117c();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf9a2;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf9ab;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf9b4;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf9bd;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf9c6;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf9cf;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf9d8;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf9dd;
    FUN_28b3_1163();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf9e6;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf9ef;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf9f8;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfa01;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfa0a;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfa13;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfa1c;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfa21;
    FUN_28b3_117c();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfa2a;
    func_0x00029983();
    uVar9 = *(int *)(unaff_BP + -0x7e) == 0;
    if ((bool)uVar9) {
LAB_3ab8_4ecc:
      iStack_2 = 0x22b2;
      iStack_4 = 0xfa58;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfa61;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfa6a;
      func_0x00029bb5();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfa73;
      func_0x00029983();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfa7f;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfa88;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfa91;
      func_0x00029bb5();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfa9a;
      func_0x00029983();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfaa3;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfaac;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfab1;
      FUN_28b3_1181();
      if ((bool)uVar9) {
        iStack_2 = 0x22b2;
        iStack_4 = 0xfabc;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0xfac5;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0xfaca;
        FUN_28b3_1181();
        if (!(bool)uVar9) goto LAB_3ab8_4f4c;
      }
      else {
LAB_3ab8_4f4c:
        iStack_2 = *(undefined2 *)(unaff_BP + -0x1ec);
        iStack_4 = *(undefined2 *)(unaff_BP + -0x1ee);
        uStack_6 = *(undefined2 *)(unaff_BP + -0x1e4);
        iStack_8 = *(int *)(unaff_BP + -0x1e6);
        FUN_3ab8_0eb3(*(undefined2 *)(unaff_BP + 8));
      }
      iStack_2 = 0x22b2;
      iStack_4 = 0xfaf2;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfafb;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfb04;
      func_0x00029bb5();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfb0d;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfb16;
      func_0x00029983();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfb22;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfb2b;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfb34;
      func_0x00029bb5();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfb3d;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfb46;
      func_0x00029983();
      iStack_2 = *(undefined2 *)(unaff_BP + -0x1ec);
      iStack_4 = *(undefined2 *)(unaff_BP + -0x1ee);
      uStack_6 = *(undefined2 *)(unaff_BP + -0x1e4);
      iStack_8 = *(int *)(unaff_BP + -0x1e6);
      uVar8 = 0xfb5f;
      func_0x000297e6(0x22b2);
      func_0x00029983(0x22b2,uVar8);
      uVar8 = 0xfb72;
      func_0x000297e6(0x22b2);
      func_0x00029983(0x22b2,uVar8);
      FUN_3ab8_0b0a(*(undefined2 *)(unaff_BP + 8));
    }
    else {
      iStack_2 = 0x22b2;
      iStack_4 = 0xfa39;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfa42;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfa47;
      FUN_28b3_1181();
      if (!(bool)uVar9) goto LAB_3ab8_4ecc;
    }
    uVar8 = *(undefined2 *)(unaff_BP + -0x250);
    *(undefined2 *)(unaff_BP + -0x202) = *(undefined2 *)(unaff_BP + -0x252);
    *(undefined2 *)(unaff_BP + -0x200) = uVar8;
    while( true ) {
      uVar3 = *(uint *)(unaff_BP + -0x1cc);
      uVar9 = uVar3 < 8;
      uVar10 = uVar3 == 8;
      if (8 < (int)uVar3) {
        uVar3 = *(uint *)(unaff_BP + -0x1cc);
        uVar9 = uVar3 < 0xf;
        uVar10 = uVar3 == 0xf;
        if ((int)uVar3 < 0x10) goto LAB_3ab8_50ba;
      }
      iStack_2 = 0x22b2;
      iStack_4 = 0xfbb0;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfbb9;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfbbe;
      FUN_28b3_1181();
      if ((bool)uVar9 || (bool)uVar10) break;
      uVar9 = 0;
      uVar10 = (*(uint *)(unaff_BP + -0x8a) & 0x8000) == 0;
      if (!(bool)uVar10) goto LAB_3ab8_50ba;
      iStack_2 = 0x22b2;
      iStack_4 = 0xfc91;
      func_0x000297e6();
      iStack_2 = unaff_BP + -0x202;
      iStack_4 = 0x22b2;
      uStack_6 = 0xfc9b;
      func_0x00029bb5();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfca1;
      func_0x00029983();
      piVar1 = (int *)(unaff_BP + -0x8c);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 << 1;
      *(uint *)(unaff_BP + -0x8a) = *(uint *)(unaff_BP + -0x8a) << 1 | (uint)(iVar7 < 0);
      uVar8 = *(undefined2 *)0x9d8a;
      *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)0x9d88;
      *(undefined2 *)(unaff_BP + -0x82) = uVar8;
    }
    iStack_2 = 0x22b2;
    iStack_4 = 0xfbc9;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfbd2;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfbd7;
    FUN_28b3_1181();
    if ((bool)uVar10) {
      iStack_2 = 0x22b2;
      iStack_4 = 0xfbe2;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfbeb;
      FUN_28b3_100d();
      iStack_2 = 0x22b2;
      iStack_4 = 0xfbf4;
      func_0x00029983();
    }
LAB_3ab8_50ba:
    uVar8 = *(undefined2 *)(unaff_BP + -0x24c);
    *(undefined2 *)(unaff_BP + -0x1d0) = *(undefined2 *)(unaff_BP + -0x24e);
    *(undefined2 *)(unaff_BP + -0x1ce) = uVar8;
    uVar8 = *(undefined2 *)(unaff_BP + -0x25a);
    *(undefined2 *)(unaff_BP + -0x1d4) = *(undefined2 *)(unaff_BP + -0x25c);
    *(undefined2 *)(unaff_BP + -0x1d2) = uVar8;
    iStack_2 = 0x22b2;
    iStack_4 = 0xfc63;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfc68;
    func_0x00029d78();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfc71;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfc76;
    func_0x00029d78();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfc7f;
    func_0x00029bfc();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfc84;
    FUN_28b3_1181();
    if ((bool)uVar9 || (bool)uVar10) {
      uVar8 = *(undefined2 *)0x9df2;
      *(undefined2 *)(unaff_BP + -0xc4) = *(undefined2 *)0x9df0;
      *(undefined2 *)(unaff_BP + -0xc2) = uVar8;
      FUN_3ab8_3fca();
      return;
    }
  } while( true );
}



/* 3ab8:4c91  FUN_3ab8_4c91  812 bytes, 1 callers */

void FUN_3ab8_4c91(void)

{
  int *piVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 in_DX;
  int unaff_BP;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  
  uVar6 = 0x3ab8;
  do {
    *(undefined2 *)(unaff_BP + -0x82) = in_DX;
    uVar2 = *(uint *)(unaff_BP + -0x1cc);
    uVar7 = uVar2 < 8;
    uVar8 = uVar2 == 8;
    if ((int)uVar2 < 9) {
LAB_3ab8_4ca3:
      func_0x000297e6(uVar6);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar7 && !(bool)uVar8) {
        FUN_3ab8_5076();
        return;
      }
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      uVar6 = 0x22b2;
      func_0x00029983(0x22b2);
      uVar3 = *(undefined2 *)(unaff_BP + -500);
      *(undefined2 *)(unaff_BP + -0x252) = *(undefined2 *)(unaff_BP + -0x1f6);
      *(undefined2 *)(unaff_BP + -0x250) = uVar3;
    }
    else {
      uVar2 = *(uint *)(unaff_BP + -0x1cc);
      uVar7 = uVar2 < 0xf;
      uVar8 = uVar2 == 0xf;
      if (0xf < (int)uVar2) goto LAB_3ab8_4ca3;
    }
    if ((10 < *(int *)(unaff_BP + -0x1cc)) && (*(int *)(unaff_BP + -0x1cc) < 0x10)) {
      uVar3 = *(undefined2 *)(unaff_BP + -0x25e);
      *(undefined2 *)(unaff_BP + -600) = *(undefined2 *)(unaff_BP + -0x260);
      *(undefined2 *)(unaff_BP + -0x256) = uVar3;
      func_0x000297e6(uVar6);
      func_0x00029bb5(0x22b2,unaff_BP + -0x252);
      func_0x00029983(0x22b2);
      iVar5 = *(int *)(unaff_BP + -0x254) * 4;
      uVar6 = *(undefined2 *)(unaff_BP + iVar5 + -0x248);
      *(undefined2 *)(unaff_BP + -0x260) = *(undefined2 *)(unaff_BP + iVar5 + -0x24a);
      *(undefined2 *)(unaff_BP + -0x25e) = uVar6;
      uVar2 = *(uint *)(unaff_BP + -0x1da);
      *(int *)(unaff_BP + -0x254) = *(int *)(unaff_BP + -0x254) + 1;
      uVar4 = *(uint *)(unaff_BP + -0x254);
      uVar7 = uVar4 < uVar2;
      uVar8 = uVar4 == uVar2;
      if ((int)uVar2 < (int)uVar4) {
        *(undefined2 *)(unaff_BP + -0x254) = 0;
      }
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x00029bfc(0x22b2);
      uVar6 = 0x22b2;
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar7 || (bool)uVar8) {
        uVar3 = *(undefined2 *)(unaff_BP + -500);
        *(undefined2 *)(unaff_BP + -0x252) = *(undefined2 *)(unaff_BP + -0x1f6);
        *(undefined2 *)(unaff_BP + -0x250) = uVar3;
        uVar3 = *(undefined2 *)0x9d8a;
        *(undefined2 *)(unaff_BP + -0x260) = *(undefined2 *)0x9d88;
        *(undefined2 *)(unaff_BP + -0x25e) = uVar3;
      }
    }
    func_0x000297e6(uVar6);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_1163(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_117c(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_1163(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_117c(0x22b2);
    func_0x00029983(0x22b2);
    uVar7 = *(int *)(unaff_BP + -0x7e) == 0;
    if ((bool)uVar7) {
LAB_3ab8_4ecc:
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar7) {
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar7) goto LAB_3ab8_4f4c;
      }
      else {
LAB_3ab8_4f4c:
        FUN_3ab8_0eb3(*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + -0x1e6),
                      *(undefined2 *)(unaff_BP + -0x1e4),*(undefined2 *)(unaff_BP + -0x1ee),
                      *(undefined2 *)(unaff_BP + -0x1ec));
      }
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029983(0x22b2);
      uVar6 = 0xfb5f;
      func_0x000297e6(0x22b2,*(undefined2 *)(unaff_BP + -0x1e6),*(undefined2 *)(unaff_BP + -0x1e4),
                      *(undefined2 *)(unaff_BP + -0x1ee),*(undefined2 *)(unaff_BP + -0x1ec));
      func_0x00029983(0x22b2,uVar6);
      uVar6 = 0xfb72;
      func_0x000297e6(0x22b2);
      func_0x00029983(0x22b2,uVar6);
      FUN_3ab8_0b0a(*(undefined2 *)(unaff_BP + 8));
    }
    else {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar7) goto LAB_3ab8_4ecc;
    }
    uVar6 = *(undefined2 *)(unaff_BP + -0x250);
    *(undefined2 *)(unaff_BP + -0x202) = *(undefined2 *)(unaff_BP + -0x252);
    *(undefined2 *)(unaff_BP + -0x200) = uVar6;
    while( true ) {
      uVar2 = *(uint *)(unaff_BP + -0x1cc);
      uVar7 = uVar2 < 8;
      uVar8 = uVar2 == 8;
      if (8 < (int)uVar2) {
        uVar2 = *(uint *)(unaff_BP + -0x1cc);
        uVar7 = uVar2 < 0xf;
        uVar8 = uVar2 == 0xf;
        if ((int)uVar2 < 0x10) goto LAB_3ab8_50ba;
      }
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar7 || (bool)uVar8) break;
      uVar7 = 0;
      uVar8 = (*(uint *)(unaff_BP + -0x8a) & 0x8000) == 0;
      if (!(bool)uVar8) goto LAB_3ab8_50ba;
      func_0x000297e6(0x22b2);
      func_0x00029bb5(0x22b2,unaff_BP + -0x202);
      func_0x00029983(0x22b2);
      piVar1 = (int *)(unaff_BP + -0x8c);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 << 1;
      *(uint *)(unaff_BP + -0x8a) = *(uint *)(unaff_BP + -0x8a) << 1 | (uint)(iVar5 < 0);
      uVar6 = *(undefined2 *)0x9d8a;
      *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)0x9d88;
      *(undefined2 *)(unaff_BP + -0x82) = uVar6;
    }
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar8) {
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      func_0x00029983(0x22b2);
    }
LAB_3ab8_50ba:
    uVar6 = *(undefined2 *)(unaff_BP + -0x24c);
    *(undefined2 *)(unaff_BP + -0x1d0) = *(undefined2 *)(unaff_BP + -0x24e);
    *(undefined2 *)(unaff_BP + -0x1ce) = uVar6;
    uVar6 = *(undefined2 *)(unaff_BP + -0x25a);
    *(undefined2 *)(unaff_BP + -0x1d4) = *(undefined2 *)(unaff_BP + -0x25c);
    *(undefined2 *)(unaff_BP + -0x1d2) = uVar6;
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x00029bfc(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar7 || (bool)uVar8) {
      uVar6 = *(undefined2 *)0x9df2;
      *(undefined2 *)(unaff_BP + -0xc4) = *(undefined2 *)0x9df0;
      *(undefined2 *)(unaff_BP + -0xc2) = uVar6;
      FUN_3ab8_3fca();
      return;
    }
    func_0x000297e6(0x22b2);
    func_0x00029bb5(0x22b2);
    uVar6 = 0x22b2;
    func_0x00029983(0x22b2);
    in_DX = *(undefined2 *)0x9d8a;
    *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)0x9d88;
  } while( true );
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  185 bytes, 2 callers */

void FUN_3ab8_4fbd(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int unaff_BP;
  int iVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x3ab8;
  do {
    func_0x00029983(uVar7);
    uVar7 = 0xfb5f;
    func_0x000297e6(0x22b2,*(undefined2 *)(unaff_BP + -0x1e6),*(undefined2 *)(unaff_BP + -0x1e4),
                    *(undefined2 *)(unaff_BP + -0x1ee),*(undefined2 *)(unaff_BP + -0x1ec));
    func_0x00029983(0x22b2,uVar7);
    uVar7 = 0xfb72;
    func_0x000297e6(0x22b2);
    func_0x00029983(0x22b2,uVar7);
    FUN_3ab8_0b0a(*(undefined2 *)(unaff_BP + 8));
    do {
      uVar7 = *(undefined2 *)(unaff_BP + -0x250);
      *(undefined2 *)(unaff_BP + -0x202) = *(undefined2 *)(unaff_BP + -0x252);
      *(undefined2 *)(unaff_BP + -0x200) = uVar7;
      while( true ) {
        uVar3 = *(uint *)(unaff_BP + -0x1cc);
        uVar5 = uVar3 < 8;
        uVar6 = uVar3 == 8;
        if (8 < (int)uVar3) {
          uVar3 = *(uint *)(unaff_BP + -0x1cc);
          uVar5 = uVar3 < 0xf;
          uVar6 = uVar3 == 0xf;
          if ((int)uVar3 < 0x10) goto LAB_3ab8_50ba;
        }
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar5 || (bool)uVar6) break;
        uVar5 = 0;
        uVar6 = (*(uint *)(unaff_BP + -0x8a) & 0x8000) == 0;
        if (!(bool)uVar6) goto LAB_3ab8_50ba;
        func_0x000297e6(0x22b2);
        func_0x00029bb5(0x22b2,unaff_BP + -0x202);
        func_0x00029983(0x22b2);
        piVar1 = (int *)(unaff_BP + -0x8c);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 << 1;
        *(uint *)(unaff_BP + -0x8a) = *(uint *)(unaff_BP + -0x8a) << 1 | (uint)(iVar4 < 0);
        uVar7 = *(undefined2 *)0x9d8a;
        *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)0x9d88;
        *(undefined2 *)(unaff_BP + -0x82) = uVar7;
      }
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar6) {
        func_0x000297e6(0x22b2);
        FUN_28b3_100d(0x22b2);
        func_0x00029983(0x22b2);
      }
LAB_3ab8_50ba:
      uVar7 = *(undefined2 *)(unaff_BP + -0x24c);
      *(undefined2 *)(unaff_BP + -0x1d0) = *(undefined2 *)(unaff_BP + -0x24e);
      *(undefined2 *)(unaff_BP + -0x1ce) = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x25a);
      *(undefined2 *)(unaff_BP + -0x1d4) = *(undefined2 *)(unaff_BP + -0x25c);
      *(undefined2 *)(unaff_BP + -0x1d2) = uVar7;
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x00029bfc(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar5 || (bool)uVar6) {
        uVar7 = *(undefined2 *)0x9df2;
        *(undefined2 *)(unaff_BP + -0xc4) = *(undefined2 *)0x9df0;
        *(undefined2 *)(unaff_BP + -0xc2) = uVar7;
        FUN_3ab8_3fca();
        return;
      }
      func_0x000297e6(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x00029983(0x22b2);
      uVar7 = *(undefined2 *)0x9d8a;
      *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)0x9d88;
      *(undefined2 *)(unaff_BP + -0x82) = uVar7;
      uVar3 = *(uint *)(unaff_BP + -0x1cc);
      uVar5 = uVar3 < 8;
      uVar6 = uVar3 == 8;
      if ((int)uVar3 < 9) {
LAB_3ab8_4ca3:
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar5 && !(bool)uVar6) {
          FUN_3ab8_5076();
          return;
        }
        func_0x000297e6(0x22b2);
        FUN_28b3_100d(0x22b2);
        func_0x00029983(0x22b2);
        uVar7 = *(undefined2 *)(unaff_BP + -500);
        *(undefined2 *)(unaff_BP + -0x252) = *(undefined2 *)(unaff_BP + -0x1f6);
        *(undefined2 *)(unaff_BP + -0x250) = uVar7;
      }
      else {
        uVar3 = *(uint *)(unaff_BP + -0x1cc);
        uVar5 = uVar3 < 0xf;
        uVar6 = uVar3 == 0xf;
        if (0xf < (int)uVar3) goto LAB_3ab8_4ca3;
      }
      if ((10 < *(int *)(unaff_BP + -0x1cc)) && (*(int *)(unaff_BP + -0x1cc) < 0x10)) {
        uVar7 = *(undefined2 *)(unaff_BP + -0x25e);
        *(undefined2 *)(unaff_BP + -600) = *(undefined2 *)(unaff_BP + -0x260);
        *(undefined2 *)(unaff_BP + -0x256) = uVar7;
        func_0x000297e6(0x22b2);
        func_0x00029bb5(0x22b2,unaff_BP + -0x252);
        func_0x00029983(0x22b2);
        iVar4 = *(int *)(unaff_BP + -0x254) * 4;
        uVar7 = *(undefined2 *)(unaff_BP + iVar4 + -0x248);
        *(undefined2 *)(unaff_BP + -0x260) = *(undefined2 *)(unaff_BP + iVar4 + -0x24a);
        *(undefined2 *)(unaff_BP + -0x25e) = uVar7;
        uVar3 = *(uint *)(unaff_BP + -0x1da);
        *(int *)(unaff_BP + -0x254) = *(int *)(unaff_BP + -0x254) + 1;
        uVar2 = *(uint *)(unaff_BP + -0x254);
        uVar5 = uVar2 < uVar3;
        uVar6 = uVar2 == uVar3;
        if ((int)uVar3 < (int)uVar2) {
          *(undefined2 *)(unaff_BP + -0x254) = 0;
        }
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x00029bfc(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar5 || (bool)uVar6) {
          uVar7 = *(undefined2 *)(unaff_BP + -500);
          *(undefined2 *)(unaff_BP + -0x252) = *(undefined2 *)(unaff_BP + -0x1f6);
          *(undefined2 *)(unaff_BP + -0x250) = uVar7;
          uVar7 = *(undefined2 *)0x9d8a;
          *(undefined2 *)(unaff_BP + -0x260) = *(undefined2 *)0x9d88;
          *(undefined2 *)(unaff_BP + -0x25e) = uVar7;
        }
      }
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      FUN_28b3_1163(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      FUN_28b3_117c(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      FUN_28b3_1163(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      FUN_28b3_117c(0x22b2);
      func_0x00029983(0x22b2);
      uVar6 = *(int *)(unaff_BP + -0x7e) == 0;
      uVar5 = 1;
      if ((bool)uVar6) break;
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      uVar5 = 0;
    } while ((bool)uVar6);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar5) {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar5) goto LAB_3ab8_4f4c;
    }
    else {
LAB_3ab8_4f4c:
      FUN_3ab8_0eb3(*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + -0x1e6),
                    *(undefined2 *)(unaff_BP + -0x1e4),*(undefined2 *)(unaff_BP + -0x1ee),
                    *(undefined2 *)(unaff_BP + -0x1ec));
    }
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    uVar7 = 0x22b2;
    func_0x0002996b(0x22b2);
  } while( true );
}



/* 3ab8:5076  FUN_3ab8_5076  19 bytes, 1 callers */

void FUN_3ab8_5076(void)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_BP;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined1 uVar9;
  
  uVar7 = 0x3ab8;
  if ((*(uint *)(unaff_BP + -0x8a) & 0x8000) != 0) {
    func_0x000297e6(0x3ab8);
    func_0x00029bb5(0x22b2,unaff_BP + -0x252);
    func_0x00029983(0x22b2);
    iVar6 = *(int *)(unaff_BP + -0x8c);
    iVar5 = *(int *)(unaff_BP + -0x8a);
    *(uint *)(unaff_BP + -0x8c) = iVar6 << 1 | 1;
    *(uint *)(unaff_BP + -0x8a) = iVar5 << 1 | (uint)(iVar6 < 0);
    goto LAB_3ab8_4c95;
  }
LAB_3ab8_4cea:
  if ((10 < *(int *)(unaff_BP + -0x1cc)) && (*(int *)(unaff_BP + -0x1cc) < 0x10)) {
    uVar2 = *(undefined2 *)(unaff_BP + -0x25e);
    *(undefined2 *)(unaff_BP + -600) = *(undefined2 *)(unaff_BP + -0x260);
    *(undefined2 *)(unaff_BP + -0x256) = uVar2;
    func_0x000297e6(uVar7);
    func_0x00029bb5(0x22b2,unaff_BP + -0x252);
    func_0x00029983(0x22b2);
    iVar6 = *(int *)(unaff_BP + -0x254) * 4;
    uVar7 = *(undefined2 *)(unaff_BP + iVar6 + -0x248);
    *(undefined2 *)(unaff_BP + -0x260) = *(undefined2 *)(unaff_BP + iVar6 + -0x24a);
    *(undefined2 *)(unaff_BP + -0x25e) = uVar7;
    uVar4 = *(uint *)(unaff_BP + -0x1da);
    *(int *)(unaff_BP + -0x254) = *(int *)(unaff_BP + -0x254) + 1;
    uVar3 = *(uint *)(unaff_BP + -0x254);
    uVar8 = uVar3 < uVar4;
    uVar9 = uVar3 == uVar4;
    if ((int)uVar4 < (int)uVar3) {
      *(undefined2 *)(unaff_BP + -0x254) = 0;
    }
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x00029bfc(0x22b2);
    uVar7 = 0x22b2;
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar8 || (bool)uVar9) {
      uVar2 = *(undefined2 *)(unaff_BP + -500);
      *(undefined2 *)(unaff_BP + -0x252) = *(undefined2 *)(unaff_BP + -0x1f6);
      *(undefined2 *)(unaff_BP + -0x250) = uVar2;
      uVar2 = *(undefined2 *)0x9d8a;
      *(undefined2 *)(unaff_BP + -0x260) = *(undefined2 *)0x9d88;
      *(undefined2 *)(unaff_BP + -0x25e) = uVar2;
    }
  }
  func_0x000297e6(uVar7);
  func_0x00029b6d(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x00029983(0x22b2);
  uVar8 = *(int *)(unaff_BP + -0x7e) == 0;
  if ((bool)uVar8) {
LAB_3ab8_4ecc:
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar8) {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar8) goto LAB_3ab8_4f4c;
    }
    else {
LAB_3ab8_4f4c:
      FUN_3ab8_0eb3(*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + -0x1e6),
                    *(undefined2 *)(unaff_BP + -0x1e4),*(undefined2 *)(unaff_BP + -0x1ee),
                    *(undefined2 *)(unaff_BP + -0x1ec));
    }
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029983(0x22b2);
    uVar7 = 0xfb5f;
    func_0x000297e6(0x22b2,*(undefined2 *)(unaff_BP + -0x1e6),*(undefined2 *)(unaff_BP + -0x1e4),
                    *(undefined2 *)(unaff_BP + -0x1ee),*(undefined2 *)(unaff_BP + -0x1ec));
    func_0x00029983(0x22b2,uVar7);
    uVar7 = 0xfb72;
    func_0x000297e6(0x22b2);
    func_0x00029983(0x22b2,uVar7);
    FUN_3ab8_0b0a(*(undefined2 *)(unaff_BP + 8));
  }
  else {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar8) goto LAB_3ab8_4ecc;
  }
  uVar7 = *(undefined2 *)(unaff_BP + -0x250);
  *(undefined2 *)(unaff_BP + -0x202) = *(undefined2 *)(unaff_BP + -0x252);
  *(undefined2 *)(unaff_BP + -0x200) = uVar7;
  while( true ) {
    uVar4 = *(uint *)(unaff_BP + -0x1cc);
    uVar8 = uVar4 < 8;
    uVar9 = uVar4 == 8;
    if (8 < (int)uVar4) {
      uVar4 = *(uint *)(unaff_BP + -0x1cc);
      uVar8 = uVar4 < 0xf;
      uVar9 = uVar4 == 0xf;
      if ((int)uVar4 < 0x10) goto LAB_3ab8_50ba;
    }
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar8 || (bool)uVar9) break;
    uVar8 = 0;
    uVar9 = (*(uint *)(unaff_BP + -0x8a) & 0x8000) == 0;
    if (!(bool)uVar9) goto LAB_3ab8_50ba;
    func_0x000297e6(0x22b2);
    func_0x00029bb5(0x22b2,unaff_BP + -0x202);
    func_0x00029983(0x22b2);
    piVar1 = (int *)(unaff_BP + -0x8c);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 << 1;
    *(uint *)(unaff_BP + -0x8a) = *(uint *)(unaff_BP + -0x8a) << 1 | (uint)(iVar6 < 0);
    uVar7 = *(undefined2 *)0x9d8a;
    *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)0x9d88;
    *(undefined2 *)(unaff_BP + -0x82) = uVar7;
  }
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar9) {
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x00029983(0x22b2);
  }
LAB_3ab8_50ba:
  uVar7 = *(undefined2 *)(unaff_BP + -0x24c);
  *(undefined2 *)(unaff_BP + -0x1d0) = *(undefined2 *)(unaff_BP + -0x24e);
  *(undefined2 *)(unaff_BP + -0x1ce) = uVar7;
  uVar7 = *(undefined2 *)(unaff_BP + -0x25a);
  *(undefined2 *)(unaff_BP + -0x1d4) = *(undefined2 *)(unaff_BP + -0x25c);
  *(undefined2 *)(unaff_BP + -0x1d2) = uVar7;
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x00029bfc(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar8 || (bool)uVar9) {
    uVar7 = *(undefined2 *)0x9df2;
    *(undefined2 *)(unaff_BP + -0xc4) = *(undefined2 *)0x9df0;
    *(undefined2 *)(unaff_BP + -0xc2) = uVar7;
    FUN_3ab8_3fca();
    return;
  }
  func_0x000297e6(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029983(0x22b2);
  uVar7 = *(undefined2 *)0x9d8a;
  *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)0x9d88;
  *(undefined2 *)(unaff_BP + -0x82) = uVar7;
LAB_3ab8_4c95:
  uVar7 = 0x22b2;
  uVar4 = *(uint *)(unaff_BP + -0x1cc);
  uVar8 = uVar4 < 8;
  uVar9 = uVar4 == 8;
  if (8 < (int)uVar4) goto code_r0x0003f81c;
  goto LAB_3ab8_4ca3;
code_r0x0003f81c:
  uVar4 = *(uint *)(unaff_BP + -0x1cc);
  uVar8 = uVar4 < 0xf;
  uVar9 = uVar4 == 0xf;
  if (0xf < (int)uVar4) {
LAB_3ab8_4ca3:
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar8 && !(bool)uVar9) {
      FUN_3ab8_5076();
      return;
    }
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    uVar7 = 0x22b2;
    func_0x00029983(0x22b2);
    uVar2 = *(undefined2 *)(unaff_BP + -500);
    *(undefined2 *)(unaff_BP + -0x252) = *(undefined2 *)(unaff_BP + -0x1f6);
    *(undefined2 *)(unaff_BP + -0x250) = uVar2;
  }
  goto LAB_3ab8_4cea;
}



/* 3ab8:5089  FUN_3ab8_5089  196 bytes, 3 callers */

void FUN_3ab8_5089(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int unaff_BP;
  int iVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  
  func_0x00029bb5(0x3ab8,unaff_BP + -0x252);
  func_0x00029983(0x22b2);
  iVar5 = *(int *)(unaff_BP + -0x8c);
  iVar4 = *(int *)(unaff_BP + -0x8a);
  *(uint *)(unaff_BP + -0x8c) = iVar5 << 1 | 1;
  *(uint *)(unaff_BP + -0x8a) = iVar4 << 1 | (uint)(iVar5 < 0);
  do {
    uVar2 = *(uint *)(unaff_BP + -0x1cc);
    uVar6 = uVar2 < 8;
    uVar7 = uVar2 == 8;
    if ((int)uVar2 < 9) {
LAB_3ab8_4ca3:
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar6 && !(bool)uVar7) {
        FUN_3ab8_5076();
        return;
      }
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      func_0x00029983(0x22b2);
      uVar8 = *(undefined2 *)(unaff_BP + -500);
      *(undefined2 *)(unaff_BP + -0x252) = *(undefined2 *)(unaff_BP + -0x1f6);
      *(undefined2 *)(unaff_BP + -0x250) = uVar8;
    }
    else {
      uVar2 = *(uint *)(unaff_BP + -0x1cc);
      uVar6 = uVar2 < 0xf;
      uVar7 = uVar2 == 0xf;
      if (0xf < (int)uVar2) goto LAB_3ab8_4ca3;
    }
    if ((10 < *(int *)(unaff_BP + -0x1cc)) && (*(int *)(unaff_BP + -0x1cc) < 0x10)) {
      uVar8 = *(undefined2 *)(unaff_BP + -0x25e);
      *(undefined2 *)(unaff_BP + -600) = *(undefined2 *)(unaff_BP + -0x260);
      *(undefined2 *)(unaff_BP + -0x256) = uVar8;
      func_0x000297e6(0x22b2);
      func_0x00029bb5(0x22b2,unaff_BP + -0x252);
      func_0x00029983(0x22b2);
      iVar5 = *(int *)(unaff_BP + -0x254) * 4;
      uVar8 = *(undefined2 *)(unaff_BP + iVar5 + -0x248);
      *(undefined2 *)(unaff_BP + -0x260) = *(undefined2 *)(unaff_BP + iVar5 + -0x24a);
      *(undefined2 *)(unaff_BP + -0x25e) = uVar8;
      uVar2 = *(uint *)(unaff_BP + -0x1da);
      *(int *)(unaff_BP + -0x254) = *(int *)(unaff_BP + -0x254) + 1;
      uVar3 = *(uint *)(unaff_BP + -0x254);
      uVar6 = uVar3 < uVar2;
      uVar7 = uVar3 == uVar2;
      if ((int)uVar2 < (int)uVar3) {
        *(undefined2 *)(unaff_BP + -0x254) = 0;
      }
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x00029bfc(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar6 || (bool)uVar7) {
        uVar8 = *(undefined2 *)(unaff_BP + -500);
        *(undefined2 *)(unaff_BP + -0x252) = *(undefined2 *)(unaff_BP + -0x1f6);
        *(undefined2 *)(unaff_BP + -0x250) = uVar8;
        uVar8 = *(undefined2 *)0x9d8a;
        *(undefined2 *)(unaff_BP + -0x260) = *(undefined2 *)0x9d88;
        *(undefined2 *)(unaff_BP + -0x25e) = uVar8;
      }
    }
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_1163(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_117c(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_1163(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_117c(0x22b2);
    func_0x00029983(0x22b2);
    uVar6 = *(int *)(unaff_BP + -0x7e) == 0;
    if ((bool)uVar6) {
LAB_3ab8_4ecc:
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar6) {
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar6) goto LAB_3ab8_4f4c;
      }
      else {
LAB_3ab8_4f4c:
        FUN_3ab8_0eb3(*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + -0x1e6),
                      *(undefined2 *)(unaff_BP + -0x1e4),*(undefined2 *)(unaff_BP + -0x1ee),
                      *(undefined2 *)(unaff_BP + -0x1ec));
      }
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029983(0x22b2);
      uVar8 = 0xfb5f;
      func_0x000297e6(0x22b2,*(undefined2 *)(unaff_BP + -0x1e6),*(undefined2 *)(unaff_BP + -0x1e4),
                      *(undefined2 *)(unaff_BP + -0x1ee),*(undefined2 *)(unaff_BP + -0x1ec));
      func_0x00029983(0x22b2,uVar8);
      uVar8 = 0xfb72;
      func_0x000297e6(0x22b2);
      func_0x00029983(0x22b2,uVar8);
      FUN_3ab8_0b0a(*(undefined2 *)(unaff_BP + 8));
    }
    else {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar6) goto LAB_3ab8_4ecc;
    }
    uVar8 = *(undefined2 *)(unaff_BP + -0x250);
    *(undefined2 *)(unaff_BP + -0x202) = *(undefined2 *)(unaff_BP + -0x252);
    *(undefined2 *)(unaff_BP + -0x200) = uVar8;
    while( true ) {
      uVar2 = *(uint *)(unaff_BP + -0x1cc);
      uVar6 = uVar2 < 8;
      uVar7 = uVar2 == 8;
      if (8 < (int)uVar2) {
        uVar2 = *(uint *)(unaff_BP + -0x1cc);
        uVar6 = uVar2 < 0xf;
        uVar7 = uVar2 == 0xf;
        if ((int)uVar2 < 0x10) goto LAB_3ab8_50ba;
      }
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar6 || (bool)uVar7) break;
      uVar6 = 0;
      uVar7 = (*(uint *)(unaff_BP + -0x8a) & 0x8000) == 0;
      if (!(bool)uVar7) goto LAB_3ab8_50ba;
      func_0x000297e6(0x22b2);
      func_0x00029bb5(0x22b2,unaff_BP + -0x202);
      func_0x00029983(0x22b2);
      piVar1 = (int *)(unaff_BP + -0x8c);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 << 1;
      *(uint *)(unaff_BP + -0x8a) = *(uint *)(unaff_BP + -0x8a) << 1 | (uint)(iVar5 < 0);
      uVar8 = *(undefined2 *)0x9d8a;
      *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)0x9d88;
      *(undefined2 *)(unaff_BP + -0x82) = uVar8;
    }
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar7) {
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      func_0x00029983(0x22b2);
    }
LAB_3ab8_50ba:
    uVar8 = *(undefined2 *)(unaff_BP + -0x24c);
    *(undefined2 *)(unaff_BP + -0x1d0) = *(undefined2 *)(unaff_BP + -0x24e);
    *(undefined2 *)(unaff_BP + -0x1ce) = uVar8;
    uVar8 = *(undefined2 *)(unaff_BP + -0x25a);
    *(undefined2 *)(unaff_BP + -0x1d4) = *(undefined2 *)(unaff_BP + -0x25c);
    *(undefined2 *)(unaff_BP + -0x1d2) = uVar8;
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x00029bfc(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar6 || (bool)uVar7) {
      uVar8 = *(undefined2 *)0x9df2;
      *(undefined2 *)(unaff_BP + -0xc4) = *(undefined2 *)0x9df0;
      *(undefined2 *)(unaff_BP + -0xc2) = uVar8;
      FUN_3ab8_3fca();
      return;
    }
    func_0x000297e6(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029983(0x22b2);
    uVar8 = *(undefined2 *)0x9d8a;
    *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)0x9d88;
    *(undefined2 *)(unaff_BP + -0x82) = uVar8;
  } while( true );
}



/* 3ab8:514d  FUN_3ab8_514d  31 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_514d(void)

{
  int *piVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  int unaff_BP;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 *puVar17;
  undefined2 auStack_30 [2];
  undefined2 uStack_2c;
  undefined2 auStack_28 [6];
  undefined2 auStack_1a [9];
  int iStack_8;
  int iStack_6;
  
  cVar8 = FUN_12c1_009c();
  if (cVar8 == '\x1b') {
    *(undefined2 *)0xa4a = 1;
    uVar9 = FUN_2bb4_5f95();
    return uVar9;
  }
  *(undefined1 *)(unaff_BP + -2) = 1;
  *(undefined2 *)(unaff_BP + -0xe2) = 1;
  *(undefined2 *)(unaff_BP + -0xe0) = 0;
  iVar10 = 0x11f2;
  do {
    uVar5 = *(uint *)(unaff_BP + -0xe0);
    uVar6 = *(uint *)0x14e;
    uVar15 = uVar6 < uVar5;
    uVar16 = uVar6 == uVar5;
    if ((int)uVar6 < (int)uVar5) {
code_r0x000316aa:
      do {
        if (!(bool)uVar15 && !(bool)uVar16) {
          return 0;
        }
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6e63();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6e63();
        do {
          uVar9 = *(undefined2 *)(unaff_BP + -0x7a);
          *(undefined2 *)(unaff_BP + -0x78) = *(undefined2 *)(unaff_BP + -0x7c);
          *(undefined2 *)(unaff_BP + -0x76) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x82);
          *(undefined2 *)(unaff_BP + -0x80) = *(undefined2 *)(unaff_BP + -0x84);
          *(undefined2 *)(unaff_BP + -0x7e) = uVar9;
          *(int *)(unaff_BP + -0x86) = *(int *)(unaff_BP + -0x86) + 1;
          if (0x18 < *(int *)(unaff_BP + -0x86)) {
            return 0;
          }
          uVar9 = *(undefined2 *)(unaff_BP + -0x76);
          *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + -0x78);
          *(undefined2 *)(unaff_BP + -0x88) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x7e);
          *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)(unaff_BP + -0x80);
          *(undefined2 *)(unaff_BP + -0x8c) = uVar9;
          iStack_6 = unaff_BP + -0x8e;
          iStack_8 = unaff_BP + -0x8a;
          puVar12 = auStack_28;
          puVar13 = auStack_28;
          puVar11 = (undefined2 *)(unaff_BP + -0x54);
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar3 = puVar12;
            puVar12 = puVar12 + 1;
            puVar17 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar3 = *puVar17;
          }
          uStack_2c = 0x1496;
          iVar10 = FUN_2bb4_55b8();
          if (iVar10 == 0) {
            return 0;
          }
          uVar9 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x1e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x1c) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x8c);
          *(undefined2 *)(unaff_BP + -0x1a) = *(undefined2 *)(unaff_BP + -0x8e);
          *(undefined2 *)(unaff_BP + -0x18) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x90);
          *(undefined2 *)(unaff_BP + -0x16) = *(undefined2 *)(unaff_BP + -0x92);
          *(undefined2 *)(unaff_BP + -0x14) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x94);
          *(undefined2 *)(unaff_BP + -0x12) = *(undefined2 *)(unaff_BP + -0x96);
          *(undefined2 *)(unaff_BP + -0x10) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x76);
          *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + -0x78);
          *(undefined2 *)(unaff_BP + -0x88) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x7e);
          *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)(unaff_BP + -0x80);
          *(undefined2 *)(unaff_BP + -0x8c) = uVar9;
          iStack_6 = unaff_BP + -0x8e;
          iStack_8 = unaff_BP + -0x8a;
          puVar11 = (undefined2 *)(unaff_BP + -0x74);
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar3 = puVar13;
            puVar13 = puVar13 + 1;
            puVar17 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar3 = *puVar17;
          }
          uStack_2c = 0x151b;
          iVar10 = FUN_2bb4_55b8();
          uVar15 = 0;
          uVar16 = iVar10 == 0;
          if ((bool)uVar16) {
            return 0;
          }
          FUN_32b2_6cc6();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          uVar9 = *(undefined2 *)(unaff_BP + -0x90);
          *(undefined2 *)(unaff_BP + -0x2c) = *(undefined2 *)(unaff_BP + -0x92);
          *(undefined2 *)(unaff_BP + -0x2a) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x94);
          *(undefined2 *)(unaff_BP + -0x28) = *(undefined2 *)(unaff_BP + -0x96);
          *(undefined2 *)(unaff_BP + -0x26) = uVar9;
          FUN_32b2_6cc6();
          FUN_32b2_6e4b();
          FUN_32b2_7035();
          FUN_32b2_6fc7();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          FUN_32b2_6d14();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_7191();
          if ((bool)uVar15 || (bool)uVar16) {
            FUN_32b2_6d14();
            FUN_32b2_6cc6();
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar15 || (bool)uVar16) {
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_704d();
              FUN_32b2_7095();
              FUN_32b2_6e63();
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_704d();
              FUN_32b2_7095();
              FUN_32b2_6e63();
              return 1;
            }
          }
          puVar12 = auStack_1a;
          puVar11 = (undefined2 *)(unaff_BP + -0x34);
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar3 = puVar12;
            puVar12 = puVar12 + 1;
            puVar17 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar3 = *puVar17;
          }
          puVar12 = auStack_30;
          puVar11 = (undefined2 *)(unaff_BP + -0x1e);
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar3 = puVar12;
            puVar12 = puVar12 + 1;
            puVar17 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar3 = *puVar17;
          }
          iVar10 = FUN_3ab8_4c91(0x32b2);
          uVar15 = 0;
          uVar16 = iVar10 == 0;
        } while (!(bool)uVar16);
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if (!(bool)uVar15 && !(bool)uVar16) {
          return 0;
        }
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_7191();
      } while( true );
    }
    if (((int)uVar6 <= (int)uVar5) &&
       (uVar16 = *(uint *)0x14c == *(uint *)(unaff_BP + -0xe2),
       *(uint *)0x14c < *(uint *)(unaff_BP + -0xe2))) {
      uVar15 = true;
      goto code_r0x000316aa;
    }
    uVar9 = *(undefined2 *)0x9df0;
    uVar7 = *(undefined2 *)0x9df2;
    *(undefined2 *)(unaff_BP + -0x268) = uVar9;
    *(undefined2 *)(unaff_BP + -0x266) = uVar7;
    *(undefined2 *)(unaff_BP + -0x264) = uVar9;
    *(undefined2 *)(unaff_BP + -0x262) = uVar7;
    uVar9 = *(undefined2 *)0x9d92;
    *(undefined2 *)(unaff_BP + -0x25c) = *(undefined2 *)0x9d90;
    *(undefined2 *)(unaff_BP + -0x25a) = uVar9;
    *(undefined2 *)(unaff_BP + -0x1fe) = 0;
    *(undefined2 *)(unaff_BP + -0x260) = 0;
    iVar14 = 0;
    iStack_8 = -0x1f2;
    iStack_6 = iVar10;
    puVar17 = (undefined2 *)func_0x00000271();
    puVar12 = (undefined2 *)puVar17;
    puVar11 = (undefined2 *)(unaff_BP + -0x68);
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar4 = puVar11;
      puVar11 = puVar11 + 1;
      puVar3 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar4 = *puVar3;
    }
    if ((uint)*(byte *)(unaff_BP + -0x4d) == *(uint *)(unaff_BP + -0x42)) {
      piVar1 = (int *)(unaff_BP + -6);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) - (uint)(iVar10 == 0);
      iVar14 = 0x11f2;
      iStack_6 = -0x1c5;
      iVar10 = FUN_10ad_1ad0();
      if ((((iVar10 != 0) && (*(char *)(unaff_BP + -0x4e) != '\0')) &&
          (*(byte *)(unaff_BP + -0x4e) < 0x13)) &&
         ((*(char *)(unaff_BP + -0x4e) != '\t' && (*(char *)(unaff_BP + -0x4e) != '\n')))) {
        uVar9 = FUN_3ab8_516c();
        return uVar9;
      }
    }
    puVar2 = (uint *)(unaff_BP + -0xe2);
    uVar5 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0xe0) = *(int *)(unaff_BP + -0xe0) + (uint)(0xfffe < uVar5);
    iVar10 = iVar14;
  } while( true );
}



/* 3ab8:516c  FUN_3ab8_516c  195 bytes, 1 callers */

undefined2 FUN_3ab8_516c(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 uVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  int unaff_BP;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 *puVar17;
  undefined2 auStack_30 [2];
  undefined2 uStack_2c;
  undefined2 auStack_28 [6];
  undefined2 auStack_1a [8];
  undefined2 uStack_a;
  int iStack_8;
  int iStack_6;
  
  if (*(char *)(unaff_BP + -2) != '\0') {
    *(undefined1 *)(unaff_BP + -2) = 0;
    iStack_6 = 0x3ab8;
    iStack_8 = -0x2fd;
    FUN_1000_0599();
    iStack_6 = -0x2f2;
    func_0x00012276();
  }
  uVar15 = false;
  if ((*(byte *)(unaff_BP + -0xe2) & 3) == 0) {
    cVar8 = FUN_12c1_009c();
    if (cVar8 == '\x1b') {
      *(undefined2 *)0xa4a = 1;
      uVar9 = FUN_2bb4_5f95();
      return uVar9;
    }
    iStack_6 = 0x11f2;
    iStack_8 = 0xfd2f;
    FUN_1000_0599();
    iStack_6 = 0x49db;
    iStack_8 = 0xdef;
    uStack_a = 0xfd40;
    func_0x00012276();
    uVar15 = (undefined1 *)0xfff9 < &iStack_6;
  }
  uVar9 = *(undefined2 *)(unaff_BP + -0x62);
  *(undefined2 *)(unaff_BP + -0x19a) = *(undefined2 *)(unaff_BP + -100);
  *(undefined2 *)(unaff_BP + -0x198) = uVar9;
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029983();
  func_0x000297e6();
  func_0x000297e6();
  func_0x0002996b();
  func_0x00029bb5();
  FUN_28b3_1181();
  iVar11 = 0x22b2;
  if (!(bool)uVar15) {
    uVar9 = FUN_3ab8_52e1();
    return uVar9;
  }
  do {
    puVar2 = (uint *)(unaff_BP + -0xe2);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0xe0) = *(int *)(unaff_BP + -0xe0) + (uint)(0xfffe < uVar3);
    uVar3 = *(uint *)(unaff_BP + -0xe0);
    uVar6 = *(uint *)0x14e;
    uVar15 = uVar6 < uVar3;
    uVar16 = uVar6 == uVar3;
    if ((int)uVar6 < (int)uVar3) {
code_r0x000316aa:
      do {
        if (!(bool)uVar15 && !(bool)uVar16) {
          return 0;
        }
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6e63();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6e63();
        do {
          uVar9 = *(undefined2 *)(unaff_BP + -0x7a);
          *(undefined2 *)(unaff_BP + -0x78) = *(undefined2 *)(unaff_BP + -0x7c);
          *(undefined2 *)(unaff_BP + -0x76) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x82);
          *(undefined2 *)(unaff_BP + -0x80) = *(undefined2 *)(unaff_BP + -0x84);
          *(undefined2 *)(unaff_BP + -0x7e) = uVar9;
          *(int *)(unaff_BP + -0x86) = *(int *)(unaff_BP + -0x86) + 1;
          if (0x18 < *(int *)(unaff_BP + -0x86)) {
            return 0;
          }
          uVar9 = *(undefined2 *)(unaff_BP + -0x76);
          *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + -0x78);
          *(undefined2 *)(unaff_BP + -0x88) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x7e);
          *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)(unaff_BP + -0x80);
          *(undefined2 *)(unaff_BP + -0x8c) = uVar9;
          iStack_6 = unaff_BP + -0x8e;
          iStack_8 = unaff_BP + -0x8a;
          puVar13 = auStack_28;
          puVar14 = auStack_28;
          puVar12 = (undefined2 *)(unaff_BP + -0x54);
          for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
            puVar4 = puVar13;
            puVar13 = puVar13 + 1;
            puVar17 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar4 = *puVar17;
          }
          uStack_2c = 0x1496;
          iVar11 = FUN_2bb4_55b8();
          if (iVar11 == 0) {
            return 0;
          }
          uVar9 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x1e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x1c) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x8c);
          *(undefined2 *)(unaff_BP + -0x1a) = *(undefined2 *)(unaff_BP + -0x8e);
          *(undefined2 *)(unaff_BP + -0x18) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x90);
          *(undefined2 *)(unaff_BP + -0x16) = *(undefined2 *)(unaff_BP + -0x92);
          *(undefined2 *)(unaff_BP + -0x14) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x94);
          *(undefined2 *)(unaff_BP + -0x12) = *(undefined2 *)(unaff_BP + -0x96);
          *(undefined2 *)(unaff_BP + -0x10) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x76);
          *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + -0x78);
          *(undefined2 *)(unaff_BP + -0x88) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x7e);
          *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)(unaff_BP + -0x80);
          *(undefined2 *)(unaff_BP + -0x8c) = uVar9;
          iStack_6 = unaff_BP + -0x8e;
          iStack_8 = unaff_BP + -0x8a;
          puVar12 = (undefined2 *)(unaff_BP + -0x74);
          for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
            puVar4 = puVar14;
            puVar14 = puVar14 + 1;
            puVar17 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar4 = *puVar17;
          }
          uStack_2c = 0x151b;
          iVar11 = FUN_2bb4_55b8();
          uVar15 = 0;
          uVar16 = iVar11 == 0;
          if ((bool)uVar16) {
            return 0;
          }
          FUN_32b2_6cc6();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          uVar9 = *(undefined2 *)(unaff_BP + -0x90);
          *(undefined2 *)(unaff_BP + -0x2c) = *(undefined2 *)(unaff_BP + -0x92);
          *(undefined2 *)(unaff_BP + -0x2a) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x94);
          *(undefined2 *)(unaff_BP + -0x28) = *(undefined2 *)(unaff_BP + -0x96);
          *(undefined2 *)(unaff_BP + -0x26) = uVar9;
          FUN_32b2_6cc6();
          FUN_32b2_6e4b();
          FUN_32b2_7035();
          FUN_32b2_6fc7();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          FUN_32b2_6d14();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_7191();
          if ((bool)uVar15 || (bool)uVar16) {
            FUN_32b2_6d14();
            FUN_32b2_6cc6();
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar15 || (bool)uVar16) {
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_704d();
              FUN_32b2_7095();
              FUN_32b2_6e63();
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_704d();
              FUN_32b2_7095();
              FUN_32b2_6e63();
              return 1;
            }
          }
          puVar13 = auStack_1a;
          puVar12 = (undefined2 *)(unaff_BP + -0x34);
          for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
            puVar4 = puVar13;
            puVar13 = puVar13 + 1;
            puVar17 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar4 = *puVar17;
          }
          puVar13 = auStack_30;
          puVar12 = (undefined2 *)(unaff_BP + -0x1e);
          for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
            puVar4 = puVar13;
            puVar13 = puVar13 + 1;
            puVar17 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar4 = *puVar17;
          }
          iVar11 = FUN_3ab8_4c91(0x32b2);
          uVar15 = 0;
          uVar16 = iVar11 == 0;
        } while (!(bool)uVar16);
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if (!(bool)uVar15 && !(bool)uVar16) {
          return 0;
        }
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_7191();
      } while( true );
    }
    if (((int)uVar6 <= (int)uVar3) &&
       (uVar16 = *(uint *)0x14c == *(uint *)(unaff_BP + -0xe2),
       *(uint *)0x14c < *(uint *)(unaff_BP + -0xe2))) {
      uVar15 = true;
      goto code_r0x000316aa;
    }
    uVar9 = *(undefined2 *)0x9df0;
    uVar7 = *(undefined2 *)0x9df2;
    *(undefined2 *)(unaff_BP + -0x268) = uVar9;
    *(undefined2 *)(unaff_BP + -0x266) = uVar7;
    *(undefined2 *)(unaff_BP + -0x264) = uVar9;
    *(undefined2 *)(unaff_BP + -0x262) = uVar7;
    uVar9 = *(undefined2 *)0x9d92;
    *(undefined2 *)(unaff_BP + -0x25c) = *(undefined2 *)0x9d90;
    *(undefined2 *)(unaff_BP + -0x25a) = uVar9;
    *(undefined2 *)(unaff_BP + -0x1fe) = 0;
    *(undefined2 *)(unaff_BP + -0x260) = 0;
    iStack_8 = -0x1f2;
    iStack_6 = iVar11;
    puVar17 = (undefined2 *)func_0x00000271();
    puVar13 = (undefined2 *)puVar17;
    puVar12 = (undefined2 *)(unaff_BP + -0x68);
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar5 = puVar12;
      puVar12 = puVar12 + 1;
      puVar4 = puVar13;
      puVar13 = puVar13 + 1;
      *puVar5 = *puVar4;
    }
    iVar11 = 0;
    if ((uint)*(byte *)(unaff_BP + -0x4d) == *(uint *)(unaff_BP + -0x42)) {
      piVar1 = (int *)(unaff_BP + -6);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) - (uint)(iVar11 == 0);
      iVar11 = 0x11f2;
      iStack_6 = -0x1c5;
      iVar10 = FUN_10ad_1ad0();
      if ((((iVar10 != 0) && (*(char *)(unaff_BP + -0x4e) != '\0')) &&
          (*(byte *)(unaff_BP + -0x4e) < 0x13)) &&
         ((*(char *)(unaff_BP + -0x4e) != '\t' && (*(char *)(unaff_BP + -0x4e) != '\n')))) {
        uVar9 = FUN_3ab8_516c();
        return uVar9;
      }
    }
  } while( true );
}



/* 3ab8:522f  FUN_3ab8_522f  178 bytes, 3 callers */

undefined2 FUN_3ab8_522f(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  int unaff_BP;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined2 *puVar16;
  undefined2 auStack_30 [2];
  undefined2 uStack_2c;
  undefined2 auStack_28 [6];
  undefined2 auStack_1a [9];
  int iStack_8;
  int iStack_6;
  
  iVar10 = 0x3ab8;
  do {
    puVar2 = (uint *)(unaff_BP + -0xe2);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0xe0) = *(int *)(unaff_BP + -0xe0) + (uint)(0xfffe < uVar3);
    uVar3 = *(uint *)(unaff_BP + -0xe0);
    uVar6 = *(uint *)0x14e;
    uVar14 = uVar6 < uVar3;
    uVar15 = uVar6 == uVar3;
    if ((int)uVar6 < (int)uVar3) {
code_r0x000316aa:
      do {
        if (!(bool)uVar14 && !(bool)uVar15) {
          return 0;
        }
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6e63();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6e63();
        do {
          uVar9 = *(undefined2 *)(unaff_BP + -0x7a);
          *(undefined2 *)(unaff_BP + -0x78) = *(undefined2 *)(unaff_BP + -0x7c);
          *(undefined2 *)(unaff_BP + -0x76) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x82);
          *(undefined2 *)(unaff_BP + -0x80) = *(undefined2 *)(unaff_BP + -0x84);
          *(undefined2 *)(unaff_BP + -0x7e) = uVar9;
          *(int *)(unaff_BP + -0x86) = *(int *)(unaff_BP + -0x86) + 1;
          if (0x18 < *(int *)(unaff_BP + -0x86)) {
            return 0;
          }
          uVar9 = *(undefined2 *)(unaff_BP + -0x76);
          *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + -0x78);
          *(undefined2 *)(unaff_BP + -0x88) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x7e);
          *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)(unaff_BP + -0x80);
          *(undefined2 *)(unaff_BP + -0x8c) = uVar9;
          iStack_6 = unaff_BP + -0x8e;
          iStack_8 = unaff_BP + -0x8a;
          puVar12 = auStack_28;
          puVar13 = auStack_28;
          puVar11 = (undefined2 *)(unaff_BP + -0x54);
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar4 = puVar12;
            puVar12 = puVar12 + 1;
            puVar16 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar4 = *puVar16;
          }
          uStack_2c = 0x1496;
          iVar10 = FUN_2bb4_55b8();
          if (iVar10 == 0) {
            return 0;
          }
          uVar9 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x1e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x1c) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x8c);
          *(undefined2 *)(unaff_BP + -0x1a) = *(undefined2 *)(unaff_BP + -0x8e);
          *(undefined2 *)(unaff_BP + -0x18) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x90);
          *(undefined2 *)(unaff_BP + -0x16) = *(undefined2 *)(unaff_BP + -0x92);
          *(undefined2 *)(unaff_BP + -0x14) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x94);
          *(undefined2 *)(unaff_BP + -0x12) = *(undefined2 *)(unaff_BP + -0x96);
          *(undefined2 *)(unaff_BP + -0x10) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x76);
          *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + -0x78);
          *(undefined2 *)(unaff_BP + -0x88) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x7e);
          *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)(unaff_BP + -0x80);
          *(undefined2 *)(unaff_BP + -0x8c) = uVar9;
          iStack_6 = unaff_BP + -0x8e;
          iStack_8 = unaff_BP + -0x8a;
          puVar11 = (undefined2 *)(unaff_BP + -0x74);
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar4 = puVar13;
            puVar13 = puVar13 + 1;
            puVar16 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar4 = *puVar16;
          }
          uStack_2c = 0x151b;
          iVar10 = FUN_2bb4_55b8();
          uVar14 = 0;
          uVar15 = iVar10 == 0;
          if ((bool)uVar15) {
            return 0;
          }
          FUN_32b2_6cc6();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          uVar9 = *(undefined2 *)(unaff_BP + -0x90);
          *(undefined2 *)(unaff_BP + -0x2c) = *(undefined2 *)(unaff_BP + -0x92);
          *(undefined2 *)(unaff_BP + -0x2a) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x94);
          *(undefined2 *)(unaff_BP + -0x28) = *(undefined2 *)(unaff_BP + -0x96);
          *(undefined2 *)(unaff_BP + -0x26) = uVar9;
          FUN_32b2_6cc6();
          FUN_32b2_6e4b();
          FUN_32b2_7035();
          FUN_32b2_6fc7();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          FUN_32b2_6d14();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_7191();
          if ((bool)uVar14 || (bool)uVar15) {
            FUN_32b2_6d14();
            FUN_32b2_6cc6();
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar14 || (bool)uVar15) {
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_704d();
              FUN_32b2_7095();
              FUN_32b2_6e63();
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_704d();
              FUN_32b2_7095();
              FUN_32b2_6e63();
              return 1;
            }
          }
          puVar12 = auStack_1a;
          puVar11 = (undefined2 *)(unaff_BP + -0x34);
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar4 = puVar12;
            puVar12 = puVar12 + 1;
            puVar16 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar4 = *puVar16;
          }
          puVar12 = auStack_30;
          puVar11 = (undefined2 *)(unaff_BP + -0x1e);
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar4 = puVar12;
            puVar12 = puVar12 + 1;
            puVar16 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar4 = *puVar16;
          }
          iVar10 = FUN_3ab8_4c91(0x32b2);
          uVar14 = 0;
          uVar15 = iVar10 == 0;
        } while (!(bool)uVar15);
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if (!(bool)uVar14 && !(bool)uVar15) {
          return 0;
        }
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_7191();
      } while( true );
    }
    if (((int)uVar6 <= (int)uVar3) &&
       (uVar15 = *(uint *)0x14c == *(uint *)(unaff_BP + -0xe2),
       *(uint *)0x14c < *(uint *)(unaff_BP + -0xe2))) {
      uVar14 = true;
      goto code_r0x000316aa;
    }
    uVar9 = *(undefined2 *)0x9df0;
    uVar7 = *(undefined2 *)0x9df2;
    *(undefined2 *)(unaff_BP + -0x268) = uVar9;
    *(undefined2 *)(unaff_BP + -0x266) = uVar7;
    *(undefined2 *)(unaff_BP + -0x264) = uVar9;
    *(undefined2 *)(unaff_BP + -0x262) = uVar7;
    uVar9 = *(undefined2 *)0x9d92;
    *(undefined2 *)(unaff_BP + -0x25c) = *(undefined2 *)0x9d90;
    *(undefined2 *)(unaff_BP + -0x25a) = uVar9;
    *(undefined2 *)(unaff_BP + -0x1fe) = 0;
    *(undefined2 *)(unaff_BP + -0x260) = 0;
    iStack_8 = -0x1f2;
    iStack_6 = iVar10;
    puVar16 = (undefined2 *)func_0x00000271();
    puVar12 = (undefined2 *)puVar16;
    puVar11 = (undefined2 *)(unaff_BP + -0x68);
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar11;
      puVar11 = puVar11 + 1;
      puVar4 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar5 = *puVar4;
    }
    iVar10 = 0;
    if ((uint)*(byte *)(unaff_BP + -0x4d) == *(uint *)(unaff_BP + -0x42)) {
      piVar1 = (int *)(unaff_BP + -6);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) - (uint)(iVar10 == 0);
      iVar10 = 0x11f2;
      iStack_6 = -0x1c5;
      iVar8 = FUN_10ad_1ad0();
      if ((((iVar8 != 0) && (*(char *)(unaff_BP + -0x4e) != '\0')) &&
          (*(byte *)(unaff_BP + -0x4e) < 0x13)) &&
         ((*(char *)(unaff_BP + -0x4e) != '\t' && (*(char *)(unaff_BP + -0x4e) != '\n')))) {
        uVar9 = FUN_3ab8_516c();
        return uVar9;
      }
    }
  } while( true );
}



/* 3ab8:52e1  FUN_3ab8_52e1  6215 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000409dc) */
/* WARNING: Removing unreachable block (ram,0x00040a24) */

void FUN_3ab8_52e1(void)

{
  uint *puVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int unaff_BP;
  int iVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar10;
  undefined1 in_ZF;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uStack_8;
  int iStack_4;
  int iStack_2;
  
  iStack_2 = 0x3ab8;
  iStack_4 = 0xfe6a;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xfe72;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xfe7b;
  func_0x00029bb5();
  iStack_2 = 0x22b2;
  iStack_4 = 0xfe80;
  FUN_28b3_1181();
  if ((bool)in_CF) {
LAB_3ab8_5344:
    FUN_3ab8_522f();
    return;
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0xfe8b;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xfe94;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xfe9c;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xfea1;
  FUN_28b3_1181();
  if (!(bool)in_CF && !(bool)in_ZF) goto LAB_3ab8_5344;
  iStack_2 = 0x22b2;
  iStack_4 = 0xfeac;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xfeb5;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xfebd;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xfec2;
  FUN_28b3_1181();
  if (!(bool)in_CF && !(bool)in_ZF) goto LAB_3ab8_5344;
  if (*(char *)(unaff_BP + -0x6a) != '\0') {
    iStack_2 = *(undefined2 *)(unaff_BP + -0x42);
    iStack_4 = *(undefined2 *)(unaff_BP + 8);
    uStack_8._2_2_ = 0x22b2;
    uStack_8._0_2_ = 0xfed7;
    FUN_3ab8_114a();
    *(undefined1 *)(unaff_BP + -0x6a) = 0;
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0xfee6;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xfeee;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xfef7;
  func_0x0002996b();
  uVar6 = *(undefined2 *)(unaff_BP + -0x5c);
  *(undefined2 *)(unaff_BP + -0x2b2) = 0;
  *(undefined2 *)(unaff_BP + -0x2b4) = 0;
  *(undefined2 *)(unaff_BP + -0x2b6) = 0;
  *(undefined2 *)(unaff_BP + -0x2b8) = uVar6;
  iStack_2 = 0x22b2;
  iStack_4 = 0xff15;
  func_0x00029da5();
  iStack_2 = 0x22b2;
  iStack_4 = 0xff1a;
  func_0x00029c9d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xff23;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xff2c;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0xff34;
  FUN_28b3_0ee9();
  uVar10 = 0;
  *(uint *)(unaff_BP + -0x254) = (uint)*(byte *)(unaff_BP + -0x4e);
  iStack_2 = 0x22b2;
  iStack_4 = 0xff46;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0xff4f;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xff54;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0xff59;
  FUN_28b3_1181();
  if ((bool)uVar10) {
LAB_3ab8_53f9:
    *(undefined2 *)(unaff_BP + -0x254) = 1;
  }
  else {
    iStack_2 = 0x22b2;
    iStack_4 = 0xff64;
    func_0x00029834();
    iStack_2 = 0x22b2;
    iStack_4 = 0xff6d;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xff72;
    func_0x00029d78();
    iStack_2 = 0x22b2;
    iStack_4 = 0xff77;
    FUN_28b3_1181();
    if ((bool)uVar10) goto LAB_3ab8_53f9;
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0xff95;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xff9e;
  func_0x00029983();
  if (0xf < *(int *)(unaff_BP + -0x254)) {
    iStack_2 = 0x22b2;
    iStack_4 = 0xffae;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xffb3;
    func_0x00029d78();
    iStack_2 = 0x22b2;
    iStack_4 = 0xffbc;
    func_0x00029c2c();
    iStack_2 = 0x22b2;
    iStack_4 = 0xffc5;
    func_0x00029983();
  }
  iVar9 = *(int *)(unaff_BP + -0x254);
  uVar10 = iVar9 == 0;
  uVar11 = iVar9 == 1;
  if (iVar9 < 2) {
LAB_3ab8_5478:
    if ((10 < *(int *)(unaff_BP + -0x254)) && (*(int *)(unaff_BP + -0x254) < 0x10))
    goto LAB_3ab8_5489;
    *(undefined2 *)(unaff_BP + -0x18e) = 0;
    *(undefined2 *)(unaff_BP + -0x18c) = 0x168;
  }
  else {
    iStack_2 = 0x22b2;
    iStack_4 = 0xffd5;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xffda;
    func_0x00029d78();
    iStack_2 = 0x22b2;
    iStack_4 = 0xffe3;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xffe8;
    func_0x00029d78();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfff1;
    func_0x00029c2c();
    iStack_2 = 0x22b2;
    iStack_4 = 0xfff6;
    FUN_28b3_1181();
    if ((bool)uVar10 || (bool)uVar11) goto LAB_3ab8_5478;
LAB_3ab8_5489:
    iVar9 = *(uint *)(unaff_BP + -0x56) - *(uint *)(unaff_BP + -0x5a);
    iVar7 = (*(int *)(unaff_BP + -0x54) - *(int *)(unaff_BP + -0x58)) -
            (uint)(*(uint *)(unaff_BP + -0x56) < *(uint *)(unaff_BP + -0x5a));
    *(int *)(unaff_BP + -0x2b8) = iVar9;
    *(int *)(unaff_BP + -0x2b6) = iVar7;
    if ((iVar7 < 1) && ((iVar7 < 0 || (iVar9 == 0)))) {
      *(int *)(unaff_BP + -0x2b8) = iVar9;
      *(int *)(unaff_BP + -0x2b6) = iVar7 + 0x168;
    }
    iStack_2 = 0;
    iStack_4 = 0x10;
    uStack_8._2_2_ = 0x22b2;
    uStack_8._0_2_ = 0x45;
    func_0x000297e6();
    uStack_8._2_2_ = 0x22b2;
    uStack_8._0_2_ = 0x4e;
    func_0x00029b85();
    uStack_8._2_2_ = 0x22b2;
    uStack_8._0_2_ = 0x57;
    func_0x00029b6d();
    uStack_8._2_2_ = 0x22b2;
    uStack_8._0_2_ = 0x5c;
    func_0x00029d78();
    uStack_8._2_2_ = 0x22b2;
    uStack_8._0_2_ = 0x65;
    func_0x00029c44();
    uStack_8._2_2_ = 0x22b2;
    uStack_8._0_2_ = 0x6a;
    uStack_8 = FUN_28b3_0f51();
    lVar13 = FUN_21f2_5978(0x22b2,*(undefined2 *)(unaff_BP + -0x2b8),
                           *(undefined2 *)(unaff_BP + -0x2b6));
    uVar14 = FUN_21f2_5978(0x22b2,*(undefined2 *)(unaff_BP + -0x2b8),
                           *(undefined2 *)(unaff_BP + -0x2b6),lVar13 + 1);
    uVar14 = FUN_21f2_5978(0x22b2,uVar14);
    *(undefined2 *)(unaff_BP + -0x18e) = (int)uVar14;
    *(undefined2 *)(unaff_BP + -0x18c) = (int)((ulong)uVar14 >> 0x10);
  }
  if ((*(int *)(unaff_BP + -0x18c) < 1) &&
     ((*(int *)(unaff_BP + -0x18c) < 0 || (*(int *)(unaff_BP + -0x18e) == 0)))) {
    *(undefined2 *)(unaff_BP + -0x18e) = 1;
    *(undefined2 *)(unaff_BP + -0x18c) = 0;
  }
  *(undefined2 *)(unaff_BP + -0xe4) = *(undefined2 *)(*(int *)(unaff_BP + -0x254) * 2 + 0xa88);
  uVar6 = *(undefined2 *)(unaff_BP + -0x52);
  uVar2 = *(undefined2 *)(unaff_BP + -0x50);
  *(undefined2 *)(unaff_BP + -0x2b2) = 0;
  *(undefined2 *)(unaff_BP + -0x2b4) = 0;
  *(undefined2 *)(unaff_BP + -0x2b6) = uVar2;
  *(undefined2 *)(unaff_BP + -0x2b8) = uVar6;
  iStack_2 = 0x22b2;
  iStack_4 = 0xf8;
  func_0x00029da5();
  iStack_2 = 0x22b2;
  iStack_4 = 0x101;
  func_0x00029c2c();
  iStack_2 = 0x22b2;
  iStack_4 = 0x10a;
  func_0x000299b9();
  func_0x000299d1(0x22b2);
  func_0x0002a11e(0x22b2);
  iStack_2 = 0x22b2;
  iStack_4 = 0x123;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 299;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x134;
  func_0x00029834();
  func_0x000299d1(0x22b2);
  func_0x0002a10c(0x22b2);
  uVar10 = (undefined1 *)0xfff7 < &uStack_8;
  uVar11 = &stack0x0000 == (undefined1 *)0x0;
  iStack_2 = 0x22b2;
  iStack_4 = 0x14d;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0x156;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x15f;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0x168;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x16d;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0x172;
  FUN_28b3_1181();
  if ((bool)uVar10) {
    *(undefined2 *)(unaff_BP + -0x196) = 0;
    *(undefined2 *)(unaff_BP + -0x194) = 0x24;
  }
  else {
    iStack_2 = 0x22b2;
    iStack_4 = 0x18b;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x194;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x199;
    FUN_28b3_1181();
    if ((bool)uVar10 || (bool)uVar11) {
      iStack_2 = 0x22b2;
      iStack_4 = 0x1b2;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0x1bb;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0x1c0;
      FUN_28b3_1181();
      if ((bool)uVar10 || (bool)uVar11) {
        *(undefined2 *)(unaff_BP + -0x196) = 0;
        *(undefined2 *)(unaff_BP + -0x194) = 2;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x196) = 0;
        *(undefined2 *)(unaff_BP + -0x194) = 5;
      }
    }
    else {
      *(undefined2 *)(unaff_BP + -0x196) = 0;
      *(undefined2 *)(unaff_BP + -0x194) = 0x14;
    }
  }
  iVar9 = *(int *)(unaff_BP + 8);
  if ((((*(char *)(iVar9 + 0xc26) == '\0') && (*(char *)(iVar9 + 0xcf0) == '\0')) ||
      (*(char *)(iVar9 + *(int *)(unaff_BP + -0x254) * 0x28 + 0x420) == '\0')) ||
     ((int)((-(uint)((*(byte *)(iVar9 + 0xdca) & 1) == 0) & 7) + 1) < *(int *)(unaff_BP + -0x254)))
  {
LAB_3ab8_644d:
    iStack_2 = *(undefined2 *)0x9d8a;
    iStack_4 = *(undefined2 *)0x9d88;
    uStack_8._2_2_ = 1;
    uStack_8._0_2_ = *(undefined2 *)(unaff_BP + 8);
    FUN_4375_8386(0x22b2);
    if ((10 < *(int *)(unaff_BP + -0x254)) && (*(int *)(unaff_BP + -0x254) < 0x10)) {
      iStack_2 = unaff_BP + -0x25c;
      iStack_4 = unaff_BP + -0x2b0;
      uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0x254);
      uStack_8._0_2_ = 0x22b2;
      uVar6 = FUN_4375_ae3b();
      *(undefined2 *)(unaff_BP + -0x260) = uVar6;
      iStack_2 = 0x22b2;
      iStack_4 = 0x1013;
      func_0x000298b4();
      iStack_2 = 0x22b2;
      iStack_4 = 0x101c;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      iStack_4 = 0x1021;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0x1026;
      uVar14 = FUN_28b3_0f51();
      *(undefined2 *)(unaff_BP + -0x18e) = (int)uVar14;
      *(undefined2 *)(unaff_BP + -0x18c) = (int)((ulong)uVar14 >> 0x10);
    }
    if ((*(uint *)(unaff_BP + -0x54) <= *(uint *)(unaff_BP + -0x58)) &&
       ((*(uint *)(unaff_BP + -0x58) != *(uint *)(unaff_BP + -0x54) ||
        (*(uint *)(unaff_BP + -0x56) <= *(uint *)(unaff_BP + -0x5a))))) {
      *(undefined2 *)(unaff_BP + -0x56) = *(undefined2 *)(unaff_BP + -0x56);
      *(int *)(unaff_BP + -0x54) = *(int *)(unaff_BP + -0x54) + 0x168;
    }
    uVar6 = *(undefined2 *)0x9d8a;
    *(undefined2 *)(unaff_BP + -0x1f6) = *(undefined2 *)0x9d88;
    *(undefined2 *)(unaff_BP + -500) = uVar6;
    iStack_2 = 0x22b2;
    iStack_4 = 0x1061;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x106a;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0x1073;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0x107c;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x1085;
    func_0x00029b6d();
    iStack_2 = 0x22b2;
    iStack_4 = 0x108e;
    func_0x00029983();
    uVar10 = *(int *)(unaff_BP + -0x254) == 0;
    uVar11 = *(int *)(unaff_BP + -0x254) == 1;
    if ((bool)uVar11) {
      iStack_2 = 0x22b2;
      iStack_4 = 0x109e;
      func_0x00029834();
      iStack_2 = 0x22b2;
      iStack_4 = 0x10a7;
      func_0x000298b4();
      iStack_2 = 0x22b2;
      iStack_4 = 0x10b0;
      func_0x00029b6d();
      iStack_2 = 0x22b2;
      iStack_4 = 0x10b5;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0x10be;
      func_0x00029c2c();
      iStack_2 = 0x22b2;
      iStack_4 = 0x10c3;
      FUN_28b3_1181();
      if (!(bool)uVar10 && !(bool)uVar11) {
        iStack_2 = 0x22b2;
        iStack_4 = 0x10ce;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0x10d3;
        func_0x00029d78();
        iStack_2 = 0x22b2;
        iStack_4 = 0x10dc;
        func_0x00029c2c();
        iStack_2 = 0x22b2;
        iStack_4 = 0x10e5;
        FUN_28b3_112c();
        iStack_2 = 0x22b2;
        iStack_4 = 0x10ea;
        uVar14 = FUN_28b3_0f51();
        *(undefined2 *)(unaff_BP + -0x196) = (int)uVar14;
        *(undefined2 *)(unaff_BP + -0x194) = (int)((ulong)uVar14 >> 0x10);
      }
    }
    if ((*(int *)(unaff_BP + -0x194) < 1) &&
       ((*(int *)(unaff_BP + -0x194) < 0 || (*(int *)(unaff_BP + -0x196) == 0)))) {
      *(undefined2 *)(unaff_BP + -0x196) = 1;
      *(undefined2 *)(unaff_BP + -0x194) = 0;
    }
    uVar6 = *(undefined2 *)(unaff_BP + -0x58);
    *(undefined2 *)(unaff_BP + -0x38) = *(undefined2 *)(unaff_BP + -0x5a);
    *(undefined2 *)(unaff_BP + -0x36) = uVar6;
    do {
      while( true ) {
        if ((*(uint *)(unaff_BP + -0x54) < *(uint *)(unaff_BP + -0x36)) ||
           ((*(uint *)(unaff_BP + -0x54) <= *(uint *)(unaff_BP + -0x36) &&
            (*(uint *)(unaff_BP + -0x56) <= *(uint *)(unaff_BP + -0x38))))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar6 = *(undefined2 *)(unaff_BP + -0x36);
        *(undefined2 *)(unaff_BP + -0x192) = *(undefined2 *)(unaff_BP + -0x38);
        *(undefined2 *)(unaff_BP + -400) = uVar6;
        if ((*(int *)(unaff_BP + -0x254) < 0xb) || (0xf < *(int *)(unaff_BP + -0x254))) break;
        while( true ) {
          if ((*(uint *)(unaff_BP + -0x58) <= *(uint *)(unaff_BP + -0x36)) &&
             ((*(uint *)(unaff_BP + -0x36) != *(uint *)(unaff_BP + -0x58) ||
              (*(uint *)(unaff_BP + -0x5a) < *(uint *)(unaff_BP + -0x38))))) {
            uVar8 = *(uint *)(unaff_BP + -0x18e);
            iVar9 = *(int *)(unaff_BP + -0x18c);
            puVar1 = (uint *)(unaff_BP + -0x192);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 + uVar8;
            *(int *)(unaff_BP + -400) =
                 *(int *)(unaff_BP + -400) + iVar9 + (uint)CARRY2(uVar4,uVar8);
          }
          uVar4 = *(uint *)(unaff_BP + -0x54);
          if ((uVar4 <= *(uint *)(unaff_BP + -400)) &&
             ((*(uint *)(unaff_BP + -400) != uVar4 ||
              (*(uint *)(unaff_BP + -0x56) <= *(uint *)(unaff_BP + -0x192))))) {
            *(uint *)(unaff_BP + -0x192) = *(uint *)(unaff_BP + -0x56);
            *(uint *)(unaff_BP + -400) = uVar4;
            uVar6 = *(undefined2 *)0x9d8a;
            *(undefined2 *)(unaff_BP + -0x1f6) = *(undefined2 *)0x9d88;
            *(undefined2 *)(unaff_BP + -500) = uVar6;
          }
          iStack_2 = 0x22b2;
          iStack_4 = 0x11aa;
          func_0x000297e6();
          iStack_2 = 0x22b2;
          iStack_4 = 0x11b3;
          func_0x00029bb5();
          iStack_2 = 0x22b2;
          iStack_4 = 0x11b8;
          func_0x00029d78();
          iStack_2 = 0x22b2;
          iStack_4 = 0x11c1;
          func_0x000298b4();
          iStack_2 = 0x22b2;
          iStack_4 = 0x11ca;
          func_0x00029c2c();
          iStack_2 = 0x22b2;
          iStack_4 = 0x11d3;
          func_0x000299b9();
          func_0x000299d1(0x22b2);
          func_0x0002a11e(0x22b2);
          iStack_2 = 0x22b2;
          iStack_4 = 0x11ec;
          func_0x00029c2c();
          iStack_2 = 0x22b2;
          iStack_4 = 0x11f5;
          func_0x00029983();
          iStack_2 = 0x22b2;
          iStack_4 = 0x11fe;
          func_0x000297e6();
          iStack_2 = 0x22b2;
          iStack_4 = 0x1207;
          func_0x00029bb5();
          iStack_2 = 0x22b2;
          iStack_4 = 0x120c;
          func_0x00029d78();
          iStack_2 = 0x22b2;
          iStack_4 = 0x1215;
          func_0x00029834();
          func_0x000299d1(0x22b2);
          func_0x0002a10c(0x22b2);
          iStack_2 = 0x22b2;
          iStack_4 = 0x122e;
          func_0x00029c2c();
          iStack_2 = 0x22b2;
          iStack_4 = 0x1237;
          func_0x00029983();
          iStack_2 = 0x22b2;
          iStack_4 = 0x123f;
          func_0x000297e6();
          iStack_2 = 0x22b2;
          iStack_4 = 0x1248;
          func_0x00029b6d();
          iStack_2 = 0x22b2;
          iStack_4 = 0x1251;
          func_0x000297e6();
          iStack_2 = 0x22b2;
          iStack_4 = 0x125a;
          func_0x00029b6d();
          iStack_2 = 0x22b2;
          iStack_4 = 0x125f;
          FUN_28b3_1163();
          iStack_2 = 0x22b2;
          iStack_4 = 0x1268;
          func_0x00029bb5();
          iStack_2 = 0x22b2;
          iStack_4 = 0x1271;
          func_0x0002996b();
          iStack_2 = 0x22b2;
          iStack_4 = 0x127a;
          func_0x00029983();
          iStack_2 = 0x22b2;
          iStack_4 = 0x1282;
          func_0x000297e6();
          iStack_2 = 0x22b2;
          iStack_4 = 0x128b;
          func_0x00029b6d();
          iStack_2 = 0x22b2;
          iStack_4 = 0x1294;
          func_0x000297e6();
          iStack_2 = 0x22b2;
          iStack_4 = 0x129d;
          func_0x00029b6d();
          iStack_2 = 0x22b2;
          iStack_4 = 0x12a2;
          FUN_28b3_117c();
          iStack_2 = 0x22b2;
          iStack_4 = 0x12ab;
          func_0x00029bb5();
          iStack_2 = 0x22b2;
          iStack_4 = 0x12b4;
          func_0x0002996b();
          iStack_2 = 0x22b2;
          iStack_4 = 0x12bd;
          func_0x00029983();
          iStack_2 = 0x22b2;
          iStack_4 = 0x12c9;
          func_0x000297e6();
          iStack_2 = 0x22b2;
          iStack_4 = 0x12d2;
          func_0x00029b6d();
          iStack_2 = 0x22b2;
          iStack_4 = 0x12db;
          func_0x00029bb5();
          iStack_2 = 0x22b2;
          iStack_4 = 0x12e4;
          func_0x00029983();
          iStack_2 = 0x22b2;
          iStack_4 = 0x12f0;
          func_0x000297e6();
          iStack_2 = 0x22b2;
          iStack_4 = 0x12f9;
          func_0x00029b6d();
          iStack_2 = 0x22b2;
          iStack_4 = 0x1302;
          func_0x00029bb5();
          iStack_2 = 0x22b2;
          iStack_4 = 0x130b;
          func_0x00029983();
          iVar9 = *(int *)(unaff_BP + -0x1fe) * 4;
          uVar6 = *(undefined2 *)(unaff_BP + iVar9 + -0x2ae);
          *(undefined2 *)(unaff_BP + -0x1f6) = *(undefined2 *)(unaff_BP + iVar9 + -0x2b0);
          *(undefined2 *)(unaff_BP + -500) = uVar6;
          iVar9 = *(int *)(unaff_BP + -0x260);
          *(int *)(unaff_BP + -0x1fe) = *(int *)(unaff_BP + -0x1fe) + 1;
          if (iVar9 < *(int *)(unaff_BP + -0x1fe)) {
            *(undefined2 *)(unaff_BP + -0x1fe) = 0;
          }
          if ((*(uint *)(unaff_BP + -0x58) < *(uint *)(unaff_BP + -0x36)) ||
             ((*(uint *)(unaff_BP + -0x58) <= *(uint *)(unaff_BP + -0x36) &&
              (*(uint *)(unaff_BP + -0x5a) < *(uint *)(unaff_BP + -0x38))))) break;
          iStack_2 = *(undefined2 *)(unaff_BP + -0x248);
          iStack_4 = *(undefined2 *)(unaff_BP + -0x24a);
          uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0x250);
          uStack_8._0_2_ = *(undefined2 *)(unaff_BP + -0x252);
          FUN_4375_82e3(*(undefined2 *)(unaff_BP + 8));
          uVar6 = *(undefined2 *)(unaff_BP + -0x250);
          *(undefined2 *)(unaff_BP + -0x24e) = *(undefined2 *)(unaff_BP + -0x252);
          *(undefined2 *)(unaff_BP + -0x24c) = uVar6;
          uVar6 = *(undefined2 *)(unaff_BP + -0x248);
          *(undefined2 *)(unaff_BP + -0x202) = *(undefined2 *)(unaff_BP + -0x24a);
          *(undefined2 *)(unaff_BP + -0x200) = uVar6;
          puVar1 = (uint *)(unaff_BP + -0x38);
          uVar4 = *puVar1;
          *puVar1 = *puVar1 + 1;
          *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + (uint)(0xfffe < uVar4);
        }
        iStack_2 = *(undefined2 *)(unaff_BP + -0x200);
        iStack_4 = *(undefined2 *)(unaff_BP + -0x202);
        uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0x24c);
        uStack_8._0_2_ = *(undefined2 *)(unaff_BP + -0x24e);
        FUN_4375_7f3a(0x22b2,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + -0x252),
                      *(undefined2 *)(unaff_BP + -0x250),*(undefined2 *)(unaff_BP + -0x24a),
                      *(undefined2 *)(unaff_BP + -0x248));
        uVar6 = *(undefined2 *)(unaff_BP + -400);
        *(undefined2 *)(unaff_BP + -0x38) = *(undefined2 *)(unaff_BP + -0x192);
        *(undefined2 *)(unaff_BP + -0x36) = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x250);
        *(undefined2 *)(unaff_BP + -0x24e) = *(undefined2 *)(unaff_BP + -0x252);
        *(undefined2 *)(unaff_BP + -0x24c) = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x248);
        *(undefined2 *)(unaff_BP + -0x202) = *(undefined2 *)(unaff_BP + -0x24a);
        *(undefined2 *)(unaff_BP + -0x200) = uVar6;
      }
      while( true ) {
        uVar4 = *(uint *)(unaff_BP + -0x54);
        if ((uVar4 <= *(uint *)(unaff_BP + -400)) &&
           ((*(uint *)(unaff_BP + -400) != uVar4 ||
            (*(uint *)(unaff_BP + -0x56) <= *(uint *)(unaff_BP + -0x192))))) break;
        if ((*(byte *)(unaff_BP + -0xe3) & 0x80) == 0) goto LAB_3ab8_68a8;
        uVar8 = *(uint *)(unaff_BP + -0x18e);
        iVar9 = *(int *)(unaff_BP + -0x18c);
        puVar1 = (uint *)(unaff_BP + -0x192);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 + uVar8;
        *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + iVar9 + (uint)CARRY2(uVar4,uVar8);
        *(uint *)(unaff_BP + -0xe4) = *(int *)(unaff_BP + -0xe4) << 1 | 1;
      }
      *(uint *)(unaff_BP + -0x192) = *(uint *)(unaff_BP + -0x56);
      *(uint *)(unaff_BP + -400) = uVar4;
LAB_3ab8_68a8:
      uVar6 = *(undefined2 *)(unaff_BP + -0x36);
      *(undefined2 *)(unaff_BP + -0x182) = *(undefined2 *)(unaff_BP + -0x38);
      *(undefined2 *)(unaff_BP + -0x180) = uVar6;
      while( true ) {
        iVar9 = *(int *)(unaff_BP + -400);
        if ((iVar9 <= *(int *)(unaff_BP + -0x180)) &&
           ((iVar9 < *(int *)(unaff_BP + -0x180) ||
            (*(uint *)(unaff_BP + -0x192) < *(uint *)(unaff_BP + -0x182))))) {
          *(uint *)(unaff_BP + -0x182) = *(uint *)(unaff_BP + -0x192);
          *(int *)(unaff_BP + -0x180) = iVar9;
        }
        iStack_2 = 0x22b2;
        iStack_4 = 0x145d;
        func_0x000298b4();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1466;
        func_0x00029c2c();
        iStack_2 = 0x22b2;
        iStack_4 = 0x146f;
        func_0x000299b9();
        func_0x000299d1(0x22b2);
        func_0x0002a11e(0x22b2);
        iStack_2 = 0x22b2;
        iStack_4 = 0x1488;
        func_0x00029834();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1491;
        func_0x00029b6d();
        iStack_2 = 0x22b2;
        iStack_4 = 0x149a;
        func_0x00029983();
        iStack_2 = 0x22b2;
        iStack_4 = 0x14a3;
        func_0x00029834();
        func_0x000299d1(0x22b2);
        func_0x0002a10c(0x22b2);
        iStack_2 = 0x22b2;
        iStack_4 = 0x14bc;
        func_0x00029834();
        iStack_2 = 0x22b2;
        iStack_4 = 0x14c5;
        func_0x00029b6d();
        iStack_2 = 0x22b2;
        iStack_4 = 0x14ce;
        func_0x00029983();
        iStack_2 = 0x22b2;
        iStack_4 = 0x14d6;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0x14df;
        func_0x00029b6d();
        iStack_2 = 0x22b2;
        iStack_4 = 0x14e8;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0x14f1;
        func_0x00029b6d();
        iStack_2 = 0x22b2;
        iStack_4 = 0x14f6;
        FUN_28b3_1163();
        iStack_2 = 0x22b2;
        iStack_4 = 0x14ff;
        func_0x00029bb5();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1508;
        func_0x0002996b();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1511;
        func_0x00029983();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1519;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1522;
        func_0x00029b6d();
        iStack_2 = 0x22b2;
        iStack_4 = 0x152b;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1534;
        func_0x00029b6d();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1539;
        FUN_28b3_117c();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1542;
        func_0x00029bb5();
        iStack_2 = 0x22b2;
        iStack_4 = 0x154b;
        func_0x0002996b();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1554;
        func_0x00029983();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1560;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1569;
        func_0x00029b6d();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1572;
        func_0x00029bb5();
        iStack_2 = 0x22b2;
        iStack_4 = 0x157b;
        func_0x0002996b();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1584;
        func_0x00029983();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1590;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0x1599;
        func_0x00029b6d();
        iStack_2 = 0x22b2;
        iStack_4 = 0x15a2;
        func_0x00029bb5();
        iStack_2 = 0x22b2;
        iStack_4 = 0x15ab;
        func_0x0002996b();
        iStack_2 = 0x22b2;
        iStack_4 = 0x15b3;
        FUN_28b3_0ee9();
        if ((*(int *)(unaff_BP + -0x36) < *(int *)(unaff_BP + -0x180)) ||
           ((*(int *)(unaff_BP + -0x36) <= *(int *)(unaff_BP + -0x180) &&
            (*(uint *)(unaff_BP + -0x38) < *(uint *)(unaff_BP + -0x182))))) {
          FUN_4375_7f3a();
        }
        else {
          func_0x000297e6();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029983();
          FUN_4375_82e3(*(undefined2 *)(unaff_BP + 8));
        }
        iVar9 = *(int *)(unaff_BP + -400);
        if ((iVar9 <= *(int *)(unaff_BP + -0x180)) &&
           ((iVar9 < *(int *)(unaff_BP + -0x180) ||
            (*(uint *)(unaff_BP + -0x192) <= *(uint *)(unaff_BP + -0x182))))) break;
        uVar8 = *(uint *)(unaff_BP + -0x196);
        iVar9 = *(int *)(unaff_BP + -0x194);
        puVar1 = (uint *)(unaff_BP + -0x182);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 + uVar8;
        *(int *)(unaff_BP + -0x180) =
             *(int *)(unaff_BP + -0x180) + iVar9 + (uint)CARRY2(uVar4,uVar8);
        uVar6 = *(undefined2 *)(unaff_BP + -0x250);
        *(undefined2 *)(unaff_BP + -0x24e) = *(undefined2 *)(unaff_BP + -0x252);
        *(undefined2 *)(unaff_BP + -0x24c) = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x248);
        *(undefined2 *)(unaff_BP + -0x202) = *(undefined2 *)(unaff_BP + -0x24a);
        *(undefined2 *)(unaff_BP + -0x200) = uVar6;
      }
      *(uint *)(unaff_BP + -0x38) = *(uint *)(unaff_BP + -0x192);
      *(int *)(unaff_BP + -0x36) = iVar9;
      while( true ) {
        if (((*(uint *)(unaff_BP + -0x54) <= *(uint *)(unaff_BP + -0x36)) &&
            ((*(uint *)(unaff_BP + -0x54) < *(uint *)(unaff_BP + -0x36) ||
             (*(uint *)(unaff_BP + -0x56) <= *(uint *)(unaff_BP + -0x38))))) ||
           ((*(byte *)(unaff_BP + -0xe3) & 0x80) != 0)) break;
        uVar8 = *(uint *)(unaff_BP + -0x18e);
        iVar9 = *(int *)(unaff_BP + -0x18c);
        puVar1 = (uint *)(unaff_BP + -0x38);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 + uVar8;
        *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + iVar9 + (uint)CARRY2(uVar4,uVar8);
        *(int *)(unaff_BP + -0xe4) = *(int *)(unaff_BP + -0xe4) << 1;
      }
    } while( true );
  }
  uVar10 = *(uint *)(unaff_BP + -0x5c) < 10000;
  uVar11 = *(uint *)(unaff_BP + -0x5c) == 10000;
  if (!(bool)uVar11) goto LAB_3ab8_644d;
  iStack_2 = 0x22b2;
  iStack_4 = 0x229;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x232;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x237;
  FUN_28b3_1181();
  if (!(bool)uVar10 && !(bool)uVar11) goto LAB_3ab8_644d;
  iStack_2 = 0x22b2;
  iStack_4 = 0x242;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x24b;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x250;
  FUN_28b3_1181();
  if (!(bool)uVar10 && !(bool)uVar11) goto LAB_3ab8_644d;
  iStack_2 = 0x22b2;
  iStack_4 = 0x25b;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x264;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x269;
  FUN_28b3_1181();
  if ((bool)uVar10) goto LAB_3ab8_644d;
  iStack_2 = 0x22b2;
  iStack_4 = 0x274;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x27d;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x282;
  FUN_28b3_1181();
  if ((bool)uVar10) goto LAB_3ab8_644d;
  uVar6 = *(undefined2 *)0x9e36;
  *(undefined2 *)(unaff_BP + -0x1ee) = *(undefined2 *)0x9e34;
  *(undefined2 *)(unaff_BP + -0x1ec) = uVar6;
  iStack_2 = *(undefined2 *)(unaff_BP + -0x256);
  iStack_4 = *(undefined2 *)(unaff_BP + -600);
  uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0x254);
  uStack_8._0_2_ = *(undefined2 *)(unaff_BP + 8);
  FUN_4375_8386(0x22b2);
  uVar4 = *(uint *)(unaff_BP + -0x52);
  iVar9 = *(int *)(unaff_BP + -0x50);
  uVar8 = *(uint *)(unaff_BP + -0x5a);
  uVar3 = *(uint *)(unaff_BP + -0x5a);
  iVar7 = *(int *)(unaff_BP + -0x58);
  *(undefined2 *)(unaff_BP + -0x2c2) = 0;
  *(undefined2 *)(unaff_BP + -0x2c4) = 0;
  *(int *)(unaff_BP + -0x2c6) = iVar9 + iVar7 + (uint)CARRY2(uVar4,uVar8);
  *(int *)(unaff_BP + -0x2c8) = uVar4 + uVar3;
  iStack_2 = 0x22b2;
  iStack_4 = 0x2d5;
  func_0x00029da5();
  iStack_2 = 0x22b2;
  iStack_4 = 0x2de;
  func_0x00029c2c();
  iStack_2 = 0x22b2;
  iStack_4 = 0x2e7;
  func_0x00029983();
  uVar4 = *(uint *)(unaff_BP + -0x52);
  iVar9 = *(int *)(unaff_BP + -0x50);
  uVar8 = *(uint *)(unaff_BP + -0x56);
  uVar3 = *(uint *)(unaff_BP + -0x56);
  iVar7 = *(int *)(unaff_BP + -0x54);
  *(undefined2 *)(unaff_BP + -0x2c2) = 0;
  *(undefined2 *)(unaff_BP + -0x2c4) = 0;
  *(int *)(unaff_BP + -0x2c6) = iVar9 + iVar7 + (uint)CARRY2(uVar4,uVar8);
  *(int *)(unaff_BP + -0x2c8) = uVar4 + uVar3;
  iStack_2 = 0x22b2;
  iStack_4 = 0x310;
  func_0x00029da5();
  iStack_2 = 0x22b2;
  iStack_4 = 0x319;
  func_0x00029c2c();
  iStack_2 = 0x22b2;
  iStack_4 = 0x322;
  func_0x00029983();
  uVar4 = *(uint *)(unaff_BP + -0x56);
  uVar8 = *(uint *)(unaff_BP + -0x54);
  if (*(uint *)(unaff_BP + -0x5a) == uVar4) {
    uVar11 = *(uint *)(unaff_BP + -0x58) < uVar8;
    uVar10 = *(uint *)(unaff_BP + -0x58) == uVar8;
    if (!(bool)uVar10) goto LAB_3ab8_57b2;
LAB_3ab8_57c6:
    uVar6 = *(undefined2 *)0x9d8a;
    *(undefined2 *)(unaff_BP + -0x1f2) = *(undefined2 *)0x9d88;
    *(undefined2 *)(unaff_BP + -0x1f0) = uVar6;
    uVar6 = *(undefined2 *)0x9dda;
    *(undefined2 *)(unaff_BP + -0x1ea) = *(undefined2 *)0x9dd8;
    *(undefined2 *)(unaff_BP + -0x1e8) = uVar6;
  }
  else {
LAB_3ab8_57b2:
    uVar8 = (*(int *)(unaff_BP + -0x58) - uVar8) - (uint)(*(uint *)(unaff_BP + -0x5a) < uVar4);
    uVar11 = false;
    uVar10 = false;
    if (*(uint *)(unaff_BP + -0x5a) == uVar4) {
      uVar11 = uVar8 < 0xfe98;
      uVar10 = uVar8 == 0xfe98;
      if ((bool)uVar10) goto LAB_3ab8_57c6;
    }
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0x36d;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x379;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x37e;
  FUN_28b3_1181();
  if (!(bool)uVar11) goto LAB_3ab8_5861;
  iStack_2 = 0x22b2;
  iStack_4 = 0x389;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x38e;
  func_0x00029af6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x397;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x3a0;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x3a9;
  FUN_28b3_100d();
  while( true ) {
    iStack_2 = 0x22b2;
    iStack_4 = 0x3e1;
    func_0x00029983();
LAB_3ab8_5861:
    iStack_2 = 0x22b2;
    iStack_4 = 0x3ea;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x3f3;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x3f8;
    FUN_28b3_1181();
    if ((bool)uVar11 || (bool)uVar10) break;
    iStack_2 = 0x22b2;
    iStack_4 = 0x3b8;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x1f2;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0x3c2;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0x3c8;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0x3d1;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x1ea;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0x3db;
    func_0x00029bb5();
  }
  while( true ) {
    iStack_2 = 0x22b2;
    iStack_4 = 0x437;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x440;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x445;
    FUN_28b3_1181();
    if ((bool)uVar11) break;
    iStack_2 = 0x22b2;
    iStack_4 = 0x405;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x1f2;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0x40f;
    func_0x00029b55();
    iStack_2 = 0x22b2;
    iStack_4 = 0x415;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0x41e;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x1ea;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0x428;
    func_0x00029b55();
    iStack_2 = 0x22b2;
    iStack_4 = 0x42e;
    func_0x00029983();
  }
  uVar11 = 1;
  while( true ) {
    iStack_2 = 0x22b2;
    iStack_4 = 0x46b;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x474;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x479;
    FUN_28b3_1181();
    if (!(bool)uVar11) break;
    iStack_2 = 0x22b2;
    iStack_4 = 0x452;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x1ea;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0x45c;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0x462;
    func_0x00029983();
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0x484;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0x48d;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x496;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x49b;
  FUN_28b3_1181();
  if ((bool)uVar11 || (bool)uVar10) {
    iStack_2 = 0x22b2;
    iStack_4 = 0x4ba;
    func_0x000297e6();
  }
  else {
    iStack_2 = 0x22b2;
    iStack_4 = 0x4a6;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x4af;
    FUN_28b3_100d();
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0x4c3;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0x4cc;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x4d1;
  func_0x00029ae7();
  iStack_2 = 0x22b2;
  iStack_4 = 0x4d6;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0x4db;
  FUN_28b3_1181();
  if ((bool)uVar11) {
    iStack_2 = 0x22b2;
    iStack_4 = 0x4e9;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x4f2;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x4f7;
    FUN_28b3_1181();
    if (!(bool)uVar11 && !(bool)uVar10) {
      iStack_2 = 0x22b2;
      iStack_4 = 0x502;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0x50b;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0x510;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0x519;
      func_0x00029c74();
      iStack_2 = 0x22b2;
      iStack_4 = 0x522;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      iStack_4 = 0x527;
      FUN_28b3_1181();
      if (!(bool)uVar11 && !(bool)uVar10) {
        iStack_2 = 0x22b2;
        iStack_4 = 0x532;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0x53b;
        FUN_28b3_100d();
        iStack_2 = 0x22b2;
        iStack_4 = 0x544;
        func_0x00029983();
      }
    }
    iStack_2 = 0x22b2;
    iStack_4 = 0x54d;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x556;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x55b;
    FUN_28b3_1181();
    if ((bool)uVar11) {
      iStack_2 = 0x22b2;
      iStack_4 = 0x566;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0x56f;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0x574;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0x57d;
      func_0x00029bfc();
      iStack_2 = 0x22b2;
      iStack_4 = 0x586;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      iStack_4 = 0x58b;
      FUN_28b3_1181();
      if ((bool)uVar11 || (bool)uVar10) {
        iStack_2 = 0x22b2;
        iStack_4 = 0x596;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0x59f;
        func_0x00029bb5();
        iStack_2 = 0x22b2;
        iStack_4 = 0x5a8;
        func_0x00029983();
      }
    }
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0x5b1;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0x5ba;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x5bf;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0x5c4;
  FUN_28b3_1181();
  if ((bool)uVar11) {
    uVar6 = *(undefined2 *)0x9dda;
    *(undefined2 *)(unaff_BP + -0x1e6) = *(undefined2 *)0x9dd8;
    *(undefined2 *)(unaff_BP + -0x1e4) = uVar6;
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0x5de;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0x5e7;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x5f0;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0x5f9;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x5fe;
  func_0x00029ae7();
  iStack_2 = 0x22b2;
  iStack_4 = 0x603;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0x608;
  FUN_28b3_1181();
  if ((bool)uVar11) {
    iStack_2 = 0x22b2;
    iStack_4 = 0x616;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x61f;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x624;
    FUN_28b3_1181();
    if (!(bool)uVar11 && !(bool)uVar10) {
      iStack_2 = 0x22b2;
      iStack_4 = 0x62f;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0x638;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0x63d;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0x646;
      func_0x00029c74();
      iStack_2 = 0x22b2;
      iStack_4 = 0x64f;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      iStack_4 = 0x654;
      FUN_28b3_1181();
      if (!(bool)uVar11 && !(bool)uVar10) {
        iStack_2 = 0x22b2;
        iStack_4 = 0x65f;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0x668;
        FUN_28b3_100d();
        iStack_2 = 0x22b2;
        iStack_4 = 0x671;
        func_0x00029983();
      }
    }
    iStack_2 = 0x22b2;
    iStack_4 = 0x67a;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x683;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0x688;
    FUN_28b3_1181();
    if ((bool)uVar11) {
      iStack_2 = 0x22b2;
      iStack_4 = 0x693;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0x69c;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0x6a1;
      func_0x00029d78();
      iStack_2 = 0x22b2;
      iStack_4 = 0x6aa;
      func_0x00029bfc();
      iStack_2 = 0x22b2;
      iStack_4 = 0x6b3;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      iStack_4 = 0x6b8;
      FUN_28b3_1181();
      if ((bool)uVar11 || (bool)uVar10) {
        iStack_2 = 0x22b2;
        iStack_4 = 0x6c3;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0x6cc;
        func_0x00029bb5();
        iStack_2 = 0x22b2;
        iStack_4 = 0x6d5;
        func_0x00029983();
      }
    }
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0x6dd;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x6e5;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x6ee;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0x6f6;
  FUN_28b3_0ee9();
  iStack_2 = 0x22b2;
  iStack_4 = 0x6fe;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x706;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x70f;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0x714;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0x71d;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x726;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x72b;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0x734;
  func_0x000299b9();
  func_0x000299d1(0x22b2);
  func_0x0002a11e(0x22b2);
  iStack_2 = 0x22b2;
  iStack_4 = 0x74d;
  func_0x00029c2c();
  iStack_2 = 0x22b2;
  iStack_4 = 0x756;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x75f;
  func_0x00029834();
  func_0x000299d1(0x22b2);
  func_0x0002a10c(0x22b2);
  iStack_2 = 0x22b2;
  iStack_4 = 0x778;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0x781;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x786;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0x78b;
  func_0x00029c9d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x794;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x79d;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x7a6;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x7af;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0x7b8;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x7c1;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x7c6;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x0002a11e(0x22b2);
  iStack_2 = 0x22b2;
  iStack_4 = 0x7df;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0x7e8;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x7f1;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x7fa;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x7ff;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x0002a10c(0x22b2);
  iStack_2 = 0x22b2;
  iStack_4 = 0x818;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0x821;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x826;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0x82b;
  func_0x00029c9d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x834;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x83d;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x845;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x84e;
  func_0x00029bb5();
  iStack_2 = 0x22b2;
  iStack_4 = 0x857;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0x85f;
  FUN_28b3_0ee9();
  iStack_2 = 0x22b2;
  iStack_4 = 0x868;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x870;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x879;
  func_0x00029bb5();
  iStack_2 = 0x22b2;
  iStack_4 = 0x882;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0x88a;
  FUN_28b3_0ee9();
  iStack_2 = 0x22b2;
  iStack_4 = 0x893;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x89c;
  func_0x00029bb5();
  uStack_8._2_2_ = 0x22b2;
  uStack_8._0_2_ = 0x8a6;
  func_0x00029983();
  uStack_8._2_2_ = 0x22b2;
  uStack_8._0_2_ = 0x8af;
  func_0x000297e6();
  uStack_8._2_2_ = 0x22b2;
  uStack_8._0_2_ = 0x8b8;
  func_0x00029bb5();
  func_0x00029983(0x22b2);
  FUN_4375_82e3(*(undefined2 *)(unaff_BP + 8));
  iStack_2 = 0x22b2;
  iStack_4 = 0x8d5;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x8de;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x8e7;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x8f3;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x8f8;
  func_0x00029ae7();
  iStack_2 = 0x22b2;
  iStack_4 = 0x901;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0x90a;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x913;
  func_0x000297e6();
  iStack_2 = unaff_BP + -0x1f2;
  iStack_4 = 0x22b2;
  uStack_8._2_2_ = 0x91d;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x923;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x92c;
  func_0x000297e6();
  iStack_2 = unaff_BP + -0x1ea;
  iStack_4 = 0x22b2;
  uStack_8._2_2_ = 0x936;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x93c;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x945;
  func_0x000297e6();
  iStack_2 = unaff_BP + -0x1e6;
  iStack_4 = 0x22b2;
  uStack_8._2_2_ = 0x94f;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x955;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x95e;
  func_0x000297e6();
  iStack_2 = unaff_BP + -0x1de;
  iStack_4 = 0x22b2;
  uStack_8._2_2_ = 0x968;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x96e;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0x977;
  func_0x000297e6();
  iStack_2 = unaff_BP + -0x2b8;
  iStack_4 = 0x22b2;
  uStack_8._2_2_ = 0x981;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0x987;
  func_0x00029983();
  uVar4 = *(uint *)(*(int *)(unaff_BP + 8) + 0xdca);
  if (((uVar4 & 1) == 0) && ((uVar4 & 2) == 0)) goto LAB_3ab8_60a2;
  iStack_2 = 0x22b2;
  iStack_4 = 0x9a5;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x9aa;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0x9af;
  lVar12 = FUN_28b3_0f51();
  iStack_2 = 0x22b2;
  iStack_4 = 0x9bc;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x9c1;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0x9c6;
  lVar13 = FUN_28b3_0f51();
  lVar13 = lVar13 - lVar12;
  if (lVar13 < 0) {
    lVar13 = CONCAT22(-((int)((ulong)lVar13 >> 0x10) + (uint)((int)lVar13 != 0)),-(int)lVar13);
  }
  if (2 < lVar13) goto LAB_3ab8_60a2;
  iStack_2 = 0x22b2;
  iStack_4 = 0x9ed;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0x9f2;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0x9f7;
  lVar12 = FUN_28b3_0f51();
  iStack_2 = 0x22b2;
  iStack_4 = 0xa04;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xa09;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0xa0e;
  lVar13 = FUN_28b3_0f51();
  lVar13 = lVar13 - lVar12;
  if (lVar13 < 0) {
    lVar13 = CONCAT22(-((int)((ulong)lVar13 >> 0x10) + (uint)((int)lVar13 != 0)),-(int)lVar13);
  }
  if (2 < lVar13) goto LAB_3ab8_60a2;
  uVar4 = *(uint *)(unaff_BP + -0x54);
  if (((*(uint *)(unaff_BP + -0x58) <= uVar4) &&
      ((*(uint *)(unaff_BP + -0x58) < uVar4 ||
       (*(uint *)(unaff_BP + -0x5a) < *(uint *)(unaff_BP + -0x56))))) &&
     ((uVar4 - *(int *)(unaff_BP + -0x58)) -
      (uint)(*(uint *)(unaff_BP + -0x56) < *(uint *)(unaff_BP + -0x5a)) < 0xb4)) goto LAB_3ab8_5fa8;
  uVar4 = *(uint *)(unaff_BP + -0x56);
  uVar8 = *(uint *)(unaff_BP + -0x54);
  uVar11 = *(uint *)(unaff_BP + -0x58) == uVar8;
  uVar10 = true;
  if (uVar8 <= *(uint *)(unaff_BP + -0x58)) {
    if ((bool)uVar11) {
      uVar3 = *(uint *)(unaff_BP + -0x5a);
      uVar10 = uVar3 < uVar4;
      uVar11 = uVar3 == uVar4;
      if (uVar3 <= uVar4) goto LAB_3ab8_5ef8;
    }
    uVar8 = (*(int *)(unaff_BP + -0x58) - uVar8) - (uint)(*(uint *)(unaff_BP + -0x5a) < uVar4);
    uVar11 = uVar8 == 0xb4;
    if (0xb4 < uVar8) goto LAB_3ab8_5fa8;
    uVar10 = true;
    if (0xb3 < uVar8) {
      uVar10 = false;
      uVar11 = true;
      if (*(uint *)(unaff_BP + -0x5a) != uVar4) goto LAB_3ab8_5fa8;
    }
  }
LAB_3ab8_5ef8:
  iStack_2 = 0x22b2;
  iStack_4 = 0xa81;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0xa8a;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xa8f;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0xa94;
  FUN_28b3_1181();
  if ((bool)uVar10 || (bool)uVar11) {
LAB_3ab8_5fa8:
    iStack_2 = 0x22b2;
    iStack_4 = 0xb31;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0xda;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0xb3b;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0xb41;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0xb4a;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x160;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0xb54;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0xb5a;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0xb63;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x15c;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0xb6d;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0xb73;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0xb7c;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x17c;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0xb86;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0xb8c;
    func_0x00029983();
    iStack_2 = *(undefined2 *)(unaff_BP + -0x15e);
    iStack_4 = *(undefined2 *)(unaff_BP + -0x160);
    uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0xd8);
    uStack_8._0_2_ = *(undefined2 *)(unaff_BP + -0xda);
    FUN_4375_7f3a(0x22b2,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + -0x15c),
                  *(undefined2 *)(unaff_BP + -0x15a),*(undefined2 *)(unaff_BP + -0x17c),
                  *(undefined2 *)(unaff_BP + -0x17a));
    halt_baddata();
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0xaa2;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0xaab;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xab0;
  func_0x00029ae7();
  iStack_2 = 0x22b2;
  iStack_4 = 0xab5;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0xaba;
  FUN_28b3_1181();
  if ((bool)uVar10 || (bool)uVar11) {
    iStack_2 = 0x22b2;
    iStack_4 = 0xac5;
    func_0x00029834();
    iStack_2 = 0x22b2;
    iStack_4 = 0xace;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xad3;
    func_0x00029ae7();
    iStack_2 = 0x22b2;
    iStack_4 = 0xad8;
    func_0x00029d78();
    iStack_2 = 0x22b2;
    iStack_4 = 0xadd;
    FUN_28b3_1181();
    if ((bool)uVar10 || (bool)uVar11) goto LAB_3ab8_5fa8;
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0xae8;
  func_0x00029834();
  iStack_2 = 0x22b2;
  iStack_4 = 0xaf1;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xaf6;
  func_0x00029ae7();
  iStack_2 = 0x22b2;
  iStack_4 = 0xafb;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  iStack_4 = 0xb00;
  FUN_28b3_1181();
  if ((bool)uVar10 || (bool)uVar11) {
    iStack_2 = 0x22b2;
    iStack_4 = 0xb0b;
    func_0x00029834();
    iStack_2 = 0x22b2;
    iStack_4 = 0xb14;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xb19;
    func_0x00029ae7();
    iStack_2 = 0x22b2;
    iStack_4 = 0xb1e;
    func_0x00029d78();
    iStack_2 = 0x22b2;
    iStack_4 = 0xb23;
    FUN_28b3_1181();
    if ((bool)uVar10 || (bool)uVar11) goto LAB_3ab8_5fa8;
  }
  uVar6 = *(undefined2 *)0x9d8a;
  *(undefined2 *)(unaff_BP + -0x1f2) = *(undefined2 *)0x9d88;
  *(undefined2 *)(unaff_BP + -0x1f0) = uVar6;
  iStack_2 = 0x22b2;
  iStack_4 = 0xbd1;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xbda;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  iStack_4 = 0xbe3;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  iStack_4 = 0xbec;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0xbf5;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xbfe;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0xc07;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xc10;
  func_0x00029983();
  iStack_2 = 0x22b2;
  iStack_4 = 0xc19;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xc22;
  func_0x00029983();
LAB_3ab8_60a2:
  if ((*(byte *)(*(int *)(unaff_BP + 8) + 0xdca) & 0x40) == 0) {
    iStack_2 = 0x22b2;
    iStack_4 = 0xe15;
    func_0x000298b4();
    iStack_2 = 0x22b2;
    iStack_4 = 0xe1a;
    func_0x00029d78();
    iStack_2 = 0x22b2;
    iStack_4 = 0xe23;
    func_0x00029c2c();
    iStack_2 = 0x22b2;
    iStack_4 = 0xe2c;
    func_0x00029b6d();
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
    func_0x000297e6(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000299d1(0x22b2);
    FUN_21f2_3454(0xbf48,*(int *)(unaff_BP + 8) + 0xc26);
    iStack_2 = 0xbf48;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0xee5;
    FUN_4375_7d59();
    iStack_2 = 0x22b2;
    iStack_4 = 0xeef;
    func_0x000297e6();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000299d1(0x22b2);
    FUN_21f2_3454(0xbf48,*(int *)(unaff_BP + 8) + 0xcf0);
    iStack_2 = 0xbf48;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0xf4d;
    FUN_4375_7d59();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf57;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf5c;
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
    FUN_21f2_3454(0xbf48,*(int *)(unaff_BP + 8) + 0xd18);
    iStack_2 = 0xbf48;
    iStack_4 = 0x22b2;
    uStack_8._2_2_ = 0xfc9;
    FUN_4375_7d59();
    halt_baddata();
  }
  iStack_2 = 0x22b2;
  iStack_4 = 0xc38;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  puVar5 = (undefined2 *)func_0x0002a18a(0x22b2);
  iStack_2 = puVar5[3];
  iStack_4 = puVar5[2];
  uStack_8._2_2_ = puVar5[1];
  uStack_8._0_2_ = *puVar5;
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar5 = (undefined2 *)func_0x0002a18a(0x22b2);
  func_0x000297e6(0x22b2,*puVar5,puVar5[1],puVar5[2],puVar5[3]);
  func_0x000299d1(0x22b2);
  puVar5 = (undefined2 *)func_0x0002a18a(0x22b2);
  func_0x000297e6(0x22b2,*puVar5,puVar5[1],puVar5[2],puVar5[3]);
  func_0x000299d1(0x22b2);
  puVar5 = (undefined2 *)func_0x0002a18a(0x22b2);
  func_0x000298b4(0x22b2,*puVar5,puVar5[1],puVar5[2],puVar5[3]);
  func_0x00029d78(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x00029b6d(0x22b2);
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
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
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
  FUN_4375_7b0c(0x22b2,*(undefined2 *)(unaff_BP + 8),*(int *)(unaff_BP + 8) + 0xc26);
  halt_baddata();
}



/* 3ab8:702c  FUN_3ab8_702c  1967 bytes, 2 callers */

int __cdecl16far FUN_3ab8_702c(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_DI;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 *puVar11;
  undefined2 local_1ae;
  undefined2 local_1ac;
  undefined2 local_1a2;
  undefined2 local_1a0;
  undefined2 local_19e;
  undefined2 local_19c;
  uint local_19a;
  int local_198;
  undefined2 local_196;
  undefined2 local_194;
  undefined2 local_192;
  undefined2 local_190;
  undefined2 local_18a;
  undefined2 local_188;
  int local_186;
  undefined2 local_184;
  undefined2 local_182;
  undefined2 local_17c;
  undefined2 local_17a;
  int local_178;
  undefined1 *local_176;
  undefined2 local_174;
  undefined2 local_172;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined2 local_168 [10];
  byte local_154;
  byte local_152;
  undefined2 local_150;
  undefined2 local_14e;
  undefined1 local_140 [278];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  uint uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 *puStack_c;
  
  FUN_21f2_0ebc();
  puStack_c = (undefined2 *)0x1bce;
  puVar11 = (undefined2 *)func_0x00000398();
  puVar6 = (undefined2 *)puVar11;
  puVar7 = local_168;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  puStack_c = (undefined2 *)local_140;
  uStack_e = 0;
  local_10 = 0x1bf2;
  FUN_1885_0344();
  local_176 = local_140;
  local_178 = 0;
  puStack_c = (undefined2 *)0x1c09;
  func_0x0000daa6();
  puStack_c = (undefined2 *)0x1c12;
  func_0x000190c7();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029983();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029983();
  local_19a = (uint)local_154;
  FUN_28b3_0d8b();
  func_0x00029b85();
  func_0x00029c2c();
  func_0x00029983();
  FUN_28b3_0d8b();
  func_0x00029b85();
  func_0x00029c2c();
  func_0x00029983();
  FUN_28b3_0d8b();
  func_0x00029b85();
  func_0x00029c2c();
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
  func_0x00029d78();
  local_10 = 0x22b2;
  local_12 = 0x1d46;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0x1d4f;
  func_0x000297e6();
  local_10 = 0x22b2;
  local_12 = 0x1d54;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0x1d5e;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0x1d67;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0x1d6c;
  func_0x00029d78();
  uStack_20 = 0x22b2;
  uStack_22 = 0x1d76;
  func_0x000299d1();
  uStack_20 = 0x22b2;
  uStack_22 = 0x1d7f;
  func_0x000297e6();
  uStack_20 = 0x22b2;
  uStack_22 = 0x1d84;
  func_0x00029d78();
  uStack_28 = 0x22b2;
  uStack_2a = 0x1d8e;
  func_0x000299d1();
  uStack_28 = 0x22b2;
  uStack_2a = 0x1d93;
  FUN_1def_043a();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x00029d78();
  local_10 = 0x22b2;
  local_12 = 0x1dd7;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0x1ddc;
  FUN_28b3_1582();
  uVar9 = (undefined1 *)0xfff7 < &uStack_e;
  uVar10 = &stack0x0000 == (undefined1 *)0x6;
  func_0x00029834();
  func_0x0002996b();
  func_0x00029d78();
  FUN_28b3_1181();
  if ((bool)uVar9 || (bool)uVar10) {
    local_196 = *(undefined2 *)0x9d88;
    local_194 = *(undefined2 *)0x9d8a;
    unaff_SI = *(undefined2 *)0x9d90;
    unaff_DI = *(undefined2 *)0x9d92;
  }
  else {
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029983();
  }
  if ((local_152 & 0x20) == 0) {
    func_0x000297e6();
    puStack_c = (undefined2 *)0x1e67;
    func_0x00029bb5();
    func_0x00029983();
    local_14 = local_150;
    local_12 = local_14e;
  }
  else {
    func_0x000297e6();
    puStack_c = (undefined2 *)0x1e90;
    func_0x00029bb5();
    func_0x00029983();
    local_14 = local_16c;
    local_12 = local_16a;
    func_0x000297e6();
    func_0x00029b6d();
    puStack_c = (undefined2 *)0x1ebf;
    func_0x00029bb5();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    puStack_c = (undefined2 *)0x1ee1;
    func_0x00029bb5();
    func_0x00029983();
    local_192 = *(undefined2 *)0xb784;
    local_190 = *(undefined2 *)0xb786;
    uVar8 = *(undefined2 *)0xb76c;
    *(undefined2 *)0xb784 = *(undefined2 *)0xb76a;
    *(undefined2 *)0xb786 = uVar8;
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029983();
  }
  puStack_c = (undefined2 *)local_176;
  uStack_e = 0x22b2;
  local_10 = 0x1f2d;
  func_0x00019287();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029b6d();
  iVar5 = 0x1f98;
  func_0x00029983();
  if ((local_152 & 0x20) != 0) {
    local_192 = local_196;
    local_190 = local_194;
    local_196 = unaff_SI;
    local_194 = unaff_DI;
    func_0x000297e6();
    func_0x00029af6();
    iVar5 = 0x1fd3;
    func_0x00029983();
  }
  uVar8 = 0x22b2;
  local_1a2 = *(undefined2 *)0x9d90;
  local_1a0 = *(undefined2 *)0x9d92;
  local_178 = 0;
  local_186 = 0;
  local_19e = local_1a2;
  local_19c = local_1a0;
  do {
    iVar3 = local_186;
    if (local_198 <= local_186) {
      return *(int *)0x148 - iVar5;
    }
    *(undefined2 *)0xb30c = local_17c;
    *(undefined2 *)0xb30e = local_17a;
    *(undefined2 *)0xb37e = local_18a;
    *(undefined2 *)0xb380 = local_188;
    uVar9 = local_140[local_186];
    uStack_e = 0x2190;
    puStack_c = (undefined2 *)uVar8;
    iVar4 = func_0x0002a752();
    iVar5 = local_186;
    if (iVar4 == 1) {
      local_1ac = CONCAT11(uVar9,local_140[iVar3 + 1]);
      puStack_c = (undefined2 *)0x21b0;
      local_1ae = FUN_28b3_1e80();
      local_186 = local_186 + 1;
      puStack_c = &local_1ae;
      uStack_e = 0x2a75;
      local_10 = 0x21cc;
      FUN_4375_86fd();
      if ((0 < local_178) && (local_178 < 5)) {
        local_19e = *(undefined2 *)0x9d8c;
        local_19c = *(undefined2 *)0x9d8e;
      }
      puStack_c = (undefined2 *)0x2a75;
      uStack_e = 0x21fc;
      func_0x000297e6();
      puStack_c = (undefined2 *)0x22b2;
      uStack_e = 0x2205;
      func_0x00029b6d();
      puStack_c = (undefined2 *)0x22b2;
      uStack_e = 0x220e;
      func_0x00029b6d();
LAB_3ab8_76d3:
      puStack_c = (undefined2 *)0x22b2;
      uStack_e = 0x2258;
      func_0x00029d78();
      local_14 = 0x22b2;
      uStack_16 = 0x2262;
      func_0x000299d1();
      local_14 = 0x22b2;
      uStack_16 = 0x226b;
      func_0x000297e6();
      local_14 = 0x22b2;
      uStack_16 = 0x2274;
      func_0x00029b6d();
      local_14 = 0x22b2;
      uStack_16 = 0x2279;
      func_0x00029d78();
      uStack_1c = 0x22b2;
      uStack_1e = 0x2283;
      func_0x000299d1();
      uStack_1c = local_1ae;
      uStack_1e = (local_152 & 0x20) >> 5;
      uStack_20 = 0;
      uStack_22 = 0x22b2;
      uStack_24 = 0x229a;
      FUN_3ab8_7ae0();
      if (3 < local_178) {
        local_17c = local_174;
        local_17a = local_172;
        local_18a = local_184;
        local_188 = local_182;
        local_19e = local_1a2;
        local_19c = local_1a0;
      }
      local_174 = local_17c;
      local_172 = local_17a;
      local_184 = local_18a;
      local_182 = local_188;
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029b6d();
      puStack_c = (undefined2 *)0x2319;
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      puStack_c = (undefined2 *)0x233b;
      func_0x00029bb5();
      func_0x00029983();
      local_178 = 0;
      uVar8 = 0x885;
      iVar5 = 0x234c;
      func_0x0000abfa();
    }
    else {
      puStack_c = (undefined2 *)local_176;
      uStack_e = 0x2a75;
      uVar8 = 0x18b3;
      local_10 = 0x2016;
      iVar3 = FUN_1885_0406();
      if (iVar3 == 0) {
        puStack_c = (undefined2 *)0x221e;
        local_1ae = func_0x00019234();
        puStack_c = (undefined2 *)0x18b3;
        uStack_e = 0x2233;
        func_0x000297e6();
        puStack_c = (undefined2 *)0x22b2;
        uStack_e = 0x223c;
        func_0x00029b6d();
        puStack_c = (undefined2 *)0x22b2;
        uStack_e = 0x2245;
        func_0x000297e6();
        puStack_c = (undefined2 *)0x22b2;
        uStack_e = 0x224e;
        func_0x0002996b();
        puStack_c = (undefined2 *)0x22b2;
        uStack_e = 0x2253;
        func_0x00029c9d();
        goto LAB_3ab8_76d3;
      }
      local_178 = iVar3 % 10;
      local_186 = local_186 + 1;
      if (3 < local_178) {
        if (local_178 == 5) {
          func_0x00029834();
          FUN_28b3_100d();
          func_0x00029983();
        }
        if (local_178 == 6) {
          func_0x00029834();
          FUN_28b3_100d();
          func_0x00029983();
        }
        func_0x000297e6();
        puStack_c = (undefined2 *)0x20b8;
        func_0x00029b6d();
        func_0x0002996b();
        func_0x00029b6d();
        func_0x0002996b();
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x0002996b();
        func_0x00029bb5();
        uVar8 = 0x22b2;
        iVar5 = 0x210f;
        func_0x00029983();
        if ((local_152 & 0x20) != 0) {
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029bb5();
          uVar8 = 0x22b2;
          iVar5 = 0x214c;
          func_0x00029983();
        }
      }
    }
    local_186 = local_186 + 1;
  } while( true );
}



/* 3ab8:77db  FUN_3ab8_77db  131 bytes, 0 callers */

void __cdecl16far FUN_3ab8_77db(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  int iVar4;
  
  FUN_21f2_0ebc();
  FUN_1000_0599(0x22b2,0x14,1);
  func_0x00012276(0xdef,0x1de,0x53a);
  iVar2 = 0xdef;
  func_0x00010526(0x11f2);
  iVar4 = 1;
  do {
    while( true ) {
      if (*(int *)0x150 < iVar4) {
        return;
      }
      cVar1 = FUN_12c1_009c();
      if (cVar1 == '\x1b') {
        return;
      }
      iVar4 = iVar2;
      uVar3 = func_0x00000398(0x11f2);
      if (*(byte *)((int)uVar3 + 0x14) < 0x5a) break;
LAB_3ab8_784f:
      iVar2 = 0;
      iVar4 = iVar4 + 1;
    }
    iVar2 = 0;
    uVar3 = func_0x00000398(0);
    if ((*(byte *)((int)uVar3 + 0x16) & 2) == 0) goto LAB_3ab8_784f;
    iVar4 = param_1;
    FUN_3ab8_702c(param_1);
  } while( true );
}



/* 3ab8:785e  FUN_3ab8_785e  642 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_785e(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  undefined2 *puVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_0000001e;
  int *in_stack_00000020;
  int *in_stack_00000022;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  
  FUN_21f2_0ebc();
  local_8 = 0x22b2;
  local_a = 0x23fc;
  FUN_28b3_0d8b();
  local_8 = 0x22b2;
  local_a = 0x2404;
  func_0x00029c2c();
  local_8 = 0x22b2;
  local_a = 0x2409;
  func_0x00029d78();
  local_8 = 0x22b2;
  local_a = 0x2411;
  func_0x000299b9();
  local_10 = 0x22b2;
  local_12 = 0x241b;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0x242a;
  FUN_28b3_0d8b();
  local_10 = 0x22b2;
  local_12 = 0x2432;
  func_0x00029c2c();
  local_10 = 0x22b2;
  local_12 = 0x2437;
  func_0x00029d78();
  local_10 = 0x22b2;
  local_12 = 0x243f;
  func_0x000299b9();
  local_18 = 0x22b2;
  uStack_1a = 0x2449;
  func_0x000299d1();
  local_18 = 0;
  uStack_1a = 0x22b2;
  local_1c = 0x2451;
  puVar11 = (undefined2 *)FUN_1def_05d1();
  uVar3 = *puVar11;
  uVar4 = puVar11[1];
  local_8 = 0x1bb4;
  local_a = 0x2469;
  func_0x00029834();
  local_10 = 0x22b2;
  local_12 = 0x2473;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0x247b;
  func_0x00029834();
  local_18 = 0x22b2;
  uStack_1a = 0x2485;
  func_0x000299d1();
  local_18 = 0;
  uStack_1a = 0x22b2;
  local_1c = 0x248d;
  puVar11 = (undefined2 *)func_0x0001e558();
  uVar5 = *puVar11;
  uVar6 = puVar11[1];
  local_8 = 0x1bb4;
  local_a = 0x24ac;
  FUN_28b3_0d8b();
  local_8 = 0x22b2;
  local_a = 0x24b4;
  func_0x00029c2c();
  local_8 = 0x22b2;
  local_a = 0x24bc;
  func_0x00029983();
  local_8 = 0x22b2;
  local_a = 0x24cd;
  FUN_28b3_0d8b();
  local_8 = 0x22b2;
  local_a = 0x24d5;
  func_0x00029c2c();
  local_8 = 0x22b2;
  local_a = 0x24dd;
  func_0x0002996b();
  local_8 = 0x22b2;
  local_a = 0x24e5;
  FUN_28b3_0ee9();
  if ((param_5 == param_3) && (param_4 == param_2)) {
    local_8 = 0x22b2;
    local_a = 0x24fe;
    func_0x00029834();
    local_8 = 0x22b2;
    local_a = 0x2506;
    func_0x00029c2c();
    local_8 = 0x22b2;
    local_a = 0x250e;
    func_0x000297e6();
    local_8 = 0x22b2;
    local_a = 0x2513;
    func_0x00029d78();
    local_8 = 0x22b2;
    local_a = 0x2518;
    FUN_28b3_117c();
    local_8 = 0x22b2;
    local_a = 0x2520;
    func_0x00029983();
  }
  local_8 = 0x22b2;
  local_a = 0x2528;
  func_0x000297e6();
  local_10 = 0x22b2;
  local_12 = 0x2532;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0x253a;
  func_0x000297e6();
  local_18 = 0x22b2;
  uStack_1a = 0x2544;
  func_0x000299d1();
  local_18 = 0;
  uStack_1a = 0x22b2;
  local_1c = 0x254c;
  puVar11 = (undefined2 *)FUN_1def_05d1();
  uVar7 = *puVar11;
  uVar8 = puVar11[1];
  local_8 = 0x1bb4;
  local_a = 0x2564;
  func_0x000297e6();
  local_10 = 0x22b2;
  local_12 = 0x256e;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0x2576;
  func_0x000297e6();
  local_18 = 0x22b2;
  uStack_1a = 0x2580;
  func_0x000299d1();
  local_18 = 0;
  uStack_1a = 0x22b2;
  local_1c = 0x2588;
  puVar11 = (undefined2 *)func_0x0001e558();
  uVar9 = *puVar11;
  uVar10 = puVar11[1];
  if (param_1 == 0) {
    local_8 = CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
    local_18 = uVar3;
    local_16 = uVar4;
    local_14 = uVar5;
    local_12 = uVar6;
    local_10 = uVar7;
    local_e = uVar8;
    local_c = uVar9;
    local_a = uVar10;
    puVar13 = &local_1c;
    puVar11 = &local_18;
    for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
      puVar2 = puVar13;
      puVar13 = puVar13 + 1;
      puVar1 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar2 = *puVar1;
    }
    FUN_17a6_0cba();
  }
  else {
    if ((*in_stack_00000022 != param_3) || (*in_stack_00000020 != param_2)) {
      local_10 = in_stack_0000001e;
      local_12 = 0x1bb4;
      local_14 = 0x2623;
      local_e = uVar3;
      local_c = uVar4;
      local_a = uVar5;
      local_8 = uVar6;
      FUN_4375_82e3();
    }
    local_18 = in_stack_0000001e;
    uStack_1a = 0x1bb4;
    local_1c = 0x2645;
    local_16 = uVar7;
    local_14 = uVar8;
    local_12 = uVar9;
    local_10 = uVar10;
    local_e = uVar3;
    local_c = uVar4;
    local_a = uVar5;
    local_8 = uVar6;
    FUN_4375_7f3a();
    *in_stack_00000022 = param_5;
    *in_stack_00000020 = param_4;
  }
  return 1;
}



/* 3ab8:7ae0  FUN_3ab8_7ae0  2671 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_7ae0(undefined2 param_1,int param_2,uint param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,int param_7,undefined2 param_8,undefined2 param_9,
             undefined2 param_10,undefined2 param_11,undefined2 param_12,int param_13)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int aiStack_902 [9];
  undefined2 local_8f0;
  int aiStack_8ec [50];
  int local_888;
  int local_886;
  byte *local_884;
  int aiStack_882 [50];
  int local_81e;
  int local_81c;
  int local_81a;
  int local_818;
  int local_816 [20];
  int local_7ee;
  byte *local_7ec;
  int aiStack_7ea [18];
  int aiStack_7c6 [306];
  int aiStack_562 [321];
  int aiStack_2e0 [11];
  byte *local_2ca;
  int aiStack_2bc [18];
  int aiStack_298 [19];
  int aiStack_272 [288];
  undefined2 local_32;
  undefined2 local_30;
  int local_2e;
  int local_2c;
  int aiStack_2a [6];
  byte *local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  int aiStack_16 [6];
  int *local_a;
  byte *local_8;
  
  FUN_21f2_0ebc();
  local_30 = 0xff9d;
  local_32 = 0xff9d;
  aiStack_16[4] = 1;
  aiStack_2a[2] = 1;
  aiStack_2a[3] = 1;
  aiStack_2a[4] = 1;
  aiStack_16[3] = 0;
  aiStack_2a[1] = 0;
  aiStack_2a[5] = 0;
  aiStack_16[1] = 0xffff;
  aiStack_16[2] = 0xffff;
  local_1e = (byte *)0xffff;
  local_1c = 0xffff;
  local_1a = 0xffff;
  if ((param_3 < 0x2772) || (0x2c23 < param_3)) {
    local_8 = (byte *)param_3;
    local_a = (int *)0x22b2;
    aiStack_16[5] = 0x26c9;
    local_7ee = func_0x0002a94a();
    local_a = local_816;
    aiStack_16[5] = 0x2a75;
    uVar2 = 0x10a9;
    aiStack_16[4] = 0x26d9;
    local_8 = (byte *)local_7ee;
    func_0x00010e35();
    local_8 = (byte *)local_816;
    local_7ec = local_8;
    if (param_13 != 0) {
      local_a = (int *)param_13;
      aiStack_16[5] = 0x10a9;
      uVar2 = 0x18b3;
      aiStack_16[4] = 0x26f2;
      func_0x0001937f();
    }
    uVar6 = uVar2;
    if (param_2 != 0) {
      local_8 = local_7ec;
      local_a = (int *)param_3;
      uVar6 = 0x18b3;
      aiStack_16[4] = 0x2706;
      aiStack_16[5] = uVar2;
      func_0x00019446();
    }
    for (local_81c = 0; local_81c < 0x12; local_81c = local_81c + 1) {
      for (local_81a = 0; local_81a < 0x12; local_81a = local_81a + 1) {
        aiStack_2bc[local_81c * 0x12 + local_81a + 1] = 0;
      }
    }
    for (local_81c = 0; local_81c < 0x10; local_81c = local_81c + 1) {
      for (local_81a = 0; local_81a < 2; local_81a = local_81a + 1) {
        local_81e = 0;
        do {
          if (((uint)*local_7ec << ((byte)local_81e & 0x1f) & 0x80) != 0) {
            aiStack_298[local_81a * 8 + local_81c * 0x12 + local_81e + 2] = 1;
          }
          local_81e = local_81e + 1;
        } while (local_81e < 8);
        local_7ec = local_7ec + 1;
      }
    }
    if (((param_3 < 0x2122) || (0x232f < param_3)) && ((param_3 < 0x7430 || (0x791f < param_3)))) {
      for (local_2e = 1; local_2e < 0x11; local_2e = local_2e + 1) {
        for (local_2c = 1; local_2c < 0x11; local_2c = local_2c + 1) {
          iVar3 = local_2e * 0x12 + local_2c;
          if ((((aiStack_2bc[iVar3] < 1) && (aiStack_2bc[iVar3 + 2] != 0)) &&
              (iVar3 = local_2e * 0x12 + local_2c, aiStack_2e0[iVar3 + 1] < 1)) &&
             ((aiStack_298[iVar3 + 1] != 0 &&
              ((iVar3 = local_2e * 0x12 + local_2c, 0 < aiStack_298[iVar3] ||
               (0 < aiStack_2e0[iVar3 + 2])))))) {
            aiStack_2bc[local_2e * 0x12 + local_2c + 1] = 0;
          }
        }
      }
      for (local_2e = 1; local_2e < 0x11; local_2e = local_2e + 1) {
        for (local_2c = 0x10; 0 < local_2c; local_2c = local_2c + -1) {
          iVar3 = local_2e * 0x12 + local_2c;
          if (((aiStack_2bc[iVar3] != 0) && (aiStack_2bc[iVar3 + 2] < 1)) &&
             (((iVar3 = local_2e * 0x12 + local_2c, aiStack_2e0[iVar3 + 1] < 1 &&
               (aiStack_298[iVar3 + 1] != 0)) &&
              ((iVar3 = local_2e * 0x12 + local_2c, 0 < aiStack_2e0[iVar3] ||
               (0 < aiStack_298[iVar3 + 2])))))) {
            aiStack_2bc[local_2e * 0x12 + local_2c + 1] = 0;
          }
        }
      }
    }
    for (local_2e = 0; local_2e < 0x12; local_2e = local_2e + 1) {
      for (local_2c = 0; local_2c < 0x12; local_2c = local_2c + 1) {
        iVar3 = local_2e * 0x12 + local_2c;
        aiStack_562[iVar3] = 0;
        aiStack_7ea[iVar3] = 0;
      }
    }
    for (local_2e = 1; local_2e < 0x11; local_2e = local_2e + 1) {
      for (local_2c = 1; local_2c < 0xf; local_2c = local_2c + 1) {
        if ((((aiStack_562[local_2e * 0x12 + local_2c] == 0) &&
             (iVar3 = local_2e * 0x12 + local_2c, aiStack_2bc[iVar3 + 1] != 0)) &&
            (aiStack_2bc[iVar3 + 2] != 0)) && (aiStack_2bc[iVar3 + 3] != 0)) {
          local_81e = 0;
          aiStack_2bc[local_2e * 0x12 + local_2c + 1] = -3;
          for (aiStack_2e0[3] = local_2c + 1; aiStack_2e0[3] < 0x11;
              aiStack_2e0[3] = aiStack_2e0[3] + 1) {
            local_81e = local_81e + 1;
            iVar3 = local_2e * 0x12 + aiStack_2e0[3];
            if (aiStack_2bc[iVar3 + 2] == 0) {
              iVar3 = local_2e * 0x12;
              iVar4 = iVar3 + aiStack_2e0[3];
              aiStack_562[iVar4] = -3;
              aiStack_2bc[iVar4 + 1] = -3;
              aiStack_562[iVar3 + local_2c] = local_81e;
              break;
            }
            aiStack_562[iVar3] = -1;
            aiStack_2bc[iVar3 + 1] = -2;
          }
        }
      }
    }
    for (local_2c = 1; local_2c < 0x11; local_2c = local_2c + 1) {
      for (local_2e = 1; local_2e < 0xe; local_2e = local_2e + 1) {
        if (((aiStack_7ea[local_2e * 0x12 + local_2c] == 0) &&
            (iVar3 = local_2e * 0x12 + local_2c, aiStack_2bc[iVar3 + 1] != 0)) &&
           ((aiStack_298[iVar3 + 1] != 0 && (aiStack_272[iVar3] != 0)))) {
          local_81e = 0;
          aiStack_2bc[local_2e * 0x12 + local_2c + 1] = -3;
          for (aiStack_2e0[3] = local_2e + 1; aiStack_2e0[3] < 0x11;
              aiStack_2e0[3] = aiStack_2e0[3] + 1) {
            local_81e = local_81e + 1;
            iVar3 = aiStack_2e0[3] * 0x12 + local_2c;
            if (aiStack_298[iVar3 + 1] == 0) {
              iVar3 = aiStack_2e0[3] * 0x12 + local_2c;
              aiStack_7ea[iVar3] = -3;
              aiStack_2bc[iVar3 + 1] = -3;
              aiStack_7ea[local_2e * 0x12 + local_2c] = local_81e;
              break;
            }
            aiStack_7ea[iVar3] = -1;
            aiStack_2bc[iVar3 + 1] = -2;
            if (aiStack_562[iVar3] != 0) {
              aiStack_2bc[iVar3 + 1] = -4;
            }
          }
        }
      }
    }
    local_8 = (byte *)0x0;
    aiStack_16[5] = 0x2ae9;
    local_a = (int *)uVar6;
    func_0x0000daa6();
    for (local_2e = 1; local_2e < 0x11; local_2e = local_2e + 1) {
      local_2c = 1;
      do {
        iVar3 = local_2e;
        local_81a = local_2c;
        local_818 = local_2e;
        iVar4 = local_2e * 0x12;
        iVar5 = iVar4 + local_2c;
        if (0 < aiStack_562[iVar5]) {
          local_816[0] = aiStack_562[iVar5];
          aiStack_562[iVar5] = -2;
          local_8 = (byte *)&local_30;
          local_a = &local_32;
          aiStack_16[5] = param_12;
          aiStack_16[4] = param_11;
          aiStack_16[3] = param_10;
          aiStack_16[2] = param_9;
          aiStack_16[1] = param_8;
          aiStack_16[0] = param_7;
          uStack_18 = param_6;
          local_1a = param_5;
          local_1c = param_4;
          iVar5 = local_2c + local_816[0];
          aiStack_2a[5] = iVar3;
          aiStack_2a[4] = local_2c;
          aiStack_2a[3] = iVar3;
          aiStack_2a[2] = param_1;
          aiStack_2a[1] = 0x885;
          aiStack_2a[0] = 0x2f4b;
          local_1e = (byte *)iVar5;
          FUN_3ab8_785e();
          local_81a = iVar5;
          if (0 < aiStack_7ea[iVar5 + iVar4]) {
            local_816[0] = aiStack_7ea[iVar5 + iVar4];
            aiStack_7ea[iVar4 + iVar5] = -2;
            local_8 = (byte *)&local_30;
            local_a = &local_32;
            aiStack_16[5] = param_12;
            aiStack_16[4] = param_11;
            aiStack_16[3] = param_10;
            aiStack_16[2] = param_9;
            aiStack_16[1] = param_8;
            aiStack_16[0] = param_7;
            uStack_18 = param_6;
            local_1a = param_5;
            local_1c = param_4;
            aiStack_2a[5] = local_818 + local_816[0];
            aiStack_2a[3] = local_818;
            aiStack_2a[2] = param_1;
            aiStack_2a[1] = 0x885;
            aiStack_2a[0] = 0x2fb0;
            aiStack_2a[4] = iVar5;
            local_1e = (byte *)iVar5;
            FUN_3ab8_785e();
          }
        }
        iVar4 = local_2c;
        iVar3 = local_2e;
        local_81a = local_2c;
        local_818 = local_2e;
        iVar5 = local_2e * 0x12 + local_2c;
        if (0 < aiStack_7ea[iVar5]) {
          local_816[0] = aiStack_7ea[iVar5];
          aiStack_7ea[iVar5] = -2;
          local_8 = (byte *)&local_30;
          local_a = &local_32;
          aiStack_16[5] = param_12;
          aiStack_16[4] = param_11;
          aiStack_16[3] = param_10;
          aiStack_16[2] = param_9;
          aiStack_16[1] = param_8;
          aiStack_16[0] = param_7;
          uStack_18 = param_6;
          local_1a = param_5;
          local_1c = param_4;
          local_1e = (byte *)iVar4;
          aiStack_2a[5] = iVar3 + local_816[0];
          aiStack_2a[4] = iVar4;
          aiStack_2a[3] = iVar3;
          aiStack_2a[2] = param_1;
          aiStack_2a[1] = 0x885;
          aiStack_2a[0] = 0x3022;
          FUN_3ab8_785e();
        }
        if (aiStack_2bc[local_818 * 0x12 + local_81a + 1] == -3) {
          local_2ca = (byte *)0xffff;
          do {
            if ((aiStack_298[(int)(local_2ca + local_818 * 0x12 + local_81a + 1)] == -3) &&
               (aiStack_7c6[(int)(local_2ca + local_818 * 0x12 + local_81a)] != -3)) {
              local_8 = (byte *)&local_30;
              local_a = &local_32;
              aiStack_16[5] = param_12;
              aiStack_16[4] = param_11;
              aiStack_16[3] = param_10;
              aiStack_16[2] = param_9;
              aiStack_16[1] = param_8;
              aiStack_16[0] = param_7;
              uStack_18 = param_6;
              local_1a = param_5;
              local_1c = param_4;
              local_1e = local_2ca + local_81a;
              aiStack_2a[5] = local_818 + 1;
              aiStack_2a[4] = local_81a;
              aiStack_2a[3] = local_818;
              aiStack_2a[2] = param_1;
              aiStack_2a[1] = 0x885;
              aiStack_2a[0] = 0x30a3;
              FUN_3ab8_785e();
            }
            local_2ca = local_2ca + 2;
          } while ((int)local_2ca < 2);
        }
        local_2c = local_2c + 1;
      } while (local_2c < 0x11);
      for (local_2c = 1; local_2c < 0x11; local_2c = local_2c + 1) {
        local_81a = local_2c;
        local_818 = local_2e;
        if (aiStack_2bc[local_2e * 0x12 + local_2c + 1] != 0) {
          local_888 = 0;
          local_7ec = (byte *)0x0;
          local_886 = 1;
          iVar3 = local_2e * 0x12 + local_2c;
          if (aiStack_2bc[iVar3 + 1] == 1) {
            local_886 = 0;
            aiStack_2bc[iVar3 + 1] = -3;
          }
LAB_3ab8_8334:
          local_884 = (byte *)0x0;
          local_7ee = 0;
          for (local_2ca = (byte *)0x1; iVar3 = local_818, (int)local_2ca < 9;
              local_2ca = local_2ca + 1) {
            local_81e = aiStack_16[(int)local_2ca] + local_81a;
            local_81c = aiStack_2a[(int)local_2ca] + local_818;
            if (((0 < aiStack_2bc
                      [(aiStack_2a[(int)local_2ca] + local_818) * 0x12 +
                       aiStack_16[(int)local_2ca] + local_81a + 1]) &&
                ((aiStack_562[local_818 * 0x12 + local_81a + 1] == 0 || (local_2ca != (byte *)0x4)))
                ) && (((-3 < aiStack_562[local_818 * 0x12 + local_81a + 1] ||
                       (local_2ca != (byte *)0x3)) &&
                      (((iVar3 = local_818 * 0x12 + local_81a, aiStack_2bc[iVar3 + 1] < -2 ||
                        (aiStack_7c6[iVar3] == 0)) ||
                       ((local_2ca != (byte *)0x2 && (local_2ca != (byte *)0x4)))))))) {
              if (local_884 == (byte *)0x0) {
                local_884 = local_2ca;
                if (local_888 == 0) goto LAB_3ab8_7f8b;
              }
              else if (local_7ee == 0) {
                local_7ee = 1;
LAB_3ab8_7f8b:
                local_888 = local_888 + 1;
                aiStack_882[local_888] = local_818;
                aiStack_8ec[local_888] = local_81a;
              }
            }
          }
          if (0 < (int)local_884) {
            if ((int)local_884 < 5) {
              local_7ec = local_884 + 4;
            }
            else {
              local_7ec = local_884 + -4;
            }
            local_81c = local_818;
            local_81e = local_81a;
            local_886 = 1;
            local_818 = local_818 + aiStack_2a[(int)local_884];
            iVar4 = local_81a + aiStack_16[(int)local_884];
            aiStack_2bc[local_818 * 0x12 + iVar4 + 1] = 0;
            local_8 = (byte *)&local_30;
            local_a = &local_32;
            aiStack_16[5] = param_12;
            aiStack_16[4] = param_11;
            aiStack_16[3] = param_10;
            aiStack_16[2] = param_9;
            aiStack_16[1] = param_8;
            aiStack_16[0] = param_7;
            uStack_18 = param_6;
            local_1a = param_5;
            local_1c = param_4;
            aiStack_2a[4] = local_81a;
            aiStack_2a[3] = iVar3;
            aiStack_2a[2] = param_1;
            aiStack_2a[1] = 0x885;
            aiStack_2a[0] = 0x2c86;
            local_81a = iVar4;
            aiStack_2a[5] = local_818;
            local_1e = (byte *)iVar4;
            FUN_3ab8_785e();
            goto LAB_3ab8_8334;
          }
          iVar3 = local_818 * 0x12 + local_81a;
          if ((aiStack_7ea[iVar3] == 0) && (aiStack_562[iVar3] == 0)) {
            local_2ca = (byte *)0x2;
            do {
              pbVar1 = local_2ca;
              local_81e = aiStack_16[(int)local_2ca] + local_81a;
              aiStack_902[(int)(local_2ca + 1)] = 0;
              aiStack_2a[5] = aiStack_2a[(int)pbVar1] + local_818;
              local_81c = aiStack_2a[5];
              if ((aiStack_2bc[aiStack_2a[5] * 0x12 + local_81e + 1] < -2) &&
                 (local_2ca != local_7ec)) {
                local_8 = (byte *)&local_30;
                local_a = &local_32;
                aiStack_16[5] = param_12;
                aiStack_16[4] = param_11;
                aiStack_16[3] = param_10;
                aiStack_16[2] = param_9;
                aiStack_16[1] = param_8;
                aiStack_16[0] = param_7;
                uStack_18 = param_6;
                local_1a = param_5;
                local_1c = param_4;
                local_1e = (byte *)local_81e;
                aiStack_2a[4] = local_81a;
                aiStack_2a[3] = local_818;
                aiStack_2a[2] = param_1;
                aiStack_2a[1] = 0x885;
                aiStack_2a[0] = 0x2d2c;
                FUN_3ab8_785e();
                local_886 = 1;
                aiStack_902[(int)(pbVar1 + 1)] = 1;
              }
              local_2ca = local_2ca + 2;
            } while ((int)local_2ca < 9);
            aiStack_902[1] = local_8f0;
            local_2ca = (byte *)0x1;
            do {
              local_1e = (byte *)(aiStack_16[(int)local_2ca] + local_81a);
              local_81e = (int)local_1e;
              aiStack_2a[5] = aiStack_2a[(int)local_2ca] + local_818;
              local_81c = aiStack_2a[5];
              if ((((aiStack_2bc[aiStack_2a[5] * 0x12 + (int)local_1e + 1] < -1) &&
                   (aiStack_902[(int)local_2ca] == 0)) && (aiStack_902[(int)(local_2ca + 2)] == 0))
                 && (local_2ca != local_7ec)) {
                local_8 = (byte *)&local_30;
                local_a = &local_32;
                aiStack_16[5] = param_12;
                aiStack_16[4] = param_11;
                aiStack_16[3] = param_10;
                aiStack_16[2] = param_9;
                aiStack_16[1] = param_8;
                aiStack_16[0] = param_7;
                uStack_18 = param_6;
                local_1a = param_5;
                local_1c = param_4;
                aiStack_2a[4] = local_81a;
                aiStack_2a[3] = local_818;
                aiStack_2a[2] = param_1;
                aiStack_2a[1] = 0x885;
                aiStack_2a[0] = 0x2dd9;
                FUN_3ab8_785e();
                local_886 = 1;
              }
              local_2ca = local_2ca + 2;
            } while ((int)local_2ca < 8);
          }
          if (0 < local_888) {
            local_818 = aiStack_882[local_888];
            local_81a = aiStack_8ec[local_888];
            local_888 = local_888 + -1;
            goto LAB_3ab8_8334;
          }
          if (local_886 == 0) {
            local_8 = (byte *)&local_30;
            local_a = &local_32;
            aiStack_16[5] = param_12;
            aiStack_16[4] = param_11;
            aiStack_16[3] = param_10;
            aiStack_16[2] = param_9;
            aiStack_16[1] = param_8;
            aiStack_16[0] = param_7;
            uStack_18 = param_6;
            local_1a = param_5;
            local_1c = param_4;
            local_1e = (byte *)local_81a;
            aiStack_2a[5] = local_818;
            aiStack_2a[4] = local_81a;
            aiStack_2a[3] = local_818;
            aiStack_2a[2] = param_1;
            aiStack_2a[1] = 0x885;
            aiStack_2a[0] = 0x2e56;
            FUN_3ab8_785e();
          }
        }
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* 3ab8:854f  FUN_3ab8_854f  122 bytes, 0 callers */

void __cdecl16far FUN_3ab8_854f(int param_1,undefined2 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined1 local_de2 [3526];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 ***local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 ***pppuStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  pppuStack_6 = (undefined2 ***)0x30da;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)0x652;
  pppuStack_6 = &local_16;
  uStack_8 = 0x22b2;
  uStack_a = 0x30e7;
  func_0x00024c86();
  puStack_4 = (undefined1 *)0x804;
  pppuStack_6 = &local_16;
  uStack_8 = 0x22b2;
  uStack_a = 0x30f6;
  FUN_21f2_2d26();
  if (param_1 == 0) {
    puStack_4 = (undefined1 *)0x22b2;
    pppuStack_6 = (undefined2 ***)0x3112;
    func_0x0000c3ca();
    puStack_4 = (undefined1 *)*(undefined2 *)0x9dbe;
    pppuStack_6 = (undefined2 ***)*(undefined2 *)0x9dbc;
    uStack_8 = *(undefined2 *)0x9dba;
    uStack_a = *(undefined2 *)0x9db8;
    uStack_c = *(undefined2 *)0x9dbe;
    uStack_e = *(undefined2 *)0x9dbc;
    uStack_10 = *(undefined2 *)0x9dba;
    uStack_12 = *(undefined2 *)0x9db8;
    uStack_14 = 0;
    local_16 = &local_16;
    uStack_18 = 0xfffe;
    uStack_1a = 1;
    uStack_1c = 0;
    pcVar1 = (code *)swi(0x3f);
    iVar2 = (*pcVar1)();
    if ((iVar2 != -1) && (*(int *)0x158 == 0)) {
      func_0x0000c3ca();
      puStack_4 = (undefined1 *)0x3162;
      FUN_3ab8_77db();
      puStack_4 = (undefined1 *)0x316b;
      func_0x00008095();
    }
  }
  else {
    puStack_4 = local_de2;
    pppuStack_6 = (undefined2 ***)param_2;
    uStack_8 = 0x22b2;
    uStack_a = 0x310a;
    FUN_3ab8_702c();
  }
  return;
}


