/* 2bb4:6da3 */

void __cdecl16far FUN_2bb4_6da3(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_78;
  int local_74;
  byte local_72;
  int local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  byte local_66 [82];
  undefined2 uStack_14;
  undefined2 uStack_12;
  byte *pbStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  
  FUN_32b2_02bc();
  local_6e = *(undefined2 *)0x93c0;
  local_6c = *(undefined2 *)0x93c2;
  local_6a = *(undefined2 *)0x93c4;
  local_68 = *(undefined2 *)0x93c6;
  iStack_a = 0x32b2;
  uStack_c = 0x2904;
  iVar3 = FUN_32b2_21c4();
  if (iVar3 < 1) {
    puVar5 = (undefined2 *)0x93c0;
  }
  else {
    local_74 = 0;
    local_78 = 0;
    uStack_c = 0x32b2;
    for (local_70 = 0; uVar6 = uStack_c, local_70 < iVar3; local_70 = local_70 + 1) {
      iStack_a = param_1;
      uVar6 = 0x3a75;
      uStack_e = 0x2a63;
      iVar4 = FUN_3a75_02e8();
      if (iVar4 == 1) {
        bVar2 = ((char *)(local_70 + param_1))[1];
        local_72 = 0;
        if (*(char *)(local_70 + param_1) == -0x7f) {
          if (((bVar2 == 0x40) && (local_72 = 1, local_74 != 0)) ||
             ((bVar2 == 0x43 && (local_72 = 1, local_78 != 0)))) break;
          if (bVar2 == 0x44) {
            local_72 = 0x2e;
            local_78 = 1;
          }
          if (bVar2 == 0x4f) {
            local_72 = 0x5e;
          }
          if (bVar2 == 0x7b) {
            local_72 = 0x2b;
          }
          if (bVar2 == 0x7c) {
            local_72 = 0x2d;
          }
          if ((bVar2 == 0x7e) || (bVar2 == 0x96)) {
            local_72 = 0x2a;
          }
          if ((bVar2 == 0x80) || (bVar2 == 0x5e)) {
            local_72 = 0x2f;
          }
          if ((bVar2 == 0x8b) || (bVar2 == 0x4b)) {
            local_72 = 0xdf;
          }
          if (bVar2 == 0x46) {
            local_72 = 0xdf;
          }
          if ((bVar2 == 0x8c) || (bVar2 == 0x66)) {
            local_72 = 0x27;
          }
          if ((bVar2 == 0x8d) || (bVar2 == 0x68)) {
            local_72 = 0x22;
          }
          if ((bVar2 == 0x69) || (bVar2 == 0x6d)) {
            local_72 = 0x5b;
          }
          if ((bVar2 == 0x6a) || (bVar2 == 0x6e)) {
            local_72 = 0x5d;
          }
        }
        if (((*(char *)(local_70 + param_1) == -0x7d) && (bVar2 == 0xd3)) &&
           (local_72 = 1, local_74 != 0)) break;
        if (((*(char *)(local_70 + param_1) == -0x7e) && (0x4e < bVar2)) && (bVar2 < 0x59)) {
          local_72 = bVar2 - 0x1f;
        }
        if (local_72 == 0) break;
        if (1 < local_72) {
          local_66[local_74] = local_72;
          local_74 = local_74 + 1;
        }
        local_70 = local_70 + 1;
      }
      else {
        cVar1 = *(char *)(local_70 + param_1);
        if ((cVar1 != ' ') || (*(int *)0x112a != 2)) {
          iVar4 = local_74;
          if ((cVar1 != ' ') && (cVar1 != 'R')) {
            if (cVar1 == '.') {
              local_78 = 1;
            }
            iVar4 = local_78;
            if (cVar1 != ',') {
              iStack_a = 0x3a75;
              uStack_c = 0x2afe;
              bVar2 = FUN_10ad_071d();
              iStack_a = 0x10ad;
              uVar6 = 0x10ad;
              uStack_c = 0x2b0a;
              iVar4 = FUN_10ad_0409();
              if (-1 < iVar4) {
                local_66[local_74] = bVar2;
                local_74 = local_74 + 1;
                goto LAB_2bb4_6f0f;
              }
              break;
            }
          }
          if (iVar4 != 0) break;
        }
      }
LAB_2bb4_6f0f:
      uStack_c = uVar6;
    }
    local_66[local_74] = 0;
    iStack_a = local_6a;
    uStack_c = local_6c;
    uStack_e = local_6e;
    pbStack_10 = local_66;
    uStack_14 = 0x2aad;
    uStack_12 = uVar6;
    puVar5 = (undefined2 *)FUN_10ad_0004();
    local_6e = *puVar5;
    local_6c = puVar5[1];
    local_6a = puVar5[2];
    local_68 = puVar5[3];
    puVar5 = &local_6e;
  }
  *(undefined2 *)0x7a2a = *puVar5;
  *(undefined2 *)0x7a2c = puVar5[1];
  *(undefined2 *)0x7a2e = puVar5[2];
  *(undefined2 *)0x7a30 = puVar5[3];
  return;
}


