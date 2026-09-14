/* 10ad:16d4 */

/* WARNING: Removing unreachable block (ram,0x00012301) */
/* WARNING: Removing unreachable block (ram,0x00012321) */
/* WARNING: Removing unreachable block (ram,0x0001232c) */

int __cdecl16far
FUN_10ad_16d4(undefined2 *param_1,undefined2 *param_2,int param_3,int param_4,undefined2 param_5,
             uint param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 extraout_AH;
  uint uVar6;
  byte bVar7;
  byte *unaff_DI;
  int iVar8;
  int iVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined1 uVar11;
  int local_94;
  char acStack_8f [93];
  uint local_32;
  undefined2 local_30;
  int local_2e;
  int local_22;
  int local_20;
  int local_1e;
  uint local_1c;
  char local_1a;
  int local_18;
  undefined2 local_16;
  int local_14;
  int local_12;
  int local_10;
  int local_a;
  int local_8;
  
  FUN_32b2_02bc();
  local_1a = '\0';
  local_10 = *(int *)0x1b3e;
  local_12 = *(int *)0xa5e;
  local_14 = 0;
  local_16 = 0x32b2;
  local_18 = 0x21d9;
  FUN_1def_1460();
  local_2e = 0;
  if (((*(char *)0x124 != '\0') && (*(char *)0xb782 == '\0')) && ((int)param_6 < 10000)) {
    local_2e = 1;
    FUN_10ad_158b();
  }
LAB_10ad_1746:
  FUN_1def_26a9();
  FUN_21f2_0356();
  FUN_1def_26a9();
  local_8 = 0x223f;
  FUN_1def_271e();
  local_20 = 0;
  local_18 = 0;
  acStack_8f[1] = '\0';
LAB_10ad_177c:
  local_8 = local_8 + local_20;
  local_a = 1;
  iVar8 = 0x21f2;
  FUN_21f2_0f13();
  do {
    *(undefined2 *)0xc1a = 0xfffb;
    local_10 = *(int *)0xc26;
    local_30 = *(undefined2 *)0xa4a;
    bVar7 = 1;
    *(undefined2 *)0xca4 = 1;
    *(undefined2 *)0xa4a = 1;
    if (local_10 == 0) {
      *(undefined2 *)0xc26 = 0xffff;
    }
    if ((*(byte *)0x12f < 2) || (3 < *(byte *)0xb782)) {
      local_8 = param_4;
      local_a = param_3;
      iVar9 = 0x13bf;
      local_12 = 0x22b6;
      local_10 = iVar8;
      bVar7 = 1;
      local_12 = FUN_13bf_2a18();
    }
    else {
      local_12 = -99;
      iVar9 = iVar8;
    }
    *(int *)0xc26 = local_10;
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)0xa4a = local_30;
    if (((local_2e != 0) && (local_1e != 0)) &&
       ((1 < (int)local_1c && ((((int)local_1c < 0x78 && (0x11 < local_22)) && (local_22 < 0x2f)))))
       ) {
      local_16 = 1;
      do {
        local_10 = 0x231c;
        FUN_1885_546d();
      } while( true );
    }
    iVar8 = iVar9;
    if (local_12 == 0) {
      if (local_a != 0) {
        iVar8 = 0x32b2;
        local_a = 0x2362;
        FUN_32b2_2ca0();
        local_8 = iVar9;
      }
    }
    else {
      local_a = 1;
    }
  } while (((*(int *)0xc18 != -5) && (local_12 == 0)) && (local_1e == 0));
  local_8 = local_8 + local_20;
  FUN_21f2_0f13();
  if (((*(int *)0xc18 == -5) && (iVar8 == 1)) && (*(int *)0xc08 == 0)) {
    *(undefined2 *)0xc18 = 0;
    *(undefined2 *)0xc1e = 0;
    FUN_1def_2730();
    FUN_1def_26a9();
    bVar7 = 0;
    FUN_1def_2636();
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
    (&stack0xfffe)[(int)unaff_DI] = (&stack0xfffe)[(int)unaff_DI] | bVar7;
    FUN_1def_2730();
    *(undefined2 *)0xca4 = 0;
    FUN_1885_23aa();
    goto LAB_10ad_1fbd;
  }
  if ((*(int *)0xc18 == 2) || ((*(int *)0xc1e == 2 && (*(int *)0xc20 == 100)))) {
    local_1a = '\0';
    pcVar4 = (code *)swi(0x3f);
    iVar8 = (*pcVar4)();
    *unaff_DI = *unaff_DI | bVar7;
    if (iVar8 < 0) goto LAB_10ad_1746;
    if (iVar8 == 99) {
      return 99;
    }
    bVar5 = true;
    local_12 = 0;
    goto LAB_10ad_1fc2;
  }
  if ((*(int *)0xc18 == -1) && (*(int *)0xc20 != 100)) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    *(undefined2 *)0xc18 = 0;
    FUN_1def_2730();
    goto LAB_10ad_19ba;
  }
  *(undefined2 *)0xc18 = 0;
  if (local_12 != -99) {
    *(undefined2 *)0xca4 = 0;
    if (*(int *)0x158 == 0) {
      if (((local_1e != 0) && (local_18 == 1)) && (local_22 < *(int *)0xa60)) goto code_r0x000125af;
      goto LAB_10ad_1aee;
    }
    FUN_1def_2730();
    goto LAB_10ad_19ff;
  }
  *(undefined2 *)0xca4 = 1;
  local_20 = 0;
  do {
    FUN_1def_2730();
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
    local_14 = CONCAT11(extraout_AH,*(undefined1 *)0x5b0f);
    local_18 = local_18 + 1;
    *(undefined2 *)0xca4 = 0;
    if (*(int *)0x158 != 0) {
LAB_10ad_19ff:
      FUN_1885_23aa();
      return -0x457;
    }
    if ((local_14 == -1) || (local_14 == 99)) {
      if (*(char *)0x12f != '\0') {
        *(undefined1 *)0x12f = 1;
      }
      goto LAB_10ad_1866;
    }
    if (local_14 == 0x62) goto LAB_10ad_1866;
    if (*(char *)0xbea4 == '\0') goto LAB_10ad_1a93;
    FUN_1def_26a9();
    local_32 = 0;
    while (uVar6 = FUN_32b2_21c4(), local_32 < uVar6) {
      iVar8 = local_20 + 2;
      local_20 = local_20 + 1;
      acStack_8f[iVar8] = *(char *)(local_32 + 0xbea4);
      FUN_21f2_0356();
      local_32 = local_32 + 1;
    }
    if ((local_18 != 1) || (local_14 != 1)) goto LAB_10ad_1a93;
    *(undefined2 *)0xca4 = 0xffff;
  } while( true );
