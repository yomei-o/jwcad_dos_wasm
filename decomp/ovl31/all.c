/* Ghidra decompilation of jw31.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  227 bytes, 6 callers */

void __cdecl16far FUN_3ab8_0000(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 local_34 [36];
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
  if (param_1 == 1) {
    uStack_4 = 0x568;
    puStack_6 = (undefined1 *)0x6d24;
    puStack_8 = local_34;
    uStack_a = 0x22b2;
    puStack_c = (undefined1 *)0xaba2;
    FUN_21f2_3454();
  }
  if (param_1 == 2) {
    uStack_4 = 0x568;
    puStack_6 = (undefined1 *)0x6d2d;
    puStack_8 = local_34;
    uStack_a = 0x22b2;
    puStack_c = (undefined1 *)0xabbc;
    FUN_21f2_3454();
  }
  if (param_1 == 3) {
    uStack_4 = 0x6d3a;
    puStack_6 = local_34;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xabd2;
    FUN_21f2_3454();
  }
  if (param_1 == 4) {
    uStack_4 = 0x35c;
    puStack_6 = local_34;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xabe7;
    FUN_21f2_3454();
  }
  if (param_1 == 5) {
    uStack_4 = 0x6d3e;
    puStack_6 = local_34;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xabfc;
    FUN_21f2_3454();
  }
  if (param_1 == 6) {
    uStack_4 = 0x6d47;
    puStack_6 = local_34;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xac11;
    FUN_21f2_3454();
  }
  uStack_4 = 0;
  puStack_6 = (undefined1 *)0x22b2;
  puStack_8 = (undefined1 *)0xac1b;
  func_0x00008095();
  *(undefined2 *)0x158 = 1;
  uStack_4 = 1;
  puStack_6 = (undefined1 *)0x2;
  puStack_8 = (undefined1 *)0x2;
  uStack_a = 0x23;
  puStack_c = local_34;
  uStack_e = 0x7a6;
  uVar1 = 0xdef;
  uStack_10 = 0xac35;
  FUN_1000_02b5();
  *(undefined2 *)0xc22 = 1;
  if (*(int *)0xd12 != 0) {
    uStack_4 = *(undefined2 *)0xd12;
    puStack_6 = (undefined1 *)0xdef;
    uVar1 = 0x22b2;
    puStack_8 = (undefined1 *)0xac4e;
    func_0x000276be();
    *(undefined2 *)0xd12 = 0;
  }
  uStack_4 = 1;
  puStack_8 = (undefined1 *)0xac5e;
  puStack_6 = (undefined1 *)uVar1;
  FUN_10ad_1729();
  return;
}



/* 3ab8:00e3  FUN_3ab8_00e3  116 bytes, 1 callers */

void __cdecl16far FUN_3ab8_00e3(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  uVar1 = 0x22b2;
  FUN_21f2_0ebc();
  iVar2 = 2;
  do {
    FUN_1000_0599(uVar1,0x11,iVar2);
    iVar2 = 0xdef;
    uVar1 = 0xdef;
    func_0x00010526();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x19);
  func_0x00012276(0xdef,0x1dc);
  *(undefined2 *)0xc22 = 1;
  uVar1 = 0xdef;
  FUN_1000_0599(0x11f2,0x16,2);
  if (param_1 == 1) {
    uVar1 = 0x11f2;
    func_0x00012276(0xdef,0x6d64);
  }
  if (param_1 == 2) {
    func_0x00012276(uVar1,0x6d89,0x764);
  }
  return;
}



/* 3ab8:0157  FUN_3ab8_0157  345 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003ad8a) */

void __cdecl16far
FUN_3ab8_0157(uint param_1,int param_2,uint param_3,undefined2 param_4,int param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_DS;
  bool bVar6;
  long lVar7;
  uint local_6;
  uint *local_4;
  
  local_4 = (uint *)0x3ab8;
  local_6 = 0xace2;
  FUN_21f2_0ebc();
  if (param_5 == 1) {
    local_4 = (uint *)0x22b2;
    local_6 = 0xacf5;
    uVar1 = func_0x00027a10();
    *(undefined2 *)0xbee2 = uVar1;
    param_1 = param_1 & 0x3fff | *(uint *)0xbee4;
    param_2 = *(int *)0xbee6;
  }
  if (param_5 == 2) {
    local_4 = (uint *)0x22b2;
    local_6 = 0xad23;
    uVar1 = func_0x00027a10();
    *(undefined2 *)0xc728 = uVar1;
    param_1 = param_1 & 0x3fff | *(uint *)0xc72a;
    param_2 = *(int *)0xc72c;
  }
  iVar5 = 0x22b2;
  while( true ) {
    uVar1 = 0x22b2;
    local_6 = 0xad7c;
    local_4 = (uint *)iVar5;
    lVar7 = func_0x00027a10();
    if (lVar7 <= (int)local_4) break;
    if (param_5 == 1) {
      local_4 = (uint *)0x22b2;
      uVar1 = 0;
      local_6 = 0xad99;
      func_0x000000cd();
      *(int *)0xbee2 = *(int *)0xbee2 + 1;
    }
    uVar4 = uVar1;
    if (param_5 == 2) {
      uVar4 = 0;
      local_6 = 0xada8;
      local_4 = (uint *)uVar1;
      func_0x00000106();
      *(int *)0xc728 = *(int *)0xc728 + 1;
    }
    local_4 = &local_6;
    local_6 = 0x4000;
    iVar5 = 0x11f2;
    iVar3 = FUN_10ad_1c7e(uVar4,param_1,param_2);
    if (iVar3 != 0) goto LAB_3ab8_0249;
    if ((int)local_6 < 0x4000) goto LAB_3ab8_01cc;
    uVar2 = -(uint)(param_5 == 0) & 0x4000;
    bVar6 = CARRY2(param_1,uVar2);
    param_1 = param_1 + uVar2;
    param_2 = param_2 + (uint)bVar6 * 0x1000;
  }
  if (param_5 == 1) {
    local_4 = (uint *)0x22b2;
    uVar1 = 0;
    local_6 = 0xaddf;
    func_0x000000cd();
  }
  uVar4 = uVar1;
  if (param_5 == 2) {
    uVar4 = 0;
    local_6 = 0xadea;
    local_4 = (uint *)uVar1;
    func_0x00000106();
  }
  local_4 = &local_6;
  local_6 = param_3 & 0x3fff;
  iVar5 = FUN_10ad_1c7e(uVar4,param_1,param_2);
  if (iVar5 == 0) {
    if ((0 < (int)local_6 >> 0xf) ||
       ((-1 < (int)local_6 || 0 < (int)local_6 >> 0xf && ((param_3 & 0x3fff) <= local_6))))
    goto LAB_3ab8_02a3;
LAB_3ab8_01cc:
    local_4 = (uint *)0x4;
  }
  else {
LAB_3ab8_0249:
    local_4 = (uint *)0x6;
  }
  local_6 = 0x11f2;
  FUN_3ab8_0000();
LAB_3ab8_02a3:
  *(undefined2 *)0xc728 = 0xffff;
  *(undefined2 *)0xbee2 = 0xffff;
  return;
}



/* 3ab8:02b0  FUN_3ab8_02b0  126 bytes, 1 callers */

void __cdecl16far FUN_3ab8_02b0(int param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint local_1a;
  uint local_18;
  undefined2 local_16 [4];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  for (local_18 = param_2; 1 < local_18; local_18 = local_18 - 1) {
    for (local_1a = 1; local_1a < local_18; local_1a = local_1a + 1) {
      puVar3 = (undefined2 *)(local_1a * 0x14 + param_1);
      uStack_c = 0x22b2;
      uStack_e = 0xae6c;
      iVar4 = FUN_21f2_2d98();
      if (0 < iVar4) {
        puVar6 = local_16;
        puVar5 = puVar3;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar2 = *puVar1;
        }
        puVar6 = puVar3 + 10;
        puVar5 = puVar6;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar2 = *puVar1;
        }
        puVar3 = local_16;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar3;
          puVar3 = puVar3 + 1;
          *puVar2 = *puVar1;
        }
      }
    }
  }
  return;
}



/* 3ab8:0336  FUN_3ab8_0336  215 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_0336(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined1 local_fa [44];
  undefined2 local_ce;
  int local_cc;
  char local_ca [100];
  char local_66 [88];
  undefined2 uStack_e;
  undefined2 uStack_c;
  char *pcStack_a;
  undefined2 uStack_8;
  char *pcStack_6;
  
  pcStack_6 = (char *)0xaec1;
  FUN_21f2_0ebc();
  pcStack_6 = (char *)0xeae;
  uStack_8 = 0xe82;
  pcStack_a = local_66;
  uStack_c = 0x22b2;
  uStack_e = 0xaed3;
  func_0x0001263c();
  pcStack_6 = local_fa;
  uStack_8 = 0x10;
  pcStack_a = local_66;
  uStack_c = 0x11f2;
  uStack_e = 0xaee8;
  iVar1 = func_0x000276d7();
  if (iVar1 != 0) {
    if (param_1 == 0) {
      return 0;
    }
    pcStack_6 = local_66;
    uStack_8 = 0x22b2;
    pcStack_a = (char *)0xaf06;
    iVar1 = func_0x00024ce4();
    local_cc = 0;
    do {
      local_ca[local_cc] = local_66[local_cc];
      local_cc = local_cc + 1;
    } while (local_cc < 2);
    local_ce = 2;
    for (local_cc = 2; local_cc < iVar1; local_cc = local_cc + 1) {
      local_ca[local_cc] = local_66[local_cc];
      if ((local_66[local_cc + 1] == '\\') || (local_66[local_cc + 1] == '\0')) {
        local_ca[local_cc + 1] = '\0';
        pcStack_6 = local_fa;
        uStack_8 = 0x10;
        pcStack_a = local_ca;
        uStack_c = 0x22b2;
        uStack_e = 0xaf65;
        iVar2 = func_0x000276d7();
        if (iVar2 != 0) {
          pcStack_6 = local_ca;
          uStack_8 = 0x22b2;
          pcStack_a = (char *)0xaf76;
          FUN_21f2_509e();
        }
      }
    }
  }
  return 1;
}



/* 3ab8:040d  FUN_3ab8_040d  63 bytes, 2 callers */

void __cdecl16far FUN_3ab8_040d(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_21f2_0ebc();
  if (param_1 < 10) {
    uVar1 = 0x6d9f;
  }
  else {
    uVar1 = 0x6da9;
  }
  FUN_21f2_3454(0x22b2,0xeae,uVar1,param_1);
  func_0x0001263c(0x22b2,param_2,0xe82,0xeae);
  return;
}



/* 3ab8:044c  FUN_3ab8_044c  520 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_044c(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_11e;
  undefined1 local_11c [144];
  int local_8c;
  int local_8a;
  char local_88 [118];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  char *pcStack_a;
  int iStack_8;
  int *local_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x3ab8;
  local_6 = (int *)0xafd7;
  FUN_21f2_0ebc();
  local_4 = local_11c;
  local_6 = (int *)param_1;
  iStack_8 = 0x22b2;
  pcStack_a = (char *)0xafe7;
  FUN_3ab8_040d();
  local_4 = (undefined1 *)*(undefined2 *)0x1b40;
  local_6 = (int *)*(undefined2 *)0x1b3e;
  iStack_8 = *(int *)0xa5a + 1;
  pcStack_a = (char *)0x0;
  uStack_c = 0x22b2;
  uStack_e = 0xaffe;
  func_0x0000a76b();
  local_4 = (undefined1 *)0x885;
  local_6 = (int *)0xb006;
  func_0x0000a799();
  local_4 = (undefined1 *)0x885;
  local_6 = (int *)0xb00b;
  func_0x0000c354();
  local_4 = (undefined1 *)0x1;
  local_6 = (int *)0x1;
  iStack_8 = 0x885;
  pcStack_a = (char *)0xb015;
  FUN_1000_0599();
  local_4 = (undefined1 *)0x6db3;
  local_6 = (int *)0xdef;
  iStack_8 = 0xb020;
  func_0x00012276();
  local_4 = (undefined1 *)0x11f2;
  local_6 = (int *)0xb026;
  func_0x00010526();
  local_4 = (undefined1 *)0x1;
  local_6 = (int *)0x14;
  iStack_8 = 0xdef;
  pcStack_a = (char *)0xb033;
  FUN_1000_0599();
  local_4 = (undefined1 *)0x83c;
  local_6 = (int *)0x600;
  iStack_8 = 0x6db9;
  pcStack_a = (char *)0xdef;
  uStack_c = 0xb046;
  func_0x00012276();
  local_8c = (((int)local_6 + -1) / 5) * 2 + 5;
  local_8a = (((int)local_6 + -1) % 5) * 0xc + 0x14;
  iStack_8 = 0x11f2;
  pcStack_a = (char *)0xb07c;
  local_6 = (int *)local_8a;
  local_4 = (undefined1 *)local_8c;
  FUN_1000_0599();
  local_4 = (undefined1 *)0x6dc4;
  local_6 = (int *)0xdef;
  iStack_8 = 0xb087;
  func_0x00012276();
  local_88[0] = '\0';
  local_4 = (undefined1 *)0x11f2;
  local_6 = (int *)0xb092;
  func_0x00002ca6();
  local_4 = (undefined1 *)0xa;
  local_6 = (int *)local_8c;
  iStack_8 = local_8a;
  pcStack_a = local_88;
  uStack_c = 0x2c1;
  uStack_e = 0xb0a8;
  iVar2 = FUN_12c1_03d3();
  if (iVar2 == -1) {
    local_88[0] = '\0';
  }
  local_6 = (int *)0x11f2;
  iStack_8 = 0xb0b8;
  func_0x00002cc6();
  if (3 < *(byte *)0xb782) {
    local_6 = (int *)0x1;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
  }
  if (local_88[0] == '\0') {
    uVar3 = 0;
  }
  else {
    local_6 = (int *)0x1;
    iStack_8 = 0x2c1;
    pcStack_a = (char *)0xb0dd;
    FUN_3ab8_0336();
    local_6 = (int *)local_11c;
    iStack_8 = 0xebc;
    pcStack_a = (char *)0xbf48;
    uStack_c = 0x2c1;
    uStack_e = 0xb0f0;
    FUN_21f2_3454();
    local_6 = (int *)0x180;
    iStack_8 = 0xbf48;
    pcStack_a = (char *)0x22b2;
    uStack_c = 0xb100;
    local_4 = (undefined1 *)FUN_21f2_34ec();
    if (local_4 == (undefined1 *)0xffff) {
      local_6 = (int *)0x2;
      iStack_8 = 0x22b2;
      pcStack_a = (char *)0xb110;
      FUN_3ab8_0000();
    }
    local_6 = (int *)local_4;
    iStack_8 = 0x22b2;
    pcStack_a = (char *)0xb119;
    FUN_21f2_26c2();
    local_6 = (int *)0xd12;
    iStack_8 = 2;
    pcStack_a = (char *)0xbf48;
    uStack_c = 0x22b2;
    uStack_e = 0xb12b;
    iVar2 = FUN_21f2_5804();
    if (iVar2 != 0) {
      local_6 = (int *)0x1;
      iStack_8 = 0x22b2;
      pcStack_a = (char *)0xb13a;
      FUN_3ab8_0000();
    }
    param_1 = 0;
    do {
      *(undefined1 *)(param_1 + -0x40b8) = 0x20;
      param_1 = param_1 + 1;
    } while (param_1 < 200);
    *(undefined1 *)0xc00f = 10;
    local_6 = (int *)local_88;
    iStack_8 = 0x6dcf;
    pcStack_a = (char *)0xbf48;
    uStack_c = 0x22b2;
    uStack_e = 0xb169;
    FUN_21f2_3454();
    param_1 = 0;
    do {
      *(undefined1 *)(param_1 + -0x4090) = *(undefined1 *)(param_1 + -0x4102);
      param_1 = param_1 + 1;
    } while (param_1 < 0x40);
    local_6 = &local_11e;
    iStack_8 = 200;
    pcStack_a = (char *)*(undefined2 *)0xbc78;
    uStack_c = 0xbf48;
    uStack_e = *(undefined2 *)0xd12;
    uStack_10 = 0x22b2;
    uStack_12 = 0xb1a0;
    iVar2 = func_0x00027743();
    if (iVar2 != 0) {
      local_6 = (int *)0x3;
      iStack_8 = 0x22b2;
      pcStack_a = (char *)0xb1af;
      FUN_3ab8_0000();
    }
    if (local_11e < 200) {
      local_6 = (int *)0x4;
      iStack_8 = 0x22b2;
      pcStack_a = (char *)0xb1c0;
      FUN_3ab8_0000();
    }
    local_6 = (int *)*(undefined2 *)0xd12;
    iStack_8 = 0x22b2;
    pcStack_a = (char *)0xb1ca;
    func_0x000276be();
    *(undefined2 *)0xd12 = 0;
    uVar3 = 1;
  }
  return uVar3;
}



/* 3ab8:0658  FUN_3ab8_0658  280 bytes, 2 callers */

void __cdecl16far FUN_3ab8_0658(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_76;
  undefined1 local_74 [4];
  int local_70;
  undefined1 local_6e [4];
  undefined2 local_6a;
  undefined1 local_68 [2];
  undefined1 local_66 [84];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined2 *puStack_6;
  
  puStack_6 = (undefined2 *)0xb1e3;
  FUN_21f2_0ebc();
  local_70 = 7;
  puStack_6 = (undefined2 *)0x652;
  puStack_8 = (undefined1 *)0x640;
  puStack_a = (undefined1 *)0x6ddd;
  puStack_c = local_66;
  uStack_e = 0x22b2;
  uStack_10 = 0xb1fe;
  FUN_21f2_3454();
  for (local_6a = 1; local_6a <= local_70; local_6a = local_6a + 1) {
    *(char *)0x6ded = (char)local_6a + '?';
    *(char *)0x6df0 = (char)local_6a + '_';
    puStack_6 = (undefined2 *)0x6dec;
    puStack_8 = local_66;
    puStack_a = (undefined1 *)0x22b2;
    puStack_c = (undefined1 *)0xb223;
    FUN_21f2_2d26();
  }
  *(char *)0x6ded = (char)local_70 + '@';
  puStack_6 = (undefined2 *)0x6dec;
  puStack_8 = local_66;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0xb245;
  FUN_21f2_2d26();
  puStack_6 = (undefined2 *)local_66;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xb250;
  iVar2 = func_0x00024ce4();
  local_68[iVar2 + -1] = 0;
  puStack_6 = (undefined2 *)0x6de6;
  puStack_8 = local_66;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0xb264;
  FUN_21f2_2d26();
  uVar3 = 0x22b2;
LAB_3ab8_06e6:
  do {
    do {
      puStack_6 = (undefined2 *)local_68;
      puStack_8 = local_74;
      puStack_a = local_6e;
      puStack_c = local_66;
      *(undefined2 *)0xc28 = 1;
      uStack_e = 1;
      uVar4 = 0x1bb4;
      uStack_12 = 0xb282;
      uStack_10 = uVar3;
      local_76 = FUN_1def_0904();
      *(undefined2 *)0xc28 = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_76 == -1) {
        return;
      }
      uVar3 = uVar4;
    } while ((10 < local_76) || (local_76 < 1));
    if (local_70 - local_76 == -1) {
      pcVar1 = (code *)swi(0x3f);
      local_76 = (*pcVar1)();
      if (local_76 < 1) goto LAB_3ab8_06e6;
    }
    if (0 < local_76) {
      puStack_6 = (undefined2 *)0x1bb4;
      puStack_8 = (undefined1 *)0xb2c5;
      func_0x0000c3ca();
      puStack_6 = &local_6a;
      puStack_8 = (undefined1 *)local_76;
      puStack_a = (undefined1 *)0x885;
      puStack_c = (undefined1 *)0xb2d1;
      FUN_21f2_5962();
      puStack_6 = (undefined2 *)0x31;
      puStack_8 = (undefined1 *)0xe82;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0xb2e0;
      FUN_21f2_50fe();
      puStack_6 = &local_6a;
      puStack_8 = (undefined1 *)(*(byte *)0xc13f - 0x40);
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0xb2f4;
      FUN_21f2_5962();
      return;
    }
  } while( true );
}



/* 3ab8:077b  FUN_3ab8_077b  77 bytes, 2 callers */

bool __cdecl16far FUN_3ab8_077b(byte param_1)

{
  undefined2 unaff_DS;
  undefined1 local_2e [34];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uStack_6 = 0xb306;
  FUN_21f2_0ebc();
  *(undefined2 *)0xc22 = 0;
  puStack_4 = (undefined1 *)(uint)param_1;
  uStack_6 = 0x6df3;
  uStack_8 = 0xbf48;
  uStack_a = 0x22b2;
  uStack_c = 0xb31f;
  FUN_21f2_3454();
  puStack_4 = local_2e;
  uStack_6 = 0x10;
  uStack_8 = 0xbf48;
  uStack_a = 0x22b2;
  uStack_c = 0xb333;
  func_0x000276d7();
  return *(int *)0xc22 != 0;
}



/* 3ab8:07c8  FUN_3ab8_07c8  1357 bytes, 1 callers */

void __cdecl16far FUN_3ab8_07c8(int param_1)

{
  code *pcVar1;
  undefined1 extraout_AH;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined1 *puStack_7a4;
  undefined1 local_7a2 [80];
  undefined1 local_752 [18];
  undefined1 local_740 [160];
  undefined1 local_6a0 [46];
  int local_672;
  int local_670;
  undefined1 local_66e [100];
  int local_60a;
  int local_608;
  int local_606;
  int local_604;
  int local_602;
  int local_600 [2];
  int aiStack_5fc [755];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined1 *puStack_12;
  int *piStack_10;
  undefined1 *puStack_e;
  int iStack_c;
  int *piStack_a;
  int *piStack_8;
  int *piStack_6;
  
  piStack_6 = (int *)0xb353;
  FUN_21f2_0ebc();
  piStack_6 = (int *)0x22b2;
  piStack_8 = (int *)0xb359;
  func_0x0000c3ca();
  local_606 = 1;
  piStack_6 = &local_606;
  piStack_8 = (int *)0x6dfc;
  piStack_a = (int *)0xeb4;
  iStack_c = 0x885;
  puStack_e = (undefined1 *)0xb371;
  FUN_21f2_34ae();
  local_604 = local_606;
  piStack_6 = (int *)0x22b2;
  while( true ) {
    piStack_8 = (int *)0xb381;
    func_0x0000c3ca();
    if (*(int *)0x158 != 0) {
      return;
    }
    piStack_6 = (int *)CONCAT11(extraout_AH,*(undefined1 *)0xe82);
    piStack_8 = (int *)0x885;
    piStack_a = (int *)0xb393;
    iVar2 = FUN_3ab8_077b();
    if (iVar2 == 0) break;
    piStack_6 = (int *)0x885;
    piStack_8 = (int *)0xb39c;
    FUN_3ab8_0658();
    piStack_6 = (int *)0x885;
  }
  piStack_6 = (int *)0x0;
  piStack_8 = (int *)0x885;
  uVar5 = 0x885;
  piStack_a = (int *)0xb3a6;
  func_0x0000daa6();
  if (param_1 == 0) {
    piStack_6 = (int *)0x885;
    piStack_8 = (int *)0xb3b2;
    func_0x0001bb8f();
    piStack_6 = (int *)0x1bb4;
    uVar5 = 0x1bb4;
    piStack_8 = (int *)0xb3b7;
    func_0x0001bba4();
  }
  if (*(byte *)0xb782 < 4) {
    piStack_6 = (int *)*(int *)0x1b40;
    piStack_8 = (int *)*(int *)0x1b3e;
    iVar2 = *(int *)0xa5a;
    iStack_c = 0;
  }
  else {
    piStack_6 = (int *)(*(int *)0x1b40 + -1);
    piStack_8 = (int *)(*(int *)0x1b3e + -1);
    iVar2 = *(int *)0xa5e;
    iStack_c = *(int *)0xa5c + 1;
  }
  piStack_a = (int *)(iVar2 + 1);
  piStack_10 = (int *)0xb3e8;
  puStack_e = (undefined1 *)uVar5;
  func_0x0000a76b();
  piStack_6 = (int *)0x885;
  piStack_8 = (int *)0xb3f0;
  func_0x0000a799();
  piStack_6 = (int *)0x885;
  uVar5 = 0x885;
  piStack_8 = (int *)0xb3f5;
  func_0x0000c354();
  do {
    piStack_8 = (int *)0xb3fa;
    piStack_6 = (int *)uVar5;
    func_0x0000c3ca();
    piStack_6 = (int *)(*(int *)0xa5a + -1);
    piStack_8 = (int *)(*(int *)0x1b3e + -1);
    piStack_a = (int *)(*(int *)0xa5e + 1);
    iStack_c = *(int *)0xa58 + 1;
    puStack_e = (undefined1 *)0x885;
    piStack_10 = (int *)0xb413;
    func_0x0000a76b();
    piStack_6 = (int *)0x885;
    piStack_8 = (int *)0xb41b;
    func_0x0000c354();
    piStack_6 = (int *)0x2;
    piStack_8 = (int *)0x11;
    piStack_a = (int *)0x885;
    iStack_c = 0xb428;
    FUN_1000_0599();
    piStack_6 = (int *)0xdef;
    piStack_8 = (int *)0xb42f;
    func_0x00010526();
    piStack_6 = (int *)0xffff;
    piStack_8 = (int *)0x7;
    piStack_a = (int *)*(undefined2 *)0xa5e;
    iStack_c = *(undefined2 *)0x1b3e;
    puStack_e = (undefined1 *)*(undefined2 *)0xa5e;
    piStack_10 = (int *)0x0;
    puStack_12 = (undefined1 *)0xdef;
    uStack_14 = 0xb44b;
    func_0x0000def0();
    local_670 = 3;
    do {
      piStack_6 = (int *)local_670;
      piStack_8 = (int *)0x11;
      piStack_a = (int *)0xdef;
      iStack_c = 0xb461;
      FUN_1000_0599();
      piStack_6 = (int *)0xdef;
      piStack_8 = (int *)0xb468;
      func_0x00010526();
      local_670 = local_670 + 1;
    } while (local_670 < 0x19);
    piStack_6 = (int *)0xffff;
    piStack_8 = (int *)0x7;
    piStack_a = (int *)*(undefined2 *)0xa60;
    iStack_c = *(undefined2 *)0x1b3e;
    puStack_e = (undefined1 *)*(undefined2 *)0xa60;
    piStack_10 = (int *)0x0;
    puStack_12 = (undefined1 *)0xdef;
    uStack_14 = 0xb48f;
    func_0x0000def0();
    piStack_6 = (int *)0x652;
    piStack_8 = (int *)(uint)*(byte *)0xe82;
    piStack_a = (int *)0x640;
    iStack_c = 0x600;
    puStack_e = (undefined1 *)0x600;
    piStack_10 = (int *)0x6dff;
    puStack_12 = local_66e;
    uStack_14 = 0xdef;
    uStack_16 = 0xb4b3;
    FUN_21f2_3454();
    if (*(int *)0xce6 == 0) {
      piStack_6 = (int *)0x87a;
      piStack_8 = (int *)local_66e;
      piStack_a = (int *)0x22b2;
      iStack_c = 0xb4cb;
      FUN_21f2_2d26();
      piStack_6 = (int *)0x6e21;
      piStack_8 = (int *)local_66e;
      piStack_a = (int *)0x22b2;
      iStack_c = 0xb4db;
      FUN_21f2_2d26();
    }
    piStack_6 = (int *)local_66e;
    piStack_8 = (int *)0x5;
    piStack_a = (int *)0x22b2;
    uVar5 = 0x1bb4;
    iStack_c = -0x4b15;
    FUN_1def_07a4();
    for (local_60a = 1; local_60a < 0x33; local_60a = local_60a + 1) {
      piStack_6 = (int *)local_740;
      piStack_8 = (int *)local_60a;
      iStack_c = 0xb590;
      piStack_a = (int *)uVar5;
      FUN_3ab8_040d();
      piStack_6 = (int *)local_6a0;
      piStack_8 = (int *)0x10;
      piStack_a = (int *)local_740;
      puStack_e = (undefined1 *)0xb5a5;
      iStack_c = uVar5;
      iVar2 = func_0x000276d7();
      if (iVar2 == 0) {
        piStack_6 = (int *)local_740;
        piStack_8 = (int *)0xebc;
        piStack_a = (int *)0xbf48;
        iStack_c = 0x22b2;
        puStack_e = (undefined1 *)0xb5be;
        FUN_21f2_3454();
        piStack_6 = (int *)local_6a0;
        piStack_8 = (int *)0x0;
        piStack_a = (int *)0xbf48;
        iStack_c = 0x22b2;
        puStack_e = (undefined1 *)0xb5d2;
        iVar2 = func_0x000276d7();
        if (iVar2 == 0) {
          piStack_6 = (int *)0x254;
          piStack_8 = (int *)0xbf48;
          piStack_a = (int *)0x22b2;
          iStack_c = -0x4a17;
          piStack_6 = (int *)FUN_21f2_1348();
          *(int *)0xd70 = (int)piStack_6;
          if (piStack_6 == (int *)0x0) {
            piStack_6 = (int *)0x5;
            piStack_8 = (int *)0x22b2;
            piStack_a = (int *)0xb5fd;
            FUN_3ab8_0000();
          }
          else {
            piStack_8 = (int *)0x64;
            piStack_a = (int *)0xbf48;
            iStack_c = 0x22b2;
            puStack_e = (undefined1 *)0xb504;
            func_0x0002509c();
            *(undefined1 *)0xbf52 = 0;
            piStack_6 = (int *)0xbf48;
            piStack_8 = (int *)0x6e27;
            piStack_a = aiStack_5fc + local_60a * 0xf;
            iStack_c = 0x22b2;
            puStack_e = (undefined1 *)0xb527;
            FUN_21f2_3454();
            piStack_6 = (int *)*(undefined2 *)0xd70;
            piStack_8 = (int *)0x22b2;
            piStack_a = (int *)0xb533;
            FUN_21f2_1262();
            *(undefined2 *)0xd70 = 0;
          }
        }
        else {
          piStack_6 = (int *)local_60a;
          piStack_8 = (int *)0x6e2d;
          piStack_a = aiStack_5fc + local_60a * 0xf;
          iStack_c = 0x22b2;
          puStack_e = (undefined1 *)0xb557;
          FUN_21f2_3454();
        }
      }
      else {
        piStack_6 = (int *)0x6e36;
        piStack_8 = aiStack_5fc + local_60a * 0xf;
        piStack_a = (int *)0x22b2;
        iStack_c = -0x4a8d;
        FUN_21f2_3454();
      }
      uVar5 = 0x22b2;
    }
LAB_3ab8_0d58:
    do {
      do {
        if (*(int *)0x158 != 0) {
LAB_3ab8_0ba9:
          if ((local_606 < 1) || (0x32 < local_606)) {
            local_606 = 1;
          }
          piStack_6 = (int *)local_740;
          piStack_8 = (int *)local_606;
          iStack_c = 0xb74a;
          piStack_a = (int *)uVar5;
          FUN_3ab8_040d();
LAB_3ab8_0bcc:
          piStack_6 = (int *)0x0;
          uVar6 = 0x885;
          piStack_a = (int *)0xb754;
          piStack_8 = (int *)uVar5;
          func_0x0000daa6();
          *(undefined2 *)0x6d4e = 0;
          *(undefined2 *)0x6d4c = 1;
          *(undefined2 *)0x6d50 = 1;
          for (local_670 = 2; local_670 < 0x19; local_670 = local_670 + 1) {
            piStack_6 = (int *)local_670;
            piStack_8 = (int *)0x11;
            iStack_c = 0xb918;
            piStack_a = (int *)uVar6;
            FUN_1000_0599();
            piStack_6 = (int *)0xdef;
            uVar6 = 0xdef;
            piStack_8 = (int *)0xb91f;
            func_0x00010526();
          }
          uVar5 = uVar6;
          if (param_1 == 0) {
            uVar5 = 0x11f2;
            piStack_8 = (int *)0xb92c;
            piStack_6 = (int *)uVar6;
            FUN_10ad_18a4();
          }
          if (*(int *)0x158 == 0) {
            return;
          }
          piStack_6 = (int *)0x0;
          piStack_a = (int *)0xb93b;
          piStack_8 = (int *)uVar5;
          FUN_13bf_0b1b();
          *(undefined2 *)0xbc0 = 1;
          return;
        }
        piStack_8 = (int *)0xb8e6;
        piStack_6 = (int *)uVar5;
        FUN_3ab8_1c27();
        *(undefined2 *)0xc22 = 1;
        if (local_606 < 10) {
          piStack_8 = (int *)0x6e3c;
        }
        else {
          piStack_8 = (int *)0x6e46;
        }
        piStack_6 = (int *)local_606;
        piStack_a = (int *)local_752;
        puStack_e = (undefined1 *)0xb612;
        iStack_c = uVar5;
        FUN_21f2_3454();
        piStack_6 = (int *)local_752;
        piStack_8 = (int *)0xe82;
        piStack_a = (int *)local_7a2;
        iStack_c = 0x22b2;
        puStack_e = (undefined1 *)0xb628;
        func_0x0001263c();
        piStack_6 = (int *)0x0;
        piStack_8 = (int *)0x7;
        piStack_a = (int *)0x2;
        iStack_c = 0x12;
        puStack_e = local_7a2;
        piStack_10 = (int *)0x11f2;
        puStack_12 = (undefined1 *)0xb644;
        FUN_1000_02b5();
        for (local_60a = 1; uVar5 = 0xdef, local_60a < 0x33; local_60a = local_60a + 1) {
          local_670 = ((local_60a + -1) % 5) * 0xc + 0x14;
          local_672 = ((local_60a + -1) / 5) * 2 + 5;
          piStack_6 = aiStack_5fc + local_60a * 0xf;
          piStack_8 = (int *)0x6e50;
          piStack_a = (int *)0xbf48;
          iStack_c = 0xdef;
          puStack_e = (undefined1 *)0xb6b8;
          FUN_21f2_3454();
          if (local_60a == local_606) {
            piStack_6 = (int *)0xffff;
          }
          else {
            piStack_6 = (int *)0x0;
          }
          piStack_8 = (int *)0x7;
          piStack_a = (int *)local_672;
          iStack_c = local_670;
          puStack_e = (undefined1 *)0xbf48;
          piStack_10 = (int *)0x22b2;
          puStack_12 = (undefined1 *)0xb667;
          FUN_1000_02b5();
        }
        *(undefined2 *)0xc28 = 1;
        piStack_6 = &local_602;
        piStack_8 = local_600;
        piStack_a = &local_608;
        iStack_c = 0x32;
        puStack_e = (undefined1 *)0x2d;
        piStack_10 = &local_604;
        puStack_12 = local_66e;
        uStack_14 = 0xdef;
        uStack_16 = 0xb6f5;
        local_60a = FUN_3ab8_1cb7();
        *(undefined2 *)0xc28 = 0;
        if ((*(int *)0x158 != 0) || (local_60a == -1)) goto LAB_3ab8_0ba9;
      } while (local_600[0] <= *(int *)0xa58);
      if ((local_60a == 1) || (local_60a == 0xd)) goto LAB_3ab8_0ba9;
      if (local_60a != 2) {
        if (local_60a == 3) {
          piStack_6 = (int *)0xdef;
          piStack_8 = (int *)0xb792;
          FUN_3ab8_0658();
          break;
        }
        if (local_60a == 4) {
          piStack_6 = (int *)0x6e56;
          piStack_8 = (int *)local_7a2;
          pcVar1 = (code *)swi(0x3f);
          (*pcVar1)();
          if (*(int *)0x158 != 0) goto LAB_3ab8_0ba9;
          piStack_6 = (int *)0xdef;
          piStack_8 = (int *)0xb7be;
          func_0x0001bba4();
          if (*(byte *)0xb782 < 4) {
            piStack_6 = (int *)*(int *)0x1b40;
            piStack_8 = (int *)*(int *)0x1b3e;
            iVar2 = *(int *)0xa5a;
            iStack_c = 0;
          }
          else {
            piStack_6 = (int *)(*(int *)0x1b40 + -1);
            piStack_8 = (int *)(*(int *)0x1b3e + -1);
            iVar2 = *(int *)0xa5a;
            iStack_c = *(int *)0xa5c + 1;
          }
          piStack_a = (int *)(iVar2 + 1);
          puStack_e = (undefined1 *)0x1bb4;
          piStack_10 = (int *)0xb7ef;
          func_0x0000a76b();
          piStack_6 = (int *)0x885;
          piStack_8 = (int *)0xb7f7;
          func_0x0000a799();
          piStack_6 = (int *)0x885;
          piStack_8 = (int *)0xb7fc;
          func_0x0000c354();
          piStack_6 = (int *)0x5c;
          piStack_8 = (int *)0xe82;
          piStack_a = (int *)0x885;
          iStack_c = 0xb809;
          puStack_7a4 = (undefined1 *)FUN_21f2_3be6();
          if (puStack_7a4 != (undefined1 *)0x0) {
            piStack_8 = (int *)0x6e5b;
            puVar3 = puStack_7a4 + 1;
            iStack_c = 0x22b2;
            puStack_e = (undefined1 *)0xb820;
            piStack_a = (int *)puVar3;
            iVar2 = func_0x00025bc2();
            if (iVar2 != 0) {
              piStack_a = (int *)0xeae;
              iStack_c = 0x22b2;
              uVar5 = 0x22b2;
              puStack_e = (undefined1 *)0xb830;
              piStack_8 = (int *)puVar3;
              func_0x00024c86();
              if (puStack_7a4[-1] == ':') {
                puStack_7a4 = puVar3;
              }
              *puStack_7a4 = 0;
              goto LAB_3ab8_0bcc;
            }
          }
          piStack_8 = (int *)0x6e62;
          piStack_a = (int *)0xeae;
          iStack_c = 0x22b2;
          uVar5 = 0x22b2;
          puStack_e = (undefined1 *)0xb857;
          FUN_21f2_3454();
          break;
        }
        if (((local_608 == 0) || (local_600[0] < 0x91)) || (local_602 < 0x39)) {
LAB_3ab8_0d36:
          local_606 = -1;
          iVar2 = local_604;
        }
        else {
          local_600[0] = (local_600[0] + -0x90) / 0x60 + 1;
          uVar4 = (int)(local_602 - 0x38U) >> 0xf;
          local_602 = ((int)((local_602 - 0x38U ^ uVar4) - uVar4) >> 5 ^ uVar4) - uVar4;
          local_670 = local_602 * 5 + local_600[0];
          if (((local_670 < 1) || (0x32 < local_670)) || (iVar2 = local_670, 5 < local_600[0]))
          goto LAB_3ab8_0d36;
        }
        local_604 = iVar2;
        if (local_604 == local_606) goto LAB_3ab8_0ba9;
        if (local_604 < 0x33) {
          local_606 = local_604;
        }
        goto LAB_3ab8_0d58;
      }
      piStack_6 = (int *)local_606;
      piStack_8 = (int *)0xdef;
      piStack_a = (int *)0xb77c;
      iVar2 = FUN_3ab8_044c();
    } while (iVar2 == 0);
  } while( true );
}



