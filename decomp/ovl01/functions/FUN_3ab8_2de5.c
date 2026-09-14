/* 3ab8:2de5 */

void FUN_3ab8_2de5(void)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint *puVar5;
  int iVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar10;
  undefined4 uVar11;
  undefined2 uStack_2a;
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
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  do {
    FUN_28b3_0d8b();
    uVar9 = 0x22b2;
    func_0x00029983();
    if (*(int *)(unaff_BP + 6) != 0) {
      puVar5 = (uint *)*(undefined2 *)(unaff_BP + 0x18);
      puVar1 = puVar5;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      puVar5[1] = puVar5[1] + (uint)(0xfffe < uVar2);
      if (((int)puVar5[1] <= *(int *)0x13e) &&
         (((int)puVar5[1] < *(int *)0x13e || (*puVar5 < *(uint *)0x13c)))) {
        iStack_6 = 0x22b2;
        uVar9 = 0;
        iStack_8 = 0xd9a1;
        uVar11 = func_0x0000013f();
        *(undefined2 *)(unaff_BP + -0xf6) = (int)uVar11;
        *(undefined2 *)(unaff_BP + -0xf4) = (int)((ulong)uVar11 >> 0x10);
        puVar7 = (undefined2 *)(unaff_BP + -0x3c);
        puVar10 = (undefined2 *)*(undefined4 *)(unaff_BP + -0xf6);
        puVar8 = (undefined2 *)puVar10;
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4 = puVar8;
          puVar8 = puVar8 + 1;
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar4 = *puVar3;
        }
      }
    }
    iStack_8 = 0xd9c8;
    iStack_6 = uVar9;
    func_0x000297e6();
    iStack_6 = 0x22b2;
    iStack_8 = 0xd9cd;
    func_0x00029d78();
    iStack_6 = 0x22b2;
    iStack_8 = 0xd9d2;
    iStack_6 = FUN_28b3_0f51();
    iStack_8 = 0x22b2;
    iStack_a = 0xd9db;
    func_0x000297e6();
    iStack_8 = 0x22b2;
    iStack_a = 0xd9e0;
    func_0x00029d78();
    iStack_8 = 0x22b2;
    iStack_a = 0xd9e5;
    iStack_8 = FUN_28b3_0f51();
    iStack_a = 0x22b2;
    uStack_c = 0xd9ee;
    func_0x000297e6();
    iStack_a = 0x22b2;
    uStack_c = 0xd9f3;
    func_0x00029d78();
    iStack_a = 0x22b2;
    uStack_c = 0xd9f8;
    iStack_a = FUN_28b3_0f51();
    uStack_c = 0x22b2;
    puStack_e = (undefined1 *)0xda01;
    func_0x000297e6();
    uStack_c = 0x22b2;
    puStack_e = (undefined1 *)0xda06;
    func_0x00029d78();
    uStack_c = 0x22b2;
    puStack_e = (undefined1 *)0xda0b;
    uStack_c = FUN_28b3_0f51();
    puStack_e = (undefined1 *)0x22b2;
    uVar9 = 0xdef;
    uStack_10 = 0xda11;
    func_0x0000f19e();
    do {
      if (*(int *)(unaff_BP + -0x70) != 0) {
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        uVar9 = 0x22b2;
        func_0x00029983();
        if (*(int *)(unaff_BP + 6) != 0) {
          puVar5 = (uint *)*(undefined2 *)(unaff_BP + 0x18);
          puVar1 = puVar5;
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          puVar5[1] = puVar5[1] + (uint)(0xfffe < uVar2);
          if (((int)puVar5[1] <= *(int *)0x13e) &&
             (((int)puVar5[1] < *(int *)0x13e || (*puVar5 < *(uint *)0x13c)))) {
            iStack_6 = 0x22b2;
            uVar9 = 0;
            iStack_8 = 0xda89;
            uVar11 = func_0x0000013f();
            *(undefined2 *)(unaff_BP + -0xf6) = (int)uVar11;
            *(undefined2 *)(unaff_BP + -0xf4) = (int)((ulong)uVar11 >> 0x10);
            puVar7 = (undefined2 *)(unaff_BP + -0x3c);
            puVar10 = (undefined2 *)*(undefined4 *)(unaff_BP + -0xf6);
            puVar8 = (undefined2 *)puVar10;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar4 = puVar8;
              puVar8 = puVar8 + 1;
              puVar3 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar4 = *puVar3;
            }
          }
        }
        iStack_8 = 0xdaae;
        iStack_6 = uVar9;
        func_0x000297e6();
        iStack_6 = 0x22b2;
        iStack_8 = 0xdab3;
        func_0x00029d78();
        iStack_6 = 0x22b2;
        iStack_8 = 0xdab8;
        iStack_6 = FUN_28b3_0f51();
        iStack_8 = 0x22b2;
        iStack_a = 0xdac1;
        func_0x000297e6();
        iStack_8 = 0x22b2;
        iStack_a = 0xdac6;
        func_0x00029d78();
        iStack_8 = 0x22b2;
        iStack_a = 0xdacb;
        iStack_8 = FUN_28b3_0f51();
        iStack_a = 0x22b2;
        uStack_c = 0xdad4;
        func_0x000297e6();
        iStack_a = 0x22b2;
        uStack_c = 0xdad9;
        func_0x00029d78();
        iStack_a = 0x22b2;
        uStack_c = 0xdade;
        iStack_a = FUN_28b3_0f51();
        uStack_c = 0x22b2;
        puStack_e = (undefined1 *)0xdae7;
        func_0x000297e6();
        uStack_c = 0x22b2;
        puStack_e = (undefined1 *)0xdaec;
        func_0x00029d78();
        uStack_c = 0x22b2;
        puStack_e = (undefined1 *)0xdaf1;
        uStack_c = FUN_28b3_0f51();
        puStack_e = (undefined1 *)0x22b2;
        uVar9 = 0xdef;
        uStack_10 = 0xdaf7;
        func_0x0000f19e();
      }
      if (*(int *)(unaff_BP + -0x6e) != 0) {
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        uVar9 = 0x22b2;
        func_0x00029983();
        if (*(int *)(unaff_BP + 6) != 0) {
          puVar5 = (uint *)*(undefined2 *)(unaff_BP + 0x18);
          puVar1 = puVar5;
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          puVar5[1] = puVar5[1] + (uint)(0xfffe < uVar2);
          if (((int)puVar5[1] <= *(int *)0x13e) &&
             (((int)puVar5[1] < *(int *)0x13e || (*puVar5 < *(uint *)0x13c)))) {
            iStack_6 = 0x22b2;
            uVar9 = 0;
            iStack_8 = 0xdb6f;
            uVar11 = func_0x0000013f();
            *(undefined2 *)(unaff_BP + -0xf6) = (int)uVar11;
            *(undefined2 *)(unaff_BP + -0xf4) = (int)((ulong)uVar11 >> 0x10);
            puVar7 = (undefined2 *)(unaff_BP + -0x3c);
            puVar10 = (undefined2 *)*(undefined4 *)(unaff_BP + -0xf6);
            puVar8 = (undefined2 *)puVar10;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar4 = puVar8;
              puVar8 = puVar8 + 1;
              puVar3 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar4 = *puVar3;
            }
          }
        }
        iStack_8 = 0xdb94;
        iStack_6 = uVar9;
        func_0x000297e6();
        iStack_6 = 0x22b2;
        iStack_8 = 0xdb99;
        func_0x00029d78();
        iStack_6 = 0x22b2;
        iStack_8 = 0xdb9e;
        iStack_6 = FUN_28b3_0f51();
        iStack_8 = 0x22b2;
        iStack_a = 0xdba7;
        func_0x000297e6();
        iStack_8 = 0x22b2;
        iStack_a = 0xdbac;
        func_0x00029d78();
        iStack_8 = 0x22b2;
        iStack_a = 0xdbb1;
        iStack_8 = FUN_28b3_0f51();
        iStack_a = 0x22b2;
        uStack_c = 0xdbba;
        func_0x000297e6();
        iStack_a = 0x22b2;
        uStack_c = 0xdbbf;
        func_0x00029d78();
        iStack_a = 0x22b2;
        uStack_c = 0xdbc4;
        iStack_a = FUN_28b3_0f51();
        uStack_c = 0x22b2;
        puStack_e = (undefined1 *)0xdbcd;
        func_0x000297e6();
        uStack_c = 0x22b2;
        puStack_e = (undefined1 *)0xdbd2;
        func_0x00029d78();
        uStack_c = 0x22b2;
        puStack_e = (undefined1 *)0xdbd7;
        uStack_c = FUN_28b3_0f51();
        puStack_e = (undefined1 *)0x22b2;
        uVar9 = 0xdef;
        uStack_10 = 0xdbdd;
        func_0x0000f19e();
      }
      if (*(int *)(unaff_BP + -0x6c) != 0) {
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029983();
        FUN_28b3_0d8b();
        uVar9 = 0x22b2;
        func_0x00029983();
        if (*(int *)(unaff_BP + 6) != 0) {
          puVar5 = (uint *)*(undefined2 *)(unaff_BP + 0x18);
          puVar1 = puVar5;
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          puVar5[1] = puVar5[1] + (uint)(0xfffe < uVar2);
          if (((int)puVar5[1] <= *(int *)0x13e) &&
             (((int)puVar5[1] < *(int *)0x13e || (*puVar5 < *(uint *)0x13c)))) {
            iStack_6 = 0x22b2;
            uVar9 = 0;
            iStack_8 = 0xdc55;
            uVar11 = func_0x0000013f();
            *(undefined2 *)(unaff_BP + -0xf6) = (int)uVar11;
            *(undefined2 *)(unaff_BP + -0xf4) = (int)((ulong)uVar11 >> 0x10);
            puVar7 = (undefined2 *)(unaff_BP + -0x3c);
            puVar10 = (undefined2 *)*(undefined4 *)(unaff_BP + -0xf6);
            puVar8 = (undefined2 *)puVar10;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar4 = puVar8;
              puVar8 = puVar8 + 1;
              puVar3 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar4 = *puVar3;
            }
          }
        }
        iStack_8 = 0xdc7a;
        iStack_6 = uVar9;
        func_0x000297e6();
        iStack_6 = 0x22b2;
        iStack_8 = 0xdc7f;
        func_0x00029d78();
        iStack_6 = 0x22b2;
        iStack_8 = 0xdc84;
        iStack_6 = FUN_28b3_0f51();
        iStack_8 = 0x22b2;
        iStack_a = 0xdc8d;
        func_0x000297e6();
        iStack_8 = 0x22b2;
        iStack_a = 0xdc92;
        func_0x00029d78();
        iStack_8 = 0x22b2;
        iStack_a = 0xdc97;
        iStack_8 = FUN_28b3_0f51();
        iStack_a = 0x22b2;
        uStack_c = 0xdca0;
        func_0x000297e6();
        iStack_a = 0x22b2;
        uStack_c = 0xdca5;
        func_0x00029d78();
        iStack_a = 0x22b2;
        uStack_c = 0xdcaa;
        iStack_a = FUN_28b3_0f51();
        uStack_c = 0x22b2;
        puStack_e = (undefined1 *)0xdcb3;
        func_0x000297e6();
        uStack_c = 0x22b2;
        puStack_e = (undefined1 *)0xdcb8;
        func_0x00029d78();
        uStack_c = 0x22b2;
        puStack_e = (undefined1 *)&SUB_0000_dcbd;
        uStack_c = FUN_28b3_0f51();
        puStack_e = (undefined1 *)0x22b2;
        uVar9 = 0xdef;
        uStack_10 = 0xdcc3;
        func_0x0000f19e();
      }
      if (*(int *)(unaff_BP + -4) != 0) {
        if ((*(byte *)(unaff_BP + -0xb8) & 0x7f) == 0x7f) {
          iStack_6 = *(int *)(unaff_BP + 0xe);
          iStack_8 = *(int *)(unaff_BP + 0xc);
          iStack_a = *(int *)(unaff_BP + 10);
          puStack_e = (undefined1 *)0xdcf0;
          uStack_c = uVar9;
          uVar9 = func_0x00006608();
          *(undefined2 *)*(undefined2 *)(unaff_BP + 8) = uVar9;
          if (*(char *)0xc0e != '\0') {
            return;
          }
          if ((*(int *)*(undefined2 *)(unaff_BP + 8) != 0) ||
             (*(int *)*(undefined2 *)(unaff_BP + 0x12) != 0)) {
            iStack_6 = -0x22e6;
            func_0x0000daa6();
            *(undefined2 *)(unaff_BP + -4) = 0;
            func_0x0000c3ca();
          }
        }
        else if ((*(byte *)0xc3be & 1) == 0) {
          iStack_6 = -0x27a8;
          func_0x0000daa6();
        }
        else {
          func_0x0000dc89();
        }
      }
      do {
        *(int *)(unaff_BP + -0xb8) = *(int *)(unaff_BP + -0xb8) + 1;
        if (*(int *)(unaff_BP + -2) < *(int *)(unaff_BP + -0xb8)) {
          FUN_3ab8_31a8();
          return;
        }
        uVar9 = 0;
        iStack_6 = -0x2791;
        puVar10 = (undefined2 *)func_0x00000398();
        puVar8 = (undefined2 *)puVar10;
        puVar7 = (undefined2 *)(unaff_BP + -0xee);
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4 = puVar7;
          puVar7 = puVar7 + 1;
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar4 = *puVar3;
        }
      } while (((*(byte *)(unaff_BP + -0xd8) & 2) == 0) || (0x59 < *(byte *)(unaff_BP + -0xda)));
      iStack_6 = unaff_BP + -0x66;
      iStack_8 = *(undefined2 *)(unaff_BP + 0x4a);
      iStack_a = *(undefined2 *)(unaff_BP + 0x48);
      uStack_c = *(undefined2 *)(unaff_BP + 0x46);
      puStack_e = (undefined1 *)*(undefined2 *)(unaff_BP + 0x44);
      uStack_10 = *(undefined2 *)(unaff_BP + 0x42);
      uStack_12 = *(undefined2 *)(unaff_BP + 0x40);
      uStack_14 = *(undefined2 *)(unaff_BP + 0x3e);
      uStack_16 = *(undefined2 *)(unaff_BP + 0x3c);
      uStack_18 = *(undefined2 *)(unaff_BP + 0x3a);
      uStack_1a = *(undefined2 *)(unaff_BP + 0x38);
      uStack_1c = *(undefined2 *)(unaff_BP + 0x36);
      uStack_1e = *(undefined2 *)(unaff_BP + 0x34);
      uStack_20 = *(undefined2 *)(unaff_BP + 0x32);
      uStack_22 = *(undefined2 *)(unaff_BP + 0x30);
      uStack_24 = *(undefined2 *)(unaff_BP + 0x2e);
      uStack_26 = *(undefined2 *)(unaff_BP + 0x2c);
      uStack_28 = *(undefined2 *)(unaff_BP + 0x2a);
      uStack_2a = *(undefined2 *)(unaff_BP + 0x28);
      FUN_3ab8_21e1(unaff_BP + -0xee,*(undefined2 *)(unaff_BP + 0x1c),
                    *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                    *(undefined2 *)(unaff_BP + 0x22),*(undefined2 *)(unaff_BP + 0x24),
                    *(undefined2 *)(unaff_BP + 0x26));
      iStack_6 = unaff_BP + -0x22;
      iStack_8 = unaff_BP + -0x10;
      iStack_a = unaff_BP + -0x72;
      uStack_c = *(undefined2 *)(unaff_BP + -0x84);
      puStack_e = (undefined1 *)*(undefined2 *)(unaff_BP + -0x86);
      uStack_10 = *(undefined2 *)(unaff_BP + -100);
      uStack_12 = *(undefined2 *)(unaff_BP + -0x66);
      puVar8 = &uStack_2a;
      puVar7 = (undefined2 *)(unaff_BP + -0xee);
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = *puVar10;
      }
      FUN_3ab8_2766();
    } while (*(int *)(unaff_BP + -0x72) == 0);
    FUN_28b3_0d8b();
    func_0x00029983();
    FUN_28b3_0d8b();
    func_0x00029983();
    FUN_28b3_0d8b();
    func_0x00029983();
  } while( true );
}


