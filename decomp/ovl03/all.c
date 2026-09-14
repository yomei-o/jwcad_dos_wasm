/* Ghidra decompilation of jw03.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  51 bytes, 0 callers */

void __cdecl16far FUN_3ab8_0000(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if ((*(byte *)0xce0 & 2) == 0) {
    uVar1 = 0x23ef;
  }
  else {
    uVar1 = 0x23e8;
  }
  func_0x0002327e(0x22b2,*(undefined2 *)0xd70,uVar1,param_1,param_2);
  return;
}



/* 3ab8:0033  FUN_3ab8_0033  183 bytes, 0 callers */

void __cdecl16far
FUN_3ab8_0033(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  FUN_21f2_0ebc();
  if ((*(byte *)0xce0 & 2) == 0) {
    uVar1 = 0x240e;
  }
  else {
    uVar1 = 0x240a;
  }
  func_0x0002327e(0x22b2,*(undefined2 *)0xd70,uVar1,param_1);
  FUN_21f2_3454(0x22b2,0xbf48,0x2413,param_2,param_3,param_4,param_5);
  iVar4 = -0x53e5;
  puVar2 = (undefined1 *)FUN_21f2_3b7a(0x22b2,0xbf48,0x2e);
  if ((int)(puVar2 + 0x40b8) < iVar4) {
    *(undefined1 *)(iVar4 + -0x40b7) = 0;
    for (; pcVar3 = (char *)(iVar4 + -0x40b8), *pcVar3 == '0'; iVar4 = iVar4 + -1) {
      *pcVar3 = '\0';
    }
    if (*pcVar3 == '.') {
      *pcVar3 = '\0';
    }
  }
  else {
    *puVar2 = 0;
  }
  func_0x0002327e(0x22b2,*(undefined2 *)0xd70,0x2419,0xbf48);
  return;
}



/* 3ab8:00ea  FUN_3ab8_00ea  51 bytes, 0 callers */

void __cdecl16far FUN_3ab8_00ea(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if ((*(byte *)0xce0 & 2) == 0) {
    uVar1 = 0x2424;
  }
  else {
    uVar1 = 0x241d;
  }
  func_0x0002327e(0x22b2,*(undefined2 *)0xd70,uVar1,param_1,param_2);
  return;
}



/* 3ab8:011d  FUN_3ab8_011d  103 bytes, 5 callers */

undefined2 __cdecl16far FUN_3ab8_011d(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x3ab8;
  uStack_6 = 0xaca8;
  FUN_21f2_0ebc();
  puStack_4 = (undefined2 *)param_2;
  uStack_6 = 0x242c;
  uStack_8 = param_1;
  local_a = 0x22b2;
  iVar1 = func_0x000253ce();
  uVar2 = 0;
  uVar3 = iVar1 == 0;
  if ((bool)uVar3) {
    puStack_4 = &local_a;
    uStack_6 = *(undefined2 *)0xd70;
    uStack_8 = 0x22b2;
    local_a = 0xaccb;
    FUN_21f2_3154();
    if (*(char *)0xd74 == '\0') {
      *(undefined2 *)0x158 = 1;
      return 1;
    }
  }
  else {
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xacea;
    FUN_28b3_0d04();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xacf2;
    FUN_28b3_0d04();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xacf7;
    func_0x00029ae7();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xacfc;
    FUN_28b3_1181();
    if ((bool)uVar2 || (bool)uVar3) {
      return 0;
    }
  }
  return 1;
}



/* 3ab8:0184  FUN_3ab8_0184  198 bytes, 6 callers */

undefined2 __cdecl16far FUN_3ab8_0184(undefined2 param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 *puStack_8;
  undefined2 *puStack_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x3ab8;
  puStack_6 = (undefined2 *)0xad0f;
  FUN_21f2_0ebc();
  local_4 = (undefined2 *)param_1;
  puStack_6 = (undefined2 *)0xc8;
  puStack_8 = (undefined2 *)0xbf48;
  uStack_a = 0x22b2;
  uVar3 = 0x22b2;
  local_c = 0xad1f;
  iVar1 = func_0x0002509c();
  if (iVar1 == 0) {
    if (param_2 != 0) {
      return 1;
    }
    local_4 = (undefined2 *)0x2430;
    puStack_6 = (undefined2 *)0x22b2;
    uVar3 = 0x11f2;
    puStack_8 = (undefined2 *)0xad3a;
    FUN_13bf_0a03();
  }
  local_4 = &local_c;
  puStack_6 = (undefined2 *)0xbf48;
  uStack_a = 0xad47;
  puStack_8 = (undefined2 *)uVar3;
  iVar1 = FUN_3ab8_011d();
  if (iVar1 != 0) {
    return 1;
  }
  puStack_6 = (undefined2 *)0xad55;
  local_4 = (undefined2 *)uVar3;
  FUN_28b3_0d04();
  local_4 = (undefined2 *)0x22b2;
  puStack_6 = (undefined2 *)0xad5a;
  uVar3 = FUN_28b3_0f51();
  *param_3 = uVar3;
  local_4 = (undefined2 *)param_1;
  puStack_6 = (undefined2 *)0x1f4;
  puStack_8 = param_3 + 1;
  uStack_a = 0x22b2;
  uVar3 = 0x22b2;
  local_c = 0xad6f;
  iVar1 = func_0x0002509c();
  if (iVar1 == 0) {
    if (param_2 != 0) {
      return 2;
    }
    local_4 = (undefined2 *)0x2432;
    puStack_6 = (undefined2 *)0x22b2;
    uVar3 = 0x11f2;
    puStack_8 = (undefined2 *)0xad89;
    FUN_13bf_0a03();
  }
  local_4 = (undefined2 *)0xa;
  puStack_6 = param_3 + 1;
  uStack_a = 0xad99;
  puStack_8 = (undefined2 *)uVar3;
  puVar2 = (undefined1 *)FUN_21f2_3b7a();
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  local_4 = (undefined2 *)0xd;
  puStack_6 = param_3 + 1;
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xadb6;
  puVar2 = (undefined1 *)FUN_21f2_3b7a();
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  return 0;
}



/* 3ab8:024a  FUN_3ab8_024a  168 bytes, 0 callers */

void __cdecl16far FUN_3ab8_024a(char *param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  char *pcVar5;
  
  FUN_21f2_0ebc();
  bVar1 = false;
  if (param_3 == 9) {
    func_0x00024c86(0x22b2,param_1,0x23f8);
  }
  else {
    uVar4 = 0x11f2;
    FUN_10ad_20a9(0x22b2,param_1,param_2);
    while (pcVar5 = param_1, pcVar3 = (char *)func_0x00024ce4(uVar4), pcVar5 < pcVar3) {
      uVar4 = 0x2a75;
      iVar2 = func_0x0002aa38(0x22b2,param_1);
      if (iVar2 != 0) {
        bVar1 = true;
      }
      if ((param_1[(int)pcVar5] & 0x80U) != 0) {
        bVar1 = true;
      }
    }
    if ((*param_1 == '\0') || (((*(byte *)0xce0 & 4) != 0 && (bVar1)))) {
      FUN_21f2_3454(0x22b2,param_1,0x2434,(int)param_2 >> 4,param_2 & 0xf);
    }
  }
  return;
}



/* 3ab8:02f2  FUN_3ab8_02f2  57 bytes, 0 callers */

void FUN_3ab8_02f2(undefined2 param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  undefined2 *puVar10;
  undefined2 uStack_39a;
  undefined1 *puStack_398;
  undefined2 auStack_382 [6];
  int iStack_376;
  uint uStack_374;
  uint uStack_372;
  uint uStack_370;
  uint uStack_36e;
  uint uStack_36c;
  int iStack_36a;
  undefined2 uStack_362;
  undefined2 uStack_360;
  undefined2 uStack_35e;
  undefined2 uStack_35c;
  undefined2 uStack_34c;
  int iStack_34a;
  undefined2 uStack_348;
  undefined2 uStack_346;
  uint uStack_336;
  uint uStack_334;
  uint uStack_332;
  int iStack_330;
  undefined1 auStack_32e [8];
  int iStack_326;
  uint local_324;
  int local_322;
  undefined1 auStack_2f0 [150];
  uint uStack_25a;
  int iStack_258;
  uint uStack_24e;
  int iStack_24c;
  int iStack_248;
  int iStack_50;
  int iStack_4e;
  int iStack_4c;
  undefined1 auStack_4a [8];
  undefined1 local_42;
  int iStack_40;
  undefined1 local_3e [20];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  uint *puStack_e;
  uint *puStack_c;
  
  uVar7 = 0x22b2;
  FUN_21f2_0ebc();
  local_322 = 0;
  local_324 = 0;
  local_42 = 0;
  do {
    while( true ) {
      puStack_c = (uint *)0xd04;
      puStack_10 = (undefined1 *)0xae9e;
      puStack_e = (uint *)uVar7;
      FUN_21f2_2de0();
      pcVar3 = (code *)swi(0x3f);
      iVar4 = (*pcVar3)();
      if (iVar4 != 0) {
        return;
      }
      if (*(int *)0x158 != 0) {
        return;
      }
      FUN_1000_0599();
      func_0x00010526();
      FUN_1000_0599();
      func_0x00010526();
      uVar7 = 0x22b2;
      puStack_c = (uint *)0xaef6;
      iVar4 = FUN_21f2_57b7();
      if (iVar4 == 0) break;
LAB_3ab8_03ef:
      do {
        puStack_c = (uint *)local_3e;
        puStack_10 = (undefined1 *)0xaf88;
        puStack_e = (uint *)uVar7;
        FUN_1000_02b5();
        *(undefined2 *)0xc22 = 1;
        FUN_21f2_3454();
        FUN_21f2_2d26();
        puStack_c = (uint *)0x1;
        puStack_e = (uint *)0x22b2;
        uVar7 = 0x1bb4;
        puStack_10 = (undefined1 *)0xafee;
        iStack_40 = FUN_1def_0904();
        if (*(int *)0x158 != 0) {
          return;
        }
        if ((iStack_258 == 1) || (iStack_258 == 2)) {
          iStack_40 = iStack_258;
        }
      } while (((iStack_40 != -1) && (iStack_40 != 1)) && (iStack_40 != 2));
      uVar7 = 0x11f2;
      FUN_10ad_18a4();
      if ((iStack_40 != -1) && (iStack_40 != 2)) {
        func_0x0000c3ca();
        if (param_2 != 0) {
          puStack_c = &uStack_332;
          puStack_e = &uStack_336;
          puStack_10 = auStack_32e;
          uStack_12 = 0;
          uStack_14 = 1;
          pcVar3 = (code *)swi(0x3f);
          iVar4 = (*pcVar3)();
          if ((iVar4 < 0) || ((local_322 < 1 && ((local_322 < 0 || (local_324 == 0)))))) {
            puStack_c = (uint *)0x2;
            puStack_e = (uint *)0x14;
            puStack_10 = (undefined1 *)0x396;
            uStack_12 = 0x885;
            uStack_14 = 0xb088;
            FUN_1000_02b5();
            *(undefined2 *)0xc22 = 1;
            return;
          }
        }
        func_0x0002504e();
        puStack_c = (uint *)0x22b2;
        uVar7 = 0x22b2;
        puStack_e = (uint *)0xb0b6;
        iVar4 = FUN_21f2_1348();
        *(int *)0xd70 = iVar4;
        if (iVar4 == 0) {
          uVar7 = 0x11f2;
          puStack_c = (uint *)0xb0c8;
          FUN_13bf_0a03();
        }
        uVar8 = 0x22b2;
        puStack_e = (uint *)0xb0d6;
        puStack_c = (uint *)uVar7;
        iStack_4c = FUN_21f2_1348();
        if (iStack_4c == 0) {
          puStack_c = (uint *)0x22b2;
          uVar8 = 0x22b2;
          puStack_e = (uint *)0xb0ec;
          iStack_4c = FUN_21f2_1348();
          if (iStack_4c == 0) {
            uVar8 = 0x11f2;
            puStack_c = (uint *)0xb0fe;
            FUN_13bf_0a03();
          }
        }
        puStack_e = (uint *)0xb10c;
        puStack_c = (uint *)uVar8;
        FUN_1000_0599();
        puStack_c = (uint *)0xb117;
        func_0x00012276();
        func_0x00010526();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb128;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb136;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb144;
        FUN_3ab8_00ea();
        puStack_c = (uint *)*(undefined2 *)0x9512;
        puStack_e = (uint *)*(undefined2 *)0x9510;
        puStack_10 = (undefined1 *)0xa;
        uStack_12 = 0xdef;
        uStack_14 = 0xb15e;
        FUN_3ab8_0033();
        puStack_c = (uint *)*(undefined2 *)0x9512;
        puStack_e = (uint *)*(undefined2 *)0x9510;
        puStack_10 = (undefined1 *)0x14;
        uStack_12 = 0xdef;
        uStack_14 = 0xb179;
        FUN_3ab8_0033();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb188;
        FUN_3ab8_00ea();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029d78();
        puStack_10 = (undefined1 *)0x22b2;
        uStack_12 = 0xb1b3;
        func_0x000299d1();
        puStack_10 = (undefined1 *)0xa;
        uStack_12 = 0x22b2;
        uStack_14 = 0xb1bb;
        FUN_3ab8_0033();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029d78();
        puStack_10 = (undefined1 *)0x22b2;
        uStack_12 = 0xb1e7;
        func_0x000299d1();
        puStack_10 = (undefined1 *)0x14;
        uStack_12 = 0x22b2;
        uStack_14 = 0xb1ef;
        FUN_3ab8_0033();
        puStack_c = (uint *)0x22b2;
        puStack_e = (uint *)0xb1fd;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0x22b2;
        puStack_e = (uint *)0xb20c;
        FUN_1000_0599();
        puStack_c = (uint *)0xb217;
        func_0x00012276();
        func_0x00010526();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb228;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb236;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb245;
        FUN_1000_0599();
        puStack_c = (uint *)0xb250;
        func_0x00012276();
        func_0x00010526();
        uStack_25a = 0;
        uVar7 = 0xdef;
        while( true ) {
          puStack_c = (uint *)iStack_4c;
          puStack_10 = (undefined1 *)0xb26c;
          puStack_e = (uint *)uVar7;
          iVar4 = FUN_3ab8_0184();
          puStack_c = (uint *)uVar7;
          if (iVar4 != 0) break;
          puStack_e = (uint *)0xb2aa;
          FUN_3ab8_00ea();
          if ((iStack_248 == 2) && ((int)uStack_25a < 10)) {
            uStack_336 = uStack_25a;
            puStack_c = (uint *)(auStack_2f0 + uStack_25a * 0xf);
            puStack_10 = (undefined1 *)0xb2e2;
            uStack_25a = uStack_25a + 1;
            puStack_e = (uint *)uVar7;
            FUN_21f2_2de0();
            uVar7 = 0x22b2;
          }
        }
        puStack_e = (uint *)0xb280;
        FUN_1000_0599();
        puStack_c = (uint *)0xb28b;
        func_0x00012276();
        func_0x00010526();
        iStack_326 = 0;
        for (uStack_25a = 0; (int)uStack_25a < 0x100; uStack_25a = uStack_25a + 1) {
          if ((*(char *)(uStack_25a + -0x4b5a) != '\0') || (*(char *)(uStack_25a + -0x4488) != '\0')
             ) {
            iStack_326 = iStack_326 + 1;
          }
        }
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb317;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb325;
        FUN_3ab8_00ea();
        iStack_326 = iStack_326 + 1;
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb337;
        FUN_3ab8_0000();
        uStack_25a = 0;
        do {
          if ((*(char *)(uStack_25a + -0x4b5a) != '\0') || (*(char *)(uStack_25a + -0x4488) != '\0')
             ) {
            puStack_c = (uint *)0xdef;
            puStack_e = (uint *)0xb35c;
            FUN_3ab8_00ea();
            puStack_c = (uint *)auStack_4a;
            puStack_e = (uint *)0xdef;
            puStack_10 = (undefined1 *)0xb36d;
            FUN_3ab8_024a();
            puStack_c = (uint *)0xdef;
            puStack_e = (uint *)0xb37c;
            FUN_3ab8_00ea();
            puStack_c = (uint *)0xdef;
            puStack_e = (uint *)0xb38a;
            FUN_3ab8_0000();
            puStack_c = (uint *)0xdef;
            puStack_e = (uint *)0xb398;
            FUN_3ab8_0000();
            puStack_c = (uint *)0xdef;
            puStack_e = (uint *)0xb3a6;
            FUN_3ab8_00ea();
          }
          uStack_25a = uStack_25a + 1;
        } while ((int)uStack_25a < 0x100);
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb3bf;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb3cd;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb3db;
        FUN_3ab8_0000();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb3e9;
        FUN_3ab8_0000();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb3f7;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb404;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb411;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb420;
        FUN_1000_0599();
        puStack_c = (uint *)0xb42b;
        func_0x00012276();
        func_0x00010526();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb43c;
        FUN_3ab8_00ea();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xb44a;
        FUN_3ab8_00ea();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029d78();
        func_0x000299d1();
        if (param_2 == 0) {
          iStack_24c = 0;
          for (uStack_24e = 1;
              (iStack_24c <= *(int *)0x14a &&
              ((iStack_24c < *(int *)0x14a || (uStack_24e <= *(uint *)0x148))));
              uStack_24e = uStack_24e + 1) {
            puStack_c = (uint *)0x22b2;
            puStack_e = (uint *)0xb6e9;
            FUN_1000_0599();
            puStack_c = (uint *)iStack_24c;
            puStack_e = (uint *)uStack_24e;
            puStack_10 = (undefined1 *)0x2564;
            uStack_12 = 0xdef;
            uStack_14 = 0xb704;
            func_0x00012276();
            puStack_c = (uint *)0x11f2;
            puStack_e = (uint *)0xb714;
            puVar10 = (undefined2 *)func_0x0000013f();
            puVar6 = (undefined2 *)puVar10;
            puVar5 = &uStack_362;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar5;
              puVar5 = puVar5 + 1;
              puVar1 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar1;
            }
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xb732;
            FUN_3ab8_00ea();
            puStack_c = (uint *)auStack_4a;
            puStack_e = (uint *)0x0;
            puStack_10 = (undefined1 *)0xb74c;
            FUN_3ab8_024a();
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xb75b;
            FUN_3ab8_00ea();
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xb773;
            FUN_3ab8_00ea();
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xb790;
            FUN_3ab8_0000();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xb7b3;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0xa;
            uStack_12 = 0x22b2;
            uStack_14 = 0xb7bb;
            FUN_3ab8_0033();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xb7df;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x14;
            uStack_12 = 0x22b2;
            uStack_14 = 0xb7e7;
            FUN_3ab8_0033();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xb80b;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0xb;
            uStack_12 = 0x22b2;
            uStack_14 = 0xb813;
            FUN_3ab8_0033();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xb837;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x15;
            uStack_12 = 0x22b2;
            uStack_14 = 0xb83f;
            FUN_3ab8_0033();
            iStack_24c = iStack_24c + (uint)(0xfffe < uStack_24e);
          }
          uStack_24e = 1;
          iStack_24c = 0;
          while( true ) {
            uVar7 = 0x22b2;
            if ((*(int *)0x14e < iStack_24c) ||
               ((*(int *)0x14e <= iStack_24c && (*(uint *)0x14c < uStack_24e)))) break;
            uStack_362 = *(undefined2 *)0x9518;
            uStack_360 = *(undefined2 *)0x951a;
            uStack_35e = *(undefined2 *)0x951c;
            uStack_35c = *(undefined2 *)0x951e;
            puStack_c = (uint *)0x22b2;
            puStack_e = (uint *)0xbe8a;
            FUN_1000_0599();
            puStack_c = (uint *)iStack_24c;
            puStack_e = (uint *)uStack_24e;
            puStack_10 = (undefined1 *)0x2574;
            uStack_12 = 0xdef;
            uStack_14 = 0xbea5;
            func_0x00012276();
            puStack_c = (uint *)0x11f2;
            puStack_e = (uint *)0xbeb5;
            puVar10 = (undefined2 *)func_0x00000271();
            puVar6 = (undefined2 *)puVar10;
            puVar5 = auStack_382;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar5;
              puVar5 = puVar5 + 1;
              puVar1 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar1;
            }
            puStack_c = (uint *)auStack_4a;
            puStack_e = (uint *)0x0;
            puStack_10 = (undefined1 *)0xbee0;
            FUN_3ab8_024a();
            if ((iStack_376 == 10000) && ((*(byte *)0xce0 & 8) == 0)) {
              if ((uStack_374 == uStack_370) && (uStack_372 == uStack_36e)) {
                puStack_c = (uint *)0x0;
                puStack_e = (uint *)0xbf1a;
                FUN_3ab8_00ea();
                puStack_c = (uint *)0x0;
                puStack_e = (uint *)0xbf28;
                FUN_3ab8_00ea();
                puStack_c = (uint *)0x0;
                puStack_e = (uint *)0xbf40;
                FUN_3ab8_00ea();
                puStack_c = (uint *)0x0;
                puStack_e = (uint *)0xbf5d;
                FUN_3ab8_0000();
                func_0x000297e6();
                func_0x00029d78();
                func_0x00029c2c();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xbf80;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0xa;
                uStack_12 = 0x22b2;
                uStack_14 = 0xbf88;
                FUN_3ab8_0033();
                func_0x000297e6();
                func_0x00029d78();
                func_0x00029c2c();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xbfac;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0x14;
                uStack_12 = 0x22b2;
                uStack_14 = 0xbfb4;
                FUN_3ab8_0033();
                func_0x000297e6();
                func_0x00029d78();
                func_0x00029c2c();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xbfd8;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0x28;
              }
              else {
                puStack_c = (uint *)0x0;
                puStack_e = (uint *)0xb85f;
                FUN_3ab8_00ea();
                puStack_c = (uint *)0x0;
                puStack_e = (uint *)0xb86d;
                FUN_3ab8_00ea();
                puStack_c = (uint *)0x0;
                puStack_e = (uint *)0xb884;
                FUN_3ab8_00ea();
                puStack_c = (uint *)0x0;
                puStack_e = (uint *)0xb8a1;
                FUN_3ab8_0000();
                func_0x000297e6();
                func_0x00029d78();
                func_0x00029c2c();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xb8c4;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0xa;
                uStack_12 = 0x22b2;
                uStack_14 = 0xb8cc;
                FUN_3ab8_0033();
                func_0x000297e6();
                func_0x00029d78();
                func_0x00029c2c();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xb8f0;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0x14;
                uStack_12 = 0x22b2;
                uStack_14 = 0xb8f8;
                FUN_3ab8_0033();
                func_0x000297e6();
                func_0x00029d78();
                func_0x00029c2c();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xb91c;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0x28;
                uStack_12 = 0x22b2;
                uStack_14 = 0xb924;
                FUN_3ab8_0033();
                iVar4 = iStack_36a + uStack_372 + (uint)CARRY2(uStack_36c,uStack_374);
                puStack_c = (uint *)0x22b2;
                puStack_e = (uint *)0xb93e;
                uStack_34c = FUN_20a9_145e();
                iStack_34a = iVar4;
                func_0x000298b4();
                func_0x00029c2c();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xb964;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0x32;
                uStack_12 = 0x22b2;
                uStack_14 = 0xb96c;
                FUN_3ab8_0033();
                iVar4 = iStack_36a + uStack_36e + (uint)CARRY2(uStack_36c,uStack_370);
                puStack_c = (uint *)0x22b2;
                puStack_e = (uint *)0xb986;
                uStack_34c = FUN_20a9_145e();
                iStack_34a = iVar4;
                func_0x000298b4();
                func_0x00029c2c();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xb9ac;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0x33;
              }
              uStack_12 = 0x22b2;
              uStack_14 = 0xbfe0;
              FUN_3ab8_0033();
            }
            else {
              func_0x00029da5();
              func_0x00029c2c();
              func_0x000299b9();
              puStack_10 = (undefined1 *)0x22b2;
              uStack_12 = 0xb9f3;
              func_0x000299d1();
              puStack_10 = (undefined1 *)0x22b2;
              uStack_12 = 0xb9f8;
              puVar5 = (undefined2 *)func_0x0002a11e();
              uStack_34c = *puVar5;
              iStack_34a = puVar5[1];
              uStack_348 = puVar5[2];
              uStack_346 = puVar5[3];
              FUN_28b3_0d04();
              puStack_10 = (undefined1 *)0x22b2;
              uStack_12 = 0xba1a;
              func_0x000299d1();
              puStack_10 = (undefined1 *)0x22b2;
              uStack_12 = 0xba1f;
              FUN_28b3_15dc();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x000299b9();
              FUN_28b3_0ee9();
              FUN_28b3_0d04();
              func_0x00029da5();
              func_0x00029c9d();
              func_0x00029c2c();
              func_0x000299d1();
              uStack_332 = 0;
              iStack_330 = 10;
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x000299d1();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x000299d1();
              if ((uStack_36e <= uStack_372) &&
                 ((uStack_372 != uStack_36e || (uStack_370 <= uStack_374)))) {
                uStack_36e = uStack_36e + 0x168;
              }
              func_0x00029da5();
              func_0x00029c2c();
              func_0x000299b9();
              puStack_10 = (undefined1 *)0x22b2;
              uStack_12 = 0xbb43;
              func_0x000299d1();
              puStack_10 = (undefined1 *)0x22b2;
              uStack_12 = 0xbb48;
              func_0x0002a11e();
              FUN_28b3_0d04();
              func_0x00029c2c();
              func_0x000299d1();
              FUN_28b3_0d04();
              func_0x00029c2c();
              FUN_28b3_0d04();
              puStack_10 = (undefined1 *)0x22b2;
              uStack_12 = 0xbb89;
              func_0x000299d1();
              puStack_10 = (undefined1 *)0x22b2;
              uStack_12 = 0xbb8e;
              FUN_28b3_15dc();
              FUN_28b3_0d04();
              func_0x00029c2c();
              func_0x000299b9();
              func_0x00029c2c();
              FUN_28b3_1163();
              func_0x00029c74();
              func_0x000299d1();
              FUN_28b3_0d04();
              func_0x00029c2c();
              FUN_28b3_0d04();
              func_0x00029c2c();
              FUN_28b3_117c();
              func_0x00029c74();
              func_0x000299d1();
              uStack_336 = uStack_374 + uStack_332;
              uStack_334 = uStack_372 + iStack_330 + (uint)CARRY2(uStack_374,uStack_332);
              while( true ) {
                if ((uStack_36e <= uStack_334) &&
                   ((uStack_36e < uStack_334 || (uStack_370 < uStack_336)))) {
                  uStack_336 = uStack_370;
                  uStack_334 = uStack_36e;
                }
                func_0x000298b4();
                func_0x00029c2c();
                func_0x000299b9();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xbc7a;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xbc7f;
                func_0x0002a11e();
                FUN_28b3_0d04();
                func_0x00029c2c();
                func_0x000299d1();
                FUN_28b3_0d04();
                func_0x00029c2c();
                FUN_28b3_0d04();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xbcc0;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xbcc5;
                FUN_28b3_15dc();
                FUN_28b3_0d04();
                func_0x00029c2c();
                func_0x000299b9();
                func_0x00029c2c();
                FUN_28b3_1163();
                func_0x00029c74();
                func_0x000299b9();
                func_0x000299d1();
                FUN_28b3_0d04();
                func_0x00029c2c();
                FUN_28b3_0d04();
                func_0x00029c2c();
                FUN_28b3_117c();
                func_0x00029c74();
                func_0x000299b9();
                func_0x000299d1();
                puStack_c = (uint *)0x22b2;
                puStack_e = (uint *)0xbd59;
                FUN_3ab8_00ea();
                puStack_c = (uint *)0x22b2;
                puStack_e = (uint *)0xbd67;
                FUN_3ab8_00ea();
                puStack_c = (uint *)0x22b2;
                puStack_e = (uint *)0xbd7e;
                FUN_3ab8_00ea();
                puStack_c = (uint *)0x22b2;
                puStack_e = (uint *)0xbd9b;
                FUN_3ab8_0000();
                puStack_10 = (undefined1 *)0xa;
                uStack_12 = 0x22b2;
                uStack_14 = 0xbdb5;
                FUN_3ab8_0033();
                puStack_c = (uint *)puStack_398;
                puStack_e = (uint *)uStack_39a;
                puStack_10 = (undefined1 *)0x14;
                uStack_12 = 0x22b2;
                uStack_14 = 0xbdd0;
                FUN_3ab8_0033();
                FUN_28b3_0d04();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xbde6;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0xb;
                uStack_12 = 0x22b2;
                uStack_14 = 0xbdee;
                FUN_3ab8_0033();
                FUN_28b3_0d04();
                puStack_10 = (undefined1 *)0x22b2;
                uStack_12 = 0xbe04;
                func_0x000299d1();
                puStack_10 = (undefined1 *)0x15;
                uStack_12 = 0x22b2;
                uStack_14 = 0xbe0c;
                FUN_3ab8_0033();
                FUN_28b3_0d04();
                func_0x000299d1();
                FUN_28b3_0d04();
                func_0x000299d1();
                if ((uStack_370 == uStack_336) && (uStack_36e == uStack_334)) break;
                bVar9 = CARRY2(uStack_336,uStack_332);
                uStack_336 = uStack_336 + uStack_332;
                uStack_334 = uStack_334 + iStack_330 + (uint)bVar9;
              }
            }
            bVar9 = 0xfffe < uStack_24e;
            uStack_24e = uStack_24e + 1;
            iStack_24c = iStack_24c + (uint)bVar9;
          }
          for (uStack_25a = 1; (int)uStack_25a <= *(int *)0x150; uStack_25a = uStack_25a + 1) {
            puStack_e = (uint *)0xbffc;
            puStack_c = (uint *)uVar7;
            FUN_1000_0599();
            puStack_c = (uint *)0x258f;
            puStack_e = (uint *)0xdef;
            puStack_10 = (undefined1 *)0xc00f;
            func_0x00012276();
            puStack_c = (uint *)0xc01b;
            puVar10 = (undefined2 *)func_0x00000398();
            puVar6 = (undefined2 *)puVar10;
            puVar5 = auStack_382;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar5;
              puVar5 = puVar5 + 1;
              puVar1 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar1;
            }
            puStack_c = (uint *)auStack_4a;
            puStack_e = (uint *)0x0;
            puStack_10 = (undefined1 *)0xc03f;
            FUN_3ab8_024a();
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xc04d;
            FUN_3ab8_00ea();
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xc05b;
            FUN_3ab8_00ea();
            func_0x000297e6();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xc079;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0xa;
            uStack_12 = 0x22b2;
            uStack_14 = 0xc081;
            FUN_3ab8_0033();
            func_0x000297e6();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xc0a0;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x14;
            uStack_12 = 0x22b2;
            uStack_14 = 0xc0a8;
            FUN_3ab8_0033();
            FUN_28b3_0d8b();
            func_0x00029b6d();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xc0e4;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x28;
            uStack_12 = 0x22b2;
            uStack_14 = 0xc0ec;
            FUN_3ab8_0033();
            FUN_28b3_0d8b();
            FUN_28b3_0d8b();
            FUN_28b3_1172();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xc112;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x29;
            uStack_12 = 0x22b2;
            uStack_14 = 0xc11a;
            FUN_3ab8_0033();
            func_0x000297e6();
            func_0x00029d78();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xc135;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xc13e;
            func_0x000297e6();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xc143;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xc14d;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1a = 0xc156;
            func_0x000297e6();
            uStack_20 = 0x22b2;
            uStack_22 = 0xc160;
            func_0x000299d1();
            uStack_20 = 0x22b2;
            uStack_22 = 0xc169;
            func_0x000297e6();
            uStack_28 = 0x22b2;
            uStack_2a = 0xc173;
            func_0x000299d1();
            uStack_28 = 0x22b2;
            uStack_2a = 0xc178;
            FUN_1000_0718();
            func_0x00029da5();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xc1ab;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x32;
            uStack_12 = 0x22b2;
            uStack_14 = 0xc1b3;
            FUN_3ab8_0033();
            puStack_c = (uint *)0xbf48;
            puStack_e = (uint *)0x22b2;
            uVar7 = 0x18b3;
            puStack_10 = (undefined1 *)0xc1c7;
            FUN_1885_0344();
            puStack_c = (uint *)0x18b3;
            puStack_e = (uint *)0xc1d6;
            FUN_3ab8_00ea();
          }
          for (uStack_25a = 1; (int)uStack_25a <= *(int *)0x152; uStack_25a = uStack_25a + 1) {
            puStack_e = (uint *)0xc2ce;
            puStack_c = (uint *)uVar7;
            FUN_1000_0599();
            puStack_c = (uint *)0x259f;
            puStack_e = (uint *)0xdef;
            puStack_10 = (undefined1 *)0xc2e1;
            func_0x00012276();
            puStack_c = (uint *)0xc2ed;
            puVar10 = (undefined2 *)func_0x000003ef();
            puVar6 = (undefined2 *)puVar10;
            puVar5 = auStack_382;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar5;
              puVar5 = puVar5 + 1;
              puVar1 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar1;
            }
            puStack_c = (uint *)auStack_4a;
            puStack_e = (uint *)0x0;
            puStack_10 = (undefined1 *)0xc311;
            FUN_3ab8_024a();
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xc1fc;
            FUN_3ab8_00ea();
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xc20a;
            FUN_3ab8_00ea();
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xc227;
            FUN_3ab8_0000();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xc24a;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0xa;
            uStack_12 = 0x22b2;
            uStack_14 = 0xc252;
            FUN_3ab8_0033();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xc276;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x14;
            uStack_12 = 0x22b2;
            uStack_14 = 0xc27e;
            FUN_3ab8_0033();
            if ((*(byte *)0xce0 & 1) != 0) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c2c();
              puStack_10 = (undefined1 *)0x22b2;
              uStack_12 = 0xc2a9;
              func_0x000299d1();
              puStack_10 = (undefined1 *)0x28;
              uStack_12 = 0x22b2;
              uStack_14 = 0xc2b1;
              FUN_3ab8_0033();
            }
            uVar7 = 0x22b2;
          }
        }
        else {
          iStack_24c = 0;
          for (uStack_24e = 1;
              (uVar7 = 0x22b2, iStack_24c <= local_322 &&
              ((iStack_24c < local_322 || (uStack_24e <= local_324)))); uStack_24e = uStack_24e + 1)
          {
            iStack_50 = uStack_24e * 3 + *(uint *)0x148;
            iStack_4e = (iStack_24c << 1 | (uint)((int)uStack_24e < 0)) + iStack_24c +
                        (uint)CARRY2(uStack_24e * 2,uStack_24e) + *(int *)0x14a +
                        (uint)CARRY2(uStack_24e * 3,*(uint *)0x148);
            puStack_c = (uint *)0x22b2;
            puStack_e = (uint *)0xb4d0;
            FUN_1000_0599();
            puStack_c = (uint *)iStack_24c;
            puStack_e = (uint *)uStack_24e;
            puStack_10 = (undefined1 *)0x2554;
            uStack_12 = 0xdef;
            uStack_14 = 0xb4eb;
            func_0x00012276();
            puStack_c = (uint *)0x11f2;
            puStack_e = (uint *)0xb4f9;
            puVar10 = (undefined2 *)func_0x0000013f();
            puVar6 = (undefined2 *)puVar10;
            puVar5 = &uStack_34c;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar5;
              puVar5 = puVar5 + 1;
              puVar1 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar1;
            }
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xb51f;
            puVar10 = (undefined2 *)func_0x0000013f();
            puVar6 = (undefined2 *)puVar10;
            puVar5 = &uStack_362;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar5;
              puVar5 = puVar5 + 1;
              puVar1 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar1;
            }
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xb53d;
            FUN_3ab8_00ea();
            puStack_c = (uint *)auStack_4a;
            puStack_e = (uint *)0x0;
            puStack_10 = (undefined1 *)0xb557;
            FUN_3ab8_024a();
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xb566;
            FUN_3ab8_00ea();
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xb57e;
            FUN_3ab8_00ea();
            puStack_c = (uint *)0x0;
            puStack_e = (uint *)0xb59b;
            FUN_3ab8_0000();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xb5be;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0xa;
            uStack_12 = 0x22b2;
            uStack_14 = 0xb5c6;
            FUN_3ab8_0033();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xb5ea;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x14;
            uStack_12 = 0x22b2;
            uStack_14 = 0xb5f2;
            FUN_3ab8_0033();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xb616;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x1e;
            uStack_12 = 0x22b2;
            uStack_14 = 0xb61e;
            FUN_3ab8_0033();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xb642;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0xb;
            uStack_12 = 0x22b2;
            uStack_14 = 0xb64a;
            FUN_3ab8_0033();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xb66e;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x15;
            uStack_12 = 0x22b2;
            uStack_14 = 0xb676;
            FUN_3ab8_0033();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            puStack_10 = (undefined1 *)0x22b2;
            uStack_12 = 0xb69a;
            func_0x000299d1();
            puStack_10 = (undefined1 *)0x1f;
            uStack_12 = 0x22b2;
            uStack_14 = 0xb6a2;
            FUN_3ab8_0033();
            iStack_24c = iStack_24c + (uint)(0xfffe < uStack_24e);
          }
        }
        puStack_e = (uint *)0xc32f;
        puStack_c = (uint *)uVar7;
        FUN_3ab8_00ea();
        puStack_e = (uint *)0xc33c;
        puStack_c = (uint *)uVar7;
        FUN_3ab8_00ea();
        func_0x0002504e();
        *(undefined2 *)0xd70 = 0;
        puStack_c = (uint *)0x22b2;
        puStack_e = (uint *)0xc356;
        FUN_1000_0599();
        func_0x00010526();
        puStack_c = (uint *)0x2;
        puStack_e = (uint *)0x14;
        puStack_10 = (undefined1 *)0x718;
        uStack_12 = 0xdef;
        uStack_14 = 0xc376;
        FUN_1000_02b5();
        *(undefined2 *)0xc22 = 2;
        return;
      }
    }
    puStack_c = (uint *)local_3e;
    puStack_e = (uint *)0x22b2;
    puStack_10 = (undefined1 *)0xaf16;
    FUN_1000_02b5();
    *(undefined2 *)0xc22 = 1;
    puStack_c = (uint *)0xdef;
    puStack_e = (uint *)0xaf34;
    FUN_21f2_3454();
    uVar8 = 0x22b2;
    do {
      puStack_c = (uint *)0x1;
      uVar7 = 0x1bb4;
      puStack_10 = (undefined1 *)0xaf4f;
      puStack_e = (uint *)uVar8;
      iStack_40 = FUN_1def_0904();
      if ((iStack_258 == 1) || (iStack_258 == 2)) {
        iStack_40 = iStack_258;
      }
      if (iStack_40 == 1) goto LAB_3ab8_03ef;
      if (*(int *)0x158 != 0) {
        return;
      }
    } while ((iStack_40 != -1) && (uVar8 = uVar7, iStack_40 != 2));
    uVar7 = 0x11f2;
    FUN_10ad_18a4();
  } while( true );
}



