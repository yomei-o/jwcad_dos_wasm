/* 3ab8:517f */

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