/* 3ab8:0dc7  FUN_3ab8_0dc7  3506 bytes, 1 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far FUN_3ab8_0dc7(int param_1,int ***param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined2 ****ppppuVar2;
  undefined1 extraout_AH;
  int iVar3;
  uint uVar4;
  int ***pppiVar5;
  undefined2 ****ppppuVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 ***local_5ee [10];
  undefined2 ***local_5da [30];
  undefined2 ****local_59e;
  undefined2 ****local_598;
  undefined2 local_596;
  undefined1 local_590;
  char local_58f;
  undefined1 local_58e;
  undefined2 ***local_572 [10];
  byte local_55d;
  undefined1 local_554 [14];
  undefined2 ****local_546;
  int local_544;
  undefined2 ***local_540 [50];
  int ***local_4dc;
  undefined2 ****local_4da;
  int **local_4d8 [40];
  undefined2 ****local_488;
  undefined2 ****local_486;
  undefined1 local_484 [4];
  undefined2 ***apppuStack_480 [5];
  undefined1 auStack_476 [4];
  char acStack_472 [6];
  undefined1 local_46c [14];
  undefined1 local_45e;
  int **local_74;
  int **local_72 [45];
  undefined2 uStack_18;
  undefined2 uStack_16;
  int ***pppiStack_14;
  undefined2 ****ppppuStack_12;
  int ****ppppiStack_10;
  undefined2 ****local_e;
  undefined2 ****ppppuStack_c;
  undefined2 ****local_a;
  undefined2 local_8;
  int ****local_6;
  
  local_6 = (undefined2 ****)0xb952;
  FUN_21f2_0ebc();
  local_6 = (undefined2 ****)0x0;
  local_8 = (undefined2 *****)0x22b2;
  pppiVar5 = (int ***)0x885;
  local_a = (undefined2 ****)0xb95b;
  func_0x0000daa6();
  if (param_1 == 0) {
    local_6 = (undefined2 ****)0x885;
    local_8 = (undefined2 *****)0xb967;
    func_0x0001bb8f();
    local_6 = (undefined2 ****)0x1bb4;
    pppiVar5 = (int ***)0x1bb4;
    local_8 = (undefined2 *****)0xb96c;
    func_0x0001bba4();
  }
  if (*(byte *)0xb782 < 4) {
    local_6 = (int ****)*(int *)0x1b40;
    local_8 = (undefined2 *****)*(int *)0x1b3e;
    iVar3 = *(int *)0xa5a;
    ppppuStack_c = (undefined2 ****)0x0;
  }
  else {
    local_6 = (int ****)(*(int *)0x1b40 + -1);
    local_8 = (undefined2 *****)(*(int *)0x1b3e + -1);
    iVar3 = *(int *)0xa5a;
    ppppuStack_c = (undefined2 ****)(*(int *)0xa5c + 1);
  }
  local_a = (undefined2 ****)(iVar3 + 1);
  ppppiStack_10 = (int ****)0xb99d;
  local_e = (undefined2 ****)pppiVar5;
  func_0x0000a76b();
  local_6 = (undefined2 ****)0x885;
  local_8 = (undefined2 *****)0xb9a5;
  func_0x0000a799();
  local_6 = (undefined2 ****)0x885;
  local_8 = (undefined2 *****)0xb9aa;
  func_0x0000c354();
  local_6 = (undefined2 ****)0x885;
  local_8 = (undefined2 *****)0xb9af;
  func_0x0000c3ca();
  local_6 = (undefined2 ****)0x2;
  local_8 = (undefined2 *****)0x11;
  local_a = (undefined2 ****)0x885;
  ppppuStack_c = (undefined2 ****)0xb9bc;
  FUN_1000_0599();
  local_6 = (undefined2 ****)0xdef;
  local_8 = (undefined2 *****)0xb9c3;
  func_0x00010526();
  local_6 = (undefined2 ****)0xffff;
  local_8 = (undefined2 *****)0x7;
  local_a = (undefined2 ****)*(undefined2 *)0xa5e;
  ppppuStack_c = (undefined2 ****)*(undefined2 *)0x1b3e;
  local_e = (undefined2 ****)*(undefined2 *)0xa5e;
  ppppiStack_10 = (int ****)0x0;
  ppppuStack_12 = (undefined2 ****)0xdef;
  pppiStack_14 = (int ***)0xb9df;
  func_0x0000def0();
  local_488 = (undefined2 ****)0x3;
  do {
    local_6 = local_488;
    local_8 = (undefined2 *****)0x11;
    local_a = (undefined2 ****)0xdef;
    ppppuStack_c = (undefined2 ****)0xb9f5;
    FUN_1000_0599();
    local_6 = (undefined2 ****)0xdef;
    local_8 = (undefined2 *****)0xb9fc;
    func_0x00010526();
    local_488 = (undefined2 ****)((int)local_488 + 1);
  } while ((int)local_488 < 0x19);
  if (*(int *)0x158 == 0) {
    local_6 = (int ****)CONCAT11(extraout_AH,*(undefined1 *)0xe82);
    local_8 = (undefined2 *****)0xdef;
    local_a = (undefined2 ****)0xba20;
    iVar3 = FUN_3ab8_077b();
    if (iVar3 != 0) {
      return 0xffff;
    }
    local_6 = (undefined2 ****)0x6e6b;
    local_8 = (undefined2 *****)param_3;
    local_a = (undefined2 ****)0xdef;
    ppppuStack_c = (undefined2 ****)0xba37;
    iVar3 = FUN_21f2_2d98();
    if (iVar3 == 0) {
      local_46c[0] = 0;
      local_6 = (undefined2 ****)0x1;
      local_8 = (undefined2 *****)0x22b2;
      local_a = (undefined2 ****)0xba4a;
      FUN_3ab8_0336();
    }
    local_4da = (undefined2 ****)(uint)(iVar3 == 0);
    local_6 = (undefined2 ****)0xeae;
    local_8 = (undefined2 *****)0xe82;
    local_a = local_5da;
    ppppuStack_c = (undefined2 ****)0x22b2;
    local_e = (undefined2 ****)0xba6b;
    func_0x0001263c();
    local_6 = local_572;
    local_8 = (undefined2 *****)0x10;
    local_a = local_5da;
    ppppuStack_c = (undefined2 ****)0x11f2;
    local_e = (undefined2 ****)0xba81;
    iVar3 = func_0x000276d7();
    if (iVar3 != 0) {
      return 0xff9c;
    }
    local_598 = local_4da;
    local_6 = local_5da;
    local_8 = (undefined2 *****)0xbf48;
    local_a = (undefined2 ****)0x22b2;
    ppppuStack_c = (undefined2 ****)0xbaa4;
    func_0x00024c86();
    local_6 = (undefined2 ****)0x6e70;
    local_8 = (undefined2 *****)0xbf48;
    local_a = (undefined2 ****)0x22b2;
    ppppuStack_c = (undefined2 ****)0xbab3;
    FUN_21f2_2d26();
    local_6 = (int ****)*(undefined2 *)0x6d62;
    local_8 = (undefined2 *****)0xbf48;
    local_a = (undefined2 ****)0x22b2;
    ppppuStack_c = (undefined2 ****)0xbac2;
    FUN_21f2_2d26();
    local_6 = local_572;
    local_8 = (undefined2 *****)0x0;
    local_a = (undefined2 ****)0xbf48;
    ppppuStack_c = (undefined2 ****)0x22b2;
    local_e = (undefined2 ****)0xbad5;
    iVar3 = func_0x000276d7();
    if (iVar3 == 0) {
      local_598 = (undefined2 ****)((int)local_598 + 1);
      local_6 = (undefined2 ****)0xd;
      local_8 = (undefined2 *****)local_554;
      iVar3 = (int)local_598 * 0x14;
      local_a = apppuStack_480 + (int)local_598 * 10;
      ppppuStack_c = (undefined2 ****)0x22b2;
      local_e = (undefined2 ****)0xbaff;
      FUN_21f2_2de0();
      acStack_472[iVar3] = '\0';
      if ((local_55d & 1) != 0) {
        acStack_472[iVar3] = '\x01';
      }
    }
    do {
      if (local_598 == (undefined2 ****)0x0) break;
      local_6 = local_572;
      local_8 = (undefined2 *****)0x22b2;
      local_a = (undefined2 ****)0xbb24;
      iVar3 = func_0x000276cc();
      if (iVar3 != 0) break;
      local_6 = (undefined2 ****)0xd;
      local_8 = (undefined2 *****)local_554;
      local_598 = (undefined2 ****)((int)local_598 + 1);
      iVar3 = (int)local_598 * 0x14;
      local_a = apppuStack_480 + (int)local_598 * 10;
      ppppuStack_c = (undefined2 ****)0x22b2;
      local_e = (undefined2 ****)0xbb63;
      FUN_21f2_2de0();
      acStack_472[iVar3] = '\0';
      if ((local_55d & 1) != 0) {
        acStack_472[iVar3] = '\x01';
      }
    } while ((int)local_598 < 0x32);
    if (local_598 == (undefined2 ****)0x0) {
      *(undefined2 *)0x6d4c = 1;
      local_e = (undefined2 ****)0x1;
      *(undefined2 *)0x6d4e = 0;
    }
    else {
      local_6 = local_598;
      local_8 = (undefined2 *****)local_484;
      local_a = (undefined2 ****)0x22b2;
      ppppuStack_c = (undefined2 ****)0xbb3d;
      FUN_3ab8_02b0();
    }
    local_59e = local_598;
    if (local_4da == (undefined2 ****)0x0) {
      if ((int)local_598 < 1) {
        return 0xff9c;
      }
    }
    else {
      local_6 = (undefined2 ****)0x7f2;
      local_8 = (undefined2 *****)local_5ee;
      local_a = (undefined2 ****)0x22b2;
      ppppuStack_c = (undefined2 ****)0xbbb4;
      FUN_21f2_3454();
      local_6 = (undefined2 ****)0x6e74;
      local_8 = (undefined2 *****)local_5ee;
      local_a = (undefined2 ****)0x22b2;
      ppppuStack_c = (undefined2 ****)0xbbc4;
      FUN_21f2_2d26();
      if ((int)local_598 < 0x33) {
        *(undefined2 *)0x6d4c = 1;
        local_e = (undefined2 ****)0x1;
        *(undefined2 *)0x6d4e = 0;
        local_6 = local_5ee;
        local_8 = (undefined2 *****)local_46c;
        local_a = (undefined2 ****)0x22b2;
        ppppuStack_c = (undefined2 ****)0xbbeb;
        func_0x00024c86();
        local_45e = 0;
      }
    }
    for (local_486 = (undefined2 ****)0x1; (int)local_486 <= (int)local_59e;
        local_486 = (undefined2 ****)((int)local_486 + 1)) {
      local_4dc = (int ***)local_486;
      for (local_488 = (undefined2 ****)0x1; (int)local_488 < 0xb;
          local_488 = (undefined2 ****)((int)local_488 + 1)) {
        if (*(char *)((int)apppuStack_480 + (int)(local_488 + (int)local_486 * 10)) == '.') {
          *(undefined1 *)((int)apppuStack_480 + (int)(local_488 + (int)local_486 * 10)) = 0;
          break;
        }
        auStack_476[(int)local_486 * 0x14] = 0;
      }
    }
    *(undefined2 *)0xbc0 = 1;
    *(undefined2 *)0xc08 = 1;
    local_6 = (undefined2 ****)0x22b2;
    local_8 = (undefined2 *****)0xbc58;
    func_0x0000c3ca();
    local_6 = local_5da;
    local_8 = (undefined2 *****)0xebc;
    local_a = (undefined2 ****)0xbf48;
    ppppuStack_c = (undefined2 ****)0x885;
    local_e = (undefined2 ****)0xbc6a;
    FUN_21f2_3454();
    local_6 = local_572;
    local_8 = (undefined2 *****)0x0;
    local_a = (undefined2 ****)0xbf48;
    ppppuStack_c = (undefined2 ****)0x22b2;
    local_e = (undefined2 ****)0xbc7e;
    iVar3 = func_0x000276d7();
    if (iVar3 == 0) {
      local_6 = (undefined2 ****)0x254;
      local_8 = (undefined2 *****)0xbf48;
      local_a = (undefined2 ****)0x22b2;
      ppppuStack_c = (undefined2 ****)0xbc92;
      local_6 = (int ****)FUN_21f2_1348();
      *(int *)0xd70 = (int)local_6;
      if (local_6 == (undefined2 ****)0x0) {
        local_6 = (undefined2 ****)0x5;
        local_8 = (undefined2 *****)0x22b2;
        local_a = (undefined2 ****)0xbca3;
        FUN_3ab8_0000();
      }
      else {
        local_8 = (undefined2 *****)0x64;
        local_a = (undefined2 ****)0xbf48;
        ppppuStack_c = (undefined2 ****)0x22b2;
        local_e = (undefined2 ****)0xbcb4;
        func_0x0002509c();
        *(undefined1 *)0xbf52 = 0;
        local_6 = (int ****)*(undefined2 *)0xd70;
        local_8 = (undefined2 *****)0x22b2;
        local_a = (undefined2 ****)0xbcc5;
        FUN_21f2_1262();
        *(undefined2 *)0xd70 = 0;
      }
    }
    else {
      local_590 = *(undefined1 *)0xeb4;
      local_58f = *(char *)0xeb5;
      local_58e = 0;
      if (local_58f == '_') {
        local_58f = '\0';
      }
      local_6 = (int ****)&local_590;
      local_8 = (undefined2 *****)0x6e7a;
      local_a = (undefined2 ****)0xbf48;
      ppppuStack_c = (undefined2 ****)0x22b2;
      local_e = (undefined2 ****)0xbcfc;
      FUN_21f2_3454();
    }
    if (*(int *)0x158 == 0) {
      local_6 = local_59e;
      local_8 = (undefined2 *****)0xbf48;
      local_a = (undefined2 ****)0x6e84;
      ppppuStack_c = (undefined2 ****)local_4d8;
      local_e = (undefined2 ****)0x22b2;
      ppppiStack_10 = (int ****)0xbd1f;
      FUN_21f2_3454();
      local_6 = (undefined2 ****)0x0;
      local_8 = (undefined2 *****)0x7;
      local_a = (undefined2 ****)*(undefined2 *)0x1b42;
      ppppuStack_c = (undefined2 ****)0xa;
      local_e = local_5da;
      ppppiStack_10 = (int ****)0x22b2;
      ppppuStack_12 = (undefined2 ****)0xbd3b;
      FUN_1000_02b5();
      local_6 = (undefined2 ****)0xffff;
      local_8 = (undefined2 *****)0x7;
      local_a = (undefined2 ****)*(undefined2 *)0xa60;
      ppppuStack_c = (undefined2 ****)*(undefined2 *)0x1b3e;
      local_e = (undefined2 ****)*(undefined2 *)0xa60;
      ppppiStack_10 = (int ****)0x0;
      ppppuStack_12 = (undefined2 ****)0xdef;
      pppiStack_14 = (int ***)0xbd5a;
      func_0x0000def0();
      local_6 = (undefined2 ****)0x652;
      local_a = (undefined2 ****)0x652;
      local_8 = (undefined2 *****)CONCAT11(6,*(byte *)0xe82);
      ppppuStack_c = (undefined2 ****)(uint)*(byte *)0xe82;
      local_e = (undefined2 ****)0x640;
      ppppiStack_10 = (int ****)0x302;
      ppppuStack_12 = (undefined2 ****)0x6e8e;
      pppiStack_14 = (int ***)local_540;
      uStack_16 = 0xdef;
      uStack_18 = 0xbd85;
      FUN_21f2_3454();
      local_6 = local_540;
      local_8 = (undefined2 *****)0x3;
      local_a = (undefined2 ****)0x22b2;
      ppppuVar6 = (undefined2 ****)0x1bb4;
      ppppuStack_c = (undefined2 ****)0xbd96;
      FUN_1def_07a4();
      do {
        local_e = (undefined2 ****)*(uint *)0x6d4c;
        while (*(char *)0x1174 == '\0') {
          local_8 = (undefined2 *****)0xbdac;
          local_6 = ppppuVar6;
          FUN_3ab8_1c27();
          local_6 = (undefined2 ****)0x0;
          local_8 = (undefined2 *****)0x7;
          local_a = (undefined2 ****)0x2;
          ppppuStack_c = (undefined2 ****)0x3c;
          local_e = (undefined2 ****)local_4d8;
          ppppuStack_12 = (undefined2 ****)0xbdc5;
          ppppiStack_10 = ppppuVar6;
          FUN_1000_02b5();
          for (local_486 = (undefined2 ****)0x1; ppppuVar6 = (undefined2 ****)0xdef,
              (int)local_486 <= (int)local_598; local_486 = (undefined2 ****)((int)local_486 + 1)) {
            local_488 = (undefined2 ****)((((int)local_486 + -1) % 5) * 0xc + 0x14);
            local_4dc = (int ***)((((int)local_486 + -1) / 5) * 2 + 5);
            iVar3 = (int)local_486 * 0x14;
            local_6 = apppuStack_480 + (int)local_486 * 10;
            local_8 = (undefined2 *****)0x6eb7;
            local_a = (undefined2 ****)0xbf48;
            ppppuStack_c = (undefined2 ****)0xdef;
            local_e = (undefined2 ****)0xbe3c;
            FUN_21f2_3454();
            local_596 = 7;
            if (acStack_472[iVar3] != '\0') {
              local_596 = 4;
            }
            if ((undefined2 ****)*(int *)0x6d4c == local_486) {
              local_6 = (undefined2 ****)0xffff;
            }
            else {
              local_6 = (undefined2 ****)0x0;
            }
            local_8 = (undefined2 *****)local_596;
            local_a = (undefined2 ****)local_4dc;
            ppppuStack_c = local_488;
            local_e = (undefined2 ****)0xbf48;
            ppppiStack_10 = (undefined2 ****)0x22b2;
            ppppuStack_12 = (undefined2 ****)0xbde8;
            FUN_1000_02b5();
          }
          local_6 = (int ****)&local_a;
          local_8 = &local_6;
          local_a = (undefined2 ****)&local_74;
          ppppuStack_c = local_598;
          local_e = (undefined2 ****)0x2d;
          ppppiStack_10 = (int ****)&local_e;
          ppppuStack_12 = local_540;
          pppiStack_14 = (int ***)0xdef;
          uStack_16 = 0xbe86;
          local_486 = (undefined2 ****)FUN_3ab8_1cb7();
          if ((*(int *)0x158 != 0) || (local_486 == (undefined2 ****)0xffff)) goto LAB_3ab8_0e8e;
          if (*(int *)0xa58 < (int)local_6) {
            if ((local_486 == (undefined2 ****)0x1) || (local_486 == (undefined2 ****)0xd)) {
              local_486 = (undefined2 ****)0x1;
              break;
            }
            if (local_486 == (undefined2 ****)0x2) {
LAB_3ab8_1356:
              local_8 = (undefined2 *****)0xbeda;
              local_6 = ppppuVar6;
              FUN_3ab8_0658();
              return 100;
            }
            if (local_486 == (undefined2 ****)0x3) {
              return 100;
            }
            if (((local_74 == (int **)0x0) || ((int)local_6 < 0x91)) || ((int)local_a < 0x39)) {
LAB_3ab8_13ba:
              *(undefined2 *)0x6d4c = 0xffff;
              ppppuVar2 = local_e;
            }
            else {
              iVar3 = (int)(local_6 + -0x48) / 0x60 + 1;
              uVar4 = (int)(local_a + -0x1c) >> 0xf;
              local_a = (undefined2 ****)
                        (((int)(((uint)(local_a + -0x1c) ^ uVar4) - uVar4) >> 5 ^ uVar4) - uVar4);
              local_488 = (undefined2 ****)((int)local_a * 5 + iVar3);
              if ((((int)local_488 < 1) || ((int)local_598 < (int)local_488)) ||
                 (ppppuVar2 = local_488, 5 < iVar3)) goto LAB_3ab8_13ba;
            }
            local_e = ppppuVar2;
            if ((undefined2 ****)*(uint *)0x6d4c == local_e) break;
            if ((int)local_e <= (int)local_598) {
              *(uint *)0x6d4c = (uint)local_e;
            }
          }
        }
        if (*(char *)0x1174 != '\0') {
LAB_3ab8_1346:
          for (local_486 = (undefined2 ****)0x3; (int)local_486 < 0x12;
              local_486 = (undefined2 ****)((int)local_486 + 7)) {
            local_6 = local_486;
            local_8 = (undefined2 *****)0x11;
            ppppuStack_c = (undefined2 ****)0xbf7a;
            local_a = ppppuVar6;
            FUN_1000_0599();
            local_6 = (undefined2 ****)0xdef;
            ppppuVar6 = (undefined2 ****)0xdef;
            local_8 = (undefined2 *****)0xbf81;
            func_0x00010526();
          }
          local_6 = (int ****)(*(int *)0xa5a + -1);
          local_8 = (undefined2 *****)(*(int *)0x1b3e + -1);
          local_a = (undefined2 ****)(*(int *)0xa5e + 1);
          ppppuStack_c = (undefined2 ****)(*(int *)0xa58 + 1);
          ppppiStack_10 = (int ****)0xbf9c;
          local_e = ppppuVar6;
          func_0x0000a76b();
          local_6 = (undefined2 ****)0x0;
          local_8 = (undefined2 *****)0x7;
          local_a = (undefined2 ****)0x2;
          ppppuStack_c = (undefined2 ****)0x3c;
          local_e = (undefined2 ****)local_4d8;
          ppppiStack_10 = (int ****)0x885;
          ppppuStack_12 = (undefined2 ****)0xbfb8;
          FUN_1000_02b5();
          if (*(int *)0x6d4e + 0xf < (int)local_598) {
            local_6 = (undefined2 ****)0x6ebd;
          }
          else {
            local_6 = (undefined2 ****)0x6ec7;
          }
          local_8 = (undefined2 *****)0xbf48;
          local_a = (undefined2 ****)0xdef;
          ppppuStack_c = (undefined2 ****)0xbfd9;
          FUN_21f2_3454();
          local_6 = (undefined2 ****)0x6ed1;
          local_8 = (undefined2 *****)0xbf48;
          local_a = (undefined2 ****)0x22b2;
          ppppuStack_c = (undefined2 ****)0xbfe8;
          FUN_21f2_2d26();
          if (*(int *)0x6d4e < 2) {
            local_6 = (undefined2 ****)0x6ee1;
          }
          else {
            local_6 = (undefined2 ****)0x6ed6;
          }
          local_8 = (undefined2 *****)0xbf48;
          local_a = (undefined2 ****)0x22b2;
          ppppuStack_c = (undefined2 ****)0xc003;
          FUN_21f2_2d26();
          local_6 = (undefined2 ****)0x0;
          local_8 = (undefined2 *****)0x6;
          local_a = (undefined2 ****)0x2;
          ppppuStack_c = (undefined2 ****)0x12;
          local_e = (undefined2 ****)0xbf48;
          ppppiStack_10 = (int ****)0x22b2;
          ppppuStack_12 = (undefined2 ****)0xc01d;
          FUN_1000_02b5();
          local_6 = (undefined2 ****)0x0;
          local_8 = (undefined2 *****)0x6;
          local_a = (undefined2 ****)0x18;
          ppppuStack_c = (undefined2 ****)0x12;
          local_e = (undefined2 ****)0xbf48;
          ppppiStack_10 = (int ****)0xdef;
          ppppuStack_12 = (undefined2 ****)0xc038;
          FUN_1000_02b5();
          for (local_486 = (undefined2 ****)0x1; (int)local_486 < 5;
              local_486 = (undefined2 ****)((int)local_486 + 1)) {
            local_488 = (undefined2 ****)((int)local_486 * 0x68 + *(int *)0xa58);
            if ((local_486 == (undefined2 ****)0x1) || (local_486 == (undefined2 ****)0x2)) {
              local_e = (undefined2 ****)0x180;
              ppppuStack_12 = (undefined2 ****)*(undefined2 *)0xa5e;
            }
            else {
              local_e = (undefined2 ****)0x20;
              ppppuStack_12 = (undefined2 ****)0x170;
            }
            local_6 = (undefined2 ****)0x0;
            local_8 = (undefined2 *****)0x0;
            local_a = (undefined2 ****)0x0;
            ppppuStack_c = (undefined2 ****)0x7;
            uStack_16 = 0xdef;
            uStack_18 = 0xc061;
            pppiStack_14 = (int ***)local_488;
            ppppiStack_10 = local_488;
            func_0x0000f350();
          }
          local_486 = (undefined2 ****)0x0;
          do {
            local_6 = (undefined2 ****)0x0;
            local_8 = (undefined2 *****)0x0;
            local_a = (undefined2 ****)0x0;
            ppppuStack_c = (undefined2 ****)0x7;
            local_488 = (undefined2 ****)((int)local_486 * 0x70 + 0x20);
            ppppiStack_10 = (int ****)0x27f;
            pppiStack_14 = (int ***)*(undefined2 *)0xa58;
            uStack_16 = 0xdef;
            uStack_18 = 0xc0cf;
            ppppuStack_12 = local_488;
            local_e = local_488;
            func_0x0000f350();
            local_486 = (undefined2 ****)((int)local_486 + 1);
          } while ((int)local_486 < 4);
          local_6 = (undefined2 ****)0x0;
          local_8 = (undefined2 *****)0x0;
          local_a = (undefined2 ****)0x1;
          ppppuStack_c = (undefined2 ****)0x7;
          local_e = (undefined2 ****)0x180;
          ppppiStack_10 = (int ****)*(undefined2 *)0xa58;
          ppppuStack_12 = (undefined2 ****)*(undefined2 *)0xa5e;
          pppiStack_14 = (int ***)*(undefined2 *)0xa5c;
          uStack_16 = 0xdef;
          uStack_18 = 0xc100;
          func_0x0000f350();
          local_6 = (undefined2 ****)0x0;
          local_8 = (undefined2 *****)0x0;
          local_a = (undefined2 ****)0x1;
          ppppuStack_c = (undefined2 ****)0x7;
          local_e = (undefined2 ****)0x180;
          ppppiStack_10 = (int ****)0x27f;
          ppppuStack_12 = (undefined2 ****)*(int *)0xa5e;
          pppiStack_14 = (int ***)*(int *)0xa58;
          uStack_16 = 0xdef;
          uStack_18 = 0xc121;
          func_0x0000f350();
          local_6 = (undefined2 ****)0xdef;
          local_8 = (undefined2 *****)0xc129;
          func_0x0000a799();
          local_546 = (undefined2 ****)(*(int *)0x6d4e + 0xf);
          if ((int)local_598 < (int)local_546) {
            local_546 = local_598;
          }
          local_486 = (undefined2 ****)*(int *)0x6d4e;
          do {
            do {
              local_486 = (undefined2 ****)((int)local_486 + 1);
              if ((int)local_546 < (int)local_486) goto LAB_3ab8_16c2;
            } while ((local_4da != (undefined2 ****)0x0) && ((int)local_486 < 2));
            local_6 = local_5da;
            local_8 = (undefined2 *****)0x6eec;
            local_a = (undefined2 ****)0xbf48;
            ppppuStack_c = (undefined2 ****)0x885;
            local_e = (undefined2 ****)0xc1c5;
            FUN_21f2_3454();
            local_6 = apppuStack_480 + (int)local_486 * 10;
            local_8 = (undefined2 *****)0xbf48;
            local_a = (undefined2 ****)0x22b2;
            ppppuStack_c = (undefined2 ****)0xc1df;
            FUN_21f2_2d26();
            local_6 = (undefined2 ****)0xbf48;
            local_8 = (undefined2 *****)local_72;
            local_a = (undefined2 ****)0x22b2;
            ppppuStack_c = (undefined2 ****)0xc1ee;
            func_0x00024c86();
            local_6 = (undefined2 ****)0x5c;
            local_8 = (undefined2 *****)0xbf48;
            local_a = (undefined2 ****)0x22b2;
            ppppuStack_c = (undefined2 ****)0xc1fd;
            iVar3 = FUN_21f2_3be6();
            if (iVar3 != 0) {
              local_8 = (undefined2 *****)0x2e;
              local_a = (undefined2 ****)(iVar3 + 1);
              ppppuStack_c = (undefined2 ****)0x22b2;
              local_e = (undefined2 ****)0xc211;
              iVar3 = FUN_21f2_3b7a();
              if (iVar3 == 0) {
                local_8 = (undefined2 *****)0x6ef0;
                local_a = (undefined2 ****)local_72;
                ppppuStack_c = (undefined2 ****)0x22b2;
                local_e = (undefined2 ****)0xc224;
                FUN_21f2_2d26();
                local_8 = (undefined2 *****)*(undefined2 *)0x6d62;
                local_a = (undefined2 ****)local_72;
                ppppuStack_c = (undefined2 ****)0x22b2;
                local_e = (undefined2 ****)0xc233;
                FUN_21f2_2d26();
              }
            }
            local_8 = (undefined2 *****)0x22b2;
            local_a = (undefined2 ****)0xc23a;
            iVar3 = func_0x0000db7a();
            if (iVar3 == 2) break;
            local_8 = (undefined2 *****)((int)local_a + -1);
            local_a = (undefined2 ****)local_72;
            ppppuStack_c = (undefined2 ****)0x0;
            local_e = (undefined2 ****)0x885;
            ppppiStack_10 = (int ****)0xc15e;
            local_6 = (int ****)local_8;
            iVar3 = FUN_3ab8_22d9();
          } while (iVar3 != 2);
LAB_3ab8_16c2:
          uVar7 = 0x885;
          if (*(int *)0x158 != 0) goto LAB_3ab8_18cd;
          local_546 = (undefined2 ****)(*(int *)0x6d4e + 0xf);
          if ((int)local_598 < (int)local_546) {
            local_546 = local_598;
          }
          local_486 = (undefined2 ****)*(int *)0x6d4e;
          while (local_486 = (undefined2 ****)((int)local_486 + 1), (int)local_486 <= (int)local_546
                ) {
            iVar3 = ((int)local_486 - *(int *)0x6d4e) + -1;
            local_488 = (undefined2 ****)((iVar3 % 5) * 0xd + 0x11);
            local_4dc = (int ***)((iVar3 / 5) * 7 + 3);
            iVar3 = (int)local_486 * 0x14;
            local_6 = apppuStack_480 + (int)local_486 * 10;
            local_8 = (undefined2 *****)0x6ef2;
            local_a = (undefined2 ****)0xbf48;
            local_e = (undefined2 ****)0xc2de;
            ppppuStack_c = (undefined2 ****)uVar7;
            FUN_21f2_3454();
            local_596 = 7;
            if (acStack_472[iVar3] != '\0') {
              local_596 = 4;
            }
            if ((undefined2 ****)*(int *)0x6d4c == local_486) {
              local_6 = (undefined2 ****)0xffff;
            }
            else {
              local_6 = (undefined2 ****)0x0;
            }
            local_8 = (undefined2 *****)local_596;
            local_a = (undefined2 ****)local_4dc;
            ppppuStack_c = local_488;
            local_e = (undefined2 ****)0xbf48;
            ppppiStack_10 = (int ****)0x22b2;
            uVar7 = 0xdef;
            ppppuStack_12 = (undefined2 ****)0xc286;
            FUN_1000_02b5();
          }
          local_6 = (undefined2 ****)0x0;
          local_a = (undefined2 ****)0xc30f;
          local_8 = (undefined2 *****)uVar7;
          func_0x0000daa6();
          local_6 = (int ****)*(undefined2 *)0xa5a;
          local_8 = (undefined2 *****)*(undefined2 *)0x1b3e;
          local_a = (undefined2 ****)*(undefined2 *)0xa5e;
          ppppuStack_c = (undefined2 ****)*(undefined2 *)0xa58;
          local_e = (undefined2 ****)0x885;
          ppppiStack_10 = (int ****)0xc325;
          func_0x0000f1d8();
          for (local_486 = (undefined2 ****)0x1; (int)local_486 < 5;
              local_486 = (undefined2 ****)((int)local_486 + 1)) {
            local_488 = (undefined2 ****)((int)local_486 * 0x68 + *(int *)0xa58);
            if ((local_486 == (undefined2 ****)0x1) || (local_486 == (undefined2 ****)0x2)) {
              local_e = (undefined2 ****)0x180;
              ppppuStack_12 = (undefined2 ****)*(undefined2 *)0xa5e;
            }
            else {
              local_e = (undefined2 ****)0x20;
              ppppuStack_12 = (undefined2 ****)0x170;
            }
            local_6 = (undefined2 ****)0x0;
            local_8 = (undefined2 *****)0x0;
            local_a = (undefined2 ****)0x0;
            ppppuStack_c = (undefined2 ****)0x7;
            uStack_16 = 0xdef;
            uStack_18 = 0xc34e;
            pppiStack_14 = (int ***)local_488;
            ppppiStack_10 = local_488;
            func_0x0000f350();
          }
          local_486 = (undefined2 ****)0x0;
          do {
            local_6 = (undefined2 ****)0x0;
            local_8 = (undefined2 *****)0x0;
            local_a = (undefined2 ****)0x0;
            ppppuStack_c = (undefined2 ****)0x7;
            local_488 = (undefined2 ****)((int)local_486 * 0x70 + 0x20);
            ppppiStack_10 = (int ****)0x27f;
            pppiStack_14 = (int ***)*(undefined2 *)0xa58;
            uStack_16 = 0xdef;
            uStack_18 = 0xc3bc;
            ppppuStack_12 = local_488;
            local_e = local_488;
            func_0x0000f350();
            local_486 = (undefined2 ****)((int)local_486 + 1);
          } while ((int)local_486 < 4);
          local_6 = (undefined2 ****)0x0;
          local_8 = (undefined2 *****)0x0;
          local_a = (undefined2 ****)0x1;
          ppppuStack_c = (undefined2 ****)0x7;
          local_e = (undefined2 ****)0x180;
          ppppiStack_10 = (int ****)0x27f;
          ppppuStack_12 = (undefined2 ****)*(undefined2 *)0xa5e;
          pppiStack_14 = (int ***)*(undefined2 *)0xa58;
          uStack_16 = 0xdef;
          uStack_18 = 0xc3eb;
          func_0x0000f350();
          local_6 = (undefined2 ****)0xdef;
          ppppuVar6 = (undefined2 ****)0x885;
          local_8 = (undefined2 *****)0xc3f3;
          func_0x0000a799();
          local_6 = (int ****)&local_a;
          local_8 = &local_6;
          local_a = (undefined2 ****)&local_74;
          ppppuStack_c = local_598;
          local_e = (undefined2 ****)0xf;
          ppppiStack_10 = (int ****)&local_e;
          ppppuStack_12 = local_540;
          pppiStack_14 = (int ***)0x885;
          uStack_16 = 0xc414;
          local_486 = (undefined2 ****)FUN_3ab8_1cb7();
          if ((*(int *)0x158 == 0) && (local_486 != (undefined2 ****)0xffff)) goto LAB_3ab8_18ad;
          goto LAB_3ab8_0e8e;
        }
LAB_3ab8_19ec:
        if ((local_4da != (undefined2 ****)0x1) || (*(int *)0x6d4c != 1)) goto LAB_3ab8_1af2;
        local_8 = (undefined2 *****)0xc582;
        local_6 = ppppuVar6;
        func_0x0000c340();
        local_6 = (undefined2 ****)0x6efa;
        local_8 = (undefined2 *****)0x885;
        local_a = (undefined2 ****)0xc58b;
        func_0x00012276();
        local_6 = (undefined2 ****)0x11f2;
        local_8 = (undefined2 *****)0xc591;
        func_0x00010526();
        *(undefined1 *)0xbf48 = 0;
        pppiVar5 = (int ***)0xdef;
        do {
          local_6 = (undefined2 ****)0x8;
          local_8 = (undefined2 *****)0x1;
          local_a = (undefined2 ****)0x22;
          ppppuStack_c = (undefined2 ****)0xbf48;
          ppppiStack_10 = (int ****)0xc5ab;
          local_e = (undefined2 ****)pppiVar5;
          local_544 = FUN_12c1_03d3();
          if (local_544 != 0) break;
          pppiVar5 = (int ***)0x11f2;
        } while (*(int *)0x158 == 0);
        local_8 = (undefined2 *****)0x11f2;
        ppppuVar6 = (undefined2 ****)0x2c1;
        local_a = (undefined2 ****)0xc5c1;
        func_0x00002cc6();
        *(undefined2 *)0xbc0 = 1;
        *(undefined2 *)0xc08 = 1;
        if (3 < *(byte *)0xb782) {
          local_6 = (undefined2 ****)0x1;
          pcVar1 = (code *)swi(0x3f);
          (*pcVar1)();
        }
        if (*(int *)0x158 != 0) goto LAB_3ab8_0e8e;
      } while (local_544 == -1);
      for (local_5ee[0] = (undefined2 ***)0x0; *(char *)(local_5ee[0] + -0x205c) != '\0';
          local_5ee[0] = (undefined2 ***)((int)local_5ee[0] + 1)) {
        if (*(char *)(local_5ee[0] + -0x205c) == ' ') {
          *(undefined1 *)(local_5ee[0] + -0x205c) = 0x5f;
        }
      }
      local_6 = (undefined2 ****)0x2e;
      local_8 = (undefined2 *****)0xbf48;
      local_a = (undefined2 ****)0x2c1;
      ppppuStack_c = (undefined2 ****)0xc61c;
      iVar3 = FUN_21f2_3b7a();
      if (iVar3 == 0) {
        local_6 = (undefined2 ****)0xbf48;
        local_8 = (undefined2 *****)0x22b2;
        local_a = (undefined2 ****)0xc62b;
        uVar4 = func_0x00024ce4();
        if (8 < uVar4) {
          *(undefined1 *)0xbf50 = 0;
        }
        local_6 = (undefined2 ****)0x6f1d;
        local_8 = (undefined2 *****)0xbf48;
        local_a = (undefined2 ****)0x22b2;
        ppppuStack_c = (undefined2 ****)0xc643;
        FUN_21f2_2d26();
        local_6 = (int ****)*(undefined2 *)0x6d62;
        local_8 = (undefined2 *****)0xbf48;
        local_a = (undefined2 ****)0x22b2;
        ppppuStack_c = (undefined2 ****)0xc652;
        FUN_21f2_2d26();
      }
      local_6 = (undefined2 ****)0xd;
      local_8 = (undefined2 *****)0xbf48;
      local_a = apppuStack_480 + *(int *)0x6d4c * 10;
      ppppuStack_c = (undefined2 ****)0x22b2;
      ppppuVar6 = (undefined2 ****)0x22b2;
      local_e = (undefined2 ****)0xc66f;
      FUN_21f2_2de0();
LAB_3ab8_1af2:
      local_8 = (undefined2 *****)0xc677;
      local_6 = ppppuVar6;
      func_0x0000c3ca();
      local_6 = local_5da;
      local_8 = (undefined2 *****)0x6f1f;
      local_a = (undefined2 ****)0xbf48;
      ppppuStack_c = (undefined2 ****)0x885;
      local_e = (undefined2 ****)0xc689;
      FUN_21f2_3454();
      local_6 = apppuStack_480 + *(int *)0x6d4c * 10;
      local_8 = (undefined2 *****)0xbf48;
      local_a = (undefined2 ****)0x22b2;
      ppppuStack_c = (undefined2 ****)0xc6a3;
      FUN_21f2_2d26();
      local_6 = (undefined2 ****)0xbf48;
      local_8 = (undefined2 *****)param_2;
      local_a = (undefined2 ****)0x22b2;
      ppppuStack_c = (undefined2 ****)0xc6b1;
      func_0x00024c86();
      local_6 = (undefined2 ****)0x5c;
      local_8 = (undefined2 *****)0xbf48;
      local_a = (undefined2 ****)0x22b2;
      ppppuStack_c = (undefined2 ****)0xc6c0;
      iVar3 = FUN_21f2_3be6();
      if (iVar3 == 0) {
        return 0;
      }
      local_8 = (undefined2 *****)0x2e;
      local_a = (undefined2 ****)(iVar3 + 1);
      ppppuStack_c = (undefined2 ****)0x22b2;
      local_e = (undefined2 ****)0xc6d4;
      iVar3 = FUN_21f2_3b7a();
      if (iVar3 != 0) {
        return 0;
      }
      local_8 = (undefined2 *****)0x6f23;
      local_a = (undefined2 ****)param_2;
      ppppuStack_c = (undefined2 ****)0x22b2;
      local_e = (undefined2 ****)0xc6e6;
      FUN_21f2_2d26();
      local_8 = (undefined2 *****)*(undefined2 *)0x6d62;
      local_a = (undefined2 ****)param_2;
      ppppuStack_c = (undefined2 ****)0x22b2;
      local_e = (undefined2 ****)0xc6f4;
      FUN_21f2_2d26();
      return 0;
    }
  }
LAB_3ab8_0e8e:
  if (*(int *)0x158 == 0) {
    return 0xffff;
  }
  return 0;
LAB_3ab8_18ad:
  if ((int)local_6 <= *(int *)0xa58) goto LAB_3ab8_16c2;
  if ((local_486 == (undefined2 ****)0x1) || (local_486 == (undefined2 ****)0xd)) {
    local_486 = (undefined2 ****)0x1;
LAB_3ab8_18cd:
    ppppuVar6 = (undefined2 ****)0x885;
    if (*(int *)0x158 != 0) goto LAB_3ab8_0e8e;
    goto LAB_3ab8_19ec;
  }
  if (local_486 == (undefined2 ****)0x2) {
    local_486 = (undefined2 ****)0x2;
    goto LAB_3ab8_1356;
  }
  if (local_486 == (undefined2 ****)0x3) {
    return 100;
  }
  if ((local_74 != (int **)0x0) && (0x10 < (int)local_a)) {
    if ((((int)local_a < 0x11) || (0x1e < (int)local_a)) &&
       (((int)local_a < 0x170 || (0x17f < (int)local_a)))) {
      local_a = (undefined2 ****)((int)(local_a + -0x10) / 0x70);
      local_488 = (undefined2 ****)
                  (((int)local_6 + (-2 - *(int *)0xa58)) / 0x68 + 1 + (int)local_a * 5 +
                  *(int *)0x6d4e);
      local_486 = (undefined2 ****)0x0;
      if ((0 < (int)local_488) && (ppppuVar2 = local_488, (int)local_488 <= (int)local_598))
      goto LAB_3ab8_1945;
    }
    else {
      if ((*(int *)0xa58 < (int)local_6) && ((int)local_6 <= *(int *)0xa58 + 0x68)) {
        local_e = (undefined2 ****)((int)local_e + 0xf);
      }
      if ((*(int *)0xa58 + 0x68 < (int)local_6) && ((int)local_6 <= *(int *)0xa58 + 0xd0)) {
        local_e = (undefined2 ****)((int)local_e - 0xf);
      }
    }
  }
  *(undefined2 *)0x6d4c = 0xffff;
  ppppuVar2 = local_e;
LAB_3ab8_1945:
  local_e = ppppuVar2;
  if ((int)local_e < 1) {
    local_e = (undefined2 ****)0x1;
  }
  if ((int)local_598 < (int)local_e) {
    local_e = local_598;
  }
  if ((int)local_e <= *(int *)0x6d4e) {
    *(int *)0x6d4e = *(int *)0x6d4e + -0xf;
    goto LAB_3ab8_196a;
  }
  if (*(int *)0x6d4e + 0x10 <= (int)local_e) goto code_r0x0003c541;
  if ((undefined2 ****)*(uint *)0x6d4c != local_e) {
    if ((int)local_e <= (int)local_598) {
      *(uint *)0x6d4c = (uint)local_e;
    }
    goto LAB_3ab8_16c2;
  }
  goto LAB_3ab8_18cd;
code_r0x0003c541:
  *(int *)0x6d4e = *(int *)0x6d4e + 0xf;
LAB_3ab8_196a:
  *(uint *)0x6d4c = (uint)local_e;
  goto LAB_3ab8_1346;
}



/* 3ab8:1b7d  FUN_3ab8_1b7d  170 bytes, 0 callers */