/* 3ab8:1805  FUN_3ab8_1805  1166 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_1805(uint *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined1 uVar6;
  int local_c;
  undefined2 local_a;
  uint *puStack_8;
  uint *puStack_6;
  
  puStack_6 = (uint *)0xc390;
  FUN_21f2_0ebc();
  puStack_6 = (uint *)0x1;
  puStack_8 = (uint *)0x14;
  local_a = 0x22b2;
  FUN_1000_0599();
  puStack_6 = (uint *)0x25c0;
  puStack_8 = (uint *)0xdef;
  local_a = 0xc3cf;
  func_0x00012276();
  puStack_6 = (uint *)0x11f2;
  uVar4 = 0xdef;
  puStack_8 = (uint *)0xc3d5;
  func_0x00010526();
LAB_3ab8_1855:
  puStack_6 = param_1;
  puStack_8 = (uint *)(uint)*(byte *)0xd74;
  local_a = *(undefined2 *)0xd70;
  iVar3 = FUN_3ab8_0184();
  if (iVar3 != 0) {
    return 1;
  }
LAB_3ab8_1873:
  if (*param_1 != 0) {
LAB_3ab8_19c3:
    if (*param_1 == 9) {
      puStack_6 = (uint *)0x25d6;
      puStack_8 = param_1 + 1;
      local_a = uVar4;
      iVar3 = FUN_21f2_2d98();
      if ((iVar3 == 0) && ((*(byte *)0xce0 & 0x10) == 0)) {
LAB_3ab8_19ee:
        while( true ) {
          uVar4 = 0x22b2;
          puStack_6 = param_1;
          puStack_8 = (uint *)(uint)*(byte *)0xd74;
          local_a = *(undefined2 *)0xd70;
          iVar3 = FUN_3ab8_0184();
          if ((*param_1 == 9) || (*param_1 == 0)) break;
          if (iVar3 != 0) {
            return 1;
          }
          if ((*param_1 == 10) || (*param_1 == 0x14)) {
            puStack_6 = &local_a;
            puStack_8 = param_1 + 1;
            local_a = 0x22b2;
            iVar3 = FUN_3ab8_011d();
            if (iVar3 != 0) {
              return 1;
            }
          }
          uVar2 = *param_1;
          uVar5 = uVar2 < 10;
          uVar6 = uVar2 == 10;
          if ((bool)uVar6) goto LAB_3ab8_1a51;
          uVar5 = uVar2 - 10 < 10;
          uVar6 = uVar2 == 0x14;
          if ((bool)uVar6) {
            puStack_6 = (uint *)0x22b2;
            puStack_8 = (uint *)0xc608;
            FUN_28b3_0d04();
            puStack_6 = (uint *)0x22b2;
            puStack_8 = (uint *)0xc610;
            func_0x000297e6();
            puStack_6 = (uint *)0x22b2;
            puStack_8 = (uint *)0xc615;
            func_0x00029d78();
            puStack_6 = (uint *)0x22b2;
            puStack_8 = (uint *)0xc61a;
            FUN_28b3_1181();
            if (!(bool)uVar5 && !(bool)uVar6) {
              puStack_6 = (uint *)0x22b2;
              puStack_8 = (uint *)0xc627;
              FUN_28b3_0d04();
              goto LAB_3ab8_1a78;
            }
          }
        }
        goto LAB_3ab8_1873;
      }
      puStack_6 = (uint *)0x25de;
      puStack_8 = param_1 + 1;
      local_a = 0x22b2;
      uVar4 = 0x22b2;
      iVar3 = FUN_21f2_2d98();
      if ((iVar3 == 0) && ((*(byte *)0xce0 & 0x10) == 0)) {
LAB_3ab8_1ace:
        while( true ) {
          uVar4 = 0x22b2;
          puStack_6 = param_1;
          puStack_8 = (uint *)(uint)*(byte *)0xd74;
          local_a = *(undefined2 *)0xd70;
          iVar3 = FUN_3ab8_0184();
          if ((*param_1 == 9) || (*param_1 == 0)) break;
          if (iVar3 != 0) {
            return 1;
          }
          if ((*param_1 == 10) || (*param_1 == 0x14)) {
            puStack_6 = &local_a;
            puStack_8 = param_1 + 1;
            local_a = 0x22b2;
            iVar3 = FUN_3ab8_011d();
            if (iVar3 != 0) {
              return 1;
            }
          }
          uVar2 = *param_1;
          uVar5 = uVar2 < 10;
          if (uVar2 == 10) goto LAB_3ab8_1b31;
          uVar5 = uVar2 - 10 < 10;
          if (uVar2 == 0x14) {
            puStack_6 = (uint *)0x22b2;
            puStack_8 = (uint *)0xc6e8;
            FUN_28b3_0d04();
            puStack_6 = (uint *)0x22b2;
            puStack_8 = (uint *)0xc6f0;
            func_0x000297e6();
            puStack_6 = (uint *)0x22b2;
            puStack_8 = (uint *)0xc6f5;
            func_0x00029d78();
            puStack_6 = (uint *)0x22b2;
            puStack_8 = (uint *)0xc6fa;
            FUN_28b3_1181();
            if ((bool)uVar5) {
              puStack_6 = (uint *)0x22b2;
              puStack_8 = (uint *)0xc707;
              FUN_28b3_0d04();
              goto LAB_3ab8_1b58;
            }
          }
        }
        goto LAB_3ab8_1873;
      }
    }
    goto LAB_3ab8_1855;
  }
  puStack_6 = (uint *)0x25cf;
  puStack_8 = param_1 + 1;
  local_a = uVar4;
  iVar3 = FUN_21f2_2d98();
  uVar5 = 0;
  uVar6 = iVar3 == 0;
  uVar4 = 0x22b2;
  if (!(bool)uVar6) goto LAB_3ab8_19c3;
  uVar4 = *(undefined2 *)0x9548;
  uVar1 = *(undefined2 *)0x954a;
  *(undefined2 *)0xb208 = uVar4;
  *(undefined2 *)0xb20a = uVar1;
  *(undefined2 *)0xb204 = uVar4;
  *(undefined2 *)0xb206 = uVar1;
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc431;
  func_0x000297e6();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc439;
  func_0x000297e6();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc43e;
  FUN_28b3_1181();
  if (!(bool)uVar5 && !(bool)uVar6) {
    puStack_6 = (uint *)0x22b2;
    puStack_8 = (uint *)0xc44b;
    func_0x000297e6();
    puStack_6 = (uint *)0x22b2;
    puStack_8 = (uint *)0xc453;
    func_0x000297e6();
    puStack_6 = (uint *)0x22b2;
    puStack_8 = (uint *)0xc458;
    FUN_28b3_1181();
    if (!(bool)uVar5 && !(bool)uVar6) {
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc465;
      func_0x000297e6();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc46e;
      func_0x000297e6();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc473;
      func_0x0002a714();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc47c;
      FUN_28b3_0e3b();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc484;
      FUN_28b3_0ee9();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc48c;
      func_0x000297e6();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc495;
      FUN_28b3_100d();
      uVar5 = (int)(*(uint *)0xa68 << 1) < 0;
      uVar6 = (*(uint *)0xa68 & 0x3fff) == 0;
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc4aa;
      func_0x00029b85();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc4b3;
      func_0x000297e6();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc4bb;
      func_0x000297e6();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc4c0;
      func_0x0002a714();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc4c9;
      FUN_28b3_0e3b();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc4d1;
      func_0x00029b55();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc4da;
      func_0x00029b85();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc4df;
      FUN_28b3_1bc0();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc4e8;
      FUN_28b3_0e3b();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc4f0;
      FUN_28b3_0ee9();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc4f9;
      func_0x000297e6();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc502;
      func_0x000297e6();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc507;
      FUN_28b3_1181();
      if ((bool)uVar5) {
        puStack_6 = (uint *)0x22b2;
        puStack_8 = (uint *)0xc715;
        func_0x000297e6();
        puStack_6 = (uint *)0x22b2;
        puStack_8 = (uint *)0xc71e;
        func_0x000297e6();
        puStack_6 = (uint *)0x22b2;
        puStack_8 = (uint *)0xc723;
        FUN_28b3_1181();
        if (!(bool)uVar5) {
          puStack_6 = (uint *)0x22b2;
          puStack_8 = (uint *)0xc72e;
          func_0x000297e6();
          puStack_6 = (uint *)0x22b2;
          puStack_8 = (uint *)0xc733;
          func_0x00029d78();
          puStack_6 = (uint *)0x22b2;
          puStack_8 = (uint *)0xc73c;
          func_0x00029c2c();
          func_0x000299d1(0x22b2);
          FUN_28b3_166a(0x22b2);
          uVar6 = &stack0x0000 == (undefined1 *)0x4;
          puStack_6 = (uint *)0x22b2;
          puStack_8 = (uint *)0xc755;
          FUN_28b3_0d04();
          goto LAB_3ab8_1bd9;
        }
      }
      else {
        puStack_6 = (uint *)0x22b2;
        puStack_8 = (uint *)0xc515;
        func_0x000297e6();
        puStack_6 = (uint *)0x22b2;
        puStack_8 = (uint *)0xc51a;
        func_0x00029d78();
        puStack_6 = (uint *)0x22b2;
        puStack_8 = (uint *)0xc523;
        func_0x00029c2c();
        func_0x000299d1(0x22b2);
        FUN_28b3_166a(0x22b2);
        uVar6 = &stack0x0000 == (undefined1 *)0x4;
        puStack_6 = (uint *)0x22b2;
        puStack_8 = (uint *)0xc53c;
        FUN_28b3_0d04();
LAB_3ab8_1bd9:
        puStack_6 = (uint *)0x22b2;
        puStack_8 = (uint *)0xc75e;
        func_0x00029c2c();
        puStack_6 = (uint *)0x22b2;
        puStack_8 = (uint *)0xc767;
        FUN_28b3_0e53();
      }
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc770;
      func_0x000297e6();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc779;
      func_0x000297e6();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (uint *)0xc77e;
      FUN_28b3_1181();
      goto LAB_3ab8_1c05;
    }
  }
  uVar6 = *(int *)0xa62 == 0x1b;
LAB_3ab8_1c05:
  if ((bool)uVar6) {
    uVar4 = *(undefined2 *)0x956e;
    *(undefined2 *)0xb26 = *(undefined2 *)0x956c;
    *(undefined2 *)0xb28 = uVar4;
  }
  local_c = 0;
  do {
    uVar4 = *(undefined2 *)0xb28;
    *(undefined2 *)(local_c * 4 + 0xb2a) = *(undefined2 *)0xb26;
    *(undefined2 *)(local_c * 4 + 0xb2c) = uVar4;
    local_c = local_c + 1;
  } while (local_c < 0x10);
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc7ca;
  func_0x000297e6();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc7d2;
  FUN_28b3_0e3b();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc7e4;
  FUN_28b3_0d8b();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc7e9;
  FUN_28b3_1172();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc7f2;
  FUN_28b3_0e53();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc7fb;
  func_0x000297e6();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc803;
  func_0x00029b85();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc80c;
  FUN_28b3_0e53();
  return 0;
LAB_3ab8_1a51:
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc5d9;
  FUN_28b3_0d04();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc5e1;
  func_0x000297e6();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc5e6;
  func_0x00029d78();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc5eb;
  FUN_28b3_1181();
  if (!(bool)uVar5 && !(bool)uVar6) {
    puStack_6 = (uint *)0x22b2;
    puStack_8 = (uint *)0xc5f5;
    FUN_28b3_0d04();
LAB_3ab8_1a78:
    puStack_6 = (uint *)0x22b2;
    puStack_8 = (uint *)0xc5fd;
    FUN_28b3_0e53();
  }
  goto LAB_3ab8_19ee;
LAB_3ab8_1b31:
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc6b9;
  FUN_28b3_0d04();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc6c1;
  func_0x000297e6();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc6c6;
  func_0x00029d78();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (uint *)0xc6cb;
  FUN_28b3_1181();
  if ((bool)uVar5) {
    puStack_6 = (uint *)0x22b2;
    puStack_8 = (uint *)0xc6d5;
    FUN_28b3_0d04();
LAB_3ab8_1b58:
    puStack_6 = (uint *)0x22b2;
    puStack_8 = (uint *)0xc6dd;
    FUN_28b3_0e53();
  }
  goto LAB_3ab8_1ace;
}



/* 3ab8:1c93  FUN_3ab8_1c93  1060 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_1c93(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 local_1a [8];
  undefined2 local_12;
  undefined2 local_10;
  int local_e;
  uint local_c;
  int *local_a;
  int *local_8;
  
  FUN_21f2_0ebc();
  local_8 = (int *)0x1;
  local_a = (int *)0x3c;
  local_c = 0x22b2;
  local_e = 0xc82d;
  FUN_1000_0599();
  local_8 = (int *)0x25e6;
  local_a = (int *)0xdef;
  local_c = 0xc838;
  func_0x00012276();
  local_8 = (int *)0x11f2;
  local_a = (int *)0xc83e;
  func_0x00010526();
  uVar7 = 0xdef;
  do {
    local_8 = param_1;
    local_a = (int *)(uint)*(byte *)0xd74;
    local_c = *(undefined2 *)0xd70;
    local_10 = 0xc84f;
    local_e = uVar7;
    iVar4 = FUN_3ab8_0184();
    if (iVar4 != 0) {
      return 1;
    }
    while( true ) {
      uVar6 = uVar7;
      if (*param_1 == 0) {
        local_8 = (int *)0x25f2;
        local_a = param_1 + 1;
        uVar6 = 0x22b2;
        local_e = -0x378f;
        local_c = uVar7;
        iVar4 = FUN_21f2_2d98();
        if (iVar4 == 0) goto LAB_3ab8_1cf7;
      }
      uVar7 = uVar6;
      if (*param_1 != 0) break;
      local_8 = (int *)0x25f9;
      local_a = param_1 + 1;
      uVar7 = 0x22b2;
      local_e = 0xc8aa;
      local_c = uVar6;
      iVar4 = FUN_21f2_2d98();
      if (iVar4 != 0) break;
      *(undefined2 *)((int)*(undefined4 *)0xb1fa + *(int *)0xb202 * 0x1e + 0x10) = 1;
      while( true ) {
        local_8 = param_1;
        local_a = (int *)(uint)*(byte *)0xd74;
        local_c = *(undefined2 *)0xd70;
        local_10 = 0xca97;
        local_e = uVar7;
        iVar4 = FUN_3ab8_0184();
        local_c = uVar7;
        if (*param_1 == 0) break;
        if (iVar4 != 0) {
          return 1;
        }
        uVar5 = *(int *)0xb202 * 0x1e + *(int *)0xb1fa;
        uVar6 = *(undefined2 *)0xb1fc;
        if (*param_1 == 0x49) {
          local_8 = (int *)local_1a;
          local_a = param_1 + 1;
          local_e = 0xc8f0;
          iVar4 = FUN_3ab8_011d();
          if (iVar4 != 0) {
            return 1;
          }
          local_a = (int *)0xc901;
          local_8 = (int *)uVar7;
          FUN_28b3_0d04();
          local_8 = (int *)0x22b2;
          uVar7 = 0x22b2;
          local_a = (int *)0xc906;
          iVar4 = FUN_28b3_0f51();
          if (iVar4 < 0) {
LAB_3ab8_1d9c:
            *(undefined2 *)(uVar5 + 0x10) = 8;
          }
          else if (iVar4 < 2) {
            *(undefined2 *)(uVar5 + 0x10) = 1;
          }
          else {
            if (iVar4 + -1 < 1) goto LAB_3ab8_1d9c;
            if (iVar4 == 3 || iVar4 + -2 < 1) {
              *(undefined2 *)(uVar5 + 0x10) = 4;
            }
            else {
              if ((iVar4 + -3 < 1) || (1 < iVar4 + -4)) goto LAB_3ab8_1d9c;
              *(undefined2 *)(uVar5 + 0x10) = 6;
            }
          }
          uVar2 = *(undefined2 *)0x9548;
          uVar3 = *(undefined2 *)0x954a;
          *(undefined2 *)(uVar5 + 0x1a) = uVar2;
          *(undefined2 *)(uVar5 + 0x1c) = uVar3;
          *(undefined2 *)(uVar5 + 0x16) = uVar2;
          *(undefined2 *)(uVar5 + 0x18) = uVar3;
        }
        if (*param_1 == 0x28) {
          local_8 = (int *)local_1a;
          local_a = param_1 + 1;
          local_e = 0xc95e;
          local_c = uVar7;
          iVar4 = FUN_3ab8_011d();
          if (iVar4 != 0) {
            return 1;
          }
          local_a = (int *)0xc985;
          local_8 = (int *)uVar7;
          FUN_28b3_0d04();
          local_8 = (int *)0x22b2;
          uVar7 = 0x22b2;
          local_a = (int *)0xc990;
          func_0x00029987();
        }
        if (*param_1 == 0x31) {
          local_8 = (int *)local_1a;
          local_a = param_1 + 1;
          local_e = 0xc9a7;
          local_c = uVar7;
          iVar4 = FUN_3ab8_011d();
          uVar8 = 0;
          uVar9 = iVar4 == 0;
          if (!(bool)uVar9) {
            return 1;
          }
          local_a = (int *)0xc9b9;
          local_8 = (int *)uVar7;
          FUN_28b3_0d04();
          local_8 = (int *)0x22b2;
          local_a = (int *)0xc9c1;
          FUN_28b3_0d04();
          local_8 = (int *)0x22b2;
          local_a = (int *)0xc9c6;
          FUN_28b3_1181();
          if (!(bool)uVar8 && !(bool)uVar9) {
            local_8 = (int *)0x22b2;
            local_a = (int *)0xc9d1;
            func_0x000297e6();
            uVar8 = 0xffe9 < uVar5;
            uVar9 = uVar5 == 0xffea;
            local_8 = (int *)0x22b2;
            local_a = (int *)0xc9e2;
            FUN_28b3_0c98();
            local_8 = (int *)0x22b2;
            local_a = (int *)0xc9e7;
            FUN_28b3_1181();
            if ((bool)uVar9) {
              local_8 = (int *)0x22b2;
              local_a = (int *)0xc9f1;
              FUN_28b3_0d04();
              local_8 = (int *)0x22b2;
              local_a = (int *)0xc9fa;
              func_0x00029987();
            }
          }
          local_8 = (int *)0x22b2;
          local_a = (int *)0xca03;
          FUN_28b3_0d04();
          local_8 = (int *)0x22b2;
          local_a = (int *)0xca0b;
          FUN_28b3_0d04();
          local_8 = (int *)0x22b2;
          uVar7 = 0x22b2;
          local_a = (int *)0xca10;
          FUN_28b3_1181();
          if ((bool)uVar8) {
            local_8 = (int *)0x22b2;
            local_a = (int *)0xca1b;
            func_0x000297e6();
            uVar8 = uVar5 == 0xffe6;
            local_8 = (int *)0x22b2;
            local_a = (int *)0xca2c;
            FUN_28b3_0c98();
            local_8 = (int *)0x22b2;
            uVar7 = 0x22b2;
            local_a = (int *)0xca31;
            FUN_28b3_1181();
            if ((bool)uVar8) {
              local_8 = (int *)0x22b2;
              local_a = (int *)0xca3b;
              FUN_28b3_0d04();
              local_8 = (int *)0x22b2;
              local_a = (int *)0xca40;
              func_0x00029af6();
              local_8 = (int *)0x22b2;
              uVar7 = 0x22b2;
              local_a = (int *)0xca49;
              func_0x00029987();
            }
          }
        }
        if (*param_1 == 2) {
          local_8 = (int *)0x25ff;
          local_a = param_1 + 1;
          local_e = 0xca5e;
          local_c = uVar7;
          iVar4 = FUN_21f2_2d98();
          if (iVar4 == 0) {
            *(undefined2 *)(uVar5 + 0x10) = 1;
          }
          *(undefined1 *)((int)param_1 + 0x11) = 0;
          local_8 = param_1 + 1;
          local_e = 0x22b2;
          uVar7 = 0x18b3;
          local_10 = 0xca83;
          local_c = uVar5;
          local_a = (int *)uVar6;
          func_0x00018b67();
        }
      }
      *(int *)0xb202 = *(int *)0xb202 + 1;
      if ((*(int *)0xbe92 <= *(int *)0xb1fc) &&
         ((*(int *)0xbe92 < *(int *)0xb1fc ||
          (CONCAT11((char)((uint)*(undefined2 *)0xbe90 >> 8) + '\x7f',(char)*(undefined2 *)0xbe90) <
           (uint)(*(int *)0xb202 * 0x1e + *(int *)0xb1fa))))) {
        local_8 = (int *)0x1;
        local_a = (int *)0x14;
        local_e = -0x351c;
        FUN_1000_0599();
        local_8 = (int *)0x260a;
        local_a = (int *)0xdef;
        local_c = 0xcaef;
        func_0x00012276();
        local_8 = (int *)0x11f2;
        uVar6 = 0xdef;
        local_a = (int *)0xcaf5;
        func_0x00010526();
LAB_3ab8_1cf7:
        uVar7 = *(undefined2 *)0xb1fc;
        *(int *)0xb1f4 = *(int *)0xb202 * 0x1e + *(int *)0xb1fa;
        *(undefined2 *)0xb1f6 = uVar7;
        for (local_a = (int *)0x4; (int)local_a < 9; local_a = (int *)((int)local_a + 2)) {
          local_12 = *(undefined2 *)0x9548;
          local_10 = *(undefined2 *)0x954a;
          local_e = 0;
          for (local_8 = (int *)0x0; (int)local_8 < *(int *)0xb202;
              local_8 = (int *)((int)local_8 + 1)) {
            if ((int *)*(uint *)((int)local_8 * 0x1e + *(int *)0xb1fa + 0x10) == local_a) {
              local_a = (int *)0xcb1e;
              local_8 = (int *)uVar6;
              FUN_28b3_0c98();
              local_8 = &local_12;
              local_a = (int *)0x22b2;
              local_c = 0xcb27;
              func_0x00029bb5();
              local_8 = (int *)0x22b2;
              uVar6 = 0x22b2;
              local_a = (int *)0xcb2d;
              FUN_28b3_0e53();
              local_e = local_e + 1;
            }
          }
          if (local_e != 0) {
            local_a = (int *)0xcb4a;
            local_8 = (int *)uVar6;
            FUN_28b3_0d8b();
            local_8 = &local_12;
            local_a = (int *)0x22b2;
            local_c = 0xcb53;
            func_0x00029b9d();
            local_8 = (int *)0x22b2;
            uVar6 = 0x22b2;
            local_a = (int *)0xcb59;
            FUN_28b3_0e53();
          }
          for (local_8 = (int *)0x0; (int)local_8 < *(int *)0xb202;
              local_8 = (int *)((int)local_8 + 1)) {
            iVar4 = (int)local_8 * 0x1e + *(int *)0xb1fa;
            uVar7 = *(undefined2 *)0xb1fc;
            uVar5 = *(uint *)(iVar4 + 0x10);
            uVar8 = uVar5 < local_a;
            if ((int *)uVar5 == local_a) {
              local_a = (int *)0xcb86;
              local_8 = (int *)uVar6;
              func_0x000297e6();
              local_8 = (int *)0x22b2;
              local_a = (int *)0xcb93;
              FUN_28b3_0c98();
              local_8 = (int *)0x22b2;
              uVar6 = 0x22b2;
              local_a = (int *)0xcb98;
              FUN_28b3_1181();
              if ((bool)uVar8) {
                piVar1 = (int *)(iVar4 + 0x10);
                *piVar1 = *piVar1 + -1;
              }
            }
          }
        }
        for (local_8 = (int *)0x0; (int)local_8 < *(int *)0xb202;
            local_8 = (int *)((int)local_8 + 1)) {
          iVar4 = (int)local_8 * 0x1e + *(int *)0xb1fa;
          uVar7 = *(undefined2 *)0xb1fc;
          if (*(int *)(iVar4 + 0x10) == 3) {
            *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -1;
          }
          uVar8 = *(uint *)(iVar4 + 0x10) < 4;
          uVar9 = *(uint *)(iVar4 + 0x10) == 4;
          if ((bool)uVar9) {
            local_a = (int *)0xcc08;
            local_8 = (int *)uVar6;
            FUN_28b3_0c98();
            local_8 = (int *)0x22b2;
            local_a = (int *)0xcc15;
            FUN_28b3_0c98();
            local_8 = (int *)0x22b2;
            uVar6 = 0x22b2;
            local_a = (int *)0xcc1a;
            FUN_28b3_1181();
            if ((bool)uVar8 || (bool)uVar9) {
              *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -1;
            }
          }
        }
        return 0;
      }
    }
  } while( true );
}



/* 3ab8:20b7  FUN_3ab8_20b7  108 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_20b7(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_21f2_0ebc();
  *(undefined1 *)(param_1 + 0x11) = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)0xb202 <= iVar2) {
      return 1;
    }
    FUN_1885_0344(0x22b2,0xbf48,iVar2 * 0x1e + *(int *)0xb1fa,*(undefined2 *)0xb1fc);
    iVar1 = FUN_21f2_2d98(0x18b3,0xbf48,param_1 + 2);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  return *(undefined2 *)((int)*(undefined4 *)0xb1fa + iVar2 * 0x1e + 0x10);
}



/* 3ab8:2123  FUN_3ab8_2123  475 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_2123(uint *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  int local_a;
  uint *puStack_8;
  uint *puStack_6;
  
  puStack_6 = (uint *)0xccae;
  FUN_21f2_0ebc();
  puStack_6 = (uint *)0x1;
  puStack_8 = (uint *)0x3c;
  local_a = 0x22b2;
  FUN_1000_0599();
  puStack_6 = (uint *)0x261a;
  puStack_8 = (uint *)0xdef;
  local_a = -0x3339;
  func_0x00012276();
  puStack_6 = (uint *)0x11f2;
  iVar3 = 0xdef;
  puStack_8 = (uint *)0xcccd;
  func_0x00010526();
  puStack_6 = param_1;
  puStack_8 = (uint *)0x0;
  local_a = *(int *)0xd70;
  FUN_3ab8_0184();
  do {
    while( true ) {
      iVar4 = iVar3;
      if (*param_1 == 0) {
        puStack_6 = (uint *)0x2626;
        puStack_8 = param_1 + 1;
        iVar4 = 0x22b2;
        local_a = iVar3;
        iVar3 = FUN_21f2_2d98();
        if (iVar3 == 0) goto LAB_3ab8_22e1;
      }
      iVar3 = iVar4;
      if (*param_1 == 0) break;
LAB_3ab8_2197:
      puStack_6 = param_1;
      puStack_8 = (uint *)(uint)*(byte *)0xd74;
      local_a = *(int *)0xd70;
      iVar4 = FUN_3ab8_0184();
      if (iVar4 != 0) {
        return 1;
      }
    }
    puStack_6 = (uint *)0x262d;
    puStack_8 = param_1 + 1;
    iVar3 = 0x22b2;
    local_a = iVar4;
    iVar4 = FUN_21f2_2d98();
    if (iVar4 != 0) goto LAB_3ab8_2197;
    while( true ) {
      puStack_6 = param_1;
      puStack_8 = (uint *)(uint)*(byte *)0xd74;
      local_a = *(int *)0xd70;
      iVar4 = FUN_3ab8_0184();
      local_a = iVar3;
      if (*param_1 == 0) break;
      if (iVar4 != 0) {
        return 1;
      }
      *(undefined1 *)((int)param_1 + 0x11) = 0;
      uVar1 = *param_1;
      if (uVar1 == 0x3e) {
        puStack_6 = (uint *)&local_a;
        puStack_8 = param_1 + 1;
        iVar4 = FUN_3ab8_011d();
        if (iVar4 != 0) {
          return 1;
        }
        puStack_8 = (uint *)0xcdaa;
        puStack_6 = (uint *)iVar3;
        FUN_28b3_0d04();
        puStack_6 = (uint *)0x22b2;
        iVar3 = 0x22b2;
        puStack_8 = (uint *)0xcdaf;
        uVar2 = FUN_28b3_0f51();
        *(undefined2 *)((int)*(undefined4 *)0xb1f4 + *(int *)0xb1fe * 0x16 + 0x14) = uVar2;
      }
      else if (uVar1 < 0x3f) {
        if ((char)uVar1 == '\x02') {
          local_a = *(int *)0xb1fe * 0x16 + *(int *)0xb1f4;
          puStack_8 = (uint *)*(undefined2 *)0xb1f6;
          puStack_6 = param_1 + 1;
          func_0x00018b67(iVar3);
          puStack_6 = (uint *)*(undefined2 *)0xb1fe;
          local_a = 0x18b3;
          iVar3 = 0x11f2;
          puStack_8 = param_1 + 1;
          FUN_10ad_20e9();
        }
        else if ((char)uVar1 == '\x06') {
          puStack_6 = param_1;
          local_a = -0x3234;
          puStack_8 = (uint *)iVar3;
          uVar2 = FUN_3ab8_20b7();
          *(undefined2 *)((int)*(undefined4 *)0xb1f4 + *(int *)0xb1fe * 0x16 + 0x12) = uVar2;
        }
      }
    }
    *(undefined2 *)((int)*(undefined4 *)0xb1f4 + *(int *)0xb1fe * 0x16 + 0x10) =
         *(undefined2 *)0xb1fe;
    *(int *)0xb1fe = *(int *)0xb1fe + 1;
  } while ((*(int *)0xb1f6 < *(int *)0xbe92) ||
          ((*(int *)0xb1f6 <= *(int *)0xbe92 &&
           ((uint)(*(int *)0xb1fe * 0x16 + *(int *)0xb1f4) <=
            CONCAT11((char)((uint)*(undefined2 *)0xbe90 >> 8) + '\x7f',(char)*(undefined2 *)0xbe90))
           )));
  puStack_6 = (uint *)0x1;
  puStack_8 = (uint *)0x14;
  FUN_1000_0599();
  puStack_6 = (uint *)0x2633;
  puStack_8 = (uint *)0xdef;
  local_a = -0x31c5;
  func_0x00012276();
  puStack_6 = (uint *)0x11f2;
  puStack_8 = (uint *)0xce41;
  func_0x00010526();
LAB_3ab8_22e1:
  uVar2 = *(undefined2 *)0xb1f6;
  *(int *)0xb1ec = *(int *)0xb1fe * 0x16 + *(int *)0xb1f4;
  *(undefined2 *)0xb1ee = uVar2;
  return 0;
}



/* 3ab8:22fe  FUN_3ab8_22fe  231 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_22fe(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  FUN_1000_0599(0x22b2,0x14,1);
  func_0x00012276(0xdef,0x2643);
  func_0x00010526(0x11f2);
  uVar3 = 0xdef;
  do {
    iVar1 = FUN_3ab8_0184(*(undefined2 *)0xd70,*(undefined1 *)0xd74,param_1);
    if (iVar1 != 0) {
      return 1;
    }
    while( true ) {
      uVar2 = uVar3;
      if (*param_1 == 0) {
        uVar2 = 0x22b2;
        iVar1 = FUN_21f2_2d98(uVar3,param_1 + 1,0x2652);
        if (iVar1 == 0) {
          return 0;
        }
      }
      uVar3 = uVar2;
      if (*param_1 != 0) break;
      uVar3 = 0x22b2;
      iVar1 = FUN_21f2_2d98(uVar2,param_1 + 1,0x2659);
      if (iVar1 != 0) break;
      iVar1 = FUN_3ab8_0184(*(undefined2 *)0xd70,*(undefined1 *)0xd74,param_1);
      if (iVar1 != 0) {
        return 1;
      }
      if ((*param_1 == 2) && (iVar1 = FUN_21f2_2d98(0x22b2,param_1 + 1,0x265f), iVar1 == 0)) {
        FUN_3ab8_1c93(param_1);
      }
      uVar3 = 0x22b2;
      if (*param_1 == 2) {
        uVar3 = 0x22b2;
        iVar1 = FUN_21f2_2d98(0x22b2,param_1 + 1,0x2665);
        if (iVar1 == 0) {
          FUN_3ab8_2123(param_1);
        }
      }
    }
  } while( true );
}



/* 3ab8:23e5  FUN_3ab8_23e5  529 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_23e5(int ***param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SI;
  undefined2 uVar3;
  undefined2 uVar4;
  int ***pppiVar5;
  undefined2 unaff_DS;
  int *local_12 [2];
  undefined2 uStack_e;
  int **ppiStack_c;
  int **local_a;
  int **ppiStack_8;
  int ***local_6;
  
  local_6 = (int ***)0xcf70;
  FUN_21f2_0ebc();
  local_6 = (int ***)0x1;
  ppiStack_8 = (int **)0x14;
  local_a = (int **)0x22b2;
  ppiStack_c = (int **)0xcf7e;
  FUN_1000_0599();
  local_6 = (int ***)0x266b;
  ppiStack_8 = (int **)0xdef;
  local_a = (int **)0xcf89;
  func_0x00012276();
  local_6 = (int ***)0x11f2;
  uVar3 = 0xdef;
  ppiStack_8 = (int **)0xcf8f;
  func_0x00010526();
  local_6 = param_1;
  ppiStack_8 = (int **)(uint)*(byte *)0xd74;
  local_a = (int **)*(undefined2 *)0xd70;
  ppiStack_c = (int **)0xdef;
  uStack_e = 0xcfa0;
  iVar1 = FUN_3ab8_0184();
  if (iVar1 == 0) {
    do {
      while( true ) {
        uVar4 = uVar3;
        if (*param_1 == (int **)0x0) {
          local_6 = (int ***)0x267a;
          ppiStack_8 = (int **)(param_1 + 1);
          uVar4 = 0x22b2;
          ppiStack_c = (int **)0xd0fd;
          local_a = (int **)uVar3;
          iVar1 = FUN_21f2_2d98();
          if (iVar1 == 0) goto LAB_3ab8_25cb;
        }
        uVar3 = uVar4;
        if (*param_1 == (int **)0x0) break;
LAB_3ab8_254d:
        local_6 = param_1;
        ppiStack_8 = (int **)(uint)*(byte *)0xd74;
        local_a = (int **)*(undefined2 *)0xd70;
        uStack_e = 0xd0de;
        ppiStack_c = (int **)uVar3;
        iVar1 = FUN_3ab8_0184();
        if (iVar1 != 0) goto LAB_3ab8_242a;
      }
      local_6 = (int ***)0x2681;
      ppiStack_8 = (int **)(param_1 + 1);
      uVar3 = 0x22b2;
      ppiStack_c = (int **)0xd118;
      local_a = (int **)uVar4;
      iVar1 = FUN_21f2_2d98();
      if (iVar1 != 0) goto LAB_3ab8_254d;
      local_6 = (int ***)&local_6;
      ppiStack_8 = (int **)*(undefined2 *)0xd70;
      local_a = (int **)0x22b2;
      pppiVar5 = (int ***)0x22b2;
      ppiStack_c = (int **)0xd12b;
      FUN_21f2_3154();
      iVar1 = *(int *)0xb1f8;
      uVar3 = (undefined2)((ulong)*(undefined4 *)0xb1ec >> 0x10);
      iVar2 = (int)*(undefined4 *)0xb1ec;
      *(int *)(iVar2 + iVar1 * 0x22 + 0x1e) = (int)local_6;
      *(undefined2 *)(iVar2 + iVar1 * 0x22 + 0x20) = unaff_SI;
      while( true ) {
        local_6 = param_1;
        ppiStack_8 = (int **)(uint)*(byte *)0xd74;
        local_a = (int **)*(undefined2 *)0xd70;
        uStack_e = 0xd056;
        ppiStack_c = (int **)pppiVar5;
        iVar1 = FUN_3ab8_0184();
        if (*param_1 == (int **)0x0) break;
        if (iVar1 != 0) goto LAB_3ab8_242a;
        if ((*param_1 == (int **)0xa) || (local_a = (int **)0x0, *param_1 == (int **)0x14)) {
          local_6 = (int ***)local_12;
          ppiStack_8 = (int **)(param_1 + 1);
          ppiStack_c = (int **)0xcfcc;
          local_a = (int **)pppiVar5;
          iVar1 = FUN_3ab8_011d();
          if (iVar1 != 0) goto LAB_3ab8_242a;
        }
        if (*param_1 == (int **)0x2) {
          *(undefined1 *)(param_1 + 0xb) = 0;
          local_6 = param_1 + 1;
          local_a = (int **)(*(int *)0xb1f8 * 0x22 + *(int *)0xb1ec);
          ppiStack_8 = (int **)*(undefined2 *)0xb1ee;
          uStack_e = 0xcff8;
          ppiStack_c = (int **)pppiVar5;
          func_0x00018b67();
          pppiVar5 = (int ***)0x18b3;
        }
        if (*param_1 == (int **)0xa) {
          ppiStack_8 = (int **)0xd00b;
          local_6 = pppiVar5;
          FUN_28b3_0d04();
          local_6 = (int ***)0x22b2;
          pppiVar5 = (int ***)0x22b2;
          ppiStack_8 = (int **)0xd020;
          func_0x00029987();
        }
        if (*param_1 == (int **)0x14) {
          ppiStack_8 = (int **)0xd030;
          local_6 = pppiVar5;
          FUN_28b3_0d04();
          local_6 = (int ***)0x22b2;
          pppiVar5 = (int ***)0x22b2;
          ppiStack_8 = (int **)0xd045;
          func_0x00029987();
        }
      }
      *(int *)0xb1f8 = *(int *)0xb1f8 + 1;
      local_6 = (int ***)0x1;
      ppiStack_8 = (int **)0x23;
      ppiStack_c = (int **)0xd078;
      local_a = (int **)pppiVar5;
      FUN_1000_0599();
      local_6 = (int ***)*(undefined2 *)0xb1f8;
      ppiStack_8 = (int **)0x2687;
      local_a = (int **)0xdef;
      uVar3 = 0x11f2;
      ppiStack_c = (int **)0xd087;
      func_0x00012276();
    } while ((*(int *)0xb1ee < *(int *)0xbe92) ||
            ((*(int *)0xb1ee <= *(int *)0xbe92 &&
             ((uint)(*(int *)0xb1f8 * 0x22 + *(int *)0xb1ec) <=
              CONCAT11((char)((uint)*(undefined2 *)0xbe90 >> 8) + '\x7f',(char)*(undefined2 *)0xbe90
                      )))));
    local_6 = (int ***)0x1;
    ppiStack_8 = (int **)0x14;
    local_a = (int **)0x11f2;
    ppiStack_c = (int **)0xd0ba;
    FUN_1000_0599();
    local_6 = (int ***)0x268a;
    ppiStack_8 = (int **)0xdef;
    local_a = (int **)0xd0c5;
    func_0x00012276();
    local_6 = (int ***)0x11f2;
    uVar4 = 0xdef;
    ppiStack_8 = (int **)0xd0cb;
    func_0x00010526();
LAB_3ab8_25cb:
    uVar3 = *(undefined2 *)0xb1ee;
    *(int *)0xb1f0 = *(int *)0xb1f8 * 0x22 + *(int *)0xb1ec;
    *(undefined2 *)0xb1f2 = uVar3;
    local_6 = (int ***)0x6;
    ppiStack_8 = (int **)0x0;
    ppiStack_c = (int **)0xd16d;
    local_a = (int **)uVar4;
    FUN_1000_0599();
    uVar3 = 0;
  }
  else {
LAB_3ab8_242a:
    uVar3 = 1;
  }
  return uVar3;
}



/* 3ab8:25f6  FUN_3ab8_25f6  65 bytes, 1 callers */

