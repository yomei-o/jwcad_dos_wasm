/* Ghidra decompilation of jw01.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  297 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0000(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined2 *puVar13;
  undefined2 in_stack_00000014;
  byte in_stack_00000016;
  byte in_stack_00000018;
  undefined2 auStack_1e [5];
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  uVar12 = in_stack_00000014._1_1_ == 0x5a;
  if (in_stack_00000014._1_1_ < 0x5a) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar12) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12) {
        return 0;
      }
    }
  }
  uVar11 = 0x22b2;
  uVar3 = *(uint *)0x148;
  iVar7 = *(int *)0x14a;
  puVar1 = (uint *)0x148;
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(int *)0x14a = *(int *)0x14a + (uint)(0xfffe < uVar8);
  if ((*(int *)0x13e <= iVar7) && ((*(int *)0x13e < iVar7 || (*(uint *)0x13c <= uVar3)))) {
    uStack_c = *(undefined2 *)0x14e;
    uStack_e = *(undefined2 *)0x14c;
    uStack_10 = *(undefined2 *)0x14a;
    uStack_12 = *(undefined2 *)0x148;
    iStack_14 = *(int *)0xc0ac - *(int *)0xbefa;
    pcVar6 = (code *)swi(0x3f);
    iVar7 = (*pcVar6)();
    if (iVar7 != 0) {
      piVar2 = (int *)0x148;
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      *(int *)0x14a = *(int *)0x14a - (uint)(iVar7 == 0);
      func_0x0000abfa();
      uVar11 = 0x11f2;
      uStack_c = 0xac29;
      FUN_13bf_0a03();
    }
  }
  *(undefined1 *)0xd14 = 2;
  in_stack_00000018 = in_stack_00000018 & 0xe0;
  uStack_e = 0xac40;
  uStack_c = uVar11;
  puVar13 = (undefined2 *)func_0x0000013f();
  puVar9 = (undefined2 *)puVar13;
  puVar10 = (undefined2 *)&stack0x0004;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar5 = puVar9;
    puVar9 = puVar9 + 1;
    puVar4 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar5 = *puVar4;
  }
  uVar8 = (uint)in_stack_00000016;
  uStack_c = 0;
  uStack_e = 0xac68;
  FUN_13bf_0a80();
  uStack_c = 0x11f2;
  uStack_e = 0xac77;
  puVar13 = (undefined2 *)func_0x0000013f();
  puVar9 = (undefined2 *)puVar13;
  puVar10 = (undefined2 *)&stack0x0004;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar5 = puVar10;
    puVar10 = puVar10 + 1;
    puVar4 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar5 = *puVar4;
  }
  puVar9 = auStack_1e;
  puVar10 = (undefined2 *)&stack0x0004;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar4 = puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar4 = *puVar13;
  }
  func_0x00018396(0);
  if (*(char *)(uVar8 + 0xb4a6) == '\0') {
    *(undefined1 *)(uVar8 + 0xb4a6) = 1;
    uStack_c = 0xacb9;
    func_0x0000b1d8();
    uStack_c = 0xacc2;
    func_0x0000daa6();
  }
  return 1;
}



/* 3ab8:014c  FUN_3ab8_014c  309 bytes, 2 callers */

void __cdecl16far FUN_3ab8_014c(char param_1,char param_2,char param_3)

{
  undefined2 unaff_DS;
  int local_36;
  undefined1 local_34 [36];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  int iStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  puStack_6 = (undefined1 *)0xacd7;
  FUN_21f2_0ebc();
  if (*(int *)0xc22 == 0) {
    if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) {
      local_36 = 0x48;
      if (*(char *)0xb1ea == '\x03') {
        local_36 = 0x30;
      }
      uStack_4 = 0x2142;
      puStack_6 = local_34;
      uStack_8 = 0x22b2;
      iStack_a = 0xaddd;
      FUN_21f2_3454();
    }
    else {
      local_36 = 0x42;
      if (*(char *)0xb1ea == '\x03') {
        local_36 = 0x30;
      }
      uStack_4 = 0x2124;
      puStack_6 = local_34;
      uStack_8 = 0x22b2;
      iStack_a = 0xad14;
      FUN_21f2_3454();
      if (param_1 == '\x01') {
        uStack_4 = 0x600;
        puStack_6 = local_34;
        uStack_8 = 0x22b2;
        iStack_a = 0xad29;
        FUN_21f2_2d26();
        local_36 = local_36 + -8;
      }
      if (param_1 == '\x02') {
        uStack_4 = 0x60a;
        puStack_6 = local_34;
        uStack_8 = 0x22b2;
        iStack_a = 0xad42;
        FUN_21f2_2d26();
        local_36 = local_36 + -6;
      }
      if (param_2 != '\0') {
        if (param_1 != '\0') {
          uStack_4 = 0x212c;
          puStack_6 = local_34;
          uStack_8 = 0x22b2;
          iStack_a = 0xad61;
          FUN_21f2_2d26();
          local_36 = local_36 + -1;
        }
        uStack_4 = 0x212e;
        puStack_6 = local_34;
        uStack_8 = 0x22b2;
        iStack_a = 0xad73;
        FUN_21f2_2d26();
        local_36 = local_36 + -4;
      }
      if (param_3 != '\0') {
        if ((param_1 != '\0') || (param_2 != '\0')) {
          uStack_4 = 0x2133;
          puStack_6 = local_34;
          uStack_8 = 0x22b2;
          iStack_a = 0xad98;
          FUN_21f2_2d26();
          local_36 = local_36 + -1;
        }
        uStack_4 = 0x2135;
        puStack_6 = local_34;
        uStack_8 = 0x22b2;
        iStack_a = 0xadaa;
        FUN_21f2_2d26();
        local_36 = local_36 + -4;
      }
      uStack_4 = 0x213a;
      puStack_6 = local_34;
      uStack_8 = 0x22b2;
      iStack_a = 0xadbd;
      FUN_21f2_2d26();
    }
    *(undefined2 *)0xc22 = 1;
    uStack_4 = 0xffff;
    puStack_6 = (undefined1 *)0x7;
    uStack_8 = 2;
    iStack_a = local_36;
    puStack_c = local_34;
    uStack_e = 0x22b2;
    uStack_10 = 0xadfd;
    FUN_1000_02b5();
  }
  return;
}



/* 3ab8:0281  FUN_3ab8_0281  558 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_0281(void)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 local_88 [4];
  undefined1 local_84 [6];
  undefined1 local_7e [100];
  int local_1a;
  uint local_18;
  int local_16;
  undefined4 local_14;
  int local_10;
  uint local_e;
  undefined1 *local_c;
  undefined1 *local_a;
  undefined1 *local_8;
  int *local_6;
  
  local_6 = (int *)0xae0c;
  FUN_21f2_0ebc();
  local_16 = 0;
  local_6 = (int *)0x22b2;
  local_8 = (undefined1 *)0xae17;
  func_0x0000c3ca();
  local_e = 1;
  local_c = (undefined1 *)0x0;
  local_a = (undefined1 *)0x885;
  while( true ) {
    if ((*(int *)0x14a < (int)local_c) ||
       ((*(int *)0x14a <= (int)local_c && (*(uint *)0x148 < local_e)))) break;
    local_6 = (int *)local_c;
    local_8 = (undefined1 *)local_e;
    uVar3 = 0;
    local_c = (undefined1 *)0xae46;
    uVar7 = func_0x0000013f();
    uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
    if ((*(byte *)((int)uVar7 + 0x14) & 2) != 0) {
      bVar1 = *(byte *)((int)uVar7 + 0x12) >> 4;
      local_18 = (uint)bVar1;
      local_6 = (int *)0x0;
      local_8 = (undefined1 *)0xae71;
      func_0x000297e6();
      uVar6 = bVar1 == 0;
      local_6 = (int *)0x22b2;
      local_8 = (undefined1 *)0xae7e;
      func_0x000297e6();
      local_6 = (int *)0x22b2;
      uVar3 = 0x22b2;
      local_8 = (undefined1 *)0xae83;
      FUN_28b3_1181();
      if (!(bool)uVar6) {
        local_16 = 1;
      }
    }
    bVar5 = 0xfffe < local_e;
    local_e = local_e + 1;
    local_c = (undefined1 *)((int)local_c + (uint)bVar5);
    local_a = (undefined1 *)uVar3;
  }
  local_c = (undefined1 *)0x0;
  for (local_e = 1;
      ((int)local_c <= *(int *)0x14e &&
      (((int)local_c < *(int *)0x14e || (local_e <= *(uint *)0x14c)))); local_e = local_e + 1) {
    local_6 = (int *)local_c;
    local_8 = (undefined1 *)local_e;
    uVar3 = 0;
    local_c = (undefined1 *)0xaebb;
    uVar7 = func_0x00000271();
    uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
    local_14 = uVar7;
    if ((*(byte *)((int)uVar7 + 0x1e) & 2) != 0) {
      bVar1 = *(byte *)((int)uVar7 + 0x1c) >> 4;
      local_18 = (uint)bVar1;
      local_6 = (int *)0x0;
      local_8 = (undefined1 *)0xaee6;
      func_0x000297e6();
      uVar6 = bVar1 == 0;
      local_6 = (int *)0x22b2;
      local_8 = (undefined1 *)0xaef3;
      func_0x000297e6();
      local_6 = (int *)0x22b2;
      uVar3 = 0x22b2;
      local_8 = (undefined1 *)0xaef8;
      FUN_28b3_1181();
      if (!(bool)uVar6) {
        local_16 = 1;
      }
    }
    local_c = (undefined1 *)((int)local_c + (uint)(0xfffe < local_e));
    local_a = (undefined1 *)uVar3;
  }
  local_8 = local_a;
  for (local_10 = 1; local_10 <= *(int *)0x150; local_10 = local_10 + 1) {
    local_6 = (int *)local_10;
    uVar4 = 0;
    local_a = (undefined1 *)0xaf10;
    uVar7 = func_0x00000398();
    if ((*(byte *)((int)uVar7 + 0x16) & 2) != 0) {
      local_6 = (int *)local_10;
      local_8 = (undefined1 *)0x0;
      local_a = (undefined1 *)0xaf24;
      uVar7 = func_0x00000398();
      local_18 = (uint)(*(byte *)((int)uVar7 + 0x15) >> 4);
      local_6 = (int *)0x0;
      local_8 = (undefined1 *)0xaf3f;
      func_0x000297e6();
      uVar6 = (local_18 & 0x3fff) == 0;
      local_6 = (int *)0x22b2;
      local_8 = (undefined1 *)0xaf4f;
      func_0x000297e6();
      local_6 = (int *)0x22b2;
      uVar4 = 0x22b2;
      local_8 = (undefined1 *)0xaf54;
      FUN_28b3_1181();
      if (!(bool)uVar6) {
        local_16 = 1;
      }
    }
    local_8 = (undefined1 *)uVar4;
  }
  for (local_10 = 1; local_10 <= *(int *)0x152; local_10 = local_10 + 1) {
    local_6 = (int *)local_10;
    uVar3 = 0;
    local_a = (undefined1 *)0xaf75;
    uVar7 = func_0x000003ef();
    uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
    local_a = (undefined1 *)uVar7;
    if ((*(byte *)((int)local_a + 10) & 2) != 0) {
      bVar1 = *(byte *)((int)local_a + 8) >> 4;
      local_18 = (uint)bVar1;
      local_6 = (int *)0x0;
      local_8 = (undefined1 *)0xaf9f;
      func_0x000297e6();
      uVar6 = bVar1 == 0;
      local_6 = (int *)0x22b2;
      local_8 = (undefined1 *)0xafac;
      func_0x000297e6();
      local_6 = (int *)0x22b2;
      uVar3 = 0x22b2;
      local_8 = (undefined1 *)0xafb1;
      FUN_28b3_1181();
      if (!(bool)uVar6) {
        local_16 = 1;
      }
    }
    local_8 = (undefined1 *)uVar3;
  }
  if (local_16 != 0) {
    local_6 = (int *)0x1dc;
    local_a = (undefined1 *)0xafd2;
    func_0x00012276();
    local_6 = (int *)0x522;
    local_8 = (undefined1 *)0x676;
    local_a = (undefined1 *)0x214b;
    local_c = local_7e;
    local_e = 0x11f2;
    local_10 = 0xafe8;
    FUN_21f2_3454();
    local_6 = &local_1a;
    local_8 = local_88;
    local_a = local_84;
    local_c = local_7e;
    local_e = 1;
    local_10 = 0x22b2;
    local_14._2_2_ = 0xb006;
    iVar2 = FUN_1def_0904();
    if ((*(int *)0x158 == 0) && (((iVar2 == -1 || (iVar2 == 2)) || (local_1a == 2)))) {
      return 0xffff;
    }
  }
  return 0;
}



/* 3ab8:04af  FUN_3ab8_04af  185 bytes, 4 callers */

void __cdecl16far FUN_3ab8_04af(void)

{
  undefined2 unaff_DS;
  int *in_stack_00000024;
  undefined2 *in_stack_00000026;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 **local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x3ab8;
  local_6 = (undefined2 **)0xb03a;
  FUN_21f2_0ebc();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb042;
  func_0x00029834();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb04a;
  func_0x00029bfc();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb052;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb05a;
  func_0x00029834();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb062;
  func_0x00029bfc();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb06a;
  func_0x00029983();
  local_4 = &local_a;
  local_6 = &local_6;
  local_8 = 1;
  local_a = 0x22b2;
  FUN_1def_0338();
  local_4 = (undefined2 *)0x1bb4;
  local_6 = (undefined2 **)0xb086;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb08b;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb093;
  func_0x00029c2c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb09b;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb0a3;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb0a8;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb0b0;
  func_0x00029c2c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 **)0xb0b8;
  func_0x00029983();
  local_4 = &local_a;
  local_6 = &local_6;
  local_8 = 0;
  local_a = 0x22b2;
  FUN_1def_0338();
  *in_stack_00000024 = (int)local_6;
  in_stack_00000024[1] = (int)local_4;
  *in_stack_00000026 = local_a;
  in_stack_00000026[1] = local_8;
  return;
}



/* 3ab8:0568  FUN_3ab8_0568  1029 bytes, 2 callers */

void __cdecl16far
FUN_3ab8_0568(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 **ppuVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 **ppuVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  undefined2 in_stack_0000002c;
  undefined2 in_stack_0000002e;
  undefined2 in_stack_00000030;
  undefined2 in_stack_00000032;
  int local_42;
  int local_40;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 uStack_34;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 uStack_1c;
  undefined2 *puStack_1a;
  undefined2 *local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 *local_a;
  
  uVar8 = 0x22b2;
  FUN_21f2_0ebc();
  puVar6 = &local_2e;
  puVar5 = param_1;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  ppuVar7 = &local_18;
  puVar6 = &local_2e;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    ppuVar3 = ppuVar7;
    ppuVar7 = ppuVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *ppuVar3 = (undefined2 *)*puVar1;
  }
  if (*(char *)0xb1ea == '\x03') {
    for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
      local_42 = local_40 + 1;
      if (3 < local_42) {
        local_42 = 0;
      }
      iVar4 = local_40 * 4;
      local_18 = (undefined2 *)*(undefined2 *)(iVar4 + 0xbc4);
      local_16 = *(undefined2 *)(iVar4 + 0xbc6);
      local_14 = *(undefined2 *)(iVar4 + 0xbd4);
      local_12 = *(undefined2 *)(iVar4 + 0xbd6);
      local_42 = local_42 * 4;
      local_10 = *(undefined2 *)(local_42 + 0xbc4);
      local_e = *(undefined2 *)(local_42 + 0xbc6);
      local_c = *(undefined2 *)(local_42 + 0xbd4);
      local_a = (undefined2 *)*(undefined2 *)(local_42 + 0xbd6);
      puVar5 = &uStack_1c;
      puVar6 = &local_2e;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      puVar6 = &local_32;
      ppuVar7 = &local_18;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        ppuVar3 = ppuVar7;
        ppuVar7 = ppuVar7 + 1;
        *puVar1 = *ppuVar3;
      }
      uVar9 = 0x7a6;
      local_36 = 0xb1bc;
      uStack_34 = uVar8;
      iVar4 = func_0x000084eb();
      if (0 < iVar4) {
        local_a = &local_3a;
        puVar5 = &local_20;
        puVar6 = &local_2e;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        puVar6 = &local_36;
        ppuVar7 = &local_18;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          ppuVar3 = ppuVar7;
          ppuVar7 = ppuVar7 + 1;
          *puVar1 = *ppuVar3;
        }
        local_38 = 0x7a6;
        uVar9 = 0x1bb4;
        local_3a = 0xb1ef;
        iVar4 = FUN_1def_1921();
        uVar10 = 0;
        if (iVar4 != 0) {
          local_a = (undefined2 *)0xb202;
          func_0x000297e6();
          local_a = (undefined2 *)0xb20a;
          func_0x000297e6();
          local_a = (undefined2 *)0xb212;
          FUN_28b3_100d();
          local_a = (undefined2 *)0xb21a;
          func_0x000297e6();
          local_a = (undefined2 *)0xb222;
          FUN_28b3_100d();
          local_a = (undefined2 *)0xb227;
          func_0x00029c9d();
          local_a = (undefined2 *)0xb22f;
          func_0x000297e6();
          local_a = (undefined2 *)0xb237;
          FUN_28b3_100d();
          local_a = (undefined2 *)0xb23f;
          func_0x000297e6();
          local_a = (undefined2 *)0xb247;
          FUN_28b3_100d();
          local_a = (undefined2 *)0xb24c;
          func_0x00029c9d();
          local_a = (undefined2 *)0xb251;
          FUN_28b3_1163();
          uVar9 = 0x22b2;
          local_a = (undefined2 *)0xb256;
          FUN_28b3_1181();
          if ((bool)uVar10) {
            local_2e = local_3a;
            local_2c = local_38;
          }
          else {
            local_26 = local_3a;
            local_24 = local_38;
          }
        }
      }
      uVar8 = uVar9;
    }
    puStack_1a = (undefined2 *)((uint)puStack_1a & 0xfcff);
  }
  if (((uint)puStack_1a & 0x200) == 0) {
    local_a = (undefined2 *)in_stack_00000032;
    local_c = in_stack_00000030;
    local_e = in_stack_0000002e;
    local_10 = in_stack_0000002c;
    local_12 = in_stack_0000002a;
    local_14 = in_stack_00000028;
    local_16 = in_stack_00000026;
    local_18 = &local_36;
    puStack_1a = &local_32;
    uStack_1c = uVar8;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    func_0x00029d78();
    local_24 = 0x22b2;
    local_26 = 0xb2ba;
    func_0x000299d1();
    local_24 = 0x22b2;
    local_26 = 0xb2c2;
    func_0x000297e6();
    local_24 = 0x22b2;
    local_26 = 0xb2c7;
    func_0x00029d78();
    local_2c = 0x22b2;
    local_2e = 0xb2d1;
    func_0x000299d1();
    local_2c = param_9;
    local_2e = param_8;
    uStack_30 = param_7;
    local_32 = param_6;
    uStack_34 = param_5;
    local_36 = param_4;
    local_38 = param_3;
    local_3a = param_2;
    FUN_3ab8_04af();
    local_a = (undefined2 *)0xb2f8;
    func_0x000297e6();
    local_a = (undefined2 *)0xb2fd;
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xb307;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xb30f;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xb314;
    func_0x00029d78();
    local_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xb31e;
    func_0x000299d1();
    local_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xb326;
    FUN_1def_05d1();
    local_a = (undefined2 *)0xb330;
    func_0x000297e6();
    local_a = (undefined2 *)0xb335;
    func_0x00029d78();
    local_a = (undefined2 *)0xb33d;
    func_0x00029c74();
    local_a = (undefined2 *)0xb345;
    func_0x00029c74();
    local_a = (undefined2 *)0xb34d;
    func_0x00029983();
    local_a = (undefined2 *)0xb355;
    func_0x000297e6();
    local_a = (undefined2 *)0xb35a;
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xb364;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xb36c;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xb371;
    func_0x00029d78();
    local_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xb37b;
    func_0x000299d1();
    local_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xb383;
    func_0x0001e558();
    local_a = (undefined2 *)0xb38d;
    func_0x000297e6();
    local_a = (undefined2 *)0xb392;
    func_0x00029d78();
    local_a = (undefined2 *)0xb39a;
    func_0x00029c74();
    local_a = (undefined2 *)0xb3a2;
    func_0x00029c74();
    uVar8 = 0x22b2;
    local_a = (undefined2 *)0xb3aa;
    func_0x00029983();
  }
  if (((uint)puStack_1a & 0x100) == 0) {
    local_a = (undefined2 *)in_stack_00000032;
    local_c = in_stack_00000030;
    local_e = in_stack_0000002e;
    local_10 = in_stack_0000002c;
    local_12 = in_stack_0000002a;
    local_14 = in_stack_00000028;
    local_16 = in_stack_00000026;
    local_18 = &local_36;
    puStack_1a = &local_32;
    uStack_1c = uVar8;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    func_0x00029d78();
    local_24 = 0x22b2;
    local_26 = 0xb3ea;
    func_0x000299d1();
    local_24 = 0x22b2;
    local_26 = 0xb3f2;
    func_0x000297e6();
    local_24 = 0x22b2;
    local_26 = 0xb3f7;
    func_0x00029d78();
    local_2c = 0x22b2;
    local_2e = 0xb401;
    func_0x000299d1();
    local_2c = param_9;
    local_2e = param_8;
    uStack_30 = param_7;
    local_32 = param_6;
    uStack_34 = param_5;
    local_36 = param_4;
    local_38 = param_3;
    local_3a = param_2;
    FUN_3ab8_04af();
    local_a = (undefined2 *)0xb428;
    func_0x000297e6();
    local_a = (undefined2 *)0xb42d;
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xb437;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xb43f;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xb444;
    func_0x00029d78();
    local_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xb44e;
    func_0x000299d1();
    local_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xb456;
    FUN_1def_05d1();
    local_a = (undefined2 *)0xb460;
    func_0x000297e6();
    local_a = (undefined2 *)0xb465;
    func_0x00029d78();
    local_a = (undefined2 *)0xb46d;
    func_0x00029c74();
    local_a = (undefined2 *)0xb475;
    func_0x00029c74();
    local_a = (undefined2 *)0xb47d;
    func_0x00029983();
    local_a = (undefined2 *)0xb485;
    func_0x000297e6();
    local_a = (undefined2 *)0xb48a;
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xb494;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xb49c;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xb4a1;
    func_0x00029d78();
    local_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xb4ab;
    func_0x000299d1();
    local_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xb4b3;
    func_0x0001e558();
    local_a = (undefined2 *)0xb4bd;
    func_0x000297e6();
    local_a = (undefined2 *)0xb4c2;
    func_0x00029d78();
    local_a = (undefined2 *)0xb4ca;
    func_0x00029c74();
    local_a = (undefined2 *)0xb4d2;
    func_0x00029c74();
    local_a = (undefined2 *)0xb4da;
    func_0x00029983();
  }
  puVar6 = &local_2e;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 3ab8:096d  FUN_3ab8_096d  1245 bytes, 1 callers */

/* WARNING: Type propagation algorithm not settling */

void __cdecl16far
FUN_3ab8_096d(uint param_1,uint param_2,int *param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,int *param_8,uint *param_9,uint *param_10,
             uint *param_11,undefined2 param_12,undefined2 param_13,undefined2 param_14,
             undefined2 param_15,undefined2 param_16,undefined2 param_17,undefined2 *param_18,
             undefined2 **param_19,undefined2 param_20,undefined2 param_21,undefined2 param_22,
             undefined2 param_23,undefined2 param_24,undefined2 param_25,undefined2 param_26,
             undefined2 param_27,undefined2 param_28,uint param_29,undefined2 ******param_30,
             undefined2 param_31,undefined1 *param_32,undefined2 *******param_33)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 ***pppuVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 ***pppuVar8;
  undefined2 *******pppppppuVar9;
  undefined2 unaff_SS;
  undefined2 **unaff_DS;
  undefined2 *puVar10;
  uint local_6c;
  uint local_6a;
  uint local_4e;
  uint local_4c;
  undefined2 *local_2a;
  undefined2 **local_28;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  uint local_14;
  undefined2 *******local_12;
  undefined2 local_10;
  undefined1 *puStack_e;
  undefined2 *******pppppppuStack_c;
  undefined2 **local_8;
  uint uVar11;
  uint uVar12;
  
  pppppppuVar9 = (undefined2 *******)0x22b2;
  FUN_21f2_0ebc();
  if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1 == 0)))) {
    if (param_11[1] == 0 && *param_11 == 0) {
      return;
    }
    if (((int)param_10[1] <= *(int *)0x13e) &&
       (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
      local_4e = *(uint *)0x148;
      local_4c = *(int *)0x14a + (uint)(0xfffe < local_4e);
      while( true ) {
        local_4e = local_4e + 1;
        if (((int)param_10[1] < (int)local_4c) ||
           (((int)param_10[1] <= (int)local_4c && (*param_10 < local_4e)))) break;
        puStack_e = (undefined1 *)0xb5c0;
        pppppppuStack_c = pppppppuVar9;
        puVar10 = (undefined2 *)func_0x0000013f();
        puVar7 = (undefined2 *)puVar10;
        pppuVar8 = &local_28;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          pppuVar3 = pppuVar8;
          pppuVar8 = pppuVar8 + 1;
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          *pppuVar3 = (undefined2 **)*puVar2;
        }
        iVar5 = *(int *)((local_18 & 0xff) * 2 + 0xa88);
        pppppppuStack_c = (undefined2 *******)0x0;
        puStack_e = (undefined1 *)0xb5ed;
        func_0x000297e6();
        pppppppuStack_c = (undefined2 *******)0x22b2;
        puStack_e = (undefined1 *)0xb5f2;
        func_0x00029d78();
        pppppppuStack_c = (undefined2 *******)0x22b2;
        puStack_e = (undefined1 *)0xb5f7;
        pppppppuStack_c = (undefined2 *******)FUN_28b3_0f51();
        puStack_e = (undefined1 *)0x22b2;
        local_10 = 0xb600;
        func_0x000297e6();
        puStack_e = (undefined1 *)0x22b2;
        local_10 = 0xb605;
        func_0x00029d78();
        puStack_e = (undefined1 *)0x22b2;
        local_10 = 0xb60a;
        puStack_e = (undefined1 *)FUN_28b3_0f51();
        local_10 = 0x22b2;
        local_12 = (undefined2 *******)0xb613;
        func_0x000297e6();
        local_10 = 0x22b2;
        local_12 = (undefined2 *******)0xb618;
        func_0x00029d78();
        local_10 = 0x22b2;
        local_12 = (undefined2 *******)0xb61d;
        local_10 = FUN_28b3_0f51();
        local_12 = (undefined2 *******)0x22b2;
        local_14 = 0xb626;
        func_0x000297e6();
        local_12 = (undefined2 *******)0x22b2;
        local_14 = 0xb62b;
        func_0x00029d78();
        local_12 = (undefined2 *******)0x22b2;
        local_14 = 0xb630;
        local_12 = (undefined2 *******)FUN_28b3_0f51();
        local_14 = 0x22b2;
        pppppppuVar9 = (undefined2 *******)0xdef;
        uStack_16 = 0xb636;
        func_0x0000f19e();
        if (iVar5 != 0) {
          if (((byte)local_4e & 0xf) == 0xf) {
            pppppppuStack_c = (undefined2 *******)param_6;
            puStack_e = (undefined1 *)param_5;
            local_10 = param_4;
            local_12 = (undefined2 *******)0xdef;
            pppppppuVar9 = (undefined2 *******)0x3bf;
            local_14 = 0xb662;
            iVar5 = func_0x00006608();
            *param_3 = iVar5;
            if (*(char *)0xc0e != '\0') {
              return;
            }
            if ((*param_3 != 0) || (*param_8 != 0)) {
              pppppppuStack_c = (undefined2 *******)0xb68f;
              func_0x0000daa6();
              pppppppuVar9 = (undefined2 *******)0x885;
              func_0x0000c3ca();
            }
          }
          else if ((*(byte *)0xc3be & 1) == 0) {
            pppppppuVar9 = (undefined2 *******)0x885;
            pppppppuStack_c = (undefined2 *******)0xb596;
            func_0x0000daa6();
          }
          else {
            pppppppuVar9 = (undefined2 *******)0x885;
            func_0x0000dc89();
          }
        }
        local_4c = local_4c + (0xfffe < local_4e);
      }
      param_11[1] = 0;
      *param_11 = 0;
      uVar4 = *(uint *)0x14a;
      *param_10 = *(uint *)0x148;
      param_10[1] = uVar4;
      return;
    }
    local_6c = 1;
    local_6a = 0;
    if (param_9[1] != 0 || *param_9 != 0) {
      local_6c = *param_9;
      local_6a = param_9[1];
    }
    uVar11 = *param_11;
    uVar12 = param_11[1];
    param_11[1] = 0;
    *param_11 = 0;
    uVar4 = *(uint *)0x148;
    uVar6 = *(uint *)0x14a;
    param_11 = param_10;
  }
  else {
    local_6c = param_1;
    local_6a = param_2;
    uVar4 = param_1;
    uVar6 = param_2;
    uVar11 = param_1;
    uVar12 = param_2;
  }
  *param_11 = uVar4;
  param_11[1] = uVar6;
  local_4c = local_6a;
  pppppppuStack_c = pppppppuVar9;
  for (local_4e = local_6c;
      ((int)local_4c <= (int)uVar12 && (((int)local_4c < (int)uVar12 || (local_4e <= uVar11))));
      local_4e = local_4e + 1) {
    pppppppuVar9 = (undefined2 *******)0x0;
    puStack_e = (undefined1 *)0xb749;
    puVar10 = (undefined2 *)func_0x0000013f();
    puVar7 = (undefined2 *)puVar10;
    pppuVar8 = &local_28;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      pppuVar3 = pppuVar8;
      pppuVar8 = pppuVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *pppuVar3 = (undefined2 **)*puVar2;
    }
    local_8 = unaff_DS;
    if (((local_14 & 2) != 0) && (local_18._1_1_ < 0x5a)) {
      pppppppuStack_c = param_33;
      puStack_e = param_32;
      local_10 = param_31;
      local_12 = (undefined2 *******)param_30;
      local_14 = param_29;
      uStack_16 = param_28;
      local_18 = param_27;
      uStack_1a = param_26;
      local_1c = param_25;
      uStack_1e = param_24;
      local_20 = param_23;
      uStack_22 = param_22;
      local_24 = param_21;
      uStack_26 = param_20;
      local_28 = param_19;
      local_2a = param_18;
      FUN_3ab8_0568(&local_28,param_12,param_13,param_14,param_15,param_16,param_17);
      func_0x000297e6();
      func_0x000299d1();
      func_0x000297e6();
      func_0x000299d1();
      func_0x000297e6();
      func_0x000299d1();
      local_8 = (undefined2 **)0x22b2;
      func_0x000297e6();
      local_10 = 0x22b2;
      local_12 = (undefined2 *******)0xb802;
      func_0x000299d1();
      local_10 = 0x22b2;
      local_12 = (undefined2 *******)0xb80a;
      func_0x000297e6();
      local_18 = 0x22b2;
      uStack_1a = 0xb814;
      func_0x000299d1();
      local_18 = 0x22b2;
      uStack_1a = 0xb81c;
      func_0x000297e6();
      local_20 = 0x22b2;
      uStack_22 = 0xb826;
      func_0x000299d1();
      local_20 = 0x22b2;
      uStack_22 = 0xb82e;
      func_0x000297e6();
      local_20 = 0x22b2;
      uStack_22 = 0xb833;
      func_0x00029d78();
      local_20 = 0x22b2;
      uStack_22 = 0xb83b;
      func_0x000299b9();
      local_28 = (undefined2 **)0x22b2;
      local_2a = (undefined2 *)0xb845;
      func_0x000299d1();
      local_28 = &local_2a;
      local_2a = &local_10;
      pppppppuVar9 = (undefined2 *******)0x1bb4;
      iVar5 = FUN_1885_52fe(&stack0xfff6,&local_12);
      if (iVar5 == 0) {
        local_8 = &local_2a;
        pppppppuStack_c = &local_12;
        puStack_e = &stack0xfff6;
        local_10 = 0x1bb4;
        pppppppuVar9 = (undefined2 *******)0x1b6e;
        local_12 = (undefined2 *******)0xb879;
        iVar5 = func_0x0001b72d();
        if (iVar5 != 0) {
          FUN_28b3_0d8b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x00029983();
          local_8 = (undefined2 **)*(uint *)((local_18 & 0xff) * 2 + 0xa88);
          pppppppuStack_c = (undefined2 *******)0x22b2;
          puStack_e = (undefined1 *)0xb8ce;
          FUN_28b3_0d8b();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          puStack_e = (undefined1 *)0xb8d3;
          func_0x00029d78();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          puStack_e = (undefined1 *)0xb8d8;
          pppppppuStack_c = (undefined2 *******)FUN_28b3_0f51();
          puStack_e = (undefined1 *)0x22b2;
          local_10 = 0xb8e1;
          FUN_28b3_0d8b();
          puStack_e = (undefined1 *)0x22b2;
          local_10 = 0xb8e6;
          func_0x00029d78();
          puStack_e = (undefined1 *)0x22b2;
          local_10 = 0xb8eb;
          puStack_e = (undefined1 *)FUN_28b3_0f51();
          local_10 = 0x22b2;
          local_12 = (undefined2 *******)0xb8f4;
          FUN_28b3_0d8b();
          local_10 = 0x22b2;
          local_12 = (undefined2 *******)0xb8f9;
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = (undefined2 *******)0xb8fe;
          local_10 = FUN_28b3_0f51();
          local_12 = (undefined2 *******)0x22b2;
          local_14 = 0xb907;
          FUN_28b3_0d8b();
          local_12 = (undefined2 *******)0x22b2;
          local_14 = 0xb90f;
          func_0x0002996b();
          local_12 = (undefined2 *******)0x22b2;
          local_14 = 0xb914;
          func_0x00029d78();
          local_12 = (undefined2 *******)0x22b2;
          local_14 = 0xb919;
          local_12 = (undefined2 *******)FUN_28b3_0f51();
          local_14 = 0x22b2;
          pppppppuVar9 = (undefined2 *******)0xdef;
          uStack_16 = 0xb91f;
          func_0x0000f19e();
          if (param_2 != 0 || param_1 != 0) {
            puVar1 = param_10;
            uVar4 = *puVar1;
            *puVar1 = *puVar1 + 1;
            param_10[1] = param_10[1] + (uint)(0xfffe < uVar4);
            if (((int)param_10[1] <= *(int *)0x13e) &&
               (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
              local_8 = (undefined2 **)param_10[1];
              pppppppuStack_c = (undefined2 *******)0xdef;
              pppppppuVar9 = (undefined2 *******)0x0;
              puStack_e = (undefined1 *)0xb950;
              puVar10 = (undefined2 *)func_0x0000013f();
              puVar7 = (undefined2 *)puVar10;
              pppuVar8 = &local_28;
              for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar2 = puVar7;
                puVar7 = puVar7 + 1;
                pppuVar3 = pppuVar8;
                pppuVar8 = pppuVar8 + 1;
                *puVar2 = *pppuVar3;
              }
            }
          }
        }
      }
    }
    if (local_8 != (undefined2 **)0x0) {
      if (((byte)local_4e & 0x7f) == 0x7f) {
        pppppppuStack_c = (undefined2 *******)param_6;
        puStack_e = (undefined1 *)param_5;
        local_10 = param_4;
        local_14 = 0xb98c;
        local_12 = pppppppuVar9;
        iVar5 = func_0x00006608();
        *param_3 = iVar5;
        if (*(char *)0xc0e != '\0') {
          return;
        }
        if ((*param_3 != 0) || (pppppppuVar9 = (undefined2 *******)0x3bf, *param_8 != 0)) {
          pppppppuStack_c = (undefined2 *******)0xb9b6;
          func_0x0000daa6();
          func_0x0000c3ca();
          pppppppuVar9 = (undefined2 *******)0x885;
        }
      }
      else if ((*(byte *)0xc3be & 1) == 0) {
        pppppppuStack_c = (undefined2 *******)0xb721;
        func_0x0000daa6();
        pppppppuVar9 = (undefined2 *******)0x885;
      }
      else {
        func_0x0000dc89();
        pppppppuVar9 = (undefined2 *******)0x885;
      }
    }
    local_4c = local_4c + (0xfffe < local_4e);
    pppppppuStack_c = pppppppuVar9;
  }
  return;
}



/* 3ab8:0e4a  FUN_3ab8_0e4a  2920 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003c0a4) */
/* WARNING: Removing unreachable block (ram,0x0003c0c9) */
/* WARNING: Removing unreachable block (ram,0x0003bf53) */
/* WARNING: Removing unreachable block (ram,0x0003c0b5) */
/* WARNING: Removing unreachable block (ram,0x0003c51e) */
/* WARNING: Removing unreachable block (ram,0x0003c0d8) */

int __cdecl16far FUN_3ab8_0e4a(int param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  ulong uVar13;
  int local_f6;
  uint local_d4 [30];
  int local_98;
  int local_96;
  uint local_90;
  uint local_8e;
  undefined4 local_78;
  int local_74;
  undefined2 local_72 [7];
  undefined4 local_64;
  undefined4 local_60;
  undefined2 local_52;
  undefined2 local_48 [7];
  uint local_3a;
  uint local_38;
  uint local_36;
  uint local_34;
  undefined2 uStack_2a;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined2 uStack_22;
  int local_20;
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  uint uStack_a;
  
  FUN_21f2_0ebc();
  puVar9 = local_48;
  puVar8 = param_2;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar2;
  }
  uStack_a = 0xba04;
  func_0x00029da5();
  uStack_a = 0xba09;
  func_0x00029d78();
  uStack_a = 0xba12;
  func_0x00029c2c();
  uStack_a = 0xba1b;
  func_0x00029983();
  uStack_a = 0xba24;
  func_0x000297e6();
  uStack_a = 0xba2c;
  func_0x0002996b();
  uStack_a = 0xba4f;
  func_0x00029da5();
  uStack_a = 0xba54;
  func_0x00029c9d();
  uStack_a = 0xba5d;
  func_0x00029983();
  local_96 = 0;
  if ((local_3a == local_36) && (local_38 == local_34)) {
    local_96 = 1;
  }
  if (((local_38 == 0 && local_3a == 0) && (local_36 == 0)) && (local_34 == 0x168)) {
    local_96 = 1;
  }
  uStack_a = 0xba9c;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xbaa6;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xbaab;
  func_0x0002a11e();
  uStack_a = 0xbab5;
  func_0x00029834();
  uStack_a = 0xbabd;
  func_0x00029983();
  uStack_a = 0xbac6;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xbad0;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xbad5;
  func_0x0002a10c();
  uStack_a = 0xbadf;
  func_0x00029834();
  uStack_a = 0xbae8;
  func_0x00029983();
  local_90 = 0;
  do {
    uStack_a = 0xbb17;
    func_0x000297e6();
    uStack_a = 0xbb1f;
    FUN_28b3_100d();
    uStack_a = 0xbb28;
    func_0x0002996b();
    uStack_a = 0xbb30;
    func_0x00029983();
    uStack_a = 0xbb3a;
    func_0x000297e6();
    uStack_a = 0xbb42;
    FUN_28b3_100d();
    uStack_a = 0xbb4b;
    func_0x0002996b();
    uStack_a = 0xbb53;
    func_0x00029983();
    uStack_a = 0xbb5c;
    func_0x000297e6();
    uStack_a = 0xbb65;
    func_0x00029b6d();
    uStack_a = 0xbb6e;
    func_0x000297e6();
    uStack_a = 0xbb76;
    func_0x00029b6d();
    uStack_a = 0xbb7b;
    FUN_28b3_117c();
    uStack_a = 0xbb8c;
    func_0x00029983();
    uStack_a = 0xbb95;
    func_0x000297e6();
    uStack_a = 0xbb9d;
    func_0x00029b6d();
    uStack_a = 0xbba6;
    func_0x000297e6();
    uStack_a = 0xbbaf;
    func_0x00029b6d();
    uStack_a = 0xbbb4;
    FUN_28b3_1163();
    uStack_a = 0xbbbd;
    func_0x00029b85();
    uVar10 = 0x22b2;
    uStack_a = 0xbbc5;
    func_0x00029983();
    uVar13 = CONCAT22(local_78._2_2_,(uint)local_78);
    local_90 = local_90 + 1;
  } while ((int)local_90 < 5);
  local_52 = 0xffff;
  local_8e = 0;
  for (local_90 = 0; uVar7 = local_34, uVar6 = local_36, local_78 = uVar13, (int)local_90 < 4;
      local_90 = local_90 + 1) {
    uVar11 = (int)(local_90 << 1) < 0;
    uStack_a = 0xbd23;
    func_0x000297e6();
    uStack_a = 0xbd2b;
    FUN_28b3_100d();
    uStack_a = 0xbd33;
    func_0x0002996b();
    uStack_a = 0xbd3b;
    FUN_28b3_0ee9();
    uStack_a = 0xbd44;
    func_0x00029834();
    uStack_a = 0xbd4c;
    func_0x000297e6();
    uStack_a = 0xbd54;
    func_0x00029b6d();
    uStack_a = 0xbd5d;
    func_0x000297e6();
    uStack_a = 0xbd66;
    FUN_28b3_100d();
    uStack_a = 0xbd6e;
    func_0x0002996b();
    uStack_a = 0xbd76;
    func_0x00029b6d();
    uStack_a = 0xbd7b;
    FUN_28b3_117c();
    uStack_a = 0xbd83;
    func_0x0002996b();
    uStack_a = 0xbd88;
    func_0x00029d78();
    uStack_a = 0xbd8d;
    FUN_28b3_1181();
    if ((bool)uVar11) goto LAB_3ab8_1212;
    uStack_a = 0xbbed;
    func_0x000297e6();
    uStack_a = 0xbbf2;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbbfc;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xbc01;
    FUN_28b3_1582();
    uStack_a = 0xbc0b;
    func_0x00029834();
    uStack_a = 0xbc13;
    func_0x0002996b();
    uStack_a = 0xbc1b;
    func_0x00029b9d();
    uStack_a = 0xbc23;
    func_0x00029983();
    uStack_a = 0xbc2b;
    func_0x000297e6();
    uStack_a = 0xbc33;
    func_0x00029b85();
    uStack_a = 0xbc3c;
    func_0x00029983();
    uVar11 = (int)(local_90 << 1) < 0;
    uVar12 = (local_90 & 0x3fff) == 0;
    uStack_a = 0xbc4d;
    func_0x000297e6();
    uStack_a = 0xbc52;
    func_0x00029af6();
    uStack_a = 0xbc5a;
    func_0x0002996b();
    uStack_a = 0xbc62;
    FUN_28b3_0ee9();
    uStack_a = 0xbc6a;
    func_0x000297e6();
    uStack_a = 0xbc6f;
    func_0x00029af6();
    uStack_a = 0xbc77;
    func_0x0002996b();
    uStack_a = 0xbc7f;
    FUN_28b3_0ee9();
    uStack_a = 0xbc87;
    func_0x000297e6();
    uStack_a = 0xbc90;
    func_0x00029b6d();
    uStack_a = 0xbc98;
    func_0x000297e6();
    uStack_a = 0xbca0;
    func_0x00029b6d();
    uStack_a = 0xbca5;
    FUN_28b3_117c();
    uStack_a = 0xbcae;
    func_0x00029983();
    uStack_a = 0xbcb6;
    func_0x000297e6();
    uStack_a = 0xbcbe;
    func_0x00029b6d();
    uStack_a = 0xbcc6;
    func_0x000297e6();
    uStack_a = 0xbccf;
    func_0x00029b6d();
    uStack_a = 0xbcd4;
    FUN_28b3_1163();
    uStack_a = 0xbcdd;
    func_0x0002996b();
    uStack_a = 0xbce5;
    FUN_28b3_0ee9();
    uStack_a = 0xbced;
    func_0x000297e6();
    uStack_a = 0xbcf6;
    func_0x000297e6();
    uStack_a = 0xbcfb;
    func_0x00029ae7();
    uVar10 = 0x22b2;
    uStack_a = 0xbd00;
    FUN_28b3_1181();
    uVar13 = local_78;
    if ((bool)uVar11) {
      uStack_a = 0xbda0;
      func_0x000297e6();
      uStack_a = 0xbda8;
      func_0x000297e6();
      uStack_a = 0xbdb0;
      func_0x00029b6d();
      uStack_a = 0xbdb9;
      func_0x000297e6();
      uStack_a = 0xbdc2;
      func_0x00029b6d();
      uStack_a = 0xbdc7;
      FUN_28b3_1163();
      uStack_a = 0xbdd0;
      func_0x0002996b();
      uVar10 = 0x22b2;
      uStack_a = 0xbdd5;
      FUN_28b3_1181();
      uVar13 = local_78;
      if (!(bool)uVar11 && !(bool)uVar12) {
        uStack_a = 0xbde3;
        func_0x000297e6();
        uStack_a = 0xbde8;
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uStack_12 = 0xbdf2;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0xbdf7;
        FUN_28b3_1582();
        uVar11 = (undefined1 *)0xfff7 < &uStack_e;
        uVar12 = &stack0x0000 == (undefined1 *)0x6;
        uStack_a = 0xbe01;
        func_0x00029834();
        uStack_a = 0xbe0a;
        func_0x00029983();
        uStack_a = 0xbe13;
        func_0x000297e6();
        uStack_a = 0xbe1b;
        func_0x0002996b();
        uStack_a = 0xbe24;
        func_0x000297e6();
        uStack_a = 0xbe2d;
        FUN_28b3_100d();
        uStack_a = 0xbe36;
        func_0x0002996b();
        uStack_a = 0xbe3b;
        FUN_28b3_1181();
        if (!(bool)uVar11 && !(bool)uVar12) {
          uStack_a = 0xbe48;
          func_0x000297e6();
          uStack_a = 0xbe51;
          func_0x000297e6();
          uStack_a = 0xbe56;
          FUN_28b3_1181();
          if ((bool)uVar11) {
            uStack_a = 0xbe6b;
            func_0x000297e6();
            uStack_a = 0xbe74;
            func_0x000297e6();
            uStack_a = 0xbe7d;
            func_0x00029b6d();
            uStack_a = 0xbe82;
            FUN_28b3_117c();
            uStack_a = 0xbe8b;
            func_0x0002996b();
            uStack_a = 0xbe93;
            FUN_28b3_0ee9();
            uStack_a = 0xbe9c;
            func_0x000297e6();
            uStack_a = 0xbea1;
            func_0x00029d78();
            uStack_10 = 0x22b2;
            uStack_12 = 0xbeab;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            uStack_12 = 0xbeb4;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            uStack_12 = 0xbebc;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            uStack_12 = 0xbec5;
            func_0x00029b6d();
            uStack_10 = 0x22b2;
            uStack_12 = 0xbeca;
            FUN_28b3_117c();
            uStack_10 = 0x22b2;
            uStack_12 = 0xbed2;
            func_0x0002996b();
            uStack_10 = 0x22b2;
            uStack_12 = 0xbed7;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xbee1;
            func_0x000299d1();
            uStack_18 = *(undefined2 *)0x945a;
            uStack_1a = *(undefined2 *)0x9458;
            uStack_1c = *(undefined2 *)0x9456;
            local_1e = *(undefined2 *)0x9454;
            local_20 = *(int *)0x945a;
            uStack_22 = *(undefined2 *)0x9458;
            local_24 = *(undefined2 *)0x9456;
            uStack_26 = *(undefined2 *)0x9454;
            local_28 = 0x22b2;
            uStack_2a = 0xbf06;
            uVar13 = FUN_1000_0718();
            uVar7 = (uint)(uVar13 >> 0x10);
            uVar6 = (uint)uVar13;
            local_78 = uVar13;
            if (local_96 == 0) {
              if ((local_38 <= local_34) && ((local_38 < local_34 || (local_3a < local_36)))) {
                uVar11 = local_38 < uVar7;
                uVar12 = local_38 == uVar7;
                if (local_38 <= uVar7) {
                  if (!(bool)uVar11) {
                    uVar11 = local_3a < uVar6;
                    uVar12 = local_3a == uVar6;
                    if (!(bool)uVar11) goto LAB_3ab8_13fe;
                  }
                  uVar11 = local_34 < uVar7;
                  uVar12 = local_34 == uVar7;
                  if (!(bool)uVar11 && !(bool)uVar12) goto LAB_3ab8_13e4;
                  if (!(bool)uVar11) {
                    uVar11 = local_36 < uVar6;
                    uVar12 = local_36 == uVar6;
                    if (!(bool)uVar11 && !(bool)uVar12) goto LAB_3ab8_13e4;
                  }
                }
                goto LAB_3ab8_13fe;
              }
              if (uVar13 <= CONCAT22(local_38,local_3a)) {
                uVar11 = local_34 < uVar7;
                uVar12 = local_34 == uVar7;
                if (local_34 <= uVar7) {
                  if (!(bool)uVar11) {
                    uVar11 = local_36 < uVar6;
                    uVar12 = local_36 == uVar6;
                    if (uVar6 < local_36) goto LAB_3ab8_13e4;
                  }
                  goto LAB_3ab8_13fe;
                }
              }
            }
LAB_3ab8_13e4:
            uVar1 = local_8e + 1;
            uVar11 = (int)(uVar1 * 2) < 0;
            uVar12 = (uVar1 & 0x3fff) == 0;
            local_8e = uVar1;
            local_d4[uVar1 * 2] = uVar6;
            local_d4[uVar1 * 2 + 1] = uVar7;
          }
          else {
            uVar11 = 0;
          }
        }
LAB_3ab8_13fe:
        uStack_a = 0xbf87;
        func_0x000297e6();
        uStack_a = 0xbf90;
        func_0x000297e6();
        uStack_a = 0xbf99;
        func_0x00029bb5();
        uStack_a = 0xbfa2;
        func_0x0002996b();
        uVar10 = 0x22b2;
        uStack_a = 0xbfa7;
        FUN_28b3_1181();
        uVar13 = local_78;
        if (!(bool)uVar11 && !(bool)uVar12) {
          uStack_a = 0xbfb4;
          func_0x000297e6();
          uStack_a = 0xbfbd;
          func_0x000297e6();
          uVar10 = 0x22b2;
          uStack_a = 0xbfc2;
          FUN_28b3_1181();
          uVar13 = local_78;
          if ((bool)uVar11) {
            uStack_a = 0xbfd7;
            func_0x000297e6();
            uStack_a = 0xbfe0;
            func_0x000297e6();
            uStack_a = 0xbfe9;
            func_0x00029b6d();
            uStack_a = 0xbfee;
            FUN_28b3_117c();
            uStack_a = 0xbff7;
            func_0x0002996b();
            uStack_a = 0xbfff;
            FUN_28b3_0ee9();
            uStack_a = 0xc008;
            func_0x000297e6();
            uStack_a = 0xc00d;
            func_0x00029d78();
            uStack_10 = 0x22b2;
            uStack_12 = 0xc017;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            uStack_12 = 0xc020;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            uStack_12 = 0xc028;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            uStack_12 = 0xc031;
            func_0x00029b6d();
            uStack_10 = 0x22b2;
            uStack_12 = 0xc036;
            FUN_28b3_117c();
            uStack_10 = 0x22b2;
            uStack_12 = 0xc03e;
            func_0x0002996b();
            uStack_10 = 0x22b2;
            uStack_12 = 0xc043;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xc04d;
            func_0x000299d1();
            uStack_18 = *(undefined2 *)0x945a;
            uStack_1a = *(undefined2 *)0x9458;
            uStack_1c = *(undefined2 *)0x9456;
            local_1e = *(undefined2 *)0x9454;
            local_20 = *(int *)0x945a;
            uStack_22 = *(undefined2 *)0x9458;
            local_24 = *(undefined2 *)0x9456;
            uStack_26 = *(undefined2 *)0x9454;
            local_28 = 0x22b2;
            uVar10 = 0xdef;
            uStack_2a = 0xc072;
            uVar13 = FUN_1000_0718();
            local_78 = uVar13;
            if (local_96 == 0) {
              if ((local_34 < local_38) || ((local_34 <= local_38 && (local_36 <= local_3a)))) {
                if (CONCAT22(local_38,local_3a) < uVar13) goto LAB_3ab8_1560;
              }
              else if (uVar13 <= CONCAT22(local_38,local_3a)) goto LAB_3ab8_1185;
              if (CONCAT22(local_34,local_36) <= uVar13) goto LAB_3ab8_1185;
            }
LAB_3ab8_1560:
            uVar6 = local_8e + 1;
            local_8e = uVar6;
            local_d4[uVar6 * 2] = (uint)uVar13;
            local_d4[uVar6 * 2 + 1] = (uint)(uVar13 >> 0x10);
            uVar13 = local_78;
          }
        }
      }
    }
LAB_3ab8_1185:
  }
  if ((int)local_8e < 1) {
LAB_3ab8_1212:
    local_74 = 0;
  }
  else {
    local_f6 = 1;
    if (local_96 == 0) {
      local_f6 = 0;
      local_d4[0] = local_3a;
      local_d4[1] = local_38;
      uVar1 = local_8e + 1;
      local_8e = uVar1;
      local_d4[uVar1 * 2] = local_36;
      local_d4[uVar1 * 2 + 1] = uVar7;
      uVar13 = local_78;
      if ((uVar7 <= local_38) && ((local_38 != uVar7 || (uVar6 < local_3a)))) {
        local_d4[uVar1 * 2] = uVar6;
        local_d4[uVar1 * 2 + 1] = uVar7 + 0x168;
        uVar13 = local_78;
        for (local_90 = 1; uVar6 = local_90, (int)local_90 < (int)local_8e; local_90 = local_90 + 1)
        {
          if ((local_d4[local_90 * 2 + 1] <= local_34) &&
             ((local_d4[local_90 * 2 + 1] < local_34 || (local_d4[local_90 * 2] < local_36)))) {
            local_78 = uVar13;
            local_d4[local_90 * 2] = local_d4[local_90 * 2];
            local_d4[uVar6 * 2 + 1] = local_d4[uVar6 * 2 + 1] + 0x168;
            uVar13 = local_78;
          }
        }
      }
    }
    for (local_90 = local_f6; (int)local_90 < (int)local_8e; local_90 = local_90 + 1) {
      for (local_98 = local_90 + 1; uVar6 = local_90, iVar4 = local_98, local_98 <= (int)local_8e;
          local_98 = local_98 + 1) {
        local_78._2_2_ = local_d4[local_90 * 2 + 1];
        if (((int)local_d4[local_98 * 2 + 1] <= (int)local_78._2_2_) &&
           (((int)local_d4[local_98 * 2 + 1] < (int)local_78._2_2_ ||
            (local_d4[local_98 * 2] < local_d4[local_90 * 2])))) {
          local_78._0_2_ = local_d4[local_90 * 2];
          uVar7 = local_d4[local_98 * 2 + 1];
          local_d4[local_90 * 2] = local_d4[local_98 * 2];
          local_d4[uVar6 * 2 + 1] = uVar7;
          uVar6 = local_78._2_2_;
          local_d4[iVar4 * 2] = (uint)local_78;
          local_d4[iVar4 * 2 + 1] = uVar6;
          uVar13 = CONCAT22(local_78._2_2_,(uint)local_78);
        }
      }
    }
    local_78 = uVar13;
    if (local_96 != 0) {
      uVar6 = local_8e + 1;
      local_8e = uVar6;
      local_d4[uVar6 * 2] = local_d4[2];
      local_d4[uVar6 * 2 + 1] = local_d4[3];
    }
    uVar13 = CONCAT22(local_60._2_2_,(undefined2)local_60);
    local_74 = 0;
    for (local_98 = local_f6; iVar4 = local_98, local_98 < (int)local_8e; local_98 = local_98 + 1) {
      puVar9 = local_72;
      puVar8 = local_48;
      local_60 = uVar13;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar2;
      }
      uStack_a = local_d4[local_98 * 2];
      uStack_e = 0xc4ea;
      uStack_c = uVar10;
      uVar13 = func_0x00021eee();
      local_64 = uVar13;
      uStack_a = local_d4[iVar4 * 2 + 2];
      uStack_c = 0x1bb4;
      uVar10 = 0x1bb4;
      uStack_e = 0xc4ff;
      uVar13 = func_0x00021eee();
      iVar4 = (int)(uVar13 >> 0x10);
      local_60 = uVar13;
      if (uVar13 != local_64) {
        if (uVar13 <= local_64) {
          iVar4 = iVar4 + 0x168;
        }
        uVar6 = (iVar4 - local_64._2_2_) - (uint)((uint)uVar13 < (uint)local_64);
        uVar7 = uVar6 >> 1;
        uVar6 = (uint)(CONCAT12((uVar6 & 1) != 0,(uint)uVar13 - (uint)local_64) >> 1);
        local_78._0_2_ = uVar6 + (uint)local_64;
        uVar6 = (uint)CARRY2(uVar6,(uint)local_64);
        local_78._2_2_ = uVar7 + local_64._2_2_;
        uVar11 = CARRY2(uVar7,local_64._2_2_) || CARRY2(local_78._2_2_,uVar6);
        local_78._2_2_ = local_78._2_2_ + uVar6;
        uVar12 = local_78._2_2_ == 0;
        uStack_a = 0xc26e;
        func_0x000298b4();
        uStack_a = 0xc276;
        func_0x00029b6d();
        uStack_a = 0xc27f;
        func_0x0002996b();
        uStack_a = 0xc288;
        func_0x00029983();
        uStack_a = 0xc291;
        func_0x00029834();
        uStack_a = 0xc29a;
        func_0x000297e6();
        uStack_a = 0xc29f;
        func_0x00029d78();
        uStack_a = 0xc2a4;
        FUN_28b3_1181();
        if (!(bool)uVar11 && !(bool)uVar12) {
          uStack_a = 0xc2af;
          func_0x000297e6();
          uStack_a = 0xc2b4;
          func_0x00029d78();
          uStack_a = 0xc2bd;
          func_0x00029bfc();
          uStack_a = 0xc2c6;
          func_0x00029983();
        }
        uStack_a = 0xc2cf;
        func_0x000297e6();
        uStack_10 = 0x22b2;
        uStack_12 = 0xc2d9;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0xc2de;
        func_0x0002a11e();
        uStack_a = 0xc2e8;
        func_0x00029834();
        uStack_a = 0xc2f0;
        func_0x00029b6d();
        uStack_a = 0xc2f8;
        func_0x00029983();
        uStack_a = 0xc301;
        func_0x000297e6();
        uStack_10 = 0x22b2;
        uStack_12 = 0xc30b;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0xc310;
        func_0x0002a10c();
        uStack_a = 0xc31a;
        func_0x00029834();
        uStack_a = 0xc322;
        func_0x00029b6d();
        uStack_a = 0xc32b;
        func_0x00029983();
        local_20 = 1;
        for (local_90 = 0; uVar13 = local_60, (int)local_90 < 4; local_90 = local_90 + 1) {
          uVar11 = (int)(local_90 << 1) < 0;
          uStack_a = 0xc356;
          func_0x000297e6();
          uStack_a = 0xc35e;
          FUN_28b3_100d();
          uStack_a = 0xc366;
          func_0x0002996b();
          uStack_a = 0xc36e;
          FUN_28b3_0ee9();
          uStack_a = 0xc377;
          func_0x00029834();
          uStack_a = 0xc37f;
          func_0x000297e6();
          uStack_a = 0xc387;
          func_0x00029b6d();
          uStack_a = 0xc390;
          func_0x000297e6();
          uStack_a = 0xc399;
          FUN_28b3_100d();
          uStack_a = 0xc3a1;
          func_0x0002996b();
          uStack_a = 0xc3a9;
          func_0x00029b6d();
          uStack_a = 0xc3ae;
          FUN_28b3_117c();
          uStack_a = 0xc3b6;
          func_0x0002996b();
          uStack_a = 0xc3bb;
          func_0x00029d78();
          uStack_a = 0xc3c0;
          FUN_28b3_1181();
          if (!(bool)uVar11) {
            uStack_a = 0xc3cd;
            func_0x000297e6();
            uStack_a = 0xc3d2;
            func_0x00029d78();
            uStack_10 = 0x22b2;
            uStack_12 = 0xc3dc;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            uStack_12 = 0xc3e1;
            FUN_28b3_1582();
            uStack_a = 0xc3eb;
            func_0x00029834();
            uStack_a = 0xc3f3;
            func_0x0002996b();
            uStack_a = 0xc3fb;
            func_0x00029b9d();
            uStack_a = 0xc404;
            func_0x0002996b();
            uStack_a = 0xc40c;
            func_0x00029983();
            uStack_a = 0xc414;
            func_0x000297e6();
            uStack_a = 0xc41c;
            func_0x00029b85();
            uStack_a = 0xc425;
            func_0x0002996b();
            uStack_a = 0xc42e;
            func_0x00029983();
            uStack_a = 0xc437;
            func_0x000297e6();
            uVar11 = (int)(local_90 << 1) < 0;
            uStack_a = 0xc447;
            func_0x000297e6();
            uStack_a = 0xc450;
            func_0x00029b55();
            uStack_a = 0xc459;
            func_0x00029b6d();
            uStack_a = 0xc462;
            func_0x000297e6();
            uStack_a = 0xc46a;
            func_0x00029b55();
            uStack_a = 0xc473;
            func_0x00029b6d();
            uStack_a = 0xc478;
            FUN_28b3_1163();
            uStack_a = 0xc480;
            func_0x0002996b();
            uStack_a = 0xc485;
            FUN_28b3_1181();
            if ((bool)uVar11) {
              local_20 = 0;
              uVar13 = local_60;
              break;
            }
          }
        }
        uVar10 = 0x22b2;
        if (param_1 == 0) {
          local_78 = CONCAT22(local_78._2_2_,(uint)local_78);
          if (local_20 != 0) {
LAB_3ab8_1923:
            local_74 = local_74 + 1;
            puVar9 = param_2 + local_74 * 0x10;
            puVar8 = local_72;
            for (iVar4 = 0x10; local_78 = CONCAT22(local_78._2_2_,(uint)local_78), iVar4 != 0;
                iVar4 = iVar4 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar3 = *puVar2;
            }
          }
        }
        else if (local_20 == 0) goto LAB_3ab8_1923;
      }
    }
  }
  return local_74;
}



/* 3ab8:19b2  FUN_3ab8_19b2  822 bytes, 2 callers */

int __cdecl16far
FUN_3ab8_19b2(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  undefined2 in_stack_0000002c;
  undefined2 in_stack_0000002e;
  uint in_stack_00000030;
  uint in_stack_00000032;
  undefined2 local_3a;
  undefined2 local_36;
  undefined2 uStack_34;
  undefined4 local_32;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined4 local_2a;
  int local_26;
  int local_24;
  undefined2 local_22 [2];
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined2 *puStack_1a;
  undefined2 *puStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined4 local_c;
  
  uVar7 = 0x22b2;
  FUN_21f2_0ebc();
  local_24 = 1;
  puVar3 = param_1 + 0x10;
  puVar5 = param_1;
  puVar6 = puVar3;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = local_22;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  if ((char)((uint)unaff_SI >> 8) != '\0') {
    local_c._2_2_ = 0xbc4;
    local_c._0_2_ = param_1;
    uStack_e = 0;
    uStack_10 = 0x22b2;
    uStack_12 = 0xc57d;
    local_24 = FUN_3ab8_0e4a();
  }
  for (local_26 = 1; local_26 <= local_24; local_26 = local_26 + 1) {
    puVar3 = local_22;
    puVar5 = param_1 + local_26 * 0x10;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    local_c._2_2_ = in_stack_00000032;
    local_c._0_2_ = (undefined2 *)in_stack_00000030;
    uStack_e = in_stack_0000002e;
    uStack_10 = in_stack_0000002c;
    uStack_12 = in_stack_0000002a;
    uStack_14 = in_stack_00000028;
    uStack_16 = in_stack_00000026;
    puStack_18 = &local_3a;
    puStack_1a = &local_36;
    local_1e = 0xc6af;
    uStack_1c = uVar7;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    local_1e = 0xc6b4;
    func_0x00029d78();
    local_24 = 0x22b2;
    local_26 = 0xc6be;
    func_0x000299d1();
    local_24 = 0x22b2;
    local_26 = 0xc6c6;
    func_0x000297e6();
    local_24 = 0x22b2;
    local_26 = -0x3935;
    func_0x00029d78();
    uStack_2c = 0x22b2;
    uStack_2e = 0xc6d5;
    func_0x000299d1();
    uStack_2c = param_9;
    uStack_2e = param_8;
    local_32._2_2_ = param_7;
    local_32._0_2_ = param_6;
    uStack_34 = param_5;
    local_36 = param_4;
    local_3a = param_2;
    FUN_3ab8_04af();
    local_c._2_2_ = 0xc6fc;
    func_0x000297e6();
    local_c._2_2_ = 0xc701;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc70b;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc713;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc718;
    func_0x00029d78();
    puStack_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xc722;
    func_0x000299d1();
    puStack_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xc72a;
    FUN_1def_05d1();
    local_c._2_2_ = 0xc734;
    func_0x000297e6();
    local_c._2_2_ = 0xc739;
    func_0x00029d78();
    local_c._2_2_ = 0xc741;
    func_0x00029c74();
    local_c._2_2_ = 0xc749;
    func_0x00029c74();
    local_c._2_2_ = 0xc751;
    func_0x00029983();
    local_c._2_2_ = 0xc759;
    func_0x000297e6();
    local_c._2_2_ = 0xc75e;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc768;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc770;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc775;
    func_0x00029d78();
    puStack_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xc77f;
    func_0x000299d1();
    puStack_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xc787;
    func_0x0001e558();
    local_c._2_2_ = 0xc791;
    func_0x000297e6();
    local_c._2_2_ = 0xc796;
    func_0x00029d78();
    local_c._2_2_ = 0xc79e;
    func_0x00029c74();
    local_c._2_2_ = 0xc7a6;
    func_0x00029c74();
    local_c._2_2_ = 0xc7ae;
    func_0x00029983();
    local_c._2_2_ = 0xc7b7;
    func_0x000297e6();
    local_c._2_2_ = 0xc7c0;
    func_0x00029b6d();
    local_c._2_2_ = 0xc7c5;
    func_0x00029d78();
    local_c._2_2_ = -0x3836;
    local_32 = FUN_28b3_0f51();
    if (*(int *)0xcb6 != 0) {
      local_2a._0_2_ = (int)(undefined2 *)local_c - (uint)local_32;
      local_2a._2_2_ =
           (local_c._2_2_ - (int)((ulong)local_32 >> 0x10)) -
           (uint)((undefined2 *)local_c < (uint)local_32);
      local_c._0_2_ = (undefined2 *)0x22b2;
      uStack_e = 0xc7ee;
      local_c._2_2_ = (int)local_2a;
      func_0x00021eee();
    }
    local_c._2_2_ = in_stack_00000032;
    local_c._0_2_ = (undefined2 *)in_stack_00000030;
    uStack_e = in_stack_0000002e;
    uStack_10 = in_stack_0000002c;
    uStack_12 = in_stack_0000002a;
    uStack_14 = in_stack_00000028;
    uStack_16 = in_stack_00000026;
    puVar3 = &local_36;
    puVar5 = local_22;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    local_3a = 0xc822;
    puVar3 = (undefined2 *)FUN_21f2_001a();
    puVar5 = local_22;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    uVar8 = 0;
    if (*(int *)0xcb6 != 0) {
      local_2a._0_2_ = (int)(undefined2 *)local_c + (uint)local_32;
      uVar8 = CARRY2(local_c._2_2_,local_32._2_2_) ||
              CARRY2(local_c._2_2_ + local_32._2_2_,
                     (uint)CARRY2((uint)(undefined2 *)local_c,(uint)local_32));
      local_2a._2_2_ =
           local_c._2_2_ + local_32._2_2_ + (uint)CARRY2((uint)(undefined2 *)local_c,(uint)local_32)
      ;
      local_c._0_2_ = (undefined2 *)0x1bb4;
      uStack_e = 0xc854;
      local_c._2_2_ = (int)local_2a;
      local_c._0_2_ = (undefined2 *)func_0x00021eee();
    }
    while( true ) {
      local_c._2_2_ = 0xc5ab;
      func_0x00029834();
      local_c._2_2_ = 0xc5b4;
      func_0x00029834();
      local_c._2_2_ = 0xc5b9;
      FUN_28b3_1181();
      if (!(bool)uVar8) break;
      local_c._2_2_ = 0xc594;
      func_0x00029834();
      local_c._2_2_ = 0x22b2;
      local_c._0_2_ = (undefined2 *)0xc59d;
      FUN_28b3_10e4();
      local_c._2_2_ = 0xc5a3;
      func_0x000299d1();
    }
    while( true ) {
      local_c._2_2_ = 0xc5de;
      func_0x00029834();
      local_c._2_2_ = 0xc5e6;
      func_0x00029834();
      local_c._2_2_ = 0xc5eb;
      FUN_28b3_1181();
      if (!(bool)uVar8) break;
      local_c._2_2_ = 0xc5c6;
      func_0x00029834();
      local_c._2_2_ = 0x22b2;
      local_c._0_2_ = (undefined2 *)0xc5cf;
      func_0x00029c74();
      local_c._2_2_ = 0xc5d5;
      func_0x000299d1();
    }
    local_c._2_2_ = 0xc5f5;
    func_0x00029834();
    local_c._2_2_ = 0xc5fe;
    func_0x00029c2c();
    local_c._2_2_ = 0xc61c;
    func_0x00029da5();
    local_c._2_2_ = 0xc621;
    FUN_28b3_117c();
    local_c._2_2_ = 0xc626;
    uVar9 = FUN_28b3_0f51();
    local_c._2_2_ = (uint)uVar9;
    local_c._0_2_ = (undefined2 *)0x22b2;
    uVar7 = 0x1bb4;
    uStack_e = 0xc633;
    local_2a = uVar9;
    local_c = func_0x00021eee();
    if (0x167ffff < local_c) {
      local_c._0_2_ = (undefined2 *)(int)local_c;
      local_c._2_2_ = (int)(local_c >> 0x10) + -0x168;
    }
    puVar5 = param_1 + local_26 * 0x10;
    puVar3 = local_22;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
  }
  return local_24;
}



/* 3ab8:1ce8  FUN_3ab8_1ce8  1273 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_1ce8(uint param_1,uint param_2,int *param_3,uint param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,int *param_8,uint *param_9,uint *param_10,
             uint *param_11,undefined2 param_12,undefined2 param_13,undefined2 param_14,
             undefined2 param_15,undefined2 param_16,undefined2 param_17,undefined2 param_18,
             undefined2 param_19,undefined2 param_20,undefined2 param_21,undefined2 param_22,
             undefined2 param_23,undefined2 param_24,undefined2 param_25,undefined2 param_26,
             undefined2 param_27,undefined2 param_28,undefined2 param_29,undefined2 param_30,
             undefined2 param_31,undefined2 param_32,undefined2 param_33,undefined2 param_34,
             uint param_35,undefined2 param_36,undefined2 param_37)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  uint unaff_DS;
  undefined2 *puVar11;
  uint local_13c;
  uint local_13a;
  int local_138;
  uint local_136;
  uint local_134;
  undefined2 local_128 [4];
  undefined1 local_120 [4];
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_116;
  undefined2 local_114;
  uint local_110;
  byte local_10e;
  byte local_10d;
  undefined2 local_108 [13];
  byte local_ed;
  byte local_ea;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 *puStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
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
  undefined1 *puStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  uint uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar9 = 0x22b2;
  FUN_21f2_0ebc();
  if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1 == 0)))) {
    if (param_11[1] == 0 && *param_11 == 0) {
      return;
    }
    if (((int)param_10[1] <= *(int *)0x142) &&
       (((int)param_10[1] < *(int *)0x142 || (*param_10 < *(uint *)0x140)))) {
      local_136 = *(uint *)0x14c;
      local_134 = *(int *)0x14e + (uint)(0xfffe < local_136);
      while( true ) {
        local_136 = local_136 + 1;
        if (((int)param_10[1] < (int)local_134) ||
           (((int)param_10[1] <= (int)local_134 && (*param_10 < local_136)))) break;
        uStack_e = 0xc947;
        uStack_c = uVar9;
        puVar11 = (undefined2 *)func_0x00000271();
        puVar7 = (undefined2 *)puVar11;
        puVar8 = local_128;
        for (iVar5 = 0x10; uVar12 = local_110, iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar3 = *puVar2;
        }
        uStack_c = local_11c;
        uStack_e = *(undefined2 *)((uint)local_10e * 2 + 0xa88);
        uStack_10 = (uint)local_10d;
        uStack_12 = local_114;
        uStack_14 = local_116;
        uStack_16 = local_118;
        uStack_18 = local_11a;
        puStack_1a = (undefined1 *)0x0;
        uStack_1c = 0xc992;
        func_0x000297e6();
        puStack_1a = (undefined1 *)0x22b2;
        uStack_1c = 0xc997;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xc9a1;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0xc9aa;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0xc9af;
        func_0x00029d78();
        uStack_2a = 0x22b2;
        uStack_2c = 0xc9b9;
        func_0x000299d1();
        uStack_2a = 0x22b2;
        uStack_2c = 0xc9c2;
        func_0x000297e6();
        uStack_2a = 0x22b2;
        uStack_2c = 0xc9c7;
        func_0x00029d78();
        uStack_32 = 0x22b2;
        uStack_34 = 0xc9d1;
        func_0x000299d1();
        uStack_32 = 0x22b2;
        uVar9 = 0xdef;
        uStack_34 = 0xc9d6;
        func_0x0000e118();
        if (uVar12 != 0) {
          if (((byte)local_136 & 0xf) == 0xf) {
            uStack_c = param_6;
            uStack_e = param_5;
            uStack_10 = param_4;
            uStack_12 = 0xdef;
            uVar9 = 0x3bf;
            uStack_14 = 0xca03;
            iVar5 = func_0x00006608();
            *param_3 = iVar5;
            if (*(char *)0xc0e != '\0') {
              return;
            }
            if ((*param_3 != 0) || (*param_8 != 0)) {
              uStack_c = 0xca30;
              func_0x0000daa6();
              uVar9 = 0x885;
              func_0x0000c3ca();
            }
          }
          else if ((*(byte *)0xc3be & 1) == 0) {
            uVar9 = 0x885;
            uStack_c = 0xc919;
            func_0x0000daa6();
          }
          else {
            uVar9 = 0x885;
            func_0x0000dc89();
          }
        }
        local_134 = local_134 + (0xfffe < local_136);
      }
      param_11[1] = 0;
      *param_11 = 0;
      uVar12 = *(uint *)0x14e;
      *param_10 = *(uint *)0x14c;
      param_10[1] = uVar12;
      return;
    }
    local_13c = 1;
    local_13a = 0;
    if (param_9[1] != 0 || *param_9 != 0) {
      local_13c = *param_9;
      local_13a = param_9[1];
    }
    uVar13 = *param_11;
    uVar14 = param_11[1];
    param_11[1] = 0;
    *param_11 = 0;
    uVar12 = *(uint *)0x14c;
    uVar6 = *(uint *)0x14e;
    param_11 = param_10;
  }
  else {
    local_13c = param_1;
    local_13a = param_2;
    uVar12 = param_1;
    uVar6 = param_2;
    uVar13 = param_1;
    uVar14 = param_2;
  }
  *param_11 = uVar12;
  param_11[1] = uVar6;
  local_134 = local_13a;
  for (local_136 = local_13c;
      ((int)local_134 <= (int)uVar14 && (((int)local_134 < (int)uVar14 || (local_136 <= uVar13))));
      local_136 = local_136 + 1) {
    uVar10 = 0;
    uStack_e = 0xcca4;
    uStack_c = uVar9;
    puVar11 = (undefined2 *)func_0x00000271();
    puVar7 = (undefined2 *)puVar11;
    puVar8 = local_108;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    uVar12 = unaff_DS;
    if (((local_ea & 2) != 0) && (local_ed < 0x5a)) {
      uStack_c = param_37;
      uStack_e = param_36;
      uStack_10 = param_35;
      uStack_12 = param_34;
      uStack_14 = param_33;
      uStack_16 = param_32;
      uStack_18 = param_31;
      puStack_1a = (undefined1 *)param_30;
      uStack_1c = param_29;
      uStack_1e = param_28;
      uStack_20 = param_27;
      uStack_22 = param_26;
      uStack_24 = param_25;
      uStack_26 = param_24;
      uStack_28 = param_23;
      uStack_2a = param_22;
      uStack_2c = param_21;
      uStack_2e = param_20;
      uStack_30 = param_19;
      uStack_32 = param_18;
      uStack_34 = param_17;
      uStack_36 = param_16;
      uStack_38 = param_15;
      uStack_3a = param_14;
      uStack_3c = param_13;
      uStack_3e = param_12;
      puStack_40 = local_108;
      uStack_42 = 0;
      uStack_44 = 0xcd28;
      iVar5 = FUN_3ab8_19b2();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029d78();
      uVar12 = 0x22b2;
      uVar10 = 0x22b2;
      iVar4 = FUN_28b3_0f51();
      if (iVar4 != 0) {
        for (local_138 = 1; local_138 <= iVar5; local_138 = local_138 + 1) {
          puVar7 = local_128;
          puVar8 = local_108 + local_138 * 0x10;
          for (iVar4 = 0x10; uVar12 = local_110, iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar11;
          }
          local_10d = 10;
          uStack_c = local_11c;
          uStack_e = *(undefined2 *)((uint)local_10e * 2 + 0xa88);
          uStack_10 = 10;
          uStack_12 = local_114;
          uStack_14 = local_116;
          uStack_16 = local_118;
          uStack_18 = local_11a;
          uStack_1c = 0xcb03;
          puStack_1a = (undefined1 *)uVar10;
          func_0x000297e6();
          puStack_1a = local_120;
          uStack_1c = 0x22b2;
          uStack_1e = 0xcb0d;
          func_0x00029b6d();
          puStack_1a = (undefined1 *)0x22b2;
          uStack_1c = 0xcb13;
          func_0x0002996b();
          puStack_1a = (undefined1 *)0x22b2;
          uStack_1c = 0xcb18;
          func_0x00029d78();
          uStack_22 = 0x22b2;
          uStack_24 = 0xcb22;
          func_0x000299d1();
          uStack_22 = 0x22b2;
          uStack_24 = 0xcb2b;
          func_0x000297e6();
          uStack_22 = 0x22b2;
          uStack_24 = 0xcb34;
          FUN_28b3_100d();
          uStack_22 = 0x22b2;
          uStack_24 = 0xcb3d;
          func_0x00029b6d();
          uStack_22 = 0x22b2;
          uStack_24 = 0xcb46;
          FUN_28b3_0d8b();
          uStack_22 = 0x22b2;
          uStack_24 = 0xcb4b;
          FUN_28b3_1168();
          uStack_22 = 0x22b2;
          uStack_24 = 0xcb54;
          func_0x0002996b();
          uStack_22 = 0x22b2;
          uStack_24 = 0xcb59;
          func_0x00029d78();
          uStack_2a = 0x22b2;
          uStack_2c = 0xcb63;
          func_0x000299d1();
          uStack_2a = 0x22b2;
          uStack_2c = 0xcb6c;
          func_0x000297e6();
          uStack_2a = 0x22b2;
          uStack_2c = 0xcb75;
          FUN_28b3_100d();
          uStack_2a = 0x22b2;
          uStack_2c = 0xcb7e;
          func_0x00029b6d();
          uStack_2a = 0x22b2;
          uStack_2c = 0xcb87;
          FUN_28b3_0d8b();
          uStack_2a = 0x22b2;
          uStack_2c = 0xcb8c;
          FUN_28b3_117c();
          uStack_2a = 0x22b2;
          uStack_2c = 0xcb95;
          func_0x0002996b();
          uStack_2a = 0x22b2;
          uStack_2c = 0xcb9a;
          func_0x00029d78();
          uStack_32 = 0x22b2;
          uStack_34 = 0xcba4;
          func_0x000299d1();
          uStack_32 = 0x22b2;
          uVar10 = 0xdef;
          uStack_34 = 0xcba9;
          iVar4 = func_0x0000e118();
          if ((iVar4 != 0) && (param_2 != 0 || param_1 != 0)) {
            puVar1 = param_10;
            uVar6 = *puVar1;
            *puVar1 = *puVar1 + 1;
            param_10[1] = param_10[1] + (uint)(0xfffe < uVar6);
            if (((int)param_10[1] <= *(int *)0x142) &&
               (((int)param_10[1] < *(int *)0x142 || (*param_10 < *(uint *)0x140)))) {
              uVar12 = param_10[1];
              uStack_c = 0xdef;
              uVar10 = 0;
              uStack_e = 0xcbde;
              puVar11 = (undefined2 *)func_0x00000271();
              puVar7 = (undefined2 *)puVar11;
              puVar8 = local_128;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                puVar3 = puVar7;
                puVar7 = puVar7 + 1;
                puVar2 = puVar8;
                puVar8 = puVar8 + 1;
                *puVar3 = *puVar2;
              }
            }
          }
        }
      }
    }
    uVar9 = uVar10;
    if (uVar12 != 0) {
      if (((byte)local_136 & 0x7f) == 0x7f) {
        uStack_c = param_6;
        uStack_e = param_5;
        uStack_10 = param_4;
        uVar9 = 0x3bf;
        uStack_14 = 0xcc2a;
        uStack_12 = uVar10;
        iVar5 = func_0x00006608();
        *param_3 = iVar5;
        if (*(char *)0xc0e != '\0') {
          return;
        }
        if ((*param_3 != 0) || (*param_8 != 0)) {
          uStack_c = 0xcc54;
          func_0x0000daa6();
          uVar9 = 0x885;
          func_0x0000c3ca();
        }
      }
      else if ((*(byte *)0xc3be & 1) == 0) {
        uVar9 = 0x885;
        uStack_c = 0xcc78;
        func_0x0000daa6();
      }
      else {
        uVar9 = 0x885;
        func_0x0000dc89();
      }
    }
    local_134 = local_134 + (0xfffe < local_136);
  }
  return;
}



/* 3ab8:21e1  FUN_3ab8_21e1  1413 bytes, 2 callers */

void __cdecl16far
FUN_3ab8_21e1(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  undefined2 in_stack_0000002c;
  undefined2 in_stack_0000002e;
  undefined2 in_stack_00000030;
  undefined2 in_stack_00000032;
  int in_stack_0000003a;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined2 local_38;
  undefined2 uStack_36;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 *local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 *local_1c;
  undefined1 *local_1a;
  undefined1 *puStack_18;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 local_a;
  
  FUN_21f2_0ebc();
  puVar5 = &local_40;
  puVar4 = param_1;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  local_a = 0xcd85;
  func_0x000297e6();
  local_a = 0xcd8d;
  FUN_28b3_100d();
  local_a = 0xcd95;
  func_0x00029983();
  local_a = 0xcd9d;
  func_0x000297e6();
  local_a = 0xcda5;
  FUN_28b3_100d();
  local_a = 0xcdad;
  func_0x00029983();
  uVar6 = 0;
  local_a = 0xcdd0;
  FUN_28b3_0d8b();
  local_a = 0xcdd8;
  func_0x00029983();
  local_a = 0xcde0;
  func_0x000297e6();
  local_a = 0xcde5;
  func_0x00029d78();
  local_a = 0xcdee;
  func_0x00029b85();
  local_a = 0xcdf7;
  func_0x00029c2c();
  local_a = 0xcdff;
  func_0x00029983();
  local_a = 0xce07;
  func_0x000297e6();
  local_a = 0xce0f;
  func_0x00029b6d();
  local_a = 0xce17;
  func_0x000297e6();
  local_a = 0xce1f;
  func_0x00029b6d();
  local_a = 0xce24;
  FUN_28b3_117c();
  local_a = 0xce2c;
  func_0x0002996b();
  local_a = 0xce34;
  FUN_28b3_0ee9();
  local_a = 0xce3d;
  func_0x00029834();
  local_a = 0xce45;
  func_0x000297e6();
  local_a = 0xce4a;
  func_0x00029d78();
  local_a = 0xce4f;
  FUN_28b3_1181();
  if ((bool)uVar6) {
    local_28 = *(undefined2 *)0x943c;
    local_26 = *(undefined2 *)0x943e;
  }
  else {
    local_a = 0xce59;
    func_0x000297e6();
    local_a = 0xce5e;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    local_12 = 0xce68;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xce6d;
    FUN_28b3_1582();
    local_a = 0xce77;
    func_0x00029834();
    local_a = 0xce7f;
    func_0x0002996b();
    local_a = 0xce87;
    func_0x00029b9d();
    local_a = 0xce8f;
    func_0x00029983();
    local_a = 0xce97;
    func_0x000297e6();
    local_a = 0xce9f;
    func_0x00029b85();
    local_a = 0xcea7;
    func_0x00029983();
  }
  local_24 = (undefined2 *)*(undefined2 *)0x943c;
  local_22 = *(undefined2 *)0x943e;
  if (in_stack_0000003a != 0) {
    local_a = 0xcee8;
    local_1c = local_24;
    local_1a = (undefined1 *)local_22;
    FUN_28b3_0d8b();
    local_a = 0xcef0;
    func_0x00029b6d();
    local_a = 0xcef5;
    func_0x00029d78();
    local_a = 0xcefe;
    func_0x00029c2c();
    local_a = 0xcf06;
    func_0x0002996b();
    local_a = 0xcf0e;
    func_0x00029983();
    local_a = 0xcf17;
    FUN_28b3_0d8b();
    local_a = 0xcf1f;
    func_0x00029b6d();
    local_a = 0xcf24;
    func_0x00029d78();
    local_a = 0xcf2d;
    func_0x00029c2c();
    local_a = 0xcf35;
    func_0x0002996b();
    local_a = 0xcf3d;
    func_0x00029983();
    local_a = 0xcf46;
    FUN_28b3_0d8b();
    local_a = 0xcf4e;
    func_0x00029b6d();
    local_a = 0xcf53;
    func_0x00029d78();
    local_a = 0xcf5c;
    func_0x00029c2c();
    local_a = 0xcf64;
    func_0x0002996b();
    local_a = 0xcf6c;
    func_0x000297e6();
    local_a = 0xcf74;
    func_0x00029b6d();
    local_a = 0xcf79;
    FUN_28b3_1163();
    local_a = 0xcf81;
    func_0x00029983();
    local_a = 0xcf89;
    func_0x000297e6();
    local_a = 0xcf91;
    func_0x00029b6d();
    local_a = 0xcf99;
    func_0x00029bb5();
    local_a = 0xcfa1;
    func_0x00029983();
  }
  local_a = in_stack_00000032;
  uStack_c = in_stack_00000030;
  local_e = in_stack_0000002e;
  uStack_10 = in_stack_0000002c;
  local_12 = in_stack_0000002a;
  uStack_14 = in_stack_00000028;
  local_16 = in_stack_00000026;
  puStack_18 = local_48;
  local_1a = local_44;
  local_1c = (undefined2 *)0x22b2;
  uStack_1e = 0xcfc9;
  func_0x000297e6();
  local_1c = &local_3c;
  uStack_1e = 0x22b2;
  local_20 = 0xcfd2;
  func_0x00029bb5();
  local_1c = (undefined2 *)0x22b2;
  uStack_1e = 0xcfd8;
  func_0x0002996b();
  local_1c = (undefined2 *)0x22b2;
  uStack_1e = 0xcfdd;
  func_0x00029d78();
  local_24 = (undefined2 *)0x22b2;
  local_26 = 0xcfe7;
  func_0x000299d1();
  local_24 = (undefined2 *)0x22b2;
  local_26 = 0xcfef;
  func_0x000297e6();
  local_24 = &local_40;
  local_26 = 0x22b2;
  local_28 = 0xcff8;
  func_0x00029bb5();
  local_24 = (undefined2 *)0x22b2;
  local_26 = 0xcffe;
  func_0x0002996b();
  local_24 = (undefined2 *)0x22b2;
  local_26 = 0xd003;
  func_0x00029d78();
  local_2c = 0x22b2;
  uStack_2e = 0xd00d;
  func_0x000299d1();
  local_2c = param_9;
  uStack_2e = param_8;
  uStack_30 = param_7;
  uStack_32 = param_6;
  local_34 = param_5;
  uStack_36 = param_4;
  local_38 = param_3;
  uStack_3a = param_2;
  local_3c = 0x22b2;
  uStack_3e = 0xd029;
  FUN_3ab8_04af();
  local_a = 0xd034;
  func_0x000297e6();
  local_a = 0xd039;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  local_12 = 0xd043;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xd04b;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  local_12 = 0xd050;
  func_0x00029d78();
  puStack_18 = (undefined1 *)0x22b2;
  local_1a = (undefined1 *)0xd05a;
  func_0x000299d1();
  puStack_18 = (undefined1 *)0x0;
  local_1a = (undefined1 *)0x22b2;
  local_1c = (undefined2 *)0xd062;
  FUN_1def_05d1();
  local_a = 0xd06c;
  func_0x000297e6();
  local_a = 0xd071;
  func_0x00029d78();
  local_a = 0xd079;
  func_0x00029c74();
  local_a = 0xd081;
  func_0x00029c74();
  local_a = 0xd089;
  func_0x00029983();
  local_a = 0xd091;
  func_0x000297e6();
  local_a = 0xd096;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  local_12 = 0xd0a0;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xd0a8;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  local_12 = 0xd0ad;
  func_0x00029d78();
  puStack_18 = (undefined1 *)0x22b2;
  local_1a = (undefined1 *)0xd0b7;
  func_0x000299d1();
  puStack_18 = (undefined1 *)0x0;
  local_1a = (undefined1 *)0x22b2;
  local_1c = (undefined2 *)0xd0bf;
  func_0x0001e558();
  local_a = 0xd0c9;
  func_0x000297e6();
  local_a = 0xd0ce;
  func_0x00029d78();
  local_a = 0xd0d6;
  func_0x00029c74();
  local_a = 0xd0de;
  func_0x00029c74();
  local_a = 0xd0e6;
  func_0x00029983();
  local_a = 0xd0ee;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  local_12 = 0xd0f8;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xd100;
  func_0x000297e6();
  puStack_18 = (undefined1 *)0x22b2;
  local_1a = (undefined1 *)0xd10a;
  func_0x000299d1();
  puStack_18 = (undefined1 *)0x0;
  local_1a = (undefined1 *)0x22b2;
  local_1c = (undefined2 *)0xd112;
  FUN_1def_05d1();
  local_a = 0xd11c;
  func_0x000297e6();
  local_a = 0xd124;
  func_0x000297e6();
  local_a = 0x22b2;
  uStack_c = 0xd12d;
  func_0x00029b55();
  local_a = 0xd133;
  func_0x0002996b();
  local_a = 0xd138;
  FUN_28b3_117c();
  local_a = 0xd140;
  func_0x00029983();
  local_a = 0xd148;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  local_12 = 0xd152;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  local_12 = 0xd15a;
  func_0x000297e6();
  puStack_18 = (undefined1 *)0x22b2;
  local_1a = (undefined1 *)0xd164;
  func_0x000299d1();
  puStack_18 = (undefined1 *)0x0;
  local_1a = (undefined1 *)0x22b2;
  local_1c = (undefined2 *)0xd16c;
  func_0x0001e558();
  uVar6 = (undefined1 *)0xffed < &puStack_18;
  local_a = 0xd176;
  func_0x000297e6();
  local_a = 0xd17e;
  func_0x000297e6();
  local_a = 0x22b2;
  uStack_c = 0xd187;
  func_0x00029b55();
  local_a = 0xd18d;
  func_0x0002996b();
  local_a = 0xd192;
  FUN_28b3_117c();
  local_a = 0xd19a;
  func_0x00029983();
  local_a = 0xd1a2;
  func_0x000297e6();
  local_a = 0xd1aa;
  FUN_28b3_100d();
  local_a = 0xd1b2;
  func_0x0002996b();
  local_a = 0xd1ba;
  FUN_28b3_0ee9();
  local_a = 0xd1c2;
  func_0x000297e6();
  local_a = 0xd1ca;
  FUN_28b3_100d();
  local_a = 0xd1d2;
  func_0x0002996b();
  local_a = 0xd1da;
  FUN_28b3_0ee9();
  local_a = 0xd1e2;
  func_0x000297e6();
  local_a = 0xd1ea;
  func_0x00029b6d();
  local_a = 0xd1f2;
  func_0x000297e6();
  local_a = 0xd1fa;
  func_0x00029b6d();
  local_a = 0xd1ff;
  FUN_28b3_117c();
  local_a = 0xd207;
  func_0x0002996b();
  local_a = 0xd20f;
  FUN_28b3_0ee9();
  local_a = 0xd218;
  func_0x00029834();
  local_a = 0xd220;
  func_0x000297e6();
  local_a = 0xd225;
  func_0x00029d78();
  local_a = 0xd22a;
  FUN_28b3_1181();
  if ((bool)uVar6) {
    local_28 = *(undefined2 *)0x943c;
    local_26 = *(undefined2 *)0x943e;
  }
  else {
    local_a = 0xd234;
    func_0x000297e6();
    local_a = 0xd239;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    local_12 = 0xd243;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0xd248;
    FUN_28b3_1582();
    local_a = 0xd252;
    func_0x00029834();
    local_a = 0xd25a;
    func_0x0002996b();
    local_a = 0xd262;
    func_0x00029b9d();
    local_a = 0xd26a;
    func_0x00029983();
    local_a = 0xd272;
    func_0x000297e6();
    local_a = 0xd27a;
    func_0x00029b85();
    local_a = 0xd282;
    func_0x00029983();
  }
  local_a = 0xd2a6;
  func_0x000297e6();
  local_a = 0xd2ae;
  func_0x00029b6d();
  local_a = 0xd2b3;
  func_0x00029af6();
  local_a = 0xd2bb;
  func_0x00029983();
  local_a = 0xd2c3;
  func_0x000297e6();
  local_a = 0xd2cb;
  func_0x00029b6d();
  local_a = 0xd2d3;
  func_0x00029983();
  puVar5 = &local_40;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 3ab8:2766  FUN_3ab8_2766  879 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2766(void)

{
  int iVar1;
  undefined2 **ppuVar2;
  undefined2 unaff_DS;
  undefined2 *in_stack_00000024;
  int *in_stack_00000026;
  int *in_stack_00000028;
  int *in_stack_0000002a;
  int *in_stack_0000002c;
  undefined2 **local_a;
  undefined2 **local_8;
  undefined2 **local_6;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x3ab8;
  local_6 = (undefined2 **)0xd2f1;
  FUN_21f2_0ebc();
  *in_stack_00000024 = 0;
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 **)0xd300;
  func_0x000297e6();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 **)0xd305;
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
  ppuVar2 = (undefined2 **)0x1bb4;
  iVar1 = FUN_1885_52fe(&local_4,&local_8,&local_6,&local_a);
  if (iVar1 == 0) {
    local_4 = &local_a;
    local_6 = &local_6;
    local_8 = &local_8;
    local_a = &local_4;
    ppuVar2 = (undefined2 **)0x1b6e;
    iVar1 = func_0x0001b72d(0x1bb4);
    if (iVar1 != 0) {
      *in_stack_00000024 = 1;
      *in_stack_00000026 = (int)local_4;
      *in_stack_00000028 = (int)local_8;
      *in_stack_0000002a = (int)local_6;
      *in_stack_0000002c = (int)local_a;
    }
  }
  in_stack_00000024[1] = 0;
  local_6 = (undefined2 **)0xd3c5;
  local_4 = ppuVar2;
  func_0x000297e6();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 **)0xd3cd;
  func_0x00029bb5();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 **)0xd3d2;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  ppuVar2 = (undefined2 **)0x1bb4;
  iVar1 = FUN_1885_52fe(&local_4,&local_8,&local_6,&local_a);
  if (iVar1 == 0) {
    local_4 = &local_a;
    local_6 = &local_6;
    local_8 = &local_8;
    local_a = &local_4;
    ppuVar2 = (undefined2 **)0x1b6e;
    iVar1 = func_0x0001b72d(0x1bb4);
    if (iVar1 != 0) {
      in_stack_00000024[1] = 1;
      in_stack_00000026[1] = (int)local_4;
      in_stack_00000028[1] = (int)local_8;
      in_stack_0000002a[1] = (int)local_6;
      in_stack_0000002c[1] = (int)local_a;
    }
  }
  in_stack_00000024[2] = 0;
  local_6 = (undefined2 **)0xd4af;
  local_4 = ppuVar2;
  func_0x000297e6();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 **)0xd4b7;
  func_0x00029bb5();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 **)0xd4bc;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  ppuVar2 = (undefined2 **)0x1bb4;
  iVar1 = FUN_1885_52fe(&local_4,&local_8,&local_6,&local_a);
  if (iVar1 == 0) {
    local_4 = &local_a;
    local_6 = &local_6;
    local_8 = &local_8;
    local_a = &local_4;
    ppuVar2 = (undefined2 **)0x1b6e;
    iVar1 = func_0x0001b72d(0x1bb4);
    if (iVar1 != 0) {
      in_stack_00000024[2] = 1;
      in_stack_00000026[2] = (int)local_4;
      in_stack_00000028[2] = (int)local_8;
      in_stack_0000002a[2] = (int)local_6;
      in_stack_0000002c[2] = (int)local_a;
    }
  }
  in_stack_00000024[3] = 0;
  local_6 = (undefined2 **)0xd589;
  local_4 = ppuVar2;
  func_0x000297e6();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 **)0xd591;
  func_0x00029bb5();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 **)0xd596;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  iVar1 = FUN_1885_52fe(&local_4,&local_8,&local_6,&local_a);
  if (iVar1 == 0) {
    local_4 = &local_a;
    local_6 = &local_6;
    local_8 = &local_8;
    local_a = &local_4;
    iVar1 = func_0x0001b72d(0x1bb4);
    if (iVar1 != 0) {
      in_stack_00000024[3] = 1;
      in_stack_00000026[3] = (int)local_4;
      in_stack_00000028[3] = (int)local_8;
      in_stack_0000002a[3] = (int)local_6;
      in_stack_0000002c[3] = (int)local_a;
    }
  }
  return;
}



/* 3ab8:2ad5  FUN_3ab8_2ad5  1753 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_2ad5(int param_1,int *param_2,int *param_3,undefined2 *param_4,undefined2 param_5,
             undefined2 param_6,int *param_7,int *param_8,uint *param_9,uint *param_10,int *param_11
             ,undefined2 param_12,undefined2 param_13,undefined2 param_14,undefined2 param_15,
             undefined2 param_16,undefined2 param_17,undefined2 param_18,undefined2 param_19,
             undefined2 param_20,undefined2 param_21,undefined2 param_22,undefined2 param_23,
             undefined2 param_24,undefined2 param_25,undefined2 param_26,undefined2 param_27,
             undefined2 param_28,undefined2 param_29,undefined2 param_30,undefined2 param_31,
             undefined2 param_32,undefined2 param_33,undefined2 param_34,undefined2 param_35)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 **ppuVar4;
  undefined2 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 **ppuVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar13;
  int local_f4;
  undefined2 local_f0 [10];
  byte local_dc;
  byte local_da;
  int local_ba;
  uint local_b8;
  int local_b6;
  undefined2 local_88;
  undefined2 local_86;
  int local_74;
  int local_72;
  int local_70;
  int local_6e;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 *local_3e;
  undefined2 uStack_3c;
  undefined2 local_3a;
  undefined2 uStack_38;
  undefined2 local_36;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined1 *puStack_14;
  undefined2 local_12;
  int *local_10;
  undefined2 *local_e;
  undefined2 *local_c;
  
  uVar12 = 0x22b2;
  FUN_21f2_0ebc();
  bVar6 = false;
  if (((param_1 == 0) && (*param_2 == 0)) && (*param_7 == 0)) {
    bVar6 = true;
  }
  if (param_1 < 1) {
    if (*param_11 == 0) {
      return;
    }
    if (((int)param_10[1] <= *(int *)0x13e) &&
       (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
      local_b8 = *param_9;
      local_b6 = param_9[1] + (uint)(0xfffe < local_b8);
      while( true ) {
        local_b8 = local_b8 + 1;
        if (((int)param_10[1] < local_b6) ||
           (((int)param_10[1] <= local_b6 && (*param_10 < local_b8)))) break;
        local_e = (undefined2 *)0xd71d;
        local_c = (undefined2 *)uVar12;
        puVar13 = (undefined2 *)func_0x0000013f();
        puVar10 = (undefined2 *)puVar13;
        ppuVar11 = &local_3e;
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          ppuVar4 = ppuVar11;
          ppuVar11 = ppuVar11 + 1;
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *ppuVar4 = (undefined2 *)*puVar3;
        }
        local_c = (undefined2 *)0x0;
        local_e = (undefined2 *)0xd73e;
        func_0x000297e6();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xd743;
        func_0x00029d78();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xd748;
        local_c = (undefined2 *)FUN_28b3_0f51();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd751;
        func_0x000297e6();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd756;
        func_0x00029d78();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd75b;
        local_e = (undefined2 *)FUN_28b3_0f51();
        local_10 = (int *)0x22b2;
        local_12 = 0xd764;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = 0xd769;
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = 0xd76e;
        local_10 = (int *)FUN_28b3_0f51();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xd777;
        func_0x000297e6();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xd77c;
        func_0x00029d78();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xd781;
        local_12 = FUN_28b3_0f51();
        puStack_14 = (undefined1 *)0x22b2;
        uVar12 = 0xdef;
        uStack_16 = 0xd787;
        func_0x0000f19e();
        if (bVar6) {
          if (((byte)local_b8 & 0xf) == 0xf) {
            local_c = (undefined2 *)param_5;
            local_e = param_4;
            local_10 = param_3;
            local_12 = 0xdef;
            uVar12 = 0x3bf;
            puStack_14 = (undefined1 *)0xd7b4;
            iVar7 = func_0x00006608();
            *param_2 = iVar7;
            if (*(char *)0xc0e != '\0') {
              return;
            }
            if ((*param_2 != 0) || (*param_7 != 0)) {
              local_c = (undefined2 *)0xd7e1;
              func_0x0000daa6();
              bVar6 = false;
              uVar12 = 0x885;
              func_0x0000c3ca();
            }
          }
          else if ((*(byte *)0xc3be & 1) == 0) {
            uVar12 = 0x885;
            local_c = (undefined2 *)0xd6ef;
            func_0x0000daa6();
          }
          else {
            uVar12 = 0x885;
            func_0x0000dc89();
          }
        }
        local_b6 = local_b6 + (uint)(0xfffe < local_b8);
      }
      *param_11 = 0;
      uVar2 = *(uint *)0x14a;
      *param_9 = *(uint *)0x148;
      param_9[1] = uVar2;
      return;
    }
    local_f4 = 1;
    if (*param_8 != 0) {
      local_f4 = *param_8;
    }
    iVar7 = *param_11;
    *param_11 = 0;
    uVar2 = *(uint *)0x14a;
    *param_9 = *(uint *)0x148;
    param_9[1] = uVar2;
  }
  else {
    local_f4 = param_1;
    *param_11 = param_1;
    iVar7 = param_1;
  }
  local_ba = local_f4;
  do {
    if (iVar7 < local_ba) {
      return;
    }
    uVar12 = 0;
    local_c = (undefined2 *)0xd86f;
    puVar13 = (undefined2 *)func_0x00000398();
    puVar9 = (undefined2 *)puVar13;
    puVar10 = local_f0;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar5 = *puVar3;
    }
    if (((local_da & 2) != 0) && (local_dc < 0x5a)) {
      local_c = &local_68;
      local_e = (undefined2 *)param_35;
      local_10 = (int *)param_34;
      local_12 = param_33;
      puStack_14 = (undefined1 *)param_32;
      uStack_16 = param_31;
      uStack_18 = param_30;
      uStack_1a = param_29;
      uStack_1c = param_28;
      local_1e = param_27;
      local_20 = param_26;
      local_22 = param_25;
      local_24 = param_24;
      uStack_26 = param_23;
      uStack_28 = param_22;
      uStack_2a = param_21;
      uStack_2c = param_20;
      uStack_2e = param_19;
      uStack_30 = param_18;
      local_36 = param_15;
      uStack_38 = param_14;
      local_3a = param_13;
      uStack_3c = param_12;
      local_3e = local_f0;
      uStack_40 = 0;
      uStack_42 = 0xd8ec;
      FUN_3ab8_21e1();
      local_c = &local_24;
      local_e = &local_12;
      local_10 = &local_74;
      local_12 = local_86;
      puStack_14 = (undefined1 *)local_88;
      uStack_16 = local_66;
      uStack_18 = local_68;
      puVar9 = &uStack_30;
      puVar10 = local_f0;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar13 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar3 = *puVar13;
      }
      FUN_3ab8_2766();
      if (local_74 != 0) {
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        uVar12 = 0x22b2;
        func_0x00029983();
        if (param_1 != 0) {
          puVar1 = param_10;
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          param_10[1] = param_10[1] + (uint)(0xfffe < uVar2);
          if (((int)param_10[1] <= *(int *)0x13e) &&
             (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
            local_c = (undefined2 *)0x22b2;
            uVar12 = 0;
            local_e = (undefined2 *)0xd9a1;
            puVar13 = (undefined2 *)func_0x0000013f();
            puVar10 = (undefined2 *)puVar13;
            ppuVar11 = &local_3e;
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              ppuVar4 = ppuVar11;
              ppuVar11 = ppuVar11 + 1;
              *puVar3 = *ppuVar4;
            }
          }
        }
        local_e = (undefined2 *)0xd9c8;
        local_c = (undefined2 *)uVar12;
        func_0x000297e6();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xd9cd;
        func_0x00029d78();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xd9d2;
        local_c = (undefined2 *)FUN_28b3_0f51();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd9db;
        func_0x000297e6();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd9e0;
        func_0x00029d78();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xd9e5;
        local_e = (undefined2 *)FUN_28b3_0f51();
        local_10 = (int *)0x22b2;
        local_12 = 0xd9ee;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = 0xd9f3;
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = 0xd9f8;
        local_10 = (int *)FUN_28b3_0f51();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xda01;
        func_0x000297e6();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xda06;
        func_0x00029d78();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xda0b;
        local_12 = FUN_28b3_0f51();
        puStack_14 = (undefined1 *)0x22b2;
        uVar12 = 0xdef;
        uStack_16 = 0xda11;
        func_0x0000f19e();
      }
      if (local_72 != 0) {
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        uVar12 = 0x22b2;
        func_0x00029983();
        if (param_1 != 0) {
          puVar1 = param_10;
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          param_10[1] = param_10[1] + (uint)(0xfffe < uVar2);
          if (((int)param_10[1] <= *(int *)0x13e) &&
             (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
            local_c = (undefined2 *)0x22b2;
            uVar12 = 0;
            local_e = (undefined2 *)0xda89;
            puVar13 = (undefined2 *)func_0x0000013f();
            puVar10 = (undefined2 *)puVar13;
            ppuVar11 = &local_3e;
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              ppuVar4 = ppuVar11;
              ppuVar11 = ppuVar11 + 1;
              *puVar3 = *ppuVar4;
            }
          }
        }
        local_e = (undefined2 *)0xdaae;
        local_c = (undefined2 *)uVar12;
        func_0x000297e6();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdab3;
        func_0x00029d78();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdab8;
        local_c = (undefined2 *)FUN_28b3_0f51();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdac1;
        func_0x000297e6();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdac6;
        func_0x00029d78();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdacb;
        local_e = (undefined2 *)FUN_28b3_0f51();
        local_10 = (int *)0x22b2;
        local_12 = 0xdad4;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = 0xdad9;
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = 0xdade;
        local_10 = (int *)FUN_28b3_0f51();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdae7;
        func_0x000297e6();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdaec;
        func_0x00029d78();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdaf1;
        local_12 = FUN_28b3_0f51();
        puStack_14 = (undefined1 *)0x22b2;
        uVar12 = 0xdef;
        uStack_16 = 0xdaf7;
        func_0x0000f19e();
      }
      if (local_70 != 0) {
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        uVar12 = 0x22b2;
        func_0x00029983();
        if (param_1 != 0) {
          puVar1 = param_10;
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          param_10[1] = param_10[1] + (uint)(0xfffe < uVar2);
          if (((int)param_10[1] <= *(int *)0x13e) &&
             (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
            local_c = (undefined2 *)0x22b2;
            uVar12 = 0;
            local_e = (undefined2 *)0xdb6f;
            puVar13 = (undefined2 *)func_0x0000013f();
            puVar10 = (undefined2 *)puVar13;
            ppuVar11 = &local_3e;
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              ppuVar4 = ppuVar11;
              ppuVar11 = ppuVar11 + 1;
              *puVar3 = *ppuVar4;
            }
          }
        }
        local_e = (undefined2 *)0xdb94;
        local_c = (undefined2 *)uVar12;
        func_0x000297e6();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdb99;
        func_0x00029d78();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdb9e;
        local_c = (undefined2 *)FUN_28b3_0f51();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdba7;
        func_0x000297e6();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdbac;
        func_0x00029d78();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdbb1;
        local_e = (undefined2 *)FUN_28b3_0f51();
        local_10 = (int *)0x22b2;
        local_12 = 0xdbba;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = 0xdbbf;
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = 0xdbc4;
        local_10 = (int *)FUN_28b3_0f51();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdbcd;
        func_0x000297e6();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdbd2;
        func_0x00029d78();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdbd7;
        local_12 = FUN_28b3_0f51();
        puStack_14 = (undefined1 *)0x22b2;
        uVar12 = 0xdef;
        uStack_16 = 0xdbdd;
        func_0x0000f19e();
      }
      if (local_6e != 0) {
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        uVar12 = 0x22b2;
        func_0x00029983();
        if (param_1 != 0) {
          puVar1 = param_10;
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          param_10[1] = param_10[1] + (uint)(0xfffe < uVar2);
          if (((int)param_10[1] <= *(int *)0x13e) &&
             (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
            local_c = (undefined2 *)0x22b2;
            uVar12 = 0;
            local_e = (undefined2 *)0xdc55;
            puVar13 = (undefined2 *)func_0x0000013f();
            puVar10 = (undefined2 *)puVar13;
            ppuVar11 = &local_3e;
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              ppuVar4 = ppuVar11;
              ppuVar11 = ppuVar11 + 1;
              *puVar3 = *ppuVar4;
            }
          }
        }
        local_e = (undefined2 *)0xdc7a;
        local_c = (undefined2 *)uVar12;
        func_0x000297e6();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdc7f;
        func_0x00029d78();
        local_c = (undefined2 *)0x22b2;
        local_e = (undefined2 *)0xdc84;
        local_c = (undefined2 *)FUN_28b3_0f51();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdc8d;
        func_0x000297e6();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdc92;
        func_0x00029d78();
        local_e = (undefined2 *)0x22b2;
        local_10 = (int *)0xdc97;
        local_e = (undefined2 *)FUN_28b3_0f51();
        local_10 = (int *)0x22b2;
        local_12 = 0xdca0;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = 0xdca5;
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = 0xdcaa;
        local_10 = (int *)FUN_28b3_0f51();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdcb3;
        func_0x000297e6();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)0xdcb8;
        func_0x00029d78();
        local_12 = 0x22b2;
        puStack_14 = (undefined1 *)&SUB_0000_dcbd;
        local_12 = FUN_28b3_0f51();
        puStack_14 = (undefined1 *)0x22b2;
        uVar12 = 0xdef;
        uStack_16 = 0xdcc3;
        func_0x0000f19e();
      }
      if (bVar6) {
        if (((byte)local_ba & 0x7f) == 0x7f) {
          local_c = (undefined2 *)param_5;
          local_e = param_4;
          local_10 = param_3;
          puStack_14 = (undefined1 *)0xdcf0;
          local_12 = uVar12;
          iVar8 = func_0x00006608();
          *param_2 = iVar8;
          if (*(char *)0xc0e != '\0') {
            return;
          }
          if ((*param_2 != 0) || (*param_7 != 0)) {
            local_c = (undefined2 *)0xdd1a;
            func_0x0000daa6();
            bVar6 = false;
            func_0x0000c3ca();
          }
        }
        else if ((*(byte *)0xc3be & 1) == 0) {
          local_c = (undefined2 *)0xd858;
          func_0x0000daa6();
        }
        else {
          func_0x0000dc89();
        }
      }
    }
    local_ba = local_ba + 1;
  } while( true );
}



/* 3ab8:31ae  FUN_3ab8_31ae  353 bytes, 1 callers */

void __cdecl16far FUN_3ab8_31ae(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined2 *in_stack_00000034;
  undefined2 *in_stack_00000036;
  undefined1 local_12 [4];
  undefined2 *local_e;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 ***local_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x3ab8;
  local_6 = (undefined2 ***)0xdd39;
  FUN_21f2_0ebc();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xdd41;
  func_0x00029834();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xdd49;
  func_0x00029983();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xdd51;
  func_0x00029834();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xdd59;
  func_0x00029983();
  puStack_4 = (undefined2 *)local_12;
  local_6 = (undefined2 ***)&local_e;
  uStack_8 = 1;
  local_a = 0x22b2;
  uStack_c = 0xdd6a;
  FUN_1def_0338();
  puStack_4 = (undefined2 *)0x1bb4;
  local_6 = (undefined2 ***)0xdd75;
  func_0x00029834();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xdd7d;
  func_0x00029bfc();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xdd85;
  func_0x00029983();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xdd8d;
  func_0x00029834();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xdd95;
  func_0x00029bfc();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xdd9d;
  func_0x00029983();
  puStack_4 = &local_a;
  local_6 = &local_6;
  uStack_8 = 1;
  local_a = 0x22b2;
  uStack_c = 0xddae;
  FUN_1def_0338();
  uVar2 = (undefined1 *)0xfff9 < &uStack_8;
  puStack_4 = (undefined2 *)0x1bb4;
  local_6 = (undefined2 ***)0xddba;
  func_0x00029834();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xddc2;
  func_0x000297e6();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xddc7;
  func_0x00029ae7();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xddcc;
  func_0x00029d78();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xddd1;
  FUN_28b3_1181();
  if (!(bool)uVar2) {
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 ***)0xdddc;
    func_0x00029834();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 ***)0xdde4;
    func_0x000297e6();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 ***)0xdde9;
    func_0x00029ae7();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 ***)0xddee;
    func_0x00029d78();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 ***)0xddf3;
    FUN_28b3_1181();
    if (!(bool)uVar2) {
      puStack_4 = (undefined2 *)0x22b2;
      local_6 = (undefined2 ***)0xde0e;
      func_0x000297e6();
      puStack_4 = (undefined2 *)0x22b2;
      local_6 = (undefined2 ***)0xde16;
      func_0x00029b85();
      puStack_4 = (undefined2 *)0x22b2;
      local_6 = (undefined2 ***)0xde1e;
      func_0x00029983();
      goto LAB_3ab8_329e;
    }
  }
  uVar1 = *(undefined2 *)0x9482;
  *in_stack_00000034 = *(undefined2 *)0x9480;
  in_stack_00000034[1] = uVar1;
LAB_3ab8_329e:
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xde27;
  func_0x00029834();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xde2f;
  func_0x000297e6();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xde34;
  func_0x00029ae7();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xde39;
  func_0x00029d78();
  puStack_4 = (undefined2 *)0x22b2;
  local_6 = (undefined2 ***)0xde3e;
  FUN_28b3_1181();
  if (!(bool)uVar2) {
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 ***)0xde49;
    func_0x00029834();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 ***)0xde51;
    func_0x000297e6();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 ***)0xde56;
    func_0x00029ae7();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 ***)0xde5b;
    func_0x00029d78();
    puStack_4 = (undefined2 *)0x22b2;
    local_6 = (undefined2 ***)0xde60;
    FUN_28b3_1181();
    if (!(bool)uVar2) {
      puStack_4 = (undefined2 *)0x22b2;
      local_6 = (undefined2 ***)0xde7b;
      func_0x000297e6();
      puStack_4 = (undefined2 *)0x22b2;
      local_6 = (undefined2 ***)0xde83;
      func_0x00029b85();
      puStack_4 = (undefined2 *)0x22b2;
      local_6 = (undefined2 ***)0xde8b;
      func_0x00029983();
      return;
    }
  }
  uVar1 = *(undefined2 *)0x9482;
  *in_stack_00000036 = *(undefined2 *)0x9480;
  in_stack_00000036[1] = uVar1;
  return;
}



/* 3ab8:330f  FUN_3ab8_330f  3340 bytes, 0 callers */

int ** __cdecl16far
FUN_3ab8_330f(int param_1,int ****param_2,int ****param_3,int ****param_4,int ****param_5,
             int ****param_6,int ****param_7,int ****param_8,int ****param_9,int ****param_10,
             int ***param_11,int ****param_12,int ***param_13,int ****param_14,int ****param_15,
             int ***param_16,int ***param_17,undefined2 *param_18,undefined2 *param_19,int *param_20
             ,uint param_21,int ****param_22,int ****param_23,int ****param_24,int ****param_25,
             int ****param_26,int ****param_27,int ****param_28,int ****param_29,int ***param_30,
             int ****param_31,undefined2 param_32,undefined2 param_33,int param_34,
             undefined2 param_35)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int ****ppppiVar5;
  int ***pppiVar6;
  int ****ppppiVar7;
  undefined2 unaff_DS;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int ***local_62;
  int **local_60;
  int ***local_5e;
  int *local_5c;
  undefined1 local_5a [4];
  int **local_56;
  undefined2 local_54;
  undefined2 uStack_52;
  int **local_50;
  int ***local_4e;
  int **local_4c;
  int ***local_4a;
  int **local_48;
  int ***local_46;
  int **local_44;
  int ***local_42;
  int **local_40;
  int ***local_3e;
  int **ppiStack_3c;
  int ***pppiStack_3a;
  int ***pppiStack_38;
  int ***pppiStack_36;
  int ***pppiStack_34;
  int ***pppiStack_32;
  int ***pppiStack_30;
  int ***pppiStack_2e;
  int ***local_2c;
  int ***local_2a;
  int ***pppiStack_28;
  int ***pppiStack_26;
  int ***local_24;
  undefined2 local_22;
  int local_20;
  int **local_1e;
  int ***local_1c;
  int *local_1a;
  undefined2 local_18;
  int *local_16;
  int local_14;
  int *local_12;
  undefined2 local_10;
  int ***local_e;
  int ***local_c;
  int **local_a;
  int ***local_8;
  int ***local_6;
  int ***local_4;
  
  local_4 = (int ***)0x3ab8;
  uVar3 = 0x22b2;
  local_6 = (int ***)0xde9a;
  FUN_21f2_0ebc();
  local_56 = (int **)0xd8f1;
  local_3e = (int ***)0x0;
  local_40 = (int **)0x0;
  local_14 = 0;
  local_16 = (int *)0x0;
  local_1c = (int ***)0x0;
  local_1e = (int **)0x0;
  local_24 = (int ***)*(int *)0x948c;
  local_22 = *(undefined2 *)0x948e;
  local_20 = *(undefined2 *)0xc22;
  local_5c = (int *)0x0;
  local_48 = (int **)0x0;
  *(undefined2 *)0xc22 = 0;
  if ((param_15[1] == (int ***)0x0 && *param_15 == (int ***)0x0) && (*(char *)0x138 != '\0')) {
    uVar1 = *(uint *)0x148;
    iVar2 = *(int *)0x14a;
    *param_15 = (int ***)(uVar1 + 1);
    param_15[1] = (int ***)(iVar2 + (uint)(0xfffe < uVar1));
    local_44 = (int **)0x1;
    local_42 = (int ***)0x0;
    uVar4 = uVar3;
    while( true ) {
      uVar3 = uVar4;
      if ((*(int *)0x14a < (int)local_42) ||
         ((*(int *)0x14a <= (int)local_42 && ((int ***)*(undefined2 *)0x148 < local_44))))
      goto LAB_3ab8_33c4;
      local_4 = local_42;
      local_6 = (int ***)local_44;
      uVar3 = 0;
      local_a = (int **)0xdf29;
      local_8 = (int ***)uVar4;
      uVar10 = func_0x0000013f();
      if ((*(byte *)((int)uVar10 + 0x14) & 2) != 0) break;
      bVar8 = (int ***)0xfffe < local_44;
      local_44 = (int **)((int)local_44 + 1);
      local_42 = (int ***)((int)local_42 + (uint)bVar8);
      uVar4 = uVar3;
    }
    *param_15 = (int ***)local_44;
    param_15[1] = local_42;
  }
LAB_3ab8_33c4:
  local_18._0_1_ = 0;
  if (((0 < (int)param_15[1]) ||
      ((((-1 < (int)param_15[1] && (*param_15 != (int ***)0x0)) || (0 < (int)param_16[1])) ||
       ((-1 < (int)param_16[1] && (*param_16 != (int **)0x0)))))) || (0 < (int)*param_17)) {
    local_18._0_1_ = 1;
  }
  local_6 = (int ***)0xdf7c;
  local_4 = (int ***)uVar3;
  func_0x00029834();
  local_4 = (int ***)0x22b2;
  local_6 = (int ***)0xdf84;
  func_0x00029983();
  local_4 = (int ***)0x22b2;
  local_6 = (int ***)0xdf8c;
  func_0x00029834();
  local_4 = (int ***)0x22b2;
  ppppiVar5 = (int ****)0x22b2;
  local_6 = (int ***)0xdf94;
  func_0x00029983();
  local_12 = (int *)*param_13;
  local_60 = (int **)*(undefined2 *)0x148;
  local_5e = (int ***)*(int *)0x14a;
  local_2c = (int ***)*(int *)0x14c;
  local_2a = (int ***)*(int *)0x14e;
  local_50 = local_60;
  local_4e = local_5e;
  local_4c = local_60;
  local_4a = local_5e;
LAB_3ab8_3457:
  *(undefined2 *)0xc18 = 0;
  *(undefined1 *)0xc0e = 0;
  *(undefined2 *)0xc20 = 1;
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xa4a = 1;
  if (param_1 == 0) {
    *(undefined2 *)0xa48 = 2;
  }
  local_4 = (int ***)param_14;
  local_6 = param_13;
  local_8 = (int ***)param_12;
  local_a = (int **)param_11;
  local_c = (int ***)param_10;
  local_10 = 0xe00e;
  local_e = (int ***)ppppiVar5;
  local_1a = (int *)func_0x00006608();
  ppppiVar5 = (int ****)0x3bf;
LAB_3ab8_3494:
  do {
    do {
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(char *)0xc0e != '\0') {
        local_3e = (int ***)0x0;
        local_40 = (int **)0x0;
        local_14 = 0;
        local_16 = (int *)0x0;
        local_48 = (int **)0x0;
        local_20 = 0;
        local_60 = (int **)*(undefined2 *)0x148;
        local_5e = (int ***)*(int *)0x14a;
        local_2c = (int ***)*(int *)0x14c;
        local_2a = (int ***)*(int *)0x14e;
        local_50 = local_60;
        local_4e = local_5e;
        local_4c = local_60;
        local_4a = local_5e;
      }
      *(undefined2 *)0xbc0 = 1;
      *(undefined1 *)0xc0e = 0;
      if (((*(int *)0x158 != 0) || ((int **)local_1a != (int **)0x0)) || (*param_14 != (int ***)0x0)
         ) {
        local_4 = (int ***)0x0;
        local_8 = (int ***)0xe087;
        local_6 = (int ***)ppppiVar5;
        func_0x0000daa6();
        local_4 = (int ***)0x885;
        local_6 = (int ***)0xe08d;
        func_0x0000c3ca();
        *(undefined2 *)0xc20 = 0;
        local_4 = (int ***)0x885;
        local_6 = (int ***)0xe09b;
        func_0x000297e6();
        local_4 = (int ***)0x22b2;
        local_6 = (int ***)0xe0a0;
        func_0x00029d78();
        local_c = (int ***)0x22b2;
        local_e = (int ***)0xe0aa;
        func_0x000299d1();
        local_c = (int ***)0x22b2;
        local_e = (int ***)0xe0b2;
        func_0x000297e6();
        local_c = (int ***)0x22b2;
        local_e = (int ***)0xe0b7;
        func_0x00029d78();
        local_14 = 0x22b2;
        local_16 = (int *)0xe0c1;
        func_0x000299d1();
        local_14 = 0x22b2;
        local_16 = (int *)0xe0c9;
        func_0x000297e6();
        local_14 = 0x22b2;
        local_16 = (int *)0xe0ce;
        func_0x00029d78();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe0d8;
        func_0x000299d1();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe0e0;
        func_0x000297e6();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe0e5;
        func_0x00029d78();
        local_24 = (int ***)0x22b2;
        pppiStack_26 = (int ***)0xe0ef;
        func_0x000299d1();
        local_24 = (int ***)param_9;
        pppiStack_26 = (int ***)param_8;
        pppiStack_28 = (int ***)param_7;
        local_2a = (int ***)param_6;
        local_2c = (int ***)param_5;
        pppiStack_2e = (int ***)param_4;
        pppiStack_30 = (int ***)param_3;
        pppiStack_32 = (int ***)param_2;
        pppiStack_34 = &local_40;
        pppiStack_36 = &local_60;
        pppiStack_38 = (int ***)param_15;
        pppiStack_3a = (int ***)param_14;
        ppiStack_3c = (int **)param_13;
        local_3e = (int ***)param_12;
        local_40 = (int **)param_11;
        local_42 = (int ***)param_10;
        local_44 = &local_1a;
        local_46 = (int ***)0xffff;
        local_48 = (int **)0xffff;
        local_4a = (int ***)0x22b2;
        local_4c = (int **)0xe130;
        FUN_3ab8_096d();
        local_4 = (int ***)param_33;
        local_6 = (int ***)param_32;
        local_8 = (int ***)param_31;
        local_a = (int **)param_30;
        local_c = (int ***)0x22b2;
        local_e = (int ***)0xe147;
        func_0x000297e6();
        local_c = (int ***)0x22b2;
        local_e = (int ***)0xe14c;
        func_0x00029d78();
        local_14 = 0x22b2;
        local_16 = (int *)0xe156;
        func_0x000299d1();
        local_14 = 0x22b2;
        local_16 = (int *)0xe15e;
        func_0x000297e6();
        local_14 = 0x22b2;
        local_16 = (int *)0xe163;
        func_0x00029d78();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe16d;
        func_0x000299d1();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe175;
        func_0x000297e6();
        local_1c = (int ***)0x22b2;
        local_1e = (int **)0xe17a;
        func_0x00029d78();
        local_24 = (int ***)0x22b2;
        pppiStack_26 = (int ***)0xe184;
        func_0x000299d1();
        local_24 = (int ***)0x22b2;
        pppiStack_26 = (int ***)0xe18c;
        func_0x000297e6();
        local_24 = (int ***)0x22b2;
        pppiStack_26 = (int ***)0xe191;
        func_0x00029d78();
        local_2c = (int ***)0x22b2;
        pppiStack_2e = (int ***)0xe19b;
        func_0x000299d1();
        local_2c = (int ***)param_9;
        pppiStack_2e = (int ***)param_8;
        pppiStack_30 = (int ***)param_7;
        pppiStack_32 = (int ***)param_6;
        pppiStack_34 = (int ***)param_5;
        pppiStack_36 = (int ***)param_4;
        pppiStack_38 = (int ***)param_3;
        pppiStack_3a = (int ***)param_2;
        ppiStack_3c = &local_16;
        local_3e = (int ***)&local_2c;
        local_40 = (int **)param_16;
        local_42 = (int ***)param_14;
        local_44 = (int **)param_13;
        local_46 = (int ***)param_12;
        local_48 = (int **)param_11;
        local_4a = (int ***)param_10;
        local_4c = &local_1a;
        local_4e = (int ***)0xffff;
        local_50 = (int **)0xffff;
        uStack_52 = 0x22b2;
        local_54 = 0xe1dc;
        FUN_3ab8_1ce8();
        local_4 = (int ***)param_35;
        local_6 = (int ***)0x22b2;
        local_8 = (int ***)0xe1ea;
        func_0x000297e6();
        local_6 = (int ***)0x22b2;
        local_8 = (int ***)0xe1ef;
        func_0x00029d78();
        local_e = (int ***)0x22b2;
        local_10 = 0xe1f9;
        func_0x000299d1();
        local_e = (int ***)0x22b2;
        local_10 = 0xe201;
        func_0x000297e6();
        local_e = (int ***)0x22b2;
        local_10 = 0xe206;
        func_0x00029d78();
        local_16 = (int *)0x22b2;
        local_18 = 0xe210;
        func_0x000299d1();
        local_16 = (int *)0x22b2;
        local_18 = 0xe218;
        func_0x000297e6();
        local_16 = (int *)0x22b2;
        local_18 = 0xe21d;
        func_0x00029d78();
        local_1e = (int **)0x22b2;
        local_20 = 0xe227;
        func_0x000299d1();
        local_1e = (int **)0x22b2;
        local_20 = 0xe22f;
        func_0x000297e6();
        local_1e = (int **)0x22b2;
        local_20 = -0x1dcc;
        func_0x00029d78();
        pppiStack_26 = (int ***)0x22b2;
        pppiStack_28 = (int ***)0xe23e;
        func_0x000299d1();
        pppiStack_26 = (int ***)param_9;
        pppiStack_28 = (int ***)param_8;
        local_2a = (int ***)param_7;
        local_2c = (int ***)param_6;
        pppiStack_2e = (int ***)param_5;
        pppiStack_30 = (int ***)param_4;
        pppiStack_32 = (int ***)param_3;
        pppiStack_34 = (int ***)param_2;
        pppiStack_36 = &local_48;
        pppiStack_38 = &local_4c;
        pppiStack_3a = &local_50;
        ppiStack_3c = (int **)param_17;
        local_3e = (int ***)param_14;
        local_40 = (int **)param_13;
        local_42 = (int ***)param_12;
        local_44 = (int **)param_11;
        local_46 = (int ***)param_10;
        local_48 = &local_1a;
        local_4a = (int ***)0xffff;
        local_4c = (int **)0x22b2;
        local_4e = (int ***)0xe280;
        FUN_3ab8_2ad5();
        if (local_20 != 0) {
          local_4 = (int ***)0x2;
          local_6 = (int ***)0x11;
          local_8 = (int ***)0x22b2;
          local_a = (int **)0xe296;
          FUN_1000_0599();
          local_4 = (int ***)0xdef;
          local_6 = (int ***)0xe29d;
          func_0x00010526();
        }
        if (*(int *)0x158 != 0) {
          local_1a = (int *)0xfba9;
        }
        return (int **)local_1a;
      }
      if ((param_34 == 0) || ((*param_10 == (int ***)local_56 && (*param_11 == (int **)local_5c))))
      goto LAB_3ab8_3457;
      local_6 = (int ***)0xe2d8;
      local_4 = (int ***)ppppiVar5;
      func_0x000297e6();
      local_4 = (int ***)0x22b2;
      local_6 = (int ***)0xe2dd;
      func_0x00029d78();
      local_c = (int ***)0x22b2;
      local_e = (int ***)0xe2e7;
      func_0x000299d1();
      local_c = (int ***)0x22b2;
      local_e = (int ***)0xe2ef;
      func_0x000297e6();
      local_c = (int ***)0x22b2;
      local_e = (int ***)0xe2f4;
      func_0x00029d78();
      local_14 = 0x22b2;
      local_16 = (int *)0xe2fe;
      func_0x000299d1();
      local_14 = 0x22b2;
      local_16 = (int *)0xe306;
      func_0x000297e6();
      local_14 = 0x22b2;
      local_16 = (int *)0xe30b;
      func_0x00029d78();
      local_1c = (int ***)0x22b2;
      local_1e = (int **)0xe315;
      func_0x000299d1();
      local_1c = (int ***)0x22b2;
      local_1e = (int **)0xe31d;
      func_0x000297e6();
      local_1c = (int ***)0x22b2;
      local_1e = (int **)0xe322;
      func_0x00029d78();
      local_24 = (int ***)0x22b2;
      ppppiVar5 = (int ****)0x22b2;
      pppiStack_26 = (int ***)0xe32c;
      func_0x000299d1();
      local_24 = (int ***)param_9;
      pppiStack_26 = (int ***)param_8;
      pppiStack_28 = (int ***)param_7;
      local_2a = (int ***)param_6;
      local_2c = (int ***)param_5;
      pppiStack_2e = (int ***)param_4;
      pppiStack_30 = (int ***)param_3;
      pppiStack_32 = (int ***)param_2;
      pppiStack_34 = &local_40;
      pppiStack_36 = &local_60;
      pppiStack_38 = (int ***)param_15;
      pppiStack_3a = (int ***)param_14;
      ppiStack_3c = (int **)param_13;
      local_3e = (int ***)param_12;
      local_40 = (int **)param_11;
      local_42 = (int ***)param_10;
      local_44 = &local_1a;
      local_46 = (int ***)0x0;
      local_48 = (int **)0x0;
      local_4a = (int ***)0x22b2;
      local_4c = (int **)0xe36a;
      FUN_3ab8_096d();
    } while (*(char *)0xc0e != '\0');
    local_4 = (int ***)param_33;
    local_6 = (int ***)param_32;
    local_8 = (int ***)param_31;
    local_a = (int **)param_30;
    local_c = (int ***)0x22b2;
    local_e = (int ***)0xe38b;
    func_0x000297e6();
    local_c = (int ***)0x22b2;
    local_e = (int ***)0xe390;
    func_0x00029d78();
    local_14 = 0x22b2;
    local_16 = (int *)0xe39a;
    func_0x000299d1();
    local_14 = 0x22b2;
    local_16 = (int *)0xe3a2;
    func_0x000297e6();
    local_14 = 0x22b2;
    local_16 = (int *)0xe3a7;
    func_0x00029d78();
    local_1c = (int ***)0x22b2;
    local_1e = (int **)0xe3b1;
    func_0x000299d1();
    local_1c = (int ***)0x22b2;
    local_1e = (int **)0xe3b9;
    func_0x000297e6();
    local_1c = (int ***)0x22b2;
    local_1e = (int **)0xe3be;
    func_0x00029d78();
    local_24 = (int ***)0x22b2;
    pppiStack_26 = (int ***)0xe3c8;
    func_0x000299d1();
    local_24 = (int ***)0x22b2;
    pppiStack_26 = (int ***)0xe3d0;
    func_0x000297e6();
    local_24 = (int ***)0x22b2;
    pppiStack_26 = (int ***)0xe3d5;
    func_0x00029d78();
    local_2c = (int ***)0x22b2;
    pppiStack_2e = (int ***)0xe3df;
    func_0x000299d1();
    local_2c = (int ***)param_9;
    pppiStack_2e = (int ***)param_8;
    pppiStack_30 = (int ***)param_7;
    pppiStack_32 = (int ***)param_6;
    pppiStack_34 = (int ***)param_5;
    pppiStack_36 = (int ***)param_4;
    pppiStack_38 = (int ***)param_3;
    pppiStack_3a = (int ***)param_2;
    ppiStack_3c = &local_16;
    local_3e = (int ***)&local_2c;
    local_40 = (int **)param_16;
    local_42 = (int ***)param_14;
    local_44 = (int **)param_13;
    local_46 = (int ***)param_12;
    local_48 = (int **)param_11;
    local_4a = (int ***)param_10;
    local_4c = &local_1a;
    local_4e = (int ***)0x0;
    local_50 = (int **)0x0;
    uStack_52 = 0x22b2;
    local_54 = 0xe41d;
    FUN_3ab8_1ce8();
    if (*(char *)0xc0e == '\0') {
      local_4 = (int ***)param_35;
      local_6 = (int ***)0x22b2;
      local_8 = (int ***)0xe435;
      func_0x000297e6();
      local_6 = (int ***)0x22b2;
      local_8 = (int ***)0xe43a;
      func_0x00029d78();
      local_e = (int ***)0x22b2;
      local_10 = 0xe444;
      func_0x000299d1();
      local_e = (int ***)0x22b2;
      local_10 = 0xe44c;
      func_0x000297e6();
      local_e = (int ***)0x22b2;
      local_10 = 0xe451;
      func_0x00029d78();
      local_16 = (int *)0x22b2;
      local_18 = 0xe45b;
      func_0x000299d1();
      local_16 = (int *)0x22b2;
      local_18 = 0xe463;
      func_0x000297e6();
      local_16 = (int *)0x22b2;
      local_18 = 0xe468;
      func_0x00029d78();
      local_1e = (int **)0x22b2;
      local_20 = 0xe472;
      func_0x000299d1();
      local_1e = (int **)0x22b2;
      local_20 = 0xe47a;
      func_0x000297e6();
      local_1e = (int **)0x22b2;
      local_20 = 0xe47f;
      func_0x00029d78();
      pppiStack_26 = (int ***)0x22b2;
      ppppiVar5 = (int ****)0x22b2;
      pppiStack_28 = (int ***)0xe489;
      func_0x000299d1();
      pppiStack_26 = (int ***)param_9;
      pppiStack_28 = (int ***)param_8;
      local_2a = (int ***)param_7;
      local_2c = (int ***)param_6;
      pppiStack_2e = (int ***)param_5;
      pppiStack_30 = (int ***)param_4;
      pppiStack_32 = (int ***)param_3;
      pppiStack_34 = (int ***)param_2;
      pppiStack_36 = &local_48;
      pppiStack_38 = &local_4c;
      pppiStack_3a = &local_50;
      ppiStack_3c = (int **)param_17;
      local_3e = (int ***)param_14;
      local_40 = (int **)param_13;
      local_42 = (int ***)param_12;
      local_44 = (int **)param_11;
      local_46 = (int ***)param_10;
      local_48 = &local_1a;
      local_4a = (int ***)0x0;
      local_4c = (int **)0x22b2;
      local_4e = (int ***)0xe4ca;
      FUN_3ab8_2ad5();
      if (((*(char *)0xc0e == '\0') && ((int **)local_1a == (int **)0x0)) &&
         (*param_14 == (int ***)0x0)) {
        if ((int)*param_11 <= *(int *)0xa5e) goto LAB_3ab8_3457;
        local_56 = (int **)*param_10;
        local_5c = (int *)*param_11;
        if (param_1 == 0) {
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe510;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe515;
          func_0x00029d78();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe51d;
          func_0x00029bfc();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe525;
          func_0x00029983();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe52d;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe532;
          func_0x00029d78();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe53a;
          func_0x00029bfc();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe542;
          func_0x00029983();
          if (param_21 == 0) goto LAB_3ab8_39c8;
          local_4 = (int ***)&local_e;
          local_6 = &local_a;
          local_8 = (int ***)0x1;
          local_a = (int **)0x22b2;
          pppiVar6 = (int ***)0x1bb4;
          local_c = (int ***)0xe55c;
          FUN_1def_0338();
          if (param_21 == 1) {
            local_e = (int ***)*(int *)0x943c;
            local_c = (int ***)*(undefined2 *)0x943e;
          }
          if (param_21 == 2) {
            local_a = (int **)*(undefined2 *)0x943c;
            local_8 = (int ***)*(undefined2 *)0x943e;
          }
          uVar9 = param_21 < 3;
          if (param_21 == 3) {
            local_4 = (int ***)0x1bb4;
            local_6 = (int ***)0xe593;
            func_0x000297e6();
            local_4 = (int ***)0x22b2;
            local_6 = (int ***)0xe598;
            func_0x00029ae7();
            local_4 = (int ***)0x22b2;
            local_6 = (int ***)0xe5a0;
            func_0x000297e6();
            local_4 = (int ***)0x22b2;
            local_6 = (int ***)0xe5a5;
            func_0x00029ae7();
            local_4 = (int ***)0x22b2;
            pppiVar6 = (int ***)0x22b2;
            local_6 = (int ***)0xe5aa;
            FUN_28b3_1181();
            if ((bool)uVar9) {
              local_e = (int ***)*(int *)0x943c;
            }
          }
          local_4 = (int ***)&local_e;
          local_6 = &local_a;
          local_8 = (int ***)0x0;
          ppppiVar7 = (int ****)0x1bb4;
          local_c = (int ***)0xe5d8;
          local_a = (int **)pppiVar6;
          FUN_1def_0338();
        }
        else {
LAB_3ab8_39c8:
          ppppiVar7 = (int ****)0x22b2;
        }
        if (param_1 == 2) {
          local_6 = (int ***)0xe5ec;
          local_4 = (int ***)ppppiVar7;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe5f4;
          func_0x00029bfc();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe5fc;
          func_0x00029983();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe604;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe60c;
          func_0x00029bfc();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe614;
          func_0x00029983();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe61c;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe624;
          func_0x00029983();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe62c;
          func_0x000297e6();
          local_4 = (int ***)0x22b2;
          local_6 = (int ***)0xe634;
          func_0x00029983();
          local_4 = (int ***)local_5a;
          local_6 = (int ***)&local_54;
          local_8 = (int ***)0x22b2;
          local_a = (int **)0xe644;
          func_0x000297e6();
          local_8 = (int ***)0x22b2;
          local_a = (int **)0xe649;
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = (int *)0xe653;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = (int *)0xe65b;
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = (int *)0xe660;
          func_0x00029d78();
          local_18 = 0x22b2;
          local_1a = (int *)0xe66a;
          func_0x000299d1();
          local_18 = 0x22b2;
          local_1a = (int *)0xe672;
          func_0x000297e6();
          local_20 = 0x22b2;
          local_22 = 0xe67c;
          func_0x000299d1();
          local_20 = 0x22b2;
          local_22 = 0xe684;
          func_0x000297e6();
          pppiStack_28 = (int ***)0x22b2;
          ppppiVar7 = (int ****)0x22b2;
          local_2a = (int ***)0xe68e;
          func_0x000299d1();
          pppiStack_28 = (int ***)param_29;
          local_2a = (int ***)param_28;
          local_2c = (int ***)param_27;
          pppiStack_2e = (int ***)param_26;
          pppiStack_30 = (int ***)param_25;
          pppiStack_32 = (int ***)param_24;
          pppiStack_34 = (int ***)param_23;
          pppiStack_36 = (int ***)param_22;
          pppiStack_38 = (int ***)0x22b2;
          pppiStack_3a = (int ***)0xe6aa;
          FUN_3ab8_31ae();
        }
        *(undefined2 *)0xa4a = 1;
        if (param_1 == 0) {
          *(undefined2 *)0xa48 = 2;
        }
        local_4 = (int ***)param_14;
        local_6 = param_13;
        local_8 = (int ***)param_12;
        local_a = (int **)param_11;
        local_c = (int ***)param_10;
        ppppiVar5 = (int ****)0x3bf;
        local_10 = 0xe6d3;
        local_e = (int ***)ppppiVar7;
        local_1a = (int *)func_0x00006608();
        local_3e = (int ***)0x0;
        local_40 = (int **)0x0;
        local_60 = (int **)*(undefined2 *)0x148;
        local_5e = (int ***)*(int *)0x14a;
        local_1e = (int **)0x1;
        local_1c = (int ***)0x0;
        if (param_15[1] != (int ***)0x0 || *param_15 != (int ***)0x0) {
          local_1e = (int **)*param_15;
          local_1c = param_15[1];
        }
        local_42 = local_1c;
        for (local_44 = local_1e;
            ((int)local_42 <= (int)param_18[1] &&
            (((int)local_42 < (int)param_18[1] || (local_44 <= (int ***)*param_18))));
            local_44 = (int **)((int)local_44 + 1)) {
          if ((((int **)local_1a != (int **)0x0) || (*param_14 != (int ***)0x0)) ||
             (((*param_10 != (int ***)local_56 || (*param_11 != (int **)local_5c)) &&
              ((char)local_18 != '\0')))) goto LAB_3ab8_3494;
          local_4 = local_42;
          local_6 = (int ***)local_44;
          ppppiVar7 = (int ****)0x0;
          local_a = (int **)0xe743;
          local_8 = (int ***)ppppiVar5;
          uVar10 = func_0x0000013f();
          if ((*(byte *)((int)uVar10 + 0x14) & 2) == 0) {
            ppppiVar5 = ppppiVar7;
            if (((byte)local_44 & 0x7f) == 0x7f) goto LAB_3ab8_3bd9;
          }
          else {
            if (param_15[1] == (int ***)0x0 && *param_15 == (int ***)0x0) {
              *param_15 = (int ***)local_44;
              param_15[1] = local_42;
              if ((char)local_18 == '\0') goto LAB_3ab8_3c47;
            }
            local_4 = (int ***)0x0;
            local_6 = (int ***)0xe7db;
            func_0x000297e6();
            local_4 = (int ***)0x22b2;
            local_6 = (int ***)0xe7e0;
            func_0x00029d78();
            local_c = (int ***)0x22b2;
            local_e = (int ***)0xe7ea;
            func_0x000299d1();
            local_c = (int ***)0x22b2;
            local_e = (int ***)0xe7f2;
            func_0x000297e6();
            local_c = (int ***)0x22b2;
            local_e = (int ***)0xe7f7;
            func_0x00029d78();
            local_14 = 0x22b2;
            local_16 = (int *)0xe801;
            func_0x000299d1();
            local_14 = 0x22b2;
            local_16 = (int *)0xe809;
            func_0x000297e6();
            local_14 = 0x22b2;
            local_16 = (int *)0xe80e;
            func_0x00029d78();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe818;
            func_0x000299d1();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe820;
            func_0x000297e6();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe825;
            func_0x00029d78();
            local_24 = (int ***)0x22b2;
            ppppiVar7 = (int ****)0x22b2;
            pppiStack_26 = (int ***)0xe82f;
            func_0x000299d1();
            local_24 = (int ***)param_9;
            pppiStack_26 = (int ***)param_8;
            pppiStack_28 = (int ***)param_7;
            local_2a = (int ***)param_6;
            local_2c = (int ***)param_5;
            pppiStack_2e = (int ***)param_4;
            pppiStack_30 = (int ***)param_3;
            pppiStack_32 = (int ***)param_2;
            pppiStack_34 = &local_40;
            pppiStack_36 = &local_60;
            pppiStack_38 = (int ***)param_15;
            pppiStack_3a = (int ***)param_14;
            ppiStack_3c = (int **)param_13;
            local_3e = (int ***)param_12;
            local_40 = (int **)param_11;
            local_42 = (int ***)param_10;
            local_48 = &local_1a;
            local_46 = (int ***)param_10;
            local_4a = (int ***)0x22b2;
            local_4c = (int **)0xe86f;
            local_44 = local_48;
            FUN_3ab8_096d();
LAB_3ab8_3bd9:
            local_4 = (int ***)param_14;
            local_6 = param_13;
            local_8 = (int ***)param_12;
            local_a = (int **)param_11;
            local_c = (int ***)param_10;
            ppppiVar5 = (int ****)0x3bf;
            local_10 = 0xe76d;
            local_e = (int ***)ppppiVar7;
            local_1a = (int *)func_0x00006608();
          }
          local_42 = (int ***)((int)local_42 + (uint)((int ***)0xfffe < local_44));
        }
        *param_18 = local_40;
        param_18[1] = local_3e;
        local_14 = 0;
        local_16 = (int *)0x0;
        local_2c = (int ***)*(int *)0x14c;
        local_2a = (int ***)*(int *)0x14e;
        local_1e = (int **)0x1;
        local_1c = (int ***)0x0;
        if (param_16[1] != (int **)0x0 || *param_16 != (int **)0x0) {
          local_1e = *param_16;
          local_1c = (int ***)param_16[1];
        }
        local_42 = local_1c;
        for (local_44 = local_1e;
            ((int)local_42 <= (int)param_19[1] &&
            (((int)local_42 < (int)param_19[1] || (local_44 <= (int ***)*param_19))));
            local_44 = (int **)((int)local_44 + 1)) {
          if ((((int **)local_1a != (int **)0x0) || (*param_14 != (int ***)0x0)) ||
             (((*param_10 != (int ***)local_56 || (*param_11 != (int **)local_5c)) &&
              ((char)local_18 != '\0')))) goto LAB_3ab8_3494;
          local_4 = local_42;
          local_6 = (int ***)local_44;
          ppppiVar7 = (int ****)0x0;
          local_a = (int **)0xe8ea;
          local_8 = (int ***)ppppiVar5;
          uVar10 = func_0x00000271();
          if ((*(byte *)((int)uVar10 + 0x1e) & 2) == 0) {
            ppppiVar5 = ppppiVar7;
            if (((byte)local_44 & 0x7f) == 0x7f) goto LAB_3ab8_3d80;
          }
          else {
            if (param_16[1] == (int **)0x0 && *param_16 == (int **)0x0) {
              *param_16 = local_44;
              param_16[1] = (int **)local_42;
              if ((char)local_18 == '\0') goto LAB_3ab8_3c47;
            }
            local_4 = (int ***)param_33;
            local_6 = (int ***)param_32;
            local_8 = (int ***)param_31;
            local_a = (int **)param_30;
            local_c = (int ***)0x0;
            local_e = (int ***)0xe985;
            func_0x000297e6();
            local_c = (int ***)0x22b2;
            local_e = (int ***)0xe98a;
            func_0x00029d78();
            local_14 = 0x22b2;
            local_16 = (int *)0xe994;
            func_0x000299d1();
            local_14 = 0x22b2;
            local_16 = (int *)0xe99c;
            func_0x000297e6();
            local_14 = 0x22b2;
            local_16 = (int *)0xe9a1;
            func_0x00029d78();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe9ab;
            func_0x000299d1();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe9b3;
            func_0x000297e6();
            local_1c = (int ***)0x22b2;
            local_1e = (int **)0xe9b8;
            func_0x00029d78();
            local_24 = (int ***)0x22b2;
            pppiStack_26 = (int ***)0xe9c2;
            func_0x000299d1();
            local_24 = (int ***)0x22b2;
            pppiStack_26 = (int ***)0xe9ca;
            func_0x000297e6();
            local_24 = (int ***)0x22b2;
            pppiStack_26 = (int ***)0xe9cf;
            func_0x00029d78();
            local_2c = (int ***)0x22b2;
            ppppiVar7 = (int ****)0x22b2;
            pppiStack_2e = (int ***)0xe9d9;
            func_0x000299d1();
            local_2c = (int ***)param_9;
            pppiStack_2e = (int ***)param_8;
            pppiStack_30 = (int ***)param_7;
            pppiStack_32 = (int ***)param_6;
            pppiStack_34 = (int ***)param_5;
            pppiStack_36 = (int ***)param_4;
            pppiStack_38 = (int ***)param_3;
            pppiStack_3a = (int ***)param_2;
            ppiStack_3c = &local_16;
            local_3e = (int ***)&local_2c;
            local_40 = (int **)param_16;
            local_42 = (int ***)param_14;
            local_44 = (int **)param_13;
            local_46 = (int ***)param_12;
            local_48 = (int **)param_11;
            local_4a = (int ***)param_10;
            local_4c = &local_1a;
            local_4e = (int ***)param_14;
            local_50 = (int **)param_13;
            uStack_52 = 0x22b2;
            local_54 = 0xea19;
            FUN_3ab8_1ce8();
LAB_3ab8_3d80:
            local_4 = (int ***)param_14;
            local_6 = param_13;
            local_8 = (int ***)param_12;
            local_a = (int **)param_11;
            local_c = (int ***)param_10;
            ppppiVar5 = (int ****)0x3bf;
            local_10 = 0xe914;
            local_e = (int ***)ppppiVar7;
            local_1a = (int *)func_0x00006608();
          }
          local_42 = (int ***)((int)local_42 + (uint)((int ***)0xfffe < local_44));
        }
        *param_19 = local_16;
        param_19[1] = local_14;
        local_48 = (int **)0x0;
        local_4c = local_60;
        local_4a = local_5e;
        local_50 = local_60;
        local_4e = local_5e;
        local_62 = (int ***)0x1;
        if (*param_17 != (int **)0x0) {
          local_62 = (int ***)*param_17;
        }
        local_46 = local_62;
        while( true ) {
          if (*param_20 < (int)local_46) {
            *param_20 = (int)local_48;
            goto LAB_3ab8_3457;
          }
          if ((((int **)local_1a != (int **)0x0) || (*param_14 != (int ***)0x0)) ||
             (((*param_10 != (int ***)local_56 || (*param_11 != (int **)local_5c)) &&
              ((char)local_18 != '\0')))) break;
          local_4 = local_46;
          ppppiVar7 = (int ****)0x0;
          local_8 = (int ***)0xea80;
          local_6 = (int ***)ppppiVar5;
          uVar10 = func_0x00000398();
          if ((*(byte *)((int)uVar10 + 0x16) & 2) == 0) {
            ppppiVar5 = ppppiVar7;
            if (((byte)local_46 & 0x7f) == 0x7f) goto LAB_3ab8_3f15;
          }
          else {
            if (*param_17 == (int **)0x0) {
              *param_17 = (int **)local_46;
              if ((char)local_18 == '\0') goto LAB_3ab8_3c47;
            }
            local_4 = (int ***)param_35;
            local_6 = (int ***)0x0;
            local_8 = (int ***)0xeaf4;
            func_0x000297e6();
            local_6 = (int ***)0x22b2;
            local_8 = (int ***)0xeaf9;
            func_0x00029d78();
            local_e = (int ***)0x22b2;
            local_10 = 0xeb03;
            func_0x000299d1();
            local_e = (int ***)0x22b2;
            local_10 = 0xeb0b;
            func_0x000297e6();
            local_e = (int ***)0x22b2;
            local_10 = 0xeb10;
            func_0x00029d78();
            local_16 = (int *)0x22b2;
            local_18 = 0xeb1a;
            func_0x000299d1();
            local_16 = (int *)0x22b2;
            local_18 = 0xeb22;
            func_0x000297e6();
            local_16 = (int *)0x22b2;
            local_18 = 0xeb27;
            func_0x00029d78();
            local_1e = (int **)0x22b2;
            local_20 = 0xeb31;
            func_0x000299d1();
            local_1e = (int **)0x22b2;
            local_20 = 0xeb39;
            func_0x000297e6();
            local_1e = (int **)0x22b2;
            local_20 = 0xeb3e;
            func_0x00029d78();
            pppiStack_26 = (int ***)0x22b2;
            ppppiVar7 = (int ****)0x22b2;
            pppiStack_28 = (int ***)0xeb48;
            func_0x000299d1();
            pppiStack_26 = (int ***)param_9;
            pppiStack_28 = (int ***)param_8;
            local_2a = (int ***)param_7;
            local_2c = (int ***)param_6;
            pppiStack_2e = (int ***)param_5;
            pppiStack_30 = (int ***)param_4;
            pppiStack_32 = (int ***)param_3;
            pppiStack_34 = (int ***)param_2;
            pppiStack_36 = &local_48;
            pppiStack_38 = &local_4c;
            pppiStack_3a = &local_50;
            ppiStack_3c = (int **)param_17;
            local_3e = (int ***)param_14;
            local_40 = (int **)param_13;
            local_42 = (int ***)param_12;
            local_44 = (int **)param_11;
            local_46 = (int ***)param_10;
            local_48 = &local_1a;
            local_4a = (int ***)param_10;
            local_4c = (int **)0x22b2;
            local_4e = (int ***)0xeb89;
            FUN_3ab8_2ad5();
LAB_3ab8_3f15:
            local_4 = (int ***)param_14;
            local_6 = param_13;
            local_8 = (int ***)param_12;
            local_a = (int **)param_11;
            local_c = (int ***)param_10;
            ppppiVar5 = (int ****)0x3bf;
            local_10 = 0xeaa9;
            local_e = (int ***)ppppiVar7;
            local_1a = (int *)func_0x00006608();
          }
          local_46 = (int ***)((int)local_46 + 1);
        }
        goto LAB_3ab8_3494;
      }
    }
    ppppiVar5 = (int ****)0x22b2;
  } while( true );
LAB_3ab8_3c47:
  ppppiVar5 = (int ****)0x0;
  local_18 = CONCAT11(local_18._1_1_,1);
  local_56 = (int **)0xd8f1;
  goto LAB_3ab8_3494;
}



/* 3ab8:401b  FUN_3ab8_401b  105 bytes, 1 callers */

int __cdecl16far FUN_3ab8_401b(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  int local_4;
  
  FUN_21f2_0ebc();
  *(undefined1 *)0x1062 = 0;
  if (param_1 == 1) {
    uVar2 = (int)*(uint *)0xb310 >> 0xf;
    local_4 = param_2 % 0x10 +
              (((int)((*(uint *)0xb310 ^ uVar2) - uVar2) >> 4 ^ uVar2) - uVar2) * 0x10;
  }
  else {
    if (param_1 == 2) {
      return *(int *)0xb310;
    }
    local_4 = param_2;
  }
  iVar1 = func_0x00008854(0x22b2);
  if (iVar1 != 0) {
    local_4 = *(int *)0xb310;
  }
  return local_4;
}



/* 3ab8:4084  FUN_3ab8_4084  2637 bytes, 0 callers */

void __cdecl16far
FUN_3ab8_4084(undefined2 *param_1,undefined2 param_2,int param_3,int param_4,undefined2 *param_5,
             undefined2 *param_6,undefined2 *param_7,undefined2 *param_8,undefined2 *param_9,
             undefined2 *param_10,undefined2 *param_11,undefined2 *param_12,undefined2 *param_13,
             undefined2 *param_14,undefined2 *param_15,undefined2 *param_16,undefined2 *param_17,
             undefined2 *param_18,undefined2 *param_19,undefined2 *param_20,undefined2 *param_21,
             undefined2 *param_22,undefined2 *param_23,undefined2 *param_24,undefined2 *param_25,
             undefined2 *param_26,undefined2 *param_27,undefined2 *param_28,undefined2 *param_29,
             undefined2 *param_30,undefined2 param_31)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 **ppuVar3;
  undefined1 uVar4;
  int iVar5;
  uint unaff_SI;
  undefined2 *puVar6;
  undefined2 **ppuVar7;
  undefined2 **ppuVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar11;
  undefined2 *puVar12;
  undefined2 *local_17c;
  undefined1 local_178 [4];
  uint local_174;
  int local_172;
  undefined1 local_170 [4];
  int local_16c;
  int local_16a;
  int local_168;
  uint local_166;
  int local_164;
  uint local_162;
  int local_160;
  int local_15e;
  int local_15c;
  undefined2 local_15a [8];
  undefined1 local_14a;
  byte local_149;
  undefined2 local_144 [13];
  undefined1 local_12a;
  byte local_129;
  undefined2 local_124 [8];
  undefined1 local_114;
  byte local_113;
  undefined1 local_112;
  byte local_110;
  undefined2 local_10e [13];
  undefined1 local_f4;
  byte local_f3;
  undefined1 local_f2;
  undefined2 local_ee [84];
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 *puStack_42;
  undefined2 *puStack_40;
  undefined2 *puStack_3e;
  undefined2 *puStack_3c;
  undefined2 *puStack_3a;
  undefined2 *puStack_38;
  undefined2 *puStack_36;
  undefined2 *puStack_34;
  undefined2 *puStack_32;
  undefined2 *puStack_30;
  undefined2 *puStack_2e;
  undefined2 *puStack_2c;
  undefined2 *puStack_2a;
  undefined2 *puStack_26;
  undefined2 *puStack_24;
  undefined2 *puStack_22;
  undefined2 *puStack_1c;
  undefined2 *puStack_1a;
  undefined2 *puStack_18;
  undefined2 *puStack_16;
  undefined2 *puStack_12;
  undefined2 *puStack_10;
  undefined2 *local_e;
  undefined2 **ppuStack_c;
  byte bVar13;
  
  FUN_21f2_0ebc();
  local_174 = *(uint *)0x148;
  local_172 = *(int *)0x14a;
  local_162 = *(uint *)0x14c;
  local_160 = *(int *)0x14e;
  local_15c = *(int *)0x150;
  local_16c = *(int *)0x152;
  local_164 = 0;
  ppuStack_c = (undefined2 **)0x22b2;
  for (local_166 = 1;
      (local_164 <= local_172 && ((local_164 < local_172 || (local_166 <= local_174))));
      local_166 = local_166 + 1) {
    uVar10 = 0;
    local_e = (undefined2 *)0xecaa;
    uVar11 = func_0x0000013f();
    if ((*(byte *)((int)uVar11 + 0x14) & 2) != 0) {
      *param_1 = 1;
      ppuStack_c = (undefined2 **)0x0;
      uVar10 = 0;
      local_e = (undefined2 *)0xeccb;
      puVar12 = (undefined2 *)func_0x0000013f();
      puVar9 = (undefined2 *)puVar12;
      puVar6 = local_124;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar1;
      }
      puVar6 = local_15a;
      puVar9 = local_124;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        puVar12 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar1 = *puVar12;
      }
      if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
        ppuStack_c = (undefined2 **)0x0;
        local_e = (undefined2 *)0xed0a;
        local_112 = FUN_3ab8_401b();
        if (local_113 < 0x5a) {
          if (param_3 != 0) {
            local_113 = *(byte *)0xa6a;
          }
          if (param_4 != 0) {
            local_114 = *(undefined1 *)0xa6c;
          }
          ppuStack_c = (undefined2 **)param_26;
          local_e = param_25;
          puStack_10 = param_24;
          puStack_12 = param_23;
          puStack_16 = param_21;
          puStack_18 = param_20;
          puStack_1a = param_19;
          puStack_1c = param_18;
          puStack_22 = param_15;
          puStack_24 = param_14;
          puStack_26 = param_13;
          puStack_2a = param_11;
          puStack_2c = param_10;
          puStack_2e = param_9;
          puStack_30 = param_8;
          puStack_32 = param_7;
          puStack_34 = param_6;
          puStack_36 = param_5;
          puStack_38 = local_124;
          puStack_3a = (undefined2 *)0x0;
          puStack_3c = (undefined2 *)0xed85;
          FUN_3ab8_0568();
          if (*(char *)0xb1ea == '\x03') {
            local_110 = local_110 & 0x3f;
          }
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        ppuVar8 = &puStack_1c;
        puVar6 = local_124;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar1 = ppuVar8;
          ppuVar8 = ppuVar8 + 1;
          puVar12 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar1 = *puVar12;
        }
        FUN_3ab8_0000();
      }
      else {
        uVar10 = 0x885;
        ppuStack_c = (undefined2 **)0xec75;
        iVar5 = func_0x00008854();
        if ((iVar5 == 0) && (local_149 < 0x5a)) {
          local_149 = 0;
          local_14a = 1;
          puVar9 = (undefined2 *)&stack0xffe2;
          puVar6 = local_15a;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            puVar12 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar1 = *puVar12;
          }
          puStack_22 = (undefined2 *)0xedc6;
          func_0x00018396();
          ppuStack_c = (undefined2 **)param_26;
          local_e = param_25;
          puStack_10 = param_24;
          puStack_12 = param_23;
          puStack_16 = param_21;
          puStack_18 = param_20;
          puStack_1a = param_19;
          puStack_1c = param_18;
          puStack_22 = param_15;
          puStack_24 = param_14;
          puStack_26 = param_13;
          puStack_2a = param_11;
          puStack_2c = param_10;
          puStack_2e = param_9;
          puStack_30 = param_8;
          puStack_32 = param_7;
          puStack_34 = param_6;
          puStack_36 = param_5;
          puStack_38 = local_124;
          puStack_3a = (undefined2 *)0x11f2;
          puStack_3c = (undefined2 *)0xee1a;
          FUN_3ab8_0568();
          ppuStack_c = (undefined2 **)0x11f2;
          local_e = (undefined2 *)0xee2a;
          local_17c = (undefined2 *)func_0x0000013f();
          puVar9 = (undefined2 *)local_17c;
          puVar6 = local_124;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            puVar12 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar1 = *puVar12;
          }
          ppuStack_c = (undefined2 **)0x0;
          uVar10 = 0x11f2;
          local_e = (undefined2 *)0xee4e;
          FUN_13bf_0a80();
        }
      }
    }
    local_164 = local_164 + (uint)(0xfffe < local_166);
    ppuStack_c = (undefined2 **)uVar10;
  }
  local_164 = 0;
  for (local_166 = 1;
      (local_164 <= local_160 && ((local_164 < local_160 || (local_166 <= local_162))));
      local_166 = local_166 + 1) {
    uVar10 = 0;
    local_e = (undefined2 *)0xef01;
    uVar11 = func_0x00000271();
    if ((*(byte *)((int)uVar11 + 0x1e) & 2) != 0) {
      *param_1 = 1;
      ppuStack_c = (undefined2 **)0x0;
      uVar10 = 0;
      local_e = (undefined2 *)0xef22;
      puVar12 = (undefined2 *)func_0x00000271();
      puVar9 = (undefined2 *)puVar12;
      puVar6 = local_10e;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar1;
      }
      puVar6 = local_144;
      puVar9 = local_10e;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        puVar12 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar1 = *puVar12;
      }
      if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
        ppuStack_c = (undefined2 **)0x0;
        local_e = (undefined2 *)0xef61;
        local_f2 = FUN_3ab8_401b();
        if (local_f3 < 0x5a) {
          if (param_3 != 0) {
            local_f3 = *(byte *)0xa6a;
          }
          if (param_4 != 0) {
            local_f4 = *(undefined1 *)0xa6c;
          }
          ppuStack_c = (undefined2 **)param_30;
          local_e = param_29;
          puStack_10 = param_28;
          puStack_12 = param_27;
          puStack_16 = param_25;
          puStack_18 = param_24;
          puStack_1a = param_23;
          puStack_1c = param_22;
          puStack_22 = param_19;
          puStack_24 = param_18;
          puStack_26 = param_17;
          puStack_2a = param_15;
          puStack_2c = param_14;
          puStack_2e = param_13;
          puStack_30 = param_12;
          puStack_32 = param_11;
          puStack_34 = param_10;
          puStack_36 = param_9;
          puStack_38 = param_8;
          puStack_3a = param_7;
          puStack_3c = param_6;
          puStack_3e = param_5;
          puStack_40 = local_10e;
          puStack_42 = (undefined2 *)0x0;
          uStack_44 = 0xefe8;
          local_15e = FUN_3ab8_19b2();
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        for (local_16a = 1; local_16a <= local_15e; local_16a = local_16a + 1) {
          puVar6 = local_10e + local_16a * 0x10;
          ppuVar8 = &puStack_26;
          ppuVar7 = &puStack_26;
          puVar9 = puVar6;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = ppuVar8;
            ppuVar8 = ppuVar8 + 1;
            puVar12 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar1 = *puVar12;
          }
          puStack_2a = (undefined2 *)0xee9b;
          iVar5 = FUN_13bf_01c1();
          if (iVar5 != 0) {
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = ppuVar7;
              ppuVar7 = ppuVar7 + 1;
              puVar12 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar1 = *puVar12;
            }
            puStack_2a = (undefined2 *)*(int *)0x14c;
            puStack_2c = (undefined2 *)0x11f2;
            puStack_2e = (undefined2 *)0xeebb;
            func_0x00018977();
          }
          uVar10 = 0x11f2;
        }
      }
      else {
        uVar10 = 0x885;
        ppuStack_c = (undefined2 **)0xeecc;
        iVar5 = func_0x00008854();
        if ((iVar5 == 0) && (local_129 < 0x5a)) {
          local_129 = 0;
          local_12a = 1;
          ppuVar8 = &puStack_26;
          puVar6 = local_144;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = ppuVar8;
            ppuVar8 = ppuVar8 + 1;
            puVar12 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar1 = *puVar12;
          }
          puStack_2a = (undefined2 *)0xf01b;
          FUN_12c1_0f1d();
          ppuStack_c = (undefined2 **)param_31;
          local_e = param_30;
          puStack_10 = param_29;
          puStack_12 = param_28;
          puStack_16 = param_26;
          puStack_18 = param_25;
          puStack_1a = param_24;
          puStack_1c = param_23;
          puStack_22 = param_20;
          puStack_24 = param_19;
          puStack_26 = param_18;
          puStack_2a = param_16;
          puStack_2c = param_15;
          puStack_2e = param_14;
          puStack_30 = param_13;
          puStack_32 = param_12;
          puStack_34 = param_11;
          puStack_36 = param_10;
          puStack_38 = param_9;
          puStack_3a = param_8;
          puStack_3c = param_7;
          puStack_3e = param_6;
          puStack_40 = param_5;
          puStack_42 = local_10e;
          uStack_44 = 0x11f2;
          uStack_46 = 0xf07b;
          local_15e = FUN_3ab8_19b2();
          ppuStack_c = (undefined2 **)local_166;
          local_e = (undefined2 *)0x11f2;
          uVar10 = 0;
          puStack_10 = (undefined2 *)0xf08f;
          local_17c = (undefined2 *)func_0x00000271();
          puVar9 = (undefined2 *)local_17c;
          puVar6 = local_ee;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            puVar12 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar1 = *puVar12;
          }
        }
      }
    }
    local_164 = local_164 + (uint)(0xfffe < local_166);
    ppuStack_c = (undefined2 **)uVar10;
  }
  for (local_168 = 1; local_168 <= local_15c; local_168 = local_168 + 1) {
    ppuStack_c = (undefined2 **)0xf11b;
    uVar11 = func_0x00000398();
    if ((*(byte *)((int)uVar11 + 0x16) & 2) != 0) {
      *param_1 = 1;
      ppuStack_c = (undefined2 **)0xf136;
      func_0x0000daa6();
      ppuStack_c = (undefined2 **)0xf140;
      puVar12 = (undefined2 *)func_0x00000398();
      puVar6 = (undefined2 *)puVar12;
      puVar9 = (undefined2 *)0xc3a0;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
        ppuStack_c = (undefined2 **)0x0;
        local_e = (undefined2 *)0xf16e;
        uVar4 = FUN_3ab8_401b();
        *(undefined1 *)0xc3b5 = uVar4;
        if (*(byte *)0xc3b4 < 0x5a) {
          ppuStack_c = &local_17c;
          local_e = param_28;
          puStack_10 = param_27;
          puStack_12 = param_26;
          puStack_16 = param_24;
          puStack_18 = param_23;
          puStack_1a = param_22;
          puStack_1c = param_21;
          puStack_22 = param_18;
          puStack_24 = param_17;
          puStack_26 = param_16;
          puStack_2a = param_14;
          puStack_2c = param_13;
          puStack_2e = param_12;
          puStack_30 = param_11;
          puStack_32 = param_10;
          puStack_34 = param_9;
          puStack_36 = param_8;
          puStack_38 = param_7;
          puStack_3a = param_6;
          puStack_3c = param_5;
          puStack_3e = (undefined2 *)0xc3a0;
          puStack_40 = (undefined2 *)0x0;
          puStack_42 = (undefined2 *)0xf1da;
          FUN_3ab8_21e1();
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        puVar9 = (undefined2 *)&stack0xffe2;
        puVar6 = (undefined2 *)0xc3a0;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          puVar12 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar1 = *puVar12;
        }
        puStack_22 = (undefined2 *)0xf0ca;
        puVar6 = (undefined2 *)&stack0xffe2;
        iVar5 = func_0x0001b198();
        if (iVar5 != 0) {
          puVar9 = (undefined2 *)0xc3a0;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            puVar12 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar1 = *puVar12;
          }
          puStack_22 = (undefined2 *)0x18b3;
          puStack_24 = (undefined2 *)0xf0e9;
          func_0x00018a6b();
        }
      }
      else {
        ppuStack_c = (undefined2 **)0xf0f9;
        iVar5 = func_0x00008854();
        if ((iVar5 == 0) && (*(byte *)0xc3b4 < 0x5a)) {
          puVar9 = (undefined2 *)&stack0xffe2;
          puVar6 = (undefined2 *)0xc3a0;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            puVar12 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar1 = *puVar12;
          }
          puStack_22 = (undefined2 *)0x885;
          puStack_24 = (undefined2 *)0xf201;
          func_0x00019593();
          ppuStack_c = &local_17c;
          local_e = param_28;
          puStack_10 = param_27;
          puStack_12 = param_26;
          puStack_16 = param_24;
          puStack_18 = param_23;
          puStack_1a = param_22;
          puStack_1c = param_21;
          puStack_22 = param_18;
          puStack_24 = param_17;
          puStack_26 = param_16;
          puStack_2a = param_14;
          puStack_2c = param_13;
          puStack_2e = param_12;
          puStack_30 = param_11;
          puStack_32 = param_10;
          puStack_34 = param_9;
          puStack_36 = param_8;
          puStack_38 = param_7;
          puStack_3a = param_6;
          puStack_3c = param_5;
          puStack_3e = (undefined2 *)0xc3a0;
          puStack_40 = (undefined2 *)0x18b3;
          puStack_42 = (undefined2 *)0xf261;
          FUN_3ab8_21e1();
          ppuStack_c = (undefined2 **)0xf26d;
          puVar12 = (undefined2 *)func_0x00000398();
          puVar9 = (undefined2 *)puVar12;
          puVar6 = (undefined2 *)0xc3a0;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
        }
      }
    }
  }
  for (local_168 = 1; local_168 <= local_16c; local_168 = local_168 + 1) {
    ppuStack_c = (undefined2 **)0xf333;
    uVar11 = func_0x000003ef();
    if ((*(byte *)((int)uVar11 + 10) & 2) != 0) {
      *param_1 = 1;
      ppuStack_c = (undefined2 **)0xf34f;
      puVar12 = (undefined2 *)func_0x000003ef();
      puVar6 = (undefined2 *)puVar12;
      ppuVar8 = &local_e;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        ppuVar3 = ppuVar8;
        ppuVar8 = ppuVar8 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *ppuVar3 = (undefined2 *)*puVar1;
      }
      bVar13 = (byte)(unaff_SI >> 8);
      if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
        ppuStack_c = (undefined2 **)0x0;
        local_e = (undefined2 *)0xf37b;
        uVar4 = FUN_3ab8_401b();
        unaff_SI = CONCAT11(bVar13,uVar4);
        if (bVar13 < 0x5a) {
          if (param_3 != 0) {
            unaff_SI = CONCAT11(*(undefined1 *)0x1d0,uVar4);
          }
          ppuStack_c = (undefined2 **)param_26;
          local_e = param_25;
          puStack_10 = param_24;
          puStack_12 = param_23;
          puStack_16 = param_21;
          puStack_18 = (undefined2 *)local_178;
          puStack_1a = (undefined2 *)local_170;
          puStack_1c = (undefined2 *)0x0;
          func_0x000297e6();
          puStack_1c = (undefined2 *)0x22b2;
          func_0x00029d78();
          puStack_24 = (undefined2 *)0x22b2;
          puStack_26 = (undefined2 *)0xf3ce;
          func_0x000299d1();
          puStack_24 = (undefined2 *)0x22b2;
          puStack_26 = (undefined2 *)0xf3d6;
          func_0x000297e6();
          puStack_24 = (undefined2 *)0x22b2;
          puStack_26 = (undefined2 *)0xf3db;
          func_0x00029d78();
          puStack_2c = (undefined2 *)0x22b2;
          puStack_2e = (undefined2 *)0xf3e5;
          func_0x000299d1();
          puStack_2c = param_12;
          puStack_2e = param_11;
          puStack_30 = param_10;
          puStack_32 = param_9;
          puStack_34 = param_8;
          puStack_36 = param_7;
          puStack_38 = param_6;
          puStack_3a = param_5;
          puStack_3c = (undefined2 *)0x22b2;
          puStack_3e = (undefined2 *)0xf401;
          FUN_3ab8_04af();
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf41c;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf425;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf42a;
          func_0x00029d78();
          puStack_18 = (undefined2 *)0x22b2;
          puStack_1a = (undefined2 *)0xf434;
          func_0x000299d1();
          puStack_18 = (undefined2 *)0x0;
          puStack_1a = (undefined2 *)0x22b2;
          puStack_1c = (undefined2 *)0xf43c;
          FUN_1def_05d1();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c74();
          func_0x00029c74();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf47b;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf484;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf489;
          func_0x00029d78();
          puStack_18 = (undefined2 *)0x22b2;
          puStack_1a = (undefined2 *)0xf493;
          func_0x000299d1();
          puStack_18 = (undefined2 *)0x0;
          puStack_1a = (undefined2 *)0x22b2;
          puStack_1c = (undefined2 *)0xf49b;
          func_0x0001e558();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c74();
          func_0x00029c74();
          func_0x00029983();
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        ppuStack_c = (undefined2 **)0xf29b;
        func_0x0000daa6();
        ppuVar7 = &puStack_12;
        ppuVar8 = &local_e;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar12 = ppuVar7;
          ppuVar7 = ppuVar7 + 1;
          ppuVar3 = ppuVar8;
          ppuVar8 = ppuVar8 + 1;
          *puVar12 = *ppuVar3;
        }
        puStack_16 = (undefined2 *)0xf2b0;
        ppuVar8 = &puStack_12;
        iVar5 = func_0x0001efe0();
        if (iVar5 != 0) {
          ppuVar7 = &local_e;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar12 = ppuVar8;
            ppuVar8 = ppuVar8 + 1;
            ppuVar3 = ppuVar7;
            ppuVar7 = ppuVar7 + 1;
            *puVar12 = *ppuVar3;
          }
          puStack_16 = (undefined2 *)0x1bb4;
          uVar10 = 0x11f2;
          puStack_18 = (undefined2 *)0xf2cf;
          func_0x000189f5();
          if (*(char *)((unaff_SI & 0xff) + 0xb4a6) == '\0') {
            *(undefined1 *)((unaff_SI & 0xff) + 0xb4a6) = 1;
            ppuStack_c = (undefined2 **)0xf2eb;
            func_0x0000b1d8();
            uVar10 = 0x885;
            ppuStack_c = (undefined2 **)0xf2f4;
            func_0x0000daa6();
          }
          local_e = (undefined2 *)0xf302;
          ppuStack_c = (undefined2 **)uVar10;
          func_0x0001f185();
        }
      }
      else {
        ppuStack_c = (undefined2 **)0xf311;
        iVar5 = func_0x00008854();
        if ((iVar5 == 0) && (bVar13 < 0x5a)) {
          ppuStack_c = (undefined2 **)0x885;
          local_e = (undefined2 *)0xf4da;
          func_0x0001f185();
          ppuStack_c = (undefined2 **)param_26;
          local_e = param_25;
          puStack_10 = param_24;
          puStack_12 = param_23;
          puStack_16 = param_21;
          puStack_18 = (undefined2 *)local_178;
          puStack_1a = (undefined2 *)local_170;
          puStack_1c = (undefined2 *)0x1bb4;
          func_0x000297e6();
          puStack_1c = (undefined2 *)0x22b2;
          func_0x00029d78();
          puStack_24 = (undefined2 *)0x22b2;
          puStack_26 = (undefined2 *)0xf515;
          func_0x000299d1();
          puStack_24 = (undefined2 *)0x22b2;
          puStack_26 = (undefined2 *)0xf51d;
          func_0x000297e6();
          puStack_24 = (undefined2 *)0x22b2;
          puStack_26 = (undefined2 *)0xf522;
          func_0x00029d78();
          puStack_2c = (undefined2 *)0x22b2;
          puStack_2e = (undefined2 *)0xf52c;
          func_0x000299d1();
          puStack_2c = param_12;
          puStack_2e = param_11;
          puStack_30 = param_10;
          puStack_32 = param_9;
          puStack_34 = param_8;
          puStack_36 = param_7;
          puStack_38 = param_6;
          puStack_3a = param_5;
          puStack_3c = (undefined2 *)0x22b2;
          puStack_3e = (undefined2 *)0xf548;
          FUN_3ab8_04af();
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf563;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf56c;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf571;
          func_0x00029d78();
          puStack_18 = (undefined2 *)0x22b2;
          puStack_1a = (undefined2 *)0xf57b;
          func_0x000299d1();
          puStack_18 = (undefined2 *)0x0;
          puStack_1a = (undefined2 *)0x22b2;
          puStack_1c = (undefined2 *)0xf583;
          FUN_1def_05d1();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c74();
          func_0x00029c74();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf5c2;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf5cb;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined2 *)0xf5d0;
          func_0x00029d78();
          puStack_18 = (undefined2 *)0x22b2;
          puStack_1a = (undefined2 *)0xf5da;
          func_0x000299d1();
          puStack_18 = (undefined2 *)0x0;
          puStack_1a = (undefined2 *)0x22b2;
          puStack_1c = (undefined2 *)0xf5e2;
          func_0x0001e558();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c74();
          func_0x00029c74();
          func_0x00029983();
          ppuStack_c = (undefined2 **)0xf612;
          puVar12 = (undefined2 *)func_0x000003ef();
          puVar6 = (undefined2 *)puVar12;
          ppuVar8 = &local_e;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            ppuVar3 = ppuVar8;
            ppuVar8 = ppuVar8 + 1;
            *puVar1 = *ppuVar3;
          }
        }
      }
    }
  }
  if ((*(char *)0xb1ea == '\x01') || (*(char *)0xb1ea == '\x02')) {
    ppuStack_c = (undefined2 **)0xf640;
    func_0x0000daa6();
    ppuStack_c = (undefined2 **)0xf64a;
    func_0x00008095();
  }
  return;
}



/* 3ab8:4ad1  FUN_3ab8_4ad1  448 bytes, 0 callers */

void FUN_3ab8_4ad1(void)

{
  undefined2 unaff_DS;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 *in_stack_0000000c;
  undefined2 *in_stack_0000000e;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined4 local_a;
  undefined2 *local_6;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x3ab8;
  local_6 = (undefined2 *)0xf65c;
  FUN_21f2_0ebc();
  local_e = *in_stack_0000000c;
  local_c = in_stack_0000000c[1];
  local_12 = *in_stack_0000000e;
  local_10 = in_stack_0000000e[1];
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf680;
  func_0x000297e6();
  local_4 = (undefined2 **)&local_e;
  local_6 = (undefined2 *)0x22b2;
  local_a._2_2_ = 0xf689;
  func_0x00029b55();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf68f;
  func_0x00029983();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf697;
  func_0x000297e6();
  local_4 = (undefined2 **)&local_12;
  local_6 = (undefined2 *)0x22b2;
  local_a._2_2_ = 0xf6a0;
  func_0x00029b55();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf6a6;
  func_0x00029983();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf6ab;
  func_0x0000c4c4();
  local_4 = (undefined2 **)0x885;
  local_6 = (undefined2 *)0xf6c1;
  func_0x000297e6();
  local_4 = &local_6;
  local_6 = (undefined2 *)0x22b2;
  local_a._2_2_ = 0xf6ca;
  func_0x00029b9d();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf6d0;
  func_0x00029983();
  local_4 = (undefined2 **)&local_12;
  local_6 = &local_e;
  local_a._2_2_ = 1;
  local_a._0_2_ = 0x22b2;
  local_c = 0xf6e1;
  FUN_1def_0338();
  uVar1 = (undefined1 *)0xfff9 < (undefined1 *)((int)&local_a + 2);
  uVar2 = &stack0x0000 == (undefined1 *)0x2;
  local_4 = (undefined2 **)0x1bb4;
  local_6 = (undefined2 *)0xf6ed;
  func_0x000297e6();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf6f5;
  func_0x000297e6();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf6fa;
  FUN_28b3_1181();
  if ((bool)uVar1 || (bool)uVar2) {
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf724;
    func_0x000297e6();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf72c;
    func_0x00029b85();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf731;
    func_0x00029d78();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf73a;
    func_0x00029bfc();
  }
  else {
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf704;
    func_0x000297e6();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf70c;
    func_0x00029b85();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf711;
    func_0x00029d78();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf71a;
    func_0x00029c74();
  }
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf73f;
  local_a = FUN_28b3_0f51();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf74d;
  func_0x000298b4();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf755;
  func_0x00029b6d();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf75d;
  func_0x00029983();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf766;
  func_0x000297e6();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf76e;
  func_0x000297e6();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf773;
  FUN_28b3_1181();
  if ((bool)uVar1 || (bool)uVar2) {
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf79d;
    func_0x000297e6();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf7a5;
    func_0x00029b85();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf7aa;
    func_0x00029d78();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf7b3;
    func_0x00029bfc();
  }
  else {
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf77d;
    func_0x000297e6();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf785;
    func_0x00029b85();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf78a;
    func_0x00029d78();
    local_4 = (undefined2 **)0x22b2;
    local_6 = (undefined2 *)0xf793;
    func_0x00029c74();
  }
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf7b8;
  uVar3 = FUN_28b3_0f51();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf7c6;
  local_a = uVar3;
  func_0x000298b4();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf7ce;
  func_0x00029b6d();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf7d6;
  func_0x00029983();
  local_4 = (undefined2 **)&local_12;
  local_6 = &local_e;
  local_a._2_2_ = 0;
  local_a._0_2_ = 0x22b2;
  local_c = 0xf7e6;
  FUN_1def_0338();
  local_4 = (undefined2 **)0x1bb4;
  local_6 = (undefined2 *)0xf7f1;
  func_0x000297e6();
  local_4 = (undefined2 **)&local_e;
  local_6 = (undefined2 *)0x22b2;
  local_a._2_2_ = 0xf7fa;
  func_0x00029bb5();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf800;
  func_0x00029983();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf808;
  func_0x000297e6();
  local_4 = (undefined2 **)&local_12;
  local_6 = (undefined2 *)0x22b2;
  local_a._2_2_ = 0xf811;
  func_0x00029bb5();
  local_4 = (undefined2 **)0x22b2;
  local_6 = (undefined2 *)0xf817;
  func_0x00029983();
  *in_stack_0000000c = local_e;
  in_stack_0000000c[1] = local_c;
  *in_stack_0000000e = local_12;
  in_stack_0000000e[1] = local_10;
  return;
}



/* 3ab8:4c91  FUN_3ab8_4c91  38 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4c91(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  func_0x00029983();
  uVar1 = *(undefined2 *)(unaff_BP + -10);
  puVar2 = (undefined2 *)*(undefined2 *)(unaff_BP + 0xe);
  *puVar2 = *(undefined2 *)(unaff_BP + -0xc);
  puVar2[1] = uVar1;
  uVar1 = *(undefined2 *)(unaff_BP + -0xe);
  puVar2 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x10);
  *puVar2 = *(undefined2 *)(unaff_BP + -0x10);
  puVar2[1] = uVar1;
  return;
}



/* 3ab8:4cb7  FUN_3ab8_4cb7  732 bytes, 1 callers */

undefined2 FUN_3ab8_4cb7(undefined2 param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  char local_136;
  undefined2 local_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 *puStack_1a;
  undefined2 uStack_18;
  undefined2 local_16;
  int iStack_14;
  int iStack_12;
  undefined2 *puStack_10;
  int iStack_e;
  
  FUN_21f2_0ebc();
  local_26 = *(undefined2 *)0x943c;
  local_24 = *(undefined2 *)0x943e;
  local_136 = '\0';
  *(undefined1 *)0xb1ea = param_2;
  local_22 = local_26;
  local_20 = local_24;
  if ((0xb < *(byte *)0x123) && (*(char *)0x15b == '\x02')) {
    local_136 = *(char *)0x22b3;
  }
  while( true ) {
    iStack_e = 0xf901;
    FUN_21f2_3454();
    if (*(char *)0xb1ea == '\0') {
      *(undefined1 *)0x1062 = 1;
    }
    if (*(char *)0xb1ea == '\x01') {
      iStack_e = 0xf923;
      FUN_21f2_3454();
    }
    if (*(char *)0xb1ea == '\x02') {
      iStack_e = 0xf939;
      FUN_21f2_3454();
    }
    iStack_e = 0xf948;
    FUN_21f2_3454();
    iStack_e = 0xf957;
    FUN_21f2_2d26();
    if (local_136 != '\0') {
      FUN_32b2_7285();
      FUN_32b2_710c();
      FUN_32b2_6e99();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x17a0;
      FUN_32b2_6eb1();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x17a5;
      puVar2 = (undefined2 *)FUN_32b2_75fe();
      uStack_4a = *puVar2;
      uStack_48 = puVar2[1];
      uStack_46 = puVar2[2];
      uStack_44 = puVar2[3];
      FUN_32b2_6d14();
      iStack_12 = 0x32b2;
      iStack_14 = 0x17c5;
      FUN_32b2_6eb1();
      iStack_12 = 0x32b2;
      iStack_14 = 0x17ca;
      puVar2 = (undefined2 *)FUN_32b2_75ec();
      uStack_52 = *puVar2;
      uStack_50 = puVar2[1];
      uStack_4e = puVar2[2];
      uStack_4c = puVar2[3];
      local_54 = 0;
      iStack_e = 0x17f6;
      FUN_32b2_7285();
      iStack_e = 0x17ff;
      FUN_32b2_710c();
      iStack_e = 0x1807;
      FUN_32b2_6e99();
      iStack_14 = 0x32b2;
      local_16 = 0x1811;
      FUN_32b2_6eb1();
      iStack_14 = 0x32b2;
      local_16 = 0x1816;
      FUN_32b2_75fe();
      iStack_e = 0x32b2;
      puStack_10 = (undefined2 *)0x1820;
      FUN_32b2_6d14();
      iStack_e = 0x32b2;
      puStack_10 = (undefined2 *)0x1828;
      FUN_32b2_704d();
      iStack_e = 0x32b2;
      puStack_10 = (undefined2 *)0x1830;
      FUN_32b2_6eb1();
      iStack_e = 0x32b2;
      puStack_10 = (undefined2 *)0x1838;
      FUN_32b2_6d14();
      iStack_e = 0x32b2;
      puStack_10 = (undefined2 *)0x1840;
      FUN_32b2_710c();
      iStack_e = 0x32b2;
      puStack_10 = (undefined2 *)0x1848;
      FUN_32b2_6d14();
      local_16 = 0x32b2;
      uStack_18 = 0x1852;
      FUN_32b2_6eb1();
      local_16 = 0x32b2;
      uStack_18 = 0x1857;
      FUN_32b2_75ec();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x1861;
      FUN_32b2_6d14();
      local_54 = 0;
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x187a;
      FUN_32b2_7285();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x187f;
      FUN_32b2_717d();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x1887;
      FUN_32b2_704d();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x1890;
      FUN_32b2_710c();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x1898;
      FUN_32b2_6e99();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x18a0;
      FUN_32b2_710c();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x18a5;
      FUN_32b2_7173();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x18ad;
      FUN_32b2_7095();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x18b5;
      FUN_32b2_6eb1();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x18bd;
      FUN_32b2_6d14();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x18c5;
      FUN_32b2_710c();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x18cd;
      FUN_32b2_6d14();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x18d5;
      FUN_32b2_710c();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x18da;
      FUN_32b2_718c();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x18e2;
      FUN_32b2_7095();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x18ea;
      FUN_32b2_6eb1();
      local_54 = 0;
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x1908;
      FUN_32b2_7285();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x1911;
      FUN_32b2_710c();
      puStack_10 = (undefined2 *)0x32b2;
      iStack_12 = 0x1919;
      FUN_32b2_6e99();
      uStack_18 = 0x32b2;
      puStack_1a = (undefined2 *)0x1923;
      FUN_32b2_6eb1();
      uStack_18 = 0x32b2;
      puStack_1a = (undefined2 *)0x1928;
      FUN_32b2_75fe();
      iStack_12 = 0x32b2;
      iStack_14 = 0x1932;
      FUN_32b2_6d14();
      iStack_12 = 0x32b2;
      iStack_14 = 0x193a;
      FUN_32b2_704d();
      iStack_12 = 0x32b2;
      iStack_14 = 0x1942;
      FUN_32b2_6eb1();
      iStack_12 = 0x32b2;
      iStack_14 = 0x194a;
      FUN_32b2_6d14();
      iStack_12 = 0x32b2;
      iStack_14 = 0x1952;
      FUN_32b2_710c();
      iStack_12 = 0x32b2;
      iStack_14 = 0x195a;
      FUN_32b2_6d14();
      puStack_1a = (undefined2 *)0x32b2;
      uStack_1c = 0x1964;
      FUN_32b2_6eb1();
      puStack_1a = (undefined2 *)0x32b2;
      uStack_1c = 0x1969;
      FUN_32b2_75ec();
      iStack_14 = 0x32b2;
      local_16 = 0x1973;
      FUN_32b2_6d14();
      local_54 = 0;
      iStack_14 = 0x32b2;
      local_16 = 0x198c;
      FUN_32b2_7285();
      iStack_14 = 0x32b2;
      local_16 = 0x1991;
      FUN_32b2_717d();
      iStack_14 = 0x32b2;
      local_16 = 0x1999;
      FUN_32b2_704d();
      iStack_14 = 0x32b2;
      local_16 = 0x19a2;
      FUN_32b2_710c();
      iStack_14 = 0x32b2;
      local_16 = 0x19aa;
      FUN_32b2_6e99();
      iStack_14 = 0x32b2;
      local_16 = 0x19b2;
      FUN_32b2_710c();
      iStack_14 = 0x32b2;
      local_16 = 0x19b7;
      FUN_32b2_7173();
      iStack_14 = 0x32b2;
      local_16 = 0x19bf;
      FUN_32b2_7095();
      iStack_14 = 0x32b2;
      local_16 = 0x19c7;
      FUN_32b2_6eb1();
      iStack_14 = 0x32b2;
      local_16 = 0x19cf;
      FUN_32b2_6d14();
      iStack_14 = 0x32b2;
      local_16 = 0x19d7;
      FUN_32b2_710c();
      iStack_14 = 0x32b2;
      local_16 = 0x19df;
      FUN_32b2_6d14();
      iStack_14 = 0x32b2;
      local_16 = 0x19e7;
      FUN_32b2_710c();
      iStack_14 = 0x32b2;
      local_16 = 0x19ec;
      FUN_32b2_718c();
      iStack_14 = 0x32b2;
      local_16 = 0x19f4;
      FUN_32b2_7095();
      iStack_14 = 0x32b2;
      local_16 = 0x19fc;
      FUN_32b2_6eb1();
      if (((undefined2 *)iStack_14 == puStack_10) && (iStack_12 == iStack_e)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    if (*(char *)0xb1ea == '\x03') {
      iStack_e = 0xf97d;
      FUN_21f2_3454();
      iStack_e = 0xf98c;
      FUN_21f2_2d26();
    }
    func_0x0000c3ca();
    if (*(int *)0xbc2 == 0) {
      if (*(char *)0xb1ea == '\x03') {
        if (*(int *)0xc22 == 0) {
          iStack_e = 0x12;
          puStack_10 = &local_54;
          iStack_12 = 0x885;
          iStack_14 = 0xf9c4;
          FUN_1000_02b5();
        }
        *(undefined2 *)0xc22 = 1;
        iStack_e = *(undefined2 *)0x9454;
        puStack_10 = (undefined2 *)*(undefined2 *)0x945a;
        iStack_12 = *(undefined2 *)0x9458;
        iStack_14 = *(undefined2 *)0x9456;
        local_16 = *(undefined2 *)0x9454;
        uStack_18 = 0;
        puStack_1a = &local_54;
        uStack_1c = 0;
        uStack_1e = 0;
        local_20 = 2;
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
      }
      else {
        if (*(byte *)0xb1ea < 2) {
          if (*(int *)0xce6 == 0) {
            iStack_e = *(undefined2 *)0x9454;
            puStack_10 = (undefined2 *)*(undefined2 *)0x945a;
            iStack_12 = *(undefined2 *)0x9458;
            iStack_14 = *(undefined2 *)0x9456;
            local_16 = *(undefined2 *)0x9454;
            uStack_18 = 0;
            puStack_1a = &local_54;
            uStack_1c = 0;
            uStack_1e = 0;
            local_20 = 0;
            pcVar1 = (code *)swi(0x3f);
            (*pcVar1)();
          }
          else {
            iStack_e = *(undefined2 *)0x9454;
            puStack_10 = (undefined2 *)*(undefined2 *)0x945a;
            iStack_12 = *(undefined2 *)0x9458;
            iStack_14 = *(undefined2 *)0x9456;
            local_16 = *(undefined2 *)0x9454;
            uStack_18 = 0;
            puStack_1a = &local_54;
            uStack_1c = 0;
            uStack_1e = 1;
            local_20 = 0;
            pcVar1 = (code *)swi(0x3f);
            iVar4 = (*pcVar1)();
            if (iVar4 == -1) {
              uVar3 = FUN_2bb4_66c9();
              return uVar3;
            }
          }
        }
        if (*(char *)0xb1ea == '\x02') {
          iStack_e = *(undefined2 *)0x9454;
          puStack_10 = (undefined2 *)*(undefined2 *)0x945a;
          iStack_12 = *(undefined2 *)0x9458;
          iStack_14 = *(undefined2 *)0x9456;
          local_16 = *(undefined2 *)0x9454;
          uStack_18 = 0;
          puStack_1a = &local_54;
          uStack_1c = 0;
          uStack_1e = 1;
          local_20 = 1;
          pcVar1 = (code *)swi(0x3f);
          iVar4 = (*pcVar1)();
          if (iVar4 == -1) {
            uVar3 = FUN_2bb4_66c9();
            return uVar3;
          }
        }
      }
    }
    if (*(int *)0x158 == 0) break;
    if (*(char *)0x118 != '\0') {
      uVar3 = FUN_2bb4_66c9();
      return uVar3;
    }
    if ((((*(char *)0x124 == '\0') || (*(int *)0x158 == 10000)) || (*(int *)0xbc2 != 0)) ||
       (*(char *)0xb1ea != '\0')) {
      uVar3 = FUN_2bb4_66c9();
      return uVar3;
    }
    if ((((*(int *)0xa62 != 1) || (*(int *)0xa64 != 1)) &&
        ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) &&
       ((*(byte *)0xb782 < 4 || (*(int *)0xa66 != *(int *)0xa62)))) {
      if (*(byte *)0xb782 < 4) {
        uVar3 = FUN_2bb4_66c9();
        return uVar3;
      }
      if (*(int *)0xa62 != 1) {
        uVar3 = FUN_2bb4_66c9();
        return uVar3;
      }
    }
    FUN_1885_2ec3();
    *(undefined2 *)0x158 = 0;
    *(undefined1 *)0xb1ea = 3;
  }
  uVar3 = FUN_3ab8_5218();
  return uVar3;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  10 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_4fbd(void)

{
  int in_AX;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  
  *(int *)(in_BX + unaff_SI) = *(int *)(in_BX + unaff_SI) + in_AX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 3ab8:4fc8  FUN_3ab8_4fc8  213 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x000302f0) overlaps instruction at (ram,0x000302ef)
    */

undefined2 FUN_3ab8_4fc8(int param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 uVar8;
  int unaff_BP;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  uint uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  
  uVar8 = 0x3ab8;
  *(undefined2 *)0xc2c = 0;
  while( true ) {
    iStack_8 = unaff_BP + -0x1cc;
    *(undefined2 *)0xc20 = 1;
    iStack_a = 1;
    uStack_e = 0xfb6e;
    uStack_c = uVar8;
    uVar8 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x1fe) = uVar8;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xc2c = 0;
    if (*(int *)0x158 != 0) break;
    func_0x0000c3ca();
    if ((*(int *)(unaff_BP + -0x1fe) == 0x14) && (*(char *)0xb1ea == '\x02')) {
      func_0x00008095();
      uVar8 = FUN_2bb4_66c9();
      return uVar8;
    }
    if (*(int *)(unaff_BP + -0x1fe) == -1) {
      *(undefined2 *)(unaff_BP + -0x146) = 0;
      if (*(char *)0xb1ea == '\x03') {
        func_0x00008095();
        goto LAB_3ab8_4d74;
      }
      if (*(char *)0xb1ea == '\0') {
        *(undefined1 *)0x1062 = 1;
      }
      iStack_8 = *(int *)0x9454;
      iStack_a = *(undefined2 *)0x945a;
      uStack_c = *(undefined2 *)0x9458;
      uStack_e = *(undefined2 *)0x9456;
      uStack_10 = *(undefined2 *)0x9454;
      uStack_12 = 0;
      iStack_14 = unaff_BP + -0x52;
      uStack_16 = 0;
      uStack_18 = 0xd8f1;
      uStack_1a = (uint)(*(char *)0xb1ea == '\x02');
      pcVar5 = (code *)swi(0x3f);
      iVar7 = (*pcVar5)();
      if (iVar7 == -1) goto LAB_3ab8_4d74;
      if (*(int *)0x158 != 0) {
        func_0x00008095();
      }
    }
    if (*(int *)(unaff_BP + -0x1fe) < 1) {
      uVar8 = FUN_3ab8_5188();
      return uVar8;
    }
    if (7 < *(int *)(unaff_BP + -0x1fe)) {
      uVar8 = FUN_3ab8_5188();
      return uVar8;
    }
    if ((*(int *)(unaff_BP + -0x1fe) != 7) &&
       ((bVar11 = *(byte *)0xb1ea < 3, *(byte *)0xb1ea != 3 ||
        (bVar11 = *(uint *)(unaff_BP + -0x1fe) < 4, *(uint *)(unaff_BP + -0x1fe) != 4)))) {
      if (bVar11) goto code_r0x00030201;
      while( true ) {
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        iStack_8 = 0x32b2;
        iStack_a = 0x30c;
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x314;
        FUN_32b2_6d14();
        uStack_10 = 0x32b2;
        uStack_12 = 0x31e;
        FUN_32b2_6eb1();
        uStack_10 = 0x32b2;
        uStack_12 = 0x326;
        FUN_32b2_6cc6();
        uStack_10 = 0x32b2;
        uStack_12 = 0x32b;
        FUN_32b2_7258();
        uStack_18 = 0x32b2;
        uStack_1a = 0x335;
        FUN_32b2_6eb1();
        uStack_18 = 0x32b2;
        uStack_1a = 0x33d;
        FUN_32b2_6cc6();
        uStack_18 = 0x32b2;
        uStack_1a = 0x342;
        FUN_32b2_7258();
        uStack_20 = 0x32b2;
        FUN_32b2_6eb1();
        uStack_20 = 1;
        uStack_24 = 0x354;
        FUN_3ab8_5089();
        uVar10 = (undefined1 *)0xffc9 < &uStack_32;
        uVar12 = &stack0x0000 == (undefined1 *)0xfffc;
        param_1 = 0x32b2;
        FUN_32b2_6cc6();
        param_1 = 0x32b2;
        FUN_32b2_701d();
        param_1 = 0x32b2;
        FUN_32b2_7258();
        param_1 = 0x32b2;
        FUN_32b2_6e99();
        param_1 = 0x32b2;
        FUN_32b2_6ef9();
        param_1 = 0x32b2;
        FUN_32b2_6cc6();
        param_1 = 0x32b2;
        FUN_32b2_701d();
        param_1 = 0x32b2;
        FUN_32b2_7258();
        param_1 = 0x32b2;
        FUN_32b2_6e99();
        param_1 = 0x32b2;
        FUN_32b2_6ef9();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = 0x32b2;
        FUN_32b2_6fc7();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = 0x32b2;
        FUN_32b2_6fc7();
        param_1 = 0x32b2;
        FUN_32b2_710c();
        param_1 = 0x32b2;
        FUN_32b2_7191();
        if (!(bool)uVar10 && !(bool)uVar12) {
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_7191();
          if (!(bool)uVar12) {
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_7124();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_704d();
            param_1 = 0x32b2;
            FUN_32b2_7035();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_718c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_70dc();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_718c();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6fd6();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7182();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7154();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = unaff_BP + -0x8a;
            FUN_32b2_6cc6();
            FUN_32b2_7258();
            iStack_a = 0x32b2;
            uStack_c = 0x5ea;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x5f2;
            FUN_32b2_6cc6();
            iStack_a = 0x32b2;
            uStack_c = 0x5f7;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            iStack_14 = 0x601;
            FUN_32b2_6eb1();
            uStack_12 = *(undefined2 *)(unaff_BP + -100);
            iStack_14 = *(undefined2 *)(unaff_BP + -0x66);
            uStack_16 = *(undefined2 *)(unaff_BP + -0x68);
            uStack_18 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x48);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_24 = 0x622;
            FUN_32b2_6d14();
            uStack_2a = 0x32b2;
            uStack_2c = 0x62c;
            FUN_32b2_6eb1();
            uStack_2a = 0x32b2;
            uStack_2c = 0x635;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x63f;
            FUN_32b2_6eb1();
            uStack_32 = 0;
            uStack_34 = 0x32b2;
            FUN_3ab8_5089();
            uVar8 = *(undefined2 *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
            *(undefined2 *)(unaff_BP + -0x84) = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x88);
            *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
            *(undefined2 *)(unaff_BP + -0x9c) = uVar8;
            param_1 = unaff_BP + -0x9e;
            puVar9 = &uStack_20;
            puVar6 = (undefined2 *)(unaff_BP + 0x1c);
            for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar3 = *puVar2;
            }
            uStack_24 = 0x684;
            iVar7 = FUN_3ab8_522f();
            uVar10 = 0;
            uVar12 = iVar7 == 0;
            if (!(bool)uVar12) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6cc6();
              param_1 = 0x32b2;
              FUN_32b2_701d();
              param_1 = 0x32b2;
              FUN_32b2_6fc7();
              param_1 = 0x32b2;
              FUN_32b2_7258();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if ((bool)uVar10 || (bool)uVar12) {
                param_1 = 0x32b2;
                FUN_32b2_6d14();
                param_1 = 0x32b2;
                FUN_32b2_6cc6();
                param_1 = 0x32b2;
                FUN_32b2_701d();
                param_1 = 0x32b2;
                FUN_32b2_6fc7();
                param_1 = 0x32b2;
                FUN_32b2_7258();
                param_1 = 0x32b2;
                FUN_32b2_7191();
                if ((bool)uVar10 || (bool)uVar12) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
              }
            }
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7154();
            param_1 = 0x32b2;
            FUN_32b2_7191();
            if (!(bool)uVar10) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6fc7();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if (!(bool)uVar10) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
              param_1 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_8 = 0x774;
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
              uStack_c = 0x32b2;
              uStack_e = 0x7e8;
              FUN_32b2_6eb1();
              uStack_c = 0x32b2;
              uStack_e = 0x7f0;
              FUN_32b2_6cc6();
              uStack_c = 0x32b2;
              uStack_e = 0x7f5;
              FUN_32b2_7258();
              iStack_14 = 0x32b2;
              uStack_16 = 0x7ff;
              FUN_32b2_6eb1();
              iStack_14 = *(undefined2 *)(unaff_BP + -100);
              uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
              uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
              uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
              uStack_24 = 0x32b2;
              uStack_26 = 0x820;
              FUN_32b2_6d14();
              uStack_2c = 0x32b2;
              uStack_2e = 0x82a;
              FUN_32b2_6eb1();
              uStack_2c = 0x32b2;
              uStack_2e = 0x833;
              FUN_32b2_6d14();
              uStack_34 = 0x32b2;
              FUN_32b2_6eb1();
              uStack_34 = 0;
              FUN_3ab8_5089(0x32b2);
              uVar10 = (undefined1 *)0xffc9 < &uStack_34;
              uVar12 = &stack0x0000 == (undefined1 *)0xfffe;
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              if ((bool)uVar12) {
                uVar8 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar8;
              }
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              if ((bool)uVar12) {
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
              uVar12 = *piVar1 == 0;
              FUN_32b2_6d14();
              FUN_32b2_6d14();
              FUN_32b2_7191();
              if (!(bool)uVar10 && !(bool)uVar12) {
                iStack_8 = 0x32b2;
                iStack_a = 0x8ff;
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
                iStack_8 = 0x969;
                FUN_32b2_6cc6();
                iStack_8 = 0x96e;
                FUN_32b2_7258();
                uStack_e = 0x32b2;
                uStack_10 = 0x978;
                FUN_32b2_6eb1();
                uStack_e = 0x32b2;
                uStack_10 = 0x980;
                FUN_32b2_6cc6();
                uStack_e = 0x32b2;
                uStack_10 = 0x985;
                FUN_32b2_7258();
                uStack_16 = 0x32b2;
                uStack_18 = 0x98f;
                FUN_32b2_6eb1();
                uStack_16 = *(undefined2 *)(unaff_BP + -100);
                uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
                uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
                uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
                uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
                uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
                uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
                uStack_26 = 0x32b2;
                uStack_28 = 0x9b0;
                FUN_32b2_6d14();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9ba;
                FUN_32b2_6eb1();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9c3;
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_3ab8_5089(0x32b2,0);
                uVar10 = &stack0x0000 == (undefined1 *)0x0;
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
                  uVar8 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar8;
                }
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
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
              return *(undefined2 *)(unaff_BP + -0x36);
            }
          }
          return 0;
        }
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = unaff_BP + -0xbc;
        FUN_32b2_7154();
        param_1 = 0x32b2;
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
        param_1 = *(undefined2 *)(unaff_BP + -0xb6);
        iStack_8 = 0x119;
        FUN_32b2_75fe();
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x150;
        FUN_32b2_75ec();
        uVar10 = &stack0x0000 == (undefined1 *)0x0;
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar10) {
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar10) {
            return 0;
          }
        }
        iStack_8 = *(int *)(unaff_BP + -0x7e);
        iStack_a = *(undefined2 *)(unaff_BP + -0x80);
        uStack_c = *(undefined2 *)(unaff_BP + -0x82);
        uStack_e = *(undefined2 *)(unaff_BP + -0x58);
        uStack_10 = *(undefined2 *)(unaff_BP + -0x5a);
        uStack_12 = *(undefined2 *)(unaff_BP + -0x5c);
        iStack_14 = *(int *)(unaff_BP + -0x5e);
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d0;
        FUN_32b2_6cc6();
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d5;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1df;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1e7;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1ec;
        FUN_32b2_7258();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1f6;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1fa;
        iVar7 = FUN_3ab8_4fbd();
        if (iVar7 == 0) break;
code_r0x00030201:
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6e99();
        FUN_32b2_6ef9();
        iStack_8 = 0x231;
        FUN_32b2_6cc6();
        iStack_8 = 0x236;
        FUN_32b2_7258();
        uStack_e = 0x32b2;
        uStack_10 = 0x240;
        FUN_32b2_6eb1();
        uStack_e = 0x32b2;
        uStack_10 = 0x248;
        FUN_32b2_6cc6();
        uStack_e = 0x32b2;
        uStack_10 = 0x24d;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 599;
        FUN_32b2_6eb1();
        uStack_16 = 0x32b2;
        uStack_18 = 0x25f;
        FUN_32b2_6d14();
        uStack_1e = 0x32b2;
        uStack_20 = 0x269;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x271;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x276;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x27e;
        FUN_32b2_6e99();
        uStack_26 = 0x32b2;
        uStack_28 = 0x288;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x290;
        FUN_32b2_6cc6();
        uStack_26 = 0x32b2;
        uStack_28 = 0x295;
        FUN_32b2_7258();
        uStack_2e = 0x32b2;
        uStack_30 = 0x29f;
        FUN_32b2_6eb1();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2a7;
        FUN_32b2_6cc6();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2ac;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_3ab8_5089(0x32b2,1);
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
      }
      return 0;
    }
    if ((*(char *)0xb1ea != '\0') && (*(char *)0xb1ea != '\x03')) {
      uVar8 = FUN_3ab8_533a();
      return uVar8;
    }
    iStack_8 = 0xfc75;
    FUN_21f2_3454();
    iStack_8 = 0xfc85;
    FUN_21f2_2d26();
    iStack_8 = 0xfc95;
    FUN_21f2_2d26();
    iStack_8 = 0xfca5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcb5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcc5;
    FUN_1def_07a4();
    iStack_8 = 0x1bb4;
    iStack_a = 0xfcd7;
    FUN_3ab8_014c();
    iStack_8 = unaff_BP + -0x1cc;
    iStack_a = 1;
    uStack_c = 0x1bb4;
    uStack_e = 0xfcf7;
    iVar7 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x236) = iVar7;
    if (*(int *)0x158 != 0) {
      uVar8 = FUN_2bb4_66c9();
      return uVar8;
    }
    if (((iVar7 != 1) && (*(int *)(unaff_BP + -0x146) != 1)) && (iVar7 != -1)) {
      uVar8 = FUN_3ab8_52e6();
      return uVar8;
    }
    uVar8 = *(undefined2 *)0x9480;
    uVar4 = *(undefined2 *)0x9482;
    *(undefined2 *)(unaff_BP + -500) = uVar8;
    *(undefined2 *)(unaff_BP + -0x1f2) = uVar4;
    *(undefined2 *)(unaff_BP + -0x204) = uVar8;
    *(undefined2 *)(unaff_BP + -0x202) = uVar4;
    uVar8 = *(undefined2 *)0x943c;
    uVar4 = *(undefined2 *)0x943e;
    *(undefined2 *)(unaff_BP + -0x144) = uVar8;
    *(undefined2 *)(unaff_BP + -0x142) = uVar4;
    *(undefined2 *)(unaff_BP + -0x15c) = uVar8;
    *(undefined2 *)(unaff_BP + -0x15a) = uVar4;
    iStack_8 = 0xfdd4;
    FUN_21f2_3454();
    if (*(byte *)0xb1ea < 2) {
      iStack_8 = 0xfdeb;
      FUN_21f2_2d26();
    }
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0xfe09;
      FUN_21f2_2d26();
    }
    if (*(char *)0xb1ea == '\x01') {
      iStack_8 = 0xfe20;
      FUN_21f2_2d26();
    }
    uVar8 = 0x1bb4;
    iStack_8 = 0xfe30;
    FUN_1def_07a4();
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0x1bb4;
      iStack_a = 0xfe50;
      FUN_3ab8_014c();
    }
    if (*(char *)0xb1ea != '\x02') {
      uVar8 = FUN_3ab8_4fc8();
      return uVar8;
    }
    *(undefined2 *)0xc2c = 1;
  }
LAB_3ab8_5003:
  uVar8 = FUN_2bb4_66c9();
  return uVar8;
LAB_3ab8_4d74:
  iStack_8 = 0xf901;
  FUN_21f2_3454();
  if (*(char *)0xb1ea == '\0') {
    *(undefined1 *)0x1062 = 1;
  }
  if (*(char *)0xb1ea == '\x01') {
    iStack_8 = 0xf923;
    FUN_21f2_3454();
  }
  if (*(char *)0xb1ea == '\x02') {
    iStack_8 = 0xf939;
    FUN_21f2_3454();
  }
  iStack_8 = 0xf948;
  FUN_21f2_3454();
  iStack_8 = -0x6a9;
  FUN_21f2_2d26();
  if (*(char *)(unaff_BP + -0x134) != '\0') {
    *(undefined2 *)(unaff_BP + -0x1fe) = 1;
    FUN_32b2_7285();
    FUN_32b2_710c();
    FUN_32b2_6e99();
    iStack_a = 0x32b2;
    uStack_c = 0x17a0;
    FUN_32b2_6eb1();
    iStack_a = 0x32b2;
    uStack_c = 0x17a5;
    puVar6 = (undefined2 *)FUN_32b2_75fe();
    *(undefined2 *)(unaff_BP + -0x48) = *puVar6;
    *(undefined2 *)(unaff_BP + -0x46) = puVar6[1];
    *(undefined2 *)(unaff_BP + -0x44) = puVar6[2];
    *(undefined2 *)(unaff_BP + -0x42) = puVar6[3];
    FUN_32b2_6d14();
    uStack_c = 0x32b2;
    uStack_e = 0x17c5;
    FUN_32b2_6eb1();
    uStack_c = 0x32b2;
    uStack_e = 0x17ca;
    puVar6 = (undefined2 *)FUN_32b2_75ec();
    *(undefined2 *)(unaff_BP + -0x50) = *puVar6;
    *(undefined2 *)(unaff_BP + -0x4e) = puVar6[1];
    *(undefined2 *)(unaff_BP + -0x4c) = puVar6[2];
    *(undefined2 *)(unaff_BP + -0x4a) = puVar6[3];
    uVar8 = *(undefined2 *)(unaff_BP + -0x12);
    uVar4 = *(undefined2 *)(unaff_BP + -0x10);
    *(undefined2 *)(unaff_BP + -0x52) = 0;
    *(undefined2 *)(unaff_BP + -0x54) = 0;
    *(undefined2 *)(unaff_BP + -0x56) = uVar4;
    *(undefined2 *)(unaff_BP + -0x58) = uVar8;
    iStack_8 = 0x17f6;
    FUN_32b2_7285();
    iStack_8 = 0x17ff;
    FUN_32b2_710c();
    iStack_8 = 0x1807;
    FUN_32b2_6e99();
    uStack_e = 0x32b2;
    uStack_10 = 0x1811;
    FUN_32b2_6eb1();
    uStack_e = 0x32b2;
    uStack_10 = 0x1816;
    FUN_32b2_75fe();
    iStack_8 = 0x32b2;
    iStack_a = 0x1820;
    FUN_32b2_6d14();
    iStack_8 = 0x32b2;
    iStack_a = 0x1828;
    FUN_32b2_704d();
    iStack_8 = 0x32b2;
    iStack_a = 0x1830;
    FUN_32b2_6eb1();
    iStack_8 = 0x32b2;
    iStack_a = 0x1838;
    FUN_32b2_6d14();
    iStack_8 = 0x32b2;
    iStack_a = 0x1840;
    FUN_32b2_710c();
    iStack_8 = 0x32b2;
    iStack_a = 0x1848;
    FUN_32b2_6d14();
    uStack_10 = 0x32b2;
    uStack_12 = 0x1852;
    FUN_32b2_6eb1();
    uStack_10 = 0x32b2;
    uStack_12 = 0x1857;
    FUN_32b2_75ec();
    iStack_a = 0x32b2;
    uStack_c = 0x1861;
    FUN_32b2_6d14();
    uVar8 = *(undefined2 *)(unaff_BP + -0x14);
    *(undefined2 *)(unaff_BP + -0x52) = 0;
    *(undefined2 *)(unaff_BP + -0x54) = 0;
    *(undefined2 *)(unaff_BP + -0x56) = 0;
    *(undefined2 *)(unaff_BP + -0x58) = uVar8;
    iStack_a = 0x32b2;
    uStack_c = 0x187a;
    FUN_32b2_7285();
    iStack_a = 0x32b2;
    uStack_c = 0x187f;
    FUN_32b2_717d();
    iStack_a = 0x32b2;
    uStack_c = 0x1887;
    FUN_32b2_704d();
    iStack_a = 0x32b2;
    uStack_c = 0x1890;
    FUN_32b2_710c();
    iStack_a = 0x32b2;
    uStack_c = 0x1898;
    FUN_32b2_6e99();
    iStack_a = 0x32b2;
    uStack_c = 0x18a0;
    FUN_32b2_710c();
    iStack_a = 0x32b2;
    uStack_c = 0x18a5;
    FUN_32b2_7173();
    iStack_a = 0x32b2;
    uStack_c = 0x18ad;
    FUN_32b2_7095();
    iStack_a = 0x32b2;
    uStack_c = 0x18b5;
    FUN_32b2_6eb1();
    iStack_a = 0x32b2;
    uStack_c = 0x18bd;
    FUN_32b2_6d14();
    iStack_a = 0x32b2;
    uStack_c = 0x18c5;
    FUN_32b2_710c();
    iStack_a = 0x32b2;
    uStack_c = 0x18cd;
    FUN_32b2_6d14();
    iStack_a = 0x32b2;
    uStack_c = 0x18d5;
    FUN_32b2_710c();
    iStack_a = 0x32b2;
    uStack_c = 0x18da;
    FUN_32b2_718c();
    iStack_a = 0x32b2;
    uStack_c = 0x18e2;
    FUN_32b2_7095();
    iStack_a = 0x32b2;
    uStack_c = 0x18ea;
    FUN_32b2_6eb1();
    uVar8 = *(undefined2 *)(unaff_BP + -0xe);
    uVar4 = *(undefined2 *)(unaff_BP + -0xc);
    *(undefined2 *)(unaff_BP + -0x52) = 0;
    *(undefined2 *)(unaff_BP + -0x54) = 0;
    *(undefined2 *)(unaff_BP + -0x56) = uVar4;
    *(undefined2 *)(unaff_BP + -0x58) = uVar8;
    iStack_a = 0x32b2;
    uStack_c = 0x1908;
    FUN_32b2_7285();
    iStack_a = 0x32b2;
    uStack_c = 0x1911;
    FUN_32b2_710c();
    iStack_a = 0x32b2;
    uStack_c = 0x1919;
    FUN_32b2_6e99();
    uStack_12 = 0x32b2;
    iStack_14 = 0x1923;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    iStack_14 = 0x1928;
    FUN_32b2_75fe();
    uStack_c = 0x32b2;
    uStack_e = 0x1932;
    FUN_32b2_6d14();
    uStack_c = 0x32b2;
    uStack_e = 0x193a;
    FUN_32b2_704d();
    uStack_c = 0x32b2;
    uStack_e = 0x1942;
    FUN_32b2_6eb1();
    uStack_c = 0x32b2;
    uStack_e = 0x194a;
    FUN_32b2_6d14();
    uStack_c = 0x32b2;
    uStack_e = 0x1952;
    FUN_32b2_710c();
    uStack_c = 0x32b2;
    uStack_e = 0x195a;
    FUN_32b2_6d14();
    iStack_14 = 0x32b2;
    uStack_16 = 0x1964;
    FUN_32b2_6eb1();
    iStack_14 = 0x32b2;
    uStack_16 = 0x1969;
    FUN_32b2_75ec();
    uStack_e = 0x32b2;
    uStack_10 = 0x1973;
    FUN_32b2_6d14();
    uVar8 = *(undefined2 *)(unaff_BP + -0x14);
    *(undefined2 *)(unaff_BP + -0x52) = 0;
    *(undefined2 *)(unaff_BP + -0x54) = 0;
    *(undefined2 *)(unaff_BP + -0x56) = 0;
    *(undefined2 *)(unaff_BP + -0x58) = uVar8;
    uStack_e = 0x32b2;
    uStack_10 = 0x198c;
    FUN_32b2_7285();
    uStack_e = 0x32b2;
    uStack_10 = 0x1991;
    FUN_32b2_717d();
    uStack_e = 0x32b2;
    uStack_10 = 0x1999;
    FUN_32b2_704d();
    uStack_e = 0x32b2;
    uStack_10 = 0x19a2;
    FUN_32b2_710c();
    uStack_e = 0x32b2;
    uStack_10 = 0x19aa;
    FUN_32b2_6e99();
    uStack_e = 0x32b2;
    uStack_10 = 0x19b2;
    FUN_32b2_710c();
    uStack_e = 0x32b2;
    uStack_10 = 0x19b7;
    FUN_32b2_7173();
    uStack_e = 0x32b2;
    uStack_10 = 0x19bf;
    FUN_32b2_7095();
    uStack_e = 0x32b2;
    uStack_10 = 0x19c7;
    FUN_32b2_6eb1();
    uStack_e = 0x32b2;
    uStack_10 = 0x19cf;
    FUN_32b2_6d14();
    uStack_e = 0x32b2;
    uStack_10 = 0x19d7;
    FUN_32b2_710c();
    uStack_e = 0x32b2;
    uStack_10 = 0x19df;
    FUN_32b2_6d14();
    uStack_e = 0x32b2;
    uStack_10 = 0x19e7;
    FUN_32b2_710c();
    uStack_e = 0x32b2;
    uStack_10 = 0x19ec;
    FUN_32b2_718c();
    uStack_e = 0x32b2;
    uStack_10 = 0x19f4;
    FUN_32b2_7095();
    uStack_e = 0x32b2;
    uStack_10 = 0x19fc;
    FUN_32b2_6eb1();
    if ((*(int *)(unaff_BP + -0x12) == *(int *)(unaff_BP + -0xe)) &&
       (*(int *)(unaff_BP + -0x10) == *(int *)(unaff_BP + -0xc))) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    return uVar8;
  }
  if (*(char *)0xb1ea == '\x03') {
    iStack_8 = 0xf97d;
    FUN_21f2_3454();
    iStack_8 = -0x674;
    FUN_21f2_2d26();
  }
  func_0x0000c3ca();
  if (*(int *)0xbc2 == 0) {
    if (*(char *)0xb1ea == '\x03') {
      if (*(int *)0xc22 == 0) {
        iStack_8 = 0x12;
        iStack_a = unaff_BP + -0x52;
        uStack_c = 0x885;
        uStack_e = 0xf9c4;
        FUN_1000_02b5();
      }
      *(undefined2 *)0xc22 = 1;
      iStack_8 = *(int *)0x9454;
      iStack_a = *(undefined2 *)0x945a;
      uStack_c = *(undefined2 *)0x9458;
      uStack_e = *(undefined2 *)0x9456;
      uStack_10 = *(undefined2 *)0x9454;
      uStack_12 = 0;
      iStack_14 = unaff_BP + -0x52;
      uStack_16 = 0;
      uStack_18 = 0;
      uStack_1a = 2;
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
    }
    else {
      if (*(byte *)0xb1ea < 2) {
        if (*(int *)0xce6 == 0) {
          iStack_8 = *(int *)0x9454;
          iStack_a = *(undefined2 *)0x945a;
          uStack_c = *(undefined2 *)0x9458;
          uStack_e = *(undefined2 *)0x9456;
          uStack_10 = *(undefined2 *)0x9454;
          uStack_12 = 0;
          iStack_14 = unaff_BP + -0x52;
          uStack_16 = 0;
          uStack_18 = 0;
          uStack_1a = 0;
          pcVar5 = (code *)swi(0x3f);
          (*pcVar5)();
        }
        else {
          iStack_8 = *(int *)0x9454;
          iStack_a = *(undefined2 *)0x945a;
          uStack_c = *(undefined2 *)0x9458;
          uStack_e = *(undefined2 *)0x9456;
          uStack_10 = *(undefined2 *)0x9454;
          uStack_12 = 0;
          iStack_14 = unaff_BP + -0x52;
          uStack_16 = 0;
          uStack_18 = 1;
          uStack_1a = 0;
          pcVar5 = (code *)swi(0x3f);
          iVar7 = (*pcVar5)();
          if (iVar7 == -1) {
            uVar8 = FUN_2bb4_66c9();
            return uVar8;
          }
        }
      }
      if (*(char *)0xb1ea == '\x02') {
        iStack_8 = *(int *)0x9454;
        iStack_a = *(undefined2 *)0x945a;
        uStack_c = *(undefined2 *)0x9458;
        uStack_e = *(undefined2 *)0x9456;
        uStack_10 = *(undefined2 *)0x9454;
        uStack_12 = 0;
        iStack_14 = unaff_BP + -0x52;
        uStack_16 = 0;
        uStack_18 = 1;
        uStack_1a = 1;
        pcVar5 = (code *)swi(0x3f);
        iVar7 = (*pcVar5)();
        if (iVar7 == -1) {
          uVar8 = FUN_2bb4_66c9();
          return uVar8;
        }
      }
    }
  }
  if (*(int *)0x158 == 0) {
    uVar8 = FUN_3ab8_5218();
    return uVar8;
  }
  if (*(char *)0x118 != '\0') {
    uVar8 = FUN_2bb4_66c9();
    return uVar8;
  }
  if ((((*(char *)0x124 == '\0') || (*(int *)0x158 == 10000)) || (*(int *)0xbc2 != 0)) ||
     (*(char *)0xb1ea != '\0')) {
    uVar8 = FUN_2bb4_66c9();
    return uVar8;
  }
  if ((((*(int *)0xa62 != 1) || (*(int *)0xa64 != 1)) &&
      ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) &&
     ((*(byte *)0xb782 < 4 || (*(int *)0xa66 != *(int *)0xa62)))) {
    if (*(byte *)0xb782 < 4) {
      uVar8 = FUN_2bb4_66c9();
      return uVar8;
    }
    if (*(int *)0xa62 != 1) goto LAB_3ab8_5003;
  }
  FUN_1885_2ec3();
  *(undefined2 *)0x158 = 0;
  *(undefined1 *)0xb1ea = 3;
  goto LAB_3ab8_4d74;
}



/* 3ab8:5089  FUN_3ab8_5089  5 bytes, 3 callers */

/* WARNING: Instruction at (ram,0x000302f0) overlaps instruction at (ram,0x000302ef)
    */

undefined2 FUN_3ab8_5089(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  int iVar8;
  int unaff_BP;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
code_r0x0003fc09:
  uStack_2 = 0;
  do {
    pcVar5 = (code *)swi(0x3f);
    iVar8 = (*pcVar5)();
    if (iVar8 == -1) {
LAB_3ab8_4d74:
      do {
        FUN_21f2_3454();
        if (*(char *)0xb1ea == '\0') {
          *(undefined1 *)0x1062 = 1;
        }
        if (*(char *)0xb1ea == '\x01') {
          FUN_21f2_3454();
        }
        if (*(char *)0xb1ea == '\x02') {
          FUN_21f2_3454();
        }
        FUN_21f2_3454();
        FUN_21f2_2d26();
        if (*(char *)(unaff_BP + -0x134) != '\0') {
          *(undefined2 *)(unaff_BP + -0x1fe) = 1;
          FUN_32b2_7285();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_6eb1();
          puVar6 = (undefined2 *)FUN_32b2_75fe();
          *(undefined2 *)(unaff_BP + -0x48) = *puVar6;
          *(undefined2 *)(unaff_BP + -0x46) = puVar6[1];
          *(undefined2 *)(unaff_BP + -0x44) = puVar6[2];
          *(undefined2 *)(unaff_BP + -0x42) = puVar6[3];
          FUN_32b2_6d14();
          FUN_32b2_6eb1();
          puVar6 = (undefined2 *)FUN_32b2_75ec();
          *(undefined2 *)(unaff_BP + -0x50) = *puVar6;
          *(undefined2 *)(unaff_BP + -0x4e) = puVar6[1];
          *(undefined2 *)(unaff_BP + -0x4c) = puVar6[2];
          *(undefined2 *)(unaff_BP + -0x4a) = puVar6[3];
          uVar7 = *(undefined2 *)(unaff_BP + -0x12);
          uVar4 = *(undefined2 *)(unaff_BP + -0x10);
          *(undefined2 *)(unaff_BP + -0x52) = 0;
          *(undefined2 *)(unaff_BP + -0x54) = 0;
          *(undefined2 *)(unaff_BP + -0x56) = uVar4;
          *(undefined2 *)(unaff_BP + -0x58) = uVar7;
          FUN_32b2_7285();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_6eb1();
          FUN_32b2_75fe();
          FUN_32b2_6d14();
          FUN_32b2_704d();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_6d14();
          FUN_32b2_6eb1();
          FUN_32b2_75ec();
          FUN_32b2_6d14();
          uVar7 = *(undefined2 *)(unaff_BP + -0x14);
          *(undefined2 *)(unaff_BP + -0x52) = 0;
          *(undefined2 *)(unaff_BP + -0x54) = 0;
          *(undefined2 *)(unaff_BP + -0x56) = 0;
          *(undefined2 *)(unaff_BP + -0x58) = uVar7;
          FUN_32b2_7285();
          FUN_32b2_717d();
          FUN_32b2_704d();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_710c();
          FUN_32b2_7173();
          FUN_32b2_7095();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_718c();
          FUN_32b2_7095();
          FUN_32b2_6eb1();
          uVar7 = *(undefined2 *)(unaff_BP + -0xe);
          uVar4 = *(undefined2 *)(unaff_BP + -0xc);
          *(undefined2 *)(unaff_BP + -0x52) = 0;
          *(undefined2 *)(unaff_BP + -0x54) = 0;
          *(undefined2 *)(unaff_BP + -0x56) = uVar4;
          *(undefined2 *)(unaff_BP + -0x58) = uVar7;
          FUN_32b2_7285();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_6eb1();
          FUN_32b2_75fe();
          FUN_32b2_6d14();
          FUN_32b2_704d();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_6d14();
          FUN_32b2_6eb1();
          FUN_32b2_75ec();
          FUN_32b2_6d14();
          uVar7 = *(undefined2 *)(unaff_BP + -0x14);
          *(undefined2 *)(unaff_BP + -0x52) = 0;
          *(undefined2 *)(unaff_BP + -0x54) = 0;
          *(undefined2 *)(unaff_BP + -0x56) = 0;
          *(undefined2 *)(unaff_BP + -0x58) = uVar7;
          FUN_32b2_7285();
          FUN_32b2_717d();
          FUN_32b2_704d();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_710c();
          FUN_32b2_7173();
          FUN_32b2_7095();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_718c();
          FUN_32b2_7095();
          FUN_32b2_6eb1();
          if ((*(int *)(unaff_BP + -0x12) == *(int *)(unaff_BP + -0xe)) &&
             (*(int *)(unaff_BP + -0x10) == *(int *)(unaff_BP + -0xc))) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
          return uVar7;
        }
        if (*(char *)0xb1ea == '\x03') {
          FUN_21f2_3454();
          FUN_21f2_2d26();
        }
        func_0x0000c3ca();
        if (*(int *)0xbc2 == 0) {
          if (*(char *)0xb1ea == '\x03') {
            if (*(int *)0xc22 == 0) {
              FUN_1000_02b5();
            }
            *(undefined2 *)0xc22 = 1;
            uStack_2 = 2;
            pcVar5 = (code *)swi(0x3f);
            (*pcVar5)();
          }
          else {
            if (*(byte *)0xb1ea < 2) {
              if (*(int *)0xce6 == 0) {
                uStack_2 = 0;
                pcVar5 = (code *)swi(0x3f);
                (*pcVar5)();
              }
              else {
                uStack_2 = 0;
                pcVar5 = (code *)swi(0x3f);
                iVar8 = (*pcVar5)();
                if (iVar8 == -1) {
                  uVar7 = FUN_2bb4_66c9();
                  return uVar7;
                }
              }
            }
            if (*(char *)0xb1ea == '\x02') {
              uStack_2 = 1;
              pcVar5 = (code *)swi(0x3f);
              iVar8 = (*pcVar5)();
              if (iVar8 == -1) {
                uVar7 = FUN_2bb4_66c9();
                return uVar7;
              }
            }
          }
        }
        if (*(int *)0x158 == 0) {
          uVar7 = FUN_3ab8_5218();
          return uVar7;
        }
        if (*(char *)0x118 != '\0') {
          uVar7 = FUN_2bb4_66c9();
          return uVar7;
        }
        if ((((*(char *)0x124 == '\0') || (*(int *)0x158 == 10000)) || (*(int *)0xbc2 != 0)) ||
           (*(char *)0xb1ea != '\0')) {
          uVar7 = FUN_2bb4_66c9();
          return uVar7;
        }
        if ((((*(int *)0xa62 != 1) || (*(int *)0xa64 != 1)) &&
            ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) &&
           ((*(byte *)0xb782 < 4 || (*(int *)0xa66 != *(int *)0xa62)))) {
          if (*(byte *)0xb782 < 4) {
            uVar7 = FUN_2bb4_66c9();
            return uVar7;
          }
          if (*(int *)0xa62 != 1) {
LAB_3ab8_5003:
            uVar7 = FUN_2bb4_66c9();
            return uVar7;
          }
        }
        FUN_1885_2ec3();
        *(undefined2 *)0x158 = 0;
        *(undefined1 *)0xb1ea = 3;
      } while( true );
    }
    if (*(int *)0x158 != 0) {
      func_0x00008095();
    }
    do {
      if (*(int *)(unaff_BP + -0x1fe) < 1) {
        uVar7 = FUN_3ab8_5188();
        return uVar7;
      }
      if (7 < *(int *)(unaff_BP + -0x1fe)) {
        uVar7 = FUN_3ab8_5188();
        return uVar7;
      }
      if ((*(int *)(unaff_BP + -0x1fe) != 7) &&
         ((bVar11 = *(byte *)0xb1ea < 3, *(byte *)0xb1ea != 3 ||
          (bVar11 = *(uint *)(unaff_BP + -0x1fe) < 4, *(uint *)(unaff_BP + -0x1fe) != 4)))) {
        if (bVar11) goto code_r0x00030201;
        while( true ) {
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          uStack_2 = 0x335;
          FUN_32b2_6eb1();
          uStack_2 = 0x33d;
          FUN_32b2_6cc6();
          uStack_2 = 0x342;
          FUN_32b2_7258();
          uStack_8 = 0x32b2;
          FUN_32b2_6eb1();
          uStack_8 = 1;
          uStack_c = 0x354;
          FUN_3ab8_5089();
          uVar10 = (undefined1 *)0xffc9 < &uStack_1a;
          uVar12 = &stack0x0000 == (undefined1 *)0xffe4;
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
          if (!(bool)uVar10 && !(bool)uVar12) {
            FUN_32b2_6d14();
            FUN_32b2_6d14();
            FUN_32b2_7191();
            if (!(bool)uVar12) {
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
              uStack_2 = *(undefined2 *)(unaff_BP + -0x48);
              uStack_4 = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_6 = *(undefined2 *)(unaff_BP + -0x4c);
              uStack_8 = *(undefined2 *)(unaff_BP + -0x4e);
              uStack_c = 0x622;
              FUN_32b2_6d14();
              uStack_12 = 0x32b2;
              uStack_14 = 0x62c;
              FUN_32b2_6eb1();
              uStack_12 = 0x32b2;
              uStack_14 = 0x635;
              FUN_32b2_6d14();
              uStack_1a = 0x32b2;
              uStack_1c = 0x63f;
              FUN_32b2_6eb1();
              uStack_1a = 0;
              uStack_1c = 0x32b2;
              FUN_3ab8_5089();
              uVar7 = *(undefined2 *)(unaff_BP + -0x60);
              *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
              *(undefined2 *)(unaff_BP + -0x84) = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x88);
              *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
              *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
              puVar9 = &uStack_8;
              puVar6 = (undefined2 *)(unaff_BP + 0x1c);
              for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar3 = puVar9;
                puVar9 = puVar9 + 1;
                puVar2 = puVar6;
                puVar6 = puVar6 + 1;
                *puVar3 = *puVar2;
              }
              uStack_c = 0x684;
              iVar8 = FUN_3ab8_522f();
              uVar10 = 0;
              uVar12 = iVar8 == 0;
              if (!(bool)uVar12) {
                FUN_32b2_6d14();
                FUN_32b2_6cc6();
                FUN_32b2_701d();
                FUN_32b2_6fc7();
                FUN_32b2_7258();
                FUN_32b2_7191();
                if ((bool)uVar10 || (bool)uVar12) {
                  FUN_32b2_6d14();
                  FUN_32b2_6cc6();
                  FUN_32b2_701d();
                  FUN_32b2_6fc7();
                  FUN_32b2_7258();
                  FUN_32b2_7191();
                  if ((bool)uVar10 || (bool)uVar12) {
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
              if (!(bool)uVar10) {
                FUN_32b2_6d14();
                FUN_32b2_6fc7();
                FUN_32b2_6d14();
                FUN_32b2_710c();
                FUN_32b2_710c();
                FUN_32b2_7191();
                if (!(bool)uVar10) {
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
                uStack_2 = *(undefined2 *)(unaff_BP + -0x6a);
                uStack_4 = *(undefined2 *)(unaff_BP + -0x48);
                uStack_6 = *(undefined2 *)(unaff_BP + -0x4a);
                uStack_8 = *(undefined2 *)(unaff_BP + -0x4c);
                uStack_c = 0x32b2;
                uStack_e = 0x820;
                FUN_32b2_6d14();
                uStack_14 = 0x32b2;
                uStack_16 = 0x82a;
                FUN_32b2_6eb1();
                uStack_14 = 0x32b2;
                uStack_16 = 0x833;
                FUN_32b2_6d14();
                uStack_1c = 0x32b2;
                FUN_32b2_6eb1();
                uStack_1c = 0;
                FUN_3ab8_5089(0x32b2);
                uVar10 = (undefined1 *)0xffc9 < &uStack_1c;
                uVar12 = &stack0x0000 == (undefined1 *)0xffe6;
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
                puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
                *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
                puVar6[1] = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0x88);
                puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
                *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar6[1] = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0x60);
                puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
                puVar6[1] = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0x88);
                puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar6[1] = uVar7;
                piVar1 = (int *)(unaff_BP + -0x36);
                *piVar1 = *piVar1 + 1;
                uVar12 = *piVar1 == 0;
                FUN_32b2_6d14();
                FUN_32b2_6d14();
                FUN_32b2_7191();
                if (!(bool)uVar10 && !(bool)uVar12) {
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
                  uStack_2 = *(undefined2 *)(unaff_BP + -0x68);
                  uStack_4 = *(undefined2 *)(unaff_BP + -0x6a);
                  uStack_6 = *(undefined2 *)(unaff_BP + -0x48);
                  uStack_8 = *(undefined2 *)(unaff_BP + -0x4a);
                  uStack_c = *(undefined2 *)(unaff_BP + -0x4e);
                  uStack_e = 0x32b2;
                  uStack_10 = 0x9b0;
                  FUN_32b2_6d14();
                  uStack_16 = 0x32b2;
                  uStack_18 = 0x9ba;
                  FUN_32b2_6eb1();
                  uStack_16 = 0x32b2;
                  uStack_18 = 0x9c3;
                  FUN_32b2_6d14();
                  FUN_32b2_6eb1();
                  FUN_3ab8_5089(0x32b2,0);
                  uVar10 = &stack0x0000 == (undefined1 *)0xffe8;
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if ((bool)uVar10) {
                    uVar7 = *(undefined2 *)(unaff_BP + 8);
                    *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                    *(undefined2 *)(unaff_BP + -0x60) = uVar7;
                  }
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if ((bool)uVar10) {
                    uVar7 = *(undefined2 *)(unaff_BP + 0xc);
                    *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                    *(undefined2 *)(unaff_BP + -0x88) = uVar7;
                  }
                  uVar7 = *(undefined2 *)(unaff_BP + -0x60);
                  puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                  *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
                  puVar6[1] = uVar7;
                  uVar7 = *(undefined2 *)(unaff_BP + -0x88);
                  puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                  *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
                  puVar6[1] = uVar7;
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
          uVar10 = &stack0x0000 == (undefined1 *)0xffe8;
          FUN_32b2_6d14();
          FUN_32b2_704d();
          FUN_32b2_7095();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar10) {
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_7191();
            if ((bool)uVar10) {
              return 0;
            }
          }
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          uStack_6 = 0x32b2;
          uStack_8 = 0x1df;
          FUN_32b2_6eb1();
          uStack_6 = 0x32b2;
          uStack_8 = 0x1e7;
          FUN_32b2_6cc6();
          uStack_6 = 0x32b2;
          uStack_8 = 0x1ec;
          FUN_32b2_7258();
          uStack_e = 0x32b2;
          uStack_10 = 0x1f6;
          FUN_32b2_6eb1();
          uStack_e = 0x32b2;
          uStack_10 = 0x1fa;
          iVar8 = FUN_3ab8_4fbd();
          if (iVar8 == 0) break;
code_r0x00030201:
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
          FUN_32b2_6d14();
          uStack_6 = 0x32b2;
          uStack_8 = 0x269;
          FUN_32b2_6eb1();
          uStack_6 = 0x32b2;
          uStack_8 = 0x271;
          FUN_32b2_6cc6();
          uStack_6 = 0x32b2;
          uStack_8 = 0x276;
          FUN_32b2_7258();
          uStack_6 = 0x32b2;
          uStack_8 = 0x27e;
          FUN_32b2_6e99();
          uStack_e = 0x32b2;
          uStack_10 = 0x288;
          FUN_32b2_6eb1();
          uStack_e = 0x32b2;
          uStack_10 = 0x290;
          FUN_32b2_6cc6();
          uStack_e = 0x32b2;
          uStack_10 = 0x295;
          FUN_32b2_7258();
          uStack_16 = 0x32b2;
          uStack_18 = 0x29f;
          FUN_32b2_6eb1();
          uStack_16 = 0x32b2;
          uStack_18 = 0x2a7;
          FUN_32b2_6cc6();
          uStack_16 = 0x32b2;
          uStack_18 = 0x2ac;
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_3ab8_5089(0x32b2,1);
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
        }
        return 0;
      }
      if ((*(char *)0xb1ea != '\0') && (*(char *)0xb1ea != '\x03')) {
        uVar7 = FUN_3ab8_533a();
        return uVar7;
      }
      FUN_21f2_3454();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_1def_07a4();
      FUN_3ab8_014c();
      iVar8 = FUN_1def_0904();
      *(int *)(unaff_BP + -0x236) = iVar8;
      if (*(int *)0x158 != 0) {
        uVar7 = FUN_2bb4_66c9();
        return uVar7;
      }
      if (((iVar8 != 1) && (*(int *)(unaff_BP + -0x146) != 1)) && (iVar8 != -1)) {
        uVar7 = FUN_3ab8_52e6();
        return uVar7;
      }
      uVar7 = *(undefined2 *)0x9480;
      uVar4 = *(undefined2 *)0x9482;
      *(undefined2 *)(unaff_BP + -500) = uVar7;
      *(undefined2 *)(unaff_BP + -0x1f2) = uVar4;
      *(undefined2 *)(unaff_BP + -0x204) = uVar7;
      *(undefined2 *)(unaff_BP + -0x202) = uVar4;
      uVar7 = *(undefined2 *)0x943c;
      uVar4 = *(undefined2 *)0x943e;
      *(undefined2 *)(unaff_BP + -0x144) = uVar7;
      *(undefined2 *)(unaff_BP + -0x142) = uVar4;
      *(undefined2 *)(unaff_BP + -0x15c) = uVar7;
      *(undefined2 *)(unaff_BP + -0x15a) = uVar4;
      FUN_21f2_3454();
      if (*(byte *)0xb1ea < 2) {
        FUN_21f2_2d26();
      }
      if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
        FUN_21f2_2d26();
      }
      if (*(char *)0xb1ea == '\x01') {
        FUN_21f2_2d26();
      }
      FUN_1def_07a4();
      if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
        FUN_3ab8_014c();
      }
      if (*(char *)0xb1ea != '\x02') {
        uVar7 = FUN_3ab8_4fc8();
        return uVar7;
      }
      *(undefined2 *)0xc2c = 1;
      *(undefined2 *)0xc20 = 1;
      uVar7 = FUN_1def_0904();
      *(undefined2 *)(unaff_BP + -0x1fe) = uVar7;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) goto LAB_3ab8_5003;
      func_0x0000c3ca();
      if ((*(int *)(unaff_BP + -0x1fe) == 0x14) && (*(char *)0xb1ea == '\x02')) {
        func_0x00008095();
        uVar7 = FUN_2bb4_66c9();
        return uVar7;
      }
    } while (*(int *)(unaff_BP + -0x1fe) != -1);
    *(undefined2 *)(unaff_BP + -0x146) = 0;
    if (*(char *)0xb1ea == '\x03') {
      func_0x00008095();
      goto LAB_3ab8_4d74;
    }
    if (*(char *)0xb1ea == '\0') {
      *(undefined1 *)0x1062 = 1;
    }
    if (*(char *)0xb1ea != '\x02') goto code_r0x0003fc09;
    uStack_2 = 1;
  } while( true );
}



/* 3ab8:50be  FUN_3ab8_50be  24 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x000302f0) overlaps instruction at (ram,0x000302ef)
    */

undefined2 __cdecl16far FUN_3ab8_50be(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  int iVar8;
  int unaff_BP;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  uint uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  
  do {
    if ((*(int *)(unaff_BP + -0x1fe) != 7) &&
       ((bVar11 = *(byte *)0xb1ea < 3, *(byte *)0xb1ea != 3 ||
        (bVar11 = *(uint *)(unaff_BP + -0x1fe) < 4, *(uint *)(unaff_BP + -0x1fe) != 4)))) {
      if (bVar11) goto code_r0x00030201;
      while( true ) {
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        iStack_8 = 0x32b2;
        iStack_a = 0x30c;
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x314;
        FUN_32b2_6d14();
        uStack_10 = 0x32b2;
        uStack_12 = 0x31e;
        FUN_32b2_6eb1();
        uStack_10 = 0x32b2;
        uStack_12 = 0x326;
        FUN_32b2_6cc6();
        uStack_10 = 0x32b2;
        uStack_12 = 0x32b;
        FUN_32b2_7258();
        uStack_18 = 0x32b2;
        uStack_1a = 0x335;
        FUN_32b2_6eb1();
        uStack_18 = 0x32b2;
        uStack_1a = 0x33d;
        FUN_32b2_6cc6();
        uStack_18 = 0x32b2;
        uStack_1a = 0x342;
        FUN_32b2_7258();
        uStack_20 = 0x32b2;
        FUN_32b2_6eb1();
        uStack_20 = 1;
        uStack_24 = 0x354;
        FUN_3ab8_5089();
        uVar10 = (undefined1 *)0xffc9 < &uStack_32;
        uVar12 = &stack0x0000 == (undefined1 *)0xfffc;
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
        if (!(bool)uVar10 && !(bool)uVar12) {
          FUN_32b2_6d14();
          FUN_32b2_6d14();
          FUN_32b2_7191();
          if (!(bool)uVar12) {
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
            iStack_a = 0x32b2;
            uStack_c = 0x5ea;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x5f2;
            FUN_32b2_6cc6();
            iStack_a = 0x32b2;
            uStack_c = 0x5f7;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            iStack_14 = 0x601;
            FUN_32b2_6eb1();
            uStack_12 = *(undefined2 *)(unaff_BP + -100);
            iStack_14 = *(undefined2 *)(unaff_BP + -0x66);
            uStack_16 = *(undefined2 *)(unaff_BP + -0x68);
            uStack_18 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x48);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_24 = 0x622;
            FUN_32b2_6d14();
            uStack_2a = 0x32b2;
            uStack_2c = 0x62c;
            FUN_32b2_6eb1();
            uStack_2a = 0x32b2;
            uStack_2c = 0x635;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x63f;
            FUN_32b2_6eb1();
            uStack_32 = 0;
            uStack_34 = 0x32b2;
            FUN_3ab8_5089();
            uVar7 = *(undefined2 *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
            *(undefined2 *)(unaff_BP + -0x84) = uVar7;
            uVar7 = *(undefined2 *)(unaff_BP + -0x88);
            *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
            *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
            puVar9 = &uStack_20;
            puVar6 = (undefined2 *)(unaff_BP + 0x1c);
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar3 = *puVar2;
            }
            uStack_24 = 0x684;
            iVar8 = FUN_3ab8_522f();
            uVar10 = 0;
            uVar12 = iVar8 == 0;
            if (!(bool)uVar12) {
              FUN_32b2_6d14();
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_6fc7();
              FUN_32b2_7258();
              FUN_32b2_7191();
              if ((bool)uVar10 || (bool)uVar12) {
                FUN_32b2_6d14();
                FUN_32b2_6cc6();
                FUN_32b2_701d();
                FUN_32b2_6fc7();
                FUN_32b2_7258();
                FUN_32b2_7191();
                if ((bool)uVar10 || (bool)uVar12) {
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
            if (!(bool)uVar10) {
              FUN_32b2_6d14();
              FUN_32b2_6fc7();
              FUN_32b2_6d14();
              FUN_32b2_710c();
              FUN_32b2_710c();
              FUN_32b2_7191();
              if (!(bool)uVar10) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
              iStack_8 = 0x774;
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
              uStack_c = 0x32b2;
              uStack_e = 0x7e8;
              FUN_32b2_6eb1();
              uStack_c = 0x32b2;
              uStack_e = 0x7f0;
              FUN_32b2_6cc6();
              uStack_c = 0x32b2;
              uStack_e = 0x7f5;
              FUN_32b2_7258();
              iStack_14 = 0x32b2;
              uStack_16 = 0x7ff;
              FUN_32b2_6eb1();
              iStack_14 = *(undefined2 *)(unaff_BP + -100);
              uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
              uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
              uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
              uStack_24 = 0x32b2;
              uStack_26 = 0x820;
              FUN_32b2_6d14();
              uStack_2c = 0x32b2;
              uStack_2e = 0x82a;
              FUN_32b2_6eb1();
              uStack_2c = 0x32b2;
              uStack_2e = 0x833;
              FUN_32b2_6d14();
              uStack_34 = 0x32b2;
              FUN_32b2_6eb1();
              uStack_34 = 0;
              FUN_3ab8_5089(0x32b2);
              uVar10 = (undefined1 *)0xffc9 < &uStack_34;
              uVar12 = &stack0x0000 == (undefined1 *)0xfffe;
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
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
              puVar6[1] = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x88);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar6[1] = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x60);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
              puVar6[1] = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x88);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar6[1] = uVar7;
              piVar1 = (int *)(unaff_BP + -0x36);
              *piVar1 = *piVar1 + 1;
              uVar12 = *piVar1 == 0;
              FUN_32b2_6d14();
              FUN_32b2_6d14();
              FUN_32b2_7191();
              if (!(bool)uVar10 && !(bool)uVar12) {
                iStack_8 = 0x32b2;
                iStack_a = 0x8ff;
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
                iStack_8 = 0x969;
                FUN_32b2_6cc6();
                iStack_8 = 0x96e;
                FUN_32b2_7258();
                uStack_e = 0x32b2;
                uStack_10 = 0x978;
                FUN_32b2_6eb1();
                uStack_e = 0x32b2;
                uStack_10 = 0x980;
                FUN_32b2_6cc6();
                uStack_e = 0x32b2;
                uStack_10 = 0x985;
                FUN_32b2_7258();
                uStack_16 = 0x32b2;
                uStack_18 = 0x98f;
                FUN_32b2_6eb1();
                uStack_16 = *(undefined2 *)(unaff_BP + -100);
                uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
                uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
                uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
                uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
                uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
                uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
                uStack_26 = 0x32b2;
                uStack_28 = 0x9b0;
                FUN_32b2_6d14();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9ba;
                FUN_32b2_6eb1();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9c3;
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_3ab8_5089(0x32b2,0);
                uVar10 = &stack0x0000 == (undefined1 *)0x0;
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
                  uVar7 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar7;
                }
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
                  uVar7 = *(undefined2 *)(unaff_BP + 0xc);
                  *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                  *(undefined2 *)(unaff_BP + -0x88) = uVar7;
                }
                uVar7 = *(undefined2 *)(unaff_BP + -0x60);
                puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
                puVar6[1] = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0x88);
                puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar6[1] = uVar7;
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
        iStack_8 = 0x119;
        FUN_32b2_75fe();
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x150;
        FUN_32b2_75ec();
        uVar10 = &stack0x0000 == (undefined1 *)0x0;
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar10) {
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar10) {
            return 0;
          }
        }
        iStack_8 = *(int *)(unaff_BP + -0x7e);
        iStack_a = *(undefined2 *)(unaff_BP + -0x80);
        uStack_c = *(undefined2 *)(unaff_BP + -0x82);
        uStack_e = *(undefined2 *)(unaff_BP + -0x58);
        uStack_10 = *(undefined2 *)(unaff_BP + -0x5a);
        uStack_12 = *(undefined2 *)(unaff_BP + -0x5c);
        iStack_14 = *(int *)(unaff_BP + -0x5e);
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d0;
        FUN_32b2_6cc6();
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d5;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1df;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1e7;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1ec;
        FUN_32b2_7258();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1f6;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1fa;
        iVar8 = FUN_3ab8_4fbd();
        if (iVar8 == 0) break;
code_r0x00030201:
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6e99();
        FUN_32b2_6ef9();
        iStack_8 = 0x231;
        FUN_32b2_6cc6();
        iStack_8 = 0x236;
        FUN_32b2_7258();
        uStack_e = 0x32b2;
        uStack_10 = 0x240;
        FUN_32b2_6eb1();
        uStack_e = 0x32b2;
        uStack_10 = 0x248;
        FUN_32b2_6cc6();
        uStack_e = 0x32b2;
        uStack_10 = 0x24d;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 599;
        FUN_32b2_6eb1();
        uStack_16 = 0x32b2;
        uStack_18 = 0x25f;
        FUN_32b2_6d14();
        uStack_1e = 0x32b2;
        uStack_20 = 0x269;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x271;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x276;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x27e;
        FUN_32b2_6e99();
        uStack_26 = 0x32b2;
        uStack_28 = 0x288;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x290;
        FUN_32b2_6cc6();
        uStack_26 = 0x32b2;
        uStack_28 = 0x295;
        FUN_32b2_7258();
        uStack_2e = 0x32b2;
        uStack_30 = 0x29f;
        FUN_32b2_6eb1();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2a7;
        FUN_32b2_6cc6();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2ac;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_3ab8_5089(0x32b2,1);
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
      }
      return 0;
    }
    if ((*(char *)0xb1ea != '\0') && (*(char *)0xb1ea != '\x03')) {
      uVar7 = FUN_3ab8_533a();
      return uVar7;
    }
    iStack_8 = 0xfc75;
    FUN_21f2_3454();
    iStack_8 = 0xfc85;
    FUN_21f2_2d26();
    iStack_8 = 0xfc95;
    FUN_21f2_2d26();
    iStack_8 = 0xfca5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcb5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcc5;
    FUN_1def_07a4();
    iStack_8 = 0x1bb4;
    iStack_a = 0xfcd7;
    FUN_3ab8_014c();
    iStack_8 = unaff_BP + -0x1cc;
    iStack_a = 1;
    uStack_c = 0x1bb4;
    uStack_e = 0xfcf7;
    iVar8 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x236) = iVar8;
    if (*(int *)0x158 != 0) {
      uVar7 = FUN_2bb4_66c9();
      return uVar7;
    }
    if (((iVar8 != 1) && (*(int *)(unaff_BP + -0x146) != 1)) && (iVar8 != -1)) {
      uVar7 = FUN_3ab8_52e6();
      return uVar7;
    }
    uVar7 = *(undefined2 *)0x9480;
    uVar4 = *(undefined2 *)0x9482;
    *(undefined2 *)(unaff_BP + -500) = uVar7;
    *(undefined2 *)(unaff_BP + -0x1f2) = uVar4;
    *(undefined2 *)(unaff_BP + -0x204) = uVar7;
    *(undefined2 *)(unaff_BP + -0x202) = uVar4;
    uVar7 = *(undefined2 *)0x943c;
    uVar4 = *(undefined2 *)0x943e;
    *(undefined2 *)(unaff_BP + -0x144) = uVar7;
    *(undefined2 *)(unaff_BP + -0x142) = uVar4;
    *(undefined2 *)(unaff_BP + -0x15c) = uVar7;
    *(undefined2 *)(unaff_BP + -0x15a) = uVar4;
    iStack_8 = 0xfdd4;
    FUN_21f2_3454();
    if (*(byte *)0xb1ea < 2) {
      iStack_8 = 0xfdeb;
      FUN_21f2_2d26();
    }
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0xfe09;
      FUN_21f2_2d26();
    }
    if (*(char *)0xb1ea == '\x01') {
      iStack_8 = 0xfe20;
      FUN_21f2_2d26();
    }
    iStack_8 = 0xfe30;
    FUN_1def_07a4();
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0x1bb4;
      iStack_a = 0xfe50;
      FUN_3ab8_014c();
    }
    if (*(char *)0xb1ea != '\x02') {
      uVar7 = FUN_3ab8_4fc8();
      return uVar7;
    }
    *(undefined2 *)0xc2c = 1;
    iStack_8 = unaff_BP + -0x1cc;
    *(undefined2 *)0xc20 = 1;
    iStack_a = 1;
    uStack_c = 0x1bb4;
    uStack_e = 0xfb6e;
    uVar7 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x1fe) = uVar7;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xc2c = 0;
    if (*(int *)0x158 != 0) goto LAB_3ab8_5003;
    func_0x0000c3ca();
    if ((*(int *)(unaff_BP + -0x1fe) == 0x14) && (*(char *)0xb1ea == '\x02')) {
      func_0x00008095();
      uVar7 = FUN_2bb4_66c9();
      return uVar7;
    }
    if (*(int *)(unaff_BP + -0x1fe) == -1) {
      *(undefined2 *)(unaff_BP + -0x146) = 0;
      if (*(char *)0xb1ea == '\x03') {
        func_0x00008095();
LAB_3ab8_4d74:
        do {
          iStack_8 = 0xf901;
          FUN_21f2_3454();
          if (*(char *)0xb1ea == '\0') {
            *(undefined1 *)0x1062 = 1;
          }
          if (*(char *)0xb1ea == '\x01') {
            iStack_8 = 0xf923;
            FUN_21f2_3454();
          }
          if (*(char *)0xb1ea == '\x02') {
            iStack_8 = 0xf939;
            FUN_21f2_3454();
          }
          iStack_8 = 0xf948;
          FUN_21f2_3454();
          iStack_8 = -0x6a9;
          FUN_21f2_2d26();
          if (*(char *)(unaff_BP + -0x134) != '\0') {
            *(undefined2 *)(unaff_BP + -0x1fe) = 1;
            FUN_32b2_7285();
            FUN_32b2_710c();
            FUN_32b2_6e99();
            iStack_a = 0x32b2;
            uStack_c = 0x17a0;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x17a5;
            puVar6 = (undefined2 *)FUN_32b2_75fe();
            *(undefined2 *)(unaff_BP + -0x48) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x46) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x44) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x42) = puVar6[3];
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x17c5;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x17ca;
            puVar6 = (undefined2 *)FUN_32b2_75ec();
            *(undefined2 *)(unaff_BP + -0x50) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x4e) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x4c) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x4a) = puVar6[3];
            uVar7 = *(undefined2 *)(unaff_BP + -0x12);
            uVar4 = *(undefined2 *)(unaff_BP + -0x10);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar7;
            iStack_8 = 0x17f6;
            FUN_32b2_7285();
            iStack_8 = 0x17ff;
            FUN_32b2_710c();
            iStack_8 = 0x1807;
            FUN_32b2_6e99();
            uStack_e = 0x32b2;
            uStack_10 = 0x1811;
            FUN_32b2_6eb1();
            uStack_e = 0x32b2;
            uStack_10 = 0x1816;
            FUN_32b2_75fe();
            iStack_8 = 0x32b2;
            iStack_a = 0x1820;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x1828;
            FUN_32b2_704d();
            iStack_8 = 0x32b2;
            iStack_a = 0x1830;
            FUN_32b2_6eb1();
            iStack_8 = 0x32b2;
            iStack_a = 0x1838;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x1840;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            iStack_a = 0x1848;
            FUN_32b2_6d14();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1852;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1857;
            FUN_32b2_75ec();
            iStack_a = 0x32b2;
            uStack_c = 0x1861;
            FUN_32b2_6d14();
            uVar7 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar7;
            iStack_a = 0x32b2;
            uStack_c = 0x187a;
            FUN_32b2_7285();
            iStack_a = 0x32b2;
            uStack_c = 0x187f;
            FUN_32b2_717d();
            iStack_a = 0x32b2;
            uStack_c = 0x1887;
            FUN_32b2_704d();
            iStack_a = 0x32b2;
            uStack_c = 0x1890;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x1898;
            FUN_32b2_6e99();
            iStack_a = 0x32b2;
            uStack_c = 0x18a0;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18a5;
            FUN_32b2_7173();
            iStack_a = 0x32b2;
            uStack_c = 0x18ad;
            FUN_32b2_7095();
            iStack_a = 0x32b2;
            uStack_c = 0x18b5;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x18bd;
            FUN_32b2_6d14();
            iStack_a = 0x32b2;
            uStack_c = 0x18c5;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18cd;
            FUN_32b2_6d14();
            iStack_a = 0x32b2;
            uStack_c = 0x18d5;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18da;
            FUN_32b2_718c();
            iStack_a = 0x32b2;
            uStack_c = 0x18e2;
            FUN_32b2_7095();
            iStack_a = 0x32b2;
            uStack_c = 0x18ea;
            FUN_32b2_6eb1();
            uVar7 = *(undefined2 *)(unaff_BP + -0xe);
            uVar4 = *(undefined2 *)(unaff_BP + -0xc);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar7;
            iStack_a = 0x32b2;
            uStack_c = 0x1908;
            FUN_32b2_7285();
            iStack_a = 0x32b2;
            uStack_c = 0x1911;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x1919;
            FUN_32b2_6e99();
            uStack_12 = 0x32b2;
            iStack_14 = 0x1923;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            iStack_14 = 0x1928;
            FUN_32b2_75fe();
            uStack_c = 0x32b2;
            uStack_e = 0x1932;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x193a;
            FUN_32b2_704d();
            uStack_c = 0x32b2;
            uStack_e = 0x1942;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x194a;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x1952;
            FUN_32b2_710c();
            uStack_c = 0x32b2;
            uStack_e = 0x195a;
            FUN_32b2_6d14();
            iStack_14 = 0x32b2;
            uStack_16 = 0x1964;
            FUN_32b2_6eb1();
            iStack_14 = 0x32b2;
            uStack_16 = 0x1969;
            FUN_32b2_75ec();
            uStack_e = 0x32b2;
            uStack_10 = 0x1973;
            FUN_32b2_6d14();
            uVar7 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar7;
            uStack_e = 0x32b2;
            uStack_10 = 0x198c;
            FUN_32b2_7285();
            uStack_e = 0x32b2;
            uStack_10 = 0x1991;
            FUN_32b2_717d();
            uStack_e = 0x32b2;
            uStack_10 = 0x1999;
            FUN_32b2_704d();
            uStack_e = 0x32b2;
            uStack_10 = 0x19a2;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19aa;
            FUN_32b2_6e99();
            uStack_e = 0x32b2;
            uStack_10 = 0x19b2;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19b7;
            FUN_32b2_7173();
            uStack_e = 0x32b2;
            uStack_10 = 0x19bf;
            FUN_32b2_7095();
            uStack_e = 0x32b2;
            uStack_10 = 0x19c7;
            FUN_32b2_6eb1();
            uStack_e = 0x32b2;
            uStack_10 = 0x19cf;
            FUN_32b2_6d14();
            uStack_e = 0x32b2;
            uStack_10 = 0x19d7;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19df;
            FUN_32b2_6d14();
            uStack_e = 0x32b2;
            uStack_10 = 0x19e7;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19ec;
            FUN_32b2_718c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19f4;
            FUN_32b2_7095();
            uStack_e = 0x32b2;
            uStack_10 = 0x19fc;
            FUN_32b2_6eb1();
            if ((*(int *)(unaff_BP + -0x12) == *(int *)(unaff_BP + -0xe)) &&
               (*(int *)(unaff_BP + -0x10) == *(int *)(unaff_BP + -0xc))) {
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
            }
            return uVar7;
          }
          if (*(char *)0xb1ea == '\x03') {
            iStack_8 = 0xf97d;
            FUN_21f2_3454();
            iStack_8 = -0x674;
            FUN_21f2_2d26();
          }
          func_0x0000c3ca();
          if (*(int *)0xbc2 == 0) {
            if (*(char *)0xb1ea == '\x03') {
              if (*(int *)0xc22 == 0) {
                iStack_8 = 0x12;
                iStack_a = unaff_BP + -0x52;
                uStack_c = 0x885;
                uStack_e = 0xf9c4;
                FUN_1000_02b5();
              }
              *(undefined2 *)0xc22 = 1;
              iStack_8 = *(int *)0x9454;
              iStack_a = *(undefined2 *)0x945a;
              uStack_c = *(undefined2 *)0x9458;
              uStack_e = *(undefined2 *)0x9456;
              uStack_10 = *(undefined2 *)0x9454;
              uStack_12 = 0;
              iStack_14 = unaff_BP + -0x52;
              uStack_16 = 0;
              uStack_18 = 0;
              uStack_1a = 2;
              pcVar5 = (code *)swi(0x3f);
              (*pcVar5)();
            }
            else {
              if (*(byte *)0xb1ea < 2) {
                if (*(int *)0xce6 == 0) {
                  iStack_8 = *(int *)0x9454;
                  iStack_a = *(undefined2 *)0x945a;
                  uStack_c = *(undefined2 *)0x9458;
                  uStack_e = *(undefined2 *)0x9456;
                  uStack_10 = *(undefined2 *)0x9454;
                  uStack_12 = 0;
                  iStack_14 = unaff_BP + -0x52;
                  uStack_16 = 0;
                  uStack_18 = 0;
                  uStack_1a = 0;
                  pcVar5 = (code *)swi(0x3f);
                  (*pcVar5)();
                }
                else {
                  iStack_8 = *(int *)0x9454;
                  iStack_a = *(undefined2 *)0x945a;
                  uStack_c = *(undefined2 *)0x9458;
                  uStack_e = *(undefined2 *)0x9456;
                  uStack_10 = *(undefined2 *)0x9454;
                  uStack_12 = 0;
                  iStack_14 = unaff_BP + -0x52;
                  uStack_16 = 0;
                  uStack_18 = 1;
                  uStack_1a = 0;
                  pcVar5 = (code *)swi(0x3f);
                  iVar8 = (*pcVar5)();
                  if (iVar8 == -1) {
                    uVar7 = FUN_2bb4_66c9();
                    return uVar7;
                  }
                }
              }
              if (*(char *)0xb1ea == '\x02') {
                iStack_8 = *(int *)0x9454;
                iStack_a = *(undefined2 *)0x945a;
                uStack_c = *(undefined2 *)0x9458;
                uStack_e = *(undefined2 *)0x9456;
                uStack_10 = *(undefined2 *)0x9454;
                uStack_12 = 0;
                iStack_14 = unaff_BP + -0x52;
                uStack_16 = 0;
                uStack_18 = 1;
                uStack_1a = 1;
                pcVar5 = (code *)swi(0x3f);
                iVar8 = (*pcVar5)();
                if (iVar8 == -1) {
                  uVar7 = FUN_2bb4_66c9();
                  return uVar7;
                }
              }
            }
          }
          if (*(int *)0x158 == 0) {
            uVar7 = FUN_3ab8_5218();
            return uVar7;
          }
          if (*(char *)0x118 != '\0') {
            uVar7 = FUN_2bb4_66c9();
            return uVar7;
          }
          if ((((*(char *)0x124 == '\0') || (*(int *)0x158 == 10000)) || (*(int *)0xbc2 != 0)) ||
             (*(char *)0xb1ea != '\0')) {
            uVar7 = FUN_2bb4_66c9();
            return uVar7;
          }
          if ((((*(int *)0xa62 != 1) || (*(int *)0xa64 != 1)) &&
              ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) &&
             ((*(byte *)0xb782 < 4 || (*(int *)0xa66 != *(int *)0xa62)))) {
            if (*(byte *)0xb782 < 4) {
              uVar7 = FUN_2bb4_66c9();
              return uVar7;
            }
            if (*(int *)0xa62 != 1) {
LAB_3ab8_5003:
              uVar7 = FUN_2bb4_66c9();
              return uVar7;
            }
          }
          FUN_1885_2ec3();
          *(undefined2 *)0x158 = 0;
          *(undefined1 *)0xb1ea = 3;
        } while( true );
      }
      if (*(char *)0xb1ea == '\0') {
        *(undefined1 *)0x1062 = 1;
      }
      iStack_8 = *(int *)0x9454;
      iStack_a = *(undefined2 *)0x945a;
      uStack_c = *(undefined2 *)0x9458;
      uStack_e = *(undefined2 *)0x9456;
      uStack_10 = *(undefined2 *)0x9454;
      uStack_12 = 0;
      iStack_14 = unaff_BP + -0x52;
      uStack_16 = 0;
      uStack_18 = 0xd8f1;
      uStack_1a = (uint)(*(char *)0xb1ea == '\x02');
      pcVar5 = (code *)swi(0x3f);
      iVar8 = (*pcVar5)();
      if (iVar8 == -1) goto LAB_3ab8_4d74;
      if (*(int *)0x158 != 0) {
        func_0x00008095();
      }
    }
    if (*(int *)(unaff_BP + -0x1fe) < 1) {
      uVar7 = FUN_3ab8_5188();
      return uVar7;
    }
    if (7 < *(int *)(unaff_BP + -0x1fe)) {
      uVar7 = FUN_3ab8_5188();
      return uVar7;
    }
  } while( true );
}



/* 3ab8:50d6  FUN_3ab8_50d6  168 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x000302f0) overlaps instruction at (ram,0x000302ef)
    */

undefined2 FUN_3ab8_50d6(int param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  int iVar8;
  int unaff_BP;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  uint uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  
  do {
    if ((*(char *)0xb1ea != '\0') && (*(char *)0xb1ea != '\x03')) {
      uVar7 = FUN_3ab8_533a();
      return uVar7;
    }
    iStack_8 = 0xfc75;
    FUN_21f2_3454();
    iStack_8 = 0xfc85;
    FUN_21f2_2d26();
    iStack_8 = 0xfc95;
    FUN_21f2_2d26();
    iStack_8 = 0xfca5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcb5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcc5;
    FUN_1def_07a4();
    iStack_8 = 0x1bb4;
    iStack_a = 0xfcd7;
    FUN_3ab8_014c();
    iStack_8 = unaff_BP + -0x1cc;
    iStack_a = 1;
    uStack_c = 0x1bb4;
    uStack_e = 0xfcf7;
    iVar8 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x236) = iVar8;
    if (*(int *)0x158 != 0) {
      uVar7 = FUN_2bb4_66c9();
      return uVar7;
    }
    if (((iVar8 != 1) && (*(int *)(unaff_BP + -0x146) != 1)) && (iVar8 != -1)) {
      uVar7 = FUN_3ab8_52e6();
      return uVar7;
    }
    uVar7 = *(undefined2 *)0x9480;
    uVar4 = *(undefined2 *)0x9482;
    *(undefined2 *)(unaff_BP + -500) = uVar7;
    *(undefined2 *)(unaff_BP + -0x1f2) = uVar4;
    *(undefined2 *)(unaff_BP + -0x204) = uVar7;
    *(undefined2 *)(unaff_BP + -0x202) = uVar4;
    uVar7 = *(undefined2 *)0x943c;
    uVar4 = *(undefined2 *)0x943e;
    *(undefined2 *)(unaff_BP + -0x144) = uVar7;
    *(undefined2 *)(unaff_BP + -0x142) = uVar4;
    *(undefined2 *)(unaff_BP + -0x15c) = uVar7;
    *(undefined2 *)(unaff_BP + -0x15a) = uVar4;
    iStack_8 = 0xfdd4;
    FUN_21f2_3454();
    if (*(byte *)0xb1ea < 2) {
      iStack_8 = 0xfdeb;
      FUN_21f2_2d26();
    }
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0xfe09;
      FUN_21f2_2d26();
    }
    if (*(char *)0xb1ea == '\x01') {
      iStack_8 = 0xfe20;
      FUN_21f2_2d26();
    }
    iStack_8 = 0xfe30;
    FUN_1def_07a4();
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0x1bb4;
      iStack_a = 0xfe50;
      FUN_3ab8_014c();
    }
    if (*(char *)0xb1ea != '\x02') {
      uVar7 = FUN_3ab8_4fc8();
      return uVar7;
    }
    *(undefined2 *)0xc2c = 1;
    iStack_8 = unaff_BP + -0x1cc;
    *(undefined2 *)0xc20 = 1;
    iStack_a = 1;
    uStack_c = 0x1bb4;
    uStack_e = 0xfb6e;
    uVar7 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x1fe) = uVar7;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xc2c = 0;
    if (*(int *)0x158 != 0) goto LAB_3ab8_5003;
    func_0x0000c3ca();
    if ((*(int *)(unaff_BP + -0x1fe) == 0x14) && (*(char *)0xb1ea == '\x02')) {
      func_0x00008095();
      uVar7 = FUN_2bb4_66c9();
      return uVar7;
    }
    if (*(int *)(unaff_BP + -0x1fe) == -1) {
      *(undefined2 *)(unaff_BP + -0x146) = 0;
      if (*(char *)0xb1ea == '\x03') {
        func_0x00008095();
LAB_3ab8_4d74:
        do {
          iStack_8 = 0xf901;
          FUN_21f2_3454();
          if (*(char *)0xb1ea == '\0') {
            *(undefined1 *)0x1062 = 1;
          }
          if (*(char *)0xb1ea == '\x01') {
            iStack_8 = 0xf923;
            FUN_21f2_3454();
          }
          if (*(char *)0xb1ea == '\x02') {
            iStack_8 = 0xf939;
            FUN_21f2_3454();
          }
          iStack_8 = 0xf948;
          FUN_21f2_3454();
          iStack_8 = -0x6a9;
          FUN_21f2_2d26();
          if (*(char *)(unaff_BP + -0x134) != '\0') {
            *(undefined2 *)(unaff_BP + -0x1fe) = 1;
            FUN_32b2_7285();
            FUN_32b2_710c();
            FUN_32b2_6e99();
            iStack_a = 0x32b2;
            uStack_c = 0x17a0;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x17a5;
            puVar6 = (undefined2 *)FUN_32b2_75fe();
            *(undefined2 *)(unaff_BP + -0x48) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x46) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x44) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x42) = puVar6[3];
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x17c5;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x17ca;
            puVar6 = (undefined2 *)FUN_32b2_75ec();
            *(undefined2 *)(unaff_BP + -0x50) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x4e) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x4c) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x4a) = puVar6[3];
            uVar7 = *(undefined2 *)(unaff_BP + -0x12);
            uVar4 = *(undefined2 *)(unaff_BP + -0x10);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar7;
            iStack_8 = 0x17f6;
            FUN_32b2_7285();
            iStack_8 = 0x17ff;
            FUN_32b2_710c();
            iStack_8 = 0x1807;
            FUN_32b2_6e99();
            uStack_e = 0x32b2;
            uStack_10 = 0x1811;
            FUN_32b2_6eb1();
            uStack_e = 0x32b2;
            uStack_10 = 0x1816;
            FUN_32b2_75fe();
            iStack_8 = 0x32b2;
            iStack_a = 0x1820;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x1828;
            FUN_32b2_704d();
            iStack_8 = 0x32b2;
            iStack_a = 0x1830;
            FUN_32b2_6eb1();
            iStack_8 = 0x32b2;
            iStack_a = 0x1838;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x1840;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            iStack_a = 0x1848;
            FUN_32b2_6d14();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1852;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1857;
            FUN_32b2_75ec();
            iStack_a = 0x32b2;
            uStack_c = 0x1861;
            FUN_32b2_6d14();
            uVar7 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar7;
            iStack_a = 0x32b2;
            uStack_c = 0x187a;
            FUN_32b2_7285();
            iStack_a = 0x32b2;
            uStack_c = 0x187f;
            FUN_32b2_717d();
            iStack_a = 0x32b2;
            uStack_c = 0x1887;
            FUN_32b2_704d();
            iStack_a = 0x32b2;
            uStack_c = 0x1890;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x1898;
            FUN_32b2_6e99();
            iStack_a = 0x32b2;
            uStack_c = 0x18a0;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18a5;
            FUN_32b2_7173();
            iStack_a = 0x32b2;
            uStack_c = 0x18ad;
            FUN_32b2_7095();
            iStack_a = 0x32b2;
            uStack_c = 0x18b5;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x18bd;
            FUN_32b2_6d14();
            iStack_a = 0x32b2;
            uStack_c = 0x18c5;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18cd;
            FUN_32b2_6d14();
            iStack_a = 0x32b2;
            uStack_c = 0x18d5;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18da;
            FUN_32b2_718c();
            iStack_a = 0x32b2;
            uStack_c = 0x18e2;
            FUN_32b2_7095();
            iStack_a = 0x32b2;
            uStack_c = 0x18ea;
            FUN_32b2_6eb1();
            uVar7 = *(undefined2 *)(unaff_BP + -0xe);
            uVar4 = *(undefined2 *)(unaff_BP + -0xc);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar7;
            iStack_a = 0x32b2;
            uStack_c = 0x1908;
            FUN_32b2_7285();
            iStack_a = 0x32b2;
            uStack_c = 0x1911;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x1919;
            FUN_32b2_6e99();
            uStack_12 = 0x32b2;
            iStack_14 = 0x1923;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            iStack_14 = 0x1928;
            FUN_32b2_75fe();
            uStack_c = 0x32b2;
            uStack_e = 0x1932;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x193a;
            FUN_32b2_704d();
            uStack_c = 0x32b2;
            uStack_e = 0x1942;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x194a;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x1952;
            FUN_32b2_710c();
            uStack_c = 0x32b2;
            uStack_e = 0x195a;
            FUN_32b2_6d14();
            iStack_14 = 0x32b2;
            uStack_16 = 0x1964;
            FUN_32b2_6eb1();
            iStack_14 = 0x32b2;
            uStack_16 = 0x1969;
            FUN_32b2_75ec();
            uStack_e = 0x32b2;
            uStack_10 = 0x1973;
            FUN_32b2_6d14();
            uVar7 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar7;
            uStack_e = 0x32b2;
            uStack_10 = 0x198c;
            FUN_32b2_7285();
            uStack_e = 0x32b2;
            uStack_10 = 0x1991;
            FUN_32b2_717d();
            uStack_e = 0x32b2;
            uStack_10 = 0x1999;
            FUN_32b2_704d();
            uStack_e = 0x32b2;
            uStack_10 = 0x19a2;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19aa;
            FUN_32b2_6e99();
            uStack_e = 0x32b2;
            uStack_10 = 0x19b2;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19b7;
            FUN_32b2_7173();
            uStack_e = 0x32b2;
            uStack_10 = 0x19bf;
            FUN_32b2_7095();
            uStack_e = 0x32b2;
            uStack_10 = 0x19c7;
            FUN_32b2_6eb1();
            uStack_e = 0x32b2;
            uStack_10 = 0x19cf;
            FUN_32b2_6d14();
            uStack_e = 0x32b2;
            uStack_10 = 0x19d7;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19df;
            FUN_32b2_6d14();
            uStack_e = 0x32b2;
            uStack_10 = 0x19e7;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19ec;
            FUN_32b2_718c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19f4;
            FUN_32b2_7095();
            uStack_e = 0x32b2;
            uStack_10 = 0x19fc;
            FUN_32b2_6eb1();
            if ((*(int *)(unaff_BP + -0x12) == *(int *)(unaff_BP + -0xe)) &&
               (*(int *)(unaff_BP + -0x10) == *(int *)(unaff_BP + -0xc))) {
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
            }
            return uVar7;
          }
          if (*(char *)0xb1ea == '\x03') {
            iStack_8 = 0xf97d;
            FUN_21f2_3454();
            iStack_8 = -0x674;
            FUN_21f2_2d26();
          }
          func_0x0000c3ca();
          if (*(int *)0xbc2 == 0) {
            if (*(char *)0xb1ea == '\x03') {
              if (*(int *)0xc22 == 0) {
                iStack_8 = 0x12;
                iStack_a = unaff_BP + -0x52;
                uStack_c = 0x885;
                uStack_e = 0xf9c4;
                FUN_1000_02b5();
              }
              *(undefined2 *)0xc22 = 1;
              iStack_8 = *(int *)0x9454;
              iStack_a = *(undefined2 *)0x945a;
              uStack_c = *(undefined2 *)0x9458;
              uStack_e = *(undefined2 *)0x9456;
              uStack_10 = *(undefined2 *)0x9454;
              uStack_12 = 0;
              iStack_14 = unaff_BP + -0x52;
              uStack_16 = 0;
              uStack_18 = 0;
              uStack_1a = 2;
              pcVar5 = (code *)swi(0x3f);
              (*pcVar5)();
            }
            else {
              if (*(byte *)0xb1ea < 2) {
                if (*(int *)0xce6 == 0) {
                  iStack_8 = *(int *)0x9454;
                  iStack_a = *(undefined2 *)0x945a;
                  uStack_c = *(undefined2 *)0x9458;
                  uStack_e = *(undefined2 *)0x9456;
                  uStack_10 = *(undefined2 *)0x9454;
                  uStack_12 = 0;
                  iStack_14 = unaff_BP + -0x52;
                  uStack_16 = 0;
                  uStack_18 = 0;
                  uStack_1a = 0;
                  pcVar5 = (code *)swi(0x3f);
                  (*pcVar5)();
                }
                else {
                  iStack_8 = *(int *)0x9454;
                  iStack_a = *(undefined2 *)0x945a;
                  uStack_c = *(undefined2 *)0x9458;
                  uStack_e = *(undefined2 *)0x9456;
                  uStack_10 = *(undefined2 *)0x9454;
                  uStack_12 = 0;
                  iStack_14 = unaff_BP + -0x52;
                  uStack_16 = 0;
                  uStack_18 = 1;
                  uStack_1a = 0;
                  pcVar5 = (code *)swi(0x3f);
                  iVar8 = (*pcVar5)();
                  if (iVar8 == -1) {
                    uVar7 = FUN_2bb4_66c9();
                    return uVar7;
                  }
                }
              }
              if (*(char *)0xb1ea == '\x02') {
                iStack_8 = *(int *)0x9454;
                iStack_a = *(undefined2 *)0x945a;
                uStack_c = *(undefined2 *)0x9458;
                uStack_e = *(undefined2 *)0x9456;
                uStack_10 = *(undefined2 *)0x9454;
                uStack_12 = 0;
                iStack_14 = unaff_BP + -0x52;
                uStack_16 = 0;
                uStack_18 = 1;
                uStack_1a = 1;
                pcVar5 = (code *)swi(0x3f);
                iVar8 = (*pcVar5)();
                if (iVar8 == -1) {
                  uVar7 = FUN_2bb4_66c9();
                  return uVar7;
                }
              }
            }
          }
          if (*(int *)0x158 == 0) {
            uVar7 = FUN_3ab8_5218();
            return uVar7;
          }
          if (*(char *)0x118 != '\0') {
            uVar7 = FUN_2bb4_66c9();
            return uVar7;
          }
          if ((((*(char *)0x124 == '\0') || (*(int *)0x158 == 10000)) || (*(int *)0xbc2 != 0)) ||
             (*(char *)0xb1ea != '\0')) {
            uVar7 = FUN_2bb4_66c9();
            return uVar7;
          }
          if ((((*(int *)0xa62 != 1) || (*(int *)0xa64 != 1)) &&
              ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) &&
             ((*(byte *)0xb782 < 4 || (*(int *)0xa66 != *(int *)0xa62)))) {
            if (*(byte *)0xb782 < 4) {
              uVar7 = FUN_2bb4_66c9();
              return uVar7;
            }
            if (*(int *)0xa62 != 1) {
LAB_3ab8_5003:
              uVar7 = FUN_2bb4_66c9();
              return uVar7;
            }
          }
          FUN_1885_2ec3();
          *(undefined2 *)0x158 = 0;
          *(undefined1 *)0xb1ea = 3;
        } while( true );
      }
      if (*(char *)0xb1ea == '\0') {
        *(undefined1 *)0x1062 = 1;
      }
      iStack_8 = *(int *)0x9454;
      iStack_a = *(undefined2 *)0x945a;
      uStack_c = *(undefined2 *)0x9458;
      uStack_e = *(undefined2 *)0x9456;
      uStack_10 = *(undefined2 *)0x9454;
      uStack_12 = 0;
      iStack_14 = unaff_BP + -0x52;
      uStack_16 = 0;
      uStack_18 = 0xd8f1;
      uStack_1a = (uint)(*(char *)0xb1ea == '\x02');
      pcVar5 = (code *)swi(0x3f);
      iVar8 = (*pcVar5)();
      if (iVar8 == -1) goto LAB_3ab8_4d74;
      if (*(int *)0x158 != 0) {
        func_0x00008095();
      }
    }
    if (*(int *)(unaff_BP + -0x1fe) < 1) {
      uVar7 = FUN_3ab8_5188();
      return uVar7;
    }
    if (7 < *(int *)(unaff_BP + -0x1fe)) {
      uVar7 = FUN_3ab8_5188();
      return uVar7;
    }
    if ((*(int *)(unaff_BP + -0x1fe) != 7) &&
       ((bVar11 = *(byte *)0xb1ea < 3, *(byte *)0xb1ea != 3 ||
        (bVar11 = *(uint *)(unaff_BP + -0x1fe) < 4, *(uint *)(unaff_BP + -0x1fe) != 4)))) {
      if (bVar11) goto code_r0x00030201;
      while( true ) {
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        iStack_8 = 0x32b2;
        iStack_a = 0x30c;
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x314;
        FUN_32b2_6d14();
        uStack_10 = 0x32b2;
        uStack_12 = 0x31e;
        FUN_32b2_6eb1();
        uStack_10 = 0x32b2;
        uStack_12 = 0x326;
        FUN_32b2_6cc6();
        uStack_10 = 0x32b2;
        uStack_12 = 0x32b;
        FUN_32b2_7258();
        uStack_18 = 0x32b2;
        uStack_1a = 0x335;
        FUN_32b2_6eb1();
        uStack_18 = 0x32b2;
        uStack_1a = 0x33d;
        FUN_32b2_6cc6();
        uStack_18 = 0x32b2;
        uStack_1a = 0x342;
        FUN_32b2_7258();
        uStack_20 = 0x32b2;
        FUN_32b2_6eb1();
        uStack_20 = 1;
        uStack_24 = 0x354;
        FUN_3ab8_5089();
        uVar10 = (undefined1 *)0xffc9 < &uStack_32;
        uVar12 = &stack0x0000 == (undefined1 *)0xfffc;
        param_1 = 0x32b2;
        FUN_32b2_6cc6();
        param_1 = 0x32b2;
        FUN_32b2_701d();
        param_1 = 0x32b2;
        FUN_32b2_7258();
        param_1 = 0x32b2;
        FUN_32b2_6e99();
        param_1 = 0x32b2;
        FUN_32b2_6ef9();
        param_1 = 0x32b2;
        FUN_32b2_6cc6();
        param_1 = 0x32b2;
        FUN_32b2_701d();
        param_1 = 0x32b2;
        FUN_32b2_7258();
        param_1 = 0x32b2;
        FUN_32b2_6e99();
        param_1 = 0x32b2;
        FUN_32b2_6ef9();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = 0x32b2;
        FUN_32b2_6fc7();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = 0x32b2;
        FUN_32b2_6fc7();
        param_1 = 0x32b2;
        FUN_32b2_710c();
        param_1 = 0x32b2;
        FUN_32b2_7191();
        if (!(bool)uVar10 && !(bool)uVar12) {
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_7191();
          if (!(bool)uVar12) {
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_7124();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_704d();
            param_1 = 0x32b2;
            FUN_32b2_7035();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_718c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_70dc();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_718c();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6fd6();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7182();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7154();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = unaff_BP + -0x8a;
            FUN_32b2_6cc6();
            FUN_32b2_7258();
            iStack_a = 0x32b2;
            uStack_c = 0x5ea;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x5f2;
            FUN_32b2_6cc6();
            iStack_a = 0x32b2;
            uStack_c = 0x5f7;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            iStack_14 = 0x601;
            FUN_32b2_6eb1();
            uStack_12 = *(undefined2 *)(unaff_BP + -100);
            iStack_14 = *(undefined2 *)(unaff_BP + -0x66);
            uStack_16 = *(undefined2 *)(unaff_BP + -0x68);
            uStack_18 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x48);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_24 = 0x622;
            FUN_32b2_6d14();
            uStack_2a = 0x32b2;
            uStack_2c = 0x62c;
            FUN_32b2_6eb1();
            uStack_2a = 0x32b2;
            uStack_2c = 0x635;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x63f;
            FUN_32b2_6eb1();
            uStack_32 = 0;
            uStack_34 = 0x32b2;
            FUN_3ab8_5089();
            uVar7 = *(undefined2 *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
            *(undefined2 *)(unaff_BP + -0x84) = uVar7;
            uVar7 = *(undefined2 *)(unaff_BP + -0x88);
            *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
            *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
            param_1 = unaff_BP + -0x9e;
            puVar9 = &uStack_20;
            puVar6 = (undefined2 *)(unaff_BP + 0x1c);
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar3 = *puVar2;
            }
            uStack_24 = 0x684;
            iVar8 = FUN_3ab8_522f();
            uVar10 = 0;
            uVar12 = iVar8 == 0;
            if (!(bool)uVar12) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6cc6();
              param_1 = 0x32b2;
              FUN_32b2_701d();
              param_1 = 0x32b2;
              FUN_32b2_6fc7();
              param_1 = 0x32b2;
              FUN_32b2_7258();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if ((bool)uVar10 || (bool)uVar12) {
                param_1 = 0x32b2;
                FUN_32b2_6d14();
                param_1 = 0x32b2;
                FUN_32b2_6cc6();
                param_1 = 0x32b2;
                FUN_32b2_701d();
                param_1 = 0x32b2;
                FUN_32b2_6fc7();
                param_1 = 0x32b2;
                FUN_32b2_7258();
                param_1 = 0x32b2;
                FUN_32b2_7191();
                if ((bool)uVar10 || (bool)uVar12) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
              }
            }
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7154();
            param_1 = 0x32b2;
            FUN_32b2_7191();
            if (!(bool)uVar10) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6fc7();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if (!(bool)uVar10) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
              param_1 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_8 = 0x774;
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
              uStack_c = 0x32b2;
              uStack_e = 0x7e8;
              FUN_32b2_6eb1();
              uStack_c = 0x32b2;
              uStack_e = 0x7f0;
              FUN_32b2_6cc6();
              uStack_c = 0x32b2;
              uStack_e = 0x7f5;
              FUN_32b2_7258();
              iStack_14 = 0x32b2;
              uStack_16 = 0x7ff;
              FUN_32b2_6eb1();
              iStack_14 = *(undefined2 *)(unaff_BP + -100);
              uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
              uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
              uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
              uStack_24 = 0x32b2;
              uStack_26 = 0x820;
              FUN_32b2_6d14();
              uStack_2c = 0x32b2;
              uStack_2e = 0x82a;
              FUN_32b2_6eb1();
              uStack_2c = 0x32b2;
              uStack_2e = 0x833;
              FUN_32b2_6d14();
              uStack_34 = 0x32b2;
              FUN_32b2_6eb1();
              uStack_34 = 0;
              FUN_3ab8_5089(0x32b2);
              uVar10 = (undefined1 *)0xffc9 < &uStack_34;
              uVar12 = &stack0x0000 == (undefined1 *)0xfffe;
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
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
              puVar6[1] = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x88);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar6[1] = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x60);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
              puVar6[1] = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x88);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar6[1] = uVar7;
              piVar1 = (int *)(unaff_BP + -0x36);
              *piVar1 = *piVar1 + 1;
              uVar12 = *piVar1 == 0;
              FUN_32b2_6d14();
              FUN_32b2_6d14();
              FUN_32b2_7191();
              if (!(bool)uVar10 && !(bool)uVar12) {
                iStack_8 = 0x32b2;
                iStack_a = 0x8ff;
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
                iStack_8 = 0x969;
                FUN_32b2_6cc6();
                iStack_8 = 0x96e;
                FUN_32b2_7258();
                uStack_e = 0x32b2;
                uStack_10 = 0x978;
                FUN_32b2_6eb1();
                uStack_e = 0x32b2;
                uStack_10 = 0x980;
                FUN_32b2_6cc6();
                uStack_e = 0x32b2;
                uStack_10 = 0x985;
                FUN_32b2_7258();
                uStack_16 = 0x32b2;
                uStack_18 = 0x98f;
                FUN_32b2_6eb1();
                uStack_16 = *(undefined2 *)(unaff_BP + -100);
                uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
                uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
                uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
                uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
                uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
                uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
                uStack_26 = 0x32b2;
                uStack_28 = 0x9b0;
                FUN_32b2_6d14();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9ba;
                FUN_32b2_6eb1();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9c3;
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_3ab8_5089(0x32b2,0);
                uVar10 = &stack0x0000 == (undefined1 *)0x0;
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
                  uVar7 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar7;
                }
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
                  uVar7 = *(undefined2 *)(unaff_BP + 0xc);
                  *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                  *(undefined2 *)(unaff_BP + -0x88) = uVar7;
                }
                uVar7 = *(undefined2 *)(unaff_BP + -0x60);
                puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
                puVar6[1] = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0x88);
                puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
                puVar6[1] = uVar7;
                *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
              }
              return *(undefined2 *)(unaff_BP + -0x36);
            }
          }
          return 0;
        }
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = unaff_BP + -0xbc;
        FUN_32b2_7154();
        param_1 = 0x32b2;
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
        param_1 = *(undefined2 *)(unaff_BP + -0xb6);
        iStack_8 = 0x119;
        FUN_32b2_75fe();
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x150;
        FUN_32b2_75ec();
        uVar10 = &stack0x0000 == (undefined1 *)0x0;
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar10) {
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar10) {
            return 0;
          }
        }
        iStack_8 = *(int *)(unaff_BP + -0x7e);
        iStack_a = *(undefined2 *)(unaff_BP + -0x80);
        uStack_c = *(undefined2 *)(unaff_BP + -0x82);
        uStack_e = *(undefined2 *)(unaff_BP + -0x58);
        uStack_10 = *(undefined2 *)(unaff_BP + -0x5a);
        uStack_12 = *(undefined2 *)(unaff_BP + -0x5c);
        iStack_14 = *(int *)(unaff_BP + -0x5e);
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d0;
        FUN_32b2_6cc6();
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d5;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1df;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1e7;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1ec;
        FUN_32b2_7258();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1f6;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1fa;
        iVar8 = FUN_3ab8_4fbd();
        if (iVar8 == 0) break;
code_r0x00030201:
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6e99();
        FUN_32b2_6ef9();
        iStack_8 = 0x231;
        FUN_32b2_6cc6();
        iStack_8 = 0x236;
        FUN_32b2_7258();
        uStack_e = 0x32b2;
        uStack_10 = 0x240;
        FUN_32b2_6eb1();
        uStack_e = 0x32b2;
        uStack_10 = 0x248;
        FUN_32b2_6cc6();
        uStack_e = 0x32b2;
        uStack_10 = 0x24d;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 599;
        FUN_32b2_6eb1();
        uStack_16 = 0x32b2;
        uStack_18 = 0x25f;
        FUN_32b2_6d14();
        uStack_1e = 0x32b2;
        uStack_20 = 0x269;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x271;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x276;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x27e;
        FUN_32b2_6e99();
        uStack_26 = 0x32b2;
        uStack_28 = 0x288;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x290;
        FUN_32b2_6cc6();
        uStack_26 = 0x32b2;
        uStack_28 = 0x295;
        FUN_32b2_7258();
        uStack_2e = 0x32b2;
        uStack_30 = 0x29f;
        FUN_32b2_6eb1();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2a7;
        FUN_32b2_6cc6();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2ac;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_3ab8_5089(0x32b2,1);
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
      }
      return 0;
    }
  } while( true );
}



/* 3ab8:517f  FUN_3ab8_517f  9 bytes, 2 callers */

/* WARNING: Instruction at (ram,0x000302f0) overlaps instruction at (ram,0x000302ef)
    */

undefined2 FUN_3ab8_517f(int param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 uVar8;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 *puVar9;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int in_stack_00000000;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  uint uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  int iStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  int iStack_6;
  
  piVar1 = (int *)(in_BX + unaff_SI);
  *piVar1 = *piVar1 + in_stack_00000000;
  iVar7 = *piVar1;
  do {
    if (iVar7 != 0) {
      uVar8 = FUN_2bb4_66c9();
      return uVar8;
    }
    if (((in_stack_00000000 != 1) && (*(int *)(unaff_BP + -0x146) != 1)) &&
       (in_stack_00000000 != -1)) {
      uVar8 = FUN_3ab8_52e6();
      return uVar8;
    }
    uVar8 = *(undefined2 *)0x9480;
    uVar4 = *(undefined2 *)0x9482;
    *(undefined2 *)(unaff_BP + -500) = uVar8;
    *(undefined2 *)(unaff_BP + -0x1f2) = uVar4;
    *(undefined2 *)(unaff_BP + -0x204) = uVar8;
    *(undefined2 *)(unaff_BP + -0x202) = uVar4;
    uVar8 = *(undefined2 *)0x943c;
    uVar4 = *(undefined2 *)0x943e;
    *(undefined2 *)(unaff_BP + -0x144) = uVar8;
    *(undefined2 *)(unaff_BP + -0x142) = uVar4;
    *(undefined2 *)(unaff_BP + -0x15c) = uVar8;
    *(undefined2 *)(unaff_BP + -0x15a) = uVar4;
    iStack_6 = 0xfdd4;
    FUN_21f2_3454();
    if (*(byte *)0xb1ea < 2) {
      iStack_6 = 0xfdeb;
      FUN_21f2_2d26();
    }
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_6 = 0xfe09;
      FUN_21f2_2d26();
    }
    if (*(char *)0xb1ea == '\x01') {
      iStack_6 = 0xfe20;
      FUN_21f2_2d26();
    }
    iStack_6 = 0xfe30;
    FUN_1def_07a4();
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_6 = 0x1bb4;
      iStack_8 = 0xfe50;
      FUN_3ab8_014c();
    }
    if (*(char *)0xb1ea != '\x02') {
      uVar8 = FUN_3ab8_4fc8();
      return uVar8;
    }
    *(undefined2 *)0xc2c = 1;
    iStack_6 = unaff_BP + -0x1cc;
    *(undefined2 *)0xc20 = 1;
    iStack_8 = 1;
    uStack_a = 0x1bb4;
    uStack_c = 0xfb6e;
    uVar8 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x1fe) = uVar8;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xc2c = 0;
    if (*(int *)0x158 != 0) goto LAB_3ab8_5003;
    uVar8 = 0x885;
    func_0x0000c3ca();
    if ((*(int *)(unaff_BP + -0x1fe) == 0x14) && (*(char *)0xb1ea == '\x02')) {
      func_0x00008095();
      uVar8 = FUN_2bb4_66c9();
      return uVar8;
    }
    if (*(int *)(unaff_BP + -0x1fe) == -1) {
      *(undefined2 *)(unaff_BP + -0x146) = 0;
      if (*(char *)0xb1ea == '\x03') {
        func_0x00008095();
LAB_3ab8_4d74:
        do {
          iStack_6 = 0xf901;
          FUN_21f2_3454();
          if (*(char *)0xb1ea == '\0') {
            *(undefined1 *)0x1062 = 1;
          }
          if (*(char *)0xb1ea == '\x01') {
            iStack_6 = 0xf923;
            FUN_21f2_3454();
          }
          if (*(char *)0xb1ea == '\x02') {
            iStack_6 = 0xf939;
            FUN_21f2_3454();
          }
          iStack_6 = 0xf948;
          FUN_21f2_3454();
          iStack_6 = -0x6a9;
          FUN_21f2_2d26();
          if (*(char *)(unaff_BP + -0x134) != '\0') {
            *(undefined2 *)(unaff_BP + -0x1fe) = 1;
            FUN_32b2_7285();
            FUN_32b2_710c();
            FUN_32b2_6e99();
            iStack_8 = 0x32b2;
            uStack_a = 0x17a0;
            FUN_32b2_6eb1();
            iStack_8 = 0x32b2;
            uStack_a = 0x17a5;
            puVar6 = (undefined2 *)FUN_32b2_75fe();
            *(undefined2 *)(unaff_BP + -0x48) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x46) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x44) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x42) = puVar6[3];
            FUN_32b2_6d14();
            uStack_a = 0x32b2;
            uStack_c = 0x17c5;
            FUN_32b2_6eb1();
            uStack_a = 0x32b2;
            uStack_c = 0x17ca;
            puVar6 = (undefined2 *)FUN_32b2_75ec();
            *(undefined2 *)(unaff_BP + -0x50) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x4e) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x4c) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x4a) = puVar6[3];
            uVar8 = *(undefined2 *)(unaff_BP + -0x12);
            uVar4 = *(undefined2 *)(unaff_BP + -0x10);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_6 = 0x17f6;
            FUN_32b2_7285();
            iStack_6 = 0x17ff;
            FUN_32b2_710c();
            iStack_6 = 0x1807;
            FUN_32b2_6e99();
            uStack_c = 0x32b2;
            uStack_e = 0x1811;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x1816;
            FUN_32b2_75fe();
            iStack_6 = 0x32b2;
            iStack_8 = 0x1820;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x1828;
            FUN_32b2_704d();
            iStack_6 = 0x32b2;
            iStack_8 = 0x1830;
            FUN_32b2_6eb1();
            iStack_6 = 0x32b2;
            iStack_8 = 0x1838;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x1840;
            FUN_32b2_710c();
            iStack_6 = 0x32b2;
            iStack_8 = 0x1848;
            FUN_32b2_6d14();
            uStack_e = 0x32b2;
            uStack_10 = 0x1852;
            FUN_32b2_6eb1();
            uStack_e = 0x32b2;
            uStack_10 = 0x1857;
            FUN_32b2_75ec();
            iStack_8 = 0x32b2;
            uStack_a = 0x1861;
            FUN_32b2_6d14();
            uVar8 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_8 = 0x32b2;
            uStack_a = 0x187a;
            FUN_32b2_7285();
            iStack_8 = 0x32b2;
            uStack_a = 0x187f;
            FUN_32b2_717d();
            iStack_8 = 0x32b2;
            uStack_a = 0x1887;
            FUN_32b2_704d();
            iStack_8 = 0x32b2;
            uStack_a = 0x1890;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            uStack_a = 0x1898;
            FUN_32b2_6e99();
            iStack_8 = 0x32b2;
            uStack_a = 0x18a0;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            uStack_a = 0x18a5;
            FUN_32b2_7173();
            iStack_8 = 0x32b2;
            uStack_a = 0x18ad;
            FUN_32b2_7095();
            iStack_8 = 0x32b2;
            uStack_a = 0x18b5;
            FUN_32b2_6eb1();
            iStack_8 = 0x32b2;
            uStack_a = 0x18bd;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            uStack_a = 0x18c5;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            uStack_a = 0x18cd;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            uStack_a = 0x18d5;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            uStack_a = 0x18da;
            FUN_32b2_718c();
            iStack_8 = 0x32b2;
            uStack_a = 0x18e2;
            FUN_32b2_7095();
            iStack_8 = 0x32b2;
            uStack_a = 0x18ea;
            FUN_32b2_6eb1();
            uVar8 = *(undefined2 *)(unaff_BP + -0xe);
            uVar4 = *(undefined2 *)(unaff_BP + -0xc);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_8 = 0x32b2;
            uStack_a = 0x1908;
            FUN_32b2_7285();
            iStack_8 = 0x32b2;
            uStack_a = 0x1911;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            uStack_a = 0x1919;
            FUN_32b2_6e99();
            uStack_10 = 0x32b2;
            iStack_12 = 0x1923;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            iStack_12 = 0x1928;
            FUN_32b2_75fe();
            uStack_a = 0x32b2;
            uStack_c = 0x1932;
            FUN_32b2_6d14();
            uStack_a = 0x32b2;
            uStack_c = 0x193a;
            FUN_32b2_704d();
            uStack_a = 0x32b2;
            uStack_c = 0x1942;
            FUN_32b2_6eb1();
            uStack_a = 0x32b2;
            uStack_c = 0x194a;
            FUN_32b2_6d14();
            uStack_a = 0x32b2;
            uStack_c = 0x1952;
            FUN_32b2_710c();
            uStack_a = 0x32b2;
            uStack_c = 0x195a;
            FUN_32b2_6d14();
            iStack_12 = 0x32b2;
            uStack_14 = 0x1964;
            FUN_32b2_6eb1();
            iStack_12 = 0x32b2;
            uStack_14 = 0x1969;
            FUN_32b2_75ec();
            uStack_c = 0x32b2;
            uStack_e = 0x1973;
            FUN_32b2_6d14();
            uVar8 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            uStack_c = 0x32b2;
            uStack_e = 0x198c;
            FUN_32b2_7285();
            uStack_c = 0x32b2;
            uStack_e = 0x1991;
            FUN_32b2_717d();
            uStack_c = 0x32b2;
            uStack_e = 0x1999;
            FUN_32b2_704d();
            uStack_c = 0x32b2;
            uStack_e = 0x19a2;
            FUN_32b2_710c();
            uStack_c = 0x32b2;
            uStack_e = 0x19aa;
            FUN_32b2_6e99();
            uStack_c = 0x32b2;
            uStack_e = 0x19b2;
            FUN_32b2_710c();
            uStack_c = 0x32b2;
            uStack_e = 0x19b7;
            FUN_32b2_7173();
            uStack_c = 0x32b2;
            uStack_e = 0x19bf;
            FUN_32b2_7095();
            uStack_c = 0x32b2;
            uStack_e = 0x19c7;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x19cf;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x19d7;
            FUN_32b2_710c();
            uStack_c = 0x32b2;
            uStack_e = 0x19df;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x19e7;
            FUN_32b2_710c();
            uStack_c = 0x32b2;
            uStack_e = 0x19ec;
            FUN_32b2_718c();
            uStack_c = 0x32b2;
            uStack_e = 0x19f4;
            FUN_32b2_7095();
            uStack_c = 0x32b2;
            uStack_e = 0x19fc;
            FUN_32b2_6eb1();
            if ((*(int *)(unaff_BP + -0x12) == *(int *)(unaff_BP + -0xe)) &&
               (*(int *)(unaff_BP + -0x10) == *(int *)(unaff_BP + -0xc))) {
              uVar8 = 0;
            }
            else {
              uVar8 = 1;
            }
            return uVar8;
          }
          if (*(char *)0xb1ea == '\x03') {
            iStack_6 = 0xf97d;
            FUN_21f2_3454();
            iStack_6 = -0x674;
            FUN_21f2_2d26();
          }
          func_0x0000c3ca();
          if (*(int *)0xbc2 == 0) {
            if (*(char *)0xb1ea == '\x03') {
              if (*(int *)0xc22 == 0) {
                iStack_6 = 0x12;
                iStack_8 = unaff_BP + -0x52;
                uStack_a = 0x885;
                uStack_c = 0xf9c4;
                FUN_1000_02b5();
              }
              *(undefined2 *)0xc22 = 1;
              iStack_6 = *(int *)0x9454;
              iStack_8 = *(undefined2 *)0x945a;
              uStack_a = *(undefined2 *)0x9458;
              uStack_c = *(undefined2 *)0x9456;
              uStack_e = *(undefined2 *)0x9454;
              uStack_10 = 0;
              iStack_12 = unaff_BP + -0x52;
              uStack_14 = 0;
              uStack_16 = 0;
              uStack_18 = 2;
              pcVar5 = (code *)swi(0x3f);
              (*pcVar5)();
            }
            else {
              if (*(byte *)0xb1ea < 2) {
                if (*(int *)0xce6 == 0) {
                  iStack_6 = *(int *)0x9454;
                  iStack_8 = *(undefined2 *)0x945a;
                  uStack_a = *(undefined2 *)0x9458;
                  uStack_c = *(undefined2 *)0x9456;
                  uStack_e = *(undefined2 *)0x9454;
                  uStack_10 = 0;
                  iStack_12 = unaff_BP + -0x52;
                  uStack_14 = 0;
                  uStack_16 = 0;
                  uStack_18 = 0;
                  pcVar5 = (code *)swi(0x3f);
                  (*pcVar5)();
                }
                else {
                  iStack_6 = *(int *)0x9454;
                  iStack_8 = *(undefined2 *)0x945a;
                  uStack_a = *(undefined2 *)0x9458;
                  uStack_c = *(undefined2 *)0x9456;
                  uStack_e = *(undefined2 *)0x9454;
                  uStack_10 = 0;
                  iStack_12 = unaff_BP + -0x52;
                  uStack_14 = 0;
                  uStack_16 = 1;
                  uStack_18 = 0;
                  pcVar5 = (code *)swi(0x3f);
                  iVar7 = (*pcVar5)();
                  if (iVar7 == -1) {
                    uVar8 = FUN_2bb4_66c9();
                    return uVar8;
                  }
                }
              }
              if (*(char *)0xb1ea == '\x02') {
                iStack_6 = *(int *)0x9454;
                iStack_8 = *(undefined2 *)0x945a;
                uStack_a = *(undefined2 *)0x9458;
                uStack_c = *(undefined2 *)0x9456;
                uStack_e = *(undefined2 *)0x9454;
                uStack_10 = 0;
                iStack_12 = unaff_BP + -0x52;
                uStack_14 = 0;
                uStack_16 = 1;
                uStack_18 = 1;
                pcVar5 = (code *)swi(0x3f);
                iVar7 = (*pcVar5)();
                if (iVar7 == -1) {
                  uVar8 = FUN_2bb4_66c9();
                  return uVar8;
                }
              }
            }
          }
          if (*(int *)0x158 == 0) {
            uVar8 = FUN_3ab8_5218();
            return uVar8;
          }
          if (*(char *)0x118 != '\0') {
            uVar8 = FUN_2bb4_66c9();
            return uVar8;
          }
          if ((((*(char *)0x124 == '\0') || (*(int *)0x158 == 10000)) || (*(int *)0xbc2 != 0)) ||
             (*(char *)0xb1ea != '\0')) {
            uVar8 = FUN_2bb4_66c9();
            return uVar8;
          }
          if ((((*(int *)0xa62 != 1) || (*(int *)0xa64 != 1)) &&
              ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) &&
             ((*(byte *)0xb782 < 4 || (*(int *)0xa66 != *(int *)0xa62)))) {
            if (*(byte *)0xb782 < 4) {
              uVar8 = FUN_2bb4_66c9();
              return uVar8;
            }
            if (*(int *)0xa62 != 1) {
LAB_3ab8_5003:
              uVar8 = FUN_2bb4_66c9();
              return uVar8;
            }
          }
          FUN_1885_2ec3();
          *(undefined2 *)0x158 = 0;
          *(undefined1 *)0xb1ea = 3;
        } while( true );
      }
      if (*(char *)0xb1ea == '\0') {
        *(undefined1 *)0x1062 = 1;
      }
      iStack_6 = *(int *)0x9454;
      iStack_8 = *(undefined2 *)0x945a;
      uStack_a = *(undefined2 *)0x9458;
      uStack_c = *(undefined2 *)0x9456;
      uStack_e = *(undefined2 *)0x9454;
      uStack_10 = 0;
      iStack_12 = unaff_BP + -0x52;
      uStack_14 = 0;
      uStack_16 = 0xd8f1;
      uStack_18 = (uint)(*(char *)0xb1ea == '\x02');
      pcVar5 = (code *)swi(0x3f);
      iVar7 = (*pcVar5)();
      if (iVar7 == -1) goto LAB_3ab8_4d74;
      if (*(int *)0x158 != 0) {
        uVar8 = 0x7a6;
        func_0x00008095();
      }
    }
    if (*(int *)(unaff_BP + -0x1fe) < 1) {
      uVar8 = FUN_3ab8_5188();
      return uVar8;
    }
    if (7 < *(int *)(unaff_BP + -0x1fe)) {
      uVar8 = FUN_3ab8_5188();
      return uVar8;
    }
    if ((*(int *)(unaff_BP + -0x1fe) != 7) &&
       ((bVar11 = *(byte *)0xb1ea < 3, *(byte *)0xb1ea != 3 ||
        (bVar11 = *(uint *)(unaff_BP + -0x1fe) < 4, *(uint *)(unaff_BP + -0x1fe) != 4)))) {
      param_1 = unaff_ES;
      if (bVar11) goto code_r0x00030201;
      while( true ) {
        param_1 = uVar8;
        FUN_32b2_6eb1();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        iStack_6 = 0x32b2;
        iStack_8 = 0x30c;
        FUN_32b2_6eb1();
        iStack_6 = 0x32b2;
        iStack_8 = 0x314;
        FUN_32b2_6d14();
        uStack_e = 0x32b2;
        uStack_10 = 0x31e;
        FUN_32b2_6eb1();
        uStack_e = 0x32b2;
        uStack_10 = 0x326;
        FUN_32b2_6cc6();
        uStack_e = 0x32b2;
        uStack_10 = 0x32b;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 0x335;
        FUN_32b2_6eb1();
        uStack_16 = 0x32b2;
        uStack_18 = 0x33d;
        FUN_32b2_6cc6();
        uStack_16 = 0x32b2;
        uStack_18 = 0x342;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        FUN_32b2_6eb1();
        uStack_1e = 1;
        uStack_22 = 0x354;
        FUN_3ab8_5089();
        uVar10 = (undefined1 *)0xffc9 < &uStack_30;
        uVar12 = &stack0x0000 == (undefined1 *)0xfffa;
        param_2 = 0x32b2;
        param_1 = 0x360;
        FUN_32b2_6cc6();
        param_2 = 0x32b2;
        param_1 = 0x369;
        FUN_32b2_701d();
        param_2 = 0x32b2;
        param_1 = 0x36e;
        FUN_32b2_7258();
        param_2 = 0x32b2;
        param_1 = 0x376;
        FUN_32b2_6e99();
        param_2 = 0x32b2;
        param_1 = 0x37e;
        FUN_32b2_6ef9();
        param_2 = 0x32b2;
        param_1 = 0x387;
        FUN_32b2_6cc6();
        param_2 = 0x32b2;
        param_1 = 0x390;
        FUN_32b2_701d();
        param_2 = 0x32b2;
        param_1 = 0x395;
        FUN_32b2_7258();
        param_2 = 0x32b2;
        param_1 = 0x39e;
        FUN_32b2_6e99();
        param_2 = 0x32b2;
        param_1 = 0x3a6;
        FUN_32b2_6ef9();
        param_2 = 0x32b2;
        param_1 = 0x3af;
        FUN_32b2_6d14();
        param_2 = 0x32b2;
        param_1 = 0x3b4;
        FUN_32b2_6fc7();
        param_2 = 0x32b2;
        param_1 = 0x3bc;
        FUN_32b2_6d14();
        param_2 = 0x32b2;
        param_1 = 0x3c1;
        FUN_32b2_6fc7();
        param_2 = 0x32b2;
        param_1 = 0x3ca;
        FUN_32b2_710c();
        param_2 = 0x32b2;
        param_1 = 0x3cf;
        FUN_32b2_7191();
        if (!(bool)uVar10 && !(bool)uVar12) {
          param_2 = 0x32b2;
          param_1 = 0x3da;
          FUN_32b2_6d14();
          param_2 = 0x32b2;
          param_1 = 0x3e2;
          FUN_32b2_6d14();
          param_2 = 0x32b2;
          param_1 = 999;
          FUN_32b2_7191();
          if (!(bool)uVar12) {
            param_2 = 0x32b2;
            param_1 = 0x431;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x439;
            FUN_32b2_7124();
            param_2 = 0x32b2;
            param_1 = 0x441;
            FUN_32b2_6e99();
            param_2 = 0x32b2;
            param_1 = 0x44a;
            FUN_32b2_704d();
            param_2 = 0x32b2;
            param_1 = 0x453;
            FUN_32b2_7035();
            param_2 = 0x32b2;
            param_1 = 0x45c;
            FUN_32b2_6e99();
            param_2 = 0x32b2;
            param_1 = 0x464;
            FUN_32b2_6eb1();
            param_2 = 0x32b2;
            param_1 = 0x46c;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x474;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x47c;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x484;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x48c;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x494;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x49d;
            FUN_32b2_6e99();
            param_2 = 0x32b2;
            param_1 = 0x4a2;
            FUN_32b2_718c();
            param_2 = 0x32b2;
            param_1 = 0x4ab;
            FUN_32b2_6e99();
            param_2 = 0x32b2;
            param_1 = 0x4b3;
            FUN_32b2_6eb1();
            param_2 = 0x32b2;
            param_1 = 0x4bc;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x4c4;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x4cd;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x4d5;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x4dd;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x4e6;
            FUN_32b2_6e99();
            param_2 = 0x32b2;
            param_1 = 0x4ee;
            FUN_32b2_6eb1();
            param_2 = 0x32b2;
            param_1 = 0x4f7;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x500;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x509;
            FUN_32b2_70dc();
            param_2 = 0x32b2;
            param_1 = 0x511;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x519;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x522;
            FUN_32b2_6e99();
            param_2 = 0x32b2;
            param_1 = 0x52b;
            FUN_32b2_6eb1();
            param_2 = 0x32b2;
            param_1 = 0x534;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x53d;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x546;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x54f;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x558;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x55d;
            FUN_32b2_718c();
            param_2 = 0x32b2;
            param_1 = 0x566;
            FUN_32b2_6eb1();
            param_2 = 0x32b2;
            param_1 = 0x56f;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x574;
            FUN_32b2_6fd6();
            param_2 = 0x32b2;
            param_1 = 0x57d;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x586;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x58b;
            FUN_32b2_7182();
            param_2 = 0x32b2;
            param_1 = 0x594;
            FUN_32b2_6e99();
            param_2 = 0x32b2;
            param_1 = 0x59c;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x5a5;
            FUN_32b2_7154();
            param_2 = 0x32b2;
            param_1 = 0x5ae;
            FUN_32b2_6e99();
            param_2 = 0x32b2;
            param_1 = 0x5b7;
            FUN_32b2_6eb1();
            param_2 = 0x32b2;
            param_1 = 0x5c0;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x5c9;
            FUN_32b2_6eb1();
            param_2 = unaff_BP + -0x8a;
            param_1 = unaff_BP + -0x62;
            FUN_32b2_6cc6();
            FUN_32b2_7258();
            iStack_8 = 0x32b2;
            uStack_a = 0x5ea;
            FUN_32b2_6eb1();
            iStack_8 = 0x32b2;
            uStack_a = 0x5f2;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            uStack_a = 0x5f7;
            FUN_32b2_7258();
            uStack_10 = 0x32b2;
            iStack_12 = 0x601;
            FUN_32b2_6eb1();
            uStack_10 = *(undefined2 *)(unaff_BP + -100);
            iStack_12 = *(undefined2 *)(unaff_BP + -0x66);
            uStack_14 = *(undefined2 *)(unaff_BP + -0x68);
            uStack_16 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_18 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_22 = 0x622;
            FUN_32b2_6d14();
            uStack_28 = 0x32b2;
            uStack_2a = 0x62c;
            FUN_32b2_6eb1();
            uStack_28 = 0x32b2;
            uStack_2a = 0x635;
            FUN_32b2_6d14();
            uStack_30 = 0x32b2;
            uStack_32 = 0x63f;
            FUN_32b2_6eb1();
            uStack_30 = 0;
            uStack_32 = 0x32b2;
            FUN_3ab8_5089();
            uVar8 = *(undefined2 *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
            *(undefined2 *)(unaff_BP + -0x84) = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x88);
            *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
            *(undefined2 *)(unaff_BP + -0x9c) = uVar8;
            param_2 = unaff_BP + -0x9e;
            param_1 = unaff_BP + -0x86;
            puVar9 = &uStack_1e;
            puVar6 = (undefined2 *)(unaff_BP + 0x1c);
            for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar3 = *puVar2;
            }
            uStack_22 = 0x684;
            iVar7 = FUN_3ab8_522f();
            uVar10 = 0;
            uVar12 = iVar7 == 0;
            if (!(bool)uVar12) {
              param_2 = 0x32b2;
              param_1 = 0x694;
              FUN_32b2_6d14();
              param_2 = 0x32b2;
              param_1 = 0x69d;
              FUN_32b2_6cc6();
              param_2 = 0x32b2;
              param_1 = 0x6a5;
              FUN_32b2_701d();
              param_2 = 0x32b2;
              param_1 = 0x6aa;
              FUN_32b2_6fc7();
              param_2 = 0x32b2;
              param_1 = 0x6af;
              FUN_32b2_7258();
              param_2 = 0x32b2;
              param_1 = 0x6b4;
              FUN_32b2_7191();
              if ((bool)uVar10 || (bool)uVar12) {
                param_2 = 0x32b2;
                param_1 = 0x6bf;
                FUN_32b2_6d14();
                param_2 = 0x32b2;
                param_1 = 0x6c8;
                FUN_32b2_6cc6();
                param_2 = 0x32b2;
                param_1 = 0x6d1;
                FUN_32b2_701d();
                param_2 = 0x32b2;
                param_1 = 0x6d6;
                FUN_32b2_6fc7();
                param_2 = 0x32b2;
                param_1 = 0x6db;
                FUN_32b2_7258();
                param_2 = 0x32b2;
                param_1 = 0x6e0;
                FUN_32b2_7191();
                if ((bool)uVar10 || (bool)uVar12) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
              }
            }
            param_2 = 0x32b2;
            param_1 = 0x6f8;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x700;
            FUN_32b2_6d14();
            param_2 = 0x32b2;
            param_1 = 0x708;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x711;
            FUN_32b2_710c();
            param_2 = 0x32b2;
            param_1 = 0x71a;
            FUN_32b2_7154();
            param_2 = 0x32b2;
            param_1 = 0x71f;
            FUN_32b2_7191();
            if (!(bool)uVar10) {
              param_2 = 0x32b2;
              param_1 = 0x72d;
              FUN_32b2_6d14();
              param_2 = 0x32b2;
              param_1 = 0x732;
              FUN_32b2_6fc7();
              param_2 = 0x32b2;
              param_1 = 0x73a;
              FUN_32b2_6d14();
              param_2 = 0x32b2;
              param_1 = 0x742;
              FUN_32b2_710c();
              param_2 = 0x32b2;
              param_1 = 0x74b;
              FUN_32b2_710c();
              param_2 = 0x32b2;
              param_1 = 0x750;
              FUN_32b2_7191();
              if (!(bool)uVar10) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
              param_2 = *(undefined2 *)(unaff_BP + -0xb6);
              param_1 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_6 = 0x774;
              FUN_32b2_7592();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_70dc();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7182();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7154();
              param_1 = 0x32b2;
              FUN_32b2_6e99();
              param_1 = 0x32b2;
              FUN_32b2_6eb1();
              param_1 = unaff_BP + -0x8a;
              FUN_32b2_6cc6();
              FUN_32b2_7258();
              uStack_a = 0x32b2;
              uStack_c = 0x7e8;
              FUN_32b2_6eb1();
              uStack_a = 0x32b2;
              uStack_c = 0x7f0;
              FUN_32b2_6cc6();
              uStack_a = 0x32b2;
              uStack_c = 0x7f5;
              FUN_32b2_7258();
              iStack_12 = 0x32b2;
              uStack_14 = 0x7ff;
              FUN_32b2_6eb1();
              iStack_12 = *(undefined2 *)(unaff_BP + -100);
              uStack_14 = *(undefined2 *)(unaff_BP + -0x66);
              uStack_16 = *(undefined2 *)(unaff_BP + -0x68);
              uStack_18 = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_1a = *(undefined2 *)(unaff_BP + -0x48);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x4c);
              uStack_22 = 0x32b2;
              uStack_24 = 0x820;
              FUN_32b2_6d14();
              uStack_2a = 0x32b2;
              uStack_2c = 0x82a;
              FUN_32b2_6eb1();
              uStack_2a = 0x32b2;
              uStack_2c = 0x833;
              FUN_32b2_6d14();
              uStack_32 = 0x32b2;
              FUN_32b2_6eb1();
              uStack_32 = 0;
              FUN_3ab8_5089(0x32b2);
              uVar10 = (undefined1 *)0xffc9 < &uStack_32;
              uVar12 = &stack0x0000 == (undefined1 *)0xfffc;
              param_1 = 0x32b2;
              FUN_32b2_6cc6();
              param_1 = 0x32b2;
              FUN_32b2_6cc6();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if ((bool)uVar12) {
                uVar8 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar8;
              }
              param_1 = 0x32b2;
              FUN_32b2_6cc6();
              param_1 = 0x32b2;
              FUN_32b2_6cc6();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if ((bool)uVar12) {
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
              uVar12 = *piVar1 == 0;
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if (!(bool)uVar10 && !(bool)uVar12) {
                param_1 = *(undefined2 *)(unaff_BP + -0xb6);
                iStack_6 = 0x32b2;
                iStack_8 = 0x8ff;
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
                iStack_6 = 0x969;
                FUN_32b2_6cc6();
                iStack_6 = 0x96e;
                FUN_32b2_7258();
                uStack_c = 0x32b2;
                uStack_e = 0x978;
                FUN_32b2_6eb1();
                uStack_c = 0x32b2;
                uStack_e = 0x980;
                FUN_32b2_6cc6();
                uStack_c = 0x32b2;
                uStack_e = 0x985;
                FUN_32b2_7258();
                uStack_14 = 0x32b2;
                uStack_16 = 0x98f;
                FUN_32b2_6eb1();
                uStack_14 = *(undefined2 *)(unaff_BP + -100);
                uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
                uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
                uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
                uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
                uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
                uStack_22 = *(undefined2 *)(unaff_BP + -0x4e);
                uStack_24 = 0x32b2;
                uStack_26 = 0x9b0;
                FUN_32b2_6d14();
                uStack_2c = 0x32b2;
                uStack_2e = 0x9ba;
                FUN_32b2_6eb1();
                uStack_2c = 0x32b2;
                uStack_2e = 0x9c3;
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_3ab8_5089(0x32b2,0);
                uVar10 = &stack0x0000 == (undefined1 *)0xfffe;
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
                  uVar8 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar8;
                }
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
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
              return *(undefined2 *)(unaff_BP + -0x36);
            }
          }
          return 0;
        }
        param_2 = 0x32b2;
        param_1 = 0x3f5;
        FUN_32b2_6d14();
        param_2 = unaff_BP + -0xbc;
        param_1 = 0x32b2;
        FUN_32b2_7154();
        param_2 = 0x32b2;
        param_1 = 0x405;
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
        param_2 = *(undefined2 *)(unaff_BP + -0xb6);
        param_1 = *(undefined2 *)(unaff_BP + -0xb8);
        iStack_6 = 0x119;
        FUN_32b2_75fe();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = 0x32b2;
        FUN_32b2_704d();
        param_1 = 0x32b2;
        FUN_32b2_7095();
        param_1 = 0x32b2;
        FUN_32b2_6eb1();
        param_1 = *(undefined2 *)(unaff_BP + -0xb6);
        iStack_6 = 0x32b2;
        iStack_8 = 0x150;
        FUN_32b2_75ec();
        uVar10 = &stack0x0000 == (undefined1 *)0xfffe;
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar10) {
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar10) {
            return 0;
          }
        }
        iStack_6 = *(int *)(unaff_BP + -0x7e);
        iStack_8 = *(undefined2 *)(unaff_BP + -0x80);
        uStack_a = *(undefined2 *)(unaff_BP + -0x82);
        uStack_c = *(undefined2 *)(unaff_BP + -0x58);
        uStack_e = *(undefined2 *)(unaff_BP + -0x5a);
        uStack_10 = *(undefined2 *)(unaff_BP + -0x5c);
        iStack_12 = *(int *)(unaff_BP + -0x5e);
        uStack_14 = 0x32b2;
        uStack_16 = 0x1d0;
        FUN_32b2_6cc6();
        uStack_14 = 0x32b2;
        uStack_16 = 0x1d5;
        FUN_32b2_7258();
        uStack_1c = 0x32b2;
        uStack_1e = 0x1df;
        FUN_32b2_6eb1();
        uStack_1c = 0x32b2;
        uStack_1e = 0x1e7;
        FUN_32b2_6cc6();
        uStack_1c = 0x32b2;
        uStack_1e = 0x1ec;
        FUN_32b2_7258();
        uStack_24 = 0x32b2;
        uStack_26 = 0x1f6;
        FUN_32b2_6eb1();
        uStack_24 = 0x32b2;
        uStack_26 = 0x1fa;
        iVar7 = FUN_3ab8_4fbd();
        if (iVar7 == 0) break;
code_r0x00030201:
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6e99();
        FUN_32b2_6ef9();
        iStack_6 = 0x231;
        FUN_32b2_6cc6();
        iStack_6 = 0x236;
        FUN_32b2_7258();
        uStack_c = 0x32b2;
        uStack_e = 0x240;
        FUN_32b2_6eb1();
        uStack_c = 0x32b2;
        uStack_e = 0x248;
        FUN_32b2_6cc6();
        uStack_c = 0x32b2;
        uStack_e = 0x24d;
        FUN_32b2_7258();
        uStack_14 = 0x32b2;
        uStack_16 = 599;
        FUN_32b2_6eb1();
        uStack_14 = 0x32b2;
        uStack_16 = 0x25f;
        FUN_32b2_6d14();
        uStack_1c = 0x32b2;
        uStack_1e = 0x269;
        FUN_32b2_6eb1();
        uStack_1c = 0x32b2;
        uStack_1e = 0x271;
        FUN_32b2_6cc6();
        uStack_1c = 0x32b2;
        uStack_1e = 0x276;
        FUN_32b2_7258();
        uStack_1c = 0x32b2;
        uStack_1e = 0x27e;
        FUN_32b2_6e99();
        uStack_24 = 0x32b2;
        uStack_26 = 0x288;
        FUN_32b2_6eb1();
        uStack_24 = 0x32b2;
        uStack_26 = 0x290;
        FUN_32b2_6cc6();
        uStack_24 = 0x32b2;
        uStack_26 = 0x295;
        FUN_32b2_7258();
        uStack_2c = 0x32b2;
        uStack_2e = 0x29f;
        FUN_32b2_6eb1();
        uStack_2c = 0x32b2;
        uStack_2e = 0x2a7;
        FUN_32b2_6cc6();
        uStack_2c = 0x32b2;
        uStack_2e = 0x2ac;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_3ab8_5089(0x32b2,1);
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        uVar8 = 0x32b2;
        FUN_32b2_7258();
      }
      return 0;
    }
    if ((*(char *)0xb1ea != '\0') && (*(char *)0xb1ea != '\x03')) {
      uVar8 = FUN_3ab8_533a();
      return uVar8;
    }
    iStack_6 = 0xfc75;
    FUN_21f2_3454();
    iStack_6 = 0xfc85;
    FUN_21f2_2d26();
    iStack_6 = 0xfc95;
    FUN_21f2_2d26();
    iStack_6 = 0xfca5;
    FUN_21f2_2d26();
    iStack_6 = 0xfcb5;
    FUN_21f2_2d26();
    iStack_6 = 0xfcc5;
    FUN_1def_07a4();
    iStack_6 = 0x1bb4;
    iStack_8 = 0xfcd7;
    FUN_3ab8_014c();
    iStack_6 = unaff_BP + -0x1cc;
    iStack_8 = 1;
    uStack_a = 0x1bb4;
    uStack_c = 0xfcf7;
    in_stack_00000000 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x236) = in_stack_00000000;
    iVar7 = *(int *)0x158;
  } while( true );
}



/* 3ab8:5188  FUN_3ab8_5188  115 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x000302f0) overlaps instruction at (ram,0x000302ef)
    */

undefined2 FUN_3ab8_5188(int param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 uVar8;
  int unaff_BP;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  uint uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  
  uVar8 = 0x3ab8;
  if (*(int *)(unaff_BP + -0x146) != 0) {
    if (0xb < *(byte *)0x123) {
      uVar8 = 0x7a6;
      iVar7 = func_0x00007a6a();
      if (iVar7 != 0) {
        iStack_8 = *(undefined2 *)(unaff_BP + -0x21e);
        iStack_a = 1;
        pcVar5 = (code *)swi(0x3f);
        (*pcVar5)();
        goto LAB_3ab8_5246;
      }
    }
    iStack_a = 0xfd54;
    iStack_8 = uVar8;
    iVar7 = func_0x00015409();
    if (iVar7 != 0) {
      *(undefined2 *)(unaff_BP + -0x1fe) = 0;
      uVar8 = *(undefined2 *)(unaff_BP + -0x21c);
      *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x21e);
      *(undefined2 *)(unaff_BP + -0x142) = uVar8;
      uVar8 = *(undefined2 *)(unaff_BP + -0x230);
      *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x232);
      *(undefined2 *)(unaff_BP + -0x15a) = uVar8;
      uVar8 = FUN_3ab8_50be();
      return uVar8;
    }
  }
LAB_3ab8_5246:
  do {
    iStack_8 = 0xfdd4;
    FUN_21f2_3454();
    if (*(byte *)0xb1ea < 2) {
      iStack_8 = 0xfdeb;
      FUN_21f2_2d26();
    }
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0xfe09;
      FUN_21f2_2d26();
    }
    if (*(char *)0xb1ea == '\x01') {
      iStack_8 = 0xfe20;
      FUN_21f2_2d26();
    }
    iStack_8 = 0xfe30;
    FUN_1def_07a4();
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0x1bb4;
      iStack_a = 0xfe50;
      FUN_3ab8_014c();
    }
    if (*(char *)0xb1ea != '\x02') {
      uVar8 = FUN_3ab8_4fc8();
      return uVar8;
    }
    *(undefined2 *)0xc2c = 1;
    iStack_8 = unaff_BP + -0x1cc;
    *(undefined2 *)0xc20 = 1;
    iStack_a = 1;
    uStack_c = 0x1bb4;
    uStack_e = 0xfb6e;
    uVar8 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x1fe) = uVar8;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xc2c = 0;
    if (*(int *)0x158 != 0) goto LAB_3ab8_5003;
    func_0x0000c3ca();
    if ((*(int *)(unaff_BP + -0x1fe) == 0x14) && (*(char *)0xb1ea == '\x02')) {
      func_0x00008095();
      uVar8 = FUN_2bb4_66c9();
      return uVar8;
    }
    if (*(int *)(unaff_BP + -0x1fe) == -1) {
      *(undefined2 *)(unaff_BP + -0x146) = 0;
      if (*(char *)0xb1ea == '\x03') {
        func_0x00008095();
LAB_3ab8_4d74:
        do {
          iStack_8 = 0xf901;
          FUN_21f2_3454();
          if (*(char *)0xb1ea == '\0') {
            *(undefined1 *)0x1062 = 1;
          }
          if (*(char *)0xb1ea == '\x01') {
            iStack_8 = 0xf923;
            FUN_21f2_3454();
          }
          if (*(char *)0xb1ea == '\x02') {
            iStack_8 = 0xf939;
            FUN_21f2_3454();
          }
          iStack_8 = 0xf948;
          FUN_21f2_3454();
          iStack_8 = -0x6a9;
          FUN_21f2_2d26();
          if (*(char *)(unaff_BP + -0x134) != '\0') {
            *(undefined2 *)(unaff_BP + -0x1fe) = 1;
            FUN_32b2_7285();
            FUN_32b2_710c();
            FUN_32b2_6e99();
            iStack_a = 0x32b2;
            uStack_c = 0x17a0;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x17a5;
            puVar6 = (undefined2 *)FUN_32b2_75fe();
            *(undefined2 *)(unaff_BP + -0x48) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x46) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x44) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x42) = puVar6[3];
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x17c5;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x17ca;
            puVar6 = (undefined2 *)FUN_32b2_75ec();
            *(undefined2 *)(unaff_BP + -0x50) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x4e) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x4c) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x4a) = puVar6[3];
            uVar8 = *(undefined2 *)(unaff_BP + -0x12);
            uVar4 = *(undefined2 *)(unaff_BP + -0x10);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_8 = 0x17f6;
            FUN_32b2_7285();
            iStack_8 = 0x17ff;
            FUN_32b2_710c();
            iStack_8 = 0x1807;
            FUN_32b2_6e99();
            uStack_e = 0x32b2;
            uStack_10 = 0x1811;
            FUN_32b2_6eb1();
            uStack_e = 0x32b2;
            uStack_10 = 0x1816;
            FUN_32b2_75fe();
            iStack_8 = 0x32b2;
            iStack_a = 0x1820;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x1828;
            FUN_32b2_704d();
            iStack_8 = 0x32b2;
            iStack_a = 0x1830;
            FUN_32b2_6eb1();
            iStack_8 = 0x32b2;
            iStack_a = 0x1838;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x1840;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            iStack_a = 0x1848;
            FUN_32b2_6d14();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1852;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1857;
            FUN_32b2_75ec();
            iStack_a = 0x32b2;
            uStack_c = 0x1861;
            FUN_32b2_6d14();
            uVar8 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_a = 0x32b2;
            uStack_c = 0x187a;
            FUN_32b2_7285();
            iStack_a = 0x32b2;
            uStack_c = 0x187f;
            FUN_32b2_717d();
            iStack_a = 0x32b2;
            uStack_c = 0x1887;
            FUN_32b2_704d();
            iStack_a = 0x32b2;
            uStack_c = 0x1890;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x1898;
            FUN_32b2_6e99();
            iStack_a = 0x32b2;
            uStack_c = 0x18a0;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18a5;
            FUN_32b2_7173();
            iStack_a = 0x32b2;
            uStack_c = 0x18ad;
            FUN_32b2_7095();
            iStack_a = 0x32b2;
            uStack_c = 0x18b5;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x18bd;
            FUN_32b2_6d14();
            iStack_a = 0x32b2;
            uStack_c = 0x18c5;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18cd;
            FUN_32b2_6d14();
            iStack_a = 0x32b2;
            uStack_c = 0x18d5;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18da;
            FUN_32b2_718c();
            iStack_a = 0x32b2;
            uStack_c = 0x18e2;
            FUN_32b2_7095();
            iStack_a = 0x32b2;
            uStack_c = 0x18ea;
            FUN_32b2_6eb1();
            uVar8 = *(undefined2 *)(unaff_BP + -0xe);
            uVar4 = *(undefined2 *)(unaff_BP + -0xc);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_a = 0x32b2;
            uStack_c = 0x1908;
            FUN_32b2_7285();
            iStack_a = 0x32b2;
            uStack_c = 0x1911;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x1919;
            FUN_32b2_6e99();
            uStack_12 = 0x32b2;
            iStack_14 = 0x1923;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            iStack_14 = 0x1928;
            FUN_32b2_75fe();
            uStack_c = 0x32b2;
            uStack_e = 0x1932;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x193a;
            FUN_32b2_704d();
            uStack_c = 0x32b2;
            uStack_e = 0x1942;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x194a;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x1952;
            FUN_32b2_710c();
            uStack_c = 0x32b2;
            uStack_e = 0x195a;
            FUN_32b2_6d14();
            iStack_14 = 0x32b2;
            uStack_16 = 0x1964;
            FUN_32b2_6eb1();
            iStack_14 = 0x32b2;
            uStack_16 = 0x1969;
            FUN_32b2_75ec();
            uStack_e = 0x32b2;
            uStack_10 = 0x1973;
            FUN_32b2_6d14();
            uVar8 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            uStack_e = 0x32b2;
            uStack_10 = 0x198c;
            FUN_32b2_7285();
            uStack_e = 0x32b2;
            uStack_10 = 0x1991;
            FUN_32b2_717d();
            uStack_e = 0x32b2;
            uStack_10 = 0x1999;
            FUN_32b2_704d();
            uStack_e = 0x32b2;
            uStack_10 = 0x19a2;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19aa;
            FUN_32b2_6e99();
            uStack_e = 0x32b2;
            uStack_10 = 0x19b2;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19b7;
            FUN_32b2_7173();
            uStack_e = 0x32b2;
            uStack_10 = 0x19bf;
            FUN_32b2_7095();
            uStack_e = 0x32b2;
            uStack_10 = 0x19c7;
            FUN_32b2_6eb1();
            uStack_e = 0x32b2;
            uStack_10 = 0x19cf;
            FUN_32b2_6d14();
            uStack_e = 0x32b2;
            uStack_10 = 0x19d7;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19df;
            FUN_32b2_6d14();
            uStack_e = 0x32b2;
            uStack_10 = 0x19e7;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19ec;
            FUN_32b2_718c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19f4;
            FUN_32b2_7095();
            uStack_e = 0x32b2;
            uStack_10 = 0x19fc;
            FUN_32b2_6eb1();
            if ((*(int *)(unaff_BP + -0x12) == *(int *)(unaff_BP + -0xe)) &&
               (*(int *)(unaff_BP + -0x10) == *(int *)(unaff_BP + -0xc))) {
              uVar8 = 0;
            }
            else {
              uVar8 = 1;
            }
            return uVar8;
          }
          if (*(char *)0xb1ea == '\x03') {
            iStack_8 = 0xf97d;
            FUN_21f2_3454();
            iStack_8 = -0x674;
            FUN_21f2_2d26();
          }
          func_0x0000c3ca();
          if (*(int *)0xbc2 == 0) {
            if (*(char *)0xb1ea == '\x03') {
              if (*(int *)0xc22 == 0) {
                iStack_8 = 0x12;
                iStack_a = unaff_BP + -0x52;
                uStack_c = 0x885;
                uStack_e = 0xf9c4;
                FUN_1000_02b5();
              }
              *(undefined2 *)0xc22 = 1;
              iStack_8 = *(int *)0x9454;
              iStack_a = *(undefined2 *)0x945a;
              uStack_c = *(undefined2 *)0x9458;
              uStack_e = *(undefined2 *)0x9456;
              uStack_10 = *(undefined2 *)0x9454;
              uStack_12 = 0;
              iStack_14 = unaff_BP + -0x52;
              uStack_16 = 0;
              uStack_18 = 0;
              uStack_1a = 2;
              pcVar5 = (code *)swi(0x3f);
              (*pcVar5)();
            }
            else {
              if (*(byte *)0xb1ea < 2) {
                if (*(int *)0xce6 == 0) {
                  iStack_8 = *(int *)0x9454;
                  iStack_a = *(undefined2 *)0x945a;
                  uStack_c = *(undefined2 *)0x9458;
                  uStack_e = *(undefined2 *)0x9456;
                  uStack_10 = *(undefined2 *)0x9454;
                  uStack_12 = 0;
                  iStack_14 = unaff_BP + -0x52;
                  uStack_16 = 0;
                  uStack_18 = 0;
                  uStack_1a = 0;
                  pcVar5 = (code *)swi(0x3f);
                  (*pcVar5)();
                }
                else {
                  iStack_8 = *(int *)0x9454;
                  iStack_a = *(undefined2 *)0x945a;
                  uStack_c = *(undefined2 *)0x9458;
                  uStack_e = *(undefined2 *)0x9456;
                  uStack_10 = *(undefined2 *)0x9454;
                  uStack_12 = 0;
                  iStack_14 = unaff_BP + -0x52;
                  uStack_16 = 0;
                  uStack_18 = 1;
                  uStack_1a = 0;
                  pcVar5 = (code *)swi(0x3f);
                  iVar7 = (*pcVar5)();
                  if (iVar7 == -1) {
                    uVar8 = FUN_2bb4_66c9();
                    return uVar8;
                  }
                }
              }
              if (*(char *)0xb1ea == '\x02') {
                iStack_8 = *(int *)0x9454;
                iStack_a = *(undefined2 *)0x945a;
                uStack_c = *(undefined2 *)0x9458;
                uStack_e = *(undefined2 *)0x9456;
                uStack_10 = *(undefined2 *)0x9454;
                uStack_12 = 0;
                iStack_14 = unaff_BP + -0x52;
                uStack_16 = 0;
                uStack_18 = 1;
                uStack_1a = 1;
                pcVar5 = (code *)swi(0x3f);
                iVar7 = (*pcVar5)();
                if (iVar7 == -1) {
                  uVar8 = FUN_2bb4_66c9();
                  return uVar8;
                }
              }
            }
          }
          if (*(int *)0x158 == 0) {
            uVar8 = FUN_3ab8_5218();
            return uVar8;
          }
          if (*(char *)0x118 != '\0') {
            uVar8 = FUN_2bb4_66c9();
            return uVar8;
          }
          if ((((*(char *)0x124 == '\0') || (*(int *)0x158 == 10000)) || (*(int *)0xbc2 != 0)) ||
             (*(char *)0xb1ea != '\0')) {
            uVar8 = FUN_2bb4_66c9();
            return uVar8;
          }
          if ((((*(int *)0xa62 != 1) || (*(int *)0xa64 != 1)) &&
              ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) &&
             ((*(byte *)0xb782 < 4 || (*(int *)0xa66 != *(int *)0xa62)))) {
            if (*(byte *)0xb782 < 4) {
              uVar8 = FUN_2bb4_66c9();
              return uVar8;
            }
            if (*(int *)0xa62 != 1) {
LAB_3ab8_5003:
              uVar8 = FUN_2bb4_66c9();
              return uVar8;
            }
          }
          FUN_1885_2ec3();
          *(undefined2 *)0x158 = 0;
          *(undefined1 *)0xb1ea = 3;
        } while( true );
      }
      if (*(char *)0xb1ea == '\0') {
        *(undefined1 *)0x1062 = 1;
      }
      iStack_8 = *(int *)0x9454;
      iStack_a = *(undefined2 *)0x945a;
      uStack_c = *(undefined2 *)0x9458;
      uStack_e = *(undefined2 *)0x9456;
      uStack_10 = *(undefined2 *)0x9454;
      uStack_12 = 0;
      iStack_14 = unaff_BP + -0x52;
      uStack_16 = 0;
      uStack_18 = 0xd8f1;
      uStack_1a = (uint)(*(char *)0xb1ea == '\x02');
      pcVar5 = (code *)swi(0x3f);
      iVar7 = (*pcVar5)();
      if (iVar7 == -1) goto LAB_3ab8_4d74;
      if (*(int *)0x158 != 0) {
        func_0x00008095();
      }
    }
    if (*(int *)(unaff_BP + -0x1fe) < 1) {
      uVar8 = FUN_3ab8_5188();
      return uVar8;
    }
    if (7 < *(int *)(unaff_BP + -0x1fe)) {
      uVar8 = FUN_3ab8_5188();
      return uVar8;
    }
    if ((*(int *)(unaff_BP + -0x1fe) != 7) &&
       ((bVar11 = *(byte *)0xb1ea < 3, *(byte *)0xb1ea != 3 ||
        (bVar11 = *(uint *)(unaff_BP + -0x1fe) < 4, *(uint *)(unaff_BP + -0x1fe) != 4)))) {
      if (bVar11) goto code_r0x00030201;
      while( true ) {
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        iStack_8 = 0x32b2;
        iStack_a = 0x30c;
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x314;
        FUN_32b2_6d14();
        uStack_10 = 0x32b2;
        uStack_12 = 0x31e;
        FUN_32b2_6eb1();
        uStack_10 = 0x32b2;
        uStack_12 = 0x326;
        FUN_32b2_6cc6();
        uStack_10 = 0x32b2;
        uStack_12 = 0x32b;
        FUN_32b2_7258();
        uStack_18 = 0x32b2;
        uStack_1a = 0x335;
        FUN_32b2_6eb1();
        uStack_18 = 0x32b2;
        uStack_1a = 0x33d;
        FUN_32b2_6cc6();
        uStack_18 = 0x32b2;
        uStack_1a = 0x342;
        FUN_32b2_7258();
        uStack_20 = 0x32b2;
        FUN_32b2_6eb1();
        uStack_20 = 1;
        uStack_24 = 0x354;
        FUN_3ab8_5089();
        uVar10 = (undefined1 *)0xffc9 < &uStack_32;
        uVar12 = &stack0x0000 == (undefined1 *)0xfffc;
        param_1 = 0x32b2;
        FUN_32b2_6cc6();
        param_1 = 0x32b2;
        FUN_32b2_701d();
        param_1 = 0x32b2;
        FUN_32b2_7258();
        param_1 = 0x32b2;
        FUN_32b2_6e99();
        param_1 = 0x32b2;
        FUN_32b2_6ef9();
        param_1 = 0x32b2;
        FUN_32b2_6cc6();
        param_1 = 0x32b2;
        FUN_32b2_701d();
        param_1 = 0x32b2;
        FUN_32b2_7258();
        param_1 = 0x32b2;
        FUN_32b2_6e99();
        param_1 = 0x32b2;
        FUN_32b2_6ef9();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = 0x32b2;
        FUN_32b2_6fc7();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = 0x32b2;
        FUN_32b2_6fc7();
        param_1 = 0x32b2;
        FUN_32b2_710c();
        param_1 = 0x32b2;
        FUN_32b2_7191();
        if (!(bool)uVar10 && !(bool)uVar12) {
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_7191();
          if (!(bool)uVar12) {
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_7124();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_704d();
            param_1 = 0x32b2;
            FUN_32b2_7035();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_718c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_70dc();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_718c();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6fd6();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7182();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7154();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = unaff_BP + -0x8a;
            FUN_32b2_6cc6();
            FUN_32b2_7258();
            iStack_a = 0x32b2;
            uStack_c = 0x5ea;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x5f2;
            FUN_32b2_6cc6();
            iStack_a = 0x32b2;
            uStack_c = 0x5f7;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            iStack_14 = 0x601;
            FUN_32b2_6eb1();
            uStack_12 = *(undefined2 *)(unaff_BP + -100);
            iStack_14 = *(undefined2 *)(unaff_BP + -0x66);
            uStack_16 = *(undefined2 *)(unaff_BP + -0x68);
            uStack_18 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x48);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_24 = 0x622;
            FUN_32b2_6d14();
            uStack_2a = 0x32b2;
            uStack_2c = 0x62c;
            FUN_32b2_6eb1();
            uStack_2a = 0x32b2;
            uStack_2c = 0x635;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x63f;
            FUN_32b2_6eb1();
            uStack_32 = 0;
            uStack_34 = 0x32b2;
            FUN_3ab8_5089();
            uVar8 = *(undefined2 *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
            *(undefined2 *)(unaff_BP + -0x84) = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x88);
            *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
            *(undefined2 *)(unaff_BP + -0x9c) = uVar8;
            param_1 = unaff_BP + -0x9e;
            puVar9 = &uStack_20;
            puVar6 = (undefined2 *)(unaff_BP + 0x1c);
            for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar3 = *puVar2;
            }
            uStack_24 = 0x684;
            iVar7 = FUN_3ab8_522f();
            uVar10 = 0;
            uVar12 = iVar7 == 0;
            if (!(bool)uVar12) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6cc6();
              param_1 = 0x32b2;
              FUN_32b2_701d();
              param_1 = 0x32b2;
              FUN_32b2_6fc7();
              param_1 = 0x32b2;
              FUN_32b2_7258();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if ((bool)uVar10 || (bool)uVar12) {
                param_1 = 0x32b2;
                FUN_32b2_6d14();
                param_1 = 0x32b2;
                FUN_32b2_6cc6();
                param_1 = 0x32b2;
                FUN_32b2_701d();
                param_1 = 0x32b2;
                FUN_32b2_6fc7();
                param_1 = 0x32b2;
                FUN_32b2_7258();
                param_1 = 0x32b2;
                FUN_32b2_7191();
                if ((bool)uVar10 || (bool)uVar12) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
              }
            }
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7154();
            param_1 = 0x32b2;
            FUN_32b2_7191();
            if (!(bool)uVar10) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6fc7();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if (!(bool)uVar10) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
              param_1 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_8 = 0x774;
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
              uStack_c = 0x32b2;
              uStack_e = 0x7e8;
              FUN_32b2_6eb1();
              uStack_c = 0x32b2;
              uStack_e = 0x7f0;
              FUN_32b2_6cc6();
              uStack_c = 0x32b2;
              uStack_e = 0x7f5;
              FUN_32b2_7258();
              iStack_14 = 0x32b2;
              uStack_16 = 0x7ff;
              FUN_32b2_6eb1();
              iStack_14 = *(undefined2 *)(unaff_BP + -100);
              uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
              uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
              uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
              uStack_24 = 0x32b2;
              uStack_26 = 0x820;
              FUN_32b2_6d14();
              uStack_2c = 0x32b2;
              uStack_2e = 0x82a;
              FUN_32b2_6eb1();
              uStack_2c = 0x32b2;
              uStack_2e = 0x833;
              FUN_32b2_6d14();
              uStack_34 = 0x32b2;
              FUN_32b2_6eb1();
              uStack_34 = 0;
              FUN_3ab8_5089(0x32b2);
              uVar10 = (undefined1 *)0xffc9 < &uStack_34;
              uVar12 = &stack0x0000 == (undefined1 *)0xfffe;
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              if ((bool)uVar12) {
                uVar8 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar8;
              }
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              if ((bool)uVar12) {
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
              uVar12 = *piVar1 == 0;
              FUN_32b2_6d14();
              FUN_32b2_6d14();
              FUN_32b2_7191();
              if (!(bool)uVar10 && !(bool)uVar12) {
                iStack_8 = 0x32b2;
                iStack_a = 0x8ff;
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
                iStack_8 = 0x969;
                FUN_32b2_6cc6();
                iStack_8 = 0x96e;
                FUN_32b2_7258();
                uStack_e = 0x32b2;
                uStack_10 = 0x978;
                FUN_32b2_6eb1();
                uStack_e = 0x32b2;
                uStack_10 = 0x980;
                FUN_32b2_6cc6();
                uStack_e = 0x32b2;
                uStack_10 = 0x985;
                FUN_32b2_7258();
                uStack_16 = 0x32b2;
                uStack_18 = 0x98f;
                FUN_32b2_6eb1();
                uStack_16 = *(undefined2 *)(unaff_BP + -100);
                uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
                uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
                uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
                uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
                uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
                uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
                uStack_26 = 0x32b2;
                uStack_28 = 0x9b0;
                FUN_32b2_6d14();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9ba;
                FUN_32b2_6eb1();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9c3;
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_3ab8_5089(0x32b2,0);
                uVar10 = &stack0x0000 == (undefined1 *)0x0;
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
                  uVar8 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar8;
                }
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
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
              return *(undefined2 *)(unaff_BP + -0x36);
            }
          }
          return 0;
        }
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = unaff_BP + -0xbc;
        FUN_32b2_7154();
        param_1 = 0x32b2;
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
        param_1 = *(undefined2 *)(unaff_BP + -0xb6);
        iStack_8 = 0x119;
        FUN_32b2_75fe();
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x150;
        FUN_32b2_75ec();
        uVar10 = &stack0x0000 == (undefined1 *)0x0;
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar10) {
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar10) {
            return 0;
          }
        }
        iStack_8 = *(int *)(unaff_BP + -0x7e);
        iStack_a = *(undefined2 *)(unaff_BP + -0x80);
        uStack_c = *(undefined2 *)(unaff_BP + -0x82);
        uStack_e = *(undefined2 *)(unaff_BP + -0x58);
        uStack_10 = *(undefined2 *)(unaff_BP + -0x5a);
        uStack_12 = *(undefined2 *)(unaff_BP + -0x5c);
        iStack_14 = *(int *)(unaff_BP + -0x5e);
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d0;
        FUN_32b2_6cc6();
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d5;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1df;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1e7;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1ec;
        FUN_32b2_7258();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1f6;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1fa;
        iVar7 = FUN_3ab8_4fbd();
        if (iVar7 == 0) break;
code_r0x00030201:
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6e99();
        FUN_32b2_6ef9();
        iStack_8 = 0x231;
        FUN_32b2_6cc6();
        iStack_8 = 0x236;
        FUN_32b2_7258();
        uStack_e = 0x32b2;
        uStack_10 = 0x240;
        FUN_32b2_6eb1();
        uStack_e = 0x32b2;
        uStack_10 = 0x248;
        FUN_32b2_6cc6();
        uStack_e = 0x32b2;
        uStack_10 = 0x24d;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 599;
        FUN_32b2_6eb1();
        uStack_16 = 0x32b2;
        uStack_18 = 0x25f;
        FUN_32b2_6d14();
        uStack_1e = 0x32b2;
        uStack_20 = 0x269;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x271;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x276;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x27e;
        FUN_32b2_6e99();
        uStack_26 = 0x32b2;
        uStack_28 = 0x288;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x290;
        FUN_32b2_6cc6();
        uStack_26 = 0x32b2;
        uStack_28 = 0x295;
        FUN_32b2_7258();
        uStack_2e = 0x32b2;
        uStack_30 = 0x29f;
        FUN_32b2_6eb1();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2a7;
        FUN_32b2_6cc6();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2ac;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_3ab8_5089(0x32b2,1);
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
      }
      return 0;
    }
    if ((*(char *)0xb1ea != '\0') && (*(char *)0xb1ea != '\x03')) {
      uVar8 = FUN_3ab8_533a();
      return uVar8;
    }
    iStack_8 = 0xfc75;
    FUN_21f2_3454();
    iStack_8 = 0xfc85;
    FUN_21f2_2d26();
    iStack_8 = 0xfc95;
    FUN_21f2_2d26();
    iStack_8 = 0xfca5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcb5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcc5;
    FUN_1def_07a4();
    iStack_8 = 0x1bb4;
    iStack_a = 0xfcd7;
    FUN_3ab8_014c();
    iStack_8 = unaff_BP + -0x1cc;
    iStack_a = 1;
    uStack_c = 0x1bb4;
    uStack_e = 0xfcf7;
    iVar7 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x236) = iVar7;
    if (*(int *)0x158 != 0) {
      uVar8 = FUN_2bb4_66c9();
      return uVar8;
    }
    if (((iVar7 != 1) && (*(int *)(unaff_BP + -0x146) != 1)) && (iVar7 != -1)) {
      uVar8 = FUN_3ab8_52e6();
      return uVar8;
    }
    uVar8 = *(undefined2 *)0x9480;
    uVar4 = *(undefined2 *)0x9482;
    *(undefined2 *)(unaff_BP + -500) = uVar8;
    *(undefined2 *)(unaff_BP + -0x1f2) = uVar4;
    *(undefined2 *)(unaff_BP + -0x204) = uVar8;
    *(undefined2 *)(unaff_BP + -0x202) = uVar4;
    uVar8 = *(undefined2 *)0x943c;
    uVar4 = *(undefined2 *)0x943e;
    *(undefined2 *)(unaff_BP + -0x144) = uVar8;
    *(undefined2 *)(unaff_BP + -0x142) = uVar4;
    *(undefined2 *)(unaff_BP + -0x15c) = uVar8;
    *(undefined2 *)(unaff_BP + -0x15a) = uVar4;
  } while( true );
}



/* 3ab8:5218  FUN_3ab8_5218  23 bytes, 2 callers */

/* WARNING: Instruction at (ram,0x000302f0) overlaps instruction at (ram,0x000302ef)
    */

undefined2 FUN_3ab8_5218(int param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 uVar8;
  int unaff_BP;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  uint uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  
  do {
    uVar8 = *(undefined2 *)0x9480;
    uVar4 = *(undefined2 *)0x9482;
    *(undefined2 *)(unaff_BP + -500) = uVar8;
    *(undefined2 *)(unaff_BP + -0x1f2) = uVar4;
    *(undefined2 *)(unaff_BP + -0x204) = uVar8;
    *(undefined2 *)(unaff_BP + -0x202) = uVar4;
    uVar8 = *(undefined2 *)0x943c;
    uVar4 = *(undefined2 *)0x943e;
    *(undefined2 *)(unaff_BP + -0x144) = uVar8;
    *(undefined2 *)(unaff_BP + -0x142) = uVar4;
    *(undefined2 *)(unaff_BP + -0x15c) = uVar8;
    *(undefined2 *)(unaff_BP + -0x15a) = uVar4;
    iStack_8 = 0xfdd4;
    FUN_21f2_3454();
    if (*(byte *)0xb1ea < 2) {
      iStack_8 = 0xfdeb;
      FUN_21f2_2d26();
    }
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0xfe09;
      FUN_21f2_2d26();
    }
    if (*(char *)0xb1ea == '\x01') {
      iStack_8 = 0xfe20;
      FUN_21f2_2d26();
    }
    iStack_8 = 0xfe30;
    FUN_1def_07a4();
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0x1bb4;
      iStack_a = 0xfe50;
      FUN_3ab8_014c();
    }
    if (*(char *)0xb1ea != '\x02') {
      uVar8 = FUN_3ab8_4fc8();
      return uVar8;
    }
    *(undefined2 *)0xc2c = 1;
    iStack_8 = unaff_BP + -0x1cc;
    *(undefined2 *)0xc20 = 1;
    iStack_a = 1;
    uStack_c = 0x1bb4;
    uStack_e = 0xfb6e;
    uVar8 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x1fe) = uVar8;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xc2c = 0;
    if (*(int *)0x158 != 0) goto LAB_3ab8_5003;
    func_0x0000c3ca();
    if ((*(int *)(unaff_BP + -0x1fe) == 0x14) && (*(char *)0xb1ea == '\x02')) {
      func_0x00008095();
      uVar8 = FUN_2bb4_66c9();
      return uVar8;
    }
    if (*(int *)(unaff_BP + -0x1fe) == -1) {
      *(undefined2 *)(unaff_BP + -0x146) = 0;
      if (*(char *)0xb1ea == '\x03') {
        func_0x00008095();
LAB_3ab8_4d74:
        do {
          iStack_8 = 0xf901;
          FUN_21f2_3454();
          if (*(char *)0xb1ea == '\0') {
            *(undefined1 *)0x1062 = 1;
          }
          if (*(char *)0xb1ea == '\x01') {
            iStack_8 = 0xf923;
            FUN_21f2_3454();
          }
          if (*(char *)0xb1ea == '\x02') {
            iStack_8 = 0xf939;
            FUN_21f2_3454();
          }
          iStack_8 = 0xf948;
          FUN_21f2_3454();
          iStack_8 = -0x6a9;
          FUN_21f2_2d26();
          if (*(char *)(unaff_BP + -0x134) != '\0') {
            *(undefined2 *)(unaff_BP + -0x1fe) = 1;
            FUN_32b2_7285();
            FUN_32b2_710c();
            FUN_32b2_6e99();
            iStack_a = 0x32b2;
            uStack_c = 0x17a0;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x17a5;
            puVar6 = (undefined2 *)FUN_32b2_75fe();
            *(undefined2 *)(unaff_BP + -0x48) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x46) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x44) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x42) = puVar6[3];
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x17c5;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x17ca;
            puVar6 = (undefined2 *)FUN_32b2_75ec();
            *(undefined2 *)(unaff_BP + -0x50) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x4e) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x4c) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x4a) = puVar6[3];
            uVar8 = *(undefined2 *)(unaff_BP + -0x12);
            uVar4 = *(undefined2 *)(unaff_BP + -0x10);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_8 = 0x17f6;
            FUN_32b2_7285();
            iStack_8 = 0x17ff;
            FUN_32b2_710c();
            iStack_8 = 0x1807;
            FUN_32b2_6e99();
            uStack_e = 0x32b2;
            uStack_10 = 0x1811;
            FUN_32b2_6eb1();
            uStack_e = 0x32b2;
            uStack_10 = 0x1816;
            FUN_32b2_75fe();
            iStack_8 = 0x32b2;
            iStack_a = 0x1820;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x1828;
            FUN_32b2_704d();
            iStack_8 = 0x32b2;
            iStack_a = 0x1830;
            FUN_32b2_6eb1();
            iStack_8 = 0x32b2;
            iStack_a = 0x1838;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x1840;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            iStack_a = 0x1848;
            FUN_32b2_6d14();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1852;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1857;
            FUN_32b2_75ec();
            iStack_a = 0x32b2;
            uStack_c = 0x1861;
            FUN_32b2_6d14();
            uVar8 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_a = 0x32b2;
            uStack_c = 0x187a;
            FUN_32b2_7285();
            iStack_a = 0x32b2;
            uStack_c = 0x187f;
            FUN_32b2_717d();
            iStack_a = 0x32b2;
            uStack_c = 0x1887;
            FUN_32b2_704d();
            iStack_a = 0x32b2;
            uStack_c = 0x1890;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x1898;
            FUN_32b2_6e99();
            iStack_a = 0x32b2;
            uStack_c = 0x18a0;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18a5;
            FUN_32b2_7173();
            iStack_a = 0x32b2;
            uStack_c = 0x18ad;
            FUN_32b2_7095();
            iStack_a = 0x32b2;
            uStack_c = 0x18b5;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x18bd;
            FUN_32b2_6d14();
            iStack_a = 0x32b2;
            uStack_c = 0x18c5;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18cd;
            FUN_32b2_6d14();
            iStack_a = 0x32b2;
            uStack_c = 0x18d5;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18da;
            FUN_32b2_718c();
            iStack_a = 0x32b2;
            uStack_c = 0x18e2;
            FUN_32b2_7095();
            iStack_a = 0x32b2;
            uStack_c = 0x18ea;
            FUN_32b2_6eb1();
            uVar8 = *(undefined2 *)(unaff_BP + -0xe);
            uVar4 = *(undefined2 *)(unaff_BP + -0xc);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_a = 0x32b2;
            uStack_c = 0x1908;
            FUN_32b2_7285();
            iStack_a = 0x32b2;
            uStack_c = 0x1911;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x1919;
            FUN_32b2_6e99();
            uStack_12 = 0x32b2;
            iStack_14 = 0x1923;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            iStack_14 = 0x1928;
            FUN_32b2_75fe();
            uStack_c = 0x32b2;
            uStack_e = 0x1932;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x193a;
            FUN_32b2_704d();
            uStack_c = 0x32b2;
            uStack_e = 0x1942;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x194a;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x1952;
            FUN_32b2_710c();
            uStack_c = 0x32b2;
            uStack_e = 0x195a;
            FUN_32b2_6d14();
            iStack_14 = 0x32b2;
            uStack_16 = 0x1964;
            FUN_32b2_6eb1();
            iStack_14 = 0x32b2;
            uStack_16 = 0x1969;
            FUN_32b2_75ec();
            uStack_e = 0x32b2;
            uStack_10 = 0x1973;
            FUN_32b2_6d14();
            uVar8 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            uStack_e = 0x32b2;
            uStack_10 = 0x198c;
            FUN_32b2_7285();
            uStack_e = 0x32b2;
            uStack_10 = 0x1991;
            FUN_32b2_717d();
            uStack_e = 0x32b2;
            uStack_10 = 0x1999;
            FUN_32b2_704d();
            uStack_e = 0x32b2;
            uStack_10 = 0x19a2;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19aa;
            FUN_32b2_6e99();
            uStack_e = 0x32b2;
            uStack_10 = 0x19b2;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19b7;
            FUN_32b2_7173();
            uStack_e = 0x32b2;
            uStack_10 = 0x19bf;
            FUN_32b2_7095();
            uStack_e = 0x32b2;
            uStack_10 = 0x19c7;
            FUN_32b2_6eb1();
            uStack_e = 0x32b2;
            uStack_10 = 0x19cf;
            FUN_32b2_6d14();
            uStack_e = 0x32b2;
            uStack_10 = 0x19d7;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19df;
            FUN_32b2_6d14();
            uStack_e = 0x32b2;
            uStack_10 = 0x19e7;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19ec;
            FUN_32b2_718c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19f4;
            FUN_32b2_7095();
            uStack_e = 0x32b2;
            uStack_10 = 0x19fc;
            FUN_32b2_6eb1();
            if ((*(int *)(unaff_BP + -0x12) == *(int *)(unaff_BP + -0xe)) &&
               (*(int *)(unaff_BP + -0x10) == *(int *)(unaff_BP + -0xc))) {
              uVar8 = 0;
            }
            else {
              uVar8 = 1;
            }
            return uVar8;
          }
          if (*(char *)0xb1ea == '\x03') {
            iStack_8 = 0xf97d;
            FUN_21f2_3454();
            iStack_8 = -0x674;
            FUN_21f2_2d26();
          }
          func_0x0000c3ca();
          if (*(int *)0xbc2 == 0) {
            if (*(char *)0xb1ea == '\x03') {
              if (*(int *)0xc22 == 0) {
                iStack_8 = 0x12;
                iStack_a = unaff_BP + -0x52;
                uStack_c = 0x885;
                uStack_e = 0xf9c4;
                FUN_1000_02b5();
              }
              *(undefined2 *)0xc22 = 1;
              iStack_8 = *(int *)0x9454;
              iStack_a = *(undefined2 *)0x945a;
              uStack_c = *(undefined2 *)0x9458;
              uStack_e = *(undefined2 *)0x9456;
              uStack_10 = *(undefined2 *)0x9454;
              uStack_12 = 0;
              iStack_14 = unaff_BP + -0x52;
              uStack_16 = 0;
              uStack_18 = 0;
              uStack_1a = 2;
              pcVar5 = (code *)swi(0x3f);
              (*pcVar5)();
            }
            else {
              if (*(byte *)0xb1ea < 2) {
                if (*(int *)0xce6 == 0) {
                  iStack_8 = *(int *)0x9454;
                  iStack_a = *(undefined2 *)0x945a;
                  uStack_c = *(undefined2 *)0x9458;
                  uStack_e = *(undefined2 *)0x9456;
                  uStack_10 = *(undefined2 *)0x9454;
                  uStack_12 = 0;
                  iStack_14 = unaff_BP + -0x52;
                  uStack_16 = 0;
                  uStack_18 = 0;
                  uStack_1a = 0;
                  pcVar5 = (code *)swi(0x3f);
                  (*pcVar5)();
                }
                else {
                  iStack_8 = *(int *)0x9454;
                  iStack_a = *(undefined2 *)0x945a;
                  uStack_c = *(undefined2 *)0x9458;
                  uStack_e = *(undefined2 *)0x9456;
                  uStack_10 = *(undefined2 *)0x9454;
                  uStack_12 = 0;
                  iStack_14 = unaff_BP + -0x52;
                  uStack_16 = 0;
                  uStack_18 = 1;
                  uStack_1a = 0;
                  pcVar5 = (code *)swi(0x3f);
                  iVar7 = (*pcVar5)();
                  if (iVar7 == -1) {
                    uVar8 = FUN_2bb4_66c9();
                    return uVar8;
                  }
                }
              }
              if (*(char *)0xb1ea == '\x02') {
                iStack_8 = *(int *)0x9454;
                iStack_a = *(undefined2 *)0x945a;
                uStack_c = *(undefined2 *)0x9458;
                uStack_e = *(undefined2 *)0x9456;
                uStack_10 = *(undefined2 *)0x9454;
                uStack_12 = 0;
                iStack_14 = unaff_BP + -0x52;
                uStack_16 = 0;
                uStack_18 = 1;
                uStack_1a = 1;
                pcVar5 = (code *)swi(0x3f);
                iVar7 = (*pcVar5)();
                if (iVar7 == -1) {
                  uVar8 = FUN_2bb4_66c9();
                  return uVar8;
                }
              }
            }
          }
          if (*(int *)0x158 == 0) {
            uVar8 = FUN_3ab8_5218();
            return uVar8;
          }
          if (*(char *)0x118 != '\0') {
            uVar8 = FUN_2bb4_66c9();
            return uVar8;
          }
          if ((((*(char *)0x124 == '\0') || (*(int *)0x158 == 10000)) || (*(int *)0xbc2 != 0)) ||
             (*(char *)0xb1ea != '\0')) {
            uVar8 = FUN_2bb4_66c9();
            return uVar8;
          }
          if ((((*(int *)0xa62 != 1) || (*(int *)0xa64 != 1)) &&
              ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) &&
             ((*(byte *)0xb782 < 4 || (*(int *)0xa66 != *(int *)0xa62)))) {
            if (*(byte *)0xb782 < 4) {
              uVar8 = FUN_2bb4_66c9();
              return uVar8;
            }
            if (*(int *)0xa62 != 1) {
LAB_3ab8_5003:
              uVar8 = FUN_2bb4_66c9();
              return uVar8;
            }
          }
          FUN_1885_2ec3();
          *(undefined2 *)0x158 = 0;
          *(undefined1 *)0xb1ea = 3;
        } while( true );
      }
      if (*(char *)0xb1ea == '\0') {
        *(undefined1 *)0x1062 = 1;
      }
      iStack_8 = *(int *)0x9454;
      iStack_a = *(undefined2 *)0x945a;
      uStack_c = *(undefined2 *)0x9458;
      uStack_e = *(undefined2 *)0x9456;
      uStack_10 = *(undefined2 *)0x9454;
      uStack_12 = 0;
      iStack_14 = unaff_BP + -0x52;
      uStack_16 = 0;
      uStack_18 = 0xd8f1;
      uStack_1a = (uint)(*(char *)0xb1ea == '\x02');
      pcVar5 = (code *)swi(0x3f);
      iVar7 = (*pcVar5)();
      if (iVar7 == -1) goto LAB_3ab8_4d74;
      if (*(int *)0x158 != 0) {
        func_0x00008095();
      }
    }
    if (*(int *)(unaff_BP + -0x1fe) < 1) {
      uVar8 = FUN_3ab8_5188();
      return uVar8;
    }
    if (7 < *(int *)(unaff_BP + -0x1fe)) {
      uVar8 = FUN_3ab8_5188();
      return uVar8;
    }
    if ((*(int *)(unaff_BP + -0x1fe) != 7) &&
       ((bVar11 = *(byte *)0xb1ea < 3, *(byte *)0xb1ea != 3 ||
        (bVar11 = *(uint *)(unaff_BP + -0x1fe) < 4, *(uint *)(unaff_BP + -0x1fe) != 4)))) {
      if (bVar11) goto code_r0x00030201;
      while( true ) {
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        iStack_8 = 0x32b2;
        iStack_a = 0x30c;
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x314;
        FUN_32b2_6d14();
        uStack_10 = 0x32b2;
        uStack_12 = 0x31e;
        FUN_32b2_6eb1();
        uStack_10 = 0x32b2;
        uStack_12 = 0x326;
        FUN_32b2_6cc6();
        uStack_10 = 0x32b2;
        uStack_12 = 0x32b;
        FUN_32b2_7258();
        uStack_18 = 0x32b2;
        uStack_1a = 0x335;
        FUN_32b2_6eb1();
        uStack_18 = 0x32b2;
        uStack_1a = 0x33d;
        FUN_32b2_6cc6();
        uStack_18 = 0x32b2;
        uStack_1a = 0x342;
        FUN_32b2_7258();
        uStack_20 = 0x32b2;
        FUN_32b2_6eb1();
        uStack_20 = 1;
        uStack_24 = 0x354;
        FUN_3ab8_5089();
        uVar10 = (undefined1 *)0xffc9 < &uStack_32;
        uVar12 = &stack0x0000 == (undefined1 *)0xfffc;
        param_1 = 0x32b2;
        FUN_32b2_6cc6();
        param_1 = 0x32b2;
        FUN_32b2_701d();
        param_1 = 0x32b2;
        FUN_32b2_7258();
        param_1 = 0x32b2;
        FUN_32b2_6e99();
        param_1 = 0x32b2;
        FUN_32b2_6ef9();
        param_1 = 0x32b2;
        FUN_32b2_6cc6();
        param_1 = 0x32b2;
        FUN_32b2_701d();
        param_1 = 0x32b2;
        FUN_32b2_7258();
        param_1 = 0x32b2;
        FUN_32b2_6e99();
        param_1 = 0x32b2;
        FUN_32b2_6ef9();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = 0x32b2;
        FUN_32b2_6fc7();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = 0x32b2;
        FUN_32b2_6fc7();
        param_1 = 0x32b2;
        FUN_32b2_710c();
        param_1 = 0x32b2;
        FUN_32b2_7191();
        if (!(bool)uVar10 && !(bool)uVar12) {
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_7191();
          if (!(bool)uVar12) {
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_7124();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_704d();
            param_1 = 0x32b2;
            FUN_32b2_7035();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_718c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_70dc();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_718c();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6fd6();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7182();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7154();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = unaff_BP + -0x8a;
            FUN_32b2_6cc6();
            FUN_32b2_7258();
            iStack_a = 0x32b2;
            uStack_c = 0x5ea;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x5f2;
            FUN_32b2_6cc6();
            iStack_a = 0x32b2;
            uStack_c = 0x5f7;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            iStack_14 = 0x601;
            FUN_32b2_6eb1();
            uStack_12 = *(undefined2 *)(unaff_BP + -100);
            iStack_14 = *(undefined2 *)(unaff_BP + -0x66);
            uStack_16 = *(undefined2 *)(unaff_BP + -0x68);
            uStack_18 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x48);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_24 = 0x622;
            FUN_32b2_6d14();
            uStack_2a = 0x32b2;
            uStack_2c = 0x62c;
            FUN_32b2_6eb1();
            uStack_2a = 0x32b2;
            uStack_2c = 0x635;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x63f;
            FUN_32b2_6eb1();
            uStack_32 = 0;
            uStack_34 = 0x32b2;
            FUN_3ab8_5089();
            uVar8 = *(undefined2 *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
            *(undefined2 *)(unaff_BP + -0x84) = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x88);
            *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
            *(undefined2 *)(unaff_BP + -0x9c) = uVar8;
            param_1 = unaff_BP + -0x9e;
            puVar9 = &uStack_20;
            puVar6 = (undefined2 *)(unaff_BP + 0x1c);
            for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar3 = *puVar2;
            }
            uStack_24 = 0x684;
            iVar7 = FUN_3ab8_522f();
            uVar10 = 0;
            uVar12 = iVar7 == 0;
            if (!(bool)uVar12) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6cc6();
              param_1 = 0x32b2;
              FUN_32b2_701d();
              param_1 = 0x32b2;
              FUN_32b2_6fc7();
              param_1 = 0x32b2;
              FUN_32b2_7258();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if ((bool)uVar10 || (bool)uVar12) {
                param_1 = 0x32b2;
                FUN_32b2_6d14();
                param_1 = 0x32b2;
                FUN_32b2_6cc6();
                param_1 = 0x32b2;
                FUN_32b2_701d();
                param_1 = 0x32b2;
                FUN_32b2_6fc7();
                param_1 = 0x32b2;
                FUN_32b2_7258();
                param_1 = 0x32b2;
                FUN_32b2_7191();
                if ((bool)uVar10 || (bool)uVar12) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
              }
            }
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7154();
            param_1 = 0x32b2;
            FUN_32b2_7191();
            if (!(bool)uVar10) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6fc7();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if (!(bool)uVar10) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
              param_1 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_8 = 0x774;
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
              uStack_c = 0x32b2;
              uStack_e = 0x7e8;
              FUN_32b2_6eb1();
              uStack_c = 0x32b2;
              uStack_e = 0x7f0;
              FUN_32b2_6cc6();
              uStack_c = 0x32b2;
              uStack_e = 0x7f5;
              FUN_32b2_7258();
              iStack_14 = 0x32b2;
              uStack_16 = 0x7ff;
              FUN_32b2_6eb1();
              iStack_14 = *(undefined2 *)(unaff_BP + -100);
              uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
              uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
              uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
              uStack_24 = 0x32b2;
              uStack_26 = 0x820;
              FUN_32b2_6d14();
              uStack_2c = 0x32b2;
              uStack_2e = 0x82a;
              FUN_32b2_6eb1();
              uStack_2c = 0x32b2;
              uStack_2e = 0x833;
              FUN_32b2_6d14();
              uStack_34 = 0x32b2;
              FUN_32b2_6eb1();
              uStack_34 = 0;
              FUN_3ab8_5089(0x32b2);
              uVar10 = (undefined1 *)0xffc9 < &uStack_34;
              uVar12 = &stack0x0000 == (undefined1 *)0xfffe;
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              if ((bool)uVar12) {
                uVar8 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar8;
              }
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              if ((bool)uVar12) {
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
              uVar12 = *piVar1 == 0;
              FUN_32b2_6d14();
              FUN_32b2_6d14();
              FUN_32b2_7191();
              if (!(bool)uVar10 && !(bool)uVar12) {
                iStack_8 = 0x32b2;
                iStack_a = 0x8ff;
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
                iStack_8 = 0x969;
                FUN_32b2_6cc6();
                iStack_8 = 0x96e;
                FUN_32b2_7258();
                uStack_e = 0x32b2;
                uStack_10 = 0x978;
                FUN_32b2_6eb1();
                uStack_e = 0x32b2;
                uStack_10 = 0x980;
                FUN_32b2_6cc6();
                uStack_e = 0x32b2;
                uStack_10 = 0x985;
                FUN_32b2_7258();
                uStack_16 = 0x32b2;
                uStack_18 = 0x98f;
                FUN_32b2_6eb1();
                uStack_16 = *(undefined2 *)(unaff_BP + -100);
                uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
                uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
                uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
                uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
                uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
                uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
                uStack_26 = 0x32b2;
                uStack_28 = 0x9b0;
                FUN_32b2_6d14();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9ba;
                FUN_32b2_6eb1();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9c3;
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_3ab8_5089(0x32b2,0);
                uVar10 = &stack0x0000 == (undefined1 *)0x0;
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
                  uVar8 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar8;
                }
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
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
              return *(undefined2 *)(unaff_BP + -0x36);
            }
          }
          return 0;
        }
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = unaff_BP + -0xbc;
        FUN_32b2_7154();
        param_1 = 0x32b2;
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
        param_1 = *(undefined2 *)(unaff_BP + -0xb6);
        iStack_8 = 0x119;
        FUN_32b2_75fe();
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x150;
        FUN_32b2_75ec();
        uVar10 = &stack0x0000 == (undefined1 *)0x0;
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar10) {
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar10) {
            return 0;
          }
        }
        iStack_8 = *(int *)(unaff_BP + -0x7e);
        iStack_a = *(undefined2 *)(unaff_BP + -0x80);
        uStack_c = *(undefined2 *)(unaff_BP + -0x82);
        uStack_e = *(undefined2 *)(unaff_BP + -0x58);
        uStack_10 = *(undefined2 *)(unaff_BP + -0x5a);
        uStack_12 = *(undefined2 *)(unaff_BP + -0x5c);
        iStack_14 = *(int *)(unaff_BP + -0x5e);
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d0;
        FUN_32b2_6cc6();
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d5;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1df;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1e7;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1ec;
        FUN_32b2_7258();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1f6;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1fa;
        iVar7 = FUN_3ab8_4fbd();
        if (iVar7 == 0) break;
code_r0x00030201:
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6e99();
        FUN_32b2_6ef9();
        iStack_8 = 0x231;
        FUN_32b2_6cc6();
        iStack_8 = 0x236;
        FUN_32b2_7258();
        uStack_e = 0x32b2;
        uStack_10 = 0x240;
        FUN_32b2_6eb1();
        uStack_e = 0x32b2;
        uStack_10 = 0x248;
        FUN_32b2_6cc6();
        uStack_e = 0x32b2;
        uStack_10 = 0x24d;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 599;
        FUN_32b2_6eb1();
        uStack_16 = 0x32b2;
        uStack_18 = 0x25f;
        FUN_32b2_6d14();
        uStack_1e = 0x32b2;
        uStack_20 = 0x269;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x271;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x276;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x27e;
        FUN_32b2_6e99();
        uStack_26 = 0x32b2;
        uStack_28 = 0x288;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x290;
        FUN_32b2_6cc6();
        uStack_26 = 0x32b2;
        uStack_28 = 0x295;
        FUN_32b2_7258();
        uStack_2e = 0x32b2;
        uStack_30 = 0x29f;
        FUN_32b2_6eb1();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2a7;
        FUN_32b2_6cc6();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2ac;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_3ab8_5089(0x32b2,1);
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
      }
      return 0;
    }
    if ((*(char *)0xb1ea != '\0') && (*(char *)0xb1ea != '\x03')) {
      uVar8 = FUN_3ab8_533a();
      return uVar8;
    }
    iStack_8 = 0xfc75;
    FUN_21f2_3454();
    iStack_8 = 0xfc85;
    FUN_21f2_2d26();
    iStack_8 = 0xfc95;
    FUN_21f2_2d26();
    iStack_8 = 0xfca5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcb5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcc5;
    FUN_1def_07a4();
    iStack_8 = 0x1bb4;
    iStack_a = 0xfcd7;
    FUN_3ab8_014c();
    iStack_8 = unaff_BP + -0x1cc;
    iStack_a = 1;
    uStack_c = 0x1bb4;
    uStack_e = 0xfcf7;
    iVar7 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x236) = iVar7;
    if (*(int *)0x158 != 0) {
      uVar8 = FUN_2bb4_66c9();
      return uVar8;
    }
    if (((iVar7 != 1) && (*(int *)(unaff_BP + -0x146) != 1)) && (iVar7 != -1)) {
      uVar8 = FUN_3ab8_52e6();
      return uVar8;
    }
  } while( true );
}



/* 3ab8:522f  FUN_3ab8_522f  183 bytes, 2 callers */

/* WARNING: Instruction at (ram,0x000302f0) overlaps instruction at (ram,0x000302ef)
    */

undefined2 FUN_3ab8_522f(int param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 uVar8;
  int unaff_BP;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  uint uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  
  do {
    uVar8 = *(undefined2 *)0x943c;
    uVar4 = *(undefined2 *)0x943e;
    *(undefined2 *)(unaff_BP + -0x144) = uVar8;
    *(undefined2 *)(unaff_BP + -0x142) = uVar4;
    *(undefined2 *)(unaff_BP + -0x15c) = uVar8;
    *(undefined2 *)(unaff_BP + -0x15a) = uVar4;
    iStack_8 = 0xfdd4;
    FUN_21f2_3454();
    if (*(byte *)0xb1ea < 2) {
      iStack_8 = 0xfdeb;
      FUN_21f2_2d26();
    }
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0xfe09;
      FUN_21f2_2d26();
    }
    if (*(char *)0xb1ea == '\x01') {
      iStack_8 = 0xfe20;
      FUN_21f2_2d26();
    }
    iStack_8 = 0xfe30;
    FUN_1def_07a4();
    if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
      iStack_8 = 0x1bb4;
      iStack_a = 0xfe50;
      FUN_3ab8_014c();
    }
    if (*(char *)0xb1ea != '\x02') {
      uVar8 = FUN_3ab8_4fc8();
      return uVar8;
    }
    *(undefined2 *)0xc2c = 1;
    iStack_8 = unaff_BP + -0x1cc;
    *(undefined2 *)0xc20 = 1;
    iStack_a = 1;
    uStack_c = 0x1bb4;
    uStack_e = 0xfb6e;
    uVar8 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x1fe) = uVar8;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xc2c = 0;
    if (*(int *)0x158 != 0) goto LAB_3ab8_5003;
    func_0x0000c3ca();
    if ((*(int *)(unaff_BP + -0x1fe) == 0x14) && (*(char *)0xb1ea == '\x02')) {
      func_0x00008095();
      uVar8 = FUN_2bb4_66c9();
      return uVar8;
    }
    if (*(int *)(unaff_BP + -0x1fe) == -1) {
      *(undefined2 *)(unaff_BP + -0x146) = 0;
      if (*(char *)0xb1ea == '\x03') {
        func_0x00008095();
LAB_3ab8_4d74:
        do {
          iStack_8 = 0xf901;
          FUN_21f2_3454();
          if (*(char *)0xb1ea == '\0') {
            *(undefined1 *)0x1062 = 1;
          }
          if (*(char *)0xb1ea == '\x01') {
            iStack_8 = 0xf923;
            FUN_21f2_3454();
          }
          if (*(char *)0xb1ea == '\x02') {
            iStack_8 = 0xf939;
            FUN_21f2_3454();
          }
          iStack_8 = 0xf948;
          FUN_21f2_3454();
          iStack_8 = -0x6a9;
          FUN_21f2_2d26();
          if (*(char *)(unaff_BP + -0x134) != '\0') {
            *(undefined2 *)(unaff_BP + -0x1fe) = 1;
            FUN_32b2_7285();
            FUN_32b2_710c();
            FUN_32b2_6e99();
            iStack_a = 0x32b2;
            uStack_c = 0x17a0;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x17a5;
            puVar6 = (undefined2 *)FUN_32b2_75fe();
            *(undefined2 *)(unaff_BP + -0x48) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x46) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x44) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x42) = puVar6[3];
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x17c5;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x17ca;
            puVar6 = (undefined2 *)FUN_32b2_75ec();
            *(undefined2 *)(unaff_BP + -0x50) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x4e) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x4c) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0x4a) = puVar6[3];
            uVar8 = *(undefined2 *)(unaff_BP + -0x12);
            uVar4 = *(undefined2 *)(unaff_BP + -0x10);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_8 = 0x17f6;
            FUN_32b2_7285();
            iStack_8 = 0x17ff;
            FUN_32b2_710c();
            iStack_8 = 0x1807;
            FUN_32b2_6e99();
            uStack_e = 0x32b2;
            uStack_10 = 0x1811;
            FUN_32b2_6eb1();
            uStack_e = 0x32b2;
            uStack_10 = 0x1816;
            FUN_32b2_75fe();
            iStack_8 = 0x32b2;
            iStack_a = 0x1820;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x1828;
            FUN_32b2_704d();
            iStack_8 = 0x32b2;
            iStack_a = 0x1830;
            FUN_32b2_6eb1();
            iStack_8 = 0x32b2;
            iStack_a = 0x1838;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x1840;
            FUN_32b2_710c();
            iStack_8 = 0x32b2;
            iStack_a = 0x1848;
            FUN_32b2_6d14();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1852;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            uStack_12 = 0x1857;
            FUN_32b2_75ec();
            iStack_a = 0x32b2;
            uStack_c = 0x1861;
            FUN_32b2_6d14();
            uVar8 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_a = 0x32b2;
            uStack_c = 0x187a;
            FUN_32b2_7285();
            iStack_a = 0x32b2;
            uStack_c = 0x187f;
            FUN_32b2_717d();
            iStack_a = 0x32b2;
            uStack_c = 0x1887;
            FUN_32b2_704d();
            iStack_a = 0x32b2;
            uStack_c = 0x1890;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x1898;
            FUN_32b2_6e99();
            iStack_a = 0x32b2;
            uStack_c = 0x18a0;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18a5;
            FUN_32b2_7173();
            iStack_a = 0x32b2;
            uStack_c = 0x18ad;
            FUN_32b2_7095();
            iStack_a = 0x32b2;
            uStack_c = 0x18b5;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x18bd;
            FUN_32b2_6d14();
            iStack_a = 0x32b2;
            uStack_c = 0x18c5;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18cd;
            FUN_32b2_6d14();
            iStack_a = 0x32b2;
            uStack_c = 0x18d5;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x18da;
            FUN_32b2_718c();
            iStack_a = 0x32b2;
            uStack_c = 0x18e2;
            FUN_32b2_7095();
            iStack_a = 0x32b2;
            uStack_c = 0x18ea;
            FUN_32b2_6eb1();
            uVar8 = *(undefined2 *)(unaff_BP + -0xe);
            uVar4 = *(undefined2 *)(unaff_BP + -0xc);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = uVar4;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            iStack_a = 0x32b2;
            uStack_c = 0x1908;
            FUN_32b2_7285();
            iStack_a = 0x32b2;
            uStack_c = 0x1911;
            FUN_32b2_710c();
            iStack_a = 0x32b2;
            uStack_c = 0x1919;
            FUN_32b2_6e99();
            uStack_12 = 0x32b2;
            iStack_14 = 0x1923;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            iStack_14 = 0x1928;
            FUN_32b2_75fe();
            uStack_c = 0x32b2;
            uStack_e = 0x1932;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x193a;
            FUN_32b2_704d();
            uStack_c = 0x32b2;
            uStack_e = 0x1942;
            FUN_32b2_6eb1();
            uStack_c = 0x32b2;
            uStack_e = 0x194a;
            FUN_32b2_6d14();
            uStack_c = 0x32b2;
            uStack_e = 0x1952;
            FUN_32b2_710c();
            uStack_c = 0x32b2;
            uStack_e = 0x195a;
            FUN_32b2_6d14();
            iStack_14 = 0x32b2;
            uStack_16 = 0x1964;
            FUN_32b2_6eb1();
            iStack_14 = 0x32b2;
            uStack_16 = 0x1969;
            FUN_32b2_75ec();
            uStack_e = 0x32b2;
            uStack_10 = 0x1973;
            FUN_32b2_6d14();
            uVar8 = *(undefined2 *)(unaff_BP + -0x14);
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x58) = uVar8;
            uStack_e = 0x32b2;
            uStack_10 = 0x198c;
            FUN_32b2_7285();
            uStack_e = 0x32b2;
            uStack_10 = 0x1991;
            FUN_32b2_717d();
            uStack_e = 0x32b2;
            uStack_10 = 0x1999;
            FUN_32b2_704d();
            uStack_e = 0x32b2;
            uStack_10 = 0x19a2;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19aa;
            FUN_32b2_6e99();
            uStack_e = 0x32b2;
            uStack_10 = 0x19b2;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19b7;
            FUN_32b2_7173();
            uStack_e = 0x32b2;
            uStack_10 = 0x19bf;
            FUN_32b2_7095();
            uStack_e = 0x32b2;
            uStack_10 = 0x19c7;
            FUN_32b2_6eb1();
            uStack_e = 0x32b2;
            uStack_10 = 0x19cf;
            FUN_32b2_6d14();
            uStack_e = 0x32b2;
            uStack_10 = 0x19d7;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19df;
            FUN_32b2_6d14();
            uStack_e = 0x32b2;
            uStack_10 = 0x19e7;
            FUN_32b2_710c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19ec;
            FUN_32b2_718c();
            uStack_e = 0x32b2;
            uStack_10 = 0x19f4;
            FUN_32b2_7095();
            uStack_e = 0x32b2;
            uStack_10 = 0x19fc;
            FUN_32b2_6eb1();
            if ((*(int *)(unaff_BP + -0x12) == *(int *)(unaff_BP + -0xe)) &&
               (*(int *)(unaff_BP + -0x10) == *(int *)(unaff_BP + -0xc))) {
              uVar8 = 0;
            }
            else {
              uVar8 = 1;
            }
            return uVar8;
          }
          if (*(char *)0xb1ea == '\x03') {
            iStack_8 = 0xf97d;
            FUN_21f2_3454();
            iStack_8 = -0x674;
            FUN_21f2_2d26();
          }
          func_0x0000c3ca();
          if (*(int *)0xbc2 == 0) {
            if (*(char *)0xb1ea == '\x03') {
              if (*(int *)0xc22 == 0) {
                iStack_8 = 0x12;
                iStack_a = unaff_BP + -0x52;
                uStack_c = 0x885;
                uStack_e = 0xf9c4;
                FUN_1000_02b5();
              }
              *(undefined2 *)0xc22 = 1;
              iStack_8 = *(int *)0x9454;
              iStack_a = *(undefined2 *)0x945a;
              uStack_c = *(undefined2 *)0x9458;
              uStack_e = *(undefined2 *)0x9456;
              uStack_10 = *(undefined2 *)0x9454;
              uStack_12 = 0;
              iStack_14 = unaff_BP + -0x52;
              uStack_16 = 0;
              uStack_18 = 0;
              uStack_1a = 2;
              pcVar5 = (code *)swi(0x3f);
              (*pcVar5)();
            }
            else {
              if (*(byte *)0xb1ea < 2) {
                if (*(int *)0xce6 == 0) {
                  iStack_8 = *(int *)0x9454;
                  iStack_a = *(undefined2 *)0x945a;
                  uStack_c = *(undefined2 *)0x9458;
                  uStack_e = *(undefined2 *)0x9456;
                  uStack_10 = *(undefined2 *)0x9454;
                  uStack_12 = 0;
                  iStack_14 = unaff_BP + -0x52;
                  uStack_16 = 0;
                  uStack_18 = 0;
                  uStack_1a = 0;
                  pcVar5 = (code *)swi(0x3f);
                  (*pcVar5)();
                }
                else {
                  iStack_8 = *(int *)0x9454;
                  iStack_a = *(undefined2 *)0x945a;
                  uStack_c = *(undefined2 *)0x9458;
                  uStack_e = *(undefined2 *)0x9456;
                  uStack_10 = *(undefined2 *)0x9454;
                  uStack_12 = 0;
                  iStack_14 = unaff_BP + -0x52;
                  uStack_16 = 0;
                  uStack_18 = 1;
                  uStack_1a = 0;
                  pcVar5 = (code *)swi(0x3f);
                  iVar7 = (*pcVar5)();
                  if (iVar7 == -1) {
                    uVar8 = FUN_2bb4_66c9();
                    return uVar8;
                  }
                }
              }
              if (*(char *)0xb1ea == '\x02') {
                iStack_8 = *(int *)0x9454;
                iStack_a = *(undefined2 *)0x945a;
                uStack_c = *(undefined2 *)0x9458;
                uStack_e = *(undefined2 *)0x9456;
                uStack_10 = *(undefined2 *)0x9454;
                uStack_12 = 0;
                iStack_14 = unaff_BP + -0x52;
                uStack_16 = 0;
                uStack_18 = 1;
                uStack_1a = 1;
                pcVar5 = (code *)swi(0x3f);
                iVar7 = (*pcVar5)();
                if (iVar7 == -1) {
                  uVar8 = FUN_2bb4_66c9();
                  return uVar8;
                }
              }
            }
          }
          if (*(int *)0x158 == 0) {
            uVar8 = FUN_3ab8_5218();
            return uVar8;
          }
          if (*(char *)0x118 != '\0') {
            uVar8 = FUN_2bb4_66c9();
            return uVar8;
          }
          if ((((*(char *)0x124 == '\0') || (*(int *)0x158 == 10000)) || (*(int *)0xbc2 != 0)) ||
             (*(char *)0xb1ea != '\0')) {
            uVar8 = FUN_2bb4_66c9();
            return uVar8;
          }
          if ((((*(int *)0xa62 != 1) || (*(int *)0xa64 != 1)) &&
              ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) &&
             ((*(byte *)0xb782 < 4 || (*(int *)0xa66 != *(int *)0xa62)))) {
            if (*(byte *)0xb782 < 4) {
              uVar8 = FUN_2bb4_66c9();
              return uVar8;
            }
            if (*(int *)0xa62 != 1) {
LAB_3ab8_5003:
              uVar8 = FUN_2bb4_66c9();
              return uVar8;
            }
          }
          FUN_1885_2ec3();
          *(undefined2 *)0x158 = 0;
          *(undefined1 *)0xb1ea = 3;
        } while( true );
      }
      if (*(char *)0xb1ea == '\0') {
        *(undefined1 *)0x1062 = 1;
      }
      iStack_8 = *(int *)0x9454;
      iStack_a = *(undefined2 *)0x945a;
      uStack_c = *(undefined2 *)0x9458;
      uStack_e = *(undefined2 *)0x9456;
      uStack_10 = *(undefined2 *)0x9454;
      uStack_12 = 0;
      iStack_14 = unaff_BP + -0x52;
      uStack_16 = 0;
      uStack_18 = 0xd8f1;
      uStack_1a = (uint)(*(char *)0xb1ea == '\x02');
      pcVar5 = (code *)swi(0x3f);
      iVar7 = (*pcVar5)();
      if (iVar7 == -1) goto LAB_3ab8_4d74;
      if (*(int *)0x158 != 0) {
        func_0x00008095();
      }
    }
    if (*(int *)(unaff_BP + -0x1fe) < 1) {
      uVar8 = FUN_3ab8_5188();
      return uVar8;
    }
    if (7 < *(int *)(unaff_BP + -0x1fe)) {
      uVar8 = FUN_3ab8_5188();
      return uVar8;
    }
    if ((*(int *)(unaff_BP + -0x1fe) != 7) &&
       ((bVar11 = *(byte *)0xb1ea < 3, *(byte *)0xb1ea != 3 ||
        (bVar11 = *(uint *)(unaff_BP + -0x1fe) < 4, *(uint *)(unaff_BP + -0x1fe) != 4)))) {
      if (bVar11) goto code_r0x00030201;
      while( true ) {
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        iStack_8 = 0x32b2;
        iStack_a = 0x30c;
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x314;
        FUN_32b2_6d14();
        uStack_10 = 0x32b2;
        uStack_12 = 0x31e;
        FUN_32b2_6eb1();
        uStack_10 = 0x32b2;
        uStack_12 = 0x326;
        FUN_32b2_6cc6();
        uStack_10 = 0x32b2;
        uStack_12 = 0x32b;
        FUN_32b2_7258();
        uStack_18 = 0x32b2;
        uStack_1a = 0x335;
        FUN_32b2_6eb1();
        uStack_18 = 0x32b2;
        uStack_1a = 0x33d;
        FUN_32b2_6cc6();
        uStack_18 = 0x32b2;
        uStack_1a = 0x342;
        FUN_32b2_7258();
        uStack_20 = 0x32b2;
        FUN_32b2_6eb1();
        uStack_20 = 1;
        uStack_24 = 0x354;
        FUN_3ab8_5089();
        uVar10 = (undefined1 *)0xffc9 < &uStack_32;
        uVar12 = &stack0x0000 == (undefined1 *)0xfffc;
        param_1 = 0x32b2;
        FUN_32b2_6cc6();
        param_1 = 0x32b2;
        FUN_32b2_701d();
        param_1 = 0x32b2;
        FUN_32b2_7258();
        param_1 = 0x32b2;
        FUN_32b2_6e99();
        param_1 = 0x32b2;
        FUN_32b2_6ef9();
        param_1 = 0x32b2;
        FUN_32b2_6cc6();
        param_1 = 0x32b2;
        FUN_32b2_701d();
        param_1 = 0x32b2;
        FUN_32b2_7258();
        param_1 = 0x32b2;
        FUN_32b2_6e99();
        param_1 = 0x32b2;
        FUN_32b2_6ef9();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = 0x32b2;
        FUN_32b2_6fc7();
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = 0x32b2;
        FUN_32b2_6fc7();
        param_1 = 0x32b2;
        FUN_32b2_710c();
        param_1 = 0x32b2;
        FUN_32b2_7191();
        if (!(bool)uVar10 && !(bool)uVar12) {
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_6d14();
          param_1 = 0x32b2;
          FUN_32b2_7191();
          if (!(bool)uVar12) {
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_7124();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_704d();
            param_1 = 0x32b2;
            FUN_32b2_7035();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_718c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_70dc();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_718c();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6fd6();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7182();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7154();
            param_1 = 0x32b2;
            FUN_32b2_6e99();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6eb1();
            param_1 = unaff_BP + -0x8a;
            FUN_32b2_6cc6();
            FUN_32b2_7258();
            iStack_a = 0x32b2;
            uStack_c = 0x5ea;
            FUN_32b2_6eb1();
            iStack_a = 0x32b2;
            uStack_c = 0x5f2;
            FUN_32b2_6cc6();
            iStack_a = 0x32b2;
            uStack_c = 0x5f7;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            iStack_14 = 0x601;
            FUN_32b2_6eb1();
            uStack_12 = *(undefined2 *)(unaff_BP + -100);
            iStack_14 = *(undefined2 *)(unaff_BP + -0x66);
            uStack_16 = *(undefined2 *)(unaff_BP + -0x68);
            uStack_18 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x48);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_24 = 0x622;
            FUN_32b2_6d14();
            uStack_2a = 0x32b2;
            uStack_2c = 0x62c;
            FUN_32b2_6eb1();
            uStack_2a = 0x32b2;
            uStack_2c = 0x635;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x63f;
            FUN_32b2_6eb1();
            uStack_32 = 0;
            uStack_34 = 0x32b2;
            FUN_3ab8_5089();
            uVar8 = *(undefined2 *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
            *(undefined2 *)(unaff_BP + -0x84) = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x88);
            *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
            *(undefined2 *)(unaff_BP + -0x9c) = uVar8;
            param_1 = unaff_BP + -0x9e;
            puVar9 = &uStack_20;
            puVar6 = (undefined2 *)(unaff_BP + 0x1c);
            for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar3 = *puVar2;
            }
            uStack_24 = 0x684;
            iVar7 = FUN_3ab8_522f();
            uVar10 = 0;
            uVar12 = iVar7 == 0;
            if (!(bool)uVar12) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6cc6();
              param_1 = 0x32b2;
              FUN_32b2_701d();
              param_1 = 0x32b2;
              FUN_32b2_6fc7();
              param_1 = 0x32b2;
              FUN_32b2_7258();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if ((bool)uVar10 || (bool)uVar12) {
                param_1 = 0x32b2;
                FUN_32b2_6d14();
                param_1 = 0x32b2;
                FUN_32b2_6cc6();
                param_1 = 0x32b2;
                FUN_32b2_701d();
                param_1 = 0x32b2;
                FUN_32b2_6fc7();
                param_1 = 0x32b2;
                FUN_32b2_7258();
                param_1 = 0x32b2;
                FUN_32b2_7191();
                if ((bool)uVar10 || (bool)uVar12) {
                  *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                  *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                  *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                  *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                }
              }
            }
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_6d14();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_710c();
            param_1 = 0x32b2;
            FUN_32b2_7154();
            param_1 = 0x32b2;
            FUN_32b2_7191();
            if (!(bool)uVar10) {
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_6fc7();
              param_1 = 0x32b2;
              FUN_32b2_6d14();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_710c();
              param_1 = 0x32b2;
              FUN_32b2_7191();
              if (!(bool)uVar10) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
              param_1 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_8 = 0x774;
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
              uStack_c = 0x32b2;
              uStack_e = 0x7e8;
              FUN_32b2_6eb1();
              uStack_c = 0x32b2;
              uStack_e = 0x7f0;
              FUN_32b2_6cc6();
              uStack_c = 0x32b2;
              uStack_e = 0x7f5;
              FUN_32b2_7258();
              iStack_14 = 0x32b2;
              uStack_16 = 0x7ff;
              FUN_32b2_6eb1();
              iStack_14 = *(undefined2 *)(unaff_BP + -100);
              uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
              uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
              uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
              uStack_24 = 0x32b2;
              uStack_26 = 0x820;
              FUN_32b2_6d14();
              uStack_2c = 0x32b2;
              uStack_2e = 0x82a;
              FUN_32b2_6eb1();
              uStack_2c = 0x32b2;
              uStack_2e = 0x833;
              FUN_32b2_6d14();
              uStack_34 = 0x32b2;
              FUN_32b2_6eb1();
              uStack_34 = 0;
              FUN_3ab8_5089(0x32b2);
              uVar10 = (undefined1 *)0xffc9 < &uStack_34;
              uVar12 = &stack0x0000 == (undefined1 *)0xfffe;
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              if ((bool)uVar12) {
                uVar8 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar8;
              }
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              if ((bool)uVar12) {
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
              uVar12 = *piVar1 == 0;
              FUN_32b2_6d14();
              FUN_32b2_6d14();
              FUN_32b2_7191();
              if (!(bool)uVar10 && !(bool)uVar12) {
                iStack_8 = 0x32b2;
                iStack_a = 0x8ff;
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
                iStack_8 = 0x969;
                FUN_32b2_6cc6();
                iStack_8 = 0x96e;
                FUN_32b2_7258();
                uStack_e = 0x32b2;
                uStack_10 = 0x978;
                FUN_32b2_6eb1();
                uStack_e = 0x32b2;
                uStack_10 = 0x980;
                FUN_32b2_6cc6();
                uStack_e = 0x32b2;
                uStack_10 = 0x985;
                FUN_32b2_7258();
                uStack_16 = 0x32b2;
                uStack_18 = 0x98f;
                FUN_32b2_6eb1();
                uStack_16 = *(undefined2 *)(unaff_BP + -100);
                uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
                uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
                uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
                uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
                uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
                uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
                uStack_26 = 0x32b2;
                uStack_28 = 0x9b0;
                FUN_32b2_6d14();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9ba;
                FUN_32b2_6eb1();
                uStack_2e = 0x32b2;
                uStack_30 = 0x9c3;
                FUN_32b2_6d14();
                FUN_32b2_6eb1();
                FUN_3ab8_5089(0x32b2,0);
                uVar10 = &stack0x0000 == (undefined1 *)0x0;
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
                  uVar8 = *(undefined2 *)(unaff_BP + 8);
                  *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                  *(undefined2 *)(unaff_BP + -0x60) = uVar8;
                }
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar10) {
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
              return *(undefined2 *)(unaff_BP + -0x36);
            }
          }
          return 0;
        }
        param_1 = 0x32b2;
        FUN_32b2_6d14();
        param_1 = unaff_BP + -0xbc;
        FUN_32b2_7154();
        param_1 = 0x32b2;
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
        param_1 = *(undefined2 *)(unaff_BP + -0xb6);
        iStack_8 = 0x119;
        FUN_32b2_75fe();
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        iStack_8 = 0x32b2;
        iStack_a = 0x150;
        FUN_32b2_75ec();
        uVar10 = &stack0x0000 == (undefined1 *)0x0;
        FUN_32b2_6d14();
        FUN_32b2_704d();
        FUN_32b2_7095();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar10) {
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar10) {
            return 0;
          }
        }
        iStack_8 = *(int *)(unaff_BP + -0x7e);
        iStack_a = *(undefined2 *)(unaff_BP + -0x80);
        uStack_c = *(undefined2 *)(unaff_BP + -0x82);
        uStack_e = *(undefined2 *)(unaff_BP + -0x58);
        uStack_10 = *(undefined2 *)(unaff_BP + -0x5a);
        uStack_12 = *(undefined2 *)(unaff_BP + -0x5c);
        iStack_14 = *(int *)(unaff_BP + -0x5e);
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d0;
        FUN_32b2_6cc6();
        uStack_16 = 0x32b2;
        uStack_18 = 0x1d5;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1df;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1e7;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x1ec;
        FUN_32b2_7258();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1f6;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x1fa;
        iVar7 = FUN_3ab8_4fbd();
        if (iVar7 == 0) break;
code_r0x00030201:
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6e99();
        FUN_32b2_6ef9();
        iStack_8 = 0x231;
        FUN_32b2_6cc6();
        iStack_8 = 0x236;
        FUN_32b2_7258();
        uStack_e = 0x32b2;
        uStack_10 = 0x240;
        FUN_32b2_6eb1();
        uStack_e = 0x32b2;
        uStack_10 = 0x248;
        FUN_32b2_6cc6();
        uStack_e = 0x32b2;
        uStack_10 = 0x24d;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 599;
        FUN_32b2_6eb1();
        uStack_16 = 0x32b2;
        uStack_18 = 0x25f;
        FUN_32b2_6d14();
        uStack_1e = 0x32b2;
        uStack_20 = 0x269;
        FUN_32b2_6eb1();
        uStack_1e = 0x32b2;
        uStack_20 = 0x271;
        FUN_32b2_6cc6();
        uStack_1e = 0x32b2;
        uStack_20 = 0x276;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x27e;
        FUN_32b2_6e99();
        uStack_26 = 0x32b2;
        uStack_28 = 0x288;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        uStack_28 = 0x290;
        FUN_32b2_6cc6();
        uStack_26 = 0x32b2;
        uStack_28 = 0x295;
        FUN_32b2_7258();
        uStack_2e = 0x32b2;
        uStack_30 = 0x29f;
        FUN_32b2_6eb1();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2a7;
        FUN_32b2_6cc6();
        uStack_2e = 0x32b2;
        uStack_30 = 0x2ac;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_3ab8_5089(0x32b2,1);
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
      }
      return 0;
    }
    if ((*(char *)0xb1ea != '\0') && (*(char *)0xb1ea != '\x03')) {
      uVar8 = FUN_3ab8_533a();
      return uVar8;
    }
    iStack_8 = 0xfc75;
    FUN_21f2_3454();
    iStack_8 = 0xfc85;
    FUN_21f2_2d26();
    iStack_8 = 0xfc95;
    FUN_21f2_2d26();
    iStack_8 = 0xfca5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcb5;
    FUN_21f2_2d26();
    iStack_8 = 0xfcc5;
    FUN_1def_07a4();
    iStack_8 = 0x1bb4;
    iStack_a = 0xfcd7;
    FUN_3ab8_014c();
    iStack_8 = unaff_BP + -0x1cc;
    iStack_a = 1;
    uStack_c = 0x1bb4;
    uStack_e = 0xfcf7;
    iVar7 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x236) = iVar7;
    if (*(int *)0x158 != 0) {
      uVar8 = FUN_2bb4_66c9();
      return uVar8;
    }
    if (((iVar7 != 1) && (*(int *)(unaff_BP + -0x146) != 1)) && (iVar7 != -1)) {
      uVar8 = FUN_3ab8_52e6();
      return uVar8;
    }
    uVar8 = *(undefined2 *)0x9480;
    uVar4 = *(undefined2 *)0x9482;
    *(undefined2 *)(unaff_BP + -500) = uVar8;
    *(undefined2 *)(unaff_BP + -0x1f2) = uVar4;
    *(undefined2 *)(unaff_BP + -0x204) = uVar8;
    *(undefined2 *)(unaff_BP + -0x202) = uVar4;
  } while( true );
}



/* 3ab8:52e6  FUN_3ab8_52e6  84 bytes, 0 callers */

void FUN_3ab8_52e6(void)

{
  int in_AX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (in_AX == 2) {
    if (*(char *)0x22b0 == '\x01') {
      *(undefined1 *)0x22b0 = 0;
    }
    else {
      *(undefined1 *)0x22b0 = 1;
    }
  }
  if (in_AX == 3) {
    if (*(char *)0x22b0 == '\x02') {
      *(undefined1 *)0x22b0 = 0;
    }
    else {
      *(undefined1 *)0x22b0 = 2;
    }
  }
  if (in_AX == 4) {
    *(char *)0x22b1 = '\x01' - *(char *)0x22b1;
  }
  if (*(int *)(unaff_BP + -0x236) != 5) {
    FUN_3ab8_50d6();
    return;
  }
  *(char *)0x22b2 = '\x01' - *(char *)0x22b2;
  FUN_3ab8_50d6();
  return;
}



/* 3ab8:533a  FUN_3ab8_533a  8498 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_533a(void)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  code *pcVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int unaff_BP;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int *piVar16;
  undefined2 uVar17;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar18;
  bool bVar19;
  undefined4 uVar20;
  long lVar21;
  undefined2 *puVar22;
  int iVar23;
  int iVar24;
  int iStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  uint uStack_6;
  
  if (*(char *)0xb1ea != '\x01') {
    FUN_3ab8_5218();
    return;
  }
  uVar13 = (int)*(uint *)0xb310 >> 0xf;
  iVar9 = ((int)((*(uint *)0xb310 ^ uVar13) - uVar13) >> 4 ^ uVar13) - uVar13;
  *(int *)(unaff_BP + -0x26a) = iVar9;
  if (iVar9 < 10) {
    iVar9 = 0;
  }
  else {
    iVar9 = 7;
  }
  *(int *)(unaff_BP + -0x266) = iVar9 + *(int *)(unaff_BP + -0x26a) + 0x30;
  iVar9 = *(int *)0xb310 % 0x10;
  *(int *)(unaff_BP + -0x26c) = iVar9;
  if (iVar9 < 10) {
    iVar10 = 0;
  }
  else {
    iVar10 = 7;
  }
  *(int *)(unaff_BP + -0x268) = iVar10 + iVar9 + 0x30;
  uStack_6 = 0x3ab8;
  iStack_8 = 0xff20;
  FUN_21f2_3454();
  uStack_6 = 0x22b2;
  iStack_8 = 0xff30;
  FUN_21f2_3454();
  uStack_6 = 0x22b2;
  iStack_8 = 0xff40;
  FUN_21f2_3454();
  uStack_6 = 0x22b2;
  iStack_8 = 0xff51;
  FUN_21f2_2d26();
  uStack_6 = 0x22b2;
  iStack_8 = 0xff61;
  FUN_21f2_2d26();
  uStack_6 = unaff_BP + -0x264;
  iStack_8 = 0x22b2;
  iStack_a = 0xff75;
  FUN_21f2_3454();
  uStack_6 = 0x22b2;
  iStack_8 = 0xff87;
  FUN_21f2_2d26();
  uStack_6 = 0x22b2;
  iStack_8 = 0xff98;
  FUN_21f2_2d26();
  uStack_6 = 0x22b2;
  iStack_8 = 0xffa9;
  FUN_21f2_2d26();
  uStack_6 = 0x22b2;
  iStack_8 = 0xffb9;
  FUN_21f2_2d26();
  uStack_6 = 0x21d2;
  iStack_8 = unaff_BP + -0x264;
  iStack_a = 0x22b2;
  iStack_c = 0xffd1;
  FUN_21f2_3454();
  uStack_6 = 0x22b2;
  iStack_8 = 0xffe3;
  FUN_21f2_2d26();
  uStack_6 = 0x22b2;
  iStack_8 = 0xfff4;
  FUN_21f2_2d26();
  uStack_6 = 0x22b2;
  iStack_8 = 4;
  FUN_21f2_2d26();
  uStack_6 = 0x22b2;
  iStack_8 = 0x14;
  FUN_21f2_2d26();
  uStack_6 = 0x22b2;
  iStack_8 = 0x24;
  FUN_1def_07a4();
  uStack_6 = unaff_BP + -0x21e;
  iStack_8 = unaff_BP + -0x1cc;
  iStack_a = 9999;
  iStack_c = 0x1bb4;
  iStack_e = 0x43;
  iVar9 = FUN_1def_0904();
  *(int *)(unaff_BP + -0x1f0) = iVar9;
  if (*(int *)0x158 != 0) {
    return;
  }
  if (((iVar9 != -1) && (iVar9 != 3)) && (*(int *)(unaff_BP + -0x146) != 2)) {
    if ((iVar9 == 99) || ((iVar9 != 1 && (iVar9 != 2)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(unaff_BP + -0x242) = iVar9;
    iVar9 = FUN_4375_76b1();
    if (iVar9 == 0) {
      if (*(int *)0x158 != 0) {
        return;
      }
      uStack_6 = 0x9e;
      func_0x0000daa6();
      uVar17 = 0x885;
      func_0x0000c3ca();
      *(undefined2 *)(unaff_BP + -0x168) = 1;
      *(undefined2 *)(unaff_BP + -0x166) = 0;
      while( true ) {
        if ((*(int *)0x14a < *(int *)(unaff_BP + -0x166)) ||
           ((*(int *)0x14a <= *(int *)(unaff_BP + -0x166) &&
            (*(uint *)0x148 < *(uint *)(unaff_BP + -0x168))))) break;
        iStack_8 = 0xd9;
        uStack_6 = uVar17;
        uVar20 = func_0x0000013f();
        if ((*(byte *)((int)uVar20 + 0x14) & 2) != 0) {
          uStack_6 = 0;
          iStack_8 = 0xf3;
          uVar20 = func_0x0000013f();
          *(undefined2 *)(unaff_BP + -0x270) = (int)uVar20;
          *(undefined2 *)(unaff_BP + -0x26e) = (int)((ulong)uVar20 >> 0x10);
          uStack_6 = 0;
          iStack_8 = 0x10a;
          func_0x0000013f();
          uStack_6 = 0;
          iStack_8 = 0x11f;
          uVar7 = FUN_4375_b44b();
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x270) + 0x12) = uVar7;
        }
        uVar17 = 0;
        puVar1 = (uint *)(unaff_BP + -0x168);
        uVar13 = *puVar1;
        *puVar1 = *puVar1 + 1;
        *(int *)(unaff_BP + -0x166) = *(int *)(unaff_BP + -0x166) + (uint)(0xfffe < uVar13);
      }
      *(undefined2 *)(unaff_BP + -0x168) = 1;
      *(undefined2 *)(unaff_BP + -0x166) = 0;
      while( true ) {
        if ((*(int *)0x14e < *(int *)(unaff_BP + -0x166)) ||
           ((*(int *)0x14e <= *(int *)(unaff_BP + -0x166) &&
            (*(uint *)0x14c < *(uint *)(unaff_BP + -0x168))))) break;
        iStack_8 = 0x160;
        uStack_6 = uVar17;
        uVar20 = func_0x00000271();
        if ((*(byte *)((int)uVar20 + 0x1e) & 2) != 0) {
          uStack_6 = 0;
          iStack_8 = 0x17a;
          uVar20 = func_0x00000271();
          *(undefined2 *)(unaff_BP + -0x270) = (int)uVar20;
          *(undefined2 *)(unaff_BP + -0x26e) = (int)((ulong)uVar20 >> 0x10);
          uStack_6 = 0;
          iStack_8 = 0x191;
          func_0x00000271();
          uStack_6 = 0;
          iStack_8 = 0x1a6;
          uVar7 = FUN_4375_b44b();
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x270) + 0x1c) = uVar7;
        }
        uVar17 = 0;
        puVar1 = (uint *)(unaff_BP + -0x168);
        uVar13 = *puVar1;
        *puVar1 = *puVar1 + 1;
        *(int *)(unaff_BP + -0x166) = *(int *)(unaff_BP + -0x166) + (uint)(0xfffe < uVar13);
      }
      *(undefined2 *)(unaff_BP + -0x1f0) = 1;
      while (*(int *)(unaff_BP + -0x1f0) <= *(int *)0x150) {
        uStack_6 = 0x1c3;
        uVar20 = func_0x00000398();
        if ((*(byte *)((int)uVar20 + 0x16) & 2) != 0) {
          uStack_6 = 0x1d8;
          uVar20 = func_0x00000398();
          *(undefined2 *)(unaff_BP + -0x270) = (int)uVar20;
          *(undefined2 *)(unaff_BP + -0x26e) = (int)((ulong)uVar20 >> 0x10);
          uStack_6 = 0x1ea;
          func_0x00000398();
          uStack_6 = 0;
          iStack_8 = 0x1fe;
          uVar7 = FUN_4375_b44b();
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x270) + 0x15) = uVar7;
        }
        *(int *)(unaff_BP + -0x1f0) = *(int *)(unaff_BP + -0x1f0) + 1;
      }
      *(undefined2 *)(unaff_BP + -0x1f0) = 1;
      while (*(int *)(unaff_BP + -0x1f0) <= *(int *)0x152) {
        uStack_6 = 0x226;
        uVar20 = func_0x000003ef();
        if ((*(byte *)((int)uVar20 + 10) & 2) != 0) {
          uStack_6 = 0x23b;
          uVar20 = func_0x000003ef();
          *(undefined2 *)(unaff_BP + -0x270) = (int)uVar20;
          *(undefined2 *)(unaff_BP + -0x26e) = (int)((ulong)uVar20 >> 0x10);
          uStack_6 = 0x24d;
          func_0x000003ef();
          uStack_6 = 0;
          iStack_8 = 0x261;
          uVar7 = FUN_4375_b44b();
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x270) + 8) = uVar7;
        }
        *(int *)(unaff_BP + -0x1f0) = *(int *)(unaff_BP + -0x1f0) + 1;
      }
      uStack_6 = 0x280;
      func_0x0000b1d8();
      func_0x0000b6ea();
      *(undefined2 *)(unaff_BP + -0x10e) = 0;
      uStack_6 = 0x885;
      iStack_8 = 0x29a;
      FUN_21f2_3454();
      uStack_6 = 0x22b2;
      iStack_8 = 0x2aa;
      FUN_21f2_2d26();
      uStack_6 = 0x22b2;
      iStack_8 = 0x2ba;
      FUN_21f2_2d26();
      uStack_6 = 2;
      iStack_8 = 0x12;
      iStack_a = unaff_BP + -0x264;
      iStack_c = 0x22b2;
      iStack_e = 0x2d6;
      FUN_1000_02b5();
      if (*(int *)0xc22 == 0) {
        *(undefined2 *)0xc22 = 1;
      }
LAB_3ab8_6c00:
      do {
        *(undefined1 *)0xb49c = 0;
        uStack_6 = 0x178d;
        func_0x0000daa6();
        func_0x0000abfa();
        *(undefined2 *)0xbc0 = 1;
        *(undefined1 *)0xd14 = 2;
        iVar9 = 0x885;
LAB_3ab8_6c1e:
        while( true ) {
          while( true ) {
            *(undefined1 *)(unaff_BP + -0x1cc) = 0;
            if (*(char *)(unaff_BP + -0x134) == '\0') {
              if ((((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 3)) ||
                  (*(int *)(unaff_BP + -0x1fe) == 4)) ||
                 (iVar10 = iVar9, *(int *)(unaff_BP + -0x1fe) == 6)) {
                *(undefined2 *)0xc20 = 1;
                uStack_6 = 0x2258;
                iStack_8 = unaff_BP + -0x1cc;
                iVar10 = 0x22b2;
                iStack_c = 0x17e5;
                iStack_a = iVar9;
                FUN_21f2_3454();
              }
              iStack_8 = 0x17f6;
              uStack_6 = iVar10;
              FUN_21f2_2d26();
              if (0 < *(int *)(unaff_BP + -0x1fe)) {
                uStack_6 = 0x22b2;
                iStack_8 = 0x180d;
                FUN_21f2_2d26();
              }
              uStack_6 = 0x22b2;
              iStack_8 = 0x181d;
              FUN_21f2_2d26();
              if (((0 < *(int *)(unaff_BP + -0x1fe)) && (*(int *)(unaff_BP + -0x1fe) != 5)) &&
                 ((*(int *)(unaff_BP + -0x1fe) != 7 && (*(char *)0xb1ea != '\x03')))) {
                uStack_6 = 0x22b2;
                iStack_8 = 0x1849;
                FUN_21f2_2d26();
                uStack_6 = 0x22b2;
                iStack_8 = 0x1859;
                FUN_21f2_2d26();
              }
              if (*(int *)0xce6 != 0) {
                uStack_6 = 0x22b2;
                iStack_8 = 0x1870;
                FUN_21f2_2d26();
              }
            }
            else {
              uStack_6 = 0x1885;
              func_0x00008095();
              *(undefined2 *)(unaff_BP + -0x1fe) = 1;
              *(undefined2 *)0xbc0 = 1;
              uStack_6 = 0x7a6;
              iStack_8 = 0x189e;
              FUN_21f2_2d26();
              uStack_6 = 0x22b2;
              iStack_8 = 0x18ae;
              FUN_21f2_2d26();
              uStack_6 = 0x22b2;
              iStack_8 = 0x18be;
              FUN_21f2_2d26();
              uStack_6 = 0x22b2;
              iStack_8 = 0x18ce;
              FUN_21f2_2d26();
              uStack_6 = 0x22b2;
              iStack_8 = 0x18de;
              FUN_21f2_2d26();
              uStack_6 = 0x22b2;
              iStack_8 = 0x18ee;
              FUN_21f2_2d26();
              uStack_6 = 0x22b2;
              iStack_8 = 0x18fe;
              FUN_21f2_2d26();
              uStack_6 = 0x22b2;
              iStack_8 = 0x190e;
              FUN_21f2_2d26();
              uStack_6 = 0x22b2;
              iStack_8 = 0x191e;
              FUN_21f2_2d26();
              uStack_6 = 0x22b2;
              iStack_8 = 0x192e;
              FUN_21f2_2d26();
              uStack_6 = 0x22b2;
              iStack_8 = 0x193e;
              FUN_21f2_2d26();
            }
            uStack_6 = 0x22b2;
            iStack_8 = 0x194e;
            FUN_1def_07a4();
            *(undefined2 *)0xc1a = 1;
            if (*(int *)0xce6 != 0) {
              *(undefined2 *)0xc1a = 0;
            }
            *(undefined2 *)0xcb8 = 1;
            uStack_6 = unaff_BP + -0x21e;
            iStack_8 = unaff_BP + -0x1cc;
            iStack_a = *(int *)(unaff_BP + -0x10e);
            iStack_c = 0x1bb4;
            iVar9 = 0x1bb4;
            iStack_e = 0x1986;
            uVar17 = FUN_1def_0904();
            *(undefined2 *)(unaff_BP + -0x1f0) = uVar17;
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            *(undefined2 *)0xcb8 = 0;
            if (*(int *)0x158 != 0) {
              return;
            }
            if (*(int *)0xc18 == 0) break;
            *(undefined2 *)(unaff_BP + -0x10e) = 0;
            *(undefined2 *)(unaff_BP + -0x1fe) = 0;
            uStack_6 = 0x19b5;
            func_0x00008095();
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0x19ce;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0x19d7;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0x19dc;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0x19e6;
            func_0x000299d1();
            uStack_12 = 0x22b2;
            uStack_14 = 0x19eb;
            func_0x0000507a();
            iVar9 = 0x3bf;
          }
          if ((*(int *)(unaff_BP + -0x1f0) != 1) || (*(char *)(unaff_BP + -0x134) == '\0')) break;
          if (*(char *)(unaff_BP + -0x134) == '\x01') {
            *(undefined1 *)0x22b3 = 2;
            *(undefined1 *)(unaff_BP + -0x134) = 2;
            iStack_8 = 0x3e;
            iStack_a = 0xf46;
          }
          else {
            *(undefined1 *)0x22b3 = 1;
            *(undefined1 *)(unaff_BP + -0x134) = 1;
            iStack_8 = 0x3a;
            iStack_a = 0x228f;
          }
          uStack_6 = 2;
          iStack_c = 0x1bb4;
          iStack_e = 0x1a46;
          FUN_1000_02b5();
          *(undefined2 *)0xc22 = 1;
          iVar9 = 0xdef;
        }
        if ((*(int *)(unaff_BP + -0x146) == 2) && (*(char *)(unaff_BP + -0x134) == '\x02')) {
          *(undefined2 *)0xc18 = 0;
          uStack_6 = *(undefined2 *)(unaff_BP + -0x21c);
          iStack_8 = *(int *)(unaff_BP + -0x21e);
          iStack_a = 2;
          pcVar6 = (code *)swi(0x3f);
          uVar17 = (*pcVar6)();
          *(undefined2 *)(unaff_BP + -0x10e) = uVar17;
          goto LAB_3ab8_6c00;
        }
        if (*(int *)(unaff_BP + -0x146) != 0) {
          if (*(byte *)0x123 < 0xc) {
LAB_3ab8_6f1c:
            if (*(char *)(unaff_BP + -0x134) == '\0') goto LAB_3ab8_6f8b;
          }
          else {
            iVar9 = 0x7a6;
            iVar10 = func_0x00007a6a();
            if (iVar10 == 0) goto LAB_3ab8_6f1c;
          }
          *(undefined2 *)0xc1e = 0;
          uStack_6 = *(undefined2 *)(unaff_BP + -0x146);
          iVar10 = 0x11f2;
          iStack_a = 0x1abc;
          iStack_8 = iVar9;
          iVar9 = func_0x00015409();
          if (iVar9 != 0) {
            uStack_6 = *(int *)(unaff_BP + -0x21c);
            iStack_8 = *(int *)(unaff_BP + -0x21e);
            iStack_a = 0;
            pcVar6 = (code *)swi(0x3f);
            iVar9 = (*pcVar6)();
            if (iVar9 != 0) {
              uVar17 = *(undefined2 *)(unaff_BP + -0x21c);
              *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x21e);
              *(undefined2 *)(unaff_BP + -0x142) = uVar17;
              uVar17 = *(undefined2 *)(unaff_BP + -0x230);
              *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x232);
              *(undefined2 *)(unaff_BP + -0x15a) = uVar17;
              goto LAB_3ab8_5b18;
            }
          }
          goto LAB_3ab8_6c00;
        }
LAB_3ab8_6f8b:
        if ((*(int *)(unaff_BP + -0x1fe) == 0) && (*(int *)(unaff_BP + -0x1f0) == 1)) {
          *(undefined2 *)(unaff_BP + -0x1f0) = 2;
        }
        if (*(int *)(unaff_BP + -0x1f0) == 1) {
          uStack_6 = unaff_BP + -0x268;
          iStack_8 = unaff_BP + -0x270;
          iVar10 = 0x885;
          iStack_c = 0x1b3e;
          iStack_a = iVar9;
          func_0x0000dcbd();
          if (*(char *)0x15a != '\0') {
            halt_baddata();
          }
          if (*(int *)(unaff_BP + -0x26a) < 0x21) {
            halt_baddata();
          }
          if (*(char *)0xb1ea != '\0') {
            halt_baddata();
          }
          if (*(char *)0x124 == '\0') {
            halt_baddata();
          }
          *(undefined2 *)(unaff_BP + -0x10e) = 0;
          goto LAB_3ab8_5c95;
        }
        if (*(int *)(unaff_BP + -0x1f0) == 2) {
          uStack_6 = unaff_BP + -0x266;
          iStack_8 = unaff_BP + -0x270;
          iStack_c = 0x1b8c;
          iStack_a = iVar9;
          func_0x0000dcbd();
          uStack_6 = 0x1b97;
          func_0x0000daa6();
          uStack_6 = 0x1ba0;
          func_0x00008095();
          if ((((*(char *)0x15a == '\0') && (0x20 < *(int *)(unaff_BP + -0x268))) &&
              (*(char *)0x124 != '\0')) &&
             ((*(char *)0xb1ea == '\0' || (*(char *)0xb1ea == '\x03')))) {
            *(undefined2 *)0xc22 = 1;
            uStack_6 = 2;
            iStack_8 = 0x14;
            iStack_a = 0x229d;
            iStack_c = 0x7a6;
            uVar17 = 0xdef;
            iStack_e = 0x1be9;
            FUN_1000_02b5();
            *(undefined2 *)(unaff_BP + -0x264) = 1;
            *(undefined2 *)(unaff_BP + -0x262) = 0;
            while( true ) {
              iVar9 = *(int *)(unaff_BP + -0x262);
              if ((*(int *)0x14a < iVar9) ||
                 ((*(int *)0x14a <= iVar9 && (*(uint *)0x148 < *(uint *)(unaff_BP + -0x264)))))
              break;
              uStack_6 = uVar17;
              if ((*(int *)(unaff_BP + -0x228) < iVar9) ||
                 ((*(int *)(unaff_BP + -0x228) <= iVar9 &&
                  (*(uint *)(unaff_BP + -0x22a) < *(uint *)(unaff_BP + -0x264))))) {
                iStack_8 = 0x1c07;
                uVar20 = func_0x0000013f();
                pbVar2 = (byte *)((int)uVar20 + 0x14);
                *pbVar2 = *pbVar2 | 2;
              }
              else {
                iStack_8 = 0x1c47;
                uVar20 = func_0x0000013f();
                pbVar2 = (byte *)((int)uVar20 + 0x14);
                *pbVar2 = *pbVar2 & 0xfd;
              }
              uVar17 = 0;
              puVar1 = (uint *)(unaff_BP + -0x264);
              uVar13 = *puVar1;
              *puVar1 = *puVar1 + 1;
              *(int *)(unaff_BP + -0x262) = *(int *)(unaff_BP + -0x262) + (uint)(0xfffe < uVar13);
            }
            *(undefined2 *)(unaff_BP + -0x264) = 1;
            *(undefined2 *)(unaff_BP + -0x262) = 0;
            while( true ) {
              iVar9 = *(int *)(unaff_BP + -0x262);
              if ((*(int *)0x14e < iVar9) ||
                 ((*(int *)0x14e <= iVar9 && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x264)))))
              break;
              uStack_6 = uVar17;
              if ((*(int *)(unaff_BP + -0x162) < iVar9) ||
                 ((*(int *)(unaff_BP + -0x162) <= iVar9 &&
                  (*(uint *)(unaff_BP + -0x164) < *(uint *)(unaff_BP + -0x264))))) {
                iStack_8 = 0x1c6f;
                uVar20 = func_0x00000271();
                pbVar2 = (byte *)((int)uVar20 + 0x1e);
                *pbVar2 = *pbVar2 | 2;
              }
              else {
                iStack_8 = 0x1caf;
                uVar20 = func_0x00000271();
                pbVar2 = (byte *)((int)uVar20 + 0x1e);
                *pbVar2 = *pbVar2 & 0xfd;
              }
              uVar17 = 0;
              puVar1 = (uint *)(unaff_BP + -0x264);
              uVar13 = *puVar1;
              *puVar1 = *puVar1 + 1;
              *(int *)(unaff_BP + -0x262) = *(int *)(unaff_BP + -0x262) + (uint)(0xfffe < uVar13);
            }
            *(undefined2 *)(unaff_BP + -0x26c) = 1;
            while (*(int *)(unaff_BP + -0x26c) <= *(int *)0x150) {
              if (*(int *)(unaff_BP + -0x10c) < *(int *)(unaff_BP + -0x26c)) {
                uStack_6 = 0x1cca;
                uVar20 = func_0x00000398();
                pbVar2 = (byte *)((int)uVar20 + 0x16);
                *pbVar2 = *pbVar2 | 2;
              }
              else {
                uStack_6 = 0x1cf1;
                uVar20 = func_0x00000398();
                pbVar2 = (byte *)((int)uVar20 + 0x16);
                *pbVar2 = *pbVar2 & 0xfd;
              }
              *(int *)(unaff_BP + -0x26c) = *(int *)(unaff_BP + -0x26c) + 1;
            }
            *(undefined2 *)(unaff_BP + -0x26c) = 1;
            while (*(int *)(unaff_BP + -0x26c) <= *(int *)0x152) {
              if (*(int *)(unaff_BP + -0x210) < *(int *)(unaff_BP + -0x26c)) {
                uStack_6 = 0x1d0b;
                uVar20 = func_0x000003ef();
                pbVar2 = (byte *)((int)uVar20 + 10);
                *pbVar2 = *pbVar2 | 2;
              }
              else {
                uStack_6 = 0x1d32;
                uVar20 = func_0x000003ef();
                pbVar2 = (byte *)((int)uVar20 + 10);
                *pbVar2 = *pbVar2 & 0xfd;
              }
              *(int *)(unaff_BP + -0x26c) = *(int *)(unaff_BP + -0x26c) + 1;
            }
            *(undefined2 *)(unaff_BP + -0x10e) = 0;
            uStack_6 = 0x1d4a;
            func_0x0000daa6();
            uStack_6 = 0x1d54;
            func_0x00008095();
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(int *)0xce6 != 0) {
          *(undefined2 *)(unaff_BP + -0x270) = 0;
          if ((((*(int *)(unaff_BP + -0x1fe) < 1) || (*(int *)(unaff_BP + -0x1fe) == 5)) ||
              (*(int *)(unaff_BP + -0x1fe) == 7)) || (*(char *)0xb1ea == '\x03')) {
            bVar19 = *(int *)(unaff_BP + -0x1f0) == 3;
          }
          else {
            bVar19 = *(int *)(unaff_BP + -0x1f0) == 4;
          }
          if (bVar19) {
            *(undefined2 *)(unaff_BP + -0x270) = 1;
          }
          if ((*(int *)(unaff_BP + -0x270) == 1) && (*(int *)0xbc2 != 0)) {
            uStack_6 = 0x1da4;
            func_0x00008095();
            *(undefined2 *)0xbc2 = 0;
            return;
          }
        }
        if ((*(int *)(unaff_BP + -0x1f0) == 3) && (*(int *)(unaff_BP + -0x1fe) != 5)) {
          if (*(char *)0xb1ea == '\0') {
            func_0x000297e6();
            uStack_6 = 0x1ddf;
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            uStack_6 = 0x1df8;
            func_0x00029bb5();
            func_0x00029983();
            if (*(int *)(unaff_BP + -0x1fe) != 6) goto LAB_3ab8_69b3;
            func_0x00029834();
            uStack_6 = 0x1e1b;
            func_0x00029c74();
            func_0x000299b9();
            iStack_a = 0x22b2;
            iStack_c = 0x1e2b;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0x1e30;
            func_0x0002a11e();
            func_0x00029834();
            func_0x00029983();
            func_0x00029834();
            iStack_a = 0x22b2;
            iStack_c = 0x1e56;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0x1e5b;
            func_0x0002a10c();
            func_0x00029834();
            func_0x00029983();
            func_0x000297e6();
          }
          else {
            uVar17 = *(undefined2 *)(unaff_BP + -0x14e);
            *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x150);
            *(undefined2 *)(unaff_BP + -0x142) = uVar17;
            uVar17 = *(undefined2 *)(unaff_BP + -0x1d6);
            *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x1d8);
            *(undefined2 *)(unaff_BP + -0x15a) = uVar17;
            func_0x000297e6();
            uStack_6 = 0x1ebb;
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
          }
          uStack_6 = 0x1e7f;
          func_0x00029bb5();
          func_0x00029983();
          goto LAB_3ab8_69b3;
        }
        if ((*(int *)(unaff_BP + -0x1f0) != -1) || (*(int *)(unaff_BP + -0x10e) == 0)) {
          if (((*(int *)(unaff_BP + -0x1fe) == 1) ||
              (((*(int *)(unaff_BP + -0x1fe) == 3 || (*(int *)(unaff_BP + -0x1fe) == 4)) ||
               (*(int *)(unaff_BP + -0x1fe) == 6)))) && (*(int *)(unaff_BP + -0x146) != 0)) {
            uStack_6 = *(int *)(unaff_BP + -0x146);
            iVar10 = 0x11f2;
            iStack_a = 0x21cb;
            iStack_8 = iVar9;
            iVar11 = func_0x00015409();
            iVar9 = iVar10;
            if (iVar11 != 0) {
              if ((*(char *)0xb1ea != '\x01') && (*(char *)0xb1ea != '\x02')) goto LAB_3ab8_6188;
              uVar17 = *(undefined2 *)(unaff_BP + -0x14e);
              *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x150);
              *(undefined2 *)(unaff_BP + -0x142) = uVar17;
              uVar17 = *(undefined2 *)(unaff_BP + -0x1d6);
              *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x1d8);
              *(undefined2 *)(unaff_BP + -0x15a) = uVar17;
              goto LAB_3ab8_6188;
            }
          }
          goto LAB_3ab8_6c1e;
        }
        iVar10 = 0x885;
        uStack_6 = 0x1ee9;
        func_0x0000daa6();
        if (*(int *)(unaff_BP + -0x10e) < 0) {
          if (*(int *)(unaff_BP + -0x10e) == -1) {
            puVar1 = (uint *)0x148;
            uVar13 = *puVar1;
            *puVar1 = *puVar1 + 1;
            *(int *)0x14a = *(int *)0x14a + (uint)(0xfffe < uVar13);
            uStack_6 = 0x885;
            iStack_8 = 0x1f12;
            puVar22 = (undefined2 *)func_0x0000013f();
            puVar14 = (undefined2 *)puVar22;
            puVar15 = (undefined2 *)(unaff_BP + -0x2a6);
            for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar4 = puVar15;
              puVar15 = puVar15 + 1;
              puVar3 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar4 = *puVar3;
            }
            puVar14 = &uStack_16;
            puVar15 = (undefined2 *)(unaff_BP + -0x2a6);
            for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar3 = puVar14;
              puVar14 = puVar14 + 1;
              puVar22 = puVar15;
              puVar15 = puVar15 + 1;
              *puVar3 = *puVar22;
            }
            uStack_18 = 0;
            iVar10 = 0x11f2;
            uStack_1a = 0x1f38;
            FUN_17a6_0ae3();
          }
          if (*(int *)(unaff_BP + -0x10e) == -2) {
            puVar1 = (uint *)0x14c;
            uVar13 = *puVar1;
            *puVar1 = *puVar1 + 1;
            *(int *)0x14e = *(int *)0x14e + (uint)(0xfffe < uVar13);
            iStack_8 = 0x1f59;
            uStack_6 = iVar10;
            puVar22 = (undefined2 *)func_0x00000271();
            puVar14 = (undefined2 *)puVar22;
            puVar15 = (undefined2 *)(unaff_BP + -0x290);
            for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar4 = puVar15;
              puVar15 = puVar15 + 1;
              puVar3 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar4 = *puVar3;
            }
            piVar16 = &iStack_20;
            puVar15 = (undefined2 *)(unaff_BP + -0x290);
            for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar3 = piVar16;
              piVar16 = piVar16 + 1;
              puVar22 = puVar15;
              puVar15 = puVar15 + 1;
              *puVar3 = *puVar22;
            }
            func_0x00013e46(0);
          }
          *(undefined2 *)(unaff_BP + -0x10e) = 0;
          *(undefined2 *)0xbc0 = 1;
          goto LAB_3ab8_6c00;
        }
        if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
          uStack_6 = *(int *)(unaff_BP + -0x162);
          iStack_8 = *(int *)(unaff_BP + -0x164);
          iStack_a = *(int *)(unaff_BP + -0x228);
          iStack_c = *(int *)(unaff_BP + -0x22a);
          pcVar6 = (code *)swi(0x3f);
          (*pcVar6)();
        }
        else {
          if (*(int *)(unaff_BP + -0x1fe) == 6) {
            func_0x00029834();
            func_0x00029af6();
            func_0x000299b9();
            iStack_a = 0x22b2;
            iStack_c = 0x1fea;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0x1fef;
            func_0x0002a11e();
            func_0x00029834();
            func_0x00029983();
            func_0x00029834();
            iStack_a = 0x22b2;
            iStack_c = 0x2015;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0x201a;
            func_0x0002a10c();
            func_0x00029834();
            func_0x00029983();
          }
          uStack_6 = 0x2039;
          func_0x000297e6();
          uStack_6 = 0x203e;
          func_0x00029af6();
          uStack_6 = 0x2043;
          func_0x00029d78();
          iStack_c = 0x22b2;
          iStack_e = 0x204d;
          func_0x000299d1();
          iStack_c = 0x22b2;
          iStack_e = 0x2056;
          func_0x000297e6();
          iStack_c = 0x22b2;
          iStack_e = 0x205b;
          FUN_28b3_1c08();
          iStack_c = 0x22b2;
          iStack_e = 0x2060;
          FUN_28b3_1177();
          iStack_c = 0x22b2;
          iStack_e = 0x2065;
          func_0x00029d78();
          uStack_14 = 0x22b2;
          uStack_16 = 0x206f;
          func_0x000299d1();
          uStack_14 = 0x22b2;
          uStack_16 = 0x2078;
          func_0x000297e6();
          uStack_14 = 0x22b2;
          uStack_16 = 0x207d;
          FUN_28b3_1c08();
          uStack_14 = 0x22b2;
          uStack_16 = 0x2082;
          FUN_28b3_1177();
          uStack_14 = 0x22b2;
          uStack_16 = 0x2087;
          func_0x00029d78();
          uStack_1c = 0x22b2;
          uStack_1e = 0x2091;
          func_0x000299d1();
          uStack_1c = 0x22b2;
          uStack_1e = 0x209a;
          func_0x000297e6();
          uStack_1c = 0x22b2;
          uStack_1e = 0x209f;
          func_0x00029af6();
          uStack_1c = 0x22b2;
          uStack_1e = 0x20a4;
          func_0x00029d78();
          func_0x000299d1(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029af6(0x22b2);
          func_0x00029d78(0x22b2);
          func_0x000299d1(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
          func_0x000299d1(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
          iVar10 = 0x22b2;
          func_0x000299d1(0x22b2);
          FUN_4375_b4b4(0x22b2,unaff_BP + -0x10e,*(undefined1 *)0x22b0,*(undefined1 *)0x22b1,
                        *(undefined1 *)0x22b2);
          if (*(int *)(unaff_BP + -0x1fe) == 6) {
            func_0x00029834();
            func_0x00029af6();
            func_0x000299b9();
            iStack_a = 0x22b2;
            iStack_c = 0x213d;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0x2142;
            func_0x0002a11e();
            func_0x00029834();
            func_0x00029983();
            func_0x00029834();
            iStack_a = 0x22b2;
            iStack_c = 0x2168;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0x216d;
            func_0x0002a10c();
            func_0x00029834();
            iVar10 = 0x22b2;
            func_0x00029983();
          }
        }
        *(undefined2 *)(unaff_BP + -0x10e) = 0;
        if (*(int *)(unaff_BP + -0x1fe) != 4) goto LAB_3ab8_5c95;
LAB_3ab8_6409:
        if (*(int *)(unaff_BP + -0x1fe) == 4) {
          uVar17 = *(undefined2 *)(unaff_BP + -0x1d2);
          *(undefined2 *)(unaff_BP + -0x270) = *(undefined2 *)(unaff_BP + -0x1d4);
          *(undefined2 *)(unaff_BP + -0x26e) = uVar17;
          uVar17 = *(undefined2 *)(unaff_BP + -0x1e8);
          *(undefined2 *)(unaff_BP + -0x264) = *(undefined2 *)(unaff_BP + -0x1ea);
          *(undefined2 *)(unaff_BP + -0x262) = uVar17;
          if (*(int *)(unaff_BP + -0x1e6) != 0) {
            uStack_6 = 1;
            iVar9 = 0x1bb4;
            iStack_a = 0xfd0;
            iStack_8 = iVar10;
            FUN_1def_0338();
            if (*(int *)(unaff_BP + -0x1e6) == 1) {
              uVar17 = *(undefined2 *)0x943e;
              *(undefined2 *)(unaff_BP + -0x264) = *(undefined2 *)0x943c;
              *(undefined2 *)(unaff_BP + -0x262) = uVar17;
            }
            if (*(int *)(unaff_BP + -0x1e6) == 2) {
              uVar17 = *(undefined2 *)0x943e;
              *(undefined2 *)(unaff_BP + -0x270) = *(undefined2 *)0x943c;
              *(undefined2 *)(unaff_BP + -0x26e) = uVar17;
            }
            uVar7 = *(uint *)(unaff_BP + -0x1e6) < 3;
            if (*(uint *)(unaff_BP + -0x1e6) == 3) {
              func_0x000297e6();
              func_0x00029ae7();
              func_0x000297e6();
              func_0x00029ae7();
              iVar9 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar7) {
                uVar17 = *(undefined2 *)0x943e;
                *(undefined2 *)(unaff_BP + -0x264) = *(undefined2 *)0x943c;
                *(undefined2 *)(unaff_BP + -0x262) = uVar17;
              }
              else {
                uVar17 = *(undefined2 *)0x943e;
                *(undefined2 *)(unaff_BP + -0x270) = *(undefined2 *)0x943c;
                *(undefined2 *)(unaff_BP + -0x26e) = uVar17;
              }
            }
            uStack_6 = 0;
            iStack_a = 0x105b;
            iStack_8 = iVar9;
            FUN_1def_0338();
          }
          func_0x000297e6();
          uStack_6 = 0x1071;
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          uStack_6 = 0x108a;
          func_0x00029bb5();
          iVar10 = 0x22b2;
          func_0x00029983();
          while( true ) {
            do {
              uStack_6 = 0x65e;
              iStack_8 = unaff_BP + -0x14;
              iStack_a = 0x223f;
              iStack_c = unaff_BP + -0x1cc;
              uStack_10 = 0x10ae;
              iStack_e = iVar10;
              FUN_21f2_3454();
              uStack_6 = 0x22b2;
              iStack_8 = 0x10bb;
              FUN_1000_0599();
              uStack_6 = 0x10c7;
              func_0x00012276();
              func_0x00010526();
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029983();
              uVar17 = *(undefined2 *)(unaff_BP + -0x264);
              uVar5 = *(undefined2 *)(unaff_BP + -0x262);
              *(undefined2 *)(unaff_BP + -0x232) = uVar17;
              *(undefined2 *)(unaff_BP + -0x230) = uVar5;
              *(undefined2 *)(unaff_BP + -0x1d8) = uVar17;
              *(undefined2 *)(unaff_BP + -0x1d6) = uVar5;
              uStack_6 = 0x22b2;
              iStack_8 = 0x1110;
              func_0x000297e6();
              uStack_6 = 0x22b2;
              iStack_8 = 0x1115;
              func_0x00029d78();
              iStack_e = 0x22b2;
              uStack_10 = 0x111f;
              func_0x000299d1();
              iStack_e = 0x22b2;
              uStack_10 = 0x1128;
              func_0x000297e6();
              iStack_e = 0x22b2;
              uStack_10 = 0x112d;
              func_0x00029d78();
              uStack_16 = 0x22b2;
              uStack_18 = 0x1137;
              func_0x000299d1();
              uStack_16 = 0x22b2;
              uStack_18 = 0x1140;
              func_0x000297e6();
              uStack_16 = 0x22b2;
              uStack_18 = 0x1145;
              func_0x00029d78();
              uStack_1e = 0x22b2;
              iStack_20 = 0x114f;
              func_0x000299d1();
              uStack_1e = *(undefined2 *)(unaff_BP + -0x1e6);
              iStack_20 = unaff_BP + -0xca;
              iVar9 = unaff_BP + -0x5c;
              iVar24 = unaff_BP + -0x146;
              iVar23 = unaff_BP + -0x92;
              iVar11 = unaff_BP + -0x58;
              func_0x000297e6(0x22b2,iVar11,iVar23,unaff_BP + -0x21e,unaff_BP + -0x232,iVar24,iVar9,
                              unaff_BP + -0x226,unaff_BP + -0x1e0,unaff_BP + -0x1e4,
                              unaff_BP + -0x132);
              func_0x00029d78(0x22b2);
              func_0x000299d1(0x22b2);
              func_0x000297e6(0x22b2);
              func_0x00029d78(0x22b2);
              iVar10 = 0x22b2;
              func_0x000299d1(0x22b2);
              iVar12 = FUN_4375_a73f(0x22b2,2);
              *(int *)(unaff_BP + -0x1f0) = iVar12;
              if (*(int *)0x158 != 0) {
                return;
              }
            } while (iVar12 == 99);
            if (iVar12 == -1) break;
            if ((*(int *)(unaff_BP + -0x146) != 0) && (*(int *)0xa5e < *(int *)(unaff_BP + -0x92)))
            {
              if ((*(char *)0x4a != '\0') && (*(int *)(unaff_BP + -0x146) != 2)) {
                uStack_6 = *(undefined2 *)(unaff_BP + -0x15a);
                iStack_8 = *(undefined2 *)(unaff_BP + -0x15c);
                iStack_a = *(undefined2 *)(unaff_BP + -0x142);
                iStack_c = *(int *)(unaff_BP + -0x144);
                iStack_e = 0x22b2;
                uStack_10 = 0x1223;
                FUN_4375_bf01();
              }
              uStack_6 = *(undefined2 *)(unaff_BP + -0x146);
              iStack_8 = 0x22b2;
              iVar10 = 0x11f2;
              iStack_a = 0x1239;
              iVar12 = func_0x00015409();
              if (iVar12 != 0) {
                uStack_6 = 0x11f2;
                iStack_8 = 0x1256;
                func_0x000297e6();
                uStack_6 = 0x22b2;
                iStack_8 = 0x125b;
                func_0x00029d78();
                iStack_e = 0x22b2;
                uStack_10 = 0x1265;
                func_0x000299d1();
                iStack_e = 0x22b2;
                uStack_10 = 0x126e;
                func_0x000297e6();
                iStack_e = 0x22b2;
                uStack_10 = 0x1273;
                func_0x00029d78();
                uStack_16 = 0x22b2;
                uStack_18 = 0x127d;
                func_0x000299d1();
                uStack_16 = 0x22b2;
                uStack_18 = 0x1286;
                func_0x000297e6();
                uStack_16 = 0x22b2;
                uStack_18 = 0x128b;
                func_0x00029d78();
                uStack_1e = 0x22b2;
                iStack_20 = 0x1295;
                func_0x000299d1();
                uStack_1e = 0x22b2;
                iStack_20 = 0x129e;
                func_0x000297e6();
                uStack_1e = 0x22b2;
                iStack_20 = 0x12a3;
                func_0x00029d78();
                func_0x000299d1(0x22b2);
                func_0x000297e6(0x22b2);
                uVar17 = 0x12bb;
                func_0x00029d78(0x22b2);
                func_0x000299d1(0x22b2,iVar24,iVar9,uVar17);
                func_0x000297e6(0x22b2);
                uVar17 = 0x12d3;
                func_0x00029d78(0x22b2);
                iVar10 = 0x22b2;
                func_0x000299d1(0x22b2,iVar11,iVar23,uVar17);
                FUN_4375_a5de(0x22b2);
                uVar17 = *(undefined2 *)(unaff_BP + -0x1f2);
                *(undefined2 *)0x106c = *(undefined2 *)(unaff_BP + -500);
                *(undefined2 *)0x106e = uVar17;
                uVar17 = *(undefined2 *)(unaff_BP + -0x202);
                *(undefined2 *)0x1070 = *(undefined2 *)(unaff_BP + -0x204);
                *(undefined2 *)0x1072 = uVar17;
                goto LAB_3ab8_6782;
              }
            }
          }
LAB_3ab8_5c95:
          do {
            *(undefined2 *)(unaff_BP + -0x224) = 0;
            *(undefined2 *)(unaff_BP + -0x226) = 0;
            *(undefined2 *)(unaff_BP + -0x5a) = 0;
            *(undefined2 *)(unaff_BP + -0x5c) = 0;
            *(undefined2 *)(unaff_BP + -0x1e0) = 0;
            uVar17 = *(undefined2 *)0x14a;
            *(undefined2 *)(unaff_BP + -0x1e4) = *(undefined2 *)0x148;
            *(undefined2 *)(unaff_BP + -0x1e2) = uVar17;
            uVar17 = *(undefined2 *)0x14e;
            *(undefined2 *)(unaff_BP + -0x132) = *(undefined2 *)0x14c;
            *(undefined2 *)(unaff_BP + -0x130) = uVar17;
            *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x150;
            if ((((*(int *)(unaff_BP + -0x1fe) != 1) && (*(int *)(unaff_BP + -0x1fe) != 3)) &&
                (*(int *)(unaff_BP + -0x1fe) != 4)) && (*(int *)(unaff_BP + -0x1fe) != 6))
            goto LAB_3ab8_6188;
            while( true ) {
              do {
                if (*(char *)0xb1ea == '\0') {
                  bVar8 = *(byte *)0xc11;
                }
                else {
                  bVar8 = *(byte *)0xc12;
                }
                *(uint *)(unaff_BP + -0x220) = (uint)bVar8;
                iVar9 = iVar10;
                if ((*(int *)0xc22 == 0) && (bVar8 == 0)) {
                  uStack_6 = 2;
                  iStack_8 = 0x42;
                  iStack_a = 0x2204;
                  iVar9 = 0xdef;
                  iStack_e = 0x8a6;
                  iStack_c = iVar10;
                  FUN_1000_02b5();
                  *(undefined2 *)0xc22 = 1;
                }
                uStack_6 = unaff_BP + -0x14;
                iStack_8 = 0x2207;
                iStack_a = unaff_BP + -0x1cc;
                iStack_e = 0x8c9;
                iStack_c = iVar9;
                FUN_21f2_3454();
                uStack_6 = 1;
                iStack_8 = 0x22b2;
                iStack_a = 0x8de;
                func_0x00001d33();
                uStack_6 = 0xad;
                uVar17 = 0x22b2;
                iStack_8 = 0x8ef;
                FUN_21f2_2d26();
                if ((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 6)) {
                  uStack_6 = 0x22b2;
                  iStack_8 = 0x90d;
                  FUN_21f2_2d26();
                  func_0x000297e6();
                  func_0x00029d78();
                  iStack_a = 0x22b2;
                  iStack_c = 0x927;
                  func_0x000299d1();
                  iStack_a = 0x222f;
                  iStack_c = unaff_BP + -0x84;
                  iStack_e = 0x22b2;
                  uVar17 = 0x22b2;
                  uStack_10 = 0x935;
                  FUN_21f2_3454();
                  if (*(int *)(unaff_BP + -0x1fe) == 6) {
                    uStack_6 = 0x22b2;
                    iStack_8 = 0x94c;
                    FUN_1000_0599();
                    func_0x00010526();
                    uStack_6 = 2;
                    iStack_8 = 0x47;
                    iStack_a = unaff_BP + -0x84;
                    iStack_c = 0xdef;
                    uVar17 = 0xdef;
                    iStack_e = 0x96d;
                    FUN_1000_02b5();
                    *(undefined2 *)0xc22 = 1;
                  }
                }
                iStack_8 = 0x980;
                uStack_6 = uVar17;
                FUN_1000_0599();
                uStack_6 = 0x98c;
                func_0x00012276();
                func_0x00010526();
                uStack_6 = 0xdef;
                iStack_8 = 0x9a2;
                func_0x000297e6();
                uStack_6 = 0x22b2;
                iStack_8 = 0x9a7;
                func_0x00029d78();
                iStack_e = 0x22b2;
                uStack_10 = 0x9b1;
                func_0x000299d1();
                iStack_e = 0x22b2;
                uStack_10 = 0x9ba;
                func_0x000297e6();
                iStack_e = 0x22b2;
                uStack_10 = 0x9bf;
                func_0x00029d78();
                uStack_16 = 0x22b2;
                uStack_18 = 0x9c9;
                func_0x000299d1();
                uStack_16 = 0x22b2;
                uStack_18 = 0x9d2;
                func_0x000297e6();
                uStack_16 = 0x22b2;
                uStack_18 = 0x9d7;
                func_0x00029d78();
                uStack_1e = 0x22b2;
                iStack_20 = 0x9e1;
                func_0x000299d1();
                uStack_1e = *(undefined2 *)(unaff_BP + -0x1e6);
                iStack_20 = unaff_BP + -0xca;
                func_0x000297e6(0x22b2,unaff_BP + -0x58,unaff_BP + -0x92,unaff_BP + -0x21e,
                                unaff_BP + -0x232,unaff_BP + -0x146,unaff_BP + -0x5c,
                                unaff_BP + -0x226,unaff_BP + -0x1e0,unaff_BP + -0x1e4,
                                unaff_BP + -0x132);
                func_0x00029d78(0x22b2);
                func_0x000299d1(0x22b2);
                func_0x000297e6(0x22b2);
                func_0x00029d78(0x22b2);
                iVar10 = 0x22b2;
                func_0x000299d1(0x22b2);
                iVar9 = FUN_4375_a73f(0x22b2,0);
                *(int *)(unaff_BP + -0x1f0) = iVar9;
                if (*(int *)0x158 != 0) {
                  return;
                }
              } while (iVar9 == 99);
              if (iVar9 == -1) break;
              if ((*(int *)(unaff_BP + -0x92) < *(int *)0xa5e) && (*(int *)(unaff_BP + -0x146) != 0)
                 ) {
                *(undefined2 *)(unaff_BP + -0x146) = 0;
                if ((0x16b < *(int *)(unaff_BP + -0x58)) && (*(int *)(unaff_BP + -0x58) < 0x1e4)) {
                  *(undefined2 *)(unaff_BP + -0x1f0) = 0x31;
                }
                if ((0x1e3 < *(int *)(unaff_BP + -0x58)) && (*(int *)(unaff_BP + -0x58) < 0x22c)) {
                  *(undefined2 *)(unaff_BP + -0x1f0) = 0x32;
                }
                if (0x22b < *(int *)(unaff_BP + -0x58)) {
                  *(undefined2 *)(unaff_BP + -0x1f0) = 0x33;
                }
                uStack_6 = unaff_BP + -0x126;
                iStack_8 = unaff_BP + -0x2a;
                iStack_a = 0x22b2;
                iVar10 = 0x885;
                iStack_c = 0xaf8;
                func_0x0000dcbd();
                uVar13 = (int)*(uint *)0xc1c >> 0xf;
                if ((((int)(((*(uint *)0xc1c ^ uVar13) - uVar13) + *(int *)0xa5e) <
                      *(int *)(unaff_BP + -0x92)) && (*(char *)0x124 != '\0')) &&
                   (*(int *)(unaff_BP + -0x124) != 0)) {
                  *(undefined2 *)(unaff_BP + -0x1f0) = 0;
                  pcVar6 = (code *)swi(0x3f);
                  (*pcVar6)();
                }
              }
              if (*(int *)(unaff_BP + -0x1f0) == 0x31) {
                *(undefined2 *)(unaff_BP + -0x146) = 0;
                *(int *)(unaff_BP + -0x1e6) = *(int *)(unaff_BP + -0x1e6) + 1;
                if (3 < *(int *)(unaff_BP + -0x1e6)) {
                  *(undefined2 *)(unaff_BP + -0x1e6) = 0;
                }
              }
              if (*(int *)(unaff_BP + -0x1f0) == 0x32) {
                *(undefined2 *)(unaff_BP + -0x146) = 0;
                if (*(char *)0xb1ea == '\0') {
                  *(char *)0xc11 = '\x01' - *(char *)0xc11;
                }
                else {
                  *(char *)0xc12 = '\x01' - *(char *)0xc12;
                }
              }
              if ((*(int *)(unaff_BP + -0x1f0) == 0x33) &&
                 ((*(undefined2 *)(unaff_BP + -0x146) = 0, *(int *)(unaff_BP + -0x1fe) == 1 ||
                  (*(int *)(unaff_BP + -0x1fe) == 6)))) goto LAB_3ab8_600d;
              if (*(int *)(unaff_BP + -0x146) != 0) {
                iVar9 = iVar10;
                if (0xb < *(byte *)0x123) {
                  iVar10 = 0x7a6;
                  iVar11 = func_0x00007a6a();
                  iVar9 = iVar10;
                  if (iVar11 != 0) {
                    uStack_6 = *(int *)(unaff_BP + -0x21c);
                    iStack_8 = *(int *)(unaff_BP + -0x21e);
                    iStack_a = 1;
                    pcVar6 = (code *)swi(0x3f);
                    (*pcVar6)();
                    goto LAB_3ab8_5c95;
                  }
                }
                if ((*(char *)0x4a != '\0') && (*(int *)(unaff_BP + -0x146) != 2)) {
                  uStack_6 = *(undefined2 *)(unaff_BP + -0x15a);
                  iStack_8 = *(undefined2 *)(unaff_BP + -0x15c);
                  iStack_a = *(undefined2 *)(unaff_BP + -0x142);
                  iStack_c = *(int *)(unaff_BP + -0x144);
                  uStack_10 = 0xce8;
                  iStack_e = iVar9;
                  FUN_4375_bf01();
                }
                uStack_6 = *(int *)(unaff_BP + -0x146);
                iVar10 = 0x11f2;
                iStack_a = 0xcfe;
                iStack_8 = iVar9;
                iVar9 = func_0x00015409();
                if (iVar9 != 0) goto LAB_3ab8_6188;
              }
              if (*(int *)0x158 != 0) {
                return;
              }
            }
            if (*(int *)(unaff_BP + -0x1fe) == 3) goto LAB_3ab8_59bb;
            iVar9 = iVar10;
            if (*(int *)(unaff_BP + -0x1fe) == 4) goto LAB_3ab8_589f;
            if (*(int *)(unaff_BP + -0x1fe) != 6) goto LAB_3ab8_576c;
LAB_3ab8_5b18:
            uVar17 = *(undefined2 *)0x9482;
            *(undefined2 *)0xb76a = *(undefined2 *)0x9480;
            *(undefined2 *)0xb76c = uVar17;
            uVar17 = *(undefined2 *)0x943c;
            uVar5 = *(undefined2 *)0x943e;
            *(undefined2 *)0xb784 = uVar17;
            *(undefined2 *)0xb786 = uVar5;
            *(undefined2 *)0xb30c = uVar17;
            *(undefined2 *)0xb30e = uVar5;
            *(undefined2 *)0xb37e = uVar17;
            *(undefined2 *)0xb380 = uVar5;
            *(undefined2 *)(unaff_BP + -0x13c) = *(undefined2 *)0x9454;
            *(undefined2 *)(unaff_BP + -0x13a) = *(undefined2 *)0x9456;
            *(undefined2 *)(unaff_BP + -0x138) = *(undefined2 *)0x9458;
            *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)0x945a;
            *(undefined2 *)(unaff_BP + -0x108) = *(undefined2 *)0x9454;
            *(undefined2 *)(unaff_BP + -0x106) = *(undefined2 *)0x9456;
            *(undefined2 *)(unaff_BP + -0x104) = *(undefined2 *)0x9458;
            *(undefined2 *)(unaff_BP + -0x102) = *(undefined2 *)0x945a;
            uVar17 = *(undefined2 *)0x943c;
            uVar5 = *(undefined2 *)0x943e;
            *(undefined2 *)(unaff_BP + -0x24) = uVar17;
            *(undefined2 *)(unaff_BP + -0x22) = uVar5;
            *(undefined2 *)(unaff_BP + -0x20) = uVar17;
            *(undefined2 *)(unaff_BP + -0x1e) = uVar5;
            if (*(int *)(unaff_BP + -0x1fe) == 6) {
              uVar17 = *(undefined2 *)0x1076;
              *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x1074;
              *(undefined2 *)(unaff_BP + -0x218) = uVar17;
              pcVar6 = (code *)swi(0x3f);
              iVar11 = (*pcVar6)();
              *(int *)(unaff_BP + -0x1f0) = iVar11;
              if (*(int *)0x158 != 0) {
                return;
              }
              iVar9 = iVar10;
              if (iVar11 == -1) {
LAB_3ab8_576c:
                do {
                  if ((((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 3)) ||
                      (*(int *)(unaff_BP + -0x1fe) == 4)) || (*(int *)(unaff_BP + -0x1fe) == 6)) {
LAB_3ab8_578b:
                    do {
                      do {
                        uStack_6 = 0x5a2;
                        iStack_8 = unaff_BP + -0x14;
                        iStack_a = 0x21e0;
                        iStack_c = unaff_BP + -0x1cc;
                        uStack_10 = 0x329;
                        iStack_e = iVar9;
                        FUN_21f2_3454();
                        uStack_6 = 1;
                        iStack_8 = 0x22b2;
                        iStack_a = 0x33e;
                        func_0x00001d33();
                        uStack_6 = unaff_BP + -0x21e;
                        iStack_8 = unaff_BP + -0x1cc;
                        *(undefined2 *)0xc20 = 1;
                        iStack_a = 1;
                        iStack_c = 0xad;
                        iVar9 = 0x1bb4;
                        iStack_e = 0x361;
                        iVar10 = FUN_1def_0904();
                        *(int *)(unaff_BP + -0x1f0) = iVar10;
                        *(undefined2 *)0xc20 = 0;
                        if (*(int *)0x158 != 0) {
                          return;
                        }
                        if (iVar10 == -1) {
                          halt_baddata();
                        }
                        if (iVar10 == 1) {
                          *(undefined2 *)(unaff_BP + -0x146) = 0;
                          *(int *)(unaff_BP + -0x1e6) = *(int *)(unaff_BP + -0x1e6) + 1;
                          if (3 < *(int *)(unaff_BP + -0x1e6)) {
                            *(undefined2 *)(unaff_BP + -0x1e6) = 0;
                          }
                        }
                      } while (*(int *)(unaff_BP + -0x146) == 0);
                      iVar10 = iVar9;
                      if (0xb < *(byte *)0x123) {
                        iVar9 = 0x7a6;
                        iVar11 = func_0x00007a6a();
                        iVar10 = iVar9;
                        if (iVar11 != 0) {
                          uStack_6 = *(undefined2 *)(unaff_BP + -0x21c);
                          iStack_8 = *(undefined2 *)(unaff_BP + -0x21e);
                          iStack_a = 1;
                          pcVar6 = (code *)swi(0x3f);
                          (*pcVar6)();
                          goto LAB_3ab8_578b;
                        }
                      }
                      uStack_6 = *(int *)(unaff_BP + -0x146);
                      iVar9 = 0x11f2;
                      iStack_a = 1000;
                      iStack_8 = iVar10;
                      iVar10 = func_0x00015409();
                    } while (iVar10 == 0);
                    uVar17 = *(undefined2 *)(unaff_BP + -0x21c);
                    *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x21e);
                    *(undefined2 *)(unaff_BP + -0x142) = uVar17;
                    uVar17 = *(undefined2 *)(unaff_BP + -0x230);
                    *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x232);
                    *(undefined2 *)(unaff_BP + -0x15a) = uVar17;
                  }
                  if (*(int *)(unaff_BP + -0x1fe) == 0) {
                    *(undefined2 *)(unaff_BP + -0x1fe) = 1;
                  }
LAB_3ab8_589f:
                  if (*(int *)(unaff_BP + -0x1fe) == 4) {
                    do {
                      do {
                        do {
                          uStack_6 = 0x65e;
                          iStack_8 = 0x21ec;
                          iStack_a = unaff_BP + -0x1cc;
                          iStack_e = 0x443;
                          iStack_c = iVar9;
                          FUN_21f2_3454();
                          uStack_6 = unaff_BP + -0x21e;
                          iStack_8 = unaff_BP + -0x1cc;
                          *(undefined2 *)0xc20 = 1;
                          iStack_a = 1;
                          iStack_c = 0x22b2;
                          iVar9 = 0x1bb4;
                          iStack_e = 0x466;
                          iVar10 = FUN_1def_0904();
                          *(int *)(unaff_BP + -0x1f0) = iVar10;
                          *(undefined2 *)0xc20 = 0;
                          if (*(int *)0x158 != 0) {
                            return;
                          }
                          if (iVar10 == -1) goto LAB_3ab8_576c;
                        } while (*(int *)(unaff_BP + -0x146) == 0);
                        uStack_6 = *(int *)(unaff_BP + -0x146);
                        iStack_8 = 0x1bb4;
                        iVar9 = 0x11f2;
                        iStack_a = 0x49f;
                        iVar10 = func_0x00015409();
                        uVar7 = 0;
                        uVar18 = iVar10 == 0;
                      } while ((bool)uVar18);
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x0002996b();
                      FUN_28b3_0ee9();
                      func_0x00029834();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x0002996b();
                      func_0x00029ae7();
                      func_0x00029d78();
                      iVar9 = 0x22b2;
                      FUN_28b3_1181();
                      if (!(bool)uVar7 && !(bool)uVar18) break;
                      func_0x00029834();
                      func_0x000297e6();
                      func_0x00029ae7();
                      func_0x00029d78();
                      iVar9 = 0x22b2;
                      FUN_28b3_1181();
                    } while ((bool)uVar7 || (bool)uVar18);
                  }
                  uVar17 = *(undefined2 *)0x9480;
                  uVar5 = *(undefined2 *)0x9482;
                  *(undefined2 *)(unaff_BP + -500) = uVar17;
                  *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
                  *(undefined2 *)(unaff_BP + -0x204) = uVar17;
                  *(undefined2 *)(unaff_BP + -0x202) = uVar5;
                  iVar10 = iVar9;
LAB_3ab8_59bb:
                  while( true ) {
                    if (*(int *)(unaff_BP + -0x1fe) != 3) goto LAB_3ab8_5b18;
                    uVar17 = *(undefined2 *)0x106e;
                    *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x106c;
                    *(undefined2 *)(unaff_BP + -0x218) = uVar17;
                    uVar17 = *(undefined2 *)0x1072;
                    *(undefined2 *)(unaff_BP + -0x1d0) = *(undefined2 *)0x1070;
                    *(undefined2 *)(unaff_BP + -0x1ce) = uVar17;
                    uStack_6 = 0x21fb;
                    iStack_8 = 3;
                    iStack_a = 0x2712;
                    iVar9 = 0xad;
                    iStack_e = 0x57e;
                    iStack_c = iVar10;
                    iVar10 = func_0x00001dd5();
                    *(int *)(unaff_BP + -0x1f0) = iVar10;
                    if (*(int *)0x158 != 0) {
                      return;
                    }
                    uVar7 = iVar10 != -1;
                    uVar18 = iVar10 == -1;
                    if ((bool)uVar18) break;
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if (!(bool)uVar18) {
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if (!(bool)uVar18) {
                        func_0x000297e6();
                        func_0x000297e6();
                        FUN_28b3_1181();
                        if ((bool)uVar7 || (bool)uVar18) {
                          func_0x000297e6();
                          func_0x000297e6();
                          FUN_28b3_1181();
                          if ((bool)uVar7 || (bool)uVar18) {
                            func_0x000297e6();
                            func_0x000297e6();
                            FUN_28b3_1181();
                            if (!(bool)uVar7) {
                              func_0x000297e6();
                              func_0x000297e6();
                              FUN_28b3_1181();
                              if (!(bool)uVar7) {
                                uVar17 = *(undefined2 *)(unaff_BP + -0x1ce);
                                *(undefined2 *)0x1070 = *(undefined2 *)(unaff_BP + -0x1d0);
                                *(undefined2 *)0x1072 = uVar17;
                                func_0x000297e6();
                                func_0x0002996b();
                                iVar10 = 0x22b2;
                                func_0x00029983();
                                uVar17 = *(undefined2 *)(unaff_BP + -0x1ce);
                                *(undefined2 *)(unaff_BP + -0x204) =
                                     *(undefined2 *)(unaff_BP + -0x1d0);
                                *(undefined2 *)(unaff_BP + -0x202) = uVar17;
                                goto LAB_3ab8_5b18;
                              }
                            }
                          }
                        }
                      }
                    }
                    uStack_6 = 0x636;
                    func_0x00012276();
                    *(undefined2 *)0xc22 = 1;
                    uStack_6 = 0x11f2;
                    iStack_8 = 0x64a;
                    FUN_1000_0599();
                    uStack_6 = 0xdef;
                    iVar10 = 0x11f2;
                    iStack_8 = 0x659;
                    func_0x00012276();
                  }
                } while( true );
              }
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x000299b9();
              func_0x000299d1();
              func_0x00029834();
              func_0x000299d1();
              func_0x00029834();
              iStack_a = 0x22b2;
              iStack_c = 0x7a4;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x7a9;
              func_0x0002a11e();
              func_0x00029834();
              func_0x00029983();
              uStack_6 = *(int *)(unaff_BP + -0x13a);
              iStack_8 = *(int *)(unaff_BP + -0x13c);
              iStack_a = 0x22b2;
              iStack_c = 0x7d1;
              func_0x0002a10c();
              func_0x00029834();
              iVar10 = 0x22b2;
              func_0x00029983();
              uVar17 = *(undefined2 *)0x9480;
              uVar5 = *(undefined2 *)0x9482;
              *(undefined2 *)(unaff_BP + -500) = uVar17;
              *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
              *(undefined2 *)(unaff_BP + -0x204) = uVar17;
              *(undefined2 *)(unaff_BP + -0x202) = uVar5;
            }
            *(undefined2 *)(unaff_BP + -0x124) = 0;
            if ((*(int *)(unaff_BP + -0x1fe) == 3) || (*(int *)(unaff_BP + -0x1fe) == 4)) {
              *(undefined2 *)(unaff_BP + -0x124) = 1;
            }
          } while( true );
        }
LAB_3ab8_6782:
        *(undefined1 *)0xb49c = 0;
        if (*(char *)0xb1ea == '\0') {
          if ((*(char *)0x22b0 != '\0') && (iVar9 = FUN_4375_76b1(), iVar9 != 0)) {
            halt_baddata();
          }
          if (*(int *)0x158 != 0) {
            return;
          }
        }
        *(undefined2 *)(unaff_BP + -0x10e) = 0;
        uVar17 = *(undefined2 *)0x14a;
        *(undefined2 *)(unaff_BP + -0x22a) = *(undefined2 *)0x148;
        *(undefined2 *)(unaff_BP + -0x228) = uVar17;
        uVar17 = *(undefined2 *)0x14e;
        *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)0x14c;
        *(undefined2 *)(unaff_BP + -0x162) = uVar17;
        *(undefined2 *)(unaff_BP + -0x10c) = *(undefined2 *)0x150;
        *(undefined2 *)(unaff_BP + -0x210) = *(undefined2 *)0x152;
        while (*(int *)(unaff_BP + -0x1fe) == 5) {
          uStack_6 = unaff_BP + -0x1cc;
          iStack_a = 0x1378;
          iStack_8 = iVar10;
          FUN_21f2_3454();
          uStack_6 = unaff_BP + -0x21e;
          iStack_8 = unaff_BP + -0x1cc;
          iStack_a = 1;
          iStack_c = 0x22b2;
          iStack_e = 0x1398;
          iVar9 = FUN_1def_0904();
          *(int *)(unaff_BP + -0x1f0) = iVar9;
          if (*(int *)0x158 != 0) {
            return;
          }
          if (iVar9 == -1) {
            halt_baddata();
          }
          *(undefined1 *)0xb8c = 1;
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0x13ce;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0x13d7;
          func_0x000297e6();
          iStack_a = 0x22b2;
          iStack_c = 0x13dc;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x13e6;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          iVar10 = 0x11f2;
          uStack_14 = 0x13eb;
          lVar21 = FUN_13bf_39a0();
          *(uint *)(unaff_BP + -0x14c) = (uint)lVar21;
          *(undefined2 *)(unaff_BP + -0x14a) = (int)((ulong)lVar21 >> 0x10);
          if (lVar21 == 0) {
            *(undefined1 *)0xb8c = 0;
          }
          else {
            *(undefined1 *)0xb8c = 0;
            if (-1 < *(int *)(unaff_BP + -0x14a)) {
              if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
                *(undefined2 *)(unaff_BP + -0x10e) = 0;
                uVar17 = *(undefined2 *)0x14a;
                *(undefined2 *)(unaff_BP + -0x22a) = *(undefined2 *)0x148;
                *(undefined2 *)(unaff_BP + -0x228) = uVar17;
                uVar17 = *(undefined2 *)0x14e;
                *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)0x14c;
                *(undefined2 *)(unaff_BP + -0x162) = uVar17;
                *(undefined2 *)(unaff_BP + -0x10c) = *(undefined2 *)0x150;
                uVar17 = *(undefined2 *)0x152;
                *(undefined2 *)(unaff_BP + -0x210) = uVar17;
                if (*(char *)0x22b0 != '\0') {
                  iVar9 = FUN_4375_76b1();
                  uVar17 = 0;
                  if (iVar9 != 0) {
                    halt_baddata();
                  }
                }
                if (*(int *)0x158 != 0) {
                  return;
                }
                uStack_6 = CONCAT11((char)((uint)uVar17 >> 8),*(undefined1 *)0x22b0);
                iStack_8 = *(int *)(unaff_BP + -0x14a);
                iStack_a = *(int *)(unaff_BP + -0x14c);
                iStack_c = 1;
                iStack_e = 0x11f2;
                uStack_10 = 0x14b5;
                iVar9 = FUN_3ab8_7ce2();
                if (iVar9 == 0) {
                  halt_baddata();
                }
                if (*(int *)0x158 != 0) {
                  return;
                }
                *(undefined2 *)(unaff_BP + -0x10e) = 1;
              }
              else {
                uStack_6 = (uint)lVar21 & 0xff00;
                iStack_8 = *(int *)(unaff_BP + -0x14a);
                iStack_a = *(int *)(unaff_BP + -0x14c);
                iStack_c = 0;
                iStack_e = 0x11f2;
                uStack_10 = 0x14e5;
                iVar9 = FUN_3ab8_7ce2();
                if (iVar9 == 0) {
                  halt_baddata();
                }
                if (*(int *)0x158 != 0) {
                  return;
                }
                uStack_6 = 0x1501;
                func_0x0000daa6();
                uStack_6 = 0x150b;
                func_0x00008095();
                *(undefined2 *)(unaff_BP + -0x10e) = 0;
              }
              uStack_6 = 0x151a;
              func_0x0000daa6();
              *(undefined2 *)0xbc0 = 1;
              func_0x0000abfa();
              goto LAB_3ab8_6c00;
            }
            uStack_6 = 0x1417;
            func_0x00012276();
            *(undefined2 *)0xc22 = 1;
            uStack_6 = 0x11f2;
            iStack_8 = 0x142b;
            FUN_1000_0599();
            iVar10 = 0x11f2;
            uStack_6 = 0x1436;
            func_0x00012276();
          }
        }
        if (*(int *)0x158 != 0) {
          return;
        }
LAB_3ab8_69b3:
        uVar17 = *(undefined2 *)0x14a;
        *(undefined2 *)(unaff_BP + -0x22a) = *(undefined2 *)0x148;
        *(undefined2 *)(unaff_BP + -0x228) = uVar17;
        uVar17 = *(undefined2 *)0x14e;
        *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)0x14c;
        *(undefined2 *)(unaff_BP + -0x162) = uVar17;
        *(undefined2 *)(unaff_BP + -0x10c) = *(undefined2 *)0x150;
        *(undefined2 *)(unaff_BP + -0x210) = *(undefined2 *)0x152;
        *(undefined2 *)(unaff_BP + -0x10e) = 0;
        uStack_6 = 0x156b;
        func_0x0000daa6();
        func_0x0000c3ca();
        *(undefined1 *)0xb49c = 0;
        if ((((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 2)) ||
            (*(int *)(unaff_BP + -0x1fe) == 3)) ||
           ((*(int *)(unaff_BP + -0x1fe) == 4 || (*(int *)(unaff_BP + -0x1fe) == 6)))) {
          if ((*(int *)(unaff_BP + -0x1fe) != 3) && (*(int *)(unaff_BP + -0x1fe) != 4)) {
            uVar17 = *(undefined2 *)0x9480;
            uVar5 = *(undefined2 *)0x9482;
            *(undefined2 *)(unaff_BP + -500) = uVar17;
            *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
            *(undefined2 *)(unaff_BP + -0x204) = uVar17;
            *(undefined2 *)(unaff_BP + -0x202) = uVar5;
          }
          if (*(int *)(unaff_BP + -0x1e6) != 0) {
            uStack_6 = 1;
            iStack_8 = 0x885;
            iVar9 = 0x1bb4;
            iStack_a = 0x15de;
            FUN_1def_0338();
            if (*(int *)(unaff_BP + -0x1e6) == 1) {
              uVar17 = *(undefined2 *)0x943e;
              *(undefined2 *)(unaff_BP + -0x1ea) = *(undefined2 *)0x943c;
              *(undefined2 *)(unaff_BP + -0x1e8) = uVar17;
            }
            if (*(int *)(unaff_BP + -0x1e6) == 2) {
              uVar17 = *(undefined2 *)0x943e;
              *(undefined2 *)(unaff_BP + -0x1d4) = *(undefined2 *)0x943c;
              *(undefined2 *)(unaff_BP + -0x1d2) = uVar17;
            }
            uVar7 = *(uint *)(unaff_BP + -0x1e6) < 3;
            if (*(uint *)(unaff_BP + -0x1e6) == 3) {
              func_0x000297e6();
              func_0x00029ae7();
              func_0x000297e6();
              func_0x00029ae7();
              iVar9 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar7) {
                uVar17 = *(undefined2 *)0x943e;
                *(undefined2 *)(unaff_BP + -0x1ea) = *(undefined2 *)0x943c;
                *(undefined2 *)(unaff_BP + -0x1e8) = uVar17;
              }
              else {
                uVar17 = *(undefined2 *)0x943e;
                *(undefined2 *)(unaff_BP + -0x1d4) = *(undefined2 *)0x943c;
                *(undefined2 *)(unaff_BP + -0x1d2) = uVar17;
              }
            }
            uStack_6 = 0;
            iStack_a = 0x1669;
            iStack_8 = iVar9;
            FUN_1def_0338();
          }
          uStack_6 = 0x1678;
          func_0x000297e6();
          uStack_6 = 0x167d;
          func_0x00029d78();
          iStack_c = 0x22b2;
          iStack_e = 0x1687;
          func_0x000299d1();
          iStack_c = 0x22b2;
          iStack_e = 0x1690;
          func_0x000297e6();
          iStack_c = 0x22b2;
          iStack_e = 0x1695;
          func_0x00029d78();
          uStack_14 = 0x22b2;
          uStack_16 = 0x169f;
          func_0x000299d1();
          uStack_14 = 0x22b2;
          uStack_16 = 0x16a8;
          func_0x000297e6();
          uStack_14 = 0x22b2;
          uStack_16 = 0x16ad;
          func_0x00029d78();
          uStack_1c = 0x22b2;
          uStack_1e = 0x16b7;
          func_0x000299d1();
          uStack_1c = 0x22b2;
          uStack_1e = 0x16c0;
          func_0x000297e6();
          uStack_1c = 0x22b2;
          uStack_1e = 0x16c5;
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
          FUN_4375_b4b4(0x22b2,unaff_BP + -0x10e,*(undefined1 *)0x22b0,*(undefined1 *)0x22b1,
                        *(undefined1 *)0x22b2);
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          uStack_6 = 5999;
          func_0x0000daa6();
          *(undefined2 *)0xbc0 = 1;
          func_0x0000abfa();
          *(undefined1 *)0xd14 = 2;
        }
      } while( true );
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_3ab8_600d:
  uVar17 = *(undefined2 *)0x1076;
  *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x1074;
  *(undefined2 *)(unaff_BP + -0x218) = uVar17;
  pcVar6 = (code *)swi(0x3f);
  iVar9 = (*pcVar6)();
  *(int *)(unaff_BP + -0x1f0) = iVar9;
  if (*(int *)0x158 != 0) {
    return;
  }
  if (iVar9 != -1) {
    func_0x000297e6();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c2c();
    func_0x000299b9();
    func_0x000299d1();
    func_0x00029834();
    func_0x000299d1();
    func_0x00029834();
    iStack_a = 0x22b2;
    iStack_c = 0xc3a;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xc3f;
    func_0x0002a11e();
    func_0x00029834();
    func_0x00029983();
    uStack_6 = *(int *)(unaff_BP + -0x13a);
    iStack_8 = *(int *)(unaff_BP + -0x13c);
    iStack_a = 0x22b2;
    iStack_c = 0xc67;
    func_0x0002a10c();
    func_0x00029834();
    iVar10 = 0x22b2;
    func_0x00029983();
    *(undefined2 *)(unaff_BP + -0x1fe) = 6;
  }
  goto LAB_3ab8_5c95;
LAB_3ab8_6188:
  if ((((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 3)) ||
      (*(int *)(unaff_BP + -0x1fe) == 4)) || (*(int *)(unaff_BP + -0x1fe) == 6)) {
    uVar17 = *(undefined2 *)(unaff_BP + -0x230);
    *(undefined2 *)(unaff_BP + -0x1d8) = *(undefined2 *)(unaff_BP + -0x232);
    *(undefined2 *)(unaff_BP + -0x1d6) = uVar17;
    func_0x000297e6();
    func_0x0002996b();
    FUN_28b3_100d();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029983();
    func_0x000297e6();
    iVar10 = 0x22b2;
    func_0x00029983();
    uVar17 = *(undefined2 *)(unaff_BP + -0x230);
    *(undefined2 *)(unaff_BP + -0x158) = *(undefined2 *)(unaff_BP + -0x232);
    *(undefined2 *)(unaff_BP + -0x156) = uVar17;
  }
  while (*(int *)(unaff_BP + -0x1fe) == 2) {
    uVar17 = *(undefined2 *)0x1066;
    *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x1064;
    *(undefined2 *)(unaff_BP + -0x218) = uVar17;
    uVar17 = *(undefined2 *)0x106a;
    *(undefined2 *)(unaff_BP + -0x1d0) = *(undefined2 *)0x1068;
    *(undefined2 *)(unaff_BP + -0x1ce) = uVar17;
    uStack_6 = 0x2236;
    iStack_8 = 2;
    iStack_a = 2;
    iStack_e = 0xe0e;
    iStack_c = iVar10;
    iVar9 = func_0x00001dd5();
    *(int *)(unaff_BP + -0x1f0) = iVar9;
    if (*(int *)0x158 != 0) {
      return;
    }
    uVar7 = iVar9 != -1;
    uVar18 = iVar9 == -1;
    if ((bool)uVar18) {
      halt_baddata();
    }
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029ae7();
    FUN_28b3_1181();
    if ((bool)uVar7 || (bool)uVar18) {
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029ae7();
      FUN_28b3_1181();
      if ((bool)uVar7 || (bool)uVar18) {
        uVar17 = *(undefined2 *)(unaff_BP + -0x218);
        *(undefined2 *)0x1064 = *(undefined2 *)(unaff_BP + -0x21a);
        *(undefined2 *)0x1066 = uVar17;
        uVar17 = *(undefined2 *)(unaff_BP + -0x1ce);
        *(undefined2 *)0x1068 = *(undefined2 *)(unaff_BP + -0x1d0);
        *(undefined2 *)0x106a = uVar17;
        func_0x000297e6();
        func_0x00029b6d();
        func_0x0002996b();
        func_0x00029b9d();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b85();
        func_0x00029983();
        *(undefined2 *)(unaff_BP + -0x1e6) = 0;
        uStack_6 = 0;
        iStack_8 = 0x22b2;
        iStack_a = 0xf1d;
        FUN_1def_0338();
        uVar17 = *(undefined2 *)(unaff_BP + -0x1e8);
        *(undefined2 *)(unaff_BP + -0x208) = *(undefined2 *)(unaff_BP + -0x1ea);
        *(undefined2 *)(unaff_BP + -0x206) = uVar17;
        uVar17 = *(undefined2 *)0x943c;
        uVar5 = *(undefined2 *)0x943e;
        *(undefined2 *)(unaff_BP + -0x144) = uVar17;
        *(undefined2 *)(unaff_BP + -0x142) = uVar5;
        *(undefined2 *)(unaff_BP + -0x15c) = uVar17;
        *(undefined2 *)(unaff_BP + -0x15a) = uVar5;
        func_0x000297e6();
        func_0x0002996b();
        iVar10 = 0x22b2;
        func_0x00029983();
        uVar17 = *(undefined2 *)(unaff_BP + -0x1e8);
        *(undefined2 *)(unaff_BP + -0x1d8) = *(undefined2 *)(unaff_BP + -0x1ea);
        *(undefined2 *)(unaff_BP + -0x1d6) = uVar17;
        uVar17 = *(undefined2 *)0x9480;
        uVar5 = *(undefined2 *)0x9482;
        *(undefined2 *)(unaff_BP + -500) = uVar17;
        *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
        *(undefined2 *)(unaff_BP + -0x204) = uVar17;
        *(undefined2 *)(unaff_BP + -0x202) = uVar5;
        break;
      }
    }
    uStack_6 = 0xe79;
    func_0x00012276();
    *(undefined2 *)0xc22 = 1;
    uStack_6 = 0x11f2;
    iStack_8 = 0xe8d;
    FUN_1000_0599();
    uStack_6 = 0xdef;
    iVar10 = 0x11f2;
    iStack_8 = 0xe9c;
    func_0x00012276();
  }
  goto LAB_3ab8_6409;
}



/* 3ab8:768f  FUN_3ab8_768f  55 bytes, 1 callers */

void __cdecl16far FUN_3ab8_768f(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return;
}



/* 3ab8:76c6  FUN_3ab8_76c6  246 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_76c6(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 *param_9,undefined2 *param_10)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  
  FUN_21f2_0ebc();
  FUN_1def_05d1(0x22b2,1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x0001e558(0x1bb4,1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x000297e6(0x1bb4);
  func_0x0002996b(0x22b2);
  func_0x00029af6(0x22b2);
  func_0x00029d78(0x22b2);
  uVar2 = 0x22c7;
  func_0x000299b9(0x22b2);
  func_0x000299d1(0x22b2,param_5,param_6,uVar2);
  uVar2 = 0x22d9;
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2,param_1,param_2,uVar2);
  puVar1 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
  uVar2 = puVar1[1];
  *param_9 = *puVar1;
  param_9[1] = uVar2;
  uVar2 = 0x2305;
  func_0x00029834(0x1bb4);
  func_0x000299d1(0x22b2,param_5,param_6,uVar2);
  uVar2 = 0x2317;
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2,param_1,param_2,uVar2);
  puVar1 = (undefined2 *)func_0x0001e558(0x22b2,0);
  uVar2 = puVar1[1];
  *param_10 = *puVar1;
  param_10[1] = uVar2;
  return;
}



/* 3ab8:77bc  FUN_3ab8_77bc  1318 bytes, 1 callers */

void __cdecl16far FUN_3ab8_77bc(int param_1)

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
  byte local_3a;
  byte local_39;
  undefined2 local_38;
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
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 uStack_12;
  int local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  uStack_c = 0x2351;
  puVar8 = (undefined2 *)func_0x00000398();
  puVar5 = (undefined2 *)puVar8;
  puVar4 = &local_50;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  if (param_1 == 0) {
    puVar5 = &local_1e;
    puVar4 = &local_50;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = *puVar8;
    }
    local_20 = 0;
    local_22 = 0;
    local_24 = 0x237d;
    func_0x00019593();
  }
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029983();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029983();
  FUN_28b3_0d8b();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029b85();
  func_0x00029c2c();
  func_0x00029983();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0x243f;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0x2444;
  FUN_28b3_1582();
  uVar6 = (undefined1 *)0xfff7 < &local_e;
  func_0x00029834();
  func_0x0002996b();
  func_0x00029d78();
  FUN_28b3_1181();
  if ((bool)uVar6) {
    local_38 = *(undefined2 *)0x943c;
    local_36 = *(undefined2 *)0x943e;
  }
  else {
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029983();
  }
  uStack_c = 0x22b2;
  local_e = 0x24be;
  func_0x000297e6();
  uStack_c = 0x22b2;
  local_e = 0x24c3;
  func_0x00029d78();
  local_14 = 0x22b2;
  local_16 = 0x24cd;
  func_0x000299d1();
  local_14 = 0x22b2;
  local_16 = 0x24d5;
  func_0x000297e6();
  local_14 = 0x22b2;
  local_16 = 0x24da;
  func_0x00029d78();
  local_1c = 0x22b2;
  local_1e = 0x24e4;
  func_0x000299d1();
  local_1c = 0x22b2;
  local_1e = 0x24e8;
  FUN_3ab8_76c6();
  uStack_c = 0x22b2;
  local_e = 0x24fb;
  func_0x000297e6();
  uStack_c = 0x22b2;
  local_e = 0x2500;
  func_0x00029d78();
  local_14 = 0x22b2;
  local_16 = 0x250a;
  func_0x000299d1();
  local_14 = 0x22b2;
  local_16 = 0x2512;
  func_0x000297e6();
  local_14 = 0x22b2;
  local_16 = 0x2517;
  func_0x00029d78();
  local_1c = 0x22b2;
  local_1e = 0x2521;
  func_0x000299d1();
  local_1c = 0x22b2;
  local_1e = 0x2525;
  FUN_3ab8_76c6();
  uStack_c = 0x22b2;
  local_e = 0x2538;
  func_0x000297e6();
  uStack_c = 0x22b2;
  local_e = 0x2540;
  func_0x00029b6d();
  uStack_c = 0x22b2;
  local_e = 0x2548;
  func_0x0002996b();
  uStack_c = 0x22b2;
  local_e = 0x2550;
  func_0x00029bb5();
  uStack_c = 0x22b2;
  local_e = 0x2555;
  func_0x00029d78();
  local_14 = 0x22b2;
  local_16 = 0x255f;
  func_0x000299d1();
  local_14 = 0x22b2;
  local_16 = 0x2567;
  func_0x000297e6();
  local_14 = 0x22b2;
  local_16 = 0x256f;
  func_0x00029b6d();
  local_14 = 0x22b2;
  local_16 = 0x2577;
  func_0x0002996b();
  local_14 = 0x22b2;
  local_16 = 0x257f;
  func_0x00029b55();
  local_14 = 0x22b2;
  local_16 = 0x2584;
  func_0x00029d78();
  local_1c = 0x22b2;
  local_1e = 0x258e;
  func_0x000299d1();
  local_1c = 0x22b2;
  local_1e = 0x2592;
  FUN_3ab8_76c6();
  uStack_c = 0x22b2;
  local_e = 0x25a5;
  func_0x000297e6();
  uStack_c = 0x22b2;
  local_e = 0x25ad;
  func_0x00029bb5();
  uStack_c = 0x22b2;
  local_e = 0x25b2;
  func_0x00029d78();
  local_14 = 0x22b2;
  local_16 = 0x25bc;
  func_0x000299d1();
  local_14 = 0x22b2;
  local_16 = 0x25c4;
  func_0x000297e6();
  local_14 = 0x22b2;
  local_16 = 0x25cc;
  FUN_28b3_100d();
  local_14 = 0x22b2;
  local_16 = 0x25d1;
  func_0x00029d78();
  local_1c = 0x22b2;
  local_1e = 0x25db;
  func_0x000299d1();
  local_1c = 0x22b2;
  local_1e = 0x25df;
  FUN_3ab8_76c6();
  if (((local_3a & 0xc0) != 0) || ((local_39 & 0x80) != 0)) goto LAB_3ab8_7c9f;
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  func_0x00029983();
  func_0x00029834();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  func_0x00029b6d();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0x2661;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0x2666;
  FUN_28b3_1582();
  uVar6 = (undefined1 *)0xfff7 < &local_e;
  uVar7 = &stack0x0000 == (undefined1 *)0x6;
  func_0x00029834();
  func_0x0002996b();
  func_0x00029d78();
  FUN_28b3_1181();
  if ((bool)uVar6) {
    local_38 = *(undefined2 *)0x943c;
    local_36 = *(undefined2 *)0x943e;
  }
  else {
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029983();
  }
  local_10 = 0;
  func_0x00029834();
  func_0x000297e6();
  func_0x00029ae7();
  func_0x00029d78();
  FUN_28b3_1181();
  if ((bool)uVar6 || (bool)uVar7) {
    uVar6 = 0;
    uVar7 = (local_3a & 0x20) == 0;
    if ((bool)uVar7) {
      func_0x000297e6();
      goto LAB_3ab8_7bb1;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar6 && !(bool)uVar7) goto LAB_3ab8_7bbd;
  }
  else {
    func_0x000297e6();
LAB_3ab8_7bb1:
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar6) {
LAB_3ab8_7bbd:
      local_10 = 1;
    }
  }
  uVar6 = 0;
  if (local_10 != 0) {
    uStack_c = 0x22b2;
    local_e = 0x2754;
    FUN_3ab8_768f();
    uStack_c = 0x22b2;
    local_e = 0x2762;
    FUN_3ab8_768f();
    uStack_c = 0x22b2;
    local_e = 0x2770;
    FUN_3ab8_768f();
    uStack_c = 0x22b2;
    local_e = 0x277e;
    FUN_3ab8_768f();
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029983();
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029b6d();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029b6d();
  FUN_28b3_1163();
  FUN_28b3_1181();
  if ((bool)uVar6) {
    local_18 = local_28;
    local_16 = local_26;
    local_24 = local_34;
    local_22 = local_32;
    local_20 = local_30;
    local_1e = local_2e;
    local_2c = local_54;
    local_2a = local_52;
  }
LAB_3ab8_7c9f:
  local_50 = local_18;
  local_4e = local_16;
  local_4c = local_24;
  local_4a = local_22;
  local_48 = local_20;
  local_46 = local_1e;
  local_44 = local_2c;
  local_42 = local_2a;
  puVar5 = (undefined2 *)0xc3a0;
  puVar4 = &local_50;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = *puVar8;
  }
  return;
}



/* 3ab8:7ce2  FUN_3ab8_7ce2  3008 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_7ce2(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,char param_5,
             char param_6)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 extraout_DX;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined1 local_da;
  byte local_d9;
  undefined2 *local_d6;
  undefined2 *local_c6;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  uint local_b4;
  int local_b2;
  int local_b0;
  int local_ae;
  int local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  uint local_92;
  int local_90;
  uint local_8e;
  int local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  int local_7e;
  undefined2 local_7c;
  undefined2 local_7a [8];
  undefined1 local_6a;
  undefined1 local_69;
  byte local_66;
  undefined2 local_64 [13];
  undefined1 local_4a;
  undefined1 local_49;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined1 local_34;
  byte local_33;
  undefined1 local_32;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uVar15;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_12;
  uint local_10;
  undefined4 local_e;
  
  FUN_21f2_0ebc();
  local_86 = *(undefined2 *)0x94a8;
  uStack_84 = *(undefined2 *)0x94aa;
  uStack_82 = *(undefined2 *)0x94ac;
  uStack_80 = *(undefined2 *)0x94ae;
  *(undefined1 *)0xb49c = 0;
  local_e._0_2_ = (undefined2 *)0x288c;
  local_e._2_2_ = 0x22b2;
  func_0x0000013f();
  FUN_28b3_0c98();
  func_0x00029d78();
  local_10 = 0x22b2;
  local_12 = 0x28a9;
  func_0x000299d1();
  local_10 = param_3;
  local_12 = param_2;
  bVar4 = 0x22;
  bVar1 = 0x22;
  local_18._2_2_ = 0x28b4;
  func_0x0000013f();
  local_10 = 0;
  local_12 = 0x28c2;
  FUN_28b3_0c98();
  local_10 = 0x22b2;
  local_12 = 0x28c7;
  func_0x00029d78();
  local_18._0_2_ = 0x22b2;
  local_1c._2_2_ = 0x28d1;
  func_0x000299d1();
  local_18._0_2_ = param_3;
  local_1c._2_2_ = param_2;
  local_1c._0_2_ = 0x22b2;
  uVar15 = 0x28dc;
  func_0x0000013f();
  local_18._0_2_ = 0;
  local_1c._2_2_ = 0x28ea;
  FUN_28b3_0c98();
  local_18._0_2_ = 0x22b2;
  local_1c._2_2_ = 0x28ef;
  func_0x00029d78();
  uStack_22 = 0x28f9;
  func_0x000299d1();
  uStack_22 = param_2;
  uStack_24 = 0x22b2;
  local_26 = 0x2904;
  func_0x0000013f();
  uStack_22 = 0x290f;
  FUN_28b3_0c98();
  uStack_22 = 0x2914;
  func_0x00029d78();
  local_2a = 0x291e;
  func_0x000299d1();
  local_2a = 0x2923;
  iVar6 = FUN_1def_043a();
  if (iVar6 == 0) {
    local_7c = 0;
  }
  else {
    local_7c = 0;
    local_b4 = *(uint *)0x148;
    local_b2 = *(int *)0x14a;
    local_8e = *(uint *)0x14c;
    local_8c = *(int *)0x14e;
    local_7e = *(int *)0x150;
    local_b0 = *(int *)0x152;
    local_92 = 1;
    local_90 = 0;
    local_e._2_2_ = 0x1bb4;
    while( true ) {
      if ((local_b2 < local_90) || ((local_b2 <= local_90 && (local_b4 < local_92)))) break;
      uVar11 = 0;
      local_e._0_2_ = (undefined2 *)0x2a10;
      puVar14 = (undefined2 *)func_0x0000013f();
      puVar8 = (undefined2 *)puVar14;
      puVar7 = local_7a;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar3;
      }
      if ((local_66 & 2) != 0) {
        puVar7 = &local_44;
        puVar8 = local_7a;
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar14 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar3 = *puVar14;
        }
        local_e._2_2_ = 0;
        local_e._0_2_ = (undefined2 *)0x2a41;
        local_32 = FUN_4375_b44b();
        if (local_33 < 0x5a) {
          if (param_5 != '\0') {
            local_33 = *(byte *)0xa6a;
          }
          if (param_6 != '\0') {
            local_34 = *(undefined1 *)0xa6c;
          }
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2a79;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2a81;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2a8b;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2a94;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_8a = *puVar7;
          local_88 = puVar7[1];
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2ab8;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2ac0;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2aca;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2ad3;
          func_0x0001e558();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x2b03;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2b0c;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2b16;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2b1e;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_44 = *puVar7;
          local_42 = puVar7[1];
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x2b41;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2b4a;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2b54;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2b5c;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_40 = *puVar7;
          local_3e = puVar7[1];
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2b7e;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2b86;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2b90;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2b99;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_96 = *puVar7;
          local_94 = puVar7[1];
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2bbd;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2bc5;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2bcf;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2bd8;
          func_0x0001e558();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x2c08;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2c11;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2c1b;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2c23;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_3c = *puVar7;
          local_3a = puVar7[1];
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x2c46;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2c4f;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2c59;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          uVar11 = 0x1bb4;
          local_1c._0_2_ = 0x2c61;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_38 = *puVar7;
          local_36 = puVar7[1];
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        if (param_1 == 0) {
          if (local_33 < 0x5a) {
            local_69 = 0;
            local_6a = 1;
            puVar8 = (undefined2 *)&stack0xffe2;
            puVar7 = local_7a;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            uStack_22 = 0x29b8;
            func_0x00018396();
            uVar11 = 0;
            local_e._0_2_ = (undefined2 *)0x29c8;
            local_e._2_2_ = 0x11f2;
            local_c6 = (undefined2 *)func_0x0000013f();
            puVar8 = (undefined2 *)local_c6;
            puVar7 = &local_44;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            goto LAB_3ab8_7e5e;
          }
        }
        else {
          puVar9 = &local_1c;
          puVar7 = &local_44;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = (undefined2 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 2);
            puVar14 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar14;
          }
          iVar6 = FUN_4375_7430();
          uVar15 = uVar11;
          if (iVar6 != 0) {
LAB_3ab8_7e5e:
            local_7c = 1;
          }
        }
      }
      bVar12 = 0xfffe < local_92;
      local_92 = local_92 + 1;
      local_90 = local_90 + (uint)bVar12;
      local_e._2_2_ = uVar11;
    }
    local_90 = 0;
    for (local_92 = 1; (local_90 <= local_8c && ((local_90 < local_8c || (local_92 <= local_8e))));
        local_92 = local_92 + 1) {
      uVar11 = 0;
      local_e._0_2_ = (undefined2 *)0x2d49;
      puVar14 = (undefined2 *)func_0x00000271();
      puVar8 = (undefined2 *)puVar14;
      puVar7 = &local_2e;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar3;
      }
      if ((local_10 & 2) != 0) {
        puVar7 = local_64;
        puVar8 = &local_2e;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar14 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar3 = *puVar14;
        }
        local_e._2_2_ = 0;
        local_e._0_2_ = (undefined2 *)0x2d7a;
        uVar5 = FUN_4375_b44b();
        local_12 = CONCAT11(local_12._1_1_,uVar5);
        if (bVar1 < 0x5a) {
          if (param_5 != '\0') {
            bVar1 = *(byte *)0xa6a;
            bVar4 = bVar1;
          }
          if (param_6 != '\0') {
            bVar1 = bVar4;
          }
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2db2;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2dba;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2dc4;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2dcd;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_8a = *puVar7;
          local_88 = puVar7[1];
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2df1;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2df9;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2e03;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2e0c;
          func_0x0001e558();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x2e3c;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2e45;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2e4f;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2e57;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_2e = *puVar7;
          local_2c = puVar7[1];
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x2e7a;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2e83;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2e8d;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2e95;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_2a = *puVar7;
          local_b8 = 0;
          local_ba = 0;
          local_bc = local_18._2_2_;
          local_be = (undefined2)local_18;
          func_0x00029da5();
          func_0x00029c2c();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x2ee4;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2ee9;
          func_0x0002a11e();
          func_0x00029834();
          func_0x00029b6d();
          func_0x00029bb5();
          func_0x00029983();
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x2f20;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2f25;
          func_0x0002a10c();
          func_0x00029834();
          func_0x00029b6d();
          func_0x00029bb5();
          func_0x0002996b();
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = 0x2f58;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2f61;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2f6b;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2f74;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_96 = *puVar7;
          local_94 = puVar7[1];
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2f99;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2fa2;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2fac;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2fb5;
          func_0x0001e558();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x2fe5;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2fee;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2ff8;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x3000;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_8a = *puVar7;
          local_88 = puVar7[1];
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x3025;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x302e;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x3038;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x3040;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_9a = *puVar7;
          local_98 = puVar7[1];
          func_0x000297e6();
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = 0x306a;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x3073;
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x3078;
          func_0x00029d78();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x3082;
          func_0x000299d1();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x308b;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x3090;
          func_0x00029d78();
          uStack_22 = 0x309a;
          func_0x000299d1();
          uStack_22 = 0x30a3;
          func_0x000297e6();
          uStack_22 = 0x30a8;
          func_0x00029d78();
          local_2a = 0x30b2;
          func_0x000299d1();
          local_2a = 0x30b7;
          local_18 = FUN_1000_0718();
          local_a2 = 0x22b2;
          local_e = (undefined2 *)0xdef30e0;
          local_a0 = uVar15;
          func_0x00021eee();
          uVar11 = 0x1bb4;
          local_e._0_2_ = (undefined2 *)0x30fc;
          local_e._2_2_ = 0x1bb4;
          local_1c = func_0x00021eee();
          uVar15 = extraout_DX;
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        if (param_1 == 0) {
          if (bVar1 < 0x5a) {
            local_49 = 0;
            local_4a = 1;
            puVar8 = &local_26;
            puVar7 = local_64;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            local_2a = 0x2cf1;
            FUN_12c1_0f1d();
            local_e._2_2_ = local_92;
            local_e._0_2_ = (undefined2 *)0x11f2;
            uVar11 = 0;
            local_10 = 0x2d01;
            local_d6 = (undefined2 *)func_0x00000271();
            puVar8 = (undefined2 *)local_d6;
            puVar7 = &local_2e;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            local_7c = 1;
          }
        }
        else {
          puVar8 = &local_26;
          puVar10 = &local_26;
          puVar7 = &local_2e;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            puVar14 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar14;
          }
          uVar11 = 0x11f2;
          local_2a = 0x2ca2;
          iVar6 = FUN_13bf_01c1();
          if (iVar6 != 0) {
            local_7c = 1;
            puVar7 = &local_2e;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            local_2a = *(undefined2 *)0x14c;
            local_2c = 0x11f2;
            uVar11 = 0x11f2;
            local_2e = 0x2cca;
            func_0x00018977();
          }
        }
      }
      local_90 = local_90 + (uint)(0xfffe < local_92);
      local_e._2_2_ = uVar11;
    }
    for (local_a4 = 1; local_a4 <= local_7e; local_a4 = local_a4 + 1) {
      local_e._2_2_ = 0x314b;
      uVar13 = func_0x00000398();
      if ((*(byte *)((int)uVar13 + 0x16) & 2) != 0) {
        local_e._2_2_ = 0x3160;
        uVar13 = func_0x00000398();
        if (*(byte *)((int)uVar13 + 0x14) < 0x5a) {
          local_e = (undefined2 *)CONCAT22(0x3174,(undefined2 *)local_e);
          func_0x0000daa6();
          local_e = (undefined2 *)0x8853180;
          FUN_3ab8_77bc();
          if (param_1 == 0) {
            local_e._2_2_ = 0x3118;
            local_d6 = (undefined2 *)func_0x00000398();
            puVar8 = (undefined2 *)local_d6;
            puVar7 = (undefined2 *)0xc3a0;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
          }
          else {
            local_e._2_2_ = 0x885;
            local_e._0_2_ = (undefined2 *)0x3196;
            uVar5 = FUN_4375_b44b();
            *(undefined1 *)0xc3b5 = uVar5;
            puVar8 = (undefined2 *)&stack0xffe2;
            puVar7 = (undefined2 *)0xc3a0;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            uStack_22 = 0x31af;
            puVar7 = (undefined2 *)&stack0xffe2;
            iVar6 = func_0x0001b198();
            if (iVar6 == 0) goto LAB_3ab8_85b2;
            puVar8 = (undefined2 *)0xc3a0;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar3 = *puVar14;
            }
            uStack_22 = 0x18b3;
            uStack_24 = 0x31d1;
            func_0x00018a6b();
          }
          local_7c = 1;
        }
      }
LAB_3ab8_85b2:
    }
    for (local_a4 = 1; local_a4 <= local_b0; local_a4 = local_a4 + 1) {
      local_e = (undefined2 *)CONCAT22(0x32a0,(undefined2 *)local_e);
      puVar14 = (undefined2 *)func_0x000003ef();
      uVar15 = (undefined2)((ulong)puVar14 >> 0x10);
      local_e._0_2_ = (undefined2 *)puVar14;
      if ((*(byte *)((undefined2 *)local_e + 5) & 2) != 0) {
        puVar7 = &local_e2;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar14 = (undefined2 *)local_e;
          local_e._0_2_ = (undefined2 *)local_e + 1;
          *puVar3 = *puVar14;
        }
        local_e = (undefined2 *)0x32d4;
        local_da = FUN_4375_b44b();
        if (local_d9 < 0x5a) {
          if (param_5 != '\0') {
            local_d9 = *(byte *)0x1d0;
          }
          FUN_28b3_0c98();
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = 0x330f;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x3317;
          FUN_28b3_0c98();
          local_10 = 0x22b2;
          local_12 = 0x331c;
          func_0x00029d78();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x3326;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x332f;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_8a = *puVar7;
          local_88 = puVar7[1];
          FUN_28b3_0c98();
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = 0x3359;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x3361;
          FUN_28b3_0c98();
          local_10 = 0x22b2;
          local_12 = 0x3366;
          func_0x00029d78();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x3370;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x3379;
          func_0x0001e558();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x33a9;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x33b2;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x33bc;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x33c4;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_e2 = *puVar7;
          local_e0 = puVar7[1];
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x33e9;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x33f2;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x33fc;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x3404;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_de = *puVar7;
          local_dc = puVar7[1];
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        local_e._2_2_ = 0x31ed;
        func_0x0000daa6();
        if (param_1 == 0) {
          if (local_d9 < 0x5a) {
            local_e._0_2_ = (undefined2 *)0x3273;
            local_e._2_2_ = 0x885;
            func_0x0001f185();
            puVar7 = &local_e2;
            puVar8 = (undefined2 *)local_e;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            goto LAB_3ab8_8701;
          }
        }
        else {
          puVar8 = &local_12;
          puVar7 = &local_e2;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            puVar14 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar14;
          }
          local_18._2_2_ = 0x3209;
          puVar7 = &local_12;
          iVar6 = func_0x0001efe0();
          if (iVar6 != 0) {
            puVar8 = &local_e2;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar3 = *puVar14;
            }
            local_18._2_2_ = 0x1bb4;
            uVar15 = 0x11f2;
            local_18._0_2_ = 0x3229;
            func_0x000189f5();
            if (*(char *)(local_ae + -0x4b5a) == '\0') {
              *(undefined1 *)(local_ae + -0x4b5a) = 1;
              local_e = (undefined2 *)CONCAT22(0x3245,(undefined2 *)local_e);
              func_0x0000b1d8();
              uVar15 = 0x885;
              local_e = (undefined2 *)CONCAT22(0x324e,(undefined2 *)local_e);
              func_0x0000daa6();
            }
            local_e._0_2_ = (undefined2 *)0x325c;
            local_e._2_2_ = uVar15;
            func_0x0001f185();
LAB_3ab8_8701:
            local_7c = 1;
          }
        }
      }
    }
  }
  return local_7c;
}


