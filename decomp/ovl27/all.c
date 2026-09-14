/* Ghidra decompilation of jw27.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  107 bytes, 2 callers */

int __cdecl16far FUN_3ab8_0000(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if (param_1 == 0) {
    iVar1 = *(int *)0x1d2 / 100;
  }
  else {
    iVar1 = *(int *)0x1d2 % 100;
  }
  iVar1 = iVar1 % 10;
  if ((param_1 == 0) && ((iVar1 < 1 || (9 < iVar1)))) {
    iVar1 = FUN_3ab8_0000(1);
  }
  if ((iVar1 < 1) || (9 < iVar1)) {
    iVar1 = 1;
  }
  return iVar1;
}



/* 3ab8:006b  FUN_3ab8_006b  77 bytes, 1 callers */

int __cdecl16far FUN_3ab8_006b(int param_1)

{
  undefined2 unaff_DS;
  undefined2 local_4;
  
  FUN_21f2_0ebc();
  if (param_1 == 0) {
    local_4 = *(int *)0x1d2 / 100;
  }
  else {
    local_4 = *(int *)0x1d2 % 100;
  }
  local_4 = local_4 / 10;
  if ((local_4 < 1) || (9 < local_4)) {
    local_4 = 1;
  }
  return local_4;
}



/* 3ab8:00b8  FUN_3ab8_00b8  42 bytes, 0 callers */

void __cdecl16far FUN_3ab8_00b8(undefined2 param_1)

{
  FUN_21f2_0ebc();
  FUN_21f2_3454(0x22b2,param_1,0x5e42);
  FUN_21f2_2d26(0x22b2,param_1,0x2f0);
  return;
}



/* 3ab8:00e2  FUN_3ab8_00e2  56 bytes, 0 callers */

void __cdecl16far FUN_3ab8_00e2(undefined2 param_1)

{
  FUN_21f2_0ebc();
  FUN_21f2_3454(0x22b2,param_1,0x5e52);
  FUN_21f2_2d26(0x22b2,param_1,0x302);
  FUN_21f2_2d26(0x22b2,param_1,0x2f0);
  return;
}



/* 3ab8:011a  FUN_3ab8_011a  787 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_011a(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar6;
  undefined2 local_156;
  undefined2 local_154;
  undefined2 local_152;
  undefined2 local_150;
  undefined2 local_14e;
  undefined2 local_14c;
  undefined2 local_14a;
  undefined2 local_148;
  undefined1 local_142;
  undefined1 local_136 [268];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 uVar7;
  
  FUN_21f2_0ebc();
  uVar7 = 0;
  if (*(int *)0xc18 == -2) {
    FUN_28b3_0cb6();
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xaccd;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xacd5;
    FUN_28b3_0cb6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xacda;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xace4;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xace9;
    iVar3 = func_0x0001b204();
    if (iVar3 == 0) {
      *(undefined2 *)0xc18 = 0;
      uVar7 = 0;
    }
    else if (*(int *)0xc18 == -2) {
      puStack_c = (undefined1 *)0xad09;
      puVar6 = (undefined2 *)func_0x00000398();
      puVar5 = (undefined2 *)puVar6;
      puVar4 = &local_156;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      puStack_c = local_136;
      uStack_e = 0;
      uStack_10 = 0xad2d;
      FUN_1885_0344();
      puVar5 = &uStack_1e;
      puVar4 = &local_156;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar1 = *puVar6;
      }
      uStack_22 = 0x18b3;
      uStack_24 = 0xad48;
      func_0x00019593();
      FUN_28b3_0cb6();
      FUN_28b3_100d();
      func_0x00029b6d();
      func_0x00029bb5();
      FUN_28b3_0e3b();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      FUN_28b3_100d();
      func_0x00029b6d();
      func_0x00029bb5();
      FUN_28b3_0e3b();
      FUN_28b3_0e53();
      local_142 = *(undefined1 *)0x1ce;
      puStack_c = local_136;
      uStack_e = 0x22b2;
      uStack_10 = 0xadce;
      func_0x00018eff();
      FUN_28b3_0cb6();
      func_0x00029b6d();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xae01;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xae0a;
      FUN_28b3_0cb6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xae0f;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xae19;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xae22;
      FUN_28b3_0cb6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xae27;
      func_0x00029d78();
      uStack_22 = 0xae31;
      func_0x000299d1();
      uStack_22 = 0xae3a;
      FUN_28b3_0cb6();
      uStack_22 = 0xae3f;
      func_0x00029d78();
      uStack_28 = 0x22b2;
      uStack_2a = 0xae49;
      func_0x000299d1();
      uStack_28 = 0x22b2;
      uStack_2a = 0xae4e;
      FUN_1def_043a();
      puStack_c = (undefined1 *)*(undefined2 *)0xa47a;
      uStack_e = *(undefined2 *)0xa478;
      uStack_10 = 0x1bb4;
      uStack_12 = 0xae69;
      FUN_28b3_0cb6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xae6e;
      func_0x00029af6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xae73;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xae7c;
      func_0x000299b9();
      uStack_18 = 0x22b2;
      uStack_1a = 0xae86;
      func_0x000299d1();
      uStack_18 = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xae8e;
      puVar4 = (undefined2 *)FUN_1def_05d1();
      local_156 = *puVar4;
      local_154 = puVar4[1];
      puStack_c = (undefined1 *)*(undefined2 *)0xa47a;
      uStack_e = *(undefined2 *)0xa478;
      uStack_10 = 0x1bb4;
      uStack_12 = 0xaeb9;
      func_0x00029834();
      uStack_18 = 0x22b2;
      uStack_1a = 0xaec3;
      func_0x000299d1();
      uStack_18 = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xaecb;
      puVar4 = (undefined2 *)func_0x0001e558();
      local_152 = *puVar4;
      local_150 = puVar4[1];
      puStack_c = (undefined1 *)*(undefined2 *)0xa47a;
      uStack_e = *(undefined2 *)0xa478;
      uStack_10 = 0x1bb4;
      uStack_12 = 0xaef5;
      FUN_28b3_0cb6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xaefa;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xaf04;
      func_0x000299d1();
      uStack_18 = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xaf0c;
      puVar4 = (undefined2 *)FUN_1def_05d1();
      local_14e = *puVar4;
      local_14c = puVar4[1];
      puStack_c = (undefined1 *)*(undefined2 *)0xa47a;
      uStack_e = *(undefined2 *)0xa478;
      uStack_10 = 0x1bb4;
      uStack_12 = 0xaf36;
      FUN_28b3_0cb6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xaf3b;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xaf45;
      func_0x000299d1();
      uStack_18 = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xaf4d;
      puVar4 = (undefined2 *)func_0x0001e558();
      local_14a = *puVar4;
      local_148 = puVar4[1];
      puVar5 = &uStack_1e;
      puVar4 = &local_156;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar1 = *puVar6;
      }
      uStack_22 = 0x1bb4;
      uStack_24 = 0xaf78;
      func_0x00019593();
      puStack_c = (undefined1 *)0xaf83;
      puVar6 = (undefined2 *)func_0x00000398();
      puVar5 = (undefined2 *)puVar6;
      puVar4 = &local_156;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      uVar7 = 1;
      *(undefined2 *)0xc18 = 0;
    }
  }
  return uVar7;
}



/* 3ab8:042d  FUN_3ab8_042d  208 bytes, 1 callers */

void __cdecl16far FUN_3ab8_042d(int param_1,int param_2)

{
  undefined2 unaff_DS;
  int local_70;
  byte local_6e;
  char local_6d;
  undefined1 local_6c;
  byte local_68;
  undefined1 local_66 [90];
  undefined2 uStack_c;
  undefined2 uStack_a;
  byte *pbStack_8;
  byte *pbStack_6;
  
  pbStack_6 = (byte *)0xafb8;
  FUN_21f2_0ebc();
  local_66[0] = 0;
  for (local_70 = 0; local_70 <= param_2; local_70 = local_70 + 1) {
    local_68 = *(byte *)(param_1 + local_70);
    local_6d = '\0';
    local_6e = local_68;
    if ((0x2f < local_68) && (local_68 < 0x3a)) {
      local_6e = 0x82;
      local_6d = local_68 + 0x1f;
      local_6c = 0;
    }
    if (local_68 == 0x52) {
      pbStack_6 = (byte *)0x5e62;
      pbStack_8 = &local_6e;
      uStack_a = 0x22b2;
      uStack_c = 0xaffe;
      FUN_21f2_3454();
    }
    if (local_68 == 0x6d) {
      pbStack_6 = (byte *)0x5e65;
      pbStack_8 = &local_6e;
      uStack_a = 0x22b2;
      uStack_c = 0xb013;
      FUN_21f2_3454();
    }
    if ((local_68 == 0x2e) && (1 < *(byte *)0x1131)) {
      pbStack_6 = (byte *)0x5e68;
      pbStack_8 = &local_6e;
      uStack_a = 0x22b2;
      uStack_c = 0xb02f;
      FUN_21f2_3454();
    }
    if ((local_68 == 0x2c) && (2 < *(byte *)0x1131)) {
      pbStack_6 = (byte *)0x5e6b;
      pbStack_8 = &local_6e;
      uStack_a = 0x22b2;
      uStack_c = 0xb04b;
      FUN_21f2_3454();
    }
    pbStack_6 = &local_6e;
    pbStack_8 = local_66;
    uStack_a = 0x22b2;
    uStack_c = 0xb05a;
    FUN_21f2_2d26();
  }
  pbStack_6 = local_66;
  pbStack_8 = (byte *)param_1;
  uStack_a = 0x22b2;
  uStack_c = 0xb076;
  FUN_21f2_3454();
  return;
}



/* 3ab8:04fd  FUN_3ab8_04fd  280 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_04fd(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  uVar1 = 0x22b2;
  FUN_21f2_0ebc();
  if (*(char *)0xb782 == '\0') {
    do {
      iVar4 = -1;
      func_0x0000def0(uVar1,1,0xffff,*(int *)0xa58 + -1,0xffff,4);
      uVar1 = 0xdef;
    } while (iVar4 + 1 < 0x30);
    *(undefined2 *)0xc22 = 1;
    FUN_21f2_3454(0xdef,0xbf48,0x5e6e,*(undefined2 *)(*(int *)0x1ce * 2 + 0x16c),
                  *(undefined2 *)0x150);
    uVar2 = 2;
    uVar1 = 1;
    FUN_1000_02b5(0xbf48,1,2,0,0);
    FUN_28b3_0d8b(0xdef);
    uVar3 = 0xb115;
    func_0x00029c2c(0x22b2);
    func_0x000299d1(0x22b2,uVar1,uVar2,uVar3);
    FUN_21f2_3454(0x22b2,0xbf48,0x5e7e);
    uVar2 = 3;
    uVar1 = 1;
    FUN_1000_02b5(0xbf48,1,3,0,0);
    FUN_28b3_0d8b(0xdef);
    uVar3 = 0xb15f;
    func_0x00029c2c(0x22b2);
    func_0x000299d1(0x22b2,uVar1,uVar2,uVar3);
    FUN_21f2_3454(0x22b2,0xbf48,0x5e88);
    FUN_1000_02b5(0xbf48,9,3,0,0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* 3ab8:0615  FUN_3ab8_0615  777 bytes, 0 callers */

int __cdecl16far FUN_3ab8_0615(undefined2 param_1,undefined2 param_2)

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
  undefined1 local_5c [20];
  undefined1 local_48 [8];
  undefined1 local_40 [4];
  int local_3c;
  undefined2 local_3a [3];
  undefined2 uStack_34;
  undefined2 auStack_30 [2];
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined1 auStack_28 [4];
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined1 *puStack_10;
  undefined1 *puStack_e;
  
  FUN_21f2_0ebc();
  local_3c = 0;
  func_0x0000daa6();
  puStack_e = local_5c;
  puStack_10 = (undefined1 *)param_2;
  local_12 = param_1;
  uStack_14 = 0x885;
  uStack_16 = 0xb1c9;
  FUN_20a9_0ca3();
  puStack_e = (undefined1 *)0x1bb4;
  puStack_10 = (undefined1 *)0xb1d7;
  puVar8 = (undefined2 *)func_0x00000271();
  puVar4 = (undefined2 *)puVar8;
  puVar5 = local_3a;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  func_0x00029834();
  FUN_28b3_0e53();
  func_0x00029834();
  FUN_28b3_0e53();
  puStack_e = local_48;
  puStack_10 = local_40;
  puVar4 = auStack_30;
  puVar5 = local_3a;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = *puVar8;
  }
  uStack_34 = 0xb22d;
  func_0x000210f8();
  FUN_28b3_0cb6();
  func_0x00029d78();
  local_12 = 0x22b2;
  uStack_14 = 0xb247;
  func_0x000299d1();
  local_12 = 0x22b2;
  uStack_14 = 0xb24f;
  FUN_28b3_0cb6();
  local_12 = 0x22b2;
  uStack_14 = 0xb254;
  func_0x00029d78();
  local_1a = 0x22b2;
  uStack_1c = 0xb25e;
  func_0x000299d1();
  local_1a = 0x22b2;
  uStack_1c = 0xb266;
  FUN_28b3_0cb6();
  local_1a = 0x22b2;
  uStack_1c = 0xb26b;
  func_0x00029d78();
  uStack_22 = 0x22b2;
  uStack_24 = 0xb275;
  func_0x000299d1();
  uStack_22 = 0x22b2;
  uStack_24 = 0xb27d;
  FUN_28b3_0cb6();
  uStack_22 = 0x22b2;
  uStack_24 = 0xb282;
  func_0x00029d78();
  uStack_2a = 0x22b2;
  uStack_2c = 0xb28c;
  func_0x000299d1();
  uStack_2a = 0x22b2;
  uStack_2c = 0xb291;
  FUN_1def_043a();
  uVar6 = (undefined1 *)0xffdf < auStack_28;
  FUN_28b3_0cb6();
  FUN_28b3_0cb6();
  FUN_28b3_100d();
  FUN_28b3_0cb6();
  FUN_28b3_100d();
  func_0x00029c9d();
  FUN_28b3_0cb6();
  FUN_28b3_100d();
  FUN_28b3_0cb6();
  FUN_28b3_100d();
  func_0x00029c9d();
  FUN_28b3_1163();
  FUN_28b3_1181();
  if ((bool)uVar6) {
    FUN_28b3_0cb6();
    func_0x00029af6();
    FUN_28b3_0e53();
    FUN_28b3_0cb6();
    func_0x00029af6();
    FUN_28b3_0e53();
  }
  puStack_e = (undefined1 *)*(undefined2 *)0xa492;
  puStack_10 = (undefined1 *)*(undefined2 *)0xa490;
  local_12 = *(undefined2 *)0xa48e;
  uStack_14 = *(undefined2 *)0xa48c;
  uStack_16 = 0x22b2;
  uStack_18 = 0xb339;
  iVar3 = FUN_2bb4_4af5();
  local_3c = local_3c + iVar3;
  func_0x00029834();
  FUN_28b3_0e53();
  func_0x00029834();
  FUN_28b3_0e53();
  puStack_e = local_48;
  puStack_10 = local_40;
  puVar4 = auStack_30;
  puVar5 = local_3a;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = *puVar8;
  }
  uStack_34 = 0xb383;
  func_0x000210f8();
  FUN_28b3_0cb6();
  func_0x00029d78();
  local_12 = 0x22b2;
  uStack_14 = 0xb39d;
  func_0x000299d1();
  local_12 = 0x22b2;
  uStack_14 = 0xb3a5;
  FUN_28b3_0cb6();
  local_12 = 0x22b2;
  uStack_14 = 0xb3aa;
  func_0x00029d78();
  local_1a = 0x22b2;
  uStack_1c = 0xb3b4;
  func_0x000299d1();
  local_1a = 0x22b2;
  uStack_1c = 0xb3bc;
  FUN_28b3_0cb6();
  local_1a = 0x22b2;
  uStack_1c = 0xb3c1;
  func_0x00029d78();
  uStack_22 = 0x22b2;
  uStack_24 = 0xb3cb;
  func_0x000299d1();
  uStack_22 = 0x22b2;
  uStack_24 = 0xb3d3;
  FUN_28b3_0cb6();
  uStack_22 = 0x22b2;
  uStack_24 = 0xb3d8;
  func_0x00029d78();
  uStack_2a = 0x22b2;
  uStack_2c = 0xb3e2;
  func_0x000299d1();
  uStack_2a = 0x22b2;
  uStack_2c = 0xb3e7;
  FUN_1def_043a();
  uVar6 = (undefined1 *)0xffdf < auStack_28;
  uVar7 = &stack0x0000 == (undefined1 *)0x8;
  FUN_28b3_0cb6();
  FUN_28b3_0cb6();
  FUN_28b3_100d();
  FUN_28b3_0cb6();
  FUN_28b3_100d();
  func_0x00029c9d();
  FUN_28b3_0cb6();
  FUN_28b3_100d();
  FUN_28b3_0cb6();
  FUN_28b3_100d();
  func_0x00029c9d();
  FUN_28b3_1163();
  FUN_28b3_1181();
  if (!(bool)uVar6 && !(bool)uVar7) {
    FUN_28b3_0cb6();
    func_0x00029af6();
    FUN_28b3_0e53();
    FUN_28b3_0cb6();
    func_0x00029af6();
    FUN_28b3_0e53();
  }
  puStack_e = (undefined1 *)*(undefined2 *)0xa492;
  puStack_10 = (undefined1 *)*(undefined2 *)0xa490;
  local_12 = *(undefined2 *)0xa48e;
  uStack_14 = *(undefined2 *)0xa48c;
  uStack_16 = 0x22b2;
  uStack_18 = 0xb48f;
  iVar3 = FUN_2bb4_4af5();
  return local_3c + iVar3;
}



/* 3ab8:091e  FUN_3ab8_091e  299 bytes, 0 callers */

void __cdecl16far FUN_3ab8_091e(undefined2 ***param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 local_e;
  undefined2 **local_c;
  undefined2 **local_a;
  undefined2 **local_8;
  undefined2 **local_6;
  undefined2 ***local_4;
  
  local_4 = (undefined2 ***)0x3ab8;
  uVar2 = 0x22b2;
  local_6 = (undefined2 **)0xb4a9;
  FUN_21f2_0ebc();
  do {
    do {
      while( true ) {
        while( true ) {
          local_4 = (undefined2 ***)0x5e91;
          local_6 = param_1;
          local_a = (undefined2 **)0xb4b5;
          local_8 = (undefined2 **)uVar2;
          FUN_21f2_3454();
          local_4 = param_1;
          local_6 = (undefined2 **)0x3;
          local_8 = (undefined2 **)0x22b2;
          local_a = (undefined2 **)0xb4c3;
          FUN_1def_07a4();
          *(undefined2 *)0xc1a = 1;
          if (*(int *)0xce6 != 0) {
            *(undefined2 *)0xc1a = 0;
          }
          local_4 = &local_4;
          local_6 = (undefined2 **)&local_e;
          local_8 = &local_a;
          local_a = param_1;
          local_c = (undefined2 ***)0x1;
          local_e = 0x1bb4;
          uVar2 = 0x1bb4;
          local_6 = (undefined2 **)FUN_1def_0904();
          *(undefined2 *)0xc1a = 0;
          if (*(int *)0x158 != 0) {
            return;
          }
          if (local_6 == (undefined2 **)0xffff) {
            return;
          }
          if ((*(int *)0xc18 != -2) || (*(byte *)0x126 < 3)) break;
          local_4 = (undefined2 ***)local_c;
          local_6 = (undefined2 **)local_e;
          local_c = (undefined2 ***)0x1bb4;
          local_e = 0xb52c;
          FUN_3ab8_011a();
        }
        if (*(int *)0xc18 == 0) break;
        local_4 = (undefined2 ***)0x1bb4;
        local_6 = (undefined2 **)0xb541;
        FUN_28b3_0cb6();
        local_4 = (undefined2 ***)0x22b2;
        local_6 = (undefined2 **)0xb546;
        func_0x00029d78();
        local_c = (undefined2 **)0x22b2;
        local_e = 0xb550;
        func_0x000299d1();
        local_c = (undefined2 **)0x22b2;
        local_e = 0xb558;
        FUN_28b3_0cb6();
        local_c = (undefined2 ***)0x22b2;
        local_e = 0xb55d;
        func_0x00029d78();
        func_0x000299d1(0x22b2);
        uVar2 = 0x3bf;
        func_0x0000507a(0x22b2);
      }
      if ((undefined2 ****)local_4 == (undefined2 ****)0x1) {
        local_6 = (undefined2 **)0x1;
      }
      if ((undefined2 ****)local_4 == (undefined2 ****)0x2) {
        local_6 = (undefined2 **)0x2;
      }
    } while (((int)local_6 < 1) || (3 < (int)local_6));
    local_4 = (undefined2 ***)0x1bb4;
    uVar2 = 0x885;
    local_6 = (undefined2 **)0xb59c;
    func_0x0000c3ca();
    if (local_6 == (undefined2 **)0x1) {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
      if (*(int *)0x158 != 0) {
        return;
      }
    }
    if (local_6 == (undefined2 **)0x2) {
      local_4 = (undefined2 ***)0x0;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
      if (*(int *)0x158 != 0) {
        return;
      }
    }
    if (local_6 == (undefined2 **)0x3) {
      local_4 = (undefined2 ***)0x1;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
      if (*(int *)0x158 != 0) {
        return;
      }
    }
  } while (*(int *)0xce6 == 0);
  return;
}



/* 3ab8:0a69  FUN_3ab8_0a69  849 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0a69(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar8;
  undefined2 in_stack_0000000e;
  int in_stack_00000010;
  undefined2 local_8c;
  char local_6e;
  char local_6d;
  undefined2 uStack_22;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  char *pcStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  char *pcStack_c;
  char *local_a;
  char *pcStack_8;
  
  FUN_21f2_0ebc();
  pcStack_8 = (char *)0x22b2;
  local_a = (char *)0xb5ff;
  FUN_28b3_0cb6();
  pcStack_8 = (char *)0x22b2;
  local_a = (char *)0xb608;
  func_0x00029b6d();
  pcStack_8 = (char *)0x22b2;
  local_a = (char *)0xb60d;
  func_0x00029d78();
  pcStack_8 = (char *)0x22b2;
  local_a = (char *)0xb615;
  func_0x00029834();
  pcStack_8 = (char *)0x22b2;
  local_a = (char *)0xb61a;
  func_0x00029ae7();
  pcStack_8 = (char *)0x22b2;
  local_a = (char *)0xb61f;
  func_0x00029c9d();
  pcStack_8 = (char *)0x22b2;
  local_a = (char *)0xb628;
  func_0x000299b9();
  pcStack_8 = (char *)0x22b2;
  local_a = (char *)0xb630;
  FUN_28b3_0ee9();
  if (*(int *)0x112e != 0) {
    pcStack_8 = (char *)0x22b2;
    local_a = (char *)0xb640;
    func_0x00029834();
    pcStack_8 = (char *)0x22b2;
    local_a = (char *)0xb649;
    func_0x00029c2c();
    pcStack_8 = (char *)0x22b2;
    local_a = (char *)0xb652;
    func_0x000299d1();
  }
  pcStack_8 = (char *)0x0;
  local_a = (char *)in_stack_0000000e;
  uStack_e = local_8c;
  pcStack_14 = &local_6e;
  uStack_16 = 0x22b2;
  uVar6 = 0x1bb4;
  uStack_18 = 0xb671;
  iVar3 = func_0x0002267f();
  if (iVar3 == 0) {
    pcStack_8 = (char *)0x5eab;
    local_a = &local_6e;
    pcStack_c = (char *)0x1bb4;
    uVar6 = 0x22b2;
    uStack_e = 0xb685;
    FUN_21f2_3454();
  }
  uVar7 = uVar6;
  if (1 < *(int *)0x112e) {
    pcStack_8 = (char *)0x5eae;
    local_a = &local_6e;
    uVar7 = 0x22b2;
    uStack_e = 0xb69b;
    pcStack_c = (char *)uVar6;
    FUN_21f2_2d26();
  }
  pcStack_8 = &local_6e;
  pcStack_c = (char *)0xb6a6;
  local_a = (char *)uVar7;
  iVar3 = func_0x00024ce4();
  if ((iVar3 == 0) || ((local_6e == '0' && (local_6d == '\0')))) {
    uVar6 = 0;
  }
  else {
    pcStack_8 = &local_6e;
    local_a = (char *)param_1;
    pcStack_c = (char *)0x22b2;
    uStack_e = 0xb6cc;
    FUN_21f2_3454();
    if (*(char *)0x1131 != '\0') {
      local_a = (char *)param_1;
      pcStack_c = (char *)0x22b2;
      uStack_e = 0xb6e0;
      pcStack_8 = (char *)iVar3;
      FUN_3ab8_042d();
      pcStack_8 = (char *)param_1;
      local_a = &local_6e;
      pcStack_c = (char *)0x22b2;
      uStack_e = 0xb6ee;
      FUN_21f2_3454();
    }
    pcStack_8 = (char *)*(undefined2 *)0x1ce;
    local_a = (char *)0x0;
    pcStack_c = &local_6e;
    uStack_e = 0x22b2;
    uStack_10 = 0xb700;
    func_0x00018eff();
    pcStack_8 = (char *)0x18b3;
    local_a = (char *)0xb719;
    FUN_28b3_0cb6();
    pcStack_8 = (char *)0x22b2;
    local_a = (char *)0xb722;
    func_0x00029bb5();
    pcStack_8 = (char *)0x22b2;
    local_a = (char *)0xb72b;
    func_0x00029b85();
    pcStack_8 = (char *)0x22b2;
    local_a = (char *)0xb733;
    FUN_28b3_0e3b();
    pcStack_8 = (char *)0x22b2;
    local_a = (char *)0xb73b;
    FUN_28b3_0ee9();
    if (in_stack_00000010 == 0) {
      pcStack_8 = (char *)0x22b2;
      local_a = (char *)0xb76c;
      FUN_28b3_0cb6();
      pcStack_8 = (char *)0x22b2;
      local_a = (char *)0xb771;
      func_0x00029af6();
      pcStack_8 = (char *)0x22b2;
      local_a = (char *)0xb77a;
      FUN_28b3_0e53();
      pcStack_8 = (char *)0x22b2;
      local_a = (char *)0xb782;
      FUN_28b3_0cb6();
      pcStack_8 = (char *)0x22b2;
      local_a = (char *)0xb78a;
      func_0x00029bb5();
      pcStack_8 = (char *)0x22b2;
      local_a = (char *)0xb78f;
      func_0x00029af6();
    }
    else {
      pcStack_8 = (char *)0x22b2;
      local_a = (char *)0xb749;
      FUN_28b3_0cb6();
      pcStack_8 = (char *)0x22b2;
      local_a = (char *)0xb751;
      func_0x00029bb5();
      pcStack_8 = (char *)0x22b2;
      local_a = (char *)0xb75a;
      FUN_28b3_0e53();
      pcStack_8 = (char *)0x22b2;
      local_a = (char *)0xb762;
      FUN_28b3_0cb6();
    }
    pcStack_8 = (char *)0x22b2;
    local_a = (char *)0xb798;
    FUN_28b3_0e53();
    pcStack_8 = (char *)0x22b2;
    local_a = (char *)0xb7a1;
    FUN_28b3_0cb6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb7ab;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb7ba;
    FUN_28b3_0d8b();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb7bf;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb7c8;
    func_0x00029b85();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb7d1;
    func_0x00029c2c();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb7da;
    FUN_28b3_0e3b();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb7df;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xb7e9;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xb7f1;
    puVar4 = (undefined2 *)FUN_1def_05d1();
    uVar6 = puVar4[1];
    *(undefined2 *)0xc3a0 = *puVar4;
    *(undefined2 *)0xc3a2 = uVar6;
    pcStack_8 = (char *)0x1bb4;
    local_a = (char *)0xb80b;
    FUN_28b3_0cb6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb815;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb81e;
    FUN_28b3_0cb6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xb828;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xb830;
    puVar4 = (undefined2 *)func_0x0001e558();
    uVar6 = puVar4[1];
    *(undefined2 *)0xc3a4 = *puVar4;
    *(undefined2 *)0xc3a6 = uVar6;
    pcStack_8 = (char *)0x1bb4;
    local_a = (char *)0xb84a;
    FUN_28b3_0cb6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb854;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb85d;
    FUN_28b3_0cb6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xb867;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xb86f;
    puVar4 = (undefined2 *)FUN_1def_05d1();
    uVar6 = puVar4[1];
    *(undefined2 *)0xc3a8 = *puVar4;
    *(undefined2 *)0xc3aa = uVar6;
    pcStack_8 = (char *)0x1bb4;
    local_a = (char *)0xb889;
    FUN_28b3_0cb6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb893;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xb89c;
    FUN_28b3_0cb6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xb8a6;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xb8ae;
    puVar4 = (undefined2 *)func_0x0001e558();
    uVar6 = puVar4[1];
    *(undefined2 *)0xc3ac = *puVar4;
    *(undefined2 *)0xc3ae = uVar6;
    *(undefined1 *)0xc3b4 = *(undefined1 *)0x1ce;
    *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
    uVar6 = *(undefined2 *)0xbc78;
    *(int *)0xc3b0 = (int)&local_6e;
    *(undefined2 *)0xc3b2 = uVar6;
    *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
    pcStack_8 = (char *)0x0;
    local_a = (char *)0x1bb4;
    pcStack_c = (char *)0xb8e5;
    func_0x0000daa6();
    puVar5 = &uStack_1e;
    puVar4 = (undefined2 *)0xc3a0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    uStack_22 = 0xb8fa;
    FUN_1885_2948();
    pcStack_8 = (char *)*(undefined2 *)0x150;
    local_a = (char *)0x18b3;
    pcStack_c = (char *)0xb906;
    uVar8 = func_0x00000398();
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar3 = (int)uVar8;
    *(byte *)(iVar3 + 0x16) = *(byte *)(iVar3 + 0x16) | 0x10;
    *(byte *)(iVar3 + 0x17) = *(byte *)(iVar3 + 0x17) & 0xfe;
    *(byte *)(iVar3 + 0x17) = *(byte *)(iVar3 + 0x17) & 0xfd;
    *(byte *)(iVar3 + 0x17) = *(byte *)(iVar3 + 0x17) & 0xfb;
    *(byte *)(iVar3 + 0x17) = *(byte *)(iVar3 + 0x17) | 0x40;
    pcStack_8 = (char *)0x0;
    local_a = (char *)0xb931;
    func_0x0000abfa();
    uVar6 = 1;
  }
  return uVar6;
}



/* 3ab8:0dba  FUN_3ab8_0dba  2757 bytes, 0 callers */

int __cdecl16far
FUN_3ab8_0dba(undefined2 param_1,int param_2,int param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,
             undefined2 param_10,undefined2 param_11,undefined2 param_12,undefined2 param_13,
             undefined2 param_14,undefined2 param_15,undefined2 param_16,undefined2 param_17,
             undefined2 param_18,undefined2 param_19,undefined2 param_20,undefined2 param_21,
             undefined2 param_22,undefined2 param_23,undefined2 param_24,undefined2 param_25,
             undefined2 param_26,undefined2 param_27,undefined2 param_28,undefined2 param_29,
             int *param_30,int *param_31,int *param_32,int *param_33,int *param_34)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  uint local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
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
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xb950;
  FUN_28b3_0cb6();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xb959;
  func_0x00029b85();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xb961;
  FUN_28b3_0e53();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xb966;
  FUN_1885_2ec3();
  puStack_8 = (undefined2 *)0x1b6e;
  uStack_a = 0xb96e;
  func_0x00029834();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xb977;
  FUN_28b3_0e53();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xb97f;
  func_0x00029834();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xb988;
  FUN_28b3_0e53();
  puStack_8 = (undefined2 *)param_19;
  uStack_a = param_18;
  uStack_c = param_17;
  uStack_e = param_16;
  uStack_10 = param_15;
  uStack_12 = param_14;
  uStack_14 = param_13;
  uStack_16 = param_12;
  uStack_18 = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0xb9a9;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  local_7a = *puVar4;
  local_78 = puVar4[1];
  puStack_8 = (undefined2 *)param_29;
  uStack_a = param_28;
  uStack_c = param_27;
  uStack_e = param_26;
  uStack_10 = param_25;
  uStack_12 = param_24;
  uStack_14 = param_23;
  uStack_16 = param_22;
  uStack_18 = 1;
  uStack_1a = 0x1bb4;
  uStack_1c = 0xb9da;
  func_0x0001e558();
  puStack_8 = (undefined2 *)0x1bb4;
  uStack_a = 0xb9e4;
  FUN_28b3_0cb6();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xb9ed;
  FUN_28b3_0e3b();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xb9f2;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xb9fc;
  func_0x000299d1();
  uStack_10 = *(undefined2 *)0xa47e;
  uStack_12 = *(undefined2 *)0xa47c;
  uStack_14 = *(undefined2 *)0xa47a;
  uStack_16 = *(undefined2 *)0xa478;
  uStack_18 = 0;
  uStack_1a = 0x22b2;
  uStack_1c = 0xba14;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  local_4a = *puVar4;
  local_48 = puVar4[1];
  puStack_8 = (undefined2 *)0x1bb4;
  uStack_a = 0xba2d;
  FUN_28b3_0cb6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xba37;
  func_0x000299d1();
  uStack_10 = *(undefined2 *)0xa47e;
  uStack_12 = *(undefined2 *)0xa47c;
  uStack_14 = *(undefined2 *)0xa47a;
  uStack_16 = *(undefined2 *)0xa478;
  uStack_18 = 0;
  uStack_1a = 0x22b2;
  uStack_1c = 0xba4f;
  puVar4 = (undefined2 *)func_0x0001e558();
  local_5a = *puVar4;
  local_58 = puVar4[1];
  puStack_8 = (undefined2 *)0x1bb4;
  uStack_a = 0xba68;
  FUN_28b3_0cb6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xba72;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xba7a;
  FUN_28b3_0cb6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xba84;
  func_0x000299d1();
  uStack_18 = 0;
  uStack_1a = 0x22b2;
  uStack_1c = 0xba8c;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  local_56 = *puVar4;
  local_54 = puVar4[1];
  puStack_8 = (undefined2 *)0x1bb4;
  uStack_a = 0xbaa5;
  FUN_28b3_0cb6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xbaaf;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xbab7;
  FUN_28b3_0cb6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xbac1;
  func_0x000299d1();
  uStack_18 = 0;
  uStack_1a = 0x22b2;
  uStack_1c = 0xbac9;
  puVar4 = (undefined2 *)func_0x0001e558();
  local_76 = *puVar4;
  local_74 = puVar4[1];
  local_38 = local_4a;
  local_36 = local_48;
  local_34 = local_5a;
  local_32 = local_58;
  local_30 = local_56;
  local_2e = local_54;
  puStack_8 = (undefined2 *)0x1;
  uStack_a = 0x1bb4;
  uStack_c = 0xbb11;
  local_2c = local_76;
  local_2a = local_74;
  FUN_3ab8_0000();
  puStack_8 = (undefined2 *)0x1;
  uStack_a = 0x1bb4;
  uStack_c = 0xbb1d;
  FUN_3ab8_006b();
  local_26 = CONCAT11(local_26._1_1_,*(undefined1 *)0xb310);
  local_46 = 0;
  puStack_8 = (undefined2 *)0x0;
  uStack_a = 0x1bb4;
  uStack_c = 0xbb32;
  func_0x0000daa6();
  puVar6 = &uStack_1c;
  puVar4 = &local_38;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar3 = *puVar2;
  }
  uVar7 = 0x11f2;
  uStack_20 = 0xbb47;
  iVar5 = FUN_17a6_0cba();
  if (0 < iVar5) {
    *param_30 = *param_30 + 1;
    puStack_8 = (undefined2 *)*(undefined2 *)0x14a;
    uStack_a = *(undefined2 *)0x148;
    uStack_c = 0x11f2;
    uVar7 = 0;
    uStack_e = 0xbb60;
    uVar9 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar9 + 0x15);
    *pbVar1 = *pbVar1 | 0x20;
  }
  *(undefined2 *)0xb30c = local_4a;
  *(undefined2 *)0xb30e = local_48;
  *(undefined2 *)0xb37e = local_5a;
  *(undefined2 *)0xb380 = local_58;
  if (*(byte *)0x114a < 2) {
    uStack_a = 0xbb94;
    puStack_8 = (undefined2 *)uVar7;
    FUN_28b3_0cb6();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbb99;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbba3;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbbab;
    FUN_28b3_0cb6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbbb0;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbbba;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    uVar7 = 0x1bb4;
    uStack_1c = 0xbbc3;
    puVar4 = (undefined2 *)func_0x0001e558();
    uVar8 = (undefined1 *)0xffed < &uStack_18;
    local_4e = *puVar4;
    local_4c = puVar4[1];
    local_9a = *(undefined2 *)0xa488;
    local_98 = *(undefined2 *)0xa48a;
    local_40 = local_4e;
    local_3e = local_4c;
  }
  else {
    puStack_8 = (undefined2 *)param_11;
    uStack_a = param_10;
    uStack_c = param_9;
    uStack_e = param_8;
    uStack_10 = param_7;
    uStack_12 = param_6;
    uStack_14 = param_5;
    uStack_16 = param_4;
    uStack_18 = 1;
    uStack_1c = 0xbc0c;
    uStack_1a = uVar7;
    puVar4 = (undefined2 *)func_0x0001e558();
    local_40 = *puVar4;
    local_3e = puVar4[1];
    puStack_8 = (undefined2 *)param_19;
    uStack_a = param_18;
    uStack_c = param_17;
    uStack_e = param_16;
    uStack_10 = param_15;
    uStack_12 = param_14;
    uStack_14 = param_13;
    uStack_16 = param_12;
    uStack_18 = 1;
    uStack_1a = 0x1bb4;
    uStack_1c = 0xbc3d;
    puVar4 = (undefined2 *)func_0x0001e558();
    local_4e = *puVar4;
    local_4c = puVar4[1];
    local_a6 = (uint)*(byte *)0x114b;
    uVar8 = 0;
    local_a0 = 0;
    local_a2 = 0;
    local_a4 = 0;
    puStack_8 = (undefined2 *)0x1bb4;
    uStack_a = 0xbc6d;
    func_0x00029da5();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbc76;
    func_0x00029b85();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbc7f;
    func_0x00029b6d();
    puStack_8 = (undefined2 *)0x22b2;
    uVar7 = 0x22b2;
    uStack_a = 0xbc88;
    FUN_28b3_0e53();
  }
  uStack_a = 0xbc91;
  puStack_8 = (undefined2 *)uVar7;
  FUN_28b3_0cb6();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xbc99;
  FUN_28b3_0cb6();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xbc9e;
  FUN_28b3_1181();
  if ((bool)uVar8) {
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbca9;
    FUN_28b3_0cb6();
    puStack_8 = &local_40;
    uStack_a = 0x22b2;
    uStack_c = 0xbcb2;
    func_0x00029bb5();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbcb8;
    FUN_28b3_0e53();
    local_44 = local_3c;
    local_42 = local_3a;
  }
  else {
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbccf;
    FUN_28b3_0cb6();
    puStack_8 = &local_40;
    uStack_a = 0x22b2;
    uStack_c = 0xbcd8;
    func_0x00029b55();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbcde;
    FUN_28b3_0e53();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbce6;
    FUN_28b3_0cb6();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbceb;
    func_0x00029af6();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbcf3;
    FUN_28b3_0e53();
  }
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xbcfc;
  FUN_28b3_0cb6();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xbd04;
  FUN_28b3_0cb6();
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xbd09;
  FUN_28b3_1181();
  if ((bool)uVar8) {
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbd14;
    FUN_28b3_0cb6();
    puStack_8 = &local_4e;
    uStack_a = 0x22b2;
    uStack_c = 0xbd1d;
    func_0x00029bb5();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbd23;
    FUN_28b3_0e53();
    local_52 = local_3c;
    local_50 = local_3a;
  }
  else {
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbd3a;
    FUN_28b3_0cb6();
    puStack_8 = &local_4e;
    uStack_a = 0x22b2;
    uStack_c = 0xbd43;
    func_0x00029b55();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbd49;
    FUN_28b3_0e53();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbd51;
    FUN_28b3_0cb6();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbd56;
    func_0x00029af6();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbd5e;
    FUN_28b3_0e53();
  }
  puStack_8 = (undefined2 *)0x0;
  uStack_a = 0x22b2;
  uVar7 = 0x885;
  uStack_c = 0xbd66;
  func_0x0000daa6();
  if ((*(int *)0x1126 == 0) && (param_3 == 0)) {
    puStack_8 = (undefined2 *)0x885;
    uStack_a = 0xbd7f;
    FUN_28b3_0cb6();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbd84;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbd8e;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbd96;
    FUN_28b3_0cb6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbd9b;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbda5;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uVar7 = 0x1bb4;
    uStack_1a = 0xbdaa;
    iVar5 = FUN_1def_1208();
    if (iVar5 != 0) {
      *param_31 = *param_31 + 1;
      puStack_8 = (undefined2 *)*(undefined2 *)0x152;
      uStack_a = 0x1bb4;
      uStack_c = 0xbdbf;
      uVar9 = func_0x000003ef();
      pbVar1 = (byte *)((int)uVar9 + 10);
      *pbVar1 = *pbVar1 | 0x40;
      puStack_8 = (undefined2 *)0x0;
      uStack_a = 0xbdd1;
      FUN_28b3_0cb6();
      puStack_8 = (undefined2 *)0x22b2;
      uStack_a = 0xbdd6;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xbde0;
      func_0x000299d1();
      uStack_10 = *(undefined2 *)0xa47e;
      uStack_12 = *(undefined2 *)0xa47c;
      uStack_14 = *(undefined2 *)0xa47a;
      uStack_16 = *(undefined2 *)0xa478;
      uStack_18 = 0x22b2;
      uStack_1a = 0xbdf8;
      FUN_28b3_0cb6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xbdfd;
      func_0x00029d78();
      uStack_20 = 0x22b2;
      uVar7 = 0x22b2;
      uStack_22 = 0xbe07;
      func_0x000299d1();
      uStack_20 = *(undefined2 *)0xa47e;
      uStack_22 = *(undefined2 *)0xa47c;
      uStack_24 = *(undefined2 *)0xa47a;
      local_26 = *(undefined2 *)0xa478;
      local_2a = 0xbe1b;
      iVar5 = func_0x000304ff();
      *param_30 = *param_30 + iVar5;
    }
    puStack_8 = (undefined2 *)0x0;
    uStack_c = 0xbe2b;
    uStack_a = uVar7;
    func_0x0000daa6();
    puStack_8 = (undefined2 *)0x885;
    uStack_a = 0xbe34;
    FUN_28b3_0cb6();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbe39;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbe43;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbe4b;
    FUN_28b3_0cb6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbe50;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbe5a;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uVar7 = 0x1bb4;
    uStack_1a = 0xbe5f;
    iVar5 = FUN_1def_1208();
    if (iVar5 == 0) goto LAB_3ab8_1723;
    *param_31 = *param_31 + 1;
    puStack_8 = (undefined2 *)*(undefined2 *)0x152;
    uStack_a = 0x1bb4;
    uStack_c = 0xbe77;
    uVar9 = func_0x000003ef();
    pbVar1 = (byte *)((int)uVar9 + 10);
    *pbVar1 = *pbVar1 | 0x40;
    puStack_8 = (undefined2 *)0x0;
    uStack_a = 0xbe89;
    FUN_28b3_0cb6();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xbe8e;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbe98;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbea0;
    FUN_28b3_0cb6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbeaa;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbeb2;
    FUN_28b3_0cb6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbeb7;
    func_0x00029d78();
    uStack_20 = 0x22b2;
    uStack_22 = 0xbec1;
    func_0x000299d1();
    uStack_20 = 0x22b2;
    uStack_22 = 0xbec9;
    FUN_28b3_0cb6();
    local_2a = 0xbed3;
    func_0x000299d1();
    local_2a = 0xbed7;
    iVar5 = func_0x000304ff();
  }
  else {
    if (param_3 == 0) {
      if (param_2 == 0) {
        puStack_8 = (undefined2 *)0x885;
        uStack_a = 0xbef4;
        FUN_28b3_0cb6();
        puStack_8 = (undefined2 *)0x22b2;
        uStack_a = 0xbef9;
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uStack_12 = 0xbf03;
        func_0x000299d1();
        uStack_10 = *(undefined2 *)0xa47e;
        uStack_12 = *(undefined2 *)0xa47c;
        uStack_14 = *(undefined2 *)0xa47a;
        uStack_16 = *(undefined2 *)0xa478;
        uStack_18 = 0x22b2;
        uStack_1a = 0xbf1b;
        FUN_28b3_0cb6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xbf20;
        func_0x00029d78();
        uStack_20 = 0x22b2;
        uVar7 = 0x22b2;
        uStack_22 = 0xbf2a;
        func_0x000299d1();
        uStack_20 = *(undefined2 *)0xa47e;
        uStack_22 = *(undefined2 *)0xa47c;
        uStack_24 = *(undefined2 *)0xa47a;
        local_26 = *(undefined2 *)0xa478;
        local_2a = 0xbf3e;
        iVar5 = func_0x000304ff();
        *param_30 = *param_30 + iVar5;
      }
      uStack_a = 0xbf4e;
      puStack_8 = (undefined2 *)uVar7;
      FUN_28b3_0cb6();
      puStack_8 = (undefined2 *)0x22b2;
      uStack_a = 0xbf53;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xbf5d;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xbf65;
      FUN_28b3_0cb6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xbf6f;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xbf77;
      FUN_28b3_0cb6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xbf7c;
      func_0x00029d78();
      uStack_20 = 0x22b2;
      uStack_22 = 0xbf86;
      func_0x000299d1();
      uStack_20 = 0x22b2;
      uStack_22 = 0xbf8e;
      FUN_28b3_0cb6();
      local_2a = 0xbf98;
      func_0x000299d1();
      local_2a = 0xbf9c;
      iVar5 = func_0x000304ff();
      *param_30 = *param_30 + iVar5;
      *(undefined2 *)0xb30c = local_4a;
      *(undefined2 *)0xb30e = local_48;
      *(undefined2 *)0xb37e = local_5a;
      *(undefined2 *)0xb380 = local_58;
      puStack_8 = (undefined2 *)0x0;
      uStack_a = 0;
      uStack_c = *(undefined2 *)0xa492;
      uStack_e = *(undefined2 *)0xa490;
      uStack_10 = *(undefined2 *)0xa48e;
      uStack_12 = *(undefined2 *)0xa48c;
      uStack_14 = 0x22b2;
      uStack_16 = 0xbfd6;
      iVar5 = FUN_2bb4_4af5();
      *param_30 = *param_30 + iVar5;
      *(undefined2 *)0xb30c = local_56;
      *(undefined2 *)0xb30e = local_54;
      *(undefined2 *)0xb37e = local_76;
      *(undefined2 *)0xb380 = local_74;
      puStack_8 = (undefined2 *)0x0;
      uStack_a = 0;
      uStack_c = *(undefined2 *)0xa4ae;
      uStack_e = *(undefined2 *)0xa4ac;
      uStack_10 = *(undefined2 *)0xa4aa;
      uStack_12 = *(undefined2 *)0xa4a8;
    }
    else {
      local_a6 = 1;
      puStack_8 = (undefined2 *)0x885;
      uStack_a = 0xc01d;
      FUN_28b3_0cb6();
      puStack_8 = (undefined2 *)0x22b2;
      uStack_a = 0xc022;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xc02c;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xc034;
      FUN_28b3_0cb6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xc03e;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xc046;
      FUN_28b3_0cb6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xc04b;
      func_0x00029d78();
      uStack_20 = 0x22b2;
      uStack_22 = 0xc055;
      func_0x000299d1();
      uStack_20 = 0x22b2;
      uStack_22 = 0xc05d;
      FUN_28b3_0cb6();
      uVar7 = 0x22b2;
      local_2a = 0xc067;
      func_0x000299d1();
      local_2a = 0xc06b;
      iVar5 = func_0x000304ff();
      *param_30 = *param_30 + iVar5;
      if (*param_34 < 1) {
        puStack_8 = (undefined2 *)0x22b2;
        uStack_a = 0xc086;
        FUN_28b3_0cb6();
        puStack_8 = (undefined2 *)0x22b2;
        uStack_a = 0xc08b;
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uStack_12 = 0xc095;
        func_0x000299d1();
        uStack_10 = *(undefined2 *)0xa47e;
        uStack_12 = *(undefined2 *)0xa47c;
        uStack_14 = *(undefined2 *)0xa47a;
        uStack_16 = *(undefined2 *)0xa478;
        uStack_18 = 0x22b2;
        uStack_1a = 0xc0ad;
        FUN_28b3_0cb6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc0b2;
        func_0x00029d78();
        uStack_20 = 0x22b2;
        uStack_22 = 0xc0bc;
        func_0x000299d1();
        uStack_20 = *(undefined2 *)0xa47e;
        uStack_22 = *(undefined2 *)0xa47c;
        uStack_24 = *(undefined2 *)0xa47a;
        local_26 = *(undefined2 *)0xa478;
        local_2a = 0xc0d0;
        iVar5 = func_0x000304ff();
        *param_30 = *param_30 + iVar5;
        if (*(char *)0x1130 == '\0') {
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc1f6;
          FUN_28b3_0cb6();
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc1fb;
          func_0x00029d78();
          uStack_10 = 0x22b2;
          uStack_12 = 0xc205;
          func_0x000299d1();
          uStack_10 = 0x22b2;
          uStack_12 = 0xc20d;
          FUN_28b3_0cb6();
          uStack_10 = 0x22b2;
          uStack_12 = 0xc212;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0xc21c;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          uVar7 = 0x1bb4;
          uStack_1a = 0xc221;
          iVar5 = FUN_1def_1208();
          if (iVar5 != 0) {
            *param_31 = *param_31 + 1;
            puStack_8 = (undefined2 *)*(undefined2 *)0x152;
            uStack_a = 0x1bb4;
            uVar7 = 0;
            uStack_c = 0xc236;
            uVar9 = func_0x000003ef();
            pbVar1 = (byte *)((int)uVar9 + 10);
            *pbVar1 = *pbVar1 | 0x40;
          }
        }
        else {
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc102;
          func_0x00029da5();
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc10b;
          func_0x00029b6d();
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc114;
          FUN_28b3_0e53();
          local_c6 = local_4a;
          local_c4 = local_48;
          local_c2 = local_5a;
          local_c0 = local_58;
          local_ba = 10000;
          uVar8 = 0;
          local_b6 = 0;
          local_b8 = 0;
          local_b2 = 0;
          local_b4 = 0;
          local_ae = 0;
          local_b0 = 0;
          puStack_8 = (undefined2 *)0x1;
          uStack_a = 0x22b2;
          uStack_c = 0xc158;
          local_ab = FUN_3ab8_0000();
          puStack_8 = (undefined2 *)0x1;
          uStack_a = 0x22b2;
          uStack_c = 0xc165;
          local_ac = FUN_3ab8_006b();
          local_aa = *(undefined1 *)0xb310;
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc17a;
          FUN_28b3_0cb6();
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc183;
          func_0x00029b85();
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc18c;
          FUN_28b3_0e3b();
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc194;
          FUN_28b3_0ee9();
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc19d;
          func_0x00029834();
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc1a6;
          FUN_28b3_0cb6();
          puStack_8 = (undefined2 *)0x22b2;
          uStack_a = 0xc1ab;
          func_0x00029d78();
          puStack_8 = (undefined2 *)0x22b2;
          uVar7 = 0x22b2;
          uStack_a = 0xc1b0;
          FUN_28b3_1181();
          if (!(bool)uVar8) {
            puVar6 = &local_26;
            puVar4 = &local_c6;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar3 = puVar6;
              puVar6 = puVar6 + 1;
              puVar2 = puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = *puVar2;
            }
            local_2a = 0xc1ca;
            FUN_13bf_01c1();
            *param_32 = 1;
            puStack_8 = (undefined2 *)*(undefined2 *)0x14e;
            uStack_a = *(undefined2 *)0x14c;
            uStack_c = 0x11f2;
            uVar7 = 0;
            uStack_e = 0xc1e1;
            uVar9 = func_0x00000271();
            pbVar1 = (byte *)((int)uVar9 + 0x1e);
            *pbVar1 = *pbVar1 | 0x40;
          }
        }
      }
      local_a6 = -local_a6;
      *(undefined2 *)0xb30c = local_56;
      *(undefined2 *)0xb30e = local_54;
      *(undefined2 *)0xb37e = local_76;
      *(undefined2 *)0xb380 = local_74;
      uVar8 = 0;
      if (param_3 != 0) {
        uStack_a = 0xc26d;
        puStack_8 = (undefined2 *)uVar7;
        FUN_28b3_0cb6();
        puStack_8 = (undefined2 *)0x22b2;
        uStack_a = 0xc275;
        FUN_28b3_0cb6();
        puStack_8 = (undefined2 *)0x22b2;
        uVar7 = 0x22b2;
        uStack_a = 0xc27a;
        FUN_28b3_1181();
        if ((bool)uVar8) {
          local_a6 = -local_a6;
        }
      }
      puStack_8 = (undefined2 *)0x0;
      uStack_a = 0;
      uStack_e = 0xc28d;
      uStack_c = uVar7;
      FUN_28b3_0d8b();
      uStack_14 = 0x22b2;
      uStack_16 = 0xc297;
      func_0x000299d1();
    }
    uStack_14 = 0x22b2;
    uStack_16 = 0xc29b;
    iVar5 = FUN_2bb4_4af5();
  }
  uVar7 = 0x22b2;
  *param_30 = *param_30 + iVar5;
LAB_3ab8_1723:
  *(undefined2 *)0xb30c = local_4a;
  *(undefined2 *)0xb30e = local_48;
  *(undefined2 *)0xb37e = local_5a;
  *(undefined2 *)0xb380 = local_58;
  if (param_3 == 0) {
    puStack_8 = (undefined2 *)0x1;
    uStack_a = *(undefined2 *)0x1124;
    uStack_e = 0xc2d3;
    uStack_c = uVar7;
    FUN_28b3_0cb6();
    uStack_c = 0x22b2;
    uStack_e = 0xc2d8;
    func_0x00029d78();
    uStack_14 = 0x22b2;
    uStack_16 = 0xc2e2;
    func_0x000299d1();
    uStack_14 = param_1;
    uStack_16 = 0;
    uStack_18 = 0x22b2;
    uStack_1a = 0xc2ec;
    iVar5 = func_0x00030b78();
    if (iVar5 != 0) {
      *param_33 = *param_33 + 1;
    }
  }
  else {
    if (1 < *(byte *)0x114a) {
      uStack_a = 0xc30d;
      puStack_8 = (undefined2 *)uVar7;
      func_0x00029834();
      puStack_8 = (undefined2 *)0x22b2;
      uStack_a = 0xc315;
      FUN_28b3_0e53();
      puStack_8 = (undefined2 *)0x22b2;
      uStack_a = 0xc31d;
      func_0x00029834();
      puStack_8 = (undefined2 *)0x22b2;
      uVar7 = 0x22b2;
      uStack_a = 0xc325;
      FUN_28b3_0e53();
    }
    *(undefined2 *)0xb30c = local_56;
    *(undefined2 *)0xb30e = local_54;
    *(undefined2 *)0xb37e = local_76;
    *(undefined2 *)0xb380 = local_74;
    local_46 = 0;
    uStack_a = 0xc34d;
    puStack_8 = (undefined2 *)uVar7;
    FUN_28b3_0cb6();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xc355;
    FUN_28b3_0cb6();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xc35a;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc364;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc36c;
    FUN_28b3_0cb6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc371;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc37b;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    uStack_1c = 0xc384;
    func_0x0001e558();
    uVar8 = (undefined1 *)0xffed < &uStack_18;
    puStack_8 = (undefined2 *)0x1bb4;
    uStack_a = 0xc38e;
    FUN_28b3_0cb6();
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xc393;
    FUN_28b3_1181();
    if ((bool)uVar8) {
      local_46 = 0xffff;
    }
    puStack_8 = (undefined2 *)local_46;
    uStack_a = *(undefined2 *)0x1124;
    uStack_c = 0x22b2;
    uStack_e = 0xc3a9;
    FUN_28b3_0cb6();
    uStack_c = 0x22b2;
    uStack_e = 0xc3ae;
    func_0x00029d78();
    uStack_14 = 0x22b2;
    uStack_16 = 0xc3b8;
    func_0x000299d1();
    uStack_14 = param_1;
    uStack_16 = 0x22b2;
    uStack_18 = 0xc3bf;
    iVar5 = FUN_3ab8_0a69();
    if (iVar5 != 0) {
      *param_33 = *param_33 + 1;
      puStack_8 = (undefined2 *)*(undefined2 *)0x150;
      uStack_a = 0x22b2;
      uStack_c = 0xc3d4;
      uVar9 = func_0x00000398();
      pbVar1 = (byte *)((int)uVar9 + 0x17);
      *pbVar1 = *pbVar1 | 0x10;
    }
    *param_34 = 1;
  }
  return *param_33 + *param_32 + *param_31 + *param_30;
}



/* 3ab8:187f  FUN_3ab8_187f  24 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

int FUN_3ab8_187f(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
                 undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
                 undefined2 param_13,undefined2 param_14,undefined2 param_15,undefined2 param_16,
                 undefined2 param_17,undefined2 param_18,undefined2 param_19)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 *puVar17;
  undefined1 auStack_594 [4];
  int iStack_590;
  int iStack_58e;
  undefined1 auStack_58a [4];
  uint uStack_586;
  int iStack_584;
  int iStack_582;
  undefined2 uStack_580;
  undefined2 uStack_57e;
  undefined2 auStack_57c [204];
  undefined2 uStack_3e4;
  int iStack_3e2;
  undefined2 uStack_3e0;
  undefined2 uStack_3de;
  undefined1 auStack_3dc [100];
  int iStack_378;
  int iStack_376;
  uint uStack_374;
  uint uStack_372;
  int iStack_370;
  int iStack_36e;
  uint uStack_36c;
  undefined1 auStack_36a [2];
  uint uStack_368;
  int iStack_366;
  undefined1 auStack_364 [6];
  int iStack_35e;
  undefined2 uStack_35c;
  int iStack_35a;
  int iStack_358;
  undefined2 uStack_356;
  uint uStack_354;
  undefined2 uStack_352;
  undefined2 uStack_350;
  int iStack_34e;
  int iStack_34c;
  undefined2 uStack_34a;
  undefined2 uStack_348;
  int iStack_346;
  int iStack_344;
  byte abStack_33e [2];
  int aiStack_33c [4];
  int iStack_334;
  undefined2 uStack_1a2;
  undefined2 auStack_1a0 [4];
  undefined2 uStack_198;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  int iStack_46;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined1 *puStack_24;
  undefined1 *puStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  
  FUN_21f2_0ebc();
  do {
    FUN_1885_2ec3();
    pcVar6 = (code *)swi(0x3f);
    iStack_35a = (*pcVar6)();
    if ((iStack_35a == -1) || (iStack_35a == 0)) {
      return iStack_35a;
    }
    func_0x0000c3ca();
    uStack_35c = 0xffff;
    uStack_356 = 0;
    iStack_35e = 0;
    iStack_358 = 0;
    func_0x00029834();
    FUN_28b3_0e53();
    func_0x00029834();
    FUN_28b3_0e53();
    func_0x00029834();
    FUN_28b3_0e53();
    func_0x00029834();
    FUN_28b3_0e53();
    uStack_368 = *(uint *)0x148;
    iStack_366 = *(int *)0x14a;
    iStack_378 = *(int *)0x14c;
    iStack_376 = *(int *)0x14e;
    iStack_36e = *(int *)0x152;
    aiStack_33c[0] = *(int *)0x150;
    iStack_370 = 0;
    puVar13 = (undefined1 *)0x22b2;
    for (uStack_372 = 1;
        (iStack_370 <= iStack_366 && ((iStack_370 < iStack_366 || (uStack_372 <= uStack_368))));
        uStack_372 = uStack_372 + 1) {
      puVar14 = (undefined1 *)0x0;
      puStack_e = (undefined1 *)0xc548;
      puStack_c = puVar13;
      puVar17 = (undefined2 *)func_0x0000013f();
      puVar12 = (undefined2 *)puVar17;
      puVar9 = &uStack_352;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar2 = *puVar1;
      }
      if ((abStack_33e[0] & 2) != 0) {
        FUN_28b3_0cb6();
        iStack_10 = 0x22b2;
        uStack_12 = 0xc575;
        func_0x000299d1();
        iStack_10 = 0x22b2;
        uStack_12 = 0xc57e;
        FUN_28b3_0cb6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc588;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xc591;
        puVar9 = (undefined2 *)FUN_1def_05d1();
        uStack_3e0 = *puVar9;
        uStack_3de = puVar9[1];
        FUN_28b3_0cb6();
        iStack_10 = 0x22b2;
        uStack_12 = 0xc5b6;
        func_0x000299d1();
        iStack_10 = 0x22b2;
        uStack_12 = 0xc5bf;
        FUN_28b3_0cb6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc5c9;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xc5d2;
        puVar9 = (undefined2 *)func_0x0001e558();
        uStack_3e4 = *puVar9;
        iStack_3e2 = puVar9[1];
        FUN_28b3_0cb6();
        iStack_10 = 0x22b2;
        uStack_12 = 0xc5f7;
        func_0x000299d1();
        iStack_10 = 0x22b2;
        uStack_12 = 0xc600;
        FUN_28b3_0cb6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc60a;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xc613;
        puVar9 = (undefined2 *)FUN_1def_05d1();
        uStack_580 = *puVar9;
        uStack_57e = puVar9[1];
        FUN_28b3_0cb6();
        iStack_10 = 0x22b2;
        uStack_12 = 0xc638;
        func_0x000299d1();
        iStack_10 = 0x22b2;
        uStack_12 = 0xc641;
        FUN_28b3_0cb6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xc64b;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xc654;
        func_0x0001e558();
        uVar15 = (undefined1 *)0xffed < &uStack_18;
        FUN_28b3_0cb6();
        FUN_28b3_0e3b();
        FUN_28b3_100d();
        FUN_28b3_0e3b();
        FUN_28b3_0e53();
        func_0x00029834();
        FUN_28b3_0cb6();
        func_0x00029ae7();
        func_0x00029d78();
        puVar14 = (undefined1 *)0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar15) {
          iStack_35e = iStack_35e + 1;
          FUN_28b3_0cb6();
          func_0x00029ae7();
          FUN_28b3_0cb6();
          func_0x00029ae7();
          puVar14 = (undefined1 *)0x22b2;
          FUN_28b3_1181();
          iVar10 = iStack_35e;
          uVar3 = uStack_3de;
          if ((bool)uVar15) {
            auStack_57c[iStack_35e * 2] = uStack_3e0;
            auStack_57c[iVar10 * 2 + 1] = uVar3;
            auStack_1a0[iVar10 * 2U + 1] = uStack_352;
            auStack_1a0[iVar10 * 2U + 2] = uStack_350;
            iVar8 = iStack_34e;
            iVar11 = iStack_34c;
          }
          else {
            auStack_57c[iStack_35e * 2] = uStack_580;
            auStack_57c[iVar10 * 2 + 1] = uStack_57e;
            auStack_1a0[iVar10 * 2U + 1] = uStack_34a;
            auStack_1a0[iVar10 * 2U + 2] = uStack_348;
            iVar8 = iStack_346;
            iVar11 = iStack_344;
          }
          aiStack_33c[iVar10 * 2 + 1] = iVar8;
          aiStack_33c[iVar10 * 2 + 2] = iVar11;
          if (99 < iStack_35e) break;
        }
      }
      iStack_370 = iStack_370 + (uint)(0xfffe < uStack_372);
      puVar13 = puVar14;
    }
    uStack_354 = 0;
    if (iStack_35a == 1) {
      uStack_354 = 1;
    }
    uStack_354 = (uint)(iStack_35a == 1);
    for (uStack_36c = 1; (int)uStack_36c <= iStack_35e; uStack_36c = uStack_36c + 1) {
      uStack_3e0 = auStack_57c[uStack_36c * 2];
      uStack_3de = auStack_57c[uStack_36c * 2 + 1];
      uStack_586 = uStack_36c;
      if (uStack_354 == 0) {
        for (uStack_374 = uStack_36c + 1; (int)uStack_374 <= iStack_35e; uStack_374 = uStack_374 + 1
            ) {
          FUN_28b3_0cb6();
          uVar15 = (int)(uStack_374 << 1) < 0;
          FUN_28b3_0cb6();
          FUN_28b3_0e3b();
          FUN_28b3_1181();
          if ((bool)uVar15) {
            FUN_28b3_0cb6();
            FUN_28b3_0e53();
            uStack_586 = uStack_374;
          }
        }
      }
      else {
        for (uStack_374 = uStack_36c + 1; (int)uStack_374 <= iStack_35e; uStack_374 = uStack_374 + 1
            ) {
          FUN_28b3_0cb6();
          uVar15 = (int)(uStack_374 << 1) < 0;
          uVar16 = (uStack_374 & 0x3fff) == 0;
          FUN_28b3_0cb6();
          FUN_28b3_0e3b();
          FUN_28b3_1181();
          if (!(bool)uVar15 && !(bool)uVar16) {
            FUN_28b3_0cb6();
            FUN_28b3_0e53();
            uStack_586 = uStack_374;
          }
        }
      }
      uVar7 = uStack_36c;
      if ((int)uStack_36c < (int)uStack_586) {
        uVar3 = auStack_57c[uStack_36c * 2];
        uVar4 = auStack_57c[uStack_36c * 2 + 1];
        uVar5 = auStack_57c[uStack_586 * 2 + 1];
        auStack_57c[uStack_36c * 2] = auStack_57c[uStack_586 * 2];
        auStack_57c[uVar7 * 2 + 1] = uVar5;
        auStack_57c[uStack_586 * 2] = uVar3;
        auStack_57c[uStack_586 * 2 + 1] = uVar4;
        uStack_580 = auStack_1a0[uVar7 * 2 + 1];
        uStack_57e = auStack_1a0[uVar7 * 2 + 2];
        uVar3 = auStack_1a0[uStack_586 * 2 + 2];
        auStack_1a0[uVar7 * 2 + 1] = auStack_1a0[uStack_586 * 2 + 1];
        auStack_1a0[uVar7 * 2 + 2] = uVar3;
        auStack_1a0[uStack_586 * 2 + 1] = uStack_580;
        auStack_1a0[uStack_586 * 2 + 2] = uStack_57e;
        iStack_584 = aiStack_33c[uVar7 * 2 + 1];
        iStack_582 = aiStack_33c[uVar7 * 2 + 2];
        iVar10 = aiStack_33c[uStack_586 * 2 + 2];
        aiStack_33c[uVar7 * 2 + 1] = aiStack_33c[uStack_586 * 2 + 1];
        aiStack_33c[uVar7 * 2 + 2] = iVar10;
        aiStack_33c[uStack_586 * 2 + 1] = iStack_584;
        aiStack_33c[uStack_586 * 2 + 2] = iStack_582;
      }
    }
    for (uStack_36c = 2; (int)uStack_36c <= iStack_35e; uStack_36c = uStack_36c + 1) {
      func_0x00029834();
      uVar15 = (int)(uStack_36c << 1) < 0;
      FUN_28b3_0cb6();
      FUN_28b3_100d();
      FUN_28b3_0e3b();
      func_0x00029ae7();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar15) {
        uStack_3e0 = (&uStack_1a2)[uStack_36c * 2];
        uStack_3de = auStack_1a0[uStack_36c * 2];
        uStack_3e4 = *(undefined2 *)(abStack_33e + uStack_36c * 4);
        iStack_3e2 = aiStack_33c[uStack_36c * 2];
        if (param_3 != 0) {
          uStack_3e0 = auStack_1a0[3];
          uStack_3de = uStack_198;
          uStack_3e4 = aiStack_33c[3];
          iStack_3e2 = iStack_334;
        }
        FUN_28b3_0cb6();
        FUN_28b3_0e3b();
        FUN_28b3_0ee9();
        puStack_c = auStack_36a;
        puStack_e = auStack_364;
        iStack_10 = (int)auStack_1a0;
        uStack_12 = param_19;
        uStack_14 = param_18;
        uStack_16 = param_17;
        uStack_18 = param_16;
        uStack_1a = param_15;
        uStack_1c = param_14;
        uStack_1e = param_13;
        uStack_20 = param_12;
        puStack_22 = &stack0xfffa;
        puStack_24 = auStack_58a;
        uStack_26 = 0x22b2;
        uStack_28 = 0xc99c;
        FUN_28b3_0cb6();
        uStack_26 = 0x22b2;
        uStack_28 = 0xc9a1;
        func_0x00029d78();
        uStack_2e = 0x22b2;
        uStack_30 = 0xc9ab;
        func_0x000299d1();
        uStack_2e = 0x22b2;
        uStack_30 = 0xc9b4;
        FUN_28b3_0cb6();
        uStack_2e = 0x22b2;
        uStack_30 = 0xc9bd;
        FUN_28b3_0e3b();
        uStack_2e = 0x22b2;
        uStack_30 = 0xc9c2;
        func_0x00029d78();
        uStack_36 = 0x22b2;
        uStack_38 = 0xc9cc;
        func_0x000299d1();
        uStack_36 = 0x22b2;
        uStack_38 = 0xc9d5;
        FUN_28b3_0cb6();
        uStack_36 = 0x22b2;
        uStack_38 = 0xc9da;
        func_0x00029d78();
        uStack_3e = 0x22b2;
        uStack_40 = 0xc9e4;
        func_0x000299d1();
        uStack_3e = 0x22b2;
        uStack_40 = 0xc9ed;
        FUN_28b3_0cb6();
        uStack_3e = 0x22b2;
        uStack_40 = 0xc9f2;
        func_0x00029d78();
        iStack_46 = 0x22b2;
        uStack_48 = 0xc9fc;
        func_0x000299d1();
        iStack_46 = param_3;
        uStack_48 = uStack_356;
        uStack_4a = param_2;
        uStack_4c = 0x22b2;
        uStack_4e = 0xca0a;
        iStack_358 = FUN_3ab8_0dba();
        if (iStack_358 != 0) {
          uStack_356 = 1;
        }
      }
    }
    while( true ) {
      *(undefined2 *)0xbc0 = 1;
      FUN_1885_2ec3();
      if (*(byte *)0x114a < 2) {
        puStack_c = (undefined1 *)param_9;
        puStack_e = (undefined1 *)param_8;
        iStack_10 = param_7;
        uStack_12 = param_6;
        uStack_14 = param_5;
        uStack_16 = param_4;
        uStack_18 = 9;
        uStack_1a = 1;
        uStack_1c = 0x1b6e;
        uStack_1e = 0xca62;
        func_0x00030897();
      }
      puStack_c = (undefined1 *)param_17;
      puStack_e = (undefined1 *)param_16;
      iStack_10 = param_15;
      uStack_12 = param_14;
      uStack_14 = param_13;
      uStack_16 = param_12;
      uStack_18 = 0;
      uStack_1a = 2;
      uStack_1c = 0x1b6e;
      uStack_1e = 0xca88;
      func_0x00030897();
      puStack_c = (undefined1 *)0x1b6e;
      puStack_e = (undefined1 *)0xca99;
      FUN_21f2_3454();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xcaa9;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xcab9;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xcac9;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xcad9;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xcae9;
      FUN_1def_07a4();
      *(undefined2 *)0xc2c = 1;
      if (((((*(uint *)0x148 == uStack_368) && (*(int *)0x14a == iStack_366)) &&
           (*(int *)0x14c == iStack_378)) &&
          ((*(int *)0x14e == iStack_376 && (iStack_36e == *(int *)0x152)))) &&
         (aiStack_33c[0] == *(int *)0x150)) {
        iStack_58e = 10000;
      }
      else {
        iStack_58e = 9999;
      }
      puStack_c = auStack_594;
      puStack_e = auStack_3dc;
      iStack_10 = iStack_58e;
      uStack_12 = 0x1bb4;
      uStack_14 = 0xcb56;
      uStack_586 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      FUN_1885_2ec3();
      func_0x0000c3ca();
      if ((*(int *)0x158 != 0) || (uStack_586 == 0x14)) {
        return 0;
      }
      if ((iStack_590 == 1) || (uStack_586 == 1)) break;
      if (iStack_590 == 2) {
        return iStack_358;
      }
      if (uStack_586 == 2) {
        return iStack_358;
      }
      if (uStack_586 == 0xffff) {
        *(uint *)0x148 = uStack_368;
        *(int *)0x14a = iStack_366;
        *(int *)0x14c = iStack_378;
        *(int *)0x14e = iStack_376;
        *(int *)0x152 = iStack_36e;
        *(int *)0x150 = aiStack_33c[0];
        puStack_c = (undefined1 *)0xcbe2;
        func_0x0001470b();
      }
    }
  } while( true );
}



/* 3ab8:206c  FUN_3ab8_206c  11148 bytes, 0 callers */

/* WARNING: Instruction at (ram,0x000304f9) overlaps instruction at (ram,0x000304f7)
    */
/* WARNING: Type propagation algorithm not settling */

int FUN_3ab8_206c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 *******param_4
                 ,int param_5)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *******pppppppuVar3;
  undefined2 *puVar4;
  code *pcVar5;
  undefined2 ******ppppppuVar6;
  undefined2 *******pppppppuVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined2 *******pppppppuVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  long lVar20;
  undefined2 *puVar21;
  undefined2 *in_stack_0000003a;
  int *in_stack_0000003c;
  undefined2 *in_stack_0000003e;
  int *in_stack_00000040;
  undefined1 auStack_32a [210];
  undefined2 *******local_258;
  undefined2 *******local_256;
  undefined2 ******local_254;
  int local_252;
  undefined4 local_250;
  undefined2 local_24c;
  undefined2 local_24a;
  uint local_232;
  undefined2 local_226;
  undefined2 local_224;
  undefined2 *******local_220;
  undefined2 *******local_21e;
  undefined2 ******local_21c;
  int local_21a;
  int local_212;
  int local_210;
  undefined4 local_20e;
  undefined2 *******local_20a;
  undefined2 *******local_208;
  undefined2 ******local_1fc [62];
  undefined2 ******local_180;
  int local_17e;
  undefined2 local_17c;
  undefined2 local_17a;
  undefined2 ******local_178 [4];
  int local_170;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined2 *******local_168;
  undefined2 *******local_166;
  undefined2 ******local_160;
  int local_15e;
  int local_158;
  undefined2 auStack_156 [11];
  byte bStack_140;
  byte bStack_13f;
  undefined2 ******local_13e;
  int local_13c;
  undefined2 ******local_13a [2];
  undefined2 uStack_136;
  undefined2 uStack_134;
  undefined2 *******local_132;
  undefined2 *******local_130;
  int local_12e;
  int local_12c;
  undefined2 ******local_12a [50];
  undefined2 *******local_c6;
  undefined2 *******local_c4;
  undefined2 *******pppppppuStack_c2;
  undefined2 *******pppppppuStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  int iStack_b6;
  undefined2 ******local_b4;
  int local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 ******local_a4;
  undefined2 *******local_a2;
  undefined2 *******local_a0;
  int local_9e;
  undefined2 local_9c;
  undefined4 local_9a;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 ******local_92;
  int local_90;
  undefined2 *******local_8e;
  undefined2 *******local_8c;
  int local_8a;
  undefined2 local_88;
  undefined2 uStack_86;
  int local_82;
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  int *local_74;
  undefined2 uStack_6c;
  int *local_6a;
  undefined2 ******local_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 local_62 [2];
  undefined2 ******local_5e;
  int local_5c;
  undefined2 ******ppppppuStack_50;
  undefined2 ******ppppppuStack_4e;
  undefined2 *******local_4c;
  undefined2 *******local_4a;
  undefined2 ******local_48;
  int local_46;
  undefined2 uStack_44;
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
  undefined2 ******ppppppuStack_2e;
  undefined2 *******pppppppuStack_2a;
  undefined2 *******local_28;
  undefined2 *******pppppppuStack_26;
  undefined2 *******pppppppuStack_24;
  undefined2 ******ppppppuStack_22;
  undefined2 ******ppppppuStack_20;
  undefined2 ******local_1e;
  undefined2 uStack_1c;
  undefined4 *puStack_1a;
  int local_18;
  undefined2 local_16;
  undefined1 *puStack_14;
  undefined4 uStack_12;
  undefined2 *******pppppppuStack_e;
  undefined2 *******pppppppuStack_c;
  
  pppppppuVar14 = (undefined2 *******)0x22b2;
  FUN_21f2_0ebc();
  local_9e = 1;
  local_210 = 1;
  local_158 = 0;
  local_82 = 0;
  local_68 = (undefined2 ******)0x0;
  local_80 = *(undefined2 *)0xa4bc;
  uStack_7e = *(undefined2 *)0xa4be;
  uStack_7c = *(undefined2 *)0xa4c0;
  uStack_7a = *(undefined2 *)0xa4c2;
LAB_3ab8_209d:
  do {
    pppppppuStack_e = (undefined2 *******)0xcc2b;
    pppppppuStack_c = pppppppuVar14;
    FUN_21f2_3454();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xcc3b;
    FUN_21f2_3454();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xcc4c;
    FUN_21f2_2d26();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xcc5c;
    FUN_21f2_2d26();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xcc6d;
    FUN_21f2_2d26();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xcc7d;
    FUN_21f2_2d26();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xcc8e;
    FUN_21f2_2d26();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xcc9e;
    FUN_21f2_2d26();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xccae;
    FUN_21f2_2d26();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xccbe;
    FUN_21f2_2d26();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xccce;
    FUN_1def_07a4();
    if (*(int *)0xce6 == 0) {
      *(undefined2 *)0xc1a = 1;
      pppppppuStack_c = &local_220;
      pppppppuStack_e = local_12a;
      uStack_12._2_2_ = (int *)0x0;
      uStack_12._0_2_ = (undefined2 *)0x1bb4;
      puStack_14 = (undefined1 *)0xcd33;
      local_170 = FUN_1def_0904();
    }
    else {
      *(undefined2 *)0xc1a = 0;
      pppppppuStack_c = &local_220;
      pppppppuStack_e = local_12a;
      uStack_12._2_2_ = (int *)0x1;
      uStack_12._0_2_ = (undefined2 *)0x1bb4;
      puStack_14 = (undefined1 *)0xccfd;
      local_170 = FUN_1def_0904();
      if (local_170 == -1) goto LAB_2bb4_4990_4;
    }
    pppppppuVar14 = (undefined2 *******)0x1bb4;
    *(undefined2 *)0xc1a = 0;
    if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
    if ((*(int *)0xc18 == -2) && (2 < *(byte *)0x126)) {
      local_74 = (int *)0x0;
      pppppppuStack_c = local_21e;
      pppppppuStack_e = local_220;
      uStack_12._2_2_ = (int *)0x1bb4;
      pppppppuVar14 = (undefined2 *******)0x2ab8;
      uStack_12._0_2_ = (undefined2 *)0xcd7b;
      FUN_28b3_216a();
      goto LAB_3ab8_209d;
    }
    if (*(int *)0xc18 == 0) {
      if (local_a2 == (undefined2 *******)0x1) {
        local_170 = 1;
      }
      if (local_a2 == (undefined2 *******)0x2) {
        local_170 = 2;
      }
      if ((0 < local_170) && (local_170 < 10)) {
        if (local_170 != 4) {
          if (local_170 == 3) {
            pppppppuVar14 = (undefined2 *******)0x885;
            func_0x0000c3ca();
            pcVar5 = (code *)swi(0x3f);
            iVar9 = (*pcVar5)();
            if (iVar9 == -1) goto LAB_3ab8_209d;
            if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
          }
          local_74 = (int *)0x0;
          if ((0 < local_170) && (local_170 < 4)) goto LAB_3ab8_230c;
LAB_3ab8_2de5:
          local_74 = (int *)0x0;
          local_158 = 0;
          *(undefined2 *)0xc1e = 0;
          local_12c = 0;
          if (((0 < local_170) && (local_170 < 4)) || (local_170 == 5)) {
LAB_3ab8_2e14:
            local_68 = (undefined2 ******)0x0;
LAB_3ab8_2e19:
            do {
              while( true ) {
                while( true ) {
                  *(undefined2 *)0xc1e = 0;
                  if (local_170 == 1) {
                    if (*(int *)0xcb6 == 0) {
                      uVar15 = *(undefined2 *)0xa4ce;
                      *(undefined2 *)0xb76a = *(undefined2 *)0xa4cc;
                      *(undefined2 *)0xb76c = uVar15;
                      uVar15 = *(undefined2 *)0xa48a;
                      *(undefined2 *)0xb784 = *(undefined2 *)0xa488;
                      *(undefined2 *)0xb786 = uVar15;
                    }
                    else {
                      uVar15 = *(undefined2 *)0xcbc;
                      *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
                      *(undefined2 *)0xb76c = uVar15;
                      uVar15 = *(undefined2 *)0xcc0;
                      *(undefined2 *)0xb784 = *(undefined2 *)0xcbe;
                      *(undefined2 *)0xb786 = uVar15;
                    }
                  }
                  if (local_170 == 2) {
                    if (*(int *)0xcb6 == 0) {
                      uVar15 = *(undefined2 *)0xa48a;
                      *(undefined2 *)0xb76a = *(undefined2 *)0xa488;
                      *(undefined2 *)0xb76c = uVar15;
                      uVar15 = *(undefined2 *)0xa4ce;
                      *(undefined2 *)0xb784 = *(undefined2 *)0xa4cc;
                      *(undefined2 *)0xb786 = uVar15;
                    }
                    else {
                      FUN_28b3_0cb6();
                      func_0x00029af6();
                      FUN_28b3_0e53();
                      uVar15 = *(undefined2 *)0xcbc;
                      *(undefined2 *)0xb784 = *(undefined2 *)0xcba;
                      *(undefined2 *)0xb786 = uVar15;
                    }
                  }
                  if (local_170 == 3) {
                    if (*(int *)0xcb6 == 0) {
                      FUN_28b3_0cb6();
                      func_0x00029d78();
                      func_0x00029c2c();
                      func_0x000299d1();
                    }
                    else {
                      FUN_28b3_0cb6();
                      func_0x00029bb5();
                      func_0x00029d78();
                      func_0x00029c2c();
                      func_0x000299d1();
                    }
                    pppppppuStack_c = local_8c;
                    pppppppuStack_e = local_8e;
                    uStack_12._2_2_ = (int *)0x22b2;
                    uStack_12._0_2_ = (undefined2 *)0xdab9;
                    func_0x0002a11e();
                    func_0x00029834();
                    FUN_28b3_0e53();
                    pppppppuStack_c = local_8c;
                    pppppppuStack_e = local_8e;
                    uStack_12._2_2_ = (int *)0x22b2;
                    uStack_12._0_2_ = (undefined2 *)0xdae3;
                    FUN_28b3_15dc();
                    func_0x00029834();
                    FUN_28b3_0e53();
                  }
                  uVar17 = 0;
                  uVar18 = local_12c == 0;
                  if (!(bool)uVar18) {
                    FUN_28b3_0cb6();
                    func_0x00029ae7();
                    FUN_28b3_0cb6();
                    func_0x00029ae7();
                    FUN_28b3_1181();
                    if ((bool)uVar17) {
                      FUN_28b3_0cb6();
                      FUN_28b3_0cb6();
                      FUN_28b3_1181();
                      if (!(bool)uVar17 && !(bool)uVar18) {
                        FUN_28b3_0cb6();
                        func_0x00029af6();
                        FUN_28b3_0e53();
                        FUN_28b3_0cb6();
                        func_0x00029af6();
                        FUN_28b3_0e53();
                      }
                    }
                    else {
                      FUN_28b3_0cb6();
                      FUN_28b3_0cb6();
                      FUN_28b3_1181();
                      if ((bool)uVar17) {
                        FUN_28b3_0cb6();
                        func_0x00029af6();
                        FUN_28b3_0e53();
                        FUN_28b3_0cb6();
                        func_0x00029af6();
                        FUN_28b3_0e53();
                      }
                    }
                  }
                  func_0x0002b07d();
                  if (local_170 < 4) {
                    FUN_1885_2ec3();
                    if (*(byte *)0x114a < 2) {
                      FUN_28b3_0cb6();
                      func_0x00029d78();
                      uStack_12._2_2_ = (int *)0x22b2;
                      uStack_12._0_2_ = (undefined2 *)0xdbf5;
                      func_0x000299d1();
                      uStack_12._2_2_ = (int *)0x22b2;
                      uStack_12._0_2_ = (undefined2 *)0xdbfe;
                      FUN_28b3_0cb6();
                      uStack_12._2_2_ = (int *)0x22b2;
                      uStack_12._0_2_ = (undefined2 *)0xdc03;
                      func_0x00029d78();
                      local_18 = 0x22b2;
                      puStack_1a = (undefined4 *)0xdc0d;
                      func_0x000299d1();
                      local_18 = 9;
                      puStack_1a = (undefined4 *)0x1;
                    /* WARNING: Call to offcut address within same function */
                      uStack_1c = 0x22b2;
                      local_1e = (undefined2 ******)0xdc1a;
                      func_0x00030897();
                    }
                    FUN_28b3_0cb6();
                    func_0x00029d78();
                    uStack_12._2_2_ = (int *)0x22b2;
                    uStack_12._0_2_ = (undefined2 *)0xdc35;
                    func_0x000299d1();
                    uStack_12._2_2_ = (int *)0x22b2;
                    uStack_12._0_2_ = (undefined2 *)0xdc3e;
                    FUN_28b3_0cb6();
                    uStack_12._2_2_ = (int *)0x22b2;
                    uStack_12._0_2_ = (undefined2 *)0xdc43;
                    func_0x00029d78();
                    local_18 = 0x22b2;
                    puStack_1a = (undefined4 *)0xdc4d;
                    func_0x000299d1();
                    local_18 = 0;
                    puStack_1a = (undefined4 *)0x2;
                    /* WARNING: Call to offcut address within same function */
                    uStack_1c = 0x22b2;
                    local_1e = (undefined2 ******)0xdc5a;
                    func_0x00030897();
                  }
                  pppppppuStack_c = local_12a;
                  pppppppuStack_e = (undefined2 *******)0x2ab8;
                  uStack_12._2_2_ = (int *)0xdc6f;
                  FUN_21f2_3454();
                  if (*(int *)0x1ce < 10) {
                    pppppppuStack_c = (undefined2 *******)0x22b2;
                    pppppppuStack_e = (undefined2 *******)0xdc8a;
                    FUN_21f2_2d26();
                  }
                  pppppppuStack_c = (undefined2 *******)0x22b2;
                  pppppppuStack_e = (undefined2 *******)0xdc9a;
                  FUN_21f2_2d26();
                  pppppppuStack_c = (undefined2 *******)0x22b2;
                  pppppppuStack_e = (undefined2 *******)0xdcaa;
                  FUN_21f2_2d26();
                  if ((local_74 == (int *)0x0) || (local_158 != 0)) {
                    pppppppuStack_c = (undefined2 *******)0x5f5b;
                    pppppppuStack_e = (undefined2 *******)0xbf48;
                    uStack_12._2_2_ = (int *)0x22b2;
                    uStack_12._0_2_ = (undefined2 *)0xdcd4;
                    FUN_21f2_3454();
                    pppppppuStack_c = (undefined2 *******)0x22b2;
                    pppppppuStack_e = (undefined2 *******)0xdce4;
                    FUN_21f2_2d26();
                    if ((local_170 < 4) && (local_12c == 0)) {
                      pppppppuStack_c = (undefined2 *******)0x22b2;
                      pppppppuStack_e = (undefined2 *******)0xdd07;
                      FUN_21f2_2d26();
                      pppppppuStack_c = (undefined2 *******)0x22b2;
                      pppppppuStack_e = (undefined2 *******)0xdd16;
                      FUN_21f2_2d26();
                    }
                    if (local_12c == 0) {
                      pppppppuStack_c = (undefined2 *******)0x22b2;
                      pppppppuStack_e = (undefined2 *******)0xdd2f;
                      FUN_21f2_2d26();
                      pppppppuStack_c = (undefined2 *******)0x22b2;
                      pppppppuStack_e = (undefined2 *******)0xdd3e;
                      FUN_21f2_2d26();
                      if (local_170 == 5) {
                        pppppppuStack_c = (undefined2 *******)0x22b2;
                        pppppppuStack_e = (undefined2 *******)0xdd57;
                        FUN_21f2_2d26();
                        pppppppuStack_c = (undefined2 *******)0x22b2;
                        pppppppuStack_e = (undefined2 *******)0xdd66;
                        FUN_21f2_2d26();
                      }
                    }
                    else if (local_170 == 5) {
                      if (local_210 < 1) {
                        pppppppuStack_c = (undefined2 *******)0x22b2;
                        pppppppuStack_e = (undefined2 *******)0xdd9e;
                        FUN_21f2_2d26();
                      }
                      else {
                        pppppppuStack_c = (undefined2 *******)0x22b2;
                        pppppppuStack_e = (undefined2 *******)0xdd8c;
                        FUN_21f2_2d26();
                      }
                      pppppppuStack_c = (undefined2 *******)0x22b2;
                      pppppppuStack_e = (undefined2 *******)0xddad;
                      FUN_21f2_2d26();
                    }
                    if (local_170 < 4) {
                      pppppppuStack_c = (undefined2 *******)0x22b2;
                      pppppppuStack_e = (undefined2 *******)0xddc6;
                      FUN_21f2_2d26();
                      pppppppuStack_c = (undefined2 *******)0x22b2;
                      pppppppuStack_e = (undefined2 *******)0xddd5;
                      FUN_21f2_2d26();
                    }
                    pppppppuStack_c = (undefined2 *******)0x22b2;
                    pppppppuStack_e = (undefined2 *******)0xdde5;
                    FUN_21f2_2d26();
                    pppppppuStack_c = (undefined2 *******)0x22b2;
                    uVar15 = 0x1bb4;
                    pppppppuStack_e = (undefined2 *******)0xddf5;
                    FUN_1def_07a4();
                    *(undefined2 *)0xc2c = 0;
                    if (local_170 == 5) {
                      *(undefined2 *)0xc2c = 1;
                    }
                  }
                  else {
                    *(undefined2 *)0xc22 = 1;
                    pppppppuStack_c = (undefined2 *******)0xbf48;
                    pppppppuStack_e = (undefined2 *******)0x22b2;
                    uStack_12._2_2_ = (int *)0xde28;
                    FUN_21f2_3454();
                    pppppppuStack_c = (undefined2 *******)0x2;
                    pppppppuStack_e = (undefined2 *******)0x11;
                    uStack_12._2_2_ = (int *)0xbf48;
                    uStack_12._0_2_ = (undefined2 *)0x22b2;
                    puStack_14 = (undefined1 *)0xde44;
                    FUN_1000_02b5();
                    pppppppuStack_c = (undefined2 *******)0xdef;
                    pppppppuStack_e = (undefined2 *******)0xde55;
                    FUN_21f2_2d26();
                    pppppppuStack_c = (undefined2 *******)0x22b2;
                    pppppppuStack_e = (undefined2 *******)0xde65;
                    FUN_21f2_2d26();
                    pppppppuStack_c = (undefined2 *******)0x22b2;
                    pppppppuStack_e = (undefined2 *******)0xde75;
                    FUN_21f2_2d26();
                    pppppppuStack_c = (undefined2 *******)0x22b2;
                    uVar15 = 0x22b2;
                    pppppppuStack_e = (undefined2 *******)0xde85;
                    FUN_21f2_2d26();
                    if (*(int *)0xce6 == 0) {
                      if (local_170 < 4) {
                        pppppppuStack_c = (undefined2 *******)0x22b2;
                        pppppppuStack_e = (undefined2 *******)0xdedc;
                        FUN_21f2_2d26();
                        pppppppuStack_c = (undefined2 *******)0x22b2;
                        pppppppuStack_e = (undefined2 *******)0xdeec;
                        FUN_21f2_2d26();
                        pppppppuStack_c = (undefined2 *******)0x22b2;
                        pppppppuStack_e = (undefined2 *******)0xdefc;
                        FUN_21f2_2d26();
                        pppppppuStack_c = (undefined2 *******)0x22b2;
                        uVar15 = 0x1bb4;
                        pppppppuStack_e = (undefined2 *******)0xdf0c;
                        FUN_1def_07a4();
                      }
                    }
                    else {
                      pppppppuStack_c = (undefined2 *******)0x22b2;
                      pppppppuStack_e = (undefined2 *******)0xde9f;
                      FUN_21f2_2d26();
                      pppppppuStack_c = (undefined2 *******)0x22b2;
                      pppppppuStack_e = (undefined2 *******)0xdeaf;
                      FUN_21f2_2d26();
                      pppppppuStack_c = (undefined2 *******)0x22b2;
                      uVar15 = 0x1bb4;
                      pppppppuStack_e = (undefined2 *******)0xdebf;
                      FUN_1def_07a4();
                    }
                    *(undefined2 *)0xc2c = 1;
                  }
                  *(undefined2 *)0xc1a = 1;
                  *(undefined2 *)0xc20 = 1;
                  if (*(int *)0xce6 != 0) {
                    *(undefined2 *)0xc1a = 0;
                  }
                  pppppppuStack_c = &local_168;
                  pppppppuStack_e = local_12a;
                  uStack_12._2_2_ = (int *)0x270f;
                  pppppppuVar14 = (undefined2 *******)0x1bb4;
                  puStack_14 = (undefined1 *)0xdf4a;
                  uStack_12._0_2_ = (undefined2 *)uVar15;
                  local_212 = FUN_1def_0904();
                  *(undefined2 *)0xc1a = 0;
                  *(undefined2 *)0xc20 = 0;
                  *(undefined2 *)0xc2c = 0;
                  if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
                  if ((*(int *)0xc18 != -2) || (*(byte *)0x126 < 3)) break;
                  FUN_1885_2ec3();
                  local_74 = (int *)0x0;
                  pppppppuStack_c = local_166;
                  pppppppuStack_e = local_168;
                  uStack_12._2_2_ = (int *)0x1b6e;
                  uStack_12._0_2_ = (undefined2 *)0xdf9d;
                  FUN_28b3_216a();
                }
                if (*(int *)0xc18 == 0) break;
                FUN_1885_2ec3();
                local_74 = (int *)0x0;
                FUN_28b3_0cb6();
                func_0x00029d78();
                uStack_12._2_2_ = (int *)0x22b2;
                uStack_12._0_2_ = (undefined2 *)0xdfcf;
                func_0x000299d1();
                uStack_12._2_2_ = (int *)0x22b2;
                uStack_12._0_2_ = (undefined2 *)0xdfd8;
                FUN_28b3_0cb6();
                uStack_12._2_2_ = (int *)0x22b2;
                uStack_12._0_2_ = (undefined2 *)0xdfdd;
                func_0x00029d78();
                local_18 = 0x22b2;
                puStack_1a = (undefined4 *)0xdfe7;
                func_0x000299d1();
                local_18 = 0x22b2;
                puStack_1a = (undefined4 *)0xdfec;
                func_0x0000507a();
              }
              if ((0x61ff < local_212) && (local_212 < 0x6b01)) {
                uVar10 = (int)(local_212 + 0x9f00U) >> 0xf;
                *(int *)0x1ce =
                     ((int)((local_212 + 0x9f00U ^ uVar10) - uVar10) >> 8 ^ uVar10) - uVar10;
              }
              if (((local_212 == -1) && (local_74 == (int *)0x0)) || (local_212 == 0x14)) {
                pppppppuVar14 = (undefined2 *******)0x1b6e;
                FUN_1885_2ec3();
                if (local_12c != 0) {
                  local_12c = 0;
                  goto LAB_3ab8_2e14;
                }
                if (local_170 < 4) {
                  if ((local_212 == -1) && (local_a0 != (undefined2 *******)0x0))
                  goto LAB_3ab8_2bc5;
                  goto LAB_3ab8_230c;
                }
                if (local_170 == 5) {
                  if (*(int *)0xce6 != 0) goto LAB_2bb4_4990_4;
                  if (local_74 != (int *)0x0) goto LAB_3ab8_2de5;
                  break;
                }
              }
              if ((local_212 == -1) && (local_74 != (int *)0x0)) {
                FUN_1885_2ec3();
                for (local_12e = 1; local_12e <= local_18; local_12e = local_12e + 1) {
                  local_16c = *(undefined2 *)0x148;
                  local_16a = *(undefined2 *)0x14a;
                  pppppppuStack_c = (undefined2 *******)0xe0f0;
                  func_0x0000daa6();
                  pppppppuStack_c = (undefined2 *******)0x885;
                  pppppppuStack_e = (undefined2 *******)0xe0fe;
                  func_0x00018779();
                }
                for (local_12e = 1; local_12e <= (int)local_a4; local_12e = local_12e + 1) {
                  local_6a = (int *)*(int *)0x152;
                  pppppppuStack_c = (undefined2 *******)0xe12c;
                  func_0x0000daa6();
                  pppppppuStack_c = (undefined2 *******)0xe135;
                  FUN_1def_186d();
                }
                if (local_1e != (undefined2 ******)0x0) {
                  local_6a = (int *)*(int *)0x150;
                  local_1e = (undefined2 ******)0x0;
                  pppppppuStack_c = (undefined2 *******)0xe154;
                  func_0x0000daa6();
                  pppppppuStack_c = (undefined2 *******)0xe15d;
                  func_0x000190c7();
                }
                func_0x0000abfa();
                pppppppuVar14 = (undefined2 *******)0x885;
                pppppppuStack_c = (undefined2 *******)0xe16c;
                func_0x0000b1d8();
                local_74 = (int *)0x0;
              }
              if ((local_170 == 5) ||
                 (((local_212 != 5 || (local_12c != 0)) && ((local_212 != 2 || (local_12c == 0))))))
              {
                if (local_212 == 1) {
                  if ((local_74 == (int *)0x0) || (local_158 != 0)) {
                    *(int *)0x1124 = *(int *)0x1124 + 1;
                    if (3 < *(int *)0x1124) {
                      *(undefined2 *)0x1124 = 0;
                    }
                  }
                  else {
                    if (*(int *)0xce6 != 0) goto LAB_2bb4_4990_4;
                    if (local_170 < 4) {
                      local_168 = local_20a;
                      local_166 = local_208;
                      FUN_28b3_0cb6();
                      pppppppuStack_c = (undefined2 *******)0xe2b3;
                      func_0x00029bb5();
                      FUN_28b3_0e53();
                      local_180 = local_21c;
                      local_17e = local_21a;
                      FUN_28b3_0cb6();
                      pppppppuStack_c = (undefined2 *******)0xe2dc;
                      func_0x00029bb5();
                      FUN_28b3_0e53();
                      local_68 = (undefined2 ******)0x1;
                      goto LAB_3ab8_423f;
                    }
                  }
                }
                if ((local_170 == 5) && (local_212 == 2)) {
                  local_a2 = (undefined2 *******)0x0;
                  local_212 = 0;
                  if (local_12c == 0) {
                    local_12c = 1;
                  }
                  else {
                    local_210 = -local_210;
                  }
                }
                if ((local_170 != 5) || (local_212 != 3)) {
                  if ((3 < local_170) || ((local_212 != 2 && (local_212 != 3)))) goto LAB_3ab8_37fd;
                  local_158 = local_212 + -1;
                  goto LAB_3ab8_398d;
                }
                pppppppuVar14 = (undefined2 *******)0x885;
                func_0x0000c3ca();
                pcVar5 = (code *)swi(0x3f);
                (*pcVar5)();
                if (*(int *)0x158 == 0) goto LAB_3ab8_2de5;
                goto LAB_2bb4_4990_4;
              }
              func_0x0000c3ca();
              FUN_28b3_0cb6();
              func_0x00029d78();
              uStack_12._2_2_ = (int *)0x22b2;
              uStack_12._0_2_ = (undefined2 *)0xe1c1;
              func_0x000299d1();
              uStack_12._2_2_ = (int *)0x22b2;
              uStack_12._0_2_ = (undefined2 *)0xe1ca;
              FUN_28b3_0cb6();
              uStack_12._2_2_ = (int *)0x22b2;
              uStack_12._0_2_ = (undefined2 *)0xe1cf;
              func_0x00029d78();
              local_18 = 0x22b2;
              puStack_1a = (undefined4 *)0xe1d9;
              func_0x000299d1();
              local_18 = 0x22b2;
              puStack_1a = (undefined4 *)0xe1e2;
              FUN_28b3_0cb6();
              local_18 = 0x22b2;
              puStack_1a = (undefined4 *)0xe1e7;
              func_0x00029d78();
              ppppppuStack_20 = (undefined2 ******)0x22b2;
              ppppppuStack_22 = (undefined2 ******)0xe1f1;
              func_0x000299d1();
              ppppppuStack_20 = (undefined2 ******)0x22b2;
              ppppppuStack_22 = (undefined2 ******)0xe1fa;
              FUN_28b3_0cb6();
              ppppppuStack_20 = (undefined2 ******)0x22b2;
              ppppppuStack_22 = (undefined2 ******)0xe1ff;
              func_0x00029d78();
              local_28 = (undefined2 *******)0x22b2;
              pppppppuStack_2a = (undefined2 *******)0xe209;
              func_0x000299d1();
              local_28 = (undefined2 *******)local_12c;
              pppppppuStack_2a = local_1fc;
              pppppppuVar14 = (undefined2 *******)0x2ab8;
              ppppppuStack_2e = (undefined2 ******)0xe217;
              local_258 = (undefined2 *******)func_0x0002c3ff();
              if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
            } while ((local_258 == (undefined2 *******)0xffff) ||
                    (local_258 == (undefined2 *******)0x0));
            goto LAB_3ab8_209d;
          }
          local_74 = (int *)0x0;
          goto LAB_3ab8_462e;
        }
        func_0x0000c3ca();
        pppppppuVar14 = (undefined2 *******)0x2ab8;
        pppppppuStack_c = (undefined2 *******)0xce1e;
        FUN_28b3_296e();
        if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
        iVar9 = *(int *)0xce6;
joined_r0x0003f2b8:
        if (iVar9 != 0) {
LAB_2bb4_4990_4:
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
          pppppppuStack_c = (undefined2 *******)0x32b2;
          pppppppuStack_e = (undefined2 *******)0x5db;
          FUN_32b2_6cc6();
          pppppppuStack_c = (undefined2 *******)0x32b2;
          pppppppuStack_e = (undefined2 *******)0x5e0;
          FUN_32b2_7258();
          puStack_14 = (undefined1 *)0x32b2;
          local_16 = 0x5ea;
          FUN_32b2_6eb1();
          puStack_14 = (undefined1 *)0x32b2;
          local_16 = 0x5f2;
          FUN_32b2_6cc6();
          puStack_14 = (undefined1 *)0x32b2;
          local_16 = 0x5f7;
          FUN_32b2_7258();
          uStack_1c = 0x32b2;
          local_1e = (undefined2 ******)0x601;
          FUN_32b2_6eb1();
          uStack_1c = uStack_66;
          local_1e = local_68;
          ppppppuStack_20 = (undefined2 ******)local_6a;
          ppppppuStack_22 = (undefined2 ******)uStack_6c;
          pppppppuStack_24 = local_4a;
          pppppppuStack_26 = local_4c;
          local_28 = (undefined2 *******)ppppppuStack_4e;
          pppppppuStack_2a = (undefined2 *******)ppppppuStack_50;
          ppppppuStack_2e = (undefined2 ******)0x622;
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
          local_88 = uStack_64;
          uStack_86 = local_62[0];
          local_a0 = local_8c;
          local_9e = local_8a;
          pppppppuVar14 = &pppppppuStack_2a;
          puVar8 = (undefined2 *)&stack0x001a;
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar2 = pppppppuVar14;
            pppppppuVar14 = pppppppuVar14 + 1;
            puVar21 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar21;
          }
          ppppppuStack_2e = (undefined2 ******)0x684;
          iVar9 = func_0x0003fdaf();
          uVar17 = 0;
          uVar18 = iVar9 == 0;
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
          if ((bool)uVar17) {
            iStack_38 = 0;
          }
          else {
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
            pppppppuStack_c = (undefined2 *******)uStack_bc;
            pppppppuStack_e = (undefined2 *******)uStack_be;
            uStack_12._2_2_ = (int *)0x32b2;
            uStack_12._0_2_ = (undefined2 *)0x774;
            FUN_32b2_7592();
            pppppppuStack_c = (undefined2 *******)0x77e;
            FUN_32b2_6d14();
            pppppppuStack_c = (undefined2 *******)0x786;
            FUN_32b2_70dc();
            pppppppuStack_c = (undefined2 *******)0x78e;
            FUN_32b2_6d14();
            pppppppuStack_c = (undefined2 *******)0x797;
            FUN_32b2_710c();
            pppppppuStack_c = (undefined2 *******)0x79c;
            FUN_32b2_7182();
            pppppppuStack_c = (undefined2 *******)0x7a5;
            FUN_32b2_6e99();
            pppppppuStack_c = (undefined2 *******)0x7ad;
            FUN_32b2_710c();
            pppppppuStack_c = (undefined2 *******)0x7b5;
            FUN_32b2_7154();
            pppppppuStack_c = (undefined2 *******)0x7be;
            FUN_32b2_6e99();
            pppppppuStack_c = (undefined2 *******)0x7c7;
            FUN_32b2_6eb1();
            pppppppuStack_c = (undefined2 *******)&uStack_64;
            pppppppuStack_e = (undefined2 *******)0x32b2;
            uStack_12._2_2_ = (int *)0x7d9;
            FUN_32b2_6cc6();
            pppppppuStack_e = (undefined2 *******)0x32b2;
            uStack_12._2_2_ = (int *)0x7de;
            FUN_32b2_7258();
            local_16 = 0x32b2;
            local_18 = 0x7e8;
            FUN_32b2_6eb1();
            local_16 = 0x32b2;
            local_18 = 0x7f0;
            FUN_32b2_6cc6();
            local_16 = 0x32b2;
            local_18 = 0x7f5;
            FUN_32b2_7258();
            local_1e = (undefined2 ******)0x32b2;
            ppppppuStack_20 = (undefined2 ******)0x7ff;
            FUN_32b2_6eb1();
            local_1e = (undefined2 ******)uStack_66;
            ppppppuStack_20 = local_68;
            ppppppuStack_22 = (undefined2 ******)local_6a;
            pppppppuStack_24 = (undefined2 *******)uStack_6c;
            pppppppuStack_26 = local_4a;
            local_28 = local_4c;
            pppppppuStack_2a = (undefined2 *******)ppppppuStack_4e;
            ppppppuStack_2e = (undefined2 ******)0x32b2;
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
            pppppppuStack_c = (undefined2 *******)0x84f;
            FUN_32b2_6cc6();
            pppppppuStack_c = (undefined2 *******)0x857;
            FUN_32b2_6cc6();
            pppppppuStack_c = (undefined2 *******)0x85c;
            FUN_32b2_7191();
            if ((bool)uVar18) {
              uStack_64 = param_2;
              local_62[0] = param_3;
            }
            pppppppuStack_c = (undefined2 *******)0x872;
            FUN_32b2_6cc6();
            pppppppuStack_c = (undefined2 *******)0x87a;
            FUN_32b2_6cc6();
            pppppppuStack_c = (undefined2 *******)0x87f;
            FUN_32b2_7191();
            if ((bool)uVar18) {
              local_8c = param_4;
              local_8a = param_5;
            }
            *in_stack_0000003a = uStack_64;
            in_stack_0000003a[1] = local_62[0];
            *in_stack_0000003c = (int)local_8c;
            in_stack_0000003c[1] = local_8a;
            *in_stack_0000003e = uStack_64;
            in_stack_0000003e[1] = local_62[0];
            *in_stack_00000040 = (int)local_8c;
            in_stack_00000040[1] = local_8a;
            iStack_38 = iStack_38 + 1;
            uVar18 = iStack_38 == 0;
            pppppppuStack_c = (undefined2 *******)0x8d7;
            FUN_32b2_6d14();
            pppppppuStack_c = (undefined2 *******)0x8e0;
            FUN_32b2_6d14();
            pppppppuStack_c = (undefined2 *******)0x8e5;
            FUN_32b2_7191();
            if (!(bool)uVar17 && !(bool)uVar18) {
              pppppppuStack_c = (undefined2 *******)uStack_ba;
              pppppppuStack_e = (undefined2 *******)uStack_bc;
              uStack_12._2_2_ = (int *)uStack_be;
              uStack_12._0_2_ = (undefined2 *)0x32b2;
              puStack_14 = (undefined1 *)0x8ff;
              FUN_32b2_7592();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x909;
              FUN_32b2_6d14();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x911;
              FUN_32b2_7154();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x916;
              FUN_32b2_6fd6();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x91e;
              FUN_32b2_6d14();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x927;
              FUN_32b2_710c();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x92c;
              FUN_32b2_7182();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x935;
              FUN_32b2_6e99();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x93d;
              FUN_32b2_710c();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x945;
              FUN_32b2_7154();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x94e;
              FUN_32b2_6e99();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x957;
              FUN_32b2_6eb1();
              pppppppuStack_c = &local_8c;
              pppppppuStack_e = (undefined2 *******)&uStack_64;
              uStack_12._2_2_ = (int *)0x32b2;
              uStack_12._0_2_ = (undefined2 *)0x969;
              FUN_32b2_6cc6();
              uStack_12._2_2_ = (int *)0x32b2;
              uStack_12._0_2_ = (undefined2 *)0x96e;
              FUN_32b2_7258();
              local_18 = 0x32b2;
              puStack_1a = (undefined4 *)0x978;
              FUN_32b2_6eb1();
              local_18 = 0x32b2;
              puStack_1a = (undefined4 *)0x980;
              FUN_32b2_6cc6();
              local_18 = 0x32b2;
              puStack_1a = (undefined4 *)0x985;
              FUN_32b2_7258();
              ppppppuStack_20 = (undefined2 ******)0x32b2;
              ppppppuStack_22 = (undefined2 ******)0x98f;
              FUN_32b2_6eb1();
              ppppppuStack_20 = (undefined2 ******)uStack_66;
              ppppppuStack_22 = local_68;
              pppppppuStack_24 = (undefined2 *******)local_6a;
              pppppppuStack_26 = (undefined2 *******)uStack_6c;
              local_28 = local_4a;
              pppppppuStack_2a = local_4c;
              ppppppuStack_2e = ppppppuStack_50;
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
              uStack_44 = 0x9d4;
              FUN_3ab8_5089();
              uVar17 = &stack0x0000 == (undefined1 *)0xa;
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x9df;
              FUN_32b2_6cc6();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x9e7;
              FUN_32b2_6cc6();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0x9ec;
              FUN_32b2_7191();
              if ((bool)uVar17) {
                uStack_64 = param_2;
                local_62[0] = param_3;
              }
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0xa02;
              FUN_32b2_6cc6();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0xa0a;
              FUN_32b2_6cc6();
              pppppppuStack_c = (undefined2 *******)0x32b2;
              pppppppuStack_e = (undefined2 *******)0xa0f;
              FUN_32b2_7191();
              if ((bool)uVar17) {
                local_8c = param_4;
                local_8a = param_5;
              }
              *in_stack_0000003e = uStack_64;
              in_stack_0000003e[1] = local_62[0];
              *in_stack_00000040 = (int)local_8c;
              in_stack_00000040[1] = local_8a;
              iStack_38 = iStack_38 + 1;
            }
          }
          return iStack_38;
        }
      }
      goto LAB_3ab8_209d;
    }
    local_74 = (int *)0x0;
    FUN_28b3_0cb6();
    func_0x00029d78();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xcda8;
    func_0x000299d1();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xcdb1;
    FUN_28b3_0cb6();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xcdb6;
    func_0x00029d78();
    local_18 = 0x22b2;
    puStack_1a = (undefined4 *)0xcdc0;
    func_0x000299d1();
    local_18 = 0x22b2;
    pppppppuVar14 = (undefined2 *******)0x3bf;
    puStack_1a = (undefined4 *)0xcdc5;
    func_0x0000507a();
  } while( true );
LAB_3ab8_37fd:
  if ((local_170 < 4) && (local_212 == 4)) {
    local_a2 = (undefined2 *******)0x0;
    local_12c = 1;
  }
  if (local_a2 == (undefined2 *******)0x0) goto LAB_3ab8_2e19;
  local_258 = (undefined2 *******)*(uint *)0x148;
  local_256 = (undefined2 *******)*(int *)0x14a;
  if (local_170 < 4) {
    iVar9 = *(int *)0x13e - (uint)(*(uint *)0x13c < 2);
    if (((int)local_256 <= iVar9) &&
       (((int)local_256 < iVar9 || (local_258 <= (undefined2 *******)(*(uint *)0x13c - 2))))) {
      *(int *)0x148 = (int)(local_258 + 1);
      *(int *)0x14a = (int)local_256 + (uint)((undefined2 *******)0xfffd < local_258);
    }
  }
  pppppppuStack_c = (undefined2 *******)0x2;
  uStack_12._2_2_ = (int *)0xe401;
  pppppppuStack_e = pppppppuVar14;
  local_254 = (undefined2 ******)func_0x00015409();
  *(uint *)0x148 = (uint)local_258;
  *(int *)0x14a = (int)local_256;
  local_68 = (undefined2 ******)0x0;
  if (local_254 == (undefined2 ******)0x0) {
    *(undefined2 *)0xc1e = 0;
    goto LAB_3ab8_2e19;
  }
  *(undefined2 *)0xc1e = 0;
  if (((local_74 == (int *)0x0) || (local_a2 != (undefined2 *******)0x2)) ||
     (uVar17 = local_158 == 0, !(bool)uVar17)) {
    local_158 = 0;
    pppppppuVar14 = (undefined2 *******)0x11f2;
LAB_3ab8_398d:
    local_74 = (int *)0x0;
    *(undefined2 *)0xc1e = 0;
    if (local_158 == 0) goto LAB_3ab8_3e8a;
    goto LAB_3ab8_39a0;
  }
  FUN_28b3_0cb6();
  FUN_28b3_0cb6();
  FUN_28b3_1181();
  if ((bool)uVar17) {
    FUN_28b3_0cb6();
    FUN_28b3_0cb6();
    FUN_28b3_1181();
    if (!(bool)uVar17) goto LAB_3ab8_3913;
    pppppppuStack_c = (undefined2 *******)0xe48a;
    func_0x00012276();
    local_1fc[0]._0_1_ = 0;
    goto LAB_3ab8_2e19;
  }
LAB_3ab8_3913:
  pppppppuVar7 = local_166;
  pppppppuVar14 = local_168;
  iVar9 = local_17e;
  ppppppuVar6 = local_180;
  local_168 = local_20a;
  local_166 = local_208;
  local_20a = pppppppuVar14;
  local_208 = pppppppuVar7;
  local_92 = local_180;
  local_90 = local_17e;
  local_180 = local_21c;
  local_17e = local_21a;
  local_21c = ppppppuVar6;
  local_21a = iVar9;
  local_68 = (undefined2 ******)0x1;
LAB_3ab8_423f:
  do {
    pppppppuStack_c = (undefined2 *******)0xedc8;
    func_0x0000daa6();
    local_74 = (int *)0x0;
    local_18 = 0;
    local_a4 = (undefined2 ******)0x0;
    local_1e = (undefined2 ******)0x0;
    local_b4 = (undefined2 ******)0x0;
    if (local_170 < 4) {
      FUN_28b3_0cb6();
      FUN_28b3_100d();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      FUN_28b3_100d();
      FUN_28b3_0e53();
      pppppppuStack_c = &local_b4;
      pppppppuStack_e = &local_a4;
      uStack_12._2_2_ = &local_18;
      uStack_12._0_2_ = (undefined2 *)0x22b2;
      puStack_14 = (undefined1 *)0xee3c;
      FUN_28b3_0cb6();
      uStack_12._0_2_ = (undefined2 *)0x22b2;
      puStack_14 = (undefined1 *)0xee41;
      func_0x00029d78();
      puStack_1a = (undefined4 *)0x22b2;
      uStack_1c = 0xee4b;
      func_0x000299d1();
      puStack_1a = (undefined4 *)0x22b2;
      uStack_1c = 0xee54;
      FUN_28b3_0cb6();
      puStack_1a = (undefined4 *)0x22b2;
      uStack_1c = 0xee59;
      func_0x00029d78();
      ppppppuStack_22 = (undefined2 ******)0x22b2;
      pppppppuStack_24 = (undefined2 *******)0xee63;
      func_0x000299d1();
      ppppppuStack_22 = &local_13e;
      pppppppuStack_24 = &local_c6;
      pppppppuStack_26 = (undefined2 *******)0x22b2;
      local_28 = (undefined2 *******)0xee76;
      FUN_28b3_0cb6();
      pppppppuStack_26 = (undefined2 *******)0x22b2;
      local_28 = (undefined2 *******)0xee7b;
      func_0x00029d78();
      ppppppuStack_2e = (undefined2 ******)0x22b2;
      uStack_30 = 0xee85;
      func_0x000299d1();
      ppppppuStack_2e = (undefined2 ******)0x22b2;
      uStack_30 = 0xee8e;
      FUN_28b3_0cb6();
      ppppppuStack_2e = (undefined2 ******)0x22b2;
      uStack_30 = 0xee93;
      func_0x00029d78();
      uStack_36 = 0x22b2;
      iStack_38 = 0xee9d;
      func_0x000299d1();
      uStack_36 = 0x22b2;
      iStack_38 = 0xeea6;
      FUN_28b3_0cb6();
      uStack_36 = 0x22b2;
      iStack_38 = 0xeeab;
      func_0x00029d78();
      uStack_3e = 0x22b2;
      uStack_40 = 0xeeb5;
      func_0x000299d1();
      uStack_3e = 0x22b2;
      uStack_40 = 0xeebe;
      FUN_28b3_0cb6();
      uStack_3e = 0x22b2;
      uStack_40 = 0xeec3;
      func_0x00029d78();
      local_46 = 0x22b2;
      local_48 = (undefined2 ******)0xeecd;
      func_0x000299d1();
      local_46 = local_12c;
      local_48 = local_68;
      local_4a = local_1fc;
      local_4c = (undefined2 *******)0x22b2;
      ppppppuStack_4e = (undefined2 ******)0xeede;
      local_74 = (int *)FUN_2b6e_025a();
      if (local_12c == 0) goto LAB_3ab8_4371;
    }
    else {
LAB_3ab8_4371:
      if (local_170 != 5) goto LAB_3ab8_2e14;
      FUN_28b3_0cb6();
      func_0x00029d78();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xef13;
      func_0x000299d1();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xef1c;
      FUN_28b3_0cb6();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xef21;
      func_0x00029d78();
      local_18 = 0x22b2;
      puStack_1a = (undefined4 *)0xef2b;
      func_0x000299d1();
      local_18 = 0x22b2;
      puStack_1a = (undefined4 *)0xef34;
      FUN_28b3_0cb6();
      local_18 = 0x22b2;
      puStack_1a = (undefined4 *)0xef39;
      func_0x00029d78();
      ppppppuStack_20 = (undefined2 ******)0x22b2;
      ppppppuStack_22 = (undefined2 ******)0xef43;
      func_0x000299d1();
      ppppppuStack_20 = (undefined2 ******)0x22b2;
      ppppppuStack_22 = (undefined2 ******)0xef4c;
      FUN_28b3_0cb6();
      ppppppuStack_20 = (undefined2 ******)0x22b2;
      ppppppuStack_22 = (undefined2 ******)0xef51;
      func_0x00029d78();
      local_28 = (undefined2 *******)0x22b2;
      pppppppuStack_2a = (undefined2 *******)0xef5b;
      func_0x000299d1();
      local_28 = (undefined2 *******)0x22b2;
      pppppppuStack_2a = (undefined2 *******)0xef60;
      iVar9 = FUN_1def_043a();
      if (iVar9 == 0) goto LAB_3ab8_2e14;
      FUN_28b3_0cb6();
      func_0x00029d78();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xef86;
      func_0x000299d1();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xef8f;
      FUN_28b3_0cb6();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xef94;
      func_0x00029d78();
      local_18 = 0x22b2;
      puStack_1a = (undefined4 *)0xef9e;
      func_0x000299d1();
      local_18 = 1;
      puStack_1a = (undefined4 *)0x22b2;
      uVar15 = 0x1bb4;
      uStack_1c = 0xefa7;
      puVar8 = (undefined2 *)FUN_1def_05d1();
      local_17c = *puVar8;
      local_17a = puVar8[1];
      local_132 = local_20a;
      local_130 = local_208;
      local_160 = local_21c;
      local_15e = local_21a;
      uVar17 = 0;
      uVar18 = local_12c == 0;
      if (!(bool)uVar18) {
        FUN_28b3_0cb6();
        func_0x00029ae7();
        FUN_28b3_0cb6();
        func_0x00029ae7();
        FUN_28b3_1181();
        if ((bool)uVar17) {
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          FUN_28b3_1181();
          if (!(bool)uVar17 && !(bool)uVar18) {
            FUN_28b3_0cb6();
            func_0x00029af6();
            FUN_28b3_0e53();
            FUN_28b3_0cb6();
            func_0x00029af6();
            FUN_28b3_0e53();
          }
          uVar15 = 0x22b2;
        }
        else {
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          uVar15 = 0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar17) {
            FUN_28b3_0cb6();
            func_0x00029af6();
            FUN_28b3_0e53();
            FUN_28b3_0cb6();
            func_0x00029af6();
            uVar15 = 0x22b2;
            FUN_28b3_0e53();
          }
        }
      }
      local_74 = (int *)0x1;
      pppppppuStack_c = (undefined2 *******)uVar15;
      if (local_12c == 0) goto LAB_3ab8_452f;
      if (1 < *(byte *)0x114a) {
        local_c6 = local_20a;
        local_c4 = local_208;
        local_13e = local_21c;
        local_13c = local_21a;
      }
      *(uint *)0xb30c = (uint)local_132;
      *(int *)0xb30e = (int)local_130;
      *(int *)0xb37e = (int)local_160;
      *(int *)0xb380 = local_15e;
      if (local_210 < 1) {
        local_9c = 0xffff;
      }
      else {
        local_9c = 0;
      }
      pppppppuStack_e = (undefined2 *******)0xf160;
      FUN_28b3_0cb6();
      pppppppuStack_c = (undefined2 *******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xf165;
      func_0x00029d78();
      puStack_14 = (undefined1 *)0x22b2;
      local_16 = 0xf16f;
      func_0x000299d1();
      puStack_14 = (undefined1 *)local_1fc;
      local_16 = 0x22b2;
      local_18 = -0xe87;
      iVar9 = func_0x0002b5e9();
      if (iVar9 != 0) {
        local_1e = (undefined2 ******)((int)local_1e + 1);
        pppppppuStack_c = (undefined2 *******)0xf190;
        uVar19 = func_0x00000398();
        puVar1 = (uint *)((int)uVar19 + 0x16);
        *puVar1 = *puVar1 | 0x1000;
      }
      local_82 = 1;
    }
LAB_3ab8_3e8f:
    while (local_158 == 0) {
      *(undefined2 *)0xc1e = 0;
      func_0x0002b07d();
      if (local_170 < 4) {
        FUN_1885_2ec3();
        if (*(byte *)0x114a < 2) {
          FUN_28b3_0cb6();
          func_0x00029d78();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xea55;
          func_0x000299d1();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xea5e;
          FUN_28b3_0cb6();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xea63;
          func_0x00029d78();
          local_18 = 0x22b2;
          puStack_1a = (undefined4 *)0xea6d;
          func_0x000299d1();
          local_18 = 9;
          puStack_1a = (undefined4 *)0x1;
                    /* WARNING: Call to offcut address within same function */
          uStack_1c = 0x22b2;
          local_1e = (undefined2 ******)0xea7a;
          func_0x00030897();
        }
        FUN_28b3_0cb6();
        func_0x00029d78();
        uStack_12._2_2_ = (int *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xea95;
        func_0x000299d1();
        uStack_12._2_2_ = (int *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xea9e;
        FUN_28b3_0cb6();
        uStack_12._2_2_ = (int *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xeaa3;
        func_0x00029d78();
        local_18 = 0x22b2;
        puStack_1a = (undefined4 *)0xeaad;
        func_0x000299d1();
        local_18 = 0;
        puStack_1a = (undefined4 *)0x2;
                    /* WARNING: Call to offcut address within same function */
        uStack_1c = 0x22b2;
        local_1e = (undefined2 ******)0xeaba;
        func_0x00030897();
      }
      pppppppuStack_c = local_12a;
      pppppppuStack_e = (undefined2 *******)0x2ab8;
      uStack_12._2_2_ = (int *)0xeacf;
      FUN_21f2_3454();
      pppppppuStack_c = (undefined2 *******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xeae0;
      FUN_21f2_2d26();
      pppppppuStack_c = (undefined2 *******)0x22b2;
      pppppppuStack_e = (undefined2 *******)0xeaf0;
      FUN_21f2_2d26();
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xcb8 = 1;
      if (local_12c != 0) {
        *(undefined2 *)0xc2c = 1;
      }
      pppppppuStack_c = &local_20a;
      pppppppuStack_e = local_12a;
      uStack_12._2_2_ = (int *)0x270f;
      uStack_12._0_2_ = (undefined2 *)0x22b2;
      pppppppuVar14 = (undefined2 *******)0x1bb4;
      puStack_14 = (undefined1 *)0xeb28;
      local_212 = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xcb8 = 0;
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
      if ((0x61ff < local_212) && (local_212 < 0x6b01)) {
        uVar10 = (int)(local_212 + 0x9f00U) >> 0xf;
        *(int *)0x1ce = ((int)((local_212 + 0x9f00U ^ uVar10) - uVar10) >> 8 ^ uVar10) - uVar10;
      }
      if (local_212 == -1) {
        if (local_12c == 0) goto LAB_3ab8_2e14;
        FUN_1885_2ec3();
        if (local_82 < 1) goto LAB_3ab8_2e14;
        for (local_12e = 1; local_12e <= local_18; local_12e = local_12e + 1) {
          local_16c = *(undefined2 *)0x148;
          local_16a = *(undefined2 *)0x14a;
          pppppppuStack_c = (undefined2 *******)0xebcc;
          func_0x0000daa6();
          pppppppuStack_c = (undefined2 *******)0x885;
          pppppppuStack_e = (undefined2 *******)0xebda;
          func_0x00018779();
        }
        for (local_12e = 1; local_12e <= (int)local_a4; local_12e = local_12e + 1) {
          local_6a = (int *)*(int *)0x152;
          pppppppuStack_c = (undefined2 *******)0xec08;
          func_0x0000daa6();
          pppppppuStack_c = (undefined2 *******)0xec11;
          FUN_1def_186d();
        }
        if (local_1e != (undefined2 ******)0x0) {
          local_6a = (int *)*(int *)0x150;
          local_1e = (undefined2 ******)0x0;
          pppppppuStack_c = (undefined2 *******)0xec30;
          func_0x0000daa6();
          pppppppuStack_c = (undefined2 *******)0xec39;
          func_0x000190c7();
        }
        if (local_b4 != (undefined2 ******)0x0) {
          local_16c = *(undefined2 *)0x14c;
          local_16a = *(undefined2 *)0x14e;
          local_b4 = (undefined2 ******)0x0;
          pppppppuStack_c = (undefined2 *******)0xec60;
          func_0x0000daa6();
          pppppppuStack_c = (undefined2 *******)0x885;
          pppppppuStack_e = (undefined2 *******)0xec6e;
          FUN_13bf_0327();
        }
        func_0x0000abfa();
        pppppppuStack_c = (undefined2 *******)0xec7e;
        func_0x0000b1d8();
        local_74 = (int *)0x0;
        local_82 = 0;
        pppppppuStack_c = (undefined2 *******)0xec8e;
        func_0x0001470b();
      }
      else {
        if ((local_212 == 0x14) && (local_12c != 0)) {
          pppppppuVar14 = (undefined2 *******)0x1b6e;
          FUN_1885_2ec3();
          if (*(int *)0xce6 != 0) goto LAB_2bb4_4990_4;
          if (local_170 < 4) goto LAB_3ab8_230c;
          if (local_170 == 5) goto LAB_3ab8_209d;
        }
        if (local_a2 != (undefined2 *******)0x0) {
          local_258 = (undefined2 *******)*(uint *)0x148;
          local_256 = (undefined2 *******)*(int *)0x14a;
          if (local_170 < 4) {
            iVar9 = *(int *)0x13e - (uint)(*(uint *)0x13c < 2);
            if (((int)local_256 <= iVar9) &&
               (((int)local_256 < iVar9 || (local_258 <= (undefined2 *******)(*(uint *)0x13c - 2))))
               ) {
              *(int *)0x148 = (int)(local_258 + 1);
              *(int *)0x14a = (int)local_256 + (uint)((undefined2 *******)0xfffd < local_258);
            }
          }
          pppppppuStack_c = (undefined2 *******)0x2;
          uStack_12._2_2_ = (int *)0xed39;
          pppppppuStack_e = pppppppuVar14;
          local_254 = (undefined2 ******)func_0x00015409();
          *(uint *)0x148 = (uint)local_258;
          *(int *)0x14a = (int)local_256;
          if (local_254 == (undefined2 ******)0x0) {
            local_a2 = (undefined2 *******)0x0;
          }
        }
        *(undefined2 *)0xc1e = 0;
        uVar17 = local_a2 == (undefined2 *******)0x0;
        if (!(bool)uVar17) {
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          FUN_28b3_1181();
          if (!(bool)uVar17) break;
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          FUN_28b3_1181();
          if (!(bool)uVar17) break;
          pppppppuStack_c = (undefined2 *******)0xedb6;
          func_0x00012276();
        }
      }
    }
    local_68 = (undefined2 ******)0x0;
  } while( true );
LAB_3ab8_39a0:
  if (*(int *)0x158 != 0) goto LAB_3ab8_3b20;
  FUN_1885_2ec3();
  if (*(byte *)0x114a < 2) {
    FUN_28b3_0cb6();
    func_0x00029d78();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xe551;
    func_0x000299d1();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xe55a;
    FUN_28b3_0cb6();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xe55f;
    func_0x00029d78();
    local_18 = 0x22b2;
    puStack_1a = (undefined4 *)0xe569;
    func_0x000299d1();
    local_18 = 9;
    puStack_1a = (undefined4 *)0x1;
                    /* WARNING: Call to offcut address within same function */
    uStack_1c = 0x22b2;
    local_1e = (undefined2 ******)0xe576;
    func_0x00030897();
  }
  FUN_28b3_0cb6();
  func_0x00029d78();
  uStack_12._2_2_ = (int *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xe591;
  func_0x000299d1();
  uStack_12._2_2_ = (int *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xe59a;
  FUN_28b3_0cb6();
  uStack_12._2_2_ = (int *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xe59f;
  func_0x00029d78();
  local_18 = 0x22b2;
  puStack_1a = (undefined4 *)0xe5a9;
  func_0x000299d1();
  local_18 = 0;
  puStack_1a = (undefined4 *)0x2;
                    /* WARNING: Call to offcut address within same function */
  uStack_1c = 0x22b2;
  local_1e = (undefined2 ******)0xe5b6;
  func_0x00030897();
  pppppppuStack_c = local_12a;
  pppppppuStack_e = (undefined2 *******)0x2ab8;
  uStack_12._2_2_ = (int *)0xe5cb;
  FUN_21f2_3454();
  *(undefined2 *)0xc20 = 0;
  pppppppuStack_c = &local_168;
  pppppppuStack_e = local_12a;
  uStack_12._2_2_ = (int *)0x270f;
  uStack_12._0_2_ = (undefined2 *)0x22b2;
  pppppppuVar14 = (undefined2 *******)0x1bb4;
  puStack_14 = (undefined1 *)0xe5f1;
  local_212 = FUN_1def_0904();
  if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
  if (local_212 != -1) goto LAB_3ab8_3a97;
  FUN_1885_2ec3();
  goto LAB_3ab8_2e14;
LAB_3ab8_3a97:
  local_20e._2_2_ = 0;
  local_20e._0_2_ = 0;
  local_20e = 0;
  if (local_a2 != (undefined2 *******)0x0) {
    FUN_28b3_0cb6();
    func_0x00029d78();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xe643;
    func_0x000299d1();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xe64c;
    FUN_28b3_0cb6();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xe651;
    func_0x00029d78();
    local_18 = 0x22b2;
    puStack_1a = (undefined4 *)0xe65b;
    func_0x000299d1();
    local_18 = 0x22b2;
    pppppppuVar14 = (undefined2 *******)0x11f2;
    puStack_1a = (undefined4 *)0xe660;
    local_20e = func_0x0001765f();
    if (local_20e < 0) {
LAB_3ab8_3b20:
      if (*(int *)0x158 == 0) {
        pppppppuStack_e = (undefined2 *******)0xe6c3;
        pppppppuStack_c = pppppppuVar14;
        puVar21 = (undefined2 *)func_0x00000271();
        puVar8 = (undefined2 *)puVar21;
        pppppppuVar14 = &local_4c;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          pppppppuVar3 = pppppppuVar14;
          pppppppuVar14 = pppppppuVar14 + 1;
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          *pppppppuVar3 = (undefined2 ******)*puVar2;
        }
        *(int *)0xb37e = (int)local_48;
        *(int *)0xb380 = local_46;
        FUN_28b3_0cb6();
        FUN_28b3_0e3b();
        FUN_28b3_0e53();
        local_5e = local_48;
        local_5c = local_46;
        FUN_28b3_0cb6();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e53();
        FUN_28b3_0cb6();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e53();
        pppppppuStack_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0xe755;
        local_250 = (undefined2 *)func_0x0000013f();
        puVar13 = (undefined2 *)local_250;
        puVar8 = local_62;
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar2 = puVar13;
          puVar13 = puVar13 + 1;
          puVar21 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar21;
        }
        pppppppuStack_c = &local_254;
        pppppppuStack_e = &local_258;
        puStack_14 = (undefined1 *)0x0;
        local_16 = 0;
        local_18 = 0;
        puStack_1a = (undefined4 *)0xe790;
        uStack_12 = local_20e;
        FUN_1def_2b59();
        if (local_158 == 1) {
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          func_0x00029d78();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xe7be;
          func_0x000299d1();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xe7c7;
          FUN_28b3_0cb6();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xe7cc;
          func_0x00029d78();
          local_18 = 0x22b2;
          puStack_1a = (undefined4 *)0xe7d6;
          func_0x000299d1();
          *(undefined2 *)0xc1e = 1;
          local_18 = 1;
          puStack_1a = (undefined4 *)0x22b2;
          uStack_1c = 0xe7e2;
          FUN_1def_05d1();
          uVar17 = (undefined1 *)0xffed < &local_18;
          FUN_28b3_0cb6();
          FUN_28b3_1181();
          if ((bool)uVar17) {
            FUN_28b3_0cb6();
            FUN_28b3_0cb6();
            func_0x00029d78();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xe819;
            func_0x000299d1();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xe822;
            FUN_28b3_0cb6();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xe827;
            func_0x00029d78();
            local_18 = 0x22b2;
            puStack_1a = (undefined4 *)0xe831;
            func_0x000299d1();
            local_18 = 1;
            puStack_1a = (undefined4 *)0x22b2;
            uStack_1c = 0xe83a;
            FUN_1def_05d1();
            uVar17 = (undefined1 *)0xffed < &local_18;
            FUN_28b3_0cb6();
            FUN_28b3_1181();
            if ((bool)uVar17) {
              local_168 = local_258;
              local_166 = local_256;
              local_180 = local_254;
              local_17e = local_252;
            }
            else {
              local_168 = local_20a;
              local_166 = local_208;
              local_180 = local_21c;
              local_17e = local_21a;
            }
            local_20a = local_4c;
            local_208 = local_4a;
            local_21c = local_48;
            local_21a = local_46;
          }
          else {
            local_168 = local_4c;
            local_166 = local_4a;
            local_180 = local_48;
            local_17e = local_46;
            FUN_28b3_0cb6();
            FUN_28b3_0cb6();
            func_0x00029d78();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xe8ef;
            func_0x000299d1();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xe8f8;
            FUN_28b3_0cb6();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xe8fd;
            func_0x00029d78();
            local_18 = 0x22b2;
            puStack_1a = (undefined4 *)0xe907;
            func_0x000299d1();
            local_18 = 1;
            puStack_1a = (undefined4 *)0x22b2;
            uStack_1c = 0xe910;
            FUN_1def_05d1();
            uVar17 = (undefined1 *)0xffed < &local_18;
            uVar18 = &stack0x0000 == (undefined1 *)0x6;
            FUN_28b3_0cb6();
            FUN_28b3_1181();
            if (!(bool)uVar17 && !(bool)uVar18) {
              local_20a = local_258;
              local_208 = local_256;
              local_21c = local_254;
              local_21a = local_252;
            }
          }
        }
        else {
          *(undefined2 *)0xc1e = 0xffff;
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          func_0x00029d78();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xe970;
          func_0x000299d1();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xe979;
          FUN_28b3_0cb6();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xe97e;
          func_0x00029d78();
          local_18 = 0x22b2;
          puStack_1a = (undefined4 *)0xe988;
          func_0x000299d1();
          local_18 = 1;
          puStack_1a = (undefined4 *)0x22b2;
          uStack_1c = 0xe991;
          FUN_1def_05d1();
          uVar17 = (undefined1 *)0xffed < &local_18;
          FUN_28b3_0cb6();
          FUN_28b3_1181();
          if ((bool)uVar17) {
            local_168 = local_258;
            local_166 = local_256;
            local_180 = local_254;
            local_17e = local_252;
          }
          else {
            local_168 = local_20a;
            local_166 = local_208;
            local_180 = local_21c;
            local_17e = local_21a;
            local_20a = local_258;
            local_208 = local_256;
            local_21c = local_254;
            local_21a = local_252;
          }
        }
LAB_3ab8_3e8a:
        local_82 = -1;
        goto LAB_3ab8_3e8f;
      }
      goto LAB_2bb4_4990_4;
    }
    pppppppuStack_c = (undefined2 *******)0x11f2;
    pppppppuStack_e = (undefined2 *******)0xe686;
    FUN_1000_0599();
    pppppppuStack_c = (undefined2 *******)0xdef;
    pppppppuVar14 = (undefined2 *******)0x11f2;
    pppppppuStack_e = (undefined2 *******)0xe695;
    func_0x00012276();
    *(undefined2 *)0xc22 = 1;
  }
  goto LAB_3ab8_39a0;
LAB_3ab8_230c:
  do {
    local_a0 = (undefined2 *******)0x0;
    do {
      do {
        uVar17 = *(byte *)0x114a == 2;
        if (1 < *(byte *)0x114a) goto LAB_3ab8_26e1;
        pppppppuStack_c = (undefined2 *******)0xcea6;
        func_0x0002ac38();
        local_232 = 0;
        FUN_28b3_0cb6();
        FUN_28b3_0cb6();
        FUN_28b3_1181();
        if ((bool)uVar17) {
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          FUN_28b3_1181();
          if (!(bool)uVar17) goto LAB_3ab8_239d;
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          FUN_28b3_1181();
          if (!(bool)uVar17) goto LAB_3ab8_239d;
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          uVar15 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar17) goto LAB_3ab8_239d;
        }
        else {
LAB_3ab8_239d:
          pppppppuStack_c = (undefined2 *******)0x22b2;
          pppppppuStack_e = (undefined2 *******)0xcf2b;
          FUN_21f2_3454();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          pppppppuStack_e = (undefined2 *******)0xcf3c;
          FUN_21f2_2d26();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          pppppppuStack_e = (undefined2 *******)0xcf4c;
          FUN_21f2_2d26();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          pppppppuStack_e = (undefined2 *******)0xcf5d;
          FUN_21f2_2d26();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          pppppppuStack_e = (undefined2 *******)0xcf6d;
          FUN_21f2_2d26();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          uVar15 = 0x22b2;
          pppppppuStack_e = (undefined2 *******)0xcf7d;
          FUN_21f2_2d26();
          local_232 = 1;
          if (*(int *)0xc22 == 0) {
            FUN_28b3_0cb6();
            func_0x00029d78();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xcfa7;
            func_0x000299d1();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xcfb0;
            FUN_28b3_0cb6();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xcfb5;
            func_0x00029d78();
            local_18 = 0x22b2;
            puStack_1a = (undefined4 *)0xcfbf;
            func_0x000299d1();
            local_18 = 0x5ef4;
            puStack_1a = &local_250;
            uStack_1c = 0x22b2;
            local_1e = (undefined2 ******)0xcfcd;
            FUN_21f2_3454();
            pppppppuStack_c = (undefined2 *******)0x2;
            pppppppuStack_e = (undefined2 *******)0x28;
            uStack_12._2_2_ = (int *)&local_250;
            uStack_12._0_2_ = (undefined2 *)0x22b2;
            puStack_14 = (undefined1 *)0xcfea;
            FUN_1000_02b5();
            FUN_28b3_0cb6();
            func_0x00029d78();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xd005;
            func_0x000299d1();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xd00e;
            FUN_28b3_0cb6();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xd013;
            func_0x00029d78();
            local_18 = 0x22b2;
            puStack_1a = (undefined4 *)0xd01d;
            func_0x000299d1();
            local_18 = 0x5f00;
            puStack_1a = &local_250;
            uStack_1c = 0x22b2;
            local_1e = (undefined2 ******)0xd02b;
            FUN_21f2_3454();
            pppppppuStack_c = (undefined2 *******)0x2;
            pppppppuStack_e = (undefined2 *******)0x34;
            uStack_12._2_2_ = (int *)&local_250;
            uStack_12._0_2_ = (undefined2 *)0x22b2;
            uVar15 = 0xdef;
            puStack_14 = (undefined1 *)0xd048;
            FUN_1000_02b5();
            *(undefined2 *)0xc22 = 1;
          }
        }
        pppppppuStack_e = (undefined2 *******)0xd05f;
        pppppppuStack_c = (undefined2 *******)uVar15;
        FUN_1def_07a4();
        pppppppuStack_c = &local_c6;
        pppppppuStack_e = local_12a;
        *(undefined2 *)0xc2c = 1;
        *(undefined2 *)0xc20 = 1;
        uStack_12._2_2_ = (int *)0x1;
        uStack_12._0_2_ = (undefined2 *)0x1bb4;
        puStack_14 = (undefined1 *)0xd084;
        local_a0 = (undefined2 *******)FUN_1def_0904();
        *(undefined2 *)0xc2c = 0;
        *(undefined2 *)0xc20 = 0;
        FUN_1885_2ec3();
        if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
        if ((*(int *)0xce6 != 0) && (local_a0 == (undefined2 *******)0x14)) {
          FUN_1885_2ec3();
          goto LAB_2bb4_4990_4;
        }
        if ((local_a0 == (undefined2 *******)0xffff) || (local_a0 == (undefined2 *******)0x14)) {
          pppppppuVar14 = (undefined2 *******)0x1b6e;
          FUN_1885_2ec3();
          goto LAB_3ab8_209d;
        }
        if (((*(char *)0x124 != '\0') && (*(char *)0x15b == '\x02')) &&
           ((local_a0 == (undefined2 *******)0x1 || (local_a0 == (undefined2 *******)0x2)))) {
          uVar15 = 0x1b6e;
          FUN_1885_2ec3();
          goto LAB_3ab8_258b;
        }
        if ((local_a0 == (undefined2 *******)0x1) || (local_a0 == (undefined2 *******)0x2))
        goto LAB_3ab8_26e1;
      } while (local_a2 == (undefined2 *******)0x0);
      pppppppuStack_c = local_a2;
      pppppppuStack_e = (undefined2 *******)0x1b6e;
      uStack_12._2_2_ = (int *)0xd24a;
      iVar9 = func_0x00015409();
    } while (iVar9 == 0);
    local_a0 = (undefined2 *******)0x0;
LAB_3ab8_26e1:
    if (local_170 == 1) {
      if (*(int *)0xcb6 == 0) {
        uVar15 = *(undefined2 *)0xa4ce;
        *(undefined2 *)0xb76a = *(undefined2 *)0xa4cc;
        *(undefined2 *)0xb76c = uVar15;
        uVar15 = *(undefined2 *)0xa48a;
        *(undefined2 *)0xb784 = *(undefined2 *)0xa488;
        *(undefined2 *)0xb786 = uVar15;
      }
      else {
        uVar15 = *(undefined2 *)0xcbc;
        *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
        *(undefined2 *)0xb76c = uVar15;
        uVar15 = *(undefined2 *)0xcc0;
        *(undefined2 *)0xb784 = *(undefined2 *)0xcbe;
        *(undefined2 *)0xb786 = uVar15;
      }
    }
    if (local_170 == 2) {
      if (*(int *)0xcb6 == 0) {
        uVar15 = *(undefined2 *)0xa48a;
        *(undefined2 *)0xb76a = *(undefined2 *)0xa488;
        *(undefined2 *)0xb76c = uVar15;
        uVar15 = *(undefined2 *)0xa4ce;
        *(undefined2 *)0xb784 = *(undefined2 *)0xa4cc;
        *(undefined2 *)0xb786 = uVar15;
      }
      else {
        FUN_28b3_0cb6();
        func_0x00029af6();
        FUN_28b3_0e53();
        uVar15 = *(undefined2 *)0xcbc;
        *(undefined2 *)0xb784 = *(undefined2 *)0xcba;
        *(undefined2 *)0xb786 = uVar15;
      }
    }
    if (local_170 == 3) {
      if (*(int *)0xcb6 == 0) {
        FUN_28b3_0cb6();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x000299d1();
      }
      else {
        FUN_28b3_0cb6();
        func_0x00029bb5();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x000299d1();
      }
      pppppppuStack_c = local_8c;
      pppppppuStack_e = local_8e;
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xd37b;
      func_0x0002a11e();
      func_0x00029834();
      FUN_28b3_0e53();
      pppppppuStack_c = local_8c;
      pppppppuStack_e = local_8e;
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xd3a5;
      FUN_28b3_15dc();
      func_0x00029834();
      FUN_28b3_0e53();
    }
    do {
      do {
        if (local_a0 != (undefined2 *******)0x0) goto LAB_3ab8_2bc5;
        FUN_1885_2ec3();
        if (*(byte *)0x114a < 2) {
          FUN_28b3_0cb6();
          func_0x00029d78();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xd3eb;
          func_0x000299d1();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xd3f4;
          FUN_28b3_0cb6();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xd3f9;
          func_0x00029d78();
          local_18 = 0x22b2;
          puStack_1a = (undefined4 *)0xd403;
          func_0x000299d1();
          local_18 = 9;
          puStack_1a = (undefined4 *)0x1;
                    /* WARNING: Call to offcut address within same function */
          uStack_1c = 0x22b2;
          local_1e = (undefined2 ******)0xd410;
          func_0x00030897();
        }
        uVar15 = 0x2ab8;
        pppppppuStack_c = (undefined2 *******)0xd41d;
        FUN_28b3_2132();
        if ((*(char *)0x124 != '\0') && (*(char *)0x114a != '\0')) {
          pppppppuStack_c = (undefined2 *******)0x2ab8;
          pppppppuStack_e = (undefined2 *******)0xd440;
          FUN_21f2_2d26();
          if (*(byte *)0x114a < 2) {
            pppppppuStack_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xd45a;
            FUN_1def_07a4();
          }
          else {
            pppppppuStack_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xd46d;
            FUN_21f2_2d26();
            pppppppuStack_c = (undefined2 *******)0x2;
            pppppppuStack_e = (undefined2 *******)0x3a;
            uStack_12._2_2_ = (int *)0x5f2b;
            uStack_12._0_2_ = (undefined2 *)0x22b2;
            puStack_14 = (undefined1 *)0xd488;
            FUN_1000_02b5();
            local_24a = 0;
            local_24c = 0;
            local_250 = (undefined2 *)(ulong)*(byte *)0x114b;
            func_0x00029da5();
            func_0x00029b6d();
            FUN_28b3_0e3b();
            func_0x00029d78();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xd4d0;
            func_0x000299d1();
            uStack_12._2_2_ = (int *)0x5f2e;
            uStack_12._0_2_ = &local_16;
            puStack_14 = (undefined1 *)0x22b2;
            local_16 = 0xd4dd;
            FUN_21f2_3454();
            pppppppuStack_c = (undefined2 *******)0x2;
            pppppppuStack_e = (undefined2 *******)0x47;
            uStack_12._2_2_ = &local_16;
            uStack_12._0_2_ = (undefined2 *)0x22b2;
            puStack_14 = (undefined1 *)0xd4f9;
            FUN_1000_02b5();
            pppppppuStack_c = (undefined2 *******)0xdef;
            pppppppuStack_e = (undefined2 *******)0xd50a;
            FUN_1def_07a4();
          }
          uVar15 = 0x1bb4;
          *(undefined2 *)0xc22 = 1;
        }
        *(undefined2 *)0xc20 = 1;
        pppppppuStack_c = local_13a;
        pppppppuStack_e = local_12a;
        uStack_12._2_2_ = (int *)0x270f;
        puStack_14 = (undefined1 *)0xd535;
        uStack_12._0_2_ = (undefined2 *)uVar15;
        local_212 = FUN_1def_0904();
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
        if (local_212 == -1) {
          pppppppuVar14 = (undefined2 *******)0x1b6e;
          FUN_1885_2ec3();
          if (*(byte *)0x114a < 2) goto LAB_3ab8_230c;
          goto LAB_3ab8_209d;
        }
        if ((local_212 == 1) && (*(char *)0x114a != '\0')) {
          FUN_1885_2ec3();
          if (*(byte *)0x114a < 2) {
            *(undefined1 *)0x114a = 2;
          }
          else {
            *(undefined1 *)0x114a = 1;
          }
          goto LAB_3ab8_230c;
        }
        if ((local_212 == 2) && (*(char *)0x114a != '\0')) {
          FUN_1885_2ec3();
          goto LAB_3ab8_2a3a;
        }
      } while (local_a2 == (undefined2 *******)0x0);
      puVar8 = (undefined2 *)*(uint *)0x148;
      iVar9 = *(int *)0x14a;
      local_250 = (undefined2 *)CONCAT22(iVar9,puVar8);
      if (local_170 < 4) {
        iVar12 = *(int *)0x13e - (uint)(*(int *)0x13c == 0);
        if ((iVar9 <= iVar12) &&
           ((iVar9 < iVar12 || (puVar8 <= (undefined2 *)(*(int *)0x13c + -1))))) {
          *(int *)0x148 = (int)puVar8 + 1;
          *(int *)0x14a = iVar9 + (uint)((undefined2 *)0xfffe < puVar8);
        }
      }
      pppppppuStack_c = local_a2;
      pppppppuStack_e = (undefined2 *******)0x1bb4;
      uStack_12._2_2_ = (int *)0xd71f;
      local_232 = func_0x00015409();
      *(undefined2 *)0x148 = (undefined2 *)local_250;
      *(undefined2 *)0x14a = local_250._2_2_;
    } while (local_232 == 0);
LAB_3ab8_2bc5:
    if (local_a0 == (undefined2 *******)0x0) goto LAB_3ab8_2de0;
    FUN_1885_2ec3();
    pppppppuStack_c = (undefined2 *******)0x1b6e;
    pppppppuStack_e = (undefined2 *******)0xd762;
    FUN_21f2_3454();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xd772;
    FUN_21f2_2d26();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xd782;
    FUN_21f2_2d26();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xd792;
    FUN_21f2_2d26();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    uVar15 = 0x22b2;
    pppppppuStack_e = (undefined2 *******)0xd7a2;
    FUN_21f2_2d26();
    if (local_9e < 0) {
      *(undefined2 *)0xc22 = 1;
      pppppppuStack_c = (undefined2 *******)0x2;
      pppppppuStack_e = (undefined2 *******)0x33;
      uStack_12._2_2_ = (int *)0x5f49;
      uStack_12._0_2_ = (undefined2 *)0x22b2;
      uVar15 = 0xdef;
      puStack_14 = (undefined1 *)0xd7cd;
      FUN_1000_02b5();
    }
    *(undefined2 *)0xc20 = 1;
    pppppppuStack_c = local_178;
    pppppppuStack_e = local_12a;
    uStack_12._2_2_ = (int *)0x270f;
    puStack_14 = (undefined1 *)0xd7f3;
    uStack_12._0_2_ = (undefined2 *)uVar15;
    local_212 = FUN_1def_0904();
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
    if (local_212 != -1) goto LAB_3ab8_2c9f;
    FUN_1885_2ec3();
  } while( true );
LAB_3ab8_258b:
  iVar9 = ((int)local_a0 + -1) * 4;
  local_96 = *(undefined2 *)(iVar9 + 0x113a);
  local_94 = *(undefined2 *)(iVar9 + 0x113c);
  local_b0 = *(undefined2 *)(iVar9 + 0x1142);
  local_ae = *(undefined2 *)(iVar9 + 0x1144);
  pppppppuStack_c = (undefined2 *******)0x5f0c;
  pppppppuStack_e = (undefined2 *******)0x1;
  uStack_12._2_2_ = (int *)0x2712;
  puStack_14 = (undefined1 *)0xd14f;
  uStack_12._0_2_ = (undefined2 *)uVar15;
  local_212 = func_0x00001dd5();
  if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
  uVar17 = local_212 != -1;
  uVar18 = local_212 == -1;
  if ((bool)uVar18) goto LAB_3ab8_230c;
  FUN_28b3_0cb6();
  FUN_28b3_0cb6();
  FUN_28b3_1181();
  if ((bool)uVar17) {
    FUN_28b3_0cb6();
    FUN_28b3_0cb6();
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar18) {
      FUN_28b3_0cb6();
      FUN_28b3_0cb6();
      FUN_28b3_1181();
      if ((bool)uVar17) {
        FUN_28b3_0cb6();
        FUN_28b3_0cb6();
        FUN_28b3_1181();
        if (!(bool)uVar17 && !(bool)uVar18) goto LAB_3ab8_2660;
      }
    }
  }
  uVar15 = 0x22b2;
  goto LAB_3ab8_258b;
LAB_3ab8_2660:
  local_212 = (int)local_a0 + -1;
  iVar9 = local_212 * 4;
  *(undefined2 *)(iVar9 + 0x113a) = local_96;
  *(undefined2 *)(iVar9 + 0x113c) = local_94;
  *(undefined2 *)(iVar9 + 0x1142) = local_b0;
  *(undefined2 *)(iVar9 + 0x1144) = local_ae;
  goto LAB_3ab8_230c;
  while( true ) {
    FUN_28b3_0cb6();
    FUN_28b3_0cb6();
    FUN_28b3_1181();
    if (!(bool)uVar17) break;
LAB_3ab8_2a3a:
    do {
      local_24a = 0;
      local_24c = 0;
      local_250 = (undefined2 *)(ulong)*(byte *)0x114b;
      func_0x00029da5();
      FUN_28b3_0e3b();
      func_0x00029b6d();
      FUN_28b3_0e3b();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      FUN_28b3_0e53();
      pppppppuStack_c = (undefined2 *******)0x5f33;
      pppppppuStack_e = (undefined2 *******)0x1;
      uStack_12._2_2_ = (int *)0x2711;
      uStack_12._0_2_ = (undefined2 *)0x22b2;
      puStack_14 = (undefined1 *)0xd62f;
      local_212 = func_0x00001dd5();
      if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
      uVar17 = local_212 != -1;
      uVar18 = local_212 == -1;
      if ((bool)uVar18) goto LAB_3ab8_230c;
      FUN_28b3_0cb6();
      FUN_28b3_0cb6();
      FUN_28b3_1181();
    } while (!(bool)uVar17 && !(bool)uVar18);
  }
  FUN_28b3_0cb6();
  pppppppuStack_c = (undefined2 *******)0xd69b;
  func_0x00029b6d();
  FUN_28b3_0e3b();
  func_0x00029d78();
  local_212 = FUN_28b3_0f51();
  *(undefined1 *)0x114b = (char)local_212;
  goto LAB_3ab8_230c;
LAB_3ab8_2c9f:
  if (local_212 == 1) {
    local_9e = -local_9e;
  }
  if (local_a2 != (undefined2 *******)0x0) {
    pppppppuStack_c = local_a2;
    pppppppuStack_e = (undefined2 *******)0x1bb4;
    uStack_12._2_2_ = (int *)0xd84a;
    iVar9 = func_0x00015409();
    if (iVar9 != 0) {
      FUN_28b3_0cb6();
      func_0x00029b85();
      FUN_28b3_0e3b();
      FUN_28b3_0d8b();
      func_0x00029b6d();
      FUN_28b3_0e3b();
      func_0x00029c9d();
      func_0x00029bb5();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      FUN_28b3_0d8b();
      func_0x00029c9d();
      func_0x00029b6d();
      func_0x00029b55();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      func_0x00029b85();
      FUN_28b3_0e3b();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      func_0x00029b6d();
      func_0x00029bb5();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      FUN_28b3_0d8b();
      func_0x00029c9d();
      func_0x00029b6d();
      func_0x00029b55();
      FUN_28b3_0e53();
LAB_3ab8_2de0:
      pppppppuVar14 = (undefined2 *******)0x1b6e;
      FUN_1885_2ec3();
      goto LAB_3ab8_2de5;
    }
  }
  goto LAB_3ab8_2bc5;
LAB_3ab8_452f:
  pppppppuStack_e = (undefined2 *******)0xf0c0;
  FUN_28b3_0cb6();
  pppppppuStack_c = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0xf0c5;
  func_0x00029d78();
  puStack_14 = (undefined1 *)0x22b2;
  local_16 = 0xf0cf;
  func_0x000299d1();
  puStack_14 = (undefined1 *)local_1fc;
  local_16 = 0;
  local_18 = 0x22b2;
  puStack_1a = (undefined4 *)0xf0dd;
  iVar9 = func_0x00030b78();
  if (iVar9 != 0) {
    local_1e = (undefined2 ******)((int)local_1e + 1);
  }
  goto LAB_3ab8_2e14;
LAB_3ab8_462e:
  if (local_170 != 6) goto LAB_3ab8_491e;
  *(undefined2 *)0xc1e = 0;
  pppppppuStack_c = local_12a;
  uStack_12._2_2_ = (int *)0xf1d0;
  pppppppuStack_e = pppppppuVar14;
  FUN_21f2_3454();
  pppppppuStack_c = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0xf1e1;
  FUN_21f2_2d26();
  pppppppuStack_c = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0xf1f1;
  FUN_21f2_2d26();
  pppppppuStack_c = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0xf201;
  FUN_21f2_2d26();
  for (local_b2 = 1; local_b2 < 9; local_b2 = local_b2 + 1) {
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xf228;
    FUN_21f2_2d26();
  }
  pppppppuStack_c = (undefined2 *******)&local_16;
  pppppppuStack_e = (undefined2 *******)0x22b2;
  uStack_12._2_2_ = (int *)0xf23e;
  FUN_21f2_3454();
  pppppppuStack_c = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0xf24f;
  FUN_21f2_2d26();
  if (local_74 == (int *)0x0) {
    local_6a = (int *)0x2710;
  }
  else {
    local_6a = (int *)0x270f;
  }
  *(undefined2 *)0xc20 = 1;
  *(undefined2 *)0xc2c = 1;
  pppppppuStack_c = &local_220;
  pppppppuStack_e = local_12a;
  uStack_12._2_2_ = local_6a;
  uStack_12._0_2_ = (undefined2 *)0x22b2;
  pppppppuVar14 = (undefined2 *******)0x1bb4;
  puStack_14 = (undefined1 *)0xf28c;
  local_212 = FUN_1def_0904();
  *(undefined2 *)0xc20 = 0;
  *(undefined2 *)0xc2c = 0;
  if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
  if (local_212 == 0x14) {
    iVar9 = *(int *)0xce6;
    goto joined_r0x0003f2b8;
  }
  if (local_212 == -1) {
    if ((int)local_74 < 0) {
      pppppppuStack_c = (undefined2 *******)0xf2e2;
      FUN_1def_186d();
      local_74 = (int *)0x0;
      local_212 = 0;
    }
    pppppppuVar14 = (undefined2 *******)0x885;
    pppppppuStack_c = (undefined2 *******)0xf2f6;
    func_0x0000b1d8();
  }
  if ((0x61ff < local_212) && (local_212 < 0x6701)) {
    uVar10 = (int)(local_212 + 0x9f00U) >> 0xf;
    *(int *)0x1d0 = ((int)((local_212 + 0x9f00U ^ uVar10) - uVar10) >> 8 ^ uVar10) - uVar10;
  }
  if (local_212 == 1) goto LAB_3ab8_491e;
  if (local_a2 != (undefined2 *******)0x0) {
    if (local_a2 == (undefined2 *******)0x1) {
      pppppppuStack_c = (undefined2 *******)0x2;
      uStack_12._2_2_ = (int *)0xf359;
      pppppppuStack_e = pppppppuVar14;
      iVar9 = func_0x00015409();
      pppppppuVar14 = (undefined2 *******)0x11f2;
      if (iVar9 != 0) {
        FUN_28b3_0cb6();
        func_0x00029d78();
        uStack_12._2_2_ = (int *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xf37c;
        func_0x000299d1();
        uStack_12._2_2_ = (int *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xf385;
        FUN_28b3_0cb6();
        uStack_12._2_2_ = (int *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xf38a;
        func_0x00029d78();
        local_18 = 0x22b2;
        puStack_1a = (undefined4 *)0xf394;
        func_0x000299d1();
        local_18 = 0x22b2;
        puStack_1a = (undefined4 *)0xf399;
        FUN_1def_1208();
        local_74 = (int *)((int)local_74 + -1);
        pppppppuStack_c = (undefined2 *******)0xf3a8;
        uVar19 = func_0x000003ef();
        puVar1 = (uint *)((int)uVar19 + 10);
        *puVar1 = *puVar1 | 0x40;
        pppppppuVar14 = (undefined2 *******)0x0;
      }
    }
    if (local_a2 == (undefined2 *******)0x2) {
      FUN_28b3_0cb6();
      func_0x00029d78();
      func_0x000299d1();
      FUN_28b3_0cb6();
      func_0x00029d78();
      func_0x000299d1();
      pppppppuStack_c = (undefined2 *******)0x22b2;
      pppppppuVar14 = (undefined2 *******)0x1bb4;
      pppppppuStack_e = (undefined2 *******)0xf3f9;
      local_28 = (undefined2 *******)FUN_1def_173a();
      if (local_28 != (undefined2 *******)0x0) {
        func_0x00029834();
        FUN_28b3_0e53();
        func_0x00029834();
        FUN_28b3_0e53();
        local_74 = (int *)0x0;
        pppppppuStack_c = (undefined2 *******)0xf436;
        func_0x0000daa6();
        pppppppuStack_c = (undefined2 *******)0xf43f;
        FUN_1def_186d();
        pppppppuStack_c = (undefined2 *******)0xf449;
        func_0x0000daa6();
        FUN_28b3_0cb6();
        func_0x00029d78();
        uStack_12._2_2_ = (int *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xf462;
        func_0x000299d1();
        uStack_12._2_2_ = (int *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xf46b;
        FUN_28b3_0cb6();
        uStack_12._2_2_ = (int *)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0xf470;
        func_0x00029d78();
        local_18 = 0x22b2;
        puStack_1a = (undefined4 *)0xf47a;
        func_0x000299d1();
        local_18 = 0x22b2;
        puStack_1a = (undefined4 *)0xf47f;
        FUN_1def_1208();
        pppppppuVar14 = (undefined2 *******)0x0;
        pppppppuStack_c = (undefined2 *******)0xf48b;
        uVar19 = func_0x000003ef();
        puVar1 = (uint *)((int)uVar19 + 10);
        *puVar1 = *puVar1 | 0x40;
      }
    }
  }
  *(undefined2 *)0xc1e = 0;
  goto LAB_3ab8_462e;
LAB_3ab8_491e:
  local_74 = (int *)0x0;
  lVar20 = local_9a;
LAB_3ab8_4923:
  local_9a = lVar20;
  if (local_170 == 7) {
    pppppppuStack_e = (undefined2 *******)0xf4bb;
    pppppppuStack_c = pppppppuVar14;
    FUN_21f2_3454();
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0xf4cb;
    FUN_21f2_2d26();
    *(undefined2 *)0xc2c = 1;
    pppppppuStack_c = &local_220;
    pppppppuStack_e = local_12a;
    uStack_12._2_2_ = local_74;
    uStack_12._0_2_ = (undefined2 *)0x22b2;
    pppppppuVar14 = (undefined2 *******)0x1bb4;
    puStack_14 = (undefined1 *)0xf4ef;
    local_212 = FUN_1def_0904();
    *(undefined2 *)0xc2c = 0;
    if (*(int *)0x158 == 0) {
      if (local_212 != 0x14) goto LAB_3ab8_49a6;
      iVar9 = *(int *)0xce6;
joined_r0x0003f2b8:
      pppppppuVar14 = (undefined2 *******)0x1bb4;
      goto joined_r0x0003f2b8;
    }
    goto LAB_2bb4_4990_4;
  }
  goto LAB_3ab8_4c2f;
LAB_3ab8_49a6:
  if ((local_212 == -1) && (local_74 != (int *)0x0)) {
    FUN_1885_2ec3();
    for (local_12e = 1; local_12e <= (int)local_74; local_12e = local_12e + 1) {
      local_16c = *(undefined2 *)0x148;
      local_16a = *(undefined2 *)0x14a;
      pppppppuStack_c = (undefined2 *******)0xf56f;
      func_0x0000daa6();
      pppppppuStack_c = (undefined2 *******)0x885;
      pppppppuStack_e = (undefined2 *******)0xf57d;
      func_0x00018779();
    }
    func_0x0000abfa();
    pppppppuVar14 = (undefined2 *******)0x885;
    pppppppuStack_c = (undefined2 *******)0xf590;
    func_0x0000b1d8();
    local_74 = (int *)0x0;
    lVar20 = local_9a;
  }
  else {
    lVar20 = local_9a;
    if (local_a2 != (undefined2 *******)0x0) {
      FUN_28b3_0cb6();
      func_0x00029d78();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xf5be;
      func_0x000299d1();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xf5c7;
      FUN_28b3_0cb6();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xf5cc;
      func_0x00029d78();
      local_18 = 0x22b2;
      puStack_1a = (undefined4 *)0xf5d6;
      func_0x000299d1();
      local_18 = 0x22b2;
      pppppppuVar14 = (undefined2 *******)0x11f2;
      puStack_1a = (undefined4 *)0xf5db;
      lVar20 = FUN_13bf_39a0();
      if (lVar20 != 0) {
        pppppppuStack_c = (undefined2 *******)0xf5f9;
        local_9a = lVar20;
        func_0x0000daa6();
        local_74 = (int *)0x0;
        uVar17 = local_9a._2_2_ == 0;
        if ((local_9a < 0) || ((local_9a < 0x10000 && (uVar17 = false, (int)local_9a == 0)))) {
          pppppppuStack_c = (undefined2 *******)0x885;
          pppppppuStack_e = (undefined2 *******)0xf7a7;
          local_74 = (int *)FUN_28b3_2665();
        }
        else {
          uVar18 = 0;
          pppppppuStack_c = (undefined2 *******)0x885;
          pppppppuStack_e = (undefined2 *******)0xf625;
          puVar21 = (undefined2 *)func_0x0000013f();
          puVar13 = (undefined2 *)puVar21;
          puVar8 = local_62;
          for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar4 = puVar8;
            puVar8 = puVar8 + 1;
            puVar2 = puVar13;
            puVar13 = puVar13 + 1;
            *puVar4 = *puVar2;
          }
          FUN_28b3_0cb6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_0cb6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_117c();
          FUN_28b3_0cb6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_0cb6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_117c();
          FUN_28b3_1181();
          if ((bool)uVar18 || (bool)uVar17) {
            FUN_28b3_0cb6();
            func_0x00029d78();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xf721;
            func_0x000299d1();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xf729;
            FUN_28b3_0cb6();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xf72e;
            func_0x00029d78();
            local_18 = 0x22b2;
            puStack_1a = (undefined4 *)0xf738;
            func_0x000299d1();
            local_18 = 0x22b2;
            puStack_1a = (undefined4 *)0xf740;
            FUN_28b3_0cb6();
            local_18 = 0x22b2;
            puStack_1a = (undefined4 *)0xf745;
            func_0x00029d78();
            ppppppuStack_20 = (undefined2 ******)0x22b2;
            ppppppuStack_22 = (undefined2 ******)0xf74f;
            func_0x000299d1();
            ppppppuStack_20 = (undefined2 ******)0x22b2;
            ppppppuStack_22 = (undefined2 ******)0xf757;
            FUN_28b3_0cb6();
            ppppppuStack_20 = (undefined2 ******)0x22b2;
            ppppppuStack_22 = (undefined2 ******)0xf75c;
            func_0x00029d78();
            local_28 = (undefined2 *******)0x22b2;
            pppppppuStack_2a = (undefined2 *******)0xf766;
            func_0x000299d1();
            local_28 = (undefined2 *******)0x22b2;
            pppppppuStack_2a = (undefined2 *******)0xf76b;
            FUN_1def_043a();
          }
          else {
            FUN_28b3_0cb6();
            func_0x00029d78();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xf6ba;
            func_0x000299d1();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xf6c2;
            FUN_28b3_0cb6();
            uStack_12._2_2_ = (int *)0x22b2;
            uStack_12._0_2_ = (undefined2 *)0xf6c7;
            func_0x00029d78();
            local_18 = 0x22b2;
            puStack_1a = (undefined4 *)0xf6d1;
            func_0x000299d1();
            local_18 = 0x22b2;
            puStack_1a = (undefined4 *)0xf6d9;
            FUN_28b3_0cb6();
            local_18 = 0x22b2;
            puStack_1a = (undefined4 *)0xf6de;
            func_0x00029d78();
            ppppppuStack_20 = (undefined2 ******)0x22b2;
            ppppppuStack_22 = (undefined2 ******)0xf6e8;
            func_0x000299d1();
            ppppppuStack_20 = (undefined2 ******)0x22b2;
            ppppppuStack_22 = (undefined2 ******)0xf6f0;
            FUN_28b3_0cb6();
            ppppppuStack_20 = (undefined2 ******)0x22b2;
            ppppppuStack_22 = (undefined2 ******)0xf6f5;
            func_0x00029d78();
            local_28 = (undefined2 *******)0x22b2;
            pppppppuStack_2a = (undefined2 *******)0xf6ff;
            func_0x000299d1();
            local_28 = (undefined2 *******)0x22b2;
            pppppppuStack_2a = (undefined2 *******)0xf704;
            FUN_1def_043a();
          }
          pppppppuStack_c = (undefined2 *******)*(int *)0xa492;
          pppppppuStack_e = (undefined2 *******)*(uint *)0xa490;
          uStack_12._2_2_ = (int *)*(int *)0xa48e;
          uStack_12._0_2_ = (undefined2 *)*(undefined2 *)0xa48c;
          puStack_14 = (undefined1 *)0x1bb4;
          local_16 = 0xf788;
          local_74 = (int *)FUN_2bb4_4af5();
        }
        pppppppuVar14 = (undefined2 *******)0x2ab8;
        lVar20 = local_9a;
      }
    }
  }
  goto LAB_3ab8_4923;
LAB_3ab8_4c2f:
  if (local_170 == 8) {
    do {
      do {
        while( true ) {
          while( true ) {
            func_0x0002b07d();
            pppppppuStack_c = (undefined2 *******)0x2ab8;
            pppppppuStack_e = (undefined2 *******)0xf7cc;
            FUN_21f2_3454();
            pppppppuStack_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xf7dc;
            FUN_21f2_2d26();
            pppppppuStack_c = (undefined2 *******)0xbf48;
            pppppppuStack_e = (undefined2 *******)0x22b2;
            uStack_12._2_2_ = (int *)0xf7ef;
            FUN_21f2_3454();
            pppppppuStack_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xf800;
            FUN_21f2_2d26();
            pppppppuStack_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xf810;
            FUN_21f2_2d26();
            pppppppuStack_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xf820;
            FUN_21f2_2d26();
            pppppppuStack_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xf830;
            FUN_21f2_2d26();
            pppppppuStack_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xf840;
            FUN_21f2_2d26();
            pppppppuStack_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xf850;
            FUN_21f2_2d26();
            pppppppuStack_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xf860;
            FUN_21f2_2d26();
            pppppppuStack_c = (undefined2 *******)0x22b2;
            pppppppuStack_e = (undefined2 *******)0xf870;
            FUN_21f2_2d26();
            *(undefined2 *)0xc2c = 1;
            *(undefined2 *)0xc1a = 1;
            if (*(int *)0xce6 != 0) {
              *(undefined2 *)0xc1a = 0;
            }
            *(undefined2 *)0xc20 = 0;
            pppppppuStack_c = &local_220;
            pppppppuStack_e = local_12a;
            uStack_12._2_2_ = (int *)0x2710;
            uStack_12._0_2_ = (undefined2 *)0x22b2;
            pppppppuVar14 = (undefined2 *******)0x1bb4;
            puStack_14 = (undefined1 *)0xf8ae;
            local_212 = FUN_1def_0904();
            *(undefined2 *)0xc2c = 0;
            *(undefined2 *)0xc1a = 0;
            uVar10 = local_232 >> 8;
            local_232 = local_232 & 0xff00;
            if (*(int *)0x158 != 0) goto LAB_2bb4_4990_4;
            if ((*(int *)0xc18 != -2) || (*(byte *)0x126 < 3)) break;
            FUN_1885_2ec3();
            local_74 = (int *)0x0;
            pppppppuStack_c = local_21e;
            pppppppuStack_e = local_220;
            uStack_12._2_2_ = (int *)0x1b6e;
            uStack_12._0_2_ = (undefined2 *)0xf903;
            FUN_28b3_216a();
          }
          if (*(int *)0xc18 == 0) break;
          FUN_1885_2ec3();
          local_74 = (int *)0x0;
          FUN_28b3_0cb6();
          func_0x00029d78();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xf935;
          func_0x000299d1();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xf93e;
          FUN_28b3_0cb6();
          uStack_12._2_2_ = (int *)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0xf943;
          func_0x00029d78();
          local_18 = 0x22b2;
          puStack_1a = (undefined4 *)0xf94d;
          func_0x000299d1();
          local_18 = 0x22b2;
          puStack_1a = (undefined4 *)0xf952;
          func_0x0000507a();
        }
        if ((0x61ff < local_212) && (local_212 < 0x6b01)) {
          uVar11 = (int)(local_212 + 0x9f00U) >> 0xf;
          *(int *)0x1ce = ((int)((local_212 + 0x9f00U ^ uVar11) - uVar11) >> 8 ^ uVar11) - uVar11;
        }
        if (local_212 == 0x14) {
          iVar9 = *(int *)0xce6;
          goto joined_r0x0003f2b8;
        }
        local_232 = CONCAT11((char)uVar10,local_a2._0_1_);
      } while (local_a2 == (undefined2 *******)0x0);
      FUN_28b3_0cb6();
      func_0x00029d78();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xf9cd;
      func_0x000299d1();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xf9d6;
      FUN_28b3_0cb6();
      uStack_12._2_2_ = (int *)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xf9db;
      func_0x00029d78();
      local_18 = 0x22b2;
      puStack_1a = (undefined4 *)0xf9e5;
      func_0x000299d1();
      local_18 = 0x22b2;
      puStack_1a = (undefined4 *)0xf9ea;
      iStack_b6 = func_0x0001b204();
    } while (iStack_b6 == 0);
    pppppppuStack_c2 = local_220;
    pppppppuStack_c0 = local_21e;
    uStack_136 = local_226;
    uStack_134 = local_224;
    pppppppuStack_c = (undefined2 *******)0xfa28;
    puVar21 = (undefined2 *)func_0x00000398();
    puVar13 = (undefined2 *)puVar21;
    puVar8 = auStack_156;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar4 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar13;
      puVar13 = puVar13 + 1;
      *puVar4 = *puVar2;
    }
    if (((bStack_140 & 0x10) == 0) && ((bStack_13f & 0x40) == 0)) goto LAB_3ab8_4ece;
    goto LAB_3ab8_4f04;
  }
  goto LAB_2bb4_4990_4;
LAB_3ab8_4ece:
  pppppppuStack_c = (undefined2 *******)0x0;
  pppppppuStack_e = (undefined2 *******)0xfa5b;
  FUN_1000_0599();
  *(undefined2 *)0xc22 = 1;
  pppppppuStack_c = (undefined2 *******)0xfa6c;
  func_0x00012276();
  pppppppuStack_c = (undefined2 *******)0xfa76;
  func_0x00012276();
  if (*(char *)0x124 != '\0') {
LAB_3ab8_4f04:
    FUN_28b3_0cb6();
    func_0x00029d78();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xfa9c;
    func_0x000299d1();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xfaa5;
    FUN_28b3_0cb6();
    uStack_12._2_2_ = (int *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xfaaa;
    func_0x00029d78();
    local_18 = 0x22b2;
    puStack_1a = (undefined4 *)0xfab4;
    func_0x000299d1();
    local_18 = 0x22b2;
    puStack_1a = (undefined4 *)0xfabd;
    FUN_28b3_0cb6();
    local_18 = 0x22b2;
    puStack_1a = (undefined4 *)0xfac2;
    func_0x00029d78();
    ppppppuStack_20 = (undefined2 ******)0x22b2;
    ppppppuStack_22 = (undefined2 ******)0xfacc;
    func_0x000299d1();
    ppppppuStack_20 = (undefined2 ******)0x22b2;
    ppppppuStack_22 = (undefined2 ******)0xfad5;
    FUN_28b3_0cb6();
    ppppppuStack_20 = (undefined2 ******)0x22b2;
    ppppppuStack_22 = (undefined2 ******)0xfada;
    func_0x00029d78();
    local_28 = (undefined2 *******)0x22b2;
    pppppppuStack_2a = (undefined2 *******)0xfae4;
    func_0x000299d1();
    local_28 = (undefined2 *******)0x22b2;
    pppppppuStack_2a = (undefined2 *******)0xfae9;
    FUN_1def_043a();
    FUN_28b3_0cb6();
    FUN_28b3_100d();
    FUN_28b3_0e53();
    FUN_28b3_0cb6();
    FUN_28b3_100d();
    FUN_28b3_0e53();
    pppppppuStack_c = (undefined2 *******)auStack_32a;
    pppppppuStack_e = (undefined2 *******)0x22b2;
    uStack_12._2_2_ = (int *)0xfb32;
    FUN_1885_0344();
    local_254 = (undefined2 ******)0xa;
    if ((bStack_13f & 1) != 0) {
      local_254 = (undefined2 ******)0xb;
    }
    if ((bStack_13f & 2) != 0) {
      local_254 = (undefined2 ******)0xc;
    }
    if ((bStack_13f & 4) != 0) {
      local_254 = (undefined2 ******)0xd;
    }
    if ((bStack_13f & 0x10) != 0) {
      local_254 = (undefined2 ******)0xf;
    }
    if (((char)local_232 != '\x02') || (local_254 != (undefined2 ******)0xd)) {
      if ((char)local_232 != '\x01') {
        iVar9 = func_0x0003fd3c();
        return iVar9;
      }
      func_0x0001bb4e();
      pppppppuStack_c = (undefined2 *******)0x1bb4;
      pppppppuStack_e = (undefined2 *******)0xfbd7;
      func_0x00012276();
      if (*(char *)0xb782 == '\0') {
        func_0x0000c354();
        pppppppuStack_c = (undefined2 *******)(*(int *)0xa5a + 1);
        pppppppuStack_e = (undefined2 *******)0x0;
        uStack_12._2_2_ = (int *)0x885;
        uStack_12._0_2_ = (undefined2 *)0xfbfe;
        func_0x0000a76b();
      }
      func_0x0000a799();
      uVar15 = *(undefined2 *)0xfda;
      *(undefined2 *)0xfda = 0;
      pppppppuStack_c = (undefined2 *******)0x885;
      pppppppuStack_e = (undefined2 *******)0xfc20;
      FUN_1000_0599();
      uVar16 = 0xdef;
      FUN_1000_060e();
      if (*(char *)0x1131 != '\0') {
        uVar16 = 0x2c1;
        func_0x00002ca6();
      }
      pppppppuStack_c = (undefined2 *******)0x12;
      pppppppuStack_e = (undefined2 *******)auStack_32a;
      uStack_12._0_2_ = (undefined2 *)0xfc4c;
      uStack_12._2_2_ = (int *)uVar16;
      local_28 = (undefined2 *******)FUN_12c1_03d3();
      func_0x00002cc6();
      FUN_1000_0620();
      *(undefined2 *)0xfda = uVar15;
      if (*(int *)0xc22 != 0) {
        pppppppuStack_c = (undefined2 *******)0xdef;
        pppppppuStack_e = (undefined2 *******)0xfc7a;
        FUN_1000_0599();
      }
      func_0x00010526();
      if (3 < *(byte *)0xb782) {
        pcVar5 = (code *)swi(0x3f);
        (*pcVar5)();
      }
      pppppppuStack_c = (undefined2 *******)0xfc9e;
      func_0x0000daa6();
      pppppppuStack_c = (undefined2 *******)0x0;
      pppppppuStack_e = (undefined2 *******)0x0;
      uStack_12._2_2_ = (int *)0x885;
      uStack_12._0_2_ = (undefined2 *)0xfcb1;
      func_0x0000f1d8();
      pppppppuStack_c = (undefined2 *******)0x1;
      pppppppuStack_e = (undefined2 *******)0x7;
      uStack_12._2_2_ = (int *)*(int *)0x1b40;
      uStack_12._0_2_ = (undefined2 *)*(undefined2 *)0x1b3e;
      puStack_14 = (undefined1 *)*(int *)0xa5e;
      local_16 = 0;
      local_18 = 0xdef;
      puStack_1a = (undefined4 *)0xfcd9;
      func_0x0000f350();
      if (*(char *)0xb782 == '\0') {
        pppppppuStack_c = (undefined2 *******)0x0;
        pppppppuStack_e = (undefined2 *******)0x7;
        uStack_12._2_2_ = (int *)*(int *)0xa5a;
        uStack_12._0_2_ = (undefined2 *)*(undefined2 *)0xa58;
        puStack_14 = (undefined1 *)*(int *)0xa5e;
        local_16 = *(undefined2 *)0xa58;
        local_18 = 0xdef;
        puStack_1a = (undefined4 *)0xfd0b;
        func_0x0000f350();
      }
      func_0x0000abfa();
      func_0x0000ac64();
      func_0x0000a799();
      if (*(int *)0x158 == 0) {
        if (0 < (int)local_28) {
          iVar9 = func_0x0003fd3c();
          return iVar9;
        }
        iVar9 = FUN_3ab8_4c39();
        return iVar9;
      }
      goto LAB_2bb4_4990_4;
    }
    pppppppuStack_c = (undefined2 *******)0x18b3;
    pppppppuStack_e = (undefined2 *******)0xfb9c;
    FUN_1000_0599();
    *(undefined2 *)0xc22 = 1;
    pppppppuStack_c = (undefined2 *******)0xfbad;
    func_0x00012276();
    pppppppuStack_c = (undefined2 *******)0xfbb7;
    func_0x00012276();
  }
  goto LAB_3ab8_4c2f;
}



/* 3ab8:4c39  FUN_3ab8_4c39  1101 bytes, 2 callers */

undefined2 FUN_3ab8_4c39(void)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  code *pcVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int unaff_BP;
  int *piVar13;
  undefined2 *puVar14;
  undefined2 uVar15;
  int iVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  long lVar20;
  undefined2 *puVar21;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  int iStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  int iStack_1e;
  int iStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  do {
    do {
      do {
        while( true ) {
          while( true ) {
            func_0x0002b07d();
            iStack_6 = 0x2ab8;
            iStack_8 = 0xf7cc;
            FUN_21f2_3454();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf7dc;
            FUN_21f2_2d26();
            iStack_6 = 0xbf48;
            iStack_8 = 0x22b2;
            iStack_a = 0xf7ef;
            FUN_21f2_3454();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf800;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf810;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf820;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf830;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf840;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf850;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf860;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf870;
            FUN_21f2_2d26();
            *(undefined2 *)0xc2c = 1;
            *(undefined2 *)0xc1a = 1;
            if (*(int *)0xce6 != 0) {
              *(undefined2 *)0xc1a = 0;
            }
            *(undefined2 *)0xc20 = 0;
            iStack_6 = unaff_BP + -0x21e;
            iStack_8 = unaff_BP + -0x128;
            iStack_a = 10000;
            iStack_c = 0x22b2;
            iStack_e = -0x752;
            uVar9 = FUN_1def_0904();
            *(undefined2 *)(unaff_BP + -0x210) = uVar9;
            *(undefined2 *)0xc2c = 0;
            *(undefined2 *)0xc1a = 0;
            *(undefined1 *)(unaff_BP + -0x230) = 0;
            if (*(int *)0x158 != 0) goto code_r0x000304fb;
            if ((*(int *)0xc18 != -2) || (*(byte *)0x126 < 3)) break;
            FUN_1885_2ec3();
            *(undefined2 *)(unaff_BP + -0x72) = 0;
            iStack_6 = *(int *)(unaff_BP + -0x21c);
            iStack_8 = *(int *)(unaff_BP + -0x21e);
            iStack_a = 0x1b6e;
            iStack_c = 0xf903;
            FUN_28b3_216a();
          }
          if (*(int *)0xc18 == 0) break;
          FUN_1885_2ec3();
          *(undefined2 *)(unaff_BP + -0x72) = 0;
          FUN_28b3_0cb6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0xf935;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0xf93e;
          FUN_28b3_0cb6();
          iStack_a = 0x22b2;
          iStack_c = 0xf943;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          iStack_14 = 0xf94d;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          iStack_14 = -0x6ae;
          func_0x0000507a();
        }
        if ((0x61ff < *(int *)(unaff_BP + -0x210)) && (*(int *)(unaff_BP + -0x210) < 0x6b01)) {
          uVar8 = *(int *)(unaff_BP + -0x210) + 0x9f00;
          uVar11 = (int)uVar8 >> 0xf;
          *(int *)0x1ce = ((int)((uVar8 ^ uVar11) - uVar11) >> 8 ^ uVar11) - uVar11;
        }
        if (*(int *)(unaff_BP + -0x210) == 0x14) {
          iVar10 = *(int *)0xce6;
joined_r0x0003f995:
          iVar16 = 0x1bb4;
          if (iVar10 == 0) {
LAB_3ab8_209d:
            do {
              iStack_8 = 0xcc2b;
              iStack_6 = iVar16;
              FUN_21f2_3454();
              iStack_6 = 0x22b2;
              iStack_8 = 0xcc3b;
              FUN_21f2_3454();
              iStack_6 = 0x22b2;
              iStack_8 = 0xcc4c;
              FUN_21f2_2d26();
              iStack_6 = 0x22b2;
              iStack_8 = 0xcc5c;
              FUN_21f2_2d26();
              iStack_6 = 0x22b2;
              iStack_8 = 0xcc6d;
              FUN_21f2_2d26();
              iStack_6 = 0x22b2;
              iStack_8 = 0xcc7d;
              FUN_21f2_2d26();
              iStack_6 = 0x22b2;
              iStack_8 = 0xcc8e;
              FUN_21f2_2d26();
              iStack_6 = 0x22b2;
              iStack_8 = 0xcc9e;
              FUN_21f2_2d26();
              iStack_6 = 0x22b2;
              iStack_8 = 0xccae;
              FUN_21f2_2d26();
              iStack_6 = 0x22b2;
              iStack_8 = 0xccbe;
              FUN_21f2_2d26();
              iStack_6 = 0x22b2;
              iStack_8 = 0xccce;
              FUN_1def_07a4();
              if (*(int *)0xce6 == 0) {
                *(undefined2 *)0xc1a = 1;
                iStack_6 = unaff_BP + -0x21e;
                iStack_8 = unaff_BP + -0x128;
                iStack_a = 0;
                iStack_c = 0x1bb4;
                iStack_e = -0x32cd;
                uVar9 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0x16e) = uVar9;
              }
              else {
                *(undefined2 *)0xc1a = 0;
                iStack_6 = unaff_BP + -0x21e;
                iStack_8 = unaff_BP + -0x128;
                iStack_a = 1;
                iStack_c = 0x1bb4;
                iStack_e = -0x3303;
                iVar10 = FUN_1def_0904();
                *(int *)(unaff_BP + -0x16e) = iVar10;
                if (iVar10 == -1) goto code_r0x000304fb;
              }
              iVar16 = 0x1bb4;
              *(undefined2 *)0xc1a = 0;
              if (*(int *)0x158 != 0) goto code_r0x000304fb;
              if ((*(int *)0xc18 == -2) && (2 < *(byte *)0x126)) goto LAB_3ab8_21e1;
              if (*(int *)0xc18 != 0) {
                *(undefined2 *)(unaff_BP + -0x72) = 0;
                FUN_28b3_0cb6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xcda8;
                func_0x000299d1();
                iStack_a = 0x22b2;
                iStack_c = 0xcdb1;
                FUN_28b3_0cb6();
                iStack_a = 0x22b2;
                iStack_c = 0xcdb6;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                iStack_14 = 0xcdc0;
                func_0x000299d1();
                uStack_12 = 0x22b2;
                iVar16 = 0x3bf;
                iStack_14 = -0x323b;
                func_0x0000507a();
                goto LAB_3ab8_209d;
              }
              if (*(int *)(unaff_BP + -0xa0) == 1) {
                *(undefined2 *)(unaff_BP + -0x16e) = 1;
              }
              if (*(int *)(unaff_BP + -0xa0) == 2) {
                *(undefined2 *)(unaff_BP + -0x16e) = 2;
              }
            } while ((*(int *)(unaff_BP + -0x16e) < 1) || (9 < *(int *)(unaff_BP + -0x16e)));
            if (*(int *)(unaff_BP + -0x16e) == 4) {
              func_0x0000c3ca();
              iVar16 = 0x2ab8;
              iStack_6 = -0x31e2;
              FUN_28b3_296e();
              if (*(int *)0x158 == 0) {
                iVar10 = *(int *)0xce6;
                goto joined_r0x0003f518;
              }
              goto code_r0x000304fb;
            }
            if (*(int *)(unaff_BP + -0x16e) == 3) {
              iVar16 = 0x885;
              func_0x0000c3ca();
              pcVar6 = (code *)swi(0x3f);
              iVar10 = (*pcVar6)();
              if (iVar10 == -1) goto LAB_3ab8_209d;
              if (*(int *)0x158 != 0) goto code_r0x000304fb;
            }
            *(undefined2 *)(unaff_BP + -0x72) = 0;
            if ((0 < *(int *)(unaff_BP + -0x16e)) && (*(int *)(unaff_BP + -0x16e) < 4))
            goto LAB_3ab8_230c;
LAB_3ab8_2de5:
            *(undefined2 *)(unaff_BP + -0x72) = 0;
            *(undefined2 *)(unaff_BP + -0x156) = 0;
            *(undefined2 *)0xc1e = 0;
            *(undefined2 *)(unaff_BP + -0x12a) = 0;
            if (((0 < *(int *)(unaff_BP + -0x16e)) && (*(int *)(unaff_BP + -0x16e) < 4)) ||
               (*(int *)(unaff_BP + -0x16e) == 5)) {
LAB_3ab8_2e14:
              *(undefined2 *)(unaff_BP + -0x66) = 0;
LAB_3ab8_2e19:
              while( true ) {
                do {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        *(undefined2 *)0xc1e = 0;
                        if (*(int *)(unaff_BP + -0x16e) == 1) {
                          if (*(int *)0xcb6 == 0) {
                            uVar9 = *(undefined2 *)0xa4ce;
                            *(undefined2 *)0xb76a = *(undefined2 *)0xa4cc;
                            *(undefined2 *)0xb76c = uVar9;
                            uVar9 = *(undefined2 *)0xa48a;
                            *(undefined2 *)0xb784 = *(undefined2 *)0xa488;
                            *(undefined2 *)0xb786 = uVar9;
                          }
                          else {
                            uVar9 = *(undefined2 *)0xcbc;
                            *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
                            *(undefined2 *)0xb76c = uVar9;
                            uVar9 = *(undefined2 *)0xcc0;
                            *(undefined2 *)0xb784 = *(undefined2 *)0xcbe;
                            *(undefined2 *)0xb786 = uVar9;
                          }
                        }
                        if (*(int *)(unaff_BP + -0x16e) == 2) {
                          if (*(int *)0xcb6 == 0) {
                            uVar9 = *(undefined2 *)0xa48a;
                            *(undefined2 *)0xb76a = *(undefined2 *)0xa488;
                            *(undefined2 *)0xb76c = uVar9;
                            uVar9 = *(undefined2 *)0xa4ce;
                            *(undefined2 *)0xb784 = *(undefined2 *)0xa4cc;
                            *(undefined2 *)0xb786 = uVar9;
                          }
                          else {
                            FUN_28b3_0cb6();
                            func_0x00029af6();
                            FUN_28b3_0e53();
                            uVar9 = *(undefined2 *)0xcbc;
                            *(undefined2 *)0xb784 = *(undefined2 *)0xcba;
                            *(undefined2 *)0xb786 = uVar9;
                          }
                        }
                        if (*(int *)(unaff_BP + -0x16e) == 3) {
                          if (*(int *)0xcb6 == 0) {
                            FUN_28b3_0cb6();
                            func_0x00029d78();
                            func_0x00029c2c();
                            func_0x000299d1();
                          }
                          else {
                            FUN_28b3_0cb6();
                            func_0x00029bb5();
                            func_0x00029d78();
                            func_0x00029c2c();
                            func_0x000299d1();
                          }
                          iStack_6 = *(undefined2 *)(unaff_BP + -0x8a);
                          iStack_8 = *(undefined2 *)(unaff_BP + -0x8c);
                          iStack_a = 0x22b2;
                          iStack_c = 0xdab9;
                          func_0x0002a11e();
                          func_0x00029834();
                          FUN_28b3_0e53();
                          iStack_6 = *(int *)(unaff_BP + -0x8a);
                          iStack_8 = *(int *)(unaff_BP + -0x8c);
                          iStack_a = 0x22b2;
                          iStack_c = 0xdae3;
                          FUN_28b3_15dc();
                          func_0x00029834();
                          FUN_28b3_0e53();
                        }
                        uVar17 = 0;
                        uVar18 = *(int *)(unaff_BP + -0x12a) == 0;
                        if (!(bool)uVar18) {
                          FUN_28b3_0cb6();
                          func_0x00029ae7();
                          FUN_28b3_0cb6();
                          func_0x00029ae7();
                          FUN_28b3_1181();
                          if ((bool)uVar17) {
                            FUN_28b3_0cb6();
                            FUN_28b3_0cb6();
                            FUN_28b3_1181();
                            if (!(bool)uVar17 && !(bool)uVar18) {
                              FUN_28b3_0cb6();
                              func_0x00029af6();
                              FUN_28b3_0e53();
                              FUN_28b3_0cb6();
                              func_0x00029af6();
                              FUN_28b3_0e53();
                            }
                          }
                          else {
                            FUN_28b3_0cb6();
                            FUN_28b3_0cb6();
                            FUN_28b3_1181();
                            if ((bool)uVar17) {
                              FUN_28b3_0cb6();
                              func_0x00029af6();
                              FUN_28b3_0e53();
                              FUN_28b3_0cb6();
                              func_0x00029af6();
                              FUN_28b3_0e53();
                            }
                          }
                        }
                        func_0x0002b07d();
                        if (*(int *)(unaff_BP + -0x16e) < 4) {
                          FUN_1885_2ec3();
                          if (*(byte *)0x114a < 2) {
                            FUN_28b3_0cb6();
                            func_0x00029d78();
                            iStack_a = 0x22b2;
                            iStack_c = 0xdbf5;
                            func_0x000299d1();
                            iStack_a = 0x22b2;
                            iStack_c = 0xdbfe;
                            FUN_28b3_0cb6();
                            iStack_a = 0x22b2;
                            iStack_c = 0xdc03;
                            func_0x00029d78();
                            uStack_12 = 0x22b2;
                            iStack_14 = 0xdc0d;
                            func_0x000299d1();
                            uStack_12 = 9;
                            iStack_14 = 1;
                    /* WARNING: Call to offcut address within same function */
                            uStack_16 = 0x22b2;
                            uStack_18 = 0xdc1a;
                            func_0x00030897();
                          }
                          FUN_28b3_0cb6();
                          func_0x00029d78();
                          iStack_a = 0x22b2;
                          iStack_c = 0xdc35;
                          func_0x000299d1();
                          iStack_a = 0x22b2;
                          iStack_c = 0xdc3e;
                          FUN_28b3_0cb6();
                          iStack_a = 0x22b2;
                          iStack_c = 0xdc43;
                          func_0x00029d78();
                          uStack_12 = 0x22b2;
                          iStack_14 = 0xdc4d;
                          func_0x000299d1();
                          uStack_12 = 0;
                          iStack_14 = 2;
                    /* WARNING: Call to offcut address within same function */
                          uStack_16 = 0x22b2;
                          uStack_18 = 0xdc5a;
                          func_0x00030897();
                        }
                        iStack_6 = unaff_BP + -0x128;
                        iStack_8 = 0x2ab8;
                        iStack_a = 0xdc6f;
                        FUN_21f2_3454();
                        if (*(int *)0x1ce < 10) {
                          iStack_6 = 0x22b2;
                          iStack_8 = 0xdc8a;
                          FUN_21f2_2d26();
                        }
                        iStack_6 = 0x22b2;
                        iStack_8 = 0xdc9a;
                        FUN_21f2_2d26();
                        iStack_6 = 0x22b2;
                        iStack_8 = 0xdcaa;
                        FUN_21f2_2d26();
                        if ((*(int *)(unaff_BP + -0x72) == 0) || (*(int *)(unaff_BP + -0x156) != 0))
                        {
                          iStack_6 = 0x5f5b;
                          iStack_8 = 0xbf48;
                          iStack_a = 0x22b2;
                          iStack_c = 0xdcd4;
                          FUN_21f2_3454();
                          iStack_6 = 0x22b2;
                          iStack_8 = 0xdce4;
                          FUN_21f2_2d26();
                          if ((*(int *)(unaff_BP + -0x16e) < 4) &&
                             (*(int *)(unaff_BP + -0x12a) == 0)) {
                            iStack_6 = 0x22b2;
                            iStack_8 = 0xdd07;
                            FUN_21f2_2d26();
                            iStack_6 = 0x22b2;
                            iStack_8 = 0xdd16;
                            FUN_21f2_2d26();
                          }
                          if (*(int *)(unaff_BP + -0x12a) == 0) {
                            iStack_6 = 0x22b2;
                            iStack_8 = 0xdd2f;
                            FUN_21f2_2d26();
                            iStack_6 = 0x22b2;
                            iStack_8 = 0xdd3e;
                            FUN_21f2_2d26();
                            if (*(int *)(unaff_BP + -0x16e) == 5) {
                              iStack_6 = 0x22b2;
                              iStack_8 = 0xdd57;
                              FUN_21f2_2d26();
                              iStack_6 = 0x22b2;
                              iStack_8 = 0xdd66;
                              FUN_21f2_2d26();
                            }
                          }
                          else if (*(int *)(unaff_BP + -0x16e) == 5) {
                            if (*(int *)(unaff_BP + -0x20e) < 1) {
                              iStack_6 = 0x22b2;
                              iStack_8 = 0xdd9e;
                              FUN_21f2_2d26();
                            }
                            else {
                              iStack_6 = 0x22b2;
                              iStack_8 = 0xdd8c;
                              FUN_21f2_2d26();
                            }
                            iStack_6 = 0x22b2;
                            iStack_8 = 0xddad;
                            FUN_21f2_2d26();
                          }
                          if (*(int *)(unaff_BP + -0x16e) < 4) {
                            iStack_6 = 0x22b2;
                            iStack_8 = 0xddc6;
                            FUN_21f2_2d26();
                            iStack_6 = 0x22b2;
                            iStack_8 = 0xddd5;
                            FUN_21f2_2d26();
                          }
                          iStack_6 = 0x22b2;
                          iStack_8 = 0xdde5;
                          FUN_21f2_2d26();
                          iStack_6 = 0x22b2;
                          uVar9 = 0x1bb4;
                          iStack_8 = 0xddf5;
                          FUN_1def_07a4();
                          *(undefined2 *)0xc2c = 0;
                          if (*(int *)(unaff_BP + -0x16e) == 5) {
                            *(undefined2 *)0xc2c = 1;
                          }
                        }
                        else {
                          *(undefined2 *)0xc22 = 1;
                          iStack_6 = 0xbf48;
                          iStack_8 = 0x22b2;
                          iStack_a = 0xde28;
                          FUN_21f2_3454();
                          iStack_6 = 2;
                          iStack_8 = 0x11;
                          iStack_a = 0xbf48;
                          iStack_c = 0x22b2;
                          iStack_e = 0xde44;
                          FUN_1000_02b5();
                          iStack_6 = 0xdef;
                          iStack_8 = 0xde55;
                          FUN_21f2_2d26();
                          iStack_6 = 0x22b2;
                          iStack_8 = 0xde65;
                          FUN_21f2_2d26();
                          iStack_6 = 0x22b2;
                          iStack_8 = 0xde75;
                          FUN_21f2_2d26();
                          iStack_6 = 0x22b2;
                          uVar9 = 0x22b2;
                          iStack_8 = 0xde85;
                          FUN_21f2_2d26();
                          if (*(int *)0xce6 == 0) {
                            if (*(int *)(unaff_BP + -0x16e) < 4) {
                              iStack_6 = 0x22b2;
                              iStack_8 = 0xdedc;
                              FUN_21f2_2d26();
                              iStack_6 = 0x22b2;
                              iStack_8 = 0xdeec;
                              FUN_21f2_2d26();
                              iStack_6 = 0x22b2;
                              iStack_8 = 0xdefc;
                              FUN_21f2_2d26();
                              iStack_6 = 0x22b2;
                              uVar9 = 0x1bb4;
                              iStack_8 = 0xdf0c;
                              FUN_1def_07a4();
                            }
                          }
                          else {
                            iStack_6 = 0x22b2;
                            iStack_8 = 0xde9f;
                            FUN_21f2_2d26();
                            iStack_6 = 0x22b2;
                            iStack_8 = 0xdeaf;
                            FUN_21f2_2d26();
                            iStack_6 = 0x22b2;
                            uVar9 = 0x1bb4;
                            iStack_8 = 0xdebf;
                            FUN_1def_07a4();
                          }
                          *(undefined2 *)0xc2c = 1;
                        }
                        *(undefined2 *)0xc1a = 1;
                        *(undefined2 *)0xc20 = 1;
                        if (*(int *)0xce6 != 0) {
                          *(undefined2 *)0xc1a = 0;
                        }
                        iStack_6 = unaff_BP + -0x166;
                        iStack_8 = unaff_BP + -0x128;
                        iStack_a = 9999;
                        iVar16 = 0x1bb4;
                        iStack_e = -0x20b6;
                        iStack_c = uVar9;
                        uVar9 = FUN_1def_0904();
                        *(undefined2 *)(unaff_BP + -0x210) = uVar9;
                        *(undefined2 *)0xc1a = 0;
                        *(undefined2 *)0xc20 = 0;
                        *(undefined2 *)0xc2c = 0;
                        if (*(int *)0x158 != 0) goto code_r0x000304fb;
                        if ((*(int *)0xc18 != -2) || (*(byte *)0x126 < 3)) break;
                        FUN_1885_2ec3();
                        *(undefined2 *)(unaff_BP + -0x72) = 0;
                        iStack_6 = *(int *)(unaff_BP + -0x164);
                        iStack_8 = *(int *)(unaff_BP + -0x166);
                        iStack_a = 0x1b6e;
                        iStack_c = 0xdf9d;
                        FUN_28b3_216a();
                      }
                      if (*(int *)0xc18 == 0) break;
                      FUN_1885_2ec3();
                      *(undefined2 *)(unaff_BP + -0x72) = 0;
                      FUN_28b3_0cb6();
                      func_0x00029d78();
                      iStack_a = 0x22b2;
                      iStack_c = 0xdfcf;
                      func_0x000299d1();
                      iStack_a = 0x22b2;
                      iStack_c = 0xdfd8;
                      FUN_28b3_0cb6();
                      iStack_a = 0x22b2;
                      iStack_c = 0xdfdd;
                      func_0x00029d78();
                      uStack_12 = 0x22b2;
                      iStack_14 = 0xdfe7;
                      func_0x000299d1();
                      uStack_12 = 0x22b2;
                      iStack_14 = -0x2014;
                      func_0x0000507a();
                    }
                    if ((0x61ff < *(int *)(unaff_BP + -0x210)) &&
                       (*(int *)(unaff_BP + -0x210) < 0x6b01)) {
                      uVar8 = *(int *)(unaff_BP + -0x210) + 0x9f00;
                      uVar11 = (int)uVar8 >> 0xf;
                      *(int *)0x1ce = ((int)((uVar8 ^ uVar11) - uVar11) >> 8 ^ uVar11) - uVar11;
                    }
                    if (((*(int *)(unaff_BP + -0x210) == -1) && (*(int *)(unaff_BP + -0x72) == 0))
                       || (*(int *)(unaff_BP + -0x210) == 0x14)) {
                      iVar16 = 0x1b6e;
                      FUN_1885_2ec3();
                      if (*(int *)(unaff_BP + -0x12a) != 0) {
                        *(undefined2 *)(unaff_BP + -0x12a) = 0;
                        goto LAB_3ab8_2e14;
                      }
                      if (*(int *)(unaff_BP + -0x16e) < 4) {
                        if ((*(int *)(unaff_BP + -0x210) == -1) && (*(int *)(unaff_BP + -0x9e) != 0)
                           ) goto LAB_3ab8_2bc5;
                        goto LAB_3ab8_230c;
                      }
                      if (*(int *)(unaff_BP + -0x16e) == 5) {
                        if (*(int *)0xce6 != 0) goto code_r0x000304fb;
                        if (*(int *)(unaff_BP + -0x72) == 0) goto LAB_3ab8_209d;
                        *(undefined2 *)(unaff_BP + -0x72) = 0;
                        goto LAB_3ab8_2de5;
                      }
                    }
                    if ((*(int *)(unaff_BP + -0x210) == -1) && (*(int *)(unaff_BP + -0x72) != 0)) {
                      FUN_1885_2ec3();
                      *(undefined2 *)(unaff_BP + -300) = 1;
                      while (*(int *)(unaff_BP + -300) <= *(int *)(unaff_BP + -0x16)) {
                        uVar9 = *(undefined2 *)0x14a;
                        *(undefined2 *)(unaff_BP + -0x16a) = *(undefined2 *)0x148;
                        *(undefined2 *)(unaff_BP + -0x168) = uVar9;
                        iStack_6 = 0xe0f0;
                        func_0x0000daa6();
                        iStack_6 = 0x885;
                        iStack_8 = -0x1f02;
                        func_0x00018779();
                        *(int *)(unaff_BP + -300) = *(int *)(unaff_BP + -300) + 1;
                      }
                      *(undefined2 *)(unaff_BP + -300) = 1;
                      while (*(int *)(unaff_BP + -300) <= *(int *)(unaff_BP + -0xa2)) {
                        *(undefined2 *)(unaff_BP + -0x68) = *(undefined2 *)0x152;
                        iStack_6 = 0xe12c;
                        func_0x0000daa6();
                        iStack_6 = -0x1ecb;
                        FUN_1def_186d();
                        *(int *)(unaff_BP + -300) = *(int *)(unaff_BP + -300) + 1;
                      }
                      if (*(int *)(unaff_BP + -0x1c) != 0) {
                        *(undefined2 *)(unaff_BP + -0x68) = *(undefined2 *)0x150;
                        *(undefined2 *)(unaff_BP + -0x1c) = 0;
                        iStack_6 = 0xe154;
                        func_0x0000daa6();
                        iStack_6 = -0x1ea3;
                        func_0x000190c7();
                      }
                      func_0x0000abfa();
                      iVar16 = 0x885;
                      iStack_6 = -0x1e94;
                      func_0x0000b1d8();
                      *(undefined2 *)(unaff_BP + -0x72) = 0;
                    }
                    if ((*(int *)(unaff_BP + -0x16e) == 5) ||
                       (((*(int *)(unaff_BP + -0x210) != 5 || (*(int *)(unaff_BP + -0x12a) != 0)) &&
                        ((*(int *)(unaff_BP + -0x210) != 2 || (*(int *)(unaff_BP + -0x12a) == 0)))))
                       ) break;
                    func_0x0000c3ca();
                    FUN_28b3_0cb6();
                    func_0x00029d78();
                    iStack_a = 0x22b2;
                    iStack_c = 0xe1c1;
                    func_0x000299d1();
                    iStack_a = 0x22b2;
                    iStack_c = 0xe1ca;
                    FUN_28b3_0cb6();
                    iStack_a = 0x22b2;
                    iStack_c = 0xe1cf;
                    func_0x00029d78();
                    uStack_12 = 0x22b2;
                    iStack_14 = 0xe1d9;
                    func_0x000299d1();
                    uStack_12 = 0x22b2;
                    iStack_14 = 0xe1e2;
                    FUN_28b3_0cb6();
                    uStack_12 = 0x22b2;
                    iStack_14 = -0x1e19;
                    func_0x00029d78();
                    uStack_1a = 0x22b2;
                    iStack_1c = 0xe1f1;
                    func_0x000299d1();
                    uStack_1a = 0x22b2;
                    iStack_1c = 0xe1fa;
                    FUN_28b3_0cb6();
                    uStack_1a = 0x22b2;
                    iStack_1c = -0x1e01;
                    func_0x00029d78();
                    uStack_22 = 0x22b2;
                    iStack_24 = -0x1df7;
                    func_0x000299d1();
                    uStack_22 = *(undefined2 *)(unaff_BP + -0x12a);
                    iStack_24 = unaff_BP + -0x1fa;
                    iVar16 = 0x2ab8;
                    uStack_28 = 0xe217;
                    uVar9 = func_0x0002c3ff();
                    *(undefined2 *)(unaff_BP + -0x256) = uVar9;
                    if (*(int *)0x158 != 0) goto code_r0x000304fb;
                    if ((*(int *)(unaff_BP + -0x256) != -1) && (*(int *)(unaff_BP + -0x256) != 0))
                    goto LAB_3ab8_209d;
                  }
                  if (*(int *)(unaff_BP + -0x210) == 1) {
                    if ((*(int *)(unaff_BP + -0x72) == 0) || (*(int *)(unaff_BP + -0x156) != 0)) {
                      *(int *)0x1124 = *(int *)0x1124 + 1;
                      if (3 < *(int *)0x1124) {
                        *(undefined2 *)0x1124 = 0;
                      }
                    }
                    else {
                      if (*(int *)0xce6 != 0) goto code_r0x000304fb;
                      if (*(int *)(unaff_BP + -0x16e) < 4) {
                        uVar9 = *(undefined2 *)(unaff_BP + -0x206);
                        *(undefined2 *)(unaff_BP + -0x166) = *(undefined2 *)(unaff_BP + -0x208);
                        *(undefined2 *)(unaff_BP + -0x164) = uVar9;
                        FUN_28b3_0cb6();
                        iStack_6 = 0xe2b3;
                        func_0x00029bb5();
                        FUN_28b3_0e53();
                        uVar9 = *(undefined2 *)(unaff_BP + -0x218);
                        *(undefined2 *)(unaff_BP + -0x17e) = *(undefined2 *)(unaff_BP + -0x21a);
                        *(undefined2 *)(unaff_BP + -0x17c) = uVar9;
                        FUN_28b3_0cb6();
                        iStack_6 = 0xe2dc;
                        func_0x00029bb5();
                        FUN_28b3_0e53();
                        *(undefined2 *)(unaff_BP + -0x66) = 1;
                        goto LAB_3ab8_423f;
                      }
                    }
                  }
                  if ((*(int *)(unaff_BP + -0x16e) == 5) && (*(int *)(unaff_BP + -0x210) == 2)) {
                    *(undefined2 *)(unaff_BP + -0xa0) = 0;
                    *(undefined2 *)(unaff_BP + -0x210) = 0;
                    if (*(int *)(unaff_BP + -0x12a) == 0) {
                      *(undefined2 *)(unaff_BP + -0x12a) = 1;
                    }
                    else {
                      *(int *)(unaff_BP + -0x20e) = -*(int *)(unaff_BP + -0x20e);
                    }
                  }
                  if ((*(int *)(unaff_BP + -0x16e) == 5) && (*(int *)(unaff_BP + -0x210) == 3)) {
                    iVar16 = 0x885;
                    func_0x0000c3ca();
                    pcVar6 = (code *)swi(0x3f);
                    (*pcVar6)();
                    if (*(int *)0x158 != 0) goto code_r0x000304fb;
                    goto LAB_3ab8_2de5;
                  }
                  if ((*(int *)(unaff_BP + -0x16e) < 4) &&
                     ((*(int *)(unaff_BP + -0x210) == 2 || (*(int *)(unaff_BP + -0x210) == 3))))
                  goto LAB_3ab8_37f1;
                  if ((*(int *)(unaff_BP + -0x16e) < 4) && (*(int *)(unaff_BP + -0x210) == 4)) {
                    *(undefined2 *)(unaff_BP + -0xa0) = 0;
                    *(undefined2 *)(unaff_BP + -0x12a) = 1;
                  }
                } while (*(int *)(unaff_BP + -0xa0) == 0);
                uVar8 = *(uint *)0x148;
                iVar10 = *(int *)0x14a;
                *(uint *)(unaff_BP + -0x256) = uVar8;
                *(int *)(unaff_BP + -0x254) = iVar10;
                if (*(int *)(unaff_BP + -0x16e) < 4) {
                  iVar12 = *(int *)0x13e - (uint)(*(uint *)0x13c < 2);
                  if ((iVar10 <= iVar12) && ((iVar10 < iVar12 || (uVar8 <= *(uint *)0x13c - 2)))) {
                    *(int *)0x148 = uVar8 + 2;
                    *(int *)0x14a = iVar10 + (uint)(0xfffd < uVar8);
                  }
                }
                iStack_6 = 2;
                iStack_a = -0x1bff;
                iStack_8 = iVar16;
                uVar9 = func_0x00015409();
                *(undefined2 *)(unaff_BP + -0x252) = uVar9;
                uVar9 = *(undefined2 *)(unaff_BP + -0x254);
                *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x256);
                *(undefined2 *)0x14a = uVar9;
                *(undefined2 *)(unaff_BP + -0x66) = 0;
                if (*(int *)(unaff_BP + -0x252) != 0) break;
                *(undefined2 *)0xc1e = 0;
              }
              *(undefined2 *)0xc1e = 0;
              if (((*(int *)(unaff_BP + -0x72) == 0) || (*(int *)(unaff_BP + -0xa0) != 2)) ||
                 (uVar17 = *(int *)(unaff_BP + -0x156) == 0, !(bool)uVar17)) {
                *(undefined2 *)(unaff_BP + -0x156) = 0;
                iVar16 = 0x11f2;
                goto LAB_3ab8_398d;
              }
              FUN_28b3_0cb6();
              FUN_28b3_0cb6();
              FUN_28b3_1181();
              if ((bool)uVar17) {
                FUN_28b3_0cb6();
                FUN_28b3_0cb6();
                FUN_28b3_1181();
                if ((bool)uVar17) {
                  iStack_6 = -0x1b76;
                  func_0x00012276();
                  *(undefined1 *)(unaff_BP + -0x1fa) = 0;
                  goto LAB_3ab8_2e19;
                }
              }
              uVar9 = *(undefined2 *)(unaff_BP + -0x164);
              *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)(unaff_BP + -0x166);
              *(undefined2 *)(unaff_BP + -0x8e) = uVar9;
              uVar9 = *(undefined2 *)(unaff_BP + -0x206);
              *(undefined2 *)(unaff_BP + -0x166) = *(undefined2 *)(unaff_BP + -0x208);
              *(undefined2 *)(unaff_BP + -0x164) = uVar9;
              uVar9 = *(undefined2 *)(unaff_BP + -0x8e);
              *(undefined2 *)(unaff_BP + -0x208) = *(undefined2 *)(unaff_BP + -0x90);
              *(undefined2 *)(unaff_BP + -0x206) = uVar9;
              uVar9 = *(undefined2 *)(unaff_BP + -0x17c);
              *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)(unaff_BP + -0x17e);
              *(undefined2 *)(unaff_BP + -0x8e) = uVar9;
              uVar9 = *(undefined2 *)(unaff_BP + -0x218);
              *(undefined2 *)(unaff_BP + -0x17e) = *(undefined2 *)(unaff_BP + -0x21a);
              *(undefined2 *)(unaff_BP + -0x17c) = uVar9;
              uVar9 = *(undefined2 *)(unaff_BP + -0x8e);
              *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)(unaff_BP + -0x90);
              *(undefined2 *)(unaff_BP + -0x218) = uVar9;
              *(undefined2 *)(unaff_BP + -0x66) = 1;
              goto LAB_3ab8_423f;
            }
            *(undefined2 *)(unaff_BP + -0x72) = 0;
            goto LAB_3ab8_462e;
          }
          goto code_r0x000304fb;
        }
        *(undefined1 *)(unaff_BP + -0x230) = *(undefined1 *)(unaff_BP + -0xa0);
      } while (*(int *)(unaff_BP + -0xa0) == 0);
      FUN_28b3_0cb6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xf9cd;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xf9d6;
      FUN_28b3_0cb6();
      iStack_a = 0x22b2;
      iStack_c = 0xf9db;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xf9e5;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      iStack_14 = -0x616;
      iVar10 = func_0x0001b204();
      *(int *)(unaff_BP + -0xb4) = iVar10;
    } while (iVar10 == 0);
    uVar9 = *(undefined2 *)(unaff_BP + -0x21c);
    *(undefined2 *)(unaff_BP + -0xc0) = *(undefined2 *)(unaff_BP + -0x21e);
    *(undefined2 *)(unaff_BP + -0xbe) = uVar9;
    uVar9 = *(undefined2 *)(unaff_BP + -0x222);
    *(undefined2 *)(unaff_BP + -0x134) = *(undefined2 *)(unaff_BP + -0x224);
    *(undefined2 *)(unaff_BP + -0x132) = uVar9;
    iStack_6 = -0x5d8;
    puVar21 = (undefined2 *)func_0x00000398();
    puVar14 = (undefined2 *)puVar21;
    puVar7 = (undefined2 *)(unaff_BP + -0x154);
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar5 = *puVar4;
    }
    if (((*(byte *)(unaff_BP + -0x13e) & 0x10) == 0) && ((*(byte *)(unaff_BP + -0x13d) & 0x40) == 0)
       ) {
      iStack_6 = 0;
      iStack_8 = -0x5a5;
      FUN_1000_0599();
      *(undefined2 *)0xc22 = 1;
      iStack_6 = 0xfa6c;
      func_0x00012276();
      iStack_6 = -0x58a;
      func_0x00012276();
      if (*(char *)0x124 != '\0') goto LAB_3ab8_4f04;
    }
    else {
LAB_3ab8_4f04:
      FUN_28b3_0cb6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xfa9c;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xfaa5;
      FUN_28b3_0cb6();
      iStack_a = 0x22b2;
      iStack_c = 0xfaaa;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xfab4;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      iStack_14 = 0xfabd;
      FUN_28b3_0cb6();
      uStack_12 = 0x22b2;
      iStack_14 = -0x53e;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      iStack_1c = 0xfacc;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      iStack_1c = 0xfad5;
      FUN_28b3_0cb6();
      uStack_1a = 0x22b2;
      iStack_1c = -0x526;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      iStack_24 = -0x51c;
      func_0x000299d1();
      uStack_22 = 0x22b2;
      iStack_24 = -0x517;
      FUN_1def_043a();
      FUN_28b3_0cb6();
      FUN_28b3_100d();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      FUN_28b3_100d();
      FUN_28b3_0e53();
      iStack_6 = unaff_BP + -0x328;
      iStack_8 = 0x22b2;
      iStack_a = -0x4ce;
      FUN_1885_0344();
      *(undefined2 *)(unaff_BP + -0x252) = 10;
      if ((*(byte *)(unaff_BP + -0x13d) & 1) != 0) {
        *(undefined2 *)(unaff_BP + -0x252) = 0xb;
      }
      if ((*(byte *)(unaff_BP + -0x13d) & 2) != 0) {
        *(undefined2 *)(unaff_BP + -0x252) = 0xc;
      }
      if ((*(byte *)(unaff_BP + -0x13d) & 4) != 0) {
        *(undefined2 *)(unaff_BP + -0x252) = 0xd;
      }
      if ((*(byte *)(unaff_BP + -0x13d) & 0x10) != 0) {
        *(undefined2 *)(unaff_BP + -0x252) = 0xf;
      }
      if ((*(char *)(unaff_BP + -0x230) != '\x02') || (*(int *)(unaff_BP + -0x252) != 0xd)) {
        if (*(char *)(unaff_BP + -0x230) != '\x01') {
          uVar9 = FUN_3ab8_51bc();
          return uVar9;
        }
        func_0x0001bb4e();
        iStack_6 = 0x1bb4;
        iStack_8 = 0xfbd7;
        func_0x00012276();
        if (*(char *)0xb782 == '\0') {
          func_0x0000c354();
          iStack_6 = *(int *)0xa5a + 1;
          iStack_8 = 0;
          iStack_a = 0x885;
          iStack_c = 0xfbfe;
          func_0x0000a76b();
        }
        func_0x0000a799();
        *(undefined2 *)(unaff_BP + -0x32a) = *(undefined2 *)0xfda;
        *(undefined2 *)0xfda = 0;
        iStack_6 = 0x885;
        iStack_8 = 0xfc20;
        FUN_1000_0599();
        uVar9 = 0xdef;
        FUN_1000_060e();
        if (*(char *)0x1131 != '\0') {
          uVar9 = 0x2c1;
          func_0x00002ca6();
        }
        iStack_6 = 0x12;
        iStack_8 = unaff_BP + -0x328;
        iStack_c = 0xfc4c;
        iStack_a = uVar9;
        uVar9 = FUN_12c1_03d3();
        *(undefined2 *)(unaff_BP + -0x26) = uVar9;
        func_0x00002cc6();
        FUN_1000_0620();
        *(undefined2 *)0xfda = *(undefined2 *)(unaff_BP + -0x32a);
        if (*(int *)0xc22 != 0) {
          iStack_6 = 0xdef;
          iStack_8 = -0x386;
          FUN_1000_0599();
        }
        func_0x00010526();
        if (3 < *(byte *)0xb782) {
          pcVar6 = (code *)swi(0x3f);
          (*pcVar6)();
        }
        iStack_6 = 0xfc9e;
        func_0x0000daa6();
        iStack_6 = 0;
        iStack_8 = 0;
        iStack_a = 0x885;
        iStack_c = 0xfcb1;
        func_0x0000f1d8();
        iStack_6 = 1;
        iStack_8 = 7;
        iStack_a = *(int *)0x1b40;
        iStack_c = *(undefined2 *)0x1b3e;
        iStack_e = *(int *)0xa5e;
        uStack_10 = 0;
        uStack_12 = 0xdef;
        iStack_14 = -0x327;
        func_0x0000f350();
        if (*(char *)0xb782 == '\0') {
          iStack_6 = 0;
          iStack_8 = 7;
          iStack_a = *(int *)0xa5a;
          iStack_c = *(undefined2 *)0xa58;
          iStack_e = *(int *)0xa5e;
          uStack_10 = *(undefined2 *)0xa58;
          uStack_12 = 0xdef;
          iStack_14 = -0x2f5;
          func_0x0000f350();
        }
        func_0x0000abfa();
        func_0x0000ac64();
        func_0x0000a799();
        if (*(int *)0x158 == 0) {
          if (*(int *)(unaff_BP + -0x26) < 1) {
            uVar9 = FUN_3ab8_4c39();
            return uVar9;
          }
          uVar9 = FUN_3ab8_51bc();
          return uVar9;
        }
        goto code_r0x000304fb;
      }
      iStack_6 = 0x18b3;
      iStack_8 = -0x464;
      FUN_1000_0599();
      *(undefined2 *)0xc22 = 1;
      iStack_6 = 0xfbad;
      func_0x00012276();
      iStack_6 = -0x449;
      func_0x00012276();
    }
LAB_3ab8_4c2f:
    if (*(int *)(unaff_BP + -0x16e) != 8) {
      FUN_32b2_710c();
      FUN_32b2_6e99();
      FUN_32b2_6eb1();
      FUN_32b2_6d14();
code_r0x000304fb:
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
      uStack_10 = 0x5ea;
      FUN_32b2_6eb1();
      iStack_e = 0x32b2;
      uStack_10 = 0x5f2;
      FUN_32b2_6cc6();
      iStack_e = 0x32b2;
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
      iStack_24 = *(int *)(unaff_BP + -0x4e);
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
      uVar9 = *(undefined2 *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
      *(undefined2 *)(unaff_BP + -0x84) = uVar9;
      uVar9 = *(undefined2 *)(unaff_BP + -0x88);
      *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
      *(undefined2 *)(unaff_BP + -0x9c) = uVar9;
      piVar13 = &iStack_24;
      puVar7 = (undefined2 *)(unaff_BP + 0x1c);
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar4 = piVar13;
        piVar13 = piVar13 + 1;
        puVar21 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar4 = *puVar21;
      }
      uStack_28 = 0x684;
      iVar10 = func_0x0003fdaf();
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
      if ((bool)uVar17) {
        uVar9 = 0;
      }
      else {
        FUN_32b2_6d14();
        FUN_32b2_6fc7();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_7191();
        if (!(bool)uVar17) {
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
        iStack_1c = *(undefined2 *)(unaff_BP + -0x68);
        iStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
        uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
        iStack_24 = *(int *)(unaff_BP + -0x4c);
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
        uVar17 = (undefined1 *)0xffc9 < &uStack_38;
        uVar18 = &stack0x0000 == (undefined1 *)0x2;
        iStack_6 = 0x84f;
        FUN_32b2_6cc6();
        iStack_6 = 0x857;
        FUN_32b2_6cc6();
        iStack_6 = 0x85c;
        FUN_32b2_7191();
        if ((bool)uVar18) {
          uVar9 = *(undefined2 *)(unaff_BP + 8);
          *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
          *(undefined2 *)(unaff_BP + -0x60) = uVar9;
        }
        iStack_6 = 0x872;
        FUN_32b2_6cc6();
        iStack_6 = 0x87a;
        FUN_32b2_6cc6();
        iStack_6 = 0x87f;
        FUN_32b2_7191();
        if ((bool)uVar18) {
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
        uVar18 = *piVar1 == 0;
        iStack_6 = 0x8d7;
        FUN_32b2_6d14();
        iStack_6 = 0x8e0;
        FUN_32b2_6d14();
        iStack_6 = 0x8e5;
        FUN_32b2_7191();
        if (!(bool)uVar17 && !(bool)uVar18) {
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
          iStack_1c = 0x98f;
          FUN_32b2_6eb1();
          uStack_1a = *(undefined2 *)(unaff_BP + -100);
          iStack_1c = *(undefined2 *)(unaff_BP + -0x66);
          iStack_1e = *(undefined2 *)(unaff_BP + -0x68);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
          iStack_24 = *(int *)(unaff_BP + -0x4a);
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
          uVar17 = &stack0x0000 == (undefined1 *)0x4;
          iStack_6 = 0x32b2;
          iStack_8 = 0x9df;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          iStack_8 = 0x9e7;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          iStack_8 = 0x9ec;
          FUN_32b2_7191();
          if ((bool)uVar17) {
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
          if ((bool)uVar17) {
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
        uVar9 = *(undefined2 *)(unaff_BP + -0x36);
      }
      return uVar9;
    }
  } while( true );
LAB_3ab8_21e1:
  *(undefined2 *)(unaff_BP + -0x72) = 0;
  iStack_6 = *(undefined2 *)(unaff_BP + -0x21c);
  iStack_8 = *(undefined2 *)(unaff_BP + -0x21e);
  iStack_a = 0x1bb4;
  iVar16 = 0x2ab8;
  iStack_c = 0xcd7b;
  FUN_28b3_216a();
  goto LAB_3ab8_209d;
LAB_3ab8_37f1:
  *(int *)(unaff_BP + -0x156) = *(int *)(unaff_BP + -0x210) + -1;
LAB_3ab8_398d:
  *(undefined2 *)(unaff_BP + -0x72) = 0;
  *(undefined2 *)0xc1e = 0;
  if (*(int *)(unaff_BP + -0x156) != 0) {
    while (*(int *)0x158 == 0) {
      FUN_1885_2ec3();
      if (*(byte *)0x114a < 2) {
        FUN_28b3_0cb6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xe551;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xe55a;
        FUN_28b3_0cb6();
        iStack_a = 0x22b2;
        iStack_c = 0xe55f;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        iStack_14 = 0xe569;
        func_0x000299d1();
        uStack_12 = 9;
        iStack_14 = 1;
                    /* WARNING: Call to offcut address within same function */
        uStack_16 = 0x22b2;
        uStack_18 = 0xe576;
        func_0x00030897();
      }
      FUN_28b3_0cb6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xe591;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xe59a;
      FUN_28b3_0cb6();
      iStack_a = 0x22b2;
      iStack_c = 0xe59f;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xe5a9;
      func_0x000299d1();
      uStack_12 = 0;
      iStack_14 = 2;
                    /* WARNING: Call to offcut address within same function */
      uStack_16 = 0x22b2;
      uStack_18 = 0xe5b6;
      func_0x00030897();
      iStack_6 = unaff_BP + -0x128;
      iStack_8 = 0x2ab8;
      iStack_a = 0xe5cb;
      FUN_21f2_3454();
      *(undefined2 *)0xc20 = 0;
      iStack_6 = unaff_BP + -0x166;
      iStack_8 = unaff_BP + -0x128;
      iStack_a = 9999;
      iStack_c = 0x22b2;
      iVar16 = 0x1bb4;
      iStack_e = -0x1a0f;
      uVar9 = FUN_1def_0904();
      *(undefined2 *)(unaff_BP + -0x210) = uVar9;
      if (*(int *)0x158 != 0) goto code_r0x000304fb;
      if (*(int *)(unaff_BP + -0x210) == -1) {
        FUN_1885_2ec3();
        goto LAB_3ab8_2e14;
      }
      *(undefined2 *)(unaff_BP + -0x20a) = 0;
      *(undefined2 *)(unaff_BP + -0x20c) = 0;
      if (*(int *)(unaff_BP + -0xa0) != 0) {
        FUN_28b3_0cb6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xe643;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xe64c;
        FUN_28b3_0cb6();
        iStack_a = 0x22b2;
        iStack_c = 0xe651;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        iStack_14 = 0xe65b;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        iVar16 = 0x11f2;
        iStack_14 = -0x19a0;
        lVar20 = func_0x0001765f();
        *(undefined2 *)(unaff_BP + -0x20c) = (int)lVar20;
        *(undefined2 *)(unaff_BP + -0x20a) = (int)((ulong)lVar20 >> 0x10);
        if (lVar20 < 0) break;
        iStack_6 = 0x11f2;
        iStack_8 = 0xe686;
        FUN_1000_0599();
        iStack_6 = 0xdef;
        iVar16 = 0x11f2;
        iStack_8 = -0x196b;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
      }
    }
    if (*(int *)0x158 != 0) goto code_r0x000304fb;
    iStack_8 = 0xe6c3;
    iStack_6 = iVar16;
    puVar21 = (undefined2 *)func_0x00000271();
    puVar14 = (undefined2 *)puVar21;
    puVar7 = (undefined2 *)(unaff_BP + -0x4a);
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar5 = *puVar4;
    }
    uVar9 = *(undefined2 *)(unaff_BP + -0x44);
    *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -0x46);
    *(undefined2 *)0xb380 = uVar9;
    FUN_28b3_0cb6();
    FUN_28b3_0e3b();
    FUN_28b3_0e53();
    uVar9 = *(undefined2 *)(unaff_BP + -0x44);
    *(undefined2 *)(unaff_BP + -0x5c) = *(undefined2 *)(unaff_BP + -0x46);
    *(undefined2 *)(unaff_BP + -0x5a) = uVar9;
    FUN_28b3_0cb6();
    func_0x00029b6d();
    func_0x00029bb5();
    FUN_28b3_0e53();
    FUN_28b3_0cb6();
    func_0x00029b6d();
    func_0x00029bb5();
    FUN_28b3_0e53();
    iStack_6 = 0x22b2;
    iStack_8 = 0xe755;
    uVar19 = func_0x0000013f();
    *(undefined2 *)(unaff_BP + -0x24e) = (int)uVar19;
    *(undefined2 *)(unaff_BP + -0x24c) = (int)((ulong)uVar19 >> 0x10);
    puVar7 = (undefined2 *)(unaff_BP + -0x60);
    puVar21 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x24e);
    puVar14 = (undefined2 *)puVar21;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar4 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar5 = *puVar4;
    }
    iStack_6 = unaff_BP + -0x252;
    iStack_8 = unaff_BP + -0x256;
    iStack_a = *(undefined2 *)(unaff_BP + -0x20a);
    iStack_c = *(undefined2 *)(unaff_BP + -0x20c);
    iStack_e = 0;
    uStack_10 = 0;
    uStack_12 = 0;
    iStack_14 = 0xe790;
    FUN_1def_2b59();
    if (*(int *)(unaff_BP + -0x156) == 1) {
      FUN_28b3_0cb6();
      FUN_28b3_0cb6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xe7be;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xe7c7;
      FUN_28b3_0cb6();
      iStack_a = 0x22b2;
      iStack_c = 0xe7cc;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xe7d6;
      func_0x000299d1();
      *(undefined2 *)0xc1e = 1;
      uStack_12 = 1;
      iStack_14 = 0x22b2;
      uStack_16 = 0xe7e2;
      FUN_1def_05d1();
      uVar17 = (undefined1 *)0xffed < &uStack_12;
      FUN_28b3_0cb6();
      FUN_28b3_1181();
      if ((bool)uVar17) {
        FUN_28b3_0cb6();
        FUN_28b3_0cb6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xe819;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xe822;
        FUN_28b3_0cb6();
        iStack_a = 0x22b2;
        iStack_c = 0xe827;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        iStack_14 = 0xe831;
        func_0x000299d1();
        uStack_12 = 1;
        iStack_14 = 0x22b2;
        uStack_16 = 0xe83a;
        FUN_1def_05d1();
        uVar17 = (undefined1 *)0xffed < &uStack_12;
        FUN_28b3_0cb6();
        FUN_28b3_1181();
        if ((bool)uVar17) {
          uVar9 = *(undefined2 *)(unaff_BP + -0x254);
          *(undefined2 *)(unaff_BP + -0x166) = *(undefined2 *)(unaff_BP + -0x256);
          *(undefined2 *)(unaff_BP + -0x164) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x250);
          *(undefined2 *)(unaff_BP + -0x17e) = *(undefined2 *)(unaff_BP + -0x252);
          *(undefined2 *)(unaff_BP + -0x17c) = uVar9;
        }
        else {
          uVar9 = *(undefined2 *)(unaff_BP + -0x206);
          *(undefined2 *)(unaff_BP + -0x166) = *(undefined2 *)(unaff_BP + -0x208);
          *(undefined2 *)(unaff_BP + -0x164) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x218);
          *(undefined2 *)(unaff_BP + -0x17e) = *(undefined2 *)(unaff_BP + -0x21a);
          *(undefined2 *)(unaff_BP + -0x17c) = uVar9;
        }
        uVar9 = *(undefined2 *)(unaff_BP + -0x48);
        *(undefined2 *)(unaff_BP + -0x208) = *(undefined2 *)(unaff_BP + -0x4a);
        *(undefined2 *)(unaff_BP + -0x206) = uVar9;
        uVar9 = *(undefined2 *)(unaff_BP + -0x44);
        *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)(unaff_BP + -0x46);
        *(undefined2 *)(unaff_BP + -0x218) = uVar9;
      }
      else {
        uVar9 = *(undefined2 *)(unaff_BP + -0x48);
        *(undefined2 *)(unaff_BP + -0x166) = *(undefined2 *)(unaff_BP + -0x4a);
        *(undefined2 *)(unaff_BP + -0x164) = uVar9;
        uVar9 = *(undefined2 *)(unaff_BP + -0x44);
        *(undefined2 *)(unaff_BP + -0x17e) = *(undefined2 *)(unaff_BP + -0x46);
        *(undefined2 *)(unaff_BP + -0x17c) = uVar9;
        FUN_28b3_0cb6();
        FUN_28b3_0cb6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xe8ef;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xe8f8;
        FUN_28b3_0cb6();
        iStack_a = 0x22b2;
        iStack_c = 0xe8fd;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        iStack_14 = 0xe907;
        func_0x000299d1();
        uStack_12 = 1;
        iStack_14 = 0x22b2;
        uStack_16 = 0xe910;
        FUN_1def_05d1();
        uVar17 = (undefined1 *)0xffed < &uStack_12;
        uVar18 = &stack0x0000 == (undefined1 *)0x0;
        FUN_28b3_0cb6();
        FUN_28b3_1181();
        if (!(bool)uVar17 && !(bool)uVar18) {
          uVar9 = *(undefined2 *)(unaff_BP + -0x254);
          *(undefined2 *)(unaff_BP + -0x208) = *(undefined2 *)(unaff_BP + -0x256);
          *(undefined2 *)(unaff_BP + -0x206) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x250);
          *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)(unaff_BP + -0x252);
          *(undefined2 *)(unaff_BP + -0x218) = uVar9;
        }
      }
    }
    else {
      *(undefined2 *)0xc1e = 0xffff;
      FUN_28b3_0cb6();
      FUN_28b3_0cb6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xe970;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xe979;
      FUN_28b3_0cb6();
      iStack_a = 0x22b2;
      iStack_c = 0xe97e;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xe988;
      func_0x000299d1();
      uStack_12 = 1;
      iStack_14 = 0x22b2;
      uStack_16 = 0xe991;
      FUN_1def_05d1();
      uVar17 = (undefined1 *)0xffed < &uStack_12;
      FUN_28b3_0cb6();
      FUN_28b3_1181();
      if ((bool)uVar17) {
        uVar9 = *(undefined2 *)(unaff_BP + -0x254);
        *(undefined2 *)(unaff_BP + -0x166) = *(undefined2 *)(unaff_BP + -0x256);
        *(undefined2 *)(unaff_BP + -0x164) = uVar9;
        uVar9 = *(undefined2 *)(unaff_BP + -0x250);
        *(undefined2 *)(unaff_BP + -0x17e) = *(undefined2 *)(unaff_BP + -0x252);
        *(undefined2 *)(unaff_BP + -0x17c) = uVar9;
      }
      else {
        uVar9 = *(undefined2 *)(unaff_BP + -0x206);
        *(undefined2 *)(unaff_BP + -0x166) = *(undefined2 *)(unaff_BP + -0x208);
        *(undefined2 *)(unaff_BP + -0x164) = uVar9;
        uVar9 = *(undefined2 *)(unaff_BP + -0x218);
        *(undefined2 *)(unaff_BP + -0x17e) = *(undefined2 *)(unaff_BP + -0x21a);
        *(undefined2 *)(unaff_BP + -0x17c) = uVar9;
        uVar9 = *(undefined2 *)(unaff_BP + -0x254);
        *(undefined2 *)(unaff_BP + -0x208) = *(undefined2 *)(unaff_BP + -0x256);
        *(undefined2 *)(unaff_BP + -0x206) = uVar9;
        uVar9 = *(undefined2 *)(unaff_BP + -0x250);
        *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)(unaff_BP + -0x252);
        *(undefined2 *)(unaff_BP + -0x218) = uVar9;
      }
    }
  }
  *(undefined2 *)(unaff_BP + -0x80) = 0xffff;
LAB_3ab8_3e8f:
  if (*(int *)(unaff_BP + -0x156) == 0) {
    *(undefined2 *)0xc1e = 0;
    func_0x0002b07d();
    if (*(int *)(unaff_BP + -0x16e) < 4) {
      FUN_1885_2ec3();
      if (*(byte *)0x114a < 2) {
        FUN_28b3_0cb6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xea55;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xea5e;
        FUN_28b3_0cb6();
        iStack_a = 0x22b2;
        iStack_c = 0xea63;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        iStack_14 = 0xea6d;
        func_0x000299d1();
        uStack_12 = 9;
        iStack_14 = 1;
                    /* WARNING: Call to offcut address within same function */
        uStack_16 = 0x22b2;
        uStack_18 = 0xea7a;
        func_0x00030897();
      }
      FUN_28b3_0cb6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xea95;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xea9e;
      FUN_28b3_0cb6();
      iStack_a = 0x22b2;
      iStack_c = 0xeaa3;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xeaad;
      func_0x000299d1();
      uStack_12 = 0;
      iStack_14 = 2;
                    /* WARNING: Call to offcut address within same function */
      uStack_16 = 0x22b2;
      uStack_18 = 0xeaba;
      func_0x00030897();
    }
    iStack_6 = unaff_BP + -0x128;
    iStack_8 = 0x2ab8;
    iStack_a = 0xeacf;
    FUN_21f2_3454();
    iStack_6 = 0x22b2;
    iStack_8 = 0xeae0;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xeaf0;
    FUN_21f2_2d26();
    *(undefined2 *)0xc20 = 1;
    *(undefined2 *)0xcb8 = 1;
    if (*(int *)(unaff_BP + -0x12a) != 0) {
      *(undefined2 *)0xc2c = 1;
    }
    iStack_6 = unaff_BP + -0x208;
    iStack_8 = unaff_BP + -0x128;
    iStack_a = 9999;
    iStack_c = 0x22b2;
    iVar16 = 0x1bb4;
    iStack_e = -0x14d8;
    uVar9 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x210) = uVar9;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xcb8 = 0;
    *(undefined2 *)0xc2c = 0;
    if (*(int *)0x158 != 0) goto code_r0x000304fb;
    if ((0x61ff < *(int *)(unaff_BP + -0x210)) && (*(int *)(unaff_BP + -0x210) < 0x6b01)) {
      uVar8 = *(int *)(unaff_BP + -0x210) + 0x9f00;
      uVar11 = (int)uVar8 >> 0xf;
      *(int *)0x1ce = ((int)((uVar8 ^ uVar11) - uVar11) >> 8 ^ uVar11) - uVar11;
    }
    if (*(int *)(unaff_BP + -0x210) == -1) {
      if ((*(int *)(unaff_BP + -0x12a) == 0) || (FUN_1885_2ec3(), *(int *)(unaff_BP + -0x80) < 1))
      goto LAB_3ab8_2e14;
      *(undefined2 *)(unaff_BP + -300) = 1;
      while (*(int *)(unaff_BP + -300) <= *(int *)(unaff_BP + -0x16)) {
        uVar9 = *(undefined2 *)0x14a;
        *(undefined2 *)(unaff_BP + -0x16a) = *(undefined2 *)0x148;
        *(undefined2 *)(unaff_BP + -0x168) = uVar9;
        iStack_6 = 0xebcc;
        func_0x0000daa6();
        iStack_6 = 0x885;
        iStack_8 = -0x1426;
        func_0x00018779();
        *(int *)(unaff_BP + -300) = *(int *)(unaff_BP + -300) + 1;
      }
      *(undefined2 *)(unaff_BP + -300) = 1;
      while (*(int *)(unaff_BP + -300) <= *(int *)(unaff_BP + -0xa2)) {
        *(undefined2 *)(unaff_BP + -0x68) = *(undefined2 *)0x152;
        iStack_6 = 0xec08;
        func_0x0000daa6();
        iStack_6 = -0x13ef;
        FUN_1def_186d();
        *(int *)(unaff_BP + -300) = *(int *)(unaff_BP + -300) + 1;
      }
      if (*(int *)(unaff_BP + -0x1c) != 0) {
        *(undefined2 *)(unaff_BP + -0x68) = *(undefined2 *)0x150;
        *(undefined2 *)(unaff_BP + -0x1c) = 0;
        iStack_6 = 0xec30;
        func_0x0000daa6();
        iStack_6 = -0x13c7;
        func_0x000190c7();
      }
      if (*(int *)(unaff_BP + -0xb2) != 0) {
        uVar9 = *(undefined2 *)0x14e;
        *(undefined2 *)(unaff_BP + -0x16a) = *(undefined2 *)0x14c;
        *(undefined2 *)(unaff_BP + -0x168) = uVar9;
        *(undefined2 *)(unaff_BP + -0xb2) = 0;
        iStack_6 = 0xec60;
        func_0x0000daa6();
        iStack_6 = 0x885;
        iStack_8 = -0x1392;
        FUN_13bf_0327();
      }
      func_0x0000abfa();
      iStack_6 = 0xec7e;
      func_0x0000b1d8();
      *(undefined2 *)(unaff_BP + -0x72) = 0;
      *(undefined2 *)(unaff_BP + -0x80) = 0;
      iStack_6 = -0x1372;
      func_0x0001470b();
      goto LAB_3ab8_3e8f;
    }
    if ((*(int *)(unaff_BP + -0x210) == 0x14) && (*(int *)(unaff_BP + -0x12a) != 0)) {
      iVar16 = 0x1b6e;
      FUN_1885_2ec3();
      if (*(int *)0xce6 != 0) goto code_r0x000304fb;
      if (*(int *)(unaff_BP + -0x16e) < 4) goto LAB_3ab8_230c;
      if (*(int *)(unaff_BP + -0x16e) == 5) goto LAB_3ab8_209d;
    }
    if (*(int *)(unaff_BP + -0xa0) != 0) {
      uVar8 = *(uint *)0x148;
      iVar10 = *(int *)0x14a;
      *(uint *)(unaff_BP + -0x256) = uVar8;
      *(int *)(unaff_BP + -0x254) = iVar10;
      if (*(int *)(unaff_BP + -0x16e) < 4) {
        iVar12 = *(int *)0x13e - (uint)(*(uint *)0x13c < 2);
        if ((iVar10 <= iVar12) && ((iVar10 < iVar12 || (uVar8 <= *(uint *)0x13c - 2)))) {
          *(int *)0x148 = uVar8 + 2;
          *(int *)0x14a = iVar10 + (uint)(0xfffd < uVar8);
        }
      }
      iStack_6 = 2;
      iStack_a = -0x12c7;
      iStack_8 = iVar16;
      uVar9 = func_0x00015409();
      *(undefined2 *)(unaff_BP + -0x252) = uVar9;
      uVar9 = *(undefined2 *)(unaff_BP + -0x254);
      *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x256);
      *(undefined2 *)0x14a = uVar9;
      if (*(int *)(unaff_BP + -0x252) == 0) {
        *(undefined2 *)(unaff_BP + -0xa0) = 0;
      }
    }
    *(undefined2 *)0xc1e = 0;
    uVar17 = *(int *)(unaff_BP + -0xa0) == 0;
    if ((bool)uVar17) goto LAB_3ab8_3e8f;
    FUN_28b3_0cb6();
    FUN_28b3_0cb6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      FUN_28b3_0cb6();
      FUN_28b3_0cb6();
      FUN_28b3_1181();
      if (!(bool)uVar17) goto LAB_3ab8_423a;
      iStack_6 = -0x124a;
      func_0x00012276();
      goto LAB_3ab8_3e8f;
    }
  }
LAB_3ab8_423a:
  *(undefined2 *)(unaff_BP + -0x66) = 0;
LAB_3ab8_423f:
  iStack_6 = -0x1238;
  func_0x0000daa6();
  *(undefined2 *)(unaff_BP + -0x72) = 0;
  *(undefined2 *)(unaff_BP + -0x16) = 0;
  *(undefined2 *)(unaff_BP + -0xa2) = 0;
  *(undefined2 *)(unaff_BP + -0x1c) = 0;
  *(undefined2 *)(unaff_BP + -0xb2) = 0;
  if (*(int *)(unaff_BP + -0x16e) < 4) {
    FUN_28b3_0cb6();
    FUN_28b3_100d();
    FUN_28b3_0e53();
    FUN_28b3_0cb6();
    FUN_28b3_100d();
    FUN_28b3_0e53();
    iStack_6 = unaff_BP + -0xb2;
    iStack_8 = unaff_BP + -0xa2;
    iStack_a = unaff_BP + -0x16;
    iStack_c = 0x22b2;
    iStack_e = 0xee3c;
    FUN_28b3_0cb6();
    iStack_c = 0x22b2;
    iStack_e = -0x11bf;
    func_0x00029d78();
    iStack_14 = 0x22b2;
    uStack_16 = 0xee4b;
    func_0x000299d1();
    iStack_14 = 0x22b2;
    uStack_16 = 0xee54;
    FUN_28b3_0cb6();
    iStack_14 = 0x22b2;
    uStack_16 = 0xee59;
    func_0x00029d78();
    iStack_1c = 0x22b2;
    iStack_1e = 0xee63;
    func_0x000299d1();
    iStack_1c = unaff_BP + -0x13c;
    iStack_1e = unaff_BP + -0xc4;
    uStack_20 = 0x22b2;
    uStack_22 = 0xee76;
    FUN_28b3_0cb6();
    uStack_20 = 0x22b2;
    uStack_22 = 0xee7b;
    func_0x00029d78();
    uStack_28 = 0x22b2;
    uStack_2a = 0xee85;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    uStack_2a = 0xee8e;
    FUN_28b3_0cb6();
    uStack_28 = 0x22b2;
    uStack_2a = 0xee93;
    func_0x00029d78();
    uStack_30 = 0x22b2;
    uStack_32 = 0xee9d;
    func_0x000299d1();
    uStack_30 = 0x22b2;
    uStack_32 = 0xeea6;
    FUN_28b3_0cb6();
    uStack_30 = 0x22b2;
    uStack_32 = 0xeeab;
    func_0x00029d78();
    uStack_38 = 0x22b2;
    func_0x000299d1();
    uStack_38 = 0x22b2;
    FUN_28b3_0cb6();
    uStack_38 = 0x22b2;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    uVar9 = FUN_2b6e_025a(unaff_BP + -0x1fa,*(undefined2 *)(unaff_BP + -0x66),
                          *(undefined2 *)(unaff_BP + -0x12a));
    *(undefined2 *)(unaff_BP + -0x72) = uVar9;
    if (*(int *)(unaff_BP + -0x12a) != 0) goto LAB_3ab8_3e8f;
  }
  if (*(int *)(unaff_BP + -0x16e) != 5) goto LAB_3ab8_2e14;
  FUN_28b3_0cb6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xef13;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xef1c;
  FUN_28b3_0cb6();
  iStack_a = 0x22b2;
  iStack_c = 0xef21;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  iStack_14 = 0xef2b;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  iStack_14 = 0xef34;
  FUN_28b3_0cb6();
  uStack_12 = 0x22b2;
  iStack_14 = -0x10c7;
  func_0x00029d78();
  uStack_1a = 0x22b2;
  iStack_1c = 0xef43;
  func_0x000299d1();
  uStack_1a = 0x22b2;
  iStack_1c = 0xef4c;
  FUN_28b3_0cb6();
  uStack_1a = 0x22b2;
  iStack_1c = -0x10af;
  func_0x00029d78();
  uStack_22 = 0x22b2;
  iStack_24 = -0x10a5;
  func_0x000299d1();
  uStack_22 = 0x22b2;
  iStack_24 = -0x10a0;
  iVar10 = FUN_1def_043a();
  if (iVar10 == 0) goto LAB_3ab8_2e14;
  FUN_28b3_0cb6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xef86;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xef8f;
  FUN_28b3_0cb6();
  iStack_a = 0x22b2;
  iStack_c = 0xef94;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  iStack_14 = 0xef9e;
  func_0x000299d1();
  uStack_12 = 1;
  iStack_14 = 0x22b2;
  uVar15 = 0x1bb4;
  uStack_16 = 0xefa7;
  puVar7 = (undefined2 *)FUN_1def_05d1();
  uVar9 = puVar7[1];
  *(undefined2 *)(unaff_BP + -0x17a) = *puVar7;
  *(undefined2 *)(unaff_BP + -0x178) = uVar9;
  uVar9 = *(undefined2 *)(unaff_BP + -0x206);
  *(undefined2 *)(unaff_BP + -0x130) = *(undefined2 *)(unaff_BP + -0x208);
  *(undefined2 *)(unaff_BP + -0x12e) = uVar9;
  uVar9 = *(undefined2 *)(unaff_BP + -0x218);
  *(undefined2 *)(unaff_BP + -0x15e) = *(undefined2 *)(unaff_BP + -0x21a);
  *(undefined2 *)(unaff_BP + -0x15c) = uVar9;
  uVar17 = 0;
  uVar18 = *(int *)(unaff_BP + -0x12a) == 0;
  if (!(bool)uVar18) {
    FUN_28b3_0cb6();
    func_0x00029ae7();
    FUN_28b3_0cb6();
    func_0x00029ae7();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      FUN_28b3_0cb6();
      FUN_28b3_0cb6();
      FUN_28b3_1181();
      if (!(bool)uVar17 && !(bool)uVar18) {
        FUN_28b3_0cb6();
        func_0x00029af6();
        FUN_28b3_0e53();
        FUN_28b3_0cb6();
        func_0x00029af6();
        FUN_28b3_0e53();
      }
      uVar15 = 0x22b2;
    }
    else {
      FUN_28b3_0cb6();
      FUN_28b3_0cb6();
      uVar15 = 0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar17) {
        FUN_28b3_0cb6();
        func_0x00029af6();
        FUN_28b3_0e53();
        FUN_28b3_0cb6();
        func_0x00029af6();
        uVar15 = 0x22b2;
        FUN_28b3_0e53();
      }
    }
  }
  *(undefined2 *)(unaff_BP + -0x72) = 1;
  iStack_6 = uVar15;
  if (*(int *)(unaff_BP + -0x12a) != 0) {
    if (1 < *(byte *)0x114a) {
      uVar9 = *(undefined2 *)(unaff_BP + -0x206);
      *(undefined2 *)(unaff_BP + -0xc4) = *(undefined2 *)(unaff_BP + -0x208);
      *(undefined2 *)(unaff_BP + -0xc2) = uVar9;
      uVar9 = *(undefined2 *)(unaff_BP + -0x218);
      *(undefined2 *)(unaff_BP + -0x13c) = *(undefined2 *)(unaff_BP + -0x21a);
      *(undefined2 *)(unaff_BP + -0x13a) = uVar9;
    }
    uVar9 = *(undefined2 *)(unaff_BP + -0x12e);
    *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0x130);
    *(undefined2 *)0xb30e = uVar9;
    uVar9 = *(undefined2 *)(unaff_BP + -0x15c);
    *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -0x15e);
    *(undefined2 *)0xb380 = uVar9;
    if (*(int *)(unaff_BP + -0x20e) < 1) {
      *(undefined2 *)(unaff_BP + -0x9a) = 0xffff;
    }
    else {
      *(undefined2 *)(unaff_BP + -0x9a) = 0;
    }
    iStack_8 = 0xf160;
    FUN_28b3_0cb6();
    iStack_6 = 0x22b2;
    iStack_8 = -0xe9b;
    func_0x00029d78();
    iStack_e = 0x22b2;
    uStack_10 = 0xf16f;
    func_0x000299d1();
    iStack_e = unaff_BP + -0x1fa;
    uStack_10 = 0x22b2;
    uStack_12 = 0xf179;
    iVar10 = func_0x0002b5e9();
    if (iVar10 != 0) {
      *(int *)(unaff_BP + -0x1c) = *(int *)(unaff_BP + -0x1c) + 1;
      iStack_6 = -0xe70;
      uVar19 = func_0x00000398();
      puVar2 = (uint *)((int)uVar19 + 0x16);
      *puVar2 = *puVar2 | 0x1000;
    }
    *(undefined2 *)(unaff_BP + -0x80) = 1;
    goto LAB_3ab8_3e8f;
  }
  iStack_8 = 0xf0c0;
  FUN_28b3_0cb6();
  iStack_6 = 0x22b2;
  iStack_8 = -0xf3b;
  func_0x00029d78();
  iStack_e = 0x22b2;
  uStack_10 = 0xf0cf;
  func_0x000299d1();
  iStack_e = unaff_BP + -0x1fa;
  uStack_10 = 0;
  uStack_12 = 0x22b2;
  iStack_14 = -0xf23;
  iVar10 = func_0x00030b78();
  if (iVar10 != 0) {
    *(int *)(unaff_BP + -0x1c) = *(int *)(unaff_BP + -0x1c) + 1;
  }
  goto LAB_3ab8_2e14;
LAB_3ab8_230c:
  do {
    *(undefined2 *)(unaff_BP + -0x9e) = 0;
    do {
      do {
        uVar17 = *(byte *)0x114a == 2;
        if (1 < *(byte *)0x114a) goto LAB_3ab8_26e1;
        iStack_6 = 0xcea6;
        func_0x0002ac38();
        *(undefined2 *)(unaff_BP + -0x230) = 0;
        FUN_28b3_0cb6();
        FUN_28b3_0cb6();
        FUN_28b3_1181();
        if ((bool)uVar17) {
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          FUN_28b3_1181();
          if (!(bool)uVar17) goto LAB_3ab8_239d;
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          FUN_28b3_1181();
          if (!(bool)uVar17) goto LAB_3ab8_239d;
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          uVar9 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar17) goto LAB_3ab8_239d;
        }
        else {
LAB_3ab8_239d:
          iStack_6 = 0x22b2;
          iStack_8 = 0xcf2b;
          FUN_21f2_3454();
          iStack_6 = 0x22b2;
          iStack_8 = 0xcf3c;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xcf4c;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xcf5d;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xcf6d;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          uVar9 = 0x22b2;
          iStack_8 = 0xcf7d;
          FUN_21f2_2d26();
          *(undefined2 *)(unaff_BP + -0x230) = 1;
          if (*(int *)0xc22 == 0) {
            FUN_28b3_0cb6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xcfa7;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0xcfb0;
            FUN_28b3_0cb6();
            iStack_a = 0x22b2;
            iStack_c = 0xcfb5;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            iStack_14 = 0xcfbf;
            func_0x000299d1();
            uStack_12 = 0x5ef4;
            iStack_14 = unaff_BP + -0x24e;
            uStack_16 = 0x22b2;
            uStack_18 = 0xcfcd;
            FUN_21f2_3454();
            iStack_6 = 2;
            iStack_8 = 0x28;
            iStack_a = unaff_BP + -0x24e;
            iStack_c = 0x22b2;
            iStack_e = 0xcfea;
            FUN_1000_02b5();
            FUN_28b3_0cb6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xd005;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0xd00e;
            FUN_28b3_0cb6();
            iStack_a = 0x22b2;
            iStack_c = 0xd013;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            iStack_14 = 0xd01d;
            func_0x000299d1();
            uStack_12 = 0x5f00;
            iStack_14 = unaff_BP + -0x24e;
            uStack_16 = 0x22b2;
            uStack_18 = 0xd02b;
            FUN_21f2_3454();
            iStack_6 = 2;
            iStack_8 = 0x34;
            iStack_a = unaff_BP + -0x24e;
            iStack_c = 0x22b2;
            uVar9 = 0xdef;
            iStack_e = -0x2fb8;
            FUN_1000_02b5();
            *(undefined2 *)0xc22 = 1;
          }
        }
        iStack_8 = 0xd05f;
        iStack_6 = uVar9;
        FUN_1def_07a4();
        iStack_6 = unaff_BP + -0xc4;
        iStack_8 = unaff_BP + -0x128;
        *(undefined2 *)0xc2c = 1;
        *(undefined2 *)0xc20 = 1;
        iStack_a = 1;
        iStack_c = 0x1bb4;
        iStack_e = -0x2f7c;
        uVar9 = FUN_1def_0904();
        *(undefined2 *)(unaff_BP + -0x9e) = uVar9;
        *(undefined2 *)0xc2c = 0;
        *(undefined2 *)0xc20 = 0;
        FUN_1885_2ec3();
        if (*(int *)0x158 != 0) goto code_r0x000304fb;
        if ((*(int *)0xce6 != 0) && (*(int *)(unaff_BP + -0x9e) == 0x14)) {
          FUN_1885_2ec3();
          goto code_r0x000304fb;
        }
        if ((*(int *)(unaff_BP + -0x9e) == -1) || (*(int *)(unaff_BP + -0x9e) == 0x14)) {
          iVar16 = 0x1b6e;
          FUN_1885_2ec3();
          goto LAB_3ab8_209d;
        }
        if (((*(char *)0x124 != '\0') && (*(char *)0x15b == '\x02')) &&
           ((*(int *)(unaff_BP + -0x9e) == 1 || (*(int *)(unaff_BP + -0x9e) == 2)))) {
          uVar9 = 0x1b6e;
          FUN_1885_2ec3();
          goto LAB_3ab8_258b;
        }
        if ((*(int *)(unaff_BP + -0x9e) == 1) || (*(int *)(unaff_BP + -0x9e) == 2))
        goto LAB_3ab8_26e1;
      } while (*(int *)(unaff_BP + -0xa0) == 0);
      iStack_6 = *(int *)(unaff_BP + -0xa0);
      iStack_8 = 0x1b6e;
      iStack_a = -0x2db6;
      iVar10 = func_0x00015409();
    } while (iVar10 == 0);
    *(undefined2 *)(unaff_BP + -0x9e) = 0;
LAB_3ab8_26e1:
    if (*(int *)(unaff_BP + -0x16e) == 1) {
      if (*(int *)0xcb6 == 0) {
        uVar9 = *(undefined2 *)0xa4ce;
        *(undefined2 *)0xb76a = *(undefined2 *)0xa4cc;
        *(undefined2 *)0xb76c = uVar9;
        uVar9 = *(undefined2 *)0xa48a;
        *(undefined2 *)0xb784 = *(undefined2 *)0xa488;
        *(undefined2 *)0xb786 = uVar9;
      }
      else {
        uVar9 = *(undefined2 *)0xcbc;
        *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
        *(undefined2 *)0xb76c = uVar9;
        uVar9 = *(undefined2 *)0xcc0;
        *(undefined2 *)0xb784 = *(undefined2 *)0xcbe;
        *(undefined2 *)0xb786 = uVar9;
      }
    }
    if (*(int *)(unaff_BP + -0x16e) == 2) {
      if (*(int *)0xcb6 == 0) {
        uVar9 = *(undefined2 *)0xa48a;
        *(undefined2 *)0xb76a = *(undefined2 *)0xa488;
        *(undefined2 *)0xb76c = uVar9;
        uVar9 = *(undefined2 *)0xa4ce;
        *(undefined2 *)0xb784 = *(undefined2 *)0xa4cc;
        *(undefined2 *)0xb786 = uVar9;
      }
      else {
        FUN_28b3_0cb6();
        func_0x00029af6();
        FUN_28b3_0e53();
        uVar9 = *(undefined2 *)0xcbc;
        *(undefined2 *)0xb784 = *(undefined2 *)0xcba;
        *(undefined2 *)0xb786 = uVar9;
      }
    }
    if (*(int *)(unaff_BP + -0x16e) == 3) {
      if (*(int *)0xcb6 == 0) {
        FUN_28b3_0cb6();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x000299d1();
      }
      else {
        FUN_28b3_0cb6();
        func_0x00029bb5();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x000299d1();
      }
      iStack_6 = *(undefined2 *)(unaff_BP + -0x8a);
      iStack_8 = *(undefined2 *)(unaff_BP + -0x8c);
      iStack_a = 0x22b2;
      iStack_c = 0xd37b;
      func_0x0002a11e();
      func_0x00029834();
      FUN_28b3_0e53();
      iStack_6 = *(int *)(unaff_BP + -0x8a);
      iStack_8 = *(int *)(unaff_BP + -0x8c);
      iStack_a = 0x22b2;
      iStack_c = 0xd3a5;
      FUN_28b3_15dc();
      func_0x00029834();
      FUN_28b3_0e53();
    }
    do {
      do {
        if (*(int *)(unaff_BP + -0x9e) != 0) goto LAB_3ab8_2bc5;
        FUN_1885_2ec3();
        if (*(byte *)0x114a < 2) {
          FUN_28b3_0cb6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0xd3eb;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0xd3f4;
          FUN_28b3_0cb6();
          iStack_a = 0x22b2;
          iStack_c = 0xd3f9;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          iStack_14 = 0xd403;
          func_0x000299d1();
          uStack_12 = 9;
          iStack_14 = 1;
                    /* WARNING: Call to offcut address within same function */
          uStack_16 = 0x22b2;
          uStack_18 = 0xd410;
          func_0x00030897();
        }
        uVar9 = 0x2ab8;
        iStack_6 = 0xd41d;
        FUN_28b3_2132();
        if ((*(char *)0x124 != '\0') && (*(char *)0x114a != '\0')) {
          iStack_6 = 0x2ab8;
          iStack_8 = 0xd440;
          FUN_21f2_2d26();
          if (*(byte *)0x114a < 2) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xd45a;
            FUN_1def_07a4();
          }
          else {
            iStack_6 = 0x22b2;
            iStack_8 = 0xd46d;
            FUN_21f2_2d26();
            iStack_6 = 2;
            iStack_8 = 0x3a;
            iStack_a = 0x5f2b;
            iStack_c = 0x22b2;
            iStack_e = 0xd488;
            FUN_1000_02b5();
            bVar3 = *(byte *)0x114b;
            *(undefined2 *)(unaff_BP + -0x248) = 0;
            *(undefined2 *)(unaff_BP + -0x24a) = 0;
            *(undefined2 *)(unaff_BP + -0x24c) = 0;
            *(uint *)(unaff_BP + -0x24e) = (uint)bVar3;
            func_0x00029da5();
            func_0x00029b6d();
            FUN_28b3_0e3b();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xd4d0;
            func_0x000299d1();
            iStack_a = 0x5f2e;
            iStack_c = unaff_BP + -0x14;
            iStack_e = 0x22b2;
            uStack_10 = 0xd4dd;
            FUN_21f2_3454();
            iStack_6 = 2;
            iStack_8 = 0x47;
            iStack_a = unaff_BP + -0x14;
            iStack_c = 0x22b2;
            iStack_e = 0xd4f9;
            FUN_1000_02b5();
            iStack_6 = 0xdef;
            iStack_8 = 0xd50a;
            FUN_1def_07a4();
          }
          uVar9 = 0x1bb4;
          *(undefined2 *)0xc22 = 1;
        }
        *(undefined2 *)0xc20 = 1;
        iStack_6 = unaff_BP + -0x138;
        iStack_8 = unaff_BP + -0x128;
        iStack_a = 9999;
        iStack_e = -0x2acb;
        iStack_c = uVar9;
        uVar9 = FUN_1def_0904();
        *(undefined2 *)(unaff_BP + -0x210) = uVar9;
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) goto code_r0x000304fb;
        if (*(int *)(unaff_BP + -0x210) == -1) {
          iVar16 = 0x1b6e;
          FUN_1885_2ec3();
          if (1 < *(byte *)0x114a) goto LAB_3ab8_209d;
          goto LAB_3ab8_230c;
        }
        if ((*(int *)(unaff_BP + -0x210) == 1) && (*(char *)0x114a != '\0')) {
          FUN_1885_2ec3();
          if (*(byte *)0x114a < 2) {
            *(undefined1 *)0x114a = 2;
          }
          else {
            *(undefined1 *)0x114a = 1;
          }
          goto LAB_3ab8_230c;
        }
        if ((*(int *)(unaff_BP + -0x210) == 2) && (*(char *)0x114a != '\0')) {
          FUN_1885_2ec3();
          goto LAB_3ab8_2a3a;
        }
      } while (*(int *)(unaff_BP + -0xa0) == 0);
      uVar8 = *(uint *)0x148;
      iVar10 = *(int *)0x14a;
      *(uint *)(unaff_BP + -0x24e) = uVar8;
      *(int *)(unaff_BP + -0x24c) = iVar10;
      if (*(int *)(unaff_BP + -0x16e) < 4) {
        iVar16 = *(int *)0x13e - (uint)(*(int *)0x13c == 0);
        if ((iVar10 <= iVar16) && ((iVar10 < iVar16 || (uVar8 <= *(int *)0x13c - 1U)))) {
          *(int *)0x148 = uVar8 + 1;
          *(int *)0x14a = iVar10 + (uint)(0xfffe < uVar8);
        }
      }
      iStack_6 = *(int *)(unaff_BP + -0xa0);
      iStack_8 = 0x1bb4;
      iStack_a = -0x28e1;
      uVar9 = func_0x00015409();
      *(undefined2 *)(unaff_BP + -0x230) = uVar9;
      uVar9 = *(undefined2 *)(unaff_BP + -0x24c);
      *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x24e);
      *(undefined2 *)0x14a = uVar9;
    } while (*(int *)(unaff_BP + -0x230) == 0);
LAB_3ab8_2bc5:
    if (*(int *)(unaff_BP + -0x9e) == 0) goto LAB_3ab8_2de0;
    FUN_1885_2ec3();
    iStack_6 = 0x1b6e;
    iStack_8 = 0xd762;
    FUN_21f2_3454();
    iStack_6 = 0x22b2;
    iStack_8 = 0xd772;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xd782;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xd792;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    uVar9 = 0x22b2;
    iStack_8 = 0xd7a2;
    FUN_21f2_2d26();
    if (*(int *)(unaff_BP + -0x9c) < 0) {
      *(undefined2 *)0xc22 = 1;
      iStack_6 = 2;
      iStack_8 = 0x33;
      iStack_a = 0x5f49;
      iStack_c = 0x22b2;
      uVar9 = 0xdef;
      iStack_e = 0xd7cd;
      FUN_1000_02b5();
    }
    *(undefined2 *)0xc20 = 1;
    iStack_6 = unaff_BP + -0x176;
    iStack_8 = unaff_BP + -0x128;
    iStack_a = 9999;
    iStack_e = -0x280d;
    iStack_c = uVar9;
    uVar9 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x210) = uVar9;
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) goto code_r0x000304fb;
    if (*(int *)(unaff_BP + -0x210) != -1) goto LAB_3ab8_2c9f;
    FUN_1885_2ec3();
  } while( true );
LAB_3ab8_258b:
  iVar10 = (*(int *)(unaff_BP + -0x9e) + -1) * 4;
  uVar15 = *(undefined2 *)(iVar10 + 0x113c);
  *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)(iVar10 + 0x113a);
  *(undefined2 *)(unaff_BP + -0x92) = uVar15;
  uVar15 = *(undefined2 *)(iVar10 + 0x1144);
  *(undefined2 *)(unaff_BP + -0xae) = *(undefined2 *)(iVar10 + 0x1142);
  *(undefined2 *)(unaff_BP + -0xac) = uVar15;
  iStack_6 = 0x5f0c;
  iStack_8 = 1;
  iStack_a = 0x2712;
  iStack_e = -0x2eb1;
  iStack_c = uVar9;
  uVar9 = func_0x00001dd5();
  *(undefined2 *)(unaff_BP + -0x210) = uVar9;
  if (*(int *)0x158 != 0) goto code_r0x000304fb;
  uVar17 = *(int *)(unaff_BP + -0x210) != -1;
  uVar18 = *(int *)(unaff_BP + -0x210) == -1;
  if ((bool)uVar18) goto LAB_3ab8_230c;
  FUN_28b3_0cb6();
  FUN_28b3_0cb6();
  FUN_28b3_1181();
  if ((bool)uVar17) {
    FUN_28b3_0cb6();
    FUN_28b3_0cb6();
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar18) {
      FUN_28b3_0cb6();
      FUN_28b3_0cb6();
      FUN_28b3_1181();
      if ((bool)uVar17) {
        FUN_28b3_0cb6();
        FUN_28b3_0cb6();
        FUN_28b3_1181();
        if (!(bool)uVar17 && !(bool)uVar18) goto LAB_3ab8_2660;
      }
    }
  }
  uVar9 = 0x22b2;
  goto LAB_3ab8_258b;
LAB_3ab8_2660:
  uVar9 = *(undefined2 *)(unaff_BP + -0x94);
  uVar15 = *(undefined2 *)(unaff_BP + -0x92);
  iVar10 = *(int *)(unaff_BP + -0x9e) + -1;
  *(int *)(unaff_BP + -0x210) = iVar10;
  iVar10 = iVar10 * 4;
  *(undefined2 *)(iVar10 + 0x113a) = uVar9;
  *(undefined2 *)(iVar10 + 0x113c) = uVar15;
  uVar9 = *(undefined2 *)(unaff_BP + -0xac);
  *(undefined2 *)(iVar10 + 0x1142) = *(undefined2 *)(unaff_BP + -0xae);
  *(undefined2 *)(iVar10 + 0x1144) = uVar9;
  goto LAB_3ab8_230c;
  while( true ) {
    FUN_28b3_0cb6();
    FUN_28b3_0cb6();
    FUN_28b3_1181();
    if (!(bool)uVar17) break;
LAB_3ab8_2a3a:
    do {
      bVar3 = *(byte *)0x114b;
      *(undefined2 *)(unaff_BP + -0x248) = 0;
      *(undefined2 *)(unaff_BP + -0x24a) = 0;
      *(undefined2 *)(unaff_BP + -0x24c) = 0;
      *(uint *)(unaff_BP + -0x24e) = (uint)bVar3;
      func_0x00029da5();
      FUN_28b3_0e3b();
      func_0x00029b6d();
      FUN_28b3_0e3b();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      FUN_28b3_0e53();
      iStack_6 = 0x5f33;
      iStack_8 = 1;
      iStack_a = 0x2711;
      iStack_c = 0x22b2;
      iStack_e = -0x29d1;
      uVar9 = func_0x00001dd5();
      *(undefined2 *)(unaff_BP + -0x210) = uVar9;
      if (*(int *)0x158 != 0) goto code_r0x000304fb;
      uVar17 = *(int *)(unaff_BP + -0x210) != -1;
      uVar18 = *(int *)(unaff_BP + -0x210) == -1;
      if ((bool)uVar18) goto LAB_3ab8_230c;
      FUN_28b3_0cb6();
      FUN_28b3_0cb6();
      FUN_28b3_1181();
    } while (!(bool)uVar17 && !(bool)uVar18);
  }
  FUN_28b3_0cb6();
  iStack_6 = -0x2965;
  func_0x00029b6d();
  FUN_28b3_0e3b();
  func_0x00029d78();
  uVar9 = FUN_28b3_0f51();
  *(undefined2 *)(unaff_BP + -0x210) = uVar9;
  *(undefined1 *)0x114b = (char)uVar9;
  goto LAB_3ab8_230c;
LAB_3ab8_2c9f:
  if (*(int *)(unaff_BP + -0x210) == 1) {
    *(int *)(unaff_BP + -0x9c) = -*(int *)(unaff_BP + -0x9c);
  }
  if (*(int *)(unaff_BP + -0xa0) != 0) {
    iStack_6 = *(int *)(unaff_BP + -0xa0);
    iStack_8 = 0x1bb4;
    iStack_a = -0x27b6;
    iVar10 = func_0x00015409();
    if (iVar10 != 0) {
      FUN_28b3_0cb6();
      func_0x00029b85();
      FUN_28b3_0e3b();
      FUN_28b3_0d8b();
      func_0x00029b6d();
      FUN_28b3_0e3b();
      func_0x00029c9d();
      func_0x00029bb5();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      FUN_28b3_0d8b();
      func_0x00029c9d();
      func_0x00029b6d();
      func_0x00029b55();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      func_0x00029b85();
      FUN_28b3_0e3b();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      func_0x00029b6d();
      func_0x00029bb5();
      FUN_28b3_0e53();
      FUN_28b3_0cb6();
      FUN_28b3_0d8b();
      func_0x00029c9d();
      func_0x00029b6d();
      func_0x00029b55();
      FUN_28b3_0e53();
LAB_3ab8_2de0:
      iVar16 = 0x1b6e;
      FUN_1885_2ec3();
      goto LAB_3ab8_2de5;
    }
  }
  goto LAB_3ab8_2bc5;
LAB_3ab8_462e:
  if (*(int *)(unaff_BP + -0x16e) != 6) goto LAB_3ab8_491e;
  *(undefined2 *)0xc1e = 0;
  iStack_6 = unaff_BP + -0x128;
  iStack_a = 0xf1d0;
  iStack_8 = iVar16;
  FUN_21f2_3454();
  iStack_6 = 0x22b2;
  iStack_8 = 0xf1e1;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = 0xf1f1;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = 0xf201;
  FUN_21f2_2d26();
  *(undefined2 *)(unaff_BP + -0xb0) = 1;
  while (*(int *)(unaff_BP + -0xb0) < 9) {
    iStack_6 = 0x22b2;
    iStack_8 = 0xf228;
    FUN_21f2_2d26();
    *(int *)(unaff_BP + -0xb0) = *(int *)(unaff_BP + -0xb0) + 1;
  }
  iStack_6 = unaff_BP + -0x14;
  iStack_8 = 0x22b2;
  iStack_a = 0xf23e;
  FUN_21f2_3454();
  iStack_6 = 0x22b2;
  iStack_8 = 0xf24f;
  FUN_21f2_2d26();
  if (*(int *)(unaff_BP + -0x72) == 0) {
    *(undefined2 *)(unaff_BP + -0x68) = 10000;
  }
  else {
    *(undefined2 *)(unaff_BP + -0x68) = 9999;
  }
  *(undefined2 *)0xc20 = 1;
  *(undefined2 *)0xc2c = 1;
  iStack_6 = unaff_BP + -0x21e;
  iStack_8 = unaff_BP + -0x128;
  iStack_a = *(int *)(unaff_BP + -0x68);
  iStack_c = 0x22b2;
  iVar16 = 0x1bb4;
  iStack_e = -0xd74;
  uVar9 = FUN_1def_0904();
  *(undefined2 *)(unaff_BP + -0x210) = uVar9;
  *(undefined2 *)0xc20 = 0;
  *(undefined2 *)0xc2c = 0;
  if (*(int *)0x158 != 0) goto code_r0x000304fb;
  if (*(int *)(unaff_BP + -0x210) == 0x14) {
    iVar10 = *(int *)0xce6;
    goto joined_r0x0003f995;
  }
  if (*(int *)(unaff_BP + -0x210) == -1) {
    if (*(int *)(unaff_BP + -0x72) < 0) {
      iStack_6 = 0xf2e2;
      FUN_1def_186d();
      *(undefined2 *)(unaff_BP + -0x72) = 0;
      *(undefined2 *)(unaff_BP + -0x210) = 0;
    }
    iVar16 = 0x885;
    iStack_6 = -0xd0a;
    func_0x0000b1d8();
  }
  if ((0x61ff < *(int *)(unaff_BP + -0x210)) && (*(int *)(unaff_BP + -0x210) < 0x6701)) {
    uVar8 = *(int *)(unaff_BP + -0x210) + 0x9f00;
    uVar11 = (int)uVar8 >> 0xf;
    *(int *)0x1d0 = ((int)((uVar8 ^ uVar11) - uVar11) >> 8 ^ uVar11) - uVar11;
  }
  if (*(int *)(unaff_BP + -0x210) == 1) goto LAB_3ab8_491e;
  if (*(int *)(unaff_BP + -0xa0) != 0) {
    if (*(int *)(unaff_BP + -0xa0) == 1) {
      iStack_6 = 2;
      iStack_a = -0xca7;
      iStack_8 = iVar16;
      iVar10 = func_0x00015409();
      iVar16 = 0x11f2;
      if (iVar10 != 0) {
        FUN_28b3_0cb6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xf37c;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xf385;
        FUN_28b3_0cb6();
        iStack_a = 0x22b2;
        iStack_c = 0xf38a;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        iStack_14 = 0xf394;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        iStack_14 = -0xc67;
        FUN_1def_1208();
        *(int *)(unaff_BP + -0x72) = *(int *)(unaff_BP + -0x72) + -1;
        iStack_6 = -0xc58;
        uVar19 = func_0x000003ef();
        puVar2 = (uint *)((int)uVar19 + 10);
        *puVar2 = *puVar2 | 0x40;
        iVar16 = 0;
      }
    }
    if (*(int *)(unaff_BP + -0xa0) == 2) {
      FUN_28b3_0cb6();
      func_0x00029d78();
      func_0x000299d1();
      FUN_28b3_0cb6();
      func_0x00029d78();
      func_0x000299d1();
      iStack_6 = 0x22b2;
      iVar16 = 0x1bb4;
      iStack_8 = -0xc07;
      iVar10 = FUN_1def_173a();
      *(int *)(unaff_BP + -0x26) = iVar10;
      if (iVar10 != 0) {
        func_0x00029834();
        FUN_28b3_0e53();
        func_0x00029834();
        FUN_28b3_0e53();
        *(undefined2 *)(unaff_BP + -0x72) = 0;
        iStack_6 = 0xf436;
        func_0x0000daa6();
        iStack_6 = 0xf43f;
        FUN_1def_186d();
        iStack_6 = 0xf449;
        func_0x0000daa6();
        FUN_28b3_0cb6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xf462;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xf46b;
        FUN_28b3_0cb6();
        iStack_a = 0x22b2;
        iStack_c = 0xf470;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        iStack_14 = 0xf47a;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        iStack_14 = -0xb81;
        FUN_1def_1208();
        iVar16 = 0;
        iStack_6 = -0xb75;
        uVar19 = func_0x000003ef();
        puVar2 = (uint *)((int)uVar19 + 10);
        *puVar2 = *puVar2 | 0x40;
      }
    }
  }
  *(undefined2 *)0xc1e = 0;
  goto LAB_3ab8_462e;
LAB_3ab8_491e:
  *(undefined2 *)(unaff_BP + -0x72) = 0;
  while( true ) {
    if (*(int *)(unaff_BP + -0x16e) != 7) goto LAB_3ab8_4c2f;
    iStack_8 = 0xf4bb;
    iStack_6 = iVar16;
    FUN_21f2_3454();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf4cb;
    FUN_21f2_2d26();
    *(undefined2 *)0xc2c = 1;
    iStack_6 = unaff_BP + -0x21e;
    iStack_8 = unaff_BP + -0x128;
    iStack_a = *(int *)(unaff_BP + -0x72);
    iStack_c = 0x22b2;
    iVar16 = 0x1bb4;
    iStack_e = -0xb11;
    uVar9 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x210) = uVar9;
    *(undefined2 *)0xc2c = 0;
    if (*(int *)0x158 != 0) goto code_r0x000304fb;
    if (*(int *)(unaff_BP + -0x210) == 0x14) break;
    if ((*(int *)(unaff_BP + -0x210) == -1) && (*(int *)(unaff_BP + -0x72) != 0)) {
      FUN_1885_2ec3();
      *(undefined2 *)(unaff_BP + -300) = 1;
      while (*(int *)(unaff_BP + -300) <= *(int *)(unaff_BP + -0x72)) {
        uVar9 = *(undefined2 *)0x14a;
        *(undefined2 *)(unaff_BP + -0x16a) = *(undefined2 *)0x148;
        *(undefined2 *)(unaff_BP + -0x168) = uVar9;
        iStack_6 = 0xf56f;
        func_0x0000daa6();
        iStack_6 = 0x885;
        iStack_8 = -0xa83;
        func_0x00018779();
        *(int *)(unaff_BP + -300) = *(int *)(unaff_BP + -300) + 1;
      }
      func_0x0000abfa();
      iVar16 = 0x885;
      iStack_6 = -0xa70;
      func_0x0000b1d8();
      *(undefined2 *)(unaff_BP + -0x72) = 0;
    }
    else if (*(int *)(unaff_BP + -0xa0) != 0) {
      FUN_28b3_0cb6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xf5be;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xf5c7;
      FUN_28b3_0cb6();
      iStack_a = 0x22b2;
      iStack_c = 0xf5cc;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xf5d6;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      iVar16 = 0x11f2;
      iStack_14 = -0xa25;
      lVar20 = FUN_13bf_39a0();
      *(undefined2 *)(unaff_BP + -0x98) = (int)lVar20;
      *(undefined2 *)(unaff_BP + -0x96) = (int)((ulong)lVar20 >> 0x10);
      if (lVar20 != 0) {
        iStack_6 = 0xf5f9;
        func_0x0000daa6();
        *(undefined2 *)(unaff_BP + -0x72) = 0;
        iVar10 = *(int *)(unaff_BP + -0x96);
        uVar17 = iVar10 == 0;
        if ((iVar10 < 0) || ((iVar10 < 1 && (uVar17 = false, *(int *)(unaff_BP + -0x98) == 0)))) {
          iStack_6 = 0x885;
          iStack_8 = -0x859;
          uVar9 = FUN_28b3_2665();
          *(undefined2 *)(unaff_BP + -0x72) = uVar9;
        }
        else {
          uVar18 = 0;
          iStack_6 = 0x885;
          iStack_8 = 0xf625;
          puVar21 = (undefined2 *)func_0x0000013f();
          puVar14 = (undefined2 *)puVar21;
          puVar7 = (undefined2 *)(unaff_BP + -0x60);
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar5 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar5 = *puVar4;
          }
          FUN_28b3_0cb6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_0cb6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_117c();
          FUN_28b3_0cb6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_0cb6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_117c();
          FUN_28b3_1181();
          if ((bool)uVar18 || (bool)uVar17) {
            FUN_28b3_0cb6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xf721;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0xf729;
            FUN_28b3_0cb6();
            iStack_a = 0x22b2;
            iStack_c = 0xf72e;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            iStack_14 = 0xf738;
            func_0x000299d1();
            uStack_12 = 0x22b2;
            iStack_14 = 0xf740;
            FUN_28b3_0cb6();
            uStack_12 = 0x22b2;
            iStack_14 = -0x8bb;
            func_0x00029d78();
            uStack_1a = 0x22b2;
            iStack_1c = 0xf74f;
            func_0x000299d1();
            uStack_1a = 0x22b2;
            iStack_1c = 0xf757;
            FUN_28b3_0cb6();
            uStack_1a = 0x22b2;
            iStack_1c = -0x8a4;
            func_0x00029d78();
            uStack_22 = 0x22b2;
            iStack_24 = -0x89a;
            func_0x000299d1();
            uStack_22 = 0x22b2;
            iStack_24 = -0x895;
            FUN_1def_043a();
          }
          else {
            FUN_28b3_0cb6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xf6ba;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0xf6c2;
            FUN_28b3_0cb6();
            iStack_a = 0x22b2;
            iStack_c = 0xf6c7;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            iStack_14 = 0xf6d1;
            func_0x000299d1();
            uStack_12 = 0x22b2;
            iStack_14 = 0xf6d9;
            FUN_28b3_0cb6();
            uStack_12 = 0x22b2;
            iStack_14 = -0x922;
            func_0x00029d78();
            uStack_1a = 0x22b2;
            iStack_1c = 0xf6e8;
            func_0x000299d1();
            uStack_1a = 0x22b2;
            iStack_1c = 0xf6f0;
            FUN_28b3_0cb6();
            uStack_1a = 0x22b2;
            iStack_1c = -0x90b;
            func_0x00029d78();
            uStack_22 = 0x22b2;
            iStack_24 = -0x901;
            func_0x000299d1();
            uStack_22 = 0x22b2;
            iStack_24 = -0x8fc;
            FUN_1def_043a();
          }
          iStack_6 = *(int *)0xa492;
          iStack_8 = *(int *)0xa490;
          iStack_a = *(int *)0xa48e;
          iStack_c = *(undefined2 *)0xa48c;
          iStack_e = 0x1bb4;
          uStack_10 = 0xf788;
          uVar9 = FUN_2bb4_4af5();
          *(undefined2 *)(unaff_BP + -0x72) = uVar9;
        }
        iVar16 = 0x2ab8;
      }
    }
  }
  iVar10 = *(int *)0xce6;
joined_r0x0003f518:
  if (iVar10 != 0) goto code_r0x000304fb;
  goto LAB_3ab8_209d;
}



/* 3ab8:5089  FUN_3ab8_5089  300 bytes, 4 callers */

undefined2 FUN_3ab8_5089(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  undefined2 in_AX;
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
  
  *(undefined2 *)(unaff_BP + -0x32a) = in_AX;
  *(undefined2 *)0xfda = 0;
  iStack_4 = 0x12;
  iStack_6 = 0x3ab8;
  iStack_8 = 0xfc20;
  FUN_1000_0599();
  uVar8 = 0xdef;
  iStack_4 = 0xfc27;
  FUN_1000_060e();
  if (*(char *)0x1131 != '\0') {
    uVar8 = 0x2c1;
    iStack_4 = 0xfc36;
    func_0x00002ca6();
  }
  iStack_4 = 1;
  iStack_6 = 0x12;
  iStack_8 = unaff_BP + -0x328;
  uStack_c = 0xfc4c;
  uStack_a = uVar8;
  uVar8 = FUN_12c1_03d3();
  *(undefined2 *)(unaff_BP + -0x26) = uVar8;
  iStack_4 = 0xfc57;
  func_0x00002cc6();
  iStack_4 = 0xfc5c;
  FUN_1000_0620();
  *(undefined2 *)0xfda = *(undefined2 *)(unaff_BP + -0x32a);
  if (*(int *)0xc22 != 0) {
    iStack_4 = 0x12;
    iStack_6 = 0xdef;
    iStack_8 = -0x386;
    FUN_1000_0599();
  }
  iStack_4 = 0xfc81;
  func_0x00010526();
  if (3 < *(byte *)0xb782) {
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
  }
  iStack_4 = 0xdef;
  iStack_6 = 0xfc9e;
  func_0x0000daa6();
  iStack_4 = *(undefined2 *)0x1b3e;
  iStack_6 = 0;
  iStack_8 = 0;
  uStack_a = 0x885;
  uStack_c = 0xfcb1;
  func_0x0000f1d8();
  iStack_4 = 0;
  iStack_6 = 1;
  iStack_8 = 7;
  uStack_a = *(undefined2 *)0x1b40;
  uStack_c = *(undefined2 *)0x1b3e;
  uStack_e = *(undefined2 *)0xa5e;
  uStack_10 = 0;
  uStack_12 = 0xdef;
  uStack_14 = 0xfcd9;
  func_0x0000f350();
  if (*(char *)0xb782 == '\0') {
    iStack_4 = 0;
    iStack_6 = 0;
    iStack_8 = 7;
    uStack_a = *(undefined2 *)0xa5a;
    uStack_c = *(undefined2 *)0xa58;
    uStack_e = *(undefined2 *)0xa5e;
    uStack_10 = *(undefined2 *)0xa58;
    uStack_12 = 0xdef;
    uStack_14 = 0xfd0b;
    func_0x0000f350();
  }
  iStack_4 = 0xfd13;
  func_0x0000abfa();
  iStack_4 = 0xfd18;
  func_0x0000ac64();
  iStack_4 = 0xfd1d;
  func_0x0000a799();
  if (*(int *)0x158 != 0) {
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
    if ((bool)uVar9) {
      uVar8 = 0;
    }
    else {
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
      FUN_3ab8_5089(0x32b2);
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
        FUN_3ab8_5089(0x32b2,0);
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
      uVar8 = *(undefined2 *)(unaff_BP + -0x36);
    }
    return uVar8;
  }
  if (*(int *)(unaff_BP + -0x26) < 1) {
    uVar8 = FUN_3ab8_4c39();
    return uVar8;
  }
  uVar8 = FUN_3ab8_51bc();
  return uVar8;
}



/* 3ab8:51bc  FUN_3ab8_51bc  721 bytes, 2 callers */

/* WARNING: Instruction at (ram,0x0003029f) overlaps instruction at (ram,0x0003029e)
    */

undefined2 __cdecl16far FUN_3ab8_51bc(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 in_stack_0000000c;
  undefined2 in_stack_0000000e;
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
  int in_stack_00000028;
  int in_stack_0000002a;
  int in_stack_0000002c;
  undefined2 auStack_18 [2];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  int iStack_2;
  
  iVar5 = 0x3ab8;
  if (*(char *)(unaff_BP + -0x230) == '\x02') {
LAB_3ab8_51c6:
    if (*(int *)0x158 != 0) goto LAB_3ab8_52cd;
    puVar8 = auStack_18;
    puVar7 = (undefined2 *)(unaff_BP + -0x154);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    func_0x00019593(iVar5,0xffff);
    *(undefined2 *)0xbc0 = 1;
    iStack_2 = 0x652;
    iStack_4 = unaff_BP + -0x128;
    iStack_6 = 0x18b3;
    iStack_8 = -0x280;
    FUN_21f2_3454();
    iStack_2 = 0x78e;
    iStack_4 = unaff_BP + -0x128;
    iStack_6 = 0x22b2;
    iStack_8 = -0x270;
    FUN_21f2_2d26();
    iStack_2 = 0x2dc;
    iStack_4 = unaff_BP + -0x128;
    iStack_6 = 0x22b2;
    iStack_8 = -0x260;
    FUN_21f2_2d26();
    iStack_2 = unaff_BP + -0xa0;
    iStack_4 = unaff_BP + -0x13c;
    iStack_6 = unaff_BP + -0xc4;
    iStack_8 = unaff_BP + -0x128;
    uStack_a = 9999;
    uStack_c = 0x22b2;
    iVar5 = 0x1bb4;
    uStack_e = 0xfdbf;
    iVar6 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x68) = iVar6;
    if (iVar6 == -1) {
      puVar8 = auStack_18;
      puVar7 = (undefined2 *)(unaff_BP + -0x154);
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = *puVar2;
      }
      func_0x00019593(0x1bb4,1);
      uVar4 = FUN_3ab8_4c39();
      return uVar4;
    }
    if (*(int *)0x158 == 0) goto LAB_3ab8_5293;
    puVar8 = auStack_18;
    puVar7 = (undefined2 *)(unaff_BP + -0x154);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    func_0x00019593(0x1bb4,1);
  }
  else {
    while( true ) {
      iStack_4 = 0x2a7;
      iStack_2 = iVar5;
      FUN_32b2_6cc6();
      iStack_2 = 0x32b2;
      iStack_4 = 0x2ac;
      FUN_32b2_7258();
      uStack_a = 0x32b2;
      uStack_c = 0x2b6;
      FUN_32b2_6eb1();
      uStack_a = 1;
      uStack_c = 0x32b2;
      uStack_e = 0x2be;
      FUN_3ab8_5089();
      in_stack_0000002a = unaff_BP + -0xe4;
      in_stack_00000028 = unaff_BP + -0xd0;
      in_stack_00000026 = 0x32b2;
      in_stack_00000024 = 0x2d4;
      FUN_32b2_6cc6();
      in_stack_00000026 = 0x32b2;
      in_stack_00000024 = 0x2d9;
      FUN_32b2_7258();
      in_stack_0000001e = 0x32b2;
      in_stack_0000001c = 0x2e3;
      FUN_32b2_6eb1();
      in_stack_0000001e = 0x32b2;
      in_stack_0000001c = 0x2eb;
      FUN_32b2_6cc6();
      in_stack_0000001e = 0x32b2;
      in_stack_0000001c = 0x2f0;
      FUN_32b2_7258();
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 0x2fa;
      FUN_32b2_6eb1();
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 0x302;
      FUN_32b2_6d14();
      in_stack_0000000e = 0x32b2;
      in_stack_0000000c = 0x30c;
      FUN_32b2_6eb1();
      in_stack_0000000e = 0x32b2;
      in_stack_0000000c = 0x314;
      FUN_32b2_6d14();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      iStack_2 = 0x32b2;
      iStack_4 = 0x335;
      FUN_32b2_6eb1();
      iStack_2 = 0x32b2;
      iStack_4 = 0x33d;
      FUN_32b2_6cc6();
      iStack_2 = 0x32b2;
      iStack_4 = 0x342;
      FUN_32b2_7258();
      uStack_a = 0x32b2;
      uStack_c = 0x34c;
      FUN_32b2_6eb1();
      uStack_a = 1;
      uStack_c = 0x32b2;
      uStack_e = 0x354;
      FUN_3ab8_5089();
      uVar9 = (undefined1 *)0xffc9 < &iStack_6;
      uVar10 = &stack0x0000 == (undefined1 *)0xffd0;
      in_stack_0000002c = 0x360;
      FUN_32b2_6cc6();
      in_stack_0000002c = 0x369;
      FUN_32b2_701d();
      in_stack_0000002c = 0x36e;
      FUN_32b2_7258();
      in_stack_0000002c = 0x376;
      FUN_32b2_6e99();
      in_stack_0000002c = 0x37e;
      FUN_32b2_6ef9();
      in_stack_0000002c = 0x387;
      FUN_32b2_6cc6();
      in_stack_0000002c = 0x390;
      FUN_32b2_701d();
      in_stack_0000002c = 0x395;
      FUN_32b2_7258();
      in_stack_0000002c = 0x39e;
      FUN_32b2_6e99();
      in_stack_0000002c = 0x3a6;
      FUN_32b2_6ef9();
      in_stack_0000002c = 0x3af;
      FUN_32b2_6d14();
      in_stack_0000002c = 0x3b4;
      FUN_32b2_6fc7();
      in_stack_0000002c = 0x3bc;
      FUN_32b2_6d14();
      in_stack_0000002c = 0x3c1;
      FUN_32b2_6fc7();
      in_stack_0000002c = 0x3ca;
      FUN_32b2_710c();
      in_stack_0000002c = 0x3cf;
      FUN_32b2_7191();
      if (!(bool)uVar9 && !(bool)uVar10) break;
      in_stack_0000002c = 0x3f5;
      FUN_32b2_6d14();
      in_stack_0000002c = 0x32b2;
      in_stack_0000002a = 0x3ff;
      FUN_32b2_7154();
      in_stack_0000002c = 0x405;
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
      in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xb8);
      in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xba);
      in_stack_00000028 = *(undefined2 *)(unaff_BP + -0xbc);
      in_stack_00000026 = 0x32b2;
      in_stack_00000024 = 0x119;
      FUN_32b2_75fe();
      in_stack_0000002c = 0x32b2;
      in_stack_0000002a = 0x123;
      FUN_32b2_6d14();
      in_stack_0000002c = 0x32b2;
      in_stack_0000002a = 299;
      FUN_32b2_704d();
      in_stack_0000002c = 0x32b2;
      in_stack_0000002a = 0x133;
      FUN_32b2_7095();
      in_stack_0000002c = 0x32b2;
      in_stack_0000002a = 0x13b;
      FUN_32b2_6eb1();
      in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xb6);
      in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xb8);
      in_stack_00000028 = *(undefined2 *)(unaff_BP + -0xba);
      in_stack_00000026 = *(undefined2 *)(unaff_BP + -0xbc);
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x150;
      FUN_32b2_75ec();
      uVar9 = &stack0x0000 == (undefined1 *)0xffd4;
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x15a;
      FUN_32b2_6d14();
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x162;
      FUN_32b2_704d();
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x16a;
      FUN_32b2_7095();
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x173;
      FUN_32b2_6eb1();
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x17b;
      FUN_32b2_6cc6();
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x183;
      FUN_32b2_6cc6();
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x188;
      FUN_32b2_7191();
      if ((bool)uVar9) {
        in_stack_0000002a = 0x32b2;
        in_stack_00000028 = 0x192;
        FUN_32b2_6cc6();
        in_stack_0000002a = 0x32b2;
        in_stack_00000028 = 0x19a;
        FUN_32b2_6cc6();
        in_stack_0000002a = 0x32b2;
        in_stack_00000028 = 0x19f;
        FUN_32b2_7191();
        if ((bool)uVar9) {
          return 0;
        }
      }
      in_stack_0000002a = unaff_BP + -0xa8;
      in_stack_00000028 = unaff_BP + -0x1c;
      in_stack_00000026 = *(undefined2 *)(unaff_BP + -0x7c);
      in_stack_00000024 = *(undefined2 *)(unaff_BP + -0x7e);
      in_stack_00000022 = *(undefined2 *)(unaff_BP + -0x80);
      in_stack_00000020 = *(undefined2 *)(unaff_BP + -0x82);
      in_stack_0000001e = *(undefined2 *)(unaff_BP + -0x58);
      in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x5a);
      in_stack_0000001a = *(undefined2 *)(unaff_BP + -0x5c);
      in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x5e);
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 0x1d0;
      FUN_32b2_6cc6();
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 0x1d5;
      FUN_32b2_7258();
      in_stack_0000000e = 0x32b2;
      in_stack_0000000c = 0x1df;
      FUN_32b2_6eb1();
      in_stack_0000000e = 0x32b2;
      in_stack_0000000c = 0x1e7;
      FUN_32b2_6cc6();
      in_stack_0000000e = 0x32b2;
      in_stack_0000000c = 0x1ec;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      iVar5 = func_0x0003fb3d();
      if (iVar5 == 0) {
        return 0;
      }
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x209;
      FUN_32b2_6cc6();
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x20e;
      FUN_32b2_7258();
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x216;
      FUN_32b2_6e99();
      in_stack_0000002a = 0x32b2;
      in_stack_00000028 = 0x21e;
      FUN_32b2_6ef9();
      in_stack_0000002a = unaff_BP + -0xb4;
      in_stack_00000028 = unaff_BP + -0xa4;
      in_stack_00000026 = 0x32b2;
      in_stack_00000024 = 0x231;
      FUN_32b2_6cc6();
      in_stack_00000026 = 0x32b2;
      in_stack_00000024 = 0x236;
      FUN_32b2_7258();
      in_stack_0000001e = 0x32b2;
      in_stack_0000001c = 0x240;
      FUN_32b2_6eb1();
      in_stack_0000001e = 0x32b2;
      in_stack_0000001c = 0x248;
      FUN_32b2_6cc6();
      in_stack_0000001e = 0x32b2;
      in_stack_0000001c = 0x24d;
      FUN_32b2_7258();
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 599;
      FUN_32b2_6eb1();
      in_stack_00000016 = 0x32b2;
      in_stack_00000014 = 0x25f;
      FUN_32b2_6d14();
      in_stack_0000000e = 0x32b2;
      in_stack_0000000c = 0x269;
      FUN_32b2_6eb1();
      in_stack_0000000e = 0x32b2;
      in_stack_0000000c = 0x271;
      FUN_32b2_6cc6();
      in_stack_0000000e = 0x32b2;
      in_stack_0000000c = 0x276;
      FUN_32b2_7258();
      in_stack_0000000e = 0x32b2;
      in_stack_0000000c = 0x27e;
      FUN_32b2_6e99();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      iStack_2 = 0x32b2;
      iVar5 = 0x32b2;
      iStack_4 = 0x29f;
      FUN_32b2_6eb1();
    }
    in_stack_0000002c = 0x3da;
    FUN_32b2_6d14();
    in_stack_0000002c = 0x3e2;
    FUN_32b2_6d14();
    in_stack_0000002c = 999;
    FUN_32b2_7191();
    if ((bool)uVar10) {
      return 0;
    }
  }
LAB_2bb4_48e8:
  in_stack_0000002c = 0x431;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x439;
  FUN_32b2_7124();
  in_stack_0000002c = 0x441;
  FUN_32b2_6e99();
  in_stack_0000002c = 0x44a;
  FUN_32b2_704d();
  in_stack_0000002c = 0x453;
  FUN_32b2_7035();
  in_stack_0000002c = 0x45c;
  FUN_32b2_6e99();
  in_stack_0000002c = 0x464;
  FUN_32b2_6eb1();
  in_stack_0000002c = 0x46c;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x474;
  FUN_32b2_710c();
  in_stack_0000002c = 0x47c;
  FUN_32b2_710c();
  in_stack_0000002c = 0x484;
  FUN_32b2_710c();
  in_stack_0000002c = 0x48c;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x494;
  FUN_32b2_710c();
  in_stack_0000002c = 0x49d;
  FUN_32b2_6e99();
  in_stack_0000002c = 0x4a2;
  FUN_32b2_718c();
  in_stack_0000002c = 0x4ab;
  FUN_32b2_6e99();
  in_stack_0000002c = 0x4b3;
  FUN_32b2_6eb1();
  in_stack_0000002c = 0x4bc;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x4c4;
  FUN_32b2_710c();
  in_stack_0000002c = 0x4cd;
  FUN_32b2_710c();
  in_stack_0000002c = 0x4d5;
  FUN_32b2_710c();
  in_stack_0000002c = 0x4dd;
  FUN_32b2_710c();
  in_stack_0000002c = 0x4e6;
  FUN_32b2_6e99();
  in_stack_0000002c = 0x4ee;
  FUN_32b2_6eb1();
  in_stack_0000002c = 0x4f7;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x500;
  FUN_32b2_710c();
  in_stack_0000002c = 0x509;
  FUN_32b2_70dc();
  in_stack_0000002c = 0x511;
  FUN_32b2_710c();
  in_stack_0000002c = 0x519;
  FUN_32b2_710c();
  in_stack_0000002c = 0x522;
  FUN_32b2_6e99();
  in_stack_0000002c = 0x52b;
  FUN_32b2_6eb1();
  in_stack_0000002c = 0x534;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x53d;
  FUN_32b2_710c();
  in_stack_0000002c = 0x546;
  FUN_32b2_710c();
  in_stack_0000002c = 0x54f;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x558;
  FUN_32b2_710c();
  in_stack_0000002c = 0x55d;
  FUN_32b2_718c();
  in_stack_0000002c = 0x566;
  FUN_32b2_6eb1();
  in_stack_0000002c = 0x56f;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x574;
  FUN_32b2_6fd6();
  in_stack_0000002c = 0x57d;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x586;
  FUN_32b2_710c();
  in_stack_0000002c = 0x58b;
  FUN_32b2_7182();
  in_stack_0000002c = 0x594;
  FUN_32b2_6e99();
  in_stack_0000002c = 0x59c;
  FUN_32b2_710c();
  in_stack_0000002c = 0x5a5;
  FUN_32b2_7154();
  in_stack_0000002c = 0x5ae;
  FUN_32b2_6e99();
  in_stack_0000002c = 0x5b7;
  FUN_32b2_6eb1();
  in_stack_0000002c = 0x5c0;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x5c9;
  FUN_32b2_6eb1();
  in_stack_0000002c = unaff_BP + -0x62;
  in_stack_0000002a = 0x32b2;
  in_stack_00000028 = 0x5db;
  FUN_32b2_6cc6();
  in_stack_0000002a = 0x32b2;
  in_stack_00000028 = 0x5e0;
  FUN_32b2_7258();
  in_stack_00000022 = 0x32b2;
  in_stack_00000020 = 0x5ea;
  FUN_32b2_6eb1();
  in_stack_00000022 = 0x32b2;
  in_stack_00000020 = 0x5f2;
  FUN_32b2_6cc6();
  in_stack_00000022 = 0x32b2;
  in_stack_00000020 = 0x5f7;
  FUN_32b2_7258();
  in_stack_0000001a = 0x32b2;
  in_stack_00000018 = 0x601;
  FUN_32b2_6eb1();
  in_stack_0000001a = *(undefined2 *)(unaff_BP + -100);
  in_stack_00000018 = *(undefined2 *)(unaff_BP + -0x66);
  in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x68);
  in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x6a);
  in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x48);
  in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x4a);
  in_stack_0000000e = *(undefined2 *)(unaff_BP + -0x4c);
  in_stack_0000000c = *(undefined2 *)(unaff_BP + -0x4e);
  FUN_32b2_6d14();
  FUN_32b2_6eb1();
  FUN_32b2_6d14();
  iStack_6 = 0x32b2;
  iStack_8 = 0x63f;
  FUN_32b2_6eb1();
  iStack_6 = 0;
  iStack_8 = 0x32b2;
  uStack_a = 0x646;
  FUN_3ab8_5089();
  uVar4 = *(undefined2 *)(unaff_BP + -0x60);
  *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
  *(undefined2 *)(unaff_BP + -0x84) = uVar4;
  uVar4 = *(undefined2 *)(unaff_BP + -0x88);
  *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
  *(undefined2 *)(unaff_BP + -0x9c) = uVar4;
  in_stack_0000002c = unaff_BP + -0x86;
  puVar8 = &stack0x000c;
  puVar7 = (undefined2 *)(unaff_BP + 0x1c);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar3 = *puVar2;
  }
                    /* WARNING: Call to offcut address within same function */
  iVar5 = func_0x0003fdaf();
  uVar9 = 0;
  uVar10 = iVar5 == 0;
  if (!(bool)uVar10) {
    in_stack_0000002c = 0x694;
    FUN_32b2_6d14();
    in_stack_0000002c = 0x69d;
    FUN_32b2_6cc6();
    in_stack_0000002c = 0x6a5;
    FUN_32b2_701d();
    in_stack_0000002c = 0x6aa;
    FUN_32b2_6fc7();
    in_stack_0000002c = 0x6af;
    FUN_32b2_7258();
    in_stack_0000002c = 0x6b4;
    FUN_32b2_7191();
    if ((bool)uVar9 || (bool)uVar10) {
      in_stack_0000002c = 0x6bf;
      FUN_32b2_6d14();
      in_stack_0000002c = 0x6c8;
      FUN_32b2_6cc6();
      in_stack_0000002c = 0x6d1;
      FUN_32b2_701d();
      in_stack_0000002c = 0x6d6;
      FUN_32b2_6fc7();
      in_stack_0000002c = 0x6db;
      FUN_32b2_7258();
      in_stack_0000002c = 0x6e0;
      FUN_32b2_7191();
      if ((bool)uVar9 || (bool)uVar10) {
        *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
        *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
        *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
        *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
      }
    }
  }
  in_stack_0000002c = 0x6f8;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x700;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x708;
  FUN_32b2_710c();
  in_stack_0000002c = 0x711;
  FUN_32b2_710c();
  in_stack_0000002c = 0x71a;
  FUN_32b2_7154();
  in_stack_0000002c = 0x71f;
  FUN_32b2_7191();
  if ((bool)uVar9) {
    return 0;
  }
  in_stack_0000002c = 0x72d;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x732;
  FUN_32b2_6fc7();
  in_stack_0000002c = 0x73a;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x742;
  FUN_32b2_710c();
  in_stack_0000002c = 0x74b;
  FUN_32b2_710c();
  in_stack_0000002c = 0x750;
  FUN_32b2_7191();
  if (!(bool)uVar9) {
    *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
    *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
    *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
    *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
  }
  in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xb8);
  in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xba);
  in_stack_00000028 = *(undefined2 *)(unaff_BP + -0xbc);
  in_stack_00000026 = 0x32b2;
  in_stack_00000024 = 0x774;
  FUN_32b2_7592();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x77e;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x786;
  FUN_32b2_70dc();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x78e;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x797;
  FUN_32b2_710c();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x79c;
  FUN_32b2_7182();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x7a5;
  FUN_32b2_6e99();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x7ad;
  FUN_32b2_710c();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x7b5;
  FUN_32b2_7154();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x7be;
  FUN_32b2_6e99();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x7c7;
  FUN_32b2_6eb1();
  in_stack_0000002c = unaff_BP + -0x8a;
  in_stack_0000002a = unaff_BP + -0x62;
  in_stack_00000028 = 0x32b2;
  in_stack_00000026 = 0x7d9;
  FUN_32b2_6cc6();
  in_stack_00000028 = 0x32b2;
  in_stack_00000026 = 0x7de;
  FUN_32b2_7258();
  in_stack_00000020 = 0x32b2;
  in_stack_0000001e = 0x7e8;
  FUN_32b2_6eb1();
  in_stack_00000020 = 0x32b2;
  in_stack_0000001e = 0x7f0;
  FUN_32b2_6cc6();
  in_stack_00000020 = 0x32b2;
  in_stack_0000001e = 0x7f5;
  FUN_32b2_7258();
  in_stack_00000018 = 0x32b2;
  in_stack_00000016 = 0x7ff;
  FUN_32b2_6eb1();
  in_stack_00000018 = *(undefined2 *)(unaff_BP + -100);
  in_stack_00000016 = *(undefined2 *)(unaff_BP + -0x66);
  in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x68);
  in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x6a);
  in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x48);
  in_stack_0000000e = *(undefined2 *)(unaff_BP + -0x4a);
  in_stack_0000000c = *(undefined2 *)(unaff_BP + -0x4c);
  FUN_32b2_6d14();
  iStack_2 = 0x82a;
  FUN_32b2_6eb1();
  iStack_2 = 0x833;
  FUN_32b2_6d14();
  iStack_8 = 0x32b2;
  uStack_a = 0x83d;
  FUN_32b2_6eb1();
  iStack_8 = 0;
  uStack_a = 0x32b2;
  uStack_c = 0x844;
  FUN_3ab8_5089();
  uVar9 = (undefined1 *)0xffc9 < &iStack_8;
  uVar10 = &stack0x0000 == (undefined1 *)0xffd2;
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x84f;
  FUN_32b2_6cc6();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x857;
  FUN_32b2_6cc6();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x85c;
  FUN_32b2_7191();
  if ((bool)uVar10) {
    uVar4 = *(undefined2 *)(unaff_BP + 8);
    *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
    *(undefined2 *)(unaff_BP + -0x60) = uVar4;
  }
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x872;
  FUN_32b2_6cc6();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x87a;
  FUN_32b2_6cc6();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x87f;
  FUN_32b2_7191();
  if ((bool)uVar10) {
    uVar4 = *(undefined2 *)(unaff_BP + 0xc);
    *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
    *(undefined2 *)(unaff_BP + -0x88) = uVar4;
  }
  uVar4 = *(undefined2 *)(unaff_BP + -0x60);
  puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
  *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
  puVar7[1] = uVar4;
  uVar4 = *(undefined2 *)(unaff_BP + -0x88);
  puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
  *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
  puVar7[1] = uVar4;
  uVar4 = *(undefined2 *)(unaff_BP + -0x60);
  puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
  *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
  puVar7[1] = uVar4;
  uVar4 = *(undefined2 *)(unaff_BP + -0x88);
  puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
  *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
  puVar7[1] = uVar4;
  piVar1 = (int *)(unaff_BP + -0x36);
  *piVar1 = *piVar1 + 1;
  uVar10 = *piVar1 == 0;
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x8d7;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x8e0;
  FUN_32b2_6d14();
  in_stack_0000002c = 0x32b2;
  in_stack_0000002a = 0x8e5;
  FUN_32b2_7191();
  if (!(bool)uVar9 && !(bool)uVar10) {
    in_stack_0000002c = *(undefined2 *)(unaff_BP + -0xb6);
    in_stack_0000002a = *(undefined2 *)(unaff_BP + -0xb8);
    in_stack_00000028 = *(undefined2 *)(unaff_BP + -0xba);
    in_stack_00000026 = *(undefined2 *)(unaff_BP + -0xbc);
    in_stack_00000024 = 0x32b2;
    in_stack_00000022 = 0x8ff;
    FUN_32b2_7592();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x909;
    FUN_32b2_6d14();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x911;
    FUN_32b2_7154();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x916;
    FUN_32b2_6fd6();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x91e;
    FUN_32b2_6d14();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x927;
    FUN_32b2_710c();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x92c;
    FUN_32b2_7182();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x935;
    FUN_32b2_6e99();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x93d;
    FUN_32b2_710c();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x945;
    FUN_32b2_7154();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x94e;
    FUN_32b2_6e99();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x957;
    FUN_32b2_6eb1();
    in_stack_0000002a = unaff_BP + -0x8a;
    in_stack_00000028 = unaff_BP + -0x62;
    in_stack_00000026 = 0x32b2;
    in_stack_00000024 = 0x969;
    FUN_32b2_6cc6();
    in_stack_00000026 = 0x32b2;
    in_stack_00000024 = 0x96e;
    FUN_32b2_7258();
    in_stack_0000001e = 0x32b2;
    in_stack_0000001c = 0x978;
    FUN_32b2_6eb1();
    in_stack_0000001e = 0x32b2;
    in_stack_0000001c = 0x980;
    FUN_32b2_6cc6();
    in_stack_0000001e = 0x32b2;
    in_stack_0000001c = 0x985;
    FUN_32b2_7258();
    in_stack_00000016 = 0x32b2;
    in_stack_00000014 = 0x98f;
    FUN_32b2_6eb1();
    in_stack_00000016 = *(undefined2 *)(unaff_BP + -100);
    in_stack_00000014 = *(undefined2 *)(unaff_BP + -0x66);
    in_stack_00000012 = *(undefined2 *)(unaff_BP + -0x68);
    in_stack_00000010 = *(undefined2 *)(unaff_BP + -0x6a);
    in_stack_0000000e = *(undefined2 *)(unaff_BP + -0x48);
    in_stack_0000000c = *(undefined2 *)(unaff_BP + -0x4a);
    FUN_32b2_6d14();
    iStack_2 = 0x32b2;
    iStack_4 = 0x9ba;
    FUN_32b2_6eb1();
    iStack_2 = 0x32b2;
    iStack_4 = 0x9c3;
    FUN_32b2_6d14();
    uStack_a = 0x32b2;
    uStack_c = 0x9cd;
    FUN_32b2_6eb1();
    uStack_a = 0;
    uStack_c = 0x32b2;
    uStack_e = 0x9d4;
    FUN_3ab8_5089();
    uVar9 = &stack0x0000 == (undefined1 *)0xffd4;
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x9df;
    FUN_32b2_6cc6();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x9e7;
    FUN_32b2_6cc6();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0x9ec;
    FUN_32b2_7191();
    if ((bool)uVar9) {
      uVar4 = *(undefined2 *)(unaff_BP + 8);
      *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
      *(undefined2 *)(unaff_BP + -0x60) = uVar4;
    }
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0xa02;
    FUN_32b2_6cc6();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0xa0a;
    FUN_32b2_6cc6();
    in_stack_0000002a = 0x32b2;
    in_stack_00000028 = 0xa0f;
    FUN_32b2_7191();
    if ((bool)uVar9) {
      uVar4 = *(undefined2 *)(unaff_BP + 0xc);
      *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
      *(undefined2 *)(unaff_BP + -0x88) = uVar4;
    }
    uVar4 = *(undefined2 *)(unaff_BP + -0x60);
    puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
    *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
    puVar7[1] = uVar4;
    uVar4 = *(undefined2 *)(unaff_BP + -0x88);
    puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
    *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
    puVar7[1] = uVar4;
    *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
  }
  return *(undefined2 *)(unaff_BP + -0x36);
LAB_3ab8_5293:
  if ((*(int *)(unaff_BP + -0x68) != 99) && (*(int *)(unaff_BP + -0xa0) != 0)) {
    iStack_2 = unaff_BP + -0x13c;
    iStack_4 = unaff_BP + -0xc4;
    iStack_6 = 2;
    iStack_8 = 0x1bb4;
    iVar5 = 0x11f2;
    uStack_a = 0xfe3c;
    iVar6 = func_0x00015409();
    if (iVar6 != 0) {
LAB_3ab8_52cd:
      if (*(int *)0x158 != 0) {
LAB_3ab8_5458:
        if (*(int *)0x158 != 0) {
          puVar8 = auStack_18;
          puVar7 = (undefined2 *)(unaff_BP + -0x154);
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          uVar4 = func_0x00019593(iVar5,1);
          *(undefined2 *)0xbc0 = 1;
          return uVar4;
        }
        iStack_4 = 0x13;
        iStack_2 = iVar5;
        FUN_32b2_6d14();
        iStack_2 = 0x32b2;
        iStack_4 = 0x1b;
        FUN_32b2_710c();
        iStack_2 = 0x32b2;
        iStack_4 = 0x23;
        FUN_32b2_6d14();
        iStack_2 = 0x32b2;
        iStack_4 = 0x2b;
        FUN_32b2_710c();
        iStack_2 = 0x32b2;
        iStack_4 = 0x30;
        FUN_32b2_718c();
        iStack_2 = 0x32b2;
        iStack_4 = 0x38;
        FUN_32b2_7095();
        iStack_2 = 0x32b2;
        iStack_4 = 0x40;
        FUN_32b2_6eb1();
        iStack_2 = 0x32b2;
        iStack_4 = 0x48;
        FUN_32b2_6d14();
                    /* WARNING: Subroutine does not return */
        iStack_2 = 0x32b2;
        iStack_4 = 0x50;
        FUN_32b2_6e63();
      }
      iStack_2 = 0x652;
      iStack_4 = unaff_BP + -0x128;
      iStack_8 = -0x19b;
      iStack_6 = iVar5;
      FUN_21f2_3454();
      iStack_2 = 0x78e;
      iStack_4 = unaff_BP + -0x128;
      iStack_6 = 0x22b2;
      iStack_8 = -0x18b;
      FUN_21f2_2d26();
      *(undefined2 *)(unaff_BP + -0xb0) = 1;
      while (*(int *)(unaff_BP + -0xb0) < 0xb) {
        iStack_2 = 0x6008;
        iStack_4 = unaff_BP + -0x128;
        iStack_6 = 0x22b2;
        iStack_8 = -0x164;
        FUN_21f2_2d26();
        *(int *)(unaff_BP + -0xb0) = *(int *)(unaff_BP + -0xb0) + 1;
      }
      iStack_2 = 0x2e6;
      iStack_4 = unaff_BP + -0x128;
      iStack_6 = 0x22b2;
      iStack_8 = -0x151;
      FUN_21f2_2d26();
      iStack_2 = unaff_BP + -0xa0;
      iStack_4 = unaff_BP + -0x162;
      iStack_6 = unaff_BP + -0x138;
      iStack_8 = unaff_BP + -0x128;
      uStack_a = 9999;
      uStack_c = 0x22b2;
      iVar5 = 0x1bb4;
      uStack_e = 0xfece;
      iVar6 = FUN_1def_0904();
      *(int *)(unaff_BP + -0x68) = iVar6;
      if (iVar6 != -1) {
        if (*(int *)0x158 != 0) {
          puVar8 = auStack_18;
          puVar7 = (undefined2 *)(unaff_BP + -0x154);
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          func_0x00019593(0x1bb4,1);
          *(undefined2 *)0xbc0 = 1;
          goto LAB_2bb4_48e8;
        }
        if (*(int *)(unaff_BP + -0x68) == 99) {
          puVar8 = auStack_18;
          puVar7 = (undefined2 *)(unaff_BP + -0x154);
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          iVar5 = 0x18b3;
          func_0x00019593(0x1bb4,0xffff);
          *(undefined2 *)0xbc0 = 1;
        }
        else if (*(int *)(unaff_BP + -0xa0) != 0) {
          iStack_2 = unaff_BP + -0x162;
          iStack_4 = unaff_BP + -0x138;
          iStack_6 = 2;
          iStack_8 = 0x1bb4;
          iVar5 = 0x11f2;
          uStack_a = 0xff57;
          iVar6 = func_0x00015409();
          if (iVar6 != 0) {
            iStack_2 = 0x11f2;
            iStack_4 = 0xff6b;
            FUN_28b3_0cb6();
            iStack_2 = 0x22b2;
            iStack_4 = -0x90;
            func_0x00029d78();
            uStack_a = 0x22b2;
            uStack_c = 0xff7a;
            func_0x000299d1();
            uStack_a = 0x22b2;
            uStack_c = 0xff83;
            FUN_28b3_0cb6();
            uStack_a = 0x22b2;
            uStack_c = 0xff88;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0xff92;
            func_0x000299d1();
            uStack_12 = 0x22b2;
            uStack_14 = 0xff9b;
            FUN_28b3_0cb6();
            uStack_12 = 0x22b2;
            uStack_14 = 0xffa0;
            func_0x00029d78();
            func_0x000299d1(0x22b2);
            FUN_28b3_0cb6(0x22b2);
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2);
            iVar5 = 0x1bb4;
            iVar6 = FUN_1def_043a(0x22b2);
            if (iVar6 != 0) goto LAB_3ab8_5458;
          }
        }
        goto LAB_3ab8_52cd;
      }
    }
  }
  goto LAB_3ab8_51c6;
}



/* 3ab8:597f  FUN_3ab8_597f  310 bytes, 0 callers */

bool __cdecl16far FUN_3ab8_597f(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar8;
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
  local_8 = 0;
  local_a = 0x22b2;
  local_c = 0x513;
  uVar4 = FUN_4375_7430();
  local_8._1_1_ = uVar4;
  uVar4 = func_0x0004abeb();
  local_8 = CONCAT11(local_8._1_1_,uVar4);
  puVar5 = (undefined2 *)FUN_1def_05d1();
  local_18 = *puVar5;
  local_16 = puVar5[1];
  puVar5 = (undefined2 *)func_0x0001e558();
  local_14 = *puVar5;
  local_12 = puVar5[1];
  puVar5 = (undefined2 *)FUN_1def_05d1();
  local_10 = *puVar5;
  local_e = puVar5[1];
  puVar5 = (undefined2 *)func_0x0001e558();
  local_c = *puVar5;
  local_a = puVar5[1];
  func_0x0000daa6();
  puVar7 = (undefined2 *)&stack0x5c79;
  puVar5 = &local_18;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  iVar6 = FUN_17a6_0cba();
  if (0 < iVar6) {
    uVar8 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar8 + 0x15);
    *pbVar1 = *pbVar1 | 0x20;
  }
  return 0 < iVar6;
}



/* 3ab8:5ab5  FUN_3ab8_5ab5  610 bytes, 0 callers */

char __cdecl16far FUN_3ab8_5ab5(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  undefined1 uStack000c;
  int in_stack_0000000e;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  
  FUN_21f2_0ebc();
  local_8 = 0x22b2;
  local_a = 0x64b;
  FUN_28b3_0cb6();
  local_8 = 0x22b2;
  local_a = 0x654;
  func_0x00029b85();
  local_8 = 0x22b2;
  local_a = 0x659;
  func_0x00029d78();
  local_8 = 0x22b2;
  local_a = 0x661;
  func_0x000299b9();
  local_8 = 0x22b2;
  local_a = 0x669;
  func_0x000299d1();
  local_8 = 0x22b2;
  local_a = 0x672;
  FUN_28b3_0cb6();
  local_8 = 0x22b2;
  local_a = 0x677;
  func_0x00029d78();
  local_8 = 0x22b2;
  local_a = 0x680;
  func_0x00029c2c();
  local_8 = 0x22b2;
  local_a = 0x688;
  func_0x000299b9();
  local_10 = 0x22b2;
  local_12 = 0x692;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0x697;
  func_0x0002a11e();
  local_8 = 0x22b2;
  local_a = 0x6a1;
  func_0x00029834();
  local_8 = 0x22b2;
  local_a = 0x6a9;
  func_0x00029c2c();
  local_8 = 0x22b2;
  local_a = 0x6b1;
  func_0x00029c2c();
  local_8 = 0x22b2;
  local_a = 0x6b9;
  func_0x000299d1();
  local_c = local_38;
  local_e = local_3a;
  local_10 = 0x22b2;
  local_12 = 0x6ca;
  FUN_28b3_15dc();
  local_8 = 0x22b2;
  local_a = 0x6d4;
  func_0x00029834();
  local_8 = 0x22b2;
  local_a = 0x6dc;
  func_0x00029c2c();
  local_8 = 0x22b2;
  local_a = 0x6e4;
  func_0x000299d1();
  local_16 = CONCAT11(local_16._1_1_,*(undefined1 *)0xb310);
  if (_uStack000c == 0) {
    local_8 = 1;
    local_a = 0x22b2;
    local_c = 0x702;
    uStack000c = FUN_4375_7430();
  }
  else {
  }
  local_18 = CONCAT11(uStack000c,(undefined1)local_18);
  if (in_stack_0000000e == 0) {
    local_8 = 1;
    local_a = 0x22b2;
    local_c = 0x719;
    func_0x0004abeb();
  }
  uStack_14 = local_c;
  local_16 = local_e;
  local_28 = *(undefined2 *)0xb30c;
  local_26 = *(undefined2 *)0xb30e;
  local_24 = *(undefined2 *)0xb37e;
  local_22 = *(undefined2 *)0xb380;
  local_8 = local_c;
  local_a = local_e;
  local_c = local_10;
  local_e = local_12;
  local_18 = 0;
  local_1a = 0x22b2;
  local_1c = 0x757;
  local_12 = unaff_SI;
  local_10 = unaff_DI;
  puVar5 = (undefined2 *)FUN_1def_05d1();
  uStack_14 = local_c;
  local_16 = local_e;
  local_20 = *puVar5;
  local_8 = local_c;
  local_a = local_e;
  local_c = local_10;
  local_e = local_12;
  local_18 = 0;
  local_1a = 0x1bb4;
  local_1c = 0x787;
  puVar5 = (undefined2 *)func_0x0001e558();
  local_1c = *puVar5;
  local_1a = puVar5[1];
  local_8 = 0;
  local_a = 0x1bb4;
  local_c = 0x79f;
  func_0x0000daa6();
  puVar7 = &local_1c;
  puVar5 = &local_28;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  uVar8 = 0x11f2;
  local_20 = 0x7b4;
  iVar6 = FUN_17a6_0cba();
  cVar4 = 0 < iVar6;
  if ((bool)cVar4) {
    local_8 = *(undefined2 *)0x14a;
    local_a = *(undefined2 *)0x148;
    local_c = 0x11f2;
    uVar8 = 0;
    local_e = 0x7cb;
    uVar9 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar9 + 0x15);
    *pbVar1 = *pbVar1 | 0x20;
  }
  local_a = 0x7de;
  local_8 = uVar8;
  func_0x00029834();
  local_8 = 0x22b2;
  local_a = 0x7e3;
  func_0x00029af6();
  local_8 = 0x22b2;
  local_a = 0x7eb;
  func_0x000299b9();
  local_10 = 0x22b2;
  local_12 = 0x7f5;
  func_0x000299d1();
  uStack_14 = local_8;
  local_16 = local_a;
  local_18 = 0;
  local_1a = 0x22b2;
  local_1c = 0x809;
  puVar5 = (undefined2 *)FUN_1def_05d1();
  local_20 = *puVar5;
  local_8 = 0x1bb4;
  local_a = 0x821;
  func_0x00029834();
  local_10 = 0x22b2;
  local_12 = 0x82b;
  func_0x000299d1();
  uStack_14 = local_8;
  local_16 = local_a;
  local_18 = 0;
  local_1a = 0x22b2;
  local_1c = 0x83f;
  puVar5 = (undefined2 *)func_0x0001e558();
  local_1c = *puVar5;
  local_1a = puVar5[1];
  local_8 = 0;
  local_a = 0x1bb4;
  local_c = 0x857;
  func_0x0000daa6();
  puVar7 = &local_1c;
  puVar5 = &local_28;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  local_20 = 0x86c;
  iVar6 = FUN_17a6_0cba();
  if (0 < iVar6) {
    cVar4 = cVar4 + '\x01';
    local_8 = *(undefined2 *)0x14a;
    local_a = *(undefined2 *)0x148;
    local_c = 0x11f2;
    local_e = 0x883;
    uVar9 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar9 + 0x15);
    *pbVar1 = *pbVar1 | 0x20;
  }
  return cVar4;
}



/* 3ab8:5d17  FUN_3ab8_5d17  699 bytes, 0 callers */

void __cdecl16far FUN_3ab8_5d17(uint param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar8;
  undefined2 *puVar9;
  undefined1 local_62 [4];
  undefined2 local_5e;
  undefined2 local_5c;
  uint local_5a;
  int local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 auStack_36 [3];
  undefined2 local_30 [2];
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 local_24;
  undefined2 auStack_20 [2];
  undefined2 uStack_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 *local_a;
  undefined2 *local_8;
  
  FUN_21f2_0ebc();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x8ac;
  func_0x00029834();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x8b4;
  FUN_28b3_0e53();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x8bc;
  func_0x00029834();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x8c4;
  FUN_28b3_0e53();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x8cd;
  FUN_28b3_0cb6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x8d6;
  func_0x00029b6d();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x8db;
  func_0x00029d78();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x8e3;
  func_0x00029c74();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x8eb;
  FUN_28b3_0e53();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x8f4;
  FUN_28b3_0cb6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x8fd;
  func_0x00029b6d();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x902;
  func_0x00029d78();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x90a;
  func_0x00029c74();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x912;
  FUN_28b3_0e53();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x91b;
  FUN_28b3_0cb6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x920;
  func_0x00029ae7();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x929;
  FUN_28b3_0cb6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x92e;
  func_0x00029ae7();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x933;
  FUN_28b3_1181();
  if ((bool)in_CF) {
    local_46 = *(undefined2 *)0xa4dc;
    local_44 = *(undefined2 *)0xa4de;
    local_42 = local_46;
    local_40 = local_44;
    local_3e = local_46;
    local_3c = local_44;
    local_3a = *(undefined2 *)0xa4c8;
    local_38 = *(undefined2 *)0xa4ca;
  }
  else {
    local_46 = *(undefined2 *)0xa4dc;
    local_44 = *(undefined2 *)0xa4de;
    local_42 = *(undefined2 *)0xa4dc;
    local_40 = *(undefined2 *)0xa4de;
    local_3e = *(undefined2 *)0xa4c8;
    local_3c = *(undefined2 *)0xa4ca;
    local_3a = *(undefined2 *)0xa4dc;
    local_38 = *(undefined2 *)0xa4de;
  }
  local_8 = &local_56;
  local_a = &local_52;
  puVar6 = auStack_20;
  puVar5 = &local_46;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar9;
  }
  puVar6 = auStack_36;
  puVar5 = local_30;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar9;
  }
  local_38 = 0x22b2;
  local_3a = 0x9ad;
  local_46 = local_42;
  local_44 = local_40;
  FUN_1def_1921();
  uVar8 = (undefined1 *)0xffcf < auStack_36;
  local_8 = (undefined2 *)0x1bb4;
  local_a = (undefined2 *)0x9b9;
  FUN_28b3_0cb6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x9be;
  func_0x00029ae7();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x9c7;
  FUN_28b3_0cb6();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x9cc;
  func_0x00029ae7();
  local_8 = (undefined2 *)0x22b2;
  local_a = (undefined2 *)0x9d1;
  FUN_28b3_1181();
  if ((bool)uVar8) {
    local_46 = *(undefined2 *)0xa4c8;
    local_44 = *(undefined2 *)0xa4ca;
    local_42 = *(undefined2 *)0xa4dc;
    local_40 = *(undefined2 *)0xa4de;
  }
  else {
    local_46 = *(undefined2 *)0xa4dc;
    local_44 = *(undefined2 *)0xa4de;
    local_42 = *(undefined2 *)0xa4c8;
    local_40 = *(undefined2 *)0xa4ca;
  }
  local_3e = *(undefined2 *)0xa4c8;
  local_3c = *(undefined2 *)0xa4ca;
  local_3a = *(undefined2 *)0xa4c8;
  local_38 = *(undefined2 *)0xa4ca;
  local_8 = (undefined2 *)local_62;
  local_a = &local_5e;
  puVar6 = auStack_20;
  puVar5 = &local_46;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar9;
  }
  puVar6 = auStack_36;
  puVar5 = local_30;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar9;
  }
  local_38 = 0x22b2;
  local_3a = 0xa3f;
  FUN_1def_1921();
  uVar1 = *(undefined2 *)0xa6c;
  *(undefined2 *)0xa6c = param_2;
  local_8 = (undefined2 *)0x1;
  local_a = (undefined2 *)0x1bb4;
  local_c = 0xa5a;
  FUN_28b3_0cb6();
  local_a = (undefined2 *)0x22b2;
  local_c = 0xa5f;
  func_0x00029d78();
  local_12 = 0x22b2;
  local_14 = 0xa69;
  func_0x000299d1();
  local_12 = 0x22b2;
  local_14 = 0xa71;
  FUN_28b3_0cb6();
  local_12 = 0x22b2;
  local_14 = 0xa76;
  func_0x00029d78();
  local_1a = 0x22b2;
  uStack_1c = 0xa80;
  func_0x000299d1();
  local_1a = 0x22b2;
  uStack_1c = 0xa88;
  FUN_28b3_0cb6();
  local_1a = 0x22b2;
  uStack_1c = 0xa8d;
  func_0x00029d78();
  local_24 = 0xa97;
  func_0x000299d1();
  local_24 = 0xa9f;
  FUN_28b3_0cb6();
  local_24 = 0xaa4;
  func_0x00029d78();
  uStack_2a = 0x22b2;
  local_2c = 0xaae;
  func_0x000299d1();
  uStack_2a = 0x22b2;
  uVar7 = 0x1bb4;
  local_2c = 0xab3;
  FUN_1def_029f();
  local_1a = local_52;
  local_18 = local_50;
  local_16 = local_56;
  local_14 = local_54;
  local_12 = local_5e;
  local_10 = local_5c;
  *(undefined2 *)0xa6c = uVar1;
  local_5a = param_1 + *(uint *)0x148;
  local_58 = ((int)param_1 >> 0xf) + *(int *)0x14a + (uint)CARRY2(param_1,*(uint *)0x148);
  if ((local_58 <= *(int *)0x13e) && ((local_58 < *(int *)0x13e || (local_5a <= *(uint *)0x13c)))) {
    local_c = 0x1bb4;
    uVar7 = 0;
    local_e = 0xb25;
    local_a = (undefined2 *)local_5a;
    local_8 = (undefined2 *)local_58;
    puVar9 = (undefined2 *)func_0x0000013f();
    puVar6 = (undefined2 *)puVar9;
    puVar5 = &local_1a;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = *puVar2;
    }
  }
  if ((1 < *(byte *)0x114a) && (param_1 == 2)) {
    local_5a = *(uint *)0x148 + 1;
    local_58 = *(int *)0x14a + (uint)(0xfffe < *(uint *)0x148);
    local_e = 0xb5f;
    local_c = uVar7;
    local_a = (undefined2 *)local_5a;
    local_8 = (undefined2 *)local_58;
    puVar9 = (undefined2 *)func_0x0000013f();
    puVar6 = (undefined2 *)puVar9;
    puVar5 = &local_1a;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = *puVar2;
    }
  }
  return;
}



/* 3ab8:5fd3  FUN_3ab8_5fd3  37 bytes, 1 callers */

void __cdecl16far FUN_3ab8_5fd3(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 in_AL;
  int iVar4;
  int unaff_BP;
  undefined2 *puVar5;
  undefined1 *unaff_DI;
  undefined2 *puVar6;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar7;
  
  *unaff_DI = in_AL;
  uVar7 = func_0x0000013f(0x3ab8);
  *(undefined2 *)(unaff_BP + -0x6c) = (int)uVar7;
  *(undefined2 *)(unaff_BP + -0x6a) = (int)((ulong)uVar7 >> 0x10);
  puVar5 = (undefined2 *)(unaff_BP + -0x18);
  puVar3 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x6c);
  puVar6 = (undefined2 *)puVar3;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 3ab8:5ff8  FUN_3ab8_5ff8  1565 bytes, 0 callers */

undefined2 __cdecl16far
FUN_3ab8_5ff8(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,int param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined1 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte local_118 [20];
  undefined4 local_104;
  int local_100;
  int local_fa;
  undefined1 local_f8 [100];
  undefined2 local_94;
  undefined2 local_92;
  undefined4 local_90;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  int local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined1 local_6e [56];
  undefined2 uStack_36;
  undefined2 uStack_34;
  byte *pbStack_32;
  undefined2 uStack_30;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  undefined4 uStack_26;
  undefined2 uStack_22;
  undefined4 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined4 uStack_16;
  undefined4 uStack_12;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined1 *local_a;
  
  FUN_21f2_0ebc();
  local_80 = 0;
  if (9 < param_1) {
    local_a = (undefined1 *)0x1de;
    puStack_c = local_6e;
    uStack_e = 0x22b2;
    uStack_12._2_2_ = 0xba0;
    FUN_21f2_3454();
    local_80 = param_1 + -10;
    goto LAB_3ab8_637e;
  }
  if (param_1 == 0) {
    local_a = (undefined1 *)0xbbe;
    FUN_28b3_0cb6();
    local_a = (undefined1 *)0xbc7;
    func_0x00029b6d();
    local_a = (undefined1 *)0xbcc;
    func_0x00029d78();
    local_a = (undefined1 *)0xbd4;
    func_0x00029834();
    local_a = (undefined1 *)0xbd9;
    func_0x00029ae7();
    local_a = (undefined1 *)0xbde;
    func_0x00029c9d();
    local_a = (undefined1 *)0xbe7;
    func_0x000299b9();
    local_a = (undefined1 *)0xbef;
    FUN_28b3_0ee9();
    if (*(int *)0x112e != 0) {
      local_a = (undefined1 *)0xbff;
      func_0x00029834();
      local_a = (undefined1 *)0xc08;
      func_0x00029c2c();
      goto LAB_3ab8_60ac;
    }
  }
  else {
    local_8a = param_3;
    local_88 = param_4;
    local_86 = param_5;
    local_84 = param_6;
    local_a = (undefined1 *)0xc24;
    FUN_28b3_0cb6();
    local_a = (undefined1 *)0xc29;
    func_0x00029d78();
LAB_3ab8_60ac:
    local_a = (undefined1 *)0xc31;
    func_0x000299d1();
  }
  if (param_1 == 2) {
    local_a = (undefined1 *)0xc43;
    func_0x00029834();
    local_a = (undefined1 *)0xc48;
    func_0x00029ae7();
    local_a = (undefined1 *)0xc51;
    func_0x00029c2c();
    local_a = (undefined1 *)0xc5a;
    func_0x00029c74();
    local_a = (undefined1 *)0xc5f;
    lVar11 = FUN_28b3_0f51();
    local_a = (undefined1 *)0x7360;
    puStack_c = (undefined1 *)0x0;
    uStack_e = 36000;
    uStack_16._2_2_ = (undefined1 *)0x22b2;
    uStack_16._0_2_ = 0xc79;
    uStack_12 = lVar11;
    uVar12 = FUN_21f2_5978();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc88;
    uStack_16 = uVar12;
    local_104 = FUN_21f2_5a12();
    local_104 = lVar11 + local_104;
    uStack_18 = 0;
    uStack_1a = 600;
    uStack_22 = 0xca1;
    uStack_1e = local_104;
    uVar13 = FUN_21f2_5978();
    uStack_22 = 0xfda8;
    uStack_2a._2_2_ = (byte *)0x22b2;
    uStack_2a._0_2_ = (undefined1 *)0xcb8;
    uStack_26 = uVar13;
    FUN_21f2_5a12();
    uStack_2a._2_2_ = (byte *)0x22b2;
    uStack_2a._0_2_ = (undefined1 *)0xccd;
    func_0x000298b4();
    uStack_2a._2_2_ = (byte *)0x22b2;
    uStack_2a._0_2_ = (undefined1 *)0xcd6;
    func_0x00029b6d();
    uStack_2a._2_2_ = (byte *)0x22b2;
    uStack_2a._0_2_ = (undefined1 *)0xcdf;
    FUN_28b3_0e3b();
    uStack_2a._2_2_ = (byte *)0x22b2;
    uStack_2a._0_2_ = (undefined1 *)0xce8;
    FUN_28b3_0e53();
    uStack_2a._2_2_ = (byte *)0x22b2;
    uStack_2a._0_2_ = (undefined1 *)0xcf1;
    FUN_28b3_0cb6();
    uStack_2a._2_2_ = (byte *)0x22b2;
    uStack_2a._0_2_ = (undefined1 *)0xcf6;
    func_0x00029d78();
    uStack_30 = 0x22b2;
    pbStack_32 = (byte *)0xd00;
    func_0x000299d1();
    uStack_30 = 0x600e;
    pbStack_32 = local_118;
    uStack_34 = 0x22b2;
    uStack_36 = 0xd0e;
    FUN_21f2_3454();
    uStack_2a._2_2_ = local_118;
    uStack_2a._0_2_ = (undefined1 *)0x22b2;
    uStack_2e._2_2_ = 0xd1b;
    iVar5 = func_0x00024ce4();
    for (local_100 = iVar5 + -1; local_118[local_100] == 0x30; local_100 = local_100 + -1) {
      local_118[local_100] = 0;
    }
    uVar9 = local_118[local_100] < 0x2e;
    uVar10 = false;
    if (local_118[local_100] == 0x2e) {
      local_118[local_100] = 0;
      local_100 = local_100 + -1;
      uVar10 = local_100 == 0;
    }
    uStack_2a._2_2_ = (byte *)0x22b2;
    uStack_2a._0_2_ = (undefined1 *)0xd50;
    func_0x00029834();
    uStack_2a._2_2_ = (byte *)0x22b2;
    uStack_2a._0_2_ = (undefined1 *)0xd59;
    func_0x00029834();
    uStack_2a._2_2_ = (byte *)0x22b2;
    uStack_2a._0_2_ = (undefined1 *)0xd5e;
    FUN_28b3_1181();
    if (!(bool)uVar9 && !(bool)uVar10) {
      uVar12 = CONCAT22(-((int)((ulong)uVar12 >> 0x10) + (uint)((int)uVar12 != 0)),-(int)uVar12);
    }
    uStack_30 = 0x6013;
    pbStack_32 = local_6e;
    uStack_34 = 0x22b2;
    uStack_36 = 0xd8a;
    uStack_2a = uVar13;
    uStack_2e = uVar12;
    FUN_21f2_3454();
    uStack_2a._2_2_ = local_118;
    uStack_2a._0_2_ = local_6e;
    uStack_2e._2_2_ = 0x22b2;
    uVar7 = 0x22b2;
    uStack_2e._0_2_ = 0xd9b;
    FUN_21f2_2d26();
    uStack_2a._2_2_ = (byte *)0x601c;
LAB_3ab8_6220:
    uStack_2a._0_2_ = local_6e;
    uStack_2e._0_2_ = 0xdaa;
    uStack_2e._2_2_ = uVar7;
    FUN_21f2_2d26();
    local_80 = 3;
    uVar8 = 0x22b2;
  }
  else {
    local_a = (undefined1 *)param_7;
    puStack_c = (undefined1 *)local_84;
    uStack_e = local_86;
    uStack_12._2_2_ = local_88;
    uStack_12._0_2_ = local_8a;
    uStack_16._2_2_ = local_6e;
    uStack_16._0_2_ = 0x22b2;
    uVar7 = 0x1bb4;
    uStack_18 = 0xdd2;
    iVar5 = func_0x0002267f();
    if (iVar5 == 0) {
      uStack_2a._2_2_ = (byte *)0x601e;
      uStack_2a._0_2_ = local_6e;
      uStack_2e._2_2_ = 0x1bb4;
      uVar7 = 0x22b2;
      uStack_2e._0_2_ = 0xde6;
      FUN_21f2_3454();
    }
    if (param_1 != 0) {
      uStack_2a._2_2_ = (byte *)0x6021;
      goto LAB_3ab8_6220;
    }
    uVar8 = uVar7;
    if (1 < *(int *)0x112e) {
      uStack_2a._2_2_ = (byte *)0x6023;
      uStack_2a._0_2_ = local_6e;
      uVar8 = 0x22b2;
      uStack_2e._0_2_ = 0xe07;
      uStack_2e._2_2_ = uVar7;
      FUN_21f2_2d26();
    }
  }
  if (*(int *)0xc1e == 1) {
    if (*(int *)0x1128 == 2) {
      uStack_2a._2_2_ = (byte *)0x6025;
      uStack_2a._0_2_ = local_6e;
      uStack_2e._0_2_ = 0xe24;
      uStack_2e._2_2_ = uVar8;
      FUN_21f2_2d26();
      uVar8 = 0x22b2;
    }
    if (*(int *)0x1128 == 1) {
      uStack_2a._2_2_ = local_6e;
      uStack_2a._0_2_ = local_f8;
      uStack_2e._0_2_ = 0xe3b;
      uStack_2e._2_2_ = uVar8;
      func_0x00024c86();
      uStack_2a._2_2_ = (byte *)0x6027;
      uStack_2a._0_2_ = local_6e;
      uStack_2e._2_2_ = 0x22b2;
      uStack_2e._0_2_ = 0xe4a;
      func_0x00024c86();
      uStack_2a._2_2_ = local_f8;
      uStack_2a._0_2_ = local_6e;
      uStack_2e._2_2_ = 0x22b2;
      uVar8 = 0x22b2;
      uStack_2e._0_2_ = 0xe5a;
      FUN_21f2_2d26();
    }
    local_80 = 1;
  }
  if (*(int *)0xc1e == -1) {
    if (*(int *)0x1128 == 2) {
      uStack_2a._2_2_ = (byte *)0x6029;
      uStack_2a._0_2_ = local_6e;
      uStack_2e._0_2_ = 0xe7c;
      uStack_2e._2_2_ = uVar8;
      FUN_21f2_2d26();
      uVar8 = 0x22b2;
    }
    if (*(int *)0x1128 == 1) {
      uStack_2a._2_2_ = local_6e;
      uStack_2a._0_2_ = local_f8;
      uStack_2e._0_2_ = 0xe93;
      uStack_2e._2_2_ = uVar8;
      func_0x00024c86();
      uStack_2a._2_2_ = (byte *)0x602c;
      uStack_2a._0_2_ = local_6e;
      uStack_2e._2_2_ = 0x22b2;
      uStack_2e._0_2_ = 0xea2;
      func_0x00024c86();
      uStack_2a._2_2_ = local_f8;
      uStack_2a._0_2_ = local_6e;
      uStack_2e._2_2_ = 0x22b2;
      uVar8 = 0x22b2;
      uStack_2e._0_2_ = 0xeb2;
      FUN_21f2_2d26();
    }
    local_80 = 2;
  }
  uStack_2a._2_2_ = local_6e;
  uStack_2e._2_2_ = 0xec2;
  uStack_2a._0_2_ = (undefined1 *)uVar8;
  local_fa = func_0x00024ce4();
  if (local_fa == 0) {
    return 0;
  }
  uStack_2a._2_2_ = local_6e;
  uStack_2a._0_2_ = (undefined1 *)param_2;
  uStack_2e._2_2_ = 0x22b2;
  uStack_2e._0_2_ = 0xeda;
  FUN_21f2_3454();
  if (*(char *)0x1131 != '\0') {
    local_a = (undefined1 *)param_2;
    puStack_c = (undefined1 *)0x22b2;
    uStack_e = 0xeee;
    FUN_4375_785d();
    local_a = local_6e;
    puStack_c = (undefined1 *)0x22b2;
    uStack_e = 0xefc;
    FUN_21f2_3454();
  }
LAB_3ab8_637e:
  local_a = (undefined1 *)0x0;
  puStack_c = local_6e;
  uStack_e = 0x22b2;
  uStack_12._2_2_ = 0xf0e;
  puVar4 = (undefined2 *)func_0x00018eff();
  local_7a = *puVar4;
  local_78 = puVar4[1];
  local_7e = *(undefined2 *)0xa488;
  local_7c = *(undefined2 *)0xa48a;
  if (param_8 == 0) {
    *(undefined2 *)0xc122 = local_7a;
    *(undefined2 *)0xc124 = local_78;
  }
  else {
    local_a = (undefined1 *)0xf39;
    func_0x00029834();
    local_a = (undefined1 *)0xf41;
    FUN_28b3_100d();
    local_a = (undefined1 *)0xf4a;
    func_0x00029c2c();
    local_a = (undefined1 *)0xf52;
    FUN_28b3_0e53();
  }
  if (param_1 < 10) {
    local_a = (undefined1 *)0xf76;
    FUN_28b3_0cb6();
    local_a = (undefined1 *)0xf7f;
    func_0x00029b85();
    local_a = (undefined1 *)0xf88;
    FUN_28b3_0e53();
  }
  else {
    local_94 = *(undefined2 *)0xa488;
    local_92 = *(undefined2 *)0xa48a;
  }
  local_a = (undefined1 *)0xfa2;
  FUN_28b3_0cb6();
  uStack_12._2_2_ = 0x22b2;
  uStack_12._0_2_ = 0xfac;
  func_0x000299d1();
  uStack_12._2_2_ = 0x22b2;
  uStack_12._0_2_ = 0xfb4;
  FUN_28b3_0cb6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xfbe;
  func_0x000299d1();
  uStack_18 = 0;
  uStack_1a = 0x22b2;
  uStack_1e._2_2_ = 0xfc6;
  FUN_1def_05d1();
  local_a = (undefined1 *)0xfdf;
  FUN_28b3_0cb6();
  uStack_12._2_2_ = 0x22b2;
  uStack_12._0_2_ = 0xfe9;
  func_0x000299d1();
  uStack_12._2_2_ = 0x22b2;
  uStack_12._0_2_ = 0xff1;
  FUN_28b3_0cb6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xffb;
  func_0x000299d1();
  uStack_18 = 0;
  uStack_1a = 0x22b2;
  uStack_1e._2_2_ = 0x1003;
  puVar4 = (undefined2 *)func_0x0001e558();
  local_76 = *puVar4;
  local_74 = puVar4[1];
  *(undefined2 *)0xc3a0 = local_a;
  *(undefined2 *)0xc3a2 = 0x1bb4;
  uVar7 = *(undefined2 *)0xb30c;
  uVar3 = *(undefined2 *)0xb30e;
  *(undefined2 *)0xb30c = local_a;
  *(undefined2 *)0xb30e = 0x1bb4;
  *(undefined2 *)0xc3a4 = local_76;
  *(undefined2 *)0xc3a6 = local_74;
  local_72 = *(undefined2 *)0xb37e;
  local_70 = *(undefined2 *)0xb380;
  *(undefined2 *)0xb37e = local_76;
  *(undefined2 *)0xb380 = local_74;
  *(undefined1 *)0xc3b4 = *(undefined1 *)0x1ce;
  *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
  local_a = (undefined1 *)*(undefined2 *)0xa47c;
  puStack_c = (undefined1 *)*(undefined2 *)0xa47a;
  uStack_e = *(undefined2 *)0xa478;
  uStack_12._2_2_ = 0x1bb4;
  uStack_12._0_2_ = 0x1085;
  FUN_28b3_0cb6();
  uStack_18 = 0x22b2;
  uStack_1a = 0x108f;
  func_0x000299d1();
  uStack_18 = 0;
  uStack_1a = 0x22b2;
  uStack_1e._2_2_ = 0x1097;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  uVar8 = puVar4[1];
  *(undefined2 *)0xc3a8 = *puVar4;
  *(undefined2 *)0xc3aa = uVar8;
  local_a = (undefined1 *)*(undefined2 *)0xa47c;
  puStack_c = (undefined1 *)*(undefined2 *)0xa47a;
  uStack_e = *(undefined2 *)0xa478;
  uStack_12._2_2_ = 0x1bb4;
  uStack_12._0_2_ = 0x10c0;
  FUN_28b3_0cb6();
  uStack_18 = 0x22b2;
  uStack_1a = 0x10ca;
  func_0x000299d1();
  uStack_18 = 0;
  uStack_1a = 0x22b2;
  uStack_1e._2_2_ = 0x10d2;
  puVar4 = (undefined2 *)func_0x0001e558();
  uVar8 = puVar4[1];
  *(undefined2 *)0xc3ac = *puVar4;
  *(undefined2 *)0xc3ae = uVar8;
  uVar8 = *(undefined2 *)0xbc78;
  *(int *)0xc3b0 = (int)local_6e;
  *(undefined2 *)0xc3b2 = uVar8;
  *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
  local_a = (undefined1 *)0x1bb4;
  puStack_c = (undefined1 *)0x10fd;
  func_0x0000daa6();
  puVar6 = &uStack_1e;
  puVar4 = (undefined2 *)0xc3a0;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = (undefined2 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 2);
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_22 = 0x1112;
  FUN_1885_2948();
  local_a = (undefined1 *)0x18b3;
  puStack_c = (undefined1 *)0x111e;
  local_90 = func_0x00000398();
  uVar8 = (undefined2)((ulong)local_90 >> 0x10);
  iVar5 = (int)local_90;
  *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) | 0x10;
  *(byte *)(iVar5 + 0x17) = *(byte *)(iVar5 + 0x17) & 0xfe;
  *(byte *)(iVar5 + 0x17) = *(byte *)(iVar5 + 0x17) & 0xfd;
  *(byte *)(iVar5 + 0x17) = *(byte *)(iVar5 + 0x17) & 0xfb;
  *(byte *)(iVar5 + 0x17) = *(byte *)(iVar5 + 0x17) | 0x40;
  if (local_80 == 1) {
    *(byte *)(iVar5 + 0x17) = *(byte *)(iVar5 + 0x17) | 1;
  }
  if (local_80 == 2) {
    *(byte *)(iVar5 + 0x17) = *(byte *)(iVar5 + 0x17) | 2;
  }
  if (local_80 == 3) {
    *(byte *)(iVar5 + 0x17) = *(byte *)(iVar5 + 0x17) | 4;
  }
  *(undefined2 *)0xb30c = uVar7;
  *(undefined2 *)0xb30e = uVar3;
  *(undefined2 *)0xb37e = local_72;
  *(undefined2 *)0xb380 = local_70;
  local_a = (undefined1 *)0x118c;
  func_0x0000abfa();
  return 1;
}



/* 3ab8:6615  FUN_3ab8_6615  655 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x00041240) */

undefined2 __cdecl16far FUN_3ab8_6615(int *param_1)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint unaff_SI;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  undefined1 local_84 [8];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [80];
  uint local_24;
  int local_22;
  int local_20;
  undefined4 local_1e;
  uint local_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 local_14;
  int iStack_12;
  int local_10;
  undefined1 *puStack_e;
  undefined1 *local_c;
  
  FUN_21f2_0ebc();
  local_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0x11af;
  FUN_21f2_3454();
  local_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0x11be;
  FUN_21f2_2d26();
  uVar8 = 0x22b2;
  do {
    do {
      local_c = local_84;
      puStack_e = local_74;
      local_10 = 1;
      local_14 = 0x11db;
      iStack_12 = uVar8;
      iVar4 = FUN_1def_0904();
      if (*(int *)0x158 != 0) {
        return 0;
      }
      if (iVar4 == -1) {
        return 0xffff;
      }
      uVar8 = 0x1bb4;
    } while (local_20 == 0);
    FUN_28b3_0cb6();
    func_0x00029d78();
    local_10 = 0x22b2;
    iStack_12 = 0x1214;
    func_0x000299d1();
    local_10 = 0x22b2;
    iStack_12 = 0x121d;
    FUN_28b3_0cb6();
    local_10 = 0x22b2;
    iStack_12 = 0x1222;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0x122c;
    func_0x000299d1();
    local_18 = 0x22b2;
    local_1a = 0x1231;
    lVar12 = FUN_13bf_39a0();
    local_1e = lVar12;
    if (0 < lVar12) {
      local_c = (undefined1 *)0x124d;
      func_0x00012276();
    }
    uVar8 = 0x11f2;
  } while (-1 < local_1e);
  func_0x00007ac6();
  func_0x00007b71();
  local_c = (undefined1 *)0x1;
  puStack_e = (undefined1 *)0x7a6;
  local_10 = 0x1270;
  func_0x00007d9b();
  iVar4 = -(int)local_1e;
  iVar5 = local_1e._2_2_ + (uint)((int)local_1e != 0);
  local_c = (undefined1 *)0x7a6;
  puStack_e = (undefined1 *)0x128b;
  uVar13 = func_0x00000271();
  pbVar1 = (byte *)((int)uVar13 + 0x1e);
  *pbVar1 = *pbVar1 | 2;
  local_c = local_7c;
  puStack_e = local_78;
  local_14 = 0;
  uVar8 = 0x1bb4;
  uStack_16 = 0x12ae;
  iStack_12 = iVar4;
  local_10 = -iVar5;
  func_0x00021a19();
  local_24 = 1;
  local_22 = 0;
  lVar12 = local_1e;
  do {
    local_1e._2_2_ = (int)((ulong)lVar12 >> 0x10);
    local_1e._0_2_ = (int)lVar12;
    if ((*(int *)0x14a < local_22) || ((*(int *)0x14a <= local_22 && (*(uint *)0x148 < local_24))))
    {
      *(undefined2 *)0xbc2 = 1;
      *param_1 = -(int)local_1e;
      param_1[1] = -(local_1e._2_2_ + (uint)((int)local_1e != 0));
      return 0;
    }
    puStack_e = (undefined1 *)0x137c;
    local_c = (undefined1 *)uVar8;
    local_1e = lVar12;
    puVar14 = (undefined2 *)func_0x0000013f();
    puVar6 = (undefined2 *)puVar14;
    puVar7 = &local_18;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar2;
    }
    local_1a = unaff_SI & 0xff;
    uVar8 = 0x11f2;
    local_c = (undefined1 *)0x139c;
    iVar4 = func_0x000125f1();
    uVar10 = 0;
    uVar11 = iVar4 == 0;
    lVar12 = local_1e;
    if (!(bool)uVar11) {
      FUN_28b3_0cb6();
      FUN_28b3_0cb6();
      FUN_28b3_1181();
      if ((bool)uVar10 || (bool)uVar11) {
LAB_3ab8_673e:
        FUN_28b3_0cb6();
        FUN_28b3_0cb6();
        FUN_28b3_1181();
        if (!(bool)uVar10 && !(bool)uVar11) {
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          FUN_28b3_1181();
          if (!(bool)uVar10 && !(bool)uVar11) goto LAB_3ab8_6855;
        }
        FUN_28b3_0cb6();
        FUN_28b3_0cb6();
        FUN_28b3_1181();
        if ((bool)uVar10) {
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          FUN_28b3_1181();
          if ((bool)uVar10) goto LAB_3ab8_6855;
        }
        uVar10 = 0;
        FUN_28b3_0cb6();
        FUN_28b3_0cb6();
        uVar8 = 0x22b2;
        FUN_28b3_1181();
        lVar12 = local_1e;
        if ((bool)uVar10) {
          FUN_28b3_0cb6();
          FUN_28b3_0cb6();
          uVar8 = 0x22b2;
          FUN_28b3_1181();
          lVar12 = local_1e;
          if ((bool)uVar10) goto LAB_3ab8_6855;
        }
      }
      else {
        FUN_28b3_0cb6();
        FUN_28b3_0cb6();
        FUN_28b3_1181();
        if ((bool)uVar10 || (bool)uVar11) goto LAB_3ab8_673e;
LAB_3ab8_6855:
        local_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0x13e0;
        uVar13 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar13 + 0x14);
        *pbVar1 = *pbVar1 | 2;
        local_c = (undefined1 *)0x1;
        puStack_e = (undefined1 *)0x0;
        uVar8 = 0x7a6;
        local_10 = 0x13fa;
        func_0x00007d9b();
        lVar12 = local_1e;
      }
    }
    bVar9 = 0xfffe < local_24;
    local_24 = local_24 + 1;
    local_22 = local_22 + (uint)bVar9;
  } while( true );
}



/* 3ab8:68a4  FUN_3ab8_68a4  93 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_68a4(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar3;
  *param_3 = uVar1;
  param_3[1] = uVar2;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_4[1];
  *param_2 = *param_4;
  param_2[1] = uVar3;
  *param_4 = uVar1;
  param_4[1] = uVar2;
  return;
}



/* 3ab8:6901  FUN_3ab8_6901  1156 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_6901(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint unaff_SI;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint unaff_DI;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 *puVar11;
  undefined1 local_66 [4];
  int local_62;
  int local_60;
  int local_5e;
  undefined2 local_5c;
  undefined2 local_5a [2];
  undefined2 local_56;
  int local_54;
  int local_4e;
  int local_4c;
  int local_4a;
  int local_48;
  int local_46;
  undefined2 local_44;
  undefined2 local_3e;
  int local_3c;
  uint local_3a;
  undefined2 local_38 [12];
  undefined2 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  int local_16;
  int local_14;
  int local_12;
  int local_10;
  undefined2 *local_e;
  int *local_c;
  
  FUN_21f2_0ebc();
  local_c = (int *)0x22b2;
  local_e = (undefined2 *)0x1499;
  puVar11 = (undefined2 *)func_0x00000271();
  puVar4 = (undefined2 *)puVar11;
  puVar5 = local_38;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  local_c = (int *)local_66;
  local_e = local_5a;
  local_10 = param_2;
  local_12 = param_1;
  local_14 = 0;
  uVar6 = 0x1bb4;
  local_16 = 0x14c6;
  func_0x00021a19();
  local_4e = *(int *)0x148;
  local_4c = *(int *)0x14a;
  do {
    if ((local_4c < 0) || ((local_4c < 1 && (local_4e == 0)))) {
      return 0;
    }
    local_e = (undefined2 *)0x1508;
    local_c = (int *)uVar6;
    puVar11 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar11;
    puVar5 = &local_18;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    local_3a = unaff_SI & 0xff;
    uVar6 = 0x11f2;
    local_c = (int *)0x1528;
    iVar3 = func_0x000125f1();
    if (iVar3 != 0) {
      uVar6 = 0x885;
      local_c = (int *)0x153f;
      iVar3 = func_0x00008854();
      if (iVar3 == 0) {
        uVar7 = uVar6;
        if ((unaff_DI & 2) == 0) {
          local_c = &local_4a;
          local_e = &local_3e;
          local_10 = local_4c;
          local_12 = local_4e;
          local_18 = 0x885;
          uVar7 = 0x1bb4;
          uStack_1a = 0x157a;
          local_16 = -param_1;
          local_14 = -(param_2 + (uint)(param_1 != 0));
          iVar3 = FUN_1def_2b59();
          uVar9 = iVar3 == 0;
          uVar10 = iVar3 == 1;
          if (1 < iVar3) {
            FUN_28b3_0cb6();
            FUN_28b3_0e3b();
            FUN_28b3_0ee9();
            FUN_28b3_0cb6();
            FUN_28b3_0e3b();
            FUN_28b3_0ee9();
            FUN_28b3_0cb6();
            FUN_28b3_0e3b();
            FUN_28b3_0ee9();
            FUN_28b3_0cb6();
            FUN_28b3_0e3b();
            func_0x00029b55();
            func_0x00029ae7();
            FUN_28b3_0cb6();
            FUN_28b3_100d();
            func_0x00029ae7();
            FUN_28b3_1181();
            if ((bool)uVar9 || (bool)uVar10) {
              FUN_28b3_0cb6();
              FUN_28b3_0cb6();
              FUN_28b3_1181();
              if ((bool)uVar9) {
                local_c = &local_4a;
                local_e = &local_3e;
                local_10 = 0x22b2;
                local_12 = 0x1784;
                FUN_3ab8_68a4();
                uVar10 = &stack0x0000 == (undefined1 *)0x6;
              }
              uVar9 = (bool)uVar9 && (undefined1 *)0xfff7 < &local_e;
              FUN_28b3_0cb6();
              FUN_28b3_0cb6();
              FUN_28b3_1181();
              if ((bool)uVar9) {
                local_c = &local_62;
                local_e = &local_56;
                local_10 = 0x22b2;
                local_12 = 0x17b2;
                FUN_3ab8_68a4();
                uVar10 = &stack0x0000 == (undefined1 *)0x6;
              }
              uVar9 = (bool)uVar9 && (undefined1 *)0xfff7 < &local_e;
              FUN_28b3_0cb6();
              FUN_28b3_0cb6();
              uVar7 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar9) {
                FUN_28b3_0cb6();
                FUN_28b3_0cb6();
                uVar7 = 0x22b2;
                FUN_28b3_1181();
                if (!(bool)uVar9 && !(bool)uVar10) {
                  FUN_28b3_0cb6();
                  FUN_28b3_0cb6();
                  FUN_28b3_1181();
                  if (!(bool)uVar9) {
                    FUN_28b3_0cb6();
                    FUN_28b3_0cb6();
                    uVar6 = 0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar9 || (bool)uVar10) goto LAB_3ab8_69ad;
                  }
                  FUN_28b3_0cb6();
                  FUN_28b3_0cb6();
                  FUN_28b3_1181();
                  if ((bool)uVar9) {
                    local_56 = local_3e;
                    local_54 = local_3c;
                    FUN_28b3_0cb6();
                    FUN_28b3_0cb6();
                    FUN_28b3_1181();
                    if (!(bool)uVar10) {
                      local_62 = local_4a;
                      local_60 = local_48;
                    }
                  }
                  FUN_28b3_0cb6();
                  FUN_28b3_0cb6();
                  FUN_28b3_1181();
                  if (!(bool)uVar9 && !(bool)uVar10) {
                    local_5e = local_46;
                    local_5c = local_44;
                    FUN_28b3_0cb6();
                    FUN_28b3_0cb6();
                    FUN_28b3_1181();
                  }
LAB_3ab8_6d26:
                  local_18 = local_56;
                  local_16 = local_54;
                  local_14 = local_62;
                  local_12 = local_60;
                  local_10 = local_5e;
                  local_c = (int *)0x22b2;
                  local_e = (undefined2 *)0x18e1;
                  func_0x00018779();
                  puVar4 = &uStack_1c;
                  puVar5 = &local_18;
                  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
                    puVar1 = puVar4;
                    puVar4 = puVar4 + 1;
                    puVar11 = puVar5;
                    puVar5 = puVar5 + 1;
                    *puVar1 = *puVar11;
                  }
                  uVar6 = 0x11f2;
                  uStack_20 = 0x18f7;
                  FUN_17a6_0cba();
                  goto LAB_3ab8_69ad;
                }
              }
            }
            else {
              FUN_28b3_0cb6();
              FUN_28b3_0cb6();
              FUN_28b3_1181();
              if ((bool)uVar9) {
                local_c = &local_4a;
                local_e = &local_3e;
                local_10 = 0x22b2;
                local_12 = 0x1631;
                FUN_3ab8_68a4();
                uVar10 = &stack0x0000 == (undefined1 *)0x6;
              }
              uVar9 = (bool)uVar9 && (undefined1 *)0xfff7 < &local_e;
              FUN_28b3_0cb6();
              FUN_28b3_0cb6();
              FUN_28b3_1181();
              if ((bool)uVar9) {
                local_c = &local_62;
                local_e = &local_56;
                local_10 = 0x22b2;
                local_12 = 0x165f;
                FUN_3ab8_68a4();
                uVar10 = &stack0x0000 == (undefined1 *)0x6;
              }
              uVar9 = (bool)uVar9 && (undefined1 *)0xfff7 < &local_e;
              FUN_28b3_0cb6();
              FUN_28b3_0cb6();
              FUN_28b3_1181();
              if ((bool)uVar9) {
                FUN_28b3_0cb6();
                FUN_28b3_0cb6();
                FUN_28b3_1181();
                if (!(bool)uVar9 && !(bool)uVar10) {
                  FUN_28b3_0cb6();
                  FUN_28b3_0cb6();
                  FUN_28b3_1181();
                  if (!(bool)uVar9) {
                    FUN_28b3_0cb6();
                    FUN_28b3_0cb6();
                    uVar6 = 0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar9 || (bool)uVar10) goto LAB_3ab8_69ad;
                  }
                  FUN_28b3_0cb6();
                  FUN_28b3_0cb6();
                  FUN_28b3_1181();
                  if ((bool)uVar9) {
                    local_62 = local_4a;
                    local_60 = local_48;
                    FUN_28b3_0cb6();
                    FUN_28b3_0cb6();
                    FUN_28b3_1181();
                    if (!(bool)uVar10) {
                      local_56 = local_3e;
                      local_54 = local_3c;
                    }
                  }
                  FUN_28b3_0cb6();
                  FUN_28b3_0cb6();
                  FUN_28b3_1181();
                  if (!(bool)uVar9 && !(bool)uVar10) {
                    FUN_28b3_0cb6();
                    FUN_28b3_0cb6();
                    FUN_28b3_1181();
                    if (!(bool)uVar10) {
                      local_5e = local_46;
                      local_5c = local_44;
                    }
                  }
                  goto LAB_3ab8_6d26;
                }
              }
              uVar7 = 0x22b2;
            }
          }
        }
        uVar6 = 0x11f2;
        local_e = (undefined2 *)0x1555;
        local_c = (int *)uVar7;
        func_0x00018779();
      }
    }
LAB_3ab8_69ad:
    bVar8 = local_4e == 0;
    local_4e = local_4e + -1;
    local_4c = local_4c - (uint)bVar8;
  } while( true );
}



/* 3ab8:6d85  FUN_3ab8_6d85  890 bytes, 1 callers */

void __cdecl16far FUN_3ab8_6d85(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  undefined2 *puVar10;
  undefined2 local_68 [12];
  int local_50;
  int local_4e;
  uint local_4c;
  int local_4a;
  int local_48;
  uint local_46;
  undefined2 local_44 [13];
  undefined2 local_2a;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined2 uStack_22;
  undefined2 auStack_1e [3];
  undefined2 local_18 [5];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  if (*(byte *)0x135 < 0x10) {
    uStack_c = 0x1924;
    func_0x00008095();
    uVar5 = (int)*(uint *)0xb310 >> 0xf;
    if (((int)((*(uint *)0xb310 ^ uVar5) - uVar5) >> 4 ^ uVar5) - uVar5 == (uint)*(byte *)0x135) {
      local_48 = 0;
      local_50 = 0;
    }
    else {
      local_48 = 1;
      local_50 = 0;
      if ((*(char *)(*(byte *)0x135 + 0xb6c) != '\0') || (*(char *)(*(byte *)0x135 + 0xb7c) != '\0')
         ) {
        bVar3 = *(byte *)0x135;
        *(undefined1 *)(bVar3 + 0xb6c) = 0;
        *(undefined1 *)(bVar3 + 0xb7c) = 0;
        local_50 = 1;
      }
    }
    local_46 = (uint)*(byte *)(*(byte *)0x135 + 0xb8e);
    uStack_c = 0x1992;
    func_0x0000daa6();
    local_4a = 0;
    uStack_c = 0x885;
    for (local_4c = 1;
        (local_4a <= *(int *)0x14a && ((local_4a < *(int *)0x14a || (local_4c <= *(uint *)0x148))));
        local_4c = local_4c + 1) {
      uVar8 = 0;
      uStack_e = 0x19c8;
      uVar9 = func_0x0000013f();
      if ((*(byte *)((int)uVar9 + 0x14) & 2) != 0) {
        uStack_c = 0;
        uStack_e = 0x19e0;
        puVar10 = (undefined2 *)func_0x0000013f();
        puVar6 = (undefined2 *)puVar10;
        puVar7 = local_18;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        uStack_c = 0;
        uStack_e = 0x19fd;
        uVar9 = func_0x0000013f();
        *(undefined1 *)((int)uVar9 + 0x12) = (undefined1)local_46;
        if (*(char *)(local_46 + 0xc292) != '\0') {
          uStack_c = 0;
          uStack_e = 0x1a1f;
          uVar9 = func_0x0000013f();
          *(undefined1 *)((int)uVar9 + 0x10) = *(undefined1 *)(local_46 + 0xc292);
        }
        if (*(char *)(local_46 + 0xb66a) != '\0') {
          uStack_c = 0;
          uStack_e = 0x1a4a;
          uVar9 = func_0x0000013f();
          *(undefined1 *)((int)uVar9 + 0x11) = *(undefined1 *)(local_46 + 0xb66a);
        }
        uVar8 = 0;
        if (local_48 != 0) {
          puVar6 = auStack_1e;
          puVar7 = local_18;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar1 = *puVar10;
          }
          uVar8 = 0x11f2;
          uStack_22 = 0x1a88;
          FUN_17a6_0936();
        }
      }
      local_4a = local_4a + (uint)(0xfffe < local_4c);
      uStack_c = uVar8;
    }
    local_4a = 0;
    for (local_4c = 1;
        (local_4a <= *(int *)0x14e && ((local_4a < *(int *)0x14e || (local_4c <= *(uint *)0x14c))));
        local_4c = local_4c + 1) {
      uVar8 = 0;
      uStack_e = 0x1ac3;
      uVar9 = func_0x00000271();
      if ((*(byte *)((int)uVar9 + 0x1e) & 2) != 0) {
        uStack_c = 0;
        uStack_e = 0x1adb;
        puVar10 = (undefined2 *)func_0x00000271();
        puVar6 = (undefined2 *)puVar10;
        puVar7 = local_44;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        uStack_c = 0;
        uStack_e = 0x1af8;
        uVar9 = func_0x00000271();
        *(undefined1 *)((int)uVar9 + 0x1c) = (undefined1)local_46;
        if (*(char *)(local_46 + 0xc292) != '\0') {
          uStack_c = 0;
          uStack_e = 0x1b1a;
          uVar9 = func_0x00000271();
          *(undefined1 *)((int)uVar9 + 0x1a) = *(undefined1 *)(local_46 + 0xc292);
        }
        if (*(char *)(local_46 + 0xb66a) != '\0') {
          uStack_c = 0;
          uStack_e = 0x1b45;
          uVar9 = func_0x00000271();
          *(undefined1 *)((int)uVar9 + 0x1b) = *(undefined1 *)(local_46 + 0xb66a);
        }
        uVar8 = 0;
        if (local_48 != 0) {
          local_2a = 1;
          puVar6 = &uStack_26;
          puVar7 = local_44;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar1 = *puVar10;
          }
          uVar8 = 0x11f2;
          local_2a = 0x1b80;
          FUN_13bf_0256();
        }
      }
      local_4a = local_4a + (uint)(0xfffe < local_4c);
      uStack_c = uVar8;
    }
    for (local_4e = 1; local_4e <= *(int *)0x152; local_4e = local_4e + 1) {
      uStack_c = 0x1b95;
      uVar9 = func_0x000003ef();
      if ((*(byte *)((int)uVar9 + 10) & 2) != 0) {
        uStack_c = 0x1ba9;
        puVar10 = (undefined2 *)func_0x000003ef();
        puVar6 = (undefined2 *)puVar10;
        puVar7 = &local_24;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        uStack_c = 0x1bc2;
        uVar9 = func_0x000003ef();
        *(undefined1 *)((int)uVar9 + 8) = (undefined1)local_46;
        if (local_48 != 0) {
          uStack_c = 0;
          uStack_e = 0x1bdf;
          FUN_1def_1295();
        }
      }
    }
    for (local_4e = 1; local_4e <= *(int *)0x150; local_4e = local_4e + 1) {
      uStack_c = 0x1bfb;
      uVar9 = func_0x00000398();
      if ((*(byte *)((int)uVar9 + 0x16) & 2) != 0) {
        uStack_c = 0x1c0f;
        puVar10 = (undefined2 *)func_0x00000398();
        puVar6 = (undefined2 *)puVar10;
        puVar7 = local_68;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        uStack_c = 0x1c28;
        uVar9 = func_0x00000398();
        *(undefined1 *)((int)uVar9 + 0x15) = (undefined1)local_46;
        if (local_48 != 0) {
          puVar6 = auStack_1e;
          puVar7 = local_68;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar1 = *puVar10;
          }
          uStack_22 = 0;
          local_24 = 0x1c51;
          func_0x00019593();
        }
      }
    }
    if (local_50 != 0) {
      uStack_c = 0x1c6d;
      func_0x0001470b();
    }
    *(undefined1 *)0xd14 = 2;
    *(undefined2 *)0xbc0 = 1;
  }
  return;
}



/* 3ab8:70ff  FUN_3ab8_70ff  190 bytes, 1 callers */

void __cdecl16far FUN_3ab8_70ff(void)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar6;
  int local_90;
  undefined1 local_8e [100];
  undefined1 auStack_2a [12];
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  uint uStack_1a;
  undefined1 *puStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined2 uStack_6;
  
  uStack_6 = 0x1c8a;
  FUN_21f2_0ebc();
  if (*(byte *)0x135 < 0x10) {
    uStack_6 = 0x22b2;
    puStack_8 = (undefined1 *)0x1c9a;
    func_0x0000c3ca();
    local_90 = 0;
    do {
      *(undefined1 *)((int)&uStack_16 + local_90) = *(undefined1 *)(local_90 + 0xb6c);
      auStack_2a[local_90] = *(undefined1 *)(local_90 + 0xb7c);
      *(undefined1 *)(local_90 + 0xb6c) = 0;
      *(undefined1 *)(local_90 + 0xb7c) = 0;
      local_90 = local_90 + 1;
    } while (local_90 < 0x10);
    bVar1 = *(byte *)0x135;
    *(undefined1 *)(bVar1 + 0xb6c) = 1;
    *(undefined1 *)(bVar1 + 0xb7c) = 1;
    uStack_6 = 0;
    puStack_8 = (undefined1 *)0x885;
    uStack_a = 0x1ce1;
    func_0x0001470b();
    uStack_6 = 0x922;
    puStack_8 = local_8e;
    uStack_a = 0x11f2;
    uStack_c = 0x1cf0;
    FUN_21f2_3454();
    uStack_6 = 0x804;
    puStack_8 = local_8e;
    uStack_a = 0x22b2;
    uStack_c = 0x1d00;
    FUN_21f2_2d26();
    *(undefined2 *)0xb6a = 0xffff;
    uStack_6 = *(undefined2 *)0xa47e;
    puStack_8 = (undefined1 *)*(undefined2 *)0xa47c;
    uStack_a = *(undefined2 *)0xa47a;
    uStack_c = *(undefined2 *)0xa478;
    uStack_e = *(undefined2 *)0xa47e;
    uStack_10 = *(undefined2 *)0xa47c;
    uStack_12 = *(undefined2 *)0xa47a;
    uStack_14 = *(undefined2 *)0xa478;
    uStack_16 = 0;
    puStack_18 = local_8e;
    uStack_1a = 0;
    uStack_1c = 1;
    uStack_1e = 0;
    pcVar2 = (code *)swi(0x3f);
    iVar4 = (*pcVar2)();
    *(undefined2 *)0xb6a = 0;
    if ((iVar4 != -1) && (*(int *)0x158 == 0)) {
      uVar5 = 0x885;
      uStack_6 = 0x1d65;
      func_0x0000daa6();
      puStack_18 = (undefined1 *)0x0;
      for (uStack_1a = 1;
          ((int)puStack_18 <= *(int *)0x14a &&
          (((int)puStack_18 < *(int *)0x14a || (uStack_1a <= *(uint *)0x148))));
          uStack_1a = uStack_1a + 1) {
        puStack_8 = (undefined1 *)0x1d95;
        uStack_6 = uVar5;
        uVar6 = func_0x0000013f();
        uVar3 = uStack_1a;
        if ((*(byte *)((int)uVar6 + 0x14) & 2) != 0) {
          uStack_6 = 0;
          puStack_8 = (undefined1 *)0x1dad;
          uVar6 = func_0x0000013f();
          *(undefined1 *)((int)uVar6 + 0x12) = (char)uVar3;
        }
        uVar5 = 0;
        puStack_18 = (undefined1 *)((int)puStack_18 + (uint)(0xfffe < uStack_1a));
      }
      puStack_18 = (undefined1 *)0x0;
      for (uStack_1a = 1;
          ((int)puStack_18 <= *(int *)0x14e &&
          (((int)puStack_18 < *(int *)0x14e || (uStack_1a <= *(uint *)0x14c))));
          uStack_1a = uStack_1a + 1) {
        puStack_8 = (undefined1 *)0x1deb;
        uStack_6 = uVar5;
        uVar6 = func_0x00000271();
        uVar3 = uStack_1a;
        if ((*(byte *)((int)uVar6 + 0x1e) & 2) != 0) {
          uStack_6 = 0;
          puStack_8 = (undefined1 *)0x1e03;
          uVar6 = func_0x00000271();
          *(undefined1 *)((int)uVar6 + 0x1c) = (char)uVar3;
        }
        uVar5 = 0;
        puStack_18 = puStack_18 + (0xfffe < uStack_1a);
      }
      for (local_90 = 1; local_90 <= *(int *)0x152; local_90 = local_90 + 1) {
        uStack_6 = 0x1e20;
        uVar6 = func_0x000003ef();
        if ((*(byte *)((int)uVar6 + 10) & 2) != 0) {
          uStack_6 = 0x1e35;
          uVar6 = func_0x000003ef();
          *(undefined1 *)((int)uVar6 + 8) = 0;
        }
      }
      for (local_90 = 1; local_90 <= *(int *)0x150; local_90 = local_90 + 1) {
        uStack_6 = 0x1e60;
        uVar6 = func_0x00000398();
        if ((*(byte *)((int)uVar6 + 0x16) & 2) != 0) {
          uStack_6 = 0x1e75;
          uVar6 = func_0x00000398();
          *(undefined1 *)((int)uVar6 + 0x15) = 0;
        }
      }
    }
    local_90 = 0;
    do {
      *(undefined1 *)(local_90 + 0xb6c) = *(undefined1 *)((int)&uStack_16 + local_90);
      *(undefined1 *)(local_90 + 0xb7c) = auStack_2a[local_90];
      local_90 = local_90 + 1;
    } while (local_90 < 0x10);
    FUN_1885_2ec3();
    uStack_6 = 0x1ebe;
    func_0x00008095();
    *(undefined2 *)0xbc2 = 0;
    func_0x0000abfa();
    uStack_6 = 0x1ed2;
    func_0x0000b1d8();
    func_0x0000b6ea();
    uStack_6 = 0x1ee0;
    func_0x0001470b();
    *(undefined1 *)0xd14 = 2;
    *(undefined2 *)0xbc0 = 1;
  }
  return;
}



/* 3ab8:7371  FUN_3ab8_7371  158 bytes, 1 callers */

void __cdecl16far FUN_3ab8_7371(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar6;
  undefined2 local_18 [5];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  uStack_c = 0x22b2;
  uStack_e = 0x1f09;
  puVar6 = (undefined2 *)func_0x0000013f();
  puVar4 = (undefined2 *)puVar6;
  puVar5 = local_18;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_c = 0;
  uStack_e = 0x1f76;
  puVar6 = (undefined2 *)func_0x0000013f();
  puVar4 = (undefined2 *)puVar6;
  puVar5 = local_18;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 3ab8:740f  FUN_3ab8_740f  4469 bytes, 0 callers */

void __cdecl16far FUN_3ab8_740f(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  uint *puVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar17;
  undefined1 uVar18;
  undefined2 *puVar19;
  uint *puVar20;
  undefined4 uVar21;
  uint local_2be [128];
  uint *local_1be;
  int local_1bc;
  undefined2 *local_1ba;
  uint local_1b6;
  int local_1b4;
  int local_1b2;
  uint local_1b0;
  int local_1ae;
  uint local_188;
  int local_186;
  int local_178;
  uint local_176 [2];
  int local_172;
  int local_134;
  int local_132;
  int local_130;
  int local_12e;
  int local_12c;
  uint local_12a;
  int local_128;
  int local_126;
  undefined2 local_124;
  uint local_11e [60];
  int local_a6;
  int local_a4;
  uint *local_a2;
  int local_a0;
  undefined2 local_9a;
  uint local_98;
  int local_96;
  uint local_8e;
  undefined2 local_8c;
  undefined2 local_88;
  undefined2 local_86;
  int iStack_84;
  undefined2 local_82 [11];
  int local_6c;
  uint local_6a;
  int local_68;
  uint *local_64;
  int local_62;
  uint local_60 [10];
  byte local_4b;
  uint local_44;
  undefined2 local_42;
  undefined2 local_40;
  uint local_3e;
  uint local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  uint local_36;
  undefined2 local_34;
  uint uStack_32;
  byte local_2f;
  uint local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  uint local_26;
  undefined2 local_24;
  uint local_20;
  uint uStack_1c;
  undefined2 uStack_1a;
  uint local_18;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  uint *puStack_e;
  uint *puStack_c;
  
  FUN_21f2_0ebc();
  local_124 = 1;
  local_a4 = 0;
  local_6c = 0;
  puStack_c = (uint *)0x22b2;
  uVar15 = 0x22b2;
  puStack_e = (uint *)0x1fb8;
  FUN_21f2_3454();
  if (param_1 == 1) {
    local_178 = 1;
    local_12a = 0;
    local_6a = 0;
    goto LAB_3ab8_7452;
  }
LAB_3ab8_75b8:
  while( true ) {
    while( true ) {
      puStack_e = (uint *)0x2146;
      puStack_c = (uint *)uVar15;
      FUN_21f2_3454();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x2156;
      FUN_21f2_3454();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x2167;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x2177;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x2187;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x2197;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x21a7;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x21b7;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x21c7;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x21d8;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x21e8;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x21f8;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x2208;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x2219;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x2229;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x2239;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x2249;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      uVar15 = 0x1bb4;
      puStack_e = (uint *)0x2259;
      FUN_1def_07a4();
      if (*(char *)0x132 == '\0') {
        *(char *)0x135 = *(byte *)0x135 % 100 - 0x38;
      }
      else if (*(byte *)0x135 < 0x10) {
        puStack_c = (uint *)0x1bb4;
        puStack_e = (uint *)0x227a;
        FUN_21f2_2d26();
        puStack_c = (uint *)0x22b2;
        puStack_e = (uint *)0x228a;
        FUN_21f2_2d26();
        puStack_c = (uint *)0x22b2;
        puStack_e = (uint *)0x229a;
        FUN_21f2_2d26();
        puStack_c = (uint *)0x22b2;
        uVar15 = 0x22b2;
        puStack_e = (uint *)0x22aa;
        FUN_21f2_2d26();
        uVar9 = (int)*(uint *)0xb310 >> 0xf;
        if (((int)((*(uint *)0xb310 ^ uVar9) - uVar9) >> 4 ^ uVar9) - uVar9 == (uint)*(byte *)0x135)
        {
          *(undefined2 *)0xc22 = 1;
          puStack_c = (uint *)0x2;
          puStack_e = (uint *)0x44;
          uStack_10 = 0x916;
          uStack_12 = 0x22b2;
          uVar15 = 0xdef;
          uStack_14 = 0x22e6;
          FUN_1000_02b5();
        }
      }
      uVar16 = uVar15;
      if (*(char *)0x124 != '\0') {
        uVar16 = 0x22b2;
        puStack_e = (uint *)0x2084;
        puStack_c = (uint *)uVar15;
        FUN_21f2_2d26();
      }
      if (*(char *)0x12a != '\0') {
        uVar16 = 0x885;
        puStack_c = (uint *)0x2095;
        func_0x0000daa6();
        *(uint *)0xc3be = *(uint *)0xc3be ^ (byte)(*(char *)0xc3be << 2 ^ *(byte *)0xc3be) & 0x10;
        *(byte *)0xc3be = *(byte *)0xc3be | 4;
      }
      *(undefined2 *)0xc1a = 1;
      if (*(int *)0xce6 != 0) {
        *(undefined2 *)0xc1a = 0;
      }
      puStack_c = local_176;
      puStack_e = local_11e;
      uStack_10 = 10000;
      uVar15 = 0x1bb4;
      uStack_14 = 0x20dd;
      uStack_12 = uVar16;
      local_178 = FUN_1def_0904();
      *(undefined2 *)0xc1a = 0;
      if (*(char *)0x12a != '\0') {
        uVar15 = 0x885;
        puStack_c = (uint *)0x20f9;
        func_0x0000daa6();
        *(uint *)0xc3be =
             *(uint *)0xc3be ^ (byte)((byte)(*(uint *)0xc3be >> 2) ^ *(byte *)0xc3be) & 4;
      }
      if ((((local_178 < 1) || (3 < local_178)) || (*(char *)0x15b != '\x02')) ||
         (*(char *)0x124 == '\0')) break;
      pcVar7 = (code *)swi(0x3f);
      (*pcVar7)();
    }
    if (*(int *)0x158 != 0) {
      return;
    }
    if (*(int *)0xc18 == 0) break;
    local_6c = 0;
    FUN_28b3_0cb6();
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0x231a;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0x2323;
    FUN_28b3_0cb6();
    uStack_10 = 0x22b2;
    uStack_12 = 9000;
    func_0x00029d78();
    local_18 = 0x22b2;
    uStack_1a = 0x2332;
    func_0x000299d1();
    local_18 = 0x22b2;
    uVar15 = 0x3bf;
    uStack_1a = 0x2337;
    func_0x0000507a();
  }
  if ((local_178 == 1) || (local_178 == 2)) {
    local_12a = 2;
    local_6a = 0;
  }
  else {
    local_12a = 0;
    if (((local_178 != 3) && (local_178 != 4)) && ((local_178 != 5 || (0xf < *(byte *)0x135)))) {
      if (local_96 == 0) goto LAB_3ab8_75b8;
      local_178 = 1;
      local_6a = 2;
    }
  }
  local_18 = local_178 - 1;
  local_124 = 1;
  while ((local_178 != 4 || (0xf < *(byte *)0x135))) {
    if (((local_178 == 4) && (0xf < *(byte *)0x135)) ||
       ((local_178 == 5 && (*(byte *)0x135 < 0x10)))) {
      if (*(int *)0xbc2 != 0) {
        uVar15 = 0x7a6;
        puStack_c = (uint *)0x23e7;
        func_0x00008095();
      }
      puStack_c = (uint *)0x23f0;
      iVar8 = FUN_3ab8_6615();
      if (iVar8 != 0) goto LAB_3ab8_75b8;
      if (*(int *)0x158 != 0) {
        return;
      }
    }
    else {
      local_6c = 0;
      local_a4 = 0;
      uVar15 = 0x885;
      func_0x0000c3ca();
      if ((local_178 == 1) || (local_178 == 2)) {
        FUN_28b3_0cb6();
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uStack_12 = 0x2438;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0x2441;
        FUN_28b3_0cb6();
        uStack_10 = 0x22b2;
        uStack_12 = 0x2446;
        func_0x00029d78();
        local_18 = 0x22b2;
        uVar15 = 0x22b2;
        uStack_1a = 0x2450;
        func_0x000299d1();
        local_18 = local_6a;
        uStack_1a = 0x6065;
        uStack_1c = local_6a;
        local_20 = local_12a;
        pcVar7 = (code *)swi(0x3f);
        iVar8 = (*pcVar7)();
      }
      else {
        puStack_c = (uint *)*(int *)0xa47a;
        puStack_e = (uint *)*(int *)0xa478;
        uStack_10 = *(undefined2 *)0xa47e;
        uStack_12 = *(undefined2 *)0xa47c;
        uStack_14 = *(undefined2 *)0xa47a;
        local_16 = *(undefined2 *)0xa478;
        local_18 = 0;
        uStack_1a = 0x606b;
        uStack_1c = 0;
        local_20 = 0;
        pcVar7 = (code *)swi(0x3f);
        iVar8 = (*pcVar7)();
      }
      if (iVar8 == -1) goto LAB_3ab8_75b8;
    }
    if (*(int *)0x158 != 0) {
      return;
    }
    local_132 = 0;
LAB_3ab8_793b:
    local_a4 = 0;
    func_0x0000c3ca();
    puStack_c = (uint *)0x885;
    puStack_e = (uint *)0x24d4;
    FUN_21f2_3454();
    puStack_c = (uint *)0x22b2;
    uVar16 = 0x22b2;
    puStack_e = (uint *)0x24e4;
    FUN_21f2_2d26();
    if (local_132 != 0) {
      *(undefined2 *)0xc22 = 1;
      puStack_c = (uint *)0x2;
      puStack_e = (uint *)0x18;
      uStack_10 = 0x6074;
      uStack_12 = 0x22b2;
      uVar16 = 0xdef;
      uStack_14 = 0x250c;
      FUN_1000_02b5();
    }
    if (0xf < *(byte *)0x135 % 100) {
      *(undefined1 *)0x135 = 0xd7;
    }
    if (*(char *)0x132 == '\0') {
      *(char *)0x135 = *(byte *)0x135 % 100 - 0x38;
    }
    if (((*(char *)0x132 != '\0') && (local_12a == 0)) && (local_178 < 4)) {
      puStack_e = (uint *)0x255f;
      puStack_c = (uint *)uVar16;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      puStack_e = (uint *)0x256f;
      FUN_21f2_2d26();
      puStack_c = (uint *)0x22b2;
      uVar16 = 0x22b2;
      puStack_e = (uint *)0x257f;
      FUN_21f2_2d26();
      if ((*(byte *)0x135 < 0x10) || ((99 < *(byte *)0x135 && (*(byte *)0x135 < 0x74)))) {
        puStack_c = (uint *)0x6087;
        puStack_e = &local_1b0;
        uStack_10 = 0x22b2;
        uStack_12 = 0x25b9;
        FUN_21f2_3454();
        puStack_c = (uint *)0x22b2;
        uVar15 = 0x22b2;
        puStack_e = (uint *)0x25cb;
        FUN_21f2_2d26();
        if (*(byte *)0x135 < 0x10) {
          for (local_130 = (uint)*(byte *)0x135 << 4; local_130 < (int)((*(byte *)0x135 + 1) * 0x10)
              ; local_130 = local_130 + 1) {
            uVar15 = 0x885;
            puStack_c = (uint *)0x2600;
            iVar8 = func_0x00008854();
            if (iVar8 != 0) {
              *(char *)0x135 = *(char *)0x135 + 'd';
              break;
            }
          }
        }
        *(undefined2 *)0xc22 = 1;
        uStack_12 = uVar15;
        if (*(byte *)0x135 < 0x10) {
          puStack_c = (uint *)0x2;
          puStack_e = (uint *)0x30;
          uStack_10 = 0x6099;
          uStack_14 = 0x2630;
          FUN_1000_02b5();
          local_a4 = 1;
        }
        else {
          puStack_c = (uint *)0x2;
          puStack_e = (uint *)0x30;
          uStack_10 = 0x609e;
          uStack_14 = 0x2654;
          FUN_1000_02b5();
        }
        uVar16 = 0xdef;
        uVar9 = (int)*(uint *)0xb310 >> 0xf;
        if (((int)((*(uint *)0xb310 ^ uVar9) - uVar9) >> 4 ^ uVar9) - uVar9 == (uint)*(byte *)0x135)
        {
          puStack_c = (uint *)0x2;
          puStack_e = (uint *)0x3c;
          uStack_10 = 0x916;
          uStack_12 = 0xdef;
          uVar16 = 0xdef;
          uStack_14 = 0x2688;
          FUN_1000_02b5();
        }
      }
    }
    puStack_c = local_176;
    puStack_e = local_11e;
    uStack_10 = 1;
    uVar15 = 0x1bb4;
    uStack_14 = 0x26a8;
    uStack_12 = uVar16;
    local_134 = FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_134 != -1) {
      if ((local_134 == 1) || (local_134 == 2)) {
LAB_3ab8_7b57:
        if (local_134 != 2) goto LAB_3ab8_7452;
        uVar15 = 0x7a6;
        puStack_c = (uint *)0x26e9;
        func_0x00008095();
        goto LAB_3ab8_75b8;
      }
      if (local_96 == 2) {
        local_134 = 2;
        goto LAB_3ab8_7b57;
      }
      if (local_96 == 1) {
        if (local_132 != 0) {
          local_134 = 1;
          goto LAB_3ab8_7b57;
        }
        local_132 = 1;
      }
      if (local_134 == 3) {
        if (*(byte *)0x135 < 0x10) {
          *(char *)0x135 = *(char *)0x135 + 'd';
        }
        else {
          if ((*(byte *)0x135 < 100) || (0x73 < *(byte *)0x135)) {
            bVar2 = *(byte *)0x135;
            *(byte *)0x135 = bVar2 % 100;
            if (0xf < bVar2 % 100) {
              *(undefined1 *)0x135 = 0xf;
            }
            *(undefined1 *)0xd14 = 2;
            goto LAB_3ab8_7bdd;
          }
          *(char *)0x135 = *(char *)0x135 + -100;
        }
      }
      else {
LAB_3ab8_7bdd:
        do {
          if (local_134 != 4) goto LAB_3ab8_793b;
          local_1b2 = -1;
          local_1b0 = local_1b0 & 0xff00;
          func_0x0001bb4e();
          puStack_c = (uint *)0x1bb4;
          puStack_e = (uint *)0x2784;
          func_0x00012276();
          puStack_c = (uint *)0x11f2;
          puStack_e = (uint *)0x2793;
          FUN_1000_0599();
          puStack_c = (uint *)0xdef;
          puStack_e = (uint *)0x27a2;
          func_0x00012276();
          puStack_c = (uint *)0x27ac;
          func_0x0000daa6();
          puStack_c = (uint *)0x885;
          puStack_e = (uint *)0x27ba;
          FUN_1000_0599();
          FUN_1000_060e();
          puStack_c = (uint *)0x1e;
          puStack_e = &local_1b0;
          uStack_10 = 0xdef;
          uStack_12 = 0x27d7;
          local_188 = FUN_12c1_03d3();
          func_0x00002cc6();
          FUN_1000_0620();
          if (local_188 == 0xffff) goto LAB_3ab8_793b;
          if (*(int *)0x158 != 0) {
            return;
          }
          *(undefined1 *)0xd14 = 2;
          puStack_c = &local_1b0;
          puStack_e = (uint *)0xdef;
          uStack_10 = 0x2814;
          func_0x000253ce();
          if ((-1 < local_1b2) && (local_1b2 < 0x10)) {
            *(undefined1 *)0x135 = (undefined1)local_1b2;
            goto LAB_3ab8_793b;
          }
        } while (((char)local_1b0 != 'z') && ((char)local_1b0 != 'Z'));
        *(char *)0x135 = *(byte *)0x135 % 100 - 0x38;
      }
      goto LAB_3ab8_793b;
    }
    local_96 = 0;
    local_124 = 0xd8f1;
  }
  FUN_3ab8_70ff();
  if (*(int *)0x158 != 0) {
    return;
  }
  goto LAB_3ab8_75b8;
LAB_3ab8_7452:
  uVar15 = 0x885;
  func_0x0000c3ca();
  if ((((*(char *)0x7e != '\0') && (*(char *)0xd14 != '\x04')) && (param_1 != 1)) &&
     (1 < *(byte *)0x84)) {
    puStack_c = local_11e;
    puStack_e = (uint *)0x885;
    uVar15 = 0x11f2;
    uStack_10 = 0x2004;
    func_0x0001263c();
    puStack_c = local_11e;
    puStack_e = (uint *)0x1;
    pcVar7 = (code *)swi(0x3f);
    (*pcVar7)();
    *(undefined1 *)0xd14 = 2;
  }
  if (((local_178 == 4) && (0xf < *(byte *)0x135)) || ((local_178 == 5 && (*(byte *)0x135 < 0x10))))
  {
    puStack_e = (uint *)0x2051;
    puStack_c = (uint *)uVar15;
    FUN_3ab8_6901();
    puStack_c = (uint *)0x205b;
    func_0x00008095();
  }
  else {
    if (local_a4 == 0) {
      uVar15 = 0x885;
      puStack_c = (uint *)0x2873;
      func_0x0000daa6();
      local_64 = (uint *)*(undefined2 *)0x148;
      local_62 = *(int *)0x14a;
      local_a0 = 0;
      for (local_a2 = (uint *)0x1;
          (local_a0 <= local_62 && ((local_a0 < local_62 || (local_a2 <= local_64))));
          local_a2 = (uint *)((int)local_a2 + 1)) {
        uVar16 = uVar15;
        if (local_12a == 2) {
          uVar16 = 0;
          puStack_e = (uint *)0x2991;
          puStack_c = (uint *)uVar15;
          uVar21 = func_0x0000013f();
          if ((*(byte *)((int)uVar21 + 0x14) & 2) == 0) goto LAB_3ab8_7dbc;
          puStack_c = (uint *)0x0;
          puStack_e = (uint *)0x29ab;
          func_0x0000013f();
          puStack_c = (uint *)0x29bd;
          iVar8 = func_0x00008854();
          if (iVar8 == 0) {
            puStack_c = (uint *)0x885;
            puStack_e = (uint *)0x289d;
            uVar21 = func_0x0000013f();
            if ((*(byte *)((int)uVar21 + 0x14) & 0x40) == 0) {
              puStack_c = (uint *)0x0;
              uVar16 = 0;
              puStack_e = (uint *)0x28b7;
              uVar21 = func_0x0000013f();
              if ((*(byte *)((int)uVar21 + 0x14) & 0x80) == 0) goto LAB_3ab8_7dbc;
            }
            puStack_c = (uint *)local_a0;
            puStack_e = local_a2;
            uStack_10 = 0;
            uVar16 = 0x7a6;
            uStack_12 = 0x28db;
            func_0x00007be8();
            local_1b4 = local_1ae;
            for (local_1b6 = local_1b0;
                (local_1b4 <= local_186 && ((local_1b4 < local_186 || (local_1b6 <= local_188))));
                local_1b6 = local_1b6 + 1) {
              puStack_e = (uint *)0x2917;
              puStack_c = (uint *)uVar16;
              uVar21 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar21 + 0x14);
              *pbVar1 = *pbVar1 & 0xbf;
              puStack_c = (uint *)0x0;
              uVar16 = 0;
              puStack_e = (uint *)0x292f;
              uVar21 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar21 + 0x14);
              *pbVar1 = *pbVar1 & 0x7f;
              local_1b4 = local_1b4 + (uint)(0xfffe < local_1b6);
            }
            goto LAB_3ab8_7dbc;
          }
LAB_3ab8_7e45:
          puStack_c = (uint *)0x885;
          uVar15 = 0;
          puStack_e = (uint *)0x29d2;
          uVar21 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar21 + 0x14);
          *pbVar1 = *pbVar1 & 0xfd;
        }
        else {
LAB_3ab8_7dbc:
          uVar15 = 0;
          puStack_e = (uint *)0x2949;
          puStack_c = (uint *)uVar16;
          uVar21 = func_0x0000013f();
          if ((*(byte *)((int)uVar21 + 0x15) & 1) == 0) {
            puStack_c = (uint *)0x0;
            uVar15 = 0;
            puStack_e = (uint *)0x29ed;
            uVar21 = func_0x0000013f();
            if ((*(byte *)((int)uVar21 + 0x14) & 2) != 0) {
              puStack_c = (uint *)0x0;
              puStack_e = (uint *)0x2a0a;
              func_0x0000013f();
              puStack_c = (uint *)0x2a1c;
              iVar8 = func_0x00008854();
              if (iVar8 != 0) goto LAB_3ab8_7e45;
              local_6c = 1;
              puStack_c = (uint *)0x885;
              puStack_e = (uint *)0x2a33;
              puVar20 = (uint *)func_0x0000013f();
              puVar13 = (uint *)puVar20;
              puVar12 = &local_44;
              for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar6 = puVar12;
                puVar12 = puVar12 + 1;
                puVar4 = puVar13;
                puVar13 = puVar13 + 1;
                *puVar6 = *puVar4;
              }
              local_34 = 1;
              puVar13 = (uint *)&stack0xffe2;
              puVar12 = &local_44;
              for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar4 = puVar13;
                puVar13 = puVar13 + 1;
                puVar20 = puVar12;
                puVar12 = puVar12 + 1;
                *puVar4 = *puVar20;
              }
              local_20 = 0;
              uVar15 = 0x11f2;
              FUN_17a6_0936();
            }
          }
        }
        local_a0 = local_a0 + (uint)((uint *)0xfffe < local_a2);
      }
      if (local_6c != 0) {
        local_1bc = 0;
        local_1be = (uint *)0x0;
        local_a0 = 0;
        for (local_a2 = (uint *)0x1;
            (local_a0 <= local_62 && ((local_a0 < local_62 || (local_a2 <= local_64))));
            local_a2 = (uint *)((int)local_a2 + 1)) {
          puStack_e = (uint *)0x2ab8;
          puStack_c = (uint *)uVar15;
          uVar21 = func_0x0000013f();
          if ((*(byte *)((int)uVar21 + 0x14) & 2) == 0) {
LAB_3ab8_7f5f:
            bVar17 = (uint *)0xfffe < local_1be;
            local_1be = (uint *)((int)local_1be + 1);
            local_1bc = local_1bc + (uint)bVar17;
            if ((local_a2 != local_1be) || (local_a0 != local_1bc)) {
              puStack_c = (uint *)0x0;
              puStack_e = (uint *)0x2b0a;
              puVar19 = (undefined2 *)func_0x0000013f();
              puVar10 = (undefined2 *)puVar19;
              puVar11 = local_82;
              for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar5 = puVar11;
                puVar11 = puVar11 + 1;
                puVar3 = puVar10;
                puVar10 = puVar10 + 1;
                *puVar5 = *puVar3;
              }
              puStack_c = (uint *)0x0;
              puStack_e = (uint *)0x2b29;
              local_1ba = (undefined2 *)func_0x0000013f();
              puVar10 = (undefined2 *)local_1ba;
              puVar11 = local_82;
              for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar3 = puVar10;
                puVar10 = puVar10 + 1;
                puVar19 = puVar11;
                puVar11 = puVar11 + 1;
                *puVar3 = *puVar19;
              }
            }
          }
          else {
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0x2ad2;
            uVar21 = func_0x0000013f();
            if ((*(byte *)((int)uVar21 + 0x15) & 1) != 0) goto LAB_3ab8_7f5f;
          }
          uVar15 = 0;
          local_a0 = local_a0 + (uint)((uint *)0xfffe < local_a2);
        }
        *(int *)0x148 = (int)local_1be;
        *(int *)0x14a = local_1bc;
      }
      if (local_12a == 2) {
        local_a0 = *(int *)0x14a;
        for (local_a2 = (uint *)*(int *)0x148;
            (-1 < local_a0 && ((0 < local_a0 || (local_a2 != (uint *)0x0))));
            local_a2 = (uint *)((int)local_a2 + -1)) {
          uVar16 = 0;
          puStack_e = (uint *)0x2b8d;
          puStack_c = (uint *)uVar15;
          uVar21 = func_0x0000013f();
          if ((*(byte *)((int)uVar21 + 0x14) & 2) != 0) {
            puStack_c = (uint *)0x0;
            uVar16 = 0;
            puStack_e = (uint *)0x2ba7;
            uVar21 = func_0x0000013f();
            if ((*(byte *)((int)uVar21 + 0x15) & 1) != 0) {
              puStack_c = (uint *)0x0;
              puStack_e = (uint *)0x2bcd;
              func_0x0000013f();
              uVar16 = 0x885;
              puStack_c = (uint *)0x2bdf;
              iVar8 = func_0x00008854();
              if (iVar8 == 0) {
                puStack_c = (uint *)0x885;
                puStack_e = (uint *)0x2bf1;
                puVar20 = (uint *)func_0x0000013f();
                puVar13 = (uint *)puVar20;
                puVar12 = &local_44;
                for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                  puVar6 = puVar12;
                  puVar12 = puVar12 + 1;
                  puVar4 = puVar13;
                  puVar13 = puVar13 + 1;
                  *puVar6 = *puVar4;
                }
                puStack_c = (uint *)0x0;
                puStack_e = (uint *)0x2c10;
                func_0x00018779();
                puVar12 = local_60;
                puVar13 = &local_44;
                for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                  puVar4 = puVar12;
                  puVar12 = puVar12 + 1;
                  puVar20 = puVar13;
                  puVar13 = puVar13 + 1;
                  *puVar4 = *puVar20;
                }
                puVar12 = &local_2e;
                puVar13 = &local_44;
                for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                  puVar4 = puVar12;
                  puVar12 = puVar12 + 1;
                  puVar20 = puVar13;
                  puVar13 = puVar13 + 1;
                  *puVar4 = *puVar20;
                }
                local_a6 = 0;
                local_126 = 0;
                uVar16 = 0x11f2;
                for (local_128 = 0; local_128 < 4; local_128 = local_128 + 1) {
                  local_1be = (uint *)(local_128 + 1);
                  if (3 < local_128 + 1) {
                    local_1be = (uint *)0x0;
                  }
                  iVar8 = local_128 * 4;
                  local_2e = *(uint *)(iVar8 + 0xbc4);
                  local_2c = *(undefined2 *)(iVar8 + 0xbc6);
                  local_2a = *(undefined2 *)(iVar8 + 0xbd4);
                  iVar8 = (int)local_1be * 4;
                  local_26 = *(uint *)(iVar8 + 0xbc4);
                  local_24 = *(undefined2 *)(iVar8 + 0xbc6);
                  local_20 = *(uint *)(iVar8 + 0xbd6);
                  puVar13 = &uStack_1c;
                  puVar12 = &local_44;
                  for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                    puVar4 = puVar13;
                    puVar13 = puVar13 + 1;
                    puVar20 = puVar12;
                    puVar12 = puVar12 + 1;
                    *puVar4 = *puVar20;
                  }
                  puVar13 = &uStack_32;
                  puVar12 = &local_2e;
                  for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                    puVar4 = puVar13;
                    puVar13 = puVar13 + 1;
                    puVar20 = puVar12;
                    puVar12 = puVar12 + 1;
                    *puVar4 = *puVar20;
                  }
                  uVar15 = 0x7a6;
                  local_36 = 0x2ce7;
                  local_34 = uVar16;
                  iVar8 = func_0x000084eb();
                  if (0 < iVar8) {
                    puVar13 = &local_20;
                    puVar12 = &local_44;
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar4 = puVar13;
                      puVar13 = puVar13 + 1;
                      puVar20 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar4 = *puVar20;
                    }
                    puVar13 = &local_36;
                    puVar12 = &local_2e;
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar4 = puVar13;
                      puVar13 = puVar13 + 1;
                      puVar20 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar4 = *puVar20;
                    }
                    local_38 = 0x7a6;
                    uVar15 = 0x1bb4;
                    local_3a = 0x2d1c;
                    iVar8 = FUN_1def_1921();
                    uVar18 = 0;
                    if (iVar8 != 0) {
                      FUN_28b3_0cb6();
                      FUN_28b3_0cb6();
                      FUN_28b3_100d();
                      FUN_28b3_0cb6();
                      FUN_28b3_100d();
                      func_0x00029c9d();
                      FUN_28b3_0cb6();
                      FUN_28b3_100d();
                      FUN_28b3_0cb6();
                      FUN_28b3_100d();
                      func_0x00029c9d();
                      FUN_28b3_1163();
                      uVar15 = 0x22b2;
                      FUN_28b3_1181();
                      if ((bool)uVar18) {
                        local_44 = local_8e;
                        local_42 = local_8c;
                        local_40 = local_9a;
                        local_3e = local_98;
                        local_a6 = 1;
                      }
                      else {
                        local_3c = local_8e;
                        local_3a = local_8c;
                        local_38 = local_9a;
                        local_36 = local_98;
                        local_126 = 1;
                      }
                    }
                  }
                  uVar16 = uVar15;
                }
                local_4b = local_4b & 0xfe;
                local_2f = local_2f & 0xfd;
                if (local_178 == 1) {
                  if (local_a6 != 0) {
                    puVar12 = &local_2e;
                    puVar13 = local_60;
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar4 = puVar12;
                      puVar12 = puVar12 + 1;
                      puVar20 = puVar13;
                      puVar13 = puVar13 + 1;
                      *puVar4 = *puVar20;
                    }
                    local_26 = local_44;
                    local_24 = local_42;
                    local_20 = local_3e;
                    puVar13 = &uStack_1c;
                    puVar12 = &local_2e;
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar4 = puVar13;
                      puVar13 = puVar13 + 1;
                      puVar20 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar4 = *puVar20;
                    }
                    uVar16 = 0x11f2;
                    local_20 = 0x2dfd;
                    iVar8 = FUN_17a6_0cba();
                    if (0 < iVar8) {
                      puVar13 = &uStack_1c;
                      puVar12 = local_60;
                      for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                        puVar4 = puVar13;
                        puVar13 = puVar13 + 1;
                        puVar20 = puVar12;
                        puVar12 = puVar12 + 1;
                        *puVar4 = *puVar20;
                      }
                      local_20 = *(uint *)0x148;
                      local_24 = 0x2e1f;
                      FUN_3ab8_7371();
                    }
                  }
                  if (local_126 != 0) {
                    puVar12 = &local_2e;
                    puVar13 = local_60;
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar4 = puVar12;
                      puVar12 = puVar12 + 1;
                      puVar20 = puVar13;
                      puVar13 = puVar13 + 1;
                      *puVar4 = *puVar20;
                    }
                    local_2e = local_3c;
                    local_2c = local_3a;
                    local_2a = local_38;
                    puVar13 = &uStack_1c;
                    puVar12 = &local_2e;
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar4 = puVar13;
                      puVar13 = puVar13 + 1;
                      puVar20 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar4 = *puVar20;
                    }
                    uVar16 = 0x11f2;
                    local_20 = 0x2e60;
                    iVar8 = FUN_17a6_0cba();
                    if (0 < iVar8) {
                      puVar13 = &uStack_1c;
                      puVar12 = local_60;
                      for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                        puVar4 = puVar13;
                        puVar13 = puVar13 + 1;
                        puVar20 = puVar12;
                        puVar12 = puVar12 + 1;
                        *puVar4 = *puVar20;
                      }
                      local_20 = *(uint *)0x148;
                      local_24 = 0x2e82;
                      FUN_3ab8_7371();
                    }
                  }
                }
                if (local_178 == 2) {
                  puVar13 = &uStack_1c;
                  puVar14 = &uStack_1c;
                  puVar12 = &local_44;
                  for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                    puVar4 = puVar13;
                    puVar13 = puVar13 + 1;
                    puVar20 = puVar12;
                    puVar12 = puVar12 + 1;
                    *puVar4 = *puVar20;
                  }
                  uVar16 = 0x11f2;
                  local_20 = 0x2ea3;
                  iVar8 = FUN_17a6_0cba();
                  if (0 < iVar8) {
                    puVar12 = local_60;
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar4 = puVar14;
                      puVar14 = puVar14 + 1;
                      puVar20 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar4 = *puVar20;
                    }
                    local_20 = *(uint *)0x148;
                    local_24 = 0x2ec8;
                    FUN_3ab8_7371();
                  }
                }
              }
            }
          }
          local_a0 = local_a0 - (uint)(local_a2 == (uint *)0x0);
          uVar15 = uVar16;
        }
        func_0x0000abfa();
      }
      local_12e = *(int *)0x14c;
      local_12c = *(int *)0x14e;
      puStack_c = (uint *)0x2ef2;
      local_a2 = (uint *)local_12e;
      local_a0 = local_12c;
      func_0x0000daa6();
      puStack_c = (uint *)0x885;
      for (; (-1 < local_a0 && ((0 < local_a0 || (local_a2 != (uint *)0x0))));
          local_a2 = (uint *)((int)local_a2 + -1)) {
        uVar15 = 0;
        puStack_e = (uint *)0x2f16;
        uVar21 = func_0x00000271();
        if ((*(byte *)((int)uVar21 + 0x1e) & 2) != 0) {
          puStack_c = (uint *)0x0;
          puStack_e = (uint *)0x2f30;
          func_0x00000271();
          uVar15 = 0x885;
          puStack_c = (uint *)0x2f42;
          iVar8 = func_0x00008854();
          if (iVar8 == 0) {
            puStack_c = (uint *)0x885;
            puStack_e = (uint *)0x2f60;
            uVar21 = func_0x00000271();
            if ((*(char *)((int)uVar21 + 0x1d) == '\0') || ((local_178 != 1 && (local_178 != 2)))) {
              *(undefined2 *)0xbc0 = 1;
              puStack_c = (uint *)0x0;
              uVar15 = 0x11f2;
              puStack_e = (uint *)0x3071;
              FUN_13bf_0327();
              local_6c = 1;
            }
            else {
              puStack_c = (uint *)0x0;
              puStack_e = (uint *)0x2f8e;
              puVar20 = (uint *)func_0x00000271();
              puVar13 = (uint *)puVar20;
              puVar12 = &local_1b0;
              for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar6 = puVar12;
                puVar12 = puVar12 + 1;
                puVar4 = puVar13;
                puVar13 = puVar13 + 1;
                *puVar6 = *puVar4;
              }
              puVar12 = local_2be;
              puVar13 = &local_1b0;
              for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar4 = puVar12;
                puVar12 = puVar12 + 1;
                puVar20 = puVar13;
                puVar13 = puVar13 + 1;
                *puVar4 = *puVar20;
              }
              *(undefined2 *)0xbc0 = 1;
              puStack_c = (uint *)0x0;
              puStack_e = (uint *)0x2fc1;
              FUN_13bf_0327();
              local_6c = 1;
              if (local_178 == 1) {
                local_1be = (uint *)0x1;
              }
              if (local_178 == 2) {
                local_1be = (uint *)0x0;
              }
              puStack_c = local_2be;
              puStack_e = local_1be;
              pcVar7 = (code *)swi(0x3f);
              iStack_84 = (*pcVar7)();
              for (local_128 = 1; uVar15 = 0x11f2, local_128 <= iStack_84; local_128 = local_128 + 1
                  ) {
                puVar13 = &local_26;
                puVar12 = local_2be + local_128 * 0x10;
                for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                  puVar4 = puVar13;
                  puVar13 = puVar13 + 1;
                  puVar20 = puVar12;
                  puVar12 = puVar12 + 1;
                  *puVar4 = *puVar20;
                }
                local_2a = 0x3035;
                puVar12 = &local_26;
                iVar8 = FUN_13bf_01c1();
                if (iVar8 != 0) {
                  puVar13 = &local_1b0;
                  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                    puVar4 = puVar12;
                    puVar12 = puVar12 + 1;
                    puVar20 = puVar13;
                    puVar13 = puVar13 + 1;
                    *puVar4 = *puVar20;
                  }
                  local_2a = *(undefined2 *)0x14c;
                  local_2c = 0x11f2;
                  local_2e = 0x3059;
                  func_0x00018977();
                }
              }
            }
          }
        }
        local_a0 = local_a0 - (uint)(local_a2 == (uint *)0x0);
        puStack_c = (uint *)uVar15;
      }
      local_128 = *(int *)0x152;
      puStack_c = (uint *)0x308d;
      local_68 = local_128;
      func_0x0000daa6();
      for (; 0 < local_128; local_128 = local_128 + -1) {
        puStack_c = (uint *)0x309e;
        uVar21 = func_0x000003ef();
        if ((*(byte *)((int)uVar21 + 10) & 2) != 0) {
          puStack_c = (uint *)0x30b3;
          func_0x000003ef();
          puStack_c = (uint *)0x30c4;
          iVar8 = func_0x00008854();
          if (iVar8 == 0) {
            *(undefined2 *)0xbc0 = 1;
            puStack_c = (uint *)0x30de;
            FUN_1def_186d();
            local_6c = 1;
          }
        }
      }
      local_172 = *(int *)0x150;
      puStack_c = (uint *)0x30f9;
      local_128 = local_172;
      func_0x0000daa6();
      local_88 = *(undefined2 *)0xc0ac;
      local_86 = *(undefined2 *)0xc0ae;
      for (; 0 < local_128; local_128 = local_128 + -1) {
        puStack_c = (uint *)0x3119;
        uVar21 = func_0x00000398();
        if ((*(byte *)((int)uVar21 + 0x16) & 2) != 0) {
          puStack_c = (uint *)0x312e;
          func_0x00000398();
          puStack_c = (uint *)0x313f;
          iVar8 = func_0x00008854();
          if (iVar8 == 0) {
            *(undefined2 *)0xbc0 = 1;
            puStack_c = (uint *)0x3159;
            func_0x000190c7();
            local_6c = 1;
          }
        }
      }
      goto LAB_3ab8_85e1;
    }
    FUN_3ab8_6d85();
  }
  if (*(int *)0x158 != 0) {
    return;
  }
LAB_3ab8_85e1:
  if (local_6c != 0) {
    *(undefined1 *)0xd14 = 2;
  }
  *(undefined2 *)0xbc2 = 0;
  func_0x0000abfa();
  puStack_c = (uint *)0x317f;
  func_0x0000b1d8();
  uVar15 = 0x885;
  func_0x0000b6ea();
  if (param_1 == 1) {
    return;
  }
  goto LAB_3ab8_75b8;
}


