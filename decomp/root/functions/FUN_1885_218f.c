/* 1885:218f */

void __cdecl16far FUN_1885_218f(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 local_26 [4];
  int local_22;
  int local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined1 local_1a [4];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  int iStack_e;
  undefined1 *puStack_c;
  int iStack_a;
  undefined1 *puStack_8;
  undefined1 *local_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x1885;
  local_6 = (undefined1 *)0xa9ea;
  FUN_32b2_02bc();
  local_1e = 4;
  local_1c = 0xffff;
  local_4 = (undefined1 *)0x19b6;
  local_6 = local_26;
  puStack_8 = (undefined1 *)0x32b2;
  iStack_a = 0xaa01;
  FUN_32b2_2854();
  if (*(int *)0xc1c < 0) {
    local_4 = (undefined1 *)0x19b8;
    local_6 = local_26;
    puStack_8 = (undefined1 *)0x32b2;
    iStack_a = 0xaa17;
    FUN_32b2_2854();
  }
  if (*(char *)0xb782 == '\0') {
    local_4 = (undefined1 *)0x0;
    local_6 = (undefined1 *)0x32b2;
    puStack_8 = (undefined1 *)0xaa2a;
    FUN_1885_5256();
    local_4 = (undefined1 *)*(undefined2 *)0x1b40;
    local_6 = (undefined1 *)*(undefined2 *)0x1b3e;
    puStack_8 = (undefined1 *)0x0;
    iStack_a = 0;
    puStack_c = (undefined1 *)0x32b2;
    iStack_e = 0xaa3c;
    FUN_1def_12e8();
    local_4 = (undefined1 *)0x0;
    local_6 = (undefined1 *)0x0;
    puStack_8 = (undefined1 *)0x2;
    iStack_a = 4;
    puStack_c = (undefined1 *)0x2f;
    iStack_e = *(int *)0xa5c + -1;
    puStack_10 = (undefined1 *)(*(int *)0xa5e + 1);
    uStack_12 = 1;
    uStack_14 = 0x1def;
    uStack_16 = 0xaa66;
    FUN_1def_1460();
    local_4 = (undefined1 *)0x0;
    local_6 = (undefined1 *)0x0;
    puStack_8 = (undefined1 *)0x1;
    iStack_a = 7;
    puStack_c = (undefined1 *)0x30;
    iStack_e = *(undefined2 *)0xa5c;
    puStack_10 = (undefined1 *)*(undefined2 *)0xa5e;
    uStack_12 = 0;
    uStack_14 = 0x1def;
    uStack_16 = 0xaa89;
    FUN_1def_1460();
    if (*(int *)0xc14 == 0) {
      local_22 = *(uint *)0x13c - *(uint *)0x148;
      local_20 = (*(int *)0x13e - *(int *)0x14a) - (uint)(*(uint *)0x13c < *(uint *)0x148);
      uVar1 = *(uint *)0x150;
      uVar2 = *(uint *)0x144;
      uVar3 = (uVar2 - uVar1) - *(uint *)0x14c;
      local_6 = (undefined1 *)(uVar3 + *(uint *)0x140);
      local_4 = (undefined1 *)
                (((((((int)uVar2 >> 0xf) - ((int)uVar1 >> 0xf)) - (uint)(uVar2 < uVar1)) -
                  *(int *)0x14e) - (uint)(uVar2 - uVar1 < *(uint *)0x14c)) + *(int *)0x142 +
                (uint)CARRY2(uVar3,*(uint *)0x140));
    }
    else {
      local_22 = *(int *)0x148;
      local_20 = *(int *)0x14a;
      uVar1 = *(uint *)0x150;
      local_6 = (undefined1 *)(uVar1 + *(uint *)0x14c);
      local_4 = (undefined1 *)
                (((int)uVar1 >> 0xf) + *(int *)0x14e + (uint)CARRY2(uVar1,*(uint *)0x14c));
    }
    puStack_8 = local_26;
    iStack_a = local_20;
    puStack_c = (undefined1 *)local_22;
    iStack_e = 0x19ba;
    puStack_10 = local_1a;
    uStack_12 = 0x1def;
    uStack_14 = 0xab02;
    FUN_32b2_2854();
    local_4 = (undefined1 *)0x0;
    local_6 = (undefined1 *)0x0;
    puStack_8 = (undefined1 *)0x2;
    iStack_a = 1;
    puStack_c = local_1a;
    iStack_e = 0x32b2;
    puStack_10 = (undefined1 *)0xab1a;
    FUN_1def_23c5();
    if (*(char *)0x4a == '\0') {
      if (*(int *)0xcb6 == 0) {
        if (*(int *)0xc14 == 0) {
          local_6 = (undefined1 *)0x19dc;
        }
        else {
          local_6 = (undefined1 *)0x19cb;
        }
        local_4 = local_26;
        puStack_8 = local_1a;
        iStack_a = 0x1def;
        uVar4 = 0x32b2;
        puStack_c = (undefined1 *)0xab83;
        FUN_32b2_2854();
      }
      else {
        local_4 = (undefined1 *)0x0;
        local_6 = (undefined1 *)0x0;
        puStack_8 = (undefined1 *)0x0;
        iStack_a = 0;
        puStack_c = (undefined1 *)0x20;
        iStack_e = *(int *)0xa5c + -1;
        puStack_10 = (undefined1 *)0x20;
        uStack_12 = 1;
        uStack_14 = 0x1def;
        uStack_16 = 0xabab;
        FUN_1def_1460();
        local_4 = (undefined1 *)0x1def;
        local_6 = (undefined1 *)0xabb7;
        FUN_32b2_6cc6();
        local_4 = (undefined1 *)0x32b2;
        local_6 = (undefined1 *)0xabbc;
        FUN_32b2_7258();
        puStack_c = (undefined1 *)0x32b2;
        iStack_e = 0xabc6;
        FUN_32b2_6eb1();
        puStack_c = (undefined1 *)0x744;
        iStack_e = 0x19ed;
        puStack_10 = local_1a;
        uStack_12 = 0x32b2;
        uVar4 = 0x32b2;
        uStack_14 = 0xabd7;
        FUN_32b2_2854();
      }
    }
    else {
      local_4 = (undefined1 *)0x0;
      local_6 = (undefined1 *)0x0;
      puStack_8 = (undefined1 *)0x0;
      iStack_a = 0;
      puStack_c = (undefined1 *)0x20;
      iStack_e = *(int *)0xa5c + -1;
      puStack_10 = (undefined1 *)0x20;
      uStack_12 = 1;
      uStack_14 = 0x1def;
      uStack_16 = 0xab3e;
      FUN_1def_1460();
      local_4 = local_1a;
      local_6 = (undefined1 *)0x1def;
      puStack_8 = (undefined1 *)0xab49;
      FUN_1885_20db();
      local_4 = (undefined1 *)0x0;
      local_6 = (undefined1 *)0x0;
      puStack_8 = (undefined1 *)0x3;
      iStack_a = 0xc;
      puStack_c = (undefined1 *)0x19c6;
      iStack_e = 0x1def;
      uVar4 = 0x1def;
      puStack_10 = (undefined1 *)0xab5f;
      FUN_1def_23c5();
    }
    local_4 = (undefined1 *)0x0;
    local_6 = (undefined1 *)0x0;
    puStack_8 = (undefined1 *)0x3;
    iStack_a = 1;
    puStack_c = local_1a;
    puStack_10 = (undefined1 *)0xabef;
    iStack_e = uVar4;
    FUN_1def_23c5();
    local_4 = (undefined1 *)0x1def;
    local_6 = (undefined1 *)0xabf6;
    FUN_1885_1f49();
  }
  return;
}


