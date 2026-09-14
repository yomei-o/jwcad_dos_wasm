/* Ghidra decompilation of jw32.exe - machine output, not the original source. */

/* 3ab8:0000  OVL_0000  547 bytes, 0 callers */

undefined2 __cdecl16far OVL_0000(undefined2 param_1)

{
  byte *pbVar1;
  code *pcVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined1 local_22 [6];
  int local_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int local_14;
  uint local_10;
  int local_e;
  int local_c;
  undefined2 local_a;
  undefined2 *local_8;
  undefined1 *local_6;
  int *piStack_4;
  
  piStack_4 = (int *)0x3ab8;
  local_6 = (undefined1 *)0xab8b;
  FUN_21f2_0ebc();
LAB_3ab8_0010:
  uVar4 = 0x22b2;
LAB_3ab8_0015:
  piStack_4 = (int *)0xffff;
  local_6 = (undefined1 *)0x6;
  local_8 = (undefined2 *)0x2;
  local_a = 0x28;
  local_c = 0x1078;
  local_10 = 0xabae;
  local_e = uVar4;
  FUN_1000_02b5();
  *(undefined2 *)0xc22 = 1;
  piStack_4 = (int *)0x302;
  local_6 = (undefined1 *)0x7150;
  local_8 = (undefined2 *)param_1;
  local_a = 0xdef;
  local_c = -0x5439;
  FUN_21f2_3454();
  piStack_4 = (int *)param_1;
  local_6 = (undefined1 *)0x2;
  local_8 = (undefined2 *)0x22b2;
  local_a = 0xabd6;
  FUN_1def_07a4();
  piStack_4 = &local_c;
  local_6 = local_22;
  local_8 = &local_1a;
  local_a = param_1;
  local_c = 1;
  local_e = 0x1bb4;
  uVar4 = 0x1bb4;
  local_10 = 0xabf0;
  local_1c = FUN_1def_0904();
  if (*(int *)0x158 != 0) {
    return 1;
  }
  if (local_1c == -1) {
    return 0xffff;
  }
  local_8 = (undefined2 *)0x1;
  if (local_1c == 1) {
    piStack_4 = (int *)0x8;
    local_6 = (undefined1 *)0x2;
    local_8 = (undefined2 *)0x28;
    local_a = 0x1078;
    local_c = 0x1bb4;
    local_e = -0x53d3;
    FUN_12c1_03d3();
    *(undefined2 *)0xc22 = 1;
    piStack_4 = (int *)0x11f2;
    uVar4 = 0x2c1;
    local_6 = (undefined1 *)0xac40;
    func_0x00002cc6();
    if (3 < *(byte *)0xb782) {
      piStack_4 = (int *)0x1;
      pcVar2 = (code *)swi(0x3f);
      (*pcVar2)();
    }
  }
  else {
    if (local_1c != 2) goto LAB_3ab8_01f1;
    local_e = 0;
    local_8 = (undefined2 *)uVar4;
    for (local_10 = 1;
        (local_e <= *(int *)0x14a && ((local_e < *(int *)0x14a || (local_10 <= *(uint *)0x148))));
        local_10 = local_10 + 1) {
      piStack_4 = (int *)local_e;
      local_6 = (undefined1 *)local_10;
      local_a = 0xacdd;
      uVar5 = func_0x0000013f();
      uVar4 = (undefined2)((ulong)uVar5 >> 0x10);
      iVar3 = (int)uVar5;
      *(byte *)(iVar3 + 0x14) = *(byte *)(iVar3 + 0x14) & 0xfd;
      *(byte *)(iVar3 + 0x15) = *(byte *)(iVar3 + 0x15) & 0xfe;
      *(byte *)(iVar3 + 0x15) = *(byte *)(iVar3 + 0x15) & 0xfd;
      local_e = local_e + (uint)(0xfffe < local_10);
      local_8 = (undefined2 *)0;
    }
    local_e = 0;
    for (local_10 = 1;
        (local_e <= *(int *)0x14e && ((local_e < *(int *)0x14e || (local_10 <= *(uint *)0x14c))));
        local_10 = local_10 + 1) {
      piStack_4 = (int *)local_e;
      local_6 = (undefined1 *)local_10;
      local_a = 0xad29;
      uVar5 = func_0x00000271();
      pbVar1 = (byte *)((int)uVar5 + 0x1e);
      *pbVar1 = *pbVar1 & 0xfd;
      local_e = local_e + (uint)(0xfffe < local_10);
      local_8 = (undefined2 *)0;
    }
    local_6 = (undefined1 *)local_8;
    for (local_14 = 1; local_14 <= *(int *)0x152; local_14 = local_14 + 1) {
      piStack_4 = (int *)local_14;
      local_8 = (undefined2 *)0xad45;
      uVar5 = func_0x000003ef();
      pbVar1 = (byte *)((int)uVar5 + 10);
      *pbVar1 = *pbVar1 & 0xfd;
      local_6 = (undefined1 *)0;
    }
    piStack_4 = (int *)0x1;
    uVar4 = 0x7a6;
    local_8 = (undefined2 *)0xad63;
    func_0x00008095();
    local_8 = (undefined2 *)0xd8f1;
  }
  goto LAB_3ab8_00d1;
LAB_3ab8_01f1:
  if (local_c != 0) goto LAB_3ab8_01fa;
  goto LAB_3ab8_0015;
LAB_3ab8_01fa:
  local_1c = 1;
  local_a = 2;
LAB_3ab8_00d1:
  local_6 = (undefined1 *)0xac56;
  piStack_4 = (int *)uVar4;
  func_0x0000c3ca();
  piStack_4 = (int *)0x885;
  local_6 = (undefined1 *)0xac5e;
  func_0x000297e6();
  piStack_4 = (int *)0x22b2;
  local_6 = (undefined1 *)0xac63;
  func_0x00029d78();
  local_c = 0x22b2;
  local_e = 0xac6d;
  func_0x000299d1();
  local_c = 0x22b2;
  local_e = 0xac75;
  func_0x000297e6();
  local_c = 0x22b2;
  local_e = 0xac7a;
  func_0x00029d78();
  local_14 = 0x22b2;
  uStack_16 = 0xac84;
  func_0x000299d1();
  local_14 = (int)local_6;
  uStack_16 = 0x7176;
  uStack_18 = 0xfffe;
  local_1a = local_8;
  local_1c = 0;
  pcVar2 = (code *)swi(0x3f);
  iVar3 = (*pcVar2)();
  if (iVar3 != -1) {
    piStack_4 = (int *)0x22b2;
    local_6 = (undefined1 *)0xad8c;
    func_0x0000c3ca();
    if (*(int *)0x158 == 0) {
      piStack_4 = (int *)0x0;
      local_6 = (undefined1 *)0x885;
      local_8 = (undefined2 *)0xad9e;
      func_0x00008095();
      *(undefined2 *)0xbc0 = 1;
    }
    return 1;
  }
  goto LAB_3ab8_0010;
}



/* 3ab8:0229  FUN_3ab8_0229  78 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0229(int param_1)

{
  FUN_21f2_0ebc();
  if (param_1 == 1) {
    FUN_1000_02b5(0x717f,0x19,2,7,0xffff);
  }
  if (param_1 == 2) {
    FUN_1000_02b5(0x7185,0x19,2,7,0xffff);
  }
  return;
}



/* 3ab8:0277  FUN_3ab8_0277  551 bytes, 0 callers */

int __cdecl16far FUN_3ab8_0277(undefined2 param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  undefined1 local_f0 [44];
  undefined1 local_c4 [100];
  undefined1 local_60 [4];
  int local_5c;
  undefined1 local_5a [4];
  int local_56;
  undefined1 local_54 [68];
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  int *local_4;
  
  local_4 = (int *)0x3ab8;
  puStack_6 = (undefined1 *)0xae02;
  FUN_21f2_0ebc();
  local_4 = (int *)0x2;
  puStack_6 = (undefined1 *)0x11;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xae0f;
  FUN_1000_0599();
  local_4 = (int *)0xdef;
  puStack_6 = (undefined1 *)0xae16;
  func_0x00010526();
  local_4 = (int *)0x3;
  puStack_6 = (undefined1 *)0x11;
  puStack_8 = (undefined1 *)0xdef;
  puStack_a = (undefined1 *)0xae23;
  FUN_1000_0599();
  local_4 = (int *)0xdef;
  puStack_6 = (undefined1 *)0xae2a;
  func_0x00010526();
  local_4 = (int *)0x718b;
  puStack_6 = local_54;
  puStack_8 = (undefined1 *)0xdef;
  puStack_a = (undefined1 *)0xae37;
  FUN_21f2_3454();
  local_4 = (int *)0x860;
  puStack_6 = local_54;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xae46;
  FUN_21f2_2d26();
  local_4 = (int *)0x7190;
  puStack_6 = local_54;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xae55;
  FUN_21f2_2d26();
  local_4 = (int *)param_1;
  puStack_6 = local_54;
  puStack_8 = (undefined1 *)0x22b2;
  puVar2 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xae63;
  FUN_21f2_2d26();
LAB_3ab8_02e5:
  local_4 = (int *)local_f0;
  puStack_6 = (undefined1 *)0x0;
  puStack_8 = (undefined1 *)param_1;
  puVar3 = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0xae75;
  puStack_a = puVar2;
  iVar1 = func_0x000276d7();
  if (iVar1 == 0) {
    do {
      *(undefined2 *)0xc22 = 2;
      local_4 = (int *)0xffff;
      puStack_6 = (undefined1 *)0x7;
      puStack_8 = (undefined1 *)0x3;
      puStack_a = (undefined1 *)0x11;
      puStack_c = local_54;
      uStack_10 = 0xae9e;
      puStack_e = puVar3;
      FUN_1000_02b5();
      local_4 = (int *)0x40c;
      puStack_6 = (undefined1 *)0x7192;
      puStack_8 = local_c4;
      puStack_a = (undefined1 *)0xdef;
      puStack_c = (undefined1 *)0xaeb3;
      FUN_21f2_3454();
      local_4 = (int *)local_c4;
      puStack_6 = (undefined1 *)0x2;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xaec4;
      FUN_1def_07a4();
      local_4 = &local_5c;
      puStack_6 = local_60;
      puStack_8 = local_5a;
      puStack_a = local_c4;
      *(undefined2 *)0xc26 = 1;
      puStack_c = (undefined1 *)0x1;
      puStack_e = (undefined1 *)0x1bb4;
      puVar3 = (undefined1 *)0x1bb4;
      uStack_10 = 0xaee3;
      local_56 = FUN_1def_0904();
      *(undefined2 *)0xc26 = 0;
      if (*(int *)0x158 != 0) goto LAB_3ab8_0376;
      puVar2 = puVar3;
      if (local_56 == -1) goto LAB_3ab8_03d7;
      if ((local_56 == 1) || (local_5c == 1)) {
        *param_2 = 0x77;
        local_56 = 1;
        goto LAB_3ab8_03d7;
      }
    } while ((local_56 != 2) && (local_5c != 2));
    *param_2 = 0x61;
    local_56 = 2;
  }
  else {
    local_56 = 0;
    *param_2 = 0x77;
    puVar2 = puVar3;
  }
LAB_3ab8_03d7:
  local_4 = (int *)local_56;
  puStack_8 = (undefined1 *)0xaf5e;
  puStack_6 = puVar2;
  FUN_3ab8_0229();
  if (local_4 != (int *)0x1) {
    return (int)local_4;
  }
  if (param_3 == 0) {
    return 1;
  }
  do {
    *(undefined2 *)0xc22 = 2;
    local_4 = (int *)0xffff;
    puStack_6 = (undefined1 *)0x7;
    puStack_8 = (undefined1 *)0x3;
    puStack_a = (undefined1 *)0x11;
    puStack_c = local_54;
    uStack_10 = 0xaf90;
    puStack_e = puVar2;
    FUN_1000_02b5();
    local_4 = (int *)0x45a;
    puStack_6 = (undefined1 *)0x1de;
    puStack_8 = local_c4;
    puStack_a = (undefined1 *)0xdef;
    puStack_c = (undefined1 *)0xafa5;
    FUN_21f2_3454();
    local_4 = (int *)local_56;
    puStack_6 = (undefined1 *)0x22b2;
    puStack_8 = (undefined1 *)0xafaf;
    FUN_3ab8_0229();
    local_4 = &local_5c;
    puStack_6 = local_60;
    puStack_8 = local_5a;
    puStack_a = local_c4;
    *(undefined2 *)0xc26 = 1;
    puStack_c = (undefined1 *)0x1;
    puStack_e = (undefined1 *)0x22b2;
    puVar2 = (undefined1 *)0x1bb4;
    uStack_10 = 0xafcd;
    local_4 = (int *)FUN_1def_0904();
    *(undefined2 *)0xc26 = 0;
    if (*(int *)0x158 != 0) {
LAB_3ab8_0376:
      local_4 = (int *)0x1bb4;
      puStack_6 = (undefined1 *)0xaefb;
      func_0x0000c3ca();
      return -0x6f;
    }
    if (local_4 == (int *)0xffff) break;
    if ((local_4 == (int *)0x2) || (local_5c == 2)) {
      return -1;
    }
    if (local_5c == 1) {
      local_4 = (int *)0x1;
    }
    if (local_4 == (int *)0x1) {
      return 1;
    }
  } while( true );
  if (local_56 == 0) {
    return -1;
  }
  goto LAB_3ab8_02e5;
}



/* 3ab8:049e  FUN_3ab8_049e  75 bytes, 0 callers */

undefined2 FUN_3ab8_049e(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 auStack_250 [116];
  undefined1 auStack_1dc [312];
  int iStack_a4;
  undefined1 auStack_a0 [60];
  int iStack_64;
  char local_60 [4];
  int iStack_5c;
  undefined1 auStack_56 [58];
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
  undefined1 *puStack_8;
  char *pcStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  pcStack_6 = (char *)0xb029;
  FUN_21f2_0ebc();
  local_60[0] = 'w';
  while( true ) {
    puStack_4 = (undefined1 *)0x22b2;
    uVar3 = 0x885;
    pcStack_6 = (char *)0xb032;
    func_0x0000c3ca();
    *(undefined1 *)0x1062 = 1;
    puStack_4 = (undefined1 *)*(undefined2 *)0xa75e;
    pcStack_6 = (char *)*(undefined2 *)0xa75c;
    puStack_8 = (undefined1 *)*(int *)0xa75a;
    uStack_a = *(undefined2 *)0xa758;
    uStack_c = *(undefined2 *)0xa75e;
    uStack_e = *(undefined2 *)0xa75c;
    uStack_10 = *(undefined2 *)0xa75a;
    uStack_12 = *(undefined2 *)0xa758;
    uStack_14 = 0;
    uStack_16 = 0x71b0;
    uStack_18 = 0xfffe;
    uStack_1a = 1;
    uStack_1c = 0;
    pcVar1 = (code *)swi(0x3f);
    iVar2 = (*pcVar1)();
    if (iVar2 == -1) {
      *(undefined1 *)0x1062 = 0;
      puStack_4 = (undefined1 *)0x885;
      pcStack_6 = (char *)0xb07c;
      func_0x0000c3ca();
      return 0;
    }
    *(undefined1 *)0x1062 = 0;
    if (*(int *)0x158 != 0) break;
    puStack_4 = (undefined1 *)0x0;
    pcStack_6 = (char *)0x885;
    puStack_8 = (undefined1 *)0xb0a0;
    func_0x00008095();
    uVar4 = 0x7a6;
    while( true ) {
      puStack_4 = (undefined1 *)0xd;
      pcStack_6 = (char *)0x71b9;
      puStack_8 = (undefined1 *)0xd04;
      uVar3 = 0x22b2;
      uStack_c = 0xb0b2;
      uStack_a = uVar4;
      func_0x00024d00();
      puStack_4 = (undefined1 *)0x71ba;
      pcStack_6 = auStack_56;
      pcVar1 = (code *)swi(0x3f);
      iStack_5c = (*pcVar1)();
      if (*(int *)0x158 != 0) goto LAB_3ab8_050d;
      if (iStack_5c == -1) break;
      puStack_4 = (undefined1 *)0x1;
      pcStack_6 = local_60;
      puStack_8 = auStack_56;
      uStack_a = 0x22b2;
      uStack_c = 0xb0e6;
      iStack_5c = FUN_3ab8_0277();
      puStack_4 = (undefined1 *)0x22b2;
      uVar3 = 0x11f2;
      pcStack_6 = (char *)0xb0f1;
      FUN_10ad_18a4();
      if (*(int *)0x158 != 0) goto LAB_3ab8_050d;
      uVar4 = uVar3;
      if (iStack_5c != -1) {
        puStack_4 = (undefined1 *)0x11f2;
        pcStack_6 = (char *)0xb103;
        func_0x0000c3ca();
        puStack_4 = (undefined1 *)0x885;
        pcStack_6 = (char *)0xb108;
        FUN_10ad_1871();
        puStack_4 = auStack_56;
        pcStack_6 = auStack_a0;
        puStack_8 = (undefined1 *)0x11f2;
        uStack_a = 0xb116;
        func_0x00024c86();
        puStack_4 = (undefined1 *)0x5c;
        pcStack_6 = auStack_a0;
        puStack_8 = (undefined1 *)0x22b2;
        uStack_a = 0xb126;
        iStack_64 = func_0x00025b06();
        if (iStack_64 != 0) {
          *(undefined1 *)(iStack_64 + 1) = 0;
        }
        puStack_4 = (undefined1 *)0xbc;
        pcStack_6 = auStack_a0;
        puStack_8 = (undefined1 *)0x22b2;
        uStack_a = 0xb143;
        FUN_21f2_2d26();
        puStack_4 = (undefined1 *)0x258;
        pcStack_6 = auStack_a0;
        puStack_8 = (undefined1 *)0x22b2;
        uVar3 = 0x22b2;
        uStack_a = 0xb153;
        iVar2 = FUN_21f2_1348();
        *(int *)0xd70 = iVar2;
        if (iVar2 == 0) {
          puStack_4 = (undefined1 *)0x552;
          pcStack_6 = (undefined1 *)0x22b2;
          uVar3 = 0x11f2;
          puStack_8 = (undefined1 *)0xb165;
          FUN_13bf_0a03();
        }
        if (local_60[0] == 'a') {
          puStack_4 = (undefined1 *)0x254;
          pcStack_6 = auStack_56;
          uVar4 = 0x22b2;
          uStack_a = 0xb179;
          puStack_8 = (undefined1 *)uVar3;
          iStack_a4 = FUN_21f2_1348();
          if (iStack_a4 == 0) {
            puStack_4 = (undefined1 *)0x552;
            pcStack_6 = (char *)0x22b2;
            uVar4 = 0x11f2;
            puStack_8 = (undefined1 *)0xb18c;
            FUN_13bf_0a03();
          }
          while( true ) {
            puStack_4 = (undefined1 *)iStack_a4;
            pcStack_6 = (undefined1 *)0x12b;
            puStack_8 = auStack_1dc;
            uVar3 = 0x22b2;
            uStack_c = 0xb1b0;
            uStack_a = uVar4;
            iVar2 = func_0x0002509c();
            if (iVar2 == 0) break;
            puStack_4 = (undefined1 *)*(undefined2 *)0xd70;
            pcStack_6 = auStack_1dc;
            puStack_8 = (undefined1 *)0x22b2;
            uVar4 = 0x22b2;
            uStack_a = 0xb19c;
            FUN_21f2_31f0();
          }
        }
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
        puStack_4 = (undefined1 *)*(undefined2 *)0xd70;
        puStack_8 = (undefined1 *)0xb1cd;
        pcStack_6 = (char *)uVar3;
        func_0x0002327e();
        func_0x0002504e();
        *(undefined2 *)0xd70 = 0;
        iStack_a4 = 0;
        puStack_4 = (undefined1 *)0x22b2;
        pcStack_6 = (char *)0xb1ec;
        func_0x00024c86();
        puStack_4 = (undefined1 *)0x22b2;
        pcStack_6 = (char *)0xb1fc;
        iStack_64 = func_0x00025b06();
        if (iStack_64 != 0) {
          *(undefined1 *)(iStack_64 + 1) = 0;
        }
        puStack_4 = (undefined1 *)0x22b2;
        pcStack_6 = (char *)0xb219;
        FUN_21f2_2d26();
        puStack_4 = auStack_250;
        pcStack_6 = (char *)0x22b2;
        uVar3 = 0x22b2;
        puStack_8 = (undefined1 *)0xb22d;
        iVar2 = func_0x000276d7();
        if (iVar2 == 0) {
          uVar3 = 0x22b2;
          puStack_4 = (undefined1 *)0xb23e;
          iVar2 = func_0x00027698();
          if (iVar2 != 0) {
            uVar3 = 0x11f2;
            puStack_4 = (undefined1 *)0xb24c;
            FUN_13bf_0a03();
          }
        }
        puStack_4 = auStack_56;
        uVar4 = 0x22b2;
        puStack_8 = (undefined1 *)0xb25e;
        pcStack_6 = (char *)uVar3;
        iVar2 = func_0x000276d7();
        if (iVar2 == 0) {
          puStack_4 = (undefined1 *)0x22b2;
          uVar4 = 0x22b2;
          pcStack_6 = (char *)0xb273;
          iVar2 = func_0x000270f0();
          if (iVar2 != 0) {
            uVar4 = 0x11f2;
            puStack_4 = (undefined1 *)0xb282;
            FUN_13bf_0a03();
          }
        }
        pcStack_6 = (char *)0xb291;
        puStack_4 = (undefined1 *)uVar4;
        iVar2 = func_0x000270f0();
        if (iVar2 != 0) {
          puStack_4 = (undefined1 *)0xb2a0;
          FUN_13bf_0a03();
        }
        FUN_10ad_1871();
        puStack_4 = (undefined1 *)0x2;
        pcStack_6 = (char *)0x14;
        puStack_8 = (undefined1 *)0x718;
        uStack_a = 0x11f2;
        uStack_c = 0xb2be;
        FUN_1000_02b5();
        *(undefined2 *)0xc22 = 1;
        return 1;
      }
    }
  }
LAB_3ab8_050d:
  pcStack_6 = (char *)0xb092;
  puStack_4 = (undefined1 *)uVar3;
  func_0x0000c3ca();
  return 0xff91;
}



/* 3ab8:0748  FUN_3ab8_0748  676 bytes, 0 callers */

undefined2 __cdecl16far
FUN_3ab8_0748(int param_1,undefined2 param_2,undefined2 *param_3,undefined2 *param_4,
             undefined2 *param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
             undefined2 param_13,undefined2 param_14,undefined2 param_15,undefined2 param_16,
             undefined2 param_17,undefined2 param_18,undefined2 param_19)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  code *pcVar15;
  undefined2 uVar16;
  int iVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar20;
  undefined4 uVar21;
  int in_stack_00000030;
  undefined2 local_56;
  undefined2 local_46 [11];
  byte local_2f;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 auStack_2a [4];
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 auStack_1a [4];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iVar22;
  
  FUN_21f2_0ebc();
  uVar2 = *(undefined2 *)0x1096;
  uVar3 = *(undefined2 *)0x1098;
  iVar22 = 0;
  do {
    iVar17 = iVar22 * 4;
    uVar9 = *(undefined2 *)(iVar17 + 0x10b4);
    auStack_1a[iVar22 * 2] = *(undefined2 *)(iVar17 + 0x10b2);
    auStack_1a[iVar22 * 2 + 1] = uVar9;
    uVar9 = *(undefined2 *)(iVar17 + 0x10c0);
    auStack_2a[iVar22 * 2] = *(undefined2 *)(iVar17 + 0x10be);
    auStack_2a[iVar22 * 2 + 1] = uVar9;
    uVar9 = *(undefined2 *)0xa760;
    uVar10 = *(undefined2 *)0xa762;
    *(undefined2 *)(iVar17 + 0x10b2) = uVar9;
    *(undefined2 *)(iVar17 + 0x10b4) = uVar10;
    *(undefined2 *)(iVar17 + 0x10be) = uVar9;
    *(undefined2 *)(iVar17 + 0x10c0) = uVar10;
    iVar22 = iVar22 + 1;
  } while (iVar22 < 3);
  uVar9 = *(undefined2 *)0xb30c;
  uVar11 = *(undefined2 *)0xb30e;
  uVar10 = *(undefined2 *)0xb37e;
  uVar12 = *(undefined2 *)0xb380;
  uVar4 = *(undefined2 *)0xb76a;
  uVar13 = *(undefined2 *)0xb76c;
  uVar5 = *(undefined2 *)0xb784;
  uVar14 = *(undefined2 *)0xb786;
  local_2e = *(undefined2 *)0xc122;
  local_2c = *(undefined2 *)0xc124;
  uVar6 = *(undefined2 *)0x168;
  if (param_1 == 0) {
    *(undefined2 *)0x1096 = *param_3;
    *(undefined2 *)0x1098 = *param_4;
    *(undefined2 *)0x168 = *param_5;
    func_0x00029834();
    func_0x00029983();
    func_0x00029834();
    func_0x00029983();
    *(undefined1 *)0xc3b4 = *(undefined1 *)0x168;
    *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
    *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
    if (in_stack_00000030 != 0) {
      *(byte *)0xc3b6 = *(byte *)0xc3b6 | 0x20;
    }
    uStack_c = param_19;
    uStack_e = param_18;
    uStack_10 = param_17;
    uStack_12 = param_16;
    auStack_1a[3] = param_15;
    auStack_1a[2] = param_14;
    auStack_1a[1] = param_13;
    auStack_1a[0] = param_12;
    uStack_1c = param_11;
    uStack_1e = param_10;
    uStack_20 = param_9;
    uStack_22 = param_8;
    auStack_2a[3] = param_7;
    auStack_2a[2] = param_6;
    auStack_2a[1] = 0x22b2;
    auStack_2a[0] = 0xb406;
    iVar22 = FUN_1def_043a();
    if (iVar22 == 0) {
      local_56 = 0xffff;
      goto LAB_3ab8_0985;
    }
    pcVar15 = (code *)swi(0x3f);
    local_56 = (*pcVar15)();
    *param_3 = *(undefined2 *)0x1096;
    *param_4 = *(undefined2 *)0x1098;
    *param_5 = *(undefined2 *)0x168;
  }
  if (param_1 == 1) {
    uStack_c = 0xb44e;
    puVar20 = (undefined2 *)func_0x00000398();
    puVar18 = (undefined2 *)puVar20;
    puVar19 = local_46;
    for (iVar22 = 0xc; iVar22 != 0; iVar22 = iVar22 + -1) {
      puVar8 = puVar19;
      puVar19 = puVar19 + 1;
      puVar7 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar8 = *puVar7;
    }
    *(undefined2 *)0x1096 = 0;
    if ((local_2f & 0x10) != 0) {
      *(undefined2 *)0x1096 = 1;
    }
    if ((local_2f & 0x20) != 0) {
      *(undefined2 *)0x1096 = 2;
    }
    *(undefined2 *)0x1098 = 0;
    func_0x000297e6();
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb4a0;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb4a8;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb4ad;
    func_0x00029d78();
    auStack_1a[1] = 0x22b2;
    auStack_1a[0] = 0xb4b7;
    func_0x000299d1();
    auStack_1a[1] = 1;
    pcVar15 = (code *)swi(0x3f);
    (*pcVar15)();
    uStack_c = 0xb4cc;
    uVar21 = func_0x00000398();
    uVar16 = (undefined2)((ulong)uVar21 >> 0x10);
    puVar1 = (uint *)((int)uVar21 + 0x16);
    *puVar1 = *puVar1 ^ ((*(byte *)((int)uVar21 + 0x17) ^ local_2f) & 0x10) << 8;
    uStack_c = 0xb4ed;
    uVar21 = func_0x00000398();
    uVar16 = (undefined2)((ulong)uVar21 >> 0x10);
    puVar1 = (uint *)((int)uVar21 + 0x16);
    *puVar1 = *puVar1 ^ ((*(byte *)((int)uVar21 + 0x17) ^ local_2f) & 0x20) << 8;
  }
