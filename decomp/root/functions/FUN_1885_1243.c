/* 1885:1243 */

void __cdecl16far FUN_1885_1243(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_5c;
  char acStack_58 [16];
  undefined2 local_48;
  undefined2 local_46;
  undefined1 local_44 [40];
  uint local_1c;
  int local_1a;
  int local_18;
  int iStack_16;
  int iStack_14;
  int iStack_12;
  undefined1 *puStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  int iStack_8;
  
  FUN_32b2_02bc();
  iStack_8 = 0x14;
  puStack_a = (undefined1 *)0x1;
  uStack_c = 0x32b2;
  uStack_e = 0x9ab2;
  FUN_1def_26a9();
  iStack_8 = 0x1921;
  puStack_a = (undefined1 *)0x1def;
  uStack_c = 0x9abd;
  FUN_21f2_0356();
  iStack_8 = 0;
  puStack_a = (undefined1 *)0x0;
  uStack_c = 0;
  uStack_e = 0;
  puStack_10 = (undefined1 *)0x131;
  iStack_12 = *(int *)0xa58 + -1;
  iStack_14 = 0x131;
  iStack_16 = 1;
  local_18 = 0x21f2;
  local_1a = 0x9adc;
  FUN_1def_1460();
  uVar7 = (int)*(uint *)0xb310 >> 0xf;
  iStack_8 = ((int)((*(uint *)0xb310 ^ uVar7) - uVar7) >> 4 ^ uVar7) - uVar7;
  puStack_a = local_44;
  uStack_c = 0x1def;
  uStack_e = 0x9afd;
  FUN_21f2_0cd5();
  iStack_8 = 0;
  puStack_a = (undefined1 *)0x7;
  uStack_c = 0x14;
  uStack_e = 2;
  puStack_10 = local_44;
  iStack_12 = 0x21f2;
  iStack_14 = -0x64e9;
  FUN_1def_23c5();
  iStack_8 = 0;
  puStack_a = (undefined1 *)0x2;
  uStack_c = 0x16;
  uStack_e = 1;
  puStack_10 = (undefined1 *)0x1931;
  iStack_12 = 0x1def;
  iStack_14 = -0x64ce;
  FUN_1def_23c5();
  iStack_8 = 0x1def;
  puStack_a = (undefined1 *)0x9b39;
  FUN_1885_117c();
  iStack_8 = 0;
  puStack_a = (undefined1 *)0x0;
  uStack_c = 1;
  uStack_e = 7;
  puStack_10 = (undefined1 *)0x150;
  iStack_12 = *(undefined2 *)0xa58;
  iStack_14 = 0x130;
  iStack_16 = 0;
  local_18 = 0x1def;
  local_1a = 0x9b5b;
  FUN_1def_1460();
  iStack_8 = 0;
  puStack_a = (undefined1 *)0x0;
  uStack_c = 1;
  uStack_e = 7;
  puStack_10 = (undefined1 *)0x160;
  iStack_12 = *(undefined2 *)0xa58;
  iStack_14 = 0x130;
  iStack_16 = 0;
  local_18 = 0x1def;
  local_1a = 0x9b79;
  FUN_1def_1460();
  local_1c = 0;
  do {
    uVar7 = local_1c;
    acStack_58[local_1c] = '\0';
    *(undefined1 *)((int)&iStack_14 + uVar7) = 0;
    local_1c = local_1c + 1;
  } while ((int)local_1c < 0x10);
  local_1c = 0;
  do {
    uVar7 = (int)local_1c >> 0xf;
    iVar2 = ((int)((local_1c ^ uVar7) - uVar7) >> 4 ^ uVar7) - uVar7;
    if (*(char *)(local_1c + 0xb4a6) != '\0') {
      acStack_58[iVar2] = '\x01';
    }
    if (*(char *)(local_1c + 0xbb78) != '\0') {
      *(undefined1 *)((int)&iStack_14 + iVar2) = 1;
    }
    local_1c = local_1c + 1;
  } while ((int)local_1c < 0x100);
  iStack_8 = 0;
  puStack_a = (undefined1 *)0x1def;
  uStack_c = 0x9bde;
  FUN_1885_5256();
  iStack_8 = *(undefined2 *)0x1b40;
  puStack_a = (undefined1 *)*(undefined2 *)0x1b3e;
  uStack_c = 0;
  uStack_e = 0;
  puStack_10 = (undefined1 *)0x1def;
  iStack_12 = 0x9bf0;
  FUN_1def_12e8();
  uVar7 = (int)*(uint *)0xb310 >> 0xf;
  iVar2 = ((int)((*(uint *)0xb310 ^ uVar7) - uVar7) >> 4 ^ uVar7) - uVar7;
  *(undefined1 *)(iVar2 + 0xb7c) = 1;
  *(undefined1 *)(iVar2 + 0xb6c) = 1;
  local_18 = 9;
  local_1a = 0x160;
  local_5c = 0;
  for (local_1c = 0; (int)local_1c < 0x10; local_1c = local_1c + 1) {
    if (iVar2 == local_1c) {
      local_48 = 0;
      local_46 = 5;
      iStack_8 = 0;
      puStack_a = (undefined1 *)0x0;
      uStack_c = 2;
      uStack_e = 5;
      puStack_10 = (undefined1 *)(local_1a + 0xf);
      iStack_12 = local_18 + 0xd;
      iStack_14 = local_1a + 3;
      iStack_16 = local_18 + 1;
      local_18 = 0x1def;
      local_1a = -0x6196;
      FUN_1def_1460();
    }
    else {
      local_48 = 5;
      local_46 = 0;
    }
    if (*(char *)(local_1c + 0xb7c) != '\0') {
      iStack_8 = local_46;
      puStack_a = (undefined1 *)local_48;
      uStack_c = 1;
      iVar3 = 0;
      uStack_e = 0;
      if (9 < local_5c) {
        iVar3 = 7;
      }
      puStack_10 = (undefined1 *)(iVar3 + local_5c + 0x130);
      iStack_12 = local_1a + 6;
      iStack_14 = local_18 + 3;
      iStack_16 = 0x1def;
      local_18 = -0x6393;
      FUN_1def_1691();
      if (local_1c == 3) {
        iStack_8 = 0;
        puStack_a = (undefined1 *)0x0;
        uStack_c = 0;
        uStack_e = local_46;
        iVar3 = local_1a + 10;
        iStack_16 = local_18 + 4;
        iVar1 = local_1a + 8;
        local_18 = 0x1def;
        local_1a = 0x9c9c;
        iStack_14 = iVar1;
        iStack_12 = iStack_16;
        puStack_10 = (undefined1 *)iVar3;
        FUN_1def_1460();
        iStack_8 = 0;
        puStack_a = (undefined1 *)0x0;
        uStack_c = 0;
        uStack_e = local_46;
        iStack_16 = local_18 + 5;
        local_18 = 0x1def;
        local_1a = -0x634a;
        iStack_14 = iVar1;
        iStack_12 = iStack_16;
        puStack_10 = (undefined1 *)iVar3;
        FUN_1def_1460();
      }
    }
    if ((*(byte *)(local_1c + 0xb6c) & 1) != 0) {
      iStack_8 = 0;
      puStack_a = (undefined1 *)0x0;
      uStack_c = 1;
      uStack_e = 7;
      puStack_10 = (undefined1 *)(local_1a + 0xe);
      iStack_12 = local_18 + 0xb;
      iStack_14 = local_1a + 4;
      iStack_16 = local_18 + 2;
      local_18 = 0x1def;
      local_1a = -0x6311;
      FUN_1def_1460();
    }
    if (acStack_58[local_1c] != '\0') {
      iStack_8 = 0;
      puStack_a = (undefined1 *)0x0;
      uStack_c = 2;
      uStack_e = 3;
      puStack_10 = (undefined1 *)(local_1a + 2);
      iStack_12 = local_18 + 7;
      iStack_14 = local_1a + 1;
      iStack_16 = local_18 + 1;
      local_18 = 0x1def;
      local_1a = -0x62df;
      FUN_1def_1460();
    }
    if (*(char *)((int)&iStack_14 + local_1c) != '\0') {
      iStack_8 = 0;
      puStack_a = (undefined1 *)0x0;
      uStack_c = 2;
      uStack_e = 3;
      puStack_10 = (undefined1 *)(local_1a + 2);
      iStack_12 = local_18 + 0xd;
      iStack_14 = local_1a + 1;
      iStack_16 = local_18 + 8;
      local_18 = 0x1def;
      local_1a = -0x62ab;
      FUN_1def_1460();
    }
    if ((*(byte *)(local_1c + 0xb6c) & 6) != 0) {
      iStack_8 = 0;
      puStack_a = (undefined1 *)0x0;
      uStack_c = 0;
      uStack_e = 2;
      iVar3 = local_1a + 4;
      iVar5 = local_18 + 0xd;
      iVar1 = local_1a + 0xf;
      iVar8 = local_18 + 1;
      local_18 = 0x1def;
      local_1a = -0x626a;
      iStack_16 = iVar8;
      iStack_14 = iVar1;
      iStack_12 = iVar5;
      puStack_10 = (undefined1 *)iVar3;
      FUN_1def_1460();
      iStack_8 = 0;
      puStack_a = (undefined1 *)0x0;
      uStack_c = 0;
      uStack_e = 2;
      iVar4 = local_1a + 3;
      iVar6 = local_1a + 0xe;
      local_18 = 0x1def;
      local_1a = -0x623d;
      iStack_16 = iVar8;
      iStack_14 = iVar6;
      iStack_12 = iVar5;
      puStack_10 = (undefined1 *)iVar4;
      FUN_1def_1460();
      if ((*(byte *)(local_1c + 0xb6c) & 4) != 0) {
        iStack_8 = 0;
        puStack_a = (undefined1 *)0x0;
        uStack_c = 0;
        uStack_e = 2;
        local_18 = 0x1def;
        local_1a = 0x9dea;
        iStack_16 = iVar8;
        iStack_14 = iVar3;
        iStack_12 = iVar5;
        puStack_10 = (undefined1 *)iVar1;
        FUN_1def_1460();
        iStack_8 = 0;
        puStack_a = (undefined1 *)0x0;
        uStack_c = 0;
        uStack_e = 2;
        local_18 = 0x1def;
        local_1a = -0x61fb;
        iStack_16 = iVar8;
        iStack_14 = iVar4;
        iStack_12 = iVar5;
        puStack_10 = (undefined1 *)iVar6;
        FUN_1def_1460();
      }
    }
    local_5c = local_5c + 1;
    local_18 = local_18 + 0xe;
    if (*(int *)0xa5c + -5 < local_18) {
      local_18 = 9;
      local_1a = local_1a + 0x10;
    }
  }
  iStack_8 = 0;
  puStack_a = (undefined1 *)0x0;
  uStack_c = 1;
  uStack_e = 7;
  puStack_10 = (undefined1 *)0x150;
  iStack_12 = *(undefined2 *)0xa58;
  iStack_14 = 0x130;
  iStack_16 = 0;
  local_18 = 0x1def;
  local_1a = 0x9e92;
  FUN_1def_1460();
  iStack_8 = 0;
  puStack_a = (undefined1 *)0x0;
  uStack_c = 1;
  uStack_e = 7;
  puStack_10 = (undefined1 *)0x160;
  iStack_12 = *(undefined2 *)0xa58;
  iStack_14 = 0x130;
  iStack_16 = 0;
  local_18 = 0x1def;
  local_1a = 0x9eb0;
  FUN_1def_1460();
  iStack_8 = 0x1def;
  puStack_a = (undefined1 *)0x9eb7;
  FUN_1885_1f49();
  *(undefined2 *)0xbc0 = 1;
  return;
}