int __cdecl16far FUN_3ab8_1b7d(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar2 = 0x22b2;
  FUN_21f2_0ebc();
  *(undefined2 *)0xc28 = 1;
  iVar1 = FUN_3ab8_0dc7(0,param_1,param_2);
  if (3 < *(byte *)0xb782) {
    iVar1 = 0x22b2;
    iVar2 = 0x885;
    func_0x0000c354();
  }
  if (*(int *)0x158 == 0) {
    do {
      if (iVar1 != 100) goto LAB_3ab8_1bfa;
      FUN_3ab8_07c8(1);
      if (*(int *)0x158 != 0) {
        return 0;
      }
      *(undefined2 *)0xc28 = 1;
      iVar1 = FUN_3ab8_0dc7(1,param_1,param_2);
      iVar3 = iVar2;
      if (3 < *(byte *)0xb782) {
        iVar3 = 0x885;
        func_0x0000c354();
        iVar1 = iVar2;
      }
      iVar2 = iVar3;
    } while (*(int *)0x158 == 0);
  }
  else {
LAB_3ab8_1bfa:
    *(undefined2 *)0xc28 = 0;
    FUN_10ad_18a4();
    if (iVar2 == -100) {
      FUN_3ab8_00e3(1);
      return -1;
    }
    if (*(int *)0x158 == 0) {
      return iVar2;
    }
  }
  return 0;
}



/* 3ab8:1c27  FUN_3ab8_1c27  144 bytes, 2 callers */

void __cdecl16far FUN_3ab8_1c27(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_21f2_0ebc();
  func_0x0000a76b(0x22b2,*(int *)0xa58 + 1,*(int *)0xa5e + 1,*(int *)0x1b3e + -1,*(int *)0xa5a + -1)
  ;
  uVar1 = 0x885;
  do {
    iVar2 = 0;
    func_0x0000f350(uVar1,0x90,0x38,0x270,0x38,7,0,0);
    uVar1 = 0xdef;
  } while (iVar2 + 1 < 0xb);
  do {
    iVar2 = 0;
    func_0x0000f350(0xdef,0x90,0x38,0x90,0x178,7,0,0);
  } while (iVar2 + 1 < 6);
  return;
}



/* 3ab8:1cb7  FUN_3ab8_1cb7  301 bytes, 2 callers */

int __cdecl16far
FUN_3ab8_1cb7(undefined2 param_1,int *param_2,int param_3,int param_4,undefined2 param_5,
             undefined2 *param_6,undefined2 *param_7)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 **local_8;
  undefined2 *puStack_6;
  int local_4;
  
  local_4 = 0x3ab8;
  puStack_6 = (undefined2 *)0xc842;
  FUN_21f2_0ebc();
  *(undefined2 *)0xc26 = 1;
  local_4 = param_5;
  puStack_6 = &local_c;
  local_8 = &local_8;
  uStack_a = param_1;
  local_c = 9999;
  iVar1 = FUN_1def_0904(0x22b2);
  *(undefined2 *)0xc26 = 0;
  if ((*(int *)0x158 == 0) && (iVar1 != -1)) {
    local_4 = 0x1bb4;
    puStack_6 = (undefined2 *)0xc885;
    func_0x000297e6();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc88e;
    FUN_28b3_100d();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc897;
    func_0x00029b6d();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc8a0;
    FUN_28b3_0d8b();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc8a5;
    FUN_28b3_117c();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc8aa;
    func_0x00029d78();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc8af;
    uVar2 = FUN_28b3_0f51();
    *param_6 = uVar2;
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc8bd;
    func_0x000297e6();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc8c5;
    FUN_28b3_100d();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc8ce;
    func_0x00029b6d();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc8d7;
    FUN_28b3_0d8b();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc8dc;
    FUN_28b3_117c();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc8e1;
    func_0x00029d78();
    local_4 = 0x22b2;
    puStack_6 = (undefined2 *)0xc8e6;
    uVar2 = FUN_28b3_0f51();
    *param_7 = uVar2;
    if (0xd < local_4) {
      if (local_4 == 0x3c00) {
        *param_2 = *param_2 + 1;
      }
      if (local_4 == 0x3b00) {
        *param_2 = *param_2 + -1;
      }
      if (local_4 == 0x3d00) {
        *param_2 = *param_2 + 5;
      }
      if (local_4 == 0x3a00) {
        *param_2 = *param_2 + -5;
      }
      if (local_4 == 0x3700) {
        *param_2 = *param_2 - param_3;
      }
      if (local_4 == 0x3600) {
        *param_2 = *param_2 + param_3;
      }
      if (*param_2 < 1) {
        *param_2 = 1;
      }
      if (param_4 < *param_2) {
        *param_2 = param_4;
      }
      local_4 = 0;
    }
  }
  else {
    local_4 = -1;
  }
  return local_4;
}



/* 3ab8:1de4  FUN_3ab8_1de4  1252 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_1de4(undefined2 param_1,uint *param_2,uint *param_3,int *param_4,int *param_5,int param_6,
             int param_7,undefined2 param_8,int *param_9,undefined2 *param_10)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int extraout_DX;
  int extraout_DX_00;
  int *piVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int local_30;
  int iStack_2e;
  int iStack_2c;
  int local_26;
  int local_24;
  int local_1e;
  undefined4 uStack_1c;
  uint *puStack_18;
  uint *puStack_16;
  uint *puStack_14;
  uint *puStack_12;
  int *piStack_10;
  int *local_e;
  uint local_c;
  int *piStack_a;
  int *piStack_8;
  
  FUN_21f2_0ebc();
  *(undefined2 *)0xd12 = 0;
  piStack_8 = (int *)0xd12;
  piStack_a = (int *)0x0;
  local_c = param_1;
  local_e = (int *)0x22b2;
  piStack_10 = (int *)0xc988;
  iVar4 = FUN_21f2_5804();
  if (iVar4 == 0) {
    if (*(int *)0x158 != 0) {
      return 0xffff;
    }
    piStack_8 = &local_30;
    piStack_a = (int *)0xc8;
    local_c = *(undefined2 *)0xbc78;
    local_e = (int *)0xbf48;
    piStack_10 = (int *)*(int *)0xd12;
    puStack_12 = (uint *)0x22b2;
    puStack_14 = (uint *)0xc9df;
    iVar4 = FUN_21f2_581c();
    if ((iVar4 == 0) && (199 < local_30)) {
      *(undefined1 *)0xbf5c = 0;
      piStack_8 = (int *)0x6f25;
      piStack_a = (int *)0xbf48;
      local_c = 0x22b2;
      local_e = (int *)0xca06;
      iVar4 = FUN_21f2_2d98();
      if (iVar4 != 0) {
        local_24 = 3;
        goto LAB_3ab8_1e14;
      }
      piStack_8 = &local_30;
      piStack_a = (int *)0xc8;
      local_c = *(undefined2 *)0xbc78;
      local_e = (int *)0xbf48;
      piStack_10 = (int *)*(int *)0xd12;
      puStack_12 = (uint *)0x22b2;
      puStack_14 = (uint *)0xca2d;
      iVar4 = FUN_21f2_581c();
      if ((iVar4 != 0) || (local_30 < 200)) goto LAB_3ab8_1e66;
      piStack_8 = param_10;
      piStack_a = param_9;
      local_c = param_8;
      local_e = (int *)param_7;
      piStack_10 = (int *)param_6;
      puStack_12 = (uint *)param_5;
      puStack_14 = (uint *)param_4;
      puStack_16 = param_3;
      puStack_18 = param_2;
      uStack_1c._2_2_ = 0x6f3a;
      uStack_1c._0_2_ = 0xbf48;
      local_1e = 0x22b2;
      iVar4 = FUN_21f2_34ae();
      if (iVar4 == 7) {
        *param_9 = 0;
LAB_3ab8_1efb:
        uVar7 = *(undefined2 *)0xb28;
        *param_10 = *(undefined2 *)0xb26;
        param_10[1] = uVar7;
      }
      else {
        if (iVar4 == 8) goto LAB_3ab8_1efb;
        if (iVar4 != 9) goto LAB_3ab8_1e66;
      }
      iVar4 = param_2[1] + *(int *)0x14a + (uint)CARRY2(*param_2,*(uint *)0x148);
      if ((*(int *)0x13e < iVar4) ||
         ((*(int *)0x13e <= iVar4 && (*(uint *)0x13c < *param_2 + *(uint *)0x148)))) {
LAB_3ab8_1f78:
        piStack_8 = (int *)(*param_5 + *(int *)0x150);
        piStack_a = (int *)(*param_4 + *(int *)0x152);
        local_e = (int *)(*param_3 + *(uint *)0x14c);
        local_c = param_3[1] + *(int *)0x14e + (uint)CARRY2(*param_3,*(uint *)0x14c);
        puStack_12 = (uint *)(*param_2 + *(uint *)0x148);
        piStack_10 = (int *)(param_2[1] + *(int *)0x14a + (uint)CARRY2(*param_2,*(uint *)0x148));
        puStack_14 = (uint *)((*param_9 - *(int *)0xbefa) + *(int *)0xc0ac);
        pcVar3 = (code *)swi(0x3f);
        iVar4 = (*pcVar3)();
        if (iVar4 == -1) {
          local_24 = 4;
          goto LAB_3ab8_1e14;
        }
      }
      else {
        iVar4 = param_3[1] + *(int *)0x14e + (uint)CARRY2(*param_3,*(uint *)0x14c);
        if ((*(int *)0x142 < iVar4) ||
           ((((*(int *)0x142 <= iVar4 && (*(uint *)0x140 < *param_3 + *(uint *)0x14c)) ||
             (*(int *)0x146 < *param_4 + *(int *)0x152)) ||
            ((*(int *)0x144 < *param_5 + *(int *)0x150 ||
             ((uint)(*(int *)0xbefa + *(int *)0x166) < (uint)(*param_9 + *(int *)0xc0ac)))))))
        goto LAB_3ab8_1f78;
      }
      piStack_8 = (int *)*(undefined2 *)0xd12;
      piStack_a = (int *)0x22b2;
      local_c = 0xcb5a;
      func_0x000276be();
      *(undefined2 *)0xd12 = 0;
      piStack_8 = (int *)0xd12;
      piStack_a = (int *)0x0;
      local_c = param_1;
      local_e = (int *)0x22b2;
      piStack_10 = (int *)0xcb70;
      iVar4 = FUN_21f2_5804();
      if (iVar4 != 0) goto LAB_3ab8_1e0f;
      if (*(int *)0x158 != 0) {
        return 0xffff;
      }
      piStack_8 = &local_30;
      piStack_a = (int *)0xc8;
      local_c = *(undefined2 *)0xbc78;
      local_e = (int *)0xbf48;
      piStack_10 = (int *)*(int *)0xd12;
      puStack_12 = (uint *)0x22b2;
      puStack_14 = (uint *)0xcb9d;
      iVar4 = FUN_21f2_581c();
      if ((iVar4 == 0) && (199 < local_30)) {
        piStack_8 = &local_30;
        piStack_a = (int *)0xc8;
        local_c = *(undefined2 *)0xbc78;
        local_e = (int *)0xbf48;
        piStack_10 = (int *)*(int *)0xd12;
        puStack_12 = (uint *)0x22b2;
        puStack_14 = (uint *)0xcbc8;
        iVar4 = FUN_21f2_581c();
        if ((iVar4 == 0) && (199 < local_30)) {
          piStack_8 = (int *)param_8;
          piStack_a = (int *)param_7;
          local_c = param_6;
          local_e = param_5;
          piStack_10 = param_4;
          puStack_12 = param_3;
          puStack_14 = param_2;
          puStack_16 = (uint *)0x6f57;
          puStack_18 = (uint *)0xbf48;
          uStack_1c._2_2_ = 0x22b2;
          uStack_1c._0_2_ = 0xcbfb;
          FUN_21f2_34ae();
          piStack_8 = (int *)0x0;
          piStack_a = (int *)0x16;
          local_c = param_2[1];
          local_e = (int *)*param_2;
          piStack_10 = (int *)0x22b2;
          puStack_12 = (uint *)0xcc11;
          uVar9 = FUN_21f2_5a12();
          if (*(int *)0xbed2 == 0) {
            piStack_10 = (int *)0x0;
            puStack_12 = (uint *)0x16;
            puStack_16 = (uint *)(*(uint *)0x148 + 1);
            puStack_14 = (uint *)(*(int *)0x14a + (uint)(0xfffe < *(uint *)0x148));
            puStack_18 = (uint *)0x22b2;
            uStack_1c._2_2_ = 0xcc54;
            uVar10 = FUN_21f2_5a12();
            local_1e = ((int)((ulong)uVar10 >> 0x10) + (uint)CARRY2((uint)uVar10,*(uint *)0xbc7e)) *
                       0x1000 + *(int *)0xbc80;
          }
          else {
            piStack_10 = (int *)0x0;
            puStack_12 = (uint *)0x16;
            puStack_16 = (uint *)(*(uint *)0x148 + 1);
            puStack_14 = (uint *)(*(int *)0x14a + (uint)(0xfffe < *(uint *)0x148));
            puStack_18 = (uint *)0x22b2;
            uStack_1c._2_2_ = 0xcc38;
            FUN_21f2_5a12();
            local_1e = extraout_DX;
          }
          puStack_18 = (uint *)*(undefined2 *)0xbed2;
          uStack_1c = uVar9;
          func_0x000129e6();
          puStack_18 = (uint *)0x11f2;
          uStack_1c._2_2_ = 0xcc8d;
          uStack_1c = func_0x00027a04();
          puStack_18 = (uint *)*(undefined2 *)0xc718;
          if (*(int *)0xbed2 == 0) {
            local_1e = 0x22b2;
            uVar9 = func_0x00027a04();
            local_1e = ((int)((ulong)uVar9 >> 0x10) + (uint)CARRY2((uint)uVar9,*(uint *)0xb788)) *
                       0x1000 + *(int *)0xb78a;
          }
          else {
            local_1e = 0x22b2;
            func_0x00027a04();
            local_1e = extraout_DX_00;
          }
          func_0x000129e6();
          puStack_18 = (uint *)0x0;
          uStack_1c = (long)*param_4 * 0xc;
          local_1e = 0;
          FUN_21f2_5a12();
          iStack_2c = 0xcd25;
          func_0x000129e6();
          iStack_2c = *(int *)0x150 + 1;
          iStack_2e = 0x11f2;
          local_30 = -0x32b4;
          uVar9 = FUN_21f2_5a12();
          local_30 = (uint)uVar9 + *(uint *)0xbe9a;
          iStack_2e = ((int)((ulong)uVar9 >> 0x10) + (uint)CARRY2((uint)uVar9,*(uint *)0xbe9a)) *
                      0x1000 + *(int *)0xbe9c;
          func_0x000129e6();
          iStack_2c = *param_9;
          local_30 = *(int *)0xc0ac;
          iStack_2e = *(undefined2 *)0xc0ae;
          func_0x000129e6();
          for (local_26 = 1; local_26 <= *param_5; local_26 = local_26 + 1) {
            iStack_2c = 0xcda0;
            piVar11 = (int *)func_0x00000398();
            piVar5 = (int *)piVar11;
            piVar6 = &local_1e;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              piVar2 = piVar6;
              piVar6 = piVar6 + 1;
              piVar1 = piVar5;
              piVar5 = piVar5 + 1;
              *piVar2 = *piVar1;
            }
            local_e = (int *)((int)local_e + *(int *)0xc0ac);
            local_c = *(uint *)0xc0ae;
            iStack_2c = 0xcdcf;
            piVar11 = (int *)func_0x00000398();
            piVar5 = (int *)piVar11;
            piVar6 = &local_1e;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              piVar2 = piVar5;
              piVar5 = piVar5 + 1;
              piVar1 = piVar6;
              piVar6 = piVar6 + 1;
              *piVar2 = *piVar1;
            }
          }
          iStack_2c = 0xcdf7;
          func_0x000276be();
          *(undefined2 *)0xd12 = 0;
          *(undefined1 *)0xd14 = 2;
          return 1;
        }
      }
    }
LAB_3ab8_1e66:
    local_24 = 2;
  }
  else {
LAB_3ab8_1e0f:
    local_24 = 1;
  }
LAB_3ab8_1e14:
  if (*(int *)0xd12 != 0) {
    piStack_8 = (int *)*(undefined2 *)0xd12;
    piStack_a = (int *)0x22b2;
    local_c = 0xc9a4;
    func_0x000276be();
    *(undefined2 *)0xd12 = 0;
  }
  uVar7 = 0x22b2;
  if (*(char *)0xcf4 == '\0') {
    if (local_24 == 1) {
      piStack_8 = (int *)0x1;
      piStack_a = (int *)0x22b2;
      local_c = 0xce16;
      FUN_3ab8_0000();
      piStack_8 = (int *)0x6f6e;
      piStack_a = (int *)0x22b2;
      uVar7 = 0x11f2;
      local_c = 0xce20;
      FUN_13bf_0a03();
    }
    uVar8 = uVar7;
    if (local_24 == 2) {
      piStack_8 = (int *)0x370;
      uVar8 = 0x11f2;
      local_c = 0xce30;
      piStack_a = (int *)uVar7;
      FUN_13bf_0a03();
    }
    uVar7 = uVar8;
    if (local_24 == 3) {
      piStack_8 = (int *)0x4a4;
      uVar7 = 0x11f2;
      local_c = 0xce40;
      piStack_a = (int *)uVar8;
      FUN_13bf_0a03();
    }
    if (local_24 == 4) {
      piStack_8 = (int *)0x764;
      local_c = 0xce50;
      piStack_a = (int *)uVar7;
      FUN_13bf_0a03();
    }
  }
  return 0;
}



/* 3ab8:22d9  FUN_3ab8_22d9  2089 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_22d9(int param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  uint unaff_SI;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int unaff_DI;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar10;
  undefined2 local_a2 [10];
  byte local_8e;
  undefined1 local_8d;
  undefined1 local_8a [4];
  uint local_86;
  int local_84;
  int local_82;
  uint local_80;
  int local_7e;
  uint local_74;
  int local_72;
  uint local_70;
  uint local_6e;
  int local_6c;
  undefined2 local_6a [4];
  undefined1 local_62 [4];
  undefined1 *local_5e;
  undefined1 *local_5c;
  uint *local_5a;
  undefined1 *local_58;
  int *local_56;
  int local_54;
  byte local_50;
  byte local_4f;
  undefined2 local_4a;
  uint local_48;
  int local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined2 local_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined1 *local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined2 uStack_22;
  undefined2 uStack_1e;
  undefined2 local_1c;
  undefined1 *puStack_1a;
  undefined2 local_18;
  uint *puStack_16;
  undefined1 *puStack_14;
  int *local_12;
  int **ppiStack_10;
  undefined2 *local_e;
  undefined1 *puStack_c;
  
  FUN_21f2_0ebc();
  local_2e = 0;
  puStack_c = local_8a;
  local_e = &local_2c;
  ppiStack_10 = &local_12;
  local_12 = &local_82;
  puStack_14 = &stack0xfff6;
  puStack_16 = &local_74;
  local_18 = &stack0xfffa;
  puStack_1a = (undefined1 *)param_2;
  local_1c = 0x22b2;
  uStack_1e = 0xce97;
  iVar4 = FUN_3ab8_1de4();
  if (iVar4 == 0) {
    uVar5 = 0xffff;
  }
  else {
    if (param_1 != 0) {
      FUN_28b3_0d8b();
      func_0x00029d78();
      func_0x00029c2c();
      FUN_28b3_0e3b();
      puStack_c = (undefined1 *)0xced2;
      func_0x00029b6d();
      FUN_28b3_0e53();
      func_0x000297e6();
      puStack_c = (undefined1 *)0xcee9;
      func_0x00029b6d();
      FUN_28b3_0e53();
      func_0x000297e6();
      puStack_c = (undefined1 *)0xcf00;
      func_0x00029b6d();
      FUN_28b3_0e53();
    }
    puVar8 = (undefined1 *)0x885;
    local_84 = func_0x0000db7a();
    if (local_84 == 0) {
      local_6e = *(uint *)0x148 + unaff_SI;
      local_6c = *(int *)0x14a + unaff_DI + (uint)CARRY2(*(uint *)0x148,unaff_SI);
      local_7e = *(int *)0x14a + (uint)(0xfffe < *(uint *)0x148);
      local_84 = 0;
      local_80 = *(uint *)0x148 + 1;
      local_48 = local_80;
      local_46 = local_7e;
      for (; (local_7e <= local_6c && ((local_7e < local_6c || (local_80 <= local_6e))));
          local_80 = local_80 + 1) {
        puVar9 = puVar8;
        if ((char)local_80 == '\0') {
          puVar9 = (undefined1 *)0x885;
          local_84 = func_0x0000db7a();
          if (local_84 != 0) goto LAB_3ab8_2393;
        }
        puVar8 = (undefined1 *)0x0;
        local_e = (undefined2 *)0xcf5a;
        puStack_c = puVar9;
        puVar10 = (undefined2 *)func_0x0000013f();
        puVar6 = (undefined2 *)puVar10;
        puVar7 = &local_28;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        if (local_18._1_1_ < 0x5a) {
          puStack_c = (undefined1 *)0x3;
          local_e = (undefined2 *)*(int *)((uint)local_18._1_1_ * 2 + 0xa70);
          ppiStack_10 = (int **)0x0;
          local_12 = (int *)0xcfcb;
          func_0x000297e6();
          ppiStack_10 = (int **)0x22b2;
          local_12 = (int *)0xcfd4;
          func_0x00029b6d();
          ppiStack_10 = (int **)0x22b2;
          local_12 = (int *)0xcfdc;
          FUN_28b3_0d8b();
          ppiStack_10 = (int **)0x22b2;
          local_12 = (int *)0xcfe1;
          FUN_28b3_1168();
          ppiStack_10 = (int **)0x22b2;
          local_12 = (int *)0xcfe9;
          FUN_28b3_100d();
          ppiStack_10 = (int **)0x22b2;
          local_12 = (int *)0xcff1;
          FUN_28b3_0e3b();
          ppiStack_10 = (int **)0x22b2;
          local_12 = (int *)0xcff6;
          func_0x00029d78();
          ppiStack_10 = (int **)0x22b2;
          local_12 = (int *)0xcffb;
          ppiStack_10 = (int **)FUN_28b3_0f51();
          local_12 = (int *)0x22b2;
          puStack_14 = (undefined1 *)0xd004;
          func_0x000297e6();
          local_12 = (int *)0x22b2;
          puStack_14 = (undefined1 *)0xd00d;
          func_0x00029b6d();
          local_12 = (int *)0x22b2;
          puStack_14 = (undefined1 *)0xd015;
          FUN_28b3_0d8b();
          local_12 = (int *)0x22b2;
          puStack_14 = (undefined1 *)0xd01a;
          FUN_28b3_117c();
          local_12 = (int *)0x22b2;
          puStack_14 = (undefined1 *)0xd022;
          func_0x00029bb5();
          local_12 = (int *)0x22b2;
          puStack_14 = (undefined1 *)0xd02a;
          FUN_28b3_0e3b();
          local_12 = (int *)0x22b2;
          puStack_14 = (undefined1 *)0xd02f;
          func_0x00029d78();
          local_12 = (int *)0x22b2;
          puStack_14 = (undefined1 *)0xd034;
          local_12 = (int *)FUN_28b3_0f51();
          puStack_14 = (undefined1 *)0x22b2;
          puStack_16 = (uint *)0xd03d;
          func_0x000297e6();
          puStack_14 = (undefined1 *)0x22b2;
          puStack_16 = (uint *)0xd046;
          func_0x00029b6d();
          puStack_14 = (undefined1 *)0x22b2;
          puStack_16 = (uint *)0xd04e;
          FUN_28b3_0d8b();
          puStack_14 = (undefined1 *)0x22b2;
          puStack_16 = (uint *)0xd053;
          FUN_28b3_1168();
          puStack_14 = (undefined1 *)0x22b2;
          puStack_16 = (uint *)0xd05b;
          FUN_28b3_100d();
          puStack_14 = (undefined1 *)0x22b2;
          puStack_16 = (uint *)0xd063;
          FUN_28b3_0e3b();
          puStack_14 = (undefined1 *)0x22b2;
          puStack_16 = (uint *)0xd068;
          func_0x00029d78();
          puStack_14 = (undefined1 *)0x22b2;
          puStack_16 = (uint *)0xd06d;
          puStack_14 = (undefined1 *)FUN_28b3_0f51();
          puStack_16 = (uint *)0x22b2;
          local_18 = (undefined1 *)0xd076;
          func_0x000297e6();
          puStack_16 = (uint *)0x22b2;
          local_18 = (undefined1 *)0xd07f;
          func_0x00029b6d();
          puStack_16 = (uint *)0x22b2;
          local_18 = (undefined1 *)0xd087;
          FUN_28b3_0d8b();
          puStack_16 = (uint *)0x22b2;
          local_18 = (undefined1 *)0xd08c;
          FUN_28b3_117c();
          puStack_16 = (uint *)0x22b2;
          local_18 = (undefined1 *)0xd094;
          func_0x00029bb5();
          puStack_16 = (uint *)0x22b2;
          local_18 = (undefined1 *)0xd09c;
          FUN_28b3_0e3b();
          puStack_16 = (uint *)0x22b2;
          local_18 = (undefined1 *)0xd0a1;
          func_0x00029d78();
          puStack_16 = (uint *)0x22b2;
          local_18 = (undefined1 *)0xd0a6;
          puStack_16 = (uint *)FUN_28b3_0f51();
          local_18 = (undefined1 *)0x22b2;
          puVar8 = (undefined1 *)0xdef;
          puStack_1a = (undefined1 *)0xd0ac;
          func_0x0000f350();
        }
        local_7e = local_7e + (uint)(0xfffe < local_80);
      }
      puVar8 = (undefined1 *)0x885;
      iVar4 = -0x2f49;
      local_84 = func_0x0000db7a();
      if (local_84 == 0) {
        local_6e = *(uint *)0x14c + local_74;
        local_6c = *(int *)0x14e + local_72 + (uint)CARRY2(*(uint *)0x14c,local_74);
        local_7e = *(int *)0x14e + (uint)(0xfffe < *(uint *)0x14c);
        local_84 = 0;
        local_80 = *(uint *)0x14c + 1;
        local_48 = local_80;
        local_46 = local_7e;
        for (; (local_7e <= local_6c && ((local_7e < local_6c || (local_80 <= local_6e))));
            local_80 = local_80 + 1) {
          puVar9 = puVar8;
          if ((local_80 & 0xf) == 0) {
            puVar9 = (undefined1 *)0x885;
            local_84 = func_0x0000db7a();
            if (local_84 != 0) goto LAB_3ab8_2393;
          }
          puVar8 = (undefined1 *)0x0;
          local_e = (undefined2 *)0xd0fb;
          puStack_c = puVar9;
          puVar10 = (undefined2 *)func_0x00000271();
          puVar6 = (undefined2 *)puVar10;
          puVar7 = local_6a;
          for (iVar4 = 0x10; iVar3 = local_54, iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
          iVar4 = unaff_SS;
          if (local_4f < 0x5a) {
            puStack_c = local_5e;
            local_e = (undefined2 *)*(int *)((uint)local_50 * 2 + 0xa88);
            ppiStack_10 = (int **)*(int *)((uint)local_4f * 2 + 0xa70);
            local_12 = local_56;
            puStack_14 = local_58;
            puStack_16 = local_5a;
            local_18 = local_5c;
            puStack_1a = (undefined1 *)0x0;
            local_1c = 0xd17b;
            func_0x000297e6();
            puStack_1a = local_62;
            local_1c = 0x22b2;
            uStack_1e = 0xd184;
            func_0x00029b6d();
            puStack_1a = (undefined1 *)0x22b2;
            local_1c = 0xd18a;
            FUN_28b3_0e3b();
            puStack_1a = (undefined1 *)0x22b2;
            local_1c = 0xd18f;
            func_0x00029d78();
            uStack_22 = 0x22b2;
            local_24 = 0xd199;
            func_0x000299d1();
            uStack_22 = 0x22b2;
            local_24 = 0xd1a1;
            func_0x000297e6();
            uStack_22 = 0x22b2;
            local_24 = 0xd1aa;
            func_0x00029b6d();
            uStack_22 = 0x22b2;
            local_24 = 0xd1b2;
            FUN_28b3_0d8b();
            uStack_22 = 0x22b2;
            local_24 = 0xd1b7;
            FUN_28b3_1168();
            uStack_22 = 0x22b2;
            local_24 = 0xd1bf;
            FUN_28b3_100d();
            uStack_22 = 0x22b2;
            local_24 = 0xd1c7;
            FUN_28b3_0e3b();
            uStack_22 = 0x22b2;
            local_24 = 0xd1cc;
            func_0x00029d78();
            uStack_2a = 0x22b2;
            local_2c = 0xd1d6;
            func_0x000299d1();
            uStack_2a = 0x22b2;
            local_2c = 0xd1de;
            func_0x000297e6();
            uStack_2a = 0x22b2;
            local_2c = 0xd1e7;
            func_0x00029b6d();
            uStack_2a = 0x22b2;
            local_2c = 0xd1ef;
            FUN_28b3_0d8b();
            uStack_2a = 0x22b2;
            local_2c = 0xd1f4;
            FUN_28b3_117c();
            uStack_2a = 0x22b2;
            local_2c = 0xd1fc;
            func_0x00029bb5();
            uStack_2a = 0x22b2;
            local_2c = 0xd204;
            FUN_28b3_0e3b();
            uStack_2a = 0x22b2;
            local_2c = 0xd209;
            func_0x00029d78();
            uStack_32 = 0x22b2;
            uStack_34 = 0xd213;
            func_0x000299d1();
            uStack_32 = 0x22b2;
            puVar8 = (undefined1 *)0xdef;
            uStack_34 = 0xd218;
            func_0x0000e118();
            iVar4 = iVar3;
          }
          local_7e = local_7e + (uint)(0xfffe < local_80);
        }
        local_6e = iVar4 + *(int *)0x152;
        local_6c = (int)local_6e >> 0xf;
        local_86 = *(int *)0x152 + 1;
        local_70 = local_86;
        for (; ((int)local_86 >> 0xf <= local_6c &&
               (((int)local_86 >> 0xf < local_6c || (local_86 <= local_6e))));
            local_86 = local_86 + 1) {
          local_84 = func_0x0000db7a();
          if (local_84 != 0) goto LAB_3ab8_2393;
          puVar8 = (undefined1 *)0x0;
          puStack_c = (undefined1 *)0xd242;
          puVar10 = (undefined2 *)func_0x000003ef();
          puVar6 = (undefined2 *)puVar10;
          puVar7 = &local_3c;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
          if (uStack_34._1_1_ < 0x5a) {
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_0d8b();
            FUN_28b3_1168();
            FUN_28b3_100d();
            FUN_28b3_0e3b();
            FUN_28b3_0e53();
            puStack_c = (undefined1 *)*(int *)0xa6ea;
            local_e = (undefined2 *)*(int *)0xa6e8;
            ppiStack_10 = (int **)*(int *)0xa6e6;
            local_12 = (int *)*(int *)0xa6e4;
            puStack_14 = (undefined1 *)*(int *)0xa6ea;
            puStack_16 = (uint *)*(int *)0xa6e8;
            local_18 = (undefined1 *)*(int *)0xa6e6;
            puStack_1a = (undefined1 *)*(undefined2 *)0xa6e4;
            local_1c = *(undefined2 *)0xa6f2;
            uStack_1e = *(undefined2 *)0xa6f0;
            uStack_22 = *(undefined2 *)0xa6ec;
            local_24 = 3;
            uStack_26 = *(undefined2 *)((uStack_34 >> 8) * 2 + 0xa70);
            local_28 = *(undefined2 *)0xa6f2;
            uStack_2a = *(undefined2 *)0xa6f0;
            local_2c = *(undefined2 *)0xa6ee;
            local_2e = *(undefined2 *)0xa6ec;
            local_30 = (undefined1 *)0x22b2;
            uStack_32 = 0xd31a;
            func_0x000297e6();
            local_30 = (undefined1 *)0x22b2;
            uStack_32 = 0xd31f;
            func_0x00029d78();
            local_38 = 0x22b2;
            uStack_3a = 0xd329;
            func_0x000299d1();
            local_38 = 0x22b2;
            uStack_3a = 0xd331;
            func_0x000297e6();
            local_38 = 0x22b2;
            uStack_3a = 0xd33a;
            func_0x00029b6d();
            local_38 = 0x22b2;
            uStack_3a = 0xd342;
            FUN_28b3_0d8b();
            local_38 = 0x22b2;
            uStack_3a = 0xd347;
            FUN_28b3_117c();
            local_38 = 0x22b2;
            uStack_3a = 0xd34f;
            func_0x00029bb5();
            local_38 = 0x22b2;
            uStack_3a = 0xd357;
            FUN_28b3_0e3b();
            local_38 = 0x22b2;
            uStack_3a = 0xd35c;
            func_0x00029d78();
            local_40 = 0x22b2;
            local_42 = 0xd366;
            func_0x000299d1();
            local_40 = 0x22b2;
            puVar8 = (undefined1 *)0xdef;
            local_42 = 0xd36b;
            func_0x0000fd9f();
          }
        }
        local_6e = local_82 + *(int *)0x150;
        local_6c = (int)local_6e >> 0xf;
        local_86 = *(int *)0x150 + 1;
        local_70 = local_86;
        while( true ) {
          if ((local_6c < (int)local_86 >> 0xf) ||
             ((local_6c <= (int)local_86 >> 0xf && (local_6e < local_86)))) {
            local_44 = *(undefined2 *)0xa6f4;
            local_42 = *(undefined2 *)0xa6f6;
            puStack_c = (undefined1 *)*(undefined2 *)0xa6ea;
            local_e = (undefined2 *)*(undefined2 *)0xa6e8;
            ppiStack_10 = (int **)*(undefined2 *)0xa6e6;
            local_12 = (int *)*(undefined2 *)0xa6e4;
            puStack_14 = (undefined1 *)*(undefined2 *)0xa6ea;
            puStack_16 = (uint *)*(undefined2 *)0xa6e8;
            local_18 = (undefined1 *)*(undefined2 *)0xa6e6;
            puStack_1a = (undefined1 *)*(undefined2 *)0xa6e4;
            local_1c = *(undefined2 *)0xa6f2;
            uStack_1e = *(undefined2 *)0xa6f0;
            uStack_22 = *(undefined2 *)0xa6ec;
            local_24 = 3;
            uStack_26 = 2;
            local_28 = *(undefined2 *)0xa6fe;
            uStack_2a = *(undefined2 *)0xa6fc;
            local_2c = *(undefined2 *)0xa6fa;
            local_2e = *(undefined2 *)0xa6f8;
            uStack_32 = 0xd63c;
            local_30 = puVar8;
            FUN_28b3_0d8b();
            local_30 = (undefined1 *)0x22b2;
            uStack_32 = 0xd644;
            FUN_28b3_100d();
            local_30 = (undefined1 *)0x22b2;
            uStack_32 = 0xd649;
            func_0x00029d78();
            local_38 = 0x22b2;
            uStack_3a = 0xd653;
            func_0x000299d1();
            local_38 = 0x22b2;
            uStack_3a = 0xd65b;
            FUN_28b3_0d8b();
            local_38 = 0x22b2;
            uStack_3a = 0xd663;
            func_0x00029bb5();
            local_38 = 0x22b2;
            uStack_3a = 0xd668;
            func_0x00029d78();
            local_40 = 0x22b2;
            local_42 = 0xd672;
            func_0x000299d1();
            local_40 = 0x22b2;
            local_42 = 0xd677;
            func_0x0000fd9f();
            return 0;
          }
          local_84 = func_0x0000db7a();
          if (local_84 != 0) break;
          puVar8 = (undefined1 *)0x0;
          puStack_c = (undefined1 *)0xd395;
          puVar10 = (undefined2 *)func_0x00000398();
          puVar6 = (undefined2 *)puVar10;
          puVar7 = local_a2;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
          if (local_8e < 0x5a) {
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_0d8b();
            FUN_28b3_1163();
            FUN_28b3_0d8b();
            FUN_28b3_117c();
            func_0x00029bb5();
            FUN_28b3_0e53();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_0d8b();
            FUN_28b3_1168();
            FUN_28b3_100d();
            FUN_28b3_0d8b();
            FUN_28b3_1168();
            FUN_28b3_0e53();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_0d8b();
            FUN_28b3_1163();
            FUN_28b3_0d8b();
            FUN_28b3_117c();
            func_0x00029bb5();
            FUN_28b3_0e53();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_0d8b();
            FUN_28b3_1168();
            FUN_28b3_100d();
            FUN_28b3_0d8b();
            FUN_28b3_1168();
            FUN_28b3_0e53();
            iVar4 = (uint)local_8e * 2;
            local_30 = (undefined1 *)*(undefined2 *)(iVar4 + 0x182);
            FUN_28b3_0d8b();
            func_0x00029b6d();
            func_0x00029b6d();
            func_0x00029b6d();
            func_0x00029d78();
            uVar5 = FUN_28b3_0f51();
            *(undefined2 *)(iVar4 + 0x182) = uVar5;
            local_4a = *(undefined2 *)(iVar4 + 0x198);
            FUN_28b3_0d8b();
            func_0x00029b6d();
            func_0x00029b6d();
            func_0x00029b6d();
            func_0x00029d78();
            uVar5 = FUN_28b3_0f51();
            *(undefined2 *)(iVar4 + 0x198) = uVar5;
            FUN_28b3_0d8b();
            func_0x00029b6d();
            func_0x00029b6d();
            func_0x00029b6d();
            func_0x00029d78();
            uVar5 = FUN_28b3_0f51();
            *(undefined2 *)(iVar4 + 0x1ae) = uVar5;
            local_8d = *(undefined1 *)0xb310;
            puVar6 = &uStack_1e;
            puVar7 = local_a2;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar1 = puVar6;
              puVar6 = puVar6 + 1;
              puVar10 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar1 = *puVar10;
            }
            uStack_22 = 0x22b2;
            puVar8 = (undefined1 *)0x18b3;
            local_24 = 0xd5b1;
            FUN_1885_0d43();
            iVar4 = (uint)local_8e * 2;
            *(undefined2 *)(iVar4 + 0x182) = local_30;
            *(undefined2 *)(iVar4 + 0x198) = local_4a;
            *(undefined2 *)(iVar4 + 0x1ae) = 0x22b2;
          }
          local_86 = local_86 + 1;
        }
      }
    }
LAB_3ab8_2393:
    if (local_84 == 2) {
      uVar5 = 2;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}



/* 3ab8:2b02  FUN_3ab8_2b02  30 bytes, 0 callers */