LAB_3ab8_0985:
  *(undefined2 *)0x1096 = uVar2;
  *(undefined2 *)0x1098 = uVar3;
  iVar22 = 0;
  do {
    iVar17 = iVar22 * 4;
    uVar2 = auStack_1a[iVar22 * 2 + 1];
    *(undefined2 *)(iVar17 + 0x10b2) = auStack_1a[iVar22 * 2];
    *(undefined2 *)(iVar17 + 0x10b4) = uVar2;
    uVar2 = auStack_2a[iVar22 * 2 + 1];
    *(undefined2 *)(iVar17 + 0x10be) = auStack_2a[iVar22 * 2];
    *(undefined2 *)(iVar17 + 0x10c0) = uVar2;
    iVar22 = iVar22 + 1;
  } while (iVar22 < 3);
  *(undefined2 *)0x168 = uVar6;
  *(undefined2 *)0xb30c = uVar9;
  *(undefined2 *)0xb30e = uVar11;
  *(undefined2 *)0xb37e = uVar10;
  *(undefined2 *)0xb380 = uVar12;
  *(undefined2 *)0xb76a = uVar4;
  *(undefined2 *)0xb76c = uVar13;
  *(undefined2 *)0xb784 = uVar5;
  *(undefined2 *)0xb786 = uVar14;
  *(undefined2 *)0xc122 = local_2e;
  *(undefined2 *)0xc124 = local_2c;
  return local_56;
}



/* 3ab8:0a12  FUN_3ab8_0a12  5737 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_0a12(int param_1,int param_2,undefined2 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  int *piVar15;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined2 *puVar18;
  undefined4 uVar19;
  undefined2 in_stack_00000014;
  int *in_stack_00000016;
  undefined2 in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_0000001e;
  int in_stack_00000028;
  int in_stack_0000002a;
  int in_stack_0000002c;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  uint local_92;
  char local_7c;
  undefined2 local_76 [11];
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  char local_5a;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 uStack_36;
  undefined2 local_34;
  undefined4 local_32;
  undefined4 local_2e;
  undefined2 local_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  int local_1e;
  int local_1c;
  int local_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int *piStack_10;
  int *piStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  if (param_2 != 0 || param_1 != 0) {
    if (param_2 < 0) {
      return 0xffff;
    }
    uStack_c = 0x22b2;
    piStack_e = (int *)0xb5da;
    puVar18 = (undefined2 *)func_0x0000013f();
    puVar11 = (undefined2 *)puVar18;
    puVar10 = &local_56;
    iVar12 = 0xb;
    while( true ) {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      puVar2 = puVar10;
      puVar10 = puVar10 + 1;
      puVar1 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar2 = *puVar1;
    }
    puVar10 = &local_18;
    puVar11 = &local_56;
    for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      puVar18 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar1 = *puVar18;
    }
  }
LAB_3ab8_0a7f:
  func_0x0000c3ca();
  FUN_1885_2ec3();
  func_0x00013e19();
  local_1e = 0;
  if (param_2 != 0 || param_1 != 0) {
    piVar15 = &local_1e;
    puVar10 = &local_18;
    for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
      puVar1 = piVar15;
      piVar15 = piVar15 + 1;
      puVar18 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar1 = *puVar18;
    }
    uStack_22 = 0xb632;
    func_0x00018396();
  }
  uStack_c = in_stack_00000014;
  piStack_e = (int *)0x1;
  piStack_10 = (int *)0x11f2;
  uVar13 = 0x1bb4;
  uStack_12 = 0xb649;
  func_0x0001e740();
LAB_3ab8_0acc:
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xa4a = 1;
  uStack_c = in_stack_00000018;
  piStack_e = &local_1c;
  piStack_10 = &local_1a;
  uVar14 = 0x3bf;
  uStack_14 = 0xb66b;
  uStack_12 = uVar13;
  uVar9 = func_0x00006608();
  *(undefined2 *)0xa4a = 0;
LAB_3ab8_0af7:
  *(undefined2 *)0xbc0 = 1;
  if ((local_1c < 0x10) && (uVar9 == 0)) {
    uVar13 = uVar14;
    if (local_1e != 0) {
      local_1e = 0;
      FUN_1885_2ec3();
      uVar13 = 0x11f2;
      func_0x00013e19();
    }
    if (*in_stack_00000016 == 0) goto LAB_3ab8_0acc;
    *in_stack_00000016 = 0;
    uVar9 = 0;
    if (local_1a < 0x28) {
      uVar9 = 0xffff;
    }
    if (0xf8 < local_1a) {
      uVar9 = 0x31;
    }
    if (0x1d6 < local_1a) {
      uVar9 = 0x32;
    }
    if (0x23e < local_1a) {
      uVar9 = 0x7f;
    }
  }
  if ((uVar9 == 0x7f) || ((*(char *)0xefb != '|' && (*(byte *)0xefb == uVar9)))) {
    uVar9 = 0x14;
  }
  if (uVar9 == 99) goto LAB_3ab8_0a7f;
  if (*(int *)0x158 != 0) {
    uVar13 = 0xfba9;
LAB_3ab8_2040:
    *(undefined2 *)0xbc0 = 1;
    FUN_1885_2ec3();
    func_0x00013e19();
    if (param_2 == 0 && param_1 == 0) {
      return uVar13;
    }
    piVar15 = &local_1e;
    puVar10 = &local_56;
    for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
      puVar1 = piVar15;
      piVar15 = piVar15 + 1;
      puVar18 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar1 = *puVar18;
    }
    uStack_22 = 0xcbef;
    func_0x00018396();
    return 0x11f2;
  }
  if (uVar9 == 0x14) {
    uVar13 = 0x14;
    goto LAB_3ab8_2040;
  }
  if (uVar9 == 0xffff) {
    uVar13 = 0xffff;
    goto LAB_3ab8_2040;
  }
  if (uVar9 == 0x31) {
    uVar13 = 1;
    goto LAB_3ab8_2040;
  }
  if (uVar9 == 0x32) {
    uVar13 = 2;
    goto LAB_3ab8_2040;
  }
  if (uVar9 == 0x33) {
    uVar13 = 3;
    goto LAB_3ab8_2040;
  }
  if ((*in_stack_00000016 != 0) || (*(int *)0xc18 != 0)) {
    uVar13 = 0;
    goto LAB_3ab8_2040;
  }
  uVar16 = uVar9 == 0x6200;
  if ((bool)uVar16) {
    uVar13 = 0x6200;
    goto LAB_3ab8_2040;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar16) {
    func_0x000297e6();
    func_0x000297e6();
    uVar13 = 0x22b2;
    FUN_28b3_1181();
    if ((bool)uVar16) goto LAB_3ab8_0acc;
  }
  FUN_1885_2ec3();
  func_0x00013e19();
  func_0x000297e6();
  func_0x0002996b();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029983();
  local_1e = 1;
  uStack_c = 0xb7fd;
  func_0x0000daa6();
  uVar16 = param_2 == 0;
  if ((param_2 < 0) || ((param_2 < 1 && (uVar16 = false, param_1 == 0)))) {
    uStack_c = *(undefined2 *)0xa75a;
    piStack_e = (int *)*(undefined2 *)0xa758;
    piStack_10 = (int *)*(undefined2 *)0xa77a;
    uStack_12 = *(undefined2 *)0xa778;
    uStack_14 = *(undefined2 *)0xa776;
    uStack_16 = *(undefined2 *)0xa774;
    local_18 = *(undefined2 *)0xa75e;
    local_1a = *(int *)0xa75c;
    local_1c = *(int *)0xa75a;
    local_1e = *(int *)0xa758;
    uStack_22 = *(undefined2 *)0xa75c;
    uStack_24 = *(undefined2 *)0xa75a;
    uStack_26 = *(undefined2 *)0xa758;
    uVar13 = 0x1bb4;
    local_2a = 0xbcb9;
    FUN_1def_043a();
    *(undefined2 *)0xb30c = local_b4;
    *(undefined2 *)0xb30e = local_b2;
    *(undefined2 *)0xb37e = local_c2;
    *(undefined2 *)0xb380 = local_c0;
  }
  else {
    uVar17 = 0;
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
LAB_3ab8_0d0e:
      uVar8 = local_50;
      uVar7 = local_52;
      uVar14 = local_54;
      uVar13 = local_56;
      local_56 = local_4e;
      local_54 = local_4c;
      local_4e = uVar13;
      local_4c = uVar14;
      local_52 = local_4a;
      local_50 = local_48;
      local_4a = uVar7;
      local_48 = uVar8;
    }
    else {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar16) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar17) goto LAB_3ab8_0d0e;
      }
    }
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb8f1;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb8f9;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb8fe;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = -0x46f8;
    func_0x000299d1();
    local_18 = 0x22b2;
    local_1a = -0x46f0;
    func_0x000297e6();
    local_18 = 0x22b2;
    local_1a = -0x46eb;
    func_0x00029d78();
    uStack_22 = 0xb91f;
    func_0x000299d1();
    uStack_22 = 0xb927;
    func_0x000297e6();
    uStack_22 = 0xb92c;
    func_0x00029d78();
    local_2a = 0xb936;
    func_0x000299d1();
    local_2a = 0xb93b;
    FUN_1def_043a();
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb955;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb95d;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb962;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = -0x4694;
    func_0x000299d1();
    local_18 = 1;
    local_1a = 0x22b2;
    local_1c = -0x468b;
    FUN_1def_05d1();
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb997;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb9a0;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb9a5;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = -0x4651;
    func_0x000299d1();
    local_18 = 1;
    local_1a = 0x22b2;
    local_1c = -0x4648;
    FUN_1def_05d1();
    uVar16 = (undefined1 *)0xffed < &local_18;
    func_0x000297e6();
    FUN_28b3_1181();
    uVar8 = local_50;
    uVar7 = local_52;
    uVar14 = local_54;
    uVar13 = local_56;
    if ((bool)uVar16) {
      local_56 = local_4e;
      local_54 = local_4c;
      local_4e = uVar13;
      local_4c = uVar14;
      local_52 = local_4a;
      local_50 = local_48;
      local_4a = uVar7;
      local_48 = uVar8;
    }
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xba2c;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xba34;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xba39;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = -0x45bd;
    func_0x000299d1();
    local_18 = 0x22b2;
    local_1a = -0x45b5;
    func_0x000297e6();
    local_18 = 0x22b2;
    local_1a = -0x45b0;
    func_0x00029d78();
    uStack_22 = 0xba5a;
    func_0x000299d1();
    uStack_22 = 0xba62;
    func_0x000297e6();
    uStack_22 = 0xba67;
    func_0x00029d78();
    local_2a = 0xba71;
    func_0x000299d1();
    local_2a = 0xba76;
    FUN_1def_043a();
    uStack_c = *(undefined2 *)0xa75a;
    piStack_e = (int *)*(undefined2 *)0xa758;
    piStack_10 = (int *)0x1bb4;
    uStack_12 = 0xba92;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xba97;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = -0x455f;
    func_0x000299d1();
    local_18 = 0x22b2;
    local_1a = -0x4556;
    func_0x000297e6();
    local_18 = 0x22b2;
    local_1a = -0x4551;
    func_0x00029d78();
    uStack_22 = 0xbab9;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xbac2;
    FUN_1def_05d1();
    piStack_10 = (int *)0x1bb4;
    uStack_12 = 0xbacc;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbad5;
    func_0x0002996b();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbada;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = -0x451c;
    func_0x000299d1();
    local_18 = 0;
    local_1a = 0x22b2;
    local_1c = -0x4514;
    puVar10 = (undefined2 *)FUN_1def_05d1();
    local_b4 = *puVar10;
    local_b2 = puVar10[1];
    uStack_c = *(undefined2 *)0xa75a;
    piStack_e = (int *)*(undefined2 *)0xa758;
    piStack_10 = (int *)0x1bb4;
    uStack_12 = 0xbb17;
    func_0x000297e6();
    local_18 = 0x22b2;
    local_1a = -0x44df;
    func_0x000299d1();
    local_18 = 0;
    local_1a = 0x22b2;
    local_1c = -0x44d7;
    puVar10 = (undefined2 *)func_0x0001e558();
    local_c2 = *puVar10;
    local_c0 = puVar10[1];
    *(undefined2 *)0xb30c = local_b4;
    *(undefined2 *)0xb30e = local_b2;
    *(undefined2 *)0xb37e = local_c2;
    *(undefined2 *)0xb380 = local_c0;
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbb71;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbb7a;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 47999;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = -0x4477;
    func_0x000299d1();
    local_18 = 0x22b2;
    local_1a = -0x4472;
    func_0x0002a178();
    func_0x00029834();
    func_0x00029b6d();
    func_0x00029983();
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbbd9;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbbe2;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbbe7;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = -0x440f;
    func_0x000299d1();
    local_18 = 1;
    local_1a = 0x22b2;
    local_1c = -0x4406;
    func_0x0001e558();
    uVar16 = (undefined1 *)0xffed < &local_18;
    func_0x000297e6();
    func_0x0002996b();
    FUN_28b3_1181();
    if ((bool)uVar16) {
      func_0x000297e6();
      func_0x00029af6();
      func_0x00029983();
    }
    uVar13 = 0x22b2;
    if (param_4 < 0) {
      func_0x000297e6();
      func_0x00029af6();
      uVar13 = 0x22b2;
      func_0x00029983();
    }
  }
  bVar4 = false;
  local_92 = 0;
  while( true ) {
    if (in_stack_0000001c < (int)local_92) goto LAB_3ab8_0acc;
    *(undefined2 *)0xbc0 = 1;
    *(undefined2 *)0xa4a = 0;
    uStack_c = in_stack_00000018;
    piStack_e = &local_1c;
    piStack_10 = &local_1a;
    uVar14 = 0x3bf;
    uStack_14 = 0xbf5b;
    uStack_12 = uVar13;
    uVar9 = func_0x00006608();
    *(undefined2 *)0xa4a = 0;
    if ((uVar9 != 0) || (uVar16 = *in_stack_00000016 == 0, !(bool)uVar16)) goto LAB_3ab8_0af7;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar16) break;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar16) break;
    if (*(int *)(local_92 * 4 + in_stack_0000001e) == 700) {
      bVar4 = false;
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029983();
    }
    if ((*(int *)(local_92 * 4 + in_stack_0000001e) == 0x2ee) ||
       (*(int *)(local_92 * 4 + in_stack_0000001e) == 0x2ef)) {
      func_0x000297e6();
      func_0x00029b9d();
      func_0x00029b6d();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      uStack_c = 0xbdf1;
      func_0x00029b6d();
      func_0x00029983();
      if (*(int *)(local_92 * 4 + in_stack_0000001e) == 0x2ef) {
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xbe2c;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xbe35;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xbe3a;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = -0x41bc;
        func_0x000299d1();
        local_18 = 1;
        local_1a = 0x22b2;
        local_1c = -0x41b3;
        func_0x0001e558();
        uVar16 = (undefined1 *)0xffed < &local_18;
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar16) {
          func_0x000297e6();
          func_0x00029af6();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029af6();
          func_0x00029983();
          uVar8 = local_50;
          uVar7 = local_52;
          uVar14 = local_54;
          uVar13 = local_56;
          local_56 = local_4e;
          local_54 = local_4c;
          local_4e = uVar13;
          local_4c = uVar14;
          local_52 = local_4a;
          local_50 = local_48;
          local_4a = uVar7;
          local_48 = uVar8;
        }
      }
    }
    if (*(int *)(local_92 * 4 + in_stack_0000001e) == 800) {
      bVar4 = true;
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029983();
    }
    uVar13 = 0x22b2;
    if ((((((*(int *)(local_92 * 4 + in_stack_0000001e) < 300) ||
           (19999 < *(int *)(local_92 * 4 + in_stack_0000001e))) &&
          (*(int *)(local_92 * 4 + in_stack_0000001e) % 10 < 8)) &&
         ((*(int *)(in_stack_0000001e + local_92 * 4 + 2) % 10 < 8 &&
          ((*(int *)(local_92 * 2 + in_stack_00000028) < 7 ||
           (10000 < *(int *)(local_92 * 2 + in_stack_00000028))))))) &&
        (*(int *)(local_92 * 2 + in_stack_00000028) < 30000)) &&
       (*(int *)(local_92 * 2 + in_stack_00000028) < 0x2711)) {
      func_0x000297e6();
      func_0x00029b85();
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b85();
      func_0x00029b6d();
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b85();
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b85();
      func_0x00029b6d();
      func_0x00029b6d();
      func_0x00029983();
      if (bVar4) {
        func_0x000297e6();
        uStack_c = 0xc092;
        func_0x00029b9d();
        func_0x00029983();
        func_0x000297e6();
        uStack_c = 0xc0ab;
        func_0x00029b9d();
        func_0x00029983();
        func_0x000297e6();
        uStack_c = 0xc0c4;
        func_0x00029b9d();
        func_0x00029983();
        func_0x000297e6();
        uStack_c = 0xc0dd;
        func_0x00029b9d();
        func_0x00029983();
      }
      func_0x000297e6();
      uStack_c = 0xc0f6;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      uStack_c = 0xc10f;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      uStack_c = 0xc128;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      uStack_c = 0xc141;
      func_0x00029b6d();
      func_0x00029983();
      if ((*(int *)(local_92 * 4 + in_stack_0000001e) % 100 == 0) || (param_2 == 0 && param_1 == 0))
      {
        uStack_c = 0;
        piStack_e = (int *)0x22b2;
        piStack_10 = (int *)0xc178;
        FUN_1def_0338();
        func_0x000297e6();
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029bb5();
        piVar15 = (int *)0x22b2;
        func_0x00029983();
      }
      else {
        uVar9 = *(int *)(local_92 * 4 + in_stack_0000001e) % 10;
        uVar16 = uVar9 < 3;
        uVar17 = uVar9 == 3;
        if ((bool)uVar17) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar16 && !(bool)uVar17) {
            func_0x000297e6();
            func_0x00029af6();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029af6();
            func_0x00029983();
          }
        }
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc228;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc231;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc236;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = -0x3dc0;
        func_0x000299d1();
        local_18 = 0;
        local_1a = 0x22b2;
        local_1c = -0x3db8;
        puVar10 = (undefined2 *)FUN_1def_05d1();
        local_d0 = *puVar10;
        local_ce = puVar10[1];
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc272;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc27b;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc280;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = -0x3d76;
        func_0x000299d1();
        local_18 = 0;
        local_1a = 0x22b2;
        piVar15 = (int *)0x1bb4;
        local_1c = -0x3d6e;
        puVar10 = (undefined2 *)func_0x0001e558();
        local_d8 = *puVar10;
        local_d6 = puVar10[1];
      }
      if ((*(int *)(in_stack_0000001e + local_92 * 4 + 2) % 100 == 0) ||
         (param_2 == 0 && param_1 == 0)) {
        uStack_c = 0;
        piStack_10 = (int *)0xc2d6;
        piStack_e = piVar15;
        FUN_1def_0338();
        func_0x000297e6();
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029bb5();
        func_0x00029983();
      }
      else {
        uVar9 = *(int *)(in_stack_0000001e + local_92 * 4 + 2) % 10;
        uVar16 = uVar9 < 3;
        uVar17 = uVar9 == 3;
        if ((bool)uVar17) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar16 && !(bool)uVar17) {
            func_0x000297e6();
            func_0x00029af6();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029af6();
            func_0x00029983();
          }
        }
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc387;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc390;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc395;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = -0x3c61;
        func_0x000299d1();
        local_18 = 0;
        local_1a = 0x22b2;
        local_1c = -0x3c59;
        FUN_1def_05d1();
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc3d1;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc3da;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc3df;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = -0x3c17;
        func_0x000299d1();
        local_18 = 0;
        local_1a = 0x22b2;
        local_1c = -0x3c0f;
        func_0x0001e558();
      }
      if (*(int *)(local_92 * 4 + in_stack_0000001e) % 100 == 10) {
        local_d0 = local_56;
        local_ce = local_54;
        local_d8 = local_52;
        local_d6 = local_50;
      }
      if (*(int *)(local_92 * 4 + in_stack_0000001e) % 100 == 0x14) {
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc499;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc4a2;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc4a7;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = -0x3b4f;
        func_0x000299d1();
        local_18 = 0;
        local_1a = 0x22b2;
        local_1c = -0x3b47;
        puVar10 = (undefined2 *)FUN_1def_05d1();
        local_d0 = *puVar10;
        local_ce = puVar10[1];
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc4e3;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc4ec;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc4f1;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = -0x3b05;
        func_0x000299d1();
        local_18 = 0;
        local_1a = 0x22b2;
        local_1c = -0x3afd;
        puVar10 = (undefined2 *)func_0x0001e558();
        local_d8 = *puVar10;
        local_d6 = puVar10[1];
      }
      if (*(int *)(in_stack_0000001e + local_92 * 4 + 2) % 100 == 0x14) {
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc549;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc552;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc557;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = -0x3a9f;
        func_0x000299d1();
        local_18 = 0;
        local_1a = 0x22b2;
        local_1c = -14999;
        FUN_1def_05d1();
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc593;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc59c;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xc5a1;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = -0x3a55;
        func_0x000299d1();
        local_18 = 0;
        local_1a = 0x22b2;
        local_1c = -0x3a4d;
        func_0x0001e558();
      }
      local_b6 = *(undefined2 *)0xa6c;
      local_7c = (char)*(undefined2 *)0xb310;
      iVar12 = local_92 * 2;
      if ((0 < *(int *)(iVar12 + in_stack_0000002a)) && (*(int *)(iVar12 + in_stack_0000002a) < 10))
      {
        local_b6 = *(undefined2 *)(iVar12 + in_stack_0000002a);
      }
      if (-1 < *(int *)(local_92 * 2 + in_stack_0000002c)) {
        uVar3 = *(uint *)(local_92 * 2 + in_stack_0000002c);
        bVar6 = (byte)((int)uVar3 >> 0xf);
        uVar9 = *(uint *)0xb310;
        bVar5 = (byte)((int)uVar9 >> 0xf);
        local_7c = (char)uVar3 +
                   ((((byte)((int)((uVar9 ^ (int)uVar9 >> 0xf) - ((int)uVar9 >> 0xf)) >> 4) ^ bVar5)
                    - bVar5) -
                   (((byte)((int)((uVar3 ^ (int)uVar3 >> 0xf) - ((int)uVar3 >> 0xf)) >> 4) ^ bVar6)
                   - bVar6)) * '\x10';
      }
      func_0x000297e6();
      uVar16 = (local_92 & 0x3fff) == 0;
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar16) {
        uVar14 = *(undefined2 *)0xa6c;
        *(undefined2 *)0xa6c = local_b6;
        uStack_c = 0xc68b;
        func_0x000297e6();
        uStack_c = 0xc690;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xc69a;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        uStack_14 = 0xc6a3;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xc6a8;
        func_0x00029d78();
        local_1a = 0x22b2;
        local_1c = -0x394e;
        func_0x000299d1();
        local_1a = 0x22b2;
        local_1c = -0x3945;
        func_0x000297e6();
        local_1a = 0x22b2;
        local_1c = -0x3940;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xc6ca;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0xc6d3;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0xc6d8;
        func_0x00029d78();
        local_2a = 0x22b2;
        local_2e._2_2_ = 0xc6e2;
        func_0x000299d1();
        local_2a = 0x22b2;
        uVar13 = 0x1bb4;
        local_2e._2_2_ = 0xc6e7;
        func_0x0001e18f();
        *(undefined2 *)0xa6c = uVar14;
      }
      else {
        uVar17 = (int)(local_92 << 2) < 0;
        uVar16 = (local_92 & 0x1fff) == 0;
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar17 && !(bool)uVar16) {
          func_0x000297e6();
          func_0x00029bb5();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar17) {
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x000297e6();
          uStack_c = 0xc7b9;
          func_0x00029bb5();
          func_0x0002996b();
          FUN_28b3_1181();
          if (!(bool)uVar17) {
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029983();
          }
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar17 && !(bool)uVar16) {
          uVar16 = (int)(local_92 << 1) < 0;
          iVar12 = *(int *)(in_stack_0000001e + local_92 * 4 + 2);
          if ((((iVar12 % 100) / 10 == 1) || (uVar9 = iVar12 % 10, uVar9 == 1)) ||
             (uVar16 = uVar9 < 4, uVar9 == 4)) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x0002996b();
            FUN_28b3_1181();
            if (!(bool)uVar16) {
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029983();
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x0002996b();
            FUN_28b3_1181();
            if (!(bool)uVar16) {
              func_0x000297e6();
              FUN_28b3_100d();
              goto LAB_3ab8_1db7;
            }
          }
          else {
            if (*(int *)(in_stack_0000001e + local_92 * 4 + 2) % 10 == 2) {
              func_0x000297e6();
              func_0x00029af6();
              func_0x00029983();
            }
            if (*(int *)(in_stack_0000001e + local_92 * 4 + 2) % 10 == 3) {
              func_0x000297e6();
              func_0x00029af6();
LAB_3ab8_1db7:
              func_0x00029983();
            }
          }
        }
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029d78();
        FUN_28b3_0f51();
        uStack_c = 0x22b2;
        piStack_e = (int *)0xc963;
        uVar19 = func_0x00021eee();
        local_32 = uVar19;
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029d78();
        FUN_28b3_0f51();
        uStack_c = 0x22b2;
        piStack_e = (int *)0xc996;
        uVar19 = func_0x00021eee();
        local_40 = local_d0;
        local_3e = local_ce;
        local_3c = local_d8;
        local_3a = local_d6;
        local_2e = uVar19;
        func_0x000297e6();
        func_0x00029b85();
        func_0x00029b6d();
        func_0x0002996b();
        FUN_28b3_0ee9();
        if (bVar4) {
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x00029ae7();
        func_0x00029983();
        local_34 = 10000;
        local_2a = 0;
        func_0x00029834();
        uVar16 = (int)(local_92 << 1) < 0;
        uVar17 = (local_92 & 0x3fff) == 0;
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029d78();
        FUN_28b3_1181();
        if (!(bool)uVar16) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar16 || (bool)uVar17) {
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            local_34 = FUN_28b3_0f51();
          }
        }
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xcaaf;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xcab8;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xcabd;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = -0x3539;
        func_0x000299d1();
        puVar11 = &uStack_36;
        puVar10 = &local_40;
        for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
          puVar1 = puVar11;
          puVar11 = puVar11 + 1;
          puVar18 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar1 = *puVar18;
        }
        local_3a = 0xcadb;
        puVar11 = (undefined2 *)FUN_21f2_001a();
        puVar10 = local_76;
        uVar19 = local_60;
        for (iVar12 = 0x10; local_60 = uVar19, iVar12 != 0; iVar12 = iVar12 + -1) {
          puVar1 = puVar10;
          puVar10 = puVar10 + 1;
          puVar18 = puVar11;
          puVar11 = puVar11 + 1;
          *puVar1 = *puVar18;
          uVar19 = local_60;
        }
        if ((*(int *)(local_92 * 4 + in_stack_0000001e) % 10 == 0) ||
           (uVar16 = 0, param_2 == 0 && param_1 == 0)) {
          uVar16 = 0;
          if (*(int *)0xcb6 != 0) {
            func_0x000297e6();
            goto LAB_3ab8_1fac;
          }
        }
        else {
          func_0x000297e6();
LAB_3ab8_1fac:
          func_0x00029b6d();
          func_0x00029da5();
          FUN_28b3_117c();
          func_0x00029d78();
          FUN_28b3_0f51();
          uStack_c = 0x22b2;
          piStack_e = (int *)0xcb72;
          uVar19 = func_0x00021eee();
        }
        local_60 = uVar19;
        func_0x000297e6();
        func_0x000297e6();
        uVar13 = 0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar16) {
          local_5b = 9;
          local_5c = (undefined1)local_b6;
          local_5a = local_7c;
          puVar11 = &uStack_26;
          puVar10 = local_76;
          for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
            puVar1 = puVar11;
            puVar11 = puVar11 + 1;
            puVar18 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar1 = *puVar18;
          }
          uVar13 = 0x11f2;
          local_2a = 0xcbba;
          func_0x00013e46();
        }
      }
    }
    local_92 = local_92 + 1;
  }
  uVar14 = 0x22b2;
  goto LAB_3ab8_0af7;
}



/* 3ab8:207b  FUN_3ab8_207b  207 bytes, 0 callers */

