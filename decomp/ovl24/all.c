/* Ghidra decompilation of jw24.exe - machine output, not the original source. */

/* 3ab8:0000  OVL_0000  667 bytes, 0 callers */

void __cdecl16far OVL_0000(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  undefined2 local_17a [14];
  undefined2 local_15e [10];
  byte local_14a;
  byte local_149;
  int local_142;
  int local_13c;
  undefined2 local_13a;
  undefined2 local_138;
  uint local_136;
  int local_134;
  int local_132;
  uint local_130;
  char local_12e [266];
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 auStack_1e [7];
  undefined2 uStack_10;
  undefined2 uStack_e;
  char *pcStack_c;
  
  uVar8 = 0x22b2;
  FUN_21f2_0ebc();
  local_134 = 0;
  for (local_132 = 1; local_132 <= *(int *)0x150; local_132 = local_132 + 1) {
    uVar8 = 0;
    pcStack_c = (char *)0xaba4;
    uVar10 = func_0x00000398();
    if ((*(byte *)((int)uVar10 + 0x16) & 2) != 0) {
      local_134 = local_134 + 1;
    }
  }
  if (0 < local_134) {
    local_13a = *(undefined2 *)0xa284;
    local_138 = *(undefined2 *)0xa286;
    for (local_132 = 1; local_132 <= *(int *)0x150; local_132 = local_132 + 1) {
      uStack_e = 0xad94;
      pcStack_c = (char *)uVar8;
      FUN_1000_0599();
      pcStack_c = (char *)0xdef;
      uStack_e = 0xada3;
      func_0x00012276();
      uVar8 = 0;
      pcStack_c = (char *)0xadae;
      uVar10 = func_0x00000398();
      if ((*(byte *)((int)uVar10 + 0x16) & 2) != 0) {
        pcStack_c = (char *)0xadc3;
        puVar11 = (undefined2 *)func_0x00000398();
        puVar7 = (undefined2 *)puVar11;
        puVar6 = local_15e;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar1;
        }
        local_136 = (uint)local_14a;
        local_130 = (uint)local_149;
        pcStack_c = local_12e;
        uStack_e = 0;
        uStack_10 = 0xadf9;
        FUN_1885_0344();
        uVar8 = 0x22b2;
        pcStack_c = (char *)0xae06;
        iVar5 = func_0x00024ce4();
        for (local_13c = *(int *)0x150; local_132 < local_13c; local_13c = local_13c + -1) {
          uVar8 = 0;
          pcStack_c = (char *)0xac53;
          uVar10 = func_0x00000398();
          if ((*(byte *)((int)uVar10 + 0x16) & 2) != 0) {
            uVar8 = 0;
            pcStack_c = (char *)0xac6b;
            uVar10 = func_0x00000398();
            if (*(byte *)((int)uVar10 + 0x15) == local_130) {
              uVar8 = 0;
              pcStack_c = (char *)0xac88;
              uVar10 = func_0x00000398();
              uVar3 = (uint)*(byte *)((int)uVar10 + 0x14);
              uVar9 = uVar3 < local_136;
              if (uVar3 == local_136) {
                pcStack_c = (char *)0xaca5;
                puVar11 = (undefined2 *)func_0x00000398();
                puVar7 = (undefined2 *)puVar11;
                puVar6 = local_17a;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  puVar2 = puVar6;
                  puVar6 = puVar6 + 1;
                  puVar1 = puVar7;
                  puVar7 = puVar7 + 1;
                  *puVar2 = *puVar1;
                }
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                uVar8 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar9) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  uVar8 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar9) {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029ae7();
                    uVar8 = 0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar9) {
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_100d();
                      func_0x00029ae7();
                      uVar8 = 0x22b2;
                      FUN_28b3_1181();
                      if ((bool)uVar9) {
                        pcStack_c = (char *)0xbf48;
                        uStack_e = 0x22b2;
                        uVar8 = 0x18b3;
                        uStack_10 = 0xad67;
                        FUN_1885_0344();
                        for (local_142 = 0; local_142 < iVar5; local_142 = local_142 + 1) {
                          if (local_12e[local_142] != *(char *)(local_142 + -0x40b8))
                          goto LAB_3ab8_00b9;
                        }
                        pcStack_c = (char *)0xac09;
                        func_0x0000daa6();
                        pcStack_c = (char *)0xac13;
                        func_0x000190c7();
                        func_0x0000abfa();
                        local_134 = local_134 + -1;
                        puVar7 = auStack_1e;
                        puVar6 = local_15e;
                        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                          puVar1 = puVar7;
                          puVar7 = puVar7 + 1;
                          puVar11 = puVar6;
                          puVar6 = puVar6 + 1;
                          *puVar1 = *puVar11;
                        }
                        uStack_22 = 0x885;
                        uVar8 = 0x18b3;
                        uStack_24 = 0xac36;
                        func_0x00019593();
                      }
                    }
                  }
                }
              }
            }
          }
LAB_3ab8_00b9:
        }
        local_134 = local_134 + -1;
      }
    }
  }
  return;
}



/* 3ab8:029b  FUN_3ab8_029b  668 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_029b(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_da;
  int local_d8;
  int local_d6;
  undefined2 local_cc;
  char local_ca [178];
  undefined2 uStack_18;
  undefined2 uStack_16;
  char *pcStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  char *pcStack_a;
  
  FUN_21f2_0ebc();
  pcStack_a = (char *)0x22b2;
  uStack_c = 0xae30;
  iVar1 = func_0x00024ce4();
  local_d6 = 0;
  local_cc = 0;
  uStack_c = 0x22b2;
  do {
    uVar4 = uStack_c;
    if (iVar1 <= local_d6) {
LAB_3ab8_0318:
      uStack_c = 0xaea0;
      pcStack_a = (char *)uVar4;
      local_da = func_0x00024ce4();
      pcStack_a = local_ca;
      uStack_c = 0x22b2;
      uStack_e = 0xaeb2;
      func_0x00024c86();
      if (0 < local_da) {
        uVar4 = 0x22b2;
        for (local_d6 = 0; uStack_c = uVar4, local_d6 < local_da; local_d6 = local_d6 + 1) {
          pcStack_a = local_ca;
          uStack_e = 0xaeff;
          iVar1 = func_0x0002aa38();
          if (((iVar1 == 1) && (local_ca[local_d6] == -0x7f)) && (local_ca[local_d6 + 1] == '@')) {
            for (local_d8 = local_d6; local_d8 < local_da; local_d8 = local_d8 + 1) {
              local_ca[local_d8] = local_ca[local_d8 + 2];
            }
            local_d6 = local_d6 + -1;
            local_ca[local_da + -2] = '\0';
            local_da = local_da + -2;
          }
          uVar4 = 0x2a75;
        }
        if (0 < local_da) {
          while (local_ca[local_da + -1] == ' ') {
            local_ca[local_da + -1] = '\0';
            local_da = local_da + -1;
          }
          local_cc = 0;
          while (local_ca[local_da + -1] == '=') {
            local_cc = local_cc + 1;
            local_ca[local_da + -1] = '\0';
            local_da = local_da + -1;
          }
          if (1 < local_da) {
            pcStack_a = local_ca;
            uVar4 = 0x2a75;
            uStack_e = 0xafb2;
            iVar1 = func_0x0002aa38();
            if (((iVar1 == 1) && (local_ca[local_da + -2] == -0x7f)) &&
               (local_ca[local_da + -1] == -0x7f)) {
              local_cc = local_cc + 1;
              local_ca[local_da + -2] = '\0';
              local_da = local_da + -2;
            }
          }
          local_d6 = 0;
          while (local_d6 < local_da) {
            if ((local_ca[local_d6] == ',') || (local_ca[local_d6] == ' ')) {
              for (local_d8 = local_d6; local_d8 < local_da; local_d8 = local_d8 + 1) {
                local_ca[local_d8] = local_ca[local_d8 + 1];
              }
              local_ca[local_da + -1] = '\0';
              local_da = local_da + -1;
            }
            else {
              local_d6 = local_d6 + 1;
            }
          }
          *(undefined2 *)0xc22 = 0;
          uVar5 = 0x1bb4;
          uStack_c = 0xb03d;
          pcStack_a = (char *)uVar4;
          puVar3 = (undefined2 *)func_0x000228e3();
          uStack_c = puVar3[3];
          if (*(int *)0xc22 == 0) {
            pcStack_a = (char *)0xffff;
            pcStack_14 = local_ca;
            uStack_16 = 0x1bb4;
            uVar5 = 0x1bb4;
            uStack_18 = 0xb072;
            uStack_12 = *puVar3;
            uStack_10 = puVar3[1];
            uStack_e = puVar3[2];
            iVar1 = func_0x0002267f();
            if (iVar1 != 0) {
              if ((param_1 == 0) && (local_cc == 0)) {
                pcStack_a = (char *)param_2;
                uStack_c = 0x1bb4;
                uStack_e = 0xb093;
                func_0x00024c86();
              }
              else {
                pcStack_a = (char *)param_2;
                uStack_c = 0x1bb4;
                uStack_e = 0xb0a2;
                FUN_21f2_2d26();
              }
              uVar5 = 0x22b2;
            }
          }
          uStack_c = 0xb0ac;
          pcStack_a = (char *)uVar5;
          uVar4 = func_0x00024ce4();
          return uVar4;
        }
      }
      return 0;
    }
    pcStack_a = (char *)param_2;
    uVar4 = 0x2a75;
    uStack_e = 0xae52;
    iVar2 = func_0x0002aa38();
    if (iVar2 == 1) {
      if (local_cc == 0) {
        if ((*(char *)(local_d6 + param_2) == -0x7f) && (*(char *)(param_2 + local_d6 + 1) == -0x7f)
           ) {
          local_cc = 1;
        }
      }
      else if ((*(char *)(local_d6 + param_2) != -0x7f) ||
              (*(char *)(param_2 + local_d6 + 1) != '@')) {
LAB_3ab8_0315:
        *(undefined1 *)(local_d6 + param_2) = 0;
        goto LAB_3ab8_0318;
      }
      local_d6 = local_d6 + 1;
    }
    else if (local_cc == 0) {
      if (*(char *)(local_d6 + param_2) == '=') {
        local_cc = 1;
      }
    }
    else if (*(char *)(local_d6 + param_2) != ' ') goto LAB_3ab8_0315;
    local_d6 = local_d6 + 1;
    uStack_c = uVar4;
  } while( true );
}



/* 3ab8:0537  FUN_3ab8_0537  54 bytes, 2 callers */

void __cdecl16far FUN_3ab8_0537(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  func_0x00012276(0x22b2,0x1dc);
  *(undefined2 *)0xc22 = 1;
  FUN_1000_0599(0x11f2,0x12,2);
  func_0x00012276(0xdef,param_1);
  return;
}



/* 3ab8:056d  FUN_3ab8_056d  19 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_056d(void)

{
  FUN_21f2_0ebc();
  FUN_3ab8_0537(0x2ce);
  return 0;
}



/* 3ab8:0591  FUN_3ab8_0591  160 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_0591(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uStack_1c;
  undefined2 local_1a;
  undefined2 local_18 [6];
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 local_8;
  
  FUN_21f2_0ebc();
  local_8 = 0;
  uStack_a = 0x22b2;
  local_c = 0xb126;
  func_0x0000daa6();
  local_8 = 0x885;
  uStack_a = 0xb12c;
  FUN_1885_2ec3();
  local_8 = 0x1b6e;
  uStack_a = 0xb146;
  func_0x00029834();
  local_8 = 0x22b2;
  uStack_a = 0xb14e;
  func_0x00029983();
  local_8 = 0x22b2;
  uStack_a = 0xb156;
  func_0x00029834();
  local_8 = 0x22b2;
  uStack_a = 0xb15e;
  func_0x00029983();
  local_8 = 0x22b2;
  uStack_a = 0xb166;
  func_0x00029834();
  local_8 = 0x22b2;
  uStack_a = 0xb16e;
  func_0x00029983();
  local_8 = 0x22b2;
  uStack_a = 0xb176;
  func_0x00029834();
  local_8 = 0x22b2;
  uStack_a = 0xb17e;
  func_0x00029983();
  local_1a = 0;
  puVar5 = &uStack_1c;
  puVar4 = local_18;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iVar3 = FUN_17a6_0cba();
  if (0 < iVar3) {
    local_1a = 1;
  }
  local_8 = 0x11f2;
  uStack_a = 0xb1a8;
  func_0x0000abfa();
  return local_1a;
}



/* 3ab8:0631  FUN_3ab8_0631  17 bytes, 2 callers */

void __cdecl16far FUN_3ab8_0631(void)

{
  FUN_21f2_0ebc();
  FUN_3ab8_0537(0x402);
  return;
}



/* 3ab8:0642  FUN_3ab8_0642  264 bytes, 2 callers */

int __cdecl16far FUN_3ab8_0642(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 auStack_44 [10];
  undefined2 auStack_2e [2];
  int local_2a;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined2 local_18 [5];
  undefined1 *puStack_e;
  undefined1 *local_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  
  FUN_21f2_0ebc();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xb1d7;
  func_0x00029834();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xb1df;
  func_0x00029983();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xb1e7;
  func_0x00029834();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xb1ef;
  func_0x00029983();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xb1f7;
  func_0x00029834();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xb1ff;
  func_0x00029983();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xb207;
  func_0x00029834();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xb20f;
  func_0x00029983();
  puStack_8 = local_28;
  puStack_a = local_20;
  local_c = local_24;
  puStack_e = local_1c;
  puVar5 = auStack_2e;
  puVar4 = (undefined2 *)&stack0x0004;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = auStack_44;
  puVar4 = local_18;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  local_2a = FUN_1def_2179();
  if (local_2a == 0) {
    puStack_8 = (undefined1 *)0x1bb4;
    puStack_a = (undefined1 *)0xb252;
    func_0x00029834();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb25a;
    func_0x00029983();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb262;
    func_0x00029834();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb26a;
    func_0x00029983();
    local_2a = 1;
  }
  else {
    puStack_8 = (undefined1 *)0x1bb4;
    puStack_a = (undefined1 *)0xb277;
    func_0x000297e6();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb27f;
    FUN_28b3_100d();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb288;
    func_0x00029b6d();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb290;
    func_0x00029bb5();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb298;
    func_0x00029983();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb2a0;
    func_0x000297e6();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb2a8;
    FUN_28b3_100d();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb2b1;
    func_0x00029b6d();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb2b9;
    func_0x00029bb5();
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb2c1;
    func_0x00029983();
  }
  return local_2a;
}



/* 3ab8:074a  FUN_3ab8_074a  912 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_074a(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined2 *puVar7;
  int local_6e;
  undefined2 local_4a [14];
  undefined2 uStack_2e;
  undefined2 local_2a;
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
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  local_6e = 0;
  uStack_c = 0x22b2;
  uStack_e = 0xb2f0;
  puVar7 = (undefined2 *)func_0x00000271();
  puVar4 = (undefined2 *)puVar7;
  puVar5 = &local_2a;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_c = 0;
  uStack_e = 0xb316;
  puVar7 = (undefined2 *)func_0x00000271();
  puVar4 = (undefined2 *)puVar7;
  puVar5 = local_4a;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  func_0x00029834();
  func_0x00029983();
  func_0x00029834();
  func_0x00029983();
  func_0x00029834();
  func_0x00029983();
  func_0x00029834();
  func_0x00029983();
  do {
    puVar4 = &local_2a;
    puVar5 = &local_2a;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar7;
    }
    uStack_2e = 0xb389;
    puVar5 = &local_2a;
    iVar3 = func_0x0001fdaf();
    if (iVar3 == 0) break;
    puVar4 = local_4a;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = *puVar7;
    }
    uStack_2e = 0xb3b1;
    iVar3 = func_0x0001fdaf();
    uVar6 = 0;
    if (iVar3 == 0) break;
    func_0x00029834();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029ae7();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar6) {
      func_0x00029834();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029ae7();
      func_0x00029d78();
      FUN_28b3_1181();
      if ((bool)uVar6) break;
    }
    uStack_c = 0x22b2;
    uStack_e = 0xb427;
    func_0x000297e6();
    uStack_c = 0x22b2;
    uStack_e = 0xb42c;
    func_0x00029d78();
    uStack_14 = 0x22b2;
    uStack_16 = 0xb436;
    func_0x000299d1();
    uStack_14 = 0x22b2;
    uStack_16 = 0xb43e;
    func_0x000297e6();
    uStack_14 = 0x22b2;
    uStack_16 = 0xb443;
    func_0x00029d78();
    uStack_1c = 0x22b2;
    uStack_1e = 0xb44d;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    uStack_1e = 0xb455;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    uStack_1e = 0xb45a;
    func_0x00029d78();
    uStack_24 = 0x22b2;
    uStack_26 = 0xb464;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0xb46c;
    func_0x000297e6();
    uStack_24 = 0x22b2;
    uStack_26 = 0xb471;
    func_0x00029d78();
    uStack_2e = 0xb47b;
    func_0x000299d1();
    puVar4 = local_4a;
    puVar5 = &local_2a;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar7;
    }
    iVar3 = FUN_3ab8_0642();
    if (iVar3 == 0) break;
    uStack_c = 0x22b2;
    uStack_e = 0xb4a5;
    func_0x000297e6();
    uStack_c = 0x22b2;
    uStack_e = 0xb4aa;
    func_0x00029d78();
    uStack_14 = 0x22b2;
    uStack_16 = 0xb4b4;
    func_0x000299d1();
    uStack_14 = 0x22b2;
    uStack_16 = 0xb4bc;
    func_0x000297e6();
    uStack_14 = 0x22b2;
    uStack_16 = 0xb4c1;
    func_0x00029d78();
    uStack_1c = 0x22b2;
    uStack_1e = 0xb4cb;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    uStack_1e = 0xb4d3;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    uStack_1e = 0xb4d8;
    func_0x00029d78();
    uStack_24 = 0x22b2;
    uStack_26 = 0xb4e2;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0xb4ea;
    func_0x000297e6();
    uStack_24 = 0x22b2;
    uStack_26 = 0xb4ef;
    func_0x00029d78();
    uStack_2e = 0xb4f9;
    func_0x000299d1();
    puVar4 = local_4a;
    puVar5 = local_4a;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar7;
    }
    iVar3 = FUN_3ab8_0642();
    uVar6 = 0;
    if (iVar3 == 0) break;
    func_0x00029834();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029ae7();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029ae7();
    FUN_28b3_117c();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar6) {
      func_0x00029834();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029ae7();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029ae7();
      FUN_28b3_117c();
      func_0x00029d78();
      FUN_28b3_1181();
      if ((bool)uVar6) {
        func_0x000297e6();
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uStack_12 = 0xb5b8;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0xb5c0;
        func_0x000297e6();
        uStack_10 = 0x22b2;
        uStack_12 = 0xb5c5;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xb5cf;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0xb5d7;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xb5dc;
        func_0x00029d78();
        uStack_20 = 0x22b2;
        uStack_22 = 0xb5e6;
        func_0x000299d1();
        uStack_20 = 0x22b2;
        uStack_22 = 0xb5ee;
        func_0x000297e6();
        uStack_20 = 0x22b2;
        uStack_22 = 0xb5f3;
        func_0x00029d78();
        uStack_28 = 0x22b2;
        local_2a = 0xb5fd;
        func_0x000299d1();
        uStack_28 = 0x22b2;
        local_2a = 0xb601;
        iVar3 = FUN_3ab8_0591();
        if (iVar3 != 0) {
          return 1;
        }
        break;
      }
    }
    local_6e = local_6e + 1;
  } while (local_6e < 0x14);
  FUN_3ab8_0631();
  return 0;
}



/* 3ab8:0ada  FUN_3ab8_0ada  4526 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003c8f2) */
/* WARNING: Removing unreachable block (ram,0x0003bb5c) */
/* WARNING: Removing unreachable block (ram,0x0003b8fc) */
/* WARNING: Removing unreachable block (ram,0x0003c429) */
/* WARNING: Removing unreachable block (ram,0x0003b9c4) */

