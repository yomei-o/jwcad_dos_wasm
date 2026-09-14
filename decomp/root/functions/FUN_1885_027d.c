/* 1885:027d */

undefined2 __cdecl16far FUN_1885_027d(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  byte bVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  undefined2 *******in_DX;
  undefined2 *******extraout_DX;
  undefined2 *******extraout_DX_00;
  uint uVar7;
  undefined2 *******pppppppuVar8;
  undefined2 *******pppppppuVar9;
  undefined2 unaff_DS;
  undefined2 ****local_46 [2];
  undefined2 *****local_42 [2];
  uint local_3e;
  int local_3c;
  undefined2 ******local_3a;
  undefined2 *****local_38;
  undefined2 ******local_36;
  int local_34;
  int local_32;
  uint local_30;
  int local_2e;
  int local_2c;
  undefined1 local_2a [6];
  undefined2 uStack_24;
  int local_22;
  undefined2 ****local_20;
  undefined2 uStack_1e;
  int iStack_18;
  int iStack_16;
  undefined2 local_14;
  int iStack_12;
  undefined2 ******ppppppuStack_10;
  undefined2 ******ppppppuStack_e;
  undefined2 ******ppppppuStack_c;
  undefined2 ******local_a;
  undefined2 ******local_8;
  undefined2 ******local_6;
  
  local_6 = (undefined2 ******)0x8ad8;
  FUN_32b2_02bc();
  local_22 = 0;
  *(undefined1 *)0xc17 = 1;
  if (*(char *)0x136 != '\0') {
    *(undefined1 *)0xc17 = 0;
  }
  local_6 = (undefined2 ******)0x32b2;
  local_8 = (undefined2 ******)0x8af4;
  FUN_2b6e_0033();
  local_6 = (undefined2 ******)0x2b6e;
  local_8 = (undefined2 ******)0x8af9;
  FUN_21f2_1ef9();
  local_30 = 0;
  local_3e = 0xffff;
  pppppppuVar9 = (undefined2 *******)0x21f2;
  if (param_1 != 0) {
    local_34 = param_1;
    local_6 = (undefined2 ******)0x21f2;
    local_8 = (undefined2 ******)0x8b1a;
    FUN_32b2_6d14();
    local_6 = (undefined2 ******)0x32b2;
    local_8 = (undefined2 ******)0x8b22;
    FUN_32b2_6e63();
    local_6 = (undefined2 ******)0x32b2;
    local_8 = (undefined2 ******)0x8b2a;
    FUN_32b2_6d14();
    local_6 = (undefined2 ******)0x32b2;
    pppppppuVar9 = (undefined2 *******)0x32b2;
    local_8 = (undefined2 ******)0x8b32;
    FUN_32b2_6e63();
    in_DX = extraout_DX;
    goto LAB_1885_02e2;
  }
LAB_1885_0545:
  do {
    if (*(char *)0xb782 == '\0') {
      if ((*(char *)0xc16 == '\0') && (local_30 == 0)) {
        ppppppuStack_e = (undefined2 ******)0x17e7;
      }
      else {
        ppppppuStack_e = (undefined2 ******)0xa0e;
      }
      local_6 = (undefined2 ******)0x0;
      local_8 = (undefined2 ******)0x7;
      local_a = (undefined2 ******)0x4;
      ppppppuStack_c = (undefined2 ******)0x2;
      iStack_12 = 0x8bee;
      ppppppuStack_10 = pppppppuVar9;
      FUN_1def_23c5();
      local_6 = (undefined2 ******)0x0;
      local_8 = (undefined2 ******)0x1def;
      local_a = (undefined2 ******)0x8bf8;
      FUN_1885_5256();
      local_6 = (undefined2 ******)*(undefined2 *)0x1b40;
      local_8 = (undefined2 ******)*(undefined2 *)0x1b3e;
      local_a = (undefined2 ******)0x0;
      ppppppuStack_c = (undefined2 ******)0x0;
      ppppppuStack_e = (undefined2 ******)0x1def;
      ppppppuStack_10 = (undefined2 ******)0x8c0a;
      FUN_1def_12e8();
      local_6 = (undefined2 ******)0x1def;
      local_8 = (undefined2 ******)0x8c11;
      FUN_1885_1faf();
      local_6 = (undefined2 ******)0x0;
      local_8 = (undefined2 ******)0x0;
      local_a = (undefined2 *******)0x1;
      ppppppuStack_c = (undefined2 *******)0x7;
      ppppppuStack_e = (undefined2 *******)0x30;
      ppppppuStack_10 = (undefined2 ******)*(uint *)0xa58;
      iStack_12 = *(int *)0xa5e;
      local_14 = 0;
      iStack_16 = 0x1def;
      pppppppuVar9 = (undefined2 *******)0x1def;
      iStack_18 = -0x73cf;
      FUN_1def_1460();
      local_6 = (undefined2 ******)0x1def;
      local_8 = (undefined2 ******)0x8c38;
      FUN_1885_1f49();
    }
    local_8 = (undefined2 ******)0x8c3c;
    local_6 = pppppppuVar9;
    FUN_1885_3af0();
    local_8 = (undefined2 ******)0x8c41;
    local_6 = pppppppuVar9;
    FUN_1def_2636();
    local_6 = (undefined2 ******)0x1;
    local_8 = (undefined2 ******)0x1;
    local_a = (undefined2 ******)0x1def;
    ppppppuStack_c = (undefined2 ******)0x8c4b;
    FUN_1def_26a9();
    local_6 = (undefined2 ******)0x17f6;
    local_8 = (undefined2 ******)0x1def;
    local_a = (undefined2 ******)0x8c56;
    FUN_21f2_0356();
    local_6 = (undefined2 ******)0x1;
    local_8 = (undefined2 ******)0x8;
    local_a = (undefined2 ******)0x21f2;
    ppppppuStack_c = (undefined2 ******)0x8c64;
    FUN_1def_26a9();
    local_6 = (undefined2 ******)0x17fc;
    local_8 = (undefined2 ******)0x1def;
    pppppppuVar8 = (undefined2 *******)0x21f2;
    local_a = (undefined2 ******)0x8c6f;
    FUN_21f2_0356();
    if (*(char *)0xc16 != '\0') {
      *(undefined2 *)0xc22 = 1;
      local_6 = (undefined2 ******)0xffff;
      local_8 = (undefined2 ******)0x7;
      local_a = (undefined2 ******)0x2;
      ppppppuStack_c = (undefined2 ******)0x11;
      ppppppuStack_e = (undefined2 ******)0x183c;
      ppppppuStack_10 = (undefined2 ******)0x21f2;
      iStack_12 = 0x8c96;
      FUN_1def_23c5();
      local_30 = 0;
      local_6 = (undefined2 ******)0x0;
      local_8 = (undefined2 ******)0x7;
      local_a = (undefined2 ******)0x1;
      ppppppuStack_c = (undefined2 ******)0xf;
      ppppppuStack_e = (undefined2 *******)0x1843;
      ppppppuStack_10 = (undefined2 *******)0x1def;
      pppppppuVar8 = (undefined2 *******)0x1def;
      iStack_12 = -0x734c;
      FUN_1def_23c5();
    }
    if (local_30 != 0) {
      local_6 = (undefined2 ******)0x1;
      local_8 = (undefined2 ******)0x1a;
      ppppppuStack_c = (undefined2 ******)0x8cca;
      local_a = pppppppuVar8;
      FUN_1def_26a9();
      local_6 = (undefined2 ******)0x184c;
      local_8 = (undefined2 ******)0x1def;
      pppppppuVar8 = (undefined2 *******)0x21f2;
      local_a = (undefined2 ******)0x8cd5;
      FUN_21f2_0356();
    }
    local_2c = 0;
    do {
      *(undefined2 *)0xa4a = 1;
      *(undefined2 *)0xa48 = 1;
      local_6 = (undefined2 ******)&local_34;
      local_8 = (undefined2 ******)local_46;
      local_a = local_42;
      ppppppuStack_c = &local_a;
      ppppppuStack_e = &local_8;
      pppppppuVar9 = (undefined2 *******)0x13bf;
      iStack_12 = -0x7303;
      ppppppuStack_10 = pppppppuVar8;
      local_2c = FUN_13bf_2a18();
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if ((*(int *)0x158 != 0) || (local_2c == -1)) {
        *(undefined1 *)0xc17 = 0;
        if (*(char *)0xc16 != '\0') {
          *(undefined1 *)0xc16 = 0;
          local_6 = (undefined2 ******)0x0;
          local_8 = (undefined2 ******)0x13bf;
          local_a = (undefined2 ******)0x8d2e;
          FUN_21f2_27eb();
        }
        return 0xffff;
      }
      if (((3 < *(byte *)0xb782) && (local_34 != 0)) && ((int)local_8 < *(int *)0xa5c)) {
        in_DX = (undefined2 *******)((int)local_a >> 0xf);
        local_32 = ((int)(((uint)local_a ^ (uint)in_DX) - (int)in_DX) >> 4 ^ (uint)in_DX) -
                   (int)in_DX;
        if (local_32 == 2) {
          local_2c = 0xf00;
        }
      }
      if (((local_34 != 0) && (0x40 < (int)local_8)) &&
         (((int)local_8 < 0xb0 && ((int)local_a < 0x10)))) {
        local_2c = 0x31;
      }
      if (local_2c == 0xf00) {
        local_30 = local_30 ^ 1;
        local_22 = 1;
        goto LAB_1885_0545;
      }
      pppppppuVar8 = pppppppuVar9;
    } while (local_2c == 0);
    if (local_2c == 0x31) {
      local_6 = (undefined2 ******)0x13bf;
      local_8 = (undefined2 ******)0x8dd7;
      FUN_1885_3b7a();
      *(byte *)0xc16 = *(byte *)0xc16 ^ 1;
      local_6 = (undefined2 ******)0x0;
      local_8 = (undefined2 ******)0x13bf;
      local_a = (undefined2 *******)0x8de4;
      FUN_21f2_27eb();
      *(undefined2 *)0xbc0 = 1;
      pppppppuVar9 = (undefined2 *******)0x21f2;
      goto LAB_1885_0545;
    }
  } while (local_2c != 100);
  if (local_30 == 0) {
LAB_1885_02e2:
    local_6 = (undefined2 *******)0x2;
    local_8 = (undefined2 ******)0x14;
    pppppppuVar8 = (undefined2 *******)0x1def;
    ppppppuStack_c = (undefined2 *******)0x8b3f;
    local_a = pppppppuVar9;
    FUN_1def_26a9();
    *(undefined2 *)0xc22 = 1;
    if (local_34 == 1) {
      local_6 = (undefined2 ******)0x1def;
      local_8 = (undefined2 ******)0x8b58;
      FUN_32b2_6cc6();
      local_6 = (undefined2 ******)0x32b2;
      local_8 = (undefined2 ******)0x8b5d;
      FUN_32b2_7258();
      local_6 = (undefined2 ******)0x32b2;
      local_8 = (undefined2 ******)0x8b65;
      FUN_32b2_6eb1();
      local_6 = (undefined2 ******)0x32b2;
      local_8 = (undefined2 ******)0x8b6d;
      FUN_32b2_6cc6();
      local_6 = (undefined2 ******)0x32b2;
      local_8 = (undefined2 ******)0x8b72;
      FUN_32b2_7258();
      local_6 = (undefined2 ******)0x32b2;
      local_8 = (undefined2 ******)0x8b7a;
      FUN_32b2_6eb1();
      local_6 = (undefined2 ******)0x32b2;
      local_8 = (undefined2 ******)0x8b7e;
      FUN_1885_3b7a();
      local_6 = (undefined2 ******)local_2a;
      local_8 = (undefined2 ******)&local_20;
      local_a = (undefined2 *******)0x32b2;
      ppppppuStack_c = (undefined2 *******)0x8b8b;
      local_2e = FUN_2bb4_3aea();
      if (local_2e < 1) {
        local_14 = *(undefined2 *)0x1150;
        *(undefined2 *)0x1150 = 1;
        uVar2 = *(undefined2 *)0xc20;
        *(undefined2 *)0xc20 = 0;
        local_6 = (undefined2 ******)0x2bb4;
        local_8 = (undefined2 ******)0x9034;
        FUN_32b2_6cc6();
        local_6 = (undefined2 *******)0x32b2;
        local_8 = (undefined2 ******)0x9039;
        FUN_32b2_7258();
        ppppppuStack_e = (undefined2 ******)0x32b2;
        ppppppuStack_10 = (undefined2 ******)0x9043;
        FUN_32b2_6eb1();
        ppppppuStack_e = (undefined2 ******)0x32b2;
        ppppppuStack_10 = (undefined2 ******)0x904b;
        FUN_32b2_6cc6();
        ppppppuStack_e = (undefined2 *******)0x32b2;
        ppppppuStack_10 = (undefined2 *******)0x9050;
        FUN_32b2_7258();
        iStack_16 = 0x32b2;
        iStack_18 = 0x905a;
        FUN_32b2_6eb1();
        iStack_16 = 0x32b2;
        pppppppuVar8 = (undefined2 *******)0x21f2;
        iStack_18 = -0x6fa1;
        local_38 = (undefined2 *****)FUN_21f2_5670();
        *(undefined2 *)0x1150 = local_14;
        *(undefined2 *)0xc20 = uVar2;
        local_36 = in_DX;
        if (in_DX == (undefined2 *******)0x0 &&
            (undefined2 ******)local_38 == (undefined2 ******)0x0) goto LAB_1885_0902;
        if (local_22 != 0) {
          pcVar4 = (code *)swi(0x3f);
          local_8 = (undefined2 ******)local_38;
          local_6 = in_DX;
          (*pcVar4)();
          in_DX = extraout_DX_00;
        }
        if (((int)local_36 < 0) ||
           (((int)local_36 < 1 && ((undefined2 ******)local_38 == (undefined2 ******)0x0)))) {
          if (-1 < (int)local_36) goto LAB_1885_08bc;
          local_8 = (undefined2 ******)-(int)local_38;
          iVar6 = -((int)local_36 + (uint)((undefined2 ******)local_38 != (undefined2 ******)0x0));
          local_a = (undefined2 ******)0x21f2;
          ppppppuStack_c = (undefined2 *******)0x90ea;
          local_6 = (undefined2 ******)iVar6;
          iStack_18 = FUN_1000_0271();
          bVar3 = *(byte *)(iStack_18 + 0x1c);
          *(uint *)0xa6a = (uint)*(byte *)(iStack_18 + 0x1b);
          bVar5 = *(byte *)(iStack_18 + 0x1a);
          iStack_16 = iVar6;
        }
        else {
          local_6 = local_36;
          local_8 = (undefined2 ******)local_38;
          local_a = (undefined2 ******)0x21f2;
          ppppppuStack_c = (undefined2 ******)0x90a8;
          ppppppuStack_e = (undefined2 ******)FUN_1000_013f();
          bVar3 = *(byte *)(ppppppuStack_e + 9);
          *(uint *)0xa6a = (uint)*(byte *)((int)ppppppuStack_e + 0x11);
          bVar5 = *(byte *)(ppppppuStack_e + 8);
          ppppppuStack_c = in_DX;
        }
        local_6 = (undefined2 ******)(uint)bVar3;
        pppppppuVar8 = (undefined2 *******)0x1000;
        *(uint *)0xa6c = (uint)bVar5;
      }
      else {
        local_8 = (undefined2 ******)0x2bb4;
        pppppppuVar8 = (undefined2 *******)0x1000;
        local_a = (undefined2 ******)0x8b9d;
        local_6 = (undefined2 ******)local_2e;
        iStack_12 = FUN_1000_03ef();
        local_6 = (undefined2 ******)(uint)*(byte *)(iStack_12 + 8);
        ppppppuStack_10 = in_DX;
        if ((*(char *)(iStack_12 + 9) == '\a') || ((*(int *)0xa62 != 0xe && (5 < *(byte *)0x123))))
        {
          *(undefined1 *)0x1cd = *(undefined1 *)(iStack_12 + 9);
        }
        else {
          *(uint *)0x1d0 = (uint)*(byte *)(iStack_12 + 9);
        }
      }
    }
    else {
LAB_1885_08bc:
      if (local_34 == 2) {
        local_8 = (undefined2 ******)0x911d;
        local_6 = pppppppuVar8;
        FUN_32b2_6cc6();
        local_6 = (undefined2 ******)0x32b2;
        local_8 = (undefined2 ******)0x9122;
        FUN_32b2_7258();
        ppppppuStack_e = (undefined2 ******)0x32b2;
        ppppppuStack_10 = (undefined2 ******)0x912c;
        FUN_32b2_6eb1();
        ppppppuStack_e = (undefined2 ******)0x32b2;
        ppppppuStack_10 = (undefined2 ******)0x9134;
        FUN_32b2_6cc6();
        ppppppuStack_e = (undefined2 *******)0x32b2;
        ppppppuStack_10 = (undefined2 *******)0x9139;
        FUN_32b2_7258();
        iStack_16 = 0x32b2;
        iStack_18 = 0x9143;
        FUN_32b2_6eb1();
        iStack_16 = 0x32b2;
        pppppppuVar8 = (undefined2 *******)0x28b3;
        iStack_18 = -0x6eb8;
        local_2e = FUN_28b3_26d4();
        if (local_2e == 0) {
LAB_1885_0902:
          pppppppuVar9 = pppppppuVar8;
          if (param_1 != 0) goto LAB_1885_0a6f;
          goto LAB_1885_0545;
        }
        local_8 = (undefined2 ******)0x28b3;
        local_a = (undefined2 ******)0x9164;
        local_6 = (undefined2 ******)local_2e;
        local_3c = FUN_1000_0398();
        if ((*(int *)0xa62 == 0xe) && (2 < *(byte *)0x126)) {
          *(uint *)0x1ce = (uint)*(byte *)(local_3c + 0x14);
        }
        else {
          *(uint *)0x168 = (uint)*(byte *)(local_3c + 0x14);
        }
        local_6 = (undefined2 ******)*(undefined2 *)(local_3c + 0x12);
        local_8 = (undefined2 ******)*(undefined2 *)(local_3c + 0x10);
        local_a = (undefined2 ******)0xbf48;
        ppppppuStack_c = (undefined2 ******)0x1000;
        ppppppuStack_e = (undefined2 *******)0x91a9;
        local_3a = in_DX;
        FUN_28b3_0064();
        *(undefined1 *)0xbf7a = 0;
        uVar1 = *(undefined1 *)0x129;
        *(undefined1 *)0x129 = 1;
        local_6 = (undefined2 ******)0x2;
        local_8 = (undefined2 ******)0x1a;
        local_a = (undefined2 ******)0x28b3;
        ppppppuStack_c = (undefined2 *******)0x91c9;
        FUN_1def_26a9();
        local_6 = (undefined2 *******)0xbf48;
        local_8 = (undefined2 ******)0x1def;
        pppppppuVar8 = (undefined2 *******)0x21f2;
        local_a = (undefined2 ******)0x91d4;
        FUN_21f2_0356();
        *(undefined1 *)0x129 = uVar1;
        if (local_22 != 0) {
          local_6 = (undefined2 ******)0x3;
          local_8 = (undefined2 ******)0x1a;
          local_a = (undefined2 ******)0x21f2;
          ppppppuStack_c = (undefined2 *******)0x91f1;
          FUN_1def_26a9();
          *(undefined2 *)0xc22 = 2;
          local_6 = (undefined2 ******)0x1def;
          local_8 = (undefined2 ******)0x920c;
          FUN_32b2_6d9b();
          local_6 = (undefined2 ******)0x32b2;
          local_8 = (undefined2 ******)0x9215;
          FUN_32b2_704d();
          local_6 = (undefined2 *******)0x32b2;
          local_8 = (undefined2 ******)0x921a;
          FUN_32b2_7258();
          ppppppuStack_e = (undefined2 ******)0x32b2;
          ppppppuStack_10 = (undefined2 ******)0x9224;
          FUN_32b2_6eb1();
          ppppppuStack_e = (undefined2 ******)0x32b2;
          ppppppuStack_10 = (undefined2 ******)0x922d;
          FUN_32b2_6d9b();
          ppppppuStack_e = (undefined2 ******)0x32b2;
          ppppppuStack_10 = (undefined2 ******)0x9236;
          FUN_32b2_704d();
          ppppppuStack_e = (undefined2 *******)0x32b2;
          ppppppuStack_10 = (undefined2 *******)0x923b;
          FUN_32b2_7258();
          iStack_16 = 0x32b2;
          iStack_18 = 0x9245;
          FUN_32b2_6eb1();
          iStack_16 = 0x32b2;
          iStack_18 = 0x924e;
          FUN_32b2_6d9b();
          iStack_16 = 0x32b2;
          iStack_18 = 0x9257;
          FUN_32b2_704d();
          iStack_16 = 0x32b2;
          iStack_18 = -0x6da4;
          FUN_32b2_7258();
          uStack_1e = 0x32b2;
          local_20 = (undefined2 *****)0x9266;
          FUN_32b2_6eb1();
          uStack_1e = *(undefined2 *)0x168;
          local_20 = (undefined2 *****)0x1861;
          local_22 = 0x32b2;
          pppppppuVar8 = (undefined2 *******)0x21f2;
          uStack_24 = 0x9273;
          FUN_21f2_0356();
        }
      }
    }
    local_a = (undefined2 *******)0x927d;
    local_8 = pppppppuVar8;
    iVar6 = FUN_1885_0004();
    if (iVar6 == 0) {
      *(undefined2 *)0xb310 = local_6;
      uVar7 = (int)local_6 >> 0xf;
      local_2c = ((int)(((uint)local_6 ^ uVar7) - uVar7) >> 4 ^ uVar7) - uVar7;
      *(undefined1 *)(local_2c + 0xb8e) = *(undefined1 *)0xb310;
      iVar6 = *(int *)0xb310;
      *(undefined1 *)(iVar6 + -0x4c78) = 1;
      *(undefined1 *)(iVar6 + -0x3e90) = 1;
      *(undefined1 *)(local_2c + 0xb6c) = 1;
      *(undefined1 *)(local_2c + 0xb7c) = 1;
      local_a = (undefined2 *******)0x92be;
      local_8 = pppppppuVar8;
      local_6 = (undefined2 ******)local_2c;
      FUN_1885_0209();
    }
    goto LAB_1885_0a6f;
  }
  local_2e = 0;
  local_3e = 0xffff;
  local_6 = (undefined2 ******)0x13bf;
  local_8 = (undefined2 ******)0x8e0a;
  FUN_1885_3b7a();
  if (local_34 == 1) {
    local_6 = (undefined2 ******)0x13bf;
    local_8 = (undefined2 ******)0x8e18;
    FUN_32b2_6cc6();
    local_6 = (undefined2 ******)0x32b2;
    local_8 = (undefined2 ******)0x8e1d;
    FUN_32b2_7258();
    local_6 = (undefined2 ******)0x32b2;
    local_8 = (undefined2 ******)0x8e25;
    FUN_32b2_6eb1();
    local_6 = (undefined2 ******)0x32b2;
    local_8 = (undefined2 ******)0x8e2d;
    FUN_32b2_6cc6();
    local_6 = (undefined2 ******)0x32b2;
    local_8 = (undefined2 ******)0x8e32;
    FUN_32b2_7258();
    local_6 = (undefined2 ******)0x32b2;
    local_8 = (undefined2 ******)0x8e3a;
    FUN_32b2_6eb1();
    local_6 = (undefined2 ******)local_2a;
    local_8 = (undefined2 ******)&local_20;
    local_a = (undefined2 *******)0x32b2;
    ppppppuStack_c = (undefined2 *******)0x8e47;
    local_2e = FUN_2bb4_3aea();
    if (local_2e < 1) {
      local_14 = *(undefined2 *)0x1150;
      *(undefined2 *)0x1150 = 1;
      local_6 = (undefined2 ******)0x2bb4;
      local_8 = (undefined2 ******)0x8f2d;
      FUN_32b2_6cc6();
      local_6 = (undefined2 ******)0x32b2;
      local_8 = (undefined2 ******)0x8f32;
      FUN_32b2_7258();
      ppppppuStack_e = (undefined2 ******)0x32b2;
      ppppppuStack_10 = (undefined2 ******)0x8f3c;
      FUN_32b2_6eb1();
      ppppppuStack_e = (undefined2 ******)0x32b2;
      ppppppuStack_10 = (undefined2 ******)0x8f44;
      FUN_32b2_6cc6();
      ppppppuStack_e = (undefined2 *******)0x32b2;
      ppppppuStack_10 = (undefined2 *******)0x8f49;
      FUN_32b2_7258();
      iStack_16 = 0x32b2;
      iStack_18 = 0x8f53;
      FUN_32b2_6eb1();
      iStack_16 = 0x32b2;
      pppppppuVar9 = (undefined2 *******)0x21f2;
      iStack_18 = -0x70a8;
      local_38 = (undefined2 *****)FUN_21f2_5670();
      *(undefined2 *)0x1150 = local_14;
      local_36 = in_DX;
      if (((int)in_DX < 0) ||
         (((int)in_DX < 1 && ((undefined2 ******)local_38 == (undefined2 ******)0x0)))) {
        if (-1 < (int)in_DX) goto LAB_1885_0545;
        local_8 = (undefined2 ******)-(int)local_38;
        in_DX = (undefined2 *******)
                -((int)in_DX + (uint)((undefined2 ******)local_38 != (undefined2 ******)0x0));
        local_a = (undefined2 *******)0x21f2;
        ppppppuStack_c = (undefined2 *******)0x8fa1;
        local_6 = in_DX;
        iVar6 = FUN_1000_0271();
        bVar5 = *(byte *)(iVar6 + 0x1c);
      }
      else {
        local_a = (undefined2 *******)0x21f2;
        ppppppuStack_c = (undefined2 *******)0x8f7c;
        local_8 = (undefined2 ******)local_38;
        local_6 = in_DX;
        iVar6 = FUN_1000_013f();
        bVar5 = *(byte *)(iVar6 + 0x12);
      }
    }
    else {
      local_8 = (undefined2 ******)0x2bb4;
      local_a = (undefined2 *******)0x8e59;
      local_6 = (undefined2 ******)local_2e;
      iVar6 = FUN_1000_03ef();
      bVar5 = *(byte *)(iVar6 + 8);
    }
    pppppppuVar9 = (undefined2 *******)0x1000;
    local_3e = (uint)bVar5;
  }
  if (local_34 == 2) {
    local_8 = (undefined2 ******)0x8e75;
    local_6 = pppppppuVar9;
    FUN_32b2_6cc6();
    local_6 = (undefined2 ******)0x32b2;
    local_8 = (undefined2 ******)0x8e7a;
    FUN_32b2_7258();
    ppppppuStack_e = (undefined2 ******)0x32b2;
    ppppppuStack_10 = (undefined2 ******)0x8e84;
    FUN_32b2_6eb1();
    ppppppuStack_e = (undefined2 ******)0x32b2;
    ppppppuStack_10 = (undefined2 ******)0x8e8c;
    FUN_32b2_6cc6();
    ppppppuStack_e = (undefined2 *******)0x32b2;
    ppppppuStack_10 = (undefined2 *******)0x8e91;
    FUN_32b2_7258();
    iStack_16 = 0x32b2;
    iStack_18 = 0x8e9b;
    FUN_32b2_6eb1();
    iStack_16 = 0x32b2;
    pppppppuVar9 = (undefined2 *******)0x28b3;
    iStack_18 = -0x7160;
    local_2e = FUN_28b3_26d4();
    if (local_2e < 1) goto LAB_1885_0545;
    local_8 = (undefined2 ******)0x28b3;
    pppppppuVar9 = (undefined2 *******)0x1000;
    local_a = (undefined2 ******)0x8eb3;
    local_6 = (undefined2 ******)local_2e;
    iVar6 = FUN_1000_0398();
    local_3e = (uint)*(byte *)(iVar6 + 0x15);
  }
  if (local_3e == *(uint *)0xb310) {
    *(undefined2 *)0xc22 = 1;
    local_6 = (undefined2 ******)0x2;
    local_8 = (undefined2 ******)0x12;
    ppppppuStack_c = (undefined2 ******)0x8ff4;
    local_a = pppppppuVar9;
    FUN_1def_26a9();
    local_6 = (undefined2 ******)0x60a;
    local_8 = (undefined2 ******)0x1859;
    local_a = (undefined2 *******)0x1def;
    ppppppuStack_c = (undefined2 *******)0x9003;
    FUN_21f2_0356();
    pppppppuVar9 = (undefined2 *******)0x21f2;
  }
  else {
    local_6 = (undefined2 ******)local_3e;
    local_a = (undefined2 *******)0x8ed3;
    local_8 = pppppppuVar9;
    iVar6 = FUN_1885_0004();
    if (iVar6 != 4) {
      uVar7 = (int)local_3e >> 0xf;
      local_2e = ((int)((local_3e ^ uVar7) - uVar7) >> 4 ^ uVar7) - uVar7;
      uVar7 = (int)*(uint *)0xb310 >> 0xf;
      local_2c = ((int)((*(uint *)0xb310 ^ uVar7) - uVar7) >> 4 ^ uVar7) - uVar7;
      if (local_2e == local_2c) {
        *(undefined1 *)(local_3e + 0xb388) = 0;
        *(byte *)(local_3e + 0xc170) = *(byte *)(local_3e + 0xc170) & 6;
      }
      else {
        *(undefined1 *)(local_2e + 0xb7c) = 0;
        *(byte *)(local_2e + 0xb6c) = *(byte *)(local_2e + 0xb6c) & 6;
      }
      *(undefined1 *)0xc17 = 0;
      local_6 = (undefined2 ******)0x0;
      pppppppuVar8 = (undefined2 *******)0x21f2;
      local_a = (undefined2 *******)0x8fc8;
      local_8 = pppppppuVar9;
      FUN_21f2_27eb();
      *(undefined2 *)0xbc0 = 1;
      if (0 < *(int *)0xc62) {
        local_6 = (undefined2 ******)0x21f2;
        pppppppuVar8 = (undefined2 *******)0x13bf;
        local_8 = (undefined2 ******)0x8fde;
        FUN_13bf_0a34();
      }
LAB_1885_0a6f:
      *(undefined1 *)0xc17 = 0;
      pppppppuVar9 = pppppppuVar8;
      if (*(char *)0xc16 != '\0') {
        *(undefined1 *)0xc16 = 0;
        local_6 = (undefined2 ******)0x0;
        pppppppuVar9 = (undefined2 *******)0x21f2;
        local_a = (undefined2 *******)0x92d8;
        local_8 = pppppppuVar8;
        FUN_21f2_27eb();
        *(undefined2 *)0xbc0 = 1;
        if (0 < *(int *)0xc62) {
          local_6 = (undefined2 ******)0x21f2;
          pppppppuVar9 = (undefined2 *******)0x13bf;
          local_8 = (undefined2 ******)0x92eb;
          FUN_13bf_0a34();
        }
      }
      if (*(int *)0xc62 < 0) {
        *(undefined2 *)0xc62 = 0;
      }
      local_8 = (undefined2 ******)0x92fc;
      local_6 = pppppppuVar9;
      FUN_1885_2e9a();
      return 1;
    }
  }
  goto LAB_1885_0545;
}