/* WARNING: Instruction at (ram,0x00030cb6) overlaps instruction at (ram,0x00030cb3)
    */
/* WARNING: Removing unreachable block (ram,0x0003dfe6) */
/* WARNING: Removing unreachable block (ram,0x0003dfff) */
/* WARNING: Removing unreachable block (ram,0x0003e07e) */
/* WARNING: Removing unreachable block (ram,0x0003e0ac) */
/* WARNING: Removing unreachable block (ram,0x0003e656) */
/* WARNING: Type propagation algorithm not settling */

int FUN_3ab8_207b(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined2 *param_6,undefined2 *param_7,undefined2 *param_8,undefined2 *param_9)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 *******pppppppuVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int *piVar7;
  int *piVar8;
  char cVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  code *pcVar15;
  undefined2 *******pppppppuVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  int unaff_DI;
  undefined2 ****ppppuVar25;
  undefined2 *******pppppppuVar26;
  undefined2 uVar27;
  undefined2 ***pppuVar28;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined2 *puVar31;
  byte *pbVar32;
  undefined2 uStack_e9e;
  undefined2 uStack_e9c;
  undefined2 uStack_e9a;
  undefined2 uStack_e98;
  byte abStack_e92 [2];
  undefined2 uStack_e90;
  int iStack_e8e;
  undefined2 *******pppppppuStack_e8c;
  undefined2 *******pppppppuStack_e8a;
  undefined2 uStack_e88;
  byte abStack_e86 [4];
  undefined2 uStack_e82;
  undefined2 uStack_e80;
  int local_e7e;
  undefined2 *******pppppppuStack_e7c;
  undefined2 *******pppppppuStack_e7a;
  undefined2 *******pppppppuStack_e78;
  undefined2 uStack_e76;
  undefined2 *******local_e74;
  undefined2 *******local_e72;
  undefined2 uStack_e70;
  undefined2 uStack_e6e;
  uint auStack_e6c [64];
  int local_dec;
  undefined2 ******appppppuStack_dea [2];
  int iStack_de6;
  undefined2 *****pppppuStack_de4;
  undefined2 uStack_de2;
  undefined2 uStack_de0;
  undefined2 *******pppppppuStack_dde;
  undefined2 uStack_ddc;
  undefined2 *******pppppppuStack_dda;
  undefined2 *******pppppppuStack_dd8;
  undefined2 uStack_dd6;
  undefined2 uStack_dd4;
  undefined2 uStack_dd2;
  undefined2 uStack_dd0;
  undefined2 *******local_dce;
  undefined2 local_dcc;
  undefined2 ******appppppuStack_dca [64];
  uint uStack_d4a;
  undefined2 uStack_d48;
  undefined2 uStack_d46;
  undefined2 uStack_d44;
  undefined2 uStack_d42;
  undefined2 ****appppuStack_d40 [128];
  undefined2 ******appppppuStack_c40 [4];
  undefined2 uStack_c38;
  undefined2 uStack_c36;
  undefined2 ****ppppuStack_c34;
  int local_c32;
  undefined2 ******local_c2c [20];
  undefined2 ******appppppuStack_c04 [10];
  uint uStack_bf0;
  undefined2 local_bea;
  undefined2 local_be8;
  undefined2 ****ppppuStack_be6;
  undefined2 uStack_be4;
  undefined2 *******local_be2;
  int iStack_be0;
  int iStack_bd6;
  undefined2 ***apppuStack_bd4 [51];
  uint uStack_b6e;
  undefined2 ******appppppuStack_b64 [256];
  char acStack_964 [270];
  int local_856;
  undefined2 *******pppppppuStack_854;
  undefined4 uStack_84e;
  int iStack_84a;
  undefined2 *****apppppuStack_848 [256];
  int local_648;
  int local_646;
  undefined2 *******pppppppuStack_644;
  undefined2 *******pppppppuStack_642;
  undefined2 local_63c;
  undefined2 local_63a;
  undefined4 uStack_638;
  uint auStack_634 [64];
  undefined2 uStack_5b4;
  uint auStack_5b2 [40];
  undefined2 auStack_562 [12];
  int local_54a;
  uint uStack_548;
  undefined2 local_546;
  undefined2 local_544;
  undefined4 uStack_542;
  byte *pbStack_53e;
  undefined2 *******pppppppuStack_53c;
  undefined1 uStack_53a;
  int local_538;
  byte *pbStack_536;
  int iStack_534;
  int iStack_532;
  int aiStack_530 [52];
  undefined1 uStack_4c8;
  int iStack_4c6;
  undefined2 uStack_4c4;
  undefined2 *******pppppppuStack_4c2;
  undefined2 *******pppppppuStack_4c0;
  int iStack_4be;
  undefined2 uStack_4bc;
  undefined2 *******pppppppuStack_4ba;
  undefined2 *******pppppppuStack_4b8;
  undefined1 local_4b6;
  undefined1 local_4b5;
  undefined1 local_4b4;
  undefined2 ***local_490;
  int iStack_48e;
  undefined2 uStack_48c;
  undefined2 uStack_48a;
  undefined2 **appuStack_488 [256];
  undefined2 *******pppppppuStack_288;
  undefined2 uStack_286;
  undefined2 *******pppppppuStack_284;
  undefined2 *******pppppppuStack_282;
  undefined2 *******pppppppuStack_280;
  undefined2 uStack_27e;
  undefined2 *******pppppppuStack_27c;
  undefined2 *******pppppppuStack_27a;
  undefined1 local_278;
  undefined1 local_277;
  undefined1 local_276;
  int iStack_272;
  int local_270;
  uint auStack_26e [193];
  int iStack_ec;
  undefined2 uStack_e6;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined2 uStack_e0;
  undefined2 ******ppppppuStack_dc;
  undefined2 uStack_da;
  undefined2 ****ppppuStack_d8;
  undefined2 uStack_d6;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined2 uStack_cc;
  undefined2 uStack_c2;
  undefined2 uStack_c0;
  undefined2 ****ppppuStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined2 ***pppuStack_ae;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  int iStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  int iStack_60;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_36;
  undefined2 uStack_34;
  int iStack_32;
  undefined4 local_30;
  byte *pbStack_2c;
  undefined2 *******pppppppuStack_2a;
  undefined2 *******pppppppuStack_28;
  undefined2 uStack_26;
  undefined2 *******pppppppuStack_24;
  undefined2 ****ppppuStack_20;
  undefined2 *******pppppppuStack_1c;
  undefined2 *******pppppppuStack_1a;
  undefined2 ****ppppuStack_18;
  undefined2 *****pppppuStack_16;
  undefined2 ******ppppppuStack_14;
  undefined2 *******pppppppuStack_12;
  uint *puStack_10;
  undefined2 ***pppuStack_e;
  undefined2 *******pppppppuStack_c;
  undefined2 *******pppppppuVar33;
  
  FUN_21f2_0ebc();
  local_546 = *(undefined2 *)0xa76c;
  local_544 = *(undefined2 *)0xa76e;
  local_dce = (undefined2 *******)*(int *)0xa76c;
  local_dcc = *(undefined2 *)0xa76e;
  local_e74 = (undefined2 *******)*(int *)0xa76c;
  local_e72 = (undefined2 *******)*(int *)0xa76e;
  local_bea = *(undefined2 *)0xa76c;
  local_be8 = *(undefined2 *)0xa76e;
  local_30._0_2_ = (byte *)0xc8;
  local_30._2_2_ = (undefined2 *)0x32;
  local_270 = 0;
  local_490 = (undefined2 ***)0x0;
  local_648 = 0;
  local_856 = 0;
  local_538 = 0;
  local_646 = 0;
  local_54a = 0;
  local_e7e = 0;
  local_c32 = 0;
  local_dec = 0;
  local_be2 = (undefined2 *******)0x4;
  pppppppuStack_c = (undefined2 *******)0x22b2;
  pppuStack_e = (undefined2 ***)0xcc8d;
  FUN_21f2_3454();
  local_63c = *(undefined2 *)0xa764;
  local_63a = *(undefined2 *)0xa766;
  local_4b5 = *(undefined1 *)0xa6a;
  local_4b6 = *(undefined1 *)0xa6c;
  local_4b4 = *(undefined1 *)0xb310;
  pppppppuVar26 = (undefined2 *******)0x22b2;
  local_278 = local_4b6;
  local_277 = local_4b5;
  local_276 = local_4b4;
LAB_3ab8_213f:
  *(undefined1 *)0xc13e = 0;
  pcVar15 = (code *)swi(0x3f);
  iStack_48e = (*pcVar15)();
  if (iStack_48e != -1) {
    iStack_532 = 0;
    iStack_272 = iStack_48e;
    local_270 = iStack_48e;
LAB_3ab8_216d:
    if (*(int *)0x158 != 0) {
      *(undefined2 *)0xce6 = 0;
      goto LAB_2bb4_51c3;
    }
    pppppppuStack_c = (undefined2 *******)auStack_26e;
    pppuStack_e = (undefined2 ***)auStack_634;
    puStack_10 = auStack_e6c;
    pppppppuStack_12 = appppppuStack_dca;
    ppppppuStack_14 = appppppuStack_b64;
    pppppuStack_16 = apppppuStack_848;
    ppppuStack_18 = appppuStack_d40;
    pppppppuStack_1a = appppppuStack_c40;
    pppppppuStack_1c = appppppuStack_dea;
    ppppuStack_20 = &ppppuStack_be6;
    pppppppuStack_24 = local_be2;
    pcVar15 = (code *)swi(0x3f);
    ppppuStack_c34 = (undefined2 ****)(*pcVar15)();
    pppuStack_e = (undefined2 ***)0xcd62;
    pppppppuStack_c = pppppppuVar26;
    FUN_21f2_3454();
    if ((int)ppppuStack_c34 < 1) {
      ppppuStack_c34 = ppppuStack_be6;
    }
    if (0x3b < (int)ppppuStack_c34) {
      ppppuStack_c34 = (undefined2 ****)0x3b;
    }
    pppppppuVar26 = (undefined2 *******)0x22b2;
    if (-1 < (int)ppppuStack_c34) {
      iStack_534 = 0;
      pbStack_536 = (byte *)0x0;
      pppppppuStack_53c = (undefined2 *******)0x0;
      pbStack_53e = (byte *)0x0;
      iStack_bd6 = 0;
      iStack_84a = 0;
      local_dec = 0;
      local_490 = (undefined2 ***)0x0;
      uStack_b6e = 0;
      pbVar32 = local_30;
      while( true ) {
        local_30._2_2_ = (undefined2 *)((ulong)pbVar32 >> 0x10);
        local_30._0_2_ = (byte *)pbVar32;
        local_30 = pbVar32;
        if ((int)ppppuStack_c34 < (int)uStack_b6e) break;
        if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x2710) {
          local_490 = appppuStack_d40[uStack_b6e * 2 + 1];
        }
        else {
          if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x3a98) {
            *(undefined1 *)0xc13e = 1;
          }
          iStack_de6 = (int)appppuStack_d40[uStack_b6e * 2] / 1000;
          if ((((iStack_de6 == 0x14) || (iStack_de6 == 0x15)) || (iStack_de6 == 0x16)) &&
             (10000 < (int)appppppuStack_dca[uStack_b6e])) {
            if (((int)local_30._2_2_ <= iStack_bd6) || ((int)(byte *)local_30 <= iStack_84a))
            goto LAB_3ab8_2241;
            pppppppuStack_c = (undefined2 *******)0xce79;
            puVar31 = (undefined2 *)func_0x00000398();
            puVar18 = (undefined2 *)puVar31;
            puVar17 = auStack_562;
            for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
              puVar6 = puVar17;
              puVar17 = puVar17 + 1;
              puVar5 = puVar18;
              puVar18 = puVar18 + 1;
              *puVar6 = *puVar5;
            }
            pppppppuStack_c = (undefined2 *******)0xbf48;
            pppuStack_e = (undefined2 ***)0x0;
            pppppppuVar26 = (undefined2 *******)0x18b3;
            puStack_10 = (uint *)0xce9c;
            FUN_1885_0344();
            iStack_bd6 = iStack_bd6 + 1;
            aiStack_530[iStack_bd6] = iStack_84a;
            iStack_be0 = 0;
            while ((iStack_be0 < 0x51 && (iStack_84a < (int)(byte *)local_30))) {
              cVar9 = *(char *)(iStack_be0 + -0x40b8);
              acStack_964[iStack_84a] = cVar9;
              iStack_84a = iStack_84a + 1;
              if (cVar9 == '\0') break;
              iStack_be0 = iStack_be0 + 1;
            }
            acStack_964[iStack_84a] = '\0';
            pbVar32 = local_30;
            if (iStack_de6 == 0x16) {
              local_dec = iStack_bd6;
            }
          }
          if ((int)appppuStack_d40[uStack_b6e * 2] < 300) {
            local_30 = pbVar32;
            func_0x000297e6();
            uVar29 = (uStack_b6e & 0x3fff) == 0;
            func_0x000297e6();
            pppppppuVar26 = (undefined2 *******)0x22b2;
            FUN_28b3_1181();
            pbVar32 = local_30;
            if ((bool)uVar29) {
              if (((int)appppuStack_d40[uStack_b6e * 2] % 100 == 10) ||
                 ((int)appppuStack_d40[uStack_b6e * 2 + 1] % 100 == 10)) {
                pbStack_536 = (byte *)0x1;
                iStack_534 = 0;
              }
              if (((int)appppuStack_d40[uStack_b6e * 2] % 100 == 0x14) ||
                 ((int)appppuStack_d40[uStack_b6e * 2 + 1] % 100 == 0x14)) {
                uVar29 = (uStack_b6e & 0x1fff) == 0;
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x0002996b();
                FUN_28b3_0ee9();
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x0002996b();
                FUN_28b3_1181();
                if ((bool)uVar29) {
                  func_0x000297e6();
                  func_0x000297e6();
                  pppppppuVar26 = (undefined2 *******)0x22b2;
                  FUN_28b3_1181();
                  pbVar32 = local_30;
                  if ((bool)uVar29) goto LAB_3ab8_2241;
                }
                func_0x000297e6();
                func_0x00029b6d();
                func_0x000297e6();
                func_0x00029b6d();
                FUN_28b3_117c();
                func_0x00029d78();
                puStack_10 = (uint *)0x22b2;
                pppppppuStack_12 = (undefined2 *******)0xd05e;
                func_0x000299d1();
                puStack_10 = (uint *)0x22b2;
                pppppppuStack_12 = (undefined2 *******)0xd063;
                FUN_28b3_1582();
                func_0x00029834();
                func_0x0002996b();
                func_0x00029b9d();
                func_0x00029983();
                func_0x000297e6();
                func_0x00029b85();
                func_0x0002996b();
                func_0x00029983();
                func_0x000297e6();
                func_0x00029d78();
                puStack_10 = (uint *)0x22b2;
                pppppppuStack_12 = (undefined2 *******)0xd0c6;
                func_0x000299d1();
                puStack_10 = (uint *)0x22b2;
                pppppppuStack_12 = (undefined2 *******)0xd0cf;
                func_0x000297e6();
                puStack_10 = (uint *)0x22b2;
                pppppppuStack_12 = (undefined2 *******)0xd0d4;
                func_0x00029d78();
                ppppuStack_18 = (undefined2 ****)0x22b2;
                pppppppuStack_1a = (undefined2 *******)0xd0de;
                func_0x000299d1();
                ppppuStack_18 = (undefined2 ****)0x22b2;
                pppppppuStack_1a = (undefined2 *******)0xd0e3;
                func_0x0002a178();
                uVar29 = (undefined1 *)0xffef < &pppppuStack_16;
                func_0x00029834();
                func_0x00029b6d();
                func_0x00029983();
                pbStack_53e = (byte *)0x1;
                pppppppuStack_53c = (undefined2 *******)0x0;
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar29) {
                  pbStack_53e = (byte *)0xffff;
                  pppppppuStack_53c = (undefined2 *******)0xffff;
                }
              }
              pppppppuVar26 = (undefined2 *******)0x22b2;
              pbVar32 = local_30;
            }
          }
        }
LAB_3ab8_2241:
        uStack_b6e = uStack_b6e + 1;
      }
      if (((iStack_532 == 0) && (iStack_534 != 0 || pbStack_536 != (byte *)0x0)) &&
         (pppppppuStack_53c != (undefined2 *******)0x0 || pbStack_53e != (byte *)0x0)) {
        iStack_532 = 1;
        func_0x000297e6();
        func_0x00029ae7();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029ae7();
        pppppppuVar26 = (undefined2 *******)0x22b2;
        func_0x00029983();
        pbVar32 = local_30;
      }
      if (iStack_534 == 0 && pbStack_536 == (byte *)0x0) {
        pppppppuStack_53c = (undefined2 *******)0x0;
        pbStack_53e = (byte *)0x0;
        uStack_48c = *(undefined2 *)0xa76c;
        uStack_48a = *(undefined2 *)0xa76e;
        uStack_dd6 = *(undefined2 *)0xa760;
        uStack_dd4 = *(undefined2 *)0xa762;
        uStack_dd2 = *(undefined2 *)0xa760;
        uStack_dd0 = *(undefined2 *)0xa762;
      }
      if (unaff_DI % 10 == 0) {
        pppppppuStack_53c = (undefined2 *******)0x0;
        pbStack_53e = (byte *)0x0;
      }
      if (pppppppuStack_53c == (undefined2 *******)0x0 && pbStack_53e == (byte *)0x0) {
        uStack_dd2 = *(undefined2 *)0xa760;
        uStack_dd0 = *(undefined2 *)0xa762;
      }
      local_30 = pbVar32;
      if (unaff_DI == 10) {
        pppppppuStack_dde = (undefined2 *******)*(int *)0xa760;
        uStack_ddc = *(undefined2 *)0xa762;
        pppppppuStack_e7c = (undefined2 *******)*(int *)0xa760;
        iStack_534 = 0;
        pbStack_536 = (byte *)0x0;
        uStack_542 = (byte *)0x0;
        pppppppuStack_53c = (undefined2 *******)0x0;
        pbStack_53e = (byte *)0x0;
        pppppppuStack_e7a = (undefined2 *******)*(int *)0xa762;
        uStack_638 = (byte *)0x0;
        goto LAB_3ab8_33f1;
      }
LAB_3ab8_26dd:
      uStack_638._0_2_ = pbStack_53e;
      uStack_638._2_2_ = pppppppuStack_53c;
      if ((int)pppppppuStack_53c < 0) {
        uStack_638._0_2_ = (byte *)-(int)pbStack_53e;
        uStack_638._2_2_ =
             (undefined2 *******)-((int)pppppppuStack_53c + (uint)(pbStack_53e != (byte *)0x0));
      }
      uStack_bf0 = 1;
      uStack_542 = (byte *)CONCAT22(iStack_534,pbStack_536);
      if (iStack_534 == 0 && pbStack_536 == (byte *)0x0) {
        uStack_bf0 = 2;
        uStack_542 = (byte *)CONCAT22(iStack_534,pbStack_536);
      }
LAB_3ab8_271e:
      if (*(int *)0xc22 == 0) {
        pppppppuStack_c = (undefined2 *******)0x2;
        pppuStack_e = (undefined2 ***)0x12;
        puStack_10 = auStack_5b2;
        ppppppuStack_14 = (undefined2 ******)0xd2c2;
        pppppppuStack_12 = pppppppuVar26;
        FUN_1000_02b5();
        *(undefined2 *)0xc22 = 1;
        pppppppuVar26 = (undefined2 *******)0xdef;
      }
      pppuStack_e = (undefined2 ***)0xd2d9;
      pppppppuStack_c = pppppppuVar26;
      FUN_21f2_3454();
      if (uStack_bf0 == 1) {
        pppppppuStack_c = (undefined2 *******)0x22b2;
        pppuStack_e = (undefined2 ***)0xd2f3;
        FUN_21f2_2d26();
        pppppppuStack_c = (undefined2 *******)0x22b2;
        pppuStack_e = (undefined2 ***)0xd303;
        FUN_21f2_2d26();
      }
      uVar29 = uStack_bf0 < 2;
      if (uStack_bf0 == 2) {
        uVar29 = 0;
        if (uStack_638._2_2_ == (undefined2 *******)0x0 && (byte *)uStack_638 == (byte *)0x0) {
          pppppppuStack_c = (undefined2 *******)0x22b2;
          pppuStack_e = (undefined2 ***)0xd34d;
          FUN_21f2_3454();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          pppuStack_e = (undefined2 ***)0xd35d;
          FUN_21f2_2d26();
          *(undefined2 *)0xc20 = 1;
        }
        else {
          pppppppuStack_c = (undefined2 *******)0x22b2;
          pppuStack_e = (undefined2 ***)0xd32a;
          FUN_21f2_2d26();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          pppuStack_e = (undefined2 ***)0xd33a;
          FUN_21f2_2d26();
        }
      }
      pppppppuStack_c = (undefined2 *******)0x22b2;
      pppuStack_e = (undefined2 ***)0xd373;
      FUN_21f2_2d26();
      pppppppuStack_c = (undefined2 *******)0x22b2;
      pppuStack_e = (undefined2 ***)0xd384;
      FUN_21f2_2d26();
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029ae7();
      FUN_28b3_1181();
      if ((bool)uVar29) {
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029ae7();
        FUN_28b3_1181();
        if (!(bool)uVar29) goto LAB_3ab8_288c;
        func_0x000297e6();
        func_0x00029d78();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd3e0;
        func_0x000299d1();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd3e9;
        func_0x000297e6();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd3ee;
        func_0x00029d78();
        ppppuStack_18 = (undefined2 ****)0x22b2;
        pppppppuStack_1a = (undefined2 *******)0xd3f8;
        func_0x000299d1();
        ppppuStack_18 = (undefined2 ****)0x71ff;
        pppppppuStack_1a = appppppuStack_c04;
        pppppppuStack_1c = (undefined2 *******)0x22b2;
        FUN_21f2_3454();
      }
      else {
LAB_3ab8_288c:
        func_0x000297e6();
        func_0x00029d78();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd424;
        func_0x000299d1();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd42d;
        func_0x000297e6();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd432;
        func_0x00029d78();
        ppppuStack_18 = (undefined2 ****)0x22b2;
        pppppppuStack_1a = (undefined2 *******)0xd43c;
        func_0x000299d1();
        ppppuStack_18 = (undefined2 ****)0x720d;
        pppppppuStack_1a = appppppuStack_c04;
        pppppppuStack_1c = (undefined2 *******)0x22b2;
        FUN_21f2_3454();
      }
      pppppppuStack_c = (undefined2 *******)0x22b2;
      pppuStack_e = (undefined2 ***)0xd45c;
      FUN_21f2_2d26();
      pppppppuStack_c = (undefined2 *******)0x22b2;
      pppuStack_e = (undefined2 ***)0xd46c;
      FUN_21f2_2d26();
      pppppppuStack_c = (undefined2 *******)0x22b2;
      pppppppuVar26 = (undefined2 *******)0x1bb4;
      pppuStack_e = (undefined2 ***)0xd47c;
      FUN_1def_07a4();
      *(undefined2 *)0xc2c = 1;
      *(undefined2 *)0xc1a = 1;
      *(undefined2 *)0xce6 = 1;
      if ((*(char *)0x126 == '\0') || (uStack_bf0 != 2)) {
        if (*(char *)0x126 != '\0') {
          pppppppuStack_c = (undefined2 *******)0x1bb4;
          pppppppuVar26 = (undefined2 *******)0x22b2;
          pppuStack_e = (undefined2 ***)0xd522;
          FUN_21f2_2d26();
        }
        pppppppuStack_c = &pppppppuStack_dde;
        pppuStack_e = apppuStack_bd4;
        puStack_10 = (uint *)0x270f;
        ppppppuStack_14 = (undefined2 ******)0xd541;
        pppppppuStack_12 = pppppppuVar26;
        iVar19 = FUN_1def_0904();
      }
      else {
        pppppppuStack_24 = appppppuStack_dca;
        pppuStack_e = appuStack_488;
        puStack_10 = auStack_26e;
        pppppppuStack_12 = appppppuStack_b64;
        ppppppuStack_14 = apppppuStack_848;
        pppppuStack_16 = appppuStack_d40;
        ppppuStack_18 = ppppuStack_c34;
        pppppppuStack_1a = &pppppppuStack_e7c;
        pppppppuStack_1c = &pppppppuStack_dde;
        ppppuStack_20 = apppuStack_bd4;
        uStack_26 = uStack_e76;
        pppppppuStack_28 = pppppppuStack_e78;
        pppppppuStack_2a = pppppppuStack_53c;
        pbStack_2c = pbStack_53e;
        iStack_32 = 0x1bb4;
        uStack_34 = 0xd501;
        pppppppuStack_c = pppppppuStack_24;
        local_30 = uStack_542;
        iVar19 = FUN_28b3_2a62();
      }
      *(undefined2 *)0xc2c = 0;
      *(undefined2 *)0xc1a = 0;
      *(undefined2 *)0xc20 = 0;
      pppppppuVar26 = (undefined2 *******)0x885;
      func_0x0000c3ca();
      *(undefined2 *)0xce6 = 0;
      if ((*(int *)0x158 != 0) || (iVar19 == 0x14)) {
        *(undefined2 *)0xce6 = 0;
        *(undefined1 *)0xc13e = 0;
        goto LAB_2bb4_51c3;
      }
      if ((iVar19 == 0x6200) && (local_270 != 0)) {
        iStack_48e = iStack_272;
        goto LAB_3ab8_216d;
      }
      if ((*(char *)0xc13e == '\x01') && (*(int *)0xc18 == 1)) {
        func_0x000297e6();
        func_0x00029d78();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd5ca;
        func_0x000299d1();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd5d3;
        func_0x000297e6();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd5d8;
        func_0x00029d78();
        ppppuStack_18 = (undefined2 ****)0x22b2;
        pppppppuStack_1a = (undefined2 *******)0xd5e2;
        func_0x000299d1();
        ppppuStack_18 = (undefined2 ****)0x22b2;
        pppppppuVar26 = (undefined2 *******)0x18b3;
        pppppppuStack_1a = (undefined2 *******)0xd5e7;
        iStack_e8e = func_0x0001b204();
        if (iStack_e8e != 0) {
          local_648 = 0;
          local_856 = 0;
          local_538 = 0;
          local_646 = 0;
          local_54a = 0;
          local_e7e = 0;
          pppppppuStack_c = (undefined2 *******)0x18b3;
          pppuStack_e = (undefined2 ***)0xd629;
          func_0x000297e6();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          pppuStack_e = (undefined2 ***)0xd62e;
          func_0x00029d78();
          ppppppuStack_14 = (undefined2 ******)0x22b2;
          pppppuStack_16 = (undefined2 *****)0xd638;
          func_0x000299d1();
          ppppppuStack_14 = (undefined2 ******)0x22b2;
          pppppuStack_16 = (undefined2 *****)0xd641;
          func_0x000297e6();
          ppppppuStack_14 = (undefined2 ******)0x22b2;
          pppppuStack_16 = (undefined2 *****)0xd646;
          func_0x00029d78();
          pppppppuStack_1c = (undefined2 *******)0x22b2;
          func_0x000299d1();
          pppppppuStack_1c = (undefined2 *******)0x22b2;
          func_0x000297e6();
          pppppppuStack_1c = (undefined2 *******)0x22b2;
          func_0x00029d78();
          pppppppuStack_24 = (undefined2 *******)0x22b2;
          uStack_26 = 0xd668;
          func_0x000299d1();
          pppppppuStack_24 = (undefined2 *******)0x22b2;
          uStack_26 = 0xd671;
          func_0x000297e6();
          pppppppuStack_24 = (undefined2 *******)0x22b2;
          uStack_26 = 0xd676;
          func_0x00029d78();
          pbStack_2c = (byte *)0x22b2;
          local_30._2_2_ = (undefined2 *)0xd680;
          func_0x000299d1();
          pbStack_2c = abStack_e92;
          local_30._2_2_ = &uStack_e88;
          local_30._0_2_ = abStack_e86;
          iStack_32 = iStack_e8e;
          uStack_34 = 1;
          uStack_36 = 0x22b2;
          pppppppuVar26 = (undefined2 *******)0x2ab8;
          uStack_e90 = func_0x0002b2c8();
          *(undefined2 *)0xc18 = 0;
          goto LAB_3ab8_216d;
        }
        *(undefined2 *)0xc18 = 0;
        goto LAB_3ab8_271e;
      }
      if (*(int *)0xc18 != 0) {
        local_648 = 0;
        local_856 = 0;
        local_538 = 0;
        local_646 = 0;
        local_54a = 0;
        local_e7e = 0;
        if (*(int *)0xc18 == -100) {
          *(undefined2 *)0xce6 = 1;
          pcVar15 = (code *)swi(0x3f);
          (*pcVar15)();
          *(undefined2 *)0xce6 = 0;
        }
        func_0x000297e6();
        func_0x00029d78();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd704;
        func_0x000299d1();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd70d;
        func_0x000297e6();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xd712;
        func_0x00029d78();
        ppppuStack_18 = (undefined2 ****)0x22b2;
        pppppppuStack_1a = (undefined2 *******)0xd71c;
        func_0x000299d1();
        ppppuStack_18 = (undefined2 ****)0x22b2;
        pppppppuVar26 = (undefined2 *******)0x3bf;
        pppppppuStack_1a = (undefined2 *******)0xd721;
        func_0x0000507a();
        *(undefined2 *)0xc18 = 0;
        goto LAB_3ab8_216d;
      }
      if (iVar19 != -1) {
        if (iVar19 == 3) {
          iVar19 = 1;
          *(undefined1 *)0x15b = 2;
        }
        if (iVar19 == 1) {
          func_0x000297e6();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x0002996b();
          FUN_28b3_0ee9();
          if (*(char *)0x126 != '\0') {
            uVar29 = *(byte *)0x15b < 2;
            uVar30 = *(byte *)0x15b == 2;
            if ((bool)uVar30) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar29) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar29) {
                  func_0x000297e6();
                  func_0x00029af6();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029af6();
                  func_0x00029983();
                }
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar29) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (!(bool)uVar29) goto LAB_3ab8_2e4c;
                func_0x000297e6();
                func_0x00029af6();
                func_0x00029983();
              }
              else {
LAB_3ab8_2e4c:
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (!(bool)uVar29 && !(bool)uVar30) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar29) {
                    func_0x000297e6();
                    func_0x00029af6();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029af6();
                    func_0x00029983();
                    goto LAB_3ab8_2f07;
                  }
                  uVar29 = 0;
                }
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar29) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if (!(bool)uVar29 && !(bool)uVar30) {
                    func_0x000297e6();
                    func_0x00029af6();
                    func_0x00029983();
                  }
                }
              }