undefined2 __cdecl16far FUN_3ab8_0ada(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  long lVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  undefined1 auStack_234 [40];
  undefined2 local_20c;
  undefined2 uStack_20a;
  undefined2 local_208;
  undefined2 local_206;
  uint local_204;
  undefined4 local_202;
  undefined2 local_1fe;
  undefined2 local_1fc;
  undefined4 local_1fa;
  undefined2 local_1f6;
  undefined2 local_1f4;
  undefined2 local_1e8;
  undefined2 local_1e6;
  undefined2 local_1e4;
  undefined2 local_1e2;
  undefined2 local_1e0;
  undefined2 local_1de;
  undefined1 local_1d8 [10];
  undefined1 local_1ce [12];
  undefined2 local_1c2;
  undefined2 local_1c0;
  undefined2 uStack_1be;
  undefined2 uStack_1bc;
  undefined2 local_1ba;
  undefined2 local_1b8;
  int local_1b2;
  undefined2 local_1b0;
  undefined2 uStack_1ae;
  undefined2 uStack_1ac;
  undefined2 local_1a6;
  undefined2 local_1a4;
  undefined2 uStack_1a2;
  undefined2 uStack_1a0;
  undefined2 local_19e;
  undefined2 local_19c;
  undefined2 uStack_18e;
  undefined2 uStack_18c;
  undefined2 local_18a;
  undefined2 local_188;
  undefined2 local_182;
  undefined2 local_180;
  undefined2 uStack_17e;
  undefined2 uStack_17c;
  int local_176;
  undefined2 local_174;
  undefined2 local_172;
  undefined2 local_170;
  undefined2 local_16e;
  undefined2 local_164;
  undefined2 local_162;
  undefined2 uStack_160;
  undefined2 uStack_15e;
  undefined2 local_158 [54];
  undefined2 local_ec;
  undefined2 local_ea;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 *local_d4;
  undefined2 local_c8;
  undefined2 local_c6;
  int local_ba;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined1 local_a4 [10];
  int local_9a;
  undefined2 local_5c [7];
  undefined2 uStack_4e;
  undefined2 auStack_4a [7];
  int local_3c;
  undefined1 local_36 [4];
  undefined2 uStack_32;
  int iStack_2e;
  undefined4 uStack_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 *local_14;
  undefined2 *puStack_12;
  undefined2 *local_10;
  undefined4 local_e;
  
  FUN_21f2_0ebc();
  local_e._2_2_ = (undefined2 *)0x22b2;
  local_e._0_2_ = (undefined2 *)0xb675;
  FUN_21f2_3454();
  local_e._2_2_ = (undefined2 *)0x22b2;
  local_e._0_2_ = (undefined2 *)0xb685;
  FUN_21f2_3454();
  local_e._2_2_ = (undefined2 *)0x22b2;
  local_e._0_2_ = (undefined2 *)0xb695;
  FUN_21f2_3454();
  local_e._2_2_ = (undefined2 *)0x22b2;
  local_e._0_2_ = (undefined2 *)0xb6a4;
  FUN_21f2_3454();
  local_e._2_2_ = (undefined2 *)0x22b2;
  uVar10 = 0x22b2;
  local_e._0_2_ = (undefined2 *)0xb6b4;
  FUN_21f2_3454();
  local_1b0 = 0;
  local_9a = 0;
LAB_3ab8_0b40:
  do {
    do {
      local_e._0_2_ = (undefined2 *)0xb6cf;
      local_e._2_2_ = (undefined2 *)uVar10;
      FUN_21f2_3454();
      local_e._2_2_ = (undefined2 *)0x22b2;
      local_e._0_2_ = (undefined2 *)0xb6e0;
      FUN_21f2_2d26();
      local_e._2_2_ = (undefined2 *)0x22b2;
      local_e._0_2_ = (undefined2 *)0xb6f1;
      FUN_21f2_2d26();
      local_e._2_2_ = (undefined2 *)0x22b2;
      local_e._0_2_ = (undefined2 *)0xb702;
      FUN_21f2_2d26();
      local_e._2_2_ = (undefined2 *)0x22b2;
      local_e._0_2_ = (undefined2 *)0xb713;
      FUN_21f2_2d26();
      local_e._2_2_ = (undefined2 *)0x22b2;
      local_e._0_2_ = (undefined2 *)0xb724;
      FUN_21f2_2d26();
      local_e._2_2_ = (undefined2 *)0x22b2;
      local_e._0_2_ = (undefined2 *)0xb734;
      FUN_21f2_2d26();
      local_e._2_2_ = (undefined2 *)0x22b2;
      local_e._0_2_ = (undefined2 *)0xb745;
      FUN_21f2_2d26();
      local_e._2_2_ = (undefined2 *)0x22b2;
      local_e._0_2_ = (undefined2 *)0xb755;
      FUN_21f2_2d26();
      local_e._2_2_ = (undefined2 *)0x22b2;
      local_e._0_2_ = (undefined2 *)0xb766;
      FUN_21f2_2d26();
      local_e._2_2_ = (undefined2 *)0x22b2;
      local_e._0_2_ = (undefined2 *)0xb776;
      FUN_1def_07a4();
      local_e._2_2_ = &local_1e4;
      local_e._0_2_ = local_158;
      *(undefined2 *)0xc2c = 1;
      local_10 = (undefined2 *)0x1;
      puStack_12 = (undefined2 *)0x1bb4;
      uVar10 = 0x1bb4;
      local_14 = (undefined2 *)0xb798;
      local_1b2 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      if (((*(int *)0x158 != 0) || (local_1b2 == 0x14)) || (local_1b2 == -1)) {
        return 1;
      }
    } while ((local_1b2 < 1) || (4 < local_1b2));
    local_9a = 0;
LAB_3ab8_0ed3:
    if (local_1b2 != 1) {
      local_9a = 0;
LAB_3ab8_0ee3:
      if (local_1b2 == 2) {
LAB_3ab8_0eed:
        do {
          local_e._2_2_ = (undefined2 *)local_1ce;
          local_e._0_2_ = (undefined2 *)0x56c1;
          local_10 = local_158;
          local_14 = (undefined2 *)0xba89;
          puStack_12 = (undefined2 *)uVar10;
          FUN_21f2_3454();
          *(undefined2 *)0xc2c = 1;
          local_e._2_2_ = &local_1e4;
          local_e._0_2_ = local_158;
          local_10 = (undefined2 *)local_9a;
          puStack_12 = (undefined2 *)0x22b2;
          uVar10 = 0x1bb4;
          local_14 = (undefined2 *)0xbaaf;
          local_3c = FUN_1def_0904();
          *(undefined2 *)0xc2c = 0;
          if (*(int *)0x158 != 0) {
            return 1;
          }
          if (local_3c == 0x14) goto LAB_3ab8_0b40;
          if (local_3c == -1) {
            local_e._2_2_ = (undefined2 *)0xbada;
            func_0x0000daa6();
            local_e._2_2_ = (undefined2 *)0x885;
            for (; 0 < local_9a; local_9a = local_9a + -1) {
              local_1e8 = *(undefined2 *)0x148;
              local_1e6 = *(undefined2 *)0x14a;
              local_e._0_2_ = (undefined2 *)0xbaf3;
              func_0x00018779();
              local_e._2_2_ = (undefined2 *)0x11f2;
            }
            local_e._2_2_ = (undefined2 *)0xbb09;
            func_0x0000b1d8();
            uVar10 = 0x885;
            func_0x0000abfa();
            local_9a = 0;
          }
          else {
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xbb30;
            func_0x000299d1();
            local_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xbb39;
            func_0x000297e6();
            local_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xbb3e;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xbb48;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uVar10 = 0x11f2;
            uStack_1a = 0xbb4d;
            lVar12 = FUN_13bf_39a0();
            local_e._2_2_ = (undefined2 *)((ulong)lVar12 >> 0x10);
            if (0 < lVar12) {
              local_e = (undefined2 *)lVar12;
              FUN_3ab8_056d();
            }
            if ((int)local_e._2_2_ < 0) {
              local_e._2_2_ = (undefined2 *)0x11f2;
              uVar10 = 0;
              local_e._0_2_ = (undefined2 *)0xbb81;
              puVar13 = (undefined2 *)func_0x00000271();
              puVar7 = (undefined2 *)puVar13;
              puVar6 = local_5c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar2 = puVar6;
                puVar6 = puVar6 + 1;
                puVar1 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar2 = *puVar1;
              }
              while( true ) {
                local_e._2_2_ = (undefined2 *)local_1ce;
                local_e._0_2_ = (undefined2 *)0x56d1;
                local_10 = local_158;
                local_14 = (undefined2 *)0xbbae;
                puStack_12 = (undefined2 *)uVar10;
                FUN_21f2_3454();
                local_e._2_2_ = &local_1e4;
                local_e._0_2_ = local_158;
                *(undefined2 *)0xc20 = 1;
                local_10 = (undefined2 *)0x1;
                puStack_12 = (undefined2 *)0x22b2;
                uVar10 = 0x1bb4;
                local_14 = (undefined2 *)0xbbd1;
                local_3c = FUN_1def_0904();
                *(undefined2 *)0xc20 = 0;
                if (*(int *)0x158 != 0) {
                  return 1;
                }
                if (local_3c == -1) break;
                if (local_d4 != (undefined2 *)0x0) {
                  local_e._2_2_ = local_d4;
                  local_e._0_2_ = (undefined2 *)0x1bb4;
                  uVar10 = 0x11f2;
                  local_10 = (undefined2 *)0xbc09;
                  iVar5 = func_0x00015409();
                  if (iVar5 != 0) {
                    local_3c = 0;
                    local_ec = local_1e4;
                    local_ea = local_1e2;
                    local_174 = local_1f6;
                    local_172 = local_1f4;
                    func_0x0000c3ca();
                    local_e._2_2_ = &local_174;
                    local_e._0_2_ = &local_ec;
                    piVar8 = &iStack_2e;
                    puVar6 = local_5c;
                    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                      puVar1 = piVar8;
                      piVar8 = piVar8 + 1;
                      puVar13 = puVar6;
                      puVar6 = puVar6 + 1;
                      *puVar1 = *puVar13;
                    }
                    uVar10 = 0x1bb4;
                    uStack_32 = 0xbc62;
                    iVar5 = func_0x000210f8();
                    if (iVar5 == 0) {
                      FUN_3ab8_0631();
                      goto LAB_3ab8_0eed;
                    }
                    func_0x000297e6();
                    func_0x00029d78();
                    local_10 = (undefined2 *)0x22b2;
                    puStack_12 = (undefined2 *)0xbc88;
                    func_0x000299d1();
                    local_10 = (undefined2 *)0x22b2;
                    puStack_12 = (undefined2 *)0xbc91;
                    func_0x000297e6();
                    local_10 = (undefined2 *)0x22b2;
                    puStack_12 = (undefined2 *)0xbc96;
                    func_0x00029d78();
                    uStack_18 = 0x22b2;
                    uStack_1a = 0xbca0;
                    func_0x000299d1();
                    uStack_18 = 0x22b2;
                    uStack_1a = 0xbca9;
                    func_0x000297e6();
                    uStack_18 = 0x22b2;
                    uStack_1a = 0xbcae;
                    func_0x00029d78();
                    uStack_20 = 0x22b2;
                    uStack_22 = 0xbcb8;
                    func_0x000299d1();
                    uStack_20 = 0x22b2;
                    uStack_22 = 0xbcc1;
                    func_0x000297e6();
                    uStack_20 = 0x22b2;
                    uStack_22 = 0xbcc6;
                    func_0x00029d78();
                    uStack_2a._2_2_ = 0x22b2;
                    uStack_2a._0_2_ = (undefined2 *)0xbcd0;
                    func_0x000299d1();
                    uStack_2a._2_2_ = 0x22b2;
                    uVar10 = 0x1bb4;
                    uStack_2a._0_2_ = (undefined2 *)0xbcd5;
                    iVar5 = FUN_1def_043a();
                    if (iVar5 == 0) goto LAB_3ab8_0eed;
LAB_3ab8_115f:
                    local_e._2_2_ = (undefined2 *)0x56de;
                    local_e._0_2_ = local_158;
                    puStack_12 = (undefined2 *)0xbcf5;
                    local_10 = (undefined2 *)uVar10;
                    FUN_21f2_3454();
                    local_e._2_2_ = &local_1e4;
                    local_e._0_2_ = local_158;
                    *(undefined2 *)0xc20 = 1;
                    local_10 = (undefined2 *)0x1;
                    puStack_12 = (undefined2 *)0x22b2;
                    uVar10 = 0x1bb4;
                    local_14 = (undefined2 *)0xbd18;
                    iVar5 = FUN_1def_0904();
                    if (iVar5 != -1) {
                      *(undefined2 *)0xc20 = 0;
                      if (*(int *)0x158 != 0) {
                        return 1;
                      }
                      if (local_d4 != (undefined2 *)0x0) {
                        local_e._2_2_ = local_d4;
                        local_e._0_2_ = (undefined2 *)0x1bb4;
                        uVar10 = 0x11f2;
                        local_10 = (undefined2 *)0xbd51;
                        iVar5 = func_0x00015409();
                        if (iVar5 != 0) {
                          local_e._2_2_ = (undefined2 *)*(undefined2 *)0xa296;
                          local_e._0_2_ = (undefined2 *)*(undefined2 *)0xa294;
                          local_10 = (undefined2 *)0x11f2;
                          puStack_12 = (undefined2 *)0xbd71;
                          func_0x000297e6();
                          local_10 = (undefined2 *)0x22b2;
                          puStack_12 = (undefined2 *)0xbd76;
                          func_0x00029d78();
                          uStack_18 = 0x22b2;
                          uStack_1a = 0xbd80;
                          func_0x000299d1();
                          uStack_18 = 0x22b2;
                          uStack_1a = 0xbd89;
                          func_0x000297e6();
                          uStack_18 = 0x22b2;
                          uStack_1a = 0xbd8e;
                          func_0x00029d78();
                          uStack_20 = 0x22b2;
                          uStack_22 = 0xbd98;
                          func_0x000299d1();
                          uStack_20 = 1;
                          uStack_22 = 0x22b2;
                          uStack_24 = 0xbda1;
                          FUN_1def_05d1();
                          local_10 = (undefined2 *)0x1bb4;
                          puStack_12 = (undefined2 *)0xbdab;
                          func_0x000297e6();
                          local_10 = (undefined2 *)0x22b2;
                          puStack_12 = (undefined2 *)0xbdb3;
                          func_0x0002996b();
                          local_10 = (undefined2 *)0x22b2;
                          puStack_12 = (undefined2 *)0xbdb8;
                          func_0x00029d78();
                          uStack_18 = 0x22b2;
                          uStack_1a = 0xbdc2;
                          func_0x000299d1();
                          uStack_18 = 0;
                          uStack_1a = 0x22b2;
                          uStack_1c = 0xbdca;
                          puVar6 = (undefined2 *)FUN_1def_05d1();
                          local_182 = *puVar6;
                          local_180 = puVar6[1];
                          local_e._2_2_ = (undefined2 *)*(int *)0xa296;
                          local_e._0_2_ = (undefined2 *)*(int *)0xa294;
                          local_10 = (undefined2 *)0x1bb4;
                          puStack_12 = (undefined2 *)0xbdf4;
                          func_0x000297e6();
                          uStack_18 = 0x22b2;
                          uStack_1a = 0xbdfe;
                          func_0x000299d1();
                          uStack_18 = 0;
                          uStack_1a = 0x22b2;
                          uStack_1c = 0xbe06;
                          puVar6 = (undefined2 *)func_0x0001e558();
                          local_1a6 = *puVar6;
                          local_1a4 = puVar6[1];
                          do {
                            local_1ba = *(undefined2 *)0xa29c;
                            local_1b8 = *(undefined2 *)0xa29e;
                            local_9a = 0;
                            local_19e = local_1ba;
                            local_19c = local_1b8;
                            func_0x0000c340();
                            func_0x0001bb4e();
                            local_e._2_2_ = (undefined2 *)0x56e3;
                            local_e._0_2_ = (undefined2 *)0x1bb4;
                            uVar10 = 0x11f2;
                            local_10 = (undefined2 *)0xbe50;
                            func_0x00012276();
LAB_3ab8_12d3:
                            *(undefined2 *)0xc20 = 1;
                            *(undefined2 *)0xa4a = 1;
                            local_e._2_2_ = &local_1e4;
                            local_e._0_2_ = (undefined2 *)local_36;
                            local_10 = &local_1e;
                            local_14 = (undefined2 *)0xbe78;
                            puStack_12 = (undefined2 *)uVar10;
                            local_176 = func_0x00006608();
                            *(undefined2 *)0xc20 = 0;
                            *(undefined2 *)0xa4a = 0;
                            local_ba = 0;
                            if (*(int *)0x158 != 0) {
                              return 1;
                            }
                            if (local_176 == -1) {
                              uVar10 = 0x1b6e;
                              FUN_1885_2ec3();
                              break;
                            }
                            if (local_176 != 99) {
                              uVar11 = local_d4 == (undefined2 *)0x0;
                              if ((!(bool)uVar11) && (uVar11 = false, local_176 == 100)) {
                                local_19e = *(undefined2 *)0xa29c;
                                local_19c = *(undefined2 *)0xa29e;
                                local_e._2_2_ = local_d4;
                                local_e._0_2_ = (undefined2 *)0x3bf;
                                local_10 = (undefined2 *)0xbedc;
                                iVar5 = func_0x00015409();
                                uVar11 = iVar5 == 0;
                                if (!(bool)uVar11) {
                                  local_ba = 1;
                                }
                              }
                              func_0x000297e6();
                              func_0x000297e6();
                              FUN_28b3_1181();
                              if ((bool)uVar11) goto code_r0x0003bf02;
                              goto LAB_3ab8_139e;
                            }
                          } while( true );
                        }
                      }
                      goto LAB_3ab8_115f;
                    }
                    *(undefined2 *)0xc20 = 0;
                  }
                }
              }
              local_3c = -1;
            }
          }
        } while( true );
      }
      local_9a = 0;
LAB_3ab8_1c67:
      if (local_1b2 == 3) {
        local_202._0_2_ = *(undefined2 *)0xa2a0;
        local_202._2_2_ = *(undefined2 *)0xa2a2;
LAB_3ab8_16a5:
        do {
          local_10 = (undefined2 *)((int)&uStack_2a + 2);
          local_e._0_2_ = (undefined2 *)local_a4;
          puStack_12 = (undefined2 *)0x570f;
          local_14 = local_158;
          uStack_18 = 0xc245;
          uStack_16 = uVar10;
          local_e._2_2_ = local_10;
          FUN_21f2_3454();
          *(undefined2 *)0xc2c = 1;
          *(undefined2 *)0xc20 = 1;
          local_e._2_2_ = &local_1e4;
          local_e._0_2_ = local_158;
          local_10 = (undefined2 *)local_9a;
          puStack_12 = (undefined2 *)0x22b2;
          uVar10 = 0x1bb4;
          local_14 = (undefined2 *)0xc26e;
          local_3c = FUN_1def_0904();
          *(undefined2 *)0xc2c = 0;
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 != 0) {
            return 1;
          }
          if (local_3c == 0x14) goto LAB_3ab8_0b40;
          if (local_3c == -1) {
            local_e._2_2_ = (undefined2 *)0xc29a;
            func_0x0000daa6();
            local_e._2_2_ = (undefined2 *)0x885;
            for (; 0 < local_9a; local_9a = local_9a + -1) {
              local_1e8 = *(undefined2 *)0x148;
              local_1e6 = *(undefined2 *)0x14a;
              local_e._0_2_ = (undefined2 *)0xc2b3;
              func_0x00018779();
              local_e._2_2_ = (undefined2 *)0x11f2;
            }
            local_e._2_2_ = (undefined2 *)0xc2c9;
            func_0x0000b1d8();
            uVar10 = 0x885;
            func_0x0000abfa();
            local_9a = 0;
          }
          else if (local_d4 != (undefined2 *)0x0) {
            local_e._2_2_ = local_d4;
            local_e._0_2_ = (undefined2 *)0x1bb4;
            uVar10 = 0x11f2;
            local_10 = (undefined2 *)0xc2f4;
            iVar5 = func_0x00015409();
            uVar11 = 0;
            if (iVar5 != 0) {
              local_3c = 0;
              local_ec = local_1e4;
              local_ea = local_1e2;
              local_174 = local_1f6;
              local_172 = local_1f4;
              uVar10 = *(undefined2 *)0xa2a0;
              uVar4 = *(undefined2 *)0xa2a2;
LAB_3ab8_17b2:
              local_202._2_2_ = uVar4;
              local_202._0_2_ = uVar10;
              func_0x00029834();
              func_0x000297e6();
              uVar10 = 0x22b2;
              FUN_28b3_1181();
              if (!(bool)uVar11) {
                func_0x000297e6();
                local_10 = (undefined2 *)0x22b2;
                puStack_12 = (undefined2 *)0xc35e;
                func_0x000299d1();
                local_10 = (undefined2 *)0x5725;
                puStack_12 = local_158;
                local_14 = (undefined2 *)0x22b2;
                uStack_16 = 0xc36c;
                FUN_21f2_3454();
                local_e._2_2_ = (undefined2 *)0x2;
                local_e._0_2_ = (undefined2 *)0x11;
                local_10 = local_158;
                puStack_12 = (undefined2 *)0x22b2;
                uVar10 = 0xdef;
                local_14 = (undefined2 *)0xc389;
                FUN_1000_02b5();
                *(undefined2 *)0xc22 = 1;
              }
              local_e._2_2_ = local_158;
              local_10 = (undefined2 *)0xc3a4;
              local_e._0_2_ = (undefined2 *)uVar10;
              FUN_21f2_3454();
              local_e._2_2_ = &local_1e4;
              local_e._0_2_ = local_158;
              local_10 = (undefined2 *)0x1;
              puStack_12 = (undefined2 *)0x22b2;
              uVar10 = 0x1bb4;
              local_14 = (undefined2 *)0xc3c4;
              local_3c = FUN_1def_0904();
              if (*(int *)0x158 != 0) {
                return 1;
              }
              if (local_3c == -1) goto LAB_3ab8_16a5;
LAB_3ab8_185c:
              if (local_3c == 1) {
                local_208 = (undefined2)local_202;
                local_206 = local_202._2_2_;
                func_0x0001bb4e();
                local_e._2_2_ = (undefined2 *)0xc4d3;
                func_0x00012276();
                local_e._2_2_ = &local_1f6;
                local_e._0_2_ = &local_1e4;
                local_10 = &local_20c;
                puStack_12 = &local_208;
                local_14 = (undefined2 *)0x11f2;
                uStack_16 = 0xc4f5;
                local_204 = func_0x000021a4();
                if (*(int *)0x158 != 0) {
                  return 1;
                }
                if (local_204 == 0xffff) {
                  uVar11 = 0;
                  uVar10 = (undefined2)local_202;
                  uVar4 = local_202._2_2_;
                  goto LAB_3ab8_17b2;
                }
                uVar11 = local_204 < 99;
                if (local_204 == 99) goto LAB_3ab8_185c;
                func_0x00029834();
                func_0x000297e6();
                func_0x00029d78();
                FUN_28b3_1181();
                uVar10 = local_208;
                uVar4 = local_206;
                if (!(bool)uVar11) goto LAB_3ab8_17b2;
                goto LAB_3ab8_185c;
              }
              func_0x000297e6();
              func_0x00029d78();
              local_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined2 *)0xc3fd;
              func_0x000299d1();
              local_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined2 *)0xc406;
              func_0x000297e6();
              local_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined2 *)0xc40b;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              uStack_1a = 0xc415;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              uStack_1a = 0xc41a;
              local_e = (undefined2 *)FUN_13bf_39a0();
              if (0 < (long)local_e) {
                FUN_3ab8_056d();
              }
              local_170 = local_1e4;
              local_16e = local_1e2;
              local_18a = local_1f6;
              local_188 = local_1f4;
              uVar11 = 0;
              uVar10 = (undefined2)local_202;
              uVar4 = local_202._2_2_;
              if (-1 < (long)local_e) goto LAB_3ab8_17b2;
              func_0x0000c3ca();
              local_e._2_2_ = (undefined2 *)0x885;
              local_e._0_2_ = (undefined2 *)0xc473;
              puVar13 = (undefined2 *)func_0x00000271();
              puVar7 = (undefined2 *)puVar13;
              puVar6 = local_5c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar2 = puVar6;
                puVar6 = puVar6 + 1;
                puVar1 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar2 = *puVar1;
              }
              local_10 = (undefined2 *)0x0;
              do {
                puVar9 = &uStack_2a;
                puVar6 = local_5c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar1 = (undefined2 *)puVar9;
                  puVar9 = (undefined4 *)((int)puVar9 + 2);
                  puVar13 = puVar6;
                  puVar6 = puVar6 + 1;
                  *puVar1 = *puVar13;
                }
                uVar10 = 0x1bb4;
                iStack_2e = -0x3b58;
                iVar5 = func_0x0001fdaf();
                if (iVar5 == 0) break;
                local_e._2_2_ = (undefined2 *)0x1bb4;
                local_e._0_2_ = (undefined2 *)0xc552;
                func_0x000297e6();
                local_e._2_2_ = (undefined2 *)0x22b2;
                local_e._0_2_ = (undefined2 *)0xc557;
                func_0x00029d78();
                local_14 = (undefined2 *)0x22b2;
                uStack_16 = 0xc561;
                func_0x000299d1();
                local_14 = (undefined2 *)0x22b2;
                uStack_16 = 0xc56a;
                func_0x000297e6();
                local_14 = (undefined2 *)0x22b2;
                uStack_16 = 0xc56f;
                func_0x00029d78();
                uStack_1c = 0x22b2;
                local_1e = 0xc579;
                func_0x000299d1();
                uStack_1c = 0x22b2;
                local_1e = 0xc582;
                func_0x000297e6();
                uStack_1c = 0x22b2;
                local_1e = 0xc587;
                func_0x00029d78();
                uStack_24 = 0x22b2;
                uStack_26 = 0xc591;
                func_0x000299d1();
                uStack_24 = 0x22b2;
                uStack_26 = 0xc59a;
                func_0x000297e6();
                uStack_24 = 0x22b2;
                uStack_26 = 0xc59f;
                func_0x00029d78();
                uVar10 = 0x22b2;
                iStack_2e = -0x3a57;
                func_0x000299d1();
                puVar7 = auStack_4a;
                puVar6 = local_5c;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar1 = puVar7;
                  puVar7 = puVar7 + 1;
                  puVar13 = puVar6;
                  puVar6 = puVar6 + 1;
                  *puVar1 = *puVar13;
                }
                uStack_4e = 0xc5bc;
                iVar5 = FUN_3ab8_0642();
                uVar11 = 0;
                if (iVar5 == 0) break;
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                FUN_28b3_117c();
                func_0x00029d78();
                uVar10 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar11) {
                  func_0x000297e6();
                  func_0x00029d78();
                  local_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xc62a;
                  func_0x000299d1();
                  local_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xc633;
                  func_0x000297e6();
                  local_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xc638;
                  func_0x00029d78();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xc642;
                  func_0x000299d1();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xc64b;
                  func_0x000297e6();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xc650;
                  func_0x00029d78();
                  uStack_20 = 0x22b2;
                  uStack_22 = 0xc65a;
                  func_0x000299d1();
                  uStack_20 = 0x22b2;
                  uStack_22 = 0xc663;
                  func_0x000297e6();
                  uStack_20 = 0x22b2;
                  uStack_22 = 0xc668;
                  func_0x00029d78();
                  uStack_2a._2_2_ = 0x22b2;
                  uStack_2a._0_2_ = (undefined2 *)0xc672;
                  func_0x000299d1();
                  uStack_2a._2_2_ = 0x22b2;
                  uVar10 = 0x1bb4;
                  uStack_2a._0_2_ = (undefined2 *)0xc677;
                  iVar5 = FUN_1def_043a();
                  uVar11 = 0;
                  if (iVar5 == 0) goto LAB_3ab8_16a5;
                  func_0x00029834();
                  func_0x000297e6();
                  func_0x00029d78();
                  FUN_28b3_1181();
                  if (!(bool)uVar11) {
                    local_e._2_2_ = (undefined2 *)*(undefined2 *)0xa296;
                    local_e._0_2_ = (undefined2 *)*(undefined2 *)0xa294;
                    local_10 = (undefined2 *)0x22b2;
                    puStack_12 = (undefined2 *)0xc6ea;
                    func_0x000297e6();
                    local_10 = (undefined2 *)0x22b2;
                    puStack_12 = (undefined2 *)0xc6f3;
                    func_0x00029b6d();
                    local_10 = (undefined2 *)0x22b2;
                    puStack_12 = (undefined2 *)0xc6fc;
                    func_0x00029b9d();
                    local_10 = (undefined2 *)0x22b2;
                    puStack_12 = (undefined2 *)0xc705;
                    func_0x0002996b();
                    local_10 = (undefined2 *)0x22b2;
                    puStack_12 = (undefined2 *)0xc70a;
                    func_0x00029d78();
                    uStack_18 = 0x22b2;
                    uStack_1a = 0xc714;
                    func_0x000299d1();
                    uStack_18 = 0;
                    uStack_1a = 0x22b2;
                    uStack_1c = 0xc71c;
                    puVar6 = (undefined2 *)FUN_1def_05d1();
                    local_170 = *puVar6;
                    local_16e = puVar6[1];
                    local_e._2_2_ = (undefined2 *)*(undefined2 *)0xa296;
                    local_e._0_2_ = (undefined2 *)*(undefined2 *)0xa294;
                    local_10 = (undefined2 *)0x1bb4;
                    puStack_12 = (undefined2 *)0xc747;
                    func_0x000297e6();
                    local_10 = (undefined2 *)0x22b2;
                    puStack_12 = (undefined2 *)0xc74c;
                    func_0x00029d78();
                    uStack_18 = 0x22b2;
                    uStack_1a = 0xc756;
                    func_0x000299d1();
                    uStack_18 = 0;
                    uStack_1a = 0x22b2;
                    uStack_1c = 0xc75e;
                    puVar6 = (undefined2 *)func_0x0001e558();
                    local_18a = *puVar6;
                    local_188 = puVar6[1];
                  }
                  local_9a = 0;
                  func_0x000297e6();
                  func_0x00029d78();
                  local_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xc78e;
                  func_0x000299d1();
                  local_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xc797;
                  func_0x000297e6();
                  local_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xc79c;
                  func_0x00029d78();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xc7a6;
                  func_0x000299d1();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xc7af;
                  func_0x000297e6();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xc7b4;
                  func_0x00029d78();
                  uStack_20 = 0x22b2;
                  uStack_22 = 0xc7be;
                  func_0x000299d1();
                  uStack_20 = 0x22b2;
                  uStack_22 = 0xc7c7;
                  func_0x000297e6();
                  uStack_20 = 0x22b2;
                  uStack_22 = 0xc7cc;
                  func_0x00029d78();
                  uStack_2a._2_2_ = 0x22b2;
                  uVar10 = 0x22b2;
                  uStack_2a._0_2_ = (undefined2 *)0xc7d6;
                  func_0x000299d1();
                  uStack_2a._2_2_ = 0x22b2;
                  uStack_2a._0_2_ = (undefined2 *)0xc7da;
                  iVar5 = FUN_3ab8_0591();
                  local_e = (undefined2 *)CONCAT22(local_e._2_2_,(undefined2 *)local_e);
                  uStack_2a = (undefined2 *)CONCAT22(uStack_2a._2_2_,(undefined2 *)uStack_2a);
                  local_202 = CONCAT22(local_202._2_2_,(undefined2)local_202);
                  if (iVar5 != 0) {
                    local_9a = 1;
                    local_e = (undefined2 *)CONCAT22(local_e._2_2_,(undefined2 *)local_e);
                    uStack_2a = (undefined2 *)CONCAT22(uStack_2a._2_2_,(undefined2 *)uStack_2a);
                    local_202 = CONCAT22(local_202._2_2_,(undefined2)local_202);
                  }
                  goto LAB_3ab8_1c67;
                }
                local_170 = local_c8;
                local_16e = local_c6;
                local_18a = local_dc;
                local_188 = local_da;
                local_10 = (undefined2 *)((int)local_10 + 1);
              } while ((int)local_10 < 0x15);
              FUN_3ab8_0631();
            }
          }
        } while( true );
      }
      do {
        local_9a = 0;
LAB_3ab8_1cc0:
        pcVar3 = (code *)swi(0x3f);
        local_3c = (*pcVar3)();
        if (local_3c != -1) {
          do {
            do {
              local_e._2_2_ = (undefined2 *)0x77a;
              local_e._0_2_ = (undefined2 *)0x5757;
              local_10 = local_158;
              local_14 = (undefined2 *)0xc86f;
              puStack_12 = (undefined2 *)uVar10;
              FUN_21f2_3454();
              local_e._2_2_ = &local_1e4;
              local_e._0_2_ = local_158;
              local_10 = (undefined2 *)0x1;
              puStack_12 = (undefined2 *)0x22b2;
              uVar10 = 0x1bb4;
              local_14 = (undefined2 *)0xc88f;
              local_3c = FUN_1def_0904();
              if (*(int *)0x158 != 0) {
                return 1;
              }
              if (local_3c == 1) goto LAB_3ab8_0b40;
              local_e = (undefined2 *)CONCAT22(local_e._2_2_,(undefined2 *)local_e);
              if (local_3c == -1) goto LAB_3ab8_1cc0;
              func_0x000297e6();
              func_0x00029d78();
              local_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined2 *)0xc8c4;
              func_0x000299d1();
              local_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined2 *)0xc8cd;
              func_0x000297e6();
              local_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined2 *)0xc8d2;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              uStack_1a = 0xc8dc;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              uVar10 = 0x11f2;
              uStack_1a = 0xc8e1;
              lVar12 = FUN_13bf_39a0();
              local_1fa = lVar12;
              if (0 < lVar12) {
                FUN_3ab8_056d();
              }
              local_ec = local_1e4;
              local_ea = local_1e2;
              local_174 = local_1f6;
              local_172 = local_1f4;
            } while (-1 < local_1fa);
            func_0x0000c3ca();
            func_0x000297e6();
            func_0x00029d78();
            func_0x000299d1();
            uVar11 = *(int *)0xcb6 == 0;
            if (!(bool)uVar11) {
              func_0x000297e6();
              func_0x00029bb5();
              func_0x00029d78();
              func_0x000299d1();
            }
            func_0x00029834();
            local_e._2_2_ = (undefined2 *)0xc97a;
            func_0x00029c2c();
            func_0x000299d1();
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar11) {
LAB_3ab8_1e32:
              uStack_18e = *(undefined2 *)0xa2c0;
              uStack_18c = *(undefined2 *)0xa2c2;
              uStack_1ae = *(undefined2 *)0xa2a0;
              uStack_1ac = *(undefined2 *)0xa2a2;
            }
            else {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar11) goto LAB_3ab8_1e32;
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029ae7();
              FUN_28b3_1181();
              if ((bool)uVar11) {
LAB_3ab8_1e8a:
                uStack_18e = *(undefined2 *)0xa2a0;
                uStack_18c = *(undefined2 *)0xa2a2;
                uStack_1ae = *(undefined2 *)0xa2c0;
                uStack_1ac = *(undefined2 *)0xa2c2;
              }
              else {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar11) goto LAB_3ab8_1e8a;
                local_e._2_2_ = (undefined2 *)uStack_b2;
                local_e._0_2_ = (undefined2 *)uStack_b4;
                local_10 = (undefined2 *)0x22b2;
                puStack_12 = (undefined2 *)0xca37;
                func_0x0002a11e();
                func_0x00029834();
                func_0x00029c2c();
                func_0x00029983();
                local_e._2_2_ = (undefined2 *)uStack_b2;
                local_e._0_2_ = (undefined2 *)uStack_b4;
                local_10 = (undefined2 *)0x22b2;
                puStack_12 = (undefined2 *)0xca68;
                func_0x0002a10c();
                func_0x00029834();
                func_0x00029c2c();
                func_0x00029983();
              }
            }
            local_e._2_2_ = (undefined2 *)0x22b2;
            local_e._0_2_ = (undefined2 *)0xca9a;
            puVar13 = (undefined2 *)func_0x00000271();
            puVar7 = (undefined2 *)puVar13;
            puVar6 = local_5c;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar1;
            }
            local_10 = (undefined2 *)0x0;
LAB_3ab8_1f31:
            puVar9 = &uStack_2a;
            puVar6 = local_5c;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = (undefined2 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 2);
              puVar13 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar1 = *puVar13;
            }
            uVar10 = 0x1bb4;
            iStack_2e = -0x3531;
            iVar5 = func_0x0001fdaf();
            if (iVar5 == 0) goto LAB_3ab8_1f56;
            func_0x000297e6();
            func_0x00029bb5();
            func_0x0002996b();
            func_0x00029983();
            local_e._2_2_ = (undefined2 *)0x22b2;
            local_e._0_2_ = (undefined2 *)0xcb14;
            func_0x000297e6();
            local_e._2_2_ = (undefined2 *)0x22b2;
            local_e._0_2_ = (undefined2 *)0xcb19;
            func_0x00029d78();
            local_14 = (undefined2 *)0x22b2;
            uStack_16 = 0xcb23;
            func_0x000299d1();
            local_14 = (undefined2 *)0x22b2;
            uStack_16 = 0xcb2c;
            func_0x000297e6();
            local_14 = (undefined2 *)0x22b2;
            uStack_16 = 0xcb35;
            func_0x00029bb5();
            local_14 = (undefined2 *)0x22b2;
            uStack_16 = 0xcb3e;
            func_0x0002996b();
            local_14 = (undefined2 *)0x22b2;
            uStack_16 = 0xcb43;
            func_0x00029d78();
            uStack_1c = 0x22b2;
            local_1e = 0xcb4d;
            func_0x000299d1();
            uStack_1c = 0x22b2;
            local_1e = 0xcb56;
            func_0x000297e6();
            uStack_1c = 0x22b2;
            local_1e = 0xcb5b;
            func_0x00029d78();
            uStack_24 = 0x22b2;
            uStack_26 = 0xcb65;
            func_0x000299d1();
            uStack_24 = 0x22b2;
            uStack_26 = 0xcb6e;
            func_0x000297e6();
            uStack_24 = 0x22b2;
            uStack_26 = 0xcb73;
            func_0x00029d78();
            uVar10 = 0x22b2;
            iStack_2e = -0x3483;
            func_0x000299d1();
            puVar7 = auStack_4a;
            puVar6 = local_5c;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              puVar13 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar1 = *puVar13;
            }
            uStack_4e = 0xcb90;
            iVar5 = FUN_3ab8_0642();
            uVar11 = 0;
            if (iVar5 == 0) goto LAB_3ab8_1f56;
            func_0x00029834();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029ae7();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029ae7();
            FUN_28b3_117c();
            func_0x00029d78();
            uVar10 = 0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar11) goto LAB_3ab8_20d4;
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xcbfa;
            func_0x000299d1();
            local_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xcc03;
            func_0x000297e6();
            local_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xcc08;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xcc12;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1a = 0xcc1b;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            uStack_1a = 0xcc20;
            func_0x00029d78();
            uStack_20 = 0x22b2;
            uStack_22 = 0xcc2a;
            func_0x000299d1();
            uStack_20 = 0x22b2;
            uStack_22 = 0xcc33;
            func_0x000297e6();
            uStack_20 = 0x22b2;
            uStack_22 = 0xcc38;
            func_0x00029d78();
            uStack_2a._2_2_ = 0x22b2;
            uStack_2a._0_2_ = (undefined2 *)0xcc42;
            func_0x000299d1();
            uStack_2a._2_2_ = 0x22b2;
            uVar10 = 0x1bb4;
            uStack_2a._0_2_ = (undefined2 *)0xcc47;
            iVar5 = FUN_1def_043a();
            if (iVar5 == 0) goto LAB_3ab8_1cc0;
