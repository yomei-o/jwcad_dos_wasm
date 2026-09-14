/* 21f2:573f */

uint __cdecl16far FUN_21f2_573f(void)

{
  byte *pbVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 unaff_DS;
  bool bVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  byte local_b6;
  uint local_aa;
  uint local_a8;
  uint local_a2;
  uint local_a0;
  uint local_9e;
  uint local_9c;
  uint local_92;
  int local_90;
  uint local_8e;
  int local_8c;
  uint local_82;
  uint local_80;
  byte local_2c;
  undefined4 uVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  undefined2 uStack_10;
  undefined2 local_e;
  undefined2 local_c;
  uint local_a;
  
  FUN_32b2_02bc();
  if (*(int *)0x1eba != 1) {
    *(undefined2 *)0x1eba = 0;
  }
  *(undefined2 *)0xb31c = 0;
  *(undefined2 *)0xb31a = 0;
  *(undefined2 *)0xce4 = 0;
  *(undefined2 *)0xce2 = 0;
  local_a = 7;
  local_c = 2;
  local_e = 0x12;
  uStack_10 = 0x1eff;
  FUN_1def_23c5();
  local_a = 0x1def;
  local_c = 0x76af;
  FUN_1885_5256();
  local_8c = 0;
  local_8e = 0;
  iVar19 = 0;
  uVar18 = 0;
  local_a = 0x76dd;
  FUN_32b2_6d14();
  local_a = 0x76e5;
  FUN_32b2_6e4b();
  local_a = 0x76ed;
  FUN_32b2_6ef9();
  local_a = 0x76f5;
  FUN_32b2_6d14();
  local_a = 0x76fe;
  FUN_32b2_6e4b();
  local_a = 0x7706;
  FUN_32b2_6ef9();
  local_a = 0x770f;
  FUN_32b2_6cc6();
  local_a = 0x7718;
  FUN_32b2_7065();
  local_a = 0x7720;
  FUN_32b2_6e4b();
  local_a = 0x7728;
  FUN_32b2_7035();
  local_a = 0x7730;
  FUN_32b2_6e63();
  local_a = 0x7739;
  FUN_32b2_6cc6();
  local_a = 0x7741;
  FUN_32b2_701d();
  local_a = 0x774a;
  FUN_32b2_6e63();
  local_a = 0x7752;
  FUN_32b2_6cc6();
  local_a = 0x775a;
  FUN_32b2_7095();
  local_a = 0x7763;
  FUN_32b2_6e63();
  local_a = 0x776b;
  FUN_32b2_6cc6();
  local_a = 0x7774;
  FUN_32b2_7095();
  local_a = 0x777d;
  FUN_32b2_6e63();
  if ((int)local_80 < 0) {
    bVar13 = local_82 != 0;
    local_82 = -local_82;
    local_80 = -((local_80 & 0x7fff) + (uint)bVar13);
  }
  if ((int)local_9c < 0) {
    bVar13 = local_9e != 0;
    local_9e = -local_9e;
    local_9c = -((local_9c & 0x7fff) + (uint)bVar13);
  }
  if ((int)local_a0 < 0) {
    bVar13 = local_a2 != 0;
    local_a2 = -local_a2;
    local_a0 = -((local_a0 & 0x7fff) + (uint)bVar13);
  }
  if ((int)local_a8 < 0) {
    bVar13 = local_aa != 0;
    local_aa = -local_aa;
    local_a8 = -((local_a8 & 0x7fff) + (uint)bVar13);
  }
  local_e = local_a;
  local_c = 0x32b2;
  if (*(int *)0xc0c == 1) {
    local_92 = 1;
    local_90 = 0;
  }
  else {
    local_92 = *(uint *)0x148;
    local_90 = *(int *)0x14a;
  }
  local_2c = 0;
  uVar12 = 0x1885;
  local_a = 0x7855;
  iVar2 = FUN_1885_5307();
  if (iVar2 != 0) {
    local_b6 = (byte)iVar2;
    local_2c = (local_b6 & 6) == 6;
    if ((local_b6 & 10) == 10) {
      local_2c = local_2c + 2;
    }
  }
  if (*(byte *)0x126 < 2) {
    *(undefined1 *)0xb8c = 0;
  }
  if (*(int *)0xc20 != 0x14) {
    for (; (-1 < local_90 &&
           ((((0 < local_90 || (local_92 != 0)) && (local_90 <= *(int *)0x14a)) &&
            ((local_90 < *(int *)0x14a || (local_92 <= *(uint *)0x148))))));
        local_92 = local_92 + uVar4) {
      local_a = local_92;
      uVar11 = 0x1000;
      local_e = 0x78fe;
      iVar2 = local_90;
      local_c = uVar12;
      puVar3 = (uint *)FUN_1000_013f();
      puVar17 = (uint *)CONCAT22(iVar2,puVar3);
      *(byte *)(puVar3 + 10) = (byte)puVar3[10] & 0xfe;
      if (*(char *)0xb8c == '\0') {
        local_a = 0x1000;
        local_c = 0x78c0;
        iVar2 = FUN_21f2_06d1();
      }
      else {
        local_a = 0x1000;
        local_c = 0x7924;
        iVar2 = FUN_21f2_0680();
      }
      if (iVar2 != 0) {
        uVar12 = (undefined2)((ulong)puVar17 >> 0x10);
        puVar3 = (uint *)puVar17;
        if (*(byte *)((int)puVar3 + 0x11) < 0x5a) {
          uVar4 = *puVar17;
          uVar8 = puVar3[1];
          uVar6 = puVar3[4];
          uVar7 = puVar3[5];
          if ((int)uVar8 < 0) {
            bVar13 = uVar4 != 0;
            uVar4 = -uVar4;
            uVar8 = -((uVar8 & 0x7fff) + (uint)bVar13);
          }
          if ((int)uVar7 < 0) {
            bVar13 = uVar6 != 0;
            uVar6 = -uVar6;
            uVar7 = -((uVar7 & 0x7fff) + (uint)bVar13);
          }
          if ((((((int)local_80 < (int)uVar8) ||
                (((int)local_80 <= (int)uVar8 && (local_82 <= uVar4)))) ||
               ((int)local_80 < (int)uVar7)) ||
              (((int)local_80 <= (int)uVar7 && (local_82 <= uVar6)))) &&
             ((((int)uVar8 < (int)local_9c ||
               ((((int)uVar8 <= (int)local_9c && (uVar4 <= local_9e)) ||
                ((int)uVar7 < (int)local_9c)))) ||
              (((int)uVar7 <= (int)local_9c && (uVar6 <= local_9e)))))) {
            uVar4 = puVar3[2];
            uVar8 = puVar3[3];
            uVar6 = puVar3[6];
            uVar7 = puVar3[7];
            if ((int)uVar8 < 0) {
              bVar13 = uVar4 != 0;
              uVar4 = -uVar4;
              uVar8 = -((uVar8 & 0x7fff) + (uint)bVar13);
            }
            if ((int)uVar7 < 0) {
              bVar13 = uVar6 != 0;
              uVar6 = -uVar6;
              uVar7 = -((uVar7 & 0x7fff) + (uint)bVar13);
            }
            if ((((int)local_a0 < (int)uVar8) ||
                (((int)local_a0 <= (int)uVar8 && (local_a2 <= uVar4)))) ||
               (((int)local_a0 < (int)uVar7 ||
                (((int)local_a0 <= (int)uVar7 && (local_a2 <= uVar6)))))) {
              uVar14 = local_a8 < uVar8;
              uVar15 = local_a8 == uVar8;
              if ((int)local_a8 <= (int)uVar8) {
                if ((int)uVar8 <= (int)local_a8) {
                  uVar14 = local_aa < uVar4;
                  uVar15 = local_aa == uVar4;
                  if (!(bool)uVar14) goto LAB_21f2_5b97;
                }
                uVar14 = local_a8 < uVar7;
                uVar15 = local_a8 == uVar7;
                if ((int)local_a8 <= (int)uVar7) {
                  if ((int)uVar7 <= (int)local_a8) {
                    uVar14 = local_aa < uVar6;
                    uVar15 = local_aa == uVar6;
                    if (!(bool)uVar14) goto LAB_21f2_5b97;
                  }
                  goto LAB_21f2_59a5;
                }
              }
LAB_21f2_5b97:
              local_a = 0x7ac0;
              FUN_32b2_6cc6();
              local_a = 0x7ac9;
              FUN_32b2_701d();
              local_a = 0x7ad1;
              FUN_32b2_6e4b();
              local_a = 0x7ad9;
              FUN_32b2_6ef9();
              local_a = 0x7ae2;
              FUN_32b2_6cc6();
              local_a = 0x7aea;
              FUN_32b2_701d();
              local_a = 0x7af2;
              FUN_32b2_6e4b();
              local_a = 0x7af7;
              FUN_32b2_6fc7();
              local_a = 0x7aff;
              FUN_32b2_6cc6();
              local_a = 0x7b04;
              FUN_32b2_6fc7();
              local_a = 0x7b09;
              FUN_32b2_7191();
              if ((bool)uVar14) {
                local_a = 0x7b13;
                FUN_32b2_6cc6();
                local_a = 0x7b1b;
                FUN_32b2_7065();
                local_a = 0x7b23;
                FUN_32b2_6cc6();
                local_a = 0x7b2b;
                FUN_32b2_701d();
                local_a = 0x7b30;
                FUN_32b2_717d();
                local_a = 0x7b39;
                FUN_32b2_7095();
LAB_21f2_5c1d:
                local_a = 0x7b42;
                FUN_32b2_7035();
              }
              else {
                local_a = 0x7b4c;
                FUN_32b2_6cc6();
                local_a = 0x7b55;
                FUN_32b2_6cc6();
                local_a = 0x7b5a;
                FUN_32b2_7191();
                if (!(bool)uVar15) {
                  local_a = 0x7b65;
                  FUN_32b2_6cc6();
                  local_a = 0x7b6e;
                  FUN_32b2_701d();
                  local_a = 0x7b76;
                  FUN_32b2_7065();
                  local_a = 0x7b7e;
                  FUN_32b2_704d();
                  local_a = 0x7b86;
                  FUN_32b2_7095();
                  goto LAB_21f2_5c1d;
                }
                local_a = 0x7b94;
                FUN_32b2_6cc6();
                local_a = 0x7b9d;
                FUN_32b2_701d();
                local_a = 0x7ba2;
                FUN_32b2_6fc7();
                local_a = 0x7baa;
                FUN_32b2_6cc6();
                local_a = 0x7bb2;
                FUN_32b2_701d();
                local_a = 0x7bb7;
                FUN_32b2_6fc7();
                local_a = 0x7bbc;
                FUN_32b2_718c();
              }
              local_a = 0x7bc4;
              FUN_32b2_6e63();
              local_a = 0x7bcc;
              FUN_32b2_6cc6();
              local_a = 0x7bd1;
              FUN_32b2_6fc7();
              uVar11 = 0x32b2;
              local_a = 0x7bd9;
              FUN_32b2_6e63();
              uVar15 = false;
              uVar14 = true;
              if (local_2c == 0) goto LAB_21f2_5cf9;
              puVar3 = (uint *)puVar17;
              uVar12 = (undefined2)((ulong)puVar17 >> 0x10);
              if ((local_2c != 2) &&
                 (((uint)*(byte *)((int)puVar3 + 0x11) != *(uint *)0xa6a ||
                  ((uint)(byte)puVar3[8] != *(uint *)0xa6c)))) goto LAB_21f2_59a5;
              uVar14 = local_2c == 2;
              uVar15 = true;
              if (local_2c < 2) {
LAB_21f2_5cf9:
                local_a = 0x7c21;
                FUN_32b2_6cc6();
                local_a = 0x7c29;
                FUN_32b2_6cc6();
                local_a = 0x7c2e;
                FUN_32b2_7191();
                if (!(bool)uVar15 && !(bool)uVar14) {
                  if (*(int *)0x1eba != 0) {
                    iVar2 = *(int *)0x1eba;
                    *(uint *)(iVar2 * 4 + -0x4ce6) = local_92;
                    *(int *)(iVar2 * 4 + -0x4ce4) = local_90;
                    *(int *)0x1eba = *(int *)0x1eba + 1;
                    if (0x15 < *(int *)0x1eba) {
                      *(undefined2 *)0x1eba = 0;
                    }
                  }
                  puVar17 = (uint *)puVar17 + 10;
                  uVar14 = 0;
                  *(byte *)puVar17 = (byte)*puVar17 | 1;
                  uVar15 = (byte)*puVar17 == 0;
                  local_a = 0x7c73;
                  FUN_32b2_6cc6();
                  local_a = 0x7c7b;
                  FUN_32b2_6cc6();
                  uVar11 = 0x32b2;
                  local_a = 0x7c80;
                  FUN_32b2_7191();
                  if (!(bool)uVar14 && !(bool)uVar15) {
                    local_8e = local_92;
                    local_8c = local_90;
                  }
                  goto LAB_21f2_59a5;
                }
              }
              else {
                uVar15 = (uint)(byte)puVar3[9] < *(uint *)0xb310;
                uVar14 = true;
                if ((uint)(byte)puVar3[9] == *(uint *)0xb310) goto LAB_21f2_5cf9;
              }
              uVar11 = 0x32b2;
            }
          }
        }
      }
LAB_21f2_59a5:
      uVar4 = *(uint *)0xc0c;
      local_90 = local_90 + ((int)uVar4 >> 0xf) + (uint)CARRY2(local_92,uVar4);
      uVar12 = uVar11;
    }
  }
  if (*(int *)0xc0c == 1) {
    local_92 = 1;
    local_90 = 0;
  }
  else {
    local_92 = *(uint *)0x14c;
    local_90 = *(int *)0x14e;
  }
  do {
    local_c = uVar12;
    if (((local_90 < 0) || (((local_90 < 1 && (local_92 == 0)) || (*(int *)0x14e < local_90)))) ||
       ((*(int *)0x14e <= local_90 && (*(uint *)0x14c < local_92)))) {
      local_a = 0x11;
      local_e = 0x835b;
      FUN_1def_26a9();
      local_a = 0x8362;
      FUN_1def_2636();
      if ((local_8c == 0 && local_8e == 0) &&
         (local_8e = uVar18, local_8c = iVar19, iVar19 == 0 && uVar18 == 0)) {
        local_8e = 0;
      }
      else {
        *(uint *)0xce2 = local_8e;
        *(int *)0xce4 = local_8c;
      }
      return local_8e;
    }
    local_a = local_92;
    uVar12 = 0x1000;
    local_e = 0x7d09;
    iVar2 = local_90;
    iVar5 = FUN_1000_0271();
    uVar16 = CONCAT22(iVar2,iVar5);
    *(byte *)(iVar5 + 0x1e) = *(byte *)(iVar5 + 0x1e) & 0xfe;
    if (*(char *)0xb8c == '\0') {
      local_a = 0x1000;
      local_c = 0x7cbf;
      iVar2 = FUN_21f2_06d1();
    }
    else {
      local_a = 0x1000;
      local_c = 0x7d2f;
      iVar2 = FUN_21f2_0680();
    }
    if (iVar2 != 0) {
      uVar11 = (undefined2)((ulong)uVar16 >> 0x10);
      if (*(byte *)((int)uVar16 + 0x1b) < 0x5a) {
        uVar4 = *(uint *)((int)uVar16 + 0xc);
        uVar14 = uVar4 < 10000;
        uVar15 = uVar4 == 10000;
        if (10000 < uVar4) {
          uVar14 = 0;
          uVar15 = 1;
          local_a = 0x7d75;
          FUN_32b2_7285();
          local_a = 0x7d80;
          FUN_32b2_7046();
          local_a = 0x7d85;
          FUN_32b2_7258();
          local_a = 0x7d8e;
          FUN_32b2_710c();
          local_a = 0x7d96;
          FUN_32b2_6e63();
        }
        local_a = 0x7d9e;
        FUN_32b2_6cc6();
        local_a = 0x7da6;
        FUN_32b2_6ca8();
        local_a = 0x7dae;
        FUN_32b2_7095();
        local_a = 0x7db3;
        FUN_32b2_7191();
        if (!(bool)uVar14) {
          local_a = 0x7dbe;
          FUN_32b2_6cc6();
          local_a = 0x7dc9;
          FUN_32b2_6ca8();
          local_a = 0x7dd1;
          FUN_32b2_7095();
          local_a = 0x7dd6;
          FUN_32b2_7191();
          if (!(bool)uVar14) {
            local_a = 0x7de0;
            FUN_32b2_6cc6();
            local_a = 0x7de8;
            FUN_32b2_6ca8();
            local_a = 0x7df1;
            FUN_32b2_701d();
            local_a = 0x7df6;
            FUN_32b2_7191();
            if ((bool)uVar14 || (bool)uVar15) {
              local_a = 0x7e00;
              FUN_32b2_6cc6();
              local_a = 0x7e0b;
              FUN_32b2_6ca8();
              local_a = 0x7e14;
              FUN_32b2_701d();
              uVar12 = 0x32b2;
              local_a = 0x7e19;
              FUN_32b2_7191();
              if ((bool)uVar14 || (bool)uVar15) {
                iVar2 = (int)uVar16;
                uVar11 = (undefined2)((ulong)uVar16 >> 0x10);
                if ((local_2c != 0) &&
                   (((local_2c != 2 &&
                     (((uint)*(byte *)(iVar2 + 0x1b) != *(uint *)0xa6a ||
                      ((uint)*(byte *)(iVar2 + 0x1a) != *(uint *)0xa6c)))) ||
                    ((1 < local_2c && ((uint)*(byte *)(iVar2 + 0x1c) != *(uint *)0xb310))))))
                goto LAB_21f2_5da4;
                if (*(int *)(iVar2 + 0xc) == 10000) {
                  local_a = 0x7e7f;
                  FUN_32b2_6ca8();
                  local_a = 0x7e84;
                  FUN_32b2_7258();
                  local_a = 0x7e8c;
                  FUN_32b2_70dc();
                  local_a = 0x7e94;
                  FUN_32b2_6e63();
                  local_a = 0x7e9f;
                  FUN_32b2_6ca8();
                  local_a = 0x7ea4;
                  FUN_32b2_7258();
                  local_a = 0x7eac;
                  FUN_32b2_70dc();
                  local_a = 0x7eb5;
                  FUN_32b2_6e63();
                  local_a = 0x7ebd;
                  FUN_32b2_6cc6();
                  local_a = 0x7ec5;
                  FUN_32b2_704d();
                  local_a = 0x7ece;
                  FUN_32b2_6cc6();
                  local_a = 0x7ed7;
                  FUN_32b2_704d();
                  local_a = 0x7edc;
                  FUN_32b2_718c();
                  local_a = 0x7ee1;
                  FUN_32b2_7258();
                  uStack_10 = 0x32b2;
                  FUN_32b2_6eb1();
                  uStack_10 = 0x32b2;
                  FUN_32b2_7592();
                  uVar14 = (undefined1 *)0xfff7 < &uStack_10;
                  uVar15 = &stack0x0000 == (undefined1 *)0x8;
                  local_a = 0x32b2;
                  local_c = 0x7efa;
                  FUN_32b2_6d14();
                  local_a = 0x32b2;
                  local_c = 0x7f03;
                  FUN_32b2_6e4b();
                  local_a = 0x32b2;
                  local_c = 0x7f0b;
                  FUN_32b2_701d();
                  local_a = 0x32b2;
                  local_c = 0x7f10;
                  FUN_32b2_6fc7();
                  local_a = 0x32b2;
                  local_c = 0x7f19;
                  FUN_32b2_6e4b();
                  local_a = 0x32b2;
                  local_c = 0x7f21;
                  FUN_32b2_6e63();
                  local_a = 0x32b2;
                  local_c = 0x7f29;
                  FUN_32b2_6cc6();
                  local_a = 0x32b2;
                  local_c = 0x7f32;
                  FUN_32b2_6cc6();
                  local_a = 0x32b2;
                  uVar12 = 0x32b2;
                  local_c = 0x7f37;
                  FUN_32b2_7191();
                  if (!(bool)uVar14 && !(bool)uVar15) goto LAB_21f2_5da4;
                }
                local_a = 0x7f64;
                FUN_32b2_7285();
                local_a = 0x7f6c;
                FUN_32b2_710c();
                uStack_10 = 0x32b2;
                FUN_32b2_6eb1();
                uStack_10 = 0x32b2;
                FUN_32b2_75fe();
                local_a = 0x32b2;
                local_c = 0x7f85;
                FUN_32b2_6d14();
                local_a = 0x32b2;
                local_c = 0x7f8d;
                FUN_32b2_6e63();
                local_a = 0x32b2;
                local_c = 0x7fb5;
                FUN_32b2_7285();
                local_a = 0x32b2;
                local_c = 0x7fbd;
                FUN_32b2_710c();
                FUN_32b2_6eb1();
                iVar19 = 0x7fcc;
                FUN_32b2_75ec(0x32b2);
                local_c = 0x32b2;
                local_e = 0x7fd6;
                FUN_32b2_6d14();
                local_c = 0x32b2;
                local_e = 0x7fdf;
                FUN_32b2_6e63();
                local_c = 0x32b2;
                local_e = 0x7fe7;
                FUN_32b2_6ca8();
                local_c = 0x32b2;
                local_e = 0x7ff0;
                FUN_32b2_6e63();
                local_c = 0x32b2;
                local_e = 0x7ffb;
                FUN_32b2_6ca8();
                local_c = 0x32b2;
                local_e = 0x8004;
                FUN_32b2_6e4b();
                local_c = 0x32b2;
                local_e = 0x800d;
                FUN_32b2_6e63();
                local_c = 0x32b2;
                local_e = 0x8015;
                FUN_32b2_6d14();
                local_c = 0x32b2;
                local_e = 0x801e;
                FUN_32b2_6cc6();
                local_c = 0x32b2;
                local_e = 0x8023;
                FUN_32b2_7258();
                local_c = 0x32b2;
                local_e = 0x8028;
                FUN_32b2_7173();
                local_c = 0x32b2;
                local_e = 0x8031;
                FUN_32b2_704d();
                local_c = 0x32b2;
                local_e = 0x8039;
                FUN_32b2_6d14();
                local_c = 0x32b2;
                local_e = 0x8041;
                FUN_32b2_6ca8();
                local_c = 0x32b2;
                local_e = 0x8046;
                FUN_32b2_7258();
                local_c = 0x32b2;
                local_e = 0x804b;
                FUN_32b2_7173();
                local_c = 0x32b2;
                local_e = 0x8053;
                FUN_32b2_704d();
                local_c = 0x32b2;
                local_e = 0x8058;
                FUN_32b2_718c();
                local_c = 0x32b2;
                local_e = 0x8060;
                FUN_32b2_6e63();
                local_c = 0x32b2;
                local_e = 0x8068;
                FUN_32b2_6d14();
                local_c = 0x32b2;
                local_e = 0x8071;
                FUN_32b2_701d();
                local_c = 0x32b2;
                local_e = 0x8079;
                FUN_32b2_704d();
                local_c = 0x32b2;
                local_e = 0x8081;
                FUN_32b2_6d14();
                local_c = 0x32b2;
                local_e = 0x808a;
                FUN_32b2_701d();
                local_c = 0x32b2;
                local_e = 0x8093;
                FUN_32b2_704d();
                local_c = 0x32b2;
                local_e = 0x8098;
                FUN_32b2_7173();
                local_c = 0x32b2;
                local_e = 0x80a1;
                FUN_32b2_6e4b();
                local_c = 0x32b2;
                local_e = 0x80aa;
                FUN_32b2_6e63();
                if (*(int *)((int)uVar16 + 0xc) != 10000) {
                  local_a = 0x80d7;
                  FUN_32b2_7285();
                  local_a = 0x80e0;
                  FUN_32b2_6cc6();
                  local_a = 0x80e5;
                  FUN_32b2_7258();
                  local_a = 0x80ea;
                  FUN_32b2_7187();
                  local_a = 0x80f3;
                  FUN_32b2_710c();
                  local_a = 0x80fc;
                  FUN_32b2_6e63();
                  local_a = 0x8104;
                  FUN_32b2_6cc6();
                  local_a = 0x810c;
                  FUN_32b2_704d();
                  local_a = 0x8115;
                  FUN_32b2_6cc6();
                  local_a = 0x811e;
                  FUN_32b2_704d();
                  local_a = 0x8123;
                  FUN_32b2_718c();
                  local_a = 0x8128;
                  FUN_32b2_7258();
                  uStack_10 = 0x32b2;
                  FUN_32b2_6eb1();
                  uStack_10 = 0x32b2;
                  FUN_32b2_7592();
                  uVar14 = (undefined1 *)0xfff7 < &uStack_10;
                  uVar15 = &stack0x0000 == (undefined1 *)0x8;
                  local_a = 0x32b2;
                  local_c = 0x8141;
                  FUN_32b2_6d14();
                  local_a = 0x32b2;
                  local_c = 0x814a;
                  FUN_32b2_6e4b();
                  local_a = 0x32b2;
                  local_c = 0x8152;
                  FUN_32b2_701d();
                  local_a = 0x32b2;
                  local_c = 0x8157;
                  FUN_32b2_6fc7();
                  local_a = 0x32b2;
                  local_c = 0x8160;
                  FUN_32b2_6e4b();
                  local_a = 0x32b2;
                  local_c = 0x8168;
                  FUN_32b2_6e63();
                  local_a = 0x32b2;
                  local_c = 0x8170;
                  FUN_32b2_6cc6();
                  local_a = 0x32b2;
                  local_c = 0x8179;
                  FUN_32b2_6cc6();
                  local_a = 0x32b2;
                  uVar12 = 0x32b2;
                  local_c = 0x817e;
                  FUN_32b2_7191();
                  if (!(bool)uVar14 && !(bool)uVar15) goto LAB_21f2_5da4;
                }
                uVar12 = (undefined2)((ulong)uVar16 >> 0x10);
                iVar5 = (int)uVar16;
                uVar4 = *(uint *)(iVar5 + 0xe);
                iVar2 = *(int *)(iVar5 + 0x10);
                uVar8 = *(uint *)(iVar5 + 0x12);
                iVar5 = *(int *)(iVar5 + 0x14);
                if ((uVar4 != uVar8) || (iVar2 != iVar5)) {
                  local_a = 0x8235;
                  iVar9 = iVar2;
                  FUN_32b2_6cc6();
                  local_a = 0x823a;
                  FUN_32b2_7258();
                  uStack_10 = 0x32b2;
                  FUN_32b2_6eb1();
                  uStack_10 = 0x32b2;
                  FUN_32b2_6cc6();
                  uStack_10 = 0x32b2;
                  uVar12 = 0x8251;
                  FUN_32b2_7258();
                  FUN_32b2_6eb1(uVar18,iVar19,uVar12);
                  uVar6 = FUN_1def_2828(*(undefined2 *)0x9288,*(undefined2 *)0x928a,
                                        *(undefined2 *)0x928c,*(undefined2 *)0x928e,
                                        *(undefined2 *)0x9288,*(undefined2 *)0x928a,
                                        *(undefined2 *)0x928c,*(undefined2 *)0x928e);
                  local_a = 0x8292;
                  iVar10 = iVar9;
                  FUN_32b2_6cc6();
                  local_a = 0x8297;
                  FUN_32b2_7258();
                  uStack_10 = 0x32b2;
                  FUN_32b2_6eb1();
                  uStack_10 = 0x32b2;
                  FUN_32b2_6cc6();
                  uStack_10 = 0x32b2;
                  uVar12 = 0x82ae;
                  FUN_32b2_7258();
                  FUN_32b2_6eb1(uVar18,iVar19,uVar12);
                  uVar16 = CONCAT22(*(undefined2 *)0x928a,*(undefined2 *)0x9288);
                  uVar12 = 0x1def;
                  uVar7 = FUN_1def_2828(*(undefined2 *)0x9288,*(undefined2 *)0x928a,
                                        *(undefined2 *)0x928c,*(undefined2 *)0x928e,
                                        *(undefined2 *)0x9288,*(undefined2 *)0x928a,
                                        *(undefined2 *)0x928c);
                  if ((iVar5 < iVar2) || ((iVar5 <= iVar2 && (uVar8 <= uVar4)))) {
                    iVar2 = (iVar2 - iVar9) - (uint)(uVar4 < uVar6);
                    if ((iVar2 < iVar10) || ((iVar2 <= iVar10 && (uVar4 - uVar6 < uVar7))))
                    goto LAB_21f2_628d;
                  }
                  else {
                    iVar2 = (iVar2 - iVar9) - (uint)(uVar4 < uVar6);
                    if ((iVar10 < iVar2) || ((iVar10 <= iVar2 && (uVar7 <= uVar4 - uVar6))))
                    goto LAB_21f2_5da4;
                  }
                  iVar2 = iVar5 + iVar9 + (uint)CARRY2(uVar8,uVar6);
                  if ((iVar2 < iVar10) || ((iVar2 <= iVar10 && (uVar8 + uVar6 <= uVar7))))
                  goto LAB_21f2_5da4;
                }
LAB_21f2_628d:
                if (*(int *)0x1eba != 0) {
                  iVar2 = *(int *)0x1eba;
                  *(int *)(iVar2 * 4 + -0x4ce6) = -local_92;
                  *(int *)(iVar2 * 4 + -0x4ce4) = -(local_90 + (uint)(local_92 != 0));
                  *(int *)0x1eba = *(int *)0x1eba + 1;
                  if (0x15 < *(int *)0x1eba) {
                    *(undefined2 *)0x1eba = 0;
                  }
                }
                pbVar1 = (byte *)((int)uVar16 + 0x1e);
                uVar14 = 0;
                *pbVar1 = *pbVar1 | 1;
                uVar15 = *pbVar1 == 0;
                local_a = 0x81f4;
                FUN_32b2_6cc6();
                local_a = 0x81fd;
                FUN_32b2_6cc6();
                uVar12 = 0x32b2;
                local_a = 0x8202;
                FUN_32b2_7191();
                if (!(bool)uVar14 && !(bool)uVar15) {
                  uVar18 = -local_92;
                  iVar19 = -(local_90 + (uint)(local_92 != 0));
                }
                goto LAB_21f2_5da4;
              }
            }
          }
        }
        uVar12 = 0x32b2;
      }
    }
LAB_21f2_5da4:
    uVar4 = *(uint *)0xc0c;
    bVar13 = CARRY2(local_92,uVar4);
    local_92 = local_92 + uVar4;
    local_90 = local_90 + ((int)uVar4 >> 0xf) + (uint)bVar13;
  } while( true );
}