LAB_3ab8_2f07:
              pppppppuVar26 = (undefined2 *******)0x22b2;
              *(undefined2 *)0xecc = uStack_e9e;
              *(undefined2 *)0xece = uStack_e9c;
              *(undefined2 *)0xed0 = uStack_e9a;
              *(undefined2 *)0xed2 = uStack_e98;
              goto LAB_3ab8_271e;
            }
          }
          pppppppuStack_c = local_c2c;
          pppuStack_e = (undefined2 ***)0x2;
          puStack_10 = (uint *)0x2712;
          pppppppuStack_12 = (undefined2 *******)0x22b2;
          ppppppuStack_14 = (undefined2 ******)0xdac4;
          func_0x00001dd5();
          uVar29 = 0;
          uVar30 = *(int *)0x158 == 0;
          if (!(bool)uVar30) {
            *(undefined2 *)0xce6 = 0;
            goto LAB_2bb4_51c3;
          }
          func_0x00029834();
          func_0x000297e6();
          func_0x00029ae7();
          func_0x0002996b();
          func_0x00029d78();
          FUN_28b3_1181();
          if (!(bool)uVar29) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar29 || (bool)uVar30) {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029ae7();
              func_0x0002996b();
              func_0x00029d78();
              FUN_28b3_1181();
              if (!(bool)uVar29) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar29 || (bool)uVar30) {
                  *(undefined2 *)0xecc = uStack_e9e;
                  *(undefined2 *)0xece = uStack_e9c;
                  *(undefined2 *)0xed0 = uStack_e9a;
                  *(undefined2 *)0xed2 = uStack_e98;
                }
              }
            }
          }
          pppppppuVar26 = (undefined2 *******)0x22b2;
          goto LAB_3ab8_271e;
        }
        if (iVar19 == 2) goto LAB_3ab8_213f;
        if (pppppppuStack_854 == (undefined2 *******)0x0) goto LAB_3ab8_271e;
        uStack_84e._2_2_ = 0;
        uStack_84e._0_2_ = (byte *)0x0;
        if (((uStack_bf0 == 1) && (uStack_542 != (byte *)0x0)) ||
           ((uStack_bf0 == 2 &&
            (uStack_638._2_2_ != (undefined2 *******)0x0 || (byte *)uStack_638 != (byte *)0x0)))) {
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xdbf7;
          func_0x000299d1();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xdc00;
          func_0x000297e6();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xdc05;
          func_0x00029d78();
          ppppuStack_18 = (undefined2 ****)0x22b2;
          pppppppuStack_1a = (undefined2 *******)0xdc0f;
          func_0x000299d1();
          ppppuStack_18 = (undefined2 ****)0x22b2;
          pppppppuVar26 = (undefined2 *******)0x11f2;
          pppppppuStack_1a = (undefined2 *******)0xdc14;
          uStack_84e = (byte *)FUN_13bf_39a0();
          if (uStack_84e == (byte *)0x0) goto LAB_3ab8_271e;
          if ((long)uStack_84e < 0) {
            pppppppuStack_c = (undefined2 *******)0xdc3c;
            func_0x00012276();
            *(undefined2 *)0xc22 = 1;
            pppppppuStack_c = (undefined2 *******)0x11f2;
            pppuStack_e = (undefined2 ***)0xdc50;
            FUN_1000_0599();
            pppppppuVar26 = (undefined2 *******)0x11f2;
            pppppppuStack_c = (undefined2 *******)0xdc5b;
            func_0x00012276();
            goto LAB_3ab8_271e;
          }
          pppppppuStack_c = (undefined2 *******)0x11f2;
          pppuStack_e = (undefined2 ***)0xdc6c;
          puVar31 = (undefined2 *)func_0x0000013f();
          puVar18 = (undefined2 *)puVar31;
          puVar17 = (undefined2 *)&stack0xffde;
          for (iVar19 = 0xb; iVar19 != 0; iVar19 = iVar19 + -1) {
            puVar6 = puVar17;
            puVar17 = puVar17 + 1;
            puVar5 = puVar18;
            puVar18 = puVar18 + 1;
            *puVar6 = *puVar5;
          }
          pppppppuVar26 = (undefined2 *******)0x885;
          pppppppuStack_c = (undefined2 *******)0xdc89;
          iVar19 = func_0x00008854();
          uVar29 = iVar19 == 0;
          if (!(bool)uVar29) goto LAB_3ab8_271e;
          func_0x000297e6();
          func_0x000297e6();
          pppppppuVar33 = (undefined2 *******)0xdcaa;
          FUN_28b3_1181();
          if ((bool)uVar29) {
            func_0x000297e6();
            func_0x000297e6();
            pppppppuVar33 = (undefined2 *******)0xdcc4;
            FUN_28b3_1181();
            if ((bool)uVar29) {
              pppppppuStack_c = (undefined2 *******)0xdcd2;
              func_0x00012276();
              *(undefined2 *)0xc22 = 1;
              pppppppuStack_c = (undefined2 *******)0x11f2;
              pppuStack_e = (undefined2 ***)0xdce6;
              FUN_1000_0599();
              pppppppuStack_c = (undefined2 *******)0xdef;
              pppppppuVar26 = (undefined2 *******)0x11f2;
              pppuStack_e = (undefined2 ***)0xdcf5;
              func_0x00012276();
              goto LAB_3ab8_271e;
            }
          }
          pppppppuVar26 = (undefined2 *******)0x22b2;
          if ((((uint)pppuStack_e & 0x40) != 0) || (((uint)pppuStack_e & 0x80) != 0)) {
            pppppppuStack_c = (undefined2 *******)0xdd15;
            func_0x00012276();
            *(undefined2 *)0xc22 = 1;
            pppppppuStack_c = (undefined2 *******)0x11f2;
            pppuStack_e = (undefined2 ***)0xdd29;
            FUN_1000_0599();
            pppppppuVar26 = (undefined2 *******)0x11f2;
            pppppppuStack_c = (undefined2 *******)0xdd34;
            func_0x00012276();
            goto LAB_3ab8_271e;
          }
        }
        else {
          pppppppuVar33 = &pppppppuStack_dde;
          pppppppuStack_c = pppppppuStack_854;
          pppuStack_e = (undefined2 ***)0x885;
          pppppppuVar26 = (undefined2 *******)0x11f2;
          puStack_10 = (uint *)0xdd4e;
          iVar19 = func_0x00015409();
          if (iVar19 == 0) goto LAB_3ab8_271e;
          local_dce = pppppppuStack_dde;
          local_dcc = uStack_ddc;
          local_e74 = pppppppuStack_e7c;
          local_e72 = pppppppuStack_e7a;
        }
        if (uStack_bf0 == 1) {
          uStack_542 = uStack_84e;
          pppppppuVar33 = &pppppppuStack_288;
          puVar17 = (undefined2 *)&stack0xffde;
          for (iVar19 = 0xb; iVar19 != 0; iVar19 = iVar19 + -1) {
            pppppppuVar4 = pppppppuVar33;
            pppppppuVar33 = pppppppuVar33 + 1;
            puVar31 = puVar17;
            puVar17 = puVar17 + 1;
            *pppppppuVar4 = (undefined2 ******)*puVar31;
          }
          pppppppuStack_e78 = pppppppuStack_dde;
          uStack_e76 = uStack_ddc;
          pppppppuStack_c = pppppppuStack_e7c;
          pppppppuVar33 = pppppppuStack_e7a;
        }
        if (uStack_bf0 == 2) {
          uStack_638 = (byte *)CONCAT22(uStack_638._2_2_,(byte *)uStack_638);
          if (uStack_638._2_2_ != (undefined2 *******)0x0 || (byte *)uStack_638 != (byte *)0x0) {
            uStack_638 = uStack_84e;
            piVar24 = &iStack_4c6;
            piVar20 = (int *)&stack0xffde;
            for (iVar19 = 0xb; iVar19 != 0; iVar19 = iVar19 + -1) {
              piVar8 = piVar24;
              piVar24 = piVar24 + 1;
              piVar7 = piVar20;
              piVar20 = piVar20 + 1;
              *piVar8 = *piVar7;
            }
            local_dce = pppppppuStack_dde;
            local_dcc = uStack_ddc;
            local_e74 = pppppppuStack_e7c;
            local_e72 = pppppppuStack_e7a;
          }
          goto LAB_3ab8_33f1;
        }
        if (unaff_DI % 10 != 0) {
          uStack_bf0 = 2;
          goto LAB_3ab8_271e;
        }
        pppppppuStack_dde = pppppppuStack_e78;
        uStack_ddc = uStack_e76;
        pppppppuStack_e7c = pppppppuStack_c;
        uVar29 = 0;
        uVar30 = uStack_542 == (byte *)0x0;
        pppppppuStack_e7a = pppppppuVar33;
        if (uStack_542 != (byte *)0x0) {
          func_0x000297e6();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x0002996b();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x0002996b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x000297e6();
          func_0x00029bb5();
          FUN_28b3_1181();
          if (!(bool)uVar29 && !(bool)uVar30) {
            pppppppuStack_dde = pppppppuStack_280;
            uStack_ddc = uStack_27e;
            pppppppuStack_e7c = pppppppuStack_27c;
            pppppppuStack_e7a = pppppppuStack_27a;
            uStack_638 = (byte *)CONCAT22(uStack_638._2_2_,(byte *)uStack_638);
          }
        }
LAB_3ab8_33f1:
        func_0x0000c3ca();
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        pppppppuStack_2a = pppppppuStack_e7c;
        pppppppuStack_28 = pppppppuStack_e7a;
        pppppppuStack_dda = pppppppuStack_e7c;
        pppppppuStack_dd8 = pppppppuStack_e7a;
        pppppppuVar26 = (undefined2 *******)0x885;
        pppppppuStack_c = (undefined2 *******)0xdfb7;
        func_0x0000daa6();
        local_648 = 0;
        local_856 = 0;
        local_538 = 0;
        local_646 = 0;
        local_54a = 0;
        local_e7e = 0;
        uStack_5b4 = 0;
        if (((long)uStack_542 < 1) || ((long)uStack_638 < 1)) {
LAB_3ab8_34ef:
          if (0 < (long)uStack_542) {
            local_648 = 1;
            pppuStack_e = (undefined2 ***)0xe09b;
            pppppppuStack_c = pppppppuVar26;
            func_0x00018779();
            pppppppuVar26 = (undefined2 *******)0x11f2;
          }
          pbVar32 = uStack_542;
          if (0 < (long)uStack_638) {
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe0cd;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe0d5;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe0da;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe0e4;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe0e9;
            pbVar32 = (byte *)FUN_13bf_39a0();
            uStack_84e = pbVar32;
            if (pbVar32 == (byte *)0x0) {
              pppppppuStack_c = (undefined2 *******)0xe104;
              func_0x00012276();
              *(undefined2 *)0xc22 = 1;
              pppppppuStack_c = (undefined2 *******)0x11f2;
              pppuStack_e = (undefined2 ***)0xe118;
              FUN_1000_0599();
              pppppppuVar26 = (undefined2 *******)0x11f2;
              pppppppuStack_c = (undefined2 *******)0xe123;
              func_0x00012276();
              goto LAB_3ab8_26dd;
            }
            pppppppuStack_c = (undefined2 *******)0x11f2;
            pppuStack_e = (undefined2 ***)0xe134;
            func_0x0000013f();
            pppppppuVar26 = (undefined2 *******)0x885;
            pppppppuStack_c = (undefined2 *******)0xe146;
            iVar19 = func_0x00008854();
            if (iVar19 != 0) goto LAB_3ab8_26dd;
            local_856 = 1;
            pppppppuStack_c = (undefined2 *******)0x885;
            pppppppuVar26 = (undefined2 *******)0x11f2;
            pppuStack_e = (undefined2 ***)0xe165;
            func_0x00018779();
            pbVar32 = uStack_542;
          }
          uStack_542._2_2_ = (int)((ulong)pbVar32 >> 0x10);
          uStack_542._0_2_ = (byte *)pbVar32;
          uVar29 = uStack_542._2_2_ == 0;
          uStack_542 = pbVar32;
          if (((long)pbVar32 < 0) ||
             (((long)pbVar32 < 0x10000 && (uVar29 = false, (byte *)uStack_542 == (byte *)0x0)))) {
            pppppppuStack_c = (undefined2 *******)*(int *)0xa75a;
            pppuStack_e = (undefined2 ***)*(int *)0xa758;
            puStack_10 = (uint *)*(int *)0xa77a;
            pppppppuStack_12 = (undefined2 *******)*(int *)0xa778;
            ppppppuStack_14 = (undefined2 ******)*(int *)0xa776;
            pppppuStack_16 = (undefined2 *****)*(int *)0xa774;
            ppppuStack_18 = (undefined2 ****)*(int *)0xa75e;
            pppppppuStack_1a = (undefined2 *******)*(int *)0xa75c;
            pppppppuStack_1c = (undefined2 *******)*(int *)0xa75a;
            ppppuStack_20 = (undefined2 ****)*(int *)0xa75e;
            pppppppuStack_24 = (undefined2 *******)*(int *)0xa75a;
            uStack_26 = *(undefined2 *)0xa758;
            pppppppuStack_2a = (undefined2 *******)0xe607;
            pppppppuStack_28 = pppppppuVar26;
            FUN_1def_043a();
            *(undefined2 *)0xb30c = uStack_d48;
            *(undefined2 *)0xb30e = uStack_d46;
            *(int *)0xb37e = (int)pppppppuStack_dda;
            *(int *)0xb380 = (int)pppppppuStack_dd8;
            uStack_d44 = *(undefined2 *)0xa760;
            uStack_d42 = *(undefined2 *)0xa762;
          }
          else {
            uVar30 = 0;
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x0002996b();
            FUN_28b3_1181();
            if ((bool)uVar30) {
LAB_3ab8_3689:
              pppppppuVar16 = pppppppuStack_282;
              pppppppuVar33 = pppppppuStack_284;
              uVar27 = uStack_286;
              pppppppuVar26 = pppppppuStack_288;
              pppppppuStack_288 = pppppppuStack_280;
              uStack_286 = uStack_27e;
              pppppppuStack_280 = pppppppuVar26;
              uStack_27e = uVar27;
              pppppppuStack_644 = pppppppuStack_284;
              pppppppuStack_642 = pppppppuStack_282;
              pppppppuStack_284 = pppppppuStack_27c;
              pppppppuStack_282 = pppppppuStack_27a;
              pppppppuStack_27c = pppppppuVar33;
              pppppppuStack_27a = pppppppuVar16;
            }
            else {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar29) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar30) goto LAB_3ab8_3689;
              }
            }
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe281;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe28a;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe28f;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe299;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe2a2;
            func_0x000297e6();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe2a7;
            func_0x00029d78();
            ppppuStack_20 = (undefined2 ****)0x22b2;
            func_0x000299d1();
            ppppuStack_20 = (undefined2 ****)0x22b2;
            func_0x000297e6();
            ppppuStack_20 = (undefined2 ****)0x22b2;
            func_0x00029d78();
            pppppppuStack_28 = (undefined2 *******)0x22b2;
            pppppppuStack_2a = (undefined2 *******)0xe2c9;
            func_0x000299d1();
            pppppppuStack_28 = (undefined2 *******)0x22b2;
            pppppppuStack_2a = (undefined2 *******)0xe2ce;
            FUN_1def_043a();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe2e9;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe2f2;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe2f7;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe301;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x1;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe30a;
            FUN_1def_05d1();
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe32d;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe336;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe33b;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe345;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x1;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe34e;
            FUN_1def_05d1();
            uVar29 = (undefined1 *)0xffed < &ppppuStack_18;
            uVar30 = &stack0x0000 == (undefined1 *)0x6;
            func_0x000297e6();
            FUN_28b3_1181();
            pppppppuVar16 = pppppppuStack_282;
            pppppppuVar33 = pppppppuStack_284;
            uVar27 = uStack_286;
            pppppppuVar26 = pppppppuStack_288;
            if (!(bool)uVar29 && !(bool)uVar30) {
              pppppppuStack_288 = pppppppuStack_280;
              uStack_286 = uStack_27e;
              pppppppuStack_280 = pppppppuVar26;
              uStack_27e = uVar27;
              pppppppuStack_644 = pppppppuStack_284;
              pppppppuStack_642 = pppppppuStack_282;
              pppppppuStack_284 = pppppppuStack_27c;
              pppppppuStack_282 = pppppppuStack_27a;
              pppppppuStack_27c = pppppppuVar33;
              pppppppuStack_27a = pppppppuVar16;
            }
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe3dc;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe3e5;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe3ea;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe3f4;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe3fd;
            func_0x000297e6();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe402;
            func_0x00029d78();
            ppppuStack_20 = (undefined2 ****)0x22b2;
            func_0x000299d1();
            ppppuStack_20 = (undefined2 ****)0x22b2;
            func_0x000297e6();
            ppppuStack_20 = (undefined2 ****)0x22b2;
            func_0x00029d78();
            pppppppuStack_28 = (undefined2 *******)0x22b2;
            pppppppuStack_2a = (undefined2 *******)0xe424;
            func_0x000299d1();
            pppppppuStack_28 = (undefined2 *******)0x22b2;
            pppppppuStack_2a = (undefined2 *******)0xe429;
            FUN_1def_043a();
            pppppppuStack_c = (undefined2 *******)*(undefined2 *)0xa75a;
            pppuStack_e = (undefined2 ***)*(undefined2 *)0xa758;
            puStack_10 = (uint *)0x1bb4;
            pppppppuStack_12 = (undefined2 *******)0xe445;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe44a;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe454;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe45d;
            func_0x000297e6();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe462;
            func_0x00029d78();
            ppppuStack_20 = (undefined2 ****)0x22b2;
            func_0x000299d1();
            ppppuStack_20 = (undefined2 ****)0x1;
            pppppppuStack_24 = (undefined2 *******)0xe475;
            FUN_1def_05d1();
            puStack_10 = (uint *)0x1bb4;
            pppppppuStack_12 = (undefined2 *******)0xe481;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe48a;
            func_0x0002996b();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe48f;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe499;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x0;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe4a2;
            puVar17 = (undefined2 *)FUN_1def_05d1();
            uStack_d48 = *puVar17;
            uStack_d46 = puVar17[1];
            pppppppuStack_c = (undefined2 *******)*(int *)0xa75a;
            pppuStack_e = (undefined2 ***)*(int *)0xa758;
            puStack_10 = (uint *)0x1bb4;
            pppppppuStack_12 = (undefined2 *******)0xe4cd;
            func_0x000297e6();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe4d7;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x0;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe4e0;
            piVar20 = (int *)func_0x0001e558();
            pppppppuStack_dda = (undefined2 *******)*piVar20;
            pppppppuStack_dd8 = (undefined2 *******)piVar20[1];
            *(undefined2 *)0xb30c = uStack_d48;
            *(undefined2 *)0xb30e = uStack_d46;
            *(int *)0xb37e = (int)pppppppuStack_dda;
            *(int *)0xb380 = (int)pppppppuStack_dd8;
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe528;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe531;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe536;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe540;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe545;
            func_0x0002a178();
            func_0x00029834();
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe57b;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe584;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe589;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe593;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x1;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe59c;
            func_0x0001e558();
            func_0x000297e6();
            func_0x0002996b();
            func_0x00029ae7();
            func_0x00029983();
          }
          uStack_c38 = uStack_dd2;
          uStack_c36 = uStack_dd0;
          if (0 < (long)uStack_638) {
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe678;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe681;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe686;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe690;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x1;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe699;
            func_0x0001e558();
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe6bd;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe6c6;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe6cb;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe6d5;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x1;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe6de;
            func_0x0001e558();
            uVar29 = (undefined1 *)0xffed < &ppppuStack_18;
            func_0x000297e6();
            FUN_28b3_1181();
            pppppppuVar33 = pppppppuStack_4c0;
            pppppppuVar26 = pppppppuStack_4c2;
            uVar27 = uStack_4c4;
            iVar19 = iStack_4c6;
            if ((bool)uVar29) {
              iStack_4c6 = iStack_4be;
              uStack_4c4 = uStack_4bc;
              iStack_4be = iVar19;
              uStack_4bc = uVar27;
              pppppppuStack_644 = pppppppuStack_4c2;
              pppppppuStack_642 = pppppppuStack_4c0;
              pppppppuStack_4c2 = pppppppuStack_4ba;
              pppppppuStack_4c0 = pppppppuStack_4b8;
              pppppppuStack_4ba = pppppppuVar26;
              pppppppuStack_4b8 = pppppppuVar33;
            }
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe774;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe77c;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe781;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe78b;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x1;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe794;
            func_0x0001e558();
            uVar29 = (undefined1 *)0xffed < &ppppuStack_18;
            func_0x000297e6();
            FUN_28b3_1181();
            pppppppuVar33 = pppppppuStack_4c0;
            pppppppuVar26 = pppppppuStack_4c2;
            uVar27 = uStack_4c4;
            iVar19 = iStack_4c6;
            if ((bool)uVar29) {
              iStack_4c6 = iStack_4be;
              uStack_4c4 = uStack_4bc;
              iStack_4be = iVar19;
              uStack_4bc = uVar27;
              pppppppuStack_644 = pppppppuStack_4c2;
              pppppppuStack_642 = pppppppuStack_4c0;
              pppppppuStack_4c2 = pppppppuStack_4ba;
              pppppppuStack_4c0 = pppppppuStack_4b8;
              pppppppuStack_4ba = pppppppuVar26;
              pppppppuStack_4b8 = pppppppuVar33;
            }
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe81d;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe826;
            func_0x000297e6();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe830;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x1;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe839;
            puVar17 = (undefined2 *)FUN_1def_05d1();
            uStack_e9e = *puVar17;
            uStack_e9c = puVar17[1];
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe85e;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe867;
            func_0x000297e6();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe871;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x1;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe87a;
            func_0x0001e558();
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe89f;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe8a8;
            func_0x000297e6();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe8b2;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x1;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe8bb;
            puVar17 = (undefined2 *)FUN_1def_05d1();
            uStack_e9a = *puVar17;
            uStack_e98 = puVar17[1];
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x0002996b();
            FUN_28b3_0ee9();
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe903;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe90c;
            func_0x000297e6();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xe916;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x1;
            pppppppuStack_1a = (undefined2 *******)0x22b2;
            pppppppuStack_1c = (undefined2 *******)0xe91f;
            func_0x0001e558();
            func_0x000297e6();
            func_0x0002996b();
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
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe990;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xe995;
            FUN_28b3_1582();
            uVar29 = &stack0x0000 == (undefined1 *)0x6;
            func_0x00029834();
            func_0x0002996b();
            pppppppuVar26 = (undefined2 *******)0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar29) goto LAB_3ab8_26dd;
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b85();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xea04;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xea0d;
            func_0x000297e6();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xea12;
            func_0x00029d78();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xea1c;
            func_0x000299d1();
            ppppuStack_18 = (undefined2 ****)0x22b2;
            pppppppuStack_1a = (undefined2 *******)0xea21;
            func_0x0002a178();
            func_0x00029834();
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029d78();
            func_0x00029c2c();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029d78();
            func_0x00029c2c();
            FUN_28b3_117c();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_117c();
            func_0x00029b85();
            func_0x0002996b();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xeaca;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xeacf;
            func_0x0002a11e();
            func_0x00029834();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xeafc;
            func_0x000299d1();
            puStack_10 = (uint *)0x22b2;
            pppppppuStack_12 = (undefined2 *******)0xeb01;
            func_0x0002a10c();
            func_0x00029834();
            func_0x00029983();
          }
          local_546 = *(undefined2 *)0xa76c;
          local_544 = *(undefined2 *)0xa76e;
          uStack_e70 = *(undefined2 *)0xa76c;
          uStack_e6e = *(undefined2 *)0xa76e;
          uStack_53a = 0;
          uStack_4c8 = 0;
          local_c32 = 0;
          uStack_be4 = 0;
          uStack_b6e = 0;
          goto LAB_3ab8_3fd3;
        }
        ppppuVar25 = &ppppuStack_20;
        piVar20 = &iStack_4c6;
        for (iVar19 = 0xb; iVar19 != 0; iVar19 = iVar19 + -1) {
          piVar8 = (int *)ppppuVar25;
          ppppuVar25 = ppppuVar25 + 1;
          piVar7 = piVar20;
          piVar20 = piVar20 + 1;
          *piVar8 = *piVar7;
        }
        puVar17 = &uStack_36;
        pppppppuVar26 = &pppppppuStack_288;
        for (iVar19 = 0xb; iVar19 != 0; iVar19 = iVar19 + -1) {
          puVar31 = puVar17;
          puVar17 = puVar17 + 1;
          pppppppuVar4 = pppppppuVar26;
          pppppppuVar26 = pppppppuVar26 + 1;
          *puVar31 = *pppppppuVar4;
        }
        pppppppuVar26 = (undefined2 *******)0x1bb4;
        uStack_3a = 0xe038;
        iVar19 = FUN_1def_1921();
        if (iVar19 != 0) goto LAB_3ab8_34ef;
        pppppppuStack_c = (undefined2 *******)0xe04c;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        pppppppuStack_c = (undefined2 *******)0x11f2;
        pppuStack_e = (undefined2 ***)0xe060;
        FUN_1000_0599();
        pppppppuVar26 = (undefined2 *******)0x11f2;
        pppppppuStack_c = (undefined2 *******)0xe06b;
        func_0x00012276();
        goto LAB_3ab8_26dd;
      }
      if ((uStack_bf0 != 1) &&
         ((uStack_bf0 != 2 || (iStack_534 != 0 || pbStack_536 != (byte *)0x0)))) {
        uStack_bf0 = 1;
        goto LAB_3ab8_271e;
      }
      if (((((local_648 == 0) && (local_856 == 0)) && (local_538 == 0)) &&
          ((local_646 == 0 && (local_54a == 0)))) && (local_e7e == 0)) goto LAB_3ab8_213f;
      pppppppuStack_c = (undefined2 *******)0xd79f;
      func_0x0000daa6();
      uVar27 = 0x885;
      for (; 0 < local_538; local_538 = local_538 + -1) {
        uStack_de2 = *(undefined2 *)0x148;
        uStack_de0 = *(undefined2 *)0x14a;
        pppuStack_e = (undefined2 ***)0xd7c0;
        pppppppuStack_c = (undefined2 *******)uVar27;
        func_0x00018779();
        uVar27 = 0x11f2;
      }
      for (; 0 < local_646; local_646 = local_646 + -1) {
        uStack_de2 = *(undefined2 *)0x14c;
        uStack_de0 = *(undefined2 *)0x14e;
        pppuStack_e = (undefined2 ***)0xd7e9;
        pppppppuStack_c = (undefined2 *******)uVar27;
        FUN_13bf_0327();
        uVar27 = 0x11f2;
      }
      for (; 0 < local_54a; local_54a = local_54a + -1) {
        uStack_bf0 = *(uint *)0x152;
        pppppppuStack_c = (undefined2 *******)0xd809;
        FUN_1def_186d();
      }
      for (; 0 < local_e7e; local_e7e = local_e7e + -1) {
        uStack_bf0 = *(uint *)0x150;
        pppppppuStack_c = (undefined2 *******)0xd828;
        func_0x000190c7();
      }
      if (local_648 != 0) {
        pppppppuVar33 = &pppppppuStack_1c;
        pppppppuVar26 = &pppppppuStack_288;
        for (iVar19 = 0xb; iVar19 != 0; iVar19 = iVar19 + -1) {
          puVar31 = pppppppuVar33;
          pppppppuVar33 = pppppppuVar33 + 1;
          pppppppuVar4 = pppppppuVar26;
          pppppppuVar26 = pppppppuVar26 + 1;
          *puVar31 = *pppppppuVar4;
        }
        ppppuStack_20 = (undefined2 ****)0xd84f;
        FUN_17a6_0cba();
      }
      local_648 = 0;
      if (local_856 != 0) {
        pppppppuVar26 = &pppppppuStack_1c;
        piVar20 = &iStack_4c6;
        for (iVar19 = 0xb; iVar19 != 0; iVar19 = iVar19 + -1) {
          piVar8 = (int *)pppppppuVar26;
          pppppppuVar26 = pppppppuVar26 + 1;
          piVar7 = piVar20;
          piVar20 = piVar20 + 1;
          *piVar8 = *piVar7;
        }
        ppppuStack_20 = (undefined2 ****)0xd877;
        FUN_17a6_0cba();
      }
      local_856 = 0;
      func_0x0000abfa();
      pppppppuVar26 = (undefined2 *******)0x885;
      pppppppuStack_c = (undefined2 *******)0xd88e;
      func_0x0000b1d8();
      if (local_270 != 0) {
        iStack_48e = local_270;
      }
      goto LAB_3ab8_216d;
    }
    goto LAB_3ab8_213f;
  }