LAB_3ab8_2272:
            local_e._2_2_ = (undefined2 *)0x5767;
            local_e._0_2_ = local_158;
            puStack_12 = (undefined2 *)0xce08;
            local_10 = (undefined2 *)uVar10;
            FUN_21f2_3454();
            local_e._2_2_ = &local_1e4;
            local_e._0_2_ = local_158;
            *(undefined2 *)0xc20 = 1;
            local_10 = (undefined2 *)0x1;
            puStack_12 = (undefined2 *)0x22b2;
            uVar10 = 0x1bb4;
            local_14 = (undefined2 *)0xce2b;
            iVar5 = FUN_1def_0904();
            if (iVar5 != -1) {
              *(undefined2 *)0xc20 = 0;
              if (*(int *)0x158 != 0) {
                return 1;
              }
              if (local_d4 != (undefined2 *)0x0) {
                local_e._2_2_ = local_d4;
                local_e._0_2_ = (undefined2 *)0x1bb4;
                uVar10 = 0x11f2;
                local_10 = (undefined2 *)0xccad;
                iVar5 = func_0x00015409();
                if (iVar5 != 0) {
                  local_e._2_2_ = (undefined2 *)*(undefined2 *)0xa296;
                  local_e._0_2_ = (undefined2 *)*(undefined2 *)0xa294;
                  local_10 = (undefined2 *)0x11f2;
                  puStack_12 = (undefined2 *)0xccd0;
                  func_0x000297e6();
                  local_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xccd5;
                  func_0x00029d78();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xccdf;
                  func_0x000299d1();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xcce8;
                  func_0x000297e6();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xcced;
                  func_0x00029d78();
                  uStack_20 = 0x22b2;
                  uStack_22 = 0xccf7;
                  func_0x000299d1();
                  uStack_20 = 1;
                  uStack_22 = 0x22b2;
                  uStack_24 = 0xcd00;
                  FUN_1def_05d1();
                  local_10 = (undefined2 *)0x1bb4;
                  puStack_12 = (undefined2 *)0xcd0a;
                  func_0x000297e6();
                  local_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xcd12;
                  func_0x0002996b();
                  local_10 = (undefined2 *)0x22b2;
                  puStack_12 = (undefined2 *)0xcd17;
                  func_0x00029d78();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xcd21;
                  func_0x000299d1();
                  uStack_18 = 0;
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xcd29;
                  puVar6 = (undefined2 *)FUN_1def_05d1();
                  uStack_160 = *puVar6;
                  uStack_15e = puVar6[1];
                  local_e._2_2_ = (undefined2 *)*(int *)0xa296;
                  local_e._0_2_ = (undefined2 *)*(int *)0xa294;
                  local_10 = (undefined2 *)0x1bb4;
                  puStack_12 = (undefined2 *)0xcd53;
                  func_0x000297e6();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0xcd5d;
                  func_0x000299d1();
                  uStack_18 = 0;
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xcd65;
                  puVar6 = (undefined2 *)func_0x0001e558();
                  uStack_17e = *puVar6;
                  uStack_17c = puVar6[1];
                  do {
                    local_9a = 0;
                    func_0x0001bb4e();
                    local_e._2_2_ = (undefined2 *)0x576c;
                    local_e._0_2_ = (undefined2 *)0x1bb4;
                    uVar10 = 0x11f2;
                    local_10 = (undefined2 *)0xcd93;
                    func_0x00012276();
                    local_20c = *(undefined2 *)0xa29c;
                    uStack_20a = *(undefined2 *)0xa29e;
LAB_3ab8_2225:
                    *(undefined2 *)0xc20 = 1;
                    *(undefined2 *)0xa4a = 1;
                    local_e._2_2_ = &local_1e4;
                    local_e._0_2_ = (undefined2 *)local_36;
                    local_10 = &local_1e;
                    local_14 = (undefined2 *)0xcdca;
                    puStack_12 = (undefined2 *)uVar10;
                    local_1b2 = func_0x00006608();
                    *(undefined2 *)0xc20 = 0;
                    *(undefined2 *)0xa4a = 0;
                    local_ba = 0;
                    if (*(int *)0x158 != 0) {
                      return 1;
                    }
                    if (local_1b2 == -1) {
                      uVar10 = 0x1b6e;
                      FUN_1885_2ec3();
                      break;
                    }
                    if (local_1b2 != 99) {
                      uVar11 = local_d4 == (undefined2 *)0x0;
                      if ((!(bool)uVar11) && (uVar11 = false, local_1b2 == 100)) {
                        local_20c = *(undefined2 *)0xa29c;
                        uStack_20a = *(undefined2 *)0xa29e;
                        local_e._2_2_ = local_d4;
                        local_e._0_2_ = (undefined2 *)0x3bf;
                        local_10 = (undefined2 *)0xce85;
                        iVar5 = func_0x00015409();
                        uVar11 = iVar5 == 0;
                        if (!(bool)uVar11) {
                          local_ba = 1;
                        }
                      }
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if ((bool)uVar11) goto code_r0x0003ceab;
                      goto LAB_3ab8_2347;
                    }
                    uStack_1a2 = *(undefined2 *)0xa29c;
                    uStack_1a0 = *(undefined2 *)0xa29e;
                  } while( true );
                }
              }
              goto LAB_3ab8_2272;
            }
            *(undefined2 *)0xc20 = 0;
          } while( true );
        }
        if (local_9a == 0) goto LAB_3ab8_0b40;
        local_e._2_2_ = (undefined2 *)0xc805;
        func_0x0000daa6();
        local_e._2_2_ = (undefined2 *)0x885;
        for (; 0 < local_9a; local_9a = local_9a + -1) {
          local_1e8 = *(undefined2 *)0x148;
          local_1e6 = *(undefined2 *)0x14a;
          local_e._0_2_ = (undefined2 *)0xc81e;
          func_0x00018779();
          local_e._2_2_ = (undefined2 *)0x11f2;
        }
        local_e._2_2_ = (undefined2 *)0xc834;
        func_0x0000b1d8();
        uVar10 = 0x885;
        func_0x0000abfa();
      } while( true );
    }
    local_e._0_2_ = (undefined2 *)0xb7e3;
    local_e._2_2_ = (undefined2 *)uVar10;
    FUN_21f2_3454();
    uVar10 = 0x22b2;
    while( true ) {
      local_e._2_2_ = (undefined2 *)local_a4;
      local_e._0_2_ = (undefined2 *)local_1d8;
      local_10 = (undefined2 *)0x5693;
      puStack_12 = local_158;
      uStack_16 = 0xb806;
      local_14 = (undefined2 *)uVar10;
      FUN_21f2_3454();
      *(undefined2 *)0xc2c = 1;
      local_e._2_2_ = &local_1e4;
      local_e._0_2_ = local_158;
      local_10 = (undefined2 *)local_9a;
      puStack_12 = (undefined2 *)0x22b2;
      uVar10 = 0x1bb4;
      local_14 = (undefined2 *)0xb82c;
      local_3c = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) {
        return 1;
      }
      if (local_3c == -1) {
        local_e._2_2_ = (undefined2 *)0xb84f;
        func_0x0000daa6();
        local_e._2_2_ = (undefined2 *)0x885;
        for (; 0 < local_9a; local_9a = local_9a + -1) {
          local_1e8 = *(undefined2 *)0x148;
          local_1e6 = *(undefined2 *)0x14a;
          local_e._0_2_ = (undefined2 *)0xb868;
          func_0x00018779();
          local_e._2_2_ = (undefined2 *)0x11f2;
        }
        local_e._2_2_ = (undefined2 *)0xb87e;
        func_0x0000b1d8();
        uVar10 = 0x885;
        func_0x0000abfa();
        local_9a = 0;
      }
      if (local_3c == 0x14) break;
      if (local_d4 != (undefined2 *)0x0) {
        local_e0 = local_1f6;
        local_de = local_1f4;
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (undefined2 *)0x22b2;
        puStack_12 = (undefined2 *)0xb8c5;
        func_0x000299d1();
        local_10 = (undefined2 *)0x22b2;
        puStack_12 = (undefined2 *)0xb8ce;
        func_0x000297e6();
        local_10 = (undefined2 *)0x22b2;
        puStack_12 = (undefined2 *)0xb8d7;
        func_0x0002996b();
        local_10 = (undefined2 *)0x22b2;
        puStack_12 = (undefined2 *)0xb8dc;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xb8e6;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uVar10 = 0x11f2;
        uStack_1a = 0xb8eb;
        lVar12 = FUN_13bf_39a0();
        local_1fa = lVar12;
        if (0 < lVar12) {
          FUN_3ab8_056d();
        }
        if (local_1fa < 0) {
          while( true ) {
            local_e._2_2_ = (undefined2 *)local_a4;
            local_e._0_2_ = (undefined2 *)local_1d8;
            local_10 = (undefined2 *)0x56aa;
            puStack_12 = local_158;
            local_14 = (undefined2 *)0x11f2;
            uStack_16 = 0xb92f;
            FUN_21f2_3454();
            local_e._2_2_ = &local_1e4;
            local_e._0_2_ = local_158;
            local_10 = (undefined2 *)0x1;
            puStack_12 = (undefined2 *)0x22b2;
            uVar10 = 0x1bb4;
            local_14 = (undefined2 *)0xb94f;
            local_3c = FUN_1def_0904();
            if (*(int *)0x158 != 0) {
              return 1;
            }
            if (local_3c == -1) break;
            local_164 = local_1f6;
            local_162 = local_1f4;
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xb98f;
            func_0x000299d1();
            local_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xb998;
            func_0x000297e6();
            local_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xb9a1;
            func_0x0002996b();
            local_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xb9a6;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0xb9b0;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1a = 0xb9b5;
            local_e = (undefined2 *)FUN_13bf_39a0();
            if (0 < (long)local_e) {
              FUN_3ab8_056d();
            }
            if ((long)local_e < 0) {
              func_0x0000c3ca();
              func_0x000297e6();
              func_0x00029d78();
              local_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined2 *)0xb9f2;
              func_0x000299d1();
              local_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined2 *)0xb9fb;
              func_0x000297e6();
              local_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined2 *)0xba00;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              uStack_1a = 0xba0a;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              uStack_1a = 0xba13;
              func_0x000297e6();
              uStack_18 = 0x22b2;
              uStack_1a = 0xba18;
              func_0x00029d78();
              uStack_20 = 0x22b2;
              uStack_22 = 0xba22;
              func_0x000299d1();
              uStack_20 = 0x22b2;
              uStack_22 = 0xba2b;
              func_0x000297e6();
              uStack_20 = 0x22b2;
              uStack_22 = 0xba30;
              func_0x00029d78();
              uStack_2a._2_2_ = 0x22b2;
              uVar10 = 0x22b2;
              uStack_2a._0_2_ = (undefined2 *)0xba3a;
              func_0x000299d1();
              iStack_2e = (int)local_1fa;
              uStack_32 = 0xba4c;
              uStack_2a = local_e;
              local_9a = FUN_3ab8_074a();
              goto LAB_3ab8_0ed3;
            }
          }
        }
      }
    }
  } while( true );
code_r0x0003bf02:
  func_0x000297e6();
  func_0x000297e6();
  uVar10 = 0x22b2;
  FUN_28b3_1181();
  if (!(bool)uVar11) {
LAB_3ab8_139e:
    FUN_1885_2ec3();
    local_e._2_2_ = (undefined2 *)0x1b6e;
    local_e._0_2_ = (undefined2 *)0xbf30;
    FUN_1000_0599();
    local_e._2_2_ = (undefined2 *)*(undefined2 *)0xa296;
    local_e._0_2_ = (undefined2 *)*(undefined2 *)0xa294;
    local_10 = (undefined2 *)0xdef;
    puStack_12 = (undefined2 *)0xbf4b;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xbf50;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbf5a;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbf63;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 49000;
    func_0x00029d78();
    uStack_20 = 0x22b2;
    uStack_22 = 0xbf72;
    func_0x000299d1();
    uStack_20 = 1;
    uStack_22 = 0x22b2;
    uStack_24 = 0xbf7b;
    FUN_1def_05d1();
    local_10 = (undefined2 *)0x1bb4;
    puStack_12 = (undefined2 *)0xbf85;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xbf8d;
    func_0x0002996b();
    local_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xbf92;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbf9c;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xbfa4;
    puVar6 = (undefined2 *)FUN_1def_05d1();
    local_1c2 = *puVar6;
    local_1c0 = puVar6[1];
    local_e._2_2_ = (undefined2 *)*(undefined2 *)0xa296;
    local_e._0_2_ = (undefined2 *)*(undefined2 *)0xa294;
    local_10 = (undefined2 *)0x1bb4;
    puStack_12 = (undefined2 *)0xbfce;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xbfd8;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xbfe0;
    puVar6 = (undefined2 *)func_0x0001e558();
    local_1e0 = *puVar6;
    local_1de = puVar6[1];
    if (local_ba != 0) {
      local_9a = 0;
      func_0x000297e6();
      func_0x00029d78();
      local_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xc017;
      func_0x000299d1();
      local_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xc020;
      func_0x000297e6();
      local_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xc025;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xc02f;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xc038;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xc03d;
      func_0x00029d78();
      uStack_20 = 0x22b2;
      uStack_22 = 0xc047;
      func_0x000299d1();
      uStack_20 = 0x22b2;
      uStack_22 = 0xc050;
      func_0x000297e6();
      uStack_20 = 0x22b2;
      uStack_22 = 0xc055;
      func_0x00029d78();
      uStack_2a._2_2_ = 0x22b2;
      uVar10 = 0x22b2;
      uStack_2a._0_2_ = (undefined2 *)0xc05f;
      func_0x000299d1();
      uStack_2a._2_2_ = 0x22b2;
      uStack_2a._0_2_ = (undefined2 *)0xc063;
      iVar5 = FUN_3ab8_0591();
      if (iVar5 != 0) {
        local_9a = 1;
        local_e = (undefined2 *)CONCAT22(local_e._2_2_,(undefined2 *)local_e);
        uStack_2a = (undefined2 *)CONCAT22(uStack_2a._2_2_,(undefined2 *)uStack_2a);
      }
      goto LAB_3ab8_0ee3;
    }
    local_e._2_2_ = (undefined2 *)0xc083;
    func_0x000297e6();
    puStack_12 = (undefined2 *)0x22b2;
    local_14 = (undefined2 *)0xc08d;
    func_0x000299d1();
    puStack_12 = (undefined2 *)0x22b2;
    local_14 = (undefined2 *)0xc096;
    func_0x000297e6();
    uStack_1a = 0x22b2;
    uStack_1c = 0xc0a0;
    func_0x000299d1();
    uStack_1a = 0x22b2;
    uStack_1c = 0xc0a9;
    func_0x000297e6();
    uStack_22 = 0x22b2;
    uStack_24 = 0xc0b3;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xc0bc;
    func_0x000297e6();
    uStack_2a._0_2_ = (undefined2 *)0x22b2;
    func_0x000299d1();
    uStack_2a._0_2_ = (undefined2 *)0x22b2;
    func_0x0001e18f();
    local_19e = local_1e4;
    local_19c = local_1e2;
    local_1ba = local_1f6;
    local_1b8 = local_1f4;
    local_e._2_2_ = (undefined2 *)0x1bb4;
    local_e._0_2_ = (undefined2 *)0xc0ff;
    func_0x000297e6();
    local_14 = (undefined2 *)0x22b2;
    uStack_16 = 0xc109;
    func_0x000299d1();
    local_14 = (undefined2 *)0x22b2;
    uStack_16 = 0xc112;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    local_1e = 0xc11c;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    local_1e = 0xc125;
    func_0x000297e6();
    uStack_24 = 0x22b2;
    uStack_26 = 0xc12f;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0xc138;
    func_0x000297e6();
    iStack_2e = -0x3ebe;
    func_0x000299d1();
    iStack_2e = -0x3eb9;
    puVar6 = (undefined2 *)FUN_1def_06ff();
    local_e._2_2_ = (undefined2 *)puVar6[1];
    local_e._0_2_ = (undefined2 *)*puVar6;
    local_10 = (undefined2 *)0x56e8;
    puStack_12 = local_158;
    local_14 = (undefined2 *)0x1bb4;
    uStack_16 = 0xc15f;
    FUN_10ad_1928();
    local_e._2_2_ = (undefined2 *)0x11f2;
    local_e._0_2_ = (undefined2 *)0xc16c;
    func_0x00012276();
    local_e._2_2_ = (undefined2 *)0xc176;
    func_0x000297e6();
    puStack_12 = (undefined2 *)0x22b2;
    local_14 = (undefined2 *)0xc180;
    func_0x000299d1();
    puStack_12 = (undefined2 *)0x22b2;
    local_14 = (undefined2 *)0xc189;
    func_0x000297e6();
    uStack_1a = 0x22b2;
    uStack_1c = 0xc193;
    func_0x000299d1();
    uStack_1a = 0x22b2;
    uStack_1c = 0xc19c;
    func_0x000297e6();
    uStack_22 = 0x22b2;
    uStack_24 = 0xc1a6;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xc1af;
    func_0x000297e6();
    uStack_2a._0_2_ = (undefined2 *)0x22b2;
    func_0x000299d1();
    uStack_2a._0_2_ = (undefined2 *)0x22b2;
    uVar14 = FUN_1000_0718();
    local_1fc = 0;
    local_1fe = 0;
    local_e._2_2_ = (undefined2 *)0xc1de;
    local_202 = uVar14;
    func_0x00029da5();
    local_e._2_2_ = (undefined2 *)0xc1e7;
    func_0x00029c2c();
    local_e._2_2_ = (undefined2 *)0xc1ef;
    func_0x0002996b();
    local_e._2_2_ = (undefined2 *)0xc1f4;
    func_0x00029d78();
    puStack_12 = (undefined2 *)0x22b2;
    local_14 = (undefined2 *)0xc1fe;
    func_0x000299d1();
    puStack_12 = (undefined2 *)0x56fb;
    local_14 = (undefined2 *)0x22b2;
    uVar10 = 0x11f2;
    uStack_16 = 0xc207;
    func_0x00012276();
  }
  goto LAB_3ab8_12d3;
LAB_3ab8_20d4:
  local_ec = local_c8;
  local_ea = local_c6;
  local_174 = local_dc;
  local_172 = local_da;
  local_10 = (undefined2 *)((int)local_10 + 1);
  if (0x14 < (int)local_10) {
LAB_3ab8_1f56:
    FUN_3ab8_0631();
    local_e = (undefined2 *)CONCAT22(local_e._2_2_,(undefined2 *)local_e);
    goto LAB_3ab8_1cc0;
  }
  goto LAB_3ab8_1f31;
code_r0x0003ceab:
  func_0x000297e6();
  func_0x000297e6();
  uVar10 = 0x22b2;
  FUN_28b3_1181();
  if (!(bool)uVar11) {
LAB_3ab8_2347:
    FUN_1885_2ec3();
    local_e._2_2_ = (undefined2 *)0x1b6e;
    local_e._0_2_ = (undefined2 *)0xced9;
    FUN_1000_0599();
    local_e._2_2_ = (undefined2 *)*(undefined2 *)0xa296;
    local_e._0_2_ = (undefined2 *)*(undefined2 *)0xa294;
    local_10 = (undefined2 *)0xdef;
    puStack_12 = (undefined2 *)0xcef4;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xcef9;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xcf03;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xcf0c;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xcf11;
    func_0x00029d78();
    uStack_20 = 0x22b2;
    uStack_22 = 0xcf1b;
    func_0x000299d1();
    uStack_20 = 1;
    uStack_22 = 0x22b2;
    uStack_24 = 0xcf24;
    FUN_1def_05d1();
    local_10 = (undefined2 *)0x1bb4;
    puStack_12 = (undefined2 *)0xcf2e;
    func_0x000297e6();
    local_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xcf36;
    func_0x0002996b();
    local_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xcf3b;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xcf45;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xcf4d;
    puVar6 = (undefined2 *)FUN_1def_05d1();
    uStack_1a2 = *puVar6;
    uStack_1a0 = puVar6[1];
    local_e._2_2_ = (undefined2 *)*(undefined2 *)0xa296;
    local_e._0_2_ = (undefined2 *)*(undefined2 *)0xa294;
    local_10 = (undefined2 *)0x1bb4;
    puStack_12 = (undefined2 *)0xcf77;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xcf81;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xcf89;
    puVar6 = (undefined2 *)func_0x0001e558();
    uStack_1be = *puVar6;
    uStack_1bc = puVar6[1];
    if (local_ba != 0) {
      local_9a = 0;
      func_0x000297e6();
      func_0x00029d78();
      local_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xcfc0;
      func_0x000299d1();
      local_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xcfc9;
      func_0x000297e6();
      local_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xcfce;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xcfd8;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xcfe1;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xcfe6;
      func_0x00029d78();
      uStack_20 = 0x22b2;
      uStack_22 = 0xcff0;
      func_0x000299d1();
      uStack_20 = 0x22b2;
      uStack_22 = 0xcff9;
      func_0x000297e6();
      uStack_20 = 0x22b2;
      uStack_22 = 0xcffe;
      func_0x00029d78();
      uStack_2a._2_2_ = 0x22b2;
      uVar10 = 0x22b2;
      uStack_2a._0_2_ = (undefined2 *)0xd008;
      func_0x000299d1();
      uStack_2a._2_2_ = 0x22b2;
      uStack_2a._0_2_ = (undefined2 *)0xd00c;
      iVar5 = FUN_3ab8_0591();
      if (iVar5 != 0) {
        local_9a = 1;
        local_e = (undefined2 *)CONCAT22(local_e._2_2_,(undefined2 *)local_e);
        uStack_2a = (undefined2 *)CONCAT22(uStack_2a._2_2_,(undefined2 *)uStack_2a);
      }
      goto LAB_3ab8_1cc0;
    }
    local_e._2_2_ = (undefined2 *)0xd02c;
    func_0x000297e6();
    puStack_12 = (undefined2 *)0x22b2;
    local_14 = (undefined2 *)0xd036;
    func_0x000299d1();
    puStack_12 = (undefined2 *)0x22b2;
    local_14 = (undefined2 *)0xd03f;
    func_0x000297e6();
    uStack_1a = 0x22b2;
    uStack_1c = 0xd049;
    func_0x000299d1();
    uStack_1a = 0x22b2;
    uStack_1c = 0xd052;
    func_0x000297e6();
    uStack_22 = 0x22b2;
    uStack_24 = 0xd05c;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xd065;
    func_0x000297e6();
    uStack_2a._0_2_ = (undefined2 *)0x22b2;
    func_0x000299d1();
    uStack_2a._0_2_ = (undefined2 *)0x22b2;
    func_0x0001e18f();
    local_e._2_2_ = (undefined2 *)0x1bb4;
    local_e._0_2_ = (undefined2 *)0xd088;
    func_0x000297e6();
    local_14 = (undefined2 *)0x22b2;
    uStack_16 = 0xd092;
    func_0x000299d1();
    local_14 = (undefined2 *)0x22b2;
    uStack_16 = 0xd09b;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    local_1e = 0xd0a5;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    local_1e = 0xd0ae;
    func_0x000297e6();
    uStack_24 = 0x22b2;
    uStack_26 = 0xd0b8;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0xd0c1;
    func_0x000297e6();
    iStack_2e = -0x2f35;
    func_0x000299d1();
    iStack_2e = -0x2f30;
    puVar6 = (undefined2 *)FUN_1def_06ff();
    local_e._2_2_ = (undefined2 *)puVar6[1];
    local_e._0_2_ = (undefined2 *)*puVar6;
    local_10 = (undefined2 *)0x5771;
    puStack_12 = (undefined2 *)auStack_234;
    local_14 = (undefined2 *)0x1bb4;
    uStack_16 = 0xd0e8;
    FUN_10ad_1928();
    local_e._2_2_ = (undefined2 *)0x11f2;
    local_e._0_2_ = (undefined2 *)0xd0f5;
    func_0x00012276();
    local_e._2_2_ = (undefined2 *)0xd0ff;
    func_0x000297e6();
    puStack_12 = (undefined2 *)0x22b2;
    local_14 = (undefined2 *)0xd109;
    func_0x000299d1();
    puStack_12 = (undefined2 *)0x22b2;
    local_14 = (undefined2 *)0xd112;
    func_0x000297e6();
    uStack_1a = 0x22b2;
    uStack_1c = 0xd11c;
    func_0x000299d1();
    uStack_1a = 0x22b2;
    uStack_1c = 0xd125;
    func_0x000297e6();
    uStack_22 = 0x22b2;
    uStack_24 = 0xd12f;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xd138;
    func_0x000297e6();
    uStack_2a._0_2_ = (undefined2 *)0x22b2;
    func_0x000299d1();
    uStack_2a._0_2_ = (undefined2 *)0x22b2;
    uVar14 = FUN_1000_0718();
    local_1fc = 0;
    local_1fe = 0;
    local_e._2_2_ = (undefined2 *)0xd167;
    local_202 = uVar14;
    func_0x00029da5();
    local_e._2_2_ = (undefined2 *)0xd170;
    func_0x00029c2c();
    local_e._2_2_ = (undefined2 *)0xd178;
    func_0x0002996b();
    local_e._2_2_ = (undefined2 *)0xd17d;
    func_0x00029d78();
    puStack_12 = (undefined2 *)0x22b2;
    local_14 = (undefined2 *)0xd187;
    func_0x000299d1();
    puStack_12 = (undefined2 *)0x5784;
    local_14 = (undefined2 *)0x22b2;
    uVar10 = 0x11f2;
    uStack_16 = 0xd190;
    func_0x00012276();
    local_20c = local_1e4;
    uStack_20a = local_1e2;
    local_208 = local_1f6;
    local_206 = local_1f4;
  }
  goto LAB_3ab8_2225;
}



