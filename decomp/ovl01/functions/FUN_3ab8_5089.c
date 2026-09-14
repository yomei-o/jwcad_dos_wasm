/* 3ab8:5089 */

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