LAB_2bb4_51c3:
  while( true ) {
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    puStack_10 = (uint *)0x32b2;
    pppppppuStack_12 = (undefined2 *******)0xd17;
    FUN_32b2_6eb1();
    puStack_10 = (uint *)0x32b2;
    pppppppuStack_12 = (undefined2 *******)0xd20;
    FUN_32b2_6cc6();
    puStack_10 = (uint *)0x32b2;
    pppppppuStack_12 = (undefined2 *******)0xd25;
    FUN_32b2_7258();
    ppppuStack_18 = (undefined2 ****)0x32b2;
    pppppppuStack_1a = (undefined2 *******)0xd2f;
    FUN_32b2_6eb1();
    ppppuStack_18 = ppppuStack_d8;
    pppppppuStack_1a = (undefined2 *******)uStack_da;
    pppppppuStack_1c = (undefined2 *******)ppppppuStack_dc;
    ppppuStack_20 = ppppuStack_bc;
    pppppppuStack_24 = (undefined2 *******)uStack_c0;
    uStack_26 = uStack_c2;
    pppppppuStack_28 = (undefined2 *******)0x32b2;
    pppppppuStack_2a = (undefined2 *******)0xd53;
    iVar19 = FUN_3ab8_4fbd();
    if (iVar19 == 0) {
      return 0;
    }
    FUN_32b2_6d14();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    pppppppuStack_c = (undefined2 *******)0xd8a;
    FUN_32b2_6cc6();
    pppppppuStack_c = (undefined2 *******)0xd8f;
    FUN_32b2_7258();
    pppppppuStack_12 = (undefined2 *******)0x32b2;
    ppppppuStack_14 = (undefined2 ******)0xd99;
    FUN_32b2_6eb1();
    pppppppuStack_12 = (undefined2 *******)0x32b2;
    ppppppuStack_14 = (undefined2 ******)0xda1;
    FUN_32b2_6cc6();
    pppppppuStack_12 = (undefined2 *******)0x32b2;
    ppppppuStack_14 = (undefined2 ******)0xda6;
    FUN_32b2_7258();
    pppppppuStack_1a = (undefined2 *******)0x32b2;
    pppppppuStack_1c = (undefined2 *******)0xdb0;
    FUN_32b2_6eb1();
    pppppppuStack_1a = (undefined2 *******)0x32b2;
    pppppppuStack_1c = (undefined2 *******)0xdb9;
    FUN_32b2_6d14();
    pppppppuStack_24 = (undefined2 *******)0xdc3;
    FUN_32b2_6eb1();
    pppppppuStack_24 = (undefined2 *******)0xdcc;
    FUN_32b2_6d14();
    pppppppuStack_24 = (undefined2 *******)0xdd5;
    FUN_32b2_6e99();
    pppppppuStack_2a = (undefined2 *******)0x32b2;
    pbStack_2c = (byte *)0xddf;
    FUN_32b2_6eb1();
    pppppppuStack_2a = (undefined2 *******)0x32b2;
    pbStack_2c = (byte *)0xde8;
    FUN_32b2_6cc6();
    pppppppuStack_2a = (undefined2 *******)0x32b2;
    pbStack_2c = (byte *)0xded;
    FUN_32b2_7258();
    iStack_32 = 0x32b2;
    uStack_34 = 0xdf7;
    FUN_32b2_6eb1();
    iStack_32 = 0x32b2;
    uStack_34 = 0xe00;
    FUN_32b2_6cc6();
    iStack_32 = 0x32b2;
    uStack_34 = 0xe05;
    FUN_32b2_7258();
    uStack_3a = 0x32b2;
    uStack_3c = 0xe0f;
    FUN_32b2_6eb1();
    uStack_3a = 1;
    uStack_3c = 0x32b2;
    uStack_3e = 0xe17;
    func_0x0003fc09();
    uVar29 = (undefined1 *)0xffc9 < &uStack_3c;
    uStack_e6 = *(undefined2 *)0x9380;
    uStack_e4 = *(undefined2 *)0x9382;
    FUN_32b2_6cc6();
    FUN_32b2_704d();
    FUN_32b2_7258();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_7173();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_6e99();
    FUN_32b2_718c();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_7182();
    FUN_32b2_710c();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6d14();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_70f4();
    FUN_32b2_6e99();
    FUN_32b2_7191();
    if (!(bool)uVar29) {
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_7191();
      if ((bool)uVar29) {
        uStack_96 = *(undefined2 *)0x93c0;
        uStack_94 = *(undefined2 *)0x93c2;
        uStack_92 = *(undefined2 *)0x93c4;
        uStack_90 = *(undefined2 *)0x93c6;
      }
      pppppppuStack_c = (undefined2 *******)uStack_94;
      pppuStack_e = (undefined2 ***)uStack_96;
      puStack_10 = (uint *)0x32b2;
      pppppppuStack_12 = (undefined2 *******)0xf53;
      puVar17 = (undefined2 *)FUN_32b2_7592();
      uStack_d6 = *puVar17;
      uStack_d4 = puVar17[1];
      uStack_d2 = puVar17[2];
      uStack_d0 = puVar17[3];
      pppppppuStack_c = (undefined2 *******)&uStack_aa;
      pppuStack_e = (undefined2 ***)0x32b2;
      puStack_10 = (uint *)0xf75;
      FUN_32b2_6cc6();
      pppuStack_e = (undefined2 ***)0x32b2;
      puStack_10 = (uint *)0xf7a;
      FUN_32b2_7258();
      pppppuStack_16 = (undefined2 *****)0x32b2;
      ppppuStack_18 = (undefined2 ****)0xf84;
      FUN_32b2_6eb1();
      pppppuStack_16 = (undefined2 *****)0x32b2;
      ppppuStack_18 = (undefined2 ****)0xf8c;
      FUN_32b2_6cc6();
      pppppuStack_16 = (undefined2 *****)0x32b2;
      ppppuStack_18 = (undefined2 ****)0xf91;
      FUN_32b2_7258();
      ppppuStack_20 = (undefined2 ****)0xf9b;
      FUN_32b2_6eb1();
      ppppuStack_20 = (undefined2 ****)pppuStack_ae;
      pppppppuStack_24 = (undefined2 *******)uStack_b2;
      uStack_26 = uStack_98;
      pppppppuStack_28 = (undefined2 *******)uStack_9a;
      pppppppuStack_2a = (undefined2 *******)uStack_9c;
      pbStack_2c = (byte *)uStack_9e;
      local_30._2_2_ = (undefined2 *)uStack_d0;
      local_30._0_2_ = (byte *)uStack_d2;
      iStack_32 = uStack_d4;
      uStack_34 = uStack_d6;
      uStack_36 = uStack_b4;
      uStack_3a = uStack_b8;
      uStack_3c = uStack_ba;
      uStack_3e = 0;
      uStack_40 = 0x32b2;
      uStack_42 = 0xfe2;
      func_0x0003fc09();
      uVar29 = (undefined1 *)0xffc9 < &uStack_3e;
      *param_6 = uStack_aa;
      param_6[1] = uStack_a8;
      *param_7 = uStack_ce;
      param_7[1] = uStack_cc;
      *param_8 = uStack_aa;
      param_8[1] = uStack_a8;
      *param_9 = uStack_ce;
      param_9[1] = uStack_cc;
      iStack_6e = iStack_6e + 1;
      pppppppuStack_c = (undefined2 *******)0x1031;
      FUN_32b2_6d14();
      pppppppuStack_c = (undefined2 *******)0x103a;
      FUN_32b2_6d14();
      pppppppuStack_c = (undefined2 *******)0x103f;
      FUN_32b2_7191();
      if ((bool)uVar29) {
        pppppppuStack_c = (undefined2 *******)&uStack_aa;
        pppuStack_e = (undefined2 ***)0x32b2;
        puStack_10 = (uint *)0x1057;
        FUN_32b2_6cc6();
        pppuStack_e = (undefined2 ***)0x32b2;
        puStack_10 = (uint *)0x105c;
        FUN_32b2_7258();
        pppppuStack_16 = (undefined2 *****)0x32b2;
        ppppuStack_18 = (undefined2 ****)0x1066;
        FUN_32b2_6eb1();
        pppppuStack_16 = (undefined2 *****)0x32b2;
        ppppuStack_18 = (undefined2 ****)0x106e;
        FUN_32b2_6cc6();
        pppppuStack_16 = (undefined2 *****)0x32b2;
        ppppuStack_18 = (undefined2 ****)0x1073;
        FUN_32b2_7258();
        ppppuStack_20 = (undefined2 ****)0x107d;
        FUN_32b2_6eb1();
        ppppuStack_20 = (undefined2 ****)pppuStack_ae;
        pppppppuStack_24 = (undefined2 *******)uStack_b2;
        uStack_26 = uStack_98;
        pppppppuStack_28 = (undefined2 *******)uStack_9a;
        pppppppuStack_2a = (undefined2 *******)uStack_9c;
        pbStack_2c = (byte *)uStack_9e;
        local_30._2_2_ = (undefined2 *)0x32b2;
        local_30._0_2_ = (byte *)0x10a6;
        FUN_32b2_6d14();
        local_30._2_2_ = (undefined2 *)0x32b2;
        local_30._0_2_ = (byte *)0x10ab;
        FUN_32b2_6fd6();
        uStack_36 = 0x32b2;
        FUN_32b2_6eb1();
        uStack_36 = uStack_b4;
        uStack_3a = uStack_b8;
        uStack_3c = uStack_ba;
        uStack_3e = 0;
        uStack_40 = 0x32b2;
        uStack_42 = 0x10cc;
        func_0x0003fc09();
        *param_8 = uStack_aa;
        param_8[1] = uStack_a8;
        *param_9 = uStack_ce;
        param_9[1] = uStack_cc;
        return iStack_6e + 1;
      }
      return iStack_6e;
    }
    if (iStack_ec != 0) {
      return 0;
    }
    iStack_ec = 1;
    iVar21 = -(param_5 + (uint)(param_4 != 0));
    pppppppuStack_c = (undefined2 *******)0x32b2;
    pppuStack_e = (undefined2 ***)0xef8;
    puVar18 = (undefined2 *)FUN_1000_0271();
    puVar17 = &uStack_36;
    for (iVar19 = 0x10; iVar19 != 0; iVar19 = iVar19 + -1) {
      puVar5 = puVar17;
      puVar17 = puVar17 + 1;
      puVar31 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar5 = *puVar31;
    }
    iVar21 = -(param_3 + (uint)(param_2 != 0));
    pppppppuStack_c = (undefined2 *******)0x1000;
    pppuStack_e = (undefined2 ***)0xba1;
    puVar18 = (undefined2 *)FUN_1000_0271();
    puVar17 = &uStack_6c;
    for (iVar19 = 0x10; iVar19 != 0; iVar19 = iVar19 + -1) {
      puVar5 = puVar17;
      puVar17 = puVar17 + 1;
      puVar31 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar5 = *puVar31;
    }
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    uStack_e2 = uStack_6c;
    uStack_e0 = uStack_6a;
    uStack_e6 = uStack_68;
    uStack_e4 = uStack_66;
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    if ((pppppppuStack_2a != (undefined2 *******)0x2710) ||
       (uVar29 = iStack_60 == 10000, !(bool)uVar29)) break;
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_70dc();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6d14();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_70dc();
    FUN_32b2_6e99();
    FUN_32b2_7191();
    if ((bool)uVar29) {
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_7191();
      if ((bool)uVar29) {
        return 0;
      }
    }
LAB_2bb4_516f:
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_718c();
    puStack_10 = (uint *)0x32b2;
    pppppppuStack_12 = (undefined2 *******)0xce2;
    FUN_32b2_6eb1();
    puStack_10 = (uint *)0x32b2;
    pppppppuStack_12 = (undefined2 *******)0xce7;
    puVar17 = (undefined2 *)FUN_32b2_7592();
    uStack_96 = *puVar17;
    uStack_94 = puVar17[1];
    uStack_92 = puVar17[2];
    uStack_90 = puVar17[3];
  }
  return -1;
