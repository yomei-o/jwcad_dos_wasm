/* 10ad:0004 */

void __cdecl16far
FUN_10ad_0004(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 **ppuVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_6e [86];
  int local_18;
  int local_16;
  undefined1 *local_14;
  undefined1 **local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined1 *local_a;
  
  FUN_32b2_02bc();
  local_18 = 0;
  local_14 = (undefined1 *)0x0;
  local_12 = (undefined1 **)0x0;
  for (local_16 = 0; local_16 < 0x50; local_16 = local_16 + 1) {
    local_a = (undefined1 *)0x32b2;
    local_c = 0xb0e;
    local_c = FUN_10ad_071d();
    if ((((local_c == 0) || (local_c == 10)) || (local_c == 0x2c)) ||
       ((local_c == 0x3b || (local_c == 0x3a)))) break;
    if (local_c != 0x20) {
      if ((local_c == 0x2f) && (*(char *)(param_1 + local_16 + 1) == '/')) {
        local_c = 0x61;
        local_16 = local_16 + 1;
      }
      if (local_c == 0x5c) {
        local_c = 0x78;
      }
      if ((local_c == 0x78) && (*(char *)(param_1 + local_16 + 1) == '\\')) {
        local_c = 0x79;
        local_16 = local_16 + 1;
      }
      if (local_c == 0x70) {
        local_a = (undefined1 *)0x32b2;
        local_c = 0xb94;
        iVar2 = FUN_10ad_071d();
        if (iVar2 == 0x70) {
          local_c = 0x23;
          local_16 = local_16 + 1;
        }
      }
      if (local_c == 0x23) {
        local_a = (undefined1 *)0x32b2;
        local_c = 3000;
        iVar2 = FUN_10ad_071d();
        if (iVar2 == 0x70) {
          local_16 = local_16 + 1;
        }
      }
      local_a = (undefined1 *)0x32b2;
      local_c = 0xbcd;
      iVar1 = FUN_10ad_0409();
      iVar2 = local_18;
      if ((iVar1 == 8) && (0 < local_18)) {
        local_a = (undefined1 *)0x32b2;
        local_c = 0xbe6;
        iVar1 = FUN_10ad_0409();
        if (iVar1 == 8) {
          local_6e[iVar2] = 0x30;
          local_18 = local_18 + 1;
        }
      }
      if ((1 < *(byte *)0x132) && (0 < local_16)) {
        local_a = (undefined1 *)0x32b2;
        local_c = 0xc07;
        iVar2 = FUN_10ad_0409();
        if ((iVar2 == 2) || ((local_c == 0x5b || (local_c == 0x61)))) {
          local_a = (undefined1 *)0x32b2;
          local_c = 0xc26;
          local_10 = FUN_10ad_0409();
          if ((local_10 == 1) || (local_10 == 2)) {
            local_6e[local_18] = 0x2a;
            local_18 = local_18 + 1;
          }
        }
      }
      local_6e[local_18] = (undefined1)local_c;
      local_18 = local_18 + 1;
      if (1 < *(byte *)0x132) {
        local_a = (undefined1 *)0x32b2;
        local_c = 0xc57;
        iVar2 = FUN_10ad_0409();
        if ((iVar2 == 2) || (local_c == 0x5d)) {
          local_a = (undefined1 *)0x32b2;
          local_c = 0xc73;
          local_10 = FUN_10ad_0409();
          if ((local_10 == 1) || ((local_10 == 2 || (local_10 == 5)))) {
            local_6e[local_18] = 0x2a;
            local_18 = local_18 + 1;
          }
        }
      }
      local_a = (undefined1 *)0x32b2;
      local_c = 0xc97;
      iVar2 = FUN_10ad_0409();
      if (iVar2 == -1) goto LAB_10ad_01ce;
    }
  }
  iVar2 = local_18;
  local_6e[local_18] = 0;
  local_6e[iVar2 + 1] = 0;
  local_e = 0;
  for (local_16 = 0; local_16 < local_18; local_16 = local_16 + 1) {
    local_a = (undefined1 *)0x32b2;
    local_c = 0xd83;
    local_c = FUN_10ad_0409();
    local_a = (undefined1 *)0x32b2;
    local_c = 0xd91;
    local_10 = FUN_10ad_0409();
    if (((((((local_c == 1) && (((local_10 == 7 || (local_10 == 2)) || (local_10 == 5)))) ||
           ((local_c == 2 && (((local_10 == 1 || (local_10 == 2)) || (local_10 == 5)))))) ||
          (((local_c == 3 && (local_10 != 1)) &&
           ((local_10 != 2 && ((local_10 != 5 && (local_10 != 7)))))))) ||
         ((local_c == 4 &&
          ((local_16 == 0 ||
           ((((local_10 != 1 && (local_10 != 2)) && (local_10 != 5)) && (local_10 != 7)))))))) ||
        ((local_c == 5 &&
         (((local_12 = (undefined1 **)((int)local_12 + 1), local_10 == 0 || (local_10 == 4)) ||
          (local_10 == 6)))))) ||
       ((((local_c == 6 &&
          (((local_12 = (undefined1 **)((int)local_12 + -1), local_10 == 1 || (local_10 == 2)) ||
           ((local_10 == 5 || (local_10 == 7)))))) ||
         ((local_c == 7 && ((local_10 == 3 || (local_10 == 4)))))) ||
        ((local_c == 8 && ((local_e == 0 || ((2 < local_e && (local_e < 9))))))))))
    goto LAB_10ad_01ce;
    if ((int)local_12 < 0) goto LAB_10ad_0335;
    local_e = local_c;
  }
  if (local_12 != (undefined1 **)0x0) goto LAB_10ad_0335;
  local_a = (undefined1 *)0x32b2;
  local_c = 0xdc5;
  iVar2 = FUN_32b2_21c4();
  if (iVar2 != 0) {
    local_a = param_5;
    local_c = param_4;
    local_e = param_3;
    local_10 = param_2;
    local_12 = &local_14;
    local_14 = local_6e;
    local_16 = 0x32b2;
    local_18 = 0xdf7;
    puVar3 = (undefined2 *)FUN_10ad_04e6();
    local_a = (undefined1 *)*puVar3;
    goto LAB_10ad_0335;
  }
LAB_10ad_02fa:
  ppuVar4 = (undefined1 **)0x9000;
LAB_10ad_0302:
  *(undefined2 *)0x7a2a = *ppuVar4;
  *(undefined2 *)0x7a2c = ppuVar4[1];
  *(undefined2 *)0x7a2e = ppuVar4[2];
  *(undefined2 *)0x7a30 = ppuVar4[3];
  return;
LAB_10ad_01ce:
  local_12 = (undefined1 **)0x68;
LAB_10ad_0335:
  if (local_12 == (undefined1 **)0x0) {
    ppuVar4 = &local_a;
    goto LAB_10ad_0302;
  }
  if ((int)local_12 < 0x65) {
    local_a = local_6e;
    local_c = 0x32b2;
    local_e = 0xe21;
    FUN_32b2_2854();
  }
  if (local_12 == (undefined1 **)0x65) {
    local_a = local_6e;
    local_c = 0x32b2;
    local_e = 0xe36;
    FUN_32b2_2854();
  }
  if (local_12 == (undefined1 **)0x66) {
    local_a = local_6e;
    local_c = 0x32b2;
    local_e = 0xe4b;
    FUN_32b2_2854();
  }
  if (local_12 == (undefined1 **)0x67) {
    local_a = local_6e;
    local_c = 0x32b2;
    local_e = 0xe60;
    FUN_32b2_2854();
  }
  if (local_12 == (undefined1 **)0x68) {
    local_a = local_6e;
    local_c = 0x32b2;
    local_e = 0xe75;
    FUN_32b2_2854();
  }
  if (local_12 == (undefined1 **)0x320) {
    local_a = local_6e;
    local_c = 0x32b2;
    local_e = 0xe8b;
    FUN_32b2_2854();
  }
  local_a = local_6e;
  local_c = 0x32b2;
  local_e = 0xe9a;
  FUN_32b2_2126();
  local_a = (undefined1 *)0x32b2;
  local_c = 0xea5;
  FUN_21f2_0356();
  *(undefined2 *)0xc22 = 1;
  local_a = (undefined1 *)0x12;
  local_c = 0x21f2;
  local_e = 0xeb9;
  FUN_1def_26a9();
  local_a = (undefined1 *)0x1def;
  local_c = 0xec4;
  FUN_21f2_0356();
  goto LAB_10ad_02fa;
}


