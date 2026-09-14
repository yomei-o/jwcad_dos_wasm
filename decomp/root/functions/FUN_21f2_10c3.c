/* 21f2:10c3 */

/* WARNING: Control flow encountered bad instruction data */

undefined2 **** __cdecl16far
FUN_21f2_10c3(undefined2 ****param_1,int param_2,undefined2 ****param_3,uint param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined2 ***pppuVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  uint extraout_DX;
  uint extraout_DX_00;
  uint extraout_DX_01;
  uint extraout_DX_02;
  undefined2 ****unaff_SI;
  undefined2 *unaff_DI;
  undefined2 ****ppppuVar12;
  undefined2 ****ppppuVar13;
  undefined2 ****ppppuVar14;
  undefined2 ****ppppuVar15;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar16;
  undefined8 in_MM0;
  undefined1 in_XMM7 [16];
  undefined2 local_19e [8];
  undefined2 local_18e;
  undefined2 ***local_186 [3];
  undefined1 local_180 [224];
  undefined2 ***local_a0;
  undefined2 local_9e;
  int local_9c;
  int local_9a;
  undefined2 ***local_98;
  int local_96;
  int local_94;
  undefined2 ***local_84;
  byte local_82;
  int local_80;
  undefined1 local_7e;
  int local_6e [2];
  undefined2 ***local_6a;
  uint local_68;
  uint local_64;
  undefined2 **local_62;
  undefined2 ***local_60;
  undefined2 ***local_5e;
  char local_5c;
  undefined2 ***local_5a;
  int local_58;
  int local_56;
  undefined2 **local_54;
  undefined2 ***local_52;
  int local_50;
  undefined1 local_4e [46];
  int iStack_20;
  undefined2 local_1e;
  undefined2 ***pppuStack_1c;
  undefined1 *puStack_1a;
  undefined1 *puStack_18;
  undefined2 *puStack_16;
  undefined2 ***pppuStack_14;
  undefined2 ***pppuStack_12;
  undefined2 ***pppuStack_10;
  undefined2 ***pppuStack_e;
  undefined2 ***pppuStack_c;
  
  FUN_32b2_02bc();
  local_9c = 0;
  local_a0 = (undefined2 ****)0xffff;
  local_52 = (undefined2 ****)0xffff;
  uVar11 = (int)param_4 >> 0xf;
  local_6a = (undefined2 ***)((param_4 ^ uVar11) - uVar11);
  if (10000 < (int)local_6a) {
    local_6a = local_6a + -5000;
  }
  local_5c = '\0';
  local_1e = (undefined2 ****)((uint)local_1e._1_1_ << 8);
  local_4e[0] = 0;
  local_7e = *(int *)0xfda == 0;
  pppuStack_c = (undefined2 ***)0x3039;
  local_186[0] = (undefined2 ***)FUN_32b2_21c4();
  local_5e = (undefined2 ****)0x0;
  if ((int)param_3 < 0) {
    param_3 = (undefined2 ****)-(int)param_3;
    local_5e = local_186[0];
  }
  ppppuVar13 = param_1;
  FUN_1def_2730();
  local_60 = param_3;
  local_58 = param_2 + (int)local_5e;
  pppuStack_c = param_3;
  pppuStack_e = (undefined2 ***)param_2;
  pppuStack_10 = local_186[0];
  pppuStack_12 = local_6a;
  pppuStack_14 = param_1;
  puStack_16 = (undefined2 *)0x1def;
  puStack_18 = (undefined1 *)0x3077;
  FUN_21f2_0f7f();
  local_5a = local_186[0];
  FUN_1def_271e();
  local_56 = 0;
  ppppuVar15 = (undefined2 ****)0x1def;
LAB_21f2_116b:
  do {
    pppuStack_c = (undefined2 ***)*(int *)0xfda;
    pppuStack_10 = (undefined2 ****)0x3099;
    pppuStack_e = ppppuVar15;
    FUN_21f2_0f13();
    do {
      local_9a = 0;
      local_94 = 0;
      local_9e = 0;
      local_82 = FUN_21f2_0d8c();
      if (local_82 == 0) {
        if (local_56 == 0) {
          pppuStack_c = (undefined2 ***)local_6e;
          pppuStack_e = &local_54;
          pppuStack_12 = (undefined2 ****)0x30f6;
          pppuStack_10 = ppppuVar15;
          FUN_1885_546d();
          pppuVar4 = local_5e;
          if (*(int *)0x16c == 0) {
            do {
              if (((undefined2 ***)local_54 == (undefined2 ***)0x0) && (local_6e[0] == 0))
              goto LAB_21f2_131b;
              pppuStack_c = (undefined2 ***)&local_80;
              pppuStack_e = &local_62;
              pppuStack_10 = (undefined2 ****)0x1885;
              ppppuVar12 = (undefined2 ****)0x1885;
              pppuStack_12 = (undefined2 ****)0x3218;
              FUN_1885_546d();
            } while (((undefined2 ***)local_62 != (undefined2 ***)0x0) || (local_80 != 0));
            if (((((int)param_4 < 1) || (0x24 < (int)local_64)) || (*(int *)0xa5e < (int)local_68))
               && (uVar11 = (int)local_68 >> 0xf,
                  (((int)((local_68 ^ uVar11) - uVar11) >> 4 ^ uVar11) - uVar11) - (int)param_3 ==
                  -1)) {
              uVar11 = (int)local_64 >> 0xf;
              local_5e = (undefined2 ***)
                         (((((int)((local_64 ^ uVar11) - uVar11) >> 3 ^ uVar11) - uVar11) - param_2)
                         + 1);
              pppuStack_c = (undefined2 ***)*(int *)0xfda;
              pppuStack_e = (undefined2 ****)0x1885;
              pppuStack_10 = (undefined2 ****)0x3298;
              FUN_21f2_0f13();
              local_94 = 1;
              local_9a = 1;
              local_52 = (undefined2 ****)0xffff;
              local_54 = (undefined2 ***)0x0;
              local_6e[0] = 0;
              goto LAB_21f2_1995;
            }
          }
          else {
            if (((undefined2 ***)local_54 != (undefined2 ***)0x0) || (local_6e[0] != 0)) {
              FUN_1def_2730();
              pppuStack_c = (undefined2 ***)*(undefined2 *)0xfda;
              pppuStack_e = (undefined2 ***)0x1def;
              pppuStack_10 = (undefined2 ***)0x3125;
              FUN_21f2_0f13();
              pppuStack_c = (undefined2 ***)local_6e[0];
              pppuStack_e = (undefined2 ***)local_54;
              pppuStack_10 = local_186;
              pppuStack_12 = &local_5e;
              pppuStack_14 = local_6a;
              puStack_16 = &local_1e;
              puStack_18 = local_4e;
              puStack_1a = local_180;
              pppuStack_1c = param_1;
              local_1e = param_3;
              iStack_20 = param_2;
              pcVar3 = (code *)swi(0x3f);
              (*pcVar3)();
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if ((0 < *(int *)0x16c) && ((local_a0 != local_186[0] || (local_52 != local_5e)))) {
              pcVar3 = (code *)swi(0x3f);
              (*pcVar3)();
              in_MM0 = psraw(in_MM0,*(undefined8 *)((int)ppppuVar13 + (int)unaff_SI));
              local_a0 = local_186[0];
              local_52 = local_5e;
              uVar11 = extraout_DX;
              ppppuVar13 = (undefined2 ****)pppuVar4;
            }
          }
LAB_21f2_131b:
          ppppuVar15 = (undefined2 ****)0x1885;
          if ((undefined2 ***)local_54 != (undefined2 ***)0x0) {
            if ((((int)param_4 < 1) || (0x24 < (int)local_64)) || (*(int *)0xa5e < (int)local_68)) {
              local_82 = 0xd;
            }
            else {
              local_82 = 0x1b;
            }
          }
          if (local_6e[0] != 0) {
            local_82 = 0x1b;
          }
          if (local_5a != local_186[0]) {
            FUN_1def_2730();
            pppuStack_c = (undefined2 ***)*(undefined2 *)0xfda;
            pppuStack_e = (undefined2 ***)0x1def;
            pppuStack_10 = (undefined2 ***)0x32e0;
            FUN_21f2_0f13();
            pppuStack_c = param_3;
            pppuStack_e = (undefined2 ***)param_2;
            pppuStack_10 = local_186[0];
            pppuStack_12 = local_6a;
            pppuStack_14 = param_1;
            puStack_16 = (undefined2 *)0x1def;
            puStack_18 = (undefined1 *)0x32fd;
            FUN_21f2_0f7f();
            local_5a = local_186[0];
            pppuStack_c = (undefined2 ***)*(int *)0xfda;
            pppuStack_e = (undefined2 ****)0x1def;
            pppuStack_10 = (undefined2 ****)0x3315;
            FUN_21f2_0f13();
            ppppuVar15 = (undefined2 ****)0x1def;
            FUN_1def_271e();
          }
        }
        else {
          local_56 = local_56 + 1;
          if (4 < local_56) {
            local_56 = 0;
            ppppuVar15 = (undefined2 ****)0x32b2;
            pppuStack_c = (undefined2 ***)0x30dd;
            FUN_32b2_2ca0();
            ppppuVar13 = (undefined2 ****)0xb5b6;
          }
        }
      }
      else {
        local_56 = 1;
      }
    } while (local_82 == 0);
    pppuStack_c = (undefined2 ***)*(undefined2 *)0xfda;
    pppuStack_10 = (undefined2 ****)0x3334;
    pppuStack_e = ppppuVar15;
    FUN_21f2_0f13();
    if ((local_50 != 0) && (local_50 = 0, *(int *)0x16c != 0)) {
      FUN_21f2_1ef9();
    }
    if (local_82 == 0xd) goto LAB_21f2_1a66;
    if (local_82 == 0x1b) {
      local_186[0] = (undefined2 ****)0xffff;
LAB_21f2_1a66:
      if (*(int *)0x16c != 0) {
        FUN_2b6e_0033();
        FUN_21f2_1ef9();
        if ((local_5c != '\0') && (*(char *)0x124 != '\0')) {
          pppuStack_c = (undefined2 ***)0x2b6e;
          pppuStack_e = (undefined2 ****)0x39af;
          FUN_21f2_01cc();
        }
      }
      *(undefined2 *)0x16c = 0;
      FUN_1def_2730();
      return (undefined2 ****)local_186[0];
    }
    if (((local_82 == 7) || (local_82 == 8)) && (*(int *)0x16c != 0)) {
      ppppuVar12 = (undefined2 ****)0x1885;
      uVar8 = FUN_1885_5307();
      ppppuVar15 = ppppuVar12;
      if ((uVar8 & 2) == 0) goto LAB_21f2_1497;
      if (local_82 == 7) {
        local_98 = (undefined2 ****)0x1;
      }
      else {
        local_98 = (undefined2 ****)0x2;
      }
      pppuStack_c = local_6a;
      pppuStack_e = local_186;
      pppuStack_10 = &local_5e;
      pppuStack_12 = local_98;
      pcVar3 = (code *)swi(0x3f);
      (*pcVar3)();
      in_XMM7 = divps(in_XMM7,*(undefined1 (*) [16])((int)ppppuVar13 + (int)unaff_DI + -0x7d));
      uVar11 = extraout_DX_00;
      goto LAB_21f2_1995;
    }
LAB_21f2_1497:
    pppuVar4 = local_5e;
    ppppuVar12 = ppppuVar15;
    if (((10000 < (int)param_4) && (local_82 == 0x2e)) &&
       ((0 < (int)local_5e &&
        (unaff_SI = (undefined2 ****)pppuVar4, *(char *)((int)param_1 + (int)local_5e + -1) == '.'))
       )) {
      ppppuVar12 = (undefined2 ****)0x3a75;
      pppuStack_e = (undefined2 ***)0x33e2;
      pppuStack_c = ppppuVar15;
      iVar10 = FUN_3a75_0002();
      if (iVar10 == 0) {
        pppuStack_c = (undefined2 ****)0x3a75;
        ppppuVar12 = (undefined2 ****)0x3a75;
        pppuStack_e = (undefined2 ****)0x33f5;
        iVar10 = FUN_3a75_02e8();
        if (iVar10 == 0) {
          local_82 = 0x2c;
          if (0x13 < *(byte *)0x123) {
            local_82 = 0x3b;
          }
          *(byte *)((int)param_1 + (int)local_5e + -1) = local_82;
          local_94 = 1;
          ppppuVar13 = param_1;
          unaff_SI = (undefined2 ****)local_5e;
          goto LAB_21f2_1995;
        }
      }
    }
    pppuStack_c = ppppuVar12;
    if (((*(int *)0xfda == 0) && (0x1f < local_82)) && ((int)local_5e < (int)local_6a)) {
      *(byte *)((int)param_1 + (int)local_5e) = local_82;
      ppppuVar13 = (undefined2 ****)((int)local_5e + 1);
      unaff_SI = (undefined2 ****)local_5e;
      if ((int)local_186[0] < (int)ppppuVar13) {
        *(undefined1 *)((int)ppppuVar13 + (int)param_1) = 0;
        unaff_SI = param_1;
        local_186[0] = ppppuVar13;
      }
      pppuStack_e = (undefined2 ****)0x3465;
      local_5e = ppppuVar13;
      iVar10 = FUN_3a75_0002();
      ppppuVar13 = (undefined2 ****)0x0;
      if (iVar10 == 1) {
        uVar5 = FUN_21f2_0d8c();
        *(undefined1 *)((int)param_1 + (int)local_5e) = uVar5;
        ppppuVar15 = (undefined2 ****)((int)local_5e + 1);
        ppppuVar13 = param_1;
        unaff_SI = (undefined2 ****)local_5e;
        local_5e = ppppuVar15;
        if ((int)local_186[0] < (int)ppppuVar15) {
          *(undefined1 *)((int)ppppuVar15 + (int)param_1) = 0;
          ppppuVar13 = ppppuVar15;
          unaff_SI = param_1;
          local_186[0] = ppppuVar15;
        }
      }
LAB_21f2_1651:
      local_94 = 1;
    }
    else {
      pppuStack_e = (undefined2 ****)0x34a3;
      iVar10 = FUN_3a75_0002();
      ppppuVar13 = (undefined2 ****)0x0;
      if (iVar10 == 1) {
        local_84 = local_6a + -1;
        if ((int)local_186[0] < (int)local_84) {
          local_84 = local_186[0];
        }
        for (; (int)local_5e <= (int)local_84; local_84 = (undefined2 ***)((int)local_84 + -1)) {
          unaff_SI = (undefined2 ****)((int)local_84 + (int)param_1);
          *(undefined1 *)(unaff_SI + 1) = *(undefined1 *)((int)param_1 + (int)local_84);
          ppppuVar13 = param_1;
        }
        if ((int)local_5e <= (int)local_6a) {
          *(byte *)((int)param_1 + (int)local_5e) = local_82;
          ppppuVar13 = param_1;
          unaff_SI = (undefined2 ****)local_5e;
        }
        if ((int)local_186[0] < (int)local_6a) {
          local_186[0] = (undefined2 ***)((int)local_186[0] + 1);
        }
        if ((int)local_5e < (int)local_186[0]) {
          local_5e = (undefined2 ***)((int)local_5e + 1);
        }
        if ((int)local_5e <= (int)local_6a) {
          bVar6 = FUN_21f2_0d8c();
LAB_21f2_1636:
          *(byte *)((int)param_1 + (int)local_5e) = bVar6;
          ppppuVar13 = param_1;
          unaff_SI = (undefined2 ****)local_5e;
        }
LAB_21f2_1638:
        if ((int)local_186[0] < (int)local_6a) {
          local_186[0] = (undefined2 ***)((int)local_186[0] + 1);
        }
        if ((int)local_5e < (int)local_186[0]) {
          local_5e = (undefined2 ****)((int)local_5e + 1);
        }
        goto LAB_21f2_1651;
      }
      if (0x1f < local_82) {
        local_84 = (undefined2 ***)((int)local_6a + -1);
        if ((int)local_186[0] < (int)local_84) {
          local_84 = local_186[0];
        }
        for (; (int)local_5e <= (int)local_84; local_84 = (undefined2 ***)((int)local_84 + -1)) {
          unaff_SI = (undefined2 ****)((int)local_84 + (int)param_1);
          *(undefined1 *)((int)unaff_SI + 1) = *(undefined1 *)((int)param_1 + (int)local_84);
          ppppuVar13 = param_1;
        }
        bVar6 = local_82;
        if ((int)local_5e <= (int)local_6a) goto LAB_21f2_1636;
        goto LAB_21f2_1638;
      }
    }
    ppppuVar15 = (undefined2 ****)0x3a75;
    if ((((local_82 != 5) && (local_82 != 0x18)) && (local_82 != 0x1a)) ||
       ((*(char *)0x124 == '\0' &&
        ((3 < (int)param_3 ||
         (((*(int *)0xa62 != 0xd && (*(int *)0xa62 != 0x1c)) && (*(int *)0xa62 != 0xf))))))))
    goto LAB_21f2_1796;
    if (local_9c == 0) {
      pppuStack_c = (undefined2 ***)local_180;
      pppuStack_e = (undefined2 ****)0x3a75;
      ppppuVar15 = (undefined2 ****)0x32b2;
      pppuStack_10 = (undefined2 ****)0x35cc;
      FUN_32b2_21e0();
      *(undefined1 *)0xad8c = 0;
    }
    if (local_82 == 5) {
      local_9c = local_9c + -1;
    }
    else if (local_82 == 0x18) {
      if ((local_9c == 0) && (*(char *)0x10ca != '\0')) {
        *(undefined1 *)0xad8c = 1;
      }
      local_9c = local_9c + 1;
    }
    else {
      local_9c = 0;
    }
    if (local_9c < 0) {
      local_9c = *(int *)0x150;
    }
    if ((*(int *)0x150 < local_9c) && (*(char *)0xad8c == '\0')) {
      local_9c = 0;
    }
    if (local_9c == 0) {
      pppuStack_c = param_1;
      pppuStack_10 = (undefined2 ****)0x362a;
      pppuStack_e = ppppuVar15;
      FUN_32b2_21e0();
      *(undefined1 *)0xad8c = 0;
      goto LAB_21f2_177e;
    }
    if (*(char *)0xad8c == '\0') {
      pppuStack_c = (undefined2 ***)0x365d;
      puVar9 = (undefined2 *)FUN_1000_0398();
      unaff_DI = local_19e;
      for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar2 = unaff_DI;
        unaff_DI = unaff_DI + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar1;
      }
      pppuStack_c = (undefined2 ***)local_18e;
      pppuStack_e = param_1;
      pppuStack_10 = (undefined2 ****)0x1000;
      pppuStack_12 = (undefined2 ****)0x3682;
      FUN_28b3_0091();
      goto LAB_21f2_177e;
    }
    pppuStack_c = param_1;
    pppuStack_10 = (undefined2 ****)0x3695;
    pppuStack_e = ppppuVar15;
    iVar10 = FUN_21f2_0e6e();
    if (iVar10 != -1) {
LAB_21f2_177e:
      ppppuVar15 = (undefined2 ****)0x32b2;
      pppuStack_c = (undefined2 ****)0x36a6;
      local_186[0] = (undefined2 ***)FUN_32b2_21c4();
      local_5e = (undefined2 ****)0x0;
      local_94 = 1;
LAB_21f2_1796:
      if ((local_82 == 1) && (0 < (int)local_5e)) {
        ppppuVar15 = (undefined2 ****)0x1885;
        uVar8 = FUN_1885_5307();
        if ((uVar8 & 2) == 0) {
          pppuStack_c = (undefined2 ****)0x1885;
          ppppuVar15 = (undefined2 ****)0x3a75;
          pppuStack_e = (undefined2 ****)0x36df;
          iVar10 = FUN_3a75_02e8();
          if (iVar10 == 2) {
            local_5e = local_5e + -1;
          }
          else {
            local_5e = (undefined2 ***)((int)local_5e + -1);
          }
        }
        else {
          local_5e = (undefined2 ****)0x0;
        }
        local_9a = 1;
      }
      if (local_82 != 4) goto LAB_21f2_1815;
      if ((int)local_186[0] <= (int)local_5e) goto LAB_21f2_1815;
      ppppuVar13 = (undefined2 ****)0x1885;
      uVar8 = FUN_1885_5307();
      if ((uVar8 & 2) == 0) {
        pppuStack_c = (undefined2 ***)0x1885;
        ppppuVar13 = (undefined2 ****)0x3a75;
        pppuStack_e = (undefined2 ***)0x3721;
        iVar10 = FUN_3a75_02e8();
        if (iVar10 == 1) {
          local_5e = local_5e + 1;
        }
        else {
          local_5e = (undefined2 ***)((int)local_5e + 1);
        }
      }
      else {
        local_5e = local_186[0];
      }
      do {
        local_9a = 1;
        ppppuVar15 = ppppuVar13;
LAB_21f2_1815:
        if (local_82 == 0x16) {
          if (*(int *)0xfda == 0) {
            *(undefined2 *)0xfda = 1;
            local_7e = 0;
          }
          else {
            *(undefined2 *)0xfda = 0;
            local_7e = 1;
          }
        }
        if (local_82 != 7) goto LAB_21f2_18c9;
        if ((int)local_186[0] < 1) goto LAB_21f2_18c9;
        if ((int)local_186[0] <= (int)local_5e) goto LAB_21f2_18c9;
        ppppuVar13 = (undefined2 ****)0x3a75;
        pppuStack_e = (undefined2 ***)0x377e;
        pppuStack_c = ppppuVar15;
        iVar10 = FUN_3a75_02e8();
        if (iVar10 == 1) {
          local_96 = 2;
        }
        else {
          local_96 = 1;
        }
        bVar16 = *(int *)0x16c < 0;
        if (*(int *)0x16c == 0) break;
        pppuStack_c = (undefined2 ***)local_96;
        pppuStack_e = local_5e;
        pcVar3 = (code *)swi(0x3f);
        (*pcVar3)();
        uVar11 = extraout_DX_01;
      } while (bVar16);
      local_84 = local_5e;
      do {
        ppppuVar15 = (undefined2 ****)0x3a75;
        ppppuVar13 = param_1;
        if ((int)local_186[0] - local_96 < (int)local_84) {
          local_186[0] = (undefined2 ***)((int)local_186[0] - local_96);
          local_94 = 1;
LAB_21f2_18c9:
          if ((local_82 != 8) || ((int)local_5e < 1)) goto LAB_21f2_1950;
          ppppuVar13 = (undefined2 ****)((int)local_5e + -1);
          pppuStack_e = (undefined2 ***)0x3804;
          pppuStack_c = ppppuVar15;
          iVar10 = FUN_3a75_02e8();
          if (iVar10 == 2) {
            local_96 = 2;
          }
          else {
            local_96 = 1;
          }
          if (*(int *)0x16c == 0) goto LAB_21f2_1919;
          pppuStack_c = (undefined2 ***)local_96;
          pppuStack_e = (undefined2 ***)((int)local_5e - local_96);
          bVar16 = (int)pppuStack_e < 0;
          pcVar3 = (code *)swi(0x3f);
          (*pcVar3)();
          uVar11 = extraout_DX_02;
          if (!bVar16) goto LAB_21f2_1919;
        }
        *(undefined1 *)((int)param_1 + (int)local_84) =
             *(undefined1 *)((int)ppppuVar13 + local_96 + (int)local_84);
        local_84 = (undefined2 ***)((int)local_84 + 1);
      } while( true );
    }
  } while( true );
LAB_21f2_1919:
  for (local_84 = local_5e; (int)local_84 <= (int)local_186[0];
      local_84 = (undefined2 ***)((int)local_84 + 1)) {
    *(undefined1 *)(((int)param_1 - local_96) + (int)local_84) =
         *(undefined1 *)((int)param_1 + (int)local_84);
  }
  local_5e = (undefined2 ***)((int)local_5e - local_96);
  local_186[0] = (undefined2 ***)((int)local_186[0] - local_96);
  local_94 = 1;
  ppppuVar15 = (undefined2 ****)0x3a75;
LAB_21f2_1950:
  if (local_82 == 9) {
    if (local_5e == local_186[0]) {
      local_5e = (undefined2 ****)0x0;
    }
    else {
      local_5e = local_186[0];
    }
    local_9a = 1;
  }
  *(undefined1 *)((int)local_6a + (int)param_1) = 0;
  ppppuVar13 = (undefined2 ****)((int)local_186[0] + -1);
  ppppuVar12 = (undefined2 ****)0x3a75;
  pppuStack_e = (undefined2 ****)0x38a4;
  pppuStack_c = ppppuVar15;
  iVar10 = FUN_3a75_02e8();
  unaff_SI = param_1;
  if (iVar10 == 1) {
    *(undefined1 *)((int)local_186[0] + (int)param_1 + -1) = 0;
    ppppuVar13 = (undefined2 ****)local_186[0];
    local_186[0] = (undefined2 ****)((int)local_186[0] + -1);
  }
LAB_21f2_1995:
  if ((int)local_5e < 0) {
    local_5e = (undefined2 ****)0x0;
  }
  pppuVar4 = local_5e;
  ppppuVar14 = ppppuVar12;
  if (0 < (int)local_5e) {
    ppppuVar14 = (undefined2 ****)0x3a75;
    pppuStack_e = (undefined2 ****)0x38d1;
    pppuStack_c = ppppuVar12;
    iVar10 = FUN_3a75_02e8();
    ppppuVar13 = (undefined2 ****)pppuVar4;
    if (iVar10 == 2) {
      local_5e = (undefined2 ***)((int)local_5e + -1);
    }
  }
  if ((int)local_186[0] < (int)local_5e) {
    local_5e = local_186[0];
  }
  local_58 = param_2 + (int)local_5e;
  local_60 = param_3;
  ppppuVar15 = ppppuVar14;
  if (0x4e < (int)local_5e) {
    ppppuVar15 = (undefined2 ****)0x3a75;
    pppuStack_e = (undefined2 ****)0x3908;
    pppuStack_c = ppppuVar14;
    iVar10 = FUN_3a75_02e8();
    ppppuVar13 = (undefined2 ****)0x4f;
    if (iVar10 == 1) {
      local_58 = local_58 + 1;
    }
  }
  if (0x50 < local_58) {
    local_58 = local_58 + -0x50;
    local_60 = (undefined2 ***)((int)local_60 + 1);
  }
  if (0x50 < local_58) {
    local_58 = 0x50;
  }
  if ((local_94 != 0) && (cVar7 = FUN_21f2_0d67(), cVar7 == '\0')) {
    FUN_1def_2730();
    pppuStack_c = param_3;
    pppuStack_e = (undefined2 ***)param_2;
    pppuStack_10 = local_186[0];
    pppuStack_12 = local_6a;
    pppuStack_14 = param_1;
    puStack_16 = (undefined2 *)0x1def;
    puStack_18 = (undefined1 *)0x3956;
    FUN_21f2_0f7f();
    ppppuVar15 = (undefined2 ****)0x1def;
    FUN_1def_271e();
    local_5a = local_186[0];
  }
  pppuVar4 = local_60;
  if ((local_9a != 0) || (local_94 != 0)) {
    pppuStack_e = (undefined2 ***)0x3981;
    pppuStack_c = ppppuVar15;
    FUN_1def_26a9();
    ppppuVar13 = (undefined2 ****)pppuVar4;
    ppppuVar15 = (undefined2 ****)0x1def;
  }
  goto LAB_21f2_116b;
}