int __cdecl16far FUN_3ab8_2b02(int param_1,int param_2,int param_3,int param_4)

{
  FUN_21f2_0ebc();
  return ((param_2 - param_4) * 0x10 - param_3) + param_1;
}



/* 3ab8:2b20  FUN_3ab8_2b20  198 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2b20(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  uVar2 = 1;
  FUN_21f2_0ebc();
  FUN_28b3_0d04(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar1 && !(bool)uVar2) {
    FUN_28b3_0d04(0x22b2);
    FUN_28b3_0e53(0x22b2);
  }
  FUN_28b3_0d04(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar1 && !(bool)uVar2) {
    FUN_28b3_0d04(0x22b2);
    FUN_28b3_0e53(0x22b2);
  }
  FUN_28b3_0d04(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar1) {
    FUN_28b3_0d04(0x22b2);
    FUN_28b3_0e53(0x22b2);
  }
  FUN_28b3_0d04(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar1) {
    FUN_28b3_0d04(0x22b2);
    FUN_28b3_0e53(0x22b2);
  }
  return;
}



/* 3ab8:2be6  FUN_3ab8_2be6  317 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2be6(uint *param_1,uint *param_2,int *param_3,int *param_4,int *param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  char *pcVar5;
  int *piVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint unaff_SS;
  int unaff_DS;
  undefined4 uVar9;
  undefined2 *puVar10;
  undefined2 local_20 [8];
  undefined4 local_10;
  undefined2 uStack_c;
  int local_8;
  uint uVar11;
  int iVar12;
  
  FUN_21f2_0ebc();
  param_1[1] = 0;
  *param_1 = 0;
  iVar12 = 0;
  uStack_c = 0x22b2;
  for (uVar11 = 1;
      (iVar12 <= *(int *)0x14a && ((iVar12 < *(int *)0x14a || (uVar11 <= *(uint *)0x148))));
      uVar11 = uVar11 + 1) {
    local_10 = (char *)CONCAT22(0xd7aa,(char *)local_10);
    uVar9 = func_0x0000013f();
    if ((*(byte *)((int)uVar9 + 0x14) & 2) != 0) {
      puVar1 = param_1;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      param_1[1] = param_1[1] + (uint)(0xfffe < uVar2);
    }
    iVar12 = iVar12 + (uint)(0xfffe < uVar11);
    uStack_c = 0;
  }
  param_2[1] = 0;
  *param_2 = 0;
  iVar12 = 0;
  for (uVar11 = 1;
      (iVar12 <= *(int *)0x14e && ((iVar12 < *(int *)0x14e || (uVar11 <= *(uint *)0x14c))));
      uVar11 = uVar11 + 1) {
    local_10 = (char *)CONCAT22(0xd7fa,(char *)local_10);
    uVar9 = func_0x00000271();
    if ((*(byte *)((int)uVar9 + 0x1e) & 2) != 0) {
      puVar1 = param_2;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      param_2[1] = param_2[1] + (uint)(0xfffe < uVar2);
    }
    iVar12 = iVar12 + (uint)(0xfffe < uVar11);
    uStack_c = 0;
  }
  *param_3 = 0;
  for (local_8 = 1; local_8 <= *(int *)0x152; local_8 = local_8 + 1) {
    uStack_c = 0xd829;
    uVar9 = func_0x000003ef();
    if ((*(byte *)((int)uVar9 + 10) & 2) != 0) {
      *param_3 = *param_3 + 1;
    }
  }
  *param_5 = 0;
  *param_4 = 0;
  local_8 = 1;
  while (local_8 <= *(int *)0x150) {
    uStack_c = 0xd881;
    puVar10 = (undefined2 *)func_0x00000398();
    puVar7 = (undefined2 *)puVar10;
    puVar8 = local_20;
    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
      puVar4 = puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar4 = *puVar3;
    }
    piVar6 = param_4;
    if ((unaff_SS & 2) != 0) {
      do {
        pcVar5 = local_10;
        *piVar6 = *piVar6 + 1;
        local_10 = (char *)CONCAT22(local_10._2_2_,(char *)local_10 + 1);
        piVar6 = param_5;
      } while (*pcVar5 != '\0');
      *param_5 = *param_5 + 1;
    }
    local_8 = unaff_DS + 1;
  }
  return;
}



/* 3ab8:2d23  FUN_3ab8_2d23  173 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_2d23(uint param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  iVar2 = *(int *)0x14a + param_2 + (uint)CARRY2(*(uint *)0x148,param_1);
  if ((iVar2 <= *(int *)0x13e) &&
     ((iVar2 < *(int *)0x13e || (*(uint *)0x148 + param_1 <= *(uint *)0x13c)))) {
    iVar2 = *(int *)0x14e + param_4 + (uint)CARRY2(*(uint *)0x14c,param_3);
    if ((iVar2 <= *(int *)0x142) &&
       ((((iVar2 < *(int *)0x142 || (*(uint *)0x14c + param_3 <= *(uint *)0x140)) &&
         (param_5 + *(int *)0x152 <= *(int *)0x146)) &&
        ((param_6 + *(int *)0x150 <= *(int *)0x144 &&
         ((uint)(*(int *)0xc0ac + param_7) <= (uint)(*(int *)0xbefa + *(int *)0x166))))))) {
      return 0;
    }
  }
  pcVar1 = (code *)swi(0x3f);
  iVar2 = (*pcVar1)(*(uint *)0x148 + param_1,
                    *(int *)0x14a + param_2 + (uint)CARRY2(*(uint *)0x148,param_1),
                    *(uint *)0x14c + param_3,
                    *(int *)0x14e + param_4 + (uint)CARRY2(*(uint *)0x14c,param_3),
                    param_5 + *(int *)0x152,param_6 + *(int *)0x150);
  if (iVar2 != -1) {
    return 0;
  }
  FUN_3ab8_00e3(2);
  return 0xffff;
}



/* 3ab8:2de6  FUN_3ab8_2de6  408 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2de6(undefined2 *param_1)

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
  int local_3a;
  int local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 uStack_1c;
  byte local_19;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 *local_a;
  
  FUN_21f2_0ebc();
  puVar5 = &local_2e;
  puVar4 = param_1;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = &local_18;
  puVar4 = &local_2e;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  local_34 = 0x22b2;
  for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
    local_3a = local_38 + 1;
    if (3 < local_3a) {
      local_3a = 0;
    }
    iVar3 = local_38 * 4;
    local_18 = *(undefined2 *)(iVar3 + 0xbc4);
    local_16 = *(undefined2 *)(iVar3 + 0xbc6);
    local_14 = *(undefined2 *)(iVar3 + 0xbd4);
    local_12 = *(undefined2 *)(iVar3 + 0xbd6);
    local_3a = local_3a * 4;
    local_10 = *(undefined2 *)(local_3a + 0xbc4);
    local_e = *(undefined2 *)(local_3a + 0xbc6);
    local_c = *(undefined2 *)(local_3a + 0xbd4);
    local_a = (undefined2 *)*(undefined2 *)(local_3a + 0xbd6);
    puVar4 = &uStack_1c;
    puVar5 = &local_2e;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = &local_32;
    puVar5 = &local_18;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    uVar6 = 0x7a6;
    local_36 = 0xda30;
    iVar3 = func_0x000084eb();
    if (0 < iVar3) {
      local_a = &local_32;
      puVar4 = &local_20;
      puVar5 = &local_2e;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      puVar4 = &local_36;
      puVar5 = &local_18;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      local_38 = 0x7a6;
      uVar6 = 0x1bb4;
      iVar3 = FUN_1def_1921();
      uVar7 = 0;
      if (iVar3 != 0) {
        local_a = (undefined2 *)0xda73;
        func_0x000297e6();
        local_a = (undefined2 *)0xda7b;
        func_0x000297e6();
        local_a = (undefined2 *)0xda83;
        FUN_28b3_100d();
        local_a = (undefined2 *)0xda8b;
        func_0x000297e6();
        local_a = (undefined2 *)0xda93;
        FUN_28b3_100d();
        local_a = (undefined2 *)0xda98;
        func_0x00029c9d();
        local_a = (undefined2 *)0xdaa0;
        func_0x000297e6();
        local_a = (undefined2 *)0xdaa8;
        FUN_28b3_100d();
        local_a = (undefined2 *)0xdab0;
        func_0x000297e6();
        local_a = (undefined2 *)0xdab8;
        FUN_28b3_100d();
        local_a = (undefined2 *)0xdabd;
        func_0x00029c9d();
        local_a = (undefined2 *)0xdac2;
        FUN_28b3_1163();
        uVar6 = 0x22b2;
        local_a = (undefined2 *)0xdac7;
        FUN_28b3_1181();
        if ((bool)uVar7) {
          local_2e = local_32;
          local_2c = local_30;
          local_2a = local_36;
          local_28 = local_34;
        }
        else {
          local_26 = local_32;
          local_24 = local_30;
          local_20 = local_34;
        }
      }
    }
    local_34 = uVar6;
  }
  local_19 = local_19 & 0xfc;
  puVar5 = &local_2e;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 3ab8:2f7e  FUN_3ab8_2f7e  3973 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_2f7e(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  code *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 **ppuVar11;
  undefined2 **ppuVar12;
  undefined2 *puVar13;
  uint uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined2 *puVar20;
  char *pcVar21;
  undefined4 uVar22;
  undefined1 local_386 [4];
  undefined2 *local_382 [25];
  int local_31e;
  undefined2 *local_31c;
  undefined2 local_31a;
  undefined1 local_318 [100];
  int local_2b4;
  undefined4 local_2b2;
  undefined1 local_2ae [44];
  undefined2 local_282 [4];
  undefined1 local_27a [8];
  char *local_272;
  byte local_26e;
  byte local_26c;
  int local_266;
  undefined4 local_264;
  int local_260;
  int iStack_25e;
  int local_25c;
  uint local_25a;
  int local_258;
  undefined4 local_256;
  undefined4 local_24e;
  undefined2 **ppuStack_24a;
  uint local_244;
  char *local_242;
  undefined1 local_240 [20];
  int local_22c;
  undefined2 local_22a [13];
  byte local_20f;
  char local_20d;
  byte local_20c;
  undefined2 local_20a [16];
  undefined2 local_1ea [113];
  undefined2 local_108 [4];
  byte local_ff;
  byte local_fe;
  int local_fc;
  undefined2 local_f2 [8];
  byte local_e1;
  byte local_de;
  int iStack_dc;
  undefined2 *local_d2;
  int local_d0;
  undefined2 *local_ce [25];
  uint local_6a;
  int local_68;
  undefined1 local_66 [42];
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  uint uStack_34;
  int iStack_32;
  uint uStack_30;
  int iStack_2e;
  undefined4 uStack_2c;
  undefined2 **ppuStack_28;
  int iStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  int iStack_16;
  undefined1 *puStack_14;
  undefined2 **ppuStack_12;
  undefined2 **ppuStack_10;
  undefined2 **ppuStack_e;
  undefined2 **ppuStack_c;
  
  FUN_21f2_0ebc();
  local_2b4 = 0;
  local_31c = (undefined2 *)*(undefined2 *)0xa700;
  local_31a = *(undefined2 *)0xa702;
  local_2b2._0_2_ = local_31c;
  local_2b2._2_2_ = local_31a;
LAB_3ab8_2fa8:
  while( true ) {
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_0e53();
    if (*(char *)0xed8 != '\0') break;
    ppuStack_c = (undefined2 **)0x22b2;
    ppuStack_e = (undefined2 **)0xdc06;
    FUN_21f2_3454();
    ppuStack_c = (undefined2 **)0x22b2;
    ppuStack_e = (undefined2 **)0xdc16;
    FUN_21f2_2d26();
    ppuVar11 = (undefined2 **)0x885;
    func_0x0000c3ca();
    *(undefined1 *)0x1062 = 1;
    if (local_2b4 == 0) {
      ppuStack_c = (undefined2 **)*(undefined2 *)0xa6e6;
      ppuStack_e = (undefined2 **)*(int *)0xa6e4;
      ppuStack_10 = (undefined2 **)*(undefined2 *)0xa6ea;
      ppuStack_12 = (undefined2 **)*(undefined2 *)0xa6e8;
      puStack_14 = (undefined1 *)*(undefined2 *)0xa6e6;
      iStack_16 = *(undefined2 *)0xa6e4;
      uStack_18 = 0;
      uStack_1c._2_2_ = local_240;
      uStack_1c._0_2_ = 0;
      uStack_20._2_2_ = 1;
      uStack_20._0_2_ = 0;
      pcVar4 = (code *)swi(0x3f);
      iVar7 = (*pcVar4)();
    }
    else {
      if (*(int *)0xc22 == 0) {
        ppuStack_c = (undefined2 **)0x2;
        ppuStack_e = (undefined2 **)0x12;
        ppuStack_10 = (undefined2 **)local_240;
        ppuStack_12 = (undefined2 **)0x885;
        ppuVar11 = (undefined2 **)0xdef;
        puStack_14 = (undefined1 *)&SUB_0000_dc89;
        FUN_1000_02b5();
      }
      ppuStack_c = (undefined2 **)*(undefined2 *)0xa6e6;
      ppuStack_e = (undefined2 **)*(int *)0xa6e4;
      ppuStack_10 = (undefined2 **)*(undefined2 *)0xa6ea;
      ppuStack_12 = (undefined2 **)*(undefined2 *)0xa6e8;
      puStack_14 = (undefined1 *)*(undefined2 *)0xa6e6;
      iStack_16 = *(undefined2 *)0xa6e4;
      uStack_18 = 0;
      uStack_1c._2_2_ = local_240;
      uStack_1c._0_2_ = 0;
      *(undefined2 *)0xc22 = 1;
      uStack_20._2_2_ = 1;
      uStack_20._0_2_ = 2;
      pcVar4 = (code *)swi(0x3f);
      iVar7 = (*pcVar4)();
    }
    if (iVar7 == -1) {
      return 0xffff;
    }
    if (*(int *)0x158 == 0) {
LAB_3ab8_3293:
      *(undefined2 *)0xc20 = 1;
      ppuStack_c = (undefined2 **)0x5a2;
      ppuStack_e = (undefined2 **)0x6f82;
      ppuStack_10 = local_382;
      puStack_14 = (undefined1 *)0xde33;
      ppuStack_12 = ppuVar11;
      FUN_21f2_3454();
      ppuStack_c = (undefined2 **)0x1176;
      ppuStack_e = local_382;
      ppuStack_10 = (undefined2 **)0x1;
      ppuStack_12 = (undefined2 **)0x22b2;
      puStack_14 = (undefined1 *)0xde51;
      iStack_25e = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) {
        ppuStack_c = (undefined2 **)0xde6d;
        func_0x0000daa6();
        FUN_1885_2ec3();
        ppuStack_c = (undefined2 **)0xde7b;
        func_0x0000daa6();
        ppuStack_c = (undefined2 **)0xde84;
        func_0x00008095();
      }
      if (*(int *)0x158 != 0) {
        return 0xfff5;
      }
      ppuVar12 = (undefined2 **)0x885;
      func_0x0000c3ca();
      if (iStack_25e == -1) {
        ppuStack_24a = (undefined2 **)0x0;
        if (local_2b4 != 0) goto LAB_3ab8_332e;
        ppuStack_c = (undefined2 **)*(undefined2 *)0xa6e6;
        ppuStack_e = (undefined2 **)*(undefined2 *)0xa6e4;
        ppuStack_10 = (undefined2 **)*(undefined2 *)0xa6ea;
        ppuStack_12 = (undefined2 **)*(undefined2 *)0xa6e8;
        puStack_14 = (undefined1 *)*(undefined2 *)0xa6e6;
        iStack_16 = *(undefined2 *)0xa6e4;
        uStack_18 = 0;
        uStack_1c._2_2_ = local_240;
        uStack_1c._0_2_ = 0;
        uStack_20._2_2_ = 0xd8f1;
        uStack_20._0_2_ = 0;
        pcVar4 = (code *)swi(0x3f);
        iVar7 = (*pcVar4)();
        if (iVar7 == -1) {
          if (*(int *)0x158 == 0) {
            return 0xffff;
          }
          ppuStack_c = (undefined2 **)0xdda6;
          func_0x0000daa6();
          FUN_1885_2ec3();
          ppuStack_c = (undefined2 **)0xddb4;
          func_0x0000daa6();
          goto LAB_3ab8_3235;
        }
        if (*(int *)0x158 != 0) {
          ppuStack_c = (undefined2 **)0xddd0;
          func_0x0000daa6();
          FUN_1885_2ec3();
          ppuStack_c = (undefined2 **)0xddde;
          func_0x0000daa6();
          ppuVar12 = (undefined2 **)0x7a6;
          ppuStack_c = (undefined2 **)0xdde7;
          func_0x00008095();
        }
      }
      ppuVar11 = ppuVar12;
      if (ppuStack_24a != (undefined2 **)0x0) {
        ppuStack_c = ppuStack_24a;
        ppuVar11 = (undefined2 **)0x11f2;
        ppuStack_10 = (undefined2 **)0xde00;
        ppuStack_e = ppuVar12;
        iVar7 = FUN_13bf_1819();
        if (iVar7 != 0) {
          if (param_1 == 1) goto LAB_3ab8_2ffc;
          goto LAB_3ab8_34c0;
        }
      }
      goto LAB_3ab8_3293;
    }
    ppuStack_c = (undefined2 **)0xdcdd;
    func_0x0000daa6();
    FUN_1885_2ec3();
    ppuStack_c = (undefined2 **)0xdceb;
    func_0x0000daa6();
    ppuStack_c = (undefined2 **)0xdcf4;
    func_0x00008095();
    if (*(char *)0x118 != '\0') {
      return 0xfff5;
    }
    if (*(char *)0x124 == '\0') {
      return 0xfff5;
    }
    if (*(int *)0x158 == 10000) {
      return 0xfff5;
    }
    if (*(int *)0xbc2 != 0) {
      return 0xfff5;
    }
    if (local_2b4 != 0) {
      return 0xfff5;
    }
    if ((*(int *)0xa62 != 0x1b) && ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) {
      if (*(byte *)0xb782 < 4) {
        return 0xfff5;
      }
      if (*(int *)0xa66 != *(int *)0xa62) {
        return 0xfff5;
      }
    }
    *(undefined2 *)0xa62 = 0x1b;
    *(undefined2 *)0x158 = 0;
    local_2b4 = 1;
  }
  ppuStack_c = (undefined2 **)local_318;
  ppuStack_e = (undefined2 **)0x22b2;
  ppuStack_10 = (undefined2 **)0xdb5f;
  func_0x0001263c();
  ppuStack_c = (undefined2 **)0x6f73;
  ppuStack_e = local_ce;
  ppuStack_10 = (undefined2 **)0x11f2;
  ppuStack_12 = (undefined2 **)0xdb79;
  FUN_21f2_3454();
  goto LAB_3ab8_2ffc;
LAB_3ab8_332e:
  FUN_1885_2ec3();
  ppuStack_c = (undefined2 **)0xdebb;
  func_0x00008095();
  goto LAB_3ab8_2fa8;
LAB_3ab8_34c0:
  ppuStack_c = (undefined2 **)0xd04;
  ppuStack_10 = (undefined2 **)0xe051;
  ppuStack_e = ppuVar11;
  FUN_21f2_2de0();
  ppuStack_c = (undefined2 **)0x22b2;
  ppuStack_e = (undefined2 **)0xe061;
  iVar7 = FUN_3ab8_1b7d();
  if (iVar7 != 0) {
LAB_3ab8_3235:
    ppuStack_c = (undefined2 **)0xddbd;
    func_0x00008095();
    return 0xffff;
  }
  if (*(int *)0x158 != 0) {
    return 0xfff5;
  }
  ppuStack_c = (undefined2 **)0x22b2;
  ppuStack_e = (undefined2 **)0xe081;
  iVar7 = FUN_21f2_505a();
  if ((iVar7 != 0) && (*(int *)0x7a34 == 0xd)) {
    ppuStack_c = (undefined2 **)0x22b2;
    ppuStack_e = (undefined2 **)0xe09b;
    FUN_1000_0599();
    func_0x00010526();
    ppuStack_c = (undefined2 **)0x1;
    ppuStack_e = (undefined2 **)0x14;
    ppuStack_10 = local_ce;
    ppuStack_12 = (undefined2 **)0xdef;
    puStack_14 = (undefined1 *)0xe0bb;
    FUN_1000_02b5();
    ppuStack_c = (undefined2 **)0x1;
    ppuStack_e = (undefined2 **)0x4;
    ppuStack_10 = (undefined2 **)0x860;
    ppuStack_12 = (undefined2 **)0x584;
    puStack_14 = (undefined1 *)0xdef;
    iStack_16 = 0xe0db;
    ppuStack_10 = (undefined2 **)FUN_13bf_091d();
    ppuStack_12 = (undefined2 **)0x11f2;
    puStack_14 = (undefined1 *)0xe0e3;
    FUN_1000_02b5();
    ppuVar11 = (undefined2 **)0x11f2;
    ppuStack_c = (undefined2 **)0xe0ef;
    FUN_10ad_1729();
    goto LAB_3ab8_34c0;
  }
  iStack_dc = 1;
  ppuStack_c = local_ce;
  ppuStack_e = (undefined2 **)0x22b2;
  ppuVar11 = (undefined2 **)0x22b2;
  ppuStack_10 = (undefined2 **)0xded7;
  iVar7 = func_0x000276d7();
  if (iVar7 == 0) {
    do {
      if (*(int *)0x158 != 0) goto LAB_3ab8_33f7;
      ppuStack_c = local_382;
      ppuStack_10 = (undefined2 **)0xdefb;
      ppuStack_e = ppuVar11;
      FUN_21f2_3454();
      ppuStack_c = (undefined2 **)0x2;
      ppuStack_e = (undefined2 **)0x14;
      ppuStack_10 = local_382;
      ppuStack_12 = (undefined2 **)0x22b2;
      puStack_14 = (undefined1 *)0xdf18;
      FUN_1000_02b5();
      *(undefined2 *)0xc22 = 1;
      ppuStack_c = (undefined2 **)0x6f96;
      ppuStack_e = local_382;
      ppuStack_10 = (undefined2 **)0xdef;
      ppuStack_12 = (undefined2 **)0xdf37;
      FUN_21f2_3454();
      ppuStack_c = (undefined2 **)&local_2b2;
      ppuStack_e = local_382;
      ppuStack_10 = (undefined2 **)0x1;
      ppuStack_12 = (undefined2 **)0x22b2;
      ppuVar11 = (undefined2 **)0x1bb4;
      puStack_14 = (undefined1 *)0xdf57;
      iStack_dc = FUN_1def_0904();
      if (*(int *)0x158 != 0) {
        return 0xfff5;
      }
      if (((iStack_dc == -1) || (iStack_dc == 1)) || (iStack_dc == 2)) goto LAB_3ab8_33f7;
    } while ((local_260 != 1) && (local_260 != 2));
    iStack_dc = local_260;
  }
LAB_3ab8_33f7:
  if (*(int *)0x158 != 0) {
    return 0xfff5;
  }
  do {
    if (iStack_dc != 1) goto LAB_3ab8_34af;
    ppuStack_c = local_382;
    ppuStack_10 = (undefined2 **)0xdfb9;
    ppuStack_e = ppuVar11;
    FUN_21f2_3454();
    ppuStack_c = (undefined2 **)0x2;
    ppuStack_e = (undefined2 **)0x12;
    ppuStack_10 = local_382;
    ppuStack_12 = (undefined2 **)0x22b2;
    puStack_14 = (undefined1 *)0xdfd6;
    FUN_1000_02b5();
    *(undefined2 *)0xc22 = 1;
    ppuStack_c = (undefined2 **)0xdef;
    ppuStack_e = (undefined2 **)0xdfed;
    FUN_21f2_3454();
    ppuStack_c = (undefined2 **)&local_2b2;
    ppuStack_e = local_382;
    ppuStack_10 = (undefined2 **)0x1;
    ppuStack_12 = (undefined2 **)0x22b2;
    ppuVar11 = (undefined2 **)0x1bb4;
    puStack_14 = (undefined1 *)0xe00c;
    iStack_dc = FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return 0xfff5;
    }
    if (((iStack_dc == -1) || (iStack_dc == 1)) || (iStack_dc == 2)) goto LAB_3ab8_34af;
  } while ((local_260 != 1) && (local_260 != 2));
  iStack_dc = local_260;
LAB_3ab8_34af:
  if ((iStack_dc != -1) && (iStack_dc != 2)) {
LAB_3ab8_2ffc:
    func_0x0000c3ca();
    func_0x000297e6();
    func_0x00029b6d();
    puVar10 = (undefined2 *)0x22b2;
    FUN_28b3_0e53();
    ppuStack_c = &local_d2;
    ppuStack_e = (undefined2 **)&local_244;
    ppuStack_10 = (undefined2 **)&local_6a;
    ppuStack_12 = (undefined2 **)0x22b2;
    puStack_14 = (undefined1 *)0xdbb8;
    FUN_3ab8_2be6();
    ppuStack_c = (undefined2 **)local_d2;
    ppuStack_e = (undefined2 **)local_242;
    ppuStack_10 = (undefined2 **)local_244;
    ppuStack_12 = (undefined2 **)local_68;
    puStack_14 = (undefined1 *)local_6a;
    iStack_16 = 0x22b2;
    uStack_18 = 0xdbd9;
    iVar7 = FUN_3ab8_2d23();
    if (iVar7 == 0) {
      uVar15 = *(undefined2 *)0xa700;
      uVar16 = *(undefined2 *)0xa702;
      *(undefined2 *)0xb2ba = uVar15;
      *(undefined2 *)0xb2bc = uVar16;
      *(undefined2 *)0xb2be = uVar15;
      *(undefined2 *)0xb2c0 = uVar16;
      *(undefined2 *)0xb2c2 = uVar15;
      *(undefined2 *)0xb2c4 = uVar16;
      *(undefined2 *)0xb2c6 = uVar15;
      *(undefined2 *)0xb2c8 = uVar16;
      local_68 = 0;
      local_6a = 0;
      local_258 = 0;
      for (local_25a = 1;
          (local_258 <= *(int *)0x14a &&
          ((local_258 < *(int *)0x14a || (local_25a <= *(uint *)0x148)))); local_25a = local_25a + 1
          ) {
        puVar13 = (undefined2 *)0x0;
        ppuStack_e = (undefined2 **)0xe173;
        ppuStack_c = (undefined2 **)puVar10;
        puVar20 = (undefined2 *)func_0x0000013f();
        puVar9 = (undefined2 *)puVar20;
        puVar10 = local_f2;
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        if ((local_de & 2) != 0) {
          bVar17 = 0xfffe < local_6a;
          local_6a = local_6a + 1;
          local_68 = local_68 + (uint)bVar17;
          if (local_e1 < 0x5a) {
            if (local_2b4 != 0) {
              ppuStack_c = (undefined2 **)0xe1af;
              FUN_3ab8_2de6();
            }
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe1c3;
            func_0x00029b55();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe1dc;
            func_0x00029b55();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe1f5;
            func_0x00029b55();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe20e;
            func_0x00029b55();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe227;
            func_0x00029b6d();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe240;
            func_0x00029b6d();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe259;
            func_0x00029b6d();
            FUN_28b3_0e3b();
            func_0x00029d78();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe26e;
            func_0x000299d1();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe277;
            func_0x000297e6();
            ppuStack_10 = (undefined2 **)local_f2;
            ppuStack_12 = (undefined2 **)0x22b2;
            puStack_14 = (undefined1 *)0xe281;
            func_0x00029b6d();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe287;
            FUN_28b3_0e3b();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe28c;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1c._2_2_ = (undefined1 *)0xe296;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1c._2_2_ = (undefined1 *)0xe29a;
            FUN_3ab8_2b20();
            func_0x000297e6();
            func_0x00029d78();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe2b5;
            func_0x000299d1();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe2be;
            func_0x000297e6();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe2c3;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            puVar13 = (undefined2 *)0x22b2;
            uStack_1c._2_2_ = (undefined1 *)0xe2cd;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1c._2_2_ = (undefined1 *)0xe2d1;
            FUN_3ab8_2b20();
          }
          ppuStack_e = (undefined2 **)0xe2e8;
          ppuStack_c = (undefined2 **)puVar13;
          local_382[0] = (undefined2 *)func_0x0000013f();
          puVar9 = (undefined2 *)local_382[0];
          puVar10 = local_f2;
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            puVar20 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar1 = *puVar20;
          }
        }
        puVar10 = (undefined2 *)0x0;
        local_258 = local_258 + (uint)(0xfffe < local_25a);
      }
      local_242 = (char *)0x0;
      local_244 = 0;
      local_258 = 0;
      for (local_25a = 1;
          (local_258 <= *(int *)0x14e &&
          ((local_258 < *(int *)0x14e || (local_25a <= *(uint *)0x14c)))); local_25a = local_25a + 1
          ) {
        ppuStack_e = (undefined2 **)0xe53a;
        ppuStack_c = (undefined2 **)puVar10;
        puVar20 = (undefined2 *)func_0x00000271();
        puVar9 = (undefined2 *)puVar20;
        puVar10 = local_22a;
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        if ((local_20c & 2) != 0) {
          local_22c = 1;
          ppuStack_c = (undefined2 **)0x0;
          ppuStack_e = (undefined2 **)0xe567;
          puVar20 = (undefined2 *)func_0x00000271();
          puVar9 = (undefined2 *)puVar20;
          puVar10 = local_1ea;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar10;
            puVar10 = puVar10 + 1;
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar2 = *puVar1;
          }
          puVar10 = local_1ea;
          puVar9 = local_20a;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            puVar20 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar1 = *puVar20;
          }
          if (local_20d != '\0') {
            ppuStack_c = (undefined2 **)local_20a;
            ppuStack_e = (undefined2 **)0x0;
            pcVar4 = (code *)swi(0x3f);
            local_22c = (*pcVar4)();
          }
          for (local_260 = 1; local_260 <= local_22c; local_260 = local_260 + 1) {
            puVar9 = local_22a;
            puVar10 = local_20a + local_260 * 0x10;
            for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar1 = puVar9;
              puVar9 = puVar9 + 1;
              puVar20 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar1 = *puVar20;
            }
            if (local_20f < 0x5a) {
              func_0x000297e6();
              ppuStack_c = (undefined2 **)0xe34b;
              func_0x00029b55();
              FUN_28b3_0e53();
              func_0x000297e6();
              ppuStack_c = (undefined2 **)0xe364;
              func_0x00029b55();
              FUN_28b3_0e53();
              func_0x000297e6();
              ppuStack_c = (undefined2 **)0xe37d;
              func_0x00029b6d();
              FUN_28b3_0e53();
              func_0x000297e6();
              ppuStack_c = (undefined2 **)0xe396;
              func_0x00029b6d();
              FUN_28b3_0e53();
              func_0x000297e6();
              ppuStack_c = (undefined2 **)0xe3af;
              func_0x00029b6d();
              FUN_28b3_0e53();
              ppuStack_c = (undefined2 **)local_386;
              ppuStack_e = local_382;
              ppuStack_10 = (undefined2 **)local_258;
              ppuStack_12 = (undefined2 **)local_25a;
              puStack_14 = (undefined1 *)0x22b2;
              iStack_16 = 0xe3d6;
              FUN_20a9_0f89();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029b6d();
              FUN_28b3_0e53();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029b6d();
              FUN_28b3_0e53();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029b6d();
              FUN_28b3_0e3b();
              func_0x00029d78();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0xe454;
              func_0x000299d1();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0xe45d;
              func_0x000297e6();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0xe466;
              FUN_28b3_100d();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0xe46f;
              func_0x00029b6d();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0xe478;
              FUN_28b3_0e3b();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0xe47d;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              uStack_1c._2_2_ = (undefined1 *)0xe487;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              uStack_1c._2_2_ = (undefined1 *)0xe48b;
              FUN_3ab8_2b20();
              func_0x000297e6();
              func_0x00029d78();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0xe4a6;
              func_0x000299d1();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0xe4af;
              func_0x000297e6();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0xe4b4;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              uStack_1c._2_2_ = (undefined1 *)0xe4be;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              uStack_1c._2_2_ = (undefined1 *)0xe4c2;
              FUN_3ab8_2b20();
              bVar17 = 0xfffe < local_244;
              local_244 = local_244 + 1;
              local_242 = (char *)((int)local_242 + (uint)bVar17);
              ppuStack_c = (undefined2 **)0x22b2;
              ppuStack_e = (undefined2 **)0xe4e5;
              puVar20 = (undefined2 *)func_0x00000271();
              puVar9 = (undefined2 *)puVar20;
              puVar10 = local_22a;
              for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                puVar2 = puVar9;
                puVar9 = puVar9 + 1;
                puVar1 = puVar10;
                puVar10 = puVar10 + 1;
                *puVar2 = *puVar1;
              }
            }
          }
        }
        puVar10 = (undefined2 *)0x0;
        local_258 = local_258 + (uint)(0xfffe < local_25a);
      }
      local_d2 = (undefined2 *)0x0;
      for (local_266 = 1; local_266 <= *(int *)0x152; local_266 = local_266 + 1) {
        ppuStack_c = (undefined2 **)0xe5d1;
        puVar20 = (undefined2 *)func_0x000003ef();
        puVar9 = (undefined2 *)puVar20;
        puVar10 = local_108;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        if ((local_fe & 2) != 0) {
          local_d2 = (undefined2 *)((int)local_d2 + 1);
          if (local_ff < 0x5a) {
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe60e;
            func_0x00029b55();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe627;
            func_0x00029b55();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe640;
            func_0x00029b6d();
            FUN_28b3_0e3b();
            func_0x00029d78();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe655;
            func_0x000299d1();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe65e;
            func_0x000297e6();
            ppuStack_10 = (undefined2 **)local_108;
            ppuStack_12 = (undefined2 **)0x22b2;
            puStack_14 = (undefined1 *)0xe668;
            func_0x00029b6d();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe66e;
            FUN_28b3_0e3b();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe673;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1c._2_2_ = (undefined1 *)0xe67d;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1c._2_2_ = (undefined1 *)0xe681;
            FUN_3ab8_2b20();
          }
          ppuStack_c = (undefined2 **)0xe692;
          puVar20 = (undefined2 *)func_0x000003ef();
          puVar9 = (undefined2 *)puVar20;
          puVar10 = local_108;
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar2 = *puVar1;
          }
        }
      }
      local_25c = 0;
      local_24e = (char *)CONCAT22(*(undefined2 *)0xc0ae,(char *)*(undefined2 *)0xc0ac);
      for (local_266 = 1; local_266 <= *(int *)0x150; local_266 = local_266 + 1) {
        uVar14 = 0;
        ppuStack_c = (undefined2 **)0xe6df;
        puVar20 = (undefined2 *)func_0x00000398();
        puVar9 = (undefined2 *)puVar20;
        puVar10 = local_282;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        if ((local_26c & 2) != 0) {
          local_25c = local_25c + 1;
          if (local_26e < 0x5a) {
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe71c;
            func_0x00029b55();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe735;
            func_0x00029b55();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe74e;
            func_0x00029b55();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe767;
            func_0x00029b55();
            FUN_28b3_0e53();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe780;
            func_0x00029b6d();
            FUN_28b3_0e3b();
            func_0x00029d78();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe795;
            func_0x000299d1();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe79e;
            func_0x000297e6();
            ppuStack_10 = (undefined2 **)local_282;
            ppuStack_12 = (undefined2 **)0x22b2;
            puStack_14 = (undefined1 *)0xe7a8;
            func_0x00029b6d();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe7ae;
            FUN_28b3_0e3b();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe7b3;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1c._2_2_ = (undefined1 *)0xe7bd;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1c._2_2_ = (undefined1 *)0xe7c1;
            FUN_3ab8_2b20();
            func_0x000297e6();
            ppuStack_c = (undefined2 **)0xe7d7;
            func_0x00029b6d();
            FUN_28b3_0e3b();
            func_0x00029d78();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe7ec;
            func_0x000299d1();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe7f5;
            func_0x000297e6();
            ppuStack_10 = (undefined2 **)local_27a;
            ppuStack_12 = (undefined2 **)0x22b2;
            puStack_14 = (undefined1 *)0xe7ff;
            func_0x00029b6d();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe805;
            FUN_28b3_0e3b();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0xe80a;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uVar14 = 0x22b2;
            uStack_1c._2_2_ = (undefined1 *)0xe814;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1c._2_2_ = (undefined1 *)0xe818;
            FUN_3ab8_2b20();
          }
          ppuStack_c = (undefined2 **)local_24e._2_2_;
          ppuStack_e = (undefined2 **)(char *)local_24e;
          ppuStack_12 = (undefined2 **)0xe830;
          ppuStack_10 = (undefined2 **)uVar14;
          pcVar21 = (char *)FUN_12c1_0061();
          do {
            pcVar6 = local_24e;
            pcVar5 = local_272;
            local_272 = (char *)CONCAT22(local_272._2_2_,(char *)local_272 + 1);
            cVar3 = *pcVar5;
            if ((char *)local_24e == (char *)0xffff) {
              local_24e._2_2_ = local_24e._2_2_ + 0x1000;
            }
            local_24e = (char *)CONCAT22(local_24e._2_2_,(char *)local_24e + 1);
            *pcVar6 = cVar3;
          } while (cVar3 != '\0');
          ppuStack_c = (undefined2 **)0xe87c;
          local_272 = pcVar21;
          local_256 = pcVar21;
          puVar20 = (undefined2 *)func_0x00000398();
          puVar9 = (undefined2 *)puVar20;
          puVar10 = local_282;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar2 = *puVar1;
          }
        }
      }
      uVar19 = local_68 == 0 && local_6a == 0;
      if ((((local_68 != 0 || local_6a != 0) ||
           (uVar19 = local_242 == (char *)0x0 && local_244 == 0,
           local_242 != (char *)0x0 || local_244 != 0)) ||
          (uVar19 = false, local_d2 != (undefined2 *)0x0)) || (uVar19 = false, local_25c != 0)) {
        uVar18 = 0;
        func_0x000297e6();
        FUN_28b3_100d();
        FUN_28b3_0e3b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_100d();
        FUN_28b3_0e3b();
        FUN_28b3_1181();
        if ((bool)uVar18 || (bool)uVar19) {
          func_0x000297e6();
        }
        else {
          func_0x000297e6();
        }
        func_0x00029b85();
        FUN_28b3_0e53();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b55();
        FUN_28b3_0e53();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b55();
        FUN_28b3_0e53();
        if (*(char *)0xed8 == '\0') {
          if (param_1 == 0) {
            ppuStack_c = (undefined2 **)local_66;
            ppuStack_e = (undefined2 **)0x22b2;
            ppuStack_10 = (undefined2 **)0xe9b3;
            func_0x0001263c();
            ppuStack_c = (undefined2 **)0x11f2;
            ppuStack_e = (undefined2 **)0xe9c3;
            FUN_21f2_2d26();
            ppuStack_c = (undefined2 **)0x22b2;
            ppuStack_e = (undefined2 **)0xe9d2;
            FUN_21f2_2d26();
          }
          else {
            ppuStack_c = (undefined2 **)0x22b2;
            ppuStack_e = (undefined2 **)0xe9e1;
            FUN_21f2_3454();
          }
        }
        else {
          ppuStack_c = (undefined2 **)0x22b2;
          ppuStack_e = (undefined2 **)0xe99a;
          func_0x00024c86();
        }
        ppuStack_c = (undefined2 **)0x22b2;
        ppuStack_e = (undefined2 **)0xe9f0;
        local_d0 = FUN_21f2_34ec();
        if (local_d0 == -1) {
          ppuStack_c = (undefined2 **)0xea01;
          FUN_3ab8_0000();
        }
        ppuStack_c = (undefined2 **)0xea0b;
        FUN_21f2_26c2();
        if (*(int *)0x158 != 0) {
          return 0xfff5;
        }
        ppuStack_c = (undefined2 **)local_66;
        ppuStack_e = (undefined2 **)0x22b2;
        ppuStack_10 = (undefined2 **)0xea27;
        iVar7 = FUN_21f2_5804();
        if (iVar7 != 0) {
          ppuStack_c = (undefined2 **)0xea36;
          FUN_3ab8_0000();
        }
        if (*(int *)0x158 != 0) {
          return 0xfff5;
        }
        local_266 = 0;
        do {
          *(undefined1 *)(local_266 + -0x40b8) = 0x20;
          local_266 = local_266 + 1;
        } while (local_266 < 200);
        *(undefined1 *)0xc00f = 10;
        ppuStack_c = (undefined2 **)0x22b2;
        ppuStack_e = (undefined2 **)0xea6e;
        func_0x00024c86();
        local_266 = 0;
        do {
          *(undefined1 *)(local_266 + -0x4090) = *(undefined1 *)(local_266 + -0x4102);
          local_266 = local_266 + 1;
        } while (local_266 < 0x40);
        ppuStack_c = (undefined2 **)*(undefined2 *)0xbc78;
        ppuStack_e = (undefined2 **)0xbf48;
        ppuStack_10 = (undefined2 **)*(undefined2 *)0xd12;
        ppuStack_12 = (undefined2 **)0x22b2;
        puStack_14 = (undefined1 *)0xeaa8;
        iVar7 = func_0x00027743();
        if (iVar7 != 0) {
          ppuStack_c = (undefined2 **)0xeab7;
          FUN_3ab8_0000();
        }
        if (local_31e < 200) {
          ppuStack_c = (undefined2 **)0xeac8;
          FUN_3ab8_0000();
        }
        if (*(int *)0x158 != 0) {
          return 0xfff5;
        }
        local_266 = 0;
        do {
          *(undefined1 *)(local_266 + -0x40b8) = 0x20;
          local_266 = local_266 + 1;
        } while (local_266 < 200);
        *(undefined1 *)0xc00f = 10;
        func_0x000297e6();
        func_0x00029d78();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0xeb0b;
        func_0x000299d1();
        ppuStack_10 = (undefined2 **)local_fc;
        ppuStack_12 = (undefined2 **)0x22b2;
        puStack_14 = (undefined1 *)0xeb18;
        func_0x000297e6();
        ppuStack_12 = (undefined2 **)0x22b2;
        puStack_14 = (undefined1 *)0xeb1d;
        func_0x00029d78();
        uStack_1c._2_2_ = (undefined1 *)0x22b2;
        uStack_1c._0_2_ = 0xeb27;
        func_0x000299d1();
        uStack_1c._2_2_ = (undefined1 *)0x22b2;
        uStack_1c._0_2_ = 0xeb30;
        func_0x000297e6();
        uStack_1c._2_2_ = (undefined1 *)0x22b2;
        uStack_1c._0_2_ = 0xeb35;
        func_0x00029d78();
        uStack_24._2_2_ = 0x22b2;
        uStack_24._0_2_ = 0xeb3f;
        func_0x000299d1();
        uStack_24._2_2_ = 0x22b2;
        uStack_24._0_2_ = 0xeb48;
        func_0x000297e6();
        uStack_24._2_2_ = 0x22b2;
        uStack_24._0_2_ = 0xeb4d;
        func_0x00029d78();
        uStack_2c._2_2_ = (undefined2 **)0x22b2;
        uStack_2c._0_2_ = (undefined2 **)0xeb57;
        func_0x000299d1();
        uStack_2c._2_2_ = (undefined2 **)local_25c;
        uStack_2c._0_2_ = (undefined2 **)local_d2;
        iStack_2e = (int)local_242;
        uStack_30 = local_244;
        iStack_32 = local_68;
        uStack_34 = local_6a;
        uStack_36 = 0x6fca;
        uStack_38 = 0xbf48;
        uStack_3a = 0x22b2;
        uStack_3c = 0xeb7a;
        FUN_21f2_3454();
        ppuStack_c = (undefined2 **)*(undefined2 *)0xbc78;
        ppuStack_e = (undefined2 **)0xbf48;
        ppuStack_10 = (undefined2 **)*(undefined2 *)0xd12;
        ppuStack_12 = (undefined2 **)0x22b2;
        puStack_14 = (undefined1 *)0xeb98;
        iVar7 = func_0x00027743();
        if (iVar7 != 0) {
          ppuStack_c = (undefined2 **)0xeba7;
          FUN_3ab8_0000();
        }
        if (local_31e < 200) {
          ppuStack_c = (undefined2 **)0xebb8;
          FUN_3ab8_0000();
        }
        if (*(int *)0x158 != 0) {
          return 0xfff5;
        }
        ppuStack_c = (undefined2 **)local_68;
        ppuStack_e = (undefined2 **)local_6a;
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0xebd4;
        local_264 = FUN_21f2_5a12();
        if (*(int *)0xbed2 == 0) {
          ppuStack_10 = (undefined2 **)0x0;
          ppuStack_12 = (undefined2 **)0x16;
          iStack_16 = *(uint *)0x148 + 1;
          puStack_14 = (undefined1 *)(*(int *)0x14a + (uint)(0xfffe < *(uint *)0x148));
          uStack_18 = 0x22b2;
          uStack_1c._2_2_ = (undefined1 *)0xec19;
          uVar22 = FUN_21f2_5a12();
          local_24e = (char *)CONCAT22(((int)((ulong)uVar22 >> 0x10) +
                                       (uint)CARRY2((uint)uVar22,*(uint *)0xbc7e)) * 0x1000 +
                                       *(int *)0xbc80,(uint)uVar22 + *(uint *)0xbc7e);
        }
        else {
          ppuStack_10 = (undefined2 **)0x0;
          ppuStack_12 = (undefined2 **)0x16;
          iStack_16 = *(uint *)0x148 + 1;
          puStack_14 = (undefined1 *)(*(int *)0x14a + (uint)(0xfffe < *(uint *)0x148));
          uStack_18 = 0x22b2;
          uStack_1c._2_2_ = (undefined1 *)0xebfd;
          local_24e = (char *)FUN_21f2_5a12();
        }
        uStack_18 = *(undefined2 *)0xbed2;
        uStack_24._2_2_ = 0x22b2;
        uStack_24._0_2_ = 0xec43;
        uStack_20 = local_24e;
        uStack_1c = local_264;
        FUN_3ab8_0157();
        if (*(int *)0x158 != 0) {
          return 0xfff5;
        }
        uStack_18 = 0x22b2;
        uStack_1c._2_2_ = (undefined1 *)0xec5f;
        uStack_1c = func_0x00027a04();
        uStack_18 = *(undefined2 *)0xc718;
        local_264 = uStack_1c;
        if (*(int *)0xbed2 == 0) {
          uStack_20._2_2_ = 0x22b2;
          uStack_20._0_2_ = 0xec9e;
          uVar22 = func_0x00027a04();
          local_24e = (char *)CONCAT22(((int)((ulong)uVar22 >> 0x10) +
                                       (uint)CARRY2((uint)uVar22,*(uint *)0xb788)) * 0x1000 +
                                       *(int *)0xb78a,(uint)uVar22 + *(uint *)0xb788);
        }
        else {
          uStack_20._2_2_ = 0x22b2;
          uStack_20._0_2_ = 0xec88;
          local_24e = (char *)func_0x00027a04();
        }
        uStack_24._2_2_ = 0x22b2;
        uStack_24._0_2_ = 0xecbc;
        uStack_20 = local_24e;
        FUN_3ab8_0157();
        if (*(int *)0x158 != 0) {
          return 0xfff5;
        }
        uStack_18 = 0;
        uStack_1c._2_2_ = (undefined1 *)0xc;
        uVar14 = *(uint *)0x152;
        uStack_20._2_2_ = uVar14 + 1;
        uStack_1c._0_2_ = ((int)uVar14 >> 0xf) + (uint)(0xfffe < uVar14);
        uStack_20._0_2_ = 0x22b2;
        uStack_24._2_2_ = 0xece0;
        uVar22 = FUN_21f2_5a12();
        ppuStack_28 = (undefined2 **)((uint)uVar22 + *(uint *)0xbe82);
        iStack_26 = ((int)((ulong)uVar22 >> 0x10) + (uint)CARRY2((uint)uVar22,*(uint *)0xbe82)) *
                    0x1000 + *(int *)0xbe84;
        local_24e = (char *)CONCAT22(iStack_26,ppuStack_28);
        uStack_20._0_2_ = 0;
        local_264 = (long)(int)local_d2 * 0xc;
        uStack_2c._2_2_ = (undefined2 **)0x22b2;
        uStack_2c._0_2_ = (undefined2 **)0xed16;
        uStack_24 = local_264;
        FUN_3ab8_0157();
        if (*(int *)0x158 != 0) {
          return 0xfff5;
        }
        uStack_20._0_2_ = 0;
        uStack_24._2_2_ = 0x18;
        uVar14 = *(uint *)0x150;
        iStack_26 = uVar14 + 1;
        uStack_24._0_2_ = ((int)uVar14 >> 0xf) + (uint)(0xfffe < uVar14);
        ppuStack_28 = (undefined2 **)0x22b2;
        uStack_2c._2_2_ = (undefined2 **)0xed3a;
        uVar22 = FUN_21f2_5a12();
        uStack_30 = (uint)uVar22 + *(uint *)0xbe9a;
        iStack_2e = ((int)((ulong)uVar22 >> 0x10) + (uint)CARRY2((uint)uVar22,*(uint *)0xbe9a)) *
                    0x1000 + *(int *)0xbe9c;
        local_24e = (char *)CONCAT22(iStack_2e,uStack_30);
        ppuStack_28 = (undefined2 **)0x0;
        local_264 = (long)local_25c * 0x18;
        iStack_32 = 0x22b2;
        uStack_34 = 0xed70;
        uStack_2c = local_264;
        FUN_3ab8_0157();
        if (*(int *)0x158 != 0) {
          return 0xfff5;
        }
        local_24e = (char *)CONCAT22(*(undefined2 *)0xc0ae,*(undefined2 *)0xc0ac);
        ppuStack_28 = (undefined2 **)0x0;
        local_264._2_2_ = local_fc >> 0xf;
        local_264._0_2_ = local_fc;
        uStack_2c._0_2_ = (undefined2 **)local_fc;
        iStack_2e = *(undefined2 *)0xc0ae;
        uStack_30 = *(undefined2 *)0xc0ac;
        iStack_32 = 0x22b2;
        uStack_34 = 0xeda7;
        uStack_2c._2_2_ = (undefined2 **)local_264._2_2_;
        FUN_3ab8_0157();
        if (*(int *)0x158 != 0) {
          return 0xfff5;
        }
        ppuStack_28 = (undefined2 **)*(undefined2 *)0xd12;
        uStack_2c._2_2_ = (undefined2 **)0x22b2;
        uVar15 = 0x22b2;
        uStack_2c._0_2_ = (undefined2 **)0xedbd;
        func_0x000276be();
        *(undefined2 *)0xd12 = 0;
        if (*(char *)0xed8 == '\0') {
          if (param_1 != 1) {
            ppuStack_28 = local_ce;
            uStack_2c._2_2_ = (undefined2 **)local_318;
            uStack_2c._0_2_ = (undefined2 **)0x22b2;
            iStack_2e = 0xede8;
            func_0x00024c86();
            ppuStack_28 = (undefined2 **)0x2e;
            uStack_2c._2_2_ = (undefined2 **)local_318;
            uStack_2c._0_2_ = (undefined2 **)0x22b2;
            iStack_2e = 0xedf8;
            puVar8 = (undefined1 *)FUN_21f2_3b7a();
            *puVar8 = 0;
            ppuStack_28 = (undefined2 **)0x6fe7;
            uStack_2c._2_2_ = (undefined2 **)local_318;
            uStack_2c._0_2_ = (undefined2 **)0x22b2;
            iStack_2e = 0xee0d;
            FUN_21f2_2d26();
            ppuStack_28 = (undefined2 **)local_2ae;
            uStack_2c._2_2_ = (undefined2 **)0x0;
            uStack_2c._0_2_ = (undefined2 **)local_318;
            iStack_2e = 0x22b2;
            uVar15 = 0x22b2;
            uStack_30 = 0xee21;
            iVar7 = func_0x000276d7();
            if (iVar7 == 0) {
              ppuStack_28 = (undefined2 **)local_318;
              uStack_2c._2_2_ = (undefined2 **)0x22b2;
              uVar15 = 0x22b2;
              uStack_2c._0_2_ = (undefined2 **)0xee32;
              iVar7 = FUN_21f2_5778();
              if (iVar7 != 0) {
                ppuStack_28 = (undefined2 **)0x830;
                uStack_2c._2_2_ = (undefined2 **)0x22b2;
                uVar15 = 0x11f2;
                uStack_2c._0_2_ = (undefined2 **)0xee40;
                FUN_13bf_0a03();
              }
            }
            ppuStack_28 = (undefined2 **)local_2ae;
            uStack_2c._2_2_ = (undefined2 **)0x0;
            uStack_2c._0_2_ = local_ce;
            uVar16 = 0x22b2;
            uStack_30 = 0xee53;
            iStack_2e = uVar15;
            iVar7 = func_0x000276d7();
            if (iVar7 == 0) {
              ppuStack_28 = (undefined2 **)local_318;
              uStack_2c._2_2_ = local_ce;
              uStack_2c._0_2_ = (undefined2 **)0x22b2;
              uVar16 = 0x22b2;
              iStack_2e = 0xee69;
              iVar7 = FUN_21f2_51d0();
              if (iVar7 != 0) {
                ppuStack_28 = (undefined2 **)0x6fec;
                uStack_2c._2_2_ = (undefined2 **)0x22b2;
                uVar16 = 0x11f2;
                uStack_2c._0_2_ = (undefined2 **)0xee78;
                FUN_13bf_0a03();
              }
            }
            ppuStack_28 = (undefined2 **)0xeae;
            uStack_2c._2_2_ = (undefined2 **)0xe82;
            uStack_2c._0_2_ = (undefined2 **)0xbf48;
            uStack_30 = 0xee8a;
            iStack_2e = uVar16;
            func_0x0001263c();
            ppuStack_28 = (undefined2 **)0x6ff5;
            uStack_2c._2_2_ = (undefined2 **)0xbf48;
            uStack_2c._0_2_ = (undefined2 **)0x11f2;
            iStack_2e = 0xee9a;
            FUN_21f2_2d26();
            ppuStack_28 = (undefined2 **)0xbc;
            uStack_2c._2_2_ = (undefined2 **)0xbf48;
            uStack_2c._0_2_ = (undefined2 **)0x22b2;
            iStack_2e = 0xeea9;
            FUN_21f2_2d26();
            ppuStack_28 = local_ce;
            uStack_2c._2_2_ = (undefined2 **)0xbf48;
            uStack_2c._0_2_ = (undefined2 **)0x22b2;
            uVar15 = 0x22b2;
            iStack_2e = 0xeeb9;
            iVar7 = FUN_21f2_51d0();
            if (iVar7 != 0) {
              ppuStack_28 = (undefined2 **)0x6ff7;
              uStack_2c._2_2_ = (undefined2 **)0x22b2;
              uVar15 = 0x11f2;
              uStack_2c._0_2_ = (undefined2 **)0xeec8;
              FUN_13bf_0a03();
            }
          }
          ppuStack_28 = (undefined2 **)0x0;
          uStack_2c._0_2_ = (undefined2 **)0xeed1;
          uStack_2c._2_2_ = (undefined2 **)uVar15;
          func_0x00008095();
          *(undefined2 *)0x6d4c = 1;
          *(undefined2 *)0x6d4e = 0;
          return 0;
        }
        return 0;
      }
    }
    *(undefined2 *)0x158 = 1;
    return 0xfff5;
  }
  goto LAB_3ab8_34c0;
}



/* 3ab8:4363  FUN_3ab8_4363  555 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4363(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_18 [3];
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_a;
  
  FUN_21f2_0ebc();
  puVar5 = local_18;
  puVar4 = param_1;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_a = 0xef08;
  func_0x000297e6();
  uStack_a = 0xef10;
  func_0x00029b6d();
  uStack_a = 0xef15;
  func_0x00029d78();
  uStack_a = 0xef1d;
  func_0x00029c2c();
  uStack_a = 0xef25;
  FUN_28b3_0e3b();
  uStack_a = 0xef2d;
  FUN_28b3_0e53();
  uStack_a = 0xef35;
  func_0x000297e6();
  uStack_a = 0xef3a;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xef44;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xef4d;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xef55;
  func_0x00029b6d();
  local_10 = 0x22b2;
  uStack_12 = 0xef5a;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xef62;
  func_0x00029c2c();
  local_10 = 0x22b2;
  uStack_12 = 0xef6a;
  FUN_28b3_0e3b();
  local_10 = 0x22b2;
  uStack_12 = 0xef6f;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  func_0x000299d1();
  local_18[0] = 0;
  FUN_1def_05d1(0x22b2);
  uStack_a = 0xef8b;
  func_0x000297e6();
  uStack_a = 0xef90;
  func_0x00029d78();
  uStack_a = 0xef98;
  func_0x00029c74();
  uStack_a = 0xefa0;
  FUN_28b3_0e53();
  uStack_a = 0xefa8;
  func_0x000297e6();
  uStack_a = 0xefad;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xefb7;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xefbf;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xefc4;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  func_0x000299d1();
  local_18[0] = 0;
  func_0x0001e558(0x22b2);
  uStack_a = 0xefe0;
  func_0x000297e6();
  uStack_a = 0xefe5;
  func_0x00029d78();
  uStack_a = 0xefed;
  func_0x00029c74();
  uStack_a = 0xeff5;
  FUN_28b3_0e53();
  uStack_a = 0xeffe;
  func_0x000297e6();
  uStack_a = 0xf006;
  func_0x00029b6d();
  uStack_a = 0xf00b;
  func_0x00029d78();
  uStack_a = 0xf013;
  func_0x00029c2c();
  uStack_a = 0xf01b;
  FUN_28b3_0e3b();
  uStack_a = 0xf023;
  FUN_28b3_0e53();
  uStack_a = 0xf02c;
  func_0x000297e6();
  uStack_a = 0xf034;
  func_0x00029b6d();
  uStack_a = 0xf039;
  func_0x00029d78();
  uStack_a = 0xf041;
  func_0x00029c2c();
  uStack_a = 0xf049;
  FUN_28b3_0e3b();
  uStack_a = 0xf051;
  FUN_28b3_0e53();
  uStack_a = 0xf059;
  func_0x000297e6();
  uStack_a = 0xf05e;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xf068;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xf070;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xf075;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  func_0x000299d1();
  local_18[0] = 0;
  FUN_1def_05d1(0x22b2);
  uStack_a = 0xf091;
  func_0x000297e6();
  uStack_a = 0xf096;
  func_0x00029d78();
  uStack_a = 0xf09e;
  func_0x00029c74();
  uStack_a = 0xf0a6;
  FUN_28b3_0e53();
  uStack_a = 0xf0ae;
  func_0x000297e6();
  uStack_a = 0xf0b3;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xf0bd;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xf0c5;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xf0ca;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  func_0x000299d1();
  local_18[0] = 0;
  func_0x0001e558(0x22b2);
  uStack_a = 0xf0e6;
  func_0x000297e6();
  uStack_a = 0xf0eb;
  func_0x00029d78();
  uStack_a = 0xf0f3;
  func_0x00029c74();
  uStack_a = 0xf0fb;
  FUN_28b3_0e53();
  puVar5 = local_18;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 3ab8:458e  FUN_3ab8_458e  741 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

void __cdecl16far
FUN_3ab8_458e(uint param_1,undefined2 *******param_2,int *param_3,undefined2 *******param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,int *param_8,uint *param_9,
             undefined2 param_10,uint param_11,undefined2 ******param_12,undefined2 ******param_13,
             undefined2 param_14,undefined2 param_15)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *******pppppppuVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *******pppppppuVar6;
  undefined2 *******pppppppuVar7;
  undefined2 unaff_SS;
  undefined2 *******unaff_DS;
  bool bVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  uint local_7c;
  undefined2 *******local_7a;
  uint local_5e;
  undefined2 *******local_5c;
  undefined2 *******local_2a;
  undefined2 *******local_28 [2];
  undefined2 local_24;
  undefined2 uStack_22;
  undefined2 *******local_20;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  uint local_14;
  undefined2 *******local_12;
  undefined2 *******local_10;
  undefined2 *******local_e;
  undefined2 *******pppppppuStack_c;
  undefined2 *******local_8;
  uint uVar11;
  undefined2 *******pppppppuVar12;
  
  FUN_21f2_0ebc();
  if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1 == 0)))) {
    if (param_9[1] == 0 && *param_9 == 0) {
      return;
    }
    local_7c = *(uint *)0x148 + 1;
    local_7a = (undefined2 *******)(*(int *)0x14a + (uint)(0xfffe < *(uint *)0x148));
    uVar11 = *param_9;
    pppppppuVar12 = (undefined2 *******)param_9[1];
    param_9[1] = 0;
    *param_9 = 0;
  }
  else {
    local_7c = param_1;
    local_7a = param_2;
    *param_9 = param_1;
    param_9[1] = (uint)param_2;
    uVar11 = param_1;
    pppppppuVar12 = param_2;
  }
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029d78();
  FUN_28b3_1c08();
  FUN_28b3_1177();
  pppppppuVar6 = (undefined2 *******)0x22b2;
  FUN_28b3_0e53();
  local_5e = local_7c;
  local_5c = local_7a;
  do {
    if (((int)pppppppuVar12 < (int)local_5c) ||
       (((int)pppppppuVar12 <= (int)local_5c && (uVar11 < local_5e)))) {
      return;
    }
    pppppppuVar7 = (undefined2 *******)0x0;
    local_e = (undefined2 *******)0xf3a5;
    pppppppuStack_c = pppppppuVar6;
    puVar10 = (undefined2 *)func_0x0000013f();
    puVar5 = (undefined2 *)puVar10;
    pppppppuVar6 = local_28;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      pppppppuVar3 = pppppppuVar6;
      pppppppuVar6 = pppppppuVar6 + 1;
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      *pppppppuVar3 = (undefined2 ******)*puVar2;
    }
    local_8 = unaff_DS;
    if (local_18._1_1_ < 0x5a) {
      if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1 == 0)))) {
        if ((local_14 & 1) != 0) goto LAB_3ab8_4792;
      }
      else {
        pppppppuStack_c = (undefined2 *******)0x0;
        local_e = (undefined2 *******)0xf3df;
        uVar9 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar9 + 0x14);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      pppppppuStack_c = (undefined2 *******)param_15;
      local_e = (undefined2 *******)param_14;
      local_10 = (undefined2 *******)param_13;
      local_12 = (undefined2 *******)param_12;
      local_14 = param_11;
      uStack_16 = param_10;
      local_18 = 0;
      uStack_1a = 0xf1fa;
      func_0x000297e6();
      local_18 = 0x22b2;
      uStack_1a = 0xf1ff;
      func_0x00029d78();
      local_20 = (undefined2 *******)0x22b2;
      uStack_22 = 0xf209;
      func_0x000299d1();
      local_20 = local_28;
      uStack_22 = 0x22b2;
      local_24 = 0xf211;
      FUN_3ab8_4363();
      func_0x000297e6();
      func_0x000299d1();
      func_0x000297e6();
      func_0x000299d1();
      func_0x000297e6();
      func_0x000299d1();
      func_0x000297e6();
      local_10 = (undefined2 *******)0x22b2;
      local_12 = (undefined2 *******)0xf256;
      func_0x000299d1();
      local_10 = (undefined2 *******)0x22b2;
      local_12 = (undefined2 *******)0xf25e;
      func_0x000297e6();
      local_18 = 0x22b2;
      uStack_1a = 0xf268;
      func_0x000299d1();
      local_18 = 0x22b2;
      uStack_1a = 0xf270;
      func_0x000297e6();
      local_20 = (undefined2 *******)0x22b2;
      uStack_22 = 0xf27a;
      func_0x000299d1();
      local_20 = (undefined2 *******)0x22b2;
      uStack_22 = 0xf282;
      func_0x000297e6();
      local_20 = (undefined2 *******)0x22b2;
      uStack_22 = 0xf287;
      func_0x00029d78();
      local_20 = (undefined2 *******)0x22b2;
      uStack_22 = 0xf28f;
      func_0x000299b9();
      local_28[0] = (undefined2 *******)0x22b2;
      local_2a = (undefined2 *******)0xf299;
      func_0x000299d1();
      local_28[0] = &local_2a;
      local_2a = &local_10;
      iVar4 = FUN_1885_52fe(&stack0xfff6,&local_12);
      if (iVar4 == 0) {
        pppppppuVar6 = (undefined2 *******)*(undefined2 *)((local_18 & 0xff) * 2 + 0xa88);
        pppppppuStack_c = &local_12;
        local_e = (undefined2 *******)&stack0xfff6;
        local_10 = (undefined2 *******)0x1bb4;
        pppppppuVar7 = (undefined2 *******)0x1b6e;
        local_12 = (undefined2 *******)0xf2d8;
        iVar4 = FUN_1885_2edd();
        local_8 = &local_2a;
        if (iVar4 != 0) {
          pppppppuStack_c = local_2a;
          local_e = local_10;
          local_10 = local_12;
          local_12 = (undefined2 *******)0x1;
          local_14 = 0x1b6e;
          pppppppuVar7 = (undefined2 *******)0xdef;
          uStack_16 = 0xf2f7;
          func_0x0000f19e();
          local_8 = pppppppuVar6;
        }
      }
      else {
        local_8 = local_5c;
        pppppppuStack_c = (undefined2 *******)0x1bb4;
        pppppppuVar7 = (undefined2 *******)0x0;
        local_e = (undefined2 *******)0xf307;
        uVar9 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar9 + 0x14);
        *pbVar1 = *pbVar1 | 1;
      }
    }
LAB_3ab8_4792:
    pppppppuVar6 = pppppppuVar7;
    if (local_8 != (undefined2 *******)0x0) {
      if (((byte)local_5e & 0xf) == 0xf) {
        pppppppuStack_c = (undefined2 *******)param_6;
        local_e = (undefined2 *******)param_5;
        local_10 = param_4;
        pppppppuVar6 = (undefined2 *******)0x3bf;
        local_14 = 0xf335;
        local_12 = pppppppuVar7;
        iVar4 = func_0x00006608();
        *param_3 = iVar4;
        if (*(char *)0xc0e != '\0') {
          return;
        }
        if ((*param_3 != 0) || (*param_8 != 0)) {
          pppppppuStack_c = (undefined2 *******)0xf35f;
          func_0x0000daa6();
          pppppppuVar6 = (undefined2 *******)0x885;
          func_0x0000c3ca();
        }
      }
      else if ((*(byte *)0xc3be & 1) == 0) {
        pppppppuVar6 = (undefined2 *******)0x885;
        pppppppuStack_c = (undefined2 *******)0xf383;
        func_0x0000daa6();
      }
      else {
        pppppppuVar6 = (undefined2 *******)0x885;
        func_0x0000dc89();
      }
    }
    bVar8 = 0xfffe < local_5e;
    local_5e = local_5e + 1;
    local_5c = (undefined2 *******)((int)local_5c + (uint)bVar8);
  } while( true );
}



/* 3ab8:4873  FUN_3ab8_4873  583 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4873(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 local_36;
  undefined2 local_34;
  undefined4 local_2e;
  undefined2 local_22 [3];
  undefined2 uStack_1c;
  undefined2 local_1a;
  undefined2 auStack_18 [3];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 local_a;
  
  FUN_21f2_0ebc();
  puVar6 = local_22;
  puVar3 = param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  local_a = 0xf417;
  func_0x000297e6();
  local_a = 0xf41c;
  func_0x00029d78();
  local_a = 0xf424;
  func_0x00029c2c();
  local_a = 0xf42c;
  FUN_28b3_0e53();
  local_a = 0xf435;
  func_0x000297e6();
  local_a = 0xf43a;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf444;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf44d;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf452;
  func_0x00029d78();
  auStack_18[0] = 0x22b2;
  local_1a = 0xf45c;
  func_0x000299d1();
  puVar3 = &local_36;
  puVar6 = local_22;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  puVar3 = (undefined2 *)FUN_21f2_001a();
  puVar6 = local_22;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  local_a = 0xf488;
  func_0x000297e6();
  local_a = 0xf490;
  func_0x00029b6d();
  local_a = 0xf495;
  func_0x00029d78();
  local_a = 0xf49d;
  func_0x00029c2c();
  local_a = 0xf4a5;
  FUN_28b3_0e3b();
  local_a = 0xf4ad;
  FUN_28b3_0e53();
  local_a = 0xf4b5;
  func_0x000297e6();
  local_a = 0xf4ba;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf4c4;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf4cd;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf4d5;
  func_0x00029b6d();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf4da;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf4e2;
  func_0x00029c2c();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf4ea;
  FUN_28b3_0e3b();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf4ef;
  func_0x00029d78();
  auStack_18[0] = 0x22b2;
  local_1a = 0xf4f9;
  func_0x000299d1();
  auStack_18[0] = 0;
  local_1a = 0x22b2;
  uStack_1c = 0xf501;
  FUN_1def_05d1();
  local_a = 0xf50b;
  func_0x000297e6();
  local_a = 0xf510;
  func_0x00029d78();
  local_a = 0xf518;
  func_0x00029c74();
  local_a = 0xf520;
  FUN_28b3_0e53();
  local_a = 0xf528;
  func_0x000297e6();
  local_a = 0xf52d;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf537;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf53f;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf544;
  func_0x00029d78();
  auStack_18[0] = 0x22b2;
  local_1a = 0xf54e;
  func_0x000299d1();
  auStack_18[0] = 0;
  local_1a = 0x22b2;
  uStack_1c = 0xf556;
  func_0x0001e558();
  uVar7 = (undefined1 *)0xffed < auStack_18;
  uVar8 = &stack0x0000 == (undefined1 *)0x6;
  local_a = 0xf560;
  func_0x000297e6();
  local_a = 0xf565;
  func_0x00029d78();
  local_a = 0xf56d;
  func_0x00029c74();
  local_a = 0xf575;
  FUN_28b3_0e53();
  while( true ) {
    local_a = 0xf597;
    FUN_28b3_0d04();
    local_a = 0xf5a0;
    FUN_28b3_0d04();
    local_a = 0xf5a5;
    FUN_28b3_1181();
    if (!(bool)uVar7) break;
    local_a = 0xf580;
    FUN_28b3_0d04();
    local_a = 0x22b2;
    local_c = 0xf589;
    FUN_28b3_10e4();
    local_a = 0xf58f;
    func_0x000299d1();
  }
  while( true ) {
    local_a = 0xf5c9;
    FUN_28b3_0d04();
    local_a = 0xf5d2;
    FUN_28b3_0d04();
    local_a = 0xf5d7;
    FUN_28b3_1181();
    if ((bool)uVar7 || (bool)uVar8) break;
    local_a = 0xf5b2;
    FUN_28b3_0d04();
    local_a = 0x22b2;
    local_c = 0xf5bb;
    func_0x00029c74();
    local_a = 0xf5c1;
    func_0x000299d1();
  }
  local_a = 0xf5e2;
  FUN_28b3_0d04();
  local_a = 0xf5ea;
  func_0x00029c2c();
  local_34 = 0;
  local_36 = 0;
  local_a = 0xf608;
  func_0x00029da5();
  local_a = 0xf60d;
  FUN_28b3_117c();
  local_a = 0xf612;
  local_2e = FUN_28b3_0f51();
  uVar5 = (undefined2)((ulong)local_2e >> 0x10);
  local_a = (undefined2)local_2e;
  local_c = 0x22b2;
  uStack_e = 0xf61f;
  local_c = FUN_20a9_145e();
  local_a = uVar5;
  puVar6 = local_22;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 3ab8:4aba  FUN_3ab8_4aba  578 bytes, 0 callers */

