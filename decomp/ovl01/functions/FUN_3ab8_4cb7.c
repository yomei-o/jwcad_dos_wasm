/* 3ab8:4cb7 */

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


