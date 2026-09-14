/* 2bb4:0079 */

undefined2 __cdecl16far
FUN_2bb4_0079(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
             uint param_7)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined1 uVar7;
  int in_stack_0000002c;
  int in_stack_0000002e;
  undefined1 local_1e [4];
  undefined2 local_1a;
  undefined2 local_18;
  uint local_12;
  int local_10;
  int local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined1 *local_4;
  
  uVar4 = param_5;
  uVar3 = param_4;
  local_4 = (undefined1 *)0x2bb4;
  local_6 = 0xbbc4;
  FUN_32b2_02bc();
  local_4 = (undefined1 *)0x32b2;
  local_6 = 0xbbce;
  FUN_1885_3b7a();
  local_4 = (undefined1 *)0x1885;
  local_6 = 0xbbd3;
  FUN_2b6e_0033();
  local_4 = (undefined1 *)0x2b6e;
  uVar5 = 0x21f2;
  local_6 = 0xbbd8;
  FUN_21f2_1ef9();
  if (param_1 == -2) {
    *(undefined2 *)0xbc0 = 1;
    local_8 = *(undefined2 *)0xc30;
    uVar5 = *(undefined2 *)0xc32;
    uVar2 = *(undefined2 *)0x1f8e;
    *(undefined2 *)0xc30 = *(undefined2 *)0x1f8c;
    *(undefined2 *)0xc32 = uVar2;
    uVar2 = *(undefined2 *)0xca8;
    *(undefined2 *)0x1f8c = *(undefined2 *)0xca6;
    *(undefined2 *)0x1f8e = uVar2;
    *(undefined2 *)0xca6 = local_8;
    *(undefined2 *)0xca8 = uVar5;
    uVar5 = *(undefined2 *)0x1f92;
    *(undefined2 *)0xc48 = *(undefined2 *)0x1f90;
    *(undefined2 *)0xc4a = uVar5;
    uVar5 = *(undefined2 *)0xcac;
    *(undefined2 *)0x1f90 = *(undefined2 *)0xcaa;
    *(undefined2 *)0x1f92 = uVar5;
    local_4 = (undefined1 *)0x21f2;
    local_6 = 0xbc44;
    FUN_32b2_6d14();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbc4d;
    FUN_32b2_6e63();
    uVar5 = *(undefined2 *)0x1f96;
    *(undefined2 *)0xc4c = *(undefined2 *)0x1f94;
    *(undefined2 *)0xc4e = uVar5;
    uVar5 = *(undefined2 *)0xcb0;
    *(undefined2 *)0x1f94 = *(undefined2 *)0xcae;
    *(undefined2 *)0x1f96 = uVar5;
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbc71;
    FUN_32b2_6d14();
    local_4 = (undefined1 *)0x32b2;
    uVar5 = 0x32b2;
    local_6 = 0xbc7a;
    FUN_32b2_6e63();
  }
  if (param_1 == -1) {
    if (*(int *)0xbc0 != 0) {
      *(undefined2 *)0xbc0 = 0;
    }
    *(undefined2 *)0xbc0 = 1;
    local_8 = *(undefined2 *)0xc30;
    uVar2 = *(undefined2 *)0xc32;
    uVar1 = *(undefined2 *)0xca8;
    *(undefined2 *)0xc30 = *(undefined2 *)0xca6;
    *(undefined2 *)0xc32 = uVar1;
    *(undefined2 *)0xca6 = local_8;
    *(undefined2 *)0xca8 = uVar2;
    uVar2 = *(undefined2 *)0xcac;
    *(undefined2 *)0xc48 = *(undefined2 *)0xcaa;
    *(undefined2 *)0xc4a = uVar2;
    local_6 = 0xbcde;
    local_4 = (undefined1 *)uVar5;
    FUN_32b2_6d14();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbce7;
    FUN_32b2_6e63();
    uVar5 = *(undefined2 *)0xcb0;
    *(undefined2 *)0xc4c = *(undefined2 *)0xcae;
    *(undefined2 *)0xc4e = uVar5;
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbcfd;
    FUN_32b2_6d14();
    local_4 = (undefined1 *)0x32b2;
    uVar5 = 0x32b2;
    local_6 = 0xbd06;
    FUN_32b2_6e63();
  }
  if (param_1 == 0) {
    *(undefined2 *)0xbc0 = 0;
    *(undefined2 *)0xbc0 = 1;
    uVar2 = *(undefined2 *)0xca8;
    *(undefined2 *)0x1f8c = *(undefined2 *)0xca6;
    *(undefined2 *)0x1f8e = uVar2;
    uVar2 = *(undefined2 *)0xcac;
    *(undefined2 *)0x1f90 = *(undefined2 *)0xcaa;
    *(undefined2 *)0x1f92 = uVar2;
    uVar2 = *(undefined2 *)0xcb0;
    *(undefined2 *)0x1f94 = *(undefined2 *)0xcae;
    *(undefined2 *)0x1f96 = uVar2;
    uVar2 = *(undefined2 *)0xc32;
    *(undefined2 *)0xca6 = *(undefined2 *)0xc30;
    *(undefined2 *)0xca8 = uVar2;
    local_6 = 0xbd5e;
    local_4 = (undefined1 *)uVar5;
    FUN_32b2_6d14();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbd67;
    FUN_32b2_6e63();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbd6f;
    FUN_32b2_6d14();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbd78;
    FUN_32b2_6e63();
    local_c = *(undefined2 *)0x9380;
    local_a = *(undefined2 *)0x9382;
    local_8 = local_c;
    if (*(char *)0xb782 != '\0') {
      local_e = (*(int *)0xa58 - *(int *)0xa5c) / 2;
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbda9;
      FUN_32b2_6d9b();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbdb1;
      FUN_32b2_6e63();
      local_e = (*(int *)0xa60 - *(int *)0xa5a) / 2;
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbdc8;
      FUN_32b2_6d9b();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbdd0;
      FUN_32b2_6e63();
    }
    if (*(int *)0xc60 == 0) {
      uVar5 = *(undefined2 *)0x9386;
      *(undefined2 *)0xc30 = *(undefined2 *)0x9384;
      *(undefined2 *)0xc32 = uVar5;
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe36;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe3b;
      FUN_32b2_6fd6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe44;
      FUN_32b2_6e63();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe4c;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe51;
      FUN_32b2_6fd6();
      local_4 = (undefined1 *)0x32b2;
      uVar5 = 0x32b2;
      local_6 = 0xbe5a;
      FUN_32b2_6e63();
      if (*(char *)0x130 == '\0') goto LAB_2bb4_0378;
      local_e = *(int *)0x1b3e - *(int *)0xa58;
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe73;
      FUN_32b2_6d9b();
      local_10 = 0x27f - *(int *)0xa58;
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe85;
      FUN_32b2_6d9b();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe8a;
      FUN_32b2_7182();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe93;
      FUN_32b2_704d();
      local_12 = (*(int *)0xa60 - *(int *)0xa5e) / 2;
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbeaa;
      FUN_32b2_6d9b();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbeaf;
      FUN_32b2_7173();
    }
    else {
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbde0;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbde9;
      FUN_32b2_6e4b();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbdf1;
      FUN_32b2_707d();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbdfa;
      FUN_32b2_7035();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe03;
      FUN_32b2_6e63();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe0b;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe14;
      FUN_32b2_7065();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xbe1d;
      FUN_32b2_7035();
    }
    local_4 = (undefined1 *)0x32b2;
    uVar5 = 0x32b2;
    local_6 = 0xbeb8;
    FUN_32b2_6e63();
  }