int __cdecl16far FUN_3ab8_25f6(uint param_1)

{
  undefined2 unaff_DS;
  int local_4;
  
  FUN_21f2_0ebc();
  local_4 = 1;
  while( true ) {
    if (6 < local_4) {
      return 2;
    }
    if (*(byte *)(*(int *)(local_4 * 2 + 0xa70) + 0x2402) == param_1) break;
    local_4 = local_4 + 1;
  }
  return local_4;
}



/* 3ab8:2637  FUN_3ab8_2637  159 bytes, 0 callers */

undefined1 __cdecl16far FUN_3ab8_2637(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  FUN_21f2_0ebc();
  *(undefined1 *)(param_3 + 0x11) = 0;
  *param_1 = 1;
  *param_2 = 2;
  iVar4 = 0;
  while( true ) {
    if (*(int *)0xb1fe <= iVar4) {
      return 0;
    }
    iVar4 = iVar4 * 0x16;
    FUN_1885_0344(0x22b2,0xbf48,iVar4 + *(int *)0xb1f4,*(undefined2 *)0xb1f6);
    iVar1 = param_3 + 2;
    iVar2 = FUN_21f2_2d98(0x18b3,0xbf48);
    if (iVar2 == 0) break;
    iVar4 = iVar1 + 1;
  }
  *param_1 = *(undefined2 *)((int)*(undefined4 *)0xb1f4 + iVar4 + 0x12);
  uVar3 = FUN_3ab8_25f6(*(undefined2 *)((int)*(undefined4 *)0xb1f4 + iVar4 + 0x14));
  *param_2 = uVar3;
  return *(undefined1 *)((int)*(undefined4 *)0xb1f4 + iVar4 + 0x10);
}



/* 3ab8:26d6  FUN_3ab8_26d6  72 bytes, 0 callers */

void __cdecl16far FUN_3ab8_26d6(undefined1 *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_8;
  
  FUN_21f2_0ebc();
  if (*(int *)0xb200 != 0) {
    local_8 = *(int *)0xb200;
    while (local_8 = local_8 + -1, -1 < local_8) {
      iVar1 = local_8 * 0x2c + *(int *)0xb1f0;
      if (-1 < *(int *)(iVar1 + 0x18)) {
        *param_1 = *(undefined1 *)(iVar1 + 0x18);
      }
    }
  }
  return;
}



/* 3ab8:271e  FUN_3ab8_271e  570 bytes, 1 callers */