code_r0x000125af:
  if (0x21c < (int)local_1c) {
    local_12 = 0xd;
LAB_10ad_1aee:
    if (((local_12 == 0xd) || (local_12 == 0x3d)) ||
       (((local_12 == 0x3a || (local_12 == 0x6b00)) || ((0x39ff < local_12 && (local_12 < 0x3e01))))
       )) goto LAB_10ad_1a9f;
    if ((local_12 == 99) || (local_12 == 0x3f00)) goto LAB_10ad_1861;
    if (local_12 == -1) {
      FUN_1def_2730();
      FUN_1885_23aa();
      return -1;
    }
    if ((0x61ff < local_12) && (local_12 < 0x6b01)) {
      FUN_1def_2730();
      FUN_1885_23aa();
      return local_12;
    }
    if ((((local_1e != 0) && (*(int *)0xa5c < (int)local_1c)) && (*(int *)0xa5e < local_22)) &&
       (local_22 < *(int *)0xa60)) {
      if (local_20 < 1) {
        FUN_1def_2730();
        FUN_1885_23aa();
        return local_1e + 100;
      }
      goto LAB_10ad_1a9f;
    }
    if ((local_1e != 0) && (local_22 < *(int *)0xa5e)) {
      FUN_1def_2730();
      uVar6 = (int)local_1c >> 0xf;
      local_32 = (((int)((local_1c ^ uVar6) - uVar6) >> 3 ^ uVar6) - uVar6) + 1;
      FUN_1885_23aa();
      if (local_1e != 1) {
        return -local_32;
      }
      return local_32;
    }
    if ((local_12 == 0x7f) && (0 < local_20)) {
      if (acStack_8f[local_20 + 1] == -0x21) {
        local_1a = '\0';
      }
      if (acStack_8f[local_20 + 1] == '\'') {
        local_1a = '\x01';
      }
      if (acStack_8f[local_20 + 1] == '\"') {
        local_1a = '\x02';
      }
      local_20 = local_20 + -1;
      local_8 = local_20 + local_8;
      FUN_1def_26a9();
      local_10 = 0x1def;
      local_12 = 0x26fe;
      FUN_1def_23c5();
      FUN_1def_26a9();
    }
    local_94 = 0;
    if (((0x2f < local_12) && (local_12 < 0x3a)) || (local_12 == 0x2e)) {
      local_94 = 1;
    }
    if ((((local_12 == 0x70) || (local_12 == 0x50)) ||
        ((local_12 == 0x23 || ((local_12 == 0x26 || (local_12 == 0x5c)))))) || (local_12 == 0x40)) {
      local_94 = 2;
    }
    if (((((local_12 == 0x2b) || (local_12 == 0x2d)) || (local_12 == 0x2a)) ||
        ((local_12 == 0x2f || (local_12 == 0x5e)))) ||
       ((local_12 == 0x2c || ((local_12 == 0x5b || (local_12 == 0x5d)))))) {
      local_94 = 3;
    }
    if (((local_12 == 0xdf) || (local_12 == 0x27)) || (local_12 == 0x22)) {
      local_94 = 3;
    }
    if (0x4e < local_8 + local_20) {
      local_94 = 0;
    }
    if (local_94 != 0) {
      if ((acStack_8f[local_20 + 1] == '.') && (local_12 == 0x2e)) {
        local_12 = 0x2c;
        if (0x13 < *(byte *)0x123) {
          local_12 = 0x3b;
        }
        local_20 = local_20 + -1;
        local_94 = 3;
      }
      if (*(char *)0x124 != '\0') {
        if ((local_12 == 0x40) || (local_12 == 0x2a)) {
          local_94 = 4;
        }
        if (((acStack_8f[local_20 + 1] == '@') && (local_12 == 0x40)) ||
           ((acStack_8f[local_20 + 1] == '*' && (local_12 == 0x2a)))) {
          local_20 = local_20 + -1;
          local_12 = 0xdf;
          local_1a = '\x01';
        }
        if ((local_1a == '\x01') && ((local_12 == 0x40 || (local_12 == 0x2a)))) {
          local_12 = 0x27;
          local_1a = '\x02';
        }
        if ((local_1a == '\x02') && ((local_12 == 0x40 || (local_12 == 0x2a)))) {
          local_12 = 0x22;
          local_1a = '\x03';
        }
        if (local_94 == 3) {
          local_1a = '\0';
        }
      }
      FUN_1def_26a9();
      FUN_32b2_2854();
      local_10 = 0x32b2;
      local_12 = 0x28ac;
      FUN_1def_23c5();
      local_8 = local_20;
      iVar8 = local_20 + 2;
      local_20 = local_20 + 1;
      acStack_8f[iVar8] = (char)local_12;
      local_8 = local_8 + 8;
      FUN_1def_26a9();
    }
  }
  goto LAB_10ad_177c;