/* 3ab8:263c  FUN_3ab8_263c  1021 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

void __cdecl16far FUN_3ab8_263c(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 local_aa [4];
  undefined1 local_a6 [4];
  undefined1 local_a2 [4];
  undefined1 local_9e [4];
  undefined1 local_9a [4];
  undefined1 local_96 [4];
  undefined1 local_92 [4];
  undefined1 local_8e [4];
  int local_8a;
  undefined1 local_88 [20];
  int local_74;
  undefined1 local_72 [98];
  undefined2 uStack_10;
  int local_e [2];
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  int *piStack_6;
  int *piStack_4;
  
  piStack_4 = (int *)0x3ab8;
  piStack_6 = (int *)0xd1c7;
  FUN_21f2_0ebc();
  piStack_4 = (int *)0x5798;
  piStack_6 = local_e + 1;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xd1d4;
  FUN_21f2_3454();
  piStack_4 = (int *)0x579f;
  piStack_6 = (int *)local_88;
  puStack_8 = (undefined1 *)0x22b2;
  uVar2 = 0x22b2;
  puStack_a = (undefined1 *)0xd1e4;
  FUN_21f2_3454();
  while( true ) {
    piStack_4 = (int *)0x57a6;
    piStack_6 = (int *)local_72;
    puStack_a = (undefined1 *)0xd1f3;
    puStack_8 = (undefined1 *)uVar2;
    FUN_21f2_3454();
    piStack_4 = local_e + 1;
    piStack_6 = (int *)local_72;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd202;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x57b2;
    piStack_6 = (int *)local_72;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd211;
    FUN_21f2_2d26();
    piStack_4 = (int *)local_88;
    piStack_6 = (int *)local_72;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd221;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x57bb;
    piStack_6 = (int *)local_72;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd230;
    FUN_21f2_2d26();
    piStack_4 = local_e + 1;
    piStack_6 = (int *)local_72;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd23f;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x57c1;
    piStack_6 = (int *)local_72;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd24e;
    FUN_21f2_2d26();
    piStack_4 = (int *)local_88;
    piStack_6 = (int *)local_72;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd25e;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x57c4;
    piStack_6 = (int *)local_72;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd26d;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x2ac;
    piStack_6 = (int *)local_72;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd27c;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x57c8;
    piStack_6 = (int *)local_72;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd28b;
    FUN_21f2_2d26();
    piStack_4 = (int *)local_72;
    piStack_6 = (int *)0x4;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xd29a;
    FUN_1def_07a4();
    piStack_4 = local_e;
    piStack_6 = (int *)local_92;
    puStack_8 = local_8e;
    puStack_a = local_72;
    local_e[1] = 0;
    local_e[0] = 0x1bb4;
    uVar2 = 0x1bb4;
    uStack_10 = 0xd2b6;
    local_8a = FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_e[0] == 1) {
      local_8a = 1;
    }
    if (local_e[0] == 2) {
      local_8a = 2;
    }
    if (local_8a == 1) {
      piStack_4 = (int *)0x1bb4;
      uVar2 = 0x885;
      piStack_6 = (int *)0xd2eb;
      func_0x0000c3ca();
      piStack_4 = (int *)0x885;
      piStack_6 = (int *)0xd2ef;
      FUN_3ab8_0ada();
    }
    uVar3 = uVar2;
    if (local_8a == 3) {
      uVar3 = 0x885;
      piStack_6 = (int *)0xd2fb;
      piStack_4 = (int *)uVar2;
      func_0x0000c3ca();
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    uVar2 = uVar3;
    if (local_8a == 4) {
      uVar2 = 0x885;
      piStack_6 = (int *)0xd30c;
      piStack_4 = (int *)uVar3;
      func_0x0000c3ca();
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    if (*(int *)0x158 != 0) break;
    if (local_8a == 2) {
      while( true ) {
        piStack_4 = (int *)0x57cb;
        piStack_6 = (int *)local_96;
        puStack_a = (undefined1 *)0xd333;
        puStack_8 = (undefined1 *)uVar2;
        FUN_21f2_3454();
        piStack_4 = (int *)0x57ce;
        piStack_6 = (int *)local_aa;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd343;
        FUN_21f2_3454();
        piStack_4 = (int *)0x57d1;
        piStack_6 = (int *)local_9a;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd353;
        FUN_21f2_3454();
        piStack_4 = (int *)0x57d4;
        piStack_6 = (int *)local_9e;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd363;
        FUN_21f2_3454();
        piStack_4 = (int *)0x57d7;
        piStack_6 = (int *)local_a2;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd373;
        FUN_21f2_3454();
        piStack_4 = (int *)0x57da;
        piStack_6 = (int *)local_a6;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd383;
        FUN_21f2_3454();
        piStack_4 = (int *)0x57dd;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd392;
        FUN_21f2_3454();
        piStack_4 = (int *)local_9e;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd3a2;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_96;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd3b2;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_9e;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd3c2;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_aa;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd3d2;
        FUN_21f2_2d26();
        piStack_4 = (int *)0x57df;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd3e1;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_9e;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd3f1;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_9a;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd401;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_9e;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd411;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_96;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd421;
        FUN_21f2_2d26();
        piStack_4 = (int *)0x57e4;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd430;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_9e;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd440;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_aa;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd450;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_9e;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd460;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_9a;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd470;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_a6;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd480;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_a2;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd490;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_96;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd4a0;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_a6;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd4b0;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_a2;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd4c0;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_aa;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd4d0;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_a6;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd4e0;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_a2;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd4f0;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_9a;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd500;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_a6;
        piStack_6 = (int *)local_72;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd510;
        FUN_21f2_2d26();
        piStack_4 = (int *)local_72;
        piStack_6 = (int *)0x6;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xd51f;
        FUN_1def_07a4();
        *(undefined2 *)0xc2c = 1;
        piStack_4 = local_e;
        piStack_6 = (int *)local_92;
        puStack_8 = local_8e;
        puStack_a = local_72;
        local_e[1] = 0;
        local_e[0] = 0x1bb4;
        uVar2 = 0x1bb4;
        uStack_10 = 0xd541;
        local_74 = FUN_1def_0904();
        *(undefined2 *)0xc2c = 0;
        if (*(int *)0x158 != 0) {
          return;
        }
        if ((local_74 == -1) || (local_74 == 0x14)) break;
        if (local_e[0] == 1) {
          local_74 = 1;
        }
        if (local_e[0] == 2) {
          local_74 = 2;
        }
        if ((0 < local_74) && (local_74 < 5)) {
          piStack_4 = (int *)local_74;
          pcVar1 = (code *)swi(0x3f);
          (*pcVar1)();
        }
        if ((4 < local_74) && (local_74 < 7)) {
          piStack_4 = (int *)local_74;
          pcVar1 = (code *)swi(0x3f);
          (*pcVar1)();
        }
        if (*(int *)0x158 != 0) {
          return;
        }
      }
      local_8a = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
    }
    if (*(int *)0x158 != 0) {
      return;
    }
  }
  return;
}



/* 3ab8:2a47  FUN_3ab8_2a47  944 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_2a47(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  uint in_stack_00000012;
  uint in_stack_00000014;
  uint in_stack_00000016;
  uint in_stack_00000018;
  uint local_64;
  uint local_62;
  
  FUN_21f2_0ebc();
  func_0x00029da5();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x00029834();
  func_0x000299b9();
  func_0x00029da5();
  func_0x00029c9d();
  func_0x000299d1();
  func_0x00029da5();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x00029da5();
  func_0x00029c2c();
  func_0x000299b9();
  FUN_28b3_0ee9();
  uVar3 = in_stack_00000012 < in_stack_00000016;
  if ((in_stack_00000012 == in_stack_00000016) &&
     (uVar3 = in_stack_00000014 < in_stack_00000018, in_stack_00000014 == in_stack_00000018)) {
    func_0x00029834();
    func_0x00029c74();
    func_0x000299d1();
  }
  func_0x00029834();
  func_0x00029834();
  FUN_28b3_1181();
  if (!(bool)uVar3) {
    func_0x00029834();
    func_0x00029c2c();
    func_0x00029c74();
    func_0x000299d1();
  }
  local_62 = 0;
  local_64 = 0;
  bVar1 = false;
  func_0x0002a11e();
  func_0x0002a10c();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  do {
    if (((char)local_64 == '\0') && (cVar2 = FUN_12c1_009c(), cVar2 == '\x1b')) {
      return 0;
    }
    bVar4 = 0xfffe < local_64;
    local_64 = local_64 + 1;
    uVar3 = CARRY2(local_62,(uint)bVar4);
    local_62 = local_62 + bVar4;
    func_0x00029834();
    func_0x00029834();
    func_0x00029c74();
    func_0x000299b9();
    FUN_28b3_1181();
    if (!(bool)uVar3) {
      bVar1 = true;
    }
    func_0x0002a11e();
    func_0x00029834();
    func_0x00029bfc();
    func_0x000299b9();
    FUN_28b3_0ee9();
    func_0x0002a10c();
    func_0x00029834();
    func_0x00029c2c();
    func_0x000299b9();
    func_0x00029bfc();
    func_0x000299b9();
    func_0x000299d1();
    func_0x00029834();
    func_0x00029c2c();
    func_0x00029834();
    func_0x00029c2c();
    FUN_28b3_117c();
    func_0x000299d1();
    FUN_28b3_1582();
    func_0x00029834();
    func_0x000299b9();
    func_0x00029c74();
    func_0x000299d1();
  } while (!bVar1);
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c2c();
  func_0x000299d1();
  FUN_1000_0599();
  func_0x00012276();
  func_0x00012276();
  func_0x00012276();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029d78();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x00012276();
  return 1;
}



/* 3ab8:2df7  FUN_3ab8_2df7  1615 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_2df7(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint local_74;
  uint local_72;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 local_a;
  
  FUN_21f2_0ebc();
  local_a = 0xd9b9;
  func_0x00029da5();
  local_a = 0xd9c2;
  func_0x00029c2c();
  local_a = 0xd9cb;
  func_0x000299b9();
  local_a = 0xd9d4;
  func_0x000299d1();
  local_a = 0xd9dd;
  func_0x00029834();
  local_a = 0xd9e5;
  func_0x000299b9();
  local_a = 0xda08;
  func_0x00029da5();
  local_a = 0xda0d;
  func_0x00029c9d();
  local_a = 0xda16;
  func_0x000299d1();
  local_a = 0xda1e;
  func_0x000298b4();
  local_a = 0xda27;
  func_0x00029c2c();
  local_a = 0xda30;
  func_0x000299b9();
  local_a = 0xda38;
  func_0x000299d1();
  local_a = 0xda40;
  func_0x000297e6();
  local_a = 0xda45;
  func_0x00029d78();
  local_a = 0xda4d;
  func_0x000299d1();
  local_72 = 0;
  local_74 = 0;
  local_a = 0xda6d;
  func_0x00029834();
  local_a = 0xda75;
  func_0x000299d1();
  local_a = 0xda7e;
  func_0x00029834();
  func_0x000299d1();
  func_0x0002a11e();
  local_a = 0xdaa4;
  func_0x00029834();
  func_0x000299d1();
  func_0x0002a10c();
  uVar4 = (undefined1 *)0xfff7 < &uStack_e;
  uVar6 = &stack0x0000 == (undefined1 *)0x6;
  local_a = 0xdabd;
  func_0x00029834();
  local_a = 0xdac6;
  func_0x00029c2c();
  local_a = 0xdacf;
  func_0x000299d1();
  local_a = 0xdad8;
  func_0x00029834();
  local_a = 0xdae0;
  func_0x00029834();
  local_a = 0xdae5;
  func_0x00029ae7();
  local_a = 0xdaea;
  FUN_28b3_1181();
  if ((bool)uVar4) {
LAB_3ab8_2f6c:
    uVar2 = 0;
  }
  else {
    do {
      local_a = 0xdb12;
      func_0x00029834();
      local_a = 0xdb1b;
      func_0x00029834();
      local_a = 0xdb20;
      FUN_28b3_1181();
      if (!(bool)uVar4) goto LAB_3ab8_3315;
      if ((char)local_74 == '\0') {
        local_a = 0xdb30;
        cVar1 = FUN_12c1_009c();
        if (cVar1 == '\x1b') goto LAB_3ab8_2f6c;
      }
      bVar5 = 0xfffe < local_74;
      local_74 = local_74 + 1;
      uVar4 = CARRY2(local_72,(uint)bVar5);
      local_72 = local_72 + bVar5;
      local_a = 0xdb45;
      func_0x00029834();
      local_a = 0x22b2;
      uStack_c = 0xdb4e;
      func_0x00029c74();
      local_a = 0xdb54;
      func_0x000299d1();
      local_a = 0xdb5d;
      func_0x00029834();
      local_a = 0xdb66;
      func_0x00029834();
      local_a = 0xdb6e;
      func_0x00029c2c();
      local_a = 0xdb73;
      FUN_28b3_1181();
      if ((bool)uVar4) {
        local_a = 0xdb7e;
        func_0x00029834();
        local_a = 0xdb86;
        func_0x00029c2c();
        local_a = 0x22b2;
        uStack_c = 0xdb90;
        func_0x00029c74();
        local_a = 0xdb96;
        func_0x000299d1();
      }
      func_0x0002a11e();
      local_a = 0xdbbf;
      func_0x00029834();
      local_a = 0xdbc7;
      func_0x00029bfc();
      local_a = 0xdbcf;
      func_0x000299b9();
      local_a = 0xdbd7;
      FUN_28b3_0ee9();
      func_0x0002a10c();
      local_a = 0xdbf2;
      func_0x00029834();
      local_a = 0xdbfb;
      func_0x00029c2c();
      local_a = 0xdc04;
      func_0x000299b9();
      local_a = 0xdc0d;
      func_0x00029bfc();
      local_a = 0xdc16;
      func_0x000299b9();
      local_a = 0xdc1e;
      func_0x000299d1();
      local_a = 0xdc27;
      func_0x00029834();
      local_a = 0xdc30;
      func_0x00029c2c();
      local_a = 0xdc38;
      func_0x00029834();
      local_a = 0xdc40;
      func_0x00029c2c();
      local_a = 0xdc45;
      FUN_28b3_117c();
      func_0x000299d1();
      FUN_28b3_1582();
      uVar4 = (undefined1 *)0xfff7 < &uStack_e;
      uVar6 = &stack0x0000 == (undefined1 *)0x6;
      local_a = 0xdc6a;
      func_0x00029834();
      local_a = 0xdc72;
      func_0x00029834();
      local_a = 0x22b2;
      uStack_c = 0xdc7b;
      func_0x00029c2c();
      local_a = 0xdc81;
      func_0x000299b9();
      local_a = 0x22b2;
      uStack_c = 0xdc8a;
      func_0x00029c74();
      local_a = 0xdc90;
      func_0x000299b9();
      local_a = 0xdc95;
      FUN_28b3_1181();
    } while ((bool)uVar4);
    local_a = 0xdca2;
    func_0x00029834();
    local_a = 0xdcaa;
    func_0x00029bfc();
    local_a = 0xdcb2;
    func_0x00029c44();
    local_a = 0xdcba;
    func_0x000299b9();
    local_a = 0xdcc3;
    func_0x00029c2c();
    local_a = 0x22b2;
    uStack_c = 0xdccc;
    FUN_28b3_10e4();
    local_a = 0xdcd2;
    func_0x000299d1();
LAB_3ab8_3315:
    do {
      local_a = 0xde9d;
      func_0x00029834();
      local_a = 0xdea6;
      func_0x00029834();
      local_a = 0xdeab;
      FUN_28b3_1181();
      if ((bool)uVar4 || (bool)uVar6) goto LAB_3ab8_3330;
      if ((char)local_74 == '\0') {
        local_a = 0xdce0;
        cVar1 = FUN_12c1_009c();
        if (cVar1 == '\x1b') goto LAB_3ab8_2f6c;
      }
      bVar5 = 0xfffe < local_74;
      local_74 = local_74 + 1;
      uVar4 = CARRY2(local_72,(uint)bVar5);
      local_72 = local_72 + bVar5;
      uVar6 = local_72 == 0;
      local_a = 0xdcf8;
      func_0x00029834();
      local_a = 0x22b2;
      uStack_c = 0xdd01;
      FUN_28b3_10e4();
      local_a = 0xdd07;
      func_0x000299d1();
      local_a = 0xdd10;
      func_0x00029834();
      local_a = 0xdd19;
      func_0x00029834();
      local_a = 0xdd1e;
      FUN_28b3_1181();
      if (!(bool)uVar4 && !(bool)uVar6) {
        local_a = 0xdd29;
        func_0x00029834();
        local_a = 0xdd31;
        func_0x00029c2c();
        local_a = 0x22b2;
        uStack_c = 0xdd3b;
        func_0x00029c74();
        local_a = 0xdd41;
        func_0x000299d1();
      }
      func_0x0002a11e();
      local_a = 0xdd6a;
      func_0x00029834();
      local_a = 0xdd72;
      func_0x00029bfc();
      local_a = 0xdd7a;
      func_0x000299b9();
      local_a = 0xdd82;
      FUN_28b3_0ee9();
      func_0x0002a10c();
      local_a = 0xdd9d;
      func_0x00029834();
      local_a = 0xdda6;
      func_0x00029c2c();
      local_a = 0xddaf;
      func_0x000299b9();
      local_a = 0xddb8;
      func_0x00029bfc();
      local_a = 0xddc1;
      func_0x000299b9();
      local_a = 0xddc9;
      func_0x000299d1();
      local_a = 0xddd2;
      func_0x00029834();
      local_a = 0xdddb;
      func_0x00029c2c();
      local_a = 0xdde3;
      func_0x00029834();
      local_a = 0xddeb;
      func_0x00029c2c();
      local_a = 0xddf0;
      FUN_28b3_117c();
      func_0x000299d1();
      FUN_28b3_1582();
      uVar4 = (undefined1 *)0xfff7 < &uStack_e;
      uVar6 = &stack0x0000 == (undefined1 *)0x6;
      local_a = 0xde15;
      func_0x00029834();
      local_a = 0xde1d;
      func_0x00029834();
      local_a = 0x22b2;
      uStack_c = 0xde26;
      func_0x00029c2c();
      local_a = 0xde2c;
      func_0x000299b9();
      local_a = 0x22b2;
      uStack_c = 0xde35;
      FUN_28b3_10e4();
      local_a = 0xde3b;
      func_0x000299b9();
      local_a = 0xde40;
      FUN_28b3_1181();
    } while (!(bool)uVar4 && !(bool)uVar6);
    local_a = 0xde4a;
    func_0x00029834();
    local_a = 0xde52;
    func_0x00029bfc();
    local_a = 0xde5a;
    func_0x00029c44();
    local_a = 0xde62;
    func_0x000299b9();
    local_a = 0xde6b;
    func_0x00029c2c();
    local_a = 0x22b2;
    uStack_c = 0xde74;
    FUN_28b3_10e4();
    local_a = 0xde7a;
    func_0x000299d1();
LAB_3ab8_3330:
    func_0x0002a11e();
    local_a = 0xdecb;
    func_0x00029834();
    local_a = 0xded3;
    func_0x00029b6d();
    local_a = 0xdedb;
    func_0x000299d1();
    func_0x0002a10c();
    local_a = 0xdef6;
    func_0x00029834();
    local_a = 0xdefe;
    func_0x00029b6d();
    local_a = 0xdf07;
    func_0x00029c2c();
    local_a = 0xdf0f;
    func_0x000299d1();
    iVar3 = func_0x0002a11e();
    uStack_e = *(undefined2 *)(iVar3 + 4);
    uStack_c = *(undefined2 *)(iVar3 + 6);
    local_a = 0xdf3a;
    func_0x00029834();
    local_a = 0xdf42;
    func_0x00029c2c();
    func_0x0002a10c();
    local_a = 0xdf61;
    func_0x00029834();
    local_a = 0xdf6a;
    func_0x000299b9();
    local_a = 0xdf72;
    func_0x00029c2c();
    local_a = 0xdf77;
    FUN_28b3_1163();
    local_a = 0xdf7f;
    func_0x00029bb5();
    local_a = 0xdf87;
    func_0x00029983();
    local_a = 0xdf90;
    func_0x00029834();
    local_a = 0xdf98;
    func_0x00029c2c();
    local_a = 0xdfa0;
    func_0x00029834();
    local_a = 0xdfa8;
    func_0x00029c2c();
    local_a = 0xdfad;
    FUN_28b3_117c();
    local_a = 0xdfb5;
    func_0x00029bb5();
    local_a = 0xdfbd;
    func_0x00029983();
    uVar2 = 1;
  }
  return uVar2;
}



/* 3ab8:3446  FUN_3ab8_3446  228 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_3446(void)

{
  int iVar1;
  bool bVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  uint uVar4;
  
  FUN_21f2_0ebc();
  if (*(int *)0x154 < 100) {
    bVar2 = false;
    for (uVar4 = 1; (int)uVar4 <= *(int *)0x154; uVar4 = uVar4 + 1) {
      func_0x00029834(0x22b2);
      uVar3 = (uVar4 & 0x3fff) == 0;
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar3) {
        func_0x00029834(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (((bool)uVar3) && ((uint)*(byte *)(uVar4 + 0xc0b4) == *(uint *)0xb310)) {
          bVar2 = true;
        }
      }
    }
    if (!bVar2) {
      *(undefined1 *)0xd14 = 2;
      func_0x00029834(0x22b2);
      *(int *)0x154 = *(int *)0x154 + 1;
      func_0x00029983(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029983(0x22b2);
      iVar1 = *(int *)0x154;
      *(undefined1 *)(iVar1 + -0x3f4c) = *(undefined1 *)0xb310;
      func_0x0001ebda(0x22b2,1,iVar1);
      return *(undefined2 *)0x154;
    }
  }
  return 0;
}



/* 3ab8:352a  FUN_3ab8_352a  908 bytes, 0 callers */

int __cdecl16far FUN_3ab8_352a(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int *piVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 in_stack_00000024;
  int in_stack_00000026;
  int in_stack_00000028;
  int in_stack_0000002a;
  byte in_stack_0000002c;
  int in_stack_0000002e;
  int local_52;
  undefined1 local_4c [18];
  undefined2 uStack_3a;
  undefined2 in_stack_0000ffc8;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  int local_30;
  int local_2e;
  int local_2c;
  int local_2a;
  int local_28;
  undefined2 local_26 [6];
  undefined2 uStack_1a;
  undefined2 local_18;
  int local_16;
  int local_14;
  int local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  
  FUN_21f2_0ebc();
  local_2c = 0;
  puStack_a = (undefined1 *)0xe0c1;
  func_0x0000c3ca();
  puStack_a = (undefined1 *)0x14;
  uStack_c = 0x885;
  uStack_e = 0xe0ce;
  FUN_1000_0599();
  puStack_a = (undefined1 *)0xdef;
  uStack_c = 0xe0d9;
  func_0x00012276();
  local_28 = in_stack_00000026;
  local_2e = in_stack_0000002a;
  puVar8 = local_26;
  puVar7 = (undefined2 *)&stack0x0004;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar3 = *puVar2;
  }
  if (0x167 < in_stack_00000026) {
    local_28 = in_stack_00000026 + -0x168;
  }
  if (local_28 < 0) {
    local_28 = local_28 + 0x168;
  }
  if (0x167 < in_stack_0000002a) {
    local_2e = in_stack_0000002a + -0x168;
  }
  if (local_2e < 0) {
    local_2e = local_2e + 0x168;
  }
  local_30 = in_stack_00000028;
  local_18 = in_stack_00000024;
  local_16 = local_28;
  local_14 = in_stack_00000028;
  local_12 = local_2e;
  piVar9 = &local_28;
  puVar8 = local_26;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = piVar9;
    piVar9 = piVar9 + 1;
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar2;
  }
  local_2a = 0x11f2;
  local_2c = -0x1e93;
  iVar5 = FUN_3ab8_2a47();
  iVar6 = in_stack_0000002e;
  if (iVar5 == 0) {
    return 0;
  }
  puStack_a = (undefined1 *)0xe185;
  FUN_28b3_0d8b();
  puStack_a = (undefined1 *)0xe18d;
  func_0x00029983();
  if (in_stack_0000002c != 0) {
    puStack_a = (undefined1 *)0xe19f;
    func_0x000297e6();
    puStack_a = (undefined1 *)0xe1a8;
    func_0x00029b6d();
    puStack_a = (undefined1 *)0xe1b0;
    func_0x00029b9d();
    puStack_a = (undefined1 *)0xe1b5;
    func_0x00029d78();
    puStack_a = (undefined1 *)0xe1bd;
    FUN_28b3_112c();
    puStack_a = (undefined1 *)0xe1c5;
    func_0x0002996b();
    puStack_a = (undefined1 *)0xe1cd;
    FUN_28b3_0ee9();
    uVar10 = in_stack_0000002c == 0;
    uVar11 = in_stack_0000002c == 1;
    if ((bool)uVar11) {
      puStack_a = (undefined1 *)0xe1db;
      func_0x000297e6();
      puStack_a = (undefined1 *)0xe1e0;
      func_0x00029d78();
      puStack_a = (undefined1 *)0xe1e9;
      func_0x00029c74();
      puStack_a = (undefined1 *)0xe1ee;
      iVar6 = FUN_28b3_0f51();
      puStack_a = (undefined1 *)0xe1f9;
      FUN_28b3_0d8b();
    }
    else {
      puStack_a = (undefined1 *)0xe204;
      func_0x000297e6();
      puStack_a = (undefined1 *)0xe209;
      func_0x00029d78();
      puStack_a = (undefined1 *)0xe20e;
      iVar6 = FUN_28b3_0f51();
      puStack_a = (undefined1 *)0xe21c;
      FUN_28b3_0d8b();
      puStack_a = (undefined1 *)0xe224;
      func_0x00029b55();
      puStack_a = (undefined1 *)0xe22c;
      func_0x0002996b();
      puStack_a = (undefined1 *)0xe234;
      FUN_28b3_0ee9();
      puStack_a = (undefined1 *)0xe23d;
      func_0x00029834();
      puStack_a = (undefined1 *)0xe245;
      func_0x000297e6();
      puStack_a = (undefined1 *)0xe24a;
      func_0x00029d78();
      puStack_a = (undefined1 *)0xe24f;
      FUN_28b3_1181();
      if (!(bool)uVar10) {
        iVar6 = iVar6 + 1;
        uVar11 = iVar6 == 0;
        puStack_a = (undefined1 *)0xe263;
        FUN_28b3_0d8b();
        puStack_a = (undefined1 *)0xe26b;
        func_0x00029983();
      }
      puStack_a = (undefined1 *)0xe274;
      func_0x00029834();
      puStack_a = (undefined1 *)0xe27c;
      func_0x000297e6();
      puStack_a = (undefined1 *)0xe281;
      func_0x00029d78();
      puStack_a = (undefined1 *)0xe286;
      FUN_28b3_1181();
      if ((bool)uVar10 || (bool)uVar11) {
        puStack_a = (undefined1 *)0xe290;
        FUN_28b3_0d8b();
        puStack_a = (undefined1 *)0xe298;
        func_0x00029983();
      }
      uVar10 = in_stack_0000002c < 3;
      if (!(bool)uVar10) {
        puStack_a = (undefined1 *)0xe2a6;
        func_0x000297e6();
        puStack_a = (undefined1 *)0xe2ae;
        FUN_28b3_0d8b();
        puStack_a = (undefined1 *)0xe2b3;
        FUN_28b3_1181();
        if ((bool)uVar10) {
          iVar6 = iVar6 + 1;
        }
      }
      if (in_stack_0000002c < 4) {
        puStack_a = (undefined1 *)0xe2c6;
        FUN_28b3_0d8b();
        puStack_a = (undefined1 *)0xe2ce;
        func_0x00029983();
      }
      if (in_stack_0000002c < 4) goto LAB_3ab8_3783;
      puStack_a = (undefined1 *)0xe2dd;
      func_0x000297e6();
      puStack_a = (undefined1 *)0xe2e6;
      func_0x00029b6d();
      puStack_a = (undefined1 *)0xe2ee;
      func_0x00029b9d();
      puStack_a = (undefined1 *)0xe2f3;
      func_0x00029d78();
      puStack_a = (undefined1 *)0xe2fb;
      FUN_28b3_112c();
    }
    puStack_a = (undefined1 *)0xe303;
    func_0x00029983();
  }
LAB_3ab8_3783:
  puStack_a = (undefined1 *)0xe30b;
  func_0x00029834();
  puStack_a = (undefined1 *)0xe313;
  func_0x00029b85();
  puStack_a = (undefined1 *)0xe31b;
  func_0x000299b9();
  puStack_a = (undefined1 *)0xe323;
  func_0x000299d1();
  local_52 = 1;
  while( true ) {
    if (iVar6 <= local_52) {
      return local_2c;
    }
    puStack_a = (undefined1 *)0xe426;
    cVar4 = FUN_12c1_009c();
    if (cVar4 == '\x1b') break;
    puStack_a = local_4c;
    uStack_c = local_32;
    uStack_e = local_34;
    uStack_10 = local_36;
    local_12 = in_stack_0000ffc8;
    local_14 = local_28;
    local_16 = local_2a;
    puVar7 = &local_36;
    puVar8 = local_26;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar2;
    }
    in_stack_0000ffc8 = 0x11f2;
    uStack_3a = 0xe358;
    iVar5 = FUN_3ab8_2df7();
    if (iVar5 == 0) {
      return local_2c;
    }
    uVar1 = *(undefined2 *)0x1d0;
    if (*(char *)0x1cd != '\0') {
      *(uint *)0x1d0 = (uint)*(byte *)0x1cd;
    }
    if (*(int *)0x105e == 0) {
      puStack_a = (undefined1 *)0xe386;
      func_0x000297e6();
      puStack_a = (undefined1 *)0xe38b;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      local_12 = 0xe395;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      local_12 = 0xe39d;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      local_12 = -0x1c5e;
      func_0x00029d78();
      local_18 = 0x22b2;
      uStack_1a = 0xe3ac;
      func_0x000299d1();
      local_18 = 0x22b2;
      uStack_1a = 0xe3b0;
      iVar5 = FUN_3ab8_3446();
      if (iVar5 != 0) {
        local_2c = local_2c + 1;
      }
    }
    else {
      puStack_a = (undefined1 *)0xe3c4;
      func_0x000297e6();
      puStack_a = (undefined1 *)0xe3c9;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      local_12 = 0xe3d3;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      local_12 = 0xe3db;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      local_12 = -0x1c20;
      func_0x00029d78();
      local_18 = 0x22b2;
      uStack_1a = 0xe3ea;
      func_0x000299d1();
      local_18 = 0x22b2;
      uStack_1a = 0xe3ef;
      iVar5 = FUN_1def_1208();
      if (iVar5 != 0) {
        local_2c = local_2c + -1;
      }
    }
    *(undefined2 *)0x1d0 = uVar1;
    puStack_a = (undefined1 *)0xe407;
    func_0x00029834();
    puStack_a = (undefined1 *)0x22b2;
    uStack_c = 0xe410;
    func_0x00029c74();
    puStack_a = (undefined1 *)0xe416;
    func_0x000299d1();
    local_52 = local_52 + 1;
  }
  return local_2c;
}



/* 3ab8:38b6  FUN_3ab8_38b6  1535 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003e904) */

