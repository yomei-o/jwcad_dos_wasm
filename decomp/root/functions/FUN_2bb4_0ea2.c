/* 2bb4:0ea2 */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far FUN_2bb4_0ea2(int param_1,undefined2 ******param_2,undefined2 ******param_3)

{
  int iVar1;
  uint uVar2;
  undefined2 ******ppppppuVar3;
  undefined2 uVar4;
  undefined2 ******ppppppuVar5;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined2 *****local_be [25];
  undefined2 *****local_8c [15];
  undefined2 *****local_6e [10];
  undefined2 *****local_5a [2];
  undefined2 ******local_56;
  undefined2 ******local_54 [2];
  undefined2 ******local_50;
  undefined2 ******local_4e;
  undefined2 ******local_4c;
  undefined2 ******local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 ******local_44;
  int local_42;
  undefined2 *****local_3c [5];
  undefined2 *******local_32;
  undefined2 *****local_30;
  int local_2e;
  undefined2 ******local_2c;
  uint local_2a;
  undefined2 ******local_28;
  undefined2 ******local_26;
  undefined2 ******local_24;
  undefined2 ******ppppppuStack_22;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 ******local_16;
  int local_14 [2];
  undefined2 ******ppppppuStack_10;
  undefined2 *******local_e;
  undefined2 ******local_c;
  undefined2 *******local_a;
  undefined2 ******ppppppuStack_8;
  undefined2 *******local_6;
  undefined2 ******ppppppuStack_4;
  
  ppppppuStack_4 = (undefined2 ******)0x2bb4;
  local_6 = (undefined2 *******)0xc9ed;
  FUN_32b2_02bc();
  ppppppuStack_4 = (undefined2 ******)0x1fc2;
  local_6 = &local_24;
  ppppppuStack_8 = (undefined2 ******)0x32b2;
  local_a = (undefined2 *******)0xc9fa;
  FUN_32b2_2854();
  ppppppuStack_4 = (undefined2 ******)0x804;
  local_6 = &local_24;
  ppppppuStack_8 = (undefined2 ******)0x32b2;
  local_a = (undefined2 *******)0xca09;
  FUN_32b2_2126();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xca10;
  FUN_2b6e_0033();
  ppppppuStack_4 = (undefined2 ******)0x2b6e;
  local_6 = (undefined2 *******)0xca15;
  FUN_21f2_1ef9();
  local_48 = *(undefined2 *)0xc30;
  local_46 = *(undefined2 *)0xc32;
  local_44 = param_2;
  local_4c = param_3;
  local_2a = 0;
  local_42 = 0;
  ppppppuStack_4 = (undefined2 ******)0x21f2;
  local_6 = (undefined2 *******)0xca3b;
  FUN_1885_3af0();
  ppppppuStack_4 = (undefined2 ******)0x1885;
  ppppppuVar3 = (undefined2 ******)0x1def;
  local_6 = (undefined2 *******)0xca40;
  FUN_1def_2636();
  ppppppuStack_4 = (undefined2 ******)0x1def;
  local_6 = (undefined2 *******)0xca44;
  FUN_2bb4_0e3d();
  do {
    if (param_1 != 0x1f) {
      ppppppuStack_4 = (undefined2 ******)0x0;
      ppppppuStack_8 = (undefined2 ******)0xcef9;
      local_6 = (undefined2 *******)ppppppuVar3;
      FUN_2bb4_0adc();
      uVar4 = 0x1885;
      local_6 = (undefined2 *******)0xceff;
      ppppppuStack_4 = ppppppuVar3;
      FUN_1885_3af0();
      if (param_1 != 0x20) goto LAB_2bb4_16b9;
      ppppppuStack_4 = (undefined2 ******)0x2036;
      local_6 = (undefined2 *******)local_6e;
      ppppppuStack_8 = (undefined2 ******)0x1885;
      ppppppuVar3 = (undefined2 ******)0x32b2;
      local_a = (undefined2 *******)0xcf15;
      FUN_32b2_2854();
      goto LAB_2bb4_13d7;
    }
    local_2e = 0;
    while( true ) {
      ppppppuStack_4 = &local_2c;
      local_6 = &local_16;
      ppppppuStack_8 = &local_30;
      local_a = &local_6;
      ppppppuVar5 = (undefined2 ******)0x1885;
      local_e = (undefined2 *******)0xca67;
      local_c = ppppppuVar3;
      FUN_1885_546d();
      if ((local_6 == (undefined2 *******)0x0) && (local_30 == (undefined2 *****)0x0)) break;
      ppppppuStack_4 = (undefined2 ******)0x0;
      local_6 = (undefined2 *******)0x7;
      ppppppuStack_8 = (undefined2 ******)0x1;
      local_a = (undefined2 *******)0x24;
      local_c = (undefined2 ******)0x1fc8;
      local_e = (undefined2 *******)0x1885;
      ppppppuVar3 = (undefined2 ******)0x1def;
      ppppppuStack_10 = (undefined2 ******)0xca8e;
      FUN_1def_23c5();
      local_2e = 1;
    }
    if (local_2e != 0) {
LAB_2bb4_0f5e:
      ppppppuStack_4 = (undefined2 ******)0x0;
      ppppppuStack_8 = (undefined2 ******)0xcaa6;
      local_6 = (undefined2 *******)ppppppuVar5;
      FUN_21f2_27eb();
      return 1;
    }
    ppppppuStack_4 = (undefined2 ******)0x1;
    local_6 = (undefined2 *******)0x1885;
    ppppppuStack_8 = (undefined2 ******)0xcab5;
    FUN_2bb4_0adc();
    ppppppuStack_4 = (undefined2 ******)0x0;
    local_6 = (undefined2 *******)0x1885;
    ppppppuStack_8 = (undefined2 ******)0xcabe;
    FUN_1885_5256();
    ppppppuStack_4 = (undefined2 ******)*(undefined2 *)0x1b40;
    local_6 = (undefined2 *******)*(undefined2 *)0x1b3e;
    ppppppuStack_8 = (undefined2 ******)0x0;
    local_a = (undefined2 *******)0x0;
    local_c = (undefined2 ******)0x1885;
    local_e = (undefined2 *******)0xcad0;
    FUN_1def_12e8();
    ppppppuStack_4 = (undefined2 ******)0x0;
    local_6 = (undefined2 *******)0x0;
    ppppppuStack_8 = (undefined2 ******)0x1;
    local_a = (undefined2 *******)0x7;
    local_c = (undefined2 ******)*(undefined2 *)0x1b40;
    local_e = (undefined2 *******)*(undefined2 *)0x1b3e;
    ppppppuStack_10 = (undefined2 ******)*(undefined2 *)0xa60;
    local_14[1] = 0;
    local_14[0] = 0x1def;
    local_16 = (undefined2 ******)0xcaf3;
    FUN_1def_1460();
    ppppppuStack_4 = (undefined2 ******)0x1def;
    local_6 = (undefined2 *******)0xcafb;
    FUN_1885_1f49();
    ppppppuStack_4 = (undefined2 ******)0x1885;
    local_6 = (undefined2 *******)0xcb04;
    FUN_32b2_6cc6();
    ppppppuStack_4 = (undefined2 ******)0x32b2;
    local_6 = (undefined2 *******)0xcb0c;
    FUN_32b2_6e4b();
    ppppppuStack_4 = (undefined2 ******)0x32b2;
    local_6 = (undefined2 *******)0xcb14;
    FUN_32b2_6e63();
    ppppppuStack_4 = (undefined2 ******)0x32b2;
    local_6 = (undefined2 *******)0xcb18;
    FUN_2bb4_000e();
    ppppppuStack_4 = (undefined2 ******)0x1;
    local_6 = (undefined2 *******)0xc;
    ppppppuStack_8 = (undefined2 ******)0x32b2;
    local_a = (undefined2 *******)0xcb25;
    FUN_1def_26a9();
    ppppppuStack_4 = (undefined2 ******)0x316;
    local_6 = (undefined2 *******)0x1def;
    ppppppuStack_8 = (undefined2 ******)0xcb33;
    FUN_32b2_6cc6();
    local_6 = (undefined2 *******)0x32b2;
    ppppppuStack_8 = (undefined2 ******)0xcb38;
    FUN_32b2_7258();
    local_e = (undefined2 *******)0x32b2;
    ppppppuStack_10 = (undefined2 ******)0xcb42;
    FUN_32b2_6eb1();
    local_e = (undefined2 *******)0x30e;
    ppppppuStack_10 = (undefined2 ******)0x302;
    local_14[1] = 0x1fd1;
    local_14[0] = 0x32b2;
    local_16 = (undefined2 ******)0xcb53;
    FUN_21f2_0356();
    ppppppuVar3 = (undefined2 ******)0x21f2;
    do {
      ppppppuStack_4 = (undefined2 ******)local_14;
      local_6 = &local_e;
      ppppppuStack_8 = &local_4c;
      local_a = &local_44;
      local_c = &local_30;
      local_e = &local_6;
      ppppppuVar5 = (undefined2 ******)0x13bf;
      local_14[1] = 0xcb73;
      ppppppuStack_10 = ppppppuVar3;
      local_2e = FUN_13bf_27e0();
      if (*(int *)0x158 != 0) goto LAB_2bb4_1040;
      if (local_2e == -1) goto LAB_2bb4_104f;
      ppppppuStack_4 = (undefined2 ******)local_14[0];
      local_6 = (undefined2 *******)local_4c;
      ppppppuStack_8 = local_44;
      local_32 = (undefined2 *******)(local_4c + (int)local_30 * 10);
      local_c = (undefined2 ******)0x1;
      local_e = (undefined2 *******)0x13bf;
      ppppppuStack_10 = (undefined2 ******)0xcbb8;
      local_a = local_32;
      iVar1 = FUN_2bb4_0b88();
      if (iVar1 != 0) {
        return 0;
      }
      if (local_14[0] == 0x3500) goto LAB_2bb4_0f5e;
      ppppppuVar3 = ppppppuVar5;
    } while (local_32 == (undefined2 *******)0x0);
    do {
      do {
        ppppppuStack_4 = &local_2c;
        local_6 = &local_16;
        ppppppuStack_8 = &local_30;
        local_a = &local_6;
        ppppppuVar3 = (undefined2 ******)0x1885;
        local_e = (undefined2 *******)0xcbe3;
        local_c = ppppppuVar5;
        FUN_1885_546d();
        ppppppuVar5 = ppppppuVar3;
      } while (local_6 != (undefined2 *******)0x0);
    } while (local_30 != (undefined2 *****)0x0);
  } while ((((int)local_44 < *(int *)0xa5c) || ((int)local_4c < *(int *)0xa5e)) ||
          (*(int *)0xa60 < (int)local_4c));
  if ((int)local_32 < 0x14) {
    ppppppuStack_4 = (undefined2 ******)0x2002;
    local_6 = (undefined2 *******)local_8c;
    ppppppuStack_8 = (undefined2 ******)0x1885;
    ppppppuVar5 = (undefined2 ******)0x32b2;
    local_a = (undefined2 *******)0xcc27;
    FUN_32b2_2854();
    do {
      if (*(char *)0xb782 == '\0') {
        ppppppuStack_4 = (undefined2 ******)0x0;
        ppppppuStack_8 = (undefined2 ******)0xcc3b;
        local_6 = (undefined2 *******)ppppppuVar5;
        FUN_1885_5256();
        ppppppuStack_4 = (undefined2 ******)0x1885;
        local_6 = (undefined2 *******)0xcc41;
        FUN_1885_23c4();
        ppppppuStack_4 = (undefined2 ******)0x0;
        local_6 = (undefined2 *******)0x0;
        ppppppuStack_8 = (undefined2 ******)0x2;
        local_a = (undefined2 *******)0x6;
        local_c = (undefined2 ******)*(undefined2 *)0x1b40;
        local_e = (undefined2 *******)0x1b6;
        ppppppuStack_10 = (undefined2 ******)*(undefined2 *)0xa60;
        local_14[1] = 0xe0;
        local_14[0] = 0x1885;
        local_16 = (undefined2 ******)0xcc64;
        FUN_1def_1460();
        ppppppuStack_4 = (undefined2 ******)0x0;
        local_6 = (undefined2 *******)0x0;
        ppppppuStack_8 = (undefined2 ******)0x1;
        local_a = (undefined2 *******)0x7;
        local_c = (undefined2 ******)*(undefined2 *)0x1b40;
        local_e = (undefined2 *******)*(undefined2 *)0x1b3e;
        ppppppuStack_10 = (undefined2 ******)*(undefined2 *)0xa60;
        local_14[1] = 0;
        local_14[0] = 0x1def;
        local_16 = (undefined2 ******)0xcc87;
        FUN_1def_1460();
        ppppppuStack_4 = (undefined2 ******)0x1def;
        local_6 = (undefined2 *******)0xcc8f;
        FUN_1885_1f49();
        ppppppuStack_4 = (undefined2 ******)0x1885;
        local_6 = (undefined2 *******)0xcc94;
        FUN_1885_3b04();
        ppppppuStack_4 = (undefined2 ******)0x0;
        local_6 = (undefined2 *******)0x0;
        ppppppuStack_8 = (undefined2 ******)*(int *)0x1b42;
        local_a = (undefined2 *******)0x25;
        local_c = local_8c;
        local_e = (undefined2 *******)0x1885;
        ppppppuVar5 = (undefined2 ******)0x1def;
        ppppppuStack_10 = (undefined2 ******)0xccaa;
        FUN_1def_23c5();
        if (5 < *(byte *)0x74) {
          ppppppuStack_4 = (undefined2 ******)0x1def;
          local_6 = (undefined2 *******)0xccb9;
          ppppppuStack_4 = (undefined2 ******)FUN_32b2_1f42();
          local_6 = (undefined2 *******)0x200e;
          ppppppuStack_8 = local_6e;
          local_a = (undefined2 *******)0x32b2;
          local_c = (undefined2 ******)0xccc7;
          FUN_32b2_2854();
          ppppppuStack_4 = (undefined2 ******)0x0;
          local_6 = (undefined2 *******)0x7;
          ppppppuStack_8 = (undefined2 ******)*(int *)0x1b42;
          local_a = (undefined2 *******)0x46;
          local_c = local_6e;
          local_e = (undefined2 *******)0x32b2;
          ppppppuVar5 = (undefined2 ******)0x1def;
          ppppppuStack_10 = (undefined2 ******)0xcce2;
          FUN_1def_23c5();
        }
      }
      local_6 = (undefined2 *******)0xccea;
      ppppppuStack_4 = ppppppuVar5;
      FUN_1885_3af0();
      ppppppuStack_4 = (undefined2 ******)0x1885;
      local_6 = (undefined2 *******)0xccee;
      FUN_2bb4_000e();
      ppppppuStack_4 = local_8c;
      local_6 = (undefined2 *******)0x2011;
      ppppppuStack_8 = (undefined2 ******)0x1885;
      local_a = (undefined2 *******)0xccfc;
      FUN_21f2_0356();
      ppppppuStack_4 = (undefined2 ******)0x1;
      local_6 = (undefined2 *******)0x34;
      ppppppuStack_8 = (undefined2 ******)0x21f2;
      local_a = (undefined2 *******)0xcd0b;
      FUN_1def_26a9();
      ppppppuStack_4 = (undefined2 ******)0x316;
      local_6 = (undefined2 *******)0x30e;
      ppppppuStack_8 = (undefined2 ******)0x2023;
      local_a = (undefined2 *******)0x1def;
      local_c = (undefined2 ******)0xcd1e;
      FUN_21f2_0356();
      *(undefined2 *)0xc26 = 1;
      ppppppuStack_4 = (undefined2 ******)0x2711;
      local_6 = (undefined2 *******)0x23;
      ppppppuStack_8 = local_5a;
      local_a = local_54;
      local_c = local_3c;
      local_e = &local_28;
      ppppppuStack_10 = (undefined2 ******)0x21f2;
      ppppppuVar5 = (undefined2 ******)0x10ad;
      local_14[1] = 0xcd4a;
      local_2a = FUN_10ad_16d4();
      *(int *)0xc26 = (int)local_c;
      if (*(int *)0x158 != 0) {
LAB_2bb4_1040:
        local_6 = (undefined2 *******)0xcb85;
        ppppppuStack_4 = ppppppuVar5;
        FUN_1885_2414();
        return 0;
      }
      if (local_2a == 0xffff) {
        local_2a = 0xffff;
LAB_2bb4_104f:
        local_6 = (undefined2 *******)0xcb94;
        ppppppuStack_4 = ppppppuVar5;
        FUN_1885_2414();
        return 0xffff;
      }
      if (local_2a != 99) goto LAB_2bb4_1232;
      local_2a = 99;
    } while( true );
  }
  ppppppuStack_4 = (undefined2 ******)0x1885;
  uVar4 = 0x1885;
  local_6 = (undefined2 *******)0xcdd1;
  uVar2 = FUN_1885_5307();
  uVar6 = 0;
  if ((uVar2 & 2) != 0) {
    ppppppuStack_4 = (undefined2 ******)0x1885;
    local_6 = (undefined2 *******)0xcdde;
    FUN_32b2_6cc6();
    ppppppuStack_4 = (undefined2 ******)0x32b2;
    local_6 = (undefined2 *******)0xcde7;
    FUN_32b2_704d();
    ppppppuStack_4 = (undefined2 ******)0x32b2;
    local_6 = (undefined2 *******)0xcdf0;
    FUN_32b2_6e4b();
    ppppppuStack_4 = (undefined2 ******)0x32b2;
    uVar4 = 0x32b2;
    local_6 = (undefined2 *******)0xcdf8;
    FUN_32b2_6e63();
  }
LAB_2bb4_12b8:
  local_6 = (undefined2 *******)0xce01;
  ppppppuStack_4 = (undefined2 ******)uVar4;
  FUN_32b2_6d14();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce09;
  FUN_32b2_6cc6();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce12;
  FUN_32b2_7065();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce1b;
  FUN_32b2_6e4b();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce20;
  FUN_32b2_7258();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce25;
  FUN_32b2_7191();
  if ((bool)uVar6) {
    uVar4 = *(undefined2 *)0x938e;
    *(undefined2 *)0xca6 = *(undefined2 *)0x938c;
    *(undefined2 *)0xca8 = uVar4;
  }
  local_8c[0] = (undefined2 *****)((int)local_44 - *(int *)0xa5c);
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce49;
  FUN_32b2_6d9b();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce51;
  FUN_32b2_7065();
  local_6e[0] = (undefined2 *****)((*(int *)0x1b3e - *(int *)0xa5c) / 2);
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce68;
  FUN_32b2_6d9b();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce71;
  FUN_32b2_7065();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce76;
  FUN_32b2_7173();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce7f;
  FUN_32b2_7095();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce88;
  FUN_32b2_6e63();
  local_8c[0] = (undefined2 *****)(*(int *)0xa60 - (int)local_4c);
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xce9b;
  FUN_32b2_6d9b();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xcea3;
  FUN_32b2_7065();
  local_6e[0] = (undefined2 *****)((*(int *)0xa60 - *(int *)0xa5e) / 2);
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xceba;
  FUN_32b2_6d9b();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xcec3;
  FUN_32b2_7065();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xcec8;
  FUN_32b2_7173();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xced1;
  FUN_32b2_7095();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  ppppppuVar5 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xceda;
  FUN_32b2_6e63();
  *(undefined2 *)0xbc0 = 1;
  ppppppuStack_4 = (undefined2 ******)0x1;
  local_6 = (undefined2 *******)0x1;
  ppppppuStack_8 = (undefined2 ******)0x1;
  local_a = (undefined2 *******)0x1;
  local_c = (undefined2 ******)0xffff;
LAB_2bb4_13a8:
  ppppppuStack_10 = (undefined2 ******)0xceec;
  local_e = (undefined2 *******)ppppppuVar5;
  FUN_2bb4_0730();
  return 1;
  while( true ) {
    ppppppuStack_4 = (undefined2 ******)0x2050;
    local_6 = (undefined2 *******)local_be;
    ppppppuStack_8 = (undefined2 ******)0x1885;
    uVar4 = 0x32b2;
    local_a = (undefined2 *******)0xcfcc;
    FUN_32b2_2126();
    if (*(char *)0xb782 == '\0') {
      ppppppuStack_4 = (undefined2 ******)0x0;
      local_6 = (undefined2 *******)0x32b2;
      ppppppuStack_8 = (undefined2 ******)0xcfe0;
      FUN_1885_5256();
      ppppppuStack_4 = (undefined2 ******)*(undefined2 *)0x1b40;
      local_6 = (undefined2 *******)*(undefined2 *)0x1b3e;
      ppppppuStack_8 = (undefined2 ******)0x0;
      local_a = (undefined2 *******)0x0;
      local_c = (undefined2 ******)0x1885;
      local_e = (undefined2 *******)0xcff2;
      FUN_1def_12e8();
      ppppppuStack_4 = (undefined2 ******)0x0;
      local_6 = (undefined2 *******)0x0;
      ppppppuStack_8 = (undefined2 ******)0x1;
      local_a = (undefined2 *******)0x7;
      local_c = (undefined2 ******)*(undefined2 *)0x1b40;
      local_e = (undefined2 *******)*(undefined2 *)0x1b3e;
      ppppppuStack_10 = (undefined2 ******)*(undefined2 *)0xa5a;
      local_14[1] = 0;
      local_14[0] = 0x1def;
      local_16 = (undefined2 ******)0xd017;
      FUN_1def_1460();
      ppppppuStack_4 = (undefined2 ******)0x0;
      local_6 = (undefined2 *******)0x0;
      ppppppuStack_8 = (undefined2 ******)0x2;
      local_a = (undefined2 *******)local_8c[0];
      local_c = (undefined2 ******)(*(int *)0x1b40 + -1);
      local_e = (undefined2 *******)0x1b6;
      ppppppuStack_10 = (undefined2 ******)(*(int *)0xa5a + 1);
      local_14[1] = 0xe0;
      local_14[0] = 0x1def;
      local_16 = (undefined2 ******)0xd03d;
      FUN_1def_1460();
      ppppppuStack_4 = (undefined2 ******)0x0;
      local_6 = (undefined2 *******)0x0;
      ppppppuStack_8 = (undefined2 ******)*(undefined2 *)0x1b42;
      local_a = (undefined2 *******)0x1d;
      local_c = local_be;
      local_e = (undefined2 *******)0x1def;
      uVar4 = 0x1def;
      ppppppuStack_10 = (undefined2 ******)0xd056;
      FUN_1def_23c5();
    }
    local_6 = (undefined2 *******)0xd05e;
    ppppppuStack_4 = (undefined2 ******)uVar4;
    FUN_1885_1f49();
    ppppppuStack_4 = (undefined2 ******)0x1885;
    local_6 = (undefined2 *******)0xd062;
    FUN_2bb4_000e();
    ppppppuStack_4 = (undefined2 ******)0x1;
    local_6 = (undefined2 *******)0x1e;
    ppppppuStack_8 = (undefined2 ******)0x1885;
    local_a = (undefined2 *******)0xd06f;
    FUN_1def_26a9();
    ppppppuStack_4 = (undefined2 ******)0x302;
    local_6 = (undefined2 *******)local_6e;
    ppppppuStack_8 = (undefined2 ******)0x205d;
    local_a = (undefined2 *******)0x1def;
    local_c = (undefined2 ******)0xd082;
    FUN_21f2_0356();
    ppppppuVar3 = (undefined2 ******)0x21f2;
    do {
      ppppppuStack_4 = (undefined2 ******)local_14;
      local_6 = &local_e;
      ppppppuStack_8 = &local_4c;
      local_a = &local_44;
      local_c = &local_30;
      local_e = &local_6;
      ppppppuVar5 = (undefined2 ******)0x13bf;
      local_14[1] = 0xd0a2;
      ppppppuStack_10 = ppppppuVar3;
      local_2a = FUN_13bf_27e0();
      if (*(int *)0x158 != 0) goto LAB_2bb4_1040;
      if (local_2a == 0xffff) {
        local_2a = 0xffff;
        goto LAB_2bb4_104f;
      }
      ppppppuStack_4 = (undefined2 ******)local_14[0];
      local_6 = (undefined2 *******)local_4c;
      ppppppuStack_8 = local_44;
      local_32 = (undefined2 *******)((int)local_30 + (int)local_4c);
      local_c = (undefined2 ******)0x0;
      local_e = (undefined2 *******)0x13bf;
      ppppppuStack_10 = (undefined2 ******)0xd0d4;
      local_a = local_32;
      iVar1 = FUN_2bb4_0b88();
      if (iVar1 != 0) {
        return 0;
      }
      if ((((local_32 != (undefined2 *******)0x0) && (0xe0 < (int)local_44)) &&
          ((int)local_44 < 0x1b6)) && (local_c = ppppppuVar5, *(int *)0xa60 < (int)local_4c)) {
        do {
          do {
            ppppppuStack_4 = &local_2c;
            local_6 = &local_16;
            ppppppuStack_8 = &local_30;
            local_a = &local_6;
            ppppppuVar5 = (undefined2 ******)0x1885;
            local_e = (undefined2 *******)0xd10e;
            FUN_1885_546d();
            local_c = ppppppuVar5;
          } while (local_6 != (undefined2 *******)0x0);
        } while (local_30 != (undefined2 *****)0x0);
        local_e = (undefined2 *******)0x20;
      }
      if (local_e == (undefined2 *******)0x20) goto LAB_2bb4_1472;
      ppppppuVar3 = ppppppuVar5;
    } while (local_32 == (undefined2 *******)0x0);
    do {
      do {
        ppppppuStack_4 = &local_2c;
        local_6 = &local_16;
        ppppppuStack_8 = &local_30;
        local_a = &local_6;
        ppppppuVar3 = (undefined2 ******)0x1885;
        local_e = (undefined2 *******)0xd149;
        local_c = ppppppuVar5;
        FUN_1885_546d();
        ppppppuVar5 = ppppppuVar3;
      } while (local_6 != (undefined2 *******)0x0);
    } while (local_30 != (undefined2 *****)0x0);
    if (((*(int *)0xa5c <= (int)local_44) && (*(int *)0xa5e <= (int)local_4c)) &&
       ((int)local_4c <= *(int *)0xa60)) break;
LAB_2bb4_13d7:
    local_32 = (undefined2 *******)0x0;
    local_2a = 0;
    if (*(int *)0xc60 == 0) {
      local_8c[0] = (undefined2 *****)0x4;
      ppppppuStack_4 = (undefined2 ******)0x203f;
    }
    else {
      local_8c[0] = (undefined2 *****)0x5;
      ppppppuStack_4 = &local_24;
    }
    local_6 = (undefined2 *******)local_be;
    local_a = (undefined2 *******)0xcf44;
    ppppppuStack_8 = ppppppuVar3;
    FUN_32b2_2854();
    ppppppuStack_4 = (undefined2 ******)0x2049;
    local_6 = (undefined2 *******)local_be;
    ppppppuStack_8 = (undefined2 ******)0x32b2;
    local_a = (undefined2 *******)0xcf54;
    FUN_32b2_2126();
    ppppppuStack_4 = (undefined2 ******)0x32b2;
    local_6 = (undefined2 *******)0xcf5b;
    FUN_1885_3af0();
    ppppppuStack_4 = (undefined2 ******)0x1885;
    local_6 = (undefined2 *******)0xcf60;
    FUN_1def_2636();
    local_2e = 0;
    while( true ) {
      ppppppuStack_4 = &local_2c;
      local_6 = &local_16;
      ppppppuStack_8 = &local_30;
      local_a = &local_6;
      local_c = (undefined2 ******)0x1def;
      ppppppuVar5 = (undefined2 ******)0x1885;
      local_e = (undefined2 *******)0xcf7a;
      FUN_1885_546d();
      if ((local_6 == (undefined2 *******)0x0) && (local_30 == (undefined2 *****)0x0)) break;
      ppppppuStack_4 = (undefined2 ******)0x0;
      local_6 = (undefined2 *******)0x7;
      ppppppuStack_8 = (undefined2 ******)0x1;
      local_a = (undefined2 *******)0x20;
      local_c = local_be;
      local_e = (undefined2 *******)0x1885;
      ppppppuStack_10 = (undefined2 ******)0xcfa2;
      FUN_1def_23c5();
      local_2e = 1;
    }
    if (local_2e != 0) goto LAB_2bb4_1472;
  }
  ppppppuStack_4 = (undefined2 ******)0x1885;
  local_6 = (undefined2 *******)0xd17b;
  FUN_1885_3af0();
  ppppppuStack_4 = (undefined2 ******)0x1885;
  local_6 = (undefined2 *******)0xd180;
  FUN_1def_2636();
  ppppppuStack_4 = (undefined2 ******)0x1;
  local_6 = (undefined2 *******)0x1e;
  ppppppuStack_8 = (undefined2 ******)0x1def;
  local_a = (undefined2 *******)0xd18d;
  FUN_1def_26a9();
  ppppppuStack_4 = (undefined2 ******)0x302;
  local_6 = (undefined2 *******)local_6e;
  ppppppuStack_8 = (undefined2 ******)0x2067;
  local_a = (undefined2 *******)0x1def;
  uVar4 = 0x21f2;
  local_c = (undefined2 ******)0xd1a0;
  FUN_21f2_0356();
  if (*(char *)0xb782 == '\0') {
    ppppppuStack_4 = (undefined2 ******)0x0;
    local_6 = (undefined2 *******)0x21f2;
    ppppppuStack_8 = (undefined2 ******)0xd1b2;
    FUN_1885_5256();
    ppppppuStack_4 = (undefined2 ******)0x1885;
    local_6 = (undefined2 *******)0xd1b8;
    FUN_1885_23c4();
    ppppppuStack_4 = (undefined2 ******)0x0;
    local_6 = (undefined2 *******)0x0;
    ppppppuStack_8 = (undefined2 ******)0x2;
    local_a = (undefined2 *******)0x6;
    local_c = (undefined2 ******)*(undefined2 *)0x1b40;
    local_e = (undefined2 *******)0x1b6;
    ppppppuStack_10 = (undefined2 ******)*(undefined2 *)0xa60;
    local_14[1] = 0xe0;
    local_14[0] = 0x1885;
    local_16 = (undefined2 ******)0xd1d9;
    FUN_1def_1460();
    ppppppuStack_4 = (undefined2 ******)0x1def;
    local_6 = (undefined2 *******)0xd1e1;
    FUN_1885_1f49();
    ppppppuStack_4 = (undefined2 ******)0x0;
    local_6 = (undefined2 *******)0x0;
    ppppppuStack_8 = (undefined2 ******)*(undefined2 *)0x1b42;
    local_a = (undefined2 *******)0x1e;
    local_c = (undefined2 ******)0x2075;
    local_e = (undefined2 *******)0x1885;
    uVar4 = 0x1def;
    ppppppuStack_10 = (undefined2 ******)0xd1f6;
    FUN_1def_23c5();
  }
LAB_2bb4_16b9:
  do {
    local_6 = (undefined2 *******)0xd1fe;
    ppppppuStack_4 = (undefined2 ******)uVar4;
    iVar1 = FUN_1def_2742();
    uVar4 = 0x1def;
  } while (iVar1 != 0);
  ppppppuStack_4 = &local_2c;
  local_6 = &local_16;
  ppppppuStack_8 = &local_30;
  local_a = &local_6;
  local_c = (undefined2 ******)0x1def;
  local_e = (undefined2 *******)0xd217;
  FUN_1885_546d();
  local_56 = local_4c;
  local_50 = local_44;
  local_4a = (undefined2 ******)((int)local_44 + 1);
  local_4e = (undefined2 ******)((int)local_4c + 1);
  local_42 = 0;
  ppppppuStack_4 = (undefined2 ******)0x0;
  local_6 = (undefined2 *******)0x1885;
  ppppppuStack_8 = (undefined2 ******)0xd239;
  FUN_1885_5256();
  ppppppuStack_4 = (undefined2 ******)*(undefined2 *)0x1b40;
  local_6 = (undefined2 *******)*(undefined2 *)0x1b3e;
  ppppppuStack_8 = (undefined2 ******)0x0;
  local_a = (undefined2 *******)0x0;
  local_c = (undefined2 ******)0x1885;
  local_e = (undefined2 *******)0xd24b;
  FUN_1def_12e8();
  if (*(int *)0x16c == 0) {
    ppppppuStack_4 = (undefined2 ******)0x0;
    local_6 = (undefined2 *******)0x0;
    ppppppuStack_8 = (undefined2 ******)0x1;
    local_a = (undefined2 *******)0x7;
    local_c = (undefined2 ******)*(undefined2 *)0x1b40;
    local_e = (undefined2 *******)*(undefined2 *)0x1b3e;
    ppppppuStack_10 = (undefined2 ******)*(int *)0xa60;
    local_14[1] = 0;
    local_14[0] = 0x1def;
    local_16 = (undefined2 ******)0xd275;
    FUN_1def_1460();
  }
  ppppppuStack_4 = (undefined2 ******)0x1def;
  ppppppuVar3 = (undefined2 ******)0x1885;
  local_6 = (undefined2 *******)0xd27d;
  FUN_1885_1f49();
  while( true ) {
    ppppppuStack_4 = &local_2c;
    local_6 = &local_16;
    ppppppuStack_8 = &local_30;
    local_a = &local_6;
    ppppppuVar5 = (undefined2 ******)0x1885;
    local_e = (undefined2 *******)0xd292;
    local_c = ppppppuVar3;
    FUN_1885_546d();
    if ((((param_1 != 0) ||
         ((local_6 == (undefined2 *******)0x0 && (local_30 == (undefined2 *****)0x0)))) &&
        (local_42 != 0)) &&
       (((param_1 == 0 || (local_6 != (undefined2 *******)0x0)) ||
        (local_30 != (undefined2 *****)0x0)))) break;
    if (*(int *)0x158 != 0) goto LAB_2bb4_1040;
    ppppppuStack_4 = (undefined2 ******)0x1885;
    ppppppuVar3 = (undefined2 ******)0x1def;
    local_6 = (undefined2 *******)0xd2d4;
    local_14[0] = FUN_1def_2742();
    local_32 = (undefined2 *******)((int)local_30 + (int)local_6);
    local_6 = (undefined2 *******)local_2c;
    ppppppuStack_8 = local_16;
    local_c = (undefined2 ******)0x0;
    local_e = (undefined2 *******)0x1def;
    ppppppuStack_10 = (undefined2 ******)0xd2f1;
    local_a = local_32;
    ppppppuStack_4 = (undefined2 ******)local_14[0];
    iVar1 = FUN_2bb4_0b88();
    if (iVar1 != 0) {
      return 0;
    }
    if ((int)local_16 < *(int *)0xa5c) {
      local_16 = (undefined2 ******)*(int *)0xa5c;
    }
    if ((int)local_2c < (int)*(uint *)0xa5e) {
      local_2c = (undefined2 ******)*(uint *)0xa5e;
    }
    if ((int)*(uint *)0xa60 < (int)local_2c) {
      local_2c = (undefined2 ******)*(uint *)0xa60;
    }
    if ((((param_1 == 0) &&
         (uVar2 = (int)local_50 - (int)local_44 >> 0xf,
         (int)(((int)local_50 - (int)local_44 ^ uVar2) - uVar2) < 5)) &&
        (uVar2 = (int)local_56 - (int)local_4c >> 0xf,
        (int)(((int)local_56 - (int)local_4c ^ uVar2) - uVar2) < 5)) && (local_14[0] != 0)) {
      local_e = (undefined2 *******)((*(int *)0x1b3e - *(int *)0xa5c) / 2 + *(int *)0xa5c);
      local_14[0] = (*(int *)0xa60 - *(int *)0xa5e) / 2 + *(int *)0xa5e;
      while ((local_6 != (undefined2 *******)0x0 || (local_30 != (undefined2 *****)0x0))) {
        uVar2 = (int)local_2c >> 0xf;
        local_4c = (undefined2 ******)
                   ((((int)(((uint)local_2c ^ uVar2) - uVar2) >> 4 ^ uVar2) - uVar2) + 1);
        uVar2 = (int)(local_16 + 2) >> 0xf;
        local_44 = (undefined2 ******)
                   (((int)(((uint)(local_16 + 2) ^ uVar2) - uVar2) >> 3 ^ uVar2) - uVar2);
        if (((0x10 < (int)local_44) && (((int)local_44 < 0x4e && (1 < (int)local_4c)))) &&
           ((int)local_4c < *(int *)0x1b42)) {
          ppppppuStack_4 = (undefined2 ******)0x0;
          local_6 = (undefined2 *******)0x2;
          local_c = (undefined2 ******)0x2090;
          ppppppuStack_10 = (undefined2 ******)0xd3de;
          local_e = (undefined2 *******)ppppppuVar3;
          local_a = (undefined2 *******)local_44;
          ppppppuStack_8 = local_4c;
          FUN_1def_23c5();
          ppppppuStack_4 = (undefined2 ******)(*(int *)0xa60 + -1);
          local_6 = (undefined2 *******)(*(int *)0x1b3e + -1);
          ppppppuStack_8 = (undefined2 ******)(*(int *)0xa5e + 1);
          local_a = (undefined2 *******)(*(int *)0xa5c + 1);
          local_c = (undefined2 ******)0x1def;
          local_e = (undefined2 *******)0xd3fa;
          FUN_1885_1f1b();
          ppppppuStack_4 = (undefined2 ******)0x1885;
          local_6 = (undefined2 *******)0xd402;
          FUN_1885_1f49();
          ppppppuStack_4 = (undefined2 ******)0x0;
          local_6 = (undefined2 *******)0x2;
          ppppppuStack_8 = local_4c;
          local_a = (undefined2 *******)local_44;
          local_c = (undefined2 ******)0x2093;
          local_e = (undefined2 *******)0x1885;
          ppppppuStack_10 = (undefined2 ******)0xd418;
          FUN_1def_23c5();
          ppppppuStack_4 = (undefined2 ******)local_14[0];
          local_6 = local_e;
          ppppppuStack_8 = (undefined2 ******)0x5;
          local_a = (undefined2 *******)0x1def;
          local_c = (undefined2 ******)0xd42e;
          FUN_32b2_6cc6();
          local_a = (undefined2 *******)0x32b2;
          local_c = (undefined2 ******)0xd433;
          FUN_32b2_7258();
          local_14[1] = 0x32b2;
          local_14[0] = -0x2bc3;
          FUN_32b2_6eb1();
          local_14[1] = 0x32b2;
          local_14[0] = -0x2bba;
          FUN_32b2_6cc6();
          local_14[1] = 0x32b2;
          local_14[0] = -0x2bb5;
          FUN_32b2_7258();
          uStack_1a = 0x32b2;
          uStack_1c = 0xd455;
          FUN_32b2_6eb1();
          uStack_1a = 0x32b2;
          uStack_1c = 0xd45e;
          FUN_32b2_6cc6();
          uStack_1a = 0x32b2;
          uStack_1c = 0xd463;
          FUN_32b2_7258();
          ppppppuStack_22 = (undefined2 ******)0x32b2;
          local_24 = (undefined2 ******)0xd46d;
          FUN_32b2_6eb1();
          ppppppuStack_22 = local_2c;
          local_24 = local_16;
          local_26 = local_2c;
          local_28 = local_16;
          local_2a = *(uint *)0xa60;
          local_2c = (undefined2 ******)*(uint *)0xa5c;
          local_2e = 1;
          local_30 = (undefined2 *****)0x32b2;
          local_32 = (undefined2 *******)0xd489;
          FUN_2bb4_0079();
          ppppppuStack_4 = (undefined2 ******)0x1;
          local_6 = (undefined2 *******)0x32b2;
          ppppppuVar3 = (undefined2 ******)0x21f2;
          ppppppuStack_8 = (undefined2 ******)0xd495;
          FUN_21f2_27eb();
        }
        ppppppuStack_4 = &local_2c;
        local_6 = &local_16;
        ppppppuStack_8 = &local_30;
        local_a = &local_6;
        local_e = (undefined2 *******)0xd4ab;
        local_c = ppppppuVar3;
        FUN_1885_546d();
        ppppppuStack_4 = (undefined2 ******)0x0;
        local_6 = (undefined2 *******)0x1885;
        ppppppuVar3 = (undefined2 ******)0x21f2;
        ppppppuStack_8 = (undefined2 ******)0xd4b6;
        FUN_21f2_27eb();
      }
      local_6 = (undefined2 *******)0xd4bf;
      ppppppuStack_4 = ppppppuVar3;
      FUN_1885_2414();
      return 1;
    }
    if ((local_4a != local_16) || (local_4e != local_2c)) {
      local_50 = local_16;
      local_56 = local_2c;
      local_42 = 1;
      if (param_1 == 0) {
        ppppppuStack_4 = (undefined2 ******)0x1;
        local_6 = (undefined2 *******)0x21;
        ppppppuStack_8 = (undefined2 ******)0x1def;
        local_a = (undefined2 *******)0xd4fc;
        FUN_1def_26a9();
        if (((int)local_56 < (int)(local_4c + -0xf)) && ((int)local_44 + -5 < (int)local_50)) {
          local_50 = local_44 + -0xf;
          if (*(int *)0xc60 == 0) {
            local_6 = (undefined2 *******)0x4;
            local_c = (undefined2 ******)0x2096;
          }
          else {
            local_6 = (undefined2 *******)0x5;
            local_c = &local_24;
          }
          ppppppuStack_4 = (undefined2 ******)0xffff;
          ppppppuStack_8 = (undefined2 ******)0x1;
          local_a = (undefined2 *******)0x21;
          local_e = (undefined2 *******)0x1def;
          ppppppuStack_10 = (undefined2 ******)0xd555;
          local_56 = local_4c + -0xf;
          FUN_1def_23c5();
          local_6 = (undefined2 *******)0x4;
          local_a = (undefined2 *******)0x2a;
          local_c = (undefined2 ******)0x20a0;
          local_e = (undefined2 *******)(undefined2 ******)0x1def;
LAB_2bb4_1a2b:
          ppppppuStack_4 = (undefined2 ******)0xffff;
          ppppppuStack_8 = (undefined2 ******)0x1;
          ppppppuVar3 = (undefined2 ******)0x1def;
          ppppppuStack_10 = (undefined2 ******)0xd571;
          FUN_1def_23c5();
        }
        else if ((int)local_44 + -5 < (int)local_50) {
          uVar2 = (int)local_50 - (int)local_44 >> 0xf;
          if (((int)(((int)local_50 - (int)local_44 ^ uVar2) - uVar2) < 5) &&
             (uVar2 = (int)local_56 - (int)local_4c >> 0xf,
             (int)(((int)local_56 - (int)local_4c ^ uVar2) - uVar2) < 5)) {
            ppppppuStack_4 = (undefined2 ******)0x20c7;
          }
          else {
            ppppppuStack_4 = (undefined2 ******)0x20d8;
          }
          local_6 = (undefined2 *******)0x1def;
          ppppppuVar3 = (undefined2 ******)0x21f2;
          ppppppuStack_8 = (undefined2 ******)0xd623;
          FUN_21f2_0356();
        }
        else {
          ppppppuStack_4 = (undefined2 ******)0x20a8;
          local_6 = (undefined2 *******)0x1def;
          ppppppuVar3 = (undefined2 ******)0x21f2;
          ppppppuStack_8 = (undefined2 ******)0xd58b;
          FUN_21f2_0356();
          if ((5 < *(byte *)0x125) && ((int)local_56 < (int)(local_4c + -0xf))) {
            local_e = (undefined2 *******)ppppppuVar3;
            if (*(byte *)0x125 < 10) {
              local_50 = (undefined2 ******)((int)local_44 + -0xf);
              local_56 = local_4c + -0xf;
              local_6 = (undefined2 *******)0x6;
              local_a = (undefined2 *******)0x26;
              local_c = (undefined2 ******)0x20c0;
            }
            else {
              local_6 = (undefined2 *******)0x5;
              local_a = (undefined2 *******)0x26;
              local_c = (undefined2 ******)0x20b9;
            }
            goto LAB_2bb4_1a2b;
          }
          local_50 = (undefined2 ******)((int)local_44 + -0xf);
          local_56 = (undefined2 ******)((int)local_4c - 0xf);
        }
      }
      ppppppuStack_4 = local_56;
      local_6 = (undefined2 *******)local_50;
      ppppppuStack_8 = local_4c;
      local_a = (undefined2 *******)local_44;
      local_c = (undefined2 ******)0x2;
      ppppppuStack_10 = (undefined2 ******)0xd638;
      local_e = (undefined2 *******)ppppppuVar3;
      FUN_2bb4_0929();
      if ((int)local_44 - (int)local_50 == 0x1e) {
        ppppppuStack_4 = (undefined2 ******)0xffff;
        local_6 = (undefined2 *******)0x2;
        ppppppuStack_8 = local_56;
        local_a = (undefined2 *******)local_50;
        local_c = local_4c;
        local_e = (undefined2 *******)local_44;
        local_14[1] = 0xd65f;
        ppppppuStack_10 = ppppppuVar3;
        FUN_2b6e_0231();
        ppppppuStack_4 = (undefined2 ******)0xffff;
        local_6 = (undefined2 *******)0x2;
        ppppppuStack_8 = local_4c;
        local_a = (undefined2 *******)local_50;
        local_c = local_56;
        local_e = (undefined2 *******)local_44;
        ppppppuStack_10 = (undefined2 ******)0x2b6e;
        ppppppuVar3 = (undefined2 ******)0x2b6e;
        local_14[1] = 0xd67b;
        FUN_2b6e_0231();
      }
    }
    local_4a = local_16;
    local_4e = local_2c;
  }
  ppppppuStack_4 = (undefined2 ******)local_14[0];
  local_6 = (undefined2 *******)local_2c;
  ppppppuStack_8 = local_16;
  local_32 = (undefined2 *******)((int)local_30 + (int)local_2c);
  local_c = (undefined2 ******)0x0;
  local_e = (undefined2 *******)0x1885;
  ppppppuStack_10 = (undefined2 ******)0xd6a7;
  local_a = local_32;
  iVar1 = FUN_2bb4_0b88();
  if (iVar1 != 0) {
    return 0;
  }
  do {
    ppppppuStack_4 = &local_2c;
    local_6 = &local_16;
    ppppppuStack_8 = &local_30;
    local_a = &local_6;
    local_c = (undefined2 ******)0x1885;
    ppppppuVar5 = (undefined2 ******)0x1885;
    local_e = (undefined2 *******)0xd6d4;
    FUN_1885_546d();
    if (param_1 == 0) break;
  } while ((local_6 != (undefined2 *******)0x0) || (local_30 != (undefined2 *****)0x0));
  if (param_1 == 0) {
    if ((int)local_44 - (int)local_50 == 0x1e) {
LAB_2bb4_1472:
      local_c = (undefined2 ******)0x0;
LAB_2bb4_1bd4:
      ppppppuStack_4 = (undefined2 ******)0x1;
      local_6 = (undefined2 *******)0x1;
      ppppppuStack_8 = (undefined2 ******)0x1;
      local_a = (undefined2 *******)0x1;
      ppppppuStack_10 = (undefined2 ******)0xd719;
      local_e = (undefined2 *******)ppppppuVar5;
      FUN_2bb4_0730();
      return 0;
    }
    if ((int)local_44 - (int)local_50 == 0xf) {
      if ((int)local_4c - (int)local_56 == 0xf) {
        local_c = (undefined2 ******)0xffff;
      }
      else {
        local_c = (undefined2 ******)0xfffe;
      }
      goto LAB_2bb4_1bd4;
    }
    if (((9 < *(byte *)0x125) && ((int)local_56 < (int)(local_4c + -0xf))) &&
       ((int)local_50 <= (int)local_44 + -5)) {
      uVar4 = *(undefined2 *)0xc32;
      *(undefined2 *)0xca6 = *(undefined2 *)0xc30;
      *(undefined2 *)0xca8 = uVar4;
      uVar4 = *(undefined2 *)0xc4a;
      *(undefined2 *)0xcaa = *(undefined2 *)0xc48;
      *(undefined2 *)0xcac = uVar4;
      uVar4 = *(undefined2 *)0xc4e;
      *(undefined2 *)0xcae = *(undefined2 *)0xc4c;
      *(undefined2 *)0xcb0 = uVar4;
      local_be[0] = (undefined2 *****)((int)local_44 - (int)local_50);
      ppppppuStack_4 = (undefined2 ******)0x1885;
      local_6 = (undefined2 *******)0xd788;
      FUN_32b2_6d9b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd790;
      FUN_32b2_6e4b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd798;
      FUN_32b2_6ef9();
      local_be[0] = (undefined2 *****)((int)local_4c - (int)local_56);
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd7ab;
      FUN_32b2_6d9b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd7b3;
      FUN_32b2_6e4b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd7bb;
      FUN_32b2_6ef9();
      local_be[0] = (undefined2 *****)(*(int *)0x1b3e - *(int *)0xa5c);
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd7cf;
      FUN_32b2_6d9b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd7d7;
      FUN_32b2_6e4b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd7df;
      FUN_32b2_6ef9();
      uVar6 = *(uint *)0xa60 < *(uint *)0xa5e;
      local_be[0] = (undefined2 *****)(*(uint *)0xa60 - *(uint *)0xa5e);
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd7f3;
      FUN_32b2_6d9b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd7fb;
      FUN_32b2_6e4b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd803;
      FUN_32b2_6ef9();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd80b;
      FUN_32b2_6cc6();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd813;
      FUN_32b2_7065();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd81b;
      FUN_32b2_6e4b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd823;
      FUN_32b2_6ef9();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd82b;
      FUN_32b2_6cc6();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd833;
      FUN_32b2_7065();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd83b;
      FUN_32b2_6e4b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd843;
      FUN_32b2_6ef9();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd84c;
      FUN_32b2_6d14();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd854;
      FUN_32b2_6cc6();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd85c;
      FUN_32b2_6cc6();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd861;
      FUN_32b2_7bf4();
      ppppppuStack_4 = (undefined2 ******)0xc30;
      local_6 = (undefined2 *******)0x32b2;
      ppppppuStack_8 = (undefined2 ******)0xd86b;
      FUN_32b2_704d();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd871;
      FUN_32b2_6e4b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd876;
      FUN_32b2_7258();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd87b;
      FUN_32b2_7191();
      if ((bool)uVar6) {
        uVar4 = *(undefined2 *)0x938e;
        *(undefined2 *)0xc30 = *(undefined2 *)0x938c;
        *(undefined2 *)0xc32 = uVar4;
      }
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd894;
      FUN_32b2_6cc6();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd89c;
      FUN_32b2_704d();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd8a5;
      FUN_32b2_7065();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd8ae;
      FUN_32b2_7095();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd8b6;
      FUN_32b2_6e63();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd8bf;
      FUN_32b2_6cc6();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd8c7;
      FUN_32b2_704d();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd8d0;
      FUN_32b2_7065();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd8d9;
      FUN_32b2_7095();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd8e1;
      FUN_32b2_6e63();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd8ea;
      FUN_32b2_6cc6();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd8f2;
      FUN_32b2_704d();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd8fb;
      FUN_32b2_6d9b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd900;
      FUN_32b2_7173();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd908;
      FUN_32b2_6d9b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd90d;
      FUN_32b2_718c();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd916;
      FUN_32b2_6e4b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd91e;
      FUN_32b2_6e63();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd927;
      FUN_32b2_6cc6();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd92f;
      FUN_32b2_704d();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd937;
      FUN_32b2_6d9b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd93c;
      FUN_32b2_718c();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd945;
      FUN_32b2_6d9b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd94a;
      FUN_32b2_7178();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd953;
      FUN_32b2_6e4b();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd95b;
      FUN_32b2_6e63();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd964;
      FUN_32b2_6cc6();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd96d;
      FUN_32b2_7065();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd975;
      FUN_32b2_7035();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd97e;
      FUN_32b2_6e63();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd987;
      FUN_32b2_6cc6();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd990;
      FUN_32b2_7065();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd998;
      FUN_32b2_7035();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd9a1;
      FUN_32b2_6e63();
      ppppppuStack_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 *******)0xd9a6;
      FUN_2b6e_0033();
      ppppppuStack_4 = (undefined2 ******)0x2b6e;
      local_6 = (undefined2 *******)0xd9ab;
      FUN_21f2_1ef9();
      ppppppuStack_4 = (undefined2 ******)0x21f2;
      local_6 = (undefined2 *******)0xd9b0;
      FUN_1885_3b7a();
      ppppppuStack_4 = (undefined2 ******)0x1885;
      local_6 = (undefined2 *******)0xd9b4;
      FUN_2bb4_07d8();
      if (*(int *)0x11c != 0x1e) {
        ppppppuStack_4 = (undefined2 ******)0x0;
        local_6 = (undefined2 *******)0x1885;
        ppppppuStack_8 = (undefined2 ******)0xd9c3;
        FUN_21f2_27eb();
      }
      *(undefined2 *)0xbc0 = 1;
      return 0;
    }
  }
  ppppppuStack_4 = local_56;
  local_6 = (undefined2 *******)local_50;
  ppppppuStack_8 = local_4c;
  local_a = (undefined2 *******)local_44;
  local_c = (undefined2 ******)0x1;
  goto LAB_2bb4_13a8;