void __cdecl16far FUN_3ab8_271e(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  undefined2 local_1c;
  
  FUN_21f2_0ebc();
  if (*(int *)0xb200 != 0) {
    local_1c = *(int *)0xb200;
    while (local_1c = local_1c + -1, -1 < local_1c) {
      FUN_28b3_0c98(0x22b2);
      func_0x00029b55(0x22b2,param_1);
      FUN_28b3_0e53(0x22b2);
      FUN_28b3_0c98(0x22b2);
      func_0x00029b55(0x22b2,param_2);
      FUN_28b3_0e53(0x22b2);
      FUN_28b3_0c98(0x22b2);
      func_0x00029b6d(0x22b2,param_1);
      FUN_28b3_0e53(0x22b2);
      FUN_28b3_0c98(0x22b2);
      func_0x00029b6d(0x22b2,param_2);
      FUN_28b3_0e53(0x22b2);
      FUN_28b3_0c98(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      FUN_28b3_15dc(0x22b2);
      FUN_28b3_0d04(0x22b2);
      FUN_28b3_0e53(0x22b2);
      FUN_28b3_0c98(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x0002a11e(0x22b2);
      FUN_28b3_0d04(0x22b2);
      FUN_28b3_0e53(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      FUN_28b3_1163(0x22b2);
      FUN_28b3_0e3b(0x22b2);
      FUN_28b3_0e53(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      FUN_28b3_117c(0x22b2);
      FUN_28b3_0e53(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_107e(0x22b2);
      FUN_28b3_0e53(0x22b2);
      FUN_28b3_0c98(0x22b2);
      func_0x00029bb5(0x22b2);
      FUN_28b3_0e53(0x22b2);
    }
  }
  func_0x000297e6(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_1172(0x22b2);
  FUN_28b3_0e53(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_1172(0x22b2);
  FUN_28b3_0e53(0x22b2);
  return;
}



/* 3ab8:2958  FUN_3ab8_2958  84 bytes, 0 callers */

void __cdecl16far FUN_3ab8_2958(undefined2 param_1)

{
  undefined2 unaff_DS;
  undefined2 local_8;
  
  FUN_21f2_0ebc();
  if (*(int *)0xb200 != 0) {
    local_8 = *(int *)0xb200 + -1;
    while (-1 < local_8) {
      FUN_28b3_0c98(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x00029c2c(0x22b2,param_1);
      func_0x000299d1(0x22b2);
      local_8 = -0x2ae8;
    }
  }
  return;
}



/* 3ab8:29ac  FUN_3ab8_29ac  325 bytes, 0 callers */

void __cdecl16far FUN_3ab8_29ac(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 extraout_DX;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 auStack_36 [14];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_12;
  int local_10;
  int local_e;
  undefined2 uStack_c;
  undefined1 *local_a;
  
  FUN_21f2_0ebc();
  uVar6 = *param_1;
  uVar4 = param_1[1];
  local_a = &stack0xfffa;
  uStack_c = 0x22b2;
  local_e = 0xd55f;
  FUN_3ab8_271e();
  *param_1 = uVar6;
  param_1[1] = uVar4;
  param_1[2] = local_a;
  param_1[3] = &local_a;
  local_a = (undefined1 *)0xd584;
  func_0x000297e6();
  local_a = (undefined1 *)0xd58d;
  func_0x00029b6d();
  local_a = (undefined1 *)0x22b2;
  uStack_c = 0xd599;
  func_0x00029b9d();
  local_a = (undefined1 *)0xd59f;
  FUN_28b3_0e53();
  if (*(int *)0xb200 != 0) {
    local_10 = *(int *)0xb200;
    while (local_10 = local_10 + -1, -1 < local_10) {
      local_e = local_10 * 0x2c + *(int *)0xb1f0;
      uStack_c = *(undefined2 *)0xb1f2;
      local_a = (undefined1 *)0xd5d7;
      FUN_28b3_0c98();
      local_a = (undefined1 *)0xd5dc;
      func_0x00029d78();
      local_10 = 0x22b2;
      uStack_12 = 0xd5e6;
      func_0x000299d1();
      local_10 = 0x22b2;
      uStack_12 = 0xd5f0;
      FUN_28b3_0c98();
      local_10 = 0x22b2;
      uStack_12 = 0xd5f5;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd5ff;
      func_0x000299d1();
      puVar7 = auStack_36;
      puVar3 = param_1;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar3;
        puVar3 = puVar3 + 1;
        *puVar2 = *puVar1;
      }
      puVar3 = (undefined2 *)FUN_21f2_001a();
      puVar7 = param_1;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar3;
        puVar3 = puVar3 + 1;
        *puVar2 = *puVar1;
      }
      local_a = (undefined1 *)0xd62f;
      FUN_28b3_0c98();
      local_a = (undefined1 *)0xd634;
      func_0x00029d78();
      local_a = (undefined1 *)0xd63d;
      func_0x00029c2c();
      local_a = (undefined1 *)0xd642;
      FUN_28b3_0f51();
      local_a = (undefined1 *)param_1[0xb];
      uStack_c = 0x22b2;
      local_e = 0xd654;
      uVar6 = extraout_DX;
      uVar4 = FUN_20a9_145e();
      param_1[0xb] = uVar4;
      param_1[0xc] = uVar6;
    }
  }
  return;
}



/* 3ab8:2af1  FUN_3ab8_2af1  154 bytes, 0 callers */

int __cdecl16far FUN_3ab8_2af1(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  undefined2 local_c;
  undefined2 local_8;
  undefined2 local_6;
  int iVar7;
  
  FUN_21f2_0ebc();
  FUN_28b3_0d04(0x22b2);
  func_0x00029b85(0x22b2);
  func_0x00029c2c(0x22b2);
  FUN_28b3_0f51(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  func_0x00029c2c(0x22b2);
  iVar7 = 0x22b2;
  iVar1 = FUN_28b3_0f51();
  local_8 = 9999;
  local_6 = 1;
  for (local_c = 1; local_c < 0xb; local_c = local_c + 1) {
    uVar2 = iVar1 - *(int *)(local_c * 2 + 0x182);
    uVar5 = (int)uVar2 >> 0xf;
    uVar3 = iVar7 - *(int *)(local_c * 2 + 0x198);
    uVar6 = (int)uVar3 >> 0xf;
    iVar4 = ((uVar2 ^ uVar5) - uVar5) + ((uVar3 ^ uVar6) - uVar6);
    if (iVar4 < local_8) {
      local_6 = local_c;
      local_8 = iVar4;
    }
  }
  return local_6;
}



/* 3ab8:2b8b  FUN_3ab8_2b8b  228 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_2b8b(undefined2 param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  FUN_1000_0599(0x22b2,0x14,1);
  func_0x00012276(0xdef,0x269a);
  FUN_1000_0599(0x11f2,0x26,1);
  func_0x00012276(0xdef,0x26ad,*(undefined2 *)0xb200);
  func_0x00010526(0x11f2);
  uVar1 = FUN_21f2_2b42(0xdef);
  if (1999 < uVar1) {
    if ((*(int *)0xb1f2 < *(int *)0xbe92) ||
       ((*(int *)0xb1f2 <= *(int *)0xbe92 &&
        ((uint)(*(int *)0xb200 * 0x2c + *(int *)0xb1f0) <=
         CONCAT11((char)((uint)*(undefined2 *)0xbe90 >> 8) + '\x7f',(char)*(undefined2 *)0xbe90)))))
    {
      iVar2 = FUN_3ab8_0184(*(undefined2 *)0xd70,*(undefined1 *)0xd74,param_1);
      if (iVar2 != 0) {
        return 1;
      }
      if (*(int *)0x158 != 0) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_32b2_02bc();
    }
  }
  FUN_1000_0599(0x22b2,0x14,1);
  func_0x00012276(0xdef,0x8c2);
  func_0x00010526(0x11f2);
  *(undefined2 *)0xc22 = 1;
  return 1;
}



/* 3ab8:4030  FUN_3ab8_4030  2640 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_4030(void)

{
  int *piVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined2 **ppuVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined2 **ppuVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int *piVar15;
  undefined2 uVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  bool bVar18;
  undefined1 uVar19;
  int *piVar20;
  undefined2 *puVar21;
  undefined2 local_a8 [12];
  undefined2 *local_90 [8];
  undefined4 local_70;
  int local_6c;
  undefined2 local_6a;
  int local_68;
  undefined2 local_66;
  int local_64;
  undefined2 local_62;
  byte local_5c;
  undefined2 *local_58;
  int local_54;
  undefined2 local_52;
  int local_50;
  undefined2 local_4e;
  int local_4c;
  undefined2 local_4a;
  int local_48;
  undefined2 local_46;
  int local_3e;
  undefined2 local_3c;
  int local_3a;
  undefined2 local_38;
  int local_36;
  undefined2 local_34;
  int local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  int local_2a;
  undefined2 local_28;
  int local_26;
  undefined2 local_24;
  int local_22;
  undefined2 local_20;
  undefined2 local_16;
  uint local_14;
  uint local_12;
  uint local_10;
  int *local_e;
  int *local_c;
  
  FUN_21f2_0ebc();
  local_2a = *(int *)0x9540;
  local_28 = *(undefined2 *)0x9542;
  local_3e = *(int *)0x9544;
  local_3c = *(undefined2 *)0x9546;
  local_16 = 0;
  local_12 = 1;
  local_10 = 0;
  local_36 = local_3e;
  local_34 = local_3c;
  local_22 = local_2a;
  local_20 = local_28;
  while( true ) {
    uVar7 = *(uint *)0x14a;
    uVar17 = uVar7 < local_10;
    uVar19 = uVar7 == local_10;
    if ((int)uVar7 < (int)local_10) break;
    if ((int)uVar7 <= (int)local_10) {
      uVar19 = *(uint *)0x148 == local_12;
      uVar17 = false;
      if (*(uint *)0x148 < local_12) break;
    }
    local_c = (int *)0x22b2;
    local_e = (int *)0xec1d;
    piVar20 = (int *)func_0x0000013f();
    piVar10 = (int *)piVar20;
    piVar15 = &local_54;
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      piVar3 = piVar15;
      piVar15 = piVar15 + 1;
      piVar1 = piVar10;
      piVar10 = piVar10 + 1;
      *piVar3 = *piVar1;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_22 = local_54;
      local_20 = local_52;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_2a = local_50;
      local_28 = local_4e;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar19) {
      local_36 = local_54;
      local_34 = local_52;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_3e = local_50;
      local_3c = local_4e;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_22 = local_4c;
      local_20 = local_4a;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_2a = local_48;
      local_28 = local_46;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar19) {
      local_36 = local_4c;
      local_34 = local_4a;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_3e = local_48;
      local_3c = local_46;
    }
    bVar18 = 0xfffe < local_12;
    local_12 = local_12 + 1;
    local_10 = local_10 + bVar18;
  }
  local_10 = 0;
  for (local_12 = 1;
      ((int)local_10 <= *(int *)0x14e &&
      (((int)local_10 < *(int *)0x14e || (local_12 <= *(uint *)0x14c)))); local_12 = local_12 + 1) {
    local_c = &local_32;
    local_e = &local_26;
    local_14 = 0x22b2;
    local_16 = 0xed92;
    FUN_20a9_0f89();
    uVar17 = (undefined1 *)0xfff3 < &local_12;
    uVar19 = &stack0x0000 == (undefined1 *)0x6;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_22 = local_26;
      local_20 = local_24;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_2a = local_32;
      local_28 = local_30;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar19) {
      local_36 = local_3a;
      local_34 = local_38;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar19) {
      local_3e = -0x11ed;
      local_3c = 0x22b2;
    }
    local_10 = local_10 + (0xfffe < local_12);
  }
  local_14 = 1;
  while( true ) {
    uVar7 = *(uint *)0x150;
    uVar17 = local_14 < uVar7;
    uVar19 = local_14 == uVar7;
    if (!(bool)uVar19 && (int)uVar7 <= (int)local_14) break;
    local_c = (int *)0xee37;
    puVar21 = (undefined2 *)func_0x00000398();
    puVar14 = (undefined2 *)puVar21;
    puVar11 = &local_70;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar4 = puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 2);
      puVar2 = puVar14;
      puVar14 = puVar14 + 1;
      *(undefined2 *)puVar4 = *puVar2;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_22 = (int)(undefined2 *)local_70;
      local_20 = local_70._2_2_;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_2a = local_6c;
      local_28 = local_6a;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar19) {
      local_36 = (int)(undefined2 *)local_70;
      local_34 = local_70._2_2_;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar19) {
      local_3e = local_6c;
      local_3c = local_6a;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_22 = local_68;
      local_20 = local_66;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_2a = local_64;
      local_28 = local_62;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar19) {
      local_36 = local_68;
      local_34 = local_66;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar19) {
      local_3e = local_64;
      local_3c = local_62;
    }
    local_14 = local_14 + 1;
  }
  local_14 = 1;
  while( true ) {
    uVar7 = *(uint *)0x152;
    uVar17 = local_14 < uVar7;
    uVar19 = local_14 == uVar7;
    if (!(bool)uVar19 && (int)uVar7 <= (int)local_14) break;
    local_c = (int *)0xef7e;
    puVar21 = (undefined2 *)func_0x000003ef();
    puVar14 = (undefined2 *)puVar21;
    puVar11 = &local_70;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar4 = puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 2);
      puVar2 = puVar14;
      puVar14 = puVar14 + 1;
      *(undefined2 *)puVar4 = *puVar2;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_22 = (int)(undefined2 *)local_70;
      local_20 = local_70._2_2_;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_2a = local_6c;
      local_28 = local_6a;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_36 = (int)(undefined2 *)local_70;
      local_34 = local_70._2_2_;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) {
      local_3e = local_6c;
      local_3c = local_6a;
    }
    local_14 = local_14 + 1;
  }
  func_0x000297e6();
  FUN_28b3_100d();
  FUN_28b3_0e3b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_100d();
  FUN_28b3_0e3b();
  FUN_28b3_1181();
  if (!(bool)uVar17 && !(bool)uVar19) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar19) {
      func_0x000297e6();
      func_0x00029b6d();
      local_c = (int *)0xf0a9;
      func_0x00029b6d();
      FUN_28b3_0e53();
      func_0x000297e6();
      func_0x00029b6d();
      local_c = (int *)0xf0ca;
      func_0x00029b6d();
      FUN_28b3_0e53();
      iVar9 = *(int *)0xa5a;
      iVar8 = *(int *)0xa5e;
      local_70._0_2_ = (undefined2 *)((iVar9 - iVar8) + -0x20);
      FUN_28b3_0d8b();
      func_0x00029b6d();
      FUN_28b3_0e3b();
      FUN_28b3_0ee9();
      if (*(char *)0x130 != '\0') {
        local_70._0_2_ = (undefined2 *)(*(int *)0x1b3e - *(int *)0xa58);
        FUN_28b3_0d8b();
        local_58 = (undefined2 *)CONCAT22(local_58._2_2_,0x27f - *(int *)0xa58);
        FUN_28b3_0d8b();
        FUN_28b3_1172();
        func_0x00029b6d();
        func_0x00029b6d();
        local_54 = iVar9 - iVar8;
        FUN_28b3_0d8b();
        FUN_28b3_1172();
        FUN_28b3_0e53();
      }
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029b9d();
      func_0x000297e6();
      func_0x00029b85();
      FUN_28b3_1bc0();
      FUN_28b3_0e3b();
      func_0x00029d78();
      func_0x00029c2c();
      FUN_28b3_0e53();
      local_c = (int *)0xf1b9;
      func_0x000088e3();
      func_0x000297e6();
      func_0x00029b85();
      FUN_28b3_0e53();
      *(undefined2 *)0xb26 = local_2e;
      *(undefined2 *)0xb28 = local_2c;
      local_14 = 0;
      do {
        uVar16 = *(undefined2 *)0xb28;
        *(undefined2 *)(local_14 * 4 + 0xb2a) = *(undefined2 *)0xb26;
        *(undefined2 *)(local_14 * 4 + 0xb2c) = uVar16;
        local_14 = local_14 + 1;
      } while ((int)local_14 < 0x10);
      func_0x000297e6();
      FUN_28b3_0e3b();
      local_58 = (undefined2 *)
                 CONCAT22(local_58._2_2_,(undefined2 *)(*(int *)0x1b3e - *(int *)0xa58));
      FUN_28b3_0d8b();
      FUN_28b3_1172();
      FUN_28b3_0e53();
      func_0x000297e6();
      func_0x00029b85();
      uVar16 = 0x22b2;
      FUN_28b3_0e53();
      local_e = (int *)local_2a;
      local_2e = *(undefined2 *)0x95a4;
      local_2c = *(undefined2 *)0x95a6;
      local_12 = 1;
      local_10 = 0;
      while( true ) {
        puVar21 = (undefined2 *)CONCAT22(local_70._2_2_,(undefined2 *)local_70);
        if ((*(int *)0x14a < (int)local_10) ||
           ((*(int *)0x14a <= (int)local_10 && (*(uint *)0x148 < local_12)))) break;
        local_e = (int *)0xf2b1;
        local_c = (int *)uVar16;
        puVar21 = (undefined2 *)func_0x0000013f();
        puVar14 = (undefined2 *)puVar21;
        puVar11 = &local_70;
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar4 = puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 2);
          puVar2 = puVar14;
          puVar14 = puVar14 + 1;
          *(undefined2 *)puVar4 = *puVar2;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e53();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e53();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e53();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e53();
        local_5c = local_5c & 0xef;
        local_c = (int *)0x22b2;
        uVar16 = 0;
        local_e = (int *)0xf372;
        local_58 = (undefined2 *)func_0x0000013f();
        puVar14 = (undefined2 *)local_58;
        puVar11 = &local_70;
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar21 = puVar14;
          puVar14 = puVar14 + 1;
          puVar4 = puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 2);
          *puVar21 = *(undefined2 *)puVar4;
        }
        bVar18 = 0xfffe < local_12;
        local_12 = local_12 + 1;
        local_10 = local_10 + bVar18;
      }
      local_10 = 0;
      for (local_12 = 1;
          (local_70 = puVar21, (int)local_10 <= *(int *)0x14e &&
          (((int)local_10 < *(int *)0x14e || (local_12 <= *(uint *)0x14c))));
          local_12 = local_12 + 1) {
        local_e = (int *)0xf3bd;
        local_c = (int *)uVar16;
        puVar21 = (undefined2 *)func_0x00000271();
        puVar14 = (undefined2 *)puVar21;
        ppuVar12 = local_90;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          ppuVar5 = ppuVar12;
          ppuVar12 = (undefined2 **)((int)ppuVar12 + 2);
          puVar2 = puVar14;
          puVar14 = puVar14 + 1;
          *(undefined2 *)ppuVar5 = *puVar2;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e53();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e53();
        func_0x000297e6();
        local_c = (int *)0xf436;
        func_0x00029b6d();
        FUN_28b3_0e53();
        local_c = (int *)0x22b2;
        uVar16 = 0;
        local_e = (int *)0xf447;
        puVar21 = (undefined2 *)func_0x00000271();
        local_70._2_2_ = (undefined2)((ulong)puVar21 >> 0x10);
        local_70._0_2_ = (undefined2 *)puVar21;
        ppuVar12 = local_90;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar2 = (undefined2 *)local_70;
          local_70._0_2_ = (undefined2 *)local_70 + 1;
          ppuVar5 = ppuVar12;
          ppuVar12 = (undefined2 **)((int)ppuVar12 + 2);
          *puVar2 = *(undefined2 *)ppuVar5;
        }
        local_10 = local_10 + (0xfffe < local_12);
      }
      for (local_14 = 1; (int)local_14 <= *(int *)0x150; local_14 = local_14 + 1) {
        local_c = (int *)0xf46e;
        puVar21 = (undefined2 *)func_0x00000398();
        puVar13 = (undefined2 *)puVar21;
        puVar14 = local_a8;
        for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar6 = puVar14;
          puVar14 = puVar14 + 1;
          puVar2 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar6 = *puVar2;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        FUN_28b3_0e53();
        func_0x000297e6();
        FUN_28b3_100d();
        FUN_28b3_0e53();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e3b();
        func_0x00029bb5();
        FUN_28b3_0e53();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e3b();
        func_0x00029bb5();
        FUN_28b3_0e53();
        local_c = (int *)0xf534;
        local_58 = (undefined2 *)func_0x00000398();
        puVar13 = (undefined2 *)local_58;
        puVar14 = local_a8;
        for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar2 = puVar13;
          puVar13 = puVar13 + 1;
          puVar21 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar21;
        }
      }
      for (local_14 = 1; (int)local_14 <= *(int *)0x152; local_14 = local_14 + 1) {
        local_c = (int *)0xf565;
        puVar21 = (undefined2 *)func_0x000003ef();
        puVar13 = (undefined2 *)puVar21;
        puVar14 = local_a8;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar6 = puVar14;
          puVar14 = puVar14 + 1;
          puVar2 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar6 = *puVar2;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e53();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x00029bb5();
        FUN_28b3_0e53();
        local_c = (int *)0xf5d3;
        local_90[0] = (undefined2 *)func_0x000003ef();
        puVar13 = (undefined2 *)local_90[0];
        puVar14 = local_a8;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar2 = puVar13;
          puVar13 = puVar13 + 1;
          puVar21 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar21;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* 3ab8:4a80  FUN_3ab8_4a80  572 bytes, 0 callers */

void FUN_3ab8_4a80(undefined2 param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_DS;
  int local_2e8;
  undefined1 auStack_2e6 [4];
  undefined1 auStack_2e2 [4];
  int local_2de;
  undefined1 auStack_2dc [100];
  int local_278;
  undefined1 *puStack_276;
  int iStack_274;
  undefined1 auStack_272 [502];
  undefined1 local_7c [60];
  int local_40;
  undefined1 local_3e [46];
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  int *piStack_6;
  int *piStack_4;
  
  piStack_4 = (int *)0x3ab8;
  piStack_6 = (int *)0xf60b;
  FUN_21f2_0ebc();
  local_40 = 0;
  if (*(int *)0xa62 == 0x1b) {
    *(undefined2 *)0xa68 = 1;
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf631;
    FUN_28b3_0d8b();
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf63a;
    func_0x00029b9d();
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf643;
    FUN_28b3_0e53();
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf64c;
    func_0x000297e6();
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf655;
    func_0x00029b85();
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf65e;
    FUN_28b3_0e53();
  }
  puVar5 = (undefined1 *)0x22b2;
  if (param_2 == 0) {
    if (*(char *)0xed8 == '\0') {
      if (*(char *)0xd14 != '\0') {
        do {
          piStack_4 = (int *)0x3a6;
          piStack_6 = (int *)0x3c2;
          puStack_8 = auStack_2dc;
          puStack_c = (undefined1 *)0xf831;
          puStack_a = puVar5;
          FUN_21f2_3454();
          piStack_4 = (int *)auStack_2dc;
          piStack_6 = (int *)0x2;
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0xf842;
          FUN_1def_07a4();
          piStack_4 = &local_2de;
          piStack_6 = (int *)auStack_2e6;
          puStack_8 = auStack_2e2;
          puStack_a = auStack_2dc;
          puStack_c = (undefined1 *)0x1;
          puStack_e = (undefined1 *)0x1bb4;
          puVar5 = (undefined1 *)0x1bb4;
          uStack_10 = 0xf861;
          local_40 = FUN_1def_0904();
          if ((((*(int *)0x158 != 0) || (local_40 == -1)) || (local_40 == 2)) || (local_2de == 2))
          goto LAB_3ab8_4cee;
        } while ((local_40 != 1) && (local_2de != 1));
      }
      do {
        piStack_4 = (int *)0xd;
        piStack_6 = (int *)0x2721;
        puStack_8 = (undefined1 *)0xd04;
        puStack_c = (undefined1 *)0xf8a1;
        puStack_a = puVar5;
        FUN_21f2_2de0();
        piStack_4 = (int *)0x2722;
        piStack_6 = (int *)local_3e;
        pcVar1 = (code *)swi(0x3f);
        iVar3 = (*pcVar1)();
        if ((iVar3 != 0) || (*(int *)0x158 != 0)) goto LAB_3ab8_4cee;
        *(undefined2 *)0x152 = 0;
        *(undefined2 *)0x150 = 0;
        *(undefined2 *)0x14e = 0;
        *(undefined2 *)0x14c = 0;
        *(undefined2 *)0x14a = 0;
        *(undefined2 *)0x148 = 0;
        uVar9 = *(undefined2 *)0xbefc;
        *(undefined2 *)0xc0ac = *(undefined2 *)0xbefa;
        *(undefined2 *)0xc0ae = uVar9;
        *(undefined1 *)0xd74 = 0;
        piStack_4 = (int *)0x22b2;
        puVar5 = (undefined1 *)0x11f2;
        piStack_6 = (int *)0xf8e7;
        FUN_10ad_18a4();
      } while ((local_40 == -1) || (local_40 == 2));
    }
    else {
      piStack_4 = (int *)0xc3e2;
      piStack_6 = (int *)0xd44;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xf7cf;
      uVar2 = func_0x00024ce4();
      if (uVar2 < 4) {
        piStack_6 = (int *)0x2719;
      }
      else {
        piStack_6 = (int *)0x2717;
      }
      puStack_8 = (undefined1 *)0xd44;
      puStack_a = (undefined1 *)0x271a;
      puStack_c = local_3e;
      puStack_e = (undefined1 *)0x22b2;
      uStack_10 = 0xf7ef;
      FUN_21f2_3454();
      piStack_4 = (int *)0x2;
      piStack_6 = (int *)0x14;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xf7ff;
      FUN_1000_0599();
      piStack_4 = (int *)local_3e;
      piStack_6 = (int *)0x1de;
      puStack_8 = (undefined1 *)0xdef;
      puStack_a = (undefined1 *)0xf80e;
      func_0x00012276();
      piStack_4 = (int *)0x11f2;
      puVar5 = (undefined1 *)0xdef;
      piStack_6 = (int *)0xf815;
      func_0x00010526();
    }
  }
  else {
    piStack_4 = (int *)0xbf48;
    piStack_6 = (int *)local_3e;
    puStack_8 = (undefined1 *)0x22b2;
    puVar5 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xf674;
    func_0x00024c86();
    local_40 = 1;
  }
  piStack_6 = (int *)0xf680;
  piStack_4 = (int *)puVar5;
  func_0x0000c3ca();
  piStack_4 = (int *)0x885;
  piStack_6 = (int *)0xf685;
  func_0x0002504e();
  *(undefined2 *)0xc62 = 0;
  if (10 < *(byte *)0x125) {
    *(undefined2 *)0xc62 = 1;
  }
  local_278 = 0;
  do {
    uVar9 = *(undefined2 *)0x9548;
    uVar8 = *(undefined2 *)0x954a;
    iVar3 = local_278 * 4;
    *(undefined2 *)(iVar3 + 0xc64) = uVar9;
    *(undefined2 *)(iVar3 + 0xc66) = uVar8;
    *(undefined2 *)(iVar3 + 0xc78) = uVar9;
    *(undefined2 *)(iVar3 + 0xc7a) = uVar8;
    *(undefined2 *)(iVar3 + 0xc8c) = uVar9;
    *(undefined2 *)(iVar3 + 0xc8e) = uVar8;
    local_278 = local_278 + 1;
  } while (local_278 < 5);
  if (*(int *)0xa62 == 0x1b) {
    local_278 = 1;
    do {
      local_2e8 = local_278 * 10;
      if (local_278 < 2) {
        local_2e8 = 0x14;
      }
      if (local_278 == 2) {
        local_2e8 = 0x19;
      }
      *(int *)(local_278 * 2 + 0x182) = local_2e8;
      *(int *)(local_278 * 2 + 0x198) = local_2e8;
      local_2e8 = 10;
      if (local_278 < 6) {
        local_2e8 = 5;
      }
      if (local_278 < 3) {
        local_2e8 = 0;
      }
      *(undefined2 *)(local_278 * 2 + 0x1ae) = local_2e8;
      local_278 = local_278 + 1;
    } while (local_278 < 0xb);
  }
  local_2de = 0;
  do {
    *(undefined1 *)(local_2de + -0x3e90) = 1;
    *(undefined1 *)(local_2de + -0x4c78) = 1;
    local_2de = local_2de + 1;
  } while (local_2de < 0x100);
  local_2de = 0;
  do {
    *(undefined1 *)(local_2de + 0xb6c) = 1;
    *(undefined1 *)(local_2de + 0xb7c) = 1;
    local_2de = local_2de + 1;
  } while (local_2de < 0x10);
  piStack_4 = (int *)0x2728;
  piStack_6 = (int *)local_3e;
  puStack_8 = (undefined1 *)0x22b2;
  piVar4 = (int *)0x22b2;
  puStack_a = (undefined1 *)0xf799;
  iVar3 = FUN_21f2_1348();
  *(int *)0xd70 = iVar3;
  if (iVar3 == 0) {
    if (param_2 == 0) {
      piStack_4 = (int *)0x568;
      piStack_6 = (int *)0x272b;
      puStack_8 = local_7c;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0xf909;
      FUN_21f2_3454();
      piStack_4 = (int *)local_7c;
      piStack_6 = (int *)0x22b2;
      piVar4 = (int *)0x11f2;
      puStack_8 = (undefined1 *)0xf915;
      FUN_13bf_0a03();
      goto LAB_3ab8_4d96;
    }
LAB_3ab8_4c2d:
    *(undefined2 *)0xd70 = 0;
    piStack_6 = (int *)0xf7b8;
    piStack_4 = piVar4;
    func_0x0002504e();
  }
  else {
LAB_3ab8_4d96:
    piStack_4 = (int *)0x0;
    piStack_6 = (int *)0x8000;
    pcVar1 = (code *)swi(0x3f);
    iVar3 = (*pcVar1)();
    piVar6 = piVar4;
    if (iVar3 != 0) {
      if (param_2 != 0) goto LAB_3ab8_4c2d;
      piStack_4 = (int *)0x6b0;
      piVar6 = (int *)0x11f2;
      puStack_8 = (undefined1 *)0xf93a;
      piStack_6 = piVar4;
      FUN_13bf_0a03();
    }
    *(undefined2 *)0x14e = 0;
    *(undefined2 *)0x14c = 0;
    *(undefined2 *)0x14a = 0;
    *(undefined2 *)0x148 = 0;
    uVar9 = *(undefined2 *)0xbefc;
    *(undefined2 *)0xc0ac = *(undefined2 *)0xbefa;
    *(undefined2 *)0xc0ae = uVar9;
    piStack_6 = (int *)0xf968;
    piStack_4 = piVar6;
    func_0x000297e6();
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf971;
    FUN_28b3_0e3b();
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf985;
    FUN_28b3_0d8b();
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf98a;
    FUN_28b3_1172();
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf993;
    FUN_28b3_0e53();
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf99c;
    func_0x000297e6();
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xf9a5;
    func_0x00029b85();
    piStack_4 = (int *)0x22b2;
    uVar7 = 0x22b2;
    piStack_6 = (int *)0xf9ae;
    FUN_28b3_0e53();
    *(undefined2 *)0x154 = 0;
    *(undefined2 *)0x152 = 0;
    *(undefined2 *)0x150 = 0;
    *(undefined2 *)0xb200 = 0;
    *(undefined2 *)0xb1f8 = 0;
    *(undefined2 *)0xb1fe = 0;
    *(undefined2 *)0xb202 = 0;
    uVar9 = *(undefined2 *)0xbe90;
    uVar8 = *(undefined2 *)0xbe92;
    *(undefined2 *)0xb1fa = uVar9;
    *(undefined2 *)0xb1fc = uVar8;
    *(undefined2 *)0xb1f4 = uVar9;
    *(undefined2 *)0xb1f6 = uVar8;
    *(undefined2 *)0xb1ec = uVar9;
    *(undefined2 *)0xb1ee = uVar8;
    *(undefined2 *)0xb1f0 = uVar9;
    *(undefined2 *)0xb1f2 = uVar8;
    if ((param_2 == 0) || (param_2 == 2)) {
      piStack_4 = (int *)0x22b2;
      uVar7 = 0x885;
      piStack_6 = (int *)0xf9f9;
      func_0x0000ac64();
      *(undefined2 *)0xc22 = 2;
    }
    piStack_6 = (int *)0xfa04;
    piStack_4 = (int *)uVar7;
    FUN_1885_333f();
    *(undefined2 *)0xbc0 = 1;
    *(undefined2 *)0xc08 = 1;
    puVar5 = (undefined1 *)0x1bb4;
    while( true ) {
      piStack_4 = &iStack_274;
      piStack_6 = (int *)(uint)*(byte *)0xd74;
      puStack_8 = (undefined1 *)*(int *)0xd70;
      puStack_c = (undefined1 *)0xfa20;
      puStack_a = puVar5;
      iVar3 = FUN_3ab8_0184();
      if (iVar3 != 0) break;
      if (iStack_274 == 0) {
        piStack_4 = (int *)0x2733;
        piStack_6 = (int *)auStack_272;
        puStack_a = (undefined1 *)0xfa4b;
        puStack_8 = puVar5;
        iVar3 = FUN_21f2_2d98();
        puVar5 = (undefined1 *)0x22b2;
        if (iVar3 == 0) {
          piStack_4 = &iStack_274;
          piStack_6 = (int *)(uint)*(byte *)0xd74;
          puStack_8 = (undefined1 *)*(int *)0xd70;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xfa67;
          iVar3 = FUN_3ab8_0184();
          if (iVar3 != 0) goto LAB_3ab8_4cee;
          if (iStack_274 == 2) {
            piStack_4 = (int *)0x273b;
            piStack_6 = (int *)auStack_272;
            puStack_8 = (undefined1 *)0x22b2;
            puVar5 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0xfa89;
            iVar3 = FUN_21f2_2d98();
            if (iVar3 == 0) {
              piStack_4 = &iStack_274;
              piStack_6 = (int *)0x22b2;
              puStack_8 = (undefined1 *)0xfa98;
              iVar3 = FUN_3ab8_1805();
              if (iVar3 != 0) break;
            }
            piStack_4 = (int *)0x2742;
            piStack_6 = (int *)auStack_272;
            puStack_8 = (undefined1 *)0x22b2;
            puVar5 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0xfaab;
            iVar3 = FUN_21f2_2d98();
            if (iVar3 == 0) {
              piStack_4 = &iStack_274;
              piStack_6 = (int *)0x22b2;
              puStack_8 = (undefined1 *)0xfaba;
              iVar3 = FUN_3ab8_22fe();
              if (iVar3 != 0) break;
            }
            piStack_4 = (int *)0x2749;
            piStack_6 = (int *)auStack_272;
            puStack_8 = (undefined1 *)0x22b2;
            puVar5 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0xfad0;
            iVar3 = FUN_21f2_2d98();
            if (iVar3 == 0) {
              piStack_4 = &iStack_274;
              piStack_6 = (int *)0x22b2;
              puStack_8 = (undefined1 *)0xfadf;
              iVar3 = FUN_3ab8_23e5();
              if (iVar3 != 0) break;
            }
            piStack_4 = (int *)0x2750;
            piStack_6 = (int *)auStack_272;
            puStack_8 = (undefined1 *)0x22b2;
            puVar5 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0xfaf5;
            iVar3 = FUN_21f2_2d98();
            if (iVar3 == 0) {
              piStack_4 = &iStack_274;
              piStack_6 = (int *)0x22b2;
              puStack_8 = (undefined1 *)0xfb04;
              iVar3 = FUN_3ab8_2b8b();
              if (iVar3 != 0) break;
            }
          }
        }
      }
      if (iStack_274 == 0) {
        piStack_4 = (int *)0x2759;
        piStack_6 = (int *)auStack_272;
        puStack_a = (undefined1 *)0xfb24;
        puStack_8 = puVar5;
        iVar3 = FUN_21f2_2d98();
        puVar5 = (undefined1 *)0x22b2;
        if (iVar3 == 0) {
          *(undefined2 *)0xd70 = 0;
          piStack_4 = (int *)0x22b2;
          uVar9 = 0x22b2;
          piStack_6 = (int *)0xfb35;
          func_0x0002504e();
          if (*(int *)0xa62 == 0x1b) {
            piStack_4 = (int *)0x22b2;
            piStack_6 = (int *)0xfb40;
            FUN_3ab8_4030();
          }
          if (param_2 != 1) {
            if (((*(int *)0xa62 != 0x1b) && (*(char *)0x7e != '\0')) && (*(byte *)0x7e < 10)) {
              *(char *)0x7e = *(char *)0x7e + '\n';
            }
            if (*(byte *)0xb782 < 4) {
              piStack_4 = (int *)0x2;
              piStack_6 = (int *)0x22b2;
              puStack_8 = (undefined1 *)0xfb73;
              func_0x0000f2d3();
              piStack_4 = (int *)0x2;
              piStack_6 = (int *)0x14;
              puStack_8 = (undefined1 *)0xdef;
              puStack_a = (undefined1 *)0xfb81;
              FUN_1000_0599();
              piStack_4 = (int *)0xdef;
              piStack_6 = (int *)0xfb88;
              func_0x00010526();
              piStack_4 = (int *)0xdef;
              piStack_6 = (int *)0xfb8d;
              func_0x0000a7c5();
              piStack_4 = (int *)0x885;
              piStack_6 = (int *)0xfb92;
              func_0x0000abfa();
              piStack_4 = (int *)*(undefined2 *)0xcb4;
              piStack_6 = (int *)*(undefined2 *)0xcb2;
              puStack_8 = (undefined1 *)0x0;
              puStack_a = (undefined1 *)0x3;
              puStack_c = (undefined1 *)0x885;
              puStack_e = (undefined1 *)0xfba6;
              func_0x0000f2cb();
              piStack_4 = (int *)0xdef;
              uVar9 = 0x885;
              piStack_6 = (int *)0xfbae;
              func_0x0000a799();
            }
            else {
              piStack_4 = (int *)0x0;
              pcVar1 = (code *)swi(0x3f);
              (*pcVar1)();
            }
            *(undefined2 *)0xbc0 = 1;
            piStack_4 = (int *)0x1;
            piStack_6 = (int *)0x1;
            puStack_8 = (undefined1 *)0x1;
            puStack_a = (undefined1 *)0x1;
            *(undefined2 *)0xc08 = 0;
            puStack_c = (undefined1 *)0x0;
            uVar8 = 0x1bb4;
            uStack_10 = 0xfbce;
            puStack_e = (undefined1 *)uVar9;
            FUN_1885_3a20();
            if (1 < *(byte *)0x132) {
              piStack_4 = (int *)local_3e;
              piStack_6 = (int *)auStack_2dc;
              puStack_8 = (undefined1 *)0x1bb4;
              puStack_a = (undefined1 *)0xfbe6;
              func_0x00024c86();
              piStack_4 = (int *)auStack_2dc;
              piStack_6 = (int *)0x22b2;
              puStack_8 = (undefined1 *)0xfbf6;
              puVar5 = (undefined1 *)FUN_21f2_3be6();
              if (puVar5 != (undefined1 *)0x0) {
                *puVar5 = 0;
              }
              piStack_4 = (int *)auStack_2dc;
              piStack_6 = (int *)0x15;
              puStack_8 = (undefined1 *)0x22b2;
              uVar8 = 0x11f2;
              puStack_a = (undefined1 *)0xfc13;
              FUN_10ad_161c();
            }
            piStack_4 = (int *)0xd;
            piStack_6 = (int *)0x5c;
            puStack_8 = local_3e;
            puStack_c = (undefined1 *)0xfc26;
            puStack_a = (undefined1 *)uVar8;
            iVar3 = FUN_21f2_3be6();
            if (iVar3 == 0) {
              puStack_8 = (undefined1 *)0x3a;
            }
            else {
              puStack_8 = (undefined1 *)0x5c;
            }
            puStack_a = local_3e;
            puStack_c = (undefined1 *)0x22b2;
            puStack_e = (undefined1 *)0xfc3e;
            iVar3 = FUN_21f2_3be6();
            puStack_a = (undefined1 *)(iVar3 + 1);
            puStack_c = (undefined1 *)0xcf6;
            puStack_e = (undefined1 *)0x22b2;
            uStack_10 = 0xfc4b;
            FUN_21f2_2de0();
            puStack_8 = (undefined1 *)0x2e;
            puStack_a = (undefined1 *)0xcf6;
            puStack_c = (undefined1 *)0x22b2;
            puStack_e = (undefined1 *)0xfc5b;
            puStack_276 = (undefined1 *)FUN_21f2_3b7a();
            if (puStack_276 != (undefined1 *)0x0) {
              *puStack_276 = 0;
            }
          }
          FUN_3ab8_518a();
          return;
        }
      }
    }
    if (param_2 == 0) {
      *(undefined2 *)0xc22 = 1;
      piStack_4 = (int *)0xffff;
      piStack_6 = (int *)0x2;
      puStack_8 = (undefined1 *)0x2;
      puStack_a = (undefined1 *)0x14;
      puStack_c = (undefined1 *)0x370;
      uStack_10 = 0xfc8c;
      puStack_e = puVar5;
      FUN_1000_02b5();
      piStack_4 = (int *)0x1;
      piStack_6 = (int *)0xdef;
      uVar9 = 0x11f2;
      puStack_8 = (undefined1 *)0xfc98;
      func_0x000121f9();
      if (*(byte *)0xb782 < 4) {
        piStack_4 = (int *)0x2;
        piStack_6 = (int *)0x11f2;
        puStack_8 = (undefined1 *)0xfca9;
        func_0x0000f2d3();
        piStack_4 = (int *)0x2;
        piStack_6 = (int *)0x14;
        puStack_8 = (undefined1 *)0xdef;
        puStack_a = (undefined1 *)0xfcb7;
        FUN_1000_0599();
        piStack_4 = (int *)0xdef;
        piStack_6 = (int *)0xfcbe;
        func_0x00010526();
        piStack_4 = (int *)0xdef;
        piStack_6 = (int *)0xfcc3;
        func_0x0000a7c5();
        piStack_4 = (int *)0x885;
        piStack_6 = (int *)0xfcc8;
        func_0x0000abfa();
        piStack_4 = (int *)*(undefined2 *)0xcb4;
        piStack_6 = (int *)*(undefined2 *)0xcb2;
        puStack_8 = (undefined1 *)0x0;
        puStack_a = (undefined1 *)0x3;
        puStack_c = (undefined1 *)0x885;
        puStack_e = (undefined1 *)0xfcdc;
        func_0x0000f2cb();
        piStack_4 = (int *)0xdef;
        uVar9 = 0x885;
        piStack_6 = (int *)0xfce4;
        func_0x0000a799();
      }
      else {
        piStack_4 = (int *)0x0;
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
      }
      *(undefined2 *)0xbc0 = 1;
      piStack_4 = (int *)0x1;
      piStack_6 = (int *)0x1;
      puStack_8 = (undefined1 *)0x1;
      puStack_a = (undefined1 *)0x1;
      *(undefined2 *)0xc08 = 0;
      puStack_c = (undefined1 *)0x0;
      uStack_10 = 0xfd04;
      puStack_e = (undefined1 *)uVar9;
      FUN_1885_3a20();
    }
  }
LAB_3ab8_4cee:
  FUN_3ab8_518a();
  return;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  200 bytes, 1 callers */

void FUN_3ab8_4fbd(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_3ab8_4030();
  if (*(int *)(unaff_BP + 6) != 1) {
    if (((*(int *)0xa62 != 0x1b) && (*(char *)0x7e != '\0')) && (*(byte *)0x7e < 10)) {
      *(char *)0x7e = *(char *)0x7e + '\n';
    }
    if (*(byte *)0xb782 < 4) {
      func_0x0000f2d3();
      FUN_1000_0599(0xdef,0x14);
      func_0x00010526();
      func_0x0000a7c5();
      func_0x0000abfa();
      func_0x0000f2cb(0x885,3,0,*(undefined2 *)0xcb2);
      unaff_CS = 0x885;
      func_0x0000a799();
    }
    else {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    *(undefined2 *)0xbc0 = 1;
    *(undefined2 *)0xc08 = 0;
    uVar4 = 0x1bb4;
    FUN_1885_3a20(unaff_CS,0,1,1,1);
    if (1 < *(byte *)0x132) {
      func_0x00024c86(0x1bb4,unaff_BP + -0x2da);
      puVar2 = (undefined1 *)FUN_21f2_3be6(0x22b2);
      *(undefined2 *)(unaff_BP + -0x2ea) = puVar2;
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
      }
      uVar4 = 0x11f2;
      FUN_10ad_161c(0x15);
    }
    iVar3 = FUN_21f2_3be6(uVar4,unaff_BP + -0x3c,0x5c);
    if (iVar3 == 0) {
      uVar4 = 0x3a;
    }
    else {
      uVar4 = 0x5c;
    }
    iVar3 = FUN_21f2_3be6(0x22b2,unaff_BP + -0x3c,uVar4);
    FUN_21f2_2de0(0x22b2,0xcf6,iVar3 + 1);
    puVar2 = (undefined1 *)FUN_21f2_3b7a(0x22b2,0xcf6,0x2e);
    *(undefined2 *)(unaff_BP + -0x274) = puVar2;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
    }
  }
  FUN_3ab8_518a();
  return;
}



/* 3ab8:5089  FUN_3ab8_5089  103 bytes, 2 callers */

void FUN_3ab8_5089(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_10ad_161c(0x15);
  iVar1 = FUN_21f2_3be6(0x11f2,unaff_BP + -0x3c,0x5c,0xd);
  if (iVar1 == 0) {
    uVar2 = 0x3a;
  }
  else {
    uVar2 = 0x5c;
  }
  iVar1 = FUN_21f2_3be6(0x22b2,unaff_BP + -0x3c,uVar2);
  FUN_21f2_2de0(0x22b2,0xcf6,iVar1 + 1);
  puVar3 = (undefined1 *)FUN_21f2_3b7a(0x22b2,0xcf6,0x2e);
  *(undefined2 *)(unaff_BP + -0x274) = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  FUN_3ab8_518a();
  return;
}



/* 3ab8:518a  FUN_3ab8_518a  4 bytes, 2 callers */

void __cdecl16far FUN_3ab8_518a(void)

{
  return;
}



/* 3ab8:518e  FUN_3ab8_518e  1518 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far FUN_3ab8_518e(void)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  uint local_78;
  uint local_76;
  uint local_70;
  uint local_6e;
  uint local_6c;
  uint local_6a;
  uint local_68;
  uint local_66;
  uint local_64;
  uint local_5e;
  uint local_5c;
  uint local_56;
  uint local_54;
  uint local_52;
  uint local_50;
  uint local_4e;
  uint local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  uint local_46;
  uint local_44;
  uint local_3a;
  undefined2 local_38;
  uint local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  uint local_20;
  uint local_1c;
  uint local_1a;
  uint local_14;
  uint local_12;
  undefined2 local_e;
  undefined2 local_c;
  uint *local_a;
  
  FUN_21f2_0ebc();
  local_a = (uint *)0xfd23;
  func_0x000297e6();
  local_a = (uint *)0xfd2b;
  func_0x00029b6d();
  local_a = (uint *)0xfd33;
  func_0x00029bb5();
  local_a = (uint *)0xfd3b;
  FUN_28b3_0e53();
  local_a = (uint *)0xfd43;
  func_0x000297e6();
  local_a = (uint *)0xfd4b;
  func_0x00029b6d();
  local_a = (uint *)0xfd53;
  func_0x00029bb5();
  local_a = (uint *)0xfd5b;
  FUN_28b3_0e53();
  local_46 = local_66;
  local_44 = local_64;
  if ((int)local_64 < 0) {
    local_46 = -local_66;
    local_44 = -((local_64 & 0x7fff) + (uint)(local_66 != 0));
  }
  local_4e = local_70;
  local_4c = local_6e;
  if ((int)local_6e < 0) {
    local_4e = -local_70;
    local_4c = -((local_6e & 0x7fff) + (uint)(local_70 != 0));
  }
  if (*(int *)0xbc6 < 0) {
    uVar4 = -*(int *)0xbc4;
    iVar9 = -((*(uint *)0xbc6 & 0x7fff) + (uint)(*(int *)0xbc4 != 0));
  }
  else {
    uVar4 = *(uint *)0xbc4;
    iVar9 = *(int *)0xbc6;
  }
  if ((iVar9 < (int)local_44) ||
     ((((iVar9 <= (int)local_44 && (uVar4 <= local_46)) || (iVar9 < (int)local_4c)) ||
      ((iVar9 <= (int)local_4c && (uVar4 <= local_4e)))))) {
    if (*(int *)0xbce < 0) {
      uVar6 = -*(int *)0xbcc;
      iVar10 = -((*(uint *)0xbce & 0x7fff) + (uint)(*(int *)0xbcc != 0));
    }
    else {
      uVar6 = *(uint *)0xbcc;
      iVar10 = *(int *)0xbce;
    }
    if (((((int)local_44 < iVar10) || (((int)local_44 <= iVar10 && (local_46 <= uVar6)))) ||
        ((int)local_4c < iVar10)) || (((int)local_4c <= iVar10 && (local_4e <= uVar6)))) {
      local_a = (uint *)0xfe2e;
      func_0x000297e6();
      local_a = (uint *)0xfe36;
      func_0x00029b6d();
      local_a = (uint *)0xfe3e;
      func_0x00029bb5();
      local_a = (uint *)0xfe46;
      FUN_28b3_0e53();
      local_a = (uint *)0xfe4e;
      func_0x000297e6();
      local_a = (uint *)0xfe56;
      func_0x00029b6d();
      local_a = (uint *)0xfe5e;
      func_0x00029bb5();
      local_a = (uint *)0xfe66;
      FUN_28b3_0e53();
      if ((int)local_6a < 0) {
        bVar15 = local_6c != 0;
        local_6c = -local_6c;
        local_6a = -((local_6a & 0x7fff) + (uint)bVar15);
      }
      if ((int)local_76 < 0) {
        bVar15 = local_78 != 0;
        local_78 = -local_78;
        local_76 = -((local_76 & 0x7fff) + (uint)bVar15);
      }
      if (*(int *)0xbd6 < 0) {
        uVar7 = -*(int *)0xbd4;
        iVar11 = -((*(uint *)0xbd6 & 0x7fff) + (uint)(*(int *)0xbd4 != 0));
      }
      else {
        uVar7 = *(uint *)0xbd4;
        iVar11 = *(int *)0xbd6;
      }
      local_56 = local_78;
      local_54 = local_76;
      local_52 = local_6c;
      local_50 = local_6a;
      if (((iVar11 < (int)local_6a) ||
          (((iVar11 <= (int)local_6a && (uVar7 <= local_6c)) || (iVar11 < (int)local_76)))) ||
         ((iVar11 <= (int)local_76 && (uVar7 <= local_78)))) {
        if (*(int *)0xbde < 0) {
          uVar8 = -*(int *)0xbdc;
          iVar12 = -((*(uint *)0xbde & 0x7fff) + (uint)(*(int *)0xbdc != 0));
        }
        else {
          uVar8 = *(uint *)0xbdc;
          iVar12 = *(int *)0xbde;
        }
        if ((((int)local_6a < iVar12) || (((int)local_6a <= iVar12 && (local_6c <= uVar8)))) ||
           (((int)local_76 < iVar12 || (((int)local_76 <= iVar12 && (local_78 <= uVar8)))))) {
          local_a = (uint *)CONCAT11(local_a._1_1_,*(undefined1 *)0xb310);
          local_c = CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
          local_1c = local_66;
          local_1a = local_64;
          local_14 = local_70;
          local_12 = local_6e;
          if ((int)local_44 < iVar9) {
            uVar5 = FUN_2bb4_4502();
            return uVar5;
          }
          if (((int)local_44 <= iVar9) && (local_46 < uVar4)) {
            uVar5 = FUN_2bb4_4502();
            return uVar5;
          }
          if ((int)local_4c < iVar9) {
            uVar5 = FUN_2bb4_4502();
            return uVar5;
          }
          if (((iVar9 < (int)local_4c) || (uVar4 <= local_4e)) && ((int)local_44 <= iVar10)) {
            if (((iVar10 <= (int)local_44) && (uVar6 < local_46)) || (iVar10 < (int)local_4c)) {
              uVar5 = FUN_2bb4_4502();
              return uVar5;
            }
            if (((((iVar10 <= (int)local_4c) && (uVar6 < local_4e)) ||
                 ((((int)local_6a < iVar11 ||
                   (((((int)local_6a <= iVar11 && (local_6c < uVar7)) || ((int)local_76 < iVar11))
                    || (((int)local_76 <= iVar11 && (local_78 < uVar7)))))) ||
                  (iVar12 < (int)local_6a)))) || ((iVar12 <= (int)local_6a && (uVar8 < local_6c))))
               || ((iVar12 < (int)local_76 || ((iVar12 <= (int)local_76 && (uVar8 < local_78)))))) {
              puVar14 = &local_3a;
              puVar13 = &local_1c;
              for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar3 = puVar14;
                puVar14 = puVar14 + 1;
                puVar2 = puVar13;
                puVar13 = puVar13 + 1;
                *puVar3 = *puVar2;
              }
              for (local_68 = 1; (int)local_68 < 5; local_68 = local_68 + 1) {
                if (local_68 == 1) {
                  local_3a = *(uint *)0xbc4;
                  local_38 = *(undefined2 *)0xbc6;
                  local_36 = *(uint *)0xbd4;
                  local_34 = *(undefined2 *)0xbd6;
                  local_32 = *(undefined2 *)0xbcc;
                  local_30 = *(undefined2 *)0xbce;
                  local_2e = *(undefined2 *)0xbd4;
                  local_2c = *(undefined2 *)0xbd6;
                  local_20 = *(uint *)0x956c;
                  local_4a = *(undefined2 *)0x9548;
                  local_48 = *(undefined2 *)0x954a;
                }
                if (local_68 == 2) {
                  local_36 = *(uint *)0xbd4;
                  local_34 = *(undefined2 *)0xbd6;
                  local_a = (uint *)0xe7;
                  func_0x000297e6();
                  local_a = (uint *)0xef;
                  FUN_28b3_0e3b();
                  local_a = (uint *)0xf7;
                  FUN_28b3_0e53();
                  local_2e = *(undefined2 *)0xbdc;
                  local_2c = *(undefined2 *)0xbde;
                  local_20 = *(uint *)0x9548;
                  local_4a = *(undefined2 *)0x956c;
                  local_48 = *(undefined2 *)0x956e;
                }
                if (local_68 == 3) {
                  local_3a = *(uint *)0xbcc;
                  local_38 = *(undefined2 *)0xbce;
                  local_36 = *(uint *)0xbdc;
                  local_34 = *(undefined2 *)0xbde;
                  local_32 = *(undefined2 *)0xbc4;
                  local_30 = *(undefined2 *)0xbc6;
                  local_2e = *(undefined2 *)0xbdc;
                  local_2c = *(undefined2 *)0xbde;
                  local_20 = *(uint *)0x95a8;
                  local_4a = *(undefined2 *)0x9548;
                  local_48 = *(undefined2 *)0x954a;
                }
                uVar16 = local_68 < 4;
                if (local_68 == 4) {
                  local_36 = *(uint *)0xbdc;
                  local_34 = *(undefined2 *)0xbde;
                  local_a = (uint *)0x18e;
                  func_0x000297e6();
                  local_a = (uint *)0x196;
                  FUN_28b3_0e3b();
                  local_a = (uint *)0x19e;
                  FUN_28b3_0e53();
                  local_2e = *(undefined2 *)0xbd4;
                  local_2c = *(undefined2 *)0xbd6;
                  local_20 = *(uint *)0x9548;
                  local_4a = *(undefined2 *)0x95a8;
                  local_48 = *(undefined2 *)0x95aa;
                }
                local_a = (uint *)0x1cd;
                func_0x000297e6();
                local_a = (uint *)0x1d5;
                FUN_28b3_100d();
                local_a = (uint *)0x1dd;
                func_0x00029b6d();
                local_a = (uint *)0x1e5;
                func_0x000297e6();
                local_a = (uint *)0x1ed;
                FUN_28b3_100d();
                local_a = (uint *)0x1f5;
                func_0x00029b6d();
                local_a = (uint *)0x1fa;
                FUN_28b3_1163();
                local_a = (uint *)0x202;
                FUN_28b3_0e3b();
                local_a = (uint *)0x20a;
                FUN_28b3_0ee9();
                local_a = (uint *)0x213;
                func_0x000297e6();
                local_a = (uint *)0x21b;
                func_0x000297e6();
                local_a = (uint *)0x223;
                FUN_28b3_100d();
                local_a = (uint *)0x22b;
                func_0x00029b6d();
                local_a = (uint *)0x233;
                func_0x000297e6();
                local_a = (uint *)0x23b;
                FUN_28b3_100d();
                local_a = (uint *)0x243;
                func_0x00029b6d();
                local_a = (uint *)0x248;
                FUN_28b3_1163();
                local_a = (uint *)0x250;
                FUN_28b3_0e3b();
                local_a = (uint *)0x255;
                FUN_28b3_1181();
                if ((bool)uVar16) {
                  local_a = (uint *)0x260;
                  func_0x000297e6();
                  local_a = (uint *)0x268;
                  func_0x000297e6();
                  local_a = (uint *)0x26d;
                  FUN_28b3_1181();
                  if ((bool)uVar16) {
                    halt_baddata();
                  }
                }
                uVar16 = 0;
                local_a = (uint *)0x27b;
                func_0x000297e6();
                local_a = (uint *)0x283;
                func_0x000297e6();
                local_a = (uint *)0x28b;
                func_0x00029b6d();
                local_a = (uint *)0x290;
                FUN_28b3_1181();
                if ((bool)uVar16) {
                  local_a = &local_5e;
                  puVar13 = &local_20;
                  puVar14 = &local_1c;
                  for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
                    puVar3 = puVar13;
                    puVar13 = puVar13 + 1;
                    puVar2 = puVar14;
                    puVar14 = puVar14 + 1;
                    *puVar3 = *puVar2;
                  }
                  puVar13 = &local_36;
                  puVar14 = &local_3a;
                  for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
                    puVar3 = puVar13;
                    puVar13 = puVar13 + 1;
                    puVar2 = puVar14;
                    puVar14 = puVar14 + 1;
                    *puVar3 = *puVar2;
                  }
                  local_38 = 0x22b2;
                  local_3a = 0x2be;
                  FUN_1def_1921();
                  uVar16 = (undefined1 *)0xffcf < &local_36;
                  local_a = (uint *)0x2ca;
                  func_0x000297e6();
                  local_a = (uint *)0x2d2;
                  func_0x000297e6();
                  local_a = (uint *)0x2d7;
                  FUN_28b3_1181();
                  if ((bool)uVar16) {
                    local_1c = local_5e;
                    local_1a = local_5c;
                  }
                  else {
                    local_14 = local_5e;
                    local_12 = local_5c;
                  }
                }
              }
            }
            puVar13 = &local_1c;
            puVar14 = &local_1c;
            for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar3 = puVar13;
              puVar13 = puVar13 + 1;
              puVar2 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar3 = *puVar2;
            }
            local_20 = 0x1a;
            iVar9 = FUN_17a6_0cba();
            if (iVar9 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            local_a = (uint *)*(undefined2 *)0x148;
            local_c = 0x11f2;
            local_e = 0x31;
            uVar17 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar17 + 0x14);
            *pbVar1 = *pbVar1 | 8;
            return 1;
          }
          uVar5 = FUN_2bb4_4502();
          return uVar5;
        }
      }
    }
  }
  uVar5 = FUN_2bb4_47b7();
  return uVar5;
}



/* 3ab8:577d  FUN_3ab8_577d  997 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_577d(int param_1,undefined2 **param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 **ppuVar5;
  undefined2 **ppuVar6;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 *local_a0;
  undefined2 **local_9e;
  undefined2 *local_9c;
  undefined2 local_9a;
  undefined1 local_98 [100];
  undefined2 *local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  int local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 *local_26;
  undefined2 local_24;
  undefined2 local_22;
  int local_20;
  undefined2 uStack_1e;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_10;
  undefined2 **ppuStack_e;
  undefined2 ***pppuStack_c;
  undefined2 **ppuStack_a;
  undefined2 *local_8;
  undefined2 **local_6;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x3ab8;
  puVar4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0x308;
  FUN_21f2_0ebc();
LAB_3ab8_578d:
  local_4 = param_2;
  local_6 = (undefined2 **)local_98;
  ppuStack_a = (undefined2 **)0x31a;
  local_8 = puVar4;
  func_0x00024c86();
  local_4 = (undefined2 **)0x275d;
  local_6 = (undefined2 **)local_98;
  local_8 = (undefined2 *)0x22b2;
  ppuStack_a = (undefined2 **)0x32a;
  FUN_21f2_2d26();
  local_4 = (undefined2 **)0x2dc;
  local_6 = (undefined2 **)local_98;
  local_8 = (undefined2 *)0x22b2;
  ppuStack_a = (undefined2 **)0x33a;
  FUN_21f2_2d26();
  local_4 = (undefined2 **)0x2f0;
  local_6 = (undefined2 **)local_98;
  local_8 = (undefined2 *)0x22b2;
  ppuStack_a = (undefined2 **)0x34a;
  FUN_21f2_2d26();
  local_4 = (undefined2 **)0x98a;
  local_6 = (undefined2 **)local_98;
  local_8 = (undefined2 *)0x22b2;
  ppuStack_a = (undefined2 **)0x35a;
  FUN_21f2_2d26();
  local_4 = (undefined2 **)0xa2d;
  local_6 = (undefined2 **)local_98;
  local_8 = (undefined2 *)0x22b2;
  ppuStack_a = (undefined2 **)0x36a;
  FUN_21f2_2d26();
  if (param_1 == 0) {
    local_4 = (undefined2 **)0x92e;
    local_6 = (undefined2 **)local_98;
    local_8 = (undefined2 *)0x22b2;
    ppuStack_a = (undefined2 **)0x380;
    FUN_21f2_2d26();
    local_4 = (undefined2 **)0x98a;
  }
  else {
    local_4 = (undefined2 **)0x7e0;
  }
  local_6 = (undefined2 **)local_98;
  local_8 = (undefined2 *)0x22b2;
  ppuStack_a = (undefined2 **)0x395;
  FUN_21f2_2d26();
  ppuVar5 = (undefined2 **)0x22b2;
  do {
    do {
      local_4 = &local_26;
      local_6 = &local_34;
      local_8 = &local_2a;
      ppuStack_a = (undefined2 **)local_98;
      pppuStack_c = (undefined2 ***)0x1;
      uStack_10 = 0x3b1;
      ppuStack_e = ppuVar5;
      local_20 = FUN_1def_0904();
      if (*(int *)0x158 != 0) {
        return 0;
      }
      if (local_20 == -1) {
        return 0xffff;
      }
      if (local_20 == 1) {
        return 0;
      }
      ppuVar5 = (undefined2 **)0x1bb4;
    } while (local_26 == (undefined2 *)0x0);
    local_4 = &local_34;
    local_6 = (undefined2 **)&local_2a;
    local_8 = local_26;
    ppuStack_a = (undefined2 **)0x1bb4;
    ppuVar5 = (undefined2 **)0x11f2;
    pppuStack_c = (undefined2 ***)0x3e6;
    iVar3 = FUN_13bf_1819();
  } while (iVar3 == 0);
  do {
    local_6 = (undefined2 **)0x3f2;
    local_4 = ppuVar5;
    FUN_1885_32fe();
    local_4 = (undefined2 **)0x2e6;
    local_6 = (undefined2 **)0x1bb4;
    local_8 = (undefined2 *)0x3fb;
    func_0x00012276();
    local_4 = (undefined2 **)0x2f0;
    local_6 = (undefined2 **)0x11f2;
    ppuVar6 = (undefined2 **)0x11f2;
    local_8 = (undefined2 *)0x405;
    func_0x00012276();
    local_9e = local_6;
    local_2c = 0;
    while( true ) {
      local_4 = &local_26;
      local_6 = &local_9c;
      local_8 = &local_30;
      ppuStack_a = &local_8;
      pppuStack_c = &local_4;
      ppuVar5 = (undefined2 **)0x3bf;
      uStack_10 = 0x42c;
      ppuStack_e = ppuVar6;
      local_20 = func_0x00006608();
      if (*(int *)0x158 != 0) {
        local_4 = (undefined2 **)0x3bf;
        local_6 = (undefined2 **)0x43e;
        FUN_1885_2ec3();
        return 0;
      }
      if (local_20 == 99) break;
      if (local_20 == -1) {
        local_4 = (undefined2 **)0x3bf;
        puVar4 = (undefined2 *)0x1b6e;
        local_6 = (undefined2 **)0x450;
        FUN_1885_2ec3();
        goto LAB_3ab8_578d;
      }
      ppuVar6 = ppuVar5;
      if (local_26 != (undefined2 *)0x0) {
        local_9e = local_6;
        local_4 = &local_9c;
        local_6 = (undefined2 **)&local_30;
        local_8 = local_26;
        ppuStack_a = (undefined2 **)0x3bf;
        ppuVar6 = (undefined2 **)0x11f2;
        pppuStack_c = (undefined2 ***)0x471;
        iVar3 = FUN_13bf_1819();
        if (iVar3 != 0) {
          local_2c = 1;
        }
      }
      if ((local_9e != local_4) || (local_a0 != local_8)) {
        local_6 = (undefined2 **)0x497;
        local_4 = ppuVar6;
        FUN_1885_2ec3();
        local_4 = (undefined2 **)0x1;
        local_6 = (undefined2 **)0x1b6e;
        local_8 = (undefined2 *)0x4a3;
        func_0x000297e6();
        ppuStack_e = (undefined2 **)0x22b2;
        uStack_10 = 0x4ad;
        func_0x000299d1();
        ppuStack_e = (undefined2 **)0x22b2;
        uStack_10 = 0x4b5;
        func_0x000297e6();
        ppuStack_e = (undefined2 **)0x22b2;
        uStack_10 = 0x4ba;
        func_0x00029d78();
        uStack_16 = 0x22b2;
        uStack_18 = 0x4c4;
        func_0x000299d1();
        uStack_16 = 0x22b2;
        uStack_18 = 0x4cc;
        func_0x000297e6();
        uStack_1e = 0x22b2;
        local_20 = 0x4d6;
        func_0x000299d1();
        uStack_1e = 0x22b2;
        local_20 = 0x4de;
        func_0x000297e6();
        uStack_1e = 0x22b2;
        local_20 = 0x4e3;
        func_0x00029d78();
        local_26 = (undefined2 *)0x22b2;
        local_28 = 0x4ed;
        func_0x000299d1();
        local_26 = (undefined2 *)0x22b2;
        local_28 = 0x4f2;
        FUN_1def_029f();
        local_4 = (undefined2 **)0x1;
        local_6 = (undefined2 **)0x1bb4;
        local_8 = (undefined2 *)0x502;
        func_0x000297e6();
        local_6 = (undefined2 **)0x22b2;
        local_8 = (undefined2 *)0x507;
        func_0x00029d78();
        ppuStack_e = (undefined2 **)0x22b2;
        uStack_10 = 0x511;
        func_0x000299d1();
        ppuStack_e = (undefined2 **)0x22b2;
        uStack_10 = 0x519;
        func_0x000297e6();
        uStack_16 = 0x22b2;
        uStack_18 = 0x523;
        func_0x000299d1();
        uStack_16 = 0x22b2;
        uStack_18 = 0x52b;
        func_0x000297e6();
        uStack_16 = 0x22b2;
        uStack_18 = 0x530;
        func_0x00029d78();
        uStack_1e = 0x22b2;
        local_20 = 0x53a;
        func_0x000299d1();
        uStack_1e = 0x22b2;
        local_20 = 0x542;
        func_0x000297e6();
        local_26 = (undefined2 *)0x22b2;
        local_28 = 0x54c;
        func_0x000299d1();
        local_26 = (undefined2 *)0x22b2;
        local_28 = 0x551;
        FUN_1def_029f();
        local_4 = (undefined2 **)0x1;
        local_6 = (undefined2 **)0x1bb4;
        local_8 = (undefined2 *)0x561;
        func_0x000297e6();
        ppuStack_e = (undefined2 **)0x22b2;
        uStack_10 = 0x56b;
        func_0x000299d1();
        ppuStack_e = (undefined2 **)0x22b2;
        uStack_10 = 0x573;
        func_0x000297e6();
        ppuStack_e = (undefined2 **)0x22b2;
        uStack_10 = 0x578;
        func_0x00029d78();
        uStack_16 = 0x22b2;
        uStack_18 = 0x582;
        func_0x000299d1();
        uStack_16 = 0x22b2;
        uStack_18 = 0x58b;
        func_0x000297e6();
        uStack_1e = 0x22b2;
        local_20 = 0x595;
        func_0x000299d1();
        uStack_1e = 0x22b2;
        local_20 = 0x59d;
        func_0x000297e6();
        uStack_1e = 0x22b2;
        local_20 = 0x5a2;
        func_0x00029d78();
        local_26 = (undefined2 *)0x22b2;
        local_28 = 0x5ac;
        func_0x000299d1();
        local_26 = (undefined2 *)0x22b2;
        local_28 = 0x5b1;
        FUN_1def_029f();
        local_4 = (undefined2 **)0x1;
        local_6 = (undefined2 **)0x1bb4;
        local_8 = (undefined2 *)0x5c0;
        func_0x000297e6();
        local_6 = (undefined2 **)0x22b2;
        local_8 = (undefined2 *)0x5c5;
        func_0x00029d78();
        ppuStack_e = (undefined2 **)0x22b2;
        uStack_10 = 0x5cf;
        func_0x000299d1();
        ppuStack_e = (undefined2 **)0x22b2;
        uStack_10 = 0x5d7;
        func_0x000297e6();
        uStack_16 = 0x22b2;
        uStack_18 = 0x5e1;
        func_0x000299d1();
        uStack_16 = 0x22b2;
        uStack_18 = 0x5ea;
        func_0x000297e6();
        uStack_16 = 0x22b2;
        uStack_18 = 0x5ef;
        func_0x00029d78();
        uStack_1e = 0x22b2;
        local_20 = 0x5f9;
        func_0x000299d1();
        uStack_1e = 0x22b2;
        local_20 = 0x601;
        func_0x000297e6();
        local_26 = (undefined2 *)0x22b2;
        local_28 = 0x60b;
        func_0x000299d1();
        local_26 = (undefined2 *)0x22b2;
        ppuVar6 = (undefined2 **)0x1bb4;
        local_28 = 0x610;
        FUN_1def_029f();
        local_9e = local_4;
        local_a0 = local_8;
        uVar7 = 0;
        uVar8 = local_2c == 0;
        if (!(bool)uVar8) {
          local_4 = (undefined2 **)0x1bb4;
          local_6 = (undefined2 **)0x632;
          func_0x000297e6();
          local_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 **)0x63a;
          func_0x000297e6();
          local_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 **)0x63f;
          FUN_28b3_1181();
          uVar2 = local_28;
          uVar1 = local_2a;
          if ((bool)uVar7) {
            local_24 = local_2a;
            local_22 = local_28;
            local_2a = local_30;
            local_28 = local_2e;
            local_30 = uVar1;
            local_2e = uVar2;
          }
          local_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 **)0x66e;
          func_0x000297e6();
          local_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 **)0x676;
          func_0x000297e6();
          local_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 **)0x67b;
          FUN_28b3_1181();
          uVar1 = local_32;
          puVar4 = local_34;
          if (!(bool)uVar7 && !(bool)uVar8) {
            local_34 = local_9c;
            local_32 = local_9a;
            local_9c = puVar4;
            local_9a = uVar1;
          }
          *(undefined2 *)0xbc4 = local_2a;
          *(undefined2 *)0xbc6 = local_28;
          *(undefined2 *)0xbd4 = local_34;
          *(undefined2 *)0xbd6 = local_32;
          *(undefined2 *)0xbcc = local_30;
          *(undefined2 *)0xbce = local_2e;
          *(undefined2 *)0xbdc = local_9c;
          *(undefined2 *)0xbde = local_9a;
          return 1;
        }
      }
    }
  } while( true );
}



/* 3ab8:5b62  FUN_3ab8_5b62  30 bytes, 4 callers */

void __cdecl16far FUN_3ab8_5b62(undefined2 param_1,undefined2 param_2)

{
  FUN_21f2_0ebc();
  func_0x000253ce(0x22b2,param_1,0x275f,param_2);
  return;
}



/* 3ab8:5b80  FUN_3ab8_5b80  33 bytes, 2 callers */

void __cdecl16far FUN_3ab8_5b80(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_21f2_0ebc();
  func_0x000253ce(0x22b2,param_1,0x2762,param_2,param_3);
  return;
}



/* 3ab8:5ba1  FUN_3ab8_5ba1  42 bytes, 2 callers */

void __cdecl16far
FUN_3ab8_5ba1(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  FUN_21f2_0ebc();
  func_0x000253ce(0x22b2,param_1,0x2767,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* 3ab8:5bcb  FUN_3ab8_5bcb  51 bytes, 1 callers */

void __cdecl16far FUN_3ab8_5bcb(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  iVar1 = func_0x00024ce4(0x22b2,param_1);
  *(undefined1 *)(param_1 + iVar1 + -1) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_10ad_20e9(0x22b2,param_1,*(undefined2 *)0xb310);
  return;
}



/* 3ab8:5bfe  FUN_3ab8_5bfe  65 bytes, 1 callers */

void __cdecl16far FUN_3ab8_5bfe(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  iVar1 = func_0x00024ce4(0x22b2,param_1);
  *(undefined1 *)(param_1 + iVar1 + -1) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar2 = (int)*(uint *)0xb310 >> 0xf;
  FUN_12c1_0025(param_1,((int)((*(uint *)0xb310 ^ uVar2) - uVar2) >> 4 ^ uVar2) - uVar2);
  return;
}



/* 3ab8:5c3f  FUN_3ab8_5c3f  570 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_5c3f(int param_1,int param_2,undefined2 *param_3,undefined2 param_4,undefined2 *param_5)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *****pppppuVar4;
  uint uVar5;
  undefined2 unaff_DS;
  undefined2 ***local_a;
  int local_8;
  undefined2 *****local_6;
  
  local_6 = (undefined2 *****)0x7ca;
  FUN_21f2_0ebc();
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 == 0x79) {
    if (*(char *)(param_1 + 2) == 'n') {
      local_6 = (undefined2 *****)(param_1 + 3);
      local_8 = 0x22b2;
      local_a = (undefined2 ***)0x8e9;
      FUN_3ab8_5bcb();
    }
    else {
      local_6 = (undefined2 *****)&local_a;
      local_8 = 0x2775;
      local_a = (undefined2 ***)(param_1 + 2);
      iVar3 = func_0x000253ce(0x22b2);
      if (((0 < iVar3) && (-1 < (int)local_a)) && ((int)local_a < 0x10)) {
        uVar5 = (int)*(uint *)0xb310 >> 0xf;
        pppppuVar4 = (undefined2 *****)
                     (local_a +
                     (((int)((*(uint *)0xb310 ^ uVar5) - uVar5) >> 4 ^ uVar5) - uVar5) * 8);
        local_8 = 0x22b2;
        local_a = (undefined2 ***)0x948;
        local_6 = pppppuVar4;
        iVar3 = func_0x00008854();
        if (iVar3 == 0) {
          *(int *)0xb310 = (int)pppppuVar4;
          *(undefined1 *)(pppppuVar4 + -0x1f48) = 1;
          *(undefined1 *)(pppppuVar4 + -0x263c) = 1;
          *(undefined1 *)(local_8 + 0xb8e) = (char)pppppuVar4;
        }
      }
    }
  }
  else if (bVar1 < 0x7a) {
    if (bVar1 == 99) {
      local_6 = &local_6;
      local_8 = param_1 + 2;
      local_a = (undefined2 ***)0x22b2;
      iVar3 = FUN_3ab8_5b62();
      if (iVar3 != 0) {
        local_6 = (undefined2 *****)0x22b2;
        local_8 = 0x9ce;
        func_0x000297e6();
        local_6 = (undefined2 *****)0x22b2;
        local_8 = 0x9d3;
        func_0x00029d78();
        local_6 = (undefined2 *****)0x22b2;
        local_8 = 0x9dc;
        func_0x00029c74();
        local_6 = (undefined2 *****)0x22b2;
        local_8 = 0x9e1;
        iVar3 = FUN_28b3_0f51();
        if ((0 < iVar3) && (iVar3 < 7)) {
          *(int *)0xa6a = iVar3;
        }
      }
    }
    else if (bVar1 == 0x67) {
      if (*(char *)(param_1 + 2) == 'n') {
        local_6 = (undefined2 *****)(param_1 + 3);
        local_8 = 0x22b2;
        local_a = (undefined2 ***)0x803;
        FUN_3ab8_5bfe();
      }
      else {
        local_6 = (undefined2 *****)&local_a;
        local_8 = 0x2772;
        local_a = (undefined2 ***)(param_1 + 2);
        iVar3 = func_0x000253ce(0x22b2);
        if (((0 < iVar3) && (-1 < (int)local_a)) && ((int)local_a < 0x10)) {
          pppppuVar4 = (undefined2 *****)(*(int *)0xb310 % 0x10 + (int)local_a * 0x10);
          local_8 = 0x22b2;
          local_a = (undefined2 ***)0x854;
          local_6 = pppppuVar4;
          iVar3 = func_0x00008854();
          if (iVar3 == 0) {
            *(int *)0xb310 = (int)pppppuVar4;
            *(undefined1 *)(pppppuVar4 + -0x1f48) = 1;
            *(undefined1 *)(pppppuVar4 + -0x263c) = 1;
            *(undefined1 *)(local_8 + 0xb7c) = 1;
            *(undefined1 *)(local_8 + 0xb6c) = 1;
            local_6 = (undefined2 *****)0x885;
            local_8 = 0x882;
            func_0x000297e6();
            local_6 = (undefined2 *****)0x22b2;
            local_8 = 0x88b;
            FUN_28b3_0e3b();
            local_6 = (undefined2 *****)0x22b2;
            local_8 = 0x893;
            FUN_28b3_0ee9();
            *(undefined1 *)(local_8 + 0xb8e) = *(undefined1 *)0xb310;
            if (param_2 == 0) {
              local_6 = (undefined2 *****)0x22b2;
              local_8 = 0x8af;
              func_0x000297e6();
              local_6 = (undefined2 *****)0x22b2;
              local_8 = 0x8b8;
              func_0x00029b6d();
              local_6 = (undefined2 *****)0x22b2;
              local_8 = 0x8c0;
              func_0x00029b9d();
              local_6 = (undefined2 *****)0x22b2;
              local_8 = 0x8c8;
              FUN_28b3_0e53();
              uVar2 = param_3[1];
              *param_5 = *param_3;
              param_5[1] = uVar2;
            }
          }
        }
      }
    }
    else if (bVar1 == 0x74) {
      local_6 = &local_6;
      local_8 = param_1 + 2;
      local_a = (undefined2 ***)0x22b2;
      iVar3 = FUN_3ab8_5b62();
      if (iVar3 != 0) {
        local_6 = (undefined2 *****)0x22b2;
        local_8 = 0x98a;
        func_0x000297e6();
        local_6 = (undefined2 *****)0x22b2;
        local_8 = 0x98f;
        func_0x00029d78();
        local_6 = (undefined2 *****)0x22b2;
        local_8 = 0x998;
        func_0x00029c74();
        local_6 = (undefined2 *****)0x22b2;
        local_8 = 0x99d;
        iVar3 = FUN_28b3_0f51();
        if ((0 < iVar3) && (iVar3 < 0x13)) {
          *(int *)0xa6c = iVar3;
        }
      }
    }
  }
  return 1;
}



/* 3ab8:5e79  FUN_3ab8_5e79  2923 bytes, 1 callers */

undefined1 * __cdecl16far FUN_3ab8_5e79(undefined1 *param_1)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  byte *in_stack_00000012;
  int *in_stack_00000014;
  undefined2 local_13c;
  undefined2 local_13a;
  int local_134;
  int local_132;
  undefined2 local_130;
  undefined2 local_12e;
  undefined2 local_126;
  undefined2 local_124;
  undefined2 local_122;
  undefined2 local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined1 local_116 [202];
  int local_4c;
  undefined1 local_4a [2];
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  int local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 auStack_26 [2];
  undefined2 uStack_22;
  undefined2 uStack_1e;
  uint local_1c;
  undefined2 local_1a;
  undefined1 *local_18;
  undefined2 local_16;
  undefined2 *local_14;
  undefined2 *local_12;
  undefined2 *local_10;
  undefined2 local_e;
  undefined2 *local_c;
  undefined4 uStack_a;
  
  FUN_21f2_0ebc();
  uStack_a._2_2_ = (undefined2 *)0x0;
  local_132 = 0;
  bVar4 = param_1[1];
  if (bVar4 != 0x7a) {
    if (0x7a < bVar4) goto LAB_3ab8_69d4;
    if ((bVar4 != 0x32) && (bVar4 != 0x68)) {
      if (bVar4 == 0x69) {
        local_13c = *(undefined2 *)0x9548;
        local_13a = *(undefined2 *)0x954a;
        local_36 = *(undefined2 *)0x956c;
        local_34 = *(undefined2 *)0x956e;
        local_2c = *(undefined2 *)0x954c;
        local_2a = *(undefined2 *)0x954e;
        uStack_a._2_2_ = &local_130;
        uStack_a._0_2_ = &local_36;
        local_c = &local_13c;
        local_e = &local_126;
        local_10 = &local_2c;
        local_12 = &local_11e;
        local_14 = &local_48;
        local_16 = 0x2778;
        local_18 = param_1 + 2;
        local_1a = 0x22b2;
        local_1c = 0xae4;
        local_130 = local_13c;
        local_12e = local_13a;
        local_126 = local_13c;
        local_124 = local_13a;
        local_11e = local_13c;
        local_11c = local_13a;
        local_48 = local_13c;
        local_46 = local_13a;
        local_134 = func_0x000253ce();
        uVar11 = (undefined1 *)0xffed < &local_18;
        uVar12 = &stack0x0000 == (undefined1 *)0x6;
        local_e = (undefined2 *)CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
        local_c = (undefined2 *)CONCAT11(local_c._1_1_,*(undefined1 *)0xb310);
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb05;
        func_0x000297e6();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb0d;
        func_0x00029b6d();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb15;
        FUN_28b3_0e3b();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb1d;
        FUN_28b3_0ee9();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb25;
        func_0x000297e6();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb2d;
        func_0x00029b6d();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb35;
        func_0x00029bb5();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb3d;
        FUN_28b3_0e3b();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb45;
        FUN_28b3_0ee9();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb4e;
        func_0x000297e6();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb56;
        func_0x00029b6d();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb5e;
        func_0x00029bb5();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb66;
        FUN_28b3_0e53();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb6f;
        func_0x000297e6();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb77;
        func_0x000297e6();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb7f;
        func_0x00029bb5();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xb84;
        FUN_28b3_1181();
        if (!(bool)uVar11) {
          uStack_a._2_2_ = (undefined2 *)0x22b2;
          uStack_a._0_2_ = (undefined2 *)0xb8f;
          func_0x000297e6();
          uStack_a._2_2_ = (undefined2 *)0x22b2;
          uStack_a._0_2_ = (undefined2 *)0xb97;
          func_0x000297e6();
          uStack_a._2_2_ = (undefined2 *)0x22b2;
          uStack_a._0_2_ = (undefined2 *)0xb9f;
          FUN_28b3_100d();
          uStack_a._2_2_ = (undefined2 *)0x22b2;
          uStack_a._0_2_ = (undefined2 *)0xba4;
          FUN_28b3_1181();
          if ((bool)uVar11 || (bool)uVar12) {
            uStack_a._2_2_ = (undefined2 *)0x22b2;
            uStack_a._0_2_ = (undefined2 *)0xbaf;
            func_0x000297e6();
            uStack_a._2_2_ = (undefined2 *)0x22b2;
            uStack_a._0_2_ = (undefined2 *)0xbb7;
            func_0x000297e6();
            uStack_a._2_2_ = (undefined2 *)0x22b2;
            uStack_a._0_2_ = (undefined2 *)0xbbf;
            func_0x00029bb5();
            uStack_a._2_2_ = (undefined2 *)0x22b2;
            uStack_a._0_2_ = (undefined2 *)0xbc4;
            FUN_28b3_1181();
            if (!(bool)uVar11) {
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0xbcf;
              func_0x000297e6();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0xbd7;
              func_0x000297e6();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0xbdf;
              FUN_28b3_100d();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0xbe4;
              FUN_28b3_1181();
              if ((bool)uVar11 || (bool)uVar12) {
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0xbef;
                FUN_28b3_0d04();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0xbf7;
                func_0x000297e6();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0xbfc;
                func_0x00029d78();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0xc01;
                FUN_28b3_1181();
                if ((bool)uVar11 || (bool)uVar12) {
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc0f;
                  func_0x000297e6();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc18;
                  func_0x00029b6d();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc1d;
                  func_0x00029d78();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc22;
                  local_44 = FUN_28b3_0f51();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc31;
                  func_0x000297e6();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc3a;
                  func_0x00029b6d();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc3f;
                  func_0x00029d78();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc44;
                  local_40 = FUN_28b3_0f51();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc53;
                  func_0x000297e6();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc5c;
                  func_0x00029b6d();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc61;
                  func_0x00029d78();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xc66;
                  local_3c = FUN_28b3_0f51();
                  puVar7 = (undefined1 *)((ulong)local_3c >> 0x10);
                  local_c = (undefined2 *)0x22b2;
                  local_e = (undefined2 *)0xc73;
                  uStack_a = local_3c;
                  local_1a = FUN_20a9_145e();
                  local_c = (undefined2 *)0x1bb4;
                  local_e = (undefined2 *)0xc86;
                  local_18 = puVar7;
                  uStack_a = local_44;
                  local_16 = FUN_20a9_145e();
                  local_c = (undefined2 *)0x1bb4;
                  local_e = (undefined2 *)0xc99;
                  local_14 = (undefined2 *)puVar7;
                  uStack_a = local_40;
                  local_12 = (undefined2 *)FUN_20a9_145e();
                  local_1c = 10000;
                  uStack_a._2_2_ = (undefined2 *)0x1bb4;
                  uStack_a._0_2_ = (undefined2 *)0xcaf;
                  local_10 = (undefined2 *)puVar7;
                  FUN_28b3_0d04();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xcb7;
                  func_0x000297e6();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xcbc;
                  func_0x00029d78();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xcc1;
                  FUN_28b3_1181();
                  if (!(bool)uVar11) {
                    uStack_a._2_2_ = (undefined2 *)0x22b2;
                    uStack_a._0_2_ = (undefined2 *)0xccc;
                    FUN_28b3_0d04();
                    uStack_a._2_2_ = (undefined2 *)0x22b2;
                    uStack_a._0_2_ = (undefined2 *)0xcd4;
                    func_0x000297e6();
                    uStack_a._2_2_ = (undefined2 *)0x22b2;
                    uStack_a._0_2_ = (undefined2 *)0xcd9;
                    func_0x00029d78();
                    uStack_a._2_2_ = (undefined2 *)0x22b2;
                    uStack_a._0_2_ = (undefined2 *)0xcde;
                    FUN_28b3_1181();
                    if ((bool)uVar11 || (bool)uVar12) {
                      uStack_a._2_2_ = (undefined2 *)0x22b2;
                      uStack_a._0_2_ = (undefined2 *)0xce9;
                      func_0x000297e6();
                      uStack_a._2_2_ = (undefined2 *)0x22b2;
                      uStack_a._0_2_ = (undefined2 *)0xcf1;
                      func_0x00029b6d();
                      uStack_a._2_2_ = (undefined2 *)0x22b2;
                      uStack_a._0_2_ = (undefined2 *)0xcf6;
                      func_0x00029d78();
                      uStack_a._2_2_ = (undefined2 *)0x22b2;
                      uStack_a._0_2_ = (undefined2 *)0xcfb;
                      local_1c = FUN_28b3_0f51();
                      uVar11 = local_1c < 0x270e;
                      if ((0x270e < local_1c) && (uVar11 = local_1c < 0x2712, (bool)uVar11)) {
                        local_1c = 10000;
                      }
                    }
                  }
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xd16;
                  FUN_28b3_0d04();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xd1e;
                  func_0x000297e6();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xd23;
                  func_0x00029d78();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uVar10 = 0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0xd28;
                  FUN_28b3_1181();
                  if (!(bool)uVar11) {
                    puVar8 = auStack_26;
                    puVar6 = (undefined2 *)&stack0xffd8;
                    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                      puVar3 = puVar8;
                      puVar8 = puVar8 + 1;
                      puVar2 = puVar6;
                      puVar6 = puVar6 + 1;
                      *puVar3 = *puVar2;
                    }
                    uVar10 = 0x11f2;
                    local_2a = 0xd3e;
                    iVar5 = FUN_13bf_01c1();
                    if (iVar5 != 0) {
                      uStack_a._2_2_ = (undefined2 *)*(undefined2 *)0x14e;
                      uStack_a._0_2_ = (undefined2 *)*(undefined2 *)0x14c;
                      local_c = (undefined2 *)0x11f2;
                      uVar10 = 0;
                      local_e = (undefined2 *)0xd52;
                      uVar13 = func_0x00000271();
                      pbVar1 = (byte *)((int)uVar13 + 0x1e);
                      *pbVar1 = *pbVar1 | 8;
                      uStack_a._2_2_ = (undefined2 *)0xffff;
                    }
                  }
                  if (uStack_a._2_2_ != (undefined2 *)0x0) {
                    uVar9 = uVar10;
                    if ((*in_stack_00000012 & 1) != 0) {
                      uStack_a._2_2_ = (undefined2 *)*(int *)0x14e;
                      uStack_a._0_2_ = (undefined2 *)*(undefined2 *)0x14c;
                      uVar9 = 0;
                      local_e = (undefined2 *)0xd80;
                      local_c = (undefined2 *)uVar10;
                      uVar13 = func_0x00000271();
                      pbVar1 = (byte *)((int)uVar13 + 0x1e);
                      *pbVar1 = *pbVar1 | 0x20;
                    }
                    uVar10 = uVar9;
                    if ((*in_stack_00000012 & 2) != 0) {
                      uStack_a._2_2_ = (undefined2 *)*(int *)0x14e;
                      uStack_a._0_2_ = (undefined2 *)*(undefined2 *)0x14c;
                      uVar10 = 0;
                      local_e = (undefined2 *)0xda0;
                      local_c = (undefined2 *)uVar9;
                      uVar13 = func_0x00000271();
                      pbVar1 = (byte *)((int)uVar13 + 0x1e);
                      *pbVar1 = *pbVar1 | 0x10;
                    }
                    uVar9 = uVar10;
                    if ((*in_stack_00000012 & 4) != 0) {
                      uStack_a._2_2_ = (undefined2 *)*(int *)0x14e;
                      uStack_a._0_2_ = (undefined2 *)*(undefined2 *)0x14c;
                      uVar9 = 0;
                      local_e = (undefined2 *)0xdc0;
                      local_c = (undefined2 *)uVar10;
                      uVar13 = func_0x00000271();
                      pbVar1 = (byte *)((int)uVar13 + 0x1e);
                      *pbVar1 = *pbVar1 | 0x40;
                    }
                    if ((*in_stack_00000012 & 8) != 0) {
                      uStack_a._2_2_ = (undefined2 *)*(int *)0x14e;
                      uStack_a._0_2_ = (undefined2 *)*(undefined2 *)0x14c;
                      local_e = (undefined2 *)0xde3;
                      local_c = (undefined2 *)uVar9;
                      uVar13 = func_0x00000271();
                      pbVar1 = (byte *)((int)uVar13 + 0x1e);
                      *pbVar1 = *pbVar1 | 0x80;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_3ab8_69d4;
      }
      if (bVar4 != 0x6b) {
        if (bVar4 == 0x6d) {
          if (param_1[2] == '1') {
            *in_stack_00000014 = 1;
          }
          else {
            *in_stack_00000014 = 0;
          }
          goto LAB_3ab8_69d4;
        }
        if (bVar4 == 0x6e) {
          uStack_a._2_2_ = (undefined2 *)&stack0xfffa;
          uStack_a._0_2_ = (undefined2 *)(param_1 + 2);
          local_c = (undefined2 *)0x22b2;
          local_e = (undefined2 *)0xdff;
          local_134 = FUN_3ab8_5b62();
          if (local_134 != 0) {
            uStack_a._2_2_ = (undefined2 *)0x22b2;
            uStack_a._0_2_ = (undefined2 *)0xe11;
            func_0x000297e6();
            uStack_a._2_2_ = (undefined2 *)0x22b2;
            uStack_a._0_2_ = (undefined2 *)0xe16;
            func_0x00029d78();
            uStack_a._2_2_ = (undefined2 *)0x22b2;
            uStack_a._0_2_ = (undefined2 *)0xe1f;
            func_0x00029c74();
            uStack_a._2_2_ = (undefined2 *)0x22b2;
            uStack_a._0_2_ = (undefined2 *)0xe24;
            iVar5 = FUN_28b3_0f51();
            if ((0 < iVar5) && (iVar5 < 0xb)) {
              *(int *)0x168 = iVar5;
            }
          }
          goto LAB_3ab8_69d4;
        }
        if ((char)(bVar4 + 0x92) < '\x01') goto LAB_3ab8_69d4;
        if (bVar4 != 0x70 && '\0' < (char)(bVar4 + 0x91)) {
          if ((char)(bVar4 + 0x90) < '\x02') goto LAB_3ab8_69d4;
          if (bVar4 != 0x74 && '\x01' < (char)(bVar4 + 0x8e)) {
            if (bVar4 != 0x76) goto LAB_3ab8_69d4;
            local_132 = 1;
          }
        }
      }
    }
  }
  local_122 = *(undefined2 *)0x9548;
  local_120 = *(undefined2 *)0x954a;
  local_11a = *(undefined2 *)0x9560;
  local_118 = *(undefined2 *)0x9562;
  uStack_a._2_2_ = (undefined2 *)local_4a;
  uStack_a._0_2_ = &local_122;
  local_c = &local_11a;
  local_e = &local_11e;
  local_10 = &local_48;
  local_12 = (undefined2 *)(param_1 + 2);
  local_14 = (undefined2 *)0x22b2;
  local_16 = 0xea6;
  local_11e = local_122;
  local_11c = local_120;
  local_48 = local_122;
  local_46 = local_120;
  local_134 = FUN_3ab8_5ba1();
  if (local_134 < 4) {
    local_11a = *(undefined2 *)0x9560;
    local_118 = *(undefined2 *)0x9562;
    local_122 = *(undefined2 *)0x9548;
    local_120 = *(undefined2 *)0x954a;
  }
  uStack_a._2_2_ = (undefined2 *)param_1;
  uStack_a._0_2_ = (undefined2 *)0x22b2;
  local_c = (undefined2 *)0xed8;
  iVar5 = func_0x00024ce4();
  param_1[iVar5 + -1] = 0;
  local_2e = 0;
  for (local_4c = 0; local_4c <= iVar5; local_4c = local_4c + 1) {
    if (param_1[local_4c] == '\"') {
      local_2e = local_4c + 1;
      break;
    }
  }
  uVar11 = 0;
  uVar12 = local_2e == 0;
  if (!(bool)uVar12) {
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf1e;
    func_0x000297e6();
    uStack_a._2_2_ = &local_11a;
    uStack_a._0_2_ = (undefined2 *)0x22b2;
    local_c = (undefined2 *)0xf28;
    func_0x00029bb5();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf2e;
    FUN_28b3_0e53();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf37;
    func_0x000297e6();
    uStack_a._2_2_ = &local_122;
    uStack_a._0_2_ = (undefined2 *)0x22b2;
    local_c = (undefined2 *)0xf41;
    func_0x00029bb5();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf47;
    FUN_28b3_0e53();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf50;
    func_0x000297e6();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf58;
    func_0x00029b6d();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf60;
    func_0x00029bb5();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf69;
    FUN_28b3_0e53();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf72;
    func_0x000297e6();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf7a;
    func_0x00029b6d();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf82;
    func_0x00029bb5();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf8b;
    FUN_28b3_0e53();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf94;
    func_0x000297e6();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xf9c;
    func_0x00029b6d();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xfa4;
    func_0x00029bb5();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xfad;
    FUN_28b3_0e53();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xfb6;
    func_0x000297e6();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xfbe;
    func_0x000297e6();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xfc6;
    func_0x00029b6d();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xfce;
    func_0x00029bb5();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xfd6;
    FUN_28b3_0e3b();
    uStack_a._2_2_ = (undefined2 *)0x22b2;
    uStack_a._0_2_ = (undefined2 *)0xfdb;
    FUN_28b3_1181();
    if (!(bool)uVar11) {
      uStack_a._2_2_ = (undefined2 *)0x22b2;
      uStack_a._0_2_ = (undefined2 *)0xfe6;
      func_0x000297e6();
      uStack_a._2_2_ = (undefined2 *)0x22b2;
      uStack_a._0_2_ = (undefined2 *)0xfee;
      func_0x000297e6();
      uStack_a._2_2_ = (undefined2 *)0x22b2;
      uStack_a._0_2_ = (undefined2 *)0xff3;
      FUN_28b3_1181();
      if ((bool)uVar11 || (bool)uVar12) {
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0xffe;
        func_0x000297e6();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0x1007;
        func_0x000297e6();
        uStack_a._2_2_ = (undefined2 *)0x22b2;
        uStack_a._0_2_ = (undefined2 *)0x100c;
        FUN_28b3_1181();
        if (!(bool)uVar11) {
          uStack_a._2_2_ = (undefined2 *)0x22b2;
          uStack_a._0_2_ = (undefined2 *)0x1017;
          func_0x000297e6();
          uStack_a._2_2_ = (undefined2 *)0x22b2;
          uStack_a._0_2_ = (undefined2 *)0x1020;
          func_0x000297e6();
          uStack_a._2_2_ = (undefined2 *)0x22b2;
          uStack_a._0_2_ = (undefined2 *)0x1025;
          FUN_28b3_1181();
          if ((bool)uVar11 || (bool)uVar12) {
            while( true ) {
              uStack_a._2_2_ = (undefined2 *)(param_1 + local_2e);
              uStack_a._0_2_ = (undefined2 *)0x22b2;
              local_c = (undefined2 *)0x1033;
              iVar5 = func_0x00024ce4();
              if (iVar5 < 1) break;
              local_38 = 0;
              if (iVar5 < 0x97) {
                uStack_a._2_2_ = (undefined2 *)(param_1 + local_2e);
                uStack_a._0_2_ = (undefined2 *)0x1de;
                local_c = (undefined2 *)local_116;
                local_e = (undefined2 *)0x22b2;
                uVar10 = 0x22b2;
                local_10 = (undefined2 *)0x10af;
                FUN_21f2_3454();
              }
              else {
                local_38 = 0x95;
                uStack_a._2_2_ = (undefined2 *)(local_2e + 0x95);
                uStack_a._0_2_ = (undefined2 *)param_1;
                local_c = (undefined2 *)0x22b2;
                uVar10 = 0x2a75;
                local_e = (undefined2 *)0x105d;
                iVar5 = func_0x0002aa38();
                if (iVar5 == 1) {
                  local_38 = 0x96;
                }
                for (local_4c = 0; iVar5 = local_38, local_4c <= local_38; local_4c = local_4c + 1)
                {
                  local_116[local_4c] = param_1[local_2e + local_4c];
                }
                local_116[local_38 + 1] = 0;
                local_2e = local_2e + iVar5 + 1;
              }
              uStack_a._2_2_ = (undefined2 *)local_116;
              local_c = (undefined2 *)0x10bc;
              uStack_a._0_2_ = (undefined2 *)uVar10;
              iVar5 = func_0x00024ce4();
              if (iVar5 == 0) break;
              uStack_a._2_2_ = (undefined2 *)*(undefined2 *)0x168;
              uStack_a._0_2_ = (undefined2 *)local_132;
              local_c = (undefined2 *)local_116;
              local_e = (undefined2 *)0x22b2;
              local_10 = (undefined2 *)0x10d6;
              puVar6 = (undefined2 *)func_0x00018eff();
              local_32 = *puVar6;
              local_30 = puVar6[1];
              uStack_a._2_2_ = (undefined2 *)0x18b3;
              uStack_a._0_2_ = (undefined2 *)0x10ef;
              func_0x000297e6();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0x10f4;
              func_0x00029d78();
              local_10 = (undefined2 *)0x22b2;
              local_12 = (undefined2 *)0x10fe;
              func_0x000299d1();
              local_10 = (undefined2 *)0x22b2;
              local_12 = (undefined2 *)0x1107;
              func_0x000297e6();
              local_10 = (undefined2 *)0x22b2;
              local_12 = (undefined2 *)0x110c;
              func_0x00029d78();
              local_18 = (undefined1 *)0x22b2;
              local_1a = 0x1116;
              func_0x000299d1();
              local_18 = (undefined1 *)0x22b2;
              local_1a = 0x111f;
              func_0x000297e6();
              local_18 = (undefined1 *)0x22b2;
              local_1a = 0x1124;
              func_0x00029d78();
              uStack_22 = 0x112e;
              func_0x000299d1();
              uStack_22 = 0x1136;
              func_0x000297e6();
              uStack_22 = 0x113b;
              func_0x00029d78();
              local_2a = 0x1145;
              func_0x000299d1();
              local_2a = 0x114a;
              FUN_1def_043a();
              if ((*(int *)0x168 < 1) || (10 < *(int *)0x168)) {
                *(undefined2 *)0x168 = 1;
              }
              *(undefined1 *)0xc3b4 = *(undefined1 *)0x168;
              *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
              *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
              if (local_132 != 0) {
                *(byte *)0xc3b6 = *(byte *)0xc3b6 | 0x20;
              }
              *(undefined2 *)0xc3a4 = local_11e;
              *(undefined2 *)0xc3a6 = local_11c;
              uStack_a._2_2_ = (undefined2 *)0x1bb4;
              uStack_a._0_2_ = (undefined2 *)0x1196;
              func_0x000297e6();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0x119e;
              func_0x00029b6d();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0x11a6;
              func_0x000297e6();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0x11af;
              FUN_28b3_0e3b();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0x11b4;
              FUN_28b3_117c();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0x11bd;
              FUN_28b3_0e53();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0x11c6;
              func_0x000297e6();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0x11ce;
              func_0x00029b6d();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0x11d7;
              func_0x00029bb5();
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0x11e0;
              FUN_28b3_0e53();
              uVar10 = *(undefined2 *)0xbc78;
              *(int *)0xc3b0 = (int)local_116;
              *(undefined2 *)0xc3b2 = uVar10;
              uStack_a._2_2_ = (undefined2 *)0x0;
              uStack_a._0_2_ = (undefined2 *)0x22b2;
              local_c = (undefined2 *)0x11f6;
              func_0x0000daa6();
              puVar8 = &uStack_1e;
              puVar6 = (undefined2 *)0xc3a0;
              for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar3 = puVar8;
                puVar8 = puVar8 + 1;
                puVar2 = puVar6;
                puVar6 = puVar6 + 1;
                *puVar3 = *puVar2;
              }
              uVar10 = 0x18b3;
              uStack_22 = 0x120b;
              iVar5 = FUN_1885_2948();
              if (iVar5 != 0) {
                uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                uStack_a._0_2_ = (undefined2 *)0x18b3;
                local_c = (undefined2 *)0x121e;
                uVar13 = func_0x00000398();
                pbVar1 = (byte *)((int)uVar13 + 0x16);
                *pbVar1 = *pbVar1 | 8;
                uStack_a._2_2_ = (undefined2 *)((int)uStack_a._2_2_ + 1);
                bVar4 = param_1[1];
                if (bVar4 == 0x7a) {
                  uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                  uStack_a._0_2_ = (undefined2 *)0x0;
                  local_c = (undefined2 *)0x1433;
                  uVar13 = func_0x00000398();
                  pbVar1 = (byte *)((int)uVar13 + 0x16);
                  *pbVar1 = *pbVar1 | 0x80;
                }
                else if (bVar4 < 0x7b) {
                  if (bVar4 == 0x32) {
                    uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                    uStack_a._0_2_ = (undefined2 *)0x0;
                    local_c = (undefined2 *)0x1449;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x17);
                    *pbVar1 = *pbVar1 | 0x80;
                  }
                  else if (bVar4 == 0x6b) {
                    uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                    uStack_a._0_2_ = (undefined2 *)0x0;
                    local_c = (undefined2 *)0x141d;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x16);
                    *pbVar1 = *pbVar1 | 0x40;
                  }
                  else if (bVar4 == 0x6f) {
                    uStack_a._2_2_ = (undefined2 *)*(undefined2 *)0x150;
                    uStack_a._0_2_ = (undefined2 *)0x0;
                    local_c = (undefined2 *)0x13a2;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x16);
                    *pbVar1 = *pbVar1 | 0x10;
                    uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                    uStack_a._0_2_ = (undefined2 *)0x0;
                    local_c = (undefined2 *)0x13b5;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x17);
                    *pbVar1 = *pbVar1 | 2;
                  }
                  else if (bVar4 == 0x70) {
                    uStack_a._2_2_ = (undefined2 *)*(undefined2 *)0x150;
                    uStack_a._0_2_ = (undefined2 *)0x0;
                    local_c = (undefined2 *)0x13cb;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x16);
                    *pbVar1 = *pbVar1 | 0x10;
                    uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                    uStack_a._0_2_ = (undefined2 *)0x0;
                    local_c = (undefined2 *)0x13de;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x17);
                    *pbVar1 = *pbVar1 | 4;
                  }
                  else if (bVar4 == 0x72) {
                    uStack_a._2_2_ = (undefined2 *)*(undefined2 *)0x150;
                    uStack_a._0_2_ = (undefined2 *)0x0;
                    local_c = (undefined2 *)0x1379;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x16);
                    *pbVar1 = *pbVar1 | 0x10;
                    uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                    uStack_a._0_2_ = (undefined2 *)0x0;
                    local_c = (undefined2 *)0x138c;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x17);
                    *pbVar1 = *pbVar1 | 1;
                  }
                  else if (bVar4 == 0x73) {
                    uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                    uStack_a._0_2_ = (undefined2 *)0x0;
                    local_c = (undefined2 *)0x1276;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x16);
                    *pbVar1 = *pbVar1 | 0x10;
                  }
                  else if (bVar4 == 0x74) {
                    uStack_a._2_2_ = (undefined2 *)*(undefined2 *)0x150;
                    uStack_a._0_2_ = (undefined2 *)0x0;
                    local_c = (undefined2 *)0x13f4;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x16);
                    *pbVar1 = *pbVar1 | 0x10;
                    uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                    uStack_a._0_2_ = (undefined2 *)0x0;
                    local_c = (undefined2 *)0x1407;
                    uVar13 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar13 + 0x17);
                    *pbVar1 = *pbVar1 | 0x10;
                  }
                }
                if ((*in_stack_00000012 & 2) != 0) {
                  uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                  uStack_a._0_2_ = (undefined2 *)0x0;
                  local_c = (undefined2 *)0x1291;
                  uVar13 = func_0x00000398();
                  pbVar1 = (byte *)((int)uVar13 + 0x17);
                  *pbVar1 = *pbVar1 | 8;
                }
                if ((*in_stack_00000012 & 4) != 0) {
                  uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                  uStack_a._0_2_ = (undefined2 *)0x0;
                  local_c = (undefined2 *)0x12ac;
                  uVar13 = func_0x00000398();
                  pbVar1 = (byte *)((int)uVar13 + 0x17);
                  *pbVar1 = *pbVar1 | 0x40;
                }
                uVar10 = 0;
                if ((*in_stack_00000012 & 8) != 0) {
                  uStack_a._2_2_ = (undefined2 *)*(int *)0x150;
                  uStack_a._0_2_ = (undefined2 *)0x0;
                  uVar10 = 0;
                  local_c = (undefined2 *)0x12c7;
                  uVar13 = func_0x00000398();
                  pbVar1 = (byte *)((int)uVar13 + 0x17);
                  *pbVar1 = *pbVar1 | 0x20;
                }
              }
              if (local_38 == 0) break;
              uStack_a._2_2_ = (undefined2 *)uVar10;
              if (*in_stack_00000014 == 0) {
                uStack_a._0_2_ = (undefined2 *)0x12ee;
                func_0x000297e6();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x12f7;
                FUN_28b3_100d();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1300;
                FUN_28b3_0e3b();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1309;
                FUN_28b3_0e53();
                local_48 = *(undefined2 *)0xc3a8;
                local_46 = *(undefined2 *)0xc3aa;
                local_11e = *(undefined2 *)0xc3ac;
                local_11c = *(undefined2 *)0xc3ae;
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x132e;
                func_0x000297e6();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1337;
                FUN_28b3_100d();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1340;
                FUN_28b3_0e3b();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1349;
                func_0x00029bb5();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1352;
                FUN_28b3_0e53();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x135b;
                func_0x000297e6();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1364;
                func_0x00029bb5();
              }
              else {
                uStack_a._0_2_ = (undefined2 *)0x1469;
                FUN_28b3_0d8b();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1471;
                FUN_28b3_0e53();
                if (local_132 != 0) {
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0x1481;
                  FUN_28b3_0d8b();
                  uStack_a._2_2_ = (undefined2 *)0x22b2;
                  uStack_a._0_2_ = (undefined2 *)0x1489;
                  FUN_28b3_0e53();
                }
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1492;
                func_0x000297e6();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x149a;
                func_0x00029b6d();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14a3;
                func_0x00029b85();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14a8;
                func_0x00029af6();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14b0;
                FUN_28b3_0e3b();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14b9;
                func_0x00029b6d();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14be;
                func_0x00029af6();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14c7;
                FUN_28b3_0e3b();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14d0;
                FUN_28b3_0e53();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14d8;
                func_0x000297e6();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14e1;
                func_0x00029b6d();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14ea;
                FUN_28b3_0e3b();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14f3;
                FUN_28b3_0e53();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x14fc;
                func_0x000297e6();
                uStack_a._2_2_ = &local_48;
                uStack_a._0_2_ = (undefined2 *)0x22b2;
                local_c = (undefined2 *)0x1505;
                func_0x00029bb5();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x150b;
                FUN_28b3_0e53();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1514;
                func_0x000297e6();
                uStack_a._2_2_ = &local_11e;
                uStack_a._0_2_ = (undefined2 *)0x22b2;
                local_c = (undefined2 *)0x151e;
                func_0x00029bb5();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1524;
                FUN_28b3_0e53();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x152d;
                func_0x000297e6();
                uStack_a._2_2_ = &local_11a;
                uStack_a._0_2_ = (undefined2 *)0x22b2;
                local_c = (undefined2 *)0x1537;
                func_0x00029bb5();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x153d;
                FUN_28b3_0e53();
                uStack_a._2_2_ = (undefined2 *)0x22b2;
                uStack_a._0_2_ = (undefined2 *)0x1546;
                func_0x000297e6();
                uStack_a._2_2_ = &local_122;
                uStack_a._0_2_ = (undefined2 *)0x22b2;
                local_c = (undefined2 *)0x1550;
                func_0x00029bb5();
              }
              uStack_a._2_2_ = (undefined2 *)0x22b2;
              uStack_a._0_2_ = (undefined2 *)0x136d;
              FUN_28b3_0e53();
            }
          }
        }
      }
    }
  }
LAB_3ab8_69d4:
  in_stack_00000012[0] = 0;
  in_stack_00000012[1] = 0;
  return (undefined1 *)uStack_a._2_2_;
}



/* 3ab8:69e4  FUN_3ab8_69e4  520 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_69e4(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  byte *in_stack_00000012;
  undefined1 local_1a [4];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  undefined2 *local_6;
  undefined2 **ppuStack_4;
  
  ppuStack_4 = (undefined2 **)0x3ab8;
  local_6 = (undefined2 *)0x156f;
  FUN_21f2_0ebc();
  local_10 = 0;
  if (*(char *)(param_1 + 1) == 'n') {
    ppuStack_4 = &local_6;
    local_6 = (undefined2 *)(param_1 + 2);
    iStack_8 = 0x22b2;
    uStack_a = 0x1597;
    iVar2 = FUN_3ab8_5b62();
    if (iVar2 != 0) {
      ppuStack_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0x15ab;
      func_0x000297e6();
      ppuStack_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0x15b0;
      func_0x00029d78();
      ppuStack_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0x15b9;
      func_0x00029c74();
      ppuStack_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0x15be;
      iVar2 = FUN_28b3_0f51();
      if ((0 < iVar2) && (iVar2 < 8)) {
        *(undefined1 *)0x1cd = (char)iVar2;
      }
    }
  }
  else if (*(char *)(param_1 + 1) == 't') {
    ppuStack_4 = (undefined2 **)local_1a;
    local_6 = &local_e;
    iStack_8 = param_1 + 2;
    uStack_a = 0x22b2;
    uStack_c = 0x15e8;
    FUN_3ab8_5b80();
    uVar3 = (undefined1 *)0xfff9 < &iStack_8;
    uVar4 = &stack0x0000 == (undefined1 *)0x2;
    ppuStack_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0x15f6;
    func_0x000297e6();
    ppuStack_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0x15fe;
    func_0x00029b6d();
    ppuStack_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0x1606;
    func_0x00029bb5();
    ppuStack_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0x160e;
    FUN_28b3_0e53();
    ppuStack_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0x1617;
    func_0x000297e6();
    ppuStack_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0x161f;
    func_0x000297e6();
    ppuStack_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0x1627;
    func_0x00029b6d();
    ppuStack_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0x162f;
    func_0x00029bb5();
    ppuStack_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0x1637;
    FUN_28b3_0e3b();
    ppuStack_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0x163c;
    FUN_28b3_1181();
    if (!(bool)uVar3) {
      ppuStack_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0x1647;
      func_0x000297e6();
      ppuStack_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0x164f;
      func_0x000297e6();
      ppuStack_4 = (undefined2 **)0x22b2;
      local_6 = (undefined2 *)0x1654;
      FUN_28b3_1181();
      if ((bool)uVar3 || (bool)uVar4) {
        ppuStack_4 = (undefined2 **)0x22b2;
        local_6 = (undefined2 *)0x165f;
        func_0x000297e6();
        ppuStack_4 = (undefined2 **)0x22b2;
        local_6 = (undefined2 *)0x1667;
        func_0x000297e6();
        ppuStack_4 = (undefined2 **)0x22b2;
        local_6 = (undefined2 *)0x166c;
        FUN_28b3_1181();
        if (!(bool)uVar3) {
          ppuStack_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 *)0x1677;
          func_0x000297e6();
          ppuStack_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 *)0x167f;
          func_0x000297e6();
          ppuStack_4 = (undefined2 **)0x22b2;
          local_6 = (undefined2 *)0x1684;
          FUN_28b3_1181();
          if ((bool)uVar3 || (bool)uVar4) {
            local_12 = *(undefined2 *)0x1d0;
            *(uint *)0x1d0 = (uint)*(byte *)0x1cd;
            ppuStack_4 = (undefined2 **)0x22b2;
            local_6 = (undefined2 *)0x169f;
            func_0x000297e6();
            ppuStack_4 = (undefined2 **)0x22b2;
            local_6 = (undefined2 *)0x16a4;
            func_0x00029d78();
            uStack_c = 0x22b2;
            local_e = 0x16ae;
            func_0x000299d1();
            uStack_c = 0x22b2;
            local_e = 0x16b6;
            func_0x000297e6();
            uStack_c = 0x22b2;
            local_e = 0x16bb;
            func_0x00029d78();
            uStack_14 = 0x22b2;
            uStack_16 = 0x16c5;
            func_0x000299d1();
            uStack_14 = 0x22b2;
            uStack_16 = 0x16ca;
            iVar2 = FUN_1def_1208();
            if (iVar2 != 0) {
              ppuStack_4 = (undefined2 **)*(undefined2 *)0x152;
              local_6 = (undefined2 *)0x1bb4;
              iStack_8 = 0x16dd;
              uVar5 = func_0x000003ef();
              pbVar1 = (byte *)((int)uVar5 + 10);
              *pbVar1 = *pbVar1 | 8;
              local_10 = 1;
              if ((*in_stack_00000012 & 1) != 0) {
                ppuStack_4 = (undefined2 **)*(undefined2 *)0x152;
                local_6 = (undefined2 *)0x0;
                iStack_8 = 0x16fd;
                uVar5 = func_0x000003ef();
                pbVar1 = (byte *)((int)uVar5 + 10);
                *pbVar1 = *pbVar1 | 0x20;
              }
              if ((*in_stack_00000012 & 2) != 0) {
                ppuStack_4 = (undefined2 **)*(undefined2 *)0x152;
                local_6 = (undefined2 *)0x0;
                iStack_8 = 0x1718;
                uVar5 = func_0x000003ef();
                pbVar1 = (byte *)((int)uVar5 + 10);
                *pbVar1 = *pbVar1 | 0x10;
              }
              if ((*in_stack_00000012 & 4) != 0) {
                ppuStack_4 = (undefined2 **)*(undefined2 *)0x152;
                local_6 = (undefined2 *)0x0;
                iStack_8 = 0x1733;
                uVar5 = func_0x000003ef();
                pbVar1 = (byte *)((int)uVar5 + 10);
                *pbVar1 = *pbVar1 | 0x40;
              }
              if ((*in_stack_00000012 & 8) != 0) {
                ppuStack_4 = (undefined2 **)*(undefined2 *)0x152;
                local_6 = (undefined2 *)0x0;
                iStack_8 = 0x174e;
                uVar5 = func_0x000003ef();
                pbVar1 = (byte *)((int)uVar5 + 10);
                *pbVar1 = *pbVar1 | 0x80;
              }
            }
            *(undefined2 *)0x1d0 = local_12;
          }
        }
      }
    }
  }
  in_stack_00000012[0] = 0;
  in_stack_00000012[1] = 0;
  return local_10;
}



/* 3ab8:6bec  FUN_3ab8_6bec  59 bytes, 1 callers */

void __cdecl16far FUN_3ab8_6bec(undefined2 *param_1,int *param_2)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  FUN_21f2_0ebc();
  if (*param_2 != 0) {
    uVar2 = func_0x0000013f(0x22b2,*(undefined2 *)0x148,*(undefined2 *)0x14a);
    pbVar1 = (byte *)((int)uVar2 + 0x14);
    *pbVar1 = *pbVar1 | 0x40;
  }
  *param_1 = 0;
  *param_2 = 0;
  return;
}



/* 3ab8:6c27  FUN_3ab8_6c27  705 bytes, 1 callers */

void __cdecl16far FUN_3ab8_6c27(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_2a;
  int local_28;
  int local_26;
  int local_24;
  int local_22 [3];
  int local_1c;
  undefined2 local_1a;
  undefined1 local_18 [10];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  int *piStack_6;
  
  piStack_6 = (int *)0x17b2;
  FUN_21f2_0ebc();
  piStack_6 = (int *)0x3d;
  puStack_8 = (undefined1 *)param_1;
  puStack_a = (undefined1 *)0x22b2;
  uStack_c = 0x17bf;
  local_1a = FUN_21f2_3b7a();
  if (local_1a != 0) {
    local_1a = local_1a + 1;
    piStack_6 = (int *)0x2787;
    puStack_8 = (undefined1 *)param_1;
    puStack_a = (undefined1 *)0x22b2;
    uVar5 = 0x11f2;
    uStack_c = 0x17da;
    iVar2 = func_0x00012232();
    if (iVar2 != 0) {
      piStack_6 = local_22;
      puStack_8 = (undefined1 *)0x278f;
      puStack_a = (undefined1 *)(param_1 + 7);
      uStack_c = 0x11f2;
      uStack_e = 0x17f7;
      func_0x000253ce();
      for (local_1c = -1; uVar5 = 0x22b2, local_1c < 0x10; local_1c = local_1c + 1) {
        if (local_1c < 0) {
          local_24 = 0x10;
        }
        else {
          local_24 = 8;
        }
        piStack_6 = (int *)local_24;
        puStack_8 = (undefined1 *)local_1a;
        puStack_a = local_18;
        uStack_c = 0x22b2;
        uStack_e = 0x1816;
        FUN_21f2_2de0();
        piStack_6 = (int *)0x2c;
        puStack_8 = local_18;
        puStack_a = (undefined1 *)0x22b2;
        uStack_c = 0x1826;
        puVar3 = (undefined1 *)FUN_21f2_3b7a();
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = 0;
        }
        piStack_6 = (int *)0xa;
        puStack_8 = local_18;
        puStack_a = (undefined1 *)0x22b2;
        uStack_c = 0x1841;
        pcVar4 = (char *)FUN_21f2_3b7a();
        if (pcVar4 == (char *)0x0) goto LAB_3ab8_6ccf;
        do {
          *pcVar4 = '\0';
LAB_3ab8_6ccf:
          piStack_6 = (int *)local_18;
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0x1858;
          iVar2 = func_0x00024ce4();
          pcVar4 = local_18 + iVar2 + -1;
        } while (*pcVar4 == ' ');
        if (local_1c < 0) {
          piStack_6 = (int *)local_22[0];
          puStack_8 = local_18;
          puStack_a = (undefined1 *)0x22b2;
          uStack_c = 0x1878;
          FUN_12c1_0025();
        }
        else {
          piStack_6 = (int *)(local_22[0] * 0x10 + local_1c);
          puStack_8 = local_18;
          puStack_a = (undefined1 *)0x22b2;
          uStack_c = 0x188e;
          FUN_10ad_20e9();
        }
        piStack_6 = (int *)0x2c;
        puStack_8 = (undefined1 *)local_1a;
        puStack_a = (undefined1 *)0x11f2;
        uVar5 = 0x22b2;
        uStack_c = 0x189c;
        local_1a = FUN_21f2_3b7a();
        if (local_1a == 0) break;
        local_1a = local_1a + 1;
      }
    }
    piStack_6 = (int *)0x2792;
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x18b1;
    puStack_a = (undefined1 *)uVar5;
    iVar2 = func_0x00012232();
    if (iVar2 != 0) {
      piStack_6 = local_22;
      puStack_8 = (undefined1 *)0x279a;
      puStack_a = (undefined1 *)(param_1 + 7);
      uStack_c = 0x11f2;
      uStack_e = 0x18ce;
      func_0x000253ce();
      local_2a = -1;
      if ((-1 < local_22[0]) && (local_22[0] < 0x10)) {
        piStack_6 = &local_2a;
        puStack_8 = (undefined1 *)0x279d;
        puStack_a = (undefined1 *)local_1a;
        uStack_c = 0x22b2;
        uStack_e = 0x1915;
        func_0x000253ce();
        if (-1 < local_2a) {
          if (99 < local_2a) {
            *param_2 = local_22[0];
            local_2a = 2;
          }
          *(undefined1 *)(local_22[0] + 0xb6c) = 0;
          *(undefined1 *)(local_22[0] + 0xb7c) = 0;
          local_26 = local_2a % 10;
          local_28 = local_2a / 10;
          if (0 < local_26) {
            *(undefined1 *)(local_22[0] + 0xb7c) = 1;
          }
          if (1 < local_26) {
            *(undefined1 *)(local_22[0] + 0xb6c) = 1;
          }
          if (0 < local_28) {
            *(byte *)(local_22[0] + 0xb6c) = *(byte *)(local_22[0] + 0xb6c) | 2;
          }
          if (1 < local_28) {
            *(byte *)(local_22[0] + 0xb6c) = *(byte *)(local_22[0] + 0xb6c) | 6;
          }
          local_1c = 0;
          do {
            piStack_6 = (int *)0x2c;
            puStack_8 = (undefined1 *)local_1a;
            puStack_a = (undefined1 *)0x22b2;
            uStack_c = 0x199c;
            local_1a = FUN_21f2_3b7a();
            if (local_1a == 0) break;
            local_24 = local_22[0] * 0x10 + local_1c;
            local_2a = -1;
            piStack_6 = &local_2a;
            puStack_8 = (undefined1 *)0x27a0;
            local_1a = local_1a + 1;
            uStack_c = 0x22b2;
            uStack_e = 0x19ca;
            puStack_a = (undefined1 *)local_1a;
            func_0x000253ce();
            if (local_2a < 0) break;
            if (99 < local_2a) {
              *(undefined1 *)(local_22[0] + 0xb8e) = (undefined1)local_24;
              local_2a = 2;
            }
            *(undefined1 *)(local_24 + -0x3e90) = 0;
            *(undefined1 *)(local_24 + -0x4c78) = 0;
            local_26 = local_2a % 10;
            local_28 = local_2a / 10;
            if (0 < local_26) {
              *(undefined1 *)(local_24 + -0x4c78) = 1;
            }
            if (1 < local_26) {
              *(undefined1 *)(local_24 + -0x3e90) = 1;
            }
            if (0 < local_28) {
              *(byte *)(local_24 + -0x3e90) = *(byte *)(local_24 + -0x3e90) | 2;
            }
            if (1 < local_28) {
              *(byte *)(local_24 + -0x3e90) = *(byte *)(local_24 + -0x3e90) | 6;
            }
            local_1c = local_1c + 1;
          } while (local_1c < 0x10);
          bVar1 = *(byte *)(local_22[0] + 0xb8e);
          *(undefined1 *)(bVar1 + 0xc170) = 1;
          *(undefined1 *)(bVar1 + 0xb388) = 1;
        }
      }
    }
  }
  return;
}



