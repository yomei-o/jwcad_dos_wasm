/* Ghidra decompilation of jw16.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  29 bytes, 2 callers */

void __cdecl16far FUN_3ab8_0000(void)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  func_0x0002504e(0x22b2);
  *(undefined2 *)0xd70 = 0;
  func_0x000144d2(0x22b2,0x43a4);
  return;
}



/* 3ab8:001d  FUN_3ab8_001d  211 bytes, 1 callers */

void __cdecl16far FUN_3ab8_001d(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_21f2_0ebc();
  uVar1 = 0x885;
  func_0x0000daa6(0x22b2,0);
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xc08 = 1;
  iVar2 = 2;
  do {
    FUN_1000_0599(uVar1,0x11,iVar2);
    uVar1 = 0xdef;
    iVar2 = -0x542e;
    func_0x00010526(0xdef);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x19);
  FUN_1000_0599(0xdef,1,1);
  func_0x0000c3ca(0xdef);
  do {
    iVar2 = 0;
    FUN_1000_02b5(0x43bf,0,*(undefined2 *)0x1b42,7);
  } while (iVar2 + 1 < 0x51);
  func_0x0000a76b(0xdef,*(int *)0xa58 + 1,*(int *)0xa5e + 1,*(int *)0x1b3e + -1,
                  *(undefined2 *)0x1b40);
  func_0x0000f350(0x885,*(undefined2 *)0xa58,*(undefined2 *)0xa5e,*(undefined2 *)0x1b3e,
                  *(undefined2 *)0x1b40,7,1,0,0);
  func_0x0000f1d8(0xdef,*(int *)0xa58 + 1,*(int *)0xa5e + 1,*(int *)0x1b3e + -1,*(int *)0x1b40 + -1)
  ;
  return;
}



/* 3ab8:00f0  FUN_3ab8_00f0  235 bytes, 2 callers */

void __cdecl16far FUN_3ab8_00f0(int param_1,int param_2)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char acStack_51 [67];
  int local_e;
  undefined2 local_c;
  undefined2 *puStack_a;
  char *pcStack_8;
  char *pcStack_6;
  
  pcStack_6 = (char *)0xac7b;
  FUN_21f2_0ebc();
  pcStack_6 = (char *)*(undefined2 *)0xc290;
  pcStack_8 = acStack_51 + 1;
  puStack_a = (undefined2 *)0x22b2;
  local_c = 0xac89;
  FUN_21f2_3454();
  pcStack_6 = acStack_51 + 1;
  pcStack_8 = (char *)0x22b2;
  puStack_a = (undefined2 *)0xac94;
  local_e = func_0x00024ce4();
  if ((0 < local_e) && (acStack_51[local_e] != '\\')) {
    pcStack_6 = (char *)0x43c1;
    pcStack_8 = acStack_51 + 1;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0xacb1;
    FUN_21f2_2d26();
  }
  pcStack_6 = acStack_51 + 1;
  pcStack_8 = (char *)0x43c3;
  puStack_a = (undefined2 *)0xbf48;
  local_c = 0x22b2;
  local_e = 0xacc4;
  FUN_21f2_3454();
  if (param_1 == 1) {
    pcStack_6 = (char *)0x43cc;
    pcStack_8 = (char *)0xbf48;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0xacda;
    FUN_21f2_2d26();
  }
  if (param_1 == 2) {
    pcStack_6 = (char *)0x43ce;
    pcStack_8 = (char *)0xbf48;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0xacef;
    FUN_21f2_2d26();
  }
  if (param_1 == 3) {
    pcStack_6 = (char *)0x43d0;
    pcStack_8 = (char *)0xbf48;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0xad04;
    FUN_21f2_2d26();
  }
  if (param_1 == 4) {
    pcStack_6 = (char *)0x43d2;
    pcStack_8 = (char *)0xbf48;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0xad19;
    FUN_21f2_2d26();
  }
  if (0 < param_2) {
    pcStack_6 = (char *)(param_2 + 0x41);
    pcStack_8 = (char *)0x43d4;
    puStack_a = &local_c;
    local_c = 0x22b2;
    local_e = 0xad35;
    FUN_21f2_3454();
    pcStack_6 = (char *)&local_c;
    pcStack_8 = (char *)0xbf48;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0xad45;
    FUN_21f2_2d26();
  }
  pcStack_6 = (char *)0x43d7;
  pcStack_8 = (char *)0xbf48;
  puStack_a = (undefined2 *)0x22b2;
  local_c = 0xad54;
  FUN_21f2_2d26();
  return;
}



/* 3ab8:01db  FUN_3ab8_01db  390 bytes, 3 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 ******* __cdecl16far FUN_3ab8_01db(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 ******in_stack_0000fff8;
  undefined2 *******local_4;
  
  local_4 = (undefined2 *******)0x3ab8;
  FUN_21f2_0ebc();
  if (param_1 == 1) {
    in_stack_0000fff8 = (undefined2 ******)(uint)*(byte *)0x11ec;
  }
  if (param_1 == 2) {
    in_stack_0000fff8 = (undefined2 ******)(uint)*(byte *)0x11ed;
  }
  if (param_1 == 3) {
    in_stack_0000fff8 = (undefined2 ******)(uint)*(byte *)0x11ee;
  }
  if (param_1 == 4) {
    in_stack_0000fff8 = (undefined2 ******)(uint)*(byte *)0x11ef;
  }
  local_4 = (undefined2 *******)in_stack_0000fff8;
  FUN_3ab8_00f0(param_1);
  local_4 = (undefined2 *******)0x254;
  iVar1 = FUN_21f2_1348(0xbf48);
  *(int *)0xd70 = iVar1;
  if (iVar1 == 0) {
    *(undefined1 *)*(undefined2 *)0xc290 = 0;
    *(undefined1 *)0x11ec = 0;
    *(undefined1 *)0x11ed = 0;
    *(undefined1 *)0x11ee = 0;
    *(undefined1 *)0x11ef = 0;
    local_4 = (undefined2 *******)*(undefined2 *)0xc290;
    func_0x000120ec(0x22b2,param_1 + 0x1e);
    local_4 = (undefined2 *******)0x11f2;
    FUN_3ab8_0000();
    *(undefined2 *)0x158 = 1;
    *(undefined2 *)0xc08 = 0;
  }
  else {
    do {
      local_4 = (undefined2 *******)*(undefined2 *)0xd70;
      iVar1 = func_0x0002509c(0x22b2,0xbf48,100);
      if (iVar1 == 0) {
        return (undefined2 *******)0xffff;
      }
    } while ((*(char *)0xbf48 == '#') || (*(char *)0xbf48 == '\n'));
    local_4 = &local_4;
    iVar1 = func_0x000253ce(0x22b2,0xbf48,0x43dc);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        local_4 = (undefined2 *******)*(undefined2 *)0xd70;
        FUN_21f2_1262();
        *(undefined2 *)0xd70 = 0;
        return local_4;
      }
      for (iVar1 = 1; iVar1 <= param_2; iVar1 = iVar1 + 1) {
        do {
          local_4 = (undefined2 *******)*(undefined2 *)0xd70;
          iVar1 = 100;
          iVar2 = func_0x0002509c(0x22b2,0xbf48);
          if (iVar2 == 0) {
            return (undefined2 *******)0xffff;
          }
        } while ((((*(char *)0xbf48 != '9') || (*(char *)0xbf49 != '9')) || (*(byte *)0xbf4a < 0x30)
                 ) || (0x39 < *(byte *)0xbf4a));
      }
      while( true ) {
        local_4 = (undefined2 *******)*(undefined2 *)0xd70;
        iVar1 = func_0x0002509c(0x22b2,0xbf48,100);
        if (iVar1 == 0) break;
        if ((*(char *)0xbf48 != '#') && (*(char *)0xbf48 != '\n')) {
          local_4 = &local_4;
          func_0x000253ce(0x22b2,0xbf48,0x43e1);
          return local_4;
        }
      }
    }
  }
  return (undefined2 *******)0xffff;
}



/* 3ab8:0361  FUN_3ab8_0361  45 bytes, 3 callers */

void __cdecl16far FUN_3ab8_0361(int param_1)

{
  FUN_21f2_0ebc();
  FUN_1000_0599(0x22b2,0x42,1);
  func_0x00012276(0xdef,0x43e4,param_1 + 1);
  return;
}



/* 3ab8:038e  FUN_3ab8_038e  437 bytes, 3 callers */

uint __cdecl16far
FUN_3ab8_038e(int param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
             undefined2 *param_5,undefined2 *param_6,undefined2 *param_7,undefined2 *param_8,
             undefined2 *param_9,undefined2 *param_10,uint *param_11,undefined2 *param_12,
             undefined2 *param_13)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  
  FUN_21f2_0ebc();
  do {
    uVar1 = *(undefined2 *)0x9bf4;
    uVar2 = *(undefined2 *)0x9bf6;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    *param_3 = uVar1;
    param_3[1] = uVar2;
    *param_4 = uVar1;
    param_4[1] = uVar2;
    *param_5 = uVar1;
    param_5[1] = uVar2;
    *param_6 = uVar1;
    param_6[1] = uVar2;
    *param_7 = uVar1;
    param_7[1] = uVar2;
    *param_8 = 0;
    *param_9 = 0;
    *param_10 = 0xffff;
    *param_11 = 0;
    uVar1 = *(undefined2 *)0x9bf4;
    *param_12 = uVar1;
    param_12[1] = uVar2;
    *param_13 = uVar1;
    param_13[1] = uVar2;
    iVar3 = func_0x0002509c(0x22b2,0xbf48,100,*(undefined2 *)0xd70);
    if (iVar3 == 0) {
      return 0xffff;
    }
  } while ((*(char *)0xbf48 == '#') || (*(char *)0xbf48 == '\n'));
  uVar4 = func_0x000253ce(0x22b2,0xbf48,0x43ee,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,param_9,param_10,param_11,param_12,param_13);
  if ((int)uVar4 < 7) {
    *param_8 = 0;
  }
  if ((int)uVar4 < 8) {
    *param_9 = 0;
  }
  if ((int)uVar4 < 9) {
    *param_10 = 0xffff;
  }
  if ((10 < (int)uVar4) && (uVar5 = *param_11 < 0xe, *param_11 == 0xe)) {
    func_0x00029834(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029ae7(0x22b2);
    func_0x00029d78(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar5) goto LAB_3ab8_04d1;
  }
  uVar1 = *(undefined2 *)0x9bf6;
  *param_12 = *(undefined2 *)0x9bf4;
  param_12[1] = uVar1;
LAB_3ab8_04d1:
  if ((param_1 == 1) || (param_1 == 2)) {
    if (0xb < (int)uVar4) {
      return uVar4;
    }
  }
  else {
    uVar5 = uVar4 < 0xc;
    if (0xb < (int)uVar4) {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar5) {
        func_0x00029834(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x0002996b(0x22b2);
        func_0x00029ae7(0x22b2);
        func_0x00029d78(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar5) {
          return uVar4;
        }
      }
    }
  }
  uVar1 = *(undefined2 *)0x9bf6;
  *param_13 = *(undefined2 *)0x9bf4;
  param_13[1] = uVar1;
  return uVar4;
}



/* 3ab8:0543  FUN_3ab8_0543  2081 bytes, 1 callers */

int __cdecl16far
FUN_3ab8_0543(int param_1,int param_2,uint *param_3,int *param_4,undefined2 *param_5,
             undefined2 *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
             int param_12,int param_13,int param_14,undefined2 *param_15)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 **ppuVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  int local_176;
  int local_174;
  undefined2 local_172;
  undefined2 local_170;
  undefined2 local_16e;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined2 local_168;
  char *local_15e;
  undefined2 local_15c;
  byte local_15a;
  undefined1 local_159;
  byte local_158;
  undefined2 local_156;
  undefined2 local_154;
  char local_152 [162];
  undefined2 local_b0;
  undefined2 local_ae;
  uint local_ac;
  uint local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  int local_9e;
  int local_9c;
  int local_9a;
  int local_98;
  int local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  int local_8e;
  uint local_8c;
  uint local_8a;
  uint local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  int local_78;
  undefined2 local_76;
  undefined2 local_74;
  int local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  char local_68 [68];
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 *puStack_1e;
  undefined2 *puStack_1c;
  undefined2 *puStack_1a;
  undefined2 *puStack_18;
  undefined2 *puStack_16;
  undefined2 *puStack_14;
  int *piStack_12;
  int *piStack_10;
  undefined2 *puStack_e;
  char *pcStack_c;
  char *pcStack_a;
  undefined2 *puStack_8;
  
  uVar10 = 0x22b2;
  FUN_21f2_0ebc();
  local_9c = 0;
  local_9a = 0;
  local_9e = 10000;
  local_92 = *(undefined2 *)0xc0ac;
  local_90 = *(undefined2 *)0xc0ae;
  local_82 = *(undefined2 *)0x150;
LAB_3ab8_0575:
  puStack_8 = (undefined2 *)param_2;
  pcStack_a = (char *)param_1;
  puStack_e = (undefined2 *)0xb0ff;
  pcStack_c = (char *)uVar10;
  local_98 = FUN_3ab8_01db();
  uVar11 = uVar10;
  if (local_98 < 0) {
LAB_3ab8_0d3c:
    *(undefined2 *)0xc0ac = local_92;
    *(undefined2 *)0xc0ae = local_90;
    *(undefined2 *)0x150 = local_82;
    puStack_8 = (undefined2 *)*(undefined2 *)0xd70;
    pcStack_c = (char *)0xb8da;
    pcStack_a = (char *)uVar11;
    FUN_21f2_1262();
    *(undefined2 *)0xd70 = 0;
    *param_4 = 0;
    *param_3 = 0xffff;
    *(undefined1 *)0xbf48 = 0;
    iVar6 = -1;
  }
  else {
    *param_4 = local_98;
    if (param_2 != 0) {
      puStack_8 = (undefined2 *)0xbf48;
      pcStack_a = local_68;
      uVar11 = 0x22b2;
      puStack_e = (undefined2 *)0xb129;
      pcStack_c = (char *)uVar10;
      FUN_21f2_3454();
      local_88 = 0;
      local_8c = 0;
      local_8a = 0;
LAB_3ab8_05b9:
      local_a4 = 0;
LAB_3ab8_05bf:
      while( true ) {
        while( true ) {
          puStack_8 = &local_70;
          pcStack_a = (char *)&local_6c;
          pcStack_c = (char *)&local_a4;
          puStack_e = &local_94;
          piStack_10 = &local_78;
          piStack_12 = &local_72;
          puStack_14 = &local_86;
          puStack_16 = &local_7c;
          puStack_18 = &local_80;
          puStack_1a = &local_76;
          puStack_1c = &local_a8;
          puStack_1e = &local_a2;
          uStack_24 = 0xb17b;
          uStack_22 = uVar11;
          local_aa = FUN_3ab8_038e();
          if ((*(char *)0xbf48 != 'S') && (*(char *)0xbf48 != 's')) break;
          puStack_8 = &local_76;
          pcStack_a = (char *)&local_a8;
          pcStack_c = (char *)&local_a2;
          puStack_e = (undefined2 *)0x4413;
          piStack_10 = (int *)0xbf49;
          puStack_14 = (undefined2 *)0xb1ae;
          piStack_12 = (int *)uVar11;
          local_aa = func_0x000253ce();
          uVar10 = *(undefined2 *)0x9c02;
          *(undefined2 *)0xb498 = *(undefined2 *)0x9c00;
          *(undefined2 *)0xb49a = uVar10;
          if (0 < (int)local_aa) {
            *(undefined2 *)0xb498 = local_a2;
            *(undefined2 *)0xb49a = local_a0;
          }
          uVar10 = *(undefined2 *)0x9c02;
          *(undefined2 *)0xb488 = *(undefined2 *)0x9c00;
          *(undefined2 *)0xb48a = uVar10;
          if (1 < (int)local_aa) {
            *(undefined2 *)0xb488 = local_a8;
            *(undefined2 *)0xb48a = local_a6;
          }
          uVar12 = local_aa < 3;
          uVar13 = local_aa == 3;
          if (2 < (int)local_aa) {
            *(undefined1 *)0xbeec = 1;
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb212;
            func_0x00029834();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb21a;
            func_0x000297e6();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb21f;
            func_0x00029d78();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb224;
            FUN_28b3_1181();
            if (!(bool)uVar12 && !(bool)uVar13) {
              *(undefined1 *)0xbeec = 2;
            }
          }
          uVar11 = 0x22b2;
          local_9a = 1;
        }
        uVar12 = 0;
        uVar13 = local_aa == 0;
        if ((int)local_aa < 0) goto LAB_3ab8_0d3c;
        pcStack_a = (char *)0xb244;
        puStack_8 = (undefined2 *)uVar11;
        func_0x000297e6();
        puStack_8 = (undefined2 *)0x22b2;
        pcStack_a = (char *)0xb24d;
        func_0x000297e6();
        puStack_8 = (undefined2 *)0x22b2;
        pcStack_a = (char *)0xb252;
        FUN_28b3_1181();
        if (!(bool)uVar12) {
          puStack_8 = (undefined2 *)0x22b2;
          pcStack_a = (char *)0xb25d;
          func_0x000297e6();
          puStack_8 = (undefined2 *)0x22b2;
          pcStack_a = (char *)0xb266;
          func_0x000297e6();
          puStack_8 = (undefined2 *)0x22b2;
          pcStack_a = (char *)0xb26b;
          FUN_28b3_1181();
          if ((bool)uVar12 || (bool)uVar13) {
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb279;
            func_0x000297e6();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb282;
            func_0x000297e6();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb287;
            FUN_28b3_1181();
            if (!(bool)uVar12 && !(bool)uVar13) {
              local_a2 = *(undefined2 *)0x9c14;
              local_a0 = *(undefined2 *)0x9c16;
            }
            *param_15 = local_a2;
            param_15[1] = local_a0;
            if ((int)local_aa < 2) {
              local_a8 = *(undefined2 *)0x9c18;
              local_a6 = *(undefined2 *)0x9c1a;
            }
            *param_5 = local_a8;
            param_5[1] = local_a6;
            if ((int)local_aa < 3) {
              local_76 = *(undefined2 *)0x9c18;
              local_74 = *(undefined2 *)0x9c1a;
            }
            *param_6 = local_76;
            param_6[1] = local_74;
            *(undefined2 *)0xc0ac = local_92;
            *(undefined2 *)0xc0ae = local_90;
            *(undefined2 *)0x150 = local_82;
            puStack_8 = (undefined2 *)*(undefined2 *)0xd70;
            pcStack_a = (char *)0x22b2;
            pcStack_c = (char *)0xb304;
            FUN_21f2_1262();
            *(undefined2 *)0xd70 = 0;
            local_8e = 0;
            local_96 = 2;
            for (local_8a = 2; ((int)local_8a < 0x65 && (local_68[local_8a] == ' '));
                local_8a = local_8a + 1) {
              local_96 = local_96 + 1;
            }
            local_8a = local_96;
            while( true ) {
              if (100 < (int)local_8a) {
                return local_9c;
              }
              if (((local_68[local_8a] == '\r') || (local_68[local_8a] == '\0')) ||
                 (local_68[local_8a] == '\n')) break;
              *(char *)(local_8e + -0x40b8) = local_68[local_8a];
              local_8e = local_8e + 1;
              local_8a = local_8a + 1;
            }
            *(undefined1 *)(local_8e + -0x40b8) = 0;
            return local_9c;
          }
        }
        puStack_8 = (undefined2 *)0x22b2;
        pcStack_a = (char *)0xb32b;
        func_0x000297e6();
        puStack_8 = (undefined2 *)0x22b2;
        pcStack_a = (char *)0xb334;
        func_0x000297e6();
        puStack_8 = (undefined2 *)0x22b2;
        pcStack_a = (char *)0xb339;
        FUN_28b3_1181();
        if ((bool)uVar13) {
          local_88 = local_88 + 1;
        }
        else {
          local_8c = local_8c + 1;
        }
        uVar4 = local_88 + *(uint *)0x148;
        iVar6 = ((int)local_88 >> 0xf) + *(int *)0x14a + (uint)CARRY2(local_88,*(uint *)0x148) +
                (uint)(0xfffd < uVar4);
        if ((*(int *)0x13e < iVar6) || ((*(int *)0x13e <= iVar6 && (*(uint *)0x13c <= uVar4 + 2))))
        break;
        uVar4 = local_8c + *(uint *)0x14c;
        iVar6 = ((int)local_8c >> 0xf) + *(int *)0x14e + (uint)CARRY2(local_8c,*(uint *)0x14c) +
                (uint)(0xfffd < uVar4);
        if ((*(int *)0x142 <= iVar6) && ((*(int *)0x142 < iVar6 || (*(uint *)0x140 <= uVar4 + 2))))
        break;
        uVar12 = local_8a < 0x3c;
        if (0x3b < (int)local_8a) goto LAB_3ab8_0ca5;
        puStack_8 = (undefined2 *)0x22b2;
        pcStack_a = (char *)0xb419;
        func_0x000297e6();
        puStack_8 = (undefined2 *)0x22b2;
        pcStack_a = (char *)0xb422;
        func_0x000297e6();
        puStack_8 = (undefined2 *)0x22b2;
        uVar11 = 0x22b2;
        pcStack_a = (char *)0xb427;
        FUN_28b3_1181();
        if (((bool)uVar12) || (3 < param_1)) {
          puStack_8 = (undefined2 *)0x22b2;
          pcStack_a = (char *)0xb44e;
          func_0x000297e6();
          puStack_8 = (undefined2 *)0x22b2;
          pcStack_a = (char *)0xb453;
          func_0x00029d78();
          puStack_8 = (undefined2 *)0x22b2;
          pcStack_a = (char *)0xb45c;
          func_0x00029c74();
          puStack_8 = (undefined2 *)0x22b2;
          pcStack_a = (char *)0xb461;
          local_ac = FUN_28b3_0f51();
          if ((local_9a != 0) && (param_1 < 4)) {
            local_ac = -local_ac;
          }
          iVar6 = local_8a * 4;
          *(uint *)(iVar6 + param_7) = local_ac;
          puStack_8 = (undefined2 *)0x22b2;
          pcStack_a = (char *)0xb492;
          func_0x000297e6();
          puStack_8 = (undefined2 *)0x22b2;
          pcStack_a = (char *)0xb497;
          func_0x00029d78();
          puStack_8 = (undefined2 *)0x22b2;
          pcStack_a = (char *)0xb4a0;
          func_0x00029c74();
          puStack_8 = (undefined2 *)0x22b2;
          uVar11 = 0x22b2;
          pcStack_a = (char *)0xb4a5;
          uVar10 = FUN_28b3_0f51();
          *(undefined2 *)(param_7 + iVar6 + 2) = uVar10;
          local_ac = (local_ac ^ (int)local_ac >> 0xf) - ((int)local_ac >> 0xf);
          if (((param_1 == 3) || (param_1 == 4)) &&
             ((local_ac == 700 ||
              (((local_ac == 0x2ee || (local_ac == 0x2ef)) || (local_ac == 800)))))) {
            uVar12 = 1;
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb4e0;
            func_0x000297e6();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb4e9;
            func_0x000297e6();
            puStack_8 = (undefined2 *)0x22b2;
            uVar11 = 0x22b2;
            pcStack_a = (char *)0xb4ee;
            FUN_28b3_1181();
            uVar10 = local_a8;
            uVar7 = local_a6;
            if ((bool)uVar12) {
              uVar10 = *(undefined2 *)0x9c24;
              uVar7 = *(undefined2 *)0x9c26;
            }
            *(undefined2 *)(local_8a * 8 + param_8) = uVar10;
            *(undefined2 *)(local_8a * 8 + param_8 + 2) = uVar7;
            *param_3 = local_8a;
            local_8a = local_8a + 1;
          }
          else {
            iVar6 = local_8a * 8;
            *(undefined2 *)(iVar6 + param_8) = local_76;
            *(undefined2 *)(iVar6 + param_8 + 2) = local_74;
            *(undefined2 *)(iVar6 + param_9) = local_80;
            *(undefined2 *)(iVar6 + param_9 + 2) = local_7e;
            *(undefined2 *)(param_8 + iVar6 + 4) = local_7c;
            *(undefined2 *)(param_8 + iVar6 + 6) = local_7a;
            *(undefined2 *)(param_9 + iVar6 + 4) = local_86;
            *(undefined2 *)(param_9 + iVar6 + 6) = local_84;
            iVar6 = local_8a * 2;
            *(int *)(iVar6 + param_10) = local_72;
            *(int *)(iVar6 + param_11) = local_78;
            *(undefined2 *)(iVar6 + param_12) = local_94;
            iVar8 = local_8a * 4;
            *(undefined2 *)(iVar8 + param_13) = local_6c;
            *(undefined2 *)(iVar8 + param_13 + 2) = local_6a;
            *(undefined2 *)(iVar8 + param_14) = local_70;
            *(undefined2 *)(iVar8 + param_14 + 2) = local_6e;
            if (((local_72 < 10000) || (29999 < local_72)) || (param_1 < 3)) goto LAB_3ab8_0cca;
            *(undefined2 *)(iVar6 + param_10) = 10000;
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb5d0;
            func_0x000297e6();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb5d8;
            FUN_28b3_100d();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb5e1;
            func_0x0002996b();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb5ea;
            func_0x00029983();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb5f3;
            func_0x000297e6();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb5fb;
            FUN_28b3_100d();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb604;
            func_0x0002996b();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb60d;
            func_0x00029983();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb616;
            func_0x000297e6();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb61f;
            func_0x000297e6();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb628;
            func_0x00029b6d();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb631;
            func_0x000297e6();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb63a;
            func_0x00029b6d();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb63f;
            FUN_28b3_117c();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb644;
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xb64e;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xb653;
            FUN_28b3_1582();
            uVar12 = (undefined1 *)0xfff7 < &puStack_e;
            uVar13 = &stack0x0000 == (undefined1 *)0x6;
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb65d;
            func_0x00029834();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb666;
            func_0x0002996b();
            puStack_8 = (undefined2 *)0x22b2;
            pcStack_a = (char *)0xb66b;
            FUN_28b3_1181();
            if ((bool)uVar12 || (bool)uVar13) {
LAB_3ab8_0b06:
              local_b0 = *(undefined2 *)0x9c24;
              local_ae = *(undefined2 *)0x9c26;
              local_172 = *(undefined2 *)0x9bf4;
              local_170 = *(undefined2 *)0x9bf6;
            }
            else {
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb676;
              func_0x000297e6();
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb67f;
              func_0x000297e6();
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb684;
              FUN_28b3_1181();
              if ((bool)uVar13) goto LAB_3ab8_0b06;
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb6af;
              func_0x000297e6();
              puStack_8 = &local_b0;
              pcStack_a = (char *)0x22b2;
              pcStack_c = (char *)0xb6b9;
              func_0x00029b9d();
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb6bf;
              func_0x00029983();
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb6c8;
              func_0x000297e6();
              puStack_8 = &local_172;
              pcStack_a = (char *)0x22b2;
              pcStack_c = (char *)0xb6d2;
              func_0x00029b9d();
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb6d8;
              func_0x00029983();
            }
            uVar11 = 0x22b2;
            local_176 = -1;
            local_152[0] = '\0';
            for (local_174 = 0; (local_174 < 0xa1 && (*(char *)(local_174 + -0x40b8) != '\0'));
                local_174 = local_174 + 1) {
              if (local_176 < 0) {
                if (*(char *)(local_174 + -0x40b8) == '\"') {
                  local_176 = 0;
                }
              }
              else {
                local_152[local_176] = *(char *)(local_174 + -0x40b8);
                local_152[local_176 + 1] = '\0';
                local_176 = local_176 + 1;
              }
            }
            if (0 < local_176) {
              local_152[local_176 + -1] = '\0';
            }
            if (local_152[0] != '\0') {
              local_9e = local_9e + 1;
              *(int *)(local_8a * 2 + param_10) = local_9e;
              local_15a = (byte)(local_78 % 100);
              if ((local_15a == 0) || (10 < local_15a)) {
                local_15a = 2;
              }
              local_15c = *(undefined2 *)0xbc78;
              local_15e = local_152;
              puStack_8 = (undefined2 *)(uint)local_15a;
              pcStack_a = (char *)0x0;
              puStack_e = (undefined2 *)0x22b2;
              piStack_10 = (int *)0xb799;
              pcStack_c = local_15e;
              puVar5 = (undefined2 *)func_0x00018eff();
              local_156 = *puVar5;
              local_154 = puVar5[1];
              local_159 = *(undefined1 *)0xb310;
              local_158 = local_158 & 0xdf;
              local_16e = *(undefined2 *)0x9bf4;
              local_16c = *(undefined2 *)0x9bf6;
              puStack_8 = (undefined2 *)0x18b3;
              pcStack_a = (char *)0xb7cf;
              func_0x000297e6();
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb7d8;
              func_0x00029b6d();
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb7e1;
              func_0x00029983();
              local_16a = *(undefined2 *)0x9bf4;
              local_168 = *(undefined2 *)0x9bf6;
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb7f9;
              func_0x000297e6();
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb802;
              func_0x00029b6d();
              puStack_8 = (undefined2 *)0x22b2;
              pcStack_a = (char *)0xb80b;
              func_0x00029983();
              ppuVar9 = &puStack_1e;
              puVar5 = &local_16e;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar2 = ppuVar9;
                ppuVar9 = ppuVar9 + 1;
                puVar1 = puVar5;
                puVar5 = puVar5 + 1;
                *puVar2 = *puVar1;
              }
              uVar11 = 0x18b3;
              uStack_22 = 0xb820;
              func_0x0001b0b0();
              goto LAB_3ab8_0cca;
            }
          }
        }
        else if (local_9c < 1) {
          local_9c = local_8a - 1;
        }
      }
      *(undefined2 *)0xc0ac = local_92;
      *(undefined2 *)0xc0ae = local_90;
      *(undefined2 *)0x150 = local_82;
      puStack_8 = (undefined2 *)*(undefined2 *)0xd70;
      pcStack_a = (char *)0x22b2;
      uVar10 = 0x22b2;
      pcStack_c = (char *)0xb3a8;
      FUN_21f2_1262();
      *(undefined2 *)0xd70 = 0;
      puStack_8 = (undefined2 *)(*(int *)0x150 + 2);
      pcStack_a = (char *)*(undefined2 *)0x152;
      uVar4 = local_8c + *(uint *)0x14c;
      puStack_e = (undefined2 *)(uVar4 + 2);
      pcStack_c = (char *)(((int)local_8c >> 0xf) + *(int *)0x14e +
                           (uint)CARRY2(local_8c,*(uint *)0x14c) + (uint)(0xfffd < uVar4));
      uVar4 = local_88 + *(uint *)0x148;
      piStack_12 = (int *)(uVar4 + 2);
      piStack_10 = (int *)(((int)local_88 >> 0xf) + *(int *)0x14a +
                           (uint)CARRY2(local_88,*(uint *)0x148) + (uint)(0xfffd < uVar4));
      puStack_14 = (undefined2 *)(*(int *)0xc0ac - *(int *)0xbefa);
      pcVar3 = (code *)swi(0x3f);
      iVar6 = (*pcVar3)();
      if (iVar6 == -1) {
        puStack_8 = (undefined2 *)0x62c;
        pcStack_a = (char *)0x22b2;
        uVar10 = 0x11f2;
        pcStack_c = (char *)0xb402;
        FUN_13bf_0a03();
      }
      goto LAB_3ab8_0575;
    }
    iVar6 = 0;
  }
  return iVar6;
LAB_3ab8_0ca5:
  puStack_8 = (undefined2 *)0x22b2;
  pcStack_a = (char *)0xb82e;
  func_0x000297e6();
  puStack_8 = (undefined2 *)0x22b2;
  pcStack_a = (char *)0xb837;
  func_0x000297e6();
  puStack_8 = (undefined2 *)0x22b2;
  uVar11 = 0x22b2;
  pcStack_a = (char *)0xb83c;
  FUN_28b3_1181();
  if ((bool)uVar12) goto LAB_3ab8_0cc1;
  goto LAB_3ab8_05bf;
LAB_3ab8_0cc1:
  puStack_8 = (undefined2 *)local_8a;
  pcStack_a = (char *)0x22b2;
  pcStack_c = (char *)0xb849;
  FUN_3ab8_0361();
LAB_3ab8_0cca:
  *param_3 = local_8a;
  local_8a = local_8a + 1;
  goto LAB_3ab8_05b9;
}



/* 3ab8:0d7d  FUN_3ab8_0d7d  140 bytes, 3 callers */

int __cdecl16far FUN_3ab8_0d7d(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  FUN_21f2_0ebc();
  local_6 = *(int *)0xa6a;
  *param_4 = *(int *)0xa6c;
  *param_5 = *(int *)0xb310;
  if ((0 < param_1) && (param_1 < 7)) {
    local_6 = param_1;
  }
  if ((0 < param_2) && (param_2 < 10)) {
    *param_4 = param_2;
  }
  if (-1 < param_3) {
    uVar1 = *(uint *)0xb310;
    uVar3 = (int)uVar1 >> 0xf;
    local_6 = 0x22b2;
    iVar2 = func_0x00008854();
    if (iVar2 == 0) {
      *param_5 = param_3 % 0x10 + (((int)((uVar1 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3) * 0x10;
    }
  }
  return local_6;
}



/* 3ab8:0e09  FUN_3ab8_0e09  237 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0e09(int *param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  undefined2 local_1c;
  undefined1 local_1a [2];
  undefined2 local_18 [2];
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  uint local_c;
  undefined2 *puStack_a;
  undefined1 *local_8;
  
  FUN_21f2_0ebc();
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb99e;
  func_0x00029834();
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb9a6;
  func_0x00029983();
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb9ae;
  func_0x00029834();
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb9b6;
  func_0x00029983();
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb9be;
  func_0x00029834();
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb9c6;
  func_0x00029983();
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb9ce;
  func_0x00029834();
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined2 *)0xb9d6;
  func_0x00029983();
  local_8 = local_1a;
  puStack_a = &local_1c;
  local_c = param_4;
  uStack_e = param_3;
  local_10 = param_2;
  uStack_12 = 0x22b2;
  local_14 = 0xb9eb;
  FUN_3ab8_0d7d();
  local_8 = (undefined1 *)0x0;
  puStack_a = (undefined2 *)0x22b2;
  local_c = 0xba05;
  func_0x0000daa6();
  puVar7 = &local_1c;
  puVar6 = local_18;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar3 = *puVar2;
  }
  uVar8 = 0x11f2;
  iVar4 = FUN_17a6_0cba();
  if (0 < iVar4) {
    *param_1 = *param_1 + 1;
    uVar5 = (int)param_4 >> 0xf;
    if ((int)((param_4 ^ uVar5) - uVar5) < 0x100) {
      local_8 = (undefined1 *)*(undefined2 *)0x14a;
      puStack_a = (undefined2 *)*(undefined2 *)0x148;
      local_c = 0x11f2;
      uVar8 = 0;
      uStack_e = 0xba40;
      uVar9 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar9 + 0x15);
      *pbVar1 = *pbVar1 | 0x10;
    }
    if ((int)((param_4 ^ uVar5) - uVar5) < 0x10) {
      local_8 = (undefined1 *)*(undefined2 *)0x14a;
      puStack_a = (undefined2 *)*(undefined2 *)0x148;
      uStack_e = 0xba65;
      local_c = uVar8;
      uVar9 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar9 + 0x15);
      *pbVar1 = *pbVar1 | 0x80;
    }
  }
  return;
}



/* 3ab8:0ef6  FUN_3ab8_0ef6  66 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0ef6(undefined2 param_1,int param_2,undefined2 param_3)

{
  undefined1 local_16 [10];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uStack_6 = 0xba81;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)0x441e;
  uStack_6 = param_3;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xba8d;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)(param_2 + 0x41);
  uStack_6 = 0x4423;
  puStack_8 = local_16;
  uStack_a = 0x22b2;
  uStack_c = 0xbaa3;
  FUN_21f2_3454();
  puStack_4 = local_16;
  uStack_6 = param_3;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xbab2;
  FUN_21f2_2d26();
  return;
}



/* 3ab8:0f38  FUN_3ab8_0f38  915 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_0f38(int param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  undefined2 *in_stack_00000024;
  undefined1 local_50 [2];
  undefined4 local_4e;
  undefined4 local_4a;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined1 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e [6];
  undefined2 local_22;
  int local_20;
  uint local_1e;
  int local_1c;
  uint local_1a;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined1 *local_a;
  
  FUN_21f2_0ebc();
  local_3c = 0;
  local_3a = 1;
  local_40 = *(undefined2 *)0x9c28;
  local_3e = *(undefined2 *)0x9c2a;
  local_a = (undefined1 *)0xbae4;
  func_0x000297e6();
  local_a = (undefined1 *)0xbaec;
  func_0x0002996b();
  local_a = (undefined1 *)0xbaf4;
  FUN_28b3_0ee9();
  local_a = (undefined1 *)0xbafc;
  func_0x000297e6();
  local_a = (undefined1 *)0xbb04;
  func_0x0002996b();
  local_a = (undefined1 *)0xbb0c;
  FUN_28b3_0ee9();
  local_a = (undefined1 *)0xbb14;
  func_0x000297e6();
  local_a = (undefined1 *)0xbb1c;
  FUN_28b3_100d();
  local_a = (undefined1 *)0xbb24;
  func_0x00029983();
  local_a = (undefined1 *)0xbb2c;
  func_0x000297e6();
  local_a = (undefined1 *)0xbb34;
  FUN_28b3_100d();
  local_a = (undefined1 *)0xbb3c;
  func_0x0002996b();
  local_a = (undefined1 *)0xbb44;
  FUN_28b3_0ee9();
  uVar6 = param_1 == 0;
  if (param_1 < 0) {
    local_a = (undefined1 *)0xbb52;
    func_0x000297e6();
    local_a = (undefined1 *)0xbb57;
    func_0x00029af6();
    local_a = (undefined1 *)0xbb5f;
    func_0x00029983();
  }
  local_a = (undefined1 *)0xbb68;
  func_0x000297e6();
  local_a = (undefined1 *)0xbb70;
  func_0x000297e6();
  local_a = (undefined1 *)0xbb75;
  FUN_28b3_1181();
  if ((bool)uVar6) {
    local_a = (undefined1 *)0xbb80;
    func_0x000297e6();
    local_a = (undefined1 *)0xbb88;
    func_0x000297e6();
    local_a = (undefined1 *)0xbb8d;
    FUN_28b3_1181();
    if ((bool)uVar6) {
      local_32 = *(undefined2 *)0x9bf4;
      local_30 = *(undefined2 *)0x9bf6;
      goto LAB_3ab8_106b;
    }
  }
  local_a = (undefined1 *)0xbb97;
  func_0x000297e6();
  local_a = (undefined1 *)0xbb9c;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  local_12 = 0xbba6;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xbbae;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  local_12 = 0xbbb3;
  func_0x00029d78();
  local_18._0_2_ = 0x22b2;
  local_1a = 0xbbbd;
  func_0x000299d1();
  local_18._0_2_ = 0x22b2;
  local_1a = 0xbbc2;
  func_0x0002a178();
  local_a = (undefined1 *)0xbbcc;
  func_0x00029834();
  local_a = (undefined1 *)0xbbd4;
  func_0x00029b85();
  local_a = (undefined1 *)0xbbdc;
  func_0x00029983();
LAB_3ab8_106b:
  local_a = (undefined1 *)0xbbf3;
  func_0x000297e6();
  local_a = (undefined1 *)0xbbfc;
  func_0x00029b6d();
  local_a = (undefined1 *)0xbc01;
  func_0x00029d78();
  local_a = (undefined1 *)0xbc06;
  local_4a = FUN_28b3_0f51();
  local_a = (undefined1 *)local_4a;
  uStack_c = 0x22b2;
  local_e = 0xbc13;
  local_4e = func_0x00021eee();
  local_18 = local_4e;
  if (param_2 != 0) {
    local_a = (undefined1 *)0xbc2f;
    func_0x000297e6();
    local_a = (undefined1 *)0xbc34;
    func_0x00029af6();
    local_a = (undefined1 *)0xbc3c;
    func_0x00029983();
  }
  if (param_3 != 0) {
    local_a = (undefined1 *)0xbc4a;
    func_0x000297e6();
    local_a = (undefined1 *)0xbc4f;
    func_0x00029af6();
    local_a = (undefined1 *)0xbc57;
    func_0x00029983();
  }
  local_a = (undefined1 *)0xbc5f;
  func_0x000298b4();
  local_a = (undefined1 *)0xbc67;
  func_0x00029b6d();
  local_a = (undefined1 *)0xbc6c;
  func_0x00029d78();
  local_a = (undefined1 *)0xbc71;
  uVar7 = FUN_28b3_0f51();
  local_a = (undefined1 *)uVar7;
  uStack_c = 0x22b2;
  local_e = 0xbc7e;
  local_4a = uVar7;
  uVar7 = func_0x00021eee();
  local_4e._2_2_ = (uint)((ulong)uVar7 >> 0x10);
  local_4e._0_2_ = (int)uVar7;
  uVar5 = false;
  uVar6 = false;
  if ((int)local_4e == 0) {
    uVar5 = local_4e._2_2_ < 0x168;
    uVar6 = local_4e._2_2_ == 0x168;
    if ((bool)uVar6) {
      local_4e._2_2_ = 0;
    }
  }
  local_a = (undefined1 *)0xbc9c;
  func_0x000297e6();
  local_a = (undefined1 *)0xbca4;
  func_0x000297e6();
  local_a = (undefined1 *)0xbca9;
  FUN_28b3_1181();
  if ((bool)uVar5 || (bool)uVar6) {
    local_20 = (int)local_4e;
    local_1e = local_4e._2_2_;
    local_1a = 0;
    local_1c = 0;
  }
  else {
    local_1e = 0;
    local_20 = 0;
    local_1c = (int)local_4e;
    local_1a = local_4e._2_2_;
  }
  local_a = (undefined1 *)0xbcdd;
  func_0x000297e6();
  local_a = (undefined1 *)0xbce5;
  func_0x00029b6d();
  local_a = (undefined1 *)0xbced;
  func_0x000297e6();
  local_a = (undefined1 *)0xbcf5;
  func_0x00029b6d();
  local_a = (undefined1 *)0xbcfa;
  FUN_28b3_117c();
  local_a = (undefined1 *)0xbcff;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  local_12 = 0xbd09;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xbd0e;
  FUN_28b3_1582();
  local_a = (undefined1 *)0xbd18;
  func_0x00029834();
  local_a = (undefined1 *)0xbd20;
  func_0x0002996b();
  local_a = (undefined1 *)0xbd28;
  func_0x00029983();
  local_22 = 10000;
  local_a = local_50;
  uStack_c = in_stack_00000022;
  local_e = in_stack_00000020;
  uStack_10 = in_stack_0000001e;
  local_12 = 0x22b2;
  local_14 = 0xbd42;
  uVar6 = FUN_3ab8_0d7d();
  local_14 = CONCAT11(uVar6,local_50[0]);
  local_12 = CONCAT11(local_12._1_1_,local_34);
  puVar4 = local_2e;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = in_stack_00000024;
    in_stack_00000024 = in_stack_00000024 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  local_a = (undefined1 *)0xbd69;
  func_0x000297e6();
  local_a = (undefined1 *)0xbd71;
  func_0x00029bb5();
  local_a = (undefined1 *)0xbd79;
  func_0x00029b6d();
  local_a = (undefined1 *)0xbd81;
  func_0x0002996b();
  local_a = (undefined1 *)0xbd86;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  local_12 = 0xbd90;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xbd95;
  func_0x0002a11e();
  local_a = (undefined1 *)0xbd9f;
  func_0x00029834();
  local_a = (undefined1 *)0xbda7;
  func_0x000297e6();
  local_a = (undefined1 *)0xbdac;
  func_0x00029d78();
  local_a = (undefined1 *)0xbdb1;
  func_0x00029c9d();
  local_a = (undefined1 *)0xbdb9;
  func_0x00029bb5();
  local_a = (undefined1 *)0xbdc1;
  func_0x00029983();
  if (param_1 < 1) {
    local_a = (undefined1 *)0xbe0c;
    func_0x000297e6();
    local_a = (undefined1 *)0xbe11;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    local_12 = 0xbe1b;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xbe20;
    func_0x0002a10c();
    local_a = (undefined1 *)0xbe2a;
    func_0x00029834();
    local_a = (undefined1 *)0xbe32;
    func_0x00029b6d();
    local_a = (undefined1 *)0xbe3a;
    func_0x00029b55();
  }
  else {
    local_a = (undefined1 *)0xbdcf;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    local_12 = 0xbdd9;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xbdde;
    func_0x0002a10c();
    local_a = (undefined1 *)0xbde8;
    func_0x00029834();
    local_a = (undefined1 *)0xbdf0;
    func_0x000297e6();
    local_a = (undefined1 *)0xbdf5;
    func_0x00029d78();
    local_a = (undefined1 *)0xbdfa;
    func_0x00029c9d();
    local_a = (undefined1 *)0xbe02;
    func_0x00029bb5();
  }
  local_a = (undefined1 *)0xbe42;
  func_0x00029983();
  return 1;
}



/* 3ab8:12cb  FUN_3ab8_12cb  1153 bytes, 2 callers */

void __cdecl16far FUN_3ab8_12cb(int param_1,uint param_2)

{
  uint uVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  uint in_stack_00000010;
  uint in_stack_00000012;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000016;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 *in_stack_00000024;
  undefined2 in_stack_00000026;
  undefined2 *in_stack_00000028;
  undefined2 in_stack_0000002a;
  int local_20;
  int local_1e;
  
  FUN_21f2_0ebc();
  if ((int)in_stack_00000010 < 1) {
    local_1e = 0;
    local_20 = 0;
    uVar1 = -in_stack_00000010;
    bVar3 = in_stack_00000010 != -10000;
    in_stack_00000010 = uVar1;
    if (bVar3 && 9999 < (int)uVar1) {
      local_1e = (int)uVar1 / 10000;
      in_stack_00000010 = (int)uVar1 % 1000;
    }
    if (((in_stack_00000010 == 1) && (param_1 == 1)) || (param_2 == in_stack_00000010)) {
      func_0x000297e6(0x22b2);
      func_0x00029b85(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029983(0x22b2);
    }
    else {
      *in_stack_00000024 = in_stack_00000014;
      in_stack_00000024[1] = in_stack_00000016;
    }
    if (10000 < (int)in_stack_00000012) {
      local_20 = (int)in_stack_00000012 / 10000;
      in_stack_00000012 = (int)in_stack_00000012 % 1000;
    }
    if (((in_stack_00000012 == 1) && (param_1 == 1)) || (param_2 == in_stack_00000012)) {
      func_0x000297e6(0x22b2);
      func_0x00029b85(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029983(0x22b2);
    }
    else {
      *in_stack_00000028 = in_stack_0000001c;
      in_stack_00000028[1] = in_stack_0000001e;
    }
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x00029c2c(0x22b2);
    func_0x00029983(0x22b2);
    if (local_1e == 0) {
      func_0x000297e6(0x22b2);
      func_0x00029b85(0x22b2);
      func_0x00029b6d(0x22b2);
    }
    else {
      uVar2 = local_1e == 0;
      uVar4 = local_1e == 1;
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar2 || (bool)uVar4) {
        func_0x000297e6(0x22b2);
        FUN_28b3_100d(0x22b2);
        func_0x00029bb5(0x22b2);
      }
      else {
        func_0x000297e6(0x22b2);
        func_0x00029bb5(0x22b2);
        FUN_28b3_100d(0x22b2);
      }
    }
    func_0x00029983(0x22b2);
    if (local_20 != 0) {
      uVar2 = local_20 == 0;
      uVar4 = local_20 == 1;
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar2 || (bool)uVar4) {
        func_0x000297e6(0x22b2);
        FUN_28b3_100d(0x22b2);
        func_0x00029bb5(0x22b2);
      }
      else {
        func_0x000297e6(0x22b2);
        func_0x00029bb5(0x22b2);
        FUN_28b3_100d(0x22b2);
      }
      goto LAB_3ab8_16d2;
    }
    func_0x000297e6(0x22b2);
    func_0x00029b85(0x22b2);
  }
  else {
    in_stack_00000010 = (int)in_stack_00000010 % 1000;
    if (in_stack_00000010 == 1) {
      uVar2 = param_1 == 0;
      uVar4 = param_1 == 1;
      if (!(bool)uVar4) goto LAB_3ab8_1325;
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar2 || (bool)uVar4) {
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar2 || (bool)uVar4) goto LAB_3ab8_1325;
      }
LAB_3ab8_135d:
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029983(0x22b2);
    }
    else {
LAB_3ab8_1325:
      uVar2 = param_2 < in_stack_00000010;
      uVar4 = param_2 == in_stack_00000010;
      if ((bool)uVar4) {
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar2) {
          func_0x000297e6(0x22b2);
          func_0x000297e6(0x22b2);
          FUN_28b3_1181(0x22b2);
          if ((bool)uVar2 || (bool)uVar4) goto LAB_3ab8_1380;
        }
        goto LAB_3ab8_135d;
      }
LAB_3ab8_1380:
      *in_stack_00000024 = in_stack_00000014;
      in_stack_00000024[1] = in_stack_00000016;
    }
    in_stack_00000012 = (int)in_stack_00000012 % 1000;
    if (in_stack_00000012 == 1) {
      uVar2 = param_1 == 0;
      uVar4 = param_1 == 1;
      if (!(bool)uVar4) goto LAB_3ab8_13d4;
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar2 || (bool)uVar4) {
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar2 || (bool)uVar4) goto LAB_3ab8_13d4;
      }
LAB_3ab8_140c:
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029983(0x22b2);
    }
    else {
LAB_3ab8_13d4:
      uVar2 = param_2 < in_stack_00000012;
      uVar4 = param_2 == in_stack_00000012;
      if ((bool)uVar4) {
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar2) {
          func_0x000297e6(0x22b2);
          func_0x000297e6(0x22b2);
          FUN_28b3_1181(0x22b2);
          if ((bool)uVar2 || (bool)uVar4) goto LAB_3ab8_142f;
        }
        goto LAB_3ab8_140c;
      }
LAB_3ab8_142f:
      *in_stack_00000028 = in_stack_0000001c;
      in_stack_00000028[1] = in_stack_0000001e;
    }
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
  }
  func_0x00029b6d(0x22b2);
LAB_3ab8_16d2:
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x0002996b(0x22b2);
  func_0x00029b9d(0x22b2,in_stack_00000024);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b9d(0x22b2,in_stack_00000026);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b9d(0x22b2,in_stack_00000028);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b9d(0x22b2,in_stack_0000002a);
  func_0x00029983(0x22b2);
  return;
}



/* 3ab8:174c  FUN_3ab8_174c  706 bytes, 2 callers */

void __cdecl16far FUN_3ab8_174c(int param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  undefined2 *in_stack_0000002e;
  undefined2 *in_stack_00000030;
  undefined2 *in_stack_00000032;
  undefined2 *in_stack_00000034;
  undefined2 local_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x3ab8;
  local_6 = 0xc2d7;
  FUN_21f2_0ebc();
  if (param_1 == 0) {
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc305;
    FUN_28b3_0d8b();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc314;
    FUN_28b3_0d8b();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc319;
    FUN_28b3_1172();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc321;
    func_0x00029b6d();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc329;
    func_0x00029bb5();
  }
  else {
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc33a;
    FUN_28b3_0d8b();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc349;
    FUN_28b3_0d8b();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc34e;
    FUN_28b3_1172();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc357;
    func_0x00029b55();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc35f;
    func_0x00029b6d();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc367;
    FUN_28b3_100d();
  }
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc36f;
  func_0x00029983();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc377;
  func_0x000297e6();
  puStack_4 = &local_6;
  local_6 = 0x22b2;
  func_0x00029bb5();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc386;
  func_0x00029983();
  if (param_3 == 0) {
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc394;
    func_0x000297e6();
  }
  else {
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc3a1;
    func_0x000297e6();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc3a9;
    FUN_28b3_100d();
  }
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc3b1;
  func_0x00029bb5();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc3b9;
  func_0x00029983();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc3c1;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  puVar2 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
  uVar1 = puVar2[1];
  *in_stack_0000002e = *puVar2;
  in_stack_0000002e[1] = uVar1;
  puStack_4 = (undefined2 *)0x1bb4;
  local_6 = 0xc3ff;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  puVar2 = (undefined2 *)func_0x0001e558(0x22b2,0);
  uVar1 = puVar2[1];
  *in_stack_00000030 = *puVar2;
  in_stack_00000030[1] = uVar1;
  if (param_1 == 0) {
    puStack_4 = (undefined2 *)0x1bb4;
    local_6 = 0xc45d;
    FUN_28b3_0d8b();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc46c;
    FUN_28b3_0d8b();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc471;
    FUN_28b3_1172();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc479;
    func_0x00029b6d();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc481;
    func_0x00029bb5();
  }
  else {
    puStack_4 = (undefined2 *)0x1bb4;
    local_6 = 0xc492;
    FUN_28b3_0d8b();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc4a1;
    FUN_28b3_0d8b();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc4a6;
    FUN_28b3_1172();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc4af;
    func_0x00029b55();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc4b7;
    func_0x00029b6d();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc4bf;
    FUN_28b3_100d();
  }
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc4c7;
  func_0x00029983();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc4cf;
  func_0x000297e6();
  puStack_4 = &local_6;
  local_6 = 0x22b2;
  func_0x00029bb5();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc4de;
  func_0x00029983();
  if (param_3 == 0) {
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc4ec;
    func_0x000297e6();
  }
  else {
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc4f9;
    func_0x000297e6();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = 0xc501;
    FUN_28b3_100d();
  }
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc509;
  func_0x00029bb5();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc511;
  func_0x00029983();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = 0xc519;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  puVar2 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
  uVar1 = puVar2[1];
  *in_stack_00000032 = *puVar2;
  in_stack_00000032[1] = uVar1;
  puStack_4 = (undefined2 *)0x1bb4;
  local_6 = 0xc557;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  puVar2 = (undefined2 *)func_0x0001e558(0x22b2,0);
  uVar1 = puVar2[1];
  *in_stack_00000034 = *puVar2;
  in_stack_00000034[1] = uVar1;
  return;
}



/* 3ab8:1a0e  FUN_3ab8_1a0e  1165 bytes, 2 callers */

int __cdecl16far
FUN_3ab8_1a0e(undefined2 param_1,int *param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,uint param_11,undefined2 param_12,
             undefined2 param_13,undefined2 param_14,undefined2 param_15,undefined2 param_16,
             undefined2 param_17,undefined2 param_18,undefined2 param_19)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  undefined4 uVar11;
  int local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 local_26;
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
  uint uStack_e;
  undefined2 *puStack_c;
  undefined2 *puStack_a;
  int *piStack_8;
  
  FUN_21f2_0ebc();
  piStack_8 = (int *)0x22b2;
  puStack_a = (undefined2 *)0xc5a4;
  func_0x000297e6();
  piStack_8 = (int *)0x22b2;
  puStack_a = (undefined2 *)0xc5ad;
  func_0x00029b6d();
  piStack_8 = (int *)0x22b2;
  puStack_a = (undefined2 *)0xc5b5;
  func_0x00029983();
  piStack_8 = (int *)0x22b2;
  puStack_a = (undefined2 *)0xc5bd;
  func_0x000297e6();
  piStack_8 = (int *)0x22b2;
  puStack_a = (undefined2 *)0xc5c6;
  func_0x000297e6();
  piStack_8 = (int *)0x22b2;
  puStack_a = (undefined2 *)0xc5cb;
  FUN_28b3_1181();
  if ((bool)in_ZF) {
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc5d5;
    func_0x000297e6();
  }
  else {
    piStack_8 = &local_38;
    puStack_a = &local_34;
    puStack_c = &local_26;
    uStack_e = param_11;
    uStack_10 = param_10;
    uStack_12 = param_9;
    uStack_14 = param_19;
    uStack_16 = param_18;
    uStack_18 = param_17;
    uStack_1a = param_16;
    uStack_1c = param_15;
    uStack_1e = param_14;
    uStack_20 = param_13;
    uStack_22 = param_12;
    uStack_24 = param_4;
    local_26 = param_3;
    uStack_2a = param_7;
    local_2c = 1;
    uStack_2e = 0x22b2;
    local_30 = 0xc619;
    FUN_3ab8_0f38();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc624;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc629;
    func_0x00029d78();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc632;
    func_0x00029c74();
    piStack_8 = (int *)0x22b2;
    uVar10 = 0x22b2;
    puStack_a = (undefined2 *)0xc637;
    iVar4 = FUN_28b3_0f51();
    iVar6 = iVar4 / 10;
    iVar4 = iVar4 % 10;
    if (iVar4 < 4) {
      puVar9 = &local_26;
      puVar8 = &local_26;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar1;
      }
      iVar4 = 0x22b2;
      uVar10 = 0x11f2;
      uStack_2a = 0xc659;
      iVar5 = FUN_13bf_01c1();
      iVar6 = 0;
      if (iVar5 != 0) {
        *param_2 = *param_2 + 1;
        iVar6 = (param_11 ^ (int)param_11 >> 0xf) - ((int)param_11 >> 0xf);
        if (iVar6 < 0x100) {
          piStack_8 = (int *)*(undefined2 *)0x14e;
          puStack_a = (undefined2 *)*(undefined2 *)0x14c;
          puStack_c = (undefined2 *)0x11f2;
          uVar10 = 0;
          uStack_e = 0xc67f;
          uVar11 = func_0x00000271();
          iVar6 = (int)uVar11;
          *(byte *)(iVar6 + 0x1e) = *(byte *)(iVar6 + 0x1e) | 0x80;
        }
      }
    }
    if (iVar4 == 8) {
      uVar7 = 8;
      local_38 = iVar6;
    }
    else {
      uVar7 = iVar4 % 4;
      if ((uVar7 == 1) || (uVar7 == 3)) {
        puStack_a = (undefined2 *)0xc6b1;
        piStack_8 = (int *)uVar10;
        func_0x000297e6();
        piStack_8 = (int *)0x22b2;
        puStack_a = (undefined2 *)0xc6b6;
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uStack_12 = 0xc6c0;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0xc6c8;
        func_0x000297e6();
        uStack_10 = 0x22b2;
        uStack_12 = 0xc6cd;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc6d7;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc6df;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc6e4;
        func_0x00029d78();
        uStack_20 = 0x22b2;
        uStack_22 = 0xc6ee;
        func_0x000299d1();
        uStack_20 = 0x22b2;
        uStack_22 = 0xc6f6;
        func_0x000297e6();
        uStack_20 = 0x22b2;
        uStack_22 = 0xc6fb;
        func_0x00029d78();
        uVar10 = 0x22b2;
        uStack_2a = 0xc705;
        func_0x000299d1();
        uStack_2a = param_10;
        local_2c = param_9;
        uStack_2e = param_1;
        local_30 = 0x22b2;
        local_32 = 0xc715;
        FUN_3ab8_0e09();
        uVar7 = param_11;
      }
      if ((uVar7 == 2) || (uVar7 == 3)) {
        puStack_a = (undefined2 *)0xc72c;
        piStack_8 = (int *)uVar10;
        func_0x000297e6();
        piStack_8 = (int *)0x22b2;
        puStack_a = (undefined2 *)0xc731;
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uStack_12 = 0xc73b;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0xc743;
        func_0x000297e6();
        uStack_10 = 0x22b2;
        uStack_12 = 0xc748;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc752;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc75a;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc75f;
        func_0x00029d78();
        uStack_20 = 0x22b2;
        uStack_22 = 0xc769;
        func_0x000299d1();
        uStack_20 = 0x22b2;
        uStack_22 = 0xc771;
        func_0x000297e6();
        uStack_20 = 0x22b2;
        uStack_22 = 0xc776;
        func_0x00029d78();
        uVar10 = 0x22b2;
        uStack_2a = 0xc780;
        func_0x000299d1();
        uStack_2a = param_10;
        local_2c = param_9;
        uStack_2e = param_1;
        local_30 = 0x22b2;
        local_32 = 0xc790;
        FUN_3ab8_0e09();
        uVar7 = param_11;
      }
      uVar3 = *(undefined2 *)0xbee;
      *(undefined2 *)0xbe4 = *(undefined2 *)0xbec;
      *(undefined2 *)0xbe6 = uVar3;
      uVar3 = *(undefined2 *)0xbfe;
      *(undefined2 *)0xbf4 = *(undefined2 *)0xbfc;
      *(undefined2 *)0xbf6 = uVar3;
      *(undefined2 *)0xbec = local_34;
      *(undefined2 *)0xbee = local_32;
      *(int *)0xbfc = local_38;
      *(undefined2 *)0xbfe = local_36;
    }
    if (uVar7 != 8) {
      return local_38;
    }
    puStack_a = (undefined2 *)0xc7db;
    piStack_8 = (int *)uVar10;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc7e3;
    func_0x00029b85();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc7eb;
    func_0x0002996b();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc7f3;
    func_0x00029983();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc7fb;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc800;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc80a;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc813;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc81b;
    func_0x00029b85();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc823;
    func_0x0002996b();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc828;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc832;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xc83a;
    FUN_1def_05d1();
    piStack_8 = (int *)0x1bb4;
    puStack_a = (undefined2 *)0xc844;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc84d;
    FUN_28b3_100d();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc856;
    func_0x00029bb5();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc85e;
    func_0x00029983();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc866;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc86b;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc875;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc87d;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc882;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc88c;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xc894;
    func_0x0001e558();
    piStack_8 = (int *)0x1bb4;
    puStack_a = (undefined2 *)0xc89e;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc8a7;
    FUN_28b3_100d();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc8b0;
    func_0x00029bb5();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc8b8;
    func_0x00029983();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc8c1;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc8c9;
    func_0x00029b85();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc8d1;
    func_0x0002996b();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc8d9;
    func_0x00029983();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc8e2;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc8ea;
    func_0x00029b85();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc8f2;
    func_0x0002996b();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc8fa;
    func_0x00029983();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc902;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc907;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc911;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc919;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc91e;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc928;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xc930;
    FUN_1def_05d1();
    piStack_8 = (int *)0x1bb4;
    puStack_a = (undefined2 *)0xc93a;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc943;
    FUN_28b3_100d();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc94c;
    func_0x00029bb5();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc954;
    func_0x00029983();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc95c;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc961;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc96b;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc973;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc978;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc982;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xc98a;
    func_0x0001e558();
    piStack_8 = (int *)0x1bb4;
    puStack_a = (undefined2 *)0xc994;
    func_0x000297e6();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc99d;
    FUN_28b3_100d();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc9a6;
    func_0x00029bb5();
    piStack_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xc9ae;
    func_0x0002996b();
  }
  piStack_8 = (int *)0x22b2;
  puStack_a = (undefined2 *)0xc9b3;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xc9bd;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xc9c5;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xc9ca;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xc9d4;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0xc9dc;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xc9e1;
  func_0x00029d78();
  uStack_20 = 0x22b2;
  uStack_22 = 0xc9eb;
  func_0x000299d1();
  uStack_20 = 0x22b2;
  uStack_22 = 0xc9f3;
  func_0x000297e6();
  uStack_20 = 0x22b2;
  uStack_22 = 0xc9f8;
  func_0x00029d78();
  uStack_2a = 0xca02;
  func_0x000299d1();
  uStack_2a = param_10;
  local_2c = param_9;
  uStack_2e = param_1;
  local_30 = 0x22b2;
  local_32 = 0xca12;
  iVar6 = FUN_3ab8_0e09();
  return iVar6;
}



/* 3ab8:1e9b  FUN_3ab8_1e9b  715 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_1e9b(undefined2 *param_1,undefined2 **param_2,undefined2 param_3,undefined2 **param_4,
             undefined2 param_5,undefined2 **param_6,undefined2 *****param_7,undefined2 **param_8,
             undefined2 ***param_9,undefined2 *****param_10,undefined2 param_11,undefined2 *param_12
             ,undefined2 param_13,undefined2 param_14,undefined2 param_15,undefined2 **param_16,
             undefined2 *****param_17)

{
  undefined2 uVar1;
  undefined2 ******ppppppuVar2;
  undefined2 ******ppppppuVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 ****local_64;
  undefined2 local_62;
  undefined2 ***local_60;
  undefined2 *local_5e;
  undefined2 local_5c;
  int local_5a;
  undefined2 **local_50;
  undefined2 **local_4e;
  undefined2 local_4c;
  undefined2 *****local_44;
  undefined2 ****local_42;
  undefined2 local_40;
  undefined2 ****local_3e;
  undefined2 *****local_3c;
  undefined2 ***local_3a;
  int local_38;
  undefined2 *****local_36;
  undefined2 *local_34;
  undefined2 ***local_32;
  undefined2 **local_30;
  undefined2 *****local_2e;
  undefined2 local_2c;
  undefined2 *local_2a;
  undefined2 *****local_28;
  undefined2 *local_26;
  undefined2 ****local_24;
  undefined2 **local_22;
  undefined2 *****local_20;
  undefined2 ***local_1e;
  undefined2 *local_1c;
  undefined2 *****local_1a;
  undefined2 ******local_18;
  undefined2 ******local_16;
  undefined2 **local_14;
  undefined2 ******local_12;
  undefined2 ******local_10;
  undefined2 ******local_e;
  undefined2 ****local_c;
  undefined2 *****local_a;
  undefined2 *****local_8;
  undefined2 *****local_6;
  undefined2 *****local_4;
  
  local_4 = (undefined2 *****)0x3ab8;
  local_6 = (undefined2 *****)0xca26;
  FUN_21f2_0ebc();
  local_5a = 0;
  local_22 = (undefined2 ***)0x0;
  local_4 = (undefined2 *****)param_3;
  local_6 = (undefined2 *****)param_2;
  local_8 = (undefined2 *****)0x22b2;
  local_a = (undefined2 *****)0xca38;
  iVar4 = FUN_3ab8_01db();
  if (iVar4 < 0) {
LAB_3ab8_2150:
    local_4 = (undefined2 *****)*(undefined2 *)0xd70;
    local_6 = (undefined2 *****)0x22b2;
    local_8 = (undefined2 *****)0xccd9;
    FUN_21f2_1262();
    *(undefined2 *)0xd70 = 0;
    return 0;
  }
  local_38 = 0;
  *param_1 = 0;
  do {
    local_60 = (undefined2 ****)0x0;
    do {
      while( true ) {
        local_4 = &local_c;
        local_6 = &local_8;
        local_8 = (undefined2 *****)&local_60;
        local_a = (undefined2 *****)&local_50;
        local_c = (undefined2 ****)&local_14;
        local_e = &local_e;
        local_10 = &local_20;
        local_12 = &local_18;
        local_14 = &local_1c;
        local_16 = &local_12;
        local_18 = (undefined2 ******)&local_64;
        local_1a = (undefined2 *****)&local_5e;
        local_1c = param_2;
        local_1e = (undefined2 ****)0x22b2;
        local_20 = (undefined2 ******)0xca8a;
        iVar4 = FUN_3ab8_038e();
        if ((*(char *)0xbf48 != 'S') && (*(char *)0xbf48 != 's')) break;
        local_4 = &local_64;
        local_6 = (undefined2 *****)&local_5e;
        local_8 = (undefined2 *****)0x442f;
        local_a = (undefined2 *****)0xbf49;
        local_c = (undefined2 ****)0x22b2;
        local_e = (undefined2 ******)0xcab3;
        iVar4 = func_0x000253ce();
        uVar1 = *(undefined2 *)0x9c02;
        *(undefined2 *)0xb498 = *(undefined2 *)0x9c00;
        *(undefined2 *)0xb49a = uVar1;
        if (0 < iVar4) {
          *(undefined2 *)0xb498 = local_5e;
          *(undefined2 *)0xb49a = local_5c;
        }
        uVar1 = *(undefined2 *)0x9c02;
        *(undefined2 *)0xb488 = *(undefined2 *)0x9c00;
        *(undefined2 *)0xb48a = uVar1;
        if (1 < iVar4) {
          *(undefined2 *)0xb488 = local_64;
          *(undefined2 *)0xb48a = local_62;
        }
        local_5a = 1;
      }
      uVar5 = 0;
      uVar6 = iVar4 == 0;
      if (iVar4 < 0) goto LAB_3ab8_2150;
      local_4 = (undefined2 *****)0x22b2;
      local_6 = (undefined2 *****)0xcb13;
      func_0x000297e6();
      local_4 = (undefined2 *****)0x22b2;
      local_6 = (undefined2 *****)0xcb1b;
      func_0x000297e6();
      local_4 = (undefined2 *****)0x22b2;
      local_6 = (undefined2 *****)0xcb20;
      FUN_28b3_1181();
    } while ((bool)uVar5 || (bool)uVar6);
    local_4 = (undefined2 *****)0x22b2;
    local_6 = (undefined2 *****)0xcb2e;
    func_0x000297e6();
    local_4 = (undefined2 *****)0x22b2;
    local_6 = (undefined2 *****)0xcb36;
    func_0x000297e6();
    local_4 = (undefined2 *****)0x22b2;
    local_6 = (undefined2 *****)0xcb3b;
    FUN_28b3_1181();
    if (!(bool)uVar5) {
      local_4 = (undefined2 *****)0x22b2;
      local_6 = (undefined2 *****)0xcb46;
      func_0x000297e6();
      local_4 = (undefined2 *****)0x22b2;
      local_6 = (undefined2 *****)0xcb4e;
      func_0x000297e6();
      local_4 = (undefined2 *****)0x22b2;
      local_6 = (undefined2 *****)0xcb53;
      FUN_28b3_1181();
      if ((bool)uVar5 || (bool)uVar6) {
        local_4 = (undefined2 *****)*(undefined2 *)0xd70;
        local_6 = (undefined2 *****)0x22b2;
        local_8 = (undefined2 *****)0xcb5e;
        FUN_21f2_1262();
        *(undefined2 *)0xd70 = 0;
        return (undefined2 ***)local_22;
      }
    }
    local_4 = (undefined2 *****)local_38;
    local_6 = (undefined2 *****)0x22b2;
    local_8 = (undefined2 *****)0xcb72;
    FUN_3ab8_0361();
    local_4 = (undefined2 *****)0x22b2;
    local_6 = (undefined2 *****)0xcb7b;
    func_0x000297e6();
    local_4 = (undefined2 *****)0x22b2;
    local_6 = (undefined2 *****)0xcb80;
    func_0x00029d78();
    local_4 = (undefined2 *****)0x22b2;
    local_6 = (undefined2 *****)0xcb89;
    func_0x00029c74();
    local_4 = (undefined2 *****)0x22b2;
    local_6 = (undefined2 *****)0xcb8e;
    local_24 = (undefined2 ****)FUN_28b3_0f51();
    ppppppuVar3 = local_16;
    ppppppuVar2 = local_18;
    if (local_5a != 0) {
      local_24 = (undefined2 ****)-(int)local_24;
    }
    local_4 = &local_3c;
    local_6 = &local_2e;
    local_8 = (undefined2 *****)&local_32;
    local_a = (undefined2 *****)&local_2a;
    local_c = (undefined2 ****)local_1e;
    local_e = (undefined2 ******)local_20;
    local_10 = local_16;
    local_12 = local_18;
    local_14 = local_1a;
    local_16 = (undefined2 ******)local_1c;
    local_18 = ppppppuVar3;
    local_1a = ppppppuVar2;
    local_1c = (undefined2 **)0x22b2;
    local_1e = (undefined2 ***)0xcbcc;
    func_0x000297e6();
    local_1c = (undefined2 **)0x22b2;
    local_1e = (undefined2 ***)0xcbd1;
    func_0x00029d78();
    local_1c = (undefined2 **)0x22b2;
    local_1e = (undefined2 ***)0xcbda;
    func_0x00029c74();
    local_1c = (undefined2 **)0x22b2;
    local_1e = (undefined2 ***)0xcbdf;
    local_1c = (undefined2 *)FUN_28b3_0f51();
    local_1e = local_24;
    local_20 = param_7;
    local_22 = param_6;
    local_24 = (undefined2 ****)param_5;
    local_26 = param_4;
    local_28 = local_4;
    local_2a = param_2;
    local_2c = 0x22b2;
    local_2e = (undefined2 ******)0xcbfc;
    FUN_3ab8_12cb();
    local_4 = (undefined2 *****)&local_4e;
    local_6 = (undefined2 *****)&local_40;
    local_8 = &local_44;
    local_a = &local_36;
    local_c = (undefined2 ****)local_3a;
    local_e = (undefined2 ******)local_3c;
    local_10 = (undefined2 ******)local_2c;
    local_12 = (undefined2 ******)local_2e;
    local_14 = local_30;
    local_16 = (undefined2 ******)local_32;
    local_18 = (undefined2 ******)local_28;
    local_1a = (undefined2 *****)local_2a;
    local_1c = local_26;
    local_1e = local_24;
    local_20 = param_17;
    local_22 = param_16;
    local_24 = (undefined2 ****)param_15;
    local_26 = (undefined2 *)param_14;
    local_28 = (undefined2 *****)param_13;
    local_2a = param_12;
    local_2c = param_11;
    local_2e = param_10;
    local_30 = param_9;
    local_34 = param_8;
    local_36 = (undefined2 ******)0x22b2;
    local_38 = -0x33ae;
    local_32 = local_4;
    FUN_3ab8_174c();
    *(undefined2 *)0xbe8 = local_12;
    *(undefined2 *)0xbea = local_10;
    *(undefined2 *)0xbf8 = local_1c;
    *(undefined2 *)0xbfa = local_1a;
    *(int *)0xbf0 = (int)local_18;
    *(int *)0xbf2 = (int)local_16;
    *(undefined2 *)0xc00 = local_20;
    *(undefined2 *)0xc02 = local_1e;
    local_4 = (undefined2 *****)local_4c;
    local_6 = (undefined2 *****)local_4e;
    local_8 = (undefined2 *****)local_3e;
    local_a = (undefined2 *****)local_40;
    local_c = local_42;
    local_e = (undefined2 ******)local_44;
    local_10 = (undefined2 ******)local_34;
    local_12 = (undefined2 ******)local_36;
    local_14 = local_50;
    local_16 = (undefined2 ******)local_50;
    local_18 = (undefined2 ******)local_44;
    local_1a = (undefined2 *****)param_9;
    local_1c = param_8;
    local_1e = (undefined2 ***)local_40;
    local_20 = (undefined2 *****)local_42;
    local_22 = local_4e;
    local_24 = local_3e;
    local_26 = param_1;
    local_28 = (undefined2 *****)&local_22;
    local_2a = (undefined2 *)0x22b2;
    local_2c = 0xccc7;
    FUN_3ab8_1a0e();
    local_38 = local_38 + 1;
  } while( true );
}



/* 3ab8:2166  FUN_3ab8_2166  66 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_2166(void)

{
  FUN_21f2_0ebc();
  func_0x000297e6(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x00029b85(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029983(0x22b2);
  return 0x7a2a;
}



/* 3ab8:21a8  FUN_3ab8_21a8  61 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_21a8(void)

{
  FUN_21f2_0ebc();
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029b85(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029983(0x22b2);
  return 0x7a2a;
}



/* 3ab8:21e5  FUN_3ab8_21e5  96 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_21e5(int param_1,int param_2,undefined2 *param_3)

{
  undefined2 unaff_DS;
  undefined2 local_4;
  
  FUN_21f2_0ebc();
  local_4 = *(undefined2 *)(*(int *)0xa6a * 2 + 0xa70);
  *param_3 = *(undefined2 *)(*(int *)0xa6c * 2 + 0xa88);
  if ((0 < param_1) && (param_1 < 7)) {
    local_4 = *(undefined2 *)(param_1 * 2 + 0xa70);
  }
  if ((0 < param_2) && (param_2 < 10)) {
    *param_3 = *(undefined2 *)(param_2 * 2 + 0xa88);
  }
  return local_4;
}



/* 3ab8:2245  FUN_3ab8_2245  10129 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003e05f) */
/* WARNING: Type propagation algorithm not settling */

void FUN_3ab8_2245(undefined2 param_1,undefined2 *******param_2)

{
  undefined2 *puVar1;
  undefined2 ******ppppppuVar2;
  undefined2 *puVar3;
  undefined2 *****pppppuVar4;
  code *pcVar5;
  int iVar6;
  undefined2 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *******pppppppuVar11;
  undefined2 ******ppppppuVar12;
  undefined2 *******pppppppuVar13;
  undefined2 *******pppppppuVar14;
  undefined2 uVar15;
  undefined2 *******pppppppuVar16;
  undefined2 unaff_SS;
  undefined2 *******unaff_DS;
  undefined1 uVar17;
  bool bVar18;
  undefined1 uVar19;
  long lVar20;
  undefined2 *puVar21;
  undefined2 *****local_111a [2];
  undefined2 ******local_1116;
  undefined2 *******local_1114;
  int local_1112;
  undefined2 *****local_1110;
  undefined2 *****local_110e;
  undefined2 *******local_110a;
  int local_1108;
  int local_1106;
  undefined2 *****local_1104 [2];
  undefined2 *****local_1100;
  undefined2 local_10fe;
  undefined2 ******local_10f8 [64];
  undefined2 *******local_1078;
  undefined2 *******local_1076;
  undefined2 local_1074;
  undefined2 ******local_1072;
  undefined2 ******local_1070 [2];
  undefined2 ******local_106c [2];
  undefined2 ******local_1068 [64];
  undefined2 *******local_fe8;
  undefined2 *******local_fe6;
  undefined2 *****local_fe4;
  undefined2 local_fe2;
  undefined2 ******local_fde [128];
  undefined2 *******local_ede;
  undefined2 *******local_edc;
  int local_eda;
  undefined2 *****local_ed8;
  undefined2 local_ed6;
  undefined2 *****local_ed4;
  undefined2 local_ed2;
  undefined2 *****local_ed0 [2];
  undefined2 *******local_ecc;
  undefined2 *******local_ec8;
  undefined2 *******local_ec6;
  undefined2 *******local_ec4;
  undefined2 *******local_ec2;
  undefined2 local_ec0;
  undefined2 local_ebe;
  undefined2 *******local_ebc;
  undefined2 *******local_eba;
  uint local_eb8;
  undefined2 *******local_eb6;
  undefined2 *******local_eb4;
  undefined2 *******local_eb2;
  undefined2 *******local_eb0;
  undefined2 *******local_eae;
  undefined2 *******local_eac;
  undefined2 ******local_eaa [50];
  undefined2 ******local_e46;
  undefined2 *******local_e44;
  undefined2 *******local_e3e;
  undefined2 *******local_e3c;
  undefined2 *******local_e3a;
  undefined2 *******local_e38;
  undefined2 local_e36;
  undefined2 local_e34;
  undefined2 ******local_e32 [256];
  undefined1 local_c32 [66];
  undefined2 *******local_bf0;
  undefined4 local_bee;
  undefined2 ******local_bea;
  undefined2 local_be8;
  undefined2 *****local_be6;
  undefined2 local_be4;
  undefined2 *******local_be2;
  undefined2 *******local_be0;
  undefined2 *******local_bda;
  undefined2 *******local_bd8;
  undefined2 local_bd6;
  undefined2 local_bd4;
  undefined2 ******local_bd2 [256];
  undefined2 *******local_9d2;
  undefined2 ******local_9d0;
  undefined2 local_9ce;
  undefined2 ******local_9c4 [64];
  undefined2 ******local_944;
  int local_942;
  undefined2 *****local_940 [10];
  undefined2 ******local_92c;
  int local_92a;
  undefined2 *******local_928;
  uint local_926 [256];
  undefined2 ******local_726 [75];
  undefined2 *****local_690 [256];
  undefined2 ******local_490 [5];
  undefined2 *****local_486 [21];
  undefined2 ******local_45c;
  undefined2 local_45a;
  undefined2 local_458;
  undefined2 local_456;
  undefined2 *****local_454 [9];
  undefined1 local_441;
  int local_43c;
  undefined2 ******local_43a;
  uint auStack_438 [258];
  undefined2 *****local_234;
  undefined2 ******local_232;
  undefined2 *****local_230 [5];
  undefined2 local_226 [11];
  undefined2 *****local_210;
  undefined2 local_20e;
  uint auStack_20c [232];
  undefined2 uStack_3c;
  undefined2 *******pppppppuStack_3a;
  undefined2 uStack_38;
  undefined2 *******pppppppuStack_36;
  undefined2 uStack_34;
  undefined2 *******pppppppuStack_32;
  undefined2 *******pppppppuStack_30;
  undefined2 *******pppppppuStack_2e;
  undefined2 *******pppppppuStack_2c;
  undefined2 *******pppppppuStack_2a;
  undefined2 *******pppppppuStack_26;
  undefined2 *******pppppppuStack_24;
  undefined2 *******pppppppuStack_22;
  undefined2 *******pppppppuStack_20;
  undefined2 *******pppppppuStack_1e;
  undefined2 *******pppppppuStack_1c;
  undefined2 *******pppppppuStack_1a;
  undefined2 *******pppppppuStack_18;
  undefined2 *******pppppppuStack_16;
  undefined2 *******pppppppuStack_14;
  undefined2 *******pppppppuStack_12;
  undefined2 *******pppppppuStack_10;
  undefined2 *******pppppppuStack_e;
  undefined2 *******local_c;
  undefined2 *******local_8;
  
  FUN_21f2_0ebc();
  local_bea = (undefined2 ******)*(undefined2 *)0x9bf4;
  local_be8 = *(undefined2 *)0x9bf6;
  local_c32[0] = 0;
  local_8 = (undefined2 *******)local_c32;
  local_c = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0xcdff;
  local_9d0 = local_bea;
  local_9ce = local_be8;
  func_0x00012038();
  *(int *)0xc290 = (int)local_c32;
  local_8 = (undefined2 *******)0x4437;
  local_c = (undefined2 *******)0x11f2;
  pppppppuStack_e = (undefined2 *******)0xce16;
  FUN_21f2_3454();
  local_8 = (undefined2 *******)0x443c;
  local_c = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0xce26;
  FUN_21f2_3454();
  local_8 = (undefined2 *******)0x4441;
  local_c = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0xce36;
  FUN_21f2_3454();
  local_8 = (undefined2 *******)0x444c;
  local_c = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0xce46;
  FUN_21f2_3454();
  local_8 = (undefined2 *******)0x22b2;
  func_0x000297e6();
  local_8 = (undefined2 *******)0x22b2;
  func_0x00029b6d();
  local_8 = (undefined2 *******)0x22b2;
  func_0x00029983();
  local_eba = param_2;
  local_bee = CONCAT22(local_bee._2_2_,(undefined2)local_bee);
  if (param_2 == (undefined2 *******)0x2) {
    *(undefined2 *)0x4586 = 0;
    local_bee = CONCAT22(local_bee._2_2_,(undefined2)local_bee);
  }
LAB_3ab8_22f5:
  local_8 = (undefined2 *******)0x0;
  local_c = (undefined2 *******)0xce7d;
  func_0x0000daa6();
  local_8 = (undefined2 *******)0x885;
  func_0x0001bb8f();
  local_8 = (undefined2 *******)0x1bb4;
  func_0x0001bba4();
  local_8 = (undefined2 *******)0x1bb4;
  pppppppuVar11 = (undefined2 *******)0x885;
  func_0x0000ac64();
LAB_3ab8_230d:
  local_8 = pppppppuVar11;
  FUN_3ab8_001d();
  local_8 = (undefined2 *******)local_ed0;
  local_c = (undefined2 *******)local_690;
  pppppppuStack_e = local_9c4;
  pppppppuStack_10 = local_10f8;
  pppppppuStack_12 = local_1068;
  pppppppuStack_14 = local_e32;
  pppppppuStack_16 = local_bd2;
  pppppppuStack_18 = local_fde;
  pppppppuStack_1a = &local_ede;
  pppppppuStack_1c = &local_1078;
  pppppppuStack_1e = &local_e46;
  pppppppuStack_20 = &local_ebc;
  pppppppuStack_22 = (undefined2 *******)0x0;
  pppppppuStack_24 = local_eba;
  pppppppuStack_26 = pppppppuVar11;
  FUN_3ab8_0543();
  if (*(int *)0x158 != 0) {
    local_8 = pppppppuVar11;
    FUN_10ad_18a4();
    local_8 = (undefined2 *******)0x11f2;
    FUN_3ab8_0000();
    return;
  }
  for (local_e44 = (undefined2 *******)0x1; (int)local_e44 <= (int)local_e46;
      local_e44 = (undefined2 *******)((int)local_e44 + 1)) {
    local_8 = (undefined2 *******)local_ed0;
    local_c = (undefined2 *******)local_690;
    pppppppuStack_e = local_9c4;
    pppppppuStack_10 = local_10f8;
    pppppppuStack_12 = local_1068;
    pppppppuStack_14 = local_e32;
    pppppppuStack_16 = local_bd2;
    pppppppuStack_18 = local_fde;
    pppppppuStack_1a = &local_ede;
    pppppppuStack_1c = &local_1078;
    pppppppuStack_1e = &local_8;
    pppppppuStack_20 = &local_ebc;
    pppppppuStack_22 = local_e44;
    pppppppuStack_24 = local_eba;
    pppppppuStack_26 = pppppppuVar11;
    local_ecc = (undefined2 *******)FUN_3ab8_0543();
    local_8 = (undefined2 *******)0x0;
    iVar6 = (int)((int)local_e44 - 1U) / 2;
    local_c = (undefined2 *******)(iVar6 * 3 + 2);
    pppppppuStack_e = (undefined2 *******)(((int)((int)local_e44 - 1U) % 2) * 0x20 + 0x11);
    pppppppuStack_10 = (undefined2 *******)0xbf48;
    pppppppuStack_14 = (undefined2 *******)0xd4b7;
    pppppppuStack_12 = pppppppuVar11;
    FUN_1000_02b5();
    local_8 = (undefined2 *******)0xdef;
    func_0x000297e6();
    local_8 = (undefined2 *******)0x22b2;
    FUN_28b3_100d();
    local_8 = (undefined2 *******)0x22b2;
    func_0x00029d78();
    local_8 = (undefined2 *******)0x22b2;
    func_0x00029c2c();
    local_8 = (undefined2 *******)0x22b2;
    func_0x00029983();
    local_110a = (undefined2 *******)(iVar6 * 0x30 + 0x3f);
    local_8 = (undefined2 *******)0x22b2;
    local_1108 = iVar6;
    FUN_28b3_0d8b();
    local_8 = (undefined2 *******)0x22b2;
    func_0x0002996b();
    local_8 = (undefined2 *******)0x22b2;
    func_0x00029983();
    local_8 = (undefined2 *******)0x0;
    local_c = (undefined2 *******)0x3;
    pppppppuStack_e = (undefined2 *******)0x7;
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    pppppppuStack_12 = (undefined2 *******)0xd528;
    func_0x000297e6();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    pppppppuStack_12 = (undefined2 *******)0xd52d;
    func_0x00029d78();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    pppppppuStack_12 = (undefined2 *******)0xd532;
    pppppppuStack_14 = (undefined2 *******)FUN_28b3_0f51();
    pppppppuStack_12 = (undefined2 *******)0x27e;
    pppppppuStack_16 = (undefined2 *******)*(undefined2 *)0xa58;
    pppppppuStack_18 = (undefined2 *******)0x22b2;
    pppppppuStack_1a = (undefined2 *******)0xd541;
    pppppppuStack_10 = pppppppuStack_14;
    func_0x0000f350();
    local_8 = (undefined2 *******)0x0;
    local_c = (undefined2 *******)0x3;
    pppppppuStack_e = (undefined2 *******)0x7;
    pppppppuStack_10 = (undefined2 *******)0xdef;
    pppppppuStack_12 = (undefined2 *******)0xd55c;
    func_0x000297e6();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    pppppppuStack_12 = (undefined2 *******)0xd561;
    func_0x00029d78();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    pppppppuStack_12 = (undefined2 *******)0xd566;
    pppppppuStack_10 = (undefined2 *******)FUN_28b3_0f51();
    pppppppuStack_12 = (undefined2 *******)0x17c;
    pppppppuStack_14 = (undefined2 *******)(*(int *)0xa5e + 1);
    pppppppuStack_16 = (undefined2 *******)0x17c;
    pppppppuStack_18 = (undefined2 *******)0x22b2;
    pppppppuStack_1a = (undefined2 *******)0xd577;
    func_0x0000f350();
    local_8 = (undefined2 *******)0x0;
    local_c = (undefined2 *******)0x3;
    pppppppuStack_e = (undefined2 *******)0x7;
    pppppppuStack_10 = (undefined2 *******)0xdef;
    pppppppuStack_12 = (undefined2 *******)0xd592;
    func_0x000297e6();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    pppppppuStack_12 = (undefined2 *******)0xd597;
    func_0x00029d78();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    pppppppuStack_12 = (undefined2 *******)0xd59c;
    pppppppuStack_10 = (undefined2 *******)FUN_28b3_0f51();
    pppppppuStack_12 = (undefined2 *******)0x27f;
    pppppppuStack_14 = (undefined2 *******)(*(int *)0xa5e + 1);
    pppppppuStack_16 = (undefined2 *******)0x27f;
    pppppppuStack_18 = (undefined2 *******)0x22b2;
    pppppppuVar11 = (undefined2 *******)0xdef;
    pppppppuStack_1a = (undefined2 *******)0xd5ad;
    func_0x0000f350();
    if ((int)local_ecc < 1) {
      local_ecc = local_ebc;
    }
    if (0x3b < (int)local_ecc) {
      local_ecc = (undefined2 *******)0x3b;
    }
    for (local_eb8 = 0; (int)local_eb8 <= (int)local_ecc; local_eb8 = local_eb8 + 1) {
      local_1106 = (int)((int)local_e44 - 1U) % 2;
      uVar9 = (int)local_fde[local_eb8 * 2] >> 0xf;
      local_110e = (undefined2 *****)(((uint)local_fde[local_eb8 * 2] ^ uVar9) - uVar9);
      if (10000 < (int)local_110e) {
        local_110e = (undefined2 *****)((int)local_110e % 1000);
      }
      local_1112 = (int)local_110e + -1;
      local_8 = pppppppuVar11;
      FUN_28b3_0d8b();
      local_1114 = (undefined2 *******)((int)local_8 - 1);
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_0d8b();
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_1172();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029c2c();
      local_8 = (undefined2 *******)0x22b2;
      func_0x000297e6();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029b6d();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029d78();
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_117c();
      local_1116 = (undefined2 ******)(local_1106 * 0x10e);
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_0d8b();
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_117c();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029c74();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029983();
      local_110e = local_fde[local_eb8 * 2 + 1];
      if (10000 < (int)local_110e) {
        local_110e = (undefined2 *****)((int)local_110e % 1000);
      }
      local_1116 = (undefined2 ******)((int)local_110e + -1);
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_0d8b();
      local_1114 = (undefined2 *******)((int)local_8 - 1);
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_0d8b();
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_1172();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029c2c();
      local_8 = (undefined2 *******)0x22b2;
      func_0x000297e6();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029b6d();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029d78();
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_117c();
      local_1112 = local_1106 * 0x10e;
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_0d8b();
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_117c();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029c74();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029983();
      local_1116 = (undefined2 ******)(local_1108 * 0x30 + 0x36);
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_0d8b();
      local_8 = (undefined2 *******)0x22b2;
      func_0x0002996b();
      local_8 = (undefined2 *******)0x22b2;
      func_0x000297e6();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029b6d();
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_1163();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029983();
      local_8 = (undefined2 *******)0x22b2;
      func_0x000297e6();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029b6d();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029b55();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029983();
      local_8 = (undefined2 *******)&local_1110;
      local_c = (undefined2 *******)local_1068[local_eb8];
      pppppppuStack_e = (undefined2 *******)0x22b2;
      pppppppuStack_10 = (undefined2 *******)0xd19d;
      local_110a = (undefined2 *******)FUN_3ab8_21e5();
      local_8 = (undefined2 *******)0x22b2;
      func_0x000297e6();
      uVar17 = (local_eb8 & 0x3fff) == 0;
      local_8 = (undefined2 *******)0x22b2;
      func_0x000297e6();
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar17) {
        local_8 = (undefined2 *******)0x0;
        local_c = (undefined2 *******)0x3;
        pppppppuStack_e = local_110a;
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd1e0;
        func_0x000297e6();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd1e5;
        func_0x00029d78();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd1ea;
        pppppppuStack_10 = (undefined2 *******)FUN_28b3_0f51();
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        pppppppuStack_14 = (undefined2 *******)0xd1f4;
        func_0x000297e6();
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        pppppppuStack_14 = (undefined2 *******)0xd1f9;
        func_0x00029d78();
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        pppppppuStack_14 = (undefined2 *******)0xd1fe;
        pppppppuStack_12 = (undefined2 *******)FUN_28b3_0f51();
        pppppppuStack_14 = (undefined2 *******)0x22b2;
        pppppppuStack_16 = (undefined2 *******)0xd208;
        func_0x000297e6();
        pppppppuStack_14 = (undefined2 *******)0x22b2;
        pppppppuStack_16 = (undefined2 *******)0xd20d;
        func_0x00029d78();
        pppppppuStack_14 = (undefined2 *******)0x22b2;
        pppppppuStack_16 = (undefined2 *******)0xd212;
        pppppppuStack_14 = (undefined2 *******)FUN_28b3_0f51();
        pppppppuStack_16 = (undefined2 *******)0x22b2;
        pppppppuStack_18 = (undefined2 *******)0xd21c;
        func_0x000297e6();
        pppppppuStack_16 = (undefined2 *******)0x22b2;
        pppppppuStack_18 = (undefined2 *******)0xd221;
        func_0x00029d78();
        pppppppuStack_16 = (undefined2 *******)0x22b2;
        pppppppuStack_18 = (undefined2 *******)0xd226;
        pppppppuStack_16 = (undefined2 *******)FUN_28b3_0f51();
        pppppppuStack_18 = (undefined2 *******)0x22b2;
        pppppppuVar11 = (undefined2 *******)0xdef;
        pppppppuStack_1a = (undefined2 *******)0xd22c;
        func_0x0000f350();
      }
      else {
        local_8 = (undefined2 *******)&local_ed8;
        local_c = &local_45c;
        pppppppuStack_e = (undefined2 *******)0xffff;
        pppppppuStack_10 = (undefined2 *******)local_10f8[local_eb8];
        pppppppuStack_12 = (undefined2 *******)local_1068[local_eb8];
        pppppppuStack_14 = local_ec2;
        pppppppuStack_16 = local_ec4;
        pppppppuStack_18 = local_eb0;
        pppppppuStack_1a = local_eb2;
        pppppppuStack_1c = local_eb4;
        pppppppuStack_1e = local_eb6;
        pppppppuStack_20 = local_e38;
        pppppppuStack_22 = local_e3a;
        pppppppuStack_24 = (undefined2 *******)local_690[local_eb8 * 2 + 1];
        pppppppuStack_26 = (undefined2 *******)local_690[local_eb8 * 2];
        pppppppuStack_2a = (undefined2 *******)0x0;
        pppppppuStack_2c = (undefined2 *******)0xffff;
        pppppppuStack_2e = (undefined2 *******)0x22b2;
        pppppppuStack_30 = (undefined2 *******)0xcf56;
        FUN_3ab8_0f38();
        uVar17 = (undefined1 *)0xffd9 < &pppppppuStack_2c;
        uVar19 = &stack0x0000 == (undefined1 *)0x6;
        local_8 = local_e38;
        local_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0xcf65;
        puVar7 = (undefined2 *)FUN_3ab8_2166();
        local_45c = (undefined2 ******)*puVar7;
        local_45a = puVar7[1];
        local_8 = local_eb4;
        local_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0xcf82;
        puVar7 = (undefined2 *)FUN_3ab8_21a8();
        local_458 = *puVar7;
        local_456 = puVar7[1];
        local_8 = (undefined2 *******)0x22b2;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        func_0x000297e6();
        local_8 = (undefined2 *******)local_454;
        local_c = (undefined2 *******)0xcfaf;
        func_0x00029b9d();
        local_8 = (undefined2 *******)0x22b2;
        func_0x0002996b();
        local_8 = (undefined2 *******)0x22b2;
        pppppppuVar11 = (undefined2 *******)0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar17 && !(bool)uVar19) {
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          uVar17 = (int)(local_eb8 << 1) < 0;
          uVar19 = (local_eb8 & 0x3fff) == 0;
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          ppppppuVar12 = (undefined2 ******)0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar17 && !(bool)uVar19) {
            local_8 = (undefined2 *******)0x0;
            local_c = (undefined2 *******)0xd25b;
            func_0x0000daa6();
            if (local_1108 == 0) {
              local_1116 = (undefined2 ******)0x11;
            }
            else {
              local_1116 = (undefined2 ******)(local_1108 * 0x30 + 0x10);
            }
            if (local_1106 == 0) {
              local_1114 = (undefined2 *******)(*(int *)0xa58 + 1);
            }
            else {
              local_1114 = (undefined2 *******)0x17b;
            }
            local_8 = (undefined2 *******)(local_1108 * 0x30 + 0x3e);
            pppppppuStack_10 = (undefined2 *******)0x885;
            ppppppuVar12 = (undefined2 ******)0xdef;
            pppppppuStack_12 = (undefined2 *******)0xd2b0;
            pppppppuStack_e = local_1114;
            local_c = (undefined2 *******)local_1116;
            func_0x0000f1d8();
          }
          local_8 = (undefined2 *******)ppppppuVar12;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029d78();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029c74();
          local_8 = (undefined2 *******)0x22b2;
          ppppppuVar12 = (undefined2 ******)0x22b2;
          iVar6 = FUN_28b3_0f51();
          local_111a[0] = (undefined2 *****)(iVar6 % 10);
          if ((int)local_111a[0] < 4) {
            pppppppuVar11 = &pppppppuStack_26;
            ppppppuVar12 = &local_45c;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar21 = pppppppuVar11;
              pppppppuVar11 = pppppppuVar11 + 1;
              ppppppuVar2 = ppppppuVar12;
              ppppppuVar12 = ppppppuVar12 + 1;
              *puVar21 = *ppppppuVar2;
            }
            ppppppuVar12 = (undefined2 ******)0x11f2;
            pppppppuStack_2a = (undefined2 *******)0xd2fb;
            func_0x00013e46();
          }
          local_111a[0] = (undefined2 *****)((int)local_111a[0] % 4);
          if ((local_111a[0] == (undefined2 *****)0x1) || (local_111a[0] == (undefined2 *****)0x3))
          {
            local_8 = (undefined2 *******)0x0;
            local_c = (undefined2 *******)0x3;
            pppppppuStack_e = local_110a;
            pppppppuStack_12 = (undefined2 *******)0xd32e;
            pppppppuStack_10 = (undefined2 *******)ppppppuVar12;
            func_0x000297e6();
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xd333;
            func_0x00029d78();
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xd338;
            pppppppuStack_10 = (undefined2 *******)FUN_28b3_0f51();
            pppppppuStack_12 = (undefined2 *******)0x22b2;
            pppppppuStack_14 = (undefined2 *******)0xd342;
            func_0x000297e6();
            pppppppuStack_12 = (undefined2 *******)0x22b2;
            pppppppuStack_14 = (undefined2 *******)0xd347;
            func_0x00029d78();
            pppppppuStack_12 = (undefined2 *******)0x22b2;
            pppppppuStack_14 = (undefined2 *******)0xd34c;
            pppppppuStack_12 = (undefined2 *******)FUN_28b3_0f51();
            pppppppuStack_14 = (undefined2 *******)0x22b2;
            pppppppuStack_16 = (undefined2 *******)0xd356;
            func_0x000297e6();
            pppppppuStack_14 = (undefined2 *******)0x22b2;
            pppppppuStack_16 = (undefined2 *******)0xd35b;
            func_0x00029d78();
            pppppppuStack_14 = (undefined2 *******)0x22b2;
            pppppppuStack_16 = (undefined2 *******)0xd360;
            pppppppuStack_14 = (undefined2 *******)FUN_28b3_0f51();
            pppppppuStack_16 = (undefined2 *******)0x22b2;
            pppppppuStack_18 = (undefined2 *******)0xd36a;
            func_0x000297e6();
            pppppppuStack_16 = (undefined2 *******)0x22b2;
            pppppppuStack_18 = (undefined2 *******)0xd36f;
            func_0x00029d78();
            pppppppuStack_16 = (undefined2 *******)0x22b2;
            pppppppuStack_18 = (undefined2 *******)0xd374;
            pppppppuStack_16 = (undefined2 *******)FUN_28b3_0f51();
            pppppppuStack_18 = (undefined2 *******)0x22b2;
            ppppppuVar12 = (undefined2 ******)0xdef;
            pppppppuStack_1a = (undefined2 *******)0xd37a;
            func_0x0000f350();
          }
          if ((local_111a[0] == (undefined2 *****)0x2) || (local_111a[0] == (undefined2 *****)0x3))
          {
            local_8 = (undefined2 *******)0x0;
            local_c = (undefined2 *******)0x3;
            pppppppuStack_e = local_110a;
            pppppppuStack_12 = (undefined2 *******)0xd3a3;
            pppppppuStack_10 = (undefined2 *******)ppppppuVar12;
            func_0x000297e6();
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xd3a8;
            func_0x00029d78();
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xd3ad;
            pppppppuStack_10 = (undefined2 *******)FUN_28b3_0f51();
            pppppppuStack_12 = (undefined2 *******)0x22b2;
            pppppppuStack_14 = (undefined2 *******)0xd3b7;
            func_0x000297e6();
            pppppppuStack_12 = (undefined2 *******)0x22b2;
            pppppppuStack_14 = (undefined2 *******)0xd3bc;
            func_0x00029d78();
            pppppppuStack_12 = (undefined2 *******)0x22b2;
            pppppppuStack_14 = (undefined2 *******)0xd3c1;
            pppppppuStack_12 = (undefined2 *******)FUN_28b3_0f51();
            pppppppuStack_14 = (undefined2 *******)0x22b2;
            pppppppuStack_16 = (undefined2 *******)0xd3cb;
            func_0x000297e6();
            pppppppuStack_14 = (undefined2 *******)0x22b2;
            pppppppuStack_16 = (undefined2 *******)0xd3d0;
            func_0x00029d78();
            pppppppuStack_14 = (undefined2 *******)0x22b2;
            pppppppuStack_16 = (undefined2 *******)0xd3d5;
            pppppppuStack_14 = (undefined2 *******)FUN_28b3_0f51();
            pppppppuStack_16 = (undefined2 *******)0x22b2;
            pppppppuStack_18 = (undefined2 *******)0xd3df;
            func_0x000297e6();
            pppppppuStack_16 = (undefined2 *******)0x22b2;
            pppppppuStack_18 = (undefined2 *******)0xd3e4;
            func_0x00029d78();
            pppppppuStack_16 = (undefined2 *******)0x22b2;
            pppppppuStack_18 = (undefined2 *******)0xd3e9;
            pppppppuStack_16 = (undefined2 *******)FUN_28b3_0f51();
            pppppppuStack_18 = (undefined2 *******)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xd3ef;
            func_0x0000f350();
          }
          local_8 = (undefined2 *******)0x0;
          local_c = (undefined2 *******)0xd3fa;
          func_0x0000daa6();
          local_8 = (undefined2 *******)(*(int *)0x1b40 + -1);
          local_c = (undefined2 *******)(*(int *)0xa5e + 1);
          pppppppuStack_e = (undefined2 *******)(*(int *)0xa58 + 1);
          pppppppuStack_10 = (undefined2 *******)0x885;
          pppppppuVar11 = (undefined2 *******)0xdef;
          pppppppuStack_12 = (undefined2 *******)0xd414;
          func_0x0000f1d8();
        }
      }
    }
  }
  ppppppuVar12 = (undefined2 ******)0x885;
  local_8 = pppppppuVar11;
  func_0x0000a799();
  while( true ) {
    *(undefined2 *)0xbc0 = 1;
    *(undefined2 *)0xc08 = 1;
    local_8 = (undefined2 *******)ppppppuVar12;
    func_0x000297e6();
    local_8 = (undefined2 *******)0x22b2;
    func_0x00029d78();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    pppppppuStack_12 = (undefined2 *******)0xd5fb;
    func_0x000299d1();
    pppppppuStack_10 = (undefined2 *******)local_230;
    pppppppuStack_12 = (undefined2 *******)0x22b2;
    pppppppuStack_14 = (undefined2 *******)0xd609;
    func_0x000297e6();
    pppppppuStack_12 = (undefined2 *******)0x22b2;
    pppppppuStack_14 = (undefined2 *******)0xd60e;
    func_0x00029d78();
    pppppppuStack_1a = (undefined2 *******)0x22b2;
    pppppppuStack_1c = (undefined2 *******)0xd618;
    func_0x000299d1();
    pppppppuStack_1a = local_490;
    pppppppuStack_1c = (undefined2 *******)0x4453;
    pppppppuStack_1e = local_726;
    pppppppuStack_20 = (undefined2 *******)0x22b2;
    pppppppuStack_22 = (undefined2 *******)0xd62b;
    FUN_21f2_3454();
    if (local_eba == (undefined2 *******)0x1) {
      uVar17 = *(undefined1 *)0x11ec;
    }
    else {
      uVar17 = *(undefined1 *)0x11ed;
    }
    local_111a[0] = (undefined2 *****)CONCAT11(local_111a[0]._1_1_,uVar17);
    local_8 = local_726;
    local_c = local_eba;
    pppppppuStack_e = (undefined2 *******)0x22b2;
    pppppppuStack_10 = (undefined2 *******)0xd655;
    FUN_3ab8_0ef6();
    local_8 = local_726;
    local_c = (undefined2 *******)0x22b2;
    pppppppuVar11 = (undefined2 *******)0x1bb4;
    pppppppuStack_e = (undefined2 *******)0xd666;
    FUN_1def_07a4();
    if ((*(char *)0x132 != '\0') && (*(int *)0xce6 == 0)) {
      local_8 = (undefined2 *******)0x4472;
      local_c = (undefined2 *******)0x1bb4;
      pppppppuVar11 = (undefined2 *******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xd684;
      FUN_21f2_2d26();
    }
    pppppppuVar13 = pppppppuVar11;
    if (local_eba == (undefined2 *******)0x2) {
      local_8 = (undefined2 *******)local_486;
      pppppppuVar13 = (undefined2 *******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xd69c;
      local_c = pppppppuVar11;
      FUN_21f2_2d26();
    }
    *(undefined2 *)0xc26 = 1;
    local_8 = &local_bf0;
    local_c = local_106c;
    pppppppuStack_e = local_726;
    pppppppuStack_10 = (undefined2 *******)0x270f;
    pppppppuVar11 = (undefined2 *******)0x1bb4;
    pppppppuStack_14 = (undefined2 *******)0xd6c1;
    pppppppuStack_12 = pppppppuVar13;
    local_eda = FUN_1def_0904();
    *(undefined2 *)0xc26 = 0;
    if (((*(int *)0x158 != 0) || (local_eda == 0x14)) || (local_eda == -1)) goto LAB_3ab8_2b5f;
    if (local_eda == 99) goto LAB_3ab8_230d;
    local_8 = pppppppuVar11;
    if (local_eda == 1) {
      local_8 = (undefined2 *******)0x1bb4;
      pppppppuVar11 = (undefined2 *******)0x885;
      func_0x0000c3ca();
      local_bf0 = (undefined2 *******)0x0;
      local_8 = (undefined2 *******)0x4570;
      pcVar5 = (code *)swi(0x3f);
      iVar6 = (*pcVar5)();
      if (iVar6 == 99) goto LAB_3ab8_230d;
      local_8 = pppppppuVar11;
      if (*(int *)0x158 != 0) {
        return;
      }
    }
    pppppppuVar11 = local_8;
    if (local_eda == 2) {
      pppppppuVar11 = (undefined2 *******)0x885;
      func_0x0000c3ca();
      local_bf0 = (undefined2 *******)0x0;
      local_8 = (undefined2 *******)0x4574;
      local_c = (undefined2 *******)local_486;
      pppppppuStack_e = local_eba;
      pcVar5 = (code *)swi(0x3f);
      iVar6 = (*pcVar5)();
      if (iVar6 == 99) goto LAB_3ab8_230d;
      if (*(int *)0x158 != 0) {
        return;
      }
    }
    local_8 = pppppppuVar11;
    if (local_eda == 3) goto code_r0x0003d766;
    if (local_eda == 4) break;
    func_0x000297e6();
    local_8 = (undefined2 *******)0x22b2;
    FUN_28b3_100d();
    local_8 = (undefined2 *******)0x22b2;
    func_0x00029b6d();
    local_8 = (undefined2 *******)0x22b2;
    FUN_28b3_0d8b();
    local_8 = (undefined2 *******)0x22b2;
    FUN_28b3_117c();
    local_8 = (undefined2 *******)0x22b2;
    func_0x00029d78();
    local_8 = (undefined2 *******)0x22b2;
    local_232 = (undefined2 ******)FUN_28b3_0f51();
    local_8 = (undefined2 *******)0x22b2;
    func_0x000297e6();
    local_8 = (undefined2 *******)0x22b2;
    FUN_28b3_100d();
    local_8 = (undefined2 *******)0x22b2;
    func_0x00029b6d();
    local_8 = (undefined2 *******)0x22b2;
    FUN_28b3_0d8b();
    local_8 = (undefined2 *******)0x22b2;
    FUN_28b3_117c();
    local_8 = (undefined2 *******)0x22b2;
    func_0x00029d78();
    local_8 = (undefined2 *******)0x22b2;
    ppppppuVar12 = (undefined2 ******)0x22b2;
    local_43a = (undefined2 ******)FUN_28b3_0f51();
    if (((local_bf0 != (undefined2 *******)0x0) && (*(int *)0xa58 < (int)local_232)) &&
       ((*(int *)0xa5e < (int)local_43a && ((int)local_43a < 0x18e)))) {
      iVar6 = ((int)(local_43a + -8) / 0x30) * 2;
      local_928 = (undefined2 *******)(iVar6 + 1);
      if (0x17c < (int)local_232) {
        local_928 = (undefined2 *******)(iVar6 + 2);
      }
      if ((0 < (int)local_928) && ((int)local_928 <= (int)local_e46)) {
        local_8 = (undefined2 *******)0x22b2;
        func_0x0000c3ca();
        local_eae = (undefined2 *******)*(uint *)0x4574;
        local_eac = (undefined2 *******)*(uint *)0x4576;
        pppppppuVar11 = (undefined2 *******)*(uint *)0x4570;
        pppppppuVar13 = (undefined2 *******)*(uint *)0x4572;
        *(undefined1 *)0xbeec = 0;
        local_8 = (undefined2 *******)local_ed0;
        local_c = (undefined2 *******)local_690;
        pppppppuStack_e = local_9c4;
        pppppppuStack_10 = local_10f8;
        pppppppuStack_12 = local_1068;
        pppppppuStack_14 = local_e32;
        pppppppuStack_16 = local_bd2;
        pppppppuStack_18 = local_fde;
        pppppppuStack_1a = &local_ede;
        pppppppuStack_1c = &local_1078;
        pppppppuStack_1e = &local_8;
        pppppppuStack_20 = &local_ebc;
        pppppppuStack_22 = local_928;
        pppppppuStack_24 = local_eba;
        pppppppuStack_26 = (undefined2 *******)0x885;
        local_ecc = (undefined2 *******)FUN_3ab8_0543();
        if ((int)local_ecc < 1) {
          local_ecc = local_ebc;
        }
        if (0x3b < (int)local_ecc) {
          local_ecc = (undefined2 *******)0x3b;
        }
        local_92a = 0;
        local_e44 = (undefined2 *******)0x0;
        goto LAB_3ab8_2df8;
      }
    }
  }
  if (param_2 == (undefined2 *******)0x1) {
    local_8 = (undefined2 *******)(uint)*(byte *)0x11ec;
    pppppppuStack_e = (undefined2 *******)0xd7c1;
    local_c = pppppppuVar11;
    FUN_3ab8_00f0();
  }
  if (param_2 == (undefined2 *******)0x2) {
    local_8 = (undefined2 *******)(uint)*(byte *)0x11ed;
    pppppppuStack_e = (undefined2 *******)0xd7d6;
    local_c = pppppppuVar11;
    FUN_3ab8_00f0();
  }
  local_8 = (undefined2 *******)0xbf48;
  pppppppuStack_e = (undefined2 *******)0xd7e6;
  local_c = pppppppuVar11;
  FUN_21f2_3454();
  local_8 = (undefined2 *******)0x4474;
  local_c = (undefined2 *******)0x1078;
  pppppppuStack_e = (undefined2 *******)0x4475;
  pcVar5 = (code *)swi(0x3f);
  (*pcVar5)();
  FUN_1000_0620();
  if (3 < *(byte *)0xb782) {
    return;
  }
  *(undefined2 *)0x158 = 0;
  goto LAB_3ab8_22f5;
code_r0x0003d766:
  pppppppuVar11 = (undefined2 *******)0x885;
  func_0x0000c3ca();
  local_8 = (undefined2 *******)local_111a;
  pcVar5 = (code *)swi(0x3f);
  (*pcVar5)();
  if (*(int *)0x158 != 0) {
LAB_3ab8_2b5f:
    local_8 = pppppppuVar11;
    FUN_10ad_18a4();
    return;
  }
  if (local_eba == (undefined2 *******)0x1) {
    *(undefined1 *)0x11ec = local_111a[0]._0_1_;
  }
  if (local_eba == (undefined2 *******)0x2) {
    *(undefined1 *)0x11ed = local_111a[0]._0_1_;
  }
  goto LAB_3ab8_230d;
LAB_3ab8_2df8:
  if ((int)local_ecc < (int)local_e44) {
LAB_3ab8_2e2c:
    local_8 = (undefined2 *******)0x885;
    ppppppuVar12 = (undefined2 ******)0x11f2;
    FUN_10ad_18a4();
    local_92c = (undefined2 ******)0x0;
    local_944 = (undefined2 ******)0x0;
LAB_3ab8_2e3b:
    local_8 = (undefined2 *******)ppppppuVar12;
    func_0x000297e6();
    local_8 = (undefined2 *******)0x22b2;
    func_0x0002996b();
    local_8 = (undefined2 *******)0x22b2;
    FUN_28b3_0ee9();
    local_8 = (undefined2 *******)0x22b2;
    func_0x000297e6();
    local_8 = (undefined2 *******)0x22b2;
    func_0x0002996b();
    local_8 = (undefined2 *******)0x22b2;
    FUN_28b3_0ee9();
    local_210 = (undefined2 *****)*(undefined2 *)0x4568;
    local_20e = *(undefined2 *)0x456a;
    pppppppuVar14 = (undefined2 *******)0x22b2;
    if (*(char *)0xbeec != '\0') {
      *(undefined2 *)0x4584 = 1;
      *(undefined1 *)0x4580 = 1;
      local_8 = (undefined2 *******)0x22b2;
      func_0x000297e6();
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_100d();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029b6d();
      local_8 = (undefined2 *******)0x22b2;
      func_0x0002996b();
      local_8 = (undefined2 *******)0x22b2;
      FUN_28b3_0ee9();
      pppppppuVar14 = (undefined2 *******)0x22b2;
      if (*(int *)0x458a != 0) {
        local_8 = (undefined2 *******)0x22b2;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        func_0x00029af6();
        local_8 = (undefined2 *******)0x22b2;
        pppppppuVar14 = (undefined2 *******)0x22b2;
        func_0x00029983();
        if ((local_eba == (undefined2 *******)0x1) && (*(char *)0xbeec == '\x02')) {
          *(undefined2 *)0x4586 = 1;
        }
      }
    }
LAB_3ab8_2eee:
    do {
      local_8 = (undefined2 *******)0x6e8;
      pppppppuStack_e = (undefined2 *******)0xda7c;
      local_c = pppppppuVar14;
      FUN_21f2_3454();
      local_8 = (undefined2 *******)0x4478;
      local_c = (undefined2 *******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xda8c;
      FUN_21f2_2d26();
      local_8 = (undefined2 *******)0x43ae;
      local_c = (undefined2 *******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xda9c;
      FUN_21f2_2d26();
      local_8 = (undefined2 *******)0x4486;
      local_c = (undefined2 *******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xdaac;
      FUN_21f2_2d26();
      local_8 = (undefined2 *******)0x448b;
      local_c = (undefined2 *******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xdabc;
      FUN_21f2_2d26();
      local_8 = (undefined2 *******)0x6e8;
      local_c = (undefined2 *******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xdacc;
      FUN_21f2_2d26();
      local_8 = (undefined2 *******)0x448d;
      local_c = (undefined2 *******)0x22b2;
      ppppppuVar12 = (undefined2 ******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xdadc;
      FUN_21f2_2d26();
      uVar17 = 0;
      if (*(int *)0xc22 == 0) {
        local_8 = (undefined2 *******)0x22b2;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar17) {
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029d78();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xdb19;
          func_0x000299d1();
          pppppppuStack_10 = (undefined2 *******)0x4497;
          pppppppuStack_12 = local_eaa;
          pppppppuStack_14 = (undefined2 *******)0x22b2;
          pppppppuStack_16 = (undefined2 *******)0xdb27;
          FUN_21f2_3454();
        }
        else {
          local_8 = (undefined2 *******)local_940;
          local_c = (undefined2 *******)0x22b2;
          pppppppuStack_e = (undefined2 *******)0xdb3b;
          FUN_21f2_3454();
        }
        local_8 = (undefined2 *******)0xffff;
        local_c = (undefined2 *******)0x2;
        pppppppuStack_e = (undefined2 *******)0x1d;
        pppppppuStack_10 = local_eaa;
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        pppppppuStack_14 = (undefined2 *******)0xdb57;
        FUN_1000_02b5();
        if (*(char *)0x4580 == '\0') {
          local_8 = (undefined2 *******)local_940;
          local_c = (undefined2 *******)0xdef;
          pppppppuStack_e = (undefined2 *******)0xdba0;
          FUN_21f2_3454();
        }
        else {
          local_8 = (undefined2 *******)0xdef;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029ae7();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029d78();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xdb7e;
          func_0x000299d1();
          pppppppuStack_10 = (undefined2 *******)0x449d;
          pppppppuStack_12 = local_eaa;
          pppppppuStack_14 = (undefined2 *******)0x22b2;
          pppppppuStack_16 = (undefined2 *******)0xdb8c;
          FUN_21f2_3454();
        }
        local_8 = (undefined2 *******)0xffff;
        local_c = (undefined2 *******)0x2;
        pppppppuStack_e = (undefined2 *******)0x2a;
        pppppppuStack_10 = local_eaa;
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        ppppppuVar12 = (undefined2 ******)0xdef;
        pppppppuStack_14 = (undefined2 *******)0xdbbc;
        FUN_1000_02b5();
        *(undefined2 *)0xc22 = 1;
      }
      bVar18 = local_92a != 0;
      if (bVar18) {
        local_8 = (undefined2 *******)0x44a3;
        pppppppuStack_e = (undefined2 *******)0xdbdd;
        local_c = (undefined2 *******)ppppppuVar12;
        FUN_21f2_2d26();
        local_8 = (undefined2 *******)0x44a6;
        local_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0xdbed;
        FUN_21f2_3454();
        local_8 = local_eaa;
        local_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0xdbfe;
        FUN_21f2_2d26();
        local_8 = (undefined2 *******)0x44ac;
        local_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0xdc0e;
        FUN_21f2_2d26();
        local_8 = local_eaa;
        local_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0xdc1f;
        FUN_21f2_2d26();
        local_8 = (undefined2 *******)0x22b2;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        func_0x00029d78();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xdc39;
        func_0x000299d1();
        pppppppuStack_10 = (undefined2 *******)0x44af;
        pppppppuStack_12 = local_eaa;
        pppppppuStack_14 = (undefined2 *******)0x22b2;
        pppppppuStack_16 = (undefined2 *******)0xdc47;
        FUN_21f2_3454();
        local_8 = (undefined2 *******)0xffff;
        local_c = (undefined2 *******)0x2;
        pppppppuStack_e = (undefined2 *******)0x37;
        pppppppuStack_10 = local_eaa;
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        pppppppuStack_14 = (undefined2 *******)0xdc64;
        FUN_1000_02b5();
        local_8 = (undefined2 *******)0xdef;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        func_0x00029d78();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xdc7f;
        func_0x000299d1();
        pppppppuStack_10 = (undefined2 *******)0x44b5;
        pppppppuStack_12 = local_eaa;
        pppppppuStack_14 = (undefined2 *******)0x22b2;
        pppppppuStack_16 = (undefined2 *******)0xdc8d;
        FUN_21f2_3454();
        local_8 = (undefined2 *******)0xffff;
        local_c = (undefined2 *******)0x2;
        pppppppuStack_e = (undefined2 *******)0x40;
        pppppppuStack_10 = local_eaa;
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        ppppppuVar12 = (undefined2 ******)0xdef;
        pppppppuStack_14 = (undefined2 *******)0xdcaa;
        FUN_1000_02b5();
      }
      uVar17 = bVar18 && (undefined1 *)0xfff5 < &pppppppuStack_10;
      local_8 = (undefined2 *******)ppppppuVar12;
      func_0x00029834();
      local_8 = (undefined2 *******)0x22b2;
      func_0x000297e6();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029d78();
      local_8 = (undefined2 *******)0x22b2;
      ppppppuVar12 = (undefined2 ******)0x22b2;
      FUN_28b3_1181();
      pppppppuVar16 = local_1076;
      pppppppuVar14 = local_1078;
      if (!(bool)uVar17) {
        local_8 = (undefined2 *******)0x3;
        local_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0xdce6;
        FUN_1000_0599();
        local_8 = local_490;
        local_c = (undefined2 *******)0xdcf2;
        func_0x00012276();
        local_8 = (undefined2 *******)0x11f2;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        func_0x00029d78();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xdd0a;
        func_0x000299d1();
        pppppppuStack_10 = (undefined2 *******)0x44bb;
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        ppppppuVar12 = (undefined2 ******)0x11f2;
        pppppppuStack_14 = (undefined2 *******)0xdd13;
        func_0x00012276();
        uVar17 = (undefined1 *)0xfff5 < &pppppppuStack_10;
        *(undefined2 *)0xc22 = 2;
        pppppppuVar11 = pppppppuVar14;
        pppppppuVar13 = pppppppuVar16;
      }
      local_8 = (undefined2 *******)ppppppuVar12;
      func_0x00029834();
      local_8 = (undefined2 *******)0x22b2;
      func_0x000297e6();
      local_8 = (undefined2 *******)0x22b2;
      func_0x00029d78();
      local_8 = (undefined2 *******)0x22b2;
      uVar15 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar17) {
        local_eae = local_ede;
        local_eac = local_edc;
        local_8 = (undefined2 *******)0x3;
        local_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0xdd57;
        FUN_1000_0599();
        local_8 = (undefined2 *******)local_230;
        local_c = (undefined2 *******)0xdd63;
        func_0x00012276();
        local_8 = (undefined2 *******)0x11f2;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        func_0x00029d78();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xdd7c;
        func_0x000299d1();
        pppppppuStack_10 = (undefined2 *******)0x44c2;
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        uVar15 = 0x11f2;
        pppppppuStack_14 = (undefined2 *******)0xdd85;
        func_0x00012276();
        *(undefined2 *)0xc22 = 2;
      }
      if (*(char *)0xbeec != '\0') {
        local_8 = (undefined2 *******)0x3;
        pppppppuStack_e = (undefined2 *******)0xdda2;
        local_c = (undefined2 *******)uVar15;
        FUN_1000_0599();
        local_8 = (undefined2 *******)0xdef;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        func_0x00029bb5();
        local_8 = (undefined2 *******)0x22b2;
        func_0x00029d78();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xddc5;
        func_0x000299d1();
        pppppppuStack_10 = (undefined2 *******)0x44c9;
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        uVar15 = 0x11f2;
        pppppppuStack_14 = (undefined2 *******)0xddce;
        func_0x00012276();
        *(undefined2 *)0xc22 = 2;
      }
      local_8 = local_726;
      pppppppuStack_e = (undefined2 *******)0xdde5;
      local_c = (undefined2 *******)uVar15;
      FUN_1def_07a4();
      *(undefined2 *)0xc2c = 1;
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xc1a = 1;
      if (local_92c == (undefined2 ******)0x0) {
        local_9d2 = (undefined2 *******)0x2710;
      }
      else {
        local_9d2 = (undefined2 *******)0x270f;
      }
      local_8 = &local_bf0;
      local_c = local_1070;
      pppppppuStack_e = local_726;
      pppppppuStack_10 = local_9d2;
      pppppppuStack_12 = (undefined2 *******)0x1bb4;
      ppppppuVar12 = (undefined2 ******)0x1bb4;
      pppppppuStack_14 = (undefined2 *******)0xde25;
      local_eda = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xc1a = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (*(int *)0xc18 != 0) {
        local_92c = (undefined2 ******)0x0;
        local_944 = (undefined2 ******)0x0;
        local_8 = (undefined2 *******)0x1bb4;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        func_0x00029d78();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xde66;
        func_0x000299d1();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xde6f;
        func_0x000297e6();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xde74;
        func_0x00029d78();
        pppppppuStack_18 = (undefined2 *******)0x22b2;
        pppppppuStack_1a = (undefined2 *******)0xde7e;
        func_0x000299d1();
        pppppppuStack_18 = (undefined2 *******)0x22b2;
        ppppppuVar12 = (undefined2 ******)0x3bf;
        pppppppuStack_1a = (undefined2 *******)0xde83;
        func_0x0000507a();
        goto LAB_3ab8_2e3b;
      }
      if (local_eda == -1) {
        local_8 = (undefined2 *******)0x0;
        local_c = (undefined2 *******)0xde96;
        func_0x0000daa6();
        local_8 = (undefined2 *******)(undefined2 ******)0x885;
        for (; 0 < (int)local_92c; local_92c = (undefined2 ******)((int)local_92c + -1)) {
          local_1074 = *(undefined2 *)0x148;
          local_1072 = (undefined2 ******)*(undefined2 *)0x14a;
          pppppppuStack_e = (undefined2 *******)0xdeaf;
          local_c = local_8;
          local_8 = (undefined2 *******)local_1072;
          func_0x00018779();
          local_8 = (undefined2 *******)(undefined2 ******)0x11f2;
        }
        for (; 0 < (int)local_944; local_944 = (undefined2 ******)((int)local_944 + -1)) {
          local_1074 = *(undefined2 *)0x14c;
          local_1072 = (undefined2 ******)*(undefined2 *)0x14e;
          pppppppuStack_e = (undefined2 *******)0xded4;
          local_c = local_8;
          local_8 = (undefined2 *******)local_1072;
          FUN_13bf_0327();
          local_8 = (undefined2 *******)(undefined2 ******)0x11f2;
        }
        func_0x0000abfa();
        local_8 = (undefined2 *******)0x1;
        ppppppuVar12 = (undefined2 ******)0x885;
        local_c = (undefined2 *******)0xdeef;
        func_0x0000b1d8();
        local_bf0 = (undefined2 *******)0x0;
      }
      if (local_eda == 0x14) goto LAB_3ab8_22f5;
      local_8 = (undefined2 *******)0x9f0;
      pppppppuVar14 = (undefined2 *******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xdf0e;
      local_c = (undefined2 *******)ppppppuVar12;
      FUN_21f2_3454();
      if (local_eda == 1) {
        local_8 = (undefined2 *******)0x22b2;
        pppppppuVar14 = (undefined2 *******)0x885;
        func_0x0000c3ca();
        local_bf0 = (undefined2 *******)0x0;
        local_8 = (undefined2 *******)0x456c;
        local_c = local_eaa;
        pppppppuStack_e = (undefined2 *******)0x43ae;
        pcVar5 = (code *)swi(0x3f);
        (*pcVar5)();
        if (*(int *)0x158 != 0) {
          return;
        }
      }
      if (local_eda == 2) {
        local_8 = pppppppuVar14;
        func_0x0000c3ca();
        local_bf0 = (undefined2 *******)0x0;
        local_8 = (undefined2 *******)&local_210;
        local_c = (undefined2 *******)0x4580;
        pppppppuStack_e = (undefined2 *******)(uint)*(byte *)0xbeec;
        pppppppuStack_10 = local_eaa;
        pcVar5 = (code *)swi(0x3f);
        (*pcVar5)();
        pppppppuVar14 = (undefined2 *******)0x885;
      }
      while ((local_eda == 3 || (pppppppuVar16 = pppppppuVar14, local_eda == 4))) {
        local_bf0 = (undefined2 *******)0x0;
        if (local_eda == 3) {
          local_9d0 = (undefined2 ******)*(undefined2 *)0x4578;
          local_9ce = *(undefined2 *)0x457a;
        }
        if (local_eda == 4) {
          local_9d0 = (undefined2 ******)*(undefined2 *)0x457c;
          local_9ce = *(undefined2 *)0x457e;
        }
        local_8 = (undefined2 *******)0x2712;
        local_c = (undefined2 *******)local_1104;
        pppppppuStack_e = local_1070;
        pppppppuStack_10 = &local_bea;
        pppppppuStack_12 = &local_9d0;
        pppppppuVar16 = (undefined2 *******)0xad;
        pppppppuStack_16 = (undefined2 *******)0xdfdf;
        pppppppuStack_14 = pppppppuVar14;
        local_43c = func_0x000021a4();
        if (*(int *)0x158 != 0) {
          return;
        }
        if (((local_43c == -1) || (local_43c == 0x65)) || (local_43c == 0x66)) break;
        uVar17 = 0;
        uVar19 = local_43c == 0;
        pppppppuVar14 = pppppppuVar16;
        if ((bool)uVar19) {
          local_8 = (undefined2 *******)0xad;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029b6d();
          local_8 = (undefined2 *******)0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar17 || (bool)uVar19) {
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar17) goto LAB_3ab8_3669;
          }
          else {
LAB_3ab8_3669:
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029b6d();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029983();
          }
          ppppppuVar12 = (undefined2 ******)0x22b2;
          if (local_eda == 3) {
            *(undefined2 *)0x4578 = local_9d0;
            *(undefined2 *)0x457a = local_9ce;
          }
          if (local_eda == 4) {
            *(undefined2 *)0x457c = local_9d0;
            *(undefined2 *)0x457e = local_9ce;
          }
          goto LAB_3ab8_2e3b;
        }
      }
      if (local_bf0 == (undefined2 *******)0x1) {
        *(undefined1 *)0xb8c = 1;
        local_8 = pppppppuVar16;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        func_0x00029d78();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xe029;
        func_0x000299d1();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xe032;
        func_0x000297e6();
        pppppppuStack_10 = (undefined2 *******)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xe037;
        func_0x00029d78();
        pppppppuStack_18 = (undefined2 *******)0x22b2;
        pppppppuStack_1a = (undefined2 *******)0xe041;
        func_0x000299d1();
        pppppppuStack_18 = (undefined2 *******)0x22b2;
        pppppppuVar16 = (undefined2 *******)0x11f2;
        pppppppuStack_1a = (undefined2 *******)0xe046;
        lVar20 = FUN_13bf_39a0();
        local_8 = (undefined2 *******)((ulong)lVar20 >> 0x10);
        *(undefined1 *)0xb8c = 0;
        if (0 < lVar20) {
          local_c = (undefined2 *******)0x11f2;
          pppppppuStack_e = (undefined2 *******)0xe06d;
          local_bee = lVar20;
          puVar21 = (undefined2 *)func_0x0000013f();
          puVar10 = (undefined2 *)puVar21;
          puVar7 = local_226;
          local_8 = unaff_DS;
          for (iVar6 = 0xb; unaff_DS = local_8, iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar3 = *puVar1;
          }
          local_8 = (undefined2 *******)0x0;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029d78();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xe098;
          func_0x000299d1();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xe0a1;
          func_0x000297e6();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xe0a6;
          func_0x00029d78();
          pppppppuStack_18 = (undefined2 *******)0x22b2;
          pppppppuStack_1a = (undefined2 *******)0xe0b0;
          func_0x000299d1();
          pppppppuStack_18 = (undefined2 *******)0x22b2;
          pppppppuStack_1a = (undefined2 *******)0xe0b9;
          func_0x000297e6();
          pppppppuStack_18 = (undefined2 *******)0x22b2;
          pppppppuStack_1a = (undefined2 *******)0xe0be;
          func_0x00029d78();
          pppppppuStack_20 = (undefined2 *******)0x22b2;
          pppppppuStack_22 = (undefined2 *******)0xe0c8;
          func_0x000299d1();
          pppppppuStack_20 = (undefined2 *******)0x22b2;
          pppppppuStack_22 = (undefined2 *******)0xe0d1;
          func_0x000297e6();
          pppppppuStack_20 = (undefined2 *******)0x22b2;
          pppppppuStack_22 = (undefined2 *******)0xe0d6;
          func_0x00029d78();
          pppppppuStack_2a = (undefined2 *******)0xe0e0;
          func_0x000299d1();
          pppppppuVar16 = (undefined2 *******)0x1bb4;
          pppppppuStack_2a = (undefined2 *******)0xe0e5;
          iVar6 = FUN_1def_043a();
          uVar17 = 0;
          uVar19 = iVar6 == 0;
          lVar20 = local_bee;
          if (!(bool)uVar19) {
            local_8 = (undefined2 *******)0x1bb4;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar17) {
LAB_3ab8_35bd:
              local_8 = (undefined2 *******)0x22b2;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029d78();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              pppppppuStack_12 = (undefined2 *******)0xe155;
              func_0x000299d1();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              pppppppuStack_12 = (undefined2 *******)0xe15e;
              func_0x000297e6();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              pppppppuStack_12 = (undefined2 *******)0xe163;
              func_0x00029d78();
              pppppppuStack_18 = (undefined2 *******)0x22b2;
              pppppppuStack_1a = (undefined2 *******)0xe16d;
              func_0x000299d1();
              pppppppuStack_18 = (undefined2 *******)0x22b2;
              pppppppuStack_1a = (undefined2 *******)0xe176;
              func_0x000297e6();
              pppppppuStack_18 = (undefined2 *******)0x22b2;
              pppppppuStack_1a = (undefined2 *******)0xe17b;
              func_0x00029d78();
              pppppppuStack_20 = (undefined2 *******)0x22b2;
              pppppppuStack_22 = (undefined2 *******)0xe185;
              func_0x000299d1();
              pppppppuStack_20 = (undefined2 *******)0x22b2;
              pppppppuStack_22 = (undefined2 *******)0xe18e;
              func_0x000297e6();
              pppppppuStack_20 = (undefined2 *******)0x22b2;
              pppppppuStack_22 = (undefined2 *******)0xe193;
              func_0x00029d78();
              pppppppuStack_2a = (undefined2 *******)0xe19d;
              func_0x000299d1();
              pppppppuVar14 = (undefined2 *******)0x1bb4;
              pppppppuStack_2a = (undefined2 *******)0xe1a2;
              FUN_1def_043a();
            }
            else {
              local_8 = (undefined2 *******)0x22b2;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar19) {
                local_8 = (undefined2 *******)0x22b2;
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar17) goto LAB_3ab8_35bd;
              }
              pppppppuVar14 = (undefined2 *******)0x22b2;
            }
            goto LAB_3ab8_37f6;
          }
        }
        local_bee = lVar20;
        if (lVar20 < 0) {
          local_8 = (undefined2 *******)0x1dc;
          local_c = (undefined2 *******)0xe245;
          func_0x00012276();
          *(undefined2 *)0xc22 = 1;
          local_8 = (undefined2 *******)0x2;
          local_c = (undefined2 *******)0x11f2;
          pppppppuStack_e = (undefined2 *******)0xe259;
          FUN_1000_0599();
          local_8 = (undefined2 *******)0x2be;
          pppppppuVar16 = (undefined2 *******)0x11f2;
          local_c = (undefined2 *******)0xe264;
          func_0x00012276();
        }
      }
      pppppppuVar14 = pppppppuVar16;
      if (local_bf0 == (undefined2 *******)0x2) {
        local_8 = (undefined2 *******)local_1104;
        local_c = local_bf0;
        pppppppuVar14 = (undefined2 *******)0x11f2;
        pppppppuStack_10 = (undefined2 *******)0xe27f;
        pppppppuStack_e = pppppppuVar16;
        iVar6 = func_0x00015409();
        if (iVar6 != 0) {
          local_8 = (undefined2 *******)0x2e6;
          local_c = local_eaa;
          pppppppuStack_e = (undefined2 *******)0x11f2;
          pppppppuStack_10 = (undefined2 *******)0xe29b;
          FUN_21f2_3454();
          local_8 = (undefined2 *******)0x2f0;
          local_c = (undefined2 *******)0x22b2;
          pppppppuVar14 = (undefined2 *******)0x22b2;
          pppppppuStack_e = (undefined2 *******)0xe2ac;
          FUN_21f2_2d26();
          do {
            do {
              local_8 = &local_bf0;
              local_c = local_106c;
              pppppppuStack_e = local_eaa;
              *(undefined2 *)0xc20 = 1;
              pppppppuStack_10 = (undefined2 *******)0x1;
              pppppppuStack_14 = (undefined2 *******)0xe2ce;
              pppppppuStack_12 = pppppppuVar14;
              iVar6 = FUN_1def_0904();
              if (iVar6 == -1) {
                *(undefined2 *)0xc20 = 0;
                pppppppuVar14 = (undefined2 *******)0x1bb4;
                goto LAB_3ab8_2eee;
              }
              *(undefined2 *)0xc20 = 0;
              if (*(int *)0x158 != 0) {
                return;
              }
              local_8 = (undefined2 *******)&local_1100;
              local_c = local_bf0;
              pppppppuStack_e = (undefined2 *******)0x1bb4;
              pppppppuVar14 = (undefined2 *******)0x11f2;
              pppppppuStack_10 = (undefined2 *******)0xe300;
              iVar6 = func_0x00015409();
            } while (iVar6 == 0);
            local_8 = (undefined2 *******)0x11f2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029d78();
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe31f;
            func_0x000299d1();
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe328;
            func_0x000297e6();
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe32d;
            func_0x00029d78();
            pppppppuStack_18 = (undefined2 *******)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe337;
            func_0x000299d1();
            pppppppuStack_18 = (undefined2 *******)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe340;
            func_0x000297e6();
            pppppppuStack_18 = (undefined2 *******)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe345;
            func_0x00029d78();
            pppppppuStack_20 = (undefined2 *******)0x22b2;
            pppppppuStack_22 = (undefined2 *******)0xe34f;
            func_0x000299d1();
            pppppppuStack_20 = (undefined2 *******)0x22b2;
            pppppppuStack_22 = (undefined2 *******)0xe358;
            func_0x000297e6();
            pppppppuStack_20 = (undefined2 *******)0x22b2;
            pppppppuStack_22 = (undefined2 *******)0xe35d;
            func_0x00029d78();
            pppppppuStack_2a = (undefined2 *******)0xe367;
            func_0x000299d1();
            pppppppuVar14 = (undefined2 *******)0x1bb4;
            pppppppuStack_2a = (undefined2 *******)0xe36c;
            iVar6 = FUN_1def_043a();
          } while (iVar6 == 0);
LAB_3ab8_37f6:
          if (*(int *)0x4588 != 0) {
            local_8 = pppppppuVar14;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029af6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029983();
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029af6();
            local_8 = (undefined2 *******)0x22b2;
            pppppppuVar14 = (undefined2 *******)0x22b2;
            func_0x00029983();
          }
          uVar17 = 1;
          local_92c = (undefined2 ******)0x0;
          local_944 = (undefined2 ******)0x0;
LAB_3ab8_3835:
          uVar19 = 0;
          local_8 = pppppppuVar14;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          pppppppuVar14 = (undefined2 *******)0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar19 && !(bool)uVar17) {
            local_8 = (undefined2 *******)0x22b2;
            pppppppuVar14 = (undefined2 *******)0x885;
            func_0x0000c3ca();
            local_bf0 = (undefined2 *******)0x0;
            local_8 = (undefined2 *******)local_1104;
            local_c = (undefined2 *******)0x4582;
            pppppppuStack_e = local_726;
            pcVar5 = (code *)swi(0x3f);
            iVar6 = (*pcVar5)();
            if (iVar6 == -1) goto LAB_3ab8_2eee;
            if (*(int *)0x158 != 0) {
              return;
            }
          }
LAB_3ab8_3884:
          local_8 = pppppppuVar14;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029d78();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xe41c;
          func_0x000299d1();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xe425;
          func_0x000297e6();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xe42a;
          func_0x00029d78();
          pppppppuStack_18 = (undefined2 *******)0x22b2;
          pppppppuStack_1a = (undefined2 *******)0xe434;
          func_0x000299d1();
          pppppppuStack_18 = (undefined2 *******)0x1;
          pppppppuStack_1a = (undefined2 *******)0x22b2;
          pppppppuStack_1c = (undefined2 *******)0xe43d;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_bd6 = *puVar7;
          local_bd4 = puVar7[1];
          local_8 = (undefined2 *******)0x1bb4;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029d78();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xe467;
          func_0x000299d1();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xe470;
          func_0x000297e6();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xe475;
          func_0x00029d78();
          pppppppuStack_18 = (undefined2 *******)0x22b2;
          pppppppuStack_1a = (undefined2 *******)0xe47f;
          func_0x000299d1();
          pppppppuStack_18 = (undefined2 *******)0x1;
          pppppppuStack_1a = (undefined2 *******)0x22b2;
          pppppppuStack_1c = (undefined2 *******)0xe488;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_e36 = *puVar7;
          local_e34 = puVar7[1];
          local_8 = (undefined2 *******)0x1bb4;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029b6d();
          local_8 = (undefined2 *******)0x22b2;
          func_0x0002996b();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029b9d();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029983();
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029b85();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029983();
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029b85();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029983();
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029b85();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029983();
          local_be6 = (undefined2 *****)*(undefined2 *)0x9c68;
          local_be4 = *(undefined2 *)0x9c6a;
          local_e44 = (undefined2 *******)0x0;
          while( true ) {
            pppppppuVar14 = local_e44;
            uVar19 = local_e44 < local_ecc;
            uVar17 = local_e44 == local_ecc;
            if (!(bool)uVar17 && (int)local_ecc <= (int)local_e44) break;
            pppppppuStack_2c = &local_ec4;
            local_8 = pppppppuStack_2c;
            local_c = &local_eb6;
            pppppppuStack_e = &local_e3a;
            pppppppuStack_10 = (undefined2 *******)local_e32[(int)local_e44 * 4 + 3];
            pppppppuStack_12 = (undefined2 *******)local_e32[(int)local_e44 * 4 + 2];
            pppppppuStack_14 = (undefined2 *******)local_bd2[(int)local_e44 * 4 + 3];
            pppppppuStack_16 = (undefined2 *******)local_bd2[(int)local_e44 * 4 + 2];
            pppppppuStack_18 = (undefined2 *******)local_e32[(int)local_e44 * 4 + 1];
            pppppppuStack_1a = (undefined2 *******)local_e32[(int)local_e44 * 4];
            pppppppuStack_1c = (undefined2 *******)local_bd2[(int)local_e44 * 4 + 1];
            pppppppuStack_1e = (undefined2 *******)local_bd2[(int)local_e44 * 4];
            pppppppuStack_20 = (undefined2 *******)local_fde[(int)local_e44 * 2 + 1];
            pppppppuStack_22 = (undefined2 *******)local_fde[(int)local_e44 * 2];
            pppppppuStack_2a = local_eae;
            pppppppuStack_2e = local_eba;
            pppppppuStack_30 = (undefined2 *******)0x22b2;
            pppppppuStack_32 = (undefined2 *******)0xe594;
            pppppppuStack_26 = pppppppuVar11;
            pppppppuStack_24 = pppppppuVar13;
            FUN_3ab8_12cb();
            auStack_20c[(int)pppppppuVar14 * 4] = (uint)local_e3a;
            auStack_20c[(int)pppppppuVar14 * 4 + 1] = (uint)local_e38;
            auStack_20c[(int)pppppppuVar14 * 4 + 2] = (uint)local_eb2;
            auStack_20c[(int)pppppppuVar14 * 4 + 3] = (uint)local_eb0;
            auStack_438[(int)pppppppuVar14 * 4] = (uint)local_eb6;
            auStack_438[(int)pppppppuVar14 * 4 + 1] = (uint)local_eb4;
            auStack_438[(int)pppppppuVar14 * 4 + 2] = (uint)local_ec4;
            auStack_438[(int)pppppppuVar14 * 4 + 3] = (uint)local_ec2;
            if ((local_eba == (undefined2 *******)0x2) &&
               (uVar9 = (int)local_9c4[(int)local_e44] >> 0xf,
               (int)(((uint)local_9c4[(int)local_e44] ^ uVar9) - uVar9) < 0x10)) {
              uVar9 = (int)local_fde[(int)local_e44 * 2] >> 0xf;
              local_234 = (undefined2 *****)(((uint)local_fde[(int)local_e44 * 2] ^ uVar9) - uVar9);
              if (10000 < (int)local_234) {
                local_234 = (undefined2 *****)((int)local_234 % 1000);
              }
              if (local_234 == (undefined2 *****)0x1) {
                local_8 = (undefined2 *******)0x22b2;
                func_0x000297e6();
                uVar19 = (int)local_e44 << 2 < 0;
                uVar17 = ((uint)local_e44 & 0x1fff) == 0;
                local_8 = (undefined2 *******)0x22b2;
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                func_0x00029af6();
                local_8 = (undefined2 *******)0x22b2;
                func_0x0002996b();
                local_8 = (undefined2 *******)0x22b2;
                FUN_28b3_1181();
                if (!(bool)uVar19 && !(bool)uVar17) {
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029983();
                }
              }
              local_234 = local_fde[(int)local_e44 * 2 + 1];
              if (10000 < (int)local_234) {
                local_234 = (undefined2 *****)((int)local_234 % 1000);
              }
              if (local_234 == (undefined2 *****)0x1) {
                local_8 = (undefined2 *******)0x22b2;
                func_0x000297e6();
                uVar19 = (int)local_e44 << 2 < 0;
                uVar17 = ((uint)local_e44 & 0x1fff) == 0;
                local_8 = (undefined2 *******)0x22b2;
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                func_0x00029af6();
                local_8 = (undefined2 *******)0x22b2;
                func_0x0002996b();
                local_8 = (undefined2 *******)0x22b2;
                FUN_28b3_1181();
                if (!(bool)uVar19 && !(bool)uVar17) {
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029983();
                }
              }
            }
            local_e44 = (undefined2 *******)((int)local_e44 + 1);
          }
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          pppppppuVar14 = (undefined2 *******)0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar19 || (bool)uVar17) {
            local_be6 = (undefined2 *****)*(undefined2 *)0x9bf4;
            local_be4 = *(undefined2 *)0x9bf6;
          }
          else {
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029b6d();
            local_8 = (undefined2 *******)&local_be6;
            local_c = (undefined2 *******)0xe70e;
            func_0x00029b9d();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029983();
            pppppppuVar14 = (undefined2 *******)0x22b2;
          }
LAB_3ab8_3ba5:
          local_8 = pppppppuVar14;
          func_0x0000c340();
          local_8 = (undefined2 *******)0x44df;
          local_c = (undefined2 *******)0xe733;
          func_0x00012276();
          local_8 = (undefined2 *******)0x11f2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar19 || (bool)uVar17) {
            local_8 = (undefined2 *******)0x44ed;
          }
          else {
            local_8 = (undefined2 *******)0x44e8;
          }
          local_c = (undefined2 *******)0xe75b;
          func_0x00012276();
          local_8 = (undefined2 *******)0x44f2;
          local_c = (undefined2 *******)0xe765;
          func_0x00012276();
          if (local_eba == (undefined2 *******)0x1) {
            local_8 = (undefined2 *******)0x4532;
            local_c = (undefined2 *******)0xe776;
            func_0x00012276();
          }
          if (local_eba == (undefined2 *******)0x2) {
            local_8 = (undefined2 *******)0x4538;
            local_c = (undefined2 *******)0xe787;
            func_0x00012276();
          }
          local_8 = (undefined2 *******)0x11f2;
          func_0x00010526();
          if (*(int *)0xc22 == 0) {
            if (*(char *)0x4580 != '\0') {
              local_8 = (undefined2 *******)0xdef;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029d78();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              pppppppuStack_12 = (undefined2 *******)0xe7b6;
              func_0x000299d1();
              pppppppuStack_10 = (undefined2 *******)0x453e;
              pppppppuStack_12 = (undefined2 *******)0xbf48;
              pppppppuStack_14 = (undefined2 *******)0x22b2;
              pppppppuStack_16 = (undefined2 *******)0xe7c3;
              FUN_21f2_3454();
              local_8 = (undefined2 *******)0xffff;
              local_c = (undefined2 *******)0x2;
              pppppppuStack_e = (undefined2 *******)0x20;
              pppppppuStack_10 = (undefined2 *******)0xbf48;
              pppppppuStack_12 = (undefined2 *******)0x22b2;
              pppppppuStack_14 = (undefined2 *******)0xe7df;
              FUN_1000_02b5();
            }
            if (*(int *)0x4584 == 1) {
              local_8 = (undefined2 *******)0x4545;
            }
            else {
              local_8 = (undefined2 *******)0x454c;
            }
            local_c = (undefined2 *******)0xdef;
            pppppppuStack_e = (undefined2 *******)0xe7fb;
            FUN_21f2_3454();
            local_8 = (undefined2 *******)0xffff;
            local_c = (undefined2 *******)0x2;
            pppppppuStack_e = (undefined2 *******)0x2c;
            pppppppuStack_10 = (undefined2 *******)0xbf48;
            pppppppuStack_12 = (undefined2 *******)0x22b2;
            pppppppuStack_14 = (undefined2 *******)0xe816;
            FUN_1000_02b5();
            if ((*(int *)0x4582 < -2) || (2 < *(int *)0x4582)) {
              *(undefined2 *)0x4582 = 1;
            }
            local_8 = (undefined2 *******)0x4553;
            local_c = (undefined2 *******)0xdef;
            pppppppuStack_e = (undefined2 *******)0xe83a;
            FUN_21f2_3454();
            if (*(int *)0x4582 == 0) {
              local_8 = (undefined2 *******)0x4555;
              local_c = (undefined2 *******)0x22b2;
              pppppppuStack_e = (undefined2 *******)0xe850;
              FUN_21f2_2d26();
            }
            uVar9 = (int)*(uint *)0x4582 >> 0xf;
            if ((*(uint *)0x4582 ^ uVar9) - uVar9 == 1) {
              local_8 = (undefined2 *******)0x43ae;
              local_c = (undefined2 *******)0x22b2;
              pppppppuStack_e = (undefined2 *******)0xe86a;
              FUN_21f2_2d26();
            }
            uVar9 = (int)*(uint *)0x4582 >> 0xf;
            if ((*(uint *)0x4582 ^ uVar9) - uVar9 == 2) {
              local_8 = (undefined2 *******)0x43ba;
              local_c = (undefined2 *******)0x22b2;
              pppppppuStack_e = (undefined2 *******)0xe886;
              FUN_21f2_2d26();
            }
            local_8 = (undefined2 *******)0x455a;
            local_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xe895;
            FUN_21f2_2d26();
            local_8 = (undefined2 *******)0xffff;
            local_c = (undefined2 *******)0x2;
            pppppppuStack_e = (undefined2 *******)0x37;
            pppppppuStack_10 = (undefined2 *******)0xbf48;
            pppppppuStack_12 = (undefined2 *******)0x22b2;
            pppppppuStack_14 = (undefined2 *******)0xe8b0;
            FUN_1000_02b5();
            if (*(int *)0x458a == 0) {
              local_8 = (undefined2 *******)0x0;
              pppppppuStack_10 = (undefined2 *******)0x455f;
            }
            else {
              local_8 = (undefined2 *******)0xffff;
              pppppppuStack_10 = (undefined2 *******)0x455c;
            }
            local_c = (undefined2 *******)0x2;
            pppppppuStack_e = (undefined2 *******)0x44;
            pppppppuStack_12 = (undefined2 *******)0xdef;
            pppppppuStack_14 = (undefined2 *******)0xe8e7;
            FUN_1000_02b5();
            if (((local_eba == (undefined2 *******)0x1) && (*(int *)0x4586 != 0)) ||
               ((local_eba == (undefined2 *******)0x2 && (*(int *)0x4588 != 0)))) {
              local_8 = (undefined2 *******)0xffff;
              pppppppuStack_10 = (undefined2 *******)0x4562;
            }
            else {
              local_8 = (undefined2 *******)0x0;
              pppppppuStack_10 = (undefined2 *******)0x4565;
            }
            local_c = (undefined2 *******)0x2;
            pppppppuStack_e = (undefined2 *******)0x4d;
            pppppppuStack_12 = (undefined2 *******)0xdef;
            pppppppuStack_14 = (undefined2 *******)0xe933;
            FUN_1000_02b5();
          }
          pppppppuVar14 = (undefined2 *******)0xdef;
          local_fe4 = (undefined2 *****)*(undefined2 *)0x9c70;
          local_fe2 = *(undefined2 *)0x9c72;
          local_ed4 = local_fe4;
          local_ed2 = local_fe2;
LAB_3ab8_3dcd:
          *(undefined2 *)0xc20 = 1;
          *(undefined2 *)0xa4a = 1;
          *(undefined2 *)0xa48 = 5;
          local_8 = &local_bf0;
          local_c = local_106c;
          pppppppuStack_e = &local_43a;
          pppppppuStack_10 = &local_232;
          pppppppuVar16 = (undefined2 *******)0x3bf;
          pppppppuStack_14 = (undefined2 *******)0xe97a;
          pppppppuStack_12 = pppppppuVar14;
          local_eb8 = func_0x00006608();
          *(undefined2 *)0xc20 = 0;
          *(undefined2 *)0xa4a = 0;
          *(undefined2 *)0xa48 = 0;
LAB_3ab8_3e0c:
          local_8 = pppppppuVar16;
          if (*(int *)0x158 != 0) {
            FUN_1885_2ec3();
            local_8 = (undefined2 *******)0x1b6e;
            func_0x00013e19();
            local_8 = (undefined2 *******)0x2;
            local_c = (undefined2 *******)0x11f2;
            pppppppuStack_e = (undefined2 *******)0xe9aa;
            FUN_1000_0599();
            local_8 = (undefined2 *******)0xdef;
            func_0x00010526();
            return;
          }
          uVar19 = local_eb8 != 0xffff;
          uVar17 = local_eb8 == 0xffff;
          if ((bool)uVar17) {
            FUN_1885_2ec3();
            local_8 = (undefined2 *******)0x1b6e;
            func_0x00013e19();
            local_8 = (undefined2 *******)0x2;
            local_c = (undefined2 *******)0x11f2;
            pppppppuStack_e = (undefined2 *******)0xe9d2;
            FUN_1000_0599();
            local_8 = (undefined2 *******)0xdef;
            func_0x00010526();
            local_8 = (undefined2 *******)0xdef;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            pppppppuVar14 = (undefined2 *******)0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar19) goto LAB_3ab8_2eee;
            goto LAB_3ab8_3835;
          }
          pppppppuVar14 = pppppppuVar16;
          if (local_eb8 == 99) {
            local_ed4 = (undefined2 *****)*(undefined2 *)0x9c70;
            local_ed2 = *(undefined2 *)0x9c72;
            uVar17 = 1;
            uVar19 = 0;
            goto LAB_3ab8_3ba5;
          }
          if (((local_bf0 != (undefined2 *******)0x0) && ((int)local_43a < 0x10)) &&
             (0xe4 < (int)local_232)) {
            local_bf0 = (undefined2 *******)0x0;
            local_eb8 = (int)(local_232 + -0x72) / 0x58 + 0x31;
          }
          if (((local_eb8 == 0x31) || (local_eb8 == 0x32)) ||
             ((local_eb8 == 0x33 || ((local_eb8 == 0x34 || (local_eb8 == 0x35)))))) {
            local_bf0 = (undefined2 *******)0x0;
            local_ed4 = (undefined2 *****)*(undefined2 *)0x9c74;
            local_ed2 = *(undefined2 *)0x9c76;
            if (local_eb8 == 0x31) {
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029af6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029983();
              local_8 = (undefined2 *******)0x22b2;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029af6();
              local_8 = (undefined2 *******)0x22b2;
              pppppppuVar14 = (undefined2 *******)0x22b2;
              func_0x00029983();
              if (*(char *)0xbeec == '\0') {
                local_8 = (undefined2 *******)0x22b2;
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                func_0x00029af6();
                local_8 = (undefined2 *******)0x22b2;
                pppppppuVar14 = (undefined2 *******)0x22b2;
                func_0x00029983();
              }
            }
            if ((local_eb8 == 0x32) && (*(int *)0x4584 = *(int *)0x4584 + 1, 2 < *(int *)0x4584)) {
              *(undefined2 *)0x4584 = 0;
            }
            if ((local_eb8 == 0x33) && (*(int *)0x4582 = *(int *)0x4582 + 1, 2 < *(int *)0x4582)) {
              *(undefined2 *)0x4582 = 0xfffe;
            }
            iVar6 = *(int *)0x4582;
            uVar17 = iVar6 == 0;
            uVar19 = iVar6 == 1;
            if (iVar6 < 1) {
              local_8 = pppppppuVar14;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              pppppppuVar14 = (undefined2 *******)0x22b2;
              FUN_28b3_1181();
              if (!(bool)uVar17 && !(bool)uVar19) {
                *(undefined2 *)0x4582 = 1;
              }
            }
            if (local_eb8 == 0x34) {
              *(int *)0x458a = 1 - *(int *)0x458a;
              local_8 = pppppppuVar14;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029af6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029983();
              local_8 = (undefined2 *******)0x22b2;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029af6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029983();
              if (*(char *)0xbeec == '\0') {
                local_8 = (undefined2 *******)0x22b2;
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                func_0x00029af6();
                local_8 = (undefined2 *******)0x22b2;
                func_0x00029983();
              }
              pppppppuVar14 = (undefined2 *******)0x22b2;
              if ((local_eba == (undefined2 *******)0x1) && (*(char *)0xbeec == '\x02')) {
                local_eb8 = 0x35;
              }
            }
            uVar19 = local_eb8 < 0x35;
            uVar17 = local_eb8 == 0x35;
            if (!(bool)uVar17) goto LAB_3ab8_3ba5;
            if (local_eba == (undefined2 *******)0x1) {
              *(int *)0x4586 = 1 - *(int *)0x4586;
            }
            uVar19 = local_eba < (undefined2 *******)0x2;
            uVar17 = local_eba == (undefined2 *******)0x2;
            if (!(bool)uVar17) goto LAB_3ab8_3ba5;
            *(int *)0x4588 = 1 - *(int *)0x4588;
            local_8 = pppppppuVar14;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029af6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029983();
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029af6();
            local_8 = (undefined2 *******)0x22b2;
            pppppppuVar14 = (undefined2 *******)0x22b2;
            func_0x00029983();
            goto LAB_3ab8_3884;
          }
          local_111a[0] = (undefined2 *****)0x0;
          uVar17 = local_bf0 == (undefined2 *******)0x0;
          if ((!(bool)uVar17) && (uVar17 = 0, local_eb8 == 100)) {
            local_ed4 = (undefined2 *****)*(undefined2 *)0x9c68;
            local_ed2 = *(undefined2 *)0x9c6a;
            local_8 = (undefined2 *******)&local_1100;
            local_c = local_bf0;
            pppppppuVar14 = (undefined2 *******)0x11f2;
            pppppppuStack_10 = (undefined2 *******)0xec2c;
            pppppppuStack_e = pppppppuVar16;
            iVar6 = func_0x00015409();
            uVar19 = 0;
            uVar17 = iVar6 == 0;
            if ((bool)uVar17) {
              uVar17 = 1;
              goto LAB_3ab8_3ba5;
            }
            local_111a[0] = (undefined2 *****)0x1;
            local_8 = (undefined2 *******)0x2;
            local_c = (undefined2 *******)0x11f2;
            pppppppuStack_e = (undefined2 *******)0xec49;
            FUN_1000_0599();
            local_8 = (undefined2 *******)0xdef;
            func_0x00010526();
            local_8 = (undefined2 *******)0xdef;
            pppppppuVar16 = (undefined2 *******)0x885;
            func_0x0000c3ca();
          }
          local_8 = pppppppuVar16;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar17) {
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            pppppppuVar14 = (undefined2 *******)0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar17) goto LAB_3ab8_43f8;
          }
          local_fe4 = local_1100;
          local_fe2 = local_10fe;
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029d78();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xecb2;
          func_0x000299d1();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xecbb;
          func_0x000297e6();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xecc4;
          func_0x0002996b();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xecc9;
          func_0x00029d78();
          pppppppuStack_18 = (undefined2 *******)0x22b2;
          pppppppuStack_1a = (undefined2 *******)0xecd3;
          func_0x000299d1();
          pppppppuStack_18 = (undefined2 *******)0x1;
          pppppppuStack_1a = (undefined2 *******)0x22b2;
          pppppppuStack_1c = (undefined2 *******)0xecdc;
          puVar8 = (uint *)FUN_1def_05d1();
          uVar17 = (undefined1 *)0xffed < &pppppppuStack_18;
          uVar19 = &stack0x0000 == (undefined1 *)0x6;
          local_bda = (undefined2 *******)*puVar8;
          local_bd8 = (undefined2 *******)puVar8[1];
          local_942 = *(int *)0x4582;
          local_8 = (undefined2 *******)0x1bb4;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar17 && !(bool)uVar19) {
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            FUN_28b3_100d();
            local_8 = (undefined2 *******)0x22b2;
            func_0x0002996b();
            local_8 = (undefined2 *******)0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar17) {
              local_8 = (undefined2 *******)0x22b2;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029af6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029983();
              local_942 = -local_942;
            }
            if (*(int *)0x4582 == 2) {
              if (local_eba == (undefined2 *******)0x1) {
                local_8 = (undefined2 *******)0x22b2;
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                func_0x00029b6d();
                local_8 = &local_ec8;
                local_c = (undefined2 *******)0xed81;
                func_0x00029bb5();
              }
              else {
                local_8 = (undefined2 *******)0x22b2;
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                func_0x00029bb5();
                local_8 = &local_ec8;
                local_c = (undefined2 *******)0xed9f;
                func_0x00029b55();
              }
              local_8 = (undefined2 *******)0x22b2;
              func_0x00029983();
            }
          }
          if (local_942 == -2) {
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = &local_bda;
            local_c = (undefined2 *******)0xedcc;
            func_0x00029bb5();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029983();
          }
          if (local_942 == 0) {
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029b6d();
            local_8 = &local_bda;
            local_c = (undefined2 *******)0xedf5;
            func_0x00029bb5();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029983();
          }
          if (local_942 == 1) {
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = &local_bda;
            local_c = (undefined2 *******)0xee15;
            func_0x00029b55();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029983();
          }
          if (local_942 == 2) {
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029bb5();
            local_8 = &local_bda;
            local_c = (undefined2 *******)0xee3e;
            func_0x00029b55();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029983();
          }
          ppppppuVar12 = (undefined2 ******)0x22b2;
          local_e3e = local_be2;
          local_e3c = local_be0;
          if (*(char *)0x4580 == '\0') {
            local_8 = (undefined2 *******)0x22b2;
            func_0x000297e6();
            local_8 = (undefined2 *******)0x22b2;
            func_0x00029d78();
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xee73;
            func_0x000299d1();
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xee7c;
            func_0x000297e6();
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xee81;
            func_0x00029d78();
            pppppppuStack_18 = (undefined2 *******)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xee8b;
            func_0x000299d1();
            pppppppuStack_18 = (undefined2 *******)0x1;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            ppppppuVar12 = (undefined2 ******)0x1bb4;
            pppppppuStack_1c = (undefined2 *******)0xee94;
            puVar8 = (uint *)func_0x0001e558();
            local_e3e = (undefined2 *******)*puVar8;
            local_e3c = (undefined2 *******)puVar8[1];
          }
          local_8 = (undefined2 *******)ppppppuVar12;
          FUN_28b3_0d8b();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029b6d();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029b6d();
          local_8 = &local_e3e;
          local_c = (undefined2 *******)0xeecb;
          func_0x00029bb5();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029983();
          local_8 = (undefined2 *******)0x22b2;
          FUN_1885_2ec3();
          local_8 = (undefined2 *******)0x1b6e;
          pppppppuVar14 = (undefined2 *******)0x11f2;
          func_0x00013e19();
          local_e44 = (undefined2 *******)0x0;
          do {
            if ((int)local_ecc < (int)local_e44) goto LAB_3ab8_43f8;
            if (local_111a[0] == (undefined2 *****)0x0) {
              *(undefined2 *)0xc20 = 1;
              *(undefined2 *)0xa4a = 1;
              *(undefined2 *)0xa48 = 5;
              local_8 = &local_bf0;
              local_c = local_106c;
              pppppppuStack_e = &local_43a;
              pppppppuStack_10 = &local_232;
              pppppppuVar16 = (undefined2 *******)0x3bf;
              pppppppuStack_14 = (undefined2 *******)0xf5d3;
              pppppppuStack_12 = pppppppuVar14;
              local_eb8 = func_0x00006608();
              *(undefined2 *)0xc20 = 0;
              *(undefined2 *)0xa4a = 0;
              *(undefined2 *)0xa48 = 0;
              if ((local_eb8 != 0) || (uVar17 = local_bf0 == (undefined2 *******)0x0, !(bool)uVar17)
                 ) goto LAB_3ab8_3e0c;
              local_8 = (undefined2 *******)0x3bf;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              FUN_28b3_1181();
              if (!(bool)uVar17) goto LAB_3ab8_4396;
              local_8 = (undefined2 *******)0x22b2;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              pppppppuVar14 = (undefined2 *******)0x22b2;
              FUN_28b3_1181();
              if (!(bool)uVar17) goto LAB_3ab8_4396;
            }
            if ((local_111a[0] != (undefined2 *****)0x0) && ((int)local_ecc < (int)local_ebc)) {
              local_8 = local_e3c;
              local_c = local_bd8;
              pppppppuStack_e = local_bda;
              pppppppuStack_10 = local_fe6;
              pppppppuStack_12 = local_fe8;
              pppppppuStack_14 = local_ec6;
              pppppppuStack_16 = local_ec8;
              pppppppuStack_18 = (undefined2 *******)*(uint *)0x458a;
              pppppppuStack_1a = (undefined2 *******)*(uint *)0x4586;
              pppppppuStack_20 = local_eac;
              pppppppuStack_22 = local_eae;
              pppppppuStack_24 = local_928;
              pppppppuStack_26 = local_eba;
              pppppppuStack_2c = (undefined2 *******)0xef71;
              pppppppuStack_2a = pppppppuVar14;
              pppppppuStack_1e = pppppppuVar11;
              pppppppuStack_1c = pppppppuVar13;
              local_92c = (undefined2 ******)FUN_3ab8_1e9b();
              goto LAB_3ab8_43f8;
            }
            pppppppuStack_36 = &local_ec4;
            local_8 = pppppppuStack_36;
            local_c = &local_eb6;
            pppppppuStack_e = &local_e3a;
            pppppppuStack_10 = (undefined2 *******)auStack_438[(int)local_e44 * 4 + 3];
            pppppppuStack_12 = (undefined2 *******)auStack_438[(int)local_e44 * 4 + 2];
            pppppppuStack_14 = (undefined2 *******)auStack_20c[(int)local_e44 * 4 + 3];
            pppppppuStack_16 = (undefined2 *******)auStack_20c[(int)local_e44 * 4 + 2];
            pppppppuStack_18 = (undefined2 *******)auStack_438[(int)local_e44 * 4 + 1];
            pppppppuStack_1a = (undefined2 *******)auStack_438[(int)local_e44 * 4];
            pppppppuStack_1c = (undefined2 *******)auStack_20c[(int)local_e44 * 4 + 1];
            pppppppuStack_1e = (undefined2 *******)auStack_20c[(int)local_e44 * 4];
            pppppppuStack_20 = (undefined2 *******)local_fde[(int)local_e44 * 2 + 1];
            pppppppuStack_22 = (undefined2 *******)local_fde[(int)local_e44 * 2];
            pppppppuStack_24 = local_e3c;
            pppppppuStack_26 = local_e3e;
            pppppppuStack_2a = local_bda;
            pppppppuStack_2c = local_fe6;
            pppppppuStack_2e = local_fe8;
            pppppppuStack_30 = local_ec6;
            pppppppuStack_32 = local_ec8;
            uStack_34 = *(undefined2 *)0x458a;
            uStack_38 = *(undefined2 *)0x4586;
            uStack_3c = 0xf005;
            pppppppuStack_3a = pppppppuVar14;
            FUN_3ab8_174c();
            if (local_111a[0] == (undefined2 *****)0x0) {
              local_1116 = (undefined2 ******)*(int *)0xa6c;
              if ((0 < (int)local_10f8[(int)local_e44]) && ((int)local_10f8[(int)local_e44] < 10)) {
                *(undefined2 *)0xa6c = local_10f8[(int)local_e44];
              }
              local_8 = pppppppuVar14;
              func_0x000297e6();
              uVar17 = ((uint)local_e44 & 0x3fff) == 0;
              local_8 = (undefined2 *******)0x22b2;
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar17) {
LAB_3ab8_48ee:
                local_8 = (undefined2 *******)0x1;
                local_c = (undefined2 *******)0xf47b;
                func_0x000297e6();
                local_c = (undefined2 *******)0xf480;
                func_0x00029d78();
                pppppppuStack_12 = (undefined2 *******)0x22b2;
                pppppppuStack_14 = (undefined2 *******)0xf48a;
                func_0x000299d1();
                pppppppuStack_12 = (undefined2 *******)0x22b2;
                pppppppuStack_14 = (undefined2 *******)0xf493;
                func_0x000297e6();
                pppppppuStack_12 = (undefined2 *******)0x22b2;
                pppppppuStack_14 = (undefined2 *******)0xf498;
                func_0x00029d78();
                pppppppuStack_1a = (undefined2 *******)0x22b2;
                pppppppuStack_1c = (undefined2 *******)0xf4a2;
                func_0x000299d1();
                pppppppuStack_1a = (undefined2 *******)0x22b2;
                pppppppuStack_1c = (undefined2 *******)0xf4ab;
                func_0x000297e6();
                pppppppuStack_1a = (undefined2 *******)0x22b2;
                pppppppuStack_1c = (undefined2 *******)0xf4b0;
                func_0x00029d78();
                pppppppuStack_22 = (undefined2 *******)0x22b2;
                pppppppuStack_24 = (undefined2 *******)0xf4ba;
                func_0x000299d1();
                pppppppuStack_22 = (undefined2 *******)0x22b2;
                pppppppuStack_24 = (undefined2 *******)0xf4c3;
                func_0x000297e6();
                pppppppuStack_22 = (undefined2 *******)0x22b2;
                pppppppuStack_24 = (undefined2 *******)0xf4c8;
                func_0x00029d78();
                pppppppuStack_2a = (undefined2 *******)0x22b2;
                pppppppuStack_2c = (undefined2 *******)0xf4d2;
                func_0x000299d1();
                pppppppuStack_2a = (undefined2 *******)0x22b2;
                pppppppuVar14 = (undefined2 *******)0x1bb4;
                pppppppuStack_2c = (undefined2 *******)0xf4d7;
                func_0x0001e18f();
              }
              else {
                local_8 = (undefined2 *******)&local_ed8;
                local_c = &local_45c;
                pppppppuStack_e = (undefined2 *******)local_9c4[(int)local_e44];
                pppppppuStack_10 = (undefined2 *******)local_10f8[(int)local_e44];
                pppppppuStack_12 = (undefined2 *******)local_1068[(int)local_e44];
                pppppppuStack_14 = local_ec2;
                pppppppuStack_16 = local_ec4;
                pppppppuStack_18 = local_eb0;
                pppppppuStack_1a = local_eb2;
                pppppppuStack_1c = local_eb4;
                pppppppuStack_1e = local_eb6;
                pppppppuStack_20 = local_e38;
                pppppppuStack_22 = local_e3a;
                pppppppuStack_24 = (undefined2 *******)local_690[(int)local_e44 * 2 + 1];
                pppppppuStack_26 = (undefined2 *******)local_690[(int)local_e44 * 2];
                pppppppuStack_2a = (undefined2 *******)*(uint *)0x4586;
                pppppppuStack_2c = (undefined2 *******)0x1;
                pppppppuStack_2e = (undefined2 *******)0x22b2;
                pppppppuStack_30 = (undefined2 *******)0xf0b9;
                FUN_3ab8_0f38();
                local_8 = (undefined2 *******)0x22b2;
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                func_0x00029d78();
                local_8 = (undefined2 *******)0x22b2;
                func_0x00029c74();
                local_8 = (undefined2 *******)0x22b2;
                pppppppuVar14 = (undefined2 *******)0x22b2;
                iVar6 = FUN_28b3_0f51();
                local_1114 = (undefined2 *******)(iVar6 % 10);
                if ((int)local_1114 < 4) {
                  local_441 = 9;
                  pppppppuVar14 = &pppppppuStack_26;
                  ppppppuVar12 = &local_45c;
                  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                    puVar21 = pppppppuVar14;
                    pppppppuVar14 = pppppppuVar14 + 1;
                    ppppppuVar2 = ppppppuVar12;
                    ppppppuVar12 = ppppppuVar12 + 1;
                    *puVar21 = *ppppppuVar2;
                  }
                  pppppppuVar14 = (undefined2 *******)0x11f2;
                  pppppppuStack_2a = (undefined2 *******)0xf101;
                  func_0x00013e46();
                }
                if (local_1114 != (undefined2 *******)0x8) {
                  local_1114 = (undefined2 *******)((int)local_1114 % 4);
                  if ((local_1114 == (undefined2 *******)0x1) ||
                     (local_1114 == (undefined2 *******)0x3)) {
                    local_8 = (undefined2 *******)0x1;
                    local_c = (undefined2 *******)0xf133;
                    func_0x000297e6();
                    local_c = (undefined2 *******)0xf138;
                    func_0x00029d78();
                    pppppppuStack_12 = (undefined2 *******)0x22b2;
                    pppppppuStack_14 = (undefined2 *******)0xf142;
                    func_0x000299d1();
                    pppppppuStack_12 = (undefined2 *******)0x22b2;
                    pppppppuStack_14 = (undefined2 *******)0xf14b;
                    func_0x000297e6();
                    pppppppuStack_12 = (undefined2 *******)0x22b2;
                    pppppppuStack_14 = (undefined2 *******)0xf150;
                    func_0x00029d78();
                    pppppppuStack_1a = (undefined2 *******)0x22b2;
                    pppppppuStack_1c = (undefined2 *******)0xf15a;
                    func_0x000299d1();
                    pppppppuStack_1a = (undefined2 *******)0x22b2;
                    pppppppuStack_1c = (undefined2 *******)0xf163;
                    func_0x000297e6();
                    pppppppuStack_1a = (undefined2 *******)0x22b2;
                    pppppppuStack_1c = (undefined2 *******)0xf168;
                    func_0x00029d78();
                    pppppppuStack_22 = (undefined2 *******)0x22b2;
                    pppppppuStack_24 = (undefined2 *******)0xf172;
                    func_0x000299d1();
                    pppppppuStack_22 = (undefined2 *******)0x22b2;
                    pppppppuStack_24 = (undefined2 *******)0xf17b;
                    func_0x000297e6();
                    pppppppuStack_22 = (undefined2 *******)0x22b2;
                    pppppppuStack_24 = (undefined2 *******)0xf180;
                    func_0x00029d78();
                    pppppppuStack_2a = (undefined2 *******)0x22b2;
                    pppppppuStack_2c = (undefined2 *******)0xf18a;
                    func_0x000299d1();
                    pppppppuStack_2a = (undefined2 *******)0x22b2;
                    pppppppuVar14 = (undefined2 *******)0x1bb4;
                    pppppppuStack_2c = (undefined2 *******)0xf18f;
                    func_0x0001e18f();
                  }
                  if ((local_1114 == (undefined2 *******)0x2) ||
                     (local_1114 == (undefined2 *******)0x3)) {
                    local_8 = (undefined2 *******)0x1;
                    local_c = (undefined2 *******)0xf1ad;
                    func_0x000297e6();
                    local_c = (undefined2 *******)0xf1b2;
                    func_0x00029d78();
                    pppppppuStack_12 = (undefined2 *******)0x22b2;
                    pppppppuStack_14 = (undefined2 *******)0xf1bc;
                    func_0x000299d1();
                    pppppppuStack_12 = (undefined2 *******)0x22b2;
                    pppppppuStack_14 = (undefined2 *******)0xf1c5;
                    func_0x000297e6();
                    pppppppuStack_12 = (undefined2 *******)0x22b2;
                    pppppppuStack_14 = (undefined2 *******)0xf1ca;
                    func_0x00029d78();
                    pppppppuStack_1a = (undefined2 *******)0x22b2;
                    pppppppuStack_1c = (undefined2 *******)0xf1d4;
                    func_0x000299d1();
                    pppppppuStack_1a = (undefined2 *******)0x22b2;
                    pppppppuStack_1c = (undefined2 *******)0xf1dd;
                    func_0x000297e6();
                    pppppppuStack_1a = (undefined2 *******)0x22b2;
                    pppppppuStack_1c = (undefined2 *******)0xf1e2;
                    func_0x00029d78();
                    pppppppuStack_22 = (undefined2 *******)0x22b2;
                    pppppppuStack_24 = (undefined2 *******)0xf1ec;
                    func_0x000299d1();
                    pppppppuStack_22 = (undefined2 *******)0x22b2;
                    pppppppuStack_24 = (undefined2 *******)0xf1f5;
                    func_0x000297e6();
                    pppppppuStack_22 = (undefined2 *******)0x22b2;
                    pppppppuStack_24 = (undefined2 *******)0xf1fa;
                    func_0x00029d78();
                    pppppppuStack_2a = (undefined2 *******)0x22b2;
                    pppppppuStack_2c = (undefined2 *******)0xf204;
                    func_0x000299d1();
                    pppppppuStack_2a = (undefined2 *******)0x22b2;
                    pppppppuVar14 = (undefined2 *******)0x1bb4;
                    pppppppuStack_2c = (undefined2 *******)0xf209;
                    func_0x0001e18f();
                  }
                  uVar15 = *(undefined2 *)0xbee;
                  *(undefined2 *)0xbe4 = *(undefined2 *)0xbec;
                  *(undefined2 *)0xbe6 = uVar15;
                  uVar15 = *(undefined2 *)0xbfe;
                  *(undefined2 *)0xbf4 = *(undefined2 *)0xbfc;
                  *(undefined2 *)0xbf6 = uVar15;
                  *(undefined2 *)0xbec = local_ec0;
                  *(undefined2 *)0xbee = local_ebe;
                  *(undefined2 *)0xbfc = local_ed8;
                  *(undefined2 *)0xbfe = local_ed6;
                }
                pppppppuVar16 = local_e44;
                if (local_1114 == (undefined2 *******)0x8) {
                  local_8 = pppppppuVar14;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x0002996b();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029983();
                  pppppuVar4 = local_bd2[(int)pppppppuVar16 * 4 + 3];
                  *(undefined2 *)0xbf0 = local_bd2[(int)pppppppuVar16 * 4 + 2];
                  *(undefined2 *)0xbf2 = pppppuVar4;
                  pppppuVar4 = local_e32[(int)pppppppuVar16 * 4 + 3];
                  *(undefined2 *)0xc00 = local_e32[(int)pppppppuVar16 * 4 + 2];
                  *(undefined2 *)0xc02 = pppppuVar4;
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029b85();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029d78();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x000299b9();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf2bb;
                  func_0x000299d1();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf2c4;
                  func_0x000297e6();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf2cd;
                  func_0x0002996b();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf2d6;
                  func_0x00029b85();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf2db;
                  func_0x00029d78();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf2e4;
                  func_0x000299b9();
                  pppppppuStack_18 = (undefined2 *******)0x22b2;
                  pppppppuStack_1a = (undefined2 *******)0xf2ee;
                  func_0x000299d1();
                  pppppppuStack_18 = (undefined2 *******)0x0;
                  pppppppuStack_1a = (undefined2 *******)0x22b2;
                  pppppppuStack_1c = (undefined2 *******)0xf2f6;
                  FUN_1def_05d1();
                  local_8 = (undefined2 *******)0x1bb4;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  FUN_28b3_100d();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029bb5();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029983();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029834();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf32e;
                  func_0x000299d1();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf337;
                  func_0x00029834();
                  pppppppuStack_18 = (undefined2 *******)0x22b2;
                  pppppppuStack_1a = (undefined2 *******)0xf341;
                  func_0x000299d1();
                  pppppppuStack_18 = (undefined2 *******)0x0;
                  pppppppuStack_1a = (undefined2 *******)0x22b2;
                  pppppppuStack_1c = (undefined2 *******)0xf349;
                  func_0x0001e558();
                  local_8 = (undefined2 *******)0x1bb4;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  FUN_28b3_100d();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029bb5();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029983();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029b85();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x0002996b();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029983();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029b85();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x0002996b();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029983();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029d78();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf3cd;
                  func_0x000299d1();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf3d6;
                  func_0x000297e6();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf3db;
                  func_0x00029d78();
                  pppppppuStack_18 = (undefined2 *******)0x22b2;
                  pppppppuStack_1a = (undefined2 *******)0xf3e5;
                  func_0x000299d1();
                  pppppppuStack_18 = (undefined2 *******)0x0;
                  pppppppuStack_1a = (undefined2 *******)0x22b2;
                  pppppppuStack_1c = (undefined2 *******)0xf3ed;
                  FUN_1def_05d1();
                  local_8 = (undefined2 *******)0x1bb4;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  FUN_28b3_100d();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029bb5();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029983();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029d78();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf429;
                  func_0x000299d1();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf432;
                  func_0x000297e6();
                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                  pppppppuStack_12 = (undefined2 *******)0xf437;
                  func_0x00029d78();
                  pppppppuStack_18 = (undefined2 *******)0x22b2;
                  pppppppuStack_1a = (undefined2 *******)0xf441;
                  func_0x000299d1();
                  pppppppuStack_18 = (undefined2 *******)0x0;
                  pppppppuStack_1a = (undefined2 *******)0x22b2;
                  pppppppuStack_1c = (undefined2 *******)0xf449;
                  func_0x0001e558();
                  local_8 = (undefined2 *******)0x1bb4;
                  func_0x000297e6();
                  local_8 = (undefined2 *******)0x22b2;
                  FUN_28b3_100d();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029bb5();
                  local_8 = (undefined2 *******)0x22b2;
                  func_0x00029983();
                  goto LAB_3ab8_48ee;
                }
              }
              *(int *)0xa6c = (int)local_1116;
            }
            else {
              pppppuVar4 = local_bd2[(int)local_e44 * 4 + 1];
              *(undefined2 *)0xbe8 = local_bd2[(int)local_e44 * 4];
              *(undefined2 *)0xbea = pppppuVar4;
              pppppuVar4 = local_e32[(int)local_e44 * 4 + 1];
              *(undefined2 *)0xbf8 = local_e32[(int)local_e44 * 4];
              *(undefined2 *)0xbfa = pppppuVar4;
              pppppuVar4 = local_bd2[(int)local_e44 * 4 + 3];
              *(undefined2 *)0xbf0 = local_bd2[(int)local_e44 * 4 + 2];
              *(undefined2 *)0xbf2 = pppppuVar4;
              pppppuVar4 = local_e32[(int)local_e44 * 4 + 3];
              *(undefined2 *)0xc00 = local_e32[(int)local_e44 * 4 + 2];
              *(undefined2 *)0xc02 = pppppuVar4;
              local_8 = local_ec2;
              local_c = local_eb0;
              pppppppuStack_e = local_eb2;
              pppppppuStack_10 = local_eb4;
              pppppppuStack_12 = local_eb6;
              pppppppuStack_14 = local_e38;
              pppppppuStack_16 = local_e3a;
              pppppppuStack_18 = (undefined2 *******)local_9c4[(int)local_e44];
              pppppppuStack_1a = (undefined2 *******)local_10f8[(int)local_e44];
              pppppppuStack_1c = (undefined2 *******)local_1068[(int)local_e44];
              pppppppuStack_1e = (undefined2 *******)*(uint *)0x458a;
              pppppppuStack_20 = (undefined2 *******)*(uint *)0x4586;
              pppppppuStack_22 = (undefined2 *******)local_926[(int)local_e44 * 2 + 1];
              pppppppuStack_24 = (undefined2 *******)local_926[(int)local_e44 * 2];
              pppppppuStack_26 = (undefined2 *******)local_690[(int)local_e44 * 2 + 1];
              pppppppuStack_2a = &local_944;
              pppppppuStack_2c = &local_92c;
              pppppppuStack_30 = (undefined2 *******)0xf588;
              pppppppuStack_2e = pppppppuVar14;
              FUN_3ab8_1a0e();
            }
            local_e44 = (undefined2 *******)((int)local_e44 + 1);
          } while( true );
        }
      }
    } while( true );
  }
  uVar9 = (int)local_fde[(int)local_e44 * 2] >> 0xf;
  if ((10000 < (int)(((uint)local_fde[(int)local_e44 * 2] ^ uVar9) - uVar9)) ||
     (uVar9 = (int)local_fde[(int)local_e44 * 2 + 1] >> 0xf,
     10000 < (int)(((uint)local_fde[(int)local_e44 * 2 + 1] ^ uVar9) - uVar9))) {
    local_92a = 1;
    goto LAB_3ab8_2e2c;
  }
  local_e44 = (undefined2 *******)((int)local_e44 + 1);
  goto LAB_3ab8_2df8;
LAB_3ab8_4396:
  pppppppuVar16 = (undefined2 *******)0x22b2;
  goto LAB_3ab8_3e0c;
LAB_3ab8_43f8:
  if (local_111a[0] != (undefined2 *****)0x0) {
    local_8 = pppppppuVar14;
    func_0x0000abfa();
    pppppppuVar14 = (undefined2 *******)0x885;
    goto LAB_3ab8_2eee;
  }
  goto LAB_3ab8_3dcd;
}



/* 3ab8:4a80  FUN_3ab8_4a80  245 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_4a80(void)

{
  undefined2 unaff_DS;
  int in_stack_0000000c;
  undefined2 local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x3ab8;
  local_6 = 0xf60b;
  FUN_21f2_0ebc();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xf614;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xf61d;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xf622;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xf62a;
  FUN_28b3_112c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xf632;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xf63a;
  func_0x00029834();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xf642;
  func_0x0002996b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xf64a;
  FUN_28b3_0ee9();
  if (in_stack_0000000c == -1) {
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf658;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf65d;
    func_0x00029d78();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf665;
    func_0x00029bfc();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf66d;
    func_0x00029983();
  }
  if (in_stack_0000000c == 1) {
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf67b;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf680;
    func_0x00029d78();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf689;
    func_0x00029c2c();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf691;
    func_0x00029bb5();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf699;
    func_0x00029983();
  }
  if (in_stack_0000000c == 2) {
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf6a7;
    func_0x000297e6();
    local_4 = &local_6;
    local_6 = 0x22b2;
    func_0x00029b55();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf6b6;
    func_0x00029983();
  }
  if (in_stack_0000000c == 3) {
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf6c4;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf6cc;
    FUN_28b3_100d();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf6d1;
    func_0x00029d78();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf6d9;
    func_0x00029bfc();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0xf6e1;
    func_0x00029983();
  }
  *(undefined2 *)0x7a2a = local_6;
  *(undefined2 *)0x7a2c = local_4;
  return 0x7a2a;
}



/* 3ab8:4b75  FUN_3ab8_4b75  280 bytes, 0 callers */

void FUN_3ab8_4b75(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  undefined2 in_stack_00000022;
  undefined2 in_stack_00000024;
  int in_stack_00000026;
  int in_stack_00000028;
  uint in_stack_0000002e;
  undefined2 *in_stack_00000042;
  undefined2 *in_stack_00000044;
  undefined2 *in_stack_00000046;
  undefined2 *in_stack_00000048;
  undefined2 uVar4;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 **local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x3ab8;
  local_6 = (undefined2 **)0xf700;
  FUN_21f2_0ebc();
  iVar1 = ((in_stack_0000002e ^ (int)in_stack_0000002e >> 0xf) - ((int)in_stack_0000002e >> 0xf)) +
          -1;
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf717;
  FUN_28b3_0d8b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf726;
  FUN_28b3_0d8b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf72b;
  FUN_28b3_1172();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf733;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf738;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf740;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf745;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf74d;
  func_0x00029c2c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf752;
  FUN_28b3_117c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf75a;
  func_0x00029b85();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf762;
  func_0x0002996b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf76a;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf772;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf777;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2,in_stack_00000022);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_3ab8_4a80();
  if (in_stack_00000026 != 0) {
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xf7eb;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xf7f0;
    func_0x00029af6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xf7f8;
    func_0x00029983();
  }
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf800;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf809;
  func_0x00029bb5();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf812;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf817;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf81c;
  uVar2 = FUN_28b3_0f51();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf827;
  FUN_28b3_0d8b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf82f;
  func_0x0002996b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf837;
  FUN_28b3_0ee9();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf83f;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf848;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf850;
  func_0x00029bb5();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf855;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf85d;
  func_0x00029c2c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf865;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf86d;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf875;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf87a;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf87f;
  FUN_28b3_117c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf887;
  func_0x00029b85();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf88f;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf897;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf89c;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  uVar4 = 0xf8ca;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,iVar1,uVar2,uVar4);
  func_0x000297e6(0x22b2,in_stack_00000024);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar3 = (undefined2 *)FUN_3ab8_4a80();
  uStack_a = *puVar3;
  uStack_8 = puVar3[1];
  if (in_stack_00000028 != 0) {
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xf910;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xf915;
    func_0x00029af6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xf91d;
    func_0x00029983();
  }
  local_4 = &uStack_a;
  local_6 = &local_6;
  uStack_8 = 0;
  uStack_a = 0x22b2;
  FUN_1def_0338();
  local_4 = (undefined2 *)0x1bb4;
  local_6 = (undefined2 **)0xf938;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf93d;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar3 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
  uVar2 = puVar3[1];
  *in_stack_00000042 = *puVar3;
  in_stack_00000042[1] = uVar2;
  local_4 = (undefined2 *)0x1bb4;
  local_6 = (undefined2 **)0xf980;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf985;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  uVar4 = 0xf9ae;
  puVar3 = (undefined2 *)func_0x0001e558(0x22b2,0);
  uVar2 = puVar3[1];
  *in_stack_00000044 = *puVar3;
  in_stack_00000044[1] = uVar2;
  local_4 = (undefined2 *)0x1bb4;
  local_6 = (undefined2 **)0xf9cf;
  FUN_28b3_0d8b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf9de;
  FUN_28b3_0d8b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf9e3;
  FUN_28b3_1172();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf9eb;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf9f0;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf9f8;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xf9fd;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfa05;
  func_0x00029c2c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfa0a;
  FUN_28b3_117c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfa12;
  func_0x00029b85();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfa1a;
  func_0x0002996b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfa22;
  FUN_28b3_0ee9();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfa2a;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfa2f;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  uVar2 = 0xfa5d;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,iVar1,uVar4,uVar2);
  func_0x000297e6(0x22b2,in_stack_00000022);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_3ab8_4a80();
  if (in_stack_00000026 != 0) {
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xfaa3;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xfaa8;
    func_0x00029af6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xfab0;
    func_0x00029983();
  }
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfab8;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfac1;
  func_0x00029bb5();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfaca;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfacf;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfad4;
  uVar2 = FUN_28b3_0f51();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfadf;
  FUN_28b3_0d8b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfae7;
  func_0x0002996b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfaef;
  FUN_28b3_0ee9();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfaf7;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb00;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb08;
  func_0x00029bb5();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb0d;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb15;
  func_0x00029c2c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb1d;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb25;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb2d;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb32;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb37;
  FUN_28b3_117c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb3f;
  func_0x00029b85();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb47;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb4f;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfb54;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  uVar4 = 0xfb82;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,iVar1,uVar2,uVar4);
  func_0x000297e6(0x22b2,in_stack_00000024);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar3 = (undefined2 *)FUN_3ab8_4a80();
  uStack_a = *puVar3;
  uStack_8 = puVar3[1];
  if (in_stack_00000028 != 0) {
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xfbc8;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xfbcd;
    func_0x00029af6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 **)0xfbd5;
    func_0x00029983();
  }
  local_4 = &uStack_a;
  local_6 = &local_6;
  uStack_8 = 0;
  uStack_a = 0x22b2;
  FUN_1def_0338();
  local_4 = (undefined2 *)0x1bb4;
  local_6 = (undefined2 **)0xfbf0;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfbf5;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar3 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
  uVar2 = puVar3[1];
  *in_stack_00000046 = *puVar3;
  in_stack_00000046[1] = uVar2;
  local_4 = (undefined2 *)0x1bb4;
  local_6 = (undefined2 **)0xfc38;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xfc3d;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar3 = (undefined2 *)func_0x0001e558(0x22b2,0);
  uVar2 = puVar3[1];
  *in_stack_00000048 = *puVar3;
  in_stack_00000048[1] = uVar2;
  return;
}



/* 3ab8:4c91  FUN_3ab8_4c91  1126 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4c91(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar1 = FUN_28b3_0f51(0x3ab8);
  *(undefined2 *)(unaff_BP + -0x16) = uVar1;
  FUN_28b3_0d8b(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_0ee9(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x00029b85(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2,*(undefined2 *)(unaff_BP + 0x26));
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar2 = (undefined2 *)FUN_3ab8_4a80();
  uVar1 = puVar2[1];
  *(undefined2 *)(unaff_BP + -8) = *puVar2;
  *(undefined2 *)(unaff_BP + -6) = uVar1;
  if (*(int *)(unaff_BP + 0x2a) != 0) {
    func_0x000297e6(0x22b2);
    func_0x00029af6(0x22b2);
    func_0x00029983(0x22b2);
  }
  uVar5 = 0;
  uVar4 = 0x22b2;
  FUN_1def_0338(0x22b2,0,unaff_BP + -4,unaff_BP + -8);
  func_0x000297e6(0x1bb4);
  uVar1 = 0xf93d;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar4,uVar5,uVar1);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar3 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
  uVar1 = puVar3[1];
  puVar2 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x44);
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  func_0x000297e6(0x1bb4);
  uVar1 = 0xf985;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar4,uVar5,uVar1);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar3 = (undefined2 *)func_0x0001e558(0x22b2,0);
  uVar1 = puVar3[1];
  puVar2 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x46);
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  *(int *)(unaff_BP + -0x1e) = *(int *)(unaff_BP + 0x32) + -1;
  FUN_28b3_0d8b(0x1bb4);
  *(int *)(unaff_BP + -0x1a) = *(int *)(unaff_BP + 6) + -1;
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_1172(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x00029c2c(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x00029b85(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_0ee9(0x22b2);
  func_0x000297e6(0x22b2);
  uVar1 = 0xfa2f;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar4,uVar5,uVar1);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2,*(undefined2 *)(unaff_BP + 0x24));
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar2 = (undefined2 *)FUN_3ab8_4a80();
  uVar1 = puVar2[1];
  *(undefined2 *)(unaff_BP + -4) = *puVar2;
  *(undefined2 *)(unaff_BP + -2) = uVar1;
  if (*(int *)(unaff_BP + 0x28) != 0) {
    func_0x000297e6(0x22b2);
    func_0x00029af6(0x22b2);
    func_0x00029983(0x22b2);
  }
  func_0x000297e6(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029d78(0x22b2);
  uVar1 = FUN_28b3_0f51(0x22b2);
  *(undefined2 *)(unaff_BP + -0x16) = uVar1;
  FUN_28b3_0d8b(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_0ee9(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x00029b85(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  uVar1 = 0xfb54;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar4,uVar5,uVar1);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2,*(undefined2 *)(unaff_BP + 0x26));
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar2 = (undefined2 *)FUN_3ab8_4a80();
  uVar1 = puVar2[1];
  *(undefined2 *)(unaff_BP + -8) = *puVar2;
  *(undefined2 *)(unaff_BP + -6) = uVar1;
  if (*(int *)(unaff_BP + 0x2a) != 0) {
    func_0x000297e6(0x22b2);
    func_0x00029af6(0x22b2);
    func_0x00029983(0x22b2);
  }
  uVar5 = 0;
  uVar4 = 0x22b2;
  FUN_1def_0338(0x22b2,0,unaff_BP + -4,unaff_BP + -8);
  func_0x000297e6(0x1bb4);
  uVar1 = 0xfbf5;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar4,uVar5,uVar1);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar3 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
  uVar1 = puVar3[1];
  puVar2 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x48);
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  func_0x000297e6(0x1bb4);
  uVar1 = 0xfc3d;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar4,uVar5,uVar1);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar3 = (undefined2 *)func_0x0001e558(0x22b2,0);
  uVar1 = puVar3[1];
  puVar2 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x4a);
  *puVar2 = *puVar3;
  puVar2[1] = uVar1;
  return;
}



/* 3ab8:50f9  FUN_3ab8_50f9  134 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_50f9(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined4 uVar7;
  int in_stack_0000000c;
  int in_stack_0000000e;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000016;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000002c;
  undefined2 in_stack_0000002e;
  undefined2 in_stack_00000030;
  undefined2 *in_stack_00000032;
  undefined1 auStack_2e [2];
  undefined4 local_2c;
  int iStack_28;
  int iStack_26;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  
  FUN_21f2_0ebc();
  local_22 = in_stack_00000014;
  local_20 = in_stack_00000016;
  local_1e = in_stack_00000018;
  local_1c = in_stack_0000001a;
  puStack_a = (undefined1 *)0xfca6;
  func_0x000297e6();
  puStack_a = (undefined1 *)0xfcaf;
  func_0x00029b6d();
  puStack_a = (undefined1 *)0xfcb4;
  func_0x00029d78();
  puStack_a = (undefined1 *)0xfcb9;
  puStack_a = (undefined1 *)FUN_28b3_0f51();
  uStack_c = 0x22b2;
  local_10._2_2_ = 0xfcc0;
  local_14 = func_0x00021eee();
  puStack_a = (undefined1 *)0xfcd0;
  func_0x000297e6();
  puStack_a = (undefined1 *)0xfcd9;
  func_0x00029b6d();
  puStack_a = (undefined1 *)0xfcde;
  func_0x00029d78();
  puStack_a = (undefined1 *)0xfce3;
  local_2c = FUN_28b3_0f51();
  puStack_a = (undefined1 *)local_2c;
  uStack_c = 0x22b2;
  local_10._2_2_ = 0xfcf0;
  uVar7 = func_0x00021eee();
  local_10._0_2_ = (int)uVar7;
  if (in_stack_0000000c != 0) {
    iVar3 = -(int)local_14;
    iStack_28 = -(int)local_10;
    iStack_26 = (0xb4 - (int)((ulong)uVar7 >> 0x10)) - (uint)((int)local_10 != 0);
    uStack_c = 0x1bb4;
    local_10._2_2_ = 0xfd27;
    puStack_a = (undefined1 *)iStack_28;
    uVar7 = func_0x00021eee();
    uStack_c = 0x1bb4;
    local_10._2_2_ = 0xfd3a;
    puStack_a = (undefined1 *)iVar3;
    local_14 = uVar7;
    uVar7 = func_0x00021eee();
  }
  local_10._2_2_ = (int)((ulong)uVar7 >> 0x10);
  local_10._0_2_ = (int)uVar7;
  if (in_stack_0000000e != 0) {
    iVar3 = -(int)local_14;
    iStack_28 = -(int)local_10;
    iStack_26 = -(local_10._2_2_ + (uint)((int)local_10 != 0));
    uStack_c = 0x1bb4;
    local_10._2_2_ = 0xfd75;
    puStack_a = (undefined1 *)iStack_28;
    uVar7 = func_0x00021eee();
    uStack_c = 0x1bb4;
    local_10._2_2_ = 0xfd88;
    puStack_a = (undefined1 *)iVar3;
    local_14 = uVar7;
    uVar7 = func_0x00021eee();
  }
  local_2c._2_2_ = 0;
  local_2c._0_2_ = 0;
  local_2c = 0;
  uVar6 = 0;
  local_10 = uVar7;
  if (*(int *)0xcb6 != 0) {
    puStack_a = (undefined1 *)0xfda7;
    func_0x000297e6();
    puStack_a = (undefined1 *)0xfdb0;
    func_0x00029b6d();
    puStack_a = (undefined1 *)0xfdb5;
    func_0x00029d78();
    puStack_a = (undefined1 *)0xfdba;
    local_2c = FUN_28b3_0f51();
  }
  puStack_a = (undefined1 *)0xfdc9;
  func_0x000297e6();
  puStack_a = (undefined1 *)0xfdd1;
  func_0x00029b6d();
  puStack_a = (undefined1 *)0xfdd9;
  func_0x000298b4();
  puStack_a = (undefined1 *)0xfdde;
  FUN_28b3_117c();
  puStack_a = (undefined1 *)0xfde3;
  func_0x00029d78();
  puStack_a = (undefined1 *)0xfde8;
  uVar7 = FUN_28b3_0f51();
  puStack_a = (undefined1 *)uVar7;
  uStack_c = 0x22b2;
  local_10._2_2_ = 0xfdf5;
  local_2c = uVar7;
  uStack_c = func_0x00021eee();
  puStack_a = (undefined1 *)0xfe05;
  func_0x000297e6();
  puStack_a = (undefined1 *)0xfe0e;
  func_0x000297e6();
  puStack_a = (undefined1 *)0xfe13;
  FUN_28b3_1181();
  if ((bool)uVar6) {
    puStack_a = (undefined1 *)0xfe1d;
    func_0x000297e6();
    puStack_a = (undefined1 *)0xfe22;
    func_0x00029d78();
    puStack_a = (undefined1 *)0xfe2a;
    func_0x00029b85();
    puStack_a = (undefined1 *)0xfe32;
    func_0x00029c2c();
  }
  else {
    puStack_a = (undefined1 *)0xfe3c;
    func_0x000297e6();
    puStack_a = (undefined1 *)0xfe41;
    func_0x00029af6();
    puStack_a = (undefined1 *)0xfe49;
    func_0x00029b6d();
    puStack_a = (undefined1 *)0xfe51;
    func_0x00029bb5();
    puStack_a = (undefined1 *)0xfe59;
    func_0x00029b85();
  }
  puStack_a = (undefined1 *)0xfe61;
  func_0x00029983();
  puStack_a = (undefined1 *)0xfe69;
  func_0x000297e6();
  puStack_a = (undefined1 *)0xfe72;
  func_0x000297e6();
  puStack_a = (undefined1 *)0xfe77;
  FUN_28b3_1181();
  if ((bool)uVar6) {
    uStack_16 = 10000;
    puStack_a = auStack_2e;
    uStack_c = in_stack_00000030;
    local_10._2_2_ = in_stack_0000002e;
    local_10._0_2_ = in_stack_0000002c;
    local_14._2_2_ = 0x22b2;
    local_14._0_2_ = 0xfe98;
    FUN_3ab8_0d7d();
    puVar5 = &local_22;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = in_stack_00000032;
      in_stack_00000032 = in_stack_00000032 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0xffff;
  }
  return uVar4;
}



/* 3ab8:517f  FUN_3ab8_517f  448 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_517f(void)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined2 in_AX;
  int iVar5;
  int in_DX;
  int iVar6;
  int unaff_BP;
  int unaff_SI;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined4 uVar11;
  
  pcVar1 = (char *)(unaff_BP + unaff_SI + 0xb4);
  cVar4 = *pcVar1;
  *pcVar1 = *pcVar1 >> 0xb;
  out(in_DX,(char)in_AX);
  iVar5 = *(int *)(unaff_BP + -0x10);
  *(undefined2 *)(unaff_BP + -0x30) = in_AX;
  *(int *)(unaff_BP + -0x2e) = (in_DX - iVar5) - (uint)((cVar4 >> 10 & 1U) != 0);
  iVar5 = -*(int *)(unaff_BP + -0xe);
  iVar6 = (0xb4 - *(int *)(unaff_BP + -0xc)) - (uint)(*(int *)(unaff_BP + -0xe) != 0);
  *(int *)(unaff_BP + -0x26) = iVar5;
  *(int *)(unaff_BP + -0x24) = iVar6;
  uVar11 = func_0x00021eee(0x3ab8,iVar5,iVar6);
  *(undefined2 *)(unaff_BP + -0x12) = (int)uVar11;
  *(undefined2 *)(unaff_BP + -0x10) = (int)((ulong)uVar11 >> 0x10);
  uVar11 = func_0x00021eee(0x1bb4,*(undefined2 *)(unaff_BP + -0x30),
                           *(undefined2 *)(unaff_BP + -0x2e));
  *(undefined2 *)(unaff_BP + -0xe) = (int)uVar11;
  *(undefined2 *)(unaff_BP + -0xc) = (int)((ulong)uVar11 >> 0x10);
  if (*(int *)(unaff_BP + 0x10) != 0) {
    iVar5 = *(int *)(unaff_BP + -0x12);
    iVar6 = *(int *)(unaff_BP + -0x10);
    *(int *)(unaff_BP + -0x30) = -iVar5;
    *(int *)(unaff_BP + -0x2e) = -(iVar6 + (uint)(iVar5 != 0));
    iVar5 = -*(int *)(unaff_BP + -0xe);
    iVar6 = -(*(int *)(unaff_BP + -0xc) + (uint)(*(int *)(unaff_BP + -0xe) != 0));
    *(int *)(unaff_BP + -0x26) = iVar5;
    *(int *)(unaff_BP + -0x24) = iVar6;
    uVar11 = func_0x00021eee(0x1bb4,iVar5,iVar6);
    *(undefined2 *)(unaff_BP + -0x12) = (int)uVar11;
    *(undefined2 *)(unaff_BP + -0x10) = (int)((ulong)uVar11 >> 0x10);
    uVar11 = func_0x00021eee(0x1bb4,*(undefined2 *)(unaff_BP + -0x30),
                             *(undefined2 *)(unaff_BP + -0x2e));
    *(undefined2 *)(unaff_BP + -0xe) = (int)uVar11;
    *(undefined2 *)(unaff_BP + -0xc) = (int)((ulong)uVar11 >> 0x10);
  }
  uVar9 = 0x1bb4;
  *(undefined2 *)(unaff_BP + -0x28) = 0;
  *(undefined2 *)(unaff_BP + -0x2a) = 0;
  uVar10 = 0;
  if (*(int *)0xcb6 != 0) {
    func_0x000297e6(0x1bb4);
    func_0x00029b6d(0x22b2);
    func_0x00029d78(0x22b2);
    uVar9 = 0x22b2;
    uVar11 = FUN_28b3_0f51(0x22b2);
    *(undefined2 *)(unaff_BP + -0x2a) = (int)uVar11;
    *(undefined2 *)(unaff_BP + -0x28) = (int)((ulong)uVar11 >> 0x10);
  }
  func_0x000297e6(uVar9);
  func_0x00029b6d(0x22b2);
  func_0x000298b4(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x00029d78(0x22b2);
  uVar11 = FUN_28b3_0f51(0x22b2);
  *(undefined2 *)(unaff_BP + -0x2a) = (int)uVar11;
  *(undefined2 *)(unaff_BP + -0x28) = (int)((ulong)uVar11 >> 0x10);
  uVar11 = func_0x00021eee(0x22b2,uVar11);
  *(undefined2 *)(unaff_BP + -10) = (int)uVar11;
  *(undefined2 *)(unaff_BP + -8) = (int)((ulong)uVar11 >> 0x10);
  func_0x000297e6(0x1bb4);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar10) {
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x00029b85(0x22b2);
    func_0x00029c2c(0x22b2);
  }
  else {
    func_0x000297e6(0x22b2);
    func_0x00029af6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029bb5(0x22b2);
    func_0x00029b85(0x22b2);
  }
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar10) {
    *(undefined2 *)(unaff_BP + -0x14) = 10000;
    uVar10 = FUN_3ab8_0d7d(*(undefined2 *)(unaff_BP + 0x2e),*(undefined2 *)(unaff_BP + 0x30),
                           *(undefined2 *)(unaff_BP + 0x32),unaff_BP + -0x2c,unaff_BP + -0x22);
    *(undefined1 *)(unaff_BP + -5) = uVar10;
    *(undefined1 *)(unaff_BP + -6) = *(undefined1 *)(unaff_BP + -0x2c);
    *(undefined1 *)(unaff_BP + -4) = *(undefined1 *)(unaff_BP + -0x22);
    puVar7 = (undefined2 *)(unaff_BP + -0x20);
    puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x34);
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    uVar9 = 1;
  }
  else {
    uVar9 = 0xffff;
  }
  return uVar9;
}



/* 3ab8:5340  FUN_3ab8_5340  2204 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

uint * __cdecl16far
FUN_3ab8_5340(int *param_1,int ***param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  byte *pbVar1;
  int **ppiVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  bool bVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *unaff_SI;
  int **ppiVar9;
  undefined2 *unaff_DI;
  undefined2 ****ppppuVar10;
  undefined2 unaff_ES;
  int ***pppiVar11;
  undefined2 ***pppuVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
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
  int *in_stack_0000002c;
  undefined2 ***in_stack_0000002e;
  undefined2 in_stack_00000030;
  uint *in_stack_00000032;
  undefined2 in_stack_00000034;
  undefined2 in_stack_00000036;
  undefined2 in_stack_00000038;
  undefined2 *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  undefined2 *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  undefined2 in_stack_00000042;
  int local_164;
  uint local_162;
  int **local_158;
  undefined2 local_156;
  undefined2 local_150 [8];
  undefined2 *local_140;
  undefined2 local_13e;
  byte local_13c;
  undefined1 local_13b;
  byte local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  int ***pppiStack_be;
  undefined2 ***pppuStack_bc;
  int **ppiStack_ba;
  int ***pppiStack_b8;
  int **local_8e;
  int *local_8c;
  int *local_8a;
  int local_88;
  int local_86;
  undefined1 local_84 [4];
  undefined2 **local_80;
  undefined2 **local_7e [3];
  int ***local_78;
  int **local_74;
  int local_72;
  int **local_70 [2];
  undefined2 ***pppuStack_6c;
  int **local_6a;
  undefined2 local_68;
  undefined2 ***local_66;
  undefined2 **ppuStack_64;
  int ***pppiStack_62;
  undefined2 local_5e;
  int **local_5c;
  undefined2 local_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  int iStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  undefined2 ***local_4a;
  undefined2 local_48;
  int local_46;
  undefined2 local_44;
  undefined2 *local_42;
  undefined2 local_40;
  undefined2 **local_3e;
  undefined2 ***local_3c;
  undefined2 local_3a;
  uint *local_38;
  undefined2 uStack_36;
  undefined2 *puStack_34;
  undefined2 *puStack_32;
  undefined2 *puStack_30;
  int **ppiStack_2e;
  int ***pppiStack_2c;
  int **ppiStack_2a;
  int ***pppiStack_26;
  undefined2 ***pppuStack_24;
  int **ppiStack_22;
  int ***pppiStack_1e;
  undefined1 *puStack_1c;
  int ****ppppiStack_1a;
  undefined2 *local_18;
  uint ***local_16;
  undefined2 ***local_14;
  undefined2 ****local_12;
  int ***local_10;
  int ***local_e;
  undefined2 ***local_c;
  int ****local_a;
  uint ***local_8;
  
  FUN_21f2_0ebc();
  local_4c = *(undefined2 *)0x9c24;
  local_4a = (undefined2 ***)*(undefined2 *)0x9c26;
  local_8 = (uint ***)param_2;
  local_a = (int ****)param_1;
  local_c = (undefined2 ***)0x22b2;
  local_e = (undefined2 ***)0xfee4;
  iVar6 = FUN_3ab8_01db();
  if (-1 < iVar6) {
    local_5e = 0;
    local_80 = (undefined2 **)0x0;
    while( true ) {
      do {
        do {
          local_8 = (uint ***)&local_c;
          local_a = (int ****)&local_8;
          local_c = &local_80;
          local_e = &local_74;
          local_10 = (int ***)&local_18;
          local_12 = &local_e;
          local_14 = (undefined2 ***)&local_44;
          local_16 = (uint ***)&local_3c;
          local_18 = &local_40;
          ppppiStack_1a = (int ****)&local_16;
          puStack_1c = local_84;
          pppiStack_1e = local_7e;
          ppiStack_22 = (int **)0x22b2;
          pppuStack_24 = (undefined2 ***)0xff3e;
          local_86 = FUN_3ab8_038e();
        } while (*(char *)0xbf48 == 'S');
      } while (*(char *)0xbf48 == 's');
      uVar13 = 0;
      if (local_86 < 0) break;
      local_8 = (uint ***)0x22b2;
      local_a = (int ****)0xff62;
      func_0x000297e6();
      local_8 = (uint ***)0x22b2;
      local_a = (int ****)0xff6b;
      func_0x000297e6();
      local_8 = (uint ***)0x22b2;
      local_a = (int ****)0xff70;
      FUN_28b3_1181();
      if ((bool)uVar13) {
        local_8 = (uint ***)0x22b2;
        local_a = (int ****)0xff7b;
        func_0x000297e6();
        local_8 = (uint ***)0x22b2;
        local_a = (int ****)0xff83;
        func_0x000297e6();
        local_8 = (uint ***)0x22b2;
        local_a = (int ****)0xff88;
        FUN_28b3_1181();
        if (!(bool)uVar13) {
          local_10 = (int ***)*(undefined2 *)0xd70;
          local_12 = (undefined2 ****)0x22b2;
          local_14 = (undefined2 ***)0xff93;
          FUN_21f2_1262();
          *(undefined2 *)0xd70 = 0;
          goto LAB_2bb4_4c2f;
        }
        local_10 = (int ***)local_5e;
        local_12 = (undefined2 ****)0x22b2;
        local_14 = (undefined2 ***)0xffa6;
        FUN_3ab8_0361();
        local_10 = (int ***)0x22b2;
        local_12 = (undefined2 ****)0xffb0;
        func_0x000297e6();
        local_10 = (int ***)0x22b2;
        local_12 = (undefined2 ****)0xffb5;
        func_0x00029d78();
        local_10 = (int ***)0x22b2;
        local_12 = (undefined2 ****)0xffbe;
        func_0x00029c74();
        local_10 = (int ***)0x22b2;
        local_12 = (undefined2 ****)0xffc3;
        local_48 = FUN_28b3_0f51();
        local_10 = (int ***)0x22b2;
        local_12 = (undefined2 ****)0xffce;
        func_0x000297e6();
        local_10 = (int ***)0x22b2;
        local_12 = (undefined2 ****)0xffd3;
        func_0x00029d78();
        local_10 = (int ***)0x22b2;
        local_12 = (undefined2 ****)0xffdc;
        func_0x00029c74();
        local_10 = (int ***)0x22b2;
        local_12 = (undefined2 ****)0xffe1;
        local_46 = FUN_28b3_0f51();
        if (local_46 != 500) {
          if (local_46 == 700) {
            halt_baddata();
          }
          if (local_46 == 0x2ee) {
            halt_baddata();
          }
          if (local_46 == 0x2ef) {
            halt_baddata();
          }
          local_8 = (uint ***)0x22b2;
          local_a = (int ****)0x30;
          func_0x000297e6();
          local_8 = (uint ***)0x22b2;
          local_a = (int ****)0x35;
          func_0x00029d78();
          local_10 = (int ***)0x22b2;
          local_12 = (undefined2 ****)0x3f;
          func_0x000299d1();
          local_10 = local_70;
          local_12 = &local_66;
          pppuStack_24 = &local_6a;
          pppiStack_26 = &local_5c;
          local_18 = local_42;
          ppppiStack_1a = (int ****)local_44;
          puStack_1c = (undefined1 *)local_3a;
          pppiStack_1e = local_3c;
          ppiStack_22 = (int **)local_40;
          ppiStack_2a = (int **)local_46;
          pppiStack_2c = (int ***)in_stack_00000042;
          ppiStack_2e = (int **)in_stack_00000040;
          puStack_30 = in_stack_0000003a;
          puStack_32 = (undefined2 *)in_stack_00000038;
          puStack_34 = (undefined2 *)in_stack_00000036;
          uStack_36 = in_stack_00000034;
          local_38 = in_stack_00000032;
          local_3a = in_stack_00000030;
          local_3c = in_stack_0000002e;
          local_3e = (undefined2 **)in_stack_0000002c;
          local_40 = in_stack_0000002a;
          local_42 = (undefined2 *)in_stack_00000028;
          local_44 = in_stack_00000026;
          local_46 = in_stack_00000024;
          local_48 = in_stack_00000022;
          local_4a = (undefined2 ***)in_stack_00000020;
          local_4c = in_stack_0000001e;
          uStack_4e = in_stack_0000001c;
          uStack_50 = in_stack_0000001a;
          uStack_52 = in_stack_00000018;
          uStack_56 = 0x22b2;
          uStack_58 = 0xb0;
          iStack_54 = iVar6;
          local_16 = (uint ***)pppiStack_26;
          local_14 = pppuStack_24;
          FUN_4375_bfa5();
          local_8 = (uint ***)0x22b2;
          local_a = (int ****)0xbb;
          func_0x000297e6();
          local_8 = (uint ***)&local_5c;
          local_a = (int ****)0x22b2;
          local_c = (undefined2 ***)0xc4;
          func_0x00029bb5();
          local_8 = (uint ***)0x22b2;
          local_a = (int ****)0xca;
          func_0x00029983();
          local_8 = (uint ***)0x22b2;
          local_a = (int ****)0xd2;
          func_0x000297e6();
          local_8 = (uint ***)&local_66;
          local_a = (int ****)0x22b2;
          local_c = (undefined2 ***)0xdb;
          func_0x00029bb5();
          local_8 = (uint ***)0x22b2;
          local_a = (int ****)0xe1;
          func_0x00029983();
          local_8 = (uint ***)0x22b2;
          local_a = (int ****)0xe9;
          func_0x000297e6();
          local_8 = (uint ***)&local_6a;
          local_a = (int ****)0x22b2;
          local_c = (undefined2 ***)0xf2;
          func_0x00029bb5();
          local_8 = (uint ***)0x22b2;
          local_a = (int ****)0xf8;
          func_0x00029983();
          local_8 = (uint ***)0x22b2;
          local_a = (int ****)0x100;
          func_0x000297e6();
          local_8 = (uint ***)local_70;
          local_a = (int ****)0x22b2;
          local_c = (undefined2 ***)0x109;
          func_0x00029bb5();
          local_8 = (uint ***)0x22b2;
          pppiVar11 = (int ***)0x22b2;
          local_a = (int ****)0x10f;
          func_0x00029983();
          if ((int)local_e < 30000) {
            uVar13 = local_e == (int ***)0x2710;
            if ((int)local_e < 10000) {
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x61c;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x624;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x629;
              FUN_28b3_1181();
              if ((bool)uVar13) {
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x633;
                func_0x000297e6();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x638;
                func_0x00029d78();
                local_10 = (int ***)0x22b2;
                local_12 = (undefined2 ****)0x642;
                func_0x000299d1();
                local_10 = (int ***)0x22b2;
                local_12 = (undefined2 ****)0x64a;
                func_0x000297e6();
                local_10 = (int ***)0x22b2;
                local_12 = (undefined2 ****)0x64f;
                func_0x00029d78();
                local_18 = (undefined2 *)0x22b2;
                ppppiStack_1a = (int ****)0x659;
                func_0x000299d1();
                local_18 = (undefined2 *)0x22b2;
                ppppiStack_1a = (int ****)0x661;
                func_0x000297e6();
                local_18 = (undefined2 *)0x22b2;
                ppppiStack_1a = (int ****)0x666;
                func_0x00029d78();
                ppiStack_22 = (int **)0x670;
                func_0x000299d1();
                ppiStack_22 = (int **)0x678;
                func_0x000297e6();
                ppiStack_22 = (int **)0x67d;
                func_0x00029d78();
                ppiStack_2a = (int **)0x687;
                func_0x000299d1();
                ppiStack_2a = (int **)local_18;
                pppiStack_2c = local_e;
                ppiStack_2e = (int **)param_3;
                puStack_30 = (undefined2 *)0x22b2;
                puStack_32 = (undefined2 *)0x697;
                FUN_4375_8239();
              }
              else {
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x6a5;
                func_0x000297e6();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x6aa;
                func_0x00029d78();
                local_10 = (int ***)0x22b2;
                local_12 = (undefined2 ****)0x6b4;
                func_0x000299d1();
                local_10 = (int ***)&local_38;
                local_12 = (undefined2 ****)local_74;
                local_14 = (undefined2 ***)local_18;
                local_16 = (uint ***)local_e;
                local_18 = local_a;
                ppppiStack_1a = (int ****)local_c;
                pppiStack_1e = (int ***)local_8;
                ppiStack_22 = (int **)local_44;
                pppuStack_24 = (undefined2 ***)local_3a;
                pppiStack_26 = local_3c;
                ppiStack_2a = local_6a;
                pppiStack_2c = (int ***)local_5a;
                ppiStack_2e = local_5c;
                puStack_30 = in_stack_0000003e;
                puStack_32 = in_stack_0000003c;
                puStack_34 = in_stack_0000003a;
                uStack_36 = in_stack_00000038;
                local_38 = in_stack_00000032;
                local_3a = in_stack_00000030;
                local_3e = local_74;
                local_40 = 0x22b2;
                local_42 = (undefined2 *)0x701;
                local_3c = local_10;
                local_72 = FUN_4375_c529();
                if (-1 < local_72) {
                  ppppuVar10 = &pppiStack_26;
                  ppiVar9 = (int **)&local_38;
                  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                    puVar4 = ppppuVar10;
                    ppppuVar10 = ppppuVar10 + 1;
                    ppiVar2 = ppiVar9;
                    ppiVar9 = ppiVar9 + 1;
                    *puVar4 = *ppiVar2;
                  }
                  ppiStack_2a = (int **)0x722;
                  iVar6 = FUN_13bf_01c1();
                  if ((iVar6 != 0) &&
                     (*param_4 = *param_4 + 1,
                     (int)(((uint)local_74 ^ (int)local_74 >> 0xf) - ((int)local_74 >> 0xf)) < 0x100
                     )) {
                    local_8 = (uint ***)*(undefined2 *)0x14e;
                    local_a = (int ****)*(undefined2 *)0x14c;
                    local_c = (undefined2 ***)0x11f2;
                    local_e = (undefined2 ***)0x74e;
                    uVar15 = func_0x00000271();
                    pbVar1 = (byte *)((int)uVar15 + 0x1e);
                    *pbVar1 = *pbVar1 | 0x80;
                  }
                }
              }
            }
            else {
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x1ed;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x1f5;
              FUN_28b3_100d();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x1fe;
              func_0x0002996b();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x207;
              func_0x00029983();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x210;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x218;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x220;
              FUN_28b3_100d();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x229;
              func_0x0002996b();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x232;
              func_0x00029b6d();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x23b;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x244;
              func_0x00029b6d();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x249;
              FUN_28b3_117c();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x24e;
              func_0x00029d78();
              local_10 = (int ***)0x22b2;
              local_12 = (undefined2 ****)0x258;
              func_0x000299d1();
              local_10 = (int ***)0x22b2;
              local_12 = (undefined2 ****)0x25d;
              FUN_28b3_1582();
              uVar13 = (undefined1 *)0xfff7 < &local_e;
              uVar14 = &stack0x0000 == (undefined1 *)0x6;
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x267;
              func_0x00029834();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x270;
              func_0x0002996b();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x275;
              FUN_28b3_1181();
              if ((bool)uVar13 || (bool)uVar14) {
LAB_3ab8_5710:
                local_8e = (int **)*(undefined2 *)0x9c24;
                local_8c = (int *)*(undefined2 *)0x9c26;
                local_158 = (int **)*(undefined2 *)0x9bf4;
                local_156 = *(undefined2 *)0x9bf6;
              }
              else {
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x280;
                func_0x000297e6();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x289;
                func_0x000297e6();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x28e;
                FUN_28b3_1181();
                if ((bool)uVar14) goto LAB_3ab8_5710;
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x2b9;
                func_0x000297e6();
                local_8 = (uint ***)&local_8e;
                local_a = (int ****)0x22b2;
                local_c = (undefined2 ***)0x2c3;
                func_0x00029b9d();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x2c9;
                func_0x00029983();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x2d2;
                func_0x000297e6();
                local_8 = (uint ***)&local_158;
                local_a = (int ****)0x22b2;
                local_c = (undefined2 ***)0x2dc;
                func_0x00029b9d();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x2e2;
                func_0x00029983();
              }
              pppuVar12 = (undefined2 ***)0x22b2;
              local_164 = -1;
              local_134._0_1_ = '\0';
              for (local_88 = 0; (local_88 < 0xa1 && (*(char *)(local_88 + -0x40b8) != '\0'));
                  local_88 = local_88 + 1) {
                if (local_164 < 0) {
                  if (*(char *)(local_88 + -0x40b8) == '\"') {
                    local_164 = 0;
                  }
                }
                else {
                  *(undefined1 *)((int)&local_134 + local_164) = *(undefined1 *)(local_88 + -0x40b8)
                  ;
                  *(undefined1 *)((int)&local_134 + local_164 + 1) = 0;
                  local_164 = local_164 + 1;
                }
              }
              if (0 < local_164) {
                *(undefined1 *)((int)&local_136 + local_164 + 1) = 0;
              }
              if ((char)local_134 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              bVar5 = 999 < (int)local_18;
              if (bVar5) {
                local_18 = local_18 + -500;
              }
              local_162 = (uint)bVar5;
              local_13c = (byte)((int)local_18 % 100);
              if ((local_13c == 0) || (10 < local_13c)) {
                local_13c = 2;
              }
              local_13e = *(undefined2 *)0xbc78;
              local_140 = &local_134;
              local_13b = *(undefined1 *)0xb310;
              local_13a = local_13a & 0xdf;
              if (local_162 != 0) {
                local_13a = local_13a | 0x20;
              }
              if (-1 < (int)local_74) {
                uVar8 = (int)*(uint *)0xb310 >> 0xf;
                local_78 = (int ***)((int)local_74 % 0x10 +
                                    (((int)((*(uint *)0xb310 ^ uVar8) - uVar8) >> 4 ^ uVar8) - uVar8
                                    ) * 0x10);
                local_a = (int ****)0x22b2;
                pppuVar12 = (undefined2 ***)0x885;
                local_c = (undefined2 ***)0x3e1;
                local_8 = (uint ***)local_78;
                iVar6 = func_0x00008854();
                if (iVar6 == 0) {
                  local_13b = local_78._0_1_;
                }
              }
              local_8 = (uint ***)(uint)local_13c;
              local_a = (int ****)local_162;
              local_c = (undefined2 ***)&local_134;
              local_10 = (int ***)0x404;
              local_e = pppuVar12;
              puVar7 = (undefined2 *)func_0x00018eff();
              local_138 = *puVar7;
              local_136 = puVar7[1];
              local_8 = (uint ***)0x18b3;
              local_a = (int ****)0x438;
              FUN_28b3_0d8b();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x441;
              func_0x00029983();
              if (local_162 != 0) {
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x451;
                FUN_28b3_0d8b();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x45a;
                func_0x00029983();
              }
              local_8a = (int *)((int)local_18 / 100);
              if (((local_8a == (int *)0x1) || (local_8a == (int *)0x4)) || (local_8a == (int *)0x7)
                 ) {
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x481;
                func_0x000297e6();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x48a;
                func_0x00029b6d();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x493;
                func_0x00029983();
              }
              if (2 < (int)local_8a) {
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x4c8;
                func_0x000297e6();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x4cd;
                func_0x00029d78();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x4d6;
                func_0x00029b85();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x4df;
                func_0x00029c2c();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x4e8;
                func_0x00029983();
              }
              if (5 < (int)local_8a) {
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x4f8;
                func_0x000297e6();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x4fd;
                func_0x00029d78();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x506;
                func_0x00029b85();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x50f;
                func_0x00029c2c();
                local_8 = (uint ***)0x22b2;
                local_a = (int ****)0x518;
                func_0x00029983();
              }
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x521;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x52a;
              func_0x00029b6d();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x533;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x53c;
              func_0x00029b6d();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x541;
              FUN_28b3_1163();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x549;
              func_0x00029bb5();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x552;
              func_0x0002996b();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x55b;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x564;
              func_0x00029b6d();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x569;
              FUN_28b3_117c();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x572;
              func_0x00029983();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x57b;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x584;
              func_0x00029b6d();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x58c;
              func_0x00029b55();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x595;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x59e;
              func_0x00029b6d();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x5a3;
              FUN_28b3_1163();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x5ac;
              func_0x0002996b();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x5b5;
              func_0x00029983();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x5be;
              func_0x000297e6();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x5c7;
              func_0x00029b6d();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x5d0;
              func_0x00029bb5();
              local_8 = (uint ***)0x22b2;
              local_a = (int ****)0x5d9;
              func_0x00029983();
              ppppuVar10 = &pppiStack_1e;
              puVar7 = local_150;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar3 = ppppuVar10;
                ppppuVar10 = ppppuVar10 + 1;
                puVar4 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar3 = *puVar4;
              }
              ppiStack_22 = (int **)0x5ee;
              iVar6 = func_0x0001b198();
              if (iVar6 != 0) {
                *param_6 = *param_6 + 1;
                local_8 = (uint ***)*(undefined2 *)0x150;
                local_a = (int ****)0x18b3;
                local_c = (undefined2 ***)0x606;
                uVar15 = func_0x00000398();
                pbVar1 = (byte *)((int)uVar15 + 0x17);
                *pbVar1 = *pbVar1 | 0x20;
              }
            }
          }
          else {
            local_88 = *(undefined2 *)0x1d0;
            local_8a = (int *)*(undefined2 *)0xb310;
            if ((0 < (int)local_18) && ((int)local_18 < 8)) {
              *(int *)0x1d0 = (int)local_18;
            }
            if (-1 < (int)local_74) {
              uVar8 = (int)*(uint *)0xb310 >> 0xf;
              local_78 = (int ***)((int)local_74 % 0x10 +
                                  (((int)((*(uint *)0xb310 ^ uVar8) - uVar8) >> 4 ^ uVar8) - uVar8)
                                  * 0x10);
              local_a = (int ****)0x22b2;
              pppiVar11 = (int ***)0x885;
              local_c = (undefined2 ***)0x16a;
              local_8 = (uint ***)local_78;
              iVar6 = func_0x00008854();
              if (iVar6 == 0) {
                *(int *)0xb310 = (int)local_78;
              }
            }
            local_a = (int ****)0x17d;
            local_8 = (uint ***)pppiVar11;
            func_0x000297e6();
            local_8 = (uint ***)0x22b2;
            local_a = (int ****)0x182;
            func_0x00029d78();
            local_10 = (int ***)0x22b2;
            local_12 = (undefined2 ****)0x18c;
            func_0x000299d1();
            local_10 = (int ***)0x22b2;
            local_12 = (undefined2 ****)0x194;
            func_0x000297e6();
            local_10 = (int ***)0x22b2;
            local_12 = (undefined2 ****)0x199;
            func_0x00029d78();
            local_18 = (undefined2 *)0x22b2;
            ppppiStack_1a = (int ****)0x1a3;
            func_0x000299d1();
            local_18 = (undefined2 *)0x22b2;
            ppppiStack_1a = (int ****)0x1a8;
            iVar6 = FUN_1def_1208();
            if (iVar6 != 0) {
              *param_5 = *param_5 + 1;
              local_8 = (uint ***)*(undefined2 *)0x152;
              local_a = (int ****)0x1bb4;
              local_c = (undefined2 ***)0x1bd;
              uVar15 = func_0x000003ef();
              pbVar1 = (byte *)((int)uVar15 + 10);
              *pbVar1 = *pbVar1 | 0x80;
            }
            *(undefined2 *)0x1d0 = local_88;
            *(undefined2 *)0xb310 = local_8a;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        local_46 = 500;
      }
    }
  }
  *unaff_DI = *unaff_SI;
  unaff_DI[1] = unaff_SI[1];
  unaff_DI[2] = unaff_SI[2];
  local_8 = (uint ***)pppiStack_b8;
  local_a = (int ****)ppiStack_ba;
  local_c = pppuStack_bc;
  local_e = pppiStack_be;
LAB_2bb4_4c2f:
  local_10 = (int ***)0x22b2;
  local_12 = (undefined2 ****)0x774;
  FUN_32b2_7592();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x77e;
  FUN_32b2_6d14();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x786;
  FUN_32b2_70dc();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x78e;
  FUN_32b2_6d14();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x797;
  FUN_32b2_710c();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x79c;
  FUN_32b2_7182();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x7a5;
  FUN_32b2_6e99();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x7ad;
  FUN_32b2_710c();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x7b5;
  FUN_32b2_7154();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x7be;
  FUN_32b2_6e99();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x7c7;
  FUN_32b2_6eb1();
  local_a = (int ****)&local_8c;
  local_c = &ppuStack_64;
  local_e = (undefined2 ***)0x32b2;
  local_10 = (int ***)0x7d9;
  FUN_32b2_6cc6();
  local_e = (undefined2 ***)0x32b2;
  local_10 = (int ***)0x7de;
  FUN_32b2_7258();
  local_16 = (uint ***)0x32b2;
  local_18 = (undefined2 *)0x7e8;
  FUN_32b2_6eb1();
  local_16 = (uint ***)0x32b2;
  local_18 = (undefined2 *)0x7f0;
  FUN_32b2_6cc6();
  local_16 = (uint ***)0x32b2;
  local_18 = (undefined2 *)0x7f5;
  FUN_32b2_7258();
  pppiStack_1e = (undefined2 ***)0x32b2;
  FUN_32b2_6eb1();
  pppiStack_1e = local_66;
  ppiStack_22 = local_6a;
  pppuStack_24 = pppuStack_6c;
  pppiStack_26 = local_4a;
  ppiStack_2a = (int **)uStack_4e;
  pppiStack_2c = (int ***)uStack_50;
  ppiStack_2e = (int **)0x32b2;
  puStack_30 = (undefined2 *)0x820;
  FUN_32b2_6d14();
  uStack_36 = 0x32b2;
  local_38 = (uint *)0x82a;
  FUN_32b2_6eb1();
  uStack_36 = 0x32b2;
  local_38 = (uint *)0x833;
  FUN_32b2_6d14();
  local_3e = (undefined2 **)0x32b2;
  local_40 = 0x83d;
  FUN_32b2_6eb1();
  local_3e = (undefined2 **)0x0;
  local_40 = 0x32b2;
  local_42 = (undefined2 *)0x844;
  func_0x0003fc09();
  uVar13 = (undefined1 *)0xffc9 < &local_3e;
  uVar14 = &stack0x0000 == (undefined1 *)0x8;
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x84f;
  FUN_32b2_6cc6();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x857;
  FUN_32b2_6cc6();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x85c;
  FUN_32b2_7191();
  if ((bool)uVar14) {
    ppuStack_64 = (undefined2 **)param_1;
    pppiStack_62 = param_2;
  }
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x872;
  FUN_32b2_6cc6();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x87a;
  FUN_32b2_6cc6();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x87f;
  FUN_32b2_7191();
  if ((bool)uVar14) {
    local_8c = param_3;
    local_8a = param_4;
  }
  *in_stack_0000003a = ppuStack_64;
  in_stack_0000003a[1] = pppiStack_62;
  *in_stack_0000003c = local_8c;
  in_stack_0000003c[1] = local_8a;
  *in_stack_0000003e = ppuStack_64;
  in_stack_0000003e[1] = pppiStack_62;
  *in_stack_00000040 = local_8c;
  in_stack_00000040[1] = local_8a;
  local_38 = (uint *)((int)local_38 + 1);
  uVar14 = local_38 == (uint *)0x0;
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x8d7;
  FUN_32b2_6d14();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x8e0;
  FUN_32b2_6d14();
  local_a = (int ****)0x32b2;
  local_c = (undefined2 ***)0x8e5;
  FUN_32b2_7191();
  if (!(bool)uVar13 && !(bool)uVar14) {
    local_a = (int ****)pppiStack_b8;
    local_c = (undefined2 ***)ppiStack_ba;
    local_e = pppuStack_bc;
    local_10 = pppiStack_be;
    local_12 = (undefined2 ****)0x32b2;
    local_14 = (undefined2 ***)0x8ff;
    FUN_32b2_7592();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x909;
    FUN_32b2_6d14();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x911;
    FUN_32b2_7154();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x916;
    FUN_32b2_6fd6();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x91e;
    FUN_32b2_6d14();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x927;
    FUN_32b2_710c();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x92c;
    FUN_32b2_7182();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x935;
    FUN_32b2_6e99();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x93d;
    FUN_32b2_710c();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x945;
    FUN_32b2_7154();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x94e;
    FUN_32b2_6e99();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x957;
    FUN_32b2_6eb1();
    local_c = (undefined2 ***)&local_8c;
    local_e = &ppuStack_64;
    local_10 = (int ***)0x32b2;
    local_12 = (undefined2 ****)0x969;
    FUN_32b2_6cc6();
    local_10 = (int ***)0x32b2;
    local_12 = (undefined2 ****)0x96e;
    FUN_32b2_7258();
    local_18 = (undefined2 *)0x32b2;
    ppppiStack_1a = (int ****)0x978;
    FUN_32b2_6eb1();
    local_18 = (undefined2 *)0x32b2;
    ppppiStack_1a = (int ****)0x980;
    FUN_32b2_6cc6();
    local_18 = (undefined2 *)0x32b2;
    ppppiStack_1a = (int ****)0x985;
    FUN_32b2_7258();
    ppiStack_22 = (int **)0x98f;
    FUN_32b2_6eb1();
    ppiStack_22 = (int **)local_68;
    pppuStack_24 = (undefined2 ***)local_6a;
    pppiStack_26 = pppuStack_6c;
    ppiStack_2a = (int **)local_4c;
    pppiStack_2c = (int ***)uStack_4e;
    ppiStack_2e = (int **)uStack_50;
    puStack_30 = (undefined2 *)0x32b2;
    puStack_32 = (undefined2 *)0x9b0;
    FUN_32b2_6d14();
    local_38 = (uint *)0x32b2;
    local_3a = 0x9ba;
    FUN_32b2_6eb1();
    local_38 = (uint *)0x32b2;
    local_3a = 0x9c3;
    FUN_32b2_6d14();
    local_40 = 0x32b2;
    local_42 = (undefined2 *)0x9cd;
    FUN_32b2_6eb1();
    local_40 = 0;
    local_42 = (undefined2 *)0x32b2;
    local_44 = 0x9d4;
    func_0x0003fc09();
    uVar13 = &stack0x0000 == (undefined1 *)0xa;
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x9df;
    FUN_32b2_6cc6();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x9e7;
    FUN_32b2_6cc6();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0x9ec;
    FUN_32b2_7191();
    if ((bool)uVar13) {
      ppuStack_64 = (undefined2 **)param_1;
      pppiStack_62 = param_2;
    }
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0xa02;
    FUN_32b2_6cc6();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0xa0a;
    FUN_32b2_6cc6();
    local_c = (undefined2 ***)0x32b2;
    local_e = (undefined2 ***)0xa0f;
    FUN_32b2_7191();
    if ((bool)uVar13) {
      local_8c = param_3;
      local_8a = param_4;
    }
    *in_stack_0000003e = ppuStack_64;
    in_stack_0000003e[1] = pppiStack_62;
    *in_stack_00000040 = local_8c;
    in_stack_00000040[1] = local_8a;
    local_38 = (uint *)((int)local_38 + 1);
  }
  return local_38;
}



/* 4000:0775  FUN_4000_0775  990 bytes, 0 callers */

void FUN_4000_0775(undefined2 param_1,undefined2 ****param_2)

{
  undefined2 *puVar1;
  undefined2 ***pppuVar2;
  undefined2 *puVar3;
  bool bVar4;
  code *pcVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined2 ***pppuVar13;
  uint unaff_DI;
  undefined2 ****ppppuVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 ****ppppuVar17;
  undefined2 ****ppppuVar18;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined2 *puVar21;
  undefined4 uVar22;
  undefined2 ***pppuStack_11ae;
  undefined2 ***pppuStack_11ac;
  undefined2 ***pppuStack_11a6;
  undefined2 ***pppuStack_11a4;
  undefined2 uStack_119e;
  undefined2 uStack_119c;
  byte bStack_1188;
  undefined2 uStack_1182;
  undefined2 uStack_1180;
  int iStack_117e;
  undefined2 uStack_1172;
  undefined2 uStack_1170;
  uint uStack_116e;
  int iStack_116a;
  int iStack_1168;
  uint uStack_1166;
  undefined2 uStack_1164;
  undefined2 uStack_1162;
  undefined2 **local_1160;
  undefined2 ***pppuStack_115e;
  undefined2 ***pppuStack_115c;
  undefined2 uStack_115a;
  undefined2 uStack_1158;
  int local_1156 [68];
  undefined2 ***pppuStack_10ce;
  undefined2 ***pppuStack_10cc;
  undefined2 ***pppuStack_10ca;
  undefined2 ***pppuStack_10c8;
  undefined2 ***pppuStack_10c6;
  undefined2 ***pppuStack_10c4;
  undefined2 ***pppuStack_10c2;
  int local_10c0 [64];
  undefined2 ***pppuStack_1040;
  undefined2 ***pppuStack_103e;
  undefined2 ***pppuStack_1038;
  undefined2 ***pppuStack_1036;
  undefined2 ***pppuStack_1034;
  undefined2 ***pppuStack_1032;
  undefined2 ***pppuStack_1030;
  undefined2 ***pppuStack_102e;
  undefined2 ***local_102c;
  undefined1 auStack_102a [4];
  uint local_1026 [170];
  undefined1 local_ed2 [66];
  int iStack_e90;
  int iStack_e8e;
  undefined2 ***pppuStack_e8c;
  undefined2 ***pppuStack_e8a;
  undefined2 ***pppuStack_e84;
  undefined2 ***pppuStack_e82;
  undefined2 ***pppuStack_e80;
  undefined2 ***pppuStack_e7e;
  uint uStack_e7c;
  int local_e78;
  uint uStack_e76;
  undefined1 auStack_e70 [4];
  undefined2 ***pppuStack_e6c;
  undefined2 ***pppuStack_e6a;
  uint local_e68;
  undefined2 ***local_e66;
  uint uStack_e64;
  undefined2 ***pppuStack_e62;
  int iStack_e60;
  undefined1 auStack_e5e [4];
  undefined2 ***pppuStack_e5a;
  undefined2 ***pppuStack_e58;
  undefined2 **appuStack_e56 [50];
  int local_df2;
  uint local_df0;
  undefined1 auStack_dee [8];
  undefined2 ***pppuStack_de6;
  undefined2 ***pppuStack_de4;
  undefined2 ***pppuStack_dde;
  undefined2 ***pppuStack_ddc;
  int iStack_dda;
  int local_dd8 [256];
  undefined2 ***apppuStack_bd8 [3];
  undefined2 local_bd2;
  undefined2 local_bd0;
  undefined1 auStack_bc6 [12];
  undefined2 ***pppuStack_bba;
  undefined2 ***pppuStack_bb8;
  int iStack_bb6;
  undefined2 ***local_bb4;
  int local_bb2 [256];
  int iStack_9b2;
  int iStack_9b0;
  undefined2 **local_9ae;
  undefined2 local_9ac;
  undefined2 local_9aa;
  undefined2 local_9a8;
  int local_99e;
  int local_99c;
  int local_99a [65];
  undefined2 **local_918 [2];
  undefined2 local_914;
  undefined2 local_912;
  undefined2 **local_910;
  undefined2 ***pppuStack_90e;
  int local_90c [256];
  undefined1 auStack_70c [172];
  undefined2 ***pppuStack_660;
  undefined2 ***pppuStack_65e;
  undefined2 ***pppuStack_65c;
  undefined2 ***pppuStack_65a;
  int local_658 [267];
  undefined2 **ppuStack_442;
  undefined2 uStack_440;
  undefined2 uStack_43e;
  undefined2 uStack_43c;
  undefined2 uStack_436;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined2 uStack_42c;
  undefined2 uStack_42a;
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined1 uStack_426;
  undefined2 **appuStack_420 [257];
  undefined2 ***pppuStack_21e;
  undefined2 **appuStack_21c [226];
  undefined2 uStack_58;
  undefined2 uStack_56;
  uint uStack_54;
  undefined2 ***pppuStack_52;
  undefined2 ***pppuStack_50;
  undefined2 ***pppuStack_4e;
  undefined2 ***pppuStack_4c;
  undefined2 ***pppuStack_4a;
  undefined2 ***pppuStack_48;
  undefined2 ***pppuStack_46;
  undefined2 ***pppuStack_44;
  undefined2 ***pppuStack_42;
  undefined2 ***pppuStack_40;
  undefined2 ***pppuStack_3e;
  undefined2 ***pppuStack_3c;
  undefined2 ***pppuStack_3a;
  undefined2 ***pppuStack_38;
  undefined2 ***pppuStack_36;
  undefined2 ***pppuStack_34;
  undefined2 ***pppuStack_32;
  undefined2 ***pppuStack_30;
  undefined2 ***pppuStack_2e;
  undefined2 ***pppuStack_2c;
  undefined2 ***pppuStack_2a;
  undefined2 ***pppuStack_26;
  undefined2 ***pppuStack_24;
  undefined2 ***pppuStack_22;
  undefined2 ***pppuStack_20;
  undefined2 ***pppuStack_1e;
  undefined2 ***pppuStack_1c;
  undefined2 ***pppuStack_1a;
  undefined2 ***pppuStack_18;
  undefined2 ***pppuStack_16;
  undefined2 ***pppuStack_14;
  undefined2 ***pppuStack_12;
  undefined2 ***pppuStack_10;
  undefined2 ***pppuStack_e;
  undefined2 ***pppuStack_c;
  undefined2 ***pppuStack_a;
  undefined2 ***pppuStack_8;
  
  FUN_21f2_0ebc();
  local_bd2 = *(undefined2 *)0x9bf4;
  local_bd0 = *(undefined2 *)0x9bf6;
  local_ed2[0] = 0;
  pppuStack_8 = (undefined2 ***)local_ed2;
  pppuStack_a = param_2 + 0xf;
  pppuStack_c = (undefined2 ***)0x22b2;
  ppppuVar14 = (undefined2 ****)0x11f2;
  pppuStack_e = (undefined2 ****)0x7af;
  local_9aa = local_bd2;
  local_9a8 = local_bd0;
  func_0x00012038();
  *(int *)0xc290 = (int)local_ed2;
  local_914 = *(undefined2 *)0x9c28;
  local_912 = *(undefined2 *)0x9c2a;
  local_e66 = param_2;
  local_9ac = 0;
  local_102c = (undefined2 ****)0x0;
  local_bb4 = (undefined2 ****)0x0;
  local_99e = 0;
  local_99c = 0;
LAB_3ab8_5c64:
  pppuStack_8 = (undefined2 ***)0x0;
  pppuStack_c = (undefined2 ****)0x7ec;
  pppuStack_a = ppppuVar14;
  func_0x0000daa6();
  pppuStack_8 = (undefined2 ***)0x885;
  pppuStack_a = (undefined2 ***)0x7f2;
  func_0x0001bb8f();
  pppuStack_8 = (undefined2 ***)0x1bb4;
  pppuStack_a = (undefined2 ***)0x7f7;
  func_0x0001bba4();
  pppuStack_8 = (undefined2 ***)0x1bb4;
  ppppuVar14 = (undefined2 ****)0x885;
  pppuStack_a = (undefined2 ***)0x7fc;
  func_0x0000ac64();
LAB_3ab8_5c7c:
  do {
    pppuStack_a = (undefined2 ****)0x800;
    pppuStack_8 = ppppuVar14;
    FUN_4375_744d();
    local_910 = (undefined2 ***)0x0;
    local_9ae = (undefined2 ***)0x0;
    local_918[0] = (undefined2 ***)0x0;
    local_1160 = (undefined2 ***)0x0;
    FUN_4375_7973();
    if (*(int *)0x158 != 0) {
      FUN_10ad_18a4();
      FUN_4375_7430();
      goto LAB_3ab8_5cef;
    }
    local_df0 = 1;
    do {
      func_0x0000f350();
      local_e78 = local_df0 * 0x82 + *(int *)0xa58;
      func_0x0000f350();
      local_df0 = local_df0 + 1;
    } while ((int)local_df0 < 5);
    local_df0 = 1;
    if (0 < local_df2) {
      uStack_e7c = FUN_4375_7973();
      FUN_1000_02b5();
      uVar19 = (undefined1 *)0xfff5 < &stack0x5c85;
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029d78();
      func_0x00029c2c();
      func_0x00029983();
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar19) {
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029983();
      }
      if ((int)uStack_e7c < 1) {
        uStack_e7c = local_e68;
      }
      if (0x3b < (int)uStack_e7c) {
        uStack_e7c = 0x3b;
      }
      if (param_2 == (undefined2 ****)0x3) {
        uVar7 = local_df0 - 1;
        uVar8 = (int)uVar7 >> 0xf;
        iStack_bb6 = ((int)uVar7 % 4) * 0x82 + 0x9c;
        local_e78 = ((int)((uVar7 ^ uVar8) - uVar8) >> 2 ^ uVar8) - uVar8;
        iStack_dda = local_e78 * 0x60 + 0x66;
      }
      if (param_2 == (undefined2 ****)0x4) {
        uVar7 = local_df0 - 1;
        uVar8 = (int)uVar7 >> 0xf;
        iStack_bb6 = ((int)uVar7 % 4) * 0x82 + 0xb9;
        local_e78 = ((int)((uVar7 ^ uVar8) - uVar8) >> 2 ^ uVar8) - uVar8;
        iStack_dda = local_e78 * 0x60 + 0x46;
      }
      pppuStack_e5a = (undefined2 ***)*(undefined2 *)0x9cac;
      pppuStack_e58 = (undefined2 ***)*(undefined2 *)0x9cae;
      uStack_e64 = 0;
      while( true ) {
        if ((int)uStack_e7c < (int)uStack_e64) break;
        uVar19 = param_2 == (undefined2 ****)0x3;
        if ((bool)uVar19) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (((bool)uVar19) && ((int)local_1026[uStack_e64 * 2] < 0)) {
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029b6d();
            func_0x00029983();
          }
        }
        if ((local_1026[uStack_e64 * 2] == 500) || (local_1026[uStack_e64 * 2] == 0xfe0c)) {
          iStack_bb6 = iStack_bb6 + local_1026[uStack_e64 * 2 + 1];
          func_0x000297e6();
          FUN_28b3_0d8b();
          FUN_28b3_1168();
          func_0x00029d78();
          iStack_dda = FUN_28b3_0f51();
        }
        uStack_e64 = uStack_e64 + 1;
      }
      iStack_9b2 = *(int *)0x9c24;
      iStack_9b0 = *(int *)0x9c26;
      uStack_e64 = 0;
      do {
        uVar7 = uStack_e64;
        if ((int)uStack_e7c < (int)uStack_e64) {
          FUN_3ab8_6a7b();
          return;
        }
        if (param_2 == (undefined2 ****)0x3) {
          if ((local_1026[uStack_e64 * 2] != 500) && (local_1026[uStack_e64 * 2] != 0xfe0c)) {
            if ((local_1026[uStack_e64 * 2] == 700) || (local_1026[uStack_e64 * 2] == 0xfd44)) {
              iStack_9b2 = local_bb2[uStack_e64 * 4];
              iStack_9b0 = local_bb2[uStack_e64 * 4 + 1];
            }
            else if ((((local_1026[uStack_e64 * 2] != 0x2ee) &&
                      (local_1026[uStack_e64 * 2] != 0xfd12)) &&
                     (local_1026[uStack_e64 * 2] != 0x2ef)) &&
                    (local_1026[uStack_e64 * 2] != 0xfd11)) {
              uStack_1166 = local_1026[uStack_e64 * 2];
              iStack_1168 = ((uStack_1166 ^ (int)uStack_1166 >> 0xf) - ((int)uStack_1166 >> 0xf)) +
                            -1;
              FUN_28b3_0d8b();
              iStack_116a = unaff_DI - 1;
              FUN_28b3_0d8b();
              func_0x0002996b();
              FUN_28b3_1172();
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029c9d();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b6d();
              FUN_28b3_117c();
              FUN_28b3_0d8b();
              FUN_28b3_117c();
              func_0x00029983();
              iStack_116a = local_1026[uVar7 * 2 + 1] - 1;
              FUN_28b3_0d8b();
              func_0x00029b85();
              func_0x00029b6d();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b6d();
              FUN_28b3_117c();
              FUN_28b3_0d8b();
              FUN_28b3_117c();
              func_0x00029983();
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029bb5();
              func_0x00029b6d();
              func_0x00029d78();
              iStack_116a = FUN_28b3_0f51();
              FUN_28b3_0d8b();
              func_0x0002996b();
              func_0x00029b6d();
              func_0x00029bb5();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b6d();
              FUN_28b3_0d8b();
              FUN_28b3_1168();
              func_0x000297e6();
              func_0x00029b6d();
              FUN_28b3_1163();
              func_0x00029983();
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029bb5();
              func_0x00029b6d();
              func_0x00029d78();
              iStack_116a = FUN_28b3_0f51();
              iStack_e8e = iStack_116a;
              FUN_28b3_0d8b();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029bb5();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b6d();
              FUN_28b3_0d8b();
              FUN_28b3_1168();
              func_0x000297e6();
              func_0x00029b6d();
              FUN_28b3_1163();
              func_0x00029983();
              goto LAB_3ab8_6147;
            }
          }
        }
        else {
LAB_3ab8_6147:
          uStack_1162 = FUN_4375_9615();
          if (param_2 == (undefined2 ****)0x4) {
            uStack_115a = *(undefined2 *)0x9cb8;
            uStack_1158 = *(undefined2 *)0x9cba;
            if (((299 < (int)local_1026[uStack_e64 * 2]) &&
                ((int)local_1026[uStack_e64 * 2] < 20000)) ||
               (((int)local_1026[uStack_e64 * 2] % 10 == 9 ||
                ((int)local_1026[uStack_e64 * 2 + 1] % 10 == 9)))) goto LAB_3ab8_5e5c;
            if ((0 < local_10c0[uStack_e64]) && (local_10c0[uStack_e64] < 8)) {
              uStack_1162 = *(undefined2 *)(local_10c0[uStack_e64] * 2 + 0xa70);
            }
            if (99 < (int)local_1026[uStack_e64 * 2]) {
              uStack_1162 = *(undefined2 *)0xa7e;
              uStack_1164 = *(undefined2 *)0xa8a;
            }
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b6d();
            FUN_28b3_0d8b();
            FUN_28b3_117c();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b6d();
            FUN_28b3_0d8b();
            FUN_28b3_117c();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b6d();
            FUN_28b3_0d8b();
            FUN_28b3_1168();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b6d();
            FUN_28b3_0d8b();
            FUN_28b3_1168();
            func_0x00029983();
          }
          uVar7 = uStack_e64;
          if (local_10c0[uStack_e64] < 30000) {
            if (local_10c0[uStack_e64] < 0x2711) {
              func_0x000297e6();
              uVar19 = (uStack_e64 & 0x3fff) == 0;
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar19) {
                func_0x000297e6();
                func_0x00029d78();
                FUN_28b3_0f51();
                func_0x000297e6();
                func_0x00029d78();
                FUN_28b3_0f51();
                func_0x000297e6();
                func_0x00029d78();
                FUN_28b3_0f51();
                func_0x000297e6();
                func_0x00029d78();
                FUN_28b3_0f51();
                func_0x0000f350();
              }
              else {
                puVar6 = (undefined2 *)FUN_4375_9596();
                ppuStack_442 = (undefined2 **)*puVar6;
                uStack_440 = puVar6[1];
                puVar6 = (undefined2 *)FUN_4375_95d8();
                uStack_43e = *puVar6;
                uStack_43c = puVar6[1];
                func_0x000297e6();
                func_0x00029b6d();
                func_0x00029d78();
                FUN_28b3_0f51();
                uVar22 = func_0x00021eee();
                uStack_434 = uVar22;
                func_0x000297e6();
                func_0x00029b6d();
                func_0x00029d78();
                FUN_28b3_0f51();
                uVar22 = func_0x00021eee();
                uStack_430 = uVar22;
                uStack_42a = 0;
                uStack_42c = 0;
                uStack_426 = *(undefined1 *)0xb310;
                uStack_436 = 10000;
                uStack_428 = *(undefined1 *)0xa6c;
                if ((0 < local_1156[uStack_e64]) && (local_1156[uStack_e64] < 10)) {
                  uStack_428 = (char)local_1156[uStack_e64];
                }
                uStack_427 = *(undefined1 *)0xa6a;
                if ((0 < local_10c0[uStack_e64]) && (local_10c0[uStack_e64] < 7)) {
                  uStack_427 = (char)local_10c0[uStack_e64];
                }
                if (param_2 == (undefined2 ****)0x3) {
                  func_0x000297e6();
                  uVar19 = (int)(uStack_e64 << 1) < 0;
                  func_0x000297e6();
                  func_0x0002996b();
                  func_0x00029b6d();
                  func_0x00029b6d();
                  func_0x0002996b();
                  FUN_28b3_1181();
                  if ((bool)uVar19) {
                    func_0x000297e6();
                    func_0x00029b6d();
                    func_0x000297e6();
                    func_0x00029b6d();
                    FUN_28b3_1163();
                    func_0x00029983();
                  }
                  func_0x000297e6();
                  func_0x00029b85();
                  func_0x00029983();
                  uVar22 = uStack_430;
                }
                uVar19 = param_2 < (undefined2 ****)0x4;
                uStack_430 = uVar22;
                if (param_2 == (undefined2 ****)0x4) {
                  if ((0 < local_10c0[uStack_e64]) && (local_10c0[uStack_e64] < 8)) {
                    uStack_427 = (char)local_10c0[uStack_e64];
                  }
                  if (99 < (int)local_1026[uStack_e64 * 2]) {
                    uStack_427 = 7;
                    uStack_428 = 1;
                  }
                  uVar19 = (int)(uStack_e64 << 1) < 0;
                  uVar20 = (uStack_e64 & 0x3fff) == 0;
                  func_0x000297e6();
                  func_0x00029b6d();
                  func_0x00029b6d();
                  func_0x00029ae7();
                  func_0x0002996b();
                  func_0x00029b85();
                  func_0x00029983();
                  uStack_436 = 10000;
                  func_0x00029834();
                  func_0x000297e6();
                  func_0x0002996b();
                  func_0x00029d78();
                  FUN_28b3_1181();
                  if (!(bool)uVar19) {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar19 || (bool)uVar20) {
                      func_0x000297e6();
                      func_0x00029d78();
                      func_0x00029c2c();
                      uStack_436 = FUN_28b3_0f51();
                    }
                  }
                }
                else {
                  uVar20 = 0;
                }
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (!(bool)uVar19 && !(bool)uVar20) {
                  puVar6 = (undefined2 *)&stack0x5c6f;
                  pppuVar13 = &ppuStack_442;
                  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
                    puVar21 = puVar6;
                    puVar6 = puVar6 + 1;
                    pppuVar2 = pppuVar13;
                    pppuVar13 = pppuVar13 + 1;
                    *puVar21 = *pppuVar2;
                  }
                  func_0x00013e46();
                }
              }
            }
            else {
              puVar21 = (undefined2 *)func_0x00000398();
              puVar12 = (undefined2 *)puVar21;
              puVar6 = &uStack_119e;
              for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar3 = puVar6;
                puVar6 = puVar6 + 1;
                puVar1 = puVar12;
                puVar12 = puVar12 + 1;
                *puVar3 = *puVar1;
              }
              uStack_116e = 0;
              iVar9 = local_1156[uVar7];
              if (999 < iVar9) {
                local_1156[uVar7] = local_1156[uVar7] + -1000;
                uStack_116e = 1;
              }
              uStack_116e = (uint)(999 < iVar9);
              bStack_1188 = bStack_1188 & 0xdf;
              if (uStack_116e != 0) {
                bStack_1188 = bStack_1188 | 0x20;
              }
              iStack_117e = local_1156[uStack_e64] / 100;
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029af6();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029b6d();
              func_0x000297e6();
              func_0x00029b6d();
              FUN_28b3_117c();
              func_0x00029d78();
              func_0x000299d1();
              FUN_28b3_1582();
              uVar19 = (undefined1 *)0xfff7 < &stack0x5c85;
              uVar20 = &stack0x0000 == (undefined1 *)0xa373;
              func_0x00029834();
              func_0x0002996b();
              FUN_28b3_1181();
              if (!(bool)uVar19 && !(bool)uVar20) {
                func_0x000297e6();
                func_0x00029b9d();
                func_0x00029983();
                func_0x000297e6();
                func_0x00029b9d();
                func_0x00029983();
                FUN_1885_0344();
                puVar6 = (undefined2 *)func_0x00018eff();
                uStack_1182 = *puVar6;
                uStack_1180 = puVar6[1];
                uStack_1172 = *(undefined2 *)0x9bf4;
                uStack_1170 = *(undefined2 *)0x9bf6;
                FUN_28b3_0d8b();
                func_0x00029983();
                if (uStack_116e != 0) {
                  FUN_28b3_0d8b();
                  func_0x00029983();
                }
                if (((iStack_117e == 1) || (iStack_117e == 4)) || (iStack_117e == 7)) {
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029b6d();
                  func_0x00029b6d();
                  func_0x00029b6d();
                  func_0x00029c2c();
                  func_0x00029983();
                }
                if (((iStack_117e == 2) || (iStack_117e == 5)) || (iStack_117e == 8)) {
                  func_0x000297e6();
                  func_0x00029b6d();
                  func_0x00029b6d();
                  func_0x00029b6d();
                  func_0x00029983();
                }
                if (2 < iStack_117e) {
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029b6d();
                  func_0x00029b6d();
                  func_0x00029c2c();
                  func_0x00029983();
                }
                if (5 < iStack_117e) {
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029b6d();
                  func_0x00029b6d();
                  func_0x00029c2c();
                  func_0x00029983();
                }
                func_0x000297e6();
                func_0x00029b6d();
                func_0x000297e6();
                func_0x00029b6d();
                FUN_28b3_1163();
                func_0x00029bb5();
                func_0x00029983();
                func_0x000297e6();
                func_0x00029b6d();
                func_0x000297e6();
                func_0x00029b6d();
                FUN_28b3_117c();
                func_0x00029bb5();
                func_0x00029983();
                uVar15 = *(undefined2 *)0xc30;
                uVar16 = *(undefined2 *)0xc32;
                func_0x000297e6();
                func_0x00029b6d();
                func_0x00029b6d();
                func_0x00029983();
                puVar6 = (undefined2 *)FUN_4375_9596();
                uStack_119e = *puVar6;
                uStack_119c = puVar6[1];
                func_0x000297e6();
                func_0x00029b6d();
                func_0x00029bb5();
                func_0x00029983();
                FUN_4375_95d8();
                func_0x000297e6();
                func_0x0002996b();
                func_0x000297e6();
                func_0x00029b6d();
                FUN_28b3_117c();
                func_0x00029983();
                if ((param_2 == (undefined2 ****)0x4) && (19999 < (int)local_1026[uStack_e64 * 2]))
                {
                  puVar12 = (undefined2 *)&stack0x5c77;
                  puVar6 = &uStack_119e;
                  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                    puVar1 = puVar12;
                    puVar12 = puVar12 + 1;
                    puVar21 = puVar6;
                    puVar6 = puVar6 + 1;
                    *puVar1 = *puVar21;
                  }
                }
                else {
                  puVar12 = (undefined2 *)&stack0x5c77;
                  puVar6 = &uStack_119e;
                  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                    puVar1 = puVar12;
                    puVar12 = puVar12 + 1;
                    puVar21 = puVar6;
                    puVar6 = puVar6 + 1;
                    *puVar1 = *puVar21;
                  }
                }
                func_0x00019593();
                *(undefined2 *)0xc30 = uVar15;
                *(undefined2 *)0xc32 = uVar16;
              }
            }
          }
        }
LAB_3ab8_5e5c:
        uStack_e64 = uStack_e64 + 1;
      } while( true );
    }
    local_df0 = 1;
    do {
      func_0x0000def0();
      local_e78 = local_df0 * 0x82 + *(int *)0xa58;
      if (0x27f < local_e78) {
        local_e78 = 0x27f;
      }
      func_0x0000def0();
      local_df0 = local_df0 + 1;
    } while ((int)local_df0 < 5);
    func_0x0000a799();
    while( true ) {
      *(undefined2 *)0xbc0 = 1;
      *(undefined2 *)0xc08 = 1;
      FUN_21f2_3454();
      if (param_2 == (undefined2 ****)0x3) {
        FUN_4375_8326();
      }
      if (param_2 == (undefined2 ****)0x4) {
        FUN_4375_8326();
      }
      FUN_1def_07a4();
      if ((*(char *)0x132 != '\0') && (*(int *)0xce6 == 0)) {
        FUN_21f2_2d26();
      }
      *(undefined2 *)0xc26 = 1;
      ppppuVar14 = (undefined2 ****)0x1bb4;
      iStack_e90 = FUN_1def_0904();
      *(undefined2 *)0xc26 = 0;
      if (((*(int *)0x158 != 0) || (iStack_e90 == 0x14)) || (iStack_e90 == -1)) {
        pppuStack_8 = (undefined2 ****)0x1bb4;
        pppuStack_a = (undefined2 ****)0x18f3;
        FUN_10ad_18a4();
        if (*(int *)0x158 != 0) goto LAB_3ab8_5cef;
        goto LAB_3ab8_6d7d;
      }
      if (iStack_e90 == 99) goto LAB_3ab8_5c7c;
      if (iStack_e90 == 1) break;
      if (iStack_e90 == 2) {
        if (param_2 == (undefined2 ****)0x3) {
          pppuStack_8 = (undefined2 ***)(uint)*(byte *)0x11ee;
          pppuStack_a = param_2;
          pppuStack_c = (undefined2 ***)0x1bb4;
          pppuStack_e = (undefined2 ***)0x1969;
          FUN_4375_7520();
        }
        if (param_2 == (undefined2 ****)0x4) {
          pppuStack_8 = (undefined2 ***)(uint)*(byte *)0x11ef;
          pppuStack_a = param_2;
          pppuStack_c = (undefined2 ***)0x1bb4;
          pppuStack_e = (undefined2 ***)0x197e;
          FUN_4375_7520();
        }
        pppuStack_8 = (undefined2 ***)0xbf48;
        pppuStack_a = (undefined2 ***)auStack_70c;
        pppuStack_c = (undefined2 ***)0x1bb4;
        pppuStack_e = (undefined2 ***)0x198e;
        FUN_21f2_3454();
        pppuStack_8 = (undefined2 ***)0x4592;
        pppuStack_a = (undefined2 ***)auStack_70c;
        pppuStack_c = (undefined2 ***)0x1078;
        pppuStack_e = (undefined2 ****)0x4593;
        pcVar5 = (code *)swi(0x3f);
        (*pcVar5)();
        unaff_DI = 0x22b2;
        ppppuVar14 = (undefined2 ****)0xdef;
        FUN_1000_0620();
        if (3 < *(byte *)0xb782) {
          FUN_3ab8_847c();
          return;
        }
        *(undefined2 *)0x158 = 0;
        goto LAB_3ab8_5c64;
      }
      pppuStack_8 = (undefined2 ***)0x1bb4;
      pppuStack_a = (undefined2 ***)0x19cd;
      func_0x000297e6();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x19d6;
      FUN_28b3_100d();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x19df;
      func_0x00029b6d();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x19e8;
      FUN_28b3_0d8b();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x19ed;
      FUN_28b3_117c();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x19f2;
      func_0x00029d78();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x19f7;
      appuStack_21c[0] = (undefined2 **)FUN_28b3_0f51();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x1a04;
      func_0x000297e6();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x1a0d;
      FUN_28b3_100d();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x1a16;
      func_0x00029b6d();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x1a1f;
      FUN_28b3_0d8b();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x1a24;
      FUN_28b3_117c();
      pppuStack_8 = (undefined2 ***)0x22b2;
      pppuStack_a = (undefined2 ***)0x1a29;
      func_0x00029d78();
      pppuStack_8 = (undefined2 ****)0x22b2;
      pppuStack_a = (undefined2 ****)0x1a2e;
      appuStack_420[0] = (undefined2 **)FUN_28b3_0f51();
      if (((((undefined2 ****)apppuStack_bd8[0] != (undefined2 ****)0x0) &&
           (*(int *)0xa58 < (int)appuStack_21c[0])) &&
          ((*(int *)0xa5e < (int)appuStack_420[0] &&
           (((int)appuStack_420[0] < 399 &&
            (pppuStack_90e =
                  (undefined2 ***)
                  (((int)(appuStack_420[0] + -8) / 0x60) * 4 +
                   ((int)appuStack_21c[0] - *(int *)0xa58) / 0x82 + 1), 0 < (int)pppuStack_90e))))))
         && ((int)pppuStack_90e <= local_df2)) {
        func_0x0000c3ca();
        if (param_2 == (undefined2 ****)0x4) {
          FUN_10ad_18a4();
          FUN_3ab8_847c();
          return;
        }
        uStack_e7c = FUN_4375_7973();
        if ((int)uStack_e7c < 1) {
          uStack_e7c = local_e68;
        }
        if (0x3b < (int)uStack_e7c) {
          uStack_e7c = 0x3b;
        }
        FUN_10ad_18a4();
        pppuStack_e84 = (undefined2 ***)*(int *)0x9c10;
        pppuStack_e82 = (undefined2 ***)*(int *)0x9c12;
        pppuStack_10c6 = (undefined2 ***)*(int *)0x9c70;
        pppuStack_10c4 = (undefined2 ***)*(int *)0x9c72;
        pppuStack_1034 = pppuStack_10c6;
        pppuStack_1032 = pppuStack_10c4;
        pppuStack_e6c = pppuStack_e84;
        pppuStack_e6a = pppuStack_e82;
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029983();
        pppuStack_e5a = (undefined2 ****)*(int *)0x9cc4;
        pppuStack_e58 = (undefined2 ****)*(int *)0x9cc6;
        local_910 = (undefined2 ***)0x0;
        local_9ae = (undefined2 ***)0x0;
        local_918[0] = (undefined2 ***)0x0;
        local_1160 = (undefined2 ***)0x0;
        uStack_e64 = 0;
        goto LAB_3ab8_6ffa;
      }
    }
    pppuStack_8 = (undefined2 ***)0x1bb4;
    ppppuVar14 = (undefined2 ****)0x885;
    pppuStack_a = (undefined2 ***)0x1915;
    func_0x0000c3ca();
    if (param_2 == (undefined2 ****)0x3) {
      pppuStack_8 = (undefined2 ***)0x11ee;
      pppuStack_a = (undefined2 ***)0x3;
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
    }
    if (param_2 == (undefined2 ****)0x4) {
      pppuStack_8 = (undefined2 ***)0x11ef;
      pppuStack_a = (undefined2 ***)0x4;
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
    }
  } while (*(int *)0x158 == 0);
  pppuStack_8 = (undefined2 ****)0x885;
  pppuStack_a = (undefined2 ****)0x194e;
  FUN_10ad_18a4();
LAB_3ab8_5cef:
  FUN_3ab8_847c();
  return;
LAB_3ab8_6ffa:
  if ((int)uStack_e7c < (int)uStack_e64) goto LAB_3ab8_7035;
  if ((int)local_1026[uStack_e64 * 2] < 0) {
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029b6d();
    func_0x00029983();
    goto LAB_3ab8_7035;
  }
  uStack_e64 = uStack_e64 + 1;
  goto LAB_3ab8_6ffa;
LAB_3ab8_7035:
  iStack_9b2 = *(int *)0x9c24;
  iStack_9b0 = *(int *)0x9c26;
  uStack_e64 = 0;
  while( true ) {
    uVar19 = uStack_e7c < uStack_e64;
    uVar20 = uStack_e7c == uStack_e64;
    if ((int)uStack_e7c < (int)uStack_e64) break;
    if ((local_1026[uStack_e64 * 2] != 500) && (local_1026[uStack_e64 * 2] != 0xfe0c)) {
      if ((local_1026[uStack_e64 * 2] == 700) || (local_1026[uStack_e64 * 2] == 0xfd44)) {
        iStack_9b2 = local_bb2[uStack_e64 * 4];
        iStack_9b0 = local_bb2[uStack_e64 * 4 + 1];
      }
      else if ((((local_1026[uStack_e64 * 2] != 0x2ee) && (local_1026[uStack_e64 * 2] != 0xfd12)) &&
               (local_1026[uStack_e64 * 2] != 0x2ef)) && (local_1026[uStack_e64 * 2] != 0xfd11)) {
        func_0x000297e6();
        uVar19 = (uStack_e64 & 0x3fff) == 0;
        func_0x000297e6();
        FUN_28b3_1181();
        if (((bool)uVar19) && (local_10c0[local_df0] < 10000)) {
          uStack_e76 = uStack_e64 * 2;
          iStack_e8e = uStack_e64 * 2 + 1;
          uVar11 = (int)local_1026[uStack_e64 * 2] >> 0xf;
          uVar7 = local_1026[uStack_e64 * 2] ^ uVar11;
          uVar8 = uVar7 - uVar11;
          func_0x000297e6();
          func_0x00029b6d();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029983();
          uVar19 = uVar7 == uVar11;
          if (uVar8 == 1) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar19) {
              func_0x000297e6();
              func_0x00029983();
            }
          }
          uVar19 = local_1026[iStack_e8e] == 0;
          if (local_1026[iStack_e8e] == 1) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar19) {
              pppuStack_e6c = pppuStack_11a6;
              pppuStack_e6a = pppuStack_11a4;
            }
          }
          uVar19 = uVar8 < unaff_DI;
          uVar20 = uVar8 == unaff_DI;
          if ((bool)uVar20) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar19 && !(bool)uVar20) {
              pppuStack_1034 = pppuStack_11ae;
              pppuStack_1032 = pppuStack_11ac;
            }
          }
          uVar19 = local_1026[iStack_e8e] < unaff_DI;
          uVar20 = local_1026[iStack_e8e] == unaff_DI;
          if ((bool)uVar20) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar19 && !(bool)uVar20) {
              pppuStack_1034 = pppuStack_11a6;
              pppuStack_1032 = pppuStack_11a4;
            }
          }
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029983();
          func_0x000297e6();
          uVar19 = (int)(uStack_e76 << 1) < 0;
          func_0x000297e6();
          func_0x00029b6d();
          func_0x0002996b();
          FUN_28b3_1181();
          if ((bool)uVar19) {
            func_0x000297e6();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar19) {
            pppuStack_e84 = pppuStack_11a6;
            pppuStack_e82 = pppuStack_11a4;
          }
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029b85();
          func_0x0002996b();
          FUN_28b3_1163();
          func_0x00029b6d();
          func_0x00029983();
          func_0x000297e6();
          uVar19 = (int)(uStack_e76 << 1) < 0;
          uVar20 = (uStack_e76 & 0x3fff) == 0;
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029b6d();
          func_0x0002996b();
          FUN_28b3_1181();
          if (!(bool)uVar19 && !(bool)uVar20) {
            func_0x000297e6();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar19 && !(bool)uVar20) {
            pppuStack_10c6 = pppuStack_11a6;
            pppuStack_10c4 = pppuStack_11a4;
          }
        }
      }
    }
    uStack_e64 = uStack_e64 + 1;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar19) {
    pppuStack_e6c = (undefined2 ***)*(int *)0x9bf4;
    pppuStack_e6a = (undefined2 ***)*(int *)0x9bf6;
  }
  else {
    func_0x000297e6();
    func_0x00029b9d();
    func_0x00029983();
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar19 || (bool)uVar20) {
    func_0x000297e6();
    func_0x00029b9d();
    func_0x00029983();
  }
  else {
    pppuStack_1034 = (undefined2 ***)*(int *)0x9bf4;
    pppuStack_1032 = (undefined2 ***)*(int *)0x9bf6;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar19) {
    pppuStack_e84 = (undefined2 ***)*(int *)0x9bf4;
    pppuStack_e82 = (undefined2 ***)*(int *)0x9bf6;
  }
  else {
    func_0x000297e6();
    func_0x00029b9d();
    func_0x00029983();
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar19 || (bool)uVar20) {
    pppuStack_8 = (undefined2 ***)0x22b2;
    pppuStack_a = (undefined2 ***)0x200e;
    func_0x000297e6();
    pppuStack_8 = &pppuStack_10c6;
    pppuStack_a = (undefined2 ***)0x22b2;
    pppuStack_c = (undefined2 ****)0x2018;
    func_0x00029b9d();
    pppuStack_8 = (undefined2 ***)0x22b2;
    pppuStack_a = (undefined2 ***)0x201e;
    func_0x00029983();
    ppppuVar14 = (undefined2 ****)0x22b2;
  }
  else {
    pppuStack_10c6 = (undefined2 ***)*(int *)0x9bf4;
    pppuStack_10c4 = (undefined2 ***)*(int *)0x9bf6;
    ppppuVar14 = (undefined2 ****)0x22b2;
  }
  do {
    if (*(char *)0x45d8 == '\0') goto LAB_3ab8_752e;
    pppuStack_a = (undefined2 ***)0x202d;
    pppuStack_8 = ppppuVar14;
    func_0x0000c3ca();
    pppuStack_8 = (undefined2 ***)0x885;
    pppuStack_a = (undefined2 ***)0x2032;
    FUN_1885_2ec3();
    pppuStack_8 = (undefined2 ***)0x1b6e;
    ppppuVar14 = (undefined2 ****)0x11f2;
    pppuStack_a = (undefined2 ***)0x2037;
    func_0x00013e19();
    pppuStack_8 = &local_1160;
    pppuStack_a = local_918;
    pppuStack_c = &local_9ae;
    pppuStack_e = &local_910;
    pppuStack_10 = &pppuStack_dde;
    pppuStack_12 = &pppuStack_bba;
    pppuStack_14 = (undefined2 ****)0x45d9;
    pcVar5 = (code *)swi(0x3f);
    iStack_e90 = (*pcVar5)();
    if (*(int *)0x158 != 0) goto LAB_3ab8_5cef;
    if (iStack_e90 == 0x14) goto LAB_3ab8_5c64;
    if ((iStack_e90 == -1) && (*(int *)0xce6 != 0)) {
LAB_3ab8_6d7d:
      FUN_3ab8_847c();
      return;
    }
    if (iStack_e90 == 100) {
      pppuStack_10ce = pppuStack_bba;
      pppuStack_10cc = pppuStack_bb8;
      pppuStack_115e = pppuStack_dde;
      pppuStack_115c = pppuStack_ddc;
      goto LAB_3ab8_752e;
    }
    if (iStack_e90 == 1) {
      *(undefined1 *)0x45d8 = 0;
LAB_3ab8_752e:
      if ((*(char *)0x45d8 != '\0') && (0 < *(int *)0x45d4)) {
        *(undefined2 *)0x45d4 = 0xffff;
      }
      if ((*(char *)0x45d8 != '\0') && (0 < *(int *)0x45d6)) {
        *(undefined2 *)0x45d6 = 0xffff;
      }
LAB_3ab8_7556:
      do {
        pppuStack_a = (undefined2 ***)0x20df;
        pppuStack_8 = ppppuVar14;
        func_0x000297e6();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x20e8;
        func_0x00029b6d();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x20ed;
        func_0x00029d78();
        pppuStack_10 = (undefined2 ***)0x22b2;
        pppuStack_12 = (undefined2 ***)0x20f7;
        func_0x000299d1();
        pppuStack_10 = (undefined2 ***)0x22b2;
        pppuStack_12 = (undefined2 ***)0x20fc;
        func_0x0002a11e();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x2106;
        func_0x00029834();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x210f;
        func_0x00029c2c();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x2118;
        func_0x00029983();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x2121;
        func_0x000297e6();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x212a;
        func_0x00029b6d();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x212f;
        func_0x00029d78();
        pppuStack_10 = (undefined2 ***)0x22b2;
        pppuStack_12 = (undefined2 ***)0x2139;
        func_0x000299d1();
        pppuStack_10 = (undefined2 ***)0x22b2;
        pppuStack_12 = (undefined2 ***)0x213e;
        func_0x0002a10c();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x2148;
        func_0x00029834();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x2151;
        func_0x00029c2c();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x215a;
        func_0x0002996b();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x215f;
        func_0x00029d78();
        pppuStack_10 = (undefined2 ***)0x22b2;
        pppuStack_12 = (undefined2 ***)0x2169;
        func_0x000299d1();
        pppuStack_10 = (undefined2 ***)0x22b2;
        pppuStack_12 = (undefined2 ***)0x2172;
        func_0x000297e6();
        pppuStack_10 = (undefined2 ***)0x22b2;
        pppuStack_12 = (undefined2 ***)0x2177;
        func_0x00029d78();
        pppuStack_18 = (undefined2 ***)0x22b2;
        pppuStack_1a = (undefined2 ***)0x2181;
        func_0x000299d1();
        pppuStack_18 = (undefined2 ***)*(int *)0x9ce2;
        pppuStack_1a = (undefined2 ***)*(int *)0x9ce0;
        pppuStack_1c = (undefined2 ***)*(int *)0x9cde;
        pppuStack_1e = (undefined2 ***)*(int *)0x9cdc;
        pppuStack_20 = (undefined2 ***)*(int *)0x9ce2;
        pppuStack_22 = (undefined2 ***)*(int *)0x9ce0;
        pppuStack_24 = (undefined2 ***)*(int *)0x9cde;
        pppuStack_26 = (undefined2 ***)*(int *)0x9cdc;
        pppuStack_2a = (undefined2 ****)0x21a6;
        FUN_1def_043a();
        pppuStack_8 = (undefined2 ***)0x43ae;
        pppuStack_a = (undefined2 ***)0x2f0;
        pppuStack_c = (undefined2 ***)0x4596;
        pppuStack_e = (undefined2 ***)auStack_70c;
        pppuStack_10 = (undefined2 ***)0x1bb4;
        pppuStack_12 = (undefined2 ***)0x21bf;
        FUN_21f2_3454();
        pppuStack_8 = (undefined2 ***)auStack_70c;
        pppuStack_a = (undefined2 ***)0x6;
        pppuStack_c = (undefined2 ***)0x22b2;
        pppuStack_e = (undefined2 ***)0x21d0;
        FUN_1def_07a4();
        *(undefined2 *)0xc2c = 1;
        if (*(char *)0x45d8 == '\0') {
          pppuStack_e = (undefined2 ***)
                        ((int)local_918[0] + (int)local_9ae + (int)local_910 + (int)local_1160);
        }
        else {
          pppuStack_e = (undefined2 ***)0x1;
        }
        pppuStack_a = (undefined2 ***)auStack_102a;
        pppuStack_c = (undefined2 ***)auStack_70c;
        pppuStack_8 = (undefined2 ***)0x0;
        pppuStack_10 = (undefined2 ***)0x1bb4;
        uVar15 = 0x1bb4;
        pppuStack_12 = (undefined2 ***)0x2224;
        func_0x0001e740();
        *(undefined2 *)0xc2c = 0;
        if (*(int *)0xc22 == 0) {
          if (*(char *)0x45d8 == '\0') {
            pppuStack_8 = (undefined2 ***)0x1bb4;
            pppuStack_a = (undefined2 ***)0x2247;
            func_0x000297e6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x224c;
            func_0x00029d78();
            pppuStack_10 = (undefined2 ***)0x22b2;
            pppuStack_12 = (undefined2 ***)0x2256;
            func_0x000299d1();
            pppuStack_10 = (undefined2 ***)0x22b2;
            pppuStack_12 = (undefined2 ***)0x225f;
            func_0x000297e6();
            pppuStack_10 = (undefined2 ***)0x22b2;
            pppuStack_12 = (undefined2 ***)0x2264;
            func_0x00029d78();
            pppuStack_18 = (undefined2 ***)0x22b2;
            pppuStack_1a = (undefined2 ***)0x226e;
            func_0x000299d1();
            pppuStack_18 = (undefined2 ****)0x45ba;
            pppuStack_1a = appuStack_e56;
            pppuStack_1c = (undefined2 ****)0x22b2;
            pppuStack_1e = (undefined2 ****)0x227c;
            FUN_21f2_3454();
            pppuStack_8 = (undefined2 ***)0xffff;
            pppuStack_a = (undefined2 ***)0x7;
            pppuStack_c = (undefined2 ***)0x2;
            pppuStack_e = (undefined2 ***)0x1a;
            pppuStack_10 = appuStack_e56;
            pppuStack_12 = (undefined2 ***)0x22b2;
            uVar15 = 0xdef;
            pppuStack_14 = (undefined2 ****)0x2299;
            FUN_1000_02b5();
          }
          if ((*(int *)0x45d4 == 0) || (uVar16 = uVar15, *(int *)0x45d4 == 2)) {
            pppuStack_8 = (undefined2 ***)0xffff;
            pppuStack_a = (undefined2 ***)0x7;
            pppuStack_c = (undefined2 ***)0x2;
            pppuStack_e = (undefined2 ***)0x34;
            pppuStack_10 = (undefined2 ***)0x43ae;
            uVar16 = 0xdef;
            pppuStack_14 = (undefined2 ****)0x22c3;
            pppuStack_12 = (undefined2 ***)uVar15;
            FUN_1000_02b5();
          }
          uVar15 = uVar16;
          if (*(int *)0x45d4 == 1) {
            pppuStack_8 = (undefined2 ***)0xffff;
            pppuStack_a = (undefined2 ***)0x7;
            pppuStack_c = (undefined2 ***)0x2;
            pppuStack_e = (undefined2 ***)0x34;
            pppuStack_10 = (undefined2 ***)0x43b4;
            uVar15 = 0xdef;
            pppuStack_14 = (undefined2 ****)0x22e6;
            pppuStack_12 = (undefined2 ***)uVar16;
            FUN_1000_02b5();
          }
          if ((*(int *)0x45d4 == -1) || (uVar16 = uVar15, *(int *)0x45d4 == 3)) {
            pppuStack_8 = (undefined2 ***)0xffff;
            pppuStack_a = (undefined2 ***)0x7;
            pppuStack_c = (undefined2 ***)0x2;
            pppuStack_e = (undefined2 ***)0x34;
            pppuStack_10 = (undefined2 ***)0x43ba;
            uVar16 = 0xdef;
            pppuStack_14 = (undefined2 ****)0x2310;
            pppuStack_12 = (undefined2 ***)uVar15;
            FUN_1000_02b5();
          }
          if ((*(int *)0x45d6 == 0) || (uVar15 = uVar16, *(int *)0x45d6 == 2)) {
            pppuStack_8 = (undefined2 ***)0xffff;
            pppuStack_a = (undefined2 ***)0x7;
            pppuStack_c = (undefined2 ***)0x2;
            pppuStack_e = (undefined2 ***)0x3b;
            pppuStack_10 = (undefined2 ***)0x43ae;
            uVar15 = 0xdef;
            pppuStack_14 = (undefined2 ****)0x233a;
            pppuStack_12 = (undefined2 ***)uVar16;
            FUN_1000_02b5();
          }
          uVar16 = uVar15;
          if (*(int *)0x45d6 == 1) {
            pppuStack_8 = (undefined2 ***)0xffff;
            pppuStack_a = (undefined2 ***)0x7;
            pppuStack_c = (undefined2 ***)0x2;
            pppuStack_e = (undefined2 ***)0x3b;
            pppuStack_10 = (undefined2 ***)0x43b4;
            uVar16 = 0xdef;
            pppuStack_14 = (undefined2 ****)0x235d;
            pppuStack_12 = (undefined2 ***)uVar15;
            FUN_1000_02b5();
          }
          if ((*(int *)0x45d6 == -1) || (uVar15 = uVar16, *(int *)0x45d6 == 3)) {
            pppuStack_8 = (undefined2 ***)0xffff;
            pppuStack_a = (undefined2 ***)0x7;
            pppuStack_c = (undefined2 ***)0x2;
            pppuStack_e = (undefined2 ***)0x3b;
            pppuStack_10 = (undefined2 ***)0x43ba;
            uVar15 = 0xdef;
            pppuStack_14 = (undefined2 ****)0x2387;
            pppuStack_12 = (undefined2 ***)uVar16;
            FUN_1000_02b5();
          }
        }
        pppuStack_a = (undefined2 ***)0x2393;
        pppuStack_8 = (undefined2 ***)uVar15;
        func_0x000297e6();
        pppuStack_8 = (undefined2 ***)0x22b2;
        pppuStack_a = (undefined2 ***)0x2398;
        func_0x00029d78();
        pppuStack_10 = (undefined2 ***)0x22b2;
        pppuStack_12 = (undefined2 ***)0x23a2;
        func_0x000299d1();
        pppuStack_10 = (undefined2 ***)0x45c6;
        pppuStack_12 = appuStack_e56;
        pppuStack_14 = (undefined2 ***)0x22b2;
        pppuStack_16 = (undefined2 ****)0x23b0;
        FUN_21f2_3454();
        pppuStack_8 = (undefined2 ***)0xffff;
        pppuStack_a = (undefined2 ***)0x7;
        pppuStack_c = (undefined2 ***)0x2;
        pppuStack_e = (undefined2 ***)0x40;
        pppuStack_10 = appuStack_e56;
        pppuStack_12 = (undefined2 ***)0x22b2;
        pppuStack_14 = (undefined2 ***)0x23cd;
        FUN_1000_02b5();
        if ((*(char *)0x45d8 != '\0') && (*(char *)0x45d9 != '\0')) {
          if (local_99e == 0) {
            pppuStack_10 = (undefined2 ***)0x45cd;
          }
          else {
            pppuStack_10 = (undefined2 ***)0x45d0;
          }
          pppuStack_8 = (undefined2 ***)0xffff;
          pppuStack_a = (undefined2 ***)0x7;
          pppuStack_c = (undefined2 ***)0x2;
          pppuStack_e = (undefined2 ***)0x2e;
          pppuStack_12 = (undefined2 ***)0xdef;
          pppuStack_14 = (undefined2 ***)0x2413;
          FUN_1000_02b5();
        }
        ppppuVar18 = (undefined2 ****)0xdef;
        if (*(int *)0xc22 == 0) {
          *(undefined2 *)0xc22 = 1;
        }
        pppuStack_1038 = (undefined2 ***)*(int *)0x9c70;
        pppuStack_1036 = (undefined2 ***)*(int *)0x9c72;
        pppuStack_e8c = pppuStack_1038;
        pppuStack_e8a = pppuStack_1036;
LAB_3ab8_78ba:
        if ((((int)local_918[0] + (int)local_9ae + (int)local_910 + (int)local_1160 != 0) ||
            (*(char *)0x45d8 != '\0')) || (*(int *)0xce6 != 0)) {
          *(undefined2 *)0xa4a = 1;
        }
        *(undefined2 *)0xa48 = 6;
        *(undefined2 *)0xc20 = 1;
        *(undefined2 *)0xc2c = 1;
        *(undefined2 *)0xc1a = 0;
        pppuStack_8 = apppuStack_bd8;
        pppuStack_a = &pppuStack_115e;
        pppuStack_c = &pppuStack_10ce;
        pppuStack_e = appuStack_420;
        pppuStack_10 = appuStack_21c;
        ppppuVar17 = (undefined2 ****)0x3bf;
        pppuStack_14 = (undefined2 ****)0x2493;
        pppuStack_12 = ppppuVar18;
        uStack_e64 = func_0x00006608();
        *(undefined2 *)0xc20 = 0;
        *(undefined2 *)0xa4a = 0;
        *(undefined2 *)0xa48 = 0;
        *(undefined2 *)0xc2c = 0;
        *(undefined2 *)0xc1a = 0;
LAB_3ab8_792b:
        if ((((undefined2 ****)apppuStack_bd8[0] != (undefined2 ****)0x0) &&
            ((int)appuStack_420[0] < 0x10)) && (0xdc < (int)appuStack_21c[0])) {
          apppuStack_bd8[0] = (undefined2 ****)0x0;
          uStack_e64 = (int)(appuStack_21c[0] + -0x6e) / 0x38 + 0x31;
          if (0x244 < (int)appuStack_21c[0]) {
            uStack_e64 = 0x7f;
          }
        }
        if (*(int *)0x158 != 0) {
          pppuStack_8 = (undefined2 ***)0x2;
          pppuStack_a = (undefined2 ***)0x10;
          pppuStack_e = (undefined2 ****)0x24fd;
          pppuStack_c = ppppuVar17;
          FUN_1000_0599();
          pppuStack_8 = (undefined2 ****)0xdef;
          pppuStack_a = (undefined2 ****)0x2504;
          func_0x00010526();
          goto LAB_3ab8_5cef;
        }
        ppppuVar14 = ppppuVar17;
        if ((uStack_e64 == 0xffff) && (*(char *)0x45d8 != '\0')) break;
        if ((uStack_e64 == 0xffff) && (*(int *)0xce6 != 0)) goto LAB_3ab8_6d7d;
        pppuStack_8 = ppppuVar17;
        if ((uStack_e64 == 0xffff) &&
           ((int)local_918[0] + (int)local_9ae + (int)local_910 + (int)local_1160 != 0)) {
          pppuStack_a = (undefined2 ***)0x2547;
          func_0x0000c3ca();
          pppuStack_8 = &local_1160;
          pppuStack_a = local_918;
          pppuStack_c = &local_9ae;
          pppuStack_e = &local_910;
          pcVar5 = (code *)swi(0x3f);
          (*pcVar5)();
          ppppuVar14 = (undefined2 ****)0x885;
          goto LAB_3ab8_7556;
        }
        if ((uStack_e64 == 0x7f) || ((*(char *)0xefb != '|' && (*(byte *)0xefb == uStack_e64)))) {
          pppuStack_a = (undefined2 ***)0x2584;
          FUN_1885_2ec3();
          pppuStack_8 = (undefined2 ***)0x1b6e;
          pppuStack_a = (undefined2 ***)0x2589;
          func_0x00013e19();
          pppuStack_8 = (undefined2 ***)0x2;
          pppuStack_a = (undefined2 ***)0x11;
          pppuStack_c = (undefined2 ***)0x11f2;
          pppuStack_e = (undefined2 ****)0x2596;
          FUN_1000_0599();
          pppuStack_8 = (undefined2 ***)0xdef;
          ppppuVar14 = (undefined2 ****)0xdef;
          pppuStack_a = (undefined2 ***)0x259d;
          func_0x00010526();
          goto LAB_3ab8_5c64;
        }
        if (uStack_e64 == 99) {
          pppuStack_e8c = (undefined2 ***)*(int *)0x9c70;
          pppuStack_e8a = (undefined2 ***)*(int *)0x9c72;
          goto LAB_3ab8_7556;
        }
        if ((0x30 < (int)uStack_e64) && ((int)uStack_e64 < 0x37)) {
          pppuStack_a = (undefined2 ***)0x25cf;
          FUN_1885_2ec3();
          pppuStack_8 = (undefined2 ***)0x1b6e;
          pppuStack_a = (undefined2 ***)0x25d4;
          func_0x00013e19();
          pppuStack_8 = (undefined2 ***)0x2;
          pppuStack_a = (undefined2 ***)0x11;
          pppuStack_c = (undefined2 ****)0x11f2;
          pppuStack_e = (undefined2 ****)0x25e1;
          FUN_1000_0599();
          pppuStack_8 = (undefined2 ***)0xdef;
          ppppuVar14 = (undefined2 ****)0xdef;
          pppuStack_a = (undefined2 ***)0x25e8;
          func_0x00010526();
          apppuStack_bd8[0] = (undefined2 ****)0x0;
          pppuStack_e8c = (undefined2 ***)*(int *)0x9c74;
          pppuStack_e8a = (undefined2 ***)*(int *)0x9c76;
          if (uStack_e64 == 0x31) {
            pppuStack_8 = (undefined2 ***)0xdef;
            ppppuVar14 = (undefined2 ****)0x885;
            pppuStack_a = (undefined2 ***)0x2609;
            func_0x0000c3ca();
            pppuStack_8 = (undefined2 ***)0x45de;
            pppuStack_a = (undefined2 ***)0x45da;
            pppuStack_c = (undefined2 ****)0x9f0;
            pppuStack_e = (undefined2 ****)0x45d8;
            pppuStack_10 = (undefined2 ****)0x43ae;
            pcVar5 = (code *)swi(0x3f);
            iVar9 = (*pcVar5)();
            if (iVar9 == 0x65) break;
          }
          if (uStack_e64 == 0x32) {
            local_102c = (undefined2 ***)(1 - (int)local_102c);
          }
          if (uStack_e64 == 0x33) {
            local_bb4 = (undefined2 ***)(1 - (int)local_bb4);
            local_99e = 1 - local_99e;
          }
          if (uStack_e64 == 0x34) {
            *(int *)0x45d4 = *(int *)0x45d4 + 1;
            if (3 < *(int *)0x45d4) {
              *(undefined2 *)0x45d4 = 0xffff;
            }
            if ((*(char *)0x45d8 != '\0') && (0 < *(int *)0x45d4)) {
              *(undefined2 *)0x45d4 = 0xffff;
            }
          }
          if ((uStack_e64 == 0x35) && (*(int *)0x45d6 = *(int *)0x45d6 + 1, 3 < *(int *)0x45d6)) {
            *(undefined2 *)0x45d6 = 0xffff;
          }
          if ((*(char *)0x45d8 != '\0') && (0 < *(int *)0x45d6)) {
            *(undefined2 *)0x45d6 = 0xffff;
          }
          if (uStack_e64 != 0x36) goto LAB_3ab8_7556;
          pppuStack_8 = (undefined2 ****)0x45e2;
          pppuStack_a = (undefined2 ****)0x0;
          pcVar5 = (code *)swi(0x3f);
          iVar9 = (*pcVar5)();
          if ((iVar9 == -1) || (*(int *)0x158 == 0)) goto LAB_3ab8_7556;
          goto LAB_3ab8_5cef;
        }
        local_99c = 0;
        *(undefined2 *)0xc18 = 0;
        if (((undefined2 ****)apppuStack_bd8[0] != (undefined2 ****)0x0) && (uStack_e64 == 100)) {
          pppuStack_e8c = (undefined2 ***)*(int *)0x9c70;
          pppuStack_e8a = (undefined2 ***)*(int *)0x9c72;
          pppuStack_8 = &pppuStack_115e;
          pppuStack_a = &pppuStack_10ce;
          pppuStack_c = apppuStack_bd8[0];
          ppppuVar14 = (undefined2 ****)0x11f2;
          pppuStack_10 = (undefined2 ****)0x2717;
          pppuStack_e = ppppuVar17;
          iVar9 = func_0x00015409();
          if (iVar9 == 0) goto LAB_3ab8_7556;
          local_910 = (undefined2 ***)0x0;
          local_9ae = (undefined2 ***)0x0;
          local_918[0] = (undefined2 ***)0x0;
          local_1160 = (undefined2 ***)0x0;
          local_99c = 1;
          pppuStack_8 = (undefined2 ***)0x2;
          pppuStack_a = (undefined2 ***)0x10;
          pppuStack_c = (undefined2 ****)0x11f2;
          pppuStack_e = (undefined2 ****)0x2746;
          FUN_1000_0599();
          pppuStack_8 = (undefined2 ***)0xdef;
          pppuStack_a = (undefined2 ***)0x274d;
          func_0x00010526();
          pppuStack_8 = (undefined2 ***)0xdef;
          ppppuVar17 = (undefined2 ****)0x885;
          pppuStack_a = (undefined2 ***)0x2752;
          func_0x0000c3ca();
        }
        if (*(char *)0x45d8 == '\0') {
          pppuStack_1040 = pppuStack_10ce;
          pppuStack_103e = pppuStack_10cc;
          pppuStack_10ca = pppuStack_115e;
          pppuStack_10c8 = pppuStack_115c;
          pppuStack_e80 = (undefined2 ***)*(int *)0x45da;
          pppuStack_e7e = (undefined2 ***)*(int *)0x45dc;
          pppuStack_1030 = (undefined2 ***)*(int *)0x45de;
          pppuStack_102e = (undefined2 ***)*(int *)0x45e0;
        }
        else {
          pppuStack_10ca = pppuStack_dde;
          pppuStack_10c8 = pppuStack_ddc;
          pppuStack_a = (undefined2 ***)0x2775;
          pppuStack_8 = ppppuVar17;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x277e;
          func_0x0002996b();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2787;
          func_0x00029b55();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2790;
          func_0x00029983();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2799;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x27a2;
          FUN_28b3_100d();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x27ab;
          func_0x00029983();
          pppuStack_8 = (undefined2 ***)auStack_dee;
          pppuStack_a = (undefined2 ***)auStack_bc6;
          pppuStack_c = (undefined2 ****)0x1;
          pppuStack_e = (undefined2 ****)0x22b2;
          pppuStack_10 = (undefined2 ***)0x27be;
          FUN_1def_0338();
          pppuStack_8 = (undefined2 ***)0x1bb4;
          pppuStack_a = (undefined2 ***)0x27ca;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x27cf;
          func_0x00029d78();
          pppuStack_10 = (undefined2 ***)0x22b2;
          pppuStack_12 = (undefined2 ***)0x27d9;
          func_0x000299d1();
          pppuStack_10 = (undefined2 ***)0x22b2;
          pppuStack_12 = (undefined2 ***)0x27e2;
          func_0x000297e6();
          pppuStack_10 = (undefined2 ***)0x22b2;
          pppuStack_12 = (undefined2 ***)0x27e7;
          func_0x00029d78();
          pppuStack_18 = (undefined2 ***)0x22b2;
          pppuStack_1a = (undefined2 ***)0x27f1;
          func_0x000299d1();
          pppuStack_18 = (undefined2 ***)0x1;
          pppuStack_1a = (undefined2 ***)0x22b2;
          pppuStack_1c = (undefined2 ***)0x27fa;
          piVar10 = (int *)FUN_1def_05d1();
          pppuStack_de6 = (undefined2 ***)*piVar10;
          pppuStack_de4 = (undefined2 ***)piVar10[1];
          pppuStack_8 = (undefined2 ***)0x1bb4;
          pppuStack_a = (undefined2 ***)0x2815;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x281a;
          func_0x00029d78();
          pppuStack_10 = (undefined2 ***)0x22b2;
          pppuStack_12 = (undefined2 ***)0x2824;
          func_0x000299d1();
          pppuStack_10 = (undefined2 ***)0x22b2;
          pppuStack_12 = (undefined2 ***)0x282d;
          func_0x000297e6();
          pppuStack_10 = (undefined2 ****)0x22b2;
          pppuStack_12 = (undefined2 ****)0x2832;
          func_0x00029d78();
          pppuStack_18 = (undefined2 ***)0x22b2;
          pppuStack_1a = (undefined2 ***)0x283c;
          func_0x000299d1();
          pppuStack_18 = (undefined2 ****)0x1;
          pppuStack_1a = (undefined2 ****)0x22b2;
          uVar15 = 0x1bb4;
          pppuStack_1c = (undefined2 ****)0x2845;
          piVar10 = (int *)func_0x0001e558();
          pppuStack_e62 = (undefined2 ***)*piVar10;
          iStack_e60 = piVar10[1];
          if (*(char *)0x45d9 != '\0') {
            pppuStack_8 = (undefined2 ***)0x1bb4;
            pppuStack_a = (undefined2 ***)0x2867;
            func_0x000297e6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x286c;
            func_0x00029ae7();
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x2875;
            func_0x0002996b();
            pppuStack_8 = (undefined2 ***)0x22b2;
            uVar15 = 0x22b2;
            pppuStack_a = (undefined2 ***)0x287d;
            FUN_28b3_0ee9();
            if (local_99e != 0) {
              pppuStack_8 = (undefined2 ***)0x22b2;
              pppuStack_a = (undefined2 ***)0x288d;
              func_0x000297e6();
              pppuStack_8 = (undefined2 ***)0x22b2;
              pppuStack_a = (undefined2 ***)0x2892;
              func_0x00029af6();
              pppuStack_8 = (undefined2 ***)0x22b2;
              uVar15 = 0x22b2;
              pppuStack_a = (undefined2 ***)0x289b;
              func_0x00029983();
            }
          }
          uVar19 = 0;
          if (*(int *)0x45d4 != 0) {
            pppuStack_a = (undefined2 ***)0x28ab;
            pppuStack_8 = (undefined2 ***)uVar15;
            func_0x000297e6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x28b4;
            func_0x000297e6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x28b9;
            FUN_28b3_1181();
            if ((bool)uVar19) {
              pppuStack_8 = (undefined2 ***)0x22b2;
              pppuStack_a = (undefined2 ***)0x28c4;
              func_0x000297e6();
              pppuStack_8 = (undefined2 ***)0x22b2;
              pppuStack_a = (undefined2 ***)0x28cd;
              FUN_28b3_100d();
              pppuStack_8 = &pppuStack_de6;
              pppuStack_a = (undefined2 ***)0x22b2;
              pppuStack_c = (undefined2 ****)0x28d7;
              func_0x00029b55();
            }
            else {
              pppuStack_8 = (undefined2 ***)0x22b2;
              pppuStack_a = (undefined2 ***)0x28e2;
              func_0x000297e6();
              pppuStack_8 = (undefined2 ***)0x22b2;
              pppuStack_a = (undefined2 ***)0x28eb;
              FUN_28b3_100d();
              pppuStack_8 = &pppuStack_de6;
              pppuStack_a = (undefined2 ***)0x22b2;
              pppuStack_c = (undefined2 ****)0x28f5;
              func_0x00029bb5();
            }
            pppuStack_8 = (undefined2 ***)0x22b2;
            uVar15 = 0x22b2;
            pppuStack_a = (undefined2 ***)0x28fb;
            func_0x00029983();
          }
          uVar19 = 0;
          uVar20 = *(int *)0x45d6 == 0;
          if (!(bool)uVar20) {
            pppuStack_a = (undefined2 ***)0x290b;
            pppuStack_8 = (undefined2 ***)uVar15;
            func_0x000297e6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x2914;
            func_0x000297e6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x2919;
            FUN_28b3_1181();
            if ((bool)uVar19) {
              pppuStack_8 = (undefined2 ***)0x22b2;
              pppuStack_a = (undefined2 ***)0x2924;
              func_0x000297e6();
              pppuStack_8 = (undefined2 ***)0x22b2;
              pppuStack_a = (undefined2 ***)0x292d;
              FUN_28b3_100d();
              pppuStack_8 = &pppuStack_e62;
              pppuStack_a = (undefined2 ***)0x22b2;
              pppuStack_c = (undefined2 ****)0x2937;
              func_0x00029b55();
            }
            else {
              pppuStack_8 = (undefined2 ***)0x22b2;
              pppuStack_a = (undefined2 ***)0x2942;
              func_0x000297e6();
              pppuStack_8 = (undefined2 ***)0x22b2;
              pppuStack_a = (undefined2 ***)0x294b;
              FUN_28b3_100d();
              pppuStack_8 = &pppuStack_e62;
              pppuStack_a = (undefined2 ***)0x22b2;
              pppuStack_c = (undefined2 ****)0x2955;
              func_0x00029bb5();
            }
            pppuStack_8 = (undefined2 ***)0x22b2;
            uVar15 = 0x22b2;
            pppuStack_a = (undefined2 ***)0x295b;
            func_0x00029983();
          }
          pppuStack_a = (undefined2 ***)0x2964;
          pppuStack_8 = (undefined2 ***)uVar15;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x296d;
          func_0x00029b6d();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2976;
          func_0x0002996b();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x297f;
          func_0x00029b6d();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2988;
          func_0x0002996b();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2990;
          FUN_28b3_0ee9();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2999;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x29a2;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x29ab;
          func_0x00029b6d();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x29b4;
          func_0x0002996b();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x29b9;
          FUN_28b3_1181();
          if ((bool)uVar20) {
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x29c4;
            func_0x000297e6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x29cd;
            func_0x000297e6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            ppppuVar14 = (undefined2 ****)0x22b2;
            pppuStack_a = (undefined2 ***)0x29d2;
            FUN_28b3_1181();
            if ((bool)uVar20) goto LAB_3ab8_7556;
          }
          uVar20 = 0;
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x29e0;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x29e9;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x29ee;
          FUN_28b3_1181();
          bVar4 = !(bool)uVar19;
          if (bVar4) {
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x2a01;
            func_0x000297e6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x2a06;
            func_0x00029af6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x2a0f;
            func_0x00029983();
          }
          local_102c = (undefined2 ***)(uint)bVar4;
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2a1e;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2a27;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          ppppuVar17 = (undefined2 ****)0x22b2;
          pppuStack_a = (undefined2 ***)0x2a2c;
          FUN_28b3_1181();
          if ((bool)uVar19 || (bool)uVar20) {
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x2a3f;
            func_0x000297e6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x2a44;
            func_0x00029af6();
            pppuStack_8 = (undefined2 ***)0x22b2;
            ppppuVar17 = (undefined2 ****)0x22b2;
            pppuStack_a = (undefined2 ***)0x2a4d;
            func_0x00029983();
            local_bb4 = (undefined2 ****)0x1;
          }
          else {
            local_bb4 = (undefined2 ****)0x0;
          }
        }
        pppuStack_21e = (undefined2 ***)*(int *)0x45d4;
        pppuStack_10c2 = (undefined2 ***)*(int *)0x45d6;
        uVar19 = local_99c == 0;
        pppuStack_8 = ppppuVar17;
        if ((bool)uVar19) {
          iStack_9b2 = *(int *)0x9c24;
          iStack_9b0 = *(int *)0x9c26;
          pppuStack_660 = pppuStack_1030;
          pppuStack_65e = pppuStack_102e;
          pppuStack_a = (undefined2 ***)0x2b7a;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2b83;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2b88;
          FUN_28b3_1181();
          if (!(bool)uVar19) goto LAB_3ab8_8026;
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2b93;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          pppuStack_a = (undefined2 ***)0x2b9c;
          func_0x000297e6();
          pppuStack_8 = (undefined2 ***)0x22b2;
          ppppuVar18 = (undefined2 ****)0x22b2;
          pppuStack_a = (undefined2 ***)0x2ba1;
          FUN_28b3_1181();
          if (!(bool)uVar19) {
LAB_3ab8_8026:
            pppuStack_e8c = pppuStack_10ce;
            pppuStack_e8a = pppuStack_10cc;
            pppuStack_1038 = pppuStack_115e;
            pppuStack_1036 = pppuStack_115c;
            pppuStack_8 = (undefined2 ***)0x22b2;
            pppuStack_a = (undefined2 ***)0x2bcb;
            FUN_1885_2ec3();
            pppuStack_8 = (undefined2 ***)0x1b6e;
            ppppuVar18 = (undefined2 ****)0x11f2;
            pppuStack_a = (undefined2 ***)0x2bd0;
            func_0x00013e19();
            local_df0 = 0;
            do {
              if ((int)uStack_e7c < (int)local_df0) {
                if (local_99c == 0) break;
                goto LAB_3ab8_7fc0;
              }
              if ((local_1026[local_df0 * 2] != 500) && (local_1026[local_df0 * 2] != 0xfe0c)) {
                if ((local_1026[local_df0 * 2] == 700) || (local_1026[local_df0 * 2] == 0xfd44)) {
                  iStack_9b2 = local_bb2[local_df0 * 4];
                  iStack_9b0 = local_bb2[local_df0 * 4 + 1];
                }
                else if ((((local_1026[local_df0 * 2] == 0x2ee) ||
                          (local_1026[local_df0 * 2] == 0xfd12)) ||
                         (local_1026[local_df0 * 2] == 0x2ef)) ||
                        (local_1026[local_df0 * 2] == 0xfd11)) {
                  pppuStack_660 = pppuStack_1030;
                  pppuStack_65e = pppuStack_102e;
                  if (local_1026[local_df0 * 2 + 1] == 1) {
                    pppuStack_660 = pppuStack_e80;
                    pppuStack_65e = pppuStack_e7e;
                  }
                }
                else if (local_10c0[local_df0] < 10000) {
                  pppuStack_a = (undefined2 ***)0x2c94;
                  pppuStack_8 = ppppuVar18;
                  func_0x000297e6();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2c99;
                  func_0x00029d78();
                  pppuStack_10 = (undefined2 ***)0x22b2;
                  pppuStack_12 = (undefined2 ***)0x2ca3;
                  func_0x000299d1();
                  pppuStack_10 = (undefined2 ***)auStack_e70;
                  pppuStack_12 = (undefined2 ***)auStack_e5e;
                  pppuStack_14 = &pppuStack_e62;
                  pppuStack_16 = &pppuStack_de6;
                  pppuStack_18 = (undefined2 ****)local_dd8[local_df0 * 4 + 3];
                  pppuStack_1a = (undefined2 ****)local_dd8[local_df0 * 4 + 2];
                  pppuStack_1c = (undefined2 ****)local_bb2[local_df0 * 4 + 3];
                  pppuStack_1e = (undefined2 ****)local_bb2[local_df0 * 4 + 2];
                  pppuStack_20 = (undefined2 ****)local_dd8[local_df0 * 4 + 1];
                  pppuStack_22 = (undefined2 ****)local_dd8[local_df0 * 4];
                  pppuStack_24 = (undefined2 ****)local_bb2[local_df0 * 4 + 1];
                  pppuStack_26 = (undefined2 ****)local_bb2[local_df0 * 4];
                  pppuStack_2a = (undefined2 ***)local_1026[local_df0 * 2];
                  pppuStack_2c = pppuStack_e58;
                  pppuStack_2e = pppuStack_e5a;
                  pppuStack_30 = local_bb4;
                  pppuStack_32 = local_102c;
                  pppuStack_34 = pppuStack_10c2;
                  pppuStack_36 = pppuStack_21e;
                  pppuStack_38 = pppuStack_65a;
                  pppuStack_3a = pppuStack_65c;
                  pppuStack_3c = pppuStack_10c4;
                  pppuStack_3e = pppuStack_10c6;
                  pppuStack_40 = pppuStack_e82;
                  pppuStack_42 = pppuStack_e84;
                  pppuStack_44 = pppuStack_1032;
                  pppuStack_46 = pppuStack_1034;
                  pppuStack_48 = pppuStack_e6a;
                  pppuStack_4a = pppuStack_e6c;
                  pppuStack_4c = pppuStack_102e;
                  pppuStack_4e = pppuStack_1030;
                  pppuStack_50 = pppuStack_e7e;
                  pppuStack_52 = pppuStack_e80;
                  uStack_56 = 0x22b2;
                  uStack_58 = 0x2d46;
                  uStack_54 = unaff_DI;
                  FUN_4375_bfa5();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2d52;
                  func_0x000297e6();
                  pppuStack_8 = &pppuStack_de6;
                  pppuStack_a = (undefined2 ***)0x22b2;
                  pppuStack_c = (undefined2 ***)0x2d5c;
                  func_0x00029bb5();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2d62;
                  func_0x00029983();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2d6b;
                  func_0x000297e6();
                  pppuStack_8 = (undefined2 ***)auStack_e5e;
                  pppuStack_a = (undefined2 ***)0x22b2;
                  pppuStack_c = (undefined2 ***)0x2d75;
                  func_0x00029bb5();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2d7b;
                  func_0x00029983();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2d84;
                  func_0x000297e6();
                  pppuStack_8 = &pppuStack_e62;
                  pppuStack_a = (undefined2 ***)0x22b2;
                  pppuStack_c = (undefined2 ***)0x2d8e;
                  func_0x00029bb5();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2d94;
                  func_0x00029983();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2d9d;
                  func_0x000297e6();
                  pppuStack_8 = (undefined2 ***)auStack_e70;
                  pppuStack_a = (undefined2 ***)0x22b2;
                  pppuStack_c = (undefined2 ***)0x2da7;
                  func_0x00029bb5();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2dad;
                  func_0x00029983();
                  if ((int)local_918[0] + (int)local_9ae + (int)local_910 + (int)local_1160 == 0) {
                    *(undefined2 *)0xa4a = 0;
                  }
                  else {
                    *(undefined2 *)0xa4a = 1;
                  }
                  *(undefined2 *)0xa48 = 6;
                  *(undefined2 *)0xc20 = 1;
                  *(undefined2 *)0xc2c = 1;
                  *(undefined2 *)0xc1a = 0;
                  *(undefined2 *)0xc18 = 0;
                  pppuStack_8 = apppuStack_bd8;
                  pppuStack_a = &pppuStack_115e;
                  pppuStack_c = &pppuStack_10ce;
                  pppuStack_e = appuStack_420;
                  pppuStack_10 = appuStack_21c;
                  pppuStack_12 = (undefined2 ****)0x22b2;
                  ppppuVar17 = (undefined2 ****)0x3bf;
                  pppuStack_14 = (undefined2 ****)0x2e02;
                  uStack_e64 = func_0x00006608();
                  *(undefined2 *)0xc20 = 0;
                  *(undefined2 *)0xa4a = 0;
                  *(undefined2 *)0xa48 = 0;
                  *(undefined2 *)0xc2c = 0;
                  *(undefined2 *)0xc1a = 0;
                  if ((uStack_e64 != 0) ||
                     (uVar19 = (undefined2 ****)apppuStack_bd8[0] == (undefined2 ****)0x0,
                     !(bool)uVar19)) goto LAB_3ab8_792b;
                  pppuStack_8 = (undefined2 ***)0x3bf;
                  pppuStack_a = (undefined2 ***)0x2e32;
                  func_0x000297e6();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2e3b;
                  func_0x000297e6();
                  pppuStack_8 = (undefined2 ****)0x22b2;
                  ppppuVar17 = (undefined2 ****)0x22b2;
                  pppuStack_a = (undefined2 ****)0x2e40;
                  FUN_28b3_1181();
                  if (!(bool)uVar19) goto LAB_3ab8_792b;
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2e4b;
                  func_0x000297e6();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2e54;
                  func_0x000297e6();
                  pppuStack_8 = (undefined2 ****)0x22b2;
                  ppppuVar17 = (undefined2 ****)0x22b2;
                  pppuStack_a = (undefined2 ****)0x2e59;
                  FUN_28b3_1181();
                  if (!(bool)uVar19) goto LAB_3ab8_792b;
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2e67;
                  func_0x000297e6();
                  uVar19 = (local_df0 & 0x3fff) == 0;
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2e78;
                  func_0x000297e6();
                  pppuStack_8 = (undefined2 ***)0x22b2;
                  pppuStack_a = (undefined2 ***)0x2e7d;
                  FUN_28b3_1181();
                  if ((bool)uVar19) {
                    uVar15 = *(undefined2 *)0xa6c;
                    if ((0 < local_1156[local_df0]) && (local_1156[local_df0] < 10)) {
                      *(int *)0xa6c = local_1156[local_df0];
                    }
                    pppuStack_8 = (undefined2 ***)0x1;
                    pppuStack_a = (undefined2 ***)0x22b2;
                    pppuStack_c = (undefined2 ***)0x2eb1;
                    func_0x000297e6();
                    pppuStack_a = (undefined2 ***)0x22b2;
                    pppuStack_c = (undefined2 ****)0x2eb6;
                    func_0x00029d78();
                    pppuStack_12 = (undefined2 ***)0x22b2;
                    pppuStack_14 = (undefined2 ***)0x2ec0;
                    func_0x000299d1();
                    pppuStack_12 = (undefined2 ***)0x22b2;
                    pppuStack_14 = (undefined2 ***)0x2ec9;
                    func_0x000297e6();
                    pppuStack_12 = (undefined2 ****)0x22b2;
                    pppuStack_14 = (undefined2 ****)0x2ece;
                    func_0x00029d78();
                    pppuStack_1a = (undefined2 ***)0x22b2;
                    pppuStack_1c = (undefined2 ***)0x2ed8;
                    func_0x000299d1();
                    pppuStack_1a = (undefined2 ***)0x22b2;
                    pppuStack_1c = (undefined2 ***)0x2ee1;
                    func_0x000297e6();
                    pppuStack_1a = (undefined2 ****)0x22b2;
                    pppuStack_1c = (undefined2 ****)0x2ee6;
                    func_0x00029d78();
                    pppuStack_22 = (undefined2 ***)0x22b2;
                    pppuStack_24 = (undefined2 ***)0x2ef0;
                    func_0x000299d1();
                    pppuStack_22 = (undefined2 ***)0x22b2;
                    pppuStack_24 = (undefined2 ***)0x2ef9;
                    func_0x000297e6();
                    pppuStack_22 = (undefined2 ****)0x22b2;
                    pppuStack_24 = (undefined2 ****)0x2efe;
                    func_0x00029d78();
                    pppuStack_2a = (undefined2 ***)0x22b2;
                    pppuStack_2c = (undefined2 ***)0x2f08;
                    func_0x000299d1();
                    pppuStack_2a = (undefined2 ****)0x22b2;
                    ppppuVar18 = (undefined2 ****)0x1bb4;
                    pppuStack_2c = (undefined2 ****)0x2f0d;
                    func_0x0001e18f();
                    *(undefined2 *)0xa6c = uVar15;
                  }
                  else {
                    pppuStack_8 = (undefined2 ***)0x22b2;
                    pppuStack_a = (undefined2 ***)0x2f23;
                    func_0x000297e6();
                    pppuStack_8 = (undefined2 ***)0x22b2;
                    pppuStack_a = (undefined2 ***)0x2f28;
                    func_0x00029d78();
                    pppuStack_10 = (undefined2 ***)0x22b2;
                    ppppuVar18 = (undefined2 ****)0x22b2;
                    pppuStack_12 = (undefined2 ***)0x2f32;
                    func_0x000299d1();
                    pppuStack_10 = &ppuStack_442;
                    pppuStack_12 = (undefined2 ****)local_99a[local_df0];
                    pppuStack_14 = (undefined2 ****)local_1156[local_df0];
                    pppuStack_16 = (undefined2 ****)local_10c0[local_df0];
                    pppuStack_18 = (undefined2 ****)local_90c[local_df0 * 2 + 1];
                    pppuStack_1a = (undefined2 ****)local_90c[local_df0 * 2];
                    pppuStack_1c = (undefined2 ****)local_658[local_df0 * 2 + 1];
                    pppuStack_1e = (undefined2 ****)local_658[local_df0 * 2];
                    pppuStack_20 = (undefined2 ****)local_dd8[local_df0 * 4 + 3];
                    pppuStack_22 = (undefined2 ****)local_dd8[local_df0 * 4 + 2];
                    pppuStack_24 = (undefined2 ****)local_bb2[local_df0 * 4 + 3];
                    pppuStack_26 = (undefined2 ***)local_bb2[local_df0 * 4 + 2];
                    pppuStack_2a = pppuStack_e62;
                    pppuStack_2c = pppuStack_de4;
                    pppuStack_2e = pppuStack_de6;
                    pppuStack_30 = (undefined2 ***)*(int *)0x45e4;
                    pppuStack_32 = (undefined2 ***)*(int *)0x45e2;
                    pppuStack_34 = local_bb4;
                    pppuStack_36 = local_102c;
                    pppuStack_38 = pppuStack_65a;
                    pppuStack_3a = pppuStack_65c;
                    pppuStack_3c = pppuStack_65e;
                    pppuStack_3e = pppuStack_660;
                    pppuStack_40 = (undefined2 ****)0x22b2;
                    pppuStack_42 = (undefined2 ****)0x2fad;
                    pppuStack_11ae = (undefined2 ***)FUN_4375_c529();
                    if (-1 < (int)pppuStack_11ae) {
                      uStack_426 = *(undefined1 *)0xb310;
                      uStack_427 = 9;
                      ppppuVar14 = &pppuStack_26;
                      pppuVar13 = &ppuStack_442;
                      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
                        puVar21 = ppppuVar14;
                        ppppuVar14 = ppppuVar14 + 1;
                        pppuVar2 = pppuVar13;
                        pppuVar13 = pppuVar13 + 1;
                        *puVar21 = *pppuVar2;
                      }
                      ppppuVar18 = (undefined2 ****)0x11f2;
                      pppuStack_2a = (undefined2 ****)0x2fdc;
                      func_0x00013e46();
                    }
                  }
                }
              }
              local_df0 = local_df0 + 1;
            } while( true );
          }
          goto LAB_3ab8_78ba;
        }
        pppuStack_a = (undefined2 ***)0x2ab0;
        FUN_1885_2ec3();
        pppuStack_8 = (undefined2 ***)0x1b6e;
        ppppuVar18 = (undefined2 ****)0x11f2;
        pppuStack_a = (undefined2 ***)0x2ab5;
        func_0x00013e19();
        pppuStack_8 = pppuStack_e58;
        pppuStack_a = pppuStack_e5a;
        pppuStack_c = (undefined2 ***)*(int *)0x45e4;
        pppuStack_e = (undefined2 ***)*(int *)0x45e2;
        pppuStack_10 = local_bb4;
        pppuStack_12 = local_102c;
        pppuStack_14 = pppuStack_10c2;
        pppuStack_16 = pppuStack_21e;
        pppuStack_18 = pppuStack_65a;
        pppuStack_1a = pppuStack_65c;
        pppuStack_1c = pppuStack_10c4;
        pppuStack_1e = pppuStack_10c6;
        pppuStack_20 = pppuStack_e82;
        pppuStack_22 = pppuStack_e84;
        pppuStack_24 = pppuStack_1032;
        pppuStack_26 = pppuStack_1034;
        pppuStack_2a = pppuStack_e6c;
        pppuStack_2c = pppuStack_102e;
        pppuStack_2e = pppuStack_1030;
        pppuStack_30 = pppuStack_e7e;
        pppuStack_32 = pppuStack_e80;
        pppuStack_34 = pppuStack_10c8;
        pppuStack_36 = pppuStack_10ca;
        pppuStack_38 = pppuStack_103e;
        pppuStack_3a = pppuStack_1040;
        pppuStack_3c = &local_1160;
        pppuStack_3e = local_918;
        pppuStack_40 = &local_9ae;
        pppuStack_42 = &local_910;
        pppuStack_44 = pppuStack_90e;
        pppuStack_46 = local_e66;
        pppuStack_48 = (undefined2 ****)0x11f2;
        pppuStack_4a = (undefined2 ****)0x2b3d;
        FUN_4375_c770();
LAB_3ab8_7fc0:
        ppppuVar14 = (undefined2 ****)0x885;
        pppuStack_a = (undefined2 ****)0x2b45;
        pppuStack_8 = ppppuVar18;
        func_0x0000abfa();
        if (*(int *)0xce6 != 0) goto LAB_3ab8_5cef;
      } while (*(char *)0x45d8 == '\0');
    }
  } while( true );
}



/* 3ab8:5fd3  FUN_3ab8_5fd3  2728 bytes, 1 callers */

void FUN_3ab8_5fd3(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  int iVar8;
  int unaff_BP;
  int iVar9;
  undefined2 *puVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
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
  
code_r0x00040b53:
  func_0x00029bb5();
  func_0x00029b6d();
  func_0x00029d78();
  uVar6 = FUN_28b3_0f51();
  *(undefined2 *)(unaff_BP + -0x1168) = uVar6;
  FUN_28b3_0d8b();
  func_0x0002996b();
  func_0x00029b6d();
  func_0x00029bb5();
  func_0x0002996b();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029b6d();
  FUN_28b3_0d8b();
  FUN_28b3_1168();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_1163();
  func_0x00029983();
  func_0x000297e6();
  func_0x0002996b();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029bb5();
  func_0x00029b6d();
  func_0x00029d78();
  uVar6 = FUN_28b3_0f51();
  *(undefined2 *)(unaff_BP + -0xe8c) = uVar6;
  *(undefined2 *)(unaff_BP + -0x1168) = uVar6;
  FUN_28b3_0d8b();
  func_0x0002996b();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029bb5();
  func_0x0002996b();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029b6d();
  FUN_28b3_0d8b();
  FUN_28b3_1168();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_1163();
  func_0x00029983();
  do {
    uStack_a = 0xcde;
    uVar6 = FUN_4375_9615();
    *(undefined2 *)(unaff_BP + -0x1160) = uVar6;
    if (*(int *)(unaff_BP + 6) == 4) {
      uVar6 = *(undefined2 *)0x9cba;
      *(undefined2 *)(unaff_BP + -0x1158) = *(undefined2 *)0x9cb8;
      *(undefined2 *)(unaff_BP + -0x1156) = uVar6;
      iVar9 = *(int *)(unaff_BP + -0xe62) * 4;
      if ((((*(int *)(unaff_BP + iVar9 + -0x1024) < 300) ||
           (19999 < *(int *)(unaff_BP + iVar9 + -0x1024))) &&
          (iVar9 = *(int *)(unaff_BP + -0xe62) * 4, *(int *)(unaff_BP + iVar9 + -0x1024) % 10 != 9))
         && (*(int *)(unaff_BP + iVar9 + -0x1022) % 10 != 9)) {
        iVar9 = *(int *)(unaff_BP + -0xe62) * 2;
        if ((0 < *(int *)(unaff_BP + iVar9 + -0x10be)) && (*(int *)(unaff_BP + iVar9 + -0x10be) < 8)
           ) {
          *(undefined2 *)(unaff_BP + -0x1160) =
               *(undefined2 *)(*(int *)(unaff_BP + iVar9 + -0x10be) * 2 + 0xa70);
        }
        if (99 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 4 + -0x1024)) {
          *(undefined2 *)(unaff_BP + -0x1160) = *(undefined2 *)0xa7e;
          *(undefined2 *)(unaff_BP + -0x1162) = *(undefined2 *)0xa8a;
        }
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_117c();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_117c();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_1168();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_1168();
        func_0x00029983();
        goto LAB_3ab8_62cd;
      }
    }
    else {
LAB_3ab8_62cd:
      if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 2 + -0x10be) < 30000) {
        iVar9 = *(int *)(unaff_BP + -0xe62) * 2;
        if (*(int *)(unaff_BP + iVar9 + -0x10be) < 0x2711) {
          func_0x000297e6();
          uVar11 = (*(uint *)(unaff_BP + -0xe62) & 0x3fff) == 0;
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar11) {
            uStack_a = *(undefined2 *)(unaff_BP + -0x1160);
            uStack_c = 0x22b2;
            uStack_e = 0x12ef;
            func_0x000297e6();
            uStack_c = 0x22b2;
            uStack_e = 0x12f4;
            func_0x00029d78();
            uStack_c = 0x22b2;
            uStack_e = 0x12f9;
            uStack_c = FUN_28b3_0f51();
            uStack_e = 0x22b2;
            uStack_10 = 0x1303;
            func_0x000297e6();
            uStack_e = 0x22b2;
            uStack_10 = 0x1308;
            func_0x00029d78();
            uStack_e = 0x22b2;
            uStack_10 = 0x130d;
            uStack_e = FUN_28b3_0f51();
            uStack_10 = 0x22b2;
            uStack_12 = 0x1317;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            uStack_12 = 0x131c;
            func_0x00029d78();
            uStack_10 = 0x22b2;
            uStack_12 = 0x1321;
            uStack_10 = FUN_28b3_0f51();
            uStack_12 = 0x22b2;
            uStack_14 = 0x132b;
            func_0x000297e6();
            uStack_12 = 0x22b2;
            uStack_14 = 0x1330;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0x1335;
            uStack_12 = FUN_28b3_0f51();
            uStack_14 = 0x22b2;
            uStack_16 = 0x133b;
            func_0x0000f350();
          }
          else {
            uStack_a = 0x134d;
            puVar7 = (undefined2 *)FUN_4375_9596();
            uVar6 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0x440) = *puVar7;
            *(undefined2 *)(unaff_BP + -0x43e) = uVar6;
            uStack_a = 0x136a;
            puVar7 = (undefined2 *)FUN_4375_95d8();
            uVar6 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0x43c) = *puVar7;
            *(undefined2 *)(unaff_BP + -0x43a) = uVar6;
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029d78();
            FUN_28b3_0f51();
            uStack_a = 0x13a6;
            uVar14 = func_0x00021eee();
            *(undefined2 *)(unaff_BP + -0x432) = (int)uVar14;
            *(undefined2 *)(unaff_BP + -0x430) = (int)((ulong)uVar14 >> 0x10);
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029d78();
            uVar14 = FUN_28b3_0f51();
            *(undefined2 *)(unaff_BP + -0x11a8) = (int)uVar14;
            *(undefined2 *)(unaff_BP + -0x11a6) = (int)((ulong)uVar14 >> 0x10);
            uStack_a = 0x13db;
            uVar14 = func_0x00021eee();
            *(undefined2 *)(unaff_BP + -0x42e) = (int)uVar14;
            *(undefined2 *)(unaff_BP + -0x42c) = (int)((ulong)uVar14 >> 0x10);
            *(undefined2 *)(unaff_BP + -0x428) = 0;
            *(undefined2 *)(unaff_BP + -0x42a) = 0;
            *(undefined1 *)(unaff_BP + -0x424) = *(undefined1 *)0xb310;
            *(undefined2 *)(unaff_BP + -0x434) = 10000;
            *(undefined1 *)(unaff_BP + -0x426) = *(undefined1 *)0xa6c;
            iVar9 = *(int *)(unaff_BP + -0xe62) * 2;
            if ((0 < *(int *)(unaff_BP + iVar9 + -0x1154)) &&
               (*(int *)(unaff_BP + iVar9 + -0x1154) < 10)) {
              *(undefined1 *)(unaff_BP + -0x426) = *(undefined1 *)(unaff_BP + iVar9 + -0x1154);
            }
            *(undefined1 *)(unaff_BP + -0x425) = *(undefined1 *)0xa6a;
            iVar9 = *(int *)(unaff_BP + -0xe62) * 2;
            if ((0 < *(int *)(unaff_BP + iVar9 + -0x10be)) &&
               (*(int *)(unaff_BP + iVar9 + -0x10be) < 7)) {
              *(undefined1 *)(unaff_BP + -0x425) = *(undefined1 *)(unaff_BP + iVar9 + -0x10be);
            }
            if (*(int *)(unaff_BP + 6) == 3) {
              func_0x000297e6();
              uVar11 = *(int *)(unaff_BP + -0xe62) << 1 < 0;
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x0002996b();
              FUN_28b3_1181();
              if ((bool)uVar11) {
                func_0x000297e6();
                func_0x00029b6d();
                func_0x000297e6();
                func_0x00029b6d();
                FUN_28b3_1163();
                func_0x00029983();
              }
              func_0x000297e6();
              func_0x00029b85();
              func_0x00029983();
            }
            uVar11 = *(uint *)(unaff_BP + 6) < 4;
            if (*(uint *)(unaff_BP + 6) == 4) {
              iVar9 = *(int *)(unaff_BP + -0xe62) * 2;
              if ((0 < *(int *)(unaff_BP + iVar9 + -0x10be)) &&
                 (*(int *)(unaff_BP + iVar9 + -0x10be) < 8)) {
                *(undefined1 *)(unaff_BP + -0x425) = *(undefined1 *)(unaff_BP + iVar9 + -0x10be);
              }
              if (99 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 4 + -0x1024)) {
                *(undefined1 *)(unaff_BP + -0x425) = 7;
                *(undefined1 *)(unaff_BP + -0x426) = 1;
              }
              uVar11 = (int)(*(uint *)(unaff_BP + -0xe62) << 1) < 0;
              uVar12 = (*(uint *)(unaff_BP + -0xe62) & 0x3fff) == 0;
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029ae7();
              func_0x0002996b();
              func_0x00029b85();
              func_0x00029983();
              *(undefined2 *)(unaff_BP + -0x434) = 10000;
              func_0x00029834();
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029d78();
              FUN_28b3_1181();
              if (!(bool)uVar11) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar11 || (bool)uVar12) {
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029c2c();
                  uVar6 = FUN_28b3_0f51();
                  *(undefined2 *)(unaff_BP + -0x434) = uVar6;
                }
              }
            }
            else {
              uVar12 = 0;
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar11 && !(bool)uVar12) {
              puVar10 = &uStack_20;
              puVar7 = (undefined2 *)(unaff_BP + -0x440);
              for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar3 = puVar10;
                puVar10 = puVar10 + 1;
                puVar13 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar3 = *puVar13;
              }
              func_0x00013e46(0x22b2);
            }
          }
        }
        else {
          puVar13 = (undefined2 *)func_0x00000398();
          puVar10 = (undefined2 *)puVar13;
          puVar7 = (undefined2 *)(unaff_BP + -0x119c);
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar2 = *puVar3;
          }
          *(undefined2 *)(unaff_BP + -0x116c) = 0;
          if (999 < *(int *)(unaff_BP + iVar9 + -0x1154)) {
            piVar1 = (int *)(unaff_BP + iVar9 + -0x1154);
            *piVar1 = *piVar1 + -1000;
            *(undefined2 *)(unaff_BP + -0x116c) = 1;
          }
          *(byte *)(unaff_BP + -0x1186) = *(byte *)(unaff_BP + -0x1186) & 0xdf;
          if (*(int *)(unaff_BP + -0x116c) != 0) {
            *(byte *)(unaff_BP + -0x1186) = *(byte *)(unaff_BP + -0x1186) | 0x20;
          }
          *(int *)(unaff_BP + -0x117c) =
               *(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 2 + -0x1154) / 100;
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029af6();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_117c();
          func_0x00029d78();
          uStack_c = 0x22b2;
          uStack_e = 0xf61;
          func_0x000299d1();
          uStack_c = 0x22b2;
          uStack_e = 0xf66;
          FUN_28b3_1582();
          uVar11 = (undefined1 *)0xfff7 < &uStack_a;
          uVar12 = &stack0x0000 == (undefined1 *)0x2;
          func_0x00029834();
          func_0x0002996b();
          FUN_28b3_1181();
          if (!(bool)uVar11 && !(bool)uVar12) {
            func_0x000297e6();
            func_0x00029b9d();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b9d();
            func_0x00029983();
            uStack_a = 0xfc6;
            FUN_1885_0344();
            uStack_a = 0xfdf;
            puVar7 = (undefined2 *)func_0x00018eff();
            uVar6 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0x1180) = *puVar7;
            *(undefined2 *)(unaff_BP + -0x117e) = uVar6;
            uVar6 = *(undefined2 *)0x9bf4;
            uVar5 = *(undefined2 *)0x9bf6;
            *(undefined2 *)(unaff_BP + -0x1170) = uVar6;
            *(undefined2 *)(unaff_BP + -0x116e) = uVar5;
            *(undefined2 *)(unaff_BP + -0x11a0) = uVar6;
            *(undefined2 *)(unaff_BP + -0x119e) = uVar5;
            FUN_28b3_0d8b();
            func_0x00029983();
            if (*(int *)(unaff_BP + -0x116c) != 0) {
              FUN_28b3_0d8b();
              func_0x00029983();
            }
            if (((*(int *)(unaff_BP + -0x117c) == 1) || (*(int *)(unaff_BP + -0x117c) == 4)) ||
               (*(int *)(unaff_BP + -0x117c) == 7)) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029c2c();
              func_0x00029983();
            }
            if (((*(int *)(unaff_BP + -0x117c) == 2) || (*(int *)(unaff_BP + -0x117c) == 5)) ||
               (*(int *)(unaff_BP + -0x117c) == 8)) {
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029983();
            }
            if (2 < *(int *)(unaff_BP + -0x117c)) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029c2c();
              func_0x00029983();
            }
            if (5 < *(int *)(unaff_BP + -0x117c)) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029c2c();
              func_0x00029983();
            }
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_1163();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_117c();
            func_0x00029bb5();
            func_0x00029983();
            uVar6 = *(undefined2 *)0xc32;
            *(undefined2 *)(unaff_BP + -0x11a4) = *(undefined2 *)0xc30;
            *(undefined2 *)(unaff_BP + -0x11a2) = uVar6;
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b6d();
            func_0x00029983();
            puVar7 = (undefined2 *)FUN_4375_9596();
            uVar6 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0x119c) = *puVar7;
            *(undefined2 *)(unaff_BP + -0x119a) = uVar6;
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029bb5();
            func_0x00029983();
            FUN_4375_95d8();
            func_0x000297e6();
            func_0x0002996b();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_117c();
            func_0x00029983();
            if ((*(int *)(unaff_BP + 6) == 4) &&
               (19999 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 4 + -0x1024))) {
              puVar10 = &uStack_18;
              puVar7 = (undefined2 *)(unaff_BP + -0x119c);
              for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar3 = puVar10;
                puVar10 = puVar10 + 1;
                puVar13 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar3 = *puVar13;
              }
            }
            else {
              puVar10 = &uStack_18;
              puVar7 = (undefined2 *)(unaff_BP + -0x119c);
              for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar3 = puVar10;
                puVar10 = puVar10 + 1;
                puVar13 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar3 = *puVar13;
              }
            }
            uStack_1c = 0x22b2;
            uStack_1e = 0x12a1;
            func_0x00019593();
            uVar6 = *(undefined2 *)(unaff_BP + -0x11a2);
            *(undefined2 *)0xc30 = *(undefined2 *)(unaff_BP + -0x11a4);
            *(undefined2 *)0xc32 = uVar6;
          }
        }
      }
    }
    while( true ) {
      *(int *)(unaff_BP + -0xe62) = *(int *)(unaff_BP + -0xe62) + 1;
      iVar9 = *(int *)(unaff_BP + -0xe62);
      if (*(int *)(unaff_BP + -0xe7a) < iVar9) {
        FUN_3ab8_6a7b();
        return;
      }
      if (*(int *)(unaff_BP + 6) != 3) break;
      if ((*(int *)(unaff_BP + iVar9 * 4 + -0x1024) != 500) &&
         (*(int *)(unaff_BP + iVar9 * 4 + -0x1024) != -500)) {
        if ((*(int *)(unaff_BP + iVar9 * 4 + -0x1024) == 700) ||
           (*(int *)(unaff_BP + iVar9 * 4 + -0x1024) == -700)) {
          uVar6 = *(undefined2 *)(unaff_BP + iVar9 * 8 + -0xbae);
          *(undefined2 *)(unaff_BP + -0x9b0) = *(undefined2 *)(unaff_BP + iVar9 * 8 + -0xbb0);
          *(undefined2 *)(unaff_BP + -0x9ae) = uVar6;
        }
        else if ((((*(int *)(unaff_BP + iVar9 * 4 + -0x1024) != 0x2ee) &&
                  (*(int *)(unaff_BP + iVar9 * 4 + -0x1024) != -0x2ee)) &&
                 (*(int *)(unaff_BP + iVar9 * 4 + -0x1024) != 0x2ef)) &&
                (*(int *)(unaff_BP + iVar9 * 4 + -0x1024) != -0x2ef)) {
          uVar4 = *(uint *)(unaff_BP + iVar9 * 4 + -0x1024);
          *(uint *)(unaff_BP + -0x1164) = uVar4;
          *(int *)(unaff_BP + -0x1166) = ((uVar4 ^ (int)uVar4 >> 0xf) - ((int)uVar4 >> 0xf)) + -1;
          FUN_28b3_0d8b();
          *(int *)(unaff_BP + -0x1168) = *(int *)(unaff_BP + -2) + -1;
          FUN_28b3_0d8b();
          func_0x0002996b();
          FUN_28b3_1172();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029c9d();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029b6d();
          FUN_28b3_117c();
          FUN_28b3_0d8b();
          FUN_28b3_117c();
          func_0x00029983();
          *(int *)(unaff_BP + -0x1168) = *(int *)(unaff_BP + iVar9 * 4 + -0x1022) + -1;
          FUN_28b3_0d8b();
          func_0x00029b85();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029b6d();
          FUN_28b3_117c();
          FUN_28b3_0d8b();
          FUN_28b3_117c();
          func_0x00029983();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          goto code_r0x00040b53;
        }
      }
    }
  } while( true );
}



/* 3ab8:6a7b  FUN_3ab8_6a7b  6468 bytes, 1 callers */

void FUN_3ab8_6a7b(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  int unaff_BP;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 *puVar17;
  undefined4 uVar18;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  int iStack_18;
  int iStack_16;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  
  uVar13 = 0x3ab8;
  *(int *)(unaff_BP + -0xdee) = *(int *)(unaff_BP + -0xdee) + 1;
LAB_3ab8_6a7f:
  if (*(int *)(unaff_BP + -0xdf0) < *(int *)(unaff_BP + -0xdee)) {
    *(undefined2 *)(unaff_BP + -0xdee) = 1;
    do {
      iStack_a = *(int *)(unaff_BP + -0xdee) * 0x60 + 0x10;
      iStack_c = *(undefined2 *)0xa58;
      iStack_10 = 0x17dc;
      iStack_e = uVar13;
      func_0x0000def0();
      iVar6 = *(int *)(unaff_BP + -0xdee) * 0x82 + *(int *)0xa58;
      *(int *)(unaff_BP + -0xe76) = iVar6;
      if (0x27f < iVar6) {
        *(undefined2 *)(unaff_BP + -0xe76) = 0x27f;
      }
      iStack_a = *(int *)0xa5e;
      iStack_c = *(int *)(unaff_BP + -0xe76);
      iStack_e = 0xdef;
      uVar13 = 0xdef;
      iStack_10 = 0x1816;
      func_0x0000def0();
      *(int *)(unaff_BP + -0xdee) = *(int *)(unaff_BP + -0xdee) + 1;
    } while (*(int *)(unaff_BP + -0xdee) < 5);
    func_0x0000a799();
    do {
      do {
        *(undefined2 *)0xbc0 = 1;
        *(undefined2 *)0xc08 = 1;
        iStack_a = 0x1844;
        FUN_21f2_3454();
        if (*(int *)(unaff_BP + 6) == 3) {
          iStack_a = 0x1860;
          FUN_4375_8326();
        }
        if (*(int *)(unaff_BP + 6) == 4) {
          iStack_a = 0x187c;
          FUN_4375_8326();
        }
        iVar6 = 0x1bb4;
        FUN_1def_07a4();
        if ((*(char *)0x132 != '\0') && (*(int *)0xce6 == 0)) {
          iVar6 = 0x22b2;
          FUN_21f2_2d26();
        }
        *(undefined2 *)0xc26 = 1;
        iStack_a = 9999;
        uVar13 = 0x1bb4;
        iStack_e = 0x18d0;
        iStack_c = iVar6;
        iVar6 = FUN_1def_0904();
        *(int *)(unaff_BP + -0xe8e) = iVar6;
        *(undefined2 *)0xc26 = 0;
        if (((*(int *)0x158 != 0) || (iVar6 == 0x14)) || (iVar6 == -1)) {
          FUN_10ad_18a4();
          if (*(int *)0x158 == 0) goto LAB_3ab8_6d7d;
          goto LAB_3ab8_5cef;
        }
        if (iVar6 == 99) goto LAB_3ab8_5c7c;
        if (iVar6 == 1) {
          uVar13 = 0x885;
          func_0x0000c3ca();
          if (*(int *)(unaff_BP + 6) == 3) {
            pcVar4 = (code *)swi(0x3f);
            (*pcVar4)();
          }
          if (*(int *)(unaff_BP + 6) == 4) {
            pcVar4 = (code *)swi(0x3f);
            (*pcVar4)();
          }
          if (*(int *)0x158 == 0) goto LAB_3ab8_5c7c;
          FUN_10ad_18a4();
          goto LAB_3ab8_5cef;
        }
        if (iVar6 == 2) {
          if (*(int *)(unaff_BP + 6) == 3) {
            FUN_4375_7520();
          }
          if (*(int *)(unaff_BP + 6) == 4) {
            FUN_4375_7520();
          }
          FUN_21f2_3454();
          pcVar4 = (code *)swi(0x3f);
          (*pcVar4)();
          FUN_1000_0620();
          if (3 < *(byte *)0xb782) {
            FUN_3ab8_847c();
            return;
          }
          *(undefined2 *)0x158 = 0;
          goto LAB_3ab8_5c64;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_117c();
        func_0x00029d78();
        uVar13 = FUN_28b3_0f51();
        *(undefined2 *)(unaff_BP + -0x21a) = uVar13;
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_117c();
        func_0x00029d78();
        iVar6 = FUN_28b3_0f51();
        *(int *)(unaff_BP + -0x41e) = iVar6;
      } while (((*(int *)(unaff_BP + -0xbd6) == 0) || (*(int *)(unaff_BP + -0x21a) <= *(int *)0xa58)
               ) || ((iVar6 <= *(int *)0xa5e || (0x18e < iVar6))));
      iVar6 = ((iVar6 + -0x10) / 0x60) * 4 + (*(int *)(unaff_BP + -0x21a) - *(int *)0xa58) / 0x82 +
              1;
      *(int *)(unaff_BP + -0x90c) = iVar6;
    } while ((iVar6 < 1) || (*(int *)(unaff_BP + -0xdf0) < iVar6));
    func_0x0000c3ca();
    if (*(int *)(unaff_BP + 6) == 4) {
      FUN_10ad_18a4();
      FUN_3ab8_847c();
      return;
    }
    iStack_a = unaff_BP + -0x1154;
    iStack_c = unaff_BP + -0x10be;
    iStack_e = unaff_BP + -0xdd6;
    iStack_10 = unaff_BP + -0xbb0;
    iStack_12 = unaff_BP + -0x1024;
    iStack_14 = unaff_BP + -0xf24;
    iStack_16 = unaff_BP + -0x10d4;
    iStack_18 = unaff_BP + -2;
    uStack_1c = *(undefined2 *)(unaff_BP + -0x90c);
    uStack_1e = *(undefined2 *)(unaff_BP + -0xe64);
    uStack_20 = 0x885;
    iVar6 = FUN_4375_7973();
    *(int *)(unaff_BP + -0xe7a) = iVar6;
    if (iVar6 < 1) {
      iVar6 = *(int *)(unaff_BP + -0xe66);
      *(int *)(unaff_BP + -0xe7a) = iVar6;
    }
    if (0x3b < iVar6) {
      *(undefined2 *)(unaff_BP + -0xe7a) = 0x3b;
    }
    FUN_10ad_18a4();
    uVar13 = *(undefined2 *)0x9c10;
    uVar14 = *(undefined2 *)0x9c12;
    *(undefined2 *)(unaff_BP + -0xe6a) = uVar13;
    *(undefined2 *)(unaff_BP + -0xe68) = uVar14;
    *(undefined2 *)(unaff_BP + -0xe82) = uVar13;
    *(undefined2 *)(unaff_BP + -0xe80) = uVar14;
    uVar13 = *(undefined2 *)0x9c70;
    uVar14 = *(undefined2 *)0x9c72;
    *(undefined2 *)(unaff_BP + -0x1032) = uVar13;
    *(undefined2 *)(unaff_BP + -0x1030) = uVar14;
    *(undefined2 *)(unaff_BP + -0x10c4) = uVar13;
    *(undefined2 *)(unaff_BP + -0x10c2) = uVar14;
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029983();
    uVar13 = *(undefined2 *)0x9cc6;
    *(undefined2 *)(unaff_BP + -0xe58) = *(undefined2 *)0x9cc4;
    *(undefined2 *)(unaff_BP + -0xe56) = uVar13;
    *(undefined2 *)(unaff_BP + -0x90e) = 0;
    *(undefined2 *)(unaff_BP + -0x9ac) = 0;
    *(undefined2 *)(unaff_BP + -0x916) = 0;
    *(undefined2 *)(unaff_BP + -0x115e) = 0;
    *(undefined2 *)(unaff_BP + -0xe62) = 0;
    while (*(int *)(unaff_BP + -0xe62) <= *(int *)(unaff_BP + -0xe7a)) {
      if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 4 + -0x1024) < 0) {
        func_0x000297e6();
        func_0x00029b85();
        func_0x00029b6d();
        func_0x00029983();
        break;
      }
      *(int *)(unaff_BP + -0xe62) = *(int *)(unaff_BP + -0xe62) + 1;
    }
    uVar13 = *(undefined2 *)0x9c26;
    *(undefined2 *)(unaff_BP + -0x9b0) = *(undefined2 *)0x9c24;
    *(undefined2 *)(unaff_BP + -0x9ae) = uVar13;
    *(undefined2 *)(unaff_BP + -0xe62) = 0;
    while( true ) {
      uVar5 = *(uint *)(unaff_BP + -0xe62);
      uVar8 = *(uint *)(unaff_BP + -0xe7a);
      uVar15 = uVar8 < uVar5;
      uVar16 = uVar8 == uVar5;
      if ((int)uVar8 < (int)uVar5) break;
      if ((*(int *)(unaff_BP + uVar5 * 4 + -0x1024) != 500) &&
         (*(int *)(unaff_BP + uVar5 * 4 + -0x1024) != -500)) {
        if ((*(int *)(unaff_BP + uVar5 * 4 + -0x1024) == 700) ||
           (*(int *)(unaff_BP + uVar5 * 4 + -0x1024) == -700)) {
          uVar13 = *(undefined2 *)(unaff_BP + uVar5 * 8 + -0xbae);
          *(undefined2 *)(unaff_BP + -0x9b0) = *(undefined2 *)(unaff_BP + uVar5 * 8 + -0xbb0);
          *(undefined2 *)(unaff_BP + -0x9ae) = uVar13;
        }
        else if ((((*(int *)(unaff_BP + uVar5 * 4 + -0x1024) != 0x2ee) &&
                  (*(int *)(unaff_BP + uVar5 * 4 + -0x1024) != -0x2ee)) &&
                 (*(int *)(unaff_BP + uVar5 * 4 + -0x1024) != 0x2ef)) &&
                (*(int *)(unaff_BP + uVar5 * 4 + -0x1024) != -0x2ef)) {
          func_0x000297e6();
          uVar15 = (*(uint *)(unaff_BP + -0xe62) & 0x3fff) == 0;
          func_0x000297e6();
          FUN_28b3_1181();
          if (((bool)uVar15) &&
             (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xdee) * 2 + -0x10be) < 10000)) {
            iVar6 = *(int *)(unaff_BP + -0xe62) * 2;
            *(int *)(unaff_BP + -0xe74) = iVar6;
            *(int *)(unaff_BP + -0xe8c) = iVar6 + 1;
            uVar5 = *(uint *)(unaff_BP + *(int *)(unaff_BP + -0xe74) * 2 + -0x1024);
            uVar8 = (int)uVar5 >> 0xf;
            *(int *)(unaff_BP + -0x11a8) = (uVar5 ^ uVar8) - uVar8;
            func_0x000297e6();
            func_0x00029b6d();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029983();
            uVar15 = *(int *)(unaff_BP + -0x11a8) == 0;
            if (*(int *)(unaff_BP + -0x11a8) == 1) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar15) {
                func_0x000297e6();
                func_0x00029983();
              }
            }
            iVar6 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0xe8c) * 2 + -0x1024);
            uVar15 = iVar6 == 0;
            if (iVar6 == 1) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar15) {
                uVar13 = *(undefined2 *)(unaff_BP + -0x11a2);
                *(undefined2 *)(unaff_BP + -0xe6a) = *(undefined2 *)(unaff_BP + -0x11a4);
                *(undefined2 *)(unaff_BP + -0xe68) = uVar13;
              }
            }
            uVar15 = *(uint *)(unaff_BP + -0x11a8) < *(uint *)(unaff_BP + -2);
            uVar16 = *(uint *)(unaff_BP + -0x11a8) == *(uint *)(unaff_BP + -2);
            if ((bool)uVar16) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar15 && !(bool)uVar16) {
                uVar13 = *(undefined2 *)(unaff_BP + -0x11aa);
                *(undefined2 *)(unaff_BP + -0x1032) = *(undefined2 *)(unaff_BP + -0x11ac);
                *(undefined2 *)(unaff_BP + -0x1030) = uVar13;
              }
            }
            uVar5 = *(uint *)(unaff_BP + *(int *)(unaff_BP + -0xe8c) * 2 + -0x1024);
            uVar15 = uVar5 < *(uint *)(unaff_BP + -2);
            uVar16 = uVar5 == *(uint *)(unaff_BP + -2);
            if ((bool)uVar16) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar15 && !(bool)uVar16) {
                uVar13 = *(undefined2 *)(unaff_BP + -0x11a2);
                *(undefined2 *)(unaff_BP + -0x1032) = *(undefined2 *)(unaff_BP + -0x11a4);
                *(undefined2 *)(unaff_BP + -0x1030) = uVar13;
              }
            }
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            uVar15 = *(int *)(unaff_BP + -0xe74) << 1 < 0;
            func_0x000297e6();
            func_0x00029b6d();
            func_0x0002996b();
            FUN_28b3_1181();
            if ((bool)uVar15) {
              func_0x000297e6();
              func_0x00029983();
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar15) {
              uVar13 = *(undefined2 *)(unaff_BP + -0x11a2);
              *(undefined2 *)(unaff_BP + -0xe82) = *(undefined2 *)(unaff_BP + -0x11a4);
              *(undefined2 *)(unaff_BP + -0xe80) = uVar13;
            }
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029b85();
            func_0x0002996b();
            FUN_28b3_1163();
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            uVar15 = (int)(*(uint *)(unaff_BP + -0xe74) << 1) < 0;
            uVar16 = (*(uint *)(unaff_BP + -0xe74) & 0x3fff) == 0;
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029b6d();
            func_0x0002996b();
            FUN_28b3_1181();
            if (!(bool)uVar15 && !(bool)uVar16) {
              func_0x000297e6();
              func_0x00029983();
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar15 && !(bool)uVar16) {
              uVar13 = *(undefined2 *)(unaff_BP + -0x11a2);
              *(undefined2 *)(unaff_BP + -0x10c4) = *(undefined2 *)(unaff_BP + -0x11a4);
              *(undefined2 *)(unaff_BP + -0x10c2) = uVar13;
            }
          }
        }
      }
      *(int *)(unaff_BP + -0xe62) = *(int *)(unaff_BP + -0xe62) + 1;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar15) {
      uVar13 = *(undefined2 *)0x9bf6;
      *(undefined2 *)(unaff_BP + -0xe6a) = *(undefined2 *)0x9bf4;
      *(undefined2 *)(unaff_BP + -0xe68) = uVar13;
    }
    else {
      func_0x000297e6();
      func_0x00029b9d();
      func_0x00029983();
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar15 || (bool)uVar16) {
      func_0x000297e6();
      func_0x00029b9d();
      func_0x00029983();
    }
    else {
      uVar13 = *(undefined2 *)0x9bf6;
      *(undefined2 *)(unaff_BP + -0x1032) = *(undefined2 *)0x9bf4;
      *(undefined2 *)(unaff_BP + -0x1030) = uVar13;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar15) {
      uVar13 = *(undefined2 *)0x9bf6;
      *(undefined2 *)(unaff_BP + -0xe82) = *(undefined2 *)0x9bf4;
      *(undefined2 *)(unaff_BP + -0xe80) = uVar13;
    }
    else {
      func_0x000297e6();
      func_0x00029b9d();
      func_0x00029983();
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar15 || (bool)uVar16) {
      func_0x000297e6();
      func_0x00029b9d();
      func_0x00029983();
    }
    else {
      uVar13 = *(undefined2 *)0x9bf6;
      *(undefined2 *)(unaff_BP + -0x10c4) = *(undefined2 *)0x9bf4;
      *(undefined2 *)(unaff_BP + -0x10c2) = uVar13;
    }
    do {
      if (*(char *)0x45d8 == '\0') goto LAB_3ab8_752e;
      func_0x0000c3ca();
      FUN_1885_2ec3();
      func_0x00013e19();
      iStack_a = unaff_BP + -0xddc;
      iStack_c = unaff_BP + -3000;
      iStack_e = 0x45d9;
      pcVar4 = (code *)swi(0x3f);
      iVar6 = (*pcVar4)();
      *(int *)(unaff_BP + -0xe8e) = iVar6;
      if (*(int *)0x158 != 0) goto LAB_3ab8_5cef;
      if (iVar6 == 0x14) goto LAB_3ab8_5c64;
      if ((iVar6 == -1) && (*(int *)0xce6 != 0)) {
LAB_3ab8_6d7d:
        FUN_3ab8_847c();
        return;
      }
      if (iVar6 == 100) {
        uVar13 = *(undefined2 *)(unaff_BP + -0xbb6);
        *(undefined2 *)(unaff_BP + -0x10cc) = *(undefined2 *)(unaff_BP + -3000);
        *(undefined2 *)(unaff_BP + -0x10ca) = uVar13;
        uVar13 = *(undefined2 *)(unaff_BP + -0xdda);
        *(undefined2 *)(unaff_BP + -0x115c) = *(undefined2 *)(unaff_BP + -0xddc);
        *(undefined2 *)(unaff_BP + -0x115a) = uVar13;
        goto LAB_3ab8_752e;
      }
      if (iVar6 == 1) {
        *(undefined1 *)0x45d8 = 0;
LAB_3ab8_752e:
        if ((*(char *)0x45d8 != '\0') && (0 < *(int *)0x45d4)) {
          *(undefined2 *)0x45d4 = 0xffff;
        }
        if ((*(char *)0x45d8 != '\0') && (0 < *(int *)0x45d6)) {
          *(undefined2 *)0x45d6 = 0xffff;
        }
LAB_3ab8_7556:
        do {
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0x20f7;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0x20fc;
          func_0x0002a11e();
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0x2139;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0x213e;
          func_0x0002a10c();
          func_0x00029834();
          func_0x00029c2c();
          func_0x0002996b();
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0x2169;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0x2172;
          func_0x000297e6();
          iStack_a = 0x22b2;
          iStack_c = 0x2177;
          func_0x00029d78();
          iStack_12 = 0x22b2;
          iStack_14 = 0x2181;
          func_0x000299d1();
          iStack_12 = *(int *)0x9ce2;
          iStack_14 = *(int *)0x9ce0;
          iStack_16 = *(int *)0x9cde;
          iStack_18 = *(int *)0x9cdc;
          uStack_1c = *(undefined2 *)0x9ce0;
          uStack_1e = *(undefined2 *)0x9cde;
          uStack_20 = *(undefined2 *)0x9cdc;
          FUN_1def_043a(0x22b2);
          iStack_a = 0x1bb4;
          iStack_c = 0x21bf;
          FUN_21f2_3454();
          FUN_1def_07a4();
          *(undefined2 *)0xc2c = 1;
          iStack_a = 0x1bb4;
          uVar13 = 0x1bb4;
          iStack_c = 0x2224;
          func_0x0001e740();
          *(undefined2 *)0xc2c = 0;
          if (*(int *)0xc22 == 0) {
            if (*(char *)0x45d8 == '\0') {
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0x2256;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x225f;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0x2264;
              func_0x00029d78();
              iStack_12 = 0x22b2;
              iStack_14 = 0x226e;
              func_0x000299d1();
              iStack_12 = 0x45ba;
              iStack_14 = unaff_BP + -0xe54;
              iStack_16 = 0x22b2;
              iStack_18 = 0x227c;
              FUN_21f2_3454();
              iStack_a = unaff_BP + -0xe54;
              iStack_c = 0x22b2;
              uVar13 = 0xdef;
              iStack_e = 0x2299;
              FUN_1000_02b5();
            }
            if ((*(int *)0x45d4 == 0) || (uVar14 = uVar13, *(int *)0x45d4 == 2)) {
              iStack_a = 0x43ae;
              uVar14 = 0xdef;
              iStack_e = 0x22c3;
              iStack_c = uVar13;
              FUN_1000_02b5();
            }
            uVar13 = uVar14;
            if (*(int *)0x45d4 == 1) {
              iStack_a = 0x43b4;
              uVar13 = 0xdef;
              iStack_e = 0x22e6;
              iStack_c = uVar14;
              FUN_1000_02b5();
            }
            if ((*(int *)0x45d4 == -1) || (uVar14 = uVar13, *(int *)0x45d4 == 3)) {
              iStack_a = 0x43ba;
              uVar14 = 0xdef;
              iStack_e = 0x2310;
              iStack_c = uVar13;
              FUN_1000_02b5();
            }
            if ((*(int *)0x45d6 == 0) || (uVar13 = uVar14, *(int *)0x45d6 == 2)) {
              iStack_a = 0x43ae;
              uVar13 = 0xdef;
              iStack_e = 0x233a;
              iStack_c = uVar14;
              FUN_1000_02b5();
            }
            uVar14 = uVar13;
            if (*(int *)0x45d6 == 1) {
              iStack_a = 0x43b4;
              uVar14 = 0xdef;
              iStack_e = 0x235d;
              iStack_c = uVar13;
              FUN_1000_02b5();
            }
            if ((*(int *)0x45d6 == -1) || (*(int *)0x45d6 == 3)) {
              iStack_a = 0x43ba;
              iStack_e = 0x2387;
              iStack_c = uVar14;
              FUN_1000_02b5();
            }
          }
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0x23a2;
          func_0x000299d1();
          iStack_a = 0x45c6;
          iStack_c = unaff_BP + -0xe54;
          iStack_e = 0x22b2;
          iStack_10 = 0x23b0;
          FUN_21f2_3454();
          iStack_a = unaff_BP + -0xe54;
          iStack_c = 0x22b2;
          iStack_e = 0x23cd;
          FUN_1000_02b5();
          if ((*(char *)0x45d8 != '\0') && (*(char *)0x45d9 != '\0')) {
            if (*(int *)(unaff_BP + -0x99c) == 0) {
              iStack_a = 0x45cd;
            }
            else {
              iStack_a = 0x45d0;
            }
            iStack_c = 0xdef;
            iStack_e = 0x2413;
            FUN_1000_02b5();
          }
          iVar6 = 0xdef;
          if (*(int *)0xc22 == 0) {
            *(undefined2 *)0xc22 = 1;
          }
          uVar13 = *(undefined2 *)0x9c70;
          uVar14 = *(undefined2 *)0x9c72;
          *(undefined2 *)(unaff_BP + -0xe8a) = uVar13;
          *(undefined2 *)(unaff_BP + -0xe88) = uVar14;
          *(undefined2 *)(unaff_BP + -0x1036) = uVar13;
          *(undefined2 *)(unaff_BP + -0x1034) = uVar14;
LAB_3ab8_78ba:
          if (((*(int *)(unaff_BP + -0x916) + *(int *)(unaff_BP + -0x9ac) +
                *(int *)(unaff_BP + -0x90e) + *(int *)(unaff_BP + -0x115e) != 0) ||
              (*(char *)0x45d8 != '\0')) || (*(int *)0xce6 != 0)) {
            *(undefined2 *)0xa4a = 1;
          }
          *(undefined2 *)0xa48 = 6;
          *(undefined2 *)0xc20 = 1;
          *(undefined2 *)0xc2c = 1;
          *(undefined2 *)0xc1a = 0;
          iStack_a = unaff_BP + -0x21a;
          iStack_e = 0x2493;
          iStack_c = iVar6;
          uVar13 = func_0x00006608();
          *(undefined2 *)(unaff_BP + -0xe62) = uVar13;
          *(undefined2 *)0xc20 = 0;
          *(undefined2 *)0xa4a = 0;
          *(undefined2 *)0xa48 = 0;
          *(undefined2 *)0xc2c = 0;
          *(undefined2 *)0xc1a = 0;
LAB_3ab8_792b:
          if (((*(int *)(unaff_BP + -0xbd6) != 0) && (*(int *)(unaff_BP + -0x41e) < 0x10)) &&
             (0xdc < *(int *)(unaff_BP + -0x21a))) {
            *(undefined2 *)(unaff_BP + -0xbd6) = 0;
            *(int *)(unaff_BP + -0xe62) = (*(int *)(unaff_BP + -0x21a) + -0xdc) / 0x38 + 0x31;
            if (0x244 < *(int *)(unaff_BP + -0x21a)) {
              *(undefined2 *)(unaff_BP + -0xe62) = 0x7f;
            }
          }
          if (*(int *)0x158 != 0) {
            FUN_1000_0599();
            func_0x00010526();
            goto LAB_3ab8_5cef;
          }
          if ((*(int *)(unaff_BP + -0xe62) == -1) && (*(char *)0x45d8 != '\0')) break;
          if ((*(int *)(unaff_BP + -0xe62) == -1) && (*(int *)0xce6 != 0)) goto LAB_3ab8_6d7d;
          if ((*(int *)(unaff_BP + -0xe62) == -1) &&
             (*(int *)(unaff_BP + -0x916) + *(int *)(unaff_BP + -0x9ac) +
              *(int *)(unaff_BP + -0x90e) + *(int *)(unaff_BP + -0x115e) != 0)) {
            func_0x0000c3ca();
            pcVar4 = (code *)swi(0x3f);
            (*pcVar4)();
            goto LAB_3ab8_7556;
          }
          if ((*(int *)(unaff_BP + -0xe62) == 0x7f) ||
             ((*(char *)0xefb != '|' && ((uint)*(byte *)0xefb == *(uint *)(unaff_BP + -0xe62))))) {
            FUN_1885_2ec3();
            func_0x00013e19();
            FUN_1000_0599();
            func_0x00010526();
            goto LAB_3ab8_5c64;
          }
          if (*(int *)(unaff_BP + -0xe62) == 99) {
            uVar13 = *(undefined2 *)0x9c72;
            *(undefined2 *)(unaff_BP + -0xe8a) = *(undefined2 *)0x9c70;
            *(undefined2 *)(unaff_BP + -0xe88) = uVar13;
            goto LAB_3ab8_7556;
          }
          if ((0x30 < *(int *)(unaff_BP + -0xe62)) && (*(int *)(unaff_BP + -0xe62) < 0x37)) {
            FUN_1885_2ec3();
            func_0x00013e19();
            FUN_1000_0599();
            func_0x00010526();
            *(undefined2 *)(unaff_BP + -0xbd6) = 0;
            uVar13 = *(undefined2 *)0x9c76;
            *(undefined2 *)(unaff_BP + -0xe8a) = *(undefined2 *)0x9c74;
            *(undefined2 *)(unaff_BP + -0xe88) = uVar13;
            if (*(int *)(unaff_BP + -0xe62) == 0x31) {
              func_0x0000c3ca();
              iStack_a = 0x43ae;
              pcVar4 = (code *)swi(0x3f);
              iVar6 = (*pcVar4)();
              if (iVar6 == 0x65) break;
            }
            if (*(int *)(unaff_BP + -0xe62) == 0x32) {
              *(int *)(unaff_BP + -0x102a) = 1 - *(int *)(unaff_BP + -0x102a);
            }
            if (*(int *)(unaff_BP + -0xe62) == 0x33) {
              *(int *)(unaff_BP + -0xbb2) = 1 - *(int *)(unaff_BP + -0xbb2);
              *(int *)(unaff_BP + -0x99c) = 1 - *(int *)(unaff_BP + -0x99c);
            }
            if (*(int *)(unaff_BP + -0xe62) == 0x34) {
              *(int *)0x45d4 = *(int *)0x45d4 + 1;
              if (3 < *(int *)0x45d4) {
                *(undefined2 *)0x45d4 = 0xffff;
              }
              if ((*(char *)0x45d8 != '\0') && (0 < *(int *)0x45d4)) {
                *(undefined2 *)0x45d4 = 0xffff;
              }
            }
            if ((*(int *)(unaff_BP + -0xe62) == 0x35) &&
               (*(int *)0x45d6 = *(int *)0x45d6 + 1, 3 < *(int *)0x45d6)) {
              *(undefined2 *)0x45d6 = 0xffff;
            }
            if ((*(char *)0x45d8 != '\0') && (0 < *(int *)0x45d6)) {
              *(undefined2 *)0x45d6 = 0xffff;
            }
            if (*(int *)(unaff_BP + -0xe62) != 0x36) goto LAB_3ab8_7556;
            pcVar4 = (code *)swi(0x3f);
            iVar6 = (*pcVar4)();
            if ((iVar6 == -1) || (*(int *)0x158 == 0)) goto LAB_3ab8_7556;
            goto LAB_3ab8_5cef;
          }
          *(undefined2 *)(unaff_BP + -0x99a) = 0;
          *(undefined2 *)0xc18 = 0;
          if ((*(int *)(unaff_BP + -0xbd6) != 0) && (*(int *)(unaff_BP + -0xe62) == 100)) {
            uVar13 = *(undefined2 *)0x9c72;
            *(undefined2 *)(unaff_BP + -0xe8a) = *(undefined2 *)0x9c70;
            *(undefined2 *)(unaff_BP + -0xe88) = uVar13;
            iStack_a = 0x2717;
            iVar6 = func_0x00015409();
            if (iVar6 == 0) goto LAB_3ab8_7556;
            *(undefined2 *)(unaff_BP + -0x90e) = 0;
            *(undefined2 *)(unaff_BP + -0x9ac) = 0;
            *(undefined2 *)(unaff_BP + -0x916) = 0;
            *(undefined2 *)(unaff_BP + -0x115e) = 0;
            *(undefined2 *)(unaff_BP + -0x99a) = 1;
            FUN_1000_0599();
            func_0x00010526();
            func_0x0000c3ca();
          }
          if (*(char *)0x45d8 == '\0') {
            uVar13 = *(undefined2 *)(unaff_BP + -0x10ca);
            *(undefined2 *)(unaff_BP + -0x103e) = *(undefined2 *)(unaff_BP + -0x10cc);
            *(undefined2 *)(unaff_BP + -0x103c) = uVar13;
            uVar13 = *(undefined2 *)(unaff_BP + -0x115a);
            *(undefined2 *)(unaff_BP + -0x10c8) = *(undefined2 *)(unaff_BP + -0x115c);
            *(undefined2 *)(unaff_BP + -0x10c6) = uVar13;
            uVar13 = *(undefined2 *)0x45dc;
            *(undefined2 *)(unaff_BP + -0xe7e) = *(undefined2 *)0x45da;
            *(undefined2 *)(unaff_BP + -0xe7c) = uVar13;
            uVar13 = *(undefined2 *)0x45e0;
            *(undefined2 *)(unaff_BP + -0x102e) = *(undefined2 *)0x45de;
            *(undefined2 *)(unaff_BP + -0x102c) = uVar13;
          }
          else {
            uVar13 = *(undefined2 *)(unaff_BP + -0xdda);
            *(undefined2 *)(unaff_BP + -0x10c8) = *(undefined2 *)(unaff_BP + -0xddc);
            *(undefined2 *)(unaff_BP + -0x10c6) = uVar13;
            func_0x000297e6();
            func_0x0002996b();
            func_0x00029b55();
            func_0x00029983();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029983();
            iStack_a = 0x27be;
            FUN_1def_0338();
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0x27d9;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0x27e2;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0x27e7;
            func_0x00029d78();
            iStack_12 = 0x22b2;
            iStack_14 = 0x27f1;
            func_0x000299d1();
            iStack_12 = 1;
            iStack_14 = 0x22b2;
            iStack_16 = 0x27fa;
            puVar7 = (undefined2 *)FUN_1def_05d1();
            uVar13 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0xde4) = *puVar7;
            *(undefined2 *)(unaff_BP + -0xde2) = uVar13;
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0x2824;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0x282d;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0x2832;
            func_0x00029d78();
            iStack_12 = 0x22b2;
            iStack_14 = 0x283c;
            func_0x000299d1();
            iStack_12 = 1;
            iStack_14 = 0x22b2;
            iStack_16 = 0x2845;
            puVar7 = (undefined2 *)func_0x0001e558();
            uVar13 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0xe60) = *puVar7;
            *(undefined2 *)(unaff_BP + -0xe5e) = uVar13;
            if (*(char *)0x45d9 != '\0') {
              func_0x000297e6();
              func_0x00029ae7();
              func_0x0002996b();
              FUN_28b3_0ee9();
              if (*(int *)(unaff_BP + -0x99c) != 0) {
                func_0x000297e6();
                func_0x00029af6();
                func_0x00029983();
              }
            }
            uVar15 = 0;
            if (*(int *)0x45d4 != 0) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar15) {
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029b55();
              }
              else {
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029bb5();
              }
              func_0x00029983();
            }
            uVar15 = 0;
            uVar16 = *(int *)0x45d6 == 0;
            if (!(bool)uVar16) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar15) {
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029b55();
              }
              else {
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029bb5();
              }
              func_0x00029983();
            }
            func_0x000297e6();
            func_0x00029b6d();
            func_0x0002996b();
            func_0x00029b6d();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x0002996b();
            FUN_28b3_1181();
            if ((bool)uVar16) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar16) goto LAB_3ab8_7556;
            }
            uVar16 = 0;
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar15) {
              *(undefined2 *)(unaff_BP + -0x102a) = 0;
            }
            else {
              func_0x000297e6();
              func_0x00029af6();
              func_0x00029983();
              *(undefined2 *)(unaff_BP + -0x102a) = 1;
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar15 || (bool)uVar16) {
              func_0x000297e6();
              func_0x00029af6();
              func_0x00029983();
              *(undefined2 *)(unaff_BP + -0xbb2) = 1;
            }
            else {
              *(undefined2 *)(unaff_BP + -0xbb2) = 0;
            }
          }
          *(undefined2 *)(unaff_BP + -0x21c) = *(undefined2 *)0x45d4;
          *(undefined2 *)(unaff_BP + -0x10c0) = *(undefined2 *)0x45d6;
          uVar15 = *(int *)(unaff_BP + -0x99a) == 0;
          if ((bool)uVar15) {
            uVar13 = *(undefined2 *)0x9c26;
            *(undefined2 *)(unaff_BP + -0x9b0) = *(undefined2 *)0x9c24;
            *(undefined2 *)(unaff_BP + -0x9ae) = uVar13;
            uVar13 = *(undefined2 *)(unaff_BP + -0x102c);
            *(undefined2 *)(unaff_BP + -0x65e) = *(undefined2 *)(unaff_BP + -0x102e);
            *(undefined2 *)(unaff_BP + -0x65c) = uVar13;
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar15) {
LAB_3ab8_8026:
              uVar13 = *(undefined2 *)(unaff_BP + -0x10ca);
              *(undefined2 *)(unaff_BP + -0xe8a) = *(undefined2 *)(unaff_BP + -0x10cc);
              *(undefined2 *)(unaff_BP + -0xe88) = uVar13;
              uVar13 = *(undefined2 *)(unaff_BP + -0x115a);
              *(undefined2 *)(unaff_BP + -0x1036) = *(undefined2 *)(unaff_BP + -0x115c);
              *(undefined2 *)(unaff_BP + -0x1034) = uVar13;
              FUN_1885_2ec3();
              iVar6 = 0x11f2;
              func_0x00013e19();
              *(undefined2 *)(unaff_BP + -0xdee) = 0;
              do {
                iVar11 = *(int *)(unaff_BP + -0xdee);
                if (*(int *)(unaff_BP + -0xe7a) < iVar11) {
                  if (*(int *)(unaff_BP + -0x99a) != 0) goto LAB_3ab8_7fc0;
                  goto LAB_3ab8_78ba;
                }
                if ((*(int *)(unaff_BP + iVar11 * 4 + -0x1024) != 500) &&
                   (*(int *)(unaff_BP + iVar11 * 4 + -0x1024) != -500)) {
                  if ((*(int *)(unaff_BP + iVar11 * 4 + -0x1024) == 700) ||
                     (*(int *)(unaff_BP + iVar11 * 4 + -0x1024) == -700)) {
                    uVar13 = *(undefined2 *)(unaff_BP + iVar11 * 8 + -0xbae);
                    *(undefined2 *)(unaff_BP + -0x9b0) =
                         *(undefined2 *)(unaff_BP + iVar11 * 8 + -0xbb0);
                    *(undefined2 *)(unaff_BP + -0x9ae) = uVar13;
                  }
                  else {
                    iVar10 = iVar11 * 4;
                    if ((((*(int *)(unaff_BP + iVar10 + -0x1024) == 0x2ee) ||
                         (*(int *)(unaff_BP + iVar10 + -0x1024) == -0x2ee)) ||
                        (*(int *)(unaff_BP + iVar10 + -0x1024) == 0x2ef)) ||
                       (*(int *)(unaff_BP + iVar10 + -0x1024) == -0x2ef)) {
                      if (*(int *)(unaff_BP + iVar11 * 4 + -0x1022) == 1) {
                        uVar13 = *(undefined2 *)(unaff_BP + -0xe7e);
                        uVar14 = *(undefined2 *)(unaff_BP + -0xe7c);
                      }
                      else {
                        uVar13 = *(undefined2 *)(unaff_BP + -0x102e);
                        uVar14 = *(undefined2 *)(unaff_BP + -0x102c);
                      }
                      *(undefined2 *)(unaff_BP + -0x65e) = uVar13;
                      *(undefined2 *)(unaff_BP + -0x65c) = uVar14;
                    }
                    else if (*(int *)(unaff_BP + iVar11 * 2 + -0x10be) < 10000) {
                      func_0x000297e6();
                      func_0x00029d78();
                      iStack_a = 0x22b2;
                      iStack_c = 0x2ca3;
                      func_0x000299d1();
                      iStack_a = unaff_BP + -0xe6e;
                      iStack_c = unaff_BP + -0xe5c;
                      iStack_e = unaff_BP + -0xe60;
                      iStack_10 = unaff_BP + -0xde4;
                      iVar6 = *(int *)(unaff_BP + -0xdee) * 8;
                      iStack_12 = *(int *)(unaff_BP + iVar6 + -0xdd0);
                      iStack_14 = *(int *)(unaff_BP + iVar6 + -0xdd2);
                      iStack_16 = *(int *)(unaff_BP + iVar6 + -0xbaa);
                      iStack_18 = *(int *)(unaff_BP + iVar6 + -0xbac);
                      uStack_1c = *(undefined2 *)(unaff_BP + iVar6 + -0xdd6);
                      uStack_1e = *(undefined2 *)(unaff_BP + iVar6 + -0xbae);
                      uStack_20 = *(undefined2 *)(unaff_BP + iVar6 + -0xbb0);
                      iVar6 = *(int *)(unaff_BP + -0xdee) * 4;
                      FUN_4375_bfa5(0x22b2,*(undefined2 *)(unaff_BP + -2),
                                    *(undefined2 *)(unaff_BP + -0xe7e),
                                    *(undefined2 *)(unaff_BP + -0xe7c),
                                    *(undefined2 *)(unaff_BP + -0x102e),
                                    *(undefined2 *)(unaff_BP + -0x102c),
                                    *(undefined2 *)(unaff_BP + -0xe6a),
                                    *(undefined2 *)(unaff_BP + -0xe68),
                                    *(undefined2 *)(unaff_BP + -0x1032),
                                    *(undefined2 *)(unaff_BP + -0x1030),
                                    *(undefined2 *)(unaff_BP + -0xe82),
                                    *(undefined2 *)(unaff_BP + -0xe80),
                                    *(undefined2 *)(unaff_BP + -0x10c4),
                                    *(undefined2 *)(unaff_BP + -0x10c2),
                                    *(undefined2 *)(unaff_BP + -0x65a),
                                    *(undefined2 *)(unaff_BP + -0x658),
                                    *(undefined2 *)(unaff_BP + -0x21c),
                                    *(undefined2 *)(unaff_BP + -0x10c0),
                                    *(undefined2 *)(unaff_BP + -0x102a),
                                    *(undefined2 *)(unaff_BP + -0xbb2),
                                    *(undefined2 *)(unaff_BP + -0xe58),
                                    *(undefined2 *)(unaff_BP + -0xe56),
                                    *(undefined2 *)(unaff_BP + iVar6 + -0x1024),
                                    *(undefined2 *)(unaff_BP + iVar6 + -0x1022));
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
                      if (*(int *)(unaff_BP + -0x916) + *(int *)(unaff_BP + -0x9ac) +
                          *(int *)(unaff_BP + -0x90e) + *(int *)(unaff_BP + -0x115e) == 0) {
                        *(undefined2 *)0xa4a = 0;
                      }
                      else {
                        *(undefined2 *)0xa4a = 1;
                      }
                      *(undefined2 *)0xa48 = 6;
                      *(undefined2 *)0xc20 = 1;
                      *(undefined2 *)0xc2c = 1;
                      *(undefined2 *)0xc1a = 0;
                      *(undefined2 *)0xc18 = 0;
                      iStack_a = unaff_BP + -0x21a;
                      iStack_c = 0x22b2;
                      iStack_e = 0x2e02;
                      uVar13 = func_0x00006608();
                      *(undefined2 *)(unaff_BP + -0xe62) = uVar13;
                      *(undefined2 *)0xc20 = 0;
                      *(undefined2 *)0xa4a = 0;
                      *(undefined2 *)0xa48 = 0;
                      *(undefined2 *)0xc2c = 0;
                      *(undefined2 *)0xc1a = 0;
                      if ((*(int *)(unaff_BP + -0xe62) != 0) ||
                         (uVar15 = *(int *)(unaff_BP + -0xbd6) == 0, !(bool)uVar15))
                      goto LAB_3ab8_792b;
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if (!(bool)uVar15) goto LAB_3ab8_792b;
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if (!(bool)uVar15) goto LAB_3ab8_792b;
                      func_0x000297e6();
                      uVar15 = (*(uint *)(unaff_BP + -0xdee) & 0x3fff) == 0;
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if ((bool)uVar15) {
                        *(undefined2 *)(unaff_BP + -0x11a8) = *(undefined2 *)0xa6c;
                        iVar6 = *(int *)(unaff_BP + -0xdee) * 2;
                        if ((0 < *(int *)(unaff_BP + iVar6 + -0x1154)) &&
                           (*(int *)(unaff_BP + iVar6 + -0x1154) < 10)) {
                          *(undefined2 *)0xa6c = *(undefined2 *)(unaff_BP + iVar6 + -0x1154);
                        }
                        func_0x000297e6();
                        func_0x00029d78();
                        iStack_c = 0x22b2;
                        iStack_e = 0x2ec0;
                        func_0x000299d1();
                        iStack_c = 0x22b2;
                        iStack_e = 0x2ec9;
                        func_0x000297e6();
                        iStack_c = 0x22b2;
                        iStack_e = 0x2ece;
                        func_0x00029d78();
                        iStack_14 = 0x22b2;
                        iStack_16 = 0x2ed8;
                        func_0x000299d1();
                        iStack_14 = 0x22b2;
                        iStack_16 = 0x2ee1;
                        func_0x000297e6();
                        iStack_14 = 0x22b2;
                        iStack_16 = 0x2ee6;
                        func_0x00029d78();
                        uStack_1c = 0x22b2;
                        uStack_1e = 0x2ef0;
                        func_0x000299d1();
                        uStack_1c = 0x22b2;
                        uStack_1e = 0x2ef9;
                        func_0x000297e6();
                        uStack_1c = 0x22b2;
                        uStack_1e = 0x2efe;
                        func_0x00029d78();
                        func_0x000299d1(0x22b2);
                        iVar6 = 0x1bb4;
                        func_0x0001e18f(0x22b2);
                        *(undefined2 *)0xa6c = *(undefined2 *)(unaff_BP + -0x11a8);
                      }
                      else {
                        func_0x000297e6();
                        func_0x00029d78();
                        iStack_a = 0x22b2;
                        iVar6 = 0x22b2;
                        iStack_c = 0x2f32;
                        func_0x000299d1();
                        iStack_a = unaff_BP + -0x440;
                        iVar11 = *(int *)(unaff_BP + -0xdee) * 2;
                        iStack_c = *(int *)(unaff_BP + iVar11 + -0x998);
                        iStack_e = *(int *)(unaff_BP + iVar11 + -0x1154);
                        iStack_10 = *(int *)(unaff_BP + iVar11 + -0x10be);
                        iVar11 = *(int *)(unaff_BP + -0xdee) * 4;
                        iStack_12 = *(int *)(unaff_BP + iVar11 + -0x908);
                        iStack_14 = *(int *)(unaff_BP + iVar11 + -0x90a);
                        iStack_16 = *(int *)(unaff_BP + iVar11 + -0x654);
                        iStack_18 = *(int *)(unaff_BP + iVar11 + -0x656);
                        iVar11 = *(int *)(unaff_BP + -0xdee) * 8;
                        uStack_1c = *(undefined2 *)(unaff_BP + iVar11 + -0xdd2);
                        uStack_1e = *(undefined2 *)(unaff_BP + iVar11 + -0xbaa);
                        uStack_20 = *(undefined2 *)(unaff_BP + iVar11 + -0xbac);
                        iVar11 = FUN_4375_c529(0x22b2,*(undefined2 *)(unaff_BP + -0x65e),
                                               *(undefined2 *)(unaff_BP + -0x65c),
                                               *(undefined2 *)(unaff_BP + -0x65a),
                                               *(undefined2 *)(unaff_BP + -0x658),
                                               *(undefined2 *)(unaff_BP + -0x102a),
                                               *(undefined2 *)(unaff_BP + -0xbb2),
                                               *(undefined2 *)0x45e2,*(undefined2 *)0x45e4,
                                               *(undefined2 *)(unaff_BP + -0xde4),
                                               *(undefined2 *)(unaff_BP + -0xde2),
                                               *(undefined2 *)(unaff_BP + -0xe60),
                                               *(undefined2 *)(unaff_BP + -0xe5e));
                        *(int *)(unaff_BP + -0x11ac) = iVar11;
                        if (-1 < iVar11) {
                          *(undefined1 *)(unaff_BP + -0x424) = *(undefined1 *)0xb310;
                          *(undefined1 *)(unaff_BP + -0x425) = 9;
                          puVar9 = &uStack_20;
                          puVar7 = (undefined2 *)(unaff_BP + -0x440);
                          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                            puVar3 = puVar9;
                            puVar9 = puVar9 + 1;
                            puVar17 = puVar7;
                            puVar7 = puVar7 + 1;
                            *puVar3 = *puVar17;
                          }
                          iVar6 = 0x11f2;
                          func_0x00013e46(0x22b2);
                        }
                      }
                    }
                  }
                }
                *(int *)(unaff_BP + -0xdee) = *(int *)(unaff_BP + -0xdee) + 1;
              } while( true );
            }
            func_0x000297e6();
            func_0x000297e6();
            iVar6 = 0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar15) goto LAB_3ab8_8026;
            goto LAB_3ab8_78ba;
          }
          FUN_1885_2ec3();
          func_0x00013e19();
          iStack_a = *(int *)(unaff_BP + -0xbb2);
          iStack_c = *(int *)(unaff_BP + -0x102a);
          iStack_e = *(int *)(unaff_BP + -0x10c0);
          iStack_10 = *(int *)(unaff_BP + -0x21c);
          iStack_12 = *(int *)(unaff_BP + -0x658);
          iStack_14 = *(int *)(unaff_BP + -0x65a);
          iStack_16 = *(int *)(unaff_BP + -0x10c2);
          iStack_18 = *(int *)(unaff_BP + -0x10c4);
          uStack_1c = *(undefined2 *)(unaff_BP + -0xe82);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x1030);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x1032);
          FUN_4375_c770(0x11f2,*(undefined2 *)(unaff_BP + -0xe64),*(undefined2 *)(unaff_BP + -0x90c)
                        ,unaff_BP + -0x90e,unaff_BP + -0x9ac,unaff_BP + -0x916,unaff_BP + -0x115e,
                        *(undefined2 *)(unaff_BP + -0x103e),*(undefined2 *)(unaff_BP + -0x103c),
                        *(undefined2 *)(unaff_BP + -0x10c8),*(undefined2 *)(unaff_BP + -0x10c6),
                        *(undefined2 *)(unaff_BP + -0xe7e),*(undefined2 *)(unaff_BP + -0xe7c),
                        *(undefined2 *)(unaff_BP + -0x102e),*(undefined2 *)(unaff_BP + -0x102c),
                        *(undefined2 *)(unaff_BP + -0xe6a),*(undefined2 *)(unaff_BP + -0xe68));
LAB_3ab8_7fc0:
          func_0x0000abfa();
          if (*(int *)0xce6 != 0) goto LAB_3ab8_5cef;
        } while (*(char *)0x45d8 == '\0');
      }
    } while( true );
  }
  iStack_a = unaff_BP + -0x1154;
  iStack_c = unaff_BP + -0x10be;
  iStack_e = unaff_BP + -0xdd6;
  iStack_10 = unaff_BP + -0xbb0;
  iStack_12 = unaff_BP + -0x1024;
  iStack_14 = unaff_BP + -0xf24;
  iStack_16 = unaff_BP + -0x10d4;
  iStack_18 = unaff_BP + -2;
  uStack_1c = *(undefined2 *)(unaff_BP + -0xdee);
  uStack_1e = *(undefined2 *)(unaff_BP + -0xe64);
  uStack_20 = uVar13;
  uVar14 = FUN_4375_7973();
  *(undefined2 *)(unaff_BP + -0xe7a) = uVar14;
  iStack_a = -0x40b8;
  iStack_e = 0x169c;
  iStack_c = uVar13;
  FUN_1000_02b5();
  uVar15 = (undefined1 *)0xfff5 < &iStack_a;
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029d78();
  func_0x00029c2c();
  func_0x00029983();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  FUN_28b3_1181();
  if (!(bool)uVar15) {
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029983();
  }
  if (*(int *)(unaff_BP + -0xe7a) < 1) {
    *(undefined2 *)(unaff_BP + -0xe7a) = *(undefined2 *)(unaff_BP + -0xe66);
  }
  if (0x3b < *(int *)(unaff_BP + -0xe7a)) {
    *(undefined2 *)(unaff_BP + -0xe7a) = 0x3b;
  }
  if (*(int *)(unaff_BP + 6) == 3) {
    uVar5 = *(int *)(unaff_BP + -0xdee) - 1;
    uVar8 = (int)uVar5 >> 0xf;
    *(int *)(unaff_BP + -0xbb4) = ((int)uVar5 % 4) * 0x82 + 0x9c;
    iVar6 = ((int)((uVar5 ^ uVar8) - uVar8) >> 2 ^ uVar8) - uVar8;
    *(int *)(unaff_BP + -0xe76) = iVar6;
    *(int *)(unaff_BP + -0xdd8) = iVar6 * 0x60 + 0x66;
  }
  if (*(int *)(unaff_BP + 6) == 4) {
    uVar5 = *(int *)(unaff_BP + -0xdee) - 1;
    uVar8 = (int)uVar5 >> 0xf;
    *(int *)(unaff_BP + -0xbb4) = ((int)uVar5 % 4) * 0x82 + 0xb9;
    iVar6 = ((int)((uVar5 ^ uVar8) - uVar8) >> 2 ^ uVar8) - uVar8;
    *(int *)(unaff_BP + -0xe76) = iVar6;
    *(int *)(unaff_BP + -0xdd8) = iVar6 * 0x60 + 0x46;
  }
  uVar13 = *(undefined2 *)0x9cae;
  *(undefined2 *)(unaff_BP + -0xe58) = *(undefined2 *)0x9cac;
  *(undefined2 *)(unaff_BP + -0xe56) = uVar13;
  *(undefined2 *)(unaff_BP + -0xe62) = 0;
  while (*(int *)(unaff_BP + -0xe62) <= *(int *)(unaff_BP + -0xe7a)) {
    uVar15 = *(int *)(unaff_BP + 6) == 3;
    if ((bool)uVar15) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (((bool)uVar15) && (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 4 + -0x1024) < 0)) {
        func_0x000297e6();
        func_0x00029b85();
        func_0x00029b6d();
        func_0x00029983();
      }
    }
    iVar6 = *(int *)(unaff_BP + -0xe62) * 4;
    if ((*(int *)(unaff_BP + iVar6 + -0x1024) == 500) ||
       (*(int *)(unaff_BP + iVar6 + -0x1024) == -500)) {
      *(int *)(unaff_BP + -0xbb4) =
           *(int *)(unaff_BP + -0xbb4) +
           *(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 4 + -0x1022);
      func_0x000297e6();
      FUN_28b3_0d8b();
      FUN_28b3_1168();
      func_0x00029d78();
      uVar13 = FUN_28b3_0f51();
      *(undefined2 *)(unaff_BP + -0xdd8) = uVar13;
    }
    *(int *)(unaff_BP + -0xe62) = *(int *)(unaff_BP + -0xe62) + 1;
  }
  uVar13 = *(undefined2 *)0x9c26;
  *(undefined2 *)(unaff_BP + -0x9b0) = *(undefined2 *)0x9c24;
  *(undefined2 *)(unaff_BP + -0x9ae) = uVar13;
  *(undefined2 *)(unaff_BP + -0xe62) = 0;
  do {
    iVar6 = *(int *)(unaff_BP + -0xe62);
    if (*(int *)(unaff_BP + -0xe7a) < iVar6) {
      FUN_3ab8_6a7b();
      return;
    }
    if (*(int *)(unaff_BP + 6) == 3) {
      if ((*(int *)(unaff_BP + iVar6 * 4 + -0x1024) != 500) &&
         (*(int *)(unaff_BP + iVar6 * 4 + -0x1024) != -500)) {
        if ((*(int *)(unaff_BP + iVar6 * 4 + -0x1024) == 700) ||
           (*(int *)(unaff_BP + iVar6 * 4 + -0x1024) == -700)) {
          uVar13 = *(undefined2 *)(unaff_BP + iVar6 * 8 + -0xbae);
          *(undefined2 *)(unaff_BP + -0x9b0) = *(undefined2 *)(unaff_BP + iVar6 * 8 + -0xbb0);
          *(undefined2 *)(unaff_BP + -0x9ae) = uVar13;
        }
        else if ((((*(int *)(unaff_BP + iVar6 * 4 + -0x1024) != 0x2ee) &&
                  (*(int *)(unaff_BP + iVar6 * 4 + -0x1024) != -0x2ee)) &&
                 (*(int *)(unaff_BP + iVar6 * 4 + -0x1024) != 0x2ef)) &&
                (*(int *)(unaff_BP + iVar6 * 4 + -0x1024) != -0x2ef)) {
          uVar5 = *(uint *)(unaff_BP + iVar6 * 4 + -0x1024);
          *(uint *)(unaff_BP + -0x1164) = uVar5;
          *(int *)(unaff_BP + -0x1166) = ((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf)) + -1;
          FUN_28b3_0d8b();
          *(int *)(unaff_BP + -0x1168) = *(int *)(unaff_BP + -2) + -1;
          FUN_28b3_0d8b();
          func_0x0002996b();
          FUN_28b3_1172();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029c9d();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029b6d();
          FUN_28b3_117c();
          FUN_28b3_0d8b();
          FUN_28b3_117c();
          func_0x00029983();
          *(int *)(unaff_BP + -0x1168) = *(int *)(unaff_BP + iVar6 * 4 + -0x1022) + -1;
          FUN_28b3_0d8b();
          func_0x00029b85();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029b6d();
          FUN_28b3_117c();
          FUN_28b3_0d8b();
          FUN_28b3_117c();
          func_0x00029983();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029b6d();
          func_0x00029d78();
          uVar13 = FUN_28b3_0f51();
          *(undefined2 *)(unaff_BP + -0x1168) = uVar13;
          FUN_28b3_0d8b();
          func_0x0002996b();
          func_0x00029b6d();
          func_0x00029bb5();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029b6d();
          FUN_28b3_0d8b();
          FUN_28b3_1168();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_1163();
          func_0x00029983();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029b6d();
          func_0x00029d78();
          uVar13 = FUN_28b3_0f51();
          *(undefined2 *)(unaff_BP + -0xe8c) = uVar13;
          *(undefined2 *)(unaff_BP + -0x1168) = uVar13;
          FUN_28b3_0d8b();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029bb5();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029b6d();
          FUN_28b3_0d8b();
          FUN_28b3_1168();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_1163();
          func_0x00029983();
          goto LAB_3ab8_6147;
        }
      }
    }
    else {
LAB_3ab8_6147:
      iStack_a = 0xcde;
      uVar13 = FUN_4375_9615();
      *(undefined2 *)(unaff_BP + -0x1160) = uVar13;
      if (*(int *)(unaff_BP + 6) == 4) {
        uVar13 = *(undefined2 *)0x9cba;
        *(undefined2 *)(unaff_BP + -0x1158) = *(undefined2 *)0x9cb8;
        *(undefined2 *)(unaff_BP + -0x1156) = uVar13;
        iVar6 = *(int *)(unaff_BP + -0xe62) * 4;
        if (((299 < *(int *)(unaff_BP + iVar6 + -0x1024)) &&
            (*(int *)(unaff_BP + iVar6 + -0x1024) < 20000)) ||
           ((iVar6 = *(int *)(unaff_BP + -0xe62) * 4, *(int *)(unaff_BP + iVar6 + -0x1024) % 10 == 9
            || (*(int *)(unaff_BP + iVar6 + -0x1022) % 10 == 9)))) goto LAB_3ab8_5e5c;
        iVar6 = *(int *)(unaff_BP + -0xe62) * 2;
        if ((0 < *(int *)(unaff_BP + iVar6 + -0x10be)) && (*(int *)(unaff_BP + iVar6 + -0x10be) < 8)
           ) {
          *(undefined2 *)(unaff_BP + -0x1160) =
               *(undefined2 *)(*(int *)(unaff_BP + iVar6 + -0x10be) * 2 + 0xa70);
        }
        if (99 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 4 + -0x1024)) {
          *(undefined2 *)(unaff_BP + -0x1160) = *(undefined2 *)0xa7e;
          *(undefined2 *)(unaff_BP + -0x1162) = *(undefined2 *)0xa8a;
        }
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_117c();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_117c();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_1168();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_1168();
        func_0x00029983();
      }
      if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 2 + -0x10be) < 30000) {
        iVar6 = *(int *)(unaff_BP + -0xe62) * 2;
        if (*(int *)(unaff_BP + iVar6 + -0x10be) < 0x2711) {
          func_0x000297e6();
          uVar15 = (*(uint *)(unaff_BP + -0xe62) & 0x3fff) == 0;
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar15) {
            iStack_a = *(int *)(unaff_BP + -0x1160);
            iStack_c = 0x22b2;
            iStack_e = 0x12ef;
            func_0x000297e6();
            iStack_c = 0x22b2;
            iStack_e = 0x12f4;
            func_0x00029d78();
            iStack_c = 0x22b2;
            iStack_e = 0x12f9;
            iStack_c = FUN_28b3_0f51();
            iStack_e = 0x22b2;
            iStack_10 = 0x1303;
            func_0x000297e6();
            iStack_e = 0x22b2;
            iStack_10 = 0x1308;
            func_0x00029d78();
            iStack_e = 0x22b2;
            iStack_10 = 0x130d;
            iStack_e = FUN_28b3_0f51();
            iStack_10 = 0x22b2;
            iStack_12 = 0x1317;
            func_0x000297e6();
            iStack_10 = 0x22b2;
            iStack_12 = 0x131c;
            func_0x00029d78();
            iStack_10 = 0x22b2;
            iStack_12 = 0x1321;
            iStack_10 = FUN_28b3_0f51();
            iStack_12 = 0x22b2;
            iStack_14 = 0x132b;
            func_0x000297e6();
            iStack_12 = 0x22b2;
            iStack_14 = 0x1330;
            func_0x00029d78();
            iStack_12 = 0x22b2;
            iStack_14 = 0x1335;
            iStack_12 = FUN_28b3_0f51();
            iStack_14 = 0x22b2;
            iStack_16 = 0x133b;
            func_0x0000f350();
          }
          else {
            iStack_a = 0x134d;
            puVar7 = (undefined2 *)FUN_4375_9596();
            uVar13 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0x440) = *puVar7;
            *(undefined2 *)(unaff_BP + -0x43e) = uVar13;
            iStack_a = 0x136a;
            puVar7 = (undefined2 *)FUN_4375_95d8();
            uVar13 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0x43c) = *puVar7;
            *(undefined2 *)(unaff_BP + -0x43a) = uVar13;
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029d78();
            FUN_28b3_0f51();
            iStack_a = 0x13a6;
            uVar18 = func_0x00021eee();
            *(undefined2 *)(unaff_BP + -0x432) = (int)uVar18;
            *(undefined2 *)(unaff_BP + -0x430) = (int)((ulong)uVar18 >> 0x10);
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029d78();
            uVar18 = FUN_28b3_0f51();
            *(undefined2 *)(unaff_BP + -0x11a8) = (int)uVar18;
            *(undefined2 *)(unaff_BP + -0x11a6) = (int)((ulong)uVar18 >> 0x10);
            iStack_a = 0x13db;
            uVar18 = func_0x00021eee();
            *(undefined2 *)(unaff_BP + -0x42e) = (int)uVar18;
            *(undefined2 *)(unaff_BP + -0x42c) = (int)((ulong)uVar18 >> 0x10);
            *(undefined2 *)(unaff_BP + -0x428) = 0;
            *(undefined2 *)(unaff_BP + -0x42a) = 0;
            *(undefined1 *)(unaff_BP + -0x424) = *(undefined1 *)0xb310;
            *(undefined2 *)(unaff_BP + -0x434) = 10000;
            *(undefined1 *)(unaff_BP + -0x426) = *(undefined1 *)0xa6c;
            iVar6 = *(int *)(unaff_BP + -0xe62) * 2;
            if ((0 < *(int *)(unaff_BP + iVar6 + -0x1154)) &&
               (*(int *)(unaff_BP + iVar6 + -0x1154) < 10)) {
              *(undefined1 *)(unaff_BP + -0x426) = *(undefined1 *)(unaff_BP + iVar6 + -0x1154);
            }
            *(undefined1 *)(unaff_BP + -0x425) = *(undefined1 *)0xa6a;
            iVar6 = *(int *)(unaff_BP + -0xe62) * 2;
            if ((0 < *(int *)(unaff_BP + iVar6 + -0x10be)) &&
               (*(int *)(unaff_BP + iVar6 + -0x10be) < 7)) {
              *(undefined1 *)(unaff_BP + -0x425) = *(undefined1 *)(unaff_BP + iVar6 + -0x10be);
            }
            if (*(int *)(unaff_BP + 6) == 3) {
              func_0x000297e6();
              uVar15 = *(int *)(unaff_BP + -0xe62) << 1 < 0;
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x0002996b();
              FUN_28b3_1181();
              if ((bool)uVar15) {
                func_0x000297e6();
                func_0x00029b6d();
                func_0x000297e6();
                func_0x00029b6d();
                FUN_28b3_1163();
                func_0x00029983();
              }
              func_0x000297e6();
              func_0x00029b85();
              func_0x00029983();
            }
            uVar15 = *(uint *)(unaff_BP + 6) < 4;
            if (*(uint *)(unaff_BP + 6) == 4) {
              iVar6 = *(int *)(unaff_BP + -0xe62) * 2;
              if ((0 < *(int *)(unaff_BP + iVar6 + -0x10be)) &&
                 (*(int *)(unaff_BP + iVar6 + -0x10be) < 8)) {
                *(undefined1 *)(unaff_BP + -0x425) = *(undefined1 *)(unaff_BP + iVar6 + -0x10be);
              }
              if (99 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 4 + -0x1024)) {
                *(undefined1 *)(unaff_BP + -0x425) = 7;
                *(undefined1 *)(unaff_BP + -0x426) = 1;
              }
              uVar15 = (int)(*(uint *)(unaff_BP + -0xe62) << 1) < 0;
              uVar16 = (*(uint *)(unaff_BP + -0xe62) & 0x3fff) == 0;
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029ae7();
              func_0x0002996b();
              func_0x00029b85();
              func_0x00029983();
              *(undefined2 *)(unaff_BP + -0x434) = 10000;
              func_0x00029834();
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029d78();
              FUN_28b3_1181();
              if (!(bool)uVar15) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar15 || (bool)uVar16) {
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029c2c();
                  uVar13 = FUN_28b3_0f51();
                  *(undefined2 *)(unaff_BP + -0x434) = uVar13;
                }
              }
            }
            else {
              uVar16 = 0;
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar15 && !(bool)uVar16) {
              puVar9 = &uStack_20;
              puVar7 = (undefined2 *)(unaff_BP + -0x440);
              for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar3 = puVar9;
                puVar9 = puVar9 + 1;
                puVar17 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar3 = *puVar17;
              }
              func_0x00013e46(0x22b2);
            }
          }
        }
        else {
          puVar17 = (undefined2 *)func_0x00000398();
          puVar9 = (undefined2 *)puVar17;
          puVar7 = (undefined2 *)(unaff_BP + -0x119c);
          for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar3 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar2 = *puVar3;
          }
          *(undefined2 *)(unaff_BP + -0x116c) = 0;
          if (999 < *(int *)(unaff_BP + iVar6 + -0x1154)) {
            piVar1 = (int *)(unaff_BP + iVar6 + -0x1154);
            *piVar1 = *piVar1 + -1000;
            *(undefined2 *)(unaff_BP + -0x116c) = 1;
          }
          *(byte *)(unaff_BP + -0x1186) = *(byte *)(unaff_BP + -0x1186) & 0xdf;
          if (*(int *)(unaff_BP + -0x116c) != 0) {
            *(byte *)(unaff_BP + -0x1186) = *(byte *)(unaff_BP + -0x1186) | 0x20;
          }
          *(int *)(unaff_BP + -0x117c) =
               *(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 2 + -0x1154) / 100;
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029af6();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_117c();
          func_0x00029d78();
          iStack_c = 0x22b2;
          iStack_e = 0xf61;
          func_0x000299d1();
          iStack_c = 0x22b2;
          iStack_e = 0xf66;
          FUN_28b3_1582();
          uVar15 = (undefined1 *)0xfff7 < &iStack_a;
          uVar16 = &stack0x0000 == (undefined1 *)0x2;
          func_0x00029834();
          func_0x0002996b();
          FUN_28b3_1181();
          if (!(bool)uVar15 && !(bool)uVar16) {
            func_0x000297e6();
            func_0x00029b9d();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b9d();
            func_0x00029983();
            iStack_a = 0xfc6;
            FUN_1885_0344();
            iStack_a = 0xfdf;
            puVar7 = (undefined2 *)func_0x00018eff();
            uVar13 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0x1180) = *puVar7;
            *(undefined2 *)(unaff_BP + -0x117e) = uVar13;
            uVar13 = *(undefined2 *)0x9bf4;
            uVar14 = *(undefined2 *)0x9bf6;
            *(undefined2 *)(unaff_BP + -0x1170) = uVar13;
            *(undefined2 *)(unaff_BP + -0x116e) = uVar14;
            *(undefined2 *)(unaff_BP + -0x11a0) = uVar13;
            *(undefined2 *)(unaff_BP + -0x119e) = uVar14;
            FUN_28b3_0d8b();
            func_0x00029983();
            if (*(int *)(unaff_BP + -0x116c) != 0) {
              FUN_28b3_0d8b();
              func_0x00029983();
            }
            if (((*(int *)(unaff_BP + -0x117c) == 1) || (*(int *)(unaff_BP + -0x117c) == 4)) ||
               (*(int *)(unaff_BP + -0x117c) == 7)) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029c2c();
              func_0x00029983();
            }
            if (((*(int *)(unaff_BP + -0x117c) == 2) || (*(int *)(unaff_BP + -0x117c) == 5)) ||
               (*(int *)(unaff_BP + -0x117c) == 8)) {
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029983();
            }
            if (2 < *(int *)(unaff_BP + -0x117c)) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029c2c();
              func_0x00029983();
            }
            if (5 < *(int *)(unaff_BP + -0x117c)) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029b6d();
              func_0x00029b6d();
              func_0x00029c2c();
              func_0x00029983();
            }
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_1163();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_117c();
            func_0x00029bb5();
            func_0x00029983();
            uVar13 = *(undefined2 *)0xc32;
            *(undefined2 *)(unaff_BP + -0x11a4) = *(undefined2 *)0xc30;
            *(undefined2 *)(unaff_BP + -0x11a2) = uVar13;
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b6d();
            func_0x00029983();
            puVar7 = (undefined2 *)FUN_4375_9596();
            uVar13 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0x119c) = *puVar7;
            *(undefined2 *)(unaff_BP + -0x119a) = uVar13;
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029bb5();
            func_0x00029983();
            FUN_4375_95d8();
            func_0x000297e6();
            func_0x0002996b();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_117c();
            func_0x00029983();
            if ((*(int *)(unaff_BP + 6) == 4) &&
               (19999 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0xe62) * 4 + -0x1024))) {
              piVar12 = &iStack_18;
              puVar7 = (undefined2 *)(unaff_BP + -0x119c);
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar3 = piVar12;
                piVar12 = piVar12 + 1;
                puVar17 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar3 = *puVar17;
              }
            }
            else {
              piVar12 = &iStack_18;
              puVar7 = (undefined2 *)(unaff_BP + -0x119c);
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar3 = piVar12;
                piVar12 = piVar12 + 1;
                puVar17 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar3 = *puVar17;
              }
            }
            uStack_1c = 0x22b2;
            uStack_1e = 0x12a1;
            func_0x00019593();
            uVar13 = *(undefined2 *)(unaff_BP + -0x11a2);
            *(undefined2 *)0xc30 = *(undefined2 *)(unaff_BP + -0x11a4);
            *(undefined2 *)0xc32 = uVar13;
          }
        }
      }
    }
LAB_3ab8_5e5c:
    *(int *)(unaff_BP + -0xe62) = *(int *)(unaff_BP + -0xe62) + 1;
  } while( true );
LAB_3ab8_5c64:
  func_0x0000daa6();
  func_0x0001bb8f();
  func_0x0001bba4();
  uVar13 = 0x885;
  func_0x0000ac64();
LAB_3ab8_5c7c:
  FUN_4375_744d();
  iStack_a = unaff_BP + -0x1154;
  iStack_c = unaff_BP + -0x10be;
  iStack_e = unaff_BP + -0xdd6;
  iStack_10 = unaff_BP + -0xbb0;
  iStack_12 = unaff_BP + -0x1024;
  iStack_14 = unaff_BP + -0xf24;
  iStack_16 = unaff_BP + -0x10d4;
  iStack_18 = unaff_BP + -0xdf0;
  *(undefined2 *)(unaff_BP + -0x90e) = 0;
  *(undefined2 *)(unaff_BP + -0x9ac) = 0;
  *(undefined2 *)(unaff_BP + -0x916) = 0;
  *(undefined2 *)(unaff_BP + -0x115e) = 0;
  uStack_1c = 0;
  uStack_1e = *(undefined2 *)(unaff_BP + -0xe64);
  uStack_20 = uVar13;
  FUN_4375_7973();
  if (*(int *)0x158 != 0) {
    FUN_10ad_18a4();
    FUN_4375_7430();
LAB_3ab8_5cef:
    FUN_3ab8_847c();
    return;
  }
  *(undefined2 *)(unaff_BP + -0xdee) = 1;
  do {
    iStack_e = *(int *)(unaff_BP + -0xdee) * 0x60 + 0x10;
    iStack_c = 0x27f;
    iStack_10 = *(undefined2 *)0xa58;
    iStack_14 = 0x8a0;
    iStack_12 = uVar13;
    iStack_a = iStack_e;
    func_0x0000f350();
    iStack_a = 399;
    iStack_10 = *(int *)(unaff_BP + -0xdee) * 0x82 + *(int *)0xa58;
    *(int *)(unaff_BP + -0xe76) = iStack_10;
    iStack_e = *(undefined2 *)0xa5e;
    iStack_12 = 0xdef;
    uVar13 = 0xdef;
    iStack_14 = 0x8ca;
    iStack_c = iStack_10;
    func_0x0000f350();
    *(int *)(unaff_BP + -0xdee) = *(int *)(unaff_BP + -0xdee) + 1;
  } while (*(int *)(unaff_BP + -0xdee) < 5);
  *(undefined2 *)(unaff_BP + -0xdee) = 1;
  goto LAB_3ab8_6a7f;
}



/* 3ab8:847c  FUN_3ab8_847c  6 bytes, 2 callers */

void __cdecl16far FUN_3ab8_847c(void)

{
  return;
}