LAB_3ab8_3fd3:
  if ((int)ppppuStack_c34 < (int)uStack_b6e) goto LAB_2bb4_516f;
  uVar27 = 0x885;
  func_0x0000c3ca();
  if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x2bc) {
    local_c32 = 0;
    func_0x000297e6();
    func_0x00029b6d();
    uVar27 = 0x22b2;
    func_0x00029983();
  }
  if ((appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x2ee) ||
     (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x2ef)) {
    func_0x000297e6();
    func_0x00029b9d();
    func_0x00029b6d();
    func_0x0002996b();
    pppppppuStack_c = (undefined2 *******)0xebf5;
    func_0x00029b6d();
    uVar27 = 0x22b2;
    func_0x00029983();
    if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x2ef) {
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029d78();
      puStack_10 = (uint *)0x22b2;
      pppppppuStack_12 = (undefined2 *******)0xec2f;
      func_0x000299d1();
      puStack_10 = (uint *)0x22b2;
      pppppppuStack_12 = (undefined2 *******)0xec38;
      func_0x000297e6();
      puStack_10 = (uint *)0x22b2;
      pppppppuStack_12 = (undefined2 *******)0xec3d;
      func_0x00029d78();
      ppppuStack_18 = (undefined2 ****)0x22b2;
      pppppppuStack_1a = (undefined2 *******)0xec47;
      func_0x000299d1();
      ppppuStack_18 = (undefined2 ****)0x1;
      pppppppuStack_1a = (undefined2 *******)0x22b2;
      pppppppuStack_1c = (undefined2 *******)0xec50;
      func_0x0001e558();
      uVar29 = (undefined1 *)0xffed < &ppppuStack_18;
      func_0x000297e6();
      uVar27 = 0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar29) {
        func_0x000297e6();
        func_0x00029af6();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029af6();
        uVar27 = 0x22b2;
        func_0x00029983();
        pppppppuVar16 = pppppppuStack_282;
        pppppppuVar33 = pppppppuStack_284;
        uVar1 = uStack_286;
        pppppppuVar26 = pppppppuStack_288;
        pppppppuStack_288 = pppppppuStack_280;
        uStack_286 = uStack_27e;
        pppppppuStack_280 = pppppppuVar26;
        uStack_27e = uVar1;
        pppppppuStack_644 = pppppppuStack_284;
        pppppppuStack_642 = pppppppuStack_282;
        pppppppuStack_284 = pppppppuStack_27c;
        pppppppuStack_282 = pppppppuStack_27a;
        pppppppuStack_27c = pppppppuVar33;
        pppppppuStack_27a = pppppppuVar16;
      }
    }
  }
  if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x320) {
    local_c32 = 1;
    func_0x000297e6();
    func_0x00029b6d();
    uVar27 = 0x22b2;
    func_0x00029983();
  }
  if (appppuStack_d40[uStack_b6e * 2] != (undefined2 ****)0x2710) {
    if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x2774) {
      *(undefined2 *)0xce6 = 1;
      pcVar15 = (code *)swi(0x3f);
      (*pcVar15)();
    }
    if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x2c24) {
      pcVar15 = (code *)swi(0x3f);
      (*pcVar15)();
    }
    if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x2c88) {
      *(undefined2 *)0xce6 = 1;
      pcVar15 = (code *)swi(0x3f);
      (*pcVar15)();
    }
    if (((int)appppuStack_d40[uStack_b6e * 2] < 14000) ||
       (0x3796 < (int)appppuStack_d40[uStack_b6e * 2])) {
      if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x2d50) {
        *(undefined2 *)0xce6 = 1;
        pcVar15 = (code *)swi(0x3f);
        (*pcVar15)();
      }
      if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x2dbe) {
        *(undefined2 *)0xce6 = 1;
        pcVar15 = (code *)swi(0x3f);
        (*pcVar15)();
      }
      if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x319c) {
        *(undefined2 *)0xce6 = 1;
        pcVar15 = (code *)swi(0x3f);
        (*pcVar15)();
      }
      if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x3282) {
        pppuStack_e = (undefined2 ***)0xee4c;
        pppppppuStack_c = (undefined2 *******)uVar27;
        FUN_21f2_3454();
        *(undefined2 *)0xce6 = 1;
        pcVar15 = (code *)swi(0x3f);
        (*pcVar15)();
        pppppppuStack_c = (undefined2 *******)0x22b2;
        pppuStack_e = (undefined2 ***)0xee6c;
        FUN_21f2_3454();
      }
      if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x328d) {
        pcVar15 = (code *)swi(0x3f);
        (*pcVar15)();
      }
      if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x328e) {
        pcVar15 = (code *)swi(0x3f);
        (*pcVar15)();
      }
      if (appppuStack_d40[uStack_b6e * 2] == (undefined2 ****)0x3390) {
        pcVar15 = (code *)swi(0x3f);
        (*pcVar15)();
      }
      *(undefined2 *)0xce6 = 0;
      if (appppuStack_d40[uStack_b6e * 2] != (undefined2 ****)0x3a98) {
        if (*(int *)0x158 != 0) goto LAB_2bb4_51c3;
        if (((int)appppuStack_d40[uStack_b6e * 2] < 300) ||
           (19999 < (int)appppuStack_d40[uStack_b6e * 2])) goto LAB_3ab8_43c5;
        if ((10000 < (int)appppuStack_d40[uStack_b6e * 2]) &&
           ((int)appppuStack_d40[uStack_b6e * 2] < 20000)) {
          local_648 = 0;
          local_856 = 0;
          local_538 = 0;
          local_646 = 0;
          local_54a = 0;
          local_e7e = 0;
          uStack_4c8 = 1;
        }
      }
    }
    else {
LAB_3ab8_43c5:
      if ((((int)appppuStack_d40[uStack_b6e * 2] % 10 < 8) &&
          ((int)appppuStack_d40[uStack_b6e * 2 + 1] % 10 < 8)) &&
         (((int)appppppuStack_dca[uStack_b6e] < 7 || (10000 < (int)appppppuStack_dca[uStack_b6e]))))
      {
        func_0x000297e6();
        func_0x00029b85();
        func_0x00029b6d();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x00029b85();
        func_0x00029b6d();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x00029b85();
        func_0x00029b6d();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x00029b85();
        func_0x00029b6d();
        func_0x0002996b();
        FUN_28b3_0ee9();
        if (local_c32 != 0) {
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029983();
        }
        if (((int)appppuStack_d40[uStack_b6e * 2] % 10 == 2) ||
           ((int)appppuStack_d40[uStack_b6e * 2] % 10 == 3)) {
          func_0x000297e6();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_1163();
          func_0x00029b6d();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_117c();
          func_0x00029b6d();
          func_0x0002996b();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_1163();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_117c();
          func_0x00029983();
          if ((int)appppuStack_d40[uStack_b6e * 2] % 10 == 3) {
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_1163();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_117c();
            func_0x00029983();
          }
        }
        else {
          uVar29 = (int)appppuStack_d40[uStack_b6e * 2] % 10 == 4;
          if ((bool)uVar29) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar29) {
              func_0x000297e6();
              func_0x00029b85();
              func_0x0002996b();
              func_0x00029b6d();
              pppppppuStack_c = (undefined2 *******)0xf29a;
              func_0x00029b55();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029983();
            }
            func_0x000297e6();
            pppppppuStack_c = (undefined2 *******)0xf2c5;
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            pppppppuStack_c = (undefined2 *******)0xf2de;
            func_0x00029b6d();
            func_0x0002996b();
            func_0x00029b6d();
            pppppppuStack_c = (undefined2 *******)0xf2f6;
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029983();
          }
          else {
            func_0x000297e6();
            pppppppuStack_c = (undefined2 *******)0xf32d;
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            pppppppuStack_c = (undefined2 *******)0xf346;
            func_0x00029b6d();
            func_0x00029983();
          }
        }
        if (((int)appppuStack_d40[uStack_b6e * 2 + 1] % 10 == 2) ||
           ((int)appppuStack_d40[uStack_b6e * 2 + 1] % 10 == 3)) {
          func_0x000297e6();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_1163();
          func_0x00029b6d();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_117c();
          func_0x00029b6d();
          func_0x0002996b();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_1163();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x000297e6();
          func_0x00029b6d();
          FUN_28b3_117c();
          func_0x00029983();
          if ((int)appppuStack_d40[uStack_b6e * 2 + 1] % 10 == 3) {
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_1163();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_117c();
            func_0x00029983();
          }
        }
        else {
          uVar29 = (int)appppuStack_d40[uStack_b6e * 2 + 1] % 10 == 4;
          if ((bool)uVar29) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar29) {
              func_0x000297e6();
              func_0x00029b85();
              func_0x0002996b();
              func_0x00029b6d();
              pppppppuStack_c = (undefined2 *******)0xf529;
              func_0x00029b55();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029983();
            }
            func_0x000297e6();
            pppppppuStack_c = (undefined2 *******)0xf554;
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            pppppppuStack_c = (undefined2 *******)0xf56d;
            func_0x00029b6d();
            func_0x0002996b();
            func_0x00029b6d();
            pppppppuStack_c = (undefined2 *******)0xf585;
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029983();
          }
          else {
            func_0x000297e6();
            pppppppuStack_c = (undefined2 *******)0xf5bc;
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            pppppppuStack_c = (undefined2 *******)0xf5d5;
            func_0x00029b6d();
            func_0x00029983();
          }
        }
        if (((int)appppuStack_d40[uStack_b6e * 2] % 10 == 0) ||
           (iStack_534 == 0 && pbStack_536 == (byte *)0x0)) {
          pppppppuStack_c = (undefined2 *******)0x0;
          pppuStack_e = (undefined2 ***)0x22b2;
          puStack_10 = (uint *)0xf615;
          FUN_1def_0338();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029bb5();
          pppuVar28 = (undefined2 ***)0x22b2;
          func_0x00029983();
        }
        else {
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf669;
          func_0x000299d1();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf672;
          func_0x000297e6();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf677;
          func_0x00029d78();
          ppppuStack_18 = (undefined2 ****)0x22b2;
          pppppppuStack_1a = (undefined2 *******)0xf681;
          func_0x000299d1();
          ppppuStack_18 = (undefined2 ****)0x0;
          pppppppuStack_1a = (undefined2 *******)0x22b2;
          pppppppuStack_1c = (undefined2 *******)0xf68a;
          FUN_1def_05d1();
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf6b4;
          func_0x000299d1();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf6bd;
          func_0x000297e6();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf6c2;
          func_0x00029d78();
          ppppuStack_18 = (undefined2 ****)0x22b2;
          pppppppuStack_1a = (undefined2 *******)0xf6cc;
          func_0x000299d1();
          ppppuStack_18 = (undefined2 ****)0x0;
          pppppppuStack_1a = (undefined2 *******)0x22b2;
          pppuVar28 = (undefined2 ***)0x1bb4;
          pppppppuStack_1c = (undefined2 *******)0xf6d5;
          func_0x0001e558();
        }
        if (((int)appppuStack_d40[uStack_b6e * 2 + 1] % 10 == 0) ||
           (iStack_534 == 0 && pbStack_536 == (byte *)0x0)) {
          pppppppuStack_c = (undefined2 *******)0x0;
          puStack_10 = (uint *)0xf721;
          pppuStack_e = pppuVar28;
          FUN_1def_0338();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
        }
        else {
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf775;
          func_0x000299d1();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf77e;
          func_0x000297e6();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf783;
          func_0x00029d78();
          ppppuStack_18 = (undefined2 ****)0x22b2;
          pppppppuStack_1a = (undefined2 *******)0xf78d;
          func_0x000299d1();
          ppppuStack_18 = (undefined2 ****)0x0;
          pppppppuStack_1a = (undefined2 *******)0x22b2;
          pppppppuStack_1c = (undefined2 *******)0xf796;
          FUN_1def_05d1();
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf7c0;
          func_0x000299d1();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf7c9;
          func_0x000297e6();
          puStack_10 = (uint *)0x22b2;
          pppppppuStack_12 = (undefined2 *******)0xf7ce;
          func_0x00029d78();
          ppppuStack_18 = (undefined2 ****)0x22b2;
          pppppppuStack_1a = (undefined2 *******)0xf7d8;
          func_0x000299d1();
          ppppuStack_18 = (undefined2 ****)0x0;
          pppppppuStack_1a = (undefined2 *******)0x22b2;
          pppppppuStack_1c = (undefined2 *******)0xf7e1;
          piVar20 = (int *)func_0x0001e558();
          pppppppuStack_e8c = (undefined2 *******)*piVar20;
          pppppppuStack_e8a = (undefined2 *******)piVar20[1];
        }
        if ((int)appppuStack_d40[uStack_b6e * 2 + 1] % 100 == 10) {
          pppppppuStack_e8c = pppppppuStack_27c;
          pppppppuStack_e8a = pppppppuStack_27a;
        }
        if ((int)appppuStack_d40[uStack_b6e * 2 + 1] % 100 == 0x14) {
          pppppppuStack_e8c = pppppppuStack_4ba;
          pppppppuStack_e8a = pppppppuStack_4b8;
        }
        bStack_5d = *(byte *)0xa6a;
        bStack_5e = *(byte *)0xa6c;
        bStack_5c = *(byte *)0xb310;
        if ((99 < (int)appppuStack_d40[uStack_b6e * 2] % 1000) ||
           (99 < (int)appppuStack_d40[uStack_b6e * 2 + 1] % 1000)) {
          piVar20 = &iStack_6e;
          pppppppuVar26 = &pppppppuStack_288;
          for (iVar19 = 0xb; iVar19 != 0; iVar19 = iVar19 + -1) {
            piVar7 = piVar20;
            piVar20 = piVar20 + 1;
            pppppppuVar4 = pppppppuVar26;
            pppppppuVar26 = pppppppuVar26 + 1;
            *piVar7 = (int)*pppppppuVar4;
          }
        }
        if ((199 < (int)appppuStack_d40[uStack_b6e * 2] % 1000) ||
           (199 < (int)appppuStack_d40[uStack_b6e * 2 + 1] % 1000)) {
          piVar20 = &iStack_6e;
          piVar24 = &iStack_4c6;
          for (iVar19 = 0xb; iVar19 != 0; iVar19 = iVar19 + -1) {
            piVar8 = piVar20;
            piVar20 = piVar20 + 1;
            piVar7 = piVar24;
            piVar24 = piVar24 + 1;
            *piVar8 = *piVar7;
          }
        }
        pppppuStack_de4 = (undefined2 *****)(uint)bStack_5d;
        uStack_d4a = (uint)bStack_5e;
        uStack_548 = (uint)bStack_5c;
        if ((0 < (int)appppppuStack_dca[uStack_b6e]) && ((int)appppppuStack_dca[uStack_b6e] < 7)) {
          pppppuStack_de4 = appppppuStack_dca[uStack_b6e];
        }
        if ((0 < (int)auStack_e6c[uStack_b6e]) && ((int)auStack_e6c[uStack_b6e] < 10)) {
          uStack_d4a = auStack_e6c[uStack_b6e];
        }
        if (-1 < (int)auStack_634[uStack_b6e]) {
          uVar10 = auStack_634[uStack_b6e];
          uVar22 = (int)uVar10 >> 0xf;
          uVar23 = (int)*(uint *)0xb310 >> 0xf;
          uStack_548 = uVar10 + ((((int)((*(uint *)0xb310 ^ uVar23) - uVar23) >> 4 ^ uVar23) -
                                 uVar23) -
                                (((int)((uVar10 ^ uVar22) - uVar22) >> 4 ^ uVar22) - uVar22)) * 0x10
          ;
        }
        if ((int)appppuStack_d40[uStack_b6e * 2] < 14000) {
          iVar19 = func_0x0003fb74();
          return iVar19;
        }
        if (0x3796 < (int)appppuStack_d40[uStack_b6e * 2]) {
          iVar19 = func_0x0003fb74();
          return iVar19;
        }
        uVar27 = *(undefined2 *)0xb76a;
        uVar11 = *(undefined2 *)0xb76c;
        uVar1 = *(undefined2 *)0xb784;
        uVar12 = *(undefined2 *)0xb786;
        uStack_e82 = *(undefined2 *)0xb30c;
        uStack_e80 = *(undefined2 *)0xb30e;
        uVar2 = *(undefined2 *)0xb37e;
        uVar13 = *(undefined2 *)0xb380;
        uVar3 = *(undefined2 *)0xc122;
        uVar14 = *(undefined2 *)0xc124;
        func_0x000297e6();
        func_0x00029d78();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xfa82;
        func_0x000299d1();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xfa8b;
        func_0x000297e6();
        puStack_10 = (uint *)0x22b2;
        pppppppuStack_12 = (undefined2 *******)0xfa90;
        func_0x00029d78();
        ppppuStack_18 = (undefined2 ****)0x22b2;
        pppppppuStack_1a = (undefined2 *******)0xfa9a;
        func_0x000299d1();
        ppppuStack_18 = (undefined2 ****)0x22b2;
        pppppppuStack_1a = (undefined2 *******)0xfaa3;
        func_0x000297e6();
        ppppuStack_18 = (undefined2 ****)0x22b2;
        pppppppuStack_1a = (undefined2 *******)0xfaa8;
        func_0x00029d78();
        ppppuStack_20 = (undefined2 ****)0x22b2;
        func_0x000299d1();
        ppppuStack_20 = (undefined2 ****)0x22b2;
        func_0x000297e6();
        ppppuStack_20 = (undefined2 ****)0x22b2;
        func_0x00029d78();
        pppppppuStack_28 = (undefined2 *******)0x22b2;
        pppppppuStack_2a = (undefined2 *******)0xfaca;
        func_0x000299d1();
        pppppppuStack_28 = (undefined2 *******)0x22b2;
        pppppppuStack_2a = (undefined2 *******)0xfacf;
        FUN_1def_043a();
        abStack_e92[0] = *(byte *)0xb310;
        *(uint *)0xb310 = uStack_548;
        pppppppuStack_c = (undefined2 *******)0x1bb4;
        pppuStack_e = (undefined2 ***)0xfaf1;
        func_0x000297e6();
        pppppppuStack_c = (undefined2 *******)0x22b2;
        pppuStack_e = (undefined2 ***)0xfaf6;
        func_0x00029d78();
        ppppppuStack_14 = (undefined2 ******)0x22b2;
        pppppuStack_16 = (undefined2 *****)0xfb00;
        func_0x000299d1();
        ppppppuStack_14 = (undefined2 ******)apppuStack_bd4;
        pppppuStack_16 = (undefined2 *****)0x0;
        pcVar15 = (code *)swi(0x3f);
        iVar19 = (*pcVar15)();
        if (iVar19 != 0) {
          local_e7e = local_e7e + 1;
        }
        *(uint *)0xb310 = (uint)abStack_e92[0];
        *(undefined2 *)0xb76a = uVar27;
        *(undefined2 *)0xb76c = uVar11;
        *(undefined2 *)0xb784 = uVar1;
        *(undefined2 *)0xb786 = uVar12;
        *(undefined2 *)0xb30c = uStack_e82;
        *(undefined2 *)0xb30e = uStack_e80;
        *(undefined2 *)0xb37e = uVar2;
        *(undefined2 *)0xb380 = uVar13;
        *(undefined2 *)0xc122 = uVar3;
        *(undefined2 *)0xc124 = uVar14;
        iVar19 = FUN_3ab8_3fcf();
        return iVar19;
      }
    }
  }
  uStack_b6e = uStack_b6e + 1;
  goto LAB_3ab8_3fd3;
}



/* 3ab8:3fcf  FUN_3ab8_3fcf  3211 bytes, 3 callers */

undefined2 __cdecl16far FUN_3ab8_3fcf(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int unaff_BP;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
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
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  int iStack_6;
  
code_r0x0003eb4f:
  do {
    *(int *)(unaff_BP + -0xb6c) = *(int *)(unaff_BP + -0xb6c) + 1;
    if (*(int *)(unaff_BP + -0xc32) < *(int *)(unaff_BP + -0xb6c)) goto code_r0x00030cb8;
    uVar12 = 0x885;
    func_0x0000c3ca();
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 700) {
      *(undefined2 *)(unaff_BP + -0xc30) = 0;
      func_0x000297e6();
      func_0x00029b6d();
      uVar12 = 0x22b2;
      func_0x00029983();
    }
    iVar7 = *(int *)(unaff_BP + -0xb6c) * 4;
    if ((*(int *)(unaff_BP + iVar7 + -0xd3e) == 0x2ee) ||
       (*(int *)(unaff_BP + iVar7 + -0xd3e) == 0x2ef)) {
      func_0x000297e6();
      func_0x00029b9d();
      func_0x00029b6d();
      func_0x0002996b();
      iStack_6 = -0x140b;
      func_0x00029b6d();
      uVar12 = 0x22b2;
      func_0x00029983();
      if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 0x2ef) {
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029d78();
        uStack_a = 0x22b2;
        uStack_c = 0xec2f;
        func_0x000299d1();
        uStack_a = 0x22b2;
        uStack_c = 0xec38;
        func_0x000297e6();
        uStack_a = 0x22b2;
        uStack_c = 0xec3d;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xec47;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0xec50;
        func_0x0001e558();
        uVar13 = (undefined1 *)0xffed < &uStack_12;
        func_0x000297e6();
        uVar12 = 0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar13) {
          func_0x000297e6();
          func_0x00029af6();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029af6();
          uVar12 = 0x22b2;
          func_0x00029983();
          uVar3 = *(undefined2 *)(unaff_BP + -0x284);
          *(undefined2 *)(unaff_BP + -0x642) = *(undefined2 *)(unaff_BP + -0x286);
          *(undefined2 *)(unaff_BP + -0x640) = uVar3;
          uVar3 = *(undefined2 *)(unaff_BP + -0x27c);
          *(undefined2 *)(unaff_BP + -0x286) = *(undefined2 *)(unaff_BP + -0x27e);
          *(undefined2 *)(unaff_BP + -0x284) = uVar3;
          uVar3 = *(undefined2 *)(unaff_BP + -0x640);
          *(undefined2 *)(unaff_BP + -0x27e) = *(undefined2 *)(unaff_BP + -0x642);
          *(undefined2 *)(unaff_BP + -0x27c) = uVar3;
          uVar3 = *(undefined2 *)(unaff_BP + -0x280);
          *(undefined2 *)(unaff_BP + -0x642) = *(undefined2 *)(unaff_BP + -0x282);
          *(undefined2 *)(unaff_BP + -0x640) = uVar3;
          uVar3 = *(undefined2 *)(unaff_BP + -0x278);
          *(undefined2 *)(unaff_BP + -0x282) = *(undefined2 *)(unaff_BP + -0x27a);
          *(undefined2 *)(unaff_BP + -0x280) = uVar3;
          uVar3 = *(undefined2 *)(unaff_BP + -0x640);
          *(undefined2 *)(unaff_BP + -0x27a) = *(undefined2 *)(unaff_BP + -0x642);
          *(undefined2 *)(unaff_BP + -0x278) = uVar3;
        }
      }
    }
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 800) {
      *(undefined2 *)(unaff_BP + -0xc30) = 1;
      func_0x000297e6();
      func_0x00029b6d();
      uVar12 = 0x22b2;
      func_0x00029983();
    }
  } while (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 10000);
  if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 0x2774) {
    *(undefined2 *)0xce6 = 1;
    pcVar5 = (code *)swi(0x3f);
    (*pcVar5)();
  }
  if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 0x2c24) {
    pcVar5 = (code *)swi(0x3f);
    (*pcVar5)();
  }
  if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 0x2c88) {
    *(undefined2 *)0xce6 = 1;
    pcVar5 = (code *)swi(0x3f);
    (*pcVar5)();
  }
  iVar7 = *(int *)(unaff_BP + -0xb6c) * 4;
  if ((*(int *)(unaff_BP + iVar7 + -0xd3e) < 14000) ||
     (0x3796 < *(int *)(unaff_BP + iVar7 + -0xd3e))) {
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 0x2d50) {
      *(undefined2 *)0xce6 = 1;
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
    }
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 0x2dbe) {
      *(undefined2 *)0xce6 = 1;
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
    }
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 0x319c) {
      *(undefined2 *)0xce6 = 1;
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
    }
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 0x3282) {
      iStack_8 = 0xee4c;
      iStack_6 = uVar12;
      FUN_21f2_3454();
      *(undefined2 *)0xce6 = 1;
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
      iStack_6 = 0x22b2;
      uVar12 = 0x22b2;
      iStack_8 = 0xee6c;
      FUN_21f2_3454();
    }
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 0x328d) {
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
    }
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 0x328e) {
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
    }
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 0x3390) {
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
    }
    *(undefined2 *)0xce6 = 0;
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) == 15000)
    goto code_r0x0003eb4f;
    if (*(int *)0x158 != 0) {
      while( true ) {
        uStack_a = 0xd08;
        iStack_8 = uVar12;
        FUN_32b2_6cc6();
        iStack_8 = 0x32b2;
        uStack_a = 0xd0d;
        FUN_32b2_7258();
        uStack_10 = 0x32b2;
        uStack_12 = 0xd17;
        FUN_32b2_6eb1();
        uStack_10 = 0x32b2;
        uStack_12 = 0xd20;
        FUN_32b2_6cc6();
        uStack_10 = 0x32b2;
        uStack_12 = 0xd25;
        FUN_32b2_7258();
        uStack_18 = 0x32b2;
        uStack_1a = 0xd2f;
        FUN_32b2_6eb1();
        uStack_18 = *(undefined2 *)(unaff_BP + -0xd6);
        uStack_1a = *(undefined2 *)(unaff_BP + -0xd8);
        uStack_1c = *(undefined2 *)(unaff_BP + -0xda);
        uStack_1e = *(undefined2 *)(unaff_BP + -0xdc);
        uStack_20 = *(undefined2 *)(unaff_BP + -0xba);
        uStack_22 = *(undefined2 *)(unaff_BP + -0xbc);
        uStack_24 = *(undefined2 *)(unaff_BP + -0xbe);
        uStack_26 = *(undefined2 *)(unaff_BP + -0xc0);
        uStack_28 = 0x32b2;
        uStack_2a = 0xd53;
        iVar7 = FUN_3ab8_4fbd();
        if (iVar7 == 0) {
          return 0;
        }
        iStack_6 = 0x32b2;
        iStack_8 = 0xd66;
        FUN_32b2_6d14();
        iStack_6 = 0x32b2;
        iStack_8 = 0xd6f;
        FUN_32b2_6e99();
        iStack_6 = 0x32b2;
        iStack_8 = 0xd77;
        FUN_32b2_6ef9();
        iStack_6 = unaff_BP + -0xe4;
        iStack_8 = unaff_BP + -0xe0;
        uStack_a = 0x32b2;
        uStack_c = 0xd8a;
        FUN_32b2_6cc6();
        uStack_a = 0x32b2;
        uStack_c = 0xd8f;
        FUN_32b2_7258();
        uStack_12 = 0x32b2;
        uStack_14 = 0xd99;
        FUN_32b2_6eb1();
        uStack_12 = 0x32b2;
        uStack_14 = 0xda1;
        FUN_32b2_6cc6();
        uStack_12 = 0x32b2;
        uStack_14 = 0xda6;
        FUN_32b2_7258();
        uStack_1a = 0x32b2;
        uStack_1c = 0xdb0;
        FUN_32b2_6eb1();
        uStack_1a = 0x32b2;
        uStack_1c = 0xdb9;
        FUN_32b2_6d14();
        uStack_22 = 0x32b2;
        uStack_24 = 0xdc3;
        FUN_32b2_6eb1();
        uStack_22 = 0x32b2;
        uStack_24 = 0xdcc;
        FUN_32b2_6d14();
        uStack_22 = 0x32b2;
        uStack_24 = 0xdd5;
        FUN_32b2_6e99();
        uStack_2a = 0x32b2;
        uStack_2c = 0xddf;
        FUN_32b2_6eb1();
        uStack_2a = 0x32b2;
        uStack_2c = 0xde8;
        FUN_32b2_6cc6();
        uStack_2a = 0x32b2;
        uStack_2c = 0xded;
        FUN_32b2_7258();
        uStack_32 = 0x32b2;
        uStack_34 = 0xdf7;
        FUN_32b2_6eb1();
        uStack_32 = 0x32b2;
        uStack_34 = 0xe00;
        FUN_32b2_6cc6();
        uStack_32 = 0x32b2;
        uStack_34 = 0xe05;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        func_0x0003fc09(0x32b2,1);
        uVar13 = (undefined1 *)0xffc9 < &uStack_36;
        uVar12 = *(undefined2 *)0x9382;
        *(undefined2 *)(unaff_BP + -0xe4) = *(undefined2 *)0x9380;
        *(undefined2 *)(unaff_BP + -0xe2) = uVar12;
        FUN_32b2_6cc6();
        FUN_32b2_704d();
        FUN_32b2_7258();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_7173();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_6e99();
        FUN_32b2_718c();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_7182();
        FUN_32b2_710c();
        FUN_32b2_6e99();
        FUN_32b2_6ef9();
        FUN_32b2_6d14();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_70f4();
        FUN_32b2_6e99();
        FUN_32b2_7191();
        if (!(bool)uVar13) {
          FUN_32b2_6d14();
          FUN_32b2_6d14();
          FUN_32b2_6fc7();
          FUN_32b2_7191();
          if ((bool)uVar13) {
            *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)0x93c0;
            *(undefined2 *)(unaff_BP + -0x92) = *(undefined2 *)0x93c2;
            *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x93c4;
            *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)0x93c6;
          }
          iStack_6 = *(undefined2 *)(unaff_BP + -0x92);
          iStack_8 = *(undefined2 *)(unaff_BP + -0x94);
          uStack_a = 0x32b2;
          uStack_c = 0xf53;
          puVar6 = (undefined2 *)FUN_32b2_7592();
          *(undefined2 *)(unaff_BP + -0xd4) = *puVar6;
          *(undefined2 *)(unaff_BP + -0xd2) = puVar6[1];
          *(undefined2 *)(unaff_BP + -0xd0) = puVar6[2];
          *(undefined2 *)(unaff_BP + -0xce) = puVar6[3];
          iStack_6 = unaff_BP + -0xa8;
          iStack_8 = 0x32b2;
          uStack_a = 0xf75;
          FUN_32b2_6cc6();
          iStack_8 = 0x32b2;
          uStack_a = 0xf7a;
          FUN_32b2_7258();
          uStack_10 = 0x32b2;
          uStack_12 = 0xf84;
          FUN_32b2_6eb1();
          uStack_10 = 0x32b2;
          uStack_12 = 0xf8c;
          FUN_32b2_6cc6();
          uStack_10 = 0x32b2;
          uStack_12 = 0xf91;
          FUN_32b2_7258();
          uStack_18 = 0x32b2;
          uStack_1a = 0xf9b;
          FUN_32b2_6eb1();
          uStack_18 = *(undefined2 *)(unaff_BP + -0xaa);
          uStack_1a = *(undefined2 *)(unaff_BP + -0xac);
          uStack_1c = *(undefined2 *)(unaff_BP + -0xae);
          uStack_1e = *(undefined2 *)(unaff_BP + -0xb0);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x96);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x98);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x9a);
          uStack_26 = *(undefined2 *)(unaff_BP + -0x9c);
          uStack_28 = *(undefined2 *)(unaff_BP + -0xce);
          uStack_2a = *(undefined2 *)(unaff_BP + -0xd0);
          uStack_2c = *(undefined2 *)(unaff_BP + -0xd2);
          uStack_2e = *(undefined2 *)(unaff_BP + -0xd4);
          uStack_30 = *(undefined2 *)(unaff_BP + -0xb2);
          uStack_32 = *(undefined2 *)(unaff_BP + -0xb4);
          uStack_34 = *(undefined2 *)(unaff_BP + -0xb6);
          uStack_36 = *(undefined2 *)(unaff_BP + -0xb8);
          uStack_38 = 0;
          func_0x0003fc09(0x32b2);
          uVar13 = (undefined1 *)0xffc9 < &uStack_38;
          uVar12 = *(undefined2 *)(unaff_BP + -0xa6);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0xe);
          *puVar6 = *(undefined2 *)(unaff_BP + -0xa8);
          puVar6[1] = uVar12;
          uVar12 = *(undefined2 *)(unaff_BP + -0xca);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x10);
          *puVar6 = *(undefined2 *)(unaff_BP + -0xcc);
          puVar6[1] = uVar12;
          uVar12 = *(undefined2 *)(unaff_BP + -0xa6);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x12);
          *puVar6 = *(undefined2 *)(unaff_BP + -0xa8);
          puVar6[1] = uVar12;
          uVar12 = *(undefined2 *)(unaff_BP + -0xca);
          puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x14);
          *puVar6 = *(undefined2 *)(unaff_BP + -0xcc);
          puVar6[1] = uVar12;
          *(int *)(unaff_BP + -0x6c) = *(int *)(unaff_BP + -0x6c) + 1;
          iStack_6 = 0x1031;
          FUN_32b2_6d14();
          iStack_6 = 0x103a;
          FUN_32b2_6d14();
          iStack_6 = 0x103f;
          FUN_32b2_7191();
          if ((bool)uVar13) {
            iStack_6 = unaff_BP + -0xa8;
            iStack_8 = 0x32b2;
            uStack_a = 0x1057;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            uStack_a = 0x105c;
            FUN_32b2_7258();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1066;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            uStack_12 = 0x106e;
            FUN_32b2_6cc6();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1073;
            FUN_32b2_7258();
            uStack_18 = 0x32b2;
            uStack_1a = 0x107d;
            FUN_32b2_6eb1();
            uStack_18 = *(undefined2 *)(unaff_BP + -0xaa);
            uStack_1a = *(undefined2 *)(unaff_BP + -0xac);
            uStack_1c = *(undefined2 *)(unaff_BP + -0xae);
            uStack_1e = *(undefined2 *)(unaff_BP + -0xb0);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x96);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x98);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x9a);
            uStack_26 = *(undefined2 *)(unaff_BP + -0x9c);
            uStack_28 = 0x32b2;
            uStack_2a = 0x10a6;
            FUN_32b2_6d14();
            uStack_28 = 0x32b2;
            uStack_2a = 0x10ab;
            FUN_32b2_6fd6();
            uStack_30 = 0x32b2;
            uStack_32 = 0x10b5;
            FUN_32b2_6eb1();
            uStack_30 = *(undefined2 *)(unaff_BP + -0xb2);
            uStack_32 = *(undefined2 *)(unaff_BP + -0xb4);
            uStack_34 = *(undefined2 *)(unaff_BP + -0xb6);
            uStack_36 = *(undefined2 *)(unaff_BP + -0xb8);
            uStack_38 = 0;
            func_0x0003fc09(0x32b2);
            uVar12 = *(undefined2 *)(unaff_BP + -0xa6);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x12);
            *puVar8 = *(undefined2 *)(unaff_BP + -0xa8);
            puVar8[1] = uVar12;
            uVar12 = *(undefined2 *)(unaff_BP + -0xca);
            *puVar6 = *(undefined2 *)(unaff_BP + -0xcc);
            puVar6[1] = uVar12;
            *(int *)(unaff_BP + -0x6c) = *(int *)(unaff_BP + -0x6c) + 1;
          }
          return *(undefined2 *)(unaff_BP + -0x6c);
        }
        if (*(int *)(unaff_BP + -0xea) != 0) {
          return 0;
        }
        *(undefined2 *)(unaff_BP + -0xea) = 1;
        iVar9 = -(*(int *)(unaff_BP + 0xc) + (uint)(*(int *)(unaff_BP + 10) != 0));
        iStack_6 = 0x32b2;
        iStack_8 = 0xef8;
        puVar8 = (undefined2 *)FUN_1000_0271();
        puVar6 = (undefined2 *)(unaff_BP + -0x34);
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        iVar9 = -(*(int *)(unaff_BP + 8) + (uint)(*(int *)(unaff_BP + 6) != 0));
        iStack_6 = 0x1000;
        iStack_8 = 0xba1;
        puVar8 = (undefined2 *)FUN_1000_0271();
        puVar6 = (undefined2 *)(unaff_BP + -0x6a);
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        uVar12 = *(undefined2 *)(unaff_BP + -0x68);
        *(undefined2 *)(unaff_BP + -0xe0) = *(undefined2 *)(unaff_BP + -0x6a);
        *(undefined2 *)(unaff_BP + -0xde) = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + -100);
        *(undefined2 *)(unaff_BP + -0xe4) = *(undefined2 *)(unaff_BP + -0x66);
        *(undefined2 *)(unaff_BP + -0xe2) = uVar12;
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        if ((*(int *)(unaff_BP + -0x28) != 10000) ||
           (uVar13 = *(int *)(unaff_BP + -0x5e) == 10000, !(bool)uVar13)) break;
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_70dc();
        FUN_32b2_6e99();
        FUN_32b2_6ef9();
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_70dc();
        FUN_32b2_6e99();
        FUN_32b2_7191();
        if ((bool)uVar13) {
          FUN_32b2_6d14();
          FUN_32b2_6d14();
          FUN_32b2_7191();
          if ((bool)uVar13) {
            return 0;
          }
        }
        FUN_32b2_6d14();
