/* Ghidra decompilation of jw11.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  84 bytes, 0 callers */

void __cdecl16far FUN_3ab8_0000(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_7e [114];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uVar2 = 0x22b2;
  uStack_6 = 0xab8b;
  FUN_21f2_0ebc();
  if (param_1 == 0) {
    puStack_4 = (undefined1 *)0x0;
    uStack_6 = 0x22b2;
    uVar2 = 0x7a6;
    uStack_8 = 0xab99;
    func_0x00008095();
  }
  if (*(int *)0xca0 != 0) {
    puStack_4 = local_7e;
    uStack_6 = 0;
    uStack_8 = 0xca;
    uStack_c = 0xabb1;
    uStack_a = uVar2;
    iVar1 = func_0x000276d7();
    if (iVar1 == 0) {
      puStack_4 = (undefined1 *)0xca;
      uStack_6 = 0x22b2;
      uStack_8 = 0xabc1;
      iVar1 = func_0x00027698();
      if (iVar1 != 0) {
        puStack_4 = (undefined1 *)0xca;
        uStack_6 = 0x22b2;
        uStack_8 = 0xabcf;
        FUN_13bf_0a03();
      }
    }
  }
  return;
}



/* 3ab8:0054  FUN_3ab8_0054  543 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_0054(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  
  FUN_21f2_0ebc();
  FUN_1885_2ec3(0x22b2);
  uVar4 = 0x11f2;
  func_0x00013e19(0x1b6e);
  iVar3 = param_2 * 4;
  iVar2 = *(int *)(iVar3 + param_3 + 2);
  if ((iVar2 < -0x2d) && ((iVar2 < -0x2e || (*(uint *)(iVar3 + param_3) < 0x3940)))) {
    iVar2 = 0x3940 - *(uint *)(iVar3 + param_3);
    iVar3 = (-0x2e - *(int *)(iVar3 + param_3 + 2)) - (uint)(0x3940 < *(uint *)(iVar3 + param_3));
    uVar6 = 1;
    if (param_1 == 0) {
      iVar8 = iVar2;
      if (*(int *)(param_2 * 2 + param_4) == 0) {
        iVar8 = 0x11f2;
        uVar4 = 0;
        uVar6 = 0xac73;
        uVar5 = func_0x00000398(0x11f2,iVar2,iVar3);
        pbVar1 = (byte *)((int)uVar5 + 0x16);
        *pbVar1 = *pbVar1 & 0xfd;
      }
    }
    else {
      uVar7 = 0x11f2;
      uVar5 = func_0x00000398(0x11f2,iVar2,iVar3);
      *(uint *)(param_2 * 2 + param_4) = (*(byte *)((int)uVar5 + 0x16) & 2) >> 1;
      iVar8 = 0;
      uVar4 = 0;
      uVar6 = 0xac4d;
      uVar5 = func_0x00000398(0,uVar7);
      pbVar1 = (byte *)((int)uVar5 + 0x16);
      *pbVar1 = *pbVar1 | 2;
    }
    func_0x00008009(uVar4,uVar6,iVar8);
    uVar4 = 3;
  }
  else {
    iVar3 = param_2 * 4;
    iVar2 = *(int *)(iVar3 + param_3 + 2);
    if ((iVar2 < -0x1e) && ((iVar2 < -0x1f || (*(uint *)(iVar3 + param_3) < 0x7b80)))) {
      iVar2 = 0x7b80 - *(uint *)(iVar3 + param_3);
      iVar3 = (-0x1f - *(int *)(iVar3 + param_3 + 2)) - (uint)(0x7b80 < *(uint *)(iVar3 + param_3));
      uVar6 = 1;
      if (param_1 == 0) {
        iVar8 = iVar3;
        if (*(int *)(param_2 * 2 + param_4) == 0) {
          uVar6 = 0x11f2;
          uVar4 = 0;
          uVar5 = func_0x00000271(0x11f2,iVar2,iVar3);
          pbVar1 = (byte *)((int)uVar5 + 0x1e);
          *pbVar1 = *pbVar1 & 0xfd;
          iVar2 = iVar3;
        }
      }
      else {
        uVar5 = func_0x00000271(0x11f2,iVar2,iVar3);
        *(uint *)(param_2 * 2 + param_4) = (*(byte *)((int)uVar5 + 0x1e) & 2) >> 1;
        uVar6 = 0;
        uVar4 = 0;
        iVar8 = iVar3;
        uVar5 = func_0x00000271(0,iVar3);
        pbVar1 = (byte *)((int)uVar5 + 0x1e);
        *pbVar1 = *pbVar1 | 2;
        iVar2 = iVar3;
      }
      func_0x00007d9b(uVar4,uVar6,-iVar2,-(iVar8 + (uint)(iVar2 != 0)));
      uVar4 = 2;
    }
    else {
      iVar3 = param_2 * 4;
      iVar2 = *(int *)(iVar3 + param_3 + 2);
      if ((iVar2 < -0xf) && ((iVar2 < -0x10 || (*(uint *)(iVar3 + param_3) < 0xbdc0)))) {
        iVar2 = -0x4240 - *(uint *)(iVar3 + param_3);
        iVar3 = (-0x10 - *(int *)(iVar3 + param_3 + 2)) -
                (uint)(0xbdc0 < *(uint *)(iVar3 + param_3));
        uVar6 = 1;
        if (param_1 == 0) {
          if (*(int *)(param_2 * 2 + param_4) == 0) {
            uVar6 = 0x11f2;
            uVar4 = 0;
            uVar5 = func_0x0000013f(0x11f2,iVar2,iVar3);
            pbVar1 = (byte *)((int)uVar5 + 0x14);
            *pbVar1 = *pbVar1 & 0xfd;
          }
        }
        else {
          uVar5 = func_0x0000013f(0x11f2,iVar2,iVar3);
          *(uint *)(param_2 * 2 + param_4) = (*(byte *)((int)uVar5 + 0x14) & 2) >> 1;
          uVar6 = 0;
          uVar4 = 0;
          uVar5 = func_0x0000013f(0,iVar3);
          pbVar1 = (byte *)((int)uVar5 + 0x14);
          *pbVar1 = *pbVar1 | 2;
        }
        func_0x00007d9b(uVar4,uVar6,iVar3);
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



/* 3ab8:0273  FUN_3ab8_0273  1061 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_0273(int param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_3e;
  int local_3c;
  int iVar9;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined2 uStack_22;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  
  FUN_21f2_0ebc();
  local_18 = 10000;
  local_c = 0;
  local_e = 0;
  local_14 = 0;
  local_16 = 0;
  local_10 = 0;
  local_12 = 0;
  local_8 = 0x22b2;
  local_a = 0xae30;
  func_0x000297e6();
  local_8 = 0x22b2;
  local_a = 0xae39;
  func_0x00029b85();
  local_8 = 0x22b2;
  local_a = 0xae41;
  func_0x0002996b();
  local_8 = 0x22b2;
  local_a = 0xae49;
  func_0x00029983();
  local_8 = 0x22b2;
  local_a = 0xae51;
  func_0x000297e6();
  local_8 = 0x22b2;
  local_a = 0xae59;
  func_0x00029983();
  local_8 = 0x22b2;
  local_a = 0xae5e;
  FUN_1885_2ec3();
  local_8 = 0x1b6e;
  uVar8 = 0x11f2;
  local_a = 0xae63;
  func_0x00013e19();
  iVar9 = -1;
  local_3e = 0;
  for (local_3c = 0; local_3c <= param_2; local_3c = local_3c + 1) {
    if (*(int *)(local_3c * 4 + param_5 + 2) == 0 && *(int *)(local_3c * 4 + param_5) == 0) {
      local_3e = 0;
      iVar9 = -1;
    }
    else {
      if ((local_3c < param_2) || (param_1 == 0)) {
        local_a = 0xae9d;
        local_8 = uVar8;
        func_0x000297e6();
        local_8 = 0x22b2;
        local_a = 0xaea5;
        func_0x0002996b();
        local_8 = 0x22b2;
        local_a = 0xaead;
        func_0x00029983();
        local_8 = 0x22b2;
        local_a = 0xaeb7;
        func_0x000297e6();
        local_8 = 0x22b2;
        local_a = 0xaebf;
        func_0x0002996b();
        local_8 = 0x22b2;
        local_a = 0xaec7;
        func_0x00029983();
        local_8 = 0x22b2;
        local_a = 0xaecf;
        func_0x000297e6();
        local_8 = 0x22b2;
        local_a = 0xaed7;
        func_0x00029983();
        puVar7 = &uStack_26;
        puVar6 = &local_24;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        uVar8 = 0x11f2;
        iVar9 = -0x5115;
        func_0x00013e46(0x22b2);
      }
      if (local_3c == 0) {
        local_8 = 2;
        local_c = 0xaf03;
        local_a = uVar8;
        func_0x000297e6();
        local_a = 0x22b2;
        local_c = 0xaf08;
        func_0x00029d78();
        local_12 = 0x22b2;
        local_14 = 0xaf12;
        func_0x000299d1();
        local_12 = 0x22b2;
        local_14 = 0xaf1a;
        func_0x000297e6();
        local_12 = 0x22b2;
        local_14 = 0xaf22;
        func_0x00029bb5();
        local_12 = 0x22b2;
        local_14 = 0xaf27;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        local_1c = 0xaf31;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        local_1c = 0xaf39;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        local_1c = 0xaf3e;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        local_24 = 0xaf48;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        local_24 = 0xaf50;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        local_24 = 0xaf58;
        FUN_28b3_100d();
        uStack_22 = 0x22b2;
        local_24 = 0xaf5d;
        func_0x00029d78();
        func_0x000299d1(0x22b2);
        func_0x0001e18f(0x22b2);
        local_8 = 2;
        local_a = 0x1bb4;
        local_c = 0xaf7b;
        func_0x000297e6();
        local_a = 0x22b2;
        local_c = 0xaf83;
        func_0x00029bb5();
        local_a = 0x22b2;
        local_c = 0xaf88;
        func_0x00029d78();
        local_12 = 0x22b2;
        local_14 = 0xaf92;
        func_0x000299d1();
        local_12 = 0x22b2;
        local_14 = 0xaf9a;
        func_0x000297e6();
        local_12 = 0x22b2;
        local_14 = 0xaf9f;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        local_1c = 0xafa9;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        local_1c = 0xafb1;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        local_1c = 0xafb9;
        FUN_28b3_100d();
        uStack_1a = 0x22b2;
        local_1c = 0xafbe;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        local_24 = 45000;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        local_24 = 0xafd0;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        local_24 = 0xafd5;
        func_0x00029d78();
        func_0x000299d1(0x22b2);
        iVar9 = 0x22b2;
        func_0x0001e18f();
      }
      if (-1 < iVar9) {
        func_0x000297e6();
        param_5 = -0x4ff2;
        func_0x00029d78();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        local_a = 0x22b2;
        local_c = 0xb052;
        func_0x000299d1();
        local_a = 0x22b2;
        local_c = 0xb05c;
        func_0x000297e6();
        local_a = 0x22b2;
        local_c = 0xb061;
        func_0x00029d78();
        local_12 = 0x22b2;
        local_14 = 0xb06b;
        func_0x000299d1();
        local_12 = 0x22b2;
        local_14 = 0xb070;
        func_0x0001e18f();
      }
      bVar3 = false;
      if (((*(int *)(local_3c * 4 + param_5) == 1) && (*(int *)(local_3c * 4 + param_5 + 2) == 0))
         && (1 < local_3e)) {
        bVar3 = true;
      }
      iVar5 = 0;
      param_5 = *(int *)(local_3c * 4 + param_5 + 2);
      iVar4 = FUN_21f2_5a44();
      if (((iVar4 == 2) && (iVar5 == 0)) && (1 < local_3e)) {
        bVar3 = true;
      }
      if ((1 < local_3e) && ((local_3c == -0x4f51 || (bVar3)))) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        local_a = 0x22b2;
        local_c = 0xb11d;
        func_0x000299d1();
        local_a = 0x22b2;
        local_c = 0xb12f;
        func_0x000297e6();
        local_a = 0x22b2;
        local_c = 0xb134;
        func_0x00029d78();
        local_12 = 0x22b2;
        local_14 = 0xb13e;
        func_0x000299d1();
        local_12 = 0x22b2;
        local_14 = 0xb148;
        func_0x000297e6();
        local_12 = 0x22b2;
        local_14 = 0xb14d;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        local_1c = 0xb157;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        local_1c = 0xb15c;
        func_0x0001e18f();
      }
      iVar4 = *(int *)(local_3c * 4 + param_5 + 2);
      if ((iVar4 < 1) && ((iVar4 < 0 || (*(uint *)(local_3c * 4 + param_5) < 2)))) {
        local_3e = 0;
        iVar9 = -1;
      }
      iVar5 = 0;
      param_2 = 10;
      param_1 = *(int *)(local_3c * 4 + param_5 + 2);
      iVar4 = FUN_21f2_5a44();
      if ((iVar4 == 2) && (iVar5 == 0)) {
        local_3e = 0;
        iVar9 = local_3c;
      }
      iVar5 = 0;
      local_8 = 0x22b2;
      uVar8 = 0x22b2;
      local_a = 0xb1cc;
      iVar4 = FUN_21f2_5a44();
      if ((iVar4 == 3) && (iVar5 == 0)) {
        local_3e = local_3e + 1;
        iVar9 = local_3c;
      }
    }
  }
  return;
}



/* 3ab8:0698  FUN_3ab8_0698  962 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_0698(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 *param_5,undefined2 *param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  FUN_21f2_0ebc();
  uVar6 = *(int *)0xcb6 == 0;
  *(undefined2 *)0xb30c = param_1;
  *(undefined2 *)0xb30e = param_2;
  *(undefined2 *)0xb37e = param_3;
  *(undefined2 *)0xb380 = param_4;
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar6) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar6) {
      return 0;
    }
  }
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x0002a178(0x22b2);
  uVar7 = &stack0x0000 == (undefined1 *)0x2;
  func_0x00029834();
  func_0x00029c2c();
  func_0x000297e6();
  func_0x00029d78();
  FUN_28b3_1163();
  func_0x00029983();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029d78();
  FUN_28b3_117c();
  iVar1 = FUN_28b3_0f51();
  uVar6 = (long)(int)((long)iVar1 * 0xf) != (long)iVar1 * 0xf;
  FUN_28b3_0d8b();
  func_0x0002996b();
  func_0x00029983();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029bb5();
  func_0x0002996b();
  func_0x00029d78();
  FUN_28b3_1181();
  if ((bool)uVar6 || (bool)uVar7) {
LAB_3ab8_0859:
    func_0x00029834();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar6 || (bool)uVar7) {
LAB_3ab8_08a0:
      func_0x00029834();
      func_0x000297e6();
      FUN_28b3_1181();
      uVar5 = uVar6;
      if (!(bool)uVar6 && !(bool)uVar7) {
        func_0x00029834();
        func_0x000297e6();
        FUN_28b3_1181();
        uVar5 = 0;
        if ((bool)uVar6) {
          uVar2 = *(undefined2 *)0x99d8;
          uVar4 = *(undefined2 *)0x99da;
          goto LAB_3ab8_0841;
        }
      }
      func_0x00029834();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar5) {
        func_0x00029834();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar5 && !(bool)uVar7) {
          uVar2 = *(undefined2 *)0x9986;
          *(undefined2 *)0xb76a = *(undefined2 *)0x9984;
          *(undefined2 *)0xb76c = uVar2;
          uVar2 = *(undefined2 *)0x99d8;
          uVar4 = *(undefined2 *)0x99da;
          goto LAB_3ab8_084f;
        }
      }
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029d78();
      func_0x000299b9();
      func_0x000299d1();
      func_0x0002a11e();
      func_0x00029834();
      func_0x00029983();
      func_0x00029834();
      func_0x000299d1();
      func_0x0002a10c();
      func_0x00029834();
      func_0x00029983();
      goto LAB_3ab8_098b;
    }
    func_0x00029834();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar6) goto LAB_3ab8_08a0;
    uVar2 = *(undefined2 *)0x9986;
    *(undefined2 *)0xb76a = *(undefined2 *)0x9984;
    *(undefined2 *)0xb76c = uVar2;
    uVar2 = *(undefined2 *)0x99b4;
    uVar4 = *(undefined2 *)0x99b6;
  }
  else {
    func_0x00029834();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar6) goto LAB_3ab8_0859;
    uVar2 = *(undefined2 *)0x99b4;
    uVar4 = *(undefined2 *)0x99b6;
LAB_3ab8_0841:
    *(undefined2 *)0xb76a = uVar2;
    *(undefined2 *)0xb76c = uVar4;
    uVar2 = *(undefined2 *)0x9984;
    uVar4 = *(undefined2 *)0x9986;
  }
LAB_3ab8_084f:
  *(undefined2 *)0xb784 = uVar2;
  *(undefined2 *)0xb786 = uVar4;
LAB_3ab8_098b:
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_1def_05d1(0x22b2,1);
  func_0x000297e6();
  func_0x0002996b();
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  puVar3 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
  uVar2 = puVar3[1];
  *param_5 = *puVar3;
  param_5[1] = uVar2;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  puVar3 = (undefined2 *)func_0x0001e558(0x22b2,0);
  uVar2 = puVar3[1];
  *param_6 = *puVar3;
  param_6[1] = uVar2;
  return 1;
}



/* 3ab8:0a5a  FUN_3ab8_0a5a  1410 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_0a5a(undefined2 *param_1,int param_2,undefined2 *param_3,int param_4,int param_5,
             undefined2 param_6)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_SI;
  int unaff_DI;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  long lVar8;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  int local_38;
  int local_36;
  int local_34;
  undefined4 local_32;
  undefined1 local_2e [4];
  int local_2a;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 *puStack_12;
  undefined2 *puStack_10;
  undefined2 *puStack_e;
  undefined2 *local_c;
  undefined2 *local_a;
  undefined2 **local_8;
  
  FUN_21f2_0ebc();
  local_36 = 99;
  local_8 = (undefined2 **)param_2;
  local_a = (undefined2 *)0x22b2;
  local_c = (undefined2 *)0xb5f4;
  iVar3 = func_0x00024ce4();
  local_c = (undefined2 *)0x22b2;
  for (local_2a = 0; puVar6 = local_c, local_2a < iVar3; local_2a = local_2a + 1) {
    if (*(char *)(param_2 + local_2a) == '|') {
      local_8 = (undefined2 **)local_2a;
      local_a = (undefined2 *)param_2;
      puVar6 = (undefined2 *)0x2a75;
      puStack_e = (undefined2 *)0xb621;
      iVar4 = func_0x0002aa38();
      if ((iVar4 == 0) && (local_8 != (undefined2 **)0x0)) break;
    }
    local_c = puVar6;
  }
LAB_3ab8_0ac5:
  do {
    do {
      iVar3 = *(int *)((int)param_1 * 4 + param_5 + 2);
      lVar8 = CONCAT22(local_32._2_2_,(undefined2)local_32);
      if ((iVar3 < 0) ||
         ((iVar3 < 1 &&
          (lVar8 = CONCAT22(local_32._2_2_,(undefined2)local_32),
          *(int *)((int)param_1 * 4 + param_5) == 0)))) goto LAB_3ab8_0d5b;
      puVar7 = puVar6;
      if (local_36 == 99) {
        local_34 = -9999;
        local_8 = (undefined2 **)0x1;
        local_a = (undefined2 *)0x1;
        puStack_e = (undefined2 *)0xb677;
        local_c = puVar6;
        FUN_1000_0599();
        local_8 = (undefined2 **)0xdef;
        local_a = (undefined2 *)0xb67e;
        func_0x00010526();
        local_8 = (undefined2 **)0x1;
        local_a = (undefined2 *)0x1;
        local_c = (undefined2 *)0xdef;
        puStack_e = (undefined2 *)0xb688;
        FUN_1000_0599();
        local_8 = (undefined2 **)0x728;
        local_a = (undefined2 *)0xdef;
        local_c = (undefined2 *)0xb693;
        func_0x00012276();
        local_8 = (undefined2 **)param_2;
        local_a = (undefined2 *)0x1de;
        local_c = (undefined2 *)0x11f2;
        puVar7 = (undefined2 *)0x11f2;
        puStack_e = (undefined2 *)0xb6a0;
        func_0x00012276();
      }
      *(undefined2 *)0xc20 = 1;
      local_8 = &local_c;
      local_a = &local_40;
      local_c = &local_3c;
      puStack_e = (undefined2 *)&stack0xfffa;
      puStack_10 = (undefined2 *)&stack0xfffc;
      puVar6 = (undefined2 *)0x3bf;
      uStack_14 = 0xb6c1;
      puStack_12 = puVar7;
      local_36 = func_0x00006608();
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) {
        return 0xff91;
      }
      if (local_36 == -1) {
        return 0xffff;
      }
      if ((((local_36 == 0x31) && (0 < (int)local_8)) && (0 < (int)local_a)) ||
         (((local_c != (undefined2 *)0x0 && (unaff_SI < 0x10)) &&
          (((int)local_8 < unaff_DI && (unaff_DI < (int)local_a)))))) {
        return 1;
      }
      if (unaff_SI < 0x10) {
        if ((1 < (int)param_1) && (local_c == (undefined2 *)0x2)) {
          iVar4 = (int)param_1 * 4;
          iVar3 = *(int *)(param_5 + iVar4 + -2);
          if ((-1 < iVar3) && ((0 < iVar3 || (1 < *(uint *)(param_5 + iVar4 + -4))))) {
            iVar3 = *(int *)(param_5 + iVar4 + -2);
            if ((iVar3 < 0) || ((iVar3 < 1 && (*(uint *)(param_5 + iVar4 + -4) < 0xb)))) {
              puVar1 = (uint *)(param_5 + (int)param_1 * 4 + -4);
              uVar5 = *puVar1;
              *puVar1 = *puVar1 + 10;
              piVar2 = (int *)(param_5 + (int)param_1 * 4 + -2);
              *piVar2 = *piVar2 + (uint)(0xfff5 < uVar5);
            }
            else {
              local_8 = (undefined2 **)0x0;
              local_a = (undefined2 *)0xa;
              local_c = (undefined2 *)(param_5 + iVar4 + -4);
              puStack_e = (undefined2 *)0x3bf;
              puStack_10 = (undefined2 *)0xb767;
              func_0x00027a5c();
              puVar6 = (undefined2 *)0x22b2;
            }
          }
        }
        goto LAB_3ab8_0ac5;
      }
      if ((local_34 != unaff_DI) || (local_38 != unaff_SI)) {
        if (1 < (int)param_1) {
          iVar4 = (int)param_1 * 4;
          iVar3 = *(int *)(param_5 + iVar4 + -2);
          if ((-1 < iVar3) && ((0 < iVar3 || (10 < *(uint *)(param_5 + iVar4 + -4))))) {
            local_8 = (undefined2 **)local_2e;
            local_a = &local_40;
            local_c = &local_3c;
            puStack_e = (undefined2 *)*(undefined2 *)(param_4 + iVar4 + -2);
            puStack_10 = (undefined2 *)*(undefined2 *)(param_4 + iVar4 + -4);
            puStack_12 = (undefined2 *)param_3[(int)param_1 * 2 + -1];
            uStack_14 = param_3[(int)param_1 * 2 + -2];
            uStack_16 = 0x3bf;
            uStack_18 = 0xb7cf;
            FUN_3ab8_0698();
            local_8 = (undefined2 **)0x2;
            local_a = (undefined2 *)0x14;
            local_c = (undefined2 *)0x3bf;
            puStack_e = (undefined2 *)0xb7df;
            FUN_1000_0599();
            *(undefined2 *)0xc22 = 1;
            local_8 = (undefined2 **)0xdef;
            local_a = (undefined2 *)0xb7ef;
            func_0x000297e6();
            local_8 = (undefined2 **)0x22b2;
            local_a = (undefined2 *)0xb7f4;
            func_0x00029d78();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0xb7fe;
            func_0x000299d1();
            puStack_10 = (undefined2 *)0x20a;
            puStack_12 = (undefined2 *)0x22b2;
            puVar6 = (undefined2 *)0x11f2;
            uStack_14 = 0xb807;
            func_0x00012276();
          }
        }
        param_3[(int)param_1 * 2] = local_3c;
        param_3[(int)param_1 * 2 + 1] = local_3a;
        *(undefined2 *)((int)param_1 * 4 + param_4) = local_40;
        *(undefined2 *)((int)param_1 * 4 + param_4 + 2) = local_3e;
        local_8 = (undefined2 **)param_5;
        local_a = (undefined2 *)param_4;
        local_c = param_3;
        puStack_e = param_1;
        puStack_10 = (undefined2 *)0x1;
        uStack_14 = 0xb849;
        local_38 = unaff_SI;
        local_34 = unaff_DI;
        puStack_12 = puVar6;
        FUN_3ab8_0273();
      }
    } while ((local_c == (undefined2 *)0x0) || (local_36 == 99));
    local_8 = (undefined2 **)&local_40;
    local_a = &local_3c;
    puStack_10 = (undefined2 *)0xb86b;
    puStack_e = puVar6;
    iVar3 = func_0x00015409();
    puVar6 = (undefined2 *)0x11f2;
  } while (iVar3 == 0);
  if (1 < (int)param_1) {
    iVar4 = (int)param_1 * 4;
    iVar3 = *(int *)(param_5 + iVar4 + -2);
    if ((-1 < iVar3) && ((0 < iVar3 || (10 < *(uint *)(param_5 + iVar4 + -4))))) {
      local_8 = (undefined2 **)local_2e;
      local_a = &local_40;
      local_c = &local_3c;
      puStack_e = (undefined2 *)*(undefined2 *)(param_4 + iVar4 + -2);
      puStack_10 = (undefined2 *)*(undefined2 *)(param_4 + iVar4 + -4);
      puStack_12 = (undefined2 *)param_3[(int)param_1 * 2 + -1];
      uStack_14 = param_3[(int)param_1 * 2 + -2];
      uStack_16 = 0x11f2;
      uStack_18 = 0xb8b5;
      FUN_3ab8_0698();
    }
  }
  param_3[(int)param_1 * 2] = local_3c;
  param_3[(int)param_1 * 2 + 1] = local_3a;
  *(undefined2 *)((int)param_1 * 4 + param_4) = local_40;
  *(undefined2 *)((int)param_1 * 4 + param_4 + 2) = local_3e;
  lVar8 = CONCAT22(local_32._2_2_,(undefined2)local_32);
LAB_3ab8_0d5b:
  do {
    do {
      if (-1 < *(int *)((int)param_1 * 4 + param_5 + 2)) goto LAB_3ab8_0fbe;
      local_8 = (undefined2 **)param_5;
      local_a = (undefined2 *)param_4;
      local_c = param_3;
      puStack_e = (undefined2 *)((int)param_1 + -1);
      puStack_10 = (undefined2 *)0x0;
      uStack_14 = 0xb901;
      puStack_12 = puVar6;
      local_32 = lVar8;
      FUN_3ab8_0273();
      *(undefined2 *)0xc20 = 1;
      local_8 = &local_c;
      local_a = &local_40;
      local_c = &local_3c;
      puStack_e = (undefined2 *)param_2;
      puStack_10 = (undefined2 *)0x270f;
      uStack_14 = 0xb922;
      puStack_12 = puVar6;
      local_36 = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      local_8 = (undefined2 **)0x1bb4;
      puVar6 = (undefined2 *)0x885;
      local_a = (undefined2 *)0xb933;
      func_0x0000c3ca();
      if (*(int *)0x158 != 0) {
        return 0xff91;
      }
      if (local_36 == -1) {
        return 0xffff;
      }
      if (local_36 == 1) {
        return 1;
      }
      lVar8 = local_32;
    } while (local_c == (undefined2 *)0x0);
    if ((*(int *)((int)param_1 * 4 + param_5) == -1) &&
       (*(int *)((int)param_1 * 4 + param_5 + 2) == -1)) {
      local_8 = (undefined2 **)0x885;
      local_a = (undefined2 *)0xb975;
      func_0x000297e6();
      local_8 = (undefined2 **)0x22b2;
      local_a = (undefined2 *)0xb97a;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xb984;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xb98c;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xb991;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xb99b;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      puVar6 = (undefined2 *)0x11f2;
      uStack_1a = 0xb9a0;
      lVar8 = FUN_13bf_39a0();
      if (lVar8 != 0) {
        if (-1 < lVar8) {
          param_3[(int)param_1 * 2] = local_3c;
          param_3[(int)param_1 * 2 + 1] = local_3a;
          *(undefined2 *)((int)param_1 * 4 + param_4) = local_40;
          *(undefined2 *)((int)param_1 * 4 + param_4 + 2) = local_3e;
          iVar3 = -0x4240 - (uint)lVar8;
          iVar4 = (-0x10 - (int)((ulong)lVar8 >> 0x10)) - (uint)(0xbdc0 < (uint)lVar8);
          goto LAB_3ab8_0e87;
        }
        *(undefined2 *)0xc22 = 1;
        local_8 = (undefined2 **)0x2;
        local_a = (undefined2 *)0x14;
        local_c = (undefined2 *)0x11f2;
        puStack_e = (undefined2 *)0xb9c9;
        local_32 = lVar8;
        FUN_1000_0599();
        local_8 = (undefined2 **)0x2be;
        local_a = (undefined2 *)0xdef;
        local_c = (undefined2 *)0xb9d4;
        func_0x00012276();
        puVar6 = (undefined2 *)0x11f2;
        lVar8 = local_32;
      }
      goto LAB_3ab8_0d5b;
    }
    if ((*(int *)((int)param_1 * 4 + param_5) == -2) &&
       (*(int *)((int)param_1 * 4 + param_5 + 2) == -1)) {
      *(undefined2 *)0xc20 = 0x14;
      local_8 = (undefined2 **)0x885;
      local_a = (undefined2 *)0xba47;
      func_0x000297e6();
      local_8 = (undefined2 **)0x22b2;
      local_a = (undefined2 *)0xba4c;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xba56;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xba5e;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xba63;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xba6d;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      puVar6 = (undefined2 *)0x11f2;
      uStack_1a = 0xba72;
      lVar8 = FUN_13bf_39a0();
      *(undefined2 *)0xc20 = 0;
      if (lVar8 < 0) {
        param_3[(int)param_1 * 2] = local_3c;
        param_3[(int)param_1 * 2 + 1] = local_3a;
        *(undefined2 *)((int)param_1 * 4 + param_4) = local_40;
        *(undefined2 *)((int)param_1 * 4 + param_4 + 2) = local_3e;
        iVar3 = (uint)lVar8 + 0x7b80;
        iVar4 = ((int)((ulong)lVar8 >> 0x10) + -0x1e) - (uint)((uint)lVar8 < 0x8480);
        goto LAB_3ab8_0e87;
      }
    }
    else if ((*(int *)((int)param_1 * 4 + param_5) == -3) &&
            (*(int *)((int)param_1 * 4 + param_5 + 2) == -1)) {
      local_8 = (undefined2 **)0x885;
      local_a = (undefined2 *)0xbad4;
      func_0x000297e6();
      local_8 = (undefined2 **)0x22b2;
      local_a = (undefined2 *)0xbad9;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xbae3;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xbaeb;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xbaf0;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xbafa;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      puVar6 = (undefined2 *)0x18b3;
      uStack_1a = 0xbaff;
      local_2a = func_0x0001b204();
      lVar8 = local_32;
      if (local_2a != 0) {
        param_3[(int)param_1 * 2] = local_3c;
        param_3[(int)param_1 * 2 + 1] = local_3a;
        *(undefined2 *)((int)param_1 * 4 + param_4) = local_40;
        *(undefined2 *)((int)param_1 * 4 + param_4 + 2) = local_3e;
        uVar5 = -local_2a;
        iVar3 = uVar5 + 0x3940;
        iVar4 = (((int)uVar5 >> 0xf) + -0x2d) - (uint)(uVar5 < 0xc6c0);
LAB_3ab8_0e87:
        *(int *)((int)param_1 * 4 + param_5) = iVar3;
        *(int *)((int)param_1 * 4 + param_5 + 2) = iVar4;
        local_8 = (undefined2 **)param_6;
        local_a = (undefined2 *)param_5;
        local_c = param_1;
        puStack_e = (undefined2 *)0x1;
        puStack_12 = (undefined2 *)0xba1e;
        puStack_10 = puVar6;
        local_32 = lVar8;
        FUN_3ab8_0054();
        lVar8 = local_32;
LAB_3ab8_0fbe:
        local_8 = (undefined2 **)param_5;
        local_a = (undefined2 *)param_4;
        local_c = param_3;
        puStack_e = param_1;
        puStack_10 = (undefined2 *)0x0;
        uStack_14 = 0xbb51;
        puStack_12 = puVar6;
        local_32 = lVar8;
        FUN_3ab8_0273();
        return 0;
      }
    }
  } while( true );
}



/* 3ab8:0fdc  FUN_3ab8_0fdc  70 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_0fdc(char *param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if (((((*param_1 == 'R') || (*param_1 == 'r')) && ((param_1[1] == 'E' || (param_1[1] == 'e')))) &&
      ((param_1[2] == 'M' || (param_1[2] == 'm')))) && ((param_1[3] == ' ' || (param_1[3] == '#'))))
  {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* 3ab8:1022  FUN_3ab8_1022  99 bytes, 2 callers */

void __cdecl16far FUN_3ab8_1022(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int iVar5;
  
  FUN_21f2_0ebc();
  puVar1 = (undefined1 *)func_0x00025b06(0x22b2,param_1,10);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = func_0x00024ce4(0x22b2,param_1);
  iVar5 = 0;
  uVar4 = 0x22b2;
  while( true ) {
    if (iVar2 <= iVar5) {
      return;
    }
    iVar2 = param_1;
    iVar3 = func_0x0002aa38(uVar4);
    if ((iVar3 == 0) && (*(char *)(param_1 + iVar5) == ' ')) break;
    iVar5 = iVar5 + 1;
    uVar4 = 0x2a75;
  }
  *(undefined1 *)(param_1 + iVar5) = 0;
  return;
}



/* 3ab8:1085  FUN_3ab8_1085  923 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_1085(undefined2 *param_1,undefined1 *param_2,undefined1 *param_3,undefined2 param_4,
             int *param_5,undefined2 *param_6,undefined2 *param_7,int *param_8,undefined2 *param_9,
             undefined2 param_10)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_14a [10];
  char local_140 [6];
  undefined1 auStack_13a [74];
  undefined1 local_f0 [4];
  undefined1 local_ec [3];
  char acStack_e9 [211];
  char local_16;
  char local_14;
  char *local_12;
  char *local_10;
  char *local_e;
  char *local_c;
  char *local_a;
  char *local_8;
  char **local_6;
  
  local_6 = (char **)0xbc10;
  FUN_21f2_0ebc();
  local_6 = (char **)0x254;
  local_8 = (char *)param_4;
  local_a = (char *)0x22b2;
  pcVar2 = (char *)0x22b2;
  local_c = (char *)0xbc1d;
  iVar1 = FUN_21f2_1348();
  *(int *)0xd70 = iVar1;
  if (iVar1 == 0) {
    local_6 = (char **)0x568;
    local_8 = (char *)0x22b2;
    pcVar2 = (char *)0x11f2;
    local_a = (char *)0xbc2f;
    FUN_13bf_0a03();
  }
  *param_2 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *(undefined2 *)0xc22 = 0;
  *param_3 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *(undefined1 *)0x11d7 = 0;
  while( true ) {
    local_6 = (char **)*(undefined2 *)0xd70;
    local_8 = (char *)0xc8;
    local_a = acStack_e9 + 1;
    local_e = (char *)0xbc86;
    local_c = pcVar2;
    iVar1 = func_0x0002509c();
    pcVar2 = (char *)0x22b2;
    if (iVar1 == 0) break;
    local_6 = (char **)(acStack_e9 + 1);
    local_8 = (char *)0x22b2;
    local_a = (char *)0xbc99;
    iVar1 = FUN_3ab8_0fdc();
    if (iVar1 != 0) {
      local_6 = (char **)(acStack_e9 + 1);
      local_8 = (char *)0x22b2;
      pcVar2 = (char *)0x22b2;
      local_a = (char *)0xbca8;
      iVar1 = func_0x00024ce4();
      acStack_e9[iVar1] = '\0';
      local_10 = (char *)0x0;
      local_12 = (char *)0x0;
      do {
        pcVar3 = local_10;
        if (((acStack_e9 + 1)[(int)local_10] == '\0') || (9 < (int)local_10)) goto LAB_3ab8_115d;
        local_10 = local_10 + 1;
      } while ((acStack_e9 + 1)[(int)local_10] != '#');
      local_12 = pcVar3 + 2;
LAB_3ab8_115d:
      if (local_12 != (char *)0x0) {
        local_14 = (acStack_e9 + 2)[(int)local_12];
        local_16 = (acStack_e9 + 1)[(int)local_12];
        if ((local_16 == 'j') && (local_14 == 'w')) {
          local_c = (char *)0x1;
        }
        if (local_6 == (char **)0x0) {
          if ((local_16 == 'h') && (local_14 == 'm')) {
            pcVar3 = pcVar2;
            if (local_c == (char *)0x0) break;
            do {
              local_6 = &local_e;
              local_8 = local_f0;
              local_a = local_ec;
              local_c = acStack_e9 + 3 + (int)local_12;
              local_e = (char *)0x1;
              pcVar2 = (char *)0x1bb4;
              local_12 = (char *)0xbd3f;
              local_10 = pcVar3;
              local_a = (char *)FUN_1def_0904();
              if ((local_a == (char *)0xffff) || (*(int *)0x158 != 0)) goto LAB_3ab8_11d4;
              if (local_e == (char *)0x1) {
                local_a = (char *)0x1;
              }
              if (local_e == (char *)0x2) {
                local_a = (char *)0x2;
              }
              pcVar3 = pcVar2;
            } while (((int)local_a < 1) || (9 < (int)local_a));
            *param_1 = local_a;
          }
          else {
            if ((local_16 == 'e') || (local_16 == 'E')) break;
            if ((local_16 == 'g') && (local_14 == 'c')) {
              *param_2 = 1;
            }
            if ((local_16 == 'm') && (local_14 == 'c')) {
              *param_3 = 1;
            }
            if (local_16 == 'h') {
              pcVar3 = pcVar2;
              if ((local_14 == 'c') && (*(int *)0xc22 < 2)) {
                local_6 = (char **)0x0;
                local_8 = (char *)0x7;
                *(int *)0xc22 = *(int *)0xc22 + 1;
                local_a = (char *)(*(int *)0xc22 + 1);
                local_c = (char *)0x12;
                local_e = acStack_e9 + 3 + (int)local_12;
                local_10 = (char *)0x22b2;
                pcVar3 = (char *)0xdef;
                local_12 = (char *)0xbe9a;
                FUN_1000_02b5();
              }
              if (local_14 == 'r') {
                *param_9 = 1;
              }
              pcVar2 = pcVar3;
              if (local_14 == '/') {
                *param_9 = 2;
                local_6 = (char **)(acStack_e9 + 3 + (int)local_12);
                local_8 = (char *)param_10;
                pcVar2 = (char *)0x22b2;
                local_c = (char *)0xbec7;
                local_a = pcVar3;
                FUN_21f2_3454();
                local_6 = (char **)param_10;
                local_8 = (char *)0x22b2;
                local_a = (char *)0xbed0;
                FUN_3ab8_1022();
              }
            }
            if (local_16 == 'g') {
              if (local_14 == '0') {
                *param_5 = 0;
              }
              if (local_14 == '1') {
                *param_5 = 1;
              }
              if (local_14 == 'n') {
                *param_8 = 1;
              }
              if (local_14 == 'f') {
                *param_8 = 0xb;
              }
            }
            if ((local_16 == 'd') && (local_14 == 'u')) {
              *param_6 = 1;
            }
            if ((local_16 == 'z') && (local_14 == 'k')) {
              *(undefined1 *)0x11d7 = 1;
            }
            if ((local_16 == 'z') && (local_14 == 'z')) {
              *param_7 = 1;
            }
          }
        }
      }
    }
  }
LAB_3ab8_11d4:
  if ((0 < *param_8) && (0 < *param_5)) {
    *param_8 = *param_8 + 1;
  }
  if (local_c == (char *)0x0) {
    local_6 = (char **)0x4a4;
    local_8 = local_140;
    local_c = (char *)0xbd7d;
    local_a = pcVar2;
    FUN_21f2_3454();
    local_6 = (char **)0x3960;
    local_8 = local_14a;
    local_a = (char *)0x22b2;
    local_c = (char *)0xbd8d;
    FUN_21f2_3454();
    for (local_10 = (char *)0x0; (int)local_10 < 4; local_10 = (char *)((int)local_10 + 1)) {
      auStack_13a[(int)local_10] = local_14a[(int)local_10];
    }
    local_6 = (char **)0xffff;
    local_8 = (char *)0x2;
    local_a = (char *)0x2;
    local_c = (char *)0x22;
    local_e = local_140;
    local_10 = (char *)0x22b2;
    pcVar2 = (char *)0xdef;
    local_12 = (char *)0xbf78;
    FUN_1000_02b5();
    if (*(int *)0xc22 == 0) {
      *(undefined2 *)0xc22 = 1;
    }
  }
  local_8 = (char *)0xbf92;
  local_6 = (char **)pcVar2;
  func_0x0002504e();
  *(undefined2 *)0xd70 = 0;
  return local_8;
}



/* 3ab8:1420  FUN_3ab8_1420  2956 bytes, 1 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far
FUN_3ab8_1420(int param_1,undefined2 param_2,undefined1 *param_3,byte *param_4,byte *param_5,
             byte *param_6)

{
  undefined1 *puVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  byte *pbVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_121a [200];
  undefined2 local_1152;
  undefined1 local_1150;
  byte *local_10ee;
  byte *local_10ec;
  undefined1 local_10ea [4];
  byte local_10e6 [3];
  byte abStack_10e3 [211];
  byte local_1010;
  int aiStack_100e [11];
  uint local_ff8;
  byte local_ff2;
  byte *local_ff0;
  int local_fee;
  byte local_fec;
  int local_fea;
  undefined1 auStack_fe8 [1100];
  byte *local_b9c;
  int local_b9a;
  int aiStack_b98 [28];
  undefined2 local_b60 [14];
  int local_b44;
  int local_b42;
  undefined1 local_b40;
  byte *local_b3e;
  undefined2 local_b3c;
  undefined1 auStack_b3a [220];
  byte abStack_a5e [1100];
  undefined1 local_612;
  byte local_611;
  undefined1 local_610;
  byte *local_60e;
  byte *local_60c;
  byte local_60a;
  byte abStack_608 [4];
  undefined1 auStack_604 [1518];
  undefined2 uStack_16;
  undefined2 uStack_14;
  byte *pbStack_12;
  byte *pbStack_10;
  byte *pbStack_e;
  byte *pbStack_c;
  byte *pbStack_a;
  byte *pbStack_8;
  
  FUN_21f2_0ebc();
  local_b42 = -1;
  local_b3c = 0;
  bVar4 = false;
  for (local_ff0 = (byte *)0x0; (int)local_ff0 < 10; local_ff0 = (byte *)((int)local_ff0 + 1)) {
    abStack_608[(int)local_ff0 * 0x8c] = 0;
    aiStack_b98[(int)local_ff0 * 2 + 1] = 0;
    aiStack_b98[(int)local_ff0 * 2] = 0;
    uVar10 = *(undefined2 *)0x9986;
    *(undefined2 *)(param_4 + (int)local_ff0 * 4) = *(undefined2 *)0x9984;
    *(undefined2 *)(param_4 + ((int)local_ff0 * 2 + 1) * 2) = uVar10;
    uVar10 = *(undefined2 *)0x9986;
    *(undefined2 *)(param_5 + (int)local_ff0 * 4) = *(undefined2 *)0x9984;
    *(undefined2 *)(param_5 + ((int)local_ff0 * 2 + 1) * 2) = uVar10;
  }
  local_60a = 0;
  local_612 = 0;
  if (param_1 != 0) {
    local_b3c = 1;
    local_611 = (char)param_1 + 0x30;
    local_612 = 0x20;
    local_610 = 0;
    local_60a = local_611;
  }
  pbStack_8 = (byte *)0x254;
  pbStack_a = (byte *)param_2;
  pbStack_c = (byte *)0x22b2;
  pbStack_e = (byte *)0xc044;
  iVar5 = FUN_21f2_1348();
  *(int *)0xd70 = iVar5;
  pbVar9 = (byte *)0x22b2;
  if (iVar5 == 0) {
    pbStack_8 = (byte *)0x568;
    pbStack_a = (byte *)0x22b2;
    pbVar9 = (byte *)0x11f2;
    pbStack_c = (byte *)0xc056;
    FUN_13bf_0a03();
  }
  while( true ) {
    pbStack_8 = (byte *)*(undefined2 *)0xd70;
    pbStack_a = (byte *)0xc8;
    pbStack_c = abStack_10e3 + 1;
    pbStack_10 = (byte *)0xc069;
    pbStack_e = pbVar9;
    iVar5 = func_0x0002509c();
    if (iVar5 == 0) break;
    pbStack_8 = abStack_10e3 + 1;
    pbStack_a = (byte *)0x22b2;
    pbStack_c = (byte *)0xc09b;
    iVar5 = FUN_3ab8_0fdc();
    pbVar9 = (byte *)0x22b2;
    if (iVar5 != 0) {
      pbStack_8 = abStack_10e3 + 1;
      pbStack_a = (byte *)0x22b2;
      pbVar9 = (byte *)0x22b2;
      pbStack_c = (byte *)0xc0aa;
      iVar5 = func_0x00024ce4();
      abStack_10e3[iVar5] = 0;
      local_b9a = 0;
      local_b9c = (byte *)0x0;
      do {
        iVar5 = local_b9a;
        if ((abStack_10e3[local_b9a + 1] == 0) || (9 < local_b9a)) goto LAB_3ab8_1566;
        local_b9a = local_b9a + 1;
      } while (abStack_10e3[iVar5 + 2] != 0x23);
      local_b9c = (byte *)(iVar5 + 2);
LAB_3ab8_1566:
      if (local_b9c != (byte *)0x0) {
        local_fec = local_b9c[(int)(abStack_10e3 + 1)];
        local_ff2 = local_b9c[(int)(abStack_10e3 + 2)];
        if (local_60a == 0) {
          if ((local_fec != 0x68) || (local_ff2 != 0x6d)) {
            if ((local_fec == 0x65) || (local_fec == 0x45)) break;
            if ((local_fec < 0x30) || (0x39 < local_fec)) {
              if ((local_fec == 99) ||
                 (((local_fec == 0x66 || (local_fec == 0x69)) || (local_fec == 0x6b)))) {
                if ((local_b9c[(int)(abStack_10e3 + 2)] == 0x26) ||
                   (local_b9c[(int)(abStack_10e3 + 3)] == 0x26)) {
                  local_ff8 = (uint)(local_fec == 0x66);
                  bVar4 = true;
                }
                else if (local_b42 < 9) {
                  iVar5 = local_b42 + 1;
                  local_b42 = iVar5;
                  aiStack_100e[iVar5] = 0;
                  if (local_fec == 0x66) {
                    aiStack_100e[iVar5] = 1;
                  }
                  if (local_fec == 0x69) {
                    aiStack_100e[local_b42] = -1;
                  }
                  if (local_fec == 0x6b) {
                    aiStack_100e[local_b42] = -2;
                  }
                  local_b9c = local_b9c + 1;
                  local_10ec = local_b9c + (int)(abStack_10e3 + 1);
                  pbStack_a = (byte *)0x22b2;
                  pbStack_c = (byte *)0xc43a;
                  pbStack_8 = local_10ec;
                  local_10ee = (byte *)func_0x00024ce4();
                  auStack_b3a[local_b42 * 0x14] = 0;
                  for (local_fea = 0; local_fea < (int)local_10ee; local_fea = local_fea + 1) {
                    if ((local_10ec[local_fea] == 0x2f) && (local_10ec[local_fea + 1] == 0x5f)) {
                      local_b9c = (byte *)(local_fea + 2);
                      pbVar9 = local_b9c + (int)local_10ec;
                      pbStack_a = (byte *)0x22b2;
                      pbStack_c = (byte *)0xc48c;
                      pbStack_8 = pbVar9;
                      uVar6 = func_0x00024ce4();
                      if (uVar6 < 0xb) {
                        pbStack_a = auStack_b3a + local_b42 * 0x14;
                        pbStack_c = (byte *)0x22b2;
                        pbStack_e = (byte *)0xc4a6;
                        pbStack_8 = pbVar9;
                        FUN_21f2_3454();
                      }
                      if (0x49 < local_fea) {
                        local_fea = 0x49;
                      }
                      local_10ec[local_fea] = 0;
                      break;
                    }
                  }
                  abStack_a5e[local_b42 * 100] = 0;
                  if (((int)local_10ee < 2) ||
                     ((-1 < aiStack_100e[local_b42] && (0x32 < (int)local_10ee)))) {
                    pbStack_8 = (byte *)0x81a;
                    pbStack_a = abStack_a5e + local_b42 * 100;
                    goto LAB_3ab8_1805;
                  }
                  if (-1 < aiStack_100e[local_b42]) {
                    pbStack_8 = (byte *)0x728;
                    pbStack_a = abStack_a5e + local_b42 * 100;
                    pbStack_c = (byte *)0x22b2;
                    pbStack_e = (byte *)0xc521;
                    FUN_21f2_3454();
                  }
                  pbStack_8 = local_10ec;
                  pbStack_a = abStack_a5e + local_b42 * 100;
                  pbStack_c = (byte *)0x22b2;
                  pbStack_e = (byte *)0xc53a;
                  FUN_21f2_2d26();
LAB_3ab8_180b:
                  pbVar9 = (byte *)0x22b2;
                }
              }
            }
            else {
              local_1010 = local_b9c[(int)(abStack_10e3 + 3)];
              local_ff0 = (byte *)(local_fec - 0x30);
              aiStack_b98[(int)local_ff0 * 2] = 1;
              aiStack_b98[(int)local_ff0 * 2 + 1] = 0;
              pbVar9 = local_b9c + 1;
              if (0 < (int)local_ff0) {
                if (local_ff2 == 0x2d) {
                  aiStack_b98[(int)local_ff0 * 2] = 2;
                  aiStack_b98[(int)local_ff0 * 2 + 1] = 0;
                  pbVar9 = local_b9c + 2;
                }
                local_b9c = pbVar9;
                if (local_ff2 == 0x2f) {
                  aiStack_b98[(int)local_ff0 * 2] = 0xc;
                  aiStack_b98[(int)local_ff0 * 2 + 1] = 0;
                  local_b9c = local_b9c + 1;
                }
                if (local_ff2 == 0x2b) {
                  aiStack_b98[(int)local_ff0 * 2] = 3;
                  aiStack_b98[(int)local_ff0 * 2 + 1] = 0;
                  local_b9c = local_b9c + 1;
                }
                if (local_ff2 == 0x3c) {
                  aiStack_b98[(int)local_ff0 * 2] = 0xd;
                  aiStack_b98[(int)local_ff0 * 2 + 1] = 0;
                  local_b9c = local_b9c + 1;
                }
                if ((local_ff2 == 0x6c) && (local_1010 == 0x6e)) {
                  aiStack_b98[(int)local_ff0 * 2] = -1;
                  aiStack_b98[(int)local_ff0 * 2 + 1] = -1;
                  local_b9c = local_b9c + 2;
                }
                if ((local_ff2 == 99) && (local_1010 == 0x69)) {
                  aiStack_b98[(int)local_ff0 * 2] = -2;
                  aiStack_b98[(int)local_ff0 * 2 + 1] = -1;
                  local_b9c = local_b9c + 2;
                }
                pbVar9 = local_b9c;
                if ((local_ff2 == 99) && (local_1010 == 0x68)) {
                  aiStack_b98[(int)local_ff0 * 2] = -3;
                  aiStack_b98[(int)local_ff0 * 2 + 1] = -1;
                  pbVar9 = local_b9c + 2;
                }
              }
              local_b9c = pbVar9;
              local_10ec = local_b9c + (int)(abStack_10e3 + 1);
              pbStack_a = (byte *)0x22b2;
              pbStack_c = (byte *)0xc288;
              pbStack_8 = local_10ec;
              uVar6 = func_0x00024ce4();
              if (1 < uVar6) {
                pbStack_8 = local_10ec;
                pbStack_a = (byte *)0x22b2;
                pbStack_c = (byte *)0xc297;
                uVar6 = func_0x00024ce4();
                if (uVar6 < 0x47) {
                  pbStack_8 = local_10ec;
                  pbStack_a = abStack_608 + (int)local_ff0 * 0x8c;
LAB_3ab8_1805:
                  pbStack_c = (byte *)0x22b2;
                  pbStack_e = (byte *)0xc38b;
                  FUN_21f2_3454();
                  goto LAB_3ab8_180b;
                }
              }
              if ((-1 < aiStack_b98[(int)local_ff0 * 2 + 1]) &&
                 ((0 < aiStack_b98[(int)local_ff0 * 2 + 1] || (aiStack_b98[(int)local_ff0 * 2] != 0)
                  ))) {
                pbStack_8 = (byte *)(uint)local_fec;
                pbStack_a = (byte *)0x3965;
                pbVar9 = abStack_608 + (int)local_ff0 * 0x8c;
                pbStack_e = (byte *)0x22b2;
                pbStack_10 = (byte *)0xc2d8;
                pbStack_c = pbVar9;
                FUN_21f2_3454();
                pbStack_8 = (byte *)0x6da;
                pbStack_c = (byte *)0x22b2;
                pbStack_e = (byte *)0xc2e5;
                pbStack_a = pbVar9;
                FUN_21f2_2d26();
                pbStack_8 = (byte *)0x302;
                pbStack_c = (byte *)0x22b2;
                pbStack_e = (byte *)0xc2f1;
                pbStack_a = pbVar9;
                FUN_21f2_2d26();
                pbStack_8 = (byte *)0x2f0;
                pbStack_c = (byte *)0x22b2;
                pbStack_e = (byte *)0xc2fd;
                pbStack_a = pbVar9;
                FUN_21f2_2d26();
              }
              pbVar12 = local_ff0;
              pbVar9 = (byte *)0x22b2;
              if (aiStack_b98[(int)local_ff0 * 2 + 1] < 0) {
                pbStack_8 = (byte *)0x58e;
                iVar5 = (int)local_ff0 * 0x8c;
                pbStack_a = abStack_608 + iVar5;
                pbStack_c = (byte *)0x22b2;
                pbVar9 = (byte *)0x22b2;
                pbStack_e = (byte *)0xc328;
                FUN_21f2_3454();
                if ((aiStack_b98[(int)pbVar12 * 2] == -2) &&
                   (aiStack_b98[(int)pbVar12 * 2 + 1] == -1)) {
                  auStack_604[iVar5] = 0x89;
                  auStack_604[iVar5 + 1] = 0x7e;
                }
                if ((aiStack_b98[(int)local_ff0 * 2] == -3) &&
                   (aiStack_b98[(int)local_ff0 * 2 + 1] == -1)) {
                  auStack_604[(int)local_ff0 * 0x8c] = 0x95;
                  auStack_604[(int)local_ff0 * 0x8c + 1] = 0xb6;
                }
              }
            }
          }
        }
        else if ((local_fec == 0x3a) && (local_60a == local_ff2)) {
          local_60a = 0;
        }
      }
    }
  }
  pbStack_8 = (byte *)0x22b2;
  pbVar9 = (byte *)0x22b2;
  pbStack_a = (undefined1 *)0xc075;
  func_0x0002504e();
  *(undefined2 *)0xd70 = 0;
  local_60e = (byte *)0x0;
  local_60c = (byte *)0xffff;
  do {
    for (local_ff0 = local_60e; pbVar12 = pbVar9, (int)local_ff0 < 10; local_ff0 = local_ff0 + 1) {
      iVar5 = aiStack_b98[(int)local_ff0 * 2 + 1];
      *(int *)(param_3 + (int)local_ff0 * 4) = aiStack_b98[(int)local_ff0 * 2];
      *(int *)(param_3 + (int)local_ff0 * 4 + 2) = iVar5;
      local_b60[(int)local_ff0] = 0;
    }
LAB_3ab8_19ec:
    if (9 < (int)local_60e) goto LAB_3ab8_1af6;
    pbVar9 = pbVar12;
    if (*(int *)(param_3 + (int)local_60e * 4 + 2) == 0 &&
        *(int *)(param_3 + (int)local_60e * 4) == 0) {
LAB_3ab8_1a08:
      local_60e = local_60e + 1;
      pbVar12 = pbVar9;
      goto LAB_3ab8_19ec;
    }
    pbStack_8 = abStack_608 + (int)local_60e * 0x8c;
    pbStack_a = abStack_10e3 + 1;
    pbVar9 = (byte *)0x22b2;
    pbStack_e = (byte *)0xc5a6;
    pbStack_c = pbVar12;
    FUN_21f2_3454();
    pbStack_8 = (byte *)local_b60;
    pbStack_a = param_3;
    pbStack_c = param_5;
    pbStack_e = param_4;
    pbStack_10 = abStack_10e3 + 1;
    pbStack_12 = local_60e;
    uStack_14 = 0x22b2;
    uStack_16 = 0xc5c3;
    local_fee = FUN_3ab8_0a5a();
    if (*(int *)0x158 != 0) goto LAB_3ab8_1a51;
    if (local_fee == -1) {
      pbStack_8 = (byte *)0x22b2;
      pbStack_a = (byte *)0xc5eb;
      FUN_1885_2ec3();
      pbStack_8 = (byte *)0x1b6e;
      pbVar9 = (byte *)0x11f2;
      pbStack_a = (undefined1 *)0xc5f0;
      func_0x00013e19();
      if (local_60e == (byte *)0x0) {
        return 0xffff;
      }
      if (*(int *)(param_3 + (int)local_60e * 4 + -2) == 0 &&
          *(int *)(param_3 + (int)local_60e * 4 + -4) == 0) {
        return 0xffff;
      }
      local_60e = local_60e + -1;
      iVar5 = *(int *)(param_3 + (int)local_60e * 4 + 2);
      goto joined_r0x0003c623;
    }
    local_60c = local_60e;
    if (local_fee != 1) goto LAB_3ab8_1a08;
    for (local_b9c = local_60e; pbVar12 = pbVar9, (int)local_b9c < 10; local_b9c = local_b9c + 1) {
      *(undefined2 *)(param_3 + (int)local_b9c * 4 + 2) = 0;
      *(undefined2 *)(param_3 + (int)local_b9c * 4) = 0;
    }
LAB_3ab8_1af6:
    local_ff0 = (byte *)0x1;
    do {
      iVar5 = (int)local_ff0 * 4;
      pbVar9 = pbVar12;
      if ((-1 < *(int *)(param_3 + iVar5 + 2)) &&
         ((0 < *(int *)(param_3 + iVar5 + 2) || (10 < *(uint *)(param_3 + iVar5))))) {
        pbStack_8 = (byte *)0x0;
        pbStack_a = (undefined1 *)0xa;
        pbStack_c = param_3 + iVar5;
        pbVar9 = (byte *)0x22b2;
        pbStack_10 = (byte *)0xc6a2;
        pbStack_e = pbVar12;
        func_0x00027a5c();
      }
      local_ff0 = local_ff0 + 1;
      pbVar12 = pbVar9;
    } while ((int)local_ff0 < 10);
    local_60e = (byte *)0x0;
    *param_6 = 0;
    local_b3e = (byte *)0xffff;
LAB_3ab8_1dba:
    while (local_b42 < (int)local_60e) {
      *param_6 = 0;
      if (param_1 != 0) {
        pbStack_8 = &local_612;
        pbStack_a = param_6;
        pbStack_e = (byte *)0xc95e;
        pbStack_c = pbVar9;
        FUN_21f2_2d26();
        pbVar9 = (byte *)0x22b2;
      }
      for (local_60e = (byte *)0x0; (int)local_60e <= local_b42; local_60e = local_60e + 1) {
        local_b3c = 1;
        iVar5 = (int)local_60e * 100;
        pbStack_c = (byte *)0xc983;
        pbStack_a = pbVar9;
        pbStack_8 = auStack_fe8 + iVar5;
        iVar7 = func_0x00024ce4();
        pbStack_8 = param_6;
        pbStack_a = (byte *)0x22b2;
        pbStack_c = (byte *)0xc98e;
        iVar8 = func_0x00024ce4();
        if (iVar7 + iVar8 + 4U < 0x50) {
          pbStack_a = param_6;
          pbStack_c = (byte *)0x22b2;
          pbStack_e = (byte *)0xc9a2;
          pbStack_8 = auStack_fe8 + iVar5;
          FUN_21f2_2d26();
        }
        pbVar9 = (byte *)0x22b2;
      }
      if (!bVar4) {
LAB_3ab8_1fa0:
        pbStack_a = (byte *)0xcb25;
        pbStack_8 = pbVar9;
        FUN_1885_2ec3();
        pbStack_8 = (byte *)0x1b6e;
        pbStack_a = (byte *)0xcb2a;
        func_0x00013e19();
        return local_b3c;
      }
      pbStack_a = (byte *)0xc9c0;
      pbStack_8 = pbVar9;
      func_0x0000c340();
      pbStack_8 = (byte *)0x885;
      pbStack_a = (byte *)0xc9c5;
      func_0x00010526();
      local_b3c = 1;
      pbStack_8 = (byte *)0x81a;
      pbStack_a = local_121a;
      pbStack_c = (byte *)0xdef;
      pbStack_e = (byte *)0xc9d9;
      FUN_21f2_3454();
      pbStack_8 = (byte *)param_2;
      pbStack_a = local_121a;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xc9e8;
      FUN_21f2_2d26();
      pbStack_8 = (byte *)0x22b2;
      pbStack_a = (byte *)0xc9ef;
      func_0x0000c340();
      pbStack_8 = local_121a;
      pbStack_a = (byte *)0x885;
      pbStack_c = (byte *)0xc9f9;
      func_0x00012276();
      pbStack_8 = (byte *)0x11f2;
      pbStack_a = (byte *)0xc9ff;
      func_0x00010526();
      pbStack_8 = local_121a;
      pbStack_a = (byte *)0xdef;
      pbStack_c = (byte *)0xca09;
      iVar5 = func_0x00024ce4();
      local_10ee = (byte *)(iVar5 + 1);
      local_1152 = -(iVar5 + -0x4d);
      pbStack_8 = (byte *)0x396e;
      pbStack_a = param_6;
      pbStack_c = (byte *)0x22b2;
      uVar10 = 0x22b2;
      pbStack_e = (byte *)0xca24;
      FUN_21f2_2d26();
      if ((*(byte *)0x129 < 10) || (*(byte *)0xb782 < 4)) {
        pbStack_8 = (byte *)0x22b2;
        pbStack_a = (byte *)0xca39;
        func_0x0000c354();
        pbStack_8 = (byte *)*(undefined2 *)0x1b40;
        pbStack_a = (byte *)*(undefined2 *)0x1b3e;
        pbStack_c = (byte *)(*(int *)0xa5a + 1);
        pbStack_e = (byte *)0x0;
        pbStack_10 = (byte *)0x885;
        pbStack_12 = (byte *)0xca4e;
        func_0x0000a76b();
        pbStack_8 = (byte *)0x885;
        uVar10 = 0x885;
        pbStack_a = (byte *)0xca56;
        func_0x0000a799();
      }
      uVar11 = uVar10;
      if (local_ff8 != 0) {
        local_b40 = *(undefined1 *)0x122;
        *(undefined1 *)0x122 = 0;
        uVar11 = 0x2c1;
        pbStack_a = (byte *)0xca6e;
        pbStack_8 = (byte *)uVar10;
        func_0x00002ca6();
        *(undefined1 *)0x122 = local_b40;
      }
      pbStack_a = (byte *)0xca7a;
      pbStack_8 = (byte *)uVar11;
      FUN_1000_060e();
      pbStack_8 = (byte *)local_1152;
      pbStack_a = (byte *)0xffff;
      pbStack_c = local_10ee;
      pbStack_e = param_6;
      pbStack_10 = (byte *)0xdef;
      pbStack_12 = (byte *)0xca8e;
      local_fee = FUN_12c1_03d3();
      pbStack_8 = (byte *)0x11f2;
      pbStack_a = (byte *)0xca9a;
      FUN_1000_0620();
      pbStack_8 = (byte *)0xdef;
      pbStack_a = (byte *)0xca9f;
      func_0x00002cc6();
      pbStack_8 = (byte *)0x2c1;
      pbStack_a = (byte *)0xcaa4;
      func_0x0000abfa();
      pbStack_8 = (byte *)0x885;
      pbStack_a = (byte *)0xcaa9;
      func_0x0000ac64();
      pbStack_8 = (byte *)0x885;
      pbVar9 = (byte *)0x885;
      pbStack_a = (undefined1 *)0xcaae;
      func_0x0000a799();
      *(undefined2 *)0xbc0 = 1;
      if (3 < *(byte *)0xb782) {
        pbStack_8 = (byte *)0x1;
        pcVar2 = (code *)swi(0x3f);
        (*pcVar2)();
      }
      if (*(int *)0x158 != 0) goto LAB_3ab8_1a51;
      if (local_fee != -1) goto LAB_3ab8_1fa0;
      if ((int)local_b3e < 0) goto LAB_3ab8_1f68;
      local_60e = local_b3e;
    }
    pbVar12 = pbVar9;
    if (aiStack_100e[(int)local_60e] < 0) {
      do {
        pbVar9 = pbVar12;
        if (*(int *)0x158 != 0) goto LAB_3ab8_1c62;
        pbStack_8 = (byte *)&local_b44;
        pbStack_a = local_10ea;
        pbStack_c = local_10e6;
        pbStack_e = abStack_a5e + (int)local_60e * 100;
        pbStack_10 = (byte *)0x270f;
        pbVar9 = (byte *)0x1bb4;
        uStack_14 = 0xc7d1;
        pbStack_12 = pbVar12;
        local_fee = FUN_1def_0904();
        if ((local_fee == -1) || (*(int *)0x158 != 0)) goto LAB_3ab8_1c62;
        if (aiStack_100e[(int)local_60e] == -2) {
          if (local_b44 == 1) {
            local_fee = 1;
          }
          if (local_b44 == 2) {
            local_fee = 2;
          }
        }
        if (local_fee == 0xd) {
          local_fee = 0;
        }
        local_1152 = 0;
        local_1150 = 0;
        if (local_fee == 0) {
          pbStack_8 = (byte *)0x1bb4;
          pbVar9 = (byte *)0x885;
          pbStack_a = (undefined1 *)0xc854;
          uVar6 = func_0x0000db57();
          if ((uVar6 & 2) != 0) {
            local_1152 = CONCAT11(local_1152._1_1_,0x30);
          }
          goto LAB_3ab8_1c62;
        }
        if ((0 < local_fee) && (local_fee < 10)) {
          local_1152 = (uint)(byte)((char)local_fee + 0x30);
          goto LAB_3ab8_1c62;
        }
        if (local_fee == 10) {
          local_1152._0_1_ = 0x31;
          goto LAB_3ab8_1d22;
        }
        pbVar12 = pbVar9;
      } while ((local_fee < 0x6200) || (0x6b00 < local_fee));
      if (local_fee == 0x6b00) {
        local_1152._0_1_ = 0x32;
LAB_3ab8_1d22:
        local_1152 = CONCAT11(0x30,(byte)local_1152);
      }
      else {
        uVar6 = local_fee + 0x9f00;
        bVar3 = (byte)((int)uVar6 >> 0xf);
        local_1152 = CONCAT11((((byte)((uVar6 ^ (int)uVar6 >> 0xf) - ((int)uVar6 >> 0xf) >> 8) ^
                               bVar3) - bVar3) + '0',0x31);
      }
    }
    else {
      pbStack_a = (byte *)0xc6d7;
      pbStack_8 = pbVar9;
      func_0x0000c340();
      iVar5 = (int)local_60e * 100;
      pbStack_a = (byte *)0x885;
      pbStack_c = (byte *)0xc6ec;
      pbStack_8 = abStack_a5e + iVar5;
      func_0x00012276();
      pbStack_8 = (byte *)0x11f2;
      pbStack_a = (byte *)0xc6f2;
      func_0x00010526();
      local_b3c = 1;
      pbStack_a = (byte *)0xdef;
      uVar10 = 0x22b2;
      pbStack_c = (byte *)0xc6fe;
      pbStack_8 = abStack_a5e + iVar5;
      iVar5 = func_0x00024ce4();
      local_10ec = (byte *)(iVar5 + 1);
      local_10ee = (byte *)-(iVar5 + -0x4d);
      local_1152 = local_1152 & 0xff00;
      if ((*(byte *)0x129 < 10) || (*(byte *)0xb782 < 4)) {
        pbStack_8 = (byte *)0x22b2;
        pbStack_a = (byte *)0xc725;
        func_0x0000c354();
        pbStack_8 = (byte *)*(undefined2 *)0x1b40;
        pbStack_a = (byte *)*(undefined2 *)0x1b3e;
        pbStack_c = (byte *)(*(int *)0xa5a + 1);
        pbStack_e = (byte *)0x0;
        pbStack_10 = (byte *)0x885;
        pbStack_12 = (byte *)0xc73a;
        func_0x0000a76b();
        pbStack_8 = (byte *)0x885;
        uVar10 = 0x885;
        pbStack_a = (byte *)0xc742;
        func_0x0000a799();
      }
      uVar11 = uVar10;
      if (aiStack_100e[(int)local_60e] != 0) {
        local_b40 = *(undefined1 *)0x122;
        *(undefined1 *)0x122 = 0;
        uVar11 = 0x2c1;
        pbStack_a = (byte *)0xc760;
        pbStack_8 = (byte *)uVar10;
        func_0x00002ca6();
        *(undefined1 *)0x122 = local_b40;
      }
      pbStack_a = (byte *)0xc76c;
      pbStack_8 = (byte *)uVar11;
      FUN_1000_060e();
      pbStack_8 = local_10ee;
      pbStack_a = (byte *)0xffff;
      pbStack_c = local_10ec;
      pbStack_e = (byte *)&local_1152;
      pbStack_10 = (byte *)0xdef;
      pbStack_12 = (byte *)0xc782;
      local_fee = FUN_12c1_03d3();
      pbStack_8 = (byte *)0x11f2;
      pbStack_a = (byte *)0xc78e;
      FUN_1000_0620();
      pbStack_8 = (byte *)0xdef;
      pbStack_a = (byte *)0xc793;
      func_0x00002cc6();
      pbStack_8 = (byte *)0x2c1;
      pbStack_a = (byte *)0xc798;
      func_0x0000abfa();
      pbStack_8 = (byte *)0x885;
      pbStack_a = (byte *)0xc79d;
      func_0x0000ac64();
      pbStack_8 = (byte *)0x885;
      pbVar9 = (byte *)0x885;
      pbStack_a = (undefined1 *)0xc7a2;
      func_0x0000a799();
    }
LAB_3ab8_1c62:
    *(undefined2 *)0xbc0 = 1;
    if (3 < *(byte *)0xb782) {
      pbStack_8 = (byte *)0x1;
      pcVar2 = (code *)swi(0x3f);
      (*pcVar2)();
    }
    if (*(int *)0x158 != 0) {
LAB_3ab8_1a51:
      pbStack_a = (byte *)0xc5d6;
      pbStack_8 = pbVar9;
      FUN_1885_2ec3();
      pbStack_8 = (byte *)0x1b6e;
      pbStack_a = (byte *)0xc5db;
      func_0x00013e19();
      return 0xff91;
    }
    if (local_fee != -1) {
      iVar5 = (int)local_60e * 100;
      auStack_fe8[iVar5] = 0;
      if ((byte)local_1152 != 0) {
        pbStack_8 = (byte *)0x396c;
        puVar1 = auStack_fe8 + iVar5;
        pbStack_e = (byte *)0xc909;
        pbStack_c = pbVar9;
        pbStack_a = puVar1;
        FUN_21f2_2d26();
        pbStack_8 = auStack_b3a + (int)local_60e * 0x14;
        pbStack_c = (byte *)0x22b2;
        pbStack_e = (byte *)0xc91f;
        pbStack_a = puVar1;
        FUN_21f2_2d26();
        pbStack_8 = (byte *)&local_1152;
        pbStack_c = (byte *)0x22b2;
        pbVar9 = (byte *)0x22b2;
        pbStack_e = (byte *)0xc92c;
        pbStack_a = puVar1;
        FUN_21f2_2d26();
      }
      local_b3e = local_60e;
      local_60e = local_60e + 1;
      goto LAB_3ab8_1dba;
    }
    if (0 < (int)local_60e) {
      local_60e = local_60e + -1;
      goto LAB_3ab8_1dba;
    }
LAB_3ab8_1f68:
    if ((int)local_60c < 0) {
      pbStack_a = (byte *)0xcb18;
      pbStack_8 = pbVar9;
      FUN_1885_2ec3();
      pbStack_8 = (byte *)0x1b6e;
      pbStack_a = (byte *)0xcb1d;
      func_0x00013e19();
      return 0xffff;
    }
    local_60e = local_60c;
    iVar5 = *(int *)(param_3 + (int)local_60c * 4 + 2);
joined_r0x0003c623:
    if (iVar5 < 0) {
      pbStack_8 = (byte *)local_b60;
      pbStack_a = param_3;
      pbStack_e = (byte *)0x0;
      pbStack_12 = (byte *)0xc639;
      pbStack_10 = pbVar9;
      pbStack_c = local_60e;
      FUN_3ab8_0054();
    }
  } while( true );
}



/* 3ab8:1fb4  FUN_3ab8_1fb4  444 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_1fb4(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  undefined2 local_a;
  uint uVar7;
  uint uVar8;
  
  FUN_21f2_0ebc();
  uVar7 = 1;
  uVar8 = 0;
  uVar4 = 0x22b2;
  while( true ) {
    if ((*(int *)0x14a < (int)uVar8) || ((*(int *)0x14a <= (int)uVar8 && (*(uint *)0x148 < uVar7))))
    break;
    uVar3 = 0;
    uVar6 = func_0x0000013f(uVar4);
    pbVar1 = (byte *)((int)uVar6 + 0x14);
    *pbVar1 = *pbVar1 & 0xfd;
    if (param_1 != 0) {
      uVar6 = func_0x0000013f(0,uVar7,uVar8);
      uVar8 = (uint)*(byte *)((int)uVar6 + 0x12);
      uVar7 = 0;
      uVar3 = 0x11f2;
      iVar2 = func_0x000125f1();
      if (iVar2 != 0) {
        uVar3 = 0;
        uVar6 = func_0x0000013f(0x11f2);
        pbVar1 = (byte *)((int)uVar6 + 0x14);
        *pbVar1 = *pbVar1 | 2;
      }
    }
    bVar5 = 0xfffe < uVar7;
    uVar7 = uVar7 + 1;
    uVar8 = uVar8 + bVar5;
    uVar4 = uVar3;
  }
  uVar7 = 1;
  uVar8 = 0;
  while( true ) {
    if ((*(int *)0x14e < (int)uVar8) || ((*(int *)0x14e <= (int)uVar8 && (*(uint *)0x14c < uVar7))))
    break;
    uVar3 = 0;
    uVar6 = func_0x00000271(uVar4);
    pbVar1 = (byte *)((int)uVar6 + 0x1e);
    *pbVar1 = *pbVar1 & 0xfd;
    if (param_1 != 0) {
      uVar6 = func_0x00000271(0,uVar7,uVar8);
      uVar8 = (uint)*(byte *)((int)uVar6 + 0x1c);
      uVar7 = 0;
      uVar3 = 0x11f2;
      iVar2 = func_0x000125f1();
      if (iVar2 != 0) {
        uVar3 = 0;
        uVar6 = func_0x00000271(0x11f2);
        pbVar1 = (byte *)((int)uVar6 + 0x1e);
        *pbVar1 = *pbVar1 | 2;
      }
    }
    bVar5 = 0xfffe < uVar7;
    uVar7 = uVar7 + 1;
    uVar8 = uVar8 + bVar5;
    uVar4 = uVar3;
  }
  for (local_a = 1; local_a <= *(int *)0x152; local_a = local_a + 1) {
    uVar3 = 0;
    uVar6 = func_0x000003ef(uVar4,local_a);
    pbVar1 = (byte *)((int)uVar6 + 10);
    *pbVar1 = *pbVar1 & 0xfd;
    if (param_1 != 0) {
      uVar6 = func_0x000003ef(0,local_a);
      uVar3 = 0x11f2;
      iVar2 = func_0x000125f1(0,*(undefined1 *)((int)uVar6 + 8));
      if (iVar2 != 0) {
        uVar3 = 0;
        uVar6 = func_0x000003ef(0x11f2,local_a);
        pbVar1 = (byte *)((int)uVar6 + 10);
        *pbVar1 = *pbVar1 | 2;
      }
    }
    uVar4 = uVar3;
  }
  for (local_a = 1; local_a <= *(int *)0x150; local_a = local_a + 1) {
    uVar3 = 0;
    uVar6 = func_0x00000398(uVar4,local_a);
    pbVar1 = (byte *)((int)uVar6 + 0x16);
    *pbVar1 = *pbVar1 & 0xfd;
    if (param_1 != 0) {
      uVar6 = func_0x00000398(0,local_a);
      uVar3 = 0x11f2;
      iVar2 = func_0x000125f1(0,*(undefined1 *)((int)uVar6 + 0x15));
      if (iVar2 != 0) {
        uVar3 = 0;
        uVar6 = func_0x00000398(0x11f2,local_a);
        pbVar1 = (byte *)((int)uVar6 + 0x16);
        *pbVar1 = *pbVar1 | 2;
      }
    }
    uVar4 = uVar3;
  }
  return 0;
}



/* 3ab8:2170  FUN_3ab8_2170  402 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2170(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  FUN_21f2_0ebc();
  uVar8 = 1;
  iVar9 = 0;
  uVar3 = 0x22b2;
  while( true ) {
    if ((*(int *)0x14a < iVar9) || ((*(int *)0x14a <= iVar9 && (*(uint *)0x148 < uVar8)))) break;
    uVar6 = func_0x0000013f(uVar3);
    pbVar1 = (byte *)((int)uVar6 + 0x14);
    *pbVar1 = *pbVar1 & 0xfe;
    bVar5 = 0xfffe < uVar8;
    uVar8 = uVar8 + 1;
    iVar9 = iVar9 + (uint)bVar5;
    uVar3 = 0;
  }
  uVar8 = 1;
  iVar9 = 0;
  while( true ) {
    if ((*(int *)0x14e < iVar9) || ((*(int *)0x14e <= iVar9 && (*(uint *)0x14c < uVar8)))) break;
    uVar6 = func_0x00000271(uVar3);
    pbVar1 = (byte *)((int)uVar6 + 0x1e);
    *pbVar1 = *pbVar1 & 0xfe;
    bVar5 = 0xfffe < uVar8;
    uVar8 = uVar8 + 1;
    iVar9 = iVar9 + (uint)bVar5;
    uVar3 = 0;
  }
  iVar9 = 1;
  while (iVar9 <= *(int *)0x152) {
    iVar7 = -0x327d;
    uVar6 = func_0x000003ef(uVar3,iVar9);
    pbVar1 = (byte *)((int)uVar6 + 10);
    *pbVar1 = *pbVar1 & 0xfe;
    uVar3 = 0;
    iVar9 = iVar7 + 1;
  }
  iVar9 = 1;
  while (iVar9 <= *(int *)0x150) {
    iVar7 = -0x3259;
    uVar6 = func_0x00000398(uVar3,iVar9);
    pbVar1 = (byte *)((int)uVar6 + 0x16);
    *pbVar1 = *pbVar1 & 0xfe;
    uVar3 = 0;
    iVar9 = iVar7 + 1;
  }
  for (iVar9 = 1; iVar9 < 10; iVar9 = iVar9 + 1) {
    iVar2 = iVar9 * 4;
    iVar7 = *(int *)(iVar2 + param_1 + 2);
    if ((iVar7 < -0x2d) && ((iVar7 < -0x2e || (*(uint *)(iVar2 + param_1) < 0x3940)))) {
      uVar6 = func_0x00000398(uVar3,0x3940 - *(int *)(iVar2 + param_1));
      pbVar1 = (byte *)((int)uVar6 + 0x16);
      *pbVar1 = *pbVar1 | 1;
      uVar4 = 0;
    }
    else {
      iVar2 = iVar9 * 4;
      iVar7 = *(int *)(iVar2 + param_1 + 2);
      if ((iVar7 < -0x1e) && ((iVar7 < -0x1f || (*(uint *)(iVar2 + param_1) < 0x7b80)))) {
        uVar6 = func_0x00000271(uVar3,0x7b80 - *(uint *)(iVar2 + param_1),
                                (-0x1f - *(int *)(iVar2 + param_1 + 2)) -
                                (uint)(0x7b80 < *(uint *)(iVar2 + param_1)));
        pbVar1 = (byte *)((int)uVar6 + 0x1e);
        *pbVar1 = *pbVar1 | 1;
        uVar4 = 0;
      }
      else {
        iVar2 = iVar9 * 4;
        iVar7 = *(int *)(iVar2 + param_1 + 2);
        uVar4 = uVar3;
        if ((iVar7 < -0xf) && ((iVar7 < -0x10 || (*(uint *)(iVar2 + param_1) < 0xbdc0)))) {
          uVar4 = 0;
          uVar6 = func_0x0000013f(uVar3,-0x4240 - *(uint *)(iVar2 + param_1),
                                  (-0x10 - *(int *)(iVar2 + param_1 + 2)) -
                                  (uint)(0xbdc0 < *(uint *)(iVar2 + param_1)));
          pbVar1 = (byte *)((int)uVar6 + 0x14);
          *pbVar1 = *pbVar1 | 1;
        }
      }
    }
    uVar3 = uVar4;
  }
  return;
}



/* 3ab8:2302  FUN_3ab8_2302  262 bytes, 0 callers */

undefined2 __cdecl16far
FUN_3ab8_2302(undefined2 param_1,undefined1 *param_2,undefined2 *param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char acStack_dd [207];
  undefined2 uStack_e;
  undefined2 uStack_c;
  char *local_a;
  undefined1 *local_8;
  char *local_6;
  
  local_6 = (char *)0xce8d;
  FUN_21f2_0ebc();
  *param_2 = 0;
  local_6 = (char *)0x254;
  local_8 = (undefined1 *)param_1;
  local_a = (char *)0x22b2;
  uStack_c = 0xcea8;
  iVar1 = FUN_21f2_1348();
  *(int *)0xd70 = iVar1;
  if (iVar1 != 0) goto LAB_3ab8_2345;
  local_6 = (char *)0x568;
  local_8 = (undefined1 *)0x22b2;
  uVar2 = 0x11f2;
  local_a = (char *)0xceba;
  FUN_13bf_0a03();
  do {
    while( true ) {
      local_6 = (char *)*(undefined2 *)0xd70;
      local_8 = (undefined1 *)0xc8;
      local_a = acStack_dd + 1;
      uStack_e = 0xcf6b;
      uStack_c = uVar2;
      iVar1 = func_0x0002509c();
      if (iVar1 == 0) goto LAB_3ab8_23f5;
      if (acStack_dd[1] == 'h') break;
LAB_3ab8_2345:
      uVar2 = 0x22b2;
    }
    if (acStack_dd[2] == 'e') {
      local_6 = acStack_dd + 1;
      local_8 = (undefined1 *)0x22b2;
      local_a = (char *)0xceea;
      iVar1 = func_0x00024ce4();
      acStack_dd[iVar1] = '\0';
      local_6 = acStack_dd + 3;
LAB_3ab8_2379:
      local_8 = param_2;
      local_a = (char *)0x22b2;
      uStack_c = 0xcf02;
      func_0x00024c86();
      break;
    }
    if ((acStack_dd[2] == 'q') && (local_8 == (undefined1 *)0x0)) {
      local_6 = (char *)0x3970;
      goto LAB_3ab8_2379;
    }
    if (acStack_dd[2] == 'r') {
      *param_3 = 1;
    }
    if (acStack_dd[2] == '/') {
      *param_3 = 2;
      local_6 = acStack_dd + 3;
      local_8 = (undefined1 *)param_4;
      local_a = (char *)0x22b2;
      uStack_c = 0xcf46;
      FUN_21f2_3454();
      local_6 = (char *)param_4;
      local_8 = (undefined1 *)0x22b2;
      local_a = (char *)0xcf4f;
      FUN_3ab8_1022();
    }
    uVar2 = 0x22b2;
  } while ((int)local_8 + 1 < 5);
LAB_3ab8_23f5:
  local_6 = (char *)0x22b2;
  local_8 = (undefined1 *)0xcf7a;
  func_0x0002504e();
  *(undefined2 *)0xd70 = 0;
  return local_6;
}



/* 3ab8:2408  FUN_3ab8_2408  107 bytes, 1 callers */

bool __cdecl16far FUN_3ab8_2408(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_6a [60];
  undefined1 local_2e [30];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xcf93;
  FUN_21f2_0ebc();
  puStack_4 = local_2e;
  puStack_6 = (undefined1 *)0x0;
  uStack_8 = param_1;
  uStack_a = 0x22b2;
  puStack_c = (undefined1 *)0xcfa2;
  iVar1 = func_0x000276d7();
  if (iVar1 != 0) {
    puStack_4 = (undefined1 *)param_2;
    puStack_6 = local_6a;
    uStack_8 = 0x22b2;
    uStack_a = 0xcfb5;
    FUN_21f2_3454();
    puStack_4 = (undefined1 *)0x568;
    puStack_6 = local_6a;
    uStack_8 = 0x22b2;
    uStack_a = 0xcfc4;
    FUN_21f2_2d26();
    *(undefined2 *)0xc22 = 1;
    puStack_4 = (undefined1 *)0xffff;
    puStack_6 = (undefined1 *)0x6;
    uStack_8 = 2;
    uStack_a = 0x14;
    puStack_c = local_6a;
    uStack_e = 0x22b2;
    uStack_10 = 0xcfe5;
    FUN_1000_02b5();
  }
  return iVar1 != 0;
}



/* 3ab8:2473  FUN_3ab8_2473  96 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2473(undefined2 *param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_60 [62];
  undefined1 local_22 [18];
  undefined2 uStack_10;
  undefined2 local_e;
  undefined1 *puStack_c;
  undefined2 *local_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined2 **ppuStack_4;
  
  ppuStack_4 = (undefined2 **)0x3ab8;
  puStack_6 = (undefined1 *)0xcffe;
  FUN_21f2_0ebc();
  ppuStack_4 = (undefined2 **)0x22b2;
  puStack_6 = (undefined1 *)0xd003;
  func_0x0000c3ca();
  ppuStack_4 = (undefined2 **)0xbf48;
  puStack_6 = (undefined1 *)0x11;
  puStack_8 = (undefined1 *)0x885;
  local_a = (undefined2 *)0xd010;
  iVar1 = func_0x00012038();
  if (iVar1 != 0) {
    ppuStack_4 = &local_a;
    puStack_6 = local_22;
    puStack_8 = local_60;
    local_a = &local_e;
    puStack_c = (undefined1 *)0xbf48;
    local_e = 0x11f2;
    uStack_10 = 0xd02f;
    func_0x000265e6();
    ppuStack_4 = (undefined2 **)0xffff;
    puStack_6 = (undefined1 *)0x7;
    puStack_8 = (undefined1 *)param_2;
    local_a = param_1;
    puStack_c = local_22;
    local_e = 0x22b2;
    uStack_10 = 0xd049;
    FUN_1000_02b5();
    *(undefined2 *)0xc22 = 1;
  }
  return;
}



/* 3ab8:24d3  FUN_3ab8_24d3  1150 bytes, 2 callers */

/* WARNING: Removing unreachable block (ram,0x0003dbd7) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl16far FUN_3ab8_24d3(int param_1)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined2 ******ppppppuVar8;
  undefined2 ******ppppppuVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar11;
  undefined4 uVar12;
  undefined2 *******pppppppuStack_486;
  int iStack_484;
  undefined2 *******pppppppuStack_482;
  int iStack_480;
  undefined2 *******pppppppuStack_47e;
  int iStack_47c;
  undefined2 *******pppppppuStack_47a;
  undefined2 ******ppppppuStack_478;
  undefined2 ******local_43e;
  undefined1 auStack_43c [4];
  undefined2 *****apppppuStack_438 [2];
  int local_434;
  undefined2 ****local_430;
  undefined2 *****local_42e;
  undefined2 ****local_42c;
  undefined2 *****apppppuStack_42a [50];
  undefined1 auStack_3c6 [102];
  int local_360;
  undefined2 *****local_35a [24];
  undefined2 *****local_32a [24];
  undefined2 *****local_2fa [75];
  undefined1 local_264 [150];
  int local_1ce;
  int iStack_1cc;
  int local_1ca;
  undefined2 *****local_1c8 [24];
  undefined2 ***local_198 [10];
  undefined2 *****local_184 [75];
  char local_ee [2];
  undefined2 *****local_ec;
  int local_ea;
  undefined2 ***local_e8;
  undefined2 *****local_e6 [3];
  undefined2 ******local_e0;
  int local_de;
  undefined2 *****local_dc [16];
  undefined2 *****local_bc [24];
  int local_8c;
  undefined1 uStack_8a;
  undefined1 local_88 [100];
  undefined1 auStack_24 [6];
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 ****ppppuStack_18;
  char *pcStack_16;
  undefined2 *******pppppppuStack_14;
  undefined2 *****local_12;
  undefined2 ****local_10;
  undefined2 ******ppppppuStack_e;
  undefined2 *******pppppppuStack_c;
  undefined2 *******local_a;
  undefined2 *******pppppppuStack_8;
  undefined2 *******pppppppuStack_6;
  
  pppppppuStack_6 = (undefined2 *******)0xd05e;
  FUN_21f2_0ebc();
  local_ee[0] = '\0';
  local_e0 = (undefined2 ******)0x0;
  local_42c = (undefined2 ****)0x0;
  local_42e = (undefined2 *****)0x0;
  local_43e = (undefined2 ******)0x0;
  local_430 = (undefined2 ****)0x0;
  local_360 = 0;
  local_12 = (undefined2 *****)0x0;
  local_e6[0] = (undefined2 *****)0x0;
  pppppppuStack_6 = (undefined2 *******)0x3977;
  pppppppuStack_8 = (undefined2 *******)local_198;
  local_a = (undefined2 *******)0x22b2;
  pppppppuStack_c = (undefined2 *******)0xd097;
  FUN_21f2_3454();
  pppppppuStack_6 = (undefined2 *******)0x80a;
  pppppppuStack_8 = (undefined2 *******)local_198;
  local_a = (undefined2 *******)0x22b2;
  ppppppuVar8 = (undefined2 ******)0x22b2;
  pppppppuStack_c = (undefined2 *******)0xd0a7;
  FUN_21f2_2d26();
  uVar10 = *(undefined2 *)0x9984;
  uVar2 = *(undefined2 *)0x9986;
  *(undefined2 *)0xbdc = uVar10;
  *(undefined2 *)0xbde = uVar2;
  *(undefined2 *)0xbd4 = uVar10;
  *(undefined2 *)0xbd6 = uVar2;
  *(undefined2 *)0xbcc = uVar10;
  *(undefined2 *)0xbce = uVar2;
  *(undefined2 *)0xbc4 = uVar10;
  *(undefined2 *)0xbc6 = uVar2;
  do {
    if (param_1 == 1) {
      pppppppuStack_6 = (undefined2 *******)*(undefined2 *)0xa62;
      pppppppuStack_8 = (undefined2 *******)0x397c;
      local_a = (undefined2 *******)local_2fa;
      ppppppuVar9 = (undefined2 ******)0x22b2;
      ppppppuStack_e = (undefined2 ******)0xd0e4;
      pppppppuStack_c = (undefined2 *******)ppppppuVar8;
      FUN_21f2_3454();
      pppppppuStack_6 = (undefined2 *******)local_198;
      pppppppuStack_8 = (undefined2 *******)local_2fa;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0xd0f5;
      iVar6 = FUN_3ab8_2408();
    }
    else {
      ppppppuVar9 = ppppppuVar8;
      if (*(char *)0x124 == '\0') goto LAB_3ab8_2ea2;
      if (*(char *)0x15b == '\0') goto LAB_3ab8_2ea2;
      pppppppuStack_6 = (undefined2 *******)&local_ea;
      pppppppuStack_8 = (undefined2 *******)&local_de;
      local_a = (undefined2 *******)&local_ec;
      pppppppuStack_c = (undefined2 *******)&local_10;
      ppppppuVar9 = (undefined2 ******)0x885;
      local_10 = (undefined2 ****)0xd12c;
      ppppppuStack_e = ppppppuVar8;
      func_0x0000dcbd();
      if (local_de <= *(int *)0xa58) goto LAB_3ab8_2ea2;
      if (local_ea < 0x31) goto LAB_3ab8_2ea2;
      pppppppuStack_6 = (undefined2 *******)local_2fa;
      pppppppuStack_8 = (undefined2 *******)0x11;
      local_a = (undefined2 *******)0x885;
      ppppppuVar9 = (undefined2 ******)0x11f2;
      pppppppuStack_c = (undefined2 *******)0xd14e;
      iVar6 = func_0x00012038();
      if (iVar6 == 0) goto LAB_3ab8_2ea2;
      pppppppuStack_6 = (undefined2 *******)local_198;
      pppppppuStack_8 = (undefined2 *******)local_2fa;
      local_a = (undefined2 *******)0x11f2;
      pppppppuStack_c = (undefined2 *******)0xd165;
      iVar6 = FUN_3ab8_2408();
    }
    if (iVar6 != 0) {
      return;
    }
    local_360 = 0;
    ppppppuVar8 = ppppppuVar9;
LAB_3ab8_2604:
    pppppppuStack_6 = (undefined2 *******)local_2fa;
    pppppppuStack_8 = (undefined2 *******)local_184;
    ppppppuVar9 = (undefined2 ******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0xd193;
    local_a = (undefined2 *******)ppppppuVar8;
    FUN_21f2_3454();
    local_e6[0] = (undefined2 *****)0x0;
    local_42c = (undefined2 ****)0x0;
    local_43e = (undefined2 ******)0x0;
    pppppppuStack_6 = (undefined2 *******)local_264;
    pppppppuStack_8 = &local_43e;
    local_a = (undefined2 *******)&local_42e;
    pppppppuStack_c = (undefined2 *******)&local_42c;
    ppppppuStack_e = local_e6;
    local_10 = &local_e8;
    local_12 = local_184;
    pppppppuStack_14 = &local_a;
    pcStack_16 = local_ee;
    ppppuStack_18 = &local_430;
    uStack_1a = 0x22b2;
    uStack_1c = 0xd1d8;
    local_1ca = FUN_3ab8_1085();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_1ca < -100) {
      if (param_1 == 1) {
        return;
      }
      goto LAB_3ab8_2ea2;
    }
    if (local_1ca < -10) {
      pppppppuStack_6 = (undefined2 *******)0x398c;
      pppppppuStack_8 = (undefined2 *******)0x11;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0xd20f;
      func_0x000120ec();
      return;
    }
LAB_3ab8_2719:
    uVar7 = (int)*(uint *)0xb310 >> 0xf;
    local_12 = (undefined2 *****)(((int)((*(uint *)0xb310 ^ uVar7) - uVar7) >> 4 ^ uVar7) - uVar7);
    if (local_e8 == (undefined2 ***)0x0) {
      local_1ce = 0;
      do {
        auStack_24[local_1ce] = *(undefined1 *)(local_1ce + 0xb6c);
        *(undefined1 *)(local_1ce + 0xb6c) = 0;
        local_1ce = local_1ce + 1;
      } while (local_1ce < 0x10);
      *(undefined1 *)(local_12 + 0x5b6) = 1;
    }
    uVar10 = 0x885;
    pppppppuStack_8 = (undefined2 *******)0xd2e4;
    pppppppuStack_6 = (undefined2 *******)ppppppuVar9;
    func_0x0000c3ca();
    if (local_1ca == 0) {
      pppppppuStack_6 = (undefined2 *******)0x0;
      pppppppuStack_8 = (undefined2 *******)0x885;
      local_a = (undefined2 *******)0xd2f2;
      local_434 = FUN_3ab8_1fb4();
    }
    if (local_1ca == 1) {
      pppppppuStack_6 = (undefined2 *******)*(undefined2 *)0x99f2;
      pppppppuStack_8 = (undefined2 *******)*(undefined2 *)0x99f0;
      local_a = (undefined2 *******)*(undefined2 *)0x99ee;
      pppppppuStack_c = (undefined2 *******)*(int *)0x99ec;
      ppppppuStack_e = (undefined2 ******)*(int *)0x99f2;
      local_10 = (undefined2 ****)*(int *)0x99f0;
      local_12 = (undefined2 *****)*(int *)0x99ee;
      pppppppuStack_14 = (undefined2 *******)*(int *)0x99ec;
      pcStack_16 = (char *)0x0;
      ppppuStack_18 = local_198;
      uStack_1a = 0;
      uStack_1c = 1;
      uStack_1e = 0;
      pcVar4 = (code *)swi(0x3f);
      local_434 = (*pcVar4)();
    }
    if (local_1ca == 2) {
      pppppppuStack_6 = (undefined2 *******)*(undefined2 *)0x99f2;
      pppppppuStack_8 = (undefined2 *******)*(undefined2 *)0x99f0;
      local_a = (undefined2 *******)*(undefined2 *)0x99ee;
      pppppppuStack_c = (undefined2 *******)*(int *)0x99ec;
      ppppppuStack_e = (undefined2 ******)*(int *)0x99f2;
      local_10 = (undefined2 ****)*(int *)0x99f0;
      local_12 = (undefined2 *****)*(int *)0x99ee;
      pppppppuStack_14 = (undefined2 *******)*(int *)0x99ec;
      pcStack_16 = (char *)0x0;
      ppppuStack_18 = local_198;
      uStack_1a = 0;
      uStack_1c = 1;
      uStack_1e = 2;
      pcVar4 = (code *)swi(0x3f);
      local_434 = (*pcVar4)();
    }
    if (local_1ca == 3) {
      pppppppuStack_6 = (undefined2 *******)*(undefined2 *)0x99f2;
      pppppppuStack_8 = (undefined2 *******)*(undefined2 *)0x99f0;
      local_a = (undefined2 *******)*(undefined2 *)0x99ee;
      pppppppuStack_c = (undefined2 *******)*(int *)0x99ec;
      ppppppuStack_e = (undefined2 ******)*(int *)0x99f2;
      local_10 = (undefined2 ****)*(int *)0x99f0;
      local_12 = (undefined2 *****)*(int *)0x99ee;
      pppppppuStack_14 = (undefined2 *******)*(int *)0x99ec;
      pcStack_16 = (char *)0x0;
      ppppuStack_18 = local_198;
      uStack_1a = 0xfffe;
      uStack_1c = 1;
      uStack_1e = 0;
      pcVar4 = (code *)swi(0x3f);
      local_434 = (*pcVar4)();
    }
    if (local_1ca == 4) {
      pppppppuStack_6 = (undefined2 *******)0x1;
      pppppppuStack_8 = (undefined2 *******)0x885;
      local_a = (undefined2 *******)0xd3cf;
      local_434 = FUN_3ab8_1fb4();
    }
    if (local_1ca == 5) {
      pppppppuStack_6 = (undefined2 *******)*(undefined2 *)0x99f2;
      pppppppuStack_8 = (undefined2 *******)*(undefined2 *)0x99f0;
      local_a = (undefined2 *******)*(undefined2 *)0x99ee;
      pppppppuStack_c = (undefined2 *******)*(int *)0x99ec;
      ppppppuStack_e = (undefined2 ******)*(int *)0x99f2;
      local_10 = (undefined2 ****)*(int *)0x99f0;
      local_12 = (undefined2 *****)*(int *)0x99ee;
      pppppppuStack_14 = (undefined2 *******)*(int *)0x99ec;
      pcStack_16 = (char *)0xfff6;
      ppppuStack_18 = local_198;
      uStack_1a = 0;
      uStack_1c = 1;
      uStack_1e = 2;
      pcVar4 = (code *)swi(0x3f);
      local_434 = (*pcVar4)();
    }
    *(undefined2 *)0xca2 = 0;
    *(undefined2 *)0xb6a = 0;
    if (local_e8 == (undefined2 ***)0x0) {
      local_1ce = 0;
      do {
        *(undefined1 *)(local_1ce + 0xb6c) = auStack_24[local_1ce];
        local_1ce = local_1ce + 1;
      } while (local_1ce < 0x10);
    }
    *(undefined2 *)0xbc0 = 1;
    if (*(int *)0x158 != 0) goto LAB_3ab8_28d3;
    if (local_434 == -1) {
      pppppppuStack_6 = (undefined2 *******)0x0;
      pppppppuStack_8 = (undefined2 *******)0x885;
      local_a = (undefined2 *******)0xd223;
      func_0x00008095();
      if (param_1 != 0) {
        return;
      }
      goto LAB_3ab8_26ad;
    }
    pppppppuStack_6 = (undefined2 *******)local_88;
    pppppppuStack_8 = (undefined2 *******)local_32a;
    local_a = (undefined2 *******)local_1c8;
    pppppppuStack_c = (undefined2 *******)local_35a;
    ppppppuStack_e = local_184;
    local_10 = local_430;
    local_12 = (undefined2 *****)0x885;
    pppppppuStack_14 = (undefined2 *******)0xd25b;
    local_8c = FUN_3ab8_1420();
    if (*(int *)0x158 != 0) {
LAB_3ab8_28d3:
      pppppppuStack_6 = (undefined2 *******)0x0;
      local_a = (undefined2 *******)0xd45b;
      pppppppuStack_8 = (undefined2 *******)uVar10;
      func_0x00008095();
      return;
    }
    if (local_8c != -1) {
      pppppppuStack_6 = (undefined2 *******)local_184;
      pppppppuStack_8 = (undefined2 *******)local_2fa;
      local_a = (undefined2 *******)0x885;
      pppppppuStack_c = (undefined2 *******)0xd46d;
      FUN_21f2_3454();
      if ((local_360 == 0) && (local_8c == 1)) {
        pppppppuStack_6 = (undefined2 *******)local_88;
        pppppppuStack_8 = (undefined2 *******)local_2fa;
        local_a = (undefined2 *******)0x22b2;
        pppppppuStack_c = (undefined2 *******)0xd48c;
        FUN_21f2_2d26();
      }
      pppppppuStack_6 = (undefined2 *******)0x22b2;
      pppppppuStack_8 = (undefined2 *******)0xd493;
      func_0x0000c3ca();
      pppppppuStack_6 = (undefined2 *******)local_35a;
      pppppppuStack_8 = (undefined2 *******)0x885;
      local_a = (undefined2 *******)0xd49c;
      FUN_3ab8_2170();
      pppppppuStack_6 = (undefined2 *******)local_42e;
      pppppppuStack_8 = (undefined2 *******)local_42c;
      local_a = (undefined2 *******)local_32a;
      pppppppuStack_c = (undefined2 *******)local_1c8;
      ppppppuStack_e = local_35a;
      local_10 = local_e6[0];
      pcVar4 = (code *)swi(0x3f);
      local_434 = (*pcVar4)();
      *(undefined2 *)0xbc0 = 1;
      pppppppuStack_6 = (undefined2 *******)0x885;
      uVar10 = 0x11f2;
      pppppppuStack_8 = (undefined2 *******)0xd4cf;
      cVar5 = FUN_12c1_009c();
      if ((cVar5 != '\x1b') && (*(int *)0x158 == 0)) {
        if (local_434 != -1) {
          if (local_434 == 0x14) goto LAB_3ab8_28d3;
          uStack_8a = *(undefined1 *)0x120;
          if (local_ee[0] == '\0') {
            *(undefined1 *)0x120 = 10;
          }
          if (local_360 == 0) {
            if ((char)local_a == '\0') {
              pppppppuStack_6 = (undefined2 *******)0xb2fe;
              pppppppuStack_8 = (undefined2 *******)0x90;
              local_a = &pppppppuStack_47a;
              pppppppuStack_c = (undefined2 *******)0x11f2;
              ppppppuStack_e = (undefined2 ******)0xd543;
              func_0x0001263c();
              pppppppuStack_6 = (undefined2 *******)0x90;
              pppppppuStack_8 = (undefined2 *******)0xbefe;
              local_a = &pppppppuStack_47a;
              pppppppuStack_c = (undefined2 *******)0x1;
              pcVar4 = (code *)swi(0x3f);
              (*pcVar4)();
              pppppppuStack_6 = (undefined2 *******)local_2fa;
              pppppppuStack_8 = (undefined2 *******)0x3990;
              pcVar4 = (code *)swi(0x3f);
              (*pcVar4)();
            }
            else {
              pppppppuStack_6 = (undefined2 *******)0x0;
              pppppppuStack_8 = (undefined2 *******)0x0;
              local_a = (undefined2 *******)local_2fa;
              pppppppuStack_c = (undefined2 *******)0x398d;
              pcVar4 = (code *)swi(0x3f);
              (*pcVar4)();
            }
          }
          if (local_360 == 2) {
            pppppppuStack_6 = (undefined2 *******)0x0;
            pppppppuStack_8 = (undefined2 *******)0x0;
            local_a = (undefined2 *******)0x0;
            pppppppuStack_c = (undefined2 *******)0x0;
            pcVar4 = (code *)swi(0x3f);
            (*pcVar4)();
          }
          *(undefined1 *)0x120 = uStack_8a;
          pppppppuStack_6 = (undefined2 *******)local_264;
          pppppppuStack_8 = &local_43e;
          local_a = (undefined2 *******)apppppuStack_42a;
          pppppppuStack_c = (undefined2 *******)0xca;
          ppppppuStack_e = (undefined2 ******)0x11f2;
          local_10 = (undefined2 ****)0xd5a7;
          local_8c = FUN_3ab8_2302();
          if (local_8c == 2) {
            *(undefined2 *)0xc22 = 1;
            pppppppuStack_6 = (undefined2 *******)0xffff;
            pppppppuStack_8 = (undefined2 *******)0x2;
            local_a = (undefined2 *******)0x2;
            pppppppuStack_c = (undefined2 *******)0x12;
            ppppppuStack_e = apppppuStack_42a;
            local_10 = (undefined2 ****)0x11f2;
            local_12 = (undefined2 *****)0xd5d0;
            FUN_1000_02b5();
            local_e0 = (undefined2 ******)0x0;
            *(undefined2 *)0x158 = 0;
            pppppppuStack_6 = (undefined2 *******)0x0;
            pppppppuStack_8 = (undefined2 *******)0xdef;
            ppppppuVar8 = (undefined2 ******)0x7a6;
            local_a = (undefined2 *******)0xd5e2;
            func_0x00008095();
            if (3 < *(byte *)0xb782) {
              pcVar4 = (code *)swi(0x3f);
              (*pcVar4)();
            }
            goto LAB_3ab8_304b;
          }
          if (local_8c != 1) {
            pppppppuStack_6 = (undefined2 *******)0x0;
            pppppppuStack_8 = (undefined2 *******)0x11f2;
            local_a = (undefined2 *******)0xd7a1;
            func_0x00008095();
            goto LAB_3ab8_2c21;
          }
          ppppppuStack_478 = (undefined2 ******)0x0;
          pppppppuStack_47a = (undefined2 *******)0x1;
          ppppppuVar8 = (undefined2 ******)0x11f2;
          break;
        }
        pppppppuStack_6 = (undefined2 *******)0x0;
        pppppppuStack_8 = (undefined2 *******)0x11f2;
        ppppppuVar9 = (undefined2 ******)0x7a6;
        local_a = (undefined2 *******)0xd4ef;
        func_0x00008095();
        goto LAB_3ab8_2719;
      }
      goto LAB_3ab8_28d3;
    }
    pppppppuStack_6 = (undefined2 *******)0x0;
    pppppppuStack_8 = (undefined2 *******)0x885;
    ppppppuVar9 = (undefined2 ******)0x7a6;
    local_a = (undefined2 *******)0xd27c;
    func_0x00008095();
    if ((((local_1ca == 1) || (local_1ca == 2)) || (local_1ca == 3)) || (local_1ca == 5))
    goto LAB_3ab8_2719;
LAB_3ab8_26ad:
    ppppppuVar8 = (undefined2 ******)0x7a6;
    if (local_430 != (undefined2 ****)0x0) goto LAB_3ab8_25fe;
  } while( true );
LAB_3ab8_2ae5:
  if ((*(int *)0x14a < (int)ppppppuStack_478) ||
     ((*(int *)0x14a <= (int)ppppppuStack_478 &&
      ((undefined2 *******)*(uint *)0x148 < pppppppuStack_47a)))) goto LAB_3ab8_2bc5;
  pppppppuStack_6 = (undefined2 *******)ppppppuStack_478;
  pppppppuStack_8 = pppppppuStack_47a;
  ppppppuVar9 = (undefined2 ******)0x0;
  pppppppuStack_c = (undefined2 *******)0xd688;
  local_a = (undefined2 *******)ppppppuVar8;
  uVar12 = func_0x0000013f();
  if ((*(byte *)((int)uVar12 + 0x14) & 2) != 0) {
    pppppppuStack_6 = (undefined2 *******)ppppppuStack_478;
    pppppppuStack_8 = pppppppuStack_47a;
    local_a = (undefined2 *******)0x0;
    pppppppuStack_c = (undefined2 *******)0xd6a2;
    uVar12 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar12 + 0x15);
    *pbVar1 = *pbVar1 & 0xfe;
    pppppppuStack_6 = (undefined2 *******)ppppppuStack_478;
    pppppppuStack_8 = pppppppuStack_47a;
    local_a = (undefined2 *******)0x0;
    pppppppuStack_c = (undefined2 *******)0xd6ba;
    uVar12 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar12 + 0x15);
    *pbVar1 = *pbVar1 & 0xfd;
    pppppppuStack_6 = (undefined2 *******)ppppppuStack_478;
    pppppppuStack_8 = pppppppuStack_47a;
    local_a = (undefined2 *******)0x0;
    pppppppuStack_c = (undefined2 *******)0xd6d2;
    uVar12 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar12 + 0x15);
    *pbVar1 = *pbVar1 & 0xfb;
    pppppppuStack_6 = (undefined2 *******)ppppppuStack_478;
    pppppppuStack_8 = pppppppuStack_47a;
    local_a = (undefined2 *******)0x0;
    pppppppuStack_c = (undefined2 *******)0xd6ea;
    uVar12 = func_0x0000013f();
    if ((*(byte *)((int)uVar12 + 0x14) & 0x40) == 0) {
      pppppppuStack_6 = (undefined2 *******)ppppppuStack_478;
      pppppppuStack_8 = pppppppuStack_47a;
      local_a = (undefined2 *******)0x0;
      ppppppuVar9 = (undefined2 ******)0x0;
      pppppppuStack_c = (undefined2 *******)0xd704;
      uVar12 = func_0x0000013f();
      if ((*(byte *)((int)uVar12 + 0x14) & 0x80) == 0) goto LAB_3ab8_2adb;
    }
    pppppppuStack_6 = &pppppppuStack_482;
    pppppppuStack_8 = &pppppppuStack_486;
    local_a = (undefined2 *******)ppppppuStack_478;
    pppppppuStack_c = pppppppuStack_47a;
    ppppppuStack_e = (undefined2 ******)0x0;
    ppppppuVar9 = (undefined2 ******)0x7a6;
    local_10 = (undefined2 ****)0xd728;
    iVar6 = func_0x00007be8();
    if (iVar6 != 0) {
      iStack_47c = iStack_484;
      for (pppppppuStack_47e = pppppppuStack_486;
          (iStack_47c <= iStack_480 &&
          ((iStack_47c < iStack_480 || (pppppppuStack_47e <= pppppppuStack_482))));
          pppppppuStack_47e = (undefined2 *******)((int)pppppppuStack_47e + 1)) {
        pppppppuStack_6 = (undefined2 *******)iStack_47c;
        pppppppuStack_8 = pppppppuStack_47e;
        pppppppuStack_c = (undefined2 *******)0xd636;
        local_a = (undefined2 *******)ppppppuVar9;
        uVar12 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar12 + 0x14);
        *pbVar1 = *pbVar1 & 0xbf;
        pppppppuStack_6 = (undefined2 *******)iStack_47c;
        pppppppuStack_8 = pppppppuStack_47e;
        local_a = (undefined2 *******)0x0;
        ppppppuVar9 = (undefined2 ******)0x0;
        pppppppuStack_c = (undefined2 *******)0xd64e;
        uVar12 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar12 + 0x14);
        *pbVar1 = *pbVar1 & 0x7f;
        iStack_47c = iStack_47c + (uint)((undefined2 *******)0xfffe < pppppppuStack_47e);
      }
    }
  }
LAB_3ab8_2adb:
  bVar11 = (undefined2 *******)0xfffe < pppppppuStack_47a;
  pppppppuStack_47a = (undefined2 *******)((int)pppppppuStack_47a + 1);
  ppppppuStack_478 = (undefined2 ******)((int)ppppppuStack_478 + (uint)bVar11);
  ppppppuVar8 = ppppppuVar9;
  goto LAB_3ab8_2ae5;
LAB_3ab8_2bc5:
  if (local_1ca == 5) {
    ppppppuStack_478 = (undefined2 ******)0x0;
    for (pppppppuStack_47a = (undefined2 *******)0x1;
        ((int)ppppppuStack_478 <= *(int *)0x14e &&
        (((int)ppppppuStack_478 < *(int *)0x14e ||
         (pppppppuStack_47a <= (undefined2 *******)*(uint *)0x14c))));
        pppppppuStack_47a = (undefined2 *******)((int)pppppppuStack_47a + 1)) {
      pppppppuStack_6 = (undefined2 *******)ppppppuStack_478;
      pppppppuStack_8 = pppppppuStack_47a;
      pppppppuStack_c = (undefined2 *******)0xd781;
      local_a = (undefined2 *******)ppppppuVar8;
      uVar12 = func_0x00000271();
      *(undefined1 *)((int)uVar12 + 0x1d) = 0;
      ppppppuStack_478 =
           (undefined2 ******)
           ((int)ppppppuStack_478 + (uint)((undefined2 *******)0xfffe < pppppppuStack_47a));
      ppppppuVar8 = (undefined2 ******)0x0;
    }
  }
  pppppppuStack_6 = (undefined2 *******)0x1;
  pcVar4 = (code *)swi(0x3f);
  (*pcVar4)();
LAB_3ab8_2c21:
  *(undefined2 *)0xbc0 = 1;
  if (3 < *(byte *)0xb782) {
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
  }
  pcVar4 = (code *)swi(0x3f);
  (*pcVar4)();
  *(undefined2 *)0xbc0 = 1;
  FUN_3ab8_0000();
  local_e0 = (undefined2 ******)0x1;
  *(undefined2 *)0x158 = 0;
  cVar5 = FUN_12c1_009c();
  if (cVar5 == '\x1b') {
    local_43e = (undefined2 ******)0x0;
  }
  cVar5 = FUN_12c1_009c();
  if (cVar5 == '\x1b') {
    local_43e = (undefined2 ******)0x0;
  }
  do {
    cVar5 = FUN_12c1_009c();
  } while (cVar5 != '\0');
  pppppppuStack_6 = (undefined2 *******)0x11f2;
  ppppppuVar8 = (undefined2 ******)0x885;
  pppppppuStack_8 = (undefined2 *******)0xd817;
  func_0x0000dcbd();
  if ((local_10 != (undefined2 ****)0x0) || (local_ec != (undefined2 *****)0x0)) {
    local_43e = (undefined2 ******)0x0;
  }
  if (local_43e == (undefined2 ******)0x0) {
LAB_3ab8_304b:
    if (*(int *)0x158 != 0) {
      return;
    }
    pppppppuStack_6 = (undefined2 *******)0x3993;
    pppppppuStack_8 = &pppppppuStack_47a;
    pppppppuStack_c = (undefined2 *******)0xd87b;
    local_a = (undefined2 *******)ppppppuVar8;
    FUN_21f2_3454();
    auStack_3c6[0] = 0;
    local_1ce = 1;
    do {
      pppppppuStack_6 = (undefined2 *******)0x399a;
      pppppppuStack_8 = (undefined2 *******)auStack_3c6;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0xd896;
      FUN_21f2_2d26();
      local_1ce = local_1ce + 1;
    } while (local_1ce < 7);
    pppppppuStack_6 = (undefined2 *******)local_198;
    pppppppuStack_8 = (undefined2 *******)auStack_3c6;
    local_a = (undefined2 *******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0xd8b2;
    FUN_21f2_2d26();
    pppppppuStack_6 = (undefined2 *******)0x399c;
    pppppppuStack_8 = (undefined2 *******)auStack_3c6;
    local_a = (undefined2 *******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0xd8c2;
    FUN_21f2_2d26();
    pppppppuStack_6 = (undefined2 *******)0x399e;
    pppppppuStack_8 = (undefined2 *******)auStack_3c6;
    local_a = (undefined2 *******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0xd8d2;
    FUN_21f2_2d26();
    if (local_430 != (undefined2 ****)0x0) {
      pppppppuStack_6 = (undefined2 *******)0x39aa;
      pppppppuStack_8 = (undefined2 *******)auStack_3c6;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0xd8e9;
      FUN_21f2_2d26();
      pppppppuStack_6 = &pppppppuStack_47a;
      pppppppuStack_8 = (undefined2 *******)auStack_3c6;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0xd8fa;
      FUN_21f2_2d26();
      pppppppuStack_6 = (undefined2 *******)0x39af;
      pppppppuStack_8 = (undefined2 *******)auStack_3c6;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0xd90a;
      FUN_21f2_2d26();
    }
    pppppppuStack_6 = (undefined2 *******)0x860;
    pppppppuStack_8 = (undefined2 *******)auStack_3c6;
    local_a = (undefined2 *******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0xd91a;
    FUN_21f2_2d26();
    pppppppuStack_6 = &pppppppuStack_47a;
    pppppppuStack_8 = (undefined2 *******)auStack_3c6;
    local_a = (undefined2 *******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0xd92b;
    FUN_21f2_2d26();
    if (local_430 == (undefined2 ****)0x0) {
      pppppppuStack_6 = (undefined2 *******)0x39b4;
      pppppppuStack_8 = (undefined2 *******)auStack_3c6;
      local_a = (undefined2 *******)0x22b2;
      pppppppuStack_c = (undefined2 *******)0xd942;
      FUN_21f2_2d26();
    }
    pppppppuStack_6 = (undefined2 *******)0x39b8;
    pppppppuStack_8 = (undefined2 *******)auStack_3c6;
    local_a = (undefined2 *******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0xd952;
    FUN_21f2_2d26();
    pppppppuStack_6 = (undefined2 *******)0x7e0;
    pppppppuStack_8 = (undefined2 *******)auStack_3c6;
    local_a = (undefined2 *******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0xd962;
    FUN_21f2_2d26();
    pppppppuStack_6 = (undefined2 *******)auStack_3c6;
    pppppppuStack_8 = (undefined2 *******)0x4;
    local_a = (undefined2 *******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0xd972;
    FUN_1def_07a4();
    *(undefined2 *)0xc2c = 1;
    *(undefined1 *)0xd14 = 0;
    *(undefined1 *)0xcf4 = 1;
    pppppppuStack_6 = (undefined2 *******)&iStack_1cc;
    pppppppuStack_8 = (undefined2 *******)auStack_43c;
    local_a = (undefined2 *******)apppppuStack_438;
    pppppppuStack_c = (undefined2 *******)auStack_3c6;
    ppppppuStack_e = local_e0;
    local_10 = (undefined2 ****)0x1bb4;
    local_12 = (undefined2 *****)0xd9a1;
    local_434 = FUN_1def_0904();
    *(undefined1 *)0xd14 = 2;
    *(undefined1 *)0xcf4 = 0;
    *(undefined2 *)0xc2c = 0;
    *(undefined2 *)0xbc0 = 1;
    if (*(int *)0x158 != 0) {
      return;
    }
    pppppppuStack_6 = (undefined2 *******)local_184;
    pppppppuStack_8 = (undefined2 *******)local_2fa;
    local_a = (undefined2 *******)0x1bb4;
    ppppppuVar8 = (undefined2 ******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0xd9d7;
    FUN_21f2_3454();
    if ((local_434 == 1) || (iStack_1cc == 1)) goto LAB_3ab8_2604;
    if (iStack_1cc == 2) {
      local_434 = 2;
    }
    if (local_430 != (undefined2 ****)0x0) {
      if ((local_434 == 2) || (local_434 == 0x14)) goto LAB_3ab8_25fe;
      if (local_434 == 3) goto LAB_3ab8_2e9c;
      if (local_434 == 4) {
        return;
      }
    }
    if (local_434 == 2) goto LAB_3ab8_2e9c;
    if (local_434 == 3) {
      return;
    }
    if (local_434 == 0x14) {
      return;
    }
    if (local_434 == -1) {
      uVar10 = *(undefined2 *)0xc60;
      uVar2 = *(undefined2 *)0xc50;
      uVar3 = *(undefined2 *)0xc52;
      pppppppuStack_486 = (undefined2 *******)*(undefined2 *)0xc54;
      iStack_484 = *(int *)0xc56;
      pppppppuStack_47e = (undefined2 *******)*(undefined2 *)0xc58;
      iStack_47c = *(int *)0xc5a;
      iVar6 = *(int *)0xc62;
      pppppppuStack_482 = (undefined2 *******)*(undefined2 *)0xc5c;
      iStack_480 = *(int *)0xc5e;
      if (local_e0 != (undefined2 ******)0x0) {
        pppppppuStack_6 = (undefined2 *******)0x2;
        pcVar4 = (code *)swi(0x3f);
        (*pcVar4)();
        *(undefined1 *)0xd14 = 2;
        *(undefined2 *)0xbc0 = 1;
      }
      *(undefined2 *)0xc60 = uVar10;
      *(undefined2 *)0xc50 = uVar2;
      *(undefined2 *)0xc52 = uVar3;
      *(undefined2 *)0xc54 = pppppppuStack_486;
      *(int *)0xc56 = iStack_484;
      *(undefined2 *)0xc58 = pppppppuStack_47e;
      *(int *)0xc5a = iStack_47c;
      *(int *)0xc62 = iVar6;
      *(undefined2 *)0xc5c = pppppppuStack_482;
      *(int *)0xc5e = iStack_480;
      if (iVar6 != 0) {
        pppppppuStack_6 = (undefined2 *******)0x22b2;
        ppppppuVar8 = (undefined2 ******)0x3bf;
        pppppppuStack_8 = (undefined2 *******)0xdbc5;
        func_0x00004624();
      }
      local_e0 = (undefined2 ******)0x0;
    }
    goto LAB_3ab8_304b;
  }
  if (local_43e == (undefined2 ******)0x1) {
    pppppppuStack_6 = (undefined2 *******)local_184;
    pppppppuStack_8 = (undefined2 *******)local_2fa;
    local_a = (undefined2 *******)0x885;
    ppppppuVar8 = (undefined2 ******)0x22b2;
    pppppppuStack_c = (undefined2 *******)0xd84d;
    FUN_21f2_3454();
  }
  if (local_43e == (undefined2 ******)0x2) {
    pppppppuStack_6 = (undefined2 *******)local_264;
    pppppppuStack_8 = (undefined2 *******)local_2fa;
    pppppppuStack_c = (undefined2 *******)0xd868;
    local_a = (undefined2 *******)ppppppuVar8;
    FUN_21f2_3454();
    ppppppuVar8 = (undefined2 ******)0x22b2;
  }
  goto LAB_3ab8_2604;
LAB_3ab8_2e9c:
  local_360 = 0;
  ppppppuVar9 = ppppppuVar8;
LAB_3ab8_2ea2:
  pppppppuStack_6 = (undefined2 *******)0xd;
  pppppppuStack_8 = (undefined2 *******)0x398b;
  local_a = (undefined2 *******)0xd04;
  ppppppuStack_e = (undefined2 ******)0xda33;
  pppppppuStack_c = (undefined2 *******)ppppppuVar9;
  func_0x00024d00();
  pppppppuStack_6 = (undefined2 *******)0x20;
  pppppppuStack_8 = (undefined2 *******)0xbefe;
  local_a = (undefined2 *******)local_dc;
  pppppppuStack_c = (undefined2 *******)0x22b2;
  ppppppuStack_e = (undefined2 ******)0xda48;
  func_0x00024d00();
  pppppppuStack_6 = (undefined2 *******)0x20;
  pppppppuStack_8 = (undefined2 *******)0xbf1e;
  local_a = (undefined2 *******)local_bc;
  pppppppuStack_c = (undefined2 *******)0x22b2;
  ppppppuStack_e = (undefined2 ******)0xda5d;
  func_0x00024d00();
  pppppppuStack_6 = (undefined2 *******)local_198;
  pppppppuStack_8 = (undefined2 *******)local_2fa;
  pcVar4 = (code *)swi(0x3f);
  local_360 = (*pcVar4)();
  pppppppuStack_6 = (undefined2 *******)0xbefe;
  pppppppuStack_8 = (undefined2 *******)0x22b2;
  local_a = (undefined2 *******)0xda87;
  func_0x00024d00();
  pppppppuStack_6 = (undefined2 *******)0xbf1e;
  pppppppuStack_8 = (undefined2 *******)0x22b2;
  local_a = (undefined2 *******)0xda9c;
  func_0x00024d00();
  *(undefined2 *)0xbc0 = 1;
  if (*(int *)0x158 != 0) {
    return;
  }
  if (local_360 == -1) {
    return;
  }
  FUN_10ad_18a4();
  if (local_360 == 2) {
    pppppppuStack_6 = (undefined2 *******)0x0;
    pppppppuStack_8 = (undefined2 *******)0x0;
    local_a = (undefined2 *******)0x0;
    pppppppuStack_c = (undefined2 *******)0x0;
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
    *(undefined2 *)0x158 = 20000;
    return;
  }
  pppppppuStack_6 = (undefined2 *******)local_2fa;
  pppppppuStack_8 = (undefined2 *******)0x11;
  local_a = (undefined2 *******)0x11f2;
  ppppppuVar8 = (undefined2 ******)0x11f2;
  pppppppuStack_c = (undefined2 *******)0xd17c;
  func_0x000120ec();
LAB_3ab8_25fe:
  local_430 = (undefined2 ****)0x0;
  goto LAB_3ab8_2604;
}



/* 3ab8:305f  FUN_3ab8_305f  499 bytes, 0 callers */

void __cdecl16far FUN_3ab8_305f(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_a6 [4];
  undefined1 local_a2 [48];
  int local_72;
  undefined1 local_70 [88];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *local_a;
  undefined1 *puStack_8;
  undefined1 **ppuStack_6;
  undefined1 **ppuStack_4;
  
  ppuStack_4 = (undefined1 **)0x3ab8;
  ppuStack_6 = (undefined1 **)0xdbea;
  FUN_21f2_0ebc();
  ppuStack_4 = (undefined1 **)0x80a;
  ppuStack_6 = &local_a;
  puStack_8 = (undefined1 *)0x22b2;
  uVar2 = 0x22b2;
  local_a = (undefined1 *)0xdbf7;
  FUN_21f2_3454();
  do {
    ppuStack_4 = (undefined1 **)0x39ba;
    ppuStack_6 = (undefined1 **)local_70;
    local_a = (undefined1 *)0xdc06;
    puStack_8 = (undefined1 *)uVar2;
    FUN_21f2_3454();
    ppuStack_4 = &local_a;
    ppuStack_6 = (undefined1 **)local_70;
    puStack_8 = (undefined1 *)0x22b2;
    local_a = (undefined1 *)0xdc15;
    FUN_21f2_2d26();
    ppuStack_4 = (undefined1 **)0x39ca;
    ppuStack_6 = (undefined1 **)local_70;
    puStack_8 = (undefined1 *)0x22b2;
    local_a = (undefined1 *)0xdc24;
    FUN_21f2_2d26();
    ppuStack_4 = &local_a;
    ppuStack_6 = (undefined1 **)local_70;
    puStack_8 = (undefined1 *)0x22b2;
    local_a = (undefined1 *)0xdc33;
    FUN_21f2_2d26();
    ppuStack_4 = (undefined1 **)0x39d7;
    ppuStack_6 = (undefined1 **)local_70;
    puStack_8 = (undefined1 *)0x22b2;
    local_a = (undefined1 *)0xdc42;
    FUN_21f2_2d26();
    ppuStack_4 = &local_a;
    ppuStack_6 = (undefined1 **)local_70;
    puStack_8 = (undefined1 *)0x22b2;
    local_a = (undefined1 *)0xdc51;
    FUN_21f2_2d26();
    ppuStack_4 = (undefined1 **)0x39e9;
    ppuStack_6 = (undefined1 **)local_70;
    puStack_8 = (undefined1 *)0x22b2;
    local_a = (undefined1 *)0xdc60;
    FUN_21f2_2d26();
    ppuStack_4 = (undefined1 **)0x39eb;
    ppuStack_6 = (undefined1 **)local_70;
    puStack_8 = (undefined1 *)0x22b2;
    local_a = (undefined1 *)0xdc6f;
    FUN_21f2_2d26();
    if (*(char *)0x124 != '\0') {
      ppuStack_4 = (undefined1 **)0x2;
      ppuStack_6 = (undefined1 **)0x49;
      puStack_8 = (undefined1 *)0x22b2;
      local_a = (undefined1 *)0xdc84;
      FUN_3ab8_2473();
    }
    ppuStack_4 = (undefined1 **)local_70;
    ppuStack_6 = (undefined1 **)0x5;
    puStack_8 = (undefined1 *)0x22b2;
    local_a = (undefined1 *)0xdc93;
    FUN_1def_07a4();
    *(undefined2 *)0xc1a = 1;
    if (*(int *)0xce6 != 0) {
      *(undefined2 *)0xc1a = 0;
    }
    ppuStack_4 = (undefined1 **)&local_c;
    ppuStack_6 = (undefined1 **)local_a6;
    puStack_8 = local_a2;
    local_a = local_70;
    local_c = 0;
    uStack_e = 0x1bb4;
    uStack_10 = 0xdcc2;
    local_72 = FUN_1def_0904();
    *(undefined2 *)0xc1a = 0;
    if (*(int *)0x158 != 0) {
      if (*(char *)0x118 != '\0') {
        return;
      }
      if (((*(int *)0xa62 != 0x11) && (*(int *)0xa64 != *(int *)0xa62)) &&
         (*(int *)0xa66 != *(int *)0xa62)) {
        return;
      }
      *(undefined2 *)0x158 = 0;
      if (*(char *)0x15b == '\x02') {
        local_72 = 4;
      }
      else {
        local_72 = 1;
      }
    }
    ppuStack_4 = (undefined1 **)0x1bb4;
    uVar2 = 0x885;
    ppuStack_6 = (undefined1 **)0xdd16;
    func_0x0000c3ca();
    if (*(int *)0xc18 == 0) {
      if ((local_72 == 1) || (local_c == 1)) {
        ppuStack_4 = (undefined1 **)0x2;
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
      }
      if ((local_72 == 2) || (local_c == 2)) {
        ppuStack_4 = (undefined1 **)*(undefined2 *)0x99f2;
        ppuStack_6 = (undefined1 **)*(undefined2 *)0x99f0;
        puStack_8 = (undefined1 *)*(int *)0x99ee;
        local_a = (undefined1 *)*(int *)0x99ec;
        local_c = *(int *)0x99f2;
        uStack_e = *(undefined2 *)0x99f0;
        uStack_10 = *(undefined2 *)0x99ee;
        uStack_12 = *(undefined2 *)0x99ec;
        uStack_14 = 0;
        uStack_16 = 0x885;
        uStack_18 = 0xdda1;
        FUN_3ab8_325e();
      }
      if (local_72 == 3) {
        ppuStack_4 = (undefined1 **)0x0;
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
      }
      if (local_72 == 4) {
        ppuStack_4 = (undefined1 **)0x0;
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
      }
      if (local_72 == 5) {
        ppuStack_4 = (undefined1 **)0x0;
        ppuStack_6 = (undefined1 **)0x885;
        puStack_8 = (undefined1 *)0xddcf;
        FUN_3ab8_24d3();
      }
      if (*(int *)0x158 != 0) {
        return;
      }
    }
    else {
      ppuStack_4 = (undefined1 **)0x885;
      ppuStack_6 = (undefined1 **)0xdd26;
      func_0x000297e6();
      ppuStack_4 = (undefined1 **)0x22b2;
      ppuStack_6 = (undefined1 **)0xdd2b;
      func_0x00029d78();
      local_c = 0x22b2;
      uStack_e = 0xdd35;
      func_0x000299d1();
      local_c = 0x22b2;
      uStack_e = 0xdd3e;
      func_0x000297e6();
      local_c = 0x22b2;
      uStack_e = 0xdd43;
      func_0x00029d78();
      uStack_14 = 0x22b2;
      uStack_16 = 0xdd4d;
      func_0x000299d1();
      uStack_14 = 0x22b2;
      uVar2 = 0x3bf;
      uStack_16 = 0xdd52;
      func_0x0000507a();
    }
  } while( true );
}



/* 3ab8:325e  FUN_3ab8_325e  6346 bytes, 2 callers */

/* WARNING: Instruction at (ram,0x00030d72) overlaps instruction at (ram,0x00030d70)
    */
/* WARNING: Type propagation algorithm not settling */

int __cdecl16far
FUN_3ab8_325e(int param_1,int param_2,int param_3,int param_4,undefined2 *param_5,
             undefined2 *param_6,undefined2 *param_7,undefined2 *param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  undefined2 extraout_DX;
  uint uVar15;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  uint *unaff_SI;
  int *piVar16;
  uint *unaff_DI;
  uint *puVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar20;
  bool bVar21;
  undefined1 uVar22;
  uint *puVar23;
  undefined4 uVar24;
  int *in_stack_0000003a;
  int *in_stack_0000003c;
  int *in_stack_0000003e;
  int *in_stack_00000040;
  undefined2 local_a7e [2];
  int local_a7a;
  int local_a78 [5];
  uint local_a6e;
  uint local_a6c;
  uint local_a6a;
  uint local_a68;
  int local_a66;
  undefined2 local_a64;
  undefined2 local_a5a;
  undefined2 local_a58;
  uint local_a56;
  uint local_a54;
  int local_a52;
  int local_a50;
  undefined2 local_a4e;
  undefined2 local_a4c;
  undefined2 local_a4a;
  undefined2 local_a48;
  int local_a46;
  undefined2 local_a40;
  undefined2 local_a3e;
  int local_a28;
  int local_a26;
  uint local_a24;
  uint local_a1e;
  uint local_a1c;
  uint local_a1a;
  int local_a18;
  uint local_a16;
  uint local_a14;
  undefined1 local_a12 [100];
  int local_9ae;
  uint local_9ac;
  int local_9aa;
  undefined2 local_9a8;
  undefined2 local_9a6;
  uint local_9a4;
  uint local_9a2;
  int local_9a0;
  int local_99e;
  uint local_99c;
  undefined2 local_99a;
  uint local_998;
  uint local_996;
  uint local_994;
  uint local_992;
  uint local_990;
  uint local_98e;
  uint local_98c;
  uint local_98a;
  uint local_986;
  uint local_984;
  uint local_982;
  uint local_980;
  uint local_97e;
  uint local_97c;
  int local_97a;
  undefined2 local_978;
  undefined2 local_976;
  uint local_974;
  uint local_972;
  uint local_970;
  uint local_96e;
  uint local_96c;
  undefined2 local_96a;
  undefined2 local_968;
  undefined2 local_966;
  uint local_964;
  undefined2 local_962;
  undefined2 local_960;
  undefined2 local_95e;
  undefined2 local_954;
  undefined2 local_952;
  undefined2 local_950;
  uint local_94e;
  uint local_94c;
  uint local_94a;
  uint local_948;
  uint local_946;
  uint local_944;
  uint local_942;
  uint local_940;
  uint local_93e;
  uint local_93c;
  uint local_934;
  undefined4 local_932;
  uint local_92e;
  undefined2 local_92c;
  undefined2 local_92a;
  undefined2 local_928;
  uint local_926;
  undefined2 local_924;
  undefined2 local_922;
  undefined2 local_920;
  int local_918;
  int local_916;
  int local_914;
  uint local_912;
  uint local_90c;
  uint local_90a;
  uint auStack_908 [11];
  uint local_8f2 [550];
  int local_4a6 [3];
  uint local_4a0;
  uint local_49e;
  uint local_49c;
  uint local_49a;
  uint local_498;
  uint local_496;
  uint local_494;
  uint local_492;
  uint local_490;
  uint local_48e;
  uint local_48c;
  uint local_48a;
  byte local_488;
  byte local_487;
  byte local_486;
  byte local_484;
  byte local_483;
  uint auStack_482 [459];
  int iStack_ec;
  uint uStack_e6;
  uint uStack_e4;
  undefined2 uStack_e2;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d6;
  uint uStack_d4;
  uint uStack_d2;
  uint uStack_d0;
  undefined2 uStack_ce;
  undefined2 uStack_cc;
  int iStack_c2;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  uint uStack_b6;
  undefined2 uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  undefined1 auStack_a6 [6];
  int iStack_a0;
  int iStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  int iStack_8c;
  int iStack_8a;
  int iStack_88;
  int iStack_86;
  uint uStack_84;
  uint uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  int iStack_6e;
  undefined2 uStack_6c;
  uint uStack_6a;
  uint uStack_68;
  uint uStack_66;
  int iStack_64;
  int iStack_62;
  int iStack_60;
  uint uStack_5e;
  undefined2 uStack_5c;
  uint uStack_5a;
  int iStack_50;
  int iStack_4e;
  int iStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  uint *puStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  int iStack_38;
  uint uStack_36;
  undefined2 uStack_34;
  uint uStack_32;
  uint uStack_30;
  uint uStack_2e;
  int iStack_2a;
  int iStack_28;
  int iStack_26;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_1a;
  uint local_18;
  uint local_16;
  uint local_14;
  undefined2 local_12;
  int *piStack_10;
  uint *puStack_e;
  uint *puStack_c;
  
  FUN_21f2_0ebc();
  puStack_c = (uint *)0x22b2;
  puStack_e = (uint *)0xddf9;
  FUN_21f2_3454();
  puStack_c = (uint *)0x22b2;
  puStack_e = (uint *)0xde09;
  FUN_21f2_2d26();
  puStack_c = (uint *)0x22b2;
  puStack_e = (uint *)0xde19;
  FUN_21f2_2d26();
  puStack_c = (uint *)0x22b2;
  puStack_e = (uint *)0xde28;
  FUN_21f2_3454();
  local_97a = 0;
  local_a26 = 0;
  local_9a0 = 0;
  uVar18 = 0x885;
  puStack_c = (undefined2 *)0xde3e;
  func_0x0000daa6();
  *(uint *)0xc3be = *(uint *)0xc3be ^ (byte)(*(char *)0xc3be << 2 ^ *(byte *)0xc3be) & 0x10;
  if (*(char *)0x12a == '\x02') {
    *(byte *)0xc3be = *(byte *)0xc3be | 4;
  }
  uVar19 = extraout_DX;
  if (param_1 != 0) {
    func_0x00029834();
    func_0x00029983();
    func_0x00029834();
    func_0x00029983();
LAB_3ab8_3468:
    func_0x0000c340();
    puStack_c = (uint *)0xdff6;
    func_0x00012276();
    puStack_c = (uint *)0xe001;
    func_0x00012276();
    puStack_c = (uint *)0xe00b;
    func_0x00012276();
    puStack_c = (uint *)0xe015;
    func_0x00012276();
    puStack_c = (uint *)0xe01f;
    func_0x00012276();
    puStack_c = (uint *)0xe029;
    func_0x00012276();
    puStack_c = (uint *)0xe033;
    func_0x00012276();
    puStack_c = (uint *)0xe03d;
    func_0x00012276();
    puStack_c = (uint *)0xe047;
    func_0x00012276();
    if (*(char *)0x124 != '\0') {
      puStack_c = (uint *)0xe058;
      func_0x00012276();
      puStack_c = (uint *)0xe062;
      func_0x00012276();
    }
    func_0x00010526();
    local_a4a = *(undefined2 *)0x99f4;
    local_a48 = *(undefined2 *)0x99f6;
    uVar18 = 0x1b6e;
    local_a40 = local_a4a;
    local_a3e = local_a48;
    FUN_1885_2ec3();
    if (*(char *)0x12a == '\x02') {
      uVar18 = 0x885;
      puStack_c = (uint *)0xe093;
      func_0x0000daa6();
      *(byte *)0xc3be = *(byte *)0xc3be | 4;
    }
    do {
      *(undefined2 *)0xb6a = 0xffff;
      *(undefined2 *)0xa4a = 1;
      puStack_c = &local_a4e;
      puStack_e = (uint *)&local_914;
      piStack_10 = local_4a6;
      local_14 = 0xe0c3;
      local_12 = uVar18;
      local_a66 = func_0x00006608();
      *(undefined2 *)0xb6a = 0;
      *(undefined2 *)0xa4a = 0;
      if (*(int *)0x158 != 0) {
        if (*(char *)0x12a == '\x02') {
          puStack_c = (uint *)0xe0e8;
          func_0x0000daa6();
          *(uint *)0xc3be =
               *(uint *)0xc3be ^ (byte)((byte)(*(uint *)0xc3be >> 2) ^ *(byte *)0xc3be) & 4;
        }
        goto code_r0x00030d9b;
      }
      puVar12 = unaff_SI;
      if (local_a66 == -1) {
        if (*(char *)0x12a == '\x02') {
          puStack_c = (undefined2 *)0xe115;
          func_0x0000daa6();
          *(uint *)0xc3be =
               *(uint *)0xc3be ^ (byte)((byte)(*(uint *)0xc3be >> 2) ^ *(byte *)0xc3be) & 4;
        }
LAB_3ab8_3624:
        uVar18 = 0x1b6e;
        FUN_1885_2ec3();
        uVar19 = extraout_DX_00;
        goto LAB_3ab8_461d;
      }
      if (local_a66 == 99) goto code_r0x0003e131;
      local_954 = 0;
      uVar20 = local_99e == 0;
      if (!(bool)uVar20) {
        puStack_c = local_a7e;
        puStack_e = (uint *)local_a78;
        piStack_10 = (int *)0x3bf;
        local_12 = 0xe17d;
        func_0x0000dcbd();
        uVar15 = (int)*(uint *)0xc1c >> 0xf;
        if ((local_a7a - local_4a6[0] < (int)-((*(uint *)0xc1c ^ uVar15) - uVar15)) &&
           (*(char *)0x124 != '\0')) {
          if (local_99e == 2) goto LAB_3ab8_3624;
          local_954 = 1;
        }
        if (*(char *)0x12a == '\x02') {
          puStack_c = (undefined2 *)0xe1c1;
          func_0x0000daa6();
          *(uint *)0xc3be =
               *(uint *)0xc3be ^ (byte)((byte)(*(uint *)0xc3be >> 2) ^ *(byte *)0xc3be) & 4;
        }
        FUN_1885_2ec3();
        puStack_c = (uint *)0xe1e1;
        func_0x0000daa6();
        func_0x0000c3ca();
        if (((param_1 != 0) && (*(char *)0x7e != '\0')) && (*(char *)0x84 != '\0')) {
          func_0x0000c3ca();
          puStack_c = (uint *)local_a12;
          puStack_e = (uint *)0x885;
          piStack_10 = (int *)0xe212;
          func_0x0001263c();
          puStack_c = (uint *)local_a12;
          puStack_e = (uint *)0x1;
          pcVar6 = (code *)swi(0x3f);
          (*pcVar6)();
          *(undefined1 *)0xd14 = 2;
        }
        local_97a = 0;
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        local_12 = 0xe251;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0xe25a;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0xe25f;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = 0xe269;
        func_0x000299d1();
        local_18 = 0x22b2;
        local_1a = 0xe272;
        func_0x000297e6();
        local_18 = 0x22b2;
        local_1a = 0xe277;
        func_0x00029d78();
        uStack_20 = 0x22b2;
        func_0x000299d1();
        uStack_20 = 0x22b2;
        func_0x000297e6();
        uStack_20 = 0x22b2;
        func_0x00029d78();
        iStack_28 = 0x22b2;
        iStack_2a = -0x1d67;
        func_0x000299d1();
        iStack_28 = 0x22b2;
        iStack_2a = -0x1d62;
        func_0x00008211();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x000297e6();
        func_0x0002a714();
        func_0x000297e6();
        func_0x000297e6();
        func_0x0002a714();
        func_0x0002a714();
        func_0x00029983();
        func_0x000297e6();
        func_0x000297e6();
        func_0x0002a714();
        func_0x000297e6();
        func_0x000297e6();
        func_0x0002a714();
        func_0x0002a714();
        func_0x00029983();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1bc0();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1bc0();
        FUN_28b3_1bc0();
        func_0x00029983();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1bc0();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1bc0();
        FUN_28b3_1bc0();
        uVar18 = 0x22b2;
        func_0x00029983();
        local_998 = local_94e;
        local_996 = local_94c;
        if ((int)local_94c < 0) {
          local_998 = -local_94e;
          local_996 = -((local_94c & 0x7fff) + (uint)(local_94e != 0));
        }
        local_9a4 = local_974;
        local_9a2 = local_972;
        if ((int)local_972 < 0) {
          local_9a4 = -local_974;
          local_9a2 = -((local_972 & 0x7fff) + (uint)(local_974 != 0));
        }
        local_a16 = local_986;
        local_a14 = local_984;
        if ((int)local_984 < 0) {
          local_a16 = -local_986;
          local_a14 = -((local_984 & 0x7fff) + (uint)(local_986 != 0));
        }
        local_a1e = local_990;
        local_a1c = local_98e;
        if ((int)local_98e < 0) {
          local_a1e = -local_990;
          local_a1c = -((local_98e & 0x7fff) + (uint)(local_990 != 0));
        }
        local_9ac = 1;
        local_9aa = 0;
        goto LAB_3ab8_3e5c;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar20) {
        func_0x000297e6();
        func_0x000297e6();
        uVar18 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar20) goto LAB_3ab8_3925;
      }
      else {
LAB_3ab8_3925:
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        local_12 = 0xe4bd;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0xe4c6;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0xe4cb;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = 0xe4d5;
        func_0x000299d1();
        local_18 = 0x22b2;
        local_1a = 0xe4de;
        func_0x000297e6();
        local_18 = 0x22b2;
        local_1a = 0xe4e3;
        func_0x00029d78();
        uStack_20 = 0x22b2;
        func_0x000299d1();
        uStack_20 = 0x22b2;
        func_0x000297e6();
        uStack_20 = 0x22b2;
        func_0x00029d78();
        iStack_28 = 0x22b2;
        iStack_2a = -0x1afb;
        func_0x000299d1();
        iStack_28 = 0x22b2;
        iStack_2a = -0x1af6;
        func_0x00008211();
        FUN_1885_2ec3();
        local_a64 = 0;
        puStack_c = (uint *)0xe522;
        func_0x000297e6();
        puStack_c = (uint *)0xe527;
        func_0x00029d78();
        local_12 = 0x22b2;
        local_14 = 0xe531;
        func_0x000299d1();
        local_12 = 0x22b2;
        local_14 = 0xe53a;
        func_0x000297e6();
        local_12 = 0x22b2;
        local_14 = 0xe53f;
        func_0x00029d78();
        local_1a = 0x22b2;
        uStack_1c = 0xe549;
        func_0x000299d1();
        local_1a = 0x22b2;
        uStack_1c = 0xe552;
        func_0x000297e6();
        local_1a = 0x22b2;
        uStack_1c = 0xe557;
        func_0x00029d78();
        uStack_24 = 0xe561;
        func_0x000299d1();
        uStack_24 = 0xe56a;
        func_0x000297e6();
        uStack_24 = 0xe56f;
        func_0x00029d78();
        iStack_2a = 0x22b2;
        func_0x000299d1();
        iStack_2a = 0x22b2;
        func_0x0001e18f();
        puStack_c = (uint *)0xe58d;
        func_0x000297e6();
        puStack_c = (uint *)0xe592;
        func_0x00029d78();
        local_12 = 0x22b2;
        local_14 = 0xe59c;
        func_0x000299d1();
        local_12 = 0x22b2;
        local_14 = 0xe5a5;
        func_0x000297e6();
        local_12 = 0x22b2;
        local_14 = 0xe5aa;
        func_0x00029d78();
        local_1a = 0x22b2;
        uStack_1c = 0xe5b4;
        func_0x000299d1();
        local_1a = 0x22b2;
        uStack_1c = 0xe5bd;
        func_0x000297e6();
        local_1a = 0x22b2;
        uStack_1c = 0xe5c2;
        func_0x00029d78();
        uStack_24 = 0xe5cc;
        func_0x000299d1();
        uStack_24 = 0xe5d5;
        func_0x000297e6();
        uStack_24 = 0xe5da;
        func_0x00029d78();
        iStack_2a = 0x22b2;
        func_0x000299d1();
        iStack_2a = 0x22b2;
        func_0x0001e18f();
        if (param_1 == 0) {
          puStack_c = (uint *)0xe76b;
          func_0x000297e6();
          puStack_c = (uint *)0xe770;
          func_0x00029d78();
          local_12 = 0x22b2;
          local_14 = 0xe77a;
          func_0x000299d1();
          local_12 = 0x22b2;
          local_14 = 0xe783;
          func_0x000297e6();
          local_12 = 0x22b2;
          local_14 = 0xe788;
          func_0x00029d78();
          local_1a = 0x22b2;
          uStack_1c = 0xe792;
          func_0x000299d1();
          local_1a = 0x22b2;
          uStack_1c = 0xe79b;
          func_0x000297e6();
          local_1a = 0x22b2;
          uStack_1c = 0xe7a0;
          func_0x00029d78();
          uStack_24 = 0xe7aa;
          func_0x000299d1();
          uStack_24 = 0xe7b3;
          func_0x000297e6();
          uStack_24 = 0xe7b8;
          func_0x00029d78();
          iStack_2a = 0x22b2;
          func_0x000299d1();
          iStack_2a = 0x22b2;
          func_0x0001e18f();
          puStack_c = (uint *)0xe7d7;
          func_0x000297e6();
          puStack_c = (uint *)0xe7dc;
          func_0x00029d78();
          local_12 = 0x22b2;
          local_14 = 0xe7e6;
          func_0x000299d1();
          local_12 = 0x22b2;
          local_14 = 0xe7ef;
          func_0x000297e6();
          local_12 = 0x22b2;
          local_14 = 0xe7f4;
          func_0x00029d78();
          local_1a = 0x22b2;
          uStack_1c = 0xe7fe;
          func_0x000299d1();
          local_1a = 0x22b2;
          uStack_1c = 0xe807;
          func_0x000297e6();
          local_1a = 0x22b2;
          uStack_1c = 0xe80c;
          func_0x00029d78();
          uStack_24 = 0xe816;
          func_0x000299d1();
          uStack_24 = 0xe81f;
          func_0x000297e6();
        }
        else {
          if (*(int *)0xcb6 == 0) {
            local_952 = *(undefined2 *)0x99f8;
            local_950 = *(undefined2 *)0x99fa;
            local_978 = *(undefined2 *)0x9984;
            local_976 = *(undefined2 *)0x9986;
          }
          else {
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029983();
          }
          puStack_c = (uint *)0xe65f;
          func_0x000297e6();
          puStack_c = (uint *)0xe668;
          func_0x00029bb5();
          puStack_c = (uint *)0xe66d;
          func_0x00029d78();
          local_12 = 0x22b2;
          local_14 = 58999;
          func_0x000299d1();
          local_12 = 0x22b2;
          local_14 = 0xe680;
          func_0x000297e6();
          local_12 = 0x22b2;
          local_14 = 0xe689;
          func_0x00029bb5();
          local_12 = 0x22b2;
          local_14 = 0xe68e;
          func_0x00029d78();
          local_1a = 0x22b2;
          uStack_1c = 0xe698;
          func_0x000299d1();
          local_1a = 0x22b2;
          uStack_1c = 0xe6a1;
          func_0x000297e6();
          local_1a = 0x22b2;
          uStack_1c = 0xe6aa;
          FUN_28b3_100d();
          local_1a = 0x22b2;
          uStack_1c = 0xe6af;
          func_0x00029d78();
          uStack_24 = 0xe6b9;
          func_0x000299d1();
          uStack_24 = 0xe6c2;
          func_0x000297e6();
          uStack_24 = 0xe6cb;
          FUN_28b3_100d();
          uStack_24 = 0xe6d0;
          func_0x00029d78();
          iStack_2a = 0x22b2;
          func_0x000299d1();
          iStack_2a = 0x22b2;
          func_0x0001e18f();
          puStack_c = (uint *)0xe6ef;
          func_0x000297e6();
          puStack_c = (uint *)0xe6f8;
          func_0x00029bb5();
          puStack_c = (uint *)0xe6fd;
          func_0x00029d78();
          local_12 = 0x22b2;
          local_14 = 0xe707;
          func_0x000299d1();
          local_12 = 0x22b2;
          local_14 = 0xe710;
          func_0x000297e6();
          local_12 = 0x22b2;
          local_14 = 0xe719;
          FUN_28b3_100d();
          local_12 = 0x22b2;
          local_14 = 0xe71e;
          func_0x00029d78();
          local_1a = 0x22b2;
          uStack_1c = 0xe728;
          func_0x000299d1();
          local_1a = 0x22b2;
          uStack_1c = 0xe731;
          func_0x000297e6();
          local_1a = 0x22b2;
          uStack_1c = 0xe73a;
          FUN_28b3_100d();
          local_1a = 0x22b2;
          uStack_1c = 0xe73f;
          func_0x00029d78();
          uStack_24 = 0xe749;
          func_0x000299d1();
          uStack_24 = 0xe752;
          func_0x000297e6();
          uStack_24 = 0xe75b;
          func_0x00029bb5();
        }
        uStack_24 = 0xe824;
        func_0x00029d78();
        iStack_2a = 0x22b2;
        func_0x000299d1();
        iStack_2a = 0x22b2;
        uVar18 = 0x1bb4;
        func_0x0001e18f();
      }
      local_a40 = local_a4e;
      local_a3e = local_a4c;
      local_a4a = local_a5a;
      local_a48 = local_a58;
    } while( true );
  }
  goto LAB_2bb4_522f_1;
code_r0x0003e131:
  if (*(char *)0x12a == '\x02') {
    puStack_c = (undefined2 *)0xe141;
    func_0x0000daa6();
    *(uint *)0xc3be = *(uint *)0xc3be ^ (byte)((byte)(*(uint *)0xc3be >> 2) ^ *(byte *)0xc3be) & 4;
  }
  goto LAB_3ab8_3468;
LAB_3ab8_3e5c:
  if ((*(int *)0x14a < local_9aa) || ((*(int *)0x14a <= local_9aa && (*(uint *)0x148 < local_9ac))))
  goto LAB_3ab8_4114;
  puStack_e = (uint *)0xe9ff;
  puStack_c = (uint *)uVar18;
  local_932 = (uint *)func_0x0000013f();
  uVar18 = (undefined2)((ulong)local_932 >> 0x10);
  puVar11 = (uint *)local_932;
  *(byte *)(puVar11 + 10) = (byte)puVar11[10] & 0xfd;
  *(byte *)((int)puVar11 + 0x15) = *(byte *)((int)puVar11 + 0x15) & 0xfe;
  *(byte *)((int)puVar11 + 0x15) = *(byte *)((int)puVar11 + 0x15) & 0xfd;
  *(byte *)((int)puVar11 + 0x15) = *(byte *)((int)puVar11 + 0x15) & 0xfb;
  local_a1a = (uint)(byte)puVar11[9];
  uVar18 = 0x11f2;
  puStack_c = (uint *)0xea31;
  iVar13 = func_0x000125f1();
  if (iVar13 != 0) {
    puVar11 = &local_498;
    puVar12 = (uint *)local_932;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar3 = puVar11;
      puVar11 = puVar11 + 1;
      puVar23 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar3 = *puVar23;
    }
    local_970 = local_498;
    local_96e = local_496;
    if ((int)local_496 < 0) {
      local_970 = -local_498;
      local_96e = -((local_496 & 0x7fff) + (uint)(local_498 != 0));
    }
    local_982 = local_494;
    local_980 = local_492;
    if ((int)local_492 < 0) {
      local_982 = -local_494;
      local_980 = -((local_492 & 0x7fff) + (uint)(local_494 != 0));
    }
    local_97e = local_490;
    local_97c = local_48e;
    if ((int)local_48e < 0) {
      local_97e = -local_490;
      local_97c = -((local_48e & 0x7fff) + (uint)(local_490 != 0));
    }
    local_98c = local_48c;
    local_98a = local_48a;
    if ((int)local_48a < 0) {
      local_98c = -local_48c;
      local_98a = -((local_48a & 0x7fff) + (uint)(local_48c != 0));
    }
    if ((((((local_484 & 0x60) == 0) && ((local_484 & 0x80) == 0)) &&
         (((int)local_996 < (int)local_96e ||
          (((((int)local_996 <= (int)local_96e && (local_998 < local_970)) ||
            ((int)local_996 < (int)local_97c)) ||
           (((int)local_996 <= (int)local_97c && (local_998 < local_97e)))))))) &&
        ((((int)local_96e < (int)local_a14 ||
          (((int)local_96e <= (int)local_a14 && (local_970 < local_a16)))) ||
         (((int)local_97c < (int)local_a14 ||
          (((int)local_97c <= (int)local_a14 && (local_97e < local_a16)))))))) &&
       ((((int)local_9a2 < (int)local_980 ||
         (((((int)local_9a2 <= (int)local_980 && (local_9a4 < local_982)) ||
           ((int)local_9a2 < (int)local_98a)) ||
          (((int)local_9a2 <= (int)local_98a && (local_9a4 < local_98c)))))) &&
        (((((int)local_980 < (int)local_a1c ||
           (((int)local_980 <= (int)local_a1c && (local_982 < local_a1e)))) ||
          ((int)local_98a < (int)local_a1c)) ||
         (((int)local_98a <= (int)local_a1c && (local_98c < local_a1e)))))))) {
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      local_12 = 0xeb2c;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      local_12 = 0xeb35;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      local_12 = 0xeb3a;
      func_0x00029d78();
      local_18 = 0x22b2;
      local_1a = 0xeb44;
      func_0x000299d1();
      local_18 = 0x22b2;
      local_1a = 0xeb49;
      local_9ae = func_0x00008745();
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      local_12 = 0xeb68;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      local_12 = 0xeb71;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      local_12 = 0xeb76;
      func_0x00029d78();
      local_18 = 0x22b2;
      local_1a = 0xeb80;
      func_0x000299d1();
      local_18 = 0x22b2;
      uVar18 = 0x7a6;
      local_1a = 0xeb85;
      local_a18 = func_0x00008745();
      if ((local_9ae < 1) || (local_a18 < 1)) {
        if ((local_9ae < 0) && (local_a18 < 0)) {
          local_94a = local_a56;
          local_948 = local_a54;
          local_946 = local_a6e;
          local_944 = local_a6c;
          local_942 = local_16;
          local_940 = local_14;
          local_93e = local_4a0;
          local_93c = local_49e;
          puVar11 = &uStack_1c;
          puVar12 = &local_498;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar3 = puVar11;
            puVar11 = puVar11 + 1;
            puVar23 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar23;
          }
          puVar11 = &uStack_32;
          puVar12 = &local_94a;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar3 = puVar11;
            puVar11 = puVar11 + 1;
            puVar23 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar23;
          }
          uStack_34 = 0x7a6;
          uStack_36 = 0xec12;
          puVar11 = &uStack_32;
          iVar13 = func_0x000084eb();
          if (iVar13 < 1) {
            local_94a = local_a6a;
            local_948 = local_a68;
            local_946 = local_1a;
            local_944 = local_18;
            local_942 = local_49c;
            local_940 = local_49a;
            local_93e = local_90c;
            local_93c = local_90a;
            puVar17 = &uStack_1c;
            puVar12 = &local_498;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar17;
              puVar17 = puVar17 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            puVar12 = &local_94a;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            uStack_34 = 0x7a6;
            uVar18 = 0x7a6;
            uStack_36 = 0xec7a;
            iVar13 = func_0x000084eb();
            if (iVar13 < 1) goto LAB_3ab8_3e2f;
          }
        }
        uVar18 = 0x7a6;
        *(byte *)((uint *)local_932 + 10) = (byte)((uint *)local_932)[10] | 2;
      }
      else {
        ((uint *)local_932)[10] = ((uint *)local_932)[10] | 0x102;
      }
    }
LAB_3ab8_3e2f:
    if ((((uint *)local_932)[10] & 2) != 0) {
      uVar18 = 0x885;
      puStack_c = (uint *)0xe9c3;
      iVar13 = func_0x00008854();
      if (iVar13 != 0) {
        ((uint *)local_932)[10] = ((uint *)local_932)[10] & 0xfefd;
      }
    }
  }
  bVar21 = 0xfffe < local_9ac;
  local_9ac = local_9ac + 1;
  local_9aa = local_9aa + (uint)bVar21;
  goto LAB_3ab8_3e5c;
LAB_3ab8_468b:
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  local_12 = 0xf223;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  local_12 = 0xf22c;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  local_12 = 0xf231;
  func_0x00029d78();
  local_18 = 0x22b2;
  local_1a = 0xf23b;
  func_0x000299d1();
  local_18 = 1;
  local_1a = 0x22b2;
  uStack_1c = 0xf244;
  puVar12 = (uint *)FUN_1def_05d1();
  uVar15 = *puVar12;
  uVar5 = puVar12[1];
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  local_12 = 0xf26e;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  local_12 = 0xf277;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  local_12 = 0xf27c;
  func_0x00029d78();
  local_18 = 0x22b2;
  local_1a = 0xf286;
  func_0x000299d1();
  local_18 = 1;
  local_1a = 0x22b2;
  uStack_1c = 0xf28f;
  FUN_1def_05d1();
  uVar20 = (undefined1 *)0xffed < &local_18;
  uVar22 = &stack0x0000 == (undefined1 *)0x6;
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)uVar20 && !(bool)uVar22) {
    local_994 = uVar15;
    local_992 = uVar5;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar20) {
    puStack_c = (uint *)*(undefined2 *)0x99ee;
    puStack_e = (uint *)*(undefined2 *)0x99ec;
    piStack_10 = (int *)0x22b2;
    local_12 = 0xf31f;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0xf324;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0xf32e;
    func_0x000299d1();
    local_18 = 0;
    local_1a = 0x22b2;
    uStack_1c = 0xf336;
    puVar12 = (uint *)FUN_1def_05d1();
    local_498 = *puVar12;
    local_496 = puVar12[1];
    puStack_c = (uint *)*(undefined2 *)0x99ee;
    puStack_e = (uint *)*(int *)0x99ec;
    piStack_10 = (int *)0x1bb4;
    local_12 = 0xf361;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0xf366;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0xf370;
    func_0x000299d1();
    local_18 = 0;
    local_1a = 0x22b2;
    uStack_1c = 0xf378;
    puVar12 = (uint *)func_0x0001e558();
    local_494 = *puVar12;
    local_492 = puVar12[1];
  }
  uVar20 = (bool)uVar20 && (undefined1 *)0xffed < &local_18;
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar20) {
    puStack_c = (uint *)*(undefined2 *)0x99ee;
    puStack_e = (uint *)*(undefined2 *)0x99ec;
    piStack_10 = (int *)0x22b2;
    local_12 = 0xf3bf;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0xf3c4;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0xf3ce;
    func_0x000299d1();
    local_18 = 0;
    local_1a = 0x22b2;
    uStack_1c = 0xf3d6;
    puVar12 = (uint *)FUN_1def_05d1();
    local_490 = *puVar12;
    local_48e = puVar12[1];
    puStack_c = (uint *)*(undefined2 *)0x99ee;
    puStack_e = (uint *)*(int *)0x99ec;
    piStack_10 = (int *)0x1bb4;
    local_12 = 0xf401;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0xf406;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0xf410;
    func_0x000299d1();
    local_18 = 0;
    local_1a = 0x22b2;
    uStack_1c = 0xf418;
    puVar12 = (uint *)func_0x0001e558();
    local_48c = *puVar12;
    local_48a = puVar12[1];
  }
  for (local_a50 = local_a1a; local_a50 < local_916; local_a50 = local_a50 + 1) {
    puVar12 = auStack_908 + local_a50 * 0xb;
    puVar11 = local_8f2 + local_a50 * 0xb;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar3 = puVar12;
      puVar12 = puVar12 + 1;
      puVar23 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar3 = *puVar23;
    }
  }
  local_918 = local_918 + -1;
  local_916 = local_916 + -1;
  puVar12 = auStack_908 + local_a28 * 0xb;
  puVar11 = &local_498;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    puVar23 = puVar11;
    puVar11 = puVar11 + 1;
    *puVar3 = *puVar23;
  }
  goto LAB_3ab8_48fa;
LAB_3ab8_4114:
  local_a26 = 0;
  uVar18 = 0x885;
  puStack_c = (uint *)0xeca0;
  func_0x0000daa6();
  local_9aa = 0;
  for (local_9ac = 1;
      (local_9aa <= *(int *)0x14a && ((local_9aa < *(int *)0x14a || (local_9ac <= *(uint *)0x148))))
      ; local_9ac = local_9ac + 1) {
    puStack_e = (uint *)0xed03;
    puStack_c = (uint *)uVar18;
    uVar24 = func_0x0000013f();
    if ((*(byte *)((int)uVar24 + 0x14) & 2) != 0) {
      if (*(int *)0x3a64 != 0) {
        puStack_c = (uint *)0x0;
        puStack_e = (uint *)0xed24;
        uVar24 = func_0x0000013f();
        if (*(char *)((int)uVar24 + 0x10) != '\x01') goto LAB_3ab8_415c;
      }
      local_a26 = local_a26 + 1;
      if (0x32 < local_a26) {
        *(undefined2 *)0xc22 = 1;
        puStack_c = (uint *)0x0;
        puStack_e = (uint *)0xed52;
        FUN_1000_0599();
        puStack_c = (uint *)0xdef;
        puStack_e = (uint *)0xed61;
        func_0x00012276();
        goto LAB_3ab8_4618;
      }
      puStack_c = (uint *)0x0;
      puStack_e = (uint *)0xecbc;
      puVar23 = (uint *)func_0x0000013f();
      puVar12 = (uint *)puVar23;
      puVar11 = auStack_482 + local_a26 * 0xb;
      for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
        puVar4 = puVar11;
        puVar11 = puVar11 + 1;
        puVar3 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar4 = *puVar3;
      }
    }
LAB_3ab8_415c:
    uVar18 = 0;
    local_9aa = local_9aa + (uint)(0xfffe < local_9ac);
  }
  if (local_a26 != 0) {
    local_9ac = 1;
    local_9aa = 0;
    uVar18 = 0x885;
    puStack_c = (uint *)0xed84;
    func_0x0000daa6();
    local_97a = 0;
    local_916 = 0;
    while ((local_9aa <= *(int *)0x14a &&
           ((local_9aa < *(int *)0x14a || (local_9ac <= *(uint *)0x148))))) {
      puStack_e = (uint *)0xedac;
      puStack_c = (uint *)uVar18;
      uVar24 = func_0x0000013f();
      if ((*(byte *)((int)uVar24 + 0x14) & 2) == 0) {
LAB_3ab8_4239:
        uVar18 = 0;
        bVar21 = 0xfffe < local_9ac;
        local_9ac = local_9ac + 1;
        local_9aa = local_9aa + (uint)bVar21;
      }
      else {
        puStack_c = (uint *)0x0;
        puStack_e = (uint *)0xedd2;
        uVar24 = func_0x0000013f();
        if ((*(byte *)((int)uVar24 + 0x15) & 0x80) != 0) goto LAB_3ab8_4239;
        if (*(int *)0x3a64 != 0) {
          puStack_c = (uint *)0x0;
          puStack_e = (uint *)0xedf3;
          uVar24 = func_0x0000013f();
          if (*(char *)((int)uVar24 + 0x10) != '\x01') goto LAB_3ab8_4239;
        }
        puStack_c = (uint *)0x0;
        uVar18 = 0x11f2;
        puStack_e = (uint *)0xee0d;
        func_0x00018779();
        local_97a = local_97a + 1;
        local_916 = local_916 + 1;
      }
    }
    uVar18 = 0x885;
    puStack_c = (uint *)0xee22;
    func_0x0000daa6();
    local_9a0 = 0;
    if (local_99e == 2) {
      for (local_a28 = 1; local_a28 <= local_a26; local_a28 = local_a28 + 1) {
        puVar11 = &local_498;
        puVar12 = auStack_482 + local_a28 * 0xb;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar3 = puVar11;
          puVar11 = puVar11 + 1;
          puVar23 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar3 = *puVar23;
        }
        if ((local_483 & 0x81) == 0) {
          puVar11 = &local_96c;
          puVar12 = &local_498;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar3 = puVar11;
            puVar11 = puVar11 + 1;
            puVar23 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar23;
          }
          local_9ae = 0;
          local_a18 = 0;
          for (local_a46 = 0; local_a46 < 4; local_a46 = local_a46 + 1) {
            local_a52 = local_a46 + 1;
            if (3 < local_a52) {
              local_a52 = 0;
            }
            iVar13 = local_a46 * 4;
            local_92e = *(uint *)(iVar13 + 0xbc4);
            local_92c = *(undefined2 *)(iVar13 + 0xbc6);
            local_92a = *(undefined2 *)(iVar13 + 0xbd4);
            local_928 = *(undefined2 *)(iVar13 + 0xbd6);
            iVar13 = local_a52 * 4;
            local_926 = *(uint *)(iVar13 + 0xbc4);
            local_924 = *(undefined2 *)(iVar13 + 0xbc6);
            local_922 = *(undefined2 *)(iVar13 + 0xbd4);
            local_920 = *(undefined2 *)(iVar13 + 0xbd6);
            puVar11 = &uStack_1c;
            puVar12 = &local_96c;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            puVar11 = &uStack_32;
            puVar12 = &local_92e;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            uVar19 = 0x7a6;
            uStack_36 = 0xeef7;
            uStack_34 = uVar18;
            iVar13 = func_0x000084eb();
            if (0 < iVar13) {
              puVar11 = &uStack_20;
              puVar12 = &local_96c;
              for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                puVar3 = puVar11;
                puVar11 = puVar11 + 1;
                puVar23 = puVar12;
                puVar12 = puVar12 + 1;
                *puVar3 = *puVar23;
              }
              puVar11 = &uStack_36;
              puVar12 = &local_92e;
              for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                puVar3 = puVar11;
                puVar11 = puVar11 + 1;
                puVar23 = puVar12;
                puVar12 = puVar12 + 1;
                *puVar3 = *puVar23;
              }
              iStack_38 = 0x7a6;
              uVar19 = 0x1bb4;
              uStack_3a = 0xef2b;
              iVar13 = FUN_1def_1921();
              uVar20 = 0;
              if (iVar13 != 0) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029c9d();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029c9d();
                FUN_28b3_1163();
                uVar19 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar20) {
                  local_96c = local_99c;
                  local_96a = local_99a;
                  local_968 = local_9a8;
                  local_966 = local_9a6;
                  local_9ae = 1;
                }
                else {
                  local_964 = local_99c;
                  local_962 = local_99a;
                  local_960 = local_9a8;
                  local_95e = local_9a6;
                  local_a18 = 1;
                }
              }
            }
            uVar18 = uVar19;
          }
          if (local_9ae != 0) {
            puVar12 = &local_92e;
            puVar11 = &local_498;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar12;
              puVar12 = puVar12 + 1;
              puVar23 = puVar11;
              puVar11 = puVar11 + 1;
              *puVar3 = *puVar23;
            }
            local_926 = local_96c;
            local_924 = local_96a;
            local_922 = local_968;
            local_920 = local_966;
            puVar11 = &uStack_1c;
            puVar12 = &local_92e;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            uVar18 = 0x11f2;
            uStack_20 = 0xf011;
            iVar13 = FUN_17a6_0cba();
            if (0 < iVar13) {
              local_9a0 = local_9a0 + 1;
            }
          }
          if (local_a18 != 0) {
            puVar12 = &local_92e;
            puVar11 = &local_498;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar12;
              puVar12 = puVar12 + 1;
              puVar23 = puVar11;
              puVar11 = puVar11 + 1;
              *puVar3 = *puVar23;
            }
            local_92e = local_964;
            local_92c = local_962;
            local_92a = local_960;
            local_928 = local_95e;
            puVar11 = &uStack_1c;
            puVar12 = &local_92e;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            uVar18 = 0x11f2;
            uStack_20 = 0xf065;
            iVar13 = FUN_17a6_0cba();
            if (0 < iVar13) {
              local_9a0 = local_9a0 + 1;
            }
          }
        }
      }
      puStack_c = (uint *)0xf0c4;
      func_0x0000b1d8();
    }
    else {
      local_916 = 0;
      for (local_a1a = 1; (int)local_a1a <= local_a26; local_a1a = local_a1a + 1) {
        puVar11 = &local_498;
        puVar12 = auStack_482 + local_a1a * 0xb;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar3 = puVar11;
          puVar11 = puVar11 + 1;
          puVar23 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar3 = *puVar23;
        }
        if (((local_484 & 2) != 0) && ((local_483 & 0x80) == 0)) {
          if (local_916 == 0) {
            local_a24 = (uint)local_486;
            local_934 = (uint)local_487;
            local_912 = (uint)local_488;
          }
          if ((local_916 < 1) ||
             (((local_486 == local_a24 && (local_487 == local_934)) && (local_488 == local_912)))) {
            local_484 = local_484 & 0xfd;
            puVar12 = auStack_482 + local_a1a * 0xb;
            puVar11 = &local_498;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar12;
              puVar12 = puVar12 + 1;
              puVar23 = puVar11;
              puVar11 = puVar11 + 1;
              *puVar3 = *puVar23;
            }
            local_916 = local_916 + 1;
            puVar11 = auStack_908 + local_916 * 0xb;
            puVar12 = &local_498;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
          }
        }
      }
      if (local_916 != 0) {
        local_918 = local_916;
        for (local_a1a = 1; (int)local_a1a <= local_a26; local_a1a = local_a1a + 1) {
          puVar11 = &local_498;
          puVar12 = auStack_482 + local_a1a * 0xb;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar3 = puVar11;
            puVar11 = puVar11 + 1;
            puVar23 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar23;
          }
          if ((local_483 & 0x80) != 0) {
            local_916 = local_916 + 1;
            puVar12 = auStack_908 + local_916 * 0xb;
            puVar11 = &local_498;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar12;
              puVar12 = puVar12 + 1;
              puVar23 = puVar11;
              puVar11 = puVar11 + 1;
              *puVar3 = *puVar23;
            }
          }
        }
        local_a28 = 1;
LAB_3ab8_4aec:
        if (local_a28 <= local_918) {
LAB_3ab8_48fa:
          puVar11 = &local_498;
          puVar12 = auStack_908 + local_a28 * 0xb;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar3 = puVar11;
            puVar11 = puVar11 + 1;
            puVar23 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar23;
          }
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf4aa;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf4b3;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf4b8;
          func_0x00029d78();
          local_18 = 0x22b2;
          local_1a = 0xf4c2;
          func_0x000299d1();
          local_18 = 0x22b2;
          local_1a = 0xf4cb;
          func_0x000297e6();
          local_18 = 0x22b2;
          local_1a = 0xf4d0;
          func_0x00029d78();
          uStack_20 = 0x22b2;
          func_0x000299d1();
          uStack_20 = 0x22b2;
          func_0x000297e6();
          uStack_20 = 0x22b2;
          func_0x00029d78();
          iStack_28 = 0x22b2;
          iStack_2a = -0xb0e;
          func_0x000299d1();
          iStack_28 = 0x22b2;
          iStack_2a = -0xb09;
          FUN_1def_043a();
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf521;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf52a;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf52f;
          func_0x00029d78();
          local_18 = 0x22b2;
          local_1a = 0xf539;
          func_0x000299d1();
          local_18 = 1;
          local_1a = 0x22b2;
          uVar18 = 0x1bb4;
          uStack_1c = 0xf542;
          FUN_1def_05d1();
          local_a1a = local_a28;
          do {
            local_a1a = local_a1a + 1;
            if (local_918 < (int)local_a1a) {
              local_a28 = local_a28 + 1;
              goto LAB_3ab8_4aec;
            }
            puVar11 = &local_94a;
            puVar12 = auStack_908 + local_a1a * 0xb;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            local_12 = 0xf590;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            local_12 = 0xf599;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            local_12 = 0xf59e;
            func_0x00029d78();
            local_18 = 0x22b2;
            local_1a = 0xf5a8;
            func_0x000299d1();
            local_18 = 1;
            local_1a = 0x22b2;
            uStack_1c = 0xf5b1;
            func_0x0001e558();
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            local_12 = 0xf5db;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            local_12 = 0xf5e4;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            local_12 = 0xf5e9;
            func_0x00029d78();
            local_18 = 0x22b2;
            local_1a = 0xf5f3;
            func_0x000299d1();
            local_18 = 1;
            local_1a = 0x22b2;
            uStack_1c = 0xf5fc;
            func_0x0001e558();
            uVar20 = (undefined1 *)0xffed < &local_18;
            uVar22 = &stack0x0000 == (undefined1 *)0x6;
            func_0x00029834();
            func_0x000297e6();
            func_0x00029ae7();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar20 || (bool)uVar22) {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029ae7();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar20 || (bool)uVar22) goto LAB_3ab8_468b;
            }
            uVar18 = 0x22b2;
          } while( true );
        }
        for (local_a28 = 1; local_a28 <= local_918; local_a28 = local_a28 + 1) {
          local_a7a = 0;
          local_a78[0] = 0;
          puVar11 = &local_498;
          puVar12 = auStack_908 + local_a28 * 0xb;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar3 = puVar11;
            puVar11 = puVar11 + 1;
            puVar23 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar23;
          }
          local_483 = local_483 & 0xf9;
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf6c1;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf6ca;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf6cf;
          func_0x00029d78();
          local_18 = 0x22b2;
          local_1a = 0xf6d9;
          func_0x000299d1();
          local_18 = 0x22b2;
          local_1a = 0xf6de;
          iVar13 = func_0x00008745();
          if (0 < iVar13) {
            local_a7a = 1;
          }
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf703;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf70c;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          local_12 = 0xf711;
          func_0x00029d78();
          local_18 = 0x22b2;
          local_1a = 0xf71b;
          func_0x000299d1();
          local_18 = 0x22b2;
          uVar18 = 0x7a6;
          local_1a = 0xf720;
          iVar13 = func_0x00008745();
          uVar8 = local_492;
          uVar7 = local_494;
          uVar5 = local_496;
          uVar15 = local_498;
          if (0 < iVar13) {
            local_a78[0] = 1;
          }
          if ((local_a7a != 0) && (local_a78[0] == 0)) {
            local_498 = local_490;
            local_496 = local_48e;
            local_490 = uVar15;
            local_48e = uVar5;
            local_994 = local_494;
            local_992 = local_492;
            local_494 = local_48c;
            local_492 = local_48a;
            local_48c = uVar7;
            local_48a = uVar8;
            local_483 = local_483 | 2;
          }
          if ((local_a7a == 0) && (local_a78[0] != 0)) {
            local_483 = local_483 | 2;
          }
          if ((local_a7a == 0) && (local_a78[0] == 0)) {
            local_483 = local_483 | 4;
          }
          puVar12 = auStack_908 + local_a28 * 0xb;
          puVar11 = &local_498;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar3 = puVar12;
            puVar12 = puVar12 + 1;
            puVar23 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar3 = *puVar23;
          }
        }
        local_a28 = 1;
        do {
          if (local_918 < local_a28) {
            local_a28 = 1;
            while( true ) {
              puStack_c = (uint *)uStack_bc;
              puStack_e = (uint *)uStack_be;
              local_12 = 0x119;
              piStack_10 = (int *)uVar18;
              FUN_32b2_75fe();
              puStack_c = (uint *)0x123;
              FUN_32b2_6d14();
              puStack_c = (uint *)0x12b;
              FUN_32b2_704d();
              puStack_c = (uint *)0x133;
              FUN_32b2_7095();
              puStack_c = (uint *)0x13b;
              FUN_32b2_6eb1();
              puStack_c = (uint *)uStack_ba;
              puStack_e = (uint *)uStack_bc;
              piStack_10 = (int *)uStack_be;
              local_12 = 0x32b2;
              local_14 = 0x150;
              FUN_32b2_75ec();
              uVar20 = &stack0x0000 == (undefined1 *)0xa;
              puStack_c = (uint *)0x32b2;
              puStack_e = (uint *)0x15a;
              FUN_32b2_6d14();
              puStack_c = (uint *)0x32b2;
              puStack_e = (uint *)0x162;
              FUN_32b2_704d();
              puStack_c = (uint *)0x32b2;
              puStack_e = (uint *)0x16a;
              FUN_32b2_7095();
              puStack_c = (uint *)0x32b2;
              puStack_e = (uint *)0x173;
              FUN_32b2_6eb1();
              puStack_c = (uint *)0x32b2;
              puStack_e = (uint *)0x17b;
              FUN_32b2_6cc6();
              puStack_c = (uint *)0x32b2;
              puStack_e = (uint *)0x183;
              FUN_32b2_6cc6();
              puStack_c = (uint *)0x32b2;
              puStack_e = (uint *)0x188;
              FUN_32b2_7191();
              if ((bool)uVar20) {
                puStack_c = (uint *)0x32b2;
                puStack_e = (uint *)0x192;
                FUN_32b2_6cc6();
                puStack_c = (uint *)0x32b2;
                puStack_e = (uint *)0x19a;
                FUN_32b2_6cc6();
                puStack_c = (uint *)0x32b2;
                puStack_e = (uint *)0x19f;
                FUN_32b2_7191();
                if ((bool)uVar20) {
                  return 0;
                }
              }
              puStack_c = &uStack_aa;
              puStack_e = (uint *)&stack0xffe2;
              piStack_10 = (int *)uStack_7e;
              local_12 = uStack_80;
              local_14 = uStack_82;
              local_16 = uStack_84;
              local_18 = uStack_5a;
              local_1a = uStack_5c;
              uStack_1c = uStack_5e;
              uStack_20 = 0x32b2;
              FUN_32b2_6cc6();
              uStack_20 = 0x32b2;
              FUN_32b2_7258();
              iStack_28 = 0x32b2;
              iStack_2a = 0x1df;
              FUN_32b2_6eb1();
              iStack_28 = 0x32b2;
              iStack_2a = 0x1e7;
              FUN_32b2_6cc6();
              iStack_28 = 0x32b2;
              iStack_2a = 0x1ec;
              FUN_32b2_7258();
              uStack_30 = 0x32b2;
              uStack_32 = 0x1f6;
              FUN_32b2_6eb1();
              uStack_30 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
              uStack_32 = 0x1fa;
              iVar13 = func_0x0003fb3d();
              if (iVar13 == 0) break;
              puStack_c = (uint *)0x32b2;
              puStack_e = (uint *)0x209;
              FUN_32b2_6cc6();
              puStack_c = (uint *)0x32b2;
              puStack_e = (uint *)0x20e;
              FUN_32b2_7258();
              puStack_c = (uint *)0x32b2;
              puStack_e = (uint *)0x216;
              FUN_32b2_6e99();
              puStack_c = (uint *)0x32b2;
              puStack_e = (uint *)0x21e;
              FUN_32b2_6ef9();
              puStack_c = &uStack_b6;
              puStack_e = (uint *)auStack_a6;
              piStack_10 = (int *)0x32b2;
              local_12 = 0x231;
              FUN_32b2_6cc6();
              piStack_10 = (int *)0x32b2;
              local_12 = 0x236;
              FUN_32b2_7258();
              local_18 = 0x32b2;
              local_1a = 0x240;
              FUN_32b2_6eb1();
              local_18 = 0x32b2;
              local_1a = 0x248;
              FUN_32b2_6cc6();
              local_18 = 0x32b2;
              local_1a = 0x24d;
              FUN_32b2_7258();
              uStack_20 = 0x32b2;
              FUN_32b2_6eb1();
              uStack_20 = 0x32b2;
              FUN_32b2_6d14();
              iStack_28 = 0x32b2;
              iStack_2a = 0x269;
              FUN_32b2_6eb1();
              iStack_28 = 0x32b2;
              iStack_2a = 0x271;
              FUN_32b2_6cc6();
              iStack_28 = 0x32b2;
              iStack_2a = 0x276;
              FUN_32b2_7258();
              iStack_28 = 0x32b2;
              iStack_2a = 0x27e;
              FUN_32b2_6e99();
              uStack_30 = 0x32b2;
              uStack_32 = 0x288;
              FUN_32b2_6eb1();
              uStack_30 = 0x32b2;
              uStack_32 = 0x290;
              FUN_32b2_6cc6();
              uStack_30 = 0x32b2;
              uStack_32 = 0x295;
              FUN_32b2_7258();
              iStack_38 = 0x32b2;
              uStack_3a = 0x29f;
              FUN_32b2_6eb1();
              iStack_38 = 0x32b2;
              uStack_3a = 0x2a7;
              FUN_32b2_6cc6();
              iStack_38 = 0x32b2;
              uStack_3a = 0x2ac;
              FUN_32b2_7258();
              uStack_40 = 0x32b2;
              uStack_42 = 0x2b6;
              FUN_32b2_6eb1();
              uStack_40 = 1;
              uStack_42 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
              puStack_44 = (uint *)0x2be;
              func_0x0003fc09();
              puStack_c = &uStack_e6;
              puStack_e = &uStack_d2;
              piStack_10 = (int *)0x32b2;
              local_12 = 0x2d4;
              FUN_32b2_6cc6();
              piStack_10 = (int *)0x32b2;
              local_12 = 0x2d9;
              FUN_32b2_7258();
              local_18 = 0x32b2;
              local_1a = 0x2e3;
              FUN_32b2_6eb1();
              local_18 = 0x32b2;
              local_1a = 0x2eb;
              FUN_32b2_6cc6();
              local_18 = 0x32b2;
              local_1a = 0x2f0;
              FUN_32b2_7258();
              uStack_20 = 0x32b2;
              FUN_32b2_6eb1();
              uStack_20 = 0x32b2;
              FUN_32b2_6d14();
              iStack_28 = 0x32b2;
              iStack_2a = 0x30c;
              FUN_32b2_6eb1();
              iStack_28 = 0x32b2;
              iStack_2a = 0x314;
              FUN_32b2_6d14();
              uStack_30 = 0x32b2;
              uStack_32 = 0x31e;
              FUN_32b2_6eb1();
              uStack_30 = 0x32b2;
              uStack_32 = 0x326;
              FUN_32b2_6cc6();
              uStack_30 = 0x32b2;
              uStack_32 = 0x32b;
              FUN_32b2_7258();
              iStack_38 = 0x32b2;
              uStack_3a = 0x335;
              FUN_32b2_6eb1();
              iStack_38 = 0x32b2;
              uStack_3a = 0x33d;
              FUN_32b2_6cc6();
              iStack_38 = 0x32b2;
              uStack_3a = 0x342;
              FUN_32b2_7258();
              uStack_40 = 0x32b2;
              uStack_42 = 0x34c;
              FUN_32b2_6eb1();
              uStack_40 = 1;
              uStack_42 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
              puStack_44 = (uint *)0x354;
              func_0x0003fc09();
              uVar20 = (undefined1 *)0xffc9 < &uStack_3c;
              uVar22 = &stack0x0000 == (undefined1 *)0x6;
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_7258();
              FUN_32b2_6e99();
              FUN_32b2_6ef9();
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_7258();
              FUN_32b2_6e99();
              FUN_32b2_6ef9();
              FUN_32b2_6d14();
              FUN_32b2_6fc7();
              FUN_32b2_6d14();
              FUN_32b2_6fc7();
              FUN_32b2_710c();
              FUN_32b2_7191();
              if (!(bool)uVar20 && !(bool)uVar22) {
                FUN_32b2_6d14();
                FUN_32b2_6d14();
                FUN_32b2_7191();
                if (!(bool)uVar22) {
                  FUN_32b2_6d14();
                  FUN_32b2_7124();
                  FUN_32b2_6e99();
                  FUN_32b2_704d();
                  FUN_32b2_7035();
                  FUN_32b2_6e99();
                  FUN_32b2_6eb1();
                  FUN_32b2_6d14();
                  FUN_32b2_710c();
                  FUN_32b2_710c();
                  FUN_32b2_710c();
                  FUN_32b2_6d14();
                  FUN_32b2_710c();
                  FUN_32b2_6e99();
                  FUN_32b2_718c();
                  FUN_32b2_6e99();
                  FUN_32b2_6eb1();
                  FUN_32b2_6d14();
                  FUN_32b2_710c();
                  FUN_32b2_710c();
                  FUN_32b2_710c();
                  FUN_32b2_710c();
                  FUN_32b2_6e99();
                  FUN_32b2_6eb1();
                  FUN_32b2_6d14();
                  FUN_32b2_710c();
                  FUN_32b2_70dc();
                  FUN_32b2_710c();
                  FUN_32b2_710c();
                  FUN_32b2_6e99();
                  FUN_32b2_6eb1();
                  FUN_32b2_6d14();
                  FUN_32b2_710c();
                  FUN_32b2_710c();
                  FUN_32b2_6d14();
                  FUN_32b2_710c();
                  FUN_32b2_718c();
                  FUN_32b2_6eb1();
                  FUN_32b2_6d14();
                  FUN_32b2_6fd6();
                  FUN_32b2_6d14();
                  FUN_32b2_710c();
                  FUN_32b2_7182();
                  FUN_32b2_6e99();
                  FUN_32b2_710c();
                  FUN_32b2_7154();
                  FUN_32b2_6e99();
                  FUN_32b2_6eb1();
                  FUN_32b2_6d14();
                  FUN_32b2_6eb1();
                  puStack_c = (uint *)0x32b2;
                  puStack_e = (uint *)0x5db;
                  FUN_32b2_6cc6();
                  puStack_c = (uint *)0x32b2;
                  puStack_e = (uint *)0x5e0;
                  FUN_32b2_7258();
                  local_14 = 0x32b2;
                  local_16 = 0x5ea;
                  FUN_32b2_6eb1();
                  local_14 = 0x32b2;
                  local_16 = 0x5f2;
                  FUN_32b2_6cc6();
                  local_14 = 0x32b2;
                  local_16 = 0x5f7;
                  FUN_32b2_7258();
                  uStack_1c = 0x32b2;
                  FUN_32b2_6eb1();
                  uStack_1c = uStack_66;
                  uStack_20 = uStack_6a;
                  uStack_24 = uStack_4a;
                  iStack_26 = iStack_4c;
                  iStack_28 = iStack_4e;
                  iStack_2a = iStack_50;
                  uStack_2e = 0x622;
                  FUN_32b2_6d14();
                  uStack_34 = 0x32b2;
                  uStack_36 = 0x62c;
                  FUN_32b2_6eb1();
                  uStack_34 = 0x32b2;
                  uStack_36 = 0x635;
                  FUN_32b2_6d14();
                  uStack_3c = 0x32b2;
                  uStack_3e = 0x63f;
                  FUN_32b2_6eb1();
                  uStack_3c = 0;
                  uStack_3e = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
                  uStack_40 = 0x646;
                  func_0x0003fc09();
                  iStack_88 = iStack_64;
                  iStack_86 = iStack_62;
                  iStack_a0 = iStack_8c;
                  iStack_9e = iStack_8a;
                  piVar16 = &iStack_2a;
                  puVar10 = (undefined2 *)&stack0x001a;
                  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
                    puVar2 = piVar16;
                    piVar16 = piVar16 + 1;
                    puVar1 = puVar10;
                    puVar10 = puVar10 + 1;
                    *puVar2 = *puVar1;
                  }
                  uStack_2e = 0x684;
                  iVar13 = FUN_3ab8_522f();
                  uVar20 = 0;
                  uVar22 = iVar13 == 0;
                  if (!(bool)uVar22) {
                    FUN_32b2_6d14();
                    FUN_32b2_6cc6();
                    FUN_32b2_701d();
                    FUN_32b2_6fc7();
                    FUN_32b2_7258();
                    FUN_32b2_7191();
                    if ((bool)uVar20 || (bool)uVar22) {
                      FUN_32b2_6d14();
                      FUN_32b2_6cc6();
                      FUN_32b2_701d();
                      FUN_32b2_6fc7();
                      FUN_32b2_7258();
                      FUN_32b2_7191();
                      if ((bool)uVar20 || (bool)uVar22) {
                        uStack_be = *(undefined2 *)0x93c0;
                        uStack_bc = *(undefined2 *)0x93c2;
                        uStack_ba = *(undefined2 *)0x93c4;
                        uStack_b8 = *(undefined2 *)0x93c6;
                      }
                    }
                  }
                  FUN_32b2_6d14();
                  FUN_32b2_6d14();
                  FUN_32b2_710c();
                  FUN_32b2_710c();
                  FUN_32b2_7154();
                  FUN_32b2_7191();
                  if (!(bool)uVar20) {
                    FUN_32b2_6d14();
                    FUN_32b2_6fc7();
                    FUN_32b2_6d14();
                    FUN_32b2_710c();
                    FUN_32b2_710c();
                    FUN_32b2_7191();
                    if (!(bool)uVar20) {
                      uStack_be = *(undefined2 *)0x93c0;
                      uStack_bc = *(undefined2 *)0x93c2;
                      uStack_ba = *(undefined2 *)0x93c4;
                      uStack_b8 = *(undefined2 *)0x93c6;
                    }
                    puStack_c = (uint *)uStack_bc;
                    puStack_e = (uint *)uStack_be;
                    piStack_10 = (int *)0x32b2;
                    local_12 = 0x774;
                    FUN_32b2_7592();
                    puStack_c = (uint *)0x77e;
                    FUN_32b2_6d14();
                    puStack_c = (uint *)0x786;
                    FUN_32b2_70dc();
                    puStack_c = (uint *)0x78e;
                    FUN_32b2_6d14();
                    puStack_c = (uint *)0x797;
                    FUN_32b2_710c();
                    puStack_c = (uint *)0x79c;
                    FUN_32b2_7182();
                    puStack_c = (uint *)0x7a5;
                    FUN_32b2_6e99();
                    puStack_c = (uint *)0x7ad;
                    FUN_32b2_710c();
                    puStack_c = (uint *)0x7b5;
                    FUN_32b2_7154();
                    puStack_c = (uint *)0x7be;
                    FUN_32b2_6e99();
                    puStack_c = (uint *)0x7c7;
                    FUN_32b2_6eb1();
                    puStack_c = (uint *)&iStack_64;
                    puStack_e = (uint *)0x32b2;
                    piStack_10 = (int *)0x7d9;
                    FUN_32b2_6cc6();
                    puStack_e = (uint *)0x32b2;
                    piStack_10 = (int *)0x7de;
                    FUN_32b2_7258();
                    local_16 = 0x32b2;
                    local_18 = 0x7e8;
                    FUN_32b2_6eb1();
                    local_16 = 0x32b2;
                    local_18 = 0x7f0;
                    FUN_32b2_6cc6();
                    local_16 = 0x32b2;
                    local_18 = 0x7f5;
                    FUN_32b2_7258();
                    uStack_20 = 0x7ff;
                    FUN_32b2_6eb1();
                    uStack_20 = uStack_68;
                    uStack_24 = uStack_6c;
                    iStack_26 = uStack_4a;
                    iStack_28 = iStack_4c;
                    iStack_2a = iStack_4e;
                    uStack_2e = 0x32b2;
                    uStack_30 = 0x820;
                    FUN_32b2_6d14();
                    uStack_36 = 0x32b2;
                    iStack_38 = 0x82a;
                    FUN_32b2_6eb1();
                    uStack_36 = 0x32b2;
                    iStack_38 = 0x833;
                    FUN_32b2_6d14();
                    uStack_3e = 0x32b2;
                    uStack_40 = 0x83d;
                    FUN_32b2_6eb1();
                    uStack_3e = 0;
                    uStack_40 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
                    uStack_42 = 0x844;
                    func_0x0003fc09();
                    uVar20 = (undefined1 *)0xffc9 < &uStack_3e;
                    uVar22 = &stack0x0000 == (undefined1 *)0x8;
                    puStack_c = (uint *)0x84f;
                    FUN_32b2_6cc6();
                    puStack_c = (uint *)0x857;
                    FUN_32b2_6cc6();
                    puStack_c = (uint *)0x85c;
                    FUN_32b2_7191();
                    if ((bool)uVar22) {
                      iStack_64 = param_1;
                      iStack_62 = param_2;
                    }
                    puStack_c = (uint *)0x872;
                    FUN_32b2_6cc6();
                    puStack_c = (uint *)0x87a;
                    FUN_32b2_6cc6();
                    puStack_c = (uint *)0x87f;
                    FUN_32b2_7191();
                    if ((bool)uVar22) {
                      iStack_8c = param_3;
                      iStack_8a = param_4;
                    }
                    *in_stack_0000003a = iStack_64;
                    in_stack_0000003a[1] = iStack_62;
                    *in_stack_0000003c = iStack_8c;
                    in_stack_0000003c[1] = iStack_8a;
                    *in_stack_0000003e = iStack_64;
                    in_stack_0000003e[1] = iStack_62;
                    *in_stack_00000040 = iStack_8c;
                    in_stack_00000040[1] = iStack_8a;
                    iStack_38 = iStack_38 + 1;
                    uVar22 = iStack_38 == 0;
                    puStack_c = (uint *)0x8d7;
                    FUN_32b2_6d14();
                    puStack_c = (uint *)0x8e0;
                    FUN_32b2_6d14();
                    puStack_c = (uint *)0x8e5;
                    FUN_32b2_7191();
                    if (!(bool)uVar20 && !(bool)uVar22) {
                      puStack_c = (uint *)uStack_ba;
                      puStack_e = (uint *)uStack_bc;
                      piStack_10 = (int *)uStack_be;
                      local_12 = 0x32b2;
                      local_14 = 0x8ff;
                      FUN_32b2_7592();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x909;
                      FUN_32b2_6d14();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x911;
                      FUN_32b2_7154();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x916;
                      FUN_32b2_6fd6();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x91e;
                      FUN_32b2_6d14();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x927;
                      FUN_32b2_710c();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x92c;
                      FUN_32b2_7182();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x935;
                      FUN_32b2_6e99();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x93d;
                      FUN_32b2_710c();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x945;
                      FUN_32b2_7154();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x94e;
                      FUN_32b2_6e99();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x957;
                      FUN_32b2_6eb1();
                      puStack_c = (uint *)&iStack_8c;
                      puStack_e = (uint *)&iStack_64;
                      piStack_10 = (int *)0x32b2;
                      local_12 = 0x969;
                      FUN_32b2_6cc6();
                      piStack_10 = (int *)0x32b2;
                      local_12 = 0x96e;
                      FUN_32b2_7258();
                      local_18 = 0x32b2;
                      local_1a = 0x978;
                      FUN_32b2_6eb1();
                      local_18 = 0x32b2;
                      local_1a = 0x980;
                      FUN_32b2_6cc6();
                      local_18 = 0x32b2;
                      local_1a = 0x985;
                      FUN_32b2_7258();
                      uStack_20 = 0x32b2;
                      FUN_32b2_6eb1();
                      uStack_20 = uStack_66;
                      uStack_24 = uStack_6a;
                      iStack_26 = uStack_6c;
                      iStack_28 = uStack_4a;
                      iStack_2a = iStack_4c;
                      uStack_2e = iStack_50;
                      uStack_30 = 0x32b2;
                      uStack_32 = 0x9b0;
                      FUN_32b2_6d14();
                      iStack_38 = 0x32b2;
                      uStack_3a = 0x9ba;
                      FUN_32b2_6eb1();
                      iStack_38 = 0x32b2;
                      uStack_3a = 0x9c3;
                      FUN_32b2_6d14();
                      uStack_40 = 0x32b2;
                      uStack_42 = 0x9cd;
                      FUN_32b2_6eb1();
                      uStack_40 = 0;
                      uStack_42 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
                      puStack_44 = (uint *)0x9d4;
                      func_0x0003fc09();
                      uVar20 = &stack0x0000 == (undefined1 *)0xa;
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x9df;
                      FUN_32b2_6cc6();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x9e7;
                      FUN_32b2_6cc6();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0x9ec;
                      FUN_32b2_7191();
                      if ((bool)uVar20) {
                        iStack_64 = param_1;
                        iStack_62 = param_2;
                      }
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0xa02;
                      FUN_32b2_6cc6();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0xa0a;
                      FUN_32b2_6cc6();
                      puStack_c = (uint *)0x32b2;
                      puStack_e = (uint *)0xa0f;
                      FUN_32b2_7191();
                      if ((bool)uVar20) {
                        iStack_8c = param_3;
                        iStack_8a = param_4;
                      }
                      *in_stack_0000003e = iStack_64;
                      in_stack_0000003e[1] = iStack_62;
                      *in_stack_00000040 = iStack_8c;
                      in_stack_00000040[1] = iStack_8a;
                      return iStack_38 + 1;
                    }
                    return iStack_38;
                  }
                }
                return 0;
              }
              FUN_32b2_6d14();
              puStack_c = (uint *)0x3ff;
              FUN_32b2_7154();
              uVar18 = 0x32b2;
              FUN_32b2_6eb1();
              uStack_48 = 0x405;
              puStack_44 = unaff_SI;
              uStack_42 = unaff_DI;
              unaff_SI = puStack_e;
              unaff_DI = puStack_c;
            }
            return 0;
          }
          puVar11 = &local_498;
          puVar12 = auStack_908 + local_a28 * 0xb;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar3 = puVar11;
            puVar11 = puVar11 + 1;
            puVar23 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar23;
          }
          if ((local_483 & 4) == 0) {
            func_0x000297e6();
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            local_12 = 0xface;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            local_12 = 0xfad7;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            local_12 = 0xfadc;
            func_0x00029d78();
            local_18 = 0x22b2;
            local_1a = 0xfae6;
            func_0x000299d1();
            local_18 = 0x22b2;
            local_1a = 0xfaef;
            func_0x000297e6();
            local_18 = 0x22b2;
            local_1a = 0xfaf4;
            func_0x00029d78();
            uStack_20 = 0x22b2;
            func_0x000299d1();
            uStack_20 = 0x22b2;
            func_0x000297e6();
            uStack_20 = 0x22b2;
            func_0x00029d78();
            iStack_28 = 0x22b2;
            iStack_2a = -0x4ea;
            func_0x000299d1();
            iStack_28 = 0x22b2;
            iStack_2a = -0x4e5;
            FUN_1def_043a();
            local_94a = local_94e;
            local_948 = local_94c;
            local_946 = local_974;
            local_944 = local_972;
            local_942 = local_94e;
            local_940 = local_94c;
            local_93e = local_990;
            local_93c = local_98e;
            puVar11 = &uStack_20;
            puVar12 = &local_94a;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            puVar11 = &uStack_36;
            puVar12 = &local_498;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            iStack_38 = 0x1bb4;
                    /* WARNING: Call to offcut address within same function */
            uStack_3a = 0xfbb8;
            puVar17 = &uStack_36;
            func_0x00030da0();
            local_94a = local_986;
            local_948 = local_984;
            local_946 = local_990;
            local_944 = local_98e;
            puVar11 = &uStack_20;
            puVar12 = &local_94a;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            puVar12 = &local_498;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar17;
              puVar17 = puVar17 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            iStack_38 = 0x1bb4;
                    /* WARNING: Call to offcut address within same function */
            uStack_3a = 0xfc07;
            puVar17 = &uStack_36;
            func_0x00030da0();
            local_942 = local_986;
            local_940 = local_984;
            local_93e = local_974;
            local_93c = local_972;
            puVar11 = &uStack_20;
            puVar12 = &local_94a;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            puVar12 = &local_498;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar17;
              puVar17 = puVar17 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            iStack_38 = 0x1bb4;
                    /* WARNING: Call to offcut address within same function */
            uStack_3a = 0xfc56;
            puVar17 = &uStack_36;
            func_0x00030da0();
            local_94a = local_94e;
            local_948 = local_94c;
            local_946 = local_974;
            local_944 = local_972;
            puVar11 = &uStack_20;
            puVar12 = &local_94a;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            puVar12 = &local_498;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar17;
              puVar17 = puVar17 + 1;
              puVar23 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar3 = *puVar23;
            }
            iStack_38 = 0x1bb4;
                    /* WARNING: Call to offcut address within same function */
            uStack_3a = 0xfca5;
            func_0x00030da0();
            uVar18 = 0x1bb4;
            for (local_a1a = 1; (int)local_a1a <= local_918; local_a1a = local_a1a + 1) {
              uVar19 = uVar18;
              if (local_a28 != local_a1a) {
                puVar11 = &local_94a;
                puVar12 = auStack_908 + local_a1a * 0xb;
                for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                  puVar3 = puVar11;
                  puVar11 = puVar11 + 1;
                  puVar23 = puVar12;
                  puVar12 = puVar12 + 1;
                  *puVar3 = *puVar23;
                }
                puVar11 = &uStack_20;
                puVar12 = &local_94a;
                for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                  puVar3 = puVar11;
                  puVar11 = puVar11 + 1;
                  puVar23 = puVar12;
                  puVar12 = puVar12 + 1;
                  *puVar3 = *puVar23;
                }
                puVar11 = &uStack_36;
                puVar12 = &local_498;
                for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                  puVar3 = puVar11;
                  puVar11 = puVar11 + 1;
                  puVar23 = puVar12;
                  puVar12 = puVar12 + 1;
                  *puVar3 = *puVar23;
                }
                uVar19 = 0x1bb4;
                uStack_3a = 0xf845;
                iStack_38 = uVar18;
                iVar13 = FUN_1def_1921();
                if (iVar13 != 0) {
                  func_0x000297e6();
                  func_0x000297e6();
                  func_0x00029d78();
                  piStack_10 = (int *)0x22b2;
                  local_12 = 0xf870;
                  func_0x000299d1();
                  piStack_10 = (int *)0x22b2;
                  local_12 = 0xf879;
                  func_0x000297e6();
                  piStack_10 = (int *)0x22b2;
                  local_12 = 0xf87e;
                  func_0x00029d78();
                  local_18 = 0x22b2;
                  local_1a = 0xf888;
                  func_0x000299d1();
                  local_18 = 1;
                  local_1a = 0x22b2;
                  uStack_1c = 0xf891;
                  FUN_1def_05d1();
                  uVar20 = (undefined1 *)0xffed < &local_18;
                  uVar22 = &stack0x0000 == (undefined1 *)0x6;
                  func_0x000297e6();
                  func_0x0002996b();
                  FUN_28b3_1181();
                  if (!(bool)uVar20 && !(bool)uVar22) {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar20) {
                      func_0x000297e6();
                      func_0x00029983();
                    }
                  }
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  uVar19 = 0x22b2;
                  if ((bool)uVar20) {
                    func_0x000297e6();
                    func_0x000297e6();
                    uVar19 = 0x22b2;
                    FUN_28b3_1181();
                  }
                }
              }
              uVar18 = uVar19;
            }
            uVar20 = 0;
            uVar22 = (local_483 & 2) == 0;
            if ((bool)uVar22) {
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029bfc();
              uVar18 = 0x22b2;
              FUN_28b3_1181();
              if (!(bool)uVar20 && !(bool)uVar22) {
                puStack_c = (uint *)*(undefined2 *)0x99ee;
                puStack_e = (uint *)*(undefined2 *)0x99ec;
                piStack_10 = (int *)0x22b2;
                local_12 = 0xf978;
                func_0x000297e6();
                local_18 = 0x22b2;
                local_1a = 0xf982;
                func_0x000299d1();
                local_18 = 0;
                local_1a = 0x22b2;
                uStack_1c = 0xf98a;
                puVar12 = (uint *)FUN_1def_05d1();
                local_498 = *puVar12;
                local_496 = puVar12[1];
                puStack_c = (uint *)*(undefined2 *)0x99ee;
                puStack_e = (uint *)*(undefined2 *)0x99ec;
                piStack_10 = (int *)0x1bb4;
                local_12 = 0xf9b5;
                func_0x000297e6();
                local_18 = 0x22b2;
                local_1a = 0xf9bf;
                func_0x000299d1();
                local_18 = 0;
                local_1a = 0x22b2;
                uVar18 = 0x1bb4;
                uStack_1c = 0xf9c7;
                puVar12 = (uint *)func_0x0001e558();
                local_494 = *puVar12;
                local_492 = puVar12[1];
                goto LAB_3ab8_4e74;
              }
            }
            else {
              func_0x00029834();
              func_0x000297e6();
              uVar18 = 0x22b2;
              FUN_28b3_1181();
              if (!(bool)uVar20 && !(bool)uVar22) {
LAB_3ab8_4e74:
                puStack_c = (uint *)*(undefined2 *)0x99ee;
                puStack_e = (uint *)*(undefined2 *)0x99ec;
                local_12 = 0xfa0d;
                piStack_10 = (int *)uVar18;
                func_0x000297e6();
                local_18 = 0x22b2;
                local_1a = 0xfa17;
                func_0x000299d1();
                local_18 = 0;
                local_1a = 0x22b2;
                uStack_1c = 0xfa1f;
                puVar12 = (uint *)FUN_1def_05d1();
                local_490 = *puVar12;
                local_48e = puVar12[1];
                puStack_c = (uint *)*(undefined2 *)0x99ee;
                puStack_e = (uint *)*(int *)0x99ec;
                piStack_10 = (int *)0x1bb4;
                local_12 = 0xfa4a;
                func_0x000297e6();
                local_18 = 0x22b2;
                local_1a = 0xfa54;
                func_0x000299d1();
                local_18 = 0;
                local_1a = 0x22b2;
                uVar18 = 0x1bb4;
                uStack_1c = 0xfa5c;
                puVar12 = (uint *)func_0x0001e558();
                local_48c = *puVar12;
                local_48a = puVar12[1];
              }
            }
            puVar12 = auStack_908 + local_a28 * 0xb;
            puVar11 = &local_498;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar3 = puVar12;
              puVar12 = puVar12 + 1;
              puVar23 = puVar11;
              puVar11 = puVar11 + 1;
              *puVar3 = *puVar23;
            }
          }
          local_a28 = local_a28 + 1;
        } while( true );
      }
    }
  }
LAB_3ab8_4618:
  uVar18 = 0x885;
  func_0x0000abfa();
  uVar19 = extraout_DX_01;
LAB_3ab8_461d:
  unaff_SI = puVar12;
  if (param_1 != 0) {
code_r0x00030d9b:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_2bb4_522f_1:
  out((char)*unaff_SI,uVar19);
  while( true ) {
    puStack_e = (uint *)0xd8a;
    puStack_c = (uint *)uVar18;
    FUN_32b2_6cc6();
    puStack_c = (uint *)0x32b2;
    puStack_e = (uint *)0xd8f;
    FUN_32b2_7258();
    local_14 = 0x32b2;
    local_16 = 0xd99;
    FUN_32b2_6eb1();
    local_14 = 0x32b2;
    local_16 = 0xda1;
    FUN_32b2_6cc6();
    local_14 = 0x32b2;
    local_16 = 0xda6;
    FUN_32b2_7258();
    uStack_1c = 0x32b2;
    FUN_32b2_6eb1();
    uStack_1c = 0x32b2;
    FUN_32b2_6d14();
    uStack_24 = 0x32b2;
    iStack_26 = 0xdc3;
    FUN_32b2_6eb1();
    uStack_24 = 0x32b2;
    iStack_26 = 0xdcc;
    FUN_32b2_6d14();
    uStack_24 = 0x32b2;
    iStack_26 = 0xdd5;
    FUN_32b2_6e99();
    uStack_2e = 0xddf;
    FUN_32b2_6eb1();
    uStack_2e = 0xde8;
    FUN_32b2_6cc6();
    uStack_2e = 0xded;
    FUN_32b2_7258();
    uStack_34 = 0x32b2;
    uStack_36 = 0xdf7;
    FUN_32b2_6eb1();
    uStack_34 = 0x32b2;
    uStack_36 = 0xe00;
    FUN_32b2_6cc6();
    uStack_34 = 0x32b2;
    uStack_36 = 0xe05;
    FUN_32b2_7258();
    uStack_3c = 0x32b2;
    uStack_3e = 0xe0f;
    FUN_32b2_6eb1();
    uStack_3c = 1;
    uStack_3e = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
    uStack_40 = 0xe17;
    func_0x0003fc09();
    uVar20 = (undefined1 *)0xffc9 < &uStack_3a;
    uStack_e6 = *(uint *)0x9380;
    uStack_e4 = *(undefined2 *)0x9382;
    FUN_32b2_6cc6();
    FUN_32b2_704d();
    FUN_32b2_7258();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_7173();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_6e99();
    FUN_32b2_718c();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_7182();
    FUN_32b2_710c();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6d14();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_70f4();
    FUN_32b2_6e99();
    FUN_32b2_7191();
    if (!(bool)uVar20) {
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_7191();
      if ((bool)uVar20) {
        uStack_96 = *(undefined2 *)0x93c0;
        uStack_94 = *(undefined2 *)0x93c2;
        uStack_92 = *(undefined2 *)0x93c4;
        uStack_90 = *(undefined2 *)0x93c6;
      }
      puStack_c = (uint *)uStack_96;
      puStack_e = (uint *)0x32b2;
      piStack_10 = (int *)0xf53;
      puVar12 = (uint *)FUN_32b2_7592();
      uStack_d6 = *puVar12;
      uStack_d4 = puVar12[1];
      uStack_d2 = puVar12[2];
      uStack_d0 = puVar12[3];
      puStack_c = (uint *)0x32b2;
      puStack_e = (uint *)0xf75;
      FUN_32b2_6cc6();
      puStack_c = (uint *)0x32b2;
      puStack_e = (uint *)0xf7a;
      FUN_32b2_7258();
      local_14 = 0x32b2;
      local_16 = 0xf84;
      FUN_32b2_6eb1();
      local_14 = 0x32b2;
      local_16 = 0xf8c;
      FUN_32b2_6cc6();
      local_14 = 0x32b2;
      local_16 = 0xf91;
      FUN_32b2_7258();
      uStack_1c = 0x32b2;
      FUN_32b2_6eb1();
      uStack_1c = uStack_ac;
      uStack_20 = uStack_b0;
      uStack_24 = uStack_98;
      iStack_26 = uStack_9a;
      iStack_28 = uStack_9c;
      iStack_2a = iStack_9e;
      uStack_2e = uStack_d2;
      uStack_30 = uStack_d4;
      uStack_32 = uStack_d6;
      uStack_34 = uStack_b4;
      uStack_36 = uStack_b6;
      iStack_38 = uStack_b8;
      uStack_3a = uStack_ba;
      uStack_3c = 0;
      uStack_3e = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      uStack_40 = 0xfe2;
      func_0x0003fc09();
      uVar20 = (undefined1 *)0xffc9 < &uStack_3c;
      *param_5 = uStack_aa;
      param_5[1] = uStack_a8;
      *param_6 = uStack_ce;
      param_6[1] = uStack_cc;
      *param_7 = uStack_aa;
      param_7[1] = uStack_a8;
      *param_8 = uStack_ce;
      param_8[1] = uStack_cc;
      iStack_6e = iStack_6e + 1;
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_7191();
      if ((bool)uVar20) {
        puStack_c = (uint *)0x32b2;
        puStack_e = (uint *)0x1057;
        FUN_32b2_6cc6();
        puStack_c = (uint *)0x32b2;
        puStack_e = (uint *)0x105c;
        FUN_32b2_7258();
        local_14 = 0x32b2;
        local_16 = 0x1066;
        FUN_32b2_6eb1();
        local_14 = 0x32b2;
        local_16 = 0x106e;
        FUN_32b2_6cc6();
        local_14 = 0x32b2;
        local_16 = 0x1073;
        FUN_32b2_7258();
        uStack_1c = 0x32b2;
        FUN_32b2_6eb1();
        uStack_1c = uStack_ac;
        uStack_20 = uStack_b0;
        uStack_24 = uStack_98;
        iStack_26 = uStack_9a;
        iStack_28 = uStack_9c;
        iStack_2a = iStack_9e;
        uStack_2e = 0x10a6;
        FUN_32b2_6d14();
        uStack_2e = 0x10ab;
        FUN_32b2_6fd6();
        uStack_34 = 0x32b2;
        uStack_36 = 0x10b5;
        FUN_32b2_6eb1();
        uStack_34 = uStack_b4;
        uStack_36 = uStack_b6;
        iStack_38 = uStack_b8;
        uStack_3a = uStack_ba;
        uStack_3c = 0;
        uStack_3e = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
        uStack_40 = 0x10cc;
        func_0x0003fc09();
        *param_7 = uStack_aa;
        param_7[1] = uStack_a8;
        *param_8 = uStack_ce;
        param_8[1] = uStack_cc;
        iStack_6e = iStack_6e + 1;
      }
      return iStack_6e;
    }
    if (iStack_ec != 0) {
      return 0;
    }
    iStack_ec = 1;
    iVar14 = -(param_4 + (uint)(param_3 != 0));
    puStack_c = (uint *)0xef8;
    puVar11 = (uint *)FUN_1000_0271();
    puVar12 = &uStack_36;
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar3 = puVar12;
      puVar12 = puVar12 + 1;
      puVar23 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar3 = *puVar23;
    }
    iVar14 = -(param_2 + (uint)(param_1 != 0));
    puStack_c = (uint *)0xba1;
    puVar9 = (undefined2 *)FUN_1000_0271();
    puVar10 = &uStack_6c;
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar2 = puVar10;
      puVar10 = puVar10 + 1;
      puVar1 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar2 = *puVar1;
    }
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    uStack_e2 = uStack_6c;
    uStack_e0 = uStack_6a;
    uStack_e6 = uStack_68;
    uStack_e4 = uStack_66;
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    if ((iStack_2a != 10000) || (uVar20 = iStack_60 == 10000, !(bool)uVar20)) {
      return -1;
    }
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_70dc();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6d14();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_70dc();
    FUN_32b2_6e99();
    FUN_32b2_7191();
    if ((bool)uVar20) {
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_7191();
      if ((bool)uVar20) {
        return 0;
      }
    }
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_718c();
    puStack_e = (uint *)0x32b2;
    piStack_10 = (int *)0xce2;
    FUN_32b2_6eb1();
    puStack_e = (uint *)0x32b2;
    piStack_10 = (int *)0xce7;
    puVar10 = (undefined2 *)FUN_32b2_7592();
    uStack_96 = *puVar10;
    uStack_94 = puVar10[1];
    uStack_92 = puVar10[2];
    uStack_90 = puVar10[3];
    puStack_c = (uint *)0x32b2;
    puStack_e = (uint *)0xd08;
    FUN_32b2_6cc6();
    puStack_c = (uint *)0x32b2;
    puStack_e = (uint *)0xd0d;
    FUN_32b2_7258();
    local_14 = 0x32b2;
    local_16 = 0xd17;
    FUN_32b2_6eb1();
    local_14 = 0x32b2;
    local_16 = 0xd20;
    FUN_32b2_6cc6();
    local_14 = 0x32b2;
    local_16 = 0xd25;
    FUN_32b2_7258();
    uStack_1c = 0x32b2;
    FUN_32b2_6eb1();
    uStack_1c = uStack_d8;
    uStack_20 = uStack_dc;
    uStack_24 = uStack_bc;
    iStack_26 = uStack_be;
    iStack_28 = uStack_c0;
    iStack_2a = iStack_c2;
                    /* WARNING: Call to offcut address within same function */
    uStack_2e = 0xd53;
    iVar13 = func_0x0003fb3d();
    if (iVar13 == 0) break;
    FUN_32b2_6d14();
    FUN_32b2_6e99();
    uVar18 = 0x32b2;
    FUN_32b2_6ef9();
  }
  return 0;
}



/* 3ab8:4c91  FUN_3ab8_4c91  1191 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x0003f813) overlaps instruction at (ram,0x0003f812)
    */

undefined2 __cdecl16far FUN_3ab8_4c91(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  int in_CX;
  int iVar7;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar8;
  undefined2 *unaff_DI;
  undefined2 *puVar9;
  undefined2 unaff_ES;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  *(byte *)0xb907 = ~*(byte *)0xb907;
  uStack_32 = 0x3ab8;
  do {
    for (; in_CX != 0; in_CX = in_CX + -1) {
      puVar3 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      puVar2 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *puVar3 = *puVar2;
    }
    iStack_4 = unaff_BP + -0xa84;
    puVar8 = &uStack_1a;
    puVar6 = (undefined2 *)(unaff_BP + -0x948);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar2;
    }
    puVar8 = &uStack_30;
    puVar6 = (undefined2 *)(unaff_BP + -0x496);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar2;
    }
    uVar10 = 0x1bb4;
    uStack_34 = 0xf845;
    iVar7 = FUN_1def_1921();
    if (iVar7 != 0) {
      iStack_4 = 0xf858;
      func_0x000297e6();
      iStack_4 = 0xf861;
      func_0x000297e6();
      iStack_4 = 0xf866;
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xf870;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0xf879;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0xf87e;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xf888;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0xf891;
      FUN_1def_05d1();
      uVar11 = (undefined1 *)0xffed < &uStack_12;
      uVar12 = &stack0x0000 == (undefined1 *)0x0;
      iStack_4 = 0xf89b;
      func_0x000297e6();
      iStack_4 = 0xf8a4;
      func_0x0002996b();
      iStack_4 = 0xf8a9;
      FUN_28b3_1181();
      if (!(bool)uVar11 && !(bool)uVar12) {
        iStack_4 = 0xf8b4;
        func_0x000297e6();
        iStack_4 = 0xf8bd;
        func_0x000297e6();
        iStack_4 = 0xf8c2;
        FUN_28b3_1181();
        if ((bool)uVar11) {
          iStack_4 = 0xf8cd;
          func_0x000297e6();
          iStack_4 = 0xf8d6;
          func_0x00029983();
        }
      }
      iStack_4 = 0xf8df;
      func_0x000297e6();
      iStack_4 = 0xf8e8;
      func_0x000297e6();
      uVar10 = 0x22b2;
      iStack_4 = 0xf8ed;
      FUN_28b3_1181();
      if ((bool)uVar11) {
        iStack_4 = 0xf8f8;
        func_0x000297e6();
        iStack_4 = 0xf901;
        func_0x000297e6();
        uVar10 = 0x22b2;
        iStack_4 = 0xf906;
        FUN_28b3_1181();
        if ((!(bool)uVar11 && !(bool)uVar12) && ((*(byte *)(unaff_BP + -0x481) & 2) == 0)) {
          uVar4 = *(undefined2 *)(unaff_BP + -0xa7e);
          *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
          *(undefined2 *)(unaff_BP + -0xa9a) = uVar4;
        }
      }
    }
    do {
      *(int *)(unaff_BP + -0xa18) = *(int *)(unaff_BP + -0xa18) + 1;
      while (*(int *)(unaff_BP + -0x916) < *(int *)(unaff_BP + -0xa18)) {
        uVar11 = 0;
        uVar12 = (*(byte *)(unaff_BP + -0x481) & 2) == 0;
        if ((bool)uVar12) {
          iStack_4 = 0xf943;
          func_0x000297e6();
          iStack_4 = 0xf94c;
          func_0x000297e6();
          iStack_4 = 0xf955;
          func_0x00029bfc();
          uVar10 = 0x22b2;
          iStack_4 = 0xf95a;
          FUN_28b3_1181();
          if (!(bool)uVar11 && !(bool)uVar12) {
            iStack_4 = *(undefined2 *)0x99f0;
            iStack_6 = *(undefined2 *)0x99ee;
            iStack_8 = *(undefined2 *)0x99ec;
            uStack_a = 0x22b2;
            uStack_c = 0xf978;
            func_0x000297e6();
            uStack_12 = 0x22b2;
            uStack_14 = 0xf982;
            func_0x000299d1();
            uStack_12 = 0;
            uStack_14 = 0x22b2;
            uStack_16 = 0xf98a;
            puVar6 = (undefined2 *)FUN_1def_05d1();
            uVar10 = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x496) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x494) = uVar10;
            iStack_4 = *(undefined2 *)0x99f0;
            iStack_6 = *(undefined2 *)0x99ee;
            iStack_8 = *(undefined2 *)0x99ec;
            uStack_a = 0x1bb4;
            uStack_c = 0xf9b5;
            func_0x000297e6();
            uStack_12 = 0x22b2;
            uStack_14 = 0xf9bf;
            func_0x000299d1();
            uStack_12 = 0;
            uStack_14 = 0x22b2;
            uVar10 = 0x1bb4;
            uStack_16 = 0xf9c7;
            puVar6 = (undefined2 *)func_0x0001e558();
            uVar4 = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x492) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x490) = uVar4;
            goto LAB_3ab8_4e74;
          }
        }
        else {
          iStack_4 = 0xf9e4;
          func_0x00029834();
          iStack_4 = 0xf9ed;
          func_0x000297e6();
          uVar10 = 0x22b2;
          iStack_4 = 0xf9f2;
          FUN_28b3_1181();
          if (!(bool)uVar11 && !(bool)uVar12) {
LAB_3ab8_4e74:
            iStack_4 = *(undefined2 *)0x99f0;
            iStack_6 = *(undefined2 *)0x99ee;
            iStack_8 = *(undefined2 *)0x99ec;
            uStack_c = 0xfa0d;
            uStack_a = uVar10;
            func_0x000297e6();
            uStack_12 = 0x22b2;
            uStack_14 = 0xfa17;
            func_0x000299d1();
            uStack_12 = 0;
            uStack_14 = 0x22b2;
            uStack_16 = 0xfa1f;
            puVar6 = (undefined2 *)FUN_1def_05d1();
            uVar10 = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x48e) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x48c) = uVar10;
            iStack_4 = *(undefined2 *)0x99f0;
            iStack_6 = *(undefined2 *)0x99ee;
            iStack_8 = *(undefined2 *)0x99ec;
            uStack_a = 0x1bb4;
            uStack_c = 0xfa4a;
            func_0x000297e6();
            uStack_12 = 0x22b2;
            uStack_14 = 0xfa54;
            func_0x000299d1();
            uStack_12 = 0;
            uStack_14 = 0x22b2;
            uVar10 = 0x1bb4;
            uStack_16 = 0xfa5c;
            puVar6 = (undefined2 *)func_0x0001e558();
            uVar4 = puVar6[1];
            *(undefined2 *)(unaff_BP + -0x48a) = *puVar6;
            *(undefined2 *)(unaff_BP + -0x488) = uVar4;
          }
        }
        puVar6 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
        puVar8 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar6;
          puVar6 = puVar6 + 1;
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar3 = *puVar2;
        }
        do {
          *(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1;
          if (*(int *)(unaff_BP + -0x916) < *(int *)(unaff_BP + -0xa26)) {
            *(undefined2 *)(unaff_BP + -0xa26) = 1;
            while( true ) {
              iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
              uStack_c = 0x119;
              uStack_a = uVar10;
              FUN_32b2_75fe();
              iStack_4 = 0x32b2;
              iStack_6 = 0x123;
              FUN_32b2_6d14();
              iStack_4 = 0x32b2;
              iStack_6 = 299;
              FUN_32b2_704d();
              iStack_4 = 0x32b2;
              iStack_6 = 0x133;
              FUN_32b2_7095();
              iStack_4 = 0x32b2;
              iStack_6 = 0x13b;
              FUN_32b2_6eb1();
              iStack_4 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
              uStack_a = *(undefined2 *)(unaff_BP + -0xbc);
              uStack_c = 0x32b2;
              uStack_e = 0x150;
              FUN_32b2_75ec();
              uVar11 = &stack0x0000 == (undefined1 *)0x4;
              iStack_6 = 0x32b2;
              iStack_8 = 0x15a;
              FUN_32b2_6d14();
              iStack_6 = 0x32b2;
              iStack_8 = 0x162;
              FUN_32b2_704d();
              iStack_6 = 0x32b2;
              iStack_8 = 0x16a;
              FUN_32b2_7095();
              iStack_6 = 0x32b2;
              iStack_8 = 0x173;
              FUN_32b2_6eb1();
              iStack_6 = 0x32b2;
              iStack_8 = 0x17b;
              FUN_32b2_6cc6();
              iStack_6 = 0x32b2;
              iStack_8 = 0x183;
              FUN_32b2_6cc6();
              iStack_6 = 0x32b2;
              iStack_8 = 0x188;
              FUN_32b2_7191();
              if ((bool)uVar11) {
                iStack_6 = 0x32b2;
                iStack_8 = 0x192;
                FUN_32b2_6cc6();
                iStack_6 = 0x32b2;
                iStack_8 = 0x19a;
                FUN_32b2_6cc6();
                iStack_6 = 0x32b2;
                iStack_8 = 0x19f;
                FUN_32b2_7191();
                if ((bool)uVar11) {
                  return 0;
                }
              }
              iStack_6 = unaff_BP + -0xa8;
              iStack_8 = unaff_BP + -0x1c;
              uStack_a = *(undefined2 *)(unaff_BP + -0x7c);
              uStack_c = *(undefined2 *)(unaff_BP + -0x7e);
              uStack_e = *(undefined2 *)(unaff_BP + -0x80);
              uStack_10 = *(undefined2 *)(unaff_BP + -0x82);
              uStack_12 = *(undefined2 *)(unaff_BP + -0x58);
              uStack_14 = *(undefined2 *)(unaff_BP + -0x5a);
              uStack_16 = *(undefined2 *)(unaff_BP + -0x5c);
              uStack_18 = *(undefined2 *)(unaff_BP + -0x5e);
              uStack_1a = 0x32b2;
              FUN_32b2_6cc6();
              uStack_1a = 0x32b2;
              FUN_32b2_7258();
              uStack_22 = 0x32b2;
              uStack_24 = 0x1df;
              FUN_32b2_6eb1();
              uStack_22 = 0x32b2;
              uStack_24 = 0x1e7;
              FUN_32b2_6cc6();
              uStack_22 = 0x32b2;
              uStack_24 = 0x1ec;
              FUN_32b2_7258();
              uStack_2a = 0x32b2;
              uStack_2c = 0x1f6;
              FUN_32b2_6eb1();
              uStack_2a = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
              uStack_2c = 0x1fa;
              iVar7 = func_0x0003fb3d();
              if (iVar7 == 0) break;
              iStack_6 = 0x32b2;
              iStack_8 = 0x209;
              FUN_32b2_6cc6();
              iStack_6 = 0x32b2;
              iStack_8 = 0x20e;
              FUN_32b2_7258();
              iStack_6 = 0x32b2;
              iStack_8 = 0x216;
              FUN_32b2_6e99();
              iStack_6 = 0x32b2;
              iStack_8 = 0x21e;
              FUN_32b2_6ef9();
              iStack_6 = unaff_BP + -0xb4;
              iStack_8 = unaff_BP + -0xa4;
              uStack_a = 0x32b2;
              uStack_c = 0x231;
              FUN_32b2_6cc6();
              uStack_a = 0x32b2;
              uStack_c = 0x236;
              FUN_32b2_7258();
              uStack_12 = 0x32b2;
              uStack_14 = 0x240;
              FUN_32b2_6eb1();
              uStack_12 = 0x32b2;
              uStack_14 = 0x248;
              FUN_32b2_6cc6();
              uStack_12 = 0x32b2;
              uStack_14 = 0x24d;
              FUN_32b2_7258();
              uStack_1a = 0x32b2;
              FUN_32b2_6eb1();
              uStack_1a = 0x32b2;
              FUN_32b2_6d14();
              uStack_22 = 0x32b2;
              uStack_24 = 0x269;
              FUN_32b2_6eb1();
              uStack_22 = 0x32b2;
              uStack_24 = 0x271;
              FUN_32b2_6cc6();
              uStack_22 = 0x32b2;
              uStack_24 = 0x276;
              FUN_32b2_7258();
              uStack_22 = 0x32b2;
              uStack_24 = 0x27e;
              FUN_32b2_6e99();
              uStack_2a = 0x32b2;
              uStack_2c = 0x288;
              FUN_32b2_6eb1();
              uStack_2a = 0x32b2;
              uStack_2c = 0x290;
              FUN_32b2_6cc6();
              uStack_2a = 0x32b2;
              uStack_2c = 0x295;
              FUN_32b2_7258();
              uStack_32 = 0x32b2;
              uStack_34 = 0x29f;
              FUN_32b2_6eb1();
              uStack_32 = 0x32b2;
              uStack_34 = 0x2a7;
              FUN_32b2_6cc6();
              uStack_32 = 0x32b2;
              uStack_34 = 0x2ac;
              FUN_32b2_7258();
              FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
              func_0x0003fc09(0x32b2,1);
              iStack_6 = unaff_BP + -0xe4;
              iStack_8 = unaff_BP + -0xd0;
              uStack_a = 0x32b2;
              uStack_c = 0x2d4;
              FUN_32b2_6cc6();
              uStack_a = 0x32b2;
              uStack_c = 0x2d9;
              FUN_32b2_7258();
              uStack_12 = 0x32b2;
              uStack_14 = 0x2e3;
              FUN_32b2_6eb1();
              uStack_12 = 0x32b2;
              uStack_14 = 0x2eb;
              FUN_32b2_6cc6();
              uStack_12 = 0x32b2;
              uStack_14 = 0x2f0;
              FUN_32b2_7258();
              uStack_1a = 0x32b2;
              FUN_32b2_6eb1();
              uStack_1a = 0x32b2;
              FUN_32b2_6d14();
              uStack_22 = 0x32b2;
              uStack_24 = 0x30c;
              FUN_32b2_6eb1();
              uStack_22 = 0x32b2;
              uStack_24 = 0x314;
              FUN_32b2_6d14();
              uStack_2a = 0x32b2;
              uStack_2c = 0x31e;
              FUN_32b2_6eb1();
              uStack_2a = 0x32b2;
              uStack_2c = 0x326;
              FUN_32b2_6cc6();
              uStack_2a = 0x32b2;
              uStack_2c = 0x32b;
              FUN_32b2_7258();
              uStack_32 = 0x32b2;
              uStack_34 = 0x335;
              FUN_32b2_6eb1();
              uStack_32 = 0x32b2;
              uStack_34 = 0x33d;
              FUN_32b2_6cc6();
              uStack_32 = 0x32b2;
              uStack_34 = 0x342;
              FUN_32b2_7258();
              FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
              func_0x0003fc09(0x32b2,1);
              uVar11 = (undefined1 *)0xffc9 < &uStack_36;
              uVar12 = &stack0x0000 == (undefined1 *)0x0;
              iStack_4 = 0x360;
              FUN_32b2_6cc6();
              iStack_4 = 0x369;
              FUN_32b2_701d();
              iStack_4 = 0x36e;
              FUN_32b2_7258();
              iStack_4 = 0x376;
              FUN_32b2_6e99();
              iStack_4 = 0x37e;
              FUN_32b2_6ef9();
              iStack_4 = 0x387;
              FUN_32b2_6cc6();
              iStack_4 = 0x390;
              FUN_32b2_701d();
              iStack_4 = 0x395;
              FUN_32b2_7258();
              iStack_4 = 0x39e;
              FUN_32b2_6e99();
              iStack_4 = 0x3a6;
              FUN_32b2_6ef9();
              iStack_4 = 0x3af;
              FUN_32b2_6d14();
              iStack_4 = 0x3b4;
              FUN_32b2_6fc7();
              iStack_4 = 0x3bc;
              FUN_32b2_6d14();
              iStack_4 = 0x3c1;
              FUN_32b2_6fc7();
              iStack_4 = 0x3ca;
              FUN_32b2_710c();
              iStack_4 = 0x3cf;
              FUN_32b2_7191();
              if (!(bool)uVar11 && !(bool)uVar12) {
                iStack_4 = 0x3da;
                FUN_32b2_6d14();
                iStack_4 = 0x3e2;
                FUN_32b2_6d14();
                iStack_4 = 999;
                FUN_32b2_7191();
                if (!(bool)uVar12) {
                  iStack_4 = 0x431;
                  FUN_32b2_6d14();
                  iStack_4 = 0x439;
                  FUN_32b2_7124();
                  iStack_4 = 0x441;
                  FUN_32b2_6e99();
                  iStack_4 = 0x44a;
                  FUN_32b2_704d();
                  iStack_4 = 0x453;
                  FUN_32b2_7035();
                  iStack_4 = 0x45c;
                  FUN_32b2_6e99();
                  iStack_4 = 0x464;
                  FUN_32b2_6eb1();
                  iStack_4 = 0x46c;
                  FUN_32b2_6d14();
                  iStack_4 = 0x474;
                  FUN_32b2_710c();
                  iStack_4 = 0x47c;
                  FUN_32b2_710c();
                  iStack_4 = 0x484;
                  FUN_32b2_710c();
                  iStack_4 = 0x48c;
                  FUN_32b2_6d14();
                  iStack_4 = 0x494;
                  FUN_32b2_710c();
                  iStack_4 = 0x49d;
                  FUN_32b2_6e99();
                  iStack_4 = 0x4a2;
                  FUN_32b2_718c();
                  iStack_4 = 0x4ab;
                  FUN_32b2_6e99();
                  iStack_4 = 0x4b3;
                  FUN_32b2_6eb1();
                  iStack_4 = 0x4bc;
                  FUN_32b2_6d14();
                  iStack_4 = 0x4c4;
                  FUN_32b2_710c();
                  iStack_4 = 0x4cd;
                  FUN_32b2_710c();
                  iStack_4 = 0x4d5;
                  FUN_32b2_710c();
                  iStack_4 = 0x4dd;
                  FUN_32b2_710c();
                  iStack_4 = 0x4e6;
                  FUN_32b2_6e99();
                  iStack_4 = 0x4ee;
                  FUN_32b2_6eb1();
                  iStack_4 = 0x4f7;
                  FUN_32b2_6d14();
                  iStack_4 = 0x500;
                  FUN_32b2_710c();
                  iStack_4 = 0x509;
                  FUN_32b2_70dc();
                  iStack_4 = 0x511;
                  FUN_32b2_710c();
                  iStack_4 = 0x519;
                  FUN_32b2_710c();
                  iStack_4 = 0x522;
                  FUN_32b2_6e99();
                  iStack_4 = 0x52b;
                  FUN_32b2_6eb1();
                  iStack_4 = 0x534;
                  FUN_32b2_6d14();
                  iStack_4 = 0x53d;
                  FUN_32b2_710c();
                  iStack_4 = 0x546;
                  FUN_32b2_710c();
                  iStack_4 = 0x54f;
                  FUN_32b2_6d14();
                  iStack_4 = 0x558;
                  FUN_32b2_710c();
                  iStack_4 = 0x55d;
                  FUN_32b2_718c();
                  iStack_4 = 0x566;
                  FUN_32b2_6eb1();
                  iStack_4 = 0x56f;
                  FUN_32b2_6d14();
                  iStack_4 = 0x574;
                  FUN_32b2_6fd6();
                  iStack_4 = 0x57d;
                  FUN_32b2_6d14();
                  iStack_4 = 0x586;
                  FUN_32b2_710c();
                  iStack_4 = 0x58b;
                  FUN_32b2_7182();
                  iStack_4 = 0x594;
                  FUN_32b2_6e99();
                  iStack_4 = 0x59c;
                  FUN_32b2_710c();
                  iStack_4 = 0x5a5;
                  FUN_32b2_7154();
                  iStack_4 = 0x5ae;
                  FUN_32b2_6e99();
                  iStack_4 = 0x5b7;
                  FUN_32b2_6eb1();
                  iStack_4 = 0x5c0;
                  FUN_32b2_6d14();
                  iStack_4 = 0x5c9;
                  FUN_32b2_6eb1();
                  iStack_4 = unaff_BP + -0x62;
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x5db;
                  FUN_32b2_6cc6();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x5e0;
                  FUN_32b2_7258();
                  uStack_e = 0x32b2;
                  uStack_10 = 0x5ea;
                  FUN_32b2_6eb1();
                  uStack_e = 0x32b2;
                  uStack_10 = 0x5f2;
                  FUN_32b2_6cc6();
                  uStack_e = 0x32b2;
                  uStack_10 = 0x5f7;
                  FUN_32b2_7258();
                  uStack_16 = 0x32b2;
                  uStack_18 = 0x601;
                  FUN_32b2_6eb1();
                  uStack_16 = *(undefined2 *)(unaff_BP + -100);
                  uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
                  uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
                  uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
                  uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
                  uStack_22 = *(undefined2 *)(unaff_BP + -0x4c);
                  uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
                  uStack_28 = 0x622;
                  FUN_32b2_6d14();
                  uStack_2e = 0x32b2;
                  uStack_30 = 0x62c;
                  FUN_32b2_6eb1();
                  uStack_2e = 0x32b2;
                  uStack_30 = 0x635;
                  FUN_32b2_6d14();
                  uStack_36 = 0x32b2;
                  uStack_38 = 0x63f;
                  FUN_32b2_6eb1();
                  uStack_36 = 0;
                  uStack_38 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
                  func_0x0003fc09();
                  uVar10 = *(undefined2 *)(unaff_BP + -0x60);
                  *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
                  *(undefined2 *)(unaff_BP + -0x84) = uVar10;
                  uVar10 = *(undefined2 *)(unaff_BP + -0x88);
                  *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
                  *(undefined2 *)(unaff_BP + -0x9c) = uVar10;
                  iStack_4 = unaff_BP + -0x86;
                  puVar8 = &uStack_24;
                  puVar6 = (undefined2 *)(unaff_BP + 0x1c);
                  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                    puVar3 = puVar8;
                    puVar8 = puVar8 + 1;
                    puVar2 = puVar6;
                    puVar6 = puVar6 + 1;
                    *puVar3 = *puVar2;
                  }
                  uStack_28 = 0x684;
                  iVar7 = FUN_3ab8_522f();
                  uVar11 = 0;
                  uVar12 = iVar7 == 0;
                  if (!(bool)uVar12) {
                    iStack_4 = 0x694;
                    FUN_32b2_6d14();
                    iStack_4 = 0x69d;
                    FUN_32b2_6cc6();
                    iStack_4 = 0x6a5;
                    FUN_32b2_701d();
                    iStack_4 = 0x6aa;
                    FUN_32b2_6fc7();
                    iStack_4 = 0x6af;
                    FUN_32b2_7258();
                    iStack_4 = 0x6b4;
                    FUN_32b2_7191();
                    if ((bool)uVar11 || (bool)uVar12) {
                      iStack_4 = 0x6bf;
                      FUN_32b2_6d14();
                      iStack_4 = 0x6c8;
                      FUN_32b2_6cc6();
                      iStack_4 = 0x6d1;
                      FUN_32b2_701d();
                      iStack_4 = 0x6d6;
                      FUN_32b2_6fc7();
                      iStack_4 = 0x6db;
                      FUN_32b2_7258();
                      iStack_4 = 0x6e0;
                      FUN_32b2_7191();
                      if ((bool)uVar11 || (bool)uVar12) {
                        *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                        *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                        *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                        *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                      }
                    }
                  }
                  iStack_4 = 0x6f8;
                  FUN_32b2_6d14();
                  iStack_4 = 0x700;
                  FUN_32b2_6d14();
                  iStack_4 = 0x708;
                  FUN_32b2_710c();
                  iStack_4 = 0x711;
                  FUN_32b2_710c();
                  iStack_4 = 0x71a;
                  FUN_32b2_7154();
                  iStack_4 = 0x71f;
                  FUN_32b2_7191();
                  if (!(bool)uVar11) {
                    iStack_4 = 0x72d;
                    FUN_32b2_6d14();
                    iStack_4 = 0x732;
                    FUN_32b2_6fc7();
                    iStack_4 = 0x73a;
                    FUN_32b2_6d14();
                    iStack_4 = 0x742;
                    FUN_32b2_710c();
                    iStack_4 = 0x74b;
                    FUN_32b2_710c();
                    iStack_4 = 0x750;
                    FUN_32b2_7191();
                    if (!(bool)uVar11) {
                      *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                      *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                      *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                      *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                    }
                    iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
                    iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
                    iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
                    uStack_a = 0x32b2;
                    uStack_c = 0x774;
                    FUN_32b2_7592();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x77e;
                    FUN_32b2_6d14();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x786;
                    FUN_32b2_70dc();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x78e;
                    FUN_32b2_6d14();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x797;
                    FUN_32b2_710c();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x79c;
                    FUN_32b2_7182();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x7a5;
                    FUN_32b2_6e99();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x7ad;
                    FUN_32b2_710c();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x7b5;
                    FUN_32b2_7154();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x7be;
                    FUN_32b2_6e99();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x7c7;
                    FUN_32b2_6eb1();
                    iStack_4 = unaff_BP + -0x8a;
                    iStack_6 = unaff_BP + -0x62;
                    iStack_8 = 0x32b2;
                    uStack_a = 0x7d9;
                    FUN_32b2_6cc6();
                    iStack_8 = 0x32b2;
                    uStack_a = 0x7de;
                    FUN_32b2_7258();
                    uStack_10 = 0x32b2;
                    uStack_12 = 0x7e8;
                    FUN_32b2_6eb1();
                    uStack_10 = 0x32b2;
                    uStack_12 = 0x7f0;
                    FUN_32b2_6cc6();
                    uStack_10 = 0x32b2;
                    uStack_12 = 0x7f5;
                    FUN_32b2_7258();
                    uStack_18 = 0x32b2;
                    uStack_1a = 0x7ff;
                    FUN_32b2_6eb1();
                    uStack_18 = *(undefined2 *)(unaff_BP + -100);
                    uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
                    uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
                    uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
                    uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
                    uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
                    uStack_28 = 0x32b2;
                    uStack_2a = 0x820;
                    FUN_32b2_6d14();
                    uStack_30 = 0x32b2;
                    uStack_32 = 0x82a;
                    FUN_32b2_6eb1();
                    uStack_30 = 0x32b2;
                    uStack_32 = 0x833;
                    FUN_32b2_6d14();
                    uStack_38 = 0x32b2;
                    FUN_32b2_6eb1();
                    uStack_38 = 0;
                    /* WARNING: Call to offcut address within same function */
                    func_0x0003fc09(0x32b2);
                    uVar11 = (undefined1 *)0xffc9 < &uStack_38;
                    uVar12 = &stack0x0000 == (undefined1 *)0x2;
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x84f;
                    FUN_32b2_6cc6();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x857;
                    FUN_32b2_6cc6();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x85c;
                    FUN_32b2_7191();
                    if ((bool)uVar12) {
                      uVar10 = *(undefined2 *)(unaff_BP + 8);
                      *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                      *(undefined2 *)(unaff_BP + -0x60) = uVar10;
                    }
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x872;
                    FUN_32b2_6cc6();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x87a;
                    FUN_32b2_6cc6();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x87f;
                    FUN_32b2_7191();
                    if ((bool)uVar12) {
                      uVar10 = *(undefined2 *)(unaff_BP + 0xc);
                      *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                      *(undefined2 *)(unaff_BP + -0x88) = uVar10;
                    }
                    uVar10 = *(undefined2 *)(unaff_BP + -0x60);
                    puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
                    *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
                    puVar6[1] = uVar10;
                    uVar10 = *(undefined2 *)(unaff_BP + -0x88);
                    puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
                    *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
                    puVar6[1] = uVar10;
                    uVar10 = *(undefined2 *)(unaff_BP + -0x60);
                    puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                    *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
                    puVar6[1] = uVar10;
                    uVar10 = *(undefined2 *)(unaff_BP + -0x88);
                    puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                    *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
                    puVar6[1] = uVar10;
                    piVar1 = (int *)(unaff_BP + -0x36);
                    *piVar1 = *piVar1 + 1;
                    uVar12 = *piVar1 == 0;
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x8d7;
                    FUN_32b2_6d14();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x8e0;
                    FUN_32b2_6d14();
                    iStack_4 = 0x32b2;
                    iStack_6 = 0x8e5;
                    FUN_32b2_7191();
                    if (!(bool)uVar11 && !(bool)uVar12) {
                      iStack_4 = *(undefined2 *)(unaff_BP + -0xb6);
                      iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
                      iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
                      uStack_a = *(undefined2 *)(unaff_BP + -0xbc);
                      uStack_c = 0x32b2;
                      uStack_e = 0x8ff;
                      FUN_32b2_7592();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x909;
                      FUN_32b2_6d14();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x911;
                      FUN_32b2_7154();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x916;
                      FUN_32b2_6fd6();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x91e;
                      FUN_32b2_6d14();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x927;
                      FUN_32b2_710c();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x92c;
                      FUN_32b2_7182();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x935;
                      FUN_32b2_6e99();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x93d;
                      FUN_32b2_710c();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x945;
                      FUN_32b2_7154();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x94e;
                      FUN_32b2_6e99();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x957;
                      FUN_32b2_6eb1();
                      iStack_6 = unaff_BP + -0x8a;
                      iStack_8 = unaff_BP + -0x62;
                      uStack_a = 0x32b2;
                      uStack_c = 0x969;
                      FUN_32b2_6cc6();
                      uStack_a = 0x32b2;
                      uStack_c = 0x96e;
                      FUN_32b2_7258();
                      uStack_12 = 0x32b2;
                      uStack_14 = 0x978;
                      FUN_32b2_6eb1();
                      uStack_12 = 0x32b2;
                      uStack_14 = 0x980;
                      FUN_32b2_6cc6();
                      uStack_12 = 0x32b2;
                      uStack_14 = 0x985;
                      FUN_32b2_7258();
                      uStack_1a = 0x32b2;
                      FUN_32b2_6eb1();
                      uStack_1a = *(undefined2 *)(unaff_BP + -100);
                      uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
                      uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
                      uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
                      uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
                      uStack_28 = *(undefined2 *)(unaff_BP + -0x4e);
                      uStack_2a = 0x32b2;
                      uStack_2c = 0x9b0;
                      FUN_32b2_6d14();
                      uStack_32 = 0x32b2;
                      uStack_34 = 0x9ba;
                      FUN_32b2_6eb1();
                      uStack_32 = 0x32b2;
                      uStack_34 = 0x9c3;
                      FUN_32b2_6d14();
                      FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
                      func_0x0003fc09(0x32b2,0);
                      uVar11 = &stack0x0000 == (undefined1 *)0x4;
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x9df;
                      FUN_32b2_6cc6();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x9e7;
                      FUN_32b2_6cc6();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0x9ec;
                      FUN_32b2_7191();
                      if ((bool)uVar11) {
                        uVar10 = *(undefined2 *)(unaff_BP + 8);
                        *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                        *(undefined2 *)(unaff_BP + -0x60) = uVar10;
                      }
                      iStack_6 = 0x32b2;
                      iStack_8 = 0xa02;
                      FUN_32b2_6cc6();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0xa0a;
                      FUN_32b2_6cc6();
                      iStack_6 = 0x32b2;
                      iStack_8 = 0xa0f;
                      FUN_32b2_7191();
                      if ((bool)uVar11) {
                        uVar10 = *(undefined2 *)(unaff_BP + 0xc);
                        *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                        *(undefined2 *)(unaff_BP + -0x88) = uVar10;
                      }
                      uVar10 = *(undefined2 *)(unaff_BP + -0x60);
                      puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                      *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
                      puVar6[1] = uVar10;
                      uVar10 = *(undefined2 *)(unaff_BP + -0x88);
                      puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                      *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
                      puVar6[1] = uVar10;
                      *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
                    }
                    return *(undefined2 *)(unaff_BP + -0x36);
                  }
                }
                return 0;
              }
              iStack_4 = 0x3f5;
              FUN_32b2_6d14();
              iStack_4 = 0x32b2;
              iStack_6 = 0x3ff;
              FUN_32b2_7154();
              uVar10 = 0x32b2;
              iStack_4 = 0x405;
              FUN_32b2_6eb1();
              *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -8);
              *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -6);
              *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -4);
              *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -2);
              *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x10);
              *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0xe);
              *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xc);
              *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -10);
              *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x46);
              *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x44);
              *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x42);
              *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
            }
            return 0;
          }
          puVar8 = (undefined2 *)(unaff_BP + -0x496);
          puVar6 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar3 = *puVar2;
          }
        } while ((*(byte *)(unaff_BP + -0x481) & 4) != 0);
        iStack_4 = 0xfabf;
        func_0x000297e6();
        iStack_4 = 0xfac4;
        func_0x00029d78();
        uStack_a = 0x22b2;
        uStack_c = 0xface;
        func_0x000299d1();
        uStack_a = 0x22b2;
        uStack_c = 0xfad7;
        func_0x000297e6();
        uStack_a = 0x22b2;
        uStack_c = 0xfadc;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xfae6;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        uStack_14 = 0xfaef;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xfaf4;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xfb16;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uVar10 = 0x1bb4;
        uStack_24 = 0xfb1b;
        FUN_1def_043a();
        uVar4 = *(undefined2 *)0x99fc;
        uVar5 = *(undefined2 *)0x99fe;
        *(undefined2 *)(unaff_BP + -0xaa4) = uVar4;
        *(undefined2 *)(unaff_BP + -0xaa2) = uVar5;
        *(undefined2 *)(unaff_BP + -0xaa0) = uVar4;
        *(undefined2 *)(unaff_BP + -0xa9e) = uVar5;
        uVar4 = *(undefined2 *)0x99f4;
        uVar5 = *(undefined2 *)0x99f6;
        *(undefined2 *)(unaff_BP + -0xa98) = uVar4;
        *(undefined2 *)(unaff_BP + -0xa96) = uVar5;
        *(undefined2 *)(unaff_BP + -0xa9c) = uVar4;
        *(undefined2 *)(unaff_BP + -0xa9a) = uVar5;
        uVar4 = *(undefined2 *)(unaff_BP + -0x94a);
        *(undefined2 *)(unaff_BP + -0x948) = *(undefined2 *)(unaff_BP + -0x94c);
        *(undefined2 *)(unaff_BP + -0x946) = uVar4;
        uVar4 = *(undefined2 *)(unaff_BP + -0x970);
        *(undefined2 *)(unaff_BP + -0x944) = *(undefined2 *)(unaff_BP + -0x972);
        *(undefined2 *)(unaff_BP + -0x942) = uVar4;
        uVar4 = *(undefined2 *)(unaff_BP + -0x94a);
        *(undefined2 *)(unaff_BP + -0x940) = *(undefined2 *)(unaff_BP + -0x94c);
        *(undefined2 *)(unaff_BP + -0x93e) = uVar4;
        uVar4 = *(undefined2 *)(unaff_BP + -0x98c);
        *(undefined2 *)(unaff_BP + -0x93c) = *(undefined2 *)(unaff_BP + -0x98e);
        *(undefined2 *)(unaff_BP + -0x93a) = uVar4;
        iStack_4 = unaff_BP + -0xaa4;
        puVar8 = &uStack_1a;
        puVar6 = (undefined2 *)(unaff_BP + -0x948);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        puVar8 = &uStack_30;
        puVar6 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        uStack_32 = 0x1bb4;
        uStack_34 = 0xfbb8;
        puVar9 = &uStack_30;
        func_0x00030da0();
        uVar4 = *(undefined2 *)(unaff_BP + -0x982);
        *(undefined2 *)(unaff_BP + -0x948) = *(undefined2 *)(unaff_BP + -0x984);
        *(undefined2 *)(unaff_BP + -0x946) = uVar4;
        uVar4 = *(undefined2 *)(unaff_BP + -0x98c);
        *(undefined2 *)(unaff_BP + -0x944) = *(undefined2 *)(unaff_BP + -0x98e);
        *(undefined2 *)(unaff_BP + -0x942) = uVar4;
        iStack_4 = unaff_BP + -0xaa4;
        puVar8 = &uStack_1a;
        puVar6 = (undefined2 *)(unaff_BP + -0x948);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        puVar6 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        uStack_32 = 0x1bb4;
        uStack_34 = 0xfc07;
        puVar9 = &uStack_30;
        func_0x00030da0();
        uVar4 = *(undefined2 *)(unaff_BP + -0x982);
        *(undefined2 *)(unaff_BP + -0x940) = *(undefined2 *)(unaff_BP + -0x984);
        *(undefined2 *)(unaff_BP + -0x93e) = uVar4;
        uVar4 = *(undefined2 *)(unaff_BP + -0x970);
        *(undefined2 *)(unaff_BP + -0x93c) = *(undefined2 *)(unaff_BP + -0x972);
        *(undefined2 *)(unaff_BP + -0x93a) = uVar4;
        iStack_4 = unaff_BP + -0xaa4;
        puVar8 = &uStack_1a;
        puVar6 = (undefined2 *)(unaff_BP + -0x948);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        puVar6 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        uStack_32 = 0x1bb4;
        uStack_34 = 0xfc56;
        puVar9 = &uStack_30;
        func_0x00030da0();
        uVar4 = *(undefined2 *)(unaff_BP + -0x94a);
        *(undefined2 *)(unaff_BP + -0x948) = *(undefined2 *)(unaff_BP + -0x94c);
        *(undefined2 *)(unaff_BP + -0x946) = uVar4;
        uVar4 = *(undefined2 *)(unaff_BP + -0x970);
        *(undefined2 *)(unaff_BP + -0x944) = *(undefined2 *)(unaff_BP + -0x972);
        *(undefined2 *)(unaff_BP + -0x942) = uVar4;
        iStack_4 = unaff_BP + -0xaa4;
        puVar8 = &uStack_1a;
        puVar6 = (undefined2 *)(unaff_BP + -0x948);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        puVar6 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        uStack_32 = 0x1bb4;
        uStack_34 = 0xfca5;
        func_0x00030da0();
        *(undefined2 *)(unaff_BP + -0xa18) = 1;
      }
    } while (*(int *)(unaff_BP + -0xa26) == *(int *)(unaff_BP + -0xa18));
    unaff_DI = (undefined2 *)(unaff_BP + -0x948);
    unaff_SI = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa18) * 0x16 + -0x906);
    in_CX = 0xb;
    unaff_ES = unaff_SS;
    uStack_32 = uVar10;
  } while( true );
}



/* 3ab8:5171  FUN_3ab8_5171  187 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */

undefined2 FUN_3ab8_5171(void)

{
  int *piVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar8;
  undefined2 *unaff_DI;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  while( true ) {
    *(int *)(unaff_BP + -0xa18) = *(int *)(unaff_BP + -0xa18) + 1;
    uVar3 = *(uint *)(unaff_BP + -0x914);
    uVar4 = *(uint *)(unaff_BP + -0xa18);
    uVar11 = uVar4 < uVar3;
    uVar12 = uVar4 == uVar3;
    if ((int)uVar3 < (int)uVar4) break;
    if (*(int *)(unaff_BP + -0xa26) != *(int *)(unaff_BP + -0xa18)) {
      puVar8 = (undefined2 *)(unaff_BP + -0x948);
      puVar6 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa18) * 0x16 + -0x906);
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar5;
      }
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0xfd3c;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0xfd45;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0xfd4a;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xfd54;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0xfd5d;
      puVar6 = (undefined2 *)func_0x0001e558();
      uVar9 = puVar6[1];
      *(undefined2 *)(unaff_BP + -0xa90) = *puVar6;
      *(undefined2 *)(unaff_BP + -0xa8e) = uVar9;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0xfd87;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0xfd90;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0xfd95;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xfd9f;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0xfda8;
      puVar6 = (undefined2 *)func_0x0001e558();
      uVar11 = (undefined1 *)0xffed < &uStack_12;
      uVar12 = &stack0x0000 == (undefined1 *)0x0;
      uVar9 = puVar6[1];
      *(undefined2 *)(unaff_BP + -0xa94) = *puVar6;
      *(undefined2 *)(unaff_BP + -0xa92) = uVar9;
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar11 && !(bool)uVar12) {
        func_0x00029834();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1181();
        if (!(bool)uVar11 && !(bool)uVar12) {
          uVar9 = FUN_3ab8_5171();
          return uVar9;
        }
      }
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if ((bool)uVar11) {
        func_0x00029834();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1181();
        if ((bool)uVar11) {
          uVar9 = FUN_3ab8_5171();
          return uVar9;
        }
      }
      puVar8 = &uStack_1a;
      puVar6 = (undefined2 *)(unaff_BP + -0x948);
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar5;
      }
      unaff_DI = &uStack_30;
      unaff_SI = (undefined2 *)(unaff_BP + -0x496);
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = unaff_DI;
        unaff_DI = unaff_DI + 1;
        puVar5 = unaff_SI;
        unaff_SI = unaff_SI + 1;
        *puVar2 = *puVar5;
      }
      uStack_32 = 0x22b2;
      uStack_34 = 0xfce7;
      iVar7 = FUN_1def_1921();
      if (iVar7 != 0) {
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        uStack_c = 0xfe53;
        func_0x000299d1();
        iStack_a = 0x22b2;
        uStack_c = 0xfe5c;
        func_0x000297e6();
        iStack_a = 0x22b2;
        uStack_c = 0xfe61;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xfe6b;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0xfe74;
        puVar6 = (undefined2 *)FUN_1def_05d1();
        uVar11 = (undefined1 *)0xffed < &uStack_12;
        uVar12 = &stack0x0000 == (undefined1 *)0x0;
        uVar9 = puVar6[1];
        *(undefined2 *)(unaff_BP + -0xa80) = *puVar6;
        *(undefined2 *)(unaff_BP + -0xa7e) = uVar9;
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029bfc();
        FUN_28b3_1181();
        if ((bool)uVar11 || (bool)uVar12) {
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029c74();
          FUN_28b3_1181();
          if (!(bool)uVar11) {
            *(undefined2 *)(unaff_BP + -0xa7a) = 0;
          }
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar11) {
          func_0x000297e6();
          func_0x00029d78();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c74();
          FUN_28b3_1181();
          if ((bool)uVar11) {
            uVar9 = *(undefined2 *)(unaff_BP + -0xa7e);
            *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
            *(undefined2 *)(unaff_BP + -0xa9a) = uVar9;
          }
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar11 && !(bool)uVar12) {
          func_0x000297e6();
          func_0x00029d78();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          FUN_28b3_1181();
          if (!(bool)uVar11 && !(bool)uVar12) {
            uVar9 = *(undefined2 *)(unaff_BP + -0xa7e);
            *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)(unaff_BP + -0xa80);
            *(undefined2 *)(unaff_BP + -0xa9e) = uVar9;
            uVar9 = FUN_3ab8_5171();
            return uVar9;
          }
          uVar9 = FUN_3ab8_5171();
          return uVar9;
        }
        uVar9 = FUN_3ab8_5171();
        return uVar9;
      }
    }
  }
  func_0x000297e6();
  func_0x00029d78();
  func_0x000297e6();
  func_0x00029d78();
  iVar7 = -0x6654;
  func_0x00029bfc();
  FUN_28b3_1181();
  if ((bool)uVar11 || (bool)uVar12) {
    piVar1 = (int *)((int)unaff_DI + iVar7 + 0x1486);
    *piVar1 = *piVar1 + -1;
    unaff_DI[0xa4f] = unaff_DI[0xa4f] + -1;
    puVar5 = (undefined2 *)((int)unaff_SI + unaff_BP + 0x7285);
    iStack_6 = 0xe9;
    (*(code *)*puVar5)();
    iStack_6 = 0xf3;
    FUN_32b2_704d();
    iStack_6 = 0xfc;
    FUN_32b2_710c();
    iStack_6 = 0x104;
    FUN_32b2_6eb1();
    while( true ) {
      iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
      iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
      uStack_c = 0x32b2;
      uStack_e = 0x119;
      FUN_32b2_75fe();
      iStack_6 = 0x32b2;
      iStack_8 = 0x123;
      FUN_32b2_6d14();
      iStack_6 = 0x32b2;
      iStack_8 = 299;
      FUN_32b2_704d();
      iStack_6 = 0x32b2;
      iStack_8 = 0x133;
      FUN_32b2_7095();
      iStack_6 = 0x32b2;
      iStack_8 = 0x13b;
      FUN_32b2_6eb1();
      iStack_6 = *(undefined2 *)(unaff_BP + -0xb6);
      iStack_8 = *(undefined2 *)(unaff_BP + -0xb8);
      iStack_a = *(undefined2 *)(unaff_BP + -0xba);
      uStack_c = *(undefined2 *)(unaff_BP + -0xbc);
      uStack_e = 0x32b2;
      uStack_10 = 0x150;
      FUN_32b2_75ec();
      uVar11 = &stack0x0000 == (undefined1 *)0x6;
      iStack_8 = 0x32b2;
      iStack_a = 0x15a;
      FUN_32b2_6d14();
      iStack_8 = 0x32b2;
      iStack_a = 0x162;
      FUN_32b2_704d();
      iStack_8 = 0x32b2;
      iStack_a = 0x16a;
      FUN_32b2_7095();
      iStack_8 = 0x32b2;
      iStack_a = 0x173;
      FUN_32b2_6eb1();
      iStack_8 = 0x32b2;
      iStack_a = 0x17b;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x183;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x188;
      FUN_32b2_7191();
      if ((bool)uVar11) {
        iStack_8 = 0x32b2;
        iStack_a = 0x192;
        FUN_32b2_6cc6();
        iStack_8 = 0x32b2;
        iStack_a = 0x19a;
        FUN_32b2_6cc6();
        iStack_8 = 0x32b2;
        iStack_a = 0x19f;
        FUN_32b2_7191();
        if ((bool)uVar11) {
          return 0;
        }
      }
      iStack_8 = unaff_BP + -0xa8;
      iStack_a = unaff_BP + -0x1c;
      uStack_c = *(undefined2 *)(unaff_BP + -0x7c);
      uStack_e = *(undefined2 *)(unaff_BP + -0x7e);
      uStack_10 = *(undefined2 *)(unaff_BP + -0x80);
      uStack_12 = *(undefined2 *)(unaff_BP + -0x82);
      uStack_14 = *(undefined2 *)(unaff_BP + -0x58);
      uStack_16 = *(undefined2 *)(unaff_BP + -0x5a);
      uStack_1a = *(undefined2 *)(unaff_BP + -0x5e);
      uStack_1e = 0x1d0;
      FUN_32b2_6cc6();
      uStack_1e = 0x1d5;
      FUN_32b2_7258();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1df;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1e7;
      FUN_32b2_6cc6();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1ec;
      FUN_32b2_7258();
      uStack_2c = 0x32b2;
      uStack_2e = 0x1f6;
      FUN_32b2_6eb1();
      uStack_2c = 0x32b2;
      uStack_2e = 0x1fa;
      iVar7 = func_0x0003fb3d();
      if (iVar7 == 0) break;
      iStack_8 = 0x32b2;
      iStack_a = 0x209;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x20e;
      FUN_32b2_7258();
      iStack_8 = 0x32b2;
      iStack_a = 0x216;
      FUN_32b2_6e99();
      iStack_8 = 0x32b2;
      iStack_a = 0x21e;
      FUN_32b2_6ef9();
      iStack_8 = unaff_BP + -0xb4;
      iStack_a = unaff_BP + -0xa4;
      uStack_c = 0x32b2;
      uStack_e = 0x231;
      FUN_32b2_6cc6();
      uStack_c = 0x32b2;
      uStack_e = 0x236;
      FUN_32b2_7258();
      uStack_14 = 0x32b2;
      uStack_16 = 0x240;
      FUN_32b2_6eb1();
      uStack_14 = 0x32b2;
      uStack_16 = 0x248;
      FUN_32b2_6cc6();
      uStack_14 = 0x32b2;
      uStack_16 = 0x24d;
      FUN_32b2_7258();
      uStack_1e = 599;
      FUN_32b2_6eb1();
      uStack_1e = 0x25f;
      FUN_32b2_6d14();
      uStack_24 = 0x32b2;
      uStack_26 = 0x269;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x271;
      FUN_32b2_6cc6();
      uStack_24 = 0x32b2;
      uStack_26 = 0x276;
      FUN_32b2_7258();
      uStack_24 = 0x32b2;
      uStack_26 = 0x27e;
      FUN_32b2_6e99();
      uStack_2c = 0x32b2;
      uStack_2e = 0x288;
      FUN_32b2_6eb1();
      uStack_2c = 0x32b2;
      uStack_2e = 0x290;
      FUN_32b2_6cc6();
      uStack_2c = 0x32b2;
      uStack_2e = 0x295;
      FUN_32b2_7258();
      uStack_34 = 0x32b2;
      uStack_36 = 0x29f;
      FUN_32b2_6eb1();
      uStack_34 = 0x32b2;
      uStack_36 = 0x2a7;
      FUN_32b2_6cc6();
      uStack_34 = 0x32b2;
      uStack_36 = 0x2ac;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      func_0x0003fc09(0x32b2,1);
      iStack_8 = unaff_BP + -0xe4;
      iStack_a = unaff_BP + -0xd0;
      uStack_c = 0x32b2;
      uStack_e = 0x2d4;
      FUN_32b2_6cc6();
      uStack_c = 0x32b2;
      uStack_e = 0x2d9;
      FUN_32b2_7258();
      uStack_14 = 0x32b2;
      uStack_16 = 0x2e3;
      FUN_32b2_6eb1();
      uStack_14 = 0x32b2;
      uStack_16 = 0x2eb;
      FUN_32b2_6cc6();
      uStack_14 = 0x32b2;
      uStack_16 = 0x2f0;
      FUN_32b2_7258();
      uStack_1e = 0x2fa;
      FUN_32b2_6eb1();
      uStack_1e = 0x302;
      FUN_32b2_6d14();
      uStack_24 = 0x32b2;
      uStack_26 = 0x30c;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x314;
      FUN_32b2_6d14();
      uStack_2c = 0x32b2;
      uStack_2e = 0x31e;
      FUN_32b2_6eb1();
      uStack_2c = 0x32b2;
      uStack_2e = 0x326;
      FUN_32b2_6cc6();
      uStack_2c = 0x32b2;
      uStack_2e = 0x32b;
      FUN_32b2_7258();
      uStack_34 = 0x32b2;
      uStack_36 = 0x335;
      FUN_32b2_6eb1();
      uStack_34 = 0x32b2;
      uStack_36 = 0x33d;
      FUN_32b2_6cc6();
      uStack_34 = 0x32b2;
      uStack_36 = 0x342;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      func_0x0003fc09(0x32b2,1);
      uVar11 = (undefined1 *)0xffc9 < &uStack_38;
      uVar12 = &stack0x0000 == (undefined1 *)0x2;
      iStack_6 = 0x360;
      FUN_32b2_6cc6();
      iStack_6 = 0x369;
      FUN_32b2_701d();
      iStack_6 = 0x36e;
      FUN_32b2_7258();
      iStack_6 = 0x376;
      FUN_32b2_6e99();
      iStack_6 = 0x37e;
      FUN_32b2_6ef9();
      iStack_6 = 0x387;
      FUN_32b2_6cc6();
      iStack_6 = 0x390;
      FUN_32b2_701d();
      iStack_6 = 0x395;
      FUN_32b2_7258();
      iStack_6 = 0x39e;
      FUN_32b2_6e99();
      iStack_6 = 0x3a6;
      FUN_32b2_6ef9();
      iStack_6 = 0x3af;
      FUN_32b2_6d14();
      iStack_6 = 0x3b4;
      FUN_32b2_6fc7();
      iStack_6 = 0x3bc;
      FUN_32b2_6d14();
      iStack_6 = 0x3c1;
      FUN_32b2_6fc7();
      iStack_6 = 0x3ca;
      FUN_32b2_710c();
      iStack_6 = 0x3cf;
      FUN_32b2_7191();
      if (!(bool)uVar11 && !(bool)uVar12) {
        iStack_6 = 0x3da;
        FUN_32b2_6d14();
        iStack_6 = 0x3e2;
        FUN_32b2_6d14();
        iStack_6 = 999;
        FUN_32b2_7191();
        if (!(bool)uVar12) {
          iStack_6 = 0x431;
          FUN_32b2_6d14();
          iStack_6 = 0x439;
          FUN_32b2_7124();
          iStack_6 = 0x441;
          FUN_32b2_6e99();
          iStack_6 = 0x44a;
          FUN_32b2_704d();
          iStack_6 = 0x453;
          FUN_32b2_7035();
          iStack_6 = 0x45c;
          FUN_32b2_6e99();
          iStack_6 = 0x464;
          FUN_32b2_6eb1();
          iStack_6 = 0x46c;
          FUN_32b2_6d14();
          iStack_6 = 0x474;
          FUN_32b2_710c();
          iStack_6 = 0x47c;
          FUN_32b2_710c();
          iStack_6 = 0x484;
          FUN_32b2_710c();
          iStack_6 = 0x48c;
          FUN_32b2_6d14();
          iStack_6 = 0x494;
          FUN_32b2_710c();
          iStack_6 = 0x49d;
          FUN_32b2_6e99();
          iStack_6 = 0x4a2;
          FUN_32b2_718c();
          iStack_6 = 0x4ab;
          FUN_32b2_6e99();
          iStack_6 = 0x4b3;
          FUN_32b2_6eb1();
          iStack_6 = 0x4bc;
          FUN_32b2_6d14();
          iStack_6 = 0x4c4;
          FUN_32b2_710c();
          iStack_6 = 0x4cd;
          FUN_32b2_710c();
          iStack_6 = 0x4d5;
          FUN_32b2_710c();
          iStack_6 = 0x4dd;
          FUN_32b2_710c();
          iStack_6 = 0x4e6;
          FUN_32b2_6e99();
          iStack_6 = 0x4ee;
          FUN_32b2_6eb1();
          iStack_6 = 0x4f7;
          FUN_32b2_6d14();
          iStack_6 = 0x500;
          FUN_32b2_710c();
          iStack_6 = 0x509;
          FUN_32b2_70dc();
          iStack_6 = 0x511;
          FUN_32b2_710c();
          iStack_6 = 0x519;
          FUN_32b2_710c();
          iStack_6 = 0x522;
          FUN_32b2_6e99();
          iStack_6 = 0x52b;
          FUN_32b2_6eb1();
          iStack_6 = 0x534;
          FUN_32b2_6d14();
          iStack_6 = 0x53d;
          FUN_32b2_710c();
          iStack_6 = 0x546;
          FUN_32b2_710c();
          iStack_6 = 0x54f;
          FUN_32b2_6d14();
          iStack_6 = 0x558;
          FUN_32b2_710c();
          iStack_6 = 0x55d;
          FUN_32b2_718c();
          iStack_6 = 0x566;
          FUN_32b2_6eb1();
          iStack_6 = 0x56f;
          FUN_32b2_6d14();
          iStack_6 = 0x574;
          FUN_32b2_6fd6();
          iStack_6 = 0x57d;
          FUN_32b2_6d14();
          iStack_6 = 0x586;
          FUN_32b2_710c();
          iStack_6 = 0x58b;
          FUN_32b2_7182();
          iStack_6 = 0x594;
          FUN_32b2_6e99();
          iStack_6 = 0x59c;
          FUN_32b2_710c();
          iStack_6 = 0x5a5;
          FUN_32b2_7154();
          iStack_6 = 0x5ae;
          FUN_32b2_6e99();
          iStack_6 = 0x5b7;
          FUN_32b2_6eb1();
          iStack_6 = 0x5c0;
          FUN_32b2_6d14();
          iStack_6 = 0x5c9;
          FUN_32b2_6eb1();
          iStack_6 = unaff_BP + -0x62;
          iStack_8 = 0x32b2;
          iStack_a = 0x5db;
          FUN_32b2_6cc6();
          iStack_8 = 0x32b2;
          iStack_a = 0x5e0;
          FUN_32b2_7258();
          uStack_10 = 0x32b2;
          uStack_12 = 0x5ea;
          FUN_32b2_6eb1();
          uStack_10 = 0x32b2;
          uStack_12 = 0x5f2;
          FUN_32b2_6cc6();
          uStack_10 = 0x32b2;
          uStack_12 = 0x5f7;
          FUN_32b2_7258();
          uStack_1a = 0x601;
          FUN_32b2_6eb1();
          uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_26 = *(undefined2 *)(unaff_BP + -0x4e);
          uStack_2a = 0x622;
          FUN_32b2_6d14();
          uStack_30 = 0x32b2;
          uStack_32 = 0x62c;
          FUN_32b2_6eb1();
          uStack_30 = 0x32b2;
          uStack_32 = 0x635;
          FUN_32b2_6d14();
          uStack_38 = 0x32b2;
          uStack_3a = 0x63f;
          FUN_32b2_6eb1();
          uStack_38 = 0;
          uStack_3a = 0x32b2;
          func_0x0003fc09();
          uVar9 = *(undefined2 *)(unaff_BP + -0x60);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)(unaff_BP + -0x84) = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x9c) = uVar9;
          iStack_6 = unaff_BP + -0x86;
          puVar8 = &uStack_26;
          puVar6 = (undefined2 *)(unaff_BP + 0x1c);
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar5 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar5;
          }
          uStack_2a = 0x684;
          iVar7 = FUN_3ab8_522f();
          uVar11 = 0;
          uVar12 = iVar7 == 0;
          if (!(bool)uVar12) {
            iStack_6 = 0x694;
            FUN_32b2_6d14();
            iStack_6 = 0x69d;
            FUN_32b2_6cc6();
            iStack_6 = 0x6a5;
            FUN_32b2_701d();
            iStack_6 = 0x6aa;
            FUN_32b2_6fc7();
            iStack_6 = 0x6af;
            FUN_32b2_7258();
            iStack_6 = 0x6b4;
            FUN_32b2_7191();
            if ((bool)uVar11 || (bool)uVar12) {
              iStack_6 = 0x6bf;
              FUN_32b2_6d14();
              iStack_6 = 0x6c8;
              FUN_32b2_6cc6();
              iStack_6 = 0x6d1;
              FUN_32b2_701d();
              iStack_6 = 0x6d6;
              FUN_32b2_6fc7();
              iStack_6 = 0x6db;
              FUN_32b2_7258();
              iStack_6 = 0x6e0;
              FUN_32b2_7191();
              if ((bool)uVar11 || (bool)uVar12) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
            }
          }
          iStack_6 = 0x6f8;
          FUN_32b2_6d14();
          iStack_6 = 0x700;
          FUN_32b2_6d14();
          iStack_6 = 0x708;
          FUN_32b2_710c();
          iStack_6 = 0x711;
          FUN_32b2_710c();
          iStack_6 = 0x71a;
          FUN_32b2_7154();
          iStack_6 = 0x71f;
          FUN_32b2_7191();
          if (!(bool)uVar11) {
            iStack_6 = 0x72d;
            FUN_32b2_6d14();
            iStack_6 = 0x732;
            FUN_32b2_6fc7();
            iStack_6 = 0x73a;
            FUN_32b2_6d14();
            iStack_6 = 0x742;
            FUN_32b2_710c();
            iStack_6 = 0x74b;
            FUN_32b2_710c();
            iStack_6 = 0x750;
            FUN_32b2_7191();
            if (!(bool)uVar11) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
            iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
            uStack_c = 0x32b2;
            uStack_e = 0x774;
            FUN_32b2_7592();
            iStack_6 = 0x32b2;
            iStack_8 = 0x77e;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x786;
            FUN_32b2_70dc();
            iStack_6 = 0x32b2;
            iStack_8 = 0x78e;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x797;
            FUN_32b2_710c();
            iStack_6 = 0x32b2;
            iStack_8 = 0x79c;
            FUN_32b2_7182();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7a5;
            FUN_32b2_6e99();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7ad;
            FUN_32b2_710c();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7b5;
            FUN_32b2_7154();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7be;
            FUN_32b2_6e99();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7c7;
            FUN_32b2_6eb1();
            iStack_6 = unaff_BP + -0x8a;
            iStack_8 = unaff_BP + -0x62;
            iStack_a = 0x32b2;
            uStack_c = 0x7d9;
            FUN_32b2_6cc6();
            iStack_a = 0x32b2;
            uStack_c = 0x7de;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            uStack_14 = 0x7e8;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            uStack_14 = 0x7f0;
            FUN_32b2_6cc6();
            uStack_12 = 0x32b2;
            uStack_14 = 0x7f5;
            FUN_32b2_7258();
            uStack_1a = 0x32b2;
            FUN_32b2_6eb1();
            uStack_1a = *(undefined2 *)(unaff_BP + -100);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_26 = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_2a = 0x32b2;
            uStack_2c = 0x820;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x82a;
            FUN_32b2_6eb1();
            uStack_32 = 0x32b2;
            uStack_34 = 0x833;
            FUN_32b2_6d14();
            uStack_3a = 0x32b2;
            FUN_32b2_6eb1();
            uStack_3a = 0;
            func_0x0003fc09(0x32b2);
            uVar11 = (undefined1 *)0xffc9 < &uStack_3a;
            uVar12 = &stack0x0000 == (undefined1 *)0x4;
            iStack_6 = 0x32b2;
            iStack_8 = 0x84f;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x857;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x85c;
            FUN_32b2_7191();
            if ((bool)uVar12) {
              uVar9 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar9;
            }
            iStack_6 = 0x32b2;
            iStack_8 = 0x872;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x87a;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x87f;
            FUN_32b2_7191();
            if ((bool)uVar12) {
              uVar9 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar9;
            }
            uVar9 = *(undefined2 *)(unaff_BP + -0x60);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
            puVar6[1] = uVar9;
            uVar9 = *(undefined2 *)(unaff_BP + -0x88);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar6[1] = uVar9;
            uVar9 = *(undefined2 *)(unaff_BP + -0x60);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
            puVar6[1] = uVar9;
            uVar9 = *(undefined2 *)(unaff_BP + -0x88);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar6[1] = uVar9;
            piVar1 = (int *)(unaff_BP + -0x36);
            *piVar1 = *piVar1 + 1;
            uVar12 = *piVar1 == 0;
            iStack_6 = 0x32b2;
            iStack_8 = 0x8d7;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x8e0;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x8e5;
            FUN_32b2_7191();
            if (!(bool)uVar11 && !(bool)uVar12) {
              iStack_6 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_a = *(undefined2 *)(unaff_BP + -0xba);
              uStack_c = *(undefined2 *)(unaff_BP + -0xbc);
              uStack_e = 0x32b2;
              uStack_10 = 0x8ff;
              FUN_32b2_7592();
              iStack_8 = 0x32b2;
              iStack_a = 0x909;
              FUN_32b2_6d14();
              iStack_8 = 0x32b2;
              iStack_a = 0x911;
              FUN_32b2_7154();
              iStack_8 = 0x32b2;
              iStack_a = 0x916;
              FUN_32b2_6fd6();
              iStack_8 = 0x32b2;
              iStack_a = 0x91e;
              FUN_32b2_6d14();
              iStack_8 = 0x32b2;
              iStack_a = 0x927;
              FUN_32b2_710c();
              iStack_8 = 0x32b2;
              iStack_a = 0x92c;
              FUN_32b2_7182();
              iStack_8 = 0x32b2;
              iStack_a = 0x935;
              FUN_32b2_6e99();
              iStack_8 = 0x32b2;
              iStack_a = 0x93d;
              FUN_32b2_710c();
              iStack_8 = 0x32b2;
              iStack_a = 0x945;
              FUN_32b2_7154();
              iStack_8 = 0x32b2;
              iStack_a = 0x94e;
              FUN_32b2_6e99();
              iStack_8 = 0x32b2;
              iStack_a = 0x957;
              FUN_32b2_6eb1();
              iStack_8 = unaff_BP + -0x8a;
              iStack_a = unaff_BP + -0x62;
              uStack_c = 0x32b2;
              uStack_e = 0x969;
              FUN_32b2_6cc6();
              uStack_c = 0x32b2;
              uStack_e = 0x96e;
              FUN_32b2_7258();
              uStack_14 = 0x32b2;
              uStack_16 = 0x978;
              FUN_32b2_6eb1();
              uStack_14 = 0x32b2;
              uStack_16 = 0x980;
              FUN_32b2_6cc6();
              uStack_14 = 0x32b2;
              uStack_16 = 0x985;
              FUN_32b2_7258();
              uStack_1e = 0x98f;
              FUN_32b2_6eb1();
              uStack_1e = *(undefined2 *)(unaff_BP + -0x66);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x68);
              uStack_22 = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_24 = *(undefined2 *)(unaff_BP + -0x48);
              uStack_26 = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_2a = *(undefined2 *)(unaff_BP + -0x4e);
              uStack_2c = 0x32b2;
              uStack_2e = 0x9b0;
              FUN_32b2_6d14();
              uStack_34 = 0x32b2;
              uStack_36 = 0x9ba;
              FUN_32b2_6eb1();
              uStack_34 = 0x32b2;
              uStack_36 = 0x9c3;
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              func_0x0003fc09(0x32b2,0);
              uVar11 = &stack0x0000 == (undefined1 *)0x6;
              iStack_8 = 0x32b2;
              iStack_a = 0x9df;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0x9e7;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0x9ec;
              FUN_32b2_7191();
              if ((bool)uVar11) {
                uVar9 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar9;
              }
              iStack_8 = 0x32b2;
              iStack_a = 0xa02;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0xa0a;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0xa0f;
              FUN_32b2_7191();
              if ((bool)uVar11) {
                uVar9 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar9;
              }
              uVar9 = *(undefined2 *)(unaff_BP + -0x60);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x62);
              puVar6[1] = uVar9;
              uVar9 = *(undefined2 *)(unaff_BP + -0x88);
              puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar6 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar6[1] = uVar9;
              *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
            }
            return *(undefined2 *)(unaff_BP + -0x36);
          }
        }
        return 0;
      }
      iStack_6 = 0x3f5;
      FUN_32b2_6d14();
      iStack_6 = 0x32b2;
      iStack_8 = 0x3ff;
      FUN_32b2_7154();
      iStack_6 = 0x405;
      FUN_32b2_6eb1();
      *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -8);
      *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -6);
      *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -4);
      *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -2);
      *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x10);
      *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0xe);
      *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xc);
      *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -10);
      *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x46);
      *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x44);
      *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x42);
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
    }
    return 0;
  }
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x22b2;
  uStack_c = 0xffcb;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xffd5;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xffdd;
  puVar6 = (undefined2 *)FUN_1def_05d1();
  uVar9 = puVar6[1];
  *(undefined2 *)(unaff_BP + -0x962) = *puVar6;
  *(undefined2 *)(unaff_BP + -0x960) = uVar9;
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x1bb4;
  uStack_c = 8;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0x12;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0x1a;
  puVar6 = (undefined2 *)func_0x0001e558();
  uVar9 = puVar6[1];
  *(undefined2 *)(unaff_BP + -0x95e) = *puVar6;
  *(undefined2 *)(unaff_BP + -0x95c) = uVar9;
  puVar8 = &uStack_16;
  puVar6 = (undefined2 *)(unaff_BP + -0x96a);
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    puVar5 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar5;
  }
  uStack_1a = 0x41;
  iVar7 = FUN_17a6_0cba();
  if (0 < iVar7) {
    *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
  }
  puVar6 = (undefined2 *)(unaff_BP + -0x96a);
  puVar8 = (undefined2 *)(unaff_BP + -0x496);
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar5;
  }
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x11f2;
  uStack_c = 0x74;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0x7e;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0x86;
  puVar6 = (undefined2 *)FUN_1def_05d1();
  uVar9 = puVar6[1];
  *(undefined2 *)(unaff_BP + -0x96a) = *puVar6;
  *(undefined2 *)(unaff_BP + -0x968) = uVar9;
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x1bb4;
  uStack_c = 0xb1;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xbb;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xc3;
  puVar6 = (undefined2 *)func_0x0001e558();
  uVar9 = puVar6[1];
  *(undefined2 *)(unaff_BP + -0x966) = *puVar6;
  *(undefined2 *)(unaff_BP + -0x964) = uVar9;
  if (*(int *)(unaff_BP + -0xa7a) != 0) {
    puVar8 = &uStack_16;
    puVar6 = (undefined2 *)(unaff_BP + -0x96a);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar5;
    }
    uStack_1a = 0xf1;
    iVar7 = FUN_17a6_0cba();
    if (0 < iVar7) {
      *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
    }
  }
  while (*(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1,
        *(int *)(unaff_BP + -0xa26) <= *(int *)(unaff_BP + -0x916)) {
    puVar8 = (undefined2 *)(unaff_BP + -0x496);
    puVar6 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar5;
    }
    puVar6 = (undefined2 *)(unaff_BP + -0x96a);
    puVar8 = (undefined2 *)(unaff_BP + -0x496);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar5;
    }
    if ((*(byte *)(unaff_BP + -0x481) & 2) != 0) {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x151;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x15a;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x15f;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x169;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0x172;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x177;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x199;
      func_0x000299d1();
      uStack_22 = 0x22b2;
      uStack_24 = 0x19e;
      FUN_1def_043a();
      uVar9 = *(undefined2 *)0x9984;
      uVar10 = *(undefined2 *)0x9986;
      *(undefined2 *)(unaff_BP + -0xaa0) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa9e) = uVar10;
      *(undefined2 *)(unaff_BP + -0xa98) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa96) = uVar10;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x1d0;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x1d9;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x1de;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x1e8;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0x1f1;
      puVar6 = (undefined2 *)FUN_1def_05d1();
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      *(undefined2 *)(unaff_BP + -0xa9c) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa9a) = uVar10;
      *(undefined2 *)(unaff_BP + -0xaa4) = uVar9;
      *(undefined2 *)(unaff_BP + -0xaa2) = uVar10;
      *(undefined2 *)(unaff_BP + -0xa7a) = 1;
      *(undefined2 *)(unaff_BP + -0xa18) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined2 *)(unaff_BP + -0xa26) = 1;
  while (*(int *)(unaff_BP + -0xa26) <= *(int *)(unaff_BP + -0x916)) {
    *(undefined2 *)(unaff_BP + -0xa78) = 0;
    puVar8 = (undefined2 *)(unaff_BP + -0x496);
    puVar6 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar5;
    }
    puVar6 = (undefined2 *)(unaff_BP + -0x96a);
    puVar8 = (undefined2 *)(unaff_BP + -0x496);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar5;
    }
    if ((*(byte *)(unaff_BP + -0x481) & 4) != 0) {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x6ed;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x6f6;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x6fb;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x705;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0x70e;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x713;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x735;
      func_0x000299d1();
      uStack_22 = 0x22b2;
      uStack_24 = 0x73a;
      FUN_1def_043a();
      uVar9 = *(undefined2 *)0x9986;
      *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)0x9984;
      *(undefined2 *)(unaff_BP + -0xa9e) = uVar9;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x764;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x76d;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x772;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x77c;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0x785;
      puVar6 = (undefined2 *)FUN_1def_05d1();
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      *(undefined2 *)(unaff_BP + -0xa9c) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa9a) = uVar10;
      *(undefined2 *)(unaff_BP + -0xaa8) = uVar9;
      *(undefined2 *)(unaff_BP + -0xaa6) = uVar10;
      *(undefined2 *)(unaff_BP + -0xa18) = 1;
      while (uVar11 = *(uint *)(unaff_BP + -0xa18) < *(uint *)(unaff_BP + -0x914),
            (int)*(uint *)(unaff_BP + -0xa18) <= (int)*(uint *)(unaff_BP + -0x914)) {
        if (*(int *)(unaff_BP + -0xa26) != *(int *)(unaff_BP + -0xa18)) {
          puVar8 = (undefined2 *)(unaff_BP + -0x948);
          puVar6 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa18) * 0x16 + -0x906);
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar5 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar5;
          }
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x329;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x332;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x337;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x341;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x34a;
          puVar6 = (undefined2 *)func_0x0001e558();
          uVar9 = puVar6[1];
          *(undefined2 *)(unaff_BP + -0xa90) = *puVar6;
          *(undefined2 *)(unaff_BP + -0xa8e) = uVar9;
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x374;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x37d;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x382;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x38c;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x395;
          puVar6 = (undefined2 *)func_0x0001e558();
          uVar9 = puVar6[1];
          *(undefined2 *)(unaff_BP + -0xa94) = *puVar6;
          *(undefined2 *)(unaff_BP + -0xa92) = uVar9;
          uVar3 = *(uint *)(unaff_BP + -0x914);
          uVar11 = uVar3 < 3;
          uVar12 = uVar3 == 3;
          if ((int)uVar3 < 4) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar11 || (bool)uVar12) {
LAB_3ab8_56de:
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar11) goto LAB_3ab8_5700;
            }
            else {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar11 || (bool)uVar12) goto LAB_3ab8_56de;
LAB_3ab8_571a:
              if (*(int *)(unaff_BP + -0x952) == 0) goto LAB_3ab8_575e;
              *(undefined2 *)(unaff_BP + -0xa78) = 1;
            }
          }
          else {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if (!(bool)uVar11 && !(bool)uVar12) {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if (!(bool)uVar11 && !(bool)uVar12) goto LAB_3ab8_571a;
            }
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar11) {
LAB_3ab8_5700:
              uVar11 = 1;
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar11) goto LAB_3ab8_571a;
            }
          }
          puVar8 = &uStack_1a;
          puVar6 = (undefined2 *)(unaff_BP + -0x948);
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar5 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar5;
          }
          puVar8 = &uStack_30;
          puVar6 = (undefined2 *)(unaff_BP + -0x496);
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar5 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar5;
          }
          uStack_32 = 0x22b2;
          uStack_34 = 0x2d4;
          iVar7 = FUN_1def_1921();
          if (iVar7 != 0) {
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0x430;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0x439;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0x43e;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0x448;
            func_0x000299d1();
            uStack_12 = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0x451;
            puVar6 = (undefined2 *)FUN_1def_05d1();
            uVar9 = puVar6[1];
            *(undefined2 *)(unaff_BP + -0xa80) = *puVar6;
            *(undefined2 *)(unaff_BP + -0xa7e) = uVar9;
            uVar12 = 0;
            uVar13 = *(int *)(unaff_BP + -0x952) == 0;
            uVar11 = uVar12;
            if ((bool)uVar13) {
LAB_3ab8_591f:
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar11) {
                uVar9 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9a) = uVar9;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar11 && !(bool)uVar13) {
                uVar9 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9e) = uVar9;
              }
            }
            else {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar12 && !(bool)uVar13) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                uVar11 = 1;
                if ((bool)uVar12) goto LAB_3ab8_591f;
              }
            }
          }
        }
LAB_3ab8_575e:
        *(int *)(unaff_BP + -0xa18) = *(int *)(unaff_BP + -0xa18) + 1;
      }
      func_0x000297e6();
      func_0x00029d78();
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029bfc();
      uVar9 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar11) {
        if (*(int *)(unaff_BP + -0xa78) != 0) {
          *(undefined2 *)0xc22 = 1;
          iStack_6 = 2;
          iStack_8 = 0x11;
          iStack_a = unaff_BP + -0x10;
          uStack_c = 0x22b2;
          uVar9 = 0xdef;
          uStack_e = 0x54c;
          FUN_1000_02b5();
        }
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        uStack_c = 0x568;
        iStack_a = uVar9;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x572;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x57a;
        puVar6 = (undefined2 *)FUN_1def_05d1();
        uVar9 = puVar6[1];
        *(undefined2 *)(unaff_BP + -0x962) = *puVar6;
        *(undefined2 *)(unaff_BP + -0x960) = uVar9;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0x5a5;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x5af;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x5b7;
        puVar6 = (undefined2 *)func_0x0001e558();
        uVar9 = puVar6[1];
        *(undefined2 *)(unaff_BP + -0x95e) = *puVar6;
        *(undefined2 *)(unaff_BP + -0x95c) = uVar9;
        puVar8 = &uStack_16;
        puVar6 = (undefined2 *)(unaff_BP + -0x96a);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar5 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar5;
        }
        uStack_1a = 0x5de;
        iVar7 = FUN_17a6_0cba();
        if (0 < iVar7) {
          *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
        }
        puVar6 = (undefined2 *)(unaff_BP + -0x96a);
        puVar8 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar5;
        }
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x11f2;
        uStack_c = 0x611;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x61b;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x623;
        puVar6 = (undefined2 *)FUN_1def_05d1();
        uVar9 = puVar6[1];
        *(undefined2 *)(unaff_BP + -0x96a) = *puVar6;
        *(undefined2 *)(unaff_BP + -0x968) = uVar9;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0x64e;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x658;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x660;
        puVar6 = (undefined2 *)func_0x0001e558();
        uVar9 = puVar6[1];
        *(undefined2 *)(unaff_BP + -0x966) = *puVar6;
        *(undefined2 *)(unaff_BP + -0x964) = uVar9;
      }
      puVar8 = &uStack_16;
      puVar6 = (undefined2 *)(unaff_BP + -0x96a);
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar5;
      }
      uStack_1a = 0x687;
      iVar7 = FUN_17a6_0cba();
      if (0 < iVar7) {
        *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
      }
    }
    *(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1;
  }
  *(undefined2 *)(unaff_BP + -0xa26) = 1;
  do {
    if (*(int *)(unaff_BP + -0x916) < *(int *)(unaff_BP + -0xa26)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar8 = (undefined2 *)(unaff_BP + -0x496);
    puVar6 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar5;
    }
    puVar6 = (undefined2 *)(unaff_BP + -0x96a);
    puVar8 = (undefined2 *)(unaff_BP + -0x496);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar5;
    }
    if (((*(byte *)(unaff_BP + -0x481) & 2) == 0) && ((*(byte *)(unaff_BP + -0x481) & 4) == 0)) {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x7c9;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x7d2;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x7d7;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x7e1;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0x7ea;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x7ef;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x811;
      func_0x000299d1();
      uStack_22 = 0x22b2;
      uStack_24 = 0x816;
      FUN_1def_043a();
      uVar9 = *(undefined2 *)0x9984;
      uVar10 = *(undefined2 *)0x9986;
      *(undefined2 *)(unaff_BP + -0xaa0) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa9e) = uVar10;
      *(undefined2 *)(unaff_BP + -0xa98) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa96) = uVar10;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x848;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x851;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x856;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x860;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0x869;
      puVar6 = (undefined2 *)FUN_1def_05d1();
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      *(undefined2 *)(unaff_BP + -0xa9c) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa9a) = uVar10;
      *(undefined2 *)(unaff_BP + -0xaa4) = uVar9;
      *(undefined2 *)(unaff_BP + -0xaa2) = uVar10;
      *(undefined2 *)(unaff_BP + -0xa7c) = 1;
      *(undefined2 *)(unaff_BP + -0xa7a) = 1;
      *(undefined2 *)(unaff_BP + -0xa18) = 1;
      while (uVar11 = *(uint *)(unaff_BP + -0xa18) < *(uint *)(unaff_BP + -0x914),
            (int)*(uint *)(unaff_BP + -0xa18) <= (int)*(uint *)(unaff_BP + -0x914)) {
        if (*(int *)(unaff_BP + -0xa26) != *(int *)(unaff_BP + -0xa18)) {
          puVar8 = (undefined2 *)(unaff_BP + -0x948);
          puVar6 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa18) * 0x16 + -0x906);
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar5 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar5;
          }
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x916;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x91f;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x924;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x92e;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x937;
          puVar6 = (undefined2 *)func_0x0001e558();
          uVar9 = puVar6[1];
          *(undefined2 *)(unaff_BP + -0xa90) = *puVar6;
          *(undefined2 *)(unaff_BP + -0xa8e) = uVar9;
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x961;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x96a;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x96f;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x979;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x982;
          puVar6 = (undefined2 *)func_0x0001e558();
          uVar11 = (undefined1 *)0xffed < &uStack_12;
          uVar12 = &stack0x0000 == (undefined1 *)0x0;
          uVar9 = puVar6[1];
          *(undefined2 *)(unaff_BP + -0xa94) = *puVar6;
          *(undefined2 *)(unaff_BP + -0xa92) = uVar9;
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if (!(bool)uVar11 && !(bool)uVar12) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if (!(bool)uVar11 && !(bool)uVar12) goto LAB_3ab8_5d4b;
          }
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if ((bool)uVar11) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar11) goto LAB_3ab8_5d4b;
          }
          puVar8 = &uStack_1a;
          puVar6 = (undefined2 *)(unaff_BP + -0x948);
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar5 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar5;
          }
          puVar8 = &uStack_30;
          puVar6 = (undefined2 *)(unaff_BP + -0x496);
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar5 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar5;
          }
          uStack_32 = 0x22b2;
          uStack_34 = 0x8c1;
          iVar7 = FUN_1def_1921();
          if (iVar7 != 0) {
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0xa2d;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0xa36;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0xa3b;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0xa45;
            func_0x000299d1();
            uStack_12 = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0xa4e;
            puVar6 = (undefined2 *)FUN_1def_05d1();
            uVar11 = (undefined1 *)0xffed < &uStack_12;
            uVar12 = &stack0x0000 == (undefined1 *)0x0;
            uVar9 = puVar6[1];
            *(undefined2 *)(unaff_BP + -0xa80) = *puVar6;
            *(undefined2 *)(unaff_BP + -0xa7e) = uVar9;
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029bfc();
            FUN_28b3_1181();
            if ((bool)uVar11 || (bool)uVar12) {
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029c74();
              FUN_28b3_1181();
              if (!(bool)uVar11) {
                *(undefined2 *)(unaff_BP + -0xa7c) = 0;
              }
            }
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029bfc();
            FUN_28b3_1181();
            if ((bool)uVar11 || (bool)uVar12) {
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029c74();
              FUN_28b3_1181();
              if (!(bool)uVar11) {
                *(undefined2 *)(unaff_BP + -0xa7a) = 0;
              }
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar11) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c74();
              FUN_28b3_1181();
              if ((bool)uVar11) {
                uVar9 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9a) = uVar9;
              }
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar11 && !(bool)uVar12) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029bfc();
              FUN_28b3_1181();
              if (!(bool)uVar11 && !(bool)uVar12) {
                uVar9 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9e) = uVar9;
              }
            }
          }
        }
LAB_3ab8_5d4b:
        *(int *)(unaff_BP + -0xa18) = *(int *)(unaff_BP + -0xa18) + 1;
      }
      func_0x000297e6();
      func_0x00029d78();
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c74();
      FUN_28b3_1181();
      if (!(bool)uVar11) {
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x22b2;
        uStack_c = 0xbef;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbf9;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0xc01;
        puVar6 = (undefined2 *)FUN_1def_05d1();
        uVar9 = puVar6[1];
        *(undefined2 *)(unaff_BP + -0x962) = *puVar6;
        *(undefined2 *)(unaff_BP + -0x960) = uVar9;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0xc2c;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xc36;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uVar10 = 0x1bb4;
        uStack_16 = 0xc3e;
        puVar6 = (undefined2 *)func_0x0001e558();
        uVar9 = puVar6[1];
        *(undefined2 *)(unaff_BP + -0x95e) = *puVar6;
        *(undefined2 *)(unaff_BP + -0x95c) = uVar9;
        if (*(int *)(unaff_BP + -0xa7c) != 0) {
          puVar8 = &uStack_16;
          puVar6 = (undefined2 *)(unaff_BP + -0x96a);
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar5 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar5;
          }
          uVar10 = 0x11f2;
          uStack_1a = 0xc6c;
          iVar7 = FUN_17a6_0cba();
          if (0 < iVar7) {
            *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
          }
        }
        puVar6 = (undefined2 *)(unaff_BP + -0x96a);
        puVar8 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar5;
        }
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        uStack_c = 0xc9f;
        iStack_a = uVar10;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xca9;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0xcb1;
        puVar6 = (undefined2 *)FUN_1def_05d1();
        uVar9 = puVar6[1];
        *(undefined2 *)(unaff_BP + -0x96a) = *puVar6;
        *(undefined2 *)(unaff_BP + -0x968) = uVar9;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0xcdc;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xce6;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0xcee;
        puVar6 = (undefined2 *)func_0x0001e558();
        uVar9 = puVar6[1];
        *(undefined2 *)(unaff_BP + -0x966) = *puVar6;
        *(undefined2 *)(unaff_BP + -0x964) = uVar9;
        if (*(int *)(unaff_BP + -0xa7a) == 0) goto LAB_3ab8_61a7;
      }
      puVar8 = &uStack_16;
      puVar6 = (undefined2 *)(unaff_BP + -0x96a);
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar5;
      }
      uStack_1a = 0xd1c;
      iVar7 = FUN_17a6_0cba();
      if (0 < iVar7) {
        *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
      }
    }
LAB_3ab8_61a7:
    *(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1;
  } while( true );
}



/* 3ab8:517f  thunk_FUN_3ab8_5403  3 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far thunk_FUN_3ab8_5403(void)

{
  int *piVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int unaff_BP;
  int unaff_SI;
  undefined2 *puVar7;
  int unaff_DI;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 in_ZF;
  undefined1 uVar12;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  func_0x000297e6();
  func_0x00029d78();
  func_0x000297e6();
  func_0x00029d78();
  iVar6 = -0x6654;
  func_0x00029bfc();
  FUN_28b3_1181();
  if ((bool)in_CF || (bool)in_ZF) {
    piVar1 = (int *)(iVar6 + unaff_DI + 0x1486);
    *piVar1 = *piVar1 + -1;
    *(int *)(unaff_DI + 0x149e) = *(int *)(unaff_DI + 0x149e) + -1;
    puVar4 = (undefined2 *)(unaff_BP + unaff_SI + 0x7285);
    iStack_6 = 0xe9;
    (*(code *)*puVar4)();
    iStack_6 = 0xf3;
    FUN_32b2_704d();
    iStack_6 = 0xfc;
    FUN_32b2_710c();
    iStack_6 = 0x104;
    FUN_32b2_6eb1();
    while( true ) {
      iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
      iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
      uStack_c = 0x32b2;
      uStack_e = 0x119;
      FUN_32b2_75fe();
      iStack_6 = 0x32b2;
      iStack_8 = 0x123;
      FUN_32b2_6d14();
      iStack_6 = 0x32b2;
      iStack_8 = 299;
      FUN_32b2_704d();
      iStack_6 = 0x32b2;
      iStack_8 = 0x133;
      FUN_32b2_7095();
      iStack_6 = 0x32b2;
      iStack_8 = 0x13b;
      FUN_32b2_6eb1();
      iStack_6 = *(undefined2 *)(unaff_BP + -0xb6);
      iStack_8 = *(undefined2 *)(unaff_BP + -0xb8);
      iStack_a = *(undefined2 *)(unaff_BP + -0xba);
      uStack_c = *(undefined2 *)(unaff_BP + -0xbc);
      uStack_e = 0x32b2;
      uStack_10 = 0x150;
      FUN_32b2_75ec();
      uVar10 = &stack0x0000 == (undefined1 *)0x6;
      iStack_8 = 0x32b2;
      iStack_a = 0x15a;
      FUN_32b2_6d14();
      iStack_8 = 0x32b2;
      iStack_a = 0x162;
      FUN_32b2_704d();
      iStack_8 = 0x32b2;
      iStack_a = 0x16a;
      FUN_32b2_7095();
      iStack_8 = 0x32b2;
      iStack_a = 0x173;
      FUN_32b2_6eb1();
      iStack_8 = 0x32b2;
      iStack_a = 0x17b;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x183;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x188;
      FUN_32b2_7191();
      if ((bool)uVar10) {
        iStack_8 = 0x32b2;
        iStack_a = 0x192;
        FUN_32b2_6cc6();
        iStack_8 = 0x32b2;
        iStack_a = 0x19a;
        FUN_32b2_6cc6();
        iStack_8 = 0x32b2;
        iStack_a = 0x19f;
        FUN_32b2_7191();
        if ((bool)uVar10) {
          return 0;
        }
      }
      iStack_8 = unaff_BP + -0xa8;
      iStack_a = unaff_BP + -0x1c;
      uStack_c = *(undefined2 *)(unaff_BP + -0x7c);
      uStack_e = *(undefined2 *)(unaff_BP + -0x7e);
      uStack_10 = *(undefined2 *)(unaff_BP + -0x80);
      uStack_12 = *(undefined2 *)(unaff_BP + -0x82);
      uStack_14 = *(undefined2 *)(unaff_BP + -0x58);
      uStack_16 = *(undefined2 *)(unaff_BP + -0x5a);
      uStack_1a = *(undefined2 *)(unaff_BP + -0x5e);
      uStack_1e = 0x1d0;
      FUN_32b2_6cc6();
      uStack_1e = 0x1d5;
      FUN_32b2_7258();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1df;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1e7;
      FUN_32b2_6cc6();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1ec;
      FUN_32b2_7258();
      uStack_2c = 0x32b2;
      uStack_2e = 0x1f6;
      FUN_32b2_6eb1();
      uStack_2c = 0x32b2;
      uStack_2e = 0x1fa;
      iVar6 = func_0x0003fb3d();
      if (iVar6 == 0) break;
      iStack_8 = 0x32b2;
      iStack_a = 0x209;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x20e;
      FUN_32b2_7258();
      iStack_8 = 0x32b2;
      iStack_a = 0x216;
      FUN_32b2_6e99();
      iStack_8 = 0x32b2;
      iStack_a = 0x21e;
      FUN_32b2_6ef9();
      iStack_8 = unaff_BP + -0xb4;
      iStack_a = unaff_BP + -0xa4;
      uStack_c = 0x32b2;
      uStack_e = 0x231;
      FUN_32b2_6cc6();
      uStack_c = 0x32b2;
      uStack_e = 0x236;
      FUN_32b2_7258();
      uStack_14 = 0x32b2;
      uStack_16 = 0x240;
      FUN_32b2_6eb1();
      uStack_14 = 0x32b2;
      uStack_16 = 0x248;
      FUN_32b2_6cc6();
      uStack_14 = 0x32b2;
      uStack_16 = 0x24d;
      FUN_32b2_7258();
      uStack_1e = 599;
      FUN_32b2_6eb1();
      uStack_1e = 0x25f;
      FUN_32b2_6d14();
      uStack_24 = 0x32b2;
      uStack_26 = 0x269;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x271;
      FUN_32b2_6cc6();
      uStack_24 = 0x32b2;
      uStack_26 = 0x276;
      FUN_32b2_7258();
      uStack_24 = 0x32b2;
      uStack_26 = 0x27e;
      FUN_32b2_6e99();
      uStack_2c = 0x32b2;
      uStack_2e = 0x288;
      FUN_32b2_6eb1();
      uStack_2c = 0x32b2;
      uStack_2e = 0x290;
      FUN_32b2_6cc6();
      uStack_2c = 0x32b2;
      uStack_2e = 0x295;
      FUN_32b2_7258();
      uStack_34 = 0x32b2;
      uStack_36 = 0x29f;
      FUN_32b2_6eb1();
      uStack_34 = 0x32b2;
      uStack_36 = 0x2a7;
      FUN_32b2_6cc6();
      uStack_34 = 0x32b2;
      uStack_36 = 0x2ac;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      func_0x0003fc09(0x32b2,1);
      iStack_8 = unaff_BP + -0xe4;
      iStack_a = unaff_BP + -0xd0;
      uStack_c = 0x32b2;
      uStack_e = 0x2d4;
      FUN_32b2_6cc6();
      uStack_c = 0x32b2;
      uStack_e = 0x2d9;
      FUN_32b2_7258();
      uStack_14 = 0x32b2;
      uStack_16 = 0x2e3;
      FUN_32b2_6eb1();
      uStack_14 = 0x32b2;
      uStack_16 = 0x2eb;
      FUN_32b2_6cc6();
      uStack_14 = 0x32b2;
      uStack_16 = 0x2f0;
      FUN_32b2_7258();
      uStack_1e = 0x2fa;
      FUN_32b2_6eb1();
      uStack_1e = 0x302;
      FUN_32b2_6d14();
      uStack_24 = 0x32b2;
      uStack_26 = 0x30c;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x314;
      FUN_32b2_6d14();
      uStack_2c = 0x32b2;
      uStack_2e = 0x31e;
      FUN_32b2_6eb1();
      uStack_2c = 0x32b2;
      uStack_2e = 0x326;
      FUN_32b2_6cc6();
      uStack_2c = 0x32b2;
      uStack_2e = 0x32b;
      FUN_32b2_7258();
      uStack_34 = 0x32b2;
      uStack_36 = 0x335;
      FUN_32b2_6eb1();
      uStack_34 = 0x32b2;
      uStack_36 = 0x33d;
      FUN_32b2_6cc6();
      uStack_34 = 0x32b2;
      uStack_36 = 0x342;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      func_0x0003fc09(0x32b2,1);
      uVar10 = (undefined1 *)0xffc9 < &uStack_38;
      uVar11 = &stack0x0000 == (undefined1 *)0x2;
      iStack_6 = 0x360;
      FUN_32b2_6cc6();
      iStack_6 = 0x369;
      FUN_32b2_701d();
      iStack_6 = 0x36e;
      FUN_32b2_7258();
      iStack_6 = 0x376;
      FUN_32b2_6e99();
      iStack_6 = 0x37e;
      FUN_32b2_6ef9();
      iStack_6 = 0x387;
      FUN_32b2_6cc6();
      iStack_6 = 0x390;
      FUN_32b2_701d();
      iStack_6 = 0x395;
      FUN_32b2_7258();
      iStack_6 = 0x39e;
      FUN_32b2_6e99();
      iStack_6 = 0x3a6;
      FUN_32b2_6ef9();
      iStack_6 = 0x3af;
      FUN_32b2_6d14();
      iStack_6 = 0x3b4;
      FUN_32b2_6fc7();
      iStack_6 = 0x3bc;
      FUN_32b2_6d14();
      iStack_6 = 0x3c1;
      FUN_32b2_6fc7();
      iStack_6 = 0x3ca;
      FUN_32b2_710c();
      iStack_6 = 0x3cf;
      FUN_32b2_7191();
      if (!(bool)uVar10 && !(bool)uVar11) {
        iStack_6 = 0x3da;
        FUN_32b2_6d14();
        iStack_6 = 0x3e2;
        FUN_32b2_6d14();
        iStack_6 = 999;
        FUN_32b2_7191();
        if (!(bool)uVar11) {
          iStack_6 = 0x431;
          FUN_32b2_6d14();
          iStack_6 = 0x439;
          FUN_32b2_7124();
          iStack_6 = 0x441;
          FUN_32b2_6e99();
          iStack_6 = 0x44a;
          FUN_32b2_704d();
          iStack_6 = 0x453;
          FUN_32b2_7035();
          iStack_6 = 0x45c;
          FUN_32b2_6e99();
          iStack_6 = 0x464;
          FUN_32b2_6eb1();
          iStack_6 = 0x46c;
          FUN_32b2_6d14();
          iStack_6 = 0x474;
          FUN_32b2_710c();
          iStack_6 = 0x47c;
          FUN_32b2_710c();
          iStack_6 = 0x484;
          FUN_32b2_710c();
          iStack_6 = 0x48c;
          FUN_32b2_6d14();
          iStack_6 = 0x494;
          FUN_32b2_710c();
          iStack_6 = 0x49d;
          FUN_32b2_6e99();
          iStack_6 = 0x4a2;
          FUN_32b2_718c();
          iStack_6 = 0x4ab;
          FUN_32b2_6e99();
          iStack_6 = 0x4b3;
          FUN_32b2_6eb1();
          iStack_6 = 0x4bc;
          FUN_32b2_6d14();
          iStack_6 = 0x4c4;
          FUN_32b2_710c();
          iStack_6 = 0x4cd;
          FUN_32b2_710c();
          iStack_6 = 0x4d5;
          FUN_32b2_710c();
          iStack_6 = 0x4dd;
          FUN_32b2_710c();
          iStack_6 = 0x4e6;
          FUN_32b2_6e99();
          iStack_6 = 0x4ee;
          FUN_32b2_6eb1();
          iStack_6 = 0x4f7;
          FUN_32b2_6d14();
          iStack_6 = 0x500;
          FUN_32b2_710c();
          iStack_6 = 0x509;
          FUN_32b2_70dc();
          iStack_6 = 0x511;
          FUN_32b2_710c();
          iStack_6 = 0x519;
          FUN_32b2_710c();
          iStack_6 = 0x522;
          FUN_32b2_6e99();
          iStack_6 = 0x52b;
          FUN_32b2_6eb1();
          iStack_6 = 0x534;
          FUN_32b2_6d14();
          iStack_6 = 0x53d;
          FUN_32b2_710c();
          iStack_6 = 0x546;
          FUN_32b2_710c();
          iStack_6 = 0x54f;
          FUN_32b2_6d14();
          iStack_6 = 0x558;
          FUN_32b2_710c();
          iStack_6 = 0x55d;
          FUN_32b2_718c();
          iStack_6 = 0x566;
          FUN_32b2_6eb1();
          iStack_6 = 0x56f;
          FUN_32b2_6d14();
          iStack_6 = 0x574;
          FUN_32b2_6fd6();
          iStack_6 = 0x57d;
          FUN_32b2_6d14();
          iStack_6 = 0x586;
          FUN_32b2_710c();
          iStack_6 = 0x58b;
          FUN_32b2_7182();
          iStack_6 = 0x594;
          FUN_32b2_6e99();
          iStack_6 = 0x59c;
          FUN_32b2_710c();
          iStack_6 = 0x5a5;
          FUN_32b2_7154();
          iStack_6 = 0x5ae;
          FUN_32b2_6e99();
          iStack_6 = 0x5b7;
          FUN_32b2_6eb1();
          iStack_6 = 0x5c0;
          FUN_32b2_6d14();
          iStack_6 = 0x5c9;
          FUN_32b2_6eb1();
          iStack_6 = unaff_BP + -0x62;
          iStack_8 = 0x32b2;
          iStack_a = 0x5db;
          FUN_32b2_6cc6();
          iStack_8 = 0x32b2;
          iStack_a = 0x5e0;
          FUN_32b2_7258();
          uStack_10 = 0x32b2;
          uStack_12 = 0x5ea;
          FUN_32b2_6eb1();
          uStack_10 = 0x32b2;
          uStack_12 = 0x5f2;
          FUN_32b2_6cc6();
          uStack_10 = 0x32b2;
          uStack_12 = 0x5f7;
          FUN_32b2_7258();
          uStack_1a = 0x601;
          FUN_32b2_6eb1();
          uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_26 = *(undefined2 *)(unaff_BP + -0x4e);
          uStack_2a = 0x622;
          FUN_32b2_6d14();
          uStack_30 = 0x32b2;
          uStack_32 = 0x62c;
          FUN_32b2_6eb1();
          uStack_30 = 0x32b2;
          uStack_32 = 0x635;
          FUN_32b2_6d14();
          uStack_38 = 0x32b2;
          uStack_3a = 0x63f;
          FUN_32b2_6eb1();
          uStack_38 = 0;
          uStack_3a = 0x32b2;
          func_0x0003fc09();
          uVar8 = *(undefined2 *)(unaff_BP + -0x60);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)(unaff_BP + -0x84) = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x9c) = uVar8;
          iStack_6 = unaff_BP + -0x86;
          puVar7 = &uStack_26;
          puVar5 = (undefined2 *)(unaff_BP + 0x1c);
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          uStack_2a = 0x684;
          iVar6 = FUN_3ab8_522f();
          uVar10 = 0;
          uVar11 = iVar6 == 0;
          if (!(bool)uVar11) {
            iStack_6 = 0x694;
            FUN_32b2_6d14();
            iStack_6 = 0x69d;
            FUN_32b2_6cc6();
            iStack_6 = 0x6a5;
            FUN_32b2_701d();
            iStack_6 = 0x6aa;
            FUN_32b2_6fc7();
            iStack_6 = 0x6af;
            FUN_32b2_7258();
            iStack_6 = 0x6b4;
            FUN_32b2_7191();
            if ((bool)uVar10 || (bool)uVar11) {
              iStack_6 = 0x6bf;
              FUN_32b2_6d14();
              iStack_6 = 0x6c8;
              FUN_32b2_6cc6();
              iStack_6 = 0x6d1;
              FUN_32b2_701d();
              iStack_6 = 0x6d6;
              FUN_32b2_6fc7();
              iStack_6 = 0x6db;
              FUN_32b2_7258();
              iStack_6 = 0x6e0;
              FUN_32b2_7191();
              if ((bool)uVar10 || (bool)uVar11) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
            }
          }
          iStack_6 = 0x6f8;
          FUN_32b2_6d14();
          iStack_6 = 0x700;
          FUN_32b2_6d14();
          iStack_6 = 0x708;
          FUN_32b2_710c();
          iStack_6 = 0x711;
          FUN_32b2_710c();
          iStack_6 = 0x71a;
          FUN_32b2_7154();
          iStack_6 = 0x71f;
          FUN_32b2_7191();
          if (!(bool)uVar10) {
            iStack_6 = 0x72d;
            FUN_32b2_6d14();
            iStack_6 = 0x732;
            FUN_32b2_6fc7();
            iStack_6 = 0x73a;
            FUN_32b2_6d14();
            iStack_6 = 0x742;
            FUN_32b2_710c();
            iStack_6 = 0x74b;
            FUN_32b2_710c();
            iStack_6 = 0x750;
            FUN_32b2_7191();
            if (!(bool)uVar10) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
            iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
            uStack_c = 0x32b2;
            uStack_e = 0x774;
            FUN_32b2_7592();
            iStack_6 = 0x32b2;
            iStack_8 = 0x77e;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x786;
            FUN_32b2_70dc();
            iStack_6 = 0x32b2;
            iStack_8 = 0x78e;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x797;
            FUN_32b2_710c();
            iStack_6 = 0x32b2;
            iStack_8 = 0x79c;
            FUN_32b2_7182();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7a5;
            FUN_32b2_6e99();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7ad;
            FUN_32b2_710c();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7b5;
            FUN_32b2_7154();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7be;
            FUN_32b2_6e99();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7c7;
            FUN_32b2_6eb1();
            iStack_6 = unaff_BP + -0x8a;
            iStack_8 = unaff_BP + -0x62;
            iStack_a = 0x32b2;
            uStack_c = 0x7d9;
            FUN_32b2_6cc6();
            iStack_a = 0x32b2;
            uStack_c = 0x7de;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            uStack_14 = 0x7e8;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            uStack_14 = 0x7f0;
            FUN_32b2_6cc6();
            uStack_12 = 0x32b2;
            uStack_14 = 0x7f5;
            FUN_32b2_7258();
            uStack_1a = 0x32b2;
            FUN_32b2_6eb1();
            uStack_1a = *(undefined2 *)(unaff_BP + -100);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_26 = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_2a = 0x32b2;
            uStack_2c = 0x820;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x82a;
            FUN_32b2_6eb1();
            uStack_32 = 0x32b2;
            uStack_34 = 0x833;
            FUN_32b2_6d14();
            uStack_3a = 0x32b2;
            FUN_32b2_6eb1();
            uStack_3a = 0;
            func_0x0003fc09(0x32b2);
            uVar10 = (undefined1 *)0xffc9 < &uStack_3a;
            uVar11 = &stack0x0000 == (undefined1 *)0x4;
            iStack_6 = 0x32b2;
            iStack_8 = 0x84f;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x857;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x85c;
            FUN_32b2_7191();
            if ((bool)uVar11) {
              uVar8 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar8;
            }
            iStack_6 = 0x32b2;
            iStack_8 = 0x872;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x87a;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x87f;
            FUN_32b2_7191();
            if ((bool)uVar11) {
              uVar8 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar8;
            }
            uVar8 = *(undefined2 *)(unaff_BP + -0x60);
            puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
            *puVar5 = *(undefined2 *)(unaff_BP + -0x62);
            puVar5[1] = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x88);
            puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
            *puVar5 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar5[1] = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x60);
            puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar5 = *(undefined2 *)(unaff_BP + -0x62);
            puVar5[1] = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x88);
            puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar5 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar5[1] = uVar8;
            piVar1 = (int *)(unaff_BP + -0x36);
            *piVar1 = *piVar1 + 1;
            uVar11 = *piVar1 == 0;
            iStack_6 = 0x32b2;
            iStack_8 = 0x8d7;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x8e0;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x8e5;
            FUN_32b2_7191();
            if (!(bool)uVar10 && !(bool)uVar11) {
              iStack_6 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_a = *(undefined2 *)(unaff_BP + -0xba);
              uStack_c = *(undefined2 *)(unaff_BP + -0xbc);
              uStack_e = 0x32b2;
              uStack_10 = 0x8ff;
              FUN_32b2_7592();
              iStack_8 = 0x32b2;
              iStack_a = 0x909;
              FUN_32b2_6d14();
              iStack_8 = 0x32b2;
              iStack_a = 0x911;
              FUN_32b2_7154();
              iStack_8 = 0x32b2;
              iStack_a = 0x916;
              FUN_32b2_6fd6();
              iStack_8 = 0x32b2;
              iStack_a = 0x91e;
              FUN_32b2_6d14();
              iStack_8 = 0x32b2;
              iStack_a = 0x927;
              FUN_32b2_710c();
              iStack_8 = 0x32b2;
              iStack_a = 0x92c;
              FUN_32b2_7182();
              iStack_8 = 0x32b2;
              iStack_a = 0x935;
              FUN_32b2_6e99();
              iStack_8 = 0x32b2;
              iStack_a = 0x93d;
              FUN_32b2_710c();
              iStack_8 = 0x32b2;
              iStack_a = 0x945;
              FUN_32b2_7154();
              iStack_8 = 0x32b2;
              iStack_a = 0x94e;
              FUN_32b2_6e99();
              iStack_8 = 0x32b2;
              iStack_a = 0x957;
              FUN_32b2_6eb1();
              iStack_8 = unaff_BP + -0x8a;
              iStack_a = unaff_BP + -0x62;
              uStack_c = 0x32b2;
              uStack_e = 0x969;
              FUN_32b2_6cc6();
              uStack_c = 0x32b2;
              uStack_e = 0x96e;
              FUN_32b2_7258();
              uStack_14 = 0x32b2;
              uStack_16 = 0x978;
              FUN_32b2_6eb1();
              uStack_14 = 0x32b2;
              uStack_16 = 0x980;
              FUN_32b2_6cc6();
              uStack_14 = 0x32b2;
              uStack_16 = 0x985;
              FUN_32b2_7258();
              uStack_1e = 0x98f;
              FUN_32b2_6eb1();
              uStack_1e = *(undefined2 *)(unaff_BP + -0x66);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x68);
              uStack_22 = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_24 = *(undefined2 *)(unaff_BP + -0x48);
              uStack_26 = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_2a = *(undefined2 *)(unaff_BP + -0x4e);
              uStack_2c = 0x32b2;
              uStack_2e = 0x9b0;
              FUN_32b2_6d14();
              uStack_34 = 0x32b2;
              uStack_36 = 0x9ba;
              FUN_32b2_6eb1();
              uStack_34 = 0x32b2;
              uStack_36 = 0x9c3;
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              func_0x0003fc09(0x32b2,0);
              uVar10 = &stack0x0000 == (undefined1 *)0x6;
              iStack_8 = 0x32b2;
              iStack_a = 0x9df;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0x9e7;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0x9ec;
              FUN_32b2_7191();
              if ((bool)uVar10) {
                uVar8 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar8;
              }
              iStack_8 = 0x32b2;
              iStack_a = 0xa02;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0xa0a;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0xa0f;
              FUN_32b2_7191();
              if ((bool)uVar10) {
                uVar8 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar8;
              }
              uVar8 = *(undefined2 *)(unaff_BP + -0x60);
              puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar5 = *(undefined2 *)(unaff_BP + -0x62);
              puVar5[1] = uVar8;
              uVar8 = *(undefined2 *)(unaff_BP + -0x88);
              puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar5 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar5[1] = uVar8;
              *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
            }
            return *(undefined2 *)(unaff_BP + -0x36);
          }
        }
        return 0;
      }
      iStack_6 = 0x3f5;
      FUN_32b2_6d14();
      iStack_6 = 0x32b2;
      iStack_8 = 0x3ff;
      FUN_32b2_7154();
      iStack_6 = 0x405;
      FUN_32b2_6eb1();
      *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -8);
      *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -6);
      *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -4);
      *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -2);
      *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x10);
      *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0xe);
      *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xc);
      *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -10);
      *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x46);
      *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x44);
      *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x42);
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
    }
    return 0;
  }
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x22b2;
  uStack_c = 0xffcb;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xffd5;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xffdd;
  puVar5 = (undefined2 *)FUN_1def_05d1();
  uVar8 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x962) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x960) = uVar8;
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x1bb4;
  uStack_c = 8;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0x12;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0x1a;
  puVar5 = (undefined2 *)func_0x0001e558();
  uVar8 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x95e) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x95c) = uVar8;
  puVar7 = &uStack_16;
  puVar5 = (undefined2 *)(unaff_BP + -0x96a);
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar4 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar4;
  }
  uStack_1a = 0x41;
  iVar6 = FUN_17a6_0cba();
  if (0 < iVar6) {
    *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
  }
  puVar5 = (undefined2 *)(unaff_BP + -0x96a);
  puVar7 = (undefined2 *)(unaff_BP + -0x496);
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = *puVar4;
  }
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x11f2;
  uStack_c = 0x74;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0x7e;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0x86;
  puVar5 = (undefined2 *)FUN_1def_05d1();
  uVar8 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x96a) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x968) = uVar8;
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x1bb4;
  uStack_c = 0xb1;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xbb;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xc3;
  puVar5 = (undefined2 *)func_0x0001e558();
  uVar8 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x966) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x964) = uVar8;
  if (*(int *)(unaff_BP + -0xa7a) != 0) {
    puVar7 = &uStack_16;
    puVar5 = (undefined2 *)(unaff_BP + -0x96a);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar4;
    }
    uStack_1a = 0xf1;
    iVar6 = FUN_17a6_0cba();
    if (0 < iVar6) {
      *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
    }
  }
  while (*(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1,
        *(int *)(unaff_BP + -0xa26) <= *(int *)(unaff_BP + -0x916)) {
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    puVar5 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar4;
    }
    puVar5 = (undefined2 *)(unaff_BP + -0x96a);
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar4;
    }
    if ((*(byte *)(unaff_BP + -0x481) & 2) != 0) {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x151;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x15a;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x15f;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x169;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0x172;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x177;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x199;
      func_0x000299d1();
      uStack_22 = 0x22b2;
      uStack_24 = 0x19e;
      FUN_1def_043a();
      uVar8 = *(undefined2 *)0x9984;
      uVar9 = *(undefined2 *)0x9986;
      *(undefined2 *)(unaff_BP + -0xaa0) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa9e) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa98) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa96) = uVar9;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x1d0;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x1d9;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x1de;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x1e8;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0x1f1;
      puVar5 = (undefined2 *)FUN_1def_05d1();
      uVar8 = *puVar5;
      uVar9 = puVar5[1];
      *(undefined2 *)(unaff_BP + -0xa9c) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa9a) = uVar9;
      *(undefined2 *)(unaff_BP + -0xaa4) = uVar8;
      *(undefined2 *)(unaff_BP + -0xaa2) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa7a) = 1;
      *(undefined2 *)(unaff_BP + -0xa18) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined2 *)(unaff_BP + -0xa26) = 1;
  while (*(int *)(unaff_BP + -0xa26) <= *(int *)(unaff_BP + -0x916)) {
    *(undefined2 *)(unaff_BP + -0xa78) = 0;
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    puVar5 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar4;
    }
    puVar5 = (undefined2 *)(unaff_BP + -0x96a);
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar4;
    }
    if ((*(byte *)(unaff_BP + -0x481) & 4) != 0) {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x6ed;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x6f6;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x6fb;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x705;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0x70e;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x713;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x735;
      func_0x000299d1();
      uStack_22 = 0x22b2;
      uStack_24 = 0x73a;
      FUN_1def_043a();
      uVar8 = *(undefined2 *)0x9986;
      *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)0x9984;
      *(undefined2 *)(unaff_BP + -0xa9e) = uVar8;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x764;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x76d;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x772;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x77c;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0x785;
      puVar5 = (undefined2 *)FUN_1def_05d1();
      uVar8 = *puVar5;
      uVar9 = puVar5[1];
      *(undefined2 *)(unaff_BP + -0xa9c) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa9a) = uVar9;
      *(undefined2 *)(unaff_BP + -0xaa8) = uVar8;
      *(undefined2 *)(unaff_BP + -0xaa6) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa18) = 1;
      while (uVar10 = *(uint *)(unaff_BP + -0xa18) < *(uint *)(unaff_BP + -0x914),
            (int)*(uint *)(unaff_BP + -0xa18) <= (int)*(uint *)(unaff_BP + -0x914)) {
        if (*(int *)(unaff_BP + -0xa26) != *(int *)(unaff_BP + -0xa18)) {
          puVar7 = (undefined2 *)(unaff_BP + -0x948);
          puVar5 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa18) * 0x16 + -0x906);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x329;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x332;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x337;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x341;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x34a;
          puVar5 = (undefined2 *)func_0x0001e558();
          uVar8 = puVar5[1];
          *(undefined2 *)(unaff_BP + -0xa90) = *puVar5;
          *(undefined2 *)(unaff_BP + -0xa8e) = uVar8;
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x374;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x37d;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x382;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x38c;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x395;
          puVar5 = (undefined2 *)func_0x0001e558();
          uVar8 = puVar5[1];
          *(undefined2 *)(unaff_BP + -0xa94) = *puVar5;
          *(undefined2 *)(unaff_BP + -0xa92) = uVar8;
          uVar3 = *(uint *)(unaff_BP + -0x914);
          uVar10 = uVar3 < 3;
          uVar11 = uVar3 == 3;
          if ((int)uVar3 < 4) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar10 || (bool)uVar11) {
LAB_3ab8_56de:
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar10) goto LAB_3ab8_5700;
            }
            else {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar10 || (bool)uVar11) goto LAB_3ab8_56de;
LAB_3ab8_571a:
              if (*(int *)(unaff_BP + -0x952) == 0) goto LAB_3ab8_575e;
              *(undefined2 *)(unaff_BP + -0xa78) = 1;
            }
          }
          else {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if (!(bool)uVar10 && !(bool)uVar11) {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar11) goto LAB_3ab8_571a;
            }
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar10) {
LAB_3ab8_5700:
              uVar10 = 1;
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar10) goto LAB_3ab8_571a;
            }
          }
          puVar7 = &uStack_1a;
          puVar5 = (undefined2 *)(unaff_BP + -0x948);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          puVar7 = &uStack_30;
          puVar5 = (undefined2 *)(unaff_BP + -0x496);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          uStack_32 = 0x22b2;
          uStack_34 = 0x2d4;
          iVar6 = FUN_1def_1921();
          if (iVar6 != 0) {
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0x430;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0x439;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0x43e;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0x448;
            func_0x000299d1();
            uStack_12 = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0x451;
            puVar5 = (undefined2 *)FUN_1def_05d1();
            uVar8 = puVar5[1];
            *(undefined2 *)(unaff_BP + -0xa80) = *puVar5;
            *(undefined2 *)(unaff_BP + -0xa7e) = uVar8;
            uVar11 = 0;
            uVar12 = *(int *)(unaff_BP + -0x952) == 0;
            uVar10 = uVar11;
            if ((bool)uVar12) {
LAB_3ab8_591f:
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar10) {
                uVar8 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9a) = uVar8;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar12) {
                uVar8 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9e) = uVar8;
              }
            }
            else {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar11 && !(bool)uVar12) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                uVar10 = 1;
                if ((bool)uVar11) goto LAB_3ab8_591f;
              }
            }
          }
        }
LAB_3ab8_575e:
        *(int *)(unaff_BP + -0xa18) = *(int *)(unaff_BP + -0xa18) + 1;
      }
      func_0x000297e6();
      func_0x00029d78();
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029bfc();
      uVar8 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar10) {
        if (*(int *)(unaff_BP + -0xa78) != 0) {
          *(undefined2 *)0xc22 = 1;
          iStack_6 = 2;
          iStack_8 = 0x11;
          iStack_a = unaff_BP + -0x10;
          uStack_c = 0x22b2;
          uVar8 = 0xdef;
          uStack_e = 0x54c;
          FUN_1000_02b5();
        }
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        uStack_c = 0x568;
        iStack_a = uVar8;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x572;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x57a;
        puVar5 = (undefined2 *)FUN_1def_05d1();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x962) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x960) = uVar8;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0x5a5;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x5af;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x5b7;
        puVar5 = (undefined2 *)func_0x0001e558();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x95e) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x95c) = uVar8;
        puVar7 = &uStack_16;
        puVar5 = (undefined2 *)(unaff_BP + -0x96a);
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar4 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar2 = *puVar4;
        }
        uStack_1a = 0x5de;
        iVar6 = FUN_17a6_0cba();
        if (0 < iVar6) {
          *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
        }
        puVar5 = (undefined2 *)(unaff_BP + -0x96a);
        puVar7 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar4;
        }
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x11f2;
        uStack_c = 0x611;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x61b;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x623;
        puVar5 = (undefined2 *)FUN_1def_05d1();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x96a) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x968) = uVar8;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0x64e;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x658;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x660;
        puVar5 = (undefined2 *)func_0x0001e558();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x966) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x964) = uVar8;
      }
      puVar7 = &uStack_16;
      puVar5 = (undefined2 *)(unaff_BP + -0x96a);
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar4;
      }
      uStack_1a = 0x687;
      iVar6 = FUN_17a6_0cba();
      if (0 < iVar6) {
        *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
      }
    }
    *(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1;
  }
  *(undefined2 *)(unaff_BP + -0xa26) = 1;
  do {
    if (*(int *)(unaff_BP + -0x916) < *(int *)(unaff_BP + -0xa26)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    puVar5 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar4;
    }
    puVar5 = (undefined2 *)(unaff_BP + -0x96a);
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar4;
    }
    if (((*(byte *)(unaff_BP + -0x481) & 2) == 0) && ((*(byte *)(unaff_BP + -0x481) & 4) == 0)) {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x7c9;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x7d2;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x7d7;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x7e1;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0x7ea;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x7ef;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x811;
      func_0x000299d1();
      uStack_22 = 0x22b2;
      uStack_24 = 0x816;
      FUN_1def_043a();
      uVar8 = *(undefined2 *)0x9984;
      uVar9 = *(undefined2 *)0x9986;
      *(undefined2 *)(unaff_BP + -0xaa0) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa9e) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa98) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa96) = uVar9;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x848;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x851;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x856;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x860;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0x869;
      puVar5 = (undefined2 *)FUN_1def_05d1();
      uVar8 = *puVar5;
      uVar9 = puVar5[1];
      *(undefined2 *)(unaff_BP + -0xa9c) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa9a) = uVar9;
      *(undefined2 *)(unaff_BP + -0xaa4) = uVar8;
      *(undefined2 *)(unaff_BP + -0xaa2) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa7c) = 1;
      *(undefined2 *)(unaff_BP + -0xa7a) = 1;
      *(undefined2 *)(unaff_BP + -0xa18) = 1;
      while (uVar10 = *(uint *)(unaff_BP + -0xa18) < *(uint *)(unaff_BP + -0x914),
            (int)*(uint *)(unaff_BP + -0xa18) <= (int)*(uint *)(unaff_BP + -0x914)) {
        if (*(int *)(unaff_BP + -0xa26) != *(int *)(unaff_BP + -0xa18)) {
          puVar7 = (undefined2 *)(unaff_BP + -0x948);
          puVar5 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa18) * 0x16 + -0x906);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x916;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x91f;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x924;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x92e;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x937;
          puVar5 = (undefined2 *)func_0x0001e558();
          uVar8 = puVar5[1];
          *(undefined2 *)(unaff_BP + -0xa90) = *puVar5;
          *(undefined2 *)(unaff_BP + -0xa8e) = uVar8;
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x961;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x96a;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x96f;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x979;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x982;
          puVar5 = (undefined2 *)func_0x0001e558();
          uVar10 = (undefined1 *)0xffed < &uStack_12;
          uVar11 = &stack0x0000 == (undefined1 *)0x0;
          uVar8 = puVar5[1];
          *(undefined2 *)(unaff_BP + -0xa94) = *puVar5;
          *(undefined2 *)(unaff_BP + -0xa92) = uVar8;
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if (!(bool)uVar10 && !(bool)uVar11) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if (!(bool)uVar10 && !(bool)uVar11) goto LAB_3ab8_5d4b;
          }
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if ((bool)uVar10) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar10) goto LAB_3ab8_5d4b;
          }
          puVar7 = &uStack_1a;
          puVar5 = (undefined2 *)(unaff_BP + -0x948);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          puVar7 = &uStack_30;
          puVar5 = (undefined2 *)(unaff_BP + -0x496);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          uStack_32 = 0x22b2;
          uStack_34 = 0x8c1;
          iVar6 = FUN_1def_1921();
          if (iVar6 != 0) {
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0xa2d;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0xa36;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0xa3b;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0xa45;
            func_0x000299d1();
            uStack_12 = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0xa4e;
            puVar5 = (undefined2 *)FUN_1def_05d1();
            uVar10 = (undefined1 *)0xffed < &uStack_12;
            uVar11 = &stack0x0000 == (undefined1 *)0x0;
            uVar8 = puVar5[1];
            *(undefined2 *)(unaff_BP + -0xa80) = *puVar5;
            *(undefined2 *)(unaff_BP + -0xa7e) = uVar8;
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029bfc();
            FUN_28b3_1181();
            if ((bool)uVar10 || (bool)uVar11) {
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029c74();
              FUN_28b3_1181();
              if (!(bool)uVar10) {
                *(undefined2 *)(unaff_BP + -0xa7c) = 0;
              }
            }
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029bfc();
            FUN_28b3_1181();
            if ((bool)uVar10 || (bool)uVar11) {
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029c74();
              FUN_28b3_1181();
              if (!(bool)uVar10) {
                *(undefined2 *)(unaff_BP + -0xa7a) = 0;
              }
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar10) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c74();
              FUN_28b3_1181();
              if ((bool)uVar10) {
                uVar8 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9a) = uVar8;
              }
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar10 && !(bool)uVar11) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029bfc();
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar11) {
                uVar8 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9e) = uVar8;
              }
            }
          }
        }
LAB_3ab8_5d4b:
        *(int *)(unaff_BP + -0xa18) = *(int *)(unaff_BP + -0xa18) + 1;
      }
      func_0x000297e6();
      func_0x00029d78();
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c74();
      FUN_28b3_1181();
      if (!(bool)uVar10) {
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x22b2;
        uStack_c = 0xbef;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbf9;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0xc01;
        puVar5 = (undefined2 *)FUN_1def_05d1();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x962) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x960) = uVar8;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0xc2c;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xc36;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uVar9 = 0x1bb4;
        uStack_16 = 0xc3e;
        puVar5 = (undefined2 *)func_0x0001e558();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x95e) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x95c) = uVar8;
        if (*(int *)(unaff_BP + -0xa7c) != 0) {
          puVar7 = &uStack_16;
          puVar5 = (undefined2 *)(unaff_BP + -0x96a);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          uVar9 = 0x11f2;
          uStack_1a = 0xc6c;
          iVar6 = FUN_17a6_0cba();
          if (0 < iVar6) {
            *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
          }
        }
        puVar5 = (undefined2 *)(unaff_BP + -0x96a);
        puVar7 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar4;
        }
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        uStack_c = 0xc9f;
        iStack_a = uVar9;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xca9;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0xcb1;
        puVar5 = (undefined2 *)FUN_1def_05d1();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x96a) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x968) = uVar8;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0xcdc;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xce6;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0xcee;
        puVar5 = (undefined2 *)func_0x0001e558();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x966) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x964) = uVar8;
        if (*(int *)(unaff_BP + -0xa7a) == 0) goto LAB_3ab8_61a7;
      }
      puVar7 = &uStack_16;
      puVar5 = (undefined2 *)(unaff_BP + -0x96a);
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar4;
      }
      uStack_1a = 0xd1c;
      iVar6 = FUN_17a6_0cba();
      if (0 < iVar6) {
        *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
      }
    }
LAB_3ab8_61a7:
    *(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1;
  } while( true );
}



/* 3ab8:522f  FUN_3ab8_522f  140 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */

undefined2 FUN_3ab8_522f(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 in_AX;
  undefined2 uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *in_BX;
  int unaff_BP;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar11;
  undefined1 in_ZF;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  do {
    uVar6 = in_BX[1];
    *(undefined2 *)(unaff_BP + -0xa94) = in_AX;
    *(undefined2 *)(unaff_BP + -0xa92) = uVar6;
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)in_CF && !(bool)in_ZF) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)in_CF && !(bool)in_ZF) {
        uVar6 = FUN_3ab8_5171();
        return uVar6;
      }
    }
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)in_CF) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if ((bool)in_CF) {
        uVar6 = FUN_3ab8_5171();
        return uVar6;
      }
    }
    puVar9 = &uStack_1a;
    puVar7 = (undefined2 *)(unaff_BP + -0x948);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    puVar9 = &uStack_30;
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    uStack_32 = 0x22b2;
    uStack_34 = 0xfce7;
    iVar8 = FUN_1def_1921();
    if (iVar8 != 0) {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0xfe53;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0xfe5c;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0xfe61;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xfe6b;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0xfe74;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      uVar11 = (undefined1 *)0xffed < &uStack_12;
      uVar12 = &stack0x0000 == (undefined1 *)0x0;
      uVar6 = puVar7[1];
      *(undefined2 *)(unaff_BP + -0xa80) = *puVar7;
      *(undefined2 *)(unaff_BP + -0xa7e) = uVar6;
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029bfc();
      FUN_28b3_1181();
      if ((bool)uVar11 || (bool)uVar12) {
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029c74();
        FUN_28b3_1181();
        if (!(bool)uVar11) {
          *(undefined2 *)(unaff_BP + -0xa7a) = 0;
        }
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar11) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c74();
        FUN_28b3_1181();
        if ((bool)uVar11) {
          uVar6 = *(undefined2 *)(unaff_BP + -0xa7e);
          *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
          *(undefined2 *)(unaff_BP + -0xa9a) = uVar6;
        }
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar11 && !(bool)uVar12) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029bfc();
        FUN_28b3_1181();
        if (!(bool)uVar11 && !(bool)uVar12) {
          uVar6 = *(undefined2 *)(unaff_BP + -0xa7e);
          *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)(unaff_BP + -0xa80);
          *(undefined2 *)(unaff_BP + -0xa9e) = uVar6;
          uVar6 = FUN_3ab8_5171();
          return uVar6;
        }
        uVar6 = FUN_3ab8_5171();
        return uVar6;
      }
      uVar6 = FUN_3ab8_5171();
      return uVar6;
    }
    do {
      *(int *)(unaff_BP + -0xa18) = *(int *)(unaff_BP + -0xa18) + 1;
      uVar4 = *(uint *)(unaff_BP + -0x914);
      uVar5 = *(uint *)(unaff_BP + -0xa18);
      uVar11 = uVar5 < uVar4;
      uVar12 = uVar5 == uVar4;
      if ((int)uVar4 < (int)uVar5) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x000297e6();
        func_0x00029d78();
        iVar8 = -0x6654;
        func_0x00029bfc();
        FUN_28b3_1181();
        if ((bool)uVar11 || (bool)uVar12) {
          piVar1 = (int *)((int)puVar9 + iVar8 + 0x1486);
          *piVar1 = *piVar1 + -1;
          puVar9[0xa4f] = puVar9[0xa4f] + -1;
          puVar2 = (undefined2 *)((int)puVar7 + unaff_BP + 0x7285);
          iStack_6 = 0xe9;
          (*(code *)*puVar2)();
          iStack_6 = 0xf3;
          FUN_32b2_704d();
          iStack_6 = 0xfc;
          FUN_32b2_710c();
          iStack_6 = 0x104;
          FUN_32b2_6eb1();
          while( true ) {
            iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
            uStack_c = 0x32b2;
            uStack_e = 0x119;
            FUN_32b2_75fe();
            iStack_6 = 0x32b2;
            iStack_8 = 0x123;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 299;
            FUN_32b2_704d();
            iStack_6 = 0x32b2;
            iStack_8 = 0x133;
            FUN_32b2_7095();
            iStack_6 = 0x32b2;
            iStack_8 = 0x13b;
            FUN_32b2_6eb1();
            iStack_6 = *(undefined2 *)(unaff_BP + -0xb6);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_a = *(undefined2 *)(unaff_BP + -0xba);
            uStack_c = *(undefined2 *)(unaff_BP + -0xbc);
            uStack_e = 0x32b2;
            uStack_10 = 0x150;
            FUN_32b2_75ec();
            uVar11 = &stack0x0000 == (undefined1 *)0x6;
            iStack_8 = 0x32b2;
            iStack_a = 0x15a;
            FUN_32b2_6d14();
            iStack_8 = 0x32b2;
            iStack_a = 0x162;
            FUN_32b2_704d();
            iStack_8 = 0x32b2;
            iStack_a = 0x16a;
            FUN_32b2_7095();
            iStack_8 = 0x32b2;
            iStack_a = 0x173;
            FUN_32b2_6eb1();
            iStack_8 = 0x32b2;
            iStack_a = 0x17b;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0x183;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0x188;
            FUN_32b2_7191();
            if ((bool)uVar11) {
              iStack_8 = 0x32b2;
              iStack_a = 0x192;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0x19a;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0x19f;
              FUN_32b2_7191();
              if ((bool)uVar11) {
                return 0;
              }
            }
            iStack_8 = unaff_BP + -0xa8;
            iStack_a = unaff_BP + -0x1c;
            uStack_c = *(undefined2 *)(unaff_BP + -0x7c);
            uStack_e = *(undefined2 *)(unaff_BP + -0x7e);
            uStack_10 = *(undefined2 *)(unaff_BP + -0x80);
            uStack_12 = *(undefined2 *)(unaff_BP + -0x82);
            uStack_14 = *(undefined2 *)(unaff_BP + -0x58);
            uStack_16 = *(undefined2 *)(unaff_BP + -0x5a);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x5e);
            uStack_1e = 0x1d0;
            FUN_32b2_6cc6();
            uStack_1e = 0x1d5;
            FUN_32b2_7258();
            uStack_24 = 0x32b2;
            uStack_26 = 0x1df;
            FUN_32b2_6eb1();
            uStack_24 = 0x32b2;
            uStack_26 = 0x1e7;
            FUN_32b2_6cc6();
            uStack_24 = 0x32b2;
            uStack_26 = 0x1ec;
            FUN_32b2_7258();
            uStack_2c = 0x32b2;
            uStack_2e = 0x1f6;
            FUN_32b2_6eb1();
            uStack_2c = 0x32b2;
            uStack_2e = 0x1fa;
            iVar8 = func_0x0003fb3d();
            if (iVar8 == 0) break;
            iStack_8 = 0x32b2;
            iStack_a = 0x209;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0x20e;
            FUN_32b2_7258();
            iStack_8 = 0x32b2;
            iStack_a = 0x216;
            FUN_32b2_6e99();
            iStack_8 = 0x32b2;
            iStack_a = 0x21e;
            FUN_32b2_6ef9();
            iStack_8 = unaff_BP + -0xb4;
            iStack_a = unaff_BP + -0xa4;
            uStack_c = 0x32b2;
            uStack_e = 0x231;
            FUN_32b2_6cc6();
            uStack_c = 0x32b2;
            uStack_e = 0x236;
            FUN_32b2_7258();
            uStack_14 = 0x32b2;
            uStack_16 = 0x240;
            FUN_32b2_6eb1();
            uStack_14 = 0x32b2;
            uStack_16 = 0x248;
            FUN_32b2_6cc6();
            uStack_14 = 0x32b2;
            uStack_16 = 0x24d;
            FUN_32b2_7258();
            uStack_1e = 599;
            FUN_32b2_6eb1();
            uStack_1e = 0x25f;
            FUN_32b2_6d14();
            uStack_24 = 0x32b2;
            uStack_26 = 0x269;
            FUN_32b2_6eb1();
            uStack_24 = 0x32b2;
            uStack_26 = 0x271;
            FUN_32b2_6cc6();
            uStack_24 = 0x32b2;
            uStack_26 = 0x276;
            FUN_32b2_7258();
            uStack_24 = 0x32b2;
            uStack_26 = 0x27e;
            FUN_32b2_6e99();
            uStack_2c = 0x32b2;
            uStack_2e = 0x288;
            FUN_32b2_6eb1();
            uStack_2c = 0x32b2;
            uStack_2e = 0x290;
            FUN_32b2_6cc6();
            uStack_2c = 0x32b2;
            uStack_2e = 0x295;
            FUN_32b2_7258();
            uStack_34 = 0x32b2;
            uStack_36 = 0x29f;
            FUN_32b2_6eb1();
            uStack_34 = 0x32b2;
            uStack_36 = 0x2a7;
            FUN_32b2_6cc6();
            uStack_34 = 0x32b2;
            uStack_36 = 0x2ac;
            FUN_32b2_7258();
            FUN_32b2_6eb1();
            func_0x0003fc09(0x32b2,1);
            iStack_8 = unaff_BP + -0xe4;
            iStack_a = unaff_BP + -0xd0;
            uStack_c = 0x32b2;
            uStack_e = 0x2d4;
            FUN_32b2_6cc6();
            uStack_c = 0x32b2;
            uStack_e = 0x2d9;
            FUN_32b2_7258();
            uStack_14 = 0x32b2;
            uStack_16 = 0x2e3;
            FUN_32b2_6eb1();
            uStack_14 = 0x32b2;
            uStack_16 = 0x2eb;
            FUN_32b2_6cc6();
            uStack_14 = 0x32b2;
            uStack_16 = 0x2f0;
            FUN_32b2_7258();
            uStack_1e = 0x2fa;
            FUN_32b2_6eb1();
            uStack_1e = 0x302;
            FUN_32b2_6d14();
            uStack_24 = 0x32b2;
            uStack_26 = 0x30c;
            FUN_32b2_6eb1();
            uStack_24 = 0x32b2;
            uStack_26 = 0x314;
            FUN_32b2_6d14();
            uStack_2c = 0x32b2;
            uStack_2e = 0x31e;
            FUN_32b2_6eb1();
            uStack_2c = 0x32b2;
            uStack_2e = 0x326;
            FUN_32b2_6cc6();
            uStack_2c = 0x32b2;
            uStack_2e = 0x32b;
            FUN_32b2_7258();
            uStack_34 = 0x32b2;
            uStack_36 = 0x335;
            FUN_32b2_6eb1();
            uStack_34 = 0x32b2;
            uStack_36 = 0x33d;
            FUN_32b2_6cc6();
            uStack_34 = 0x32b2;
            uStack_36 = 0x342;
            FUN_32b2_7258();
            FUN_32b2_6eb1();
            func_0x0003fc09(0x32b2,1);
            uVar11 = (undefined1 *)0xffc9 < &uStack_38;
            uVar12 = &stack0x0000 == (undefined1 *)0x2;
            iStack_6 = 0x360;
            FUN_32b2_6cc6();
            iStack_6 = 0x369;
            FUN_32b2_701d();
            iStack_6 = 0x36e;
            FUN_32b2_7258();
            iStack_6 = 0x376;
            FUN_32b2_6e99();
            iStack_6 = 0x37e;
            FUN_32b2_6ef9();
            iStack_6 = 0x387;
            FUN_32b2_6cc6();
            iStack_6 = 0x390;
            FUN_32b2_701d();
            iStack_6 = 0x395;
            FUN_32b2_7258();
            iStack_6 = 0x39e;
            FUN_32b2_6e99();
            iStack_6 = 0x3a6;
            FUN_32b2_6ef9();
            iStack_6 = 0x3af;
            FUN_32b2_6d14();
            iStack_6 = 0x3b4;
            FUN_32b2_6fc7();
            iStack_6 = 0x3bc;
            FUN_32b2_6d14();
            iStack_6 = 0x3c1;
            FUN_32b2_6fc7();
            iStack_6 = 0x3ca;
            FUN_32b2_710c();
            iStack_6 = 0x3cf;
            FUN_32b2_7191();
            if (!(bool)uVar11 && !(bool)uVar12) {
              iStack_6 = 0x3da;
              FUN_32b2_6d14();
              iStack_6 = 0x3e2;
              FUN_32b2_6d14();
              iStack_6 = 999;
              FUN_32b2_7191();
              if (!(bool)uVar12) {
                iStack_6 = 0x431;
                FUN_32b2_6d14();
                iStack_6 = 0x439;
                FUN_32b2_7124();
                iStack_6 = 0x441;
                FUN_32b2_6e99();
                iStack_6 = 0x44a;
                FUN_32b2_704d();
                iStack_6 = 0x453;
                FUN_32b2_7035();
                iStack_6 = 0x45c;
                FUN_32b2_6e99();
                iStack_6 = 0x464;
                FUN_32b2_6eb1();
                iStack_6 = 0x46c;
                FUN_32b2_6d14();
                iStack_6 = 0x474;
                FUN_32b2_710c();
                iStack_6 = 0x47c;
                FUN_32b2_710c();
                iStack_6 = 0x484;
                FUN_32b2_710c();
                iStack_6 = 0x48c;
                FUN_32b2_6d14();
                iStack_6 = 0x494;
                FUN_32b2_710c();
                iStack_6 = 0x49d;
                FUN_32b2_6e99();
                iStack_6 = 0x4a2;
                FUN_32b2_718c();
                iStack_6 = 0x4ab;
                FUN_32b2_6e99();
                iStack_6 = 0x4b3;
                FUN_32b2_6eb1();
                iStack_6 = 0x4bc;
                FUN_32b2_6d14();
                iStack_6 = 0x4c4;
                FUN_32b2_710c();
                iStack_6 = 0x4cd;
                FUN_32b2_710c();
                iStack_6 = 0x4d5;
                FUN_32b2_710c();
                iStack_6 = 0x4dd;
                FUN_32b2_710c();
                iStack_6 = 0x4e6;
                FUN_32b2_6e99();
                iStack_6 = 0x4ee;
                FUN_32b2_6eb1();
                iStack_6 = 0x4f7;
                FUN_32b2_6d14();
                iStack_6 = 0x500;
                FUN_32b2_710c();
                iStack_6 = 0x509;
                FUN_32b2_70dc();
                iStack_6 = 0x511;
                FUN_32b2_710c();
                iStack_6 = 0x519;
                FUN_32b2_710c();
                iStack_6 = 0x522;
                FUN_32b2_6e99();
                iStack_6 = 0x52b;
                FUN_32b2_6eb1();
                iStack_6 = 0x534;
                FUN_32b2_6d14();
                iStack_6 = 0x53d;
                FUN_32b2_710c();
                iStack_6 = 0x546;
                FUN_32b2_710c();
                iStack_6 = 0x54f;
                FUN_32b2_6d14();
                iStack_6 = 0x558;
                FUN_32b2_710c();
                iStack_6 = 0x55d;
                FUN_32b2_718c();
                iStack_6 = 0x566;
                FUN_32b2_6eb1();
                iStack_6 = 0x56f;
                FUN_32b2_6d14();
                iStack_6 = 0x574;
                FUN_32b2_6fd6();
                iStack_6 = 0x57d;
                FUN_32b2_6d14();
                iStack_6 = 0x586;
                FUN_32b2_710c();
                iStack_6 = 0x58b;
                FUN_32b2_7182();
                iStack_6 = 0x594;
                FUN_32b2_6e99();
                iStack_6 = 0x59c;
                FUN_32b2_710c();
                iStack_6 = 0x5a5;
                FUN_32b2_7154();
                iStack_6 = 0x5ae;
                FUN_32b2_6e99();
                iStack_6 = 0x5b7;
                FUN_32b2_6eb1();
                iStack_6 = 0x5c0;
                FUN_32b2_6d14();
                iStack_6 = 0x5c9;
                FUN_32b2_6eb1();
                iStack_6 = unaff_BP + -0x62;
                iStack_8 = 0x32b2;
                iStack_a = 0x5db;
                FUN_32b2_6cc6();
                iStack_8 = 0x32b2;
                iStack_a = 0x5e0;
                FUN_32b2_7258();
                uStack_10 = 0x32b2;
                uStack_12 = 0x5ea;
                FUN_32b2_6eb1();
                uStack_10 = 0x32b2;
                uStack_12 = 0x5f2;
                FUN_32b2_6cc6();
                uStack_10 = 0x32b2;
                uStack_12 = 0x5f7;
                FUN_32b2_7258();
                uStack_1a = 0x601;
                FUN_32b2_6eb1();
                uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
                uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
                uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
                uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
                uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
                uStack_26 = *(undefined2 *)(unaff_BP + -0x4e);
                uStack_2a = 0x622;
                FUN_32b2_6d14();
                uStack_30 = 0x32b2;
                uStack_32 = 0x62c;
                FUN_32b2_6eb1();
                uStack_30 = 0x32b2;
                uStack_32 = 0x635;
                FUN_32b2_6d14();
                uStack_38 = 0x32b2;
                uStack_3a = 0x63f;
                FUN_32b2_6eb1();
                uStack_38 = 0;
                uStack_3a = 0x32b2;
                func_0x0003fc09();
                uVar6 = *(undefined2 *)(unaff_BP + -0x60);
                *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
                *(undefined2 *)(unaff_BP + -0x84) = uVar6;
                uVar6 = *(undefined2 *)(unaff_BP + -0x88);
                *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
                *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
                iStack_6 = unaff_BP + -0x86;
                puVar9 = &uStack_26;
                puVar7 = (undefined2 *)(unaff_BP + 0x1c);
                for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
                  puVar3 = puVar9;
                  puVar9 = puVar9 + 1;
                  puVar2 = puVar7;
                  puVar7 = puVar7 + 1;
                  *puVar3 = *puVar2;
                }
                uStack_2a = 0x684;
                iVar8 = FUN_3ab8_522f();
                uVar11 = 0;
                uVar12 = iVar8 == 0;
                if (!(bool)uVar12) {
                  iStack_6 = 0x694;
                  FUN_32b2_6d14();
                  iStack_6 = 0x69d;
                  FUN_32b2_6cc6();
                  iStack_6 = 0x6a5;
                  FUN_32b2_701d();
                  iStack_6 = 0x6aa;
                  FUN_32b2_6fc7();
                  iStack_6 = 0x6af;
                  FUN_32b2_7258();
                  iStack_6 = 0x6b4;
                  FUN_32b2_7191();
                  if ((bool)uVar11 || (bool)uVar12) {
                    iStack_6 = 0x6bf;
                    FUN_32b2_6d14();
                    iStack_6 = 0x6c8;
                    FUN_32b2_6cc6();
                    iStack_6 = 0x6d1;
                    FUN_32b2_701d();
                    iStack_6 = 0x6d6;
                    FUN_32b2_6fc7();
                    iStack_6 = 0x6db;
                    FUN_32b2_7258();
                    iStack_6 = 0x6e0;
                    FUN_32b2_7191();
                    if ((bool)uVar11 || (bool)uVar12) {
                      *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                      *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                      *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                      *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                    }
                  }
                }
                iStack_6 = 0x6f8;
                FUN_32b2_6d14();
                iStack_6 = 0x700;
                FUN_32b2_6d14();
                iStack_6 = 0x708;
                FUN_32b2_710c();
                iStack_6 = 0x711;
                FUN_32b2_710c();
                iStack_6 = 0x71a;
                FUN_32b2_7154();
                iStack_6 = 0x71f;
                FUN_32b2_7191();
                if (!(bool)uVar11) {
                  iStack_6 = 0x72d;
                  FUN_32b2_6d14();
                  iStack_6 = 0x732;
                  FUN_32b2_6fc7();
                  iStack_6 = 0x73a;
                  FUN_32b2_6d14();
                  iStack_6 = 0x742;
                  FUN_32b2_710c();
                  iStack_6 = 0x74b;
                  FUN_32b2_710c();
                  iStack_6 = 0x750;
                  FUN_32b2_7191();
                  if (!(bool)uVar11) {
                    *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                    *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                    *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                    *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
                  }
                  iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
                  iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
                  iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
                  uStack_c = 0x32b2;
                  uStack_e = 0x774;
                  FUN_32b2_7592();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x77e;
                  FUN_32b2_6d14();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x786;
                  FUN_32b2_70dc();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x78e;
                  FUN_32b2_6d14();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x797;
                  FUN_32b2_710c();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x79c;
                  FUN_32b2_7182();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x7a5;
                  FUN_32b2_6e99();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x7ad;
                  FUN_32b2_710c();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x7b5;
                  FUN_32b2_7154();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x7be;
                  FUN_32b2_6e99();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x7c7;
                  FUN_32b2_6eb1();
                  iStack_6 = unaff_BP + -0x8a;
                  iStack_8 = unaff_BP + -0x62;
                  iStack_a = 0x32b2;
                  uStack_c = 0x7d9;
                  FUN_32b2_6cc6();
                  iStack_a = 0x32b2;
                  uStack_c = 0x7de;
                  FUN_32b2_7258();
                  uStack_12 = 0x32b2;
                  uStack_14 = 0x7e8;
                  FUN_32b2_6eb1();
                  uStack_12 = 0x32b2;
                  uStack_14 = 0x7f0;
                  FUN_32b2_6cc6();
                  uStack_12 = 0x32b2;
                  uStack_14 = 0x7f5;
                  FUN_32b2_7258();
                  uStack_1a = 0x32b2;
                  FUN_32b2_6eb1();
                  uStack_1a = *(undefined2 *)(unaff_BP + -100);
                  uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
                  uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
                  uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
                  uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
                  uStack_26 = *(undefined2 *)(unaff_BP + -0x4c);
                  uStack_2a = 0x32b2;
                  uStack_2c = 0x820;
                  FUN_32b2_6d14();
                  uStack_32 = 0x32b2;
                  uStack_34 = 0x82a;
                  FUN_32b2_6eb1();
                  uStack_32 = 0x32b2;
                  uStack_34 = 0x833;
                  FUN_32b2_6d14();
                  uStack_3a = 0x32b2;
                  FUN_32b2_6eb1();
                  uStack_3a = 0;
                  func_0x0003fc09(0x32b2);
                  uVar11 = (undefined1 *)0xffc9 < &uStack_3a;
                  uVar12 = &stack0x0000 == (undefined1 *)0x4;
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x84f;
                  FUN_32b2_6cc6();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x857;
                  FUN_32b2_6cc6();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x85c;
                  FUN_32b2_7191();
                  if ((bool)uVar12) {
                    uVar6 = *(undefined2 *)(unaff_BP + 8);
                    *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                    *(undefined2 *)(unaff_BP + -0x60) = uVar6;
                  }
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x872;
                  FUN_32b2_6cc6();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x87a;
                  FUN_32b2_6cc6();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x87f;
                  FUN_32b2_7191();
                  if ((bool)uVar12) {
                    uVar6 = *(undefined2 *)(unaff_BP + 0xc);
                    *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                    *(undefined2 *)(unaff_BP + -0x88) = uVar6;
                  }
                  uVar6 = *(undefined2 *)(unaff_BP + -0x60);
                  puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
                  *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
                  puVar7[1] = uVar6;
                  uVar6 = *(undefined2 *)(unaff_BP + -0x88);
                  puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
                  *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
                  puVar7[1] = uVar6;
                  uVar6 = *(undefined2 *)(unaff_BP + -0x60);
                  puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                  *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
                  puVar7[1] = uVar6;
                  uVar6 = *(undefined2 *)(unaff_BP + -0x88);
                  puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                  *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
                  puVar7[1] = uVar6;
                  piVar1 = (int *)(unaff_BP + -0x36);
                  *piVar1 = *piVar1 + 1;
                  uVar12 = *piVar1 == 0;
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x8d7;
                  FUN_32b2_6d14();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x8e0;
                  FUN_32b2_6d14();
                  iStack_6 = 0x32b2;
                  iStack_8 = 0x8e5;
                  FUN_32b2_7191();
                  if (!(bool)uVar11 && !(bool)uVar12) {
                    iStack_6 = *(undefined2 *)(unaff_BP + -0xb6);
                    iStack_8 = *(undefined2 *)(unaff_BP + -0xb8);
                    iStack_a = *(undefined2 *)(unaff_BP + -0xba);
                    uStack_c = *(undefined2 *)(unaff_BP + -0xbc);
                    uStack_e = 0x32b2;
                    uStack_10 = 0x8ff;
                    FUN_32b2_7592();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x909;
                    FUN_32b2_6d14();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x911;
                    FUN_32b2_7154();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x916;
                    FUN_32b2_6fd6();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x91e;
                    FUN_32b2_6d14();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x927;
                    FUN_32b2_710c();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x92c;
                    FUN_32b2_7182();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x935;
                    FUN_32b2_6e99();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x93d;
                    FUN_32b2_710c();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x945;
                    FUN_32b2_7154();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x94e;
                    FUN_32b2_6e99();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x957;
                    FUN_32b2_6eb1();
                    iStack_8 = unaff_BP + -0x8a;
                    iStack_a = unaff_BP + -0x62;
                    uStack_c = 0x32b2;
                    uStack_e = 0x969;
                    FUN_32b2_6cc6();
                    uStack_c = 0x32b2;
                    uStack_e = 0x96e;
                    FUN_32b2_7258();
                    uStack_14 = 0x32b2;
                    uStack_16 = 0x978;
                    FUN_32b2_6eb1();
                    uStack_14 = 0x32b2;
                    uStack_16 = 0x980;
                    FUN_32b2_6cc6();
                    uStack_14 = 0x32b2;
                    uStack_16 = 0x985;
                    FUN_32b2_7258();
                    uStack_1e = 0x98f;
                    FUN_32b2_6eb1();
                    uStack_1e = *(undefined2 *)(unaff_BP + -0x66);
                    uStack_20 = *(undefined2 *)(unaff_BP + -0x68);
                    uStack_22 = *(undefined2 *)(unaff_BP + -0x6a);
                    uStack_24 = *(undefined2 *)(unaff_BP + -0x48);
                    uStack_26 = *(undefined2 *)(unaff_BP + -0x4a);
                    uStack_2a = *(undefined2 *)(unaff_BP + -0x4e);
                    uStack_2c = 0x32b2;
                    uStack_2e = 0x9b0;
                    FUN_32b2_6d14();
                    uStack_34 = 0x32b2;
                    uStack_36 = 0x9ba;
                    FUN_32b2_6eb1();
                    uStack_34 = 0x32b2;
                    uStack_36 = 0x9c3;
                    FUN_32b2_6d14();
                    FUN_32b2_6eb1();
                    func_0x0003fc09(0x32b2,0);
                    uVar11 = &stack0x0000 == (undefined1 *)0x6;
                    iStack_8 = 0x32b2;
                    iStack_a = 0x9df;
                    FUN_32b2_6cc6();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x9e7;
                    FUN_32b2_6cc6();
                    iStack_8 = 0x32b2;
                    iStack_a = 0x9ec;
                    FUN_32b2_7191();
                    if ((bool)uVar11) {
                      uVar6 = *(undefined2 *)(unaff_BP + 8);
                      *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                      *(undefined2 *)(unaff_BP + -0x60) = uVar6;
                    }
                    iStack_8 = 0x32b2;
                    iStack_a = 0xa02;
                    FUN_32b2_6cc6();
                    iStack_8 = 0x32b2;
                    iStack_a = 0xa0a;
                    FUN_32b2_6cc6();
                    iStack_8 = 0x32b2;
                    iStack_a = 0xa0f;
                    FUN_32b2_7191();
                    if ((bool)uVar11) {
                      uVar6 = *(undefined2 *)(unaff_BP + 0xc);
                      *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                      *(undefined2 *)(unaff_BP + -0x88) = uVar6;
                    }
                    uVar6 = *(undefined2 *)(unaff_BP + -0x60);
                    puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
                    *puVar7 = *(undefined2 *)(unaff_BP + -0x62);
                    puVar7[1] = uVar6;
                    uVar6 = *(undefined2 *)(unaff_BP + -0x88);
                    puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
                    *puVar7 = *(undefined2 *)(unaff_BP + -0x8a);
                    puVar7[1] = uVar6;
                    *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
                  }
                  return *(undefined2 *)(unaff_BP + -0x36);
                }
              }
              return 0;
            }
            iStack_6 = 0x3f5;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x3ff;
            FUN_32b2_7154();
            iStack_6 = 0x405;
            FUN_32b2_6eb1();
            *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -8);
            *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -6);
            *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -4);
            *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -2);
            *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x10);
            *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0xe);
            *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xc);
            *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -10);
            *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x46);
            *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x44);
            *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x42);
            *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
          }
          return 0;
        }
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x22b2;
        uStack_c = 0xffcb;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xffd5;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0xffdd;
        puVar7 = (undefined2 *)FUN_1def_05d1();
        uVar6 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0x962) = *puVar7;
        *(undefined2 *)(unaff_BP + -0x960) = uVar6;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 8;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x12;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x1a;
        puVar7 = (undefined2 *)func_0x0001e558();
        uVar6 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0x95e) = *puVar7;
        *(undefined2 *)(unaff_BP + -0x95c) = uVar6;
        puVar9 = &uStack_16;
        puVar7 = (undefined2 *)(unaff_BP + -0x96a);
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar3 = *puVar2;
        }
        uStack_1a = 0x41;
        iVar8 = FUN_17a6_0cba();
        if (0 < iVar8) {
          *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
        }
        puVar7 = (undefined2 *)(unaff_BP + -0x96a);
        puVar9 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar3 = *puVar2;
        }
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x11f2;
        uStack_c = 0x74;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x7e;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x86;
        puVar7 = (undefined2 *)FUN_1def_05d1();
        uVar6 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0x96a) = *puVar7;
        *(undefined2 *)(unaff_BP + -0x968) = uVar6;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0xb1;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbb;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0xc3;
        puVar7 = (undefined2 *)func_0x0001e558();
        uVar6 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0x966) = *puVar7;
        *(undefined2 *)(unaff_BP + -0x964) = uVar6;
        if (*(int *)(unaff_BP + -0xa7a) != 0) {
          puVar9 = &uStack_16;
          puVar7 = (undefined2 *)(unaff_BP + -0x96a);
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar3 = puVar9;
            puVar9 = puVar9 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          uStack_1a = 0xf1;
          iVar8 = FUN_17a6_0cba();
          if (0 < iVar8) {
            *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
          }
        }
        while (*(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1,
              *(int *)(unaff_BP + -0xa26) <= *(int *)(unaff_BP + -0x916)) {
          puVar9 = (undefined2 *)(unaff_BP + -0x496);
          puVar7 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar3 = puVar9;
            puVar9 = puVar9 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          puVar7 = (undefined2 *)(unaff_BP + -0x96a);
          puVar9 = (undefined2 *)(unaff_BP + -0x496);
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar3 = puVar7;
            puVar7 = puVar7 + 1;
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar3 = *puVar2;
          }
          if ((*(byte *)(unaff_BP + -0x481) & 2) != 0) {
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0x151;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0x15a;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0x15f;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0x169;
            func_0x000299d1();
            uStack_12 = 0x22b2;
            uStack_14 = 0x172;
            func_0x000297e6();
            uStack_12 = 0x22b2;
            uStack_14 = 0x177;
            func_0x00029d78();
            uStack_1a = 0x22b2;
            func_0x000299d1();
            uStack_1a = 0x22b2;
            func_0x000297e6();
            uStack_1a = 0x22b2;
            func_0x00029d78();
            uStack_22 = 0x22b2;
            uStack_24 = 0x199;
            func_0x000299d1();
            uStack_22 = 0x22b2;
            uStack_24 = 0x19e;
            FUN_1def_043a();
            uVar6 = *(undefined2 *)0x9984;
            uVar10 = *(undefined2 *)0x9986;
            *(undefined2 *)(unaff_BP + -0xaa0) = uVar6;
            *(undefined2 *)(unaff_BP + -0xa9e) = uVar10;
            *(undefined2 *)(unaff_BP + -0xa98) = uVar6;
            *(undefined2 *)(unaff_BP + -0xa96) = uVar10;
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0x1d0;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0x1d9;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0x1de;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0x1e8;
            func_0x000299d1();
            uStack_12 = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0x1f1;
            puVar7 = (undefined2 *)FUN_1def_05d1();
            uVar6 = *puVar7;
            uVar10 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0xa9c) = uVar6;
            *(undefined2 *)(unaff_BP + -0xa9a) = uVar10;
            *(undefined2 *)(unaff_BP + -0xaa4) = uVar6;
            *(undefined2 *)(unaff_BP + -0xaa2) = uVar10;
            *(undefined2 *)(unaff_BP + -0xa7a) = 1;
            *(undefined2 *)(unaff_BP + -0xa18) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        *(undefined2 *)(unaff_BP + -0xa26) = 1;
        do {
          if (*(int *)(unaff_BP + -0x916) < *(int *)(unaff_BP + -0xa26)) {
            *(undefined2 *)(unaff_BP + -0xa26) = 1;
            do {
              if (*(int *)(unaff_BP + -0x916) < *(int *)(unaff_BP + -0xa26)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar9 = (undefined2 *)(unaff_BP + -0x496);
              puVar7 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
              for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar3 = puVar9;
                puVar9 = puVar9 + 1;
                puVar2 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar3 = *puVar2;
              }
              puVar7 = (undefined2 *)(unaff_BP + -0x96a);
              puVar9 = (undefined2 *)(unaff_BP + -0x496);
              for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar3 = puVar7;
                puVar7 = puVar7 + 1;
                puVar2 = puVar9;
                puVar9 = puVar9 + 1;
                *puVar3 = *puVar2;
              }
              if (((*(byte *)(unaff_BP + -0x481) & 2) == 0) &&
                 ((*(byte *)(unaff_BP + -0x481) & 4) == 0)) {
                func_0x000297e6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                uStack_c = 0x7c9;
                func_0x000299d1();
                iStack_a = 0x22b2;
                uStack_c = 0x7d2;
                func_0x000297e6();
                iStack_a = 0x22b2;
                uStack_c = 0x7d7;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                uStack_14 = 0x7e1;
                func_0x000299d1();
                uStack_12 = 0x22b2;
                uStack_14 = 0x7ea;
                func_0x000297e6();
                uStack_12 = 0x22b2;
                uStack_14 = 0x7ef;
                func_0x00029d78();
                uStack_1a = 0x22b2;
                func_0x000299d1();
                uStack_1a = 0x22b2;
                func_0x000297e6();
                uStack_1a = 0x22b2;
                func_0x00029d78();
                uStack_22 = 0x22b2;
                uStack_24 = 0x811;
                func_0x000299d1();
                uStack_22 = 0x22b2;
                uStack_24 = 0x816;
                FUN_1def_043a();
                uVar6 = *(undefined2 *)0x9984;
                uVar10 = *(undefined2 *)0x9986;
                *(undefined2 *)(unaff_BP + -0xaa0) = uVar6;
                *(undefined2 *)(unaff_BP + -0xa9e) = uVar10;
                *(undefined2 *)(unaff_BP + -0xa98) = uVar6;
                *(undefined2 *)(unaff_BP + -0xa96) = uVar10;
                func_0x000297e6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                uStack_c = 0x848;
                func_0x000299d1();
                iStack_a = 0x22b2;
                uStack_c = 0x851;
                func_0x000297e6();
                iStack_a = 0x22b2;
                uStack_c = 0x856;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                uStack_14 = 0x860;
                func_0x000299d1();
                uStack_12 = 1;
                uStack_14 = 0x22b2;
                uStack_16 = 0x869;
                puVar7 = (undefined2 *)FUN_1def_05d1();
                uVar6 = *puVar7;
                uVar10 = puVar7[1];
                *(undefined2 *)(unaff_BP + -0xa9c) = uVar6;
                *(undefined2 *)(unaff_BP + -0xa9a) = uVar10;
                *(undefined2 *)(unaff_BP + -0xaa4) = uVar6;
                *(undefined2 *)(unaff_BP + -0xaa2) = uVar10;
                *(undefined2 *)(unaff_BP + -0xa7c) = 1;
                *(undefined2 *)(unaff_BP + -0xa7a) = 1;
                *(undefined2 *)(unaff_BP + -0xa18) = 1;
                while (uVar11 = *(uint *)(unaff_BP + -0xa18) < *(uint *)(unaff_BP + -0x914),
                      (int)*(uint *)(unaff_BP + -0xa18) <= (int)*(uint *)(unaff_BP + -0x914)) {
                  if (*(int *)(unaff_BP + -0xa26) != *(int *)(unaff_BP + -0xa18)) {
                    puVar9 = (undefined2 *)(unaff_BP + -0x948);
                    puVar7 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa18) * 0x16 + -0x906);
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar3 = puVar9;
                      puVar9 = puVar9 + 1;
                      puVar2 = puVar7;
                      puVar7 = puVar7 + 1;
                      *puVar3 = *puVar2;
                    }
                    func_0x000297e6();
                    func_0x00029d78();
                    iStack_a = 0x22b2;
                    uStack_c = 0x916;
                    func_0x000299d1();
                    iStack_a = 0x22b2;
                    uStack_c = 0x91f;
                    func_0x000297e6();
                    iStack_a = 0x22b2;
                    uStack_c = 0x924;
                    func_0x00029d78();
                    uStack_12 = 0x22b2;
                    uStack_14 = 0x92e;
                    func_0x000299d1();
                    uStack_12 = 1;
                    uStack_14 = 0x22b2;
                    uStack_16 = 0x937;
                    puVar7 = (undefined2 *)func_0x0001e558();
                    uVar6 = puVar7[1];
                    *(undefined2 *)(unaff_BP + -0xa90) = *puVar7;
                    *(undefined2 *)(unaff_BP + -0xa8e) = uVar6;
                    func_0x000297e6();
                    func_0x00029d78();
                    iStack_a = 0x22b2;
                    uStack_c = 0x961;
                    func_0x000299d1();
                    iStack_a = 0x22b2;
                    uStack_c = 0x96a;
                    func_0x000297e6();
                    iStack_a = 0x22b2;
                    uStack_c = 0x96f;
                    func_0x00029d78();
                    uStack_12 = 0x22b2;
                    uStack_14 = 0x979;
                    func_0x000299d1();
                    uStack_12 = 1;
                    uStack_14 = 0x22b2;
                    uStack_16 = 0x982;
                    puVar7 = (undefined2 *)func_0x0001e558();
                    uVar11 = (undefined1 *)0xffed < &uStack_12;
                    uVar12 = &stack0x0000 == (undefined1 *)0x0;
                    uVar6 = puVar7[1];
                    *(undefined2 *)(unaff_BP + -0xa94) = *puVar7;
                    *(undefined2 *)(unaff_BP + -0xa92) = uVar6;
                    func_0x00029834();
                    func_0x000297e6();
                    func_0x00029d78();
                    FUN_28b3_1181();
                    if (!(bool)uVar11 && !(bool)uVar12) {
                      func_0x00029834();
                      func_0x000297e6();
                      func_0x00029d78();
                      FUN_28b3_1181();
                      if (!(bool)uVar11 && !(bool)uVar12) goto LAB_3ab8_5d4b;
                    }
                    func_0x00029834();
                    func_0x000297e6();
                    func_0x00029d78();
                    FUN_28b3_1181();
                    if ((bool)uVar11) {
                      func_0x00029834();
                      func_0x000297e6();
                      func_0x00029d78();
                      FUN_28b3_1181();
                      if ((bool)uVar11) goto LAB_3ab8_5d4b;
                    }
                    puVar9 = &uStack_1a;
                    puVar7 = (undefined2 *)(unaff_BP + -0x948);
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar3 = puVar9;
                      puVar9 = puVar9 + 1;
                      puVar2 = puVar7;
                      puVar7 = puVar7 + 1;
                      *puVar3 = *puVar2;
                    }
                    puVar9 = &uStack_30;
                    puVar7 = (undefined2 *)(unaff_BP + -0x496);
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar3 = puVar9;
                      puVar9 = puVar9 + 1;
                      puVar2 = puVar7;
                      puVar7 = puVar7 + 1;
                      *puVar3 = *puVar2;
                    }
                    uStack_32 = 0x22b2;
                    uStack_34 = 0x8c1;
                    iVar8 = FUN_1def_1921();
                    if (iVar8 != 0) {
                      func_0x000297e6();
                      func_0x00029d78();
                      iStack_a = 0x22b2;
                      uStack_c = 0xa2d;
                      func_0x000299d1();
                      iStack_a = 0x22b2;
                      uStack_c = 0xa36;
                      func_0x000297e6();
                      iStack_a = 0x22b2;
                      uStack_c = 0xa3b;
                      func_0x00029d78();
                      uStack_12 = 0x22b2;
                      uStack_14 = 0xa45;
                      func_0x000299d1();
                      uStack_12 = 1;
                      uStack_14 = 0x22b2;
                      uStack_16 = 0xa4e;
                      puVar7 = (undefined2 *)FUN_1def_05d1();
                      uVar11 = (undefined1 *)0xffed < &uStack_12;
                      uVar12 = &stack0x0000 == (undefined1 *)0x0;
                      uVar6 = puVar7[1];
                      *(undefined2 *)(unaff_BP + -0xa80) = *puVar7;
                      *(undefined2 *)(unaff_BP + -0xa7e) = uVar6;
                      func_0x000297e6();
                      func_0x000297e6();
                      func_0x00029bfc();
                      FUN_28b3_1181();
                      if ((bool)uVar11 || (bool)uVar12) {
                        func_0x000297e6();
                        func_0x000297e6();
                        func_0x00029c74();
                        FUN_28b3_1181();
                        if (!(bool)uVar11) {
                          *(undefined2 *)(unaff_BP + -0xa7c) = 0;
                        }
                      }
                      func_0x000297e6();
                      func_0x000297e6();
                      func_0x00029bfc();
                      FUN_28b3_1181();
                      if ((bool)uVar11 || (bool)uVar12) {
                        func_0x000297e6();
                        func_0x000297e6();
                        func_0x00029c74();
                        FUN_28b3_1181();
                        if (!(bool)uVar11) {
                          *(undefined2 *)(unaff_BP + -0xa7a) = 0;
                        }
                      }
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if ((bool)uVar11) {
                        func_0x000297e6();
                        func_0x00029d78();
                        func_0x000297e6();
                        func_0x00029d78();
                        func_0x00029c74();
                        FUN_28b3_1181();
                        if ((bool)uVar11) {
                          uVar6 = *(undefined2 *)(unaff_BP + -0xa7e);
                          *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
                          *(undefined2 *)(unaff_BP + -0xa9a) = uVar6;
                        }
                      }
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if (!(bool)uVar11 && !(bool)uVar12) {
                        func_0x000297e6();
                        func_0x00029d78();
                        func_0x000297e6();
                        func_0x00029d78();
                        func_0x00029bfc();
                        FUN_28b3_1181();
                        if (!(bool)uVar11 && !(bool)uVar12) {
                          uVar6 = *(undefined2 *)(unaff_BP + -0xa7e);
                          *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)(unaff_BP + -0xa80);
                          *(undefined2 *)(unaff_BP + -0xa9e) = uVar6;
                        }
                      }
                    }
                  }
LAB_3ab8_5d4b:
                  *(int *)(unaff_BP + -0xa18) = *(int *)(unaff_BP + -0xa18) + 1;
                }
                func_0x000297e6();
                func_0x00029d78();
                func_0x000297e6();
                func_0x00029d78();
                func_0x00029c74();
                FUN_28b3_1181();
                if (!(bool)uVar11) {
                  iStack_6 = *(undefined2 *)0x99ee;
                  iStack_8 = *(undefined2 *)0x99ec;
                  iStack_a = 0x22b2;
                  uStack_c = 0xbef;
                  func_0x000297e6();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xbf9;
                  func_0x000299d1();
                  uStack_12 = 0;
                  uStack_14 = 0x22b2;
                  uStack_16 = 0xc01;
                  puVar7 = (undefined2 *)FUN_1def_05d1();
                  uVar6 = puVar7[1];
                  *(undefined2 *)(unaff_BP + -0x962) = *puVar7;
                  *(undefined2 *)(unaff_BP + -0x960) = uVar6;
                  iStack_6 = *(undefined2 *)0x99ee;
                  iStack_8 = *(undefined2 *)0x99ec;
                  iStack_a = 0x1bb4;
                  uStack_c = 0xc2c;
                  func_0x000297e6();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xc36;
                  func_0x000299d1();
                  uStack_12 = 0;
                  uStack_14 = 0x22b2;
                  uVar10 = 0x1bb4;
                  uStack_16 = 0xc3e;
                  puVar7 = (undefined2 *)func_0x0001e558();
                  uVar6 = puVar7[1];
                  *(undefined2 *)(unaff_BP + -0x95e) = *puVar7;
                  *(undefined2 *)(unaff_BP + -0x95c) = uVar6;
                  if (*(int *)(unaff_BP + -0xa7c) != 0) {
                    puVar9 = &uStack_16;
                    puVar7 = (undefined2 *)(unaff_BP + -0x96a);
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar3 = puVar9;
                      puVar9 = puVar9 + 1;
                      puVar2 = puVar7;
                      puVar7 = puVar7 + 1;
                      *puVar3 = *puVar2;
                    }
                    uVar10 = 0x11f2;
                    uStack_1a = 0xc6c;
                    iVar8 = FUN_17a6_0cba();
                    if (0 < iVar8) {
                      *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
                    }
                  }
                  puVar7 = (undefined2 *)(unaff_BP + -0x96a);
                  puVar9 = (undefined2 *)(unaff_BP + -0x496);
                  for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                    puVar3 = puVar7;
                    puVar7 = puVar7 + 1;
                    puVar2 = puVar9;
                    puVar9 = puVar9 + 1;
                    *puVar3 = *puVar2;
                  }
                  iStack_6 = *(undefined2 *)0x99ee;
                  iStack_8 = *(undefined2 *)0x99ec;
                  uStack_c = 0xc9f;
                  iStack_a = uVar10;
                  func_0x000297e6();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xca9;
                  func_0x000299d1();
                  uStack_12 = 0;
                  uStack_14 = 0x22b2;
                  uStack_16 = 0xcb1;
                  puVar7 = (undefined2 *)FUN_1def_05d1();
                  uVar6 = puVar7[1];
                  *(undefined2 *)(unaff_BP + -0x96a) = *puVar7;
                  *(undefined2 *)(unaff_BP + -0x968) = uVar6;
                  iStack_6 = *(undefined2 *)0x99ee;
                  iStack_8 = *(undefined2 *)0x99ec;
                  iStack_a = 0x1bb4;
                  uStack_c = 0xcdc;
                  func_0x000297e6();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xce6;
                  func_0x000299d1();
                  uStack_12 = 0;
                  uStack_14 = 0x22b2;
                  uStack_16 = 0xcee;
                  puVar7 = (undefined2 *)func_0x0001e558();
                  uVar6 = puVar7[1];
                  *(undefined2 *)(unaff_BP + -0x966) = *puVar7;
                  *(undefined2 *)(unaff_BP + -0x964) = uVar6;
                  if (*(int *)(unaff_BP + -0xa7a) == 0) goto LAB_3ab8_61a7;
                }
                puVar9 = &uStack_16;
                puVar7 = (undefined2 *)(unaff_BP + -0x96a);
                for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                  puVar3 = puVar9;
                  puVar9 = puVar9 + 1;
                  puVar2 = puVar7;
                  puVar7 = puVar7 + 1;
                  *puVar3 = *puVar2;
                }
                uStack_1a = 0xd1c;
                iVar8 = FUN_17a6_0cba();
                if (0 < iVar8) {
                  *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
                }
              }
LAB_3ab8_61a7:
              *(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1;
            } while( true );
          }
          *(undefined2 *)(unaff_BP + -0xa78) = 0;
          puVar9 = (undefined2 *)(unaff_BP + -0x496);
          puVar7 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar3 = puVar9;
            puVar9 = puVar9 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          puVar7 = (undefined2 *)(unaff_BP + -0x96a);
          puVar9 = (undefined2 *)(unaff_BP + -0x496);
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar3 = puVar7;
            puVar7 = puVar7 + 1;
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar3 = *puVar2;
          }
          if ((*(byte *)(unaff_BP + -0x481) & 4) != 0) {
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0x6ed;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0x6f6;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0x6fb;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0x705;
            func_0x000299d1();
            uStack_12 = 0x22b2;
            uStack_14 = 0x70e;
            func_0x000297e6();
            uStack_12 = 0x22b2;
            uStack_14 = 0x713;
            func_0x00029d78();
            uStack_1a = 0x22b2;
            func_0x000299d1();
            uStack_1a = 0x22b2;
            func_0x000297e6();
            uStack_1a = 0x22b2;
            func_0x00029d78();
            uStack_22 = 0x22b2;
            uStack_24 = 0x735;
            func_0x000299d1();
            uStack_22 = 0x22b2;
            uStack_24 = 0x73a;
            FUN_1def_043a();
            uVar6 = *(undefined2 *)0x9986;
            *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)0x9984;
            *(undefined2 *)(unaff_BP + -0xa9e) = uVar6;
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0x764;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0x76d;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0x772;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0x77c;
            func_0x000299d1();
            uStack_12 = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0x785;
            puVar7 = (undefined2 *)FUN_1def_05d1();
            uVar6 = *puVar7;
            uVar10 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0xa9c) = uVar6;
            *(undefined2 *)(unaff_BP + -0xa9a) = uVar10;
            *(undefined2 *)(unaff_BP + -0xaa8) = uVar6;
            *(undefined2 *)(unaff_BP + -0xaa6) = uVar10;
            *(undefined2 *)(unaff_BP + -0xa18) = 1;
            while (uVar11 = *(uint *)(unaff_BP + -0xa18) < *(uint *)(unaff_BP + -0x914),
                  (int)*(uint *)(unaff_BP + -0xa18) <= (int)*(uint *)(unaff_BP + -0x914)) {
              if (*(int *)(unaff_BP + -0xa26) != *(int *)(unaff_BP + -0xa18)) {
                puVar9 = (undefined2 *)(unaff_BP + -0x948);
                puVar7 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa18) * 0x16 + -0x906);
                for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                  puVar3 = puVar9;
                  puVar9 = puVar9 + 1;
                  puVar2 = puVar7;
                  puVar7 = puVar7 + 1;
                  *puVar3 = *puVar2;
                }
                func_0x000297e6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                uStack_c = 0x329;
                func_0x000299d1();
                iStack_a = 0x22b2;
                uStack_c = 0x332;
                func_0x000297e6();
                iStack_a = 0x22b2;
                uStack_c = 0x337;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                uStack_14 = 0x341;
                func_0x000299d1();
                uStack_12 = 1;
                uStack_14 = 0x22b2;
                uStack_16 = 0x34a;
                puVar7 = (undefined2 *)func_0x0001e558();
                uVar6 = puVar7[1];
                *(undefined2 *)(unaff_BP + -0xa90) = *puVar7;
                *(undefined2 *)(unaff_BP + -0xa8e) = uVar6;
                func_0x000297e6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                uStack_c = 0x374;
                func_0x000299d1();
                iStack_a = 0x22b2;
                uStack_c = 0x37d;
                func_0x000297e6();
                iStack_a = 0x22b2;
                uStack_c = 0x382;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                uStack_14 = 0x38c;
                func_0x000299d1();
                uStack_12 = 1;
                uStack_14 = 0x22b2;
                uStack_16 = 0x395;
                puVar7 = (undefined2 *)func_0x0001e558();
                uVar6 = puVar7[1];
                *(undefined2 *)(unaff_BP + -0xa94) = *puVar7;
                *(undefined2 *)(unaff_BP + -0xa92) = uVar6;
                uVar4 = *(uint *)(unaff_BP + -0x914);
                uVar11 = uVar4 < 3;
                uVar12 = uVar4 == 3;
                if ((int)uVar4 < 4) {
                  func_0x00029834();
                  func_0x000297e6();
                  func_0x00029d78();
                  FUN_28b3_1181();
                  if ((bool)uVar11 || (bool)uVar12) {
LAB_3ab8_56de:
                    func_0x00029834();
                    func_0x000297e6();
                    func_0x00029d78();
                    FUN_28b3_1181();
                    if ((bool)uVar11) goto LAB_3ab8_5700;
                  }
                  else {
                    func_0x00029834();
                    func_0x000297e6();
                    func_0x00029d78();
                    FUN_28b3_1181();
                    if ((bool)uVar11 || (bool)uVar12) goto LAB_3ab8_56de;
LAB_3ab8_571a:
                    if (*(int *)(unaff_BP + -0x952) == 0) goto LAB_3ab8_575e;
                    *(undefined2 *)(unaff_BP + -0xa78) = 1;
                  }
                }
                else {
                  func_0x00029834();
                  func_0x000297e6();
                  func_0x00029d78();
                  FUN_28b3_1181();
                  if (!(bool)uVar11 && !(bool)uVar12) {
                    func_0x00029834();
                    func_0x000297e6();
                    func_0x00029d78();
                    FUN_28b3_1181();
                    if (!(bool)uVar11 && !(bool)uVar12) goto LAB_3ab8_571a;
                  }
                  func_0x00029834();
                  func_0x000297e6();
                  func_0x00029d78();
                  FUN_28b3_1181();
                  if ((bool)uVar11) {
LAB_3ab8_5700:
                    uVar11 = 1;
                    func_0x00029834();
                    func_0x000297e6();
                    func_0x00029d78();
                    FUN_28b3_1181();
                    if ((bool)uVar11) goto LAB_3ab8_571a;
                  }
                }
                puVar9 = &uStack_1a;
                puVar7 = (undefined2 *)(unaff_BP + -0x948);
                for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                  puVar3 = puVar9;
                  puVar9 = puVar9 + 1;
                  puVar2 = puVar7;
                  puVar7 = puVar7 + 1;
                  *puVar3 = *puVar2;
                }
                puVar9 = &uStack_30;
                puVar7 = (undefined2 *)(unaff_BP + -0x496);
                for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                  puVar3 = puVar9;
                  puVar9 = puVar9 + 1;
                  puVar2 = puVar7;
                  puVar7 = puVar7 + 1;
                  *puVar3 = *puVar2;
                }
                uStack_32 = 0x22b2;
                uStack_34 = 0x2d4;
                iVar8 = FUN_1def_1921();
                if (iVar8 != 0) {
                  func_0x000297e6();
                  func_0x00029d78();
                  iStack_a = 0x22b2;
                  uStack_c = 0x430;
                  func_0x000299d1();
                  iStack_a = 0x22b2;
                  uStack_c = 0x439;
                  func_0x000297e6();
                  iStack_a = 0x22b2;
                  uStack_c = 0x43e;
                  func_0x00029d78();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0x448;
                  func_0x000299d1();
                  uStack_12 = 1;
                  uStack_14 = 0x22b2;
                  uStack_16 = 0x451;
                  puVar7 = (undefined2 *)FUN_1def_05d1();
                  uVar6 = puVar7[1];
                  *(undefined2 *)(unaff_BP + -0xa80) = *puVar7;
                  *(undefined2 *)(unaff_BP + -0xa7e) = uVar6;
                  uVar12 = 0;
                  uVar13 = *(int *)(unaff_BP + -0x952) == 0;
                  uVar11 = uVar12;
                  if ((bool)uVar13) {
LAB_3ab8_591f:
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar11) {
                      uVar6 = *(undefined2 *)(unaff_BP + -0xa7e);
                      *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
                      *(undefined2 *)(unaff_BP + -0xa9a) = uVar6;
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if (!(bool)uVar11 && !(bool)uVar13) {
                      uVar6 = *(undefined2 *)(unaff_BP + -0xa7e);
                      *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)(unaff_BP + -0xa80);
                      *(undefined2 *)(unaff_BP + -0xa9e) = uVar6;
                    }
                  }
                  else {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if (!(bool)uVar12 && !(bool)uVar13) {
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      uVar11 = 1;
                      if ((bool)uVar12) goto LAB_3ab8_591f;
                    }
                  }
                }
              }
LAB_3ab8_575e:
              *(int *)(unaff_BP + -0xa18) = *(int *)(unaff_BP + -0xa18) + 1;
            }
            func_0x000297e6();
            func_0x00029d78();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            uVar6 = 0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar11) {
              if (*(int *)(unaff_BP + -0xa78) != 0) {
                *(undefined2 *)0xc22 = 1;
                iStack_6 = 2;
                iStack_8 = 0x11;
                iStack_a = unaff_BP + -0x10;
                uStack_c = 0x22b2;
                uVar6 = 0xdef;
                uStack_e = 0x54c;
                FUN_1000_02b5();
              }
              iStack_6 = *(undefined2 *)0x99ee;
              iStack_8 = *(undefined2 *)0x99ec;
              uStack_c = 0x568;
              iStack_a = uVar6;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0x572;
              func_0x000299d1();
              uStack_12 = 0;
              uStack_14 = 0x22b2;
              uStack_16 = 0x57a;
              puVar7 = (undefined2 *)FUN_1def_05d1();
              uVar6 = puVar7[1];
              *(undefined2 *)(unaff_BP + -0x962) = *puVar7;
              *(undefined2 *)(unaff_BP + -0x960) = uVar6;
              iStack_6 = *(undefined2 *)0x99ee;
              iStack_8 = *(undefined2 *)0x99ec;
              iStack_a = 0x1bb4;
              uStack_c = 0x5a5;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0x5af;
              func_0x000299d1();
              uStack_12 = 0;
              uStack_14 = 0x22b2;
              uStack_16 = 0x5b7;
              puVar7 = (undefined2 *)func_0x0001e558();
              uVar6 = puVar7[1];
              *(undefined2 *)(unaff_BP + -0x95e) = *puVar7;
              *(undefined2 *)(unaff_BP + -0x95c) = uVar6;
              puVar9 = &uStack_16;
              puVar7 = (undefined2 *)(unaff_BP + -0x96a);
              for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar3 = puVar9;
                puVar9 = puVar9 + 1;
                puVar2 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar3 = *puVar2;
              }
              uStack_1a = 0x5de;
              iVar8 = FUN_17a6_0cba();
              if (0 < iVar8) {
                *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
              }
              puVar7 = (undefined2 *)(unaff_BP + -0x96a);
              puVar9 = (undefined2 *)(unaff_BP + -0x496);
              for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar3 = puVar7;
                puVar7 = puVar7 + 1;
                puVar2 = puVar9;
                puVar9 = puVar9 + 1;
                *puVar3 = *puVar2;
              }
              iStack_6 = *(undefined2 *)0x99ee;
              iStack_8 = *(undefined2 *)0x99ec;
              iStack_a = 0x11f2;
              uStack_c = 0x611;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0x61b;
              func_0x000299d1();
              uStack_12 = 0;
              uStack_14 = 0x22b2;
              uStack_16 = 0x623;
              puVar7 = (undefined2 *)FUN_1def_05d1();
              uVar6 = puVar7[1];
              *(undefined2 *)(unaff_BP + -0x96a) = *puVar7;
              *(undefined2 *)(unaff_BP + -0x968) = uVar6;
              iStack_6 = *(undefined2 *)0x99ee;
              iStack_8 = *(undefined2 *)0x99ec;
              iStack_a = 0x1bb4;
              uStack_c = 0x64e;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0x658;
              func_0x000299d1();
              uStack_12 = 0;
              uStack_14 = 0x22b2;
              uStack_16 = 0x660;
              puVar7 = (undefined2 *)func_0x0001e558();
              uVar6 = puVar7[1];
              *(undefined2 *)(unaff_BP + -0x966) = *puVar7;
              *(undefined2 *)(unaff_BP + -0x964) = uVar6;
            }
            puVar9 = &uStack_16;
            puVar7 = (undefined2 *)(unaff_BP + -0x96a);
            for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar3 = puVar9;
              puVar9 = puVar9 + 1;
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar2;
            }
            uStack_1a = 0x687;
            iVar8 = FUN_17a6_0cba();
            if (0 < iVar8) {
              *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
            }
          }
          *(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1;
        } while( true );
      }
    } while (*(int *)(unaff_BP + -0xa26) == *(int *)(unaff_BP + -0xa18));
    puVar9 = (undefined2 *)(unaff_BP + -0x948);
    puVar7 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa18) * 0x16 + -0x906);
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    uStack_c = 0xfd3c;
    func_0x000299d1();
    iStack_a = 0x22b2;
    uStack_c = 0xfd45;
    func_0x000297e6();
    iStack_a = 0x22b2;
    uStack_c = 0xfd4a;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfd54;
    func_0x000299d1();
    uStack_12 = 1;
    uStack_14 = 0x22b2;
    uStack_16 = 0xfd5d;
    puVar7 = (undefined2 *)func_0x0001e558();
    uVar6 = puVar7[1];
    *(undefined2 *)(unaff_BP + -0xa90) = *puVar7;
    *(undefined2 *)(unaff_BP + -0xa8e) = uVar6;
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    uStack_c = 0xfd87;
    func_0x000299d1();
    iStack_a = 0x22b2;
    uStack_c = 0xfd90;
    func_0x000297e6();
    iStack_a = 0x22b2;
    uStack_c = 0xfd95;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfd9f;
    func_0x000299d1();
    uStack_12 = 1;
    uStack_14 = 0x22b2;
    uStack_16 = 0xfda8;
    in_BX = (undefined2 *)func_0x0001e558();
    in_CF = (undefined1 *)0xffed < &uStack_12;
    in_ZF = &stack0x0000 == (undefined1 *)0x0;
    in_AX = *in_BX;
  } while( true );
}



/* 3ab8:52bb  FUN_3ab8_52bb  383 bytes, 0 callers */

void FUN_3ab8_52bb(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 auStack_12 [3];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_2 = 0x3ab8;
  uStack_4 = 0xfe44;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xfe49;
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xfe53;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xfe5c;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xfe61;
  func_0x00029d78();
  auStack_12[0] = 0x22b2;
  func_0x000299d1();
  auStack_12[0] = 1;
  puVar2 = (undefined2 *)FUN_1def_05d1(0x22b2);
  uVar3 = (undefined1 *)0xffed < auStack_12;
  uVar4 = &stack0x0000 == (undefined1 *)0x0;
  uVar1 = puVar2[1];
  *(undefined2 *)(unaff_BP + -0xa80) = *puVar2;
  *(undefined2 *)(unaff_BP + -0xa7e) = uVar1;
  uStack_2 = 0x1bb4;
  uStack_4 = 0xfe8f;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xfe98;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xfea1;
  func_0x00029bfc();
  uStack_2 = 0x22b2;
  uStack_4 = 0xfea6;
  FUN_28b3_1181();
  if ((bool)uVar3 || (bool)uVar4) {
    uStack_2 = 0x22b2;
    uStack_4 = 0xfeb1;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xfeba;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xfec3;
    func_0x00029c74();
    uStack_2 = 0x22b2;
    uStack_4 = 0xfec8;
    FUN_28b3_1181();
    if (!(bool)uVar3) {
      *(undefined2 *)(unaff_BP + -0xa7a) = 0;
    }
  }
  uStack_2 = 0x22b2;
  uStack_4 = 0xfed9;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xfee2;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xfee7;
  FUN_28b3_1181();
  if ((bool)uVar3) {
    uStack_2 = 0x22b2;
    uStack_4 = 0xfef2;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xfef7;
    func_0x00029d78();
    uStack_2 = 0x22b2;
    uStack_4 = 0xff00;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xff05;
    func_0x00029d78();
    uStack_2 = 0x22b2;
    uStack_4 = 0xff0e;
    func_0x00029c74();
    uStack_2 = 0x22b2;
    uStack_4 = 0xff13;
    FUN_28b3_1181();
    if ((bool)uVar3) {
      uVar1 = *(undefined2 *)(unaff_BP + -0xa7e);
      *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
      *(undefined2 *)(unaff_BP + -0xa9a) = uVar1;
    }
  }
  uStack_2 = 0x22b2;
  uStack_4 = 0xff2e;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xff37;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xff3c;
  FUN_28b3_1181();
  if ((bool)uVar3 || (bool)uVar4) {
    FUN_3ab8_5171();
    return;
  }
  uStack_2 = 0x22b2;
  uStack_4 = 0xff4a;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xff4f;
  func_0x00029d78();
  uStack_2 = 0x22b2;
  uStack_4 = 0xff58;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xff5d;
  func_0x00029d78();
  uStack_2 = 0x22b2;
  uStack_4 = 0xff66;
  func_0x00029bfc();
  uStack_2 = 0x22b2;
  uStack_4 = 0xff6b;
  FUN_28b3_1181();
  if ((bool)uVar3 || (bool)uVar4) {
    FUN_3ab8_5171();
    return;
  }
  uVar1 = *(undefined2 *)(unaff_BP + -0xa7e);
  *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)(unaff_BP + -0xa80);
  *(undefined2 *)(unaff_BP + -0xa9e) = uVar1;
  FUN_3ab8_5171();
  return;
}



/* 3ab8:5403  FUN_3ab8_5403  3565 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far FUN_3ab8_5403(void)

{
  int *piVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int unaff_BP;
  int unaff_SI;
  undefined2 *puVar7;
  int unaff_DI;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 in_ZF;
  undefined1 uVar12;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  func_0x000297e6();
  func_0x00029d78();
  func_0x000297e6();
  func_0x00029d78();
  iVar6 = -0x6654;
  func_0x00029bfc();
  FUN_28b3_1181();
  if ((bool)in_CF || (bool)in_ZF) {
    piVar1 = (int *)(iVar6 + unaff_DI + 0x1486);
    *piVar1 = *piVar1 + -1;
    *(int *)(unaff_DI + 0x149e) = *(int *)(unaff_DI + 0x149e) + -1;
    puVar4 = (undefined2 *)(unaff_BP + unaff_SI + 0x7285);
    iStack_6 = 0xe9;
    (*(code *)*puVar4)();
    iStack_6 = 0xf3;
    FUN_32b2_704d();
    iStack_6 = 0xfc;
    FUN_32b2_710c();
    iStack_6 = 0x104;
    FUN_32b2_6eb1();
    while( true ) {
      iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
      iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
      uStack_c = 0x32b2;
      uStack_e = 0x119;
      FUN_32b2_75fe();
      iStack_6 = 0x32b2;
      iStack_8 = 0x123;
      FUN_32b2_6d14();
      iStack_6 = 0x32b2;
      iStack_8 = 299;
      FUN_32b2_704d();
      iStack_6 = 0x32b2;
      iStack_8 = 0x133;
      FUN_32b2_7095();
      iStack_6 = 0x32b2;
      iStack_8 = 0x13b;
      FUN_32b2_6eb1();
      iStack_6 = *(undefined2 *)(unaff_BP + -0xb6);
      iStack_8 = *(undefined2 *)(unaff_BP + -0xb8);
      iStack_a = *(undefined2 *)(unaff_BP + -0xba);
      uStack_c = *(undefined2 *)(unaff_BP + -0xbc);
      uStack_e = 0x32b2;
      uStack_10 = 0x150;
      FUN_32b2_75ec();
      uVar10 = &stack0x0000 == (undefined1 *)0x6;
      iStack_8 = 0x32b2;
      iStack_a = 0x15a;
      FUN_32b2_6d14();
      iStack_8 = 0x32b2;
      iStack_a = 0x162;
      FUN_32b2_704d();
      iStack_8 = 0x32b2;
      iStack_a = 0x16a;
      FUN_32b2_7095();
      iStack_8 = 0x32b2;
      iStack_a = 0x173;
      FUN_32b2_6eb1();
      iStack_8 = 0x32b2;
      iStack_a = 0x17b;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x183;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x188;
      FUN_32b2_7191();
      if ((bool)uVar10) {
        iStack_8 = 0x32b2;
        iStack_a = 0x192;
        FUN_32b2_6cc6();
        iStack_8 = 0x32b2;
        iStack_a = 0x19a;
        FUN_32b2_6cc6();
        iStack_8 = 0x32b2;
        iStack_a = 0x19f;
        FUN_32b2_7191();
        if ((bool)uVar10) {
          return 0;
        }
      }
      iStack_8 = unaff_BP + -0xa8;
      iStack_a = unaff_BP + -0x1c;
      uStack_c = *(undefined2 *)(unaff_BP + -0x7c);
      uStack_e = *(undefined2 *)(unaff_BP + -0x7e);
      uStack_10 = *(undefined2 *)(unaff_BP + -0x80);
      uStack_12 = *(undefined2 *)(unaff_BP + -0x82);
      uStack_14 = *(undefined2 *)(unaff_BP + -0x58);
      uStack_16 = *(undefined2 *)(unaff_BP + -0x5a);
      uStack_1a = *(undefined2 *)(unaff_BP + -0x5e);
      uStack_1e = 0x1d0;
      FUN_32b2_6cc6();
      uStack_1e = 0x1d5;
      FUN_32b2_7258();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1df;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1e7;
      FUN_32b2_6cc6();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1ec;
      FUN_32b2_7258();
      uStack_2c = 0x32b2;
      uStack_2e = 0x1f6;
      FUN_32b2_6eb1();
      uStack_2c = 0x32b2;
      uStack_2e = 0x1fa;
      iVar6 = func_0x0003fb3d();
      if (iVar6 == 0) break;
      iStack_8 = 0x32b2;
      iStack_a = 0x209;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x20e;
      FUN_32b2_7258();
      iStack_8 = 0x32b2;
      iStack_a = 0x216;
      FUN_32b2_6e99();
      iStack_8 = 0x32b2;
      iStack_a = 0x21e;
      FUN_32b2_6ef9();
      iStack_8 = unaff_BP + -0xb4;
      iStack_a = unaff_BP + -0xa4;
      uStack_c = 0x32b2;
      uStack_e = 0x231;
      FUN_32b2_6cc6();
      uStack_c = 0x32b2;
      uStack_e = 0x236;
      FUN_32b2_7258();
      uStack_14 = 0x32b2;
      uStack_16 = 0x240;
      FUN_32b2_6eb1();
      uStack_14 = 0x32b2;
      uStack_16 = 0x248;
      FUN_32b2_6cc6();
      uStack_14 = 0x32b2;
      uStack_16 = 0x24d;
      FUN_32b2_7258();
      uStack_1e = 599;
      FUN_32b2_6eb1();
      uStack_1e = 0x25f;
      FUN_32b2_6d14();
      uStack_24 = 0x32b2;
      uStack_26 = 0x269;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x271;
      FUN_32b2_6cc6();
      uStack_24 = 0x32b2;
      uStack_26 = 0x276;
      FUN_32b2_7258();
      uStack_24 = 0x32b2;
      uStack_26 = 0x27e;
      FUN_32b2_6e99();
      uStack_2c = 0x32b2;
      uStack_2e = 0x288;
      FUN_32b2_6eb1();
      uStack_2c = 0x32b2;
      uStack_2e = 0x290;
      FUN_32b2_6cc6();
      uStack_2c = 0x32b2;
      uStack_2e = 0x295;
      FUN_32b2_7258();
      uStack_34 = 0x32b2;
      uStack_36 = 0x29f;
      FUN_32b2_6eb1();
      uStack_34 = 0x32b2;
      uStack_36 = 0x2a7;
      FUN_32b2_6cc6();
      uStack_34 = 0x32b2;
      uStack_36 = 0x2ac;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      func_0x0003fc09(0x32b2,1);
      iStack_8 = unaff_BP + -0xe4;
      iStack_a = unaff_BP + -0xd0;
      uStack_c = 0x32b2;
      uStack_e = 0x2d4;
      FUN_32b2_6cc6();
      uStack_c = 0x32b2;
      uStack_e = 0x2d9;
      FUN_32b2_7258();
      uStack_14 = 0x32b2;
      uStack_16 = 0x2e3;
      FUN_32b2_6eb1();
      uStack_14 = 0x32b2;
      uStack_16 = 0x2eb;
      FUN_32b2_6cc6();
      uStack_14 = 0x32b2;
      uStack_16 = 0x2f0;
      FUN_32b2_7258();
      uStack_1e = 0x2fa;
      FUN_32b2_6eb1();
      uStack_1e = 0x302;
      FUN_32b2_6d14();
      uStack_24 = 0x32b2;
      uStack_26 = 0x30c;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x314;
      FUN_32b2_6d14();
      uStack_2c = 0x32b2;
      uStack_2e = 0x31e;
      FUN_32b2_6eb1();
      uStack_2c = 0x32b2;
      uStack_2e = 0x326;
      FUN_32b2_6cc6();
      uStack_2c = 0x32b2;
      uStack_2e = 0x32b;
      FUN_32b2_7258();
      uStack_34 = 0x32b2;
      uStack_36 = 0x335;
      FUN_32b2_6eb1();
      uStack_34 = 0x32b2;
      uStack_36 = 0x33d;
      FUN_32b2_6cc6();
      uStack_34 = 0x32b2;
      uStack_36 = 0x342;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      func_0x0003fc09(0x32b2,1);
      uVar10 = (undefined1 *)0xffc9 < &uStack_38;
      uVar11 = &stack0x0000 == (undefined1 *)0x2;
      iStack_6 = 0x360;
      FUN_32b2_6cc6();
      iStack_6 = 0x369;
      FUN_32b2_701d();
      iStack_6 = 0x36e;
      FUN_32b2_7258();
      iStack_6 = 0x376;
      FUN_32b2_6e99();
      iStack_6 = 0x37e;
      FUN_32b2_6ef9();
      iStack_6 = 0x387;
      FUN_32b2_6cc6();
      iStack_6 = 0x390;
      FUN_32b2_701d();
      iStack_6 = 0x395;
      FUN_32b2_7258();
      iStack_6 = 0x39e;
      FUN_32b2_6e99();
      iStack_6 = 0x3a6;
      FUN_32b2_6ef9();
      iStack_6 = 0x3af;
      FUN_32b2_6d14();
      iStack_6 = 0x3b4;
      FUN_32b2_6fc7();
      iStack_6 = 0x3bc;
      FUN_32b2_6d14();
      iStack_6 = 0x3c1;
      FUN_32b2_6fc7();
      iStack_6 = 0x3ca;
      FUN_32b2_710c();
      iStack_6 = 0x3cf;
      FUN_32b2_7191();
      if (!(bool)uVar10 && !(bool)uVar11) {
        iStack_6 = 0x3da;
        FUN_32b2_6d14();
        iStack_6 = 0x3e2;
        FUN_32b2_6d14();
        iStack_6 = 999;
        FUN_32b2_7191();
        if (!(bool)uVar11) {
          iStack_6 = 0x431;
          FUN_32b2_6d14();
          iStack_6 = 0x439;
          FUN_32b2_7124();
          iStack_6 = 0x441;
          FUN_32b2_6e99();
          iStack_6 = 0x44a;
          FUN_32b2_704d();
          iStack_6 = 0x453;
          FUN_32b2_7035();
          iStack_6 = 0x45c;
          FUN_32b2_6e99();
          iStack_6 = 0x464;
          FUN_32b2_6eb1();
          iStack_6 = 0x46c;
          FUN_32b2_6d14();
          iStack_6 = 0x474;
          FUN_32b2_710c();
          iStack_6 = 0x47c;
          FUN_32b2_710c();
          iStack_6 = 0x484;
          FUN_32b2_710c();
          iStack_6 = 0x48c;
          FUN_32b2_6d14();
          iStack_6 = 0x494;
          FUN_32b2_710c();
          iStack_6 = 0x49d;
          FUN_32b2_6e99();
          iStack_6 = 0x4a2;
          FUN_32b2_718c();
          iStack_6 = 0x4ab;
          FUN_32b2_6e99();
          iStack_6 = 0x4b3;
          FUN_32b2_6eb1();
          iStack_6 = 0x4bc;
          FUN_32b2_6d14();
          iStack_6 = 0x4c4;
          FUN_32b2_710c();
          iStack_6 = 0x4cd;
          FUN_32b2_710c();
          iStack_6 = 0x4d5;
          FUN_32b2_710c();
          iStack_6 = 0x4dd;
          FUN_32b2_710c();
          iStack_6 = 0x4e6;
          FUN_32b2_6e99();
          iStack_6 = 0x4ee;
          FUN_32b2_6eb1();
          iStack_6 = 0x4f7;
          FUN_32b2_6d14();
          iStack_6 = 0x500;
          FUN_32b2_710c();
          iStack_6 = 0x509;
          FUN_32b2_70dc();
          iStack_6 = 0x511;
          FUN_32b2_710c();
          iStack_6 = 0x519;
          FUN_32b2_710c();
          iStack_6 = 0x522;
          FUN_32b2_6e99();
          iStack_6 = 0x52b;
          FUN_32b2_6eb1();
          iStack_6 = 0x534;
          FUN_32b2_6d14();
          iStack_6 = 0x53d;
          FUN_32b2_710c();
          iStack_6 = 0x546;
          FUN_32b2_710c();
          iStack_6 = 0x54f;
          FUN_32b2_6d14();
          iStack_6 = 0x558;
          FUN_32b2_710c();
          iStack_6 = 0x55d;
          FUN_32b2_718c();
          iStack_6 = 0x566;
          FUN_32b2_6eb1();
          iStack_6 = 0x56f;
          FUN_32b2_6d14();
          iStack_6 = 0x574;
          FUN_32b2_6fd6();
          iStack_6 = 0x57d;
          FUN_32b2_6d14();
          iStack_6 = 0x586;
          FUN_32b2_710c();
          iStack_6 = 0x58b;
          FUN_32b2_7182();
          iStack_6 = 0x594;
          FUN_32b2_6e99();
          iStack_6 = 0x59c;
          FUN_32b2_710c();
          iStack_6 = 0x5a5;
          FUN_32b2_7154();
          iStack_6 = 0x5ae;
          FUN_32b2_6e99();
          iStack_6 = 0x5b7;
          FUN_32b2_6eb1();
          iStack_6 = 0x5c0;
          FUN_32b2_6d14();
          iStack_6 = 0x5c9;
          FUN_32b2_6eb1();
          iStack_6 = unaff_BP + -0x62;
          iStack_8 = 0x32b2;
          iStack_a = 0x5db;
          FUN_32b2_6cc6();
          iStack_8 = 0x32b2;
          iStack_a = 0x5e0;
          FUN_32b2_7258();
          uStack_10 = 0x32b2;
          uStack_12 = 0x5ea;
          FUN_32b2_6eb1();
          uStack_10 = 0x32b2;
          uStack_12 = 0x5f2;
          FUN_32b2_6cc6();
          uStack_10 = 0x32b2;
          uStack_12 = 0x5f7;
          FUN_32b2_7258();
          uStack_1a = 0x601;
          FUN_32b2_6eb1();
          uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_26 = *(undefined2 *)(unaff_BP + -0x4e);
          uStack_2a = 0x622;
          FUN_32b2_6d14();
          uStack_30 = 0x32b2;
          uStack_32 = 0x62c;
          FUN_32b2_6eb1();
          uStack_30 = 0x32b2;
          uStack_32 = 0x635;
          FUN_32b2_6d14();
          uStack_38 = 0x32b2;
          uStack_3a = 0x63f;
          FUN_32b2_6eb1();
          uStack_38 = 0;
          uStack_3a = 0x32b2;
          func_0x0003fc09();
          uVar8 = *(undefined2 *)(unaff_BP + -0x60);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)(unaff_BP + -0x84) = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x9c) = uVar8;
          iStack_6 = unaff_BP + -0x86;
          puVar7 = &uStack_26;
          puVar5 = (undefined2 *)(unaff_BP + 0x1c);
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          uStack_2a = 0x684;
          iVar6 = FUN_3ab8_522f();
          uVar10 = 0;
          uVar11 = iVar6 == 0;
          if (!(bool)uVar11) {
            iStack_6 = 0x694;
            FUN_32b2_6d14();
            iStack_6 = 0x69d;
            FUN_32b2_6cc6();
            iStack_6 = 0x6a5;
            FUN_32b2_701d();
            iStack_6 = 0x6aa;
            FUN_32b2_6fc7();
            iStack_6 = 0x6af;
            FUN_32b2_7258();
            iStack_6 = 0x6b4;
            FUN_32b2_7191();
            if ((bool)uVar10 || (bool)uVar11) {
              iStack_6 = 0x6bf;
              FUN_32b2_6d14();
              iStack_6 = 0x6c8;
              FUN_32b2_6cc6();
              iStack_6 = 0x6d1;
              FUN_32b2_701d();
              iStack_6 = 0x6d6;
              FUN_32b2_6fc7();
              iStack_6 = 0x6db;
              FUN_32b2_7258();
              iStack_6 = 0x6e0;
              FUN_32b2_7191();
              if ((bool)uVar10 || (bool)uVar11) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
            }
          }
          iStack_6 = 0x6f8;
          FUN_32b2_6d14();
          iStack_6 = 0x700;
          FUN_32b2_6d14();
          iStack_6 = 0x708;
          FUN_32b2_710c();
          iStack_6 = 0x711;
          FUN_32b2_710c();
          iStack_6 = 0x71a;
          FUN_32b2_7154();
          iStack_6 = 0x71f;
          FUN_32b2_7191();
          if (!(bool)uVar10) {
            iStack_6 = 0x72d;
            FUN_32b2_6d14();
            iStack_6 = 0x732;
            FUN_32b2_6fc7();
            iStack_6 = 0x73a;
            FUN_32b2_6d14();
            iStack_6 = 0x742;
            FUN_32b2_710c();
            iStack_6 = 0x74b;
            FUN_32b2_710c();
            iStack_6 = 0x750;
            FUN_32b2_7191();
            if (!(bool)uVar10) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
            iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
            iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
            uStack_c = 0x32b2;
            uStack_e = 0x774;
            FUN_32b2_7592();
            iStack_6 = 0x32b2;
            iStack_8 = 0x77e;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x786;
            FUN_32b2_70dc();
            iStack_6 = 0x32b2;
            iStack_8 = 0x78e;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x797;
            FUN_32b2_710c();
            iStack_6 = 0x32b2;
            iStack_8 = 0x79c;
            FUN_32b2_7182();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7a5;
            FUN_32b2_6e99();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7ad;
            FUN_32b2_710c();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7b5;
            FUN_32b2_7154();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7be;
            FUN_32b2_6e99();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7c7;
            FUN_32b2_6eb1();
            iStack_6 = unaff_BP + -0x8a;
            iStack_8 = unaff_BP + -0x62;
            iStack_a = 0x32b2;
            uStack_c = 0x7d9;
            FUN_32b2_6cc6();
            iStack_a = 0x32b2;
            uStack_c = 0x7de;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            uStack_14 = 0x7e8;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            uStack_14 = 0x7f0;
            FUN_32b2_6cc6();
            uStack_12 = 0x32b2;
            uStack_14 = 0x7f5;
            FUN_32b2_7258();
            uStack_1a = 0x32b2;
            FUN_32b2_6eb1();
            uStack_1a = *(undefined2 *)(unaff_BP + -100);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_26 = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_2a = 0x32b2;
            uStack_2c = 0x820;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x82a;
            FUN_32b2_6eb1();
            uStack_32 = 0x32b2;
            uStack_34 = 0x833;
            FUN_32b2_6d14();
            uStack_3a = 0x32b2;
            FUN_32b2_6eb1();
            uStack_3a = 0;
            func_0x0003fc09(0x32b2);
            uVar10 = (undefined1 *)0xffc9 < &uStack_3a;
            uVar11 = &stack0x0000 == (undefined1 *)0x4;
            iStack_6 = 0x32b2;
            iStack_8 = 0x84f;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x857;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x85c;
            FUN_32b2_7191();
            if ((bool)uVar11) {
              uVar8 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar8;
            }
            iStack_6 = 0x32b2;
            iStack_8 = 0x872;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x87a;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x87f;
            FUN_32b2_7191();
            if ((bool)uVar11) {
              uVar8 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar8;
            }
            uVar8 = *(undefined2 *)(unaff_BP + -0x60);
            puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
            *puVar5 = *(undefined2 *)(unaff_BP + -0x62);
            puVar5[1] = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x88);
            puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
            *puVar5 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar5[1] = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x60);
            puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar5 = *(undefined2 *)(unaff_BP + -0x62);
            puVar5[1] = uVar8;
            uVar8 = *(undefined2 *)(unaff_BP + -0x88);
            puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar5 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar5[1] = uVar8;
            piVar1 = (int *)(unaff_BP + -0x36);
            *piVar1 = *piVar1 + 1;
            uVar11 = *piVar1 == 0;
            iStack_6 = 0x32b2;
            iStack_8 = 0x8d7;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x8e0;
            FUN_32b2_6d14();
            iStack_6 = 0x32b2;
            iStack_8 = 0x8e5;
            FUN_32b2_7191();
            if (!(bool)uVar10 && !(bool)uVar11) {
              iStack_6 = *(undefined2 *)(unaff_BP + -0xb6);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_a = *(undefined2 *)(unaff_BP + -0xba);
              uStack_c = *(undefined2 *)(unaff_BP + -0xbc);
              uStack_e = 0x32b2;
              uStack_10 = 0x8ff;
              FUN_32b2_7592();
              iStack_8 = 0x32b2;
              iStack_a = 0x909;
              FUN_32b2_6d14();
              iStack_8 = 0x32b2;
              iStack_a = 0x911;
              FUN_32b2_7154();
              iStack_8 = 0x32b2;
              iStack_a = 0x916;
              FUN_32b2_6fd6();
              iStack_8 = 0x32b2;
              iStack_a = 0x91e;
              FUN_32b2_6d14();
              iStack_8 = 0x32b2;
              iStack_a = 0x927;
              FUN_32b2_710c();
              iStack_8 = 0x32b2;
              iStack_a = 0x92c;
              FUN_32b2_7182();
              iStack_8 = 0x32b2;
              iStack_a = 0x935;
              FUN_32b2_6e99();
              iStack_8 = 0x32b2;
              iStack_a = 0x93d;
              FUN_32b2_710c();
              iStack_8 = 0x32b2;
              iStack_a = 0x945;
              FUN_32b2_7154();
              iStack_8 = 0x32b2;
              iStack_a = 0x94e;
              FUN_32b2_6e99();
              iStack_8 = 0x32b2;
              iStack_a = 0x957;
              FUN_32b2_6eb1();
              iStack_8 = unaff_BP + -0x8a;
              iStack_a = unaff_BP + -0x62;
              uStack_c = 0x32b2;
              uStack_e = 0x969;
              FUN_32b2_6cc6();
              uStack_c = 0x32b2;
              uStack_e = 0x96e;
              FUN_32b2_7258();
              uStack_14 = 0x32b2;
              uStack_16 = 0x978;
              FUN_32b2_6eb1();
              uStack_14 = 0x32b2;
              uStack_16 = 0x980;
              FUN_32b2_6cc6();
              uStack_14 = 0x32b2;
              uStack_16 = 0x985;
              FUN_32b2_7258();
              uStack_1e = 0x98f;
              FUN_32b2_6eb1();
              uStack_1e = *(undefined2 *)(unaff_BP + -0x66);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x68);
              uStack_22 = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_24 = *(undefined2 *)(unaff_BP + -0x48);
              uStack_26 = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_2a = *(undefined2 *)(unaff_BP + -0x4e);
              uStack_2c = 0x32b2;
              uStack_2e = 0x9b0;
              FUN_32b2_6d14();
              uStack_34 = 0x32b2;
              uStack_36 = 0x9ba;
              FUN_32b2_6eb1();
              uStack_34 = 0x32b2;
              uStack_36 = 0x9c3;
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              func_0x0003fc09(0x32b2,0);
              uVar10 = &stack0x0000 == (undefined1 *)0x6;
              iStack_8 = 0x32b2;
              iStack_a = 0x9df;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0x9e7;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0x9ec;
              FUN_32b2_7191();
              if ((bool)uVar10) {
                uVar8 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar8;
              }
              iStack_8 = 0x32b2;
              iStack_a = 0xa02;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0xa0a;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0xa0f;
              FUN_32b2_7191();
              if ((bool)uVar10) {
                uVar8 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar8;
              }
              uVar8 = *(undefined2 *)(unaff_BP + -0x60);
              puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar5 = *(undefined2 *)(unaff_BP + -0x62);
              puVar5[1] = uVar8;
              uVar8 = *(undefined2 *)(unaff_BP + -0x88);
              puVar5 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar5 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar5[1] = uVar8;
              *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
            }
            return *(undefined2 *)(unaff_BP + -0x36);
          }
        }
        return 0;
      }
      iStack_6 = 0x3f5;
      FUN_32b2_6d14();
      iStack_6 = 0x32b2;
      iStack_8 = 0x3ff;
      FUN_32b2_7154();
      iStack_6 = 0x405;
      FUN_32b2_6eb1();
      *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -8);
      *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -6);
      *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -4);
      *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -2);
      *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x10);
      *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0xe);
      *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xc);
      *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -10);
      *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x46);
      *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x44);
      *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x42);
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
    }
    return 0;
  }
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x22b2;
  uStack_c = 0xffcb;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xffd5;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xffdd;
  puVar5 = (undefined2 *)FUN_1def_05d1();
  uVar8 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x962) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x960) = uVar8;
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x1bb4;
  uStack_c = 8;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0x12;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0x1a;
  puVar5 = (undefined2 *)func_0x0001e558();
  uVar8 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x95e) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x95c) = uVar8;
  puVar7 = &uStack_16;
  puVar5 = (undefined2 *)(unaff_BP + -0x96a);
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar4 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar4;
  }
  uStack_1a = 0x41;
  iVar6 = FUN_17a6_0cba();
  if (0 < iVar6) {
    *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
  }
  puVar5 = (undefined2 *)(unaff_BP + -0x96a);
  puVar7 = (undefined2 *)(unaff_BP + -0x496);
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = *puVar4;
  }
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x11f2;
  uStack_c = 0x74;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0x7e;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0x86;
  puVar5 = (undefined2 *)FUN_1def_05d1();
  uVar8 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x96a) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x968) = uVar8;
  iStack_6 = *(undefined2 *)0x99ee;
  iStack_8 = *(undefined2 *)0x99ec;
  iStack_a = 0x1bb4;
  uStack_c = 0xb1;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xbb;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xc3;
  puVar5 = (undefined2 *)func_0x0001e558();
  uVar8 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x966) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x964) = uVar8;
  if (*(int *)(unaff_BP + -0xa7a) != 0) {
    puVar7 = &uStack_16;
    puVar5 = (undefined2 *)(unaff_BP + -0x96a);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar4;
    }
    uStack_1a = 0xf1;
    iVar6 = FUN_17a6_0cba();
    if (0 < iVar6) {
      *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
    }
  }
  while (*(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1,
        *(int *)(unaff_BP + -0xa26) <= *(int *)(unaff_BP + -0x916)) {
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    puVar5 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar4;
    }
    puVar5 = (undefined2 *)(unaff_BP + -0x96a);
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar4;
    }
    if ((*(byte *)(unaff_BP + -0x481) & 2) != 0) {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x151;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x15a;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x15f;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x169;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0x172;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x177;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x199;
      func_0x000299d1();
      uStack_22 = 0x22b2;
      uStack_24 = 0x19e;
      FUN_1def_043a();
      uVar8 = *(undefined2 *)0x9984;
      uVar9 = *(undefined2 *)0x9986;
      *(undefined2 *)(unaff_BP + -0xaa0) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa9e) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa98) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa96) = uVar9;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x1d0;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x1d9;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x1de;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x1e8;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0x1f1;
      puVar5 = (undefined2 *)FUN_1def_05d1();
      uVar8 = *puVar5;
      uVar9 = puVar5[1];
      *(undefined2 *)(unaff_BP + -0xa9c) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa9a) = uVar9;
      *(undefined2 *)(unaff_BP + -0xaa4) = uVar8;
      *(undefined2 *)(unaff_BP + -0xaa2) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa7a) = 1;
      *(undefined2 *)(unaff_BP + -0xa18) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined2 *)(unaff_BP + -0xa26) = 1;
  while (*(int *)(unaff_BP + -0xa26) <= *(int *)(unaff_BP + -0x916)) {
    *(undefined2 *)(unaff_BP + -0xa78) = 0;
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    puVar5 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar4;
    }
    puVar5 = (undefined2 *)(unaff_BP + -0x96a);
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar4;
    }
    if ((*(byte *)(unaff_BP + -0x481) & 4) != 0) {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x6ed;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x6f6;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x6fb;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x705;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0x70e;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x713;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x735;
      func_0x000299d1();
      uStack_22 = 0x22b2;
      uStack_24 = 0x73a;
      FUN_1def_043a();
      uVar8 = *(undefined2 *)0x9986;
      *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)0x9984;
      *(undefined2 *)(unaff_BP + -0xa9e) = uVar8;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x764;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x76d;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x772;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x77c;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0x785;
      puVar5 = (undefined2 *)FUN_1def_05d1();
      uVar8 = *puVar5;
      uVar9 = puVar5[1];
      *(undefined2 *)(unaff_BP + -0xa9c) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa9a) = uVar9;
      *(undefined2 *)(unaff_BP + -0xaa8) = uVar8;
      *(undefined2 *)(unaff_BP + -0xaa6) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa18) = 1;
      while (uVar10 = *(uint *)(unaff_BP + -0xa18) < *(uint *)(unaff_BP + -0x914),
            (int)*(uint *)(unaff_BP + -0xa18) <= (int)*(uint *)(unaff_BP + -0x914)) {
        if (*(int *)(unaff_BP + -0xa26) != *(int *)(unaff_BP + -0xa18)) {
          puVar7 = (undefined2 *)(unaff_BP + -0x948);
          puVar5 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa18) * 0x16 + -0x906);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x329;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x332;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x337;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x341;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x34a;
          puVar5 = (undefined2 *)func_0x0001e558();
          uVar8 = puVar5[1];
          *(undefined2 *)(unaff_BP + -0xa90) = *puVar5;
          *(undefined2 *)(unaff_BP + -0xa8e) = uVar8;
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x374;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x37d;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x382;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x38c;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x395;
          puVar5 = (undefined2 *)func_0x0001e558();
          uVar8 = puVar5[1];
          *(undefined2 *)(unaff_BP + -0xa94) = *puVar5;
          *(undefined2 *)(unaff_BP + -0xa92) = uVar8;
          uVar3 = *(uint *)(unaff_BP + -0x914);
          uVar10 = uVar3 < 3;
          uVar11 = uVar3 == 3;
          if ((int)uVar3 < 4) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar10 || (bool)uVar11) {
LAB_3ab8_56de:
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar10) goto LAB_3ab8_5700;
            }
            else {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar10 || (bool)uVar11) goto LAB_3ab8_56de;
LAB_3ab8_571a:
              if (*(int *)(unaff_BP + -0x952) == 0) goto LAB_3ab8_575e;
              *(undefined2 *)(unaff_BP + -0xa78) = 1;
            }
          }
          else {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if (!(bool)uVar10 && !(bool)uVar11) {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar11) goto LAB_3ab8_571a;
            }
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar10) {
LAB_3ab8_5700:
              uVar10 = 1;
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if ((bool)uVar10) goto LAB_3ab8_571a;
            }
          }
          puVar7 = &uStack_1a;
          puVar5 = (undefined2 *)(unaff_BP + -0x948);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          puVar7 = &uStack_30;
          puVar5 = (undefined2 *)(unaff_BP + -0x496);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          uStack_32 = 0x22b2;
          uStack_34 = 0x2d4;
          iVar6 = FUN_1def_1921();
          if (iVar6 != 0) {
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0x430;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0x439;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0x43e;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0x448;
            func_0x000299d1();
            uStack_12 = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0x451;
            puVar5 = (undefined2 *)FUN_1def_05d1();
            uVar8 = puVar5[1];
            *(undefined2 *)(unaff_BP + -0xa80) = *puVar5;
            *(undefined2 *)(unaff_BP + -0xa7e) = uVar8;
            uVar11 = 0;
            uVar12 = *(int *)(unaff_BP + -0x952) == 0;
            uVar10 = uVar11;
            if ((bool)uVar12) {
LAB_3ab8_591f:
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar10) {
                uVar8 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9a) = uVar8;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar12) {
                uVar8 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9e) = uVar8;
              }
            }
            else {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar11 && !(bool)uVar12) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                uVar10 = 1;
                if ((bool)uVar11) goto LAB_3ab8_591f;
              }
            }
          }
        }
LAB_3ab8_575e:
        *(int *)(unaff_BP + -0xa18) = *(int *)(unaff_BP + -0xa18) + 1;
      }
      func_0x000297e6();
      func_0x00029d78();
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029bfc();
      uVar8 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar10) {
        if (*(int *)(unaff_BP + -0xa78) != 0) {
          *(undefined2 *)0xc22 = 1;
          iStack_6 = 2;
          iStack_8 = 0x11;
          iStack_a = unaff_BP + -0x10;
          uStack_c = 0x22b2;
          uVar8 = 0xdef;
          uStack_e = 0x54c;
          FUN_1000_02b5();
        }
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        uStack_c = 0x568;
        iStack_a = uVar8;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x572;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x57a;
        puVar5 = (undefined2 *)FUN_1def_05d1();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x962) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x960) = uVar8;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0x5a5;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x5af;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x5b7;
        puVar5 = (undefined2 *)func_0x0001e558();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x95e) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x95c) = uVar8;
        puVar7 = &uStack_16;
        puVar5 = (undefined2 *)(unaff_BP + -0x96a);
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar4 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar2 = *puVar4;
        }
        uStack_1a = 0x5de;
        iVar6 = FUN_17a6_0cba();
        if (0 < iVar6) {
          *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
        }
        puVar5 = (undefined2 *)(unaff_BP + -0x96a);
        puVar7 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar4;
        }
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x11f2;
        uStack_c = 0x611;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x61b;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x623;
        puVar5 = (undefined2 *)FUN_1def_05d1();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x96a) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x968) = uVar8;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0x64e;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0x658;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0x660;
        puVar5 = (undefined2 *)func_0x0001e558();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x966) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x964) = uVar8;
      }
      puVar7 = &uStack_16;
      puVar5 = (undefined2 *)(unaff_BP + -0x96a);
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar4;
      }
      uStack_1a = 0x687;
      iVar6 = FUN_17a6_0cba();
      if (0 < iVar6) {
        *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
      }
    }
    *(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1;
  }
  *(undefined2 *)(unaff_BP + -0xa26) = 1;
  do {
    if (*(int *)(unaff_BP + -0x916) < *(int *)(unaff_BP + -0xa26)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    puVar5 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa26) * 0x16 + -0x906);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar4;
    }
    puVar5 = (undefined2 *)(unaff_BP + -0x96a);
    puVar7 = (undefined2 *)(unaff_BP + -0x496);
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar4;
    }
    if (((*(byte *)(unaff_BP + -0x481) & 2) == 0) && ((*(byte *)(unaff_BP + -0x481) & 4) == 0)) {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x7c9;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x7d2;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x7d7;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x7e1;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0x7ea;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x7ef;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0x811;
      func_0x000299d1();
      uStack_22 = 0x22b2;
      uStack_24 = 0x816;
      FUN_1def_043a();
      uVar8 = *(undefined2 *)0x9984;
      uVar9 = *(undefined2 *)0x9986;
      *(undefined2 *)(unaff_BP + -0xaa0) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa9e) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa98) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa96) = uVar9;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0x848;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0x851;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0x856;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x860;
      func_0x000299d1();
      uStack_12 = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0x869;
      puVar5 = (undefined2 *)FUN_1def_05d1();
      uVar8 = *puVar5;
      uVar9 = puVar5[1];
      *(undefined2 *)(unaff_BP + -0xa9c) = uVar8;
      *(undefined2 *)(unaff_BP + -0xa9a) = uVar9;
      *(undefined2 *)(unaff_BP + -0xaa4) = uVar8;
      *(undefined2 *)(unaff_BP + -0xaa2) = uVar9;
      *(undefined2 *)(unaff_BP + -0xa7c) = 1;
      *(undefined2 *)(unaff_BP + -0xa7a) = 1;
      *(undefined2 *)(unaff_BP + -0xa18) = 1;
      while (uVar10 = *(uint *)(unaff_BP + -0xa18) < *(uint *)(unaff_BP + -0x914),
            (int)*(uint *)(unaff_BP + -0xa18) <= (int)*(uint *)(unaff_BP + -0x914)) {
        if (*(int *)(unaff_BP + -0xa26) != *(int *)(unaff_BP + -0xa18)) {
          puVar7 = (undefined2 *)(unaff_BP + -0x948);
          puVar5 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0xa18) * 0x16 + -0x906);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x916;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x91f;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x924;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x92e;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x937;
          puVar5 = (undefined2 *)func_0x0001e558();
          uVar8 = puVar5[1];
          *(undefined2 *)(unaff_BP + -0xa90) = *puVar5;
          *(undefined2 *)(unaff_BP + -0xa8e) = uVar8;
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 0x961;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0x96a;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0x96f;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0x979;
          func_0x000299d1();
          uStack_12 = 1;
          uStack_14 = 0x22b2;
          uStack_16 = 0x982;
          puVar5 = (undefined2 *)func_0x0001e558();
          uVar10 = (undefined1 *)0xffed < &uStack_12;
          uVar11 = &stack0x0000 == (undefined1 *)0x0;
          uVar8 = puVar5[1];
          *(undefined2 *)(unaff_BP + -0xa94) = *puVar5;
          *(undefined2 *)(unaff_BP + -0xa92) = uVar8;
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if (!(bool)uVar10 && !(bool)uVar11) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if (!(bool)uVar10 && !(bool)uVar11) goto LAB_3ab8_5d4b;
          }
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if ((bool)uVar10) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if ((bool)uVar10) goto LAB_3ab8_5d4b;
          }
          puVar7 = &uStack_1a;
          puVar5 = (undefined2 *)(unaff_BP + -0x948);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          puVar7 = &uStack_30;
          puVar5 = (undefined2 *)(unaff_BP + -0x496);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          uStack_32 = 0x22b2;
          uStack_34 = 0x8c1;
          iVar6 = FUN_1def_1921();
          if (iVar6 != 0) {
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            uStack_c = 0xa2d;
            func_0x000299d1();
            iStack_a = 0x22b2;
            uStack_c = 0xa36;
            func_0x000297e6();
            iStack_a = 0x22b2;
            uStack_c = 0xa3b;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0xa45;
            func_0x000299d1();
            uStack_12 = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0xa4e;
            puVar5 = (undefined2 *)FUN_1def_05d1();
            uVar10 = (undefined1 *)0xffed < &uStack_12;
            uVar11 = &stack0x0000 == (undefined1 *)0x0;
            uVar8 = puVar5[1];
            *(undefined2 *)(unaff_BP + -0xa80) = *puVar5;
            *(undefined2 *)(unaff_BP + -0xa7e) = uVar8;
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029bfc();
            FUN_28b3_1181();
            if ((bool)uVar10 || (bool)uVar11) {
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029c74();
              FUN_28b3_1181();
              if (!(bool)uVar10) {
                *(undefined2 *)(unaff_BP + -0xa7c) = 0;
              }
            }
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029bfc();
            FUN_28b3_1181();
            if ((bool)uVar10 || (bool)uVar11) {
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029c74();
              FUN_28b3_1181();
              if (!(bool)uVar10) {
                *(undefined2 *)(unaff_BP + -0xa7a) = 0;
              }
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar10) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c74();
              FUN_28b3_1181();
              if ((bool)uVar10) {
                uVar8 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xa9c) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9a) = uVar8;
              }
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar10 && !(bool)uVar11) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029bfc();
              FUN_28b3_1181();
              if (!(bool)uVar10 && !(bool)uVar11) {
                uVar8 = *(undefined2 *)(unaff_BP + -0xa7e);
                *(undefined2 *)(unaff_BP + -0xaa0) = *(undefined2 *)(unaff_BP + -0xa80);
                *(undefined2 *)(unaff_BP + -0xa9e) = uVar8;
              }
            }
          }
        }
LAB_3ab8_5d4b:
        *(int *)(unaff_BP + -0xa18) = *(int *)(unaff_BP + -0xa18) + 1;
      }
      func_0x000297e6();
      func_0x00029d78();
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c74();
      FUN_28b3_1181();
      if (!(bool)uVar10) {
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x22b2;
        uStack_c = 0xbef;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbf9;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0xc01;
        puVar5 = (undefined2 *)FUN_1def_05d1();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x962) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x960) = uVar8;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0xc2c;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xc36;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uVar9 = 0x1bb4;
        uStack_16 = 0xc3e;
        puVar5 = (undefined2 *)func_0x0001e558();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x95e) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x95c) = uVar8;
        if (*(int *)(unaff_BP + -0xa7c) != 0) {
          puVar7 = &uStack_16;
          puVar5 = (undefined2 *)(unaff_BP + -0x96a);
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar4 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
          }
          uVar9 = 0x11f2;
          uStack_1a = 0xc6c;
          iVar6 = FUN_17a6_0cba();
          if (0 < iVar6) {
            *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
          }
        }
        puVar5 = (undefined2 *)(unaff_BP + -0x96a);
        puVar7 = (undefined2 *)(unaff_BP + -0x496);
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar4;
        }
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        uStack_c = 0xc9f;
        iStack_a = uVar9;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xca9;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0xcb1;
        puVar5 = (undefined2 *)FUN_1def_05d1();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x96a) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x968) = uVar8;
        iStack_6 = *(undefined2 *)0x99ee;
        iStack_8 = *(undefined2 *)0x99ec;
        iStack_a = 0x1bb4;
        uStack_c = 0xcdc;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xce6;
        func_0x000299d1();
        uStack_12 = 0;
        uStack_14 = 0x22b2;
        uStack_16 = 0xcee;
        puVar5 = (undefined2 *)func_0x0001e558();
        uVar8 = puVar5[1];
        *(undefined2 *)(unaff_BP + -0x966) = *puVar5;
        *(undefined2 *)(unaff_BP + -0x964) = uVar8;
        if (*(int *)(unaff_BP + -0xa7a) == 0) goto LAB_3ab8_61a7;
      }
      puVar7 = &uStack_16;
      puVar5 = (undefined2 *)(unaff_BP + -0x96a);
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar4;
      }
      uStack_1a = 0xd1c;
      iVar6 = FUN_17a6_0cba();
      if (0 < iVar6) {
        *(int *)(unaff_BP + -0x99e) = *(int *)(unaff_BP + -0x99e) + 1;
      }
    }
LAB_3ab8_61a7:
    *(int *)(unaff_BP + -0xa26) = *(int *)(unaff_BP + -0xa26) + 1;
  } while( true );
}



/* 3ab8:6220  FUN_3ab8_6220  361 bytes, 0 callers */

void __cdecl16far FUN_3ab8_6220(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 *in_stack_00000030;
  undefined2 *in_stack_00000032;
  undefined2 auStack_36 [10];
  undefined2 auStack_20 [2];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 auStack_18 [3];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 local_e [4];
  undefined2 **local_a;
  undefined1 *puStack_8;
  
  FUN_21f2_0ebc();
  puStack_8 = (undefined1 *)0x22b2;
  local_a = (undefined2 **)0xdb6;
  func_0x000297e6();
  puStack_8 = (undefined1 *)0x22b2;
  local_a = (undefined2 **)0xdbe;
  func_0x000297e6();
  puStack_8 = (undefined1 *)0x22b2;
  local_a = (undefined2 **)0xdc3;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xdcd;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xdd5;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xdda;
  func_0x00029d78();
  auStack_18[0] = 0x22b2;
  uStack_1a = 0xde4;
  func_0x000299d1();
  auStack_18[0] = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0xded;
  func_0x0001e558();
  puStack_8 = (undefined1 *)0x1bb4;
  local_a = (undefined2 **)0xdf7;
  func_0x000297e6();
  puStack_8 = (undefined1 *)0x22b2;
  local_a = (undefined2 **)0xdff;
  func_0x000297e6();
  puStack_8 = (undefined1 *)0x22b2;
  local_a = (undefined2 **)0xe04;
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xe0e;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xe16;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xe1b;
  func_0x00029d78();
  auStack_18[0] = 0x22b2;
  uStack_1a = 0xe25;
  func_0x000299d1();
  auStack_18[0] = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0xe2e;
  func_0x0001e558();
  uVar8 = (undefined1 *)0xffed < auStack_18;
  uVar9 = &stack0x0000 == (undefined1 *)0x6;
  puStack_8 = (undefined1 *)0x1bb4;
  local_a = (undefined2 **)0xe38;
  func_0x00029b6d();
  puStack_8 = (undefined1 *)0x22b2;
  local_a = (undefined2 **)0xe3d;
  FUN_28b3_1181();
  if ((bool)uVar8 || (bool)uVar9) {
    puStack_8 = local_e;
    local_a = &local_a;
    puVar7 = auStack_20;
    puVar5 = (undefined2 *)&stack0x001a;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    puVar7 = auStack_36;
    puVar5 = (undefined2 *)&stack0x0004;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    iVar6 = FUN_1def_1921();
    if (iVar6 != 0) {
      puStack_8 = (undefined1 *)0x1bb4;
      local_a = (undefined2 **)0xe7a;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      local_a = (undefined2 **)0xe7f;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xe89;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xe91;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xe96;
      func_0x00029d78();
      auStack_18[0] = 0x22b2;
      uStack_1a = 0xea0;
      func_0x000299d1();
      auStack_18[0] = 1;
      uStack_1a = 0x22b2;
      uStack_1c = 0xea9;
      puVar5 = (undefined2 *)FUN_1def_05d1();
      uVar8 = (undefined1 *)0xffed < auStack_18;
      uVar9 = &stack0x0000 == (undefined1 *)0x6;
      uVar3 = *puVar5;
      uVar4 = puVar5[1];
      puStack_8 = (undefined1 *)0x1bb4;
      local_a = (undefined2 **)0xec1;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      local_a = (undefined2 **)0xec9;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      local_a = (undefined2 **)0xece;
      FUN_28b3_1181();
      if ((bool)uVar8) {
        *in_stack_00000030 = uVar3;
        in_stack_00000030[1] = uVar4;
      }
      puStack_8 = (undefined1 *)0x22b2;
      local_a = (undefined2 **)0xee6;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      local_a = (undefined2 **)0xeee;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      local_a = (undefined2 **)0xef3;
      FUN_28b3_1181();
      if (!(bool)uVar8 && !(bool)uVar9) {
        *in_stack_00000032 = uVar3;
        in_stack_00000032[1] = uVar4;
      }
    }
  }
  return;
}