undefined2 __cdecl16far
FUN_3ab8_38b6(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  long lVar8;
  undefined2 in_stack_00000024;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  undefined2 *in_stack_0000002c;
  undefined1 local_8e [4];
  undefined2 local_8a;
  undefined2 local_88;
  int local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined2 local_4c [2];
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 local_44 [2];
  uint local_40;
  undefined2 auStack_2e [9];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 *local_e;
  undefined1 *puStack_c;
  undefined2 *puStack_a;
  
  FUN_21f2_0ebc();
  puVar6 = local_4c;
  puVar5 = &param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  puStack_a = (undefined2 *)0xe458;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xe460;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xe468;
  FUN_28b3_0ee9();
  puStack_a = (undefined2 *)0xe486;
  func_0x00029da5();
  puStack_a = (undefined2 *)0xe48f;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xe498;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xe4a0;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xe4a8;
  func_0x00029983();
  local_1c = param_1;
  local_1a = param_2;
  local_18 = param_3;
  local_16 = param_4;
  local_14 = in_stack_00000024;
  local_12 = in_stack_00000026;
  local_10 = in_stack_00000028;
  local_e = (undefined2 *)in_stack_0000002a;
  puStack_a = (undefined2 *)0xe4e0;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xe4e8;
  FUN_28b3_100d();
  puStack_a = (undefined2 *)0xe4f0;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xe4f8;
  FUN_28b3_0ee9();
  puStack_a = (undefined2 *)0xe500;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xe508;
  FUN_28b3_100d();
  puStack_a = (undefined2 *)0xe510;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xe518;
  FUN_28b3_0ee9();
  puStack_a = (undefined2 *)0xe520;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xe528;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xe530;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xe538;
  func_0x00029b6d();
  puStack_a = (undefined2 *)0xe53d;
  FUN_28b3_117c();
  puStack_a = (undefined2 *)0xe542;
  func_0x00029d78();
  local_10 = 0x22b2;
  local_12 = 0xe54c;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0xe551;
  FUN_28b3_1582();
  puStack_a = (undefined2 *)0xe55b;
  func_0x00029834();
  puStack_a = (undefined2 *)0xe563;
  func_0x0002996b();
  puStack_a = (undefined2 *)0xe56b;
  func_0x00029b9d();
  puStack_a = (undefined2 *)0xe573;
  func_0x00029983();
  puStack_a = (undefined2 *)0xe57b;
  func_0x000297e6();
  puStack_a = (undefined2 *)0xe583;
  func_0x00029b85();
  puStack_a = (undefined2 *)0xe58c;
  func_0x00029983();
  puStack_a = &local_8a;
  puStack_c = local_8e;
  local_e = &local_74;
  puVar5 = auStack_2e;
  puVar6 = local_4c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = local_44;
  puVar6 = &local_1c;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  uStack_46 = 0x22b2;
  uStack_48 = 0xe5c0;
  iVar4 = FUN_1def_2179();
  uVar7 = 0;
  if (iVar4 != 0) {
    puStack_a = (undefined2 *)0xe5d5;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe5dd;
    FUN_28b3_100d();
    puStack_a = (undefined2 *)0xe5e2;
    func_0x00029ae7();
    puStack_a = (undefined2 *)0xe5eb;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe5f3;
    FUN_28b3_100d();
    puStack_a = (undefined2 *)0xe5f8;
    func_0x00029ae7();
    puStack_a = (undefined2 *)0xe5fd;
    FUN_28b3_117c();
    puStack_a = (undefined2 *)0xe606;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe60e;
    FUN_28b3_100d();
    puStack_a = (undefined2 *)0xe613;
    func_0x00029ae7();
    puStack_a = (undefined2 *)0xe61b;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe623;
    FUN_28b3_100d();
    puStack_a = (undefined2 *)0xe628;
    func_0x00029ae7();
    puStack_a = (undefined2 *)0xe62d;
    FUN_28b3_117c();
    puStack_a = (undefined2 *)0xe632;
    FUN_28b3_1181();
    if ((bool)uVar7) {
      local_60 = local_74;
      local_5e = local_72;
    }
    else {
      local_60 = local_8a;
      local_5e = local_88;
    }
    puStack_a = (undefined2 *)0xe66e;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe676;
    FUN_28b3_100d();
    puStack_a = (undefined2 *)0xe67f;
    func_0x00029b6d();
    puStack_a = (undefined2 *)0xe687;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe68f;
    FUN_28b3_100d();
    puStack_a = (undefined2 *)0xe697;
    func_0x00029b6d();
    puStack_a = (undefined2 *)0xe69c;
    FUN_28b3_117c();
    puStack_a = (undefined2 *)0xe6a4;
    func_0x0002996b();
    puStack_a = (undefined2 *)0xe6ac;
    func_0x00029b55();
    puStack_a = (undefined2 *)0xe6b1;
    func_0x00029d78();
    puStack_a = (undefined2 *)0xe6ba;
    func_0x00029c2c();
    puStack_a = (undefined2 *)0xe6c2;
    func_0x0002996b();
    puStack_a = (undefined2 *)0xe6ca;
    FUN_28b3_0ee9();
    puStack_a = (undefined2 *)0xe6d2;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe6da;
    func_0x00029983();
    local_58 = *(undefined2 *)0xa288;
    local_56 = *(undefined2 *)0xa28a;
    puStack_a = (undefined2 *)0xe6ef;
    func_0x000297e6();
    puStack_a = (undefined2 *)0x22b2;
    puStack_c = (undefined1 *)0xe6f8;
    func_0x00029bb5();
    puStack_a = (undefined2 *)0xe6fe;
    func_0x0002996b();
    puStack_a = (undefined2 *)0xe706;
    func_0x0002996b();
    puStack_a = (undefined2 *)0xe70e;
    FUN_28b3_0ee9();
    puStack_a = (undefined2 *)0xe716;
    func_0x000297e6();
    puStack_a = (undefined2 *)0x22b2;
    puStack_c = (undefined1 *)0xe71f;
    func_0x00029bb5();
    puStack_a = (undefined2 *)0xe725;
    func_0x0002996b();
    puStack_a = (undefined2 *)0xe72d;
    func_0x00029b85();
    puStack_a = (undefined2 *)0xe736;
    func_0x00029b6d();
    puStack_a = (undefined2 *)0xe73b;
    func_0x00029d78();
    puStack_a = (undefined2 *)0xe740;
    local_40 = FUN_28b3_0f51();
    puStack_a = (undefined2 *)0xe74c;
    func_0x00029834();
    puStack_a = (undefined2 *)0xe754;
    func_0x000297e6();
    puStack_a = (undefined2 *)0xe759;
    func_0x00029d78();
    puStack_a = (undefined2 *)0xe75e;
    FUN_28b3_1181();
    if ((!(bool)uVar7) && (499 < local_40)) {
      for (local_76 = 1; local_76 < 0x65; local_76 = local_76 + 1) {
        puStack_a = &local_8a;
        puStack_c = local_8e;
        local_e = &local_74;
        puVar5 = auStack_2e;
        puVar6 = local_4c;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        puVar5 = local_44;
        puVar6 = &local_1c;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        uStack_46 = 0x22b2;
        uStack_48 = 0xe988;
        iVar4 = FUN_1def_2179();
        uVar7 = 0;
        if (iVar4 == 0) {
          return 0;
        }
        puStack_a = (undefined2 *)0xe99b;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe9a3;
        FUN_28b3_100d();
        puStack_a = (undefined2 *)0xe9a8;
        func_0x00029ae7();
        puStack_a = (undefined2 *)0xe9b1;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe9b9;
        FUN_28b3_100d();
        puStack_a = (undefined2 *)0xe9be;
        func_0x00029ae7();
        puStack_a = (undefined2 *)0xe9c3;
        FUN_28b3_117c();
        puStack_a = (undefined2 *)0xe9cc;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe9d4;
        FUN_28b3_100d();
        puStack_a = (undefined2 *)0xe9d9;
        func_0x00029ae7();
        puStack_a = (undefined2 *)0xe9e1;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe9e9;
        FUN_28b3_100d();
        puStack_a = (undefined2 *)0xe9ee;
        func_0x00029ae7();
        puStack_a = (undefined2 *)0xe9f3;
        FUN_28b3_117c();
        puStack_a = (undefined2 *)0xe9f8;
        FUN_28b3_1181();
        if ((bool)uVar7) {
          local_60 = local_74;
          local_5e = local_72;
        }
        else {
          local_60 = local_8a;
          local_5e = local_88;
        }
        puStack_a = (undefined2 *)0xe7c4;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe7cc;
        FUN_28b3_100d();
        puStack_a = (undefined2 *)0xe7d5;
        func_0x00029b6d();
        puStack_a = (undefined2 *)0xe7dd;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe7e5;
        FUN_28b3_100d();
        puStack_a = (undefined2 *)0xe7ed;
        func_0x00029b6d();
        puStack_a = (undefined2 *)0xe7f2;
        FUN_28b3_117c();
        puStack_a = (undefined2 *)0xe7fa;
        func_0x0002996b();
        puStack_a = (undefined2 *)0xe802;
        func_0x00029b55();
        puStack_a = (undefined2 *)0xe80b;
        func_0x0002996b();
        puStack_a = (undefined2 *)0xe813;
        func_0x00029b6d();
        puStack_a = (undefined2 *)0xe81b;
        func_0x0002996b();
        puStack_a = (undefined2 *)0xe823;
        FUN_28b3_0ee9();
        puStack_a = (undefined2 *)0xe82c;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe834;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe83c;
        func_0x00029b6d();
        puStack_a = (undefined2 *)0xe841;
        FUN_28b3_1181();
        if ((bool)uVar7) {
          puStack_a = (undefined2 *)0xe84b;
          func_0x000297e6();
          puStack_a = (undefined2 *)0xe850;
          func_0x00029d78();
          puStack_a = (undefined2 *)0xe859;
          func_0x00029c2c();
          puStack_a = (undefined2 *)0xe861;
          func_0x0002996b();
          puStack_a = (undefined2 *)0xe86a;
          func_0x00029b6d();
          puStack_a = (undefined2 *)0xe872;
          func_0x00029983();
        }
        puStack_a = (undefined2 *)0xe87a;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe882;
        func_0x0002996b();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xe88b;
        func_0x00029bb5();
        puStack_a = (undefined2 *)0xe891;
        func_0x0002996b();
        puStack_a = (undefined2 *)0xe899;
        func_0x0002996b();
        puStack_a = (undefined2 *)0xe8a1;
        FUN_28b3_0ee9();
        puStack_a = (undefined2 *)0xe8a9;
        func_0x000297e6();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xe8b2;
        func_0x00029bb5();
        puStack_a = (undefined2 *)0xe8b8;
        func_0x0002996b();
        puStack_a = (undefined2 *)0xe8c0;
        func_0x00029b85();
        puStack_a = (undefined2 *)0xe8c9;
        func_0x00029b6d();
        puStack_a = (undefined2 *)0xe8ce;
        func_0x00029d78();
        puStack_a = (undefined2 *)0xe8d3;
        lVar8 = FUN_28b3_0f51();
        puStack_a = (undefined2 *)0xe8e2;
        local_54 = lVar8;
        func_0x00029834();
        puStack_a = (undefined2 *)0xe8ea;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe8ef;
        func_0x00029d78();
        puStack_a = (undefined2 *)0xe8f4;
        FUN_28b3_1181();
        if ((((bool)uVar7) || (local_54 < 500)) ||
           ((uVar7 = false, -1 < local_54 &&
            ((0xffff < local_54 || (uVar7 = (uint)local_54 < 60000, 60000 < (uint)local_54))))))
        goto LAB_3ab8_3be7;
        local_40 = (uint)local_54;
        puStack_a = (undefined2 *)0xe92f;
        func_0x00029834();
        puStack_a = (undefined2 *)0xe937;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xe93c;
        func_0x00029ae7();
        puStack_a = (undefined2 *)0xe941;
        func_0x00029d78();
        puStack_a = (undefined2 *)0xe946;
        FUN_28b3_1181();
        if ((bool)uVar7) break;
      }
      puStack_a = (undefined2 *)0xea1c;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xea24;
      FUN_28b3_100d();
      puStack_a = (undefined2 *)0xea2c;
      func_0x00029983();
      return 1;
    }
LAB_3ab8_3be7:
    uVar3 = *(undefined2 *)0xa2a2;
    *in_stack_0000002c = *(undefined2 *)0xa2a0;
    in_stack_0000002c[1] = uVar3;
    *(undefined2 *)0xc22 = 1;
    puStack_a = (undefined2 *)0x12;
    puStack_c = (undefined1 *)0x22b2;
    local_e = (undefined2 *)0xe789;
    FUN_1000_0599();
    puStack_a = (undefined2 *)0xdef;
    puStack_c = (undefined1 *)0xe794;
    func_0x00012276();
  }
  return 0;
}



/* 3ab8:3eb5  FUN_3ab8_3eb5  1090 bytes, 2 callers */

/* WARNING: Removing unreachable block (ram,0x0003eafe) */
/* WARNING: Removing unreachable block (ram,0x0003eb09) */

undefined2 __cdecl16far FUN_3ab8_3eb5(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 extraout_DX;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined2 *puVar9;
  undefined1 local_74 [4];
  undefined2 local_70;
  undefined2 local_6e;
  undefined1 local_6c [20];
  undefined2 local_58;
  undefined2 local_56;
  undefined1 local_54 [8];
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_34;
  undefined2 local_30;
  undefined4 local_2e;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 *local_10;
  undefined1 *puStack_e;
  undefined2 *puStack_c;
  
  FUN_21f2_0ebc();
  puVar5 = &local_40;
  puVar4 = param_1;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    puVar9 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = *puVar9;
  }
  uVar6 = 0;
  func_0x00029da5();
  func_0x00029b6d();
  func_0x00029983();
  func_0x00029834();
  func_0x000297e6();
  puStack_c = (undefined2 *)0xeaa7;
  func_0x00029bb5();
  func_0x0002996b();
  func_0x00029d78();
  FUN_28b3_1181();
  if (!(bool)uVar6) {
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029b85();
    func_0x00029b6d();
    func_0x00029d78();
    lVar8 = FUN_28b3_0f51();
    local_1e = (undefined2)((ulong)lVar8 >> 0x10);
    local_34 = (undefined2)lVar8;
    if ((499 < lVar8) && (lVar8 < 0xea61)) {
      puStack_c = (undefined2 *)0x22b2;
      puStack_e = (undefined1 *)0xeb1d;
      local_20 = local_34;
      puVar9 = (undefined2 *)func_0x00000271();
      puVar4 = (undefined2 *)puVar9;
      puVar5 = param_1;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      puStack_c = (undefined2 *)local_6c;
      puStack_e = local_54;
      local_10 = (undefined2 *)0x0;
      uStack_12 = 0;
      local_14 = 0;
      local_16 = 0xeb4e;
      FUN_20a9_0ca3();
      local_1c = local_40;
      local_1a = local_3e;
      local_18 = local_3c;
      local_16 = local_3a;
      puStack_c = (undefined2 *)0xeb71;
      func_0x00029834();
      puStack_c = (undefined2 *)0xeb79;
      func_0x00029983();
      puStack_c = (undefined2 *)0xeb81;
      func_0x00029834();
      puStack_c = (undefined2 *)0xeb89;
      func_0x00029983();
      puStack_c = &local_70;
      puStack_e = local_74;
      local_10 = &local_58;
      puVar4 = &local_30;
      puVar5 = &local_40;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        puVar9 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = *puVar9;
      }
      puVar4 = &local_46;
      puVar5 = &local_1c;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        puVar9 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = *puVar9;
      }
      local_48 = 0x22b2;
      local_4a = 0xebba;
      iVar3 = FUN_1def_2179();
      uVar6 = 0;
      uVar7 = iVar3 == 0;
      if (!(bool)uVar7) {
        puStack_c = (undefined2 *)0xebcc;
        func_0x000297e6();
        puStack_c = (undefined2 *)0xebd1;
        func_0x00029d78();
        puStack_c = (undefined2 *)0xebd9;
        func_0x00029bfc();
        puStack_c = (undefined2 *)0xebde;
        func_0x00029ae7();
        puStack_c = (undefined2 *)0xebe6;
        func_0x000297e6();
        puStack_c = (undefined2 *)0xebeb;
        func_0x00029d78();
        puStack_c = (undefined2 *)0xebf3;
        func_0x00029bfc();
        puStack_c = (undefined2 *)0xebf8;
        func_0x00029ae7();
        puStack_c = (undefined2 *)0xebfd;
        FUN_28b3_117c();
        puStack_c = (undefined2 *)0xec05;
        func_0x000297e6();
        puStack_c = (undefined2 *)0xec0a;
        func_0x00029d78();
        puStack_c = (undefined2 *)0xec12;
        func_0x00029bfc();
        puStack_c = (undefined2 *)0xec17;
        func_0x00029ae7();
        puStack_c = (undefined2 *)0xec1f;
        func_0x000297e6();
        puStack_c = (undefined2 *)0xec24;
        func_0x00029d78();
        puStack_c = (undefined2 *)0xec2c;
        func_0x00029bfc();
        puStack_c = (undefined2 *)0xec31;
        func_0x00029ae7();
        puStack_c = (undefined2 *)0xec36;
        FUN_28b3_117c();
        puStack_c = (undefined2 *)0xec3b;
        FUN_28b3_1181();
        if ((bool)uVar6 || (bool)uVar7) {
          local_48 = local_70;
          local_46 = local_6e;
        }
        else {
          local_48 = local_58;
          local_46 = local_56;
        }
        puStack_c = (undefined2 *)0x0;
        puStack_e = (undefined1 *)0x22b2;
        local_10 = (undefined2 *)0xec72;
        puVar9 = (undefined2 *)func_0x00000271();
        puVar4 = (undefined2 *)puVar9;
        puVar5 = &local_40;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar4;
          puVar4 = puVar4 + 1;
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar2 = *puVar1;
        }
        puStack_c = (undefined2 *)0x0;
        puStack_e = (undefined1 *)0xec94;
        func_0x000297e6();
        puStack_c = (undefined2 *)0x22b2;
        puStack_e = (undefined1 *)0xec99;
        func_0x00029d78();
        local_14 = 0x22b2;
        local_16 = 0xeca3;
        func_0x000299d1();
        local_14 = 0x22b2;
        local_16 = 0xecab;
        func_0x000297e6();
        local_14 = 0x22b2;
        local_16 = 0xecb0;
        func_0x00029d78();
        local_1c = 0x22b2;
        local_1e = 0xecba;
        func_0x000299d1();
        local_1c = 0;
        local_1e = 0;
        local_20 = 0x22b2;
        uStack_22 = 0xecc3;
        FUN_20a9_1260();
        puStack_c = (undefined2 *)local_44;
        puStack_e = (undefined1 *)0x1bb4;
        local_10 = (undefined2 *)0xecd1;
        func_0x00021eee();
        local_1c = local_40;
        local_1a = local_3e;
        local_18 = local_3c;
        local_16 = local_3a;
        puStack_c = (undefined2 *)0xecf9;
        local_30 = extraout_DX;
        func_0x00029834();
        puStack_c = (undefined2 *)0xed01;
        func_0x00029983();
        puStack_c = (undefined2 *)0xed09;
        func_0x00029834();
        puStack_c = (undefined2 *)0xed11;
        func_0x00029983();
        puStack_c = &local_70;
        puStack_e = local_74;
        local_10 = &local_58;
        puVar4 = &local_30;
        puVar5 = &local_40;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          puVar9 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar9;
        }
        puVar4 = &local_46;
        puVar5 = &local_1c;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          puVar9 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar9;
        }
        local_48 = 0x22b2;
        local_4a = 0xed42;
        iVar3 = FUN_1def_2179();
        uVar6 = 0;
        if (iVar3 != 0) {
          puStack_c = (undefined2 *)0xed54;
          func_0x000297e6();
          puStack_c = (undefined2 *)0xed59;
          func_0x00029d78();
          puStack_c = (undefined2 *)0xed61;
          func_0x00029bfc();
          puStack_c = (undefined2 *)0xed66;
          func_0x00029ae7();
          puStack_c = (undefined2 *)0xed6e;
          func_0x000297e6();
          puStack_c = (undefined2 *)0xed73;
          func_0x00029d78();
          puStack_c = (undefined2 *)0xed7b;
          func_0x00029bfc();
          puStack_c = (undefined2 *)0xed80;
          func_0x00029ae7();
          puStack_c = (undefined2 *)0xed85;
          FUN_28b3_117c();
          puStack_c = (undefined2 *)0xed8d;
          func_0x000297e6();
          puStack_c = (undefined2 *)0xed92;
          func_0x00029d78();
          puStack_c = (undefined2 *)0xed9a;
          func_0x00029bfc();
          puStack_c = (undefined2 *)0xed9f;
          func_0x00029ae7();
          puStack_c = (undefined2 *)0xeda7;
          func_0x000297e6();
          puStack_c = (undefined2 *)0xedac;
          func_0x00029d78();
          puStack_c = (undefined2 *)0xedb4;
          func_0x00029bfc();
          puStack_c = (undefined2 *)0xedb9;
          func_0x00029ae7();
          puStack_c = (undefined2 *)0xedbe;
          FUN_28b3_117c();
          puStack_c = (undefined2 *)0xedc3;
          FUN_28b3_1181();
          if ((bool)uVar6) {
            local_48 = local_58;
            local_46 = local_56;
          }
          else {
            local_48 = local_70;
            local_46 = local_6e;
          }
          puStack_c = (undefined2 *)0x0;
          puStack_e = (undefined1 *)0x22b2;
          local_10 = (undefined2 *)0xedfa;
          puVar9 = (undefined2 *)func_0x00000271();
          puVar4 = (undefined2 *)puVar9;
          puVar5 = &local_40;
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar4;
            puVar4 = puVar4 + 1;
            puVar1 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar1;
          }
          puStack_c = (undefined2 *)0x0;
          puStack_e = (undefined1 *)0xee1c;
          func_0x000297e6();
          puStack_c = (undefined2 *)0x22b2;
          puStack_e = (undefined1 *)0xee21;
          func_0x00029d78();
          local_14 = 0x22b2;
          local_16 = 0xee2b;
          func_0x000299d1();
          local_14 = 0x22b2;
          local_16 = 0xee33;
          func_0x000297e6();
          local_14 = 0x22b2;
          local_16 = 0xee38;
          func_0x00029d78();
          local_1c = 0x22b2;
          local_1e = 0xee42;
          func_0x000299d1();
          local_1c = 0;
          local_1e = 0;
          local_20 = 0x22b2;
          uStack_22 = 0xee4b;
          FUN_20a9_1260();
          puStack_c = (undefined2 *)local_4c;
          puStack_e = (undefined1 *)0x1bb4;
          local_10 = (undefined2 *)0xee59;
          local_2e = func_0x00021eee();
          puVar5 = &local_40;
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar1 = param_1;
            param_1 = param_1 + 1;
            puVar9 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar1 = *puVar9;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



/* 3ab8:42f7  FUN_3ab8_42f7  156 bytes, 0 callers */

