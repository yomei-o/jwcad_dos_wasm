/* 3ab8:096d */

/* WARNING: Type propagation algorithm not settling */

void __cdecl16far
FUN_3ab8_096d(uint param_1,uint param_2,int *param_3,undefined2 param_4,undefined1 *param_5,
             undefined2 *******param_6,undefined2 param_7,int *param_8,uint *param_9,uint *param_10,
             uint *param_11,undefined2 param_12,undefined2 param_13,undefined2 param_14,
             undefined2 param_15,undefined2 param_16,undefined2 param_17,undefined2 *param_18,
             undefined2 **param_19,undefined2 param_20,undefined2 param_21,undefined2 param_22,
             undefined2 param_23,undefined2 param_24,undefined2 param_25,undefined2 param_26,
             undefined2 param_27,undefined2 param_28,uint param_29,undefined2 ******param_30,
             undefined2 param_31,undefined1 *param_32,undefined2 *******param_33)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 ***pppuVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 ***pppuVar8;
  undefined2 *******pppppppuVar9;
  undefined2 *******pppppppuVar10;
  undefined2 unaff_SS;
  undefined2 **unaff_DS;
  bool bVar11;
  undefined2 *puVar12;
  uint local_6c;
  uint local_6a;
  uint local_4e;
  uint local_4c;
  undefined2 *local_2a;
  undefined2 **local_28;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  uint local_14;
  undefined2 *******local_12;
  undefined2 local_10;
  undefined1 *puStack_e;
  undefined2 *******pppppppuStack_c;
  undefined2 **local_8;
  uint uVar13;
  uint uVar14;
  
  pppppppuVar9 = (undefined2 *******)0x22b2;
  FUN_21f2_0ebc();
  if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1 == 0)))) {
    if (param_11[1] == 0 && *param_11 == 0) {
      FUN_3ab8_0e44();
      return;
    }
    if (((int)param_10[1] <= *(int *)0x13e) &&
       (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
      local_4e = *(uint *)0x148;
      local_4c = *(int *)0x14a + (uint)(0xfffe < local_4e);
      while( true ) {
        local_4e = local_4e + 1;
        if (((int)param_10[1] < (int)local_4c) ||
           (((int)param_10[1] <= (int)local_4c && (*param_10 < local_4e)))) break;
        puStack_e = (undefined1 *)0xb5c0;
        pppppppuStack_c = pppppppuVar9;
        puVar12 = (undefined2 *)func_0x0000013f();
        puVar7 = (undefined2 *)puVar12;
        pppuVar8 = &local_28;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          pppuVar3 = pppuVar8;
          pppuVar8 = pppuVar8 + 1;
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          *pppuVar3 = (undefined2 **)*puVar2;
        }
        iVar5 = *(int *)((local_18 & 0xff) * 2 + 0xa88);
        pppppppuStack_c = (undefined2 *******)0x0;
        puStack_e = (undefined1 *)0xb5ed;
        func_0x000297e6();
        pppppppuStack_c = (undefined2 *******)0x22b2;
        puStack_e = (undefined1 *)0xb5f2;
        func_0x00029d78();
        pppppppuStack_c = (undefined2 *******)0x22b2;
        puStack_e = (undefined1 *)0xb5f7;
        pppppppuStack_c = (undefined2 *******)FUN_28b3_0f51();
        puStack_e = (undefined1 *)0x22b2;
        local_10 = 0xb600;
        func_0x000297e6();
        puStack_e = (undefined1 *)0x22b2;
        local_10 = 0xb605;
        func_0x00029d78();
        puStack_e = (undefined1 *)0x22b2;
        local_10 = 0xb60a;
        puStack_e = (undefined1 *)FUN_28b3_0f51();
        local_10 = 0x22b2;
        local_12 = (undefined2 *******)0xb613;
        func_0x000297e6();
        local_10 = 0x22b2;
        local_12 = (undefined2 *******)0xb618;
        func_0x00029d78();
        local_10 = 0x22b2;
        local_12 = (undefined2 *******)0xb61d;
        local_10 = FUN_28b3_0f51();
        local_12 = (undefined2 *******)0x22b2;
        local_14 = 0xb626;
        func_0x000297e6();
        local_12 = (undefined2 *******)0x22b2;
        local_14 = 0xb62b;
        func_0x00029d78();
        local_12 = (undefined2 *******)0x22b2;
        local_14 = 0xb630;
        local_12 = (undefined2 *******)FUN_28b3_0f51();
        local_14 = 0x22b2;
        pppppppuVar9 = (undefined2 *******)0xdef;
        uStack_16 = 0xb636;
        func_0x0000f19e();
        if (iVar5 != 0) {
          if (((byte)local_4e & 0xf) == 0xf) {
            pppppppuStack_c = param_6;
            puStack_e = param_5;
            local_10 = param_4;
            local_12 = (undefined2 *******)0xdef;
            pppppppuVar9 = (undefined2 *******)0x3bf;
            local_14 = 0xb662;
            iVar5 = func_0x00006608();
            *param_3 = iVar5;
            if (*(char *)0xc0e != '\0') {
              FUN_3ab8_0e44();
              return;
            }
            if ((*param_3 != 0) || (*param_8 != 0)) {
              pppppppuStack_c = (undefined2 *******)0xb68f;
              func_0x0000daa6();
              pppppppuVar9 = (undefined2 *******)0x885;
              func_0x0000c3ca();
            }
          }
          else if ((*(byte *)0xc3be & 1) == 0) {
            pppppppuVar9 = (undefined2 *******)0x885;
            pppppppuStack_c = (undefined2 *******)0xb596;
            func_0x0000daa6();
          }
          else {
            pppppppuVar9 = (undefined2 *******)0x885;
            func_0x0000dc89();
          }
        }
        local_4c = local_4c + (0xfffe < local_4e);
      }
      param_11[1] = 0;
      *param_11 = 0;
      uVar4 = *(uint *)0x14a;
      *param_10 = *(uint *)0x148;
      param_10[1] = uVar4;
      FUN_3ab8_0e44();
      return;
    }
    local_6c = 1;
    local_6a = 0;
    if (param_9[1] != 0 || *param_9 != 0) {
      local_6c = *param_9;
      local_6a = param_9[1];
    }
    uVar13 = *param_11;
    uVar14 = param_11[1];
    param_11[1] = 0;
    *param_11 = 0;
    uVar4 = *(uint *)0x148;
    uVar6 = *(uint *)0x14a;
    param_11 = param_10;
  }
  else {
    local_6c = param_1;
    local_6a = param_2;
    uVar4 = param_1;
    uVar6 = param_2;
    uVar13 = param_1;
    uVar14 = param_2;
  }
  *param_11 = uVar4;
  param_11[1] = uVar6;
  local_4e = local_6c;
  local_4c = local_6a;
  while( true ) {
    if ((int)uVar14 < (int)local_4c) {
      FUN_3ab8_0e44();
      return;
    }
    if (((int)uVar14 <= (int)local_4c) && (uVar13 < local_4e)) break;
    pppppppuVar10 = (undefined2 *******)0x0;
    puStack_e = (undefined1 *)0xb749;
    pppppppuStack_c = pppppppuVar9;
    puVar12 = (undefined2 *)func_0x0000013f();
    puVar7 = (undefined2 *)puVar12;
    pppuVar8 = &local_28;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      pppuVar3 = pppuVar8;
      pppuVar8 = pppuVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *pppuVar3 = (undefined2 **)*puVar2;
    }
    local_8 = unaff_DS;
    if (((local_14 & 2) != 0) && (local_18._1_1_ < 0x5a)) {
      pppppppuStack_c = param_33;
      puStack_e = param_32;
      local_10 = param_31;
      local_12 = (undefined2 *******)param_30;
      local_14 = param_29;
      uStack_16 = param_28;
      local_18 = param_27;
      uStack_1a = param_26;
      local_1c = param_25;
      uStack_1e = param_24;
      local_20 = param_23;
      uStack_22 = param_22;
      local_24 = param_21;
      uStack_26 = param_20;
      local_28 = param_19;
      local_2a = param_18;
      FUN_3ab8_0568(&local_28,param_12,param_13,param_14,param_15,param_16,param_17);
      func_0x000297e6();
      func_0x000299d1();
      func_0x000297e6();
      func_0x000299d1();
      func_0x000297e6();
      func_0x000299d1();
      local_8 = (undefined2 **)0x22b2;
      func_0x000297e6();
      local_10 = 0x22b2;
      local_12 = (undefined2 *******)0xb802;
      func_0x000299d1();
      local_10 = 0x22b2;
      local_12 = (undefined2 *******)0xb80a;
      func_0x000297e6();
      local_18 = 0x22b2;
      uStack_1a = 0xb814;
      func_0x000299d1();
      local_18 = 0x22b2;
      uStack_1a = 0xb81c;
      func_0x000297e6();
      local_20 = 0x22b2;
      uStack_22 = 0xb826;
      func_0x000299d1();
      local_20 = 0x22b2;
      uStack_22 = 0xb82e;
      func_0x000297e6();
      local_20 = 0x22b2;
      uStack_22 = 0xb833;
      func_0x00029d78();
      local_20 = 0x22b2;
      uStack_22 = 0xb83b;
      func_0x000299b9();
      local_28 = (undefined2 **)0x22b2;
      local_2a = (undefined2 *)0xb845;
      func_0x000299d1();
      local_28 = &local_2a;
      local_2a = &local_10;
      pppppppuVar10 = (undefined2 *******)0x1bb4;
      iVar5 = FUN_1885_52fe(&stack0xfff6,&local_12);
      if (iVar5 == 0) {
        local_8 = &local_2a;
        pppppppuStack_c = &local_12;
        puStack_e = &stack0xfff6;
        local_10 = 0x1bb4;
        pppppppuVar10 = (undefined2 *******)0x1b6e;
        local_12 = (undefined2 *******)0xb879;
        iVar5 = func_0x0001b72d();
        if (iVar5 != 0) {
          FUN_28b3_0d8b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x00029983();
          local_8 = (undefined2 **)*(uint *)((local_18 & 0xff) * 2 + 0xa88);
          pppppppuStack_c = (undefined2 *******)0x22b2;
          puStack_e = (undefined1 *)0xb8ce;
          FUN_28b3_0d8b();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          puStack_e = (undefined1 *)0xb8d3;
          func_0x00029d78();
          pppppppuStack_c = (undefined2 *******)0x22b2;
          puStack_e = (undefined1 *)0xb8d8;
          pppppppuStack_c = (undefined2 *******)FUN_28b3_0f51();
          puStack_e = (undefined1 *)0x22b2;
          local_10 = 0xb8e1;
          FUN_28b3_0d8b();
          puStack_e = (undefined1 *)0x22b2;
          local_10 = 0xb8e6;
          func_0x00029d78();
          puStack_e = (undefined1 *)0x22b2;
          local_10 = 0xb8eb;
          puStack_e = (undefined1 *)FUN_28b3_0f51();
          local_10 = 0x22b2;
          local_12 = (undefined2 *******)0xb8f4;
          FUN_28b3_0d8b();
          local_10 = 0x22b2;
          local_12 = (undefined2 *******)0xb8f9;
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = (undefined2 *******)0xb8fe;
          local_10 = FUN_28b3_0f51();
          local_12 = (undefined2 *******)0x22b2;
          local_14 = 0xb907;
          FUN_28b3_0d8b();
          local_12 = (undefined2 *******)0x22b2;
          local_14 = 0xb90f;
          func_0x0002996b();
          local_12 = (undefined2 *******)0x22b2;
          local_14 = 0xb914;
          func_0x00029d78();
          local_12 = (undefined2 *******)0x22b2;
          local_14 = 0xb919;
          local_12 = (undefined2 *******)FUN_28b3_0f51();
          local_14 = 0x22b2;
          pppppppuVar10 = (undefined2 *******)0xdef;
          uStack_16 = 0xb91f;
          func_0x0000f19e();
          if (param_2 != 0 || param_1 != 0) {
            puVar1 = param_10;
            uVar4 = *puVar1;
            *puVar1 = *puVar1 + 1;
            param_10[1] = param_10[1] + (uint)(0xfffe < uVar4);
            if (((int)param_10[1] <= *(int *)0x13e) &&
               (((int)param_10[1] < *(int *)0x13e || (*param_10 < *(uint *)0x13c)))) {
              local_8 = (undefined2 **)param_10[1];
              pppppppuStack_c = (undefined2 *******)0xdef;
              pppppppuVar10 = (undefined2 *******)0x0;
              puStack_e = (undefined1 *)0xb950;
              puVar12 = (undefined2 *)func_0x0000013f();
              puVar7 = (undefined2 *)puVar12;
              pppuVar8 = &local_28;
              for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar2 = puVar7;
                puVar7 = puVar7 + 1;
                pppuVar3 = pppuVar8;
                pppuVar8 = pppuVar8 + 1;
                *puVar2 = *pppuVar3;
              }
            }
          }
        }
      }
    }
    if (local_8 != (undefined2 **)0x0) {
      if (((byte)local_4e & 0x7f) == 0x7f) {
        pppppppuStack_c = param_6;
        puStack_e = param_5;
        local_10 = param_4;
        local_14 = 0xb98c;
        local_12 = pppppppuVar10;
        iVar5 = func_0x00006608();
        *param_3 = iVar5;
        if (*(char *)0xc0e != '\0') {
          return;
        }
        if ((*param_3 != 0) || (pppppppuVar10 = (undefined2 *******)0x3bf, *param_8 != 0)) {
          pppppppuStack_c = (undefined2 *******)0xb9b6;
          func_0x0000daa6();
          func_0x0000c3ca();
          pppppppuVar10 = (undefined2 *******)0x885;
        }
      }
      else if ((*(byte *)0xc3be & 1) == 0) {
        pppppppuStack_c = (undefined2 *******)0xb721;
        func_0x0000daa6();
        pppppppuVar10 = (undefined2 *******)0x885;
      }
      else {
        func_0x0000dc89();
        pppppppuVar10 = (undefined2 *******)0x885;
      }
    }
    bVar11 = 0xfffe < local_4e;
    local_4e = local_4e + 1;
    local_4c = local_4c + bVar11;
    pppppppuVar9 = pppppppuVar10;
  }
  FUN_3ab8_0e44();
  return;
}


