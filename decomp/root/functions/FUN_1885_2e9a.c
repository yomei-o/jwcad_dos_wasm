/* 1885:2e9a */

/* WARNING: Instruction at (ram,0x0001b71a) overlaps instruction at (ram,0x0001b718)
    */

undefined2 __cdecl16far FUN_1885_2e9a(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined2 *in_BX;
  int unaff_SI;
  undefined2 uVar9;
  int unaff_DI;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  undefined2 local_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  int iStack_12;
  int iStack_10;
  undefined2 *puStack_e;
  int local_c;
  undefined2 *local_a;
  undefined2 *local_8;
  int iVar15;
  
  uVar10 = 0x32b2;
  FUN_32b2_02bc();
  uVar11 = 5;
  if (*(char *)0xb782 == '\0') {
    local_8 = (undefined2 *)0x0;
    local_a = (undefined2 *)0x32b2;
    uVar10 = 0x13bf;
    local_c = 0xb727;
    FUN_13bf_0898();
    in_BX = local_8;
  }
  else if ((*(byte *)0xb782 < 4) || (*(char *)0x132 == '\0')) {
    return 0;
  }
  local_8 = (undefined2 *)0x0;
  pcVar4 = (code *)swi(0x3f);
  bVar6 = (*pcVar4)();
  *(int *)(&stack0x0029 + unaff_DI) = *(int *)(&stack0x0029 + unaff_DI) + (int)in_BX;
  pbVar1 = (byte *)((int)in_BX + unaff_SI + -0x66);
  bVar2 = *pbVar1;
  *pbVar1 = bVar2 << 6 | (byte)(CONCAT11(0xd4 < (bVar6 | 0x27),bVar2) >> 3);
  *(byte *)((int)in_BX + 0x5b13) = *(byte *)((int)in_BX + 0x5b13) | (byte)((uint)in_BX >> 8);
  local_8 = (undefined2 *)0xb72c;
  FUN_1885_2414();
  uVar3 = *(uint *)0xb310;
  *(undefined1 *)(uVar3 + 0xb388) = 1;
  *(char *)(uVar3 + 0xc170) = (*(byte *)(uVar3 + 0xc170) & 6) + 1;
  uVar8 = (int)uVar3 >> 0xf;
  iVar7 = ((int)((uVar3 ^ uVar8) - uVar8) >> 4 ^ uVar8) - uVar8;
  local_a = (undefined2 *)0xb759;
  local_8 = (undefined2 *)uVar10;
  FUN_1885_0209();
  local_8 = (undefined2 *)0xb75e;
  FUN_1885_2d35();
  local_8 = (undefined2 *)0xb762;
  FUN_1885_117c();
  local_8 = (undefined2 *)0xb766;
  FUN_1885_2ba3();
  local_8 = (undefined2 *)0x7;
  local_a = (undefined2 *)0x16;
  local_c = 1;
  puStack_e = (undefined2 *)0x1ac9;
  iStack_12 = 0xb77e;
  iStack_10 = uVar10;
  FUN_1def_23c5();
  local_8 = (undefined2 *)0x6;
  local_a = (undefined2 *)0x16;
  local_c = 9;
  puStack_e = (undefined2 *)0x1ad2;
  iStack_10 = 0x1def;
  iStack_12 = 0xb799;
  FUN_1def_23c5();
  local_8 = &local_2a;
  local_a = (undefined2 *)0x1def;
  local_c = 0xb7a9;
  FUN_21f2_0c59();
  local_8 = (undefined2 *)0x7;
  local_a = (undefined2 *)0x16;
  local_c = 1;
  puStack_e = &local_2a;
  iStack_10 = 0x21f2;
  iStack_12 = 0xb7c3;
  FUN_1def_23c5();
  local_a = (undefined2 *)0x5;
  local_c = 7;
  puStack_e = (undefined2 *)0x160;
  iStack_10 = 0x79;
  iStack_12 = 0x150;
  uStack_14 = 0x6e;
  uStack_16 = 0x1def;
  uStack_18 = 0xb7e9;
  local_8 = (undefined2 *)uVar11;
  FUN_1def_1460();
  local_8 = (undefined2 *)0x0;
  local_a = (undefined2 *)0x0;
  local_c = 7;
  puStack_e = (undefined2 *)0x160;
  iStack_10 = 0x40;
  iStack_12 = 0x150;
  uStack_14 = 0x40;
  uStack_16 = 0x1def;
  uStack_18 = 0xb80e;
  FUN_1def_1460();
  local_8 = (undefined2 *)0x1ad9;
  local_a = &local_2a;
  local_c = 0x1def;
  puStack_e = (undefined2 *)0xb832;
  FUN_32b2_2854();
  local_8 = (undefined2 *)0x0;
  local_a = (undefined2 *)0x16;
  local_c = 0xf;
  puStack_e = &local_2a;
  iStack_10 = 0x32b2;
  iStack_12 = 0xb84a;
  FUN_1def_23c5();
  local_8 = (undefined2 *)0x0;
  local_a = (undefined2 *)0x1;
  local_c = 7;
  puStack_e = (undefined2 *)0x150;
  iStack_10 = *(undefined2 *)0xa5c;
  iStack_12 = 0x140;
  uStack_14 = 0;
  uStack_16 = 0x1def;
  uStack_18 = 0xb86f;
  FUN_1def_1460();
  local_8 = (undefined2 *)0x0;
  local_a = (undefined2 *)0x1;
  local_c = 7;
  puStack_e = (undefined2 *)*(undefined2 *)0x1b40;
  iStack_10 = *(undefined2 *)0x1b3e;
  iStack_12 = *(undefined2 *)0xa5e;
  uStack_14 = 0;
  uStack_16 = 0x1def;
  uStack_18 = 0xb890;
  FUN_1def_1460();
  iVar13 = 0;
  iVar15 = 9;
  for (local_a = (undefined2 *)(iVar7 << 4); (int)local_a <= iVar7 * 0x10 + 0xf;
      local_a = (undefined2 *)((int)local_a + 1)) {
    if (local_a == (undefined2 *)*(int *)0xb310) {
      iVar14 = 0;
      iVar15 = 0;
      local_8 = (undefined2 *)0x0;
      local_a = (undefined2 *)0x2;
      local_c = 6;
      puStack_e = (undefined2 *)0xf;
      iStack_10 = 0xd;
      iStack_12 = 3;
      uStack_14 = 1;
      uStack_16 = 0x1def;
      uStack_18 = 0xbaec;
      FUN_1def_1460();
    }
    else {
      iVar14 = 6;
      local_c = 0;
    }
    iVar5 = local_c;
    if (*(char *)((int)local_a + -0x4c78) != '\0') {
      local_a = (undefined2 *)0x1;
      iVar15 = 0;
      local_c = 0;
      if (9 < iVar13) {
        iVar15 = 7;
      }
      puStack_e = (undefined2 *)(iVar15 + iVar13 + 0x130);
      iStack_10 = iVar14 + 6;
      iStack_12 = iVar5 + 3;
      uStack_14 = 0x1def;
      uStack_16 = 0xb8f1;
      local_8 = (undefined2 *)iVar14;
      FUN_1def_1691();
      iVar15 = iVar5;
      if (iVar13 == 3) {
        local_8 = (undefined2 *)0x0;
        local_a = (undefined2 *)0x0;
        uStack_14 = 4;
        uStack_16 = 0x1def;
        uStack_18 = 0xb920;
        iStack_12 = 8;
        iStack_10 = uStack_14;
        puStack_e = (undefined2 *)10;
        FUN_1def_1460();
        iVar15 = 0;
        local_8 = (undefined2 *)0x0;
        local_a = (undefined2 *)0x0;
        uStack_14 = 5;
        uStack_16 = 0x1def;
        uStack_18 = 0xb93a;
        iStack_12 = 8;
        iStack_10 = uStack_14;
        puStack_e = (undefined2 *)10;
        FUN_1def_1460();
      }
    }
    if ((*(byte *)((int)local_a + -0x3e90) & 1) != 0) {
      iVar15 = 0;
      local_8 = (undefined2 *)0x0;
      local_a = (undefined2 *)*(int *)0x914e;
      local_c = *(undefined2 *)0x914c;
      puStack_e = (undefined2 *)*(undefined2 *)0x914a;
      iStack_10 = *(undefined2 *)0x9148;
      iStack_12 = *(undefined2 *)0x914e;
      uStack_14 = *(undefined2 *)0x914c;
      uStack_16 = *(undefined2 *)0x914a;
      uStack_18 = *(undefined2 *)0x9148;
      uStack_1a = *(undefined2 *)0x9156;
      uStack_1c = *(undefined2 *)0x9154;
      uStack_1e = *(undefined2 *)0x9152;
      uStack_20 = *(undefined2 *)0x9150;
      uStack_22 = 0;
      uStack_24 = 6;
      uStack_26 = *(undefined2 *)0x915e;
      uStack_28 = *(undefined2 *)0x915c;
      local_2a = *(undefined2 *)0x915a;
      uVar10 = 9;
      uVar9 = 0x1def;
      uVar11 = 0xb9a4;
      FUN_32b2_6d9b(*(undefined2 *)0x9158);
      FUN_32b2_6eb1(iVar13,iVar7,uVar11,uVar9);
      uVar11 = 7;
      uVar12 = 0x32b2;
      uVar9 = 0xb9bf;
      FUN_32b2_6d9b();
      FUN_32b2_6eb1(uVar11,uVar10,uVar9,uVar12);
      FUN_1def_1eaf();
    }
    if ((*(byte *)((int)local_a + -0x3e90) & 6) != 0) {
      local_8 = (undefined2 *)0x0;
      local_a = (undefined2 *)0x0;
      local_c = 2;
      uVar11 = 0xd;
      uVar10 = 0xf;
      uVar9 = 1;
      uStack_16 = 0x1def;
      uStack_18 = 0xba0f;
      uStack_14 = uVar9;
      iStack_12 = uVar10;
      iStack_10 = uVar11;
      puStack_e = (undefined2 *)4;
      FUN_1def_1460();
      iVar15 = 0;
      local_8 = (undefined2 *)0x0;
      local_a = (undefined2 *)0x0;
      local_c = 2;
      uStack_16 = 0x1def;
      uStack_18 = 0xba3c;
      uStack_14 = uVar9;
      iStack_12 = 0xe;
      iStack_10 = uVar11;
      puStack_e = (undefined2 *)3;
      FUN_1def_1460();
      if ((*(byte *)((int)local_a + -0x3e90) & 4) != 0) {
        local_8 = (undefined2 *)0x0;
        local_a = (undefined2 *)0x0;
        local_c = 2;
        uStack_16 = 0x1def;
        uStack_18 = 0xba63;
        uStack_14 = uVar9;
        iStack_12 = 4;
        iStack_10 = uVar11;
        puStack_e = (undefined2 *)uVar10;
        FUN_1def_1460();
        iVar15 = 0;
        local_8 = (undefined2 *)0x0;
        local_a = (undefined2 *)0x0;
        local_c = 2;
        uStack_16 = 0x1def;
        uStack_18 = 0xba7e;
        uStack_14 = uVar9;
        iStack_12 = 3;
        iStack_10 = uVar11;
        puStack_e = (undefined2 *)0xe;
        FUN_1def_1460();
      }
    }
    iVar13 = iVar13 + 1;
    iVar15 = iVar15 + 0xe;
    if (*(int *)0xa5c + -5 < iVar15) {
      iVar15 = 9;
    }
  }
  local_8 = (undefined2 *)0x0;
  local_a = (undefined2 *)0x1;
  local_c = 7;
  puStack_e = (undefined2 *)*(undefined2 *)0x1b40;
  iStack_10 = *(undefined2 *)0x1b3e;
  iStack_12 = *(undefined2 *)0xa5e;
  uStack_14 = 0;
  uStack_16 = 0x1def;
  uStack_18 = 0xbb14;
  FUN_1def_1460();
  local_8 = (undefined2 *)0x0;
  local_a = (undefined2 *)0x0;
  local_c = 7;
  puStack_e = (undefined2 *)*(undefined2 *)0xa60;
  iStack_10 = *(undefined2 *)0xa5c;
  iStack_12 = *(undefined2 *)0xa5e;
  uStack_14 = *(undefined2 *)0xa5c;
  uStack_16 = 0x1def;
  uStack_18 = 0xbb37;
  FUN_1def_1460();
  local_8 = (undefined2 *)0x0;
  local_a = (undefined2 *)0x1;
  local_c = 7;
  puStack_e = (undefined2 *)0x130;
  iStack_10 = *(undefined2 *)0xa5c;
  iStack_12 = 0x3f;
  uStack_14 = 0;
  uStack_16 = 0x1def;
  uStack_18 = 0xbb5a;
  FUN_1def_1460();
  local_8 = (undefined2 *)0x0;
  local_a = (undefined2 *)0x0;
  local_c = 7;
  puStack_e = (undefined2 *)*(undefined2 *)0xa60;
  iStack_10 = *(undefined2 *)0xa5c;
  iStack_12 = *(undefined2 *)0xa60;
  uStack_14 = 0;
  uStack_16 = 0x1def;
  uStack_18 = 0xbb7a;
  FUN_1def_1460();
  local_8 = (undefined2 *)0x0;
  local_a = (undefined2 *)0x0;
  local_c = 7;
  puStack_e = (undefined2 *)*(undefined2 *)0x1b40;
  iStack_10 = *(undefined2 *)0xa5c;
  iStack_12 = *(undefined2 *)0xa60;
  uStack_14 = *(undefined2 *)0xa5c;
  uStack_16 = 0x1def;
  uStack_18 = 0xbb9b;
  FUN_1def_1460();
  local_8 = (undefined2 *)0x1def;
  local_a = (undefined2 *)0xbba6;
  FUN_1885_2988();
  local_8 = (undefined2 *)0xbbab;
  FUN_1885_1f49();
  return 1;
}