void __cdecl16far
FUN_3ab8_4aba(uint param_1,uint param_2,int *param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,int *param_8,uint *param_9,undefined2 param_10,
             undefined2 param_11,undefined2 param_12,undefined2 param_13,undefined2 param_14,
             undefined2 param_15,undefined2 param_16,undefined2 param_17)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  int unaff_DS;
  undefined2 *puVar7;
  uint local_40;
  uint local_3e;
  uint local_3c;
  uint local_3a;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 auStack_26 [2];
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
  undefined2 local_c;
  int local_8;
  
  FUN_21f2_0ebc();
  if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1 == 0)))) {
    if (param_9[1] == 0 && *param_9 == 0) {
      return;
    }
    local_40 = *(uint *)0x14c + 1;
    local_3e = *(int *)0x14e + (uint)(0xfffe < *(uint *)0x14c);
    param_1 = *param_9;
    param_2 = param_9[1];
    param_9[1] = 0;
    *param_9 = 0;
  }
  else {
    local_40 = param_1;
    local_3e = param_2;
    *param_9 = param_1;
    param_9[1] = param_2;
  }
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029d78();
  FUN_28b3_1c08();
  FUN_28b3_1177();
  FUN_28b3_0e53();
  if (*(int *)0xcb6 != 0) {
    func_0x000297e6();
    func_0x00029bb5();
    FUN_28b3_0e53();
  }
  local_3a = local_3e;
  local_c = 0x22b2;
  for (local_3c = local_40;
      ((int)local_3a <= (int)param_2 && (((int)local_3a < (int)param_2 || (local_3c <= param_1))));
      local_3c = local_3c + 1) {
    uVar6 = 0;
    uStack_e = 0xf76f;
    puVar7 = (undefined2 *)func_0x00000271();
    puVar4 = (undefined2 *)puVar7;
    puVar5 = &local_2c;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    local_8 = unaff_DS;
    if (uStack_12._1_1_ < 0x5a) {
      func_0x000297e6();
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xf7a1;
      func_0x000299d1();
      uStack_10 = param_17;
      uStack_12 = param_16;
      uStack_14 = param_15;
      uStack_16 = param_14;
      uStack_18 = param_13;
      uStack_1a = param_12;
      uStack_1c = param_11;
      uStack_1e = param_10;
      uStack_20 = 0x22b2;
      uStack_22 = 0xf7c1;
      func_0x000297e6();
      uStack_20 = 0x22b2;
      uStack_22 = 0xf7c6;
      func_0x00029d78();
      uStack_2a = 0xf7d0;
      func_0x000299d1();
      uStack_2a = 0x22b2;
      local_2c = 0xf7d8;
      FUN_3ab8_4873();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029d78();
      local_8 = 0x22b2;
      uVar6 = 0x22b2;
      iVar3 = FUN_28b3_0f51();
      if (0 < iVar3) {
        uStack_12 = CONCAT11(9,(undefined1)uStack_12);
        puVar4 = auStack_26;
        puVar5 = &local_2c;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar7;
        }
        uVar6 = 0x11f2;
        uStack_2a = 0xf812;
        FUN_12c1_0f1d();
      }
    }
    if (local_8 != 0) {
      if (((byte)local_3c & 0xf) == 0xf) {
        local_c = param_6;
        uStack_e = param_5;
        uStack_10 = param_4;
        uStack_14 = 0xf83e;
        uStack_12 = uVar6;
        iVar3 = func_0x00006608();
        *param_3 = iVar3;
        if (*(char *)0xc0e != '\0') {
          return;
        }
        if ((*param_3 != 0) || (uVar6 = 0x3bf, *param_8 != 0)) {
          local_c = 0xf868;
          func_0x0000daa6();
          func_0x0000c3ca();
          uVar6 = 0x885;
        }
      }
      else if ((*(byte *)0xc3be & 1) == 0) {
        local_c = 0xf743;
        func_0x0000daa6();
        uVar6 = 0x885;
      }
      else {
        func_0x0000dc89();
        uVar6 = 0x885;
      }
    }
    local_3a = local_3a + (0xfffe < local_3c);
    local_c = uVar6;
  }
  return;
}