LAB_2bb4_0378:
  if (param_1 != 1) goto LAB_2bb4_06da;
  if ((int)param_6 < (int)param_4) {
    local_12 = param_4;
    param_4 = param_6;
    param_6 = uVar3;
  }
  if ((int)param_5 < (int)param_7) {
    local_12 = param_5;
    param_5 = param_7;
    param_7 = uVar4;
  }
  local_10 = param_5 - param_7;
  local_6 = 0xbf00;
  local_4 = (undefined1 *)uVar5;
  FUN_32b2_6d9b();
  local_4 = (undefined1 *)0x32b2;
  local_6 = 0xbf08;
  FUN_32b2_6e4b();
  local_4 = (undefined1 *)0x32b2;
  local_6 = 0xbf10;
  FUN_32b2_6ef9();
  local_4 = (undefined1 *)0x32b2;
  local_6 = 0xbf18;
  FUN_32b2_6d9b();
  uVar6 = param_6 < param_4;
  local_10 = param_6 - param_4;
  local_4 = (undefined1 *)0x32b2;
  local_6 = 0xbf29;
  FUN_32b2_6d9b();
  local_4 = (undefined1 *)0x32b2;
  local_6 = 0xbf31;
  FUN_32b2_6e4b();
  local_4 = (undefined1 *)0x32b2;
  local_6 = 0xbf36;
  FUN_32b2_7191();
  if ((bool)uVar6) {
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbf40;
    FUN_32b2_6d9b();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbf48;
    FUN_32b2_6cc6();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbf4d;
    FUN_32b2_7191();
    if (!(bool)uVar6) goto LAB_2bb4_0462;
    local_10 = param_6 - in_stack_0000002c;
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbf65;
    FUN_32b2_6d9b();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbf6d;
    FUN_32b2_7124();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbf75;
    FUN_32b2_7154();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbf7e;
    FUN_32b2_6e63();
    local_10 = in_stack_0000002e - param_7;
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbf8f;
    FUN_32b2_6d9b();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbf97;
    FUN_32b2_7124();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbf9f;
    FUN_32b2_7154();
  }
  else {
LAB_2bb4_0462:
    *(undefined2 *)0xbc0 = 0;
    *(undefined2 *)0xbc0 = 1;
    uVar5 = *(undefined2 *)0xca8;
    *(undefined2 *)0x1f8c = *(undefined2 *)0xca6;
    *(undefined2 *)0x1f8e = uVar5;
    uVar5 = *(undefined2 *)0xcac;
    *(undefined2 *)0x1f90 = *(undefined2 *)0xcaa;
    *(undefined2 *)0x1f92 = uVar5;
    uVar5 = *(undefined2 *)0xcb0;
    *(undefined2 *)0x1f94 = *(undefined2 *)0xcae;
    *(undefined2 *)0x1f96 = uVar5;
    uVar5 = *(undefined2 *)0xc32;
    *(undefined2 *)0xca6 = *(undefined2 *)0xc30;
    *(undefined2 *)0xca8 = uVar5;
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbff1;
    FUN_32b2_6d14();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xbffa;
    FUN_32b2_6e63();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc002;
    FUN_32b2_6d14();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc00b;
    FUN_32b2_6e63();
    local_10 = *(int *)0x1b3e - param_2;
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc01c;
    FUN_32b2_6d9b();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc024;
    FUN_32b2_6e4b();
    local_e = param_3 - *(int *)0xa5e;
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc036;
    FUN_32b2_6d9b();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc03b;
    FUN_32b2_7182();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc043;
    FUN_32b2_6e4b();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc04b;
    FUN_32b2_6ef9();
    local_10 = param_4 - param_2;
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc05c;
    FUN_32b2_6d9b();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc064;
    FUN_32b2_6e63();
    uVar6 = param_3 < param_5;
    local_10 = param_3 - param_5;
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc075;
    FUN_32b2_6d9b();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc07d;
    FUN_32b2_6e4b();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc085;
    FUN_32b2_6ef9();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc08d;
    FUN_32b2_6cc6();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc095;
    FUN_32b2_6cc6();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc09d;
    FUN_32b2_704d();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc0a2;
    FUN_32b2_7191();
    if ((bool)uVar6) {
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc0ac;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc0b4;
      FUN_32b2_7065();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc0b9;
      FUN_32b2_7258();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc0c1;
      FUN_32b2_710c();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc0c9;
      FUN_32b2_6e63();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc0d1;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc0d9;
      FUN_32b2_7065();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc0e1;
      FUN_32b2_7035();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc0ea;
      FUN_32b2_704d();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc0f2;
      FUN_32b2_7095();
    }
    else {
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc109;
      FUN_32b2_6d9b();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc111;
      FUN_32b2_7065();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc116;
      FUN_32b2_7258();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc11e;
      FUN_32b2_710c();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc126;
      FUN_32b2_6e63();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc12e;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc136;
      FUN_32b2_704d();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc13e;
      FUN_32b2_7035();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc147;
      FUN_32b2_704d();
      local_4 = local_1e;
      local_6 = 0x32b2;
      local_8 = 0xc150;
      FUN_32b2_7095();
    }
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc156;
    FUN_32b2_6e63();
    uVar3 = *(uint *)0xa68;
    uVar6 = uVar3 < 0xc;
    uVar7 = uVar3 == 0xc;
    if ((int)uVar3 < 0xc) {
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc166;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc16f;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc177;
      FUN_32b2_704d();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc17c;
      FUN_32b2_7191();
      if (!(bool)uVar6 && !(bool)uVar7) {
LAB_2bb4_0669:
        local_4 = (undefined1 *)0x32b2;
        local_6 = 0xc1ae;
        FUN_32b2_6cc6();
        local_4 = (undefined1 *)0x32b2;
        local_6 = 0xc1b7;
        FUN_32b2_7065();
        local_4 = (undefined1 *)0x32b2;
        local_6 = 0xc1bf;
        FUN_32b2_6e63();
      }
    }
    else {
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc18d;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc196;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc19e;
      FUN_32b2_704d();
      local_4 = (undefined1 *)0x32b2;
      local_6 = 0xc1a3;
      FUN_32b2_7191();
      if (!(bool)uVar6 && !(bool)uVar7) goto LAB_2bb4_0669;
    }
    *(undefined2 *)0xc30 = local_1a;
    *(undefined2 *)0xc32 = local_18;
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc1d4;
    FUN_32b2_6cc6();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc1d9;
    FUN_32b2_7258();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc1e1;
    FUN_32b2_7124();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc1ea;
    FUN_32b2_7095();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc1f3;
    FUN_32b2_6e63();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc1fb;
    FUN_32b2_6cc6();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc200;
    FUN_32b2_7258();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc208;
    FUN_32b2_7124();
    local_4 = (undefined1 *)0x32b2;
    local_6 = 0xc211;
    FUN_32b2_7095();
  }
  local_4 = (undefined1 *)0x32b2;
  uVar5 = 0x32b2;
  local_6 = 0xc21a;
  FUN_32b2_6e63();
