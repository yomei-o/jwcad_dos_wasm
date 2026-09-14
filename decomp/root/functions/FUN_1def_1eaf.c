/* 1def:1eaf */

int __cdecl16far FUN_1def_1eaf(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 extraout_DX;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined2 in_stack_0000001c;
  int in_stack_0000001e;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  undefined2 in_stack_0000002c;
  undefined2 in_stack_0000002e;
  undefined2 in_stack_00000030;
  undefined2 in_stack_00000032;
  undefined2 in_stack_00000034;
  int in_stack_00000036;
  int local_32;
  int local_1a;
  int local_18;
  int local_16;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int local_e;
  int local_c;
  int local_a;
  
  puVar9 = (undefined2 *)&stack0xfffe;
  FUN_32b2_02bc();
  uVar11 = in_stack_0000001e == 0;
  if (in_stack_0000001e == 1) {
    local_a = 0xfdca;
    FUN_32b2_6d14();
    local_a = 0xfdd2;
    FUN_32b2_6d14();
    local_a = 0xfdd7;
    FUN_32b2_7191();
    if ((bool)uVar11) {
      local_a = 0x32b2;
      local_c = 0xfde4;
      uVar10 = extraout_DX;
      FUN_32b2_6d14();
      local_a = 0x32b2;
      local_c = 0xfded;
      FUN_32b2_710c();
      local_a = 0x32b2;
      local_c = 0xfdf2;
      local_c = FUN_32b2_6f61();
      local_e = 0x32b2;
      iStack_10 = 0xfdfc;
      local_a = uVar10;
      FUN_32b2_6d14();
      local_e = 0x32b2;
      iStack_10 = 0xfe05;
      FUN_32b2_710c();
      local_e = 0x32b2;
      iStack_10 = 0xfe0a;
      iStack_10 = FUN_32b2_6f61();
      iStack_12 = -1;
      iStack_14 = in_stack_0000001c;
      local_16 = 0x32b2;
      local_18 = 0xfe1b;
      local_e = uVar10;
      FUN_32b2_6d14();
      local_16 = 0x32b2;
      local_18 = 0xfe20;
      local_16 = FUN_32b2_6f61();
      local_18 = 0x32b2;
      local_1a = -0x1d7;
      FUN_32b2_6d14();
      local_18 = 0x32b2;
      local_1a = -0x1d2;
      local_18 = FUN_32b2_6f61();
      local_1a = 0x32b2;
      FUN_32b2_6d14();
      local_1a = 0x32b2;
      local_1a = FUN_32b2_6f61();
      iVar6 = FUN_20a9_0e18();
      uVar12 = &stack0x0000 == (undefined1 *)0x6;
    }
    else {
      local_a = 0xfe51;
      FUN_32b2_6d14();
      local_a = 0xfe59;
      FUN_32b2_7124();
      local_a = 0xfe61;
      FUN_32b2_6eb1();
      local_a = 0xfe69;
      FUN_32b2_6d14();
      local_a = 0xfe71;
      FUN_32b2_6e99();
      local_a = 0xfe79;
      FUN_32b2_6ef9();
      local_a = 0xfe81;
      FUN_32b2_6d14();
      local_a = 0xfe89;
      FUN_32b2_6d14();
      local_a = 0xfe8e;
      FUN_32b2_7191();
      if (!(bool)uVar11) {
        local_a = 0xfe99;
        FUN_32b2_6d14();
        local_a = 0x32b2;
        local_c = 0xfea2;
        FUN_32b2_7154();
        local_a = 0xfea8;
        FUN_32b2_6eb1();
      }
      local_a = in_stack_0000002c;
      local_c = in_stack_0000002a;
      local_e = in_stack_00000028;
      iStack_10 = 0x32b2;
      iStack_12 = -0x147;
      FUN_32b2_75fe();
      local_a = 0x32b2;
      local_c = 0xfec3;
      FUN_32b2_6d14();
      local_a = 0x32b2;
      local_c = 0xfecb;
      FUN_32b2_710c();
      local_a = 0x32b2;
      local_c = 0xfed3;
      FUN_32b2_7154();
      local_a = 0x32b2;
      local_c = 0xfed8;
      local_18 = FUN_32b2_6f61();
      local_a = in_stack_0000002e;
      local_c = in_stack_0000002c;
      local_e = in_stack_0000002a;
      iStack_10 = in_stack_00000028;
      iStack_12 = 0x32b2;
      iStack_14 = 0xfeec;
      FUN_32b2_75ec();
      uVar11 = (undefined1 *)0xfff7 < &iStack_12;
      uVar12 = &stack0x0000 == (undefined1 *)0xa;
      local_c = 0x32b2;
      local_e = 0xfef6;
      FUN_32b2_6d14();
      local_c = 0x32b2;
      local_e = 0xfefe;
      FUN_32b2_710c();
      local_c = 0x32b2;
      local_e = 0xff06;
      FUN_32b2_710c();
      local_c = 0x32b2;
      local_e = 0xff0e;
      FUN_32b2_70f4();
      local_c = 0x32b2;
      local_e = 0xff13;
      local_1a = FUN_32b2_6f61();
      while( true ) {
        local_c = 0x32b2;
        local_e = 0xffe3;
        FUN_32b2_6d14();
        local_c = 0x32b2;
        local_e = 0xffeb;
        FUN_32b2_6d14();
        local_c = 0x32b2;
        local_e = 0xfff0;
        iVar6 = FUN_32b2_7191();
        if (!(bool)uVar11) break;
        local_a = 0xff1e;
        FUN_32b2_6d14();
        local_a = 0xff26;
        FUN_32b2_6d14();
        local_a = 0x32b2;
        local_c = 0xff2f;
        FUN_32b2_7154();
        local_a = 0xff35;
        FUN_32b2_6e99();
        local_a = 0xff3a;
        FUN_32b2_7191();
        iVar6 = 0x32b2;
        if (!(bool)uVar11 && !(bool)uVar12) {
          local_e = in_stack_00000030;
          local_c = in_stack_00000032;
          local_a = in_stack_00000034;
          iVar6 = in_stack_00000036;
        }
        iStack_10 = 0x32b2;
        iStack_12 = -0xa7;
        FUN_32b2_75fe();
        local_a = 0x32b2;
        local_c = 0xff63;
        FUN_32b2_6d14();
        local_a = 0x32b2;
        local_c = 0xff6b;
        FUN_32b2_710c();
        local_a = 0x32b2;
        local_c = 0xff73;
        FUN_32b2_7154();
        local_a = 0x32b2;
        local_c = 0xff78;
        FUN_32b2_6f61();
        local_a = 0;
        local_c = 0;
        local_e = 0;
        iStack_10 = in_stack_0000001c;
        iStack_14 = 0;
        local_16 = 0;
        local_18 = 0;
        local_1a = 0x32b2;
        iStack_12 = iVar6;
        FUN_32b2_75ec();
        iStack_14 = 0x32b2;
        local_16 = 0xff9e;
        FUN_32b2_6d14();
        iStack_14 = 0x32b2;
        local_16 = 0xffa6;
        FUN_32b2_710c();
        iStack_14 = 0x32b2;
        local_16 = 0xffae;
        FUN_32b2_710c();
        iStack_14 = 0x32b2;
        local_16 = 0xffb6;
        FUN_32b2_70f4();
        iStack_14 = 0x32b2;
        local_16 = 0xffbb;
        iStack_14 = FUN_32b2_6f61();
        local_16 = -0x6c;
        local_18 = local_1a;
        FUN_1def_1460();
        uVar11 = (undefined1 *)0xffef < &local_1a;
        uVar12 = &stack0x0000 == (undefined1 *)0xa;
        local_18 = 0x32b2;
        local_1a = -0x34;
      }
    }
    puVar8 = (undefined2 *)&stack0xfff8;
    cVar1 = '\x15';
    do {
      puVar9 = puVar9 + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *puVar9;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    if ((bool)uVar12) {
      iVar6 = FUN_32b2_4ee4();
      iVar6 = iVar6 + *(int *)0xb788;
    }
    else {
      iVar6 = iVar6 + -0x1000;
    }
    return iVar6;
  }
  if (in_stack_0000001e == 3) {
    local_a = 9;
    FUN_32b2_6d14();
    local_a = 0xe;
    iVar3 = FUN_32b2_6f61();
    local_a = 0x19;
    FUN_32b2_6d14();
    local_a = 0x1e;
    iVar4 = FUN_32b2_6f61();
    local_a = 0x29;
    FUN_32b2_6d14();
    local_a = 0x2e;
    iVar5 = FUN_32b2_6f61();
    iVar6 = iVar5;
    if (iVar5 == 0) {
      local_e = in_stack_0000001c;
      local_18 = 0x32b2;
      local_1a = 0x4b;
      local_16 = iVar3;
      iStack_14 = iVar4;
      iStack_12 = iVar3;
      iStack_10 = iVar4;
      local_c = iVar5;
      local_a = iVar5;
      iVar6 = func_0x0002f350();
    }
    if ((iVar5 == 1) || (iVar5 == 2)) {
      iVar2 = iVar3 - iVar5;
      iVar7 = iVar3 + iVar5;
      iStack_14 = iVar4 + -2;
      if (iVar5 == 2) {
        local_a = 0;
        local_c = 0;
        local_e = in_stack_0000001c;
        iStack_12 = iVar7 + -1;
        local_16 = iVar2 + 1;
        local_18 = 0x32b2;
        local_1a = 0x8f;
        iStack_10 = iStack_14;
        func_0x0002f350();
      }
      iStack_14 = iVar4 + -1;
      local_a = 0;
      local_c = 0;
      local_e = in_stack_0000001c;
      local_18 = 0x32b2;
      local_1a = 0xb1;
      local_16 = iVar2;
      iStack_12 = iVar7;
      iStack_10 = iStack_14;
      func_0x0002f350();
      local_a = 0;
      local_c = 0;
      local_e = in_stack_0000001c;
      local_18 = 0x32b2;
      local_1a = 0xd3;
      local_16 = iVar2;
      iStack_14 = iVar4;
      iStack_12 = iVar7;
      iStack_10 = iVar4;
      func_0x0002f350();
      iStack_14 = iVar4 + 1;
      local_a = 0;
      local_c = 0;
      local_e = in_stack_0000001c;
      local_18 = 0x32b2;
      local_1a = 0xf5;
      local_16 = iVar2;
      iStack_12 = iVar7;
      iStack_10 = iStack_14;
      iVar6 = func_0x0002f350();
      if (iVar5 == 2) {
        local_a = 0;
        local_c = 0;
        local_e = in_stack_0000001c;
        iStack_12 = iVar7 + -1;
        local_16 = iVar2 + 1;
        local_18 = 0x32b2;
        local_1a = 0x11d;
        iStack_14 = iVar4 + 2;
        iStack_10 = iVar4 + 2;
        iVar6 = func_0x0002f350();
      }
    }
    if (2 < iVar5) {
      local_a = 0x131;
      FUN_32b2_6d14();
      uVar10 = 0x32b2;
      local_a = 0x136;
      for (local_32 = FUN_32b2_6f61(); 0 < local_32; local_32 = local_32 + -1) {
        local_a = 0;
        local_c = 0;
        local_e = 0;
        iStack_10 = 0;
        iStack_12 = -1;
        iStack_14 = in_stack_0000001c;
        local_16 = local_32;
        uVar10 = 0x20a9;
        local_1a = iVar3;
        local_18 = iVar4;
        FUN_20a9_0e18();
      }
      local_a = 0;
      local_c = 2;
      local_e = in_stack_0000001c;
      iStack_10 = iVar4 + 1;
      iStack_12 = iVar3 + 1;
      iStack_14 = iVar4 + -1;
      local_16 = iVar3 + -1;
      local_1a = 0x186;
      local_18 = uVar10;
      iVar6 = func_0x0002f350();
    }
  }
  else {
    local_a = 0x194;
    FUN_32b2_6d14();
    local_a = 0x199;
    iVar3 = FUN_32b2_6f61();
    local_a = 0x1a4;
    FUN_32b2_6d14();
    local_a = 0x1a9;
    iVar4 = FUN_32b2_6f61();
    local_a = 0x1b4;
    FUN_32b2_6d14();
    local_a = 0x1b9;
    iVar5 = FUN_32b2_6f61();
    iVar6 = iVar5;
    if (iVar5 == 0) {
      local_e = in_stack_0000001c;
      local_18 = 0x32b2;
      local_1a = 0x1d6;
      local_16 = iVar3;
      iStack_14 = iVar4;
      iStack_12 = iVar3;
      iStack_10 = iVar4;
      local_c = iVar5;
      local_a = iVar5;
      iVar6 = func_0x0002f350();
    }
    if (iVar5 == 1) {
      local_a = 0;
      local_c = 1;
      local_e = in_stack_0000001c;
      iStack_10 = iVar4 + 1;
      iStack_12 = iVar3 + 1;
      iStack_14 = iVar4 + -1;
      local_16 = iVar3 + -1;
      local_18 = 0x32b2;
      local_1a = 0x201;
      iVar6 = func_0x0002f350();
    }
    if (iVar5 == 2) {
      local_a = 0;
      local_c = 0;
      local_e = in_stack_0000001c;
      iStack_14 = iVar4 + -2;
      local_18 = 0x32b2;
      local_1a = 0x231;
      local_16 = iVar3 + -1;
      iStack_12 = iVar3 + 1;
      iStack_10 = iStack_14;
      func_0x0002f350();
      local_a = 0;
      local_c = 0;
      local_e = in_stack_0000001c;
      iStack_14 = iVar4 + 2;
      local_18 = 0x32b2;
      local_1a = 0x24d;
      local_16 = iVar3 + -1;
      iStack_12 = iVar3 + 1;
      iStack_10 = iStack_14;
      func_0x0002f350();
      local_a = 0;
      local_c = 0;
      local_e = in_stack_0000001c;
      local_16 = iVar3 + -2;
      local_18 = 0x32b2;
      local_1a = 0x274;
      iStack_14 = iVar4 + -1;
      iStack_12 = local_16;
      iStack_10 = iVar4 + 1;
      func_0x0002f350();
      local_a = 0;
      local_c = 0;
      local_e = in_stack_0000001c;
      local_16 = iVar3 + 2;
      local_18 = 0x32b2;
      local_1a = 0x28c;
      iStack_14 = iVar4 + -1;
      iStack_12 = local_16;
      iStack_10 = iVar4 + 1;
      iVar6 = func_0x0002f350();
    }
    if (2 < iVar5) {
      local_a = in_stack_0000001c;
      iStack_14 = 0x32b2;
      local_16 = 0x2ac;
      iStack_12 = iVar3;
      iStack_10 = iVar4;
      local_e = iVar5;
      local_c = iVar5;
      iVar6 = FUN_20a9_0ac5();
    }
  }
  return iVar6;
}


