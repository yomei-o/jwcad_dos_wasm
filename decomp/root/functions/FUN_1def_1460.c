/* 1def:1460 */

/* WARNING: Instruction at (ram,0x00010800) overlaps instruction at (ram,0x000107fe)
    */
/* WARNING: Type propagation algorithm not settling */

undefined2 ***** __cdecl16far
FUN_1def_1460(int param_1,int ******param_2,undefined2 *******param_3,int *****param_4,
             undefined2 ******param_5,uint param_6,undefined2 ******param_7,int *param_8)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  byte bVar6;
  uint *puVar7;
  undefined2 *****pppppuVar8;
  undefined2 ******extraout_DX;
  char extraout_DH;
  int iVar9;
  int ******ppppppiVar10;
  undefined2 *unaff_SI;
  undefined2 *******pppppppuVar11;
  undefined2 *unaff_DI;
  undefined2 uVar12;
  undefined2 unaff_ES;
  uint uVar13;
  undefined2 ******ppppppuVar14;
  undefined2 ******ppppppuVar15;
  int ******ppppppiVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined2 *******in_stack_0000001c;
  int in_stack_0000001e;
  undefined2 *****apppppuStack_46 [2];
  undefined2 *****apppppuStack_42 [2];
  uint uStack_3e;
  uint uStack_3c;
  undefined2 ******ppppppuStack_3a;
  undefined2 ******ppppppuStack_38;
  undefined2 ******ppppppuStack_36;
  int ******ppppppiStack_34;
  uint uStack_32;
  undefined2 ******ppppppuStack_30;
  int ******ppppppiStack_2e;
  int iStack_2c;
  undefined2 ******ppppppuStack_2a;
  int ******appppppiStack_28 [4];
  int *****pppppiStack_20;
  uint uStack_1e;
  int ******appppppiStack_1c [2];
  int iStack_18;
  int ******ppppppiStack_16;
  undefined2 *******pppppppuStack_14;
  int *******local_12;
  undefined2 *******pppppppuStack_10;
  undefined2 *******local_e;
  int ******ppppppiStack_c;
  undefined2 *******local_a;
  
  FUN_32b2_02bc();
  local_a = (undefined2 *******)0xf365;
  FUN_32b2_6d9b();
  local_a = (undefined2 *******)0xf36d;
  FUN_32b2_6e63();
  local_a = (undefined2 *******)0xf375;
  FUN_32b2_6d9b();
  local_a = (undefined2 *******)0xf37d;
  FUN_32b2_6e63();
  local_a = (undefined2 *******)0xf385;
  FUN_32b2_6d9b();
  local_a = (undefined2 *******)0xf38d;
  FUN_32b2_6e63();
  local_a = (undefined2 *******)0xf395;
  FUN_32b2_6d9b();
  local_a = (undefined2 *******)0xf39d;
  FUN_32b2_6e63();
  if (6 < param_6) {
    local_a = (undefined2 *******)param_7;
    ppppppiStack_c = param_5;
    local_e = (undefined2 *******)&stack0xfffa;
    pppppppuStack_10 = &local_e;
    local_12 = (int *******)&local_12;
    pppppppuStack_14 = &local_a;
    ppppppiStack_16 = (int ******)0x32b2;
    iStack_18 = 0xf3c1;
    pppppuVar8 = (undefined2 *****)FUN_1def_17bb();
    return pppppuVar8;
  }
  ppppppuVar14 = (undefined2 ******)0x1000;
  switch(param_6) {
  case 0:
    FUN_13bf_178a();
    if (*(int *)0xc18 == -0x14) {
      FUN_13bf_178a();
    }
    if (*(int *)0xc18 == -100) {
      FUN_13bf_178a();
    }
    if (param_1 == 2) {
      if (*(int *)0xc1e == -1) {
        FUN_13bf_17c2();
      }
      if (*(int *)0xc1e == 1) {
        FUN_13bf_17c2();
      }
      if (*(int *)0xc1e == 2) {
        if (*(int *)0xc20 == 2) {
          FUN_13bf_17c2();
        }
        if (((*(int *)0xa62 == 3) || (*(int *)0xce6 == 3)) || (*(int *)0xc20 == 0x14)) {
          ppppppiStack_c = (undefined2 ******)0x174d;
        }
        else {
          ppppppiStack_c = (undefined2 ******)0x1754;
        }
        local_a = (undefined2 *******)0x16;
        local_e = (undefined2 *******)0x1000;
        ppppppuVar14 = (undefined2 ******)0x1def;
        pppppppuStack_10 = (undefined2 *******)0x57d7;
        FUN_1def_23c5();
      }
      if (*(int *)0xc1e == -2) {
        FUN_13bf_17c2();
      }
    }
    local_a = (undefined2 *******)*(undefined2 *)0x1b3e;
    ppppppiStack_c = (int ******)*(undefined2 *)0xa5e;
    local_e = (undefined2 *******)0x0;
    local_12 = (int *******)0x5806;
    pppppppuStack_10 = (undefined2 *******)ppppppuVar14;
    pppppuVar8 = (undefined2 *****)FUN_1def_0000();
    return pppppuVar8;
  case 1:
    ppppppuVar14 = (undefined2 ******)CONCAT11(extraout_DH,0x32);
    break;
  case 2:
    *unaff_DI = *unaff_SI;
    unaff_DI[1] = unaff_SI[1];
    unaff_DI[2] = unaff_SI[2];
LAB_10ad_0791:
    *param_3 = (undefined2 ******)*(uint *)0x9000;
    param_3[1] = (undefined2 ******)*(uint *)0x9002;
    param_3[2] = (undefined2 ******)*(uint *)0x9004;
    param_3[3] = (undefined2 ******)*(uint *)0x9006;
    local_a = (undefined2 *******)*(undefined2 *)0x9008;
    ppppppiVar10 = (int ******)0x9000;
    pppppppuVar11 = appppppiStack_1c;
    uVar12 = unaff_SS;
LAB_10ad_07b1:
    do {
      *pppppppuVar11 = (undefined2 ******)*ppppppiVar10;
      pppppppuVar11[1] = (undefined2 ******)ppppppiVar10[1];
      pppppppuVar11[2] = (undefined2 ******)ppppppiVar10[2];
      pppppppuVar11[3] = (undefined2 ******)ppppppiVar10[3];
      while( true ) {
        while( true ) {
          if (100 < *param_8) {
            return (undefined2 *****)0x0;
          }
          ppppppiStack_c = (int ******)(uint)*(byte *)((int)*param_2 + param_1);
          *param_2 = (int *****)((int)*param_2 + 1);
          uVar17 = ppppppiStack_c < (undefined2 *****)0x2e;
          uVar18 = ppppppiStack_c == (int ******)0x2e;
          if ((bool)uVar18) break;
          pppppppuVar11 = param_3;
          uVar12 = unaff_DS;
          if ((undefined2 *****)0x2f < ppppppiStack_c) {
            uVar17 = ppppppiStack_c < (undefined2 *****)0x39;
            uVar18 = ppppppiStack_c == (int ******)0x39;
            if (ppppppiStack_c < (undefined2 *****)0x3a) {
              local_a = (undefined2 *******)0x12f0;
              FUN_32b2_6d14();
              local_a = (undefined2 *******)0x12f8;
              FUN_32b2_6d14();
              local_a = (undefined2 *******)0x12fd;
              FUN_32b2_7191();
              if ((bool)uVar17 || (bool)uVar18) {
                appppppiStack_28[3] = ppppppiStack_c + -0x18;
                local_a = (undefined2 *******)0x1310;
                FUN_32b2_6d9b();
                local_a = (undefined2 *******)0x1318;
                FUN_32b2_6d14();
                local_a = (undefined2 *******)0x1321;
                FUN_32b2_710c();
                local_a = (undefined2 *******)0x1326;
                FUN_32b2_718c();
              }
              else {
                appppppiStack_28[3] = ppppppiStack_c + -0x18;
                local_a = (undefined2 *******)0x133c;
                FUN_32b2_6d9b();
                local_a = (undefined2 *******)0x1345;
                FUN_32b2_6d14();
                local_a = (undefined2 *******)0x32b2;
                ppppppiStack_c = (int ******)0x134e;
                FUN_32b2_710c();
                local_a = (undefined2 *******)0x1354;
                FUN_32b2_6e99();
                local_a = (undefined2 *******)0x1359;
                FUN_32b2_717d();
                local_a = (undefined2 *******)0x32b2;
                ppppppiStack_c = (int ******)0x1362;
                FUN_32b2_7154();
              }
              ppppppuVar14 = (undefined2 ******)0x32b2;
              local_a = (undefined2 *******)0x1368;
              FUN_32b2_6eb1();
              ppppppiVar10 = (int ******)appppppiStack_1c;
              goto LAB_10ad_07b1;
            }
          }
          if (ppppppiStack_c == (int ******)0x40) {
            ppppppiVar10 = &param_4;
            goto LAB_10ad_07b1;
          }
          if (ppppppiStack_c == (int ******)0x70) {
            ppppppiVar10 = (int ******)0x9028;
            goto LAB_10ad_07b1;
          }
          if (ppppppiStack_c == (int ******)0x78) {
            local_a = (undefined2 *******)0x1392;
            FUN_32b2_6cc6();
          }
          else {
            if (ppppppiStack_c != (int ******)0x79) {
              if (ppppppiStack_c == (int ******)0x23) {
                ppppppiVar10 = (int ******)0x9030;
                goto LAB_10ad_07b1;
              }
              if (ppppppiStack_c == (int ******)0x26) {
                ppppppiVar10 = (int ******)0x9038;
                goto LAB_10ad_07b1;
              }
              if (ppppppiStack_c == (int ******)0xdf) {
                pppppppuStack_14 = (undefined2 *******)*param_3;
                local_12 = (int *******)param_3[1];
                pppppppuStack_10 = (undefined2 *******)param_3[2];
                local_e = (undefined2 *******)param_3[3];
                uStack_1e = 1;
              }
              else if (ppppppiStack_c == (int ******)0x27) {
                local_a = (undefined2 *******)0x1407;
                FUN_32b2_6d14();
                local_a = (undefined2 *******)0x1410;
                FUN_32b2_710c();
                local_a = (undefined2 *******)0x32b2;
                ppppppiStack_c = (int ******)0x1419;
                FUN_32b2_7154();
                ppppppuVar14 = (undefined2 ******)0x32b2;
                local_a = (undefined2 *******)0x141f;
                FUN_32b2_6eb1();
                uStack_1e = 2;
              }
              else {
                if (ppppppiStack_c != (int ******)0x22) {
                  if (uStack_1e == 1) {
                    local_a = (undefined2 *******)0x1463;
                    FUN_32b2_6d14();
                    local_a = (undefined2 *******)0x146c;
                    FUN_32b2_710c();
                    local_a = (undefined2 *******)0x32b2;
                    ppppppiStack_c = (int ******)0x1475;
                    FUN_32b2_7154();
                    ppppppuVar14 = (undefined2 ******)0x32b2;
                    local_a = (undefined2 *******)0x147b;
                    FUN_32b2_6eb1();
                  }
                  if (uStack_1e == 2) {
                    local_a = (undefined2 *******)0x1489;
                    FUN_32b2_6d14();
                    local_a = (undefined2 *******)0x1492;
                    FUN_32b2_710c();
                    local_a = (undefined2 *******)0x32b2;
                    ppppppiStack_c = (int ******)0x149b;
                    FUN_32b2_7154();
                    ppppppuVar14 = (undefined2 ******)0x32b2;
                    local_a = (undefined2 *******)0x14a1;
                    FUN_32b2_6eb1();
                  }
                  if (uStack_1e != 0) {
                    *param_3 = pppppppuStack_14;
                    param_3[1] = local_12;
                    param_3[2] = pppppppuStack_10;
                    param_3[3] = local_e;
                    ppppppiStack_c = (int ******)0x14ba;
                    local_a = (undefined2 *******)ppppppuVar14;
                    pppppiStack_20 = (int *****)FUN_10ad_0409();
                    if ((((pppppiStack_20 != (int *****)0x0) && (pppppiStack_20 != (int *****)0x3))
                        && (pppppiStack_20 != (int *****)0x4)) && (pppppiStack_20 != (int *****)0x6)
                       ) {
                      *param_8 = 0x68;
                      return (undefined2 *****)0x0;
                    }
                  }
                  if (ppppppiStack_c != (int ******)0x5b) {
                    return ppppppiStack_c;
                  }
                  local_a = (undefined2 *******)0x14e6;
                  uVar13 = FUN_32b2_1f42();
                  if ((999 < uVar13) && (*param_8 < 100)) {
                    local_a = (undefined2 *******)param_7;
                    ppppppiStack_c = (int ******)param_6;
                    local_e = (undefined2 *******)param_5;
                    pppppppuStack_10 = (undefined2 *******)param_4;
                    local_12 = (int *******)param_2;
                    pppppppuStack_14 = (undefined2 *******)param_1;
                    ppppppiStack_16 = (int ******)0x32b2;
                    iStack_18 = 0x1514;
                    puVar7 = (uint *)FUN_10ad_04e6();
                    *param_3 = (undefined2 ******)*puVar7;
                    param_3[1] = (undefined2 ******)puVar7[1];
                    param_3[2] = (undefined2 ******)puVar7[2];
                    param_3[3] = (undefined2 ******)puVar7[3];
                    if (100 < *param_8) {
                      return (undefined2 *****)0x0;
                    }
                    bVar6 = *(byte *)((int)*param_2 + param_1);
                    *param_2 = (int *****)((int)*param_2 + 1);
                    return (undefined2 *****)(uint)bVar6;
                  }
                  *param_8 = 800;
                  return (undefined2 *****)0x0;
                }
                local_a = (undefined2 *******)0x1435;
                FUN_32b2_6d14();
                local_a = (undefined2 *******)0x143e;
                FUN_32b2_710c();
                local_a = (undefined2 *******)0x32b2;
                ppppppiStack_c = (int ******)0x1447;
                FUN_32b2_7154();
                ppppppuVar14 = (undefined2 ******)0x32b2;
                local_a = (undefined2 *******)0x144d;
                FUN_32b2_6eb1();
                uStack_1e = 3;
              }
              goto LAB_10ad_0791;
            }
            local_a = (undefined2 *******)0x13ba;
            FUN_32b2_6cc6();
          }
          local_a = (undefined2 *******)0x139b;
          FUN_32b2_704d();
          local_a = (undefined2 *******)0x13a0;
          FUN_32b2_7258();
          ppppppuVar14 = (undefined2 ******)0x32b2;
          local_a = (undefined2 *******)0x13a8;
          FUN_32b2_6eb1();
        }
        local_a = (undefined2 *******)0x12b5;
        FUN_32b2_6d14();
        local_a = (undefined2 *******)0x12bd;
        FUN_32b2_6d14();
        ppppppuVar14 = (undefined2 ******)0x32b2;
        local_a = (undefined2 *******)0x12c2;
        FUN_32b2_7191();
        if ((bool)uVar17 || (bool)uVar18) break;
        *param_8 = 0x68;
      }
      ppppppiVar10 = (int ******)0x9010;
      pppppppuVar11 = &local_a;
      uVar12 = unaff_SS;
    } while( true );
  case 3:
    if ((int)param_6 < 0) {
      local_a = (undefined2 *******)0x1000;
      ppppppiStack_c = (int ******)0x795;
      FUN_10ad_0f45();
      if (*(char *)0x118 != '\0') {
        pcVar5 = (code *)swi(0x3f);
        (*pcVar5)();
      }
      local_a = (undefined2 *******)0x10ad;
      ppppppiStack_c = (undefined2 ******)0x7ad;
      FUN_1885_3364();
    }
    if ((((*(int *)0xa62 == 0xd) || (*(int *)0xa62 == 0xe)) || (*(int *)0xa62 == 0xf)) ||
       ((*(int *)0xa62 == 0x1c || (*(int *)0xa62 == 0x1e)))) {
      *(undefined1 *)0xc13e = 1;
    }
    else {
      *(undefined1 *)0xc13e = 0;
    }
    if ((*(char *)0x124 != '\0') && (*(int *)0xc22 == 0)) {
      local_a = (undefined2 *******)0x7f0;
      FUN_17a6_000a();
    }
    pcVar5 = (code *)swi(0x3f);
    (*pcVar5)();
    pppppuVar8 = (undefined2 *****)FUN_1000_0a81();
    return pppppuVar8;
  case 4:
    bVar6 = *(byte *)(unaff_SI + (param_6 - 0x33));
    *(byte *)(unaff_SI + (param_6 - 0x33)) =
         bVar6 << 4 | (byte)(CONCAT11((int)param_6 < 0,bVar6) >> 5);
    local_a = (undefined2 *******)(*(int *)0xa58 + -1);
    ppppppiStack_c = (int ******)0x191;
    local_e = (undefined2 *******)0x1;
    pppppppuStack_10 = (undefined2 *******)0x1000;
    local_12 = (int *******)0x46a8;
    FUN_1885_1f1b();
    local_a = (undefined2 *******)(*(int *)0xa58 + -1);
    ppppppiStack_c = (int ******)0x191;
    local_e = (undefined2 *******)0x1;
    pppppppuStack_10 = (undefined2 *******)0x1885;
    uVar13 = 0x1def;
    local_12 = (int *******)0x46c2;
    FUN_1def_12e8();
    if (*(int *)0xc0c < 0) {
      local_a = (undefined2 *******)0x1def;
      uVar13 = 0x21f2;
      ppppppiStack_c = (int ******)0x46d5;
      FUN_21f2_27eb();
    }
    local_a = (undefined2 *******)(*(int *)0xa58 + -1);
    ppppppiStack_c = (int ******)0x191;
    local_e = (undefined2 *******)0x1;
    ppppppuVar14 = (undefined2 ******)0x1def;
    local_12 = (int *******)0x46ed;
    pppppppuStack_10 = (undefined2 *******)uVar13;
    FUN_1def_12e8();
    if (1 < *(byte *)0x125) {
      for (uStack_1e = 0; uVar13 = uStack_1e, (int)uStack_1e < 5; uStack_1e = uStack_1e + 1) {
        appppppiStack_1c[uStack_1e] = (int ******)0x0;
        (&uStack_32)[uStack_1e] = 0;
        appppppiStack_28[uVar13] = (int ******)0x0;
        (&uStack_3c)[uVar13] = 0;
        local_a = (undefined2 *******)0x4754;
        FUN_32b2_6d14();
        uVar17 = (int)(uStack_1e << 1) < 0;
        uVar18 = (uStack_1e & 0x3fff) == 0;
        local_a = (undefined2 *******)0x4764;
        FUN_32b2_6cc6();
        local_a = (undefined2 *******)0x4769;
        FUN_32b2_7258();
        ppppppuVar14 = (undefined2 ******)0x32b2;
        local_a = (undefined2 *******)0x476e;
        FUN_32b2_7191();
        if (!(bool)uVar17 && !(bool)uVar18) {
          local_a = appppppiStack_28 + uStack_1e;
          ppppppiStack_c = (int ******)(&uStack_32 + uStack_1e);
          local_e = appppppiStack_1c + uStack_1e;
          pppppppuStack_10 = (undefined2 *******)0x32b2;
          local_12 = (int *******)0x478e;
          FUN_32b2_6cc6();
          pppppppuStack_10 = (undefined2 *******)0x32b2;
          local_12 = (int *******)0x4793;
          FUN_32b2_7258();
          iStack_18 = 0x32b2;
          appppppiStack_1c[1] = (int ******)0x479d;
          FUN_32b2_6eb1();
          iStack_18 = 0x32b2;
          appppppiStack_1c[1] = (int ******)0x47b1;
          FUN_32b2_6cc6();
          iStack_18 = 0x32b2;
          appppppiStack_1c[1] = (int ******)0x47b6;
          FUN_32b2_7258();
          pppppiStack_20 = (int *****)0x32b2;
          appppppiStack_28[3] = (int ******)0x47c0;
          FUN_32b2_6eb1();
          pppppiStack_20 = (int *****)0x32b2;
          appppppiStack_28[3] = (int ******)0x47c9;
          FUN_32b2_6cc6();
          pppppiStack_20 = (int *****)0x32b2;
          appppppiStack_28[3] = (int ******)0x47ce;
          FUN_32b2_7258();
          appppppiStack_28[0] = (int ******)0x32b2;
          ppppppuStack_2a = (undefined2 ******)0x47d8;
          FUN_32b2_6eb1();
          appppppiStack_28[0] = (int ******)0x32b2;
          ppppppuStack_2a = (undefined2 ******)0x47e1;
          FUN_32b2_6cc6();
          appppppiStack_28[0] = (int ******)0x32b2;
          ppppppuStack_2a = (undefined2 ******)0x47e6;
          FUN_32b2_7258();
          ppppppuStack_30 = (undefined2 ******)0x32b2;
          uStack_32 = 0x47f0;
          FUN_32b2_6eb1();
          ppppppuStack_30 = (undefined2 ******)0x32b2;
          uStack_32 = 0x47f4;
          FUN_13bf_03fb();
          if ((int)uStack_1e < 1) {
            iVar9 = 1;
          }
          else {
            iVar9 = uStack_1e + 2;
          }
          local_a = (undefined2 *******)*(undefined2 *)(iVar9 * 2 + 0xa70);
          ppppppiStack_c = (int ******)0x5;
          local_e = local_a;
          pppppppuStack_10 = (undefined2 *******)(&uStack_3c)[uStack_1e];
          local_12 = (int *******)appppppiStack_28[uStack_1e];
          pppppppuStack_14 = (undefined2 *******)(&uStack_32)[uStack_1e];
          ppppppiStack_16 = appppppiStack_1c[uStack_1e];
          iStack_18 = 0x32b2;
          ppppppuVar14 = (undefined2 ******)0x1def;
          appppppiStack_1c[1] = (int ******)0x4729;
          FUN_1def_1460();
        }
      }
    }
    ppppppuVar15 = ppppppuVar14;
    if (0 < *(int *)0xc0c) {
      ppppppuVar15 = (undefined2 ******)0x21f2;
      ppppppiStack_c = (int ******)0x4818;
      local_a = (undefined2 *******)ppppppuVar14;
      FUN_21f2_27eb();
    }
    local_a = (undefined2 *******)(*(int *)0xa58 + -1);
    ppppppiStack_c = (int ******)0x191;
    local_e = (undefined2 *******)0x1;
    local_12 = (int *******)0x4830;
    pppppppuStack_10 = (undefined2 *******)ppppppuVar15;
    FUN_1def_12e8();
    if (1 < *(byte *)0x125) {
      uStack_1e = 0;
      do {
        local_a = (undefined2 *******)0x0;
        ppppppiStack_c = (int ******)0x1;
        local_e = (undefined2 *******)0x0;
        pppppppuStack_10 = (undefined2 *******)(&uStack_3c)[uStack_1e];
        local_12 = (int *******)appppppiStack_28[uStack_1e];
        pppppppuStack_14 = (undefined2 *******)(&uStack_32)[uStack_1e];
        ppppppiStack_16 = appppppiStack_1c[uStack_1e];
        iStack_18 = 0x1def;
        appppppiStack_1c[1] = (int ******)0x4860;
        FUN_1def_1460();
        uStack_1e = uStack_1e + 1;
      } while ((int)uStack_1e < 5);
    }
    local_a = (undefined2 *******)0x1def;
    ppppppiStack_c = (int ******)0x4874;
    FUN_1885_5256();
    *(undefined2 *)0xc30 = unaff_SI;
    *(undefined2 *)0xc32 = unaff_DI;
    *(undefined2 *)0xc48 = local_e;
    *(undefined2 *)0xc4a = ppppppiStack_c;
    *(undefined2 *)0xc4c = local_12;
    *(uint *)0xc4e = (uint)pppppppuStack_10;
    *(undefined2 *)0xa5c = *(undefined2 *)0xa58;
    *(undefined2 *)0xa60 = *(undefined2 *)0xa5a;
    local_a = (undefined2 *******)0x48ad;
    FUN_1885_1f49();
    local_a = (undefined2 *******)0x1885;
    ppppppiStack_c = (int ******)0x48b5;
    FUN_13bf_0898();
    return (undefined2 *****)0x1;
  case 5:
    if (in_stack_0000001e == 3) {
      local_a = (undefined2 *******)0x9;
      FUN_32b2_6d14();
      local_a = (undefined2 *******)0xe;
      ppppppiStack_2e = (int ******)FUN_32b2_6f61();
      local_a = (undefined2 *******)0x19;
      FUN_32b2_6d14();
      local_a = (undefined2 *******)0x1e;
      ppppppuStack_30 = (undefined2 ******)FUN_32b2_6f61();
      local_a = (undefined2 *******)0x29;
      FUN_32b2_6d14();
      local_a = (undefined2 *******)0x2e;
      local_a = (undefined2 *******)FUN_32b2_6f61();
      ppppppiStack_34 = (int ******)local_a;
      if (local_a == (undefined2 *******)0x0) {
        local_e = in_stack_0000001c;
        pppppppuStack_10 = (undefined2 *******)ppppppuStack_30;
        local_12 = (int *******)ppppppiStack_2e;
        pppppppuStack_14 = (undefined2 *******)ppppppuStack_30;
        ppppppiStack_16 = ppppppiStack_2e;
        iStack_18 = 0x32b2;
        appppppiStack_1c[1] = (int ******)0x4b;
        ppppppiStack_c = (int ******)local_a;
        local_a = (undefined2 *******)func_0x0002f350();
      }
      if ((ppppppiStack_34 == (undefined2 ******)0x1) || (ppppppiStack_34 == (undefined2 ******)0x2)
         ) {
        appppppiStack_28[1] = (int ******)((int)ppppppiStack_2e - (int)ppppppiStack_34);
        appppppiStack_28[0] = (int ******)((int)ppppppiStack_2e + (int)ppppppiStack_34);
        ppppppuStack_2a = ppppppuStack_30 + -1;
        if (ppppppiStack_34 == (undefined2 ******)0x2) {
          local_a = (undefined2 *******)0x0;
          ppppppiStack_c = (int ******)0x0;
          local_e = in_stack_0000001c;
          local_12 = (int *******)((int)appppppiStack_28[0] - 1);
          ppppppiStack_16 = (int ******)((int)appppppiStack_28[1] + 1);
          iStack_18 = 0x32b2;
          appppppiStack_1c[1] = (int ******)0x8f;
          pppppppuStack_14 = (undefined2 *******)ppppppuStack_2a;
          pppppppuStack_10 = (undefined2 *******)ppppppuStack_2a;
          func_0x0002f350();
        }
        ppppppuStack_2a = (undefined2 ******)((int)ppppppuStack_2a + 1);
        local_a = (undefined2 *******)0x0;
        ppppppiStack_c = (int ******)0x0;
        local_e = in_stack_0000001c;
        local_12 = (int *******)appppppiStack_28[0];
        ppppppiStack_16 = appppppiStack_28[1];
        iStack_18 = 0x32b2;
        appppppiStack_1c[1] = (int ******)0xb1;
        pppppppuStack_14 = (undefined2 *******)ppppppuStack_2a;
        pppppppuStack_10 = (undefined2 *******)ppppppuStack_2a;
        func_0x0002f350();
        ppppppuStack_2a = (undefined2 ******)((int)ppppppuStack_2a + 1);
        local_a = (undefined2 *******)0x0;
        ppppppiStack_c = (int ******)0x0;
        local_e = in_stack_0000001c;
        local_12 = (int *******)appppppiStack_28[0];
        ppppppiStack_16 = appppppiStack_28[1];
        iStack_18 = 0x32b2;
        appppppiStack_1c[1] = (int ******)0xd3;
        pppppppuStack_14 = (undefined2 *******)ppppppuStack_2a;
        pppppppuStack_10 = (undefined2 *******)ppppppuStack_2a;
        func_0x0002f350();
        ppppppuStack_2a = (undefined2 ******)((int)ppppppuStack_2a + 1);
        local_a = (undefined2 *******)0x0;
        ppppppiStack_c = (undefined2 ******)0x0;
        local_e = in_stack_0000001c;
        local_12 = (int *******)appppppiStack_28[0];
        ppppppiStack_16 = appppppiStack_28[1];
        iStack_18 = 0x32b2;
        appppppiStack_1c[1] = (int ******)0xf5;
        pppppppuStack_14 = (undefined2 *******)ppppppuStack_2a;
        pppppppuStack_10 = (undefined2 *******)ppppppuStack_2a;
        local_a = (undefined2 *******)func_0x0002f350();
        ppppppuStack_2a = (undefined2 ******)((int)ppppppuStack_2a + 1);
        if (ppppppiStack_34 == (undefined2 ******)0x2) {
          local_a = (undefined2 *******)0x0;
          ppppppiStack_c = (undefined2 ******)0x0;
          local_e = in_stack_0000001c;
          local_12 = (int *******)((int)appppppiStack_28[0] - 1);
          ppppppiStack_16 = (int ******)((int)appppppiStack_28[1] + 1);
          iStack_18 = 0x32b2;
          appppppiStack_1c[1] = (int ******)0x11d;
          pppppppuStack_14 = (undefined2 *******)ppppppuStack_2a;
          pppppppuStack_10 = (undefined2 *******)ppppppuStack_2a;
          local_a = (undefined2 *******)func_0x0002f350();
        }
      }
      if (2 < (int)ppppppiStack_34) {
        local_a = (undefined2 *******)0x131;
        FUN_32b2_6d14();
        local_a = (undefined2 *******)0x136;
        uStack_32 = FUN_32b2_6f61();
        ppppppuVar14 = (undefined2 ******)0x32b2;
        for (; 0 < (int)uStack_32; uStack_32 = uStack_32 - 1) {
          local_a = (undefined2 *******)0x0;
          ppppppiStack_c = (int ******)0x0;
          local_e = (undefined2 *******)0x0;
          pppppppuStack_10 = (undefined2 *******)0x0;
          local_12 = (int *******)0xffff;
          pppppppuStack_14 = in_stack_0000001c;
          ppppppiStack_16 = (int ******)uStack_32;
          iStack_18 = (int)ppppppuStack_30;
          appppppiStack_1c[1] = ppppppiStack_2e;
          uStack_1e = 0x157;
          appppppiStack_1c[0] = ppppppuVar14;
          FUN_20a9_0e18();
          ppppppuVar14 = (undefined2 ******)0x20a9;
        }
        local_a = (undefined2 *******)0x0;
        ppppppiStack_c = (int ******)0x2;
        local_e = in_stack_0000001c;
        pppppppuStack_10 = (undefined2 *******)((int)ppppppuStack_30 + 1);
        local_12 = (int *******)((int)ppppppiStack_2e + 1);
        pppppppuStack_14 = (undefined2 *******)((int)ppppppuStack_30 - 1);
        ppppppiStack_16 = (int ******)((int)ppppppiStack_2e - 1);
        appppppiStack_1c[1] = (int ******)0x186;
        iStack_18 = (int)ppppppuVar14;
        local_a = (undefined2 *******)func_0x0002f350();
      }
    }
    else {
      local_a = (undefined2 *******)0x194;
      FUN_32b2_6d14();
      local_a = (undefined2 *******)0x199;
      ppppppiStack_34 = (int ******)FUN_32b2_6f61();
      local_a = (undefined2 *******)0x1a4;
      FUN_32b2_6d14();
      local_a = (undefined2 *******)0x1a9;
      uStack_32 = FUN_32b2_6f61();
      local_a = (undefined2 *******)0x1b4;
      FUN_32b2_6d14();
      local_a = (undefined2 *******)0x1b9;
      local_a = (undefined2 *******)FUN_32b2_6f61();
      ppppppuStack_30 = local_a;
      if (local_a == (undefined2 *******)0x0) {
        local_e = in_stack_0000001c;
        pppppppuStack_10 = (undefined2 *******)uStack_32;
        local_12 = (int *******)ppppppiStack_34;
        pppppppuStack_14 = (undefined2 *******)uStack_32;
        ppppppiStack_16 = ppppppiStack_34;
        iStack_18 = 0x32b2;
        appppppiStack_1c[1] = (int ******)0x1d6;
        ppppppiStack_c = (int ******)local_a;
        local_a = (undefined2 *******)func_0x0002f350();
      }
      if (ppppppuStack_30 == (undefined2 ******)0x1) {
        local_a = (undefined2 *******)0x0;
        ppppppiStack_c = (int ******)0x1;
        local_e = in_stack_0000001c;
        pppppppuStack_10 = (undefined2 *******)(uStack_32 + 1);
        local_12 = (int *******)((int)ppppppiStack_34 + 1);
        pppppppuStack_14 = (undefined2 *******)(uStack_32 - 1);
        ppppppiStack_16 = (int ******)((int)ppppppiStack_34 + -1);
        iStack_18 = 0x32b2;
        appppppiStack_1c[1] = (int ******)0x201;
        local_a = (undefined2 *******)func_0x0002f350();
      }
      if (ppppppuStack_30 == (undefined2 ******)0x2) {
        local_a = (undefined2 *******)0x0;
        ppppppiStack_c = (int ******)0x0;
        local_e = in_stack_0000001c;
        pppppppuStack_14 = (undefined2 *******)(uStack_32 - 2);
        ppppppiVar10 = (int ******)((int)ppppppiStack_34 + 1);
        iVar9 = (int)ppppppiStack_34 + -1;
        iStack_18 = 0x32b2;
        appppppiStack_1c[1] = (int ******)0x231;
        ppppppiStack_16 = (int ******)iVar9;
        local_12 = (int *******)ppppppiVar10;
        pppppppuStack_10 = pppppppuStack_14;
        func_0x0002f350();
        local_a = (undefined2 *******)0x0;
        ppppppiStack_c = (int ******)0x0;
        local_e = in_stack_0000001c;
        pppppppuStack_14 = (undefined2 *******)(uStack_32 + 2);
        iStack_18 = 0x32b2;
        appppppiStack_1c[1] = (int ******)0x24d;
        ppppppiStack_16 = (int ******)iVar9;
        local_12 = (int *******)ppppppiVar10;
        pppppppuStack_10 = pppppppuStack_14;
        func_0x0002f350();
        local_a = (undefined2 *******)0x0;
        ppppppiStack_c = (int ******)0x0;
        local_e = in_stack_0000001c;
        iVar9 = uStack_32 + 1;
        ppppppiStack_16 = ppppppiStack_34 + -1;
        iVar1 = uStack_32 - 1;
        iStack_18 = 0x32b2;
        appppppiStack_1c[1] = (int ******)0x274;
        pppppppuStack_14 = (undefined2 *******)iVar1;
        local_12 = (int *******)ppppppiStack_16;
        pppppppuStack_10 = (undefined2 *******)iVar9;
        func_0x0002f350();
        local_a = (undefined2 *******)0x0;
        ppppppiStack_c = (int ******)0x0;
        local_e = in_stack_0000001c;
        ppppppiStack_16 = ppppppiStack_34 + 1;
        iStack_18 = 0x32b2;
        appppppiStack_1c[1] = (int ******)0x28c;
        pppppppuStack_14 = (undefined2 *******)iVar1;
        local_12 = (int *******)ppppppiStack_16;
        pppppppuStack_10 = (undefined2 *******)iVar9;
        local_a = (undefined2 *******)func_0x0002f350();
      }
      if (2 < (int)ppppppuStack_30) {
        local_a = in_stack_0000001c;
        ppppppiStack_c = ppppppuStack_30;
        local_e = (undefined2 *******)ppppppuStack_30;
        pppppppuStack_10 = (undefined2 *******)uStack_32;
        local_12 = (int *******)ppppppiStack_34;
        pppppppuStack_14 = (undefined2 *******)0x32b2;
        ppppppiStack_16 = (int ******)0x2ac;
        local_a = (undefined2 *******)FUN_20a9_0ac5();
      }
    }
    return local_a;
  case 6:
    pcVar2 = (char *)(unaff_SI + param_6);
    cVar3 = *pcVar2;
    *pcVar2 = *pcVar2 + -0x7d;
    if (*pcVar2 != '\0' && SCARRY1(cVar3,-0x7d) == *pcVar2 < '\0') {
      *(char *)((int)unaff_DI + 0x11) = *(char *)((int)unaff_DI + 0x11) + extraout_DH;
    }
    local_a = (undefined2 *******)0x1000;
    ppppppiStack_c = (int ******)0x1c87;
    FUN_1def_13e3();
    local_a = (undefined2 *******)0x1c8d;
    FUN_1885_1f75();
    local_a = (undefined2 *******)0x1885;
    ppppppiStack_c = (int ******)0x1ceb;
    FUN_21f2_27eb();
    *(undefined2 *)0xc08 = 0;
    *(undefined2 *)0xbc0 = 1;
    if (*(int *)0xc0a != 0) {
      *(undefined2 *)0xc0a = 0;
      local_a = (undefined2 *******)0x21f2;
      ppppppiStack_c = (int ******)0x1d0a;
      FUN_21f2_27eb();
      *(undefined2 *)0xbc0 = 1;
    }
    *(undefined2 *)0xb6a = 0;
    local_a = (undefined2 *******)0x1d1c;
    pppppuVar8 = (undefined2 *****)FUN_1def_2730();
    if ((param_1 == 0) && (*(int *)0xa62 != 0x20)) {
      pppppuVar8 = (undefined2 *****)*(undefined2 *)0xa62;
      *(undefined2 *)0xa64 = pppppuVar8;
    }
    return pppppuVar8;
  }
  do {
    local_a = (undefined2 *******)0x8b5d;
    FUN_32b2_7258();
    local_a = (undefined2 *******)0x8b65;
    FUN_32b2_6eb1();
    local_a = (undefined2 *******)0x8b6d;
    FUN_32b2_6cc6();
    local_a = (undefined2 *******)0x8b72;
    FUN_32b2_7258();
    local_a = (undefined2 *******)0x8b7a;
    FUN_32b2_6eb1();
    local_a = (undefined2 *******)0x8b7e;
    FUN_1885_3b7a();
    local_a = appppppiStack_28 + 4;
    ppppppiStack_c = (undefined2 ******)0x32b2;
    local_e = (undefined2 *******)0x8b8b;
    ppppppiStack_2e = (int ******)FUN_2bb4_3aea();
    if (0 < (int)ppppppiStack_2e) {
      local_a = (undefined2 *******)0x2bb4;
      ppppppiVar10 = (int ******)0x1000;
      ppppppiStack_c = (int ******)0x8b9d;
      local_12 = (int *******)FUN_1000_03ef();
      unaff_SI = (undefined2 *)(uint)*(byte *)(local_12 + 4);
      pppppppuStack_10 = (undefined2 *******)ppppppuVar14;
      if ((*(char *)((int)local_12 + 9) == '\a') || ((*(int *)0xa62 != 0xe && (5 < *(byte *)0x123)))
         ) {
        *(undefined1 *)0x1cd = *(undefined1 *)((int)local_12 + 9);
      }
      else {
        *(uint *)0x1d0 = (uint)*(byte *)((int)local_12 + 9);
      }
LAB_1885_0a26:
      ppppppiStack_c = (undefined2 ******)0x927d;
      local_a = (undefined2 *******)ppppppiVar10;
      iVar9 = FUN_1885_0004();
      if (iVar9 == 0) {
        *(undefined2 *)0xb310 = unaff_SI;
        uVar13 = (int)unaff_SI >> 0xf;
        iStack_2c = ((int)(((uint)unaff_SI ^ uVar13) - uVar13) >> 4 ^ uVar13) - uVar13;
        *(undefined1 *)(iStack_2c + 0xb8e) = *(undefined1 *)0xb310;
        iVar9 = *(int *)0xb310;
        *(undefined1 *)(iVar9 + -0x4c78) = 1;
        *(undefined1 *)(iVar9 + -0x3e90) = 1;
        *(undefined1 *)(iStack_2c + 0xb6c) = 1;
        *(undefined1 *)(iStack_2c + 0xb7c) = 1;
        ppppppiStack_c = (undefined2 ******)0x92be;
        local_a = (undefined2 *******)ppppppiVar10;
        FUN_1885_0209();
      }
LAB_1885_0a6f:
      *(undefined1 *)0xc17 = 0;
      if (*(char *)0xc16 != '\0') {
        *(undefined1 *)0xc16 = 0;
        ppppppiStack_c = (undefined2 ******)0x92d8;
        local_a = (undefined2 *******)ppppppiVar10;
        FUN_21f2_27eb();
        *(undefined2 *)0xbc0 = 1;
        if (0 < *(int *)0xc62) {
          local_a = (undefined2 *******)0x92eb;
          FUN_13bf_0a34();
        }
      }
      if (*(int *)0xc62 < 0) {
        *(undefined2 *)0xc62 = 0;
      }
      local_a = (undefined2 *******)0x92fc;
      FUN_1885_2e9a();
      return (undefined2 *****)0x1;
    }
    pppppppuStack_14 = (undefined2 *******)*(uint *)0x1150;
    *(undefined2 *)0x1150 = 1;
    uVar12 = *(undefined2 *)0xc20;
    *(undefined2 *)0xc20 = 0;
    local_a = (undefined2 *******)0x9034;
    FUN_32b2_6cc6();
    local_a = (undefined2 *******)0x9039;
    FUN_32b2_7258();
    pppppppuStack_10 = (undefined2 *******)0x32b2;
    local_12 = (int *******)0x9043;
    FUN_32b2_6eb1();
    pppppppuStack_10 = (undefined2 *******)0x32b2;
    local_12 = (int *******)0x904b;
    FUN_32b2_6cc6();
    pppppppuStack_10 = (undefined2 *******)0x32b2;
    local_12 = (int *******)0x9050;
    FUN_32b2_7258();
    iStack_18 = 0x32b2;
    appppppiStack_1c[1] = (int ******)0x905a;
    FUN_32b2_6eb1();
    iStack_18 = 0x32b2;
    ppppppiVar10 = (int ******)0x21f2;
    appppppiStack_1c[1] = (int ******)0x905f;
    ppppppuStack_38 = (undefined2 ******)FUN_21f2_5670();
    *(uint *)0x1150 = (uint)pppppppuStack_14;
    *(undefined2 *)0xc20 = uVar12;
    ppppppuStack_36 = ppppppuVar14;
    if (ppppppuVar14 == (undefined2 ******)0x0 && ppppppuStack_38 == (undefined2 ******)0x0)
    goto LAB_1885_0902;
    if (appppppiStack_28[3] != (int ******)0x0) {
      pcVar5 = (code *)swi(0x3f);
      local_a = (undefined2 *******)ppppppuStack_38;
      (*pcVar5)();
      ppppppuVar14 = extraout_DX;
    }
    if ((-1 < (int)ppppppuStack_36) &&
       ((0 < (int)ppppppuStack_36 || (ppppppuStack_38 != (undefined2 ******)0x0)))) {
      local_a = (undefined2 *******)ppppppuStack_38;
      ppppppiStack_c = (int ******)0x21f2;
      local_e = (undefined2 *******)0x90a8;
      local_e = (undefined2 *******)FUN_1000_013f();
      bVar4 = *(byte *)(local_e + 9);
      *(uint *)0xa6a = (uint)*(byte *)((int)local_e + 0x11);
      bVar6 = *(byte *)(local_e + 8);
LAB_1885_0878:
      unaff_SI = (undefined2 *)(uint)bVar4;
      ppppppiVar10 = (int ******)0x1000;
      *(uint *)0xa6c = (uint)bVar6;
      goto LAB_1885_0a26;
    }
    if ((int)ppppppuStack_36 < 0) {
      local_a = (undefined2 *******)-(int)ppppppuStack_38;
      ppppppiVar10 = (int ******)
                     -((int)ppppppuStack_36 + (uint)(ppppppuStack_38 != (undefined2 ******)0x0));
      ppppppiStack_c = (int ******)0x21f2;
      local_e = (undefined2 *******)0x90ea;
      iStack_18 = FUN_1000_0271();
      bVar4 = *(byte *)(iStack_18 + 0x1c);
      *(uint *)0xa6a = (uint)*(byte *)(iStack_18 + 0x1b);
      bVar6 = *(byte *)(iStack_18 + 0x1a);
      ppppppiStack_16 = ppppppiVar10;
      goto LAB_1885_0878;
    }
    do {
      if (ppppppiStack_34 != (int ******)0x2) goto LAB_1885_0a26;
      local_a = (undefined2 *******)0x911d;
      FUN_32b2_6cc6();
      local_a = (undefined2 *******)0x9122;
      FUN_32b2_7258();
      pppppppuStack_10 = (undefined2 *******)0x32b2;
      local_12 = (int *******)0x912c;
      FUN_32b2_6eb1();
      pppppppuStack_10 = (undefined2 *******)0x32b2;
      local_12 = (int *******)0x9134;
      FUN_32b2_6cc6();
      pppppppuStack_10 = (undefined2 *******)0x32b2;
      local_12 = (int *******)0x9139;
      FUN_32b2_7258();
      iStack_18 = 0x32b2;
      appppppiStack_1c[1] = (int ******)0x9143;
      FUN_32b2_6eb1();
      iStack_18 = 0x32b2;
      ppppppiVar10 = (int ******)0x28b3;
      appppppiStack_1c[1] = (int ******)0x9148;
      ppppppiStack_2e = (int ******)FUN_28b3_26d4();
      if (ppppppiStack_2e != (int ******)0x0) {
        local_a = (undefined2 *******)0x28b3;
        ppppppiStack_c = (int ******)0x9164;
        uStack_3c = FUN_1000_0398();
        unaff_SI = (undefined2 *)(uint)*(byte *)(uStack_3c + 0x15);
        if ((*(int *)0xa62 == 0xe) && (2 < *(byte *)0x126)) {
          *(uint *)0x1ce = (uint)*(byte *)(uStack_3c + 0x14);
        }
        else {
          *(uint *)0x168 = (uint)*(byte *)(uStack_3c + 0x14);
        }
        local_a = (undefined2 *******)*(undefined2 *)(uStack_3c + 0x10);
        ppppppiStack_c = (int ******)0xbf48;
        local_e = (undefined2 *******)0x1000;
        pppppppuStack_10 = (undefined2 *******)0x91a9;
        ppppppuStack_3a = ppppppuVar14;
        FUN_28b3_0064();
        *(undefined1 *)0xbf7a = 0;
        uVar17 = *(undefined1 *)0x129;
        *(undefined1 *)0x129 = 1;
        local_a = (undefined2 *******)0x1a;
        ppppppiStack_c = (int ******)0x28b3;
        local_e = (undefined2 *******)0x91c9;
        FUN_1def_26a9();
        local_a = (undefined2 *******)0x1def;
        ppppppiVar10 = (int ******)0x21f2;
        ppppppiStack_c = (int ******)0x91d4;
        FUN_21f2_0356();
        *(undefined1 *)0x129 = uVar17;
        if (appppppiStack_28[3] != (int ******)0x0) {
          local_a = (undefined2 *******)0x1a;
          ppppppiStack_c = (int ******)0x21f2;
          local_e = (undefined2 *******)0x91f1;
          FUN_1def_26a9();
          *(undefined2 *)0xc22 = 2;
          local_a = (undefined2 *******)0x920c;
          FUN_32b2_6d9b();
          local_a = (undefined2 *******)0x9215;
          FUN_32b2_704d();
          local_a = (undefined2 *******)0x921a;
          FUN_32b2_7258();
          pppppppuStack_10 = (undefined2 *******)0x32b2;
          local_12 = (int *******)0x9224;
          FUN_32b2_6eb1();
          pppppppuStack_10 = (undefined2 *******)0x32b2;
          local_12 = (int *******)0x922d;
          FUN_32b2_6d9b();
          pppppppuStack_10 = (undefined2 *******)0x32b2;
          local_12 = (int *******)0x9236;
          FUN_32b2_704d();
          pppppppuStack_10 = (undefined2 *******)0x32b2;
          local_12 = (int *******)0x923b;
          FUN_32b2_7258();
          iStack_18 = 0x32b2;
          appppppiStack_1c[1] = (int ******)0x9245;
          FUN_32b2_6eb1();
          iStack_18 = 0x32b2;
          appppppiStack_1c[1] = (int ******)0x924e;
          FUN_32b2_6d9b();
          iStack_18 = 0x32b2;
          appppppiStack_1c[1] = (int ******)0x9257;
          FUN_32b2_704d();
          iStack_18 = 0x32b2;
          appppppiStack_1c[1] = (int ******)0x925c;
          FUN_32b2_7258();
          pppppiStack_20 = (int *****)0x32b2;
          appppppiStack_28[3] = (int ******)0x9266;
          FUN_32b2_6eb1();
          pppppiStack_20 = (int *****)*(int *)0x168;
          appppppiStack_28[3] = (int ******)0x1861;
          appppppiStack_28[2] = (int ******)0x32b2;
          ppppppiVar10 = (int ******)0x21f2;
          appppppiStack_28[1] = (int ******)0x9273;
          FUN_21f2_0356();
        }
        goto LAB_1885_0a26;
      }
LAB_1885_0902:
      ppppppiVar16 = ppppppiVar10;
      if (param_1 != 0) goto LAB_1885_0a6f;
LAB_1885_0545:
      if (*(char *)0xb782 == '\0') {
        if ((*(char *)0xc16 == '\0') && (ppppppuStack_30 == (undefined2 ******)0x0)) {
          pppppppuStack_10 = (undefined2 *******)0x17e7;
        }
        else {
          pppppppuStack_10 = (undefined2 *******)0xa0e;
        }
        local_a = (undefined2 *******)0x7;
        ppppppiStack_c = (int ******)0x4;
        local_e = (undefined2 *******)0x2;
        pppppppuStack_14 = (undefined2 *******)0x8bee;
        local_12 = (int *******)ppppppiVar16;
        FUN_1def_23c5();
        local_a = (undefined2 *******)0x1def;
        ppppppiStack_c = (int ******)0x8bf8;
        FUN_1885_5256();
        local_a = (undefined2 *******)*(undefined2 *)0x1b3e;
        ppppppiStack_c = (int ******)0x0;
        local_e = (undefined2 *******)0x0;
        pppppppuStack_10 = (undefined2 *******)0x1def;
        local_12 = (int *******)0x8c0a;
        FUN_1def_12e8();
        local_a = (undefined2 *******)0x8c11;
        FUN_1885_1faf();
        local_a = (undefined2 *******)0x0;
        ppppppiStack_c = (undefined2 ******)0x1;
        local_e = (undefined2 *******)0x7;
        pppppppuStack_10 = (undefined2 *******)0x30;
        local_12 = (int *******)*(uint *)0xa58;
        pppppppuStack_14 = (undefined2 *******)*(uint *)0xa5e;
        ppppppiStack_16 = (int ******)0x0;
        iStack_18 = 0x1def;
        appppppiStack_1c[1] = (int ******)0x8c31;
        FUN_1def_1460();
        local_a = (undefined2 *******)0x8c38;
        FUN_1885_1f49();
      }
      local_a = (undefined2 *******)0x8c3c;
      FUN_1885_3af0();
      local_a = (undefined2 *******)0x8c41;
      FUN_1def_2636();
      local_a = (undefined2 *******)0x1;
      ppppppiStack_c = (int ******)0x1def;
      local_e = (undefined2 *******)0x8c4b;
      FUN_1def_26a9();
      local_a = (undefined2 *******)0x1def;
      ppppppiStack_c = (int ******)0x8c56;
      FUN_21f2_0356();
      local_a = (undefined2 *******)0x8;
      ppppppiStack_c = (int ******)0x21f2;
      local_e = (undefined2 *******)0x8c64;
      FUN_1def_26a9();
      local_a = (undefined2 *******)0x1def;
      ppppppiVar10 = (int ******)0x21f2;
      ppppppiStack_c = (int ******)0x8c6f;
      FUN_21f2_0356();
      if (*(char *)0xc16 != '\0') {
        *(undefined2 *)0xc22 = 1;
        local_a = (undefined2 *******)0x7;
        ppppppiStack_c = (int ******)0x2;
        local_e = (undefined2 *******)0x11;
        pppppppuStack_10 = (undefined2 *******)0x183c;
        local_12 = (int *******)0x21f2;
        pppppppuStack_14 = (undefined2 *******)0x8c96;
        FUN_1def_23c5();
        ppppppuStack_30 = (undefined2 ******)0x0;
        local_a = (undefined2 *******)0x7;
        ppppppiStack_c = (int ******)0x1;
        local_e = (undefined2 *******)0xf;
        pppppppuStack_10 = (undefined2 *******)0x1843;
        local_12 = (int *******)0x1def;
        ppppppiVar10 = (int ******)0x1def;
        pppppppuStack_14 = (undefined2 *******)0x8cb4;
        FUN_1def_23c5();
      }
      if (ppppppuStack_30 != (undefined2 ******)0x0) {
        local_a = (undefined2 *******)0x1a;
        local_e = (undefined2 *******)0x8cca;
        ppppppiStack_c = ppppppiVar10;
        FUN_1def_26a9();
        local_a = (undefined2 *******)0x1def;
        ppppppiVar10 = (int ******)0x21f2;
        ppppppiStack_c = (int ******)0x8cd5;
        FUN_21f2_0356();
      }
      iStack_2c = 0;
      do {
        *(undefined2 *)0xa4a = 1;
        *(undefined2 *)0xa48 = 1;
        local_a = (undefined2 *******)apppppuStack_46;
        ppppppiStack_c = apppppuStack_42;
        local_e = &local_a;
        pppppppuStack_10 = (undefined2 *******)&stack0xfff8;
        ppppppiVar16 = (int ******)0x13bf;
        pppppppuStack_14 = (undefined2 *******)0x8cfd;
        local_12 = (int *******)ppppppiVar10;
        iStack_2c = FUN_13bf_2a18();
        *(undefined2 *)0xa4a = 0;
        *(undefined2 *)0xa48 = 0;
        if ((*(int *)0x158 != 0) || (iStack_2c == -1)) {
          *(undefined1 *)0xc17 = 0;
          if (*(char *)0xc16 != '\0') {
            *(undefined1 *)0xc16 = 0;
            local_a = (undefined2 *******)0x13bf;
            ppppppiStack_c = (int ******)0x8d2e;
            FUN_21f2_27eb();
          }
          return (undefined2 *****)0xffff;
        }
        if (((3 < *(byte *)0xb782) && (ppppppiStack_34 != (int ******)0x0)) &&
           ((int)&ppppppiStack_34 < *(int *)0xa5c)) {
          ppppppuVar14 = (undefined2 ******)((int)local_a >> 0xf);
          uStack_32 = ((int)(((uint)local_a ^ (uint)ppppppuVar14) - (int)ppppppuVar14) >> 4 ^
                      (uint)ppppppuVar14) - (int)ppppppuVar14;
          if (uStack_32 == 2) {
            iStack_2c = 0xf00;
          }
        }
        if (((ppppppiStack_34 != (int ******)0x0) && (0x40 < (int)&ppppppiStack_34)) &&
           (((int)&ppppppiStack_34 < 0xb0 && ((int)local_a < 0x10)))) {
          iStack_2c = 0x31;
        }
        if (iStack_2c == 0xf00) {
          ppppppuStack_30 = (undefined2 ******)((uint)ppppppuStack_30 ^ 1);
          appppppiStack_28[3] = (int ******)0x1;
          goto LAB_1885_0545;
        }
        ppppppiVar10 = ppppppiVar16;
      } while (iStack_2c == 0);
      if (iStack_2c == 0x31) {
        local_a = (undefined2 *******)0x8dd7;
        FUN_1885_3b7a();
        *(byte *)0xc16 = *(byte *)0xc16 ^ 1;
        local_a = (undefined2 *******)0x13bf;
        ppppppiStack_c = (undefined2 ******)0x8de4;
        FUN_21f2_27eb();
        *(undefined2 *)0xbc0 = 1;
        ppppppiVar16 = (int ******)0x21f2;
        goto LAB_1885_0545;
      }
      if (iStack_2c != 100) goto LAB_1885_0545;
      if (ppppppuStack_30 != (undefined2 ******)0x0) {
        ppppppiStack_2e = (int ******)0x0;
        uStack_3e = 0xffff;
        local_a = (undefined2 *******)0x8e0a;
        FUN_1885_3b7a();
        if (ppppppiStack_34 == (int ******)0x1) {
          local_a = (undefined2 *******)0x8e18;
          FUN_32b2_6cc6();
          local_a = (undefined2 *******)0x8e1d;
          FUN_32b2_7258();
          local_a = (undefined2 *******)0x8e25;
          FUN_32b2_6eb1();
          local_a = (undefined2 *******)0x8e2d;
          FUN_32b2_6cc6();
          local_a = (undefined2 *******)0x8e32;
          FUN_32b2_7258();
          local_a = (undefined2 *******)0x8e3a;
          FUN_32b2_6eb1();
          local_a = appppppiStack_28 + 4;
          ppppppiStack_c = (undefined2 ******)0x32b2;
          local_e = (undefined2 *******)0x8e47;
          ppppppiStack_2e = (int ******)FUN_2bb4_3aea();
          if ((int)ppppppiStack_2e < 1) {
            pppppppuStack_14 = (undefined2 *******)*(uint *)0x1150;
            *(undefined2 *)0x1150 = 1;
            local_a = (undefined2 *******)0x8f2d;
            FUN_32b2_6cc6();
            local_a = (undefined2 *******)0x8f32;
            FUN_32b2_7258();
            pppppppuStack_10 = (undefined2 *******)0x32b2;
            local_12 = (int *******)0x8f3c;
            FUN_32b2_6eb1();
            pppppppuStack_10 = (undefined2 *******)0x32b2;
            local_12 = (int *******)0x8f44;
            FUN_32b2_6cc6();
            pppppppuStack_10 = (undefined2 *******)0x32b2;
            local_12 = (int *******)0x8f49;
            FUN_32b2_7258();
            iStack_18 = 0x32b2;
            appppppiStack_1c[1] = (int ******)0x8f53;
            FUN_32b2_6eb1();
            iStack_18 = 0x32b2;
            ppppppiVar16 = (int ******)0x21f2;
            appppppiStack_1c[1] = (int ******)0x8f58;
            ppppppuStack_38 = (undefined2 ******)FUN_21f2_5670();
            *(uint *)0x1150 = (uint)pppppppuStack_14;
            ppppppuStack_36 = ppppppuVar14;
            if (((int)ppppppuVar14 < 0) ||
               (((int)ppppppuVar14 < 1 && (ppppppuStack_38 == (undefined2 ******)0x0)))) {
              if (-1 < (int)ppppppuVar14) goto LAB_1885_0545;
              local_a = (undefined2 *******)-(int)ppppppuStack_38;
              ppppppuVar14 = (undefined2 ******)
                             -((int)ppppppuVar14 + (uint)(ppppppuStack_38 != (undefined2 ******)0x0)
                              );
              ppppppiStack_c = (undefined2 ******)0x21f2;
              local_e = (undefined2 *******)0x8fa1;
              iVar9 = FUN_1000_0271();
              bVar6 = *(byte *)(iVar9 + 0x1c);
            }
            else {
              ppppppiStack_c = (undefined2 ******)0x21f2;
              local_e = (undefined2 *******)0x8f7c;
              local_a = (undefined2 *******)ppppppuStack_38;
              iVar9 = FUN_1000_013f();
              bVar6 = *(byte *)(iVar9 + 0x12);
            }
          }
          else {
            local_a = (undefined2 *******)0x2bb4;
            ppppppiStack_c = (undefined2 ******)0x8e59;
            iVar9 = FUN_1000_03ef();
            bVar6 = *(byte *)(iVar9 + 8);
          }
          ppppppiVar16 = (int ******)0x1000;
          uStack_3e = (uint)bVar6;
        }
        if (ppppppiStack_34 == (int ******)0x2) {
          local_a = (undefined2 *******)0x8e75;
          FUN_32b2_6cc6();
          local_a = (undefined2 *******)0x8e7a;
          FUN_32b2_7258();
          pppppppuStack_10 = (undefined2 *******)0x32b2;
          local_12 = (int *******)0x8e84;
          FUN_32b2_6eb1();
          pppppppuStack_10 = (undefined2 *******)0x32b2;
          local_12 = (int *******)0x8e8c;
          FUN_32b2_6cc6();
          pppppppuStack_10 = (undefined2 *******)0x32b2;
          local_12 = (int *******)0x8e91;
          FUN_32b2_7258();
          iStack_18 = 0x32b2;
          appppppiStack_1c[1] = (int ******)0x8e9b;
          FUN_32b2_6eb1();
          iStack_18 = 0x32b2;
          ppppppiVar16 = (int ******)0x28b3;
          appppppiStack_1c[1] = (int ******)0x8ea0;
          ppppppiStack_2e = (int ******)FUN_28b3_26d4();
          if ((int)ppppppiStack_2e < 1) goto LAB_1885_0545;
          local_a = (undefined2 *******)0x28b3;
          ppppppiVar16 = (int ******)0x1000;
          ppppppiStack_c = (int ******)0x8eb3;
          iVar9 = FUN_1000_0398();
          uStack_3e = (uint)*(byte *)(iVar9 + 0x15);
        }
        if (uStack_3e == *(uint *)0xb310) {
          *(undefined2 *)0xc22 = 1;
          local_a = (undefined2 *******)0x12;
          local_e = (undefined2 *******)0x8ff4;
          ppppppiStack_c = ppppppiVar16;
          FUN_1def_26a9();
          local_a = (undefined2 *******)0x1859;
          ppppppiStack_c = (undefined2 ******)0x1def;
          local_e = (undefined2 *******)0x9003;
          FUN_21f2_0356();
          ppppppiVar16 = (int ******)0x21f2;
        }
        else {
          ppppppiStack_c = (undefined2 ******)0x8ed3;
          local_a = (undefined2 *******)ppppppiVar16;
          iVar9 = FUN_1885_0004();
          if (iVar9 != 4) {
            uVar13 = (int)uStack_3e >> 0xf;
            ppppppiStack_2e =
                 (int ******)(((int)((uStack_3e ^ uVar13) - uVar13) >> 4 ^ uVar13) - uVar13);
            uVar13 = (int)*(uint *)0xb310 >> 0xf;
            iStack_2c = ((int)((*(uint *)0xb310 ^ uVar13) - uVar13) >> 4 ^ uVar13) - uVar13;
            if (ppppppiStack_2e == (int ******)iStack_2c) {
              *(undefined1 *)(uStack_3e + 0xb388) = 0;
              *(byte *)(uStack_3e + 0xc170) = *(byte *)(uStack_3e + 0xc170) & 6;
            }
            else {
              *(undefined1 *)((int)ppppppiStack_2e + 0xb7c) = 0;
              *(byte *)((int)ppppppiStack_2e + 0xb6c) = *(byte *)((int)ppppppiStack_2e + 0xb6c) & 6;
            }
            *(undefined1 *)0xc17 = 0;
            ppppppiVar10 = (int ******)0x21f2;
            ppppppiStack_c = (undefined2 ******)0x8fc8;
            local_a = (undefined2 *******)ppppppiVar16;
            FUN_21f2_27eb();
            *(undefined2 *)0xbc0 = 1;
            if (0 < *(int *)0xc62) {
              ppppppiVar10 = (int ******)0x13bf;
              local_a = (undefined2 *******)0x8fde;
              FUN_13bf_0a34();
            }
            goto LAB_1885_0a6f;
          }
        }
        goto LAB_1885_0545;
      }
      local_a = (undefined2 *******)0x14;
      ppppppiStack_c = (undefined2 ******)0x13bf;
      ppppppiVar10 = (int ******)0x1def;
      local_e = (undefined2 *******)0x8b3f;
      FUN_1def_26a9();
      *(undefined2 *)0xc22 = 1;
    } while (ppppppiStack_34 != (int ******)0x1);
    local_a = (undefined2 *******)0x8b58;
    FUN_32b2_6cc6();
  } while( true );
}