LAB_2bb4_06da:
  local_4 = (undefined1 *)0x0;
  local_8 = 0xc222;
  local_6 = uVar5;
  FUN_1885_5256();
  if (*(int *)0x11c == 0) {
    if (local_4 == (undefined1 *)0x1) {
      local_4 = (undefined1 *)0x1885;
      local_6 = 0xc24f;
      FUN_2bb4_004f();
    }
    if (local_4 != (undefined1 *)0x0) {
      local_4 = (undefined1 *)0x1885;
      local_6 = 0xc259;
      FUN_2bb4_0064();
    }
    if (local_4 == (undefined1 *)0xffff) {
      local_4 = (undefined1 *)0x1885;
      local_6 = 0xc26a;
      FUN_1885_2414();
      return 0;
    }
    local_4 = (undefined1 *)0x1885;
    local_6 = 0xc263;
    FUN_2bb4_07d8();
  }
  else {
    local_4 = (undefined1 *)0x1885;
    local_6 = 0xc22f;
    FUN_1885_1f49();
    *(undefined2 *)0xbc0 = 1;
    local_4 = (undefined1 *)0x1885;
    local_6 = 0xc239;
    FUN_2bb4_07d8();
    if (*(int *)0x11c == 3) {
      return 0;
    }
  }
  return 1;
}


