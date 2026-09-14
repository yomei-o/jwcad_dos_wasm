/* 10ad:0773 */

uint __cdecl16far
FUN_10ad_0773(int param_1,int *param_2,undefined2 *param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,int *param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  int local_1e;
  undefined2 local_1c [2];
  undefined2 uStack_18;
  undefined2 uStack_16;
  int local_14;
  int *piStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  uint local_c;
  undefined2 local_a;
  
  FUN_32b2_02bc();
  local_1e = 0;
  local_14 = *(undefined2 *)0x9000;
  piStack_12 = (int *)*(undefined2 *)0x9002;
  uStack_10 = *(undefined2 *)0x9004;
  uStack_e = *(undefined2 *)0x9006;
LAB_10ad_0791:
  *param_3 = *(undefined2 *)0x9000;
  param_3[1] = *(undefined2 *)0x9002;
  param_3[2] = *(undefined2 *)0x9004;
  param_3[3] = *(undefined2 *)0x9006;
  local_a = *(undefined2 *)0x9008;
  puVar4 = (undefined2 *)0x9000;
  puVar5 = local_1c;
  uVar6 = unaff_SS;
LAB_10ad_07b1:
  do {
    *puVar5 = *puVar4;
    puVar5[1] = puVar4[1];
    puVar5[2] = puVar4[2];
    puVar5[3] = puVar4[3];
    while( true ) {
      while( true ) {
        if (100 < *param_8) {
          return 0;
        }
        local_c = (uint)*(byte *)(*param_2 + param_1);
        *param_2 = *param_2 + 1;
        uVar7 = local_c < 0x2e;
        uVar8 = local_c == 0x2e;
        if ((bool)uVar8) break;
        puVar5 = param_3;
        uVar6 = unaff_DS;
        if (0x2f < local_c) {
          uVar7 = local_c < 0x39;
          uVar8 = local_c == 0x39;
          if (local_c < 0x3a) {
            local_a = 0x12f0;
            FUN_32b2_6d14();
            local_a = 0x12f8;
            FUN_32b2_6d14();
            local_a = 0x12fd;
            FUN_32b2_7191();
            if ((bool)uVar7 || (bool)uVar8) {
              local_a = 0x1310;
              FUN_32b2_6d9b();
              local_a = 0x1318;
              FUN_32b2_6d14();
              local_a = 0x1321;
              FUN_32b2_710c();
              local_a = 0x1326;
              FUN_32b2_718c();
            }
            else {
              local_a = 0x133c;
              FUN_32b2_6d9b();
              local_a = 0x1345;
              FUN_32b2_6d14();
              local_a = 0x32b2;
              local_c = 0x134e;
              FUN_32b2_710c();
              local_a = 0x1354;
              FUN_32b2_6e99();
              local_a = 0x1359;
              FUN_32b2_717d();
              local_a = 0x32b2;
              local_c = 0x1362;
              FUN_32b2_7154();
            }
            local_a = 0x1368;
            FUN_32b2_6eb1();
            puVar4 = local_1c;
            goto LAB_10ad_07b1;
          }
        }
        if (local_c == 0x40) {
          puVar4 = &param_4;
          goto LAB_10ad_07b1;
        }
        if (local_c == 0x70) {
          puVar4 = (undefined2 *)0x9028;
          goto LAB_10ad_07b1;
        }
        if (local_c == 0x78) {
          local_a = 0x1392;
          FUN_32b2_6cc6();
        }
        else {
          if (local_c != 0x79) {
            if (local_c == 0x23) {
              puVar4 = (undefined2 *)0x9030;
              goto LAB_10ad_07b1;
            }
            if (local_c == 0x26) {
              puVar4 = (undefined2 *)0x9038;
              goto LAB_10ad_07b1;
            }
            if (local_c == 0xdf) {
              local_14 = *param_3;
              piStack_12 = (int *)param_3[1];
              uStack_10 = param_3[2];
              uStack_e = param_3[3];
              local_1e = 1;
            }
            else if (local_c == 0x27) {
              local_a = 0x1407;
              FUN_32b2_6d14();
              local_a = 0x1410;
              FUN_32b2_710c();
              local_a = 0x32b2;
              local_c = 0x1419;
              FUN_32b2_7154();
              local_a = 0x141f;
              FUN_32b2_6eb1();
              local_1e = 2;
            }
            else {
              if (local_c != 0x22) {
                if (local_1e == 1) {
                  local_a = 0x1463;
                  FUN_32b2_6d14();
                  local_a = 0x146c;
                  FUN_32b2_710c();
                  local_a = 0x32b2;
                  local_c = 0x1475;
                  FUN_32b2_7154();
                  local_a = 0x147b;
                  FUN_32b2_6eb1();
                }
                if (local_1e == 2) {
                  local_a = 0x1489;
                  FUN_32b2_6d14();
                  local_a = 0x1492;
                  FUN_32b2_710c();
                  local_a = 0x32b2;
                  local_c = 0x149b;
                  FUN_32b2_7154();
                  local_a = 0x14a1;
                  FUN_32b2_6eb1();
                }
                if (local_1e != 0) {
                  *param_3 = local_14;
                  param_3[1] = piStack_12;
                  param_3[2] = uStack_10;
                  param_3[3] = uStack_e;
                  local_a = 0x32b2;
                  local_c = 0x14ba;
                  iVar2 = FUN_10ad_0409();
                  if ((((iVar2 != 0) && (iVar2 != 3)) && (iVar2 != 4)) && (iVar2 != 6)) {
                    *param_8 = 0x68;
                    return 0;
                  }
                }
                if (local_c != 0x5b) {
                  return local_c;
                }
                local_a = 0x14e6;
                uVar3 = FUN_32b2_1f42();
                if ((999 < uVar3) && (*param_8 < 100)) {
                  local_a = param_7;
                  local_c = param_6;
                  uStack_e = param_5;
                  uStack_10 = param_4;
                  piStack_12 = param_2;
                  local_14 = param_1;
                  uStack_16 = 0x32b2;
                  uStack_18 = 0x1514;
                  puVar4 = (undefined2 *)FUN_10ad_04e6();
                  *param_3 = *puVar4;
                  param_3[1] = puVar4[1];
                  param_3[2] = puVar4[2];
                  param_3[3] = puVar4[3];
                  if (100 < *param_8) {
                    return 0;
                  }
                  bVar1 = *(byte *)(*param_2 + param_1);
                  *param_2 = *param_2 + 1;
                  return (uint)bVar1;
                }
                *param_8 = 800;
                return 0;
              }
              local_a = 0x1435;
              FUN_32b2_6d14();
              local_a = 0x143e;
              FUN_32b2_710c();
              local_a = 0x32b2;
              local_c = 0x1447;
              FUN_32b2_7154();
              local_a = 0x144d;
              FUN_32b2_6eb1();
              local_1e = 3;
            }
            goto LAB_10ad_0791;
          }
          local_a = 0x13ba;
          FUN_32b2_6cc6();
        }
        local_a = 0x139b;
        FUN_32b2_704d();
        local_a = 0x13a0;
        FUN_32b2_7258();
        local_a = 0x13a8;
        FUN_32b2_6eb1();
      }
      local_a = 0x12b5;
      FUN_32b2_6d14();
      local_a = 0x12bd;
      FUN_32b2_6d14();
      local_a = 0x12c2;
      FUN_32b2_7191();
      if ((bool)uVar7 || (bool)uVar8) break;
      *param_8 = 0x68;
    }
    puVar4 = (undefined2 *)0x9010;
    puVar5 = &local_a;
    uVar6 = unaff_SS;
  } while( true );
}


