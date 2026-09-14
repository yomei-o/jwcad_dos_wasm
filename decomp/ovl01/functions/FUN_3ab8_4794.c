/* 3ab8:4794 */

void FUN_3ab8_4794(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int unaff_BP;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  do {
    if ((bool)in_ZF) {
      FUN_3ab8_4945();
      return;
    }
    while( true ) {
      do {
        *(int *)(unaff_BP + -0x166) = *(int *)(unaff_BP + -0x166) + 1;
        if (*(int *)(unaff_BP + -0x16a) < *(int *)(unaff_BP + -0x166)) {
          FUN_3ab8_4aaa();
          return;
        }
        uStack_6 = 0xf333;
        uVar8 = func_0x000003ef();
      } while ((*(byte *)((int)uVar8 + 10) & 2) == 0);
      *(undefined2 *)*(undefined2 *)(unaff_BP + 6) = 1;
      uStack_6 = 0xf34f;
      puVar9 = (undefined2 *)func_0x000003ef();
      puVar6 = (undefined2 *)puVar9;
      puVar5 = (undefined2 *)(unaff_BP + -0xc);
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      if ((*(char *)0xb1ea != '\0') && (*(char *)0xb1ea != '\x03')) break;
      uStack_6 = 0;
      uStack_8 = 0xf37b;
      uVar3 = FUN_3ab8_401b();
      *(undefined1 *)(unaff_BP + -4) = uVar3;
      if (*(byte *)(unaff_BP + -3) < 0x5a) {
        if (*(int *)(unaff_BP + 10) != 0) {
          *(undefined1 *)(unaff_BP + -3) = *(undefined1 *)0x1d0;
        }
        uStack_6 = *(undefined2 *)(unaff_BP + 0x38);
        uStack_8 = *(undefined2 *)(unaff_BP + 0x36);
        uStack_a = *(undefined2 *)(unaff_BP + 0x34);
        uStack_c = *(undefined2 *)(unaff_BP + 0x32);
        func_0x000297e6(0,unaff_BP + -0x16e,unaff_BP + -0x176,*(undefined2 *)(unaff_BP + 0x2e),
                        *(undefined2 *)(unaff_BP + 0x30));
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        FUN_3ab8_04af(*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10),
                      *(undefined2 *)(unaff_BP + 0x12),*(undefined2 *)(unaff_BP + 0x14),
                      *(undefined2 *)(unaff_BP + 0x16),*(undefined2 *)(unaff_BP + 0x18),
                      *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c));
        func_0x000297e6();
        func_0x00029d78();
        uStack_a = 0x22b2;
        uStack_c = 0xf41c;
        func_0x000299d1();
        uStack_a = 0x22b2;
        uStack_c = 0xf425;
        func_0x000297e6();
        uStack_a = 0x22b2;
        uStack_c = 0xf42a;
        func_0x00029d78();
        func_0x000299d1(0x22b2);
        FUN_1def_05d1(0x22b2,0);
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c74();
        func_0x00029c74();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029d78();
        uStack_a = 0x22b2;
        uStack_c = 0xf47b;
        func_0x000299d1();
        uStack_a = 0x22b2;
        uStack_c = 0xf484;
        func_0x000297e6();
        uStack_a = 0x22b2;
        uStack_c = 0xf489;
        func_0x00029d78();
        func_0x000299d1(0x22b2);
        func_0x0001e558(0x22b2,0);
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c74();
        func_0x00029c74();
        func_0x00029983();
      }
      else {
        *(undefined1 *)0xb49c = 1;
      }
      uStack_6 = 0xf29b;
      func_0x0000daa6();
      puVar6 = &uStack_c;
      puVar5 = (undefined2 *)(unaff_BP + -0xc);
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = *puVar9;
      }
      puVar5 = &uStack_c;
      iVar4 = func_0x0001efe0(0x885);
      if (iVar4 != 0) {
        puVar6 = (undefined2 *)(unaff_BP + -0xc);
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          puVar9 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar1 = *puVar9;
        }
        uVar7 = 0x11f2;
        func_0x000189f5(0x1bb4,*(undefined2 *)0x152);
        if (*(char *)(*(byte *)(unaff_BP + -4) + 0xb4a6) == '\0') {
          *(undefined1 *)(*(byte *)(unaff_BP + -4) + 0xb4a6) = 1;
          uStack_6 = 0xf2eb;
          func_0x0000b1d8();
          uVar7 = 0x885;
          uStack_6 = 0xf2f4;
          func_0x0000daa6();
        }
        uStack_8 = 0xf302;
        uStack_6 = uVar7;
        func_0x0001f185();
        FUN_3ab8_4799();
        return;
      }
    }
    uStack_6 = 0xf311;
    iVar4 = func_0x00008854();
    in_ZF = iVar4 == 0;
  } while( true );
}