/* 3ab8:6ee8  FUN_3ab8_6ee8  1484 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_6ee8(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,uint *param_8)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined2 local_7e [4];
  uint local_76;
  undefined2 local_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 local_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 local_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  int local_52;
  char local_50;
  undefined1 local_4e [8];
  int local_46;
  undefined4 local_44;
  undefined1 local_40 [8];
  undefined2 local_38 [2];
  undefined2 uStack_34;
  undefined2 uStack_32;
  uint local_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined1 *puStack_28;
  undefined4 local_26;
  undefined2 local_22;
  undefined2 uStack_20;
  undefined4 uStack_1e;
  undefined4 local_1a;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined4 uStack_e;
  undefined4 *local_a;
  
  FUN_21f2_0ebc();
  local_30 = 0;
  local_76 = 0;
  local_52 = 0;
  local_50 = '\0';
  local_a = (undefined4 *)0x27a3;
  uStack_e._2_2_ = param_1 + 1;
  uStack_e._0_2_ = 0x22b2;
  uStack_10 = 0x1a96;
  func_0x000253ce();
  uVar3 = (int)local_30 >> 0xf;
  if (9 < (int)((local_30 ^ uVar3) - uVar3)) {
    local_76 = 1;
  }
  if (0x13 < (int)((local_30 ^ uVar3) - uVar3)) {
    local_76 = 2;
  }
  local_30 = (int)local_30 % 10;
  local_22 = *(undefined2 *)0x9510;
  uStack_20 = *(undefined2 *)0x9512;
  uStack_1e._0_2_ = *(undefined2 *)0x9514;
  uStack_1e._2_2_ = *(undefined2 *)0x9516;
  if (*(int *)0xcb6 != 0) {
    local_a = (undefined4 *)0x1ae8;
    func_0x000297e6();
    local_a = (undefined4 *)0x1aed;
    func_0x00029d78();
    local_a = (undefined4 *)0x1af5;
    func_0x000299d1();
  }
  while( true ) {
    local_a = (undefined4 *)0x1f4;
    uStack_e._2_2_ = param_1;
    uStack_e._0_2_ = 0x22b2;
    uStack_10 = 0x2024;
    iVar2 = func_0x0002509c();
    if (iVar2 == 0) {
      return;
    }
    local_1a._0_2_ = *(undefined2 *)0x9510;
    local_1a._2_2_ = *(undefined2 *)0x9512;
    local_16 = *(undefined2 *)0x9514;
    local_14 = *(undefined2 *)0x9516;
    local_a = &local_1a;
    uStack_e._2_2_ = 0x27a6;
    uStack_e._0_2_ = param_1;
    uStack_10 = 0x22b2;
    local_12 = 0x1b24;
    iVar2 = func_0x000253ce();
    if (iVar2 < 2) break;
    uVar3 = (local_30 ^ (int)local_30 >> 0xf) - ((int)local_30 >> 0xf);
    uVar6 = uVar3 < 2;
    uVar7 = uVar3 == 2;
    if (1 < (int)uVar3) {
      local_50 = '\0';
      local_46 = 0;
      local_a = (undefined4 *)0x1b51;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1b59;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1b5e;
      FUN_28b3_1181();
      if ((bool)uVar6) {
        local_a = (undefined4 *)0x1b68;
        FUN_28b3_0d04();
        local_a = (undefined4 *)0x1b6d;
        func_0x00029af6();
        local_a = (undefined4 *)0x1b75;
        func_0x000299d1();
        local_46 = 1;
      }
      local_a = (undefined4 *)0x4240;
      uStack_e._2_2_ = 0x22b2;
      uStack_e._0_2_ = 0x1b8b;
      FUN_28b3_0d04();
      uStack_e._2_2_ = 0x22b2;
      uStack_e._0_2_ = 0x1b93;
      func_0x00029c2c();
      uStack_e._2_2_ = 0x22b2;
      uStack_e._0_2_ = 0x1b9c;
      func_0x00029c74();
      uStack_e._2_2_ = 0x22b2;
      uStack_e._0_2_ = 0x1ba1;
      uVar8 = FUN_28b3_0f51();
      uStack_10 = 0x22b2;
      local_12 = 0x1bac;
      uStack_e = uVar8;
      FUN_21f2_5978();
      uStack_10 = 0x22b2;
      local_12 = 0x1bba;
      func_0x000298b4();
      uStack_10 = 0x22b2;
      local_12 = 0x1bc2;
      func_0x000299d1();
      uStack_10 = 0;
      local_12 = 10000;
      local_14 = 0xf;
      local_16 = 0x4240;
      uStack_1e._2_2_ = 0x22b2;
      uStack_1e._0_2_ = 0x1bd7;
      local_1a = uVar8;
      uVar8 = FUN_21f2_5a44();
      uStack_20 = 0x22b2;
      local_22 = 0x1be2;
      uStack_1e = uVar8;
      FUN_21f2_5978();
      uStack_20 = 0x22b2;
      local_22 = 0x1bfb;
      func_0x000298b4();
      uStack_20 = 0x22b2;
      local_22 = 0x1c03;
      func_0x000299b9();
      uStack_20 = 0x22b2;
      local_22 = 0x1c0b;
      FUN_28b3_0ee9();
      uStack_20 = 0;
      local_22 = 10000;
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1c18;
      local_26 = uVar8;
      uVar8 = FUN_21f2_5a44();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1c2f;
      local_44 = uVar8;
      func_0x000298b4();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1c38;
      func_0x00029c2c();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1c40;
      func_0x000299b9();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1c48;
      FUN_28b3_0ee9();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1c51;
      FUN_28b3_0d04();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1c59;
      FUN_28b3_0d04();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1c5e;
      FUN_28b3_1181();
      if (!(bool)uVar6) {
        local_50 = '\x01';
        puStack_28 = (undefined1 *)0x22b2;
        uStack_2a = 0x1c6c;
        FUN_28b3_0d04();
        puStack_28 = (undefined1 *)0x22b2;
        uStack_2a = 0x1c75;
        func_0x00029c74();
        puStack_28 = (undefined1 *)0x22b2;
        uStack_2a = 0x1c7d;
        func_0x000299d1();
        puStack_28 = (undefined1 *)0x22b2;
        uStack_2a = 0x1c85;
        FUN_28b3_0d04();
        puStack_28 = (undefined1 *)0x22b2;
        uStack_2a = 0x1c8e;
        func_0x00029bfc();
        puStack_28 = (undefined1 *)0x22b2;
        uStack_2a = 0x1c96;
        func_0x000299d1();
      }
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1c9e;
      FUN_28b3_0d04();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1ca7;
      FUN_28b3_0d04();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1cac;
      FUN_28b3_1181();
      if ((bool)uVar6 || (bool)uVar7) {
        local_50 = '\x01';
        puStack_28 = (undefined1 *)0x22b2;
        uStack_2a = 0x1cbb;
        FUN_28b3_0d04();
        puStack_28 = local_40;
        uStack_2a = 0x22b2;
        uStack_2c = 0x1cc4;
        func_0x00029c74();
        puStack_28 = (undefined1 *)0x22b2;
        uStack_2a = 0x1cca;
        func_0x000299d1();
        puStack_28 = (undefined1 *)0x22b2;
        uStack_2a = 0x1cd3;
        FUN_28b3_0d04();
        puStack_28 = local_4e;
        uStack_2a = 0x22b2;
        uStack_2c = 0x1cdc;
        FUN_28b3_10e4();
        puStack_28 = (undefined1 *)0x22b2;
        uStack_2a = 0x1ce2;
        func_0x000299d1();
      }
      uVar5 = 0x22b2;
      if (local_50 != '\0') {
        puStack_28 = (undefined1 *)0xffff;
        uStack_2a = 6;
        uStack_2c = 2;
        uStack_2e = 0x14;
        local_30 = 0x396;
        uStack_32 = 0x22b2;
        uVar5 = 0xdef;
        uStack_34 = 0x1d01;
        FUN_1000_02b5();
        if (*(int *)0xc22 == 0) {
          *(undefined2 *)0xc22 = 1;
        }
      }
      uStack_2a = 0x1d1a;
      puStack_28 = (undefined1 *)uVar5;
      FUN_28b3_0d04();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1d22;
      func_0x00029c2c();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1d2b;
      FUN_28b3_0d04();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1d33;
      func_0x00029c2c();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1d38;
      FUN_28b3_117c();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1d40;
      func_0x00029c74();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1d48;
      func_0x000299b9();
      puStack_28 = (undefined1 *)0x22b2;
      uStack_2a = 0x1d50;
      FUN_28b3_0ee9();
      if (local_46 != 0) {
        local_a = (undefined4 *)0x1d5e;
        FUN_28b3_0d04();
        local_a = (undefined4 *)0x1d63;
        func_0x00029af6();
        local_a = (undefined4 *)0x1d6b;
        func_0x000299d1();
      }
    }
    if ((int)local_30 < 0) {
      local_a = (undefined4 *)0x1d79;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1d7e;
      func_0x00029af6();
      local_a = (undefined4 *)0x1d86;
      func_0x000299d1();
    }
    if (local_76 == 0) {
      local_a = (undefined4 *)0x1dbd;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1dc5;
      func_0x000299b9();
      local_a = (undefined4 *)0x1dcd;
      FUN_28b3_0ee9();
      uVar6 = 0;
      uVar7 = *(int *)0xcb6 == 0;
      if ((bool)uVar7) goto LAB_3ab8_7282;
      local_a = (undefined4 *)0x1ddc;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1de5;
      func_0x00029bb5();
      goto LAB_3ab8_727d;
    }
    local_a = (undefined4 *)0x1d94;
    FUN_28b3_0d04();
    local_a = (undefined4 *)0x22b2;
    uStack_e._2_2_ = 0x1d9d;
    func_0x00029c74();
    local_a = (undefined4 *)0x1da3;
    func_0x000299d1();
    uVar6 = local_76 < 2;
    uVar7 = local_76 == 2;
    uStack_e = CONCAT22(uStack_e._2_2_,(int)uStack_e);
    if ((int)local_76 < 2) goto LAB_3ab8_7282;
    uVar6 = 0;
    uVar7 = local_52 == 0;
    uStack_e = CONCAT22(uStack_e._2_2_,(int)uStack_e);
    if (local_52 < 1) goto LAB_3ab8_7282;
    do {
      local_a = (undefined4 *)0x1df3;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x22b2;
      uStack_e._2_2_ = 0x1dfc;
      FUN_28b3_10e4();
LAB_3ab8_727d:
      local_a = (undefined4 *)0x1e02;
      func_0x000299d1();
LAB_3ab8_7282:
      local_a = (undefined4 *)0x1e0b;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1e13;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1e18;
      FUN_28b3_1181();
    } while (!(bool)uVar6 && !(bool)uVar7);
    while( true ) {
      local_a = (undefined4 *)0x1e3d;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1e45;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1e4a;
      FUN_28b3_1181();
      if (!(bool)uVar6) break;
      local_a = (undefined4 *)0x1e25;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x22b2;
      uStack_e._2_2_ = 0x1e2e;
      func_0x00029c74();
      local_a = (undefined4 *)0x1e34;
      func_0x000299d1();
    }
    local_a = (undefined4 *)0x1e54;
    FUN_28b3_0d04();
    local_a = (undefined4 *)0x1e5d;
    func_0x00029c2c();
    local_a = (undefined4 *)0x1e65;
    func_0x000299b9();
    uStack_10 = 0x22b2;
    local_12 = 0x1e6f;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0x1e74;
    func_0x0002a11e();
    local_a = (undefined4 *)0x1e7e;
    FUN_28b3_0d04();
    local_a = (undefined4 *)0x1e87;
    func_0x00029c2c();
    local_a = (undefined4 *)0x1e8f;
    func_0x000299d1();
    local_a = (undefined4 *)local_16;
    uStack_10 = 0x22b2;
    local_12 = 0x1ea0;
    uStack_e = local_1a;
    FUN_28b3_15dc();
    local_a = (undefined4 *)0x1eaa;
    FUN_28b3_0d04();
    local_a = (undefined4 *)0x1eb3;
    func_0x00029c2c();
    local_a = (undefined4 *)0x1ebb;
    func_0x000299d1();
    if (local_52 == 0) {
      local_5a = local_12;
      uStack_58 = uStack_10;
      puVar4 = local_38;
    }
    else {
      if (local_76 != 0) {
        local_a = (undefined4 *)0x1ee4;
        FUN_28b3_0d04();
        local_a = (undefined4 *)0x22b2;
        uStack_e._2_2_ = 0x1eed;
        func_0x00029c74();
        local_a = (undefined4 *)0x1ef3;
        func_0x000299d1();
        local_a = (undefined4 *)0x1efb;
        FUN_28b3_0d04();
        local_a = (undefined4 *)0x22b2;
        uStack_e._2_2_ = 0x1f04;
        func_0x00029c74();
        local_a = (undefined4 *)0x1f0a;
        func_0x000299d1();
      }
      local_a = (undefined4 *)0x1f12;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1f1a;
      func_0x000299b9();
      local_a = (undefined4 *)0x1f22;
      FUN_28b3_0ee9();
      local_a = (undefined4 *)0x1f2a;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1f33;
      FUN_28b3_0e3b();
      local_a = (undefined4 *)0x1f3b;
      FUN_28b3_0ee9();
      local_a = (undefined4 *)0x1f43;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1f4b;
      FUN_28b3_0e3b();
      local_a = (undefined4 *)0x1f53;
      FUN_28b3_0ee9();
      local_a = (undefined4 *)0x1f5b;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1f63;
      func_0x000299b9();
      local_a = (undefined4 *)0x1f6b;
      FUN_28b3_0e3b();
      local_a = (undefined4 *)0x1f73;
      FUN_28b3_0ee9();
      local_a = (undefined4 *)0x1f7b;
      FUN_28b3_0d04();
      local_a = (undefined4 *)0x1f83;
      FUN_28b3_0e3b();
      local_a = (undefined4 *)0x1f8b;
      FUN_28b3_0ee9();
      local_a = (undefined4 *)param_6;
      uStack_e._2_2_ = 0x22b2;
      uStack_e._0_2_ = 0x1f99;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      local_12 = 0x1fa3;
      FUN_28b3_0e53();
      uStack_10 = 0x22b2;
      local_12 = 0x1fab;
      func_0x000297e6();
      local_14 = 0x22b2;
      local_16 = 0x1fb5;
      FUN_28b3_0e53();
      local_14 = 0x22b2;
      local_16 = 0x1fbd;
      func_0x000297e6();
      local_1a._2_2_ = 0x22b2;
      local_1a._0_2_ = 0x1fc7;
      FUN_28b3_0e53();
      local_1a._2_2_ = 0x22b2;
      local_1a._0_2_ = 0x1fd0;
      func_0x000297e6();
      uStack_1e._2_2_ = 0x22b2;
      uStack_1e._0_2_ = 0x1fda;
      FUN_28b3_0e53();
      uStack_1e._2_2_ = param_5;
      uStack_1e._0_2_ = param_4;
      uStack_20 = param_3;
      local_22 = param_2;
      local_26._2_2_ = 0x22b2;
      local_26._0_2_ = 0x1fea;
      iVar2 = FUN_4375_c5be();
      if (iVar2 != 0) {
        puVar1 = param_8;
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + 1;
        param_8[1] = param_8[1] + (uint)(0xfffe < uVar3);
      }
      local_5a = local_6c;
      uStack_58 = uStack_6a;
      uStack_e = CONCAT22(uStack_66,uStack_68);
      puVar4 = local_7e;
    }
    local_74 = *puVar4;
    uStack_72 = puVar4[1];
    uStack_70 = puVar4[2];
    uStack_6e = puVar4[3];
    local_52 = local_52 + 1;
    uStack_56 = uStack_e;
  }
  return;
}



/* 4000:2034  FUN_4000_2034  5168 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

void __cdecl16far FUN_4000_2034(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined2 *******pppppppuVar6;
  undefined2 ******ppppppuVar7;
  undefined2 ******ppppppuVar8;
  undefined2 *******pppppppuVar9;
  undefined2 *******pppppppuVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined2 *****local_702;
  int local_700;
  int local_6fe;
  int local_6fa;
  undefined2 ******local_6f6 [10];
  undefined2 ******local_6e2 [60];
  int local_66a;
  undefined2 *******local_668;
  undefined2 *******local_666;
  undefined2 *****local_664 [41];
  undefined2 ******local_612;
  int local_610;
  undefined2 *******local_60e;
  undefined2 *******local_60c;
  byte abStack_5ff [2];
  undefined2 local_5fd;
  char local_5fb;
  undefined2 *****local_5fa [503];
  undefined2 *****local_20c;
  int local_20a;
  undefined2 *******local_208;
  undefined2 *******local_206;
  undefined2 ******local_204;
  undefined2 ******local_202;
  undefined2 *******local_200;
  undefined2 *******local_1fe;
  undefined2 *******local_1fc;
  undefined2 *******local_1fa;
  undefined2 *******local_1f8;
  undefined2 *******local_1f6;
  undefined2 *******local_1f4;
  undefined2 *******local_1f2;
  undefined2 *******local_1f0;
  undefined2 *******local_1ee;
  undefined1 local_1ec;
  undefined2 local_1ea;
  undefined2 *****local_1e6;
  int local_1e4;
  uint local_1e2;
  int local_1e0;
  undefined2 *******local_1de;
  undefined2 *******local_1dc;
  undefined2 *******local_1da;
  undefined2 *******local_1d8;
  undefined2 *****local_122;
  undefined2 ******local_120;
  int local_11e;
  undefined2 *****local_11c;
  undefined2 *******local_11a;
  undefined2 *******local_118;
  undefined2 *******local_116;
  undefined2 *******local_114;
  undefined2 ******local_112;
  uint local_110;
  int local_10e;
  undefined2 local_10c;
  undefined2 *******local_10a;
  undefined2 *******local_108;
  undefined2 *******local_106;
  undefined2 local_100;
  int local_fe;
  undefined2 *****local_fc;
  undefined2 local_fa;
  undefined2 ******local_f8 [5];
  uint local_ee;
  int local_ec;
  undefined2 *****local_e6;
  int local_e4;
  undefined2 *******local_e2;
  undefined2 *******local_e0;
  int local_de;
  undefined2 *******local_a0;
  undefined2 *******local_9e;
  char local_9c;
  undefined2 local_9a;
  int local_98;
  int local_96;
  undefined2 *****local_94 [20];
  undefined2 *****local_6c [3];
  undefined2 *****local_66;
  int local_64;
  undefined2 ******local_62 [31];
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 *******pppppppuStack_20;
  undefined2 *******pppppppuStack_1e;
  undefined2 *******pppppppuStack_1c;
  undefined2 *******pppppppuStack_1a;
  undefined2 *******pppppppuStack_18;
  undefined2 *******pppppppuStack_16;
  undefined2 *******pppppppuStack_14;
  undefined2 *******pppppppuStack_12;
  undefined2 *******local_10;
  undefined2 *******pppppppuStack_e;
  undefined2 *******pppppppuStack_c;
  undefined2 *******local_a;
  undefined2 *******local_8;
  undefined2 *******local_6;
  undefined2 *******pppppppuVar16;
  
  local_6 = (undefined2 *******)0x203f;
  FUN_21f2_0ebc();
  local_1fc = (undefined2 *******)*(int *)0x956c;
  local_1fa = (undefined2 *******)*(int *)0x956e;
  local_10e = 0;
  local_110 = 0;
  local_9c = '\0';
  local_e2 = (undefined2 *******)*(int *)0x9548;
  local_e0 = (undefined2 *******)*(int *)0x954a;
  local_fe = 0;
  local_1e6 = (undefined2 *****)0x0;
  pppppppuVar16 = (undefined2 *******)0x0;
  local_6 = (undefined2 *******)0x27ae;
  local_8 = (undefined2 *******)local_94;
  local_a = (undefined2 *******)0x22b2;
  pppppppuStack_c = (undefined2 *******)0x2090;
  local_a0 = local_e2;
  local_9e = local_e0;
  func_0x00024c86();
  local_6 = (undefined2 *******)0x27bb;
  local_8 = local_f8;
  local_a = (undefined2 *******)0x22b2;
  pppppppuStack_c = (undefined2 *******)0x20a0;
  func_0x00024c86();
  local_610 = 0;
  local_1e4 = 0;
  local_6 = (undefined2 *******)0x10c;
  local_8 = &local_10;
  local_a = (undefined2 *******)0x22b2;
  pppppppuStack_c = (undefined2 *******)0x20cd;
  func_0x00024c86();
  if ((param_1 == 10) && (*(char *)0x1106 != '\0')) {
    param_1 = 1;
    pcVar3 = (code *)swi(0x3f);
    local_1e4 = (*pcVar3)();
    if (local_1e4 != 0) {
      local_6 = (undefined2 *******)0x10c;
      local_8 = (undefined2 *******)local_6c;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x20fb;
      func_0x00024c86();
    }
  }
  pppppppuVar9 = (undefined2 *******)0x22b2;
  if ((param_1 != 2) && (param_1 != 3)) goto LAB_3ab8_781b;
  local_6 = (undefined2 *******)0xca;
  local_8 = local_62;
  local_a = (undefined2 *******)0x22b2;
  pppppppuStack_c = (undefined2 *******)0x2119;
  FUN_21f2_3454();
LAB_3ab8_759b:
  pppppppuVar6 = (undefined2 *******)0x22b2;
  local_108 = (undefined2 *******)*(int *)0xc3f0;
  local_106 = (undefined2 *******)*(int *)0xc3f2;
  local_11a = (undefined2 *******)*(int *)0xc584;
  local_118 = (undefined2 *******)*(int *)0xc586;
  local_fe = 0;
code_r0x0004281f:
  local_de = 0;
  if (local_fe == 0) {
    uVar11 = *(undefined2 *)0x9616;
    *(undefined2 *)0xbc4 = *(undefined2 *)0x9614;
    *(undefined2 *)0xbc6 = uVar11;
    uVar11 = *(undefined2 *)0x961a;
    *(undefined2 *)0xbd4 = *(undefined2 *)0x9618;
    *(undefined2 *)0xbd6 = uVar11;
    local_6fa = (*(int *)0x1b3e - *(int *)0xa5c) + 0x1d6;
    local_8 = (undefined2 *******)0x2859;
    local_6 = pppppppuVar6;
    FUN_28b3_0d8b();
    local_6 = (undefined2 *******)0x22b2;
    local_8 = (undefined2 *******)0x2862;
    FUN_28b3_0e53();
    local_6fa = (*(int *)0xa60 - *(int *)0xa5e) + 0x14a;
    local_6 = (undefined2 *******)0x22b2;
    local_8 = (undefined2 *******)0x2879;
    FUN_28b3_0d8b();
    local_6 = (undefined2 *******)0x22b2;
    pppppppuVar6 = (undefined2 *******)0x22b2;
    local_8 = (undefined2 *******)0x2882;
    FUN_28b3_0e53();
  }
LAB_3ab8_7d02:
  *(undefined2 *)0xbc0 = 1;
  local_6 = (undefined2 *******)&local_e6;
  local_a = (undefined2 *******)0x2892;
  local_8 = pppppppuVar6;
  FUN_21f2_38a0();
  local_10e = 0;
  local_110 = 0;
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x28a2;
  func_0x0000c340();
  local_6 = (undefined2 *******)0x53a;
  local_8 = (undefined2 *******)0x1de;
  local_a = (undefined2 *******)0x885;
  pppppppuStack_c = (undefined2 *******)0x28af;
  func_0x00012276();
  local_6 = (undefined2 *******)0x11f2;
  local_8 = (undefined2 *******)0x28b6;
  func_0x00010526();
  local_202 = (undefined2 ******)0x0;
  local_a = (undefined2 *******)(undefined2 ******)0xdef;
  for (local_204 = (undefined2 ******)0x1;
      ((int)local_202 <= *(int *)0x14a &&
      (((int)local_202 < *(int *)0x14a || (local_204 <= (undefined2 ******)*(uint *)0x148))));
      local_204 = (undefined2 ******)((int)local_204 + 1)) {
    local_6 = (undefined2 *******)local_202;
    local_8 = (undefined2 *******)local_204;
    pppppppuStack_c = (undefined2 *******)0x28eb;
    uVar15 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar15 + 0x14);
    *pbVar1 = *pbVar1 & 0xf7;
    local_202 = (undefined2 ******)((int)local_202 + (uint)((undefined2 ******)0xfffe < local_204));
    local_a = (undefined2 *******)(undefined2 ******)0x0;
  }
  local_202 = (undefined2 ******)0x0;
  for (local_204 = (undefined2 ******)0x1;
      ((int)local_202 <= *(int *)0x14e &&
      (((int)local_202 < *(int *)0x14e || (local_204 <= (undefined2 ******)*(uint *)0x14c))));
      local_204 = (undefined2 ******)((int)local_204 + 1)) {
    local_6 = (undefined2 *******)local_202;
    local_8 = (undefined2 *******)local_204;
    pppppppuStack_c = (undefined2 *******)0x292d;
    uVar15 = func_0x00000271();
    pbVar1 = (byte *)((int)uVar15 + 0x1e);
    *pbVar1 = *pbVar1 & 0xf7;
    local_202 = (undefined2 ******)((int)local_202 + (uint)((undefined2 ******)0xfffe < local_204));
    local_a = (undefined2 *******)(undefined2 ******)0x0;
  }
  local_8 = local_a;
  for (local_120 = (undefined2 ******)0x1; (int)local_120 <= *(int *)0x150;
      local_120 = (undefined2 ******)((int)local_120 + 1)) {
    local_6 = (undefined2 *******)local_120;
    local_a = (undefined2 *******)0x294b;
    uVar15 = func_0x00000398();
    pbVar1 = (byte *)((int)uVar15 + 0x16);
    *pbVar1 = *pbVar1 & 0xf7;
    local_8 = (undefined2 *******)(undefined2 ******)0x0;
  }
  ppppppuVar8 = local_8;
  for (local_120 = (undefined2 ******)0x1; (int)local_120 <= *(int *)0x152;
      local_120 = (undefined2 ******)((int)local_120 + 1)) {
    local_6 = (undefined2 *******)local_120;
    local_a = (undefined2 *******)0x2973;
    local_8 = (undefined2 *******)ppppppuVar8;
    uVar15 = func_0x000003ef();
    pbVar1 = (byte *)((int)uVar15 + 10);
    *pbVar1 = *pbVar1 & 0xf7;
    ppppppuVar8 = (undefined2 ******)0x0;
  }
  local_a = (undefined2 *******)*(undefined2 *)0xb310;
  local_100 = *(undefined2 *)0xa6c;
  local_10c = *(undefined2 *)0xa6a;
  local_1ea = *(undefined2 *)0x168;
  local_9a = *(undefined2 *)0x1d0;
  local_8 = (undefined2 *******)0x29b5;
  local_6 = (undefined2 *******)ppppppuVar8;
  func_0x000297e6();
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x29be;
  FUN_28b3_0e3b();
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x29c7;
  func_0x00029b6d();
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x29d0;
  func_0x00029b9d();
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x29d9;
  FUN_28b3_0e3b();
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x29e2;
  FUN_28b3_0e53();
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x29eb;
  func_0x000297e6();
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x29f4;
  FUN_28b3_0e53();
  local_64 = 0;
  local_66 = (undefined2 *****)0x0;
  local_1e0 = 0;
  local_1e2 = 0;
  local_96 = 0;
  local_11e = 0;
  local_6 = (undefined2 *******)0x0;
  local_8 = (undefined2 *******)0x22b2;
  local_a = (undefined2 *******)0x2a12;
  func_0x0000daa6();
  local_6 = (undefined2 *******)0x254;
  local_8 = local_62;
  local_a = (undefined2 *******)0x885;
  ppppppuVar8 = (undefined2 ******)0x22b2;
  pppppppuStack_c = (undefined2 *******)0x2a20;
  iVar4 = FUN_21f2_1348();
  *(int *)0xd70 = iVar4;
  if (iVar4 == 0) {
    local_6 = (undefined2 *******)0x568;
    local_8 = (undefined2 *******)0x22b2;
    ppppppuVar8 = (undefined2 ******)0x11f2;
    local_a = (undefined2 *******)0x2a32;
    FUN_13bf_0a03();
  }
  local_20c = (undefined2 *****)0x0;
  local_1ec = 0;
  local_8 = (undefined2 *******)0x2a46;
  local_6 = (undefined2 *******)ppppppuVar8;
  func_0x0000ac64();
  local_122 = (undefined2 *****)0x0;
  pppppppuVar9 = (undefined2 *******)0x885;
LAB_3ab8_881e:
  local_6 = (undefined2 *******)*(undefined2 *)0xd70;
  local_8 = (undefined2 *******)0x3e8;
  local_a = (undefined2 *******)((int)abStack_5ff + 1);
  pppppppuVar6 = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0x33b0;
  pppppppuStack_c = pppppppuVar9;
  iVar4 = func_0x0002509c();
  if (iVar4 == 0) goto LAB_3ab8_883a;
  if (abStack_5ff[1] == 0x7a) {
    if (local_de != 0) goto LAB_3ab8_83dc;
    local_702 = (undefined2 *****)0x0;
    local_6 = (undefined2 *******)&local_702;
    local_8 = (undefined2 *******)0x27f2;
    local_a = (undefined2 *******)(abStack_5ff + 2);
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuVar6 = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0x2f78;
    func_0x000253ce();
    if (local_702 == (undefined2 *****)0x1) {
      local_122 = (undefined2 *****)((uint)local_122 | 1);
    }
    if (local_702 == (undefined2 *****)0x2) {
      local_122 = (undefined2 *****)((uint)local_122 | 2);
    }
    if (local_702 == (undefined2 *****)0x3) {
      local_122 = (undefined2 *****)((uint)local_122 | 4);
    }
    if (local_702 == (undefined2 *****)0x4) {
      local_122 = (undefined2 *****)((uint)local_122 | 8);
    }
    else {
LAB_3ab8_8444:
      pppppppuVar6 = (undefined2 *******)0x22b2;
    }
  }
  else if ((abStack_5ff[1] < 0x7b) && (abStack_5ff[1] != 10)) {
    if (abStack_5ff[1] == 0x20) {
      if ((char)local_5fd != '\n') goto LAB_3ab8_858f;
    }
    else {
      if ((abStack_5ff[1] == 0x23) || (abStack_5ff[1] == 0x27)) goto LAB_3ab8_7f52;
      if (abStack_5ff[1] == 0x2b) {
LAB_3ab8_858f:
        if (local_de != 0) goto LAB_3ab8_7f7f;
        local_6f6[0] = (undefined2 ******)0x0;
        if ((param_1 == 1) && (*(char *)0x134 != '\0')) {
          local_8 = &local_1da;
          local_a = &local_200;
          pppppppuStack_c = &local_116;
          pppppppuStack_e = &local_1de;
        }
        else {
          local_8 = &local_200;
          local_a = &local_1da;
          pppppppuStack_c = &local_1de;
          pppppppuStack_e = &local_116;
        }
        local_6 = (undefined2 *******)&local_11c;
        local_10 = (undefined2 *******)((int)abStack_5ff + 1);
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        pppppppuStack_14 = (undefined2 *******)0x3168;
        local_702 = (undefined2 *****)FUN_3ab8_5ba1();
        if ((int)local_702 < 2) goto LAB_3ab8_7f52;
        if ((int)local_702 < 4) {
          if (local_8 != (undefined2 *******)0x0) {
            local_6 = local_1f2;
            local_8 = local_1f4;
            local_a = local_1dc;
            pppppppuStack_c = local_1de;
            pppppppuStack_e = local_114;
            local_10 = local_116;
            pppppppuStack_12 = local_206;
            pppppppuStack_14 = local_208;
            pppppppuStack_16 = local_1ee;
            pppppppuStack_18 = local_1f0;
            pppppppuStack_1a = local_118;
            pppppppuStack_1c = local_11a;
            pppppppuStack_1e = local_106;
            pppppppuStack_20 = local_108;
            uStack_22 = 0x22b2;
            uStack_24 = 0x31c1;
            iVar4 = FUN_4375_c5be();
            if (iVar4 != 0) {
              local_6f6[0] = (undefined2 ******)0x1;
              bVar12 = (undefined2 *****)0xfffe < local_66;
              local_66 = (undefined2 *****)((int)local_66 + 1);
              local_64 = local_64 + (uint)bVar12;
              local_1ec = 1;
            }
          }
          local_8 = (undefined2 *******)((int)local_8 + 1);
          local_1f0 = local_116;
          local_1ee = local_114;
          local_208 = local_1de;
          local_206 = local_1dc;
        }
        else {
          local_6 = local_1f2;
          local_8 = local_1f4;
          local_a = local_1fe;
          pppppppuStack_c = local_200;
          pppppppuStack_e = local_1d8;
          local_10 = local_1da;
          pppppppuStack_12 = local_1dc;
          pppppppuStack_14 = local_1de;
          pppppppuStack_16 = local_114;
          pppppppuStack_18 = local_116;
          pppppppuStack_1a = local_118;
          pppppppuStack_1c = local_11a;
          pppppppuStack_1e = local_106;
          pppppppuStack_20 = local_108;
          uStack_22 = 0x22b2;
          uStack_24 = 0x323c;
          iVar4 = FUN_4375_c5be();
          if (iVar4 != 0) {
            local_6f6[0] = (undefined2 ******)0x1;
            bVar12 = (undefined2 *****)0xfffe < local_66;
            local_66 = (undefined2 *****)((int)local_66 + 1);
            local_64 = local_64 + (uint)bVar12;
            local_1ec = 1;
            if ((4 < (int)local_702) && (local_11c == (undefined2 *****)0x1)) {
              local_6 = (undefined2 *******)*(undefined2 *)0x14a;
              local_8 = (undefined2 *******)*(undefined2 *)0x148;
              local_a = (undefined2 *******)0x22b2;
              pppppppuVar6 = (undefined2 *******)0x0;
              pppppppuStack_c = (undefined2 *******)0x3271;
              uVar15 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar15 + 0x15);
              *pbVar1 = *pbVar1 | 0x80;
            }
          }
        }
        if ((0 < (int)local_20c) && (local_8 != (undefined2 *******)0x1)) {
          local_a = pppppppuVar6;
          if (local_20c == (undefined2 *****)0x1) {
            local_6 = (undefined2 *******)*(undefined2 *)0x14a;
            local_8 = (undefined2 *******)*(undefined2 *)0x148;
            pppppppuStack_c = (undefined2 *******)0x329d;
            uVar15 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar15 + 0x14);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else {
            local_6 = (undefined2 *******)*(undefined2 *)0x14a;
            local_8 = (undefined2 *******)*(undefined2 *)0x148;
            pppppppuStack_c = (undefined2 *******)0x32b7;
            uVar15 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar15 + 0x14);
            *pbVar1 = *pbVar1 | 0x80;
          }
          pppppppuVar6 = (undefined2 *******)0x0;
          local_20c = (undefined2 *****)((int)local_20c + 1);
        }
        if (local_6f6[0] != (undefined2 ******)0x0) {
          pppppppuVar9 = pppppppuVar6;
          if (((uint)local_122 & 1) != 0) {
            local_6 = (undefined2 *******)*(undefined2 *)0x14a;
            local_8 = (undefined2 *******)*(undefined2 *)0x148;
            pppppppuVar9 = (undefined2 *******)0x0;
            pppppppuStack_c = (undefined2 *******)0x32e4;
            local_a = pppppppuVar6;
            uVar15 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar15 + 0x14);
            *pbVar1 = *pbVar1 | 0x20;
          }
          pppppppuVar10 = pppppppuVar9;
          if (((uint)local_122 & 2) != 0) {
            local_6 = (undefined2 *******)*(undefined2 *)0x14a;
            local_8 = (undefined2 *******)*(undefined2 *)0x148;
            pppppppuVar10 = (undefined2 *******)0x0;
            pppppppuStack_c = (undefined2 *******)0x3303;
            local_a = pppppppuVar9;
            uVar15 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar15 + 0x15);
            *pbVar1 = *pbVar1 | 8;
          }
          pppppppuVar6 = pppppppuVar10;
          if (((uint)local_122 & 4) != 0) {
            local_6 = (undefined2 *******)*(undefined2 *)0x14a;
            local_8 = (undefined2 *******)*(undefined2 *)0x148;
            pppppppuVar6 = (undefined2 *******)0x0;
            pppppppuStack_c = (undefined2 *******)0x3322;
            local_a = pppppppuVar10;
            uVar15 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar15 + 0x15);
            *pbVar1 = *pbVar1 | 0x20;
          }
          if (((uint)local_122 & 8) != 0) {
            local_6 = (undefined2 *******)*(undefined2 *)0x14a;
            local_8 = (undefined2 *******)*(undefined2 *)0x148;
            pppppppuStack_c = (undefined2 *******)0x3344;
            local_a = pppppppuVar6;
            uVar15 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar15 + 0x15);
            *pbVar1 = *pbVar1 | 0x10;
            local_6 = (undefined2 *******)*(undefined2 *)0x14a;
            local_8 = (undefined2 *******)*(undefined2 *)0x148;
            local_a = (undefined2 *******)0x0;
            pppppppuVar6 = (undefined2 *******)0x0;
            pppppppuStack_c = (undefined2 *******)0x335c;
            uVar15 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar15 + 0x15);
            *pbVar1 = *pbVar1 | 0x80;
          }
        }
      }
      else {
        if ((char)(abStack_5ff[1] - 0x2b) < '\x02') goto LAB_3ab8_7f52;
        if (abStack_5ff[1] == 0x2e || (char)(abStack_5ff[1] - 0x2d) < '\x01') goto LAB_3ab8_858f;
        if ((char)(abStack_5ff[1] - 0x2e) < '\x02') goto LAB_3ab8_7f52;
        if (abStack_5ff[1] == 0x39 || (char)(abStack_5ff[1] - 0x30) < '\t') goto LAB_3ab8_858f;
        if (abStack_5ff[1] != 0x42) {
          if (abStack_5ff[1] == 0x4c) {
            if ((char)local_5fd != 'A') {
              local_6 = (undefined2 *******)&local_11c;
              local_8 = &local_200;
              local_a = &local_1da;
              pppppppuStack_c = &local_1de;
              pppppppuStack_e = &local_116;
              local_10 = (undefined2 *******)(abStack_5ff + 2);
              pppppppuStack_12 = (undefined2 *******)0x22b2;
              pppppppuStack_14 = (undefined2 *******)0x2b44;
              FUN_3ab8_5ba1();
              local_6 = local_1f2;
              local_8 = local_1f4;
              local_a = local_1fe;
              pppppppuStack_c = local_200;
              pppppppuStack_e = local_1d8;
              local_10 = local_1da;
              pppppppuStack_12 = local_1dc;
              pppppppuStack_14 = local_1de;
              pppppppuStack_16 = local_114;
              pppppppuStack_18 = local_116;
              pppppppuStack_1a = local_118;
              pppppppuStack_1c = local_11a;
              pppppppuStack_1e = local_106;
              pppppppuStack_20 = local_108;
              uStack_22 = 0x22b2;
              uStack_24 = 0x2b83;
              iVar4 = FUN_4375_c5be();
              if (iVar4 != 0) {
                bVar12 = (undefined2 *****)0xfffe < local_66;
                local_66 = (undefined2 *****)((int)local_66 + 1);
                local_64 = local_64 + (uint)bVar12;
              }
              goto LAB_3ab8_8012;
            }
            local_6 = &local_6;
            local_8 = (undefined2 *******)((int)abStack_5ff + 1);
            local_a = (undefined2 *******)0x22b2;
            pppppppuStack_c = (undefined2 *******)0x2af7;
            FUN_3ab8_6c27();
            local_610 = 1;
          }
          else if (abStack_5ff[1] == 0x62) {
            local_6 = (undefined2 *******)&local_20c;
            local_8 = &local_8;
            local_a = (undefined2 *******)0x22b2;
            pppppppuStack_c = (undefined2 *******)0x2ec1;
            FUN_3ab8_6bec();
            if ((char)local_5fd == 'y') {
              local_fc = (undefined2 *****)*(undefined2 *)0x9548;
              local_fa = *(undefined2 *)0x954a;
              local_6 = (undefined2 *******)&local_fc;
              local_8 = (undefined2 *******)((int)abStack_5ff + 3);
              local_a = (undefined2 *******)0x22b2;
              pppppppuStack_c = (undefined2 *******)0x2eea;
              local_702 = (undefined2 *****)FUN_3ab8_5b62();
              uVar13 = 0;
              if (0 < (int)local_702) {
                local_6 = (undefined2 *******)0x22b2;
                local_8 = (undefined2 *******)0x2efd;
                func_0x000297e6();
                local_6 = (undefined2 *******)0x22b2;
                local_8 = (undefined2 *******)0x2f06;
                func_0x000297e6();
                local_6 = (undefined2 *******)0x22b2;
                local_8 = (undefined2 *******)0x2f0b;
                FUN_28b3_1181();
                if ((bool)uVar13) {
                  local_6 = (undefined2 *******)0x22b2;
                  local_8 = (undefined2 *******)0x2f16;
                  func_0x000297e6();
                  local_6 = (undefined2 *******)0x22b2;
                  local_8 = (undefined2 *******)0x2f1f;
                  func_0x00029b6d();
                  goto LAB_3ab8_8328;
                }
              }
            }
LAB_3ab8_83dc:
            pppppppuVar6 = (undefined2 *******)0x22b2;
          }
          else {
            if (abStack_5ff[1] == 99) {
              local_6 = (undefined2 *******)&local_20c;
              local_8 = &local_8;
              local_a = (undefined2 *******)0x22b2;
              pppppppuStack_c = (undefined2 *******)0x2fbb;
              FUN_3ab8_6bec();
              if (local_de != 0) goto LAB_3ab8_8444;
              local_6 = (undefined2 *******)&local_1e6;
              local_8 = (undefined2 *******)&local_122;
              local_a = local_1f2;
              pppppppuStack_c = local_1f4;
              pppppppuStack_e = local_118;
              local_10 = local_11a;
              pppppppuStack_12 = local_106;
              pppppppuStack_14 = local_108;
              pppppppuStack_16 = (undefined2 *******)((int)abStack_5ff + 1);
              pppppppuStack_18 = (undefined2 *******)0x22b2;
              pppppppuStack_1a = (undefined2 *******)0x2ff2;
              local_702 = (undefined2 *****)FUN_3ab8_5e79();
              if (0 < (int)local_702) {
                local_96 = local_96 + (int)local_702;
                local_1ec = 1;
              }
              if ((int)local_702 < 0) {
                bVar12 = 0xfffe < local_1e2;
                local_1e2 = local_1e2 + 1;
                local_1e0 = local_1e0 + (uint)bVar12;
LAB_3ab8_8494:
                local_1ec = 1;
              }
              goto LAB_3ab8_7f7f;
            }
            if (abStack_5ff[1] == 100) {
              local_6 = (undefined2 *******)&local_20c;
              local_8 = &local_8;
              local_a = (undefined2 *******)0x22b2;
              pppppppuStack_c = (undefined2 *******)0x2e3d;
              FUN_3ab8_6bec();
              if ((char)local_5fd == 'u') {
                pppppppuVar16 = (undefined2 *******)0x1;
                local_1f8 = local_1fc;
                local_1f6 = local_1fa;
                local_1f4 = local_1fc;
                local_1f2 = local_1fa;
              }
              if ((char)local_5fd != 'z') goto LAB_3ab8_83dc;
              pppppppuVar16 = (undefined2 *******)0x0;
              local_6 = (undefined2 *******)0x22b2;
              local_8 = (undefined2 *******)0x2e7b;
              func_0x000297e6();
              local_6 = (undefined2 *******)0x22b2;
              local_8 = (undefined2 *******)0x2e84;
              func_0x00029b6d();
              local_6 = (undefined2 *******)0x22b2;
              local_8 = (undefined2 *******)0x2e8d;
              func_0x00029b9d();
              local_6 = (undefined2 *******)0x22b2;
              local_8 = (undefined2 *******)0x2e96;
              FUN_28b3_0e3b();
              local_6 = (undefined2 *******)0x22b2;
              local_8 = (undefined2 *******)0x2e9f;
              FUN_28b3_0e53();
              local_6 = (undefined2 *******)0x22b2;
              local_8 = (undefined2 *******)0x2ea8;
              func_0x000297e6();
LAB_3ab8_8328:
              local_6 = (undefined2 *******)0x22b2;
              pppppppuVar6 = (undefined2 *******)0x22b2;
              local_8 = (undefined2 *******)0x2eb1;
              FUN_28b3_0e53();
            }
            else if (abStack_5ff[1] == 0x68) {
              local_6 = (undefined2 *******)&local_20c;
              local_8 = &local_8;
              local_a = (undefined2 *******)0x22b2;
              pppppppuStack_c = (undefined2 *******)0x2dfe;
              FUN_3ab8_6bec();
              if ((char)local_5fd == '#') {
                *(undefined2 *)0xc22 = 1;
                local_6 = (undefined2 *******)0xffff;
                local_8 = (undefined2 *******)0x6;
                local_a = (undefined2 *******)0x2;
                pppppppuStack_c = (undefined2 *******)0x12;
                pppppppuStack_e = (undefined2 *******)((int)abStack_5ff + 3);
                local_10 = (undefined2 *******)0x22b2;
                pppppppuVar6 = (undefined2 *******)0xdef;
                pppppppuStack_12 = (undefined2 *******)0x2e2a;
                FUN_1000_02b5();
              }
            }
            else if (abStack_5ff[1] == 0x6b) {
              local_6 = (undefined2 *******)&local_20c;
              local_8 = &local_8;
              local_a = (undefined2 *******)0x22b2;
              pppppppuStack_c = (undefined2 *******)0x30db;
              FUN_3ab8_6bec();
              local_6 = (undefined2 *******)&local_66;
              local_8 = local_1f2;
              local_a = local_1f4;
              pppppppuStack_c = local_118;
              pppppppuStack_e = local_11a;
              local_10 = local_106;
              pppppppuStack_12 = local_108;
              pppppppuStack_14 = (undefined2 *******)((int)abStack_5ff + 1);
              pppppppuStack_16 = (undefined2 *******)0x22b2;
              pppppppuStack_18 = (undefined2 *******)0x3102;
              FUN_3ab8_6ee8();
            }
            else if (abStack_5ff[1] == 0x6c) {
              local_6 = (undefined2 *******)&local_20c;
              local_8 = &local_8;
              local_a = (undefined2 *******)0x22b2;
              pppppppuStack_c = (undefined2 *******)0x2f2e;
              FUN_3ab8_6bec();
              if (local_de != 0) goto LAB_3ab8_83dc;
              local_6 = &local_1f4;
              local_8 = &local_1fc;
              local_a = &local_1f8;
              pppppppuStack_e = (undefined2 *******)((int)abStack_5ff + 1);
              local_10 = (undefined2 *******)0x22b2;
              pppppppuStack_12 = (undefined2 *******)0x2f52;
              pppppppuStack_c = pppppppuVar16;
              FUN_3ab8_5c3f();
            }
            else if (abStack_5ff[1] == 0x70) {
              local_6 = (undefined2 *******)&local_20c;
              local_8 = &local_8;
              local_a = (undefined2 *******)0x22b2;
              pppppppuStack_c = (undefined2 *******)0x307a;
              FUN_3ab8_6bec();
              if (local_de == 0) {
                if ((char)local_5fd == 'l') {
                  local_20c = (undefined2 *****)0x1;
                }
                else {
                  local_6 = (undefined2 *******)&local_122;
                  local_8 = local_1f2;
                  local_a = local_1f4;
                  pppppppuStack_c = local_118;
                  pppppppuStack_e = local_11a;
                  local_10 = local_106;
                  pppppppuStack_12 = local_108;
                  pppppppuStack_14 = (undefined2 *******)((int)abStack_5ff + 1);
                  pppppppuStack_16 = (undefined2 *******)0x22b2;
                  pppppppuStack_18 = (undefined2 *******)0x30bc;
                  local_702 = (undefined2 *****)FUN_3ab8_69e4();
                  if (0 < (int)local_702) {
                    local_11e = local_11e + 1;
                    goto LAB_3ab8_8494;
                  }
                }
              }
            }
            else {
              if (abStack_5ff[1] != 0x73) goto LAB_3ab8_7f52;
              local_6 = (undefined2 *******)&local_20c;
              local_8 = &local_8;
              local_a = (undefined2 *******)0x22b2;
              pppppppuStack_c = (undefined2 *******)0x3029;
              FUN_3ab8_6bec();
              if ((char)local_5fd == 't') {
                if (local_de == 0) {
                  local_a0 = local_108;
                  local_9e = local_106;
                  local_e2 = local_11a;
                  local_e0 = local_118;
                  local_9c = '\x01';
                  goto LAB_3ab8_8849;
                }
                local_de = 0;
              }
            }
          }
          goto LAB_3ab8_7f7f;
        }
        local_6 = (undefined2 *******)0x27df;
        local_8 = (undefined2 *******)((int)abStack_5ff + 1);
        local_a = (undefined2 *******)0x22b2;
        pppppppuStack_c = (undefined2 *******)0x2bbd;
        FUN_21f2_3c12();
        local_6 = (undefined2 *******)&local_702;
        local_8 = (undefined2 *******)0x27e3;
        local_a = (undefined2 *******)0x27e1;
        pppppppuStack_c = (undefined2 *******)0x0;
        pppppppuStack_e = (undefined2 *******)0x22b2;
        local_10 = (undefined2 *******)0x2bd4;
        local_112 = (undefined2 ******)FUN_21f2_3c12();
        pppppppuStack_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0x2be0;
        local_a = (undefined2 *******)local_112;
        func_0x000253ce();
        local_6 = &local_116;
        local_8 = (undefined2 *******)0x27e6;
        local_a = (undefined2 *******)0x0;
        pppppppuStack_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0x2bf4;
        local_112 = (undefined2 ******)FUN_21f2_3c12();
        local_a = (undefined2 *******)0x22b2;
        pppppppuStack_c = (undefined2 *******)0x2bff;
        local_8 = (undefined2 *******)local_112;
        FUN_3ab8_5b62();
        local_6 = &local_1de;
        local_8 = (undefined2 *******)0x27e8;
        local_a = (undefined2 *******)0x0;
        pppppppuStack_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0x2c12;
        local_112 = (undefined2 ******)FUN_21f2_3c12();
        local_a = (undefined2 *******)0x22b2;
        pppppppuStack_c = (undefined2 *******)0x2c1d;
        local_8 = (undefined2 *******)local_112;
        FUN_3ab8_5b62();
        local_6 = &local_1da;
        local_8 = (undefined2 *******)0x27ea;
        local_a = (undefined2 *******)0x0;
        pppppppuStack_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0x2c30;
        local_112 = (undefined2 ******)FUN_21f2_3c12();
        local_a = (undefined2 *******)0x22b2;
        pppppppuStack_c = (undefined2 *******)0x2c3b;
        local_8 = (undefined2 *******)local_112;
        FUN_3ab8_5b62();
        local_6 = &local_200;
        local_8 = (undefined2 *******)0x27ec;
        local_a = (undefined2 *******)0x0;
        pppppppuStack_c = (undefined2 *******)0x22b2;
        pppppppuStack_e = (undefined2 *******)0x2c4e;
        local_112 = (undefined2 ******)FUN_21f2_3c12();
        local_a = (undefined2 *******)0x22b2;
        pppppppuStack_c = (undefined2 *******)0x2c59;
        local_8 = (undefined2 *******)local_112;
        FUN_3ab8_5b62();
        local_700 = 0;
        local_6fe = 1;
        for (local_66a = 1; local_66a < (int)local_702; local_66a = local_66a + 1) {
          local_6 = local_1f2;
          local_8 = local_1f4;
          local_a = local_1fe;
          pppppppuStack_c = local_200;
          pppppppuStack_e = local_1d8;
          local_10 = local_1da;
          pppppppuStack_12 = local_1dc;
          pppppppuStack_14 = local_1de;
          pppppppuStack_16 = local_114;
          pppppppuStack_18 = local_116;
          pppppppuStack_1a = local_118;
          pppppppuStack_1c = local_11a;
          pppppppuStack_1e = local_106;
          pppppppuStack_20 = local_108;
          uStack_22 = 0x22b2;
          uStack_24 = 0x2cab;
          iVar4 = FUN_4375_c5be();
          if (iVar4 != 0) {
            bVar12 = (undefined2 *****)0xfffe < local_66;
            local_66 = (undefined2 *****)((int)local_66 + 1);
            local_64 = local_64 + (uint)bVar12;
          }
          local_6 = (undefined2 *******)*(undefined2 *)0x14a;
          local_8 = (undefined2 *******)*(undefined2 *)0x148;
          local_a = (undefined2 *******)0x22b2;
          pppppppuStack_c = (undefined2 *******)0x2cc7;
          uVar15 = func_0x0000013f();
          uVar11 = (undefined2)((ulong)uVar15 >> 0x10);
          puVar2 = (uint *)((int)uVar15 + 0x14);
          *puVar2 = *puVar2 ^ (byte)(*(byte *)((int)uVar15 + 0x14) ^ (byte)(local_6fe << 6)) & 0x40;
          local_6 = (undefined2 *******)*(undefined2 *)0x14a;
          local_8 = (undefined2 *******)*(undefined2 *)0x148;
          local_a = (undefined2 *******)0x0;
          pppppppuStack_c = (undefined2 *******)0x2cf7;
          uVar15 = func_0x0000013f();
          uVar11 = (undefined2)((ulong)uVar15 >> 0x10);
          puVar2 = (uint *)((int)uVar15 + 0x14);
          *puVar2 = *puVar2 ^ (byte)(*(byte *)((int)uVar15 + 0x14) ^ (byte)(local_700 << 7)) & 0x80;
          local_6fe = 0;
          local_700 = 1;
          local_116 = local_1da;
          local_114 = local_1d8;
          local_1de = local_200;
          local_1dc = local_1fe;
          local_6 = &local_1da;
          local_8 = (undefined2 *******)0x27ee;
          local_a = (undefined2 *******)0x0;
          pppppppuStack_c = (undefined2 *******)0x0;
          pppppppuStack_e = (undefined2 *******)0x2d57;
          local_112 = (undefined2 ******)FUN_21f2_3c12();
          local_a = (undefined2 *******)0x22b2;
          pppppppuStack_c = (undefined2 *******)0x2d62;
          local_8 = (undefined2 *******)local_112;
          FUN_3ab8_5b62();
          local_6 = &local_200;
          local_8 = (undefined2 *******)0x27f0;
          local_a = (undefined2 *******)0x0;
          pppppppuStack_c = (undefined2 *******)0x22b2;
          pppppppuStack_e = (undefined2 *******)0x2d75;
          local_112 = (undefined2 ******)FUN_21f2_3c12();
          local_a = (undefined2 *******)0x22b2;
          pppppppuStack_c = (undefined2 *******)0x2d80;
          local_8 = (undefined2 *******)local_112;
          FUN_3ab8_5b62();
        }
        local_700 = 1;
        local_6fe = 1;
        local_6 = (undefined2 *******)*(undefined2 *)0x14a;
        local_8 = (undefined2 *******)*(undefined2 *)0x148;
        local_a = (undefined2 *******)0x22b2;
        pppppppuStack_c = (undefined2 *******)0x2dab;
        uVar15 = func_0x0000013f();
        uVar11 = (undefined2)((ulong)uVar15 >> 0x10);
        puVar2 = (uint *)((int)uVar15 + 0x14);
        *puVar2 = *puVar2 ^ ~*(uint *)((int)uVar15 + 0x14) & 0x40;
        local_6 = (undefined2 *******)*(undefined2 *)0x14a;
        local_8 = (undefined2 *******)*(undefined2 *)0x148;
        local_a = (undefined2 *******)0x0;
        pppppppuVar6 = (undefined2 *******)0x0;
        pppppppuStack_c = (undefined2 *******)0x2dd3;
        uVar15 = func_0x0000013f();
        uVar11 = (undefined2)((ulong)uVar15 >> 0x10);
        puVar2 = (uint *)((int)uVar15 + 0x14);
        *puVar2 = *puVar2 ^ ~*(uint *)((int)uVar15 + 0x14) & 0x80;
LAB_3ab8_8012:
        local_6 = (undefined2 *******)&local_20c;
        local_8 = &local_8;
        pppppppuStack_c = (undefined2 *******)0x2b9f;
        local_a = pppppppuVar6;
        FUN_3ab8_6bec();
        local_1ec = 1;
      }
      local_122 = (undefined2 *****)0x0;
    }
  }
  else {
LAB_3ab8_7f52:
    local_6 = (undefined2 *******)&local_20c;
    local_8 = &local_8;
    local_a = (undefined2 *******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0x2adf;
    FUN_3ab8_6bec();
  }
LAB_3ab8_7f7f:
  bVar12 = 0xfffe < local_110;
  local_110 = local_110 + 1;
  local_10e = local_10e + (uint)bVar12;
  pppppppuVar9 = pppppppuVar6;
  if ((local_110 & 0xf) == 0) {
                    /* WARNING: Subroutine does not return */
    local_8 = (undefined2 *******)0x2b18;
    local_6 = pppppppuVar6;
    thunk_FUN_32b2_02bc();
  }
  goto LAB_3ab8_881e;
