/* 13bf:0a34 */

undefined2 __cdecl16far FUN_13bf_0a34(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 auStack_3c [5];
  undefined2 auStack_32 [5];
  undefined2 auStack_28 [4];
  undefined2 uStack_20;
  uint local_1e;
  undefined2 auStack_1c [5];
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 *local_c;
  undefined2 *local_a;
  undefined2 *puStack_8;
  undefined2 *local_6;
  
  local_6 = (undefined2 *)0x462f;
  FUN_32b2_02bc();
  if (*(char *)0xb782 == '\0') {
    local_6 = (undefined2 *)0x32b2;
    puStack_8 = (undefined2 *)0x4641;
    FUN_1885_3b7a();
    local_6 = (undefined2 *)0x0;
    puStack_8 = (undefined2 *)0x1885;
    local_a = (undefined2 *)0x4648;
    FUN_13bf_0898();
    uVar2 = *(undefined2 *)0xc32;
    local_e = *(undefined2 *)0xc48;
    local_c = (undefined2 *)*(undefined2 *)0xc4a;
    local_12 = *(undefined2 *)0xc4c;
    local_10 = *(undefined2 *)0xc4e;
    *(undefined2 *)0xa5c = 0;
    local_6 = (undefined2 *)0x1885;
    puStack_8 = (undefined2 *)0x467a;
    puVar3 = (undefined2 *)FUN_13bf_000c();
    uVar5 = puVar3[1];
    *(undefined2 *)0xc30 = *puVar3;
    *(undefined2 *)0xc32 = uVar5;
    local_6 = (undefined2 *)0x0;
    puStack_8 = (undefined2 *)0x1885;
    local_a = (undefined2 *)0x4690;
    FUN_1885_5256();
    local_6 = (undefined2 *)(*(int *)0xa5a + -1);
    puStack_8 = (undefined2 *)(*(int *)0xa58 + -1);
    local_a = (undefined2 *)0x191;
    local_c = (undefined2 *)0x1;
    local_e = 0x1885;
    local_10 = 0x46a8;
    FUN_1885_1f1b();
    local_6 = (undefined2 *)(*(int *)0xa5a + -1);
    puStack_8 = (undefined2 *)(*(int *)0xa58 + -1);
    local_a = (undefined2 *)0x191;
    local_c = (undefined2 *)0x1;
    local_e = 0x1885;
    uVar5 = 0x1def;
    local_10 = 0x46c2;
    FUN_1def_12e8();
    if (*(int *)0xc0c < 0) {
      local_6 = (undefined2 *)0x1;
      puStack_8 = (undefined2 *)0x1def;
      uVar5 = 0x21f2;
      local_a = (undefined2 *)0x46d5;
      FUN_21f2_27eb();
    }
    local_6 = (undefined2 *)(*(int *)0xa5a + -1);
    puStack_8 = (undefined2 *)(*(int *)0xa58 + -1);
    local_a = (undefined2 *)0x191;
    local_c = (undefined2 *)0x1;
    uVar6 = 0x1def;
    local_10 = 0x46ed;
    local_e = uVar5;
    FUN_1def_12e8();
    if (1 < *(byte *)0x125) {
      for (local_1e = 0; uVar1 = local_1e, (int)local_1e < 5; local_1e = local_1e + 1) {
        auStack_1c[local_1e] = 0;
        auStack_32[local_1e] = 0;
        auStack_28[uVar1] = 0;
        auStack_3c[uVar1] = 0;
        puStack_8 = (undefined2 *)0x4754;
        local_6 = (undefined2 *)uVar6;
        FUN_32b2_6d14();
        uVar7 = (int)(local_1e << 1) < 0;
        uVar8 = (local_1e & 0x3fff) == 0;
        local_6 = (undefined2 *)0x32b2;
        puStack_8 = (undefined2 *)0x4764;
        FUN_32b2_6cc6();
        local_6 = (undefined2 *)0x32b2;
        puStack_8 = (undefined2 *)0x4769;
        FUN_32b2_7258();
        local_6 = (undefined2 *)0x32b2;
        uVar6 = 0x32b2;
        puStack_8 = (undefined2 *)0x476e;
        FUN_32b2_7191();
        if (!(bool)uVar7 && !(bool)uVar8) {
          local_6 = auStack_3c + local_1e;
          puStack_8 = auStack_28 + local_1e;
          local_a = auStack_32 + local_1e;
          local_c = auStack_1c + local_1e;
          local_e = 0x32b2;
          local_10 = 0x478e;
          FUN_32b2_6cc6();
          local_e = 0x32b2;
          local_10 = 0x4793;
          FUN_32b2_7258();
          auStack_1c[3] = 0x32b2;
          auStack_1c[2] = 0x479d;
          FUN_32b2_6eb1();
          auStack_1c[3] = 0x32b2;
          auStack_1c[2] = 0x47b1;
          FUN_32b2_6cc6();
          auStack_1c[3] = 0x32b2;
          auStack_1c[2] = 0x47b6;
          FUN_32b2_7258();
          local_1e = 0x32b2;
          uStack_20 = 0x47c0;
          FUN_32b2_6eb1();
          local_1e = 0x32b2;
          uStack_20 = 0x47c9;
          FUN_32b2_6cc6();
          local_1e = 0x32b2;
          uStack_20 = 0x47ce;
          FUN_32b2_7258();
          auStack_28[1] = 0x32b2;
          auStack_28[0] = 0x47d8;
          FUN_32b2_6eb1();
          auStack_28[1] = 0x32b2;
          auStack_28[0] = 0x47e1;
          FUN_32b2_6cc6();
          auStack_28[1] = 0x32b2;
          auStack_28[0] = 0x47e6;
          FUN_32b2_7258();
          auStack_32[2] = 0x32b2;
          auStack_32[1] = 0x47f0;
          FUN_32b2_6eb1();
          auStack_32[2] = 0x32b2;
          auStack_32[1] = 0x47f4;
          FUN_13bf_03fb();
          if ((int)local_1e < 1) {
            iVar4 = 1;
          }
          else {
            iVar4 = local_1e + 2;
          }
          puStack_8 = (undefined2 *)*(undefined2 *)(iVar4 * 2 + 0xa70);
          local_6 = (undefined2 *)0x0;
          local_a = (undefined2 *)0x5;
          local_c = puStack_8;
          local_e = auStack_3c[local_1e];
          local_10 = auStack_28[local_1e];
          local_12 = auStack_32[local_1e];
          auStack_1c[4] = auStack_1c[local_1e];
          auStack_1c[3] = 0x32b2;
          uVar6 = 0x1def;
          auStack_1c[2] = 0x4729;
          FUN_1def_1460();
        }
      }
    }
    uVar5 = uVar6;
    if (0 < *(int *)0xc0c) {
      local_6 = (undefined2 *)0x1;
      uVar5 = 0x21f2;
      local_a = (undefined2 *)0x4818;
      puStack_8 = (undefined2 *)uVar6;
      FUN_21f2_27eb();
    }
    local_6 = (undefined2 *)(*(int *)0xa5a + -1);
    puStack_8 = (undefined2 *)(*(int *)0xa58 + -1);
    local_a = (undefined2 *)0x191;
    local_c = (undefined2 *)0x1;
    local_10 = 0x4830;
    local_e = uVar5;
    FUN_1def_12e8();
    if (1 < *(byte *)0x125) {
      local_1e = 0;
      do {
        local_6 = (undefined2 *)0x0;
        puStack_8 = (undefined2 *)0x0;
        local_a = (undefined2 *)0x1;
        local_c = (undefined2 *)0x0;
        local_e = auStack_3c[local_1e];
        local_10 = auStack_28[local_1e];
        local_12 = auStack_32[local_1e];
        auStack_1c[4] = auStack_1c[local_1e];
        auStack_1c[3] = 0x1def;
        auStack_1c[2] = 0x4860;
        FUN_1def_1460();
        local_1e = local_1e + 1;
      } while ((int)local_1e < 5);
    }
    local_6 = (undefined2 *)0x0;
    puStack_8 = (undefined2 *)0x1def;
    local_a = (undefined2 *)0x4874;
    FUN_1885_5256();
    *(undefined2 *)0xc30 = local_6;
    *(undefined2 *)0xc32 = uVar2;
    *(undefined2 *)0xc48 = local_e;
    *(undefined2 *)0xc4a = local_c;
    *(undefined2 *)0xc4c = local_12;
    *(undefined2 *)0xc4e = local_10;
    *(undefined2 *)0xa5c = *(undefined2 *)0xa58;
    *(undefined2 *)0xa60 = *(undefined2 *)0xa5a;
    local_6 = (undefined2 *)0x1885;
    puStack_8 = (undefined2 *)0x48ad;
    FUN_1885_1f49();
    local_6 = (undefined2 *)0x1;
    puStack_8 = (undefined2 *)0x1885;
    local_a = (undefined2 *)0x48b5;
    FUN_13bf_0898();
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