/* 3ab8:4cfc  FUN_3ab8_4cfc  1170 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4cfc(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  byte local_34;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 uStack_1c;
  uint local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 uStack_12;
  int local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  uint local_a;
  
  FUN_21f2_0ebc();
  puVar9 = &local_4a;
  puVar8 = param_1;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar1;
  }
  local_a = 0xf8a0;
  func_0x000297e6();
  local_a = 0xf8a8;
  FUN_28b3_100d();
  local_a = 0xf8b0;
  FUN_28b3_0e53();
  local_a = 0xf8b8;
  func_0x000297e6();
  local_a = 0xf8c0;
  FUN_28b3_100d();
  local_a = 0xf8c8;
  FUN_28b3_0e53();
  local_a = 0xf8d1;
  func_0x000297e6();
  local_a = 0xf8d9;
  func_0x00029b6d();
  local_a = 0xf8de;
  func_0x00029d78();
  local_a = 0xf8e6;
  func_0x00029c2c();
  local_a = 0xf8ee;
  FUN_28b3_0e3b();
  local_a = 0xf8f6;
  FUN_28b3_0e53();
  local_a = 0xf8ff;
  func_0x000297e6();
  local_a = 0xf907;
  func_0x00029b6d();
  local_a = 0xf90c;
  func_0x00029d78();
  local_a = 0xf914;
  func_0x00029c2c();
  local_a = 0xf91c;
  FUN_28b3_0e3b();
  local_a = 0xf924;
  FUN_28b3_0e53();
  local_a = 0xf92c;
  func_0x000297e6();
  local_a = 0xf931;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xf93b;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xf943;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xf948;
  func_0x00029d78();
  local_18 = 0x22b2;
  local_1a = 0xf952;
  func_0x000299d1();
  local_18 = 0;
  local_1a = 0x22b2;
  uStack_1c = 0xf95a;
  FUN_1def_05d1();
  local_a = 0xf964;
  func_0x000297e6();
  local_a = 0xf969;
  func_0x00029d78();
  local_a = 0xf971;
  func_0x00029c74();
  local_a = 0xf979;
  FUN_28b3_0e53();
  local_a = 0xf981;
  func_0x000297e6();
  local_a = 0xf986;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xf990;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xf998;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xf99d;
  func_0x00029d78();
  local_18 = 0x22b2;
  local_1a = 0xf9a7;
  func_0x000299d1();
  local_18 = 0;
  local_1a = 0x22b2;
  uStack_1c = 0xf9af;
  func_0x0001e558();
  local_a = 0xf9b9;
  func_0x000297e6();
  local_a = 0xf9be;
  func_0x00029d78();
  local_a = 0xf9c6;
  func_0x00029c74();
  local_a = 0xf9ce;
  FUN_28b3_0e53();
  local_a = 0xf9d7;
  func_0x000297e6();
  local_a = 0xf9df;
  func_0x00029b6d();
  local_a = 0xf9e4;
  func_0x00029d78();
  local_a = 0xf9ec;
  func_0x00029c2c();
  local_a = 0xf9f4;
  FUN_28b3_0e3b();
  local_a = 0xf9fc;
  FUN_28b3_0e53();
  local_a = 0xfa05;
  func_0x000297e6();
  local_a = 0xfa0d;
  func_0x00029b6d();
  local_a = 0xfa12;
  func_0x00029d78();
  local_a = 0xfa1a;
  func_0x00029c2c();
  local_a = 0xfa22;
  FUN_28b3_0e3b();
  local_a = 0xfa2a;
  FUN_28b3_0e53();
  local_a = 0xfa32;
  func_0x000297e6();
  local_a = 0xfa37;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xfa41;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xfa49;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xfa4e;
  func_0x00029d78();
  local_18 = 0x22b2;
  local_1a = 0xfa58;
  func_0x000299d1();
  local_18 = 0;
  local_1a = 0x22b2;
  uStack_1c = 0xfa60;
  FUN_1def_05d1();
  local_a = 0xfa6a;
  func_0x000297e6();
  local_a = 0xfa6f;
  func_0x00029d78();
  local_a = 0xfa77;
  func_0x00029c74();
  local_a = 0xfa7f;
  FUN_28b3_0e53();
  local_a = 0xfa87;
  func_0x000297e6();
  local_a = 0xfa8f;
  FUN_28b3_100d();
  local_a = 0xfa97;
  FUN_28b3_0e53();
  local_a = 0xfa9f;
  func_0x000297e6();
  local_a = 0xfaa7;
  FUN_28b3_100d();
  local_a = 0xfaaf;
  FUN_28b3_0e53();
  local_a = 0xfab7;
  func_0x000297e6();
  local_a = 0xfabf;
  FUN_28b3_100d();
  local_a = 0xfac7;
  FUN_28b3_0e3b();
  local_a = 0xfacf;
  FUN_28b3_0ee9();
  local_a = 0xfad7;
  func_0x000297e6();
  local_a = 0xfadc;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xfae6;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xfaee;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xfaf3;
  func_0x00029d78();
  local_18 = 0x22b2;
  local_1a = 0xfafd;
  func_0x000299d1();
  local_18 = 0;
  local_1a = 0x22b2;
  uStack_1c = 0xfb05;
  func_0x0001e558();
  local_a = 0xfb0f;
  func_0x000297e6();
  local_a = 0xfb14;
  func_0x00029d78();
  local_a = 0xfb1c;
  func_0x00029c74();
  local_a = 0xfb24;
  FUN_28b3_0e3b();
  local_a = 0xfb2c;
  FUN_28b3_100d();
  local_a = 0xfb34;
  FUN_28b3_0e3b();
  local_a = 0xfb3c;
  FUN_28b3_0e53();
  local_a = 0xfb45;
  FUN_28b3_0d04();
  local_a = 0xfb4d;
  func_0x000297e6();
  local_a = 0xfb55;
  func_0x00029b6d();
  local_a = 0xfb5d;
  func_0x000297e6();
  local_a = 0xfb65;
  func_0x00029b6d();
  local_a = 0xfb6a;
  FUN_28b3_117c();
  local_a = 0xfb6f;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xfb79;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xfb7e;
  FUN_28b3_1582();
  uVar10 = (undefined1 *)0xfff7 < &local_e;
  local_a = 0xfb88;
  FUN_28b3_0d04();
  local_a = 0xfb90;
  FUN_28b3_0e3b();
  local_a = 0xfb95;
  func_0x00029d78();
  local_a = 0xfb9a;
  FUN_28b3_1181();
  if (!(bool)uVar10) {
    local_a = 0xfba4;
    func_0x000297e6();
    local_a = 0xfbac;
    func_0x00029b85();
    local_a = 0xfbb4;
    FUN_28b3_0e53();
    local_a = 0xfbbc;
    func_0x000297e6();
    local_a = 0xfbc4;
    func_0x00029b85();
    local_a = 0xfbcc;
    FUN_28b3_0e53();
  }
  local_a = local_3a;
  uStack_c = 0xbf48;
  local_e = 0x22b2;
  local_10 = 0xfbdb;
  FUN_1885_0344();
  local_1a = (uint)((local_34 & 0x20) != 0);
  local_a = local_1a;
  uStack_c = 0xbf48;
  local_e = 0x18b3;
  local_10 = 0xfc02;
  func_0x00018eff();
  uVar10 = (undefined1 *)0xfff9 < &uStack_c;
  local_a = 0xfc0c;
  func_0x000297e6();
  local_a = 0xfc14;
  FUN_28b3_0e3b();
  local_a = 0xfc1c;
  func_0x00029b6d();
  local_a = 0xfc24;
  func_0x00029bb5();
  local_a = 0xfc2c;
  FUN_28b3_0e53();
  local_a = 0xfc34;
  func_0x000297e6();
  local_a = 0xfc3c;
  func_0x00029b6d();
  local_a = 0xfc44;
  func_0x00029bb5();
  local_a = 0xfc4c;
  FUN_28b3_0e53();
  local_10 = 0;
  local_a = 0xfc59;
  func_0x000297e6();
  local_a = 0xfc5e;
  func_0x00029ae7();
  local_a = 0xfc66;
  func_0x000297e6();
  local_a = 0xfc6b;
  func_0x00029ae7();
  local_a = 0xfc70;
  FUN_28b3_1181();
  if ((bool)uVar10) {
    local_a = 0xfc7b;
    func_0x000297e6();
    local_a = 0xfc83;
    func_0x000297e6();
  }
  else {
    local_a = 0xfc91;
    func_0x000297e6();
    local_a = 0xfc99;
    func_0x000297e6();
  }
  local_a = 0xfca1;
  func_0x00029b6d();
  local_a = 0xfca6;
  FUN_28b3_1181();
  uVar6 = local_44;
  uVar5 = local_46;
  uVar4 = local_48;
  uVar3 = local_4a;
  if ((bool)uVar10) {
    local_10 = 1;
  }
  if (local_10 != 0) {
    local_18 = local_4a;
    local_16 = local_48;
    local_4a = local_42;
    local_48 = local_40;
    local_42 = uVar3;
    local_40 = uVar4;
    local_26 = local_46;
    local_24 = local_44;
    local_46 = local_3e;
    local_44 = local_3c;
    local_3e = uVar5;
    local_3c = uVar6;
  }
  puVar9 = &local_4a;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 3ab8:518e  FUN_3ab8_518e  1552 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */

void __cdecl16far
FUN_3ab8_518e(undefined2 ***param_1,int *param_2,undefined2 param_3,undefined2 ***param_4,
             undefined2 param_5,undefined2 param_6,undefined2 ***param_7,int *param_8,
             undefined2 ****param_9,undefined2 ***param_10,undefined2 ***param_11,
             undefined2 param_12,undefined2 ***param_13,undefined2 param_14,undefined2 param_15,
             undefined2 ***param_16)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 ***pppuVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 ***unaff_DS;
  undefined1 uVar10;
  undefined2 *puVar11;
  undefined2 **local_a8;
  undefined2 local_a4 [10];
  byte local_90;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 **local_70;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 ***local_4e;
  undefined2 ***local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 ***local_3a;
  int ***local_38;
  undefined2 **local_34;
  int **local_32;
  undefined2 local_30;
  undefined2 ***local_2e;
  undefined2 ***local_2c;
  int ***local_2a;
  undefined2 ***local_28;
  undefined2 ***local_26;
  undefined2 ***local_24;
  undefined2 **local_22;
  int **local_20;
  int **local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  int ***local_16;
  undefined2 ***local_14;
  undefined2 ***local_12;
  undefined2 ***local_10;
  undefined2 ***pppuStack_e;
  int ***local_c;
  undefined2 ***local_8;
  
  FUN_21f2_0ebc();
  bVar3 = false;
  if (((param_1 == (undefined2 ***)0x0) && (*param_2 == 0)) && (*param_7 == (undefined2 **)0x0)) {
    bVar3 = true;
  }
  if ((int)param_1 < 1) {
    if (*param_8 == 0) {
      FUN_2bb4_47d8();
      return;
    }
    local_a8 = (undefined2 **)(*(int *)0x150 + 1);
    param_1 = (undefined2 ***)*param_8;
    *param_8 = 0;
  }
  else {
    local_a8 = param_1;
    *param_8 = (int)param_1;
  }
  local_8 = (undefined2 ***)0x22b2;
  func_0x000297e6();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029b6d();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029d78();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_1c08();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_1177();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0e53();
  local_70 = local_a8;
  while( true ) {
    if ((int)param_1 < (int)local_70) {
      FUN_2bb4_47d8();
      return;
    }
    local_8 = (undefined2 ***)local_70;
    local_c = (int ***)0xfea4;
    puVar11 = (undefined2 *)func_0x00000398();
    puVar5 = (undefined2 *)puVar11;
    puVar6 = local_a4;
    local_8 = unaff_DS;
    for (iVar4 = 0xc; unaff_DS = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    if (0x59 < local_90) {
      FUN_2bb4_475e();
      return;
    }
    local_8 = param_16;
    local_c = (int ***)param_14;
    pppuStack_e = param_13;
    local_10 = (undefined2 ***)param_12;
    local_12 = param_11;
    local_14 = param_10;
    local_16 = (int ***)param_9;
    uStack_18 = 0;
    local_1a = 0xfee0;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    local_1a = 0xfee5;
    func_0x00029d78();
    local_20 = (int **)0x22b2;
    local_22 = (undefined2 **)0xfeef;
    func_0x000299d1();
    local_20 = (int **)local_a4;
    local_22 = (undefined2 **)0x22b2;
    local_24 = (undefined2 ***)0xfef8;
    FUN_3ab8_4cfc();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000297e6();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000299d1();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000297e6();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000299d1();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000297e6();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000299d1();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000297e6();
    local_10 = (undefined2 ***)0x22b2;
    local_12 = (undefined2 ***)0xff42;
    func_0x000299d1();
    local_10 = (undefined2 ***)0x22b2;
    local_12 = (undefined2 ***)0xff4b;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    local_1a = 0xff55;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    local_1a = 0xff5e;
    func_0x000297e6();
    local_20 = (int **)0x22b2;
    local_22 = (undefined2 **)0xff68;
    func_0x000299d1();
    local_20 = (int **)0x22b2;
    local_22 = (undefined2 **)0xff71;
    func_0x000297e6();
    local_20 = (int **)0x22b2;
    local_22 = (undefined2 **)0xff76;
    func_0x00029d78();
    local_20 = (int **)0x22b2;
    local_22 = (undefined2 **)0xff7e;
    func_0x000299b9();
    local_28 = (undefined2 ***)0x22b2;
    local_2a = (int ***)0xff88;
    func_0x000299d1();
    local_28 = &local_16;
    local_2a = (int ***)&local_12;
    local_2c = &local_14;
    local_2e = &local_8;
    local_30 = 0x22b2;
    local_32 = (int **)0xff9d;
    iVar4 = FUN_1885_52fe();
    if (iVar4 != 0) {
      FUN_2bb4_475e();
      return;
    }
    local_8 = &local_16;
    local_c = (int ***)&local_14;
    pppuStack_e = &local_8;
    local_10 = (undefined2 ***)0x1bb4;
    pppuVar7 = (undefined2 ***)0x1b6e;
    local_12 = (undefined2 ****)0xffbc;
    iVar4 = FUN_1885_2edd();
    if (iVar4 != 0) {
      local_8 = (undefined2 ***)0xffff;
      local_c = local_16;
      pppuStack_e = local_12;
      local_10 = local_14;
      local_12 = (undefined2 ****)0xffff;
      local_14 = (undefined2 ***)0x1b6e;
      pppuVar7 = (undefined2 ***)0xdef;
      local_16 = (int ***)0xffdb;
      func_0x0000f19e();
    }
    local_8 = pppuVar7;
    FUN_28b3_0d8b();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_0e53();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000297e6();
    local_8 = (undefined2 ***)0x22b2;
    func_0x00029d78();
    local_8 = (undefined2 ***)0x22b2;
    func_0x00029b85();
    local_8 = (undefined2 ***)0x22b2;
    func_0x00029c2c();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_0e53();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000297e6();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_100d();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_0e3b();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_0e53();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000297e6();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_100d();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_0e3b();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_0e53();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_0d04();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000297e6();
    local_8 = (undefined2 ***)0x22b2;
    func_0x00029b6d();
    local_8 = (undefined2 ***)0x22b2;
    func_0x000297e6();
    local_8 = (undefined2 ***)0x22b2;
    func_0x00029b6d();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_117c();
    local_8 = (undefined2 ***)0x22b2;
    func_0x00029d78();
    local_10 = (undefined2 ***)0x22b2;
    local_12 = (undefined2 ***)0xfe68;
    func_0x000299d1();
    local_10 = (undefined2 ***)0x22b2;
    local_12 = (undefined2 ***)0xfe6d;
    FUN_28b3_1582();
    uVar10 = (undefined1 *)0xfff7 < &pppuStack_e;
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_0d04();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_0e3b();
    local_8 = (undefined2 ***)0x22b2;
    func_0x00029d78();
    local_8 = (undefined2 ***)0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar10) break;
    local_70 = (undefined2 **)((int)local_70 + 1);
  }
  local_8 = (undefined2 ***)0x22b2;
  func_0x000297e6();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029b85();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0e53();
  local_8 = (undefined2 ***)0x22b2;
  func_0x000297e6();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029b85();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0e3b();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0e53();
  local_8 = (undefined2 ***)0x22b2;
  func_0x000297e6();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029b6d();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029af6();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0e53();
  local_8 = (undefined2 ***)0x22b2;
  func_0x000297e6();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029b6d();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0e3b();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0ee9();
  local_8 = (undefined2 ***)0x22b2;
  func_0x000297e6();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029c74();
  local_8 = (undefined2 ***)0x22b2;
  func_0x000299b9();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0ee9();
  local_8 = (undefined2 ***)0x22b2;
  func_0x000297e6();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029d78();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029c74();
  local_8 = (undefined2 ***)0x22b2;
  func_0x000299b9();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0ee9();
  local_8 = (undefined2 ***)0x22b2;
  func_0x000297e6();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029c74();
  local_8 = (undefined2 ***)0x22b2;
  func_0x000299b9();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0ee9();
  local_8 = (undefined2 ***)0x22b2;
  func_0x000297e6();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029d78();
  local_8 = (undefined2 ***)0x22b2;
  func_0x00029c74();
  local_8 = (undefined2 ***)0x22b2;
  func_0x000299b9();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0ee9();
  local_8 = (undefined2 ***)0x22b2;
  FUN_28b3_0d04();
  local_10 = (undefined2 ***)0x22b2;
  local_12 = (undefined2 ***)0x10c;
  func_0x000299d1();
  local_10 = (undefined2 ***)0x22b2;
  local_12 = (undefined2 ***)0x114;
  FUN_28b3_0d04();
  uStack_18 = 0x22b2;
  local_1a = 0x11e;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  local_1a = 0x126;
  FUN_28b3_0d04();
  local_20 = (int **)0x22b2;
  local_22 = (undefined2 **)0x130;
  func_0x000299d1();
  local_20 = (int **)0x22b2;
  local_22 = (int ***)0x138;
  FUN_28b3_0d04();
  local_28 = (undefined2 ***)0x22b2;
  local_2a = (int ***)0x142;
  func_0x000299d1();
  local_28 = &local_16;
  local_2a = (int ***)&local_12;
  local_2c = &local_14;
  local_2e = &local_8;
  local_30 = 0x22b2;
  uVar8 = 0x1bb4;
  local_32 = (int **)0x157;
  iVar4 = FUN_1885_52fe();
  if (iVar4 == 0) {
    local_8 = &local_16;
    local_c = (int ***)&local_14;
    pppuStack_e = &local_8;
    local_10 = (undefined2 ***)0x1bb4;
    uVar8 = 0x1b6e;
    local_12 = (undefined2 ***)0x173;
    iVar4 = FUN_1885_2edd();
    if (iVar4 != 0) {
      local_8 = (undefined2 ***)0xffff;
      local_c = local_16;
      pppuStack_e = local_12;
      local_10 = local_14;
      local_12 = (undefined2 ***)0xffff;
      local_14 = (undefined2 ***)0x1b6e;
      uVar8 = 0xdef;
      local_16 = (int ***)0x192;
      func_0x0000f19e();
    }
  }
  local_8 = local_2c;
  local_c = (int ***)local_30;
  pppuStack_e = (undefined2 ***)local_32;
  local_10 = (undefined2 ***)local_1c;
  local_12 = (undefined2 ***)local_1e;
  local_14 = (undefined2 ***)local_20;
  local_16 = (int ***)local_22;
  uStack_18 = local_64;
  local_1a = local_66;
  local_1c = local_68;
  local_1e = (int **)local_6a;
  local_20 = (int **)local_48;
  local_22 = (undefined2 **)local_4a;
  local_24 = local_4c;
  local_26 = local_4e;
  local_28 = &local_16;
  local_2a = (int ***)&local_12;
  local_2c = &local_14;
  local_2e = &local_8;
  uVar9 = 0x1bb4;
  local_32 = (int **)0x1da;
  local_30 = uVar8;
  iVar4 = FUN_1885_52fe();
  if (iVar4 == 0) {
    local_8 = &local_16;
    local_c = (int ***)&local_14;
    pppuStack_e = &local_8;
    local_10 = (undefined2 ***)0x1bb4;
    uVar9 = 0x1b6e;
    local_12 = (undefined2 ***)0x1f6;
    iVar4 = FUN_1885_2edd();
    if (iVar4 != 0) {
      local_8 = (undefined2 ***)0xffff;
      local_c = local_16;
      pppuStack_e = local_12;
      local_10 = local_14;
      local_12 = (undefined2 ***)0xffff;
      local_14 = (undefined2 ***)0x1b6e;
      uVar9 = 0xdef;
      local_16 = (int ***)0x215;
      func_0x0000f19e();
    }
  }
  local_8 = (undefined2 ***)local_34;
  local_c = local_38;
  pppuStack_e = local_3a;
  local_10 = local_24;
  local_12 = local_26;
  local_14 = local_28;
  local_16 = local_2a;
  uStack_18 = local_82;
  local_1a = local_84;
  local_1c = local_86;
  local_1e = (int **)local_88;
  local_20 = (int **)local_7a;
  local_22 = (undefined2 **)local_7c;
  local_24 = (undefined2 ***)local_7e;
  local_26 = (undefined2 ***)local_80;
  local_28 = &local_16;
  local_2a = (int ***)&local_12;
  local_2c = &local_14;
  local_2e = &local_8;
  pppuVar7 = (undefined2 ***)0x1bb4;
  local_32 = (int **)0x260;
  local_30 = uVar9;
  iVar4 = FUN_1885_52fe();
  if (iVar4 == 0) {
    local_8 = &local_16;
    local_c = (int ***)&local_14;
    pppuStack_e = &local_8;
    local_10 = (int ****)0x1bb4;
    pppuVar7 = (undefined2 ***)0x1b6e;
    local_12 = (undefined2 ****)0x27c;
    iVar4 = FUN_1885_2edd();
    if (iVar4 != 0) {
      local_8 = (undefined2 ***)0xffff;
      local_c = local_16;
      pppuStack_e = local_12;
      local_10 = local_14;
      local_12 = (undefined2 ****)0xffff;
      local_14 = (int ****)0x1b6e;
      pppuVar7 = (undefined2 ***)0xdef;
      local_16 = (int ***)0x29b;
      func_0x0000f19e();
    }
  }
  if (bVar3) {
    if (((byte)local_70 & 0xf) == 0xf) {
      local_8 = param_7;
      local_c = (int ***)param_5;
      pppuStack_e = param_4;
      local_10 = (undefined2 ***)param_3;
      local_14 = (undefined2 ***)0x2c4;
      local_12 = pppuVar7;
      iVar4 = func_0x00006608();
      *param_2 = iVar4;
      if (*(char *)0xc0e != '\0') {
        return;
      }
      if ((*param_2 != 0) || (*param_7 != (undefined2 **)0x0)) {
        local_8 = (undefined2 ***)0x0;
        local_c = (int ***)0x2ee;
        func_0x0000daa6();
        local_8 = (undefined2 ***)0x885;
        func_0x0000c3ca();
      }
    }
    else if ((*(byte *)0xc3be & 1) == 0) {
      local_8 = (undefined2 ***)0x1;
      local_c = (int ***)0x314;
      func_0x0000daa6();
    }
    else {
      local_8 = pppuVar7;
      func_0x0000dc89();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 3ab8:579e  FUN_3ab8_579e  1889 bytes, 1 callers */

int ** __cdecl16far
FUN_3ab8_579e(int param_1,undefined2 param_2,undefined2 param_3,uint param_4,int param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  undefined1 uVar7;
  int *in_stack_00000020;
  int *in_stack_00000022;
  undefined2 *in_stack_00000024;
  undefined2 *in_stack_00000026;
  int *in_stack_00000028;
  int local_4a;
  int local_48;
  int local_46;
  int *local_44;
  undefined2 *local_42;
  int local_40;
  undefined2 *local_3e;
  int local_3c;
  int *local_3a;
  undefined2 local_38;
  undefined2 *local_32;
  int local_30;
  undefined2 uStack_28;
  undefined2 local_26;
  undefined2 *puStack_24;
  int local_22;
  int ***pppiStack_20;
  int *local_1e;
  int *local_1c;
  undefined2 *local_1a;
  undefined2 *local_18;
  int *local_16;
  int **local_14;
  undefined2 local_12;
  undefined2 local_10;
  int local_e;
  int *local_c;
  int *local_a;
  undefined2 *local_8;
  undefined2 *local_6;
  int *local_4;
  
  local_4 = (int *)0x3ab8;
  local_6 = (undefined2 *)0x329;
  FUN_21f2_0ebc();
  local_48 = -9999;
  local_38 = 0;
  local_3a = (int *)0x0;
  local_1e = (int *)*(undefined2 *)0xa72c;
  local_1c = (int *)*(undefined2 *)0xa72e;
  local_1a = (undefined2 *)*(undefined2 *)0xc22;
  local_4a = 0;
  local_44 = (int *)0x0;
  *(undefined2 *)0xc22 = 0;
  puVar1 = (undefined2 *)*(uint *)0x148;
  iVar4 = *(int *)0x14a + (uint)((undefined2 *)0xfffe < puVar1);
  local_32 = (undefined2 *)(*(uint *)0x14c + 1);
  local_30 = *(int *)0x14e + (uint)(0xfffe < *(uint *)0x14c);
  local_42 = (undefined2 *)(*(uint *)0x14c + param_4);
  local_40 = *(int *)0x14e + param_5 + (uint)CARRY2(*(uint *)0x14c,param_4);
  iVar6 = 0x22b2;
LAB_3ab8_5837:
  *(undefined2 *)0xc18 = 0;
  *(undefined2 *)0xc20 = 1;
  *(undefined2 *)0xbc0 = 1;
  *(undefined1 *)0xc0e = 0;
  local_4 = in_stack_00000028;
  local_6 = in_stack_00000026;
  local_8 = in_stack_00000024;
  local_a = in_stack_00000022;
  local_c = in_stack_00000020;
  iVar5 = 0x3bf;
  local_10 = 0x3df;
  local_e = iVar6;
  local_14 = (int **)func_0x00006608();
LAB_3ab8_5865:
  do {
    if (*(char *)0xc0e != '\0') {
      local_38 = 0;
      local_3a = (int *)0x0;
      local_a = (int *)0x0;
      local_c = (int *)0x0;
      local_44 = (int *)0x0;
      local_1a = (undefined2 *)0x0;
    }
    *(undefined2 *)0xbc0 = 1;
    *(undefined1 *)0xc0e = 0;
    if (((*(int *)0x158 != 0) || (local_14 != (int **)0x0)) || (*in_stack_00000028 != 0)) {
      local_4 = (int *)0x0;
      local_8 = (undefined2 *)0x42b;
      local_6 = (undefined2 *)iVar5;
      func_0x0000daa6();
      local_4 = (int *)0x885;
      local_6 = (undefined2 *)0x431;
      func_0x0000c3ca();
      *(undefined2 *)0xc20 = 0;
      local_4 = (int *)0x885;
      local_6 = (undefined2 *)0x43f;
      func_0x000297e6();
      local_c = (int *)0x22b2;
      local_e = 0x449;
      func_0x000299d1();
      local_c = (int *)0x22b2;
      local_e = 0x451;
      func_0x000297e6();
      local_14 = (int **)0x22b2;
      local_16 = (int *)0x45b;
      func_0x000299d1();
      local_14 = &local_3a;
      local_16 = in_stack_00000028;
      local_18 = in_stack_00000026;
      local_1a = in_stack_00000024;
      local_1c = in_stack_00000022;
      local_1e = in_stack_00000020;
      pppiStack_20 = &local_14;
      local_22 = 0xffff;
      puStack_24 = (undefined2 *)0xffff;
      local_26 = 0x22b2;
      uStack_28 = 0x47d;
      FUN_4375_b9be();
      local_4 = (int *)0x22b2;
      local_6 = (undefined2 *)0x488;
      func_0x000297e6();
      local_c = (int *)0x22b2;
      local_e = 0x492;
      func_0x000299d1();
      local_c = (int *)0x22b2;
      local_e = 0x49a;
      func_0x000297e6();
      local_14 = (int **)0x22b2;
      local_16 = (int *)0x4a4;
      func_0x000299d1();
      local_14 = &local_c;
      local_16 = in_stack_00000028;
      local_18 = in_stack_00000026;
      local_1a = in_stack_00000024;
      local_1c = in_stack_00000022;
      local_1e = in_stack_00000020;
      pppiStack_20 = &local_14;
      local_22 = 0xffff;
      puStack_24 = (undefined2 *)0xffff;
      local_26 = 0x22b2;
      uStack_28 = 0x4c6;
      FUN_4375_beea();
      local_4 = (int *)0x22b2;
      local_6 = (undefined2 *)0x4d1;
      func_0x000297e6();
      local_c = (int *)0x22b2;
      local_e = 0x4db;
      func_0x000299d1();
      local_c = (int *)0x22b2;
      local_e = 0x4e3;
      func_0x000297e6();
      local_14 = (int **)0x22b2;
      local_16 = (int *)0x4ed;
      func_0x000299d1();
      local_14 = &local_44;
      local_16 = in_stack_00000028;
      local_18 = in_stack_00000026;
      local_1a = in_stack_00000024;
      local_1c = in_stack_00000022;
      local_1e = in_stack_00000020;
      pppiStack_20 = &local_14;
      local_22 = 0xffff;
      puStack_24 = (undefined2 *)0x22b2;
      local_26 = 0x50c;
      FUN_4375_c5be();
      if (local_1a != (undefined2 *)0x0) {
        local_4 = (int *)0x2;
        local_6 = (undefined2 *)0x11;
        local_8 = (undefined2 *)0x22b2;
        local_a = (int *)0x522;
        FUN_1000_0599();
        local_4 = (int *)0xdef;
        local_6 = (undefined2 *)0x529;
        func_0x00010526();
      }
      if (*(int *)0x158 != 0) {
        local_14 = (int **)0xfba9;
      }
      return local_14;
    }
    iVar6 = iVar5;
    if ((*(char *)0xc13 == '\0') ||
       ((*in_stack_00000020 == local_48 && (*in_stack_00000022 == local_4a)))) goto LAB_3ab8_5837;
    local_6 = (undefined2 *)0x565;
    local_4 = (int *)iVar5;
    func_0x000297e6();
    local_4 = (int *)0x22b2;
    local_6 = (undefined2 *)0x56a;
    func_0x00029d78();
    local_c = (int *)0x22b2;
    local_e = 0x574;
    func_0x000299d1();
    local_c = (int *)0x22b2;
    local_e = 0x57c;
    func_0x000297e6();
    local_c = (int *)0x22b2;
    local_e = 0x581;
    func_0x00029d78();
    local_14 = (int **)0x22b2;
    iVar5 = 0x22b2;
    local_16 = (int *)0x58b;
    func_0x000299d1();
    local_14 = &local_3a;
    local_16 = in_stack_00000028;
    local_18 = in_stack_00000026;
    local_1a = in_stack_00000024;
    local_1c = in_stack_00000022;
    local_1e = in_stack_00000020;
    pppiStack_20 = &local_14;
    local_22 = 0;
    puStack_24 = (undefined2 *)0x0;
    local_26 = 0x22b2;
    uStack_28 = 0x5aa;
    FUN_4375_b9be();
  } while (*(char *)0xc0e != '\0');
  local_4 = (int *)0x22b2;
  local_6 = (undefined2 *)0x5bf;
  func_0x000297e6();
  local_4 = (int *)0x22b2;
  local_6 = (undefined2 *)0x5c4;
  func_0x00029d78();
  local_c = (int *)0x22b2;
  local_e = 0x5ce;
  func_0x000299d1();
  local_c = (int *)0x22b2;
  local_e = 0x5d6;
  func_0x000297e6();
  local_c = (int *)0x22b2;
  local_e = 0x5db;
  func_0x00029d78();
  local_14 = (int **)0x22b2;
  local_16 = (int *)0x5e5;
  func_0x000299d1();
  local_14 = &local_c;
  local_16 = in_stack_00000028;
  local_18 = in_stack_00000026;
  local_1a = in_stack_00000024;
  local_1c = in_stack_00000022;
  local_1e = in_stack_00000020;
  pppiStack_20 = &local_14;
  local_22 = 0;
  puStack_24 = (undefined2 *)0x0;
  local_26 = 0x22b2;
  uStack_28 = 0x604;
  FUN_4375_beea();
  if (*(char *)0xc0e == '\0') {
    local_4 = (int *)0x22b2;
    local_6 = (undefined2 *)0x616;
    func_0x000297e6();
    local_4 = (int *)0x22b2;
    local_6 = (undefined2 *)0x61b;
    func_0x00029d78();
    local_c = (int *)0x22b2;
    local_e = 0x625;
    func_0x000299d1();
    local_c = (int *)0x22b2;
    local_e = 0x62d;
    func_0x000297e6();
    local_c = (int *)0x22b2;
    local_e = 0x632;
    func_0x00029d78();
    local_14 = (int **)0x22b2;
    iVar6 = 0x22b2;
    local_16 = (int *)0x63c;
    func_0x000299d1();
    local_14 = &local_44;
    local_16 = in_stack_00000028;
    local_18 = in_stack_00000026;
    local_1a = in_stack_00000024;
    local_1c = in_stack_00000022;
    local_1e = in_stack_00000020;
    pppiStack_20 = &local_14;
    local_22 = 0;
    puStack_24 = (undefined2 *)0x22b2;
    local_26 = 0x65a;
    FUN_4375_c5be();
    if (((*(char *)0xc0e == '\0') && (local_14 == (int **)0x0)) && (*in_stack_00000028 == 0)) {
      if (*(int *)0xa5e < *in_stack_00000022) {
        local_48 = *in_stack_00000020;
        local_4a = *in_stack_00000022;
        uVar7 = param_1 == 0;
        if ((bool)uVar7) {
          local_12 = *in_stack_00000024;
          local_18 = (undefined2 *)*in_stack_00000026;
          local_16 = (int *)in_stack_00000026[1];
          local_3c = iVar4;
          local_3e = puVar1;
        }
        else {
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x6bf;
          FUN_28b3_0d04();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x6c7;
          FUN_28b3_0e53();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x6cf;
          FUN_28b3_0d04();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x6d7;
          FUN_28b3_0e53();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x6df;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x6e4;
          func_0x00029d78();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x6ec;
          func_0x00029bfc();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x6f4;
          FUN_28b3_0e3b();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x6fc;
          FUN_28b3_0e53();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x704;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x709;
          func_0x00029d78();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x711;
          func_0x00029bfc();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x719;
          FUN_28b3_0e3b();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x721;
          FUN_28b3_0e53();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x72a;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x732;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x737;
          FUN_28b3_1181();
          if ((bool)uVar7) {
            local_4 = (int *)0x22b2;
            local_6 = (undefined2 *)0x742;
            func_0x000297e6();
            local_4 = (int *)0x22b2;
            local_6 = (undefined2 *)0x74a;
            func_0x000297e6();
            local_4 = (int *)0x22b2;
            local_6 = (undefined2 *)0x74f;
            FUN_28b3_1181();
            if (!(bool)uVar7) goto LAB_3ab8_5bd1;
            uVar2 = *(undefined2 *)0xa702;
            *(undefined2 *)0x6d5c = *(undefined2 *)0xa700;
            *(undefined2 *)0x6d5e = uVar2;
          }
          else {
LAB_3ab8_5bd1:
            local_4 = (int *)0x22b2;
            local_6 = (undefined2 *)0x759;
            func_0x000297e6();
            local_4 = (int *)0x22b2;
            local_6 = (undefined2 *)0x75e;
            func_0x00029d78();
            local_c = (int *)0x22b2;
            local_e = 0x768;
            func_0x000299d1();
            local_c = (int *)0x22b2;
            local_e = 0x770;
            func_0x000297e6();
            local_c = (int *)0x22b2;
            local_e = 0x775;
            func_0x00029d78();
            local_14 = (int **)0x22b2;
            local_16 = (int *)0x77f;
            func_0x000299d1();
            local_14 = (int **)0x22b2;
            local_16 = (int *)0x784;
            FUN_28b3_1648();
            local_4 = (int *)0x22b2;
            local_6 = (undefined2 *)0x78e;
            FUN_28b3_0d04();
            local_4 = (int *)0x22b2;
            local_6 = (undefined2 *)0x796;
            func_0x00029b85();
            local_4 = (int *)0x22b2;
            local_6 = (undefined2 *)0x79f;
            FUN_28b3_0e53();
            if (*(char *)0x6d60 == '\x02') {
              local_4 = (int *)0x22b2;
              local_6 = (undefined2 *)0x7af;
              func_0x000297e6();
              local_4 = (int *)0x6d5c;
              local_6 = (undefined2 *)0x22b2;
              local_8 = (undefined2 *)0x7b9;
              func_0x00029b55();
              local_4 = (int *)0x22b2;
              local_6 = (undefined2 *)0x7bf;
              FUN_28b3_0e53();
            }
          }
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x7d8;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x7e0;
          func_0x00029b6d();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x7e8;
          FUN_28b3_0e3b();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x7ed;
          func_0x00029d78();
          local_c = (int *)0x22b2;
          local_e = 0x7f7;
          func_0x000299d1();
          local_c = (int *)0x22b2;
          local_e = 0x7fc;
          func_0x0002a11e();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x806;
          FUN_28b3_0d04();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x80f;
          FUN_28b3_0e53();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x817;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x81c;
          func_0x00029d78();
          local_c = (int *)0x22b2;
          local_e = 0x826;
          func_0x000299d1();
          local_c = (int *)0x22b2;
          local_e = 0x82b;
          FUN_28b3_15dc();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x835;
          FUN_28b3_0d04();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x83e;
          FUN_28b3_0e53();
          uVar2 = *(undefined2 *)0xa700;
          uVar3 = *(undefined2 *)0xa702;
          *(undefined2 *)0xb30c = uVar2;
          *(undefined2 *)0xb30e = uVar3;
          *(undefined2 *)0xb37e = uVar2;
          *(undefined2 *)0xb380 = uVar3;
          local_3c = iVar4;
          local_3e = puVar1;
        }
        while ((local_3e = (undefined2 *)((int)local_3e + 1), local_3c <= (int)local_6 &&
               ((local_3c < (int)local_6 || (local_3e <= local_8))))) {
          local_4 = in_stack_00000028;
          local_6 = in_stack_00000026;
          local_8 = in_stack_00000024;
          local_a = in_stack_00000022;
          local_c = in_stack_00000020;
          local_e = 0x22b2;
          iVar5 = 0x3bf;
          local_10 = 0x8e1;
          local_14 = (int **)func_0x00006608();
          if (((local_14 != (int **)0x0) || (*in_stack_00000028 != 0)) ||
             ((*in_stack_00000020 != local_48 || (*in_stack_00000022 != local_4a))))
          goto LAB_3ab8_5865;
          local_4 = (int *)0x3bf;
          local_6 = (undefined2 *)0x869;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x86e;
          func_0x00029d78();
          local_c = (int *)0x22b2;
          local_e = 0x878;
          func_0x000299d1();
          local_c = (int *)0x22b2;
          local_e = 0x880;
          func_0x000297e6();
          local_c = (int *)0x22b2;
          local_e = 0x885;
          func_0x00029d78();
          local_14 = (int **)0x22b2;
          local_16 = (int *)0x88f;
          func_0x000299d1();
          local_14 = &local_3a;
          local_16 = in_stack_00000028;
          local_18 = in_stack_00000026;
          local_1a = in_stack_00000024;
          local_1c = in_stack_00000022;
          local_1e = in_stack_00000020;
          pppiStack_20 = &local_14;
          local_22 = local_3c;
          puStack_24 = local_3e;
          local_26 = 0x22b2;
          uStack_28 = 0x8b0;
          FUN_4375_b9be();
          local_3c = local_3c + (uint)((undefined2 *)0xfffe < local_3e);
        }
        local_3c = local_30;
        for (local_3e = local_32;
            (local_3c <= local_40 && ((local_3c < local_40 || (local_3e <= local_42))));
            local_3e = (undefined2 *)((int)local_3e + 1)) {
          local_4 = in_stack_00000028;
          local_6 = in_stack_00000026;
          local_8 = in_stack_00000024;
          local_a = in_stack_00000022;
          local_c = in_stack_00000020;
          local_e = 0x22b2;
          iVar5 = 0x3bf;
          local_10 = 0x9a0;
          local_14 = (int **)func_0x00006608();
          if (((local_14 != (int **)0x0) || (*in_stack_00000028 != 0)) ||
             ((*in_stack_00000020 != local_48 || (*in_stack_00000022 != local_4a))))
          goto LAB_3ab8_5865;
          local_4 = (int *)0x3bf;
          local_6 = (undefined2 *)0x928;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x92d;
          func_0x00029d78();
          local_c = (int *)0x22b2;
          local_e = 0x937;
          func_0x000299d1();
          local_c = (int *)0x22b2;
          local_e = 0x93f;
          func_0x000297e6();
          local_c = (int *)0x22b2;
          local_e = 0x944;
          func_0x00029d78();
          local_14 = (int **)0x22b2;
          local_16 = (int *)0x94e;
          func_0x000299d1();
          local_14 = &local_c;
          local_16 = in_stack_00000028;
          local_18 = in_stack_00000026;
          local_1a = in_stack_00000024;
          local_1c = in_stack_00000022;
          local_1e = in_stack_00000020;
          pppiStack_20 = &local_14;
          local_22 = local_3c;
          puStack_24 = local_3e;
          local_26 = 0x22b2;
          uStack_28 = 0x96f;
          FUN_4375_beea();
          local_3c = local_3c + (uint)((undefined2 *)0xfffe < local_3e);
        }
        local_46 = (int)local_4;
        while( true ) {
          iVar6 = 0x22b2;
          if (local_e < local_46) goto LAB_3ab8_5837;
          local_4 = in_stack_00000028;
          local_6 = in_stack_00000026;
          local_8 = in_stack_00000024;
          local_a = in_stack_00000022;
          local_c = in_stack_00000020;
          local_e = 0x22b2;
          iVar5 = 0x3bf;
          local_10 = 0xa4a;
          local_14 = (int **)func_0x00006608();
          if ((((local_14 != (int **)0x0) || (*in_stack_00000028 != 0)) ||
              (*in_stack_00000020 != local_48)) || (*in_stack_00000022 != local_4a)) break;
          local_4 = (int *)0x3bf;
          local_6 = (undefined2 *)0x9e1;
          func_0x000297e6();
          local_4 = (int *)0x22b2;
          local_6 = (undefined2 *)0x9e6;
          func_0x00029d78();
          local_c = (int *)0x22b2;
          local_e = 0x9f0;
          func_0x000299d1();
          local_c = (int *)0x22b2;
          local_e = 0x9f8;
          func_0x000297e6();
          local_c = (int *)0x22b2;
          local_e = 0x9fd;
          func_0x00029d78();
          local_14 = (int **)0x22b2;
          local_16 = (int *)0xa07;
          func_0x000299d1();
          local_14 = &local_44;
          local_16 = in_stack_00000028;
          local_18 = in_stack_00000026;
          local_1a = in_stack_00000024;
          local_1c = in_stack_00000022;
          local_1e = in_stack_00000020;
          pppiStack_20 = &local_14;
          local_22 = local_46;
          puStack_24 = (undefined2 *)0x22b2;
          local_26 = 0xa25;
          FUN_4375_c5be();
          local_46 = local_46 + 1;
        }
        goto LAB_3ab8_5865;
      }
      goto LAB_3ab8_5837;
    }
  }
  iVar5 = 0x22b2;
  goto LAB_3ab8_5865;
}



/* 3ab8:5eff  FUN_3ab8_5eff  5718 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_5eff(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint *puVar9;
  int **ppiVar10;
  int *piVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined2 *puVar16;
  int local_2a6;
  int local_2a4;
  undefined2 *local_2a2;
  undefined1 local_29e [4];
  undefined2 local_29a;
  undefined2 local_298;
  undefined2 local_296;
  undefined2 local_294;
  undefined2 local_28c;
  undefined2 local_28a;
  undefined2 local_288;
  uint local_286;
  int local_284;
  undefined1 local_27e [8];
  int local_276;
  uint local_274;
  int local_272;
  undefined2 local_26c [10];
  byte local_258;
  undefined1 local_257;
  undefined2 local_256;
  undefined2 local_254 [11];
  undefined2 local_23e;
  undefined1 local_238 [8];
  undefined1 local_230 [50];
  int local_1fe;
  int local_1ec [50];
  undefined2 local_188;
  int local_186;
  undefined2 local_184;
  undefined2 local_182;
  int local_17c;
  int *local_17a;
  int local_178;
  uint local_176;
  int local_174;
  undefined2 local_16e;
  undefined2 local_16c;
  undefined1 *local_162;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined1 local_158 [4];
  int *local_154;
  undefined2 local_152;
  uint local_14c;
  int local_14a;
  undefined2 local_148;
  undefined2 local_146;
  uint local_138;
  uint local_136;
  int local_134;
  undefined2 local_12e;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  int local_11c;
  int local_11a;
  uint local_116;
  int local_114;
  undefined2 local_112 [13];
  byte local_f7;
  undefined1 local_f6;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  byte local_da;
  byte local_d9;
  byte local_d8;
  undefined4 local_d6;
  int local_ce;
  undefined2 local_cc;
  int local_ca [2];
  undefined2 local_c6 [8];
  byte local_b5;
  undefined1 local_b4;
  int local_ac;
  int local_aa;
  int local_a8 [8];
  undefined1 local_98 [100];
  int local_34;
  int local_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  int *piStack_2a;
  uint uStack_26;
  int iStack_24;
  int iStack_22;
  undefined2 uStack_1c;
  undefined1 *puStack_1a;
  int **ppiStack_18;
  uint *puStack_16;
  int *piStack_12;
  int *piStack_10;
  int *local_e;
  int *local_c;
  
  FUN_21f2_0ebc();
  local_28c = 0;
  local_cc = 0;
  local_12e = *(undefined2 *)0xa734;
  uStack_12c = *(undefined2 *)0xa736;
  uStack_12a = *(undefined2 *)0xa738;
  uStack_128 = *(undefined2 *)0xa73a;
  local_29a = 0;
  local_298 = 0xb4;
  local_296 = 0;
  local_294 = 0x168;
  local_c = (int *)local_230;
  local_e = (int *)0x22b2;
  piVar11 = (int *)0x22b2;
  piStack_10 = (int *)0xacd;
  FUN_21f2_3454();
  *(undefined1 *)0x1062 = 0;
  if ((param_1 != 1) && (param_1 != 2)) goto LAB_3ab8_6096;
  local_c = (int *)0x22b2;
  local_e = (int *)0xaec;
  FUN_21f2_3454();
LAB_3ab8_5f6e:
  do {
    piVar11 = (int *)0x885;
    func_0x0000c3ca();
    local_c = (int *)local_238;
    local_e = local_ca;
    piStack_10 = local_a8;
    piStack_12 = &local_17c;
    puStack_16 = &local_14c;
    ppiStack_18 = &local_e;
    puStack_1a = local_98;
    uStack_1c = 0x885;
    FUN_4375_9214();
LAB_3ab8_5faa:
    do {
      if (*(int *)0x158 != 0) goto LAB_3ab8_63de;
      uVar14 = 0;
      if (*(int *)0xc22 == 0) {
        FUN_28b3_0d04();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        func_0x00029d78();
        FUN_28b3_1181();
        if ((bool)uVar14) {
          FUN_28b3_0d04();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          uVar12 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar14) goto LAB_3ab8_6019;
        }
        else {
LAB_3ab8_6019:
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029ae7();
          FUN_28b3_1181();
          if ((bool)uVar14) {
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029ae7();
            FUN_28b3_1181();
            if (!(bool)uVar14) goto LAB_3ab8_6055;
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xc6b;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xc74;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xc79;
            func_0x00029d78();
            ppiStack_18 = (int **)0x22b2;
            puStack_1a = (undefined1 *)0xc83;
            func_0x000299d1();
            ppiStack_18 = (int **)0x701f;
          }
          else {
LAB_3ab8_6055:
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xbed;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xbf6;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            piStack_12 = (int *)0xbfb;
            func_0x00029d78();
            ppiStack_18 = (int **)0x22b2;
            puStack_1a = (undefined1 *)0xc05;
            func_0x000299d1();
            ppiStack_18 = (int **)0x7011;
          }
          puStack_1a = (undefined1 *)0xbf48;
          uStack_1c = 0x22b2;
          FUN_21f2_3454();
          local_c = (int *)0x2;
          local_e = (int *)0x20;
          piStack_10 = (int *)0xbf48;
          piStack_12 = (int *)0x22b2;
          uVar12 = 0xdef;
          FUN_1000_02b5();
        }
        if (*(char *)0x6d60 == '\0') {
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xd09;
          func_0x000299d1();
          piStack_10 = (int *)0x7039;
          piStack_12 = (int *)0xbf48;
          puStack_16 = (uint *)0xd16;
          FUN_21f2_3454();
          local_e = (int *)0x2f;
        }
        else {
          local_e = (int *)0xccf;
          local_c = (int *)uVar12;
          FUN_21f2_3454();
          local_c = (int *)0x22b2;
          local_e = (int *)0xcde;
          FUN_21f2_2d26();
          local_e = (int *)0x40;
        }
        local_c = (int *)0x2;
        piStack_10 = (int *)0xbf48;
        piStack_12 = (int *)0x22b2;
        FUN_1000_02b5();
        if (*(char *)0xc13 == '\0') {
          local_c = (int *)0x2;
          local_e = (int *)0x4c;
          piStack_10 = (int *)0x7040;
          piStack_12 = (int *)0xdef;
          FUN_1000_02b5();
        }
        piVar11 = (int *)0xdef;
        *(undefined2 *)0xc22 = 1;
      }
      local_c = (int *)0x7043;
      local_e = local_1ec;
      piStack_12 = (int *)0xd75;
      piStack_10 = piVar11;
      FUN_21f2_3454();
      local_c = (int *)0x22b2;
      local_e = (int *)0xd86;
      FUN_1def_07a4();
      local_c = (int *)0x1bb4;
      local_e = (int *)0xd92;
      FUN_1000_0599();
      local_c = (int *)0xdef;
      local_e = (int *)0xda2;
      func_0x00012276();
      if (*(char *)0x6d60 != '\0') {
        uVar12 = *(undefined2 *)0xa702;
        *(undefined2 *)0x6d5c = *(undefined2 *)0xa700;
        *(undefined2 *)0x6d5e = uVar12;
      }
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
      local_c = (int *)local_152;
      local_e = local_154;
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe09;
      func_0x0002a11e();
      FUN_28b3_0d04();
      FUN_28b3_0e53();
      local_c = (int *)local_152;
      local_e = local_154;
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xe31;
      FUN_28b3_15dc();
      FUN_28b3_0d04();
      piVar11 = (int *)0x22b2;
      FUN_28b3_0e53();
      uVar12 = *(undefined2 *)0xa700;
      uVar3 = *(undefined2 *)0xa702;
      *(undefined2 *)0xb30c = uVar12;
      *(undefined2 *)0xb30e = uVar3;
      *(undefined2 *)0xb37e = uVar12;
      *(undefined2 *)0xb380 = uVar3;
      local_c = (int *)local_27e;
      piStack_2a = &local_aa;
      piStack_10 = &local_34;
      piStack_12 = (int *)*(int *)0xa6ea;
      puStack_16 = (uint *)*(int *)0xa6e6;
      ppiStack_18 = (int **)*(int *)0xa6e4;
      puStack_1a = (undefined1 *)*(int *)0xa6ea;
      uStack_1c = *(undefined2 *)0xa6e8;
      iStack_22 = local_17c;
      iStack_24 = local_14a;
      uStack_26 = local_14c;
      uStack_2c = 0;
      uStack_2e = 0x22b2;
      uStack_30 = 0xeaa;
      local_e = piStack_2a;
      local_186 = FUN_3ab8_579e();
      if (*(int *)0x158 != 0) {
        return 0xfff5;
      }
    } while (local_186 == 99);
    if ((local_aa < *(int *)0xa5e) && (local_162 != (undefined1 *)0x0)) {
      if ((0xfb < local_34) && (local_34 < 0x16c)) {
        local_186 = 0x31;
      }
      if ((0x16b < local_34) && (local_34 < 0x1b4)) {
        local_186 = 0x32;
      }
      if ((0x1b3 < local_34) && (local_34 < 500)) {
        local_186 = 0x33;
      }
      if ((499 < local_34) && (local_34 < 0x234)) {
        local_186 = 0x34;
      }
      if (0x233 < local_34) {
        local_186 = 0x35;
      }
    }
    if ((local_186 == 100) && (local_162 != (undefined1 *)0x0)) {
      local_c = (int *)local_162;
      local_e = (int *)0x22b2;
      piVar11 = (int *)0x11f2;
      piStack_10 = (int *)0xf54;
      iVar5 = FUN_13bf_1819();
      if (iVar5 != 0) break;
      goto LAB_3ab8_5faa;
    }
    if (local_186 != -1) {
      if (local_186 == 0x31) {
LAB_3ab8_6408:
        do {
          func_0x000297e6();
          FUN_28b3_0e3b();
          FUN_28b3_0ee9();
          func_0x000297e6();
          FUN_28b3_0e3b();
          FUN_28b3_0ee9();
          if (*(char *)0x126 != '\0') {
            uVar14 = *(byte *)0x15b < 2;
            uVar13 = *(byte *)0x15b == 2;
            if ((bool)uVar13) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar14) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar14) {
                  func_0x000297e6();
                  func_0x00029af6();
                  FUN_28b3_0e53();
                  func_0x000297e6();
                  func_0x00029af6();
                  FUN_28b3_0e3b();
                  FUN_28b3_0e53();
                  func_0x000297e6();
                  FUN_28b3_0e53();
                }
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar14 || (bool)uVar13) {
LAB_3ab8_653a:
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar14) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar14 || (bool)uVar13) goto LAB_3ab8_6585;
                  func_0x000297e6();
                  func_0x00029af6();
                  FUN_28b3_0e53();
                }
                else {
LAB_3ab8_6585:
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar14 || (bool)uVar13) break;
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if (!(bool)uVar14) break;
                }
                func_0x000297e6();
                func_0x00029af6();
              }
              else {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar14 || (bool)uVar13) goto LAB_3ab8_653a;
                func_0x000297e6();
                func_0x00029af6();
              }
              piVar11 = (int *)0x22b2;
              FUN_28b3_0e53();
              goto LAB_3ab8_6511;
            }
          }
          local_c = (int *)0x7075;
          local_e = (int *)0x2;
          piStack_10 = (int *)0x2712;
          piStack_12 = (int *)0x22b2;
          piVar11 = (int *)0xad;
          local_ac = func_0x00001dd5();
          if (*(int *)0x158 != 0) {
            return 0xfff5;
          }
          uVar14 = local_ac != -1;
          uVar13 = local_ac == -1;
          if ((bool)uVar13) {
            local_162 = (undefined1 *)0x0;
            goto LAB_3ab8_6511;
          }
          FUN_28b3_0d04();
          func_0x000297e6();
          func_0x00029ae7();
          FUN_28b3_0e3b();
          func_0x00029d78();
          FUN_28b3_1181();
          if ((bool)uVar14) {
LAB_3ab8_6696:
            local_c = (int *)0x121f;
            func_0x00012276();
            goto LAB_3ab8_6408;
          }
          FUN_28b3_0d04();
          func_0x000297e6();
          func_0x00029ae7();
          FUN_28b3_0e3b();
          func_0x00029d78();
          FUN_28b3_1181();
          if ((bool)uVar14) goto LAB_3ab8_6696;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar14 && !(bool)uVar13) goto LAB_3ab8_6696;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar14 && !(bool)uVar13) goto LAB_3ab8_6696;
        } while (((local_ac != 0x66) && (local_ac != 0)) || (local_ac == 99));
        piVar11 = (int *)0x22b2;
        *(undefined2 *)0x6d54 = local_148;
        *(undefined2 *)0x6d56 = local_146;
        *(undefined2 *)0x6d58 = local_15c;
        *(undefined2 *)0x6d5a = local_15a;
      }
LAB_3ab8_6511:
      if (local_186 == 0x32) {
        pcVar4 = (code *)swi(0x3f);
        local_ac = (*pcVar4)();
        if (*(int *)0x158 != 0) {
          return 0xfff5;
        }
        *(undefined1 *)0x6d60 = 0;
      }
      if (local_186 == 0x33) {
        if ((*(char *)0x124 != '\0') && (*(char *)0x15b != '\0')) {
          local_c = (int *)local_29e;
          local_e = &local_2a6;
          piStack_12 = (int *)0x1295;
          piStack_10 = piVar11;
          func_0x0000dcbd();
          if ((*(int *)0xa58 < (int)(undefined2 *)local_2a2) && (0x30 < local_2a4)) {
            uVar14 = *(char *)0x15b == '\0';
            if (*(char *)0x15b == '\x01') {
              func_0x000297e6();
              func_0x000297e6();
              local_c = (int *)0x12cf;
              func_0x00029bb5();
              FUN_28b3_0e3b();
              FUN_28b3_1181();
              if (!(bool)uVar14) {
                func_0x000297e6();
                FUN_28b3_100d();
LAB_3ab8_676e:
                piVar11 = (int *)0x22b2;
                FUN_28b3_0e53();
                goto LAB_3ab8_5faa;
              }
            }
            else {
              func_0x000297e6();
              func_0x000297e6();
              local_c = (int *)0x1316;
              func_0x00029b55();
              FUN_28b3_0e3b();
              FUN_28b3_1181();
              if ((bool)uVar14) {
                func_0x000297e6();
                func_0x00029bb5();
                goto LAB_3ab8_676e;
              }
            }
            piVar11 = (int *)0x22b2;
            goto LAB_3ab8_5faa;
          }
        }
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029d78();
        local_ac = FUN_28b3_0f51();
        if (*(char *)0x15b == '\x02') {
          local_ac = local_ac + -1;
          if (local_ac < 0) {
            local_ac = 3;
          }
        }
        else {
          local_ac = local_ac + 1;
          if (3 < local_ac) {
            local_ac = 0;
          }
        }
        local_2a6 = local_ac * 0x5a;
        FUN_28b3_0d8b();
        piVar11 = (int *)0x22b2;
        FUN_28b3_0e53();
        *(undefined1 *)0x6d60 = 0;
      }
      if ((local_186 == 0x34) && (*(char *)0x6d60 = *(char *)0x6d60 + '\x01', 2 < *(byte *)0x6d60))
      {
        *(undefined1 *)0x6d60 = 0;
      }
      if (local_186 == 0x35) {
        *(char *)0xc13 = '\x01' - *(char *)0xc13;
      }
      goto LAB_3ab8_5faa;
    }
    if (param_1 != 0) {
      return 0xffff;
    }
LAB_3ab8_6096:
    local_c = (int *)0xd04;
    piStack_10 = (int *)0xc27;
    local_e = piVar11;
    FUN_21f2_2de0();
    local_c = (int *)0x22b2;
    local_e = (int *)0xc37;
    iVar5 = FUN_4375_8fad();
    if (iVar5 != 0) {
      return 0xffff;
    }
    if (*(int *)0x158 != 0) {
      return 0xff91;
    }
  } while( true );
LAB_3ab8_63de:
  if (*(int *)0x158 != 0) {
    return 0xfff5;
  }
LAB_3ab8_75f2:
  if (*(char *)0x6d60 == '\0') goto LAB_3ab8_6a3b;
  local_e = (int *)0x218a;
  local_c = piVar11;
  FUN_21f2_3454();
  local_c = (int *)0x22b2;
  local_e = (int *)0x13e0;
  FUN_21f2_2d26();
  local_c = (int *)0x22b2;
  local_e = (int *)0x13f0;
  FUN_21f2_2d26();
  local_c = (int *)0x22b2;
  local_e = (int *)0x1400;
  FUN_21f2_2d26();
  local_c = (int *)0x22b2;
  local_e = (int *)0x140c;
  FUN_1000_0599();
  local_c = (int *)0x1418;
  func_0x00012276();
  func_0x00010526();
  local_c = (int *)local_158;
  local_e = &local_aa;
  piStack_10 = &local_34;
  piStack_12 = (int *)0xdef;
  func_0x000297e6();
  piStack_12 = (int *)0x22b2;
  func_0x00029d78();
  puStack_1a = (undefined1 *)0x22b2;
  uStack_1c = 0x144e;
  func_0x000299d1();
  puStack_1a = (undefined1 *)0x22b2;
  uStack_1c = 0x1457;
  func_0x000297e6();
  puStack_1a = (undefined1 *)0x22b2;
  uStack_1c = 0x145c;
  func_0x00029d78();
  iStack_22 = 0x22b2;
  iStack_24 = 0x1466;
  func_0x000299d1();
  iStack_22 = local_17c;
  iStack_24 = local_14a;
  uStack_26 = local_14c;
  piStack_2a = local_e;
  uStack_2c = 1;
  uStack_2e = 0x22b2;
  uStack_30 = 0x1480;
  local_186 = FUN_3ab8_579e();
  local_c = (int *)0x22b2;
  local_e = (int *)0x1494;
  FUN_1000_0599();
  piVar11 = (int *)0xdef;
  func_0x00010526();
  if (*(int *)0x158 != 0) {
    return 0xfff5;
  }
  if (local_186 != -1) goto LAB_3ab8_692f;
  goto LAB_3ab8_5f6e;
LAB_3ab8_692f:
  if (local_162 == (undefined1 *)0x0) goto LAB_3ab8_75f2;
  local_c = (int *)local_162;
  local_e = (int *)0xdef;
  piVar11 = (int *)0x11f2;
  piStack_10 = (int *)0x14c9;
  iVar5 = FUN_13bf_1819();
  uVar14 = iVar5 == 0;
  if ((bool)uVar14) goto LAB_3ab8_75f2;
  func_0x000297e6();
  FUN_28b3_100d();
  FUN_28b3_0e3b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_100d();
  FUN_28b3_0e3b();
  FUN_28b3_1181();
  if ((bool)uVar14) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar14) {
      uVar12 = *(undefined2 *)0xa702;
      *(undefined2 *)0x6d5c = *(undefined2 *)0xa700;
      *(undefined2 *)0x6d5e = uVar12;
      goto LAB_3ab8_6a3b;
    }
  }
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x1552;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x155b;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x1560;
  func_0x00029d78();
  ppiStack_18 = (int **)0x22b2;
  puStack_1a = (undefined1 *)0x156a;
  func_0x000299d1();
  ppiStack_18 = (int **)0x22b2;
  puStack_1a = (undefined1 *)0x156f;
  FUN_28b3_1648();
  FUN_28b3_0d04();
  func_0x00029c44();
  FUN_28b3_0e53();
  if (*(char *)0x6d60 == '\x02') {
    func_0x000297e6();
    local_c = (int *)0x15a5;
    func_0x00029b55();
    FUN_28b3_0e53();
  }
LAB_3ab8_6a3b:
  func_0x0000c3ca();
  if ((*(int *)0xcb6 == 0) || (*(char *)0x6d60 != '\0')) {
    func_0x000297e6();
  }
  else {
    func_0x000297e6();
    func_0x00029bb5();
  }
  func_0x00029d78();
  func_0x00029c2c();
  func_0x000299d1();
  local_c = (int *)local_152;
  local_e = local_154;
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x1617;
  func_0x0002a11e();
  FUN_28b3_0d04();
  FUN_28b3_0e53();
  local_c = (int *)local_152;
  local_e = local_154;
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x163f;
  FUN_28b3_15dc();
  FUN_28b3_0d04();
  FUN_28b3_0e53();
  uVar12 = *(undefined2 *)0xa700;
  uVar3 = *(undefined2 *)0xa702;
  *(undefined2 *)0xb30c = uVar12;
  *(undefined2 *)0xb30e = uVar3;
  *(undefined2 *)0xb37e = uVar12;
  *(undefined2 *)0xb380 = uVar3;
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_1c08();
  FUN_28b3_1177();
  FUN_28b3_0e53();
  local_c = (int *)0x1694;
  func_0x0000daa6();
  local_286 = *(uint *)0x148 + (int)local_e;
  local_284 = *(int *)0x14a + (int)local_c + (uint)CARRY2(*(uint *)0x148,(uint)local_e);
  local_17a = (int *)(*(uint *)0x148 + 1);
  local_178 = *(int *)0x14a + (uint)(0xfffe < *(uint *)0x148);
  local_c = (int *)0x0;
  local_e = (int *)0x0;
  local_28c = 0;
  local_116 = (uint)local_17a;
  local_114 = local_178;
  if ((local_178 <= local_284) && ((local_178 < local_284 || (local_17a <= local_286)))) {
    local_c = (int *)0x885;
    uVar12 = 0;
    local_e = (int *)0x1857;
    puVar16 = (undefined2 *)func_0x0000013f();
    puVar7 = (undefined2 *)puVar16;
    puVar8 = local_c6;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    if (local_b5 < 0x5a) {
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x188c;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1895;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x189a;
      func_0x00029d78();
      ppiStack_18 = (int **)0x22b2;
      puStack_1a = (undefined1 *)0x18a4;
      func_0x000299d1();
      ppiStack_18 = (int **)0x22b2;
      puStack_1a = (undefined1 *)0x18ad;
      func_0x000297e6();
      ppiStack_18 = (int **)0x22b2;
      puStack_1a = (undefined1 *)0x18b2;
      func_0x00029d78();
      uVar12 = 0x22b2;
      iStack_22 = 0x18bc;
      func_0x000299d1();
      iStack_22 = 0x22b2;
      iStack_24 = 0x18c5;
      FUN_4375_b793();
    }
    else {
      local_28c = 1;
    }
    local_b4 = *(undefined1 *)0xb310;
    if (*(char *)0x1175 != '\0') {
      local_c = (int *)uVar12;
      if (*(char *)0x1175 == '\x01') {
        uVar6 = (int)*(uint *)0xb310 >> 0xf;
        local_ce = ((int)((*(uint *)0xb310 ^ uVar6) - uVar6) >> 4 ^ uVar6) - uVar6;
        local_e = (int *)0x1713;
        uVar15 = func_0x0000013f();
        local_136 = *(byte *)((int)uVar15 + 0x12) & 0xf;
        local_138 = local_136 + local_ce * 0x10;
      }
      else {
        local_e = (int *)0x173d;
        uVar15 = func_0x0000013f();
        local_138 = (uint)*(byte *)((int)uVar15 + 0x12);
      }
      local_c = (int *)0x1753;
      iVar5 = func_0x00008854();
      if (iVar5 == 0) {
        local_b4 = (byte)local_138;
      }
    }
    puVar7 = &uStack_1c;
    puVar8 = local_c6;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      puVar16 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar1 = *puVar16;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_32b2_6cc6();
  }
  local_176 = *(uint *)0x14c + local_14c;
  local_174 = *(int *)0x14e + local_14a + (uint)CARRY2(*(uint *)0x14c,local_14c);
  local_274 = *(uint *)0x14c + 1;
  local_272 = *(int *)0x14e + (uint)(0xfffe < *(uint *)0x14c);
  local_14a = 0;
  local_14c = 0;
  if ((*(int *)0xcb6 == 0) || (*(char *)0x6d60 != '\0')) {
    func_0x000297e6();
  }
  else {
    func_0x000297e6();
    func_0x00029bb5();
  }
  func_0x00029d78();
  func_0x000299d1();
  local_17a = (int *)local_274;
  local_178 = local_272;
  if ((local_272 <= local_174) && ((local_272 < local_174 || (local_274 <= local_176)))) {
    local_c = (int *)0x22b2;
    uVar12 = 0;
    local_e = (int *)0x1a8f;
    puVar16 = (undefined2 *)func_0x00000271();
    puVar7 = (undefined2 *)puVar16;
    puVar8 = local_112;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    if (local_f7 < 0x5a) {
      local_c = (int *)local_152;
      local_e = local_154;
      piStack_10 = (int *)0x0;
      piStack_12 = (int *)0x1ac5;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1aca;
      func_0x00029d78();
      ppiStack_18 = (int **)0x22b2;
      puStack_1a = (undefined1 *)0x1ad4;
      func_0x000299d1();
      ppiStack_18 = (int **)0x22b2;
      puStack_1a = (undefined1 *)0x1add;
      func_0x000297e6();
      ppiStack_18 = (int **)0x22b2;
      puStack_1a = (undefined1 *)0x1ae2;
      func_0x00029d78();
      iStack_22 = 0x1aec;
      func_0x000299d1();
      iStack_22 = 0x1af5;
      func_0x000297e6();
      iStack_22 = 0x1afa;
      func_0x00029d78();
      uVar12 = 0x22b2;
      piStack_2a = (int *)0x1b04;
      func_0x000299d1();
      piStack_2a = (int *)0x22b2;
      uStack_2c = 0x1b0d;
      FUN_4375_bca3();
    }
    else {
      local_28c = 1;
    }
    local_f6 = *(undefined1 *)0xb310;
    if (*(char *)0x1175 != '\0') {
      local_c = (int *)uVar12;
      if (*(char *)0x1175 == '\x01') {
        uVar6 = (int)*(uint *)0xb310 >> 0xf;
        local_ce = ((int)((*(uint *)0xb310 ^ uVar6) - uVar6) >> 4 ^ uVar6) - uVar6;
        local_e = (int *)0x1989;
        uVar15 = func_0x00000271();
        local_136 = *(byte *)((int)uVar15 + 0x1c) & 0xf;
        local_138 = local_136 + local_ce * 0x10;
      }
      else {
        local_e = (int *)0x19b3;
        uVar15 = func_0x00000271();
        local_138 = (uint)*(byte *)((int)uVar15 + 0x1c);
      }
      local_c = (int *)0x19c9;
      iVar5 = func_0x00008854();
      if (iVar5 == 0) {
        local_f6 = (byte)local_138;
      }
    }
    puVar9 = &uStack_26;
    puVar8 = local_112;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar1 = puVar9;
      puVar9 = puVar9 + 1;
      puVar16 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar1 = *puVar16;
    }
                    /* WARNING: Subroutine does not return */
    piStack_2a = (int *)0x19eb;
    thunk_FUN_32b2_6cc6();
  }
  local_276 = local_32 + *(int *)0x152;
  local_32 = 0;
  local_1fe = *(int *)0x152 + 1;
  local_134 = local_1fe;
  for (; local_1fe <= local_276; local_1fe = local_1fe + 1) {
    local_c = (int *)0x1c2f;
    puVar16 = (undefined2 *)func_0x000003ef();
    puVar7 = (undefined2 *)puVar16;
    puVar8 = &local_e2;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    if (local_d9 < 0x5a) {
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b6d();
      FUN_28b3_0e3b();
      FUN_28b3_0e53();
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1c90;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1c99;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1ca2;
      func_0x00029b6d();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1cab;
      func_0x00029b6d();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1cb4;
      FUN_28b3_0e3b();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1cb9;
      func_0x00029d78();
      ppiStack_18 = (int **)0x22b2;
      puStack_1a = (undefined1 *)0x1cc3;
      func_0x000299d1();
      ppiStack_18 = (int **)0x0;
      puStack_1a = (undefined1 *)0x22b2;
      uStack_1c = 0x1ccb;
      FUN_1def_05d1();
      func_0x000297e6();
      func_0x00029bb5();
      FUN_28b3_0e53();
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1cff;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1d08;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1d0d;
      func_0x00029d78();
      ppiStack_18 = (int **)0x22b2;
      puStack_1a = (undefined1 *)0x1d17;
      func_0x000299d1();
      ppiStack_18 = (int **)0x0;
      puStack_1a = (undefined1 *)0x22b2;
      uStack_1c = 0x1d1f;
      func_0x0001e558();
      func_0x000297e6();
      func_0x00029bb5();
      FUN_28b3_0e53();
      local_e2 = local_16e;
      local_e0 = local_16c;
      local_de = local_184;
      local_dc = local_182;
      local_da = *(byte *)0xb310;
      if (*(char *)0x1175 != '\0') {
        if (*(char *)0x1175 == '\x01') {
          uVar6 = (int)*(uint *)0xb310 >> 0xf;
          local_ce = ((int)((*(uint *)0xb310 ^ uVar6) - uVar6) >> 4 ^ uVar6) - uVar6;
          local_c = (int *)0x1d94;
          uVar15 = func_0x000003ef();
          local_136 = *(byte *)((int)uVar15 + 8) & 0xf;
          local_138 = local_136 + local_ce * 0x10;
        }
        else {
          local_c = (int *)0x1b3b;
          uVar15 = func_0x000003ef();
          local_138 = (uint)*(byte *)((int)uVar15 + 8);
        }
        local_c = (int *)0x1b50;
        iVar5 = func_0x00008854();
        if (iVar5 == 0) {
          local_da = (byte)local_138;
        }
      }
    }
    else {
      local_28c = 1;
    }
    ppiVar10 = &piStack_12;
    puVar8 = &local_e2;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar1 = ppiVar10;
      ppiVar10 = ppiVar10 + 1;
      puVar16 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar1 = *puVar16;
    }
    puStack_16 = (uint *)0x1b7a;
    iVar5 = FUN_1def_10f0();
    if (iVar5 != 0) {
      local_32 = local_32 + 1;
      local_c = (int *)0x1bb4;
      local_e = (int *)0x1b91;
      func_0x0001f185();
      local_c = (int *)0x1b9c;
      local_d6 = func_0x000003ef();
      uVar12 = (undefined2)((ulong)local_d6 >> 0x10);
      iVar5 = (int)local_d6;
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) | 0x10;
      if (param_1 == 1) {
        *(uint *)(iVar5 + 10) = *(uint *)(iVar5 + 10) ^ (*(byte *)(iVar5 + 10) ^ local_d8) & 0x10;
      }
      *(uint *)(iVar5 + 10) = *(uint *)(iVar5 + 10) ^ (*(byte *)(iVar5 + 10) ^ local_d8) & 0x20;
      *(uint *)(iVar5 + 10) = *(uint *)(iVar5 + 10) ^ (*(byte *)(iVar5 + 10) ^ local_d8) & 0x40;
      *(uint *)(iVar5 + 10) = *(uint *)(iVar5 + 10) ^ (*(byte *)(iVar5 + 10) ^ local_d8) & 0x80;
    }
    if (*(char *)(local_da + 0xb4a6) == '\0') {
      *(undefined1 *)(local_da + 0xb4a6) = 1;
      local_c = (int *)0x1c0e;
      func_0x0000b1d8();
      local_c = (int *)0x1c17;
      func_0x0000daa6();
    }
  }
  local_11c = *(int *)0x150 + local_17c;
  local_17c = 0;
  local_1fe = *(int *)0x150 + 1;
  local_11a = local_1fe;
  for (; local_1fe <= local_11c; local_1fe = local_1fe + 1) {
    local_c = (int *)0x1f7b;
    puVar16 = (undefined2 *)func_0x00000398();
    puVar7 = (undefined2 *)puVar16;
    puVar8 = local_26c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    if (local_258 < 0x5a) {
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1faf;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1fb8;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x1fbd;
      func_0x00029d78();
      ppiStack_18 = (int **)0x22b2;
      puStack_1a = (undefined1 *)0x1fc7;
      func_0x000299d1();
      ppiStack_18 = (int **)0x22b2;
      puStack_1a = (undefined1 *)0x1fd0;
      func_0x000297e6();
      ppiStack_18 = (int **)0x22b2;
      puStack_1a = (undefined1 *)0x1fd5;
      func_0x00029d78();
      iStack_22 = 0x1fdf;
      func_0x000299d1();
      iStack_22 = 0x22b2;
      iStack_24 = 0x1fe8;
      FUN_4375_c12c();
    }
    else {
      local_28c = 1;
    }
    local_257 = *(undefined1 *)0xb310;
    if (*(char *)0x1175 != '\0') {
      if (*(char *)0x1175 == '\x01') {
        uVar6 = (int)*(uint *)0xb310 >> 0xf;
        local_ce = ((int)((*(uint *)0xb310 ^ uVar6) - uVar6) >> 4 ^ uVar6) - uVar6;
        local_c = (int *)0x1e0a;
        uVar15 = func_0x00000398();
        local_136 = *(byte *)((int)uVar15 + 0x15) & 0xf;
        local_138 = local_136 + local_ce * 0x10;
      }
      else {
        local_c = (int *)0x1e2f;
        uVar15 = func_0x00000398();
        local_138 = (uint)*(byte *)((int)uVar15 + 0x15);
      }
      local_c = (int *)0x1e44;
      iVar5 = func_0x00008854();
      if (iVar5 == 0) {
        local_257 = (byte)local_138;
      }
    }
    puVar7 = (undefined2 *)&stack0xffe2;
    puVar8 = local_26c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      puVar16 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar1 = *puVar16;
    }
    iStack_22 = 0x1e66;
    iVar5 = FUN_1885_2948();
    if (iVar5 != 0) {
      local_17c = local_17c + 1;
      local_c = (int *)0x1e7d;
      puVar16 = (undefined2 *)func_0x00000398();
      puVar7 = (undefined2 *)puVar16;
      puVar8 = local_254;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar1;
      }
      local_23e = local_23e ^ ((byte)local_23e ^ (byte)local_256) & 0x10;
      local_23e = (local_23e ^ ((byte)local_23e ^ (byte)local_256) & 0x20) & 0xffbf;
      uVar6 = local_23e ^ ((byte)local_23e ^ (byte)local_256) & 0x80 ^
              ((local_23e._1_1_ ^ local_256._1_1_) & 1) << 8;
      local_23e._1_1_ = (byte)(uVar6 >> 8);
      uVar6 = uVar6 ^ ((local_23e._1_1_ ^ local_256._1_1_) & 2) << 8;
      local_23e._1_1_ = (byte)(uVar6 >> 8);
      local_23e = uVar6 ^ ((local_23e._1_1_ ^ local_256._1_1_) & 4) << 8 | 0x800;
      if (param_1 == 1) {
        local_23e = local_23e ^ ((local_23e._1_1_ ^ local_256._1_1_) & 8) << 8;
      }
      uVar6 = local_23e ^ ((local_23e._1_1_ ^ local_256._1_1_) & 0x10) << 8;
      local_23e._1_1_ = (byte)(uVar6 >> 8);
      uVar6 = uVar6 ^ ((local_23e._1_1_ ^ local_256._1_1_) & 0x20) << 8;
      local_23e._1_1_ = (byte)(uVar6 >> 8);
      local_23e = (uVar6 ^ ((local_23e._1_1_ ^ local_256._1_1_) & 0x40) << 8 ^ local_256) & 0x7fff ^
                  local_256;
      local_c = (int *)0x1f51;
      local_2a2 = (undefined2 *)func_0x00000398();
      puVar7 = (undefined2 *)local_2a2;
      puVar8 = local_254;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        puVar16 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar1 = *puVar16;
      }
    }
  }
  piVar11 = (int *)0x885;
  func_0x0000abfa();
  *(undefined2 *)0xbc0 = 1;
  if (*(int *)0xce6 != 0) {
    return 0;
  }