LAB_3ab8_883a:
  local_6 = (undefined2 *******)&local_20c;
  local_8 = &local_8;
  local_a = (undefined2 *******)0x22b2;
  pppppppuStack_c = (undefined2 *******)0x33c7;
  FUN_3ab8_6bec();
LAB_3ab8_8849:
  *(undefined2 *)0xd70 = 0;
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x33d4;
  func_0x0002504e();
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x33d9;
  FUN_1885_2ec3();
  if (*(int *)0x158 == 0) {
                    /* WARNING: Subroutine does not return */
    local_6 = (undefined2 *******)0x1b6e;
    local_8 = (undefined2 *******)0x33e5;
    thunk_FUN_32b2_02bc();
  }
  *(undefined1 *)(local_6 + 0x5b6) = 1;
  *(undefined1 *)(local_6 + 0x5be) = 1;
  uVar5 = (uint)*(byte *)(local_6 + 0x5c7);
  *(uint *)0xb310 = uVar5;
  uVar11 = *(undefined2 *)((int)local_6 * 4 + 0xb2c);
  *(undefined2 *)0xb26 = *(undefined2 *)((int)local_6 * 4 + 0xb2a);
  *(undefined2 *)0xb28 = uVar11;
  if (*(char *)(uVar5 + 0xc292) != '\0') {
    *(uint *)0xa6c = (uint)*(byte *)(uVar5 + 0xc292);
  }
  if (*(char *)(uVar5 + 0xb66a) != '\0') {
    *(uint *)0xa6a = (uint)*(byte *)(uVar5 + 0xb66a);
  }
  local_6 = (undefined2 *******)0xb5b6;
  local_8 = (undefined2 *******)0x1b6e;
  local_a = (undefined2 *******)0x343b;
  FUN_21f2_38a0();
  local_ee = (int)*(uint *)0xb5b6 - (int)local_e6;
  local_ec = (*(int *)0xb5b8 - local_e4) - (uint)((undefined2 ****)*(uint *)0xb5b6 < local_e6);
  puVar2 = (uint *)0xc134;
  uVar5 = *puVar2;
  *puVar2 = *puVar2 + local_ee;
  *(int *)0xc136 = *(int *)0xc136 + local_ec + (uint)CARRY2(uVar5,local_ee);
  puVar2 = (uint *)0xc0b0;
  uVar5 = *puVar2;
  *puVar2 = *puVar2 + local_ee;
  *(int *)0xc0b2 = *(int *)0xc0b2 + local_ec + (uint)CARRY2(uVar5,local_ee);
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x3468;
  func_0x0000b6ea();
  local_6 = (undefined2 *******)0x885;
  pppppppuVar9 = (undefined2 *******)0x885;
  local_8 = (undefined2 *******)0x346d;
  func_0x0000abfa();
  if (local_610 != 0) {
    local_6 = (undefined2 *******)0x0;
    local_8 = (undefined2 *******)0x885;
    pppppppuVar9 = (undefined2 *******)0x11f2;
    local_a = (undefined2 *******)0x347c;
    FUN_13bf_0b1b();
  }
  if (*(int *)0x158 != 0) {
    return;
  }