void __cdecl16far FUN_3ab8_42f7(undefined2 *param_1,undefined2 *param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_42 [4];
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_22 [4];
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 *puStack_c;
  undefined2 uStack_a;
  
  FUN_21f2_0ebc();
  puVar5 = local_22;
  puVar4 = param_1;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = local_42;
  puVar4 = param_2;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_a = param_3;
  puStack_c = local_22;
  uStack_e = 0x22b2;
  uStack_10 = 0xeeae;
  iVar3 = FUN_3ab8_3eb5();
  if (iVar3 == 0) {
    local_1a = *(undefined2 *)0xa334;
    local_18 = *(undefined2 *)0xa336;
  }
  uStack_a = 0xeeca;
  func_0x000297e6();
  uStack_a = 0xeecf;
  func_0x00029af6();
  puStack_c = (undefined2 *)0x22b2;
  uStack_e = 0xeed9;
  func_0x00029983();
  puStack_c = local_42;
  uStack_e = 0x22b2;
  uStack_10 = 0xeee1;
  iVar3 = FUN_3ab8_3eb5();
  if (iVar3 == 0) {
    local_3a = *(undefined2 *)0xa334;
    local_38 = *(undefined2 *)0xa336;
  }
  puVar5 = local_22;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = local_42;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 3ab8:4393  FUN_3ab8_4393  1853 bytes, 0 callers */

undefined2
FUN_3ab8_4393(undefined2 param_1,undefined1 *param_2,int param_3,int param_4,int param_5,
             undefined2 param_6,undefined2 *param_7,undefined2 param_8,undefined2 param_9,
             undefined2 param_10,undefined2 param_11,undefined2 *param_12,undefined2 param_13,
             undefined2 *param_14,int *param_15,undefined2 *param_16,int *param_17,int param_18)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  int local_134;
  int local_132;
  undefined2 uStack_120;
  undefined2 *puStack_11e;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined2 uStack_114;
  undefined2 uStack_112;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined2 uStack_104;
  undefined2 uStack_102;
  undefined2 local_f4;
  undefined2 uStack_f2;
  undefined2 local_e4;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 *local_dc;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_be;
  int local_bc;
  int local_ba;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 local_98;
  undefined2 auStack_96 [20];
  undefined2 local_6e [7];
  int iStack_60;
  int iStack_5e;
  int iStack_5c;
  int iStack_5a;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  int local_1e;
  int local_1c;
  int local_1a;
  undefined2 uStack_18;
  undefined1 *puStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 *puStack_10;
  undefined2 *local_e;
  undefined2 *puStack_c;
  
  FUN_21f2_0ebc();
  *param_2 = 0;
  func_0x0000c3ca();
  puStack_c = (undefined2 *)0x885;
  local_e = (undefined2 *)0xef38;
  FUN_1000_0599();
  puStack_c = (undefined2 *)0xef43;
  func_0x00012276();
  if (param_4 < 0) {
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + (uint)bVar10);
  }
  puStack_c = (undefined2 *)0x11f2;
  local_e = (undefined2 *)0xef64;
  local_bc = param_3;
  local_ba = param_4;
  puVar13 = (undefined2 *)func_0x00000271();
  puVar8 = (undefined2 *)puVar13;
  puVar6 = &local_4e;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar2;
  }
  local_98 = 0;
  puStack_c = (undefined2 *)0xef89;
  func_0x000297e6();
  puStack_c = (undefined2 *)0xef8e;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xef98;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xefa0;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xefa5;
  func_0x00029d78();
  local_1a = 0x22b2;
  local_1c = 0xefaf;
  func_0x000299d1();
  local_1a = local_ba;
  local_1c = local_bc;
  local_1e = 0x22b2;
  uStack_20 = 0xefbc;
  FUN_20a9_1260();
  puStack_c = (undefined2 *)0x1bb4;
  local_e = (undefined2 *)0xefcc;
  local_40 = func_0x00021eee();
  puStack_c = (undefined2 *)0xefe0;
  func_0x000297e6();
  puStack_c = (undefined2 *)0xefe5;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xefef;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xeff7;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xeffc;
  func_0x00029d78();
  local_1a = 0x22b2;
  local_1c = 0xf006;
  func_0x000299d1();
  local_1a = local_ba;
  local_1c = local_bc;
  local_1e = 0x22b2;
  uStack_20 = 0xf013;
  FUN_20a9_1260();
  puStack_c = (undefined2 *)0x1bb4;
  puVar9 = (undefined2 *)0x1bb4;
  local_e = (undefined2 *)0xf021;
  local_3c = func_0x00021eee();
  puVar8 = (undefined2 *)&stack0xffd8;
  puVar6 = &local_4e;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    puVar13 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar13;
  }
  uStack_2c = 0xf041;
  iVar7 = FUN_3ab8_2a47();
  if (iVar7 == 0) goto LAB_3ab8_44c8;
  puVar6 = local_6e;
  puVar8 = &local_4e;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar13 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar13;
  }
  local_b4 = local_4e;
  local_b2 = local_4c;
  local_cc = local_4a;
  local_ca = local_48;
  if (param_5 == 0) {
    puStack_c = param_12;
    local_e = (undefined2 *)param_11;
    puStack_10 = (undefined2 *)param_10;
    puVar8 = &uStack_30;
    puVar6 = local_6e;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar13 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar13;
    }
    uStack_32 = 0x1bb4;
    uStack_34 = 0xf0a1;
    iVar7 = FUN_3ab8_38b6();
    if (iVar7 == 0) {
LAB_3ab8_44c8:
      uVar5 = FUN_3ab8_53e4();
      return uVar5;
    }
    puStack_c = local_6e;
    local_e = (undefined2 *)0x1bb4;
    puStack_10 = (undefined2 *)0xf0b8;
    iVar7 = FUN_3ab8_3eb5();
    if (iVar7 == 0) goto LAB_3ab8_44c8;
    pcVar4 = (code *)swi(0x3f);
    uStack_54 = (*pcVar4)();
    pcVar4 = (code *)swi(0x3f);
    uStack_53 = (*pcVar4)();
    uStack_52 = *(undefined1 *)0xb310;
    puVar8 = &uStack_26;
    puVar6 = local_6e;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar13 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar13;
    }
    iVar7 = FUN_13bf_01c1();
    if (iVar7 == 0) goto LAB_3ab8_44c8;
    *param_17 = *param_17 + 1;
    puStack_c = (undefined2 *)0x11f2;
    local_e = (undefined2 *)0xf10f;
    uVar14 = func_0x00000271();
    pbVar1 = (byte *)((int)uVar14 + 0x1e);
    *pbVar1 = *pbVar1 | 0x40;
    local_bc = *(int *)0x14c;
    local_ba = *(int *)0x14e;
    puStack_c = &local_e0;
    local_e = &local_c4;
    puStack_10 = (undefined2 *)*(undefined2 *)0x14e;
    uStack_12 = *(undefined2 *)0x14c;
    uStack_14 = 0;
    puStack_16 = (undefined1 *)0xf14a;
    FUN_20a9_0ca3();
    puStack_c = (undefined2 *)0xf156;
    func_0x00029834();
    puStack_c = (undefined2 *)0xf15f;
    func_0x00029983();
    puStack_c = (undefined2 *)0xf168;
    func_0x00029834();
    puStack_c = (undefined2 *)0xf170;
    func_0x00029983();
    puStack_c = (undefined2 *)0xf179;
    func_0x00029834();
    puStack_c = (undefined2 *)0xf181;
    func_0x00029983();
    puStack_c = (undefined2 *)0xf18a;
    func_0x00029834();
    puVar9 = (undefined2 *)0x22b2;
    puStack_c = (undefined2 *)0xf192;
    func_0x00029983();
    if (param_18 == 0) {
      puStack_c = &uStack_118;
      local_e = &uStack_120;
      puStack_10 = &uStack_108;
      uStack_12 = *(undefined2 *)0x14e;
      uStack_14 = *(undefined2 *)0x14c;
      puStack_16 = (undefined1 *)0x22b2;
      uStack_18 = 0xf1d0;
      FUN_20a9_0ca3();
      puStack_c = (undefined2 *)0x0;
      local_e = (undefined2 *)0x1bb4;
      puStack_10 = (undefined2 *)0xf1db;
      func_0x0000daa6();
      puStack_c = puStack_11e;
      local_e = (undefined2 *)uStack_120;
      puStack_10 = (undefined2 *)uStack_102;
      uStack_12 = uStack_104;
      uStack_14 = uStack_106;
      puStack_16 = (undefined1 *)uStack_108;
      uStack_18 = 0x885;
      puVar9 = (undefined2 *)0x1bb4;
      local_1a = -0xdff;
      iVar7 = FUN_1def_1208();
      if (iVar7 != 0) {
        *param_15 = *param_15 + 1;
        puVar9 = (undefined2 *)0x0;
        puStack_c = (undefined2 *)0xf216;
        uVar14 = func_0x000003ef();
        pbVar1 = (byte *)((int)uVar14 + 10);
        *pbVar1 = *pbVar1 | 0x40;
      }
      if ((iStack_60 != iStack_5c) || (iStack_5e != iStack_5a)) {
        puStack_c = (undefined2 *)0xf3ad;
        func_0x0000daa6();
        puStack_10 = (undefined2 *)uStack_112;
        uStack_12 = uStack_114;
        uStack_14 = uStack_116;
        puStack_16 = (undefined1 *)uStack_118;
        uStack_18 = 0x885;
        puVar9 = (undefined2 *)0x1bb4;
        local_1a = -0xc2d;
        iVar7 = FUN_1def_1208();
        if (iVar7 != 0) {
          *param_15 = *param_15 + 1;
          puVar9 = (undefined2 *)0x0;
          puStack_c = (undefined2 *)0xf3eb;
          uVar14 = func_0x000003ef();
          pbVar1 = (byte *)((int)uVar14 + 10);
          *pbVar1 = *pbVar1 | 0x40;
        }
      }
    }
    else {
      puStack_c = (undefined2 *)*(undefined2 *)0x14c;
      pcVar4 = (code *)swi(0x3f);
      uVar5 = (*pcVar4)();
      *param_14 = uVar5;
    }
  }
  local_e = (undefined2 *)0xf23c;
  puStack_c = puVar9;
  puVar13 = (undefined2 *)func_0x00000271();
  puVar8 = (undefined2 *)puVar13;
  puVar6 = local_6e;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar3 = *puVar2;
  }
  puStack_c = (undefined2 *)0x0;
  local_e = (undefined2 *)0xf25b;
  uVar14 = func_0x00000271();
  *(undefined2 *)((int)uVar14 + 0xc) = 10000;
  puStack_c = &local_e0;
  local_e = &local_c4;
  puStack_10 = (undefined2 *)0x0;
  uStack_12 = 0;
  uStack_14 = 0;
  puStack_16 = (undefined1 *)0xf284;
  FUN_20a9_0ca3();
  if ((local_1e == local_134) && (local_1c == local_132)) {
    puStack_c = local_dc;
    local_e = (undefined2 *)local_de;
    puStack_10 = (undefined2 *)local_e0;
    uStack_12 = local_be;
    uStack_14 = local_c0;
    puStack_16 = (undefined1 *)local_c2;
    uStack_18 = local_c4;
    local_1a = 0x1bb4;
    local_1c = 0xf2c5;
    func_0x000297e6();
    uStack_22 = 0x22b2;
    uStack_24 = 0xf2cf;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xf2d8;
    func_0x000297e6();
    uStack_2c = 0xf2e2;
    func_0x000299d1();
    uStack_2c = 0xf2e7;
    FUN_1def_043a();
    puStack_c = (undefined2 *)*(undefined2 *)0xa33c;
    local_e = (undefined2 *)*(undefined2 *)0xa33a;
    puStack_10 = (undefined2 *)*(undefined2 *)0xa338;
    uStack_12 = *(undefined2 *)0xa29a;
    uStack_14 = *(undefined2 *)0xa298;
    puStack_16 = (undefined1 *)*(undefined2 *)0xa296;
    uStack_18 = *(undefined2 *)0xa294;
    local_1a = 0;
    local_1c = 0x1bb4;
    local_1e = 0xf312;
    puVar6 = (undefined2 *)FUN_1def_05d1();
    local_e4 = *puVar6;
    local_e2 = puVar6[1];
    puStack_c = (undefined2 *)*(undefined2 *)0xa33c;
    local_e = (undefined2 *)*(undefined2 *)0xa33a;
    puStack_10 = (undefined2 *)*(undefined2 *)0xa338;
    uStack_12 = *(undefined2 *)0xa29a;
    uStack_14 = *(undefined2 *)0xa298;
    puStack_16 = (undefined1 *)*(undefined2 *)0xa296;
    uStack_18 = *(undefined2 *)0xa294;
    local_1a = 0;
    local_1c = 0x1bb4;
    local_1e = -0xcb4;
    func_0x0001e558();
    puStack_c = (undefined2 *)0xf356;
    func_0x000297e6();
    puStack_c = (undefined2 *)0xf35f;
    func_0x0002996b();
    puStack_c = (undefined2 *)0xf364;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xf36e;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xf377;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xf37c;
    func_0x00029d78();
    local_1a = 0x22b2;
    local_1c = 0xf386;
    func_0x000299d1();
    local_1a = 0x22b2;
    local_1c = 0xf38f;
    func_0x000297e6();
    uStack_22 = 0x22b2;
    uStack_24 = 0xf399;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xf3a2;
    func_0x000297e6();
  }
  else {
    puStack_c = (undefined2 *)0xf401;
    func_0x00029834();
    puStack_c = (undefined2 *)0xf40a;
    func_0x00029bfc();
    puStack_c = (undefined2 *)0xf413;
    func_0x00029c2c();
    puStack_c = (undefined2 *)0xf41c;
    func_0x00029c74();
    puStack_c = (undefined2 *)0xf425;
    func_0x0002996b();
    puStack_c = (undefined2 *)0xf42e;
    func_0x00029983();
    puStack_c = local_dc;
    local_e = (undefined2 *)local_de;
    puStack_10 = (undefined2 *)local_e0;
    uStack_12 = local_be;
    uStack_14 = local_c0;
    puStack_16 = (undefined1 *)local_c2;
    uStack_18 = local_c4;
    local_1a = 0x22b2;
    local_1c = 0xf457;
    func_0x000297e6();
    local_1a = 0x22b2;
    local_1c = 0xf45c;
    func_0x00029d78();
    uStack_22 = 0x22b2;
    uStack_24 = 0xf466;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xf46f;
    func_0x00029834();
    uStack_22 = 0x22b2;
    uStack_24 = 0xf478;
    func_0x00029bfc();
    uStack_22 = 0x22b2;
    uStack_24 = 0xf481;
    func_0x00029c2c();
    uStack_22 = 0x22b2;
    uStack_24 = 0xf48a;
    func_0x00029c74();
    uStack_22 = 0x22b2;
    uStack_24 = 0xf493;
    func_0x0002996b();
    uStack_22 = 0x22b2;
    uStack_24 = 0xf498;
    func_0x00029d78();
  }
  uStack_2c = 0xf4a2;
  func_0x000299d1();
  uStack_2c = 0xf4a7;
  FUN_1def_043a();
  puStack_c = (undefined2 *)0xf4b3;
  func_0x000297e6();
  puStack_c = (undefined2 *)0xf4b8;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf4c2;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf4cb;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf4d0;
  func_0x00029d78();
  local_1a = 0x22b2;
  local_1c = 0xf4da;
  func_0x000299d1();
  local_1a = 1;
  local_1c = 0x22b2;
  local_1e = 0xf4e3;
  func_0x0001e558();
  puStack_c = (undefined2 *)0xf4ed;
  func_0x000297e6();
  puStack_c = (undefined2 *)0xf4f5;
  func_0x00029bb5();
  puStack_c = (undefined2 *)0xf4fe;
  func_0x00029983();
  puStack_c = (undefined2 *)0xf507;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf511;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf51a;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf51f;
  func_0x00029d78();
  local_1a = 0x22b2;
  local_1c = 0xf529;
  func_0x000299d1();
  local_1a = 0;
  local_1c = 0x22b2;
  local_1e = 0xf531;
  FUN_1def_05d1();
  puStack_c = (undefined2 *)0xf53b;
  func_0x000297e6();
  puStack_c = (undefined2 *)0xf540;
  func_0x00029d78();
  puStack_c = (undefined2 *)0xf549;
  func_0x000299d1();
  puStack_c = (undefined2 *)0xf552;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf55c;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf565;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf56a;
  func_0x00029d78();
  local_1a = 0x22b2;
  local_1c = 0xf574;
  func_0x000299d1();
  local_1a = 0;
  local_1c = 0x22b2;
  local_1e = 0xf57c;
  func_0x0001e558();
  puStack_c = (undefined2 *)0xf586;
  func_0x000297e6();
  puStack_c = (undefined2 *)0xf58b;
  func_0x00029d78();
  puStack_c = (undefined2 *)0xf594;
  func_0x000299d1();
  puStack_c = (undefined2 *)0xf59d;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf5a7;
  func_0x000299d1();
  uStack_12 = *(undefined2 *)0xa29a;
  uStack_14 = *(undefined2 *)0xa298;
  puStack_16 = (undefined1 *)*(undefined2 *)0xa296;
  uStack_18 = *(undefined2 *)0xa294;
  local_1a = 0;
  local_1c = 0x22b2;
  local_1e = 0xf5bf;
  FUN_1def_05d1();
  puStack_c = (undefined2 *)0xf5c9;
  func_0x000297e6();
  puStack_c = (undefined2 *)0xf5ce;
  func_0x00029d78();
  puStack_c = (undefined2 *)0xf5d7;
  func_0x000299d1();
  puStack_c = (undefined2 *)0xf5e0;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf5ea;
  func_0x000299d1();
  uStack_12 = *(undefined2 *)0xa29a;
  uStack_14 = *(undefined2 *)0xa298;
  puStack_16 = (undefined1 *)*(undefined2 *)0xa296;
  uStack_18 = *(undefined2 *)0xa294;
  local_1a = 0;
  local_1c = 0x22b2;
  local_1e = 0xf602;
  func_0x0001e558();
  puStack_c = (undefined2 *)0xf60c;
  func_0x000297e6();
  puStack_c = (undefined2 *)0xf611;
  func_0x00029d78();
  puStack_c = (undefined2 *)0xf61a;
  func_0x000299d1();
  puStack_c = (undefined2 *)0xf623;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf62c;
  func_0x00029983();
  puStack_c = (undefined2 *)0xf635;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf63e;
  func_0x00029983();
  puStack_c = (undefined2 *)0xf65c;
  func_0x00029da5();
  puStack_c = (undefined2 *)0xf665;
  func_0x00029b6d();
  puStack_c = (undefined2 *)0xf66e;
  func_0x00029983();
  puStack_c = (undefined2 *)&stack0xffd6;
  puVar8 = &uStack_2c;
  puVar6 = local_6e;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    puVar13 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar13;
  }
  uStack_30 = 0xf68b;
  puVar6 = (undefined2 *)func_0x0001fcff();
  local_e = (undefined2 *)*puVar6;
  puStack_c = (undefined2 *)0xf6a2;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf6aa;
  FUN_28b3_100d();
  puStack_c = (undefined2 *)0xf6b3;
  func_0x000299b9();
  puStack_c = (undefined2 *)0xf6bb;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf6c4;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf6cc;
  FUN_28b3_100d();
  puStack_c = (undefined2 *)0xf6d5;
  func_0x000299b9();
  puStack_c = (undefined2 *)0xf6de;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf6e3;
  FUN_28b3_117c();
  puStack_c = (undefined2 *)0xf6e8;
  func_0x00029d78();
  puStack_c = (undefined2 *)0xf6f1;
  func_0x000299b9();
  puStack_c = (undefined2 *)0xf6f9;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf702;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf70a;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf713;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf71c;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf721;
  FUN_28b3_1163();
  puStack_c = (undefined2 *)0xf72a;
  func_0x00029b6d();
  puStack_c = (undefined2 *)0xf72f;
  func_0x00029d78();
  puStack_c = (undefined2 *)0xf738;
  func_0x000299b9();
  puStack_c = (undefined2 *)0xf741;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf746;
  FUN_28b3_1163();
  puStack_c = (undefined2 *)0xf74e;
  func_0x00029bb5();
  puStack_c = (undefined2 *)0xf757;
  func_0x00029983();
  puStack_c = (undefined2 *)0xf760;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf768;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf771;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf77a;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf77f;
  FUN_28b3_117c();
  puStack_c = (undefined2 *)0xf787;
  func_0x00029bb5();
  puStack_c = (undefined2 *)0xf790;
  func_0x00029983();
  puStack_c = (undefined2 *)0xf799;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf7a1;
  FUN_28b3_100d();
  puStack_c = (undefined2 *)0xf7aa;
  func_0x000299b9();
  puStack_c = (undefined2 *)0xf7b3;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf7bc;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf7c4;
  FUN_28b3_100d();
  puStack_c = (undefined2 *)0xf7cd;
  func_0x000299b9();
  puStack_c = (undefined2 *)0xf7d5;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf7da;
  FUN_28b3_117c();
  puStack_c = (undefined2 *)0xf7e3;
  func_0x0002996b();
  puStack_c = (undefined2 *)0xf7eb;
  func_0x00029983();
  puStack_c = (undefined2 *)0xf7f4;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf7fc;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf805;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf80e;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf813;
  FUN_28b3_1163();
  puStack_c = (undefined2 *)0xf81c;
  func_0x00029b6d();
  puStack_c = (undefined2 *)0xf825;
  func_0x0002996b();
  puStack_c = (undefined2 *)0xf82d;
  func_0x00029983();
  puStack_c = (undefined2 *)0xf836;
  func_0x000297e6();
  puStack_c = (undefined2 *)0xf83b;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf845;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf84e;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf853;
  func_0x00029d78();
  local_1a = 0x22b2;
  local_1c = 0xf85d;
  func_0x000299d1();
  local_1a = 0x22b2;
  local_1c = 0xf866;
  func_0x000297e6();
  local_1a = 0x22b2;
  local_1c = 0xf86b;
  func_0x00029d78();
  local_1a = 0x22b2;
  local_1c = 0xf873;
  func_0x00029c2c();
  local_1a = 0x22b2;
  local_1c = 0xf87c;
  func_0x000297e6();
  local_1a = 0x22b2;
  local_1c = 0xf881;
  func_0x00029d78();
  local_1a = 0x22b2;
  local_1c = 0xf88a;
  func_0x00029c2c();
  local_1a = 0x22b2;
  local_1c = 0xf88f;
  FUN_28b3_117c();
  local_1a = 0x22b2;
  local_1c = 0xf897;
  func_0x00029bb5();
  local_1a = 0x22b2;
  local_1c = 0xf8a0;
  func_0x0002996b();
  local_1a = 0x22b2;
  local_1c = 0xf8a5;
  func_0x00029d78();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf8af;
  func_0x000299d1();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf8b8;
  func_0x000297e6();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf8bd;
  func_0x00029d78();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf8c5;
  func_0x00029c2c();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf8ce;
  func_0x000297e6();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf8d3;
  func_0x00029d78();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf8dc;
  func_0x00029c2c();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf8e1;
  FUN_28b3_1163();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf8e9;
  func_0x00029bb5();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf8f2;
  func_0x0002996b();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf8f7;
  func_0x00029d78();
  uStack_2c = 0xf901;
  func_0x000299d1();
  uStack_2c = 0xf906;
  FUN_1def_043a();
  puStack_c = (undefined2 *)0xf912;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf91b;
  func_0x000299b9();
  puStack_c = (undefined2 *)0xf924;
  func_0x00029c2c();
  puStack_c = (undefined2 *)0xf92d;
  func_0x0002996b();
  puStack_c = (undefined2 *)0xf936;
  func_0x00029983();
  puStack_c = (undefined2 *)*(undefined2 *)0xa298;
  local_e = (undefined2 *)*(undefined2 *)0xa296;
  puStack_10 = (undefined2 *)*(undefined2 *)0xa294;
  uStack_12 = 0x22b2;
  uStack_14 = 0xf94f;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf954;
  func_0x00029d78();
  local_1a = 0x22b2;
  local_1c = 0xf95e;
  func_0x000299d1();
  local_1a = 0;
  local_1c = 0x22b2;
  local_1e = 0xf966;
  puVar6 = (undefined2 *)FUN_1def_05d1();
  local_e4 = *puVar6;
  local_e2 = puVar6[1];
  puStack_c = (undefined2 *)*(undefined2 *)0xa298;
  local_e = (undefined2 *)*(undefined2 *)0xa296;
  puStack_10 = (undefined2 *)*(undefined2 *)0xa294;
  uStack_12 = 0x1bb4;
  uStack_14 = 0xf991;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf996;
  func_0x00029d78();
  local_1a = 0x22b2;
  local_1c = 0xf9a0;
  func_0x000299d1();
  local_1a = 0;
  local_1c = 0x22b2;
  local_1e = 0xf9a8;
  puVar6 = (undefined2 *)func_0x0001e558();
  local_f4 = *puVar6;
  uStack_f2 = puVar6[1];
  *(undefined2 *)0xb30c = local_e4;
  *(undefined2 *)0xb30e = local_e2;
  *(undefined2 *)0xb37e = local_f4;
  *(undefined2 *)0xb380 = uStack_f2;
  puStack_c = (undefined2 *)0xf9e1;
  func_0x00029834();
  puStack_c = (undefined2 *)0xf9ea;
  func_0x00029983();
  puStack_c = (undefined2 *)*(undefined2 *)0x1124;
  local_e = (undefined2 *)uStack_9a;
  puStack_10 = (undefined2 *)uStack_9c;
  uStack_12 = uStack_9e;
  uStack_14 = uStack_a0;
  puStack_16 = param_2;
  uStack_18 = 0;
  pcVar4 = (code *)swi(0x3f);
  iVar7 = (*pcVar4)();
  if (iVar7 != 0) {
    *param_16 = 1;
  }
  if (param_5 != 0) {
    return 1;
  }
  puVar8 = auStack_96;
  puVar6 = &local_4e;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    puVar13 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar13;
  }
  puStack_c = param_7;
  local_e = (undefined2 *)param_6;
  puVar8 = (undefined2 *)&stack0xffd2;
  puVar6 = auStack_96;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    puVar13 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar13;
  }
  uStack_30 = 0x22b2;
  uStack_32 = 0xfa55;
  iVar7 = FUN_3ab8_38b6();
  if (iVar7 != 0) {
    puStack_c = (undefined2 *)0x22b2;
    local_e = (undefined2 *)0xfa6d;
    iVar7 = FUN_3ab8_3eb5();
    if (iVar7 != 0) {
      puStack_c = (undefined2 *)0xfac0;
      puVar13 = (undefined2 *)func_0x00000271();
      puVar8 = (undefined2 *)puVar13;
      puVar6 = auStack_96;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar3 = *puVar2;
      }
      puStack_c = (undefined2 *)0x0;
      local_e = (undefined2 *)0x0;
      puStack_10 = (undefined2 *)0x0;
      uStack_12 = 0xfaf4;
      FUN_20a9_0ca3();
      goto LAB_3ab8_4f77;
    }
  }
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299b9();
  func_0x000299d1();
  func_0x000297e6();
  func_0x000299d1();
  func_0x000297e6();
  func_0x000299d1();
LAB_3ab8_4f77:
  func_0x000297e6();
  func_0x00029b85();
  func_0x00029983();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  FUN_28b3_1163();
  func_0x0002996b();
  func_0x00029b6d();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  FUN_28b3_1163();
  func_0x0002996b();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x00029d78();
  local_e = (undefined2 *)0x22b2;
  puStack_10 = (undefined2 *)0xfb80;
  func_0x000299d1();
  local_e = (undefined2 *)0x22b2;
  puStack_10 = (undefined2 *)0xfb85;
  FUN_28b3_1582();
  func_0x00029834();
  func_0x00029983();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x00029d78();
  local_e = (undefined2 *)0x22b2;
  puStack_10 = (undefined2 *)0xfc1c;
  func_0x000299d1();
  local_e = (undefined2 *)0x22b2;
  puStack_10 = (undefined2 *)0xfc21;
  FUN_28b3_1582();
  uVar11 = (undefined1 *)0xfff7 < &puStack_c;
  uVar12 = &stack0x0000 == (undefined1 *)0x4;
  func_0x00029834();
  func_0x0002996b();
  FUN_28b3_1181();
  if ((bool)uVar11 || (bool)uVar12) {
    func_0x000297e6();
    func_0x00029b55();
  }
  else {
    func_0x000297e6();
    func_0x00029bb5();
  }
  func_0x00029983();
  func_0x000297e6();
  func_0x00029d78();
  local_e = (undefined2 *)0x22b2;
  puStack_10 = (undefined2 *)0xfc83;
  func_0x000299d1();
  local_e = (undefined2 *)0x22b2;
  puStack_10 = (undefined2 *)0xfc8c;
  func_0x000297e6();
  local_e = (undefined2 *)0x22b2;
  puStack_10 = (undefined2 *)0xfc91;
  func_0x00029d78();
  puStack_16 = (undefined1 *)0x22b2;
  uStack_18 = 0xfc9b;
  func_0x000299d1();
  puStack_16 = (undefined1 *)0x22b2;
  uStack_18 = 0xfca3;
  func_0x000297e6();
  puStack_16 = (undefined1 *)0x22b2;
  uStack_18 = 0xfca8;
  func_0x00029d78();
  local_1e = 0x22b2;
  uStack_20 = 0xfcb2;
  func_0x000299d1();
  local_1e = 0x22b2;
  uStack_20 = 0xfcba;
  func_0x000297e6();
  local_1e = 0x22b2;
  uStack_20 = 0xfcbf;
  func_0x00029d78();
  uStack_26 = 0x22b2;
  func_0x000299d1();
  uStack_26 = 0x22b2;
  FUN_1def_043a();
  puStack_c = (undefined2 *)*(undefined2 *)0xa294;
  local_e = (undefined2 *)0x1bb4;
  puStack_10 = (undefined2 *)0xfcea;
  func_0x000297e6();
  local_e = (undefined2 *)0x22b2;
  puStack_10 = (undefined2 *)0xfcef;
  func_0x00029d78();
  puStack_16 = (undefined1 *)0x22b2;
  uStack_18 = 0xfcf9;
  func_0x000299d1();
  puStack_16 = (undefined1 *)*(undefined2 *)0xa29a;
  uStack_18 = *(undefined2 *)0xa298;
  local_1a = *(undefined2 *)0xa296;
  local_1c = *(undefined2 *)0xa294;
  local_1e = 0x22b2;
  uStack_20 = 0xfd12;
  func_0x000297e6();
  local_1e = 0x22b2;
  uStack_20 = 0xfd17;
  func_0x00029d78();
  uStack_26 = 0x22b2;
  func_0x000299d1();
  pcVar4 = (code *)swi(0x3f);
  (*pcVar4)();
  if ((iStack_60 != iStack_5c) || (iStack_5e != iStack_5a)) {
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1163();
    func_0x0002996b();
    func_0x00029b6d();
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1163();
    func_0x0002996b();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029d78();
    puStack_c = (undefined2 *)0xfdb2;
    func_0x000299d1();
    puStack_c = (undefined2 *)0xfdb7;
    FUN_28b3_1582();
    func_0x00029834();
    func_0x00029983();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029d78();
    puStack_c = (undefined2 *)0xfe4d;
    func_0x000299d1();
    puStack_c = (undefined2 *)0xfe52;
    FUN_28b3_1582();
    uVar11 = (undefined1 *)0xfff7 < &stack0xfff8;
    uVar12 = &stack0x0000 == (undefined1 *)0x0;
    func_0x00029834();
    func_0x0002996b();
    FUN_28b3_1181();
    if ((bool)uVar11 || (bool)uVar12) {
      func_0x000297e6();
      func_0x00029b55();
    }
    else {
      func_0x000297e6();
      func_0x00029bb5();
    }
    func_0x00029983();
    func_0x000297e6();
    func_0x00029d78();
    puStack_c = (undefined2 *)0xfeb4;
    func_0x000299d1();
    puStack_c = (undefined2 *)0xfebc;
    func_0x000297e6();
    puStack_c = (undefined2 *)0xfec1;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfecb;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfed3;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfed8;
    func_0x00029d78();
    local_1a = 0x22b2;
    local_1c = 0xfee2;
    func_0x000299d1();
    local_1a = 0x22b2;
    local_1c = 0xfeea;
    func_0x000297e6();
    local_1a = 0x22b2;
    local_1c = 0xfeef;
    func_0x00029d78();
    uStack_22 = 0x22b2;
    uStack_24 = 0xfef9;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xfefe;
    FUN_1def_043a();
    puStack_c = (undefined2 *)0xff1a;
    func_0x000297e6();
    puStack_c = (undefined2 *)0xff1f;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xff29;
    func_0x000299d1();
    uStack_12 = *(undefined2 *)0xa29a;
    uStack_14 = *(undefined2 *)0xa298;
    puStack_16 = (undefined1 *)*(undefined2 *)0xa296;
    uStack_18 = *(undefined2 *)0xa294;
    local_1a = 0x22b2;
    local_1c = 0xff42;
    func_0x000297e6();
    local_1a = 0x22b2;
    local_1c = 0xff47;
    func_0x00029d78();
    uStack_22 = 0x22b2;
    uStack_24 = 0xff51;
    func_0x000299d1();
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
  }
  return 1;
}



/* 3ab8:4c91  FUN_3ab8_4c91  505 bytes, 1 callers */