code_r0x00030cb8:
        FUN_32b2_710c();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_718c();
        uStack_a = 0x32b2;
        uStack_c = 0xce2;
        FUN_32b2_6eb1();
        uStack_a = 0x32b2;
        uVar12 = 0x32b2;
        uStack_c = 0xce7;
        puVar6 = (undefined2 *)FUN_32b2_7592();
        *(undefined2 *)(unaff_BP + -0x94) = *puVar6;
        *(undefined2 *)(unaff_BP + -0x92) = puVar6[1];
        *(undefined2 *)(unaff_BP + -0x90) = puVar6[2];
        *(undefined2 *)(unaff_BP + -0x8e) = puVar6[3];
        iStack_6 = unaff_BP + -0xc;
      }
      return 0xffff;
    }
    iVar7 = *(int *)(unaff_BP + -0xb6c) * 4;
    if ((299 < *(int *)(unaff_BP + iVar7 + -0xd3e)) && (*(int *)(unaff_BP + iVar7 + -0xd3e) < 20000)
       ) {
      if ((10000 < *(int *)(unaff_BP + iVar7 + -0xd3e)) &&
         (*(int *)(unaff_BP + iVar7 + -0xd3e) < 20000)) {
        *(undefined2 *)(unaff_BP + -0x646) = 0;
        *(undefined2 *)(unaff_BP + -0x854) = 0;
        *(undefined2 *)(unaff_BP + -0x536) = 0;
        *(undefined2 *)(unaff_BP + -0x644) = 0;
        *(undefined2 *)(unaff_BP + -0x548) = 0;
        *(undefined2 *)(unaff_BP + -0xe7c) = 0;
        *(undefined1 *)(unaff_BP + -0x4c6) = 1;
      }
      goto code_r0x0003eb4f;
    }
  }
  iVar7 = *(int *)(unaff_BP + -0xb6c) * 4;
  if (((*(int *)(unaff_BP + iVar7 + -0xd3e) % 10 < 8) &&
      (*(int *)(unaff_BP + iVar7 + -0xd3c) % 10 < 8)) &&
     ((iVar7 = *(int *)(unaff_BP + -0xb6c) * 2, *(int *)(unaff_BP + iVar7 + -0xdc8) < 7 ||
      (10000 < *(int *)(unaff_BP + iVar7 + -0xdc8))))) {
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029b6d();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029b6d();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029b6d();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029b6d();
    func_0x0002996b();
    FUN_28b3_0ee9();
    if (*(int *)(unaff_BP + -0xc30) != 0) {
      func_0x000297e6();
      func_0x00029b85();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b85();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b85();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b85();
      func_0x00029983();
    }
    iVar7 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) % 10;
    if ((iVar7 == 2) || (iVar7 == 3)) {
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      func_0x00029b6d();
      FUN_28b3_1163();
      func_0x00029b6d();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      func_0x00029b6d();
      FUN_28b3_117c();
      func_0x00029b6d();
      func_0x0002996b();
      func_0x00029b6d();
      func_0x000297e6();
      func_0x00029b6d();
      FUN_28b3_1163();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      func_0x00029b6d();
      FUN_28b3_117c();
      func_0x00029983();
      if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) % 10 == 3) {
        func_0x000297e6();
        func_0x00029b6d();
        func_0x000297e6();
        func_0x00029b6d();
        FUN_28b3_1163();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x000297e6();
        func_0x00029b6d();
        FUN_28b3_117c();
        func_0x00029983();
      }
    }
    else {
      uVar13 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) % 10 == 4;
      if ((bool)uVar13) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar13) {
          func_0x000297e6();
          func_0x00029b85();
          func_0x0002996b();
          func_0x00029b6d();
          iStack_6 = -0xd66;
          func_0x00029b55();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029983();
        }
        func_0x000297e6();
        iStack_6 = 0xf2c5;
        func_0x00029b6d();
        func_0x00029983();
        func_0x000297e6();
        iStack_6 = 0xf2de;
        func_0x00029b6d();
        func_0x0002996b();
        func_0x00029b6d();
        iStack_6 = -0xd0a;
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029983();
      }
      else {
        func_0x000297e6();
        iStack_6 = 0xf32d;
        func_0x00029b6d();
        func_0x00029983();
        func_0x000297e6();
        iStack_6 = -0xcba;
        func_0x00029b6d();
        func_0x00029983();
      }
    }
    iVar7 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3c) % 10;
    if ((iVar7 == 2) || (iVar7 == 3)) {
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      func_0x00029b6d();
      FUN_28b3_1163();
      func_0x00029b6d();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      func_0x00029b6d();
      FUN_28b3_117c();
      func_0x00029b6d();
      func_0x0002996b();
      func_0x00029b6d();
      func_0x000297e6();
      func_0x00029b6d();
      FUN_28b3_1163();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      func_0x00029b6d();
      FUN_28b3_117c();
      func_0x00029983();
      if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3c) % 10 == 3) {
        func_0x000297e6();
        func_0x00029b6d();
        func_0x000297e6();
        func_0x00029b6d();
        FUN_28b3_1163();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x000297e6();
        func_0x00029b6d();
        FUN_28b3_117c();
        func_0x00029983();
      }
    }
    else {
      uVar13 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3c) % 10 == 4;
      if ((bool)uVar13) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar13) {
          func_0x000297e6();
          func_0x00029b85();
          func_0x0002996b();
          func_0x00029b6d();
          iStack_6 = -0xad7;
          func_0x00029b55();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029983();
        }
        func_0x000297e6();
        iStack_6 = 0xf554;
        func_0x00029b6d();
        func_0x00029983();
        func_0x000297e6();
        iStack_6 = 0xf56d;
        func_0x00029b6d();
        func_0x0002996b();
        func_0x00029b6d();
        iStack_6 = -0xa7b;
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029983();
      }
      else {
        func_0x000297e6();
        iStack_6 = 0xf5bc;
        func_0x00029b6d();
        func_0x00029983();
        func_0x000297e6();
        iStack_6 = -0xa2b;
        func_0x00029b6d();
        func_0x00029983();
      }
    }
    if ((*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) % 10 == 0) ||
       (*(int *)(unaff_BP + -0x532) == 0 && *(int *)(unaff_BP + -0x534) == 0)) {
      iStack_6 = 0;
      iStack_8 = 0x22b2;
      uStack_a = 0xf615;
      FUN_1def_0338();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029bb5();
      uVar12 = 0x22b2;
      func_0x00029983();
    }
    else {
      func_0x000297e6();
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xf669;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0xf672;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0xf677;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xf681;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0xf68a;
      puVar6 = (undefined2 *)FUN_1def_05d1();
      uVar12 = puVar6[1];
      *(undefined2 *)(unaff_BP + -0xe9c) = *puVar6;
      *(undefined2 *)(unaff_BP + -0xe9a) = uVar12;
      func_0x000297e6();
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xf6b4;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0xf6bd;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0xf6c2;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xf6cc;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uVar12 = 0x1bb4;
      uStack_16 = 0xf6d5;
      puVar6 = (undefined2 *)func_0x0001e558();
      uVar3 = puVar6[1];
      *(undefined2 *)(unaff_BP + -0xe94) = *puVar6;
      *(undefined2 *)(unaff_BP + -0xe92) = uVar3;
    }
    if ((*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3c) % 10 == 0) ||
       (*(int *)(unaff_BP + -0x532) == 0 && *(int *)(unaff_BP + -0x534) == 0)) {
      iStack_6 = 0;
      uStack_a = 0xf721;
      iStack_8 = uVar12;
      FUN_1def_0338();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
    }
    else {
      func_0x000297e6();
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xf775;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0xf77e;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0xf783;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xf78d;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0xf796;
      puVar6 = (undefined2 *)FUN_1def_05d1();
      uVar12 = puVar6[1];
      *(undefined2 *)(unaff_BP + -0xe98) = *puVar6;
      *(undefined2 *)(unaff_BP + -0xe96) = uVar12;
      func_0x000297e6();
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xf7c0;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0xf7c9;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0xf7ce;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xf7d8;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0xf7e1;
      puVar6 = (undefined2 *)func_0x0001e558();
      uVar12 = puVar6[1];
      *(undefined2 *)(unaff_BP + -0xe8a) = *puVar6;
      *(undefined2 *)(unaff_BP + -0xe88) = uVar12;
    }
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) % 100 == 10) {
      uVar12 = *(undefined2 *)(unaff_BP + -0x284);
      *(undefined2 *)(unaff_BP + -0xe9c) = *(undefined2 *)(unaff_BP + -0x286);
      *(undefined2 *)(unaff_BP + -0xe9a) = uVar12;
      uVar12 = *(undefined2 *)(unaff_BP + -0x280);
      *(undefined2 *)(unaff_BP + -0xe94) = *(undefined2 *)(unaff_BP + -0x282);
      *(undefined2 *)(unaff_BP + -0xe92) = uVar12;
    }
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3c) % 100 == 10) {
      uVar12 = *(undefined2 *)(unaff_BP + -0x27c);
      *(undefined2 *)(unaff_BP + -0xe98) = *(undefined2 *)(unaff_BP + -0x27e);
      *(undefined2 *)(unaff_BP + -0xe96) = uVar12;
      uVar12 = *(undefined2 *)(unaff_BP + -0x278);
      *(undefined2 *)(unaff_BP + -0xe8a) = *(undefined2 *)(unaff_BP + -0x27a);
      *(undefined2 *)(unaff_BP + -0xe88) = uVar12;
    }
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) % 100 == 0x14) {
      uVar12 = *(undefined2 *)(unaff_BP + -0x4c2);
      *(undefined2 *)(unaff_BP + -0xe9c) = *(undefined2 *)(unaff_BP + -0x4c4);
      *(undefined2 *)(unaff_BP + -0xe9a) = uVar12;
      uVar12 = *(undefined2 *)(unaff_BP + -0x4be);
      *(undefined2 *)(unaff_BP + -0xe94) = *(undefined2 *)(unaff_BP + -0x4c0);
      *(undefined2 *)(unaff_BP + -0xe92) = uVar12;
    }
    if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3c) % 100 == 0x14) {
      uVar12 = *(undefined2 *)(unaff_BP + -0x4ba);
      *(undefined2 *)(unaff_BP + -0xe98) = *(undefined2 *)(unaff_BP + -0x4bc);
      *(undefined2 *)(unaff_BP + -0xe96) = uVar12;
      uVar12 = *(undefined2 *)(unaff_BP + -0x4b6);
      *(undefined2 *)(unaff_BP + -0xe8a) = *(undefined2 *)(unaff_BP + -0x4b8);
      *(undefined2 *)(unaff_BP + -0xe88) = uVar12;
    }
    *(undefined1 *)(unaff_BP + -0x5b) = *(undefined1 *)0xa6a;
    *(undefined1 *)(unaff_BP + -0x5c) = *(undefined1 *)0xa6c;
    *(undefined1 *)(unaff_BP + -0x5a) = *(undefined1 *)0xb310;
    iVar7 = *(int *)(unaff_BP + -0xb6c) * 4;
    if ((99 < *(int *)(unaff_BP + iVar7 + -0xd3e) % 1000) ||
       (99 < *(int *)(unaff_BP + iVar7 + -0xd3c) % 1000)) {
      puVar6 = (undefined2 *)(unaff_BP + -0x6c);
      puVar8 = (undefined2 *)(unaff_BP + -0x286);
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar1;
      }
    }
    iVar7 = *(int *)(unaff_BP + -0xb6c) * 4;
    if ((199 < *(int *)(unaff_BP + iVar7 + -0xd3e) % 1000) ||
       (199 < *(int *)(unaff_BP + iVar7 + -0xd3c) % 1000)) {
      puVar6 = (undefined2 *)(unaff_BP + -0x6c);
      puVar8 = (undefined2 *)(unaff_BP + -0x4c4);
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar1;
      }
    }
    *(uint *)(unaff_BP + -0xde2) = (uint)*(byte *)(unaff_BP + -0x5b);
    *(uint *)(unaff_BP + -0xd48) = (uint)*(byte *)(unaff_BP + -0x5c);
    *(uint *)(unaff_BP + -0x546) = (uint)*(byte *)(unaff_BP + -0x5a);
    iVar7 = *(int *)(unaff_BP + -0xb6c) * 2;
    if ((0 < *(int *)(unaff_BP + iVar7 + -0xdc8)) && (*(int *)(unaff_BP + iVar7 + -0xdc8) < 7)) {
      *(undefined2 *)(unaff_BP + -0xde2) = *(undefined2 *)(unaff_BP + iVar7 + -0xdc8);
    }
    iVar7 = *(int *)(unaff_BP + -0xb6c) * 2;
    if ((0 < *(int *)(unaff_BP + iVar7 + -0xe6a)) && (*(int *)(unaff_BP + iVar7 + -0xe6a) < 10)) {
      *(undefined2 *)(unaff_BP + -0xd48) = *(undefined2 *)(unaff_BP + iVar7 + -0xe6a);
    }
    iVar7 = *(int *)(unaff_BP + -0xb6c) * 2;
    if (-1 < *(int *)(unaff_BP + iVar7 + -0x632)) {
      uVar4 = *(uint *)(unaff_BP + iVar7 + -0x632);
      uVar10 = (int)uVar4 >> 0xf;
      uVar11 = (int)*(uint *)0xb310 >> 0xf;
      *(int *)(unaff_BP + -0x546) =
           uVar4 + ((((int)((*(uint *)0xb310 ^ uVar11) - uVar11) >> 4 ^ uVar11) - uVar11) -
                   (((int)((uVar4 ^ uVar10) - uVar10) >> 4 ^ uVar10) - uVar10)) * 0x10;
    }
    iVar7 = *(int *)(unaff_BP + -0xb6c) * 4;
    if (13999 < *(int *)(unaff_BP + iVar7 + -0xd3e)) {
      if (*(int *)(unaff_BP + iVar7 + -0xd3e) < 0x3797) {
        uVar12 = *(undefined2 *)0xb76c;
        *(undefined2 *)(unaff_BP + -0xebe) = *(undefined2 *)0xb76a;
        *(undefined2 *)(unaff_BP + -0xebc) = uVar12;
        uVar12 = *(undefined2 *)0xb786;
        *(undefined2 *)(unaff_BP + -0xeae) = *(undefined2 *)0xb784;
        *(undefined2 *)(unaff_BP + -0xeac) = uVar12;
        uVar12 = *(undefined2 *)0xb30e;
        *(undefined2 *)(unaff_BP + -0xe80) = *(undefined2 *)0xb30c;
        *(undefined2 *)(unaff_BP + -0xe7e) = uVar12;
        uVar12 = *(undefined2 *)0xb380;
        *(undefined2 *)(unaff_BP + -0xeb2) = *(undefined2 *)0xb37e;
        *(undefined2 *)(unaff_BP + -0xeb0) = uVar12;
        uVar12 = *(undefined2 *)0xc124;
        *(undefined2 *)(unaff_BP + -0xeb6) = *(undefined2 *)0xc122;
        *(undefined2 *)(unaff_BP + -0xeb4) = uVar12;
        func_0x000297e6();
        func_0x00029d78();
        uStack_a = 0x22b2;
        uStack_c = 0xfa82;
        func_0x000299d1();
        uStack_a = 0x22b2;
        uStack_c = 0xfa8b;
        func_0x000297e6();
        uStack_a = 0x22b2;
        uStack_c = 0xfa90;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xfa9a;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        uStack_14 = 0xfaa3;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xfaa8;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        uStack_1c = 0xfab2;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        uStack_1c = 0xfabb;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        uStack_1c = 0xfac0;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xfaca;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0xfacf;
        FUN_1def_043a();
        *(undefined1 *)(unaff_BP + -0xe90) = *(undefined1 *)0xb310;
        *(undefined2 *)0xb310 = *(undefined2 *)(unaff_BP + -0x546);
        iStack_6 = 0x1bb4;
        iStack_8 = 0xfaf1;
        func_0x000297e6();
        iStack_6 = 0x22b2;
        iStack_8 = 0xfaf6;
        func_0x00029d78();
        iStack_e = 0x22b2;
        uStack_10 = 0xfb00;
        func_0x000299d1();
        iStack_e = unaff_BP + -0xbd2;
        uStack_10 = 0;
        pcVar5 = (code *)swi(0x3f);
        iVar7 = (*pcVar5)();
        if (iVar7 != 0) {
          *(int *)(unaff_BP + -0xe7c) = *(int *)(unaff_BP + -0xe7c) + 1;
        }
        *(uint *)0xb310 = (uint)*(byte *)(unaff_BP + -0xe90);
        uVar12 = *(undefined2 *)(unaff_BP + -0xebc);
        *(undefined2 *)0xb76a = *(undefined2 *)(unaff_BP + -0xebe);
        *(undefined2 *)0xb76c = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + -0xeac);
        *(undefined2 *)0xb784 = *(undefined2 *)(unaff_BP + -0xeae);
        *(undefined2 *)0xb786 = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + -0xe7e);
        *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0xe80);
        *(undefined2 *)0xb30e = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + -0xeb0);
        *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -0xeb2);
        *(undefined2 *)0xb380 = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + -0xeb4);
        *(undefined2 *)0xc122 = *(undefined2 *)(unaff_BP + -0xeb6);
        *(undefined2 *)0xc124 = uVar12;
        uVar12 = FUN_3ab8_3fcf();
        return uVar12;
      }
      uVar12 = func_0x0003fb74();
      return uVar12;
    }
    uVar12 = func_0x0003fb74();
    return uVar12;
  }
  goto code_r0x0003eb4f;
}



/* 3ab8:4c91  FUN_3ab8_4c91  762 bytes, 1 callers */

void FUN_3ab8_4c91(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined2 in_AX;
  uint uVar5;
  uint uVar6;
  int unaff_BP;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  
  uVar10 = *(undefined2 *)(unaff_BP + -0x284);
  *(undefined2 *)(unaff_BP + -0xe9c) = in_AX;
  *(undefined2 *)(unaff_BP + -0xe9a) = uVar10;
  uVar10 = *(undefined2 *)(unaff_BP + -0x280);
  *(undefined2 *)(unaff_BP + -0xe94) = *(undefined2 *)(unaff_BP + -0x282);
  *(undefined2 *)(unaff_BP + -0xe92) = uVar10;
  if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3c) % 100 == 10) {
    uVar10 = *(undefined2 *)(unaff_BP + -0x27c);
    *(undefined2 *)(unaff_BP + -0xe98) = *(undefined2 *)(unaff_BP + -0x27e);
    *(undefined2 *)(unaff_BP + -0xe96) = uVar10;
    uVar10 = *(undefined2 *)(unaff_BP + -0x278);
    *(undefined2 *)(unaff_BP + -0xe8a) = *(undefined2 *)(unaff_BP + -0x27a);
    *(undefined2 *)(unaff_BP + -0xe88) = uVar10;
  }
  if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) % 100 == 0x14) {
    uVar10 = *(undefined2 *)(unaff_BP + -0x4c2);
    *(undefined2 *)(unaff_BP + -0xe9c) = *(undefined2 *)(unaff_BP + -0x4c4);
    *(undefined2 *)(unaff_BP + -0xe9a) = uVar10;
    uVar10 = *(undefined2 *)(unaff_BP + -0x4be);
    *(undefined2 *)(unaff_BP + -0xe94) = *(undefined2 *)(unaff_BP + -0x4c0);
    *(undefined2 *)(unaff_BP + -0xe92) = uVar10;
  }
  if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3c) % 100 == 0x14) {
    uVar10 = *(undefined2 *)(unaff_BP + -0x4ba);
    *(undefined2 *)(unaff_BP + -0xe98) = *(undefined2 *)(unaff_BP + -0x4bc);
    *(undefined2 *)(unaff_BP + -0xe96) = uVar10;
    uVar10 = *(undefined2 *)(unaff_BP + -0x4b6);
    *(undefined2 *)(unaff_BP + -0xe8a) = *(undefined2 *)(unaff_BP + -0x4b8);
    *(undefined2 *)(unaff_BP + -0xe88) = uVar10;
  }
  *(undefined1 *)(unaff_BP + -0x5b) = *(undefined1 *)0xa6a;
  *(undefined1 *)(unaff_BP + -0x5c) = *(undefined1 *)0xa6c;
  *(undefined1 *)(unaff_BP + -0x5a) = *(undefined1 *)0xb310;
  iVar7 = *(int *)(unaff_BP + -0xb6c) * 4;
  if ((99 < *(int *)(unaff_BP + iVar7 + -0xd3e) % 1000) ||
     (99 < *(int *)(unaff_BP + iVar7 + -0xd3c) % 1000)) {
    puVar9 = (undefined2 *)(unaff_BP + -0x6c);
    puVar8 = (undefined2 *)(unaff_BP + -0x286);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      puVar1 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar1;
    }
  }
  iVar7 = *(int *)(unaff_BP + -0xb6c) * 4;
  if ((199 < *(int *)(unaff_BP + iVar7 + -0xd3e) % 1000) ||
     (199 < *(int *)(unaff_BP + iVar7 + -0xd3c) % 1000)) {
    puVar9 = (undefined2 *)(unaff_BP + -0x6c);
    puVar8 = (undefined2 *)(unaff_BP + -0x4c4);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      puVar1 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar1;
    }
  }
  *(uint *)(unaff_BP + -0xde2) = (uint)*(byte *)(unaff_BP + -0x5b);
  *(uint *)(unaff_BP + -0xd48) = (uint)*(byte *)(unaff_BP + -0x5c);
  *(uint *)(unaff_BP + -0x546) = (uint)*(byte *)(unaff_BP + -0x5a);
  iVar7 = *(int *)(unaff_BP + -0xb6c) * 2;
  if ((0 < *(int *)(unaff_BP + iVar7 + -0xdc8)) && (*(int *)(unaff_BP + iVar7 + -0xdc8) < 7)) {
    *(undefined2 *)(unaff_BP + -0xde2) = *(undefined2 *)(unaff_BP + iVar7 + -0xdc8);
  }
  iVar7 = *(int *)(unaff_BP + -0xb6c) * 2;
  if ((0 < *(int *)(unaff_BP + iVar7 + -0xe6a)) && (*(int *)(unaff_BP + iVar7 + -0xe6a) < 10)) {
    *(undefined2 *)(unaff_BP + -0xd48) = *(undefined2 *)(unaff_BP + iVar7 + -0xe6a);
  }
  iVar7 = *(int *)(unaff_BP + -0xb6c) * 2;
  if (-1 < *(int *)(unaff_BP + iVar7 + -0x632)) {
    uVar3 = *(uint *)(unaff_BP + iVar7 + -0x632);
    uVar5 = (int)uVar3 >> 0xf;
    uVar6 = (int)*(uint *)0xb310 >> 0xf;
    *(int *)(unaff_BP + -0x546) =
         uVar3 + ((((int)((*(uint *)0xb310 ^ uVar6) - uVar6) >> 4 ^ uVar6) - uVar6) -
                 (((int)((uVar3 ^ uVar5) - uVar5) >> 4 ^ uVar5) - uVar5)) * 0x10;
  }
  iVar7 = *(int *)(unaff_BP + -0xb6c) * 4;
  if (13999 < *(int *)(unaff_BP + iVar7 + -0xd3e)) {
    if (*(int *)(unaff_BP + iVar7 + -0xd3e) < 0x3797) {
      uVar10 = *(undefined2 *)0xb76c;
      *(undefined2 *)(unaff_BP + -0xebe) = *(undefined2 *)0xb76a;
      *(undefined2 *)(unaff_BP + -0xebc) = uVar10;
      uVar10 = *(undefined2 *)0xb786;
      *(undefined2 *)(unaff_BP + -0xeae) = *(undefined2 *)0xb784;
      *(undefined2 *)(unaff_BP + -0xeac) = uVar10;
      uVar10 = *(undefined2 *)0xb30e;
      *(undefined2 *)(unaff_BP + -0xe80) = *(undefined2 *)0xb30c;
      *(undefined2 *)(unaff_BP + -0xe7e) = uVar10;
      uVar10 = *(undefined2 *)0xb380;
      *(undefined2 *)(unaff_BP + -0xeb2) = *(undefined2 *)0xb37e;
      *(undefined2 *)(unaff_BP + -0xeb0) = uVar10;
      uVar10 = *(undefined2 *)0xc124;
      *(undefined2 *)(unaff_BP + -0xeb6) = *(undefined2 *)0xc122;
      *(undefined2 *)(unaff_BP + -0xeb4) = uVar10;
      func_0x000297e6(0x3ab8);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar11 = 0x22b2;
      uVar10 = 0xfa90;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      FUN_1def_043a(0x22b2);
      *(undefined1 *)(unaff_BP + -0xe90) = *(undefined1 *)0xb310;
      *(undefined2 *)0xb310 = *(undefined2 *)(unaff_BP + -0x546);
      func_0x000297e6(0x1bb4,*(undefined2 *)0x1124,1);
      uVar12 = 0xfaf6;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2,uVar10,uVar11,uVar12);
      pcVar4 = (code *)swi(0x3f);
      iVar7 = (*pcVar4)(unaff_BP + -0xbd2);
      if (iVar7 != 0) {
        *(int *)(unaff_BP + -0xe7c) = *(int *)(unaff_BP + -0xe7c) + 1;
      }
      *(uint *)0xb310 = (uint)*(byte *)(unaff_BP + -0xe90);
      uVar10 = *(undefined2 *)(unaff_BP + -0xebc);
      *(undefined2 *)0xb76a = *(undefined2 *)(unaff_BP + -0xebe);
      *(undefined2 *)0xb76c = uVar10;
      uVar10 = *(undefined2 *)(unaff_BP + -0xeac);
      *(undefined2 *)0xb784 = *(undefined2 *)(unaff_BP + -0xeae);
      *(undefined2 *)0xb786 = uVar10;
      uVar10 = *(undefined2 *)(unaff_BP + -0xe7e);
      *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0xe80);
      *(undefined2 *)0xb30e = uVar10;
      uVar10 = *(undefined2 *)(unaff_BP + -0xeb0);
      *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -0xeb2);
      *(undefined2 *)0xb380 = uVar10;
      uVar10 = *(undefined2 *)(unaff_BP + -0xeb4);
      *(undefined2 *)0xc122 = *(undefined2 *)(unaff_BP + -0xeb6);
      *(undefined2 *)0xc124 = uVar10;
      FUN_3ab8_3fcf();
      return;
    }
    FUN_3ab8_4ff4();
    return;
  }
  FUN_3ab8_4ff4();
  return;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  55 bytes, 2 callers */

void FUN_3ab8_4fbd(void)