LAB_2bb4_1232:
  if (local_2a == 0x65) {
    ppppppuStack_4 = (undefined2 ******)0x10ad;
    local_6 = (undefined2 *******)0xcd81;
    FUN_32b2_6cc6();
    ppppppuStack_4 = (undefined2 ******)0x32b2;
    local_6 = (undefined2 *******)0xcd8a;
    FUN_32b2_704d();
    ppppppuStack_4 = (undefined2 ******)0x32b2;
    ppppppuVar5 = (undefined2 ******)0x32b2;
    local_6 = (undefined2 *******)0xcd92;
    FUN_32b2_6e63();
  }
  uVar6 = local_2a < 0x66;
  if (local_2a == 0x66) {
    local_28 = (undefined2 ******)*(int *)0x9380;
    local_26 = (undefined2 ******)*(uint *)0x9382;
  }
  local_6 = (undefined2 *******)0xcdad;
  ppppppuStack_4 = ppppppuVar5;
  FUN_32b2_6cc6();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 *******)0xcdb6;
  FUN_32b2_6cc6();
  ppppppuStack_4 = (undefined2 ******)0x32b2;
  uVar4 = 0x32b2;
  local_6 = (undefined2 *******)0xcdbb;
  FUN_32b2_7191();
  if ((bool)uVar6) {
    local_28 = (undefined2 ******)*(int *)0x9390;
    local_26 = (undefined2 ******)*(uint *)0x9392;
  }
  goto LAB_2bb4_12b8;
}