undefined2 FUN_3ab8_4c91(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  undefined2 *puVar5;
  int iVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
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
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  int iStack_2;
  
  iStack_2 = 0x3ab8;
  uStack_4 = 0xf81c;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf825;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf82d;
  func_0x00029983();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf836;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf83b;
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xf845;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xf84e;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xf853;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf85d;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf866;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf86b;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf873;
  func_0x00029c2c();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf87c;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf881;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf88a;
  func_0x00029c2c();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf88f;
  FUN_28b3_117c();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf897;
  func_0x00029bb5();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf8a0;
  func_0x0002996b();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf8a5;
  func_0x00029d78();
  uStack_1a = 0x22b2;
  uStack_1c = 0xf8af;
  func_0x000299d1();
  uStack_1a = 0x22b2;
  uStack_1c = 0xf8b8;
  func_0x000297e6();
  uStack_1a = 0x22b2;
  uStack_1c = 0xf8bd;
  func_0x00029d78();
  uStack_1a = 0x22b2;
  uStack_1c = 0xf8c5;
  func_0x00029c2c();
  uStack_1a = 0x22b2;
  uStack_1c = 0xf8ce;
  func_0x000297e6();
  uStack_1a = 0x22b2;
  uStack_1c = 0xf8d3;
  func_0x00029d78();
  uStack_1a = 0x22b2;
  uStack_1c = 0xf8dc;
  func_0x00029c2c();
  uStack_1a = 0x22b2;
  uStack_1c = 0xf8e1;
  FUN_28b3_1163();
  uStack_1a = 0x22b2;
  uStack_1c = 0xf8e9;
  func_0x00029bb5();
  uStack_1a = 0x22b2;
  uStack_1c = 0xf8f2;
  func_0x0002996b();
  uStack_1a = 0x22b2;
  uStack_1c = 0xf8f7;
  func_0x00029d78();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf901;
  func_0x000299d1();
  uStack_22 = 0x22b2;
  uStack_24 = 0xf906;
  FUN_1def_043a();
  iStack_2 = 0x1bb4;
  uStack_4 = 0xf912;
  func_0x00029834();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf91b;
  func_0x000299b9();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf924;
  func_0x00029c2c();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf92d;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf936;
  func_0x00029983();
  iStack_2 = *(undefined2 *)0xa29a;
  uStack_4 = *(undefined2 *)0xa298;
  uStack_6 = *(undefined2 *)0xa296;
  uStack_8 = *(undefined2 *)0xa294;
  uStack_a = 0x22b2;
  uStack_c = 0xf94f;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xf954;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf95e;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf966;
  puVar5 = (undefined2 *)FUN_1def_05d1();
  uVar8 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0xe2) = *puVar5;
  *(undefined2 *)(unaff_BP + -0xe0) = uVar8;
  iStack_2 = *(undefined2 *)0xa29a;
  uStack_4 = *(undefined2 *)0xa298;
  uStack_6 = *(undefined2 *)0xa296;
  uStack_8 = *(undefined2 *)0xa294;
  uStack_a = 0x1bb4;
  uStack_c = 0xf991;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xf996;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf9a0;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf9a8;
  puVar5 = (undefined2 *)func_0x0001e558();
  uVar8 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0xf2) = *puVar5;
  *(undefined2 *)(unaff_BP + -0xf0) = uVar8;
  uVar8 = *(undefined2 *)(unaff_BP + -0xe0);
  *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0xe2);
  *(undefined2 *)0xb30e = uVar8;
  uVar8 = *(undefined2 *)(unaff_BP + -0xf0);
  *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -0xf2);
  *(undefined2 *)0xb380 = uVar8;
  iStack_2 = 0x1bb4;
  uStack_4 = 0xf9e1;
  func_0x00029834();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf9ea;
  func_0x00029983();
  iStack_2 = 1;
  uStack_4 = *(undefined2 *)0x1124;
  uStack_6 = *(undefined2 *)(unaff_BP + -0x98);
  uStack_8 = *(undefined2 *)(unaff_BP + -0x9a);
  uStack_a = *(undefined2 *)(unaff_BP + -0x9c);
  uStack_c = *(undefined2 *)(unaff_BP + -0x9e);
  uStack_e = *(undefined2 *)(unaff_BP + 6);
  uStack_10 = 0;
  pcVar4 = (code *)swi(0x3f);
  iVar6 = (*pcVar4)();
  if (iVar6 != 0) {
    *(undefined2 *)*(undefined2 *)(unaff_BP + 0x22) = 1;
  }
  if (*(int *)(unaff_BP + 0xc) != 0) {
    return 1;
  }
  puVar7 = (undefined2 *)(unaff_BP + -0x94);
  puVar5 = (undefined2 *)(unaff_BP + -0x4c);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  param_1 = unaff_BP + -0x10a;
  iStack_2 = *(int *)(unaff_BP + 0x12);
  uStack_4 = *(undefined2 *)(unaff_BP + 0x10);
  uStack_6 = *(undefined2 *)(unaff_BP + 0xe);
  puVar7 = &uStack_26;
  puVar5 = (undefined2 *)(unaff_BP + -0x94);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  iVar6 = FUN_3ab8_38b6();
  if (iVar6 != 0) {
    param_1 = *(undefined2 *)(unaff_BP + -0x108);
    iStack_2 = unaff_BP + -0x94;
    uStack_4 = 0x22b2;
    uStack_6 = 0xfa6d;
    iVar6 = FUN_3ab8_3eb5();
    if (iVar6 != 0) {
      param_1 = 0;
      iStack_2 = 0x22b2;
      uStack_4 = 0xfac0;
      uVar11 = func_0x00000271();
      *(undefined2 *)(unaff_BP + -0x162) = (int)uVar11;
      *(undefined2 *)(unaff_BP + -0x160) = (int)((ulong)uVar11 >> 0x10);
      puVar5 = (undefined2 *)(unaff_BP + -0x94);
      puVar1 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x162);
      puVar7 = (undefined2 *)puVar1;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar3 = puVar7;
        puVar7 = puVar7 + 1;
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar3 = *puVar2;
      }
      param_1 = unaff_BP + -0xd6;
      iStack_2 = unaff_BP + -0xc2;
      uStack_4 = 0;
      uStack_6 = 0;
      uStack_8 = 0;
      uVar8 = 0x1bb4;
      uStack_a = 0xfaf4;
      FUN_20a9_0ca3();
      goto LAB_3ab8_4f77;
    }
  }
  param_1 = 0x22b2;
  func_0x000297e6();
  param_1 = 0x22b2;
  func_0x00029d78();
  param_1 = 0x22b2;
  func_0x000299b9();
  param_1 = 0x22b2;
  func_0x000299d1();
  param_1 = 0x22b2;
  func_0x000297e6();
  param_1 = 0x22b2;
  func_0x000299d1();
  param_1 = 0x22b2;
  func_0x000297e6();
  param_1 = 0x22b2;
  uVar8 = 0x22b2;
  func_0x000299d1();
LAB_3ab8_4f77:
  param_1 = uVar8;
  func_0x000297e6();
  param_1 = 0x22b2;
  func_0x00029b85();
  param_1 = 0x22b2;
  func_0x00029983();
  param_1 = 0x22b2;
  func_0x00029834();
  param_1 = 0x22b2;
  func_0x000297e6();
  param_1 = 0x22b2;
  func_0x00029d78();
  param_1 = 0x22b2;
  FUN_28b3_1163();
  param_1 = 0x22b2;
  func_0x0002996b();
  param_1 = 0x22b2;
  func_0x00029b6d();
  param_1 = 0x22b2;
  func_0x00029834();
  param_1 = 0x22b2;
  func_0x000297e6();
  param_1 = 0x22b2;
  func_0x00029d78();
  param_1 = 0x22b2;
  FUN_28b3_1163();
  param_1 = 0x22b2;
  func_0x0002996b();
  param_1 = 0x22b2;
  func_0x00029b6d();
  param_1 = 0x22b2;
  FUN_28b3_117c();
  param_1 = 0x22b2;
  func_0x00029d78();
  uStack_6 = 0x22b2;
  uStack_8 = 0xfb80;
  func_0x000299d1();
  uStack_6 = 0x22b2;
  uStack_8 = 0xfb85;
  FUN_28b3_1582();
  param_1 = 0x22b2;
  func_0x00029834();
  param_1 = 0x22b2;
  func_0x00029983();
  param_1 = 0x22b2;
  func_0x000297e6();
  param_1 = 0x22b2;
  FUN_28b3_100d();
  param_1 = 0x22b2;
  func_0x0002996b();
  param_1 = 0x22b2;
  FUN_28b3_0ee9();
  param_1 = 0x22b2;
  func_0x000297e6();
  param_1 = 0x22b2;
  FUN_28b3_100d();
  param_1 = 0x22b2;
  func_0x0002996b();
  param_1 = 0x22b2;
  FUN_28b3_0ee9();
  param_1 = 0x22b2;
  func_0x000297e6();
  param_1 = 0x22b2;
  func_0x000297e6();
  param_1 = 0x22b2;
  func_0x00029b6d();
  param_1 = 0x22b2;
  func_0x000297e6();
  param_1 = 0x22b2;
  func_0x00029b6d();
  param_1 = 0x22b2;
  FUN_28b3_117c();
  param_1 = 0x22b2;
  func_0x00029d78();
  uStack_6 = 0x22b2;
  uStack_8 = 0xfc1c;
  func_0x000299d1();
  uStack_6 = 0x22b2;
  uStack_8 = 0xfc21;
  FUN_28b3_1582();
  uVar9 = (undefined1 *)0xfff7 < &uStack_4;
  uVar10 = &stack0x0000 == (undefined1 *)0xfffc;
  param_1 = 0x22b2;
  func_0x00029834();
  param_1 = 0x22b2;
  func_0x0002996b();
  param_1 = 0x22b2;
  FUN_28b3_1181();
  if ((bool)uVar9 || (bool)uVar10) {
    param_1 = 0x22b2;
    func_0x000297e6();
    param_1 = unaff_BP + -0x17a;
    iStack_2 = -0x39a;
    func_0x00029b55();
  }
  else {
    param_1 = 0x22b2;
    func_0x000297e6();
    param_1 = 0x22b2;
    func_0x00029bb5();
  }
  param_1 = 0x22b2;
  func_0x00029983();
  param_1 = 0x22b2;
  func_0x000297e6();
  param_1 = 0x22b2;
  func_0x00029d78();
  uStack_6 = 0x22b2;
  uStack_8 = 0xfc83;
  func_0x000299d1();
  uStack_6 = 0x22b2;
  uStack_8 = 0xfc8c;
  func_0x000297e6();
  uStack_6 = 0x22b2;
  uStack_8 = 0xfc91;
  func_0x00029d78();
  uStack_e = 0x22b2;
  uStack_10 = 0xfc9b;
  func_0x000299d1();
  uStack_e = 0x22b2;
  uStack_10 = 0xfca3;
  func_0x000297e6();
  uStack_e = 0x22b2;
  uStack_10 = 0xfca8;
  func_0x00029d78();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfcb2;
  func_0x000299d1();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfcba;
  func_0x000297e6();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfcbf;
  func_0x00029d78();
  uStack_1e = 0x22b2;
  uStack_20 = 0xfcc9;
  func_0x000299d1();
  uStack_1e = 0x22b2;
  uStack_20 = 0xfcce;
  FUN_1def_043a();
  param_1 = *(undefined2 *)0xa29a;
  iStack_2 = *(undefined2 *)0xa296;
  uStack_4 = *(undefined2 *)0xa294;
  uStack_6 = 0x1bb4;
  uStack_8 = 0xfcea;
  func_0x000297e6();
  uStack_6 = 0x22b2;
  uStack_8 = 0xfcef;
  func_0x00029d78();
  uStack_e = 0x22b2;
  uStack_10 = 0xfcf9;
  func_0x000299d1();
  uStack_e = *(undefined2 *)0xa29a;
  uStack_10 = *(undefined2 *)0xa298;
  uStack_12 = *(undefined2 *)0xa296;
  uStack_14 = *(undefined2 *)0xa294;
  uStack_16 = 0x22b2;
  uStack_18 = 0xfd12;
  func_0x000297e6();
  uStack_16 = 0x22b2;
  uStack_18 = 0xfd17;
  func_0x00029d78();
  uStack_1e = 0x22b2;
  uStack_20 = 0xfd21;
  func_0x000299d1();
  pcVar4 = (code *)swi(0x3f);
  iVar6 = (*pcVar4)();
  if (iVar6 != 0) {
    *(int *)(unaff_BP + 0x1e) = *(int *)(unaff_BP + 0x1e) + 2;
  }
  if ((*(int *)(unaff_BP + -0x5e) != *(int *)(unaff_BP + -0x5a)) ||
     (*(int *)(unaff_BP + -0x5c) != *(int *)(unaff_BP + -0x58))) {
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1163();
    func_0x0002996b();
    func_0x00029b6d();
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1163();
    func_0x0002996b();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029d78();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfdb2;
    func_0x000299d1();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfdb7;
    FUN_28b3_1582();
    func_0x00029834();
    func_0x00029983();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029d78();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfe4d;
    func_0x000299d1();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfe52;
    FUN_28b3_1582();
    uVar9 = (undefined1 *)0xfff7 < &stack0x0000;
    uVar10 = &stack0x0000 == (undefined1 *)0xfff8;
    func_0x00029834();
    func_0x0002996b();
    FUN_28b3_1181();
    if ((bool)uVar9 || (bool)uVar10) {
      func_0x000297e6();
      param_1 = 0xfe97;
      func_0x00029b55();
    }
    else {
      func_0x000297e6();
      func_0x00029bb5();
    }
    func_0x00029983();
    func_0x000297e6();
    func_0x00029d78();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfeb4;
    func_0x000299d1();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfebc;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfec1;
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xfecb;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xfed3;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xfed8;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfee2;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfeea;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfeef;
    func_0x00029d78();
    uStack_1a = 0x22b2;
    uStack_1c = 0xfef9;
    func_0x000299d1();
    uStack_1a = 0x22b2;
    uStack_1c = 0xfefe;
    FUN_1def_043a();
    param_1 = *(undefined2 *)0xa296;
    iStack_2 = 0x1bb4;
    uStack_4 = 0xff1a;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xff1f;
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xff29;
    func_0x000299d1();
    uStack_a = *(undefined2 *)0xa29a;
    uStack_c = *(undefined2 *)0xa298;
    uStack_e = *(undefined2 *)0xa296;
    uStack_10 = *(undefined2 *)0xa294;
    uStack_12 = 0x22b2;
    uStack_14 = 0xff42;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xff47;
    func_0x00029d78();
    uStack_1a = 0x22b2;
    uStack_1c = 0xff51;
    func_0x000299d1();
    pcVar4 = (code *)swi(0x3f);
    iVar6 = (*pcVar4)();
    if (iVar6 != 0) {
      *(int *)(unaff_BP + 0x1e) = *(int *)(unaff_BP + 0x1e) + 2;
    }
  }
  return 1;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  484 bytes, 2 callers */

undefined2 FUN_3ab8_4fbd(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  int iStack_2;
  
  iStack_2 = 0x3ab8;
  uStack_4 = 0xfb48;
  func_0x00029834();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb50;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb55;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb5a;
  FUN_28b3_1163();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb63;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb6c;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb71;
  FUN_28b3_117c();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb76;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  FUN_28b3_1582(0x22b2);
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb8f;
  func_0x00029834();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb98;
  func_0x00029983();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfba1;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfba9;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfbb2;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfbba;
  FUN_28b3_0ee9();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfbc2;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfbca;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfbd3;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfbdb;
  FUN_28b3_0ee9();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfbe4;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfbed;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfbf6;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfbff;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfc08;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfc0d;
  FUN_28b3_117c();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfc12;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  FUN_28b3_1582(0x22b2);
  uVar3 = (undefined1 *)0xfff7 < &uStack_8;
  uVar4 = &stack0x0000 == (undefined1 *)0x0;
  iStack_2 = 0x22b2;
  uStack_4 = 0xfc2b;
  func_0x00029834();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfc34;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfc39;
  FUN_28b3_1181();
  if ((bool)uVar3 || (bool)uVar4) {
    iStack_2 = 0x22b2;
    uStack_4 = 0xfc5c;
    func_0x000297e6();
    iStack_2 = unaff_BP + -0x17a;
    uStack_4 = 0x22b2;
    uStack_6 = 0xfc66;
    func_0x00029b55();
  }
  else {
    iStack_2 = 0x22b2;
    uStack_4 = 0xfc44;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfc4d;
    func_0x00029bb5();
  }
  iStack_2 = 0x22b2;
  uStack_4 = 0xfc6c;
  func_0x00029983();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfc74;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfc79;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_1def_043a(0x22b2);
  iStack_2 = *(undefined2 *)0xa29a;
  uStack_4 = *(undefined2 *)0xa298;
  uStack_6 = *(undefined2 *)0xa296;
  uStack_8 = *(undefined2 *)0xa294;
  func_0x000297e6(0x1bb4);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  uVar7 = *(undefined2 *)0xa29a;
  uVar8 = *(undefined2 *)0xa298;
  func_0x000297e6(0x22b2,*(undefined2 *)0xa294,*(undefined2 *)0xa296,uVar8,uVar7);
  uVar6 = 0x22b2;
  uVar5 = 0xfd17;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  pcVar1 = (code *)swi(0x3f);
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    *(int *)(unaff_BP + 0x1e) = *(int *)(unaff_BP + 0x1e) + 2;
  }
  if ((*(int *)(unaff_BP + -0x5e) != *(int *)(unaff_BP + -0x5a)) ||
     (*(int *)(unaff_BP + -0x5c) != *(int *)(unaff_BP + -0x58))) {
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1163();
    func_0x0002996b();
    func_0x00029b6d();
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1163();
    func_0x0002996b();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029d78();
    uStack_6 = 0x22b2;
    uStack_8 = 0xfdb2;
    func_0x000299d1();
    uStack_6 = 0x22b2;
    uStack_8 = 0xfdb7;
    FUN_28b3_1582();
    func_0x00029834();
    func_0x00029983();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029d78();
    uStack_6 = 0x22b2;
    uStack_8 = 0xfe4d;
    func_0x000299d1();
    uStack_6 = 0x22b2;
    uStack_8 = 0xfe52;
    FUN_28b3_1582();
    uVar3 = (undefined1 *)0xfff7 < &uStack_4;
    uVar4 = &stack0x0000 == (undefined1 *)0xfffc;
    func_0x00029834();
    func_0x0002996b();
    FUN_28b3_1181();
    if ((bool)uVar3 || (bool)uVar4) {
      func_0x000297e6();
      iStack_2 = 0xfe97;
      func_0x00029b55();
    }
    else {
      func_0x000297e6();
      func_0x00029bb5();
    }
    func_0x00029983();
    func_0x000297e6();
    func_0x00029d78();
    uStack_6 = 0x22b2;
    uStack_8 = 0xfeb4;
    func_0x000299d1();
    uStack_6 = 0x22b2;
    uStack_8 = 0xfebc;
    func_0x000297e6();
    uStack_6 = 0x22b2;
    uStack_8 = 0xfec1;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    uVar9 = 0xfed8;
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2,uVar8,uVar7,uVar9);
    func_0x000297e6(0x22b2);
    uVar7 = 0xfeef;
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2,uVar5,uVar6,uVar7);
    FUN_1def_043a(0x22b2);
    iStack_2 = *(undefined2 *)0xa296;
    uStack_4 = *(undefined2 *)0xa294;
    uStack_6 = 0x1bb4;
    uStack_8 = 0xff1a;
    func_0x000297e6();
    uStack_6 = 0x22b2;
    uStack_8 = 0xff1f;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2,*(undefined2 *)0xa294,*(undefined2 *)0xa296,*(undefined2 *)0xa298,
                    *(undefined2 *)0xa29a);
    uVar7 = 0xff47;
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2,uVar5,uVar6,uVar7);
    pcVar1 = (code *)swi(0x3f);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      *(int *)(unaff_BP + 0x1e) = *(int *)(unaff_BP + 0x1e) + 2;
    }
  }
  return 1;
}



/* 3ab8:522f  FUN_3ab8_522f  420 bytes, 2 callers */

undefined2 FUN_3ab8_522f(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 in_DX;
  int unaff_BP;
  undefined1 *unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  
  out(*unaff_SI,in_DX);
  FUN_28b3_1582(0x3ab8);
  func_0x00029834();
  func_0x00029983();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  FUN_28b3_1582(0x22b2);
  uVar3 = (undefined1 *)0xfff7 < &stack0x0000;
  uVar4 = &stack0x0000 == (undefined1 *)0xfff8;
  func_0x00029834();
  func_0x0002996b();
  FUN_28b3_1181();
  if ((bool)uVar3 || (bool)uVar4) {
    func_0x000297e6();
    func_0x00029b55();
  }
  else {
    func_0x000297e6();
    func_0x00029bb5();
  }
  func_0x00029983();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_1def_043a(0x22b2);
  func_0x000297e6(0x1bb4);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2,*(undefined2 *)0xa294,*(undefined2 *)0xa296,*(undefined2 *)0xa298,
                  *(undefined2 *)0xa29a);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  pcVar1 = (code *)swi(0x3f);
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    *(int *)(unaff_BP + 0x1e) = *(int *)(unaff_BP + 0x1e) + 2;
  }
  return 1;
}



/* 3ab8:53e4  FUN_3ab8_53e4  6 bytes, 1 callers */

void __cdecl16far FUN_3ab8_53e4(void)

{
  return;
}



/* 3000:ff6a  FUN_3000_ff6a  3178 bytes, 0 callers */