{
  undefined2 uVar1;
  undefined2 in_AX;
  undefined2 in_DX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xb784 = in_AX;
  *(undefined2 *)0xb786 = in_DX;
  uVar1 = *(undefined2 *)(unaff_BP + -0xe7e);
  *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0xe80);
  *(undefined2 *)0xb30e = uVar1;
  uVar1 = *(undefined2 *)(unaff_BP + -0xeb0);
  *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -0xeb2);
  *(undefined2 *)0xb380 = uVar1;
  uVar1 = *(undefined2 *)(unaff_BP + -0xeb4);
  *(undefined2 *)0xc122 = *(undefined2 *)(unaff_BP + -0xeb6);
  *(undefined2 *)0xc124 = uVar1;
  FUN_3ab8_3fcf();
  return;
}



/* 3ab8:4ff4  FUN_3ab8_4ff4  395 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x00030252) overlaps instruction at (ram,0x00030251)
    */
/* WARNING: Control flow encountered bad instruction data */

undefined2 FUN_3ab8_4ff4(void)

{
  int *piVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  byte bVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  int unaff_BP;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  
  iVar11 = 0x3ab8;
  iVar9 = *(int *)(unaff_BP + -0xb6c) * 2;
  if (29999 < *(int *)(unaff_BP + iVar9 + -0xdc8)) {
    *(undefined2 *)(unaff_BP + -0xebe) = *(undefined2 *)0x1d0;
    *(undefined2 *)(unaff_BP + -0xeba) = *(undefined2 *)0xb310;
    *(undefined2 *)0xb310 = *(undefined2 *)(unaff_BP + -0x546);
    if ((0 < *(int *)(unaff_BP + iVar9 + -0xe6a)) && (*(int *)(unaff_BP + iVar9 + -0xe6a) < 8)) {
      *(undefined2 *)0x1d0 = *(undefined2 *)(unaff_BP + iVar9 + -0xe6a);
    }
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    func_0x000299d1();
    uStack_a = 0x22b2;
    func_0x000297e6();
    uStack_a = 0x22b2;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfbe5;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfbea;
    iVar9 = FUN_1def_1208();
    if (iVar9 != 0) {
      *(int *)(unaff_BP + -0x548) = *(int *)(unaff_BP + -0x548) + 1;
    }
    *(undefined2 *)0x1d0 = *(undefined2 *)(unaff_BP + -0xebe);
    *(undefined2 *)0xb310 = *(undefined2 *)(unaff_BP + -0xeba);
    uVar7 = FUN_3ab8_3fcf();
    return uVar7;
  }
  iVar9 = *(int *)(unaff_BP + -0xb6c) * 2;
  if (*(int *)(unaff_BP + iVar9 + -0xdc8) < 0x2711) {
    while( true ) {
      FUN_32b2_6d14();
      uStack_a = 0x32b2;
      FUN_32b2_6eb1();
      uStack_a = 0x32b2;
      FUN_32b2_6cc6();
      uStack_a = 0x32b2;
      FUN_32b2_7258();
      uStack_a = 0x32b2;
      FUN_32b2_6e99();
      uStack_12 = 0x32b2;
      uStack_14 = 0x288;
      FUN_32b2_6eb1();
      uStack_12 = 0x32b2;
      uStack_14 = 0x290;
      FUN_32b2_6cc6();
      uStack_12 = 0x32b2;
      uStack_14 = 0x295;
      FUN_32b2_7258();
      uStack_1c = 0x29f;
      FUN_32b2_6eb1();
      uStack_1c = 0x2a7;
      FUN_32b2_6cc6();
      uStack_1c = 0x2ac;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
      func_0x0003fc09(0x32b2,1);
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6d14();
      uStack_a = 0x32b2;
      FUN_32b2_6eb1();
      uStack_a = 0x32b2;
      FUN_32b2_6d14();
      uStack_12 = 0x32b2;
      uStack_14 = 0x31e;
      FUN_32b2_6eb1();
      uStack_12 = 0x32b2;
      uStack_14 = 0x326;
      FUN_32b2_6cc6();
      uStack_12 = 0x32b2;
      uStack_14 = 0x32b;
      FUN_32b2_7258();
      uStack_1c = 0x335;
      FUN_32b2_6eb1();
      uStack_1c = 0x33d;
      FUN_32b2_6cc6();
      uStack_1c = 0x342;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
      func_0x0003fc09(0x32b2,1);
      uVar12 = (undefined1 *)0xffc9 < &uStack_1c;
      uVar13 = &stack0x0000 == (undefined1 *)0xffe6;
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
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          iStack_6 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_8 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_a = *(undefined2 *)(unaff_BP + -0x4e);
          uStack_e = 0x622;
          FUN_32b2_6d14();
          uStack_14 = 0x32b2;
          uStack_16 = 0x62c;
          FUN_32b2_6eb1();
          uStack_14 = 0x32b2;
          uStack_16 = 0x635;
          FUN_32b2_6d14();
          uStack_1c = 0x32b2;
          uStack_1e = 0x63f;
          FUN_32b2_6eb1();
          uStack_1c = 0;
          uStack_1e = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
          func_0x0003fc09();
          uVar7 = *(undefined2 *)(unaff_BP + -0x60);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)(unaff_BP + -0x84) = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
          puVar10 = &uStack_a;
          puVar8 = (undefined2 *)(unaff_BP + 0x1c);
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            puVar14 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar3 = *puVar14;
          }
                    /* WARNING: Call to offcut address within same function */
          uStack_e = 0x684;
          iVar9 = func_0x0003fdaf();
          uVar12 = 0;
          uVar13 = iVar9 == 0;
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
            iStack_6 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_8 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_a = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_e = 0x32b2;
            uStack_10 = 0x820;
            FUN_32b2_6d14();
            uStack_16 = 0x32b2;
            uStack_18 = 0x82a;
            FUN_32b2_6eb1();
            uStack_16 = 0x32b2;
            uStack_18 = 0x833;
            FUN_32b2_6d14();
            uStack_1e = 0x32b2;
            FUN_32b2_6eb1();
            uStack_1e = 0;
                    /* WARNING: Call to offcut address within same function */
            func_0x0003fc09(0x32b2);
            uVar12 = (undefined1 *)0xffc9 < &uStack_1e;
            uVar13 = &stack0x0000 == (undefined1 *)0xffe8;
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_7191();
            if ((bool)uVar13) {
              uVar7 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar7;
            }
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_7191();
            if ((bool)uVar13) {
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
            uVar13 = *piVar1 == 0;
            FUN_32b2_6d14();
            FUN_32b2_6d14();
            FUN_32b2_7191();
            if (!(bool)uVar12 && !(bool)uVar13) {
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
              iStack_6 = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_8 = *(undefined2 *)(unaff_BP + -0x48);
              uStack_a = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_e = *(undefined2 *)(unaff_BP + -0x4e);
              uStack_10 = 0x32b2;
              uStack_12 = 0x9b0;
              FUN_32b2_6d14();
              uStack_18 = 0x32b2;
              FUN_32b2_6eb1();
              uStack_18 = 0x32b2;
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
              func_0x0003fc09(0x32b2,0);
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
      uVar12 = &stack0x0000 == (undefined1 *)0xffea;
      FUN_32b2_6d14();
      FUN_32b2_704d();
      FUN_32b2_7095();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191();
      if ((bool)uVar12) {
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar12) {
          return 0;
        }
      }
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      uStack_8 = 0x32b2;
      uStack_a = 0x1df;
      FUN_32b2_6eb1();
      uStack_8 = 0x32b2;
      uStack_a = 0x1e7;
      FUN_32b2_6cc6();
      uStack_8 = 0x32b2;
      uStack_a = 0x1ec;
      FUN_32b2_7258();
      uStack_10 = 0x32b2;
      uStack_12 = 0x1f6;
      FUN_32b2_6eb1();
      uStack_10 = 0x32b2;
      uStack_12 = 0x1fa;
      iVar9 = FUN_3ab8_4fbd();
      if (iVar9 == 0) break;
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
    }
    return 0;
  }
  *(undefined2 *)(unaff_BP + -0xe8c) = 0;
  if (999 < *(int *)(unaff_BP + iVar9 + -0xe6a)) {
    piVar1 = (int *)(unaff_BP + iVar9 + -0xe6a);
    *piVar1 = *piVar1 + -1000;
    *(undefined2 *)(unaff_BP + -0xe8c) = 1;
  }
  *(undefined2 *)(unaff_BP + -0xeb6) = 0;
  *(undefined2 *)(unaff_BP + -0xeb2) = 0;
  iVar9 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 2 + -0xe6a) / 100;
  *(int *)(unaff_BP + -0xeba) = iVar9;
  if (((iVar9 == 1) || (*(int *)(unaff_BP + -0xeba) == 4)) || (*(int *)(unaff_BP + -0xeba) == 7)) {
    *(undefined2 *)(unaff_BP + -0xeb6) = 1;
  }
  if (((*(int *)(unaff_BP + -0xeba) == 2) || (*(int *)(unaff_BP + -0xeba) == 5)) ||
     (*(int *)(unaff_BP + -0xeba) == 8)) {
    *(undefined2 *)(unaff_BP + -0xeb6) = 2;
  }
  if (2 < *(int *)(unaff_BP + -0xeba)) {
    *(undefined2 *)(unaff_BP + -0xeb2) = 1;
  }
  if (5 < *(int *)(unaff_BP + -0xeba)) {
    *(undefined2 *)(unaff_BP + -0xeb2) = 2;
  }
  iVar9 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 2 + -0xe6a) % 100;
  *(int *)(unaff_BP + -0xe8e) = iVar9;
  if ((iVar9 < 1) || (10 < iVar9)) {
    *(undefined2 *)(unaff_BP + -0xe8e) = *(undefined2 *)0x168;
  }
  iVar9 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0xb6c) * 4 + -0xd3e) / 1000;
  *(int *)(unaff_BP + -0xde4) = iVar9;
  if ((iVar9 == 0x14) || (iVar9 == 0x15)) {
    *(undefined2 *)(unaff_BP + -0xe86) = 5;
    *(undefined1 *)(unaff_BP + -0x4c6) = 1;
    iVar9 = *(int *)(unaff_BP + -0xbd4);
    *(int *)(unaff_BP + -0xbe2) = *(int *)(unaff_BP + -0xbe2) + 1;
    if (iVar9 < *(int *)(unaff_BP + -0xbe2)) {
      *(undefined1 *)(unaff_BP + -0xf8e) = 0;
    }
    else {
      *(undefined2 *)(unaff_BP + -0xbde) =
           *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xbe2) * 2 + -0x52e);
      iStack_6 = 0x3ab8;
      iVar11 = 0x22b2;
      uStack_8 = 0xfd4d;
      FUN_21f2_3454();
    }
    if (*(int *)(unaff_BP + -0xde4) == 0x14) {
      uStack_8 = 0xfd67;
      iStack_6 = iVar11;
      FUN_21f2_3454();
      *(undefined1 *)(unaff_BP + -0xf8e) = 0;
      while( true ) {
        iStack_6 = 0xfd77;
        uVar6 = func_0x00024ce4();
        if (9 < uVar6) break;
        iStack_6 = 0x22b2;
        uStack_8 = 0xfd8d;
        FUN_21f2_2d26();
      }
      iVar11 = 0x22b2;
      iStack_6 = -0x265;
      bVar5 = func_0x00024ce4();
      if ((bVar5 & 1) == 1) {
        iStack_6 = 0x22b2;
        iVar11 = 0x22b2;
        uStack_8 = 0xfdb2;
        FUN_21f2_2d26();
      }
    }
    if (*(int *)(unaff_BP + -0xde4) == 0x15) {
      *(undefined1 *)0xbf48 = 0;
    }
    if (*(char *)(unaff_BP + -0x538) == '\0') {
      uStack_8 = 65000;
      iStack_6 = iVar11;
      func_0x000297e6();
      iStack_6 = 0x22b2;
      uStack_8 = 0xfded;
      func_0x00029d78();
      uStack_e = 0x22b2;
      uStack_10 = 0xfdf7;
      func_0x000299d1();
      uStack_e = 0x22b2;
      uStack_10 = 0xfe00;
      func_0x000297e6();
      uStack_e = 0x22b2;
      uStack_10 = 0xfe05;
      func_0x00029d78();
      uStack_16 = 0x22b2;
      uStack_18 = 0xfe0f;
      func_0x000299d1();
      uStack_16 = 0x22b2;
      uStack_18 = 0xfe18;
      func_0x000297e6();
      uStack_16 = 0x22b2;
      uStack_18 = 0xfe1d;
      func_0x00029d78();
      uStack_1e = 0x22b2;
      func_0x000299d1();
      uStack_1e = 0x22b2;
      func_0x000297e6();
      uStack_1e = 0x22b2;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      iVar11 = 0x2ab8;
      uVar7 = func_0x0002b2c8(0x22b2,0,*(undefined2 *)(unaff_BP + -0xe86),unaff_BP + -0xeb6,
                              unaff_BP + -0xeb2,unaff_BP + -0xe8e);
      *(undefined2 *)(unaff_BP + -0xe90) = uVar7;
    }
    else {
      *(undefined2 *)(unaff_BP + -0xe90) = 0;
    }
    if (*(int *)(unaff_BP + -0xe90) == -1) {
      *(undefined1 *)(unaff_BP + -0x538) = 1;
      *(undefined2 *)(unaff_BP + -0xe90) = 0;
    }
    if ((*(int *)(unaff_BP + -0xe90) == 0) && (*(int *)(unaff_BP + -0xde4) == 0x14)) {
      if (*(int *)(unaff_BP + -0xdea) == 0) {
        uVar7 = FUN_3ab8_3fcf();
        return uVar7;
      }
      *(undefined2 *)(unaff_BP + -0xbde) =
           *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xdea) * 2 + -0x52e);
      uStack_8 = 0xfeb5;
      iStack_6 = iVar11;
      FUN_21f2_3454();
    }
  }
  else {
    if (*(char *)(unaff_BP + -0x4c6) != '\0') {
      uVar7 = FUN_3ab8_3fcf();
      return uVar7;
    }
    iStack_6 = 0xfed1;
    puVar14 = (undefined2 *)func_0x00000398();
    puVar10 = (undefined2 *)puVar14;
    puVar8 = (undefined2 *)(unaff_BP + -0x560);
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar4 = puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar4 = *puVar3;
    }
    iStack_6 = unaff_BP + -0xf8e;
    uStack_8 = 0;
    uStack_a = 0xfef5;
    FUN_1885_0344();
  }
  *(undefined1 *)(unaff_BP + -0x54b) = *(undefined1 *)(unaff_BP + -0x546);
  *(uint *)(unaff_BP + -0x54a) = *(uint *)(unaff_BP + -0x54a) & 0xffdf;
  if (*(int *)(unaff_BP + -0xe8c) != 0) {
    *(uint *)(unaff_BP + -0x54a) = *(uint *)(unaff_BP + -0x54a) | 0x20;
  }
  *(undefined1 *)(unaff_BP + -0x54c) = *(undefined1 *)(unaff_BP + -0xe8e);
  FUN_28b3_0d8b();
  func_0x00029983();
  if (*(int *)(unaff_BP + -0xe8c) != 0) {
    FUN_28b3_0d8b();
    func_0x00029983();
  }
  uVar7 = *(undefined2 *)0xbc78;
  *(int *)(unaff_BP + -0x550) = unaff_BP + -0xf8e;
  *(undefined2 *)(unaff_BP + -0x54e) = uVar7;
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x00029d78();
  uStack_a = 0x22b2;
  func_0x000299d1();
  uStack_a = 0x22b2;
  FUN_28b3_1582();
  uVar12 = (undefined1 *)0xfff7 < &uStack_8;
  uVar13 = &stack0x0000 == (undefined1 *)0x0;
  func_0x00029834();
  func_0x0002996b();
  FUN_28b3_1181();
  if (!(bool)uVar12 && !(bool)uVar13) {
    func_0x000297e6();
    iStack_6 = 0x22;
    func_0x00029b9d();
    func_0x00029983();
    func_0x000297e6();
    iStack_6 = 0x3b;
    func_0x00029b9d();
    func_0x00029983();
    iStack_6 = unaff_BP + -0xf8e;
    uStack_8 = 0x22b2;
    uStack_a = 0x56;
    puVar8 = (undefined2 *)func_0x00018eff();
    uVar7 = puVar8[1];
    *(undefined2 *)(unaff_BP + -0xeae) = *puVar8;
    *(undefined2 *)(unaff_BP + -0xeac) = uVar7;
    uVar7 = *(undefined2 *)0xa762;
    *(undefined2 *)(unaff_BP + -0xec6) = *(undefined2 *)0xa760;
    *(undefined2 *)(unaff_BP + -0xec4) = uVar7;
    uVar7 = *(undefined2 *)0xa762;
    *(undefined2 *)(unaff_BP + -0xf92) = *(undefined2 *)0xa760;
    *(undefined2 *)(unaff_BP + -0xf90) = uVar7;
    if (*(int *)(unaff_BP + -0xeb6) == 1) {
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029983();
    }
    if (*(int *)(unaff_BP + -0xeb6) == 2) {
      uVar7 = *(undefined2 *)(unaff_BP + -0xeac);
      *(undefined2 *)(unaff_BP + -0xec6) = *(undefined2 *)(unaff_BP + -0xeae);
      *(undefined2 *)(unaff_BP + -0xec4) = uVar7;
    }
    if (*(int *)(unaff_BP + -0xeb2) == 1) {
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029b85();
      func_0x00029c2c();
      func_0x00029983();
    }
    if (*(int *)(unaff_BP + -0xeb2) == 2) {
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029b85();
      func_0x00029c2c();
      func_0x00029983();
    }
    func_0x000297e6();
    func_0x00029b6d();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_1163();
    func_0x00029bb5();
    func_0x0002996b();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029b55();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_1163();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    puVar10 = &uStack_18;
    puVar8 = (undefined2 *)(unaff_BP + -0x560);
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar3 = puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar14;
    }
    uStack_1c = 0x203;
    iVar9 = func_0x0001b198();
    if (iVar9 != 0) {
      *(int *)(unaff_BP + -0xe7c) = *(int *)(unaff_BP + -0xe7c) + 1;
      if (*(int *)(unaff_BP + -0xeb6) == 1) {
        iStack_6 = 0x225;
        uVar15 = func_0x00000398();
        puVar2 = (uint *)((int)uVar15 + 0x16);
        *puVar2 = *puVar2 | 0x1000;
      }
      if (*(int *)(unaff_BP + -0xeb6) == 2) {
        iStack_6 = 0x243;
        uVar15 = func_0x00000398();
        puVar2 = (uint *)((int)uVar15 + 0x16);
        *puVar2 = *puVar2 | 0x2000;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 3ab8:517f  FUN_3ab8_517f  1361 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_517f(void)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  byte bVar5;
  int in_AX;
  uint uVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  int unaff_BP;
  undefined2 *puVar9;
  int iVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  bool in_ZF;
  undefined1 uVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  
  iVar10 = 0x3ab8;
  if ((in_ZF) || (in_AX == 0x15)) {
    *(undefined2 *)(unaff_BP + -0xe86) = 5;
    *(undefined1 *)(unaff_BP + -0x4c6) = 1;
    iVar4 = *(int *)(unaff_BP + -0xbd4);
    *(int *)(unaff_BP + -0xbe2) = *(int *)(unaff_BP + -0xbe2) + 1;
    if (iVar4 < *(int *)(unaff_BP + -0xbe2)) {
      *(undefined1 *)(unaff_BP + -0xf8e) = 0;
    }
    else {
      *(undefined2 *)(unaff_BP + -0xbde) =
           *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xbe2) * 2 + -0x52e);
      iStack_6 = 0x3ab8;
      iVar10 = 0x22b2;
      uStack_8 = 0xfd4d;
      FUN_21f2_3454();
    }
    if (*(int *)(unaff_BP + -0xde4) == 0x14) {
      uStack_8 = 0xfd67;
      iStack_6 = iVar10;
      FUN_21f2_3454();
      *(undefined1 *)(unaff_BP + -0xf8e) = 0;
      while( true ) {
        iStack_6 = 0xfd77;
        uVar6 = func_0x00024ce4();
        if (9 < uVar6) break;
        iStack_6 = 0x22b2;
        uStack_8 = 0xfd8d;
        FUN_21f2_2d26();
      }
      iVar10 = 0x22b2;
      iStack_6 = -0x265;
      bVar5 = func_0x00024ce4();
      if ((bVar5 & 1) == 1) {
        iStack_6 = 0x22b2;
        iVar10 = 0x22b2;
        uStack_8 = 0xfdb2;
        FUN_21f2_2d26();
      }
    }
    if (*(int *)(unaff_BP + -0xde4) == 0x15) {
      *(undefined1 *)0xbf48 = 0;
    }
    if (*(char *)(unaff_BP + -0x538) == '\0') {
      uStack_8 = 65000;
      iStack_6 = iVar10;
      func_0x000297e6();
      iStack_6 = 0x22b2;
      uStack_8 = 0xfded;
      func_0x00029d78();
      uStack_e = 0x22b2;
      uStack_10 = 0xfdf7;
      func_0x000299d1();
      uStack_e = 0x22b2;
      uStack_10 = 0xfe00;
      func_0x000297e6();
      uStack_e = 0x22b2;
      uStack_10 = 0xfe05;
      func_0x00029d78();
      uStack_16 = 0x22b2;
      uStack_18 = 0xfe0f;
      func_0x000299d1();
      uStack_16 = 0x22b2;
      uStack_18 = 0xfe18;
      func_0x000297e6();
      uStack_16 = 0x22b2;
      uStack_18 = 0xfe1d;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      iVar10 = 0x2ab8;
      uVar7 = func_0x0002b2c8(0x22b2,0,*(undefined2 *)(unaff_BP + -0xe86),unaff_BP + -0xeb6,
                              unaff_BP + -0xeb2,unaff_BP + -0xe8e);
      *(undefined2 *)(unaff_BP + -0xe90) = uVar7;
    }
    else {
      *(undefined2 *)(unaff_BP + -0xe90) = 0;
    }
    if (*(int *)(unaff_BP + -0xe90) == -1) {
      *(undefined1 *)(unaff_BP + -0x538) = 1;
      *(undefined2 *)(unaff_BP + -0xe90) = 0;
    }
    if ((*(int *)(unaff_BP + -0xe90) == 0) && (*(int *)(unaff_BP + -0xde4) == 0x14)) {
      if (*(int *)(unaff_BP + -0xdea) == 0) {
        FUN_3ab8_3fcf();
        return;
      }
      *(undefined2 *)(unaff_BP + -0xbde) =
           *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xdea) * 2 + -0x52e);
      uStack_8 = 0xfeb5;
      iStack_6 = iVar10;
      FUN_21f2_3454();
    }
  }
  else {
    if (*(char *)(unaff_BP + -0x4c6) != '\0') {
      FUN_3ab8_3fcf();
      return;
    }
    iStack_6 = 0xfed1;
    puVar13 = (undefined2 *)func_0x00000398();
    puVar9 = (undefined2 *)puVar13;
    puVar8 = (undefined2 *)(unaff_BP + -0x560);
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar2 = *puVar3;
    }
    iStack_6 = unaff_BP + -0xf8e;
    uStack_8 = 0;
    uStack_a = 0xfef5;
    FUN_1885_0344();
  }
  *(undefined1 *)(unaff_BP + -0x54b) = *(undefined1 *)(unaff_BP + -0x546);
  *(uint *)(unaff_BP + -0x54a) = *(uint *)(unaff_BP + -0x54a) & 0xffdf;
  if (*(int *)(unaff_BP + -0xe8c) != 0) {
    *(uint *)(unaff_BP + -0x54a) = *(uint *)(unaff_BP + -0x54a) | 0x20;
  }
  *(undefined1 *)(unaff_BP + -0x54c) = *(undefined1 *)(unaff_BP + -0xe8e);
  FUN_28b3_0d8b();
  func_0x00029983();
  if (*(int *)(unaff_BP + -0xe8c) != 0) {
    FUN_28b3_0d8b();
    func_0x00029983();
  }
  uVar7 = *(undefined2 *)0xbc78;
  *(int *)(unaff_BP + -0x550) = unaff_BP + -0xf8e;
  *(undefined2 *)(unaff_BP + -0x54e) = uVar7;
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xffe8;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xffed;
  FUN_28b3_1582();
  uVar11 = (undefined1 *)0xfff7 < &uStack_8;
  uVar12 = &stack0x0000 == (undefined1 *)0x0;
  func_0x00029834();
  func_0x0002996b();
  FUN_28b3_1181();
  if (!(bool)uVar11 && !(bool)uVar12) {
    func_0x000297e6();
    iStack_6 = 0x22;
    func_0x00029b9d();
    func_0x00029983();
    func_0x000297e6();
    iStack_6 = 0x3b;
    func_0x00029b9d();
    func_0x00029983();
    iStack_6 = unaff_BP + -0xf8e;
    uStack_8 = 0x22b2;
    uStack_a = 0x56;
    puVar8 = (undefined2 *)func_0x00018eff();
    uVar7 = puVar8[1];
    *(undefined2 *)(unaff_BP + -0xeae) = *puVar8;
    *(undefined2 *)(unaff_BP + -0xeac) = uVar7;
    uVar7 = *(undefined2 *)0xa762;
    *(undefined2 *)(unaff_BP + -0xec6) = *(undefined2 *)0xa760;
    *(undefined2 *)(unaff_BP + -0xec4) = uVar7;
    uVar7 = *(undefined2 *)0xa762;
    *(undefined2 *)(unaff_BP + -0xf92) = *(undefined2 *)0xa760;
    *(undefined2 *)(unaff_BP + -0xf90) = uVar7;
    if (*(int *)(unaff_BP + -0xeb6) == 1) {
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029983();
    }
    if (*(int *)(unaff_BP + -0xeb6) == 2) {
      uVar7 = *(undefined2 *)(unaff_BP + -0xeac);
      *(undefined2 *)(unaff_BP + -0xec6) = *(undefined2 *)(unaff_BP + -0xeae);
      *(undefined2 *)(unaff_BP + -0xec4) = uVar7;
    }
    if (*(int *)(unaff_BP + -0xeb2) == 1) {
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029b85();
      func_0x00029c2c();
      func_0x00029983();
    }
    if (*(int *)(unaff_BP + -0xeb2) == 2) {
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029b85();
      func_0x00029c2c();
      func_0x00029983();
    }
    func_0x000297e6();
    func_0x00029b6d();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_1163();
    func_0x00029bb5();
    func_0x0002996b();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029b55();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_1163();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    puVar9 = &uStack_18;
    puVar8 = (undefined2 *)(unaff_BP + -0x560);
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar13 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar13;
    }
    iVar10 = func_0x0001b198(0x22b2);
    if (iVar10 != 0) {
      *(int *)(unaff_BP + -0xe7c) = *(int *)(unaff_BP + -0xe7c) + 1;
      if (*(int *)(unaff_BP + -0xeb6) == 1) {
        iStack_6 = 0x225;
        uVar14 = func_0x00000398();
        puVar1 = (uint *)((int)uVar14 + 0x16);
        *puVar1 = *puVar1 | 0x1000;
      }
      if (*(int *)(unaff_BP + -0xeb6) == 2) {
        iStack_6 = 0x243;
        uVar14 = func_0x00000398();
        puVar1 = (uint *)((int)uVar14 + 0x16);
        *puVar1 = *puVar1 | 0x2000;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


