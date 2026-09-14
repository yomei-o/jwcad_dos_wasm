/* 3ab8:4084 */

void __cdecl16far
FUN_3ab8_4084(undefined2 *param_1,undefined2 param_2,int param_3,int param_4,undefined2 **param_5,
             undefined2 **param_6,undefined2 **param_7,undefined2 **param_8,undefined2 **param_9,
             undefined2 **param_10,undefined2 **param_11,undefined2 **param_12,undefined2 **param_13
             ,undefined2 **param_14,undefined2 **param_15,undefined2 **param_16,
             undefined2 **param_17,undefined2 **param_18,undefined2 **param_19,undefined2 **param_20
             ,undefined2 **param_21,undefined2 **param_22,undefined2 **param_23,
             undefined2 **param_24,undefined2 **param_25,undefined2 **param_26,undefined2 **param_27
             ,undefined2 **param_28,undefined2 **param_29,undefined2 **param_30,undefined2 param_31)

{
  undefined2 *puVar1;
  undefined2 **ppuVar2;
  undefined2 *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined2 **ppuVar6;
  undefined2 *puVar7;
  undefined2 ***pppuVar8;
  undefined2 ***pppuVar9;
  undefined2 *puVar10;
  undefined2 **ppuVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar12;
  undefined2 *puVar13;
  undefined2 *local_17c [2];
  uint local_174;
  int local_172;
  undefined2 local_16c;
  int local_16a;
  int local_168;
  undefined2 **local_166;
  int local_164;
  undefined2 **local_162;
  int local_160;
  int local_15e;
  int local_15c;
  undefined2 local_15a [8];
  undefined1 local_14a;
  byte local_149;
  undefined2 local_144 [13];
  undefined1 local_12a;
  byte local_129;
  undefined2 *local_124 [4];
  undefined1 local_114;
  byte local_113;
  undefined1 local_112;
  byte local_110;
  undefined2 *local_10e [6];
  undefined1 local_f4;
  byte local_f3;
  undefined1 local_f2;
  undefined2 local_ee [84];
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 **ppuStack_42;
  undefined2 **ppuStack_40;
  undefined2 **ppuStack_3e;
  undefined2 **ppuStack_3c;
  undefined2 **ppuStack_3a;
  undefined2 **ppuStack_38;
  undefined2 **ppuStack_36;
  undefined2 **ppuStack_34;
  undefined2 **ppuStack_32;
  undefined2 **ppuStack_30;
  undefined2 **ppuStack_2e;
  undefined2 **ppuStack_2c;
  undefined2 **ppuStack_2a;
  undefined2 **ppuStack_26;
  undefined2 **ppuStack_24;
  undefined2 **ppuStack_22;
  undefined2 **ppuStack_1c;
  undefined2 **ppuStack_1a;
  undefined2 **ppuStack_18;
  undefined2 **ppuStack_16;
  undefined2 **ppuStack_14;
  undefined2 **ppuStack_12;
  undefined2 **ppuStack_10;
  undefined2 **local_e;
  undefined2 **ppuStack_c;
  
  FUN_21f2_0ebc();
  local_174 = *(uint *)0x148;
  local_172 = *(int *)0x14a;
  local_162 = (undefined2 **)*(undefined2 *)0x14c;
  local_160 = *(int *)0x14e;
  local_15c = *(int *)0x150;
  local_16c = *(undefined2 *)0x152;
  local_164 = 0;
  ppuVar6 = (undefined2 **)0x22b2;
  for (local_166 = (undefined2 **)0x1;
      (local_164 <= local_172 && ((local_164 < local_172 || (local_166 <= local_174))));
      local_166 = (undefined2 **)((int)local_166 + 1)) {
    ppuVar11 = (undefined2 **)0x0;
    local_e = (undefined2 **)0xecaa;
    ppuStack_c = ppuVar6;
    uVar12 = func_0x0000013f();
    if ((*(byte *)((int)uVar12 + 0x14) & 2) != 0) {
      *param_1 = 1;
      ppuStack_c = (undefined2 **)0x0;
      ppuVar11 = (undefined2 **)0x0;
      local_e = (undefined2 **)0xeccb;
      puVar13 = (undefined2 *)func_0x0000013f();
      puVar7 = (undefined2 *)puVar13;
      ppuVar6 = local_124;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        ppuVar2 = ppuVar6;
        ppuVar6 = (undefined2 **)((int)ppuVar6 + 2);
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *(undefined2 *)ppuVar2 = *puVar1;
      }
      puVar7 = local_15a;
      ppuVar6 = local_124;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar13 = puVar7;
        puVar7 = puVar7 + 1;
        ppuVar2 = ppuVar6;
        ppuVar6 = (undefined2 **)((int)ppuVar6 + 2);
        *puVar13 = *(undefined2 *)ppuVar2;
      }
      if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
        ppuStack_c = (undefined2 **)0x0;
        local_e = (undefined2 **)0xed0a;
        local_112 = FUN_3ab8_401b();
        if (local_113 < 0x5a) {
          if (param_3 != 0) {
            local_113 = *(byte *)0xa6a;
          }
          if (param_4 != 0) {
            local_114 = *(undefined1 *)0xa6c;
          }
          ppuStack_c = param_26;
          local_e = param_25;
          ppuStack_10 = param_24;
          ppuStack_12 = param_23;
          ppuStack_14 = param_22;
          ppuStack_16 = param_21;
          ppuStack_18 = param_20;
          ppuStack_1a = param_19;
          ppuStack_1c = param_18;
          ppuStack_22 = param_15;
          ppuStack_24 = param_14;
          ppuStack_26 = param_13;
          ppuStack_2a = param_11;
          ppuStack_2c = param_10;
          ppuStack_2e = param_9;
          ppuStack_30 = param_8;
          ppuStack_32 = param_7;
          ppuStack_34 = param_6;
          ppuStack_36 = param_5;
          ppuStack_38 = local_124;
          ppuStack_3a = (undefined2 **)0x0;
          ppuStack_3c = (undefined2 **)0xed85;
          FUN_3ab8_0568();
          if (*(char *)0xb1ea == '\x03') {
            local_110 = local_110 & 0x3f;
          }
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        pppuVar9 = &ppuStack_1c;
        ppuVar6 = local_124;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar13 = pppuVar9;
          pppuVar9 = pppuVar9 + 1;
          ppuVar2 = ppuVar6;
          ppuVar6 = (undefined2 **)((int)ppuVar6 + 2);
          *puVar13 = *(undefined2 *)ppuVar2;
        }
        FUN_3ab8_0000();
      }
      else {
        ppuVar11 = (undefined2 **)0x885;
        ppuStack_c = (undefined2 **)0xec75;
        iVar5 = func_0x00008854();
        if ((iVar5 == 0) && (local_149 < 0x5a)) {
          local_149 = 0;
          local_14a = 1;
          puVar10 = (undefined2 *)&stack0xffe2;
          puVar7 = local_15a;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            puVar13 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar1 = *puVar13;
          }
          ppuStack_22 = (undefined2 **)0xedc6;
          func_0x00018396();
          ppuStack_c = param_26;
          local_e = param_25;
          ppuStack_10 = param_24;
          ppuStack_12 = param_23;
          ppuStack_14 = param_22;
          ppuStack_16 = param_21;
          ppuStack_18 = param_20;
          ppuStack_1a = param_19;
          ppuStack_1c = param_18;
          ppuStack_22 = param_15;
          ppuStack_24 = param_14;
          ppuStack_26 = param_13;
          ppuStack_2a = param_11;
          ppuStack_2c = param_10;
          ppuStack_2e = param_9;
          ppuStack_30 = param_8;
          ppuStack_32 = param_7;
          ppuStack_34 = param_6;
          ppuStack_36 = param_5;
          ppuStack_38 = local_124;
          ppuStack_3a = (undefined2 **)0x11f2;
          ppuStack_3c = (undefined2 **)0xee1a;
          FUN_3ab8_0568();
          ppuStack_c = (undefined2 **)0x11f2;
          local_e = (undefined2 **)0xee2a;
          local_17c[0] = (undefined2 *)func_0x0000013f();
          puVar7 = (undefined2 *)local_17c[0];
          ppuVar6 = local_124;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar13 = puVar7;
            puVar7 = puVar7 + 1;
            ppuVar2 = ppuVar6;
            ppuVar6 = (undefined2 **)((int)ppuVar6 + 2);
            *puVar13 = *(undefined2 *)ppuVar2;
          }
          ppuStack_c = (undefined2 **)0x0;
          ppuVar11 = (undefined2 **)0x11f2;
          local_e = (undefined2 **)0xee4e;
          FUN_13bf_0a80();
        }
      }
    }
    local_164 = local_164 + (uint)(0xfffe < local_166);
    ppuVar6 = ppuVar11;
  }
  local_164 = 0;
  for (local_166 = (undefined2 **)0x1;
      (local_164 <= local_160 && ((local_164 < local_160 || (local_166 <= local_162))));
      local_166 = (undefined2 **)((int)local_166 + 1)) {
    ppuVar11 = (undefined2 **)0x0;
    local_e = (undefined2 **)0xef01;
    ppuStack_c = ppuVar6;
    uVar12 = func_0x00000271();
    if ((*(byte *)((int)uVar12 + 0x1e) & 2) != 0) {
      *param_1 = 1;
      ppuStack_c = (undefined2 **)0x0;
      ppuVar11 = (undefined2 **)0x0;
      local_e = (undefined2 **)0xef22;
      puVar13 = (undefined2 *)func_0x00000271();
      puVar7 = (undefined2 *)puVar13;
      ppuVar6 = local_10e;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        ppuVar2 = ppuVar6;
        ppuVar6 = (undefined2 **)((int)ppuVar6 + 2);
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *(undefined2 *)ppuVar2 = *puVar1;
      }
      puVar7 = local_144;
      ppuVar6 = local_10e;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar13 = puVar7;
        puVar7 = puVar7 + 1;
        ppuVar2 = ppuVar6;
        ppuVar6 = (undefined2 **)((int)ppuVar6 + 2);
        *puVar13 = *(undefined2 *)ppuVar2;
      }
      if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
        ppuStack_c = (undefined2 **)0x0;
        local_e = (undefined2 **)0xef61;
        local_f2 = FUN_3ab8_401b();
        if (local_f3 < 0x5a) {
          if (param_3 != 0) {
            local_f3 = *(byte *)0xa6a;
          }
          if (param_4 != 0) {
            local_f4 = *(undefined1 *)0xa6c;
          }
          ppuStack_c = param_30;
          local_e = param_29;
          ppuStack_10 = param_28;
          ppuStack_12 = param_27;
          ppuStack_14 = param_26;
          ppuStack_16 = param_25;
          ppuStack_18 = param_24;
          ppuStack_1a = param_23;
          ppuStack_1c = param_22;
          ppuStack_22 = param_19;
          ppuStack_24 = param_18;
          ppuStack_26 = param_17;
          ppuStack_2a = param_15;
          ppuStack_2c = param_14;
          ppuStack_2e = param_13;
          ppuStack_30 = param_12;
          ppuStack_32 = param_11;
          ppuStack_34 = param_10;
          ppuStack_36 = param_9;
          ppuStack_38 = param_8;
          ppuStack_3a = param_7;
          ppuStack_3c = param_6;
          ppuStack_3e = param_5;
          ppuStack_40 = local_10e;
          ppuStack_42 = (undefined2 **)0x0;
          uStack_44 = 0xefe8;
          local_15e = FUN_3ab8_19b2();
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        for (local_16a = 1; local_16a <= local_15e; local_16a = local_16a + 1) {
          ppuVar6 = local_10e + local_16a * 8;
          pppuVar9 = &ppuStack_26;
          pppuVar8 = &ppuStack_26;
          ppuVar11 = ppuVar6;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar13 = pppuVar9;
            pppuVar9 = pppuVar9 + 1;
            ppuVar2 = ppuVar11;
            ppuVar11 = (undefined2 **)((int)ppuVar11 + 2);
            *puVar13 = *(undefined2 *)ppuVar2;
          }
          ppuStack_2a = (undefined2 **)0xee9b;
          iVar5 = FUN_13bf_01c1();
          if (iVar5 != 0) {
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar13 = pppuVar8;
              pppuVar8 = pppuVar8 + 1;
              ppuVar2 = ppuVar6;
              ppuVar6 = (undefined2 **)((int)ppuVar6 + 2);
              *puVar13 = *(undefined2 *)ppuVar2;
            }
            ppuStack_2a = (undefined2 **)*(int *)0x14c;
            ppuStack_2c = (undefined2 **)0x11f2;
            ppuStack_2e = (undefined2 **)0xeebb;
            func_0x00018977();
          }
          ppuVar11 = (undefined2 **)0x11f2;
        }
      }
      else {
        ppuVar11 = (undefined2 **)0x885;
        ppuStack_c = (undefined2 **)0xeecc;
        iVar5 = func_0x00008854();
        if ((iVar5 == 0) && (local_129 < 0x5a)) {
          local_129 = 0;
          local_12a = 1;
          pppuVar9 = &ppuStack_26;
          puVar7 = local_144;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = pppuVar9;
            pppuVar9 = pppuVar9 + 1;
            puVar13 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar1 = *puVar13;
          }
          ppuStack_2a = (undefined2 **)0xf01b;
          FUN_12c1_0f1d();
          ppuStack_c = (undefined2 **)param_31;
          local_e = param_30;
          ppuStack_10 = param_29;
          ppuStack_12 = param_28;
          ppuStack_14 = param_27;
          ppuStack_16 = param_26;
          ppuStack_18 = param_25;
          ppuStack_1a = param_24;
          ppuStack_1c = param_23;
          ppuStack_22 = param_20;
          ppuStack_24 = param_19;
          ppuStack_26 = param_18;
          ppuStack_2a = param_16;
          ppuStack_2c = param_15;
          ppuStack_2e = param_14;
          ppuStack_30 = param_13;
          ppuStack_32 = param_12;
          ppuStack_34 = param_11;
          ppuStack_36 = param_10;
          ppuStack_38 = param_9;
          ppuStack_3a = param_8;
          ppuStack_3c = param_7;
          ppuStack_3e = param_6;
          ppuStack_40 = param_5;
          ppuStack_42 = local_10e;
          uStack_44 = 0x11f2;
          uStack_46 = 0xf07b;
          local_15e = FUN_3ab8_19b2();
          ppuStack_c = local_166;
          local_e = (undefined2 **)0x11f2;
          ppuVar11 = (undefined2 **)0x0;
          ppuStack_10 = (undefined2 **)0xf08f;
          local_17c[0] = (undefined2 *)func_0x00000271();
          puVar10 = (undefined2 *)local_17c[0];
          puVar7 = local_ee;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            puVar13 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar1 = *puVar13;
          }
        }
      }
    }
    local_164 = local_164 + (uint)((undefined2 **)0xfffe < local_166);
    ppuVar6 = ppuVar11;
  }
  local_168 = 1;
  do {
    if (local_15c < local_168) {
      FUN_3ab8_4705();
      return;
    }
    ppuStack_c = (undefined2 **)0xf11b;
    uVar12 = func_0x00000398();
    if ((*(byte *)((int)uVar12 + 0x16) & 2) != 0) {
      *param_1 = 1;
      ppuStack_c = (undefined2 **)0xf136;
      func_0x0000daa6();
      ppuStack_c = (undefined2 **)0xf140;
      puVar13 = (undefined2 *)func_0x00000398();
      puVar7 = (undefined2 *)puVar13;
      puVar10 = (undefined2 *)0xc3a0;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar3 = puVar10;
        puVar10 = puVar10 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = *puVar1;
      }
      if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
        ppuStack_c = (undefined2 **)0x0;
        local_e = (undefined2 **)0xf16e;
        uVar4 = FUN_3ab8_401b();
        *(undefined1 *)0xc3b5 = uVar4;
        if (0x59 < *(byte *)0xc3b4) {
          FUN_3ab8_4531();
          return;
        }
        ppuStack_c = local_17c;
        local_e = param_28;
        ppuStack_10 = param_27;
        ppuStack_12 = param_26;
        ppuStack_14 = param_25;
        ppuStack_16 = param_24;
        ppuStack_18 = param_23;
        ppuStack_1a = param_22;
        ppuStack_1c = param_21;
        ppuStack_22 = param_18;
        ppuStack_24 = param_17;
        ppuStack_26 = param_16;
        ppuStack_2a = param_14;
        ppuStack_2c = param_13;
        ppuStack_2e = param_12;
        ppuStack_30 = param_11;
        ppuStack_32 = param_10;
        ppuStack_34 = param_9;
        ppuStack_36 = param_8;
        ppuStack_38 = param_7;
        ppuStack_3a = param_6;
        ppuStack_3c = param_5;
        ppuStack_3e = (undefined2 **)0xc3a0;
        ppuStack_40 = (undefined2 **)0x0;
        ppuStack_42 = (undefined2 **)0xf1da;
        FUN_3ab8_21e1();
        puVar10 = (undefined2 *)&stack0xffe2;
        puVar7 = (undefined2 *)0xc3a0;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar1 = puVar10;
          puVar10 = puVar10 + 1;
          puVar13 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = *puVar13;
        }
        ppuStack_22 = (undefined2 **)0xf0ca;
        puVar7 = (undefined2 *)&stack0xffe2;
        iVar5 = func_0x0001b198();
        if (iVar5 != 0) {
          puVar10 = (undefined2 *)0xc3a0;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar1 = *puVar13;
          }
          ppuStack_22 = (undefined2 **)0x18b3;
          ppuStack_24 = (undefined2 **)0xf0e9;
          func_0x00018a6b();
          FUN_3ab8_4581();
          return;
        }
      }
      else {
        ppuStack_c = (undefined2 **)0xf0f9;
        iVar5 = func_0x00008854();
        if (iVar5 == 0) {
          FUN_3ab8_4660();
          return;
        }
      }
    }
    local_168 = local_168 + 1;
  } while( true );
}