LAB_3ab8_761c:
  if (*(int *)0x158 != 0) {
    return 0;
  }
  local_c = local_1ec;
  piStack_10 = (int *)0x21b9;
  local_e = piVar11;
  FUN_21f2_3454();
  local_c = (int *)0x22b2;
  local_e = (int *)0x21ca;
  FUN_1def_07a4();
  local_c = (int *)local_27e;
  local_e = local_1ec;
  *(undefined2 *)0xc2c = 1;
  *(undefined2 *)0xc20 = 1;
  piStack_10 = (int *)0x1;
  piStack_12 = (int *)0x1bb4;
  piVar11 = (int *)0x1bb4;
  local_186 = FUN_1def_0904();
  *(undefined2 *)0xc2c = 0;
  *(undefined2 *)0xc20 = 0;
  if (*(int *)0x158 != 0) {
    return 0xfff5;
  }
  if (local_186 != -1) {
    if (local_186 == 1) goto LAB_3ab8_5f6e;
    if (local_186 == 2) {
      if ((param_1 == 1) || (param_1 == 2)) {
        return 2;
      }
      goto LAB_3ab8_6096;
    }
    if (local_186 == 0x14) {
      return 0x14;
    }
    if (local_162 == (undefined1 *)0x0) goto LAB_3ab8_761c;
    local_c = (int *)local_162;
    local_e = (int *)0x1bb4;
    piVar11 = (int *)0x11f2;
    piStack_10 = (int *)0x212f;
    iVar5 = FUN_13bf_1819();
    if (iVar5 != 0) goto code_r0x00042136;
    goto LAB_3ab8_761c;
  }
  local_c = (int *)0x2217;
  func_0x0000daa6();
  *(undefined2 *)0xbc0 = 1;
  local_178 = 0;
  iVar5 = 0x885;
  for (local_17a = (int *)0x1;
      (local_178 <= (int)local_c && ((local_178 < (int)local_c || (local_17a <= local_e))));
      local_17a = (int *)((int)local_17a + 1)) {
    local_28a = *(undefined2 *)0x148;
    local_288 = *(undefined2 *)0x14a;
    local_e = (int *)0x203c;
    local_c = (int *)iVar5;
    FUN_17a6_0d19();
    local_178 = local_178 + (uint)((int *)0xfffe < local_17a);
    iVar5 = 0x11f2;
  }
  local_178 = 0;
  for (local_17a = (int *)0x1;
      (local_178 <= local_14a && ((local_178 < local_14a || (local_17a <= local_14c))));
      local_17a = (int *)((int)local_17a + 1)) {
    local_28a = *(undefined2 *)0x14c;
    local_288 = *(undefined2 *)0x14e;
    local_e = (int *)0x2084;
    local_c = (int *)iVar5;
    FUN_13bf_0327();
    local_178 = local_178 + (uint)(0xfffe < local_17a);
    iVar5 = 0x11f2;
  }
  for (local_1fe = 1; local_1fe <= local_32; local_1fe = local_1fe + 1) {
    local_188 = *(undefined2 *)0x152;
    local_c = (int *)0x209d;
    FUN_1def_186d();
  }
  for (local_1fe = 1; local_1fe <= local_17c; local_1fe = local_1fe + 1) {
    local_188 = *(undefined2 *)0x150;
    local_c = (int *)0x20c0;
    FUN_1885_0877();
  }
  func_0x0000abfa();
  local_c = (int *)0x20dd;
  func_0x0000b1d8();
  goto LAB_3ab8_5f6e;
code_r0x00042136:
  piVar11 = (int *)0x885;
  func_0x0000c3ca();
  local_c = (int *)local_238;
  local_e = local_ca;
  piStack_10 = local_a8;
  piStack_12 = &local_17c;
  puStack_16 = &local_14c;
  ppiStack_18 = &local_e;
  puStack_1a = local_98;
  uStack_1c = 0x885;
  FUN_4375_9214();
  goto LAB_3ab8_75f2;
}



/* 3ab8:76b3  FUN_3ab8_76b3  285 bytes, 1 callers */

void __cdecl16far FUN_3ab8_76b3(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_6e [2];
  undefined1 local_6c [4];
  int local_68;
  undefined1 local_66 [86];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uVar2 = 0x22b2;
  puStack_6 = (undefined1 *)0x223e;
  FUN_21f2_0ebc();
  do {
    if (*(int *)0x158 != 0) {
      *(undefined2 *)0x6d4c = 1;
      *(undefined2 *)0x6d4e = 0;
      return;
    }
    puStack_4 = (undefined1 *)0xd;
    puStack_6 = (undefined1 *)0x70c6;
    puStack_8 = (undefined1 *)0xd04;
    uStack_c = 0x2252;
    uStack_a = uVar2;
    FUN_21f2_2de0();
    puStack_4 = (undefined1 *)0x70c7;
    puStack_6 = local_66;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0x2261;
    iVar1 = FUN_4375_8fad();
    if (iVar1 != 0) {
      return;
    }
    uVar2 = 0x22b2;
    if (*(int *)0x158 != 0) {
      return;
    }
    while( true ) {
      puStack_4 = local_66;
      puStack_6 = (undefined1 *)0x70cc;
      puStack_8 = (undefined1 *)0xbf48;
      uStack_c = 0x2281;
      uStack_a = uVar2;
      FUN_21f2_3454();
      puStack_4 = (undefined1 *)0xffff;
      puStack_6 = (undefined1 *)0x7;
      puStack_8 = (undefined1 *)0x2;
      uStack_a = 0x14;
      uStack_c = 0xbf48;
      uStack_e = 0x22b2;
      uStack_10 = 0x229d;
      FUN_1000_02b5();
      *(undefined2 *)0xc22 = 1;
      *(undefined2 *)0xc2c = 1;
      *(undefined2 *)0xc26 = 1;
      puStack_4 = local_6e;
      puStack_8 = local_6c;
      uStack_a = 0x482;
      uStack_c = 0;
      uStack_e = 0xdef;
      uVar2 = 0x1bb4;
      uStack_10 = 0x22c1;
      puStack_6 = puStack_8;
      local_68 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      *(undefined2 *)0xc26 = 0;
      if (((*(int *)0x158 != 0) || (local_68 == -1)) || (local_68 == 1)) break;
      if ((local_68 == 2) || (local_68 == 0x14)) break;
    }
    if (*(int *)0x158 != 0) {
      return;
    }
    if ((local_68 != -1) && (local_68 != 2)) {
      if (local_68 == 0x14) {
        return;
      }
      puStack_4 = (undefined1 *)0x1bb4;
      puStack_6 = (undefined1 *)0x2312;
      func_0x0000c3ca();
      puStack_4 = local_66;
      puStack_6 = (undefined1 *)0x885;
      uVar2 = 0x22b2;
      puStack_8 = (undefined1 *)0x231b;
      iVar1 = FUN_21f2_5778();
      if (iVar1 != 0) {
        puStack_4 = (undefined1 *)0x70d1;
        puStack_6 = (undefined1 *)0x22b2;
        uVar2 = 0x11f2;
        puStack_8 = (undefined1 *)0x2329;
        FUN_13bf_0a03();
      }
      *(undefined2 *)0x6d4c = 1;
      *(undefined2 *)0x6d4e = 0;
    }
  } while( true );
}



/* 3ab8:77d0  FUN_3ab8_77d0  609 bytes, 1 callers */

void FUN_3ab8_77d0(undefined2 param_1,undefined1 *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  char local_1be [20];
  int local_1aa;
  int iStack_1a8;
  undefined1 local_1a6 [44];
  undefined2 local_17a;
  undefined2 local_178;
  int local_174;
  char local_172 [50];
  int local_140;
  int local_13e;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_130;
  undefined2 local_12e;
  int iStack_12c;
  undefined1 local_12a [2];
  int iStack_128;
  int local_126;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined2 uStack_120;
  int local_11e;
  char local_11c [60];
  undefined1 local_e0 [150];
  undefined1 local_4a [2];
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined1 local_44 [52];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  char *pcStack_8;
  int *piStack_6;
  int *piStack_4;
  
  piStack_4 = (int *)0x3ab8;
  uVar3 = 0x22b2;
  piStack_6 = (int *)0x235b;
  FUN_21f2_0ebc();
  local_140 = 0;
  local_174 = 0;
  local_13e = 0;
  local_1be[0] = '\0';
  local_172[0] = '\0';
  if (((param_3 == 0) && (*(char *)0x124 != '\0')) && (*(char *)0x15b != '\0')) {
    piStack_4 = &local_126;
    piStack_6 = &local_11e;
    pcStack_8 = local_12a;
    puStack_a = local_4a;
    uStack_c = 0x22b2;
    uVar3 = 0x885;
    uStack_e = 0x239d;
    func_0x0000dcbd();
    if ((*(int *)0xa58 < local_11e) && (0x30 < local_126)) {
      local_13e = 4;
    }
  }
  if (((uint)param_2 ^ (int)param_2 >> 0xf) - ((int)param_2 >> 0xf) == 2) {
    local_13e = 4;
  }
  piStack_4 = (int *)0x0;
  pcStack_8 = (char *)0x23d2;
  piStack_6 = (int *)uVar3;
  func_0x0000daa6();
  piStack_4 = (int *)0x885;
  piStack_6 = (int *)0x23d8;
  func_0x0000c3ca();
  piStack_4 = (int *)0xd18;
  piStack_6 = (int *)0x26;
  pcStack_8 = (char *)0x885;
  puStack_a = (undefined1 *)0x23e5;
  FUN_10ad_161c();
  piStack_4 = (int *)0xcf6;
  piStack_6 = (int *)0x27;
  pcStack_8 = (char *)0x11f2;
  puStack_a = (undefined1 *)0x23f4;
  FUN_10ad_161c();
  piStack_4 = (int *)0x29;
  piStack_6 = (int *)0xd18;
  pcStack_8 = local_e0;
  puStack_a = (undefined1 *)0x11f2;
  uStack_c = 0x2408;
  FUN_21f2_2de0();
  piStack_4 = (int *)0xd;
  piStack_6 = (int *)0xcf6;
  pcStack_8 = local_11c;
  puStack_a = (undefined1 *)0x22b2;
  uStack_c = 0x241d;
  FUN_21f2_2de0();
  uVar3 = 0x22b2;
  if (*(char *)0xcf6 == '\0') {
    local_11c[0] = '\0';
  }
  do {
    piStack_4 = (int *)0x0;
    pcStack_8 = (char *)0x2434;
    piStack_6 = (int *)uVar3;
    func_0x0000daa6();
    piStack_4 = (int *)0x885;
    uVar3 = 0x885;
    piStack_6 = (int *)0x243a;
    func_0x0000c3ca();
    if (param_3 == 0) {
      piStack_4 = (int *)local_172;
      piStack_6 = (int *)0xf;
      pcStack_8 = (char *)0x885;
      uVar4 = 0x11f2;
      puStack_a = (undefined1 *)0x2451;
      iVar2 = FUN_10ad_1568();
      if (iVar2 == 0) {
        local_13e = 0;
      }
      if (local_172[0] != '\0') {
        piStack_4 = (int *)local_172;
        piStack_6 = (int *)0xd18;
        pcStack_8 = (char *)0x11f2;
        uVar4 = 0x22b2;
        puStack_a = (undefined1 *)0x2470;
        func_0x00024c86();
      }
      piStack_4 = (int *)local_1be;
      piStack_6 = (int *)0x10;
      uVar3 = 0x11f2;
      puStack_a = (undefined1 *)0x2480;
      pcStack_8 = (char *)uVar4;
      iVar2 = FUN_10ad_1568();
      if (iVar2 == 0) {
        local_13e = 0;
      }
      if (local_13e != 0) {
        piStack_4 = (int *)local_1be;
        piStack_6 = (int *)0xcf6;
        pcStack_8 = (char *)0x11f2;
        puStack_a = (undefined1 *)0x24a2;
        func_0x00024c86();
        piStack_4 = (int *)0xd18;
        piStack_6 = (int *)0xbf48;
        pcStack_8 = (char *)0x22b2;
        puStack_a = (undefined1 *)0x24b1;
        func_0x00024c86();
        piStack_4 = (int *)0xbf48;
        piStack_6 = (int *)0x22b2;
        pcStack_8 = (char *)0x24bc;
        iVar2 = func_0x00024ce4();
        local_1aa = iVar2 + -1;
        pcStack_8 = (char *)0x22b2;
        if (*(char *)(iVar2 + -0x40b9) == '\\') {
          piStack_6 = (int *)0xbf48;
          pcStack_8 = (char *)0x22b2;
          uVar3 = 0x2a75;
          puStack_a = (undefined1 *)0x24d5;
          piStack_4 = (int *)local_1aa;
          iVar2 = func_0x0002aa38();
          pcStack_8 = (char *)uVar3;
          if (iVar2 != 0) goto LAB_3ab8_795b;
        }
        else {
LAB_3ab8_795b:
          piStack_4 = (int *)0x70d6;
          piStack_6 = (int *)0xbf48;
          uVar3 = 0x22b2;
          puStack_a = (undefined1 *)0x24e8;
          FUN_21f2_2d26();
        }
        piStack_4 = (int *)0xcf6;
        piStack_6 = (int *)0xbf48;
        puStack_a = (undefined1 *)0x24f7;
        pcStack_8 = (char *)uVar3;
        FUN_21f2_2d26();
        piStack_4 = (int *)0x70d8;
        piStack_6 = (int *)0xbf48;
        pcStack_8 = (char *)0x22b2;
        puStack_a = (undefined1 *)0x2506;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_1a6;
        piStack_6 = (int *)0x0;
        pcStack_8 = (char *)0xbf48;
        puStack_a = (undefined1 *)0x22b2;
        uVar3 = 0x22b2;
        uStack_c = 0x2519;
        iVar2 = func_0x000276d7();
        if (iVar2 != 0) {
          piStack_4 = (int *)0x1;
          piStack_6 = (int *)0x2;
          pcStack_8 = (char *)0x2;
          puStack_a = (undefined1 *)0x14;
          uStack_c = 0x568;
          uStack_e = 0x22b2;
          uStack_10 = 0x2536;
          FUN_1000_02b5();
          local_13e = 0;
          local_1be[0] = '\0';
          local_172[0] = '\0';
          *(undefined2 *)0xc22 = 1;
          piStack_4 = (int *)0x1;
          piStack_6 = (int *)0xdef;
          uVar3 = 0x11f2;
          pcStack_8 = (char *)0x2555;
          FUN_10ad_1729();
        }
      }
    }
    piStack_4 = (int *)0xb2fe;
    piStack_6 = (int *)0x90;
    pcStack_8 = local_44;
    uStack_c = 0x2567;
    puStack_a = (undefined1 *)uVar3;
    func_0x0001263c();
    local_17a = *(undefined2 *)0xca6;
    local_178 = *(undefined2 *)0xca8;
    local_130 = *(undefined2 *)0xcaa;
    local_12e = *(undefined2 *)0xcac;
    local_138 = *(undefined2 *)0xcae;
    local_136 = *(undefined2 *)0xcb0;
    *(undefined1 *)0xcf4 = 1;
    piStack_4 = (int *)0x90;
    piStack_6 = (int *)0xbefe;
    pcStack_8 = local_44;
    *(undefined2 *)0xbc0 = 1;
    puStack_a = (undefined1 *)0x1;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
    func_0x0000c3ca();
    *(undefined2 *)0xbc0 = 1;
    uStack_124 = *(undefined2 *)0xcb6;
    *(undefined2 *)0xcb6 = 0;
    *(undefined1 *)0xd14 = 0;
    pcStack_8 = (char *)*(undefined2 *)0xc60;
    piStack_6 = (int *)*(undefined2 *)0xc50;
    piStack_4 = (int *)*(undefined2 *)0xc52;
    uStack_48 = *(undefined2 *)0xc54;
    uStack_46 = *(undefined2 *)0xc56;
    uStack_13c = *(undefined2 *)0xc58;
    uStack_13a = *(undefined2 *)0xc5a;
    iStack_1a8 = *(int *)0xc62;
    uStack_122 = *(undefined2 *)0xc5c;
    uStack_120 = *(undefined2 *)0xc5e;
LAB_3ab8_7a99:
    func_0x0000c3ca();
    if (*(char *)0xb782 == '\0') {
      piStack_4 = (int *)0x262d;
      func_0x00004488();
      piStack_4 = (int *)0x191;
      piStack_6 = (int *)0x1;
      pcStack_8 = (char *)0x3bf;
      puStack_a = (undefined1 *)0x2645;
      func_0x0000a76b();
    }
    *(undefined1 *)0xcf4 = 2;
    uVar3 = 0x22b2;
    func_0x0002504e();
    *(undefined1 *)0xd74 = 2;
    local_140 = 0;
    *(undefined2 *)0xc60 = 0;
    if (param_3 != 0) {
      piStack_4 = (int *)0x22b2;
      uVar3 = 0x11f2;
      piStack_6 = (int *)0x2672;
      FUN_10ad_1568();
    }
    local_174 = 0;
    if ((param_3 == 0) || (param_3 == 2)) {
      pcVar1 = (code *)swi(0x3f);
      iStack_128 = (*pcVar1)();
      if (iStack_128 == 1) {
        local_174 = 1;
      }
      if (iStack_128 == 0x32) {
        pcVar1 = (code *)swi(0x3f);
        iStack_128 = (*pcVar1)();
        local_174 = 0;
      }
      if (iStack_128 == 500) {
        piStack_6 = (int *)0x26ce;
        piStack_4 = (int *)uVar3;
        func_0x00024c86();
        uVar3 = 0x22b2;
        goto LAB_3ab8_7b5f;
      }
    }
    else {
      pcVar1 = (code *)swi(0x3f);
      iStack_128 = (*pcVar1)();
LAB_3ab8_7b5f:
      local_174 = 0;
    }
    if (iStack_128 == 0) {
      local_140 = 1;
      goto LAB_3ab8_7cca;
    }
    piStack_4 = (int *)uVar3;
    if (param_3 == 0) {
      piStack_6 = (int *)0x2702;
      FUN_10ad_161c();
      piStack_4 = (int *)0x11f2;
      piStack_6 = (int *)0x2711;
      FUN_10ad_161c();
LAB_3ab8_7b93:
      if (((param_2 == (undefined1 *)0x0) || ((int)param_2 < 1)) && (9 < *(byte *)0x123)) {
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
        if (*(int *)0xc18 != 0) {
          local_140 = 1;
        }
        *(undefined2 *)0xc18 = 0;
      }
      else {
        piStack_4 = (int *)0x27c7;
        local_140 = FUN_4375_a3ae();
      }
      param_2 = (undefined1 *)*(int *)0xa6ea;
      piStack_4 = (int *)*(undefined2 *)0xa6ea;
      piStack_6 = (int *)*(undefined2 *)0xa6e8;
      pcStack_8 = (char *)*(undefined2 *)0xa6e6;
      puStack_a = (undefined1 *)*(int *)0xa6e4;
      uStack_c = 0;
      uStack_e = 0x11f2;
      uStack_10 = 0x278d;
      FUN_13bf_06d2();
      if (local_140 == 0) {
        if ((local_174 == 1) && (*(int *)0x158 == 0)) {
          *(undefined1 *)0xd74 = 0;
          pcVar1 = (code *)swi(0x3f);
          (*pcVar1)();
          *(undefined1 *)0xd74 = 2;
        }
        goto LAB_3ab8_7bbf;
      }
      if (((*(int *)0xd76 < 1) || (local_140 != -1)) || (param_2 == (undefined1 *)0x0)) {
        if (param_3 == 0) {
          *(undefined2 *)0xd76 = 0;
        }
        if (((local_172[0] != '\0') && (local_1be[0] != '\0')) && (param_3 == 0)) {
          piStack_4 = (int *)0x11f2;
          piStack_6 = (int *)0x27fc;
          FUN_10ad_161c();
          piStack_4 = (int *)0x11f2;
          piStack_6 = (int *)0x280c;
          FUN_10ad_161c();
        }
        local_13e = 0;
        if (*(int *)0x158 != 0) goto LAB_3ab8_7cca;
      }
      *(undefined1 *)0xd14 = 0;
      goto LAB_3ab8_7a99;
    }
    piStack_6 = (int *)0x2735;
    FUN_10ad_161c();
    if (iStack_128 != 500) goto LAB_3ab8_7b93;
LAB_3ab8_7bbf:
    *(undefined2 *)0xd76 = 0;
LAB_3ab8_7cca:
    *(undefined1 *)0xcf4 = 3;
    *(undefined2 *)0xc62 = 0;
    *(undefined1 *)0xd74 = 2;
    *(undefined2 *)0xcb6 = uStack_124;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
    *(undefined1 *)0xd74 = 0;
    *(undefined1 *)0xcf4 = 0;
    *(undefined2 *)0xca6 = local_17a;
    *(undefined2 *)0xca8 = local_178;
    *(undefined2 *)0xcaa = local_130;
    *(undefined2 *)0xcac = local_12e;
    *(undefined2 *)0xcae = local_138;
    *(undefined2 *)0xcb0 = local_136;
    *(undefined2 *)0xc60 = pcStack_8;
    *(undefined2 *)0xc50 = piStack_6;
    *(undefined2 *)0xc52 = piStack_4;
    *(undefined2 *)0xc54 = uStack_48;
    *(undefined2 *)0xc56 = uStack_46;
    *(undefined2 *)0xc58 = uStack_13c;
    *(undefined2 *)0xc5a = uStack_13a;
    *(int *)0xc62 = iStack_1a8;
    *(undefined2 *)0xc5c = uStack_122;
    *(undefined2 *)0xc5e = uStack_120;
    if (iStack_1a8 != 0) {
      func_0x00004624();
    }
    if (*(int *)0xc60 != 0) {
      func_0x0000ac64();
    }
    *(undefined1 *)0xd14 = 2;
    FUN_21f2_38a0();
    *(undefined2 *)0xbc0 = 1;
    piStack_4 = (int *)0x2922;
    FUN_21f2_2de0();
    func_0x00024c86();
    if (local_11c[0] == '\0') {
      *(undefined1 *)0xcf6 = 0;
    }
    if (((*(int *)0x158 != 0) || ((int)local_11c < 1)) || (local_140 != 0)) {
      return;
    }
    if (iStack_128 == 500) {
      func_0x00024c86();
    }
    iStack_12c = FUN_3ab8_5eff();
    FUN_21f2_3454();
    param_2 = local_1a6;
    uVar4 = 0x22b2;
    piStack_4 = (int *)0x29a2;
    iVar2 = func_0x000276d7();
    if (iVar2 == 0) {
      piStack_4 = (int *)0xbf48;
      piStack_6 = (int *)0x22b2;
      uVar4 = 0x22b2;
      pcStack_8 = (char *)0x29b2;
      iVar2 = FUN_21f2_5778();
      if (iVar2 != 0) {
        piStack_4 = (int *)0x830;
        piStack_6 = (int *)0x22b2;
        uVar4 = 0x11f2;
        pcStack_8 = (char *)0x29c0;
        FUN_13bf_0a03();
      }
    }
    local_13e = 0;
    *(undefined2 *)0xbc0 = 1;
    if (iStack_12c != 2) {
      return;
    }
    uVar3 = uVar4;
    if ((*(char *)0x124 != '\0') && (*(char *)0x15b != '\0')) {
      piStack_4 = &local_126;
      piStack_6 = &local_11e;
      pcStack_8 = local_12a;
      puStack_a = local_4a;
      uVar3 = 0x885;
      uStack_e = 0x29fa;
      uStack_c = uVar4;
      func_0x0000dcbd();
      if ((*(int *)0xa58 < local_11e) && (0x3c < local_126)) {
        local_13e = 4;
      }
    }
  } while( true );
}



/* 3ab8:7e9e  FUN_3ab8_7e9e  55 bytes, 1 callers */

undefined2 FUN_3ab8_7e9e(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_d2 [202];
  undefined1 *puStack_8;
  int local_6;
  
  local_6 = 0x2a29;
  FUN_21f2_0ebc();
  local_6 = 1;
  do {
    local_d2[local_6] = 0;
    local_6 = local_6 + 1;
  } while (local_6 < 0xcb);
  local_6 = 0x22b2;
  puStack_8 = (undefined1 *)0x2a46;
  func_0x0000c3ca();
  local_d2[0] = 1;
  local_6 = 0;
  puStack_8 = local_d2;
  pcVar1 = (code *)swi(0x3f);
  uVar2 = (*pcVar1)();
  if (*(int *)0x158 != 0) {
    uVar2 = 0xfff5;
  }
  return uVar2;
}



/* 4000:2a6c  FUN_4000_2a6c  1410 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

void __cdecl16far FUN_4000_2a6c(void)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_116;
  int *local_114;
  int **local_112;
  undefined2 local_110;
  undefined1 local_10e [3];
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  int local_cc;
  int local_ca [50];
  int local_66 [3];
  undefined1 local_60 [6];
  int local_5a;
  int local_58;
  undefined1 local_56 [50];
  int local_24;
  int local_22;
  int local_20;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int *piStack_e;
  int **ppiStack_c;
  int ***pppiStack_a;
  int *local_8;
  int *local_6;
  
  piVar5 = (int *)0x22b2;
  local_6 = (int *)0x2a77;
  FUN_21f2_0ebc();
  if (2 < *(byte *)0x13b) {
    *(undefined1 *)0x13b = 2;
  }
LAB_3ab8_847d:
  do {
    if (*(int *)0x158 != 0) {
      return;
    }
    local_8 = (int *)0x2a96;
    local_6 = piVar5;
    func_0x0000c3ca();
    local_6 = (int *)0x74a;
    local_8 = (int *)0x70dd;
    pppiStack_a = (int ***)local_ca;
    ppiStack_c = (int **)0x885;
    piStack_e = (int *)0x2aa8;
    FUN_21f2_3454();
    local_6 = local_ca;
    local_8 = (int *)0x6;
    pppiStack_a = (int ***)0x22b2;
    ppiStack_c = (int **)0x2ab9;
    FUN_1def_07a4();
    local_6 = (int *)0x70ff;
    local_8 = local_ca;
    pppiStack_a = (int ***)0x1bb4;
    ppiStack_c = (int **)0x2ac9;
    FUN_21f2_2d26();
    if ((char)local_8 == '\0') {
      local_6 = (int *)0x7104;
    }
    else if ((char)local_8 == '\x01') {
      local_6 = (int *)0x710b;
    }
    else {
      local_6 = (int *)0x7112;
    }
    local_8 = local_ca;
    pppiStack_a = (int ***)0x22b2;
    ppiStack_c = (int **)0x2aef;
    FUN_21f2_2d26();
    local_6 = (int *)0x7119;
    local_8 = local_ca;
    pppiStack_a = (int ***)0x22b2;
    ppiStack_c = (int **)0x2aff;
    FUN_21f2_2d26();
    local_6 = (int *)0xa3f;
    local_8 = local_ca;
    pppiStack_a = (int ***)0x22b2;
    ppiStack_c = (int **)0x2b0f;
    FUN_21f2_2d26();
    if (*(byte *)0x123 < 10) {
      local_6 = (int *)0x711c;
    }
    else {
      local_6 = (int *)0x7122;
    }
    local_8 = local_ca;
    pppiStack_a = (int ***)0x22b2;
    ppiStack_c = (int **)0x2b2b;
    FUN_21f2_2d26();
    local_6 = (int *)0xa42;
    local_8 = local_ca;
    pppiStack_a = (int ***)0x22b2;
    ppiStack_c = (int **)0x2b3b;
    FUN_21f2_2d26();
    local_6 = (int *)0x7128;
    local_8 = local_ca;
    pppiStack_a = (int ***)0x22b2;
    uVar6 = 0x22b2;
    ppiStack_c = (int **)0x2b4b;
    FUN_21f2_2d26();
    local_10e[0] = 0;
    local_56[0] = 0;
    if (*(int *)0xc22 == 0) {
      if (*(char *)0x1174 == '\0') {
        piStack_e = (int *)0x712e;
      }
      else {
        piStack_e = (int *)0x7133;
      }
      local_6 = (int *)0xffff;
      local_8 = (int *)0x7;
      pppiStack_a = (int ***)0x2;
      ppiStack_c = (int **)0x19;
      uStack_10 = 0x22b2;
      uStack_12 = 0x2b94;
      FUN_1000_02b5();
      if (*(char *)0x1175 == '\0') {
        ppiStack_c = (int **)0x30;
        piStack_e = (int *)0x7146;
      }
      else {
        local_6 = (int *)0xffff;
        local_8 = (int *)0x7;
        pppiStack_a = (int ***)0x2;
        ppiStack_c = (int **)0x30;
        piStack_e = (int *)0x7138;
        uStack_10 = 0xdef;
        uStack_12 = 0x2bb7;
        FUN_1000_02b5();
        if (*(char *)0x1175 == '\x01') {
          ppiStack_c = (int **)0x32;
          piStack_e = (int *)0x713b;
        }
        else {
          ppiStack_c = (int **)0x32;
          piStack_e = (int *)0x713f;
        }
      }
      local_6 = (int *)0xffff;
      local_8 = (int *)0x7;
      pppiStack_a = (int ***)0x2;
      uStack_10 = 0xdef;
      uVar6 = 0xdef;
      uStack_12 = 0x2c04;
      FUN_1000_02b5();
      if ((*(char *)0x124 != '\0') && ((char)local_8 == '\0')) {
        local_6 = (int *)local_10e;
        local_8 = (int *)0xf;
        pppiStack_a = (int ***)0xdef;
        ppiStack_c = (int **)0x2c25;
        local_24 = FUN_10ad_1568();
        local_6 = (int *)local_56;
        local_8 = (int *)0x10;
        pppiStack_a = (int ***)0x11f2;
        uVar6 = 0x11f2;
        ppiStack_c = (int **)0x2c37;
        local_5a = FUN_10ad_1568();
        if ((local_24 == 0) || (local_5a == 0)) {
          local_10e[0] = 0;
          local_56[0] = 0;
        }
        else {
          local_6 = (int *)local_10e;
          local_8 = (int *)0x11f2;
          pppiStack_a = (int ***)0x2c53;
          iVar4 = func_0x00024ce4();
          local_6 = (int *)(iVar4 + -1);
          pppiStack_a = (int ***)0x22b2;
          if (*(char *)((int)&local_110 + iVar4 + 1) == '\\') {
            local_8 = (int *)local_10e;
            pppiStack_a = (int ***)0x22b2;
            uVar6 = 0x2a75;
            ppiStack_c = (int **)0x2c6d;
            iVar4 = func_0x0002aa38();
            pppiStack_a = (int ***)uVar6;
            if (iVar4 != 0) goto LAB_3ab8_80f3;
          }
          else {
LAB_3ab8_80f3:
            local_6 = (int *)0x714d;
            local_8 = (int *)local_10e;
            uVar6 = 0x22b2;
            ppiStack_c = (int **)0x2c81;
            FUN_21f2_2d26();
          }
          local_6 = (int *)local_56;
          local_8 = (int *)local_10e;
          ppiStack_c = (int **)0x2c91;
          pppiStack_a = (int ***)uVar6;
          FUN_21f2_2d26();
          local_6 = (int *)local_10e;
          local_8 = (int *)0x22b2;
          pppiStack_a = (int ***)0x2c9d;
          uVar3 = func_0x00024ce4();
          if (0x18 < uVar3) {
            local_108 = 0xa5;
            local_109 = 0xa5;
            local_10a = 0xa5;
            local_10b = 0xa5;
            local_107 = 0x5c;
            local_106 = 0;
            local_6 = (int *)local_56;
            local_8 = (int *)local_10e;
            pppiStack_a = (int ***)0x22b2;
            ppiStack_c = (int **)0x2ccd;
            FUN_21f2_2d26();
          }
          local_6 = (int *)0xffff;
          local_8 = (int *)0x7;
          pppiStack_a = (int ***)0x2;
          ppiStack_c = (int **)local_10e;
          piStack_e = (int *)0x22b2;
          uStack_10 = 0x2ce5;
          iVar4 = func_0x00024ce4();
          ppiStack_c = (int **)-(iVar4 + -0x50);
          piStack_e = (int *)local_10e;
          uStack_10 = 0x22b2;
          uVar6 = 0xdef;
          uStack_12 = 0x2cf6;
          FUN_1000_02b5();
        }
      }
    }
    *(undefined2 *)0xc22 = 1;
    if (1 < *(byte *)0x136) {
      *(undefined2 *)0xc1a = 1;
    }
    *(undefined1 *)0xc2e = 1;
    local_6 = local_66;
    local_8 = &local_116;
    pppiStack_a = &local_112;
    ppiStack_c = (int **)local_ca;
    piStack_e = (int *)0x0;
    uStack_12 = 0x2d37;
    uStack_10 = uVar6;
    local_cc = FUN_1def_0904();
    *(undefined2 *)0xc1a = 0;
    *(undefined1 *)0xc2e = 0;
    if (*(int *)0x158 != 0) {
      if (*(char *)0x118 != '\0') {
        return;
      }
      if (*(int *)0x158 == 10) {
        return;
      }
      if (*(int *)0x158 == 10000) {
        return;
      }
      if ((*(int *)0xa62 != 0x1b) && ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) {
        if (*(byte *)0xb782 < 4) {
          return;
        }
        if (*(int *)0xa66 != *(int *)0xa62) {
          return;
        }
      }
      local_cc = 2;
      *(undefined2 *)0x158 = 0;
      local_66[0] = 0;
    }
    local_6 = &local_58;
    local_8 = &local_22;
    pppiStack_a = (int ***)local_60;
    ppiStack_c = &local_6;
    piStack_e = (int *)0x1bb4;
    uStack_10 = 0x2db9;
    func_0x0000dcbd();
    if (*(int *)0xc18 == 500) {
LAB_3ab8_8268:
      piVar5 = (int *)0x885;
      if ((*(int *)0x11f0 < 0x15) && (*(byte *)0x136 < 2)) goto LAB_3ab8_847d;
      local_6 = local_114;
      local_8 = (int *)local_116;
      pppiStack_a = (int ***)local_110;
      ppiStack_c = local_112;
      piStack_e = local_ca;
      pcVar2 = (code *)swi(0x3f);
      iVar4 = (*pcVar2)();
      if (iVar4 != 0) goto LAB_3ab8_847d;
      if (*(int *)0x158 != 0) {
        return;
      }
      local_8 = (int *)0x2;
      local_6 = (int *)0x0;
LAB_3ab8_8470:
      pppiStack_a = (int ***)0x885;
      ppiStack_c = (int **)0x2ff4;
      FUN_3ab8_77d0();
    }
    else {
      if (local_66[0] != 0) {
        if ((local_22 < 9) || (0x10 < local_58)) {
          local_6 = (int *)0x885;
          local_8 = (int *)0x2ddb;
          uVar3 = func_0x0000db57();
          if ((uVar3 & 4) == 0) {
            local_6 = (int *)0x885;
            local_8 = (int *)0x2de4;
            uVar3 = func_0x0000db57();
            if ((uVar3 & 2) == 0) goto LAB_3ab8_82ae;
          }
        }
        goto LAB_3ab8_8268;
      }
LAB_3ab8_82ae:
      piVar5 = (int *)0x885;
      if (*(int *)0xc18 != 0) {
        local_6 = (int *)0x885;
        local_8 = (int *)0x2e3e;
        func_0x000297e6();
        local_6 = (int *)0x22b2;
        local_8 = (int *)0x2e43;
        func_0x00029d78();
        piStack_e = (int *)0x22b2;
        uStack_10 = 0x2e4d;
        func_0x000299d1();
        piStack_e = (int *)0x22b2;
        uStack_10 = 0x2e56;
        func_0x000297e6();
        piStack_e = (int *)0x22b2;
        uStack_10 = 0x2e5b;
        func_0x00029d78();
        uStack_16 = 0x22b2;
        uStack_18 = 0x2e65;
        func_0x000299d1();
        uStack_16 = 0x22b2;
        piVar5 = (int *)0x3bf;
        uStack_18 = 0x2e6a;
        func_0x0000507a();
        goto LAB_3ab8_847d;
      }
      if (local_66[0] == 1) {
        local_cc = 1;
      }
      if (local_66[0] == 2) {
        local_cc = 2;
      }
      if (local_cc == 1) {
        local_6 = (int *)0x0;
        local_8 = (int *)0x885;
        pppiStack_a = (int ***)0x2e96;
        FUN_4375_a3ae();
      }
      if (local_cc == 2) {
        local_6 = (int *)0x0;
        local_8 = (int *)0x885;
        pppiStack_a = (int ***)0x2ea5;
        FUN_3ab8_5eff();
      }
      if ((local_cc == 3) && (*(char *)0x1174 = *(char *)0x1174 + '\x01', 1 < *(byte *)0x1174)) {
        *(undefined1 *)0x1174 = 0;
      }
      if (local_cc == 4) {
        local_6 = (int *)0x0;
        local_8 = (int *)0x885;
        pppiStack_a = (int ***)0x2ecb;
        FUN_4375_7bf8();
      }
      if (local_cc == 5) {
        local_6 = (int *)0x885;
        local_8 = (int *)0x2ed7;
        FUN_3ab8_76b3();
      }
      if ((local_cc == 6) && (*(char *)0x1175 = *(char *)0x1175 + '\x01', 2 < *(byte *)0x1175)) {
        *(undefined1 *)0x1175 = 0;
      }
      if ((local_cc == 7) && (*(char *)0x15b != '\0')) {
        if (8 < *(byte *)0x123) {
          bVar1 = (char)local_8 + 1;
          if (2 < bVar1) {
            bVar1 = 0;
          }
          *(byte *)0x13b = bVar1;
        }
        goto LAB_3ab8_847d;
      }
      if ((*(char *)0x15a == '\0') && (6 < local_cc)) {
        local_cc = local_cc + -1;
      }
      else if (*(char *)0x15a != '\x02') {
        *(undefined1 *)0x15b = 0;
      }
      if (2 < *(byte *)0x13b) {
        *(undefined1 *)0x13b = 2;
      }
      if (((char)local_8 != '\x01') &&
         (((local_cc == 7 || (local_cc == 8)) && (*(char *)0x15b == '\x02')))) {
        local_6 = local_ca;
        local_8 = (int *)0x885;
        pppiStack_a = (int ***)0x2f6c;
        local_20 = FUN_3ab8_7e9e();
        if (*(int *)0x158 != 0) {
          return;
        }
        if (local_20 != -1) {
          if (local_20 != 10) {
            local_6 = (int *)0x0;
            goto LAB_3ab8_846b;
          }
          if (local_cc == 7) {
            local_6 = (int *)0x0;
            local_8 = (int *)0xfffe;
            pppiStack_a = (int ***)0x885;
            ppiStack_c = (int **)0x2f96;
            FUN_3ab8_77d0();
          }
          if (local_cc != 8) goto LAB_3ab8_8476;
          local_6 = (int *)0x0;
          local_8 = (int *)0x2;
          goto LAB_3ab8_8470;
        }
        goto LAB_3ab8_847d;
      }
      if (local_cc == 7) {
        if (((char)local_8 == '\x02') && (9 < *(byte *)0x123)) {
          *(undefined1 *)0x13b = 10;
        }
        local_6 = (int *)((uint)local_8 & 0xff);
        local_8 = (int *)0x0;
        pppiStack_a = (int ***)0x885;
        ppiStack_c = (int **)0x2fd1;
        FUN_3ab8_77d0();
        if (2 < *(byte *)0x13b) {
          *(undefined1 *)0x13b = 2;
        }
      }
      if (local_cc == 8) {
        local_6 = (int *)((uint)local_8 & 0xff);
LAB_3ab8_846b:
        local_8 = (int *)0x1;
        goto LAB_3ab8_8470;
      }
    }
LAB_3ab8_8476:
    piVar5 = (int *)0x885;
    if (*(int *)0x158 != 0) {
      return;
    }
  } while( true );
}