LAB_3ab8_8907:
  if (local_9c == '\0') {
    if (local_1e4 == 2) {
      return;
    }
  }
  else {
    local_6 = (undefined2 *******)0x27f9;
    local_8 = (undefined2 *******)0xd18;
    local_a = (undefined2 *******)local_664;
    pppppppuStack_e = (undefined2 *******)0x34a3;
    pppppppuStack_c = pppppppuVar9;
    func_0x0001263c();
    local_6 = (undefined2 *******)0x258;
    local_8 = (undefined2 *******)local_664;
    local_a = (undefined2 *******)0x11f2;
    uVar11 = 0x22b2;
    pppppppuStack_c = (undefined2 *******)0x34b4;
    iVar4 = FUN_21f2_1348();
    *(int *)0xd70 = iVar4;
    if (iVar4 == 0) {
      local_6 = (undefined2 *******)0x568;
      local_8 = (undefined2 *******)0x22b2;
      uVar11 = 0x11f2;
      local_a = (undefined2 *******)0x34c6;
      FUN_13bf_0a03();
    }
    local_6 = local_62;
    local_8 = (undefined2 *******)0x2806;
    local_a = (undefined2 *******)*(undefined2 *)0xd70;
    pppppppuStack_e = (undefined2 *******)0x34d8;
    pppppppuStack_c = (undefined2 *******)uVar11;
    func_0x0002327e();
    local_6 = (undefined2 *******)0x22b2;
    local_8 = (undefined2 *******)0x34e4;
    func_0x000297e6();
    local_6 = (undefined2 *******)0x22b2;
    local_8 = (undefined2 *******)0x34e9;
    func_0x00029d78();
    pppppppuStack_e = (undefined2 *******)0x22b2;
    local_10 = (undefined2 *******)0x34f3;
    func_0x000299d1();
    pppppppuStack_e = (undefined2 *******)0x22b2;
    local_10 = (undefined2 *******)0x34fc;
    func_0x000297e6();
    pppppppuStack_e = (undefined2 *******)0x22b2;
    local_10 = (undefined2 *******)0x3501;
    func_0x00029d78();
    pppppppuStack_16 = (undefined2 *******)0x22b2;
    pppppppuStack_18 = (undefined2 *******)0x350b;
    func_0x000299d1();
    pppppppuStack_16 = (undefined2 *******)0x280e;
    pppppppuStack_18 = (undefined2 *******)*(int *)0xd70;
    pppppppuStack_1a = (undefined2 *******)0x22b2;
    pppppppuStack_1c = (undefined2 *******)0x3518;
    func_0x0002327e();
    *(undefined2 *)0xd70 = 0;
    local_6 = (undefined2 *******)0x22b2;
    pppppppuVar9 = (undefined2 *******)0x22b2;
    local_8 = (undefined2 *******)0x3526;
    func_0x0002504e();
    local_6 = (undefined2 *******)local_94;
    local_8 = (undefined2 *******)0x1;
    local_a = (undefined2 *******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0x3533;
    local_20a = FUN_3ab8_577d();
    if (*(int *)0x158 != 0) {
      return;
    }
    if ((local_20a != -1) && (local_20a != 0)) goto code_r0x00043549;
  }
LAB_3ab8_75ed:
  pppppppuVar6 = (undefined2 *******)0x885;
  local_8 = (undefined2 *******)0x2172;
  local_6 = pppppppuVar9;
  func_0x0000ac64();
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xc22 = 0;
  do {
    pppppppuVar9 = pppppppuVar6;
    if (*(int *)0x158 != 0) goto LAB_3ab8_7c4c;
LAB_3ab8_7608:
    do {
      local_6 = (undefined2 *******)0x6da;
      local_8 = local_6e2;
      pppppppuStack_c = (undefined2 *******)0x2196;
      local_a = pppppppuVar9;
      func_0x00024c86();
      local_6 = (undefined2 *******)0x302;
      local_8 = local_6e2;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x21a6;
      FUN_21f2_2d26();
      local_6 = (undefined2 *******)0x2f0;
      local_8 = local_6e2;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x21b6;
      FUN_21f2_2d26();
      local_6 = (undefined2 *******)0x98a;
      local_8 = local_6e2;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x21c6;
      FUN_21f2_2d26();
      local_6 = (undefined2 *******)0x6da;
      local_8 = local_6e2;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x21d6;
      FUN_21f2_2d26();
      local_6 = (undefined2 *******)0x27cb;
      local_8 = local_6e2;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x21e6;
      FUN_21f2_2d26();
      local_6 = (undefined2 *******)0x98a;
      local_8 = local_6e2;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x21f6;
      FUN_21f2_2d26();
      local_6 = local_f8;
      local_8 = local_6e2;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x2207;
      FUN_21f2_2d26();
      local_6 = (undefined2 *******)0x98a;
      local_8 = local_6e2;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x2217;
      FUN_21f2_2d26();
      local_6 = (undefined2 *******)local_94;
      local_8 = local_6e2;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x2228;
      FUN_21f2_2d26();
      local_6 = (undefined2 *******)0x98a;
      local_8 = local_6e2;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x2238;
      FUN_21f2_2d26();
      if (*(char *)0x124 != '\0') {
        local_6 = (undefined2 *******)0x98a;
        local_8 = local_6e2;
        local_a = (undefined2 *******)0x22b2;
        pppppppuStack_c = (undefined2 *******)0x224f;
        FUN_21f2_2d26();
      }
      local_6 = local_6e2;
      local_8 = (undefined2 *******)0x3;
      local_a = (undefined2 *******)0x22b2;
      pppppppuVar9 = (undefined2 *******)0x1bb4;
      pppppppuStack_c = (undefined2 *******)0x225f;
      FUN_1def_07a4();
      if (*(int *)0xc22 == 0) {
        if ((param_1 == 1) && (*(char *)0x134 != '\0')) {
          local_6 = (undefined2 *******)0xffff;
          local_8 = (undefined2 *******)0x7;
          local_a = (undefined2 *******)0x2;
          pppppppuStack_c = (undefined2 *******)0x1e;
          pppppppuStack_e = (undefined2 *******)0x27d0;
          local_10 = (undefined2 *******)0x1bb4;
          pppppppuVar9 = (undefined2 *******)0xdef;
          pppppppuStack_12 = (undefined2 *******)0x2291;
          FUN_1000_02b5();
        }
        local_8 = (undefined2 *******)0x229d;
        local_6 = pppppppuVar9;
        func_0x000297e6();
        local_6 = (undefined2 *******)0x22b2;
        local_8 = (undefined2 *******)0x22a2;
        func_0x00029d78();
        pppppppuStack_e = (undefined2 *******)0x22b2;
        local_10 = (undefined2 *******)0x22ac;
        func_0x000299d1();
        pppppppuStack_e = (undefined2 *******)0x27d4;
        local_10 = local_6f6;
        pppppppuStack_12 = (undefined2 *******)0x22b2;
        pppppppuStack_14 = (undefined2 *******)0x22ba;
        FUN_21f2_3454();
        local_6 = (undefined2 *******)0xffff;
        local_8 = (undefined2 *******)0x7;
        local_a = (undefined2 *******)0x2;
        pppppppuStack_c = (undefined2 *******)0x37;
        pppppppuStack_e = local_6f6;
        local_10 = (undefined2 *******)0x22b2;
        pppppppuVar9 = (undefined2 *******)0xdef;
        pppppppuStack_12 = (undefined2 *******)0x22d7;
        FUN_1000_02b5();
        if (local_fe != 0) {
          local_6 = (undefined2 *******)0xffff;
          local_8 = (undefined2 *******)0x7;
          local_a = (undefined2 *******)0x2;
          pppppppuStack_c = (undefined2 *******)0x46;
          pppppppuStack_e = (undefined2 *******)0x27da;
          local_10 = (undefined2 *******)0xdef;
          pppppppuVar9 = (undefined2 *******)0xdef;
          pppppppuStack_12 = (undefined2 *******)0x22fa;
          FUN_1000_02b5();
        }
      }
      pppppppuVar6 = pppppppuVar9;
      if (local_9c != '\0') {
        local_6 = (undefined2 *******)0x98a;
        local_8 = local_6e2;
        pppppppuVar6 = (undefined2 *******)0x22b2;
        pppppppuStack_c = (undefined2 *******)0x2312;
        local_a = pppppppuVar9;
        FUN_21f2_2d26();
      }
      local_6 = &local_10a;
      local_8 = &local_668;
      local_a = &local_60e;
      pppppppuStack_c = local_6e2;
      *(undefined2 *)0xc22 = 1;
      *(undefined2 *)0xc20 = 1;
      pppppppuStack_e = (undefined2 *******)0x1;
      pppppppuStack_12 = (undefined2 *******)0x2337;
      local_10 = pppppppuVar6;
      local_98 = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xbc0 = 1;
      local_6 = (undefined2 *******)0x1bb4;
      pppppppuVar9 = (undefined2 *******)0x1b6e;
      local_8 = (undefined2 *******)0x234f;
      FUN_1885_2ec3();
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_98 == -1) {
        if (((local_64 < 1) &&
            ((((local_64 < 0 || (local_66 == (undefined2 *****)0x0)) && (local_96 < 1)) &&
             ((local_11e < 1 && (local_1e0 < 1)))))) && ((local_1e0 < 0 || (local_1e2 == 0))))
        goto LAB_3ab8_781b;
        local_6 = (undefined2 *******)0x1b6e;
        ppppppuVar8 = (undefined2 ******)0x885;
        local_8 = (undefined2 *******)0x259e;
        func_0x0000c3ca();
        for (; (-1 < local_64 && ((0 < local_64 || (local_66 != (undefined2 *****)0x0))));
            local_66 = (undefined2 *****)((int)local_66 - 1)) {
          local_6 = (undefined2 *******)0x0;
          local_a = (undefined2 *******)0x25b4;
          local_8 = (undefined2 *******)ppppppuVar8;
          func_0x0000daa6();
          local_204 = (undefined2 ******)*(uint *)0x148;
          local_202 = (undefined2 ******)*(int *)0x14a;
          local_a = (undefined2 *******)0x885;
          ppppppuVar8 = (undefined2 ******)0x11f2;
          pppppppuStack_c = (undefined2 *******)0x25cb;
          local_8 = (undefined2 *******)local_204;
          local_6 = (undefined2 *******)local_202;
          FUN_17a6_0d19();
          local_64 = local_64 - (uint)(local_66 == (undefined2 *****)0x0);
        }
        for (; (-1 < local_1e0 && ((0 < local_1e0 || (local_1e2 != 0)))); local_1e2 = local_1e2 - 1)
        {
          local_6 = (undefined2 *******)0x0;
          local_a = (undefined2 *******)0x25ef;
          local_8 = (undefined2 *******)ppppppuVar8;
          func_0x0000daa6();
          local_204 = (undefined2 ******)*(uint *)0x14c;
          local_202 = (undefined2 ******)*(int *)0x14e;
          local_a = (undefined2 *******)0x885;
          ppppppuVar8 = (undefined2 ******)0x11f2;
          pppppppuStack_c = (undefined2 *******)0x2606;
          local_8 = (undefined2 *******)local_204;
          local_6 = (undefined2 *******)local_202;
          FUN_13bf_0327();
          local_1e0 = local_1e0 - (uint)(local_1e2 == 0);
        }
        for (; 0 < local_96; local_96 = local_96 + -1) {
          local_6 = (undefined2 *******)0x0;
          local_a = (undefined2 *******)0x261c;
          local_8 = (undefined2 *******)ppppppuVar8;
          func_0x0000daa6();
          local_612 = (undefined2 ******)*(undefined2 *)0x150;
          local_8 = (undefined2 *******)0x885;
          ppppppuVar8 = (undefined2 ******)0x18b3;
          local_a = (undefined2 *******)0x262a;
          local_6 = (undefined2 *******)local_612;
          func_0x000190c7();
        }
        for (; local_8 = (undefined2 *******)ppppppuVar8, 0 < local_11e; local_11e = local_11e + -1)
        {
          local_6 = (undefined2 *******)0x0;
          local_a = (undefined2 *******)0x2640;
          func_0x0000daa6();
          local_612 = (undefined2 ******)*(undefined2 *)0x152;
          local_8 = (undefined2 *******)0x885;
          ppppppuVar8 = (undefined2 ******)0x1bb4;
          local_a = (undefined2 *******)0x264e;
          local_6 = (undefined2 *******)local_612;
          FUN_1def_186d();
        }
        local_64 = 0;
        local_66 = (undefined2 *****)0x0;
        local_96 = 0;
        local_11e = 0;
        local_1e0 = 0;
        local_1e2 = 0;
        local_6 = (undefined2 *******)0x1;
        local_a = (undefined2 *******)0x267b;
        func_0x0000b1d8();
        local_6 = (undefined2 *******)0x885;
        pppppppuVar9 = (undefined2 *******)0x885;
        local_8 = (undefined2 *******)0x2681;
        func_0x0000abfa();
      }
      while (local_98 == 2) {
        local_8 = (undefined2 *******)0x2694;
        local_6 = pppppppuVar9;
        func_0x000297e6();
        local_6 = (undefined2 *******)0x22b2;
        local_8 = (undefined2 *******)0x269d;
        FUN_28b3_0e3b();
        local_6 = (undefined2 *******)0x22b2;
        local_8 = (undefined2 *******)0x26a6;
        FUN_28b3_0e53();
        local_6 = &local_208;
        local_8 = &local_1f0;
        local_a = local_f8;
        pppppppuStack_c = (undefined2 *******)0x2;
        pppppppuStack_e = (undefined2 *******)0x2711;
        local_10 = (undefined2 *******)0x22b2;
        pppppppuVar9 = (undefined2 *******)0xad;
        pppppppuStack_12 = (undefined2 *******)0x26c2;
        local_20a = func_0x00001dd5();
        if (*(int *)0x158 != 0) {
          return;
        }
        uVar13 = local_20a != -1;
        uVar14 = local_20a == -1;
        if ((bool)uVar14) goto LAB_3ab8_7608;
        local_6 = (undefined2 *******)0xad;
        local_8 = (undefined2 *******)0x26e4;
        FUN_28b3_0d04();
        local_6 = (undefined2 *******)0x22b2;
        local_8 = (undefined2 *******)0x26ed;
        func_0x000297e6();
        local_6 = (undefined2 *******)0x22b2;
        local_8 = (undefined2 *******)0x26f2;
        func_0x00029ae7();
        local_6 = (undefined2 *******)0x22b2;
        local_8 = (undefined2 *******)0x26fb;
        FUN_28b3_0e3b();
        local_6 = (undefined2 *******)0x22b2;
        local_8 = (undefined2 *******)0x2700;
        func_0x00029d78();
        local_6 = (undefined2 *******)0x22b2;
        local_8 = (undefined2 *******)0x2705;
        FUN_28b3_1181();
        if (!(bool)uVar13) {
          local_6 = (undefined2 *******)0x22b2;
          local_8 = (undefined2 *******)0x2710;
          func_0x000297e6();
          local_6 = (undefined2 *******)0x22b2;
          local_8 = (undefined2 *******)0x2719;
          func_0x000297e6();
          local_6 = (undefined2 *******)0x22b2;
          pppppppuVar9 = (undefined2 *******)0x22b2;
          local_8 = (undefined2 *******)0x271e;
          FUN_28b3_1181();
          if ((bool)uVar13 || (bool)uVar14) {
            local_1fc = local_1f0;
            local_1fa = local_1ee;
            break;
          }
        }
        pppppppuVar9 = (undefined2 *******)0x22b2;
      }
      if (local_98 == 3) {
        local_6 = (undefined2 *******)local_94;
        local_10a = (undefined2 *******)0x0;
        local_8 = (undefined2 *******)0x0;
        pppppppuStack_c = (undefined2 *******)0x274a;
        local_a = pppppppuVar9;
        local_20a = FUN_3ab8_577d();
        if (*(int *)0x158 != 0) {
          return;
        }
        if (local_20a == -1) goto LAB_3ab8_75ed;
        if (local_20a == 0) {
          local_fe = 0;
        }
        else {
          local_fe = 1;
        }
      }
      if (local_98 == 4) {
        *(char *)0x134 = '\x01' - *(char *)0x134;
      }
      if ((local_9c != '\0') && (local_98 == 5)) goto LAB_3ab8_8907;
    } while ((local_98 != 0) && (local_98 != 1));
    pppppppuVar6 = pppppppuVar9;
    if ((local_98 == 0) && (local_10a != (undefined2 *******)0x0)) {
      local_6 = &local_668;
      local_8 = &local_60e;
      local_a = local_10a;
      pppppppuVar6 = (undefined2 *******)0x11f2;
      pppppppuStack_e = (undefined2 *******)0x27c5;
      pppppppuStack_c = pppppppuVar9;
      iVar4 = FUN_13bf_1819();
      if (iVar4 != 0) goto LAB_3ab8_7c4c;
    }
  } while (local_98 != 1);
  local_668 = (undefined2 *******)*(int *)0x9548;
  local_666 = (undefined2 *******)*(int *)0x954a;
  local_60e = local_668;
  local_60c = local_666;