void __cdecl16far FUN_3000_ff6a(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 local_c4 [5];
  undefined1 local_ba [4];
  int local_b6;
  int local_b4;
  undefined1 local_b2 [4];
  int local_ae;
  int local_ac;
  undefined1 local_aa [100];
  int local_46;
  int local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined1 local_3a [32];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 *puStack_14;
  undefined2 *puStack_12;
  undefined2 *puStack_10;
  undefined1 *puStack_e;
  undefined2 *puStack_c;
  undefined2 *puStack_a;
  int *local_8;
  
  FUN_21f2_0ebc();
  local_8 = (int *)0x0;
  puStack_a = (undefined2 *)0x22b2;
  puStack_c = (undefined2 *)0xff7f;
  func_0x0000daa6();
  local_8 = (int *)0x885;
  puStack_a = (undefined2 *)0xff85;
  func_0x0000c3ca();
  local_8 = (int *)0x885;
  puStack_a = (undefined2 *)0xff8a;
  func_0x0001bb8f();
  local_8 = (int *)0x1bb4;
  puStack_a = (undefined2 *)0xff8f;
  func_0x0001bba4();
  local_8 = (int *)0x16b;
  puStack_a = (undefined2 *)0x1f6;
  puStack_c = (undefined2 *)0x28;
  puStack_e = (undefined1 *)0xee;
  puStack_10 = (undefined2 *)0x1bb4;
  puStack_12 = (undefined2 *)0xffa4;
  func_0x0000a76b();
  local_8 = (int *)*(undefined2 *)0x1b40;
  puStack_a = (undefined2 *)*(undefined2 *)0x1b3e;
  puStack_c = (undefined2 *)(*(int *)0xa60 + 1);
  puStack_e = (undefined1 *)0x0;
  puStack_10 = (undefined2 *)0x885;
  puStack_12 = (undefined2 *)0xffbc;
  func_0x0000a76b();
  local_8 = (int *)0x885;
  puStack_a = (undefined2 *)0xffc4;
  func_0x0000a799();
  local_8 = (int *)0x885;
  puStack_a = (undefined2 *)0xffc9;
  func_0x0000c354();
  local_8 = (int *)0x0;
  puStack_a = (undefined2 *)0x0;
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xc08 = 1;
  *(undefined2 *)0xc28 = 1;
  puStack_c = (undefined2 *)0x1;
  puStack_e = (undefined1 *)0x7;
  puStack_10 = (undefined2 *)0x169;
  puStack_12 = (undefined2 *)0x1f4;
  puStack_14 = (undefined2 *)0x48;
  uStack_16 = 0xf0;
  uStack_18 = 0x885;
  uStack_1a = 0xfff8;
  func_0x0000f350();
  local_8 = (int *)0x0;
  puStack_a = (undefined2 *)0x0;
  puStack_c = (undefined2 *)0x1;
  puStack_e = (undefined1 *)0x7;
  puStack_10 = (undefined2 *)0x16a;
  puStack_12 = (undefined2 *)0x1f5;
  puStack_14 = (undefined2 *)0x47;
  uStack_16 = 0xef;
  uStack_18 = 0xdef;
  uStack_1a = 0x1e;
  func_0x0000f350();
  local_8 = (int *)0x0;
  puStack_a = (undefined2 *)0x0;
  puStack_c = (undefined2 *)0x0;
  puStack_e = (undefined1 *)0x7;
  puStack_10 = (undefined2 *)0x169;
  puStack_12 = (undefined2 *)0x19a;
  puStack_14 = (undefined2 *)0x48;
  uStack_16 = 0x19a;
  uStack_18 = 0xdef;
  uStack_1a = 0x39;
  func_0x0000f350();
  local_46 = 1;
  do {
    local_8 = (int *)0x0;
    puStack_a = (undefined2 *)0x0;
    puStack_c = (undefined2 *)0x0;
    puStack_e = (undefined1 *)0x7;
    puStack_14 = (undefined2 *)(local_46 * 0x20 + 0x48);
    puStack_12 = (undefined2 *)0x1f4;
    uStack_16 = 0xf0;
    uStack_18 = 0xdef;
    puVar5 = (undefined2 *)0xdef;
    uStack_1a = 99;
    puStack_10 = puStack_14;
    func_0x0000f350();
    local_46 = local_46 + 1;
  } while (local_46 < 9);
LAB_3ab8_54ef:
  puStack_a = (undefined2 *)0x74;
  local_8 = puVar5;
  func_0x0000c3ca();
  local_8 = (int *)0x4;
  puStack_a = (undefined2 *)0x20;
  puStack_c = (undefined2 *)0x885;
  puStack_e = (undefined1 *)0x81;
  FUN_1000_0599();
  local_8 = (int *)*(undefined2 *)0x1ce;
  puStack_a = (undefined2 *)0x5d6;
  puStack_c = (undefined2 *)0x57f1;
  puStack_e = (undefined1 *)0xdef;
  puStack_10 = (undefined2 *)0x94;
  func_0x00012276();
  local_8 = (int *)0x5809;
  puStack_a = (undefined2 *)local_3a;
  puStack_c = (undefined2 *)0x11f2;
  puStack_e = (undefined1 *)0xa4;
  FUN_21f2_3454();
  local_8 = (int *)0x6;
  puStack_a = (undefined2 *)0x20;
  puStack_c = (undefined2 *)0x22b2;
  puStack_e = (undefined1 *)0xb3;
  FUN_1000_0599();
  local_8 = (int *)*(undefined2 *)0x1d2;
  puStack_a = (undefined2 *)local_3a;
  puStack_c = (undefined2 *)0x581f;
  puStack_e = (undefined1 *)0xdef;
  puStack_10 = (undefined2 *)0xc6;
  func_0x00012276();
  local_8 = (int *)0x8;
  puStack_a = (undefined2 *)0x20;
  puStack_c = (undefined2 *)0x11f2;
  puStack_e = (undefined1 *)0xd6;
  FUN_1000_0599();
  local_8 = (int *)*(undefined2 *)0x1d0;
  puStack_a = (undefined2 *)local_3a;
  puStack_c = (undefined2 *)0x5827;
  puStack_e = (undefined1 *)0xdef;
  puStack_10 = (undefined2 *)0xe9;
  func_0x00012276();
  local_8 = (int *)0xa;
  puStack_a = (undefined2 *)0x20;
  puStack_c = (undefined2 *)0x11f2;
  puStack_e = (undefined1 *)0xf9;
  FUN_1000_0599();
  local_8 = (int *)0xdef;
  puStack_a = (undefined2 *)0x104;
  func_0x000297e6();
  local_8 = (int *)0x22b2;
  puStack_a = (undefined2 *)0x109;
  func_0x00029d78();
  puStack_10 = (undefined2 *)0x22b2;
  puStack_12 = (undefined2 *)0x113;
  func_0x000299d1();
  puStack_10 = (undefined2 *)0x582f;
  puStack_12 = (undefined2 *)0x22b2;
  puStack_14 = (undefined2 *)0x11c;
  func_0x00012276();
  local_8 = (int *)0xc;
  puStack_a = (undefined2 *)0x20;
  puStack_c = (undefined2 *)0x11f2;
  puStack_e = (undefined1 *)0x12c;
  FUN_1000_0599();
  local_8 = (int *)0xdef;
  puStack_a = (undefined2 *)0x137;
  func_0x000297e6();
  local_8 = (int *)0x22b2;
  puStack_a = (undefined2 *)0x13c;
  func_0x00029d78();
  puStack_10 = (undefined2 *)0x22b2;
  puStack_12 = (undefined2 *)0x146;
  func_0x000299d1();
  puStack_10 = (undefined2 *)0x584d;
  puStack_12 = (undefined2 *)0x22b2;
  puStack_14 = (undefined2 *)0x14f;
  func_0x00012276();
  local_8 = (int *)0xe;
  puStack_a = (undefined2 *)0x20;
  puStack_c = (undefined2 *)0x11f2;
  puStack_e = (undefined1 *)0x15f;
  FUN_1000_0599();
  local_8 = (int *)0xdef;
  puStack_a = (undefined2 *)0x16a;
  func_0x000297e6();
  local_8 = (int *)0x22b2;
  puStack_a = (undefined2 *)0x16f;
  func_0x00029d78();
  puStack_10 = (undefined2 *)0x22b2;
  puStack_12 = (undefined2 *)0x179;
  func_0x000299d1();
  puStack_10 = (undefined2 *)0x586b;
  puStack_12 = (undefined2 *)0x22b2;
  puStack_14 = (undefined2 *)0x182;
  func_0x00012276();
  local_8 = (int *)0x10;
  puStack_a = (undefined2 *)0x20;
  puStack_c = (undefined2 *)0x11f2;
  puStack_e = (undefined1 *)0x192;
  FUN_1000_0599();
  local_8 = (int *)0xdef;
  puStack_a = (undefined2 *)0x19d;
  func_0x000297e6();
  local_8 = (int *)0x22b2;
  puStack_a = (undefined2 *)0x1a2;
  func_0x00029d78();
  puStack_10 = (undefined2 *)0x22b2;
  puStack_12 = (undefined2 *)0x1ac;
  func_0x000299d1();
  puStack_10 = (undefined2 *)0x5889;
  puStack_12 = (undefined2 *)0x22b2;
  puStack_14 = (undefined2 *)0x1b5;
  func_0x00012276();
  local_8 = (int *)0x12;
  puStack_a = (undefined2 *)0x20;
  puStack_c = (undefined2 *)0x11f2;
  puStack_e = (undefined1 *)0x1c5;
  FUN_1000_0599();
  local_8 = (int *)0x58a6;
  puStack_a = (undefined2 *)0xdef;
  puStack_c = (undefined2 *)0x1d0;
  func_0x00012276();
  if (*(int *)0x1128 == 0) {
    local_8 = (int *)0x58bc;
  }
  else {
    local_8 = (int *)0x58c7;
    puStack_a = (undefined2 *)0x11f2;
    puStack_c = (undefined2 *)0x1e6;
    func_0x00012276();
    if (*(int *)0x1128 == 1) {
      local_8 = (int *)0x58ca;
      puStack_a = (undefined2 *)0x11f2;
      puStack_c = (undefined2 *)0x1f7;
      func_0x00012276();
    }
    if (*(int *)0x1128 == 2) {
      local_8 = (int *)0x58cd;
      puStack_a = (undefined2 *)0x11f2;
      puStack_c = (undefined2 *)0x208;
      func_0x00012276();
    }
    local_8 = (int *)0x58d0;
  }
  puStack_a = (undefined2 *)0x11f2;
  puStack_c = (undefined2 *)0x212;
  func_0x00012276();
  local_8 = (int *)0x14;
  puStack_a = (undefined2 *)0x20;
  puStack_c = (undefined2 *)0x11f2;
  puStack_e = (undefined1 *)0x220;
  FUN_1000_0599();
  local_8 = (int *)0x78e;
  puStack_a = (undefined2 *)0x58d7;
  puStack_c = (undefined2 *)0xdef;
  puStack_e = (undefined1 *)0x22f;
  func_0x00012276();
  local_8 = (int *)0x58e9;
  puStack_a = (undefined2 *)local_3a;
  puStack_c = (undefined2 *)0x11f2;
  puStack_e = (undefined1 *)0x23e;
  FUN_21f2_3454();
  local_8 = (int *)local_3a;
  puStack_a = (undefined2 *)0x22b2;
  puStack_c = (undefined2 *)0x249;
  func_0x00012276();
  if (*(int *)0x112a == 0) {
    local_8 = (int *)0x58f1;
  }
  else {
    local_8 = (int *)0x58ee;
  }
  puStack_a = (undefined2 *)0x11f2;
  puStack_c = (undefined2 *)0x25f;
  func_0x00012276();
  local_8 = (int *)0x58f4;
  puStack_a = (undefined2 *)0x11f2;
  puStack_c = (undefined2 *)0x269;
  func_0x00012276();
  local_8 = (int *)0x16;
  puStack_a = (undefined2 *)0x20;
  puStack_c = (undefined2 *)0x11f2;
  puStack_e = (undefined1 *)0x277;
  FUN_1000_0599();
  local_8 = (int *)0x620;
  puStack_a = (undefined2 *)0xdef;
  puStack_c = (undefined2 *)0x282;
  func_0x00012276();
  local_8 = (int *)0x58f7;
  puStack_a = (undefined2 *)0x11f2;
  puStack_c = (undefined2 *)0x28c;
  func_0x00012276();
  local_8 = (int *)local_3a;
  puStack_a = (undefined2 *)0x11f2;
  puStack_c = (undefined2 *)0x296;
  func_0x00012276();
  if (*(int *)0x112c == 0) {
    local_8 = (int *)0x590a;
  }
  else {
    local_8 = (int *)0x5903;
    puStack_a = (undefined2 *)0x11f2;
    puStack_c = (undefined2 *)0x2a7;
    func_0x00012276();
    if (*(int *)0x112c == 1) {
      local_8 = (int *)0x5906;
      puStack_a = (undefined2 *)0x11f2;
      puStack_c = (undefined2 *)0x2b8;
      func_0x00012276();
    }
    if (*(int *)0x112c != 2) goto LAB_3ab8_574f;
    local_8 = (int *)0x5908;
  }
  puStack_a = (undefined2 *)0x11f2;
  puStack_c = (undefined2 *)0x2ce;
  func_0x00012276();
LAB_3ab8_574f:
  local_8 = (int *)0x590d;
  puStack_a = (undefined2 *)0x11f2;
  puVar5 = (undefined2 *)0x11f2;
  puStack_c = (undefined2 *)0x2d8;
  func_0x00012276();
  if (*(int *)0x112c == 2) {
    local_8 = (int *)0x16;
    puStack_a = (undefined2 *)0x41;
    puStack_c = (undefined2 *)0x11f2;
    puStack_e = (undefined1 *)0x2f0;
    FUN_1000_0599();
    local_8 = (int *)0x620;
    puStack_a = (undefined2 *)0xdef;
    puStack_c = (undefined2 *)0x2fb;
    func_0x00012276();
    local_8 = (int *)0x17;
    puStack_a = (undefined2 *)0x41;
    puStack_c = (undefined2 *)0x11f2;
    puStack_e = (undefined1 *)0x309;
    FUN_1000_0599();
    local_8 = (int *)0x5911;
    puStack_a = (undefined2 *)0xdef;
    puVar5 = (undefined2 *)0x11f2;
    puStack_c = (undefined2 *)0x314;
    func_0x00012276();
  }
  else {
    for (local_ac = 0x16; local_ac < 0x18; local_ac = local_ac + 1) {
      local_8 = (int *)local_ac;
      puStack_a = (undefined2 *)0x41;
      puStack_e = (undefined1 *)0x3bb;
      puStack_c = puVar5;
      FUN_1000_0599();
      puVar5 = (undefined2 *)0xdef;
      for (local_ae = 1; local_ae < 0xd; local_ae = local_ae + 1) {
        local_8 = (int *)0x591c;
        puStack_c = (undefined2 *)0x39d;
        puStack_a = puVar5;
        func_0x00012276();
        puVar5 = (undefined2 *)0x11f2;
      }
    }
  }
  do {
    local_8 = (int *)0x98a;
    puStack_a = (undefined2 *)local_aa;
    puStack_e = (undefined1 *)0x323;
    puStack_c = puVar5;
    FUN_21f2_3454();
    local_8 = (int *)0x652;
    puStack_a = (undefined2 *)local_aa;
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined1 *)0x333;
    FUN_21f2_2d26();
    local_8 = (int *)0x928;
    puStack_a = (undefined2 *)local_aa;
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined1 *)0x343;
    FUN_21f2_2d26();
    local_8 = (int *)0x591e;
    puStack_a = (undefined2 *)local_aa;
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined1 *)0x353;
    FUN_21f2_2d26();
    local_8 = (int *)0x98a;
    puStack_a = (undefined2 *)local_aa;
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined1 *)0x363;
    FUN_21f2_2d26();
    local_8 = (int *)0x5920;
    puStack_a = (undefined2 *)local_aa;
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined1 *)0x373;
    FUN_21f2_2d26();
    if (*(int *)0x1126 == 0) {
      local_8 = (int *)0x5932;
    }
    else {
      local_8 = (int *)0x592d;
    }
    puStack_a = (undefined2 *)local_aa;
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined1 *)0x3d3;
    FUN_21f2_2d26();
    local_8 = (int *)0x5937;
    puStack_a = (undefined2 *)local_aa;
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined1 *)0x3e3;
    FUN_21f2_2d26();
    if (*(int *)0x112e == 0) {
      local_8 = (int *)0x5944;
    }
    else {
      local_8 = (int *)0x5941;
    }
    puStack_a = (undefined2 *)local_aa;
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined1 *)0x3ff;
    FUN_21f2_2d26();
    local_8 = (int *)*(undefined2 *)0x1124;
    puStack_a = (undefined2 *)0x620;
    puStack_c = (undefined2 *)0x5947;
    puStack_e = local_3a;
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0x416;
    FUN_21f2_3454();
    local_8 = (int *)local_3a;
    puStack_a = (undefined2 *)local_aa;
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined1 *)0x427;
    FUN_21f2_2d26();
    local_8 = (int *)local_aa;
    puStack_a = (undefined2 *)0x4;
    puStack_c = (undefined2 *)0x22b2;
    puVar5 = (undefined2 *)0x1bb4;
    puStack_e = (undefined1 *)0x437;
    FUN_1def_07a4();
    if (*(char *)0x124 != '\0') {
      local_8 = (int *)0x5958;
      puStack_a = (undefined2 *)local_aa;
      puStack_c = (undefined2 *)0x1bb4;
      puVar5 = (undefined2 *)0x22b2;
      puStack_e = (undefined1 *)0x44e;
      FUN_21f2_2d26();
    }
    puVar6 = puVar5;
    if (*(int *)0x112e == 2) {
      local_8 = (int *)0xffff;
      puStack_a = (undefined2 *)0x7;
      puStack_c = (undefined2 *)0x2;
      puStack_e = (undefined1 *)0x2e;
      puStack_10 = (undefined2 *)0x595b;
      puVar6 = (undefined2 *)0xdef;
      puStack_14 = (undefined2 *)0x470;
      puStack_12 = puVar5;
      FUN_1000_02b5();
      *(undefined2 *)0xc22 = 1;
    }
    local_8 = &local_44;
    puStack_a = (undefined2 *)local_ba;
    puStack_c = (undefined2 *)local_b2;
    puStack_e = local_aa;
    puStack_10 = (undefined2 *)0x270f;
    puVar5 = (undefined2 *)0x1bb4;
    puStack_14 = (undefined2 *)0x495;
    puStack_12 = puVar6;
    local_b4 = FUN_1def_0904();
    if (((*(int *)0x158 != 0) || (local_b4 == 1)) || (local_b4 == -1)) {
LAB_3ab8_6043:
      puStack_a = (undefined2 *)0xbc8;
      local_8 = puVar5;
      FUN_10ad_18a4();
      *(undefined2 *)0xc28 = 0;
      return;
    }
    local_b6 = 0;
    if ((local_b4 == 99) || (local_b4 == 0x3f00)) goto LAB_3ab8_5943;
    if ((0x61ff < local_b4) && (local_b4 < 0x6b01)) {
      uVar4 = (int)(local_b4 + 0x9f00U) >> 0xf;
      *(int *)0x1ce = ((int)((local_b4 + 0x9f00U ^ uVar4) - uVar4) >> 8 ^ uVar4) - uVar4;
      goto LAB_3ab8_5943;
    }
    if (local_b4 == 2) {
      *(int *)0x1126 = 1 - *(int *)0x1126;
      local_44 = 0;
    }
    if (local_b4 == 3) {
      local_44 = 0;
      *(int *)0x112e = *(int *)0x112e + 1;
      if (2 < *(int *)0x112e) {
        *(undefined2 *)0x112e = 0;
      }
    }
    if (local_b4 == 4) {
      local_44 = 0;
      *(int *)0x1124 = *(int *)0x1124 + 1;
      if (3 < *(int *)0x1124) {
        *(undefined2 *)0x1124 = 0;
      }
    }
    puVar6 = puVar5;
    if (local_b4 == 5) {
      local_44 = 0;
      *(char *)0x1131 = *(char *)0x1131 + '\x01';
      if (3 < *(byte *)0x1131) {
        *(undefined1 *)0x1131 = 0;
      }
      if (*(char *)0x1131 == '\0') {
        local_8 = (int *)0x5968;
        puStack_a = local_c4;
        puStack_c = (undefined2 *)0x1bb4;
        puStack_e = (undefined1 *)0x5ea;
        FUN_21f2_3454();
      }
      else {
        local_8 = (int *)(uint)*(byte *)0x1131;
        puStack_a = (undefined2 *)0x5963;
        puStack_c = local_c4;
        puStack_e = (undefined1 *)0x1bb4;
        puStack_10 = (undefined2 *)0x5d7;
        FUN_21f2_3454();
      }
      local_8 = (int *)0xffff;
      puStack_a = (undefined2 *)0x7;
      puStack_c = (undefined2 *)0x2;
      puStack_e = (undefined1 *)0x4c;
      puStack_10 = local_c4;
      puStack_12 = (undefined2 *)0x22b2;
      puVar6 = (undefined2 *)0xdef;
      puStack_14 = (undefined2 *)0x606;
      FUN_1000_02b5();
      *(undefined2 *)0xc22 = 1;
    }
    puVar5 = puVar6;
    if (local_b4 == 6) {
      if (*(char *)0x114a == '\0') {
        *(undefined1 *)0x114a = 2;
      }
      else {
        *(undefined1 *)0x114a = 0;
      }
      if (*(char *)0x114a == '\0') {
        puStack_10 = (undefined2 *)0x596e;
      }
      else {
        puStack_10 = (undefined2 *)0x596b;
      }
      local_8 = (int *)0xffff;
      puStack_a = (undefined2 *)0x7;
      puStack_c = (undefined2 *)0x2;
      puStack_e = (undefined1 *)0x4d;
      puVar5 = (undefined2 *)0xdef;
      puStack_14 = (undefined2 *)0x65e;
      puStack_12 = puVar6;
      FUN_1000_02b5();
      *(undefined2 *)0xc22 = 1;
    }
    if (local_44 != 0) {
      puStack_a = (undefined2 *)0x679;
      local_8 = puVar5;
      func_0x000297e6();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x682;
      FUN_28b3_100d();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x68b;
      func_0x00029b6d();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x694;
      FUN_28b3_0d8b();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x699;
      FUN_28b3_1168();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x69e;
      func_0x00029d78();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x6a3;
      iVar3 = FUN_28b3_0f51();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x6af;
      func_0x000297e6();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x6b8;
      FUN_28b3_100d();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x6c1;
      func_0x00029b6d();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x6ca;
      FUN_28b3_0d8b();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x6cf;
      FUN_28b3_117c();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0x6d4;
      func_0x00029d78();
      local_8 = (int *)0x22b2;
      puVar5 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x6d9;
      iVar1 = FUN_28b3_0f51();
      if (((0xef < iVar1) && (iVar1 < 0x1f5)) && ((0x47 < iVar3 && (iVar3 < 0x16a)))) {
        uVar4 = (int)(iVar3 - 0x48U) >> 0xf;
        local_b6 = (((int)((iVar3 - 0x48U ^ uVar4) - uVar4) >> 5 ^ uVar4) - uVar4) + 1;
LAB_3ab8_5943:
        do {
          puStack_a = (undefined2 *)0x4c8;
          local_8 = puVar5;
          func_0x0001bb4e();
          local_8 = (int *)0x83c;
          puStack_a = (undefined2 *)0x5971;
          puStack_c = (undefined2 *)0x1bb4;
          puVar5 = (undefined2 *)0x11f2;
          puStack_e = (undefined1 *)0x4d5;
          func_0x00012276();
          while (local_b6 == 1) {
            puStack_a = (undefined2 *)0x4ea;
            local_8 = puVar5;
            FUN_28b3_0d8b();
            local_8 = (int *)0x22b2;
            puStack_a = (undefined2 *)0x4f2;
            func_0x00029983();
            local_42 = *(undefined2 *)0xa2a0;
            local_40 = *(undefined2 *)0xa2a2;
            local_8 = (int *)0x2716;
            puStack_a = (undefined2 *)0x36;
            puStack_c = (undefined2 *)local_ba;
            puStack_e = local_b2;
            puStack_10 = &local_42;
            puStack_12 = &local_3e;
            puStack_14 = (undefined2 *)0x22b2;
            puVar5 = (undefined2 *)0xad;
            uStack_16 = 0x51e;
            iVar3 = func_0x000021a4();
            if ((*(int *)0x158 != 0) || (iVar3 == -1)) break;
            if (iVar3 == 99) goto LAB_3ab8_5943;
            local_8 = (int *)0xad;
            puStack_a = (undefined2 *)0x781;
            func_0x000297e6();
            local_8 = (int *)0x22b2;
            puStack_a = (undefined2 *)0x786;
            func_0x00029d78();
            local_8 = (int *)0x22b2;
            puStack_a = (undefined2 *)0x78f;
            func_0x00029c74();
            local_8 = (int *)0x22b2;
            puVar5 = (undefined2 *)0x22b2;
            puStack_a = (undefined2 *)0x797;
            func_0x00029983();
            uVar7 = 0;
            uVar8 = local_8 == (int *)0x0;
            if ((bool)uVar8) {
              local_8 = (int *)0x22b2;
              puStack_a = (undefined2 *)0x7a9;
              func_0x00029834();
              local_8 = (int *)0x22b2;
              puStack_a = (undefined2 *)0x7b1;
              func_0x000297e6();
              local_8 = (int *)0x22b2;
              puStack_a = (undefined2 *)0x7b6;
              func_0x00029d78();
              local_8 = (int *)0x22b2;
              puStack_a = (undefined2 *)0x7bb;
              FUN_28b3_1181();
              if ((bool)uVar7 || (bool)uVar8) {
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0x7c8;
                func_0x000297e6();
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0x7d1;
                func_0x000297e6();
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0x7d6;
                FUN_28b3_1181();
                if ((bool)uVar7 || (bool)uVar8) {
                  local_8 = (int *)0x22b2;
                  puStack_a = (undefined2 *)0x7e3;
                  func_0x000297e6();
                  local_8 = (int *)0x22b2;
                  puStack_a = (undefined2 *)0x7e8;
                  func_0x00029d78();
                  local_8 = (int *)0x22b2;
                  puStack_a = (undefined2 *)0x7ed;
                  local_46 = FUN_28b3_0f51();
                  local_46 = local_46 % 10;
                  if (local_46 < 10) {
                    local_8 = (int *)0x22b2;
                    puStack_a = (undefined2 *)0x803;
                    func_0x000297e6();
                    local_8 = (int *)0x22b2;
                    puStack_a = (undefined2 *)0x808;
                    func_0x00029d78();
                    local_8 = (int *)0x22b2;
                    puStack_a = (undefined2 *)0x80d;
                    iVar3 = FUN_28b3_0f51();
                    local_46 = (iVar3 / 10) % 10;
                    if (local_46 < 10) {
                      local_8 = (int *)0x22b2;
                      puStack_a = (undefined2 *)0x826;
                      func_0x000297e6();
                      local_8 = (int *)0x22b2;
                      puStack_a = (undefined2 *)0x82b;
                      func_0x00029d78();
                      local_8 = (int *)0x22b2;
                      puStack_a = (undefined2 *)0x830;
                      iVar3 = FUN_28b3_0f51();
                      local_46 = (iVar3 / 100) % 10;
                      if (local_46 < 10) {
                        local_8 = (int *)0x22b2;
                        puStack_a = (undefined2 *)0x84c;
                        func_0x000297e6();
                        local_8 = (int *)0x22b2;
                        puStack_a = (undefined2 *)0x851;
                        func_0x00029d78();
                        local_8 = (int *)0x22b2;
                        puStack_a = (undefined2 *)0x856;
                        local_46 = FUN_28b3_0f51();
                        local_46 = local_46 / 1000;
                        if (local_46 < 10) {
                          local_8 = (int *)0x22b2;
                          puStack_a = (undefined2 *)0x86f;
                          func_0x000297e6();
                          local_8 = (int *)0x22b2;
                          puStack_a = (undefined2 *)0x874;
                          func_0x00029d78();
                          local_8 = (int *)0x22b2;
                          puVar5 = (undefined2 *)0x22b2;
                          puStack_a = (undefined2 *)0x879;
                          uVar2 = FUN_28b3_0f51();
                          *(undefined2 *)0x1d2 = uVar2;
                          break;
                        }
                      }
                    }
                  }
                }
              }
              puVar5 = (undefined2 *)0x22b2;
            }
          }
          do {
            puVar6 = puVar5;
            if (local_b6 != 2) goto LAB_3ab8_5d04;
            puStack_a = (undefined2 *)0x72a;
            local_8 = puVar5;
            FUN_28b3_0d8b();
            local_8 = (int *)0x22b2;
            puStack_a = (undefined2 *)0x732;
            func_0x00029983();
            local_42 = *(undefined2 *)0xa2a0;
            local_40 = *(undefined2 *)0xa2a2;
            local_8 = (int *)0x2718;
            puStack_a = (undefined2 *)0x36;
            puStack_c = (undefined2 *)local_ba;
            puStack_e = local_b2;
            puStack_10 = &local_42;
            puStack_12 = &local_3e;
            puStack_14 = (undefined2 *)0x22b2;
            puVar5 = (undefined2 *)0xad;
            uStack_16 = 0x75e;
            iVar3 = func_0x000021a4();
            puVar6 = puVar5;
            if ((*(int *)0x158 != 0) || (iVar3 == -1)) goto LAB_3ab8_5d04;
            if (iVar3 == 99) goto LAB_3ab8_5943;
            local_8 = (int *)0xad;
            puStack_a = (undefined2 *)0x8e6;
            func_0x000297e6();
            local_8 = (int *)0x22b2;
            puStack_a = (undefined2 *)0x8eb;
            func_0x00029d78();
            local_8 = (int *)0x22b2;
            puStack_a = (undefined2 *)0x8f4;
            func_0x00029c74();
            local_8 = (int *)0x22b2;
            puVar5 = (undefined2 *)0x22b2;
            puStack_a = (undefined2 *)0x8f9;
            local_46 = FUN_28b3_0f51();
          } while (((local_8 != (int *)0x0) || (local_46 < 1)) || (6 < local_46));
          *(int *)0x1d0 = local_46;
          puVar6 = puVar5;
LAB_3ab8_5d04:
          if (local_b6 == 3) {
            local_3e = *(undefined2 *)0x1d4;
            local_3c = *(undefined2 *)0x1d6;
            local_42 = *(undefined2 *)0xa2a0;
            local_40 = *(undefined2 *)0xa2a2;
            local_8 = (int *)0x271a;
            puStack_a = (undefined2 *)0x36;
            puStack_c = (undefined2 *)local_ba;
            puStack_e = local_b2;
            puStack_10 = &local_42;
            puStack_12 = &local_3e;
            puVar5 = (undefined2 *)0xad;
            uStack_16 = 0x8c7;
            puStack_14 = puVar6;
            iVar3 = func_0x000021a4();
            puVar6 = puVar5;
            if ((*(int *)0x158 != 0) || (iVar3 == -1)) goto LAB_3ab8_5d9d;
            if (iVar3 == 99) goto LAB_3ab8_5943;
            uVar7 = 0;
            uVar8 = iVar3 == 0;
            if ((bool)uVar8) {
              local_8 = (int *)0xad;
              puStack_a = (undefined2 *)0x987;
              func_0x000297e6();
              local_8 = (int *)0x22b2;
              puStack_a = (undefined2 *)0x98f;
              func_0x000297e6();
              local_8 = (int *)0x22b2;
              puStack_a = (undefined2 *)0x994;
              FUN_28b3_1181();
              if (!(bool)uVar7) {
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0x99e;
                func_0x000297e6();
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0x9a7;
                func_0x000297e6();
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0x9ac;
                FUN_28b3_1181();
                if (!(bool)uVar7 && !(bool)uVar8) {
                  *(undefined2 *)0x1d4 = local_3e;
                  *(undefined2 *)0x1d6 = local_3c;
                  puVar6 = (undefined2 *)0x22b2;
                  goto LAB_3ab8_5d9d;
                }
              }
              puVar6 = (undefined2 *)0x22b2;
            }
            goto LAB_3ab8_5d04;
          }
LAB_3ab8_5d9d:
          if (local_b6 == 4) {
            local_3e = *(undefined2 *)0x1d8;
            local_3c = *(undefined2 *)0x1da;
            local_42 = *(undefined2 *)0xa2a0;
            local_40 = *(undefined2 *)0xa2a2;
            local_8 = (int *)0x271c;
            puStack_a = (undefined2 *)0x36;
            puStack_c = (undefined2 *)local_ba;
            puStack_e = local_b2;
            puStack_10 = &local_42;
            puStack_12 = &local_3e;
            puVar5 = (undefined2 *)0xad;
            uStack_16 = 0x960;
            puStack_14 = puVar6;
            iVar3 = func_0x000021a4();
            puVar6 = puVar5;
            if ((*(int *)0x158 != 0) || (iVar3 == -1)) goto LAB_3ab8_5e46;
            if (iVar3 == 99) goto LAB_3ab8_5943;
            uVar7 = 0;
            uVar8 = iVar3 == 0;
            if ((bool)uVar8) {
              local_8 = (int *)0xad;
              puStack_a = (undefined2 *)0xa2f;
              func_0x000297e6();
              local_8 = (int *)0x22b2;
              puStack_a = (undefined2 *)0xa38;
              func_0x000297e6();
              local_8 = (int *)0x22b2;
              puStack_a = (undefined2 *)0xa3d;
              FUN_28b3_1181();
              if ((bool)uVar7 || (bool)uVar8) {
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0xa47;
                func_0x000297e6();
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0xa50;
                func_0x000297e6();
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0xa55;
                FUN_28b3_1181();
                if (!(bool)uVar7 && !(bool)uVar8) {
                  *(undefined2 *)0x1d8 = local_3e;
                  *(undefined2 *)0x1da = local_3c;
                  puVar6 = (undefined2 *)0x22b2;
                  goto LAB_3ab8_5e46;
                }
              }
              puVar6 = (undefined2 *)0x22b2;
            }
            goto LAB_3ab8_5d9d;
          }
LAB_3ab8_5e46:
          if (local_b6 == 5) {
            local_3e = *(undefined2 *)0x1132;
            local_3c = *(undefined2 *)0x1134;
            local_42 = *(undefined2 *)0xa2a0;
            local_40 = *(undefined2 *)0xa2a2;
            local_8 = (int *)0x271e;
            puStack_a = (undefined2 *)0x36;
            puStack_c = (undefined2 *)local_ba;
            puStack_e = local_b2;
            puStack_10 = &local_42;
            puStack_12 = &local_3e;
            puVar5 = (undefined2 *)0xad;
            uStack_16 = 0xa09;
            puStack_14 = puVar6;
            iVar3 = func_0x000021a4();
            puVar6 = puVar5;
            if ((*(int *)0x158 != 0) || (iVar3 == -1)) goto LAB_3ab8_5eef;
            if (iVar3 == 99) goto LAB_3ab8_5943;
            uVar7 = 0;
            if (iVar3 == 0) {
              local_8 = (int *)0xad;
              puStack_a = (undefined2 *)0xad9;
              func_0x00029834();
              local_8 = (int *)0x22b2;
              puStack_a = (undefined2 *)0xae1;
              func_0x000297e6();
              local_8 = (int *)0x22b2;
              puStack_a = (undefined2 *)0xae6;
              func_0x00029d78();
              local_8 = (int *)0x22b2;
              puStack_a = (undefined2 *)0xaeb;
              FUN_28b3_1181();
              if (!(bool)uVar7) {
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0xaf5;
                func_0x000297e6();
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0xafe;
                func_0x000297e6();
                local_8 = (int *)0x22b2;
                puStack_a = (undefined2 *)0xb03;
                FUN_28b3_1181();
                if (!(bool)uVar7) {
                  *(undefined2 *)0x1132 = local_3e;
                  *(undefined2 *)0x1134 = local_3c;
                  puVar6 = (undefined2 *)0x22b2;
                  goto LAB_3ab8_5eef;
                }
              }
              puVar6 = (undefined2 *)0x22b2;
            }
            goto LAB_3ab8_5e46;
          }
LAB_3ab8_5eef:
          puVar5 = puVar6;
          if (local_b6 != 6) goto LAB_3ab8_5f9d;
          local_3e = *(undefined2 *)0x1136;
          local_3c = *(undefined2 *)0x1138;
          local_42 = *(undefined2 *)0xa2a0;
          local_40 = *(undefined2 *)0xa2a2;
          local_8 = (int *)0x2720;
          puStack_a = (undefined2 *)0x36;
          puStack_c = (undefined2 *)local_ba;
          puStack_e = local_b2;
          puStack_10 = &local_42;
          puStack_12 = &local_3e;
          puVar5 = (undefined2 *)0xad;
          uStack_16 = 0xab2;
          puStack_14 = puVar6;
          iVar3 = func_0x000021a4();
          if ((*(int *)0x158 != 0) || (iVar3 == -1)) goto LAB_3ab8_5f9d;
          if (iVar3 != 99) goto LAB_3ab8_5ff4;
        } while( true );
      }
    }
  } while( true );
LAB_3ab8_5ff4:
  uVar7 = 0;
  puVar6 = puVar5;
  if (iVar3 == 0) {
    local_8 = (int *)0xad;
    puStack_a = (undefined2 *)0xb84;
    func_0x00029834();
    local_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xb8c;
    func_0x000297e6();
    local_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xb91;
    func_0x00029d78();
    local_8 = (int *)0x22b2;
    puStack_a = (undefined2 *)0xb96;
    FUN_28b3_1181();
    if (!(bool)uVar7) {
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0xba0;
      func_0x000297e6();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0xba9;
      func_0x000297e6();
      local_8 = (int *)0x22b2;
      puStack_a = (undefined2 *)0xbae;
      FUN_28b3_1181();
      if (!(bool)uVar7) {
        *(undefined2 *)0x1136 = local_3e;
        *(undefined2 *)0x1138 = local_3c;
        puVar5 = (undefined2 *)0x22b2;
LAB_3ab8_5f9d:
        if ((local_b6 == 7) && (*(int *)0x1128 = *(int *)0x1128 + 1, 2 < *(int *)0x1128)) {
          *(undefined2 *)0x1128 = 0;
        }
        if (local_b6 == 8) {
          *(uint *)0x112a = (uint)(*(int *)0x112a == 0);
        }
        if ((local_b6 == 9) && (*(int *)0x112c = *(int *)0x112c + 1, 2 < *(int *)0x112c)) {
          *(undefined2 *)0x112c = 0;
        }
        if (*(int *)0x158 != 0) goto LAB_3ab8_6043;
        goto LAB_3ab8_54ef;
      }
    }
    puVar6 = (undefined2 *)0x22b2;
  }
  goto LAB_3ab8_5eef;
}