LAB_10ad_1a93:
  if (*(char *)0x12f != '\0') {
    *(undefined1 *)0x12f = 2;
  }
LAB_10ad_1a9f:
  FUN_1def_2730();
  iVar8 = local_20;
  bVar5 = false;
  if (local_20 == 0) goto LAB_10ad_1fc2;
  local_20 = local_20 + 1;
  acStack_8f[iVar8 + 2] = '\0';
  for (local_32 = 1; (int)local_32 <= local_20; local_32 = local_32 + 1) {
    acStack_8f[local_32] = acStack_8f[local_32 + 1];
  }
  if ((acStack_8f[1] != ',') && (acStack_8f[1] != ';')) {
    FUN_32b2_6d14();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    local_10 = 0x2929;
    FUN_32b2_6eb1();
    local_10 = 0x32b2;
    local_12 = 0x2932;
    FUN_10ad_0004();
    uVar10 = (undefined1 *)0xfff5 < &stack0xfff2;
    uVar11 = &stack0x0000 == (undefined1 *)0x4;
    FUN_32b2_6d14();
    FUN_32b2_6e99();
    FUN_32b2_6fc7();
    FUN_32b2_6e99();
    FUN_32b2_7191();
    if (!(bool)uVar10 && !(bool)uVar11) goto LAB_10ad_1861;
    if (*(int *)0xb6a == 0) {
      uVar10 = param_6 < 10000;
      uVar11 = param_6 == 10000;
      if (10000 < (int)param_6) {
        FUN_32b2_6d14();
        FUN_32b2_6d14();
        FUN_32b2_7191();
        if (!(bool)uVar10 && !(bool)uVar11) goto LAB_10ad_1861;
      }
    }
    FUN_32b2_6d14();
    FUN_32b2_6e63();
  }
  if (*(int *)0xc22 == 0) {
    local_20 = 0;
    local_32 = 0xffff;
    while (acStack_8f[local_20 + 1] != '\0') {
      if ((acStack_8f[local_20 + 1] == ',') || (acStack_8f[local_20 + 1] == ';')) {
        local_32 = local_20 + 1;
        break;
      }
      local_20 = local_20 + 1;
    }
    if ((int)local_32 < 1) {
      uVar1 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar1;
    }
    else if (acStack_8f[local_32 + 1] != '\0') {
      FUN_32b2_6d14();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      local_10 = 0x2a05;
      FUN_32b2_6eb1();
      local_10 = 0x32b2;
      local_12 = 0x2a0e;
      FUN_10ad_0004();
      uVar10 = (undefined1 *)0xfff5 < &stack0xfff2;
      uVar11 = &stack0x0000 == (undefined1 *)0x4;
      FUN_32b2_6d14();
      FUN_32b2_6e99();
      FUN_32b2_6fc7();
      FUN_32b2_6e99();
      FUN_32b2_7191();
      if (!(bool)uVar10 && !(bool)uVar11) {
LAB_10ad_1861:
        FUN_1def_2730();
LAB_10ad_1866:
        FUN_1885_23aa();
        return 99;
      }
      uVar10 = param_6 < 10000;
      uVar11 = param_6 == 10000;
      if (10000 < (int)param_6) {
        FUN_32b2_6d14();
        FUN_32b2_6d14();
        FUN_32b2_7191();
        if (!(bool)uVar10 && !(bool)uVar11) goto LAB_10ad_1861;
      }
      FUN_32b2_6d14();
      FUN_32b2_6e63();
    }
    if (*(int *)0xc22 == 0) {
LAB_10ad_1fbd:
      bVar5 = true;
LAB_10ad_1fc2:
      if (local_12 == 0x6b00) {
        uVar1 = *param_1;
        uVar2 = param_1[1];
        uVar3 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar3;
        *param_2 = uVar1;
        param_2[1] = uVar2;
      }
      if (local_12 == 0x3a00) {
        uVar1 = *(undefined2 *)0x9072;
        *param_1 = *(undefined2 *)0x9070;
        param_1[1] = uVar1;
      }
      if (local_12 == 0x3d00) {
        uVar1 = *(undefined2 *)0x9072;
        *param_1 = *(undefined2 *)0x9070;
        param_1[1] = uVar1;
        FUN_32b2_6cc6();
        FUN_32b2_6fd6();
        FUN_32b2_6e63();
      }
      if (local_12 == 0x3c00) {
        uVar1 = *(undefined2 *)0x9072;
        *param_2 = *(undefined2 *)0x9070;
        param_2[1] = uVar1;
      }
      if (local_12 == 0x3b00) {
        FUN_32b2_6cc6();
        FUN_32b2_6fd6();
        FUN_32b2_6e63();
        uVar1 = *(undefined2 *)0x9072;
        *param_2 = *(undefined2 *)0x9070;
        param_2[1] = uVar1;
      }
      if (((bVar5) && ((int)param_6 < 10000)) && (*(char *)0xcc6 != '\0')) {
        if (*(char *)0xcc6 == '\x01') {
          FUN_32b2_6cc6();
          FUN_32b2_704d();
          FUN_32b2_6e63();
          FUN_32b2_6cc6();
          FUN_32b2_704d();
          FUN_32b2_6e63();
        }
        if (*(char *)0xcc6 == '\x02') {
          FUN_32b2_6cc6();
          FUN_32b2_704d();
          FUN_32b2_6e63();
          FUN_32b2_6cc6();
          FUN_32b2_704d();
          FUN_32b2_6e63();
        }
      }
      if (((int)param_6 < 10000) && ((local_12 == 0x3d || (local_12 == 0x3a)))) {
        FUN_32b2_6cc6();
        FUN_32b2_704d();
        FUN_32b2_6e63();
        FUN_32b2_6cc6();
        FUN_32b2_704d();
        FUN_32b2_6e63();
      }
LAB_10ad_19ba:
      FUN_1885_23aa();
      return 0;
    }
  }
  local_1a = '\0';
  goto LAB_10ad_1746;
}