LAB_3ab8_7c4c:
  if (*(int *)0x158 != 0) {
    return;
  }
  local_108 = local_60e;
  local_106 = local_60c;
  local_11a = local_668;
  local_118 = local_666;
  goto code_r0x0004281f;
code_r0x00043549:
  local_6 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x354e;
  func_0x0000c340();
  local_6 = (undefined2 *******)0x53a;
  local_8 = (undefined2 *******)0x1de;
  local_a = (undefined2 *******)0x885;
  pppppppuStack_c = (undefined2 *******)0x355b;
  func_0x00012276();
  local_6 = (undefined2 *******)0x11f2;
  pppppppuVar6 = (undefined2 *******)0xdef;
  local_8 = (undefined2 *******)0x3562;
  func_0x00010526();
  local_de = 1;
  local_108 = local_a0;
  local_106 = local_9e;
  local_11a = local_e2;
  local_118 = local_e0;
  goto LAB_3ab8_7d02;
LAB_3ab8_781b:
  do {
    pppppppuVar6 = pppppppuVar9;
    if (local_1e4 != 0) {
      local_6 = (undefined2 *******)local_6c;
      local_8 = (undefined2 *******)0x10c;
      pppppppuVar6 = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x23af;
      local_a = pppppppuVar9;
      func_0x00024c86();
    }
    local_98 = 0;
    local_6 = (undefined2 *******)0xd;
    local_8 = (undefined2 *******)0x27c2;
    local_a = (undefined2 *******)0xd04;
    pppppppuStack_e = (undefined2 *******)0x23c8;
    pppppppuStack_c = pppppppuVar6;
    FUN_21f2_2de0();
    if (param_1 == 0) {
      local_6 = (undefined2 *******)0x27c3;
      local_8 = local_62;
      pcVar3 = (code *)swi(0x3f);
      local_98 = (*pcVar3)();
    }
    if (param_1 == 1) {
      local_6 = (undefined2 *******)0x27c6;
      local_8 = local_62;
      pcVar3 = (code *)swi(0x3f);
      local_98 = (*pcVar3)();
    }
    if (local_1e4 != 0) {
      local_6 = &local_10;
      local_8 = (undefined2 *******)0x10c;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0x2411;
      func_0x00024c86();
    }
    if ((local_98 != 0) || (*(int *)0x158 != 0)) {
      return;
    }
    local_6 = (undefined2 *******)0x22b2;
    local_8 = (undefined2 *******)0x2429;
    FUN_10ad_18a4();
    *(undefined2 *)0xd70 = 0;
    local_6 = (undefined2 *******)0x11f2;
    local_8 = (undefined2 *******)0x2434;
    func_0x0002504e();
    local_6 = (undefined2 *******)0x22b2;
    ppppppuVar7 = (undefined2 ******)0x885;
    local_8 = (undefined2 *******)0x2439;
    func_0x0000c3ca();
    ppppppuVar8 = ppppppuVar7;
    if (local_1e4 != 0) {
      local_6 = local_62;
      pcVar3 = (code *)swi(0x3f);
      iVar4 = (*pcVar3)();
      if (iVar4 == 0) {
        return;
      }
      if ((*(char *)0xcf6 == '\0') && (0x13 < *(byte *)0x123)) {
        pcVar3 = (code *)swi(0x3f);
        (*pcVar3)();
        ppppppuVar7 = (undefined2 ******)0x22b2;
        uVar5 = func_0x00024ce4();
        if (uVar5 < 9) {
          local_6 = (undefined2 *******)0x22b2;
          ppppppuVar7 = (undefined2 ******)0x22b2;
          local_8 = (undefined2 *******)0x248d;
          func_0x00024c86();
        }
      }
      pppppppuVar16 = local_62;
      ppppppuVar8 = (undefined2 ******)0x22b2;
      local_8 = (undefined2 *******)0x249c;
      local_6 = (undefined2 *******)ppppppuVar7;
      FUN_21f2_3454();
      if (local_1e4 == 2) goto LAB_3ab8_759b;
    }
    local_6 = (undefined2 *******)0x254;
    local_8 = local_62;
    pppppppuVar6 = (undefined2 *******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0x24b5;
    local_a = (undefined2 *******)ppppppuVar8;
    iVar4 = FUN_21f2_1348();
    *(int *)0xd70 = iVar4;
    if (iVar4 == 0) {
      local_6 = (undefined2 *******)0x568;
      local_8 = (undefined2 *******)0x22b2;
      pppppppuVar6 = (undefined2 *******)0x11f2;
      local_a = (undefined2 *******)0x24c7;
      FUN_13bf_0a03();
    }
    local_6 = (undefined2 *******)*(undefined2 *)0xd70;
    local_8 = (undefined2 *******)0x1f4;
    local_a = (undefined2 *******)((int)abStack_5ff + 1);
    pppppppuVar9 = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0x24da;
    pppppppuStack_c = pppppppuVar6;
    iVar4 = func_0x0002509c();
  } while (iVar4 == 0);
  if ((((abStack_5ff[1] != 0x70) || ((char)local_5fd != 'r')) || (local_5fd._1_1_ != 'f')) ||
     (local_5fb != '-')) goto LAB_3ab8_75c6;
  local_6 = (undefined2 *******)((int)abStack_5ff + 1);
  local_8 = (undefined2 *******)0x22b2;
  local_a = (undefined2 *******)0x250d;
  iVar4 = func_0x00024ce4();
  abStack_5ff[iVar4] = 0;
  local_6 = (undefined2 *******)local_5fa;
  local_8 = (undefined2 *******)0x1de;
  local_a = local_62;
  pppppppuStack_c = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0x2527;
  FUN_21f2_3454();
  local_6 = (undefined2 *******)*(undefined2 *)0xd70;
  local_8 = (undefined2 *******)0x1f4;
  local_a = (undefined2 *******)((int)abStack_5ff + 1);
  pppppppuStack_c = (undefined2 *******)0x22b2;
  pppppppuVar9 = (undefined2 *******)0x22b2;
  pppppppuStack_e = (undefined2 *******)0x253c;
  iVar4 = func_0x0002509c();
  if (iVar4 != 0) {
    local_6 = &local_e2;
    local_8 = &local_a0;
    local_a = (undefined2 *******)((int)abStack_5ff + 1);
    pppppppuStack_c = (undefined2 *******)0x22b2;
    pppppppuStack_e = (undefined2 *******)0x2559;
    local_612 = (undefined2 ******)FUN_3ab8_5b80();
    local_108 = local_a0;
    local_106 = local_9e;
    local_11a = local_e2;
    local_118 = local_e0;
    local_9c = '\x01';
    local_de = 1;
    *(undefined2 *)0xd70 = 0;
    local_6 = (undefined2 *******)0x22b2;
    pppppppuVar9 = (undefined2 *******)0x22b2;
    local_8 = (undefined2 *******)0x2596;
    func_0x0002504e();
    goto LAB_3ab8_8907;
  }
  goto LAB_3ab8_781b;
LAB_3ab8_75c6:
  *(undefined2 *)0xd70 = 0;
  local_6 = (undefined2 *******)0x22b2;
  pppppppuVar9 = (undefined2 *******)0x22b2;
  local_8 = (undefined2 *******)0x2151;
  func_0x0002504e();
  local_64 = 0;
  local_66 = (undefined2 *****)0x0;
  local_1e0 = 0;
  local_1e2 = 0;
  local_96 = 0;
  local_11e = 0;
  local_fe = 0;
  goto LAB_3ab8_75ed;
}


